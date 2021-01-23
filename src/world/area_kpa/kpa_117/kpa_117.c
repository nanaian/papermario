#include "kpa_117.h"

Script N(script_80240050);
s32 pad_0000B8[2];
Script N(script_802400C0);
Script N(script_ExitWalk_802400D0);
Script N(script_8024012C);
Script N(main);
s32 pad_00022C[1];
const char D_80240230_AA23B0[9]; // "kpa_116"
s32 pad_000238[2];

EntryList N(entryList) = {
    { -210.0f, 0.0f, 100.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190185,
};

Script N(script_80240050) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(6);
    }
});

s32 pad_0000B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802400C0) = SCRIPT({

});

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240230_AA23B0, 1);
    sleep 100;
});

Script N(script_8024012C) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 11;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_802400C0);
    SI_VAR(0) = N(script_8024012C);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80240050);
});

s32 pad_00022C[] = {
    0x00000000,
};

// rodata: D_80240230_AA23B0

s32 pad_000238[] = {
    0x00000000, 0x00000000,
};

