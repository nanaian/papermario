#include "isk_06.h"

Script N(script_ExitWalk_80240060);
Script N(script_ExitWalk_802400BC);
Script N(script_80240118);
Script N(main);
s32 pad_00031C[1];
Script N(script_80240320);
Script N(script_80240400);
Script N(script_802404EC);
Script N(script_802405BC);
Script N(script_80240614);
Script N(script_802406C8);
Script N(script_8024081C);
Script N(script_80240A84);
Script N(script_80240B14);
Script N(script_80240BF4);
Script N(script_80240E0C);
Script N(script_80240ED8);
Script N(script_80240F68);
Script N(script_802413A4);
s32 pad_00172C[1];
Script N(script_80241730);
Script N(script_802417E0);
s32 pad_001A04[3];
const char D_80241A10_982430[8]; // "isk_04"
s32 pad_001A18[2];

EntryList N(entryList) = {
    { 471.0f, -80.0f, -290.0f, 320.0f },
    { 509.0f, -270.0f, -318.0f, 320.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19009A,
};

Script N(script_ExitWalk_80240060) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80241A10_982430, 2);
    sleep 100;
});

Script N(script_ExitWalk_802400BC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80241A10_982430, 3);
    sleep 100;
});

Script N(script_80240118) = SCRIPT({
    bind N(script_ExitWalk_80240060) to 0x80000 0;
    bind N(script_ExitWalk_802400BC) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20003);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFC4) {
        SetZoneEnabled(35, 0);
    } else {
        SetZoneEnabled(33, 0);
        SetZoneEnabled(16, 0);
    }
    await N(script_80240320);
    spawn N(script_802413A4);
    spawn N(script_80241730);
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
    SI_VAR(0) = N(script_80240118);
    spawn EnterWalk;
});

s32 pad_00031C[] = {
    0x00000000,
};

Script N(script_80240320) = SCRIPT({
    MakeItemEntity(348, 335, 0xFFFFFF7E, 0xFFFFFDDA, 17, SI_SAVE_FLAG(885));
    MakeItemEntity(17, 304, 0xFFFFFEF2, 0xFFFFFE4E, 0, SI_SAVE_FLAG(874));
    PlayEffect(32, 1, 415, 0xFFFFFF03, 0xFFFFFEDD, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 291, 0xFFFFFF03, 0xFFFFFE61, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

Script N(script_80240400) = SCRIPT({
    SetTexPanner(95, 4);
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
10:
    SI_VAR(1) += 0xFFFFFC18;
    SI_VAR(2) += 200;
    SetTexPanOffset(4, 0, 0, SI_VAR(1));
    SetTexPanOffset(4, 1, SI_VAR(2), 0);
    sleep 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFC4) {
        goto 10;
    }
    EnableModel(95, 0);
});

Script N(script_802404EC) = SCRIPT({
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 356, 0xFFFFFFA1, 0xFFFFFE8B);
    SetCamDistance(0, 364);
    SetCamPosA(0, 0xFFFFFD91, 192);
    SetCamPosB(0, 566, 0);
    SetCamPitch(0, 13.6005859375, -1.5);
    SetPanTarget(0, 356, 0xFFFFFFA1, 0xFFFFFE8B);
    PanToTarget(0, 0, 1);
});

Script N(script_802405BC) = SCRIPT({
    SetCamSpeed(0, 0.5);
    SetCamPitch(0, 3.400390625, -5.5);
    SetPanTarget(0, 356, 0xFFFFFEE3, 0xFFFFFE8B);
});

Script N(script_80240614) = SCRIPT({
    SetCamSpeed(0, 90.0);
    UseSettingsFrom(0, 356, 0xFFFFFFA1, 0xFFFFFE8B);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    PanToTarget(0, 0, 0);
});

Script N(script_802406C8) = SCRIPT({
    SetTexPanner(58, 0);
    SetTexPanner(59, 0);
    SetTexPanner(60, 0);
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
    if (SI_SAVE_VAR(0) < 0xFFFFFFC4) {
        goto 20;
    }
});

Script N(script_8024081C) = SCRIPT({
    SetTexPanner(80, 1);
    SetTexPanner(82, 2);
    SetTexPanner(73, 3);
    SetTexPanner(74, 3);
    SetTexPanner(75, 3);
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
    if (SI_SAVE_VAR(0) < 0xFFFFFFC4) {
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

Script N(script_80240A84) = SCRIPT({
    MakeLerp(0, 100, 60, 1);
10:
    UpdateLerp();
    ScaleModel(59, 1.0, SI_VAR(0), 1.0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240B14) = SCRIPT({
    MakeLerp(0, 50, 10, 4);
10:
    UpdateLerp();
    SI_VAR(0) /= 100;
    SI_VAR(2) = 1;
    SI_VAR(2) +=f SI_VAR(0);
    SI_VAR(3) = 1;
    SI_VAR(3) -=f SI_VAR(0);
    ScaleModel(82, SI_VAR(2), SI_VAR(3), SI_VAR(2));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240BF4) = SCRIPT({
    MakeLerp(0, 0xFFFFFF9C, 60, 1);
10:
    UpdateLerp();
    SI_VAR(0) /= 10;
    SI_VAR(2) = 0;
    SI_VAR(2) -=f SI_VAR(0);
    TranslateGroup(72, 0, SI_VAR(0), 0);
    TranslateModel(62, 0, SI_VAR(2), 0);
    TranslateModel(63, 0, SI_VAR(2), 0);
    TranslateModel(64, 0, SI_VAR(2), 0);
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
    TranslateGroup(72, 0, SI_VAR(0), 0);
    TranslateModel(62, 0, SI_VAR(2), 0);
    TranslateModel(63, 0, SI_VAR(2), 0);
    TranslateModel(64, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
});

Script N(script_80240E0C) = SCRIPT({
    0x802C971C(79);
    MakeLerp(0xFFFFFF38, 0, 120, 0);
10:
    UpdateLerp();
    SI_VAR(0) /= 10;
    TranslateGroup(79, 0, SI_VAR(0), 0);
    TranslateModel(82, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240ED8) = SCRIPT({
    MakeLerp(0, 0xFFFFFF38, 10, 0);
10:
    UpdateLerp();
    TranslateModel(80, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
});

Script N(script_80240F68) = SCRIPT({
    sleep 5;
    InterpPlayerYaw(98, 0);
    EnableModel(73, 1);
    EnableModel(74, 1);
    EnableModel(75, 1);
    EnableModel(76, 1);
    EnableModel(77, 1);
    EnableModel(78, 1);
    EnableModel(82, 1);
    EnableModel(80, 1);
    spawn N(script_802404EC);
    sleep 30;
    spawn N(script_802406C8);
    spawn N(script_80240A84);
    spawn N(script_80240BF4);
    PlaySound(83);
    sleep 75;
    spawn N(script_802405BC);
    sleep 30;
    spawn N(script_8024081C);
    spawn N(script_80240E0C);
    PlaySound(1107);
    sleep 120;
    spawn N(script_80240ED8);
    sleep 5;
    spawn N(script_80240B14);
    PlaySound(1107);
    sleep 10;
    EnableModel(54, 0);
    EnableModel(55, 0);
    EnableModel(56, 0);
    EnableModel(58, 0);
    EnableModel(59, 0);
    EnableModel(60, 0);
    ModifyColliderFlags(0, 38, 0x7FFFFE00);
    ModifyColliderFlags(0, 39, 0x7FFFFE00);
    ModifyColliderFlags(0, 40, 0x7FFFFE00);
    ModifyColliderFlags(1, 45, 0x7FFFFE00);
    ModifyColliderFlags(1, 46, 0x7FFFFE00);
    ModifyColliderFlags(1, 47, 0x7FFFFE00);
    EnableModel(89, 1);
    EnableModel(90, 1);
    EnableModel(91, 1);
    EnableModel(92, 1);
    EnableModel(93, 1);
    EnableModel(66, 0);
    EnableModel(67, 0);
    EnableModel(68, 0);
    EnableModel(69, 0);
    EnableModel(70, 0);
    ModifyColliderFlags(0, 35, 0x7FFFFE00);
    ModifyColliderFlags(0, 36, 0x7FFFFE00);
    SI_SAVE_VAR(0) = 0xFFFFFFC4;
    SetZoneEnabled(16, 0);
    SetZoneEnabled(35, 1);
    sleep 20;
    spawn N(script_80240614);
    sleep 5;
    EnableModel(82, 0);
    DisablePlayerInput(0);
    unbind;
});

Script N(script_802413A4) = SCRIPT({
    SI_AREA_FLAG(2) = 0;
    0x802C971C(72);
    if (SI_SAVE_VAR(0) < 0xFFFFFFC4) {
        bind N(script_80240F68) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(2);
        EnableModel(73, 0);
        EnableModel(74, 0);
        EnableModel(75, 0);
        EnableModel(76, 0);
        EnableModel(77, 0);
        EnableModel(78, 0);
        EnableModel(82, 0);
        EnableModel(80, 0);
        ModifyColliderFlags(0, 45, 0x7FFFFE00);
        ModifyColliderFlags(0, 46, 0x7FFFFE00);
        ModifyColliderFlags(0, 47, 0x7FFFFE00);
        EnableModel(89, 0);
        EnableModel(90, 0);
        EnableModel(91, 0);
        EnableModel(92, 0);
        EnableModel(93, 0);
        spawn N(script_80240400);
    } else {
        EnableModel(54, 0);
        EnableModel(55, 0);
        EnableModel(56, 0);
        EnableModel(58, 0);
        EnableModel(59, 0);
        EnableModel(60, 0);
        EnableModel(82, 0);
        EnableModel(80, 0);
        EnableModel(66, 0);
        EnableModel(67, 0);
        EnableModel(68, 0);
        EnableModel(69, 0);
        EnableModel(70, 0);
        ModifyColliderFlags(0, 35, 0x7FFFFE00);
        ModifyColliderFlags(0, 36, 0x7FFFFE00);
        EnableModel(95, 0);
        ModifyColliderFlags(0, 38, 0x7FFFFE00);
        ModifyColliderFlags(0, 39, 0x7FFFFE00);
        ModifyColliderFlags(0, 40, 0x7FFFFE00);
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFC4) {
    } else {
        EnableModel(95, 0);
    }
});

s32 pad_00172C[] = {
    0x00000000,
};

Script N(script_80241730) = SCRIPT({
    ParentColliderToModel(32, 101);
    ParentColliderToModel(33, 101);
    if (SI_AREA_FLAG(2) == 0) {
        bind N(script_802417E0) to TriggerFlag_FLOOR_TOUCH 33;
    } else {
        TranslateModel(101, 0, 0xFFFFFFF2, 0);
        UpdateColliderTransform(32);
        UpdateColliderTransform(33);
    }
});

Script N(script_802417E0) = SCRIPT({
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
    if (SI_VAR(1) < 0xFFFFFFB0) {
        spawn {
            DisablePartnerAI(0);
            SetNpcJumpscale(0xFFFFFFFC, 2.5);
            NpcJump0(0xFFFFFFFC, 343, 0xFFFFFFB0, 0xFFFFFE5B, 10);
            sleep 10;
            EnablePartnerAI();
        }
    }
    PlaySoundAtCollider(33, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(101, 0, SI_VAR(0), 0);
    UpdateColliderTransform(32);
    UpdateColliderTransform(33);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(33, 8331, 0);
    SI_AREA_FLAG(2) = 1;
    unbind;
});

s32 pad_001A04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241A10_982430

s32 pad_001A18[] = {
    0x00000000, 0x00000000,
};

