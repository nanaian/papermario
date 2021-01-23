#include "sbk_32.h"

s32 pad_000038[2];
s32 pad_000154[3];
Script N(script_ExitWalk_802401F0);
Script N(script_ExitWalk_8024024C);
Script N(script_ExitWalk_802402A8);
Script N(script_ExitWalk_80240304);
Script N(script_80240360);
Script N(script_EnterWalk_802403E0);
Script N(main);
Script N(script_80240560);
Script N(script_NpcAI_80240628);
Script N(script_80240648);
Script N(script_NpcAI_802408F0);
StaticNpc N(npcGroup_80240948)[1];
StaticNpc N(npcGroup_80240B38)[1];
StaticNpc N(npcGroup_80240D28)[1];
NpcGroupList N(npcGroupList_80240F18);
s32 pad_000F48[2];
const char D_80240F50_9459B0[8]; // "sbk_31"
const char D_80240F58_9459B8[8]; // "sbk_33"
const char D_80240F60_9459C0[8]; // "sbk_22"
const char D_80240F68_9459C8[8]; // "sbk_42"

// text: func_80240000_944A60

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_944AA0

// text: func_80240140_944BA0

s32 pad_000154[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
    { 157.0f, 200.0f, -338.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190079,
};

Script N(script_ExitWalk_802401F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240F50_9459B0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024024C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240F58_9459B8, 0);
    sleep 100;
});

Script N(script_ExitWalk_802402A8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240F60_9459C0, 3);
    sleep 100;
});

Script N(script_ExitWalk_80240304) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240F68_9459C8, 2);
    sleep 100;
});

Script N(script_80240360) = SCRIPT({
    bind N(script_ExitWalk_802401F0) to 0x80000 9;
    bind N(script_ExitWalk_8024024C) to 0x80000 5;
    bind N(script_ExitWalk_802402A8) to 0x80000 3;
    bind N(script_ExitWalk_80240304) to 0x80000 7;
});

Script N(script_EnterWalk_802403E0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            spawn N(script_80240360);
        }
        else {
            SI_VAR(0) = N(script_80240360);
            spawn EnterWalk;
        }
    }
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
    MakeNpcs(0, N(npcGroupList_80240F18));
    func_80240000_944A60();
    SetMusicTrack(0, 23, 0, 8);
    spawn N(script_EnterWalk_802403E0);
    sleep 1;
});

Script N(script_80240560) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    GetNpcPos(SI_VAR(10), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(2) += 30;
    MakeItemEntity(343, SI_VAR(1), SI_VAR(2), SI_VAR(3), 1, 0);
    func_80240040_944AA0(SI_VAR(10), SI_VAR(0), SI_AREA_FLAG(1));
    RemoveItemEntity(SI_VAR(0));
});

NpcAISettings N(aISettings_802405F8) = {
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

Script N(script_NpcAI_80240628) = SCRIPT({
    DoBasicAI(N(aISettings_802405F8));
});

Script N(script_80240648) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            func_80045900(0);
        }
        == 3 {
            DisablePlayerInput(1);
            SI_AREA_FLAG(1) = 1;
            SetNpcFlagBits(-1, 64, 1);
            SetNpcAnimation(-1, 0x320002);
            GetSelfNpcID(SI_VAR(0));
            spawn N(script_80240560);
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

NpcSettings N(npcSettings_80240894) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240628),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &N(script_80240648),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0x5,
};

NpcAISettings N(aISettings_802408C0) = {
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

Script N(script_NpcAI_802408F0) = SCRIPT({
    func_80240140_944BA0();
    DoBasicAI(N(aISettings_802408C0));
});

NpcSettings N(npcSettings_8024091C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802408F0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80240948)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024091C),
        .pos = { -140.0, 0.0, -270.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF74, 0x00000000, 0xFFFFFEF2, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240B38)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024091C),
        .pos = { -120.0, 0.0, 110.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF88, 0x00000000, 0x0000006E, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240D28)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240894),
        .pos = { 23.0, 0.0, -260.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0x00000017, 0x00000000, 0xFFFFFEFC, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00320001, 0x00320005, 0x00320007, 0x00320007, 0x00320001, 0x00320001, 0x00320009, 0x00320009, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000,
        },
    },
};

NpcGroupList N(npcGroupList_80240F18) = {
    NPC_GROUP(N(npcGroup_80240948), 0x0A010001),
    NPC_GROUP(N(npcGroup_80240B38), 0x0A020001),
    NPC_GROUP(N(npcGroup_80240D28), 0x0A0B0001),
    {},
};

s32 pad_000F48[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240F50_9459B0

// rodata: D_80240F58_9459B8

// rodata: D_80240F60_9459C0

// rodata: D_80240F68_9459C8
