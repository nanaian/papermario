#include "omo_04.h"

s32 pad_001E3C[1];
s32 pad_001F1C[1];
Script N(script_80241F70);
s32 pad_001FD8[2];
Script N(script_ExitWalk_80241FE0);
Script N(script_8024203C);
Script N(main);
Script N(script_80242260);
Script N(script_8024238C);
Script N(script_80242608);
s32 N(unk_80242630)[1];
Script N(script_80242634);
Script N(script_8024269C);
Script N(script_8024277C);
Script N(script_802427E8);
s32 N(intTable_80242850)[24];
Script N(script_802428B0);
Script N(script_802429E8);
Script N(script_80242A14);
Script N(script_80242A40);
Script N(script_80242A6C);
Script N(script_80242A98);
Script N(script_80242AC4);
Script N(script_80242AF0);
Script N(script_MakeEntities);
f32 N(floatTable_80242EF0)[6];
Script N(script_NpcAI_80242F38);
Script N(script_NpcAI_80243004);
Script N(script_Idle_802430D4);
Script N(script_Defeat_8024324C);
Script N(script_Init_802432C0);
Script N(script_Init_80243334);
Script N(script_Init_802433A8);
StaticNpc N(npcGroup_802433E0)[1];
StaticNpc N(npcGroup_802435D0)[1];
StaticNpc N(npcGroup_802437C0)[1];
StaticNpc N(npcGroup_802439B0)[1];
s32 N(extraAnimationList_80243BA0)[7];
StaticNpc N(npcGroup_80243BBC)[1];
NpcGroupList N(npcGroupList_80243DAC);
NpcGroupList N(npcGroupList_80243DDC);
NpcGroupList N(npcGroupList_80243E0C);
NpcGroupList N(npcGroupList_80243E30);
s32 N(intTable_80243E60)[10];
Script N(script_Idle_80243E88);
Script N(script_Aux_80244000);
s32 N(vectorList_8024418C)[24];
s32 N(vectorList_802441EC)[9];
s32 N(vectorList_80244210)[12];
Script N(script_80244240);
Script N(script_80244288);
const char D_80244CA0_DB20A0[8]; // "omo_03"
s32 pad_004CA8[2];
s32 pad_004D04[1];
s32 pad_004EA8[2];
const char D_80244EB0_DB22B0[8]; // "omo_04"
s32 pad_004EB8[2];

// text: func_80240000_DAD400

// text: func_802400B4_DAD4B4

// text: func_80240118_DAD518

// text: func_80240268_DAD668

// text: func_802402BC_DAD6BC

// text: func_802402D8_DAD6D8

// text: func_802402F4_DAD6F4

// text: func_802403A0_DAD7A0

// text: func_80240550_DAD950

// text: N(UnkNpcAIFunc1)

// text: func_80240C38_DAE038

// text: N(UnkNpcAIFunc2)

// text: func_80240FF4_DAE3F4

// text: func_80241060_DAE460

// text: N(UnkNpcAIFunc3)

// text: func_802411F8_DAE5F8

// text: func_80241588_DAE988

// text: func_802416AC_DAEAAC

// text: func_80241898_DAEC98

// text: func_80241908_DAED08

// text: func_802419D8_DAEDD8

// text: func_80241A70_DAEE70

// text: func_80241AD0_DAEED0

// text: func_80241E04_DAF204

// text: func_80241E20_DAF220

s32 pad_001E3C[] = {
    0x00000000,
};

// text: func_80241E40_DAF240

s32 pad_001F1C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -965.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900DC,
};

Script N(script_80241F70) = SCRIPT({
    if (SI_SAVE_FLAG(1118) == 0) {
        SetMusicTrack(0, 70, 0, 8);
    } else {
        SetMusicTrack(0, 32, 0, 8);
    }
});

s32 pad_001FD8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80241FE0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244CA0_DB20A0, 1);
    sleep 100;
});

Script N(script_8024203C) = SCRIPT({
    bind N(script_ExitWalk_80241FE0) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_FLAG(1118) == 0) {
        MakeNpcs(1, N(npcGroupList_80243E30));
    } else {
        if (SI_SAVE_FLAG(1102) == 0) {
            match SI_SAVE_VAR(216) {
                == 0 {
                    MakeNpcs(1, N(npcGroupList_80243DAC));
                }
                == 1 {
                    MakeNpcs(1, N(npcGroupList_80243DDC));
                }
                == 2 {
                    MakeNpcs(1, N(npcGroupList_80243E0C));
                    MakeItemEntity(138, 1100, 0, 0, 17, SI_SAVE_FLAG(1102));
                }
            }
        } else {
            MakeNpcs(1, N(npcGroupList_80243E0C));
        }
    }
    await N(script_MakeEntities);
    await N(script_80242608);
    await N(script_80241F70);
    if (SI_SAVE_FLAG(1118) == 0) {
        spawn N(script_80244288);
    } else {
        SI_VAR(0) = N(script_8024203C);
        spawn EnterWalk;
        sleep 1;
    }
});

Script N(script_80242260) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(116, SI_VAR(0), 0, 0, 1);
    RotateModel(118, SI_VAR(0), 0, 0, 1);
    RotateModel(120, SI_VAR(0), 0, 0, 1);
    RotateModel(122, SI_VAR(0), 0, 0, 1);
    RotateModel(124, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_8024238C) = SCRIPT({
0:
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(127, SI_VAR(0), 0, -1, 0);
    RotateModel(129, SI_VAR(0), 0, 1, 0);
    RotateModel(131, SI_VAR(0), 0, -1, 0);
    RotateModel(133, SI_VAR(0), 0, 1, 0);
    RotateModel(135, SI_VAR(0), 0, -1, 0);
    RotateModel(137, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(127, SI_VAR(0), 0, -1, 0);
    RotateModel(129, SI_VAR(0), 0, 1, 0);
    RotateModel(131, SI_VAR(0), 0, -1, 0);
    RotateModel(133, SI_VAR(0), 0, 1, 0);
    RotateModel(135, SI_VAR(0), 0, -1, 0);
    RotateModel(137, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_80242608) = SCRIPT({
    spawn N(script_80242260);
    spawn N(script_8024238C);
});

s32 N(unk_80242630)[] = {
    0x00000000,
};

Script N(script_80242634) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_8024269C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80242634);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_8024277C) = SCRIPT({
    SI_VAR(10) = 32;
    SI_VAR(11) = 1;
    SI_SAVE_FLAG(1119) = 1;
    await N(script_8024269C);
    SI_SAVE_FLAG(290) = 1;
    SI_SAVE_VAR(0) = 0xFFFFFFF8;
});

Script N(script_802427E8) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

s32 N(intTable_80242850)[] = {
    0xFFFFFCAC, 0x00000000, 0xFFFFFF83, 0xFFFFFC89, 0x00000000, 0x00000062, 0xFFFFFD56, 0x00000050,
    0xFFFFFFB3, 0xFFFFFDE2, 0x00000050, 0x0000003E, 0xFFFFFD79, 0x00000050, 0x00000084, 0xFFFFFE05,
    0x00000050, 0x00000084, 0x000002A0, 0x00000069, 0x00000084, 0x0000039F, 0x00000050, 0xFFFFFFA9,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802428B0) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242850)),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(7), SI_VAR(8), SI_VAR(9)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 6),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_802402BC_DAD6BC),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802427E8), SI_VAR(10)),
    SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, PlayerJump, SI_VAR(7), SI_VAR(8), SI_VAR(9), 40),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(10)),
    SI_CMD(ScriptOpcode_CALL, func_802402D8_DAD6D8),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802429E8) = SCRIPT({
    SI_VAR(0) = 1;
    await N(script_802428B0);
});

Script N(script_80242A14) = SCRIPT({
    SI_VAR(0) = 2;
    await N(script_802428B0);
});

Script N(script_80242A40) = SCRIPT({
    SI_VAR(0) = 3;
    await N(script_802428B0);
});

Script N(script_80242A6C) = SCRIPT({
    SI_VAR(0) = 4;
    await N(script_802428B0);
});

Script N(script_80242A98) = SCRIPT({
    SI_VAR(0) = 5;
    await N(script_802428B0);
});

Script N(script_80242AC4) = SCRIPT({
    SI_VAR(0) = 6;
    await N(script_802428B0);
});

Script N(script_80242AF0) = SCRIPT({
    SI_VAR(0) = 7;
    await N(script_802428B0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 1150, 0, 0, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1119));
    AssignScript(N(script_8024277C));
    MakeEntity(0x802BCB44, 0xFFFFFC84, 0, 0xFFFFFF83, 0, 0x80000000);
    AssignScript(N(script_802429E8));
    MakeEntity(0x802BCB44, 0xFFFFFCB1, 0, 98, 0, 0x80000000);
    AssignScript(N(script_80242A14));
    MakeEntity(0x802BCB44, 0xFFFFFD2E, 0, 0xFFFFFFB8, 0, 0x80000000);
    AssignScript(N(script_80242A40));
    MakeEntity(0x802BCB44, 0xFFFFFD79, 80, 62, 0, 0x80000000);
    AssignScript(N(script_80242A6C));
    MakeEntity(0x802BCB44, 0xFFFFFDA1, 0, 133, 0, 0x80000000);
    AssignScript(N(script_80242A98));
    MakeEntity(0x802BCB44, 0xFFFFFE2D, 0, 133, 0, 0x80000000);
    AssignScript(N(script_80242AC4));
    MakeEntity(0x802BCB44, 712, 0, 133, 0, 0x80000000);
    AssignScript(N(script_80242AF0));
    MakeEntity(0x802EA564, 575, 60, 60, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1120));
    MakeEntity(0x802EA564, 761, 60, 0xFFFFFFAB, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1121));
    MakeEntity(0x802EA564, 885, 140, 0xFFFFFF92, 0, 132, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1122));
    MakeItemEntity(343, 0xFFFFFC84, 110, 0xFFFFFF84, 17, SI_SAVE_FLAG(1123));
    MakeItemEntity(343, 0xFFFFFC84, 130, 0xFFFFFF84, 17, SI_SAVE_FLAG(1124));
    MakeItemEntity(343, 0xFFFFFC84, 150, 0xFFFFFF84, 17, SI_SAVE_FLAG(1125));
    MakeItemEntity(343, 0xFFFFFD83, 190, 62, 17, SI_SAVE_FLAG(1126));
    MakeItemEntity(343, 0xFFFFFD9A, 210, 62, 17, SI_SAVE_FLAG(1127));
    MakeItemEntity(343, 0xFFFFFDAE, 220, 62, 17, SI_SAVE_FLAG(1128));
    MakeItemEntity(343, 0xFFFFFDC2, 210, 62, 17, SI_SAVE_FLAG(1129));
    MakeItemEntity(343, 0xFFFFFDD6, 190, 62, 17, SI_SAVE_FLAG(1130));
    MakeItemEntity(348, 120, 180, 0xFFFFFFB0, 17, SI_SAVE_FLAG(1132));
    MakeItemEntity(348, 0xFFFFFFA6, 0, 0xFFFFFF83, 17, SI_SAVE_FLAG(1133));
});

f32 N(floatTable_80242EF0)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_80242F08) = {
    .moveSpeed = 1.7999999523162842,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 120.0,
    .unk_10 = 30.0,
    .unk_14 = 0x3,
    .chaseSpeed = 4.0,
    .unk_1C = 0x3C,
    .unk_20 = 0x3,
    .chaseRadius = 150.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242F38) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_802416AC_DAEAAC(N(aISettings_80242F08));
});

NpcSettings N(npcSettings_80242FA8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x19,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242F38),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

NpcAISettings N(aISettings_80242FD4) = {
    .moveSpeed = 2.0,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 100.0,
    .unk_10 = 30.0,
    .unk_14 = 0x4,
    .chaseSpeed = 4.0,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 140.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243004) = SCRIPT({
    func_80241AD0_DAEED0(N(aISettings_80242FD4));
});

NpcSettings N(npcSettings_80243024) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243004),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80243050) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_8024307C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802430A8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

Script N(script_Idle_802430D4) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 1050) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    func_80241E04_DAF204();
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamProperties(0, 5.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 300, 13.0, -9.5);
    if (SI_SAVE_VAR(216) == 0) {
        SpeakToPlayer(0, 0x260003, 0x260001, 0, 0xF003A);
    } else {
        SpeakToPlayer(1, 0x390005, 0x390002, 0, 0xF003B);
    }
    spawn {
        func_80241E20_DAF220();
        ResetCam(0, 4.0);
    }
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Defeat_8024324C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(1102) = 1;
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_802432C0) = SCRIPT({
    if (SI_SAVE_VAR(216) == 0) {
        BindNpcIdle(-1, N(script_Idle_802430D4));
        BindNpcDefeat(-1, N(script_Defeat_8024324C));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80243334) = SCRIPT({
    if (SI_SAVE_VAR(216) == 1) {
        BindNpcIdle(-1, N(script_Idle_802430D4));
        BindNpcDefeat(-1, N(script_Defeat_8024324C));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_802433A8) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80243E88));
    BindNpcAux(-1, N(script_Aux_80244000));
});

StaticNpc N(npcGroup_802433E0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243050),
        .pos = { 1100.0, 0.0, 0.0 },
        .flags = 0x00440F00,
        .init = N(script_Init_802432C0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

StaticNpc N(npcGroup_802435D0)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024307C),
        .pos = { 1100.0, 0.0, 0.0 },
        .flags = 0x00440F00,
        .init = N(script_Init_80243334),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390002, 0x00390002, 0x00390002, 0x00390002,
        },
    },
};

StaticNpc N(npcGroup_802437C0)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243024),
        .pos = { -770.0, 0.0, 0.0 },
        .flags = 0x00000800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_DIZZY_DIAL, 2 }, { ItemId_SUPER_SHROOM, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DRIED_SHROOM, 2 }, { ItemId_SLEEPY_SHEEP, 2 }, { ItemId_P_O_W_BLOCK, 2 }, { ItemId_FRIGHT_JAR, 2 } },
        .movement = { 0xFFFFFCFE, 0x00000000, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFCFE, 0x00000000, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0301, 0x003B0302, 0x003B0303, 0x003B0303, 0x003B0301, 0x003B0301, 0x003B030C, 0x003B030C, 0x003B0315, 0x003B0312, 0x003B0311, 0x003B0310, 0x003B0305, 0x003B0301, 0x003B0301, 0x003B0301,
        },
    },
};

StaticNpc N(npcGroup_802439B0)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80242FA8),
        .pos = { -170.0, 60.0, 30.0 },
        .flags = 0x00000800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_SUPER_SHROOM, 5 } },
        .movement = { 0xFFFFFF56, 0x0000003C, 0x0000001E, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF56, 0x0000003C, 0x0000001E, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003D0034, 0x003D0034, 0x003D0038, 0x003D0038, 0x003D0033, 0x003D0033, 0x003D0039, 0x003D0039, 0x003D0038, 0x003D0038, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001,
        },
    },
};

s32 N(extraAnimationList_80243BA0)[] = {
    0x0060000E, 0x0060000F, 0x00600010, 0x00600013, 0x00600015, 0x00600016, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80243BBC)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802430A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F04,
        .init = N(script_Init_802433A8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80243BA0),
    },
};

NpcGroupList N(npcGroupList_80243DAC) = {
    NPC_GROUP(N(npcGroup_802433E0), 0x12010001),
    NPC_GROUP(N(npcGroup_802437C0), 0x10040001),
    NPC_GROUP(N(npcGroup_802439B0), 0x100F0001),
    {},
};

NpcGroupList N(npcGroupList_80243DDC) = {
    NPC_GROUP(N(npcGroup_802435D0), 0x12030001),
    NPC_GROUP(N(npcGroup_802437C0), 0x10040001),
    NPC_GROUP(N(npcGroup_802439B0), 0x100F0001),
    {},
};

NpcGroupList N(npcGroupList_80243E0C) = {
    NPC_GROUP(N(npcGroup_802437C0), 0x10040001),
    NPC_GROUP(N(npcGroup_802439B0), 0x100F0001),
    {},
};

NpcGroupList N(npcGroupList_80243E30) = {
    NPC_GROUP(N(npcGroup_80243BBC), 0x00000000),
    NPC_GROUP(N(npcGroup_802433E0), 0x12010001),
    NPC_GROUP(N(npcGroup_802435D0), 0x12030001),
    {},
};

s32 N(intTable_80243E60)[] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFD,
    0xFFFFFFFE, 0xFFFFFFFF,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80243E88) = {
    SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
    SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(6), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243E60)),
        SI_CMD(ScriptOpcode_LOOP, 10),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
            SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(5)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(5), 0),
                SI_CMD(ScriptOpcode_MATCH, SI_VAR(6)),
                    SI_CMD(ScriptOpcode_CASE_LT, SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, SetNpcYaw, -1, 90),
                    SI_CMD(ScriptOpcode_CASE_GT, SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, SetNpcYaw, -1, 270),
                SI_CMD(ScriptOpcode_END_MATCH),
                SI_CMD(ScriptOpcode_SET, SI_VAR(6), SI_VAR(2)),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(3), SI_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Aux_80244000) = SCRIPT({
    SI_MAP_FLAG(10) = 0;
    GetNpcPos(2, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    loop {
        func_80241E40_DAF240(SI_MAP_FLAG(10));
        GetNpcPos(2, SI_VAR(9), SI_VAR(10), SI_VAR(11));
        SI_VAR(3) = SI_VAR(9);
        SI_VAR(4) = SI_VAR(10);
        SI_VAR(5) = SI_VAR(11);
        SI_VAR(3) -=f SI_VAR(6);
        SI_VAR(4) -=f SI_VAR(7);
        SI_VAR(5) -=f SI_VAR(8);
        SI_VAR(6) =f SI_VAR(9);
        SI_VAR(7) =f SI_VAR(10);
        SI_VAR(8) =f SI_VAR(11);
        if (SI_VAR(3) != 0) {
            if (SI_VAR(5) != 0) {
                PlayEffect(31, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1.0, 0, 0, 0, 0, 0);
            }
        }
        sleep 3;
    }
});

s32 N(vectorList_8024418C)[] = {
    0x44480000, 0x430C0000, 0xC1A00000, 0x44834000, 0x42F00000, 0xC28C0000, 0x448FC000, 0x42BE0000,
    0xC2C80000, 0x44960000, 0x429A0000, 0xC1F00000, 0x448FC000, 0x42780000, 0x42AA0000, 0x44834000,
    0x42480000, 0x43020000, 0x44480000, 0x42200000, 0x42480000, 0x447A0000, 0x41A00000, 0x00000000,
};

s32 N(vectorList_802441EC)[] = {
    0x447A0000, 0x41A00000, 0x00000000, 0x447C8000, 0x41880000, 0x00000000, 0x447F0000, 0x41700000,
    0x00000000,
};

s32 N(vectorList_80244210)[] = {
    0x447F0000, 0x41700000, 0x00000000, 0x44870000, 0x41F00000, 0x41F00000, 0x44910000, 0x42A00000,
    0xC2200000, 0x44160000, 0x43160000, 0x42B40000,
};

Script N(script_80244240) = SCRIPT({
    loop {
        PlaySoundAtNpc(2, 661, 0);
        sleep 4;
    }
});

Script N(script_80244288) = SCRIPT({
    DisablePlayerInput(1);
    SI_SAVE_FLAG(1118) = 1;
    SI_AREA_VAR(4) = SI_SAVE_VAR(216);
    match SI_AREA_VAR(4) {
        == 0 {
            SI_MAP_VAR(10) = 0;
        }
        == 1 {
            SI_MAP_VAR(10) = 1;
        }
        == 2 {
            SI_MAP_VAR(10) = 138;
        }
    }
    SetNpcPos(2, 800, 140, 0xFFFFFFEC);
    SetNpcYaw(2, 270);
    SetNpcAnimation(2, 0x600015);
    if (SI_AREA_VAR(4) != 2) {
        SetNpcPos(SI_MAP_VAR(10), 0, 0xFFFFFC18, 0);
    }
    UseSettingsFrom(0, 1100, 0, 0);
    SetPanTarget(0, 1100, 0, 0);
    SetCamDistance(0, 500.0);
    SetCamPitch(0, 15.0, -7.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 60;
    SI_MAP_VAR(11) = spawn N(script_80244240);
    SI_MAP_FLAG(10) = 1;
    spawn {
        sleep 100;
        SetCamDistance(0, 350.0);
        SetCamSpeed(0, 2);
        PanToTarget(0, 0, 1);
    }
    LoadPath(150, N(vectorList_8024418C), 8, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) != 1) {
            break;
        }
    }
    SI_MAP_FLAG(10) = 0;
    kill SI_MAP_VAR(11);
    PlaySoundAtNpc(2, 811, 0);
    spawn {
        SetNpcAnimation(2, 0x600010);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFFB);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF6);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF1);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF6);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF1);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF6);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF1);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF6);
        sleep 1;
        SetNpcRotation(2, 0, 0, 0xFFFFFFF1);
        sleep 3;
        SetNpcRotation(2, 0, 0, 0);
    }
    LoadPath(10, N(vectorList_802441EC), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) != 1) {
            break;
        }
    }
    sleep 15;
    SetNpcVar(2, 0, 1);
    SetNpcAnimation(2, 0x600013);
    sleep 45;
    SetNpcAnimation(2, 0x60000E);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 25;
    SI_VAR(1) += 38;
    PlaySoundAt(8314, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(19, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1.0, 100, 0, 0, 0, 0, 0, 0, 0);
    sleep 100;
    SetNpcAnimation(2, 0x60000F);
    SI_VAR(0) += 55;
    PlaySoundAt(8344, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(1, SI_VAR(0), 0, 0, 1, 15, 3, 8, 0, 0, 0, 0, 0, 0);
    sleep 5;
    if (SI_AREA_VAR(4) != 2) {
        SetNpcPos(SI_MAP_VAR(10), SI_VAR(0), 0, 0);
    } else {
        MakeItemEntity(SI_MAP_VAR(10), SI_VAR(0), 0, 0, 1, 0);
    }
    sleep 10;
    SetNpcAnimation(2, 0x600013);
    sleep 45;
    match SI_AREA_VAR(4) {
        == 0 {
            SpeakToPlayer(2, 0x600016, 0x600013, 517, 0xF0036);
            sleep 30;
            SpeakToPlayer(2, 0x600016, 0x600013, 517, 0xF0037);
        }
        == 1 {
            SpeakToPlayer(2, 0x600016, 0x600013, 517, 0xF0038);
            sleep 10;
            SpeakToPlayer(2, 0x600016, 0x600013, 517, 0xF0039);
        }
        == 2 {
            SpeakToPlayer(2, 0x600016, 0x600013, 517, 0xF0034);
            sleep 30;
            SpeakToPlayer(2, 0x600016, 0x600013, 517, 0xF0035);
        }
    }
    SetNpcVar(2, 0, 0);
    sleep 5;
    SetCamDistance(0, 500.0);
    PanToTarget(0, 0, 1);
    SI_MAP_VAR(11) = spawn N(script_80244240);
    SI_MAP_FLAG(10) = 1;
    spawn {
        LoadPath(130, N(vectorList_80244210), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) != 1) {
                break;
            }
        }
    }
    sleep 90;
    if (SI_AREA_VAR(4) != 2) {
        PlaySoundAtNpc(SI_MAP_VAR(10), 611, 0);
        ShowEmote(SI_MAP_VAR(10), 2, 0, 20, 1, 0, 0, 0, 0);
        sleep 5;
    }
    GotoMap(D_80244EB0_DB22B0, 0);
    sleep 100;
});

// rodata: D_80244CA0_DB20A0

s32 pad_004CA8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244CB0_DB20B0

// rodata: D_80244CB8_DB20B8

// rodata: D_80244CC0_DB20C0

// rodata: jtbl_80244CC8_DB20C8

s32 pad_004D04[] = {
    0x00000000,
};

// rodata: D_80244D08_DB2108

// rodata: D_80244D10_DB2110

// rodata: jtbl_80244D18_DB2118

s32 pad_004EA8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244EB0_DB22B0

s32 pad_004EB8[] = {
    0x00000000, 0x00000000,
};

