#include "sam_07.h"

s32 pad_001FF4[3];
Script N(script_80242060);
s32 pad_00208C[1];
Script N(script_ExitWalk_80242090);
Script N(script_ExitWalk_802420EC);
Script N(script_80242148);
Script N(script_EnterWalk_80242190);
Script N(main);
s32 pad_002374[3];
Script N(script_MakeEntities);
s32 pad_0024B8[2];
s32 N(intTable_802424C0)[55];
Script N(script_8024259C);
Script N(script_8024264C);
Script N(script_8024270C);
Script N(script_80242784);
Script N(script_80242AA0);
s32 pad_002C88[2];
Script N(script_80242C90);
Script N(script_NpcAI_80242D7C);
Script N(script_NpcAI_80242E18);
s32 N(extraAnimationList_80242EEC)[2];
s32 unk_missing_80242EF4[7];
Script N(script_NpcAI_80242F40);
Script N(script_NpcAI_80243040);
Script N(script_802430C0);
s32 N(extraAnimationList_80243178)[2];
s32 unk_missing_80243180[8];
StaticNpc N(npcGroup_802431A0)[2];
StaticNpc N(npcGroup_80243580)[2];
StaticNpc N(npcGroup_80243960)[2];
NpcGroupList N(npcGroupList_80243D40);
const char D_80243D70_D2FAA0[8]; // "sam_04"
const char D_80243D78_D2FAA8[8]; // "sam_08"
s32 pad_003F48[2];

// text: func_80240000_D2BD30

// text: func_80240448_D2C178

// text: func_80240510_D2C240

// text: func_802405B0_D2C2E0

// text: func_80240634_D2C364

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240858_D2C588

// text: func_80240A0C_D2C73C

// text: func_80240C6C_D2C99C

// text: func_80240F20_D2CC50

// text: func_80240F8C_D2CCBC

// text: func_80241088_D2CDB8

// text: func_80241AC8_D2D7F8

// text: func_80241B58_D2D888

// text: func_80241C58_D2D988

// text: func_80241CB8_D2D9E8

// text: func_80241DA4_D2DAD4

s32 pad_001FF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -1500.0f, -120.0f, -75.0f, 90.0f },
    { 1085.0f, 270.0f, -80.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190131,
};

Script N(script_80242060) = SCRIPT({
    SetMusicTrack(0, 59, 0, 8);
});

s32 pad_00208C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80242090) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243D70_D2FAA0, 2);
    sleep 100;
});

Script N(script_ExitWalk_802420EC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243D78_D2FAA8, 0);
    sleep 100;
});

Script N(script_80242148) = SCRIPT({
    bind N(script_ExitWalk_80242090) to 0x80000 1;
    bind N(script_ExitWalk_802420EC) to 0x80000 6;
});

Script N(script_EnterWalk_80242190) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80242148);
        return;
    }
    SI_VAR(0) = N(script_80242148);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 43;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1989) = 1;
    MakeNpcs(0, N(npcGroupList_80243D40));
    await N(script_MakeEntities);
    await N(script_80242060);
    await N(script_80242AA0);
    ModifyColliderFlags(3, 10, 8);
    ModifyColliderFlags(3, 14, 8);
    ModifyColliderFlags(3, 11, 8);
    ModifyColliderFlags(3, 15, 8);
    ModifyColliderFlags(3, 1, 8);
    ModifyColliderFlags(3, 6, 8);
    spawn N(script_EnterWalk_80242190);
    sleep 1;
});

s32 pad_002374[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1455) == 0) {
        MakeEntity(0x802E9C1C, 0xFFFFFC4F, 0xFFFFFF4D, 0xFFFFFFB5, 0, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
        AssignScript(N(script_80242784));
    } else {
        MakeEntity(0x802E9C1C, 0xFFFFFC4F, 1, 0xFFFFFFB5, 0, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
        AssignScript(N(script_80242784));
    }
    MakeEntity(0x802EA0C4, 810, 330, 0xFFFFFF88, 90, 0x80000000);
    MakeEntity(0x802EA588, 810, 360, 0xFFFFFF88, 90, 142, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1456));
    MakeEntity(0x802E9A18, 0xFFFFFABA, 0xFFFFFFC4, 0xFFFFFF88, 0, 0x80000000);
});

s32 pad_0024B8[] = {
    0x00000000, 0x00000000,
};

s32 N(intTable_802424C0)[] = {
    0x00000018, 0x0000001A, 0x0000001C, 0x0000001E, 0x00000020, 0x00000022, 0x00000024, 0x00000026,
    0x00000028, 0x0000002A, 0x0000002C, 0x0000002E, 0x00000030, 0x00000032, 0x00000034, 0x00000036,
    0x00000038, 0x0000003A, 0x0000003C, 0x0000003E, 0x00000040, 0x00000042, 0x00000044, 0x00000046,
    0x00000048, 0x0000004A, 0x0000004C, 0x0000004E, 0x00000050, 0x00000052, 0x00000054, 0x00000056,
    0x00000058, 0x0000005A, 0x0000005C, 0x0000005E, 0x00000060, 0x00000062, 0x00000064, 0x00000066,
    0x00000068, 0x0000006A, 0x0000006C, 0x0000006E, 0x00000070, 0x00000072, 0x00000074, 0x00000076,
    0x00000078, 0x0000007A, 0x0000007C, 0x0000007E, 0x00000080, 0x00000082, 0x00000084,
};

Script N(script_8024259C) = SCRIPT({
    PlaySoundAtCollider(24, 918, 0);
    func_80240000_D2BD30();
    loop 10 {
        SetGroupEnabled(134, 1);
        sleep 1;
        SetGroupEnabled(134, 0);
        EnableModel(22, 1);
        EnableModel(23, 1);
        sleep 1;
    }
});

Script N(script_8024264C) = SCRIPT({
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) != 14) {
        if (SI_VAR(0) != 16) {
            return;
        }
    }
    if (SI_SAVE_FLAG(1454) == 1) {
        return;
    }
    SI_SAVE_FLAG(1454) = 1;
    sleep 5;
    ModifyColliderFlags(0, 24, 0x7FFFFE00);
    spawn N(script_8024259C);
    unbind;
});

Script N(script_8024270C) = SCRIPT({
    if (SI_SAVE_FLAG(1454) == 1) {
        return;
    }
    SI_SAVE_FLAG(1454) = 1;
    sleep 5;
    ModifyColliderFlags(0, 24, 0x7FFFFE00);
    spawn N(script_8024259C);
    unbind;
});

Script N(script_80242784) = SCRIPT({
    DisablePlayerInput(1);
    func_80240510_D2C240(SI_MAP_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    if (SI_SAVE_FLAG(1455) == 0) {
        PlaySoundAtCollider(22, 921, 0);
        SI_VAR(8) -= 0xFFFFFF4C;
        MakeLerp(0xFFFFFF4C, 0, 120, 10);
0:
        UpdateLerp();
        TranslateModel(22, 0, SI_VAR(0), 0);
        TranslateModel(23, 0, SI_VAR(0), 0);
        UpdateColliderTransform(22);
        SI_VAR(0) += SI_VAR(8);
        func_80240448_D2C178(SI_MAP_VAR(0), SI_VAR(7), SI_VAR(0), SI_VAR(9));
        func_80240634_D2C364();
        sleep 1;
        func_802405B0_D2C2E0(22, 0x4000);
        if (SI_VAR(1) == 1) {
            goto 0;
        }
        EnableModel(135, 1);
        EnableModel(136, 0);
        SI_SAVE_FLAG(1455) = 1;
    } else {
        EnableModel(136, 1);
        EnableModel(135, 0);
        PlaySoundAtCollider(22, 922, 0);
        MakeLerp(0, 0xFFFFFF4C, 120, 10);
1:
        UpdateLerp();
        TranslateModel(22, 0, SI_VAR(0), 0);
        TranslateModel(23, 0, SI_VAR(0), 0);
        UpdateColliderTransform(22);
        SI_VAR(0) += SI_VAR(8);
        func_80240448_D2C178(SI_MAP_VAR(0), SI_VAR(7), SI_VAR(0), SI_VAR(9));
        func_80240634_D2C364();
        sleep 1;
        func_802405B0_D2C2E0(22, 0x4000);
        if (SI_VAR(1) == 1) {
            goto 1;
        }
        SI_SAVE_FLAG(1455) = 0;
    }
    DisablePlayerInput(0);
});

Vec4f N(triggerCoord_80242A90) =  { -940.0f, -130.0f, -75.0f, 60.0f };

Script N(script_80242AA0) = SCRIPT({
    EnableGroup(137, 1);
    ModifyColliderFlags(0, 23, 0x7FFFFE00);
    ParentColliderToModel(22, 22);
    ParentColliderToModel(24, 22);
    if (SI_SAVE_FLAG(1454) == 0) {
        EnableModel(136, 1);
        TranslateGroup(134, 0, 0xFFFFFF4C, 0);
        UpdateColliderTransform(22);
        UpdateColliderTransform(24);
        bind N(script_8024264C) to TriggerFlag_FLOOR_TOUCH 24;
        bind N(script_8024270C) to TriggerFlag_BOMB N(triggerCoord_80242A90);
    } else {
        ModifyColliderFlags(0, 24, 0x7FFFFE00);
        SetGroupEnabled(134, 0);
        EnableModel(22, 1);
        EnableModel(23, 1);
        EnableModel(135, 1);
        if (SI_SAVE_FLAG(1455) == 0) {
            EnableModel(136, 1);
            TranslateGroup(134, 0, 0xFFFFFF4C, 0);
            UpdateColliderTransform(22);
        } else {
            EnableModel(135, 1);
        }
    }
});

s32 pad_002C88[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242C90) = SCRIPT({
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

NpcAISettings N(aISettings_80242D4C) = {
    .moveSpeed = 0.5f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x14,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242D7C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 13);
    SetSelfVar(3, 30);
    func_80240C6C_D2C99C(N(aISettings_80242D4C));
});

NpcSettings N(npcSettings_80242DEC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x30,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242D7C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

Script N(script_NpcAI_80242E18) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 6);
    SetSelfVar(1, 28);
    SetSelfVar(2, 55);
    SetSelfVar(3, 32);
    SetSelfVar(4, 10);
    SetSelfVar(15, 0);
    func_80240A0C_D2C73C();
});

NpcSettings N(npcSettings_80242EC0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242E18),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80242C90),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_80242EEC)[] = {
    0x00520000, 0xFFFFFFFF,
};

s32 unk_missing_80242EF4[] = {
    0x00520000, 0x00520001, 0x0052000B, 0x00520004, 0x00520002, 0x00520003, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_80242F10) = {
    .moveSpeed = 0.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80242F40) = SCRIPT({
    SetSelfVar(7, 1);
    SetSelfVar(8, 10);
    SetSelfVar(9, 9);
    SetSelfVar(10, 12);
    SetSelfVar(11, 7);
    SetSelfVar(12, 30);
    SetSelfVar(13, 15);
    SetSelfVar(14, 18);
    SetSelfVar(15, 15);
    func_80241DA4_D2DAD4(N(aISettings_80242F10));
});

NpcSettings N(npcSettings_80243014) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x32,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242F40),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

Script N(script_NpcAI_80243040) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 14);
    SetSelfVar(1, 28);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_80240A0C_D2C73C();
});

Script N(script_802430C0) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

NpcSettings N(npcSettings_8024314C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243040),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80242C90),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80243178)[] = {
    0x00360100, 0xFFFFFFFF,
};

s32 unk_missing_80243180[] = {
    0x00360100, 0x00360101, 0x0036010E, 0x00360105, 0x00360106, 0x00360118, 0x00360117, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802431A0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242DEC),
        .pos = { -500.0, -150.0, -75.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_PEBBLE, 2 }, { ItemId_SUPER_SHROOM, 8 } },
        .movement = { 0xFFFFFE0C, 0xFFFFFF6A, 0xFFFFFFB5, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE0C, 0xFFFFFF6A, 0xFFFFFFB5, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242EC0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
        .extraAnimations = N(extraAnimationList_80242EEC),
    },
};

StaticNpc N(npcGroup_80243580)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243014),
        .pos = { 250.0, 120.0, -75.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x000000FA, 0x00000078, 0xFFFFFFB5, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000014A, 0x00000078, 0xFFFFFFBF, 0x00000104, 0x00000041, 0x00000001, 0x00000001 },
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_8024314C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
        .extraAnimations = N(extraAnimationList_80243178),
    },
};

StaticNpc N(npcGroup_80243960)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80243014),
        .pos = { 400.0, 120.0, -75.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000190, 0x00000078, 0xFFFFFFB5, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000014A, 0x00000078, 0xFFFFFFBF, 0x00000104, 0x00000041, 0x00000001, 0x00000001 },
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_8024314C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
        .extraAnimations = N(extraAnimationList_80243178),
    },
};

NpcGroupList N(npcGroupList_80243D40) = {
    NPC_GROUP(N(npcGroup_802431A0), 0x1D030003),
    NPC_GROUP(N(npcGroup_80243580), 0x1D090003),
    NPC_GROUP(N(npcGroup_80243960), 0x1D070003),
    {},
};

// rodata: D_80243D70_D2FAA0

// rodata: D_80243D78_D2FAA8

// rodata: D_80243D80_D2FAB0

// rodata: jtbl_80243D88_D2FAB8

// rodata: D_80243F18_D2FC48

// rodata: D_80243F20_D2FC50

// rodata: D_80243F28_D2FC58

// rodata: D_80243F30_D2FC60

// rodata: D_80243F38_D2FC68

// rodata: D_80243F40_D2FC70

s32 pad_003F48[] = {
    0x00000000, 0x00000000,
};
