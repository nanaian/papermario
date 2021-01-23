#include "sbk_13.h"

s32 pad_000038[2];
s32 pad_000154[3];
Script N(script_ExitWalk_802401E0);
Script N(script_ExitWalk_8024023C);
Script N(script_ExitWalk_80240298);
Script N(script_ExitWalk_802402F4);
Script N(script_80240350);
Script N(main);
s32 pad_0004E4[3];
Script N(script_802404F0);
Script N(script_NpcAI_802405B8);
Script N(script_802405D8);
Script N(script_NpcAI_80240880);
StaticNpc N(npcGroup_802408D8)[1];
StaticNpc N(npcGroup_80240AC8)[1];
StaticNpc N(npcGroup_80240CB8)[1];
NpcGroupList N(npcGroupList_80240EA8);
s32 pad_000ED8[2];
const char D_80240EE0_9366C0[8]; // "sbk_12"
const char D_80240EE8_9366C8[8]; // "sbk_14"
const char D_80240EF0_9366D0[8]; // "sbk_03"
const char D_80240EF8_9366D8[8]; // "sbk_23"

// text: func_80240000_9357E0

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_935820

// text: func_80240140_935920

s32 pad_000154[] = {
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
    .tattle = 0x19006B,
};

Script N(script_ExitWalk_802401E0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240EE0_9366C0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024023C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240EE8_9366C8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240298) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240EF0_9366D0, 3);
    sleep 100;
});

Script N(script_ExitWalk_802402F4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240EF8_9366D8, 2);
    sleep 100;
});

Script N(script_80240350) = SCRIPT({
    bind N(script_ExitWalk_802401E0) to 0x80000 9;
    bind N(script_ExitWalk_8024023C) to 0x80000 5;
    bind N(script_ExitWalk_80240298) to 0x80000 3;
    bind N(script_ExitWalk_802402F4) to 0x80000 7;
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
    MakeNpcs(0, N(npcGroupList_80240EA8));
    func_80240000_9357E0();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240350);
    spawn EnterWalk;
});

s32 pad_0004E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802404F0) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    GetNpcPos(SI_VAR(10), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(2) += 30;
    MakeItemEntity(343, SI_VAR(1), SI_VAR(2), SI_VAR(3), 1, 0);
    func_80240040_935820(SI_VAR(10), SI_VAR(0), SI_AREA_FLAG(1));
    RemoveItemEntity(SI_VAR(0));
});

NpcAISettings N(aISettings_80240588) = {
    .moveSpeed = 2.7f,
    .moveTime = 0x2D,
    .waitTime = 0x1E,
    .alertRadius = 450.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 8.3f,
    .unk_1C = 0xB4,
    .unk_20 = 0x64,
    .chaseRadius = 550.0f,
    .unk_28 = 100.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802405B8) = SCRIPT({
    DoBasicAI(N(aISettings_80240588));
});

Script N(script_802405D8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            0x80045900(0);
        }
        == 3 {
            DisablePlayerInput(1);
            SI_AREA_FLAG(1) = 1;
            SetNpcFlagBits(-1, 64, 1);
            SetNpcAnimation(-1, 0x320002);
            GetSelfNpcID(SI_VAR(0));
            spawn N(script_802404F0);
            SetNpcJumpscale(-1, 1.0);
            GetPlayerPos(SI_VAR(7), SI_VAR(8), SI_VAR(9));
            SI_VAR(7) += 20;
            NpcJump0(-1, SI_VAR(7), 0, SI_VAR(9), 6);
            SI_VAR(7) += 20;
            NpcJump0(-1, SI_VAR(7), 0, SI_VAR(9), 6);
            GetNpcYaw(-1, SI_VAR(0));
            SI_VAR(0) += 180;
            InterpNpcYaw(-1, SI_VAR(0), 5);
            SetNpcAnimation(-1, 0x320008);
            sleep 10;
            SetNpcSpeed(-1, 16.0);
            SI_VAR(7) += 200;
            NpcMoveTo(-1, SI_VAR(7), SI_VAR(9), 0);
            SI_AREA_FLAG(1) = 0;
            DisablePlayerInput(0);
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_80240824) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802405B8),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = &N(script_802405D8),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0x5,
};

NpcAISettings N(aISettings_80240850) = {
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

Script N(script_NpcAI_80240880) = SCRIPT({
    func_80240140_935920();
    DoBasicAI(N(aISettings_80240850));
});

NpcSettings N(npcSettings_802408AC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240880),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802408D8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802408AC),
        .pos = { -70.0, 0.0, -60.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFFBA, 0x00000000, 0xFFFFFFC4, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240AC8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802408AC),
        .pos = { 120.0, 0.0, -50.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x00000078, 0x00000000, 0xFFFFFFCE, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240CB8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240824),
        .pos = { -200.0, 0.0, 230.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0xFFFFFF38, 0x00000000, 0x000000E6, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00320001, 0x00320005, 0x00320007, 0x00320007, 0x00320001, 0x00320001, 0x00320009, 0x00320009, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000,
        },
    },
};

NpcGroupList N(npcGroupList_80240EA8) = {
    NPC_GROUP(N(npcGroup_802408D8), 0x0A040001),
    NPC_GROUP(N(npcGroup_80240AC8), 0x0A050001),
    NPC_GROUP(N(npcGroup_80240CB8), 0x0A0E0001),
    {},
};

s32 pad_000ED8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240EE0_9366C0

// rodata: D_80240EE8_9366C8

// rodata: D_80240EF0_9366D0

// rodata: D_80240EF8_9366D8
