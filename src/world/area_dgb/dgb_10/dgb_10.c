#include "dgb_10.h"

Script N(script_80240250);
s32 pad_0002E8[2];
Script N(script_ExitWalk_802402F0);
Script N(script_8024034C);
Script N(script_EnterWalk_80240378);
Script N(main);
s32 pad_00066C[1];
Script N(script_80240670);
Script N(script_80240770);
Script N(script_80240860);
Script N(script_80240AF4);
Script N(script_80240CB8);
Script N(script_80240E68);
s32 pad_000EDC[1];
Script N(script_80240EE0);
Script N(script_80240F00);
Script N(script_80240F20);
Script N(script_MakeEntities);
s32 pad_001034[3];
const char D_80241040_C4D3D0[8]; // "dgb_09"
const char D_80241048_C4D3D8[8]; // "dgb_11"

// text: func_80240000_C4C390

// text: func_802400A0_C4C430

// text: func_8024013C_C4C4CC

// text: func_802401C0_C4C550

EntryList N(entryList) = {
    { 300.0f, 0.0f, -50.0f, 0.0f },
    { 375.0f, 0.0f, -240.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900CA,
};

Script N(script_80240250) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_0002E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802402F0) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80241040_C4D3D0, 3);
    sleep 100;
});

Script N(script_8024034C) = SCRIPT({
    bind N(script_ExitWalk_802402F0) to 0x80000 8;
});

Script N(script_EnterWalk_80240378) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_8024034C);
            spawn EnterWalk;
            sleep 1;
        }
        == 1 {
            UseSettingsFrom(0, 375, 0, 0xFFFFFF44);
            SetPanTarget(0, 375, 0, 0xFFFFFF44);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            DisablePlayerInput(1);
            DisablePlayerPhysics(1);
            SetPlayerActionState(3);
            sleep 1;
            SetPlayerJumpscale(0.7001953125);
            PlayerJump(375, 0, 0xFFFFFF44, 20);
            PanToTarget(0, 0, 0);
            DisablePlayerPhysics(0);
            DisablePlayerInput(0);
            SetPlayerActionState(0);
            spawn N(script_8024034C);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80240E68);
    spawn N(script_80240250);
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    EnableModel(6, 0);
    EnableModel(12, 0);
    EnableModel(18, 0);
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    ModifyColliderFlags(0, 14, 0x7FFFFE00);
    spawn N(script_EnterWalk_80240378);
});

s32 pad_00066C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
Script N(script_80240670) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_USE_FLAGS, 6),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80240770), TriggerFlag_FLOOR_TOUCH, SI_ARRAY(0), 1, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80240770) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240000_C4C390),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, SI_ARRAY(0), 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(1), 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, SI_ARRAY(0), 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(1), 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_IF_NE, SI_ARRAY(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xF4ACD485),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80240860) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_USE_FLAGS, 6),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), SI_VAR(1)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), SI_VAR(1)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), SI_VAR(1)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), SI_VAR(1)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), SI_VAR(1)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, SI_ARRAY(1), SI_ARRAY(0)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, GetPlayerActionState, SI_VAR(10)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 13),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 15),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_LABEL, 2),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), SI_ARRAY(3)),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_802400A0_C4C430),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80240AF4)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 2),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80240CB8)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 3),
    SI_CMD(ScriptOpcode_CALL, GetPlayerActionState, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 13),
        SI_CMD(ScriptOpcode_GOTO, 3),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 15),
        SI_CMD(ScriptOpcode_GOTO, 3),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80240AF4) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(9)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 5, 3, 1),
    SI_CMD(ScriptOpcode_LABEL, 2),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(0), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(5), SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(2), SI_VAR(5), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_ARRAY(1)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 5, 0, 3, 1),
    SI_CMD(ScriptOpcode_LABEL, 3),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(0), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(5), SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(2), SI_VAR(5), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_ARRAY(1)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 3),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80240CB8) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(9)),
    SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_ARRAY(5), SI_ARRAY(2), SI_ARRAY(3), SI_ARRAY(4), 3, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 150, 19, 4),
    SI_CMD(ScriptOpcode_LABEL, 2),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(0), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(2), 45),
    SI_CMD(ScriptOpcode_CALL, RotateModel, SI_ARRAY(0), SI_VAR(2), 1, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 150, 0, 19, 4),
    SI_CMD(ScriptOpcode_LABEL, 3),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(0), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(2), 45),
    SI_CMD(ScriptOpcode_CALL, RotateModel, SI_ARRAY(0), SI_VAR(2), 1, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 3),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80240E68) = SCRIPT({
    func_8024013C_C4C4CC();
    func_802CA988(0, SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5));
    func_802401C0_C4C550();
    func_802D2B6C();
    GotoMap(D_80241048_C4D3D8, SI_VAR(0));
    sleep 100;
});

s32 pad_000EDC[] = {
    0x00000000,
};

Script N(script_80240EE0) = SCRIPT({
    SI_SAVE_FLAG(1052) = 1;
});

Script N(script_80240F00) = SCRIPT({
    SI_SAVE_FLAG(1053) = 1;
});

Script N(script_80240F20) = SCRIPT({
    SI_SAVE_FLAG(1054) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1052) == 0) {
        MakeEntity(D_802BCE84, 500, 0, 0xFFFFFF9C, 0, 0x80000000);
        AssignScript(N(script_80240EE0));
    }
    if (SI_SAVE_FLAG(1053) == 0) {
        MakeEntity(D_802BCE84, 500, 0, 0xFFFFFF06, 0, 0x80000000);
        AssignScript(N(script_80240F00));
    }
    if (SI_SAVE_FLAG(1054) == 0) {
        MakeEntity(D_802BCE84, 375, 0, 0xFFFFFF06, 0, 0x80000000);
        AssignScript(N(script_80240F20));
    }
});

s32 pad_001034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241040_C4D3D0

// rodata: D_80241048_C4D3D8
