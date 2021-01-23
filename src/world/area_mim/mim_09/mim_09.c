#include "mim_09.h"

s32 pad_000EB4[3];
Script N(script_80240F40);
s32 pad_000F7C[1];
Script N(script_ExitWalk_80240F80);
Script N(script_ExitWalk_80240FDC);
Script N(script_ExitWalk_80241038);
Script N(script_ExitWalk_80241094);
Script N(script_802410F0);
Script N(main);
s32 pad_00132C[1];
Script N(script_MakeEntities);
s32 pad_001378[2];
Script N(script_80241380);
Script N(script_802417FC);
Script N(script_802419A0);
s32 pad_001A2C[1];
Script N(script_80241A30);
Script N(script_80241CC4);
Script N(script_80241DE4);
Script N(script_80241EB4);
Script N(script_802424E0);
Script N(script_8024255C);
Script N(script_802425D8);
Script N(script_80242654);
Script N(script_802426D0);
s32 unk_missing_802428A8[13];
Script N(script_NpcAI_8024290C);
StaticNpc N(npcGroup_80242974)[1];
NpcGroupList N(npcGroupList_80242B64);
s32 pad_002B7C[1];
const char D_80242B80_BB5980[8]; // "mim_01"
const char D_80242B88_BB5988[8]; // "mim_07"
s32 pad_002BD4[3];

// text: func_80240000_BB2E00

// text: func_80240068_BB2E68

// text: func_802400A0_BB2EA0

// text: func_802402D0_BB30D0

// text: N(UnkNpcAIFunc1)

// text: func_802406C8_BB34C8

// text: func_8024086C_BB366C

// text: func_8024094C_BB374C

// text: N(UnkDurationCheck)

// text: func_80240C90_BB3A90

s32 pad_000EB4[] = {
    0x00000000, 0x00000000, 0x00000000,
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
    .tattle = 0x1900AF,
};

Script N(script_80240F40) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_000F7C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240F80) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242B80_BB5980, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240FDC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242B80_BB5980, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241038) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80242B88_BB5988, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241094) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80242B80_BB5980, 1);
    sleep 100;
});

Script N(script_802410F0) = SCRIPT({
    bind N(script_ExitWalk_80240F80) to 0x80000 7;
    bind N(script_ExitWalk_80240FDC) to 0x80000 22;
    bind N(script_ExitWalk_80241038) to 0x80000 17;
    bind N(script_ExitWalk_80241094) to 0x80000 12;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70008);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_802426D0);
    MakeNpcs(1, N(npcGroupList_80242B64));
    await N(script_MakeEntities);
    SI_VAR(0) = N(script_802410F0);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80240F40);
    await N(script_802419A0);
    func_80240000_BB2E00();
    spawn {
    0:
        WaitForCam(0, 1.0);
        func_80240068_BB2E68();
        if (SI_VAR(0) < 350) {
            SetCamSpeed(0, 1.0);
        } else {
            SetCamSpeed(0, 3.0);
        }
        goto 0;
    }
});

s32 pad_00132C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA5AC, 0, 92, 0, 45, 248, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(926));
});

s32 pad_001378[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241380) = SCRIPT({
    SetTexPanOffset(0, 0, 0, 0xFFFF8000);
    sleep 2;
    SetTexPanOffset(0, 0, 0, 0xFFFF0000);
    sleep 2;
    PlaySoundAt(8283, 0, 0xFFFFFFE9, 0, 300);
    MakeLerp(0, 30, 50, 10);
10:
    UpdateLerp();
    RotateModel(59, SI_VAR(0), 0, 0, 1);
    RotateModel(60, SI_VAR(0), 0, 0, 1);
    RotateModel(62, SI_VAR(0), 0, 0, 1);
    RotateModel(63, SI_VAR(0), 0, 0, 1);
    RotateModel(65, SI_VAR(0), 0, 0, 1);
    RotateModel(66, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAt(8283, 0, 0xFFFFFFE9, 0, 300);
    MakeLerp(30, 0xFFFFFFE2, 50, 10);
20:
    UpdateLerp();
    RotateModel(59, SI_VAR(0), 0, 0, 1);
    RotateModel(60, SI_VAR(0), 0, 0, 1);
    RotateModel(62, SI_VAR(0), 0, 0, 1);
    RotateModel(63, SI_VAR(0), 0, 0, 1);
    RotateModel(65, SI_VAR(0), 0, 0, 1);
    RotateModel(66, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    PlaySoundAt(8283, 0, 0xFFFFFFE9, 0, 300);
    MakeLerp(0xFFFFFFE2, 0, 50, 10);
30:
    UpdateLerp();
    RotateModel(59, SI_VAR(0), 0, 0, 1);
    RotateModel(60, SI_VAR(0), 0, 0, 1);
    RotateModel(62, SI_VAR(0), 0, 0, 1);
    RotateModel(63, SI_VAR(0), 0, 0, 1);
    RotateModel(65, SI_VAR(0), 0, 0, 1);
    RotateModel(66, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 30;
    }
    SetTexPanOffset(0, 0, 0, 0xFFFF8000);
    sleep 2;
    SetTexPanOffset(0, 0, 0, 0);
    sleep 20;
});

Script N(script_802417FC) = SCRIPT({
    if (SI_MAP_VAR(0) == 0) {
        SI_MAP_VAR(0) = 1;
        SetGroupEnabled(68, 1);
        PlaySound(8285);
        MakeLerp(10, 100, 30, 0);
    0:
        UpdateLerp();
        SI_VAR(0) *= 0.0107421875;
        ScaleModel(59, SI_VAR(0), SI_VAR(0), SI_VAR(0));
        ScaleModel(60, SI_VAR(0), SI_VAR(0), SI_VAR(0));
        ScaleModel(62, SI_VAR(0), SI_VAR(0), SI_VAR(0));
        ScaleModel(63, SI_VAR(0), SI_VAR(0), SI_VAR(0));
        ScaleModel(65, SI_VAR(0), SI_VAR(0), SI_VAR(0));
        ScaleModel(66, SI_VAR(0), SI_VAR(0), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 0;
        }
        sleep 10;
        await N(script_80241380);
    } else {
        await N(script_80241380);
    }
});

Script N(script_802419A0) = SCRIPT({
    SI_MAP_VAR(0) = 0;
    SetGroupEnabled(68, 0);
    SetTexPanner(60, 0);
    SetTexPanner(63, 0);
    SetTexPanner(66, 0);
    bind N(script_802417FC) to TriggerFlag_WALL_INTERACT 27;
});

s32 pad_001A2C[] = {
    0x00000000,
};

Script N(script_80241A30) = SCRIPT({
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

Script N(script_80241CC4) = SCRIPT({
    ParentColliderToModel(32, 120);
    RotateGroup(122, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(32);
    ParentColliderToModel(36, 126);
    RotateGroup(128, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(36);
    ParentColliderToModel(34, 123);
    RotateGroup(125, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(34);
    ParentColliderToModel(38, 129);
    RotateGroup(131, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(38);
});

Script N(script_80241DE4) = SCRIPT({
    RotateGroup(122, 0, 0, 1, 0);
    UpdateColliderTransform(32);
    RotateGroup(128, 0, 0, 1, 0);
    UpdateColliderTransform(36);
    RotateGroup(125, 0, 0, 1, 0);
    UpdateColliderTransform(34);
    RotateGroup(131, 0, 0, 1, 0);
    UpdateColliderTransform(38);
});

Script N(script_80241EB4) = SCRIPT({
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
            spawn N(script_80241A30);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_80241DE4);
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
            spawn N(script_80241A30);
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
            spawn N(script_80241A30);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_80241DE4);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_802424E0) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 32;
    SI_VAR(10) = 122;
    await N(script_80241EB4);
    DisablePlayerInput(0);
});

Script N(script_8024255C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 36;
    SI_VAR(10) = 128;
    await N(script_80241EB4);
    DisablePlayerInput(0);
});

Script N(script_802425D8) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 34;
    SI_VAR(10) = 125;
    await N(script_80241EB4);
    DisablePlayerInput(0);
});

Script N(script_80242654) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 38;
    SI_VAR(10) = 131;
    await N(script_80241EB4);
    DisablePlayerInput(0);
});

Script N(script_802426D0) = SCRIPT({
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
    await N(script_80241A30);
    spawn N(script_80241CC4);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_802424E0) to TriggerFlag_WALL_INTERACT 32;
    bind N(script_8024255C) to TriggerFlag_WALL_INTERACT 36;
    bind N(script_80242654) to TriggerFlag_WALL_INTERACT 38;
    bind N(script_802425D8) to TriggerFlag_WALL_INTERACT 34;
});

s32 unk_missing_802428A8[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00200018, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

NpcAISettings N(aISettings_802428DC) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0xA,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0x5,
    .chaseRadius = 160.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024290C) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240C90_BB3A90(N(aISettings_802428DC), 1);
});

NpcSettings N(npcSettings_80242948) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024290C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80242974)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242948),
        .pos = { 270.0, 0.0, 200.0 },
        .flags = 0x00000400,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_THUNDER_BOLT, 10 } },
        .movement = { 0x0000010E, 0x00000000, 0x000000C8, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0102, 0x002B0102, 0x002B0103, 0x002B0103, 0x002B0101, 0x002B0101, 0x002B0108, 0x002B0108, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103,
        },
    },
};

NpcGroupList N(npcGroupList_80242B64) = {
    NPC_GROUP(N(npcGroup_80242974), 0x0D050001),
    {},
};

s32 pad_002B7C[] = {
    0x00000000,
};

// rodata: D_80242B80_BB5980

// rodata: D_80242B88_BB5988

// rodata: D_80242B90_BB5990

// rodata: jtbl_80242B98_BB5998

s32 pad_002BD4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
