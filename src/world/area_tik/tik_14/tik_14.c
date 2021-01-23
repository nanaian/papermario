#include "tik_14.h"

s32 pad_0005EC[1];
Script N(script_802409C0);
s32 pad_0009EC[1];
Script N(script_802409F0);
Script N(script_80240D44);
Script N(script_80241134);
Script N(script_80241210);
Script N(script_802413EC);
Script N(script_UpdateTexturePan_80241720);
Script N(script_ExitWalk_802417BC);
Script N(script_80241818);
Script N(script_80241848);
Script N(script_802418A0);
Script N(script_EnterWalk_80241900);
Script N(main);
s32 pad_001B7C[1];
Script N(script_80241B80);
Script N(script_80242050);
Script N(script_80242228);
s32 N(unk_802423D4)[9];
Script N(script_802423F8);
s32 pad_002424[3];
Script N(script_80242440);
Script N(script_80242518);
const char D_80242590_88FB90[8]; // "tik_15"
const char D_80242598_88FB98[8]; // "tik_21"

// text: func_80240000_88D600

// text: func_80240020_88D620

// text: func_80240034_88D634

// text: func_802400F0_88D6F0

// text: func_802401D0_88D7D0

// text: func_8024023C_88D83C

// text: func_802402E0_88D8E0

// text: func_80240404_88DA04

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_88DBF0

EntryList N(entryList) = {
    { -173.0f, 0.0f, 0.0f, 90.0f },
    { 30.0f, 0.0f, 45.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19002E,
};

Script N(script_802409C0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_0009EC[] = {
    0x00000000,
};

Script N(script_802409F0) = SCRIPT({
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
    func_802400F0_88D6F0();
    SI_VAR(2) -= 40;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    PlaySound(355);
    func_802D286C(256);
    func_802D2520(0x10000, 5, 2, 1, 1, 0);
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
    func_802D2520(0x10000, 0, 0, 0, 0, 0);
    sleep 1;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    HidePlayerShadow(0);
0:
    func_80240020_88D620();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240D44) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_88D6F0();
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
    func_802D286C(2304);
    func_802D2520(0x10002, 5, 3, 1, 1, 0);
    loop 40 {
        func_8024023C_88D83C(1.0);
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
    func_802D2520(0x10002, 0, 0, 0, 0, 0);
    ModifyColliderFlags(1, SI_VAR(11), 0x7FFFFE00);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    spawn 0xFE363C8A;
});

Script N(script_80241134) = SCRIPT({
    func_80240034_88D634();
    if (SI_VAR(0) == 0) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            func_802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    await N(script_80241210);
});

Script N(script_80241210) = SCRIPT({
    func_80240000_88D600();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_88D6F0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_88D6F0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_88D7D0();
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
    func_802D286C(2048);
    func_802D2520(0x10002, 5, 2, 1, 1, 0);
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_802413EC) = SCRIPT({
    func_802D249C(SI_VAR(0));
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
            func_802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    group 27;
    func_80240000_88D600();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_88D6F0();
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
    func_802D286C(2048);
    func_802D2520(0x10000, 5, 3, 1, 1, 0);
    spawn {
        sleep 8;
        HidePlayerShadow(1);
    }
    spawn {
        sleep 3;
        loop 40 {
            func_8024023C_88D83C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_80241720) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_88D8E0();
                    return;
                }
            }
        }
    }
    func_80240404_88DA04();
});

Script N(script_ExitWalk_802417BC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242590_88FB90, 0);
    sleep 100;
});

Script N(script_80241818) = SCRIPT({
    GotoMap(D_80242598_88FB98, 2);
    sleep 100;
});

Script N(script_80241848) = SCRIPT({
    group 27;
    SI_VAR(10) = 0;
    SI_VAR(11) = 10;
    SI_VAR(12) = N(script_80241818);
    await N(script_802413EC);
});

Script N(script_802418A0) = SCRIPT({
    bind N(script_80241848) to TriggerFlag_WALL_PUSH 10;
    bind N(script_ExitWalk_802417BC) to 0x80000 4;
    ModifyColliderFlags(1, 10, 0x7FFFFE00);
});

Script N(script_EnterWalk_80241900) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(10) = N(script_802418A0);
            SI_VAR(11) = 10;
            spawn N(script_80240D44);
        }
        == 1 {
            SI_VAR(0) = N(script_802418A0);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(11);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    spawn N(script_802409C0);
    spawn N(script_802423F8);
    await N(script_80242518);
    EnableTexPanning(7, 1);
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
        spawn N(script_UpdateTexturePan_80241720);
    }
    ModifyColliderFlags(0, 10, 0x7FFFFE00);
    spawn N(script_EnterWalk_80241900);
    sleep 1;
});

s32 pad_001B7C[] = {
    0x00000000,
};

Script N(script_80241B80) = SCRIPT({
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
Script N(script_80242050) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 13, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_88DBF0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241B80)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242228) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242050)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 13, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802423D4)[] = {
    0x00000001, 0xFFFFFF29, 0x00000023, 0x000000E4, 0x00000066, 0x000000D2, 0x00000000, 0x0000003C,
    0x00000002,
};

Script N(script_802423F8) = SCRIPT({
    SI_VAR(0) = N(unk_802423D4);
    spawn N(script_80242228);
});

s32 pad_002424[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Vec4f N(triggerCoord_80242430) =  { 35.0f, 0.0f, 45.0f, 0.0f };

Script N(script_80242440) = SCRIPT({
    PlayEffect(66, 0, 9, 0, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(9, 1);
        sleep 1;
        EnableModel(9, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_SAVE_FLAG(393) = 1;
    unbind;
});

Script N(script_80242518) = SCRIPT({
    if (SI_SAVE_FLAG(393) == 1) {
        EnableModel(9, 0);
        ModifyColliderFlags(0, 5, 0x7FFFFE00);
    } else {
        bind N(script_80242440) to TriggerFlag_BOMB N(triggerCoord_80242430);
    }
});

// rodata: D_80242590_88FB90

// rodata: D_80242598_88FB98
