#include "sbk_10.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400C0);
Script N(script_ExitWalk_8024011C);
Script N(script_ExitWalk_80240178);
Script N(script_802401D4);
Script N(main);
s32 pad_000344[3];
Script N(script_MakeEntities);
s32 pad_000398[2];
const char D_802403A0_934020[8]; // "sbk_11"
const char D_802403A8_934028[8]; // "sbk_00"
const char D_802403B0_934030[8]; // "sbk_20"
s32 pad_0003B8[2];

// text: func_80240000_933C80

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
    .tattle = 0x190068,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802403A0_934020, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802403A8_934028, 3);
    sleep 100;
});

Script N(script_ExitWalk_80240178) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802403B0_934030, 2);
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
    await N(script_MakeEntities);
    func_80240000_933C80();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_802401D4);
    spawn EnterWalk;
});

s32 pad_000344[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA588, 315, 93, 60, 0, 130, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(799));
});

s32 pad_000398[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802403A0_934020

// rodata: D_802403A8_934028

// rodata: D_802403B0_934030

s32 pad_0003B8[] = {
    0x00000000, 0x00000000,
};
