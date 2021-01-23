#include "omo_16.h"

s32 unk_missing_80240000[7];
Script N(main);
s32 pad_000728[2];
Script N(script_80240730);
Script N(script_802418F8);
Script N(script_80241960);
Script N(script_80241A24);
Script N(script_80241B3C);
Script N(script_80241F3C);
Script N(script_80242238);
Script N(script_802422F8);
Script N(script_8024259C);
Script N(script_8024262C);
Script N(script_802428CC);
s32 N(unk_80242984)[8];
s32 N(unk_802429A4)[8];
Script N(script_802429C4);
s32 pad_002D5C[1];
Script N(script_80242D60);
StaticNpc N(npcGroup_80242D9C)[1];
NpcGroupList N(npcGroupList_80242F8C);
s32 pad_002FA4[3];
const char D_80242FB0_DEEE80[8]; // "omo_10"
const char D_80242FB8_DEEE88[8]; // "omo_08"
const char D_80242FC0_DEEE90[8]; // "omo_06"
const char D_80242FC8_DEEE98[8]; // "omo_03"

s32 unk_missing_80240000[] = {
    0x3C03800B, 0x24631D80, 0x94620002, 0x3042FFFE, 0xA4620002, 0x03E00008, 0x24020002,
};

// text: func_8024001C_DEBEEC

// text: func_802400E4_DEBFB4

// text: func_80240168_DEC038

// text: func_802401EC_DEC0BC

// text: func_80240290_DEC160

// text: func_80240388_DEC258

// text: func_80240518_DEC3E8

// text: func_8024055C_DEC42C

EntryList N(entryList) = {
    { -1460.0f, 50.0f, 0.0f, 90.0f },
    { 1460.0f, 50.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x0,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242F8C));
    SetMusicTrack(0, 33, 0, 8);
    await N(script_802429C4);
    sleep 3;
});

s32 pad_000728[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80240730) = {
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
            SI_CMD(ScriptOpcode_CALL, func_80240168_DEC038, 3, 0, 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DEC258, SI_ARRAY(18), SI_ARRAY(10), SI_FIXED(0.0), SI_FIXED(10.0), 100, 1, SI_FIXED(0.0)),
                    SI_CMD(ScriptOpcode_ADD, SI_ARRAY(18), 1),
                SI_CMD(ScriptOpcode_CASE_EQ, 2),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DEC258, SI_VAR(0), SI_ARRAY(10), SI_FIXED(10.0), SI_FIXED(2.0), SI_VAR(1), 0, SI_FIXED(0.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 3),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_DIV, SI_VAR(1), 2),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DEC258, SI_VAR(0), SI_ARRAY(10), SI_FIXED(1.0), SI_FIXED(10.0), SI_VAR(1), 0, SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DEBFB4, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DEBEEC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(2)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DEC038, 3, 2, SI_ARRAY(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(2), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 1),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEBEEC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DEBFB4, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DEBEEC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(7)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DEC038, 3, 2, SI_ARRAY(9)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(7), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 0),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEBEEC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(1), 1),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEBEEC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(5), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(0)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DEBEEC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
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
            SI_CMD(ScriptOpcode_CALL, func_8024001C_DEBEEC, SI_VAR(2), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
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
            SI_CMD(ScriptOpcode_CALL, func_802401EC_DEC0BC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DEC160, 0xFFFFFFFC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
                SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DEC160, 0, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_CASE_EQ, 100),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 96, SI_FIXED(79.1005859375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 99, SI_FIXED(-35.099609375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 96, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 99, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 103, SI_FIXED(40.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 105, SI_FIXED(-39.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 106, SI_MAP_VAR(11), SI_FIXED(10.0), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 106, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(180.0)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 106, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 96, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 99, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 96, SI_FIXED(-79.099609375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 99, SI_FIXED(35.1005859375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 103, SI_FIXED(-40.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 105, SI_FIXED(39.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 103, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 105, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 103, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 105, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 96, SI_FIXED(0.0), SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(15)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 99, SI_FIXED(0.0), SI_VAR(0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(16), SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(16), 360),
        SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(16), SI_FIXED(360.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 101, SI_ARRAY(16), SI_FIXED(0.0), SI_FIXED(1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802418F8) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80241960) = SCRIPT({
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

Script N(script_80241A24) = SCRIPT({
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
Script N(script_80241B3C) = {
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
Script N(script_80241F3C) = {
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

Script N(script_80242238) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            GotoMapSpecial(D_80242FC8_DEEE98, 3, 1);
        }
        == 1 {
            GotoMapSpecial(D_80242FC0_DEEE90, 3, 1);
        }
        == 2 {
            GotoMapSpecial(D_80242FB8_DEEE88, 2, 1);
        }
        == 3 {
            GotoMapSpecial(D_80242FB0_DEEE80, 3, 1);
        }
    }
    sleep 100;
});

Script N(script_802422F8) = SCRIPT({
    match SI_AREA_VAR(5) {
    0..1
        match SI_AREA_VAR(6) {
            == 0 {
                GotoMapSpecial(D_80242FC8_DEEE98, 2, 1);
            }
            == 1 {
                GotoMapSpecial(D_80242FC0_DEEE90, 2, 1);
            }
            == 2 {
                GotoMapSpecial(D_80242FB8_DEEE88, 1, 1);
            }
            == 3 {
                GotoMapSpecial(D_80242FB0_DEEE80, 2, 1);
            }
        }
        == 2 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80242FC8_DEEE98, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80242FC0_DEEE90, 2, 1);
                    } else {
                        GotoMapSpecial(D_80242FC8_DEEE98, 2, 1);
                    }
                }
                == 3 {
                    GotoMapSpecial(D_80242FB0_DEEE80, 2, 1);
                }
            }
        }
        == 3 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80242FC8_DEEE98, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80242FC0_DEEE90, 2, 1);
                    } else {
                        GotoMapSpecial(D_80242FC8_DEEE98, 2, 1);
                    }
                }
                == 2 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80242FB8_DEEE88, 1, 1);
                    } else {
                        GotoMapSpecial(D_80242FC8_DEEE98, 2, 1);
                    }
                }
            }
        }
    }
    sleep 100;
});

Script N(script_8024259C) = SCRIPT({
10:
    sleep 1;
    func_80240518_DEC3E8();
    if (SI_VAR(0) != 1) {
        goto 10;
    }
    if (SI_AREA_FLAG(2) == 0) {
        await N(script_80242238);
    } else {
        await N(script_802422F8);
    }
});

Script N(script_8024262C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 140;
        match SI_SAVE_VAR(215) {
            == 0 {
                if (SI_AREA_VAR(6) == 1) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000B);
                }
            }
            == 1 {
                if (SI_AREA_VAR(6) == 2) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000C);
                }
            }
            == 2 {
                if (SI_AREA_VAR(6) == 3) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000D);
                }
            }
            == 3 {
                if (SI_AREA_VAR(6) == 0) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000A);
                }
            }
        }
    } else {
        sleep 140;
        match SI_SAVE_VAR(215) {
            == 0 {
                if (SI_AREA_VAR(6) == 0) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000A);
                }
            }
            == 1 {
                if (SI_AREA_VAR(6) == 1) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000B);
                }
            }
            == 2 {
                if (SI_AREA_VAR(6) == 2) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000C);
                }
            }
            == 3 {
                if (SI_AREA_VAR(6) == 3) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 5, 0xF000D);
                }
            }
        }
    }
});

Script N(script_802428CC) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFF830) {
        SI_VAR(0) = 0xFFFFF830;
    }
    if (SI_VAR(0) > 2000) {
        SI_VAR(0) = 2000;
    }
    SetCamTarget(0, SI_VAR(0), 50.0, SI_VAR(2));
    sleep 1;
    goto 0;
});

s32 N(unk_80242984)[] = {
    0xFFFFF9F2, 0xF24A7A80, 0xF24BE280, 0x0000060E, 0xF24A7A80, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_802429A4)[] = {
    0x0000060E, 0xF24A7A80, 0xF24EB280, 0xFFFFF9F2, 0xF24A7A80, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_802429C4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    spawn N(script_802428CC);
    spawn N(script_8024262C);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80242984);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80240730);
        SI_MAP_FLAG(0) = 1;
        spawn {
        10:
            func_8024055C_DEC42C();
            if (SI_VAR(0) == 1) {
                goto 11;
            }
            sleep 1;
            if (SI_MAP_VAR(11) < 1400) {
                goto 10;
            }
            match SI_SAVE_VAR(215) {
                == 0 {
                    GotoMap(D_80242FC0_DEEE90, 2);
                }
                == 1 {
                    GotoMap(D_80242FB8_DEEE88, 1);
                }
                == 2 {
                    GotoMap(D_80242FB0_DEEE80, 2);
                }
                == 3 {
                    GotoMap(D_80242FC8_DEEE98, 2);
                }
            }
            sleep 100;
            return;
        11:
            await N(script_802422F8);
        }
    } else {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_802429A4);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80240730);
        SI_MAP_FLAG(0) = 1;
        spawn {
        30:
            func_8024055C_DEC42C();
            if (SI_VAR(0) == 1) {
                goto 31;
            }
            sleep 1;
            if (SI_MAP_VAR(11) > 0xFFFFFA88) {
                goto 30;
            }
            match SI_SAVE_VAR(215) {
                == 0 {
                    GotoMap(D_80242FC8_DEEE98, 3);
                }
                == 1 {
                    GotoMap(D_80242FC0_DEEE90, 3);
                }
                == 2 {
                    GotoMap(D_80242FB8_DEEE88, 2);
                }
                == 3 {
                    GotoMap(D_80242FB0_DEEE80, 3);
                }
            }
            sleep 100;
            return;
        31:
            await N(script_80242238);
        }
    }
});

s32 pad_002D5C[] = {
    0x00000000,
};

Script N(script_80242D60) = SCRIPT({

});

NpcSettings N(npcSettings_80242D70) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = &N(script_80242D60),
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

StaticNpc N(npcGroup_80242D9C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242D70),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D05,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x008C0001, 0x008C0003, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001,
        },
    },
};

NpcGroupList N(npcGroupList_80242F8C) = {
    NPC_GROUP(N(npcGroup_80242D9C), 0x00000000),
    {},
};

s32 pad_002FA4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242FB0_DEEE80

// rodata: D_80242FB8_DEEE88

// rodata: D_80242FC0_DEEE90

// rodata: D_80242FC8_DEEE98
