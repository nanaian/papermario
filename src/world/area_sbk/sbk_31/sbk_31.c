#include "sbk_31.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802401C0);
Script N(script_ExitWalk_8024021C);
Script N(script_ExitWalk_80240278);
Script N(script_ExitWalk_802402D4);
Script N(script_80240330);
Script N(main);
s32 pad_0004C4[3];
Script N(script_802404D0);
Script N(script_NpcAI_80240598);
Script N(script_802405B8);
StaticNpc N(npcGroup_80240830)[1];
NpcGroupList N(npcGroupList_80240A20);
s32 pad_000A38[2];
const char D_80240A40_944A40[8]; // "sbk_30"
const char D_80240A48_944A48[8]; // "sbk_32"
const char D_80240A50_944A50[8]; // "sbk_21"
const char D_80240A58_944A58[8]; // "sbk_41"

// text: func_80240000_944000

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_944040

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
    .tattle = 0x190078,
};

Script N(script_ExitWalk_802401C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240A40_944A40, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024021C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240A48_944A48, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240278) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240A50_944A50, 3);
    sleep 100;
});

Script N(script_ExitWalk_802402D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240A58_944A58, 2);
    sleep 100;
});

Script N(script_80240330) = SCRIPT({
    bind N(script_ExitWalk_802401C0) to 0x80000 9;
    bind N(script_ExitWalk_8024021C) to 0x80000 5;
    bind N(script_ExitWalk_80240278) to 0x80000 3;
    bind N(script_ExitWalk_802402D4) to 0x80000 7;
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
    MakeNpcs(0, N(npcGroupList_80240A20));
    func_80240000_944000();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240330);
    spawn EnterWalk;
});

s32 pad_0004C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802404D0) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    GetNpcPos(SI_VAR(10), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(2) += 30;
    MakeItemEntity(343, SI_VAR(1), SI_VAR(2), SI_VAR(3), 1, 0);
    func_80240040_944040(SI_VAR(10), SI_VAR(0), SI_AREA_FLAG(1));
    RemoveItemEntity(SI_VAR(0));
});

NpcAISettings N(aISettings_80240568) = {
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

Script N(script_NpcAI_80240598) = SCRIPT({
    DoBasicAI(N(aISettings_80240568));
});

Script N(script_802405B8) = SCRIPT({
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
            spawn N(script_802404D0);
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

NpcSettings N(npcSettings_80240804) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240598),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &N(script_802405B8),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0x5,
};

StaticNpc N(npcGroup_80240830)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240804),
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

NpcGroupList N(npcGroupList_80240A20) = {
    NPC_GROUP(N(npcGroup_80240830), 0x0A0C0001),
    {},
};

s32 pad_000A38[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240A40_944A40

// rodata: D_80240A48_944A48

// rodata: D_80240A50_944A50

// rodata: D_80240A58_944A58
