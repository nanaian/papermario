#include "kpa_40.h"

Script N(script_80240080);
s32 pad_0000E8[2];
Script N(script_ExitDoubleDoor_802400F0);
Script N(script_ExitWalk_80240194);
Script N(script_ExitWalk_802401F0);
Script N(script_8024025C);
Script N(script_EnterWalk_802402C0);
Script N(main);
const char D_80240410_A60450[8]; // "kpa_52"
const char D_80240418_A60458[8]; // "kpa_40"
const char D_80240420_A60460[8]; // "kpa_41"
s32 pad_000428[2];

EntryList N(entryList) = {
    { -490.0f, 0.0f, -80.0f, 90.0f },
    { 490.0f, 0.0f, -30.0f, 270.0f },
    { 490.0f, 120.0f, -130.0f, 270.0f },
    { -430.0f, 133.0f, -80.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190174,
};

Script N(script_80240080) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(7);
    }
});

s32 pad_0000E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_802400F0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 9;
    SI_VAR(2) = 89;
    SI_VAR(3) = 87;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240410_A60450, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240194) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240418_A60458, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    SI_AREA_VAR(11) = 1;
    GotoMap(D_80240420_A60460, 3);
    sleep 100;
});

Script N(script_8024025C) = SCRIPT({
    bind N(script_ExitDoubleDoor_802400F0) to TriggerFlag_WALL_INTERACT 9;
    bind N(script_ExitWalk_80240194) to 0x80000 19;
    bind N(script_ExitWalk_802401F0) to 0x80000 14;
});

Script N(script_EnterWalk_802402C0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(2) = 89;
            SI_VAR(3) = 87;
            spawn EnterDoubleDoor;
            spawn N(script_8024025C);
        }
        else {
            SI_VAR(0) = N(script_8024025C);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_EnterWalk_802402C0);
    sleep 1;
    spawn N(script_80240080);
});

// rodata: D_80240410_A60450

// rodata: D_80240418_A60458

// rodata: D_80240420_A60460

s32 pad_000428[] = {
    0x00000000, 0x00000000,
};

