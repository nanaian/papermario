#include "sbk_21.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400C0);
Script N(script_ExitWalk_8024011C);
Script N(script_ExitWalk_80240178);
Script N(script_ExitWalk_802401D4);
Script N(script_80240230);
Script N(main);
const char D_802403B0_939910[8]; // "sbk_20"
const char D_802403B8_939918[8]; // "sbk_22"
const char D_802403C0_939920[8]; // "sbk_11"
const char D_802403C8_939928[8]; // "sbk_31"

// text: func_80240000_939560

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
    .tattle = 0x190070,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802403B0_939910, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802403B8_939918, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240178) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802403C0_939920, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802403C8_939928, 2);
    sleep 100;
});

Script N(script_80240230) = SCRIPT({
    bind N(script_ExitWalk_802400C0) to 0x80000 9;
    bind N(script_ExitWalk_8024011C) to 0x80000 5;
    bind N(script_ExitWalk_80240178) to 0x80000 3;
    bind N(script_ExitWalk_802401D4) to 0x80000 7;
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
    func_80240000_939560();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240230);
    spawn EnterWalk;
});

// rodata: D_802403B0_939910

// rodata: D_802403B8_939918

// rodata: D_802403C0_939920

// rodata: D_802403C8_939928
