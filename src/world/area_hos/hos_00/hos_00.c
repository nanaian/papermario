#include "hos_00.h"

s32 pad_000044[3];
s32 pad_0007B8[2];
s32 pad_0007EC[1];
s32 pad_000C38[2];
s32 pad_000D08[2];
Script N(script_80240D90);
Script N(script_80240E04);
Script N(script_8024101C);
Script N(script_80241084);
Script N(script_802410B0);
Script N(script_802413EC);
Script N(script_ExitWalk_80241554);
Script N(script_ExitWalk_802415F0);
Script N(script_ExitWalk_8024164C);
Script N(script_802416A8);
Script N(script_8024170C);
Script N(script_EnterWalk_80241784);
Script N(main);
s32 pad_001A28[2];
Script N(script_80241A30);
s32 pad_001AA8[2];
s32 unk_missing_80241B08[11];
Script N(script_80241B60);
Script N(script_Defeat_80241CE8);
Script N(script_Idle_80241DFC);
Script N(script_Init_80241E80);
Script N(script_Idle_80241EE8);
Script N(script_Interact_80241F8C);
Script N(script_Defeat_80241F9C);
Script N(script_Init_80241FE0);
StaticNpc N(npcGroup_8024202C)[1];
StaticNpc N(npcGroup_8024221C)[1];
StaticNpc N(npcGroup_8024240C)[2];
NpcGroupList N(npcGroupList_802427EC);
NpcGroupList N(npcGroupList_80242810);
s32 pad_002828[2];
Script N(script_80242830);
Script N(script_80242878);
Script N(script_MakeEntities);
s32 N(unk_80242970)[1];
Script N(script_80242974);
Script N(script_802429A4);
s32 N(vectorList_802429D4)[30];
s32 N(vectorList_80242A4C)[15];
s32 N(vectorList_80242A88)[24];
s32 N(vectorList_80242AE8)[18];
s32 N(vectorList_80242B30)[27];
s32 N(unk_80242B9C)[1];
s32 N(unk_80242BA0)[1];
Script N(script_80242BA4);
Script N(script_80242D20);
Script N(script_80242D8C);
Script N(script_80242E98);
Script N(script_80242F20);
Script N(script_80244210);
s32 pad_004AE4[3];
Script N(script_80244AF0);
const char D_80244B30_A10820[8]; // "hos_bg"
s32 pad_004B38[2];
const char D_80244B58_A10848[8]; // "osr_00"
const char D_80244B60_A10850[8]; // "osr_01"
const char D_80244B68_A10858[8]; // "hos_01"
const char D_80244B70_A10860[8]; // "hos_06"
s32 pad_004B78[2];
const char D_80244B80_A10870[8]; // "osr_01"
s32 pad_004B88[2];

// text: func_Init_A0BCF0

s32 pad_000044[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240050_A0BD40

// text: func_80240170_A0BE60

// text: func_8024036C_A0C05C

// text: func_80240584_A0C274

s32 pad_0007B8[] = {
    0x00000000, 0x00000000,
};

// text: func_802407C0_A0C4B0

s32 pad_0007EC[] = {
    0x00000000,
};

// text: func_802407F0_A0C4E0

// text: func_802408A4_A0C594

// text: func_80240908_A0C5F8

// text: func_8024091C_A0C60C

// text: func_80240994_A0C684

// text: func_80240A54_A0C744

// text: func_80240B20_A0C810

// text: func_80240B3C_A0C82C

s32 pad_000C38[] = {
    0x00000000, 0x00000000,
};

// text: func_80240C40_A0C930

s32 pad_000D08[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -610.0f, 0.0f, -45.0f, 90.0f },
    { 870.0f, 60.0f, -130.0f, 270.0f },
    { 870.0f, -10.0f, 30.0f, 270.0f },
    { 870.0f, -10.0f, 30.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19001C,
};

Script N(script_80240D90) = SCRIPT({
    match SI_SAVE_VAR(0) {
    0xFFFFFFF3..5
        SetMusicTrack(0, 74, 0, 6);
        else {
            SetMusicTrack(0, 0, 0, 6);
        }
    }
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80240E04) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80240D90)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 1),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 97, 0, 8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_GOTO, 20),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_IF_GT, SI_VAR(1), 210),
        SI_CMD(ScriptOpcode_CALL, FadeOutMusic, 0, 833),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 25),
        SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 97, 0, 8),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
        SI_CMD(ScriptOpcode_GOTO, 20),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_LABEL, 20),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(0), 0xFFFFFF97),
        SI_CMD(ScriptOpcode_GOTO, 20),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(1), 0xFFFFFFC9),
        SI_CMD(ScriptOpcode_CALL, FadeOutMusic, 0, 833),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 25),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80240D90)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_GOTO, 20),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_8024101C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SetMusicTrack(0, 98, 0, 8);
    } else {
        spawn N(script_80240E04);
    }
});

Script N(script_80241084) = SCRIPT({
    SetMusicTrack(0, 70, 0, 8);
});

Script N(script_802410B0) = SCRIPT({
    group 11;
    SI_VAR(13) = 0;
    SI_VAR(14) = 0;
0:
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(1) < 0xFFFFFFCE) {
        sleep 1;
        goto 0;
    }
    SI_VAR(8) = 1000;
    SI_VAR(8) -= SI_VAR(1);
    SI_VAR(8) /= 10;
    if (SI_VAR(8) < 20) {
        SI_VAR(8) = 20;
    }
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    RandInt(400, SI_VAR(10));
    SI_VAR(11) = 200;
    RandInt(400, SI_VAR(12));
    SI_VAR(12) -= 200;
    SI_VAR(1) += SI_VAR(10);
    SI_VAR(2) += SI_VAR(11);
    SI_VAR(3) += SI_VAR(12);
    SI_VAR(4) = SI_VAR(1);
    RandInt(100, SI_VAR(10));
    SI_VAR(10) += 50;
    SI_VAR(4) -= SI_VAR(10);
    SI_VAR(5) = 0;
    SI_VAR(6) = SI_VAR(3);
    RandInt(4, SI_VAR(7));
    SI_VAR(7) += 10;
    match SI_VAR(3) {
        < 0xFFFFFEDE {
            SI_VAR(0) = 0;
        }
        < 40 {
            SI_VAR(0) = 2;
        }
        >= 40 {
            SI_VAR(0) = 1;
        }
    }
    if (SI_VAR(14) < 2) {
        PlaySoundAt(0xB0000015, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(14) += 1;
    }
    SI_VAR(13) += SI_VAR(8);
    if (SI_VAR(13) > 30) {
        SI_VAR(13) = 0;
        SI_VAR(14) = 0;
    }
    func_80240050_A0BD40(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7));
    sleep SI_VAR(8);
    goto 0;
});

Script N(script_802413EC) = SCRIPT({
    group 11;
    spawn {
    0:
        RandInt(50, SI_VAR(0));
        SI_VAR(0) += 10;
        func_80240170_A0BE60();
        sleep SI_VAR(0);
        goto 0;
    }
    spawn {
    1:
        RandInt(50, SI_VAR(0));
        SI_VAR(0) += 20;
        func_8024036C_A0C05C();
        sleep SI_VAR(0);
        goto 1;
    }
    spawn {
    2:
        RandInt(50, SI_VAR(0));
        SI_VAR(0) += 20;
        func_80240584_A0C274();
        PlaySoundAt(0xB0000015, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep SI_VAR(0);
        goto 2;
    }
});

Script N(script_ExitWalk_80241554) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    match SI_SAVE_VAR(0) {
    0xFFFFFF81..95
        GotoMap(D_80244B60_A10850, 1);
        else {
            GotoMap(D_80244B58_A10848, 1);
        }
    }
    sleep 100;
});

Script N(script_ExitWalk_802415F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244B68_A10858, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024164C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80244B70_A10860, 0);
    sleep 100;
});

Script N(script_802416A8) = SCRIPT({
    bind N(script_ExitWalk_80241554) to 0x80000 0;
    bind N(script_ExitWalk_802415F0) to 0x80000 4;
    bind N(script_ExitWalk_8024164C) to 0x80000 8;
});

Script N(script_8024170C) = SCRIPT({
    group 0;
    SI_VAR(0) = 0;
    loop {
        SetTexPanOffset(13, 0, SI_VAR(0), 0);
        SI_VAR(0) += 0x4000;
        sleep 15;
    }
});

Script N(script_EnterWalk_80241784) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn N(script_80244AF0);
        spawn EnterSavePoint;
        spawn N(script_802416A8);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SetGroupEnabled(1, 0);
        spawn N(script_80241B60);
        return;
    } else {
        spawn N(script_80244AF0);
        SI_VAR(0) = N(script_802416A8);
        spawn EnterWalk;
        sleep 1;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 27;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1964) = 1;
    SI_SAVE_FLAG(263) = 0;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        MakeNpcs(0, N(npcGroupList_80242810));
    } else {
        MakeNpcs(0, N(npcGroupList_802427EC));
    }
    await N(script_MakeEntities);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 3) {
        spawn N(script_802410B0);
    }
    await N(script_8024101C);
    if (SI_SAVE_VAR(0) == 0xFFFFFF97) {
        if (SI_AREA_FLAG(180) == 0) {
            sleep 50;
            SI_AREA_FLAG(180) = 1;
        }
        spawn N(script_80242F20);
    }
    spawn N(script_EnterWalk_80241784);
    spawn N(script_8024170C);
});

s32 pad_001A28[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241A30) = SCRIPT({
0:
    SetTexPanOffset(13, 0, 0, 0);
    sleep 10;
    SetTexPanOffset(13, 0, 0x4000, 0);
    sleep 10;
    goto 0;
});

s32 pad_001AA8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241AB0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241ADC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 unk_missing_80241B08[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80241B34) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

Script N(script_80241B60) = SCRIPT({
    DisablePlayerInput(1);
    UseSettingsFrom(0, 305, 0xFFFFFFF6, 0xFFFFFFCE);
    SetPanTarget(0, 305, 0xFFFFFFF6, 0xFFFFFFCE);
    SetCamDistance(0, 400.0);
    SetCamPitch(0, 9.0, -10.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 30;
    SpeakToPlayer(3, 0x860004, 0x860006, 0, 0xA006C);
    sleep 10;
    SetNpcAnimation(3, 0x860001);
    SpeakToPlayer(2, 0x840104, 0x840101, 0, 0xA006D);
    sleep 10;
    SpeakToPlayer(3, 0x860004, 0x860001, 0, 0xA006E);
    sleep 50;
    GotoMap(D_80244B80_A10870, 3);
    sleep 100;
});

Script N(script_Defeat_80241CE8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            GetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
            SetPlayerPos(SI_VAR(3), SI_VAR(1), 0xFFFFFFD3);
            SI_VAR(3) += 40;
            SetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(1), 0xFFFFFFD3);
            GetNpcPos(0, SI_VAR(3), SI_VAR(1), SI_VAR(2));
            SI_VAR(3) += 0xFFFFFFE7;
            SetNpcPos(0, SI_VAR(3), SI_VAR(1), 0xFFFFFFD3);
            spawn N(script_80244210);
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Idle_80241DFC) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {}
        == 1 {
            StartBossBattle(3);
        }
    }
    sleep 1;
    goto 0;
});

Script N(script_Init_80241E80) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFF98) {
        BindNpcIdle(-1, N(script_Idle_80241DFC));
        BindNpcDefeat(-1, N(script_Defeat_80241CE8));
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_Idle_80241EE8) = SCRIPT({
    SetSelfVar(0, 0);
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    EnablePartner(11);
    func_802407C0_A0C4B0(11);
    StartBattle();
});

Script N(script_Interact_80241F8C) = SCRIPT({

});

Script N(script_Defeat_80241F9C) = SCRIPT({
    SetSelfVar(0, 2);
    DisablePartner(11);
    func_802407C0_A0C4B0(1);
});

Script N(script_Init_80241FE0) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241EE8));
    BindNpcInteract(-1, N(script_Interact_80241F8C));
    BindNpcDefeat(-1, N(script_Defeat_80241F9C));
});

StaticNpc N(npcGroup_8024202C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241AB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80241FE0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
    },
};

StaticNpc N(npcGroup_8024221C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241B34),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00840701,
        .init = N(script_Init_80241E80),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00570000, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570004, 0x00570004, 0x00570002, 0x00570003, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001, 0x00570001,
        },
    },
};

StaticNpc N(npcGroup_8024240C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241ADC),
        .pos = { 280.0, -10.0, -50.0 },
        .flags = 0x00000001,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00840101, 0x00840102, 0x00840103, 0x00840103, 0x00840101, 0x00840101, 0x00840106, 0x00840106, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241ADC),
        .pos = { 330.0, -10.0, -40.0 },
        .flags = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00860001, 0x00860002, 0x00860003, 0x00860003, 0x00860001, 0x00860001, 0x00860000, 0x00860000, 0x00860000, 0x00860000, 0x00860000, 0x00860000, 0x00860000, 0x00860000, 0x00860000, 0x00860000,
        },
    },
};

NpcGroupList N(npcGroupList_802427EC) = {
    NPC_GROUP(N(npcGroup_8024202C), 0x04000000),
    NPC_GROUP(N(npcGroup_8024221C), 0x04030000),
    {},
};

NpcGroupList N(npcGroupList_80242810) = {
    NPC_GROUP(N(npcGroup_8024240C), 0x00000000),
    {},
};

s32 pad_002828[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242830) = SCRIPT({
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D016E, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_80242878) = SCRIPT({
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D016D, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAFDC, 450, 10, 0xFFFFFF47, 0, 0x80000000);
    AssignScript(N(script_80242830));
    MakeEntity(D_802EAFDC, 855, 0xFFFFFFF6, 0xFFFFFFD8, 0, 0x80000000);
    AssignScript(N(script_80242878));
    MakeEntity(D_802EAB04, 380, 0xFFFFFFF6, 25, 0, 16, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(538));
});

s32 N(unk_80242970)[] = {
    0x00000000,
};

Script N(script_80242974) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802429A4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(vectorList_802429D4)[] = {
    0x00000000, 0x00000000, 0x40000000, 0x42920000, 0xC0C00000, 0x40000000, 0x42D40000, 0x42000000,
    0x40000000, 0x428C0000, 0x422C0000, 0x40000000, 0x41F00000, 0x41400000, 0x40000000, 0xC1880000,
    0xC1980000, 0x40000000, 0xC20C0000, 0x41E80000, 0x40000000, 0xC1A00000, 0x422C0000, 0x40000000,
    0xC1300000, 0x421C0000, 0x40000000, 0x00000000, 0xBF800000, 0x00000000,
};

s32 N(vectorList_80242A4C)[] = {
    0x41700000, 0x432E0000, 0xC2340000, 0xC31D0000, 0x42B80000, 0xC2300000, 0xC3B98000, 0x42CE0000,
    0xC2340000, 0xC3AF0000, 0x42960000, 0xC2340000, 0xC37A0000, 0x42200000, 0xC2340000,
};

s32 N(vectorList_80242A88)[] = {
    0x00000000, 0x00000000, 0x00000000, 0xC2700000, 0x40400000, 0xC1300000, 0xC25C0000, 0x41500000,
    0x00000000, 0x40800000, 0x42200000, 0xC0A00000, 0x41B80000, 0x420C0000, 0xC1200000, 0x427C0000,
    0x41C80000, 0xC1A00000, 0x42BC0000, 0x41F00000, 0xC2200000, 0x43060000, 0x437A0000, 0xC2A00000,
};

s32 N(vectorList_80242AE8)[] = {
    0xC2900000, 0x439F0000, 0xC2A00000, 0xC2FE0000, 0x43190000, 0xC2700000, 0xC32E0000, 0x42E40000,
    0xC2300000, 0xC3730000, 0x42B40000, 0xC2340000, 0xC3860000, 0x42480000, 0xC2380000, 0xC32E0000,
    0x41200000, 0xC22C0000,
};

s32 N(vectorList_80242B30)[] = {
    0x00000000, 0x00000000, 0x00000000, 0xC1F00000, 0x40400000, 0xC1300000, 0xC25C0000, 0x41500000,
    0x00000000, 0xC2920000, 0x41A00000, 0xC0A00000, 0xC2CE0000, 0x42200000, 0x00000000, 0xC30F0000,
    0x42700000, 0x00000000, 0xC32D0000, 0x42480000, 0x41D00000, 0xC2FC0000, 0x420C0000, 0x41800000,
    0x448AE000, 0x440E8000, 0xC403C000,
};

s32 N(unk_80242B9C)[] = {
    0x00000000,
};

s32 N(unk_80242BA0)[] = {
    0x00000000,
};

Script N(script_80242BA4) = SCRIPT({
    GetNpcPos(1, SI_VAR(6), SI_VAR(7), SI_VAR(8));
0:
    GetNpcPos(1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(9) = SI_VAR(3);
    SI_VAR(10) = SI_VAR(4);
    SI_VAR(11) = SI_VAR(5);
    SI_VAR(3) -= SI_VAR(6);
    SI_VAR(4) -= SI_VAR(7);
    SI_VAR(5) -= SI_VAR(8);
    func_80240A54_A0C744();
    SI_VAR(6) = SI_VAR(9);
    SI_VAR(7) = SI_VAR(10);
    SI_VAR(8) = SI_VAR(11);
    PlayerFaceNpc(1, 0);
    GetAngleBetweenNPCs(0, 1, SI_VAR(0));
    InterpNpcYaw(0, SI_VAR(0), 0);
    GetAngleBetweenNPCs(0xFFFFFFFC, 1, SI_VAR(0));
    InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
    sleep 1;
    goto 0;
});

Script N(script_80242D20) = SCRIPT({
    loop {
        InterpNpcYaw(0, 270, 0);
        sleep 10;
        InterpNpcYaw(0, 90, 0);
        sleep 10;
    }
});

Script N(script_80242D8C) = SCRIPT({
    loop {
        loop 5 {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 3;
        }
        sleep 3;
        loop 5 {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += -1;
            SetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 3;
        }
        sleep 3;
    }
});

Script N(script_80242E98) = SCRIPT({
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 15;
        SI_VAR(2) += 2;
        SetItemPos(SI_MAP_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80242F20) = SCRIPT({
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 0xFFFFFF9C) {
            break;
        }
    }
    DisablePlayerInput(1);
    func_802CF56C(2);
    spawn {
        SI_VAR(0) += 0xFFFFFFEC;
        PlayerMoveTo(SI_VAR(0), SI_VAR(2), 10);
    }
    SetNpcPos(0, 50, 180, 0);
    SetNpcJumpscale(0, 0);
    SI_VAR(0) += 0xFFFFFFF6;
    NpcJump0(0, SI_VAR(0), 20, SI_VAR(2), 15);
    PlaySoundAtPlayer(225, 0);
    SetPlayerAnimation(0x10023);
    SetNpcAnimation(0, 0x20000E);
    spawn {
        SetNpcAnimation(0, 0x200016);
        SetNpcJumpscale(0, 0.6005859375);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF9C;
        NpcJump0(0, SI_VAR(0), 10, SI_VAR(2), 20);
        SetPlayerAnimation(0x10002);
    }
    spawn {
        ShakeCam(0, 0, 5, 2.0);
    }
    spawn {
        SI_VAR(3) = 360;
        loop 3 {
        22:
            sleep 1;
            SI_VAR(3) -= 45;
            if (SI_VAR(3) > 0) {
                SetNpcRotation(0, 0, SI_VAR(3), 0);
                if (SI_VAR(3) == 270) {
                    SetNpcAnimation(0, 0x20001A);
                }
                if (SI_VAR(3) == 90) {
                    SetNpcAnimation(0, 0x200016);
                }
                goto 22;
            }
        }
        SetNpcRotation(0, 0, 0, 0);
    }
    ShowMessageAtScreenPos(0xA000D, 160, 40);
    SetMusicTrack(0, 112, 0, 8);
    SetPlayerAnimation(0x10002);
    SetNpcAnimation(0, 0x200001);
    NpcFacePlayer(0, 0);
    SpeakToPlayer(0, 0x20000C, 0x200001, 0, 0xA000E);
    func_80240B20_A0C810();
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFEC;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 275);
    SetCamPitch(0, 16.0, -8.5);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    SetNpcSpeed(0, 3.0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 40;
    NpcMoveTo(0, SI_VAR(0), SI_VAR(2), 0);
    ShowEmote(0, 1, 45, 20, 1, 0, 0, 0, 0);
    sleep 20;
    SetNpcAnimation(0, 0x20000F);
    SetNpcJumpscale(0, 1.0);
    loop 2 {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    }
    DisablePartnerAI(0);
    SetNpcJumpscale(0xFFFFFFFC, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 25;
    NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA000F);
    sleep 5;
    GetNpcPos(0, SI_VAR(4), SI_VAR(5), SI_VAR(6));
    LoadPath(70, N(vectorList_802429D4), 10, 0);
1:
    GetNextPathPos();
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(3) +=f SI_VAR(6);
    SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    func_80240994_A0C684();
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 1;
    }
    SetNpcAnimation(0, 0x200001);
    sleep 10;
    SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA0010);
    SetNpcYaw(0, 270);
    SetNpcAnimation(0, 0x20001A);
    SpeakToPlayer(0, -1, -1, 5, 0xA0011);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    MakeItemEntity(7, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 0);
    SI_MAP_VAR(10) = SI_VAR(0);
    SI_VAR(8) = spawn N(script_80242D8C);
    SI_VAR(9) = spawn N(script_80242E98);
    SetNpcAnimation(0, 0x200017);
    ContinueSpeech(0, -1, -1, 512, 0xA0012);
    GetPlayerPos(SI_VAR(5), SI_VAR(3), SI_VAR(4));
    SI_VAR(5) += 0xFFFFFFE2;
    NpcMoveTo(0, SI_VAR(5), SI_VAR(4), 15);
    kill SI_VAR(9);
    kill SI_VAR(8);
    spawn {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 15;
        SI_VAR(4) = SI_VAR(1);
        SI_VAR(4) += 30;
        SI_VAR(3) = SI_VAR(0);
        MakeLerp(SI_VAR(1), SI_VAR(4), 7, 4);
        loop {
            UpdateLerp();
            SetItemPos(SI_MAP_VAR(10), SI_VAR(3), SI_VAR(0), SI_VAR(2));
            sleep 1;
            SI_VAR(3) += 2;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetPlayerPos(SI_VAR(5), SI_VAR(6), SI_VAR(7));
        SI_VAR(6) += 38;
        MakeLerp(SI_VAR(0), SI_VAR(6), 7, 1);
        loop {
            UpdateLerp();
            SetItemPos(SI_MAP_VAR(10), SI_VAR(3), SI_VAR(0), SI_VAR(2));
            sleep 1;
            SI_VAR(3) += 2;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        RemoveItemEntity(SI_MAP_VAR(10));
    }
    SetNpcAnimation(0, 0x200014);
    sleep 11;
    SetNpcAnimation(0, 0x200015);
    SI_VAR(0) = 7;
    SI_VAR(1) = 4;
    ShowGotItem(SI_VAR(0), 1, 0);
    AddKeyItem(SI_VAR(0));
    func_80240908_A0C5F8();
    SetNpcAnimation(0, 0x200001);
    sleep 20;
    SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA0013);
    ShowChoice(0x1E0013);
    if (SI_VAR(0) == 1) {
        ContinueSpeech(0, 0x200009, 0x200001, 0, 0xA0014);
        ShowChoice(0x1E0013);
        if (SI_VAR(0) != 0) {
            ContinueSpeech(0, 0x200009, 0x200001, 0, 0xA0015);
        } else {
            goto 15;
        }
    } else {
    15:
        ContinueSpeech(0, 0x200009, 0x200001, 0, 0xA0016);
        SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 0, 0xA0017);
        SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA0018);
        SetPlayerAnimation(0x80007);
        SetNpcVar(0, 0, 1);
        loop {
            GetNpcVar(0, 0, SI_VAR(0));
            if (SI_VAR(0) == 2) {
                break;
            }
            sleep 1;
        }
    }
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA002F);
    SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 0, 0xA0030);
    sleep 20;
    spawn N(script_80241084);
    ShowMessageAtScreenPos(0xA0031, 320, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        sleep 20;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF06;
        SI_VAR(0) /= 2;
        SetPanTarget(0, 0xFFFFFF06, 53, 0);
        SetCamSpeed(0, 1.400390625);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 10;
        SetPanTarget(0, SI_VAR(0), 0, 0);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    SI_VAR(10) = spawn N(script_80242BA4);
    LoadPath(67, N(vectorList_80242A4C), 5, 0);
2:
    GetNextPathPos();
    SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 2;
    }
    kill SI_VAR(10);
    parallel {
        loop {
            loop 10 {
                GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(1) += 1;
                SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                sleep 2;
            }
            sleep 3;
            loop 10 {
                GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(1) += -1;
                SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                sleep 2;
            }
            sleep 3;
        }
    }
    SetNpcAnimation(1, 0x570000);
    loop 3 {
        SetNpcRotation(1, 0, 0, 10);
        sleep 1;
        SetNpcRotation(1, 0, 0, 0);
        sleep 1;
    }
    sleep 20;
    SI_VAR(10) = spawn N(script_80242D20);
    SpeakToPlayer(0, 0x200009, 0x200000, 5, 0xA0032);
    kill SI_VAR(10);
    sleep 10;
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), 0, SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 260.0);
    SetCamPitch(0, 13.0, -8.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    SpeakToPlayer(1, 0x570009, 0x570000, 512, 0xA0033);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF06;
    SI_VAR(0) /= 2;
    UseSettingsFrom(0, SI_VAR(0), 0, 0);
    SetPanTarget(0, SI_VAR(0), 0, 0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    SetNpcVar(1, 0, 1);
    EnablePartnerAI();
    unbind;
});

Script N(script_80244210) = SCRIPT({
    func_802D5830(1);
    SetMusicTrack(0, 112, 0, 8);
    sleep 60;
    SetCamLeadPlayer(0, 1);
    GetNpcPos(0, SI_VAR(3), SI_VAR(1), SI_VAR(2));
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 275.0);
    SetCamPitch(0, 16.0, -9.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    InterpNpcYaw(0, 90, 0);
    SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA0034);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerJumpscale(0.5);
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    sleep 10;
    SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA0035);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 700.0);
    SetCamSpeed(0, 1.30078125);
    PanToTarget(0, 0, 1);
    GetNpcPos(0, SI_VAR(4), SI_VAR(5), SI_VAR(6));
    LoadPath(85, N(vectorList_80242A88), 8, 0);
0:
    GetNextPathPos();
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(3) +=f SI_VAR(6);
    SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    func_80240994_A0C684();
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    sleep 45;
    spawn {
        LoadPath(60, N(vectorList_80242AE8), 6, 0);
    1:
        GetNextPathPos();
        SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        func_80240994_A0C684();
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 1;
        }
    }
    sleep 30;
    GetNpcPos(0, SI_VAR(3), SI_VAR(1), SI_VAR(2));
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 275.0);
    SetCamPitch(0, 16.0, -8.5);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x200009, 0x200001, 0, 0xA0036);
    spawn {
        GetNpcPos(0, SI_VAR(4), SI_VAR(5), SI_VAR(6));
        LoadPath(120, N(vectorList_80242B30), 9, 1);
    2:
        GetNextPathPos();
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(2) +=f SI_VAR(5);
        SI_VAR(3) +=f SI_VAR(6);
        SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        func_80240994_A0C684();
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 2;
        }
    }
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 12.5, -10.0);
    func_80240B3C_A0C82C();
    SetCamPosA(0, SI_VAR(0), SI_VAR(1));
    SetCamPosB(0, SI_VAR(2), SI_VAR(3));
    SetCamSpeed(0, 0.5);
    PanToTarget(0, 0, 1);
    sleep 30;
    SetNpcFlagBits(0, 0x40000, 1);
    SI_VAR(0) = 0.0;
    loop 10 {
        SI_VAR(0) += 36.0;
        SetNpcRotation(0, 0, SI_VAR(0), 0);
        sleep 1;
    }
    SetNpcFlagBits(0, 0x40000, 0);
    sleep 120;
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    PlayerFaceNpc(0xFFFFFFFC, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 275.0);
    SetCamPitch(0, 13.0, -7.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 0, 0xA0037);
    EnablePartnerAI();
    SetPlayerAnimation(0x10029);
    sleep 30;
    SetPlayerAnimation(0x10002);
    spawn {
        SI_SAVE_VAR(0) = 0xFFFFFF98;
        func_802D5830(0);
        ResetCam(0, 4.0);
    }
    sleep 10;
    DisablePlayerInput(0);
});

s32 pad_004AE4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244AF0) = SCRIPT({
    func_802C90FC(1, 1, -1);
    func_802C94A0(1, func_80240C40_A0C930, 0);
});

// rodata: D_80244B30_A10820

s32 pad_004B38[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244B40_A10830

// rodata: D_80244B48_A10838

// rodata: D_80244B50_A10840

// rodata: D_80244B58_A10848

// rodata: D_80244B60_A10850

// rodata: D_80244B68_A10858

// rodata: D_80244B70_A10860

s32 pad_004B78[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244B80_A10870

s32 pad_004B88[] = {
    0x00000000, 0x00000000,
};
