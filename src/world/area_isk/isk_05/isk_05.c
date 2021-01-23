#include "isk_05.h"

Script N(script_ExitWalk_80241F10);
Script N(script_80241F6C);
Script N(script_EnterWalk_80241F98);
Script N(main);
s32 pad_002204[3];
Script N(script_80242210);
Script N(script_MakeEntities);
s32 pad_00237C[1];
Script N(script_80242380);
Script N(script_NpcAI_802423CC);
Script N(script_8024243C);
Script N(script_80242578);
s32 N(unk_80242614)[1];
s32 N(unk_80242618)[13];
s32 N(unk_8024264C)[3];
Script N(script_Idle_80242658);
Script N(script_Defeat_80242A8C);
Script N(script_Init_80242BF8);
StaticNpc N(npcGroup_80242C8C)[1];
NpcGroupList N(npcGroupList_80242E7C);
s32 pad_002E94[3];
const char D_80242EA0_980970[8]; // "isk_04"
s32 pad_002EA8[2];
s32 pad_002EF4[1];
s32 pad_002F34[1];
s32 pad_002F48[2];

// text: func_80240000_97DAD0

// text: func_80240230_97DD00

// text: N(UnkNpcAIFunc1)

// text: func_80240628_97E0F8

// text: func_802407CC_97E29C

// text: func_802408AC_97E37C

// text: N(UnkDurationCheck)

// text: func_80240BF0_97E6C0

// text: func_80240E14_97E8E4

// text: func_80240EA8_97E978

// text: func_80240F3C_97EA0C

// text: func_80241108_97EBD8

// text: func_802411F8_97ECC8

// text: func_802415C0_97F090

// text: func_80241610_97F0E0

// text: func_80241B28_97F5F8

// text: func_80241C34_97F704

// text: func_80241C5C_97F72C

// text: func_80241D44_97F814

// text: func_80241DF8_97F8C8

// text: func_80241E24_97F8F4

EntryList N(entryList) = {
    { 463.0f, 25.0f, -279.0f, 320.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190099,
};

Script N(script_ExitWalk_80241F10) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242EA0_980970, 4);
    sleep 100;
});

Script N(script_80241F6C) = SCRIPT({
    bind N(script_ExitWalk_80241F10) to 0x80000 0;
});

Script N(script_EnterWalk_80241F98) = SCRIPT({
    TranslateGroup(31, 0, 65, 0);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    SI_VAR(0) = N(script_80241F6C);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20002);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242E7C));
    await N(script_MakeEntities);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
    TranslateGroup(31, 0, 65, 0);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    if (SI_SAVE_FLAG(894) == 0) {
        SetGroupEnabled(41, 1);
        SetGroupEnabled(38, 0);
    } else {
        SetGroupEnabled(41, 0);
        SetGroupEnabled(38, 1);
    }
    SI_VAR(0) = N(script_80241F6C);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_002204[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242210) = SCRIPT({
    SI_SAVE_FLAG(894) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(22, 316, 82, 0xFFFFFE1F, 0, SI_SAVE_FLAG(882));
    if (SI_SAVE_FLAG(894) == 0) {
        MakeEntity(0x802EA1C0, 431, 0, 0xFFFFFE22, 45, 0x80000000);
        AssignScript(N(script_80242210));
    }
    PlayEffect(32, 1, 415, 196, 0xFFFFFEDE, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 290, 196, 0xFFFFFE65, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 415, 66, 0xFFFFFEDE, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

s32 pad_00237C[] = {
    0x00000000,
};

Script N(script_80242380) = SCRIPT({
    func_80241108_97EBD8();
});

NpcAISettings N(aISettings_8024239C) = {
    .moveSpeed = 2.0,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0,
    .unk_10 = 0.0,
    .unk_14 = 0xA,
    .chaseSpeed = 5.300000190734863,
    .unk_1C = 0x46,
    .unk_20 = 0xA,
    .chaseRadius = 500.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802423CC) = SCRIPT({
    parallel {
        loop {
            func_802411F8_97ECC8();
            sleep 1;
        }
    }
    GetSelfVar(0, SI_VAR(0));
    func_80240F3C_97EA0C(N(aISettings_8024239C));
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_8024243C) = {
    SI_CMD(ScriptOpcode_CALL, SetBattleMusic, 3),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
            SI_CMD(ScriptOpcode_CALL, GetSelfAnimationFromTable, 7, SI_VAR(0)),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0x800936DC),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_SPAWN_THREAD),
                SI_CMD(ScriptOpcode_CALL, 0x800458CC, SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_LOOP, 30),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(10), 40),
                        SI_CMD(ScriptOpcode_CALL, SetNpcRotation, -1, 0, SI_VAR(10), 0),
                        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                    SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242578) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_802415C0_97F090();
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

NpcSettings N(npcSettings_802425E8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x20,
    .otherAI = &N(script_80242380),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802423CC),
    .onHit = &N(script_8024243C),
    .aux = NULL,
    .onDefeat = &N(script_80242578),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0,
};

s32 N(unk_80242614)[] = {
    0x00000000,
};

s32 N(unk_80242618)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_8024264C)[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_Idle_80242658) = SCRIPT({
    SetSelfEnemyFlagBits(32, 1);
100:
    if (SI_SAVE_FLAG(894) == 0) {
        sleep 1;
        goto 100;
    }
    PlaySound(10);
    SetSelfEnemyFlagBits(32, 0);
    spawn {
        sleep 5;
        PlaySoundAtCollider(2, 614, 0);
        MakeLerp(65, 0, 15, 1);
    101:
        UpdateLerp();
        TranslateGroup(31, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 101;
        }
        PlaySoundAtCollider(2, 615, 0);
        ModifyColliderFlags(1, 2, 0x7FFFFE00);
    }
    DisablePlayerInput(1);
    sleep 5;
    func_80241B28_97F5F8();
    MakeLerp(0, 255, 30, 0);
10:
    UpdateLerp();
    func_80241DF8_97F8C8(SI_VAR(0));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    SetGroupEnabled(41, 0);
    SetGroupEnabled(38, 1);
    spawn {
        sleep 15;
        MakeLerp(0, 360, 15, 0);
    10:
        UpdateLerp();
        func_80241D44_97F814(SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    func_80241C5C_97F72C(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    MakeLerp(SI_VAR(3), 0, 30, 3);
1:
    UpdateLerp();
    SetNpcPos(-1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
    func_80241C5C_97F72C(SI_VAR(2), SI_VAR(0), SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    func_80241E24_97F8F4();
    sleep 5;
    SetNpcFlagBits(-1, 2, 0);
    EnableNpcShadow(-1, 1);
    sleep 1;
    func_80241C34_97F704();
    0x802CFD30(-1, 0, 0, 0, 0, 0);
    DisablePlayerInput(0);
    BindNpcAI(-1, N(script_NpcAI_802423CC));
});

Script N(script_Defeat_80242A8C) = SCRIPT({
    SI_SAVE_FLAG(904) = 1;
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(904) = 1;
            SI_AREA_FLAG(17) = 1;
            PlaySoundAtCollider(2, 613, 0);
            spawn {
                sleep 5;
                MakeLerp(0, 65, 65, 0);
            10:
                UpdateLerp();
                TranslateGroup(31, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 10;
                }
                ModifyColliderFlags(0, 2, 0x7FFFFE00);
            }
            func_802415C0_97F090();
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242BF8) = SCRIPT({
    if (SI_SAVE_FLAG(904) == 1) {
        RemoveNpc(-1);
        return;
    }
    BindNpcIdle(-1, N(script_Idle_80242658));
    BindNpcDefeat(-1, N(script_Defeat_80242A8C));
    SetNpcFlagBits(-1, 2, 1);
    EnableNpcShadow(-1, 0);
});

StaticNpc N(npcGroup_80242C8C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802425E8),
        .pos = { 385.0, 71.0, -330.0 },
        .flags = 0x00040B00,
        .init = N(script_Init_80242BF8),
        .unk_1C = 0x00000001,
        .yaw = 320,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0x000001D4, 0x00000000, 0xFFFFFE86, 0x000000C8, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001D4, 0x00000000, 0xFFFFFE86, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00350001, 0x00350005, 0x00350004, 0x00350004, 0x00350001, 0x00350001, 0x00350006, 0x00350006, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000,
        },
    },
};

NpcGroupList N(npcGroupList_80242E7C) = {
    NPC_GROUP(N(npcGroup_80242C8C), 0x0B07000A),
    {},
};

s32 pad_002E94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242EA0_980970

s32 pad_002EA8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242EB0_980980

// rodata: jtbl_80242EB8_980988

s32 pad_002EF4[] = {
    0x00000000,
};

// rodata: jtbl_80242EF8_9809C8

s32 pad_002F34[] = {
    0x00000000,
};

// rodata: D_80242F38_980A08

// rodata: D_80242F40_980A10

s32 pad_002F48[] = {
    0x00000000, 0x00000000,
};

