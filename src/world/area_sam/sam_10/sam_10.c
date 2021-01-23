#include "sam_10.h"

s32 pad_0003CC[1];
Script N(script_80240D20);
s32 pad_000D4C[1];
Script N(script_ExitWalk_80240D50);
Script N(script_ExitWalk_80240DAC);
Script N(script_ExitWalk_80240E08);
Script N(script_80240E64);
Script N(script_EnterWalk_80240EC8);
Script N(main);
s32 pad_00103C[1];
s32 N(unk_80241040)[1];
Script N(script_80241044);
Script N(script_MakeEntities);
s32 N(intTable_802411F0)[60];
Script N(script_802412E0);
Script N(script_80242148);
s32 N(itemList_8024225C)[2];
Script N(script_80242264);
Script N(script_80242580);
s32 unk_missing_8024263C[10];
s32 N(extraAnimationList_80242664)[2];
Script N(script_NpcAI_8024269C);
Script N(script_NpcAI_80242738);
StaticNpc N(npcGroup_8024280C)[2];
NpcGroupList N(npcGroupList_80242BEC);
s32 pad_002C04[3];
const char D_80242C10_D3A410[8]; // "sam_09"
const char D_80242C18_D3A418[8]; // "pra_01"
const char D_80242C20_D3A420[8]; // "sam_12"
s32 pad_002C28[2];
s32 pad_002DC8[2];

// text: func_80240000_D37800

// text: func_802400B4_D378B4

// text: func_80240118_D37918

// text: func_80240268_D37A68

// text: func_802402BC_D37ABC

// text: func_802402F0_D37AF0

s32 pad_0003CC[] = {
    0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_802405D8_D37DD8

// text: func_8024078C_D37F8C

// text: func_802409EC_D381EC

EntryList N(entryList) = {
    { -730.0f, 0.0f, 0.0f, 90.0f },
    { 985.0f, 1140.0f, -200.0f, 270.0f },
    { 337.0f, -20.0f, -104.0f, 270.0f },
    { -255.0f, 840.0f, -215.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190134,
};

Script N(script_80240D20) = SCRIPT({
    SetMusicTrack(0, 59, 0, 8);
});

s32 pad_000D4C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240D50) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242C10_D3A410, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240DAC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242C18_D3A418, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240E08) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80242C20_D3A420, 0);
    sleep 100;
});

Script N(script_80240E64) = SCRIPT({
    bind N(script_ExitWalk_80240D50) to 0x80000 1;
    bind N(script_ExitWalk_80240DAC) to 0x80000 6;
    bind N(script_ExitWalk_80240E08) to 0x80000 39;
});

Script N(script_EnterWalk_80240EC8) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240E64);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) < 3) {
        SI_VAR(0) = N(script_80240E64);
        spawn EnterWalk;
    } else {
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 43;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80242BEC));
    await N(script_MakeEntities);
    await N(script_80240D20);
    await N(script_80242264);
    spawn N(script_EnterWalk_80240EC8);
    sleep 1;
});

s32 pad_00103C[] = {
    0x00000000,
};

s32 N(unk_80241040)[] = {
    0x00000000,
};

Script N(script_80241044) = SCRIPT({
    group 0;
    func_802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    func_802D5830(0);
    return;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA5AC, 775, 540, 0xFFFFFFCE, 0, 291, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1463));
    MakeItemEntity(348, 0xFFFFFF60, 300, 0xFFFFFF92, 17, SI_SAVE_FLAG(1464));
    if (SI_SAVE_VAR(0) < 77) {
        DropItemEntityB(108, 0, 0xFFFFFC18, 0, 1, 0);
        func_802402BC_D37ABC();
        SI_MAP_VAR(0) = SI_VAR(0);
    } else {
        DropItemEntityB(108, 0xFFFFFF8B, 179, 0xFFFFFFC9, 1, 0);
        func_802402BC_D37ABC();
    }
    MakeEntity(D_802E9A18, 0xFFFFFF06, 870, 0xFFFFFF2E, 0, 0x80000000);
    MakeEntity(D_802EA7E0, 770, 1200, 0xFFFFFF1F, 0, 0x80000000);
});

s32 N(intTable_802411F0)[] = {
    0x00000028, 0xFFFFFF38, 0x0000002B, 0xFFFFFF1A, 0x0000002E, 0xFFFFFEFC, 0x00000031, 0xFFFFFEDE,
    0x00000034, 0xFFFFFEC0, 0x00000037, 0xFFFFFEA2, 0x0000003A, 0xFFFFFE84, 0x0000003D, 0xFFFFFE66,
    0x00000040, 0xFFFFFE48, 0x00000043, 0xFFFFFE2A, 0x00000046, 0xFFFFFDEE, 0x00000049, 0xFFFFFDD0,
    0x0000004C, 0xFFFFFDB2, 0x0000004F, 0xFFFFFD94, 0x00000052, 0xFFFFFD76, 0x00000055, 0xFFFFFD58,
    0x00000058, 0xFFFFFD3A, 0x0000005B, 0xFFFFFD1C, 0x0000005E, 0xFFFFFCFE, 0x00000061, 0xFFFFFCE0,
    0x00000064, 0xFFFFFCA4, 0x00000067, 0xFFFFFC86, 0x0000006A, 0xFFFFFC68, 0x0000006D, 0xFFFFFC4A,
    0x00000070, 0xFFFFFC2C, 0x00000073, 0xFFFFFC0E, 0x00000076, 0xFFFFFBF0, 0x00000079, 0xFFFFFBD2,
    0x0000007C, 0xFFFFFBB4, 0x0000007F, 0xFFFFFB96,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802412E0) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, FindKeyItem, 108, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), -1),
        SI_CMD(ScriptOpcode_CALL, func_802D6420),
        SI_CMD(ScriptOpcode_CALL, func_802D6954),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_CASE_EQ, -1),
                SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_CASE_ELSE),
                SI_CMD(ScriptOpcode_CALL, RemoveKeyItemAt, SI_VAR(1)),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, ShowMessageAtScreenPos, 0x1D0161, 160, 40),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetItemPos, SI_MAP_VAR(0), 0xFFFFFF8B, 179, 0xFFFFFFE0),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 491, 0, 0xFFFFFF8B, 179, 0xFFFFFFE0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFE0, 0xFFFFFFC9, 100, 10),
        SI_CMD(ScriptOpcode_LABEL, 1),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_CALL, SetItemPos, SI_MAP_VAR(0), 0xFFFFFF8B, 179, SI_VAR(0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
            SI_CMD(ScriptOpcode_GOTO, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 43, 924, 0),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFE9, 100, 10),
    SI_CMD(ScriptOpcode_LABEL, 2),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 140, 0, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 43),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 45, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, SI_FIXED(600.0)),
    SI_CMD(ScriptOpcode_CALL, SetCamPitch, 0, SI_FIXED(2.0), SI_FIXED(5.0)),
    SI_CMD(ScriptOpcode_CALL, func_802402F0_D37AF0),
    SI_CMD(ScriptOpcode_CALL, SetCamPosA, 0, SI_VAR(0), SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, SetCamPosB, 0, SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 925),
    SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 10, SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 0xFFFFFFEC, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 20, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 60, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 100, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 140, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 180, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 220, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 240, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 280, 0xFFFFFFEC, 0xFFFFFFBE, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 0xFFFFFFEC, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 20, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 60, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 100, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 140, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 180, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 220, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 240, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 3, 280, 0xFFFFFFEC, 0xFFFFFF5A, 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 29, 0),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 128, 1),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 37, 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x80000040),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 600, SI_FIXED(0.150390625)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SET, SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802411F0)),
    SI_CMD(ScriptOpcode_LOOP, 30),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_VAR(4)),
            SI_CMD(ScriptOpcode_DIV, SI_VAR(5), 0xFFFFFFFE),
            SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(4), 0, SI_VAR(5), 0),
            SI_CMD(ScriptOpcode_LABEL, 3),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, TranslateGroup, SI_VAR(3), 0, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
                SI_CMD(ScriptOpcode_GOTO, 3),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 30),
                SI_CMD(ScriptOpcode_CALL, PlaySound, 927),
                SI_CMD(ScriptOpcode_CALL, StopSound, 0x80000040),
                SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 10, SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 10, SI_FIXED(2.0)),
                SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 5, SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_SET, SI_VAR(11), SI_VAR(0)),
                SI_CMD(ScriptOpcode_CALL, GetModelCenter, SI_VAR(3)),
                SI_CMD(ScriptOpcode_SET, SI_VAR(10), 0xFFFFFFEC),
                SI_CMD(ScriptOpcode_SUB, SI_VAR(10), SI_VAR(11)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 492, 0, SI_VAR(0), SI_VAR(10), SI_VAR(2)),
                SI_CMD(ScriptOpcode_MOD, SI_VAR(2), 3),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 0),
                    SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 5, SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 150),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 140, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, SI_FIXED(400.0)),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 150, 1050, 200, 0),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 150, 150, 0xFFFFFFBA),
        SI_CMD(ScriptOpcode_LABEL, 100),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 150, SI_VAR(0), 0xFFFFFFBA),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, SI_FIXED(750.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamPitch, 0, SI_FIXED(10.0), SI_FIXED(-14.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
            SI_CMD(ScriptOpcode_GOTO, 100),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 480),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 23, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 34, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 27, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 37, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 29, 0),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 128, 0),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 37, 1),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(0), 77),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Vec4f N(triggerCoord_80242138) =  { 337.0f, -20.0f, -103.0f, 0.0f };

Script N(script_80242148) = SCRIPT({
    PlayEffect(66, 2, 135, 11, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(25, 1);
    loop 10 {
        EnableModel(135, 1);
        EnableModel(136, 1);
        sleep 1;
        EnableModel(135, 0);
        EnableModel(136, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 40, 0x7FFFFE00);
    SI_SAVE_FLAG(1462) = 1;
    unbind;
});

s32 N(itemList_8024225C)[] = {
    0x0000006C, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242264) = {
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 10, 8),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 16, 8),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 14, 8),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 18, 8),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 12, 8),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 1, 8),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 6, 8),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 43, 138),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 77),
        SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 128, 0),
        SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 37, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 34, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 27, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 37, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 23, 8),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802411F0)),
        SI_CMD(ScriptOpcode_LOOP, 30),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
            SI_CMD(ScriptOpcode_CALL, TranslateGroup, SI_VAR(10), 0, SI_VAR(11), 0),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802412E0), TriggerFlag_WALL_INTERACT, 43, N(itemList_8024225C), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, TranslateGroup, 140, 0, 0, 0xFFFFFFE9),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 43),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 45, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 29, 0),
        SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 128, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 23, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_GE, SI_SAVE_VAR(0), 76),
        SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1462), 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1462), 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 25, 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242148), TriggerFlag_BOMB, N(triggerCoord_80242138), 1, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 135, 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 136, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 40, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242580) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            func_80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

s32 unk_missing_8024263C[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242664)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_8024266C) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x7,
    .chaseSpeed = 3.8f,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0f,
    .unk_28 = 160.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024269C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 7);
    SetSelfVar(3, 6);
    func_802409EC_D381EC(N(aISettings_8024266C));
});

NpcSettings N(npcSettings_8024270C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024269C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x17,
    .unk_2A = 0,
};

Script N(script_NpcAI_80242738) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 48);
    SetSelfVar(3, 30);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_8024078C_D37F8C();
});

NpcSettings N(npcSettings_802427E0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x10,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242738),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80242580),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x17,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_8024280C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024270C),
        .pos = { 575.0, 480.0, -50.0 },
        .flags = 0x00002D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x0000023F, 0x000001E0, 0xFFFFFFCE, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000023F, 0x000001E0, 0xFFFFFFCE, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802427E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
        .extraAnimations = N(extraAnimationList_80242664),
    },
};

NpcGroupList N(npcGroupList_80242BEC) = {
    NPC_GROUP(N(npcGroup_8024280C), 0x1D0C0003),
    {},
};

s32 pad_002C04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242C10_D3A410

// rodata: D_80242C18_D3A418

// rodata: D_80242C20_D3A420

s32 pad_002C28[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242C30_D3A430

// rodata: jtbl_80242C38_D3A438

s32 pad_002DC8[] = {
    0x00000000, 0x00000000,
};
