#include "tik_20.h"

s32 pad_00095C[1];
s32 pad_001134[3];
Script N(script_802411B0);
s32 pad_0011DC[1];
Script N(script_UpdateTexturePan_802411E0);
Script N(script_8024127C);
Script N(script_802415D0);
Script N(script_802419C0);
Script N(script_80241A9C);
Script N(script_80241C78);
Script N(script_ExitWalk_80241FAC);
Script N(script_ExitWalk_80242008);
Script N(script_80242064);
Script N(script_80242094);
Script N(script_802420EC);
s32 N(lavaResetList_80242150)[12];
Script N(script_80242180);
Script N(script_80242650);
Script N(script_80242828);
s32 N(unk_802429D4)[17];
Script N(script_80242A18);
Script N(script_80242A44);
Script N(main);
s32 pad_002EA8[2];
Script N(script_NpcAI_80242EE0);
StaticNpc N(npcGroup_80242F7C)[1];
StaticNpc N(npcGroup_8024316C)[1];
NpcGroupList N(npcGroupList_8024335C);
Script N(script_MakeEntities);
s32 pad_0033C8[2];
const char D_802433D0_89D720[8]; // "tik_08"
const char D_802433D8_89D728[8]; // "tik_21"
const char D_802433E0_89D730[8]; // "tik_23"
s32 pad_0033E8[2];
s32 pad_00344C[1];

// text: func_80240000_89A350

// text: func_80240124_89A474

// text: func_8024030C_89A65C

// text: func_8024032C_89A67C

// text: func_80240340_89A690

// text: func_802403FC_89A74C

// text: func_802404DC_89A82C

// text: func_80240548_89A898

// text: func_802405EC_89A93C

s32 pad_00095C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_802409DC_89AD2C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240CF4_89B044

s32 pad_001134[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -320.0f, -20.0f, 0.0f, 90.0f },
    { 507.0f, -20.0f, 0.0f, 270.0f },
    { 207.0f, 60.0f, -100.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190033,
};

Script N(script_802411B0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_0011DC[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802411E0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_89A350();
                    return;
                }
            }
        }
    }
    func_80240124_89A474();
});

Script N(script_8024127C) = SCRIPT({
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
    func_802403FC_89A74C();
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
    func_8024032C_89A67C();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_802415D0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802403FC_89A74C();
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
        func_80240548_89A898(1.0);
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

Script N(script_802419C0) = SCRIPT({
    func_80240340_89A690();
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
    await N(script_80241A9C);
});

Script N(script_80241A9C) = SCRIPT({
    func_8024030C_89A65C();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_89A74C();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_89A74C();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802404DC_89A82C();
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

Script N(script_80241C78) = SCRIPT({
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
    func_8024030C_89A65C();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802403FC_89A74C();
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
            func_80240548_89A898(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_ExitWalk_80241FAC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802433D0_89D720, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242008) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802433D8_89D728, 0);
    sleep 100;
});

Script N(script_80242064) = SCRIPT({
    GotoMap(D_802433E0_89D730, 1);
    sleep 100;
});

Script N(script_80242094) = SCRIPT({
    group 27;
    SI_VAR(10) = 2;
    SI_VAR(11) = 17;
    SI_VAR(12) = N(script_80242064);
    await N(script_802419C0);
});

Script N(script_802420EC) = SCRIPT({
    bind N(script_ExitWalk_80241FAC) to 0x80000 8;
    bind N(script_ExitWalk_80242008) to 0x80000 13;
    bind N(script_80242094) to TriggerFlag_FLOOR_TOUCH 17;
});

s32 N(lavaResetList_80242150)[] = {
    0x00000000, 0xC33E0000, 0x41F00000, 0xC2AA0000, 0x00000001, 0x43480000, 0x41F00000, 0xC28C0000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242180) = SCRIPT({
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
Script N(script_80242650) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 19, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405EC_89A93C, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80242180)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242828) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242650)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 19, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802429D4)[] = {
    0x00000002, 0xFFFFFEC8, 0xFFFFFFED, 0x00000034, 0x0000002E, 0x000000C8, 0xFFFFFFEC, 0x0000003C,
    0x00000002, 0x000001CC, 0xFFFFFFCE, 0x00000028, 0x000000B9, 0x000000C8, 0xFFFFFFEC, 0x0000003C,
    0x00000001,
};

Script N(script_80242A18) = SCRIPT({
    SI_VAR(0) = N(unk_802429D4);
    spawn N(script_80242828);
});

Script N(script_80242A44) = SCRIPT({
    loop {
        MakeLerp(0, 0xFFFFFFF6, 25, 4);
        loop {
            UpdateLerp();
            TranslateGroup(SI_VAR(2), 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(0xFFFFFFF6, 0, 30, 4);
        loop {
            UpdateLerp();
            TranslateGroup(SI_VAR(2), 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(main) = {
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(425), 2),
    SI_CMD(ScriptOpcode_CALL, SetSpriteShading, 14),
    SI_CMD(ScriptOpcode_CALL, SetCamPerspective, 0, 3, 25, 16, 4096),
    SI_CMD(ScriptOpcode_CALL, SetCamBGColor, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamEnabled, 0, 1),
    SI_CMD(ScriptOpcode_CALL, SetCamLeadPlayer, 0, 0),
    SI_CMD(ScriptOpcode_CALL, MakeNpcs, 1, N(npcGroupList_8024335C)),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_MakeEntities)),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 3, 3, 2),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, ResetFromLava, N(lavaResetList_80242150)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802411B0)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x80000047),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80242A18)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 70),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 100),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 100),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 130),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(7), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(8), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(10), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(11), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(12), 0),
        SI_CMD(ScriptOpcode_SPAWN, N(script_UpdateTexturePan_802411E0)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetTexPanner, 8, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 28),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80242A44)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 30),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80242A44)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 32),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80242A44)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 0),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 1),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(script_802420EC)),
            SI_CMD(ScriptOpcode_SPAWN, EnterWalk),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), N(script_802420EC)),
            SI_CMD(ScriptOpcode_SPAWN, N(script_8024127C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_002EA8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242EB0) = {
    .moveSpeed = 2.0,
    .moveTime = 0x3C,
    .waitTime = 0x5,
    .alertRadius = 80.0,
    .unk_10 = 60.0,
    .unk_14 = 0x3,
    .chaseSpeed = 9.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 90.0,
    .unk_28 = 70.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242EE0) = SCRIPT({
    SetSelfVar(2, 6);
    SetSelfVar(3, 4);
    SetSelfVar(5, 13);
    SetSelfVar(7, 1);
    func_80240CF4_89B044(N(aISettings_80242EB0));
});

NpcSettings N(npcSettings_80242F50) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242EE0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x12,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80242F7C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242F50),
        .pos = { -50.0, -20.0, 100.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0xFFFFFFCE, 0xFFFFFFEC, 0x00000064, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFCE, 0xFFFFFFEC, 0x00000064, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x0029000B, 0x0029000B, 0x00290007, 0x00290006, 0x00290008, 0x00290000, 0x00290004, 0x00290004, 0x00290004, 0x00290004,
        },
    },
};

StaticNpc N(npcGroup_8024316C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242F50),
        .pos = { 250.0, -20.0, 100.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0x000000FA, 0xFFFFFFEC, 0x00000064, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000FA, 0xFFFFFFEC, 0x00000064, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x0029000B, 0x0029000B, 0x00290007, 0x00290006, 0x00290008, 0x00290000, 0x00290004, 0x00290004, 0x00290004, 0x00290004,
        },
    },
};

NpcGroupList N(npcGroupList_8024335C) = {
    NPC_GROUP(N(npcGroup_80242F7C), 0x1A040004),
    NPC_GROUP(N(npcGroup_8024316C), 0x1A050004),
    {},
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 475, 70, 0xFFFFFF9C, 0, 131, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(410));
});

s32 pad_0033C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802433D0_89D720

// rodata: D_802433D8_89D728

// rodata: D_802433E0_89D730

s32 pad_0033E8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802433F0_89D740

// rodata: jtbl_802433F8_89D748

s32 pad_00344C[] = {
    0x00000000,
};

