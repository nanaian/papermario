#include "iwa_03.h"

s32 pad_00033C[1];
s32 pad_001344[3];
Script N(script_ExitWalk_802413A0);
Script N(script_802413FC);
Script N(main);
s32 N(unk_80241530)[1];
Script N(script_80241534);
Script N(script_8024159C);
Script N(script_8024167C);
Script N(script_802416E0);
Script N(script_802417F0);
Script N(script_MakeEntities);
s32 pad_001AF4[3];
Script N(script_80241B00);
Script N(script_80241B9C);
Script N(script_NpcAI_80241C4C);
Script N(script_NpcAI_80241F20);
StaticNpc N(npcGroup_80241F70)[1];
StaticNpc N(npcGroup_80242160)[1];
StaticNpc N(npcGroup_80242350)[1];
StaticNpc N(npcGroup_80242540)[2];
NpcGroupList N(npcGroupList_80242920);
s32 pad_00295C[1];
s32 N(unk_80242960)[8];
Script N(script_80242980);
Script N(script_802429AC);
Script N(script_80242BB8);
s32 pad_002C18[2];
const char D_80242C20_91B7D0[8]; // "iwa_01"
s32 pad_002C28[2];
s32 pad_002D2C[1];

// text: func_80240000_918BB0

// text: func_802400B4_918C64

// text: func_80240118_918CC8

// text: func_80240268_918E18

// text: func_802402BC_918E6C

s32 pad_00033C[] = {
    0x00000000,
};

// text: func_80240340_918EF0

// text: func_802404A0_919050

// text: func_80240514_9190C4

// text: func_80240644_9191F4

// text: func_802406E0_919290

// text: func_80240768_919318

// text: func_80240810_9193C0

// text: func_80240984_919534

// text: func_802409D4_919584

// text: func_80240B74_919724

// text: func_80240CC4_919874

// text: func_80240D70_919920

// text: func_80240EA8_919A58

// text: func_80240F24_919AD4

// text: N(UnkDurationCheck)

// text: func_80240FD0_919B80

// text: func_80241320_919ED0

s32 pad_001344[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 14.0f, -18.0f, 7.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19005D,
};

Script N(script_ExitWalk_802413A0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242C20_91B7D0, 1);
    sleep 100;
});

Script N(script_802413FC) = SCRIPT({
    bind N(script_ExitWalk_802413A0) to 0x80000 24;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 8;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242920));
    await N(script_MakeEntities);
    spawn N(script_80242BB8);
    SetMusicTrack(0, 22, 0, 8);
    SI_VAR(0) = N(script_802413FC);
    spawn EnterWalk;
    sleep 1;
    ModifyColliderFlags(0, 18, 0x7FFFFE00);
});

s32 N(unk_80241530)[] = {
    0x00000000,
};

Script N(script_80241534) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_8024159C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80241534);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_8024167C) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_802416E0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    sleep 1;
    SI_VAR(10) = spawn N(script_8024167C);
    if (SI_MAP_VAR(9) == 0) {
        SetPlayerJumpscale(1.400390625);
        PlayerJump(0xFFFFF9D2, 23, 60, 15);
    } else {
        SetPlayerJumpscale(0.7001953125);
        PlayerJump(0xFFFFF9D2, 408, 0xFFFFFFC4, 40);
    }
    kill SI_VAR(10);
    SetPlayerActionState(0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_802417F0) = SCRIPT({
    SI_VAR(10) = 314;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(689) = 1;
    await N(script_8024159C);
});

Script N(script_MakeEntities) = SCRIPT({
    spawn {
        func_802402BC_918E6C();
    }
    MakeEntity(0x802EAA30, 0xFFFFF9D4, 23, 20, 0, 0x80000000);
    AssignScript(N(script_802416E0));
    MakeEntity(0x802EA564, 0xFFFFF911, 408, 0xFFFFFF88, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(702));
    MakeEntity(0x802EA564, 0xFFFFFD94, 0xFFFFFFF1, 0xFFFFFFBB, 0, 138, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(703));
    MakeEntity(0x802EA564, 0xFFFFFBBE, 408, 0xFFFFFF7E, 0, 164, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(704));
    MakeItemEntity(84, 0xFFFFFFEC, 95, 0xFFFFFFAB, 17, SI_SAVE_FLAG(706));
    MakeItemEntity(348, 0xFFFFF8B7, 23, 20, 17, SI_SAVE_FLAG(688));
    MakeItemEntity(343, 0xFFFFF8E9, 23, 20, 17, SI_SAVE_FLAG(696));
    MakeItemEntity(343, 0xFFFFF885, 23, 20, 17, SI_SAVE_FLAG(697));
    MakeItemEntity(343, 0xFFFFF8D0, 23, 63, 17, SI_SAVE_FLAG(698));
    MakeItemEntity(343, 0xFFFFF89E, 23, 63, 17, SI_SAVE_FLAG(699));
    MakeItemEntity(343, 0xFFFFF8D0, 23, 0xFFFFFFE9, 17, SI_SAVE_FLAG(700));
    MakeItemEntity(343, 0xFFFFF89E, 23, 0xFFFFFFE9, 17, SI_SAVE_FLAG(701));
    MakeItemEntity(343, 0xFFFFF955, 0xFFFFFFC4, 0, 17, SI_SAVE_FLAG(694));
    MakeItemEntity(343, 0xFFFFF955, 0xFFFFFFC4, 60, 17, SI_SAVE_FLAG(695));
    MakeEntity(0x802EAE30, 0xFFFFF94B, 93, 0xFFFFFF81, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(689));
    AssignScript(N(script_802417F0));
});

s32 pad_001AF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241B00) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcFlagBits(-1, 4, 1);
    SetNpcFlagBits(-1, 512, 1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
});

Script N(script_80241B9C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0x2F0012);
});

NpcAISettings N(aISettings_80241C1C) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 90.0f,
    .unk_10 = 70.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x5A,
    .unk_20 = 0x19,
    .chaseRadius = 120.0f,
    .unk_28 = 70.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241C4C) = SCRIPT({
    0x800445D4(SI_VAR(0));
    if (SI_VAR(0) == 100) {
        SetSelfEnemyFlagBits(32, 1);
    10:
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        IsPlayerWithin(SI_VAR(0), SI_VAR(2), 80, SI_VAR(3));
        if (SI_VAR(3) != 1) {
            sleep 1;
            goto 10;
        }
        GetSelfNpcID(SI_VAR(0));
        SI_VAR(0) += 1;
        GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(2) += 30;
        SetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        SetNpcFlagBits(-1, 4, 0);
        EnableNpcShadow(-1, 1);
        SetNpcAnimation(-1, 0x2F000E);
        GetNpcPos(-1, SI_VAR(4), SI_VAR(5), SI_VAR(6));
        SI_VAR(5) += 30;
        SetNpcJumpscale(-1, 1.0);
        PlaySoundAtNpc(-1, 803, 0);
        NpcJump0(-1, SI_VAR(4), SI_VAR(5), SI_VAR(6), 20);
        SetNpcPos(SI_VAR(0), 0, 0xFFFFFC18, 0);
        SetSelfEnemyFlagBits(32, 0);
        NpcFacePlayer(-1, 0);
        SetSelfEnemyFlagBits(0x40000000, 1);
        DoBasicAI(N(aISettings_80241C1C));
    });

NpcSettings N(npcSettings_80241E98) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_80241B00),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241C4C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x8,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80241EC4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_80241B9C),
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x8,
    .unk_2A = 0x1,
};

NpcAISettings N(aISettings_80241EF0) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 7.0f,
    .unk_1C = 0x3C,
    .unk_20 = 0x5,
    .chaseRadius = 100.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241F20) = SCRIPT({
    func_80240FD0_919B80(N(aISettings_80241EF0), 16);
});

NpcSettings N(npcSettings_80241F44) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241F20),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80241F70)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241F44),
        .pos = { -525.0, -75.0, 60.0 },
        .flags = 0x00000C00,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFDF3, 0xFFFFFFB5, 0x0000003C, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFDF3, 0xFFFFFFB5, 0x0000003C, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
        },
    },
};

StaticNpc N(npcGroup_80242160)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241F44),
        .pos = { -1686.0, -60.0, 180.0 },
        .flags = 0x00000C00,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFF96A, 0xFFFFFFC4, 0x000000B4, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFF96A, 0xFFFFFFC4, 0x000000B4, 0x000000FA },
        .animations = {
            0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
        },
    },
};

StaticNpc N(npcGroup_80242350)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241F44),
        .pos = { -1300.0, 408.0, -125.0 },
        .flags = 0x00000C00,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFAEC, 0x00000198, 0xFFFFFF83, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFAF6, 0x00000198, 0xFFFFFF83, 0x0000008C },
        .animations = {
            0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
        },
    },
};

StaticNpc N(npcGroup_80242540)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80241E98),
        .pos = { -1000.0, 23.0, 60.0 },
        .flags = 0x00000400,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0xFFFFFC18, 0x00000017, 0x0000003C, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFC18, 0x00000017, 0x0000003C, 0x000000FA },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80241EC4),
        .pos = { -1000.0, 23.0, 60.0 },
        .flags = 0x00000F21,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
};

NpcGroupList N(npcGroupList_80242920) = {
    NPC_GROUP(N(npcGroup_80241F70), 0x09030001),
    NPC_GROUP(N(npcGroup_80242160), 0x09000001),
    NPC_GROUP(N(npcGroup_80242350), 0x09010001),
    NPC_GROUP(N(npcGroup_80242540), 0x09090001),
    {},
};

s32 pad_00295C[] = {
    0x00000000,
};

s32 N(unk_80242960)[] = {
    0x42B20000, 0x3ED1EB85, 0xBE800000, 0x41800000, 0x4119CAC1, 0xBEE76C8B, 0x3B449BA6, 0xBCBC6A7F,
};

Script N(script_80242980) = SCRIPT({
    SI_VAR(0) = N(unk_80242960);
    func_80241320_919ED0();
});

Script N(script_802429AC) = SCRIPT({
    DisablePlayerInput(1);
    sleep 10;
    spawn {
        PlaySoundAtCollider(34, 8354, 0);
        MakeLerp(0, 0xFFFFFFB0, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(13, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 15;
    ModifyColliderFlags(0, 34, 0x7FFFFE00);
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFA4C, 0xFFFFFFC4, 0);
    DisablePlayerInput(0);
    sleep 100;
    spawn {
        PlaySoundAtCollider(34, 8354, 0);
        MakeLerp(0xFFFFFFB0, 0, 30, 0);
        loop {
            UpdateLerp();
            RotateModel(13, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    ModifyColliderFlags(1, 34, 0x7FFFFE00);
});

Script N(script_80242BB8) = SCRIPT({
    bind N(script_802429AC) to TriggerFlag_WALL_INTERACT 34;
    bind N(script_80242980) to TriggerFlag_FLOOR_TOUCH 9;
    ModifyColliderFlags(3, 9, 5);
});

s32 pad_002C18[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242C20_91B7D0

s32 pad_002C28[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242C30_91B7E0

// rodata: D_80242C38_91B7E8

// rodata: D_80242C40_91B7F0

// rodata: D_80242C48_91B7F8

// rodata: D_80242C50_91B800

// rodata: jtbl_80242C58_91B808

s32 pad_002D2C[] = {
    0x00000000,
};
