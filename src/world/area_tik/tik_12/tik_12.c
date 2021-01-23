#include "tik_12.h"

s32 pad_0005EC[1];
s32 pad_001954[3];
s32 pad_002248[2];
Script N(script_802422A0);
s32 pad_0022CC[1];
Script N(script_802422D0);
Script N(script_80242624);
Script N(script_80242A14);
Script N(script_80242AF0);
Script N(script_80242CCC);
Script N(script_UpdateTexturePan_80243000);
Script N(script_8024309C);
Script N(script_802430CC);
Script N(script_80243124);
Script N(main);
s32 pad_003384[3];
Script N(script_80243390);
Script N(script_80243860);
Script N(script_80243A38);
s32 N(unk_80243BE4)[9];
Script N(script_80243C08);
s32 pad_003C34[3];
s32 N(unk_80243C40)[1];
Script N(script_80243C44);
s32 N(unk_80243CAC)[2];
s32 N(unk_80243CB4)[4];
s32 N(unk_80243CC4)[16];
s32 N(unk_80243D04)[3];
Script N(script_80243D10);
Script N(script_80243E74);
Script N(script_802442F4);
Script N(script_80244314);
Script N(script_MakeEntities);
Script N(script_NpcAI_80244460);
s32 N(unk_802444D0)[12];
Script N(script_80244500);
s32 N(unk_80244570)[12];
Script N(script_802445A0);
Script N(script_80244610);
s32 unk_missing_80244730[33];
StaticNpc N(npcGroup_802447B4)[1];
NpcGroupList N(npcGroupList_802449A4);
s32 pad_0049BC[1];
const char D_802449C0_88D590[8]; // "tik_04"
s32 pad_0049C8[2];
s32 pad_004A2C[1];

// text: func_80240000_888BD0

// text: func_80240020_888BF0

// text: func_80240034_888C04

// text: func_802400F0_888CC0

// text: func_802401D0_888DA0

// text: func_8024023C_888E0C

// text: func_802402E0_888EB0

// text: func_80240404_888FD4

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_8891C0

// text: func_80240960_889530

// text: func_80240A14_8895E4

// text: func_80240A78_889648

// text: func_80240BC8_889798

// text: func_80240C1C_8897EC

// text: func_80240C38_889808

// text: func_80240C58_889828

// text: func_80240C84_889854

// text: func_80240CF0_8898C0

// text: func_80240D3C_88990C

// text: func_80240DE8_8899B8

// text: func_80241038_889C08

// text: func_80241064_889C34

// text: func_8024109C_889C6C

// text: func_8024112C_889CFC

// text: func_80241160_889D30

// text: func_802411C4_889D94

// text: func_8024121C_889DEC

// text: func_80241754_88A324

// text: func_80241894_88A464

// text: func_802418DC_88A4AC

// text: func_80241924_88A4F4

s32 pad_001954[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_802419DC_88A5AC

// text: func_80241B10_88A6E0

// text: N(set_script_owner_npc_col_height)

// text: func_80241CF4_88A8C4

// text: func_80242134_88AD04

// text: func_8024217C_88AD4C

// text: func_802421D4_88ADA4

s32 pad_002248[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -173.0f, -135.0f, -100.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19002D,
};

Script N(script_802422A0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_0022CC[] = {
    0x00000000,
};

Script N(script_802422D0) = SCRIPT({
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
    func_802400F0_888CC0();
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
    func_80240020_888BF0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80242624) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_888CC0();
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
        func_8024023C_888E0C(1.0);
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

Script N(script_80242A14) = SCRIPT({
    func_80240034_888C04();
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
    await N(script_80242AF0);
});

Script N(script_80242AF0) = SCRIPT({
    func_80240000_888BD0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_888CC0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_888CC0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_888DA0();
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

Script N(script_80242CCC) = SCRIPT({
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
    func_80240000_888BD0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_888CC0();
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
            func_8024023C_888E0C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_80243000) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_888EB0();
                    return;
                }
            }
        }
    }
    func_80240404_888FD4();
});

Script N(script_8024309C) = SCRIPT({
    GotoMap(D_802449C0_88D590, 3);
    sleep 100;
});

Script N(script_802430CC) = SCRIPT({
    group 27;
    SI_VAR(10) = 0;
    SI_VAR(11) = 6;
    SI_VAR(12) = N(script_8024309C);
    await N(script_80242CCC);
});

Script N(script_80243124) = SCRIPT({
    ModifyColliderFlags(1, 6, 0x7FFFFE00);
    bind N(script_802430CC) to TriggerFlag_WALL_PUSH 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(10);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_802449A4));
    await N(script_MakeEntities);
    spawn N(script_802422A0);
    spawn N(script_80243C08);
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
        spawn N(script_UpdateTexturePan_80243000);
    }
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
    SI_VAR(10) = N(script_80243124);
    SI_VAR(11) = 6;
    spawn N(script_80242624);
    sleep 1;
});

s32 pad_003384[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243390) = SCRIPT({
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
Script N(script_80243860) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 9, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405F0_8891C0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243390)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80243A38) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80243860)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 9, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80243BE4)[] = {
    0x00000001, 0xFFFFFF28, 0xFFFFFFC8, 0x0000013E, 0x000000C1, 0x000000C8, 0xFFFFFF79, 0x00000064,
    0x00000003,
};

Script N(script_80243C08) = SCRIPT({
    SI_VAR(0) = N(unk_80243BE4);
    spawn N(script_80243A38);
});

s32 pad_003C34[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243C40)[] = {
    0x00000000,
};

Script N(script_80243C44) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

s32 N(unk_80243CAC)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80243CB4)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80243CC4)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80243D04)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80243D10) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80241160_889D30(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80241754_88A324(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80241754_88A324(50, 50);
    }
    spawn {
        sleep 3;
        func_80240C58_889828(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_802411C4_889D94();
        func_80241894_88A464();
        sleep 5;
        func_802418DC_88A4AC();
        sleep 5;
        func_80241894_88A464();
    }
    sleep 3;
    func_8024121C_889DEC(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_80243E74) = SCRIPT({
    if (SI_SAVE_FLAG(435) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80241924_88A4F4();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240C1C_8897EC();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_8024109C_889C6C(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240D3C_88990C();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_8024112C_889CFC(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_80240C38_889808();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_80240DE8_8899B8();
    if (SI_VAR(0) == -1) {
        func_8024112C_889CFC(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_80240C38_889808();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_80241038_889C08(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_8024112C_889CFC(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_80240C38_889808();
        return;
    }
    await N(script_80243D10);
    func_80240C84_889854(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(435) = 1;
    func_8024112C_889CFC(SI_VAR(9));
    func_80241064_889C34();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_80240C38_889808();
});

Script N(script_802442F4) = SCRIPT({
    SI_SAVE_FLAG(395) = 1;
});

Script N(script_80244314) = SCRIPT({
    SI_SAVE_FLAG(396) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 240, 0, 0xFFFFFFD8, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(435));
    AssignScript(N(script_80243E74));
    if (SI_SAVE_FLAG(395) == 0) {
        MakeEntity(0x802EA22C, 140, 0xFFFFFF79, 55, 0, 0x80000000);
        AssignScript(N(script_802442F4));
    }
    if (SI_SAVE_FLAG(396) == 0) {
        MakeEntity(0x802EA22C, 140, 0xFFFFFF79, 105, 0, 0x80000000);
        AssignScript(N(script_80244314));
    }
});

NpcAISettings N(aISettings_80244430) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x3C,
    .waitTime = 0x3C,
    .alertRadius = 90.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 4.5f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 40.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244460) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80241CF4_88A8C4(N(aISettings_80244430));
});

s32 N(unk_802444D0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40E00000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80244500) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_80241CF4_88A8C4(N(unk_802444D0));
});

s32 N(unk_80244570)[] = {
    0x3F800000, 0x00000014, 0x00000005, 0x42F00000, 0x00000000, 0x00000003, 0x40C00000, 0x00000000,
    0x00000000, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_802445A0) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_80241CF4_88A8C4(N(unk_80244570));
});

Script N(script_80244610) = SCRIPT({
    func_80242134_88AD04();
    SetNpcAnimation(-1, 0x33000F);
    func_8024217C_88AD4C();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_802421D4_88ADA4();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80241CF4_88A8C4(N(aISettings_80244430));
});

NpcSettings N(npcSettings_80244704) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244460),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

s32 unk_missing_80244730[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80244610), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80244500),
    EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x00110000, 0x00000000, 0x00180018,
    0x00000000, 0x00000000, N(script_802445A0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000,
    0x00190000,
};

StaticNpc N(npcGroup_802447B4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244704),
        .pos = { -6.0, -135.0, 75.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SODA, 10 } },
        .movement = { 0xFFFFFFFA, 0xFFFFFF79, 0x0000004B, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000003C, 0xFFFFFF79, 0x00000005, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00330001, 0x00330003, 0x00330004, 0x00330004, 0x00330000, 0x00330000, 0x00330007, 0x00330007, 0x0033000C, 0x00330005, 0x0033000D, 0x00330000, 0x00330000, 0x00330000, 0x00330000, 0x00330000,
        },
    },
};

NpcGroupList N(npcGroupList_802449A4) = {
    NPC_GROUP(N(npcGroup_802447B4), 0x1A150002),
    {},
};

s32 pad_0049BC[] = {
    0x00000000,
};

// rodata: D_802449C0_88D590

s32 pad_0049C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802449D0_88D5A0

// rodata: jtbl_802449D8_88D5A8

s32 pad_004A2C[] = {
    0x00000000,
};
