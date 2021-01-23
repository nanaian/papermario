#include "sbk_99.h"

Script N(script_ExitWalk_80240060);
Script N(script_ExitWalk_802400BC);
Script N(script_80240118);
Script N(script_EnterWalk_80240160);
Script N(main);
s32 pad_0002D4[3];
Script N(script_MakeEntities);
s32 pad_000338[2];
const char D_80240340_95B1F0[8]; // "iwa_04"
const char D_80240348_95B1F8[8]; // "sbk_30"

EntryList N(entryList) = {
    { -484.0f, 100.0f, 5.0f, 90.0f },
    { 346.0f, 0.0f, -342.0f, 220.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19005F,
};

Script N(script_ExitWalk_80240060) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240340_95B1F0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802400BC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240348_95B1F8, 0);
    sleep 100;
});

Script N(script_80240118) = SCRIPT({
    bind N(script_ExitWalk_80240060) to 0x80000 0;
    bind N(script_ExitWalk_802400BC) to 0x80000 4;
});

Script N(script_EnterWalk_80240160) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240118);
        return;
    }
    SI_VAR(0) = N(script_80240118);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 10;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 152, 240);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1972) = 1;
    await N(script_MakeEntities);
    SetMusicTrack(0, 22, 0, 8);
    spawn N(script_EnterWalk_80240160);
    sleep 1;
});

s32 pad_0002D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802E9A18, 145, 60, 0xFFFFFE89, 45, 0x80000000);
    MakeEntity(D_802EA7E0, 88, 60, 0xFFFFFEBC, 40, 0x80000000);
});

s32 pad_000338[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240340_95B1F0

// rodata: D_80240348_95B1F8
