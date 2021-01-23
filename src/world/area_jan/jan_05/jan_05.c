#include "jan_05.h"

s32 pad_00003C[1];
s32 pad_00034C[1];
s32 pad_00049C[1];
s32 pad_0007EC[1];
s32 pad_0026CC[1];
Script N(script_80242750);
s32 pad_00278C[1];
Script N(script_UpdateTexturePan_80242790);
Script N(script_ExitWalk_8024282C);
Script N(script_ExitWalk_80242888);
Script N(script_ExitWalk_802428E4);
Script N(script_ExitWalk_80242940);
Script N(script_8024299C);
Script N(main);
s32 pad_002D28[2];
Script N(script_80242D30);
Script N(script_80242F00);
Script N(script_80242FC8);
Script N(script_80243204);
Script N(script_8024334C);
Script N(script_802434DC);
Script N(script_80243588);
s32 pad_0035D8[2];
Script N(script_SearchBush_802435E0);
Script N(script_ShakeTree_80243940);
Script N(script_80243F44);
Script N(script_8024410C);
s32 N(treeDropList_Bush1)[8];
s32 N(searchBushEvent_Bush1)[4];
s32 N(treeDropList_Bush2)[8];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
s32 N(searchBushEvent_Bush5)[4];
s32 N(searchBushEvent_Bush6)[4];
s32 N(searchBushEvent_Bush7)[4];
s32 N(searchBushEvent_Bush8)[4];
s32 N(searchBushEvent_Bush9)[4];
s32 N(searchBushEvent_Bush10)[4];
s32 N(searchBushEvent_Bush11)[4];
s32 N(searchBushEvent_Bush12)[4];
s32 N(searchBushEvent_Bush13)[4];
s32 N(searchBushEvent_Bush14)[4];
Script N(script_80244464);
s32 pad_0046F8[2];
Script N(script_NpcAI_80244700);
Script N(script_80244AB0);
Script N(script_80244C58);
Script N(script_80244CA4);
Script N(script_Interact_80244CD4);
Script N(script_NpcAI_80244E0C);
Script N(script_80244F88);
Script N(script_80244FAC);
s32 N(extraAnimationList_80245078)[5];
Script N(script_NpcAI_802450BC);
s32 N(extraAnimationList_80245124)[10];
s32 N(extraAnimationList_8024514C)[2];
Script N(script_80245154);
Script N(script_NpcAI_80245240);
Script N(script_NpcAI_802452DC);
Script N(script_Idle_802453B0);
Script N(script_Init_802454F0);
Script N(script_8024556C);
Script N(script_80245670);
Script N(script_80245754);
Script N(script_802457F8);
Script N(script_Idle_802458C8);
Script N(script_Init_80245EC8);
StaticNpc N(npcGroup_80245F84)[1];
s32 N(extraAnimationList_80246174)[5];
StaticNpc N(npcGroup_80246188)[1];
StaticNpc N(npcGroup_80246378)[2];
StaticNpc N(npcGroup_80246758)[1];
StaticNpc N(npcGroup_80246948)[1];
StaticNpc N(npcGroup_80246B38)[1];
NpcGroupList N(npcGroupList_80246D28);
s32 pad_006D7C[1];
Script N(script_SearchBush_80246D80);
Script N(script_ShakeTree_802470E0);
Script N(script_Tree1_Callback);
s32 N(treeDropList_Tree2)[8];
Script N(script_8024787C);
s32 pad_007964[3];
Script N(script_MakeEntities);
const char D_80247A00_B52470[8]; // "jan_03"
const char D_80247A08_B52478[8]; // "jan_08"
const char D_80247A10_B52480[8]; // "jan_04"
const char D_80247A18_B52488[8]; // "jan_06"
s32 pad_007A28[2];
s32 pad_007A74[1];
s32 pad_007DB8[2];

// text: func_GetTattle_B4AA70

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_B4AAB0

// text: func_80240164_B4ABD4

s32 pad_00034C[] = {
    0x00000000,
};

// text: func_80240350_B4ADC0

s32 pad_00049C[] = {
    0x00000000,
};

// text: func_802404A0_B4AF10

// text: func_80240510_B4AF80

// text: func_802406DC_B4B14C

// text: func_80240738_B4B1A8

s32 pad_0007EC[] = {
    0x00000000,
};

// text: func_802407F0_B4B260

// text: func_802408A4_B4B314

// text: func_80240AD4_B4B544

// text: N(UnkNpcAIFunc1)

// text: func_80240ECC_B4B93C

// text: func_80241070_B4BAE0

// text: func_80241150_B4BBC0

// text: N(UnkDurationCheck)

// text: func_80241494_B4BF04

// text: N(UnkNpcAIFunc4)

// text: func_80241708_B4C178

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80241AD4_B4C544

// text: func_80241C88_B4C6F8

// text: func_80241EE8_B4C958

// text: func_8024219C_B4CC0C

// text: func_80242450_B4CEC0

// text: func_802424C0_B4CF30

// text: func_8024268C_B4D0FC

s32 pad_0026CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 330.0f, 0.0f, 330.0f, 315.0f },
    { -500.0f, -20.0f, 0.0f, 90.0f },
    { 480.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -450.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x80240000,
};

Script N(script_80242750) = SCRIPT({
    SetMusicTrack(0, 36, 0, 8);
    ClearAmbientSounds(250);
});

s32 pad_00278C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80242790) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240040_B4AAB0();
                    return;
                }
            }
        }
    }
    func_80240164_B4ABD4();
});

Script N(script_ExitWalk_8024282C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80247A00_B52470, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242888) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80247A08_B52478, 1);
    sleep 100;
});

Script N(script_ExitWalk_802428E4) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80247A10_B52480, 0);
    sleep 100;
});

Script N(script_ExitWalk_80242940) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80247A18_B52488, 0);
    sleep 100;
});

Script N(script_8024299C) = SCRIPT({
    bind N(script_ExitWalk_80242888) to 0x80000 3;
    bind N(script_ExitWalk_8024282C) to 0x80000 13;
    bind N(script_ExitWalk_802428E4) to 0x80000 9;
    bind N(script_ExitWalk_80242940) to 0x80000 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80246D28));
    await N(script_MakeEntities);
    spawn N(script_80243588);
    spawn N(script_8024787C);
    spawn N(script_80244464);
    ModifyColliderFlags(3, 42, 4);
    ModifyColliderFlags(3, 44, 4);
    ModifyColliderFlags(0, 42, 0x80000);
    ModifyColliderFlags(0, 44, 0x80000);
    ModifyColliderFlags(3, 80, 1);
    ModifyColliderFlags(3, 0, 1);
    spawn N(script_8024787C);
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
    ModifyColliderFlags(0, 10, 0x7FFFFE00);
    ModifyColliderFlags(0, 14, 0x7FFFFE00);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    SI_VAR(0) = N(script_8024299C);
    spawn EnterWalk;
    spawn N(script_80242750);
    0x802C971C(118);
    EnableTexPanning(117, 1);
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
        spawn N(script_UpdateTexturePan_80242790);
    }
});

s32 pad_002D28[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242D30) = SCRIPT({
    if (SI_SAVE_FLAG(1235) == 0) {
        ModifyColliderFlags(0, 78, 0x7FFFFE00);
        EnableModel(110, 0);
        EnableModel(113, 0);
        TranslateGroup(111, 0, 0xFFFFFF10, 0);
        TranslateGroup(114, 0, 0xFFFFFF10, 0);
    } else {
        ModifyColliderFlags(0, 76, 0x7FFFFE00);
        ModifyColliderFlags(0, 77, 0x7FFFFE00);
        ModifyColliderFlags(1, 78, 0x7FFFFE00);
        EnableModel(110, 1);
        EnableModel(113, 1);
        TranslateGroup(111, 0, 10, 0);
        TranslateGroup(114, 0, 10, 0);
        RotateGroup(111, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(114, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(111, 90, 0, 1, 0);
        RotateGroup(114, 0xFFFFFFA6, 0, 1, 0);
    }
});

Script N(script_80242F00) = SCRIPT({
    PlaySoundAtCollider(76, 357, 0);
    MakeLerp(0xFFFFFF10, 0xFFFFFEFD, 5, 6);
    loop {
        UpdateLerp();
        TranslateGroup(111, 0, SI_VAR(0), 0);
        TranslateGroup(114, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80242FC8) = SCRIPT({
    spawn {
        sleep 17;
        SetPlayerAnimation(0x1002A);
        func_80240350_B4ADC0(110, SI_MAP_FLAG(11));
    }
    ModifyColliderFlags(0, 76, 0x7FFFFE00);
    MakeLerp(0xFFFFFEFD, 60, 30, 4);
    loop {
        UpdateLerp();
        TranslateGroup(111, 0, SI_VAR(0), 0);
        TranslateGroup(114, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 1;
    MakeLerp(60, 0, 30, 2);
    loop {
        UpdateLerp();
        TranslateGroup(111, 0, SI_VAR(0), 0);
        TranslateGroup(114, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetPlayerAnimation(0x10002);
    PlaySoundAtCollider(76, 8349, 0);
    PlayEffect(6, 4, 0xFFFFFF47, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    ShakeCam(0, 2, 3, 1);
});

Script N(script_80243204) = SCRIPT({
    spawn {
        sleep 50;
        SI_MAP_FLAG(11) = 1;
    }
    MakeLerp(0, 0xFFFFFFA6, 60, 2);
    loop {
        UpdateLerp();
        TranslateGroup(111, 0, 0, 0);
        TranslateGroup(114, 0, 0, 0);
        RotateGroup(111, SI_VAR(0), 0, 0, 1);
        RotateGroup(114, SI_VAR(0), 0, 0, 1);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        ShakeCam(0, 2, 3, 1);
    }
});

Script N(script_8024334C) = SCRIPT({
    PlaySoundAtCollider(76, 8350, 0);
    EnableModel(110, 1);
    EnableModel(113, 1);
    MakeLerp(0, 90, 30, 8);
    loop {
        UpdateLerp();
        SI_VAR(2) = SI_VAR(0);
        SI_VAR(2) /= 9;
        TranslateGroup(111, 0, SI_VAR(2), 0);
        TranslateGroup(114, 0, SI_VAR(2), 0);
        RotateGroup(111, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(114, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(111, SI_VAR(0), 0, 1, 0);
        RotateGroup(114, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802434DC) = SCRIPT({
    SI_SAVE_FLAG(1235) = 1;
    DisablePlayerInput(1);
    await N(script_80242F00);
    sleep 1;
    await N(script_80242FC8);
    sleep 1;
    await N(script_80243204);
    sleep 1;
    await N(script_8024334C);
    sleep 1;
    DisablePlayerInput(0);
    spawn N(script_80242D30);
});

Script N(script_80243588) = SCRIPT({
    if (SI_SAVE_FLAG(1235) == 0) {
        bind N(script_802434DC) to TriggerFlag_WALL_HAMMER 76;
    }
    spawn N(script_80242D30);
});

s32 pad_0035D8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802435E0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240510_B4AF80, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240510_B4AF80, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80243940) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240510_B4AF80, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240510_B4AF80, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240510_B4AF80, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240510_B4AF80, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_80243F44) = SCRIPT({
    PlaySoundAtCollider(61, 8351, 0);
    SI_VAR(0) = SI_MAP_VAR(0);
    SI_VAR(1) = SI_MAP_VAR(1);
    SI_VAR(6) = 0;
    SI_VAR(7) = 0;
    loop 60 {
        SI_VAR(2) =f SI_MAP_VAR(0);
        SI_VAR(3) =f SI_MAP_VAR(1);
        SI_VAR(2) -=f SI_VAR(0);
        SI_VAR(3) -=f SI_VAR(1);
        SI_VAR(4) =f SI_VAR(2);
        SI_VAR(5) =f SI_VAR(3);
        SI_VAR(4) *= 0.09375;
        SI_VAR(5) *= 0.09375;
        SI_VAR(6) *= 0.80078125;
        SI_VAR(7) *= 0.80078125;
        SI_VAR(6) +=f SI_VAR(4);
        SI_VAR(7) +=f SI_VAR(5);
        SI_VAR(0) +=f SI_VAR(6);
        SI_VAR(1) +=f SI_VAR(7);
        TranslateModel(101, SI_MAP_VAR(0), 0, 0);
        TranslateModel(103, SI_MAP_VAR(1), 0, 0);
        func_80240738_B4B1A8(101, SI_VAR(6));
        func_80240738_B4B1A8(103, SI_VAR(7));
        sleep 1;
    }
});

Script N(script_8024410C) = SCRIPT({
    ModifyColliderFlags(0, 61, 0x7FFFFE00);
    spawn N(script_80243F44);
    DisablePlayerInput(1);
    MakeLerp(0, 45, 30, 5);
0:
    UpdateLerp();
    SI_MAP_VAR(1) =f SI_VAR(0);
    SI_MAP_VAR(0) =f SI_MAP_VAR(1);
    SI_MAP_VAR(0) *= -1;
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(0);
});

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x69 },
};

s32 N(treeDropList_Bush1)[] = {
    0x00000001, 0x00000157, 0x000000A8, 0x00000014, 0x00000177, 0x00000007, 0xF8406070, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { 2.35e-43f, 2.8e-44f, 5.25e-43f } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), N(treeDropList_Bush1), N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x46 },
};

s32 N(treeDropList_Bush2)[] = {
    0x00000001, 0x00000157, 0xFFFFFE6F, 0x00000014, 0x000000B0, 0x00000006, 0xF8406057, 0xFAA2B58A,
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 2.47e-43f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), N(treeDropList_Bush2), N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x48 },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, 2.87e-43f } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4A },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 3.48e-43f } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4C },
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), 0x00000000, N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4E },
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), 0x00000000, N(treeEffectVectors_Bush6), 0x00000000,
};

ModelIdList N(treeModelList_Bush7_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x50 },
};

TreeEffectVectorList N(treeEffectVectors_Bush7) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush7)[] = {
    N(treeModelList_Bush7_Bush), 0x00000000, N(treeEffectVectors_Bush7), 0x00000000,
};

ModelIdList N(treeModelList_Bush8_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x52 },
};

TreeEffectVectorList N(treeEffectVectors_Bush8) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush8)[] = {
    N(treeModelList_Bush8_Bush), 0x00000000, N(treeEffectVectors_Bush8), 0x00000000,
};

ModelIdList N(treeModelList_Bush9_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x54 },
};

TreeEffectVectorList N(treeEffectVectors_Bush9) = {
    .count = 0x1,
    .vectors = { { 1.32e-43f, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush9)[] = {
    N(treeModelList_Bush9_Bush), 0x00000000, N(treeEffectVectors_Bush9), 0x00000000,
};

ModelIdList N(treeModelList_Bush10_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x56 },
};

TreeEffectVectorList N(treeEffectVectors_Bush10) = {
    .count = 0x1,
    .vectors = { { 1.3e-44f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush10)[] = {
    N(treeModelList_Bush10_Bush), 0x00000000, N(treeEffectVectors_Bush10), 0x00000000,
};

ModelIdList N(treeModelList_Bush11_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x58 },
};

TreeEffectVectorList N(treeEffectVectors_Bush11) = {
    .count = 0x1,
    .vectors = { { 7.4e-44f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush11)[] = {
    N(treeModelList_Bush11_Bush), 0x00000000, N(treeEffectVectors_Bush11), 0x00000000,
};

ModelIdList N(treeModelList_Bush12_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5A },
};

TreeEffectVectorList N(treeEffectVectors_Bush12) = {
    .count = 0x1,
    .vectors = { { 4.75e-43f, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush12)[] = {
    N(treeModelList_Bush12_Bush), 0x00000000, N(treeEffectVectors_Bush12), 0x00000000,
};

ModelIdList N(treeModelList_Bush13_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5C },
};

TreeEffectVectorList N(treeEffectVectors_Bush13) = {
    .count = 0x1,
    .vectors = { { 2.02e-43f, 3.1e-44f, 6.87e-43f } },
};

s32 N(searchBushEvent_Bush13)[] = {
    N(treeModelList_Bush13_Bush), 0x00000000, N(treeEffectVectors_Bush13), 0x00000000,
};

ModelIdList N(treeModelList_Bush14_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5E },
};

TreeEffectVectorList N(treeEffectVectors_Bush14) = {
    .count = 0x1,
    .vectors = { { 2.93e-43f, 2.8e-44f, 6.6e-43f } },
};

s32 N(searchBushEvent_Bush14)[] = {
    N(treeModelList_Bush14_Bush), 0x00000000, N(treeEffectVectors_Bush14), 0x00000000,
};

Script N(script_80244464) = SCRIPT({
    bind N(script_8024410C) to TriggerFlag_WALL_INTERACT 61;
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 60;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 62;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 63;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 64;
    SI_VAR(0) = N(searchBushEvent_Bush5);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 65;
    SI_VAR(0) = N(searchBushEvent_Bush6);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 66;
    SI_VAR(0) = N(searchBushEvent_Bush7);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 67;
    SI_VAR(0) = N(searchBushEvent_Bush8);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 68;
    SI_VAR(0) = N(searchBushEvent_Bush9);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 69;
    SI_VAR(0) = N(searchBushEvent_Bush10);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 70;
    SI_VAR(0) = N(searchBushEvent_Bush11);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 71;
    SI_VAR(0) = N(searchBushEvent_Bush12);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 72;
    SI_VAR(0) = N(searchBushEvent_Bush13);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 73;
    SI_VAR(0) = N(searchBushEvent_Bush14);
    bind N(script_SearchBush_802435E0) to TriggerFlag_WALL_INTERACT 74;
});

s32 pad_0046F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_NpcAI_80244700) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x450000);
    SetSelfVar(0, 0);
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    PlaySoundAtNpc(-1, 339, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetSelfVar(10, SI_VAR(0));
    SetSelfVar(11, SI_VAR(1));
    SetSelfVar(12, SI_VAR(2));
    SI_VAR(0) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) -= 3;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) -= 3;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    spawn {
        sleep 10;
        SetNpcAnimation(-1, 0x450003);
    }
    spawn {
        sleep 6;
        InterpPlayerYaw(90, 0);
    }
    SetNpcFlagBits(-1, 256, 1);
    EnableNpcShadow(-1, 1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 25;
    SI_VAR(2) -= 5;
    NpcJump1(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    sleep 4;
    SetNpcAnimation(-1, 0x450007);
    sleep 2;
    SetPlayerAnimation(0x1002B);
    0x802D5830(0);
    DisablePlayerInput(0);
    StartBattle();
    SetSelfVar(0, 1);
});

Script N(script_80244AB0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            SetNpcAnimation(-1, 0x450005);
            GetSelfVar(10, SI_VAR(0));
            GetSelfVar(11, SI_VAR(1));
            GetSelfVar(12, SI_VAR(2));
            NpcJump1(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
            EnableNpcShadow(-1, 0);
            SetNpcAnimation(-1, 0x450000);
            SetNpcFlagBits(-1, 256, 0);
            BindNpcAI(-1, N(script_NpcAI_80244700));
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_80244C00) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = 0x80244A8C,
    .ai = &N(script_NpcAI_80244700),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244AB0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80244C2C) = {
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

Script N(script_80244C58) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
});

Script N(script_80244CA4) = SCRIPT({
    sleep 45;
    BindNpcInteract(-1, N(script_Interact_80244CD4));
});

Script N(script_Interact_80244CD4) = SCRIPT({
    GetSelfVar(1, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetSelfVar(1, 1);
        PlaySoundAtNpc(-1, 8345, 0);
        SetNpcAnimation(-1, 0x430000);
        sleep 1;
        func_802407F0_B4B260();
        SetNpcAnimation(-1, 0x430001);
        spawn {
            BindNpcInteract(-1, 0);
            spawn N(script_80244CA4);
            sleep 45;
            SetSelfVar(1, 0);
            SetNpcAnimation(-1, 0x430000);
        }
    }
});

NpcSettings N(npcSettings_80244DE0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = &N(script_80244C58),
    .onInteract = &N(script_Interact_80244CD4),
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244E0C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x440001);
    SetSelfVar(0, 0);
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    NpcFacePlayer(-1, 0);
    SetNpcAnimation(-1, 0x440008);
    sleep 15;
    PlaySoundAtNpc(-1, 8346, 0);
    sleep 10;
    SetPlayerAnimation(0x1002B);
    sleep 5;
    SetNpcAnimation(-1, 0x440002);
    DisablePlayerInput(0);
    0x802D5830(0);
    StartBattle();
});

Script N(script_80244F88) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_80244FAC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            BindNpcAI(-1, N(script_NpcAI_80244E0C));
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_8024504C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = &N(script_80244F88),
    .ai = &N(script_NpcAI_80244E0C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244FAC),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80245078)[] = {
    0x00440000, 0x00440001, 0x00440002, 0x00440008, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_8024508C) = {
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

Script N(script_NpcAI_802450BC) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80241494_B4BF04(N(aISettings_8024508C), 2);
});

NpcSettings N(npcSettings_802450F8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802450BC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80245124)[] = {
    0x00420000, 0x00420003, 0x00420005, 0x00420006, 0x00420007, 0x0042000F, 0x00420010, 0x0042001A,
    0x0042001B, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024514C)[] = {
    0x00420000, 0xFFFFFFFF,
};

Script N(script_80245154) = SCRIPT({
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

NpcAISettings N(aISettings_80245210) = {
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

Script N(script_NpcAI_80245240) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 12);
    SetSelfVar(3, 9);
    func_8024219C_B4CC0C(N(aISettings_80245210));
});

NpcSettings N(npcSettings_802452B0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80245240),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_NpcAI_802452DC) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 22);
    SetSelfVar(2, 40);
    SetSelfVar(3, 28);
    SetSelfVar(4, 1);
    SetSelfVar(15, 0);
    func_80241C88_B4C6F8();
});

NpcSettings N(npcSettings_80245384) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x8,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802452DC),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80245154),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0x8,
};

Script N(script_Idle_802453B0) = SCRIPT({
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
    SetNpcPos(-1, 125, 100, 0xFFFFFE78);
    0x802D617C(817, 110);
    sleep 20;
    SetNpcFlagBits(-1, 512, 0);
    SetNpcFlagBits(-1, 8, 1);
    BindNpcAI(-1, N(script_NpcAI_802450BC));
});

Script N(script_Init_802454F0) = SCRIPT({
    SetSelfVar(7, 0);
    SetSelfEnemyFlagBits(0x200000, 1);
    SetNpcFlagBits(-1, 512, 0);
    SetNpcFlagBits(-1, 8, 1);
    BindNpcIdle(-1, N(script_Idle_802453B0));
});

Script N(script_8024556C) = SCRIPT({
1:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            AwaitPlayerLeave(0xFFFFFECC, 0xFFFFFEF2, 70);
            SetSelfVar(0, 1);
        }
        == 1 {
            AwaitPlayerApproach(0xFFFFFECC, 0xFFFFFEF2, 50);
            DisablePlayerInput(1);
            ShowMessageAtScreenPos(0x1000B8, 160, 40);
            DisablePlayerInput(0);
            SetSelfVar(0, 0);
        }
    }
    sleep 1;
    goto 1;
});

Script N(script_80245670) = SCRIPT({
    DisablePlayerInput(1);
    SetNpcVar(3, 0, 9);
    spawn {
        PlaySoundAtNpc(3, 769, 0);
        SetNpcJumpscale(3, 1.0);
        NpcJump0(3, 0xFFFFFECC, 0, 0xFFFFFF08, 30);
    }
    EnableNpcShadow(3, 1);
    sleep 40;
    SetNpcVar(3, 0, 10);
    DisablePlayerInput(0);
    unbind;
});

Script N(script_80245754) = SCRIPT({
    loop {
        PlaySoundAtNpc(3, 815, 0);
        sleep 24;
        PlaySoundAtNpc(3, 820, 0);
        sleep 21;
        GetNpcVar(3, 0, SI_VAR(0));
        if (SI_VAR(0) >= 9) {
            break;
        }
    }
});

Script N(script_802457F8) = SCRIPT({
    SI_VAR(9) = spawn N(script_80245754);
    loop {
        sleep 1;
        GetNpcVar(3, 0, SI_VAR(0));
        if (SI_VAR(0) >= 9) {
            break;
        }
    }
    kill SI_VAR(9);
    SetNpcAnimation(3, 0x970206);
    loop 3 {
        PlaySoundAtNpc(3, 496, 0);
        sleep 13;
    }
});

Script N(script_Idle_802458C8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        DisablePlayerInput(1);
        ShowMessageAtScreenPos(0x1000B8, 160, 40);
        DisablePlayerInput(0);
    }
    bind N(script_80245670) to TriggerFlag_WALL_HAMMER 46;
    SI_VAR(9) = spawn N(script_8024556C);
    loop {
        sleep 1;
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 10) {
            break;
        }
    }
    kill SI_VAR(9);
    DisablePlayerInput(1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFFEF2) {
        SI_VAR(0) = 0xFFFFFEBC;
        SI_VAR(1) = 0xFFFFFE9D;
        SI_VAR(2) = 27;
    } else {
        SI_VAR(0) = 0xFFFFFF28;
        SI_VAR(1) = 0xFFFFFF47;
        SI_VAR(2) = 0xFFFFFFE5;
    }
    spawn {
        SetNpcFlagBits(-1, 256, 1);
        SetNpcAnimation(-1, 0x970202);
        NpcMoveTo(-1, 0xFFFFFEF2, 0xFFFFFF08, 30);
        NpcFacePlayer(-1, 0);
    }
    spawn {
        DisablePartnerAI(0);
        SetNpcFlagBits(0xFFFFFFFC, 0x8140, 1);
        NpcMoveTo(0xFFFFFFFC, SI_VAR(1), 0xFFFFFF06, 30);
        NpcFaceNpc(0xFFFFFFFC, 3, 0);
        SetNpcFlagBits(0xFFFFFFFC, 0x8140, 0);
        EnablePartnerAI();
    }
    spawn {
        PlayerMoveTo(SI_VAR(0), 0xFFFFFF08, 30);
        PlayerFaceNpc(-1, 0);
    }
    SI_VAR(0) += SI_VAR(2);
    UseSettingsFrom(0, SI_VAR(0), 0, 0xFFFFFF08);
    SetPanTarget(0, SI_VAR(0), 0, 0xFFFFFF08);
    SetCamDistance(0, 350.0);
    SetCamPitch(0, 17.0, -7.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 15;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) == 7) {
        SpeakToPlayer(-1, 0x97020B, 0x97020A, 0, 0x1000B9);
    } else {
        SpeakToPlayer(-1, 0x97020B, 0x97020A, 0, 0x1000BA);
    }
    EndSpeech(-1, 0x970204, 0x970201, 0);
    spawn {
        SetNpcAnimation(-1, 0x970203);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, 0xFFFFFEC5, 0xFFFFFF79, 0);
        SetNpcJumpscale(-1, 0.5);
        NpcJump0(-1, 0xFFFFFEBB, 0, 215, 25);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
    SI_SAVE_FLAG(1230) = 1;
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
        spawn N(script_80242750);
        SetPlayerAnimation(0x10002);
    } else {
        sleep 30;
    }
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Init_80245EC8) = SCRIPT({
    if (SI_SAVE_VAR(0) == 15) {
        if (SI_SAVE_FLAG(1230) == 0) {
            SetNpcPos(-1, 0xFFFFFECC, 110, 0xFFFFFED4);
            EnableNpcShadow(-1, 0);
            SetNpcAnimation(-1, 0x970207);
            BindNpcIdle(-1, N(script_Idle_802458C8));
            spawn N(script_802457F8);
            return;
        }
    }
    RemoveNpc(-1);
});

StaticNpc N(npcGroup_80245F84)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244C2C),
        .pos = { -320.0, 0.0, 80.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_80245EC8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00970201, 0x00970202, 0x00970203, 0x00970203, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201,
        },
        .tattle = 0x1A00C5,
    },
};

s32 N(extraAnimationList_80246174)[] = {
    0x002B0301, 0x002B0302, 0x002B0303, 0x002B0308, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80246188)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802450F8),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00400400,
        .init = N(script_Init_802454F0),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .movement = { 0x0000003F, 0x00000000, 0xFFFFFE92, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000003F, 0x00000000, 0xFFFFFE92, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
        .extraAnimations = N(extraAnimationList_80246174),
    },
};

StaticNpc N(npcGroup_80246378)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802452B0),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SLEEPY_SHEEP, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000064 },
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_80245124),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80245384),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_8024514C),
    },
};

StaticNpc N(npcGroup_80246758)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80244DE0),
        .pos = { 430.0, 0.0, 205.0 },
        .flags = 0x00408D01,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_80246948)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_8024504C),
        .pos = { 375.0, 0.0, 260.0 },
        .flags = 0x00408D01,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_TASTY_TONIC, 5 }, { ItemId_SUPER_SODA, 5 } },
        .animations = {
            0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x0044000E, 0x0044000E, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001,
        },
        .extraAnimations = N(extraAnimationList_80245078),
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_80246B38)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80244C00),
        .pos = { 400.0, 0.0, -75.0 },
        .flags = 0x00408D01,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_TASTY_TONIC, 5 }, { ItemId_SUPER_SODA, 5 } },
        .animations = {
            0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450007, 0x00450007, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002,
        },
        .tattle = 0x1A00D4,
    },
};

NpcGroupList N(npcGroupList_80246D28) = {
    NPC_GROUP(N(npcGroup_80246188), 0x140A0002),
    NPC_GROUP(N(npcGroup_80246378), 0x14000002),
    NPC_GROUP(N(npcGroup_80246758), 0x00000000),
    NPC_GROUP(N(npcGroup_80246948), 0x14080002),
    NPC_GROUP(N(npcGroup_80246B38), 0x140E0002),
    NPC_GROUP(N(npcGroup_80245F84), 0x00000000),
    {},
};

s32 pad_006D7C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80246D80) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802424C0_B4CF30, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802424C0_B4CF30, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802470E0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802424C0_B4CF30, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802424C0_B4CF30, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802424C0_B4CF30, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802424C0_B4CF30, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    func_8024268C_B4D0FC();
    if (SI_VAR(0) == 1) {
        SetNpcVar(0, 7, 1);
    }
});

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x34, 0x35, 0x36, 0x37, 0x38 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x33 },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { 1.22e-43f, 1.6e-43f, nanf }, { 2.41e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = &N(script_Tree1_Callback),
};

Vec4f N(triggerCoord_8024778C) =  { 127.0f, 0.0f, -420.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x2D, 0x2E, 0x2F, 0x30, 0x31 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2C },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000157, 0x00000190, 0x00000064, 0xFFFFFF6F, 0x0000000F, 0xF8406065, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { 5.63e-43f, 1.6e-43f, nanf }, { 6.82e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_8024780C) =  { 442.0f, 0.0f, -165.0f, 0.0f };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x26, 0x27, 0x28, 0x29, 0x2A },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x25 },
};

TreeEffectVectorList N(treeEffectVectors_Tree3) = {
    .count = 0x2,
    .vectors = { { nanf, 1.57e-43f, nanf }, { nanf, 1.47e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree3),
    .callback = NULL,
};

Vec4f N(triggerCoord_8024786C) =  { -270.0f, 0.0f, -310.0f, 0.0f };

Script N(script_8024787C) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802470E0) to TriggerFlag_WALL_HAMMER 57;
    bind N(script_ShakeTree_802470E0) to TriggerFlag_BOMB N(triggerCoord_8024778C);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_802470E0) to TriggerFlag_WALL_HAMMER 58;
    bind N(script_ShakeTree_802470E0) to TriggerFlag_BOMB N(triggerCoord_8024780C);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_802470E0) to TriggerFlag_WALL_HAMMER 46;
    bind N(script_ShakeTree_802470E0) to TriggerFlag_BOMB N(triggerCoord_8024786C);
});

s32 pad_007964[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA5AC, 0, 60, 0, 0, 279, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1238));
    MakeEntity(0x802BC788, 205, 0, 220, 0, 0x80000000);
    MakeEntity(0x802BCBFC, 0xFFFFFE7E, 0, 0xFFFFFF2A, 160, 0x80000000);
});

// rodata: D_80247A00_B52470

// rodata: D_80247A08_B52478

// rodata: D_80247A10_B52480

// rodata: D_80247A18_B52488

// rodata: D_80247A20_B52490

s32 pad_007A28[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80247A30_B524A0

// rodata: jtbl_80247A38_B524A8

s32 pad_007A74[] = {
    0x00000000,
};

// rodata: jtbl_80247A78_B524E8

// rodata: D_80247A90_B52500

// rodata: jtbl_80247A98_B52508

// rodata: jtbl_80247C28_B52698

s32 pad_007DB8[] = {
    0x00000000, 0x00000000,
};
