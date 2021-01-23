#include "jan_11.h"

s32 pad_0007A8[2];
Script N(script_80240850);
s32 pad_00088C[1];
Script N(script_80240890);
Script N(script_802408BC);
Script N(script_80240C10);
Script N(script_80241000);
Script N(script_802410DC);
Script N(script_802412B8);
Script N(script_802415EC);
Script N(script_80241ABC);
Script N(script_80241C94);
s32 N(unk_80241E40)[17];
Script N(script_80241E84);
Script N(script_80241EB0);
Script N(script_80241EE0);
Script N(script_80241F38);
Script N(main);
s32 pad_00204C[1];
Script N(script_8024207C);
Script N(script_Idle_802420F4);
Script N(script_Interact_80242544);
Script N(script_Init_80242574);
StaticNpc N(npcGroup_80242630)[1];
NpcGroupList N(npcGroupList_80242820);
s32 pad_002838[2];
const char D_80242840_B730A0[8]; // "jan_09"
s32 pad_002848[2];

// text: func_80240000_B70860

// text: func_80240158_B709B8

// text: func_80240178_B709D8

// text: func_8024018C_B709EC

// text: func_80240248_B70AA8

// text: func_80240328_B70B88

// text: func_80240394_B70BF4

// text: func_80240438_B70C98

s32 pad_0007A8[] = {
    0x00000000, 0x00000000,
};

// text: func_802407B0_B71010

// text: func_802407DC_B7103C

EntryList N(entryList) = {
    { -90.0f, 0.0f, 61.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900F9,
};

Script N(script_80240850) = SCRIPT({
    SetMusicTrack(0, 36, 0, 6);
    ClearAmbientSounds(250);
});

s32 pad_00088C[] = {
    0x00000000,
};

Script N(script_80240890) = SCRIPT({
    spawn {
        func_80240000_B70860();
    }
});

Script N(script_802408BC) = SCRIPT({
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
    func_80240248_B70AA8();
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
    func_80240178_B709D8();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240C10) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_80240248_B70AA8();
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
        func_80240394_B70BF4(1.0);
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

Script N(script_80241000) = SCRIPT({
    func_8024018C_B709EC();
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
    await N(script_802410DC);
});

Script N(script_802410DC) = SCRIPT({
    func_80240158_B709B8();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_80240248_B70AA8();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_80240248_B70AA8();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_80240328_B70B88();
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

Script N(script_802412B8) = SCRIPT({
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
    func_80240158_B709B8();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_80240248_B70AA8();
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
            func_80240394_B70BF4(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_802415EC) = SCRIPT({
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
Script N(script_80241ABC) = {
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
    SI_CMD(ScriptOpcode_CALL, func_80240438_B70C98, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802415EC)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241C94) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80241ABC)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 35, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80241E40)[] = {
    0x00000002, 0xFFFFFF66, 0x00000064, 0x0000005C, 0x00000024, 0x000000C8, 0x00000000, 0x0000003C,
    0x00000002, 0x000000D4, 0x0000000A, 0x00000035, 0x0000007A, 0x000000C8, 0x00000000, 0x0000003C,
    0x00000002,
};

Script N(script_80241E84) = SCRIPT({
    SI_VAR(0) = N(unk_80241E40);
    spawn N(script_80241C94);
});

Script N(script_80241EB0) = SCRIPT({
    GotoMap(D_80242840_B730A0, 3);
    sleep 100;
});

Script N(script_80241EE0) = SCRIPT({
    group 27;
    SI_VAR(10) = 0;
    SI_VAR(11) = 1;
    SI_VAR(12) = N(script_80241EB0);
    await N(script_802412B8);
});

Script N(script_80241F38) = SCRIPT({
    bind N(script_80241EE0) to TriggerFlag_WALL_PUSH 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80242820));
    spawn N(script_80240890);
    SI_VAR(0) = N(script_80241F38);
    spawn EnterWalk;
    spawn N(script_80240850);
    await N(script_80241E84);
});

s32 pad_00204C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80242050) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
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

Script N(script_8024207C) = SCRIPT({
    SI_AREA_FLAG(2) = 0;
    loop {
        PlaySoundAtNpc(0, 496, 0);
        sleep 20;
        if (SI_AREA_FLAG(2) == 1) {
            break;
        }
    }
});

Script N(script_Idle_802420F4) = SCRIPT({
0:
    sleep 1;
    func_802407B0_B71010(SI_VAR(0));
    if (SI_VAR(0) != 10) {
        goto 0;
    }
    func_802407DC_B7103C();
    if (SI_VAR(9) == 0) {
        goto 0;
    }
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(2) < 85) {
        goto 0;
    }
    DisablePlayerInput(1);
    GetNpcPos(-1, SI_VAR(4), SI_VAR(5), SI_VAR(6));
    if (SI_VAR(1) < SI_VAR(4)) {
        SI_VAR(1) = SI_VAR(4);
        SI_VAR(1) += 0xFFFFFFCE;
    } else {
        SI_VAR(1) = SI_VAR(4);
        SI_VAR(1) += 30;
    }
    SetPlayerSpeed(1.0);
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 0);
    PlayerFaceNpc(-1, 0);
    SI_VAR(4) -= SI_VAR(1);
    SI_VAR(4) /= 2;
    SI_VAR(1) += SI_VAR(4);
    AdjustCam(0, 4.0, SI_VAR(4), 350, 17.0, -7.0);
    SI_AREA_FLAG(2) = 1;
    sleep 15;
    NpcFacePlayer(-1, 0);
    spawn {
        sleep 10;
        SetPlayerAnimation(0x10002);
    }
    SpeakToPlayer(-1, 0x97000B, 0x97000A, 0, 0x1000AE);
    EndSpeech(-1, 0x970004, 0x970001, 0);
    spawn {
        SetNpcFlagBits(-1, 768, 1);
        SetNpcAnimation(-1, 0x970003);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, 0xFFFFFF9C, 50, 0);
        SetNpcFlagBits(-1, 512, 0);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
    SI_SAVE_FLAG(1234) = 1;
    SI_VAR(0) = 0;
    SI_VAR(0) += SI_SAVE_FLAG(1230);
    SI_VAR(0) += SI_SAVE_FLAG(1231);
    SI_VAR(0) += SI_SAVE_FLAG(1232);
    SI_VAR(0) += SI_SAVE_FLAG(1233);
    SI_VAR(0) += SI_SAVE_FLAG(1234);
    if (SI_VAR(0) == 5) {
        SetMusicTrack(0, 78, 0, 8);
        SI_SAVE_VAR(0) = 16;
        SetPlayerAnimation(0x10032);
        sleep 120;
        spawn N(script_80240850);
        SetPlayerAnimation(0x10002);
    } else {
        sleep 35;
    }
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Interact_80242544) = SCRIPT({
    SpeakToPlayer(-1, 0x970006, 0x970006, 0, 0x1000AD);
});

Script N(script_Init_80242574) = SCRIPT({
    if (SI_SAVE_VAR(0) == 15) {
        spawn N(script_8024207C);
        if (SI_SAVE_FLAG(1234) == 0) {
            SetNpcAnimation(-1, 0x970006);
            SetNpcPos(-1, 132, 85, 11);
            BindNpcIdle(-1, N(script_Idle_802420F4));
            BindNpcInteract(-1, N(script_Interact_80242544));
            return;
        }
    }
    RemoveNpc(-1);
});

StaticNpc N(npcGroup_80242630)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242050),
        .pos = { -450.0, 0.0, -160.0 },
        .flags = 0x0040090D,
        .init = N(script_Init_80242574),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00970001, 0x00970002, 0x00970003, 0x00970003, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001,
        },
        .tattle = 0x1A00C3,
    },
};

NpcGroupList N(npcGroupList_80242820) = {
    NPC_GROUP(N(npcGroup_80242630), 0x00000000),
    {},
};

s32 pad_002838[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242840_B730A0

s32 pad_002848[] = {
    0x00000000, 0x00000000,
};
