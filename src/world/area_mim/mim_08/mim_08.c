#include "mim_08.h"

s32 pad_002F3C[1];
Script N(script_80242FC0);
s32 pad_002FFC[1];
Script N(script_ExitWalk_80243000);
Script N(script_ExitWalk_8024305C);
Script N(script_ExitWalk_802430B8);
Script N(script_ExitWalk_80243114);
Script N(script_80243170);
Script N(script_802431F0);
Script N(main);
s32 pad_0034EC[1];
Script N(script_MakeEntities);
s32 pad_003538[2];
Script N(script_80243540);
Script N(script_802437D4);
Script N(script_802438F4);
Script N(script_802439C4);
Script N(script_80243FF0);
Script N(script_8024406C);
Script N(script_802440E8);
Script N(script_80244164);
Script N(script_802441E0);
s32 pad_0043B8[2];
f32 N(floatTable_802443C0)[6];
Script N(script_NpcAI_80244408);
Script N(script_802444A4);
Script N(script_NpcAI_80244590);
Script N(script_NpcAI_80244690);
Script N(script_80244710);
Script N(script_Idle_802447C8);
Script N(script_Init_80244884);
StaticNpc N(npcGroup_802448A8)[1];
StaticNpc N(npcGroup_80244A98)[2];
StaticNpc N(npcGroup_80244E78)[2];
NpcGroupList N(npcGroupList_80245258);
s32 pad_005288[2];
const char D_80245290_BB2BD0[8]; // "mim_01"
const char D_80245298_BB2BD8[8]; // "mim_05"
s32 pad_0052F4[1];

// text: func_80240000_BAD940

// text: func_80240068_BAD9A8

// text: func_802400A0_BAD9E0

// text: func_80240250_BADB90

// text: N(UnkNpcAIFunc1)

// text: func_80240938_BAE278

// text: N(UnkNpcAIFunc2)

// text: func_80240CF4_BAE634

// text: func_80240D60_BAE6A0

// text: N(UnkNpcAIFunc3)

// text: func_80240EF8_BAE838

// text: func_80241288_BAEBC8

// text: func_802413AC_BAECEC

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_802417A0_BAF0E0

// text: func_80241954_BAF294

// text: func_80241BB4_BAF4F4

// text: func_80241E68_BAF7A8

// text: func_80241ED4_BAF814

// text: func_80241FD0_BAF910

// text: func_80242A10_BB0350

// text: func_80242AA0_BB03E0

// text: func_80242BA0_BB04E0

// text: func_80242C00_BB0540

// text: func_80242CEC_BB062C

s32 pad_002F3C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, -530.0f, 180.0f },
    { -530.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 530.0f, 0.0f },
    { 530.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900AE,
};

Script N(script_80242FC0) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_002FFC[] = {
    0x00000000,
};

Script N(script_ExitWalk_80243000) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245290_BB2BD0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024305C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245298_BB2BD8, 3);
    sleep 100;
});

Script N(script_ExitWalk_802430B8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80245290_BB2BD0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80243114) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80245290_BB2BD0, 1);
    sleep 100;
});

Script N(script_80243170) = SCRIPT({
    bind N(script_ExitWalk_80243000) to 0x80000 4;
    bind N(script_ExitWalk_8024305C) to 0x80000 19;
    bind N(script_ExitWalk_802430B8) to 0x80000 14;
    bind N(script_ExitWalk_80243114) to 0x80000 9;
});

Script N(script_802431F0) = SCRIPT({
    loop 6 {
        SI_VAR(0) = 2;
        TranslateModel(31, SI_VAR(0), 0, SI_VAR(0));
        TranslateModel(32, SI_VAR(0), 0, SI_VAR(0));
        sleep 1;
        SI_VAR(0) = 0xFFFFFFFE;
        TranslateModel(31, SI_VAR(0), 0, SI_VAR(0));
        TranslateModel(32, SI_VAR(0), 0, SI_VAR(0));
        sleep 1;
    }
    SI_VAR(0) = 0;
    TranslateModel(31, SI_VAR(0), 0, SI_VAR(0));
    TranslateModel(32, SI_VAR(0), 0, SI_VAR(0));
    sleep 1;
    SI_MAP_VAR(0) = 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70007);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_802441E0);
    MakeNpcs(1, N(npcGroupList_80245258));
    await N(script_MakeEntities);
    SI_VAR(0) = N(script_80243170);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80242FC0);
    bind N(script_802431F0) to TriggerFlag_WALL_HAMMER 25;
    func_80240000_BAD940();
    spawn {
    0:
        WaitForCam(0, 1.0);
        func_80240068_BAD9A8();
        if (SI_VAR(0) < 350) {
            SetCamSpeed(0, 1.0);
        } else {
            SetCamSpeed(0, 3.0);
        }
        goto 0;
    }
});

s32 pad_0034EC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA5AC, 0, 93, 0, 45, 231, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(925));
});

s32 pad_003538[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243540) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(11, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 0;
        }
        == 1 {
            SetZoneEnabled(11, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 1);
            SI_VAR(1) = 1;
        }
        == 2 {
            SetZoneEnabled(11, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(2, 1);
            SetZoneEnabled(3, 1);
            SetZoneEnabled(4, 1);
            SetZoneEnabled(5, 1);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 2;
        }
    }
});

Script N(script_802437D4) = SCRIPT({
    ParentColliderToModel(31, 113);
    RotateGroup(115, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(31);
    ParentColliderToModel(35, 119);
    RotateGroup(121, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(35);
    ParentColliderToModel(33, 116);
    RotateGroup(118, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(33);
    ParentColliderToModel(37, 122);
    RotateGroup(124, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(37);
});

Script N(script_802438F4) = SCRIPT({
    RotateGroup(115, 0, 0, 1, 0);
    UpdateColliderTransform(31);
    RotateGroup(121, 0, 0, 1, 0);
    UpdateColliderTransform(35);
    RotateGroup(118, 0, 0, 1, 0);
    UpdateColliderTransform(33);
    RotateGroup(124, 0, 0, 1, 0);
    UpdateColliderTransform(37);
});

Script N(script_802439C4) = SCRIPT({
    spawn {
        PlaySoundAtCollider(SI_VAR(9), 468, 0);
        sleep 19;
        PlaySoundAtCollider(SI_VAR(9), 469, 0);
    }
    match SI_AREA_VAR(1) {
        == 0 {
            spawn {
                MakeLerp(10, 90, 10, 1);
            10:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 10;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_80243540);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_802438F4);
            SI_AREA_VAR(1) = 1;
            SI_SAVE_FLAG(924) = 1;
        }
        == 1 {
            spawn {
                MakeLerp(360, 270, 10, 1);
            30:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 30;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) -= SI_VAR(7);
                SI_VAR(2) -= SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 2;
            spawn N(script_80243540);
            MakeLerp(270, 0xFFFFFFF6, 30, 0);
        40:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 40;
            }
            SI_AREA_VAR(1) = 2;
        }
        == 2 {
            spawn {
                MakeLerp(0xFFFFFFF6, 90, 10, 1);
            50:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 50;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_80243540);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_802438F4);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_80243FF0) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 31;
    SI_VAR(10) = 115;
    await N(script_802439C4);
    DisablePlayerInput(0);
});

Script N(script_8024406C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 35;
    SI_VAR(10) = 121;
    await N(script_802439C4);
    DisablePlayerInput(0);
});

Script N(script_802440E8) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 33;
    SI_VAR(10) = 118;
    await N(script_802439C4);
    DisablePlayerInput(0);
});

Script N(script_80244164) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 37;
    SI_VAR(10) = 124;
    await N(script_802439C4);
    DisablePlayerInput(0);
});

Script N(script_802441E0) = SCRIPT({
    if (SI_SAVE_FLAG(924) == 0) {
        SI_SAVE_FLAG(924) = 1;
        SI_AREA_VAR(1) = 2;
        SI_VAR(1) = 2;
        SI_VAR(2) = 0xFFFFFFF6;
    } else {
        SI_SAVE_FLAG(924) = 0;
        SI_AREA_VAR(1) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 10;
    }
    await N(script_80243540);
    spawn N(script_802437D4);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_80243FF0) to TriggerFlag_WALL_INTERACT 31;
    bind N(script_8024406C) to TriggerFlag_WALL_INTERACT 35;
    bind N(script_80244164) to TriggerFlag_WALL_INTERACT 37;
    bind N(script_802440E8) to TriggerFlag_WALL_INTERACT 33;
});

s32 pad_0043B8[] = {
    0x00000000, 0x00000000,
};

f32 N(floatTable_802443C0)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_802443D8) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0x5,
    .alertRadius = 80.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 90.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244408) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD8A);
    SetSelfVar(6, 50);
    SetSelfVar(1, 200);
    func_802413AC_BAECEC(N(aISettings_802443D8));
});

NpcSettings N(npcSettings_80244478) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244408),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

Script N(script_802444A4) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            func_80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80244560) = {
    .moveSpeed = 0.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80244590) = SCRIPT({
    SetSelfVar(7, 0);
    SetSelfVar(8, 12);
    SetSelfVar(9, 11);
    SetSelfVar(10, 14);
    SetSelfVar(11, 9);
    SetSelfVar(12, 25);
    SetSelfVar(13, -1);
    SetSelfVar(14, 10);
    SetSelfVar(15, 15);
    func_80242CEC_BB062C(N(aISettings_80244560));
});

NpcSettings N(npcSettings_80244664) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x1A,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244590),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244690) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 10);
    SetSelfVar(1, 18);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_80241954_BAF294();
});

Script N(script_80244710) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await func_800936DC;
        }
    }
});

NpcSettings N(npcSettings_8024479C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x12,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244690),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802444A4),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0x8,
};

Script N(script_Idle_802447C8) = SCRIPT({
100:
    sleep 1;
    if (SI_MAP_VAR(0) == 0) {
        goto 100;
    }
    SetNpcPos(-1, 0xFFFFFEE8, 108, 0);
    SetNpcJumpscale(-1, 0.0);
    NpcJump1(-1, 0xFFFFFEE8, 50, 10, 5);
    sleep 50;
    BindNpcAI(-1, N(script_NpcAI_80244408));
});

Script N(script_Init_80244884) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802447C8));
});

StaticNpc N(npcGroup_802448A8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244478),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00202D00,
        .init = N(script_Init_80244884),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFED4, 0x0000003C, 0x00000000, 0x0000003C, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFED4, 0x0000003C, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004B0002, 0x004B0002, 0x004B0003, 0x004B0003, 0x004B0001, 0x004B0002, 0x004B0006, 0x004B0006, 0x004B0004, 0x004B0002, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001,
        },
    },
};

StaticNpc N(npcGroup_80244A98)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80244664),
        .pos = { -240.0, 0.0, -240.0 },
        .flags = 0x00002D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024479C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
};

StaticNpc N(npcGroup_80244E78)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244664),
        .pos = { 240.0, 0.0, 240.0 },
        .flags = 0x00002D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_8024479C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
};

NpcGroupList N(npcGroupList_80245258) = {
    NPC_GROUP(N(npcGroup_802448A8), 0x0D100001),
    NPC_GROUP(N(npcGroup_80244A98), 0x0D0F0001),
    NPC_GROUP(N(npcGroup_80244E78), 0x0D090001),
    {},
};

s32 pad_005288[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80245290_BB2BD0

// rodata: D_80245298_BB2BD8

// rodata: D_802452A0_BB2BE0

// rodata: D_802452A8_BB2BE8

// rodata: D_802452B0_BB2BF0

// rodata: jtbl_802452B8_BB2BF8

s32 pad_0052F4[] = {
    0x00000000,
};

// rodata: D_802452F8_BB2C38

// rodata: jtbl_80245300_BB2C40

// rodata: D_80245490_BB2DD0

// rodata: D_80245498_BB2DD8

// rodata: D_802454A0_BB2DE0

// rodata: D_802454A8_BB2DE8

// rodata: D_802454B0_BB2DF0

// rodata: D_802454B8_BB2DF8
