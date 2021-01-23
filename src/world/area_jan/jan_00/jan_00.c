#include "jan_00.h"

s32 pad_001194[3];
s32 pad_001954[3];
s32 pad_001B9C[1];
Script N(script_80241C10);
s32 pad_001C4C[1];
Script N(script_UpdateTexturePan_80241C50);
Script N(script_ExitWalk_80241CEC);
Script N(script_ExitWalk_80241D48);
Script N(script_80241DA4);
Script N(main);
s32 pad_00218C[1];
Script N(script_80242214);
Script N(script_80242260);
Script N(script_Interact_80242290);
s32 N(unk_802423C8)[1];
Script N(script_802423CC);
Script N(script_802423FC);
s32 N(unk_8024242C)[1];
s32 N(unk_80242430)[1];
Script N(script_80242434);
Script N(script_80242578);
Script N(script_802425C8);
Script N(script_80242648);
Script N(script_8024296C);
Script N(script_802429DC);
s32 N(unk_80242CD4)[2];
Script N(script_80242CDC);
Script N(script_80242D2C);
Script N(script_80242D90);
Script N(script_80242DB0);
Script N(script_80242FA8);
Script N(script_802437C4);
Script N(script_Idle_80243838);
s32 N(vectorList_802438E4)[9];
Script N(script_Interact_80243908);
Script N(script_Init_80243F78);
Script N(script_Interact_802440F8);
Script N(script_Init_80244158);
Script N(script_802441C8);
Script N(script_Idle_8024423C);
Script N(script_Init_80244834);
StaticNpc N(npcGroup_8024488C)[3];
StaticNpc N(npcGroup_80244E5C)[1];
StaticNpc N(npcGroup_8024504C)[1];
StaticNpc N(npcGroup_8024523C)[1];
StaticNpc N(npcGroup_8024542C)[1];
StaticNpc N(npcGroup_8024561C)[1];
NpcGroupList N(npcGroupList_8024580C);
Script N(script_80245860);
Script N(script_MakeEntities);
s32 pad_005944[3];
s32 N(unk_80245950)[1];
s32 N(unk_80245954)[1];
s32 N(unk_80245958)[1];
Script N(script_8024595C);
Script N(script_802459D4);
Script N(script_80245C10);
s32 N(unk_80245E5C)[4];
Script N(script_80245E6C);
s32 N(unk_80245F6C)[4];
Script N(script_80245F7C);
Script N(script_802460A4);
Script N(script_8024620C);
Script N(script_8024634C);
Script N(script_802464B4);
Script N(script_8024652C);
Script N(script_802467AC);
Script N(script_80247040);
s32 pad_007064[3];
Script N(script_SearchBush_80247070);
Script N(script_ShakeTree_802473D0);
s32 N(treeDropList_Tree1)[8];
Script N(script_80247A2C);
s32 pad_007A94[3];
const char D_80247AA0_B27FE0[8]; // "jan_01"
const char D_80247AA8_B27FE8[8]; // "jan_08"
const char D_80247AB0_B27FF0[8]; // "mac_06"
s32 pad_007AEC[1];

// text: func_80240000_B20540

// text: func_80240124_B20664

// text: func_8024030C_B2084C

// text: func_80240340_B20880

// text: func_802403F4_B20934

// text: func_802404A8_B209E8

// text: func_8024050C_B20A4C

// text: func_80240568_B20AA8

// text: func_80240738_B20C78

// text: func_8024078C_B20CCC

// text: func_802407C4_B20D04

// text: func_80240860_B20DA0

// text: func_80240950_B20E90

// text: func_80240ADC_B2101C

// text: func_80240B20_B21060

// text: func_80240B4C_B2108C

// text: func_80240CF8_B21238

// text: func_80240F14_B21454

// text: func_80241134_B21674

s32 pad_001194[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802411A0_B216E0

// text: func_802411EC_B2172C

// text: func_80241338_B21878

// text: func_802415B0_B21AF0

// text: func_80241654_B21B94

// text: func_802416F8_B21C38

// text: func_80241868_B21DA8

s32 pad_001954[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80241960_B21EA0

// text: func_802419D0_B21F10

s32 pad_001B9C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 150.0f, 0.0f, 200.0f, 0.0f },
    { 340.0f, 0.0f, 340.0f, 315.0f },
    { 340.0f, 0.0f, -340.0f, 225.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900EB,
};

Script N(script_80241C10) = SCRIPT({
    SetMusicTrack(0, 38, 0, 8);
    ClearAmbientSounds(250);
});

s32 pad_001C4C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80241C50) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_B20540();
                    return;
                }
            }
        }
    }
    func_80240124_B20664();
});

Script N(script_ExitWalk_80241CEC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80247AA0_B27FE0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241D48) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80247AA8_B27FE8, 0);
    sleep 100;
});

Script N(script_80241DA4) = SCRIPT({
    bind N(script_ExitWalk_80241CEC) to 0x80000 0;
    bind N(script_ExitWalk_80241D48) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_SAVE_FLAG(1981) = 1;
    MakeNpcs(0, N(npcGroupList_8024580C));
    await N(script_MakeEntities);
    EnableTexPanning(15, 1);
    EnableTexPanning(13, 1);
    EnableTexPanning(14, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 400;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241C50);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 200;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241C50);
    }
    spawn N(script_802467AC);
    spawn N(script_80247A2C);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        spawn N(script_80241DA4);
    } else {
        SI_VAR(0) = N(script_80241DA4);
        spawn EnterWalk;
    }
    func_8024030C_B2084C();
    await N(script_80241C10);
    PlaySound(0x80000017);
});

s32 pad_00218C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80242190) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x30,
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

NpcSettings N(npcSettings_802421BC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
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

NpcSettings N(npcSettings_802421E8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
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

Script N(script_80242214) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
});

Script N(script_80242260) = SCRIPT({
    sleep 45;
    BindNpcInteract(-1, N(script_Interact_80242290));
});

Script N(script_Interact_80242290) = SCRIPT({
    GetSelfVar(1, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetSelfVar(1, 1);
        PlaySoundAtNpc(-1, 8345, 0);
        SetNpcAnimation(-1, 0x430000);
        sleep 1;
        func_80240340_B20880();
        SetNpcAnimation(-1, 0x430001);
        spawn {
            BindNpcInteract(-1, 0);
            spawn N(script_80242260);
            sleep 45;
            SetSelfVar(1, 0);
            SetNpcAnimation(-1, 0x430000);
        }
    }
});

NpcSettings N(npcSettings_8024239C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = &N(script_80242214),
    .onInteract = &N(script_Interact_80242290),
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 N(unk_802423C8)[] = {
    0x00000000,
};

Script N(script_802423CC) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802423FC) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_8024242C)[] = {
    0x00000000,
};

s32 N(unk_80242430)[] = {
    0x00000000,
};

Script N(script_80242434) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240568_B20AA8(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_8024078C_B20CCC(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242578) = {
    SI_CMD(ScriptOpcode_CALL, func_802407C4_B20D04, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242434), 0x10, 0, D_80247AF0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240738_B20C78, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802425C8) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_80240950_B20E90(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80242648) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240950_B20E90(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_802425C8);
            SetNpcAnimation(0xFFFFFFFC, 0x40002);
            GetAngleBetweenNPCs(SI_VAR(9), 0xFFFFFFFC, SI_VAR(11));
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            GetNpcPos(SI_VAR(9), SI_VAR(6), SI_VAR(7), SI_VAR(8));
            SetNpcFlagBits(0xFFFFFFFC, 256, 1);
            if (SI_VAR(11) <= 180) {
                SI_VAR(6) += 20;
            } else {
                SI_VAR(6) += 0xFFFFFFEC;
            }
            SI_VAR(7) += 10;
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            NpcJump1(0xFFFFFFFC, SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
            kill SI_VAR(10);
            RemoveItemEntity(SI_VAR(0));
            sleep 20;
            GetNpcYaw(0xFFFFFFFC, SI_VAR(10));
            SI_VAR(10) += 180;
            InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
            sleep 5;
            NpcJump1(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20);
            SetNpcAnimation(0xFFFFFFFC, 0x40001);
            NpcFaceNpc(0xFFFFFFFC, SI_VAR(9), 0);
            sleep 5;
            SetNpcFlagBits(0xFFFFFFFC, 256, 0);
            EnablePartnerAI();
            sleep 5;
        }
    }
    func_8024078C_B20CCC(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024296C) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_802407C4_B20D04, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242648), 0x10, 0, D_80247AF0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240738_B20C78, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802429DC) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80240ADC_B2101C();
    GetCurrentPartnerID(SI_VAR(0));
    FindKeyItem(SI_VAR(5), SI_VAR(1));
    if (SI_VAR(0) == 4) {
        if (SI_VAR(1) != -1) {
            DisablePartnerAI(0);
            PlayerFaceNpc(SI_VAR(2), 0);
            sleep 1;
            GetNpcPos(SI_VAR(2), SI_VAR(13), SI_VAR(0), SI_VAR(14));
            GetNpcPos(0xFFFFFFFC, SI_VAR(13), SI_VAR(14), SI_VAR(15));
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            SI_VAR(0) += 10;
            NpcJump1(0xFFFFFFFC, SI_VAR(13), SI_VAR(0), SI_VAR(15), 10);
            SpeakToNpc(0xFFFFFFFC, 0x40006, 0x40001, 0, SI_VAR(2), SI_VAR(7));
            EnablePartnerAI();
            await N(script_8024296C);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                }
                else {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(9));
                    if (SI_VAR(10) != 0) {
                        SpeakToPlayer(SI_VAR(2), SI_VAR(3), SI_VAR(4), 0, SI_VAR(10));
                    }
                    EnablePartnerAI();
                    if (SI_VAR(6) != 0) {
                        SI_VAR(0) = SI_VAR(6);
                        SI_VAR(1) = 1;
                        await N(script_802423CC);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80240B20_B21060();
});

s32 N(unk_80242CD4)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80242CDC) = SCRIPT({
    func_80240860_B20DA0(1, 0xB60008, 0xB60001, 84, 0, 0x10001D, 0x10001E, 0x10001F, 0x100020, N(unk_80242CD4));
    await N(script_802429DC);
});

Script N(script_80242D2C) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_802423CC);
        AddStarPieces(1);
    }
});

Script N(script_80242D90) = SCRIPT({
    func_80240CF8_B21238(SI_VAR(0));
});

Script N(script_80242DB0) = SCRIPT({
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    if (SI_VAR(0) == 0) {
        SetCamSpeed(0, 90.0);
    } else {
        SetCamSpeed(0, 1);
    }
    sleep 1;
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 1);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) > 0xFFFFFED4) {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    } else {
        SI_VAR(3) = SI_VAR(0);
        SI_VAR(3) -= 0xFFFFFED4;
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= SI_VAR(3);
        SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    }
    sleep 1;
    goto 0;
});

Script N(script_80242FA8) = SCRIPT({
    DisablePlayerInput(1);
    spawn {
        UseSettingsFrom(0, 0, 0, 310);
        SetPanTarget(0, 0, 0, 310);
        SetCamPitch(0, 17.0, -7.5);
        SetCamPosA(0, 5.0, 0.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        sleep 60;
        SetPanTarget(0, 180, 0, 0);
        SetCamDistance(0, 500.0);
        SetCamPitch(0, 17.0, -7.5);
        SetCamPosA(0, 0.0, 0.0);
        SetCamSpeed(0, 0.400390625);
        PanToTarget(0, 0, 1);
    }
    SI_VAR(0) = 0;
    SI_VAR(3) = spawn N(script_80242D90);
    SI_VAR(0) = 1;
    SI_VAR(4) = spawn N(script_80242D90);
    if (SI_SAVE_VAR(0) < 11) {
        SI_VAR(0) = 2;
        SI_VAR(5) = spawn N(script_80242D90);
    }
    func_80240F14_B21454(1);
    kill SI_VAR(3);
    kill SI_VAR(4);
    if (SI_SAVE_VAR(0) < 11) {
        kill SI_VAR(5);
    }
    sleep 1;
    if (SI_SAVE_VAR(0) < 11) {
        func_80240B4C_B2108C(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcFlagBits(1, 256, 1);
        SetNpcAnimation(1, 0xB60004);
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 10);
        SetNpcAnimation(1, 0xB6000E);
        SetNpcJumpscale(1, 1.0);
        PlaySoundAtNpc(1, 812, 0);
        NpcJump0(1, 224, 0, 20, 20);
        SetNpcAnimation(1, 0xB60004);
        NpcMoveTo(1, 290, 20, 20);
        SetNpcAnimation(1, 0xB60001);
        SetNpcFlagBits(1, 256, 0);
        InterpNpcYaw(1, 270, 0);
    }
    func_80240B4C_B2108C(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
    SetPlayerJumpscale(1.0);
    PlayerJump(224, 0, 20, 20);
    SetPlayerAnimation(0x10004);
    PlayerMoveTo(260, 20, 15);
    SetPlayerAnimation(0x10002);
    func_80240B4C_B2108C(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(0xFFFFFFFC, 258);
    NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 20);
    SetNpcJumpscale(0xFFFFFFFC, 1.0);
    NpcJump0(0xFFFFFFFC, 224, 0, 20, 20);
    PartnerIsFlying(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        EnablePartnerAI();
        sleep 10;
        DisablePartnerAI(0);
    }
    NpcMoveTo(0xFFFFFFFC, 230, 20, 10);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SetNpcAnimation(0, 0xB6000A);
    SetNpcJumpscale(0, 0);
    NpcJump0(0, 158, 0xFFFFFFF6, 0xFFFFFFDA, 20);
    InterpPlayerYaw(270, 0);
    SpeakToPlayer(0, 0xB60004, 0xB60000, 5, 0x100000);
    SetMusicTrack(0, 38, 0, 8);
    if (SI_SAVE_VAR(0) < 11) {
        AdjustCam(0, 5.0, 0, 300, 15, -6.0);
        InterpNpcYaw(1, 90, 0);
        sleep 20;
        SpeakToPlayer(1, 0xB60008, 0xB60001, 1, 0x100001);
        sleep 5;
        InterpNpcYaw(1, 270, 4);
        sleep 10;
        InterpNpcYaw(1, 90, 4);
        sleep 15;
        spawn {
            PlaySoundAtNpc(1, 812, 0);
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
            sleep 25;
            NpcFacePlayer(1, 4);
        }
        SpeakToPlayer(1, 0xB60007, 0xB60002, 5, 0x100002);
        SetNpcAnimation(0, 0xB60001);
        SetNpcSpeed(1, 6.0);
        SetNpcAnimation(1, 0xB60004);
        NpcMoveTo(1, 330, 190, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        SI_SAVE_VAR(0) = 11;
        SI_VAR(9) = 4.0;
    } else {
        SI_VAR(9) = 1.0;
    }
    spawn N(script_80245860);
    DisablePlayerPhysics(0);
    EnablePartnerAI();
    DisablePlayerInput(0);
    ResetCam(0, SI_VAR(9));
});

Script N(script_802437C4) = SCRIPT({
0:
    GetNpcYaw(0, SI_VAR(0));
    InterpPlayerYaw(SI_VAR(0), 0);
    InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
    sleep 1;
    goto 0;
});

Script N(script_Idle_80243838) = SCRIPT({
    UseSettingsFrom(0, 250, 0, 200);
    SetPanTarget(0, 250, 0, 200);
    SetCamPosA(0, 20.0, 0.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn N(script_80242FA8);
});

s32 N(vectorList_802438E4)[] = {
    0x43910000, 0x00000000, 0x41A00000, 0x43750000, 0x40C00000, 0xC20C0000, 0x433E0000, 0x41200000,
    0xC2480000,
};

Script N(script_Interact_80243908) = SCRIPT({
    DisablePlayerPhysics(1);
    InterpPlayerYaw(270, 0);
    SpeakToPlayer(0, 0xB60004, 0xB60000, 5, 0x100003);
    ShowChoice(0x1E0010);
    if (SI_VAR(0) == 1) {
        ContinueSpeech(0, 0xB60004, 0xB60000, 5, 0x100005);
        DisablePlayerPhysics(0);
        return;
    }
    EndSpeech(-1, -1, -1, 5);
    if (SI_SAVE_VAR(0) == 40) {
        NpcFacePlayer(1, 0);
    }
    SetNpcJumpscale(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(-1, 158, 0xFFFFFFCE, 0xFFFFFFDA, 20);
    SI_VAR(0) = 0;
    spawn N(script_80242DB0);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 0x8048, 1);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    func_80240B4C_B2108C(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerJumpscale(0.5);
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    func_80240B4C_B2108C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayerMoveTo(SI_VAR(0), SI_VAR(2), 10);
    InterpPlayerYaw(90, 0);
    SetPlayerAnimation(0x10002);
    spawn {
        func_80240CF8_B21238(0);
    }
    NpcMoveTo(0xFFFFFFFC, SI_VAR(3), SI_VAR(5), 20);
    func_80240B4C_B2108C(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(0xFFFFFFFC, 258);
    SetNpcJumpscale(0xFFFFFFFC, 0.5);
    NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 18);
    func_80240B4C_B2108C(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 18);
    SetNpcAnimation(0xFFFFFFFC, 262);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    spawn {
        func_80240CF8_B21238(1);
    }
    if (SI_SAVE_VAR(0) == 40) {
        SetNpcAnimation(1, 0xB60004);
        LoadPath(20, N(vectorList_802438E4), 3, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        func_80240B4C_B2108C(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcAnimation(1, 0xB6000E);
        SetNpcJumpscale(1, 0.5);
        PlaySoundAtNpc(1, 812, 0);
        NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
        SetNpcAnimation(1, 0xB60001);
        InterpNpcYaw(1, 90, 0);
        spawn {
            func_80240CF8_B21238(2);
        }
        SpeakToPlayer(1, 0xB60008, 0xB60001, 0, 0x100007);
    }
    if (SI_SAVE_VAR(0) >= 15) {
        if (SI_SAVE_FLAG(1218) == 1) {
            goto 90;
        }
        SetNpcVar(2, 0, 1);
        loop {
            GetNpcVar(2, 0, SI_VAR(0));
            sleep 1;
            if (SI_VAR(0) != 1) {
                break;
            }
        }
        spawn N(script_802437C4);
        func_80240F14_B21454(0);
        EnableGroup(91, 0);
    } else {
    90:
        spawn N(script_802437C4);
        func_80240F14_B21454(0);
        EnableGroup(91, 0);
        GotoMap(D_80247AB0_B27FF0, 1);
        sleep 100;
    }
});

Script N(script_Init_80243F78) = SCRIPT({
    SetNpcFlagBits(-1, 0x1000000, 1);
    SetNpcFlagBits(-1, 16, 0);
    SetNpcAnimation(-1, 0xB60000);
    InterpNpcYaw(-1, 90, 0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        DisablePlayerPhysics(1);
        InterpPlayerYaw(90, 0);
        DisablePartnerAI(0);
        SetNpcFlagBits(0xFFFFFFFC, 0x8048, 1);
        SetNpcFlagBits(0xFFFFFFFC, 512, 0);
        SetNpcYaw(0xFFFFFFFC, 90);
        SetNpcAnimation(0xFFFFFFFC, 262);
        BindNpcIdle(-1, N(script_Idle_80243838));
        BindNpcInteract(-1, N(script_Interact_80243908));
    } else {
        SetNpcPos(-1, 158, 0xFFFFFFF6, 0xFFFFFFDA);
        BindNpcInteract(-1, N(script_Interact_80243908));
    }
});

Script N(script_Interact_802440F8) = SCRIPT({
    SetNpcFlagBits(-1, 256, 1);
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x100006);
    await N(script_80242CDC);
    await N(script_80242D2C);
});

Script N(script_Init_80244158) = SCRIPT({
    if (SI_SAVE_VAR(0) == 40) {
        SetNpcPos(-1, 290, 0, 20);
        InterpNpcYaw(-1, 270, 1);
        BindNpcInteract(-1, N(script_Interact_802440F8));
    }
});

Script N(script_802441C8) = SCRIPT({
    loop {
        PlayerFaceNpc(2, 0);
        NpcFaceNpc(1, 2, 0);
        NpcFaceNpc(0xFFFFFFFC, 2, 0);
        sleep 1;
    }
});

Script N(script_Idle_8024423C) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    SpeakToPlayer(-1, -1, -1, 5, 0x100008);
    SI_VAR(9) = spawn N(script_802441C8);
    SetMusicTrack(0, 71, 0, 8);
    PlaySoundAtNpc(-1, 0x80000055, 0);
    spawn {
        func_80241134_B21674();
    }
    UseSettingsFrom(0, 85, 0, 320);
    SetPanTarget(0, 85, 0, 320);
    SetCamDistance(0, 300);
    SetCamPitch(0, 22.5, -12.5);
    SetCamPosA(0, 23.0, 0.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(-1, 0x21000C);
    SetNpcSpeed(-1, 4.0);
    NpcMoveTo(-1, 80, 90, 0);
    SetPanTarget(0, 250, 0, 90);
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 14.5, -10.0);
    SetCamSpeed(0, 2.7001953125);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(-1, 0x21000A);
    SetNpcJumpscale(-1, 1.0);
    StopSound(0x80000055);
    PlaySoundAtNpc(-1, 69, 0);
    NpcJump0(-1, 250, 0, 90, 20);
    kill SI_VAR(9);
    spawn {
        sleep 15;
        SetSelfVar(0, 2);
    }
    SetNpcAnimation(-1, 0x210005);
    SpeakToPlayer(-1, 0x210018, 0x210005, 5, 0x100009);
    sleep 10;
    SpeakToPlayer(-1, 0x210018, 0x210005, 0, 0x10000A);
    sleep 20;
    SetNpcAnimation(-1, 0x210013);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    sleep 20;
    NpcJump0(-1, 250, 0, 90, 10);
    SpeakToPlayer(-1, 0x210013, 0x210013, 0, 0x10000B);
    SetNpcAnimation(-1, 0x21000A);
    sleep 10;
    spawn {
        SpeakToPlayer(-1, 0x21000B, 0x21000A, 0, 0x10000C);
        SetNpcAnimation(-1, 0x21000C);
    }
    UseSettingsFrom(0, 85, 0, 320);
    SetPanTarget(0, 85, 0, 320);
    SetCamDistance(0, 300);
    SetCamPitch(0, 20.0, -10.0);
    SetCamPosA(0, 24.0, 0.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    SetNpcJumpscale(-1, 1.5);
    NpcJump0(-1, 80, 0xFFFFFFCE, 90, 20);
    PlaySoundAtNpc(-1, 69, 0);
    SetNpcRotation(-1, 0, 0xFFFFFFEC, 0);
    PlaySoundAtNpc(-1, 0x80000055, 0);
    spawn {
        SetNpcSpeed(-1, 2.0);
        NpcMoveTo(-1, 0xFFFFFDD5, 0xFFFFFFE0, 0);
    }
    sleep 100;
    GotoMap(D_80247AB0_B27FF0, 1);
    sleep 100;
});

Script N(script_Init_80244834) = SCRIPT({
    if (SI_SAVE_FLAG(1218) == 0) {
        SetNpcPos(-1, 0xFFFFFDEE, 0xFFFFFFCE, 20);
        BindNpcIdle(-1, N(script_Idle_8024423C));
    }
});

StaticNpc N(npcGroup_8024488C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242190),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400F09,
        .init = N(script_Init_80243F78),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0055,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802421BC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x0040090D,
        .init = N(script_Init_80244158),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802421E8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x0040090D,
        .init = N(script_Init_80244834),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
    },
};

StaticNpc N(npcGroup_80244E5C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_8024239C),
        .pos = { 455.0, 0.0, 115.0 },
        .flags = 0x00408905,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_8024504C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_8024239C),
        .pos = { 167.0, 0.0, 404.0 },
        .flags = 0x00408905,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_8024523C)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_8024239C),
        .pos = { 90.0, 0.0, 316.0 },
        .flags = 0x00408905,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_8024542C)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_8024239C),
        .pos = { 424.0, 0.0, 182.0 },
        .flags = 0x00408905,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_8024561C)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_8024239C),
        .pos = { 143.0, 0.0, 260.0 },
        .flags = 0x00408905,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

NpcGroupList N(npcGroupList_8024580C) = {
    NPC_GROUP(N(npcGroup_8024488C), 0x00000000),
    NPC_GROUP(N(npcGroup_80244E5C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024504C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024523C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024542C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024561C), 0x00000000),
    {},
};

Script N(script_80245860) = SCRIPT({
    MakeItemEntity(343, 15, 100, 415, 17, SI_SAVE_FLAG(1216));
    MakeItemEntity(343, 15, 125, 415, 17, SI_SAVE_FLAG(1217));
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(146, 370, 0, 0xFFFFFF2E, 17, SI_SAVE_FLAG(1219));
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn N(script_80245860);
    }
    MakeEntity(D_802BC7F4, 15, 0, 415, 0, 0x80000000);
});

s32 pad_005944[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80245950)[] = {
    0x00000000,
};

s32 N(unk_80245954)[] = {
    0xFFFFFFFF,
};

s32 N(unk_80245958)[] = {
    0xFFFFFFFF,
};

Script N(script_8024595C) = SCRIPT({
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 30, 60, 30, 0, 0);
    RotateModel(81, SI_VAR(0), 1, 0, 0);
    RotateModel(79, SI_VAR(0), -1, 0, 0);
});

Script N(script_802459D4) = SCRIPT({
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 0, 30, 30, 1, 0);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) /= 3.0;
    RotateModel(83, SI_VAR(0), 0, 0, 1);
    RotateGroup(88, SI_VAR(1), 0, 0, -1);
    TranslateModel(75, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(77, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(81, 60, 29, 0xFFFFFFCD);
    TranslateModel(79, 60, 29, 51);
    RotateModel(75, SI_VAR(1), 0, 0, -1);
    RotateModel(77, SI_VAR(1), 0, 0, -1);
    RotateModel(81, SI_VAR(1), 0, 0, -1);
    RotateModel(79, SI_VAR(1), 0, 0, -1);
    TranslateModel(75, 5, 68, 0);
    TranslateModel(77, 5, 68, 0);
    TranslateModel(81, 0xFFFFFFC4, 0xFFFFFFE3, 51);
    TranslateModel(79, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 0, 0xFFFFFFD8, 30, 1, 0);
    TranslateModel(89, SI_VAR(0), 0, 0);
});

Script N(script_80245C10) = SCRIPT({
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 0, 0xFFFFFFE2, 8, 1, 0);
    SI_VAR(0) += 30.0;
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) /= 3.0;
    RotateModel(83, SI_VAR(0), 0, 0, 1);
    RotateGroup(88, SI_VAR(1), 0, 0, -1);
    TranslateModel(75, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(77, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(81, 60, 29, 0xFFFFFFCD);
    TranslateModel(79, 60, 29, 51);
    RotateModel(75, SI_VAR(1), 0, 0, -1);
    RotateModel(77, SI_VAR(1), 0, 0, -1);
    RotateModel(81, SI_VAR(1), 0, 0, -1);
    RotateModel(79, SI_VAR(1), 0, 0, -1);
    TranslateModel(75, 5, 68, 0);
    TranslateModel(77, 5, 68, 0);
    TranslateModel(81, 0xFFFFFFC4, 0xFFFFFFE3, 51);
    TranslateModel(79, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 0, 0xFFFFFFD8, 120, 1, 0);
    TranslateModel(89, SI_VAR(0), 0, 0);
});

s32 N(unk_80245E5C)[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_80245E6C) = SCRIPT({
    SI_VAR(1) = SI_VAR(12);
    SI_VAR(1) %= 4;
    if (SI_VAR(1) == 0) {
        func_80241868_B21DA8();
        PlayEffect(24, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, -1, 0, 5, 0, 0, 0, 0, 0);
    }
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 30, 60, 30, 0, 0);
    RotateModel(81, SI_VAR(0), 1, 0, 0);
    RotateModel(79, SI_VAR(0), -1, 0, 0);
});

s32 N(unk_80245F6C)[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_80245F7C) = SCRIPT({
    if (SI_VAR(12) >= 0) {
        if (SI_VAR(12) <= 2) {
            EnableModel(75, 0);
            EnableModel(77, 1);
            return;
        }
    }
    if (SI_VAR(12) == 15) {
        EnableModel(75, 0);
        EnableModel(77, 1);
        return;
    }
    if (SI_VAR(12) == 22) {
        EnableModel(75, 0);
        EnableModel(77, 1);
        return;
    }
    EnableModel(75, 1);
    EnableModel(77, 0);
});

Script N(script_802460A4) = SCRIPT({
    SI_VAR(0) = SI_VAR(12);
    SI_VAR(0) /= 20;
    SI_VAR(0) %= 2;
    if (SI_VAR(0) == 0) {
        return;
    }
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), -1.0, 1.0, 3, 0, 0);
    TranslateModel(83, SI_VAR(0), 0, 0);
    TranslateGroup(88, SI_VAR(0), 0, 0);
    TranslateModel(75, SI_VAR(0), 0, 0);
    TranslateModel(77, SI_VAR(0), 0, 0);
    TranslateModel(81, SI_VAR(0), 0, 0);
    TranslateModel(79, SI_VAR(0), 0, 0);
    TranslateModel(81, SI_VAR(0), 0, 0);
    TranslateModel(79, SI_VAR(0), 0, 0);
});

Script N(script_8024620C) = SCRIPT({
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), -6.0, 6.0, 3, 0, 0);
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(1), 6.0, -6.0, 2, 0, 0);
    TranslateModel(83, SI_VAR(0), SI_VAR(1), 0);
    TranslateGroup(88, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(75, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(77, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(81, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(79, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(81, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(79, SI_VAR(0), SI_VAR(1), 0);
});

Script N(script_8024634C) = SCRIPT({
    SI_VAR(0) = SI_VAR(12);
    SI_VAR(0) /= 20;
    SI_VAR(0) %= 2;
    if (SI_VAR(0) == 0) {
        return;
    }
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), -1.0, 1.0, 3, 0, 0);
    TranslateModel(83, SI_VAR(0), 0, 0);
    TranslateGroup(88, SI_VAR(0), 0, 0);
    TranslateModel(75, SI_VAR(0), 0, 0);
    TranslateModel(77, SI_VAR(0), 0, 0);
    TranslateModel(81, SI_VAR(0), 0, 0);
    TranslateModel(79, SI_VAR(0), 0, 0);
    TranslateModel(81, SI_VAR(0), 0, 0);
    TranslateModel(79, SI_VAR(0), 0, 0);
});

Script N(script_802464B4) = SCRIPT({
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 30, 60, 30, 0, 0);
    RotateModel(81, SI_VAR(0), 1, 0, 0);
    RotateModel(79, SI_VAR(0), -1, 0, 0);
});

Script N(script_8024652C) = SCRIPT({
    func_802416F8_B21C38(SI_VAR(12), SI_VAR(0), 0, 8, 3, 0, 0);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) /= 3;
    RotateModel(83, SI_VAR(0), 0, 0, 1);
    RotateGroup(88, SI_VAR(1), 0, 0, -1);
    TranslateModel(75, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(77, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(81, 60, 29, 0xFFFFFFCD);
    TranslateModel(79, 60, 29, 51);
    RotateModel(75, SI_VAR(1), 0, 0, -1);
    RotateModel(77, SI_VAR(1), 0, 0, -1);
    RotateModel(81, SI_VAR(1), 0, 0, -1);
    RotateModel(79, SI_VAR(1), 0, 0, -1);
    TranslateModel(75, 5, 68, 0);
    TranslateModel(77, 5, 68, 0);
    TranslateModel(81, 0xFFFFFFC4, 0xFFFFFFE3, 51);
    TranslateModel(79, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
    SI_VAR(0) = SI_VAR(12);
    SI_VAR(0) *= 2;
    func_802416F8_B21C38(SI_VAR(0), SI_VAR(0), 30, 60, 3, 0, 0);
    RotateModel(81, SI_VAR(0), 1, 0, 0);
    RotateModel(79, SI_VAR(0), -1, 0, 0);
});

Script N(script_802467AC) = SCRIPT({
    group 0;
    func_802C9C70(1, 86, 1);
    func_802C94A0(1, func_802415B0_B21AF0, 0);
    func_802C90FC(86, 1, -1);
    func_802C9C70(2, 85, 1);
    func_802C94A0(2, func_80241654_B21B94, 0);
    func_802C90FC(85, 2, -1);
    spawn {
    0:
        func_802411EC_B2172C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -=f 0xFFFFFFB0;
        SI_VAR(1) -=f 0xFFFFFFEE;
        SI_VAR(2) -= 420;
        SI_VAR(0) += 55;
        SI_VAR(1) +=f 0xFFFFFFEC;
        SI_VAR(2) += 0;
        TranslateModel(89, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(75, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(77, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(83, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(81, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(79, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateGroup(88, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcYaw(0, SI_VAR(0));
        SI_VAR(0) *= -1;
        SI_VAR(0) +=f 0xFFFFFFA6;
        TranslateModel(89, 0xFFFFFF9C, 0, 0);
        TranslateModel(75, 0xFFFFFF9C, 0, 0);
        TranslateModel(77, 0xFFFFFF9C, 0, 0);
        TranslateModel(83, 0xFFFFFF9C, 0, 0);
        TranslateModel(81, 0xFFFFFF9C, 0, 0);
        TranslateModel(79, 0xFFFFFF9C, 0, 0);
        TranslateGroup(88, 0xFFFFFF9C, 0, 0);
        TranslateModel(89, 100, -1, 0);
        TranslateModel(75, 0xFFFFFFFB, 0xFFFFFFBC, 0);
        TranslateModel(77, 0xFFFFFFFB, 0xFFFFFFBC, 0);
        TranslateModel(83, 102, 4, 0);
        TranslateModel(81, 60, 29, 0xFFFFFFCD);
        TranslateModel(79, 60, 29, 51);
        RotateModel(89, SI_VAR(0), 0, 1, 0);
        RotateModel(75, SI_VAR(0), 0, 1, 0);
        RotateModel(77, SI_VAR(0), 0, 1, 0);
        RotateModel(83, SI_VAR(0), 0, 1, 0);
        RotateModel(81, SI_VAR(0), 0, 1, 0);
        RotateModel(79, SI_VAR(0), 0, 1, 0);
        RotateGroup(88, SI_VAR(0), 0, 1, 0);
        TranslateModel(89, 0xFFFFFF9C, 1, 0);
        TranslateModel(75, 5, 68, 0);
        TranslateModel(77, 5, 68, 0);
        TranslateModel(83, 0xFFFFFF9A, 0xFFFFFFFC, 0);
        TranslateModel(81, 0xFFFFFFC4, 0xFFFFFFE3, 51);
        TranslateModel(79, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
        TranslateModel(89, 100, 0, 0);
        TranslateModel(75, 100, 0, 0);
        TranslateModel(77, 100, 0, 0);
        TranslateModel(83, 100, 0, 0);
        TranslateModel(81, 100, 0, 0);
        TranslateModel(79, 100, 0, 0);
        TranslateGroup(88, 100, 0, 0);
        GetNpcAnimation(0, SI_VAR(0));
        if (SI_VAR(0) != SI_VAR(11)) {
            SI_VAR(11) = SI_VAR(0);
            SI_VAR(12) = 0;
            EnableModel(75, 1);
            EnableModel(77, 0);
            match SI_VAR(11) {
                == 0xB60003 {
                    SI_VAR(13) = N(script_80245C10);
                }
                == 0xB60000 {
                    SI_VAR(13) = N(script_8024595C);
                }
                == 0xB60002 {
                    SI_VAR(13) = N(script_802459D4);
                }
                == 0xB60001 {
                    SI_VAR(13) = N(script_802464B4);
                }
                == 0xB60004 {
                    SI_VAR(13) = N(script_8024652C);
                }
                == 0xB60005 {
                    SI_VAR(13) = N(unk_80245E5C);
                    EnableModel(75, 0);
                    EnableModel(77, 0);
                }
                == 0xB60006 {
                    SI_VAR(13) = N(script_802460A4);
                    EnableModel(75, 0);
                    EnableModel(77, 0);
                }
                == 0xB60007 {
                    SI_VAR(13) = N(script_8024620C);
                    EnableModel(75, 0);
                    EnableModel(77, 0);
                }
                == 0xB60008 {
                    SI_VAR(13) = N(script_8024634C);
                }
                == 0xB60009 {
                    SI_VAR(13) = N(script_80245E6C);
                }
                == 0xB6000A {
                    SI_VAR(13) = N(unk_80245F6C);
                }
                == 0xB6000C {
                    SI_VAR(13) = N(script_80245F7C);
                }
            }
        }
        await 0xFE363C8D;
        SI_VAR(12) += 1;
        if (SI_VAR(12) > 1000) {
            SI_VAR(12) = 0;
        }
        goto 0;
    }
});

Script N(script_80247040) = SCRIPT({
    SetNpcAnimation(0, 0xB60003);
});

s32 pad_007064[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80247070) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802419D0_B21F10, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802419D0_B21F10, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_802473D0) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802419D0_B21F10, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802419D0_B21F10, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_802419D0_B21F10, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_802419D0_B21F10, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x2C, 0x2D },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2B },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x000000AC, 0x000001E5, 0x0000005F, 0xFFFFFF6F, 0x0000000F, 0x00000000, 0xF971888D,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80247A1C) =  { 481.0f, 0.0f, -165.0f, 0.0f };

Script N(script_80247A2C) = SCRIPT({
    SI_AREA_FLAG(13) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802473D0) to TriggerFlag_WALL_HAMMER 13;
    bind N(script_ShakeTree_802473D0) to TriggerFlag_BOMB N(triggerCoord_80247A1C);
});

s32 pad_007A94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80247AA0_B27FE0

// rodata: D_80247AA8_B27FE8

// rodata: D_80247AB0_B27FF0

// rodata: jtbl_80247AB8_B27FF8

s32 pad_007AEC[] = {
    0x00000000,
};
