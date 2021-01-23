#include "mim_05.h"

s32 pad_000068[2];
s32 pad_001A14[3];
Script N(script_80241AA0);
s32 pad_001ADC[1];
Script N(script_ExitWalk_80241AE0);
Script N(script_ExitWalk_80241B3C);
Script N(script_ExitWalk_80241B98);
Script N(script_ExitWalk_80241BF4);
Script N(script_80241C50);
Script N(main);
s32 unk_missing_80241E04[7];
Script N(script_80241E20);
Script N(script_80242014);
Script N(script_802420AC);
Script N(script_80242134);
Script N(script_802421A8);
Script N(script_8024221C);
Script N(script_80242290);
Script N(script_802424D0);
Script N(script_80242764);
Script N(script_80242884);
Script N(script_80242954);
Script N(script_80242F80);
Script N(script_80242FFC);
Script N(script_80243078);
Script N(script_802430F4);
Script N(script_80243170);
s32 pad_003348[2];
Script N(script_80243350);
Script N(script_NpcAI_8024343C);
Script N(script_NpcAI_8024353C);
Script N(script_802435BC);
StaticNpc N(npcGroup_80243674)[2];
StaticNpc N(npcGroup_80243A54)[2];
NpcGroupList N(npcGroupList_80243E34);
s32 pad_003E58[2];
const char D_80243E60_BA4590[8]; // "mim_01"
const char D_80243E68_BA4598[8]; // "mim_06"
const char D_80243E70_BA45A0[8]; // "mim_04"
const char D_80243E78_BA45A8[8]; // "mim_08"
s32 pad_004048[2];

// text: func_80240000_BA0730

s32 pad_000068[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240278_BA09A8

// text: func_8024042C_BA0B5C

// text: func_8024068C_BA0DBC

// text: func_80240940_BA1070

// text: func_802409AC_BA10DC

// text: func_80240AA8_BA11D8

// text: func_802414E8_BA1C18

// text: func_80241578_BA1CA8

// text: func_80241678_BA1DA8

// text: func_802416D8_BA1E08

// text: func_802417C4_BA1EF4

s32 pad_001A14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, -530.0f, 180.0f },
    { -530.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 530.0f, 0.0f },
    { 530.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900AB,
};

Script N(script_80241AA0) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_001ADC[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241AE0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243E60_BA4590, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241B3C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243E68_BA4598, 3);
    sleep 100;
});

Script N(script_ExitWalk_80241B98) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80243E70_BA45A0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241BF4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80243E78_BA45A8, 1);
    sleep 100;
});

Script N(script_80241C50) = SCRIPT({
    bind N(script_ExitWalk_80241AE0) to 0x80000 1;
    bind N(script_ExitWalk_80241B3C) to 0x80000 16;
    bind N(script_ExitWalk_80241B98) to 0x80000 11;
    bind N(script_ExitWalk_80241BF4) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70004);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_80243170);
    MakeNpcs(1, N(npcGroupList_80243E34));
    SI_VAR(0) = N(script_80241C50);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80241AA0);
    await N(script_80242290);
    func_80240000_BA0730();
    SetCamSpeed(0, 3.0);
});

s32 unk_missing_80241E04[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80241E20) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_ARRAY(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_ARRAY(1)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_ARRAY(2)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_ARRAY(4)),
        SI_CMD(ScriptOpcode_CASE_EQ, 5),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 1),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 928, 0, 0xFFFFFED4, 0, 0xFFFFFFF6),
        SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(1), 0, 0, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(1), 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET, SI_VAR(9), 1),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(9), SI_VAR(10)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CASE_EQ, 5),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), SI_VAR(9)),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242014) = SCRIPT({
    PlaySoundAt(928, 0, 0xFFFFFED4, 0, 0xFFFFFFF6);
    spawn N(script_80241E20);
    sleep 30;
    loop 4 {
        spawn N(script_80241E20);
        sleep 3;
        spawn N(script_80241E20);
        sleep 3;
    }
    spawn N(script_80241E20);
});

Script N(script_802420AC) = SCRIPT({
    SI_VAR(1) = 2;
    spawn N(script_80242014);
    sleep 10;
    SI_VAR(1) = 4;
    spawn N(script_80242014);
    sleep 10;
    SI_VAR(1) = 5;
    spawn N(script_80242014);
    sleep 10;
});

Script N(script_80242134) = SCRIPT({
    PlaySoundAt(928, 0, 0xFFFFFFEC, 0, 300);
    SetTexPanOffset(0, 0, 0, 0xFFFF8000);
    sleep 20;
    SetTexPanOffset(0, 0, 0, 0);
});

Script N(script_802421A8) = SCRIPT({
    PlaySoundAt(928, 0, 20, 0, 0xFFFFFED4);
    SetTexPanOffset(1, 0, 0, 0xFFFF8000);
    sleep 20;
    SetTexPanOffset(1, 0, 0, 0);
});

Script N(script_8024221C) = SCRIPT({
    PlaySoundAt(928, 0, 300, 0, 10);
    SetTexPanOffset(3, 0, 0, 0xFFFF8000);
    sleep 50;
    SetTexPanOffset(3, 0, 0, 0);
});

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_80242290) = {
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 77, 0),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 78, 0),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 79, 0),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 64, 1),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 65, 1),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 66, 1),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 60, 3),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 61, 3),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 62, 3),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 72, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 75, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 73, 4),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 74, 4),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 68, 5),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 69, 5),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 70, 5),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 71, 5),
    SI_CMD(ScriptOpcode_USE_FLAGS, 6),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242134), TriggerFlag_WALL_INTERACT, 27, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802421A8), TriggerFlag_WALL_INTERACT, 23, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802420AC), TriggerFlag_WALL_INTERACT, 25, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024221C), TriggerFlag_WALL_INTERACT, 21, 1, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802424D0) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(7, 1);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 0;
        }
        == 1 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 1);
            SI_VAR(1) = 1;
        }
        == 2 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 1);
            SetZoneEnabled(3, 1);
            SetZoneEnabled(4, 1);
            SetZoneEnabled(5, 1);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 2;
        }
    }
});

Script N(script_80242764) = SCRIPT({
    ParentColliderToModel(33, 131);
    RotateGroup(133, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(33);
    ParentColliderToModel(37, 137);
    RotateGroup(139, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(37);
    ParentColliderToModel(35, 134);
    RotateGroup(136, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(35);
    ParentColliderToModel(39, 140);
    RotateGroup(142, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(39);
});

Script N(script_80242884) = SCRIPT({
    RotateGroup(133, 0, 0, 1, 0);
    UpdateColliderTransform(33);
    RotateGroup(139, 0, 0, 1, 0);
    UpdateColliderTransform(37);
    RotateGroup(136, 0, 0, 1, 0);
    UpdateColliderTransform(35);
    RotateGroup(142, 0, 0, 1, 0);
    UpdateColliderTransform(39);
});

Script N(script_80242954) = SCRIPT({
    spawn {
        PlaySoundAtCollider(SI_VAR(9), 468, 0);
        sleep 19;
        PlaySoundAtCollider(SI_VAR(9), 469, 0);
    }
    match SI_AREA_VAR(1) {
        == 0 {
            spawn {
                MakeLerp(10, 90, 10, 1);
            10:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 10;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_802424D0);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_80242884);
            SI_AREA_VAR(1) = 1;
            SI_SAVE_FLAG(924) = 1;
        }
        == 1 {
            spawn {
                MakeLerp(360, 270, 10, 1);
            30:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 30;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) -= SI_VAR(7);
                SI_VAR(2) -= SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 2;
            spawn N(script_802424D0);
            MakeLerp(270, 0xFFFFFFF6, 30, 0);
        40:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 40;
            }
            SI_AREA_VAR(1) = 2;
        }
        == 2 {
            spawn {
                MakeLerp(0xFFFFFFF6, 90, 10, 1);
            50:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 50;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_802424D0);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_80242884);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_80242F80) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 33;
    SI_VAR(10) = 133;
    await N(script_80242954);
    DisablePlayerInput(0);
});

Script N(script_80242FFC) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 37;
    SI_VAR(10) = 139;
    await N(script_80242954);
    DisablePlayerInput(0);
});

Script N(script_80243078) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 35;
    SI_VAR(10) = 136;
    await N(script_80242954);
    DisablePlayerInput(0);
});

Script N(script_802430F4) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 39;
    SI_VAR(10) = 142;
    await N(script_80242954);
    DisablePlayerInput(0);
});

Script N(script_80243170) = SCRIPT({
    if (SI_SAVE_FLAG(924) == 0) {
        SI_SAVE_FLAG(924) = 1;
        SI_AREA_VAR(1) = 2;
        SI_VAR(1) = 2;
        SI_VAR(2) = 0xFFFFFFF6;
    } else {
        SI_SAVE_FLAG(924) = 0;
        SI_AREA_VAR(1) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 10;
    }
    await N(script_802424D0);
    spawn N(script_80242764);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_80242F80) to TriggerFlag_WALL_INTERACT 33;
    bind N(script_80242FFC) to TriggerFlag_WALL_INTERACT 37;
    bind N(script_802430F4) to TriggerFlag_WALL_INTERACT 39;
    bind N(script_80243078) to TriggerFlag_WALL_INTERACT 35;
});

s32 pad_003348[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243350) = SCRIPT({
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

NpcAISettings N(aISettings_8024340C) = {
    .moveSpeed = 0.0,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0,
    .unk_10 = 0.0,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0,
    .unk_28 = 0.0,
    .unk_2C = 0,
};

Script N(script_NpcAI_8024343C) = SCRIPT({
    SetSelfVar(7, 0);
    SetSelfVar(8, 12);
    SetSelfVar(9, 11);
    SetSelfVar(10, 14);
    SetSelfVar(11, 9);
    SetSelfVar(12, 25);
    SetSelfVar(13, -1);
    SetSelfVar(14, 10);
    SetSelfVar(15, 15);
    func_802417C4_BA1EF4(N(aISettings_8024340C));
});

NpcSettings N(npcSettings_80243510) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x1A,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024343C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

Script N(script_NpcAI_8024353C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 10);
    SetSelfVar(1, 18);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_8024042C_BA0B5C();
});

Script N(script_802435BC) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

NpcSettings N(npcSettings_80243648) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x12,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024353C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80243350),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80243674)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243510),
        .pos = { -240.0, 0.0, 240.0 },
        .flags = 0x00002D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80243648),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
};

StaticNpc N(npcGroup_80243A54)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243510),
        .pos = { 240.0, 0.0, -240.0 },
        .flags = 0x00002D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80243648),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
};

NpcGroupList N(npcGroupList_80243E34) = {
    NPC_GROUP(N(npcGroup_80243674), 0x0D0B0001),
    NPC_GROUP(N(npcGroup_80243A54), 0x0D0A0001),
    {},
};

s32 pad_003E58[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243E60_BA4590

// rodata: D_80243E68_BA4598

// rodata: D_80243E70_BA45A0

// rodata: D_80243E78_BA45A8

// rodata: D_80243E80_BA45B0

// rodata: jtbl_80243E88_BA45B8

// rodata: D_80244018_BA4748

// rodata: D_80244020_BA4750

// rodata: D_80244028_BA4758

// rodata: D_80244030_BA4760

// rodata: D_80244038_BA4768

// rodata: D_80244040_BA4770

s32 pad_004048[] = {
    0x00000000, 0x00000000,
};

