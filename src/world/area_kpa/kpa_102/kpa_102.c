#include "kpa_102.h"

s32 pad_00030C[1];
s32 pad_003584[3];
Script N(script_802435F0);
s32 pad_003658[2];
Script N(script_UpdateTexturePan_80243660);
Script N(script_ExitWalk_802436FC);
Script N(script_ExitDoubleDoor_80243758);
Script N(script_802437FC);
Script N(script_EnterDoubleDoor_80243844);
Script N(main);
s32 pad_003F44[3];
Script N(script_80243F50);
Script N(script_NpcAI_80244050);
Script N(script_NpcAI_8024411C);
Script N(script_NpcAI_80244178);
Script N(script_80244188);
s32 N(extraAnimationList_8024437C)[2];
Script N(script_NpcAI_802443B4);
Script N(script_NpcAI_80244480);
Script N(script_802444A0);
s32 N(extraAnimationList_80244568)[8];
Script N(script_80244588);
Script N(script_802445C0);
Script N(script_NpcAI_802445F8);
Script N(script_80244614);
Script N(script_80244668);
s32 unk_missing_80244724[11];
StaticNpc N(npcGroup_8024477C)[1];
StaticNpc N(npcGroup_8024496C)[2];
StaticNpc N(npcGroup_80244D4C)[7];
NpcGroupList N(npcGroupList_80245ADC);
s32 pad_005B0C[1];
const char D_80245B10_A99250[8]; // "kpa_41"
const char D_80245B18_A99258[8]; // "kpa_53"
s32 pad_005D34[1];
s32 pad_005D6C[1];
s32 pad_005E44[3];

// text: func_80240000_A93740

// text: func_80240124_A93864

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_A93A50

// text: func_80240500_A93C40

// text: func_80240644_A93D84

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_8024086C_A93FAC

// text: func_80240DA8_A944E8

// text: func_80241204_A94944

// text: func_80241524_A94C64

// text: N(set_script_owner_npc_anim)

// text: func_802415D8_A94D18

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802418F0_A95030

// text: func_80241D30_A95470

// text: func_80241F00_A95640

// text: func_80242410_A95B50

// text: func_8024244C_A95B8C

// text: func_802425D8_A95D18

// text: func_802429C8_A96108

// text: func_80242ABC_A961FC

// text: func_80242D00_A96440

// text: func_80242D3C_A9647C

// text: func_80242F08_A96648

// text: func_80242F74_A966B4

// text: func_802430A8_A967E8

// text: func_80243198_A968D8

// text: func_80243270_A969B0

// text: func_80243504_A96C44

// text: func_8024353C_A96C7C

s32 pad_003584[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -480.0f, 0.0f, -215.0f, 90.0f },
    { 764.0f, 0.0f, -215.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19017D,
};

Script N(script_802435F0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(7);
    }
});

s32 pad_003658[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80243660) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A93740();
                    return;
                }
            }
        }
    }
    func_80240124_A93864();
});

Script N(script_ExitWalk_802436FC) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80245B10_A99250, 2);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80243758) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 6;
    SI_VAR(2) = 8;
    SI_VAR(3) = 10;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245B18_A99258, 0);
    sleep 100;
});

Script N(script_802437FC) = SCRIPT({
    bind N(script_ExitWalk_802436FC) to 0x80000 1;
    bind N(script_ExitDoubleDoor_80243758) to TriggerFlag_WALL_INTERACT 6;
});

Script N(script_EnterDoubleDoor_80243844) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_802437FC);
            spawn EnterWalk;
            sleep 1;
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 8;
            SI_VAR(3) = 10;
            spawn EnterDoubleDoor;
            spawn N(script_802437FC);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80245ADC));
    spawn N(script_EnterDoubleDoor_80243844);
    spawn N(script_802435F0);
    EnableTexPanning(71, 1);
    EnableTexPanning(73, 1);
    EnableTexPanning(75, 1);
    EnableTexPanning(77, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243660);
    }
    spawn {
        loop {
            ScaleModel(71, 1.0, 1, 1.0);
            ScaleModel(73, 1.0, 1, 1.0);
            ScaleModel(75, 1.0, 1, 1.0);
            ScaleModel(77, 1.0, 1, 1.0);
            sleep 10;
            ScaleModel(71, 0.98046875, 1, 0.98046875);
            ScaleModel(73, 0.98046875, 1, 0.98046875);
            ScaleModel(75, 0.98046875, 1, 0.98046875);
            ScaleModel(77, 0.98046875, 1, 0.98046875);
            sleep 10;
            ScaleModel(71, 0.9609375, 1, 0.9609375);
            ScaleModel(73, 0.9609375, 1, 0.9609375);
            ScaleModel(75, 0.9609375, 1, 0.9609375);
            ScaleModel(77, 0.9609375, 1, 0.9609375);
            sleep 10;
        }
    }
});

s32 pad_003F44[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243F50) = SCRIPT({
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

NpcAISettings N(aISettings_80244020) = {
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

Script N(script_NpcAI_80244050) = SCRIPT({
    SetSelfVar(0, 70);
    SetSelfVar(1, 3);
    SetSelfVar(2, 3);
    SetSelfVar(3, 6);
    func_80241204_A94944(N(aISettings_80244020));
});

NpcSettings N(npcSettings_802440C0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244050),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_802440EC) = {
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

Script N(script_NpcAI_8024411C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 20);
    func_8024086C_A93FAC(N(aISettings_802440EC));
});

Script N(script_NpcAI_80244178) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80244188) = {
    SI_CMD(ScriptOpcode_CALL, func_80241524_A94C64),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80244178)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80240DA8_A944E8),
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
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_8024411C)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_80244350) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xC,
    .radius = 0xC,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024411C),
    .onHit = &N(script_80244188),
    .aux = NULL,
    .onDefeat = &N(script_80243F50),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_8024437C)[] = {
    0x005A000D, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_80244384) = {
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

Script N(script_NpcAI_802443B4) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 4);
    SetSelfVar(5, 10);
    SetSelfVar(7, 5);
    func_802418F0_A95030(N(aISettings_80244384));
});

NpcSettings N(npcSettings_80244424) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802443B4),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80244450) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 20.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 5.0f,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 150.0f,
    .unk_28 = 20.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244480) = SCRIPT({
    func_80243270_A969B0(N(aISettings_80244450));
});

Script N(script_802444A0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            func_80045900(0);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_8024453C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x21,
    .radius = 0x20,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244480),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &N(script_802444A0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80244568)[] = {
    0x00570000, 0x00570001, 0x00570001, 0x00570001, 0x00570002, 0x00570003, 0x00570004, 0xFFFFFFFF,
};

Script N(script_80244588) = SCRIPT({
    SetSelfVar(1, 10);
    SetSelfVar(2, 40);
});

Script N(script_802445C0) = SCRIPT({
    SetSelfVar(1, 0);
    SetSelfVar(2, 55);
});

Script N(script_NpcAI_802445F8) = SCRIPT({
    func_80241F00_A95640();
});

Script N(script_80244614) = SCRIPT({
    func_80243504_A96C44();
    if (SI_VAR(0) == 0) {
        return;
    }
    func_8024353C_A96C7C();
    spawn EnemyNpcHit;
});

Script N(script_80244668) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
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

s32 unk_missing_80244724[] = {
    0x00560000, 0x00000000, N(script_80244588), 0x00000000, N(script_NpcAI_802445F8), N(script_80244614), 0x00000000, N(script_80244668),
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80244750) = {
    .unk_00 = { 0, 0x57, 0, 0 },
    .height = 0,
    .radius = 0,
    .otherAI = &N(script_802445C0),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802445F8),
    .onHit = &N(script_80244614),
    .aux = NULL,
    .onDefeat = &N(script_80244668),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_8024477C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244424),
        .pos = { -200.0, 0.0, -225.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF38, 0x00000000, 0xFFFFFF1F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF38, 0x00000000, 0xFFFFFF1F, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
};

StaticNpc N(npcGroup_8024496C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024453C),
        .pos = { 125.0, 50.0, -225.0 },
        .flags = 0x00000800,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 }, { ItemId_THUNDER_RAGE, 5 }, { ItemId_STOP_WATCH, 5 } },
        .movement = { 0x0000007D, 0x00000032, 0xFFFFFF1F, 0x00000078, 0x00000019, 0xFFFF8001, 0x00000001, 0x0000007D, 0x00000032, 0xFFFFFF1F, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00570000, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570004, 0x00570004, 0x00570002, 0x00570003, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001,
        },
        .extraAnimations = N(extraAnimationList_80244568),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80244750),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000, 0x00570000,
        },
    },
};

StaticNpc N(npcGroup_80244D4C)[] = {
    {
        .id = 50,
        .settings = &N(npcSettings_802440C0),
        .pos = { 450.0, 0.0, -225.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 } },
        .movement = { 0x000001C2, 0x00000000, 0xFFFFFF1F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001C2, 0x00000000, 0xFFFFFF1F, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
    },
    {
        .id = 51,
        .settings = &N(npcSettings_80244350),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024437C),
    },
    {
        .id = 52,
        .settings = &N(npcSettings_80244350),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024437C),
    },
    {
        .id = 53,
        .settings = &N(npcSettings_80244350),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024437C),
    },
    {
        .id = 54,
        .settings = &N(npcSettings_80244350),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024437C),
    },
    {
        .id = 55,
        .settings = &N(npcSettings_80244350),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024437C),
    },
    {
        .id = 56,
        .settings = &N(npcSettings_80244350),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024437C),
    },
};

NpcGroupList N(npcGroupList_80245ADC) = {
    NPC_GROUP(N(npcGroup_8024477C), 0x2224000B),
    NPC_GROUP(N(npcGroup_8024496C), 0x2232000B),
    NPC_GROUP(N(npcGroup_80244D4C), 0x2216000B),
    {},
};

s32 pad_005B0C[] = {
    0x00000000,
};

// rodata: D_80245B10_A99250

// rodata: D_80245B18_A99258

// rodata: D_80245B20_A99260

// rodata: D_80245B28_A99268

// rodata: D_80245B30_A99270

// rodata: D_80245B38_A99278

// rodata: D_80245B40_A99280

// rodata: jtbl_80245B48_A99288

// rodata: D_80245CD8_A99418

// rodata: jtbl_80245CE0_A99420

s32 pad_005D34[] = {
    0x00000000,
};

// rodata: D_80245D38_A99478

// rodata: D_80245D40_A99480

// rodata: D_80245D48_A99488

// rodata: D_80245D50_A99490

// rodata: jtbl_80245D58_A99498

s32 pad_005D6C[] = {
    0x00000000,
};

// rodata: D_80245D70_A994B0

// rodata: D_80245D78_A994B8

// rodata: D_80245D80_A994C0

// rodata: D_80245D88_A994C8

// rodata: D_80245D90_A994D0

// rodata: D_80245D98_A994D8

// rodata: jtbl_80245DA0_A994E0

s32 pad_005E44[] = {
    0x00000000, 0x00000000, 0x00000000,
};
