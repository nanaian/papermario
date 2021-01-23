#include "gv_01.h"

s32 pad_0007BC[1];
Script N(script_80240810);
Script N(script_80240B64);
Script N(script_80240F54);
Script N(script_80241030);
Script N(script_8024120C);
Script N(script_80241540);
s32 N(intTable_802415DC)[26];
s32 N(intTable_80241644)[19];
Script N(script_80241690);
s32 pad_001CA4[3];

// text: func_80240000_E1E460

// text: func_80240020_E1E480

// text: func_80240034_E1E494

// text: func_802400F0_E1E550

// text: func_802401D0_E1E630

// text: func_8024023C_E1E69C

// text: func_802402E0_E1E740

// text: func_80240404_E1E864

// text: func_802405EC_E1EA4C

// text: func_80240688_E1EAE8

s32 pad_0007BC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_80240810) = SCRIPT({
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
    func_802400F0_E1E550();
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
    func_80240020_E1E480();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240B64) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_E1E550();
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
        func_8024023C_E1E69C(1.0);
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

Script N(script_80240F54) = SCRIPT({
    func_80240034_E1E494();
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
    await N(script_80241030);
});

Script N(script_80241030) = SCRIPT({
    func_80240000_E1E460();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_E1E550();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_E1E550();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_E1E630();
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

Script N(script_8024120C) = SCRIPT({
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
    func_80240000_E1E460();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_E1E550();
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
            func_8024023C_E1E69C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_80241540) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_E1E740();
                    return;
                }
            }
        }
    }
    func_80240404_E1E864();
});

s32 N(intTable_802415DC)[] = {
    0x000000C8, 0x000000AA, 0x0000008C, 0x0000006E, 0x00000050, 0x00000032, 0x00000014, 0x0000000A,
    0x0000001A, 0x0000001D, 0x0000001E, 0x0000001D, 0x0000001A, 0x0000000A, 0x00000000, 0x0000000C,
    0x0000000F, 0x00000010, 0x0000000F, 0x0000000B, 0x00000006, 0x00000000, 0x00000004, 0x00000003,
    0x00000001, 0x00000000,
};

s32 N(intTable_80241644)[] = {
    0x000000C8, 0x000000AA, 0x0000008C, 0x0000006E, 0x00000050, 0x00000032, 0x00000014, 0x00000000,
    0x0000000C, 0x0000000F, 0x00000010, 0x0000000F, 0x0000000B, 0x00000006, 0x00000000, 0x00000004,
    0x00000003, 0x00000001, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241690) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802415DC)),
    SI_CMD(ScriptOpcode_LOOP, 26),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, TranslateGroup, SI_VAR(0), 0, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241644)),
    SI_CMD(ScriptOpcode_LOOP, 19),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, TranslateGroup, SI_VAR(0), 0, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802D585C, 0, 0x20000),
    SI_CMD(ScriptOpcode_CALL, SetCamPerspective, 0, 3, 25, 16, 4096),
    SI_CMD(ScriptOpcode_CALL, SetCamBGColor, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamEnabled, 0, 1),
    SI_CMD(ScriptOpcode_CALL, SetCamLeadPlayer, 0, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, GetCurrentPartnerID, SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 512, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0xFFFFFFFC, 0, 0xFFFFFC18, 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, SetPlayerFlagBits, 0x200000, 1),
        SI_CMD(ScriptOpcode_CALL, InterpPlayerYaw, 90, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_CALL, RandInt, 4, SI_VAR(0)),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x1000D),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
                SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10014),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10023),
            SI_CMD(ScriptOpcode_CASE_EQ, 3),
                SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x1002C),
            SI_CMD(ScriptOpcode_CASE_EQ, 4),
                SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x1000F),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 135, 0, 8),
    SI_CMD(ScriptOpcode_CALL, ClearAmbientSounds, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 200),
        SI_CMD(ScriptOpcode_CALL, func_802405EC_E1EA4C),
        SI_CMD(ScriptOpcode_CALL, func_80240688_E1EAE8),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 100),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, 0x802D7CF8, 0, 0, 0, 320, 240, 128, 10),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 4, 0, 200, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 6, 0, 200, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 8, 0, 200, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 10, 0, 200, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 12, 0, 200, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 14, 0, 200, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 16, 0, 200, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 18, 0, 200, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 4),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241690)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 6),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241690)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 12),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 8),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241690)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 10),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241690)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 12),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241690)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 14),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241690)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 16),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241690)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 18),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 18),
        SI_CMD(ScriptOpcode_SPAWN, pad_0016EC),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 0, 10, 0),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 0, 0, 0),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(0.30078125)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 94),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 0, 0, 1000),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_001CA4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
