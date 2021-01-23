#include "kkj_26.h"

s32 pad_000028[2];
Script N(script_802400B0);
Script N(script_802401C4);
Script N(script_802401F0);
Script N(main);
s32 pad_0003D4[3];
Script N(script_802403E0);
Script N(script_80240640);
s32 pad_000918[2];
Script N(script_80240920);
Script N(script_80240AB8);
Script N(script_80240B78);
const char D_80240C30_B13D50[8]; // "hos_00"
const char D_80240C38_B13D58[8]; // "kkj_14"
const char D_80240C40_B13D60[8]; // "kkj_14"
const char D_80240C48_B13D68[8]; // "kkj_26"

// text: func_80240000_B13120

s32 pad_000028[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 472.0f, 30.0f, -26.0f, 90.0f },
    { 540.0f, 30.0f, -20.0f, 90.0f },
    { 400.0f, 30.0f, -20.0f, 90.0f },
    { 483.0f, 30.0f, 8.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19001B,
};

Script N(script_802400B0) = SCRIPT({
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_80240000_B13120();
    PlaySound(220);
    GotoMapSpecial(D_80240C30_B13D50, 1, 12);
    sleep 100;
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 38;
    SI_VAR(3) = 35;
    SI_VAR(4) = 39;
    SI_VAR(5) = 36;
    spawn func_80285E9C;
    sleep 17;
    GotoMap(D_80240C38_B13D58, 1);
    sleep 100;
});

Script N(script_802401C4) = SCRIPT({
    bind func_80240100 to TriggerFlag_WALL_INTERACT 2;
});

Script N(script_802401F0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 38;
            SI_VAR(3) = 35;
            SI_VAR(4) = 39;
            SI_VAR(5) = 36;
            await func_80285EC4;
            spawn N(script_802401C4);
        }
        == 1 {
            spawn N(script_80240640);
        }
        == 2 {
            spawn N(script_802403E0);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x5000A);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SI_SAVE_VAR(0) = 88;
    }
    UseDoorSounds(5);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        await N(script_80240B78);
        return;
    }
    spawn N(script_802401F0);
    sleep 1;
});

s32 pad_0003D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802403E0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetMusicTrack(0, 115, 1, 8);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFE0C, 0);
    RotateModel(38, 80, 0, -1, 0);
    RotateModel(35, 80, 0, 1, 0);
    RotateModel(39, 80, 0, -1, 0);
    RotateModel(36, 80, 0, 1, 0);
    UseSettingsFrom(0, 550, 30, 0xFFFFFFEC);
    SetCamDistance(0, 200.0);
    SetCamPitch(0, 17.5, -10.0);
    SetCamPosB(0, 570.0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 50;
    func_802D1270(550, 0xFFFFFFEC, 2.0);
    sleep 30;
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140032);
    FadeOutMusic(0, 4000);
    ResetCam(0, 1.0);
    await N(script_802400B0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80240640) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetMusicTrack(0, 115, 1, 8);
    InterpPlayerYaw(90, 0);
    SetNpcPos(0xFFFFFFFC, 500, 50, 0);
    SetNpcYaw(0xFFFFFFFC, 90);
    sleep 30;
    UseSettingsFrom(0, 500, 30, 0xFFFFFFEC);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 15.0, -7.0);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14015E);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x14015F);
    PlayerFaceNpc(0xFFFFFFFC, 5);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140160);
    sleep 10;
    EnablePartnerAI();
    func_802D1270(480, 0xFFFFFFEC, 2.0);
    SetPlayerAnimation(0xC000B);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 38;
    SI_VAR(3) = 35;
    SI_VAR(4) = 39;
    SI_VAR(5) = 36;
    spawn func_80285E9C;
    sleep 17;
    GotoMap(D_80240C40_B13D60, 10);
    sleep 100;
    DisablePlayerInput(0);
});

s32 pad_000918[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240920) = SCRIPT({
    EnableStatusMenu(0);
    UseSettingsFrom(0, 550, 30, 0xFFFFFFEC);
    SetCamDistance(0, 200.0);
    SetCamPitch(0, 17.5, -10.0);
    SetCamPosB(0, 570.0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 60;
    DemoJoystickXY(10, 0);
    sleep 40;
    DemoJoystickXY(0, 0);
    sleep 10;
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    sleep 20;
    ResetCam(0, 1.0);
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80240C48_B13D68, 2, 7);
    sleep 110;
});

Script N(script_80240AB8) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80240C48_B13D68, 2, 7);
    sleep 100;
});

Script N(script_80240B78) = SCRIPT({
    RotateModel(38, 80, 0, -1, 0);
    RotateModel(35, 80, 0, 1, 0);
    RotateModel(39, 80, 0, -1, 0);
    RotateModel(36, 80, 0, 1, 0);
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_80240AB8);
    spawn N(script_80240920);
});

// rodata: D_80240C30_B13D50

// rodata: D_80240C38_B13D58

// rodata: D_80240C40_B13D60

// rodata: D_80240C48_B13D68
