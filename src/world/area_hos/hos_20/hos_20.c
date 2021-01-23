#include "hos_20.h"

s32 pad_00030C[1];
s32 pad_000354[3];
Script N(script_UpdateTexturePan_802403D0);
Script N(script_8024046C);
Script N(main);
s32 pad_000A18[2];
Script N(script_80240A20);
Script N(script_80240D00);
Script N(script_802410DC);
Script N(script_802412F4);
s32 pad_001608[2];
const char D_80241610_A46F40[8]; // "kpa_60"
const char D_80241618_A46F48[8]; // "hos_00"
const char D_80241620_A46F50[8]; // "osr_03"
const char D_80241628_A46F58[8]; // "hos_05"

// text: func_80240000_A45930

// text: func_80240124_A45A54

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_A45C40

s32 pad_000354[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -400.0f, 0.0f, 0.0f, 135.0f },
    { 0.0f, 0.0f, 0.0f, 135.0f },
    { 400.0f, 0.0f, 0.0f, 225.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_UpdateTexturePan_802403D0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A45930();
                    return;
                }
            }
        }
    }
    func_80240124_A45A54();
});

Script N(script_8024046C) = SCRIPT({
    group 0;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        RotateModel(0, 180, 0, 0, 1);
        RotateModel(1, 180, 0, 0, 1);
        RotateModel(3, 180, 0, 0, 1);
        RotateModel(4, 180, 0, 0, 1);
    }
    EnableTexPanning(0, 1);
    EnableTexPanning(1, 1);
    EnableTexPanning(3, 1);
    EnableTexPanning(4, 1);
    spawn {
        SI_VAR(0) = 12;
        SI_VAR(1) = 0xFFFFF800;
        SI_VAR(2) = 0xFFFFF800;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802403D0);
    }
    spawn {
        SI_VAR(0) = 11;
        SI_VAR(1) = 0xFFFFE800;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802403D0);
    }
    spawn {
        SI_VAR(0) = 13;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFEC00;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802403D0);
    }
    spawn {
        SI_VAR(0) = 10;
        SI_VAR(1) = 1024;
        SI_VAR(2) = 0xFFFFF400;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802403D0);
    }
});

Script N(main) = SCRIPT({
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_8024046C);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn N(script_80240D00);
        }
        == 1 {
            spawn N(script_802410DC);
        }
        == 2 {
            spawn N(script_802412F4);
        }
    }
});

s32 pad_000A18[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240A20) = SCRIPT({
    spawn {
        SI_VAR(4) = 185;
        SI_VAR(5) = 50;
        loop {
            SI_VAR(3) = SI_VAR(4);
            SI_VAR(4) = SI_VAR(5);
            SI_VAR(5) = SI_VAR(3);
            MakeLerp(SI_VAR(3), SI_VAR(4), 30, 10);
            loop {
                UpdateLerp();
                SI_VAR(0) /= 10;
                SetCamPitch(0, SI_VAR(0), -3.0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
    }
    SI_VAR(4) = 0xFFFFFFEC;
    SI_VAR(5) = 80;
    GetEntryID(SI_VAR(8));
    loop {
        SI_VAR(3) = SI_VAR(4);
        SI_VAR(4) = SI_VAR(5);
        SI_VAR(5) = SI_VAR(3);
        MakeLerp(SI_VAR(3), SI_VAR(4), 30, 10);
        loop {
            UpdateLerp();
            SI_VAR(2) =f SI_VAR(0);
            SI_VAR(2) *= 0.1005859375;
            TranslateGroup(10, SI_MAP_VAR(10), SI_VAR(2), 0);
            RotateGroup(10, SI_MAP_VAR(11), 0, 1, 0);
            GetModelCenter(8);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(8) != 2) {
                SI_VAR(0) += 0xFFFFFFF6;
            } else {
                SI_VAR(0) += 10;
            }
            SI_VAR(2) += 5;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(script_80240D00) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    InterpPlayerYaw(135, 0);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcYaw(0xFFFFFFFC, 90);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamPitch(0, 18.5, -3.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_MAP_VAR(10) = 0xFFFFFED4;
    SI_MAP_VAR(11) = 0;
    spawn N(script_80240A20);
    sleep 1;
    PlaySound(380);
    if (SI_SAVE_VAR(0) < 93) {
        MakeLerp(0xFFFFFED4, 0, 120, 4);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 100;
        PlaySound(1404);
        GotoMap(D_80241618_A46F48, 3);
    } else {
        spawn {
            MakeLerp(0xFFFFFED4, 0, 120, 4);
            loop {
                UpdateLerp();
                SI_MAP_VAR(10) = SI_VAR(0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            sleep 75;
            PlaySound(1404);
            PlaySound(8353);
            MakeLerp(0, 300, 60, 2);
            loop {
                UpdateLerp();
                SI_MAP_VAR(10) = SI_VAR(0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            sleep 20;
        }
        sleep 60;
        loop 215 {
            sleep 1;
            func_80240310_A45C40();
            if (SI_VAR(8) == 1) {
                break;
            }
        }
        PlaySound(1404);
        GotoMap(D_80241610_A46F40, 4);
    }
    sleep 100;
});

Script N(script_802410DC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    InterpPlayerYaw(135, 0);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcYaw(0xFFFFFFFC, 90);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamPitch(0, 18.5, -3.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    PlaySound(380);
    SI_MAP_VAR(10) = 0;
    SI_MAP_VAR(11) = 0;
    spawn N(script_80240A20);
    sleep 100;
    PlaySound(1404);
    PlaySound(8353);
    MakeLerp(0, 300, 60, 2);
    loop {
        UpdateLerp();
        SI_MAP_VAR(10) = SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 20;
    GotoMap(D_80241620_A46F50, 3);
    sleep 100;
});

Script N(script_802412F4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    InterpPlayerYaw(225, 0);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcYaw(0xFFFFFFFC, 270);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamPitch(0, 18.5, -3.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_MAP_VAR(10) = 300;
    SI_MAP_VAR(11) = 180;
    spawn N(script_80240A20);
    sleep 2;
    PlaySound(380);
    spawn {
        MakeLerp(300, 0, 120, 4);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 75;
        PlaySound(1404);
        PlaySound(8353);
        MakeLerp(0, 0xFFFFFED4, 60, 2);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
    }
    sleep 60;
    loop 215 {
        sleep 1;
        func_80240310_A45C40();
        if (SI_VAR(8) == 1) {
            break;
        }
    }
    PlaySound(1404);
    GotoMap(D_80241628_A46F58, 1);
    sleep 100;
});

s32 pad_001608[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241610_A46F40

// rodata: D_80241618_A46F48

// rodata: D_80241620_A46F50

// rodata: D_80241628_A46F58

