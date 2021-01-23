#include "kpa_03.h"

s32 pad_000158[2];
s32 pad_001E44[3];
Script N(script_80241F20);
s32 pad_001F5C[1];
Script N(script_80241F60);
Script N(script_ExitWalk_80241F8C);
Script N(script_ExitWalk_80241FE8);
Script N(script_80242044);
Script N(script_EnterWalk_8024208C);
Script N(main);
s32 pad_002188[2];
Script N(script_NpcAI_802421C0);
s32 N(unk_8024225C)[12];
Script N(script_8024228C);
s32 N(unk_802422FC)[12];
Script N(script_8024232C);
Script N(script_NpcAI_802423CC);
Script N(script_8024243C);
s32 unk_missing_80242530[33];
f32 N(floatTable_802425E0)[1];
f32 N(floatTable_802425E4)[1];
s32 N(byteTable_802425E8)[31];
Script N(script_NpcAI_80242694);
Script N(script_802426B4);
Script N(script_80242740);
s32 N(extraAnimationList_802427EC)[8];
Script N(script_8024280C);
Script N(script_80242844);
Script N(script_NpcAI_8024287C);
Script N(script_80242898);
Script N(script_802428EC);
s32 unk_missing_802429D4[11];
s32 N(extraAnimationList_80242A00)[6];
StaticNpc N(npcGroup_80242A18)[1];
StaticNpc N(npcGroup_80242C08)[1];
StaticNpc N(npcGroup_80242DF8)[1];
StaticNpc N(npcGroup_80242FE8)[1];
StaticNpc N(npcGroup_802431D8)[2];
NpcGroupList N(npcGroupList_802435B8);
Script N(script_80243600);
Script N(script_80243690);
Script N(script_MakeEntities);
s32 pad_003868[2];
const char D_80243870_A4BE30[8]; // "kpa_01"
const char D_80243878_A4BE38[8]; // "kpa_04"
s32 pad_0038DC[1];
s32 pad_003914[1];
s32 pad_003994[3];

// text: func_80240000_A485C0

s32 pad_000158[] = {
    0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_802401DC_A4879C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802404F4_A48AB4

// text: func_80240934_A48EF4

// text: func_8024097C_A48F3C

// text: func_802409D4_A48F94

// text: func_80240A48_A49008

// text: func_80240C18_A491D8

// text: func_80241128_A496E8

// text: func_8024119C_A4975C

// text: func_802412C8_A49888

// text: func_80241368_A49928

// text: func_802413CC_A4998C

// text: func_8024150C_A49ACC

// text: func_802416B0_A49C70

// text: func_802416EC_A49CAC

// text: func_802418AC_A49E6C

// text: func_80241918_A49ED8

// text: func_80241A4C_A4A00C

// text: func_80241AB4_A4A074

// text: func_80241D20_A4A2E0

// text: func_80241D6C_A4A32C

// text: func_80241DC4_A4A384

// text: func_80241DFC_A4A3BC

s32 pad_001E44[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80241E50_A4A410

EntryList N(entryList) = {
    { 1888.0f, -410.0f, -93.0f, 270.0f },
    { -1575.0f, -105.0f, -158.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190169,
};

Script N(script_80241F20) = SCRIPT({
    SetMusicTrack(0, 101, 0, 8);
    UseDoorSounds(1);
});

s32 pad_001F5C[] = {
    0x00000000,
};

Script N(script_80241F60) = SCRIPT({
    spawn {
        func_80240000_A485C0();
    }
});

Script N(script_ExitWalk_80241F8C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243870_A4BE30, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241FE8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243878_A4BE38, 0);
    sleep 100;
});

Script N(script_80242044) = SCRIPT({
    bind N(script_ExitWalk_80241F8C) to 0x80000 42;
    bind N(script_ExitWalk_80241FE8) to 0x80000 37;
});

Script N(script_EnterWalk_8024208C) = SCRIPT({
    SI_VAR(0) = N(script_80242044);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802435B8));
    await N(script_MakeEntities);
    spawn N(script_80241F60);
    spawn N(script_EnterWalk_8024208C);
    sleep 1;
    spawn N(script_80241F20);
});

s32 pad_002188[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242190) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 90.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 11.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 40.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802421C0) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 4);
    SetSelfVar(5, 10);
    SetSelfVar(7, 5);
    func_802404F4_A48AB4(N(aISettings_80242190));
});

NpcSettings N(npcSettings_80242230) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802421C0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

s32 N(unk_8024225C)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40900000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_8024228C) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802404F4_A48AB4(N(unk_8024225C));
});

s32 N(unk_802422FC)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40E00000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_8024232C) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_802404F4_A48AB4(N(unk_802422FC));
});

NpcAISettings N(aISettings_8024239C) = {
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

Script N(script_NpcAI_802423CC) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_802404F4_A48AB4(N(aISettings_8024239C));
});

Script N(script_8024243C) = SCRIPT({
    func_80240934_A48EF4();
    SetNpcAnimation(-1, 0x33000F);
    func_8024097C_A48F3C();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_802409D4_A48F94();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802404F4_A48AB4(N(unk_8024225C));
});

s32 unk_missing_80242530[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_8024228C), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_8024243C),
    0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016,
    0x00000000, 0x00000000, N(script_8024232C), 0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000,
    0x00110000,
};

NpcSettings N(npcSettings_802425B4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802423CC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

f32 N(floatTable_802425E0)[] = {
    0.8f,
};

f32 N(floatTable_802425E4)[] = {
    1.0f,
};

s32 N(byteTable_802425E8)[] = {
    0xC8000000, 0x3F19999A, 0x3F800000, 0xB4000000, 0x3F000000, 0x3F800000, 0xA0000000, 0x3ECCCCCD,
    0x3F800000, 0x8C000000, 0x3E99999A, 0x3F8CCCCD, 0x78000000, 0x3E4CCCCD, 0x3FA66666, 0x6E000000,
    0x3E19999A, 0x3FCCCCCD, 0x64000000, 0x3DF5C28F, 0x40000000, 0x5A000000, 0x3DE147AE, 0x40400000,
    0x50000000, 0x3DCCCCCD, 0x40800000, 0x46000000, 0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242664) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242694) = SCRIPT({
    func_80241AB4_A4A074(N(aISettings_80242664));
});

Script N(script_802426B4) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

Script N(script_80242740) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_80241D20_A4A2E0();
            DoNpcDefeat();
        }
        == 2 {
            func_80241D6C_A4A32C();
            0x80045900(0);
        }
    }
});

NpcSettings N(npcSettings_802427C0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242694),
    .onHit = &N(script_802426B4),
    .aux = NULL,
    .onDefeat = &N(script_80242740),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

s32 N(extraAnimationList_802427EC)[] = {
    0x00560000, 0x00560001, 0x00560001, 0x00560001, 0x00560002, 0x00560003, 0x00560004, 0xFFFFFFFF,
};

Script N(script_8024280C) = SCRIPT({
    SetSelfVar(1, 10);
    SetSelfVar(2, 40);
});

Script N(script_80242844) = SCRIPT({
    SetSelfVar(1, 0);
    SetSelfVar(2, 55);
});

Script N(script_NpcAI_8024287C) = SCRIPT({
    func_80240C18_A491D8();
});

Script N(script_80242898) = SCRIPT({
    func_80241DC4_A4A384();
    if (SI_VAR(0) == 0) {
        return;
    }
    func_80241DFC_A4A3BC();
    spawn EnemyNpcHit;
});

Script N(script_802428EC) = SCRIPT({
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

NpcSettings N(npcSettings_802429A8) = {
    .unk_00 = { 0, 0x56, 0, 0 },
    .height = 0,
    .radius = 0,
    .otherAI = &N(script_8024280C),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024287C),
    .onHit = &N(script_80242898),
    .aux = NULL,
    .onDefeat = &N(script_802428EC),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

s32 unk_missing_802429D4[] = {
    0x00570000, 0x00000000, N(script_80242844), 0x00000000, N(script_NpcAI_8024287C), N(script_80242898), 0x00000000, N(script_802428EC),
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(extraAnimationList_80242A00)[] = {
    0x00580001, 0x00580004, 0x00580006, 0x00580010, 0x0058000B, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242A18)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242230),
        .pos = { 1045.0, -255.0, -194.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000415, 0xFFFFFF01, 0xFFFFFF3E, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000415, 0xFFFFFF01, 0xFFFFFF3E, 0x0000012C },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80242A00),
    },
};

StaticNpc N(npcGroup_80242C08)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242230),
        .pos = { 950.0, -265.0, 0.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000003B6, 0xFFFFFEF7, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000003B6, 0xFFFFFEF7, 0x00000000, 0x0000012C },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80242A00),
    },
};

StaticNpc N(npcGroup_80242DF8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802425B4),
        .pos = { -940.0, 140.0, -145.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFC54, 0x0000008C, 0xFFFFFF6F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFC54, 0x0000008C, 0xFFFFFF6F, 0x0000012C },
        .animations = {
            0x00550004, 0x0055000C, 0x0055000E, 0x0055000E, 0x00550004, 0x00550004, 0x00550018, 0x00550018, 0x00550010, 0x00550016, 0x00550012, 0x00550004, 0x00550004, 0x00550004, 0x00550004, 0x00550004,
        },
    },
};

StaticNpc N(npcGroup_80242FE8)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802425B4),
        .pos = { 175.0, -130.0, 0.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000AF, 0xFFFFFF7E, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000AF, 0xFFFFFF7E, 0x00000000, 0x0000012C },
        .animations = {
            0x00550004, 0x0055000C, 0x0055000E, 0x0055000E, 0x00550004, 0x00550004, 0x00550018, 0x00550018, 0x00550010, 0x00550016, 0x00550012, 0x00550004, 0x00550004, 0x00550004, 0x00550004, 0x00550004,
        },
    },
};

StaticNpc N(npcGroup_802431D8)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802427C0),
        .pos = { -1000.0, -160.0, -150.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 }, { ItemId_THUNDER_RAGE, 5 }, { ItemId_STOP_WATCH, 5 } },
        .movement = { 0xFFFFFC18, 0xFFFFFF60, 0xFFFFFF6A, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFC18, 0xFFFFFF60, 0xFFFFFF6A, 0x000000C8 },
        .animations = {
            0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560004, 0x00560004, 0x00560002, 0x00560003, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001,
        },
        .extraAnimations = N(extraAnimationList_802427EC),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802429A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000,
        },
    },
};

NpcGroupList N(npcGroupList_802435B8) = {
    NPC_GROUP(N(npcGroup_80242A18), 0x22200004),
    NPC_GROUP(N(npcGroup_80242C08), 0x221F0004),
    NPC_GROUP(N(npcGroup_80242DF8), 0x22010004),
    NPC_GROUP(N(npcGroup_80242FE8), 0x22040004),
    NPC_GROUP(N(npcGroup_802431D8), 0x222F0004),
    {},
};

Script N(script_80243600) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= SI_VAR(3)) {
        SI_VAR(1) = SI_VAR(3);
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80243690) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(3) = 0xFFFFFEED;
        SI_VAR(10) = spawn N(script_80243600);
        SetPlayerJumpscale(0.7001953125);
        PlayerJump(0xFFFFFE05, 0xFFFFFEE0, 0xFFFFFF61, 20);
    } else {
        SI_VAR(3) = 0;
        SI_VAR(10) = spawn N(script_80243600);
        SetPlayerJumpscale(1.1005859375);
        PlayerJump(0xFFFFFE0C, 0, 0xFFFFFF6A, 40);
    }
    kill SI_VAR(10);
    SetPlayerActionState(0);
    sleep 4;
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    spawn {
        func_80241E50_A4A410();
    }
    MakeEntity(0x802EAA30, 0xFFFFFE70, 0xFFFFFED4, 0xFFFFFF6A, 0, 0x80000000);
    AssignScript(N(script_80243690));
    MakeEntity(0x802EA564, 620, 0xFFFFFFBF, 0xFFFFFF38, 0, 131, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1546));
});

s32 pad_003868[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243870_A4BE30

// rodata: D_80243878_A4BE38

// rodata: D_80243880_A4BE40

// rodata: jtbl_80243888_A4BE48

s32 pad_0038DC[] = {
    0x00000000,
};

// rodata: D_802438E0_A4BEA0

// rodata: D_802438E8_A4BEA8

// rodata: D_802438F0_A4BEB0

// rodata: D_802438F8_A4BEB8

// rodata: jtbl_80243900_A4BEC0

s32 pad_003914[] = {
    0x00000000,
};

// rodata: D_80243918_A4BED8

// rodata: D_80243920_A4BEE0

// rodata: D_80243928_A4BEE8

// rodata: jtbl_80243930_A4BEF0

s32 pad_003994[] = {
    0x00000000, 0x00000000, 0x00000000,
};
