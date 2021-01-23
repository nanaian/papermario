#include "sbk_56.h"

s32 pad_000DB8[2];
s32 pad_000FFC[1];
Script N(script_ExitWalk_80241080);
Script N(script_ExitWalk_802410E8);
Script N(script_ExitWalk_80241150);
Script N(script_802411B8);
Script N(script_8024121C);
Script N(main);
s32 pad_00142C[1];
s32 N(unk_80241430)[2];
s32 N(unk_80241438)[4];
s32 N(unk_80241448)[16];
s32 N(unk_80241488)[3];
Script N(script_80241494);
Script N(script_802415F8);
Script N(script_MakeEntities);
Script N(script_SearchBush_80241B00);
Script N(script_ShakeTree_80241E60);
s32 N(treeDropList_Tree1)[8];
s32 N(treeDropList_Tree2)[8];
s32 N(treeDropList_Tree3)[8];
s32 N(treeDropList_Tree9)[8];
Script N(script_802426EC);
s32 pad_002A0C[1];
const char D_80242A10_9569D0[8]; // "sbk_55"
const char D_80242A18_9569D8[8]; // "sbk_46"
const char D_80242A20_9569E0[8]; // "sbk_66"
s32 pad_002A28[2];

// text: func_80240000_953FC0

// text: func_80240038_953FF8

// text: func_8024005C_95401C

// text: func_80240080_954040

// text: func_8024009C_95405C

// text: func_802400BC_95407C

// text: func_802400E8_9540A8

// text: func_80240154_954114

// text: func_802401A0_954160

// text: func_8024024C_95420C

// text: func_8024049C_95445C

// text: func_802404C8_954488

// text: func_80240500_9544C0

// text: func_80240590_954550

// text: func_802405C4_954584

// text: func_80240628_9545E8

// text: func_80240680_954640

// text: func_80240BB8_954B78

// text: func_80240CF8_954CB8

// text: func_80240D40_954D00

// text: func_80240D88_954D48

s32 pad_000DB8[] = {
    0x00000000, 0x00000000,
};

// text: func_80240DC0_954D80

// text: func_80240E30_954DF0

s32 pad_000FFC[] = {
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
    .tattle = 0x19008B,
};

Script N(script_ExitWalk_80241080) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    func_8024005C_95401C();
    GotoMap(D_80242A10_9569D0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802410E8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    func_8024005C_95401C();
    GotoMap(D_80242A18_9569D8, 3);
    sleep 100;
});

Script N(script_ExitWalk_80241150) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    func_8024005C_95401C();
    GotoMap(D_80242A20_9569E0, 2);
    sleep 100;
});

Script N(script_802411B8) = SCRIPT({
    bind N(script_ExitWalk_80241080) to 0x80000 12;
    bind N(script_ExitWalk_802410E8) to 0x80000 4;
    bind N(script_ExitWalk_80241150) to 0x80000 8;
});

Script N(script_8024121C) = SCRIPT({
    EnableTexPanning(3, 1);
    SI_VAR(0) = 0;
10:
    SI_VAR(1) = 0;
    SI_VAR(1) -= SI_VAR(0);
    SetTexPanOffset(1, 0, SI_VAR(0), SI_VAR(0));
    SetTexPanOffset(1, 1, SI_VAR(1), SI_VAR(1));
    SI_VAR(0) += 80;
    sleep 1;
    goto 10;
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
    func_80240000_953FC0();
    spawn N(script_8024121C);
    0x802C971C(4);
    SetMusicTrack(0, 23, 0, 8);
    func_80240038_953FF8();
    PlaySound(0x80000061);
    SI_VAR(0) = N(script_802411B8);
    spawn EnterWalk;
    spawn N(script_802426EC);
});

s32 pad_00142C[] = {
    0x00000000,
};

s32 N(unk_80241430)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80241438)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80241448)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80241488)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80241494) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_802405C4_954584(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240BB8_954B78(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240BB8_954B78(50, 50);
    }
    spawn {
        sleep 3;
        func_802400BC_95407C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_80240628_9545E8();
        func_80240CF8_954CB8();
        sleep 5;
        func_80240D40_954D00();
        sleep 5;
        func_80240CF8_954CB8();
    }
    sleep 3;
    func_80240680_954640(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_802415F8) = SCRIPT({
    if (SI_SAVE_FLAG(829) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240D88_954D48();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240080_954040();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240500_9544C0(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_802401A0_954160();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240590_954550(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024009C_95405C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_8024024C_95420C();
    if (SI_VAR(0) == -1) {
        func_80240590_954550(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024009C_95405C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_8024049C_95445C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240590_954550(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024009C_95405C();
        return;
    }
    await N(script_80241494);
    func_802400E8_9540A8(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(829) = 1;
    func_80240590_954550(SI_VAR(9));
    func_802404C8_954488();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024009C_95405C();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA7E0, 300, 60, 0, 0, 0x80000000);
    MakeEntity(0x802EA910, 0xFFFFFFCE, 60, 275, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(829));
    AssignScript(N(script_802415F8));
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80241B00) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240E30_954DF0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240E30_954DF0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80241E60) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240E30_954DF0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240E30_954DF0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240E30_954DF0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240E30_954DF0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .modelIDs = { 0x1A },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x0000009C, 0xFFFFFED0, 0x0000005C, 0xFFFFFF50, 0x0000000E, 0xF8405E98, 0xFAA2B58A,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802424A8) =  { -259.0, 0.0, -160.0, 0.0 };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x19 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1A },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x0000009D, 0x000000E6, 0x0000004D, 0xFFFFFED0, 0x0000000E, 0xF8405E9A, 0xFAA2B58C,
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802424FC) =  { 171.0, 0.0, -291.0, 0.0 };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x20 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1F },
};

s32 N(treeDropList_Tree3)[] = {
    0x00000001, 0x00000157, 0xFFFFFE4C, 0x00000064, 0x000000F9, 0x0000000F, 0xF8405ECE, 0x00000000,
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = &N(treeDropList_Tree3),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80242550) =  { -436.0, 0.0, 224.0, 0.0 };

ModelIdList N(treeModelList_Tree4_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x24 },
};

ModelIdList N(treeModelList_Tree4_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x23 },
};

ShakeTree N(shakeTreeEvent_Tree4) = {
    .leaves = &N(treeModelList_Tree4_Leaves),
    .trunk = &N(treeModelList_Tree4_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80242584) =  { -320.0, 0.0, -21.0, 0.0 };

ModelIdList N(treeModelList_Tree5_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x28 },
};

ModelIdList N(treeModelList_Tree5_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x27 },
};

ShakeTree N(shakeTreeEvent_Tree5) = {
    .leaves = &N(treeModelList_Tree5_Leaves),
    .trunk = &N(treeModelList_Tree5_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802425B8) =  { -242.0, 0.0, 88.0, 0.0 };

ModelIdList N(treeModelList_Tree6_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x2C },
};

ModelIdList N(treeModelList_Tree6_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2B },
};

ShakeTree N(shakeTreeEvent_Tree6) = {
    .leaves = &N(treeModelList_Tree6_Leaves),
    .trunk = &N(treeModelList_Tree6_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802425EC) =  { -203.0, 0.0, -214.0, 0.0 };

ModelIdList N(treeModelList_Tree7_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x30 },
};

ModelIdList N(treeModelList_Tree7_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2F },
};

ShakeTree N(shakeTreeEvent_Tree7) = {
    .leaves = &N(treeModelList_Tree7_Leaves),
    .trunk = &N(treeModelList_Tree7_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80242620) =  { -101.0, 0.0, -376.0, 0.0 };

ModelIdList N(treeModelList_Tree8_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x34 },
};

ModelIdList N(treeModelList_Tree8_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x33 },
};

ShakeTree N(shakeTreeEvent_Tree8) = {
    .leaves = &N(treeModelList_Tree8_Leaves),
    .trunk = &N(treeModelList_Tree8_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80242654) =  { 104.0, 0.0, -386.0, 0.0 };

ModelIdList N(treeModelList_Tree9_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x3A },
};

ModelIdList N(treeModelList_Tree9_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x39 },
};

s32 N(treeDropList_Tree9)[] = {
    0x00000001, 0x00000157, 0x0000010A, 0x00000064, 0x00000095, 0x0000000F, 0xF8405ECF, 0x00000000,
};

ShakeTree N(shakeTreeEvent_Tree9) = {
    .leaves = &N(treeModelList_Tree9_Leaves),
    .trunk = &N(treeModelList_Tree9_Trunk),
    .drops = &N(treeDropList_Tree9),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802426A8) =  { 266.0, 0.0, 124.0, 0.0 };

ModelIdList N(treeModelList_Tree10_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x3D },
};

ModelIdList N(treeModelList_Tree10_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x3C },
};

ShakeTree N(shakeTreeEvent_Tree10) = {
    .leaves = &N(treeModelList_Tree10_Leaves),
    .trunk = &N(treeModelList_Tree10_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802426DC) =  { 362.0, 0.0, -74.0, 0.0 };

Script N(script_802426EC) = SCRIPT({
    SI_SAVE_FLAG(792) = 0;
    SI_SAVE_FLAG(793) = 0;
    SI_SAVE_FLAG(794) = 0;
    SI_SAVE_FLAG(795) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 18;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_802424A8);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_802424FC);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 21;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_80242550);
    SI_VAR(0) = N(shakeTreeEvent_Tree4);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 22;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_80242584);
    SI_VAR(0) = N(shakeTreeEvent_Tree5);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 23;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_802425B8);
    SI_VAR(0) = N(shakeTreeEvent_Tree6);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 24;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_802425EC);
    SI_VAR(0) = N(shakeTreeEvent_Tree7);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 25;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_80242620);
    SI_VAR(0) = N(shakeTreeEvent_Tree8);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 26;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_80242654);
    SI_VAR(0) = N(shakeTreeEvent_Tree9);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 27;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_802426A8);
    SI_VAR(0) = N(shakeTreeEvent_Tree10);
    bind N(script_ShakeTree_80241E60) to TriggerFlag_WALL_HAMMER 28;
    bind N(script_ShakeTree_80241E60) to TriggerFlag_BOMB N(triggerCoord_802426DC);
});

s32 pad_002A0C[] = {
    0x00000000,
};

// rodata: D_80242A10_9569D0

// rodata: D_80242A18_9569D8

// rodata: D_80242A20_9569E0

s32 pad_002A28[] = {
    0x00000000, 0x00000000,
};

