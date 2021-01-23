#include "kpa_52.h"

s32 pad_0000D4[3];
s32 pad_00132C[1];
Script N(script_802413A0);
s32 pad_001408[2];
s32 N(itemList_80241410)[2];
Script N(script_80241418);
Script N(script_MakeEntities);
s32 pad_001608[2];
Script N(script_ExitDoubleDoor_80241610);
Script N(script_ExitDoubleDoor_802416B4);
Script N(script_ExitDoubleDoor_80241758);
Script N(script_802417FC);
Script N(script_EnterDoubleDoor_80241844);
Script N(main);
s32 pad_001A38[2];
Script N(script_80241A40);
Script N(script_NpcAI_80241B40);
Script N(script_NpcAI_80241C0C);
Script N(script_NpcAI_80241C68);
Script N(script_80241C78);
s32 N(extraAnimationList_80241E6C)[2];
StaticNpc N(npcGroup_80241E74)[7];
StaticNpc N(npcGroup_80242C04)[7];
NpcGroupList N(npcGroupList_80243994);
s32 pad_0039B8[2];
const char D_802439C0_A6AAC0[8]; // "kpa_33"
const char D_802439C8_A6AAC8[8]; // "kpa_40"
const char D_802439D0_A6AAD0[8]; // "kpa_08"
s32 pad_0039D8[2];
s32 pad_003B98[2];

// text: func_80240000_A67100

// text: func_80240034_A67134

s32 pad_0000D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400E0_A671E0

// text: func_802402D0_A673D0

// text: func_80240414_A67514

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_8024063C_A6773C

// text: func_80240B78_A67C78

// text: func_80240FD4_A680D4

// text: func_802412F4_A683F4

s32 pad_00132C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -345.0f, 0.0f, -80.0f, 90.0f },
    { 330.0f, 0.0f, -25.0f, 270.0f },
    { 330.0f, 119.0f, -140.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190171,
};

Script N(script_802413A0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(7);
    }
});

s32 pad_001408[] = {
    0x00000000, 0x00000000,
};

s32 N(itemList_80241410)[] = {
    0x0000001A, 0x00000000,
};

Script N(script_80241418) = SCRIPT({
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        return;
    }
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(1561) = 1;
    func_80240034_A67134(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240000_A67100();
    SI_VAR(1) = 0;
    sleep 5;
    0x802D6954();
    unbind;
    bind N(script_ExitDoubleDoor_802416B4) to TriggerFlag_WALL_INTERACT 15;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1561), 0),
        SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 352, 10, 0xFFFFFFE7, 270, 0x80000000),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(0)),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241418), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80241410), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_802416B4), TriggerFlag_WALL_INTERACT, 15, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_001608[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80241610) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 20;
    SI_VAR(2) = 120;
    SI_VAR(3) = 122;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802439C0_A6AAC0, 2);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802416B4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 15;
    SI_VAR(2) = 126;
    SI_VAR(3) = 124;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802439C8_A6AAC8, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241758) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 25;
    SI_VAR(2) = 130;
    SI_VAR(3) = 128;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802439D0_A6AAD0, 0);
    sleep 100;
});

Script N(script_802417FC) = SCRIPT({
    bind N(script_ExitDoubleDoor_80241610) to TriggerFlag_WALL_INTERACT 20;
    bind N(script_ExitDoubleDoor_80241758) to TriggerFlag_WALL_INTERACT 25;
});

Script N(script_EnterDoubleDoor_80241844) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(2) = 120;
            SI_VAR(3) = 122;
            spawn EnterDoubleDoor;
            spawn N(script_802417FC);
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 126;
            SI_VAR(3) = 124;
            spawn EnterDoubleDoor;
            spawn N(script_802417FC);
        }
        == 2 {
            SI_VAR(0) = 2;
            SI_VAR(2) = 130;
            SI_VAR(3) = 128;
            spawn EnterDoubleDoor;
            spawn N(script_802417FC);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243994));
    await N(script_MakeEntities);
    spawn N(script_EnterDoubleDoor_80241844);
    sleep 1;
    spawn N(script_802413A0);
});

s32 pad_001A38[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241A40) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80241B10) = {
    .moveSpeed = 1.5,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 120.0,
    .unk_10 = 20.0,
    .unk_14 = 0x5,
    .chaseSpeed = 3.0,
    .unk_1C = 0x5A,
    .unk_20 = 0x3,
    .chaseRadius = 140.0,
    .unk_28 = 20.0,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241B40) = SCRIPT({
    SetSelfVar(0, 70);
    SetSelfVar(1, 3);
    SetSelfVar(2, 3);
    SetSelfVar(3, 6);
    func_80240FD4_A680D4(N(aISettings_80241B10));
});

NpcSettings N(npcSettings_80241BB0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241B40),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80241BDC) = {
    .moveSpeed = 5.400000095367432,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 13.0,
    .unk_10 = 1.399999976158142,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0,
    .unk_28 = 0.0,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241C0C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 20);
    func_8024063C_A6773C(N(aISettings_80241BDC));
});

Script N(script_NpcAI_80241C68) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80241C78) = {
    SI_CMD(ScriptOpcode_CALL, func_802412F4_A683F4),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241C68)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80240B78_A67C78),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 4),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 0, 0xFFFFFC18, 0),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, 0x800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241C0C)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_80241E40) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xC,
    .radius = 0xC,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241C0C),
    .onHit = &N(script_80241C78),
    .aux = NULL,
    .onDefeat = &N(script_80241A40),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_80241E6C)[] = {
    0x005A000D, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80241E74)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80241BB0),
        .pos = { 190.0, 0.0, -27.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 } },
        .movement = { 0x000000BE, 0x00000000, 0xFFFFFFE5, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000BE, 0x00000000, 0xFFFFFFE5, 0x0000012C },
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 12,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 13,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 14,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 15,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 16,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
};

StaticNpc N(npcGroup_80242C04)[] = {
    {
        .id = 20,
        .settings = &N(npcSettings_80241BB0),
        .pos = { 190.0, 120.0, -145.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 } },
        .movement = { 0x000000BE, 0x00000078, 0xFFFFFF6F, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000BE, 0x00000078, 0xFFFFFF7E, 0x0000008C, 0x00000028, 0x00000001 },
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
    },
    {
        .id = 21,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 22,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 23,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 24,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 25,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
    {
        .id = 26,
        .settings = &N(npcSettings_80241E40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_80241E6C),
    },
};

NpcGroupList N(npcGroupList_80243994) = {
    NPC_GROUP(N(npcGroup_80241E74), 0x22150001),
    NPC_GROUP(N(npcGroup_80242C04), 0x22130001),
    {},
};

s32 pad_0039B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802439C0_A6AAC0

// rodata: D_802439C8_A6AAC8

// rodata: D_802439D0_A6AAD0

s32 pad_0039D8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802439E0_A6AAE0

// rodata: D_802439E8_A6AAE8

// rodata: D_802439F0_A6AAF0

// rodata: D_802439F8_A6AAF8

// rodata: D_80243A00_A6AB00

// rodata: jtbl_80243A08_A6AB08

s32 pad_003B98[] = {
    0x00000000, 0x00000000,
};

