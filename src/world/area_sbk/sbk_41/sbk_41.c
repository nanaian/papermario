#include "sbk_41.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400C0);
Script N(script_ExitWalk_8024011C);
Script N(script_ExitWalk_80240178);
Script N(script_ExitWalk_802401D4);
Script N(script_80240230);
Script N(main);
s32 pad_0003BC[1];
s32 N(tweesterPath_802403C0)[13];
s32 N(tweesterPathList_802403F4)[2];
Script N(script_802403FC);
Script N(script_MakeEntities);
s32 pad_000494[3];
const char D_802404A0_94C4E0[8]; // "sbk_40"
const char D_802404A8_94C4E8[8]; // "sbk_42"
const char D_802404B0_94C4F0[8]; // "sbk_31"
const char D_802404B8_94C4F8[8]; // "sbk_51"
const char D_802404C0_94C500[8]; // "sbk_32"
s32 pad_0004C8[2];

// text: func_80240000_94C040

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
    .tattle = 0x19007F,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802404A0_94C4E0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802404A8_94C4E8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240178) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802404B0_94C4F0, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802404B8_94C4F8, 2);
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
    func_80240000_94C040();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240230);
    spawn EnterWalk;
});

s32 pad_0003BC[] = {
    0x00000000,
};

s32 N(tweesterPath_802403C0)[] = {
    0xFFFFFFBF, 0x00000000, 0x000000D9, 0xFFFFFEFA, 0x00000000, 0xFFFFFFC0, 0x00000039, 0x00000000,
    0xFFFFFEE2, 0x00000147, 0x00000000, 0x00000008, 0x80000001,
};

s32 N(tweesterPathList_802403F4)[] = {
    N(tweesterPath_802403C0), 0xFFFFFFFF,
};

Script N(script_802403FC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    GotoMap(D_802404C0_94C500, 4);
    sleep 100;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802BCA74, 327, 0, 8, 0, N(tweesterPathList_802403F4), 0x80000000);
    AssignScript(N(script_802403FC));
});

s32 pad_000494[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802404A0_94C4E0

// rodata: D_802404A8_94C4E8

// rodata: D_802404B0_94C4F0

// rodata: D_802404B8_94C4F8

// rodata: D_802404C0_94C500

s32 pad_0004C8[] = {
    0x00000000, 0x00000000,
};
