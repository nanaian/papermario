#include "jan_07.h"

s32 pad_000D98[2];
s32 pad_000FDC[1];
s32 pad_00121C[1];
Script N(script_80241270);
s32 pad_0012AC[1];
Script N(script_ExitWalk_802412B0);
Script N(script_8024130C);
Script N(main);
s32 pad_001424[3];
s32 unk_missing_80241488[12];
Script N(script_802414B8);
Script N(script_NpcAI_802415A4);
Script N(script_NpcAI_80241640);
Script N(script_80241714);
Script N(script_Idle_8024178C);
Script N(script_Init_80241EC8);
Script N(script_Idle_80241F48);
Script N(script_Defeat_8024263C);
Script N(script_Init_80242730);
Script N(script_Init_802427B0);
StaticNpc N(npcGroup_802427F8)[2];
StaticNpc N(npcGroup_80242BD8)[2];
StaticNpc N(npcGroup_80242FB8)[1];
NpcGroupList N(npcGroupList_802431A8);
s32 pad_0031D8[2];
Script N(script_SearchBush_802431E0);
Script N(script_ShakeTree_80243540);
s32 N(treeDropList_Tree1)[8];
Script N(script_80243BC4);
s32 pad_003C1C[1];
Script N(script_SearchBush_80243C20);
Script N(script_ShakeTree_80243F80);
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
Script N(script_80244624);
s32 pad_0046E4[3];
const char D_802446F0_B5DF60[8]; // "jan_06"
s32 pad_0046F8[2];

// text: N(UnkNpcAIFunc4)

// text: func_80240050_B598C0

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_8024041C_B59C8C

// text: func_802405D0_B59E40

// text: func_80240830_B5A0A0

// text: func_80240AE4_B5A354

s32 pad_000D98[] = {
    0x00000000, 0x00000000,
};

// text: func_80240DA0_B5A610

// text: func_80240E10_B5A680

s32 pad_000FDC[] = {
    0x00000000,
};

// text: func_80240FE0_B5A850

// text: func_80241050_B5A8C0

s32 pad_00121C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -220.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900F7,
};

Script N(script_80241270) = SCRIPT({
    SetMusicTrack(0, 36, 0, 8);
    ClearAmbientSounds(250);
});

s32 pad_0012AC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802412B0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802446F0_B5DF60, 1);
    sleep 100;
});

Script N(script_8024130C) = SCRIPT({
    bind N(script_ExitWalk_802412B0) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802431A8));
    spawn N(script_80243BC4);
    spawn N(script_80244624);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    SI_VAR(0) = N(script_8024130C);
    spawn EnterWalk;
    spawn N(script_80241270);
});

s32 pad_001424[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241430) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
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

NpcSettings N(npcSettings_8024145C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
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

s32 unk_missing_80241488[] = {
    0x00420000, 0x00420003, 0x00420005, 0x00420006, 0x00420007, 0x0042000F, 0x00420010, 0x0042001A,
    0x0042001B, 0xFFFFFFFF, 0x00420000, 0xFFFFFFFF,
};

Script N(script_802414B8) = SCRIPT({
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

NpcAISettings N(aISettings_80241574) = {
    .moveSpeed = 1.7f,
    .moveTime = 0x64,
    .waitTime = 0x1,
    .alertRadius = 100.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 120.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802415A4) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 12);
    SetSelfVar(3, 9);
    func_80240AE4_B5A354(N(aISettings_80241574));
});

NpcSettings N(npcSettings_80241614) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802415A4),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_NpcAI_80241640) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 22);
    SetSelfVar(2, 40);
    SetSelfVar(3, 28);
    SetSelfVar(4, 1);
    SetSelfVar(15, 0);
    func_802405D0_B59E40();
});

NpcSettings N(npcSettings_802416E8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x8,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241640),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802414B8),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0x8,
};

Script N(script_80241714) = SCRIPT({
    SI_AREA_FLAG(2) = 0;
    loop {
        PlaySoundAtNpc(0, 496, 0);
        sleep 20;
        if (SI_AREA_FLAG(2) == 1) {
            break;
        }
    }
});

Script N(script_Idle_8024178C) = SCRIPT({
    if (SI_SAVE_FLAG(1272) == 0) {
        DisablePlayerInput(1);
        ShowMessageAtScreenPos(0x1000B4, 320, 60);
        PlaySoundAtPlayer(610, 0);
        ShowEmote(0, 0, 0, 30, 0, 0, 0, 0, 0);
        PlaySoundAtNpc(0xFFFFFFFC, 610, 0);
        ShowEmote(0xFFFFFFFC, 0, 0, 30, 1, 0, 0, 0, 0);
        sleep 30;
        UseSettingsFrom(0, 0xFFFFFF49, 50, 0xFFFFFFF5);
        SetPanTarget(0, 50, 0, 0);
        SetCamDistance(0, 500);
        SetCamPitch(0, 16, -6.0);
        SetCamSpeed(0, 3);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(-1, 0x970306, 0x970306, 5, 0x1000B5);
        sleep 10;
        spawn N(script_80241714);
        ResetCam(0, 90.0);
        SI_SAVE_FLAG(1272) = 1;
        DisablePlayerInput(0);
    }
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) != 1) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    UseSettingsFrom(0, 0xFFFFFFEC, 0, 20);
    SetPanTarget(0, 0xFFFFFFEC, 0, 20);
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 2.5);
    PanToTarget(0, 0, 1);
    spawn {
        DisablePartnerAI(0);
        SetNpcFlagBits(0xFFFFFFFC, 0x8140, 1);
        SetNpcAnimation(0xFFFFFFFC, 258);
        NpcMoveTo(0xFFFFFFFC, 0xFFFFFFC9, 5, 30);
        SetNpcAnimation(0xFFFFFFFC, 262);
        NpcFaceNpc(0xFFFFFFFC, -1, 0);
        SetNpcFlagBits(0xFFFFFFFC, 0x8140, 0);
        EnablePartnerAI();
    }
    PlayerMoveTo(0xFFFFFFEC, 10, 25);
    sleep 15;
    SI_AREA_FLAG(2) = 1;
    spawn {
        PlaySoundAtNpc(-1, 610, 0);
        ShowEmote(-1, 0, 0, 30, 1, 0, 0, 0, 0);
    }
    sleep 30;
    SetNpcAnimation(-1, 0x97030A);
    sleep 10;
    InterpNpcYaw(-1, 270, 0);
    sleep 30;
    InterpNpcYaw(-1, 90, 0);
    sleep 15;
    InterpNpcYaw(-1, 270, 0);
    sleep 10;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) == 7) {
        SpeakToPlayer(-1, 0x97030B, 0x97030A, 0, 0x1000B6);
    } else {
        SpeakToPlayer(-1, 0x97030B, 0x97030A, 0, 0x1000B7);
    }
    EndSpeech(-1, 0x970304, 0x970301, 0);
    spawn {
        SetNpcFlagBits(-1, 256, 1);
        SetNpcAnimation(-1, 0x970303);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, 0xFFFFFF6A, 15, 0);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
    SI_SAVE_FLAG(1231) = 1;
    SI_VAR(0) = 0;
    SI_VAR(0) += SI_SAVE_FLAG(1230);
    SI_VAR(0) += SI_SAVE_FLAG(1231);
    SI_VAR(0) += SI_SAVE_FLAG(1232);
    SI_VAR(0) += SI_SAVE_FLAG(1233);
    SI_VAR(0) += SI_SAVE_FLAG(1234);
    if (SI_VAR(0) == 5) {
        SetMusicTrack(0, 78, 0, 8);
        SI_SAVE_VAR(0) = 16;
        SetPlayerAnimation(0x10032);
        sleep 120;
        spawn N(script_80241270);
        SetPlayerAnimation(0x10002);
    } else {
        spawn {
            sleep 12;
            InterpPlayerYaw(270, 0);
            InterpNpcYaw(0xFFFFFFFC, 270, 0);
        }
        sleep 30;
    }
    ResetCam(0, 4.5);
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Init_80241EC8) = SCRIPT({
    if (SI_SAVE_VAR(0) == 15) {
        if (SI_SAVE_FLAG(1231) == 0) {
            SetNpcAnimation(-1, 0x970306);
            BindNpcIdle(-1, N(script_Idle_8024178C));
            return;
        }
    }
    RemoveNpc(-1);
});

Script N(script_Idle_80241F48) = SCRIPT({
    parallel {
        loop {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 0xFFFFFF42) {
                SetSelfEnemyFlagBits(0x1000000, 1);
                SetSelfEnemyFlagBits(0x10000000, 1);
            } else {
                SetSelfEnemyFlagBits(0x1000000, 0);
                SetSelfEnemyFlagBits(0x10000000, 0);
            }
            sleep 1;
        }
    }
    SetNpcCollisionSize(1, 48, 40);
    SetNpcCollisionSize(2, 48, 40);
    AwaitPlayerApproach(60, 20, 140);
    DisablePlayerInput(1);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        0x802D2B6C();
    }
    sleep 5;
    spawn {
        UseSettingsFrom(0, 0xFFFFFFC4, 0, 20);
        SetPanTarget(0, 0xFFFFFFCE, 0, 20);
        SetCamSpeed(0, 1.0);
        PanToTarget(0, 0, 1);
    }
    spawn {
        InterpNpcYaw(1, 270, 0);
    }
    SetNpcAnimation(2, 0x360004);
    PlaySoundAtNpc(2, 610, 0);
    ShowEmote(2, 0, 0, 38, 1, 0, 0, 0, 0);
    sleep 3;
    SetNpcAnimation(1, 0x360004);
    PlaySoundAtNpc(1, 610, 0);
    ShowEmote(1, 0, 0, 35, 1, 0, 0, 0, 0);
    sleep 35;
    SetNpcAnimation(1, 0x360001);
    SetNpcAnimation(2, 0x360001);
    sleep 5;
    SetNpcAnimation(1, 0x360004);
    SI_VAR(0) = 0;
    loop 15 {
        SI_VAR(0) += 24;
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(1, 8369, 0);
    SetNpcAnimation(1, 0x360001);
    sleep 5;
    SetNpcAnimation(2, 0x360004);
    SI_VAR(0) = 0;
    loop 15 {
        SI_VAR(0) += 24;
        SetNpcRotation(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(2, 8369, 0);
    SetNpcAnimation(2, 0x360001);
    sleep 5;
    SetNpcAnimation(1, 0x360004);
    SetNpcAnimation(2, 0x360004);
    SI_VAR(0) = 0;
    loop 12 {
        SI_VAR(0) += 30;
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        SetNpcRotation(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(1, 8370, 0);
    SI_VAR(0) = 0;
    loop 12 {
        SI_VAR(0) += 30;
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        SetNpcRotation(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(1, 8370, 0);
    SI_VAR(0) = 0;
    loop 12 {
        SI_VAR(0) += 30;
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        SetNpcRotation(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(1, 8370, 0);
    loop 3 {
        sleep 5;
        PlaySoundAtNpc(1, 8371, 0);
    }
    SetNpcAnimation(1, 0x360005);
    SetNpcAnimation(2, 0x360005);
    sleep 20;
    SetNpcAnimation(1, 0x360006);
    SetNpcAnimation(2, 0x360006);
    PlaySoundAtNpc(1, 946, 0);
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Defeat_8024263C) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFFEC, 0, 20);
    SetPanTarget(0, 0xFFFFFFEC, 0, 20);
    SetCamDistance(0, 500.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcVar(0, 0, 1);
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242730) = SCRIPT({
    if (SI_SAVE_VAR(0) == 15) {
        if (SI_SAVE_FLAG(1231) == 0) {
            BindNpcIdle(-1, N(script_Idle_80241F48));
            BindNpcDefeat(-1, N(script_Defeat_8024263C));
            return;
        }
    }
    RemoveEncounter(-1);
});

Script N(script_Init_802427B0) = SCRIPT({
    if (SI_SAVE_FLAG(1231) == 0) {
        RemoveNpc(10);
        RemoveNpc(11);
    }
});

StaticNpc N(npcGroup_802427F8)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80241614),
        .pos = { -28.0, 0.0, 13.0 },
        .flags = 0x00000D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SLEEPY_SHEEP, 10 } },
        .movement = { 0xFFFFFFE4, 0x00000000, 0x0000000D, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFE4, 0x00000000, 0x0000000D, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
    },
    {
        .id = 11,
        .settings = &N(npcSettings_802416E8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D00,
        .init = N(script_Init_802427B0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
    },
};

StaticNpc N(npcGroup_80242BD8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024145C),
        .pos = { -20.0, 0.0, 20.0 },
        .flags = 0x00C40900,
        .init = N(script_Init_80242730),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024145C),
        .pos = { 80.0, 0.0, 20.0 },
        .flags = 0x00C40900,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

StaticNpc N(npcGroup_80242FB8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241430),
        .pos = { 30.0, 0.0, 20.0 },
        .flags = 0x0040090D,
        .init = N(script_Init_80241EC8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00970301, 0x00970302, 0x00970303, 0x00970303, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301,
        },
        .tattle = 0x1A00C6,
    },
};

NpcGroupList N(npcGroupList_802431A8) = {
    NPC_GROUP(N(npcGroup_802427F8), 0x14010004),
    NPC_GROUP(N(npcGroup_80242BD8), 0x15010004),
    NPC_GROUP(N(npcGroup_80242FB8), 0x00000000),
    {},
};

s32 pad_0031D8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802431E0) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240E10_B5A680, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240E10_B5A680, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80243540) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240E10_B5A680, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240E10_B5A680, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240E10_B5A680, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240E10_B5A680, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x8, 0x9, 0xA, 0xB, 0xC },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x7 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x00000157, 0xFFFFFF6A, 0x00000064, 0xFFFFFFB0, 0x0000000F, 0xF8406067, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, nanf }, { nanf, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_80243BB4) =  { -192.0f, 0.0f, -105.0f, 0.0f };

Script N(script_80243BC4) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80243540) to TriggerFlag_WALL_HAMMER 9;
    bind N(script_ShakeTree_80243540) to TriggerFlag_BOMB N(triggerCoord_80243BB4);
});

s32 pad_003C1C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243C20) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241050_B5A8C0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241050_B5A8C0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80243F80) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241050_B5A8C0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241050_B5A8C0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241050_B5A8C0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241050_B5A8C0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x1B },
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 1.61e-43f } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), 0x00000000, N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x1D },
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { 1.99e-43f, 2.8e-44f, 9.2e-44f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x1F },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x21 },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

Script N(script_80244624) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80243C20) to TriggerFlag_WALL_INTERACT 10;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80243C20) to TriggerFlag_WALL_INTERACT 11;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80243C20) to TriggerFlag_WALL_INTERACT 12;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80243C20) to TriggerFlag_WALL_INTERACT 13;
});

s32 pad_0046E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802446F0_B5DF60

s32 pad_0046F8[] = {
    0x00000000, 0x00000000,
};

// rodata: jtbl_80244700_B5DF70

// rodata: D_80244718_B5DF88

// rodata: jtbl_80244720_B5DF90

// rodata: jtbl_802448B0_B5E120
