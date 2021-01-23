#include "omo_05.h"

s32 pad_0023FC[1];
Script N(script_80242480);
s32 pad_0024AC[1];
Script N(script_ExitWalk_802424B0);
Script N(script_ExitWalk_8024250C);
Script N(script_80242568);
Script N(main);
Script N(script_802427C0);
Script N(script_802429EC);
Script N(script_80242E68);
s32 N(unk_80242E90)[12];
Script N(script_80242EC0);
s32 unk_missing_80242EE0[11];
Script N(script_NpcAI_80242F3C);
f32 N(floatTable_80242F88)[6];
s32 N(unk_80242FA0)[12];
Script N(script_80242FD0);
s32 unk_missing_80243040[11];
s32 N(unk_80243098)[1];
s32 N(unk_8024309C)[1];
Script N(script_802430A0);
Script N(script_802431D4);
Script N(script_Interact_80243224);
Script N(script_Init_8024484C);
StaticNpc N(npcGroup_80244964)[3];
StaticNpc N(npcGroup_80244F34)[1];
NpcGroupList N(npcGroupList_80245124);
s32 pad_005148[2];
Script N(script_MakeEntities);
s32 pad_005294[3];
const char D_802452A0_DB7560[8]; // "omo_17"
s32 pad_0052A8[2];
s32 pad_005644[1];

// text: func_80240000_DB22C0

// text: func_80240070_DB2330

// text: func_80240140_DB2400

// text: func_802401D8_DB2498

// text: func_80240238_DB24F8

// text: N(UnkNpcAIFunc4)

// text: func_802405BC_DB287C

// text: func_80240780_DB2A40

// text: func_80240A54_DB2D14

// text: func_80240C04_DB2EC4

// text: N(UnkNpcAIFunc1)

// text: func_802412EC_DB35AC

// text: N(UnkNpcAIFunc2)

// text: func_802416A8_DB3968

// text: func_80241714_DB39D4

// text: N(UnkNpcAIFunc3)

// text: func_802418AC_DB3B6C

// text: func_80241C3C_DB3EFC

// text: func_80241D60_DB4020

// text: func_80241F4C_DB420C

// text: func_80241FA8_DB4268

// text: func_80242178_DB4438

// text: func_802421CC_DB448C

// text: func_80242204_DB44C4

// text: func_802422A0_DB4560

// text: func_80242328_DB45E8

// text: func_802423C8_DB4688

s32 pad_0023FC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 590.0f, 0.0f, 135.0f, 270.0f },
    { 590.0f, 10.0f, -140.0f, 270.0f },
    { -600.0f, 10.0f, 0.0f, 90.0f },
    { 600.0f, 10.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900DD,
};

Script N(script_80242480) = SCRIPT({
    SetMusicTrack(0, 32, 0, 8);
});

s32 pad_0024AC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802424B0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802452A0_DB7560, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024250C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802452A0_DB7560, 1);
    sleep 100;
});

Script N(script_80242568) = SCRIPT({
    bind N(script_ExitWalk_802424B0) to 0x80000 11;
    bind N(script_ExitWalk_8024250C) to 0x80000 13;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80245124));
    await N(script_MakeEntities);
    await N(script_80242E68);
    spawn N(script_80242480);
    SetCamLeadPlayer(0, 0);
    SetGroupEnabled(136, 0);
    if (SI_SAVE_VAR(0) >= 0xFFFFFFFE) {
        RotateModel(46, 105, 0, 1, 0);
        RotateModel(47, 105, 0, 1, 0);
        RotateModel(48, 105, 0, 1, 0);
        RotateModel(50, 105, 0, 1, 0);
        RotateModel(51, 105, 0, 1, 0);
        RotateModel(52, 105, 0, 1, 0);
        ModifyColliderFlags(0, 0, 0x7FFFFE00);
        ModifyColliderFlags(0, 1, 0x7FFFFE00);
    }
    SI_VAR(0) = N(script_80242568);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_802427C0) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(78, SI_VAR(0), 0, 0, 1);
    RotateModel(80, SI_VAR(0), 0, 0, 1);
    RotateModel(82, SI_VAR(0), 0, 0, 1);
    RotateModel(84, SI_VAR(0), 0, 0, 1);
    RotateModel(86, SI_VAR(0), 0, 0, 1);
    RotateModel(88, SI_VAR(0), 0, 0, 1);
    RotateModel(90, SI_VAR(0), 0, 0, 1);
    RotateModel(92, SI_VAR(0), 0, 0, 1);
    RotateModel(94, SI_VAR(0), 0, 0, 1);
    RotateModel(96, SI_VAR(0), 0, 0, 1);
    RotateModel(98, SI_VAR(0), 0, 0, 1);
    RotateModel(100, SI_VAR(0), 0, 0, 1);
    RotateModel(102, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_802429EC) = SCRIPT({
0:
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(17, SI_VAR(0), 0, -1, 0);
    RotateModel(19, SI_VAR(0), 0, 1, 0);
    RotateModel(21, SI_VAR(0), 0, -1, 0);
    RotateModel(23, SI_VAR(0), 0, 1, 0);
    RotateModel(25, SI_VAR(0), 0, -1, 0);
    RotateModel(27, SI_VAR(0), 0, 1, 0);
    RotateModel(29, SI_VAR(0), 0, -1, 0);
    RotateModel(31, SI_VAR(0), 0, 1, 0);
    RotateModel(33, SI_VAR(0), 0, -1, 0);
    RotateModel(35, SI_VAR(0), 0, 1, 0);
    RotateModel(37, SI_VAR(0), 0, -1, 0);
    RotateModel(39, SI_VAR(0), 0, 1, 0);
    RotateModel(41, SI_VAR(0), 0, -1, 0);
    RotateModel(43, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(17, SI_VAR(0), 0, -1, 0);
    RotateModel(19, SI_VAR(0), 0, 1, 0);
    RotateModel(21, SI_VAR(0), 0, -1, 0);
    RotateModel(23, SI_VAR(0), 0, 1, 0);
    RotateModel(25, SI_VAR(0), 0, -1, 0);
    RotateModel(27, SI_VAR(0), 0, 1, 0);
    RotateModel(29, SI_VAR(0), 0, -1, 0);
    RotateModel(31, SI_VAR(0), 0, 1, 0);
    RotateModel(33, SI_VAR(0), 0, -1, 0);
    RotateModel(35, SI_VAR(0), 0, 1, 0);
    RotateModel(37, SI_VAR(0), 0, -1, 0);
    RotateModel(39, SI_VAR(0), 0, 1, 0);
    RotateModel(41, SI_VAR(0), 0, -1, 0);
    RotateModel(43, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_80242E68) = SCRIPT({
    spawn N(script_802427C0);
    spawn N(script_802429EC);
});

s32 N(unk_80242E90)[] = {
    0x40000000, 0x0000003C, 0x0000000F, 0x42C80000, 0x41F00000, 0x00000004, 0x40800000, 0x00000006,
    0x00000001, 0x430C0000, 0x41F00000, 0x00000001,
};

Script N(script_80242EC0) = SCRIPT({
    func_80240238_DB24F8(N(unk_80242E90));
});

s32 unk_missing_80242EE0[] = {
    0x00000000, 0x00170016, 0x00000000, 0x00000000, N(script_80242EC0), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000E0001,
};

NpcAISettings N(aISettings_80242F0C) = {
    .moveSpeed = 1.7f,
    .moveTime = 0x50,
    .waitTime = 0x1,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x4,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 140.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242F3C) = SCRIPT({
    func_80240780_DB2A40(N(aISettings_80242F0C));
});

NpcSettings N(npcSettings_80242F5C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242F3C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0x1,
};

f32 N(floatTable_80242F88)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

s32 N(unk_80242FA0)[] = {
    0x3FE66666, 0x00000000, 0x00000000, 0x42F00000, 0x41F00000, 0x00000003, 0x40800000, 0x0000003C,
    0x00000003, 0x43160000, 0x41F00000, 0x00000001,
};

Script N(script_80242FD0) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_80241D60_DB4020(N(unk_80242FA0));
});

s32 unk_missing_80243040[] = {
    0x00000000, 0x00190016, 0x00000000, 0x00000000, N(script_80242FD0), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000E0001,
};

NpcSettings N(npcSettings_8024306C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x44,
    .radius = 0x3C,
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

s32 N(unk_80243098)[] = {
    0x00000000,
};

s32 N(unk_8024309C)[] = {
    0x00000000,
};

Script N(script_802430A0) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80241FA8_DB4268(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802421CC_DB448C(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802431D4) = {
    SI_CMD(ScriptOpcode_CALL, func_80242204_DB44C4, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802430A0), 0x10, 0, 0x80245650, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80242178_DB4438, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Interact_80243224) = SCRIPT({
    DisablePlayerInput(1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), 0, SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
    SetCamDistance(0, 350);
    SetCamPitch(0, 17.5, -10.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    func_802423C8_DB4688();
    NpcFacePlayer(-1, 1);
    SetNpcAnimation(-1, 0xC10001);
    if (SI_SAVE_FLAG(1099) == 0) {
        SpeakToPlayer(-1, 0xC10004, 0xC10001, 0, 0xF0040);
        SI_SAVE_FLAG(1099) = 1;
    } else {
        SpeakToPlayer(-1, 0xC10004, 0xC10001, 0, 0xF0041);
    }
    SI_VAR(0) = 0x802457C0;
    SI_VAR(1) = -1;
    await N(script_802431D4);
    if (SI_VAR(0) <= 0) {
        SetNpcAnimation(-1, 0xC1000D);
        ResetCam(0, 8.0);
        DisablePlayerInput(0);
        return;
    }
    SI_VAR(8) = SI_VAR(0);
    func_802422A0_DB4560(SI_VAR(0));
    MakeItemEntity(SI_VAR(8), 0xFFFFFF01, 35, 110, 1, 0);
    SI_VAR(7) = SI_VAR(0);
    SetItemFlags(SI_VAR(7), 64, 1);
    SetNpcAnimation(-1, 0xC10005);
    loop 6 {
        sleep 10;
        PlaySoundAtNpc(-1, 8341, 0);
    }
    if (SI_VAR(9) != 2) {
        ResetCam(0, 10.0);
        sleep 10;
        PlaySoundAtNpc(-1, 8342, 0);
        SetNpcAnimation(-1, 0xC10006);
        SetItemFlags(SI_VAR(7), 64, 0);
        GetAngleToPlayer(-1, SI_VAR(0));
        if (SI_VAR(0) < 180) {
            MakeLerp(0, 100, 7, 0);
            loop {
                UpdateLerp();
                SI_VAR(2) = -1.0;
                SI_VAR(3) = -0.349609375;
                SI_VAR(4) = 0.0;
                SI_VAR(2) *= f SI_VAR(0);
                SI_VAR(3) *= f SI_VAR(0);
                SI_VAR(4) *= f SI_VAR(0);
                SI_VAR(2) += -270.0;
                SI_VAR(3) += 35.0;
                SI_VAR(4) += 110.0;
                SetItemPos(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            MakeLerp(0, 100, 7, 0);
            loop {
                UpdateLerp();
                SI_VAR(2) = -1.0;
                SI_VAR(3) = 0.3505859375;
                SI_VAR(4) = 0.0;
                SI_VAR(2) *= f SI_VAR(0);
                SI_VAR(3) *= f SI_VAR(0);
                SI_VAR(4) *= f SI_VAR(0);
                SI_VAR(2) += -355.0;
                SI_VAR(3) += 0.0;
                SI_VAR(4) += 110.0;
                SetItemPos(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        } else {
            MakeLerp(0, 100, 7, 0);
            loop {
                UpdateLerp();
                SI_VAR(2) = 1.0;
                SI_VAR(3) = -0.349609375;
                SI_VAR(4) = 0.0;
                SI_VAR(2) *= f SI_VAR(0);
                SI_VAR(3) *= f SI_VAR(0);
                SI_VAR(4) *= f SI_VAR(0);
                SI_VAR(2) += -240.0;
                SI_VAR(3) += 35.0;
                SI_VAR(4) += 110.0;
                SetItemPos(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            MakeLerp(0, 100, 7, 0);
            loop {
                UpdateLerp();
                SI_VAR(2) = 1.0;
                SI_VAR(3) = 0.3505859375;
                SI_VAR(4) = 0.0;
                SI_VAR(2) *= f SI_VAR(0);
                SI_VAR(3) *= f SI_VAR(0);
                SI_VAR(4) *= f SI_VAR(0);
                SI_VAR(2) += -155.0;
                SI_VAR(3) += 0.0;
                SI_VAR(4) += 110.0;
                SetItemPos(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
    }
    RemoveItemEntity(SI_VAR(7));
    SetNpcAnimation(-1, 0xC10001);
    match SI_VAR(9) {
        == 0 {
            SpeakToPlayer(-1, 0xC10004, 0xC10001, 0, 0xF0042);
            SetNpcAnimation(-1, 0xC1000D);
        }
        == 1 {
            SpeakToPlayer(-1, 0xC10004, 0xC10001, 0, 0xF0043);
            SetNpcAnimation(-1, 0xC1000D);
        }
        == 2 {
            spawn {
                ShowMessageAtScreenPos(0xF0044, 160, 40);
            }
            DisablePartnerAI(0);
            SetNpcAnimation(-1, 0xC10007);
            spawn {
                SetNpcFlagBits(2, 2, 0);
                GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcJumpscale(2, 0.05078125);
                NpcJump0(2, SI_VAR(0), 2, SI_VAR(2), 8);
                0x802CDE68(2, 15);
                SI_VAR(3) = 0;
                loop 5 {
                    SI_VAR(3) += 50;
                    SetNpcRotation(2, 0, 0, SI_VAR(3));
                    sleep 1;
                }
                SI_VAR(2) += 20;
                SetNpcJumpscale(2, 0.2001953125);
                NpcJump0(2, SI_VAR(0), 0xFFFFFFF6, SI_VAR(2), 8);
                sleep 10;
                RemoveNpc(2);
            }
            spawn {
                SetNpcFlagBits(1, 2, 0);
                GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcJumpscale(1, 0.05078125);
                NpcJump0(1, SI_VAR(0), 2, SI_VAR(2), 8);
                0x802CDE68(1, 15);
                SI_VAR(3) = 0;
                loop 5 {
                    SI_VAR(3) -= 50;
                    SetNpcRotation(1, 0, 0, SI_VAR(3));
                    sleep 1;
                }
                SI_VAR(2) += 20;
                SetNpcJumpscale(1, 0.2001953125);
                NpcJump0(1, SI_VAR(0), 0xFFFFFFF6, SI_VAR(2), 8);
                sleep 10;
                RemoveNpc(1);
            }
            UseSettingsFrom(0, 0xFFFFFF06, 25, 0xFFFFFF9C);
            SetPanTarget(0, 0xFFFFFF06, 25, 0xFFFFFF9C);
            SetCamDistance(0, 420.0);
            SetCamPitch(0, 12.0, -1.5);
            SetCamSpeed(0, 25.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            PlaySoundAtNpc(-1, 897, 0);
            sleep 33;
            SetCamDistance(0, 320.0);
            SetCamPitch(0, 13.0, -0.7998046875);
            SetCamSpeed(0, 25.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            PlaySoundAtNpc(-1, 898, 0);
            sleep 33;
            SetCamDistance(0, 250.0);
            SetCamPitch(0, 14.0, 0.0);
            SetCamSpeed(0, 25.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            PlaySoundAtNpc(-1, 899, 0);
            sleep 18;
            SetMusicTrack(0, 114, 0, 8);
            sleep 30;
            0x802D7CF8(0, 0, 0, 320, 240, 128, 10);
            loop 7 {
                SetCamDistance(0, 320.0);
                SetCamPitch(0, 14.0, 0.0);
                SetCamSpeed(0, 15.0);
                PanToTarget(0, 0, 1);
                WaitForCam(0, 1.0);
                SetCamDistance(0, 250.0);
                SetCamPitch(0, 14.0, 0.0);
                SetCamSpeed(0, 15.0);
                PanToTarget(0, 0, 1);
                WaitForCam(0, 1.0);
            }
            RotateModel(46, 105, 0, 1, 0);
            RotateModel(47, 105, 0, 1, 0);
            RotateModel(48, 105, 0, 1, 0);
            RotateModel(50, 105, 0, 1, 0);
            RotateModel(51, 105, 0, 1, 0);
            RotateModel(52, 105, 0, 1, 0);
            sleep 5;
            func_80242328_DB45E8();
            func_80242328_DB45E8();
            func_80242328_DB45E8();
            0x802D7CF8(0, 0, 0, 320, 240, 0, 10);
            UseSettingsFrom(0, 0xFFFFFF06, 0, 100);
            SetPanTarget(0, 0xFFFFFF06, 0, 100);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            SetSelfVar(0, 1);
            spawn {
19:
                PlayerFaceNpc(-1, 0);
                GetSelfVar(0, SI_VAR(0));
                if (SI_VAR(0) != 0) {
                    sleep 1;
                    goto 19;
                }
            }
            PlaySoundAtNpc(-1, 900, 0);
            SetNpcAnimation(-1, 0xC10003);
            SetNpcFlagBits(-1, 256, 1);
            SetNpcSpeed(-1, 20.0);
            NpcMoveTo(-1, 0, 110, 0);
            sleep 20;
            PlaySoundAtNpc(-1, 900, 0);
            SetNpcFlagBits(-1, 128, 1);
            SetNpcPos(-1, 0, 145, 110);
            NpcMoveTo(-1, 0xFFFFFE0C, 110, 0);
            SetNpcFlagBits(-1, 128, 0);
            sleep 20;
            PlaySoundAtNpc(-1, 900, 0);
            SetNpcRotation(-1, 0, 0, 0xFFFFFFD3);
            InterpNpcYaw(-1, 90, 0);
            MakeLerp(0, 100, 30, 0);
10:
            UpdateLerp();
            SI_VAR(2) = 3.9501953125;
            SI_VAR(3) = -1.8994140625;
            SI_VAR(4) = 0.0;
            SI_VAR(2) *= f SI_VAR(0);
            SI_VAR(3) *= f SI_VAR(0);
            SI_VAR(4) *= f SI_VAR(0);
            SI_VAR(2) += -445.0;
            SI_VAR(3) += 130.0;
            SI_VAR(4) += 230.0;
            SetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 10;
            }
            sleep 20;
            PlaySoundAtNpc(-1, 900, 0);
            SetNpcRotation(-1, 0, 0, 0);
            SetNpcPos(-1, 0xFFFFFE0C, 0, 110);
            NpcMoveTo(-1, 0xFFFFFF06, 110, 0);
            sleep 20;
            SetNpcAnimation(-1, 0xC10008);
            spawn {
                sleep 15;
                SetCamPitch(0, -2.5, -24.0);
                SetCamSpeed(0, 1.5);
                PanToTarget(0, 0, 1);
            }
            spawn {
                sleep 15;
                PlaySoundAtNpc(-1, 901, 0);
                SetNpcAnimation(-1, 0xC1000B);
                SetNpcJumpscale(-1, 0.001953125);
                NpcJump0(-1, 0xFFFFFF06, 500, 110, 40);
                SetSelfVar(0, 2);
            }
            ShowMessageAtScreenPos(0xF0045, 160, 40);
12:
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) != 2) {
                sleep 1;
                goto 12;
            }
            SetSelfVar(0, 0);
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            MakeItemEntity(41, SI_VAR(0), 400, SI_VAR(2), 13, SI_SAVE_FLAG(1106));
            sleep 30;
            EnablePartnerAI();
            sleep 20;
            SetPlayerAnimation(0x10021);
            sleep 1;
            ResetCam(0, 90.0);
            sleep 60;
            SetPlayerAnimation(0x10002);
            ModifyColliderFlags(0, 0, 0x7FFFFE00);
            ModifyColliderFlags(0, 1, 0x7FFFFE00);
            SI_SAVE_VAR(0) = 0xFFFFFFFE;
        }
    }
    spawn N(script_80242480);
    DisablePlayerInput(0);
    if (SI_SAVE_VAR(0) == 0xFFFFFFFE) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_8024484C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFFE) {
        RemoveNpc(2);
        RemoveNpc(1);
        RemoveNpc(-1);
    } else {
        SetNpcAnimation(-1, 0xC1000D);
        SetNpcAnimation(2, 0xC1000A);
        SetNpcFlagBits(2, 2, 1);
        SetNpcPos(2, 0xFFFFFEE3, 50, 90);
        SetNpcAnimation(1, 0xC10009);
        SetNpcFlagBits(1, 2, 1);
        SetNpcPos(1, 0xFFFFFF2E, 50, 90);
        BindNpcInteract(-1, N(script_Interact_80243224));
    }
});

StaticNpc N(npcGroup_80244964)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024306C),
        .pos = { -250.0, 10.0, 85.0 },
        .flags = 0x00400901,
        .init = N(script_Init_8024484C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001,
        },
        .tattle = 0x1A00B7,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_8024306C),
        .pos = { -250.0, 10.0, 85.0 },
        .flags = 0x00000B01,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001,
        },
        .tattle = 0x1A00B7,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024306C),
        .pos = { -250.0, 10.0, 85.0 },
        .flags = 0x00000B01,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001,
        },
        .tattle = 0x1A00B7,
    },
};

StaticNpc N(npcGroup_80244F34)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80242F5C),
        .pos = { 320.0, 10.0, -145.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DUSTY_HAMMER, 2 }, { ItemId_PEBBLE, 2 } },
        .movement = { 0x00000140, 0x0000000A, 0xFFFFFF6F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000140, 0x0000000A, 0xFFFFFF6F, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003C0001, 0x003C0003, 0x003C0004, 0x003C0003, 0x003C0001, 0x003C0001, 0x003C0008, 0x003C0008, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001, 0x003C0001,
        },
    },
};

NpcGroupList N(npcGroupList_80245124) = {
    NPC_GROUP(N(npcGroup_80244964), 0x00000000),
    NPC_GROUP(N(npcGroup_80244F34), 0x102A0007),
    {},
};

s32 pad_005148[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 400, 70, 0xFFFFFF6A, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1134));
    MakeEntity(0x802EA564, 550, 70, 0xFFFFFF6A, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1135));
    if (SI_SAVE_FLAG(1106) == 0) {
        if (SI_SAVE_VAR(0) > 0xFFFFFFFD) {
            MakeItemEntity(41, 0xFFFFFF06, 0, 120, 0, SI_SAVE_FLAG(1106));
        }
    }
    MakeEntity(0x802EA588, 475, 70, 0xFFFFFF6A, 0, 154, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1136));
    MakeEntity(0x802EA588, 0xFFFFFDE4, 70, 0xFFFFFF6A, 0, 155, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1137));
});

s32 pad_005294[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802452A0_DB7560

s32 pad_0052A8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802452B0_DB7570

// rodata: D_802452B8_DB7578

// rodata: jtbl_802452C0_DB7580

// rodata: D_80245450_DB7710

// rodata: D_80245458_DB7718

// rodata: jtbl_80245460_DB7720

// rodata: D_802455F0_DB78B0

// rodata: D_802455F8_DB78B8

// rodata: D_80245600_DB78C0

// rodata: jtbl_80245608_DB78C8

s32 pad_005644[] = {
    0x00000000,
};

// rodata: D_80245648_DB7908
