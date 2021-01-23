#include "tst_03.h"

Script N(script_802400F0);
Script N(script_80240120);
Script N(main);
s32 pad_0002BC[1];
Script N(script_MakeEntities);
const char D_802405E0_B1B560[8]; // "tst_02"
const char D_802405E8_B1B568[8]; // "tst_04"

EntryList N(entryList) = {
    { -85.0f, 0.0f, 10.0f, 0.0f },
    { 1536.0f, 0.0f, 15.0f, 0.0f },
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
    GotoMap(D_802405E0_B1B560, 1);
    sleep 100;
});

Script N(script_80240120) = SCRIPT({
    GotoMap(D_802405E8_B1B568, 0);
    sleep 100;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 23;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    bind N(script_802400F0) to TriggerFlag_WALL_PUSH 27;
    bind N(script_80240120) to TriggerFlag_WALL_PUSH 28;
    ModifyColliderFlags(3, 7, 4);
    ModifyColliderFlags(3, 8, 4);
    ModifyColliderFlags(0, 7, 0x80000);
    ModifyColliderFlags(0, 8, 0x80000);
    ModifyColliderFlags(3, 3, 1);
    ModifyColliderFlags(3, 13, 2);
    ModifyColliderFlags(3, 18, 3);
});

s32 pad_0002BC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA5AC, 567, 60, 100, 0, 0x80000000);
    MakeEntity(0x802EA5D0, 623, 60, 100, 0, 0x80000000);
    MakeEntity(0x802EA07C, 300, 60, 0xFFFFFFCE, 0, 0x80000000);
    MakeEntity(0x802EA0C4, 360, 80, 0xFFFFFFCE, 0, 0x80000000);
    MakeEntity(0x802EA0E8, 420, 80, 0xFFFFFFCE, 0, 0x80000000);
    MakeEntity(0x802EA564, 480, 80, 0xFFFFFFCE, 0, 0x80000000);
    MakeEntity(0x802EA5F4, 540, 80, 0xFFFFFFCE, 0, 0x80000000);
    MakeEntity(0x802EA588, 600, 60, 0xFFFFFFCE, 0, 138, 0x80000000);
    MakeEntity(0x802EA910, 300, 60, 160, 0, 0x80000000);
    MakeEntity(0x802EA7E0, 420, 60, 160, 0, 0x80000000);
    MakeEntity(0x802E9A18, 480, 60, 160, 0, 0x80000000);
    MakeEntity(0x802EA2E0, 644, 60, 118, 0, 0x80000000);
    MakeEntity(0x802EA178, 460, 0, 50, 0, 0x80000000);
    MakeEntity(0x802EA178, 460, 25, 50, 0, 0x80000000);
    MakeEntity(0x802EA208, 490, 0, 50, 0, 0x80000000);
    MakeEntity(0x802EA298, 520, 0, 50, 0, 0x80000000);
    MakeEntity(0x802EA2E0, 644, 60, 118, 0, 0x80000000);
    MakeEntity(0x802BCE84, 416, 0, 232, 0, 0x80000000);
    MakeEntity(0x802EAED4, 336, 0, 232, 0, -1, 0, 0x80000000);
    MakeEntity(0x802EAED4, 270, 0, 232, 0, 138, 0, 0x80000000);
    MakeEntity(0x802EAED4, 270, 30, 232, 0, 138, 0, 0x80000000);
});

// rodata: D_802405E0_B1B560

// rodata: D_802405E8_B1B568
