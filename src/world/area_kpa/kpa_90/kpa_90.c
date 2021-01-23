#include "kpa_90.h"

Script N(script_80240060);
s32 pad_0000C8[2];
Script N(script_ExitWalk_802400D0);
Script N(script_ExitWalk_8024012C);
Script N(script_80240188);
Script N(main);
s32 pad_000284[3];
const char D_80240290_A86A40[8]; // "kpa_91"
const char D_80240298_A86A48[8]; // "kpa_32"

EntryList N(entryList) = {
    { -470.0f, 0.0f, 100.0f, 90.0f },
    { 265.0f, -240.0f, 100.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19015B,
};

Script N(script_80240060) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(6);
    }
});

s32 pad_0000C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240290_A86A40, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024012C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240298_A86A48, 1);
    sleep 100;
});

Script N(script_80240188) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 14;
    bind N(script_ExitWalk_8024012C) to 0x80000 11;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_VAR(0) = N(script_80240188);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80240060);
});

s32 pad_000284[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240290_A86A40

// rodata: D_80240298_A86A48
