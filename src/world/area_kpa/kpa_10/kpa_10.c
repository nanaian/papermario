#include "kpa_10.h"

s32 pad_00030C[1];
Script N(script_802403A0);
s32 pad_000408[2];
Script N(script_80240410);
Script N(script_ExitWalk_802404AC);
Script N(script_ExitWalk_80240508);
Script N(script_ExitWalk_80240564);
Script N(script_ExitWalk_802405C0);
Script N(script_ExitWalk_8024061C);
Script N(script_80240678);
Script N(script_EnterWalk_80240714);
Script N(main);
s32 unk_missing_8024089C[11];
StaticNpc N(npcGroup_802408C8)[3];
NpcGroupList N(npcGroupList_80240E98);
Script N(script_MakeEntities);
s32 pad_000F1C[1];
const char D_80240F20_A528A0[8]; // "kpa_62"
const char D_80240F28_A528A8[8]; // "kpa_12"
const char D_80240F30_A528B0[8]; // "kpa_17"
s32 pad_000F38[2];

// text: func_80240000_A51980

// text: func_80240124_A51AA4

s32 pad_00030C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 25.0f, 100.0f, -140.0f, 90.0f },
    { 1402.0f, 30.0f, -1082.0f, 180.0f },
    { 1378.0f, 30.0f, -724.0f, 90.0f },
    { 15.0f, -20.0f, -20.0f, 90.0f },
    { 1529.0f, -20.0f, -1082.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190158,
};

Script N(script_802403A0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

s32 pad_000408[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240410) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A51980();
                    return;
                }
            }
        }
    }
    func_80240124_A51AA4();
});

Script N(script_ExitWalk_802404AC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240F20_A528A0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240508) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240F28_A528A8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240564) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240F30_A528B0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802405C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240F20_A528A0, 2);
    sleep 100;
});

Script N(script_ExitWalk_8024061C) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_80240F28_A528A8, 2);
    sleep 100;
});

Script N(script_80240678) = SCRIPT({
    bind N(script_ExitWalk_802404AC) to 0x80000 96;
    bind N(script_ExitWalk_80240508) to 0x80000 90;
    bind N(script_ExitWalk_80240564) to 0x80000 106;
    bind N(script_ExitWalk_802405C0) to 0x80000 99;
    bind N(script_ExitWalk_8024061C) to 0x80000 93;
});

Script N(script_EnterWalk_80240714) = SCRIPT({
    GetLoadType(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240678);
        return;
    }
    SI_VAR(0) = N(script_80240678);
    spawn EnterWalk;
    sleep 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80240E98));
    await N(script_MakeEntities);
    spawn N(script_EnterWalk_80240714);
    sleep 1;
    ModifyColliderFlags(0, 108, 0x7FFFFE00);
    spawn N(script_802403A0);
});

NpcSettings N(npcSettings_80240870) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
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

s32 unk_missing_8024089C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

StaticNpc N(npcGroup_802408C8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240870),
        .pos = { 845.0, 30.0, -285.0 },
        .flags = 0x00002D01,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A0113,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240870),
        .pos = { 872.0, 30.0, -315.0 },
        .flags = 0x00002D01,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830201, 0x00830202, 0x00830203, 0x00830203, 0x00830201, 0x00830201, 0x00830206, 0x00830206, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203,
        },
        .tattle = 0x1A0114,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80240870),
        .pos = { 900.0, 30.0, -285.0 },
        .flags = 0x00002D01,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301,
        },
        .tattle = 0x1A0115,
    },
};

NpcGroupList N(npcGroupList_80240E98) = {
    NPC_GROUP(N(npcGroup_802408C8), 0x00000003),
    {},
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 1400, 90, 0xFFFFFC95, 0, 0x80000000);
    MakeEntity(0x802EA564, 1400, 90, 0xFFFFFE89, 0, 149, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1547));
});

s32 pad_000F1C[] = {
    0x00000000,
};

// rodata: D_80240F20_A528A0

// rodata: D_80240F28_A528A8

// rodata: D_80240F30_A528B0

s32 pad_000F38[] = {
    0x00000000, 0x00000000,
};

