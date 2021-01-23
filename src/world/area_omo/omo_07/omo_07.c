#include "omo_07.h"

s32 pad_002F14[3];
s32 pad_003214[3];
s32 pad_0032FC[1];
Script N(script_80243350);
s32 pad_0033B8[2];
Script N(script_ExitWalk_802433C0);
Script N(script_8024341C);
Script N(main);
s32 pad_003658[2];
Script N(script_80243660);
Script N(script_802437D0);
Script N(script_8024389C);
s32 pad_0038C4[3];
s32 N(unk_802438D0)[12];
Script N(script_80243900);
s32 unk_missing_80243920[11];
Script N(script_NpcAI_8024397C);
Script N(script_8024399C);
s32 unk_missing_802439E8[11];
f32 N(floatTable_80243A14)[6];
Script N(script_NpcAI_80243A5C);
Script N(script_80243B7C);
Script N(script_80243E50);
Script N(script_NpcAI_80244140);
Script N(script_Defeat_802446DC);
Script N(script_Init_802447FC);
Script N(script_Idle_80244834);
Script N(script_Defeat_802449AC);
Script N(script_Init_80244A20);
Script N(script_Init_80244A94);
Script N(script_Init_80244B08);
StaticNpc N(npcGroup_80244B2C)[1];
StaticNpc N(npcGroup_80244D1C)[1];
StaticNpc N(npcGroup_80244F0C)[1];
StaticNpc N(npcGroup_802450FC)[1];
StaticNpc N(npcGroup_802452EC)[1];
StaticNpc N(npcGroup_802454DC)[1];
StaticNpc N(npcGroup_802456CC)[1];
StaticNpc N(npcGroup_802458BC)[1];
s32 N(extraAnimationList_80245AAC)[7];
StaticNpc N(npcGroup_80245AC8)[1];
NpcGroupList N(npcGroupList_80245CB8);
NpcGroupList N(npcGroupList_80245D18);
NpcGroupList N(npcGroupList_80245D78);
NpcGroupList N(npcGroupList_80245DCC);
s32 pad_005DFC[1];
s32 N(unk_80245E00)[1];
Script N(script_80245E04);
Script N(script_80245E6C);
Script N(script_80245F4C);
Script N(script_80245FA8);
Script N(script_80245FF4);
Script N(script_80246040);
s32 N(intTable_802460A8)[9];
Script N(script_802460CC);
Script N(script_8024623C);
Script N(script_80246268);
Script N(script_80246294);
Script N(script_MakeEntities);
s32 pad_00647C[1];
s32 N(intTable_80246480)[10];
Script N(script_Idle_802464A8);
Script N(script_802465BC);
Script N(script_80246734);
const char D_80246BC0_DC3E70[8]; // "omo_06"
s32 pad_006BC8[2];
s32 pad_007104[3];
const char D_80247110_DC43C0[8]; // "omo_07"
s32 pad_007118[2];

// text: func_80240000_DBD2B0

// text: func_80240070_DBD320

// text: func_80240140_DBD3F0

// text: func_802401D8_DBD488

// text: func_80240238_DBD4E8

// text: func_8024056C_DBD81C

// text: func_802406C4_DBD974

// text: N(UnkNpcAIFunc1)

// text: func_80240A2C_DBDCDC

// text: func_80240BE8_DBDE98

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_80240D88_DBE038

// text: func_80240EB8_DBE168

// text: N(UnkNpcDurationFlagFunc)

// text: func_80241040_DBE2F0

// text: func_80241100_DBE3B0

// text: func_802413FC_DBE6AC

// text: func_8024146C_DBE71C

// text: func_8024153C_DBE7EC

// text: func_802415D4_DBE884

// text: func_80241634_DBE8E4

// text: func_80241978_DBEC28

// text: func_80241B28_DBEDD8

// text: dup_omo_07_UnkNpcAIFunc1

// text: func_80242210_DBF4C0

// text: N(UnkNpcAIFunc2)

// text: func_802425CC_DBF87C

// text: func_80242638_DBF8E8

// text: N(UnkNpcAIFunc3)

// text: func_802427D0_DBFA80

// text: func_80242B60_DBFE10

// text: func_80242C84_DBFF34

// text: func_80242E70_DC0120

// text: func_80242E8C_DC013C

// text: func_80242EA8_DC0158

s32 pad_002F14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80242F20_DC01D0

// text: func_80242FD4_DC0284

// text: func_80243038_DC02E8

// text: func_80243188_DC0438

// text: func_802431DC_DC048C

// text: func_802431F8_DC04A8

s32 pad_003214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80243220_DC04D0

s32 pad_0032FC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -960.0f, 0.0f, 73.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900DF,
};

Script N(script_80243350) = SCRIPT({
    if (SI_SAVE_FLAG(1140) == 0) {
        SetMusicTrack(0, 70, 0, 8);
    } else {
        SetMusicTrack(0, 32, 0, 8);
    }
});

s32 pad_0033B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802433C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246BC0_DC3E70, 4);
    sleep 100;
});

Script N(script_8024341C) = SCRIPT({
    bind N(script_ExitWalk_802433C0) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_FLAG(1140) == 0) {
        MakeNpcs(1, N(npcGroupList_80245DCC));
    } else {
        if (SI_SAVE_FLAG(1103) == 0) {
            match SI_SAVE_VAR(217) {
                == 0 {
                    MakeNpcs(1, N(npcGroupList_80245CB8));
                }
                == 1 {
                    MakeNpcs(1, N(npcGroupList_80245D18));
                }
                == 2 {
                    MakeNpcs(1, N(npcGroupList_80245D78));
                    MakeItemEntity(130, 1080, 0, 0, 17, SI_SAVE_FLAG(1103));
                }
            }
        } else {
            MakeNpcs(1, N(npcGroupList_80245D78));
        }
    }
    await N(script_MakeEntities);
    await N(script_8024389C);
    await N(script_80243350);
    spawn N(script_80243E50);
    if (SI_SAVE_FLAG(1140) == 0) {
        spawn N(script_80246734);
        sleep 2;
    } else {
        SI_VAR(0) = N(script_8024341C);
        spawn EnterWalk;
        sleep 1;
    }
});

s32 pad_003658[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243660) = SCRIPT({
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(54, SI_VAR(0), 0, -1, 0);
    RotateModel(56, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(54, SI_VAR(0), 0, -1, 0);
    RotateModel(56, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_802437D0) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(59, SI_VAR(0), 0, 0, 1);
    RotateModel(64, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_8024389C) = SCRIPT({
    spawn N(script_80243660);
    spawn N(script_802437D0);
});

s32 pad_0038C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802438D0)[] = {
    0x40000000, 0x0000003C, 0x0000000F, 0x42C80000, 0x41F00000, 0x00000004, 0x40800000, 0x00000006,
    0x00000001, 0x430C0000, 0x41F00000, 0x00000001,
};

Script N(script_80243900) = SCRIPT({
    func_80240238_DBD4E8(N(unk_802438D0));
});

s32 unk_missing_80243920[] = {
    0x00000000, 0x00170016, 0x00000000, 0x00000000, N(script_80243900), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000E0001,
};

NpcAISettings N(aISettings_8024394C) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x3C,
    .waitTime = 0,
    .alertRadius = 100.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x4,
    .chaseSpeed = 4.0f,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 160.0f,
    .unk_28 = 50.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024397C) = SCRIPT({
    func_80241634_DBE8E4(N(aISettings_8024394C));
});

Script N(script_8024399C) = SCRIPT({
    func_80241100_DBE3B0(N(aISettings_8024394C));
});

NpcSettings N(npcSettings_802439BC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024397C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

s32 unk_missing_802439E8[] = {
    0x00000000, 0x00170016, 0x00000000, 0x00000000, N(script_8024399C), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000E0001,
};

f32 N(floatTable_80243A14)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80243A2C) = {
    .moveSpeed = 1.8f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 120.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 4.0f,
    .unk_1C = 0x3C,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243A5C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_80242C84_DBFF34(N(aISettings_80243A2C));
});

NpcSettings N(npcSettings_80243ACC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x19,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243A5C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80243AF8) = {
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

NpcSettings N(npcSettings_80243B24) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80243B50) = {
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

Script N(script_80243B7C) = SCRIPT({
    if (SI_AREA_FLAG(15) == 1) {
        return;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(2) > 0xFFFFFFCE) {
        return;
    }
    if (SI_VAR(0) > 15) {
        if (SI_VAR(0) < 35) {
            return;
        }
    }
    DisablePlayerInput(1);
    ModifyColliderFlags(0, 21, 0x7FFFFE00);
    SI_AREA_FLAG(15) = 1;
    PlaySoundAt(473, 0, 25, 0, 0xFFFFFFC9);
    spawn {
        if (SI_VAR(0) < 25) {
            MakeLerp(0, 180, 30, 10);
        10:
            UpdateLerp();
            RotateModel(93, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 10;
            }
        } else {
            MakeLerp(180, 0, 30, 10);
        11:
            UpdateLerp();
            RotateModel(93, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 11;
            }
        }
        UpdateColliderTransform(21);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) += 60;
    sleep 10;
    SetPlayerSpeed(3.0);
    PlayerMoveTo(SI_VAR(0), SI_VAR(2), 0);
    SI_AREA_FLAG(15) = 0;
    ModifyColliderFlags(1, 21, 0x7FFFFE00);
    DisablePlayerInput(0);
});

Script N(script_80243E50) = SCRIPT({
    ParentColliderToModel(21, 93);
    bind N(script_80243B7C) to TriggerFlag_WALL_PUSH 21;
    SI_AREA_FLAG(7) = 0;
    SI_AREA_FLAG(8) = 0;
    SI_AREA_FLAG(9) = 0;
    SI_AREA_FLAG(10) = 0;
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 400) {
        goto 0;
    }
1:
    SI_VAR(4) = -1;
    if (SI_AREA_FLAG(10) == 0) {
        SI_VAR(4) = 3;
    }
    if (SI_AREA_FLAG(9) == 0) {
        SI_VAR(4) = 2;
    }
    if (SI_AREA_FLAG(8) == 0) {
        SI_VAR(4) = 1;
    }
    if (SI_VAR(4) == -1) {
        sleep 1;
        goto 1;
    }
    if (SI_AREA_FLAG(7) == 0) {
        SI_AREA_FLAG(7) = 1;
    } else {
        sleep 40;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(2) < 0xFFFFFFAB) {
        goto 1;
    }
    if (SI_VAR(0) < 0xFFFFFFCE) {
        goto 1;
    }
    if (SI_VAR(0) > 600) {
        goto 1;
    }
    func_80242EA8_DC0158(SI_VAR(4), 1);
    SetNpcVar(SI_VAR(4), 0, 1);
    sleep 1;
2:
    GetNpcVar(SI_VAR(4), 0, SI_VAR(3));
    if (SI_VAR(3) == 1) {
        sleep 1;
        goto 2;
    }
    goto 1;
});

Script N(script_NpcAI_80244140) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
        == 1 {
            SetNpcFlagBits(-1, 2, 0);
            EnableNpcShadow(-1, 1);
            SetSelfEnemyFlagBits(1, 0);
            SetNpcPos(-1, 800, 0, 75);
            SetNpcSpeed(-1, 4.0);
            SetNpcAnimation(-1, 0x3B0003);
            SetNpcSpeed(-1, 5.0);
            NpcMoveTo(-1, 665, 75, 0);
            SetNpcSpeed(-1, 4.0);
            NpcMoveTo(-1, 635, 0xFFFFFF95, 0);
            NpcMoveTo(-1, 100, 0xFFFFFF95, 0);
            NpcMoveTo(-1, 0xFFFFFFF6, 0xFFFFFF95, 0);
            SetSelfVar(0, 2);
            SetSelfVar(1, 0);
        }
        == 2 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 130) {
                sleep 40;
                SetSelfVar(0, 3);
            }
            GetSelfVar(1, SI_VAR(0));
            SI_VAR(0) += 1;
            SetSelfVar(1, SI_VAR(0));
            if (SI_VAR(0) > 180) {
                sleep 40;
                SetSelfVar(0, 3);
                SetSelfVar(1, 0);
            }
        }
        == 3 {
            PlaySoundAt(473, 0, 25, 0, 0xFFFFFFC9);
            spawn {
                SI_AREA_FLAG(15) = 1;
                SI_VAR(2) = SI_MAP_VAR(0);
                SI_VAR(2) += 180;
                MakeLerp(SI_MAP_VAR(0), SI_VAR(2), 30, 10);
            10:
                UpdateLerp();
                RotateModel(93, SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(21);
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 10;
                }
                SI_MAP_VAR(0) = SI_VAR(2);
                SI_MAP_VAR(0) %= 360;
                SI_AREA_FLAG(15) = 0;
                SetNpcFlagBits(-1, 64, 0);
            }
            sleep 10;
            NpcMoveTo(-1, 0xFFFFFFF6, 50, 0);
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 3) {
                SetSelfVar(0, 4);
            }
        }
        == 4 {
            sleep 1;
            BindNpcAI(-1, N(script_NpcAI_8024397C));
            sleep 10;
        }
        == 10 {
            DisablePlayerInput(1);
            loop 30 {
                GetSelfNpcID(SI_VAR(0));
                func_80242EA8_DC0158(SI_VAR(0), 0);
                sleep 1;
            }
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            DisablePlayerInput(0);
            SetSelfVar(0, 0);
        }
        == 11 {
            GetSelfNpcID(SI_VAR(0));
            func_80242EA8_DC0158(SI_VAR(0), 0);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            SetSelfVar(0, 0);
        }
    }
    sleep 1;
    goto 0;
});

Script N(script_Defeat_802446DC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcFlagBits(-1, 320, 1);
            SetSelfEnemyFlagBits(1, 1);
            EnableNpcShadow(-1, 0);
            SetSelfVar(0, 10);
            sleep 1;
            SetSelfVar(0, 10);
            BindNpcAI(-1, N(script_NpcAI_80244140));
            DoNpcDefeat();
            sleep 1;
        }
        == 1 {
            SetNpcAnimation(-1, 0x3B0003);
        }
        == 2 {
            SetNpcAnimation(-1, 0x3B0003);
        }
    }
});

Script N(script_Init_802447FC) = SCRIPT({
    BindNpcIdle(-1, N(script_NpcAI_80244140));
    BindNpcDefeat(-1, N(script_Defeat_802446DC));
});

Script N(script_Idle_80244834) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 990) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    func_80242E70_DC0120();
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamProperties(0, 5.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 300, 13.0, -9.5);
    if (SI_SAVE_VAR(217) == 0) {
        SpeakToPlayer(5, 0x2B000B, 0x2B0001, 0, 0xF003C);
    } else {
        SpeakToPlayer(6, 0x5A000A, 0x5A0002, 0, 0xF003D);
    }
    spawn {
        func_80242E8C_DC013C();
        ResetCam(0, 4.0);
    }
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Defeat_802449AC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(1103) = 1;
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80244A20) = SCRIPT({
    if (SI_SAVE_VAR(217) == 0) {
        BindNpcIdle(-1, N(script_Idle_80244834));
        BindNpcDefeat(-1, N(script_Defeat_802449AC));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80244A94) = SCRIPT({
    if (SI_SAVE_VAR(217) == 1) {
        BindNpcIdle(-1, N(script_Idle_80244834));
        BindNpcDefeat(-1, N(script_Defeat_802449AC));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80244B08) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802464A8));
});

StaticNpc N(npcGroup_80244B2C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802439BC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_802447FC),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000006, 0x0000001E, 0x00000000, 0x00000032, 0x00000032, 0x00000000, 0x00000064, 0x00000064, 0x00000000, 0x00000064, 0x00000078, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000032, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x0000004B, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_80244D1C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802439BC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_802447FC),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000006, 0x0000001E, 0x00000000, 0x00000032, 0x00000032, 0x00000000, 0x00000064, 0x00000064, 0x00000000, 0x00000064, 0x00000078, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000032, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x0000004B, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_80244F0C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802439BC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_802447FC),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000006, 0x0000001E, 0x00000000, 0x00000032, 0x00000032, 0x00000000, 0x00000064, 0x00000064, 0x00000000, 0x00000064, 0x00000078, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000032, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x0000004B, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_802450FC)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802439BC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_802447FC),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000006, 0x0000001E, 0x00000000, 0x00000032, 0x00000032, 0x00000000, 0x00000064, 0x00000064, 0x00000000, 0x00000064, 0x00000078, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000032, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x0000004B, 0x00000000, 0x00000032, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_802452EC)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80243AF8),
        .pos = { 1050.0, 0.0, 0.0 },
        .flags = 0x00440F00,
        .init = N(script_Init_80244A20),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
};

StaticNpc N(npcGroup_802454DC)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80243B24),
        .pos = { 1050.0, 0.0, 0.0 },
        .flags = 0x00440F00,
        .init = N(script_Init_80244A94),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
    },
};

StaticNpc N(npcGroup_802456CC)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_80243ACC),
        .pos = { -650.0, 140.0, -105.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_SUPER_SHROOM, 5 } },
        .movement = { 0xFFFFFD76, 0x0000008C, 0xFFFFFF97, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFD76, 0x0000008C, 0xFFFFFF97, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003D0034, 0x003D0034, 0x003D0038, 0x003D0038, 0x003D0033, 0x003D0033, 0x003D0039, 0x003D0039, 0x003D0038, 0x003D0038, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001,
        },
    },
};

StaticNpc N(npcGroup_802458BC)[] = {
    {
        .id = 9,
        .settings = &N(npcSettings_80243ACC),
        .pos = { -550.0, 60.0, 70.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_SUPER_SHROOM, 5 } },
        .movement = { 0xFFFFFDDA, 0x0000003C, 0x00000046, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFDDA, 0x0000003C, 0x00000046, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003D0034, 0x003D0034, 0x003D0038, 0x003D0038, 0x003D0033, 0x003D0033, 0x003D0039, 0x003D0039, 0x003D0038, 0x003D0038, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001, 0x003D0001,
        },
    },
};

s32 N(extraAnimationList_80245AAC)[] = {
    0x0060000E, 0x0060000F, 0x00600010, 0x00600013, 0x00600015, 0x00600016, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80245AC8)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_80243B50),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F04,
        .init = N(script_Init_80244B08),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80245AAC),
    },
};

NpcGroupList N(npcGroupList_80245CB8) = {
    NPC_GROUP(N(npcGroup_80244B2C), 0x120A0002),
    NPC_GROUP(N(npcGroup_80244D1C), 0x120A0002),
    NPC_GROUP(N(npcGroup_80244F0C), 0x120A0002),
    NPC_GROUP(N(npcGroup_802450FC), 0x120A0002),
    NPC_GROUP(N(npcGroup_802456CC), 0x10140001),
    NPC_GROUP(N(npcGroup_802458BC), 0x10120001),
    NPC_GROUP(N(npcGroup_802452EC), 0x12050006),
    {},
};

NpcGroupList N(npcGroupList_80245D18) = {
    NPC_GROUP(N(npcGroup_80244B2C), 0x120A0002),
    NPC_GROUP(N(npcGroup_80244D1C), 0x120A0002),
    NPC_GROUP(N(npcGroup_80244F0C), 0x120A0002),
    NPC_GROUP(N(npcGroup_802450FC), 0x120A0002),
    NPC_GROUP(N(npcGroup_802456CC), 0x10140001),
    NPC_GROUP(N(npcGroup_802458BC), 0x10120001),
    NPC_GROUP(N(npcGroup_802454DC), 0x12070006),
    {},
};

NpcGroupList N(npcGroupList_80245D78) = {
    NPC_GROUP(N(npcGroup_80244B2C), 0x120A0002),
    NPC_GROUP(N(npcGroup_80244D1C), 0x120A0002),
    NPC_GROUP(N(npcGroup_80244F0C), 0x120A0002),
    NPC_GROUP(N(npcGroup_802450FC), 0x120A0002),
    NPC_GROUP(N(npcGroup_802456CC), 0x10140001),
    NPC_GROUP(N(npcGroup_802458BC), 0x10120001),
    {},
};

NpcGroupList N(npcGroupList_80245DCC) = {
    NPC_GROUP(N(npcGroup_80245AC8), 0x00000000),
    NPC_GROUP(N(npcGroup_802452EC), 0x12050006),
    NPC_GROUP(N(npcGroup_802454DC), 0x12070006),
    {},
};

s32 pad_005DFC[] = {
    0x00000000,
};

s32 N(unk_80245E00)[] = {
    0x00000000,
};

Script N(script_80245E04) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_80245E6C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80245E04);
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

Script N(script_80245F4C) = SCRIPT({
    SI_VAR(10) = 35;
    SI_VAR(11) = 1;
    SI_SAVE_FLAG(1142) = 1;
    SI_SAVE_VAR(0) = 0xFFFFFFFC;
    await N(script_80245E6C);
});

Script N(script_80245FA8) = SCRIPT({
    SI_VAR(10) = 251;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(1143) = 1;
    await N(script_80245E6C);
});

Script N(script_80245FF4) = SCRIPT({
    SI_VAR(10) = 250;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(1144) = 1;
    await N(script_80245E6C);
});

Script N(script_80246040) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

s32 N(intTable_802460A8)[] = {
    0xFFFFFEAF, 0x00000050, 0xFFFFFFC9, 0xFFFFFE28, 0x00000000, 0x0000007F, 0xFFFFFF40, 0x00000000,
    0x0000007F,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802460CC) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802460A8)),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(7), SI_VAR(8), SI_VAR(9)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 3),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_LOOP, 4),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 10),
        SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, func_802431DC_DC048C),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80246040), SI_VAR(10)),
    SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, PlayerJump, SI_VAR(7), SI_VAR(8), SI_VAR(9), 40),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 0),
    SI_CMD(ScriptOpcode_CALL, func_802431F8_DC04A8),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_8024623C) = SCRIPT({
    SI_VAR(0) = 1;
    await N(script_802460CC);
});

Script N(script_80246268) = SCRIPT({
    SI_VAR(0) = 2;
    await N(script_802460CC);
});

Script N(script_80246294) = SCRIPT({
    SI_VAR(0) = 3;
    await N(script_802460CC);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 1130, 0, 0, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1142));
    AssignScript(N(script_80245F4C));
    MakeEntity(0x802EAE30, 0xFFFFFC72, 80, 0xFFFFFF9C, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1143));
    AssignScript(N(script_80245FA8));
    MakeEntity(0x802EAE30, 750, 0, 0xFFFFFF9C, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1144));
    AssignScript(N(script_80245FF4));
    MakeEntity(0x802EA564, 650, 60, 0xFFFFFFE2, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1141));
    MakeEntity(0x802BCB44, 0xFFFFFEB6, 0, 127, 0, 0x80000000);
    AssignScript(N(script_8024623C));
    MakeEntity(0x802BCB44, 0xFFFFFEFC, 0, 127, 0, 0x80000000);
    AssignScript(N(script_80246268));
    MakeEntity(0x802BCB44, 0xFFFFFF40, 80, 0xFFFFFF7C, 0, 0x80000000);
    AssignScript(N(script_80246294));
});

s32 pad_00647C[] = {
    0x00000000,
};

s32 N(intTable_80246480)[] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFD,
    0xFFFFFFFE, 0xFFFFFFFF,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_802464A8) = {
    SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
    SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(6), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80246480)),
        SI_CMD(ScriptOpcode_LOOP, 10),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
            SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(5)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(5), 0),
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

Script N(script_802465BC) = SCRIPT({
    GetNpcPos(7, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    loop {
        func_80243220_DC04D0();
        GetNpcPos(7, SI_VAR(9), SI_VAR(10), SI_VAR(11));
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

Script N(script_80246734) = SCRIPT({
    DisablePlayerInput(1);
    SI_SAVE_FLAG(1140) = 1;
    SI_AREA_VAR(4) = SI_SAVE_VAR(217);
    match SI_AREA_VAR(4) {
        == 0 {
            SI_MAP_VAR(10) = 5;
        }
        == 1 {
            SI_MAP_VAR(10) = 6;
        }
        == 2 {
            SI_MAP_VAR(10) = 130;
        }
    }
    SetNpcPos(7, 1000, 15, 0);
    SetNpcYaw(7, 90);
    SetNpcAnimation(7, 0x600013);
    if (SI_AREA_VAR(4) != 2) {
        SetNpcPos(SI_MAP_VAR(10), 0, 0xFFFFFC18, 0);
    }
    UseSettingsFrom(0, 1060, 0, 0);
    SetPanTarget(0, 1060, 0, 0);
    SetCamDistance(0, 350.0);
    SetCamPitch(0, 15.0, -7.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 5;
    SetNpcVar(7, 0, 1);
    SetNpcAnimation(7, 0x600013);
    sleep 25;
    SetNpcAnimation(7, 0x60000E);
    GetNpcPos(7, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 25;
    SI_VAR(1) += 38;
    PlaySoundAt(8314, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(19, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1.0, 75, 0, 0, 0, 0, 0, 0, 0);
    sleep 75;
    SetNpcAnimation(7, 0x60000F);
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
    SetNpcAnimation(7, 0x600013);
    SetNpcVar(7, 0, 0);
    sleep 5;
    if (SI_AREA_VAR(4) != 2) {
        PlaySoundAtNpc(SI_MAP_VAR(10), 611, 0);
        ShowEmote(SI_MAP_VAR(10), 2, 0, 20, 1, 0, 0, 0, 0);
        sleep 5;
    }
    GotoMap(D_80247110_DC43C0, 0);
    sleep 100;
});

// rodata: D_80246BC0_DC3E70

s32 pad_006BC8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80246BD0_DC3E80

// rodata: D_80246BD8_DC3E88

// rodata: jtbl_80246BE0_DC3E90

// rodata: D_80246D70_DC4020

// rodata: D_80246D78_DC4028

// rodata: jtbl_80246D80_DC4030

// rodata: D_80246F10_DC41C0

// rodata: D_80246F18_DC41C8

// rodata: jtbl_80246F20_DC41D0

// rodata: D_802470B0_DC4360

// rodata: D_802470B8_DC4368

// rodata: D_802470C0_DC4370

// rodata: jtbl_802470C8_DC4378

s32 pad_007104[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80247110_DC43C0

s32 pad_007118[] = {
    0x00000000, 0x00000000,
};
