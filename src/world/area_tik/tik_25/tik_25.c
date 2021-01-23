#include "tik_25.h"

s32 pad_00067C[1];
s32 pad_0007B8[2];
Script N(script_80240810);
Script N(script_8024083C);
s32 pad_000878[2];
Script N(script_UpdateTexturePan_80240880);
Script N(script_ExitWalk_8024091C);
Script N(script_80240978);
Script N(script_802409A4);
Script N(script_80240E74);
Script N(script_8024104C);
s32 N(unk_802411F8)[17];
Script N(script_8024123C);
Script N(main);
s32 pad_001448[2];
Script N(script_80241450);
Script N(script_802414F0);
Script N(script_802416D8);
Script N(script_MakeEntities);
s32 pad_001A7C[1];
const char D_80241A80_8A9A00[8]; // "tik_24"
s32 pad_001A88[2];

// text: func_80240000_8A7F80

// text: func_80240124_8A80A4

// text: func_8024030C_8A828C

s32 pad_00067C[] = {
    0x00000000,
};

// text: func_80240680_8A8600

// text: func_802406AC_8A862C

// text: func_80240770_8A86F0

s32 pad_0007B8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 325.0f, -135.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190038,
};

Script N(script_80240810) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

Script N(script_8024083C) = SCRIPT({
    0x802D5FF8(66, 1);
    sleep 130;
    0x802D5FD8();
});

s32 pad_000878[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240880) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_8A7F80();
                    return;
                }
            }
        }
    }
    func_80240124_8A80A4();
});

Script N(script_ExitWalk_8024091C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241A80_8A9A00, 0);
    sleep 100;
});

Script N(script_80240978) = SCRIPT({
    bind N(script_ExitWalk_8024091C) to 0x80000 7;
});

Script N(script_802409A4) = SCRIPT({
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
Script N(script_80240E74) = {
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
    SI_CMD(ScriptOpcode_CALL, func_8024030C_8A828C, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802409A4)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024104C) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80240E74)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 14, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802411F8)[] = {
    0x00000002, 0xFFFFFF74, 0xFFFFFF92, 0x00000078, 0x000000F0, 0x000000C8, 0xFFFFFF79, 0x0000003C,
    0x00000002, 0x00000000, 0xFFFFFF9C, 0x0000005A, 0x000000EB, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000001,
};

Script N(script_8024123C) = SCRIPT({
    SI_VAR(0) = N(unk_802411F8);
    spawn N(script_8024104C);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(19);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    spawn N(script_80240810);
    spawn N(script_8024123C);
    SetTexPanner(12, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFF38;
        SI_VAR(3) = 0xFFFFFF9C;
        SI_VAR(4) = 0xFFFFFE0C;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240880);
    }
    SI_VAR(0) = N(script_80240978);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_001448[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241450) = SCRIPT({
    if (SI_SAVE_FLAG(423) == 0) {
    10:
        if (SI_SAVE_FLAG(423) == 0) {
            sleep 1;
            goto 10;
        }
        sleep 60;
        spawn N(script_8024083C);
        ShowMessageAtScreenPos(0x1D0187, 160, 40);
        func_80240680_8A8600();
    }
});

Script N(script_802414F0) = SCRIPT({
    if (SI_SAVE_FLAG(425) == 1) {
        return;
    }
    SI_SAVE_FLAG(425) = 1;
    DisablePlayerInput(1);
    SI_VAR(5) = 210;
    MakeLerp(0xFFFFFFCE, 0xFFFFFFEC, 8, 4);
    loop {
        UpdateLerp();
        func_802406AC_8A862C(SI_MAP_VAR(0), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) -= 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(SI_VAR(0), 0xFFFFFF79, 22, 1);
    loop {
        UpdateLerp();
        func_802406AC_8A862C(SI_MAP_VAR(0), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) -= 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAt(72, 0, SI_VAR(5), SI_VAR(0), 0);
    PlaySoundAt(8326, 0, SI_VAR(5), SI_VAR(0), 0);
    func_80240770_8A86F0(SI_MAP_VAR(0));
    DisablePlayerInput(0);
});

Script N(script_802416D8) = SCRIPT({
    if (SI_SAVE_FLAG(426) == 1) {
        return;
    }
    SI_SAVE_FLAG(426) = 1;
    DisablePlayerInput(1);
    SI_VAR(5) = 0xFFFFFF88;
    MakeLerp(0xFFFFFFEC, 10, 8, 4);
    loop {
        UpdateLerp();
        func_802406AC_8A862C(SI_MAP_VAR(1), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) += 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(SI_VAR(0), 0xFFFFFF79, 22, 1);
    loop {
        UpdateLerp();
        func_802406AC_8A862C(SI_MAP_VAR(1), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) += 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAt(72, 0, SI_VAR(5), SI_VAR(0), 0);
    PlaySoundAt(8326, 0, SI_VAR(5), SI_VAR(0), 0);
    func_80240770_8A86F0(SI_MAP_VAR(1));
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE0C, 0xFFFFFEF2, 0xFFFFFFA6, 0, 90, 3, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(423));
    spawn N(script_80241450);
    MakeEntity(0x802EA0C4, 210, 0xFFFFFFB5, 0xFFFFFFEC, 0, 0x80000000);
    AssignScript(N(script_802414F0));
    if (SI_SAVE_FLAG(425) == 0) {
        MakeEntity(0x802EAA54, 210, 0xFFFFFFCE, 0xFFFFFFEC, 0, 100, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
    } else {
        MakeEntity(0x802EAA54, 150, 0xFFFFFF79, 0xFFFFFFEC, 0, 100, 0x80000000);
    }
    MakeEntity(0x802EA0C4, 0xFFFFFF88, 0xFFFFFFD3, 0xFFFFFFEC, 0, 0x80000000);
    AssignScript(N(script_802416D8));
    if (SI_SAVE_FLAG(426) == 0) {
        MakeEntity(0x802EAA54, 0xFFFFFF88, 0xFFFFFFEC, 0xFFFFFFEC, 0, 100, 0x80000000);
        SI_MAP_VAR(1) = SI_VAR(0);
    } else {
        MakeEntity(0x802EAA54, 0xFFFFFFC4, 0xFFFFFF79, 0xFFFFFFEC, 0, 100, 0x80000000);
    }
});

s32 pad_001A7C[] = {
    0x00000000,
};

// rodata: D_80241A80_8A9A00

s32 pad_001A88[] = {
    0x00000000, 0x00000000,
};

