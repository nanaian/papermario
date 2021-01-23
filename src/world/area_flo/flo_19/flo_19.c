#include "flo_19.h"

Script N(script_802409C0);
s32 pad_000ABC[1];
Script N(script_80240AC0);
s32 pad_000AF4[3];
Script N(script_UpdateTexturePan_80240B00);
Script N(script_ExitWalk_80240B9C);
Script N(script_80240BF8);
Script N(main);
s32 pad_001044[3];
Script N(script_80241050);
Script N(script_80241650);
Script N(script_8024169C);
Script N(script_802416E8);
Script N(script_80241734);
Script N(script_80241780);
s32 pad_001A68[2];
Script N(script_80241A70);
Script N(script_80241B10);
Script N(script_80241BB0);
Script N(script_80241C58);
Script N(script_80241CC4);
Script N(script_802423F8);
Script N(script_80242A2C);
Script N(script_80242FD0);
s32 pad_002FFC[1];
const char D_80243000_CE66F0[8]; // "flo_21"
const char D_80243008_CE66F8[8]; // "flo_00"

// text: func_80240000_CE36F0

// text: func_80240124_CE3814

// text: func_8024030C_CE39FC

// text: func_80240340_CE3A30

// text: func_802404D0_CE3BC0

// text: func_80240540_CE3C30

// text: func_80240660_CE3D50

// text: func_80240784_CE3E74

// text: func_802407B0_CE3EA0

EntryList N(entryList) = {
    { 0.0f, 0.0f, 100.0f, 90.0f },
    { 460.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, -500.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190123,
};

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_802409C0) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 0),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 1),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 50, 0, 8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 7),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_IF_NE, SI_AREA_FLAG(44), 0),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, FadeOutMusic, 1, 3000),
                SI_CMD(ScriptOpcode_CALL, FadeInMusic, 0, 50, 0, 3000, 0, 127),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_000ABC[] = {
    0x00000000,
};

Script N(script_80240AC0) = SCRIPT({
    MakeItemEntity(268, 0xFFFFFF38, 160, 0xFFFFFF2B, 17, SI_SAVE_FLAG(1391));
});

s32 pad_000AF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240B00) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_CE36F0();
                    return;
                }
            }
        }
    }
    func_80240124_CE3814();
});

Script N(script_ExitWalk_80240B9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243000_CE66F0, 0);
    sleep 100;
});

Script N(script_80240BF8) = SCRIPT({
    bind N(script_ExitWalk_80240B9C) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 39;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1985) = 1;
    await N(script_80240AC0);
    ParentColliderToModel(12, 86);
    HidePlayerShadow(1);
    spawn N(script_80242FD0);
    spawn N(script_80241780);
    ModifyColliderFlags(3, 5, 7);
    EnableTexPanning(17, 1);
    EnableTexPanning(18, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFF88;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240B00);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFFA6;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240B00);
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 3) {
        SI_AREA_FLAG(44) = 0;
    }
    match SI_VAR(0) {
        == 0 {
            spawn N(script_80240BF8);
        }
        == 1 {
            ModifyColliderFlags(0, 1, 0x7FFFFE00);
            SI_VAR(0) = N(script_80240BF8);
            spawn EnterWalk;
        }
        == 2 {
            spawn N(script_80242A2C);
            spawn N(script_80240BF8);
        }
        == 3 {
            spawn N(script_80241CC4);
            spawn N(script_80240BF8);
        }
    }
    await N(script_802409C0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_8024030C_CE39FC();
    }
});

s32 pad_001044[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241050) = SCRIPT({
    group 239;
    SI_VAR(15) = 0;
0:
    SI_VAR(0) = -215.4375;
    SI_VAR(1) = 128.59375;
    SI_VAR(2) = -200.0;
    SI_VAR(1) +=f SI_MAP_VAR(12);
    TranslateGroup(28, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = -79.859375;
    func_80240340_CE3A30(SI_VAR(15), SI_VAR(1), 5.0, 136.765625, 300, 0, 0);
    SI_VAR(2) = -200.0;
    SI_VAR(1) +=f SI_MAP_VAR(13);
    TranslateGroup(32, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = -364.265625;
    func_80240340_CE3A30(SI_VAR(15), SI_VAR(1), 5.0, 106.765625, 300, 0, 0);
    SI_VAR(2) = 10.0;
    SI_VAR(1) +=f SI_MAP_VAR(14);
    TranslateGroup(36, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = 295.734375;
    func_80240340_CE3A30(SI_VAR(15), SI_VAR(1), 65.0, 86.984375, 200, 0, 0);
    SI_VAR(2) = -80.0;
    SI_VAR(1) +=f SI_MAP_VAR(15);
    TranslateGroup(40, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240340_CE3A30(SI_VAR(15), SI_VAR(2), 0.96875, 1.03125, 15, 0, 0);
    func_80240340_CE3A30(SI_VAR(15), SI_VAR(3), 1.03125, 0.96875, 15, 0, 0);
    SI_VAR(0) =f SI_MAP_VAR(12);
    SI_VAR(1) =f SI_MAP_VAR(12);
    SI_VAR(0) *= -0.01953125;
    SI_VAR(1) *= 0.0400390625;
    SI_VAR(0) +=f SI_VAR(2);
    SI_VAR(1) +=f SI_VAR(3);
    ScaleGroup(28, SI_VAR(0), SI_VAR(1), 1);
    SI_VAR(0) =f SI_MAP_VAR(13);
    SI_VAR(1) =f SI_MAP_VAR(13);
    SI_VAR(0) *= -0.01953125;
    SI_VAR(1) *= 0.0400390625;
    SI_VAR(0) +=f SI_VAR(2);
    SI_VAR(1) +=f SI_VAR(3);
    ScaleGroup(32, SI_VAR(0), SI_VAR(1), 1);
    SI_VAR(0) =f SI_MAP_VAR(14);
    SI_VAR(1) =f SI_MAP_VAR(14);
    SI_VAR(0) *= -0.01953125;
    SI_VAR(1) *= 0.0400390625;
    SI_VAR(0) +=f SI_VAR(2);
    SI_VAR(1) +=f SI_VAR(3);
    ScaleGroup(36, SI_VAR(0), SI_VAR(1), 1);
    SI_VAR(0) =f SI_MAP_VAR(15);
    SI_VAR(1) =f SI_MAP_VAR(15);
    SI_VAR(0) *= -0.01953125;
    SI_VAR(1) *= 0.0400390625;
    SI_VAR(0) +=f SI_VAR(2);
    SI_VAR(1) +=f SI_VAR(3);
    ScaleGroup(40, SI_VAR(0), SI_VAR(1), 1);
    UpdateColliderTransform(8);
    UpdateColliderTransform(9);
    UpdateColliderTransform(7);
    UpdateColliderTransform(10);
    SI_VAR(15) += 1;
    if (SI_VAR(15) >= 1200) {
        SI_VAR(15) = 0;
    }
    SI_VAR(0) =f SI_VAR(10);
    SI_VAR(1) =f SI_VAR(11);
    SI_VAR(2) =f SI_VAR(12);
    SI_VAR(3) =f SI_VAR(13);
    SI_VAR(0) *= -0.046875;
    SI_VAR(1) *= -0.09375;
    SI_VAR(2) *= -0.09375;
    SI_VAR(3) *= -0.09375;
    SI_MAP_VAR(12) +=f SI_VAR(0);
    SI_MAP_VAR(13) +=f SI_VAR(1);
    SI_MAP_VAR(14) +=f SI_VAR(2);
    SI_MAP_VAR(15) +=f SI_VAR(3);
    SI_MAP_VAR(12) *= 0.84375;
    SI_MAP_VAR(13) *= 0.84375;
    SI_MAP_VAR(14) *= 0.84375;
    SI_MAP_VAR(15) *= 0.84375;
    SI_VAR(10) +=f SI_MAP_VAR(12);
    SI_VAR(11) +=f SI_MAP_VAR(13);
    SI_VAR(12) +=f SI_MAP_VAR(14);
    SI_VAR(13) +=f SI_MAP_VAR(15);
    sleep 1;
    goto 0;
});

Script N(script_80241650) = SCRIPT({
    spawn {
        SI_MAP_VAR(12) += -1.5;
        sleep 1;
        SI_MAP_VAR(12) += -1.5;
    }
});

Script N(script_8024169C) = SCRIPT({
    spawn {
        SI_MAP_VAR(13) += -1.5;
        sleep 1;
        SI_MAP_VAR(13) += -1.5;
    }
});

Script N(script_802416E8) = SCRIPT({
    spawn {
        SI_MAP_VAR(14) += -1.5;
        sleep 1;
        SI_MAP_VAR(14) += -1.5;
    }
});

Script N(script_80241734) = SCRIPT({
    spawn {
        SI_MAP_VAR(15) += -1.5;
        sleep 1;
        SI_MAP_VAR(15) += -1.5;
    }
});

Script N(script_80241780) = SCRIPT({
    ParentColliderToModel(8, 28);
    ParentColliderToModel(9, 32);
    ParentColliderToModel(7, 36);
    ParentColliderToModel(10, 40);
    SetModelFlags(28, 256, 1);
    SetModelFlags(32, 256, 1);
    SetModelFlags(36, 256, 1);
    SetModelFlags(40, 256, 1);
    spawn N(script_80241050);
    bind N(script_80241650) to TriggerFlag_FLOOR_TOUCH 8;
    bind N(script_8024169C) to TriggerFlag_FLOOR_TOUCH 9;
    bind N(script_802416E8) to TriggerFlag_FLOOR_TOUCH 7;
    bind N(script_80241734) to TriggerFlag_FLOOR_TOUCH 10;
    spawn {
        SI_VAR(15) = 0;
    0:
        func_80240340_CE3A30(SI_VAR(15), SI_VAR(0), 0.96875, 1.03125, 15, 0, 0);
        func_80240340_CE3A30(SI_VAR(15), SI_VAR(1), 1.03125, 0.96875, 15, 0, 0);
        ScaleModel(70, SI_VAR(1), SI_VAR(0), 1);
        ScaleModel(60, SI_VAR(1), SI_VAR(0), 1);
        ScaleModel(64, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(68, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(66, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(58, SI_VAR(1), SI_VAR(0), 1);
        ScaleModel(62, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(72, SI_VAR(0), SI_VAR(1), 1);
        SI_VAR(15) += 1;
        if (SI_VAR(15) >= 30) {
            SI_VAR(15) = 0;
        }
        sleep 1;
        goto 0;
    }
});

s32 pad_001A68[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241A70) = SCRIPT({
    SI_VAR(0) = 0;
10:
    func_80240784_CE3E74();
    SI_VAR(0) += 25;
    sleep 1;
    if (SI_VAR(0) < 255) {
        goto 10;
    }
    SI_VAR(0) = 255;
    func_80240784_CE3E74();
    sleep 1;
});

Script N(script_80241B10) = SCRIPT({
    SI_VAR(0) = 255;
10:
    func_80240784_CE3E74();
    SI_VAR(0) -= 25;
    sleep 1;
    if (SI_VAR(0) > 0) {
        goto 10;
    }
    SI_VAR(0) = 0;
    func_80240784_CE3E74();
    sleep 1;
});

Script N(script_80241BB0) = SCRIPT({
    TranslateGroup(79, 0, SI_VAR(0), 0);
    TranslateGroup(92, 0, SI_VAR(0), 0);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) *= -12.0;
    RotateGroup(79, SI_VAR(1), 0, 1, 0);
    RotateGroup(92, SI_VAR(1), 0, 1, 0);
});

Script N(script_80241C58) = SCRIPT({
    TranslateGroup(84, 0, SI_VAR(0), 0);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) *= -12.0;
    RotateGroup(84, SI_VAR(1), 0, 1, 0);
});

Script N(script_80241CC4) = SCRIPT({
    DisablePlayerInput(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SetCamType(0, 1, 0);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamDistance(0, 350);
    SetCamPitch(0, 17.0, 11.0);
    SetCamPosA(0, 0, 0);
    SetCamPosB(0, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    EnableGroup(2, 0);
    EnableGroup(13, 0);
    EnableGroup(24, 0);
    EnableGroup(41, 0);
    EnableGroup(48, 0);
    EnableGroup(57, 0);
    EnableGroup(74, 0);
    SI_VAR(9) = 45.0;
    SI_VAR(10) = 28.0;
    SI_VAR(11) = 5.0;
    SI_VAR(12) = 60.0;
    SI_VAR(13) = 28.0;
    SI_VAR(14) = 10.0;
    spawn {
        sleep 5;
        SetNpcAnimation(0xFFFFFFFC, 262);
        SetPlayerAnimation(0x10004);
        match SI_AREA_FLAG(16) {
            == 0 {
                InterpPlayerYaw(90, 0);
                InterpNpcYaw(0xFFFFFFFC, 90, 0);
            }
            == 1 {
                InterpPlayerYaw(270, 0);
                InterpNpcYaw(0xFFFFFFFC, 270, 0);
            }
        }
    }
    TranslateModel(86, 1.3134765625, 3.0, -0.56640625);
    UpdateColliderTransform(12);
    spawn {
        SI_AREA_FLAG(45) = 0;
        SetPlayerAnimation(0x10004);
        sleep 200;
        await N(script_80241A70);
        SI_AREA_FLAG(45) = 1;
        sleep 10;
        EnableGroup(2, 1);
        EnableGroup(13, 1);
        EnableGroup(24, 1);
        EnableGroup(41, 1);
        EnableGroup(48, 1);
        EnableGroup(57, 1);
        EnableGroup(74, 1);
        SetCamDistance(0, 450);
        SetCamPitch(0, 17.0, -6.0);
        SetCamPosA(0, 0, 0);
        SetCamPosB(0, 0, 0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        await N(script_80241B10);
        sleep 20;
        SI_AREA_FLAG(45) = 0;
    }
    SI_VAR(15) = 0;
    loop 344 {
        SI_VAR(15) += 1;
        func_802407B0_CE3EA0(SI_VAR(15), SI_VAR(0), 0xFFFFFF2E, 0, 344, 0, 0);
        SI_VAR(1) =f SI_VAR(0);
        SI_VAR(1) *= -3.0;
        TranslateModel(86, 1.3134765625, SI_VAR(0), -0.56640625);
        RotateModel(86, SI_VAR(1), 0, 1, 0);
        UpdateColliderTransform(12);
        SI_VAR(2) =f SI_VAR(0);
        SI_VAR(2) *= -3.0;
        SI_VAR(3) =f SI_VAR(0);
        func_80240540_CE3C30();
        func_80240660_CE3D50();
    11:
        sleep 1;
        if (SI_AREA_FLAG(45) == 1) {
            goto 11;
        }
    }
    ModifyColliderFlags(1, 13, 0x7FFFFE00);
    ModifyColliderFlags(1, 5, 0x7FFFFE00);
    EnablePartnerAI();
    ClearPartnerMoveHistory(0xFFFFFFFC);
    SetPlayerJumpscale(1.0);
    PlayerJump(100, 0, 60, 20);
    SetPlayerActionState(10);
    InterpPlayerYaw(90, 0);
    sleep 5;
    SI_AREA_FLAG(44) = 0;
    StopSound(412);
    await N(script_802409C0);
    ResetCam(0, 1.0);
    DisablePlayerInput(0);
});

Script N(script_802423F8) = SCRIPT({
    if (SI_AREA_FLAG(44) == 0) {
        DisablePlayerInput(1);
        0x802D2B6C();
        sleep 15;
        DisablePartnerAI(0);
        SI_AREA_FLAG(44) = 1;
        ModifyColliderFlags(0, 13, 0x7FFFFE00);
        ModifyColliderFlags(0, 5, 0x7FFFFE00);
        SI_VAR(9) = 45.0;
        SI_VAR(10) = 28.0;
        SI_VAR(11) = 5.0;
        SI_VAR(12) = 60.0;
        SI_VAR(13) = 28.0;
        SI_VAR(14) = 10.0;
        PlayerMoveTo(SI_VAR(9), SI_VAR(11), 8);
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        NpcJump0(0xFFFFFFFC, SI_VAR(12), SI_VAR(13), SI_VAR(14), 5);
        PlaySound(413);
        SetMusicTrack(0, 123, 1, 8);
        SetNpcAnimation(0xFFFFFFFC, 262);
        SetPlayerAnimation(0x10004);
        func_802404D0_CE3BC0(SI_VAR(3), SI_VAR(4));
        match SI_VAR(4) {
            < 90 {
                SI_AREA_FLAG(16) = 0;
                InterpPlayerYaw(90, 0);
                InterpNpcYaw(0xFFFFFFFC, 90, 0);
            }
            >= 270 {
                SI_AREA_FLAG(16) = 1;
                InterpPlayerYaw(270, 0);
                InterpNpcYaw(0xFFFFFFFC, 270, 0);
            }
        }
        TranslateModel(86, 1.3134765625, 3.0, -0.56640625);
        UpdateColliderTransform(12);
        SI_MAP_VAR(10) = 0;
        spawn {
            SI_AREA_FLAG(45) = 0;
            sleep 120;
            SI_AREA_FLAG(45) = 1;
            sleep 20;
            await N(script_80241A70);
            sleep 10;
            EnableGroup(2, 0);
            EnableGroup(13, 0);
            EnableGroup(24, 0);
            EnableGroup(41, 0);
            EnableGroup(48, 0);
            EnableGroup(57, 0);
            EnableGroup(74, 0);
            SetCamType(0, 1, 0);
            UseSettingsFrom(0, 0, 0, 0);
            SetPanTarget(0, 0, 0, 0);
            SetCamDistance(0, 350);
            SetCamPitch(0, 17.0, 7.0);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SI_AREA_FLAG(45) = 0;
            await N(script_80241B10);
        }
        spawn {
            SI_VAR(15) = 0;
            loop 344 {
                SI_VAR(15) += 1;
                func_802407B0_CE3EA0(SI_VAR(15), SI_VAR(0), 0, 0xFFFFFF2E, 344, 0, 0);
                SI_VAR(1) =f SI_VAR(0);
                SI_VAR(1) *= -3.0;
                TranslateModel(86, 1.3134765625, SI_VAR(0), -0.56640625);
                RotateModel(86, SI_VAR(1), 0, 1, 0);
                UpdateColliderTransform(12);
                SI_VAR(2) =f SI_VAR(0);
                SI_VAR(2) *= -3.0;
                SI_VAR(3) =f SI_VAR(0);
                func_80240540_CE3C30();
                func_80240660_CE3D50();
                if (SI_VAR(15) == 300) {
                    SI_MAP_VAR(10) = 1;
                }
            11:
                sleep 1;
                if (SI_AREA_FLAG(45) == 1) {
                    goto 11;
                }
            }
        }
    10:
        if (SI_MAP_VAR(10) == 0) {
            sleep 1;
            goto 10;
        }
        GotoMap(D_80243008_CE66F8, 8);
        sleep 100;
    }
});

Script N(script_80242A2C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    EnableModel(86, 0);
    EnableGroup(2, 0);
    EnableGroup(13, 0);
    EnableGroup(24, 0);
    EnableGroup(41, 0);
    EnableGroup(48, 0);
    EnableGroup(57, 0);
    EnableGroup(74, 0);
    SetCamType(0, 1, 0);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamDistance(0, 800);
    SetCamPitch(0, -20.0, 8.5);
    SetCamPosA(0, 0, 0);
    SetCamPosB(0, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_VAR(15) = 100;
    SI_MAP_VAR(11) = SI_VAR(15);
    SI_AREA_FLAG(40) = 0;
    loop 400 {
        if (SI_AREA_FLAG(40) == 0) {
            if (SI_MAP_VAR(11) > 400) {
                EnableGroup(85, 0);
                EnableGroup(92, 0);
                EnableGroup(2, 1);
                EnableGroup(13, 1);
                EnableGroup(24, 1);
                EnableGroup(41, 1);
                EnableGroup(48, 1);
                EnableGroup(57, 1);
                EnableGroup(74, 1);
                SetCamDistance(0, 1000);
                SetCamPitch(0, 45.0, -3.0);
                SetCamPosA(0, 0, 0);
                SetCamPosB(0, 0, 0);
                SetCamSpeed(0, 90.0);
                PanToTarget(0, 0, 1);
                SI_VAR(15) = 150;
                spawn {
                    sleep 5;
                    EnableGroup(85, 1);
                    EnableGroup(92, 1);
                    EnableModel(86, 0);
                    sleep 48;
                    PlayEffect(10, 0, 22, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                    sleep 10;
                    PlayEffect(10, 0, 22, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                }
                SI_AREA_FLAG(40) = 1;
            }
        }
        SI_VAR(15) += 1;
        func_802407B0_CE3EA0(SI_VAR(15), SI_VAR(0), 0xFFFFFEA2, 0, 400, 0, 0);
        SI_MAP_VAR(11) =f SI_VAR(15);
        SI_MAP_VAR(11) *= 1.6005859375;
        SI_VAR(2) =f SI_VAR(0);
        SI_VAR(2) *= 1.0;
        SI_VAR(0) =f SI_VAR(2);
        spawn N(script_80241BB0);
        SI_VAR(2) =f SI_VAR(0);
        SI_VAR(2) *= 1.0;
        SI_VAR(0) =f SI_VAR(2);
        spawn N(script_80241C58);
        sleep 1;
    }
    sleep 15;
    SI_SAVE_VAR(0) = 55;
    GotoMap(D_80243008_CE66F8, 7);
});

Script N(script_80242FD0) = SCRIPT({
    bind N(script_802423F8) to TriggerFlag_FLOOR_TOUCH 12;
});

s32 pad_002FFC[] = {
    0x00000000,
};

// rodata: D_80243000_CE66F0

// rodata: D_80243008_CE66F8
