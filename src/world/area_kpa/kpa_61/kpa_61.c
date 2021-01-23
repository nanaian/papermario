#include "kpa_61.h"

s32 pad_00030C[1];
s32 pad_002338[2];
Script N(script_802423A0);
s32 pad_002408[2];
Script N(script_UpdateTexturePan_80242410);
Script N(script_ExitDoubleDoor_802424AC);
Script N(script_ExitDoubleDoor_80242550);
Script N(script_802425F4);
Script N(script_EnterDoubleDoor_8024263C);
Script N(script_80242718);
Script N(main);
s32 pad_002BF8[2];
Script N(script_NpcAI_80242C30);
Script N(script_NpcAI_80242CFC);
Script N(script_80242D1C);
s32 N(extraAnimationList_80242DE4)[8];
Script N(script_80242E04);
Script N(script_80242E3C);
Script N(script_NpcAI_80242E74);
Script N(script_80242E90);
Script N(script_80242EE4);
s32 unk_missing_80242FA0[11];
StaticNpc N(npcGroup_80242FF8)[1];
StaticNpc N(npcGroup_802431E8)[1];
StaticNpc N(npcGroup_802433D8)[2];
StaticNpc N(npcGroup_802437B8)[2];
NpcGroupList N(npcGroupList_80243B98);
s32 pad_003BD4[3];
Script N(script_MakeEntities);
s32 pad_003CBC[1];
const char D_80243CC0_A720A0[8]; // "kpa_82"
const char D_80243CC8_A720A8[8]; // "kpa_33"
s32 pad_003D2C[1];
s32 pad_003D64[1];
s32 pad_003E3C[1];

// text: func_80240000_A6E3E0

// text: func_80240124_A6E504

s32 pad_00030C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024038C_A6E76C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802406A4_A6EA84

// text: func_80240AE4_A6EEC4

// text: func_80240CB4_A6F094

// text: func_802411C4_A6F5A4

// text: func_80241200_A6F5E0

// text: func_8024138C_A6F76C

// text: func_8024177C_A6FB5C

// text: func_80241870_A6FC50

// text: func_80241AB4_A6FE94

// text: func_80241AF0_A6FED0

// text: func_80241CBC_A7009C

// text: func_80241D28_A70108

// text: func_80241E5C_A7023C

// text: func_80241F4C_A7032C

// text: func_80242024_A70404

// text: func_802422B8_A70698

// text: func_802422F0_A706D0

s32 pad_002338[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -100.0f, -160.0f, 116.0f, 120.0f },
    { -100.0f, 200.0f, 102.0f, 120.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190177,
};

Script N(script_802423A0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(4);
    }
});

s32 pad_002408[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80242410) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A6E3E0();
                    return;
                }
            }
        }
    }
    func_80240124_A6E504();
});

Script N(script_ExitDoubleDoor_802424AC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 13;
    SI_VAR(2) = 27;
    SI_VAR(3) = 25;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243CC0_A720A0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80242550) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 18;
    SI_VAR(2) = 29;
    SI_VAR(3) = 31;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243CC8_A720A8, 1);
    sleep 100;
});

Script N(script_802425F4) = SCRIPT({
    bind N(script_ExitDoubleDoor_802424AC) to TriggerFlag_WALL_INTERACT 13;
    bind N(script_ExitDoubleDoor_80242550) to TriggerFlag_WALL_INTERACT 18;
});

Script N(script_EnterDoubleDoor_8024263C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(2) = 27;
            SI_VAR(3) = 25;
            spawn EnterDoubleDoor;
            spawn N(script_802425F4);
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 29;
            SI_VAR(3) = 31;
            spawn EnterDoubleDoor;
            spawn N(script_802425F4);
        }
    }
});

Script N(script_80242718) = SCRIPT({
    EnableTexPanning(20, 1);
    EnableTexPanning(21, 1);
    EnableTexPanning(22, 1);
    EnableTexPanning(23, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFA6;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242410);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFF7E;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242410);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF88;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242410);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 0xFFFFFFBA;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242410);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243B98));
    await N(script_MakeEntities);
    spawn N(script_EnterDoubleDoor_8024263C);
    sleep 1;
    spawn N(script_80242718);
    spawn N(script_802423A0);
});

s32 pad_002BF8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242C00) = {
    .moveSpeed = 1.0,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 90.0,
    .unk_10 = 40.0,
    .unk_14 = 0x2,
    .chaseSpeed = 11.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0,
    .unk_28 = 40.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242C30) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 4);
    SetSelfVar(5, 10);
    SetSelfVar(7, 5);
    func_802406A4_A6EA84(N(aISettings_80242C00));
});

NpcSettings N(npcSettings_80242CA0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242C30),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80242CCC) = {
    .moveSpeed = 1.5,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 100.0,
    .unk_10 = 20.0,
    .unk_14 = 0x3,
    .chaseSpeed = 5.0,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 150.0,
    .unk_28 = 20.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242CFC) = SCRIPT({
    func_80242024_A70404(N(aISettings_80242CCC));
});

Script N(script_80242D1C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            0x80045900(0);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_80242DB8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x21,
    .radius = 0x20,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242CFC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = &N(script_80242D1C),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80242DE4)[] = {
    0x00570000, 0x00570001, 0x00570001, 0x00570001, 0x00570002, 0x00570003, 0x00570004, 0xFFFFFFFF,
};

Script N(script_80242E04) = SCRIPT({
    SetSelfVar(1, 10);
    SetSelfVar(2, 40);
});

Script N(script_80242E3C) = SCRIPT({
    SetSelfVar(1, 0);
    SetSelfVar(2, 55);
});

Script N(script_NpcAI_80242E74) = SCRIPT({
    func_80240CB4_A6F094();
});

Script N(script_80242E90) = SCRIPT({
    func_802422B8_A70698();
    if (SI_VAR(0) == 0) {
        return;
    }
    func_802422F0_A706D0();
    spawn EnemyNpcHit;
});

Script N(script_80242EE4) = SCRIPT({
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

s32 unk_missing_80242FA0[] = {
    0x00560000, 0x00000000, N(script_80242E04), 0x00000000, N(script_NpcAI_80242E74), N(script_80242E90), 0x00000000, N(script_80242EE4),
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242FCC) = {
    .unk_00 = { 0, 0x57, 0, 0 },
    .height = 0,
    .radius = 0,
    .otherAI = &N(script_80242E3C),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242E74),
    .onHit = &N(script_80242E90),
    .aux = NULL,
    .onDefeat = &N(script_80242EE4),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80242FF8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242CA0),
        .pos = { 300.0, -160.0, 140.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x0000012C, 0xFFFFFF60, 0x0000008C, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000012C, 0xFFFFFF60, 0x0000008C, 0x000000C8 },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
};

StaticNpc N(npcGroup_802431E8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242CA0),
        .pos = { 850.0, -160.0, 390.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000352, 0xFFFFFF60, 0x00000186, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000352, 0xFFFFFF60, 0x00000186, 0x000000C8 },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
};

StaticNpc N(npcGroup_802433D8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242DB8),
        .pos = { 500.0, 250.0, -50.0 },
        .flags = 0x00000800,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 }, { ItemId_THUNDER_RAGE, 5 }, { ItemId_STOP_WATCH, 5 } },
        .movement = { 0x000001F4, 0x000000FA, 0xFFFFFFCE, 0x00000078, 0x00000019, 0xFFFF8001, 0x00000001, 0x000001F4, 0x000000FA, 0xFFFFFFCE, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00570000, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570004, 0x00570004, 0x00570002, 0x00570003, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001,
        },
        .extraAnimations = N(extraAnimationList_80242DE4),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242FCC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000,
        },
    },
};

StaticNpc N(npcGroup_802437B8)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80242DB8),
        .pos = { 200.0, 250.0, -50.0 },
        .flags = 0x00000800,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 }, { ItemId_THUNDER_RAGE, 5 }, { ItemId_STOP_WATCH, 5 } },
        .movement = { 0x000000C8, 0x000000FA, 0xFFFFFFCE, 0x00000078, 0x00000019, 0xFFFF8001, 0x00000001, 0x000000C8, 0x000000FA, 0xFFFFFFCE, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00570000, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570004, 0x00570004, 0x00570002, 0x00570003, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001,
        },
        .extraAnimations = N(extraAnimationList_80242DE4),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80242FCC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000,
        },
    },
};

NpcGroupList N(npcGroupList_80243B98) = {
    NPC_GROUP(N(npcGroup_80242FF8), 0x22230009),
    NPC_GROUP(N(npcGroup_802431E8), 0x22210009),
    NPC_GROUP(N(npcGroup_802433D8), 0x22350009),
    NPC_GROUP(N(npcGroup_802437B8), 0x22330009),
    {},
};

s32 pad_003BD4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 0xFFFFFF1F, 0xFFFFFF9C, 175, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1567));
    MakeEntity(0x802EA564, 60, 0xFFFFFF9C, 60, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1568));
    MakeEntity(0x802EA564, 575, 0xFFFFFF9C, 60, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1569));
    MakeItemEntity(162, 1070, 0xFFFFFFD8, 320, 17, SI_SAVE_FLAG(1570));
});

s32 pad_003CBC[] = {
    0x00000000,
};

// rodata: D_80243CC0_A720A0

// rodata: D_80243CC8_A720A8

// rodata: D_80243CD0_A720B0

// rodata: jtbl_80243CD8_A720B8

s32 pad_003D2C[] = {
    0x00000000,
};

// rodata: D_80243D30_A72110

// rodata: D_80243D38_A72118

// rodata: D_80243D40_A72120

// rodata: D_80243D48_A72128

// rodata: jtbl_80243D50_A72130

s32 pad_003D64[] = {
    0x00000000,
};

// rodata: D_80243D68_A72148

// rodata: D_80243D70_A72150

// rodata: D_80243D78_A72158

// rodata: D_80243D80_A72160

// rodata: D_80243D88_A72168

// rodata: D_80243D90_A72170

// rodata: jtbl_80243D98_A72178

s32 pad_003E3C[] = {
    0x00000000,
};

