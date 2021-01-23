#include "sbk_43.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400C0);
Script N(script_ExitWalk_8024011C);
Script N(script_ExitWalk_80240178);
Script N(script_ExitWalk_802401D4);
Script N(script_80240230);
Script N(main);
s32 pad_0003BC[1];
Script N(script_MakeEntities);
s32 pad_000408[2];
const char D_80240410_94D580[8]; // "sbk_42"
const char D_80240418_94D588[8]; // "sbk_44"
const char D_80240420_94D590[8]; // "sbk_33"
const char D_80240428_94D598[8]; // "sbk_53"

// text: func_80240000_94D170

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
    .tattle = 0x190081,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240410_94D580, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240418_94D588, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240178) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240420_94D590, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240428_94D598, 2);
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
    func_80240000_94D170();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240230);
    spawn EnterWalk;
});

s32 pad_0003BC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA564, 0, 0, 0, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(811));
});

s32 pad_000408[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240410_94D580

// rodata: D_80240418_94D588

// rodata: D_80240420_94D590

// rodata: D_80240428_94D598
