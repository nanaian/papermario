#include "kpa_50.h"

Script N(script_80241A80);
s32 pad_001AF8[2];
Script N(script_ExitWalk_80241B00);
Script N(script_ExitDoubleDoor_80241B5C);
Script N(script_80241C00);
Script N(script_EnterDoubleDoor_80241C48);
Script N(main);
Script N(script_80241DF0);
Script N(script_NpcAI_80241EF0);
Script N(script_NpcAI_80241FBC);
Script N(script_NpcAI_80242018);
Script N(script_80242028);
s32 N(extraAnimationList_8024221C)[2];
Script N(script_NpcAI_80242254);
StaticNpc N(npcGroup_802422F0)[1];
StaticNpc N(npcGroup_802424E0)[1];
StaticNpc N(npcGroup_802426D0)[7];
NpcGroupList N(npcGroupList_80243460);
const char D_80243490_A63E60[8]; // "kpa_70"
const char D_80243498_A63E68[8]; // "kpa_81"
s32 pad_0036B4[3];

// text: func_80240000_A609D0

// text: func_802401F0_A60BC0

// text: func_80240334_A60D04

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_8024055C_A60F2C

// text: func_80240A98_A61468

// text: func_80240EF4_A618C4

// text: func_80241214_A61BE4

// text: N(set_script_owner_npc_anim)

// text: func_802412C8_A61C98

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802415E0_A61FB0

EntryList N(entryList) = {
    { -480.0f, 0.0f, -28.0f, 90.0f },
    { 770.0f, 0.0f, -28.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19015A,
};

Script N(script_80241A80) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    ClearAmbientSounds(250);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(5);
    }
});

s32 pad_001AF8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80241B00) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243490_A63E60, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241B5C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 14;
    SI_VAR(2) = 135;
    SI_VAR(3) = 133;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243498_A63E68, 0);
    sleep 100;
});

Script N(script_80241C00) = SCRIPT({
    bind N(script_ExitWalk_80241B00) to 0x80000 8;
    bind N(script_ExitDoubleDoor_80241B5C) to TriggerFlag_WALL_INTERACT 14;
});

Script N(script_EnterDoubleDoor_80241C48) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_80241C00);
            spawn EnterWalk;
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 135;
            SI_VAR(3) = 133;
            spawn EnterDoubleDoor;
            spawn N(script_80241C00);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243460));
    SetGroupEnabled(130, 0);
    SetGroupEnabled(132, 0);
    ModifyColliderFlags(1, 14, 0x7FFFFE00);
    spawn N(script_EnterDoubleDoor_80241C48);
    sleep 1;
    spawn N(script_80241A80);
});

Script N(script_80241DF0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            func_80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80241EC0) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 120.0f,
    .unk_10 = 20.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x5A,
    .unk_20 = 0x3,
    .chaseRadius = 140.0f,
    .unk_28 = 20.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241EF0) = SCRIPT({
    SetSelfVar(0, 70);
    SetSelfVar(1, 3);
    SetSelfVar(2, 3);
    SetSelfVar(3, 6);
    func_80240EF4_A618C4(N(aISettings_80241EC0));
});

NpcSettings N(npcSettings_80241F60) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241EF0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80241F8C) = {
    .moveSpeed = 5.4f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 13.0f,
    .unk_10 = 1.4f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241FBC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 20);
    func_8024055C_A60F2C(N(aISettings_80241F8C));
});

Script N(script_NpcAI_80242018) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80242028) = {
    SI_CMD(ScriptOpcode_CALL, func_80241214_A61BE4),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80242018)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80240A98_A61468),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 4),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 0, 0xFFFFFC18, 0),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, func_800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241FBC)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_802421F0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xC,
    .radius = 0xC,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241FBC),
    .onHit = &N(script_80242028),
    .aux = NULL,
    .onDefeat = &N(script_80241DF0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_8024221C)[] = {
    0x005A000D, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_80242224) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 90.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 11.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 40.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242254) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 4);
    SetSelfVar(5, 10);
    SetSelfVar(7, 5);
    func_802415E0_A61FB0(N(aISettings_80242224));
});

NpcSettings N(npcSettings_802422C4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242254),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802422F0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802422C4),
        .pos = { -251.0, 0.0, -30.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF05, 0x00000000, 0xFFFFFFE2, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF05, 0x00000000, 0xFFFFFFE2, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
};

StaticNpc N(npcGroup_802424E0)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802422C4),
        .pos = { 100.0, 0.0, -30.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000064, 0x00000000, 0xFFFFFFE2, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000064, 0x00000000, 0xFFFFFFE2, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
};

StaticNpc N(npcGroup_802426D0)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80241F60),
        .pos = { 450.0, 0.0, -30.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 } },
        .movement = { 0x000001C2, 0x00000000, 0xFFFFFFE2, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001C2, 0x00000000, 0xFFFFFFE2, 0x0000012C },
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
    },
    {
        .id = 11,
        .settings = &N(npcSettings_802421F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024221C),
    },
    {
        .id = 12,
        .settings = &N(npcSettings_802421F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024221C),
    },
    {
        .id = 13,
        .settings = &N(npcSettings_802421F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024221C),
    },
    {
        .id = 14,
        .settings = &N(npcSettings_802421F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024221C),
    },
    {
        .id = 15,
        .settings = &N(npcSettings_802421F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024221C),
    },
    {
        .id = 16,
        .settings = &N(npcSettings_802421F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024221C),
    },
};

NpcGroupList N(npcGroupList_80243460) = {
    NPC_GROUP(N(npcGroup_802422F0), 0x22180001),
    NPC_GROUP(N(npcGroup_802424E0), 0x221A0001),
    NPC_GROUP(N(npcGroup_802426D0), 0x220F0001),
    {},
};

// rodata: D_80243490_A63E60

// rodata: D_80243498_A63E68

// rodata: D_802434A0_A63E70

// rodata: D_802434A8_A63E78

// rodata: D_802434B0_A63E80

// rodata: D_802434B8_A63E88

// rodata: D_802434C0_A63E90

// rodata: jtbl_802434C8_A63E98

// rodata: D_80243658_A64028

// rodata: jtbl_80243660_A64030

s32 pad_0036B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
