#include "jan_10.h"

s32 pad_00030C[1];
s32 pad_001124[3];
s32 pad_00127C[1];
s32 pad_0014FC[1];
s32 pad_00173C[1];
Script N(script_80241790);
s32 pad_0017CC[1];
Script N(script_UpdateTexturePan_802417D0);
Script N(script_ExitWalk_8024186C);
Script N(script_802418C8);
Script N(main);
Script N(script_NpcAI_80241B80);
Script N(script_Idle_80241C14);
Script N(script_Init_80241D54);
Script N(script_80241DD0);
Script N(script_Interact_80241E48);
Script N(script_Init_802420D0);
StaticNpc N(npcGroup_8024218C)[1];
StaticNpc N(npcGroup_8024237C)[1];
NpcGroupList N(npcGroupList_8024256C);
Script N(script_80242590);
Script N(script_80242760);
Script N(script_80242828);
Script N(script_80242A64);
Script N(script_80242BAC);
Script N(script_80242D3C);
Script N(script_80242DE8);
s32 pad_002E38[2];
Script N(script_SearchBush_80242E40);
Script N(script_ShakeTree_802431A0);
Script N(script_Tree1_Callback);
Script N(script_8024385C);
s32 pad_0038B4[3];
Script N(script_SearchBush_802438C0);
Script N(script_ShakeTree_80243C20);
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
s32 N(searchBushEvent_Bush5)[4];
s32 N(searchBushEvent_Bush6)[4];
Script N(script_80244314);
s32 pad_00442C[1];
Script N(script_80244430);
s32 pad_004464[3];
const char D_80244470_B70800[8]; // "jan_09"
s32 pad_004478[2];
s32 pad_0044C4[3];

// text: func_80240000_B6C390

// text: func_80240124_B6C4B4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_B6C6A0

// text: func_80240540_B6C8D0

// text: N(UnkNpcAIFunc1)

// text: func_80240938_B6CCC8

// text: func_80240ADC_B6CE6C

// text: func_80240BBC_B6CF4C

// text: N(UnkDurationCheck)

// text: func_80240F00_B6D290

s32 pad_001124[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80241130_B6D4C0

s32 pad_00127C[] = {
    0x00000000,
};

// text: func_80241280_B6D610

// text: func_802412F0_B6D680

// text: func_802414BC_B6D84C

s32 pad_0014FC[] = {
    0x00000000,
};

// text: func_80241500_B6D890

// text: func_80241570_B6D900

s32 pad_00173C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 380.0f, -20.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900F6,
};

Script N(script_80241790) = SCRIPT({
    SetMusicTrack(0, 36, 0, 8);
    ClearAmbientSounds(250);
});

s32 pad_0017CC[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802417D0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_B6C390();
                    return;
                }
            }
        }
    }
    func_80240124_B6C4B4();
});

Script N(script_ExitWalk_8024186C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244470_B70800, 2);
    sleep 100;
});

Script N(script_802418C8) = SCRIPT({
    bind N(script_ExitWalk_8024186C) to 0x80000 3;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_8024256C));
    await N(script_80244430);
    spawn N(script_80242DE8);
    ModifyColliderFlags(3, 14, 4);
    ModifyColliderFlags(0, 14, 0x80000);
    ModifyColliderFlags(3, 32, 1);
    spawn N(script_8024385C);
    spawn N(script_80244314);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    SI_VAR(0) = N(script_802418C8);
    spawn EnterWalk;
    spawn N(script_80241790);
    0x802C971C(69);
    EnableTexPanning(68, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFB0;
        SI_VAR(2) = 140;
        SI_VAR(3) = 80;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802417D0);
    }
});

NpcAISettings N(aISettings_80241B50) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0xA,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 5.0f,
    .unk_1C = 0x46,
    .unk_20 = 0x5,
    .chaseRadius = 200.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241B80) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240F00_B6D290(N(aISettings_80241B50), 2);
});

NpcSettings N(npcSettings_80241BBC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241B80),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241BE8) = {
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

Script N(script_Idle_80241C14) = SCRIPT({
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
0:
    GetSelfVar(7, SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    SetNpcAnimation(-1, 0x2B0309);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcFlagBits(-1, 8, 0);
    SetNpcPos(-1, 0xFFFFFDCA, 100, 65);
    0x802D617C(817, 110);
    sleep 20;
    SetNpcFlagBits(-1, 512, 0);
    SetNpcFlagBits(-1, 8, 1);
    BindNpcAI(-1, N(script_NpcAI_80241B80));
});

Script N(script_Init_80241D54) = SCRIPT({
    SetSelfVar(7, 0);
    SetSelfEnemyFlagBits(0x200000, 1);
    SetNpcFlagBits(-1, 512, 0);
    SetNpcFlagBits(-1, 8, 1);
    BindNpcIdle(-1, N(script_Idle_80241C14));
});

Script N(script_80241DD0) = SCRIPT({
    SI_AREA_FLAG(2) = 0;
    loop {
        PlaySoundAtNpc(0, 496, 0);
        sleep 20;
        if (SI_AREA_FLAG(2) == 1) {
            break;
        }
    }
});

Script N(script_Interact_80241E48) = SCRIPT({
    AdjustCam(0, 4.0, 0, 350, 17.0, -7.0);
    SI_AREA_FLAG(2) = 1;
    sleep 15;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) == 7) {
        SpeakToPlayer(-1, 0x97010B, 0x97010A, 0, 0x1000B2);
    } else {
        SpeakToPlayer(-1, 0x97010B, 0x97010A, 0, 0x1000B3);
    }
    EndSpeech(-1, 0x970104, 0x970101, 0);
    spawn {
        SetNpcFlagBits(-1, 256, 1);
        SetNpcAnimation(-1, 0x970103);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, 0xFFFFFF10, 10, 0);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
    SI_SAVE_FLAG(1233) = 1;
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
        spawn N(script_80241790);
        SetPlayerAnimation(0x10002);
    } else {
        sleep 30;
    }
    ResetCam(0, 4.0);
    RemoveNpc(-1);
});

Script N(script_Init_802420D0) = SCRIPT({
    if (SI_SAVE_VAR(0) == 15) {
        spawn N(script_80241DD0);
        if (SI_SAVE_FLAG(1233) == 0) {
            SetNpcAnimation(-1, 0x970106);
            SetNpcYaw(-1, 90);
            SetNpcPos(-1, 0xFFFFFE3E, 0, 70);
            BindNpcInteract(-1, N(script_Interact_80241E48));
            return;
        }
    }
    RemoveNpc(-1);
});

StaticNpc N(npcGroup_8024218C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241BE8),
        .pos = { -260.0, 0.0, -220.0 },
        .flags = 0x0040090D,
        .init = N(script_Init_802420D0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00970101, 0x00970102, 0x00970103, 0x00970103, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101,
        },
        .tattle = 0x1A00C4,
    },
};

StaticNpc N(npcGroup_8024237C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241BBC),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00400400,
        .init = N(script_Init_80241D54),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .movement = { 0xFFFFFE34, 0x00000000, 0x00000046, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE34, 0x00000000, 0x00000046, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
    },
};

NpcGroupList N(npcGroupList_8024256C) = {
    NPC_GROUP(N(npcGroup_8024218C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024237C), 0x140A0004),
    {},
};

Script N(script_80242590) = SCRIPT({
    if (SI_SAVE_FLAG(1237) == 0) {
        ModifyColliderFlags(0, 29, 0x7FFFFE00);
        EnableModel(63, 0);
        EnableModel(60, 0);
        TranslateGroup(64, 0, 0xFFFFFF5B, 0);
        TranslateGroup(61, 0, 0xFFFFFF5B, 0);
    } else {
        ModifyColliderFlags(0, 28, 0x7FFFFE00);
        ModifyColliderFlags(0, 30, 0x7FFFFE00);
        ModifyColliderFlags(1, 29, 0x7FFFFE00);
        EnableModel(63, 1);
        EnableModel(60, 1);
        TranslateGroup(64, 0, 10, 0);
        TranslateGroup(61, 0, 10, 0);
        RotateGroup(64, 90, 0, 0, 1);
        RotateGroup(61, 90, 0, 0, 1);
        RotateGroup(64, 90, 0, 1, 0);
        RotateGroup(61, 0xFFFFFFA6, 0, 1, 0);
    }
});

Script N(script_80242760) = SCRIPT({
    PlaySoundAtCollider(28, 357, 0);
    MakeLerp(0xFFFFFF5B, 0xFFFFFF48, 5, 6);
    loop {
        UpdateLerp();
        TranslateGroup(64, 0, SI_VAR(0), 0);
        TranslateGroup(61, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80242828) = SCRIPT({
    spawn {
        sleep 17;
        SetPlayerAnimation(0x1002A);
        func_80241130_B6D4C0(63, SI_MAP_FLAG(10));
    }
    ModifyColliderFlags(0, 28, 0x7FFFFE00);
    MakeLerp(0xFFFFFF48, 60, 30, 4);
    loop {
        UpdateLerp();
        TranslateGroup(64, 0, SI_VAR(0), 0);
        TranslateGroup(61, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 1;
    MakeLerp(60, 0, 30, 2);
    loop {
        UpdateLerp();
        TranslateGroup(64, 0, SI_VAR(0), 0);
        TranslateGroup(61, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetPlayerAnimation(0x10002);
    PlaySoundAtCollider(28, 8349, 0);
    PlayEffect(6, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    ShakeCam(0, 2, 3, 1);
});

Script N(script_80242A64) = SCRIPT({
    spawn {
        sleep 50;
        SI_MAP_FLAG(10) = 1;
    }
    MakeLerp(0, 90, 60, 2);
    loop {
        UpdateLerp();
        TranslateGroup(64, 0, 0, 0);
        TranslateGroup(61, 0, 0, 0);
        RotateGroup(64, SI_VAR(0), 0, 0, 1);
        RotateGroup(61, SI_VAR(0), 0, 0, 1);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        ShakeCam(0, 2, 3, 1);
    }
});

Script N(script_80242BAC) = SCRIPT({
    PlaySoundAtCollider(28, 8350, 0);
    EnableModel(63, 1);
    EnableModel(60, 1);
    MakeLerp(0, 90, 30, 8);
    loop {
        UpdateLerp();
        SI_VAR(2) = SI_VAR(0);
        SI_VAR(2) /= 9;
        TranslateGroup(64, 0, SI_VAR(2), 0);
        TranslateGroup(61, 0, SI_VAR(2), 0);
        RotateGroup(64, 90, 0, 0, 1);
        RotateGroup(61, 90, 0, 0, 1);
        RotateGroup(64, SI_VAR(0), 0, 1, 0);
        RotateGroup(61, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80242D3C) = SCRIPT({
    SI_SAVE_FLAG(1237) = 1;
    DisablePlayerInput(1);
    await N(script_80242760);
    sleep 1;
    await N(script_80242828);
    sleep 1;
    await N(script_80242A64);
    sleep 1;
    await N(script_80242BAC);
    sleep 1;
    DisablePlayerInput(0);
    spawn N(script_80242590);
});

Script N(script_80242DE8) = SCRIPT({
    if (SI_SAVE_FLAG(1237) == 0) {
        bind N(script_80242D3C) to TriggerFlag_WALL_HAMMER 28;
    }
    spawn N(script_80242590);
});

s32 pad_002E38[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80242E40) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802412F0_B6D680, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412F0_B6D680, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802431A0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802412F0_B6D680, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412F0_B6D680, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412F0_B6D680, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412F0_B6D680, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_Tree1_Callback) = SCRIPT({
    sleep 15;
    func_802414BC_B6D84C();
    if (SI_VAR(0) == 1) {
        SetNpcVar(1, 7, 1);
    }
});

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x13, 0x14, 0x15, 0x16, 0x17 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x12 },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, 8.3e-44f }, { nanf, 1.6e-43f, 6.9e-44f } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = &N(script_Tree1_Callback),
};

Vec4f N(triggerCoord_8024384C) =  { -557.0f, 0.0f, 29.0f, 0.0f };

Script N(script_8024385C) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802431A0) to TriggerFlag_WALL_HAMMER 17;
    bind N(script_ShakeTree_802431A0) to TriggerFlag_BOMB N(triggerCoord_8024384C);
});

s32 pad_0038B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802438C0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_B6D900, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_B6D900, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80243C20) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_B6D900, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_B6D900, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_B6D900, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_B6D900, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .modelIDs = { 0x2D },
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 1.74e-43f } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), 0x00000000, N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x2F },
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, 2.03e-43f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x31 },
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
    .modelIDs = { 0x33 },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x35 },
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { 4.9e-44f, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), 0x00000000, N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x37 },
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { 1.05e-43f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), 0x00000000, N(treeEffectVectors_Bush6), 0x00000000,
};

Script N(script_80244314) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_802438C0) to TriggerFlag_WALL_INTERACT 20;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_802438C0) to TriggerFlag_WALL_INTERACT 21;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_802438C0) to TriggerFlag_WALL_INTERACT 22;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_802438C0) to TriggerFlag_WALL_INTERACT 23;
    SI_VAR(0) = N(searchBushEvent_Bush5);
    bind N(script_SearchBush_802438C0) to TriggerFlag_WALL_INTERACT 24;
    SI_VAR(0) = N(searchBushEvent_Bush6);
    bind N(script_SearchBush_802438C0) to TriggerFlag_WALL_INTERACT 25;
});

s32 pad_00442C[] = {
    0x00000000,
};

Script N(script_80244430) = SCRIPT({
    MakeItemEntity(348, 0xFFFFFF6A, 0xFFFFFFC4, 60, 17, SI_SAVE_FLAG(1282));
});

s32 pad_004464[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244470_B70800

s32 pad_004478[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244480_B70810

// rodata: jtbl_80244488_B70818

s32 pad_0044C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
