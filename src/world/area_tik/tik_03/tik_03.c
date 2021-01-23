#include "tik_03.h"

s32 pad_0005EC[1];
s32 pad_000AC8[2];
Script N(script_80240B40);
s32 pad_000B6C[1];
Script N(script_80240B70);
Script N(script_80240EC4);
Script N(script_802412B4);
Script N(script_80241390);
Script N(script_8024156C);
Script N(script_UpdateTexturePan_802418A0);
Script N(script_ExitWalk_8024193C);
Script N(script_80241998);
Script N(script_802419C8);
Script N(script_80241A20);
Script N(script_EnterWalk_80241A68);
Script N(main);
s32 pad_00205C[1];
Script N(script_80242060);
Script N(script_80242530);
Script N(script_80242708);
s32 N(unk_802428B4)[17];
Script N(script_802428F8);
s32 pad_002924[3];
s32 N(unk_80242930)[4];
Script N(script_80242940);
Script N(script_80242AB4);
Script N(script_80242B00);
Script N(script_80242B4C);
Script N(script_80242B98);
Script N(script_80242BE4);
s32 pad_002C24[3];
Script N(script_MakeEntities);
s32 pad_002CE8[2];
Script N(script_80242CF0);
Script N(script_80242DFC);
s32 N(unk_80242EBC)[1];
Script N(script_80242EC0);
s32 pad_002F04[3];
const char D_80242F10_871A10[8]; // "tik_01"
const char D_80242F18_871A18[8]; // "tik_04"
const char D_80242F20_871A20[8]; // "tik_03"
s32 pad_002F28[2];

// text: func_80240000_86EB00

// text: func_80240020_86EB20

// text: func_80240034_86EB34

// text: func_802400F0_86EBF0

// text: func_802401D0_86ECD0

// text: func_8024023C_86ED3C

// text: func_802402E0_86EDE0

// text: func_80240404_86EF04

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_86F0F0

// text: func_80240960_86F460

// text: func_802409C0_86F4C0

// text: func_802409E0_86F4E0

s32 pad_000AC8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 320.0f, -10.0f, 0.0f, 270.0f },
    { -215.0f, 60.0f, 0.0f, 90.0f },
    { 260.0f, -10.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190025,
};

Script N(script_80240B40) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_000B6C[] = {
    0x00000000,
};

Script N(script_80240B70) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    HidePlayerShadow(1);
    SetPlayerAnimation(0x10000);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
    }
    GetEntryID(SI_VAR(0));
    func_802400F0_86EBF0();
    SI_VAR(2) -= 40;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    PlaySound(355);
    0x802D286C(256);
    0x802D2520(0x10000, 5, 2, 1, 1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop 40 {
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    sleep 3;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            DisablePartnerAI(0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcFlagBits(0xFFFFFFFC, 2, 0);
            EnablePartnerAI();
            EnableNpcShadow(0xFFFFFFFC, 1);
        }
    }
    sleep 2;
    0x802D2520(0x10000, 0, 0, 0, 0, 0);
    sleep 1;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    HidePlayerShadow(0);
0:
    func_80240020_86EB20();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240EC4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_86EBF0();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(2) += 2;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    if (SI_VAR(4) == 90) {
        SI_VAR(5) += 40;
    } else {
        SI_VAR(5) -= 40;
    }
    UseSettingsFrom(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetPanTarget(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        DisablePartnerAI(0);
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
        InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
    }
    sleep 1;
    PlaySound(355);
    spawn {
        sleep 25;
        HidePlayerShadow(0);
    }
    0x802D286C(2304);
    0x802D2520(0x10002, 5, 3, 1, 1, 0);
    loop 40 {
        func_8024023C_86ED3C(1.0);
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            EnableNpcShadow(0xFFFFFFFC, 1);
            EnablePartnerAI();
        }
    }
    sleep 5;
    0x802D2520(0x10002, 0, 0, 0, 0, 0);
    ModifyColliderFlags(1, SI_VAR(11), 0x7FFFFE00);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    spawn 0xFE363C8A;
});

Script N(script_802412B4) = SCRIPT({
    func_80240034_86EB34();
    if (SI_VAR(0) == 0) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    await N(script_80241390);
});

Script N(script_80241390) = SCRIPT({
    func_80240000_86EB00();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_86EBF0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_86EBF0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_86ECD0();
    InterpPlayerYaw(SI_VAR(0), 0);
    sleep 2;
    SetPlayerFlagBits(0x200000, 0);
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        sleep 4;
        loop 40 {
            SI_VAR(1) -= 1;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    0x802D286C(2048);
    0x802D2520(0x10002, 5, 2, 1, 1, 0);
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_8024156C) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) == 26) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    group 27;
    func_80240000_86EB00();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_86EBF0();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(6) += 2;
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(8) = SI_VAR(4);
    SI_VAR(8) += 180;
    if (SI_VAR(4) >= 360) {
        SI_VAR(4) -= 360;
    }
    InterpPlayerYaw(SI_VAR(8), 1);
    sleep 1;
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(0), SI_VAR(6), SI_VAR(7));
    SetPlayerAnimation(0x10000);
    0x802D286C(2048);
    0x802D2520(0x10000, 5, 3, 1, 1, 0);
    spawn {
        sleep 8;
        HidePlayerShadow(1);
    }
    spawn {
        sleep 3;
        loop 40 {
            func_8024023C_86ED3C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_802418A0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_86EDE0();
                    return;
                }
            }
        }
    }
    func_80240404_86EF04();
});

Script N(script_ExitWalk_8024193C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242F10_871A10, 1);
    sleep 100;
});

Script N(script_80241998) = SCRIPT({
    GotoMap(D_80242F18_871A18, 2);
    sleep 100;
});

Script N(script_802419C8) = SCRIPT({
    group 27;
    SI_VAR(10) = 1;
    SI_VAR(11) = 6;
    SI_VAR(12) = N(script_80241998);
    await N(script_8024156C);
});

Script N(script_80241A20) = SCRIPT({
    bind N(script_ExitWalk_8024193C) to 0x80000 17;
    bind N(script_802419C8) to TriggerFlag_WALL_PUSH 6;
});

Script N(script_EnterWalk_80241A68) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            SI_VAR(10) = N(script_80241A20);
            SI_VAR(11) = 6;
            spawn N(script_80240EC4);
        }
        else {
            SI_VAR(0) = N(script_80241A20);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(2);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    spawn N(script_802428F8);
    EnableTexPanning(7, 1);
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
        spawn N(script_UpdateTexturePan_802418A0);
    }
    EnableTexPanning(9, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFF38;
        SI_VAR(3) = 0xFFFFFF9C;
        SI_VAR(4) = 0xFFFFFE0C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802418A0);
    }
    EnableTexPanning(10, 1);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFF06;
        SI_VAR(3) = 0xFFFFFF9C;
        SI_VAR(4) = 0xFFFFFE0C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802418A0);
    }
    EnableTexPanning(11, 1);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 0xFFFFFFCE;
        SI_VAR(2) = 0xFFFFFC7C;
        SI_VAR(3) = 0xFFFFFFBA;
        SI_VAR(4) = 0xFFFFFB50;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802418A0);
    }
    spawn N(script_80242BE4);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        bind N(script_802419C8) to TriggerFlag_WALL_PUSH 6;
        await N(script_80242EC0);
        return;
    }
    spawn N(script_80240B40);
    PlaySound(0x8000002B);
    PlaySoundAtF(0x8000002C, 1, 0xFFFFFFF6, 0xFFFFFFEC, 120);
    spawn N(script_EnterWalk_80241A68);
    sleep 1;
});

s32 pad_00205C[] = {
    0x00000000,
};

Script N(script_80242060) = SCRIPT({
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
Script N(script_80242530) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 20, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_86F0F0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80242060)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242708) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242530)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 20, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802428B4)[] = {
    0x00000002, 0x0000006B, 0xFFFFFFA1, 0x000000D0, 0x0000009B, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000002, 0xFFFFFF28, 0xFFFFFFA6, 0x00000052, 0x0000009B, 0x0000010E, 0x0000003C, 0x0000003C,
    0x00000001,
};

Script N(script_802428F8) = SCRIPT({
    SI_VAR(0) = N(unk_802428B4);
    spawn N(script_80242708);
});

s32 pad_002924[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80242930)[] = {
    0x0000000A, 0x0000000B, 0x0000000C, 0x0000000D,
};

Script N(script_80242940) = SCRIPT({
    group 239;
    ParentColliderToModel(SI_VAR(11), SI_VAR(10));
    SI_VAR(0) = 0.0;
    SI_VAR(13) = -300.0;
    SI_VAR(13) -=f SI_VAR(12);
0:
    SI_VAR(1) =f SI_VAR(12);
    SI_VAR(0) -= 80.0;
1:
    func_80240960_86F460();
    SI_VAR(0) += 1.5;
    SI_VAR(1) += 1.5;
    TranslateModel(SI_VAR(10), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(11));
    sleep 1;
    if (SI_VAR(1) < 100.0) {
        goto 1;
    }
    TranslateModel(SI_VAR(10), 0, SI_VAR(13), 0);
    SI_VAR(0) =f SI_VAR(13);
    SI_VAR(12) = -300.0;
    sleep 1;
    goto 0;
});

Script N(script_80242AB4) = SCRIPT({
    SI_VAR(10) = 27;
    SI_VAR(11) = 10;
    SI_VAR(12) = 20;
    await N(script_80242940);
});

Script N(script_80242B00) = SCRIPT({
    SI_VAR(10) = 29;
    SI_VAR(11) = 12;
    SI_VAR(12) = 0xFFFFFFB0;
    await N(script_80242940);
});

Script N(script_80242B4C) = SCRIPT({
    SI_VAR(10) = 30;
    SI_VAR(11) = 13;
    SI_VAR(12) = 0xFFFFFF56;
    await N(script_80242940);
});

Script N(script_80242B98) = SCRIPT({
    SI_VAR(10) = 28;
    SI_VAR(11) = 11;
    SI_VAR(12) = 0xFFFFFEF2;
    await N(script_80242940);
});

Script N(script_80242BE4) = SCRIPT({
    spawn N(script_80242AB4);
    spawn N(script_80242B00);
    spawn N(script_80242B4C);
    spawn N(script_80242B98);
});

s32 pad_002C24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 200, 50, 0xFFFFFFB5, 0, 129, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(400));
    MakeEntity(0x802EA564, 140, 50, 0xFFFFFFB5, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(401));
    MakeEntity(0x802EA564, 260, 50, 0xFFFFFFB5, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(402));
});

s32 pad_002CE8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242CF0) = SCRIPT({
    DemoJoystickXY(0xFFFFFFAB, -1);
    sleep 32;
    DemoSetButtons(0x8000);
    sleep 7;
    DemoSetButtons(0);
    sleep 20;
    DemoSetButtons(0x8000);
    sleep 30;
    DemoSetButtons(0);
    sleep 15;
    func_802409C0_86F4C0();
    sleep 15;
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80242F20_871A20, 2, 2);
    sleep 110;
});

Script N(script_80242DFC) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80242F20_871A20, 2, 3);
    sleep 100;
});

s32 N(unk_80242EBC)[] = {
    0x00000000,
};

Script N(script_80242EC0) = SCRIPT({
    func_802409E0_86F4E0();
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_80242DFC);
    spawn N(script_80242CF0);
});

s32 pad_002F04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242F10_871A10

// rodata: D_80242F18_871A18

// rodata: D_80242F20_871A20

s32 pad_002F28[] = {
    0x00000000, 0x00000000,
};
