#include "tik_08.h"

s32 pad_0005EC[1];
s32 pad_000A24[3];
s32 pad_000AB4[3];
Script N(script_80240B50);
Script N(script_80240B7C);
s32 pad_000BA8[2];
Script N(script_80240BB0);
Script N(script_80240F04);
Script N(script_802412F4);
Script N(script_802413D0);
Script N(script_802415AC);
Script N(script_UpdateTexturePan_802418E0);
Script N(script_ExitWalk_8024197C);
Script N(script_ExitWalk_802419D8);
Script N(script_80241A34);
Script N(script_80241A64);
Script N(script_80241ABC);
Script N(main);
Script N(script_802420B0);
Script N(script_80242580);
Script N(script_80242758);
s32 N(unk_80242904)[17];
Script N(script_80242948);
s32 pad_002974[3];
Script N(script_80242980);
Script N(script_80242A7C);
Script N(script_80242AAC);
Script N(script_MakeEntities);
s32 pad_002BDC[1];
s32 N(shortTable_80242C0C)[3];
Script N(script_Idle_80242C18);
Script N(script_Defeat_80242EC0);
Script N(script_Init_80243078);
StaticNpc N(npcGroup_802431A4)[1];
NpcGroupList N(npcGroupList_80243394);
s32 pad_0033AC[1];
const char D_802433B0_8821A0[8]; // "tik_09"
const char D_802433B8_8821A8[8]; // "tik_20"
const char D_802433C0_8821B0[8]; // "tik_06"
const char D_802433C8_8821B8[8]; // "jan_03"

// text: func_80240000_87EDF0

// text: func_80240020_87EE10

// text: func_80240034_87EE24

// text: func_802400F0_87EEE0

// text: func_802401D0_87EFC0

// text: func_8024023C_87F02C

// text: func_802402E0_87F0D0

// text: func_80240404_87F1F4

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_87F3E0

// text: func_80240960_87F750

s32 pad_000A24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240A30_87F820

// text: func_80240A5C_87F84C

s32 pad_000AB4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -520.0f, -10.0f, 0.0f, 90.0f },
    { 170.0f, -10.0f, 0.0f, 270.0f },
    { -375.0f, 200.0f, 0.0f, 90.0f },
    { -467.0f, -10.0f, -110.0f, 90.0f },
    { 95.0f, 25.0f, -88.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19002A,
};

Script N(script_80240B50) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

Script N(script_80240B7C) = SCRIPT({
    SetMusicTrack(0, 90, 0, 8);
});

s32 pad_000BA8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240BB0) = SCRIPT({
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
    func_802400F0_87EEE0();
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
    func_80240020_87EE10();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240F04) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_87EEE0();
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
        func_8024023C_87F02C(1.0);
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

Script N(script_802412F4) = SCRIPT({
    func_80240034_87EE24();
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
    await N(script_802413D0);
});

Script N(script_802413D0) = SCRIPT({
    func_80240000_87EDF0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_87EEE0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_87EEE0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_87EFC0();
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

Script N(script_802415AC) = SCRIPT({
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
    func_80240000_87EDF0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_87EEE0();
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
            func_8024023C_87F02C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_802418E0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_87F0D0();
                    return;
                }
            }
        }
    }
    func_80240404_87F1F4();
});

Script N(script_ExitWalk_8024197C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802433B0_8821A0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802419D8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802433B8_8821A8, 0);
    sleep 100;
});

Script N(script_80241A34) = SCRIPT({
    GotoMap(D_802433C0_8821B0, 2);
    sleep 100;
});

Script N(script_80241A64) = SCRIPT({
    group 27;
    SI_VAR(10) = 3;
    SI_VAR(11) = 29;
    SI_VAR(12) = N(script_80241A34);
    await N(script_802415AC);
});

Script N(script_80241ABC) = SCRIPT({
    bind N(script_ExitWalk_8024197C) to 0x80000 19;
    bind N(script_ExitWalk_802419D8) to 0x80000 24;
    ModifyColliderFlags(1, 29, 0x7FFFFE00);
    bind N(script_80241A64) to TriggerFlag_WALL_PUSH 29;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(7);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80243394));
    await N(script_MakeEntities);
    spawn N(script_80240B50);
    PlaySound(0x80000033);
    PlaySoundAtF(0x80000034, 1, 0xFFFFFFE2, 0xFFFFFFE2, 0xFFFFFFAB);
    spawn N(script_80242948);
    EnableTexPanning(29, 1);
    EnableTexPanning(30, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 70;
        SI_VAR(2) = 100;
        SI_VAR(3) = 100;
        SI_VAR(4) = 130;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802418E0);
    }
    EnableTexPanning(35, 1);
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
        spawn N(script_UpdateTexturePan_802418E0);
    }
    EnableTexPanning(34, 1);
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFA88;
        SI_VAR(3) = 0xFFFFF5D8;
        SI_VAR(4) = 0xFFFFFFC4;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802418E0);
    }
    ModifyColliderFlags(3, 13, 4);
    ModifyColliderFlags(3, 10, 4);
    ModifyColliderFlags(0, 13, 0x80000);
    ModifyColliderFlags(0, 10, 0x80000);
    ModifyColliderFlags(3, 7, 1);
    ModifyColliderFlags(0, 29, 0x7FFFFE00);
    sleep 1;
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 2 {
            await N(script_80241ABC);
        }
        == 4 {
            SI_VAR(10) = N(script_80241ABC);
            spawn N(script_80240BB0);
        }
        == 3 {
            SI_VAR(10) = N(script_80241ABC);
            SI_VAR(11) = 29;
            spawn N(script_80240F04);
        }
        else {
            SI_VAR(0) = N(script_80241ABC);
            spawn EnterWalk;
        }
    }
    sleep 1;
});

Script N(script_802420B0) = SCRIPT({
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
Script N(script_80242580) = {
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_87F3E0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802420B0)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242758) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242580)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 13, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80242904)[] = {
    0x00000002, 0xFFFFFDF9, 0xFFFFFFED, 0x00000103, 0x0000002E, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000002, 0x00000085, 0xFFFFFF9C, 0x0000002D, 0x000000EB, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000001,
};

Script N(script_80242948) = SCRIPT({
    SI_VAR(0) = N(unk_80242904);
    spawn N(script_80242758);
});

s32 pad_002974[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242980) = SCRIPT({
    PlaySoundAt(769, 0, 90, 200, 100);
    MakeLerp(200, 0xFFFFFFF6, 25, 1);
    loop {
        UpdateLerp();
        func_80240960_87F750(SI_MAP_VAR(0), 90, SI_VAR(0), 100);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    PlaySoundAt(72, 0, 90, SI_VAR(0), 100);
    ShakeCam(0, 0, 5, 1.0);
    sleep 10;
});

Script N(script_80242A7C) = SCRIPT({
    GotoMap(D_802433C8_8821B8, 3);
    sleep 100;
});

Script N(script_80242AAC) = SCRIPT({
    sleep 10;
    PlaySound(8334);
    SI_SAVE_FLAG(1934) = 1;
    unbind;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1934) == 0) {
        MakeEntity(0x802E9BD4, 0, 0xFFFFFC18, 0, 0, 0x80000000);
        AssignAreaFlag(4);
        SI_MAP_VAR(0) = SI_VAR(0);
        bind N(script_80242AAC) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(4);
        if (SI_SAVE_FLAG(431) == 1) {
            func_80240960_87F750(SI_MAP_VAR(0), 90, 0xFFFFFFF6, 100);
        }
    }
    MakeEntity(0x802EAF80, 95, 0xFFFFFFF6, 0xFFFFFFA8, 0, 4, N(script_80242A7C), 1934, 0x80000000);
});

s32 pad_002BDC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80242BE0) = {
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

s32 N(shortTable_80242C0C)[] = {
    0x00001B00, 0x00001B01, 0x00001B02,
};

Script N(script_Idle_80242C18) = SCRIPT({
    loop {
        sleep 1;
        func_80240A30_87F820(SI_VAR(0));
        GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        if (SI_VAR(0) == 11) {
            if (SI_VAR(2) >= 0xFFFFFFEC) {
                break;
            }
        }
    }
    DisablePlayerInput(1);
    spawn N(script_80240B7C);
    ShowMessageAtScreenPos(0x80000, 160, 40);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, 0xFFFFFFE7, SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, 0xFFFFFFE7, SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    InterpPlayerYaw(270, 0);
    sleep 20;
    PlaySoundAtNpc(-1, 988, 0);
    PlaySoundAtNpc(-1, 999, 0);
    MakeLerp(0xFFFFFF06, 0xFFFFFFC4, 15, 1);
    loop {
        UpdateLerp();
        SetNpcPos(-1, 0xFFFFFFD8, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    loop 6 {
        SetNpcPos(-1, 0xFFFFFFD8, 0xFFFFFFC7, 0);
        sleep 1;
        SetNpcPos(-1, 0xFFFFFFD8, 0xFFFFFFC4, 0);
        sleep 1;
    }
    sleep 5;
    StartBossBattle(3);
});

Script N(script_Defeat_80242EC0) = SCRIPT({
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
    NpcFlyTo(-1, 0xFFFFFFD8, 0xFFFFFF06, 0, 40, 0, 0);
    ResetCam(0, 1.0);
    await N(script_80242980);
    if (SI_SAVE_FLAG(427) == 0) {
        SI_SAVE_FLAG(427) = 1;
    } else {
        SI_SAVE_FLAG(428) = 1;
    }
    SI_SAVE_FLAG(431) = 1;
    spawn N(script_80240B50);
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Init_80243078) = SCRIPT({
    if (SI_SAVE_FLAG(431) == 0) {
        BindNpcIdle(-1, N(script_Idle_80242C18));
        BindNpcDefeat(-1, N(script_Defeat_80242EC0));
        if (SI_SAVE_FLAG(427) == 0) {
            SetNpcScale(-1, 0.75, 0.75, 0.75);
            func_80240A5C_87F84C(0);
        } else {
            if (SI_SAVE_FLAG(428) == 0) {
                SetNpcScale(-1, 1.25, 1.25, 1.25);
                func_80240A5C_87F84C(1);
            } else {
                SetNpcScale(-1, 2.0, 2.0, 2.0);
                func_80240A5C_87F84C(2);
            }
        }
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802431A4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242BE0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00840D0D,
        .init = N(script_Init_80243078),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C,
        },
    },
};

NpcGroupList N(npcGroupList_80243394) = {
    NPC_GROUP(N(npcGroup_802431A4), 0x1B000001),
    {},
};

s32 pad_0033AC[] = {
    0x00000000,
};

// rodata: D_802433B0_8821A0

// rodata: D_802433B8_8821A8

// rodata: D_802433C0_8821B0

// rodata: D_802433C8_8821B8
