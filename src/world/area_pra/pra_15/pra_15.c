#include "pra_15.h"

s32 pad_000018[2];
Script N(script_80240090);
s32 pad_0000CC[1];
Script N(script_ExitWalk_802400D0);
Script N(script_8024012C);
Script N(script_EnterWalk_80240158);
Script N(main);
s32 pad_0002B4[3];
Script N(script_802402C0);
s32 pad_0002F4[3];
const char D_80240300_D69B10[8]; // "pra_01"
s32 pad_000308[2];

// text: func_Init_D69810

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_D69830

EntryList N(entryList) = {
    { 487.0f, -60.0f, 106.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190142,
};

Script N(script_80240090) = SCRIPT({
    SetMusicTrack(0, 59, 0, 8);
    UseDoorSounds(0);
});

s32 pad_0000CC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240300_D69B10, 3);
    sleep 100;
});

Script N(script_8024012C) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 2;
});

Script N(script_EnterWalk_80240158) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_8024012C);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_802402C0);
    ModifyColliderFlags(3, 8, 8);
    ModifyColliderFlags(3, 2, 8);
    func_80240020_D69830();
    spawn N(script_EnterWalk_80240158);
    sleep 1;
    spawn N(script_80240090);
});

s32 pad_0002B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802402C0) = SCRIPT({
    MakeItemEntity(348, 395, 0xFFFFFFC4, 120, 17, SI_SAVE_FLAG(1506));
});

s32 pad_0002F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240300_D69B10

s32 pad_000308[] = {
    0x00000000, 0x00000000,
};
