#include "sbk_45.h"

s32 pad_000038[2];
Script N(script_ExitWalk_802400D0);
Script N(script_ExitWalk_8024012C);
Script N(script_ExitWalk_80240188);
Script N(script_ExitWalk_802401E4);
Script N(script_80240240);
Script N(script_EnterWalk_802402C0);
Script N(main);
s32 pad_000438[2];
Script N(script_MakeEntities);
const char D_802404E0_94E980[8]; // "sbk_44"
const char D_802404E8_94E988[8]; // "sbk_46"
const char D_802404F0_94E990[8]; // "sbk_35"
const char D_802404F8_94E998[8]; // "sbk_55"

// text: func_80240000_94E4A0

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
    .tattle = 0x190083,
};

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802404E0_94E980, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024012C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802404E8_94E988, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240188) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802404F0_94E990, 3);
    sleep 100;
});

Script N(script_ExitWalk_802401E4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802404F8_94E998, 2);
    sleep 100;
});

Script N(script_80240240) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 10;
    bind N(script_ExitWalk_8024012C) to 0x80000 6;
    bind N(script_ExitWalk_80240188) to 0x80000 4;
    bind N(script_ExitWalk_802401E4) to 0x80000 8;
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
    func_80240000_94E4A0();
    SetMusicTrack(0, 23, 0, 8);
    spawn N(script_EnterWalk_802402C0);
    sleep 1;
});

s32 pad_000438[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA0C4, 0xFFFFFF01, 55, 0xFFFFFF6F, 0, 0x80000000);
    MakeEntity(0x802EA0C4, 0xFFFFFE89, 80, 0xFFFFFF6F, 0, 0x80000000);
    MakeItemEntity(146, 0xFFFFFE89, 105, 0xFFFFFF6F, 13, SI_SAVE_FLAG(835));
    MakeItemEntity(284, 193, 79, 0xFFFFFEA7, 17, SI_SAVE_FLAG(834));
});

// rodata: D_802404E0_94E980

// rodata: D_802404E8_94E988

// rodata: D_802404F0_94E990

// rodata: D_802404F8_94E998

