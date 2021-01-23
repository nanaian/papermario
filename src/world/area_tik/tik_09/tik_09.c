#include "tik_09.h"

s32 pad_0005EC[1];
s32 pad_000A24[3];
s32 pad_001298[2];
Script N(script_80241310);
s32 pad_00133C[1];
Script N(script_80241340);
Script N(script_80241694);
Script N(script_80241A84);
Script N(script_80241B60);
Script N(script_80241D3C);
Script N(script_UpdateTexturePan_80242070);
Script N(script_8024210C);
Script N(script_ExitWalk_802422A0);
Script N(script_ExitWalk_802422FC);
Script N(script_80242358);
Script N(script_EnterWalk_802423A0);
Script N(script_8024245C);
Script N(main);
Script N(script_80242C70);
Script N(script_80243140);
Script N(script_80243318);
s32 N(unk_802434C4)[9];
Script N(script_802434E8);
s32 pad_003514[3];
Script N(script_80243520);
Script N(script_8024375C);
Script N(script_8024378C);
Script N(script_MakeEntities);
s32 pad_0038BC[1];
Script N(script_NpcAI_802438F0);
Script N(script_8024398C);
Script N(script_Defeat_80243A6C);
Script N(script_Init_80243B20);
StaticNpc N(npcGroup_80243B74)[1];
StaticNpc N(npcGroup_80243D64)[1];
StaticNpc N(npcGroup_80243F54)[1];
NpcGroupList N(npcGroupList_80244144);
s32 pad_004174[3];
const char D_80244180_886340[8]; // "tik_10"
const char D_80244188_886348[8]; // "tik_08"
const char D_80244190_886350[8]; // "mim_11"
s32 pad_004198[2];
s32 pad_0041FC[1];

// text: func_80240000_8821C0

// text: func_80240020_8821E0

// text: func_80240034_8821F4

// text: func_802400F0_8822B0

// text: func_802401D0_882390

// text: func_8024023C_8823FC

// text: func_802402E0_8824A0

// text: func_80240404_8825C4

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_8827B0

// text: func_80240960_882B20

s32 pad_000A24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240A30_882BF0

// text: func_80240AAC_882C6C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240DC4_882F84

// text: func_80241204_8833C4

s32 pad_001298[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -225.0f, -10.0f, 0.0f, 90.0f },
    { 325.0f, -10.0f, 0.0f, 270.0f },
    { -30.0f, 25.0f, -40.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19002B,
};

Script N(script_80241310) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_00133C[] = {
    0x00000000,
};

Script N(script_80241340) = SCRIPT({
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
    func_802400F0_8822B0();
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
    func_80240020_8821E0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241694) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_8822B0();
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
        func_8024023C_8823FC(1.0);
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

Script N(script_80241A84) = SCRIPT({
    func_80240034_8821F4();
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
    await N(script_80241B60);
});

Script N(script_80241B60) = SCRIPT({
    func_80240000_8821C0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8822B0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8822B0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_882390();
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

Script N(script_80241D3C) = SCRIPT({
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
    func_80240000_8821C0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8822B0();
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
            func_8024023C_8823FC(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_80242070) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_8824A0();
                    return;
                }
            }
        }
    }
    func_80240404_8825C4();
});

Script N(script_8024210C) = SCRIPT({
    DisablePlayerInput(1);
    group 0;
    0x802D5830(1);
    PlaySound(10);
    PlaySoundAtCollider(13, 619, 0);
    MakeLerp(60, 0, 25, 10);
    loop {
        UpdateLerp();
        TranslateModel(29, 0, SI_VAR(0), 0);
        TranslateModel(33, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(13, 620, 0);
    ShakeCam(0, 0, 5, 1.0);
    ModifyColliderFlags(1, 12, 0x7FFFFE00);
    ModifyColliderFlags(1, 13, 0x7FFFFE00);
    DisablePlayerInput(0);
    sleep 1;
    0x802D5830(0);
});

Script N(script_ExitWalk_802422A0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244180_886340, 0);
    sleep 100;
});

Script N(script_ExitWalk_802422FC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244188_886348, 0);
    sleep 100;
});

Script N(script_80242358) = SCRIPT({
    bind N(script_ExitWalk_802422A0) to 0x80000 9;
    bind N(script_ExitWalk_802422FC) to 0x80000 5;
});

Script N(script_EnterWalk_802423A0) = SCRIPT({
    DisablePlayerInput(1);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        SI_VAR(10) = N(script_80242358);
        spawn N(script_80241340);
    } else {
        SI_VAR(0) = N(script_80242358);
        await EnterWalk;
        if (SI_SAVE_FLAG(432) == 0) {
            await N(script_8024210C);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_8024245C) = SCRIPT({
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

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(8);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80244144));
    await N(script_MakeEntities);
    spawn N(script_80241310);
    PlaySound(0x80000035);
    PlaySoundAtF(0x80000036, 1, 0xFFFFFF42, 0xFFFFFFEC, 0xFFFFFF88);
    PlaySoundAtF(0x80000037, 1, 50, 0xFFFFFFEC, 0xFFFFFF88);
    PlaySoundAtF(0x80000038, 1, 290, 0xFFFFFFEC, 0xFFFFFF88);
    spawn N(script_802434E8);
    EnableTexPanning(12, 1);
    EnableTexPanning(15, 1);
    EnableTexPanning(19, 1);
    EnableTexPanning(21, 1);
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
        spawn N(script_UpdateTexturePan_80242070);
    }
    EnableTexPanning(25, 1);
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
        spawn N(script_UpdateTexturePan_80242070);
    }
    EnableTexPanning(23, 1);
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
        spawn N(script_UpdateTexturePan_80242070);
    }
    EnableTexPanning(22, 1);
    EnableTexPanning(18, 1);
    EnableTexPanning(16, 1);
    EnableTexPanning(13, 1);
    spawn {
        SI_VAR(0) = 6;
        SI_VAR(1) = 200;
        SI_VAR(2) = 400;
        SI_VAR(3) = 250;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242070);
    }
    SetRenderMode(17, 22);
    SetRenderMode(20, 22);
    spawn {
        SI_VAR(2) = 42;
        spawn N(script_8024245C);
        sleep 5;
        SI_VAR(2) = 44;
        spawn N(script_8024245C);
        sleep 5;
        SI_VAR(2) = 46;
        spawn N(script_8024245C);
    }
    TranslateModel(29, 0, 60, 0);
    TranslateModel(33, 0, 60, 0);
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    ClearAmbientSounds(250);
    spawn N(script_EnterWalk_802423A0);
    sleep 1;
});

Script N(script_80242C70) = SCRIPT({
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
Script N(script_80243140) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 35, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_8827B0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80242C70)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80243318) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80243140)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 35, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802434C4)[] = {
    0x00000001, 0xFFFFFF21, 0xFFFFFFE1, 0x00000226, 0x00000044, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000003,
};

Script N(script_802434E8) = SCRIPT({
    SI_VAR(0) = N(unk_802434C4);
    spawn N(script_80243318);
});

s32 pad_003514[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243520) = SCRIPT({
    AwaitPlayerLeave(0xFFFFFFF6, 10, 50);
    DisablePlayerInput(1);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 8) {
        loop {
            GetPlayerActionState(SI_VAR(0));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    DisablePlayerPhysics(1);
    0x802CB008(0, 1, 0xFFFFFFF6, 0xFFFFFFF6, 10, 20);
    PlaySound(11);
    PlaySoundAt(769, 0, 0xFFFFFFF6, 200, 10);
    MakeLerp(200, 0xFFFFFFF6, 25, 1);
    loop {
        UpdateLerp();
        func_80240960_882B20(SI_MAP_VAR(0), 0xFFFFFFF6, SI_VAR(0), 10);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAt(72, 0, 0xFFFFFFF6, SI_VAR(0), 10);
    ShakeCam(0, 0, 5, 1.0);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    0x802CB008(0, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_8024375C) = SCRIPT({
    GotoMap(D_80244190_886350, 3);
    sleep 100;
});

Script N(script_8024378C) = SCRIPT({
    sleep 10;
    PlaySound(8334);
    SI_SAVE_FLAG(1935) = 1;
    unbind;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1935) == 0) {
        MakeEntity(0x802E9BD4, 0, 0xFFFFFC18, 0, 0, 0x80000000);
        AssignAreaFlag(5);
        SI_MAP_VAR(0) = SI_VAR(0);
        bind N(script_8024378C) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(5);
        if (SI_SAVE_FLAG(432) == 1) {
            func_80240960_882B20(SI_MAP_VAR(0), 0xFFFFFFF6, 0xFFFFFFF6, 10);
        }
    }
    MakeEntity(0x802EAF80, 0xFFFFFFE2, 0xFFFFFFF6, 0xFFFFFFD8, 0, 2, N(script_8024375C), 1935, 0x80000000);
});

s32 pad_0038BC[] = {
    0x00000000,
};

NpcAISettings N(aISettings_802438C0) = {
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

Script N(script_NpcAI_802438F0) = SCRIPT({
    SetSelfVar(2, 6);
    SetSelfVar(3, 4);
    SetSelfVar(5, 13);
    SetSelfVar(7, 1);
    func_80240DC4_882F84(N(aISettings_802438C0));
});

NpcSettings N(npcSettings_80243960) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802438F0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x12,
    .unk_2A = 0,
};

Script N(script_8024398C) = SCRIPT({
    MakeLerp(0, 60, 25, 10);
    loop {
        UpdateLerp();
        TranslateModel(29, 0, SI_VAR(0), 0);
        TranslateModel(33, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
});

Script N(script_Defeat_80243A6C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_80241204_8833C4(SI_VAR(0));
            if (SI_VAR(0) == 1) {
                SI_SAVE_FLAG(432) = 1;
                spawn N(script_80243520);
                spawn N(script_8024398C);
            }
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80243B20) = SCRIPT({
    if (SI_SAVE_FLAG(432) == 0) {
        BindNpcDefeat(-1, N(script_Defeat_80243A6C));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80243B74)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243960),
        .pos = { -80.0, -10.0, 0.0 },
        .flags = 0x00040C00,
        .init = N(script_Init_80243B20),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0xFFFFFFB0, 0xFFFFFFF6, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFB0, 0xFFFFFFF6, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x0029000B, 0x0029000B, 0x00290007, 0x00290006, 0x00290008, 0x00290000, 0x00290004, 0x00290004, 0x00290004, 0x00290004,
        },
    },
};

StaticNpc N(npcGroup_80243D64)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243960),
        .pos = { 60.0, -10.0, 0.0 },
        .flags = 0x00040C00,
        .init = N(script_Init_80243B20),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0x0000003C, 0xFFFFFFF6, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000003C, 0xFFFFFFF6, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x0029000B, 0x0029000B, 0x00290007, 0x00290006, 0x00290008, 0x00290000, 0x00290004, 0x00290004, 0x00290004, 0x00290004,
        },
    },
};

StaticNpc N(npcGroup_80243F54)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243960),
        .pos = { 180.0, -10.0, 0.0 },
        .flags = 0x00040C00,
        .init = N(script_Init_80243B20),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0x000000B4, 0xFFFFFFF6, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000B4, 0xFFFFFFF6, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x00290002, 0x0029000B, 0x0029000B, 0x00290007, 0x00290006, 0x00290008, 0x00290000, 0x00290004, 0x00290004, 0x00290004, 0x00290004,
        },
    },
};

NpcGroupList N(npcGroupList_80244144) = {
    NPC_GROUP(N(npcGroup_80243B74), 0x1A020004),
    NPC_GROUP(N(npcGroup_80243D64), 0x1A010004),
    NPC_GROUP(N(npcGroup_80243F54), 0x1A000004),
    {},
};

s32 pad_004174[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244180_886340

// rodata: D_80244188_886348

// rodata: D_80244190_886350

s32 pad_004198[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802441A0_886360

// rodata: jtbl_802441A8_886368

s32 pad_0041FC[] = {
    0x00000000,
};

