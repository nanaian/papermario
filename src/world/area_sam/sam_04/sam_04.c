#include "sam_04.h"

s32 pad_00023C[1];
s32 pad_000308[2];
Script N(script_80240780);
s32 pad_0007AC[1];
Script N(script_ExitWalk_802407B0);
Script N(script_ExitWalk_8024080C);
Script N(script_ExitWalk_80240868);
Script N(script_802408C4);
Script N(script_EnterWalk_80240928);
Script N(script_SearchBush_80240984);
Script N(script_ShakeTree_80240CE4);
Script N(script_802412E8);
Script N(script_80241390);
Script N(script_Tree2_Callback);
Script N(main);
s32 pad_001A38[2];
s32 N(unk_80241A40)[4];
s32 N(unk_80241A50)[4];
s32 N(unk_80241A60)[4];
s32 N(unk_80241A70)[4];
s32 N(unk_80241A80)[4];
s32 N(unk_80241A90)[4];
s32 N(intTable_80241AA0)[6];
Script N(script_80241AB8);
Script N(script_80241BCC);
Script N(script_80241D90);
Script N(script_80241F04);
Script N(script_80242F34);
s32 pad_00384C[1];
s32 N(unk_8024387C)[1];
s32 N(unk_80243880)[1];
Script N(script_80243884);
Script N(script_802439C8);
Script N(script_80243A18);
Script N(script_80243B4C);
s32 N(itemList_80243B9C)[2];
s32 N(itemList_80243BA4)[2];
Script N(script_Interact_80243BAC);
Script N(script_Interact_80243BD4);
Script N(script_Interact_80243BFC);
Script N(script_Interact_80243C24);
Script N(script_80243C4C);
Script N(script_Interact_80243E40);
Script N(script_80243E70);
Script N(script_Interact_80244064);
Script N(script_Idle_80244094);
Script N(script_Idle_802440A4);
Script N(script_Idle_802440B4);
Script N(script_Idle_802440C4);
Script N(script_Idle_802440D4);
Script N(script_Idle_802440E4);
Script N(script_Init_802440F4);
Script N(script_Init_80244160);
Script N(script_Init_802441C4);
Script N(script_Init_80244228);
Script N(script_Init_8024428C);
Script N(script_Init_802442F0);
Script N(script_Init_80244354);
StaticNpc N(npcGroup_80244390)[6];
StaticNpc N(npcGroup_80244F30)[1];
NpcGroupList N(npcGroupList_80245120);
s32 pad_005144[3];
Script N(script_MakeEntities);
const char D_802451F0_D187C0[8]; // "sam_03"
const char D_802451F8_D187C8[8]; // "sam_05"
const char D_80245200_D187D0[8]; // "sam_07"
s32 pad_005208[2];

// text: func_80240000_D135D0

// text: func_80240070_D13640

s32 pad_00023C[] = {
    0x00000000,
};

// text: func_80240240_D13810

s32 pad_000308[] = {
    0x00000000, 0x00000000,
};

// text: func_80240310_D138E0

// text: func_8024036C_D1393C

// text: func_8024053C_D13B0C

// text: func_80240590_D13B60

// text: func_802405C8_D13B98

// text: func_80240664_D13C34

EntryList N(entryList) = {
    { -330.0f, 0.0f, 340.0f, 45.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -250.0f, 180.0f },
    { -360.0f, 80.0f, -80.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19012E,
};

Script N(script_80240780) = SCRIPT({
    SetMusicTrack(0, 58, 0, 8);
});

s32 pad_0007AC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802407B0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802451F0_D187C0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024080C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802451F8_D187C8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240868) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80245200_D187D0, 0);
    sleep 100;
});

Script N(script_802408C4) = SCRIPT({
    bind N(script_ExitWalk_802407B0) to 0x80000 1;
    bind N(script_ExitWalk_8024080C) to 0x80000 6;
    bind N(script_ExitWalk_80240868) to 0x80000 11;
});

Script N(script_EnterWalk_80240928) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) < 3) {
        SI_VAR(0) = N(script_802408C4);
        spawn EnterWalk;
    } else {
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80240984) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240070_D13640, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240070_D13640, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80240CE4) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240070_D13640, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240070_D13640, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240070_D13640, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240070_D13640, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_802412E8) = SCRIPT({
    MakeLerp(0, 255, 20, 3);
    loop {
        UpdateLerp();
        TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableModel(SI_VAR(2), 0);
});

Script N(script_80241390) = SCRIPT({
    loop {
        GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetItemPos(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Tree2_Callback) = SCRIPT({
    match SI_MAP_VAR(2) {
        == 0 {
            SI_MAP_VAR(2) += 1;
            SI_VAR(2) = 33;
            await N(script_802412E8);
        }
        == 1 {
            SI_MAP_VAR(2) += 1;
            SI_VAR(2) = 32;
            await N(script_802412E8);
        }
        == 2 {
            SI_MAP_VAR(2) += 1;
            SI_VAR(2) = 31;
            await N(script_802412E8);
        }
        == 3 {
            if (SI_SAVE_FLAG(1446) == 0) {
                if (SI_MAP_VAR(1) == 0) {
                    SI_MAP_VAR(1) = 1;
                    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetNpcPos(6, 0xFFFFFEDE, 70, 110);
                    SI_VAR(10) = spawn N(script_80241390);
                    if (SI_VAR(0) <= 0xFFFFFED9) {
                        SI_VAR(0) = 0xFFFFFEF4;
                    } else {
                        SI_VAR(0) = 0xFFFFFEC4;
                    }
                    SetNpcJumpscale(6, 2.0);
                    NpcJump0(6, SI_VAR(0), 0, 141, 20);
                    kill SI_VAR(10);
                    sleep 1;
                    SetNpcPos(6, 0, 0xFFFFFC18, 0);
                }
            }
        }
    }
});

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x14 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x19 },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241620) =  { -411.0, 0.0, 163.0, 0.0 };

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1E },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = NULL,
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = &N(script_Tree2_Callback),
};

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x15 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1A },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241670) =  { 426.0, 0.0, -105.0, 0.0 };

ModelIdList N(treeModelList_Tree4_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x16 },
};

ModelIdList N(treeModelList_Tree4_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1B },
};

ShakeTree N(shakeTreeEvent_Tree4) = {
    .leaves = &N(treeModelList_Tree4_Leaves),
    .trunk = &N(treeModelList_Tree4_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802416A4) =  { 315.0, 0.0, -115.0, 0.0 };

ModelIdList N(treeModelList_Tree5_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x17 },
};

ModelIdList N(treeModelList_Tree5_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1C },
};

ShakeTree N(shakeTreeEvent_Tree5) = {
    .leaves = &N(treeModelList_Tree5_Leaves),
    .trunk = &N(treeModelList_Tree5_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802416D8) =  { 314.0, 0.0, -114.0, 0.0 };

ModelIdList N(treeModelList_Tree6_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x18 },
};

ModelIdList N(treeModelList_Tree6_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1D },
};

ShakeTree N(shakeTreeEvent_Tree6) = {
    .leaves = &N(treeModelList_Tree6_Leaves),
    .trunk = &N(treeModelList_Tree6_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_8024170C) =  { -294.0, 0.0, -213.0, 0.0 };

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 41;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80245120));
    await N(script_MakeEntities);
    await N(script_80240780);
    PlayEffect(69, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    ModifyColliderFlags(3, 15, 8);
    ModifyColliderFlags(3, 6, 8);
    ModifyColliderFlags(3, 11, 8);
    ModifyColliderFlags(3, 1, 8);
    await N(script_80242F34);
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_WALL_HAMMER 25;
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_BOMB N(triggerCoord_80241620);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_WALL_HAMMER 26;
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_WALL_HAMMER 27;
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_BOMB N(triggerCoord_80241670);
    SI_VAR(0) = N(shakeTreeEvent_Tree4);
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_WALL_HAMMER 28;
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_BOMB N(triggerCoord_802416A4);
    SI_VAR(0) = N(shakeTreeEvent_Tree5);
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_WALL_HAMMER 30;
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_BOMB N(triggerCoord_802416D8);
    SI_VAR(0) = N(shakeTreeEvent_Tree6);
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_WALL_HAMMER 29;
    bind N(script_ShakeTree_80240CE4) to TriggerFlag_BOMB N(triggerCoord_8024170C);
    spawn N(script_EnterWalk_80240928);
    sleep 1;
});

s32 pad_001A38[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80241A40)[] = {
    0x00002710, 0x00002711, 0x00002712, 0x00002713,
};

s32 N(unk_80241A50)[] = {
    0x00002714, 0x00002715, 0x00002716, 0x00002717,
};

s32 N(unk_80241A60)[] = {
    0x00002718, 0x00002719, 0x0000271A, 0x0000271B,
};

s32 N(unk_80241A70)[] = {
    0x0000271C, 0x0000271D, 0x0000271E, 0x0000271F,
};

s32 N(unk_80241A80)[] = {
    0x00002720, 0x00002721, 0x00002722, 0x00002723,
};

s32 N(unk_80241A90)[] = {
    0x00000024, 0x00000025, 0x00000026, 0x00000027,
};

s32 N(intTable_80241AA0)[] = {
    N(unk_80241A40), N(unk_80241A50), N(unk_80241A60), N(unk_80241A70), N(unk_80241A80), N(unk_80241A90),
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241AB8) = {
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241AA0)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241BCC) = {
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_VAR(0)),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241AA0)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(10), 1),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(10)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(11)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(11)),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(12), SI_VAR(13), SI_VAR(14), SI_VAR(15)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(4), 1),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(12), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(13), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(14), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(15), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, SI_VAR(0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 4, SI_VAR(1), SI_VAR(2), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241D90) = SCRIPT({
    GetNpcPos(SI_VAR(0), SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SI_VAR(8) =f SI_VAR(1);
    SI_VAR(9) =f SI_VAR(2);
    SI_VAR(10) =f SI_VAR(3);
    SI_VAR(11) =f SI_VAR(4);
    SI_VAR(8) -=f SI_VAR(5);
    SI_VAR(9) -=f SI_VAR(6);
    SI_VAR(10) -=f SI_VAR(7);
    SI_VAR(8) /=f SI_VAR(11);
    SI_VAR(9) /=f SI_VAR(11);
    SI_VAR(10) /=f SI_VAR(11);
    loop SI_VAR(11) {
        SI_VAR(5) +=f SI_VAR(8);
        SI_VAR(6) +=f SI_VAR(9);
        SI_VAR(7) +=f SI_VAR(10);
        SI_VAR(1) =f SI_VAR(5);
        SI_VAR(2) =f SI_VAR(6);
        SI_VAR(3) =f SI_VAR(7);
        SI_VAR(4) = 20;
        await N(script_80241BCC);
        PlaySoundAtNpc(SI_VAR(0), 908, 0);
    }
});

Script N(script_80241F04) = SCRIPT({
    sleep 20;
    if (SI_VAR(0) == 0) {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 300.0);
        SetCamPitch(0, 15.0, -8.0);
        SetCamSpeed(0, 10.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(2, 0x830001, 0x830001, 0, 0x12011B);
        GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamSpeed(0, 3.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 15;
        SpeakToPlayer(5, 0x830001, 0x830001, 0, 0x12011C);
    } else {
        GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 300.0);
        SetCamPitch(0, 15.0, -8.0);
        SetCamSpeed(0, 10.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(5, 0x830001, 0x830001, 0, 0x12011C);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamSpeed(0, 3.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 15;
        SpeakToPlayer(2, 0x830001, 0x830001, 0, 0x12011B);
    }
    UseSettingsFrom(0, 0, 0, 0xFFFFFF74);
    SetPanTarget(0, 0, 0, 0xFFFFFF9C);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    ShowMessageAtScreenPos(0x12011D, 160, 40);
    SetNpcFlagBits(0, 256, 1);
    SetNpcFlagBits(1, 256, 1);
    SetNpcFlagBits(2, 256, 1);
    SetNpcFlagBits(3, 256, 1);
    SetNpcFlagBits(4, 256, 1);
    SetNpcFlagBits(5, 256, 1);
    sleep 1;
    spawn {
        sleep 22;
        DisablePlayerPhysics(1);
        SetPlayerAnimation(0x1002B);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        func_80240240_D13810(SI_VAR(3), SI_VAR(0), SI_VAR(2), 0, 0);
        GetDist2D(SI_VAR(4), SI_VAR(0), SI_VAR(2), 0, 0);
        SI_VAR(5) =f SI_VAR(4);
        SI_VAR(5) /= 5.0;
        SI_VAR(8) =f SI_VAR(3);
        SI_VAR(8) -= 90.0;
        loop 4 {
            AddVectorPolar(SI_VAR(0), SI_VAR(2), SI_VAR(5), SI_VAR(3));
            SI_VAR(6) =f SI_VAR(0);
            SI_VAR(7) =f SI_VAR(2);
            AddVectorPolar(SI_VAR(6), SI_VAR(7), 20.0, SI_VAR(8));
            SetPlayerJumpscale(2.0);
            PlayerJump1(SI_VAR(6), 0, SI_VAR(7), 16);
            SI_VAR(8) += 180.0;
            sleep 6;
        }
        SetPlayerJumpscale(2.0);
        PlayerJump1(0, 0, 0, 16);
        SetPlayerAnimation(0x10002);
        InterpPlayerYaw(0, 0);
        DisablePlayerPhysics(0);
    }
    spawn {
        sleep 110;
        DisablePartnerAI(0);
        SetNpcAnimation(0xFFFFFFFC, 258);
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        NpcJump1(0xFFFFFFFC, 50, 0, 0, 22);
        SetNpcAnimation(0xFFFFFFFC, 262);
        sleep 110;
    }
    spawn {
        sleep 22;
        loop 5 {
            ShakeCam(0, 0, 6, 2.0);
            sleep 16;
        }
    }
    SI_VAR(0) = 0;
    SI_VAR(1) = -175.0;
    SI_VAR(2) = 0.0;
    SI_VAR(3) = -180.0;
    SI_VAR(4) = 5.0;
    spawn N(script_80241D90);
    SI_VAR(0) = 1;
    SI_VAR(1) = -125.0;
    SI_VAR(2) = 0.0;
    SI_VAR(3) = -220.0;
    SI_VAR(4) = 5.0;
    spawn N(script_80241D90);
    SI_VAR(0) = 2;
    SI_VAR(1) = -75.0;
    SI_VAR(2) = 0.0;
    SI_VAR(3) = -260.0;
    SI_VAR(4) = 5.0;
    spawn N(script_80241D90);
    SI_VAR(0) = 3;
    SI_VAR(1) = 75.0;
    SI_VAR(2) = 0.0;
    SI_VAR(3) = -260.0;
    SI_VAR(4) = 5.0;
    spawn N(script_80241D90);
    SI_VAR(0) = 4;
    SI_VAR(1) = 125.0;
    SI_VAR(2) = 0.0;
    SI_VAR(3) = -220.0;
    SI_VAR(4) = 5.0;
    spawn N(script_80241D90);
    sleep 1;
    SI_VAR(0) = 5;
    SI_VAR(1) = 175.0;
    SI_VAR(2) = 0.0;
    SI_VAR(3) = -180.0;
    SI_VAR(4) = 5.0;
    await N(script_80241D90);
    sleep 80;
    spawn {
        ShakeCam(0, 0, 200, 1.0);
    }
    spawn {
        loop 10 {
            SI_VAR(0) = 0xFFFFFF6A;
            loop 6 {
                PlayEffect(6, 4, SI_VAR(0), 0, 0xFFFFFEFC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                SI_VAR(0) += 60;
            }
            sleep 20;
        }
    }
    spawn {
        sleep 40;
        UseSettingsFrom(0, 0, 0, 0xFFFFFF10);
        SetPanTarget(0, 0, 0, 0xFFFFFF10);
        SetCamDistance(0, 300.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
    }
    PlaySoundAt(909, 0, 0, 0, 0xFFFFFED4);
    MakeLerp(0, 100, 200, 10);
0:
    UpdateLerp();
    TranslateModel(6, 0, SI_VAR(0), 0);
    TranslateModel(8, 0, SI_VAR(0), 0);
    TranslateModel(10, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    sleep 60;
    spawn {
        ShakeCam(0, 0, 100, 0.30078125);
    }
    spawn {
        GetModelCenter(6);
        PlayEffect(6, 4, SI_VAR(0), 0, SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        GetModelCenter(8);
        PlayEffect(6, 4, SI_VAR(0), 0, SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    PlaySoundAt(910, 0, 0, 0, 0xFFFFFED4);
    MakeLerp(0, 80, 100, 10);
1:
    UpdateLerp();
    TranslateModel(6, 0, 100, 0);
    TranslateModel(8, 0, 100, 0);
    RotateModel(6, SI_VAR(0), 0, 1, 0);
    RotateModel(8, SI_VAR(0), 0, -1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    sleep 60;
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 10.0);
    WaitForCam(0, 1.0);
    SetCamSpeed(0, 1.0);
    sleep 30;
    ShowMessageAtScreenPos(0x12011E, 160, 40);
    EnablePartnerAI();
    UpdateColliderTransform(19);
    UpdateColliderTransform(21);
    UpdateColliderTransform(23);
    SetNpcFlagBits(0, 256, 0);
    SetNpcFlagBits(1, 256, 0);
    SetNpcFlagBits(2, 256, 0);
    SetNpcFlagBits(3, 256, 0);
    SetNpcFlagBits(4, 256, 0);
    SetNpcFlagBits(5, 256, 0);
    BindNpcInteract(0, 0);
    BindNpcInteract(1, 0);
    BindNpcInteract(2, 0);
    BindNpcInteract(3, 0);
    BindNpcInteract(4, 0);
    BindNpcInteract(5, 0);
    ModifyColliderFlags(0, 36, 0x7FFFFE00);
    ModifyColliderFlags(1, 39, 0x7FFFFE00);
    ModifyColliderFlags(1, 40, 0x7FFFFE00);
    ModifyColliderFlags(1, 41, 0x7FFFFE00);
    ModifyColliderFlags(1, 42, 0x7FFFFE00);
    ModifyColliderFlags(1, 43, 0x7FFFFE00);
    ModifyColliderFlags(1, 44, 0x7FFFFE00);
    SI_SAVE_VAR(0) = 74;
});

Script N(script_80242F34) = SCRIPT({
    CloneModel(36, 10000);
    CloneModel(37, 0x2711);
    CloneModel(38, 0x2712);
    CloneModel(39, 0x2713);
    CloneModel(36, 0x2714);
    CloneModel(37, 0x2715);
    CloneModel(38, 0x2716);
    CloneModel(39, 0x2717);
    CloneModel(36, 0x2718);
    CloneModel(37, 0x2719);
    CloneModel(38, 0x271A);
    CloneModel(39, 0x271B);
    CloneModel(36, 0x271C);
    CloneModel(37, 0x271D);
    CloneModel(38, 0x271E);
    CloneModel(39, 0x271F);
    CloneModel(36, 0x2720);
    CloneModel(37, 0x2721);
    CloneModel(38, 0x2722);
    CloneModel(39, 0x2723);
    ModifyColliderFlags(0, 32, 0x7FFFFE00);
    ModifyColliderFlags(0, 33, 0x7FFFFE00);
    ModifyColliderFlags(0, 34, 0x7FFFFE00);
    ModifyColliderFlags(0, 36, 0x7FFFFE00);
    ModifyColliderFlags(0, 37, 0x7FFFFE00);
    ModifyColliderFlags(0, 38, 0x7FFFFE00);
    ModifyColliderFlags(0, 39, 0x7FFFFE00);
    ModifyColliderFlags(0, 40, 0x7FFFFE00);
    ModifyColliderFlags(0, 41, 0x7FFFFE00);
    ModifyColliderFlags(0, 42, 0x7FFFFE00);
    ModifyColliderFlags(0, 43, 0x7FFFFE00);
    ModifyColliderFlags(0, 44, 0x7FFFFE00);
    if (SI_SAVE_VAR(0) < 74) {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0xFFFFFF6A;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEF2;
        await N(script_80241AB8);
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFA6;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEF2;
        await N(script_80241AB8);
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFFE2;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEF2;
        await N(script_80241AB8);
        SI_VAR(0) = 3;
        SI_VAR(1) = 30;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEF2;
        await N(script_80241AB8);
        SI_VAR(0) = 4;
        SI_VAR(1) = 90;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEF2;
        await N(script_80241AB8);
        SI_VAR(0) = 5;
        SI_VAR(1) = 150;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEF2;
        await N(script_80241AB8);
        ModifyColliderFlags(1, 36, 0x7FFFFE00);
    } else {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0xFFFFFF51;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFF4C;
        await N(script_80241AB8);
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFF83;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFF24;
        await N(script_80241AB8);
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFFB5;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEFC;
        await N(script_80241AB8);
        SI_VAR(0) = 3;
        SI_VAR(1) = 75;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFEFC;
        await N(script_80241AB8);
        SI_VAR(0) = 4;
        SI_VAR(1) = 125;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFF24;
        await N(script_80241AB8);
        SI_VAR(0) = 5;
        SI_VAR(1) = 175;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFF4C;
        await N(script_80241AB8);
        ModifyColliderFlags(1, 39, 0x7FFFFE00);
        ModifyColliderFlags(1, 40, 0x7FFFFE00);
        ModifyColliderFlags(1, 41, 0x7FFFFE00);
        ModifyColliderFlags(1, 42, 0x7FFFFE00);
        ModifyColliderFlags(1, 43, 0x7FFFFE00);
        ModifyColliderFlags(1, 44, 0x7FFFFE00);
    }
    if (SI_SAVE_FLAG(1431) == 0) {
        EnableModel(0x271B, 0);
    }
    if (SI_SAVE_FLAG(1432) == 0) {
        EnableModel(38, 0);
    }
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
    ParentColliderToModel(19, 6);
    ParentColliderToModel(21, 8);
    ParentColliderToModel(23, 10);
    if (SI_SAVE_VAR(0) >= 74) {
        TranslateModel(6, 0, 100, 0);
        TranslateModel(8, 0, 100, 0);
        TranslateModel(10, 0, 100, 0);
        RotateModel(6, 80, 0, 1, 0);
        RotateModel(8, 80, 0, -1, 0);
        UpdateColliderTransform(19);
        UpdateColliderTransform(21);
        UpdateColliderTransform(23);
        BindNpcInteract(0, 0);
        BindNpcInteract(1, 0);
        BindNpcInteract(2, 0);
        BindNpcInteract(3, 0);
        BindNpcInteract(4, 0);
        BindNpcInteract(5, 0);
    }
});

s32 pad_00384C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80243850) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x3C,
    .radius = 0x28,
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

s32 N(unk_8024387C)[] = {
    0x00000000,
};

s32 N(unk_80243880)[] = {
    0x00000000,
};

Script N(script_80243884) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024036C_D1393C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240590_D13B60(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802439C8) = {
    SI_CMD(ScriptOpcode_CALL, func_802405C8_D13B98, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243884), 0x10, 0, 0x80245210, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024053C_D13B0C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80243A18) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024036C_D1393C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240590_D13B60(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80243B4C) = {
    SI_CMD(ScriptOpcode_CALL, func_80240664_D13C34, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243A18), 0x10, 0, 0x802453D8, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024053C_D13B0C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(itemList_80243B9C)[] = {
    0x00000031, 0x00000000,
};

s32 N(itemList_80243BA4)[] = {
    0x00000032, 0x00000000,
};

Script N(script_Interact_80243BAC) = SCRIPT({
    ShowMessageAtScreenPos(0x1D015D, 160, 40);
});

Script N(script_Interact_80243BD4) = SCRIPT({
    ShowMessageAtScreenPos(0x1D015D, 160, 40);
});

Script N(script_Interact_80243BFC) = SCRIPT({
    ShowMessageAtScreenPos(0x1D015D, 160, 40);
});

Script N(script_Interact_80243C24) = SCRIPT({
    ShowMessageAtScreenPos(0x1D015D, 160, 40);
});

Script N(script_80243C4C) = SCRIPT({
    DisablePlayerInput(1);
    FindKeyItem(50, SI_VAR(0));
    if (SI_VAR(0) != -1) {
        0x802D6420();
        0x802D6954();
        match SI_VAR(0) {
            == 0 {}
            == -1 {}
            else {
                SI_SAVE_FLAG(1431) = 1;
                RemoveKeyItemAt(SI_VAR(1));
                EnableModel(0x271B, 1);
                if (SI_SAVE_FLAG(1432) == 1) {
                    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SI_VAR(1) += 30;
                    SI_VAR(2) += 20;
                    PlaySoundAt(8259, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    PlayEffect(17, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10, 0, 0, 0, 0, 0, 0, 0, 0);
                    sleep 20;
                    PlaySound(11);
                    SI_VAR(0) = 0;
                    await N(script_80241F04);
                }
            }
        }
    } else {
        ShowMessageAtScreenPos(0x1D015D, 160, 40);
    }
    unbind;
    DisablePlayerInput(0);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_Interact_80243E40) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243C4C), 0x10, 0, N(itemList_80243BA4), 0, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80243E70) = SCRIPT({
    DisablePlayerInput(1);
    FindKeyItem(49, SI_VAR(0));
    if (SI_VAR(0) != -1) {
        0x802D6420();
        0x802D6954();
        match SI_VAR(0) {
            == 0 {}
            == -1 {}
            else {
                SI_SAVE_FLAG(1432) = 1;
                RemoveKeyItemAt(SI_VAR(1));
                EnableModel(38, 1);
                if (SI_SAVE_FLAG(1431) == 1) {
                    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SI_VAR(1) += 60;
                    SI_VAR(2) += 20;
                    PlaySoundAt(8259, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    PlayEffect(17, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10, 0, 0, 0, 0, 0, 0, 0, 0);
                    sleep 20;
                    PlaySound(11);
                    SI_VAR(0) = 1;
                    await N(script_80241F04);
                }
            }
        }
    } else {
        ShowMessageAtScreenPos(0x1D015D, 160, 40);
    }
    unbind;
    DisablePlayerInput(0);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_Interact_80244064) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243E70), 0x10, 0, N(itemList_80243B9C), 0, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Idle_80244094) = SCRIPT({

});

Script N(script_Idle_802440A4) = SCRIPT({

});

Script N(script_Idle_802440B4) = SCRIPT({

});

Script N(script_Idle_802440C4) = SCRIPT({

});

Script N(script_Idle_802440D4) = SCRIPT({

});

Script N(script_Idle_802440E4) = SCRIPT({

});

Script N(script_Init_802440F4) = SCRIPT({
}
BindNpcInteract(-1, N(script_Interact_80243BAC));
BindNpcIdle(-1, N(script_Idle_80244094));
SetNpcFlagBits(-1, 0x10000002, 1);
EnableNpcShadow(-1, 0);
});

Script N(script_Init_80244160) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243BD4));
    BindNpcIdle(-1, N(script_Idle_802440A4));
    SetNpcFlagBits(-1, 0x10000002, 1);
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_802441C4) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243E40));
    BindNpcIdle(-1, N(script_Idle_802440B4));
    SetNpcFlagBits(-1, 0x10000002, 1);
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_80244228) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243BFC));
    BindNpcIdle(-1, N(script_Idle_802440C4));
    SetNpcFlagBits(-1, 0x10000002, 1);
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_8024428C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243C24));
    BindNpcIdle(-1, N(script_Idle_802440D4));
    SetNpcFlagBits(-1, 0x10000002, 1);
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_802442F0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244064));
    BindNpcIdle(-1, N(script_Idle_802440E4));
    SetNpcFlagBits(-1, 0x10000002, 1);
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_80244354) = SCRIPT({
    SetNpcFlagBits(-1, 0x10000002, 1);
    EnableNpcShadow(-1, 0);
});

StaticNpc N(npcGroup_80244390)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_802440F4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .tattle = 0x1A010A,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80243850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_80244160),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .tattle = 0x1A010A,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80243850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_802441C4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .tattle = 0x1A010A,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80243850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_80244228),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .tattle = 0x1A010A,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80243850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_8024428C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .tattle = 0x1A010A,
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80243850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_802442F0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .tattle = 0x1A010A,
    },
};

StaticNpc N(npcGroup_80244F30)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80243850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00404F09,
        .init = N(script_Init_80244354),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
    },
};

NpcGroupList N(npcGroupList_80245120) = {
    NPC_GROUP(N(npcGroup_80244390), 0x00000000),
    NPC_GROUP(N(npcGroup_80244F30), 0x00000000),
    {},
};

s32 pad_005144[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 40, 0, 400, 0, 15, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1445));
    MakeItemEntity(58, 0xFFFFFEDE, 70, 110, 17, SI_SAVE_FLAG(1446));
    SI_MAP_VAR(0) = SI_VAR(0);
    MakeItemEntity(151, 426, 0, 0xFFFFFF54, 17, SI_SAVE_FLAG(1447));
});

// rodata: D_802451F0_D187C0

// rodata: D_802451F8_D187C8

// rodata: D_80245200_D187D0

s32 pad_005208[] = {
    0x00000000, 0x00000000,
};

