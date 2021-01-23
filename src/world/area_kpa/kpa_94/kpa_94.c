#include "kpa_94.h"

Script N(script_80240060);
s32 pad_0000C8[2];
Script N(script_ExitWalk_802400D0);
Script N(script_ExitWalk_8024012C);
Script N(script_80240188);
Script N(main);
const char D_802402B0_A8CA70[8]; // "kpa_95"
const char D_802402B8_A8CA78[8]; // "kpa_33"

EntryList N(entryList) = {
    { -270.0f, -240.0f, 100.0f, 90.0f },
    { 470.0f, 0.0f, 100.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190179,
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

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802402B0_A8CA70, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024012C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802402B8_A8CA78, 0);
    sleep 100;
});

Script N(script_80240188) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 15;
    bind N(script_ExitWalk_8024012C) to 0x80000 11;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    EnableModel(41, 0);
    SI_VAR(0) = N(script_80240188);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80240060);
});

// rodata: D_802402B0_A8CA70

// rodata: D_802402B8_A8CA78

