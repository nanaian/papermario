#include "kzn_10.h"

s32 pad_000328[2];
Script N(script_UpdateTexturePan_80240730);
Script N(script_802407CC);
Script N(script_802408E8);
Script N(script_ExitWalk_80240A04);
Script N(script_ExitWalk_80240A60);
Script N(script_80240ABC);
Script N(main);
s32 pad_000D0C[1];
Script N(script_80240D10);
Script N(script_80240FB0);
Script N(script_80241224);
Script N(script_80241424);
Script N(script_80241464);
const char D_80241FF0_C80170[8]; // "kzn_09"
const char D_80241FF8_C80178[8]; // "kzn_11"
s32 pad_002018[2];

// text: func_80240000_C7E180

// text: func_80240124_C7E2A4

// text: func_8024030C_C7E48C

s32 pad_000328[] = {
    0x00000000, 0x00000000,
};

// text: func_80240330_C7E4B0

// text: func_80240350_C7E4D0

// text: func_8024037C_C7E4FC

// text: func_80240414_C7E594

// text: func_802404B4_C7E634

// text: func_802404EC_C7E66C

// text: func_802405A4_C7E724

// text: func_80240638_C7E7B8

EntryList N(entryList) = {
    { -445.0f, 0.0f, 0.0f, 90.0f },
    { 425.0f, -259.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19010C,
};

Script N(script_UpdateTexturePan_80240730) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C7E180();
                    return;
                }
            }
        }
    }
    func_80240124_C7E2A4();
});

Script N(script_802407CC) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 3);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 600;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240730);
    }
});

Script N(script_802408E8) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 4);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 500;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240730);
    }
});

Script N(script_ExitWalk_80240A04) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241FF0_C80170, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240A60) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241FF8_C80178, 0);
    sleep 100;
});

Script N(script_80240ABC) = SCRIPT({
    bind N(script_ExitWalk_80240A04) to 0x80000 5;
    bind N(script_ExitWalk_80240A60) to 0x80000 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0009);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    spawn {
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            UseSettingsFrom(0, 0xFFFFFE43, 0xFFFFFFF3, 0);
            SetPanTarget(0, 0xFFFFFE43, 0xFFFFFFF3, 0);
        } else {
            UseSettingsFrom(0, 425, 0xFFFFFF0A, 0);
            SetPanTarget(0, 425, 0xFFFFFF0A, 0);
        }
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        sleep 2;
        func_8024030C_C7E48C();
        PanToTarget(0, 0, 0);
    }
    SI_VAR(0) = N(script_80240ABC);
    spawn EnterWalk;
    sleep 1;
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    spawn N(script_80241464);
    SI_VAR(0) = 44;
    spawn N(script_802407CC);
});

s32 pad_000D0C[] = {
    0x00000000,
};

Script N(script_80240D10) = SCRIPT({
    DisablePlayerInput(1);
10:
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        0x802D2B6C();
    }
0:
    sleep 1;
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 9) {
            goto 2;
        } else {
            goto 10;
        }
    }
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        goto 0;
    }
    GetPlayerTargetYaw(SI_VAR(0));
    if (SI_VAR(0) < 180) {
        InterpPlayerYaw(90, 1);
        sleep 1;
        func_802404B4_C7E634(20);
    } else {
        InterpPlayerYaw(270, 1);
        sleep 1;
        func_802404B4_C7E634(0xFFFFFFEC);
    }
    SetPlayerAnimation(0x1000F);
    sleep 1;
    func_80240330_C7E4B0();
    0x802D2520(0x1000F, 4, 3.0, 3.0, 0, 0);
1:
    sleep 1;
    if (SI_AREA_FLAG(2) == 0) {
        goto 1;
    }
    sleep 30;
    0x802D2520(0x1000F, 0, 0, 0, 0, 0);
    SetPlayerAnimation(0x10030);
    func_802404B4_C7E634(0);
2:
    DisablePlayerInput(0);
});

Script N(script_80240FB0) = SCRIPT({
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamSpeed(0, 10.0);
    PanToTarget(0, 0, 1);
    loop {
        if (SI_AREA_FLAG(3) == 0) {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += SI_MAP_VAR(0);
            SI_VAR(0) /= 2;
        } else {
            SI_VAR(0) = SI_MAP_VAR(0);
        }
        SI_VAR(3) = SI_VAR(0);
        match SI_VAR(3) {
            < 0xFFFFFEA2 {
                SI_VAR(6) = 500;
            }
            < 0xFFFFFF38 {
                SI_VAR(6) = SI_VAR(3);
                SI_VAR(6) += 850;
            }
            < 150 {
                SI_VAR(6) = 650;
            }
            < 300 {
                SI_VAR(0) = SI_VAR(3);
                SI_VAR(6) = 800;
                SI_VAR(6) -= SI_VAR(0);
            } else {
                SI_VAR(6) = 500;
            }
        }
        SetCamDistance(0, SI_VAR(6));
        SI_VAR(0) = SI_VAR(3);
        SI_VAR(2) = 0;
        func_8024037C_C7E4FC();
        SI_VAR(2) -= 55;
        SetPanTarget(0, SI_VAR(3), SI_VAR(2), 0);
        PanToTarget(0, 0, 1);
        sleep 1;
    }
});

Script N(script_80241224) = SCRIPT({
    group 10;
    loop 5 {
        PlayEffect(21, 1, 0xFFFFFE52, 100, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 2;
    }
0:
    GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 100;
    PlayEffect(21, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 20;
    SI_VAR(0) -= 100;
    SI_VAR(1) += 50;
    PlayEffect(21, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 20;
    if (SI_AREA_FLAG(4) == 0) {
        goto 0;
    }
    loop 8 {
        PlayEffect(21, 1, 400, 0xFFFFFFB0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 5;
    }
});

Script N(script_80241424) = SCRIPT({
    loop {
        ShakeCam(0, 0, 30, 1.0);
    }
});

Script N(script_80241464) = SCRIPT({
    group 239;
    SetGroupEnabled(41, 0);
    EnableModel(42, 0);
    TranslateGroup(41, 0, 0, 0);
    RotateGroup(41, 0, 0, 0, 1);
    SI_AREA_FLAG(4) = 0;
    SI_AREA_FLAG(3) = 0;
    SI_AREA_FLAG(2) = 0;
    GetEntryID(SI_VAR(3));
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(3) == 0) {
            if (SI_VAR(0) >= 0xFFFFFE70) {
                break;
            }
        } else {
            if (SI_VAR(0) <= 0xFFFFFE70) {
                break;
            }
        }
        sleep 1;
    }
    0x802D2B6C();
    SetGroupEnabled(41, 1);
    EnableModel(42, 1);
    DisablePlayerInput(1);
    SI_VAR(0) = 0xFFFFFE2B;
    SI_VAR(2) = 0;
    func_8024037C_C7E4FC();
    MakeLerp(200, SI_VAR(2), 20, 1);
10:
    UpdateLerp();
    SI_MAP_VAR(0) = 0xFFFFFE2B;
    TranslateGroup(41, 0xFFFFFE2B, SI_VAR(0), 0);
    TranslateModel(42, 0xFFFFFE2B, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    SI_VAR(2) -= 55;
    PlayEffect(6, 4, 0xFFFFFE2B, SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    spawn N(script_80241224);
    spawn {
        GetCurrentPartner(SI_VAR(0));
        match SI_VAR(0) {
            == 4 {}
            == 9 {}
            else {
                GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
                SetPlayerJumpscale(2.5);
                PlayerJump1(SI_VAR(1), SI_VAR(2), SI_VAR(3), 8);
                InterpPlayerYaw(270, 0);
                if (SI_VAR(0) != 8) {
                    sleep 3;
                    SetPlayerAnimation(0x1002B);
                    sleep 10;
                    SetPlayerAnimation(0x10002);
                }
            }
        }
    }
    PlaySoundAt(483, 0, 0xFFFFFE2F, 0, 0);
    ShakeCam(0, 0, 10, 2.5);
    ShakeCam(0, 0, 5, 1.2001953125);
    sleep 15;
    DisablePlayerInput(0);
    SI_VAR(10) = spawn N(script_80240FB0);
    SI_MAP_VAR(10) = spawn N(script_80241424);
    PlaySoundAt(0x8000001B, 0, 0xFFFFFE2F, 0, 0);
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    MakeLerp(0xFFFFFE2B, 418, 180, 1);
    loop {
        UpdateLerp();
        func_8024037C_C7E4FC();
        func_80240638_C7E7B8(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_MAP_VAR(0) = SI_VAR(0);
        TranslateGroup(41, SI_VAR(0), SI_VAR(2), 0);
        TranslateModel(42, SI_VAR(0), SI_VAR(2), 0);
        SI_VAR(8) = SI_VAR(0);
        SI_VAR(9) = SI_VAR(2);
        RotateGroup(41, SI_VAR(3), 0, 0, 1);
        RotateModel(42, SI_VAR(3), 0, 0, 1);
        func_802404EC_C7E66C();
        TranslateModel(42, SI_VAR(5), SI_VAR(6), 0);
        func_802405A4_C7E724();
        sleep 1;
        func_80240414_C7E594();
        if (SI_VAR(4) < 80) {
            if (SI_AREA_FLAG(3) == 0) {
                func_80240350_C7E4D0();
                if (SI_VAR(0) != 9) {
                    spawn N(script_80240D10);
                    if (SI_AREA_FLAG(3) == 0) {
                        kill SI_VAR(10);
                        SI_AREA_FLAG(3) = 1;
                    }
                    spawn {
                        ResetCam(0, 2.0);
                        sleep 45;
                        SI_AREA_FLAG(2) = 1;
                    }
                }
            }
        }
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SI_AREA_FLAG(4) = 1;
    kill SI_MAP_VAR(10);
    spawn {
        ShakeCam(0, 0, 35, 2.0);
        ShakeCam(0, 0, 20, 1.0);
        ShakeCam(0, 0, 10, 0.5);
    }
    StopSound(0x8000001B);
    PlaySoundAt(484, 0, 415, 0xFFFFFF10, 0);
    EnableModel(42, 0);
    spawn {
        SI_VAR(0) = 418;
        SI_VAR(2) = 0;
        func_8024037C_C7E4FC();
        PlayEffect(0, SI_VAR(0), SI_VAR(2), 0, 1, 20, 3, 8, 0, 0, 0, 0, 0, 0);
    }
    SI_VAR(0) = SI_VAR(8);
    SI_VAR(1) = SI_VAR(9);
    SI_VAR(2) = SI_VAR(8);
    SI_VAR(3) = SI_VAR(9);
    SI_VAR(4) = SI_VAR(8);
    SI_VAR(5) = SI_VAR(9);
    SI_VAR(6) = SI_VAR(8);
    SI_VAR(7) = SI_VAR(9);
    loop 90 {
        TranslateModel(21, SI_VAR(6), SI_VAR(1), 0);
        TranslateModel(22, SI_VAR(6), SI_VAR(3), 0);
        TranslateModel(24, SI_VAR(4), SI_VAR(5), 0);
        TranslateModel(23, SI_VAR(4), SI_VAR(7), 0);
        TranslateModel(26, SI_VAR(2), SI_VAR(3), 0);
        TranslateModel(27, SI_VAR(2), SI_VAR(1), 0);
        TranslateModel(28, SI_VAR(0), SI_VAR(7), 0);
        TranslateModel(29, SI_VAR(0), SI_VAR(5), 0);
        TranslateModel(31, SI_VAR(0), SI_VAR(5), 0);
        TranslateModel(32, SI_VAR(0), SI_VAR(7), 0);
        TranslateModel(33, SI_VAR(2), SI_VAR(1), 0);
        TranslateModel(34, SI_VAR(2), SI_VAR(3), 0);
        TranslateModel(36, SI_VAR(4), SI_VAR(7), 0);
        TranslateModel(37, SI_VAR(4), SI_VAR(5), 0);
        TranslateModel(38, SI_VAR(6), SI_VAR(3), 0);
        TranslateModel(39, SI_VAR(6), SI_VAR(1), 0);
        SI_VAR(0) += 2;
        SI_VAR(1) += 0xFFFFFFF9;
        SI_VAR(2) += 0xFFFFFFFB;
        SI_VAR(3) += 7;
        SI_VAR(4) += 9;
        SI_VAR(5) += 0xFFFFFFFD;
        SI_VAR(6) += 0xFFFFFFFA;
        SI_VAR(7) += 7;
        sleep 1;
    }
    SetGroupEnabled(41, 0);
    EnableModel(42, 0);
    sleep 10;
    if (SI_AREA_FLAG(3) == 0) {
        kill SI_VAR(10);
        ResetCam(0, 90.0);
        SI_AREA_FLAG(2) = 1;
    }
});

// rodata: D_80241FF0_C80170

// rodata: D_80241FF8_C80178

// rodata: D_80242000_C80180

// rodata: D_80242008_C80188

// rodata: D_80242010_C80190

s32 pad_002018[] = {
    0x00000000, 0x00000000,
};
