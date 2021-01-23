#include "tst_10.h"

Script N(script_ExitWalk_80240080);
Script N(script_ExitWalk_802400E0);
Script N(script_ExitWalk_80240140);
Script N(script_ExitWalk_802401A0);
Script N(script_80240200);
Script N(script_80240270);
Script N(main);
s32 N(unk_80240450)[18];
Script N(script_MakeEntities);
s32 pad_0004F4[3];
const char D_80240500_B1CA40[8]; // "tst_10"
s32 pad_000508[2];

EntryList N(entryList) = {
    { 0.0f, 0.0f, -480.0f, 180.0f },
    { -480.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 480.0f, 0.0f },
    { 480.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x0,
};

Script N(script_ExitWalk_80240080) = SCRIPT({
    DisablePlayerInput(1);
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240500_B1CA40, 2);
    sleep 100;
});

Script N(script_ExitWalk_802400E0) = SCRIPT({
    DisablePlayerInput(1);
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240500_B1CA40, 3);
    sleep 100;
});

Script N(script_ExitWalk_80240140) = SCRIPT({
    DisablePlayerInput(1);
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240500_B1CA40, 0);
    sleep 100;
});

Script N(script_ExitWalk_802401A0) = SCRIPT({
    DisablePlayerInput(1);
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80240500_B1CA40, 1);
    sleep 100;
});

Script N(script_80240200) = SCRIPT({
    SetZoneEnabled(16, 0);
    SetZoneEnabled(15, 0);
    SetZoneEnabled(17, 0);
    SetZoneEnabled(14, 0);
    SI_AREA_FLAG(0) = 0;
});

Script N(script_80240270) = SCRIPT({
    bind N(script_ExitWalk_80240080) to TriggerFlag_FLOOR_TOUCH 1;
    bind N(script_ExitWalk_802400E0) to TriggerFlag_FLOOR_TOUCH 11;
    bind N(script_ExitWalk_80240140) to TriggerFlag_FLOOR_TOUCH 8;
    bind N(script_ExitWalk_802401A0) to TriggerFlag_FLOOR_TOUCH 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 23;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    if (SI_AREA_FLAG(0) == 1) {
        SetZoneEnabled(16, 0);
        SetZoneEnabled(15, 0);
        SetZoneEnabled(17, 0);
        SetZoneEnabled(14, 0);
        SI_AREA_FLAG(0) = 0;
    } else {
        SI_AREA_FLAG(0) = 1;
        bind N(script_80240200) to TriggerFlag_FLOOR_TOUCH 14;
    }
    SI_VAR(0) = N(script_80240270);
    spawn EnterWalk;
    sleep 1;
});

s32 N(unk_80240450)[] = {
    0xFFFFFFBF, 0x00000000, 0x000000D9, 0xFFFFFEFA, 0x00000000, 0xFFFFFFC0, 0x00000039, 0x00000000,
    0xFFFFFEE2, 0x00000147, 0x00000000, 0x00000008, 0x80000001, N(unk_80240450), N(unk_80240450), N(unk_80240450),
    N(unk_80240450), 0xFFFFFFFF,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA7E0, 0xFFFFFFF3, 60, 0xFFFFFFCE, 0, 0x80000000);
    MakeEntity(0x802EAB04, 0xFFFFFF91, 0, 0xFFFFFFC9, 0, 3, 0x80000000);
});

s32 pad_0004F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240500_B1CA40

s32 pad_000508[] = {
    0x00000000, 0x00000000,
};
