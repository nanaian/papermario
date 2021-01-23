#include "isk_14.h"

s32 pad_001D54[3];
Script N(script_ExitWalk_80241DB0);
Script N(script_80241E0C);
Script N(main);
s32 pad_001F94[3];
Script N(script_80241FA0);
Script N(script_MakeEntities);
s32 pad_002124[3];
Script N(script_80242130);
Script N(script_NpcAI_8024217C);
Script N(script_802421EC);
Script N(script_80242328);
Script N(script_Idle_802423C4);
Script N(script_Defeat_802426D4);
Script N(script_Init_80242764);
StaticNpc N(npcGroup_8024280C)[1];
NpcGroupList N(npcGroupList_802429FC);
s32 pad_002A14[3];
const char D_80242A20_995150[8]; // "isk_10"
s32 pad_002A28[2];
s32 pad_002A74[1];
s32 pad_002AB4[3];

// text: func_80240000_992730

// text: func_80240230_992960

// text: N(UnkNpcAIFunc1)

// text: func_80240628_992D58

// text: func_802407CC_992EFC

// text: func_802408AC_992FDC

// text: N(UnkDurationCheck)

// text: func_80240BF0_993320

// text: func_80240E14_993544

// text: func_80240EA8_9935D8

// text: func_80240F3C_99366C

// text: func_80241108_993838

// text: func_802411F8_993928

// text: func_802415C0_993CF0

// text: func_80241610_993D40

// text: func_80241AF0_994220

// text: func_80241BC4_9942F4

// text: func_80241BEC_99431C

// text: func_80241CA0_9943D0

s32 pad_001D54[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -538.0f, -780.0f, -217.0f, 29.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900A2,
};

Script N(script_ExitWalk_80241DB0) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242A20_995150, 1);
    sleep 100;
});

Script N(script_80241E0C) = SCRIPT({
    bind N(script_ExitWalk_80241DB0) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x2000B);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_802429FC));
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
    SI_VAR(0) = N(script_80241E0C);
    spawn EnterWalk;
});

s32 pad_001F94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241FA0) = SCRIPT({
    SI_SAVE_FLAG(899) = 1;
    SetNpcVar(1, 1, 1);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(23, 0xFFFFFE7B, 0xFFFFFD46, 0xFFFFFE58, 0, SI_SAVE_FLAG(883));
    if (SI_SAVE_FLAG(899) == 0) {
        MakeEntity(0x802EA1C0, 0xFFFFFE05, 0xFFFFFCF4, 0xFFFFFE74, 143, 0x80000000);
        AssignScript(N(script_80241FA0));
    }
    PlayEffect(32, 1, 0xFFFFFE35, 0xFFFFFDB9, 0xFFFFFF2A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE9A, 0xFFFFFDB9, 0xFFFFFE9A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE35, 0xFFFFFD37, 0xFFFFFF2A, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

s32 pad_002124[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242130) = SCRIPT({
    func_80241108_993838();
});

NpcAISettings N(aISettings_8024214C) = {
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

Script N(script_NpcAI_8024217C) = SCRIPT({
    parallel {
        loop {
            func_802411F8_993928();
            sleep 1;
        }
    }
    GetSelfVar(0, SI_VAR(0));
    func_80240F3C_99366C(N(aISettings_8024214C));
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_802421EC) = {
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

Script N(script_80242328) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_802415C0_993CF0();
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

NpcSettings N(npcSettings_80242398) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x20,
    .otherAI = &N(script_80242130),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024217C),
    .onHit = &N(script_802421EC),
    .aux = NULL,
    .onDefeat = &N(script_80242328),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0,
};

Script N(script_Idle_802423C4) = SCRIPT({
0:
    GetSelfVar(1, SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    DisablePlayerInput(1);
    sleep 5;
    SetNpcPos(-1, 0xFFFFFDFB, 0xFFFFFCF4, 0xFFFFFE6E);
    func_80241AF0_994220();
    func_80241BEC_99431C(0xFFFFFDFB, 0xFFFFFCF4, 0xFFFFFE6E);
    func_80241CA0_9943D0(85, 20, 0);
    sleep 5;
    MakeLerp(85, 0, 20, 8);
1:
    UpdateLerp();
    func_80241CA0_9943D0(SI_VAR(0), 20, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    func_80241BC4_9942F4();
    SetNpcFlagBits(-1, 2, 0);
    sleep 10;
    SetNpcAnimation(-1, 0x350004);
    sleep 18;
    SetNpcFlagBits(-1, 2, 0);
    EnableNpcShadow(-1, 1);
    sleep 1;
    func_80241BC4_9942F4();
    0x802CFD30(-1, 0, 0, 0, 0, 0);
    SetSelfEnemyFlagBits(0x100004, 0);
    sleep 3;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcJumpscale(-1, 1);
    SI_VAR(1) += 20;
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    spawn {
        loop 30 {
            SetPlayerAnimation(0x1002B);
            sleep 1;
        }
    }
    DisablePlayerInput(0);
    StartBossBattle(3);
    sleep 15;
    BindNpcAI(-1, N(script_NpcAI_8024217C));
});

Script N(script_Defeat_802426D4) = SCRIPT({
    SI_SAVE_FLAG(906) = 1;
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_AREA_FLAG(19) = 1;
            func_802415C0_993CF0();
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242764) = SCRIPT({
    if (SI_SAVE_FLAG(906) == 1) {
        RemoveNpc(-1);
        return;
    }
    SetSelfVar(1, 0);
    BindNpcIdle(-1, N(script_Idle_802423C4));
    BindNpcDefeat(-1, N(script_Defeat_802426D4));
    SetNpcFlagBits(-1, 2, 1);
    EnableNpcShadow(-1, 0);
});

StaticNpc N(npcGroup_8024280C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242398),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00040900,
        .init = N(script_Init_80242764),
        .unk_1C = 0x00000001,
        .unk_20 = 0xFFFFFCF4,
        .yaw = 218,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0x000001D4, 0x00000000, 0xFFFFFE86, 0x000000C8, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001D4, 0x00000000, 0xFFFFFE86, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00350001, 0x00350005, 0x00350004, 0x00350004, 0x00350001, 0x00350001, 0x00350006, 0x00350006, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000, 0x00350000,
        },
    },
};

NpcGroupList N(npcGroupList_802429FC) = {
    NPC_GROUP(N(npcGroup_8024280C), 0x0B07000C),
    {},
};

s32 pad_002A14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242A20_995150

s32 pad_002A28[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242A30_995160

// rodata: jtbl_80242A38_995168

s32 pad_002A74[] = {
    0x00000000,
};

// rodata: jtbl_80242A78_9951A8

s32 pad_002AB4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

