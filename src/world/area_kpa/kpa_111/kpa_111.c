#include "kpa_111.h"

s32 pad_0013BC[1];
Script N(script_80241420);
s32 pad_001488[2];
Script N(script_ExitDoubleDoor_80241490);
Script N(script_ExitWalk_80241534);
Script N(script_80241590);
Script N(script_EnterWalk_802415D8);
Script N(main);
s32 pad_001758[2];
Script N(script_80241760);
Script N(script_80241AF0);
Script N(script_80241BE4);
Script N(script_80241CD8);
Script N(script_80241DC0);
Script N(script_NpcAI_80241EC0);
Script N(script_NpcAI_80241F8C);
Script N(script_NpcAI_80241FFC);
Script N(script_8024200C);
StaticNpc N(npcGroup_80242200)[4];
StaticNpc N(npcGroup_802429C0)[4];
NpcGroupList N(npcGroupList_80243180);
s32 pad_0031A4[3];
Script N(script_MakeEntities);
const char D_80243230_A9C7C0[9]; // "kpa_130"
const char D_80243238_A9C7C8[9]; // "kpa_112"
s32 pad_0033F8[2];

// text: func_80240000_A99590

// text: func_802400BC_A9964C

// text: func_80240170_A99700

// text: func_80240360_A998F0

// text: func_802404A4_A99A34

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_802406CC_A99C5C

// text: func_80240C08_A9A198

// text: func_80241064_A9A5F4

// text: func_80241384_A9A914

s32 pad_0013BC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -208.0f, 0.0f, 105.0f, 90.0f },
    { 300.0f, 0.0f, 25.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19017F,
};

Script N(script_80241420) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(6);
    }
});

s32 pad_001488[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80241490) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 32;
    SI_VAR(2) = 50;
    SI_VAR(3) = 48;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243230_A9C7C0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241534) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80243238_A9C7C8, 0);
    sleep 100;
});

Script N(script_80241590) = SCRIPT({
    bind N(script_ExitDoubleDoor_80241490) to TriggerFlag_WALL_INTERACT 32;
    bind N(script_ExitWalk_80241534) to 0x80000 34;
});

Script N(script_EnterWalk_802415D8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(2) = 50;
            SI_VAR(3) = 48;
            spawn EnterDoubleDoor;
            spawn N(script_80241590);
        }
        == 1 {
            SI_VAR(0) = N(script_80241590);
            spawn EnterWalk;
        }
    }
    sleep 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243180));
    await N(script_MakeEntities);
    spawn N(script_80241CD8);
    spawn N(script_80241420);
    spawn N(script_EnterWalk_802415D8);
});

s32 pad_001758[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241760) = SCRIPT({
    group 0;
    loop 20 {
        GetCurrentPartner(SI_VAR(10));
        if (SI_VAR(10) != 0) {
            SI_VAR(8) = -1;
            return;
        }
        func_80240000_A99590(SI_VAR(9));
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
            func_802400BC_A9964C();
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
        TranslateGroup(39, SI_VAR(0), 0, 0);
        UpdateColliderTransform(27);
        UpdateColliderTransform(25);
        UpdateColliderTransform(26);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(0x80000010);
});

Script N(script_80241AF0) = SCRIPT({
    if (SI_SAVE_VAR(301) == 2) {
        return;
    }
    if (SI_SAVE_VAR(301) == 0) {
        SI_VAR(6) = 0;
        SI_VAR(7) = 50;
        SI_VAR(8) = 2;
    } else {
        SI_VAR(6) = 0xFFFFFFCE;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
    }
    SI_VAR(9) = 25;
    await N(script_80241760);
    if (SI_VAR(8) != -1) {
        SI_SAVE_VAR(301) = SI_VAR(8);
    }
});

Script N(script_80241BE4) = SCRIPT({
    if (SI_SAVE_VAR(301) == 1) {
        return;
    }
    if (SI_SAVE_VAR(301) == 0) {
        SI_VAR(6) = 0;
        SI_VAR(7) = 0xFFFFFFCE;
        SI_VAR(8) = 1;
    } else {
        SI_VAR(6) = 50;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
    }
    SI_VAR(9) = 26;
    await N(script_80241760);
    if (SI_VAR(8) != -1) {
        SI_SAVE_VAR(301) = SI_VAR(8);
    }
});

Script N(script_80241CD8) = SCRIPT({
    match SI_SAVE_VAR(301) {
        == 1 {
            TranslateGroup(39, 0xFFFFFFCE, 0, 0);
        }
        == 2 {
            TranslateGroup(39, 50, 0, 0);
        }
    }
    ParentColliderToModel(27, 38);
    ParentColliderToModel(25, 38);
    ParentColliderToModel(26, 38);
    bind N(script_80241AF0) to TriggerFlag_WALL_PUSH 25;
    bind N(script_80241BE4) to TriggerFlag_WALL_PUSH 26;
});

Script N(script_80241DC0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            func_80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80241E90) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x14,
    .waitTime = 0x3,
    .alertRadius = 120.0f,
    .unk_10 = 120.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 1.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 150.0f,
    .unk_28 = 150.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241EC0) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 15);
    SetSelfVar(2, 10);
    SetSelfVar(3, 2);
    func_80241064_A9A5F4(N(aISettings_80241E90));
});

NpcSettings N(npcSettings_80241F30) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241EC0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1E,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80241F5C) = {
    .moveSpeed = 7.5f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 1.1f,
    .unk_10 = 0.18f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80241F8C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 15);
    SetSelfVar(3, 15);
    func_802406CC_A99C5C(N(aISettings_80241F5C));
});

Script N(script_NpcAI_80241FFC) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_8024200C) = {
    SI_CMD(ScriptOpcode_CALL, func_80241384_A9A914),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241FFC)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80240C08_A9A198),
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
            SI_CMD(ScriptOpcode_CALL, func_800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80241F8C)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_802421D4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xC,
    .radius = 0xC,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241F8C),
    .onHit = &N(script_8024200C),
    .aux = NULL,
    .onDefeat = &N(script_80241DC0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80242200)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241F30),
        .pos = { -10.0, 0.0, 100.0 },
        .flags = 0x00000800,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFFF6, 0x00000000, 0x00000064, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFF6, 0x00000000, 0x00000064, 0x000000B4, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00530002, 0x00530003, 0x00530004, 0x00530004, 0x00530002, 0x00530002, 0x00530007, 0x00530007, 0x00530005, 0x00530006, 0x00530002, 0x00530002, 0x00530002, 0x00530002, 0x00530002, 0x00530002,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802421D4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802421D4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802421D4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
};

StaticNpc N(npcGroup_802429C0)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80241F30),
        .pos = { 200.0, 0.0, 140.0 },
        .flags = 0x00000800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000C8, 0x00000000, 0x0000008C, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000C8, 0x00000000, 0x0000008C, 0x000000B4, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00530002, 0x00530003, 0x00530004, 0x00530004, 0x00530002, 0x00530002, 0x00530007, 0x00530007, 0x00530005, 0x00530006, 0x00530002, 0x00530002, 0x00530002, 0x00530002, 0x00530002, 0x00530002,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802421D4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802421D4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_802421D4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000, 0x00540000,
        },
    },
};

NpcGroupList N(npcGroupList_80243180) = {
    NPC_GROUP(N(npcGroup_80242200), 0x2207000D),
    NPC_GROUP(N(npcGroup_802429C0), 0x220C000D),
    {},
};

s32 pad_0031A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA564, 205, 60, 110, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1581));
    MakeEntity(D_802EA588, 5, 60, 110, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1582));
});

// rodata: D_80243230_A9C7C0

// rodata: D_80243238_A9C7C8

// rodata: D_80243240_A9C7D0

// rodata: D_80243248_A9C7D8

// rodata: D_80243250_A9C7E0

// rodata: D_80243258_A9C7E8

// rodata: D_80243260_A9C7F0

// rodata: jtbl_80243268_A9C7F8

s32 pad_0033F8[] = {
    0x00000000, 0x00000000,
};
