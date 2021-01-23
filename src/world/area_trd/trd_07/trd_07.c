#include "trd_07.h"

s32 pad_00030C[1];
Script N(script_80242950);
s32 pad_00298C[1];
Script N(script_UpdateTexturePan_80242990);
Script N(script_ExitWalk_80242A2C);
Script N(script_ExitWalk_80242A88);
Script N(script_80242AE4);
Script N(script_80242B2C);
Script N(main);
s32 pad_002DDC[1];
Script N(script_NpcAI_80242E10);
f32 N(floatTable_80242EAC)[6];
Script N(script_NpcAI_80242EF4);
Script N(script_Defeat_80242F90);
Script N(script_Init_80243070);
StaticNpc N(npcGroup_802430CC)[1];
StaticNpc N(npcGroup_802432BC)[1];
StaticNpc N(npcGroup_802434AC)[1];
NpcGroupList N(npcGroupList_8024369C);
s32 pad_0036CC[1];
Script N(script_802436D0);
Script N(script_80243C04);
Script N(script_802440AC);
Script N(script_80244430);
Script N(script_8024475C);
Script N(script_80244778);
s32 pad_004804[3];
const char D_80244810_9BB190[8]; // "trd_08"
const char D_80244818_9BB198[8]; // "trd_04"
s32 pad_00487C[1];
s32 pad_0048D4[1];
s32 pad_004918[2];

// text: func_80240000_9B6980

// text: func_80240124_9B6AA4

s32 pad_00030C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024038C_9B6D0C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802406A4_9B7024

// text: func_80240AE4_9B7464

// text: func_80240C94_9B7614

// text: N(UnkNpcAIFunc1)

// text: func_8024137C_9B7CFC

// text: N(UnkNpcAIFunc2)

// text: func_80241738_9B80B8

// text: func_802417A4_9B8124

// text: N(UnkNpcAIFunc3)

// text: func_8024193C_9B82BC

// text: func_80241CCC_9B864C

// text: func_80241DF0_9B8770

// text: func_80241FDC_9B895C

// text: func_80242104_9B8A84

// text: func_802421C0_9B8B40

// text: N(UnkDurationCheck)

// text: func_8024231C_9B8C9C

// text: func_8024256C_9B8EEC

// text: func_80242600_9B8F80

// text: func_802427FC_9B917C

EntryList N(entryList) = {
    { 220.0f, 0.0f, 0.0f, 270.0f },
    { -200.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190055,
};

Script N(script_80242950) = SCRIPT({
    SetMusicTrack(0, 20, 0, 8);
    UseDoorSounds(1);
});

s32 pad_00298C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80242990) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_9B6980();
                    return;
                }
            }
        }
    }
    func_80240124_9B6AA4();
});

Script N(script_ExitWalk_80242A2C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244810_9BB190, 0);
    sleep 100;
});

Script N(script_ExitWalk_80242A88) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244818_9BB198, 4);
    sleep 100;
});

Script N(script_80242AE4) = SCRIPT({
    bind N(script_ExitWalk_80242A2C) to 0x80000 1;
    bind N(script_ExitWalk_80242A88) to 0x80000 7;
});

Script N(script_80242B2C) = SCRIPT({
    group 0;
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
10:
    SetTexPanOffset(1, 0, SI_VAR(0), 0);
    SetTexPanOffset(1, 1, SI_VAR(1), 0);
    SI_VAR(0) += 100;
    SI_VAR(1) -= 100;
    sleep 1;
    goto 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_8024369C));
    spawn N(script_80242950);
    spawn N(script_80242B2C);
    await N(script_80244778);
    SI_VAR(0) = N(script_80242AE4);
    SI_MAP_VAR(0) = spawn EnterWalk;
    sleep 1;
    EnableTexPanning(5, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 90;
        SI_VAR(3) = 0xFFFFFFC4;
        SI_VAR(4) = 0xFFFFFFBA;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242990);
    }
});

s32 pad_002DDC[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80242DE0) = {
    .moveSpeed = 1.5,
    .moveTime = 0x2D,
    .waitTime = 0x14,
    .alertRadius = 70.0,
    .unk_10 = 50.0,
    .unk_14 = 0xA,
    .chaseSpeed = 7.5,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0,
    .unk_28 = 60.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242E10) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_802406A4_9B7024(N(aISettings_80242DE0));
});

NpcSettings N(npcSettings_80242E80) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242E10),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

f32 N(floatTable_80242EAC)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_80242EC4) = {
    .moveSpeed = 2.0,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0,
    .unk_10 = 20.0,
    .unk_14 = 0xA,
    .chaseSpeed = 2.5999999046325684,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 150.0,
    .unk_28 = 20.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242EF4) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_8024231C_9B8C9C(N(aISettings_80242EC4));
});

NpcSettings N(npcSettings_80242F64) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242EF4),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0x1,
};

Script N(script_Defeat_80242F90) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_8024256C_9B8EEC(SI_VAR(0));
            if (SI_VAR(0) == 1) {
                SI_SAVE_FLAG(666) = 1;
                spawn N(script_8024475C);
            }
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

Script N(script_Init_80243070) = SCRIPT({
    SetSelfEnemyFlags(0x800000);
    BindNpcDefeat(-1, N(script_Defeat_80242F90));
    if (SI_SAVE_FLAG(666) == 1) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802430CC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242E80),
        .pos = { -75.0, 0.0, -30.0 },
        .flags = 0x00040C00,
        .init = N(script_Init_80243070),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0xFFFFFFB5, 0x00000000, 0xFFFFFFE2, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_802432BC)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242F64),
        .pos = { 0.0, 50.0, 30.0 },
        .flags = 0x00040C00,
        .init = N(script_Init_80243070),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0x00000000, 0x00000032, 0x0000001E, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000032, 0x0000001E, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002A0101, 0x002A0102, 0x002A0103, 0x002A0103, 0x002A0101, 0x002A0101, 0x002A0106, 0x002A0106, 0x002A0104, 0x002A010C, 0x002A010A, 0x002A010E, 0x002A0103, 0x002A0103, 0x002A0103, 0x002A0103,
        },
    },
};

StaticNpc N(npcGroup_802434AC)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242F64),
        .pos = { 75.0, 50.0, -30.0 },
        .flags = 0x00040C00,
        .init = N(script_Init_80243070),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0x0000004B, 0x00000032, 0xFFFFFFE2, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000004B, 0x00000032, 0xFFFFFFE2, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002A0101, 0x002A0102, 0x002A0103, 0x002A0103, 0x002A0101, 0x002A0101, 0x002A0106, 0x002A0106, 0x002A0104, 0x002A010C, 0x002A010A, 0x002A010E, 0x002A0103, 0x002A0103, 0x002A0103, 0x002A0103,
        },
    },
};

NpcGroupList N(npcGroupList_8024369C) = {
    NPC_GROUP(N(npcGroup_802430CC), 0x06010004),
    NPC_GROUP(N(npcGroup_802432BC), 0x06080004),
    NPC_GROUP(N(npcGroup_802434AC), 0x060A0004),
    {},
};

s32 pad_0036CC[] = {
    0x00000000,
};

Script N(script_802436D0) = SCRIPT({
    spawn {
        sleep 20;
        PlaySound(43);
    }
    spawn {
        MakeLerp(100, 120, 20, 1);
    0:
        UpdateLerp();
        SI_VAR(0) /= 100.0;
        SI_MAP_VAR(0) =f SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 0;
        }
        MakeLerp(120, 80, 20, 4);
    1:
        UpdateLerp();
        SI_VAR(0) /= 100.0;
        SI_MAP_VAR(0) =f SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
        MakeLerp(80, 100, 20, 1);
    2:
        UpdateLerp();
        SI_VAR(0) /= 100.0;
        SI_MAP_VAR(0) =f SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 2;
        }
    }
    spawn {
        MakeLerp(100, 80, 20, 1);
    0:
        UpdateLerp();
        SI_VAR(0) /= 100.0;
        SI_MAP_VAR(1) =f SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 0;
        }
        MakeLerp(80, 120, 20, 4);
    1:
        UpdateLerp();
        SI_VAR(0) /= 100.0;
        SI_MAP_VAR(1) =f SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
        MakeLerp(120, 100, 20, 1);
    2:
        UpdateLerp();
        SI_VAR(0) /= 100.0;
        SI_MAP_VAR(1) =f SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 2;
        }
    }
    SI_MAP_VAR(0) = 1.0;
    SI_MAP_VAR(1) = 1.0;
    spawn {
        SI_VAR(9) = SI_VAR(0);
        loop 20 {
            ScaleGroup(SI_VAR(9), 1.0, SI_MAP_VAR(1), SI_MAP_VAR(0));
            sleep 1;
        }
        MakeLerp(0, 80, 30, 4);
    1:
        UpdateLerp();
        TranslateGroup(SI_VAR(9), 0, SI_VAR(0), 0);
        ScaleGroup(SI_VAR(9), 1.0, SI_MAP_VAR(1), SI_MAP_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
        MakeLerp(80, 70, 10, 1);
    2:
        UpdateLerp();
        TranslateGroup(SI_VAR(9), 0, SI_VAR(0), 0);
        ScaleGroup(SI_VAR(9), 1.0, SI_MAP_VAR(1), SI_MAP_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 2;
        }
    }
    sleep 61;
});

Script N(script_80243C04) = SCRIPT({
    SI_VAR(9) = SI_VAR(0);
    MakeLerp(70, 0, 20, 2);
0:
    UpdateLerp();
    TranslateGroup(SI_VAR(9), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    PlaySound(44);
    if (SI_VAR(9) == 16) {
        func_802427FC_9B917C(270, 0, 40, 270);
        func_802427FC_9B917C(270, 0, 0xFFFFFFD8, 270);
    } else {
        func_802427FC_9B917C(0xFFFFFF01, 0, 40, 90);
        func_802427FC_9B917C(0xFFFFFF01, 0, 0xFFFFFFD8, 90);
    }
    MakeLerp(0, 20, 10, 4);
1:
    UpdateLerp();
    TranslateGroup(SI_VAR(9), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(20, 0, 10, 1);
2:
    UpdateLerp();
    TranslateGroup(SI_VAR(9), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    PlaySound(44);
    if (SI_VAR(9) == 16) {
        func_802427FC_9B917C(270, 0, 40, 270);
        func_802427FC_9B917C(270, 0, 0xFFFFFFD8, 270);
    } else {
        func_802427FC_9B917C(0xFFFFFF01, 0, 40, 90);
        func_802427FC_9B917C(0xFFFFFF01, 0, 0xFFFFFFD8, 90);
    }
    MakeLerp(0, 10, 5, 4);
3:
    UpdateLerp();
    TranslateGroup(SI_VAR(9), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 3;
    }
    MakeLerp(10, 0, 5, 1);
4:
    UpdateLerp();
    TranslateGroup(SI_VAR(9), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 4;
    }
    PlaySound(44);
    if (SI_VAR(9) == 16) {
        func_802427FC_9B917C(270, 0, 40, 270);
        func_802427FC_9B917C(270, 0, 0xFFFFFFD8, 270);
        EnableModel(21, 0);
    } else {
        func_802427FC_9B917C(0xFFFFFF01, 0, 40, 90);
        func_802427FC_9B917C(0xFFFFFF01, 0, 0xFFFFFFD8, 90);
        EnableModel(18, 0);
    }
});

// Unable to use DSL: DSL does not support script opcode 0x55
// *INDENT-OFF*
Script N(script_802440AC) = {
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(0), SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_SUSPEND_GROUP, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802D5830, 1),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 10),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80242600_9B8F80, SI_VAR(0), SI_VAR(2), SI_FIXED(30.0)),
    SI_CMD(ScriptOpcode_CALL, SetCamPosA, 0, SI_VAR(0), SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, SetCamPosB, 0, SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 21, 1),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 16),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802436D0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 400),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80242600_9B8F80, SI_VAR(0), SI_VAR(2), SI_FIXED(-60.0)),
    SI_CMD(ScriptOpcode_CALL, SetCamPosA, 0, SI_VAR(0), SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, SetCamPosB, 0, SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 18, 1),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 12),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802436D0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 2, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 5, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_RESUME_GROUP, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802D5830, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80244430) = SCRIPT({
    DisablePlayerInput(1);
    sleep 15;
    PlaySound(11);
    sleep 15;
    group 0;
    0x802D5830(1);
    SI_VAR(0) = 220;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80242600_9B8F80(SI_VAR(0), SI_VAR(2), 30.0);
    SetCamPosA(0, SI_VAR(0), SI_VAR(1));
    SetCamPosB(0, SI_VAR(2), SI_VAR(3));
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SI_VAR(0) = 16;
    await N(script_80243C04);
    PanToTarget(0, 0, 0);
    sleep 1;
    SI_VAR(0) = 220;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(0) -= 400;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80242600_9B8F80(SI_VAR(0), SI_VAR(2), -60.0);
    SetCamPosA(0, SI_VAR(0), SI_VAR(1));
    SetCamPosB(0, SI_VAR(2), SI_VAR(3));
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SI_VAR(0) = 12;
    await N(script_80243C04);
    PanToTarget(0, 0, 0);
    WaitForCam(0, 1.0);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_8024475C) = SCRIPT({
    spawn N(script_80244430);
});

Script N(script_80244778) = SCRIPT({
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    EnableModel(21, 0);
    EnableModel(18, 0);
    if (SI_SAVE_FLAG(666) == 0) {
        spawn N(script_802440AC);
    }
});

s32 pad_004804[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244810_9BB190

// rodata: D_80244818_9BB198

// rodata: D_80244820_9BB1A0

// rodata: jtbl_80244828_9BB1A8

s32 pad_00487C[] = {
    0x00000000,
};

// rodata: D_80244880_9BB200

// rodata: D_80244888_9BB208

// rodata: D_80244890_9BB210

// rodata: jtbl_80244898_9BB218

s32 pad_0048D4[] = {
    0x00000000,
};

// rodata: jtbl_802448D8_9BB258

s32 pad_004918[] = {
    0x00000000, 0x00000000,
};

