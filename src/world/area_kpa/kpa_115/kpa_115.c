#include "kpa_115.h"

s32 pad_0013BC[1];
Script N(script_80241430);
s32 pad_001498[2];
Script N(script_ExitWalk_802414A0);
Script N(script_ExitWalk_802414FC);
Script N(script_ExitWalk_80241558);
Script N(script_802415B4);
Script N(main);
s32 pad_0016EC[1];
Script N(script_802416F0);
Script N(script_80241A80);
Script N(script_80241BA4);
Script N(script_80241CC8);
s32 pad_001DD4[3];
Script N(script_80241DE0);
Script N(script_NpcAI_80241EE0);
Script N(script_NpcAI_80241FAC);
Script N(script_NpcAI_80242008);
Script N(script_80242018);
s32 N(extraAnimationList_8024220C)[2];
StaticNpc N(npcGroup_80242214)[7];
NpcGroupList N(npcGroupList_80242FA4);
s32 pad_002FBC[1];
const char D_80242FC0_AA1D00[9]; // "kpa_114"
const char D_80242FC8_AA1D08[9]; // "kpa_116"
const char D_80242FD0_AA1D10[9]; // "kpa_118"
s32 pad_002FD8[2];
s32 pad_003198[2];

// text: func_80240000_A9ED40

// text: func_802400BC_A9EDFC

// text: func_80240170_A9EEB0

// text: func_80240360_A9F0A0

// text: func_802404A4_A9F1E4

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_802406CC_A9F40C

// text: func_80240C08_A9F948

// text: func_80241064_A9FDA4

// text: func_80241384_AA00C4

s32 pad_0013BC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -208.0f, 0.0f, 100.0f, 90.0f },
    { 100.0f, 0.0f, 20.0f, 180.0f },
    { 50.0f, 0.0f, 20.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190183,
};

Script N(script_80241430) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(6);
    }
});

s32 pad_001498[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802414A0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242FC0_AA1D00, 1);
    sleep 100;
});

Script N(script_ExitWalk_802414FC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242FC8_AA1D08, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241558) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80242FD0_AA1D10, 0);
    sleep 100;
});

Script N(script_802415B4) = SCRIPT({
    bind N(script_ExitWalk_802414A0) to 0x80000 31;
    bind N(script_ExitWalk_80241558) to 0x80000 34;
    bind N(script_ExitWalk_802414FC) to 0x80000 37;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242FA4));
    spawn N(script_80241CC8);
    SI_VAR(0) = N(script_802415B4);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80241430);
});

s32 pad_0016EC[] = {
    0x00000000,
};

Script N(script_802416F0) = SCRIPT({
    group 0;
    loop 20 {
        GetCurrentPartner(SI_VAR(10));
        if (SI_VAR(10) != 0) {
            SI_VAR(8) = -1;
            return;
        }
        func_80240000_A9ED40(SI_VAR(9));
        if (SI_VAR(0) == 0) {
            SI_VAR(8) = -1;
            return;
        } else {
            SetPlayerActionState(20);
        }
        sleep 1;
    }
    GetCurrentPartner(SI_VAR(10));
    if (SI_VAR(10) != 0) {
        SI_VAR(8) = -1;
        return;
    }
    DisablePlayerInput(1);
    spawn {
        ShakeCam(0, 0, 100, 0.6005859375);
    }
    spawn {
        if (SI_VAR(6) >= SI_VAR(7)) {
            InterpPlayerYaw(270, 0);
        } else {
            InterpPlayerYaw(90, 0);
        }
        SetPlayerActionState(20);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(2) = SI_VAR(7);
        SI_VAR(2) -= SI_VAR(6);
        SI_VAR(1) += SI_VAR(2);
        MakeLerp(SI_VAR(0), SI_VAR(1), 100, 0);
        loop {
            SetPlayerActionState(20);
            UpdateLerp();
            func_802400BC_A9EDFC();
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetPlayerActionState(0);
        DisablePlayerInput(0);
    }
    MakeLerp(SI_VAR(6), SI_VAR(7), 100, 0);
    PlaySoundAtCollider(SI_VAR(9), 0x80000010, 0);
    loop {
        UpdateLerp();
        TranslateGroup(40, SI_VAR(0), 0, 0);
        UpdateColliderTransform(24);
        UpdateColliderTransform(22);
        UpdateColliderTransform(23);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(0x80000010);
});

Script N(script_80241A80) = SCRIPT({
    if (SI_SAVE_VAR(303) == 1) {
        return;
    }
    if (SI_SAVE_VAR(303) == 0) {
        SI_VAR(6) = 0;
        SI_VAR(7) = 50;
        SI_VAR(8) = 1;
    } else {
        SI_VAR(6) = 50;
        SI_VAR(7) = 100;
        SI_VAR(8) = 1;
    }
    SI_VAR(9) = 22;
    await N(script_802416F0);
    if (SI_VAR(8) != -1) {
        SI_SAVE_VAR(303) = SI_VAR(8);
    }
    if (SI_SAVE_VAR(303) == 1) {
        ModifyColliderFlags(0, 40, 0x7FFFFE00);
    }
});

Script N(script_80241BA4) = SCRIPT({
    if (SI_SAVE_VAR(303) == 0) {
        return;
    }
    if (SI_SAVE_VAR(303) == 1) {
        SI_VAR(6) = 50;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
    } else {
        SI_VAR(6) = 100;
        SI_VAR(7) = 50;
        SI_VAR(8) = 0;
    }
    SI_VAR(9) = 23;
    await N(script_802416F0);
    if (SI_VAR(8) != -1) {
        SI_SAVE_VAR(303) = SI_VAR(8);
    }
    if (SI_SAVE_VAR(303) == 0) {
        ModifyColliderFlags(1, 40, 0x7FFFFE00);
    }
});

Script N(script_80241CC8) = SCRIPT({
    match SI_SAVE_VAR(303) {
        == 0 {}
        == 1 {
            TranslateGroup(40, 50, 0, 0);
            ModifyColliderFlags(0, 40, 0x7FFFFE00);
        }
        == 2 {
            TranslateGroup(40, 100, 0, 0);
        }
    }
    ParentColliderToModel(24, 39);
    ParentColliderToModel(22, 39);
    ParentColliderToModel(23, 39);
    bind N(script_80241A80) to TriggerFlag_WALL_PUSH 22;
    bind N(script_80241BA4) to TriggerFlag_WALL_PUSH 23;
});

s32 pad_001DD4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241DE0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80241EB0) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 120.0f,
    .unk_10 = 20.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x5A,
    .unk_20 = 0x3,
    .chaseRadius = 140.0f,
    .unk_28 = 20.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241EE0) = SCRIPT({
    SetSelfVar(0, 70);
    SetSelfVar(1, 3);
    SetSelfVar(2, 3);
    SetSelfVar(3, 6);
    func_80241064_A9FDA4(N(aISettings_80241EB0));
});

NpcSettings N(npcSettings_80241F50) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241EE0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80241F7C) = {
    .moveSpeed = 5.4f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 13.0f,
    .unk_10 = 1.4f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241FAC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 20);
    func_802406CC_A9F40C(N(aISettings_80241F7C));
});

Script N(script_NpcAI_80242008) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80242018) = {
    SI_CMD(ScriptOpcode_CALL, func_80241384_AA00C4),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80242008)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80240C08_A9F948),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 4),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 0, 0xFFFFFC18, 0),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, 0x800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241FAC)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_802421E0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xC,
    .radius = 0xC,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241FAC),
    .onHit = &N(script_80242018),
    .aux = NULL,
    .onDefeat = &N(script_80241DE0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_8024220C)[] = {
    0x005A000D, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242214)[] = {
    {
        .id = 20,
        .settings = &N(npcSettings_80241F50),
        .pos = { 100.0, 0.0, 120.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 } },
        .movement = { 0x00000064, 0x00000000, 0x00000078, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000064, 0x00000000, 0x00000078, 0x000000C8 },
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
    },
    {
        .id = 21,
        .settings = &N(npcSettings_802421E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024220C),
    },
    {
        .id = 22,
        .settings = &N(npcSettings_802421E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024220C),
    },
    {
        .id = 23,
        .settings = &N(npcSettings_802421E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024220C),
    },
    {
        .id = 24,
        .settings = &N(npcSettings_802421E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024220C),
    },
    {
        .id = 25,
        .settings = &N(npcSettings_802421E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024220C),
    },
    {
        .id = 26,
        .settings = &N(npcSettings_802421E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D, 0x005A000D,
        },
        .extraAnimations = N(extraAnimationList_8024220C),
    },
};

NpcGroupList N(npcGroupList_80242FA4) = {
    NPC_GROUP(N(npcGroup_80242214), 0x2214000D),
    {},
};

s32 pad_002FBC[] = {
    0x00000000,
};

// rodata: D_80242FC0_AA1D00

// rodata: D_80242FC8_AA1D08

// rodata: D_80242FD0_AA1D10

s32 pad_002FD8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242FE0_AA1D20

// rodata: D_80242FE8_AA1D28

// rodata: D_80242FF0_AA1D30

// rodata: D_80242FF8_AA1D38

// rodata: D_80243000_AA1D40

// rodata: jtbl_80243008_AA1D48

s32 pad_003198[] = {
    0x00000000, 0x00000000,
};
