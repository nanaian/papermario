#include "tst_01.h"

Script N(script_802400F0);
Script N(script_80240120);
Script N(main);
s32 pad_000214[3];
Script N(script_MakeEntities);
s32 pad_00031C[1];
const char D_80240320_B1AC20[7]; // "machi"
const char D_80240328_B1AC28[8]; // "tst_02"

EntryList N(entryList) = {
    { -35.0f, 0.0f, 17.0f, 0.0f },
    { 338.0f, 0.0f, 5.0f, 0.0f },
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
    GotoMap(D_80240320_B1AC20, 7);
    sleep 100;
});

Script N(script_80240120) = SCRIPT({
    GotoMap(D_80240328_B1AC28, 0);
    sleep 100;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 23;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    bind N(script_802400F0) to TriggerFlag_WALL_PUSH 13;
    bind N(script_80240120) to TriggerFlag_WALL_PUSH 14;
});

s32 pad_000214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA564, 136, 80, 63, 0, 347, 0x80000000);
    MakeEntity(D_802EA564, 190, 0, 63, 0, 0x80000000);
    MakeEntity(D_802EA588, 201, 60, 0xFFFFFFEC, 0, 342, 0x80000000);
    MakeEntity(D_802EA588, 230, 60, 0xFFFFFFEC, 0, 342, 0x80000000);
    MakeEntity(D_802EA5D0, 258, 60, 0xFFFFFFEC, 0, 347, 0x80000000);
    MakeEntity(D_802EA5AC, 315, 60, 63, 0, 347, 0x80000000);
});

s32 pad_00031C[] = {
    0x00000000,
};

// rodata: D_80240320_B1AC20

// rodata: D_80240328_B1AC28
