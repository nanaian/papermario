#include "sbk_20.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802401C0);
Script N(script_ExitWalk_8024021C);
Script N(script_ExitWalk_80240278);
Script N(script_802402D4);
Script N(main);
s32 pad_000458[2];
Script N(script_80240460);
Script N(script_MakeEntities);
s32 pad_000838[2];
Script N(script_80240840);
Script N(script_NpcAI_80240908);
Script N(script_80240928);
StaticNpc N(npcGroup_80240BA0)[1];
StaticNpc N(npcGroup_80240D90)[1];
NpcGroupList N(npcGroupList_80240F80);
s32 pad_000FA4[3];
const char D_80240FB0_939540[8]; // "sbk_21"
const char D_80240FB8_939548[8]; // "sbk_10"
const char D_80240FC0_939550[8]; // "sbk_30"
s32 pad_000FC8[2];

// text: func_80240000_938590

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_9385D0

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
    .tattle = 0x19006F,
};

Script N(script_ExitWalk_802401C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240FB0_939540, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024021C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240FB8_939548, 3);
    sleep 100;
});

Script N(script_ExitWalk_80240278) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240FC0_939550, 2);
    sleep 100;
});

Script N(script_802402D4) = SCRIPT({
    bind N(script_ExitWalk_802401C0) to 0x80000 5;
    bind N(script_ExitWalk_8024021C) to 0x80000 3;
    bind N(script_ExitWalk_80240278) to 0x80000 7;
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
    MakeNpcs(0, N(npcGroupList_80240F80));
    await N(script_MakeEntities);
    func_80240000_938590();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_802402D4);
    spawn EnterWalk;
});

s32 pad_000458[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240460) = SCRIPT({
    SI_MAP_VAR(0) += 1;
    match SI_MAP_VAR(0) {
        == 1 {
            if (SI_SAVE_FLAG(802) == 0) {
                PlaySound(11);
                PlaySoundAt(8456, 0, 0xFFFFFFB0, 60, 0xFFFFFF38);
                PlayEffect(17, 0, 0xFFFFFFB0, 73, 0xFFFFFF38, 10, 0, 0, 0, 0, 0, 0, 0, 0);
                MakeEntity(0x802EA564, 0xFFFFFFB0, 60, 0xFFFFFF38, 0, 138, 0x80000000);
                AssignBlockFlag(SI_SAVE_FLAG(802));
            }
        }
        == 10 {
            if (SI_SAVE_FLAG(803) == 0) {
                PlaySound(11);
                PlaySoundAt(8456, 0, 0xFFFFFF4C, 60, 0xFFFFFF38);
                PlayEffect(17, 0, 0xFFFFFF4C, 73, 0xFFFFFF38, 10, 0, 0, 0, 0, 0, 0, 0, 0);
                MakeEntity(0x802EA564, 0xFFFFFF4C, 60, 0xFFFFFF38, 0, 140, 0x80000000);
                AssignBlockFlag(SI_SAVE_FLAG(803));
            }
        }
        == 100 {
            if (SI_SAVE_FLAG(804) == 0) {
                PlaySound(11);
                PlaySoundAt(8456, 0, 0xFFFFFF7E, 60, 0xFFFFFF6A);
                PlayEffect(17, 0, 0xFFFFFF7E, 73, 0xFFFFFF6A, 10, 0, 0, 0, 0, 0, 0, 0, 0);
                MakeEntity(0x802EA564, 0xFFFFFF7E, 60, 0xFFFFFF6A, 0, 142, 0x80000000);
                AssignBlockFlag(SI_SAVE_FLAG(804));
            }
        }
    }
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA07C, 0xFFFFFF7E, 0, 0xFFFFFF38, 0, 0x80000000);
    AssignScript(N(script_80240460));
    if (SI_SAVE_FLAG(802) == 1) {
        MakeEntity(0x802EA564, 0xFFFFFFB0, 60, 0xFFFFFF38, 0, 138, 0x80000000);
        AssignBlockFlag(SI_SAVE_FLAG(802));
    }
    if (SI_SAVE_FLAG(803) == 1) {
        MakeEntity(0x802EA564, 0xFFFFFF4C, 60, 0xFFFFFF38, 0, 140, 0x80000000);
        AssignBlockFlag(SI_SAVE_FLAG(803));
    }
    if (SI_SAVE_FLAG(804) == 1) {
        MakeEntity(0x802EA564, 0xFFFFFF7E, 60, 0xFFFFFF6A, 0, 142, 0x80000000);
        AssignBlockFlag(SI_SAVE_FLAG(804));
    }
});

s32 pad_000838[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240840) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    GetNpcPos(SI_VAR(10), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(2) += 30;
    MakeItemEntity(343, SI_VAR(1), SI_VAR(2), SI_VAR(3), 1, 0);
    func_80240040_9385D0(SI_VAR(10), SI_VAR(0), SI_AREA_FLAG(1));
    RemoveItemEntity(SI_VAR(0));
});

NpcAISettings N(aISettings_802408D8) = {
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

Script N(script_NpcAI_80240908) = SCRIPT({
    DoBasicAI(N(aISettings_802408D8));
});

Script N(script_80240928) = SCRIPT({
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
            spawn N(script_80240840);
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

NpcSettings N(npcSettings_80240B74) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240908),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &N(script_80240928),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0x5,
};

StaticNpc N(npcGroup_80240BA0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240B74),
        .pos = { -100.0, 0.0, 80.0 },
        .flags = 0x00000800,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0xFFFFFF9C, 0x00000000, 0x00000050, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00320001, 0x00320005, 0x00320007, 0x00320007, 0x00320001, 0x00320001, 0x00320009, 0x00320009, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000,
        },
    },
};

StaticNpc N(npcGroup_80240D90)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240B74),
        .pos = { 120.0, 0.0, 30.0 },
        .flags = 0x00000800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0x00000078, 0x00000000, 0x0000001E, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00320001, 0x00320005, 0x00320007, 0x00320007, 0x00320001, 0x00320001, 0x00320009, 0x00320009, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000, 0x00320000,
        },
    },
};

NpcGroupList N(npcGroupList_80240F80) = {
    NPC_GROUP(N(npcGroup_80240BA0), 0x0A0C0001),
    NPC_GROUP(N(npcGroup_80240D90), 0x0A0A0001),
    {},
};

s32 pad_000FA4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240FB0_939540

// rodata: D_80240FB8_939548

// rodata: D_80240FC0_939550

s32 pad_000FC8[] = {
    0x00000000, 0x00000000,
};
