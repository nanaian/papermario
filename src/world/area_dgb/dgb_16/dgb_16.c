#include "dgb_16.h"

s32 pad_001424[3];
Script N(script_80241480);
s32 pad_001518[2];
Script N(script_ExitSingleDoor_80241520);
Script N(script_EnterSingleDoor_802415D4);
Script N(main);
s32 pad_001774[3];
Script N(script_80241780);
s32 pad_0017B4[3];
Script N(script_802417C0);
s32 N(extraAnimationList_8024187C)[10];
s32 N(extraAnimationList_802418A4)[2];
Script N(script_NpcAI_802418DC);
Script N(script_NpcAI_80241978);
StaticNpc N(npcGroup_80241A4C)[2];
StaticNpc N(npcGroup_80241E2C)[2];
StaticNpc N(npcGroup_8024220C)[2];
StaticNpc N(npcGroup_802425EC)[2];
StaticNpc N(npcGroup_802429CC)[2];
StaticNpc N(npcGroup_80242DAC)[2];
NpcGroupList N(npcGroupList_8024318C);
const char D_802431E0_C55720[8]; // "dgb_15"
s32 pad_0031E8[2];

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240208_C52748

// text: func_802403BC_C528FC

// text: func_8024061C_C52B5C

// text: func_802406A4_C52BE4

// text: func_8024095C_C52E9C

// text: func_802409C0_C52F00

// text: func_80240A68_C52FA8

// text: func_80240BA0_C530E0

// text: func_80240C4C_C5318C

// text: func_80240DC4_C53304

// text: func_80240E20_C53360

// text: func_80241170_C536B0

s32 pad_001424[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 450.0f, 0.0f, -40.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900D0,
};

Script N(script_80241480) = SCRIPT({
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

s32 pad_001518[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80241520) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 6;
    SI_VAR(2) = 16;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802431E0_C55720, 2);
    sleep 100;
});

Script N(script_EnterSingleDoor_802415D4) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_FLAG(1068) == 0) {
                SI_SAVE_FLAG(1068) = 1;
                SI_SAVE_VAR(203) = 18;
            }
            SI_VAR(2) = 16;
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
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFF1) {
        MakeNpcs(1, N(npcGroupList_8024318C));
    }
    await N(script_80241780);
    spawn N(script_80241480);
    bind N(script_ExitSingleDoor_80241520) to TriggerFlag_WALL_INTERACT 6;
    spawn N(script_EnterSingleDoor_802415D4);
});

s32 pad_001774[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241780) = SCRIPT({
    MakeItemEntity(19, 0xFFFFFF15, 25, 0xFFFFFF5B, 17, SI_SAVE_FLAG(1069));
});

s32 pad_0017B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802417C0) = SCRIPT({
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

s32 N(extraAnimationList_8024187C)[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802418A4)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_802418AC) = {
    .moveSpeed = 1.0,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0,
    .unk_10 = 40.0,
    .unk_14 = 0xA,
    .chaseSpeed = 3.5,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0,
    .unk_28 = 160.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802418DC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 10);
    SetSelfVar(2, 14);
    SetSelfVar(3, 18);
    func_80240E20_C53360(N(aISettings_802418AC));
});

NpcSettings N(npcSettings_8024194C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802418DC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_NpcAI_80241978) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_802403BC_C528FC();
});

NpcSettings N(npcSettings_80241A20) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241978),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802417C0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80241A4C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024194C),
        .pos = { -70.0, 0.0, -100.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFFBA, 0x00000000, 0xFFFFFF9C, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000000, 0xFFFFFF51, 0x000001AE, 0x0000005C, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_8024187C),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241A20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418A4),
    },
};

StaticNpc N(npcGroup_80241E2C)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_8024194C),
        .pos = { 0.0, 0.0, -235.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0xFFFFFF15, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000000, 0xFFFFFF51, 0x000001AE, 0x0000005C, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80241A20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418A4),
    },
};

StaticNpc N(npcGroup_8024220C)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_8024194C),
        .pos = { 70.0, 0.0, -100.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000046, 0x00000000, 0xFFFFFF9C, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000000, 0xFFFFFF51, 0x000001AE, 0x0000005C, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80241A20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418A4),
    },
};

StaticNpc N(npcGroup_802425EC)[] = {
    {
        .id = 15,
        .settings = &N(npcSettings_8024194C),
        .pos = { 140.0, 0.0, -235.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x0000008C, 0x00000000, 0xFFFFFF15, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000000, 0xFFFFFF51, 0x000001AE, 0x0000005C, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 16,
        .settings = &N(npcSettings_80241A20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418A4),
    },
};

StaticNpc N(npcGroup_802429CC)[] = {
    {
        .id = 20,
        .settings = &N(npcSettings_8024194C),
        .pos = { 210.0, 0.0, -100.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000D2, 0x00000000, 0xFFFFFF9C, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000000, 0xFFFFFF51, 0x000001AE, 0x0000005C, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 21,
        .settings = &N(npcSettings_80241A20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418A4),
    },
};

StaticNpc N(npcGroup_80242DAC)[] = {
    {
        .id = 25,
        .settings = &N(npcSettings_8024194C),
        .pos = { 280.0, 0.0, -235.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000118, 0x00000000, 0xFFFFFF15, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000000, 0xFFFFFF51, 0x000001AE, 0x0000005C, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 26,
        .settings = &N(npcSettings_80241A20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802418A4),
    },
};

NpcGroupList N(npcGroupList_8024318C) = {
    NPC_GROUP(N(npcGroup_80241A4C), 0x0F030003),
    NPC_GROUP(N(npcGroup_80241E2C), 0x0F000003),
    NPC_GROUP(N(npcGroup_8024220C), 0x0F000003),
    NPC_GROUP(N(npcGroup_802425EC), 0x0F000003),
    NPC_GROUP(N(npcGroup_802429CC), 0x0F010003),
    NPC_GROUP(N(npcGroup_80242DAC), 0x0F010003),
    {},
};

// rodata: D_802431E0_C55720

s32 pad_0031E8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802431F0_C55730

// rodata: D_802431F8_C55738

// rodata: jtbl_80243200_C55740

// rodata: jtbl_80243390_C558D0

