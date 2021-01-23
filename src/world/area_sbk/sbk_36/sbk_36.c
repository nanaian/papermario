#include "sbk_36.h"

s32 pad_000038[2];
s32 pad_00027C[1];
Script N(script_ExitWalk_80240300);
Script N(script_ExitWalk_8024035C);
Script N(script_ExitWalk_802403B8);
Script N(script_ExitWalk_80240414);
Script N(script_80240470);
Script N(main);
s32 pad_000608[2];
Script N(script_SearchBush_80240610);
Script N(script_ShakeTree_80240970);
s32 N(treeDropList_Tree1)[8];
s32 N(treeDropList_Tree2)[8];
s32 N(treeDropList_Tree6)[8];
s32 N(treeDropList_Tree9)[8];
Script N(script_802411C8);
Script N(script_80241460);
Script N(script_MakeEntities);
s32 pad_001518[2];
const char D_80241520_94B380[8]; // "sbk_35"
const char D_80241528_94B388[8]; // "dro_01"
const char D_80241530_94B390[8]; // "sbk_26"
const char D_80241538_94B398[8]; // "sbk_46"

// text: func_80240000_949E60

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_949EA0

// text: func_802400B0_949F10

s32 pad_00027C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19007D,
};

Script N(script_ExitWalk_80240300) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241520_94B380, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024035C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241528_94B388, 0);
    sleep 100;
});

Script N(script_ExitWalk_802403B8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80241530_94B390, 3);
    sleep 100;
});

Script N(script_ExitWalk_80240414) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80241538_94B398, 2);
    sleep 100;
});

Script N(script_80240470) = SCRIPT({
    bind N(script_ExitWalk_80240300) to 0x80000 9;
    bind N(script_ExitWalk_8024035C) to 0x80000 5;
    bind N(script_ExitWalk_802403B8) to 0x80000 3;
    bind N(script_ExitWalk_80240414) to 0x80000 7;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 10;
    SetSpriteShading(-1);
    if (SI_SAVE_VAR(0) == 0xFFFFFFC1) {
        DisablePulseStone(0);
    }
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    func_80240000_949E60();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240470);
    spawn EnterWalk;
    spawn N(script_802411C8);
});

s32 pad_000608[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80240610) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_949F10, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_949F10, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80240970) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_949F10, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_949F10, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_949F10, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_949F10, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .count = 0x1,
    .modelIDs = { 0x19 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x18 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x00000157, 0xFFFFFE5A, 0x00000064, 0x00000074, 0x0000000F, 0xF8405EC9, 0x00000000,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80240FB8) =  { -422.0f, 0.0f, 91.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x1D },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1C },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000157, 0xFFFFFEBE, 0x00000064, 0xFFFFFFAA, 0x0000000F, 0xF8405ECA, 0x00000000,
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_8024100C) =  { -322.0f, 0.0f, -111.0f, 0.0f };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x21 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x20 },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241040) =  { -244.0f, 0.0f, 77.0f, 0.0f };

ModelIdList N(treeModelList_Tree4_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x25 },
};

ModelIdList N(treeModelList_Tree4_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x24 },
};

ShakeTree N(shakeTreeEvent_Tree4) = {
    .leaves = &N(treeModelList_Tree4_Leaves),
    .trunk = &N(treeModelList_Tree4_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241074) =  { -128.0f, 0.0f, -111.0f, 0.0f };

ModelIdList N(treeModelList_Tree5_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x29 },
};

ModelIdList N(treeModelList_Tree5_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x28 },
};

ShakeTree N(shakeTreeEvent_Tree5) = {
    .leaves = &N(treeModelList_Tree5_Leaves),
    .trunk = &N(treeModelList_Tree5_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802410A8) =  { 58.0f, 0.0f, 101.0f, 0.0f };

ModelIdList N(treeModelList_Tree6_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x2D },
};

ModelIdList N(treeModelList_Tree6_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2C },
};

s32 N(treeDropList_Tree6)[] = {
    0x00000001, 0x00000157, 0x0000009E, 0x00000064, 0xFFFFFFB4, 0x0000000F, 0xF8405ECB, 0x00000000,
};

ShakeTree N(shakeTreeEvent_Tree6) = {
    .leaves = &N(treeModelList_Tree6_Leaves),
    .trunk = &N(treeModelList_Tree6_Trunk),
    .drops = &N(treeDropList_Tree6),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802410FC) =  { 158.0f, 0.0f, -101.0f, 0.0f };

ModelIdList N(treeModelList_Tree7_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x31 },
};

ModelIdList N(treeModelList_Tree7_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x30 },
};

ShakeTree N(shakeTreeEvent_Tree7) = {
    .leaves = &N(treeModelList_Tree7_Leaves),
    .trunk = &N(treeModelList_Tree7_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241130) =  { 236.0f, 0.0f, 87.0f, 0.0f };

ModelIdList N(treeModelList_Tree8_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x35 },
};

ModelIdList N(treeModelList_Tree8_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x34 },
};

ShakeTree N(shakeTreeEvent_Tree8) = {
    .leaves = &N(treeModelList_Tree8_Leaves),
    .trunk = &N(treeModelList_Tree8_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241164) =  { 351.0f, 0.0f, -101.0f, 0.0f };

ModelIdList N(treeModelList_Tree9_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x39 },
};

ModelIdList N(treeModelList_Tree9_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x38 },
};

s32 N(treeDropList_Tree9)[] = {
    0x00000001, 0x00000038, 0x0000016E, 0x0000005C, 0x00000065, 0x0000000D, 0xF8405EC1, 0xFAA2B58A,
};

ShakeTree N(shakeTreeEvent_Tree9) = {
    .leaves = &N(treeModelList_Tree9_Leaves),
    .trunk = &N(treeModelList_Tree9_Trunk),
    .drops = &N(treeDropList_Tree9),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802411B8) =  { 438.0f, 0.0f, 101.0f, 0.0f };

Script N(script_802411C8) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 17;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_80240FB8);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 18;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_8024100C);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_80241040);
    SI_VAR(0) = N(shakeTreeEvent_Tree4);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 20;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_80241074);
    SI_VAR(0) = N(shakeTreeEvent_Tree5);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 21;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_802410A8);
    SI_VAR(0) = N(shakeTreeEvent_Tree6);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 22;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_802410FC);
    SI_VAR(0) = N(shakeTreeEvent_Tree7);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 23;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_80241130);
    SI_VAR(0) = N(shakeTreeEvent_Tree8);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 24;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_80241164);
    SI_VAR(0) = N(shakeTreeEvent_Tree9);
    bind N(script_ShakeTree_80240970) to TriggerFlag_WALL_HAMMER 25;
    bind N(script_ShakeTree_80240970) to TriggerFlag_BOMB N(triggerCoord_802411B8);
});

Script N(script_80241460) = SCRIPT({
    group 0;
    func_802D5830(1);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D017A, 160, 40);
    DisablePlayerInput(0);
    func_802D5830(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAFDC, 410, 0, 0xFFFFFFB5, 0, 0x80000000);
    AssignScript(N(script_80241460));
});

s32 pad_001518[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241520_94B380

// rodata: D_80241528_94B388

// rodata: D_80241530_94B390

// rodata: D_80241538_94B398
