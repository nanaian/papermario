#include "isk_09.h"

s32 pad_0002E8[2];
s32 pad_000324[3];
Script N(script_80240380);
Script N(script_8024053C);
s32 pad_000578[2];
Script N(script_ExitWalk_80240580);
Script N(script_802405DC);
Script N(main);
s32 pad_0006E8[2];
s32 N(unk_802406F0)[1];
Script N(script_802406F4);
Script N(script_8024075C);
Script N(script_8024083C);
Script N(script_8024087C);
Script N(script_802408BC);
Script N(script_80240A5C);
Script N(script_80240AA8);
Script N(script_MakeEntities);
s32 pad_001078[2];
Script N(script_80241080);
Script N(script_80241178);
Script N(script_80241264);
Script N(script_802412C0);
Script N(script_8024131C);
Script N(script_80241378);
Script N(script_802413D4);
Script N(script_80241430);
Script N(script_8024148C);
Script N(script_802414E8);
Script N(script_80241544);
Script N(script_802416D8);
Script N(script_8024186C);
Script N(script_80241A00);
Script N(script_80241B94);
Script N(script_80241C1C);
Script N(script_80241CA4);
s32 pad_001DAC[1];
Script N(script_80241DB0);
Script N(script_80241E80);
Script N(script_8024207C);
Script N(script_80242278);
Script N(script_80242474);
const char D_80242670_988B50[8]; // "isk_08"
s32 pad_002678[2];

// text: func_80240000_9864E0

// text: func_802400B4_986594

// text: func_80240118_9865F8

// text: func_80240268_986748

// text: func_802402BC_98679C

s32 pad_0002E8[] = {
    0x00000000, 0x00000000,
};

// text: func_802402F0_9867D0

s32 pad_000324[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -575.0f, -390.0f, 81.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19009D,
};

Script N(script_80240380) = SCRIPT({
    if (SI_SAVE_FLAG(891) == 0) {
        spawn {
            FadeInMusic(1, 83, 0, 2000, 0, 127);
            FadeOutMusic(0, 2000);
            DisablePlayerInput(1);
            sleep 20;
            group 0;
            0x802D5830(1);
            ShowMessageAtScreenPos(0xD00DF, 160, 40);
            SI_SAVE_FLAG(891) = 1;
            DisablePlayerInput(0);
            0x802D5830(0);
            FadeInMusic(0, 24, 0, 2000, 0, 127);
            FadeOutMusic(1, 2000);
        }
        return;
    }
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
});

Script N(script_8024053C) = SCRIPT({
    0x802D5FF8(66, 1);
    sleep 130;
    0x802D5FD8();
});

s32 pad_000578[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240580) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242670_988B50, 0);
    sleep 100;
});

Script N(script_802405DC) = SCRIPT({
    bind N(script_ExitWalk_80240580) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20006);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80241DB0);
    spawn N(script_80240380);
    await N(script_80241CA4);
    SI_VAR(0) = N(script_802405DC);
    spawn EnterWalk;
});

s32 pad_0006E8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802406F0)[] = {
    0x00000000,
};

Script N(script_802406F4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_8024075C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_802406F4);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_8024083C) = SCRIPT({
    ModifyColliderFlags(1, 49, 0x7FFFFE00);
    ModifyColliderFlags(0, 50, 0x7FFFFE00);
});

Script N(script_8024087C) = SCRIPT({
    ModifyColliderFlags(0, 49, 0x7FFFFE00);
    ModifyColliderFlags(1, 50, 0x7FFFFE00);
});

Script N(script_802408BC) = SCRIPT({
    if (SI_SAVE_FLAG(900) == 0) {
        await N(script_8024083C);
        loop {
            if (SI_SAVE_FLAG(900) == 1) {
                break;
            }
            sleep 1;
        }
        PartnerIsFlying(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            spawn {
                DisablePartnerAI(0);
                NpcFlyTo(0xFFFFFFFC, 0xFFFFFF22, 0xFFFFFEA5, 0xFFFFFDED, 20, 0, 0);
                InterpNpcYaw(0xFFFFFFFC, 70, 0);
                loop {
                    if (SI_SAVE_VAR(0) == 0xFFFFFFC5) {
                        break;
                    }
                    sleep 1;
                }
                EnablePartnerAI();
            }
        }
        sleep 60;
        spawn N(script_8024053C);
        ShowMessageAtScreenPos(0x1D017D, 160, 40);
        func_802402BC_98679C();
        SI_SAVE_VAR(0) = 0xFFFFFFC5;
    }
    await N(script_8024087C);
});

Script N(script_80240A5C) = SCRIPT({
    SI_VAR(10) = 247;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(901) = 1;
    await N(script_8024075C);
});

Script N(script_80240AA8) = SCRIPT({
    SI_SAVE_FLAG(896) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE0C, 0xFFFFFF62, 0xFFFFFE9A, 0xFFFFFDCE, 283, 5, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(900));
    spawn N(script_802408BC);
    if (SI_SAVE_FLAG(896) == 0) {
        MakeEntity(0x802EA19C, 0xFFFFFEEE, 0xFFFFFE7A, 0xFFFFFDFB, 115, 0x80000000);
        AssignScript(N(script_80240AA8));
    }
    MakeEntity(0x802EAE30, 50, 0xFFFFFF10, 0xFFFFFDE9, 222, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(901));
    AssignScript(N(script_80240A5C));
    PlayEffect(32, 1, 0xFFFFFE09, 0xFFFFFEBD, 0xFFFFFFD4, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE1F, 0xFFFFFEBD, 0xFFFFFF7E, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE63, 0xFFFFFEBD, 0xFFFFFEDE, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE9A, 0xFFFFFEBD, 0xFFFFFE9A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF2D, 0xFFFFFEBD, 0xFFFFFE35, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF7E, 0xFFFFFEBD, 0xFFFFFE1A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE09, 0xFFFFFF3F, 0xFFFFFFD4, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE1F, 0xFFFFFF3F, 0xFFFFFF7E, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE63, 0xFFFFFF3F, 0xFFFFFEDE, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE9A, 0xFFFFFF3F, 0xFFFFFE9A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF2D, 0xFFFFFF3F, 0xFFFFFE35, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF7E, 0xFFFFFF3F, 0xFFFFFE1A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE09, 0xFFFFFFC1, 0xFFFFFFD4, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE1F, 0xFFFFFFC1, 0xFFFFFF7E, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE63, 0xFFFFFFC1, 0xFFFFFEDE, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE9A, 0xFFFFFFC1, 0xFFFFFE9A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF2D, 0xFFFFFFC1, 0xFFFFFE35, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF7E, 0xFFFFFFC1, 0xFFFFFE1A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

s32 pad_001078[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241080) = SCRIPT({
    sleep 20;
    ModifyColliderFlags(0, SI_VAR(3), 0x7FFFFE00);
    ModifyColliderFlags(1, SI_VAR(4), 0x7FFFFE00);
    PlaySoundAtCollider(SI_VAR(4), 0x80000002, 0);
    MakeLerp(0, 90, SI_VAR(5), 12);
10:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    StopSound(0x80000002);
});

Script N(script_80241178) = SCRIPT({
    ModifyColliderFlags(1, SI_VAR(3), 0x7FFFFE00);
    ModifyColliderFlags(0, SI_VAR(4), 0x7FFFFE00);
    PlaySoundAtCollider(SI_VAR(3), 0x80000002, 0);
    MakeLerp(90, 0, SI_VAR(5), 12);
10:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    StopSound(0x80000002);
});

Script N(script_80241264) = SCRIPT({
    SI_VAR(2) = 93;
    SI_VAR(3) = 21;
    SI_VAR(4) = 22;
    SI_VAR(5) = 30;
    await N(script_80241080);
});

Script N(script_802412C0) = SCRIPT({
    SI_VAR(2) = 93;
    SI_VAR(3) = 21;
    SI_VAR(4) = 22;
    SI_VAR(5) = 30;
    await N(script_80241178);
});

Script N(script_8024131C) = SCRIPT({
    SI_VAR(2) = 97;
    SI_VAR(3) = 25;
    SI_VAR(4) = 24;
    SI_VAR(5) = 30;
    await N(script_80241080);
});

Script N(script_80241378) = SCRIPT({
    SI_VAR(2) = 97;
    SI_VAR(3) = 25;
    SI_VAR(4) = 24;
    SI_VAR(5) = 30;
    await N(script_80241178);
});

Script N(script_802413D4) = SCRIPT({
    SI_VAR(2) = 101;
    SI_VAR(3) = 28;
    SI_VAR(4) = 27;
    SI_VAR(5) = 30;
    await N(script_80241080);
});

Script N(script_80241430) = SCRIPT({
    SI_VAR(2) = 101;
    SI_VAR(3) = 28;
    SI_VAR(4) = 27;
    SI_VAR(5) = 30;
    await N(script_80241178);
});

Script N(script_8024148C) = SCRIPT({
    SI_VAR(2) = 105;
    SI_VAR(3) = 30;
    SI_VAR(4) = 31;
    SI_VAR(5) = 30;
    await N(script_80241080);
});

Script N(script_802414E8) = SCRIPT({
    SI_VAR(2) = 105;
    SI_VAR(3) = 30;
    SI_VAR(4) = 31;
    SI_VAR(5) = 30;
    await N(script_80241178);
});

Script N(script_80241544) = SCRIPT({
    DisablePlayerInput(1);
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 0xFFFFFDF6, 0xFFFFFECA, 0xFFFFFFA1);
    SetPanTarget(0, 0xFFFFFDF6, 0xFFFFFE87, 0xFFFFFFA4);
    sleep 1;
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    await N(script_80241264);
    ShakeCam(0, 0, 3, 0.1005859375);
    SetPanTarget(0, 0xFFFFFDF6, 0xFFFFFF22, 0xFFFFFFA4);
    WaitForCam(0, 1.0);
    await N(script_8024131C);
    ShakeCam(0, 0, 3, 0.1005859375);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_802416D8) = SCRIPT({
    DisablePlayerInput(1);
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 0xFFFFFDF6, 0xFFFFFECA, 0xFFFFFFA1);
    SetPanTarget(0, 0xFFFFFDF6, 0xFFFFFE87, 0xFFFFFFA4);
    sleep 1;
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    await N(script_802412C0);
    ShakeCam(0, 0, 3, 0.1005859375);
    SetPanTarget(0, 0xFFFFFDF6, 0xFFFFFF22, 0xFFFFFFA4);
    WaitForCam(0, 1.0);
    await N(script_80241378);
    ShakeCam(0, 0, 3, 0.1005859375);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_8024186C) = SCRIPT({
    DisablePlayerInput(1);
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 0xFFFFFE68, 0xFFFFFECA, 0xFFFFFEA5);
    SetPanTarget(0, 0xFFFFFE68, 0xFFFFFE87, 0xFFFFFEA5);
    sleep 1;
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    await N(script_802413D4);
    ShakeCam(0, 0, 3, 0.1005859375);
    SetPanTarget(0, 0xFFFFFE68, 0xFFFFFF22, 0xFFFFFEA5);
    WaitForCam(0, 1.0);
    await N(script_8024148C);
    ShakeCam(0, 0, 3, 0.1005859375);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_80241A00) = SCRIPT({
    DisablePlayerInput(1);
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 0xFFFFFE68, 0xFFFFFECA, 0xFFFFFEA5);
    SetPanTarget(0, 0xFFFFFE68, 0xFFFFFE87, 0xFFFFFEA5);
    sleep 1;
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    await N(script_80241430);
    ShakeCam(0, 0, 3, 0.1005859375);
    SetPanTarget(0, 0xFFFFFE68, 0xFFFFFF22, 0xFFFFFEA5);
    WaitForCam(0, 1.0);
    await N(script_802414E8);
    ShakeCam(0, 0, 3, 0.1005859375);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_80241B94) = SCRIPT({
    if (SI_MAP_FLAG(0) == 0) {
        await N(script_80241544);
        SI_MAP_FLAG(0) = 1;
    } else {
        await N(script_802416D8);
        SI_MAP_FLAG(0) = 0;
    }
    DisablePlayerInput(0);
    SI_AREA_FLAG(15) = 0;
});

Script N(script_80241C1C) = SCRIPT({
    if (SI_MAP_FLAG(1) == 0) {
        await N(script_80241A00);
        SI_MAP_FLAG(1) = 1;
    } else {
        await N(script_8024186C);
        SI_MAP_FLAG(1) = 0;
    }
    DisablePlayerInput(0);
    SI_AREA_FLAG(16) = 0;
});

Script N(script_80241CA4) = SCRIPT({
    ModifyColliderFlags(0, 22, 0x7FFFFE00);
    ModifyColliderFlags(0, 24, 0x7FFFFE00);
    RotateModel(101, 90, 0, 0, 1);
    ModifyColliderFlags(0, 28, 0x7FFFFE00);
    RotateModel(105, 90, 0, 0, 1);
    ModifyColliderFlags(0, 30, 0x7FFFFE00);
    SI_MAP_FLAG(0) = 0;
    SI_MAP_FLAG(1) = 0;
    bind N(script_80241B94) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(15);
    bind N(script_80241C1C) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(16);
});

s32 pad_001DAC[] = {
    0x00000000,
};

Script N(script_80241DB0) = SCRIPT({
    ParentColliderToModel(36, 77);
    bind N(script_80241E80) to TriggerFlag_FLOOR_TOUCH 36;
    ParentColliderToModel(37, 81);
    bind N(script_8024207C) to TriggerFlag_FLOOR_TOUCH 37;
    ParentColliderToModel(38, 85);
    bind N(script_80242278) to TriggerFlag_FLOOR_TOUCH 38;
    ParentColliderToModel(39, 89);
    bind N(script_80242474) to TriggerFlag_FLOOR_TOUCH 39;
});

Script N(script_80241E80) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(36, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(77, 0, SI_VAR(0), 0);
    UpdateColliderTransform(36);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(36, 8331, 0);
    SI_AREA_FLAG(15) = 1;
15:
    sleep 1;
    if (SI_AREA_FLAG(15) == 1) {
        goto 15;
    }
    MakeLerp(0xFFFFFFF2, 0, 5, 0);
20:
    UpdateLerp();
    TranslateModel(77, 0, SI_VAR(0), 0);
    UpdateColliderTransform(36);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    func_802402F0_9867D0(36);
});

Script N(script_8024207C) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(37, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(81, 0, SI_VAR(0), 0);
    UpdateColliderTransform(37);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(37, 8331, 0);
    SI_AREA_FLAG(15) = 1;
15:
    sleep 1;
    if (SI_AREA_FLAG(15) == 1) {
        goto 15;
    }
    MakeLerp(0xFFFFFFF2, 0, 5, 0);
20:
    UpdateLerp();
    TranslateModel(81, 0, SI_VAR(0), 0);
    UpdateColliderTransform(37);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    func_802402F0_9867D0(37);
});

Script N(script_80242278) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(38, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(85, 0, SI_VAR(0), 0);
    UpdateColliderTransform(38);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(38, 8331, 0);
    SI_AREA_FLAG(15) = 1;
15:
    sleep 1;
    if (SI_AREA_FLAG(15) == 1) {
        goto 15;
    }
    MakeLerp(0xFFFFFFF2, 0, 5, 0);
20:
    UpdateLerp();
    TranslateModel(85, 0, SI_VAR(0), 0);
    UpdateColliderTransform(38);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    func_802402F0_9867D0(38);
});

Script N(script_80242474) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(39, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(89, 0, SI_VAR(0), 0);
    UpdateColliderTransform(39);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(39, 8331, 0);
    SI_AREA_FLAG(16) = 1;
15:
    sleep 1;
    if (SI_AREA_FLAG(16) == 1) {
        goto 15;
    }
    MakeLerp(0xFFFFFFF2, 0, 5, 0);
20:
    UpdateLerp();
    TranslateModel(89, 0, SI_VAR(0), 0);
    UpdateColliderTransform(39);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    func_802402F0_9867D0(39);
});

// rodata: D_80242670_988B50

s32 pad_002678[] = {
    0x00000000, 0x00000000,
};
