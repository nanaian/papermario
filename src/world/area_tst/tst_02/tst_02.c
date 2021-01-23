#include "tst_02.h"

Script N(script_802400F0);
Script N(script_80240120);
Script N(main);
s32 pad_000214[3];
Script N(script_MakeEntities);
s32 pad_000334[3];
const char D_80240340_B1AF70[8]; // "tst_01"
const char D_80240348_B1AF78[8]; // "tst_03"

EntryList N(entryList) = {
    { -41.0f, 0.0f, 25.0f, 0.0f },
    { 278.0f, 0.0f, 18.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 354.0f, 0.0f, 294.0f, 117.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_802400F0) = SCRIPT({
    GotoMap(D_80240340_B1AF70, 1);
    sleep 100;
});

Script N(script_80240120) = SCRIPT({
    GotoMap(D_80240348_B1AF78, 0);
    sleep 100;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 23;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    bind N(script_802400F0) to TriggerFlag_WALL_PUSH 6;
    bind N(script_80240120) to TriggerFlag_WALL_PUSH 7;
});

s32 pad_000214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA07C, 90, 70, 0xFFFFFF2E, 0, 0x80000000);
    MakeEntity(0x802EA07C, 130, 80, 0xFFFFFF2E, 0, 0x80000000);
    MakeEntity(0x802EA07C, 170, 90, 0xFFFFFF2E, 0, 0x80000000);
    MakeEntity(0x802EA07C, 210, 100, 0xFFFFFF2E, 0, 0x80000000);
    MakeEntity(0x802EA07C, 250, 110, 0xFFFFFF2E, 0, 0x80000000);
    MakeEntity(0x802EAE0C, 193, 0, 0xFFFFFFDA, 0xFFFFFFEC, 0, 0x80000000);
    MakeEntity(0x802EAE30, 130, 0, 0xFFFFFFDA, 0xFFFFFFEC, 0, 0x80000000);
});

s32 pad_000334[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240340_B1AF70

// rodata: D_80240348_B1AF78

