#include "pra_10.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_0016AC[1];
Script N(script_80241710);
s32 pad_00174C[1];
Script N(script_80241750);
Script N(script_80241860);
Script N(script_80241908);
Script N(script_802419CC);
Script N(script_80241A90);
Script N(script_80241AD8);
Script N(main);
s32 N(unk_80241CC0)[12];
Script N(script_80241CF0);
Script N(script_NpcAI_80241D40);
s32 unk_missing_80241D60[11];
Script N(script_Init_80241DB8);
StaticNpc N(npcGroup_80241DE0)[1];
StaticNpc N(npcGroup_80241FD0)[1];
NpcGroupList N(npcGroupList_802421C0);
s32 pad_0021E4[3];
const char D_802421F0_D614A0[8]; // "pra_04"
const char D_802421F8_D614A8[8]; // "pra_12"

// text: func_Init_D5F2B0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D5F304

// text: func_802400EC_D5F39C

// text: func_80240128_D5F3D8

s32 N(unk_802402F0)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x3C013F36, 0x3421DB6E, 0x44810000, 0x27B000D8, 0x44050000, 0x0200202D, 0x00A0302D, 0x0C019DF0,
    0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0xC6200030, 0x3C014040,
    0x44811000, 0x46000007, 0x46020001, 0x8E250028, 0x8E26002C, 0x44070000, 0x0C019E40, 0x0200202D,
    0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x24040002, 0x0000282D, 0x00A0302D, 0x00A0382D,
    0x27A20018, 0x0C0B7710, 0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130,
    0xD7B40128, 0x03E00008, 0x27BD0140,
};

// text: func_8024049C_D5F74C

// text: func_80240500_D5F7B0

s32 N(unk_8024068C)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x27B000D8, 0x3C013F36, 0x3421DB6E, 0x44810000, 0x0200202D, 0x44050000, 0x3C06BF36, 0x34C6DB6E,
    0x0C019DF0, 0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0x8E250028,
    0xC620002C, 0x8E270030, 0x46000007, 0x44060000, 0x0C019E40, 0x0200202D, 0x27A40018, 0x0200282D,
    0x0C019D80, 0x0080302D, 0xC62200A8, 0x3C0142B4, 0x44810000, 0x00000000, 0x4602003E, 0x00000000,
    0x4500000A, 0x24040001, 0x3C014387, 0x44810000, 0x00000000, 0x4600103C, 0x00000000, 0x45000004,
    0x27A20018, 0x3C041000, 0x34840001, 0x27A20018, 0x0000282D, 0x00A0302D, 0x00A0382D, 0x0C0B7710,
    0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130, 0xD7B40128, 0x03E00008,
    0x27BD0140,
};

// text: func_80240870_D5FB20

// text: func_80240D3C_D5FFEC

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D601D0

s32 pad_0016AC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 487.0f, 0.0f, 70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19013D,
};

Script N(script_80241710) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_00174C[] = {
    0x00000000,
};

Script N(script_80241750) = SCRIPT({
    GetEntryID(SI_VAR(10));
    if (SI_VAR(10) == SI_VAR(1)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(2)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(3)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(4)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(5)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(6)) {
        SI_VAR(0) = 2;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80241860) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D5F39C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D5F39C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D5F74C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D5FFEC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241908) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 13;
    SI_VAR(2) = 23;
    SI_VAR(3) = 20;
    SI_VAR(4) = 24;
    SI_VAR(5) = 21;
    spawn 0x80285E9C;
    sleep 17;
    GotoMap(D_802421F0_D614A0, 2);
    sleep 100;
});

Script N(script_802419CC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 17;
    SI_VAR(2) = 27;
    SI_VAR(3) = 30;
    SI_VAR(4) = 28;
    SI_VAR(5) = 31;
    spawn 0x80285E9C;
    sleep 17;
    GotoMap(D_802421F8_D614A8, 0);
    sleep 100;
});

Script N(script_80241A90) = SCRIPT({
    bind N(script_80241908) to TriggerFlag_WALL_INTERACT 13;
    bind N(script_802419CC) to TriggerFlag_WALL_INTERACT 17;
});

Script N(script_80241AD8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 23;
            SI_VAR(3) = 20;
            SI_VAR(4) = 24;
            SI_VAR(5) = 21;
            await 0x80285EC4;
        }
        == 1 {
            SI_VAR(2) = 27;
            SI_VAR(3) = 30;
            SI_VAR(4) = 28;
            SI_VAR(5) = 31;
            await 0x80285EC4;
        }
    }
    spawn N(script_80241A90);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802421C0));
    spawn N(script_80241710);
    SI_VAR(0) = 1;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_80241860);
    spawn N(script_80241AD8);
    sleep 1;
});

s32 N(unk_80241CC0)[] = {
    0x3FCCCCCD, 0x0000003C, 0x0000001E, 0x42A00000, 0x00000000, 0x00000005, 0x400CCCCD, 0x0000003C,
    0x0000000F, 0x42C80000, 0x00000000, 0x00000001,
};

Script N(script_80241CF0) = SCRIPT({
    func_80240F20_D601D0(N(unk_80241CC0));
});

NpcAISettings N(aISettings_80241D10) = {
    .moveSpeed = 1.6f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 80.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 2.2f,
    .unk_1C = 0x3C,
    .unk_20 = 0xF,
    .chaseRadius = 100.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241D40) = SCRIPT({
    func_80240F20_D601D0(N(aISettings_80241D10));
});

s32 unk_missing_80241D60[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, N(script_80241CF0), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000800, 0x00000000, 0x000A0000,
};

NpcSettings N(npcSettings_80241D8C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241D40),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0x800,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

Script N(script_Init_80241DB8) = SCRIPT({
    SetNpcFlagBits(-1, 0x80000, 1);
});

StaticNpc N(npcGroup_80241DE0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241D8C),
        .pos = { 166.0, 130.0, 90.0 },
        .flags = 0x00200C00,
        .init = N(script_Init_80241DB8),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_VOLT_SHROOM, 10 } },
        .movement = { 0x000000A6, 0x00000082, 0x0000005A, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000A6, 0x00000082, 0x0000005A, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x0034011B, 0x00340102, 0x00340102, 0x00340102, 0x0034011B, 0x0034011B, 0x00340104, 0x00340115, 0x00340100, 0x00340100, 0x00340101, 0x00340101, 0x00340101, 0x00340101, 0x00340101, 0x00340101,
        },
    },
};

StaticNpc N(npcGroup_80241FD0)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241D8C),
        .pos = { 358.0, 130.0, 75.0 },
        .flags = 0x00200C00,
        .init = N(script_Init_80241DB8),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_VOLT_SHROOM, 10 } },
        .movement = { 0x00000166, 0x00000082, 0x0000004B, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000166, 0x00000082, 0x0000004B, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x0034011B, 0x00340102, 0x00340102, 0x00340102, 0x0034011B, 0x0034011B, 0x00340104, 0x00340115, 0x00340100, 0x00340100, 0x00340101, 0x00340101, 0x00340101, 0x00340101, 0x00340101, 0x00340101,
        },
    },
};

NpcGroupList N(npcGroupList_802421C0) = {
    NPC_GROUP(N(npcGroup_80241DE0), 0x1F010001),
    NPC_GROUP(N(npcGroup_80241FD0), 0x1F030001),
    {},
};

s32 pad_0021E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802421F0_D614A0

// rodata: D_802421F8_D614A8

// rodata: jtbl_80242200_D614B0

// rodata: D_80242240_D614F0

// rodata: D_80242248_D614F8
