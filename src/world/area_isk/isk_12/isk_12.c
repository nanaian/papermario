#include "isk_12.h"

Script N(script_ExitWalk_80240080);
Script N(script_ExitWalk_802400DC);
Script N(script_ExitWalk_80240138);
Script N(script_ExitWalk_80240194);
Script N(script_802401F0);
Script N(main);
s32 pad_00042C[1];
Script N(script_80240430);
Script N(script_MakeEntities);
s32 pad_000668[2];
Script N(script_80240670);
Script N(script_8024075C);
Script N(script_8024082C);
Script N(script_80240884);
Script N(script_80240938);
Script N(script_80240AA0);
Script N(script_80240CF4);
Script N(script_80240D84);
Script N(script_80240E64);
Script N(script_8024100C);
Script N(script_802410D8);
Script N(script_80241168);
Script N(script_80241498);
s32 pad_0016F4[3];
Script N(script_80241700);
Script N(script_80241924);
Script N(script_80241E74);
s32 pad_002174[3];
const char D_80242180_98F7C0[8]; // "isk_11"
const char D_80242188_98F7C8[8]; // "isk_18"
const char D_80242190_98F7D0[8]; // "isk_13"
s32 pad_002198[2];

EntryList N(entryList) = {
    { 434.0f, -470.0f, 338.0f, 29.0f },
    { 472.0f, -660.0f, 370.0f, 29.0f },
    { 512.0f, -840.0f, 273.0f, 27.0f },
    { 580.0f, -710.0f, 20.0f, 191.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900A0,
};

Script N(script_ExitWalk_80240080) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242180_98F7C0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802400DC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80242180_98F7C0, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240138) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80242188_98F7C8, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240194) = SCRIPT({
    group 27;
    UseExitHeading(40, 3);
    spawn ExitWalk;
    GotoMap(D_80242190_98F7D0, 0);
    sleep 100;
});

Script N(script_802401F0) = SCRIPT({
    bind N(script_ExitWalk_80240080) to 0x80000 0;
    bind N(script_ExitWalk_802400DC) to 0x80000 4;
    bind N(script_ExitWalk_80240138) to 0x80000 12;
    bind N(script_ExitWalk_80240194) to 0x80000 8;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20009);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    if (SI_SAVE_VAR(0) < 0xFFFFFFC6) {
        SetZoneEnabled(38, 0);
    } else {
        SetZoneEnabled(38, 0);
        SetZoneEnabled(36, 0);
    }
    await N(script_MakeEntities);
    spawn N(script_80241498);
    spawn N(script_80241E74);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
    SI_VAR(0) = N(script_802401F0);
    spawn EnterWalk;
});

s32 pad_00042C[] = {
    0x00000000,
};

Script N(script_80240430) = SCRIPT({
    SI_SAVE_FLAG(897) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(897) == 0) {
        MakeEntity(0x802EA19C, 627, 0xFFFFFCB8, 135, 75, 0x80000000);
        AssignScript(N(script_80240430));
    }
    PlayEffect(32, 1, 415, 0xFFFFFE3B, 291, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 505, 0xFFFFFE3B, 44, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 415, 0xFFFFFD7D, 291, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 505, 0xFFFFFD7D, 44, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 417, 0xFFFFFD7D, 196, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 444, 0xFFFFFD7D, 120, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    MakeItemEntity(17, 461, 0xFFFFFD08, 109, 0, SI_SAVE_FLAG(887));
});

s32 pad_000668[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240670) = SCRIPT({
    SetTexPanner(91, 4);
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
10:
    SI_VAR(1) += 0xFFFFFC18;
    SI_VAR(2) += 200;
    SetTexPanOffset(4, 0, 0, SI_VAR(1));
    SetTexPanOffset(4, 1, SI_VAR(2), 0);
    sleep 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFC6) {
        goto 10;
    }
    EnableModel(91, 0);
});

Script N(script_8024075C) = SCRIPT({
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 500, 0xFFFFFE1B, 178);
    SetCamDistance(0, 400);
    SetCamPosA(0, 50, 0xFFFFFF36);
    SetCamPosB(0, 566, 0);
    SetCamPitch(0, 13.6005859375, -1.5);
    SetPanTarget(0, 525, 0xFFFFFE1B, 152);
    PanToTarget(0, 0, 1);
});

Script N(script_8024082C) = SCRIPT({
    SetCamSpeed(0, 0.5);
    SetCamPitch(0, 3.400390625, -3.0);
    SetPanTarget(0, 525, 0xFFFFFD30, 152);
});

Script N(script_80240884) = SCRIPT({
    SetCamSpeed(0, 90.0);
    UseSettingsFrom(0, 525, 0xFFFFFE1B, 152);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    PanToTarget(0, 0, 0);
});

Script N(script_80240938) = SCRIPT({
    SetTexPanner(98, 0);
    SetTexPanner(99, 0);
    SetTexPanner(100, 0);
    SetTexPanner(101, 0);
    SI_VAR(2) = 0;
    MakeLerp(0, 500, 60, 1);
10:
    UpdateLerp();
    SI_VAR(2) += SI_VAR(0);
    SetTexPanOffset(0, 0, 0, SI_VAR(2));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
20:
    SI_VAR(2) += 500;
    SetTexPanOffset(0, 0, 0, SI_VAR(2));
    sleep 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFC6) {
        goto 20;
    }
});

Script N(script_80240AA0) = SCRIPT({
    SetTexPanner(109, 1);
    SetTexPanner(111, 2);
    SetTexPanner(104, 3);
    SetTexPanner(105, 3);
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    SI_VAR(4) = 0;
10:
    SI_VAR(2) += 6144;
    SI_VAR(3) += 0xFFFFFE0C;
    SI_VAR(4) += 0xFFFFFF9C;
    SetTexPanOffset(1, 0, 0, SI_VAR(2));
    SetTexPanOffset(2, 0, 0, SI_VAR(3));
    SetTexPanOffset(3, 0, 0, SI_VAR(4));
    sleep 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFC6) {
        goto 10;
    }
    SI_VAR(5) = 6144;
    SI_VAR(6) = 0xFFFFFE0C;
    SI_VAR(7) = 0xFFFFFF9C;
    loop 10 {
        SI_VAR(5) += 0xFFFFFE00;
        SI_VAR(6) += 50;
        SI_VAR(7) += 10;
        SI_VAR(2) += SI_VAR(5);
        SI_VAR(3) += SI_VAR(6);
        SI_VAR(4) += SI_VAR(7);
        SetTexPanOffset(1, 0, 0, SI_VAR(2));
        SetTexPanOffset(2, 0, 0, SI_VAR(3));
        SetTexPanOffset(3, 0, 0, SI_VAR(4));
        sleep 1;
    }
});

Script N(script_80240CF4) = SCRIPT({
    MakeLerp(0, 100, 60, 1);
10:
    UpdateLerp();
    ScaleModel(99, 1.0, SI_VAR(0), 1.0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240D84) = SCRIPT({
    MakeLerp(0, 50, 10, 4);
10:
    UpdateLerp();
    SI_VAR(0) /= 100;
    SI_VAR(2) = 1;
    SI_VAR(2) +=f SI_VAR(0);
    SI_VAR(3) = 1;
    SI_VAR(3) -=f SI_VAR(0);
    ScaleModel(111, SI_VAR(2), SI_VAR(3), SI_VAR(2));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240E64) = SCRIPT({
    MakeLerp(0, 0xFFFFFF9C, 60, 1);
10:
    UpdateLerp();
    SI_VAR(0) /= 10;
    SI_VAR(2) = 0;
    SI_VAR(2) -=f SI_VAR(0);
    TranslateGroup(103, 0, SI_VAR(0), 0);
    TranslateModel(152, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    MakeLerp(0xFFFFFF9C, 0xFFFFFF06, 30, 0);
20:
    UpdateLerp();
    SI_VAR(0) /= 10;
    SI_VAR(2) = 0;
    SI_VAR(2) -=f SI_VAR(0);
    TranslateGroup(103, 0, SI_VAR(0), 0);
    TranslateModel(152, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
});

Script N(script_8024100C) = SCRIPT({
    0x802C971C(108);
    MakeLerp(0xFFFFFF38, 0, 120, 0);
10:
    UpdateLerp();
    SI_VAR(0) /= 10;
    TranslateGroup(108, 0, SI_VAR(0), 0);
    TranslateModel(111, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_802410D8) = SCRIPT({
    MakeLerp(0, 0xFFFFFF38, 10, 0);
10:
    UpdateLerp();
    TranslateModel(109, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80241168) = SCRIPT({
    sleep 5;
    EnableModel(104, 1);
    EnableModel(105, 1);
    EnableModel(106, 1);
    EnableModel(107, 1);
    EnableModel(111, 1);
    EnableModel(109, 1);
    spawn N(script_8024075C);
    sleep 30;
    spawn N(script_80240938);
    spawn N(script_80240CF4);
    spawn N(script_80240E64);
    PlaySound(83);
    sleep 75;
    spawn N(script_8024082C);
    sleep 30;
    spawn N(script_80240AA0);
    spawn N(script_8024100C);
    PlaySound(1107);
    sleep 120;
    spawn N(script_802410D8);
    sleep 5;
    spawn N(script_80240D84);
    PlaySound(1107);
    sleep 10;
    EnableModel(93, 0);
    EnableModel(94, 0);
    EnableModel(95, 0);
    EnableModel(98, 0);
    EnableModel(99, 0);
    EnableModel(100, 0);
    EnableModel(96, 0);
    EnableModel(101, 0);
    ModifyColliderFlags(0, 50, 0x7FFFFE00);
    ModifyColliderFlags(0, 51, 0x7FFFFE00);
    ModifyColliderFlags(0, 52, 0x7FFFFE00);
    ModifyColliderFlags(0, 53, 0x7FFFFE00);
    ModifyColliderFlags(1, 55, 0x7FFFFE00);
    ModifyColliderFlags(1, 56, 0x7FFFFE00);
    SI_SAVE_VAR(0) = 0xFFFFFFC6;
    SetZoneEnabled(36, 0);
    SetZoneEnabled(38, 1);
    sleep 20;
    spawn N(script_80240884);
    sleep 5;
    EnableModel(111, 0);
    DisablePlayerInput(0);
    unbind;
});

Script N(script_80241498) = SCRIPT({
    SI_AREA_FLAG(3) = 0;
    0x802C971C(103);
    if (SI_SAVE_VAR(0) < 0xFFFFFFC6) {
        bind N(script_80241168) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(3);
        EnableModel(104, 0);
        EnableModel(105, 0);
        EnableModel(106, 0);
        EnableModel(107, 0);
        EnableModel(111, 0);
        EnableModel(109, 0);
        ModifyColliderFlags(0, 55, 0x7FFFFE00);
        ModifyColliderFlags(0, 56, 0x7FFFFE00);
        spawn N(script_80240670);
    } else {
        EnableModel(93, 0);
        EnableModel(94, 0);
        EnableModel(95, 0);
        EnableModel(98, 0);
        EnableModel(99, 0);
        EnableModel(100, 0);
        EnableModel(96, 0);
        EnableModel(101, 0);
        EnableModel(111, 0);
        EnableModel(109, 0);
        EnableModel(91, 0);
        ModifyColliderFlags(0, 50, 0x7FFFFE00);
        ModifyColliderFlags(0, 51, 0x7FFFFE00);
        ModifyColliderFlags(0, 52, 0x7FFFFE00);
        ModifyColliderFlags(0, 53, 0x7FFFFE00);
    }
});

s32 pad_0016F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241700) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
5:
    sleep 1;
    PartnerCanUseAbility(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        goto 5;
    }
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 0xFFFFFE2A) {
        spawn {
            DisablePartnerAI(0);
            SetNpcJumpscale(0xFFFFFFFC, 2.5);
            NpcJump0(0xFFFFFFFC, 529, 0xFFFFFE2A, 82, 10);
            sleep 10;
            EnablePartnerAI();
        }
    }
    PlaySoundAtCollider(60, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(145, 0, SI_VAR(0), 0);
    UpdateColliderTransform(59);
    UpdateColliderTransform(60);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(60, 8331, 0);
    SI_AREA_FLAG(3) = 1;
    unbind;
});

Script N(script_80241924) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(62, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(150, 0, SI_VAR(0), 0);
    UpdateColliderTransform(62);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(62, 8331, 0);
    InterpPlayerYaw(260, 0);
    SI_AREA_FLAG(18) = 1;
    spawn {
        PlaySoundAt(88, 0, 449, 0xFFFFFCCA, 148);
        MakeLerp(0xFFFFFFCE, 0, 60, 1);
    20:
        UpdateLerp();
        TranslateGroup(131, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 20;
        }
        PlaySoundAt(89, 0, 449, 0xFFFFFCCA, 148);
        ShakeCam(0, 0, 3, 0.1005859375);
    }
    sleep 50;
    spawn {
        PlaySoundAt(88, 0, 460, 0xFFFFFCDA, 108);
        MakeLerp(0xFFFFFFCE, 0, 60, 1);
    22:
        UpdateLerp();
        TranslateGroup(134, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 22;
        }
        PlaySoundAt(89, 0, 460, 0xFFFFFCDA, 108);
        ShakeCam(0, 0, 3, 0.1005859375);
    }
    sleep 30;
    spawn {
        PlaySoundAt(88, 0, 432, 0xFFFFFCC7, 189);
        MakeLerp(0xFFFFFFCE, 0, 60, 1);
    24:
        UpdateLerp();
        TranslateGroup(137, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 24;
        }
        PlaySoundAt(89, 0, 432, 0xFFFFFCC7, 189);
        ShakeCam(0, 0, 3, 0.1005859375);
    }
    sleep 30;
    spawn {
        PlaySoundAt(88, 0, 451, 0xFFFFFCD4, 137);
        MakeLerp(0xFFFFFFCE, 0, 50, 1);
    26:
        UpdateLerp();
        TranslateGroup(140, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 26;
        }
        PlaySoundAt(89, 0, 451, 0xFFFFFCD4, 137);
        ShakeCam(0, 0, 10, 0.30078125);
    }
    sleep 50;
    ModifyColliderFlags(1, 48, 0x7FFFFE00);
    sleep 3;
    DisablePlayerInput(0);
    unbind;
});

Script N(script_80241E74) = SCRIPT({
    ParentColliderToModel(59, 145);
    ParentColliderToModel(60, 145);
    ParentColliderToModel(62, 150);
    if (SI_AREA_FLAG(3) == 0) {
        bind N(script_80241700) to TriggerFlag_FLOOR_TOUCH 60;
    } else {
        TranslateModel(145, 0, 0xFFFFFFF2, 0);
        UpdateColliderTransform(59);
        UpdateColliderTransform(60);
    }
    if (SI_AREA_FLAG(18) == 1) {
        TranslateModel(150, 0, 0xFFFFFFF2, 0);
        UpdateColliderTransform(62);
    } else {
        spawn {
            TranslateGroup(131, 0xFFFFFFCC, 0, 0);
            TranslateGroup(134, 0xFFFFFFCC, 0, 0);
            TranslateGroup(137, 0xFFFFFFCC, 0, 0);
            TranslateGroup(140, 0xFFFFFFCC, 0, 0);
            ModifyColliderFlags(0, 48, 0x7FFFFE00);
            if (SI_SAVE_FLAG(897) == 0) {
                TranslateModel(150, 0, 0xFFFFFFF2, 0);
                UpdateColliderTransform(62);
            10:
                if (SI_SAVE_FLAG(897) == 0) {
                    sleep 1;
                    goto 10;
                }
                DisablePlayerInput(1);
                MakeLerp(0xFFFFFFF2, 0, 30, 0);
            20:
                UpdateLerp();
                TranslateModel(150, 0, SI_VAR(0), 0);
                UpdateColliderTransform(62);
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 20;
                }
                sleep 3;
                DisablePlayerInput(0);
            }
            bind N(script_80241924) to TriggerFlag_FLOOR_TOUCH 62;
        }
    }
});

s32 pad_002174[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242180_98F7C0

// rodata: D_80242188_98F7C8

// rodata: D_80242190_98F7D0

s32 pad_002198[] = {
    0x00000000, 0x00000000,
};
