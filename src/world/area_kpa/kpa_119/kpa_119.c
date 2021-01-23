#include "kpa_119.h"

Script N(script_80240050);
s32 pad_0000B8[2];
Script N(script_802400C0);
s32 pad_0000F4[3];
Script N(script_ExitWalk_80240100);
Script N(script_8024015C);
Script N(main);
s32 pad_000274[3];
const char D_80240280_AA28E0[9]; // "kpa_118"
s32 pad_000288[2];

EntryList N(entryList) = {
    { 6.0f, 0.0f, 100.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190187,
};

Script N(script_80240050) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(6);
    }
});

s32 pad_0000B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802400C0) = SCRIPT({
    MakeItemEntity(26, 0xFFFFFF9C, 20, 100, 0, SI_SAVE_FLAG(1584));
});

s32 pad_0000F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240100) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240280_AA28E0, 1);
    sleep 100;
});

Script N(script_8024015C) = SCRIPT({
    bind N(script_ExitWalk_80240100) to 0x80000 11;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_802400C0);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    SI_VAR(0) = N(script_8024015C);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80240050);
});

s32 pad_000274[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240280_AA28E0

s32 pad_000288[] = {
    0x00000000, 0x00000000,
};
