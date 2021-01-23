#include "trd_02.h"

s32 pad_0000D4[3];
s32 pad_001A48[2];
Script N(script_80241AE0);
s32 pad_001B1C[1];
Script N(script_ExitDoubleDoor_80241B20);
Script N(script_ExitDoubleDoor_80241BC4);
Script N(script_ExitDoubleDoor_80241C68);
Script N(script_ExitDoubleDoor_80241D0C);
Script N(script_ExitWalk_80241DB0);
Script N(script_80241E0C);
Script N(script_EnterWalk_80241E38);
Script N(script_80241FC8);
Script N(script_8024241C);
s32 N(itemList_8024252C)[2];
Script N(main);
s32 pad_002888[2];
Script N(script_80242890);
Script N(script_802429E4);
Script N(script_MakeEntities);
s32 pad_002AC8[2];
Script N(script_NpcAI_80242B00);
s32 N(unk_80242B4C)[12];
Script N(script_80242B7C);
s32 unk_missing_80242BEC[11];
Script N(script_NpcAI_80242C48);
StaticNpc N(npcGroup_80242CD0)[1];
StaticNpc N(npcGroup_80242EC0)[1];
StaticNpc N(npcGroup_802430B0)[1];
NpcGroupList N(npcGroupList_802432A0);
const char D_802432D0_9A42B0[8]; // "trd_01"
const char D_802432D8_9A42B8[8]; // "trd_03"
s32 pad_00333C[1];

// text: func_80240000_9A0FE0

// text: func_80240034_9A1014

s32 pad_0000D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024015C_9A113C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240474_9A1454

// text: func_802408B4_9A1894

// text: func_80240A0C_9A19EC

// text: N(UnkNpcAIFunc1)

// text: func_80240D74_9A1D54

// text: func_80240F30_9A1F10

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_802410D0_9A20B0

// text: func_80241200_9A21E0

// text: N(UnkNpcDurationFlagFunc)

// text: func_80241388_9A2368

// text: func_80241448_9A2428

// text: func_80241744_9A2724

s32 pad_001A48[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -257.0f, 0.0f, 80.0f, 90.0f },
    { 257.0f, 0.0f, 80.0f, 270.0f },
    { -257.0f, 187.0f, -55.0f, 90.0f },
    { 257.0f, 187.0f, -55.0f, 270.0f },
    { 235.0f, 50.0f, -70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190050,
};

Script N(script_80241AE0) = SCRIPT({
    SetMusicTrack(0, 20, 0, 8);
    UseDoorSounds(1);
});

s32 pad_001B1C[] = {
    0x00000000,
};

Script N(script_ExitDoubleDoor_80241B20) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 25;
    SI_VAR(3) = 27;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802432D0_9A42B0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241BC4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 31;
    SI_VAR(3) = 29;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802432D8_9A42B8, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241C68) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 17;
    SI_VAR(2) = 37;
    SI_VAR(3) = 39;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802432D0_9A42B0, 2);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241D0C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 12;
    SI_VAR(2) = 33;
    SI_VAR(3) = 35;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802432D8_9A42B8, 2);
    sleep 100;
});

Script N(script_ExitWalk_80241DB0) = SCRIPT({
    group 27;
    UseExitHeading(40, 4);
    spawn ExitWalk;
    GotoMap(D_802432D8_9A42B8, 4);
    sleep 100;
});

Script N(script_80241E0C) = SCRIPT({
    bind N(script_ExitWalk_80241DB0) to 0x80000 21;
});

Script N(script_EnterWalk_80241E38) = SCRIPT({
    group 0;
    suspend group 1;
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 25;
            SI_VAR(3) = 27;
            await EnterDoubleDoor;
            spawn N(script_80241E0C);
        }
        == 1 {
            SI_VAR(2) = 31;
            SI_VAR(3) = 29;
            await EnterDoubleDoor;
            spawn N(script_80241E0C);
        }
        == 2 {
            SI_VAR(2) = 37;
            SI_VAR(3) = 39;
            await EnterDoubleDoor;
            spawn N(script_80241E0C);
        }
        == 3 {
            SI_VAR(2) = 33;
            SI_VAR(3) = 35;
            await EnterDoubleDoor;
            spawn N(script_80241E0C);
        }
        == 4 {
            SI_VAR(0) = N(script_80241E0C);
            spawn EnterWalk;
        }
    }
    resume group 1;
});

Script N(script_80241FC8) = SCRIPT({
    group 0;
    0x802D5830(0);
    suspend group 1;
    DisablePlayerInput(1);
    sleep 30;
    SetGroupEnabled(10, 0);
    PlaySound(0x80000004);
    spawn {
        ShakeCam(0, 0, 10, 0.7001953125);
        ShakeCam(0, 0, 320, 1.0);
        ShakeCam(0, 0, 10, 0.7001953125);
        ShakeCam(0, 0, 10, 0.400390625);
    }
    sleep 20;
    spawn {
        loop 5 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 150;
            PlayEffect(21, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
            RandInt(20, SI_VAR(0));
            SI_VAR(0) += 20;
            sleep SI_VAR(0);
        }
    }
    spawn {
        loop 7 {
            GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
            RandInt(200, SI_VAR(4));
            SI_VAR(4) -= 100;
            RandInt(200, SI_VAR(5));
            SI_VAR(5) -= 100;
            SI_VAR(1) += SI_VAR(4);
            SI_VAR(2) += 200;
            SI_VAR(3) += SI_VAR(5);
            PlayEffect(22, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3), 187, 0, 0, 0, 0, 0, 0, 0, 0);
            RandInt(30, SI_VAR(0));
            SI_VAR(0) += 30;
            sleep SI_VAR(0);
        }
    }
    sleep 20;
    MakeLerp(187, 0, 300, 10);
0:
    UpdateLerp();
    TranslateModel(22, 0, SI_VAR(0), 0);
    TranslateModel(21, 0, SI_VAR(0), 0);
    TranslateModel(23, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    UpdateColliderTransform(30);
    UpdateColliderTransform(31);
    UpdateColliderTransform(32);
    StopSound(0x80000004);
    PlaySound(37);
    SI_SAVE_VAR(0) = 0xFFFFFFAF;
    DisablePlayerInput(0);
    0x802D5830(0);
    resume group 1;
    unbind;
});

Vec4f N(triggerCoord_8024240C) =  { 255.0, 50.0, -80.0, 0.0 };

Script N(script_8024241C) = SCRIPT({
    group 0;
    suspend group 1;
    PlayEffect(66, 0, 17, 11, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(15, 1);
    loop 10 {
        SetGroupEnabled(19, 1);
        sleep 1;
        SetGroupEnabled(19, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 22, 0x7FFFFE00);
    SI_SAVE_FLAG(655) = 1;
    resume group 1;
    unbind;
});

s32 N(itemList_8024252C)[] = {
    0x00000010, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(main) = {
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(425), 7),
    SI_CMD(ScriptOpcode_CALL, SetSpriteShading, -1),
    SI_CMD(ScriptOpcode_CALL, SetCamPerspective, 0, 3, 25, 16, 4096),
    SI_CMD(ScriptOpcode_CALL, SetCamBGColor, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamLeadPlayer, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamEnabled, 0, 1),
    SI_CMD(ScriptOpcode_CALL, MakeNpcs, 1, N(npcGroupList_802432A0)),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_MakeEntities)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241B20), TriggerFlag_WALL_INTERACT, 2, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241BC4), TriggerFlag_WALL_INTERACT, 7, 1, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(651), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242890), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_8024252C), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241C68), TriggerFlag_WALL_INTERACT, 17, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241D0C), TriggerFlag_WALL_INTERACT, 12, 1, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(655), 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 15, 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024241C), TriggerFlag_BOMB, N(triggerCoord_8024240C), 1, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 19, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 22, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80241AE0)),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(2), 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 31, 22),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 30, 21),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 32, 23),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFAF),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 22, 0, 187, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 21, 0, 187, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 23, 0, 187, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 31),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 30),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 32),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241FC8), TriggerFlag_AREA_FLAG_SET, SI_AREA_FLAG(2), 1, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 31),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 30),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 32),
        SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 10, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SPAWN, N(script_EnterWalk_80241E38)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_002888[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242890) = SCRIPT({
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
    RemoveKeyItemAt(SI_VAR(1));
    0x802D6954();
    SI_SAVE_FLAG(651) = 1;
    func_80240034_9A1014(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240000_9A0FE0();
    resume group 1;
    unbind;
});

Script N(script_802429E4) = SCRIPT({
    bind N(script_ExitDoubleDoor_80241C68) to TriggerFlag_WALL_INTERACT 17;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(651) == 0) {
        MakeEntity(0x802BCD68, 0xFFFFFEF7, 195, 0xFFFFFFC9, 80, 0x80000000);
        AssignScript(N(script_802429E4));
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFAF) {
        MakeEntity(0x802E9BD4, 10, 187, 100, 0, 0x80000000);
        AssignAreaFlag(2);
    }
});

s32 pad_002AC8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242AD0) = {
    .moveSpeed = 1.5,
    .moveTime = 0x3C,
    .waitTime = 0xA,
    .alertRadius = 110.0,
    .unk_10 = 65.0,
    .unk_14 = 0x8,
    .chaseSpeed = 3.4000000953674316,
    .unk_1C = 0x78,
    .unk_20 = 0x2,
    .chaseRadius = 110.0,
    .unk_28 = 65.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242B00) = SCRIPT({
    DoBasicAI(N(aISettings_80242AD0));
});

NpcSettings N(npcSettings_80242B20) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242B00),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

s32 N(unk_80242B4C)[] = {
    0x3FC00000, 0x0000002D, 0x00000014, 0x428C0000, 0x42480000, 0x0000000A, 0x40F00000, 0x00000000,
    0x00000000, 0x42A00000, 0x42700000, 0x00000001,
};

Script N(script_80242B7C) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_80240474_9A1454(N(unk_80242B4C));
});

s32 unk_missing_80242BEC[] = {
    0x00000000, 0x00230018, 0x00000000, 0x00000000, N(script_80242B7C), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x00060000,
};

NpcAISettings N(aISettings_80242C18) = {
    .moveSpeed = 1.5,
    .moveTime = 0x19,
    .waitTime = 0x14,
    .alertRadius = 70.0,
    .unk_10 = 50.0,
    .unk_14 = 0xA,
    .chaseSpeed = 7.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0,
    .unk_28 = 60.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242C48) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    func_80241744_9A2724(N(aISettings_80242C18));
});

NpcSettings N(npcSettings_80242CA4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242C48),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80242CD0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242B20),
        .pos = { -70.0, 0.0, 80.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 5 }, { ItemId_FIRE_FLOWER, 5 } },
        .movement = { 0xFFFFFFBA, 0x00000000, 0x00000050, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000023, 0x000000FA, 0x000000AF, 0x00000001, 0x00000001 },
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
    },
};

StaticNpc N(npcGroup_80242EC0)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242B20),
        .pos = { 140.0, 0.0, 80.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 5 }, { ItemId_FIRE_FLOWER, 5 } },
        .movement = { 0x0000008C, 0x00000000, 0x00000050, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000023, 0x000000FA, 0x000000AF, 0x00000001, 0x00000001 },
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
    },
};

StaticNpc N(npcGroup_802430B0)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242CA4),
        .pos = { 50.0, 187.0, 183.0 },
        .flags = 0x00000C00,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0x00000002, 0x00000046, 0x000000BB, 0x000000B7, 0xFFFFFFEC, 0x000000BB, 0x000000B7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000014, 0x000000BB, 0x000000CF, 0x00000096, 0x00000050, 0x00000001, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

NpcGroupList N(npcGroupList_802432A0) = {
    NPC_GROUP(N(npcGroup_80242CD0), 0x0610000A),
    NPC_GROUP(N(npcGroup_80242EC0), 0x0610000A),
    NPC_GROUP(N(npcGroup_802430B0), 0x0607000D),
    {},
};

// rodata: D_802432D0_9A42B0

// rodata: D_802432D8_9A42B8

// rodata: D_802432E0_9A42C0

// rodata: jtbl_802432E8_9A42C8

s32 pad_00333C[] = {
    0x00000000,
};

// rodata: D_80243340_9A4320

// rodata: D_80243348_9A4328

// rodata: jtbl_80243350_9A4330

// rodata: jtbl_802434E0_9A44C0

