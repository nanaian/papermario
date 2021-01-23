#include "dgb_03.h"

s32 pad_000244[3];
Script N(script_80242870);
s32 pad_002908[2];
Script N(script_ExitDoubleDoor_80242910);
Script N(script_ExitDoubleDoor_802429C4);
Script N(script_ExitDoubleDoor_80242A78);
Script N(script_ExitWalk_80242B2C);
Script N(script_ExitSingleDoor_80242B88);
Script N(script_ExitDoubleDoor_80242C3C);
Script N(script_80242CF0);
Script N(script_EnterDoubleDoor_80242D1C);
s32 N(itemList_80242F28)[2];
Script N(main);
s32 pad_0030D8[2];
Script N(script_802430E0);
Script N(script_80243470);
Script N(script_8024353C);
Script N(script_80243608);
s32 pad_003738[2];
Script N(script_80243740);
Script N(script_802438A8);
Script N(script_MakeEntities);
s32 pad_003964[3];
Script N(script_80243970);
s32 unk_missing_80243A2C[10];
s32 N(extraAnimationList_80243A54)[2];
Script N(script_NpcAI_80243A8C);
Script N(script_NpcAI_80243B58);
Script N(script_NpcAI_80243C24);
Script N(script_NpcAI_80243CC0);
Script N(script_Init_80243D94);
StaticNpc N(npcGroup_80243DE8)[2];
StaticNpc N(npcGroup_802441C8)[2];
StaticNpc N(npcGroup_802445A8)[2];
NpcGroupList N(npcGroupList_80244988);
s32 pad_0049B8[2];
const char D_802449C0_C35EA0[8]; // "dgb_02"
const char D_802449C8_C35EA8[8]; // "dgb_09"
const char D_802449D0_C35EB0[8]; // "dgb_04"
const char D_802449D8_C35EB8[8]; // "dgb_13"
const char D_802449E0_C35EC0[8]; // "dgb_05"
const char D_802449E8_C35EC8[8]; // "dgb_14"

// text: func_80240000_C314E0

// text: func_802400BC_C3159C

// text: func_80240170_C31650

// text: func_802401A4_C31684

s32 pad_000244[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240458_C31938

// text: func_8024060C_C31AEC

// text: func_8024086C_C31D4C

// text: func_80240B20_C32000

// text: func_80240C78_C32158

// text: N(UnkNpcAIFunc1)

// text: func_80240FE0_C324C0

// text: func_8024119C_C3267C

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024133C_C3281C

// text: func_8024146C_C3294C

// text: N(UnkNpcDurationFlagFunc)

// text: func_802415F4_C32AD4

// text: func_802416B4_C32B94

// text: func_802419B0_C32E90

// text: func_80241C7C_C3315C

// text: func_80241D04_C331E4

// text: func_80241FBC_C3349C

// text: func_80242020_C33500

// text: func_802420C8_C335A8

// text: func_80242200_C336E0

// text: func_802422AC_C3378C

// text: func_80242424_C33904

// text: func_80242480_C33960

EntryList N(entryList) = {
    { -343.0f, 0.0f, 80.0f, 90.0f },
    { 343.0f, 0.0f, 80.0f, 270.0f },
    { -220.0f, 0.0f, -170.0f, 180.0f },
    { -343.0f, 210.0f, 80.0f, 90.0f },
    { 343.0f, 210.0f, 80.0f, 270.0f },
    { -220.0f, 210.0f, -170.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C3,
};

Script N(script_80242870) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_002908[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80242910) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 25;
    SI_VAR(2) = 36;
    SI_VAR(3) = 34;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802449C0_C35EA0, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802429C4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 4;
    SI_VAR(1) = 21;
    SI_VAR(2) = 46;
    SI_VAR(3) = 44;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802449C8_C35EA8, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80242A78) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 13;
    SI_VAR(2) = 29;
    SI_VAR(3) = 31;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802449D0_C35EB0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80242B2C) = SCRIPT({
    group 27;
    UseExitHeading(26, 2);
    spawn ExitWalk;
    GotoMap(D_802449D8_C35EB8, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_80242B88) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 33;
    SI_VAR(2) = 49;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802449E0_C35EC0, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80242C3C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 3;
    SI_VAR(1) = 17;
    SI_VAR(2) = 39;
    SI_VAR(3) = 41;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802449E8_C35EC8, 0);
    sleep 100;
});

Script N(script_80242CF0) = SCRIPT({
    bind N(script_ExitWalk_80242B2C) to 0x80000 35;
});

Script N(script_EnterDoubleDoor_80242D1C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            SI_VAR(2) = 29;
            SI_VAR(3) = 31;
            await EnterDoubleDoor;
            spawn N(script_80242CF0);
        }
        == 1 {
            UseDoorSounds(3);
            SI_VAR(2) = 36;
            SI_VAR(3) = 34;
            await EnterDoubleDoor;
            spawn N(script_80242CF0);
        }
        == 2 {
            UseDoorSounds(0);
            SI_VAR(2) = 49;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
            spawn N(script_80242CF0);
        }
        == 3 {
            UseDoorSounds(3);
            SI_VAR(2) = 39;
            SI_VAR(3) = 41;
            await EnterDoubleDoor;
            spawn N(script_80242CF0);
        }
        == 4 {
            UseDoorSounds(3);
            SI_VAR(2) = 46;
            SI_VAR(3) = 44;
            await EnterDoubleDoor;
            spawn N(script_80242CF0);
        }
        == 5 {
            SI_VAR(0) = N(script_80242CF0);
            spawn EnterWalkShort;
            sleep 1;
        }
    }
});

s32 N(itemList_80242F28)[] = {
    0x00000013, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(main) = {
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(425), 15),
    SI_CMD(ScriptOpcode_CALL, SetSpriteShading, -1),
    SI_CMD(ScriptOpcode_CALL, SetCamPerspective, 0, 3, 25, 16, 4096),
    SI_CMD(ScriptOpcode_CALL, SetCamBGColor, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamEnabled, 0, 1),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFF1),
        SI_CMD(ScriptOpcode_CALL, MakeNpcs, 1, N(npcGroupList_80244988)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_MakeEntities)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243608)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80242910), TriggerFlag_WALL_INTERACT, 25, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_802429C4), TriggerFlag_WALL_INTERACT, 21, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80242A78), TriggerFlag_WALL_INTERACT, 13, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitSingleDoor_80242B88), TriggerFlag_WALL_INTERACT, 33, 1, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1043), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243740), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80242F28), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80242C3C), TriggerFlag_WALL_INTERACT, 17, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80242870)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_EnterDoubleDoor_80242D1C)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_0030D8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802430E0) = SCRIPT({
    group 0;
    loop 20 {
        GetCurrentPartner(SI_VAR(10));
        if (SI_VAR(10) != 0) {
            SI_VAR(8) = -1;
            return;
        }
        func_80240000_C314E0(SI_VAR(9));
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
            func_802400BC_C3159C();
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetPlayerActionState(0);
        DisablePlayerInput(0);
    }
    MakeLerp(SI_VAR(6), SI_VAR(7), 100, 0);
    PlaySoundAtCollider(27, 0x80000010, 0);
    loop {
        UpdateLerp();
        TranslateModel(51, SI_VAR(0), 0, 0);
        UpdateColliderTransform(27);
        UpdateColliderTransform(28);
        UpdateColliderTransform(29);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(0x80000010);
});

Script N(script_80243470) = SCRIPT({
    if (SI_SAVE_FLAG(1044) != 0) {
        goto 90;
    }
    SI_VAR(6) = 0;
    SI_VAR(7) = 48;
    SI_VAR(8) = 0;
    SI_VAR(9) = 27;
    await N(script_802430E0);
90:
    if (SI_VAR(8) != -1) {
        SI_SAVE_FLAG(1045) = 0;
        SI_SAVE_FLAG(1044) = 1;
        unbind;
    }
});

Script N(script_8024353C) = SCRIPT({
    if (SI_SAVE_FLAG(1044) != 0) {
        goto 90;
    }
    SI_VAR(6) = 0;
    SI_VAR(7) = 0xFFFFFFD0;
    SI_VAR(8) = 0;
    SI_VAR(9) = 28;
    await N(script_802430E0);
90:
    if (SI_VAR(8) != -1) {
        SI_SAVE_FLAG(1045) = 1;
        SI_SAVE_FLAG(1044) = 1;
        unbind;
    }
});

Script N(script_80243608) = SCRIPT({
    ParentColliderToModel(27, 51);
    ParentColliderToModel(28, 51);
    ParentColliderToModel(29, 51);
    if (SI_SAVE_FLAG(1044) == 0) {
        bind N(script_80243470) to TriggerFlag_WALL_PUSH 27;
        bind N(script_8024353C) to TriggerFlag_WALL_PUSH 28;
    } else {
        if (SI_SAVE_FLAG(1045) == 0) {
            SI_VAR(0) = 48;
        } else {
            SI_VAR(0) = 0xFFFFFFD0;
        }
        TranslateModel(51, SI_VAR(0), 0, 0);
        UpdateColliderTransform(27);
        UpdateColliderTransform(28);
        UpdateColliderTransform(29);
    }
});

s32 pad_003738[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243740) = SCRIPT({
    group 0;
    suspend group 1;
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        resume group 1;
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        resume group 1;
        return;
    }
    FindKeyItem(19, SI_VAR(0));
    RemoveKeyItemAt(SI_VAR(0));
    0x802D6954();
    SI_SAVE_FLAG(1043) = 1;
    func_802401A4_C31684(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240170_C31650();
    resume group 1;
    unbind;
});

Script N(script_802438A8) = SCRIPT({
    bind N(script_ExitDoubleDoor_80242C3C) to TriggerFlag_WALL_INTERACT 17;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1043) == 0) {
        MakeEntity(0x802BCD68, 0xFFFFFE9D, 218, 75, 80, 0x80000000);
        AssignScript(N(script_802438A8));
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    MakeItemEntity(348, 0, 75, 100, 17, SI_SAVE_FLAG(1042));
});

s32 pad_003964[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243970) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
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

s32 unk_missing_80243A2C[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80243A54)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_80243A5C) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 85.0f,
    .unk_10 = 65.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xC,
    .chaseRadius = 110.0f,
    .unk_28 = 90.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_80243A8C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    func_8024086C_C31D4C(N(aISettings_80243A5C));
});

NpcSettings N(npcSettings_80243AFC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243A8C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80243B28) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x14,
    .waitTime = 0x1E,
    .alertRadius = 85.0f,
    .unk_10 = 65.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xC,
    .chaseRadius = 110.0f,
    .unk_28 = 90.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_80243B58) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    func_802419B0_C32E90(N(aISettings_80243B28));
});

NpcSettings N(npcSettings_80243BC8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243B58),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80243BF4) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0f,
    .unk_28 = 160.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243C24) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 10);
    SetSelfVar(2, 14);
    SetSelfVar(3, 18);
    func_80242480_C33960(N(aISettings_80243BF4));
});

NpcSettings N(npcSettings_80243C94) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243C24),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_NpcAI_80243CC0) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_8024060C_C31AEC();
});

NpcSettings N(npcSettings_80243D68) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243CC0),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80243970),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0x8,
};

Script N(script_Init_80243D94) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SetNpcPos(-1, 0xFFFFFEB6, 210, 0xFFFFFFEC);
    }
});

StaticNpc N(npcGroup_80243DE8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243AFC),
        .pos = { 180.0, 0.0, -122.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000B4, 0x00000000, 0xFFFFFF86, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x0000004B, 0x00000163, 0x000000FF, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80243D68),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80243A54),
    },
};

StaticNpc N(npcGroup_802441C8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243BC8),
        .pos = { -272.0, 0.0, -135.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000002, 0xFFFFFEF0, 0x00000000, 0xFFFFFF79, 0xFFFFFF55, 0x00000000, 0xFFFFFF79, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x0000004B, 0x00000163, 0x000000FF, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80243D68),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80243A54),
    },
};

StaticNpc N(npcGroup_802445A8)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80243C94),
        .pos = { -326.0, 210.0, 80.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80243D94),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFEBA, 0x000000D2, 0x00000050, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x0000004B, 0x00000163, 0x000000FF, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80243D68),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80243A54),
    },
};

NpcGroupList N(npcGroupList_80244988) = {
    NPC_GROUP(N(npcGroup_80243DE8), 0x0F010002),
    NPC_GROUP(N(npcGroup_802441C8), 0x0F010002),
    NPC_GROUP(N(npcGroup_802445A8), 0x0F030001),
    {},
};

s32 pad_0049B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802449C0_C35EA0

// rodata: D_802449C8_C35EA8

// rodata: D_802449D0_C35EB0

// rodata: D_802449D8_C35EB8

// rodata: D_802449E0_C35EC0

// rodata: D_802449E8_C35EC8

// rodata: D_802449F0_C35ED0

// rodata: jtbl_802449F8_C35ED8

// rodata: D_80244B88_C36068

// rodata: D_80244B90_C36070

// rodata: jtbl_80244B98_C36078

// rodata: jtbl_80244D28_C36208

// rodata: D_80244EB8_C36398

// rodata: jtbl_80244EC0_C363A0
