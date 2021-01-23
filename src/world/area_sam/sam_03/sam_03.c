#include "sam_03.h"

Script N(script_80240980);
s32 pad_0009AC[1];
Script N(script_ExitWalk_802409B0);
Script N(script_ExitWalk_80240A0C);
Script N(script_80240A68);
Script N(main);
s32 pad_000C74[3];
Script N(script_Idle_80240CAC);
Script N(script_Interact_80241094);
Script N(script_Hit_802410C4);
Script N(script_Defeat_80241164);
Script N(script_Init_802413F0);
Script N(script_Init_802414CC);
StaticNpc N(npcGroup_802414F8)[2];
NpcGroupList N(npcGroupList_802418D8);
Script N(script_802418F0);
Script N(script_NpcAI_802419DC);
Script N(script_NpcAI_80241A78);
s32 N(extraAnimationList_80241B4C)[2];
s32 N(extraAnimationList_80241B54)[7];
StaticNpc N(npcGroup_80241B70)[2];
StaticNpc N(npcGroup_80241F50)[2];
NpcGroupList N(npcGroupList_80242330);
s32 pad_002354[3];
const char D_80242360_D13420[8]; // "sam_11"
const char D_80242368_D13428[8]; // "sam_04"
s32 pad_002508[2];

// text: func_80240000_D110C0

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240258_D11318

// text: func_8024040C_D114CC

// text: func_8024066C_D1172C

EntryList N(entryList) = {
    { -730.0f, 0.0f, 0.0f, 90.0f },
    { 730.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19012D,
};

Script N(script_80240980) = SCRIPT({
    SetMusicTrack(0, 58, 0, 8);
});

s32 pad_0009AC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802409B0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242360_D13420, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240A0C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242368_D13428, 0);
    sleep 100;
});

Script N(script_80240A68) = SCRIPT({
    bind N(script_ExitWalk_802409B0) to 0x80000 6;
    bind N(script_ExitWalk_80240A0C) to 0x80000 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 41;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1987) = 1;
    EnableModel(35, 0);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    if (SI_SAVE_VAR(0) < 89) {
        MakeNpcs(0, N(npcGroupList_802418D8));
    } else {
        MakeNpcs(0, N(npcGroupList_80242330));
    }
    await N(script_80240980);
    PlayEffect(69, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    ModifyColliderFlags(3, 10, 8);
    ModifyColliderFlags(3, 1, 8);
    ModifyColliderFlags(3, 6, 8);
    SI_VAR(0) = N(script_80240A68);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_000C74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240C80) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
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

Script N(script_Idle_80240CAC) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 68) {
        return;
    }
11:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 400) {
        goto 11;
    }
    0x802D2B6C();
    DisablePlayerInput(1);
    SetMusicTrack(0, 71, 0, 8);
    SpeakToPlayer(0, 0x210016, 0x210003, 0, 0x1200D8);
    SetNpcJumpscale(0, 1.0);
    NpcJump0(0, 520, 0, 0xFFFFFFBC, 20);
    PlayerFaceNpc(0, 0);
    sleep 15;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFEC;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 225.0);
    SetCamPitch(0, 15.0, -8.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x21001A, 0x210003, 0, 0x1200D9);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 30;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x210016, 0x210003, 0, 0x1200DA);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    GetDist2D(SI_VAR(6), SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(5));
    SI_VAR(6) *= 0.7001953125;
    func_80240000_D110C0();
    AddVectorPolar(SI_VAR(3), SI_VAR(5), SI_VAR(6), SI_VAR(0));
    SetNpcSpeed(0, 4.0);
    SetNpcAnimation(0, 0x21000A);
    spawn {
        NpcMoveTo(0, SI_VAR(3), SI_VAR(5), 0);
    }
    StartBossBattle(4);
    PanToTarget(0, 0, 0);
});

Script N(script_Interact_80241094) = SCRIPT({
    SpeakToPlayer(-1, 0x210014, 0x210014, 5, 0x1200DF);
});

Script N(script_Hit_802410C4) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        2, 4, 6 {
            DisablePlayerInput(1);
            SpeakToPlayer(-1, 0x210011, 0x210027, 5, 0x1200DF);
            DisablePlayerInput(0);
        }
    }
});

Script N(script_Defeat_80241164) = SCRIPT({
    ClearDefeatedEnemies();
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_VAR(0) = 68;
            SetNpcAnimation(0, 0x210014);
            SetNpcAnimation(1, 0x210014);
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 200.0);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            spawn {
                sleep 5;
                PanToTarget(0, 0, 0);
                SetCamSpeed(0, 2.0);
                WaitForCam(0, 1.0);
                SetCamSpeed(0, 1.0);
            }
            SpeakToPlayer(0, 0x210014, 0x210014, 5, 0x1200DF);
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcCollisionSize(0, 26, 24);
            SetNpcCollisionSize(1, 26, 24);
            SetNpcFlagBits(1, 2, 1);
            BindNpcInteract(-1, N(script_Interact_80241094));
            BindNpcHit(1, N(script_Hit_802410C4));
            spawn N(script_80240980);
            DisablePlayerInput(0);
        }
        == 2 {
        }
    }
});

Script N(script_Init_802413F0) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240CAC));
    BindNpcDefeat(-1, N(script_Defeat_80241164));
    match SI_SAVE_VAR(0) {
        < 68 {
            SetNpcPos(0, 600, 0, 0xFFFFFFBF);
        }
        >= 68 {
            SetNpcPos(0, 399, 6, 0xFFFFFF9C);
            SetNpcAnimation(0, 0x210027);
            EnableModel(35, 1);
            ModifyColliderFlags(1, 13, 0x7FFFFE00);
        }
    }
});

Script N(script_Init_802414CC) = SCRIPT({
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
});

StaticNpc N(npcGroup_802414F8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240C80),
        .pos = { 261.0, 0.0, -76.0 },
        .flags = 0x00440D0D,
        .init = N(script_Init_802413F0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
        .tattle = 0x1A0006,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240C80),
        .pos = { 261.0, 0.0, -76.0 },
        .flags = 0x21540F0C,
        .init = N(script_Init_802414CC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
        .tattle = 0x1A0006,
    },
};

NpcGroupList N(npcGroupList_802418D8) = {
    NPC_GROUP(N(npcGroup_802414F8), 0x02060000),
    {},
};

Script N(script_802418F0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
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

NpcAISettings N(aISettings_802419AC) = {
    .moveSpeed = 0.5f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x14,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802419DC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 13);
    SetSelfVar(3, 30);
    func_8024066C_D1172C(N(aISettings_802419AC));
});

NpcSettings N(npcSettings_80241A4C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x30,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802419DC),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

Script N(script_NpcAI_80241A78) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 6);
    SetSelfVar(1, 28);
    SetSelfVar(2, 55);
    SetSelfVar(3, 32);
    SetSelfVar(4, 10);
    SetSelfVar(15, 0);
    func_8024040C_D114CC();
});

NpcSettings N(npcSettings_80241B20) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241A78),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802418F0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_80241B4C)[] = {
    0x00520000, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241B54)[] = {
    0x00520000, 0x00520001, 0x0052000B, 0x00520004, 0x00520002, 0x00520003, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80241B70)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241A4C),
        .pos = { -345.0, 0.0, 115.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_PEBBLE, 2 }, { ItemId_SUPER_SHROOM, 8 } },
        .movement = { 0xFFFFFEA7, 0x00000000, 0x00000073, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEA7, 0x00000000, 0x00000073, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
        .extraAnimations = N(extraAnimationList_80241B54),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241B20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
        .extraAnimations = N(extraAnimationList_80241B4C),
    },
};

StaticNpc N(npcGroup_80241F50)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241A4C),
        .pos = { 200.0, 0.0, 0.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_PEBBLE, 2 }, { ItemId_SUPER_SHROOM, 8 } },
        .movement = { 0x000000C8, 0x00000000, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
        .extraAnimations = N(extraAnimationList_80241B54),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241B20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
        .extraAnimations = N(extraAnimationList_80241B4C),
    },
};

NpcGroupList N(npcGroupList_80242330) = {
    NPC_GROUP(N(npcGroup_80241B70), 0x1D010001),
    NPC_GROUP(N(npcGroup_80241F50), 0x1D020001),
    {},
};

s32 pad_002354[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242360_D13420

// rodata: D_80242368_D13428

// rodata: D_80242370_D13430

// rodata: jtbl_80242378_D13438

s32 pad_002508[] = {
    0x00000000, 0x00000000,
};
