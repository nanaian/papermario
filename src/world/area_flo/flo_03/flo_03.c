#include "flo_03.h"

s32 pad_000034[3];
s32 pad_00062C[1];
Script N(script_802406A0);
Script N(script_802407C0);
Script N(script_80240814);
Script N(script_80240880);
Script N(script_ExitWalk_80240B2C);
Script N(script_ExitWalk_80240B88);
Script N(script_80240BE4);
Script N(main);
s32 pad_000EA4[3];
s32 N(unk_80240F08)[1];
Script N(script_80240F0C);
Script N(script_80240F3C);
s32 N(intTable_80240F6C)[9];
s32 N(intTable_80240F90)[9];
s32 N(intTable_80240FB4)[9];
s32 N(intTable_80240FD8)[9];
Script N(script_80240FFC);
Script N(script_NpcAI_8024119C);
Script N(script_Defeat_802411B8);
Script N(script_8024122C);
Script N(script_Interact_802412BC);
Script N(script_Init_80241DA4);
Script N(script_Init_80241E10);
Script N(script_80241EF4);
Script N(script_Defeat_80241F64);
Script N(script_Hit_80242138);
Script N(script_Idle_8024219C);
Script N(script_Idle_80242618);
Script N(script_Idle_80242A94);
Script N(script_Idle_80242F10);
Script N(script_Init_8024338C);
Script N(script_Init_802434CC);
Script N(script_Init_8024360C);
Script N(script_Init_8024374C);
StaticNpc N(npcGroup_8024388C)[1];
StaticNpc N(npcGroup_80243A7C)[1];
StaticNpc N(npcGroup_80243C6C)[1];
StaticNpc N(npcGroup_80243E5C)[1];
StaticNpc N(npcGroup_8024404C)[1];
StaticNpc N(npcGroup_8024423C)[1];
NpcGroupList N(npcGroupList_8024442C);
Script N(script_SearchBush_80244480);
Script N(script_ShakeTree_802447E0);
s32 N(treeDropList_Tree1)[15];
Script N(script_80244E54);
s32 pad_004ECC[1];
Script N(script_80244ED0);
Script N(script_MakeEntities);
s32 pad_004F28[2];
const char D_80244F30_CAC1D0[8]; // "flo_09"
const char D_80244F38_CAC1D8[8]; // "flo_22"
const char D_80244F40_CAC1E0[8]; // "flo_18"

// text: func_80240000_CA72A0

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CA72E0

// text: func_802400F4_CA7394

// text: func_80240158_CA73F8

// text: func_802403F0_CA7690

// text: func_80240460_CA7700

s32 pad_00062C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -325.0f, 0.0f, 0.0f, 90.0f },
    { 325.0f, 0.0f, 0.0f, 270.0f },
    { -325.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190115,
};

Script N(script_802406A0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        SetMusicTrack(0, 127, 0, 8);
    } else {
        match SI_SAVE_VAR(0) {
            <= 44 {
                if (SI_SAVE_FLAG(1411) == 0) {
                    SetMusicTrack(0, 73, 0, 8);
                } else {
                    SetMusicTrack(0, 48, 0, 8);
                }
            }
            < 53 {
                SetMusicTrack(0, 48, 0, 8);
            } else {
                SetMusicTrack(0, 49, 0, 8);
            }
        }
    }
});

Script N(script_802407C0) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 44) {
        if (SI_SAVE_FLAG(1411) == 1) {
            0x802D5FF8(137, 0);
        }
    }
});

Script N(script_80240814) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 44) {
        if (SI_SAVE_FLAG(1411) == 1) {
            FadeOutMusic(0, 250);
            sleep 10;
            0x802D5FD8();
        }
    }
});

Script N(script_80240880) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) = f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /= f SI_VAR(0);
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

Script N(script_ExitWalk_80240B2C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244F30_CAC1D0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240B88) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244F38_CAC1D8, 0);
    sleep 100;
});

Script N(script_80240BE4) = SCRIPT({
    bind N(script_ExitWalk_80240B2C) to 0x80000 0;
    bind N(script_ExitWalk_80240B88) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_AREA_FLAG(27) = 0;
    SI_AREA_FLAG(28) = 0;
    SI_AREA_VAR(1) = 0;
    MakeNpcs(0, N(npcGroupList_8024442C));
    await N(script_MakeEntities);
    await N(script_80241EF4);
    spawn N(script_80244E54);
    spawn N(script_80244ED0);
    ModifyColliderFlags(3, 9, 6);
    SI_VAR(0) = 0xFFFFFF6F;
    SI_VAR(1) = 0xFFFFFEB1;
    SI_VAR(2) = 182;
    SI_VAR(3) = 0xFFFFFF4C;
    SI_VAR(4) = 0;
    spawn N(script_80240880);
    SI_VAR(0) = 200;
    SI_VAR(1) = 0xFFFFFF56;
    SI_VAR(2) = 310;
    SI_VAR(3) = 150;
    SI_VAR(4) = 0;
    spawn N(script_80240880);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        spawn N(script_80240FFC);
    } else {
        ModifyColliderFlags(0, 1, 0x7FFFFE00);
        SI_VAR(0) = N(script_80240BE4);
        spawn EnterWalk;
    }
    await N(script_802406A0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CA72A0();
    }
});

s32 pad_000EA4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240EB0) = {
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

NpcSettings N(npcSettings_80240EDC) = {
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

s32 N(unk_80240F08)[] = {
    0x00000000,
};

Script N(script_80240F0C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80240F3C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(intTable_80240F6C)[] = {
    0xFFFFFF9C, 0x00000000, 0x000000D2, 0xFFFFFF60, 0x00000000, 0x0000011D, 0xFFFFFFDD, 0x00000000,
    0x00000131,
};

s32 N(intTable_80240F90)[] = {
    0xFFFFFF42, 0x00000000, 0x00000050, 0xFFFFFF7E, 0x00000000, 0x00000000, 0xFFFFFFBA, 0x00000000,
    0xFFFFFFC4,
};

s32 N(intTable_80240FB4)[] = {
    0x0000004B, 0x00000000, 0xFFFFFFF1, 0x00000023, 0x00000000, 0xFFFFFF9C, 0x00000082, 0x00000000,
    0x00000000,
};

s32 N(intTable_80240FD8)[] = {
    0x00000073, 0x00000000, 0x000000B4, 0x00000055, 0x00000000, 0x00000122, 0x00000091, 0x00000000,
    0x0000008C,
};

Script N(script_80240FFC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetNpcYaw(0, 90);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamPitch(0, 17.0, -9.5);
    SetCamPosA(0, 0xFFFFFFE5, 0);
    SetCamPosB(0, 0, 0xFFFFFFCE);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SpeakToPlayer(0, 0xC70002, 0xC70001, 0, 0x1100C8);
    SetNpcAnimation(0, 0xC70003);
    sleep 10;
    GotoMap(D_80244F40_CAC1E0, 1);
    sleep 100;
});

Script N(script_NpcAI_8024119C) = SCRIPT({
    func_80240158_CA73F8();
});

Script N(script_Defeat_802411B8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(1366) = 1;
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_8024122C) = SCRIPT({
    GetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    SetCamProperties(0, SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2), 300, 20.0, -9.5);
});

Script N(script_Interact_802412BC) = SCRIPT({
    await N(script_802407C0);
    match SI_SAVE_VAR(0) {
        < 44 {
            SI_MAP_VAR(14) = 1;
            SI_VAR(4) = 3.5;
            await N(script_8024122C);
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110050);
            SetNpcAnimation(-1, 0xC70006);
            SetPlayerAnimation(0x10029);
            sleep 20;
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110051);
            SetNpcAnimation(2, 0x2F0112);
            SetNpcYaw(2, 270);
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamSpeed(0, 90.0);
            SetCamPitch(0, 17.0, -8.0);
            SetCamDistance(0, 200);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            sleep 20;
            PlaySoundAtNpc(2, 801, 0);
            SetNpcAnimation(2, 0x2F0116);
            sleep 10;
            PlaySoundAtNpc(2, 611, 0);
            ShowEmote(2, 2, 0xFFFFFFD3, 30, 1, 0, 0, 0, 0);
            GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110052);
            SetNpcYaw(3, 90);
            SetNpcPos(3, 0, 0xFFFFFC18, 0);
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 200);
            SetCamPitch(0, 17.0, -8.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SetNpcAnimation(3, 0x2F0100);
            sleep 20;
            PlaySoundAtNpc(3, 801, 0);
            SetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcAnimation(3, 0x2F0110);
            sleep 20;
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110053);
            SetNpcYaw(4, 270);
            GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 200);
            SetCamPitch(0, 17.0, -8.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            sleep 20;
            SetNpcAnimation(4, 0x2F0114);
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110054);
            SetNpcYaw(5, 270);
            GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 200);
            SetCamPitch(0, 17.0, -9.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SetNpcAnimation(5, 0x2F0106);
            sleep 20;
            SetNpcAnimation(5, 0x2F0107);
            sleep 20;
            SetNpcAnimation(5, 0x2F0108);
            sleep 20;
            SetNpcAnimation(5, 0x2F0116);
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110055);
            SetNpcPos(1, 0xFFFFFF17, 0, 0xFFFFFF27);
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 300);
            SetCamPitch(0, 17.0, -9.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SetNpcAnimation(1, 0x48000D);
            PlaySoundAtNpc(1, 610, 0);
            ShowEmote(1, 0, 45, 30, 1, 0, 0, 0, 0);
            sleep 15;
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110056);
            SI_VAR(4) = 90.0;
            await N(script_8024122C);
            SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110057);
            SetEnemyFlagBits(1, 1, 0);
            SetEnemyFlagBits(2, 1, 0);
            SetEnemyFlagBits(3, 1, 0);
            SetEnemyFlagBits(4, 1, 0);
            SetEnemyFlagBits(5, 1, 0);
            BindNpcAI(1, N(script_NpcAI_8024119C));
            SI_MAP_VAR(14) = 0;
            SI_MAP_VAR(15) = 60;
            SI_SAVE_VAR(0) = 44;
        }
        == 44 {
            if (SI_SAVE_FLAG(1411) == 0) {
                SpeakToPlayer(-1, 0xC70007, 0xC70006, 0, 0x110058);
                SetNpcAnimation(-1, 0xC70006);
            } else {
                SI_VAR(4) = 3.5;
                await N(script_8024122C);
                SpeakToPlayer(-1, 0xC70008, 0xC70003, 0, 0x110059);
                EndSpeech(-1, 0xC70002, 0xC70001, 0);
                SetNpcAnimation(-1, 0xC70004);
                sleep 20;
                SetNpcAnimation(-1, 0xC70001);
                SI_VAR(0) = 88;
                SI_VAR(1) = 1;
                await N(script_80240F0C);
                AddKeyItem(88);
                sleep 20;
                SpeakToPlayer(-1, 0xC70002, 0xC70001, 0, 0x11005A);
                EndSpeech(-1, 0xC70007, 0xC70006, 0);
                SI_SAVE_VAR(0) = 45;
            }
        }
        < 53 {
            SpeakToPlayer(-1, 0xC70002, 0xC70001, 0, 0x11005B);
        }
        < 60 {
            SpeakToPlayer(-1, 0xC70002, 0xC70001, 0, 0x11005C);
        } else {
            if (SI_AREA_VAR(1) == 0) {
                SpeakToPlayer(-1, 0xC70002, 0xC70001, 0, 0x11005D);
                SI_AREA_VAR(1) = 1;
            } else {
                SpeakToPlayer(-1, 0xC70002, 0xC70001, 0, 0x11005E);
            }
        }
    }
    ResetCam(0, 8.0);
    await N(script_80240814);
});

Script N(script_Init_80241DA4) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802412BC));
    if (SI_SAVE_FLAG(1411) == 0) {
        SetNpcAnimation(0, 0xC70006);
    } else {
        SetNpcAnimation(0, 0xC70001);
    }
});

Script N(script_Init_80241E10) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_802411B8));
    EnableNpcShadow(1, 0);
    match SI_SAVE_VAR(0) {
        < 44 {
            SetNpcPos(1, 0, 0xFFFFFC18, 0);
        } else {
            if (SI_SAVE_FLAG(1366) == 0) {
                SetEnemyFlagBits(1, 1, 0);
                BindNpcIdle(-1, N(script_NpcAI_8024119C));
            } else {
                SetNpcPos(1, 0, 0xFFFFFC18, 0);
            }
        }
    }
});

Script N(script_80241EF4) = SCRIPT({
    SI_MAP_VAR(14) = 0;
    SI_MAP_VAR(10) = 0;
    SI_MAP_VAR(11) = 0;
    SI_MAP_VAR(12) = 0;
    SI_MAP_VAR(13) = 0;
    SI_MAP_VAR(15) = 100;
});

Script N(script_Defeat_80241F64) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            GetSelfNpcID(SI_VAR(0));
            match SI_VAR(0) {
                == 2 {
                    SI_SAVE_FLAG(1367) = 1;
                }
                == 3 {
                    SI_SAVE_FLAG(1368) = 1;
                }
                == 4 {
                    SI_SAVE_FLAG(1369) = 1;
                }
                == 5 {
                    SI_SAVE_FLAG(1370) = 1;
                }
            }
            SI_VAR(0) = 0;
            SI_VAR(0) += SI_SAVE_FLAG(1367);
            SI_VAR(0) += SI_SAVE_FLAG(1368);
            SI_VAR(0) += SI_SAVE_FLAG(1369);
            SI_VAR(0) += SI_SAVE_FLAG(1370);
            if (SI_VAR(0) != 4) {
                SetNpcAnimation(0, 0xC70006);
            } else {
                SetNpcAnimation(0, 0xC70001);
                SI_SAVE_FLAG(1411) = 1;
                await N(script_802406A0);
            }
            DoNpcDefeat();
        }
        == 1 {
            SetNpcAnimation(-1, 0x2F0101);
        }
        == 2 {
            SetNpcAnimation(-1, 0x2F0101);
        }
    }
});

Script N(script_Hit_80242138) = SCRIPT({
    if (SI_SAVE_VAR(0) == 44) {
        GetOwnerEncounterTrigger(SI_VAR(0));
        if (SI_VAR(0) != 1) {
            SetNpcAnimation(-1, 0x2F0105);
        }
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_8024219C) = {
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(10), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(23), 1),
                SI_CMD(ScriptOpcode_GOTO, 0),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_LABEL, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, IsPlayerWithin, SI_VAR(0), SI_VAR(2), SI_MAP_VAR(15), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(9)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 9),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(14), 1),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(3), 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(23), 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 2, 0x8048, 1),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 2, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(23), 1),
                SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(10), 0),
                    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 44),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 4),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 10),
                    SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 2, 610, 0),
                    SI_CMD(ScriptOpcode_CALL, ShowEmote, 2, 0, 0, SI_VAR(1), 1, 0, 0, 0, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 1),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 2, 802, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 2, 0x2F0111),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1367), 0),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 2, 0, 0xFFFFFFCE, 0),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(23), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1367), 0),
                    SI_CMD(ScriptOpcode_CALL, RandInt, 2, SI_VAR(0)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240F6C)),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 2, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 2, 0x8048, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(23), 0),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 2, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 2, 801, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 2, 0x2F0110),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
                SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 0),
                SI_CMD(ScriptOpcode_CALL, RandInt, 30, SI_VAR(0)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 60),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_IF_GT, SI_MAP_VAR(10), 0),
                    SI_CMD(ScriptOpcode_SUB, SI_MAP_VAR(10), 1),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80242618) = {
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(11), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(24), 1),
                SI_CMD(ScriptOpcode_GOTO, 0),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_LABEL, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, IsPlayerWithin, SI_VAR(0), SI_VAR(2), SI_MAP_VAR(15), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(9)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 9),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(14), 1),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(3), 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(24), 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 3, 0x8048, 1),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 3, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(24), 1),
                SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(11), 0),
                    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 44),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 4),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 10),
                    SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 3, 610, 0),
                    SI_CMD(ScriptOpcode_CALL, ShowEmote, 3, 0, 0, SI_VAR(1), 1, 0, 0, 0, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 1),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 3, 802, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 3, 0x2F0111),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1368), 0),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 3, 0, 0xFFFFFFCE, 0),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(24), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1368), 0),
                    SI_CMD(ScriptOpcode_CALL, RandInt, 2, SI_VAR(0)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240F90)),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 3, 0x8048, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(24), 0),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 3, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 3, 801, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 3, 0x2F0110),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
                SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 0),
                SI_CMD(ScriptOpcode_CALL, RandInt, 35, SI_VAR(0)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 55),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_IF_GT, SI_MAP_VAR(11), 0),
                    SI_CMD(ScriptOpcode_SUB, SI_MAP_VAR(11), 1),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80242A94) = {
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(12), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(25), 1),
                SI_CMD(ScriptOpcode_GOTO, 0),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_LABEL, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, IsPlayerWithin, SI_VAR(0), SI_VAR(2), SI_MAP_VAR(15), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(9)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 9),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(14), 1),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(3), 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(25), 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 4, 0x8048, 1),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 4, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(25), 1),
                SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(12), 0),
                    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 44),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 4),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 10),
                    SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 4, 610, 0),
                    SI_CMD(ScriptOpcode_CALL, ShowEmote, 4, 0, 0, SI_VAR(1), 1, 0, 0, 0, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 1),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 4, 802, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 4, 0x2F0111),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1369), 0),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, 0, 0xFFFFFFCE, 0),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(25), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1369), 0),
                    SI_CMD(ScriptOpcode_CALL, RandInt, 2, SI_VAR(0)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240FB4)),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 4, 0x8048, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(25), 0),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 4, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 4, 801, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 4, 0x2F0110),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
                SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 0),
                SI_CMD(ScriptOpcode_CALL, RandInt, 40, SI_VAR(0)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 50),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(12), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_IF_GT, SI_MAP_VAR(12), 0),
                    SI_CMD(ScriptOpcode_SUB, SI_MAP_VAR(12), 1),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80242F10) = {
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(13), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(26), 1),
                SI_CMD(ScriptOpcode_GOTO, 0),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_LABEL, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, IsPlayerWithin, SI_VAR(0), SI_VAR(2), SI_MAP_VAR(15), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(9)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 9),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(14), 1),
            SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(3), 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(26), 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 5, 0x8048, 1),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 5, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(26), 1),
                SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(13), 0),
                    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 44),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 4),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 10),
                    SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 5, 610, 0),
                    SI_CMD(ScriptOpcode_CALL, ShowEmote, 5, 0, 0, SI_VAR(1), 1, 0, 0, 0, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 1),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 5, 802, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0x2F0111),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1370), 0),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 5, 0, 0xFFFFFFCE, 0),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(26), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1370), 0),
                    SI_CMD(ScriptOpcode_CALL, RandInt, 2, SI_VAR(0)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240FD8)),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 5, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 5, 0x8048, 1),
                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(26), 0),
                SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, 5, 1),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 5, 801, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0x2F0110),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
                SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 0x17100000, 0),
                SI_CMD(ScriptOpcode_CALL, RandInt, 45, SI_VAR(0)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 45),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(13), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_IF_GT, SI_MAP_VAR(13), 0),
                    SI_CMD(ScriptOpcode_SUB, SI_MAP_VAR(13), 1),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_8024338C) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80242138));
    BindNpcDefeat(-1, N(script_Defeat_80241F64));
    EnableNpcShadow(2, 0);
    match SI_SAVE_VAR(0) {
        < 44 {
            BindNpcIdle(-1, N(script_Idle_8024219C));
            SetNpcAnimation(2, 0x2F0110);
        }
        == 44 {
            if (SI_SAVE_FLAG(1367) == 0) {
                BindNpcIdle(-1, N(script_Idle_8024219C));
                SetNpcAnimation(2, 0x2F0110);
                SetEnemyFlagBits(2, 1, 0);
            } else {
                SetNpcPos(2, 0, 0xFFFFFC18, 0);
            }
        } else {
            SetNpcPos(2, 0, 0xFFFFFC18, 0);
        }
    }
});

Script N(script_Init_802434CC) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80242138));
    BindNpcDefeat(-1, N(script_Defeat_80241F64));
    EnableNpcShadow(3, 0);
    match SI_SAVE_VAR(0) {
        < 44 {
            BindNpcIdle(-1, N(script_Idle_80242618));
            SetNpcAnimation(3, 0x2F0110);
        }
        == 44 {
            if (SI_SAVE_FLAG(1368) == 0) {
                BindNpcIdle(-1, N(script_Idle_80242618));
                SetNpcAnimation(3, 0x2F0110);
                SetEnemyFlagBits(3, 1, 0);
            } else {
                SetNpcPos(3, 0, 0xFFFFFC18, 0);
            }
        } else {
            SetNpcPos(3, 0, 0xFFFFFC18, 0);
        }
    }
});

Script N(script_Init_8024360C) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80242138));
    BindNpcDefeat(-1, N(script_Defeat_80241F64));
    EnableNpcShadow(4, 0);
    match SI_SAVE_VAR(0) {
        < 44 {
            BindNpcIdle(-1, N(script_Idle_80242A94));
            SetNpcAnimation(4, 0x2F0110);
        }
        == 44 {
            if (SI_SAVE_FLAG(1369) == 0) {
                BindNpcIdle(-1, N(script_Idle_80242A94));
                SetNpcAnimation(4, 0x2F0110);
                SetEnemyFlagBits(4, 1, 0);
            } else {
                SetNpcPos(4, 0, 0xFFFFFC18, 0);
            }
        } else {
            SetNpcPos(4, 0, 0xFFFFFC18, 0);
        }
    }
});

Script N(script_Init_8024374C) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80242138));
    BindNpcDefeat(-1, N(script_Defeat_80241F64));
    EnableNpcShadow(5, 0);
    match SI_SAVE_VAR(0) {
        < 44 {
            BindNpcIdle(-1, N(script_Idle_80242F10));
            SetNpcAnimation(5, 0x2F0110);
        }
        == 44 {
            if (SI_SAVE_FLAG(1370) == 0) {
                BindNpcIdle(-1, N(script_Idle_80242F10));
                SetNpcAnimation(5, 0x2F0110);
                SetEnemyFlagBits(5, 1, 0);
            } else {
                SetNpcPos(5, 0, 0xFFFFFC18, 0);
            }
        } else {
            SetNpcPos(5, 0, 0xFFFFFC18, 0);
        }
    }
});

StaticNpc N(npcGroup_8024388C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240EDC),
        .pos = { -30.0, 0.0, 100.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80241DA4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001, 0x00C70001,
        },
        .tattle = 0x1A00DD,
    },
};

StaticNpc N(npcGroup_80243A7C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240EB0),
        .pos = { -233.0, 0.0, -217.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80241E10),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

StaticNpc N(npcGroup_80243C6C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240EB0),
        .pos = { -100.0, 0.0, 210.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024338C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x002F0101, 0x002F0102, 0x002F0103, 0x002F0103, 0x002F0101, 0x002F0101, 0x002F0105, 0x002F0105, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100,
        },
    },
};

StaticNpc N(npcGroup_80243E5C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80240EB0),
        .pos = { -130.0, 0.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802434CC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x002F0101, 0x002F0102, 0x002F0103, 0x002F0103, 0x002F0101, 0x002F0101, 0x002F0105, 0x002F0105, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100,
        },
    },
};

StaticNpc N(npcGroup_8024404C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80240EB0),
        .pos = { 75.0, 0.0, 20.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024360C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x002F0101, 0x002F0102, 0x002F0103, 0x002F0103, 0x002F0101, 0x002F0101, 0x002F0105, 0x002F0105, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100,
        },
    },
};

StaticNpc N(npcGroup_8024423C)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80240EB0),
        .pos = { 71.0, 0.0, 200.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024374C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x002F0101, 0x002F0102, 0x002F0103, 0x002F0103, 0x002F0101, 0x002F0101, 0x002F0105, 0x002F0105, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100, 0x002F0100,
        },
    },
};

NpcGroupList N(npcGroupList_8024442C) = {
    NPC_GROUP(N(npcGroup_8024388C), 0x00000000),
    NPC_GROUP(N(npcGroup_80243A7C), 0x180F0002),
    NPC_GROUP(N(npcGroup_80243C6C), 0x19020002),
    NPC_GROUP(N(npcGroup_80243E5C), 0x19010002),
    NPC_GROUP(N(npcGroup_8024404C), 0x19030002),
    NPC_GROUP(N(npcGroup_8024423C), 0x19040002),
    {},
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80244480) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240460_CA7700, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240460_CA7700, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802447E0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240460_CA7700, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240460_CA7700, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240460_CA7700, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240460_CA7700, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .modelIDs = { 0x17 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x16 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000002, 0x0000009F, 0xFFFFFF00, 0x00000066, 0xFFFFFF57, 0x0000000C, 0x00000000, 0xF971889B,
    0x0000009F, 0xFFFFFF64, 0x00000066, 0xFFFFFF57, 0x0000000C, 0x00000000, 0xF971889C,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80244E44) =  { -208.0f, 0.0f, -182.0f, 0.0f };

Script N(script_80244E54) = SCRIPT({
    SI_AREA_FLAG(27) = 0;
    SI_AREA_FLAG(28) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802447E0) to TriggerFlag_WALL_HAMMER 16;
    bind N(script_ShakeTree_802447E0) to TriggerFlag_BOMB N(triggerCoord_80244E44);
});

s32 pad_004ECC[] = {
    0x00000000,
};

Script N(script_80244ED0) = SCRIPT({

});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 0xFFFFFF51, 0, 150, 0, 8, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1404));
});

s32 pad_004F28[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244F30_CAC1D0

// rodata: D_80244F38_CAC1D8

// rodata: D_80244F40_CAC1E0

// rodata: D_80244F48_CAC1E8
