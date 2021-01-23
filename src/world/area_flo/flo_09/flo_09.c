#include "flo_09.h"

s32 pad_000034[3];
s32 pad_0000D4[3];
s32 pad_00031C[1];
s32 pad_001818[2];
Script N(script_80241880);
Script N(script_802418F0);
Script N(script_ExitWalk_80241B9C);
Script N(script_ExitWalk_80241BF8);
Script N(script_80241C54);
Script N(main);
s32 pad_002004[3];
Script N(script_80242010);
Script N(script_802422BC);
Script N(script_802425DC);
s32 pad_002874[3];
Script N(script_SearchBush_80242880);
Script N(script_ShakeTree_80242BE0);
Script N(script_802431E4);
Script N(script_Tree1_Callback);
Script N(script_Tree2_Callback);
Script N(script_Tree3_Callback);
Script N(script_802434A8);
Script N(script_NpcAI_802435E0);
f32 N(floatTable_8024362C)[6];
Script N(script_NpcAI_80243674);
Script N(script_NpcAI_8024373C);
Script N(script_Defeat_802438C8);
Script N(script_Init_80243954);
StaticNpc N(npcGroup_8024398C)[1];
StaticNpc N(npcGroup_80243B7C)[1];
StaticNpc N(npcGroup_80243D6C)[1];
StaticNpc N(npcGroup_80243F5C)[1];
NpcGroupList N(npcGroupList_8024414C);
s32 pad_004188[2];
const char D_80244190_CB9190[8]; // "flo_00"
const char D_80244198_CB9198[8]; // "flo_03"
s32 pad_0041F4[3];

// text: func_80240000_CB5000

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CB5040

s32 pad_0000D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400E0_CB50E0

// text: func_80240150_CB5150

s32 pad_00031C[] = {
    0x00000000,
};

// text: func_80240320_CB5320

// text: func_802404D0_CB54D0

// text: N(UnkNpcAIFunc1)

// text: func_80240BB8_CB5BB8

// text: N(UnkNpcAIFunc2)

// text: func_80240F74_CB5F74

// text: func_80240FE0_CB5FE0

// text: N(UnkNpcAIFunc3)

// text: func_80241178_CB6178

// text: func_80241508_CB6508

// text: func_8024162C_CB662C

s32 pad_001818[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -520.0f, 0.0f, 0.0f, 90.0f },
    { 520.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190118,
};

Script N(script_80241880) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_802418F0) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_ExitWalk_80241B9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244190_CB9190, 5);
    sleep 100;
});

Script N(script_ExitWalk_80241BF8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244198_CB9198, 0);
    sleep 100;
});

Script N(script_80241C54) = SCRIPT({
    bind N(script_ExitWalk_80241B9C) to 0x80000 0;
    bind N(script_ExitWalk_80241BF8) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_8024414C));
    spawn N(script_802425DC);
    spawn N(script_802434A8);
    ModifyColliderFlags(3, 9, 6);
    SI_VAR(0) = 0xFFFFFE01;
    SI_VAR(1) = 0xFFFFFFFC;
    SI_VAR(2) = 0xFFFFFEC1;
    SI_VAR(3) = 10;
    SI_VAR(4) = 0;
    spawn N(script_802418F0);
    SI_VAR(0) = 0xFFFFFED2;
    SI_VAR(1) = 77;
    SI_VAR(2) = 0xFFFFFFE0;
    SI_VAR(3) = 116;
    SI_VAR(4) = 0;
    spawn N(script_802418F0);
    SI_VAR(0) = 51;
    SI_VAR(1) = 18;
    SI_VAR(2) = 141;
    SI_VAR(3) = 127;
    SI_VAR(4) = 0;
    spawn N(script_802418F0);
    SI_VAR(0) = 234;
    SI_VAR(1) = 38;
    SI_VAR(2) = 502;
    SI_VAR(3) = 98;
    SI_VAR(4) = 0;
    spawn N(script_802418F0);
    SI_VAR(0) = 0xFFFFFDF3;
    SI_VAR(1) = 0xFFFFFF5D;
    SI_VAR(2) = 0xFFFFFE70;
    SI_VAR(3) = 0xFFFFFFB0;
    SI_VAR(4) = 60;
    spawn N(script_802418F0);
    SI_VAR(0) = 0xFFFFFEA6;
    SI_VAR(1) = 0xFFFFFF6C;
    SI_VAR(2) = 517;
    SI_VAR(3) = 0xFFFFFFA5;
    SI_VAR(4) = 60;
    spawn N(script_802418F0);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80241C54);
    spawn EnterWalk;
    await N(script_80241880);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CB5000();
    }
});

s32 pad_002004[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242010) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_802422BC) = SCRIPT({
    SI_VAR(9) = SI_VAR(6);
    SI_VAR(8) = SI_VAR(5);
    SI_VAR(7) = SI_VAR(4);
    SI_VAR(6) = SI_VAR(3);
    SI_VAR(5) = SI_VAR(2);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(3) = SI_VAR(0);
    EnableModel(SI_VAR(6), 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240040_CB5040();
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    spawn {
        sleep 5;
        EnableModel(SI_VAR(6), 1);
    }
    if (SI_VAR(10) != 0) {
        spawn {
            sleep 5;
            SI_VAR(0) = SI_VAR(3);
            SI_VAR(1) = SI_VAR(4);
            SI_VAR(2) = SI_VAR(5);
            SI_VAR(1) += 10;
            SI_VAR(2) += 8;
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 15;
            SI_VAR(1) -= 10;
            MakeItemEntity(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2), 14, 0);
        }
    }
    spawn {
        sleep 10;
        PlaySoundAt(248, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    }
    MakeLerp(0, 180, 20, 2);
1:
    UpdateLerp();
    RotateModel(SI_VAR(8), SI_VAR(0), 1, 0, 0);
    RotateModel(SI_VAR(9), SI_VAR(0), 1, 0, 0);
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
    EnableModel(SI_VAR(7), 0);
});

Script N(script_802425DC) = SCRIPT({
    GetModelCenter(69);
    SI_VAR(3) = 69;
    SI_VAR(4) = 70;
    SI_VAR(5) = 71;
    SI_VAR(6) = 72;
    SI_VAR(10) = 0;
    spawn N(script_802422BC);
    GetModelCenter(75);
    SI_VAR(3) = 75;
    SI_VAR(4) = 76;
    SI_VAR(5) = 77;
    SI_VAR(6) = 78;
    SI_VAR(10) = 174;
    spawn N(script_802422BC);
    GetModelCenter(83);
    SI_VAR(3) = 83;
    SI_VAR(4) = 84;
    SI_VAR(5) = 85;
    SI_VAR(6) = 86;
    SI_VAR(10) = 0;
    spawn N(script_802422BC);
    GetModelCenter(89);
    SI_VAR(3) = 89;
    SI_VAR(4) = 90;
    SI_VAR(5) = 91;
    SI_VAR(6) = 92;
    SI_VAR(10) = 0;
    spawn N(script_802422BC);
    GetModelCenter(97);
    SI_VAR(3) = 97;
    SI_VAR(4) = 98;
    SI_VAR(5) = 99;
    SI_VAR(6) = 100;
    SI_VAR(10) = 0;
    spawn N(script_802422BC);
    GetModelCenter(103);
    SI_VAR(3) = 103;
    SI_VAR(4) = 104;
    SI_VAR(5) = 105;
    SI_VAR(6) = 106;
    SI_VAR(10) = 0;
    spawn N(script_802422BC);
});

s32 pad_002874[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80242880) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240150_CB5150, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240150_CB5150, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80242BE0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240150_CB5150, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240150_CB5150, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240150_CB5150, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240150_CB5150, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_802431E4) = SCRIPT({
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 0) {
        GetModelCenter(SI_VAR(9));
        SI_VAR(2) += 35;
        SetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    }
});

Script N(script_Tree1_Callback) = SCRIPT({
    if (SI_SAVE_FLAG(1382) == 0) {
        if (SI_AREA_VAR(5) == 1) {
            MakeItemEntity(321, 0xFFFFFF06, 100, 0, 13, SI_SAVE_FLAG(1382));
        } else {
            SI_VAR(9) = 14;
            spawn N(script_802431E4);
        }
        SI_AREA_VAR(4) = 0;
        SI_AREA_VAR(5) = 0;
    }
});

Script N(script_Tree2_Callback) = SCRIPT({
    if (SI_SAVE_FLAG(1382) == 0) {
        SI_AREA_VAR(4) = 1;
        SI_AREA_VAR(5) = 0;
    }
});

Script N(script_Tree3_Callback) = SCRIPT({
    if (SI_SAVE_FLAG(1382) == 0) {
        if (SI_AREA_VAR(4) == 1) {
            if (SI_AREA_VAR(5) == 0) {
                SI_AREA_VAR(5) = 1;
                return;
            }
        }
        SI_VAR(9) = 22;
        spawn N(script_802431E4);
        SI_AREA_VAR(4) = 0;
        SI_AREA_VAR(5) = 0;
    }
});

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0xF, 0x10 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0xE },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = &N(script_Tree1_Callback),
};

Vec4f N(triggerCoord_80243428) =  { -200.0, 0.0, 1.0, 0.0 };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x13, 0x14 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x12 },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = &N(script_Tree2_Callback),
};

Vec4f N(triggerCoord_80243460) =  { 0.0, 0.0, 1.0, 0.0 };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x17, 0x18 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x16 },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = &N(script_Tree3_Callback),
};

Vec4f N(triggerCoord_80243498) =  { 200.0, 0.0, 1.0, 0.0 };

Script N(script_802434A8) = SCRIPT({
    SI_AREA_VAR(4) = 0;
    SI_AREA_VAR(5) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80242BE0) to TriggerFlag_WALL_HAMMER 15;
    bind N(script_ShakeTree_80242BE0) to TriggerFlag_BOMB N(triggerCoord_80243428);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80242BE0) to TriggerFlag_WALL_HAMMER 16;
    bind N(script_ShakeTree_80242BE0) to TriggerFlag_BOMB N(triggerCoord_80243460);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80242BE0) to TriggerFlag_WALL_HAMMER 17;
    bind N(script_ShakeTree_80242BE0) to TriggerFlag_BOMB N(triggerCoord_80243498);
});

NpcAISettings N(aISettings_802435B0) = {
    .moveSpeed = 1.0,
    .moveTime = 0x1F4,
    .waitTime = 0xA,
    .alertRadius = 50.0,
    .unk_10 = 30.0,
    .unk_14 = 0x3,
    .chaseSpeed = 3.5,
    .unk_1C = 0x28,
    .unk_20 = 0x3,
    .chaseRadius = 100.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802435E0) = SCRIPT({
    DoBasicAI(N(aISettings_802435B0));
});

NpcSettings N(npcSettings_80243600) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802435E0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

f32 N(floatTable_8024362C)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_80243644) = {
    .moveSpeed = 1.0,
    .moveTime = 0x1E,
    .waitTime = 0x5,
    .alertRadius = 80.0,
    .unk_10 = 30.0,
    .unk_14 = 0x2,
    .chaseSpeed = 4.5,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 90.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243674) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD8A);
    SetSelfVar(6, 50);
    SetSelfVar(1, 200);
    func_8024162C_CB662C(N(aISettings_80243644));
});

NpcSettings N(npcSettings_802436E4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243674),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80243710) = {
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

Script N(script_NpcAI_8024373C) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        match SI_VAR(0) {
            == 0 {
                GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(1) > 0) {
                    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetNpcJumpscale(-1, 0);
                    NpcJump0(-1, SI_VAR(0), 50, SI_VAR(2), 15);
                    SetSelfVar(0, 1);
                    BindNpcAI(-1, N(script_NpcAI_80243674));
                }
            }
            == 2 {
                DisablePlayerInput(1);
                sleep 25;
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
                SetNpcFlagBits(-1, 2, 0);
                SetSelfVar(0, 0);
                DisablePlayerInput(0);
            }
        }
        sleep 1;
    }
});

Script N(script_Defeat_802438C8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 2);
            BindNpcAI(-1, N(script_NpcAI_8024373C));
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80243954) = SCRIPT({
    BindNpcIdle(-1, N(script_NpcAI_8024373C));
    BindNpcDefeat(-1, N(script_Defeat_802438C8));
});

StaticNpc N(npcGroup_8024398C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243600),
        .pos = { -350.0, 0.0, 40.0 },
        .flags = 0x00002D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFEA2, 0x00000000, 0x00000028, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEA2, 0x00000000, 0x00000028, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_80243B7C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243600),
        .pos = { 260.0, 0.0, 75.0 },
        .flags = 0x00002D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0x00000104, 0x00000000, 0x0000004B, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000104, 0x00000000, 0x0000004B, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_80243D6C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802436E4),
        .pos = { -50.0, 55.0, 90.0 },
        .flags = 0x00002D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFFCE, 0x00000037, 0x0000005A, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFCE, 0x00000032, 0x0000005A, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004B0002, 0x004B0002, 0x004B0003, 0x004B0003, 0x004B0001, 0x004B0002, 0x004B0006, 0x004B0006, 0x004B0004, 0x004B0002, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001,
        },
    },
};

StaticNpc N(npcGroup_80243F5C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243710),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00002D04,
        .init = N(script_Init_80243954),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFFCE, 0x00000037, 0x0000005A, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFCE, 0x00000032, 0x0000005A, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004B0002, 0x004B0002, 0x004B0003, 0x004B0003, 0x004B0001, 0x004B0002, 0x004B0006, 0x004B0006, 0x004B0004, 0x004B0002, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001,
        },
    },
};

NpcGroupList N(npcGroupList_8024414C) = {
    NPC_GROUP(N(npcGroup_8024398C), 0x18100005),
    NPC_GROUP(N(npcGroup_80243B7C), 0x18150005),
    NPC_GROUP(N(npcGroup_80243D6C), 0x18170002),
    NPC_GROUP(N(npcGroup_80243F5C), 0x18170002),
    {},
};

s32 pad_004188[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244190_CB9190

// rodata: D_80244198_CB9198

// rodata: D_802441A0_CB91A0

// rodata: D_802441A8_CB91A8

// rodata: D_802441B0_CB91B0

// rodata: jtbl_802441B8_CB91B8

s32 pad_0041F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

