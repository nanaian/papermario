#include "hos_06.h"

s32 pad_00030C[1];
s32 unk_missing_80240D24[34];
s32 pad_001FCC[1];
Script N(script_MakeEntities);
s32 pad_0025F8[2];
Script N(script_UpdateTexturePan_80242600);
Script N(script_8024269C);
Script N(script_8024271C);
Script N(script_ExitWalk_802427B8);
Script N(script_80242814);
Script N(script_80242840);
Script N(main);
s32 pad_002BA4[3];
s32 N(unk_80242C08)[1];
Script N(script_80242C0C);
Script N(script_80242C3C);
s32 N(unk_80242C6C)[1];
s32 N(unk_80242C70)[1];
Script N(script_80242C74);
Script N(script_80242DB8);
Script N(script_80242E08);
Script N(script_80242E88);
Script N(script_802431AC);
Script N(script_8024321C);
s32 N(unk_80243514)[2];
Script N(script_8024351C);
Script N(script_8024356C);
Script N(script_Interact_802435D0);
s32 N(merlowBadgeInventory)[45];
Script N(script_Interact_802436A0);
Script N(script_Init_80243C04);
Script N(script_Init_80243C34);
StaticNpc N(npcGroup_80243C68)[2];
NpcGroupList N(npcGroupList_80244048);
Script N(script_OpenDoor_80244060);
Script N(script_MoveWalls_80244090);
Script N(script_DropDoor_80244260);
Script N(script_ToggleVis_80244290);
Script N(script_OpenDoor_802443C0);
Script N(script_OpenDoor_802443F0);
Script N(script_80244420);
Script N(script_802444B8);
s32 pad_0045C8[2];
s32 N(unk_802445D0)[1];
s32 N(unk_802445D4)[1];
Script N(script_802445D8);
Script N(script_8024471C);
s32 N(unk_8024476C)[1];
Script N(script_80244770);
Script N(script_802447A0);
s32 N(byteTable_HintPrices)[1];
s32 N(badgeHintData)[237];
s32 N(superBlockHintData)[48];
s32 N(starPieceHintData)[189];
Script N(script_80244F3C);
Script N(script_80245604);
Script N(script_80245620);
s32 N(unk_802456F4)[2];
Script N(script_802456FC);
Script N(script_80245878);
Script N(script_80245E38);
s32 N(unk_80245E80)[1];
Script N(script_80245E84);
s32 N(intTable_80245EEC)[5];
Script N(script_80245F00);
Script N(script_80245FB0);
Script N(script_80246060);
Script N(script_8024621C);
s32 pad_006248[2];
const char D_80246250_A3F730[8]; // "hos_00"
s32 pad_006258[2];

// text: func_80240000_A394E0

// text: func_80240124_A39604

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_A397F0

// text: func_802403C4_A398A4

// text: func_80240428_A39908

// text: func_80240484_A39964

// text: func_80240654_A39B34

// text: func_802406A8_A39B88

// text: func_802406E0_A39BC0

// text: func_8024077C_A39C5C

// text: func_8024086C_A39D4C

// text: func_802409F8_A39ED8

// text: func_80240A3C_A39F1C

// text: func_80240A68_A39F48

// text: func_80240A94_A39F74

// text: func_80240AD0_A39FB0

s32 unk_missing_80240D24[] = {
    0x00000000, 0x00000000, 0x00000000, 0x3C028007, 0x8C42419C, 0x8442008E, 0xAC820084, 0x03E00008,
    0x24020002, 0x00000000, 0x00000000, 0x27BDFFE0, 0xAFB10014, 0x0080882D, 0xAFBF0018, 0xAFB00010,
    0x8E30000C, 0x8E050000, 0x0C0B1EAF, 0x26100004, 0x0C00EAD2, 0x0040202D, 0x10400005, 0x00000000,
    0x8E050000, 0x844600A8, 0x0C0B2026, 0x0220202D, 0x8FBF0018, 0x8FB10014, 0x8FB00010, 0x24020002,
    0x03E00008, 0x27BD0020,
};

// text: func_80240DAC_A3A28C

// text: func_80240F7C_A3A45C

// text: func_80240FD0_A3A4B0

// text: func_80241008_A3A4E8

// text: func_802410A4_A3A584

// text: func_80241158_A3A638

// text: func_PlayerHasBadge_A3A69C

// text: func_802411F0_A3A6D0

// text: func_GetBadgeHint_A3A74C

// text: func_GetSuperBlockHint_A3A9C4

// text: func_GetStarPieceHint_A3AB48

// text: func_HasEnoughCoins_A3ACCC

// text: func_DeductHintCoins_A3AD40

// text: func_RefundHintCoins_A3AD84

// text: func_802418E8_A3ADC8

// text: func_80241A58_A3AF38

// text: func_80241B74_A3B054

// text: func_80241CCC_A3B1AC

// text: func_80241F98_A3B478

s32 pad_001FCC[] = {
    0x00000000,
};

// text: func_80241FD0_A3B4B0

// text: func_80242084_A3B564

// text: func_802420E8_A3B5C8

// text: func_80242238_A3B718

// text: func_8024228C_A3B76C

// text: func_802424CC_A3B9AC

// text: func_80242534_A3BA14

EntryList N(entryList) = {
    { -484.0f, 0.0f, 5.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190022,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 0xFFFFFFCE, 0, 350, 0xFFFFFFA6, 4, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(540));
});

s32 pad_0025F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80242600) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A394E0();
                    return;
                }
            }
        }
    }
    func_80240124_A39604();
});

Script N(script_8024269C) = SCRIPT({
    EnableTexPanning(140, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x4000;
        SetTexPanOffset(12, 0, SI_VAR(0), 0);
        sleep 3;
    }
});

Script N(script_8024271C) = SCRIPT({
    spawn N(script_8024269C);
    SI_VAR(0) = 0;
    loop {
        RotateGroup(141, SI_VAR(0), 0, 1, 0);
        RotateGroup(143, SI_VAR(0), 0, 1, 0);
        SI_VAR(0) += 6;
        sleep 1;
    }
});

Script N(script_ExitWalk_802427B8) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246250_A3F730, 2);
    sleep 100;
});

Script N(script_80242814) = SCRIPT({
    bind N(script_ExitWalk_802427B8) to 0x80000 0;
});

Script N(script_80242840) = SCRIPT({
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 0;
        SI_VAR(3) = 40;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242600);
    }
    SetTexPanner(131, 3);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 100;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242600);
    }
    SetTexPanner(132, 1);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 27;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_AREA_FLAG(182) = 0;
    MakeNpcs(0, N(npcGroupList_80244048));
    await N(script_MakeEntities);
    spawn N(script_8024621C);
    spawn N(script_8024271C);
    SI_VAR(0) = N(script_80242814);
    spawn EnterWalk;
    sleep 1;
    SetMusicTrack(0, 97, 0, 8);
    spawn N(script_802444B8);
    spawn N(script_80242840);
    bind N(script_80245878) to TriggerFlag_WALL_INTERACT 27;
});

s32 pad_002BA4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242BB0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x22,
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

NpcSettings N(npcSettings_80242BDC) = {
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

s32 N(unk_80242C08)[] = {
    0x00000000,
};

Script N(script_80242C0C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80242C3C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80242C6C)[] = {
    0x00000000,
};

s32 N(unk_80242C70)[] = {
    0x00000000,
};

Script N(script_80242C74) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240484_A39964(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |= c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802406A8_A39B88(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242DB8) = {
    SI_CMD(ScriptOpcode_CALL, func_802406E0_A39BC0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242C74), 0x10, 0, 0x80246260, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240654_A39B34, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80242E08) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_8024086C_A39D4C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80242E88) = SCRIPT({
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
            func_8024086C_A39D4C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |= c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_80242E08);
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
    func_802406A8_A39B88(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802431AC) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_802406E0_A39BC0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242E88), 0x10, 0, 0x80246260, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240654_A39B34, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_8024321C) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_802409F8_A39ED8();
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
            await N(script_802431AC);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                } else {
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
                        await N(script_80242C0C);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80240A3C_A39F1C();
});

s32 N(unk_80243514)[] = {
    0x0000003B, 0x00000000,
};

Script N(script_8024351C) = SCRIPT({
    func_8024077C_A39C5C(1, 0xB20004, 0xB20001, 59, 0, 0xA0058, 0xA0059, 0xA005A, 0xA005B, N(unk_80243514));
    await N(script_8024321C);
});

Script N(script_8024356C) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80242C0C);
        AddStarPieces(1);
    }
});

Script N(script_Interact_802435D0) = SCRIPT({
    await N(script_80245E38);
});

s32 N(merlowBadgeInventory)[] = {
    0x000000F3, 0x00000001, 0x0024008D, 0x000000FC, 0x00000001, 0x00240096, 0x000000FE, 0x00000003,
    0x00240098, 0x000000F1, 0x00000005, 0x00240081, 0x000000F2, 0x00000005, 0x0024008C, 0x000000FF,
    0x00000008, 0x00240079, 0x00000140, 0x00000008, 0x0024007A, 0x00000144, 0x0000000A, 0x0024009F,
    0x00000100, 0x0000000A, 0x00240099, 0x0000011A, 0x0000000C, 0x0024007C, 0x0000011B, 0x0000000C,
    0x0024007D, 0x000000F5, 0x0000000F, 0x00240078, 0x000000FD, 0x00000014, 0x0024009A, 0x00000105,
    0x00000019, 0x0024007B, 0x000000E2, 0x00000019, 0x00240073,
};

Script N(script_Interact_802436A0) = SCRIPT({
    await N(script_8024351C);
    await N(script_8024356C);
    if (SI_VAR(12) != 0) {
        return;
    }
    if (SI_SAVE_VAR(353) >= 15) {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA004C);
        return;
    }
    if (SI_MAP_FLAG(0) == 1) {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA004D);
    } else {
        if (SI_SAVE_FLAG(1770) == 0) {
            SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA004A);
            SI_SAVE_FLAG(1770) = 1;
        } else {
            SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA004B);
        }
    }
    ShowChoice(0x1E0014);
    if (SI_VAR(0) == 1) {
        ContinueSpeech(1, 0xB20004, 0xB20001, 0, 0xA004E);
        return;
    }
    func_80240A68_A39F48(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        ContinueSpeech(1, 0xB20004, 0xB20001, 0, 0xA004F);
        return;
    }
    ContinueSpeech(1, 0xB20004, 0xB20001, 0, 0xA0050);
0:
    func_80240AD0_A39FB0();
    sleep 10;
    if (SI_VAR(0) == -1) {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA0051);
        return;
    }
    func_80240A68_A39F48(SI_VAR(3));
    if (SI_VAR(3) < SI_VAR(1)) {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA0051);
        goto 0;
    }
    SetMessageString(SI_VAR(4), 0);
    SetMessageValue(SI_VAR(1), 1);
    SetMessageValue(SI_VAR(5), 2);
    if (SI_VAR(1) == 1) {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA0053);
    } else {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA0052);
    }
    SI_VAR(3) = SI_VAR(0);
    ShowChoice(0x1E000D);
    if (SI_VAR(0) == 1) {
        ContinueSpeech(1, 0xB20004, 0xB20001, 0, 0xA0054);
        goto 0;
    }
    CloseMessage();
    SI_VAR(1) *= -1;
    AddStarPieces(SI_VAR(1));
    SI_SAVE_VAR(353) += 1;
    SI_MAP_FLAG(0) = 1;
    func_80240A94_A39F74(SI_VAR(2));
    SI_VAR(0) = SI_VAR(3);
    SI_VAR(1) = 2;
    await N(script_80242C0C);
    AddBadge(SI_VAR(0), SI_VAR(1));
    if (SI_SAVE_VAR(353) >= 15) {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA0055);
        return;
    }
    func_80240A68_A39F48(SI_VAR(0));
    if (SI_VAR(0) <= 0) {
        SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA0055);
        return;
    }
    SpeakToPlayer(1, 0xB20004, 0xB20001, 0, 0xA0056);
    ShowChoice(0x1E000D);
    if (SI_VAR(0) == 1) {
        ContinueSpeech(1, 0xB20004, 0xB20001, 0, 0xA0057);
        return;
    }
    CloseMessage();
    goto 0;
});

Script N(script_Init_80243C04) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802435D0));
    spawn N(script_80245604);
});

Script N(script_Init_80243C34) = SCRIPT({
    SI_MAP_FLAG(0) = 0;
    BindNpcInteract(-1, N(script_Interact_802436A0));
});

StaticNpc N(npcGroup_80243C68)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242BB0),
        .pos = { 62.0, 20.0, 7.0 },
        .flags = 0x00000D05,
        .init = N(script_Init_80243C04),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00B00001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
        },
        .tattle = 0x1A0008,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242BDC),
        .pos = { -150.0, 160.0, -25.0 },
        .flags = 0x00000D05,
        .init = N(script_Init_80243C34),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00B20001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
        },
        .tattle = 0x1A0009,
    },
};

NpcGroupList N(npcGroupList_80244048) = {
    NPC_GROUP(N(npcGroup_80243C68), 0x00000000),
    {},
};

Script N(script_OpenDoor_80244060) = SCRIPT({
    RotateGroup(120, SI_VAR(0), 0, 1, 0);
});

Script N(script_MoveWalls_80244090) = SCRIPT({
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) *= 2.0;
    RotateGroup(54, SI_VAR(1), 0, 0, 1);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) *= 2.0;
    RotateGroup(98, SI_VAR(1), 0, 1, 0);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) *= 2.0;
    RotateGroup(100, SI_VAR(1), 0, 1, 0);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) *= 2.0;
    RotateGroup(102, SI_VAR(1), 0, 1, 0);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) *= 2.0;
    RotateGroup(104, SI_VAR(1), 0, 1, 0);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) *= 2.0;
    RotateGroup(108, SI_VAR(1), 0, 1, 0);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) *= 2.0;
    RotateGroup(116, SI_VAR(1), 0, 1, 0);
});

Script N(script_DropDoor_80244260) = SCRIPT({
    RotateGroup(120, SI_VAR(0), 1, 0, 1);
});

Script N(script_ToggleVis_80244290) = SCRIPT({
    match SI_VAR(0) {
        == 0 {
            SetGroupEnabled(144, 1);
            SetGroupEnabled(155, 1);
            SetGroupEnabled(209, 1);
        }
        == 1 {
            SetGroupEnabled(81, 0);
            SetGroupEnabled(118, 0);
        }
        == 2 {
            SetGroupEnabled(81, 1);
            SetGroupEnabled(118, 1);
        }
        == 3 {
            SetGroupEnabled(144, 0);
            SetGroupEnabled(155, 0);
            SetGroupEnabled(189, 0);
            SetGroupEnabled(209, 0);
        }
    }
});

Script N(script_OpenDoor_802443C0) = SCRIPT({
    RotateGroup(205, SI_VAR(0), 0, 1, 0);
});

Script N(script_OpenDoor_802443F0) = SCRIPT({
    RotateGroup(207, SI_VAR(0), 0, 1, 0);
});

Script N(script_80244420) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 100) {
        SetGroupEnabled(189, 0);
        SetGroupEnabled(156, 1);
    } else {
        SetGroupEnabled(189, 1);
        SetGroupEnabled(156, 0);
    }
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802444B8) = {
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 144, 0),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 155, 0),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 189, 0),
    SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 209, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244420), TriggerFlag_FLOOR_TOUCH, 30, 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, MakeDoorAdvanced, 0, N(script_OpenDoor_80244060), N(script_MoveWalls_80244090), N(script_DropDoor_80244260), N(script_ToggleVis_80244290), 4, 5, 210, 0),
    SI_CMD(ScriptOpcode_CALL, MakeDoorAdvanced, 0, N(script_OpenDoor_802443C0), 0, 0, 0, 8, 7, 0, 0),
    SI_CMD(ScriptOpcode_CALL, MakeDoorAdvanced, 1, N(script_OpenDoor_802443F0), 0, 0, 0, 11, 10, 0, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 pad_0045C8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802445D0)[] = {
    0x00000000,
};

s32 N(unk_802445D4)[] = {
    0x00000000,
};

Script N(script_802445D8) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240DAC_A3A28C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |= c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240FD0_A3A4B0(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024471C) = {
    SI_CMD(ScriptOpcode_CALL, func_80241008_A3A4E8, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802445D8), 0x10, 0, 0x80246430, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240F7C_A3A45C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(unk_8024476C)[] = {
    0x00000000,
};

Script N(script_80244770) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802447A0) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(byteTable_HintPrices)[] = {
    0x05141E00,
};

s32 N(badgeHintData)[] = {
    0x00220001, 0x0000010A, 0xFFFFFFF3, 0x00220002, 0x0000010C, 0x0000002B, 0x00220004, 0x0000012F,
    0xFFFFFFB6, 0x00220003, 0x000000E1, 0xFFFFFFB6, 0x00220005, 0x000000EB, 0xFFFFFFCB, 0x00220007,
    0x0000012E, 0xFFFFFFDF, 0x00220008, 0x000000E4, 0xFFFFFFA7, 0x00220006, 0x000000EF, 0x00000019,
    0x00220000, 0x00000123, 0x0000003F, 0x00220009, 0x00000124, 0xFFFFFFC5, 0x0022000B, 0x00000109,
    0xFFFFFFA7, 0x0022000C, 0x0000010B, 0x00000029, 0x0022000D, 0x000000E0, 0xFFFFFFF3, 0x00220011,
    0x00000107, 0xFFFFD8F0, 0x0022000E, 0x000000E8, 0xFFFFFFB9, 0x0022000F, 0x00000117, 0x0000000B,
    0x00220010, 0x00000108, 0x00000029, 0x00220012, 0x000000EE, 0xFFFFFFB6, 0x0022000A, 0x00000126,
    0x0000002B, 0x00220013, 0x000000E9, 0xFFFFFFCB, 0x00220016, 0x000000ED, 0xFFFFFFD8, 0x00220041,
    0x00000104, 0xFFFFFFA7, 0x00220014, 0x00000106, 0x0000004D, 0x00220017, 0x00000129, 0xFFFFFFCB,
    0x00220018, 0x00000132, 0xFFFFFFF6, 0x00220019, 0x00000133, 0x0000005E, 0x0022001A, 0x000000E7,
    0xFFFFFFCE, 0x0022001B, 0x00000134, 0xFFFFD8F0, 0x0022001D, 0x000000F8, 0xFFFFFFCE, 0x0022001E,
    0x00000135, 0xFFFFFFA7, 0x00220020, 0x000000FF, 0x00002712, 0x00220021, 0x00000136, 0x0000000B,
    0x00220022, 0x00000140, 0x00002712, 0x00220023, 0x00000141, 0x0000002B, 0x00220024, 0x00000105,
    0x00002712, 0x00220025, 0x00000138, 0x0000002B, 0x00220026, 0x000000E3, 0xFFFFFFCB, 0x00220027,
    0x00000116, 0x0000004D, 0x00220028, 0x00000113, 0x0000004D, 0x00220029, 0x000000F4, 0x00000007,
    0x0022002A, 0x000000E2, 0x00002712, 0x0022002B, 0x0000013C, 0xFFFFFFF6, 0x0022002C, 0x000000F5,
    0x00002712, 0x00220038, 0x00000100, 0x00002712, 0x00220034, 0x000000FA, 0xFFFFFFF6, 0x00220035,
    0x000000EC, 0x00000019, 0x00220036, 0x000000E5, 0xFFFFFFC2, 0x0022002F, 0x00000112, 0xFFFFD8F0,
    0x0022002D, 0x00000111, 0xFFFFFFF3, 0x0022002E, 0x0000010D, 0xFFFFFFCB, 0x00220030, 0x000000F9,
    0xFFFFFFDF, 0x00220037, 0x000000F2, 0x00002712, 0x00220031, 0x00000130, 0x00000029, 0x00220032,
    0x0000013A, 0xFFFFFFB9, 0x00220039, 0x000000F1, 0x00002712, 0x00220033, 0x000000FB, 0xFFFFFFF6,
    0x0022003A, 0x00000114, 0x0000003F, 0x0022003B, 0x000000F7, 0xFFFFFFC2, 0x0022003C, 0x000000F3,
    0x00002712, 0x00220042, 0x000000FC, 0x00002712, 0x00220043, 0x00000103, 0xFFFFFFBA, 0x00220044,
    0x0000011A, 0x00002712, 0x00220045, 0x0000011B, 0x00002712, 0x00220046, 0x000000FD, 0x00002712,
    0x0022004A, 0x0000011F, 0xFFFFFFB6, 0x00220048, 0x0000011E, 0xFFFFFFF6, 0x0022004B, 0x0000011D,
    0xFFFFD8F0, 0x00220049, 0x000000FE, 0x00002712, 0x0022004E, 0x000000E6, 0xFFFFFFB6, 0x0022004C,
    0x0000011C, 0xFFFFFFBA, 0x0022004D, 0x00000120, 0x0000000F, 0x00220015, 0x00000143, 0xFFFFFFF3,
    0x0022003D, 0x00000145, 0xFFFFFFCB, 0x0022003E, 0x00000146, 0xFFFFD8F0, 0x0022003F, 0x00000147,
    0x0000003F, 0x00220040, 0x00000148, 0xFFFFFFBA, 0x00220047, 0x00000144, 0x00002712, 0x0022001C,
    0x0000014A, 0x00000007, 0x0022001F, 0x0000014D, 0x00000007,
};

s32 N(superBlockHintData)[] = {
    0x0022004F, 0xF8405D31, 0xFFFFFFC5, 0x00220050, 0xF8405D32, 0xFFFFFFD8, 0x00220051, 0xF8405D33,
    0x00000018, 0x00220052, 0xF8405D34, 0x0000003D, 0x00220053, 0xF8405D35, 0x0000000F, 0x00220054,
    0xF8405E51, 0xFFFFFFC5, 0x00220055, 0xF8405EBD, 0xFFFFFFB5, 0x00220056, 0xF8405F07, 0xFFFFFFC2,
    0x00220057, 0xF8405F96, 0xFFFFFFE1, 0x00220058, 0xF840602A, 0xFFFFFFF6, 0x00220059, 0xF840607E,
    0x0000000B, 0x0022005A, 0xF84060B0, 0x00000018, 0x0022005B, 0xF84060B1, 0x00000018, 0x0022005C,
    0xF84060FA, 0x0000002B, 0x0022005D, 0xF84060FB, 0x0000002B, 0x0022005E, 0xF8406131, 0x0000003F,
};

s32 N(starPieceHintData)[] = {
    0x0022005F, 0xF8405BCA, 0xFFFFD8F0, 0x00220060, 0xF8405BD2, 0xFFFFD8F0, 0x00220061, 0xF8405BD6,
    0xFFFFFFD8, 0x00220062, 0xF8405BD8, 0xFFFFFFD8, 0x00220063, 0xF8405BDA, 0xFFFFFFD8, 0x00220064,
    0xF8405CAD, 0x0000000F, 0x00220065, 0xF8405CA7, 0xFFFFFFD8, 0x00220066, 0xF8405CA9, 0xFFFFFFD8,
    0x00220067, 0xF8405CAA, 0xFFFFFFD8, 0x00220068, 0xF8405CAC, 0xFFFFFFD8, 0x00220069, 0xF8405CAE,
    0xFFFFD8F0, 0x0022006A, 0xF8405D9A, 0xFFFFFFD8, 0x0022006B, 0xF8405D9B, 0xFFFFFFD8, 0x0022006C,
    0xF8405D9C, 0xFFFFFFD8, 0x0022006D, 0xF8405DA0, 0xFFFFD8F0, 0x0022006E, 0xF8405D14, 0xFFFFFFC5,
    0x0022006F, 0xF8405DC4, 0xFFFFFF9D, 0x00220070, 0xF8405DDE, 0xFFFFFFD8, 0x00220071, 0xF8405DE0,
    0xFFFFFFD8, 0x00220072, 0xF8405DE1, 0xFFFFFFD8, 0x00220073, 0xF8405DC3, 0xFFFFFFA4, 0x00220074,
    0xF8405DD1, 0xFFFFFFA4, 0x00220075, 0xF8405E2F, 0xFFFFFFB9, 0x00220076, 0xF8405E4D, 0xFFFFFFD8,
    0x00220077, 0xF8405E30, 0xFFFFFFB9, 0x00220078, 0xF8405E9C, 0xFFFFFFD8, 0x00220079, 0xF8405E74,
    0xFFFFFFD8, 0x0022007A, 0xF8405EF5, 0xFFFFFFC2, 0x0022007B, 0xF8405F41, 0xFFFFFFD8, 0x0022007C,
    0xF8405F44, 0xFFFFFFD8, 0x0022007D, 0xF8405F4C, 0xFFFFFFD8, 0x0022007E, 0xF8405F54, 0xFFFFFFD8,
    0x0022007F, 0xF8405F50, 0xFFFFFFD8, 0x00220080, 0xF8405F25, 0xFFFFFFD8, 0x00220081, 0xF8405F7B,
    0xFFFFFFDF, 0x00220082, 0xF8405F92, 0xFFFFFFDF, 0x00220083, 0xF8405F9A, 0xFFFFFFDF, 0x00220084,
    0xF8405FEC, 0xFFFFFFF6, 0x00220085, 0xF8406026, 0xFFFFFFF6, 0x00220086, 0xF8406027, 0xFFFFFFF6,
    0x00220087, 0xF8406028, 0xFFFFFFF6, 0x00220088, 0xF8406029, 0xFFFFFFF6, 0x00220089, 0xF8405FED,
    0xFFFFFFF6, 0x0022008A, 0xF8406016, 0xFFFFFFF6, 0x0022008B, 0xF8406075, 0x0000000B, 0x0022008C,
    0xF8406076, 0x0000000B, 0x0022008D, 0xF840604D, 0x0000000B, 0x0022008E, 0xF8406064, 0x0000000B,
    0x0022008F, 0xF8406082, 0x0000000B, 0x00220090, 0xF84060BA, 0x00000019, 0x00220091, 0xF84060BB,
    0x00000019, 0x00220092, 0xF84060EC, 0x0000002B, 0x00220093, 0xF84060FC, 0x0000002B, 0x00220094,
    0xF84060FE, 0x0000002B, 0x00220095, 0xF84060EB, 0x0000002B, 0x00220096, 0xF84060FF, 0x0000002B,
    0x00220097, 0xF84060E5, 0x0000002B, 0x00220098, 0xF8406138, 0x0000003F, 0x00220099, 0xF840611C,
    0x0000003F, 0x0022009A, 0xF8406125, 0x0000003F, 0x0022009B, 0xF8406162, 0x0000004D, 0x0022009C,
    0xF8406166, 0x0000004D, 0x0022009D, 0xF8406168, 0x0000004D,
};

Script N(script_80244F3C) = SCRIPT({
    SetMusicTrack(0, 124, 2, 8);
    SetNpcAnimation(0, 0xB00008);
    GetModelCenter(126);
    SI_VAR(1) += 20;
    PlaySoundAt(519, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(82, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1.0, -1, 0, 0, 0, 0, 0, 0, 0);
    SI_ARRAY(1) = SI_VAR(15);
    EnableModel(140, 0);
    EnableModel(142, 0);
    sleep 30;
    spawn {
        func_802418E8_A3ADC8();
    }
    GetModelCenter(126);
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 0xFFFFFFEC;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPosA(0, -91.5, 18.40625);
    GetCamDistance(0, SI_VAR(0));
    if (SI_VAR(0) > 0) {
        SI_VAR(0) = 284.6005859375;
    } else {
        SI_VAR(0) = -284.599609375;
    }
    SetCamDistance(0, SI_VAR(0));
    GetCamPitch(0, SI_VAR(0), SI_VAR(1));
    SI_VAR(1) = -11.0;
    SetCamPitch(0, SI_VAR(0), SI_VAR(1));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlayEffect(83, 0, 0xFFFFFED6, 21, 0xFFFFFEB6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    SI_ARRAY(2) = SI_VAR(15);
    GetModelCenter(126);
    SI_VAR(1) += 20;
    PlayEffect(81, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, -1, 0, 0, 0, 0, 0, 0, 0);
    SI_ARRAY(3) = SI_VAR(15);
    PlayEffect(81, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, -1, 0, 0, 0, 0, 0, 0, 0);
    SI_ARRAY(4) = SI_VAR(15);
    PlayEffect(81, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, -1, 0, 0, 0, 0, 0, 0, 0);
    SI_ARRAY(5) = SI_VAR(15);
    spawn {
        func_80241CCC_A3B1AC();
    }
    sleep 50;
    GetModelCenter(126);
    SI_VAR(1) += 20;
    PlaySoundAt(520, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(82, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.5, 20, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    GetModelCenter(126);
    SI_VAR(1) += 20;
    PlaySoundAt(520, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(82, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.5, 20, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    spawn {
        func_80241A58_A3AF38();
    }
    GetModelCenter(126);
    SI_VAR(1) += 20;
    PlaySoundAt(520, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(82, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.5, 20, 0, 0, 0, 0, 0, 0, 0);
    sleep 70;
    0x802D7B10(SI_ARRAY(2));
    sleep 40;
    PlaySoundAt(1543, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80241F98_A3B478(SI_ARRAY(1));
    sleep 15;
    EnableModel(140, 1);
    EnableModel(142, 1);
    0x802D7B10(SI_ARRAY(1));
    spawn {
        func_80241B74_A3B054();
    }
    sleep 46;
    ResetCam(0, 5.0);
    SetNpcAnimation(0, 0xB00001);
    SetMusicTrack(0, 97, 0, 8);
});

Script N(script_80245604) = SCRIPT({
    func_802411F0_A3A6D0();
});

Script N(script_80245620) = SCRIPT({
    if (SI_SAVE_VAR(348) == 8) {
        if (SI_SAVE_FLAG(536) == 0) {
            SetPlayerAnimation(0x10002);
            sleep 1;
            SetPlayerAnimation(0x80007);
            sleep 20;
            SpeakToPlayer(0, 0xB00004, 0xB00001, 0, 0xA0046);
            sleep 10;
            ContinueSpeech(0, 0xB00004, 0xB00001, 0, 0xA0047);
            SI_SAVE_FLAG(536) = 1;
        }
    }
});

s32 N(unk_802456F4)[] = {
    0x00000027, 0xFFFFFFFF,
};

Script N(script_802456FC) = SCRIPT({
    if (SI_SAVE_FLAG(536) == 0) {
        return;
    }
    if (SI_SAVE_FLAG(537) == 1) {
        return;
    }
    FindKeyItem(39, SI_VAR(0));
    if (SI_VAR(0) == -1) {
        SpeakToPlayer(0, 0xB00004, 0xB00001, 0, 0xA0048);
    } else {
        SI_VAR(0) = N(unk_802456F4);
        SI_VAR(1) = 0;
        await N(script_8024471C);
        if (SI_VAR(0) != -1) {
            SpeakToPlayer(0, 0xB00004, 0xB00001, 0, 0xA0049);
            SI_VAR(0) = 113;
            SI_VAR(1) = 1;
            await N(script_80244770);
            AddKeyItem(113);
            SI_SAVE_FLAG(537) = 1;
        } else {
            SpeakToPlayer(0, 0xB00004, 0xB00001, 0, 0xA0048);
        }
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80245878) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802CF56C, 1),
    SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, 0xFFFFFFCF, 0, 6),
    SI_CMD(ScriptOpcode_CALL, PlayerFaceNpc, 0, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(10), 0),
        SI_CMD(ScriptOpcode_USE_FLAGS, 20),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_MAP_VAR(10)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(182), 0),
        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(182), 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(535), 0),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00004, 0xB00001, 0, 0xA0038),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(535), 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00004, 0xB00001, 0, 0xA0039),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00004, 0xB00001, 0, 0xA003A),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0011),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0xB00004, 0xB00001, 0, 0xA003C),
        SI_CMD(ScriptOpcode_CALL, 0x802CF56C, 0),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, ShowCoinCounter, 1),
    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0000),
    SI_CMD(ScriptOpcode_CALL, ShowCoinCounter, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 4),
        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0xB00004, 0xB00001, 0, 0xA003C),
        SI_CMD(ScriptOpcode_CALL, 0x802CF56C, 0),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_HasEnoughCoins_A3ACCC, SI_VAR(0), SI_VAR(1)),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0xB00004, 0xB00001, 0, 0xA003D),
        SI_CMD(ScriptOpcode_CALL, 0x802CF56C, 0),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_DeductHintCoins_A3AD40, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0xB00004, 0xB00001, 0, 0xA003E),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00007, 0xB00007, 0, 0xA0041),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244F3C)),
            SI_CMD(ScriptOpcode_CALL, func_GetStarPieceHint_A3AB48),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00006, 0xB00006, 0, 0xA0042),
                SI_CMD(ScriptOpcode_CALL, func_RefundHintCoins_A3AD84, 0),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00004, 0xB00001, 0, SI_VAR(1)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_GOTO, 99),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0xB00004, 0xB00001, 0, 0xA003F),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00007, 0xB00007, 0, 0xA0041),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244F3C)),
            SI_CMD(ScriptOpcode_CALL, func_GetBadgeHint_A3A74C),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00006, 0xB00006, 0, 0xA0043),
                SI_CMD(ScriptOpcode_CALL, func_RefundHintCoins_A3AD84, 1),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00004, 0xB00001, 0, SI_VAR(1)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_GOTO, 99),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0xB00004, 0xB00001, 0, 0xA0040),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00007, 0xB00007, 0, 0xA0041),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244F3C)),
            SI_CMD(ScriptOpcode_CALL, func_GetSuperBlockHint_A3A9C4),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00006, 0xB00006, 0, 0xA0044),
                SI_CMD(ScriptOpcode_CALL, func_RefundHintCoins_A3AD84, 2),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0xB00004, 0xB00001, 0, SI_VAR(1)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_GOTO, 99),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_LABEL, 99),
    SI_CMD(ScriptOpcode_CALL, 0x802CF56C, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80245E38) = SCRIPT({
    SpeakToPlayer(0, 0xB00004, 0xB00001, 0, 0xA0045);
    await N(script_802456FC);
    await N(script_80245620);
});

s32 N(unk_80245E80)[] = {
    0x00000000,
};

Script N(script_80245E84) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

s32 N(intTable_80245EEC)[] = {
    0x0000010D, 0x00000083, 0x00000129, 0x00000111, 0x000000A2,
};

Script N(script_80245F00) = SCRIPT({
    PlaySoundAtCollider(26, 8266, 0);
    MakeLerp(0, 80, 20, 4);
    loop {
        UpdateLerp();
        RotateGroup(154, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80245FB0) = SCRIPT({
    MakeLerp(80, 0, 20, 4);
    loop {
        UpdateLerp();
        RotateGroup(154, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(26, 8267, 0);
});

Script N(script_80246060) = SCRIPT({
    DisablePlayerInput(1);
    await N(script_80245F00);
    SI_VAR(0) = 1;
    func_8024228C_A3B76C();
    match SI_VAR(0) {
        == -1 {}
        == 0 {
            ShowMessageAtScreenPos(0x1D00D4, 160, 40);
        }
        269, 297, 273 {
            group 0;
            0x802D5830(2);
            ShowGotItem(SI_VAR(0), 0, 0);
            0x802D5830(0);
            AddBadge(SI_VAR(0), SI_VAR(1));
            func_802424CC_A3B9AC();
        } else {
            func_80242534_A3BA14();
            if (SI_VAR(1) <= 0) {
                ShowMessageAtScreenPos(0x1D00D5, 160, 40);
            } else {
                ShowGotItem(SI_VAR(0), 0, 2);
                AddItem(SI_VAR(0), SI_VAR(1));
                func_802424CC_A3B9AC();
            }
        }
    }
    await N(script_80245FB0);
    DisablePlayerInput(0);
});

Script N(script_8024621C) = SCRIPT({
    bind N(script_80246060) to TriggerFlag_WALL_INTERACT 26;
});

s32 pad_006248[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80246250_A3F730

s32 pad_006258[] = {
    0x00000000, 0x00000000,
};
