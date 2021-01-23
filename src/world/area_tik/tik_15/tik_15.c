#include "tik_15.h"

s32 pad_0005EC[1];
s32 pad_000B04[3];
Script N(script_80240B70);
s32 pad_000B9C[1];
Script N(script_80240BA0);
Script N(script_80240EF4);
Script N(script_802412E4);
Script N(script_802413C0);
Script N(script_8024159C);
Script N(script_UpdateTexturePan_802418D0);
Script N(script_ExitWalk_8024196C);
Script N(script_802419C8);
Script N(script_802419F8);
Script N(script_80241A50);
Script N(main);
s32 pad_001CE8[2];
Script N(script_80241D00);
Script N(script_80241DD8);
Script N(script_80241E50);
Script N(script_80242320);
Script N(script_802424F8);
s32 N(unk_802426A4)[9];
Script N(script_802426C8);
s32 pad_0026F4[3];
s32 unk_missing_8024272C[11];
s32 N(unk_80242758)[1];
Script N(script_8024275C);
Script N(script_8024278C);
s32 N(unk_802427BC)[26];
Script N(script_Interact_80242824);
Script N(script_Init_80242C34);
StaticNpc N(npcGroup_80242C68)[1];
NpcGroupList N(npcGroupList_80242E58);
const char D_80242E70_892A10[8]; // "tik_14"
const char D_80242E78_892A18[8]; // "mac_02"

// text: func_80240000_88FBA0

// text: func_80240020_88FBC0

// text: func_80240034_88FBD4

// text: func_802400F0_88FC90

// text: func_802401D0_88FD70

// text: func_8024023C_88FDDC

// text: func_802402E0_88FE80

// text: func_80240404_88FFA4

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_890190

// text: func_80240960_890500

// text: func_80240A14_8905B4

// text: func_80240A78_890618

// text: func_80240AA4_890644

// text: func_80240AD0_890670

s32 pad_000B04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -230.0f, -10.0f, 0.0f, 90.0f },
    { 75.0f, -10.0f, -15.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19002F,
};

Script N(script_80240B70) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_000B9C[] = {
    0x00000000,
};

Script N(script_80240BA0) = SCRIPT({
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
    func_802400F0_88FC90();
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
    func_80240020_88FBC0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240EF4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_88FC90();
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
        func_8024023C_88FDDC(1.0);
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

Script N(script_802412E4) = SCRIPT({
    func_80240034_88FBD4();
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
    await N(script_802413C0);
});

Script N(script_802413C0) = SCRIPT({
    func_80240000_88FBA0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_88FC90();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_88FC90();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_88FD70();
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

Script N(script_8024159C) = SCRIPT({
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
    func_80240000_88FBA0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_88FC90();
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
            func_8024023C_88FDDC(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_802418D0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_88FE80();
                    return;
                }
            }
        }
    }
    func_80240404_88FFA4();
});

Script N(script_ExitWalk_8024196C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242E70_892A10, 1);
    sleep 100;
});

Script N(script_802419C8) = SCRIPT({
    GotoMap(D_80242E78_892A18, 5);
    sleep 100;
});

Script N(script_802419F8) = SCRIPT({
    group 27;
    SI_VAR(10) = 1;
    SI_VAR(11) = 9;
    SI_VAR(12) = N(script_802419C8);
    await N(script_8024159C);
});

Script N(script_80241A50) = SCRIPT({
    bind N(script_ExitWalk_8024196C) to 0x80000 12;
    bind N(script_802419F8) to TriggerFlag_WALL_PUSH 9;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(12);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80242E58));
    spawn N(script_80240B70);
    spawn N(script_802426C8);
    EnableTexPanning(16, 1);
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
        spawn N(script_UpdateTexturePan_802418D0);
    }
    await N(script_80241DD8);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SI_VAR(10) = N(script_80241A50);
        SI_VAR(11) = 9;
        spawn N(script_80240EF4);
    } else {
        SI_VAR(0) = N(script_80241A50);
        spawn EnterWalk;
    }
    sleep 1;
});

s32 pad_001CE8[] = {
    0x00000000, 0x00000000,
};

Vec4f N(triggerCoord_80241CF0) =  { -230.0, -10.0, 0.0, 0.0 };

Script N(script_80241D00) = SCRIPT({
    PlayEffect(66, 0, 18, 0, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(18, 1);
        sleep 1;
        EnableModel(18, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 11, 0x7FFFFE00);
    SI_SAVE_FLAG(393) = 1;
    unbind;
});

Script N(script_80241DD8) = SCRIPT({
    if (SI_SAVE_FLAG(393) == 1) {
        EnableModel(18, 0);
        ModifyColliderFlags(0, 11, 0x7FFFFE00);
    } else {
        bind N(script_80241D00) to TriggerFlag_BOMB N(triggerCoord_80241CF0);
    }
});

Script N(script_80241E50) = SCRIPT({
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
Script N(script_80242320) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 22, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_890190, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241E50)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802424F8) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242320)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 22, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802426A4)[] = {
    0x00000001, 0xFFFFFF24, 0xFFFFFFEE, 0x000000F3, 0x0000009B, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000002,
};

Script N(script_802426C8) = SCRIPT({
    SI_VAR(0) = N(unk_802426A4);
    spawn N(script_802424F8);
});

s32 pad_0026F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242700) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
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

s32 unk_missing_8024272C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

s32 N(unk_80242758)[] = {
    0x00000000,
};

Script N(script_8024275C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_8024278C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_802427BC)[] = {
    0x00000000, 0x00000000, 0x00000002, 0x00000095, 0x00000001, 0x00000120, 0x00000002, 0x00000097,
    0x00000000, 0x00000000, 0x00000002, 0x0000008C, 0x00000002, 0x0000008A, 0x00000002, 0x0000008D,
    0x00000002, 0x0000008D, 0x00000000, 0x00000000, 0x00000002, 0x0000008D, 0x00000002, 0x0000008D,
    0x00000002, 0x0000008D,
};

Script N(script_Interact_80242824) = SCRIPT({
    if (SI_AREA_FLAG(2) == 0) {
        if (SI_SAVE_FLAG(389) == 0) {
            SI_VAR(0) = 0x80001;
            SI_SAVE_FLAG(389) = 1;
        } else {
            SI_VAR(0) = 0x80002;
        }
        SI_AREA_FLAG(2) = 1;
    } else {
        SI_VAR(0) = 0x80003;
    }
    SpeakToPlayer(1, 0xAE0004, 0xAE0001, 0, SI_VAR(0));
0:
    ShowCoinCounter(1);
    ShowChoice(0x1E0001);
    if (SI_VAR(0) != 0) {
        ShowCoinCounter(0);
        ContinueSpeech(1, 0xAE0004, 0xAE0001, 0, 0x80005);
        return;
    }
    func_80240AD0_890670(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        ShowCoinCounter(0);
        ContinueSpeech(1, 0xAE0004, 0xAE0001, 0, 0x80006);
        return;
    }
    SI_VAR(0) = SI_SAVE_VAR(56);
    func_80240A78_890618();
    match SI_VAR(10) {
        == 0 {
            AddCoin(0xFFFFFFC0);
            ShowCoinCounter(0);
            EndSpeech(1, 0xAE0004, 0xAE0001, 0);
            SI_VAR(0) = 348;
            SI_VAR(1) = 3;
            await N(script_8024275C);
            AddStarPieces(1);
        }
        == 1 {
            AddCoin(0xFFFFFFC0);
            ShowCoinCounter(0);
            EndSpeech(1, 0xAE0004, 0xAE0001, 0);
            SI_VAR(0) = 288;
            SI_VAR(1) = 2;
            await N(script_8024275C);
            AddBadge(288, SI_VAR(0));
        }
        == 2 {
            func_80240AA4_890644();
            if (SI_VAR(0) <= 0) {
                ShowCoinCounter(0);
                ContinueSpeech(1, 0xAE0004, 0xAE0001, 0, 0x80007);
                return;
            }
            AddCoin(0xFFFFFFC0);
            ShowCoinCounter(0);
            EndSpeech(1, 0xAE0004, 0xAE0001, 0);
            SI_VAR(0) = SI_VAR(11);
            SI_VAR(1) = 0;
            await N(script_8024275C);
            AddItem(SI_VAR(11), SI_VAR(0));
        }
    }
    if (SI_SAVE_VAR(56) < 10) {
        SI_SAVE_VAR(56) += 1;
    }
    SpeakToPlayer(1, 0xAE0004, 0xAE0001, 0, 0x80004);
    goto 0;
});

Script N(script_Init_80242C34) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242824));
    SI_AREA_FLAG(2) = 0;
});

StaticNpc N(npcGroup_80242C68)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242700),
        .pos = { -80.0, -10.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80242C34),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001, 0x00AE0001,
        },
        .tattle = 0x1A000D,
    },
};

NpcGroupList N(npcGroupList_80242E58) = {
    NPC_GROUP(N(npcGroup_80242C68), 0x00060000),
    {},
};

// rodata: D_80242E70_892A10

// rodata: D_80242E78_892A18

