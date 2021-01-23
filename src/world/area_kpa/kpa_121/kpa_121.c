#include "kpa_121.h"

Script N(script_80240060);
s32 pad_0000C8[2];
Script N(script_ExitDoubleDoor_802400D0);
Script N(script_ExitSingleDoor_80240174);
Script N(script_80240240);
Script N(script_EnterSingleDoor_80240288);
Script N(main);
s32 pad_00041C[1];
const char D_80240420_AA2D10[8]; // "kpa_83"
const char D_80240428_AA2D18[8]; // "osr_02"

EntryList N(entryList) = {
    { -373.0f, -240.0f, 100.0f, 90.0f },
    { 465.0f, 0.0f, 95.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190188,
};

Script N(script_80240060) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(7);
    }
});

s32 pad_0000C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_802400D0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 16;
    SI_VAR(2) = 46;
    SI_VAR(3) = 48;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240420_AA2D10, 1);
    sleep 100;
});

Script N(script_ExitSingleDoor_80240174) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    if (SI_SAVE_VAR(0) < 95) {
        SI_SAVE_VAR(0) = 95;
    }
    SI_VAR(0) = 1;
    SI_VAR(1) = 13;
    SI_VAR(2) = 43;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80240428_AA2D18, 0);
    sleep 100;
});

Script N(script_80240240) = SCRIPT({
    bind N(script_ExitDoubleDoor_802400D0) to TriggerFlag_WALL_INTERACT 17;
    bind N(script_ExitSingleDoor_80240174) to TriggerFlag_WALL_INTERACT 13;
});

Script N(script_EnterSingleDoor_80240288) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(2) = 48;
            SI_VAR(3) = 46;
            spawn EnterDoubleDoor;
            spawn N(script_80240240);
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 43;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
            spawn N(script_80240240);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_80240060);
    spawn N(script_EnterSingleDoor_80240288);
    sleep 1;
});

s32 pad_00041C[] = {
    0x00000000,
};

// rodata: D_80240420_AA2D10

// rodata: D_80240428_AA2D18

