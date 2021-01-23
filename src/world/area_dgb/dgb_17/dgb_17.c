#include "dgb_17.h"

Script N(script_80240060);
s32 pad_0000F8[2];
Script N(script_ExitDoubleDoor_80240100);
Script N(script_ExitDoubleDoor_802401B4);
Script N(script_80240268);
Script N(script_EnterDoubleDoor_802402B0);
Script N(main);
Script N(script_MakeEntities);
s32 pad_0004C8[2];
const char D_802404D0_C55F30[8]; // "dgb_15"
const char D_802404D8_C55F38[8]; // "dgb_01"

EntryList N(entryList) = {
    { -570.0f, 0.0f, 180.0f, 90.0f },
    { -180.0f, 0.0f, 180.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900D1,
};

Script N(script_80240060) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        } else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_0000F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80240100) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 7;
    SI_VAR(2) = 14;
    SI_VAR(3) = 16;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802404D0_C55F30, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802401B4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 11;
    SI_VAR(2) = 21;
    SI_VAR(3) = 19;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802404D8_C55F38, 5);
    sleep 100;
});

Script N(script_80240268) = SCRIPT({
    bind N(script_ExitDoubleDoor_80240100) to TriggerFlag_WALL_INTERACT 7;
    bind N(script_ExitDoubleDoor_802401B4) to TriggerFlag_WALL_INTERACT 11;
});

Script N(script_EnterDoubleDoor_802402B0) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240268);
        return;
    }
    UseDoorSounds(3);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 14;
            SI_VAR(3) = 16;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 21;
            SI_VAR(3) = 19;
            await EnterDoubleDoor;
        }
    }
    spawn N(script_80240268);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80240060);
    spawn N(script_EnterDoubleDoor_802402B0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0xFFFFFED4, 60, 75, 0, 0x80000000);
    MakeEntity(0x802EA7E0, 0xFFFFFE3E, 60, 75, 0, 0x80000000);
});

s32 pad_0004C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802404D0_C55F30

// rodata: D_802404D8_C55F38
