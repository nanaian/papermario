#include "dgb_07.h"

s32 pad_001424[3];
Script N(script_80241490);
s32 pad_001528[2];
Script N(script_ExitSingleDoor_80241530);
Script N(script_EnterSingleDoor_802415E4);
Script N(main);
Script N(script_MakeEntities);
s32 pad_0017E4[3];
Script N(script_802417F0);
s32 N(extraAnimationList_802418AC)[10];
s32 N(extraAnimationList_802418D4)[2];
Script N(script_NpcAI_8024190C);
Script N(script_NpcAI_802419A8);
StaticNpc N(npcGroup_80241A7C)[2];
NpcGroupList N(npcGroupList_80241E5C);
s32 pad_001E74[3];
const char D_80241E80_C3FA70[8]; // "dgb_02"
s32 pad_001E88[2];

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240208_C3DDF8

// text: func_802403BC_C3DFAC

// text: func_8024061C_C3E20C

// text: func_802406A4_C3E294

// text: func_8024095C_C3E54C

// text: func_802409C0_C3E5B0

// text: func_80240A68_C3E658

// text: func_80240BA0_C3E790

// text: func_80240C4C_C3E83C

// text: func_80240DC4_C3E9B4

// text: func_80240E20_C3EA10

// text: func_80241170_C3ED60

s32 pad_001424[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -450.0f, 0.0f, -40.0f, 0.0f },
    { 250.0f, 190.0f, -250.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C7,
};

Script N(script_80241490) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_001528[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80241530) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 6;
    SI_VAR(2) = 22;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80241E80_C3FA70, 2);
    sleep 100;
});

Script N(script_EnterSingleDoor_802415E4) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 22;
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
        MakeNpcs(1, N(npcGroupList_80241E5C));
    }
    await N(script_MakeEntities);
    bind N(script_ExitSingleDoor_80241530) to TriggerFlag_WALL_INTERACT 6;
    spawn N(script_80241490);
    spawn N(script_EnterSingleDoor_802415E4);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(348, 0xFFFFFF24, 75, 0xFFFFFF2E, 17, SI_SAVE_FLAG(1050));
    MakeEntity(0x802EAED4, 0xFFFFFE8E, 0, 0xFFFFFF38, 0, -1, 0x80000000);
    MakeEntity(0x802EAED4, 0xFFFFFE66, 0, 0xFFFFFF38, 0, -1, 0x80000000);
});

s32 pad_0017E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802417F0) = SCRIPT({
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

s32 N(extraAnimationList_802418AC)[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802418D4)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_802418DC) = {
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

Script N(script_NpcAI_8024190C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 10);
    SetSelfVar(2, 14);
    SetSelfVar(3, 18);
    func_80240E20_C3EA10(N(aISettings_802418DC));
});

NpcSettings N(npcSettings_8024197C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024190C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_NpcAI_802419A8) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_802403BC_C3DFAC();
});

NpcSettings N(npcSettings_80241A50) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802419A8),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802417F0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80241A7C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024197C),
        .pos = { -500.0, 0.0, -240.0 },
        .flags = 0x00000800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFE0C, 0x00000000, 0xFFFFFF10, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE0C, 0x00000000, 0xFFFFFF10, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418AC),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241A50),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418D4),
    },
};

NpcGroupList N(npcGroupList_80241E5C) = {
    NPC_GROUP(N(npcGroup_80241A7C), 0x0F010003),
    {},
};

s32 pad_001E74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241E80_C3FA70

s32 pad_001E88[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241E90_C3FA80

// rodata: D_80241E98_C3FA88

// rodata: jtbl_80241EA0_C3FA90

// rodata: jtbl_80242030_C3FC20
