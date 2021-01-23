#include "kkj_22.h"

Script N(script_80240060);
s32 pad_0000A4[3];
Script N(script_ExitDoubleDoor_802400B0);
Script N(script_ExitDoubleDoor_80240154);
Script N(script_EnterDoubleDoor_802401F8);
Script N(main);
s32 pad_00037C[1];
const char D_80240380_B02870[8]; // "kkj_13"
const char D_80240388_B02878[8]; // "kkj_23"

EntryList N(entryList) = {
    { -225.0f, 0.0f, -45.0f, 90.0f },
    { -395.0f, 300.0f, -115.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190017,
};

Script N(script_80240060) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 95) {
        SetMusicTrack(0, 102, 0, 8);
    }
});

s32 pad_0000A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_802400B0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 16;
    SI_VAR(3) = 18;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240380_B02870, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240154) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 34;
    SI_VAR(3) = 36;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240388_B02878, 0);
    sleep 100;
});

Script N(script_EnterDoubleDoor_802401F8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 16;
            SI_VAR(3) = 18;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 34;
            SI_VAR(3) = 36;
            await EnterDoubleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50006);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_80240060);
    UseDoorSounds(2);
    bind N(script_ExitDoubleDoor_802400B0) to TriggerFlag_WALL_INTERACT 2;
    bind N(script_ExitDoubleDoor_80240154) to TriggerFlag_WALL_INTERACT 7;
    spawn N(script_EnterDoubleDoor_802401F8);
});

s32 pad_00037C[] = {
    0x00000000,
};

// rodata: D_80240380_B02870

// rodata: D_80240388_B02878
