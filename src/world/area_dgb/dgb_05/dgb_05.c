#include "dgb_05.h"

s32 pad_001484[3];
Script N(script_802414E0);
s32 pad_001578[2];
Script N(script_ExitSingleDoor_80241580);
Script N(script_EnterSingleDoor_80241634);
Script N(main);
s32 pad_0017E8[2];
Script N(script_802417F0);
s32 pad_001868[2];
Script N(script_MakeEntities);
s32 pad_0018BC[1];
Script N(script_802418C0);
s32 unk_missing_8024197C[10];
s32 N(extraAnimationList_802419A4)[2];
Script N(script_NpcAI_802419DC);
Script N(script_NpcAI_80241A78);
StaticNpc N(npcGroup_80241B4C)[2];
StaticNpc N(npcGroup_80241F2C)[2];
NpcGroupList N(npcGroupList_8024230C);
const char D_80242330_C3CD40[8]; // "dgb_03"
const char D_80242338_C3CD48[8]; // "dgb_06"

// text: func_80240000_C3AA10

// text: func_80240030_C3AA40

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240268_C3AC78

// text: func_8024041C_C3AE2C

// text: func_8024067C_C3B08C

// text: func_80240704_C3B114

// text: func_802409BC_C3B3CC

// text: func_80240A20_C3B430

// text: func_80240AC8_C3B4D8

// text: func_80240C00_C3B610

// text: func_80240CAC_C3B6BC

// text: func_80240E24_C3B834

// text: func_80240E80_C3B890

// text: func_802411D0_C3BBE0

s32 pad_001484[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 515.0f, 0.0f, 310.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C5,
};

Script N(script_802414E0) = SCRIPT({
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

s32 pad_001578[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80241580) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 16;
    SI_VAR(2) = 30;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80242330_C3CD40, 2);
    sleep 100;
});

Script N(script_EnterSingleDoor_80241634) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 30;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFF1) {
        MakeNpcs(1, N(npcGroupList_8024230C));
    }
    await N(script_MakeEntities);
    spawn N(script_802417F0);
    ModifyColliderFlags(0, 18, 0x7FFFFE00);
    EnableModel(20, 0);
    bind N(script_ExitSingleDoor_80241580) to TriggerFlag_WALL_INTERACT 16;
    spawn N(script_802414E0);
    spawn N(script_EnterSingleDoor_80241634);
});

s32 pad_0017E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802417F0) = SCRIPT({
    func_80240000_C3AA10();
    0x802CA988(0, SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5));
    func_80240030_C3AA40();
    SI_SAVE_FLAG(1047) = 1;
    GotoMap(D_80242338_C3CD48, 1);
    sleep 100;
});

s32 pad_001868[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1047) == 0) {
        MakeEntity(0x802BCE84, 510, 0xFFFFFF2E, 100, 0, 0x80000000);
    }
});

s32 pad_0018BC[] = {
    0x00000000,
};

Script N(script_802418C0) = SCRIPT({
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

s32 unk_missing_8024197C[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802419A4)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_802419AC) = {
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

Script N(script_NpcAI_802419DC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 10);
    SetSelfVar(2, 14);
    SetSelfVar(3, 18);
    func_80240E80_C3B890(N(aISettings_802419AC));
});

NpcSettings N(npcSettings_80241A4C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802419DC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_NpcAI_80241A78) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_8024041C_C3AE2C();
});

NpcSettings N(npcSettings_80241B20) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241A78),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802418C0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80241B4C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241A4C),
        .pos = { 132.0, -110.0, 238.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000084, 0xFFFFFF92, 0x000000EE, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000145, 0x00000000, 0x000000B9, 0x000000C8 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241B20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802419A4),
    },
};

StaticNpc N(npcGroup_80241F2C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80241A4C),
        .pos = { 503.0, -210.0, 225.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000001F7, 0xFFFFFF2E, 0x000000E1, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001F7, 0xFFFFFF2E, 0x00000122, 0x000000C8, 0x00000096, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80241B20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802419A4),
    },
};

NpcGroupList N(npcGroupList_8024230C) = {
    NPC_GROUP(N(npcGroup_80241B4C), 0x0F010003),
    NPC_GROUP(N(npcGroup_80241F2C), 0x0F020003),
    {},
};

// rodata: D_80242330_C3CD40

// rodata: D_80242338_C3CD48

// rodata: D_80242340_C3CD50

// rodata: D_80242348_C3CD58

// rodata: jtbl_80242350_C3CD60

// rodata: jtbl_802424E0_C3CEF0
