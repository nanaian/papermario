#include "tik_10.h"

s32 pad_00030C[1];
s32 pad_0013B8[2];
Script N(script_80241410);
s32 pad_00143C[1];
Script N(script_UpdateTexturePan_80241440);
Script N(script_ExitWalk_802414DC);
Script N(script_80241538);
Script N(main);
s32 pad_001754[3];
Script N(script_80241760);
Script N(script_80241C30);
Script N(script_80241E08);
s32 N(unk_80241FB4)[17];
Script N(script_80241FF8);
s32 pad_002024[3];
s32 N(unk_80242030)[2];
s32 N(unk_80242038)[4];
s32 N(unk_80242048)[16];
s32 N(unk_80242088)[3];
Script N(script_80242094);
Script N(script_802421F8);
Script N(script_MakeEntities);
s32 pad_0027F8[2];
const char D_80242800_888BC0[8]; // "tik_09"
s32 pad_002808[2];

// text: func_80240000_8863C0

// text: func_80240124_8864E4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_8866D0

// text: func_80240680_886A40

// text: func_8024069C_886A5C

// text: func_802406BC_886A7C

// text: func_802406E8_886AA8

// text: func_80240754_886B14

// text: func_802407A0_886B60

// text: func_8024084C_886C0C

// text: func_80240A9C_886E5C

// text: func_80240AC8_886E88

// text: func_80240B00_886EC0

// text: func_80240B90_886F50

// text: func_80240BC4_886F84

// text: func_80240C28_886FE8

// text: func_80240C80_887040

// text: func_802411B8_887578

// text: func_802412F8_8876B8

// text: func_80241340_887700

// text: func_80241388_887748

s32 pad_0013B8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 330.0f, 20.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19002C,
};

Script N(script_80241410) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_00143C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80241440) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_8863C0();
                    return;
                }
            }
        }
    }
    func_80240124_8864E4();
});

Script N(script_ExitWalk_802414DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242800_888BC0, 0);
    sleep 100;
});

Script N(script_80241538) = SCRIPT({
    bind N(script_ExitWalk_802414DC) to 0x80000 9;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(9);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    spawn N(script_80241410);
    PlaySound(0x80000039);
    spawn N(script_80241FF8);
    EnableTexPanning(8, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 50;
        SI_VAR(2) = 200;
        SI_VAR(3) = 110;
        SI_VAR(4) = 500;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241440);
    }
    SI_VAR(0) = N(script_80241538);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_001754[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241760) = SCRIPT({
    SI_VAR(1) = SI_ARRAY(5);
    SI_VAR(1) += 1;
    SI_VAR(2) = SI_ARRAY(0);
    SI_VAR(3) = SI_ARRAY(1);
    SI_VAR(4) = SI_ARRAY(5);
    SI_VAR(4) += 2;
    SI_VAR(5) = SI_ARRAY(0);
    SI_VAR(6) = SI_ARRAY(1);
    SI_VAR(7) = SI_ARRAY(5);
    SI_VAR(7) += 3;
    SI_VAR(8) = SI_ARRAY(0);
    SI_VAR(9) = SI_ARRAY(1);
    SI_VAR(10) = SI_ARRAY(5);
    SI_VAR(10) += 4;
    SI_VAR(11) = SI_ARRAY(0);
    SI_VAR(12) = SI_ARRAY(1);
    EnableModel(SI_VAR(1), 1);
    EnableModel(SI_VAR(4), 1);
    EnableModel(SI_VAR(7), 1);
    EnableModel(SI_VAR(10), 1);
    loop 5 {
        SI_VAR(0) += 1;
        SI_VAR(2) += 1;
        SI_VAR(3) += 1;
        TranslateModel(SI_VAR(1), SI_VAR(2), SI_VAR(0), SI_VAR(3));
        ScaleModel(SI_VAR(1), 0.5, 0.5, 0.5);
        SI_VAR(5) += -1;
        SI_VAR(6) += 1;
        TranslateModel(SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(6));
        ScaleModel(SI_VAR(4), 0.5, 0.5, 0.5);
        SI_VAR(8) += 1;
        SI_VAR(9) += -1;
        TranslateModel(SI_VAR(7), SI_VAR(8), SI_VAR(0), SI_VAR(9));
        ScaleModel(SI_VAR(7), 0.5, 0.5, 0.5);
        SI_VAR(11) += -1;
        SI_VAR(12) += -1;
        TranslateModel(SI_VAR(10), SI_VAR(11), SI_VAR(0), SI_VAR(12));
        ScaleModel(SI_VAR(10), 0.5, 0.5, 0.5);
        sleep 1;
    }
    loop 5 {
        SI_VAR(0) += -1;
        SI_VAR(2) += 1;
        SI_VAR(3) += 1;
        TranslateModel(SI_VAR(1), SI_VAR(2), SI_VAR(0), SI_VAR(3));
        ScaleModel(SI_VAR(1), 0.5, 0.5, 0.5);
        SI_VAR(5) += -1;
        SI_VAR(6) += 1;
        TranslateModel(SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(6));
        ScaleModel(SI_VAR(4), 0.5, 0.5, 0.5);
        SI_VAR(8) += 1;
        SI_VAR(9) += -1;
        TranslateModel(SI_VAR(7), SI_VAR(8), SI_VAR(0), SI_VAR(9));
        ScaleModel(SI_VAR(7), 0.5, 0.5, 0.5);
        SI_VAR(11) += -1;
        SI_VAR(12) += -1;
        TranslateModel(SI_VAR(10), SI_VAR(11), SI_VAR(0), SI_VAR(12));
        ScaleModel(SI_VAR(10), 0.5, 0.5, 0.5);
        sleep 1;
    }
    EnableModel(SI_VAR(1), 0);
    EnableModel(SI_VAR(4), 0);
    EnableModel(SI_VAR(7), 0);
    EnableModel(SI_VAR(10), 0);
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80241C30) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 14, SI_VAR(5)),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(5), SI_ARRAY(0), SI_ARRAY(2), SI_ARRAY(1)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(5), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, RandInt, 200, SI_VAR(0)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 50),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 1),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_ARRAY(2), SI_ARRAY(3), SI_ARRAY(4), 1),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(5), SI_ARRAY(0), SI_VAR(0), SI_ARRAY(1)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240310_8866D0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241760)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241E08) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(15), 10000),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(1)),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(9)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(9)),
            SI_CMD(ScriptOpcode_USE_FLAGS, 6),
            SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
            SI_CMD(ScriptOpcode_CALL, RandInt, SI_VAR(4), SI_VAR(11)),
            SI_CMD(ScriptOpcode_CALL, RandInt, SI_VAR(5), SI_VAR(12)),
            SI_CMD(ScriptOpcode_SET, SI_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET, SI_VAR(14), SI_VAR(3)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(13), SI_VAR(11)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(14), SI_VAR(12)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), SI_VAR(13)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), SI_VAR(14)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), SI_VAR(6)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), SI_VAR(7)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), SI_VAR(8)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), SI_VAR(15)),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80241C30)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 14, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80241FB4)[] = {
    0x00000002, 0xFFFFFF24, 0x00000014, 0x0000006E, 0x00000032, 0x000000FA, 0x00000014, 0x0000003C,
    0x00000003, 0x000000A0, 0x0000000A, 0x000000A0, 0x0000003C, 0x000000FA, 0x00000014, 0x0000003C,
    0x00000001,
};

Script N(script_80241FF8) = SCRIPT({
    SI_VAR(0) = N(unk_80241FB4);
    spawn N(script_80241E08);
});

s32 pad_002024[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80242030)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80242038)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80242048)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80242088)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80242094) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240BC4_886F84(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_802411B8_887578(70, 70);
        sleep 27;
        PlaySound(8334);
        func_802411B8_887578(50, 50);
    }
    spawn {
        sleep 3;
        func_802406BC_886A7C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_80240C28_886FE8();
        func_802412F8_8876B8();
        sleep 5;
        func_80241340_887700();
        sleep 5;
        func_802412F8_8876B8();
    }
    sleep 3;
    func_80240C80_887040(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_802421F8) = SCRIPT({
    if (SI_SAVE_FLAG(434) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80241388_887748();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240680_886A40();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240B00_886EC0(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_802407A0_886B60();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240B90_886F50(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024069C_886A5C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_8024084C_886C0C();
    if (SI_VAR(0) == -1) {
        func_80240B90_886F50(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024069C_886A5C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_80240A9C_886E5C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240B90_886F50(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024069C_886A5C();
        return;
    }
    await N(script_80242094);
    func_802406E8_886AA8(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(434) = 1;
    func_80240B90_886F50(SI_VAR(9));
    func_80240AC8_886E88();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024069C_886A5C();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 0xFFFFFF74, 160, 0xFFFFFFD8, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(434));
    AssignScript(N(script_802421F8));
    CreatePushBlockGrid(0, 7, 6, 0xFFFFFFC0, 0xFFFFFFF1, 0xFFFFFFA2, 0);
    SetPushBlock(0, 1, 4, 1);
    MakeEntity(0x802EA588, 0xFFFFFFCC, 70, 0xFFFFFFE0, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(405));
    0x80111F2C(1);
    MakeEntity(0x802EA588, 23, 70, 0xFFFFFFE0, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(406));
    0x80111F2C(1);
    MakeEntity(0x802EA588, 98, 70, 0xFFFFFFE0, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(407));
    0x80111F2C(1);
});

s32 pad_0027F8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242800_888BC0

s32 pad_002808[] = {
    0x00000000, 0x00000000,
};

