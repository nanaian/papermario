#include "dgb_11.h"

s32 pad_00004C[1];
Script N(script_802400D0);
s32 pad_000168[2];
Script N(script_ExitSingleDoor_80240170);
Script N(script_EnterSingleDoor_80240224);
Script N(main);
s32 pad_00056C[1];
Script N(script_80240570);
Script N(script_80240600);
Script N(script_8024062C);
Script N(script_MakeEntities);
s32 pad_000AFC[1];
const char D_80240B00_C4DEE0[8]; // "dgb_02"
const char D_80240B08_C4DEE8[8]; // "dgb_10"

// text: func_80240000_C4D3E0

s32 pad_00004C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 450.0f, 0.0f, -40.0f, 0.0f },
    { 500.0f, 180.0f, -100.0f, 180.0f },
    { 500.0f, 180.0f, -250.0f, 180.0f },
    { 375.0f, 180.0f, -250.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900CB,
};

Script N(script_802400D0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_000168[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80240170) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 11;
    SI_VAR(2) = 21;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80240B00_C4DEE0, 3);
    sleep 100;
});

Script N(script_EnterSingleDoor_80240224) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(0);
            SI_VAR(2) = 21;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
            return;
        }
        == 1 {
            UseSettingsFrom(0, 500, 0, 0xFFFFFF9C);
            SetPanTarget(0, 500, 0, 0xFFFFFF9C);
            SI_VAR(3) = 1;
        }
        == 2 {
            UseSettingsFrom(0, 500, 75, 0xFFFFFF06);
            SetPanTarget(0, 500, 75, 0xFFFFFF06);
            SI_VAR(3) = 75;
        }
        == 3 {
            SetZoneEnabled(5, 0);
            UseSettingsFrom(0, 375, 0, 0xFFFFFF51);
            SetPanTarget(0, 375, 0, 0xFFFFFF51);
            SI_AREA_FLAG(2) = 1;
            SI_VAR(3) = 1;
        }
    }
    DisablePlayerInput(1);
    InterpPlayerYaw(180, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(1) <= SI_VAR(3)) {
            break;
        }
        sleep 1;
    }
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_802400D0);
    bind N(script_ExitSingleDoor_80240170) to TriggerFlag_WALL_INTERACT 11;
    spawn N(script_EnterSingleDoor_80240224);
});

s32 pad_00056C[] = {
    0x00000000,
};

Script N(script_80240570) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= SI_VAR(3)) {
        SI_VAR(1) = SI_VAR(3);
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80240600) = SCRIPT({
    PlayerJump(375, 270, 0xFFFFFF06, 20);
});

Script N(script_8024062C) = SCRIPT({
    if (SI_AREA_FLAG(3) == 1) {
        return;
    }
    SI_AREA_FLAG(3) = 1;
    DisablePlayerInput(1);
    SetZoneEnabled(5, 0);
    if (SI_AREA_FLAG(2) == 0) {
        if (SI_SAVE_FLAG(1054) == 0) {
            DisablePlayerPhysics(1);
            SetPlayerActionState(3);
            sleep 1;
            SI_VAR(3) = 500;
            SI_VAR(10) = spawn N(script_80240570);
            SetPlayerJumpscale(0.7001953125);
            SI_VAR(11) = spawn N(script_80240600);
            loop {
                sleep 1;
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(1) >= 165) {
                    break;
                }
            }
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPlayerPos(SI_VAR(0), 165, SI_VAR(2));
            kill SI_VAR(11);
            SetPlayerAnimation(0x80015);
            ShakeCam(0, 0, 20, 1.0);
            sleep 10;
            SetPlayerAnimation(0x10002);
            SetPlayerJumpscale(0.0);
            PlayerJump1(375, 25, 0xFFFFFF06, 10);
            func_80240000_C4D3E0();
            PlaySoundAtPlayer(8326, 0);
            SetPlayerJumpscale(0.7001953125);
            PlayerJump(375, 0, 0xFFFFFF51, 15);
            kill SI_VAR(10);
            SetPlayerActionState(0);
            sleep 2;
            SetZoneEnabled(5, 1);
            DisablePlayerPhysics(0);
            DisablePlayerInput(0);
            SI_AREA_FLAG(3) = 0;
        } else {
            DisablePlayerPhysics(1);
            SetPlayerActionState(3);
            sleep 1;
            spawn {
                sleep 8;
                GotoMap(D_80240B08_C4DEE8, 1);
                sleep 100;
            }
            SI_VAR(3) = 500;
            SI_VAR(10) = spawn N(script_80240570);
            SetPlayerJumpscale(0.7001953125);
            PlayerJump(375, 270, 0xFFFFFF06, 20);
            SI_AREA_FLAG(3) = 0;
        }
    } else {
        SetPlayerActionState(3);
        sleep 1;
        SI_VAR(3) = 25;
        SetPlayerJumpscale(0.7001953125);
        PlayerJump(375, 0, 0xFFFFFF51, 15);
        SI_AREA_FLAG(2) = 0;
        kill SI_VAR(10);
        SetPlayerActionState(0);
        sleep 2;
        SetZoneEnabled(5, 1);
        DisablePlayerInput(0);
        SI_AREA_FLAG(3) = 0;
    }
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(302, 250, 75, 0xFFFFFF9C, 17, SI_SAVE_FLAG(1055));
    MakeEntity(0x802EAA30, 375, 0, 0xFFFFFF06, 0, 0x80000000);
    AssignScript(N(script_8024062C));
    SI_MAP_VAR(0) = SI_VAR(0);
});

s32 pad_000AFC[] = {
    0x00000000,
};

// rodata: D_80240B00_C4DEE0

// rodata: D_80240B08_C4DEE8
