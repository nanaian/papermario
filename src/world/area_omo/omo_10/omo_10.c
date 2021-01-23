#include "omo_10.h"

s32 pad_000868[2];
Script N(script_802408F0);
Script N(script_ExitWalk_802409C0);
Script N(script_ExitWalk_80240A1C);
Script N(script_80240A78);
Script N(script_EnterWalk_80240AC0);
Script N(main);
s32 pad_000C84[3];
Script N(script_80240C90);
Script N(script_80240DBC);
Script N(script_80240FAC);
Script N(script_80241078);
s32 pad_0010AC[1];
Script N(script_802410B0);
Script N(script_80242278);
Script N(script_802422E0);
Script N(script_802423A4);
Script N(script_802424BC);
Script N(script_802428BC);
Script N(script_80242BB8);
Script N(script_80242C78);
Script N(script_80242F1C);
Script N(script_80242FAC);
Script N(script_802433CC);
Script N(script_80243604);
Script N(script_UpdateTexturePan_8024383C);
Script N(script_802438D8);
s32 N(unk_80243AC0)[2];
s32 N(unk_80243AC8)[12];
Script N(script_80243AF8);
s32 N(unk_80243C68)[14];
Script N(script_80243CA0);
s32 N(unk_80243E10)[14];
s32 N(unk_80243E48)[20];
Script N(script_80243E98);
s32 N(unk_80244150)[14];
s32 N(unk_80244188)[18];
Script N(script_802441D0);
s32 N(intTable_80244488)[3];
s32 N(intTable_80244494)[3];
Script N(script_802444A0);
s32 N(unk_802446B8)[6];
Script N(script_802446D0);
Script N(script_80244810);
Script N(script_Interact_8024484C);
Script N(script_Init_80244888);
Script N(script_Interact_802448AC);
Script N(script_Init_80244950);
StaticNpc N(npcGroup_80244974)[2];
NpcGroupList N(npcGroupList_80244D54);
s32 pad_004D6C[1];
Script N(script_MakeEntities);
s32 pad_004E38[2];
const char D_80244E40_DDC7F0[8]; // "omo_11"
const char D_80244E48_DDC7F8[8]; // "omo_02"
const char D_80244E50_DDC800[8]; // "omo_10"
const char D_80244E58_DDC808[8]; // "omo_08"
const char D_80244E60_DDC810[8]; // "omo_06"
const char D_80244E68_DDC818[8]; // "omo_03"
const char D_80244E70_DDC820[8]; // "omo_16"
s32 pad_004E78[2];

// text: func_80240000_DD79B0

// text: func_8024001C_DD79CC

// text: func_802400E4_DD7A94

// text: func_80240168_DD7B18

// text: func_802401EC_DD7B9C

// text: func_80240290_DD7C40

// text: func_80240388_DD7D38

// text: func_80240518_DD7EC8

// text: func_8024055C_DD7F0C

// text: func_80240680_DD8030

s32 pad_000868[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -330.0f, 0.0f, 330.0f, 45.0f },
    { 330.0f, 0.0f, 330.0f, 315.0f },
    { -330.0f, 10.0f, -330.0f, 135.0f },
    { 330.0f, 10.0f, -330.0f, 225.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900E2,
};

Script N(script_802408F0) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SetMusicTrack(0, 32, 0, 8);
    } else {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
            0..1
            SetMusicTrack(0, 32, 0, 8);
            else {
                SetMusicTrack(0, 33, 0, 8);
            }
        }
    }
});

Script N(script_ExitWalk_802409C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244E40_DDC7F0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240A1C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244E48_DDC7F8, 0);
    sleep 100;
});

Script N(script_80240A78) = SCRIPT({
    bind N(script_ExitWalk_802409C0) to 0x80000 7;
    bind N(script_ExitWalk_80240A1C) to 0x80000 0;
});

Script N(script_EnterWalk_80240AC0) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240A78);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        0..1
        SI_VAR(0) = N(script_80240A78);
        spawn EnterWalk;
        sleep 1;
        else {
            spawn N(script_80240A78);
            sleep 3;
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
    MakeNpcs(1, N(npcGroupList_80244D54));
    await N(script_MakeEntities);
    await N(script_80241078);
    await N(script_802408F0);
    await N(script_802446D0);
    spawn N(script_EnterWalk_80240AC0);
    sleep 1;
});

s32 pad_000C84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240C90) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(75, SI_VAR(0), 0, 0, 1);
    RotateModel(77, SI_VAR(0), 0, 0, 1);
    RotateModel(79, SI_VAR(0), 0, 0, 1);
    RotateModel(81, SI_VAR(0), 0, 0, 1);
    RotateModel(83, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_80240DBC) = SCRIPT({
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(60, SI_VAR(0), 0, -1, 0);
    RotateModel(62, SI_VAR(0), 0, 1, 0);
    RotateModel(64, SI_VAR(0), 0, -1, 0);
    RotateModel(66, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(60, SI_VAR(0), 0, -1, 0);
    RotateModel(62, SI_VAR(0), 0, 1, 0);
    RotateModel(64, SI_VAR(0), 0, -1, 0);
    RotateModel(66, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_80240FAC) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(49, SI_VAR(0), 0, 0, 1);
    RotateModel(54, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_80241078) = SCRIPT({
    spawn N(script_80240C90);
    spawn N(script_80240DBC);
    spawn N(script_80240FAC);
});

s32 pad_0010AC[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_802410B0) = {
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
            SI_CMD(ScriptOpcode_CALL, func_80240168_DD7B18, 3, 0, 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DD7D38, SI_ARRAY(18), SI_ARRAY(10), SI_FIXED(0.0), SI_FIXED(10.0), 100, 1, SI_FIXED(0.0)),
                    SI_CMD(ScriptOpcode_ADD, SI_ARRAY(18), 1),
                SI_CMD(ScriptOpcode_CASE_EQ, 2),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DD7D38, SI_VAR(0), SI_ARRAY(10), SI_FIXED(10.0), SI_FIXED(2.0), SI_VAR(1), 0, SI_FIXED(0.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 3),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_DIV, SI_VAR(1), 2),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DD7D38, SI_VAR(0), SI_ARRAY(10), SI_FIXED(1.0), SI_FIXED(10.0), SI_VAR(1), 0, SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DD7A94, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DD79CC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(2)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DD7B18, 3, 2, SI_ARRAY(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(2), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 1),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DD79CC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DD7A94, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DD79CC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(7)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DD7B18, 3, 2, SI_ARRAY(9)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(7), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 0),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DD79CC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(1), 1),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DD79CC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(5), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(0)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DD79CC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
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
            SI_CMD(ScriptOpcode_CALL, func_8024001C_DD79CC, SI_VAR(2), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
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
            SI_CMD(ScriptOpcode_CALL, func_802401EC_DD7B9C, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DD7C40, 0xFFFFFFFC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
                SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DD7C40, 0, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_CASE_EQ, 100),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 119, SI_FIXED(79.1005859375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 122, SI_FIXED(-35.099609375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 119, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 122, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 126, SI_FIXED(40.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 128, SI_FIXED(-39.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 129, SI_MAP_VAR(11), SI_FIXED(10.0), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 129, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(180.0)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 129, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 119, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 122, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 119, SI_FIXED(-79.099609375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 122, SI_FIXED(35.1005859375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 126, SI_FIXED(-40.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 128, SI_FIXED(39.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 126, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 128, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 126, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 128, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 119, SI_FIXED(0.0), SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(15)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 122, SI_FIXED(0.0), SI_VAR(0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(16), SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(16), 360),
        SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(16), SI_FIXED(360.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 124, SI_ARRAY(16), SI_FIXED(0.0), SI_FIXED(1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242278) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_802422E0) = SCRIPT({
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

Script N(script_802423A4) = SCRIPT({
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
Script N(script_802424BC) = {
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
Script N(script_802428BC) = {
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

Script N(script_80242BB8) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            GotoMapSpecial(D_80244E68_DDC818, 3, 1);
        }
        == 1 {
            GotoMapSpecial(D_80244E60_DDC810, 3, 1);
        }
        == 2 {
            GotoMapSpecial(D_80244E58_DDC808, 2, 1);
        }
        == 3 {
            GotoMapSpecial(D_80244E50_DDC800, 3, 1);
        }
    }
    sleep 100;
});

Script N(script_80242C78) = SCRIPT({
    match SI_AREA_VAR(5) {
        0..1
        match SI_AREA_VAR(6) {
            == 0 {
                GotoMapSpecial(D_80244E68_DDC818, 2, 1);
            }
            == 1 {
                GotoMapSpecial(D_80244E60_DDC810, 2, 1);
            }
            == 2 {
                GotoMapSpecial(D_80244E58_DDC808, 1, 1);
            }
            == 3 {
                GotoMapSpecial(D_80244E50_DDC800, 2, 1);
            }
        }
        == 2 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80244E68_DDC818, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80244E60_DDC810, 2, 1);
                    } else {
                        GotoMapSpecial(D_80244E68_DDC818, 2, 1);
                    }
                }
                == 3 {
                    GotoMapSpecial(D_80244E50_DDC800, 2, 1);
                }
            }
        }
        == 3 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80244E68_DDC818, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80244E60_DDC810, 2, 1);
                    } else {
                        GotoMapSpecial(D_80244E68_DDC818, 2, 1);
                    }
                }
                == 2 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80244E58_DDC808, 1, 1);
                    } else {
                        GotoMapSpecial(D_80244E68_DDC818, 2, 1);
                    }
                }
            }
        }
    }
    sleep 100;
});

Script N(script_80242F1C) = SCRIPT({
10:
    sleep 1;
    func_80240518_DD7EC8();
    if (SI_VAR(0) != 1) {
        goto 10;
    }
    if (SI_AREA_FLAG(2) == 0) {
        await N(script_80242BB8);
    } else {
        await N(script_80242C78);
    }
});

Script N(script_80242FAC) = SCRIPT({
    SetTexPanner(130, 2);
    EnableTexPanning(130, 1);
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
    RotateModel(130, SI_VAR(5), 0, 0, -1);
    sleep 1;
    if (SI_MAP_FLAG(1) == 1) {
        goto 10;
    }
    goto 0;
10:
    if (SI_AREA_FLAG(2) == 0) {
        SI_VAR(2) = 270;
        EnableTexPanning(141, 0);
        EnableTexPanning(135, 1);
    } else {
        SI_VAR(2) = 90;
        EnableTexPanning(135, 0);
        EnableTexPanning(141, 1);
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
    RotateModel(130, SI_VAR(0), 0, 0, -1);
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

Script N(script_802433CC) = SCRIPT({
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
    TranslateModel(134, 0, SI_VAR(0), 0);
    TranslateModel(135, 0, SI_VAR(0), 0);
    UpdateColliderTransform(51);
    UpdateColliderTransform(52);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(134, 0, SI_VAR(0), 0);
    TranslateModel(135, 0, SI_VAR(0), 0);
    UpdateColliderTransform(51);
    UpdateColliderTransform(52);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_80243604) = SCRIPT({
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
    TranslateModel(140, 0, SI_VAR(0), 0);
    TranslateModel(141, 0, SI_VAR(0), 0);
    UpdateColliderTransform(57);
    UpdateColliderTransform(58);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(140, 0, SI_VAR(0), 0);
    TranslateModel(141, 0, SI_VAR(0), 0);
    UpdateColliderTransform(57);
    UpdateColliderTransform(58);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_UpdateTexturePan_8024383C) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_8024055C_DD7F0C();
                    return;
                }
            }
        }
    }
    func_80240680_DD8030();
});

Script N(script_802438D8) = SCRIPT({
    SI_MAP_FLAG(1) = 0;
    SI_MAP_FLAG(10) = 0;
    spawn N(script_80242FAC);
    ParentColliderToModel(51, 134);
    ParentColliderToModel(52, 135);
    ParentColliderToModel(57, 140);
    ParentColliderToModel(58, 141);
    bind N(script_802433CC) to TriggerFlag_FLOOR_TOUCH 51;
    bind N(script_802433CC) to TriggerFlag_WALL_HAMMER 52;
    bind N(script_80243604) to TriggerFlag_FLOOR_TOUCH 57;
    bind N(script_80243604) to TriggerFlag_WALL_HAMMER 58;
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
        spawn N(script_UpdateTexturePan_8024383C);
    }
});

s32 N(unk_80243AC0)[] = {
    0x0000000A, 0xFFFFFF97,
};

s32 N(unk_80243AC8)[] = {
    0xF24A7170, 0xF2473487, 0xF24BE280, 0xF24C6B4F, 0xF2473487, 0xF24E9480, 0xF246A528, 0xF251F729,
    0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80243AF8) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    spawn N(script_802423A4);
    SI_AREA_VAR(5) = 3;
    SI_VAR(0) = N(unk_80243AC8);
    await N(script_802424BC);
    ModifyColliderFlags(0, 62, 0x7FFFFE00);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_80243AC8);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) < 350) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_80244E70_DDC820, 0);
    SI_SAVE_VAR(215) = 3;
    sleep 100;
});

s32 N(unk_80243C68)[] = {
    0xF24A7170, 0xF2473487, 0xF24EB280, 0xF2487792, 0xF2473487, 0xF2466080, 0xF246A528, 0xF244F4D4,
    0xF244F3C0, 0xF242FDD8, 0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80243CA0) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    spawn N(script_802423A4);
    SI_AREA_VAR(5) = 3;
    SI_VAR(0) = N(unk_80243C68);
    await N(script_802424BC);
    ModifyColliderFlags(0, 62, 0x7FFFFE00);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_80243C68);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) > 0xFFFFFEA2) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_80244E70_DDC820, 1);
    SI_SAVE_VAR(215) = 2;
    sleep 100;
});

s32 N(unk_80243E10)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA2E, 0xF25000B7, 0xF244F44A, 0xF24E9480, 0xF246A528, 0xF24C6B4F,
    0xF2473487, 0xF249D16C, 0xF247348B, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80243E48)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA2E, 0xF25000B7, 0xF244F44A, 0xF24E9480, 0xF246A528, 0xF24C6B4F,
    0xF2473487, 0xF2487792, 0xF2473487, 0xF2466080, 0xF246A528, 0xF244F4D4, 0xF244F3C0, 0xF242FDD8,
    0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80243E98) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    ModifyColliderFlags(0, 62, 0x7FFFFE00);
    if (SI_AREA_VAR(6) == 3) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80243E10);
        SI_MAP_VAR(2) = 2;
        spawn N(script_802410B0);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        SI_VAR(11) = spawn N(script_80242278);
10:
        if (SI_MAP_FLAG(0) == 1) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        kill SI_VAR(11);
        spawn N(script_802422E0);
        func_80240000_DD79B0();
        SI_VAR(9) = N(unk_80243AC0);
        await N(script_802428BC);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0011);
        ModifyColliderFlags(1, 62, 0x7FFFFE00);
        DisablePlayerPhysics(0);
        EnablePartnerAI();
        DisablePlayerInput(0);
    } else {
        spawn N(script_80242278);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80243E48);
        SI_MAP_VAR(2) = 0;
        spawn N(script_802410B0);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        spawn N(script_80242F1C);
20:
        if (SI_MAP_VAR(11) > 0xFFFFFEA2) {
            sleep 1;
            goto 20;
        }
        GotoMap(D_80244E70_DDC820, 1);
        SI_SAVE_VAR(215) = 2;
        sleep 100;
    }
});

s32 N(unk_80244150)[] = {
    0xF243FEF6, 0xF243CEBC, 0xF24CAACD, 0xF244F4D4, 0xF244F3C0, 0xF2466080, 0xF246A528, 0xF2487792,
    0xF2473487, 0xF24B116C, 0xF247348B, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80244188)[] = {
    0xF243FEF6, 0xF243CEBC, 0xF24CAACD, 0xF244F4D4, 0xF244F3C0, 0xF2466080, 0xF246A528, 0xF2487792,
    0xF2473487, 0xF24C6B4F, 0xF2473487, 0xF24E9480, 0xF246A528, 0xF251F729, 0xF2429C51, 0xFFFFFFFF,
    0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_802441D0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    ModifyColliderFlags(0, 62, 0x7FFFFE00);
    if (SI_AREA_VAR(6) == 3) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80244150);
        SI_MAP_VAR(2) = 2;
        spawn N(script_802410B0);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        SI_VAR(11) = spawn N(script_80242278);
10:
        if (SI_MAP_FLAG(0) == 1) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        kill SI_VAR(11);
        spawn N(script_802422E0);
        func_80240000_DD79B0();
        SI_VAR(9) = N(unk_80243AC0);
        await N(script_802428BC);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0011);
        ModifyColliderFlags(1, 62, 0x7FFFFE00);
        DisablePlayerPhysics(0);
        EnablePartnerAI();
        DisablePlayerInput(0);
    } else {
        spawn N(script_80242278);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80244188);
        SI_MAP_VAR(2) = 0;
        spawn N(script_802410B0);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        spawn N(script_80242F1C);
20:
        if (SI_MAP_VAR(11) < 350) {
            sleep 1;
            goto 20;
        }
        GotoMap(D_80244E70_DDC820, 0);
        SI_SAVE_VAR(215) = 3;
        sleep 100;
    }
});

s32 N(intTable_80244488)[] = {
    0x00000002, 0x00000001, 0x00000000,
};

s32 N(intTable_80244494)[] = {
    0x00000000, 0x00000001, 0x00000002,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802444A0) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(1), 0),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0006),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(2), 0),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
            SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0043),
            SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                SI_CMD(ScriptOpcode_CALL, CloseMessage),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80244488)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243CA0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
            SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0042),
            SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                SI_CMD(ScriptOpcode_CALL, CloseMessage),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80244494)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243AF8)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802446B8)[] = {
    0xF24A7170, 0xF2473487, 0xF24BE280, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_802446D0) = SCRIPT({
    await N(script_802438D8);
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_802446B8);
        SI_MAP_VAR(2) = 0;
        spawn N(script_802410B0);
        SI_MAP_FLAG(0) = 1;
    } else {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
            == 2 {
                spawn N(script_802441D0);
            }
            == 3 {
                spawn N(script_80243E98);
            } else {
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(1) = N(unk_802446B8);
                SI_MAP_VAR(2) = 0;
                spawn N(script_802410B0);
                SI_MAP_FLAG(0) = 1;
            }
        }
    }
});

Script N(script_80244810) = SCRIPT({

});

NpcSettings N(npcSettings_80244820) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = &N(script_80244810),
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

Script N(script_Interact_8024484C) = SCRIPT({
    DisablePlayerInput(1);
    await N(script_802444A0);
    DisablePlayerInput(0);
});

Script N(script_Init_80244888) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024484C));
});

Script N(script_Interact_802448AC) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 2 {
            SpeakToPlayer(-1, 0x8C0404, 0x8C0401, 0, 0xF0031);
        }
        < 4 {
            SpeakToPlayer(-1, 0x8C0404, 0x8C0401, 0, 0xF0032);
        } else {
            SpeakToPlayer(-1, 0x8C0404, 0x8C0401, 0, 0xF0033);
        }
    }
});

Script N(script_Init_80244950) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802448AC));
});

StaticNpc N(npcGroup_80244974)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244820),
        .pos = { 10.0, 50.0, -105.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_80244888),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x008C0001, 0x008C0003, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001,
        },
        .tattle = 0x1A00B8,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80244820),
        .pos = { -50.0, 0.0, 80.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_80244950),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401, 0x008C0401,
        },
        .tattle = 0x1A00B8,
    },
};

NpcGroupList N(npcGroupList_80244D54) = {
    NPC_GROUP(N(npcGroup_80244974), 0x00000000),
    {},
};

s32 pad_004D6C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA588, 0xFFFFFEA2, 60, 60, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1176));
    MakeEntity(0x802EA7E0, 250, 60, 55, 0, 0x80000000);
    MakeEntity(0x802E9A18, 150, 60, 55, 0, 0x80000000);
    MakeEntity(0x802EAB04, 0, 0, 200, 0, 32, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1193));
});

s32 pad_004E38[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244E40_DDC7F0

// rodata: D_80244E48_DDC7F8

// rodata: D_80244E50_DDC800

// rodata: D_80244E58_DDC808

// rodata: D_80244E60_DDC810

// rodata: D_80244E68_DDC818

// rodata: D_80244E70_DDC820

s32 pad_004E78[] = {
    0x00000000, 0x00000000,
};
