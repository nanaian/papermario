#include "sbk_33.h"

s32 pad_000038[2];
s32 N(tweesterPath_802400C0)[13];
s32 N(tweesterPathList_802400F4)[2];
Script N(script_802400FC);
Script N(script_MakeEntities);
s32 pad_0001CC[1];
Script N(script_ExitWalk_802401D0);
Script N(script_ExitWalk_8024022C);
Script N(script_ExitWalk_80240288);
Script N(script_ExitWalk_802402E4);
Script N(script_80240340);
Script N(main);
s32 pad_0004CC[1];
const char D_802404D0_945EA0[8]; // "sbk_24"
const char D_802404D8_945EA8[8]; // "sbk_32"
const char D_802404E0_945EB0[8]; // "sbk_34"
const char D_802404E8_945EB8[8]; // "sbk_23"
const char D_802404F0_945EC0[8]; // "sbk_43"
s32 pad_0004F8[2];

// text: func_80240000_9459D0

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
    .tattle = 0x19007A,
};

s32 N(tweesterPath_802400C0)[] = {
    0xFFFFFFBF, 0x00000000, 0x000000D9, 0xFFFFFEFA, 0x00000000, 0xFFFFFFC0, 0x00000039, 0x00000000,
    0xFFFFFEE2, 0x00000147, 0x00000000, 0x00000008, 0x80000001,
};

s32 N(tweesterPathList_802400F4)[] = {
    N(tweesterPath_802400C0), 0xFFFFFFFF,
};

Script N(script_802400FC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    GotoMap(D_802404D0_945EA0, 4);
    sleep 100;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 0, 0, 225, 0, 4, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(796));
    MakeEntity(0x802BCA74, 327, 0, 8, 0, N(tweesterPathList_802400F4), 0x80000000);
    AssignScript(N(script_802400FC));
});

s32 pad_0001CC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802401D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802404D8_945EA8, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024022C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802404E0_945EB0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240288) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802404E8_945EB8, 3);
    sleep 100;
});

Script N(script_ExitWalk_802402E4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802404F0_945EC0, 2);
    sleep 100;
});

Script N(script_80240340) = SCRIPT({
    bind N(script_ExitWalk_802401D0) to 0x80000 11;
    bind N(script_ExitWalk_8024022C) to 0x80000 7;
    bind N(script_ExitWalk_80240288) to 0x80000 5;
    bind N(script_ExitWalk_802402E4) to 0x80000 9;
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
    func_80240000_9459D0();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240340);
    spawn EnterWalk;
});

s32 pad_0004CC[] = {
    0x00000000,
};

// rodata: D_802404D0_945EA0

// rodata: D_802404D8_945EA8

// rodata: D_802404E0_945EB0

// rodata: D_802404E8_945EB8

// rodata: D_802404F0_945EC0

s32 pad_0004F8[] = {
    0x00000000, 0x00000000,
};

