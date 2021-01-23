#include "sbk_52.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400C0);
Script N(script_ExitWalk_8024011C);
Script N(script_ExitWalk_80240178);
Script N(script_ExitWalk_802401D4);
Script N(script_80240230);
Script N(main);
s32 pad_0003BC[1];
Script N(script_MakeEntities);
s32 pad_00044C[1];
const char D_80240450_951AC0[8]; // "sbk_51"
const char D_80240458_951AC8[8]; // "sbk_53"
const char D_80240460_951AD0[8]; // "sbk_42"
const char D_80240468_951AD8[8]; // "sbk_62"

// text: func_80240000_951670

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
    .tattle = 0x190087,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240450_951AC0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240458_951AC8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240178) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240460_951AD0, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240468_951AD8, 2);
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
    await N(script_MakeEntities);
    func_80240000_951670();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240230);
    spawn EnterWalk;
});

s32 pad_0003BC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA0E8, 0, 60, 0xFFFFFF9C, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(821));
    MakeEntity(0x802EA0C4, 80, 60, 270, 0, 0x80000000);
    MakeEntity(0x802EA0C4, 0xFFFFFF2E, 60, 165, 0, 0x80000000);
});

s32 pad_00044C[] = {
    0x00000000,
};

// rodata: D_80240450_951AC0

// rodata: D_80240458_951AC8

// rodata: D_80240460_951AD0

// rodata: D_80240468_951AD8

