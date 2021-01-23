#include "dgb_02.h"

s32 pad_001424[3];
Script N(script_802414B0);
s32 pad_001548[2];
Script N(script_ExitDoubleDoor_80241550);
Script N(script_ExitDoubleDoor_80241604);
Script N(script_ExitSingleDoor_802416B8);
Script N(script_ExitSingleDoor_8024176C);
Script N(script_EnterSingleDoor_80241820);
Script N(main);
s32 pad_001AA8[2];
Script N(script_80241AB0);
s32 N(extraAnimationList_80241B6C)[10];
s32 N(extraAnimationList_80241B94)[2];
Script N(script_NpcAI_80241BCC);
Script N(script_NpcAI_80241C98);
Script N(script_NpcAI_80241D34);
StaticNpc N(npcGroup_80241E08)[2];
StaticNpc N(npcGroup_802421E8)[2];
NpcGroupList N(npcGroupList_802425C8);
s32 pad_0025EC[1];
const char D_802425F0_C31190[8]; // "dgb_03"
const char D_802425F8_C31198[8]; // "dgb_01"
const char D_80242600_C311A0[8]; // "dgb_07"
const char D_80242608_C311A8[8]; // "dgb_11"

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240208_C2EDA8

// text: func_802403BC_C2EF5C

// text: func_8024061C_C2F1BC

// text: func_802408D0_C2F470

// text: func_80240958_C2F4F8

// text: func_80240C10_C2F7B0

// text: func_80240C74_C2F814

// text: func_80240D1C_C2F8BC

// text: func_80240E54_C2F9F4

// text: func_80240F00_C2FAA0

// text: func_80241078_C2FC18

// text: func_802410D4_C2FC74

s32 pad_001424[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -567.0f, 0.0f, 180.0f, 90.0f },
    { 567.0f, 0.0f, 180.0f, 270.0f },
    { -450.0f, 0.0f, 88.0f, 180.0f },
    { 450.0f, 0.0f, 88.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C2,
};

Script N(script_802414B0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        } else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_001548[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80241550) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 5;
    SI_VAR(2) = 11;
    SI_VAR(3) = 13;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802425F0_C31190, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241604) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 17;
    SI_VAR(2) = 18;
    SI_VAR(3) = 16;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802425F8_C31198, 1);
    sleep 100;
});

Script N(script_ExitSingleDoor_802416B8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 9;
    SI_VAR(2) = 21;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80242600_C311A0, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_8024176C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 3;
    SI_VAR(1) = 13;
    SI_VAR(2) = 23;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80242608_C311A8, 0);
    sleep 100;
});

Script N(script_EnterSingleDoor_80241820) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            SI_VAR(2) = 11;
            SI_VAR(3) = 13;
            await EnterDoubleDoor;
        }
        == 1 {
            UseDoorSounds(3);
            SI_VAR(2) = 18;
            SI_VAR(3) = 16;
            await EnterDoubleDoor;
        }
        == 2 {
            UseDoorSounds(0);
            SI_VAR(2) = 21;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 3 {
            UseDoorSounds(0);
            SI_VAR(2) = 23;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFF1) {
        MakeNpcs(1, N(npcGroupList_802425C8));
    }
    bind N(script_ExitDoubleDoor_80241550) to TriggerFlag_WALL_INTERACT 5;
    bind N(script_ExitDoubleDoor_80241604) to TriggerFlag_WALL_INTERACT 17;
    bind N(script_ExitSingleDoor_802416B8) to TriggerFlag_WALL_INTERACT 9;
    bind N(script_ExitSingleDoor_8024176C) to TriggerFlag_WALL_INTERACT 13;
    spawn N(script_802414B0);
    spawn N(script_EnterSingleDoor_80241820);
});

s32 pad_001AA8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241AB0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

s32 N(extraAnimationList_80241B6C)[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241B94)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_80241B9C) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 85.0f,
    .unk_10 = 65.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xC,
    .chaseRadius = 110.0f,
    .unk_28 = 90.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_80241BCC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    func_8024061C_C2F1BC(N(aISettings_80241B9C));
});

NpcSettings N(npcSettings_80241C3C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241BCC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80241C68) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0f,
    .unk_28 = 160.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241C98) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 10);
    SetSelfVar(2, 14);
    SetSelfVar(3, 18);
    func_802410D4_C2FC74(N(aISettings_80241C68));
});

NpcSettings N(npcSettings_80241D08) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241C98),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_NpcAI_80241D34) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_802403BC_C2EF5C();
});

NpcSettings N(npcSettings_80241DDC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241D34),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80241AB0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80241E08)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80241C3C),
        .pos = { -200.0, 0.0, 180.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF38, 0x00000000, 0x000000B4, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF38, 0x00000000, 0x000000AF, 0x000000FA, 0x0000005A, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80241B6C),
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80241DDC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80241B94),
    },
};

StaticNpc N(npcGroup_802421E8)[] = {
    {
        .id = 30,
        .settings = &N(npcSettings_80241D08),
        .pos = { 375.0, 0.0, 100.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000177, 0x00000000, 0x00000064, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000140, 0x00000000, 0x000000AF, 0x000000FA, 0x0000005A, 0x00000000, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 31,
        .settings = &N(npcSettings_80241DDC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80241B94),
    },
};

NpcGroupList N(npcGroupList_802425C8) = {
    NPC_GROUP(N(npcGroup_80241E08), 0x0F020001),
    NPC_GROUP(N(npcGroup_802421E8), 0x0F010001),
    {},
};

s32 pad_0025EC[] = {
    0x00000000,
};

// rodata: D_802425F0_C31190

// rodata: D_802425F8_C31198

// rodata: D_80242600_C311A0

// rodata: D_80242608_C311A8

// rodata: D_80242610_C311B0

// rodata: jtbl_80242618_C311B8

// rodata: D_802427A8_C31348

// rodata: jtbl_802427B0_C31350
