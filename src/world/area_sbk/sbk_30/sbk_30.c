#include "sbk_30.h"

s32 pad_00180C[1];
Script N(script_802418B0);
Script N(script_ExitWalk_80241930);
Script N(script_ExitWalk_8024198C);
Script N(script_ExitWalk_802419E8);
Script N(script_ExitWalk_80241A44);
Script N(script_80241AA0);
Script N(script_EnterWalk_80241B20);
Script N(script_80241BEC);
Script N(main);
s32 unk_missing_80241F9C[11];
s32 N(unk_80241FF4)[1];
Script N(script_80241FF8);
Script N(script_80242028);
s32 N(unk_80242058)[1];
s32 N(unk_8024205C)[1];
Script N(script_80242060);
Script N(script_802421A4);
Script N(script_802421F4);
Script N(script_80242328);
Script N(script_80242378);
Script N(script_802423F8);
Script N(script_8024271C);
Script N(script_8024278C);
s32 N(unk_80242A84)[2];
Script N(script_80242A8C);
Script N(script_80242ADC);
s32 N(unk_80242B40)[2];
Script N(script_80242B48);
Script N(script_Interact_80242BE4);
Script N(script_Idle_80243248);
Script N(script_Idle_8024330C);
Script N(script_Init_802433E4);
Script N(script_Idle_80243498);
Script N(script_Interact_80243540);
Script N(script_Init_80243638);
Script N(script_Interact_802436B4);
Script N(script_Init_802437AC);
StaticNpc N(npcGroup_80243828)[3];
NpcGroupList N(npcGroupList_80243DF8);
Script N(script_SearchBush_80243E10);
Script N(script_ShakeTree_80244170);
s32 N(treeDropList_Tree2)[8];
Script N(script_802447DC);
s32 pad_004864[3];
const char D_80244870_943E20[8]; // "sbk_99"
const char D_80244878_943E28[8]; // "sbk_31"
const char D_80244880_943E30[8]; // "sbk_20"
const char D_80244888_943E38[8]; // "sbk_40"
const char D_80244890_943E40[8]; // "dro_01"
s32 pad_004898[2];
s32 pad_004A48[2];

// text: func_GetTattle_93F5B0

// text: func_80240040_93F5F0

// text: func_80240164_93F714

// text: func_80240338_93F8E8

// text: func_80240370_93F920

// text: func_80240424_93F9D4

// text: N(NpcJumpFunc3)

// text: N(NpcJumpFunc)

// text: func_8024061C_93FBCC

// text: N(UnkNpcAIFunc11)

// text: N(UnkNpcAIFunc10)

// text: func_802408B0_93FE60

// text: func_8024095C_93FF0C

// text: func_80240B64_940114

// text: func_80240DDC_94038C

// text: func_80240E90_940440

// text: func_80240EF4_9404A4

// text: func_80240F50_940500

// text: func_80241120_9406D0

// text: func_80241174_940724

// text: func_802411AC_94075C

// text: func_80241248_9407F8

// text: func_802412E4_940894

// text: func_802413D4_940984

// text: func_80241560_940B10

// text: func_802415A4_940B54

// text: func_802415D0_940B80

// text: func_80241640_940BF0

s32 pad_00180C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x80240000,
};

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_802418B0) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 5),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 23, 0, 8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_ExitWalk_80241930) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244870_943E20, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024198C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244878_943E28, 0);
    sleep 100;
});

Script N(script_ExitWalk_802419E8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80244880_943E30, 3);
    sleep 100;
});

Script N(script_ExitWalk_80241A44) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80244888_943E38, 2);
    sleep 100;
});

Script N(script_80241AA0) = SCRIPT({
    bind N(script_ExitWalk_80241930) to 0x80000 9;
    bind N(script_ExitWalk_8024198C) to 0x80000 5;
    bind N(script_ExitWalk_802419E8) to 0x80000 3;
    bind N(script_ExitWalk_80241A44) to 0x80000 7;
});

Script N(script_EnterWalk_80241B20) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_FLAG(830) == 0) {
                SI_SAVE_FLAG(830) = 1;
                SI_SAVE_VAR(0) = 0xFFFFFFBB;
            }
        }
        == 1 {}
        == 2 {}
        == 3 {}
        == 4 {
            return;
        }
    }
    SI_VAR(0) = N(script_80241AA0);
    spawn EnterWalk;
});

Script N(script_80241BEC) = SCRIPT({
    PlaySound(0x80000060);
    UseSettingsFrom(0, 193, 0, 0xFFFFFF13);
    SetPanTarget(0, 193, 0, 0xFFFFFF13);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    func_80240040_93F5F0(2, 0, 3);
    func_80240040_93F5F0(1, -1, 3);
    func_80240164_93F714(3, 44, 32, 177, 0, 0, 0, 0, 0, 0);
    DisablePlayerInput(1);
    spawn {
        ShakeCam(0, 0, 300, 0.25);
    }
    spawn {
        sleep 60;
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 4) {
            GotoMap(D_80244890_943E40, 3);
        } else {
            GotoMap(D_80244890_943E40, 4);
        }
        sleep 100;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 10;
    SetSpriteShading(-1);
    if (SI_SAVE_VAR(0) == 0xFFFFFFC1) {
        DisablePulseStone(0);
    }
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    if (SI_SAVE_VAR(0) < 0xFFFFFFCC) {
        EnableGroup(44, 0);
        MakeNpcs(0, N(npcGroupList_80243DF8));
    } else {
        EnableGroup(42, 0);
        EnableGroup(35, 0);
        ModifyColliderFlags(0, 23, 0x7FFFFE00);
        SetZoneEnabled(1, 0);
    }
    spawn N(script_802418B0);
    spawn N(script_EnterWalk_80241B20);
    spawn N(script_802447DC);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        4, 5 {
            await N(script_80241BEC);
        }
        else {
            func_80240338_93F8E8();
        }
    }
});

NpcSettings N(npcSettings_80241F70) = {
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

s32 unk_missing_80241F9C[] = {
    0x00000000, 0x00230018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80241FC8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x2A,
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

s32 N(unk_80241FF4)[] = {
    0x00000000,
};

Script N(script_80241FF8) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80242028) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80242058)[] = {
    0x00000000,
};

s32 N(unk_8024205C)[] = {
    0x00000000,
};

Script N(script_80242060) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F50_940500(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241174_940724(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802421A4) = {
    SI_CMD(ScriptOpcode_CALL, func_802411AC_94075C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242060), 0x10, 0, 0x80244A50, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80241120_9406D0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802421F4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F50_940500(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241174_940724(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242328) = {
    SI_CMD(ScriptOpcode_CALL, func_80241248_9407F8, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802421F4), 0x10, 0, 0x80244C18, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80241120_9406D0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80242378) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_802413D4_940984(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_802423F8) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_802413D4_940984(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_80242378);
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
    func_80241174_940724(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024271C) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_802411AC_94075C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802423F8), 0x10, 0, 0x80244A50, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80241120_9406D0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_8024278C) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80241560_940B10();
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
            await N(script_8024271C);
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
                        await N(script_80241FF8);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_802415A4_940B54();
});

s32 N(unk_80242A84)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80242A8C) = SCRIPT({
    func_802412E4_940894(0, 0xB60008, 0xB60001, 84, 0, 0xD004A, 0xD004B, 0xD004C, 0xD004D, N(unk_80242A84));
    await N(script_8024278C);
});

Script N(script_80242ADC) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80241FF8);
        AddStarPieces(1);
    }
});

s32 N(unk_80242B40)[] = {
    0x00000053, 0x00000000,
};

Script N(script_80242B48) = SCRIPT({
    SI_SAVE_FLAG(786) = 1;
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0044);
    SI_VAR(0) = 348;
    SI_VAR(1) = 3;
    await N(script_80241FF8);
    AddStarPieces(1);
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0045);
});

Script N(script_Interact_80242BE4) = SCRIPT({
    GetNpcAnimation(-1, SI_VAR(9));
    SetNpcAnimation(-1, 0xB60001);
    if (SI_SAVE_FLAG(782) == 0) {
        AdjustCam(0, 4.0, 0, 300.0, 15.0, -7.5);
        SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0037);
        ResetCam(0, 4);
        SI_SAVE_FLAG(782) = 1;
        goto 50;
    }
    if (SI_SAVE_FLAG(786) == 1) {
        SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0046);
        goto 50;
    }
    HasKeyItem(83, SI_VAR(0));
    if (SI_VAR(0) == 1) {
        if (SI_SAVE_FLAG(785) == 1) {
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0043);
        } else {
            SI_SAVE_FLAG(785) = 1;
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0040);
        }
        SI_VAR(0) = N(unk_80242B40);
        SI_VAR(1) = 0;
        await N(script_802421A4);
        match SI_VAR(0) {
            >= 1 {
                await N(script_80242B48);
                goto 50;
            }
            else {
                SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0041);
                SI_VAR(0) = N(unk_80242B40);
                SI_VAR(1) = 0;
                await N(script_802421A4);
                match SI_VAR(0) {
                    >= 1 {
                        await N(script_80242B48);
                    }
                    else {
                        SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0042);
                        goto 50;
                    }
                }
            }
        }
    }
    if (SI_SAVE_VAR(0) >= 0xFFFFFFBC) {
        if (SI_SAVE_FLAG(746) == 0) {
            if (SI_AREA_FLAG(4) == 0) {
                SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0039);
                SI_AREA_FLAG(4) = 1;
                goto 50;
            } else {
                SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD003A);
                goto 50;
            }
        }
        if (SI_SAVE_FLAG(748) == 0) {
            if (SI_AREA_FLAG(5) == 0) {
                SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD003B);
                SI_SAVE_FLAG(787) = 1;
                SI_AREA_FLAG(5) = 1;
                goto 50;
            } else {
                SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD003C);
                goto 50;
            }
        }
        if (SI_SAVE_FLAG(787) == 1) {
            if (SI_SAVE_FLAG(749) == 0) {
                if (SI_AREA_FLAG(6) == 0) {
                    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD003D);
                    SI_AREA_FLAG(6) = 1;
                    goto 50;
                } else {
                    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD003E);
                    goto 50;
                }
            }
        }
        SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD003F);
        goto 50;
    }
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0xD0038);
50:
90:
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        if (SI_SAVE_FLAG(849) == 0) {
            SI_SAVE_FLAG(849) = 1;
            DisablePartnerAI(0);
            SpeakToNpc(0xFFFFFFFC, 0x20011, 0x20003, 0, -1, 0xD0047);
            SpeakToNpc(-1, 0xB60008, 0xB60001, 0, 0xFFFFFFFC, 0xD0048);
            SpeakToNpc(0xFFFFFFFC, 0x20011, 0x20003, 0, -1, 0xD0049);
            EnablePartnerAI();
        }
    }
    SetNpcAnimation(-1, SI_VAR(9));
    await N(script_80242A8C);
    await N(script_80242ADC);
    if (SI_VAR(12) != 0) {
        return;
    }
});

Script N(script_Idle_80243248) = SCRIPT({
    loop {
        SetNpcAnimation(-1, 0xB60001);
        sleep 15;
        SetNpcAnimation(-1, 0xB60004);
        NpcMoveTo(-1, 97, 0xFFFFFF4D, 120);
        SetNpcAnimation(-1, 0xB60001);
        sleep 15;
        SetNpcAnimation(-1, 0xB60004);
        NpcMoveTo(-1, 200, 0xFFFFFF9C, 120);
    }
});

Script N(script_Idle_8024330C) = SCRIPT({
    SetNpcAnimation(-1, 0xB60007);
    SetNpcSpeed(-1, 4.0);
    NpcMoveTo(-1, 145, 0xFFFFFF6F, 0);
0:
    RandInt(30, SI_VAR(0));
    SI_VAR(0) += 1;
    sleep SI_VAR(0);
    GetNpcYaw(-1, SI_VAR(0));
    SI_VAR(0) += 180;
    InterpNpcYaw(-1, SI_VAR(0), 5);
    goto 0;
});

Script N(script_Init_802433E4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        4, 5 {
            SetNpcPos(-1, 210, 0, 0xFFFFFF2E);
            BindNpcIdle(-1, N(script_Idle_8024330C));
        }
        else {
            BindNpcInteract(-1, N(script_Interact_80242BE4));
            BindNpcIdle(-1, N(script_Idle_80243248));
        }
    }
});

Script N(script_Idle_80243498) = SCRIPT({
    SetNpcAnimation(-1, 0xB80004);
0:
    RandInt(50, SI_VAR(0));
    SI_VAR(0) += 1;
    sleep SI_VAR(0);
    GetNpcYaw(-1, SI_VAR(0));
    SI_VAR(0) += 180;
    InterpNpcYaw(-1, SI_VAR(0), 5);
    goto 0;
});

Script N(script_Interact_80243540) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC1 {
            if (SI_AREA_FLAG(2) == 0) {
                SI_VAR(0) = 0xD004E;
                SI_AREA_FLAG(2) = 1;
            } else {
                SI_VAR(0) = 0xD004F;
                SI_AREA_FLAG(2) = 0;
            }
        }
        else {
            if (SI_SAVE_FLAG(786) == 0) {
                SI_VAR(0) = 0xD0050;
            } else {
                SI_VAR(0) = 0xD0051;
            }
        }
    }
    SpeakToPlayer(-1, 0xB80004, 0xB80001, 0, SI_VAR(0));
});

Script N(script_Init_80243638) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243540));
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        4, 5 {
            BindNpcIdle(-1, N(script_Idle_80243498));
        }
    }
});

Script N(script_Interact_802436B4) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC1 {
            if (SI_AREA_FLAG(3) == 0) {
                SI_VAR(0) = 0xD0052;
                SI_AREA_FLAG(3) = 1;
            } else {
                SI_VAR(0) = 0xD0053;
                SI_AREA_FLAG(3) = 0;
            }
        }
        else {
            if (SI_SAVE_FLAG(786) == 0) {
                SI_VAR(0) = 0xD0054;
            } else {
                SI_VAR(0) = 0xD0055;
            }
        }
    }
    SpeakToPlayer(-1, 0xB80004, 0xB80001, 0, SI_VAR(0));
});

Script N(script_Init_802437AC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802436B4));
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        4, 5 {
            BindNpcIdle(-1, N(script_Idle_80243498));
        }
    }
});

StaticNpc N(npcGroup_80243828)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241F70),
        .pos = { 200.0, 0.0, -100.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_802433E4),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A008B,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241FC8),
        .pos = { 238.0, 0.0, -112.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_80243638),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00B80001, 0x00B80002, 0x00B80003, 0x00B80003, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001,
        },
        .tattle = 0x1A008C,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241FC8),
        .pos = { 170.0, 0.0, -190.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_802437AC),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00B80001, 0x00B80002, 0x00B80003, 0x00B80003, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001, 0x00B80001,
        },
        .tattle = 0x1A008D,
    },
};

NpcGroupList N(npcGroupList_80243DF8) = {
    NPC_GROUP(N(npcGroup_80243828), 0x00000000),
    {},
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243E10) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241640_940BF0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241640_940BF0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80244170) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241640_940BF0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241640_940BF0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241640_940BF0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241640_940BF0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x37 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x36 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000037, 0x000000CC, 0x0000005C, 0xFFFFFF24, 0x0000000D, 0xF8405EC0, 0xFAA2B58A,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802447CC) =  { 266.0f, 0.0f, -209.0f, 0.0f };

Script N(script_802447DC) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFCC) {
        SI_VAR(0) = N(shakeTreeEvent_Tree1);
    } else {
        SI_VAR(0) = N(shakeTreeEvent_Tree2);
    }
    bind N(script_ShakeTree_80244170) to TriggerFlag_WALL_HAMMER 27;
    bind N(script_ShakeTree_80244170) to TriggerFlag_BOMB N(triggerCoord_802447CC);
});

s32 pad_004864[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244870_943E20

// rodata: D_80244878_943E28

// rodata: D_80244880_943E30

// rodata: D_80244888_943E38

// rodata: D_80244890_943E40

s32 pad_004898[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802448A0_943E50

// rodata: D_802448A8_943E58

// rodata: D_802448B0_943E60

// rodata: jtbl_802448B8_943E68

s32 pad_004A48[] = {
    0x00000000, 0x00000000,
};
