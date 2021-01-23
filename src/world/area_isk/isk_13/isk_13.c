#include "isk_13.h"

Script N(script_ExitWalk_802420C0);
Script N(script_8024211C);
Script N(main);
s32 pad_0022A4[3];
Script N(script_802422B0);
Script N(script_MakeEntities);
Script N(script_80242460);
Script N(script_NpcAI_802424AC);
Script N(script_8024251C);
Script N(script_80242658);
Script N(script_Idle_802426F4);
Script N(script_Defeat_80242B20);
Script N(script_Init_80242BFC);
StaticNpc N(npcGroup_80242C90)[1];
NpcGroupList N(npcGroupList_80242E80);
s32 pad_002E98[2];
const char D_80242EA0_992680[8]; // "isk_12"
s32 pad_002EA8[2];
s32 pad_002EF4[1];
s32 pad_002F34[1];
s32 pad_002F48[2];

// text: func_80240000_98F7E0

// text: func_80240230_98FA10

// text: N(UnkNpcAIFunc1)

// text: func_80240628_98FE08

// text: func_802407CC_98FFAC

// text: func_802408AC_99008C

// text: N(UnkDurationCheck)

// text: func_80240BF0_9903D0

// text: func_80240E14_9905F4

// text: func_80240EA8_990688

// text: func_80240F3C_99071C

// text: func_80241108_9908E8

// text: func_802411F8_9909D8

// text: func_802415C0_990DA0

// text: func_80241610_990DF0

// text: func_80241BA8_991388

// text: func_80241D08_9914E8

// text: func_80241D38_991518

// text: func_80241E34_991614

// text: func_80241EF8_9916D8

// text: func_80242044_991824

EntryList N(entryList) = {
    { 568.0f, -650.0f, -120.0f, 340.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900A1,
};

Script N(script_ExitWalk_802420C0) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242EA0_992680, 3);
    sleep 100;
});

Script N(script_8024211C) = SCRIPT({
    bind N(script_ExitWalk_802420C0) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x2000A);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80242E80));
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
    SI_VAR(0) = N(script_8024211C);
    spawn EnterWalk;
});

s32 pad_0022A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802422B0) = SCRIPT({
    SI_SAVE_FLAG(898) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(21, 460, 0xFFFFFDC8, 0xFFFFFEAA, 0, SI_SAVE_FLAG(881));
    if (SI_SAVE_FLAG(898) == 0) {
        MakeEntity(0x802EA1C0, 568, 0xFFFFFD76, 0xFFFFFED2, 25, 0x80000000);
        AssignScript(N(script_802422B0));
    }
    PlayEffect(32, 1, 415, 0xFFFFFE3B, 0xFFFFFEDD, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 415, 0xFFFFFDB9, 0xFFFFFEDD, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 489, 0xFFFFFE3B, 0xFFFFFF7D, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 489, 0xFFFFFDB9, 0xFFFFFF7D, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

Script N(script_80242460) = SCRIPT({
    func_80241108_9908E8();
});

NpcAISettings N(aISettings_8024247C) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 5.3f,
    .unk_1C = 0x46,
    .unk_20 = 0xA,
    .chaseRadius = 500.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802424AC) = SCRIPT({
    parallel {
        loop {
            func_802411F8_9909D8();
            sleep 1;
        }
    }
    GetSelfVar(0, SI_VAR(0));
    func_80240F3C_99071C(N(aISettings_8024247C));
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_8024251C) = {
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

Script N(script_80242658) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_802415C0_990DA0();
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

NpcSettings N(npcSettings_802426C8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x20,
    .otherAI = &N(script_80242460),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802424AC),
    .onHit = &N(script_8024251C),
    .aux = NULL,
    .onDefeat = &N(script_80242658),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0,
};

Script N(script_Idle_802426F4) = SCRIPT({
0:
    sleep 1;
    if (SI_SAVE_FLAG(881) == 0) {
        goto 0;
    }
    DisablePlayerInput(1);
    func_80241BA8_991388();
    func_80241EF8_9916D8(255, 128, 255, 0);
    spawn {
        SI_VAR(0) = 0;
        loop 10 {
            SI_VAR(0) += 12.796875;
            func_80241EF8_9916D8(255, 128, 255, SI_VAR(0));
            sleep 1;
        }
        func_80241EF8_9916D8(255, 128, 255, 128);
        SI_VAR(0) = 128;
        loop 20 {
            SI_VAR(0) += 6.34375;
            func_80241EF8_9916D8(255, SI_VAR(0), 255, SI_VAR(0));
            sleep 1;
        }
        func_80241EF8_9916D8(255, 255, 255, 255);
    }
    sleep 30;
    spawn {
        sleep 5;
        MakeLerp(0, 360, 10, 10);
    10:
        UpdateLerp();
        func_80241E34_991614(SI_VAR(0), 0, 90.0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    GetPlayerPos(SI_VAR(5), SI_VAR(6), SI_VAR(7));
    func_80241D38_991518(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    MakeLerp(SI_VAR(3), SI_VAR(6), 20, 2);
1:
    UpdateLerp();
    SetNpcPos(-1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
    func_80241D38_991518(SI_VAR(2), SI_VAR(0), SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    func_80242044_991824();
    spawn {
        InterpPlayerYaw(180, 0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcJumpscale(-1, 1.0);
        NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
        loop 30 {
            SetPlayerAnimation(0x80013);
            sleep 1;
        }
    }
    loop 20 {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        func_80241D38_991518(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Defeat_80242B20) = SCRIPT({
    SI_SAVE_FLAG(905) = 1;
    SetNpcFlagBits(-1, 2, 0);
    EnableNpcShadow(-1, 1);
    0x802CFD30(-1, 0, 0, 0, 0, 0);
    func_80241D08_9914E8();
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_802415C0_990DA0();
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242BFC) = SCRIPT({
    if (SI_SAVE_FLAG(905) == 1) {
        RemoveNpc(-1);
        return;
    }
    BindNpcIdle(-1, N(script_Idle_802426F4));
    BindNpcDefeat(-1, N(script_Defeat_80242B20));
    SetNpcFlagBits(-1, 2, 1);
    EnableNpcShadow(-1, 0);
});

StaticNpc N(npcGroup_80242C90)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802426C8),
        .pos = { 440.0, -470.0, -300.0 },
        .flags = 0x00140B00,
        .init = N(script_Init_80242BFC),
        .unk_1C = 0x00000001,
        .unk_20 = 0xFFFFFD76,
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

NpcGroupList N(npcGroupList_80242E80) = {
    NPC_GROUP(N(npcGroup_80242C90), 0x0B07000B),
    {},
};

s32 pad_002E98[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242EA0_992680

s32 pad_002EA8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242EB0_992690

// rodata: jtbl_80242EB8_992698

s32 pad_002EF4[] = {
    0x00000000,
};

// rodata: jtbl_80242EF8_9926D8

s32 pad_002F34[] = {
    0x00000000,
};

// rodata: D_80242F38_992718

// rodata: D_80242F40_992720

s32 pad_002F48[] = {
    0x00000000, 0x00000000,
};
