#include "sbk_03.h"

s32 pad_000038[2];
s32 pad_000054[3];
Script N(script_ExitWalk_802400E0);
Script N(script_ExitWalk_8024013C);
Script N(script_ExitWalk_80240198);
Script N(script_802401F4);
Script N(main);
s32 pad_00036C[1];
Script N(script_NpcAI_802403A0);
StaticNpc N(npcGroup_802403F8)[1];
StaticNpc N(npcGroup_802405E8)[1];
StaticNpc N(npcGroup_802407D8)[1];
StaticNpc N(npcGroup_802409C8)[1];
NpcGroupList N(npcGroupList_80240BB8);
s32 pad_000BF4[3];
const char D_80240C00_9304B0[8]; // "sbk_02"
const char D_80240C08_9304B8[8]; // "sbk_04"
const char D_80240C10_9304C0[8]; // "sbk_13"
s32 pad_000C18[2];

// text: func_80240000_92F8B0

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_92F8F0

s32 pad_000054[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190064,
};

Script N(script_ExitWalk_802400E0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240C00_9304B0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024013C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240C08_9304B8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240198) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240C10_9304C0, 2);
    sleep 100;
});

Script N(script_802401F4) = SCRIPT({
    bind N(script_ExitWalk_802400E0) to 0x80000 7;
    bind N(script_ExitWalk_8024013C) to 0x80000 3;
    bind N(script_ExitWalk_80240198) to 0x80000 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 10;
    SetSpriteShading(-1);
    if (SI_SAVE_VAR(0) == 0xFFFFFFC1) {
        DisablePulseStone(0);
    }
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80240BB8));
    func_80240000_92F8B0();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_802401F4);
    spawn EnterWalk;
});

s32 pad_00036C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80240370) = {
    .moveSpeed = 1.7999999523162842,
    .moveTime = 0x32,
    .waitTime = 0xA,
    .alertRadius = 250.0,
    .unk_10 = 0.0,
    .unk_14 = 0x2,
    .chaseSpeed = 3.5,
    .unk_1C = 0x2D,
    .unk_20 = 0x6,
    .chaseRadius = 300.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802403A0) = SCRIPT({
    func_80240040_92F8F0();
    DoBasicAI(N(aISettings_80240370));
});

NpcSettings N(npcSettings_802403CC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802403A0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802403F8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802403CC),
        .pos = { -340.0, 0.0, -125.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFEAC, 0x00000000, 0xFFFFFF83, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_802405E8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802403CC),
        .pos = { 10.0, 0.0, 100.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x0000000A, 0x00000000, 0x00000064, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_802407D8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802403CC),
        .pos = { -90.0, 0.0, 260.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFFA6, 0x00000000, 0x00000104, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_802409C8)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802403CC),
        .pos = { 165.0, 0.0, 300.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x000000A5, 0x00000000, 0x0000012C, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

NpcGroupList N(npcGroupList_80240BB8) = {
    NPC_GROUP(N(npcGroup_802403F8), 0x0A000001),
    NPC_GROUP(N(npcGroup_802405E8), 0x0A030001),
    NPC_GROUP(N(npcGroup_802407D8), 0x0A020001),
    NPC_GROUP(N(npcGroup_802409C8), 0x0A010001),
    {},
};

s32 pad_000BF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240C00_9304B0

// rodata: D_80240C08_9304B8

// rodata: D_80240C10_9304C0

s32 pad_000C18[] = {
    0x00000000, 0x00000000,
};

