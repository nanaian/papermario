#include "pra_04.h"

s32 pad_000018[2];
s32 pad_0001A8[2];
s32 pad_00093C[1];
Script N(script_802409B0);
s32 pad_0009EC[1];
Script N(script_ExitSingleDoor_802409F0);
Script N(script_ExitDoubleDoor_80240A94);
Script N(script_ExitDoubleDoor_80240B38);
Script N(script_80240BDC);
Script N(script_EnterDoubleDoor_80240C40);
Script N(main);
s32 pad_000E44[3];
Script N(script_80240E50);
Script N(script_80240EE0);
Script N(script_80241074);
Script N(script_MakeEntities);
s32 pad_0011A4[3];
s32 N(unk_802411B0)[12];
Script N(script_802411E0);
Script N(script_NpcAI_80241230);
s32 unk_missing_80241250[11];
StaticNpc N(npcGroup_802412A8)[1];
NpcGroupList N(npcGroupList_80241498);
const char D_802414B0_D55B40[8]; // "pra_02"
const char D_802414B8_D55B48[8]; // "pra_39"
const char D_802414C0_D55B50[8]; // "pra_10"
s32 pad_0014C8[2];

// text: func_Init_D54690

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_D546B0

// text: func_802400AC_D5473C

// text: func_80240138_D547C8

s32 pad_0001A8[] = {
    0x00000000, 0x00000000,
};

// text: func_802401B0_D54840

s32 pad_00093C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -128.0f, 0.0f, 157.0f, 0.0f },
    { 237.0f, 0.0f, 78.0f, 270.0f },
    { 237.0f, -200.0f, 78.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190139,
};

Script N(script_802409B0) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_0009EC[] = {
    0x00000000,
};

Script N(script_ExitSingleDoor_802409F0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 17;
    SI_VAR(2) = 16;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802414B0_D55B40, 4);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240A94) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 11;
    SI_VAR(2) = 18;
    SI_VAR(3) = 20;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802414B8_D55B48, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240B38) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 34;
    SI_VAR(2) = 44;
    SI_VAR(3) = 46;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802414C0_D55B50, 0);
    sleep 100;
});

Script N(script_80240BDC) = SCRIPT({
    bind N(script_ExitSingleDoor_802409F0) to TriggerFlag_WALL_INTERACT 17;
    bind N(script_ExitDoubleDoor_80240A94) to TriggerFlag_WALL_INTERACT 11;
    bind N(script_ExitDoubleDoor_80240B38) to TriggerFlag_WALL_INTERACT 34;
});

Script N(script_EnterDoubleDoor_80240C40) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 16;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 1 {
            SI_VAR(2) = 18;
            SI_VAR(3) = 20;
            await EnterDoubleDoor;
        }
        == 2 {
            SI_VAR(2) = 44;
            SI_VAR(3) = 46;
            await EnterDoubleDoor;
        }
    }
    spawn N(script_80240BDC);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241498));
    await N(script_MakeEntities);
    spawn N(script_802409B0);
    if (SI_SAVE_FLAG(1497) == 1) {
        ModifyColliderFlags(0, 20, 0x7FFFFE00);
        EnableModel(10, 0);
    }
    spawn N(script_EnterDoubleDoor_80240C40);
    sleep 1;
});

s32 pad_000E44[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240E50) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= SI_VAR(3)) {
        SI_VAR(1) = SI_VAR(3);
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80240EE0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    GetPlayerPos(SI_VAR(7), SI_VAR(8), SI_VAR(9));
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(3) = 0xFFFFFF51;
        SI_VAR(10) = spawn N(script_80240E50);
        func_802400AC_D5473C();
        SetPlayerJumpscale(2.0);
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 15;
    } else {
        SI_VAR(3) = 0;
        SI_VAR(10) = spawn N(script_80240E50);
        func_80240020_D546B0();
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

Script N(script_80241074) = SCRIPT({
    SI_SAVE_FLAG(1497) = 1;
    ModifyColliderFlags(0, 20, 0x7FFFFE00);
    EnableModel(10, 0);
});

Script N(script_MakeEntities) = SCRIPT({
    spawn {
        func_80240138_D547C8();
    }
    MakeEntity(0x802EAA30, 124, 0xFFFFFF38, 80, 0, 0x80000000);
    AssignScript(N(script_80240EE0));
    if (SI_SAVE_FLAG(1497) == 0) {
        MakeEntity(0x802BCE84, 124, 0, 80, 0, 0x80000000);
        AssignScript(N(script_80241074));
    }
    MakeEntity(0x802EA564, 0xFFFFFF38, 60, 75, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1498));
});

s32 pad_0011A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802411B0)[] = {
    0x3FCCCCCD, 0x0000003C, 0x0000001E, 0x42A00000, 0x00000000, 0x00000005, 0x400CCCCD, 0x0000003C,
    0x0000000F, 0x42C80000, 0x00000000, 0x00000001,
};

Script N(script_802411E0) = SCRIPT({
    func_802401B0_D54840(N(unk_802411B0));
});

NpcAISettings N(aISettings_80241200) = {
    .moveSpeed = 1.6f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 80.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 2.2f,
    .unk_1C = 0x3C,
    .unk_20 = 0xF,
    .chaseRadius = 100.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241230) = SCRIPT({
    func_802401B0_D54840(N(aISettings_80241200));
});

s32 unk_missing_80241250[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, N(script_802411E0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000800, 0x00000000, 0x000A0000,
};

NpcSettings N(npcSettings_8024127C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241230),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0x800,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802412A8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024127C),
        .pos = { 50.0, 130.0, 75.0 },
        .flags = 0x00200C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_VOLT_SHROOM, 10 } },
        .movement = { 0x00000032, 0x00000082, 0x0000004B, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000032, 0x00000082, 0x0000004B, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x0034011B, 0x00340102, 0x00340102, 0x00340102, 0x0034011B, 0x0034011B, 0x00340104, 0x00340115, 0x00340100, 0x00340100, 0x00340101, 0x00340101, 0x00340101, 0x00340101, 0x00340101, 0x00340101,
        },
    },
};

NpcGroupList N(npcGroupList_80241498) = {
    NPC_GROUP(N(npcGroup_802412A8), 0x21000001),
    {},
};

// rodata: D_802414B0_D55B40

// rodata: D_802414B8_D55B48

// rodata: D_802414C0_D55B50

s32 pad_0014C8[] = {
    0x00000000, 0x00000000,
};

// rodata: jtbl_802414D0_D55B60

// rodata: D_80241510_D55BA0

// rodata: D_80241518_D55BA8
