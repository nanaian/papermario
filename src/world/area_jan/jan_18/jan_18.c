#include "jan_18.h"

Script N(script_80240060);
Script N(script_ExitWalk_80240080);
Script N(script_ExitWalk_802400DC);
Script N(script_80240138);
Script N(main);
s32 pad_000278[2];
Script N(script_80240280);
s32 pad_0002B4[3];
const char D_802402C0_B83E50[8]; // "jan_17"
const char D_802402C8_B83E58[8]; // "jan_19"

EntryList N(entryList) = {
    { 25.0f, 180.0f, 205.0f, 172.0f },
    { 20.0f, 345.0f, -210.0f, 6.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190100,
};

Script N(script_80240060) = SCRIPT({
    PlayAmbientSounds(3);
});

Script N(script_ExitWalk_80240080) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802402C0_B83E50, 1);
    sleep 100;
});

Script N(script_ExitWalk_802400DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802402C8_B83E58, 0);
    sleep 100;
});

Script N(script_80240138) = SCRIPT({
    bind N(script_ExitWalk_80240080) to 0x80000 0;
    bind N(script_ExitWalk_802400DC) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_80240280);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80240138);
    spawn EnterWalk;
    await N(script_80240060);
});

s32 pad_000278[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240280) = SCRIPT({
    MakeItemEntity(310, 0xFFFFFF1A, 460, 100, 17, SI_SAVE_FLAG(1245));
});

s32 pad_0002B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802402C0_B83E50

// rodata: D_802402C8_B83E58

