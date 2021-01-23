#include "hos_10.h"

s32 pad_000018[2];
s32 unk_missing_80240364[40];
s32 pad_000458[2];
s32 pad_00076C[1];
s32 pad_000C78[2];
Script N(script_80240D20);
s32 pad_000DFC[1];
s32 unk_missing_80240E58[22];
Script N(script_Init_80240EB0);
Script N(script_Init_80240EDC);
Script N(script_Init_80240F08);
Script N(script_Init_80240F34);
Script N(script_Init_80240F60);
Script N(script_Init_80240F8C);
Script N(script_Init_80240FB8);
Script N(script_Init_80240FE4);
Script N(script_Init_80241010);
s32 N(extraAnimationList_8024103C)[7];
s32 N(extraAnimationList_80241058)[3];
s32 N(extraAnimationList_80241064)[3];
s32 N(extraAnimationList_80241070)[3];
s32 N(extraAnimationList_8024107C)[3];
s32 N(extraAnimationList_80241088)[3];
s32 N(extraAnimationList_80241094)[3];
s32 N(extraAnimationList_802410A0)[3];
s32 N(extraAnimationList_802410AC)[3];
StaticNpc N(npcGroup_802410B8)[9];
NpcGroupList N(npcGroupList_80242228);
s32 unk_missing_80242298[22];
Script N(script_Init_802422F0);
Script N(script_Init_80242330);
Script N(script_Init_8024235C);
Script N(script_Init_80242388);
Script N(script_Init_802423B4);
Script N(script_Init_802423E0);
Script N(script_Init_8024240C);
Script N(script_Init_80242438);
s32 N(extraAnimationList_80242464)[4];
s32 N(extraAnimationList_80242474)[3];
s32 N(extraAnimationList_80242480)[3];
s32 N(extraAnimationList_8024248C)[3];
s32 N(extraAnimationList_80242498)[3];
s32 N(extraAnimationList_802424A4)[3];
s32 N(extraAnimationList_802424B0)[3];
s32 N(extraAnimationList_802424BC)[3];
StaticNpc N(npcGroup_802424C8)[8];
NpcGroupList N(npcGroupList_80243448);
Script N(main);
s32 pad_00365C[1];
Script N(script_UpdateTexturePan_80243660);
Script N(script_802436FC);
Script N(script_80243790);
Script N(script_80244058);
Script N(script_80244120);
s32 pad_0041D4[3];
Script N(script_UpdateTexturePan_802441E0);
Script N(script_8024427C);
s32 N(vectorList_80244930)[15];
s32 N(vectorList_8024496C)[12];
s32 N(vectorList_8024499C)[12];
s32 N(vectorList_802449CC)[12];
s32 N(vectorList_802449FC)[15];
s32 N(vectorList_80244A38)[12];
s32 N(vectorList_80244A68)[15];
s32 N(vectorList_80244AA4)[15];
s32 N(vectorList_80244AE0)[12];
Script N(script_80244B10);
Script N(script_80245648);
Script N(script_802457E4);
const char D_802461D0_A45910[8]; // "kmr_21"
const char D_802461D8_A45918[8]; // "osr_02"
const char D_802461E0_A45920[8]; // "kmr_20"
s32 pad_0061E8[2];

// text: func_Init_A3F740

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_A3F760

// text: func_80240144_A3F884

// text: func_8024032C_A3FA6C

s32 unk_missing_80240364[] = {
    0x460C7301, 0x44863000, 0x44800000, 0x44872000, 0x8FA20010, 0x460C003C, 0x00000000, 0x4500000F,
    0x46067081, 0x4600103C, 0x00000000, 0x45000003, 0x00000000, 0x03E00008, 0xE44E0000, 0x4602203C,
    0x00000000, 0x45000012, 0x00000000, 0xC4400000, 0x46040000, 0x03E00008, 0xE4400000, 0x4602003C,
    0x00000000, 0x4501FFF3, 0x00000000, 0x46002007, 0x4600103C, 0x00000000, 0x45000005, 0x00000000,
    0xC4400000, 0x46040001, 0x03E00008, 0xE4400000, 0xC4400000, 0x46020000, 0x03E00008, 0xE4400000,
};

// text: func_80240404_A3FB44

s32 pad_000458[] = {
    0x00000000, 0x00000000,
};

// text: func_80240460_A3FBA0

// text: func_80240584_A3FCC4

s32 pad_00076C[] = {
    0x00000000,
};

// text: func_80240770_A3FEB0

// text: func_80240A84_A401C4

// text: func_80240B44_A40284

// text: func_80240B98_A402D8

// text: func_80240BEC_A4032C

// text: func_80240BFC_A4033C

s32 pad_000C78[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, -1000.0f, 0.0f, 90.0f },
    { 0.0f, -1000.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80240D20) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 1),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 149, 3, 8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_EQ, 5),
            SI_CMD(ScriptOpcode_SPAWN_THREAD),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
                SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 108, 0, 8),
            SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_000DFC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240E00) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80240E2C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 unk_missing_80240E58[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Init_80240EB0) = SCRIPT({
    SetNpcPos(0, 0xFFFFFF9C, 200, 1300);
});

Script N(script_Init_80240EDC) = SCRIPT({
    SetNpcPos(1, 0xFFFFFF7E, 260, 1300);
});

Script N(script_Init_80240F08) = SCRIPT({
    SetNpcPos(2, 0xFFFFFF87, 200, 1369);
});

Script N(script_Init_80240F34) = SCRIPT({
    SetNpcPos(3, 0xFFFFFF51, 200, 1342);
});

Script N(script_Init_80240F60) = SCRIPT({
    SetNpcPos(4, 0xFFFFFF44, 200, 1284);
});

Script N(script_Init_80240F8C) = SCRIPT({
    SetNpcPos(5, 0xFFFFFF6A, 200, 1237);
});

Script N(script_Init_80240FB8) = SCRIPT({
    SetNpcPos(6, 0xFFFFFF9C, 200, 1237);
});

Script N(script_Init_80240FE4) = SCRIPT({
    SetNpcPos(7, 0xFFFFFFCC, 200, 1284);
});

Script N(script_Init_80241010) = SCRIPT({
    SetNpcPos(8, 0xFFFFFFBF, 200, 1342);
});

s32 N(extraAnimationList_8024103C)[] = {
    0x000A0001, 0x000A0002, 0x000C0000, 0x000C0006, 0x000C001E, 0x000C0026, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241058)[] = {
    0x00200001, 0x00200009, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241064)[] = {
    0x00120001, 0x00120002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241070)[] = {
    0x00130001, 0x00130002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024107C)[] = {
    0x00140001, 0x00140002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241088)[] = {
    0x00150001, 0x00150002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241094)[] = {
    0x00160001, 0x00160002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802410A0)[] = {
    0x00170001, 0x00170003, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802410AC)[] = {
    0x00180001, 0x00180002, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802410B8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240E00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00020F05,
        .init = N(script_Init_80240EB0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000,
        },
        .extraAnimations = N(extraAnimationList_8024103C),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240E00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80240EDC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_80241058),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80240E2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80240F08),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120000, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001,
        },
        .extraAnimations = N(extraAnimationList_80241064),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80240E2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80240F34),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130000, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001,
        },
        .extraAnimations = N(extraAnimationList_80241070),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80240E2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80240F60),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
        .extraAnimations = N(extraAnimationList_8024107C),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80240E2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80240F8C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150000, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001,
        },
        .extraAnimations = N(extraAnimationList_80241088),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80240E2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80240FB8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
        .extraAnimations = N(extraAnimationList_80241094),
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80240E2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80240FE4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170000, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001,
        },
        .extraAnimations = N(extraAnimationList_802410A0),
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80240E2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80241010),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180000, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001,
        },
        .extraAnimations = N(extraAnimationList_802410AC),
    },
};

NpcGroupList N(npcGroupList_80242228) = {
    NPC_GROUP(N(npcGroup_802410B8), 0x00000000),
    {},
};

NpcSettings N(npcSettings_80242240) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024226C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 unk_missing_80242298[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Init_802422F0) = SCRIPT({
    SetNpcPos(1, 0, 0, 0xFFFFFE70);
    SetNpcYaw(1, 90);
});

Script N(script_Init_80242330) = SCRIPT({
    SetNpcPos(2, 0, 0, 0xFFFFFE70);
});

Script N(script_Init_8024235C) = SCRIPT({
    SetNpcPos(3, 0, 0, 0xFFFFFE70);
});

Script N(script_Init_80242388) = SCRIPT({
    SetNpcPos(4, 0, 0, 0xFFFFFE70);
});

Script N(script_Init_802423B4) = SCRIPT({
    SetNpcPos(5, 0, 0, 0xFFFFFE70);
});

Script N(script_Init_802423E0) = SCRIPT({
    SetNpcPos(6, 0, 0, 0xFFFFFE70);
});

Script N(script_Init_8024240C) = SCRIPT({
    SetNpcPos(7, 0, 0, 0xFFFFFE70);
});

Script N(script_Init_80242438) = SCRIPT({
    SetNpcPos(8, 0, 0, 0xFFFFFE70);
});

s32 N(extraAnimationList_80242464)[] = {
    0x00200001, 0x00200009, 0x0020001A, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242474)[] = {
    0x00120001, 0x00120002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242480)[] = {
    0x00130001, 0x00130002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024248C)[] = {
    0x00140001, 0x00140002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242498)[] = {
    0x00150001, 0x00150002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802424A4)[] = {
    0x00160001, 0x00160002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802424B0)[] = {
    0x00170001, 0x00170003, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802424BC)[] = {
    0x00180001, 0x00180002, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802424C8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242240),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_802422F0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_80242464),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024226C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80242330),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120000, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001,
        },
        .extraAnimations = N(extraAnimationList_80242474),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_8024226C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_8024235C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130000, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001,
        },
        .extraAnimations = N(extraAnimationList_80242480),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_8024226C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80242388),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
        .extraAnimations = N(extraAnimationList_8024248C),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_8024226C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_802423B4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150000, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001,
        },
        .extraAnimations = N(extraAnimationList_80242498),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_8024226C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_802423E0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
        .extraAnimations = N(extraAnimationList_802424A4),
    },
    {
        .id = 7,
        .settings = &N(npcSettings_8024226C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_8024240C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170000, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001,
        },
        .extraAnimations = N(extraAnimationList_802424B0),
    },
    {
        .id = 8,
        .settings = &N(npcSettings_8024226C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80242438),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180000, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001,
        },
        .extraAnimations = N(extraAnimationList_802424BC),
    },
};

NpcGroupList N(npcGroupList_80243448) = {
    NPC_GROUP(N(npcGroup_802424C8), 0x00000000),
    {},
};

Script N(main) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        sleep 75;
    }
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            MakeNpcs(0, N(npcGroupList_80242228));
        }
        == 2 {
            MakeNpcs(0, N(npcGroupList_80243448));
        }
        else {
        }
    }
    if (SI_SAVE_VAR(0) != 0xFFFFFF80) {
        EnableModel(41, 0);
    }
    spawn N(script_80240D20);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            sleep 50;
            spawn N(script_80244B10);
        }
        == 2 {
            spawn N(script_802457E4);
        }
        == 3 {
            await N(script_80244120);
        }
        == 4 {
            await N(script_80244058);
        }
        == 5 {
            sleep 30;
            spawn N(script_8024427C);
        }
    }
});

s32 pad_00365C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80243660) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240020_A3F760();
                    return;
                }
            }
        }
    }
    func_80240144_A3F884();
});

Script N(script_802436FC) = SCRIPT({
    spawn {
        SI_VAR(0) = 0;
        loop 310 {
            TranslateModel(5, 0, SI_VAR(0), 0);
            SI_VAR(0) += -1.5;
            sleep 1;
        }
    }
    sleep 100;
    func_8024032C_A3FA6C();
});

Script N(script_80243790) = SCRIPT({
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 400;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 600;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 1000;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        SI_VAR(0) = 15;
        SI_VAR(1) = 0;
        SI_VAR(2) = 1000;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        SI_VAR(0) = 14;
        SI_VAR(1) = 0;
        SI_VAR(2) = 400;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    EnableTexPanning(26, 1);
    EnableTexPanning(31, 1);
    EnableTexPanning(25, 1);
    EnableTexPanning(29, 1);
    EnableTexPanning(33, 1);
    EnableTexPanning(36, 1);
    EnableTexPanning(16, 1);
    EnableTexPanning(17, 1);
    spawn {
        sleep 510;
        func_80240404_A3FB44();
    }
    EnableModel(39, 0);
    SetTexPanner(39, 1);
    spawn {
        SI_VAR(0) = 0;
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        sleep 560;
        EnableModel(39, 1);
        loop 32 {
            SI_VAR(0) += 2048;
            SetTexPanOffset(1, 0, SI_VAR(0), 0);
            sleep 1;
        }
        EnableModel(39, 0);
        TranslateModel(39, 0xFFFFFE70, 100, 0);
        SI_VAR(0) = 0;
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        sleep 100;
        EnableModel(39, 1);
        loop 32 {
            SI_VAR(0) += 2048;
            SetTexPanOffset(1, 0, SI_VAR(0), 0);
            sleep 1;
        }
        EnableModel(39, 0);
    }
    spawn {
        SI_VAR(0) =f 0xFFFFFB9B;
        loop 1450 {
            TranslateModel(5, 0, SI_VAR(0), 0);
            SI_VAR(0) += -1.5;
            sleep 1;
        }
    }
    spawn {
        SI_VAR(0) =f 0xFFFFFE0C;
        loop 1450 {
            TranslateGroup(38, 0, SI_VAR(0), 0);
            SI_VAR(0) += -2.5;
            sleep 1;
        }
    }
    spawn {
        sleep 600;
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop 1000 {
            TranslateGroup(24, 0, SI_VAR(0), 0);
            RotateGroup(19, SI_VAR(1), 0, -1, 0);
            SI_VAR(0) += -3.59375;
            SI_VAR(1) += 1.0;
            sleep 1;
        }
    }
    sleep 740;
    func_8024032C_A3FA6C();
});

Script N(script_80244058) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetCamLeadPlayer(0, 0);
    SetPanTarget(0, 0, 0, 0);
    UseSettingsFrom(0, 0, 0, 0);
    PanToTarget(0, 0, 1);
    SetCamSpeed(0, 90.0);
    EnableModel(39, 0);
    spawn N(script_802436FC);
});

Script N(script_80244120) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetCamLeadPlayer(0, 0);
    SetPanTarget(0, 0, 0, 0);
    UseSettingsFrom(0, 0, 0, 0);
    PanToTarget(0, 0, 1);
    SetCamSpeed(0, 90.0);
    spawn N(script_80243790);
});

s32 pad_0041D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_802441E0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240460_A3FBA0();
                    return;
                }
            }
        }
    }
    func_80240584_A3FCC4();
});

Script N(script_8024427C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerAnimation(0x10017);
    SetPlayerPos(0, 0xFFFFFC18, 0);
    EnableModel(3, 0);
    EnableModel(39, 0);
    SetCamLeadPlayer(0, 0);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 400;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802441E0);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 600;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802441E0);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 1000;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802441E0);
    }
    EnableTexPanning(26, 1);
    EnableTexPanning(31, 1);
    EnableTexPanning(25, 1);
    EnableTexPanning(29, 1);
    EnableTexPanning(33, 1);
    EnableTexPanning(36, 1);
    spawn {
        SI_VAR(0) =f 0xFFFFF8F8;
        loop 450 {
            TranslateModel(5, 0, SI_VAR(0), 0);
            SI_VAR(0) += 1.5;
            sleep 1;
        }
    }
    spawn {
        SI_VAR(0) =f 0xFFFFF943;
        loop 450 {
            TranslateGroup(38, 0, SI_VAR(0), 0);
            SI_VAR(0) += 2.5;
            sleep 1;
        }
    }
    spawn {
        loop {
            sleep 1;
            GetModelCenter(41);
            if (SI_VAR(1) < 0xFFFFFF7E) {
                break;
            }
        }
        PlayEffect(6, 4, 0, 0xFFFFFF7E, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    MakeLerp(350, 0xFFFFFF38, 400, 0);
    SI_VAR(2) = 0;
    loop {
        UpdateLerp();
        TranslateModel(41, 0, SI_VAR(0), 480);
        ScaleModel(41, 1.25, 1.25, 1.25);
        RotateModel(41, SI_VAR(2), 1, 0, 0);
        SI_VAR(2) += 22.5;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    GotoMapSpecial(D_802461D0_A45910, 0, 7);
    sleep 100;
});

s32 N(vectorList_80244930)[] = {
    0xC3020000, 0x00000000, 0x44A28000, 0x41A00000, 0xC2C80000, 0x449C4000, 0x432A0000, 0x42480000,
    0x447A0000, 0x42F00000, 0x42C80000, 0x43C80000, 0x00000000, 0x00000000, 0xC3E10000,
};

s32 N(vectorList_8024496C)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0xC3160000, 0x428C0000, 0x43FA0000, 0x00000000, 0x41F00000,
    0x44960000, 0x43480000, 0x41F00000, 0x44E10000,
};

s32 N(vectorList_8024499C)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0xC3480000, 0xC2C80000, 0x43960000, 0xC2480000, 0xC2480000,
    0x44480000, 0x41F00000, 0x42A00000, 0x44ED8000,
};

s32 N(vectorList_802449CC)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0xC3960000, 0xC2700000, 0x43960000, 0x00000000, 0xC1A00000,
    0x447A0000, 0xC2480000, 0x42200000, 0x44E10000,
};

s32 N(vectorList_802449FC)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0xC32A0000, 0xC1A00000, 0x43480000, 0x432A0000, 0x42700000,
    0x43FA0000, 0xC2F00000, 0xC1A00000, 0x447A0000, 0x42480000, 0x42480000, 0x44E10000,
};

s32 N(vectorList_80244A38)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0x43960000, 0x43480000, 0x43AF0000, 0x42C80000, 0x42F00000,
    0x447A0000, 0xC1F00000, 0x41200000, 0x44E10000,
};

s32 N(vectorList_80244A68)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0xC2C80000, 0x00000000, 0x43480000, 0x00000000, 0xC3160000,
    0x43FA0000, 0x43480000, 0x00000000, 0x447A0000, 0x00000000, 0x42C80000, 0x44E10000,
};

s32 N(vectorList_80244AA4)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0x43480000, 0xC2700000, 0x43480000, 0x43FA0000, 0xC3160000,
    0x43FA0000, 0x43340000, 0xC2480000, 0x447A0000, 0xC2700000, 0x42960000, 0x44E10000,
};

s32 N(vectorList_80244AE0)[] = {
    0x00000000, 0x00000000, 0xC3AF0000, 0xC3160000, 0x428C0000, 0x43FA0000, 0x00000000, 0x41F00000,
    0x44960000, 0x42200000, 0x41F00000, 0x44C80000,
};

Script N(script_80244B10) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    PlaySound(1188);
    SetPlayerPos(0xFFFFFF7E, 200, 1300);
    InterpPlayerYaw(90, 0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFF6A, 200, 1300);
    SetNpcYaw(0xFFFFFFFC, 90);
    EnableModel(3, 0);
    EnableGroup(38, 0);
    EnableModel(39, 0);
    TranslateGroup(15, 0, 0xFFFFF63C, 0);
    ScaleGroup(15, 0.400390625, 0.400390625, 0.400390625);
    PlayEffect(52, 2, 0, 35, 70, 7.0, SI_MAP_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    func_80240B98_A402D8(SI_MAP_VAR(0), 128);
    parallel {
        PlayEffect(52, 2, 0, 0, 0, 10.0, SI_MAP_VAR(1), 0, 0, 0, 0, 0, 0, 0);
        loop {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 12;
            SI_VAR(2) += 60;
            func_80240A84_A401C4(SI_MAP_VAR(1), SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    SetCamLeadPlayer(0, 0);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamPitch(0, 0.0, 0.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        SI_VAR(0) =f 0xFFFFF736;
        loop 1500 {
            TranslateModel(5, 0, SI_VAR(0), 0);
            SI_VAR(0) += 1.0;
            sleep 1;
        }
    }
    spawn {
        SetPlayerJumpscale(0.0);
        PlayerJump1(0xFFFFFF7E, 0, 1300, 250);
    }
    spawn {
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        NpcJump0(0xFFFFFFFC, 0xFFFFFF6A, 0, 1300, 250);
    }
    spawn {
        SetNpcJumpscale(0, 0.0);
        NpcJump0(0, 0xFFFFFF9C, 0, 1300, 250);
    }
    spawn {
        SetNpcJumpscale(1, 0.0);
        NpcJump0(1, 0xFFFFFF7E, 60, 1300, 250);
    }
    spawn {
        func_80240770_A3FEB0(2, 0, 0);
    }
    spawn {
        func_80240770_A3FEB0(3, 1, 0);
    }
    spawn {
        func_80240770_A3FEB0(4, 2, 0);
    }
    spawn {
        func_80240770_A3FEB0(5, 3, 0);
    }
    spawn {
        func_80240770_A3FEB0(6, 4, 0);
    }
    spawn {
        func_80240770_A3FEB0(7, 5, 0);
    }
    spawn {
        func_80240770_A3FEB0(8, 6, 0);
    }
    sleep 350;
    spawn {
        LoadPath(190, N(vectorList_80244930), 5, 0);
    0:
        GetNextPathPos();
        SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 0;
        }
    }
    spawn {
        MakeLerp(100, 20, 190, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100;
            SI_VAR(1) =f 0xFFFFFFEC;
            SI_VAR(1) *=f SI_VAR(0);
            GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
            SI_VAR(2) +=f SI_VAR(1);
            SetNpcPos(0xFFFFFFFC, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        MakeLerp(100, 20, 190, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100;
            SI_VAR(1) = 30;
            SI_VAR(1) *=f SI_VAR(0);
            GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
            SI_VAR(2) +=f SI_VAR(1);
            SetNpcPos(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        MakeLerp(100, 20, 190, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100;
            SI_VAR(1) = 60;
            SI_VAR(1) *=f SI_VAR(0);
            GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
            SI_VAR(3) +=f SI_VAR(1);
            SetNpcPos(1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        MakeLerp(100, 5, 190, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100;
            SetNpcScale(0xFFFFFFFC, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(0, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(1, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(2, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(3, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(4, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(5, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(6, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(7, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            SetNpcScale(8, SI_VAR(0), SI_VAR(0), SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        MakeLerp(1000, 50, 190, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100;
            func_80240B44_A40284(SI_MAP_VAR(1), SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 290;
    GotoMap(D_802461D8_A45918, 2);
    sleep 100;
});

Script N(script_80245648) = SCRIPT({
    parallel {
        loop 30 {
            GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
            PlayEffect(17, 3, SI_VAR(1), SI_VAR(2), SI_VAR(3), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 6;
        }
    }
    parallel {
        loop 30 {
            GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
            SI_VAR(1) += 20;
            PlayEffect(17, 4, SI_VAR(1), SI_VAR(2), SI_VAR(3), 40, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 8;
        }
    }
    loop {
        GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        if (SI_VAR(3) >= 1800) {
            break;
        }
        sleep 1;
    }
});

Script N(script_802457E4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetPlayerPos(0, 0xFFFFFC18, 0);
    EnableModel(3, 0);
    EnableModel(39, 0);
    TranslateGroup(15, 0, 0xFFFFF63C, 0);
    ScaleGroup(15, 0.400390625, 0.400390625, 0.400390625);
    PlayEffect(52, 2, 0, 35, 70, 7.0, SI_VAR(10), 0, 0, 0, 0, 0, 0, 0);
    func_80240B98_A402D8(SI_VAR(10), 128);
    EnableTexPanning(26, 1);
    EnableTexPanning(31, 1);
    EnableTexPanning(25, 1);
    EnableTexPanning(29, 1);
    EnableTexPanning(33, 1);
    EnableTexPanning(36, 1);
    SetCamLeadPlayer(0, 0);
    SetPanTarget(0, 0, 0, 0);
    UseSettingsFrom(0, 0, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        SI_VAR(0) = 2;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_8024496C), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 50;
        SI_VAR(0) = 6;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_8024499C), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(6, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 100;
        SI_VAR(0) = 4;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_802449CC), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(4, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 150;
        SI_VAR(0) = 3;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_802449FC), 5, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(3, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 200;
        SI_VAR(0) = 8;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_80244A38), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(8, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 250;
        SI_VAR(0) = 5;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_80244A68), 5, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(5, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 300;
        SI_VAR(0) = 7;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_80244AA4), 5, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(7, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 450;
        SI_VAR(0) = 1;
        spawn N(script_80245648);
        LoadPath(75, N(vectorList_80244AE0), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        sleep 20;
        InterpNpcYaw(1, 270, 0);
        SetNpcAnimation(1, 0x20001A);
        sleep 50;
        InterpNpcYaw(1, 90, 0);
        SetNpcAnimation(1, 0x200001);
        sleep 10;
        NpcFlyTo(1, 100, 60, 1800, 20, 0xFFFFFFF6, 0);
    }
    spawn {
        SI_VAR(0) =f 0xFFFFF736;
        loop 1500 {
            TranslateModel(5, 0, SI_VAR(0), 0);
            SI_VAR(0) += 1.5;
            sleep 1;
        }
    }
    spawn {
        SI_VAR(0) =f 0xFFFFF574;
        loop 1200 {
            TranslateGroup(38, 0, SI_VAR(0), 0);
            SI_VAR(0) += 2.5;
            sleep 1;
        }
    }
    spawn {
        sleep 840;
        FadeOutMusic(0, 3000);
    }
    sleep 800;
    func_80240BFC_A4033C();
    sleep 90;
    func_80240BEC_A4032C();
    GotoMapSpecial(D_802461E0_A45920, 2, 5);
    sleep 100;
});

// rodata: D_802461D0_A45910

// rodata: D_802461D8_A45918

// rodata: D_802461E0_A45920

s32 pad_0061E8[] = {
    0x00000000, 0x00000000,
};
