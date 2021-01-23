#include "tik_04.h"

s32 pad_0005EC[1];
s32 pad_000C6C[1];
Script N(script_80240CF0);
s32 pad_000D1C[1];
Script N(script_UpdateTexturePan_80240D20);
Script N(script_80240DBC);
Script N(script_80241110);
Script N(script_80241500);
Script N(script_802415DC);
Script N(script_802417B8);
Script N(script_ExitWalk_80241AEC);
Script N(script_ExitWalk_80241B48);
Script N(script_80241BA4);
Script N(script_80241BD4);
Script N(script_80241C2C);
Script N(script_80241C5C);
Script N(script_80241CB4);
Script N(main);
s32 pad_001FB4[3];
Script N(script_80241FC0);
Script N(script_80242490);
Script N(script_80242668);
s32 N(unk_80242814)[17];
Script N(script_80242858);
s32 pad_002884[3];
Script N(script_80242890);
Script N(script_80242B6C);
Script N(script_80242BC8);
s32 pad_002CA8[2];
Script N(script_NpcAI_80242CE0);
Script N(script_Idle_80242D2C);
Script N(script_Init_80242F48);
StaticNpc N(npcGroup_80242F6C)[1];
StaticNpc N(npcGroup_8024315C)[1];
NpcGroupList N(npcGroupList_8024334C);
const char D_80243370_874DA0[8]; // "tik_05"
const char D_80243378_874DA8[8]; // "tik_07"
const char D_80243380_874DB0[8]; // "tik_03"
const char D_80243388_874DB8[8]; // "tik_12"

// text: func_80240000_871A30

// text: func_80240124_871B54

// text: func_8024030C_871D3C

// text: func_8024032C_871D5C

// text: func_80240340_871D70

// text: func_802403FC_871E2C

// text: func_802404DC_871F0C

// text: func_80240548_871F78

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_872020

// text: func_80240960_872390

// text: func_80240A00_872430

// text: func_80240BF4_872624

// text: func_80240C20_872650

s32 pad_000C6C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -220.0f, -10.0f, 0.0f, 90.0f },
    { 320.0f, -10.0f, 0.0f, 270.0f },
    { -110.0f, -10.0f, -80.0f, 270.0f },
    { 268.0f, -105.0f, 94.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190026,
};

Script N(script_80240CF0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_000D1C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80240D20) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_871A30();
                    return;
                }
            }
        }
    }
    func_80240124_871B54();
});

Script N(script_80240DBC) = SCRIPT({
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
    func_802403FC_871E2C();
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
    func_8024032C_871D5C();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241110) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802403FC_871E2C();
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
        func_80240548_871F78(1.0);
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

Script N(script_80241500) = SCRIPT({
    func_80240340_871D70();
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
    await N(script_802415DC);
});

Script N(script_802415DC) = SCRIPT({
    func_8024030C_871D3C();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_871E2C();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_871E2C();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802404DC_871F0C();
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

Script N(script_802417B8) = SCRIPT({
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
    func_8024030C_871D3C();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_871E2C();
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
            func_80240548_871F78(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_ExitWalk_80241AEC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243370_874DA0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241B48) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243378_874DA8, 0);
    sleep 100;
});

Script N(script_80241BA4) = SCRIPT({
    GotoMap(D_80243380_874DB0, 1);
    sleep 100;
});

Script N(script_80241BD4) = SCRIPT({
    group 27;
    SI_VAR(10) = 2;
    SI_VAR(11) = 24;
    SI_VAR(12) = N(script_80241BA4);
    await N(script_802417B8);
});

Script N(script_80241C2C) = SCRIPT({
    GotoMap(D_80243388_874DB8, 0);
    sleep 100;
});

Script N(script_80241C5C) = SCRIPT({
    group 27;
    SI_VAR(10) = 3;
    SI_VAR(11) = 27;
    SI_VAR(12) = N(script_80241C2C);
    await N(script_80241500);
});

Script N(script_80241CB4) = SCRIPT({
    bind N(script_ExitWalk_80241AEC) to 0x80000 14;
    bind N(script_ExitWalk_80241B48) to 0x80000 19;
    bind N(script_80241BD4) to TriggerFlag_WALL_PUSH 24;
    bind N(script_80241C5C) to TriggerFlag_FLOOR_TOUCH 27;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(3);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_8024334C));
    spawn N(script_80240CF0);
    spawn N(script_80242858);
    EnableTexPanning(8, 1);
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
        spawn N(script_UpdateTexturePan_80240D20);
    }
    spawn N(script_80242BC8);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 2 {
            SI_VAR(10) = N(script_80241CB4);
            SI_VAR(11) = 24;
            spawn N(script_80241110);
        }
        == 3 {
            SI_VAR(10) = N(script_80241CB4);
            spawn N(script_80240DBC);
        }
        else {
            SI_VAR(0) = N(script_80241CB4);
            spawn EnterWalk;
        }
    }
    sleep 1;
});

s32 pad_001FB4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241FC0) = SCRIPT({
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
Script N(script_80242490) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 16, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_872020, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241FC0)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242668) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242490)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 16, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80242814)[] = {
    0x00000002, 0xFFFFFF1A, 0xFFFFFFD8, 0x00000096, 0x00000050, 0x000000C8, 0xFFFFFFF6, 0x00000032,
    0x00000001, 0xFFFFFFCE, 0x00000064, 0x00000163, 0x00000025, 0x000000C8, 0xFFFFFF79, 0x00000050,
    0x00000002,
};

Script N(script_80242858) = SCRIPT({
    SI_VAR(0) = N(unk_80242814);
    spawn N(script_80242668);
});

s32 pad_002884[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80242890) = {
    SI_CMD(ScriptOpcode_CALL, func_80240BF4_872624, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, func_80240C20_872650),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(1), 10, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(5), SI_VAR(0)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(5), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(5), SI_FIXED(30.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(2), 0xFFFFFFF6, SI_VAR(5), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(4)),
    SI_CMD(ScriptOpcode_SUB_F, SI_VAR(0), SI_FIXED(0.5)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), SI_FIXED(-120.0)),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_FIXED(0.5)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_MAP_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240A00_872430),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240BF4_872624, SI_VAR(11)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerActionState, SI_VAR(12)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), SI_VAR(3)),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(12), 3),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240C20_872650),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_FIXED(0.5)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(1), 10, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(5), SI_VAR(0)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(5), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(5), SI_FIXED(30.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(2), 0xFFFFFFF6, SI_VAR(5), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(4)),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_MAP_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240A00_872430),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240BF4_872624, SI_VAR(11)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerActionState, SI_VAR(12)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), SI_VAR(3)),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(12), 3),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242B6C) = SCRIPT({
    SI_VAR(1) = 18;
    SI_VAR(2) = 20;
    SI_VAR(3) = 9;
    SI_VAR(4) = 11;
    await N(script_80242890);
});

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_80242BC8) = {
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 9, 18),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 11, 20),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, 18, 10, 0, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, 20, 0xFFFFFFF6, 30, 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 9),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 11),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242B6C), TriggerFlag_FLOOR_TOUCH, 9, 1, 0),
    SI_CMD(ScriptOpcode_USE_FLAGS, 2),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_MAP_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240960_872390),
    SI_CMD(ScriptOpcode_CALL, func_80240A00_872430),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 pad_002CA8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242CB0) = {
    .moveSpeed = 2.200000047683716,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 70.0,
    .unk_10 = 0.0,
    .unk_14 = 0x1,
    .chaseSpeed = 3.200000047683716,
    .unk_1C = 0xF,
    .unk_20 = 0x1,
    .chaseRadius = 90.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242CE0) = SCRIPT({
    DoBasicAI(N(aISettings_80242CB0));
});

NpcSettings N(npcSettings_80242D00) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242CE0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0,
};

Script N(script_Idle_80242D2C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcPos(-1, 280, 0xFFFFFFF6, 0);
        }
        == 1 {
            BindNpcAI(-1, N(script_NpcAI_80242CE0));
            return;
        }
        == 2 {
            SetNpcPos(-1, 280, 0xFFFFFFF6, 0);
        }
        == 3 {
            SetNpcPos(-1, 360, 0xFFFFFFF6, 0);
        }
    }
100:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFFFE2) {
        sleep 1;
        goto 100;
    }
    SetNpcAnimation(-1, 0x270103);
    SetNpcFlagBits(-1, 40, 0);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcSpeed(-1, 2);
    GetSelfNpcID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        NpcMoveTo(-1, 55, 0, 0);
    } else {
        sleep 14;
        NpcMoveTo(-1, 60, 0, 0);
    }
    SetNpcAnimation(-1, 0x270101);
    BindNpcAI(-1, N(script_NpcAI_80242CE0));
});

Script N(script_Init_80242F48) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80242D2C));
});

StaticNpc N(npcGroup_80242F6C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242D00),
        .pos = { 40.0, -135.0, 10.0 },
        .flags = 0x00000400,
        .init = N(script_Init_80242F48),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0x00000028, 0xFFFFFF79, 0x0000000A, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000028, 0xFFFFFF79, 0x0000000A, 0x000000C8 },
        .animations = {
            0x00270101, 0x00270103, 0x00270103, 0x00270103, 0x00270103, 0x00270101, 0x00270105, 0x00270105, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100,
        },
    },
};

StaticNpc N(npcGroup_8024315C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242D00),
        .pos = { 141.0, -135.0, 85.0 },
        .flags = 0x00000400,
        .init = N(script_Init_80242F48),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0x0000008D, 0xFFFFFF79, 0x00000055, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000008D, 0xFFFFFF79, 0x00000055, 0x000000C8 },
        .animations = {
            0x00270101, 0x00270103, 0x00270103, 0x00270103, 0x00270103, 0x00270101, 0x00270105, 0x00270105, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100,
        },
    },
};

NpcGroupList N(npcGroupList_8024334C) = {
    NPC_GROUP(N(npcGroup_80242F6C), 0x1A0F0002),
    NPC_GROUP(N(npcGroup_8024315C), 0x1A0E0002),
    {},
};

// rodata: D_80243370_874DA0

// rodata: D_80243378_874DA8

// rodata: D_80243380_874DB0

// rodata: D_80243388_874DB8

