#include "kmr_05.h"

s32 pad_0014F8[2];
s32 pad_00177C[1];
Script N(script_802417E0);
s32 pad_00180C[1];
Script N(script_ExitWalk_80241810);
Script N(script_ExitWalk_8024186C);
Script N(script_802418C8);
Script N(main);
Script N(script_NpcAI_80241AE0);
f32 N(floatTable_80241B2C)[6];
Script N(script_NpcAI_80241B74);
Script N(script_NpcAI_80241C40);
Script N(script_80241C8C);
Script N(script_Aux_80241D2C);
Script N(script_Idle_80241E44);
StaticNpc N(npcGroup_80242014)[1];
StaticNpc N(npcGroup_80242204)[1];
Script N(script_Init_802423F4);
StaticNpc N(npcGroup_8024242C)[1];
StaticNpc N(npcGroup_8024261C)[1];
NpcGroupList N(npcGroupList_8024280C);
NpcGroupList N(npcGroupList_80242848);
s32 pad_002884[3];
Script N(script_80242890);
s32 pad_0028C4[3];
Script N(script_SearchBush_802428D0);
Script N(script_ShakeTree_80242C30);
Script N(script_80243234);
Script N(script_Tree1_Callback);
Script N(script_802433D8);
const char D_80243430_8D14A0[8]; // "kmr_03"
const char D_80243438_8D14A8[8]; // "kmr_02"
s32 pad_003494[3];

// text: func_80240000_8CE070

// text: func_802401B0_8CE220

// text: N(UnkNpcAIFunc1)

// text: func_80240898_8CE908

// text: N(UnkNpcAIFunc2)

// text: func_80240C54_8CECC4

// text: func_80240CC0_8CED30

// text: N(UnkNpcAIFunc3)

// text: func_80240E58_8CEEC8

// text: func_802411E8_8CF258

// text: func_8024130C_8CF37C

s32 pad_0014F8[] = {
    0x00000000, 0x00000000,
};

// text: func_80241500_8CF570

// text: func_80241570_8CF5E0

// text: func_8024173C_8CF7AC

s32 pad_00177C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -110.0f, 0.0f, -19.0f, 90.0f },
    { 1397.0f, 200.0f, -145.0f, 220.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19003D,
};

Script N(script_802417E0) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

s32 pad_00180C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241810) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243430_8D14A0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024186C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243438_8D14A8, 2);
    sleep 100;
});

Script N(script_802418C8) = SCRIPT({
    bind N(script_ExitWalk_80241810) to 0x80000 0;
    bind N(script_ExitWalk_8024186C) to 0x80000 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 30;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_FLAG(43) == 0) {
        MakeNpcs(0, N(npcGroupList_8024280C));
    } else {
        MakeNpcs(0, N(npcGroupList_80242848));
    }
    await N(script_80242890);
    spawn N(script_802417E0);
    await N(script_802433D8);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 3, 0x7FFFFE00);
    SI_VAR(0) = N(script_802418C8);
    spawn EnterWalk;
    sleep 1;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        if (SI_SAVE_FLAG(72) == 0) {
            spawn N(script_80241C8C);
            SI_SAVE_FLAG(72) = 1;
        }
    }
});

NpcAISettings N(aISettings_80241AB0) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 130.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241AE0) = SCRIPT({
    DoBasicAI(N(aISettings_80241AB0));
});

NpcSettings N(npcSettings_80241B00) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241AE0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x5,
    .unk_2A = 0,
};

f32 N(floatTable_80241B2C)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80241B44) = {
    .moveSpeed = 1.6f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 80.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 2.2f,
    .unk_1C = 0x3C,
    .unk_20 = 0xF,
    .chaseRadius = 100.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241B74) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFE0C);
    SetSelfVar(6, 21);
    SetSelfVar(1, 580);
    func_8024130C_8CF37C(N(aISettings_80241B44));
});

NpcSettings N(npcSettings_80241BE4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x15,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241B74),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0x2,
};

NpcAISettings N(aISettings_80241C10) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 130.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241C40) = SCRIPT({
    DoBasicAI(N(aISettings_80241C10));
});

NpcSettings N(npcSettings_80241C60) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241C40),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

Script N(script_80241C8C) = SCRIPT({
    DisablePlayerInput(1);
    sleep 10;
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFFC4, 0xFFFFFFED, 0);
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x9D0008, 0x9D0001, 0, 0xB00B7);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Aux_80241D2C) = SCRIPT({
0:
    TranslateModel(107, -1, 0, 0);
    sleep 1;
    TranslateModel(107, 1, 0, 0);
    sleep 20;
    TranslateModel(107, 1, 0, 0);
    sleep 1;
    TranslateModel(107, -1, 0, 0);
    sleep 8;
    TranslateModel(107, -1, 0, 0);
    sleep 1;
    TranslateModel(107, 1, 0, 0);
    sleep 30;
    goto 0;
});

Script N(script_Idle_80241E44) = SCRIPT({
    0x800445D4(SI_VAR(0));
    match SI_VAR(0) {
        == 100 {
10:
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
            if (SI_VAR(1) < 100) {
                goto 10;
            }
            if (SI_VAR(0) < 560) {
                goto 10;
            }
            if (SI_VAR(0) > 700) {
                goto 10;
            }
            SetNpcAux(-1, 0);
            ShowEmote(-1, 0, 0xFFFFFFE2, 12, 1, 0, 0, 0, 0);
            SetNpcJumpscale(-1, 1.0);
            SetNpcSpeed(-1, 5.0);
            NpcJump0(-1, 685, 100, 0xFFFFFFDD, 0);
            SetSelfEnemyFlagBits(0x40000000, 1);
            BindNpcAI(-1, N(script_NpcAI_80241C40));
        }
        102, 3, 103 {
            BindNpcAI(-1, N(script_NpcAI_80241C40));
        }
    }
});

StaticNpc N(npcGroup_80242014)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241B00),
        .pos = { 305.0, 50.0, -13.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000131, 0x00000032, 0xFFFFFFF3, 0x0000001E, 0x00000014, 0xFFFF8001, 0x00000001, 0x0000014A, 0x00000032, 0x00000014, 0x00000078, 0x00000082, 0x00000001 },
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

StaticNpc N(npcGroup_80242204)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241B00),
        .pos = { 700.0, 210.0, -165.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x000002BC, 0x000000D2, 0xFFFFFF5B, 0x0000001E, 0x00000014, 0xFFFF8001, 0x00000001, 0x000002BC, 0x000000D2, 0xFFFFFF5B, 0x00000078, 0x00000082, 0x00000001 },
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

Script N(script_Init_802423F4) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241E44));
    BindNpcAux(-1, N(script_Aux_80241D2C));
});

StaticNpc N(npcGroup_8024242C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80241C60),
        .pos = { 712.0, 100.0, -95.0 },
        .flags = 0x00000400,
        .init = N(script_Init_802423F4),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000276, 0x00000064, 0x00000019, 0x00000028, 0x00000014, 0xFFFF8001, 0x00000001, 0x00000294, 0x00000064, 0x0000001E, 0x000000A5, 0x00000096, 0x00000001 },
        .animations = {
            0x00270001, 0x00270002, 0x00270003, 0x00270003, 0x00270001, 0x00270001, 0x00270005, 0x00270005, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003,
        },
    },
};

StaticNpc N(npcGroup_8024261C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80241BE4),
        .pos = { 960.0, 210.0, -20.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x000003C0, 0x000000D2, 0xFFFFFFEC, 0x00000032, 0x00000019, 0xFFFF8001, 0x00000001, 0x000003E3, 0x000000D2, 0xFFFFFFC7, 0x000000D2, 0x00000064, 0x00000001 },
        .animations = {
            0x00280001, 0x00280003, 0x00280004, 0x00280004, 0x00280001, 0x00280001, 0x00280006, 0x00280006, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004,
        },
    },
};

NpcGroupList N(npcGroupList_8024280C) = {
    NPC_GROUP(N(npcGroup_80242014), 0x00000004),
    NPC_GROUP(N(npcGroup_80242204), 0x00000004),
    NPC_GROUP(N(npcGroup_8024242C), 0x02000004),
    NPC_GROUP(N(npcGroup_8024261C), 0x02010004),
    {},
};

NpcGroupList N(npcGroupList_80242848) = {
    NPC_GROUP(N(npcGroup_80242014), 0x00000004),
    NPC_GROUP(N(npcGroup_80242204), 0x00000004),
    NPC_GROUP(N(npcGroup_8024242C), 0x000A0004),
    NPC_GROUP(N(npcGroup_8024261C), 0x00080004),
    {},
};

s32 pad_002884[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242890) = SCRIPT({
    MakeItemEntity(348, 133, 140, 0xFFFFFF65, 17, SI_SAVE_FLAG(74));
});

s32 pad_0028C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802428D0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_8CF5E0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_8CF5E0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80242C30) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_8CF5E0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_8CF5E0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_8CF5E0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241570_8CF5E0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_80243234) = SCRIPT({
    sleep 15;
    func_8024173C_8CF7AC();
    if (SI_VAR(0) == 1) {
        SetNpcVar(6, 4, 1);
    }
});

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x53, 0x54, 0x55 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x3,
    .modelIDs = { 0x50, 0x51, 0x52 },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { 6.15e-43f, 4.4e-43f, nanf }, { 7.34e-43f, 4.4e-43f, nanf } },
};

Script N(script_Tree1_Callback) = SCRIPT({
    if (SI_SAVE_FLAG(73) == 1) {
        return;
    }
    if (SI_MAP_FLAG(10) == 1) {
        return;
    }
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 490) {
        MakeItemEntity(343, 540, 290, 0xFFFFFF4C, 14, SI_SAVE_FLAG(73));
    } else {
        MakeItemEntity(343, 436, 300, 0xFFFFFF4C, 14, SI_SAVE_FLAG(73));
    }
    SI_MAP_FLAG(10) = 1;
});

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = &N(script_Tree1_Callback),
};

Vec4f N(triggerCoord_802433C8) =  { 488.0f, 245.0f, -196.0f, 0.0f };

Script N(script_802433D8) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80242C30) to TriggerFlag_WALL_HAMMER 72;
    bind N(script_ShakeTree_80242C30) to TriggerFlag_BOMB N(triggerCoord_802433C8);
});

// rodata: D_80243430_8D14A0

// rodata: D_80243438_8D14A8

// rodata: D_80243440_8D14B0

// rodata: D_80243448_8D14B8

// rodata: D_80243450_8D14C0

// rodata: jtbl_80243458_8D14C8

s32 pad_003494[] = {
    0x00000000, 0x00000000, 0x00000000,
};
