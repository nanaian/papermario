#include "pra_03.h"

s32 pad_000018[2];
s32 pad_0001A8[2];
Script N(script_80240220);
s32 pad_00025C[1];
Script N(script_ExitSingleDoor_80240260);
Script N(script_ExitDoubleDoor_80240304);
Script N(script_ExitDoubleDoor_802403A8);
Script N(script_8024044C);
Script N(script_EnterDoubleDoor_802404B0);
Script N(main);
s32 pad_000704[3];
Script N(script_80240710);
Script N(script_802407A0);
Script N(script_MakeEntities);
s32 pad_0009B8[2];
const char D_802409C0_D54670[8]; // "pra_02"
const char D_802409C8_D54678[8]; // "pra_38"
const char D_802409D0_D54680[8]; // "pra_09"
s32 pad_0009D8[2];

// text: func_Init_D53CB0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_D53CD0

// text: func_802400AC_D53D5C

// text: func_80240138_D53DE8

s32 pad_0001A8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -128.0f, 0.0f, -137.0f, 180.0f },
    { 237.0f, 0.0f, -70.0f, 270.0f },
    { 237.0f, -200.0f, -70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190138,
};

Script N(script_80240220) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_00025C[] = {
    0x00000000,
};

Script N(script_ExitSingleDoor_80240260) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 19;
    SI_VAR(2) = 22;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802409C0_D54670, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240304) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 14;
    SI_VAR(2) = 20;
    SI_VAR(3) = 18;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802409C8_D54678, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802403A8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 36;
    SI_VAR(2) = 55;
    SI_VAR(3) = 53;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802409D0_D54680, 0);
    sleep 100;
});

Script N(script_8024044C) = SCRIPT({
    bind N(script_ExitSingleDoor_80240260) to TriggerFlag_WALL_INTERACT 19;
    bind N(script_ExitDoubleDoor_80240304) to TriggerFlag_WALL_INTERACT 14;
    bind N(script_ExitDoubleDoor_802403A8) to TriggerFlag_WALL_INTERACT 36;
});

Script N(script_EnterDoubleDoor_802404B0) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_8024044C);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 22;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 1 {
            SI_VAR(2) = 20;
            SI_VAR(3) = 18;
            await EnterDoubleDoor;
        }
        == 2 {
            SI_VAR(2) = 55;
            SI_VAR(3) = 53;
            await EnterDoubleDoor;
        }
    }
    spawn N(script_8024044C);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80240220);
    if (SI_SAVE_FLAG(1497) == 1) {
        ModifyColliderFlags(0, 22, 0x7FFFFE00);
        EnableModel(30, 0);
    } else {
        EnableModel(25, 0);
    }
    spawn N(script_EnterDoubleDoor_802404B0);
    sleep 1;
});

s32 pad_000704[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240710) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= SI_VAR(3)) {
        SI_VAR(1) = SI_VAR(3);
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_802407A0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    GetPlayerPos(SI_VAR(7), SI_VAR(8), SI_VAR(9));
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(3) = 0xFFFFFF51;
        SI_VAR(10) = spawn N(script_80240710);
        func_802400AC_D53D5C();
        SetPlayerJumpscale(2.0);
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 15;
    } else {
        SI_VAR(3) = 0;
        SI_VAR(10) = spawn N(script_80240710);
        func_80240020_D53CD0();
        SetPlayerJumpscale(0.7001953125);
        SI_VAR(1) = 0;
        SI_VAR(2) = 35;
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
        func_80240138_D53DE8();
    }
    MakeEntity(0x802EAA30, 124, 0xFFFFFF38, 0xFFFFFFB5, 0, 0x80000000);
    AssignScript(N(script_802407A0));
    MakeEntity(0x802E9A18, 0xFFFFFF38, 60, 0xFFFFFFB5, 0, 0x80000000);
});

s32 pad_0009B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802409C0_D54670

// rodata: D_802409C8_D54678

// rodata: D_802409D0_D54680

s32 pad_0009D8[] = {
    0x00000000, 0x00000000,
};
