#include "kzn_05.h"

s32 pad_00030C[1];
Script N(script_UpdateTexturePan_80240370);
Script N(script_8024040C);
Script N(script_80240528);
Script N(script_ExitWalk_80240644);
Script N(script_ExitWalk_802406A0);
Script N(script_802406FC);
Script N(main);
s32 pad_000834[3];
const char D_80240840_C6C910[8]; // "kzn_06"
const char D_80240848_C6C918[8]; // "kzn_03"

// text: func_80240000_C6C0D0

// text: func_80240124_C6C1F4

s32 pad_00030C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -430.0f, -259.0f, 10.0f, 90.0f },
    { 450.0f, 0.0f, 10.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190107,
};

Script N(script_UpdateTexturePan_80240370) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C6C0D0();
                    return;
                }
            }
        }
    }
    func_80240124_C6C1F4();
});

Script N(script_8024040C) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 3);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 600;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240370);
    }
});

Script N(script_80240528) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 4);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 500;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240370);
    }
});

Script N(script_ExitWalk_80240644) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240840_C6C910, 0);
    sleep 100;
});

Script N(script_ExitWalk_802406A0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240848_C6C918, 3);
    sleep 100;
});

Script N(script_802406FC) = SCRIPT({
    bind N(script_ExitWalk_80240644) to 0x80000 9;
    bind N(script_ExitWalk_802406A0) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0004);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_VAR(0) = N(script_802406FC);
    spawn EnterWalk;
    sleep 1;
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    SI_VAR(0) = 22;
    spawn N(script_8024040C);
});

s32 pad_000834[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240840_C6C910

// rodata: D_80240848_C6C918
