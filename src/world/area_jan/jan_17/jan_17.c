#include "jan_17.h"

Script N(script_80240080);
s32 pad_0000F4[3];
Script N(script_ExitWalk_80240100);
Script N(script_ExitWalk_8024015C);
Script N(script_802401B8);
Script N(main);
s32 pad_000358[2];
Script N(script_MakeEntities);
s32 pad_0003B8[2];
const char D_802403C0_B83B80[8]; // "jan_16"
const char D_802403C8_B83B88[8]; // "jan_18"

// text: func_80240000_B837C0

EntryList N(entryList) = {
    { -220.0f, 0.0f, 10.0f, 90.0f },
    { 190.0f, 450.0f, 110.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900FF,
};

Script N(script_80240080) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SetMusicTrack(0, 40, 0, 8);
        SI_AREA_FLAG(3) = 0;
    }
    ClearAmbientSounds(250);
});

s32 pad_0000F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240100) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802403C0_B83B80, 2);
    sleep 100;
});

Script N(script_ExitWalk_8024015C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802403C8_B83B88, 0);
    sleep 100;
});

Script N(script_802401B8) = SCRIPT({
    bind N(script_ExitWalk_80240100) to 0x80000 0;
    bind N(script_ExitWalk_8024015C) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(0x60000);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    func_80240000_B837C0();
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_802401B8);
    } else {
        SI_VAR(0) = N(script_802401B8);
        spawn EnterWalk;
    }
    sleep 1;
    await N(script_80240080);
});

s32 pad_000358[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0, 60, 0, 0, 0x80000000);
    MakeEntity(0x802BC7AC, 0xFFFFFFC3, 0, 0xFFFFFFF9, 0, 0x80000000);
});

s32 pad_0003B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802403C0_B83B80

// rodata: D_802403C8_B83B88

