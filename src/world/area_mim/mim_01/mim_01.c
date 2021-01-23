#include "mim_01.h"

s32 pad_000068[2];
s32 pad_0004F8[2];
s32 pad_001EA4[3];
Script N(script_80241F30);
s32 pad_001F6C[1];
Script N(script_ExitWalk_80241F70);
Script N(script_ExitWalk_80241FCC);
Script N(script_ExitWalk_80242028);
Script N(script_ExitWalk_80242084);
Script N(script_802420E0);
Script N(main);
Script N(script_802422B0);
Script N(script_MakeEntities);
s32 pad_002398[2];
Script N(script_802423A0);
Script N(script_80242BDC);
Script N(script_80242C40);
s32 pad_002C98[2];
Script N(script_80242CA0);
Script N(script_80242F34);
Script N(script_80243054);
Script N(script_80243124);
Script N(script_80243170);
Script N(script_8024375C);
Script N(script_802437D8);
Script N(script_80243854);
Script N(script_802438D0);
Script N(script_80243CD8);
Script N(script_80243EB0);
Script N(script_NpcAI_80243F9C);
Script N(script_NpcAI_8024409C);
Script N(script_8024411C);
StaticNpc N(npcGroup_802441D4)[2];
NpcGroupList N(npcGroupList_802445B4);
s32 pad_0045CC[1];
const char D_802445D0_B97A10[8]; // "mim_01"
const char D_802445D8_B97A18[8]; // "mim_10"
const char D_802445E0_B97A20[8]; // "mim_02"
s32 pad_0045E8[2];
s32 pad_0047B8[2];

// text: func_80240000_B93440

s32 pad_000068[] = {
    0x00000000, 0x00000000,
};

// text: func_80240070_B934B0

// text: func_802403F0_B93830

s32 pad_0004F8[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240708_B93B48

// text: func_802408BC_B93CFC

// text: func_80240B1C_B93F5C

// text: func_80240DD0_B94210

// text: func_80240E3C_B9427C

// text: func_80240F38_B94378

// text: func_80241978_B94DB8

// text: func_80241A08_B94E48

// text: func_80241B08_B94F48

// text: func_80241B68_B94FA8

// text: func_80241C54_B95094

s32 pad_001EA4[] = {
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
    .tattle = 0x1900A7,
};

Script N(script_80241F30) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_001F6C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241F70) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802445D0_B97A10, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241FCC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802445D8_B97A18, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242028) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802445D0_B97A10, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242084) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802445E0_B97A20, 1);
    sleep 100;
});

Script N(script_802420E0) = SCRIPT({
    bind N(script_ExitWalk_80241F70) to 0x80000 1;
    bind N(script_ExitWalk_80241FCC) to 0x80000 16;
    bind N(script_ExitWalk_80242028) to 0x80000 11;
    bind N(script_ExitWalk_80242084) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70000);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_SAVE_FLAG(1975) = 1;
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_80243CD8);
    MakeNpcs(1, N(npcGroupList_802445B4));
    await N(script_MakeEntities);
    await N(script_80242C40);
    SI_VAR(0) = N(script_802420E0);
    spawn EnterWalk;
    sleep 1;
    func_80240000_B93440();
    spawn N(script_80241F30);
    SetCamSpeed(0, 3.0);
});

Script N(script_802422B0) = SCRIPT({
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D017E, 160, 40);
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAFDC, 0xFFFFFED4, 0, 0, 270, 0x80000000);
    AssignScript(N(script_802422B0));
});

s32 pad_002398[] = {
    0x00000000, 0x00000000,
};

Script N(script_802423A0) = SCRIPT({
    PlaySoundAt(223, 0, 301, 0, 0xFFFFFFE5);
    loop 6 {
        SI_VAR(0) = 2;
        TranslateModel(61, 0, 0, SI_VAR(0));
        TranslateModel(62, 0, 0, SI_VAR(0));
        TranslateModel(64, 0, 0, SI_VAR(0));
        TranslateModel(65, 0, 0, SI_VAR(0));
        TranslateModel(67, 0, 0, SI_VAR(0));
        TranslateModel(68, 0, 0, SI_VAR(0));
        TranslateModel(59, 0, 0, SI_VAR(0));
        sleep 1;
        SI_VAR(0) = 0xFFFFFFFE;
        TranslateModel(61, 0, 0, SI_VAR(0));
        TranslateModel(62, 0, 0, SI_VAR(0));
        TranslateModel(64, 0, 0, SI_VAR(0));
        TranslateModel(65, 0, 0, SI_VAR(0));
        TranslateModel(67, 0, 0, SI_VAR(0));
        TranslateModel(68, 0, 0, SI_VAR(0));
        TranslateModel(59, 0, 0, SI_VAR(0));
        sleep 1;
    }
    TranslateModel(61, 0, 0, 0);
    TranslateModel(62, 0, 0, 0);
    TranslateModel(64, 0, 0, 0);
    TranslateModel(65, 0, 0, 0);
    TranslateModel(67, 0, 0, 0);
    TranslateModel(68, 0, 0, 0);
    TranslateModel(59, 0, 0, 0);
    sleep 20;
    SetTexPanOffset(1, 0, 0, 0xFFFF8000);
    sleep 2;
    SetTexPanOffset(1, 0, 0, 0xFFFF0000);
    sleep 2;
    PlaySoundAt(8283, 0, 301, 0, 0xFFFFFFE5);
    MakeLerp(0, 30, 50, 10);
10:
    UpdateLerp();
    func_802403F0_B93830(61, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(61, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(62, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    func_802403F0_B93830(64, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(64, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(65, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    func_802403F0_B93830(67, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(67, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(68, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAt(8283, 0, 301, 0, 0xFFFFFFE5);
    MakeLerp(30, 0xFFFFFFE2, 50, 10);
20:
    UpdateLerp();
    func_802403F0_B93830(61, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(61, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(62, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    func_802403F0_B93830(64, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(64, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(65, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    func_802403F0_B93830(67, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(67, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(68, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    PlaySoundAt(8283, 0, 301, 0, 0xFFFFFFE5);
    MakeLerp(0xFFFFFFE2, 0, 50, 10);
30:
    UpdateLerp();
    func_802403F0_B93830(61, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(61, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(62, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    func_802403F0_B93830(64, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(64, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(65, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    func_802403F0_B93830(67, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(67, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    RotateModel(68, SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 30;
    }
    SetTexPanOffset(1, 0, 0, 0xFFFF8000);
    sleep 2;
    SetTexPanOffset(1, 0, 0, 0);
    sleep 30;
});

Script N(script_80242BDC) = SCRIPT({
0:
    AwaitPlayerApproach(350, 0, 50);
    await N(script_802423A0);
    AwaitPlayerLeave(350, 0, 50);
    goto 0;
});

Script N(script_80242C40) = SCRIPT({
    SetTexPanner(62, 1);
    SetTexPanner(65, 1);
    SetTexPanner(68, 1);
    spawn N(script_80242BDC);
});

s32 pad_002C98[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242CA0) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(7, 1);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 0;
        }
        == 1 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 1);
            SI_VAR(1) = 1;
        }
        == 2 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 1);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 1);
            SetZoneEnabled(5, 1);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 2;
        }
    }
});

Script N(script_80242F34) = SCRIPT({
    ParentColliderToModel(26, 153);
    RotateGroup(155, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(26);
    ParentColliderToModel(30, 159);
    RotateGroup(161, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(30);
    ParentColliderToModel(28, 156);
    RotateGroup(158, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(28);
    ParentColliderToModel(32, 162);
    RotateGroup(164, 10, 0, 1, 0);
    UpdateColliderTransform(32);
});

Script N(script_80243054) = SCRIPT({
    RotateGroup(155, 0, 0, 1, 0);
    UpdateColliderTransform(26);
    RotateGroup(161, 0, 0, 1, 0);
    UpdateColliderTransform(30);
    RotateGroup(158, 0, 0, 1, 0);
    UpdateColliderTransform(28);
    RotateGroup(164, 0, 0, 1, 0);
    UpdateColliderTransform(32);
});

Script N(script_80243124) = SCRIPT({
    PlaySoundAtCollider(SI_VAR(9), 468, 0);
    sleep 19;
    PlaySoundAtCollider(SI_VAR(9), 469, 0);
});

Script N(script_80243170) = SCRIPT({
    spawn N(script_80243124);
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
            spawn N(script_80242CA0);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_80243054);
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
            spawn N(script_80242CA0);
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
            spawn N(script_80242CA0);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_80243054);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_8024375C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 26;
    SI_VAR(10) = 155;
    await N(script_80243170);
    DisablePlayerInput(0);
});

Script N(script_802437D8) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 30;
    SI_VAR(10) = 161;
    await N(script_80243170);
    DisablePlayerInput(0);
});

Script N(script_80243854) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 28;
    SI_VAR(10) = 158;
    await N(script_80243170);
    DisablePlayerInput(0);
});

Script N(script_802438D0) = SCRIPT({
    SI_VAR(9) = 32;
    spawn N(script_80243124);
    DisablePlayerInput(1);
    if (SI_AREA_VAR(1) != 1) {
        spawn {
            MakeLerp(10, 90, 10, 1);
        10:
            UpdateLerp();
            RotateGroup(164, SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(32);
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 10;
            }
        }
        sleep 15;
        spawn {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 70;
            PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
        }
        SI_VAR(1) = 1;
        spawn N(script_80242CA0);
        MakeLerp(90, 360, 30, 0);
    20:
        UpdateLerp();
        RotateGroup(164, SI_VAR(0), 0, 1, 0);
        UpdateColliderTransform(32);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 20;
        }
        spawn N(script_80243054);
        SI_AREA_VAR(1) = 1;
        SI_SAVE_FLAG(924) = 1;
    } else {
        spawn {
            MakeLerp(360, 270, 10, 1);
        30:
            UpdateLerp();
            RotateGroup(164, SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(32);
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 30;
            }
        }
        sleep 15;
        spawn {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) -= 70;
            PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
        }
        SI_VAR(1) = 2;
        spawn N(script_80242CA0);
        MakeLerp(270, 10, 30, 0);
    40:
        UpdateLerp();
        RotateGroup(164, SI_VAR(0), 0, 1, 0);
        UpdateColliderTransform(32);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 40;
        }
        SI_AREA_VAR(1) = 0;
    }
    DisablePlayerInput(0);
});

Script N(script_80243CD8) = SCRIPT({
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
    await N(script_80242CA0);
    spawn N(script_80242F34);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_8024375C) to TriggerFlag_WALL_INTERACT 26;
    bind N(script_802437D8) to TriggerFlag_WALL_INTERACT 30;
    bind N(script_802438D0) to TriggerFlag_WALL_INTERACT 32;
    bind N(script_80243854) to TriggerFlag_WALL_INTERACT 28;
});

Script N(script_80243EB0) = SCRIPT({
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

NpcAISettings N(aISettings_80243F6C) = {
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

Script N(script_NpcAI_80243F9C) = SCRIPT({
    SetSelfVar(7, 0);
    SetSelfVar(8, 12);
    SetSelfVar(9, 11);
    SetSelfVar(10, 14);
    SetSelfVar(11, 9);
    SetSelfVar(12, 25);
    SetSelfVar(13, -1);
    SetSelfVar(14, 10);
    SetSelfVar(15, 15);
    func_80241C54_B95094(N(aISettings_80243F6C));
});

NpcSettings N(npcSettings_80244070) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x1A,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243F9C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

Script N(script_NpcAI_8024409C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 10);
    SetSelfVar(1, 18);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_802408BC_B93CFC();
});

Script N(script_8024411C) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

NpcSettings N(npcSettings_802441A8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x12,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024409C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80243EB0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_802441D4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80244070),
        .pos = { 135.0, 0.0, -300.0 },
        .flags = 0x00000400,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000087, 0x00000000, 0xFFFFFED4, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802441A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
};

NpcGroupList N(npcGroupList_802445B4) = {
    NPC_GROUP(N(npcGroup_802441D4), 0x0D090001),
    {},
};

s32 pad_0045CC[] = {
    0x00000000,
};

// rodata: D_802445D0_B97A10

// rodata: D_802445D8_B97A18

// rodata: D_802445E0_B97A20

s32 pad_0045E8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802445F0_B97A30

// rodata: jtbl_802445F8_B97A38

// rodata: D_80244788_B97BC8

// rodata: D_80244790_B97BD0

// rodata: D_80244798_B97BD8

// rodata: D_802447A0_B97BE0

// rodata: D_802447A8_B97BE8

// rodata: D_802447B0_B97BF0

s32 pad_0047B8[] = {
    0x00000000, 0x00000000,
};
