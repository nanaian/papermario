#! /usr/bin/python3

import sys
import os
import yaml
import json
from struct import unpack
import argparse

import disasm_script

DIR = os.path.dirname(__file__)

# From mips_to_c: https://github.com/matt-kempster/mips_to_c/blob/d208400cca045113dada3e16c0d59c50cdac4529/src/translate.py#L2085
def format_f32_imm(num: int) -> str:
    import math
    import struct

    packed = struct.pack(">I", num & (2 ** 32 - 1))
    value = struct.unpack(">f", packed)[0]

    if not value or value == 4294967296.0:
        # Zero, negative zero, nan, or INT_MAX.
        return str(value)

    # Write values smaller than 1e-7 / greater than 1e7 using scientific notation,
    # and values in between using fixed point.
    if abs(math.log10(abs(value))) > 6.9:
        fmt_char = "e"
    elif abs(value) < 1:
        fmt_char = "f"
    else:
        fmt_char = "g"

    def fmt(prec: int) -> str:
        """Format 'value' with 'prec' significant digits/decimals, in either scientific
        or regular notation depending on 'fmt_char'."""
        ret = ("{:." + str(prec) + fmt_char + "}").format(value)
        if fmt_char == "e":
            return ret.replace("e+", "e").replace("e0", "e").replace("e-0", "e-")
        if "e" in ret:
            # The "g" format character can sometimes introduce scientific notation if
            # formatting with too few decimals. If this happens, return an incorrect
            # value to prevent the result from being used.
            #
            # Since the value we are formatting is within (1e-7, 1e7) in absolute
            # value, it will at least be possible to format with 7 decimals, which is
            # less than float precision. Thus, this annoying Python limitation won't
            # lead to us outputting numbers with more precision than we really have.
            return "0"
        return ret

    # 20 decimals is more than enough for a float. Start there, then try to shrink it.
    prec = 20
    while prec > 0:
        prec -= 1
        value2 = float(fmt(prec))
        if struct.pack(">f", value2) != packed:
            prec += 1
            break

    if prec == 20:
        # Uh oh, even the original value didn't format correctly. Fall back to str(),
        # which ought to work.
        return str(value)

    ret = fmt(prec)
    if "." not in ret:
        ret += ".0"
    return ret

def disassemble(bytes, midx, symbol_map={}, comments=True, romstart=0):
    out = ""
    forward_declarations = []

    entry_list_name = None
    main_script_name = None

    while len(midx) > 0:
        struct = midx.pop(0)
        name = struct["name"]

        print("  " + name)

        if bytes.tell() != romstart + struct["start"]:
            delta = bytes.tell() - romstart + struct["start"]
            out += f"// XXX misaligned by {delta} bytes!\n"
            bytes.seek(-delta, 1)
            print(out)
            exit(1)

        if comments:
            out += f"// {romstart+struct['start']:X}-{romstart+struct['end']:X} (VRAM: {struct['vaddr']:X})\n"

        # format struct
        if struct["type"].startswith("Script"):
            if struct["type"] == "Script_Main":
                name = "N(main)"

            forward_declarations.append(f"Script {name};")

            pos = bytes.tell()
            try:
                script = disasm_script.ScriptDSLDisassembler(bytes, name, symbol_map)
                out += script.disassemble()
            except disasm_script.UnsupportedScript as e:
                out += f"// Unable to use DSL: {e}\n"

                bytes.seek(pos)
                out += disasm_script.ScriptDisassembler(bytes, name, symbol_map).disassemble()
        elif struct["type"] == "EntryList":
            #forward_declarations.append(f"EntryList {name};")

            entry_list_name = name
            out += f"EntryList {name} = {{"
            for i in range(0, struct["length"], 4 * 4):
                x,y,z,yaw = unpack(">ffff", bytes.read(4 * 4))
                out += f"\n    {{ {x}f, {y}f, {z}f, {yaw}f }},"
            out += f"\n}};\n"
        elif struct["type"] == "Header":
            #forward_declarations.append(f"MapConfig {name};")
            out += f"MapConfig {name} = {{\n"

            bytes.read(0x10)

            main,entry_list,entry_count = unpack(">IIi", bytes.read(4 * 3))
            out += f"    .main = N(main),\n"
            out += f"    .entryList = {entry_list_name},\n"
            out += f"    .entryCount = ENTRY_COUNT({entry_list_name}),\n"

            bytes.read(0x1C)

            bg,tattle = unpack(">II", bytes.read(4 * 2))
            if bg == 0x80200000:
                out += f"    .background = &gBackgroundImage,\n"
            elif bg != 0:
                raise Exception(f"unknown MapConfig background {bg:X}")
            out += f"    .tattle = 0x{tattle:X},\n"

            out += f"}};\n"
        elif struct["type"] == "ASCII":
            string_data = bytes.read(struct["length"]).decode("ascii")

            # strip null terminator(s)
            while string_data[-1] == "\0":
                string_data = string_data[:-1]

            string_literal = json.dumps(string_data)
            forward_declarations.append(f"const char {name}[{len(string_literal)}]; // {string_literal}")
            #out += f"const char {struct['name']}[] = {string_literal};\n"
            out += f"// rodata: {struct['name']}\n"
        elif struct["type"] == "JumpTable" or struct["type"].startswith("Const"):
            bytes.read(struct["length"])
            out += f"// rodata: {struct['name']}\n"
        elif struct["type"].startswith("Function"):
            bytes.read(struct["length"])
            out += f"// text: {name}\n"
        elif struct["type"] == "FloatTable":
            forward_declarations.append(f"f32 {name}[{struct['length']//4}];")
            out += f"f32 {name}[] = {{"
            for i in range(0, struct["length"], 4):
                if (i % 0x20) == 0:
                    out += f"\n   "

                word = unpack(">I", bytes.read(4))[0]
                out += " " + format_f32_imm(word) + "f,"

            out += f"\n}};\n"
        elif struct["type"] == "NpcGroupList":
            forward_declarations.append(f"NpcGroupList {name};")
            out += f"NpcGroupList {name} = {{\n"

            assert (struct["length"] % 0xC) == 0, struct["length"]
            for i in range(0, struct["length"], 0xC):
                # sizeof
                word = int.from_bytes(bytes.read(4), byteorder="big")
                if word == 0:
                    bytes.read(8)
                    out += "    {},\n"
                    break

                # npcgroup*
                npc_group_ptr = int.from_bytes(bytes.read(4), byteorder="big")
                if npc_group_ptr in symbol_map:
                    npc_group_ptr = symbol_map[npc_group_ptr]

                # battle id
                battle_id = int.from_bytes(bytes.read(4), byteorder="big")

                # FIXME
                #battle_area = battle_id >> 16
                #battle_stage = (battle_id >> 8) & 0xFF
                #battle_index = battle_id & 0xFF
                #out += f"    NPC_GROUP({npc_group_ptr}, BATTLE_ID({battle_area}, {battle_stage}, {battle_index})),\n"
                out += f"    NPC_GROUP({npc_group_ptr}, 0x{battle_id:08X}),\n"

            out += f"}};\n"
        elif struct["type"] == "NpcGroup" and (struct["length"] % 0x1F0) == 0:
            num_npcs = struct["length"] // 0x1F0

            forward_declarations.append(f"StaticNpc {name}[{num_npcs}];")
            out += f"StaticNpc {name}[] = {{\n"

            for i in range(num_npcs):
                npc = bytes.read(0x1F0) # StaticNpc

                data = unpack(">iIfffIIIIiBB", npc[:0x2A])
                out += f"    {{\n"
                out += f"        .id = {data[0]},\n"
                out += f"        .settings = {'&' + symbol_map[data[1]] if data[1] in symbol_map else data[1]},\n"
                out += f"        .pos = {{ {data[2]}, {data[3]}, {data[4]} }},\n"
                out += f"        .flags = 0x{data[5]:08X},\n"
                if data[6]: out += f"        .init = {symbol_map[data[6]] if data[6] in symbol_map else data[6]},\n"
                if data[7]: out += f"        .unk_1C = 0x{data[7]:08X},\n"
                if data[8]: out += f"        .unk_20 = 0x{data[8]:08X},\n"
                out += f"        .yaw = {data[9]},\n"
                if data[10]: out += f"        .dropFlags = 0x{data[10]:X},\n"
                if data[11]: out += f"        .itemDropChance = {data[11]},\n"

                item_drops = []
                for i in range(8):
                    item, weight, unk_08 = unpack(">hhh", npc[0x2A + i * 6 : 0x2A + (i + 1) * 6])
                    assert unk_08 == 0 # padding
                    item_drops.append(f"{{ {ITEMS.get(item, item)}, {weight} }}")

                for i in range(8):
                    if item_drops[len(item_drops) - 1] == "{ 0, 0 }":
                        item_drops.pop()

                if len(item_drops) > 0:
                    out += f"        .itemDrops = {{ {', '.join(item_drops)} }},\n"

                movement_data = []
                for i in range(0xE0, 0x1A0, 4):
                    word = int.from_bytes(npc[i:i+4], byteorder="big")
                    movement_data.append(f"0x{word:08X}")

                for i in range(0xE0, 0x1A0, 4):
                    if movement_data[len(movement_data) - 1] == "0x00000000":
                        movement_data.pop()

                if len(movement_data) > 0:
                    out += f"        .movement = {{ {', '.join(movement_data)} }},\n"

                out += "        .animations = {\n           "
                for i in range(0x1A0, 0x1E0, 4):
                    word = int.from_bytes(npc[i:i+4], byteorder="big")
                    out += f" 0x{word:08X},"
                out += "\n        },\n"

                if npc[0x1E0]: out += f"        0x{npc[0x1E0]:08X},\n"
                if npc[0x1E4]: out += f"        0x{npc[0x1E4]:08X},\n"

                extra_animations, tattle = unpack(">II", npc[0x1E8:])
                if extra_animations: out += f"        .extraAnimations = {symbol_map[extra_animations]},\n"
                if tattle: out += f"        .tattle = 0x{tattle:X},\n"

                out += f"    }},\n"

            out += "};\n"
        elif struct["type"] == "Vec4f":
            x, y, z, w = unpack(">IIII", bytes.read(struct["length"]))

            out += f"Vec4f {name} =  {{ {format_f32_imm(x)}f, {format_f32_imm(y)}f, {format_f32_imm(z)}f, {format_f32_imm(w)}f }};\n"
        elif struct["type"] in TYPES:
            transform = TYPES[struct["type"]]
            out += struct["type"] + " " + name + " = "
            out += transform(bytes, symbol_map, struct["length"])
            out += ";\n"
        else: # unknown type of struct
            if (struct["length"] % 4) == 0:
                # wordwise
                forward_declarations.append(f"s32 {name}[{struct['length']//4}];")
                out += f"s32 {name}[] = {{"
                for i in range(0, struct["length"], 4):
                    if (i % 0x20) == 0:
                        out += f"\n   "

                    word = int.from_bytes(bytes.read(4), byteorder="big")

                    if word in symbol_map:
                        out += f" {symbol_map[word]},"
                    else:
                        out += f" 0x{word:08X},"
            else:
                # charwise
                forward_declarations.append(f"s8 {name}[{struct['length']}];")
                out += f"s8 {name}[] = {{"
                for i in range(0, struct["length"], 1):
                    if (i % 0x10) == 0:
                        out += f"\n   "

                    byte = int.from_bytes(bytes.read(1), byteorder="big")
                    out += f" 0x{byte:02X},"

            out += f"\n}};\n"

        out += "\n"

    # end of data
    return "\n".join(forward_declarations) + "\n\n" + out[:-1]

def parse_midx(file, offset, map_name, prefix = ""):
    structs = []

    for line in file.readlines():
        s = line.split("#")
        if len(s) == 5:
            if s[0] == "$Start": continue
            if s[0] == "$End": continue

            struct = {
                "name": prefix + name_struct(s[0], offset + int(s[2], 16), map_name),
                "type": STRUCT_TYPE_RENAMES[s[1]] if s[1] in STRUCT_TYPE_RENAMES else s[1],
                "start": int(s[2], 16),
                "vaddr": int(s[3], 16),
                "length": int(s[4], 16),
                "end": int(s[2], 16) + int(s[4], 16),
            }

            if struct["type"] == "AISettings":
                if struct["length"] == 0x24:
                    struct["type"] = "NpcAISettingsSmall"
                elif struct["length"] == 0x30:
                    struct["type"] = "NpcAISettings"
                else:
                    # ??? see trd_08
                    struct["type"] = "IntTable"

            structs.append(struct)
        elif "Missing" in s:
            start = int(s[1], 16)
            end = int(s[2], 16)
            vaddr = start + 0x80240000
            structs.append({
                "name": f"{prefix}unk_missing_{vaddr:X}",
                "type": "Missing",
                "start": start,
                "vaddr": vaddr,
                "length": end - start,
                "end": end,
            })
        elif "Padding" in s:
            start = int(s[1], 16)
            end = int(s[2], 16)
            vaddr = start + 0x80240000
            structs.append({
                "name": f"{prefix}pad_{start:06X}",
                "type": "Padding",
                "start": start,
                "vaddr": vaddr,
                "length": end - start,
                "end": end,
            })

    structs.sort(key=lambda s: s["start"])

    for i in range(len(structs) - 1):
        assert structs[i]["end"] == structs[i+1]["start"], f'struct {structs[i]["name"]} is noncontiguous with following struct {structs[i+1]["name"]}'

    return structs

RENAMES = {}
with open("duplicate_renames.txt", "r") as f:
    for line in f.readlines():
        src, dest = line.split(",")
        RENAMES[src] = dest.rstrip()

def name_struct(s, rom_offset, map_name):
    s = s[1:].replace("???", "unk")

    """
    # use ThisCase for scripts
    if s.startswith("Script_"):
        s = s[7].upper() + s[8:]

        # if `s` is hex, prefix it with Script_ again
        try:
            int(s, 16)
            return "Script_" + s
        except Exception:
            pass

        if s.startswith("Main"):
            return "Main"

        return s
    """

    if s.startswith("ASCII") or s.startswith("Const"):
        return "D_" + s.split("_")[1] + f"_{rom_offset:06X}"

    if s.startswith("JumpTable"):
        return "jtbl_" + s.split("_")[1] + f"_{rom_offset:06X}"

    if s.startswith("Function"):
        src = (s[0].lower() + s[1:]).replace("function", "func") + f"_{rom_offset:06X}"

        if src in RENAMES:
            dest = RENAMES[src]
            return dest.replace(map_name + "_", "N(") + ")" if dest.startswith(map_name + "_") else dest
        else:
            return src

    return "N(" + s[0].lower() + s[1:] + ")"

def cstruct(struct, length = -1):
    import re
    from struct import unpack

    def transform(stream, symbol_map, max_size):
        ret = "{\n"

        total_size = 0

        for line in struct.splitlines():
            line = line.strip()
            if len(line) == 0:
                continue

            if match := re.match(r"\/\* 0x([a-fA-F0-9])+ \*\/ (\w+)(\*)? (\w+)(\[[^\]]+\])?;", line):
                offset = int(match[1], 16)
                ctype = match[2]
                is_ptr = ctype == "UNK_PTR" or match[3] == "*"
                field = match[4]
                array_count = eval(match[5][1:-1]) if match[5] else None

                if ctype == "char" or ctype == "s8" or ctype == "u8":
                    ctype_size = 1
                elif ctype == "s16" or ctype == "u16":
                    ctype_size = 2
                elif ctype == "s32" or ctype == "u32" or is_ptr or ctype == "f32":
                    ctype_size = 4
                elif ctype == "Vec3f":
                    ctype_size = 4 * 3

                if not ctype_size:
                    print("don't know size of ctype: " + ctype)

                if array_count == 0: # special case for variable-size arrays
                    array_count = data # previous value

                ret += "    ." + field + " ="

                if array_count is not None:
                    ret += " {"

                for i in range(array_count if array_count is not None else 1):
                    total_size += ctype_size

                    # for malformed variable-size arrays (e.g. sam_02 TreeModelList_Tree1_Leaves)
                    if total_size > max_size:
                        break

                    if ctype == "f32":
                        data = unpack(">I", stream.read(ctype_size))[0]
                        ret += " " + format_f32_imm(data) + "f,"


                    elif ctype == "Vec3f":
                        x, y, z = unpack(">III", stream.read(ctype_size))
                        ret += f" {{ {format_f32_imm(x)}f, {format_f32_imm(y)}f, {format_f32_imm(z)}f }},"
                    else:
                        data = int.from_bytes(stream.read(ctype_size), byteorder="big")

                        if data in symbol_map:
                            ret += f" &{symbol_map[data]},"
                        elif data == 0:
                            ret += " NULL," if is_ptr else " 0,"
                        else:
                            ret += f" 0x{data:X},"

                ret = ret[:-1] # trim trailing comma

                if array_count is not None:
                    ret += " }"

                ret += ",\n"
            else:
                print("bad cstruct line: " + line)

        if length > 0:
            assert total_size == length

        ret += "}"

        return ret

    return transform

STRUCT_TYPE_RENAMES = {
    #"AISettings": "NpcAISettings"
    "TreeEffectVectors": "TreeEffectVectorList",
    "TreeModelList": "ModelIdList",
    "TriggerCoord": "Vec4f",
    "ShakeTreeEvent": "ShakeTree",
}

TYPES = {
    "NpcSettings": cstruct("""
        /* 0x00 */ char unk_00[4];
        /* 0x04 */ s16 height;
        /* 0x06 */ s16 radius;
        /* 0x08 */ UNK_PTR otherAI;
        /* 0x0C */ Script* onInteract;
        /* 0x10 */ Script* ai;
        /* 0x14 */ Script* onHit;
        /* 0x18 */ Script* aux;
        /* 0x1C */ Script* onDefeat;
        /* 0x20 */ s32 flags;
        /* 0x24 */ char unk_24[4];
        /* 0x28 */ s16 level;
        /* 0x2A */ s16 unk_2A;
    """, length=0x2C),
    "NpcAISettings": cstruct("""
        /* 0x00 */ f32 moveSpeed;
        /* 0x04 */ s32 moveTime;
        /* 0x08 */ s32 waitTime;
        /* 0x0C */ f32 alertRadius;
        /* 0x10 */ f32 unk_10;
        /* 0x14 */ s32 unk_14;
        /* 0x18 */ f32 chaseSpeed;
        /* 0x1C */ s32 unk_1C;
        /* 0x20 */ s32 unk_20;
        /* 0x24 */ f32 chaseRadius;
        /* 0x28 */ f32 unk_28;
        /* 0x2C */ s32 unk_2C;
    """, length=0x30),
    "NpcAISettingsSmall": cstruct("""
        /* 0x00 */ f32 alertRadius;
        /* 0x04 */ f32 unk_10;
        /* 0x08 */ s32 unk_14;
        /* 0x0C */ f32 chaseSpeed;
        /* 0x10 */ s32 unk_1C;
        /* 0x14 */ s32 unk_20;
        /* 0x18 */ f32 chaseRadius;
        /* 0x1C */ f32 unk_28;
        /* 0x20 */ s32 unk_2C;
    """, length=0x24),
    "ShakeTree": cstruct("""
        /* 0x00 */ ModelIdList* leaves;
        /* 0x04 */ ModelIdList* trunk;
        /* 0x08 */ TreeDropList* drops;
        /* 0x0C */ TreeEffectVectorList* effectVectors;
        /* 0x10 */ Script* callback;
    """, length=0x14),
    "TreeEffectVectorList": cstruct("""
        /* 0x00 */ s32 count;
        /* 0x04 */ Vec3f vectors[0];
    """),
    "ModelIdList": cstruct("""
        /* 0x00 */ s32 count;
        /* 0x04 */ s32 modelIDs[0];
    """),
}

ITEMS = {
    0x00000001: "ItemId_JUMP",
    0x00000002: "ItemId_SPIN_JUMP",
    0x00000003: "ItemId_TORNADO_JUMP",
    0x00000004: "ItemId_HAMMER",
    0x00000005: "ItemId_SUPER_HAMMER",
    0x00000006: "ItemId_ULTRA_HAMMER",
    0x00000007: "ItemId_LUCKY_STAR",
    0x00000008: "ItemId_MAP",
    0x00000009: "ItemId_BIG_MAP",
    0x0000000A: "ItemId_FIRST_DEGREE_CARD",
    0x0000000B: "ItemId_SECOND_DEGREE_CARD",
    0x0000000C: "ItemId_THIRD_DEGREE_CARD",
    0x0000000D: "ItemId_FOURTH_DEGREE_CARD",
    0x0000000E: "ItemId_DIPLOMA",
    0x0000000F: "ItemId_ULTRA_STONE",
    0x00000010: "ItemId_FORTRESS_KEY",
    0x00000011: "ItemId_RUINS_KEY",
    0x00000012: "ItemId_PULSE_STONE",
    0x00000013: "ItemId_CASTLE_KEY1",
    0x00000014: "ItemId_PALACE_KEY",
    0x00000015: "ItemId_LUNAR_STONE",
    0x00000016: "ItemId_PYRAMID_STONE",
    0x00000017: "ItemId_DIAMOND_STONE",
    0x00000018: "ItemId_GOLDEN_VASE",
    0x00000019: "ItemId_KOOPERS_SHELL",
    0x0000001A: "ItemId_CASTLE_KEY2",
    0x0000001B: "ItemId_FOREST_PASS",
    0x0000001C: "ItemId_WEIGHT",
    0x0000001D: "ItemId_BOOS_PORTRAIT",
    0x0000001E: "ItemId_CRYSTAL_BERRY",
    0x0000001F: "ItemId_MYSTICAL_KEY",
    0x00000020: "ItemId_STOREROOM_KEY",
    0x00000021: "ItemId_TOY_TRAIN",
    0x00000022: "ItemId_RECORD",
    0x00000023: "ItemId_FRYING_PAN",
    0x00000024: "ItemId_DICTIONARY",
    0x00000025: "ItemId_MYSTERY_NOTE",
    0x00000026: "ItemId_SUSPICIOUS_NOTE",
    0x00000027: "ItemId_CRYSTAL_BALL",
    0x00000028: "ItemId_SCREWDRIVER",
    0x00000029: "ItemId_COOKBOOK",
    0x0000002A: "ItemId_JADE_RAVEN",
    0x0000002B: "ItemId_MAGICAL_SEED1",
    0x0000002C: "ItemId_MAGICAL_SEED2",
    0x0000002D: "ItemId_MAGICAL_SEED3",
    0x0000002E: "ItemId_MAGICAL_SEED4",
    0x0000002F: "ItemId_TOAD_DOLL",
    0x00000030: "ItemId_CALCULATOR",
    0x00000031: "ItemId_BUCKET",
    0x00000032: "ItemId_SCARF",
    0x00000033: "ItemId_RED_KEY",
    0x00000034: "ItemId_BLUE_KEY",
    0x00000036: "ItemId_LETTER01",
    0x00000037: "ItemId_LETTER02",
    0x00000038: "ItemId_LETTER03",
    0x00000039: "ItemId_LETTER04",
    0x0000003A: "ItemId_LETTER05",
    0x0000003B: "ItemId_LETTER06",
    0x0000003C: "ItemId_LETTER07",
    0x0000003D: "ItemId_LETTER08",
    0x0000003E: "ItemId_LETTER09",
    0x00000040: "ItemId_LETTER10",
    0x00000041: "ItemId_LETTER11",
    0x00000045: "ItemId_LETTER12",
    0x00000046: "ItemId_LETTER13",
    0x00000047: "ItemId_LETTER14",
    0x00000048: "ItemId_LETTER15",
    0x00000049: "ItemId_LETTER16",
    0x0000004A: "ItemId_LETTER17",
    0x0000004B: "ItemId_LETTER18",
    0x0000004C: "ItemId_LETTER19",
    0x0000004E: "ItemId_LETTER20",
    0x0000004F: "ItemId_LETTER21",
    0x00000050: "ItemId_LETTER22",
    0x00000051: "ItemId_LETTER23",
    0x00000052: "ItemId_LETTER24",
    0x00000053: "ItemId_ARTIFACT",
    0x00000054: "ItemId_LETTER25",
    0x00000056: "ItemId_DOLLY",
    0x00000057: "ItemId_WATER_STONE",
    0x00000058: "ItemId_MAGICAL_BEAN",
    0x00000059: "ItemId_FERTILE_SOIL",
    0x0000005A: "ItemId_MIRACLE_WATER",
    0x0000005B: "ItemId_VOLCANO_VASE",
    0x0000005C: "ItemId_TAPE",
    0x0000005D: "ItemId_SUGAR",
    0x0000005E: "ItemId_SALT",
    0x0000005F: "ItemId_EGG1",
    0x00000060: "ItemId_CREAM",
    0x00000061: "ItemId_STRAWBERRY",
    0x00000062: "ItemId_BUTTER",
    0x00000063: "ItemId_CLEANSER",
    0x00000064: "ItemId_WATER",
    0x00000065: "ItemId_FLOUR",
    0x00000066: "ItemId_MILK",
    0x00000067: "ItemId_LYRICS",
    0x00000068: "ItemId_MELODY",
    0x00000069: "ItemId_MAILBAG",
    0x0000006A: "ItemId_CASTLE_KEY3",
    0x0000006B: "ItemId_ODD_KEY",
    0x0000006C: "ItemId_STAR_STONE",
    0x0000006D: "ItemId_SNEAKY_PARASOL",
    0x0000006E: "ItemId_KOOPA_LEGENDS",
    0x0000006F: "ItemId_AUTOGRAPH1",
    0x00000070: "ItemId_EMPTY_WALLET",
    0x00000071: "ItemId_AUTOGRAPH2",
    0x00000072: "ItemId_KOOPA_SHELL",
    0x00000073: "ItemId_OLD_PHOTO",
    0x00000074: "ItemId_GLASSES",
    0x00000075: "ItemId_PHOTOGRAPH",
    0x00000076: "ItemId_PACKAGE",
    0x00000077: "ItemId_RED_JAR",
    0x00000078: "ItemId_CASTLE_KEY4",
    0x00000079: "ItemId_WAREHOUSE_KEY",
    0x0000007A: "ItemId_PRISON_KEY1",
    0x0000007B: "ItemId_SILVER_CREDIT",
    0x0000007C: "ItemId_GOLD_CREDIT",
    0x0000007D: "ItemId_PRISON_KEY2",
    0x0000007E: "ItemId_PRISON_KEY3",
    0x0000007F: "ItemId_PRISON_KEY4",
    0x00000080: "ItemId_FIRE_FLOWER",
    0x00000081: "ItemId_SNOWMAN_DOLL",
    0x00000082: "ItemId_THUNDER_RAGE",
    0x00000083: "ItemId_SHOOTING_STAR",
    0x00000084: "ItemId_THUNDER_BOLT",
    0x00000085: "ItemId_PEBBLE",
    0x00000086: "ItemId_DUSTY_HAMMER",
    0x00000087: "ItemId_INSECTICIDE_HERB",
    0x00000088: "ItemId_STONE_CAP",
    0x00000089: "ItemId_TASTY_TONIC",
    0x0000008A: "ItemId_MUSHROOM",
    0x0000008B: "ItemId_VOLT_SHROOM",
    0x0000008C: "ItemId_SUPER_SHROOM",
    0x0000008D: "ItemId_DRIED_SHROOM",
    0x0000008E: "ItemId_ULTRA_SHROOM",
    0x0000008F: "ItemId_SLEEPY_SHEEP",
    0x00000090: "ItemId_P_O_W_BLOCK",
    0x00000091: "ItemId_HUSTLE_DRINK",
    0x00000092: "ItemId_STOP_WATCH",
    0x00000093: "ItemId_WHACKAS_BUMP",
    0x00000094: "ItemId_APPLE",
    0x00000095: "ItemId_LIFE_SHROOM",
    0x00000096: "ItemId_MYSTERY",
    0x00000097: "ItemId_REPEL_GEL",
    0x00000098: "ItemId_FRIGHT_JAR",
    0x00000099: "ItemId_PLEASE_COME_BACK",
    0x0000009A: "ItemId_DIZZY_DIAL",
    0x0000009B: "ItemId_SUPER_SODA",
    0x0000009C: "ItemId_LEMON",
    0x0000009D: "ItemId_LIME",
    0x0000009E: "ItemId_BLUE_BERRY",
    0x0000009F: "ItemId_RED_BERRY",
    0x000000A0: "ItemId_YELLOW_BERRY",
    0x000000A1: "ItemId_BUBBLE_BERRY",
    0x000000A2: "ItemId_JAMMIN_JELLY",
    0x000000A3: "ItemId_MAPLE_SYRUP",
    0x000000A4: "ItemId_HONEY_SYRUP",
    0x000000A5: "ItemId_GOOMNUT",
    0x000000A6: "ItemId_KOOPA_LEAF",
    0x000000A7: "ItemId_DRIED_PASTA",
    0x000000A8: "ItemId_DRIED_FRUIT",
    0x000000A9: "ItemId_STRANGE_LEAF",
    0x000000AA: "ItemId_CAKE_MIX",
    0x000000AB: "ItemId_EGG2",
    0x000000AC: "ItemId_COCONUT",
    0x000000AD: "ItemId_MELON",
    0x000000AE: "ItemId_STINKY_HERB",
    0x000000AF: "ItemId_ICED_POTATO",
    0x000000B0: "ItemId_SPICY_SOUP",
    0x000000B1: "ItemId_APPLE_PIE",
    0x000000B2: "ItemId_HONEY_ULTRA",
    0x000000B3: "ItemId_MAPLE_ULTRA",
    0x000000B4: "ItemId_JELLY_ULTRA",
    0x000000B5: "ItemId_KOOPASTA",
    0x000000B6: "ItemId_FRIED_SHROOM",
    0x000000B7: "ItemId_SHROOM_CAKE",
    0x000000B8: "ItemId_SHROOM_STEAK",
    0x000000B9: "ItemId_HOT_SHROOM",
    0x000000BA: "ItemId_SWEET_SHROOM",
    0x000000BB: "ItemId_YUMMY_MEAL",
    0x000000BC: "ItemId_HEALTHY_JUICE",
    0x000000BD: "ItemId_BLAND_MEAL",
    0x000000BE: "ItemId_DELUXE_FEAST",
    0x000000BF: "ItemId_SPECIAL_SHAKE",
    0x000000C0: "ItemId_BIG_COOKIE",
    0x000000C1: "ItemId_CAKE",
    0x000000C2: "ItemId_MISTAKE",
    0x000000C3: "ItemId_KOOPA_TEA",
    0x000000C4: "ItemId_HONEY_SUPER",
    0x000000C5: "ItemId_MAPLE_SUPER",
    0x000000C6: "ItemId_JELLY_SUPER",
    0x000000C7: "ItemId_SPAGHETTI",
    0x000000C8: "ItemId_EGG_MISSILE",
    0x000000C9: "ItemId_FRIED_EGG",
    0x000000CA: "ItemId_HONEY_SHROOM",
    0x000000CB: "ItemId_HONEY_CANDY",
    0x000000CC: "ItemId_ELECTRO_POP",
    0x000000CD: "ItemId_FIRE_POP",
    0x000000CE: "ItemId_LIME_CANDY",
    0x000000CF: "ItemId_COCO_POP",
    0x000000D0: "ItemId_LEMON_CANDY",
    0x000000D1: "ItemId_JELLY_POP",
    0x000000D2: "ItemId_STRANGE_CAKE",
    0x000000D3: "ItemId_KOOKY_COOKIE",
    0x000000D4: "ItemId_FROZEN_FRIES",
    0x000000D5: "ItemId_POTATO_SALAD",
    0x000000D6: "ItemId_NUTTY_CAKE",
    0x000000D7: "ItemId_MAPLE_SHROOM",
    0x000000D8: "ItemId_BOILED_EGG",
    0x000000D9: "ItemId_YOSHI_COOKIE",
    0x000000DA: "ItemId_JELLY_SHROOM1",
    0x000000DB: "ItemId_JELLY_SHROOM2",
    0x000000DC: "ItemId_JELLY_SHROOM3",
    0x000000DD: "ItemId_JELLY_SHROOM4",
    0x000000DE: "ItemId_JELLY_SHROOM5",
    0x000000DF: "ItemId_JELLY_SHROOM6",
    0x000000E0: "ItemId_SPIN_SMASH",
    0x000000E1: "ItemId_MULTIBOUNCE",
    0x000000E2: "ItemId_POWER_PLUS_A",
    0x000000E3: "ItemId_DODGE_MASTER",
    0x000000E4: "ItemId_POWER_BOUNCE",
    0x000000E5: "ItemId_SPIKE_SHIELD",
    0x000000E6: "ItemId_FIRST_ATTACK",
    0x000000E7: "ItemId_H_P_PLUS_A",
    0x000000E8: "ItemId_QUAKE_HAMMER",
    0x000000E9: "ItemId_DOUBLE_DIP",
    0x000000EA: "ItemId_MYSTERY_SCROLL",
    0x000000EB: "ItemId_SLEEP_STOMP",
    0x000000EC: "ItemId_FIRE_SHIELD",
    0x000000ED: "ItemId_QUICK_CHANGE",
    0x000000EE: "ItemId_D_DOWN_POUND",
    0x000000EF: "ItemId_DIZZY_STOMP",
    0x000000F0: "ItemId_SMASH_CHARGE0",
    0x000000F1: "ItemId_PRETTY_LUCKY",
    0x000000F2: "ItemId_FEELING_FINE",
    0x000000F3: "ItemId_ATTACK_F_X_A",
    0x000000F4: "ItemId_ALLOR_NOTHING",
    0x000000F5: "ItemId_H_P_DRAIN",
    0x000000F6: "ItemId_JUMP_CHARGE0",
    0x000000F7: "ItemId_SLOW_GO",
    0x000000F8: "ItemId_F_P_PLUS_A",
    0x000000F9: "ItemId_MEGA_RUSH",
    0x000000FA: "ItemId_ICE_POWER",
    0x000000FB: "ItemId_DEFEND_PLUS_A",
    0x000000FC: "ItemId_PAY_OFF",
    0x000000FD: "ItemId_MONEY_MONEY",
    0x000000FE: "ItemId_CHILL_OUT",
    0x000000FF: "ItemId_HAPPY_HEART_A",
    0x00000100: "ItemId_ZAP_TAP",
    0x00000101: "ItemId_BERSERKER",
    0x00000102: "ItemId_RIGHT_ON",
    0x00000103: "ItemId_RUNAWAY_PAY",
    0x00000104: "ItemId_REFUND",
    0x00000105: "ItemId_FLOWER_SAVER_A",
    0x00000106: "ItemId_TRIPLE_DIP",
    0x00000107: "ItemId_HAMMER_THROW",
    0x00000108: "ItemId_MEGA_QUAKE",
    0x00000109: "ItemId_SMASH_CHARGE",
    0x0000010A: "ItemId_JUMP_CHARGE",
    0x0000010B: "ItemId_S_SMASH_CHG",
    0x0000010C: "ItemId_S_JUMP_CHG",
    0x0000010D: "ItemId_POWER_RUSH",
    0x0000010E: "ItemId_AUTO_JUMP",
    0x0000010F: "ItemId_AUTO_SMASH",
    0x00000110: "ItemId_CRAZY_HEART",
    0x00000111: "ItemId_LAST_STAND",
    0x00000112: "ItemId_CLOSE_CALL",
    0x00000113: "ItemId_P_UP_D_DOWN",
    0x00000114: "ItemId_LUCKY_DAY",
    0x00000115: "ItemId_MEGA_H_P_DRAIN",
    0x00000116: "ItemId_P_DOWN_D_UP",
    0x00000117: "ItemId_POWER_QUAKE",
    0x00000118: "ItemId_AUTO_MULTIBOUNCE",
    0x00000119: "ItemId_FLOWER_FANATIC",
    0x0000011A: "ItemId_HEART_FINDER",
    0x0000011B: "ItemId_FLOWER_FINDER",
    0x0000011C: "ItemId_SPIN_ATTACK",
    0x0000011D: "ItemId_DIZZY_ATTACK",
    0x0000011E: "ItemId_I_SPY",
    0x0000011F: "ItemId_SPEEDY_SPIN",
    0x00000120: "ItemId_BUMP_ATTACK",
    0x00000121: "ItemId_POWER_JUMP",
    0x00000122: "ItemId_SUPER_JUMP",
    0x00000123: "ItemId_MEGA_JUMP",
    0x00000124: "ItemId_POWER_SMASH1",
    0x00000125: "ItemId_SUPER_SMASH",
    0x00000126: "ItemId_MEGA_SMASH",
    0x00000127: "ItemId_POWER_SMASH2",
    0x00000128: "ItemId_POWER_SMASH3",
    0x00000129: "ItemId_DEEP_FOCUS1",
    0x0000012A: "ItemId_SUPER_FOCUS",
    0x0000012B: "ItemId_SHRINK_SMASH",
    0x0000012C: "ItemId_SHELL_CRACK",
    0x0000012D: "ItemId_KAIDEN",
    0x0000012E: "ItemId_D_DOWN_JUMP",
    0x0000012F: "ItemId_SHRINK_STOMP",
    0x00000130: "ItemId_DAMAGE_DODGE_A",
    0x00000131: "ItemId_EARTHQUAKE_JUMP",
    0x00000132: "ItemId_DEEP_FOCUS2",
    0x00000133: "ItemId_DEEP_FOCUS3",
    0x00000134: "ItemId_H_P_PLUS_B",
    0x00000135: "ItemId_F_P_PLUS_B",
    0x00000136: "ItemId_HAPPY_HEART_B",
    0x00000137: "ItemId_HAPPY_HEART_X",
    0x00000138: "ItemId_FLOWER_SAVER_B",
    0x00000139: "ItemId_FLOWER_SAVER_X",
    0x0000013A: "ItemId_DAMAGE_DODGE_B",
    0x0000013B: "ItemId_DAMAGE_DODGE_X",
    0x0000013C: "ItemId_POWER_PLUS_B",
    0x0000013D: "ItemId_POWER_PLUS_X",
    0x0000013E: "ItemId_DEFEND_PLUS_X",
    0x0000013F: "ItemId_DEFEND_PLUS_Y",
    0x00000140: "ItemId_HAPPY_FLOWER_A",
    0x00000141: "ItemId_HAPPY_FLOWER_B",
    0x00000142: "ItemId_HAPPY_FLOWER_X",
    0x00000143: "ItemId_GROUP_FOCUS",
    0x00000144: "ItemId_PEEKABOO",
    0x00000145: "ItemId_ATTACK_F_X_D",
    0x00000146: "ItemId_ATTACK_F_X_B",
    0x00000147: "ItemId_ATTACK_F_X_E",
    0x00000148: "ItemId_ATTACK_F_X_C",
    0x00000149: "ItemId_ATTACK_F_X_F",
    0x0000014A: "ItemId_H_P_PLUS_C",
    0x0000014B: "ItemId_H_P_PLUS_X",
    0x0000014C: "ItemId_H_P_PLUS_Y",
    0x0000014D: "ItemId_F_P_PLUS_C",
    0x0000014E: "ItemId_F_P_PLUS_X",
    0x0000014F: "ItemId_F_P_PLUS_Y",
    0x00000150: "ItemId_HEALTHY_HEALTHY",
    0x00000151: "ItemId_ATTACK_F_X_F2",
    0x00000152: "ItemId_ATTACK_F_X_F3",
    0x00000153: "ItemId_ATTACK_F_X_F4",
    0x00000154: "ItemId_ATTACK_F_X_F5",
    0x00000155: "ItemId_PARTNER_ATTACK",
    0x00000156: "ItemId_HEART",
    0x00000157: "ItemId_COIN",
    0x00000158: "ItemId_HEART_PIECE",
    0x00000159: "ItemId_STAR_POINT",
    0x0000015A: "ItemId_FULL_HEAL",
    0x0000015B: "ItemId_FLOWER",
    0x0000015C: "ItemId_STAR_PIECE",
    0x0000015D: "ItemId_PRESENT",
    0x0000015E: "ItemId_COMPLETE_CAKE",
    0x0000015F: "ItemId_BARE_CAKE",
    0x00000160: "ItemId_EMPTY_CAKE_PAN",
    0x00000161: "ItemId_FULL_CAKE_PAN",
    0x00000162: "ItemId_EMPTY_MIXING_BOWL",
    0x00000163: "ItemId_FULL_MIXING_BOWL",
    0x00000164: "ItemId_CAKE_WITH_ICING",
    0x00000165: "ItemId_CAKE_WITH_BERRIES",
    0x00000166: "ItemId_HAMMER1_ICON",
    0x00000167: "ItemId_HAMMER2_ICON",
    0x00000168: "ItemId_HAMMER3_ICON",
    0x00000169: "ItemId_BOOTS1_ICON",
    0x0000016A: "ItemId_BOOTS2_ICON",
    0x0000016B: "ItemId_BOOTS3_ICON",
    0x0000016C: "ItemId_ITEMS_ICON",
}

if __name__ == "__main__":
    """
    parser = argparse.ArgumentParser(description="Converts split data to C using a Star Rod idx file")
    parser.add_argument("idxfile", help="Input .*idx file from Star Rod dump")
    parser.add_argument("offset", help="Starting ROM offset")
    parser.add_argument("--comments", action="store_true", help="Write offset/vaddr comments")

    args = parser.parse_args()
    """

    MAPS = "dro_01 dro_02 hos_00 hos_01 hos_02 hos_03 hos_04 hos_05 hos_06 hos_10 hos_20 isk_01 isk_02 isk_03 isk_04 isk_05 isk_06 isk_07 isk_08 isk_09 isk_10 isk_11 isk_12 isk_13 isk_14 isk_16 isk_18 isk_19 iwa_00 iwa_01 iwa_02 iwa_03 iwa_04 iwa_10 iwa_11 osr_00 osr_01 osr_02 osr_03 kkj_00 kkj_01 kkj_02 kkj_03 kkj_10 kkj_11 kkj_12 kkj_13 kkj_14 kkj_15 kkj_16 kkj_17 kkj_18 kkj_19 kkj_20 kkj_21 kkj_22 kkj_23 kkj_24 kkj_25 kkj_26 kkj_27 kkj_28 kkj_29 kmr_00 kmr_02 kmr_03 kmr_04 kmr_05 kmr_06 kmr_07 kmr_09 kmr_10 kmr_11 kmr_12 kmr_20 kmr_30 kpa_01 kpa_03 kpa_04 kpa_08 kpa_09 kpa_10 kpa_11 kpa_12 kpa_13 kpa_14 kpa_15 kpa_16 kpa_17 kpa_32 kpa_33 kpa_40 kpa_41 kpa_50 kpa_52 kpa_60 kpa_61 kpa_62 kpa_63 kpa_70 kpa_90 kpa_91 kpa_94 kpa_95 kpa_96 kpa_102 kpa_111 kpa_112 kpa_113 kpa_115 kpa_116 kpa_117 kpa_118 kpa_119 kpa_121 kpa_130 kpa_133 kpa_134 machi mac_00 mac_01 mac_02 mac_03 mac_04 mac_05 mac_06 tik_01 tik_02 tik_03 tik_04 tik_05 tik_06 tik_07 tik_08 tik_09 tik_10 tik_12 tik_14 tik_15 tik_17 tik_18 tik_19 tik_20 tik_21 tik_22 tik_23 tik_25 kgr_01 kgr_02 nok_01 nok_02 nok_03 nok_04 nok_11 nok_12 nok_13 nok_14 nok_15 sbk_00 sbk_01 sbk_02 sbk_03 sbk_04 sbk_05 sbk_06 sbk_10 sbk_11 sbk_12 sbk_13 sbk_14 sbk_15 sbk_16 sbk_20 sbk_21 sbk_22 sbk_23 sbk_24 sbk_25 sbk_26 sbk_30 sbk_31 sbk_32 sbk_33 sbk_34 sbk_35 sbk_36 sbk_40 sbk_41 sbk_42 sbk_43 sbk_44 sbk_45 sbk_46 sbk_50 sbk_51 sbk_52 sbk_53 sbk_54 sbk_55 sbk_56 sbk_60 sbk_61 sbk_62 sbk_63 sbk_64 sbk_65 sbk_66 sbk_99 trd_00 trd_01 trd_02 trd_03 trd_04 trd_05 trd_06 trd_07 trd_08 trd_09 trd_10 tst_01 tst_02 tst_03 tst_04 tst_10 tst_11 tst_12 tst_13 tst_20 jan_00 jan_01 jan_02 jan_03 jan_04 jan_05 jan_06 jan_07 jan_08 jan_09 jan_10 jan_11 jan_12 jan_13 jan_14 jan_15 jan_16 jan_17 jan_18 jan_19 jan_22 jan_23 mim_01 mim_02 mim_03 mim_04 mim_05 mim_06 mim_07 mim_08 mim_09 mim_10 mim_11 mim_12 obk_01 obk_02 obk_03 obk_04 obk_05 obk_06 obk_07 obk_08 obk_09 arn_02 arn_03 arn_04 arn_05 arn_07 arn_08 arn_09 arn_10 arn_11 arn_12 arn_13 dgb_01 dgb_02 dgb_03 dgb_04 dgb_05 dgb_06 dgb_07 dgb_08 dgb_09 dgb_10 dgb_11 dgb_12 dgb_13 dgb_14 dgb_15 dgb_16 dgb_17 dgb_18 kzn_01 kzn_02 kzn_03 kzn_04 kzn_05 kzn_06 kzn_07 kzn_08 kzn_09 kzn_10 kzn_11 kzn_17 kzn_18 kzn_19 kzn_20 kzn_22 kzn_23 flo_00 flo_03 flo_07 flo_08 flo_09 flo_10 flo_11 flo_12 flo_13 flo_14 flo_15 flo_16 flo_17 flo_18 flo_19 flo_21 flo_22 flo_23 flo_24 flo_25 sam_01 sam_02 sam_03 sam_04 sam_05 sam_06 sam_07 sam_08 sam_09 sam_10 sam_11 sam_12 pra_01 pra_02 pra_03 pra_04 pra_05 pra_09 pra_10 pra_11 pra_13 pra_14 pra_15 pra_16 pra_18 pra_19 pra_20 pra_21 pra_22 pra_29 pra_31 pra_32 pra_33 pra_34 pra_35 pra_40 omo_01 omo_02 omo_03 omo_04 omo_05 omo_06 omo_07 omo_08 omo_09 omo_10 omo_11 omo_12 omo_13 omo_14 omo_15 omo_16 omo_17 end_00 end_01 mgm_00 mgm_01 mgm_02 mgm_03 gv_01".split(" ")

    with open("splat.yaml") as f:
        import yaml
        splat_config = yaml.safe_load(f.read())

    for map_name in MAPS:
        area_name = map_name.split("_")[0]
        if area_name == "machi":
            area_name = "mac"

        print(map_name)

        for seg in splat_config["segments"]:
            if type(seg) is dict and "name" in seg and map_name in seg["name"]:
                offset = seg["start"]
                break

        # lol sorry
        with open(f"/mnt/c/Users/alex/Desktop/Paper Mario/rom/dump/map/src/{map_name}.midx", "r") as f:
            midx = parse_midx(f, offset, map_name)

        symbol_map = disasm_script.script_lib()
        for struct in midx:
            symbol_map[struct["vaddr"]] = struct["name"]

        with open(os.path.join(DIR, "../baserom.z64"), "rb") as romfile:
            romfile.seek(offset)
            disasm = disassemble(romfile, midx, symbol_map, False, offset)

        try:
            os.mkdir(f"../src/world/area_{area_name}/{map_name}")
        except Exception:
            pass

        with open(f"../src/world/area_{area_name}/{map_name}/{map_name}.c", "w") as f:
            f.write(f'#include "{map_name}.h"\n\n')
            f.write(disasm)
