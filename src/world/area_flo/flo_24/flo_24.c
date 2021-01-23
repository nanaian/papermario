#include "flo_24.h"

s32 pad_000034[3];
s32 pad_00027C[1];
s32 pad_00058C[1];
Script N(script_80240600);
Script N(script_80240690);
Script N(script_ExitWalk_8024093C);
Script N(script_ExitWalk_80240998);
Script N(script_802409F4);
Script N(main);
s32 pad_000D38[2];
Script N(script_SearchBush_80240D40);
Script N(script_ShakeTree_802410A0);
s32 N(treeDropList_Tree1)[15];
Script N(script_80241728);
Script N(script_UpdateTexturePan_802417A0);
Script N(script_8024183C);
Script N(script_80241ABC);
s32 pad_0021A4[3];
Script N(script_MakeEntities);
s32 pad_002268[2];
const char D_80242270_CF2BB0[8]; // "flo_08"
const char D_80242278_CF2BB8[8]; // "flo_10"
const char D_80242280_CF2BC0[8]; // "flo_10"
s32 pad_002288[2];

// text: func_80240000_CF0940

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CF0980

// text: func_802400B0_CF09F0

s32 pad_00027C[] = {
    0x00000000,
};

// text: func_80240280_CF0BC0

// text: func_802403A4_CF0CE4

s32 pad_00058C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -455.0f, 0.0f, 0.0f, 90.0f },
    { 455.0f, 0.0f, 0.0f, 270.0f },
    { 455.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190127,
};

Script N(script_80240600) = SCRIPT({
    if (SI_SAVE_VAR(0) < 53) {
        SetMusicTrack(0, 48, 0, 8);
    } else {
        SetMusicTrack(0, 49, 0, 8);
    }
    if (SI_SAVE_VAR(0) >= 49) {
        PlaySound(0x80000022);
    }
});

Script N(script_80240690) = SCRIPT({
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

Script N(script_ExitWalk_8024093C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242270_CF2BB0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240998) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242278_CF2BB8, 0);
    sleep 100;
});

Script N(script_802409F4) = SCRIPT({
    bind N(script_ExitWalk_8024093C) to 0x80000 0;
    bind N(script_ExitWalk_80240998) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    func_802C971C(93);
    func_802C971C(100);
    spawn N(script_80241728);
    spawn N(script_80241ABC);
    ModifyColliderFlags(3, 29, 4);
    ModifyColliderFlags(3, 27, 4);
    ModifyColliderFlags(3, 28, 4);
    ModifyColliderFlags(0, 29, 0x80000);
    ModifyColliderFlags(0, 27, 0x80000);
    ModifyColliderFlags(0, 28, 0x80000);
    ModifyColliderFlags(3, 23, 1);
    SI_VAR(0) = 0xFFFFFE20;
    SI_VAR(1) = 0xFFFFFEA2;
    SI_VAR(2) = 0xFFFFFFBF;
    SI_VAR(3) = 0xFFFFFEFC;
    SI_VAR(4) = 0;
    spawn N(script_80240690);
    SI_VAR(0) = 100;
    SI_VAR(1) = 0xFFFFFEA2;
    SI_VAR(2) = 480;
    SI_VAR(3) = 0xFFFFFEFC;
    SI_VAR(4) = 0;
    spawn N(script_80240690);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        spawn N(script_8024183C);
        spawn N(script_802409F4);
    } else {
        SI_VAR(0) = N(script_802409F4);
        spawn EnterWalk;
    }
    await N(script_80240600);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CF0940();
    }
});

s32 pad_000D38[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80240D40) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CF09F0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CF09F0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802410A0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CF09F0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CF09F0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CF09F0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CF09F0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .count = 0x6,
    .modelIDs = { 0x14, 0x12, 0x15, 0x16, 0x17, 0x13 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x11 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000002, 0x000000A1, 0xFFFFFFDA, 0x00000057, 0xFFFFFF64, 0x0000000C, 0x00000000, 0xF971889F,
    0x000000A1, 0x00000027, 0x00000041, 0xFFFFFF30, 0x0000000C, 0x00000000, 0xF97188A0,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241718) =  { 1.0f, 0.0f, -192.0f, 0.0f };

Script N(script_80241728) = SCRIPT({
    SI_AREA_FLAG(31) = 0;
    SI_AREA_FLAG(32) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802410A0) to TriggerFlag_WALL_HAMMER 13;
    bind N(script_ShakeTree_802410A0) to TriggerFlag_BOMB N(triggerCoord_80241718);
});

Script N(script_UpdateTexturePan_802417A0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240280_CF0BC0();
                    return;
                }
            }
        }
    }
    func_802403A4_CF0CE4();
});

Script N(script_8024183C) = SCRIPT({
    DisablePlayerInput(1);
    TranslateGroup(100, 0, 45, 0);
    UseSettingsFrom(0, 170, 0, 160);
    SetPanTarget(0, 170, 0xFFFFFFA6, 160);
    SetCamDistance(0, 800);
    SetCamPitch(0, 18.5, -7.5);
    SetCamPosA(0, -300.0, 200.0);
    SetCamPosB(0, 300.0, -150.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    PlaySound(0x80000050);
    spawn {
        MakeLerp(80, 90, 10, 0);
    0:
        UpdateLerp();
        RotateModel(101, SI_VAR(0), 1, 0, 0);
        RotateModel(103, SI_VAR(0), 1, 0, 0);
        if (SI_VAR(1) == 1) {
            sleep 1;
            goto 0;
        }
        spawn {
            MakeLerp(45, 100, 150, 0);
            loop {
                UpdateLerp();
                TranslateGroup(100, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            sleep 30;
            SI_SAVE_VAR(0) = 49;
            GotoMap(D_80242280_CF2BC0, 2);
            sleep 100;
        });

Script N(script_80241ABC) = SCRIPT({
    if (SI_SAVE_VAR(0) < 49) {
        EnableGroup(94, 0);
        ModifyColliderFlags(0, 30, 0x7FFFFE00);
    } else {
        EnableGroup(65, 0);
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 2) {
        EnableGroup(105, 0);
    }
    EnableTexPanning(89, 1);
    EnableTexPanning(97, 1);
    EnableTexPanning(90, 1);
    EnableTexPanning(98, 1);
    EnableTexPanning(91, 1);
    EnableTexPanning(92, 1);
    EnableTexPanning(101, 1);
    EnableTexPanning(103, 1);
    EnableTexPanning(99, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 140;
        SI_VAR(2) = 0xFFFFFFB0;
        SI_VAR(3) = 0xFFFFFFBA;
        SI_VAR(4) = 100;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802417A0);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFFBA;
        SI_VAR(2) = 100;
        SI_VAR(3) = 100;
        SI_VAR(4) = 0xFFFFFFD8;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802417A0);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFCE0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802417A0);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFCE0;
        SI_VAR(3) = 0xFFFFFF38;
        SI_VAR(4) = 100;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802417A0);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFF63C;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802417A0);
    }
    spawn {
        SI_VAR(0) = 6;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFF63C;
        SI_VAR(3) = 0xFFFFFF38;
        SI_VAR(4) = 100;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802417A0);
    }
});

s32 pad_0021A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA564, 0xFFFFFEBB, 60, 0xFFFFFF74, 0, 154, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1393));
    MakeEntity(D_802EA588, 325, 60, 0xFFFFFF74, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1394));
    MakeEntity(D_802EAB04, 335, 0, 0xFFFFFF60, 0, 8, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1406));
});

s32 pad_002268[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242270_CF2BB0

// rodata: D_80242278_CF2BB8

// rodata: D_80242280_CF2BC0

s32 pad_002288[] = {
    0x00000000, 0x00000000,
};
