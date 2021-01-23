#include "sbk_53.h"

s32 pad_000038[2];
s32 pad_000054[3];
Script N(script_ExitWalk_802400E0);
Script N(script_ExitWalk_8024013C);
Script N(script_ExitWalk_80240198);
Script N(script_ExitWalk_802401F4);
Script N(script_80240250);
Script N(main);
s32 pad_0003E4[3];
Script N(script_NpcAI_80240420);
StaticNpc N(npcGroup_80240478)[1];
StaticNpc N(npcGroup_80240668)[1];
StaticNpc N(npcGroup_80240858)[1];
NpcGroupList N(npcGroupList_80240A48);
s32 pad_000A78[2];
const char D_80240A80_952560[8]; // "sbk_52"
const char D_80240A88_952568[8]; // "sbk_54"
const char D_80240A90_952570[8]; // "sbk_43"
const char D_80240A98_952578[8]; // "sbk_63"

// text: func_80240000_951AE0

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_951B20

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
    .tattle = 0x190088,
};

Script N(script_ExitWalk_802400E0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240A80_952560, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024013C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240A88_952568, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240198) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240A90_952570, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401F4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240A98_952578, 2);
    sleep 100;
});

Script N(script_80240250) = SCRIPT({
    bind N(script_ExitWalk_802400E0) to 0x80000 9;
    bind N(script_ExitWalk_8024013C) to 0x80000 5;
    bind N(script_ExitWalk_80240198) to 0x80000 3;
    bind N(script_ExitWalk_802401F4) to 0x80000 7;
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
    MakeNpcs(0, N(npcGroupList_80240A48));
    func_80240000_951AE0();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240250);
    spawn EnterWalk;
});

s32 pad_0003E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_802403F0) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x32,
    .waitTime = 0xA,
    .alertRadius = 250.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x2D,
    .unk_20 = 0x6,
    .chaseRadius = 300.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240420) = SCRIPT({
    func_80240040_951B20();
    DoBasicAI(N(aISettings_802403F0));
});

NpcSettings N(npcSettings_8024044C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240420),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80240478)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024044C),
        .pos = { -176.0, 0.0, -196.0 },
        .flags = 0x00002C00,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF50, 0x00000000, 0xFFFFFF3C, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240668)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024044C),
        .pos = { -110.0, 0.0, -270.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF92, 0x00000000, 0xFFFFFEF2, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240858)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_8024044C),
        .pos = { 252.0, 0.0, -233.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x000000FC, 0x00000000, 0xFFFFFF17, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

NpcGroupList N(npcGroupList_80240A48) = {
    NPC_GROUP(N(npcGroup_80240478), 0x0A000001),
    NPC_GROUP(N(npcGroup_80240668), 0x0A020001),
    NPC_GROUP(N(npcGroup_80240858), 0x0A010001),
    {},
};

s32 pad_000A78[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240A80_952560

// rodata: D_80240A88_952568

// rodata: D_80240A90_952570

// rodata: D_80240A98_952578
