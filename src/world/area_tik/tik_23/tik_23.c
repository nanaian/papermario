#include "tik_23.h"

s32 pad_00095C[1];
s32 pad_001134[3];
Script N(script_802411A0);
s32 pad_0011CC[1];
Script N(script_802411D0);
Script N(script_80241524);
Script N(script_80241914);
Script N(script_802419F0);
Script N(script_80241BCC);
Script N(script_UpdateTexturePan_80241F00);
Script N(script_ExitWalk_80241F9C);
Script N(script_80241FF8);
Script N(script_80242028);
Script N(script_80242080);
Script N(script_802420C8);
Script N(script_80242598);
Script N(script_80242770);
s32 N(unk_8024291C)[17];
Script N(script_80242960);
Script N(script_8024298C);
Script N(main);
Script N(script_80242DD0);
Script N(script_MakeEntities);
s32 pad_002F64[3];
Script N(script_NpcAI_80242FA0);
StaticNpc N(npcGroup_8024303C)[1];
StaticNpc N(npcGroup_8024322C)[1];
StaticNpc N(npcGroup_8024341C)[1];
NpcGroupList N(npcGroupList_8024360C);
s32 pad_00363C[1];
const char D_80243640_8A5A10[8]; // "tik_24"
const char D_80243648_8A5A18[8]; // "tik_20"
s32 pad_0036AC[1];

// text: func_80240000_8A23D0

// text: func_80240020_8A23F0

// text: func_80240034_8A2404

// text: func_802400F0_8A24C0

// text: func_802401D0_8A25A0

// text: func_8024023C_8A260C

// text: func_802402E0_8A26B0

// text: func_80240404_8A27D4

// text: func_802405EC_8A29BC

s32 pad_00095C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_802409DC_8A2DAC

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240CF4_8A30C4

s32 pad_001134[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -270.0f, -20.0f, -20.0f, 90.0f },
    { 107.0f, -20.0f, -115.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190036,
};

Script N(script_802411A0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_0011CC[] = {
    0x00000000,
};

Script N(script_802411D0) = SCRIPT({
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
    func_802400F0_8A24C0();
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
    func_80240020_8A23F0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241524) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_8A24C0();
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
        func_8024023C_8A260C(1.0);
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

Script N(script_80241914) = SCRIPT({
    func_80240034_8A2404();
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
    await N(script_802419F0);
});

Script N(script_802419F0) = SCRIPT({
    func_80240000_8A23D0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8A24C0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8A24C0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_8A25A0();
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

Script N(script_80241BCC) = SCRIPT({
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
    func_80240000_8A23D0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8A24C0();
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
            func_8024023C_8A260C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_80241F00) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_8A26B0();
                    return;
                }
            }
        }
    }
    func_80240404_8A27D4();
});

Script N(script_ExitWalk_80241F9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243640_8A5A10, 1);
    sleep 100;
});

Script N(script_80241FF8) = SCRIPT({
    GotoMap(D_80243648_8A5A18, 2);
    sleep 100;
});

Script N(script_80242028) = SCRIPT({
    group 27;
    SI_VAR(10) = 1;
    SI_VAR(11) = 12;
    SI_VAR(12) = N(script_80241FF8);
    await N(script_80241BCC);
});

Script N(script_80242080) = SCRIPT({
    bind N(script_ExitWalk_80241F9C) to 0x80000 6;
    bind N(script_80242028) to TriggerFlag_WALL_PUSH 12;
});

Script N(script_802420C8) = SCRIPT({
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
Script N(script_80242598) = {
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
    SI_CMD(ScriptOpcode_CALL, func_802405EC_8A29BC, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802420C8)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242770) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242598)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 22, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_8024291C)[] = {
    0x00000002, 0xFFFFFF4C, 0x00000064, 0x000000A0, 0x00000024, 0x000000C8, 0xFFFFFFEC, 0x0000003C,
    0x00000002, 0x00000109, 0xFFFFFF88, 0x00000019, 0x000000FA, 0x000000C8, 0xFFFFFFEC, 0x0000003C,
    0x00000002,
};

Script N(script_80242960) = SCRIPT({
    SI_VAR(0) = N(unk_8024291C);
    spawn N(script_80242770);
});

Script N(script_8024298C) = SCRIPT({
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
    SetSpriteShading(17);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_8024360C));
    await N(script_MakeEntities);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SI_VAR(10) = N(script_80242080);
        SI_VAR(11) = 12;
        spawn N(script_80241524);
    } else {
        SI_VAR(0) = N(script_80242080);
        spawn EnterWalk;
    }
    sleep 1;
    spawn N(script_802411A0);
    PlaySound(0x80000048);
    await N(script_80242960);
    SetTexPanner(7, 0);
    SetTexPanner(9, 0);
    SetTexPanner(11, 0);
    SetTexPanner(13, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 70;
        SI_VAR(2) = 0xFFFFFF9C;
        SI_VAR(3) = 100;
        SI_VAR(4) = 0xFFFFFF7E;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241F00);
    }
    spawn {
        SI_VAR(2) = 31;
        spawn N(script_8024298C);
        sleep 5;
        SI_VAR(2) = 33;
        spawn N(script_8024298C);
        sleep 5;
        SI_VAR(2) = 35;
        spawn N(script_8024298C);
    }
});

Script N(script_80242DD0) = SCRIPT({
    SI_SAVE_FLAG(397) = 1;
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(397) == 0) {
        MakeEntity(D_802EA19C, 0xFFFFFEE8, 0xFFFFFFEC, 0xFFFFFFEC, 0, 0x80000000);
        AssignScript(N(script_80242DD0));
    } else {
        ModifyColliderFlags(0, 9, 0x7FFFFE00);
    }
    MakeEntity(D_802EA588, 0xFFFFFFB5, 40, 0xFFFFFF88, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(416));
    MakeEntity(D_802EA588, 175, 40, 0, 0, 146, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(417));
    MakeEntity(D_802EA588, 0xFFFFFF06, 40, 0xFFFFFF9C, 0, 139, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(418));
    MakeEntity(D_802EA564, 0xFFFFFF38, 40, 0xFFFFFF9C, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(419));
});

s32 pad_002F64[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242F70) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 60.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 6.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_80242FA0) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 18);
    SetSelfVar(5, 3);
    SetSelfVar(7, 4);
    func_80240CF4_8A30C4(N(aISettings_80242F70));
});

NpcSettings N(npcSettings_80243010) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x15,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242FA0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_8024303C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243010),
        .pos = { 25.0, -20.0, 0.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000019, 0xFFFFFFEC, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000019, 0xFFFFFFEC, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_8024322C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243010),
        .pos = { 275.0, -20.0, 120.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000113, 0xFFFFFFEC, 0x00000078, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000113, 0xFFFFFFEC, 0x00000078, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_8024341C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243010),
        .pos = { -150.0, -20.0, 120.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFF6A, 0xFFFFFFEC, 0x00000078, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF6A, 0xFFFFFFEC, 0x00000078, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

NpcGroupList N(npcGroupList_8024360C) = {
    NPC_GROUP(N(npcGroup_8024303C), 0x1A160004),
    NPC_GROUP(N(npcGroup_8024322C), 0x1A170004),
    NPC_GROUP(N(npcGroup_8024341C), 0x1A160004),
    {},
};

s32 pad_00363C[] = {
    0x00000000,
};

// rodata: D_80243640_8A5A10

// rodata: D_80243648_8A5A18

// rodata: D_80243650_8A5A20

// rodata: jtbl_80243658_8A5A28

s32 pad_0036AC[] = {
    0x00000000,
};
