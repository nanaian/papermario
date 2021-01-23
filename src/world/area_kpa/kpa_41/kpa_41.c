#include "kpa_41.h"

Script N(script_80240080);
s32 pad_0000E8[2];
Script N(script_ExitWalk_802400F0);
Script N(script_ExitWalk_8024014C);
Script N(script_ExitWalk_80240238);
Script N(script_ExitWalk_80240294);
Script N(script_8024039C);
Script N(script_EnterWalk_8024041C);
Script N(main);
s32 pad_000534[3];
const char D_80240540_A609B0[8]; // "kpa_40"
const char D_80240548_A609B8[8]; // "kpa_41"
const char D_80240550_A609C0[9]; // "kpa_102"
s32 pad_000558[2];

EntryList N(entryList) = {
    { -340.0f, 0.0f, -70.0f, 90.0f },
    { 340.0f, 0.0f, -70.0f, 270.0f },
    { 340.0f, 119.0f, -230.0f, 270.0f },
    { -340.0f, 119.0f, -230.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190175,
};

Script N(script_80240080) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(7);
    }
});

s32 pad_0000E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802400F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240540_A609B0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024014C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    match SI_AREA_VAR(11) {
        1, 2, 4 {
            SI_AREA_VAR(11) += 1;
            GotoMap(D_80240548_A609B8, 0);
        }
        0, 3, 5 {
            GotoMap(D_80240540_A609B0, 3);
        }
    }
    sleep 100;
});

Script N(script_ExitWalk_80240238) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240540_A609B0, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240294) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    match SI_AREA_VAR(11) {
        == 5 {
            SI_AREA_VAR(11) = 0;
            GotoMap(D_80240550_A609C0, 0);
        }
        == 3 {
            SI_AREA_VAR(11) += 1;
            GotoMap(D_80240548_A609B8, 3);
        }
        0, 1, 2, 4 {
            GotoMap(D_80240540_A609B0, 3);
        }
    }
    sleep 100;
});

Script N(script_8024039C) = SCRIPT({
    bind N(script_ExitWalk_802400F0) to 0x80000 12;
    bind N(script_ExitWalk_8024014C) to 0x80000 17;
    bind N(script_ExitWalk_80240238) to 0x80000 22;
    bind N(script_ExitWalk_80240294) to 0x80000 27;
});

Script N(script_EnterWalk_8024041C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 2 {
            SI_AREA_VAR(11) = 5;
        } else {
        }
    }
    SI_VAR(0) = N(script_8024039C);
    spawn EnterWalk;
    sleep 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_EnterWalk_8024041C);
    spawn N(script_80240080);
});

s32 pad_000534[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240540_A609B0

// rodata: D_80240548_A609B8

// rodata: D_80240550_A609C0

s32 pad_000558[] = {
    0x00000000, 0x00000000,
};
