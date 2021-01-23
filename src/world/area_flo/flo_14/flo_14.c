#include "flo_14.h"

s32 pad_000B04[3];
s32 pad_00235C[1];
s32 pad_00238C[1];
Script N(script_802423F0);
Script N(script_UpdateTexturePan_80242460);
Script N(script_ExitWalk_802424FC);
Script N(script_ExitWalk_80242558);
Script N(script_802425B4);
s32 N(lavaResetList_802425FC)[48];
Script N(main);
s32 pad_002BF4[3];
Script N(script_80242C00);
Script N(script_80242EAC);
s32 N(intTable_802431CC)[1];
Script N(script_802431D0);
Script N(script_802432E8);
s32 N(vectorList_80243384)[39];
Script N(script_80243420);
Script N(script_8024352C);
Script N(script_80243870);
s32 N(unk_80243B14)[1];
s32 N(unk_80243B18)[1];
Script N(script_80243B1C);
Script N(script_80243E78);
s32 pad_0044BC[1];
f32 N(floatTable_802444C0)[6];
Script N(script_NpcAI_80244508);
s32 unk_missing_802445D0[11];
s32 N(unk_802445FC)[1];
s32 N(unk_80244600)[1];
Script N(script_80244604);
Script N(script_80244738);
s32 N(unk_80244788)[2];
Script N(script_Interact_80244790);
Script N(script_Init_80244ADC);
StaticNpc N(npcGroup_80244B20)[1];
StaticNpc N(npcGroup_80244D10)[1];
NpcGroupList N(npcGroupList_80244F00);
s32 pad_004F24[3];
Script N(script_80244F30);
s32 pad_004F64[3];
Script N(script_80244F70);
Script N(script_80245224);
s32 pad_00530C[1];
const char D_80245310_CD0620[8]; // "flo_00"
const char D_80245318_CD0628[8]; // "flo_13"
s32 pad_0053A4[3];

// text: func_80240000_CCB310

// text: func_80240124_CCB434

// text: func_8024030C_CCB61C

// text: func_80240340_CCB650

// text: func_802403D4_CCB6E4

// text: func_8024042C_CCB73C

// text: func_8024046C_CCB77C

// text: func_80240504_CCB814

// text: func_802407D4_CCBAE4

s32 pad_000B04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240B10_CCBE20

// text: func_80240CC0_CCBFD0

// text: N(UnkNpcAIFunc1)

// text: func_802413A8_CCC6B8

// text: N(UnkNpcAIFunc2)

// text: func_80241764_CCCA74

// text: func_802417D0_CCCAE0

// text: N(UnkNpcAIFunc3)

// text: func_80241968_CCCC78

// text: func_80241CF8_CCD008

// text: func_80241E1C_CCD12C

// text: func_80242008_CCD318

// text: func_80242064_CCD374

// text: func_80242234_CCD544

// text: func_80242288_CCD598

// text: func_802422C0_CCD5D0

s32 pad_00235C[] = {
    0x00000000,
};

// text: func_80242360_CCD670

s32 pad_00238C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 720.0f, 0.0f, 0.0f, 270.0f },
    { -720.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19011E,
};

Script N(script_802423F0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_UpdateTexturePan_80242460) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_CCB310();
                    return;
                }
            }
        }
    }
    func_80240124_CCB434();
});

Script N(script_ExitWalk_802424FC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245310_CD0620, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242558) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245318_CD0628, 0);
    sleep 100;
});

Script N(script_802425B4) = SCRIPT({
    bind N(script_ExitWalk_80242558) to 0x80000 0;
    bind N(script_ExitWalk_802424FC) to 0x80000 4;
});

s32 N(lavaResetList_802425FC)[] = {
    0x0000001F, 0xC3FA0000, 0x00000000, 0xC2B40000, 0x00000019, 0xC3FF0000, 0x00000000, 0x00000000,
    0x00000020, 0xC3FA0000, 0x00000000, 0x42DC0000, 0x00000021, 0xC37A0000, 0x00000000, 0xC2B40000,
    0x0000001A, 0xC3700000, 0x00000000, 0x00000000, 0x00000022, 0xC37A0000, 0x00000000, 0x42DC0000,
    0x0000001B, 0xC2480000, 0x00000000, 0x41C80000, 0x0000001C, 0x428C0000, 0x42700000, 0xC2BE0000,
    0x0000001D, 0x43CD0000, 0x42700000, 0xC2BE0000, 0x0000001E, 0x44098000, 0x00000000, 0x42480000,
    0x00000023, 0xC2480000, 0x00000000, 0x42DC0000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80244F00));
    spawn N(script_80244F30);
    ModifyColliderFlags(3, 9, 2);
    spawn {
        ResetFromLava(N(lavaResetList_802425FC));
    }
    EnableTexPanning(29, 1);
    EnableTexPanning(31, 1);
    EnableTexPanning(32, 1);
    EnableTexPanning(35, 1);
    EnableTexPanning(36, 1);
    EnableTexPanning(39, 1);
    EnableTexPanning(41, 1);
    EnableTexPanning(43, 1);
    EnableTexPanning(45, 1);
    EnableTexPanning(47, 1);
    EnableTexPanning(49, 1);
    EnableTexPanning(51, 1);
    EnableTexPanning(53, 1);
    EnableTexPanning(30, 1);
    EnableTexPanning(33, 1);
    EnableTexPanning(34, 1);
    EnableTexPanning(37, 1);
    EnableTexPanning(38, 1);
    EnableTexPanning(42, 1);
    EnableTexPanning(44, 1);
    EnableTexPanning(46, 1);
    EnableTexPanning(48, 1);
    EnableTexPanning(50, 1);
    EnableTexPanning(52, 1);
    EnableTexPanning(54, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 140;
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
        spawn N(script_UpdateTexturePan_80242460);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFF38;
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
        spawn N(script_UpdateTexturePan_80242460);
    }
    spawn N(script_80243E78);
    spawn N(script_80245224);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_802425B4);
    spawn EnterWalk;
    await N(script_802423F0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_8024030C_CCB61C();
    }
});

s32 pad_002BF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242C00) = SCRIPT({
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

Script N(script_80242EAC) = SCRIPT({
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
    func_80240340_CCB650();
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

s32 N(intTable_802431CC)[] = {
    0x00000000,
};

Script N(script_802431D0) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(SI_VAR(1), 48, 15, 0);
    loop {
        UpdateLerp();
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamTarget(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), 48, SI_VAR(2));
        sleep 1;
    }
});

Script N(script_802432E8) = SCRIPT({
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 20;
        SI_VAR(2) += 0xFFFFFFFB;
        SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

s32 N(vectorList_80243384)[] = {
    0x4404C000, 0x42960000, 0x42A20000, 0x43F08000, 0x42A00000, 0x42A20000, 0x43D78000, 0x42960000,
    0x42A20000, 0x43BE8000, 0x428C0000, 0x42A20000, 0x43A58000, 0x42960000, 0x42A20000, 0x438C8000,
    0x42A00000, 0x42A20000, 0x43670000, 0x42960000, 0x42A20000, 0x43350000, 0x428C0000, 0x42A20000,
    0x43030000, 0x42960000, 0x42A20000, 0x42A20000, 0x42A00000, 0x42A20000, 0x41F80000, 0x42960000,
    0x42A20000, 0xC1980000, 0x428C0000, 0x42A20000, 0xC28A0000, 0x42960000, 0x42A20000,
};

Script N(script_80243420) = SCRIPT({
    sleep 20;
    PlaySound(0x80000023);
    LoadPath(165, N(vectorList_80243384), 13, 10);
0:
    GetNextPathPos();
    TranslateModel(123, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(2) += 0xFFFFFFE5;
    SI_VAR(3) += 0xFFFFFFF6;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    func_8024046C_CCB77C(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    StopSound(0x80000023);
});

Script N(script_8024352C) = SCRIPT({
    IsPlayerWithin(531, 81, 30, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        0x802D2B6C();
        sleep 20;
    }
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    GetModelCenter(123);
    spawn {
        SI_VAR(2) += 0xFFFFFFF6;
        SetPlayerJumpscale(0.2001953125);
        PlayerJump(531, 48, SI_VAR(2), 10);
        SetPlayerActionState(10);
    }
    spawn {
        sleep 5;
        SI_VAR(2) += 0xFFFFFFF1;
        SetNpcJumpscale(0xFFFFFFFC, 0.2001953125);
        NpcJump0(0xFFFFFFFC, 531, 68, SI_VAR(2), 10);
    }
    SI_MAP_VAR(9) = spawn N(script_802431D0);
    sleep 15;
    func_802403D4_CCB6E4();
    if (SI_VAR(14) != 0) {
        SI_VAR(14) = spawn N(script_802432E8);
    }
    await N(script_80243420);
    if (SI_VAR(14) != 0) {
        kill SI_VAR(14);
        func_8024042C_CCB73C();
    }
    GetModelCenter(123);
    PlayEffect(67, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 2, 0, 0, 0, 0, 0, 0, 0, 0);
    PlaySoundAt(755, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    ClearPartnerMoveHistory(0xFFFFFFFC);
    EnableModel(123, 0);
    SI_AREA_FLAG(37) = 0;
    kill SI_MAP_VAR(9);
    SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    unbind;
});

Script N(script_80243870) = SCRIPT({
    PlaySoundAt(403, 0, 591, 55, 121);
    EnableModel(123, 1);
    SI_VAR(2) = 1.0;
    SI_VAR(4) = 0.0;
    SI_VAR(5) = 0.0;
    SI_VAR(6) = 0.0;
    SI_VAR(7) = 0xFFFFFFE2;
    SI_VAR(8) = 20;
    SI_VAR(7) /= 90.0;
    SI_VAR(8) /= 90.0;
    SI_VAR(9) = 180;
    loop SI_VAR(9) {
        TranslateModel(123, 591, 55, 121);
        SI_VAR(3) =f SI_VAR(2);
        SI_VAR(3) /= 10;
        ScaleModel(123, SI_VAR(3), SI_VAR(3), SI_VAR(3));
        TranslateModel(123, SI_VAR(4), SI_VAR(5), SI_VAR(6));
        SI_VAR(2) += 0.05078125;
        if (SI_VAR(9) > 90) {
            SI_VAR(4) +=f SI_VAR(7);
            SI_VAR(5) +=f SI_VAR(8);
        }
        sleep 1;
    }
    SI_VAR(7) = 0xFFFFFFE2;
    SI_VAR(8) = 0xFFFFFFD8;
    SI_VAR(7) /= 60.0;
    SI_VAR(8) /= 60.0;
    loop 60 {
        TranslateModel(123, 591, 55, 121);
        ScaleModel(123, SI_VAR(3), SI_VAR(3), SI_VAR(3));
        TranslateModel(123, SI_VAR(4), SI_VAR(5), SI_VAR(6));
        SI_VAR(4) +=f SI_VAR(7);
        SI_VAR(6) +=f SI_VAR(8);
        sleep 1;
    }
    SI_AREA_FLAG(36) = 0;
    SI_AREA_FLAG(37) = 1;
});

s32 N(unk_80243B14)[] = {
    0x00000000,
};

s32 N(unk_80243B18)[] = {
    0x0000005A,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80243B1C) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(15), SI_VAR(0)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(35), 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802431CC)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, RandInt, 10, SI_VAR(0)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(15), 1),
    SI_CMD(ScriptOpcode_CALL, RandInt, 4, SI_VAR(0)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_FIXED(4.0)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_VAR(0)),
    SI_CMD(ScriptOpcode_DIV_F, SI_VAR(2), SI_FIXED(10.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(3), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(4), SI_FIXED(591.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(5), SI_FIXED(60.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(6), SI_FIXED(121.0)),
    SI_CMD(ScriptOpcode_CALL, RandInt, 3, SI_VAR(7)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(7), SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(7), SI_FIXED(0.0400390625)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(9), SI_VAR(7)),
    SI_CMD(ScriptOpcode_DIV_F, SI_VAR(9), SI_FIXED(5.0)),
    SI_CMD(ScriptOpcode_CALL, RandInt, 50, SI_VAR(8)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(8), 50),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(8)),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(14), SI_VAR(2)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(14), SI_VAR(0)),
        SI_CMD(ScriptOpcode_MUL_F, SI_VAR(14), SI_FIXED(0.046875)),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_VAR(14)),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(14), SI_VAR(3)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(14), SI_VAR(1)),
        SI_CMD(ScriptOpcode_MUL_F, SI_VAR(14), SI_FIXED(0.046875)),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(1), SI_VAR(14)),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(4), SI_VAR(0)),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(5), SI_VAR(1)),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(14), SI_VAR(7)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(14), SI_VAR(9)),
        SI_CMD(ScriptOpcode_MUL_F, SI_VAR(14), SI_FIXED(0.203125)),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(9), SI_VAR(14)),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(15), SI_VAR(4), SI_VAR(5), SI_VAR(6)),
        SI_CMD(ScriptOpcode_CALL, ScaleModel, SI_VAR(15), SI_VAR(9), SI_VAR(9), SI_VAR(9)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(15), 0),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80243E78) = SCRIPT({
    ModifyColliderFlags(3, 31, 6);
    ModifyColliderFlags(3, 32, 6);
    ModifyColliderFlags(3, 33, 6);
    ModifyColliderFlags(3, 34, 6);
    ModifyColliderFlags(3, 35, 6);
    SI_VAR(0) = 0xFFFFFD26;
    SI_VAR(1) = 0xFFFFFF7E;
    SI_VAR(2) = 0xFFFFFE2A;
    SI_VAR(3) = 0xFFFFFFBA;
    SI_VAR(4) = 0;
    spawn N(script_80242C00);
    SI_VAR(0) = 0xFFFFFD26;
    SI_VAR(1) = 70;
    SI_VAR(2) = 0xFFFFFE2A;
    SI_VAR(3) = 140;
    SI_VAR(4) = 0;
    spawn N(script_80242C00);
    SI_VAR(0) = 0xFFFFFEE8;
    SI_VAR(1) = 130;
    SI_VAR(2) = 0xFFFFFF92;
    SI_VAR(3) = 0xFFFFFFBA;
    SI_VAR(4) = 0;
    spawn N(script_80242C00);
    SI_VAR(0) = 0xFFFFFEE8;
    SI_VAR(1) = 70;
    SI_VAR(2) = 0xFFFFFFF6;
    SI_VAR(3) = 140;
    SI_VAR(4) = 0;
    spawn N(script_80242C00);
    GetModelCenter(96);
    SI_VAR(3) = 96;
    SI_VAR(4) = 97;
    SI_VAR(5) = 98;
    SI_VAR(6) = 99;
    SI_VAR(10) = 174;
    spawn N(script_80242EAC);
    GetModelCenter(82);
    SI_VAR(3) = 82;
    SI_VAR(4) = 83;
    SI_VAR(5) = 84;
    SI_VAR(6) = 85;
    SI_VAR(10) = 0;
    spawn N(script_80242EAC);
    GetModelCenter(76);
    SI_VAR(3) = 76;
    SI_VAR(4) = 77;
    SI_VAR(5) = 78;
    SI_VAR(6) = 79;
    SI_VAR(10) = 0;
    spawn N(script_80242EAC);
    GetModelCenter(90);
    SI_VAR(3) = 90;
    SI_VAR(4) = 91;
    SI_VAR(5) = 92;
    SI_VAR(6) = 93;
    SI_VAR(10) = 0;
    spawn N(script_80242EAC);
    ModifyColliderFlags(0, 15, 0x7FFFFE00);
    CloneModel(124, 0x2711);
    CloneModel(124, 0x2712);
    CloneModel(124, 0x2713);
    CloneModel(124, 0x2714);
    CloneModel(124, 0x2715);
    EnableModel(123, 0);
    EnableModel(124, 0);
    EnableModel(0x2711, 0);
    EnableModel(0x2712, 0);
    EnableModel(0x2713, 0);
    EnableModel(0x2714, 0);
    EnableModel(0x2715, 0);
    SI_VAR(0) = 0x2711;
    spawn N(script_80243B1C);
    SI_VAR(0) = 0x2712;
    spawn N(script_80243B1C);
    SI_VAR(0) = 0x2713;
    spawn N(script_80243B1C);
    SI_VAR(0) = 0x2714;
    spawn N(script_80243B1C);
    SI_VAR(0) = 0x2715;
    spawn N(script_80243B1C);
    0x802C9C70(0, 123, 1);
    0x802C94A0(1, func_80240504_CCB814, 0);
    0x802C90FC(123, 1, -1);
    0x802C90FC(0x2711, 1, -1);
    0x802C90FC(0x2712, 1, -1);
    0x802C90FC(0x2713, 1, -1);
    0x802C90FC(0x2714, 1, -1);
    0x802C90FC(0x2715, 1, -1);
    0x802C9C70(1, 57, 1);
    0x802C94A0(2, func_802407D4_CCBAE4, 0);
    0x802C90FC(57, 2, -1);
});

s32 pad_0044BC[] = {
    0x00000000,
};

f32 N(floatTable_802444C0)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_802444D8) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0x5,
    .alertRadius = 80.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 90.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244508) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD8A);
    SetSelfVar(6, 50);
    SetSelfVar(1, 200);
    func_80241E1C_CCD12C(N(aISettings_802444D8));
});

NpcSettings N(npcSettings_80244578) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244508),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802445A4) = {
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

s32 unk_missing_802445D0[] = {
    0x00000000, 0x00180018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

s32 N(unk_802445FC)[] = {
    0x00000000,
};

s32 N(unk_80244600)[] = {
    0x00000000,
};

Script N(script_80244604) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80242064_CCD374(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80242288_CCD598(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244738) = {
    SI_CMD(ScriptOpcode_CALL, func_802422C0_CCD5D0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244604), 0x10, 0, N(script_Idle_802453B0), 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80242234_CCD544, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(unk_80244788)[] = {
    0x000000A1, 0x00000000,
};

Script N(script_Interact_80244790) = SCRIPT({
    if (SI_AREA_FLAG(37) == 1) {
        SI_AREA_FLAG(35) = 1;
        SpeakToPlayer(-1, -1, -1, 0, 0x110063);
        SI_AREA_FLAG(35) = 0;
        return;
    }
    SI_AREA_FLAG(35) = 1;
    if (SI_SAVE_FLAG(1412) == 0) {
        SpeakToPlayer(-1, -1, -1, 0, 0x11005F);
    } else {
        SpeakToPlayer(-1, -1, -1, 0, 0x110060);
    }
    FindItem(161, SI_VAR(0));
    if (SI_VAR(0) != -1) {
        SI_VAR(0) = N(unk_80244788);
        SI_VAR(1) = 0;
        await N(script_80244738);
        if (SI_VAR(0) == -1) {
            SpeakToPlayer(-1, -1, -1, 0, 0x110064);
        } else {
            SpeakToPlayer(-1, -1, -1, 0, 0x110061);
            SI_AREA_FLAG(36) = 1;
            SetNpcFlagBits(-1, 256, 1);
            PlayerMoveTo(555, 110, 20);
            SetNpcFlagBits(-1, 256, 0);
            InterpPlayerYaw(90, 0);
            0x802CF56C(2);
            sleep 5;
            AdjustCam(0, 1.0, 0, 350, 17.0, -6.0);
            spawn N(script_80243870);
            SpeakToPlayer(-1, -1, -1, 0, 0x110062);
            spawn {
                sleep 40;
                InterpPlayerYaw(315, 0);
            }
        10:
            if (SI_AREA_FLAG(37) == 0) {
                sleep 1;
                goto 10;
            }
            ResetCam(0, 4.0);
            SpeakToPlayer(-1, -1, -1, 5, 0x110063);
            SI_SAVE_FLAG(1412) = 1;
            bind N(script_8024352C) to TriggerFlag_FLOOR_INTERACT 30;
        }
    }
    SI_AREA_FLAG(35) = 0;
});

Script N(script_Init_80244ADC) = SCRIPT({
    SI_AREA_FLAG(36) = 0;
    SI_AREA_FLAG(37) = 0;
    BindNpcInteract(-1, N(script_Interact_80244790));
});

StaticNpc N(npcGroup_80244B20)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802445A4),
        .pos = { 617.0, 0.0, 108.0 },
        .flags = 0x00004D01,
        .init = N(script_Init_80244ADC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00990002, 0x0099000E, 0x0099000E, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002,
        },
        .tattle = 0x1A00E3,
    },
};

StaticNpc N(npcGroup_80244D10)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80244578),
        .pos = { -175.0, 55.0, 15.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0xFFFFFF51, 0x00000037, 0x0000000F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF51, 0x00000037, 0x0000000F, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004B0002, 0x004B0002, 0x004B0003, 0x004B0003, 0x004B0001, 0x004B0002, 0x004B0006, 0x004B0006, 0x004B0004, 0x004B0002, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001,
        },
    },
};

NpcGroupList N(npcGroupList_80244F00) = {
    NPC_GROUP(N(npcGroup_80244B20), 0x00000000),
    NPC_GROUP(N(npcGroup_80244D10), 0x18190001),
    {},
};

s32 pad_004F24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244F30) = SCRIPT({
    MakeItemEntity(348, 675, 60, 0xFFFFFF9C, 17, SI_SAVE_FLAG(1387));
});

s32 pad_004F64[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244F70) = SCRIPT({
    loop {
        func_80242360_CCD670(SI_VAR(0));
        if (SI_VAR(0) == SI_VAR(4)) {
            GetPlayerActionState(SI_VAR(0));
            if (SI_VAR(0) != 23) {
                if (SI_VAR(8) == 0) {
                    spawn {
                        GetModelCenter(SI_VAR(5));
                        PlaySoundAt(475, 0x400000, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    }
                }
                if (SI_VAR(7) < 90) {
                    if (SI_VAR(7) == 0) {
                        sleep 5;
                        SI_VAR(8) = 6;
                        ModifyColliderFlags(0, SI_VAR(9), 0x7FFFFE00);
                    }
                    SI_VAR(8) += 1;
                    SI_VAR(7) += SI_VAR(8);
                }
                goto 50;
            }
        }
        if (SI_VAR(7) != 0) {
            SI_VAR(8) -= 1;
            SI_VAR(7) += SI_VAR(8);
            if (SI_VAR(7) <= 0) {
                SI_VAR(8) = 0;
                SI_VAR(7) = 0;
                spawn {
                    GetModelCenter(SI_VAR(5));
                    PlaySoundAt(476, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                }
                ModifyColliderFlags(1, SI_VAR(9), 0x7FFFFE00);
            }
        }
    50:
        if (SI_VAR(7) >= 90) {
            SI_VAR(8) = -1;
            SI_VAR(7) = 90;
        }
        RotateModel(SI_VAR(5), SI_VAR(7), -1, 0, 0);
        RotateModel(SI_VAR(6), SI_VAR(7), -1, 0, 0);
        sleep 1;
    }
});

Script N(script_80245224) = SCRIPT({
    SI_VAR(4) = 21;
    SI_VAR(5) = 21;
    SI_VAR(6) = 20;
    SI_VAR(7) = SI_MAP_VAR(10);
    SI_VAR(8) = SI_MAP_VAR(11);
    SI_VAR(9) = 22;
    spawn N(script_80244F70);
    SI_VAR(4) = 17;
    SI_VAR(5) = 26;
    SI_VAR(6) = 25;
    SI_VAR(7) = SI_MAP_VAR(12);
    SI_VAR(8) = SI_MAP_VAR(13);
    SI_VAR(9) = 18;
    spawn N(script_80244F70);
});

s32 pad_00530C[] = {
    0x00000000,
};

// rodata: D_80245310_CD0620

// rodata: D_80245318_CD0628

// rodata: D_80245320_CD0630

// rodata: D_80245328_CD0638

// rodata: D_80245330_CD0640

// rodata: D_80245338_CD0648

// rodata: D_80245340_CD0650

// rodata: D_80245348_CD0658

// rodata: D_80245350_CD0660

// rodata: D_80245358_CD0668

// rodata: D_80245360_CD0670

// rodata: jtbl_80245368_CD0678

s32 pad_0053A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
