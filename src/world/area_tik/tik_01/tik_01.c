#include "tik_01.h"

s32 pad_0005EC[1];
s32 pad_000A24[3];
s32 pad_000A88[2];
Script N(script_80240B20);
Script N(script_80240B4C);
s32 pad_000B78[2];
Script N(script_UpdateTexturePan_80240B80);
Script N(script_80240C1C);
Script N(script_80240F70);
Script N(script_80241360);
Script N(script_8024143C);
Script N(script_80241618);
Script N(script_ExitWalk_8024194C);
Script N(script_ExitWalk_802419A8);
Script N(script_80241A04);
Script N(main);
s32 pad_001E9C[1];
Script N(script_80241EA0);
Script N(script_80242370);
Script N(script_80242548);
s32 N(unk_802426F4)[9];
Script N(script_80242718);
s32 pad_002744[3];
Script N(script_80242750);
Script N(script_80242874);
Script N(script_802428AC);
Script N(script_802428DC);
Script N(script_8024290C);
Script N(script_8024293C);
Script N(script_MakeEntities);
s32 N(shortTable_80242B7C)[3];
Script N(script_Idle_80242B88);
Script N(script_Defeat_80242D2C);
Script N(script_Init_80242F20);
StaticNpc N(npcGroup_8024304C)[1];
NpcGroupList N(npcGroupList_8024323C);
s32 pad_003254[3];
const char D_80243260_86C710[8]; // "tik_06"
const char D_80243268_86C718[8]; // "tik_03"
const char D_80243270_86C720[8]; // "kmr_02"
const char D_80243278_86C728[8]; // "nok_02"
const char D_80243280_86C730[8]; // "dro_01"
s32 pad_003288[2];

// text: func_80240000_8694B0

// text: func_80240124_8695D4

// text: func_8024030C_8697BC

// text: func_8024032C_8697DC

// text: func_80240340_8697F0

// text: func_802403FC_8698AC

// text: func_802404DC_86998C

// text: func_80240548_8699F8

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_869AA0

// text: func_80240960_869E10

s32 pad_000A24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240A30_869EE0

s32 pad_000A88[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 320.0f, -10.0f, 0.0f, 270.0f },
    { -220.0f, -10.0f, 0.0f, 90.0f },
    { 150.0f, 25.0f, -82.0f, 180.0f },
    { 50.0f, 25.0f, -82.0f, 180.0f },
    { -50.0f, 25.0f, -82.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190023,
};

Script N(script_80240B20) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

Script N(script_80240B4C) = SCRIPT({
    SetMusicTrack(0, 90, 0, 8);
});

s32 pad_000B78[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240B80) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_8694B0();
                    return;
                }
            }
        }
    }
    func_80240124_8695D4();
});

Script N(script_80240C1C) = SCRIPT({
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
    func_802403FC_8698AC();
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
    func_8024032C_8697DC();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240F70) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802403FC_8698AC();
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
        func_80240548_8699F8(1.0);
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

Script N(script_80241360) = SCRIPT({
    func_80240340_8697F0();
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
    await N(script_8024143C);
});

Script N(script_8024143C) = SCRIPT({
    func_8024030C_8697BC();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_8698AC();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_8698AC();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802404DC_86998C();
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

Script N(script_80241618) = SCRIPT({
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
    func_8024030C_8697BC();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_8698AC();
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
            func_80240548_8699F8(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_ExitWalk_8024194C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243260_86C710, 0);
    sleep 100;
});

Script N(script_ExitWalk_802419A8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243268_86C718, 0);
    sleep 100;
});

Script N(script_80241A04) = SCRIPT({
    bind N(script_ExitWalk_802419A8) to 0x80000 8;
    bind N(script_ExitWalk_8024194C) to 0x80000 14;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_8024323C));
    await N(script_MakeEntities);
    spawn N(script_80240B20);
    PlaySound(0x80000027);
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
        spawn N(script_UpdateTexturePan_80240B80);
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
        spawn N(script_UpdateTexturePan_80240B80);
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
        spawn N(script_UpdateTexturePan_80240B80);
    }
    spawn N(script_80242718);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) < 2) {
        SI_VAR(0) = N(script_80241A04);
        spawn EnterWalk;
    } else {
        SI_VAR(10) = N(script_80241A04);
        spawn N(script_80240C1C);
    }
    sleep 1;
});

s32 pad_001E9C[] = {
    0x00000000,
};

Script N(script_80241EA0) = SCRIPT({
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
Script N(script_80242370) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 18, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_869AA0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241EA0)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242548) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242370)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 18, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802426F4)[] = {
    0x00000001, 0xFFFFFF51, 0xFFFFFFBF, 0x000001E5, 0x0000008C, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000004,
};

Script N(script_80242718) = SCRIPT({
    SI_VAR(0) = N(unk_802426F4);
    spawn N(script_80242548);
});

s32 pad_002744[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242750) = SCRIPT({
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(2) += 0xFFFFFFB5;
    PlaySoundAt(769, 0, SI_VAR(2), 200, 25);
    MakeLerp(200, 0xFFFFFFF6, 25, 1);
    loop {
        UpdateLerp();
        func_80240960_869E10(SI_MAP_VAR(1), SI_VAR(2), SI_VAR(0), 25);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    PlaySoundAt(72, 0, SI_VAR(2), SI_VAR(0), 25);
    ShakeCam(0, 0, 5, 1.0);
    sleep 10;
});

Script N(script_80242874) = SCRIPT({
    SI_SAVE_FLAG(394) = 1;
    ModifyColliderFlags(0, 11, 0x7FFFFE00);
});

Script N(script_802428AC) = SCRIPT({
    GotoMap(D_80243270_86C720, 3);
    sleep 100;
});

Script N(script_802428DC) = SCRIPT({
    GotoMap(D_80243278_86C728, 2);
    sleep 100;
});

Script N(script_8024290C) = SCRIPT({
    GotoMap(D_80243280_86C730, 2);
    sleep 100;
});

Script N(script_8024293C) = SCRIPT({
    sleep 10;
    PlaySound(8334);
    SI_SAVE_FLAG(1933) = 1;
    unbind;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(394) == 0) {
        MakeEntity(0x802EA19C, 0xFFFFFF10, 0xFFFFFFF6, 0, 0, 0x80000000);
        AssignScript(N(script_80242874));
    } else {
        ModifyColliderFlags(0, 11, 0x7FFFFE00);
    }
    ModifyColliderFlags(0, 17, 0x7FFFFE00);
    if (SI_SAVE_FLAG(1933) == 0) {
        MakeEntity(0x802E9BD4, 0, 0xFFFFFC18, 0, 0, 0x80000000);
        AssignAreaFlag(3);
        SI_MAP_VAR(1) = SI_VAR(0);
        bind N(script_8024293C) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(3);
        if (SI_SAVE_FLAG(429) == 1) {
            func_80240960_869E10(SI_MAP_VAR(1), 125, 0xFFFFFFF6, 25);
        }
    }
    MakeEntity(0x802EAF80, 150, 0xFFFFFFF6, 0xFFFFFFAE, 0, 2, N(script_802428AC), 1933, 0x80000000);
    MakeEntity(0x802EAF80, 50, 0xFFFFFFF6, 0xFFFFFFAE, 0, 3, N(script_802428DC), 1933, 0x80000000);
    MakeEntity(0x802EAF80, 0xFFFFFFCE, 0xFFFFFFF6, 0xFFFFFFAE, 0, 4, N(script_8024290C), 1933, 0x80000000);
});

NpcSettings N(npcSettings_80242B50) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
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

s32 N(shortTable_80242B7C)[] = {
    0x00001B00, 0x00001B01, 0x00001B02,
};

Script N(script_Idle_80242B88) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 200) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    spawn N(script_80240B4C);
    ShowMessageAtScreenPos(0x80000, 160, 40);
    sleep 20;
    SetNpcAnimation(-1, 0x500001);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFB5;
    SetNpcPos(-1, SI_VAR(0), 150, 0);
    PlaySoundAtNpc(-1, 988, 0);
    PlaySoundAtNpc(-1, 999, 0);
    NpcFlyTo(-1, SI_VAR(0), 0, 0, 10, 0, 1);
    SetNpcAnimation(-1, 0x50000C);
    ShakeCam(0, 0, 5, 1.0);
    sleep 15;
    StartBossBattle(3);
});

Script N(script_Defeat_80242D2C) = SCRIPT({
    sleep 5;
    spawn {
        SetNpcAnimation(-1, 0x500004);
        MakeLerp(0, 2160, 40, 0);
        loop {
            UpdateLerp();
            SetNpcRotation(-1, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    PlaySoundAtNpc(-1, 989, 0);
    PlaySoundAtNpc(-1, 999, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcFlyTo(-1, SI_VAR(0), 150, 0, 15, 0, 1);
    sleep 5;
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    sleep 15;
    await N(script_80242750);
    if (SI_SAVE_FLAG(427) == 0) {
        SI_SAVE_FLAG(427) = 1;
    } else {
        SI_SAVE_FLAG(428) = 1;
    }
    SI_SAVE_FLAG(429) = 1;
    spawn N(script_80240B20);
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Init_80242F20) = SCRIPT({
    if (SI_SAVE_FLAG(429) == 0) {
        BindNpcIdle(-1, N(script_Idle_80242B88));
        BindNpcDefeat(-1, N(script_Defeat_80242D2C));
        if (SI_SAVE_FLAG(427) == 0) {
            SetNpcScale(-1, 0.75, 0.75, 0.75);
            func_80240A30_869EE0(0);
        } else {
            if (SI_SAVE_FLAG(428) == 0) {
                SetNpcScale(-1, 1.25, 1.25, 1.25);
                func_80240A30_869EE0(1);
            } else {
                SetNpcScale(-1, 2.0, 2.0, 2.0);
                func_80240A30_869EE0(2);
            }
        }
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_8024304C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242B50),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00840D0D,
        .init = N(script_Init_80242F20),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C,
        },
    },
};

NpcGroupList N(npcGroupList_8024323C) = {
    NPC_GROUP(N(npcGroup_8024304C), 0x1B000001),
    {},
};

s32 pad_003254[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80243260_86C710

// rodata: D_80243268_86C718

// rodata: D_80243270_86C720

// rodata: D_80243278_86C728

// rodata: D_80243280_86C730

s32 pad_003288[] = {
    0x00000000, 0x00000000,
};

