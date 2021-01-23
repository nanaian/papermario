#include "jan_19.h"

Script N(script_80240080);
Script N(script_ExitWalk_802400A0);
Script N(script_ExitWalk_802400FC);
Script N(script_80240158);
Script N(main);
s32 pad_0002A4[3];
Script N(script_MakeEntities);
s32 pad_000308[2];
const char D_80240310_B84170[8]; // "jan_18"
const char D_80240318_B84178[8]; // "jan_23"

// text: func_80240000_B83E60

EntryList N(entryList) = {
    { -220.0f, 0.0f, 10.0f, 90.0f },
    { 190.0f, 450.0f, 110.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190101,
};

Script N(script_80240080) = SCRIPT({
    ClearAmbientSounds(250);
});

Script N(script_ExitWalk_802400A0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240310_B84170, 1);
    sleep 100;
});

Script N(script_ExitWalk_802400FC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240318_B84178, 0);
    sleep 100;
});

Script N(script_80240158) = SCRIPT({
    bind N(script_ExitWalk_802400A0) to 0x80000 0;
    bind N(script_ExitWalk_802400FC) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(0x60001);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    func_80240000_B83E60();
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80240158);
    spawn EnterWalk;
    await N(script_80240080);
});

s32 pad_0002A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BC7AC, 0xFFFFFF66, 0, 0xFFFFFFEC, 150, 0x80000000);
    MakeEntity(0x802BC7AC, 145, 450, 50, 120, 0x80000000);
});

s32 pad_000308[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240310_B84170

// rodata: D_80240318_B84178
