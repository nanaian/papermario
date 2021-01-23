#include "isk_03.h"

Script N(script_ExitWalk_80240070);
Script N(script_ExitWalk_802400CC);
Script N(script_ExitWalk_80240128);
Script N(script_80240184);
Script N(main);
s32 pad_0003B8[2];
Script N(script_802403C0);
Script N(script_802404AC);
Script N(script_8024057C);
Script N(script_802405D4);
Script N(script_80240688);
Script N(script_802407DC);
Script N(script_80240A44);
Script N(script_80240AD4);
Script N(script_80240BB4);
Script N(script_80240D5C);
Script N(script_80240E28);
Script N(script_80240EB8);
Script N(script_802411A0);
Script N(script_80241430);
s32 pad_0014EC[1];
Script N(script_802414F0);
Script N(script_802415A0);
s32 pad_0017C4[3];
const char D_802417D0_97B620[8]; // "isk_02"
const char D_802417D8_97B628[8]; // "isk_04"

EntryList N(entryList) = {
    { 369.0f, 50.0f, 408.0f, 59.0f },
    { 401.0f, -140.0f, 447.0f, 59.0f },
    { 557.0f, -155.0f, 224.0f, 209.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190097,
};

Script N(script_ExitWalk_80240070) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_802417D0_97B620, 1);
    sleep 100;
});

Script N(script_ExitWalk_802400CC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_802417D0_97B620, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240128) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_802417D8_97B628, 0);
    sleep 100;
});

Script N(script_80240184) = SCRIPT({
    bind N(script_ExitWalk_80240070) to 0x80000 8;
    bind N(script_ExitWalk_802400CC) to 0x80000 0;
    bind N(script_ExitWalk_80240128) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFC3) {
        SetZoneEnabled(32, 0);
        SetZoneEnabled(42, 0);
    } else {
        SetZoneEnabled(32, 0);
        SetZoneEnabled(20, 0);
    }
    await N(script_80241430);
    spawn N(script_802411A0);
    spawn N(script_802414F0);
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
    SI_VAR(0) = N(script_80240184);
    spawn EnterWalk;
});

s32 pad_0003B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802403C0) = SCRIPT({
    SetTexPanner(49, 4);
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
10:
    SI_VAR(1) += 0xFFFFFC18;
    SI_VAR(2) += 200;
    SetTexPanOffset(4, 0, 0, SI_VAR(1));
    SetTexPanOffset(4, 1, SI_VAR(2), 0);
    sleep 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFC3) {
        goto 10;
    }
    EnableModel(49, 0);
});

Script N(script_802404AC) = SCRIPT({
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 454, 35, 285);
    SetCamDistance(0, 400);
    SetCamPosA(0, 250, 40);
    SetCamPosB(0, 566, 0xFFFFFFCE);
    SetCamPitch(0, 13.6005859375, -1.5);
    SetPanTarget(0, 429, 35, 278);
    PanToTarget(0, 0, 1);
});

Script N(script_8024057C) = SCRIPT({
    SetCamSpeed(0, 0.5);
    SetCamPitch(0, 3.400390625, -5.5);
    SetPanTarget(0, 429, 0xFFFFFF67, 278);
});

Script N(script_802405D4) = SCRIPT({
    SetCamSpeed(0, 90.0);
    UseSettingsFrom(0, 430, 35, 295);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    PanToTarget(0, 0, 0);
});

Script N(script_80240688) = SCRIPT({
    SetTexPanner(55, 0);
    SetTexPanner(56, 0);
    SetTexPanner(57, 0);
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
    if (SI_SAVE_VAR(0) < 0xFFFFFFC3) {
        goto 20;
    }
});

Script N(script_802407DC) = SCRIPT({
    SetTexPanner(68, 1);
    SetTexPanner(70, 2);
    SetTexPanner(61, 3);
    SetTexPanner(62, 3);
    SetTexPanner(63, 3);
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
    if (SI_SAVE_VAR(0) < 0xFFFFFFC3) {
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

Script N(script_80240A44) = SCRIPT({
    MakeLerp(0, 100, 60, 1);
10:
    UpdateLerp();
    ScaleModel(56, 1.0, SI_VAR(0), 1.0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240AD4) = SCRIPT({
    MakeLerp(0, 50, 10, 4);
10:
    UpdateLerp();
    SI_VAR(0) /= 100;
    SI_VAR(2) = 1;
    SI_VAR(2) +=f SI_VAR(0);
    SI_VAR(3) = 1;
    SI_VAR(3) -=f SI_VAR(0);
    ScaleModel(70, SI_VAR(2), SI_VAR(3), SI_VAR(2));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240BB4) = SCRIPT({
    MakeLerp(0, 0xFFFFFF9C, 60, 1);
10:
    UpdateLerp();
    SI_VAR(0) /= 10;
    SI_VAR(2) = 0;
    SI_VAR(2) -=f SI_VAR(0);
    TranslateGroup(60, 0, SI_VAR(0), 0);
    TranslateModel(59, 0, SI_VAR(2), 0);
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
    TranslateGroup(60, 0, SI_VAR(0), 0);
    TranslateModel(59, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
});

Script N(script_80240D5C) = SCRIPT({
    0x802C971C(67);
    MakeLerp(0xFFFFFF38, 0, 120, 0);
10:
    UpdateLerp();
    SI_VAR(0) /= 10;
    TranslateGroup(67, 0, SI_VAR(0), 0);
    TranslateModel(70, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240E28) = SCRIPT({
    MakeLerp(0, 0xFFFFFF38, 10, 0);
10:
    UpdateLerp();
    TranslateModel(68, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240EB8) = SCRIPT({
    sleep 5;
    InterpPlayerYaw(179, 0);
    EnableModel(61, 1);
    EnableModel(62, 1);
    EnableModel(63, 1);
    EnableModel(64, 1);
    EnableModel(65, 1);
    EnableModel(66, 1);
    EnableModel(68, 1);
    EnableModel(70, 1);
    spawn N(script_802404AC);
    sleep 30;
    spawn N(script_80240688);
    spawn N(script_80240A44);
    spawn N(script_80240BB4);
    PlaySound(83);
    sleep 75;
    spawn N(script_8024057C);
    sleep 30;
    spawn N(script_802407DC);
    spawn N(script_80240D5C);
    PlaySound(1107);
    sleep 120;
    spawn N(script_80240E28);
    sleep 5;
    spawn N(script_80240AD4);
    PlaySound(1107);
    sleep 10;
    EnableModel(51, 0);
    EnableModel(52, 0);
    EnableModel(53, 0);
    EnableModel(55, 0);
    EnableModel(56, 0);
    EnableModel(57, 0);
    ModifyColliderFlags(0, 40, 0x7FFFFE00);
    ModifyColliderFlags(0, 41, 0x7FFFFE00);
    ModifyColliderFlags(0, 42, 0x7FFFFE00);
    SI_SAVE_VAR(0) = 0xFFFFFFC3;
    SetZoneEnabled(20, 0);
    SetZoneEnabled(32, 1);
    sleep 20;
    spawn N(script_802405D4);
    sleep 5;
    DisablePlayerInput(0);
    unbind;
});

Script N(script_802411A0) = SCRIPT({
    SI_AREA_FLAG(1) = 0;
    0x802C971C(60);
    if (SI_SAVE_VAR(0) < 0xFFFFFFC3) {
        bind N(script_80240EB8) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(1);
        EnableModel(61, 0);
        EnableModel(62, 0);
        EnableModel(63, 0);
        EnableModel(64, 0);
        EnableModel(65, 0);
        EnableModel(66, 0);
        EnableModel(68, 0);
        EnableModel(70, 0);
        ModifyColliderFlags(0, 44, 0x7FFFFE00);
        ModifyColliderFlags(0, 45, 0x7FFFFE00);
        ModifyColliderFlags(0, 46, 0x7FFFFE00);
        spawn N(script_802403C0);
    } else {
        EnableModel(51, 0);
        EnableModel(52, 0);
        EnableModel(53, 0);
        EnableModel(55, 0);
        EnableModel(56, 0);
        EnableModel(57, 0);
        EnableModel(68, 0);
        EnableModel(70, 0);
        EnableModel(49, 0);
        ModifyColliderFlags(0, 40, 0x7FFFFE00);
        ModifyColliderFlags(0, 41, 0x7FFFFE00);
        ModifyColliderFlags(0, 42, 0x7FFFFE00);
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFC3) {
    } else {
        EnableModel(49, 0);
    }
});

Script N(script_80241430) = SCRIPT({
    MakeItemEntity(17, 467, 0xFFFFFF56, 218, 0, SI_SAVE_FLAG(871));
    PlayEffect(32, 1, 358, 0xFFFFFF85, 358, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 457, 0xFFFFFF85, 214, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

s32 pad_0014EC[] = {
    0x00000000,
};

Script N(script_802414F0) = SCRIPT({
    ParentColliderToModel(49, 79);
    ParentColliderToModel(50, 79);
    if (SI_AREA_FLAG(1) == 0) {
        bind N(script_802415A0) to TriggerFlag_FLOOR_TOUCH 50;
    } else {
        TranslateGroup(82, 0, 0xFFFFFFF2, 0);
        UpdateColliderTransform(49);
        UpdateColliderTransform(50);
    }
});

Script N(script_802415A0) = SCRIPT({
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
    if (SI_VAR(1) < 50) {
        spawn {
            DisablePartnerAI(0);
            SetNpcJumpscale(0xFFFFFFFC, 2.5);
            NpcJump0(0xFFFFFFFC, 470, 50, 268, 10);
            sleep 10;
            EnablePartnerAI();
        }
    }
    PlaySoundAtCollider(50, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateGroup(82, 0, SI_VAR(0), 0);
    UpdateColliderTransform(49);
    UpdateColliderTransform(50);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(50, 8331, 0);
    SI_AREA_FLAG(1) = 1;
    unbind;
});

s32 pad_0017C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802417D0_97B620

// rodata: D_802417D8_97B628
