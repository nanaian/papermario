#include "omo_13.h"

s32 pad_000274[3];
s32 pad_00122C[1];
s32 pad_0014EC[1];
Script N(script_80241550);
s32 pad_00157C[1];
Script N(script_ExitWalk_80241580);
Script N(script_ExitWalk_802415DC);
Script N(script_80241638);
Script N(main);
Script N(script_80241790);
Script N(script_8024185C);
Script N(script_802419CC);
s32 N(unk_80241A78)[1];
Script N(script_80241A7C);
Script N(script_80241A98);
s32 pad_001AD8[2];
Script N(script_NpcAI_80241B10);
Script N(script_NpcAI_80241B8C);
s32 N(unk_80241C04)[1];
s32 N(unk_80241C08)[1];
Script N(script_80241C0C);
Script N(script_80241D40);
s32 N(unk_80241D90)[2];
Script N(script_Interact_80241D98);
Script N(script_Idle_802422A8);
Script N(script_Defeat_80242538);
Script N(script_Init_802425EC);
StaticNpc N(npcGroup_80242668)[1];
StaticNpc N(npcGroup_80242858)[1];
StaticNpc N(npcGroup_80242A48)[1];
NpcGroupList N(npcGroupList_80242C38);
s32 pad_002C68[2];
s32 N(unk_80242C70)[1];
Script N(script_80242C74);
Script N(script_80242CDC);
Script N(script_80242DBC);
Script N(script_MakeEntities);
const char D_80242ED0_DE5360[8]; // "omo_01"
const char D_80242ED8_DE5368[8]; // "omo_03"

// text: func_80240000_DE2490

s32 pad_000274[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240280_DE2710

// text: func_802402F0_DE2780

// text: func_802403C0_DE2850

// text: func_80240458_DE28E8

// text: func_802404B8_DE2948

// text: N(UnkNpcAIFunc4)

// text: func_8024083C_DE2CCC

// text: func_80240A00_DE2E90

// text: func_80240CD4_DE3164

// text: func_80240D30_DE31C0

// text: func_80240F00_DE3390

// text: func_80240F54_DE33E4

// text: func_80240F8C_DE341C

// text: func_80241028_DE34B8

s32 pad_00122C[] = {
    0x00000000,
};

// text: func_80241230_DE36C0

// text: func_802412E4_DE3774

// text: func_80241348_DE37D8

// text: func_80241498_DE3928

s32 pad_0014EC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -480.0f, 0.0f, 0.0f, 90.0f },
    { 565.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900E5,
};

Script N(script_80241550) = SCRIPT({
    SetMusicTrack(0, 32, 0, 8);
});

s32 pad_00157C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241580) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242ED0_DE5360, 0);
    sleep 100;
});

Script N(script_ExitWalk_802415DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242ED8_DE5368, 0);
    sleep 100;
});

Script N(script_80241638) = SCRIPT({
    bind N(script_ExitWalk_80241580) to 0x80000 0;
    bind N(script_ExitWalk_802415DC) to 0x80000 3;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_FLAG(1105) == 1) {
        ModifyColliderFlags(0, 31, 0x7FFFFE00);
    }
    MakeNpcs(1, N(npcGroupList_80242C38));
    await N(script_MakeEntities);
    await N(script_80241A98);
    await N(script_80241550);
    SI_VAR(0) = N(script_80241638);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_80241790) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(55, SI_VAR(0), 0, 0, 1);
    RotateModel(57, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_8024185C) = SCRIPT({
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(60, SI_VAR(0), 0, -1, 0);
    RotateModel(62, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(60, SI_VAR(0), 0, -1, 0);
    RotateModel(62, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_802419CC) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(49, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

s32 N(unk_80241A78)[] = {
    0x0000001B,
};

Script N(script_80241A7C) = SCRIPT({
    func_80240000_DE2490();
});

Script N(script_80241A98) = SCRIPT({
    spawn N(script_80241790);
    spawn N(script_8024185C);
    spawn N(script_802419CC);
    spawn N(script_80241A7C);
});

s32 pad_001AD8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80241AE0) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 100.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x4,
    .chaseSpeed = 4.0f,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 140.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241B10) = SCRIPT({
    func_802404B8_DE2948(N(aISettings_80241AE0));
});

NpcSettings N(npcSettings_80241B30) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241B10),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

NpcAISettings N(aISettings_80241B5C) = {
    .moveSpeed = 1.7f,
    .moveTime = 0x50,
    .waitTime = 0x1,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x4,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 140.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241B8C) = SCRIPT({
    func_80240A00_DE2E90(N(aISettings_80241B5C));
});

NpcSettings N(npcSettings_80241BAC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241B8C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80241BD8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

s32 N(unk_80241C04)[] = {
    0x00000000,
};

s32 N(unk_80241C08)[] = {
    0x00000000,
};

Script N(script_80241C0C) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240D30_DE31C0(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240F54_DE33E4(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241D40) = {
    SI_CMD(ScriptOpcode_CALL, func_80240F8C_DE341C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241C0C), 0x10, 0, func_80243220_DC04D0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240F00_DE3390, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(unk_80241D90)[] = {
    0x000000D0, 0xFFFFFFFF,
};

Script N(script_Interact_80241D98) = SCRIPT({
    if (SI_SAVE_FLAG(1105) == 1) {
        SpeakToPlayer(-1, 0x3B0515, 0x3B0515, 5, 0xF004D);
        return;
    }
    AdjustCam(0, 5.0, 10, 300.0, 15.0, -7.5);
    FindItem(208, SI_VAR(0));
    if (SI_VAR(0) == -1) {
        spawn {
            sleep 10;
            SetPlayerAnimation(0x80011);
            sleep 20;
            SetPlayerAnimation(0x10002);
        }
        SpeakToPlayer(-1, 0x3B0511, 0x3B0501, 0, 0xF0046);
        EndSpeech(-1, 0x3B0513, 0x3B0501, 0);
        ShowChoice(0x1E0044);
        if (SI_VAR(0) == 0) {
            ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0048);
        } else {
            sleep 5;
            ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0047);
            ShowChoice(0x1E0044);
            if (SI_VAR(0) == 0) {
                ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0048);
            } else {
                ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0049);
                SetNpcVar(-1, 0, 1);
            }
        }
    } else {
        SpeakToPlayer(-1, 0x3B0511, 0x3B0501, 0, 0xF004A);
        PlaySoundAtNpc(-1, 610, 0);
        ShowEmote(-1, 0, 0, 30, 1, 0, 0, 0, 0);
        sleep 30;
        EndSpeech(-1, 0x3B0511, 0x3B0501, 0);
        sleep 15;
        SetPlayerAnimation(0x8001E);
        sleep 15;
        SetPlayerAnimation(0x10029);
        sleep 15;
        EndSpeech(-1, 0x3B0511, 0x3B0501, 0);
        SI_VAR(0) = N(unk_80241D90);
        SI_VAR(1) = -1;
        await N(script_80241D40);
        if (SI_VAR(0) == -1) {
            SpeakToPlayer(-1, 0x3B0511, 0x3B0501, 0, 0xF004B);
            ShowChoice(0x1E0044);
            if (SI_VAR(0) == 0) {
                ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0048);
            } else {
                sleep 5;
                ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0047);
                ShowChoice(0x1E0044);
                if (SI_VAR(0) == 0) {
                    ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0048);
                } else {
                    ContinueSpeech(-1, 0x3B0511, 0x3B0501, 0, 0xF0049);
                    SetNpcVar(-1, 0, 1);
                }
            }
        } else {
            SpeakToPlayer(-1, 0x3B0511, 0x3B0501, 0, 0xF004C);
            sleep 20;
            SI_SAVE_FLAG(1105) = 1;
            ModifyColliderFlags(0, 31, 0x7FFFFE00);
            SetNpcVar(-1, 0, 2);
        }
    }
    ResetCam(0, 5.0);
});

Script N(script_Idle_802422A8) = SCRIPT({
0:
    func_80241028_DE34B8();
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    if (SI_VAR(0) == 1) {
        StartBossBattle(3);
    1:
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            sleep 1;
            goto 1;
        }
        goto 0;
    } else {
        SetNpcFlagBits(-1, 256, 1);
        SetNpcAnimation(-1, 0x3B0502);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(2) < 0xFFFFFFC4) {
            if (SI_VAR(0) < 110) {
                SI_VAR(0) += 60;
            } else {
                SI_VAR(0) += 0xFFFFFFC4;
            }
        } else {
            if (SI_VAR(0) < 110) {
                SI_VAR(0) += 0xFFFFFFC4;
            } else {
                SI_VAR(0) += 60;
            }
        }
        SetNpcSpeed(-1, 3.0);
        NpcMoveTo(-1, SI_VAR(0), 0xFFFFFF9C, 0);
        InterpNpcYaw(-1, 90, 0);
        SetNpcAnimation(-1, 0x3B0515);
        SetNpcFlagBits(-1, 256, 0);
    9:
        sleep 1;
        goto 9;
    }
    sleep 1;
    goto 0;
});

Script N(script_Defeat_80242538) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(1105) = 1;
            ModifyColliderFlags(0, 31, 0x7FFFFE00);
            DoNpcDefeat();
        }
        == 1 {
            SetSelfVar(0, 0);
        }
        == 2 {
            SetSelfVar(0, 0);
        }
    }
});

Script N(script_Init_802425EC) = SCRIPT({
    if (SI_SAVE_FLAG(1105) == 0) {
        BindNpcIdle(-1, N(script_Idle_802422A8));
        BindNpcInteract(-1, N(script_Interact_80241D98));
        BindNpcDefeat(-1, N(script_Defeat_80242538));
    } else {
        RemoveEncounter(-1);
    }
});

StaticNpc N(npcGroup_80242668)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241BD8),
        .pos = { 110.0, 0.0, -20.0 },
        .flags = 0x00640D01,
        .init = N(script_Init_802425EC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0501, 0x003B0502, 0x003B0503, 0x003B0502, 0x003B0501, 0x003B0501, 0x003B050C, 0x003B050C, 0x003B0515, 0x003B0512, 0x003B0511, 0x003B0510, 0x003B0505, 0x003B0501, 0x003B0501, 0x003B0501,
        },
        .tattle = 0x1A00BA,
    },
};

StaticNpc N(npcGroup_80242858)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241B30),
        .pos = { 300.0, 0.0, 50.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_DIZZY_DIAL, 2 }, { ItemId_SUPER_SHROOM, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DRIED_SHROOM, 2 }, { ItemId_SLEEPY_SHEEP, 2 }, { ItemId_P_O_W_BLOCK, 2 }, { ItemId_FRIGHT_JAR, 2 } },
        .movement = { 0x0000012C, 0x00000000, 0x00000032, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000012C, 0x00000000, 0x00000032, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0401, 0x003B0402, 0x003B0403, 0x003B0403, 0x003B0401, 0x003B0401, 0x003B040C, 0x003B040C, 0x003B0415, 0x003B0412, 0x003B0411, 0x003B0410, 0x003B0405, 0x003B0401, 0x003B0401, 0x003B0401,
        },
    },
};

StaticNpc N(npcGroup_80242A48)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241BAC),
        .pos = { -222.0, 0.0, 35.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MYSTERY, 5 }, { ItemId_FRIGHT_JAR, 5 } },
        .movement = { 0xFFFFFF22, 0x00000000, 0x00000023, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF22, 0x00000000, 0x00000023, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003C0001, 0x003C0003, 0x003C0004, 0x003C0003, 0x003C0001, 0x003C0001, 0x003C0008, 0x003C0008, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001,
        },
    },
};

NpcGroupList N(npcGroupList_80242C38) = {
    NPC_GROUP(N(npcGroup_80242668), 0x102C0001),
    NPC_GROUP(N(npcGroup_80242858), 0x10030001),
    NPC_GROUP(N(npcGroup_80242A48), 0x10250001),
    {},
};

s32 pad_002C68[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80242C70)[] = {
    0x00000000,
};

Script N(script_80242C74) = SCRIPT({
    group 0;
    func_802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    func_802D5830(0);
    return;
});

Script N(script_80242CDC) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80242C74);
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

Script N(script_80242DBC) = SCRIPT({
    SI_VAR(10) = 316;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(1183) = 1;
    await N(script_80242CDC);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAE30, 110, 0, 0xFFFFFFC4, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1183));
    AssignScript(N(script_80242DBC));
    MakeEntity(D_802EA564, 0xFFFFFE89, 60, 0xFFFFFFA1, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1184));
    MakeEntity(D_802EA588, 470, 60, 0xFFFFFFC4, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1185));
});

// rodata: D_80242ED0_DE5360

// rodata: D_80242ED8_DE5368

// rodata: D_80242EE0_DE5370

// rodata: D_80242EE8_DE5378

// rodata: jtbl_80242EF0_DE5380

// rodata: D_80243080_DE5510

// rodata: D_80243088_DE5518

// rodata: jtbl_80243090_DE5520
