#include "omo_06.h"

s32 pad_000868[2];
s32 pad_000B2C[1];
Script N(script_80240BC0);
Script N(script_ExitWalk_80240C90);
Script N(script_ExitWalk_80240CEC);
Script N(script_ExitWalk_80240D48);
Script N(script_80240DA4);
Script N(script_EnterWalk_80240E08);
Script N(main);
s32 pad_000FCC[1];
Script N(script_80240FD0);
Script N(script_802410DC);
Script N(script_802412D8);
Script N(script_80241628);
s32 pad_001748[2];
Script N(script_80241750);
Script N(script_80242918);
Script N(script_80242980);
Script N(script_80242A44);
Script N(script_80242B5C);
Script N(script_80242F5C);
Script N(script_80243258);
Script N(script_80243318);
Script N(script_802435BC);
Script N(script_8024364C);
Script N(script_80243A6C);
Script N(script_80243CA4);
Script N(script_UpdateTexturePan_80243EDC);
Script N(script_80243F78);
s32 N(unk_80244160)[2];
s32 N(unk_80244168)[12];
Script N(script_80244198);
s32 N(unk_80244308)[12];
Script N(script_80244338);
s32 N(unk_802444A8)[12];
s32 N(unk_802444D8)[16];
Script N(script_80244518);
s32 N(unk_802447D0)[12];
s32 N(unk_80244800)[16];
Script N(script_80244840);
s32 N(intTable_80244AF8)[3];
s32 N(intTable_80244B04)[3];
Script N(script_80244B10);
s32 N(unk_80244F28)[6];
Script N(script_80244F40);
Script N(script_80245080);
Script N(script_Interact_802450BC);
Script N(script_Init_802450F8);
Script N(script_Interact_8024511C);
Script N(script_Init_8024529C);
StaticNpc N(npcGroup_802452C0)[2];
NpcGroupList N(npcGroupList_802456A0);
s32 pad_0056B8[2];
s32 N(unk_802456C0)[1];
Script N(script_802456C4);
Script N(script_8024572C);
Script N(script_8024580C);
Script N(script_MakeEntities);
s32 pad_005954[3];
const char D_80245960_DBD270[8]; // "omo_17"
const char D_80245968_DBD278[8]; // "omo_07"
const char D_80245970_DBD280[8]; // "omo_10"
const char D_80245978_DBD288[8]; // "omo_08"
const char D_80245980_DBD290[8]; // "omo_06"
const char D_80245988_DBD298[8]; // "omo_03"
const char D_80245990_DBD2A0[8]; // "omo_16"
s32 pad_005998[2];

// text: func_80240000_DB7910

// text: func_8024001C_DB792C

// text: func_802400E4_DB79F4

// text: func_80240168_DB7A78

// text: func_802401EC_DB7AFC

// text: func_80240290_DB7BA0

// text: func_80240388_DB7C98

// text: func_80240518_DB7E28

// text: func_8024055C_DB7E6C

// text: func_80240680_DB7F90

s32 pad_000868[] = {
    0x00000000, 0x00000000,
};

// text: func_80240870_DB8180

// text: func_80240924_DB8234

// text: func_80240988_DB8298

// text: func_80240AD8_DB83E8

s32 pad_000B2C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 140.0f, 90.0f },
    { -475.0f, 0.0f, -160.0f, 90.0f },
    { -466.0f, 10.0f, 5.0f, 90.0f },
    { 340.0f, 10.0f, -330.0f, 225.0f },
    { 337.0f, 0.0f, 337.0f, 315.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900DE,
};

Script N(script_80240BC0) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SetMusicTrack(0, 32, 0, 8);
    } else {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
            2..3
            SetMusicTrack(0, 33, 0, 8);
            else {
                SetMusicTrack(0, 32, 0, 8);
            }
        }
    }
});

Script N(script_ExitWalk_80240C90) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245960_DBD270, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240CEC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245960_DBD270, 3);
    sleep 100;
});

Script N(script_ExitWalk_80240D48) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_80245968_DBD278, 0);
    sleep 100;
});

Script N(script_80240DA4) = SCRIPT({
    bind N(script_ExitWalk_80240C90) to 0x80000 5;
    bind N(script_ExitWalk_80240CEC) to 0x80000 11;
    bind N(script_ExitWalk_80240D48) to 0x80000 0;
});

Script N(script_EnterWalk_80240E08) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240DA4);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        2..3
        spawn N(script_80240DA4);
        sleep 3;
        else {
            SI_VAR(0) = N(script_80240DA4);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802456A0));
    await N(script_MakeEntities);
    await N(script_80241628);
    await N(script_80240BC0);
    await N(script_80244F40);
    spawn N(script_EnterWalk_80240E08);
    sleep 1;
});

s32 pad_000FCC[] = {
    0x00000000,
};

Script N(script_80240FD0) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(139, SI_VAR(0), 0, 0, 1);
    RotateModel(141, SI_VAR(0), 0, 0, 1);
    RotateModel(143, SI_VAR(0), 0, 0, 1);
    RotateModel(145, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_802410DC) = SCRIPT({
0:
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(130, SI_VAR(0), 0, -1, 0);
    RotateModel(132, SI_VAR(0), 0, 1, 0);
    RotateModel(134, SI_VAR(0), 0, -1, 0);
    RotateModel(136, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(130, SI_VAR(0), 0, -1, 0);
    RotateModel(132, SI_VAR(0), 0, 1, 0);
    RotateModel(134, SI_VAR(0), 0, -1, 0);
    RotateModel(136, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_802412D8) = SCRIPT({
    DisablePlayerInput(1);
    MakeLerp(0, 70, 30, 10);
0:
    UpdateLerp();
    RotateModel(59, SI_VAR(0), 0, 0, 1);
    UpdateColliderTransform(75);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    PlaySoundAt(497, 0, 0xFFFFFE75, 0, 0xFFFFFF47);
    ModifyColliderFlags(1, 73, 0x7FFFFE00);
    sleep 20;
    UseSettingsFrom(0, 223, 10, 0xFFFFFF5B);
    SetPanTarget(0, 223, 10, 0xFFFFFF5B);
    SetCamDistance(0, 500.0);
    SetCamPosA(0, -500.0, -200.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    PlaySoundAt(498, 0, 265, 0, 0xFFFFFF15);
    MakeLerp(0, 180, 30, 10);
1:
    UpdateLerp();
    RotateModel(53, SI_VAR(0), 1, 0, 0);
    RotateModel(54, SI_VAR(0), 1, 0, 0);
    RotateModel(52, SI_VAR(0), 1, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    PlaySoundAt(81, 0, 265, 0, 0xFFFFFF15);
    ShakeCam(0, 0, 10, 1.0);
    GetModelCenter(52);
    PlayEffect(6, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    SI_SAVE_VAR(0) = -1;
    ResetCam(0, 90.0);
    DisablePlayerInput(0);
    unbind;
});

Script N(script_80241628) = SCRIPT({
    spawn N(script_80240FD0);
    spawn N(script_802410DC);
    ParentColliderToModel(75, 59);
    if (SI_SAVE_VAR(0) < -1) {
        bind N(script_802412D8) to TriggerFlag_WALL_INTERACT 71;
        ModifyColliderFlags(0, 73, 0x7FFFFE00);
    } else {
        RotateModel(59, 70, 0, 0, 1);
        UpdateColliderTransform(75);
        RotateModel(53, 180, 1, 0, 0);
        RotateModel(54, 180, 1, 0, 0);
        RotateModel(52, 180, 1, 0, 0);
    }
});

s32 pad_001748[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80241750) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 20),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(2), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(3), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(7), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(8), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(14), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(16), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 0),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_MATCH, SI_MAP_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_VAR(1)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_FIXED(40.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(3), SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(40.0), SI_VAR(3)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_ARRAY(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_ARRAY(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(17), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_LABEL, 11),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), -1),
                SI_CMD(ScriptOpcode_GOTO, 12),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(17), SI_VAR(4)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_VAR(3)),
            SI_CMD(ScriptOpcode_GOTO, 11),
            SI_CMD(ScriptOpcode_LABEL, 12),
            SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(17), SI_FIXED(40.0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(10), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(13), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(18), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(0), 1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 1),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
            SI_CMD(ScriptOpcode_CALL, func_80240168_DB7A78, 3, 0, 0),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(0), SI_VAR(1)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), -1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(2), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(3), SI_VAR(1)),
                SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(7), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(8), SI_VAR(1)),
                SI_CMD(ScriptOpcode_SET, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 10),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 10),
            SI_CMD(ScriptOpcode_MATCH, SI_MAP_VAR(2)),
                SI_CMD(ScriptOpcode_CASE_EQ, 0),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(10), SI_FIXED(10.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 1),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DB7C98, SI_ARRAY(18), SI_ARRAY(10), SI_FIXED(0.0), SI_FIXED(10.0), 100, 1, SI_FIXED(0.0)),
                    SI_CMD(ScriptOpcode_ADD, SI_ARRAY(18), 1),
                SI_CMD(ScriptOpcode_CASE_EQ, 2),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DB7C98, SI_VAR(0), SI_ARRAY(10), SI_FIXED(10.0), SI_FIXED(2.0), SI_VAR(1), 0, SI_FIXED(0.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 3),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_DIV, SI_VAR(1), 2),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DB7C98, SI_VAR(0), SI_ARRAY(10), SI_FIXED(1.0), SI_FIXED(10.0), SI_VAR(1), 0, SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DB79F4, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DB792C, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(2)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DB7A78, 3, 2, SI_ARRAY(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(2), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 1),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DB792C, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DB79F4, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DB792C, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(7)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DB7A78, 3, 2, SI_ARRAY(9)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(7), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 0),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DB792C, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(1), 1),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DB792C, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(5), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(0)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DB792C, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(5)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(1)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_ARRAY(5)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(1), SI_ARRAY(6)),
            SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(2.0)),
            SI_CMD(ScriptOpcode_DIV_F, SI_VAR(1), SI_FIXED(2.0)),
            SI_CMD(ScriptOpcode_CALL, func_8024001C_DB792C, SI_VAR(2), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_ARRAY(11), SI_ARRAY(12)),
            SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(13), SI_VAR(3)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(14), SI_ARRAY(13)),
            SI_CMD(ScriptOpcode_MUL_F, SI_ARRAY(14), SI_FIXED(1.4326171875)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(15), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_LT, SI_ARRAY(15), 0xFFFFFFF6),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(-10.0)),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(3), 0),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 511),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 132),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(15), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(15), 10),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(10.0)),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(3), 0),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 510),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 1),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 510),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_802401EC_DB7AFC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DB7BA0, 0xFFFFFFFC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
                SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DB7BA0, 0, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_CASE_EQ, 100),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 104, SI_FIXED(79.1005859375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 107, SI_FIXED(-35.099609375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 104, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 107, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 111, SI_FIXED(40.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 113, SI_FIXED(-39.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 114, SI_MAP_VAR(11), SI_FIXED(10.0), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 114, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(180.0)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 114, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 104, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 107, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 104, SI_FIXED(-79.099609375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 107, SI_FIXED(35.1005859375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 111, SI_FIXED(-40.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 113, SI_FIXED(39.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 111, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 113, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 111, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 113, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 104, SI_FIXED(0.0), SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(15)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 107, SI_FIXED(0.0), SI_VAR(0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(16), SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(16), 360),
        SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(16), SI_FIXED(360.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 109, SI_ARRAY(16), SI_FIXED(0.0), SI_FIXED(1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242918) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80242980) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(0, SI_VAR(1), 45, 0);
    loop {
        UpdateLerp();
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamTarget(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80242A44) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(SI_VAR(1), 0, 40, 0);
    loop {
        UpdateLerp();
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamTarget(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
        sleep 1;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242B5C) = {
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(4.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(0.7001953125)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(1), 50, SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
        SI_CMD(ScriptOpcode_CALL, InterpPlayerYaw, SI_VAR(3), 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(180.0)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0xFFFFFFFC, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0xFFFFFFFC, SI_VAR(1), 50, SI_VAR(2), 10),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(0.5)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0xFFFFFFFC, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(3), 180),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(3), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(4), SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(5), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(6), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(100.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0001),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(4), SI_VAR(5), SI_FIXED(20.0), SI_VAR(6)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(4), 50, SI_VAR(5), 10),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 5, 0xF0009),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 33, 0, 8),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242F5C) = {
    SI_CMD(ScriptOpcode_CALL, StopSound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 32, 0, 8),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(100.0), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(0), 50, SI_VAR(1), 10),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(2.0)),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(9)),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(3), SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0001),
        SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, 270, 15),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(60.0)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(3.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(0), SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(1), 30),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 258),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(2.5)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(0), SI_VAR(1), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80243258) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            GotoMapSpecial(D_80245988_DBD298, 3, 1);
        }
        == 1 {
            GotoMapSpecial(D_80245980_DBD290, 3, 1);
        }
        == 2 {
            GotoMapSpecial(D_80245978_DBD288, 2, 1);
        }
        == 3 {
            GotoMapSpecial(D_80245970_DBD280, 3, 1);
        }
    }
    sleep 100;
});

Script N(script_80243318) = SCRIPT({
    match SI_AREA_VAR(5) {
        0..1
        match SI_AREA_VAR(6) {
            == 0 {
                GotoMapSpecial(D_80245988_DBD298, 2, 1);
            }
            == 1 {
                GotoMapSpecial(D_80245980_DBD290, 2, 1);
            }
            == 2 {
                GotoMapSpecial(D_80245978_DBD288, 1, 1);
            }
            == 3 {
                GotoMapSpecial(D_80245970_DBD280, 2, 1);
            }
        }
        == 2 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80245988_DBD298, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80245980_DBD290, 2, 1);
                    } else {
                        GotoMapSpecial(D_80245988_DBD298, 2, 1);
                    }
                }
                == 3 {
                    GotoMapSpecial(D_80245970_DBD280, 2, 1);
                }
            }
        }
        == 3 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80245988_DBD298, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80245980_DBD290, 2, 1);
                    } else {
                        GotoMapSpecial(D_80245988_DBD298, 2, 1);
                    }
                }
                == 2 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80245978_DBD288, 1, 1);
                    } else {
                        GotoMapSpecial(D_80245988_DBD298, 2, 1);
                    }
                }
            }
        }
    }
    sleep 100;
});

Script N(script_802435BC) = SCRIPT({
10:
    sleep 1;
    func_80240518_DB7E28();
    if (SI_VAR(0) != 1) {
        goto 10;
    }
    if (SI_AREA_FLAG(2) == 0) {
        await N(script_80243258);
    } else {
        await N(script_80243318);
    }
});

Script N(script_8024364C) = SCRIPT({
    SetTexPanner(115, 2);
    EnableTexPanning(115, 1);
    SI_MAP_VAR(9) = 0x8000;
    spawn {
        loop {
            SetTexPanOffset(2, 0, SI_MAP_VAR(9), 0);
            sleep 1;
        }
    }
    SI_VAR(5) = 0;
0:
    SI_VAR(5) += 2;
    if (SI_VAR(5) > 360) {
        SI_VAR(5) -= 360;
    }
    RotateModel(115, SI_VAR(5), 0, 0, -1);
    sleep 1;
    if (SI_MAP_FLAG(1) == 1) {
        goto 10;
    }
    goto 0;
10:
    if (SI_AREA_FLAG(2) == 0) {
        SI_VAR(2) = 270;
        EnableTexPanning(126, 0);
        EnableTexPanning(120, 1);
    } else {
        SI_VAR(2) = 90;
        EnableTexPanning(120, 0);
        EnableTexPanning(126, 1);
    }
    if (SI_VAR(2) < SI_VAR(5)) {
        SI_VAR(2) += 360;
    }
    SI_VAR(6) = SI_AREA_FLAG(2);
    MakeLerp(SI_VAR(5), SI_VAR(2), 60, 8);
    UpdateLerp();
    SI_VAR(4) = -1;
11:
    UpdateLerp();
    if (SI_VAR(2) < SI_VAR(0)) {
        SI_VAR(3) = 0;
    } else {
        SI_VAR(3) = 1;
    }
    if (SI_VAR(4) != -1) {
        if (SI_VAR(3) != SI_VAR(4)) {
            PlaySound(505);
        }
    }
    SI_VAR(4) = SI_VAR(3);
    RotateModel(115, SI_VAR(0), 0, 0, -1);
    sleep 1;
    if (SI_AREA_FLAG(2) != SI_VAR(6)) {
        goto 21;
    }
    if (SI_VAR(1) == 1) {
        goto 11;
    }
    PlaySound(506);
    if (SI_AREA_FLAG(2) == 0) {
        SI_MAP_VAR(9) = 0x4000;
    } else {
        SI_MAP_VAR(9) = 0xC000;
    }
20:
    sleep 1;
    if (SI_AREA_FLAG(2) == SI_VAR(6)) {
        goto 20;
    }
21:
    SI_VAR(5) = SI_VAR(0);
    goto 10;
});

Script N(script_80243A6C) = SCRIPT({
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 4) {
            return;
        }
    }
    if (SI_MAP_FLAG(1) == 1) {
        if (SI_AREA_FLAG(2) == 0) {
            return;
        }
    }
    SI_MAP_FLAG(1) = 1;
    SI_AREA_FLAG(2) = 0;
    MakeLerp(0, 0xFFFFFFEE, 15, 0);
0:
    UpdateLerp();
    TranslateModel(119, 0, SI_VAR(0), 0);
    TranslateModel(120, 0, SI_VAR(0), 0);
    UpdateColliderTransform(57);
    UpdateColliderTransform(58);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(119, 0, SI_VAR(0), 0);
    TranslateModel(120, 0, SI_VAR(0), 0);
    UpdateColliderTransform(57);
    UpdateColliderTransform(58);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_80243CA4) = SCRIPT({
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 4) {
            return;
        }
    }
    if (SI_MAP_FLAG(1) == 1) {
        if (SI_AREA_FLAG(2) == 1) {
            return;
        }
    }
    SI_MAP_FLAG(1) = 1;
    SI_AREA_FLAG(2) = 1;
    MakeLerp(0, 0xFFFFFFEE, 15, 0);
0:
    UpdateLerp();
    TranslateModel(125, 0, SI_VAR(0), 0);
    TranslateModel(126, 0, SI_VAR(0), 0);
    UpdateColliderTransform(63);
    UpdateColliderTransform(64);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(125, 0, SI_VAR(0), 0);
    TranslateModel(126, 0, SI_VAR(0), 0);
    UpdateColliderTransform(63);
    UpdateColliderTransform(64);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_UpdateTexturePan_80243EDC) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_8024055C_DB7E6C();
                    return;
                }
            }
        }
    }
    func_80240680_DB7F90();
});

Script N(script_80243F78) = SCRIPT({
    SI_MAP_FLAG(1) = 0;
    SI_MAP_FLAG(10) = 0;
    spawn N(script_8024364C);
    ParentColliderToModel(57, 119);
    ParentColliderToModel(58, 120);
    ParentColliderToModel(63, 125);
    ParentColliderToModel(64, 126);
    bind N(script_80243A6C) to TriggerFlag_FLOOR_TOUCH 57;
    bind N(script_80243A6C) to TriggerFlag_WALL_HAMMER 58;
    bind N(script_80243CA4) to TriggerFlag_FLOOR_TOUCH 63;
    bind N(script_80243CA4) to TriggerFlag_WALL_HAMMER 64;
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFBB4;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243EDC);
    }
});

s32 N(unk_80244160)[] = {
    0x00000032, 0x0000002D,
};

s32 N(unk_80244168)[] = {
    0xF24A7334, 0xF249ED67, 0xF24B82A7, 0xF24D062B, 0xF248C887, 0xF2500045, 0xF244F3A2, 0xF250F60B,
    0xF243CEBC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80244198) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    spawn N(script_80242A44);
    SI_AREA_VAR(5) = 1;
    SI_VAR(0) = N(unk_80244168);
    await N(script_80242B5C);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_80244168);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) < 350) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_80245990_DBD2A0, 0);
    SI_SAVE_VAR(215) = 1;
    sleep 100;
});

s32 N(unk_80244308)[] = {
    0xF24A7334, 0xF249ED67, 0xF24E52A7, 0xF247E07A, 0xF24B122B, 0xF242AA80, 0xF24A7B9E, 0xF2411A80,
    0xF24A7CBC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80244338) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    spawn N(script_80242A44);
    SI_AREA_VAR(5) = 1;
    SI_VAR(0) = N(unk_80244308);
    await N(script_80242B5C);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_80244308);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) > 0xFFFFFE20) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_80245990_DBD2A0, 1);
    SI_SAVE_VAR(215) = 0;
    sleep 100;
});

s32 N(unk_802444A8)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA34, 0xF2500045, 0xF244F3A2, 0xF24D062B, 0xF248C887, 0xF249E0FB,
    0xF24A2E4D, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_802444D8)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA34, 0xF2500045, 0xF244F3A2, 0xF24D062B, 0xF248C887, 0xF247E07A,
    0xF24B122B, 0xF242AA80, 0xF24A7B9E, 0xF2411A80, 0xF24A7CBC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80244518) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    if (SI_AREA_VAR(6) == 1) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_802444A8);
        SI_MAP_VAR(2) = 2;
        spawn N(script_80241750);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        SI_VAR(11) = spawn N(script_80242918);
10:
        if (SI_MAP_FLAG(0) == 1) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        kill SI_VAR(11);
        spawn N(script_80242980);
        func_80240000_DB7910();
        SI_VAR(9) = N(unk_80244160);
        await N(script_80242F5C);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF000F);
        ModifyColliderFlags(1, 68, 0x7FFFFE00);
        DisablePlayerPhysics(0);
        EnablePartnerAI();
        DisablePlayerInput(0);
    } else {
        spawn N(script_80242918);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_802444D8);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80241750);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        spawn N(script_802435BC);
20:
        if (SI_MAP_VAR(11) > 0xFFFFFE20) {
            sleep 1;
            goto 20;
        }
        GotoMap(D_80245990_DBD2A0, 1);
        SI_SAVE_VAR(215) = 0;
        sleep 100;
    }
});

s32 N(unk_802447D0)[] = {
    0xF2411A80, 0xF24A7CBC, 0xF24BE200, 0xF242AA80, 0xF24A7B9E, 0xF247E07A, 0xF24B122B, 0xF24B0576,
    0xF249AC80, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80244800)[] = {
    0xF2411A80, 0xF24A7CBC, 0xF24BE200, 0xF242AA80, 0xF24A7B9E, 0xF247E07A, 0xF24B122B, 0xF24D062B,
    0xF248C887, 0xF2500045, 0xF244F3A2, 0xF250F60B, 0xF243CEBC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80244840) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    if (SI_AREA_VAR(6) == 1) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_802447D0);
        SI_MAP_VAR(2) = 2;
        spawn N(script_80241750);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        SI_VAR(11) = spawn N(script_80242918);
10:
        if (SI_MAP_FLAG(0) == 1) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        kill SI_VAR(11);
        spawn N(script_80242980);
        func_80240000_DB7910();
        SI_VAR(9) = N(unk_80244160);
        await N(script_80242F5C);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF000F);
        ModifyColliderFlags(1, 68, 0x7FFFFE00);
        DisablePlayerPhysics(0);
        EnablePartnerAI();
        DisablePlayerInput(0);
    } else {
        spawn N(script_80242918);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80244800);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80241750);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        spawn N(script_802435BC);
20:
        if (SI_MAP_VAR(11) < 350) {
            sleep 1;
            goto 20;
        }
        GotoMap(D_80245990_DBD2A0, 0);
        SI_SAVE_VAR(215) = 1;
        sleep 100;
    }
});

s32 N(intTable_80244AF8)[] = {
    0x00000000, 0x00000003, 0x00000002,
};

s32 N(intTable_80244B04)[] = {
    0x00000002, 0x00000003, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80244B10) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(1), 0),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0006),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(2), 0),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
            SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1101), 0),
                SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E003D),
                SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_CALL, CloseMessage),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80244AF8)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244338)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E003E),
                SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                    SI_CMD(ScriptOpcode_CALL, CloseMessage),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80244AF8)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244338)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_MATCH, SI_SAVE_VAR(0)),
                SI_CMD(ScriptOpcode_CASE_LT, -1),
                    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0006, 0x8C0002, 0, 0xF0012),
                SI_CMD(ScriptOpcode_CASE_LT, 0),
                    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
                    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E003B),
                    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_CALL, CloseMessage),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80244B04)),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                        SI_CMD(ScriptOpcode_END_LOOP),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244198)),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CASE_GE, 0),
                    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
                    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E003C),
                    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                        SI_CMD(ScriptOpcode_CALL, CloseMessage),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80244B04)),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                        SI_CMD(ScriptOpcode_END_LOOP),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244198)),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                    SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_MATCH),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80244F28)[] = {
    0xF24A7334, 0xF249ED67, 0xF24B82A7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80244F40) = SCRIPT({
    await N(script_80243F78);
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80244F28);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80241750);
        SI_MAP_FLAG(0) = 1;
    } else {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
            == 2 {
                spawn N(script_80244840);
            }
            == 3 {
                spawn N(script_80244518);
            } else {
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(1) = N(unk_80244F28);
                SI_MAP_VAR(2) = 0;
                spawn N(script_80241750);
                SI_MAP_FLAG(0) = 1;
            }
        }
    }
});

Script N(script_80245080) = SCRIPT({

});

NpcSettings N(npcSettings_80245090) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = &N(script_80245080),
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

Script N(script_Interact_802450BC) = SCRIPT({
    DisablePlayerInput(1);
    await N(script_80244B10);
    DisablePlayerInput(0);
});

Script N(script_Init_802450F8) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802450BC));
});

Script N(script_Interact_8024511C) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFFC {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF0023);
        }
        < 0xFFFFFFFD {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF0024);
        }
        < 0xFFFFFFFE {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF0025);
        }
        < -1 {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF0026);
        }
        < 0 {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF0027);
        }
        < 2 {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF0028);
        }
        < 4 {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF0029);
        } else {
            SpeakToPlayer(-1, 0x8C0104, 0x8C0101, 0, 0xF002A);
        }
    }
});

Script N(script_Init_8024529C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024511C));
});

StaticNpc N(npcGroup_802452C0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80245090),
        .pos = { 50.0, 50.0, 45.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_802450F8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x008C0001, 0x008C0003, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001,
        },
        .tattle = 0x1A00B8,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80245090),
        .pos = { 55.0, 0.0, 240.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_8024529C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101, 0x008C0101,
        },
        .tattle = 0x1A00B8,
    },
};

NpcGroupList N(npcGroupList_802456A0) = {
    NPC_GROUP(N(npcGroup_802452C0), 0x00000000),
    {},
};

s32 pad_0056B8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802456C0)[] = {
    0x00000000,
};

Script N(script_802456C4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_8024572C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_802456C4);
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

Script N(script_8024580C) = SCRIPT({
    SI_VAR(10) = 105;
    SI_VAR(11) = 1;
    SI_SAVE_FLAG(1138) = 1;
    await N(script_8024572C);
    SI_SAVE_FLAG(269) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0xFFFFFF38, 60, 300, 0, 0x80000000);
    MakeEntity(0x802EA588, 0xFFFFFEE8, 60, 0xFFFFFEDE, 0, 130, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1139));
    MakeEntity(0x802EAE30, 400, 0, 60, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1138));
    AssignScript(N(script_8024580C));
    MakeEntity(0x802EAB04, 100, 0, 400, 0, 40, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1191));
});

s32 pad_005954[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80245960_DBD270

// rodata: D_80245968_DBD278

// rodata: D_80245970_DBD280

// rodata: D_80245978_DBD288

// rodata: D_80245980_DBD290

// rodata: D_80245988_DBD298

// rodata: D_80245990_DBD2A0

s32 pad_005998[] = {
    0x00000000, 0x00000000,
};
