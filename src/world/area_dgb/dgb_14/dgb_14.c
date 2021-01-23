#include "dgb_14.h"

Script N(script_80240060);
s32 pad_0000F8[2];
Script N(script_ExitDoubleDoor_80240100);
Script N(script_ExitDoubleDoor_802401B4);
Script N(script_EnterDoubleDoor_80240268);
Script N(main);
s32 pad_00047C[1];
Script N(script_MakeEntities);
s32 pad_0004C8[2];
const char D_802404D0_C4F500[8]; // "dgb_03"
const char D_802404D8_C4F508[8]; // "dgb_15"

EntryList N(entryList) = {
    { 575.0f, 0.0f, 180.0f, 270.0f },
    { 575.0f, 210.0f, 180.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900CE,
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
    SI_VAR(0) = 1;
    SI_VAR(1) = 14;
    SI_VAR(2) = 24;
    SI_VAR(3) = 22;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802404D0_C4F500, 3);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802401B4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 18;
    SI_VAR(2) = 19;
    SI_VAR(3) = 17;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802404D8_C4F508, 0);
    sleep 100;
});

Script N(script_EnterDoubleDoor_80240268) = SCRIPT({
    UseDoorSounds(3);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 24;
            SI_VAR(3) = 22;
            await EnterDoubleDoor;
        }
        == 1 {
            DisablePlayerInput(1);
            SI_VAR(2) = 19;
            SI_VAR(3) = 17;
            await EnterDoubleDoor;
            if (SI_AREA_FLAG(1) == 1) {
                sleep 5;
                SetPlayerAnimation(0x8001D);
                sleep 20;
                SetPlayerAnimation(0x10002);
            }
            DisablePlayerInput(0);
        }
    }
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
    bind N(script_ExitDoubleDoor_80240100) to TriggerFlag_WALL_INTERACT 14;
    bind N(script_ExitDoubleDoor_802401B4) to TriggerFlag_WALL_INTERACT 18;
    spawn N(script_EnterDoubleDoor_80240268);
});

s32 pad_00047C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 500, 60, 75, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1065));
});

s32 pad_0004C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802404D0_C4F500

// rodata: D_802404D8_C4F508
