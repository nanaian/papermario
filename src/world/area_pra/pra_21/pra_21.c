#include "pra_21.h"

s32 pad_000018[2];
s32 pad_00011C[1];
Script N(script_80240180);
s32 pad_0001BC[1];
s32 N(unk_802401C0)[2];
s32 N(unk_802401C8)[2];
Script N(script_ExitSingleDoor_802401D0);
Script N(script_80240274);
Script N(script_80240318);
Script N(script_EnterSingleDoor_80240360);
Script N(main);
s32 pad_00061C[1];
Script N(script_80240620);
Script N(script_802406B0);
Script N(script_MakeEntities);
s32 pad_000948[2];
const char D_80240950_D78870[8]; // "pra_20"
const char D_80240958_D78878[8]; // "pra_36"

// text: func_Init_D77F20

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_D77F40

// text: func_802400AC_D77FCC

s32 pad_00011C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 126.0f, 0.0f, -137.0f, 180.0f },
    { 487.0f, -200.0f, -70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190147,
};

Script N(script_80240180) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_0001BC[] = {
    0x00000000,
};

s32 N(unk_802401C0)[] = {
    0x00000031, 0xFFFFFFFF,
};

s32 N(unk_802401C8)[] = {
    0x0000002F, 0xFFFFFFFF,
};

Script N(script_ExitSingleDoor_802401D0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 16;
    SI_VAR(2) = 44;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80240950_D78870, 1);
    sleep 100;
});

Script N(script_80240274) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 32;
    SI_VAR(2) = N(unk_802401C0);
    SI_VAR(3) = N(unk_802401C8);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80240958_D78878, 0);
    sleep 100;
});

Script N(script_80240318) = SCRIPT({
    bind N(script_ExitSingleDoor_802401D0) to TriggerFlag_WALL_INTERACT 16;
    bind N(script_80240274) to TriggerFlag_WALL_INTERACT 32;
});

Script N(script_EnterSingleDoor_80240360) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 44;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 1 {
            SI_VAR(2) = N(unk_802401C0);
            SI_VAR(3) = N(unk_802401C8);
            await 0x802861B0;
        }
    }
    spawn N(script_80240318);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80240180);
    if (SI_SAVE_VAR(0) < 84) {
        SI_VAR(0) = 0;
    } else {
        match SI_SAVE_VAR(286) {
            == 0 {
                SI_VAR(0) = 0xFFFFFFCE;
            }
            == 1 {
                SI_VAR(0) = 0xFFFFFFCE;
            }
            == 2 {
                SI_VAR(0) = 50;
            }
        }
    }
    ParentColliderToModel(38, 34);
    TranslateModel(34, SI_VAR(0), 0, 0);
    TranslateModel(35, SI_VAR(0), 0, 0);
    TranslateModel(36, SI_VAR(0), 0, 0);
    TranslateModel(37, SI_VAR(0), 0, 0);
    TranslateModel(39, SI_VAR(0), 0, 0);
    UpdateColliderTransform(38);
    spawn N(script_EnterSingleDoor_80240360);
    sleep 1;
});

s32 pad_00061C[] = {
    0x00000000,
};

Script N(script_80240620) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= SI_VAR(3)) {
        SI_VAR(1) = SI_VAR(3);
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_802406B0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    GetPlayerPos(SI_VAR(7), SI_VAR(8), SI_VAR(9));
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(3) = 0xFFFFFF51;
        SI_VAR(10) = spawn N(script_80240620);
        func_80240020_D77F40();
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 15;
        SetPlayerJumpscale(2.0);
    } else {
        SI_VAR(3) = 0;
        SI_VAR(10) = spawn N(script_80240620);
        if (SI_SAVE_VAR(286) == 2) {
            SI_VAR(0) = 340;
        } else {
            SI_VAR(0) = 410;
        }
        SI_VAR(1) = 0;
        SI_VAR(2) = 35;
        SetPlayerJumpscale(0.7001953125);
    }
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(9), SI_VAR(2));
    kill SI_VAR(10);
    SetPlayerActionState(0);
    sleep 2;
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    spawn {
        func_802400AC_D77FCC();
    }
    MakeEntity(0x802EAA30, 366, 0xFFFFFF38, 0xFFFFFFB0, 0, 0x80000000);
    AssignScript(N(script_802406B0));
    MakeEntity(0x802EA564, 55, 80, 0xFFFFFFB5, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1509));
    MakeEntity(0x802EAB04, 50, 0, 0xFFFFFFB5, 0, 17, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1510));
});

s32 pad_000948[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240950_D78870

// rodata: D_80240958_D78878
