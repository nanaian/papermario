#include "sbk_23.h"

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
const char D_802404A0_93AC00[8]; // "sbk_22"
const char D_802404A8_93AC08[8]; // "sbk_24"
const char D_802404B0_93AC10[8]; // "sbk_13"
const char D_802404B8_93AC18[8]; // "sbk_33"
const char D_802404C0_93AC20[8]; // "sbk_14"
s32 pad_0004C8[2];

// text: func_80240000_93A760

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
    .tattle = 0x190072,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802404A0_93AC00, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802404A8_93AC08, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240178) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802404B0_93AC10, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802404B8_93AC18, 2);
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
    func_80240000_93A760();
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
    GotoMap(D_802404C0_93AC20, 4);
    sleep 100;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BCA74, 327, 0, 8, 0, N(tweesterPathList_802403F4), 0x80000000);
    AssignScript(N(script_802403FC));
});

s32 pad_000494[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802404A0_93AC00

// rodata: D_802404A8_93AC08

// rodata: D_802404B0_93AC10

// rodata: D_802404B8_93AC18

// rodata: D_802404C0_93AC20

s32 pad_0004C8[] = {
    0x00000000, 0x00000000,
};
