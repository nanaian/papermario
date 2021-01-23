#include "sbk_50.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400C0);
Script N(script_ExitWalk_8024011C);
Script N(script_ExitWalk_80240178);
Script N(script_802401D4);
Script N(main);
s32 pad_000338[2];
const char D_80240340_950950[8]; // "sbk_51"
const char D_80240348_950958[8]; // "sbk_40"
const char D_80240350_950960[8]; // "sbk_60"
s32 pad_000358[2];

// text: func_80240000_950610

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190085,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240340_950950, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240348_950958, 3);
    sleep 100;
});

Script N(script_ExitWalk_80240178) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240350_950960, 2);
    sleep 100;
});

Script N(script_802401D4) = SCRIPT({
    bind N(script_ExitWalk_802400C0) to 0x80000 5;
    bind N(script_ExitWalk_8024011C) to 0x80000 3;
    bind N(script_ExitWalk_80240178) to 0x80000 7;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 10;
    SetSpriteShading(-1);
    if (SI_SAVE_VAR(0) == 0xFFFFFFC1) {
        DisablePulseStone(0);
    }
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    func_80240000_950610();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_802401D4);
    spawn EnterWalk;
});

s32 pad_000338[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240340_950950

// rodata: D_80240348_950958

// rodata: D_80240350_950960

s32 pad_000358[] = {
    0x00000000, 0x00000000,
};

