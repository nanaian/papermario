#include "sbk_14.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400D0);
Script N(script_ExitWalk_8024012C);
Script N(script_ExitWalk_80240188);
Script N(script_ExitWalk_802401E4);
Script N(script_80240240);
Script N(script_EnterWalk_802402C0);
Script N(main);
s32 pad_000438[2];
s32 N(tweesterPath_80240440)[13];
s32 N(tweesterPathList_80240474)[2];
Script N(script_8024047C);
Script N(script_MakeEntities);
s32 pad_0005B8[2];
const char D_802405C0_936CA0[8]; // "sbk_13"
const char D_802405C8_936CA8[8]; // "sbk_15"
const char D_802405D0_936CB0[8]; // "sbk_04"
const char D_802405D8_936CB8[8]; // "sbk_24"
const char D_802405E0_936CC0[8]; // "sbk_05"
s32 pad_0005E8[2];

// text: func_80240000_9366E0

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
    { 157.0f, 200.0f, -338.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19006C,
};

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802405C0_936CA0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024012C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802405C8_936CA8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240188) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802405D0_936CB0, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401E4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802405D8_936CB8, 2);
    sleep 100;
});

Script N(script_80240240) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 9;
    bind N(script_ExitWalk_8024012C) to 0x80000 5;
    bind N(script_ExitWalk_80240188) to 0x80000 3;
    bind N(script_ExitWalk_802401E4) to 0x80000 7;
});

Script N(script_EnterWalk_802402C0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            spawn N(script_80240240);
        }
        else {
            SI_VAR(0) = N(script_80240240);
            spawn EnterWalk;
        }
    }
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
    func_80240000_9366E0();
    SetMusicTrack(0, 23, 0, 8);
    spawn N(script_EnterWalk_802402C0);
    sleep 1;
});

s32 pad_000438[] = {
    0x00000000, 0x00000000,
};

s32 N(tweesterPath_80240440)[] = {
    0xFFFFFFBF, 0x00000000, 0x000000D9, 0xFFFFFEFA, 0x00000000, 0xFFFFFFC0, 0x00000039, 0x00000000,
    0xFFFFFEE2, 0x00000147, 0x00000000, 0x00000008, 0x80000001,
};

s32 N(tweesterPathList_80240474)[] = {
    N(tweesterPath_80240440), 0xFFFFFFFF,
};

Script N(script_8024047C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    GotoMap(D_802405E0_936CC0, 4);
    sleep 100;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802BCA74, 327, 0, 8, 0, N(tweesterPathList_80240474), 0x80000000);
    AssignScript(N(script_8024047C));
    MakeEntity(D_802EA0E8, 0, 60, 0xFFFFFF9C, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(817));
    MakeEntity(D_802EA564, 0xFFFFFF10, 0, 215, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(800));
    MakeEntity(D_802EA564, 220, 0, 150, 0, 164, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(801));
});

s32 pad_0005B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802405C0_936CA0

// rodata: D_802405C8_936CA8

// rodata: D_802405D0_936CB0

// rodata: D_802405D8_936CB8

// rodata: D_802405E0_936CC0

s32 pad_0005E8[] = {
    0x00000000, 0x00000000,
};
