#include "flo_08.h"

s32 pad_000D38[2];
s32 pad_000D74[3];
s32 pad_001E3C[1];
s32 pad_001ED4[3];
Script N(script_80241F40);
s32 N(unk_80241FB0)[2];
s32 N(unk_80241FB8)[4];
s32 N(unk_80241FC8)[16];
s32 N(unk_80242008)[3];
Script N(script_80242014);
Script N(script_80242178);
Script N(script_MakeEntities);
Script N(script_80242680);
Script N(script_ExitWalk_8024292C);
Script N(script_ExitWalk_80242988);
Script N(script_802429E4);
s32 N(lavaResetList_80242A2C)[16];
Script N(main);
s32 pad_002EA8[2];
Script N(script_NpcAI_80242EE0);
Script N(script_80242F00);
Script N(script_NpcAI_8024303C);
s32 N(unk_80243088)[1];
s32 N(unk_8024308C)[1];
Script N(script_80243090);
Script N(script_802431C4);
Script N(script_Interact_80243214);
Script N(script_Init_80243B20);
StaticNpc N(npcGroup_80243C48)[1];
StaticNpc N(npcGroup_80243E38)[1];
StaticNpc N(npcGroup_80244028)[1];
StaticNpc N(npcGroup_80244218)[1];
StaticNpc N(npcGroup_80244408)[1];
StaticNpc N(npcGroup_802445F8)[1];
StaticNpc N(npcGroup_802447E8)[1];
StaticNpc N(npcGroup_802449D8)[1];
Script N(script_Init_80244BC8);
StaticNpc N(npcGroup_80244CD4)[1];
NpcGroupList N(npcGroupList_80244EC4);
s32 pad_004F3C[1];
Script N(script_SearchBush_80244F40);
Script N(script_ShakeTree_802452A0);
s32 N(treeDropList_Tree1)[15];
Script N(script_80245914);
s32 pad_00598C[1];
Script N(script_80245990);
Script N(script_80245C3C);
Script N(script_80245F5C);
s32 pad_00611C[1];
const char D_80246120_CB4E60[8]; // "flo_00"
const char D_80246128_CB4E68[8]; // "flo_24"

// text: func_80240000_CAED40

// text: func_8024001C_CAED5C

// text: func_8024003C_CAED7C

// text: func_80240068_CAEDA8

// text: func_802400D4_CAEE14

// text: func_80240120_CAEE60

// text: func_802401CC_CAEF0C

// text: func_8024041C_CAF15C

// text: func_80240448_CAF188

// text: func_80240480_CAF1C0

// text: func_80240510_CAF250

// text: func_80240544_CAF284

// text: func_802405A8_CAF2E8

// text: func_80240600_CAF340

// text: func_80240B38_CAF878

// text: func_80240C78_CAF9B8

// text: func_80240CC0_CAFA00

// text: func_80240D08_CAFA48

s32 pad_000D38[] = {
    0x00000000, 0x00000000,
};

// text: func_80240D40_CAFA80

s32 pad_000D74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240D80_CAFAC0

// text: func_80241364_CB00A4

// text: func_802414C8_CB0208

// text: func_8024150C_CB024C

// text: func_80241744_CB0484

// text: func_802417A0_CB04E0

// text: func_80241970_CB06B0

// text: func_802419C4_CB0704

// text: func_802419FC_CB073C

// text: func_80241A98_CB07D8

// text: func_80241B5C_CB089C

// text: func_80241BCC_CB090C

// text: func_80241C00_CB0940

// text: func_80241C70_CB09B0

s32 pad_001E3C[] = {
    0x00000000,
};

// text: func_80241E40_CB0B80

s32 pad_001ED4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -870.0f, 0.0f, 0.0f, 90.0f },
    { 570.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190117,
};

Script N(script_80241F40) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

s32 N(unk_80241FB0)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80241FB8)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80241FC8)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80242008)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80242014) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240544_CAF284(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240B38_CAF878(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240B38_CAF878(50, 50);
    }
    spawn {
        sleep 3;
        func_8024003C_CAED7C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_802405A8_CAF2E8();
        func_80240C78_CAF9B8();
        sleep 5;
        func_80240CC0_CAFA00();
        sleep 5;
        func_80240C78_CAF9B8();
    }
    sleep 3;
    func_80240600_CAF340(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_80242178) = SCRIPT({
    if (SI_SAVE_FLAG(1402) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240D08_CAFA48();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240000_CAED40();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240480_CAF1C0(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240120_CAEE60();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240510_CAF250(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_CAED5C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802401CC_CAEF0C();
    if (SI_VAR(0) == -1) {
        func_80240510_CAF250(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_CAED5C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_8024041C_CAF15C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240510_CAF250(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_CAED5C();
        return;
    }
    await N(script_80242014);
    func_80240068_CAEDA8(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(1402) = 1;
    func_80240510_CAF250(SI_VAR(9));
    func_80240448_CAF188();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024001C_CAED5C();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 0xFFFFFCF4, 120, 0xFFFFFF92, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(1402));
    AssignScript(N(script_80242178));
    MakeItemEntity(348, 510, 0, 0xFFFFFFA6, 17, SI_SAVE_FLAG(1381));
});

Script N(script_80242680) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_ExitWalk_8024292C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246120_CB4E60, 6);
    sleep 100;
});

Script N(script_ExitWalk_80242988) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80246128_CB4E68, 0);
    sleep 100;
});

Script N(script_802429E4) = SCRIPT({
    bind N(script_ExitWalk_8024292C) to 0x80000 0;
    bind N(script_ExitWalk_80242988) to 0x80000 4;
});

s32 N(lavaResetList_80242A2C)[] = {
    0x00000009, 0xC4070000, 0x00000000, 0x42480000, 0x0000000A, 0x42700000, 0x00000000, 0x42480000,
    0x0000000F, 0x42700000, 0x00000000, 0x42480000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80244EC4));
    await N(script_MakeEntities);
    spawn N(script_80245F5C);
    ModifyColliderFlags(3, 19, 2);
    spawn {
        ResetFromLava(N(lavaResetList_80242A2C));
    }
    EnableTexPanning(22, 1);
    EnableTexPanning(23, 1);
    EnableTexPanning(25, 1);
    EnableTexPanning(27, 1);
    EnableTexPanning(29, 1);
    EnableTexPanning(31, 1);
    EnableTexPanning(41, 1);
    EnableTexPanning(24, 1);
    EnableTexPanning(26, 1);
    EnableTexPanning(28, 1);
    EnableTexPanning(30, 1);
    EnableTexPanning(32, 1);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
    0:
        SI_VAR(0) += 140;
        if (SI_VAR(0) > 0x10000) {
            SI_VAR(0) += 0xFFFF0000;
        }
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        SI_VAR(1) += 0xFFFFFF38;
        if (SI_VAR(1) < 0) {
            SI_VAR(1) += 0x10000;
        }
        SetTexPanOffset(2, 0, SI_VAR(1), 0);
        sleep 1;
        goto 0;
    }
    ModifyColliderFlags(3, 21, 6);
    SI_VAR(0) = 140;
    SI_VAR(1) = 0xFFFFFF77;
    SI_VAR(2) = 340;
    SI_VAR(3) = 0xFFFFFFC4;
    SI_VAR(4) = 0;
    spawn N(script_80242680);
    SI_VAR(0) = 450;
    SI_VAR(1) = 0xFFFFFF77;
    SI_VAR(2) = 590;
    SI_VAR(3) = 0xFFFFFFC4;
    SI_VAR(4) = 0;
    spawn N(script_80242680);
    spawn N(script_80245914);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_802429E4);
    spawn EnterWalk;
    await N(script_80241F40);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240D40_CAFA80();
    }
});

s32 pad_002EA8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242EB0) = {
    .moveSpeed = 1.5,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0,
    .unk_10 = 30.0,
    .unk_14 = 0x3,
    .chaseSpeed = 2.4000000953674316,
    .unk_1C = 0xF,
    .unk_20 = 0x1,
    .chaseRadius = 140.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242EE0) = SCRIPT({
    func_8024150C_CB024C(N(aISettings_80242EB0));
});

Script N(script_80242F00) = SCRIPT({
0:
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 30;
    SI_VAR(2) -= 2;
    PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 15;
    goto 0;
});

NpcSettings N(npcSettings_80242FB4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242EE0),
    .onHit = 0x80077F70,
    .aux = &N(script_80242F00),
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x64,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80242FE0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x38,
    .radius = 0x28,
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

NpcAISettings N(aISettings_8024300C) = {
    .moveSpeed = 1.0,
    .moveTime = 0x1F4,
    .waitTime = 0xA,
    .alertRadius = 50.0,
    .unk_10 = 30.0,
    .unk_14 = 0x3,
    .chaseSpeed = 3.5,
    .unk_1C = 0x28,
    .unk_20 = 0x3,
    .chaseRadius = 100.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024303C) = SCRIPT({
    DoBasicAI(N(aISettings_8024300C));
});

NpcSettings N(npcSettings_8024305C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024303C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

s32 N(unk_80243088)[] = {
    0x00000000,
};

s32 N(unk_8024308C)[] = {
    0x00000000,
};

Script N(script_80243090) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_802417A0_CB04E0(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802419C4_CB0704(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802431C4) = {
    SI_CMD(ScriptOpcode_CALL, func_802419FC_CB073C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243090), 0x10, 0, 0x802462C0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80241970_CB06B0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Interact_80243214) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_SAVE_FLAG(1364) == 0) {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 350);
        SetCamPitch(0, 18.5, -7.5);
        SetCamSpeed(0, 4.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(-1, 0xC60202, 0xC60201, 0, 0x110042);
        SetPlayerAnimation(0x10021);
        func_80241BCC_CB090C();
        SI_VAR(0) = 0x80246430;
        SI_VAR(1) = 0;
        await N(script_802431C4);
        match SI_VAR(0) {
            <= 0 {
                SetPlayerAnimation(0x10000);
                SpeakToPlayer(-1, 0xC60202, 0xC60201, 0, 0x110043);
            }
            else {
                SI_VAR(8) = SI_VAR(0);
                func_80241B5C_CB089C(SI_VAR(0));
                MakeItemEntity(SI_VAR(8), 0xFFFFFD49, 20, 0xFFFFFFE3, 1, 0);
                SI_VAR(7) = SI_VAR(0);
                PlaySoundAtNpc(-1, 8341, 0);
                SetNpcAnimation(-1, 0xC60203);
                sleep 20;
                RemoveItemEntity(SI_VAR(7));
                match SI_VAR(8) {
                    == 160 {
                        SpeakToPlayer(-1, 0xC60204, 0xC60201, 0, 0x110046);
                        PlaySoundAtNpc(-1, 540, 0);
                        EndSpeech(-1, 0xC60209, 0xC60208, 0);
                        SetNpcAnimation(-1, 0xC60207);
                        PlaySoundAtCollider(17, 457, 0);
                        ModifyColliderFlags(0, 17, 0x7FFFFE00);
                        MakeLerp(0, 100, 30, 1);
                        loop {
                            UpdateLerp();
                            SI_VAR(8) =f SI_VAR(0);
                            SI_VAR(9) =f SI_VAR(0);
                            SI_VAR(8) *= 0.5;
                            SI_VAR(9) *= 1.2001953125;
                            RotateModel(103, SI_VAR(8), 0, 1, 0);
                            RotateModel(104, SI_VAR(8), 0, 1, 0);
                            RotateModel(105, SI_VAR(8), 0, 1, 0);
                            RotateModel(99, SI_VAR(9), 0, -1, 0);
                            RotateModel(100, SI_VAR(9), 0, -1, 0);
                            RotateModel(101, SI_VAR(9), 0, -1, 0);
                            sleep 1;
                            if (SI_VAR(1) != 1) {
                                break;
                            }
                        }
                        SetNpcAnimation(-1, 0xC60205);
                        SI_SAVE_FLAG(1364) = 1;
                    }
                    == 159 {
                        SpeakToPlayer(-1, 0xC60204, 0xC60201, 0, 0x110045);
                        SetNpcAnimation(-1, 0xC60201);
                    }
                    == 158 {
                        SpeakToPlayer(-1, 0xC60204, 0xC60201, 0, 0x110045);
                        SetNpcAnimation(-1, 0xC60201);
                    }
                    else {
                        SpeakToPlayer(-1, 0xC60204, 0xC60201, 0, 0x110044);
                        SetNpcAnimation(-1, 0xC60206);
                        PlaySoundAtNpc(-1, 8342, 0);
                        MakeItemEntity(SI_VAR(8), 125, 20, 0, 1, 0);
                        SI_VAR(7) = SI_VAR(0);
                        sleep 5;
                        GetAngleToPlayer(-1, SI_VAR(0));
                        if (SI_VAR(0) < 180) {
                            MakeLerp(0, 100, 7, 0);
                            loop {
                                UpdateLerp();
                                SI_VAR(2) = -0.5;
                                SI_VAR(3) = -0.19921875;
                                SI_VAR(4) = 0.900390625;
                                SI_VAR(2) *=f SI_VAR(0);
                                SI_VAR(3) *=f SI_VAR(0);
                                SI_VAR(4) *=f SI_VAR(0);
                                SI_VAR(2) += -700.0;
                                SI_VAR(3) += 15.0;
                                SI_VAR(4) += -25.0;
                                func_80241A98_CB07D8(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                                sleep 1;
                                if (SI_VAR(1) == 0) {
                                    break;
                                }
                            }
                        } else {
                            MakeLerp(0, 100, 7, 0);
                            loop {
                                UpdateLerp();
                                SI_VAR(2) = 0.5;
                                SI_VAR(3) = -0.19921875;
                                SI_VAR(4) = 0.900390625;
                                SI_VAR(2) *=f SI_VAR(0);
                                SI_VAR(3) *=f SI_VAR(0);
                                SI_VAR(4) *=f SI_VAR(0);
                                SI_VAR(2) += -690.0;
                                SI_VAR(3) += 15.0;
                                SI_VAR(4) += -25.0;
                                func_80241A98_CB07D8(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                                sleep 1;
                                if (SI_VAR(1) == 0) {
                                    break;
                                }
                            }
                        }
                        SetNpcAnimation(-1, 0xC60201);
                        RemoveItemEntity(SI_VAR(7));
                        SetNpcAnimation(-1, 0xC60201);
                        EndSpeech(-1, 0xC60202, 0xC60201, 0);
                    }
                }
            }
        }
        spawn {
            ResetCam(0, 6.0);
        }
        sleep 10;
    } else {
        if (SI_SAVE_VAR(0) < 57) {
            SpeakToPlayer(-1, 0xC60209, 0xC60208, 0, 0x110047);
        } else {
            SpeakToPlayer(-1, 0xC60209, 0xC60208, 0, 0x110048);
        }
    }
    DisablePlayerInput(0);
    unbind;
});

Script N(script_Init_80243B20) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243214));
    if (SI_SAVE_FLAG(1364) == 1) {
        SetNpcAnimation(-1, 0xC60205);
        ModifyColliderFlags(0, 17, 0x7FFFFE00);
        RotateModel(103, 50, 0, 1, 0);
        RotateModel(104, 50, 0, 1, 0);
        RotateModel(105, 50, 0, 1, 0);
        RotateModel(99, 120, 0, -1, 0);
        RotateModel(100, 120, 0, -1, 0);
        RotateModel(101, 120, 0, -1, 0);
    }
});

StaticNpc N(npcGroup_80243C48)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242FE0),
        .pos = { -695.0, 0.0, -30.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80243B20),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201, 0x00C60201,
        },
        .tattle = 0x1A00DB,
    },
};

StaticNpc N(npcGroup_80243E38)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024305C),
        .pos = { 205.0, 0.0, -80.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0x000000CD, 0x00000000, 0xFFFFFFB0, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000CD, 0x00000000, 0xFFFFFFB0, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_80244028)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_8024305C),
        .pos = { 275.0, 0.0, -115.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0x00000113, 0x00000000, 0xFFFFFF8D, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000113, 0x00000000, 0xFFFFFF8D, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_80244218)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_8024305C),
        .pos = { -230.0, 60.0, -110.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFF1A, 0x0000003C, 0xFFFFFF92, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF1A, 0x0000003C, 0xFFFFFF92, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_80244408)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_8024305C),
        .pos = { -330.0, 60.0, -110.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFEB6, 0x0000003C, 0xFFFFFF92, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEB6, 0x0000003C, 0xFFFFFF92, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_802445F8)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_8024305C),
        .pos = { -430.0, 60.0, -110.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFE52, 0x0000003C, 0xFFFFFF92, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE52, 0x0000003C, 0xFFFFFF92, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_802447E8)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_8024305C),
        .pos = { -530.0, 60.0, -110.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFDEE, 0x0000003C, 0xFFFFFF92, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFDEE, 0x0000003C, 0xFFFFFF92, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_802449D8)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_8024305C),
        .pos = { -630.0, 60.0, -110.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFD8A, 0x0000003C, 0xFFFFFF92, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFD8A, 0x0000003C, 0xFFFFFF92, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

Script N(script_Init_80244BC8) = SCRIPT({
    spawn {
        sleep 2;
        GetNpcPointer(2, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            RemoveNpc(-1);
            return;
        }
        RandInt(100, SI_VAR(0));
        if (SI_VAR(0) < 30) {
            SetNpcFlagBits(2, 6, 1);
            SetNpcPos(2, 0, 0xFFFFFC18, 0);
        } else {
            SetNpcFlagBits(-1, 6, 1);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

StaticNpc N(npcGroup_80244CD4)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_80242FB4),
        .pos = { 240.0, 0.0, -90.0 },
        .flags = 0x00002C00,
        .init = N(script_Init_80244BC8),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_HONEY_SYRUP, 24 }, { ItemId_MAPLE_SYRUP, 25 }, { ItemId_JAMMIN_JELLY, 1 } },
        .movement = { 0x000000F0, 0x00000000, 0xFFFFFFA6, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000F0, 0x00000000, 0xFFFFFFA6, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00480101, 0x00480102, 0x00480103, 0x00480103, 0x00480101, 0x00480101, 0x00480108, 0x00480108, 0x00480106, 0x00480107, 0x00480101, 0x00480101, 0x00480101, 0x00480101, 0x00480101, 0x00480101,
        },
    },
};

NpcGroupList N(npcGroupList_80244EC4) = {
    NPC_GROUP(N(npcGroup_80243C48), 0x00000000),
    NPC_GROUP(N(npcGroup_80243E38), 0x18140001),
    NPC_GROUP(N(npcGroup_80244028), 0x180F0001),
    NPC_GROUP(N(npcGroup_80244218), 0x180F0002),
    NPC_GROUP(N(npcGroup_80244408), 0x180F0002),
    NPC_GROUP(N(npcGroup_802445F8), 0x180F0002),
    NPC_GROUP(N(npcGroup_802447E8), 0x180F0002),
    NPC_GROUP(N(npcGroup_802449D8), 0x18120002),
    NPC_GROUP(N(npcGroup_80244CD4), 0x181C0001),
    {},
};

s32 pad_004F3C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80244F40) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241C70_CB09B0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241C70_CB09B0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802452A0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241C70_CB09B0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241C70_CB09B0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241C70_CB09B0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241C70_CB09B0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .count = 0x1,
    .modelIDs = { 0x2E },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2D },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000002, 0x0000009E, 0x00000154, 0x00000066, 0xFFFFFFA7, 0x0000000C, 0x00000000, 0xF971889D,
    0x0000009E, 0x000001B8, 0x00000066, 0xFFFFFFA7, 0x0000000C, 0x00000000, 0xF971889E,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80245904) =  { 391.0, 0.0, -102.0, 0.0 };

Script N(script_80245914) = SCRIPT({
    SI_AREA_FLAG(29) = 0;
    SI_AREA_FLAG(30) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802452A0) to TriggerFlag_WALL_HAMMER 22;
    bind N(script_ShakeTree_802452A0) to TriggerFlag_BOMB N(triggerCoord_80245904);
});

s32 pad_00598C[] = {
    0x00000000,
};

Script N(script_80245990) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_80245C3C) = SCRIPT({
    SI_VAR(9) = SI_VAR(6);
    SI_VAR(8) = SI_VAR(5);
    SI_VAR(7) = SI_VAR(4);
    SI_VAR(6) = SI_VAR(3);
    SI_VAR(5) = SI_VAR(2);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(3) = SI_VAR(0);
    EnableModel(SI_VAR(6), 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80241E40_CB0B80();
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    spawn {
        sleep 5;
        EnableModel(SI_VAR(6), 1);
    }
    if (SI_VAR(10) != 0) {
        spawn {
            sleep 5;
            SI_VAR(0) = SI_VAR(3);
            SI_VAR(1) = SI_VAR(4);
            SI_VAR(2) = SI_VAR(5);
            SI_VAR(1) += 10;
            SI_VAR(2) += 8;
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 15;
            SI_VAR(1) -= 10;
            MakeItemEntity(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2), 14, 0);
        }
    }
    spawn {
        sleep 10;
        PlaySoundAt(248, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    }
    MakeLerp(0, 180, 20, 2);
1:
    UpdateLerp();
    RotateModel(SI_VAR(8), SI_VAR(0), 1, 0, 0);
    RotateModel(SI_VAR(9), SI_VAR(0), 1, 0, 0);
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
    EnableModel(SI_VAR(7), 0);
});

Script N(script_80245F5C) = SCRIPT({
    GetModelCenter(60);
    SI_VAR(3) = 60;
    SI_VAR(4) = 61;
    SI_VAR(5) = 62;
    SI_VAR(6) = 63;
    SI_VAR(10) = 0;
    spawn N(script_80245C3C);
    GetModelCenter(54);
    SI_VAR(3) = 54;
    SI_VAR(4) = 55;
    SI_VAR(5) = 56;
    SI_VAR(6) = 57;
    SI_VAR(10) = 0;
    spawn N(script_80245C3C);
    GetModelCenter(48);
    SI_VAR(3) = 48;
    SI_VAR(4) = 49;
    SI_VAR(5) = 50;
    SI_VAR(6) = 51;
    SI_VAR(10) = 0;
    spawn N(script_80245C3C);
    GetModelCenter(67);
    SI_VAR(3) = 67;
    SI_VAR(4) = 66;
    SI_VAR(5) = 68;
    SI_VAR(6) = 69;
    SI_VAR(10) = 174;
    spawn N(script_80245C3C);
});

s32 pad_00611C[] = {
    0x00000000,
};

// rodata: D_80246120_CB4E60

// rodata: D_80246128_CB4E68

// rodata: jtbl_80246130_CB4E70

