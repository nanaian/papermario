#include "flo_17.h"

s32 pad_000034[3];
s32 pad_00006C[1];
s32 pad_003214[3];
Script N(script_80243280);
Script N(script_802432F0);
Script N(script_ExitWalk_8024359C);
Script N(script_ExitWalk_802435F8);
Script N(script_80243654);
s32 N(lavaResetList_8024369C)[80];
Script N(main);
s32 pad_003FCC[1];
Script N(script_80243FD0);
Script N(script_80244284);
s32 unk_missing_802443D8[13];
f32 N(floatTable_8024440C)[6];
Script N(script_NpcAI_80244454);
Script N(script_NpcAI_80244520);
Script N(script_80244590);
StaticNpc N(npcGroup_80244688)[1];
StaticNpc N(npcGroup_80244878)[1];
StaticNpc N(npcGroup_80244A68)[1];
StaticNpc N(npcGroup_80244C58)[1];
StaticNpc N(npcGroup_80244E48)[1];
StaticNpc N(npcGroup_80245038)[1];
NpcGroupList N(npcGroupList_80245228);
s32 pad_00527C[1];
Script N(script_MakeEntities);
s32 pad_0052EC[1];
const char D_802452F0_CDC5D0[8]; // "flo_16"
const char D_802452F8_CDC5D8[8]; // "flo_18"
s32 pad_005354[1];
s32 pad_0053B4[1];

// text: func_80240000_CD72E0

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CD7320

s32 pad_00006C[] = {
    0x00000000,
};

// text: func_80240070_CD7350

// text: func_80240220_CD7500

// text: N(UnkNpcAIFunc1)

// text: func_80240908_CD7BE8

// text: N(UnkNpcAIFunc2)

// text: func_80240CC4_CD7FA4

// text: func_80240D30_CD8010

// text: N(UnkNpcAIFunc3)

// text: func_80240EC8_CD81A8

// text: func_80241258_CD8538

// text: func_8024137C_CD865C

// text: func_80241568_CD8848

// text: func_802415B0_CD8890

// text: func_80241A14_CD8CF4

// text: func_80241C64_CD8F44

// text: N(set_script_owner_npc_anim)

// text: func_802421C0_CD94A0

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802424D8_CD97B8

// text: func_80242918_CD9BF8

s32 pad_003214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -730.0f, 0.0f, 0.0f, 90.0f },
    { 730.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190121,
};

Script N(script_80243280) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        } else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_802432F0) = SCRIPT({
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

Script N(script_ExitWalk_8024359C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802452F0_CDC5D0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802435F8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802452F8_CDC5D8, 0);
    sleep 100;
});

Script N(script_80243654) = SCRIPT({
    bind N(script_ExitWalk_8024359C) to 0x80000 0;
    bind N(script_ExitWalk_802435F8) to 0x80000 4;
});

s32 N(lavaResetList_8024369C)[] = {
    0x0000000F, 0xC4048000, 0x00000000, 0xC2DC0000, 0x00000011, 0xC4070000, 0x00000000, 0xC2480000,
    0x00000010, 0xC4048000, 0x00000000, 0x42A00000, 0x00000014, 0xC3870000, 0x00000000, 0xC2F00000,
    0x00000013, 0xC3870000, 0x00000000, 0xC2F00000, 0x00000012, 0xC3870000, 0x00000000, 0x420C0000,
    0x00000017, 0xC3020000, 0x00000000, 0xC2480000, 0x00000016, 0xC3020000, 0x00000000, 0xC2480000,
    0x00000015, 0xC30C0000, 0x00000000, 0x42960000, 0x0000001B, 0x42F00000, 0x00000000, 0xC2480000,
    0x0000001A, 0x42F00000, 0x00000000, 0xC2480000, 0x00000018, 0x43020000, 0x00000000, 0x42700000,
    0x00000019, 0x42F00000, 0x00000000, 0x42F00000, 0x0000001F, 0x438C0000, 0x00000000, 0xC2DC0000,
    0x0000001E, 0x438C0000, 0x00000000, 0xC2DC0000, 0x0000001D, 0x43870000, 0x00000000, 0xC2480000,
    0x0000001C, 0x438C0000, 0x00000000, 0x42480000, 0x00000021, 0x44034000, 0x00000000, 0xC28C0000,
    0x00000020, 0x44034000, 0x00000000, 0x42480000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80245228));
    await N(script_MakeEntities);
    spawn N(script_80244284);
    ModifyColliderFlags(3, 15, 6);
    ModifyColliderFlags(3, 16, 6);
    ModifyColliderFlags(3, 20, 6);
    ModifyColliderFlags(3, 23, 6);
    ModifyColliderFlags(3, 25, 6);
    ModifyColliderFlags(3, 27, 6);
    ModifyColliderFlags(3, 28, 6);
    ModifyColliderFlags(3, 31, 6);
    ModifyColliderFlags(3, 32, 6);
    SI_VAR(0) = 0xFFFFFD20;
    SI_VAR(1) = 0xFFFFFF77;
    SI_VAR(2) = 0xFFFFFDF6;
    SI_VAR(3) = 0xFFFFFF8A;
    SI_VAR(4) = 0;
    spawn N(script_802432F0);
    SI_VAR(0) = 0xFFFFFD28;
    SI_VAR(1) = 76;
    SI_VAR(2) = 0xFFFFFE10;
    SI_VAR(3) = 137;
    SI_VAR(4) = 0;
    spawn N(script_802432F0);
    SI_VAR(0) = 0xFFFFFF60;
    SI_VAR(1) = 0xFFFFFF8B;
    SI_VAR(2) = 0xFFFFFFA4;
    SI_VAR(3) = 0xFFFFFFCA;
    SI_VAR(4) = 0;
    spawn N(script_802432F0);
    SI_VAR(0) = 76;
    SI_VAR(1) = 0xFFFFFF84;
    SI_VAR(2) = 150;
    SI_VAR(3) = 0xFFFFFFC9;
    SI_VAR(4) = 0;
    spawn N(script_802432F0);
    SI_VAR(0) = 192;
    SI_VAR(1) = 60;
    SI_VAR(2) = 309;
    SI_VAR(3) = 133;
    SI_VAR(4) = 0;
    spawn N(script_802432F0);
    SI_VAR(0) = 488;
    SI_VAR(1) = 46;
    SI_VAR(2) = 733;
    SI_VAR(3) = 137;
    SI_VAR(4) = 0;
    spawn N(script_802432F0);
    ModifyColliderFlags(3, 9, 2);
    spawn {
        ResetFromLava(N(lavaResetList_8024369C));
    }
    EnableTexPanning(30, 1);
    EnableTexPanning(32, 1);
    EnableTexPanning(33, 1);
    EnableTexPanning(36, 1);
    EnableTexPanning(37, 1);
    EnableTexPanning(40, 1);
    EnableTexPanning(42, 1);
    EnableTexPanning(44, 1);
    EnableTexPanning(45, 1);
    EnableTexPanning(48, 1);
    EnableTexPanning(49, 1);
    EnableTexPanning(52, 1);
    EnableTexPanning(54, 1);
    EnableTexPanning(56, 1);
    EnableTexPanning(57, 1);
    EnableTexPanning(60, 1);
    EnableTexPanning(61, 1);
    EnableTexPanning(64, 1);
    EnableTexPanning(31, 1);
    EnableTexPanning(34, 1);
    EnableTexPanning(35, 1);
    EnableTexPanning(38, 1);
    EnableTexPanning(39, 1);
    EnableTexPanning(43, 1);
    EnableTexPanning(46, 1);
    EnableTexPanning(47, 1);
    EnableTexPanning(50, 1);
    EnableTexPanning(51, 1);
    EnableTexPanning(55, 1);
    EnableTexPanning(58, 1);
    EnableTexPanning(59, 1);
    EnableTexPanning(62, 1);
    EnableTexPanning(63, 1);
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
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80243654);
    spawn EnterWalk;
    await N(script_80243280);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CD72E0();
    }
});

s32 pad_003FCC[] = {
    0x00000000,
};

Script N(script_80243FD0) = SCRIPT({
    loop {
        func_80240040_CD7320(SI_VAR(0));
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

Script N(script_80244284) = SCRIPT({
    SI_VAR(4) = 35;
    SI_VAR(5) = 14;
    SI_VAR(6) = 15;
    SI_VAR(7) = SI_MAP_VAR(10);
    SI_VAR(8) = SI_MAP_VAR(11);
    SI_VAR(9) = 38;
    spawn N(script_80243FD0);
    SI_VAR(4) = 36;
    SI_VAR(5) = 19;
    SI_VAR(6) = 20;
    SI_VAR(7) = SI_MAP_VAR(12);
    SI_VAR(8) = SI_MAP_VAR(13);
    SI_VAR(9) = 39;
    spawn N(script_80243FD0);
    SI_VAR(4) = 37;
    SI_VAR(5) = 24;
    SI_VAR(6) = 25;
    SI_VAR(7) = SI_MAP_VAR(14);
    SI_VAR(8) = SI_MAP_VAR(15);
    SI_VAR(9) = 40;
    spawn N(script_80243FD0);
});

s32 unk_missing_802443D8[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00180018, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

f32 N(floatTable_8024440C)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80244424) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 60.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 80.0f,
    .unk_28 = 70.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244454) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 400);
    func_80241C64_CD8F44(N(aISettings_80244424));
});

NpcSettings N(npcSettings_802444C4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244454),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x14,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_802444F0) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 60.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 6.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_80244520) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 18);
    SetSelfVar(5, 3);
    SetSelfVar(7, 4);
    func_80242918_CD9BF8(N(aISettings_802444F0));
});

Script N(script_80244590) = SCRIPT({
    SetNpcRotation(-1, 0, 0, 0);
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(10, 100);
            DoNpcDefeat();
        }
        == 2 {
            0x80045900(0);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_8024465C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x15,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244520),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = &N(script_80244590),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80244688)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802444C4),
        .pos = { -185.0, 90.0, 10.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .movement = { 0xFFFFFF47, 0x0000005A, 0x0000000A, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF47, 0x0000005A, 0x00000000, 0x00000055, 0x00000078, 0x00000001, 0x00000001 },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
    },
};

StaticNpc N(npcGroup_80244878)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802444C4),
        .pos = { 200.0, 90.0, -25.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .movement = { 0x000000C8, 0x0000005A, 0xFFFFFFE7, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000C8, 0x0000005A, 0x00000000, 0x00000055, 0x00000078, 0x00000001, 0x00000001 },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
    },
};

StaticNpc N(npcGroup_80244A68)[] = {
    {
        .id = 50,
        .settings = &N(npcSettings_8024465C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000C04,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_80244C58)[] = {
    {
        .id = 51,
        .settings = &N(npcSettings_8024465C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000C04,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_80244E48)[] = {
    {
        .id = 52,
        .settings = &N(npcSettings_8024465C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000C04,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_80245038)[] = {
    {
        .id = 53,
        .settings = &N(npcSettings_8024465C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000C04,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

NpcGroupList N(npcGroupList_80245228) = {
    NPC_GROUP(N(npcGroup_80244688), 0x18090003),
    NPC_GROUP(N(npcGroup_80244878), 0x180A0003),
    NPC_GROUP(N(npcGroup_80244A68), 0x180C0003),
    NPC_GROUP(N(npcGroup_80244C58), 0x180C0003),
    NPC_GROUP(N(npcGroup_80244E48), 0x180C0003),
    NPC_GROUP(N(npcGroup_80245038), 0x180C0003),
    {},
};

s32 pad_00527C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA588, 660, 60, 0xFFFFFF8D, 0, 130, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1390));
    MakeItemEntity(62, 0xFFFFFF0B, 0, 105, 17, SI_SAVE_FLAG(1389));
});

s32 pad_0052EC[] = {
    0x00000000,
};

// rodata: D_802452F0_CDC5D0

// rodata: D_802452F8_CDC5D8

// rodata: D_80245300_CDC5E0

// rodata: D_80245308_CDC5E8

// rodata: D_80245310_CDC5F0

// rodata: jtbl_80245318_CDC5F8

s32 pad_005354[] = {
    0x00000000,
};

// rodata: D_80245358_CDC638

// rodata: jtbl_80245360_CDC640

s32 pad_0053B4[] = {
    0x00000000,
};

// rodata: D_802453B8_CDC698
