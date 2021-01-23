#include "kpa_09.h"

s32 pad_00009C[1];
s32 pad_0012EC[1];
Script N(script_80241350);
s32 pad_0013B8[2];
Script N(script_ExitWalk_802413C0);
Script N(script_ExitDoubleDoor_8024141C);
Script N(script_802414C0);
Script N(script_EnterDoubleDoor_80241508);
Script N(main);
s32 pad_0016C8[2];
Script N(script_802416D0);
Script N(script_MakeEntities);
s32 pad_001B84[3];
Script N(script_80241B90);
Script N(script_NpcAI_80241C90);
Script N(script_NpcAI_80241D5C);
Script N(script_NpcAI_80241DCC);
Script N(script_80241DDC);
StaticNpc N(npcGroup_80241FD0)[4];
NpcGroupList N(npcGroupList_80242790);
s32 pad_0027A8[2];
const char D_802427B0_A517B0[9]; // "kpa_101"
const char D_802427B8_A517B8[8]; // "kpa_33"
s32 pad_002978[2];

// text: func_80240000_A4F000

// text: func_8024001C_A4F01C

s32 pad_00009C[] = {
    0x00000000,
};

// text: func_802400A0_A4F0A0

// text: func_80240290_A4F290

// text: func_802403D4_A4F3D4

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_802405FC_A4F5FC

// text: func_80240B38_A4FB38

// text: func_80240F94_A4FF94

// text: func_802412B4_A502B4

s32 pad_0012EC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -483.0f, 100.0f, -17.0f, 90.0f },
    { 202.0f, 0.0f, -16.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19017B,
};

Script N(script_80241350) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(7);
    }
});

s32 pad_0013B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802413C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802427B0_A517B0, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_8024141C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 78;
    SI_VAR(3) = 76;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802427B8_A517B8, 3);
    sleep 100;
});

Script N(script_802414C0) = SCRIPT({
    bind N(script_ExitWalk_802413C0) to 0x80000 5;
    bind N(script_ExitDoubleDoor_8024141C) to TriggerFlag_WALL_INTERACT 2;
});

Script N(script_EnterDoubleDoor_80241508) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_802414C0);
            spawn EnterWalk;
            sleep 1;
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 78;
            SI_VAR(3) = 76;
            spawn EnterDoubleDoor;
            spawn N(script_802414C0);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242790));
    await N(script_MakeEntities);
    ModifyColliderFlags(0, 7, 0x7FFFFE00);
    EnableModel(80, 0);
    EnableModel(82, 0);
    spawn N(script_EnterDoubleDoor_80241508);
    sleep 1;
    spawn N(script_80241350);
});

s32 pad_0016C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802416D0) = SCRIPT({
    if (SI_AREA_FLAG(4) != 0) {
        return;
    }
    SI_AREA_FLAG(4) = 1;
    func_80240000_A4F000();
    spawn {
        group 239;
        PlaySoundAtCollider(16, 551, 0);
        MakeLerp(0xFFFFFFCE, 0, 15, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4F01C(16, 100);
            TranslateGroup(65, 0, SI_VAR(0), 0);
            UpdateColliderTransform(16);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 80;
        PlaySoundAtCollider(16, 552, 0);
        MakeLerp(0, 0xFFFFFFCE, 15, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4F01C(16, 100);
            TranslateGroup(65, 0, SI_VAR(0), 0);
            UpdateColliderTransform(16);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        group 239;
        DisablePlayerInput(1);
        PlaySoundAtCollider(18, 551, 0);
        EnableGroup(68, 1);
        MakeLerp(0xFFFFFFCE, 0, 15, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4F01C(18, 100);
            TranslateGroup(68, 0, SI_VAR(0), 0);
            UpdateColliderTransform(18);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        DisablePlayerInput(0);
        sleep 80;
        PlaySoundAtCollider(18, 552, 0);
        MakeLerp(0, 0xFFFFFFCE, 15, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4F01C(18, 100);
            TranslateGroup(68, 0, SI_VAR(0), 0);
            UpdateColliderTransform(18);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SI_AREA_FLAG(4) = 0;
    }
});

Script N(script_MakeEntities) = SCRIPT({
    SI_AREA_FLAG(4) = 0;
    MakeEntity(0x802E9BB0, 0xFFFFFEBB, 0, 0xFFFFFFF8, 0, 0x80000000);
    AssignScript(N(script_802416D0));
    ParentColliderToModel(16, 64);
    TranslateGroup(65, 0, 0xFFFFFFCE, 0);
    UpdateColliderTransform(16);
    ParentColliderToModel(18, 67);
    TranslateGroup(68, 0, 0xFFFFFFCE, 0);
    UpdateColliderTransform(18);
});

s32 pad_001B84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241B90) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
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

NpcAISettings N(aISettings_80241C60) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x14,
    .waitTime = 0x3,
    .alertRadius = 120.0f,
    .unk_10 = 120.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 1.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 150.0f,
    .unk_28 = 150.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241C90) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 15);
    SetSelfVar(2, 10);
    SetSelfVar(3, 2);
    func_80240F94_A4FF94(N(aISettings_80241C60));
});

NpcSettings N(npcSettings_80241D00) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241C90),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1E,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80241D2C) = {
    .moveSpeed = 7.5f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 1.1f,
    .unk_10 = 0.18f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241D5C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 15);
    SetSelfVar(3, 15);
    func_802405FC_A4F5FC(N(aISettings_80241D2C));
});

Script N(script_NpcAI_80241DCC) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80241DDC) = {
    SI_CMD(ScriptOpcode_CALL, func_802412B4_A502B4),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241DCC)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80240B38_A4FB38),
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
            SI_CMD(ScriptOpcode_CALL, 0x800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241D5C)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_80241FA4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xC,
    .radius = 0xC,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241D5C),
    .onHit = &N(script_80241DDC),
    .aux = NULL,
    .onDefeat = &N(script_80241B90),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80241FD0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241D00),
        .pos = { -73.0, 0.0, 0.0 },
        .flags = 0x00000800,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFFB7, 0x00000000, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFB7, 0x00000000, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00530002, 0x00530003, 0x00530004, 0x00530004, 0x00530002, 0x00530002, 0x00530007, 0x00530007, 0x00530005, 0x00530006, 0x00530002, 0x00530002, 0x00530002, 0x00530002, 0x00530002, 0x00530002,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241FA4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241FA4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241FA4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
};

NpcGroupList N(npcGroupList_80242790) = {
    NPC_GROUP(N(npcGroup_80241FD0), 0x220B0002),
    {},
};

s32 pad_0027A8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802427B0_A517B0

// rodata: D_802427B8_A517B8

// rodata: D_802427C0_A517C0

// rodata: D_802427C8_A517C8

// rodata: D_802427D0_A517D0

// rodata: D_802427D8_A517D8

// rodata: D_802427E0_A517E0

// rodata: jtbl_802427E8_A517E8

s32 pad_002978[] = {
    0x00000000, 0x00000000,
};
