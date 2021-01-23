#include "isk_07.h"

s32 pad_0000A8[2];
s32 pad_0000E4[3];
s32 pad_000108[2];
Script N(script_ExitWalk_80240170);
Script N(script_ExitWalk_802401CC);
Script N(script_80240228);
Script N(main);
s32 pad_000414[3];
Script N(script_80240420);
Script N(script_80240440);
Script N(script_MakeEntities);
s32 pad_00085C[1];
Script N(script_NpcAI_80240890);
Script N(script_Defeat_802408E8);
Script N(script_Idle_80240BAC);
Script N(script_Idle_80240CD8);
Script N(script_Idle_80240DFC);
Script N(script_Init_80240F20);
Script N(script_Init_80240FA8);
Script N(script_Init_80241018);
StaticNpc N(npcGroup_80241088)[1];
StaticNpc N(npcGroup_80241278)[1];
StaticNpc N(npcGroup_80241468)[1];
NpcGroupList N(npcGroupList_80241658);
s32 pad_001688[2];
Script N(script_80241690);
Script N(script_8024177C);
Script N(script_80241868);
Script N(script_80241A14);
s32 N(itemList_80241A80)[2];
Script N(script_80241A88);
Script N(script_80241C98);
Script N(script_80241D74);
Script N(script_80241E84);
s32 pad_001F48[2];
Script N(script_80241F50);
Script N(script_80241F90);
s32 pad_002188[2];
Script N(script_80242190);
Script N(script_80242750);
Script N(script_8024286C);
Script N(script_802428E8);
Script N(script_80242964);
const char D_802429E0_984E20[8]; // "isk_08"
const char D_802429E8_984E28[8]; // "isk_04"

// text: func_80240000_982440

// text: func_80240014_982454

s32 pad_0000A8[] = {
    0x00000000, 0x00000000,
};

// text: func_802400B0_9824F0

s32 pad_0000E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400F0_982530

s32 pad_000108[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -283.0f, -390.0f, 530.0f, 110.0f },
    { 560.0f, -340.0f, 217.0f, 210.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19009B,
};

Script N(script_ExitWalk_80240170) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_802429E0_984E20, 2);
    sleep 100;
});

Script N(script_ExitWalk_802401CC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_802429E8_984E28, 1);
    sleep 100;
});

Script N(script_80240228) = SCRIPT({
    bind N(script_ExitWalk_80240170) to 0x80000 0;
    bind N(script_ExitWalk_802401CC) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20004);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_FLAG(876) == 0) {
        MakeNpcs(1, N(npcGroupList_80241658));
    }
    await N(script_MakeEntities);
    spawn N(script_80241C98);
    spawn N(script_80241A14);
    spawn N(script_80241F50);
    spawn N(script_80242190);
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
    SI_VAR(0) = N(script_80240228);
    spawn EnterWalk;
});

s32 pad_000414[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240420) = SCRIPT({
    SI_SAVE_FLAG(886) = 1;
});

Script N(script_80240440) = SCRIPT({
    SI_SAVE_FLAG(895) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(877) == 0) {
        MakeEntity(D_802BCD68, 0xFFFFFED4, 0xFFFFFE84, 530, 50, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    if (SI_SAVE_FLAG(895) == 0) {
        MakeEntity(D_802EA1C0, 470, 0xFFFFFF06, 270, 150, 0x80000000);
        AssignScript(N(script_80240440));
    }
    if (SI_SAVE_FLAG(886) == 0) {
        MakeEntity(D_802EA5F4, 0xFFFFFF06, 0xFFFFFEB6, 545, 0xFFFFFFE7, 0x80000000);
        AssignScript(N(script_80240420));
    }
    if (SI_SAVE_FLAG(876) == 1) {
        MakeItemEntity(17, 0xFFFFFF06, 0xFFFFFE7A, 545, 0, SI_SAVE_FLAG(875));
    }
    PlayEffect(32, 1, 415, 0xFFFFFF3F, 291, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 291, 0xFFFFFF3F, 415, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 131, 0xFFFFFF3F, 489, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFFD4, 0xFFFFFF3F, 505, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF2A, 0xFFFFFF3F, 459, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 415, 0xFFFFFEBD, 291, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 291, 0xFFFFFEBD, 415, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 131, 0xFFFFFEBD, 489, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFFD4, 0xFFFFFEBD, 505, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF2A, 0xFFFFFEBD, 459, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    MakeItemEntity(83, 490, 0xFFFFFF06, 215, 17, SI_SAVE_FLAG(884));
});

s32 pad_00085C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80240860) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x28,
    .waitTime = 0xA,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x2D,
    .unk_20 = 0x6,
    .chaseRadius = 300.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240890) = SCRIPT({
    func_80240000_982440();
    DoBasicAI(N(aISettings_80240860));
});

NpcSettings N(npcSettings_802408BC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240890),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

Script N(script_Defeat_802408E8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_FLAG(876) == 0) {
                spawn {
                    func_80240014_982454();
                    if (SI_VAR(1) == 1) {
                        DisablePlayerInput(1);
                        PlaySound(11);
                        sleep 30;
                        func_802D5830(1);
                        SetCamSpeed(0, 2.0);
                        UseSettingsFrom(0, 0xFFFFFF6A, 0xFFFFFE7A, 571);
                        UseSettingsFrom(0, 0xFFFFFF05, 0xFFFFFE7A, 553);
                        SetPanTarget(0, 0xFFFFFF05, 0xFFFFFE7A, 553);
                        sleep 1;
                        PanToTarget(0, 0, 1);
                        WaitForCam(0, 1.0);
                        sleep 45;
                        MakeItemEntity(17, 0xFFFFFF06, 0xFFFFFF10, 545, 13, SI_SAVE_FLAG(875));
                        SI_SAVE_FLAG(876) = 1;
                        await N(script_80241E84);
                        sleep 60;
                        SetCamSpeed(0, 90.0);
                        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        sleep 1;
                        PanToTarget(0, 0, 0);
                        func_802D5830(0);
                        DisablePlayerInput(0);
                    }
                }
            }
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

Script N(script_Idle_80240BAC) = SCRIPT({
    SetSelfEnemyFlagBits(0x17100000, 1);
    SetNpcFlagBits(-1, 2, 1);
1:
    if (SI_AREA_FLAG(13) == 0) {
        sleep 1;
        goto 1;
    }
    SetNpcYaw(-1, 105);
    SetNpcFlagBits(-1, 2, 0);
    SetNpcFlagBits(-1, 64, 1);
    SetSelfEnemyFlagBits(0x17100000, 0);
    NpcMoveTo(-1, 0xFFFFFF74, 528, 10);
    SetNpcFlagBits(-1, 64, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80240890));
});

Script N(script_Idle_80240CD8) = SCRIPT({
    SetSelfEnemyFlagBits(0x17100000, 1);
    SetNpcFlagBits(-1, 2, 1);
1:
    if (SI_AREA_FLAG(13) == 0) {
        sleep 1;
        goto 1;
    }
    SetNpcFlagBits(-1, 2, 0);
    sleep 15;
    SetNpcFlagBits(-1, 64, 1);
    SetSelfEnemyFlagBits(0x17100000, 0);
    NpcMoveTo(-1, 47, 543, 10);
    SetNpcFlagBits(-1, 64, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80240890));
});

Script N(script_Idle_80240DFC) = SCRIPT({
    SetSelfEnemyFlagBits(0x17100000, 1);
    SetNpcFlagBits(-1, 2, 1);
1:
    if (SI_AREA_FLAG(13) == 0) {
        sleep 1;
        goto 1;
    }
    SetNpcFlagBits(-1, 2, 0);
    sleep 15;
    SetNpcFlagBits(-1, 64, 1);
    SetSelfEnemyFlagBits(0x17100000, 0);
    NpcMoveTo(-1, 227, 489, 10);
    SetNpcFlagBits(-1, 64, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80240890));
});

Script N(script_Init_80240F20) = SCRIPT({
    if (SI_SAVE_FLAG(876) == 0) {
        SetSelfEnemyFlags(0x800000);
    }
    BindNpcIdle(-1, N(script_Idle_80240BAC));
    BindNpcDefeat(-1, N(script_Defeat_802408E8));
    InterpNpcYaw(-1, 100, 0);
    func_800457C4(3);
});

Script N(script_Init_80240FA8) = SCRIPT({
    if (SI_SAVE_FLAG(876) == 0) {
        SetSelfEnemyFlags(0x800000);
    }
    BindNpcIdle(-1, N(script_Idle_80240CD8));
    BindNpcDefeat(-1, N(script_Defeat_802408E8));
    func_800457C4(3);
});

Script N(script_Init_80241018) = SCRIPT({
    if (SI_SAVE_FLAG(876) == 0) {
        SetSelfEnemyFlags(0x800000);
    }
    BindNpcIdle(-1, N(script_Idle_80240DFC));
    BindNpcDefeat(-1, N(script_Defeat_802408E8));
    func_800457C4(3);
});

StaticNpc N(npcGroup_80241088)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802408BC),
        .pos = { -132.0, -390.0, 492.0 },
        .flags = 0x00000A00,
        .init = N(script_Init_80240F20),
        .yaw = 304,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_TASTY_TONIC, 10 } },
        .movement = { 0xFFFFFED3, 0x00000000, 0x000001AB, 0x000000C8, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFED3, 0x00000000, 0x000001AB, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310104, 0x00310108, 0x00310108, 0x00310108, 0x00310104, 0x00310104, 0x0031010C, 0x0031010C, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108,
        },
    },
};

StaticNpc N(npcGroup_80241278)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802408BC),
        .pos = { 45.0, -390.0, 507.0 },
        .flags = 0x00000A00,
        .init = N(script_Init_80240FA8),
        .yaw = 263,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_TASTY_TONIC, 10 } },
        .movement = { 0x00000034, 0xFFFFFE7A, 0x0000023D, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000034, 0xFFFFFE7A, 0x0000023D, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310104, 0x00310108, 0x00310108, 0x00310108, 0x00310104, 0x00310104, 0x0031010C, 0x0031010C, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108,
        },
    },
};

StaticNpc N(npcGroup_80241468)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802408BC),
        .pos = { 220.0, -389.0, 467.0 },
        .flags = 0x00000A00,
        .init = N(script_Init_80241018),
        .yaw = 244,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_TASTY_TONIC, 10 } },
        .movement = { 0x000000F3, 0xFFFFFE7A, 0x0000020B, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000F3, 0xFFFFFE7A, 0x0000020B, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310104, 0x00310108, 0x00310108, 0x00310108, 0x00310104, 0x00310104, 0x0031010C, 0x0031010C, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108,
        },
    },
};

NpcGroupList N(npcGroupList_80241658) = {
    NPC_GROUP(N(npcGroup_80241088), 0x0B00000D),
    NPC_GROUP(N(npcGroup_80241278), 0x0B02000D),
    NPC_GROUP(N(npcGroup_80241468), 0x0B03000D),
    {},
};

s32 pad_001688[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241690) = SCRIPT({
    ModifyColliderFlags(0, 34, 0x7FFFFE00);
    ModifyColliderFlags(1, 35, 0x7FFFFE00);
    PlaySoundAtCollider(35, 0x80000002, 0);
    MakeLerp(0, 90, 30, 4);
10:
    UpdateLerp();
    RotateModel(75, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    StopSound(0x80000002);
});

Script N(script_8024177C) = SCRIPT({
    ModifyColliderFlags(1, 34, 0x7FFFFE00);
    ModifyColliderFlags(0, 35, 0x7FFFFE00);
    PlaySoundAtCollider(34, 0x80000002, 0);
    MakeLerp(90, 0, 30, 4);
10:
    UpdateLerp();
    RotateModel(75, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    StopSound(0x80000002);
});

Script N(script_80241868) = SCRIPT({
    func_802CB008(0, 1, 369, 0xFFFFFEA3, 369, 20);
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 369, 0xFFFFFEA3, 369);
    SetPanTarget(0, 369, 0xFFFFFEA3, 369);
    sleep 1;
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    if (SI_MAP_FLAG(0) == 0) {
        await N(script_80241690);
        SI_MAP_FLAG(0) = 1;
    } else {
        await N(script_8024177C);
        SI_MAP_FLAG(0) = 0;
    }
    ShakeCam(0, 0, 3, 0.1005859375);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
    SI_AREA_FLAG(14) = 0;
});

Script N(script_80241A14) = SCRIPT({
    ModifyColliderFlags(1, 34, 0x7FFFFE00);
    ModifyColliderFlags(0, 35, 0x7FFFFE00);
    SI_MAP_FLAG(0) = 0;
    bind N(script_80241868) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(14);
});

s32 N(itemList_80241A80)[] = {
    0x00000011, 0x00000000,
};

Script N(script_80241A88) = SCRIPT({
    group 0;
    func_802D5830(1);
    func_802D6420();
    match SI_VAR(0) {
        == 0 {
            ShowMessageAtScreenPos(0x1D00D8, 160, 40);
            func_802D6954();
            func_802D5830(0);
            return;
        }
        == -1 {
            func_802D6954();
            func_802D5830(0);
            return;
        }
    }
    PlaySoundAt(617, 0, 0xFFFFFED4, 0xFFFFFE84, 530);
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(877) = 1;
    SI_VAR(0) = SI_MAP_VAR(0);
    func_802400B0_9824F0();
    SI_VAR(1) = 0;
    sleep 5;
    PlaySoundAtCollider(2, 613, 0);
    MakeLerp(0, 65, 65, 0);
10:
    UpdateLerp();
    TranslateGroup(79, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    func_802D6954();
    func_802D5830(0);
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80241C98) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(877), 0),
        SI_CMD(ScriptOpcode_CALL, func_802C971C, 79),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241A88), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80241A80), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 79, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 2, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, 90, 0, 65, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, 91, 0, 65, 0),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 6, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241D74) = SCRIPT({
    ModifyColliderFlags(1, 6, 0x7FFFFE00);
    PlaySoundAtCollider(6, 614, 0);
    MakeLerp(65, 0, 15, 1);
10:
    UpdateLerp();
    TranslateModel(90, 0, SI_VAR(0), 0);
    TranslateModel(91, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(6, 615, 0);
    ShakeCam(0, 0, 10, 0.30078125);
});

Script N(script_80241E84) = SCRIPT({
    MakeLerp(0, 65, 15, 0);
10:
    UpdateLerp();
    TranslateModel(90, 0, SI_VAR(0), 0);
    TranslateModel(91, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
});

s32 pad_001F48[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241F50) = SCRIPT({
    ParentColliderToModel(37, 83);
    bind N(script_80241F90) to TriggerFlag_FLOOR_TOUCH 37;
});

Script N(script_80241F90) = SCRIPT({
    func_802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(37, 8330, 0);
    MakeLerp(0, 0xFFFFFFF2, 30, 0);
10:
    UpdateLerp();
    TranslateModel(83, 0, SI_VAR(0), 0);
    UpdateColliderTransform(37);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAtCollider(37, 8331, 0);
    SI_AREA_FLAG(14) = 1;
15:
    sleep 1;
    if (SI_AREA_FLAG(14) == 1) {
        goto 15;
    }
    MakeLerp(0xFFFFFFF2, 0, 5, 0);
20:
    UpdateLerp();
    TranslateModel(83, 0, SI_VAR(0), 0);
    UpdateColliderTransform(37);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    func_802400F0_982530();
});

s32 pad_002188[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242190) = SCRIPT({
    if (SI_SAVE_FLAG(886) == 0) {
        SI_AREA_FLAG(10) = 0;
        SI_AREA_FLAG(11) = 0;
        SI_AREA_FLAG(12) = 0;
        ModifyColliderFlags(0, 47, 0x7FFFFE00);
        ModifyColliderFlags(0, 48, 0x7FFFFE00);
        ModifyColliderFlags(0, 49, 0x7FFFFE00);
    10:
        if (SI_SAVE_FLAG(886) == 0) {
            sleep 1;
            goto 10;
        }
        PlaySound(10);
        DisablePlayerInput(1);
        ShakeCam(0, 0, 30, 1.0);
        SetNpcYaw(0, 105);
        SetNpcFlagBits(0, 2, 0);
        SetNpcFlagBits(1, 2, 0);
        SetNpcFlagBits(2, 2, 0);
        spawn {
            sleep 12;
            InterpPlayerYaw(109, 0);
            sleep 3;
            func_802D2520(0x10002, 5, 0, 1, 1, 0);
            SetPlayerAnimation(0x8000A);
            sleep 20;
            func_802D2520(0x10002, 0, 0, 0, 0, 0);
            SetPlayerAnimation(0x10002);
        }
        SetCamSpeed(0, 2.0);
        UseSettingsFrom(0, 0xFFFFFF69, 0xFFFFFE7A, 576);
        SetPanTarget(0, 0xFFFFFF69, 0xFFFFFE7A, 576);
        sleep 1;
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        spawn N(script_8024286C);
        sleep 15;
        SetPanTarget(0, 51, 0xFFFFFE7A, 589);
        WaitForCam(0, 1.0);
        spawn N(script_802428E8);
        sleep 15;
        SetPanTarget(0, 239, 0xFFFFFE7A, 515);
        WaitForCam(0, 1.0);
        spawn N(script_80242964);
        sleep 15;
        SetPanTarget(0, 517, 0xFFFFFE7A, 292);
        WaitForCam(0, 1.0);
        spawn N(script_80241D74);
        sleep 30;
        SetCamSpeed(0, 90.0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        PanToTarget(0, 0, 0);
        SI_AREA_FLAG(13) = 1;
        DisablePlayerInput(0);
    } else {
        SI_AREA_FLAG(10) = 1;
        SI_AREA_FLAG(11) = 1;
        SI_AREA_FLAG(12) = 1;
        TranslateModel(107, 38, 0, 13);
        RotateModel(107, 35, 0, 1, 0);
        TranslateModel(116, 38, 0, 13);
        RotateModel(116, 35, 0, 1, 0);
        TranslateModel(125, 38, 0, 13);
        RotateModel(125, 35, 0, 1, 0);
        sleep 5;
        SI_AREA_FLAG(10) = 0;
        SI_AREA_FLAG(11) = 0;
        SI_AREA_FLAG(12) = 0;
        ModifyColliderFlags(0, 43, 0x7FFFFE00);
        ModifyColliderFlags(0, 44, 0x7FFFFE00);
        ModifyColliderFlags(0, 45, 0x7FFFFE00);
        SI_AREA_FLAG(13) = 1;
    }
});

Script N(script_80242750) = SCRIPT({
    PlaySoundAtModel(SI_VAR(3), 465, 0);
    TranslateModel(SI_VAR(3), 0, 0, 13);
    sleep 3;
    MakeLerp(0, 35, 9, 10);
10:
    UpdateLerp();
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) *= 1.1005859375;
    TranslateModel(SI_VAR(3), SI_VAR(2), 0, 13);
    RotateModel(SI_VAR(3), SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 10;
    }
    sleep 3;
});

Script N(script_8024286C) = SCRIPT({
    SI_AREA_FLAG(10) = 1;
    SI_VAR(3) = 107;
    await N(script_80242750);
    SI_AREA_FLAG(10) = 0;
    ModifyColliderFlags(0, 43, 0x7FFFFE00);
    ModifyColliderFlags(1, 47, 0x7FFFFE00);
});

Script N(script_802428E8) = SCRIPT({
    SI_AREA_FLAG(11) = 1;
    SI_VAR(3) = 116;
    await N(script_80242750);
    SI_AREA_FLAG(11) = 0;
    ModifyColliderFlags(0, 44, 0x7FFFFE00);
    ModifyColliderFlags(1, 48, 0x7FFFFE00);
});

Script N(script_80242964) = SCRIPT({
    SI_AREA_FLAG(12) = 1;
    SI_VAR(3) = 125;
    await N(script_80242750);
    SI_AREA_FLAG(12) = 0;
    ModifyColliderFlags(0, 45, 0x7FFFFE00);
    ModifyColliderFlags(1, 49, 0x7FFFFE00);
});

// rodata: D_802429E0_984E20

// rodata: D_802429E8_984E28
