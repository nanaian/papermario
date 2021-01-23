#include "kpa_01.h"

s32 pad_000158[2];
s32 pad_000A48[2];
Script N(script_80240AB0);
s32 pad_000AFC[1];
Script N(script_80240B00);
Script N(script_ExitSingleDoor_80240B2C);
Script N(script_ExitWalk_80240BD0);
Script N(script_80240C2C);
Script N(script_EnterWalk_80240C74);
Script N(main);
s32 pad_000E04[3];
s32 N(unk_80240E10)[12];
Script N(script_80240E40);
s32 N(unk_80240EB0)[12];
Script N(script_80240EE0);
Script N(script_NpcAI_80240F80);
Script N(script_80240FF0);
s32 unk_missing_802410E4[33];
StaticNpc N(npcGroup_80241194)[1];
StaticNpc N(npcGroup_80241384)[1];
NpcGroupList N(npcGroupList_80241574);
s32 pad_001598[2];
Script N(script_MakeEntities);
s32 pad_0015E8[2];
const char D_802415F0_A48550[8]; // "kpa_14"
const char D_802415F8_A48558[8]; // "kpa_03"
s32 pad_00165C[1];

// text: func_80240000_A46F60

s32 pad_000158[] = {
    0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_802401DC_A4713C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802404F4_A47454

// text: func_80240934_A47894

// text: func_8024097C_A478DC

// text: func_802409D4_A47934

s32 pad_000A48[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 690.0f, -378.0f, 337.0f, 90.0f },
    { -511.0f, 149.0f, 57.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190168,
};

Script N(script_80240AB0) = SCRIPT({
    SetMusicTrack(0, 101, 0, 8);
    ClearAmbientSounds(250);
    UseDoorSounds(1);
});

s32 pad_000AFC[] = {
    0x00000000,
};

Script N(script_80240B00) = SCRIPT({
    spawn {
        func_80240000_A46F60();
    }
});

Script N(script_ExitSingleDoor_80240B2C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 8;
    SI_VAR(2) = 6;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802415F0_A48550, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240BD0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802415F8_A48558, 0);
    sleep 100;
});

Script N(script_80240C2C) = SCRIPT({
    bind N(script_ExitSingleDoor_80240B2C) to TriggerFlag_WALL_INTERACT 8;
    bind N(script_ExitWalk_80240BD0) to 0x80000 1;
});

Script N(script_EnterWalk_80240C74) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(1) = 8;
            SI_VAR(2) = 6;
            SI_VAR(3) = -1;
            spawn EnterSingleDoor;
            spawn N(script_80240C2C);
        }
        == 1 {
            SI_VAR(0) = N(script_80240C2C);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241574));
    await N(script_MakeEntities);
    spawn N(script_80240B00);
    spawn N(script_EnterWalk_80240C74);
    sleep 1;
    spawn N(script_80240AB0);
});

s32 pad_000E04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80240E10)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40900000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80240E40) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802404F4_A47454(N(unk_80240E10));
});

s32 N(unk_80240EB0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40E00000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80240EE0) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_802404F4_A47454(N(unk_80240EB0));
});

NpcAISettings N(aISettings_80240F50) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x14,
    .waitTime = 0x5,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 6.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240F80) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_802404F4_A47454(N(aISettings_80240F50));
});

Script N(script_80240FF0) = SCRIPT({
    func_80240934_A47894();
    SetNpcAnimation(-1, 0x33000F);
    func_8024097C_A478DC();
    func_80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_802409D4_A47934();
    func_80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802404F4_A47454(N(unk_80240E10));
});

s32 unk_missing_802410E4[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80240E40), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80240FF0),
    EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016,
    0x00000000, 0x00000000, N(script_80240EE0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000,
    0x00110000,
};

NpcSettings N(npcSettings_80241168) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240F80),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80241194)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241168),
        .pos = { 1740.0, -215.0, 60.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000006CC, 0xFFFFFF29, 0x0000003C, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x000006CC, 0xFFFFFF29, 0x0000003C, 0x0000012C },
        .animations = {
            0x00550004, 0x0055000C, 0x0055000E, 0x0055000E, 0x00550004, 0x00550004, 0x00550018, 0x00550018, 0x00550010, 0x00550016, 0x00550012, 0x00550004, 0x00550004, 0x00550004, 0x00550004, 0x00550004,
        },
    },
};

StaticNpc N(npcGroup_80241384)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241168),
        .pos = { 243.0, 5.0, 230.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000F3, 0x00000005, 0x000000E6, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000F3, 0x00000005, 0x000000E6, 0x0000012C },
        .animations = {
            0x00550004, 0x0055000C, 0x0055000E, 0x0055000E, 0x00550004, 0x00550004, 0x00550018, 0x00550018, 0x00550010, 0x00550016, 0x00550012, 0x00550004, 0x00550004, 0x00550004, 0x00550004, 0x00550004,
        },
    },
};

NpcGroupList N(npcGroupList_80241574) = {
    NPC_GROUP(N(npcGroup_80241194), 0x22000004),
    NPC_GROUP(N(npcGroup_80241384), 0x22010004),
    {},
};

s32 pad_001598[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA564, 220, 208, 0xFFFFFF83, 0, 144, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1545));
});

s32 pad_0015E8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802415F0_A48550

// rodata: D_802415F8_A48558

// rodata: D_80241600_A48560

// rodata: jtbl_80241608_A48568

s32 pad_00165C[] = {
    0x00000000,
};
