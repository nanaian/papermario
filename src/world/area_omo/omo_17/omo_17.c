#include "omo_17.h"

s32 unk_missing_80240000[7];
s32 pad_00055C[1];
s32 pad_00370C[1];
Script N(script_ExitWalk_802437B0);
Script N(script_ExitWalk_8024380C);
Script N(script_ExitWalk_80243868);
Script N(script_ExitWalk_802438C4);
Script N(script_80243920);
Script N(main);
s32 pad_003AF8[2];
Script N(script_80243B00);
Script N(script_80243DCC);
s32 pad_003DE8[2];
Script N(script_80243DF0);
Script N(script_80244FB8);
Script N(script_80245020);
Script N(script_802450E4);
Script N(script_802451FC);
Script N(script_802455FC);
Script N(script_802458F8);
Script N(script_802459B8);
Script N(script_80245C5C);
Script N(script_80245CEC);
s32 N(unk_80245DA4)[8];
s32 N(unk_80245DC4)[8];
Script N(script_80245DE4);
s32 pad_006004[3];
s32 N(unk_80246010)[12];
Script N(script_80246040);
s32 unk_missing_80246060[11];
Script N(script_NpcAI_802460BC);
Script N(script_NpcAI_80246138);
f32 N(floatTable_80246184)[6];
s32 N(unk_8024619C)[12];
Script N(script_802461CC);
s32 unk_missing_8024623C[11];
Script N(script_80246268);
Script N(script_NpcAI_80246368);
Script N(script_NpcAI_80246440);
Script N(script_NpcAI_802464B0);
Script N(script_802464C0);
Script N(script_802466B4);
Script N(script_802466C4);
Script N(script_NpcAI_802466D4);
s8 N(npcGroup_80246710)[314];
s8 pad_00684A[182];
StaticNpc N(npcGroup_80246900)[4];
StaticNpc N(npcGroup_802470C0)[1];
StaticNpc N(npcGroup_802472B0)[1];
NpcGroupList N(npcGroupList_802474A0);
s32 pad_0074DC[1];
Script N(script_MakeEntities);
s32 pad_0075CC[1];
const char D_802475D0_DF6470[8]; // "omo_05"
const char D_802475D8_DF6478[8]; // "omo_06"
const char D_802475E0_DF6480[8]; // "omo_10"
const char D_802475E8_DF6488[8]; // "omo_08"
const char D_802475F0_DF6490[8]; // "omo_06"
const char D_802475F8_DF6498[8]; // "omo_03"
const char D_80247600_DF64A0[8]; // "omo_05"
s32 pad_007608[2];
s32 pad_0079A4[1];

s32 unk_missing_80240000[] = {
    0x3C03800B, 0x24631D80, 0x94620002, 0x3042FFFE, 0xA4620002, 0x03E00008, 0x24020002,
};

// text: func_8024001C_DEEEBC

// text: func_802400E4_DEEF84

// text: func_80240168_DEF008

// text: func_802401EC_DEF08C

// text: func_80240290_DEF130

// text: func_80240388_DEF228

// text: func_80240518_DEF3B8

s32 pad_00055C[] = {
    0x00000000,
};

// text: func_80240560_DEF400

// text: func_802405D0_DEF470

// text: func_802406A0_DEF540

// text: func_80240738_DEF5D8

// text: func_80240798_DEF638

// text: N(UnkNpcAIFunc4)

// text: func_80240B1C_DEF9BC

// text: func_80240CE0_DEFB80

// text: func_80240FB4_DEFE54

// text: func_80241164_DF0004

// text: N(UnkNpcAIFunc1)

// text: func_8024184C_DF06EC

// text: N(UnkNpcAIFunc2)

// text: func_80241C08_DF0AA8

// text: func_80241C74_DF0B14

// text: N(UnkNpcAIFunc3)

// text: func_80241E0C_DF0CAC

// text: func_8024219C_DF103C

// text: func_802422C0_DF1160

// text: func_802424AC_DF134C

// text: func_8024269C_DF153C

// text: func_802427E0_DF1680

// text: func_802428E0_DF1780

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_80242A08_DF18A8

// text: func_80242F44_DF1DE4

// text: func_802433A0_DF2240

// text: func_802436C0_DF2560

// text: func_802436D4_DF2574

s32 pad_00370C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -600.0f, 0.0f, 135.0f, 90.0f },
    { -600.0f, 10.0f, -135.0f, 90.0f },
    { 600.0f, 0.0f, 135.0f, 270.0f },
    { 600.0f, 10.0f, -135.0f, 270.0f },
    { -600.0f, 10.0f, 0.0f, 90.0f },
    { 600.0f, 10.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900E8,
};

Script N(script_ExitWalk_802437B0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802475D0_DF6470, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024380C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802475D0_DF6470, 1);
    sleep 100;
});

Script N(script_ExitWalk_80243868) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802475D8_DF6478, 0);
    sleep 100;
});

Script N(script_ExitWalk_802438C4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802475D8_DF6478, 1);
    sleep 100;
});

Script N(script_80243920) = SCRIPT({
    bind N(script_ExitWalk_802437B0) to 0x80000 0;
    bind N(script_ExitWalk_8024380C) to 0x80000 8;
    bind N(script_ExitWalk_80243868) to 0x80000 2;
    bind N(script_ExitWalk_802438C4) to 0x80000 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802474A0));
    await N(script_MakeEntities);
    await N(script_80243DCC);
    SetMusicTrack(0, 32, 0, 8);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        4..5
        await N(script_80245DE4);
        sleep 3;
        else {
            SetGroupEnabled(34, 0);
            SI_VAR(0) = N(script_80243920);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

s32 pad_003AF8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243B00) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(41, SI_VAR(0), 0, 0, 1);
    RotateModel(43, SI_VAR(0), 0, 0, 1);
    RotateModel(45, SI_VAR(0), 0, 0, 1);
    RotateModel(47, SI_VAR(0), 0, 0, 1);
    RotateModel(49, SI_VAR(0), 0, 0, 1);
    RotateModel(51, SI_VAR(0), 0, 0, 1);
    RotateModel(53, SI_VAR(0), 0, 0, 1);
    RotateModel(55, SI_VAR(0), 0, 0, 1);
    RotateModel(57, SI_VAR(0), 0, 0, 1);
    RotateModel(59, SI_VAR(0), 0, 0, 1);
    RotateModel(61, SI_VAR(0), 0, 0, 1);
    RotateModel(63, SI_VAR(0), 0, 0, 1);
    RotateModel(65, SI_VAR(0), 0, 0, 1);
    RotateModel(67, SI_VAR(0), 0, 0, 1);
    RotateModel(69, SI_VAR(0), 0, 0, 1);
    RotateModel(71, SI_VAR(0), 0, 0, 1);
    RotateModel(73, SI_VAR(0), 0, 0, 1);
    RotateModel(75, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_80243DCC) = SCRIPT({
    spawn N(script_80243B00);
});

s32 pad_003DE8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80243DF0) = {
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
            SI_CMD(ScriptOpcode_CALL, func_80240168_DEF008, 3, 0, 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DEF228, SI_ARRAY(18), SI_ARRAY(10), SI_FIXED(0.0), SI_FIXED(10.0), 100, 1, SI_FIXED(0.0)),
                    SI_CMD(ScriptOpcode_ADD, SI_ARRAY(18), 1),
                SI_CMD(ScriptOpcode_CASE_EQ, 2),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DEF228, SI_VAR(0), SI_ARRAY(10), SI_FIXED(10.0), SI_FIXED(2.0), SI_VAR(1), 0, SI_FIXED(0.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 3),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_DIV, SI_VAR(1), 2),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DEF228, SI_VAR(0), SI_ARRAY(10), SI_FIXED(1.0), SI_FIXED(10.0), SI_VAR(1), 0, SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DEEF84, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DEEEBC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(2)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DEF008, 3, 2, SI_ARRAY(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(2), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 1),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEEEBC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DEEF84, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DEEEBC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(7)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DEF008, 3, 2, SI_ARRAY(9)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(7), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 0),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEEEBC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(1), 1),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEEEBC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(5), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(0)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEEEBC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
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
            SI_CMD(ScriptOpcode_CALL, func_8024001C_DEEEBC, SI_VAR(2), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
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
            SI_CMD(ScriptOpcode_CALL, func_802401EC_DEF08C, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DEF130, 0xFFFFFFFC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
                SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DEF130, 0, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_CASE_EQ, 100),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 24, SI_FIXED(79.1005859375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 27, SI_FIXED(-35.099609375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 24, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 27, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 31, SI_FIXED(40.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 33, SI_FIXED(-39.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 34, SI_MAP_VAR(11), SI_FIXED(10.0), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 34, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(180.0)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 34, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 24, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 27, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 24, SI_FIXED(-79.099609375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 27, SI_FIXED(35.1005859375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 31, SI_FIXED(-40.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 33, SI_FIXED(39.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 31, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 33, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 31, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 33, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 24, SI_FIXED(0.0), SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(15)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 27, SI_FIXED(0.0), SI_VAR(0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(16), SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(16), 360),
        SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(16), SI_FIXED(360.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 29, SI_ARRAY(16), SI_FIXED(0.0), SI_FIXED(1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80244FB8) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80245020) = SCRIPT({
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

Script N(script_802450E4) = SCRIPT({
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
Script N(script_802451FC) = {
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
Script N(script_802455FC) = {
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

Script N(script_802458F8) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            GotoMapSpecial(D_802475F8_DF6498, 3, 1);
        }
        == 1 {
            GotoMapSpecial(D_802475F0_DF6490, 3, 1);
        }
        == 2 {
            GotoMapSpecial(D_802475E8_DF6488, 2, 1);
        }
        == 3 {
            GotoMapSpecial(D_802475E0_DF6480, 3, 1);
        }
    }
    sleep 100;
});

Script N(script_802459B8) = SCRIPT({
    match SI_AREA_VAR(5) {
        0..1
        match SI_AREA_VAR(6) {
            == 0 {
                GotoMapSpecial(D_802475F8_DF6498, 2, 1);
            }
            == 1 {
                GotoMapSpecial(D_802475F0_DF6490, 2, 1);
            }
            == 2 {
                GotoMapSpecial(D_802475E8_DF6488, 1, 1);
            }
            == 3 {
                GotoMapSpecial(D_802475E0_DF6480, 2, 1);
            }
        }
        == 2 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_802475F8_DF6498, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_802475F0_DF6490, 2, 1);
                    } else {
                        GotoMapSpecial(D_802475F8_DF6498, 2, 1);
                    }
                }
                == 3 {
                    GotoMapSpecial(D_802475E0_DF6480, 2, 1);
                }
            }
        }
        == 3 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_802475F8_DF6498, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_802475F0_DF6490, 2, 1);
                    } else {
                        GotoMapSpecial(D_802475F8_DF6498, 2, 1);
                    }
                }
                == 2 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_802475E8_DF6488, 1, 1);
                    } else {
                        GotoMapSpecial(D_802475F8_DF6498, 2, 1);
                    }
                }
            }
        }
    }
    sleep 100;
});

Script N(script_80245C5C) = SCRIPT({
10:
    sleep 1;
    func_80240518_DEF3B8();
    if (SI_VAR(0) != 1) {
        goto 10;
    }
    if (SI_AREA_FLAG(2) == 0) {
        await N(script_802458F8);
    } else {
        await N(script_802459B8);
    }
});

Script N(script_80245CEC) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFFDA8) {
        SI_VAR(0) = 0xFFFFFDA8;
    }
    if (SI_VAR(0) > 600) {
        SI_VAR(0) = 600;
    }
    SetCamTarget(0, SI_VAR(0), 50.0, SI_VAR(2));
    sleep 1;
    goto 0;
});

s32 N(unk_80245DA4)[] = {
    0xF23F3A80, 0xF24A7A80, 0xF24BE280, 0xF255BA80, 0xF24A7A80, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80245DC4)[] = {
    0xF255BA80, 0xF24A7A80, 0xF24EB280, 0xF23F3A80, 0xF24A7A80, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80245DE4) = SCRIPT({
    ParentColliderToModel(52, 17);
    ParentColliderToModel(53, 17);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    spawn N(script_80245CEC);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 0;
            SI_MAP_VAR(1) = N(unk_80245DA4);
            SI_MAP_VAR(2) = 0;
            spawn N(script_80243DF0);
            SI_MAP_FLAG(0) = 1;
            spawn {
10:
                if (SI_MAP_VAR(11) < 600) {
                    sleep 1;
                    goto 10;
                }
                GotoMap(D_802475F0_DF6490, 0);
                sleep 100;
            }
        }
        == 5 {
            SI_MAP_VAR(0) = 0;
            SI_MAP_VAR(1) = N(unk_80245DC4);
            SI_MAP_VAR(2) = 0;
            spawn N(script_80243DF0);
            SI_MAP_FLAG(0) = 1;
            spawn {
20:
                if (SI_MAP_VAR(11) > 0xFFFFFDA8) {
                    sleep 1;
                    goto 20;
                }
                GotoMap(D_80247600_DF64A0, 1);
                sleep 100;
            }
        }
    }
});

s32 pad_006004[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80246010)[] = {
    0x40000000, 0x0000003C, 0x0000000F, 0x42C80000, 0x41F00000, 0x00000004, 0x40800000, 0x00000006,
    0x00000001, 0x430C0000, 0x41F00000, 0x00000001,
};

Script N(script_80246040) = SCRIPT({
    func_80240798_DEF638(N(unk_80246010));
});

s32 unk_missing_80246060[] = {
    0x00000000, 0x00170016, 0x00000000, 0x00000000, N(script_80246040), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000E0001,
};

NpcAISettings N(aISettings_8024608C) = {
    .moveSpeed = 3.0f,
    .moveTime = 0x1E,
    .waitTime = 0x3C,
    .alertRadius = 100.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x4,
    .chaseSpeed = 5.0f,
    .unk_1C = 0x8,
    .unk_20 = 0x1,
    .chaseRadius = 140.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802460BC) = SCRIPT({
    DoBasicAI(N(aISettings_8024608C));
});

NpcSettings N(npcSettings_802460DC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802460BC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80246108) = {
    .moveSpeed = 1.7f,
    .moveTime = 0x50,
    .waitTime = 0x1,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x4,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 140.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80246138) = SCRIPT({
    func_80240CE0_DEFB80(N(aISettings_80246108));
});

NpcSettings N(npcSettings_80246158) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80246138),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0x1,
};

f32 N(floatTable_80246184)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

s32 N(unk_8024619C)[] = {
    0x3FE66666, 0x00000000, 0x00000000, 0x42F00000, 0x41F00000, 0x00000003, 0x40800000, 0x0000003C,
    0x00000003, 0x43160000, 0x41F00000, 0x00000001,
};

Script N(script_802461CC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_802422C0_DF1160(N(unk_8024619C));
});

s32 unk_missing_8024623C[] = {
    0x00000000, 0x00190016, 0x00000000, 0x00000000, N(script_802461CC), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000E0001,
};

Script N(script_80246268) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
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

NpcAISettings N(aISettings_80246338) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 90.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 3.8f,
    .unk_1C = 0x8,
    .unk_20 = 0x1,
    .chaseRadius = 140.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80246368) = SCRIPT({
    func_802436C0_DF2560();
    SetSelfVar(0, 0);
    SetSelfVar(1, 12);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    func_802433A0_DF2240(N(aISettings_80246338));
});

NpcSettings N(npcSettings_802463E4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80246368),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80246410) = {
    .moveSpeed = 8.0f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 4.0f,
    .unk_10 = 0.5f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80246440) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
    SetSelfVar(2, 12);
    SetSelfVar(3, 13);
    func_80242A08_DF18A8(N(aISettings_80246410));
});

Script N(script_NpcAI_802464B0) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_802464C0) = {
    SI_CMD(ScriptOpcode_CALL, func_802436D4_DF2574),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_802464B0)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80242F44_DF1DE4),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 4),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 0, 0xFFFFFC18, 0),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, 0x800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80246440)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_80246688) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x7,
    .radius = 0x7,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80246440),
    .onHit = &N(script_802464C0),
    .aux = NULL,
    .onDefeat = &N(script_80246268),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

Script N(script_802466B4) = SCRIPT({

});

Script N(script_802466C4) = SCRIPT({

});

Script N(script_NpcAI_802466D4) = SCRIPT({

});

NpcSettings N(npcSettings_802466E4) = {
    .unk_00 = { 0, 0x8C, 0x2, 0x1 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_802466B4),
    .onInteract = &N(script_802466C4),
    .ai = &N(script_NpcAI_802466D4),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

s8 N(npcGroup_80246710)[] = {
    0x00, 0x00, 0x00, 0x00, 0x80, 0x24, 0x66, 0xE4, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x7A, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

s8 pad_00684A[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

StaticNpc N(npcGroup_80246900)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802463E4),
        .pos = { -305.0, 0.0, 135.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DUSTY_HAMMER, 2 }, { ItemId_PEBBLE, 2 } },
        .movement = { 0xFFFFFECF, 0x00000000, 0x00000087, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFECF, 0x00000000, 0x00000087, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003F0002, 0x003F0004, 0x003F0005, 0x003F0004, 0x003F0002, 0x003F0002, 0x003F000B, 0x003F000B, 0x003F0015, 0x003F0016, 0x003F0002, 0x003F0002, 0x003F0002, 0x003F0002, 0x003F0002, 0x003F0002,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80246688),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80246688),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80246688),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010,
        },
    },
};

StaticNpc N(npcGroup_802470C0)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802460DC),
        .pos = { 354.0, 10.0, -113.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000162, 0x0000000A, 0xFFFFFF8F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000162, 0x0000000A, 0xFFFFFF8F, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003E0001, 0x003E0002, 0x003E0003, 0x003E0002, 0x003E0001, 0x003E0001, 0x003E0006, 0x003E0006, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001,
        },
    },
};

StaticNpc N(npcGroup_802472B0)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80246158),
        .pos = { -150.0, 10.0, -125.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MYSTERY, 5 }, { ItemId_FRIGHT_JAR, 5 } },
        .movement = { 0xFFFFFF6A, 0x0000000A, 0xFFFFFF83, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF6A, 0x0000000A, 0xFFFFFF83, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003C0001, 0x003C0003, 0x003C0004, 0x003C0003, 0x003C0001, 0x003C0001, 0x003C0008, 0x003C0008, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001,
        },
    },
};

NpcGroupList N(npcGroupList_802474A0) = {
    NPC_GROUP(N(npcGroup_80246900), 0x10170007),
    NPC_GROUP(N(npcGroup_802470C0), 0x101D0007),
    NPC_GROUP(N(npcGroup_802472B0), 0x102B0007),
    NPC_GROUP(N(npcGroup_80246710), 0x00000000),
    {},
};

s32 pad_0074DC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 0xFFFFFFB5, 120, 135, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1186));
    MakeEntity(0x802EA564, 0xFFFFFFCE, 70, 0xFFFFFF6A, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1187));
    MakeEntity(0x802EA564, 0, 70, 0xFFFFFF6A, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1188));
    MakeEntity(0x802EA0E8, 0xFFFFFFE7, 70, 0xFFFFFF6A, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1189));
});

s32 pad_0075CC[] = {
    0x00000000,
};

// rodata: D_802475D0_DF6470

// rodata: D_802475D8_DF6478

// rodata: D_802475E0_DF6480

// rodata: D_802475E8_DF6488

// rodata: D_802475F0_DF6490

// rodata: D_802475F8_DF6498

// rodata: D_80247600_DF64A0

s32 pad_007608[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80247610_DF64B0

// rodata: D_80247618_DF64B8

// rodata: jtbl_80247620_DF64C0

// rodata: D_802477B0_DF6650

// rodata: D_802477B8_DF6658

// rodata: jtbl_802477C0_DF6660

// rodata: D_80247950_DF67F0

// rodata: D_80247958_DF67F8

// rodata: D_80247960_DF6800

// rodata: jtbl_80247968_DF6808

s32 pad_0079A4[] = {
    0x00000000,
};

// rodata: D_802479A8_DF6848

// rodata: D_802479B0_DF6850

// rodata: D_802479B8_DF6858

// rodata: D_802479C0_DF6860

// rodata: D_802479C8_DF6868

// rodata: jtbl_802479D0_DF6870
