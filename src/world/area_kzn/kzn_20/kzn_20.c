#include "kzn_20.h"

s32 pad_00030C[1];
s32 pad_000AB8[2];
Script N(script_80240B20);
Script N(script_UpdateTexturePan_80240BD0);
Script N(script_ExitWalk_80240C6C);
Script N(script_ExitWalk_80240CC8);
Script N(script_80240D24);
Script N(script_80240D6C);
s32 N(lavaResetList_80240E88)[12];
Script N(script_80240EB8);
Script N(script_80240F90);
Script N(script_8024106C);
Script N(script_8024149C);
Script N(main);
s32 pad_0016C4[3];
s32 unk_missing_80241728[22];
s32 N(unk_80241780)[1];
Script N(script_80241784);
Script N(script_802417B4);
s32 N(unk_802417E4)[1];
s32 N(unk_802417E8)[1];
Script N(script_802417EC);
Script N(script_80241930);
Script N(script_80241980);
Script N(script_80241A00);
Script N(script_80241D24);
Script N(script_80241D94);
s32 N(unk_8024208C)[2];
Script N(script_80242094);
Script N(script_802420E4);
Script N(script_80242148);
Script N(script_80242250);
s32 N(intTable_80242434)[17];
s32 N(intTable_80242478)[17];
Script N(script_802424BC);
Script N(script_802426A4);
Script N(script_Idle_802427B4);
Script N(script_Interact_802432D4);
Script N(script_Init_802433B8);
s32 N(vectorList_80243420)[18];
s32 N(vectorList_80243468)[21];
Script N(script_Idle_802434BC);
Script N(script_Interact_80243E08);
Script N(script_Init_80243E38);
StaticNpc N(npcGroup_80243EB4)[1];
StaticNpc N(npcGroup_802440A4)[1];
NpcGroupList N(npcGroupList_80244294);
s32 pad_0042B8[2];
const char D_802442C0_C9A1F0[8]; // "kzn_19"
const char D_802442C8_C9A1F8[8]; // "kzn_22"

// text: func_80240000_C95F30

// text: func_80240124_C96054

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_C96240

// text: func_802403C4_C962F4

// text: func_80240428_C96358

// text: func_80240484_C963B4

// text: func_80240654_C96584

// text: func_802406A8_C965D8

// text: func_802406E0_C96610

// text: func_8024077C_C966AC

// text: func_8024086C_C9679C

// text: func_802409F8_C96928

// text: func_80240A3C_C9696C

// text: func_80240A68_C96998

// text: func_80240A8C_C969BC

s32 pad_000AB8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -182.0f, 0.0f, 36.0f, 90.0f },
    { 164.0f, 150.0f, 20.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190112,
};

Script N(script_80240B20) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 36) {
        PlaySound(0x8000006B);
    }
    if (SI_SAVE_VAR(0) < 37) {
        SetMusicTrack(0, 41, 0, 8);
        PlayAmbientSounds(7);
    } else {
        SetMusicTrack(0, 42, 0, 8);
        PlayAmbientSounds(4);
    }
});

Script N(script_UpdateTexturePan_80240BD0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C95F30();
                    return;
                }
            }
        }
    }
    func_80240124_C96054();
});

Script N(script_ExitWalk_80240C6C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802442C0_C9A1F0, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240CC8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802442C8_C9A1F8, 0);
    sleep 100;
});

Script N(script_80240D24) = SCRIPT({
    bind N(script_ExitWalk_80240C6C) to 0x80000 0;
    bind N(script_ExitWalk_80240CC8) to 0x80000 2;
});

Script N(script_80240D6C) = SCRIPT({
    group 0;
    EnableTexPanning(38, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFD44;
        SI_VAR(2) = 700;
        SI_VAR(3) = 200;
        SI_VAR(4) = 0xFFFFFED4;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240BD0);
    }
});

s32 N(lavaResetList_80240E88)[] = {
    0x00000017, 0xC1F00000, 0x42FA0000, 0xC1700000, 0x00000013, 0x41F00000, 0x43160000, 0x00000000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240EB8) = SCRIPT({
    loop {
        if (SI_SAVE_VAR(0) >= 37) {
        1:
            if (SI_MAP_VAR(10) < 110) {
                SI_MAP_VAR(11) -= 0.0107421875;
                SI_MAP_VAR(12) += 0.0107421875;
                loop 5 {
                    SI_MAP_VAR(10) += 0.75;
                    sleep 9;
                }
            } else {
                break;
            }
            goto 1;
        }
        sleep 1;
    }
});

Script N(script_80240F90) = SCRIPT({
    loop {
        loop {
            sleep 1;
            GetModelCenter(38);
            GetPlayerPos(SI_VAR(0), SI_VAR(3), SI_VAR(2));
            if (SI_VAR(3) < SI_VAR(1)) {
                break;
            }
        }
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 8) {
            0x802D2B6C();
            SetPlayerActionState(23);
            sleep 30;
        }
    }
});

Script N(script_8024106C) = SCRIPT({
    group 239;
    EnableModel(38, 0);
    ModifyColliderFlags(0, 28, 0x7FFFFE00);
    ParentColliderToModel(28, 38);
0:
    if (SI_AREA_FLAG(11) == 0) {
        sleep 1;
        goto 0;
    }
    EnableModel(38, 1);
    ModifyColliderFlags(1, 28, 0x7FFFFE00);
    ModifyColliderFlags(3, 28, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80240E88));
    }
    if (SI_SAVE_VAR(0) < 37) {
        SI_MAP_VAR(10) = 35;
        SI_MAP_VAR(11) = 1.2001953125;
        SI_MAP_VAR(12) = -1.19921875;
    } else {
        SI_MAP_VAR(10) = 110;
        SI_MAP_VAR(11) = 1.0;
        SI_MAP_VAR(12) = -1.0;
    }
    spawn N(script_80240EB8);
    spawn N(script_80240F90);
    loop {
        MakeLerp(0, 260, 30, 12);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100.0;
            SI_VAR(0) -=f SI_MAP_VAR(11);
            SI_VAR(3) =f SI_MAP_VAR(10);
            SI_VAR(4) =f SI_MAP_VAR(10);
            SI_VAR(3) /=f SI_MAP_VAR(12);
            SI_VAR(3) *=f SI_VAR(0);
            SI_VAR(4) +=f SI_VAR(3);
            TranslateModel(38, 0, SI_VAR(4), 0);
            ScaleModel(38, 1, SI_VAR(0), 1);
            TranslateModel(38, 0, SI_MAP_VAR(10), 0);
            UpdateColliderTransform(28);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(260, 0, 60, 11);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100.0;
            SI_VAR(0) -=f SI_MAP_VAR(11);
            SI_VAR(3) =f SI_MAP_VAR(10);
            SI_VAR(4) =f SI_MAP_VAR(10);
            SI_VAR(3) /=f SI_MAP_VAR(12);
            SI_VAR(3) *=f SI_VAR(0);
            SI_VAR(4) +=f SI_VAR(3);
            TranslateModel(38, 0, SI_VAR(4), 0);
            ScaleModel(38, 1, SI_VAR(0), 1);
            TranslateModel(38, 0, SI_MAP_VAR(10), 0);
            UpdateColliderTransform(28);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Vec4f N(triggerCoord_8024148C) =  { 175.0, 150.0, 15.0, 0.0 };

Script N(script_8024149C) = SCRIPT({
    PlayEffect(66, 0, 2, 2, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableGroup(19, 0);
    EnableGroup(22, 1);
    ModifyColliderFlags(0, 26, 0x7FFFFE00);
    SI_SAVE_VAR(0) = 37;
    unbind;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA000E);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80244294));
    SI_VAR(0) = N(script_80240D24);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80242250);
    if (SI_SAVE_VAR(0) < 37) {
        EnableGroup(22, 0);
        bind N(script_8024149C) to TriggerFlag_BOMB N(triggerCoord_8024148C);
    } else {
        EnableGroup(19, 0);
        ModifyColliderFlags(0, 26, 0x7FFFFE00);
    }
    spawn N(script_80240B20);
    spawn N(script_8024106C);
    spawn N(script_80240D6C);
});

s32 pad_0016C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802416D0) = {
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

NpcSettings N(npcSettings_802416FC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
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

s32 unk_missing_80241728[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

s32 N(unk_80241780)[] = {
    0x00000000,
};

Script N(script_80241784) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802417B4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_802417E4)[] = {
    0x00000000,
};

s32 N(unk_802417E8)[] = {
    0x00000000,
};

Script N(script_802417EC) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240484_C963B4(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802406A8_C965D8(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241930) = {
    SI_CMD(ScriptOpcode_CALL, func_802406E0_C96610, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802417EC), 0x10, 0, 0x802442D0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240654_C96584, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80241980) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_8024086C_C9679C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80241A00) = SCRIPT({
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
            func_8024086C_C9679C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_80241980);
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
    func_802406A8_C965D8(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241D24) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_802406E0_C96610, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241A00), 0x10, 0, 0x802442D0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240654_C96584, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80241D94) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_802409F8_C96928();
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
            await N(script_80241D24);
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
                        await N(script_80241784);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80240A3C_C9696C();
});

s32 N(unk_8024208C)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80242094) = SCRIPT({
    func_8024077C_C966AC(0, 0xB60008, 0xB60001, 84, 0, 0x1000E4, 0x1000E5, 0x1000E6, 0x1000E7, N(unk_8024208C));
    await N(script_80241D94);
});

Script N(script_802420E4) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80241784);
        AddStarPieces(1);
    }
});

Script N(script_80242148) = SCRIPT({
    group 11;
    loop {
        RandInt(100, SI_VAR(0));
        SI_VAR(0) -= 100;
        PlayEffect(21, 1, SI_VAR(0), 350, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0);
        RandInt(100, SI_VAR(0));
        sleep 30;
        PlayEffect(21, 1, SI_VAR(0), 350, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 30;
    }
});

Script N(script_80242250) = SCRIPT({
    group 10;
    if (SI_SAVE_VAR(0) >= 37) {
        spawn N(script_80242148);
    } else {
        loop {
            ShakeCam(0, 0, 2, 0.5);
            if (SI_AREA_FLAG(11) != 0) {
                break;
            }
        }
        spawn N(script_80242148);
        MakeLerp(20, 250, 5, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100.0;
            ShakeCam(0, 0, 3, SI_VAR(0));
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(250, 30, 60, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100.0;
            ShakeCam(0, 0, 5, SI_VAR(0));
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    loop {
        ShakeCam(0, 0, 5, 0.5);
    }
});

s32 N(intTable_80242434)[] = {
    0x00000002, 0xFFFFFFB5, 0x000000C3, 0x00000023, 0x00000002, 0xFFFFFFC4, 0x000000AF, 0x00000019,
    0x00000001, 0xFFFFFFA1, 0x000000A5, 0x0000000F, 0x00000001, 0xFFFFFF92, 0x00000078, 0x00000023,
    0xFFFFFFFF,
};

s32 N(intTable_80242478)[] = {
    0x00000001, 0xFFFFFFE7, 0x000000C3, 0x00000014, 0x00000002, 0xFFFFFFB5, 0x000000C3, 0x00000023,
    0x00000001, 0xFFFFFFC4, 0x000000AF, 0x00000019, 0x00000002, 0xFFFFFF88, 0x0000008C, 0x0000000F,
    0xFFFFFFFF,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802424BC) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 239),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, RandInt, 1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242434)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242478)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), -1),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0xB60004),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(2), SI_VAR(3), 0),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0xB60001),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_CALL, RandInt, 2, SI_VAR(4)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(4), 1),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
        SI_CMD(ScriptOpcode_CALL, GetNpcYaw, 0, SI_VAR(5)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(5), 180),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(5), 360),
            SI_CMD(ScriptOpcode_SUB, SI_VAR(5), 360),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, SI_VAR(5), 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(2)),
    SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802426A4) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(3), SI_VAR(2));
    SI_VAR(3) += 30;
    loop {
        sleep 1;
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(1) > SI_VAR(3)) {
            break;
        }
    }
    SetPlayerAnimation(0x1002A);
    loop {
        sleep 1;
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(1) < SI_VAR(3)) {
            break;
        }
    }
    SetPlayerAnimation(0x10002);
});

Script N(script_Idle_802427B4) = SCRIPT({
    SI_VAR(9) = spawn N(script_802424BC);
0:
    sleep 1;
    if (SI_MAP_VAR(13) != 15) {
        goto 0;
    }
    kill SI_VAR(9);
    sleep 10;
10:
    match SI_MAP_VAR(13) {
        == 15 {
            SetNpcFlagBits(-1, 256, 1);
            SetNpcAnimation(-1, 0xB60004);
            InterpNpcYaw(-1, 90, 1);
            SetNpcPos(-1, 0xFFFFFFE2, 100, 40);
            SetNpcJumpscale(-1, 2.0);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 0xFFFFFFE7, 125, 0xFFFFFFEC, 10);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 20, 150, 5, 10);
            SetNpcSpeed(-1, 3.0);
            NpcMoveTo(-1, 40, 35, 0);
            SetNpcAnimation(-1, 0xB60001);
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x10010A);
            SI_MAP_VAR(13) = 20;
        }
        == 25 {
            GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(3) += 0xFFFFFFE2;
            SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SetCamDistance(0, 250.0);
            SetCamSpeed(0, 3.0);
            PanToTarget(0, 0, 1);
            InterpNpcYaw(-1, 270, 4);
            sleep 10;
            InterpNpcYaw(-1, 90, 4);
            sleep 10;
            InterpNpcYaw(-1, 270, 4);
            sleep 10;
            SetNpcAnimation(-1, 0xB60004);
            SetNpcSpeed(-1, 2.0);
            NpcMoveTo(-1, 20, 0, 0);
            SetNpcJumpscale(-1, 1.0);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 0xFFFFFFDD, 125, 0xFFFFFFEC, 12);
            PlayerFaceNpc(-1, 0);
            SetNpcSpeed(-1, 1.0);
        25:
            NpcMoveTo(-1, 0xFFFFFFF1, 0xFFFFFFEC, 0);
            NpcMoveTo(-1, 0xFFFFFFD8, 0xFFFFFFEC, 0);
            if (SI_AREA_FLAG(10) == 0) {
                sleep 1;
                goto 25;
            }
            SetNpcAnimation(-1, 0xB60001);
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 5, 0x10010B);
            PlaySoundAtNpc(-1, 610, 0);
            ShowEmote(-1, 0, 0, 15, 1, 0, 0, 0, 0);
            sleep 15;
            SetNpcAnimation(-1, 0xB60007);
            SetNpcJumpscale(-1, 1.5);
            GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            NpcJump0(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 8);
            SetNpcAnimation(-1, 0xB60001);
            spawn {
                sleep 8;
                NpcFacePlayer(-1, 0);
            }
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 5, 0x10010C);
            SI_AREA_FLAG(11) = 1;
            SetMusicTrack(0, 42, 0, 8);
            sleep 20;
            spawn {
                SetPlayerAnimation(0x1002B);
                sleep 60;
                SetPlayerAnimation(0x10002);
            }
            SetNpcAnimation(-1, 0xB60002);
            SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x10010D);
            SetNpcAnimation(-1, 0xB60007);
            SetNpcJumpscale(-1, 2.0);
            SI_MAP_VAR(13) = 30;
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 0xFFFFFFE2, 100, 40, 10);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 0xFFFFFFF1, 75, 80, 10);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 35, 50, 120, 10);
        }
        == 35 {
            func_80240A68_C96998();
            spawn N(script_802426A4);
            spawn {
                PlayerFaceNpc(-1, 0);
                ShowMessageAtScreenPos(0x10010F, 160, 40);
            }
            spawn {
                loop {
                    sleep 1;
                    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SI_VAR(2) += 0xFFFFFFF6;
                    PlayEffect(39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 10, 0, 0, 0, 0, 0, 0, 0);
                    if (SI_MAP_VAR(13) == 36) {
                        break;
                    }
                }
            }
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcAnimation(-1, 0xB6000D);
            SetNpcJumpscale(-1, 0.80078125);
            PlaySoundAtNpc(-1, 232, 0);
            NpcJump1(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 60);
            SetNpcAnimation(-1, 0xB60007);
            SI_MAP_VAR(13) = 36;
            UseSettingsFrom(0, 100, 25, 100);
            SetPanTarget(0, 100, 25, 100);
            SetCamDistance(0, 450.0);
            SetCamPitch(0, 15.0, -7.0);
            SetCamSpeed(0, 3.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SpeakToPlayer(-1, 0xB60007, 0xB60007, 0, 0x100110);
            ResetCam(0, 90.0);
            SI_MAP_VAR(13) = 40;
        }
        == 45 {
            SetNpcAnimation(-1, 0xB60004);
            SetNpcPos(-1, 0xFFFFFFE2, 100, 40);
            SetNpcJumpscale(-1, 2.0);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 0xFFFFFFE7, 125, 0xFFFFFFEC, 10);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 20, 150, 5, 8);
            SI_MAP_VAR(13) = 50;
            SetNpcSpeed(-1, 3.0);
            NpcMoveTo(-1, 75, 0xFFFFFFE2, 0);
            SetNpcAnimation(-1, 0xB60001);
            SetNpcFlagBits(-1, 256, 0);
        }
    }
    sleep 1;
    goto 10;
});

Script N(script_Interact_802432D4) = SCRIPT({
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 100) {
        EnableNpcAI(-1, 0);
        SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x100108);
        await N(script_80242094);
        await N(script_802420E4);
        EnableNpcAI(-1, 1);
    } else {
        SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x100113);
        await N(script_80242094);
        await N(script_802420E4);
    }
});

Script N(script_Init_802433B8) = SCRIPT({
    if (SI_SAVE_VAR(0) < 37) {
        BindNpcIdle(-1, N(script_Idle_802427B4));
        BindNpcInteract(-1, N(script_Interact_802432D4));
    } else {
        RemoveNpc(-1);
    }
});

s32 N(vectorList_80243420)[] = {
    0xC2F00000, 0x428C0000, 0x42340000, 0xC2960000, 0x42A00000, 0x42B40000, 0xC1200000, 0x42E60000,
    0x42B40000, 0x41200000, 0x43340000, 0x428C0000, 0x42480000, 0x43520000, 0x41F00000, 0x42C80000,
    0x43200000, 0x00000000,
};

s32 N(vectorList_80243468)[] = {
    0x43110000, 0x43430000, 0xC1200000, 0x42C80000, 0x433E0000, 0xC2B40000, 0x42A00000, 0x43340000,
    0xC2700000, 0x42E60000, 0x432F0000, 0xC2200000, 0x43250000, 0x432A0000, 0xC1200000, 0x43660000,
    0x432A0000, 0xC1A00000, 0x43870000, 0x432F0000, 0xC1F00000,
};

Script N(script_Idle_802434BC) = SCRIPT({
    if (SI_AREA_FLAG(9) == 0) {
        SetNpcPos(-1, 0xFFFFFF88, 70, 45);
        sleep 30;
        SI_AREA_FLAG(9) = 1;
        InterpNpcYaw(-1, 90, 0);
        LoadPath(60, N(vectorList_80243420), 6, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) != 1) {
                break;
            }
        }
        InterpNpcYaw(-1, 270, 0);
    }
0:
    func_80240A8C_C969BC(SI_VAR(0));
    if (SI_VAR(0) != 19) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    sleep 10;
    spawn {
        sleep 10;
        SetPlayerSpeed(2.0);
        PlayerMoveTo(60, 0, 0);
    }
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350.0);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    SI_AREA_FLAG(11) = 0;
    SI_MAP_VAR(13) = 15;
10:
    match SI_MAP_VAR(13) {
        == 20 {
            SI_AREA_FLAG(10) = 0;
            spawn {
                sleep 30;
                SI_MAP_VAR(13) = 25;
            }
            SI_AREA_FLAG(10) = 1;
        }
        == 30 {
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetCamDistance(0, 350.0);
                SetCamSpeed(0, 4.0);
                PanToTarget(0, 0, 1);
                WaitForCam(0, 1.0);
                SI_MAP_VAR(13) = 31;
            }
            sleep 10;
            SpeakToPlayer(-1, 0x160009, 0x160008, 5, 0x10010E);
        30:
            if (SI_MAP_VAR(13) == 30) {
                sleep 1;
                goto 30;
            }
            SI_MAP_VAR(13) = 35;
        }
        == 40 {
            SpeakToPlayer(-1, 0x160009, 0x160008, 0, 0x100111);
            SI_MAP_VAR(13) = 45;
        }
        == 50 {
            InterpNpcYaw(-1, 90, 0);
            sleep 15;
            InterpNpcYaw(-1, 270, 0);
            sleep 15;
            InterpNpcYaw(-1, 90, 0);
            sleep 15;
            SetNpcSpeed(-1, 3.0);
            NpcMoveTo(-1, 145, 0xFFFFFFF6, 0);
            PlaySoundAtNpc(-1, 610, 0);
            ShowEmote(-1, 0, 0, 15, 1, 0, 0, 0, 0);
            sleep 20;
            SetNpcRotation(-1, 0, 0xFFFFFFE2, 0);
            SetNpcAnimation(-1, 0x160007);
            SetNpcJumpscale(-1, 0);
            NpcJump0(-1, 170, 170, 50, 20);
            sleep 5;
            SetNpcRotation(-1, 0, 0xFFFFFFC4, 0);
            SetNpcYaw(-1, 270);
            NpcJump0(-1, 145, 170, 0xFFFFFFF6, 15);
            sleep 10;
            SetNpcAnimation(-1, 0x160008);
            SetNpcRotation(-1, 0, 0, 0);
            NpcJump1(-1, 145, 160, 0xFFFFFFF6, 5);
            SpeakToPlayer(-1, 0x160009, 0x160008, 0, 0x100112);
            NpcFacePlayer(-1, 0);
            SI_MAP_VAR(13) = -1;
        }
    }
    if (SI_MAP_VAR(13) != -1) {
        sleep 1;
        goto 10;
    }
    DisablePlayerInput(0);
90:
    if (SI_SAVE_VAR(0) < 37) {
        sleep 1;
        goto 90;
    }
    DisablePlayerInput(1);
    sleep 40;
    ModifyColliderFlags(0, 26, 0x7FFFFE00);
    spawn {
        SetNpcFlagBits(0, 256, 1);
        SetNpcAnimation(0, 0xB60007);
        SetNpcSpeed(0, 5.0);
        NpcMoveTo(0, 305, 0, 0);
        RemoveNpc(0);
    }
    sleep 30;
    SetNpcFlagBits(-1, 256, 1);
    SetNpcJumpscale(-1, 0.5);
    NpcJump0(-1, 145, 195, 0xFFFFFFF6, 5);
    sleep 5;
    SpeakToPlayer(-1, 0x160005, 0x160008, 0, 0x100115);
    sleep 5;
    InterpNpcYaw(-1, 90, 0);
    LoadPath(30, N(vectorList_80243468), 7, 0);
91:
    GetNextPathPos();
    SetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 91;
    }
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    DisablePlayerInput(0);
});

Script N(script_Interact_80243E08) = SCRIPT({
    SpeakToPlayer(-1, 0x160009, 0x160008, 0, 0x100114);
});

Script N(script_Init_80243E38) = SCRIPT({
    if (SI_SAVE_VAR(0) == 36) {
        SetNpcAnimation(-1, 0x160008);
        BindNpcIdle(-1, N(script_Idle_802434BC));
        BindNpcInteract(-1, N(script_Interact_80243E08));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80243EB4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802416D0),
        .pos = { -65.0, 0.0, 190.0 },
        .flags = 0x00510509,
        .init = N(script_Init_802433B8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_802440A4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802416FC),
        .pos = { 100.0, 160.0, 0.0 },
        .flags = 0x00400001,
        .init = N(script_Init_80243E38),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
        .tattle = 0x1A000B,
    },
};

NpcGroupList N(npcGroupList_80244294) = {
    NPC_GROUP(N(npcGroup_80243EB4), 0x00000000),
    NPC_GROUP(N(npcGroup_802440A4), 0x00000000),
    {},
};

s32 pad_0042B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802442C0_C9A1F0

// rodata: D_802442C8_C9A1F8

