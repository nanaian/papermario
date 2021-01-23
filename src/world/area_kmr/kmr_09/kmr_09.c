#include "kmr_09.h"

s32 pad_001528[2];
Script N(script_80241590);
s32 pad_0015BC[1];
Script N(script_ExitWalk_802415C0);
Script N(script_ExitWalk_8024161C);
Script N(script_80241678);
Script N(main);
Script N(script_NpcAI_80241820);
f32 N(floatTable_8024186C)[6];
Script N(script_NpcAI_802418B4);
StaticNpc N(npcGroup_80241950)[1];
StaticNpc N(npcGroup_80241B40)[1];
Script N(script_80241D30);
s32 unk_missing_80241E4C[2];
Script N(script_Idle_80241E54);
Script N(script_Init_80242154);
StaticNpc N(npcGroup_8024218C)[1];
StaticNpc N(npcGroup_8024237C)[1];
NpcGroupList N(npcGroupList_8024256C);
s32 pad_0025A8[2];
Script N(script_MakeEntities);
s32 pad_002654[3];
const char D_80242660_8D8460[8]; // "kmr_02"
const char D_80242668_8D8468[8]; // "kmr_06"
s32 pad_0026C4[3];

// text: func_80240000_8D5E00

// text: func_802401B0_8D5FB0

// text: N(UnkNpcAIFunc1)

// text: func_80240898_8D6698

// text: N(UnkNpcAIFunc2)

// text: func_80240C54_8D6A54

// text: func_80240CC0_8D6AC0

// text: N(UnkNpcAIFunc3)

// text: func_80240E58_8D6C58

// text: func_802411E8_8D6FE8

// text: func_8024130C_8D710C

// text: func_802414F8_8D72F8

s32 pad_001528[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -127.0f, 0.0f, 24.0f, 90.0f },
    { 840.0f, 0.0f, 24.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190041,
};

Script N(script_80241590) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

s32 pad_0015BC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802415C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242660_8D8460, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024161C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242668_8D8468, 0);
    sleep 100;
});

Script N(script_80241678) = SCRIPT({
    bind N(script_ExitWalk_802415C0) to 0x80000 0;
    bind N(script_ExitWalk_8024161C) to 0x80000 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 31;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1967) = 1;
    MakeNpcs(0, N(npcGroupList_8024256C));
    await N(script_MakeEntities);
    spawn N(script_80241590);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 3, 0x7FFFFE00);
    SI_VAR(0) = N(script_80241678);
    spawn EnterWalk;
    sleep 1;
    bind N(script_80241D30) to TriggerFlag_WALL_INTERACT 11;
});

NpcAISettings N(aISettings_802417F0) = {
    .moveSpeed = 1.5,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 130.0,
    .unk_10 = 0.0,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241820) = SCRIPT({
    DoBasicAI(N(aISettings_802417F0));
});

NpcSettings N(npcSettings_80241840) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241820),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x5,
    .unk_2A = 0,
};

f32 N(floatTable_8024186C)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_80241884) = {
    .moveSpeed = 1.600000023841858,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 80.0,
    .unk_10 = 0.0,
    .unk_14 = 0x5,
    .chaseSpeed = 2.200000047683716,
    .unk_1C = 0x3C,
    .unk_20 = 0xF,
    .chaseRadius = 100.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802418B4) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFE0C);
    SetSelfVar(6, 21);
    SetSelfVar(1, 580);
    func_8024130C_8D710C(N(aISettings_80241884));
});

NpcSettings N(npcSettings_80241924) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x15,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802418B4),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0x2,
};

StaticNpc N(npcGroup_80241950)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241840),
        .pos = { 200.0, 0.0, 24.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x000000C8, 0x00000000, 0x00000018, 0x0000001E, 0x00000014, 0xFFFF8001, 0x00000001, 0x000000C8, 0x00000000, 0x00000018, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

StaticNpc N(npcGroup_80241B40)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241840),
        .pos = { 250.0, 0.0, 35.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x000000FA, 0x00000000, 0x00000023, 0x0000001E, 0x00000014, 0xFFFF8001, 0x00000001, 0x000000FA, 0x00000000, 0x00000023, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

Script N(script_80241D30) = SCRIPT({
    group 0;
    suspend group 1;
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0165, 160, 40);
    resume group 1;
    SI_FLAG(0) = 0;
    func_802414F8_8D72F8();
    if (SI_VAR(0) != 0) {
        GetNpcVar(2, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SetNpcVar(2, 0, 1);
            SI_FLAG(0) = 1;
            sleep 10;
        }
    }
    DisablePlayerInput(0);
    if (SI_FLAG(0) == 1) {
        unbind;
    }
    break;
});

s32 unk_missing_80241E4C[] = {
    0x00000002, 0x00000000,
};

Script N(script_Idle_80241E54) = SCRIPT({
    SetNpcAnimation(-1, 0x260000);
    EnableNpcShadow(-1, 0);
    SetSelfEnemyFlagBits(32, 1);
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    PlaySoundAtNpc(-1, 248, 0);
    0x802CFE2C(-1, 8192);
    0x802CFD30(-1, 5, 6, 1, 1, 0);
    sleep 15;
    0x802CFE2C(-1, 8192);
    0x802CFD30(-1, 3, 0, 0, 0, 0);
    spawn {
        sleep 2;
        SI_VAR(0) = 0.0;
        loop 20 {
            SI_VAR(0) += 18.0;
            SetNpcRotation(-1, 0, SI_VAR(0), 0);
            sleep 1;
        }
        SetNpcRotation(-1, 0, 0, 0);
    }
    PlaySoundAtNpc(-1, 812, 0);
    EnableNpcShadow(-1, 1);
    SetNpcJumpscale(-1, 0.6005859375);
    NpcJump0(-1, 0xFFFFFFDD, 0, 25, 23);
    0x802CFD30(-1, 0, 0, 0, 0, 0);
    InterpNpcYaw(-1, 90, 0);
    SetNpcFlagBits(-1, 32, 1);
    SetNpcFlagBits(-1, 64, 0);
    SetNpcFlagBits(-1, 512, 1);
    SetSelfEnemyFlagBits(32, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    bind N(script_80241D30) to TriggerFlag_WALL_INTERACT 11;
    BindNpcAI(-1, N(script_NpcAI_80241820));
});

Script N(script_Init_80242154) = SCRIPT({
    EnableNpcShadow(-1, 0);
    BindNpcIdle(-1, N(script_Idle_80241E54));
});

StaticNpc N(npcGroup_8024218C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241840),
        .pos = { -34.0, 29.0, -32.0 },
        .flags = 0x00000D00,
        .init = N(script_Init_80242154),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0xFFFFFFEC, 0x00000000, 0x0000000A, 0x0000001E, 0x00000014, 0xFFFF8001, 0x00000001, 0xFFFFFFEC, 0x00000000, 0x0000000A, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

StaticNpc N(npcGroup_8024237C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80241924),
        .pos = { 670.0, 60.0, 20.0 },
        .flags = 0x00000D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x0000029E, 0x0000003C, 0x00000014, 0x0000001E, 0x00000014, 0xFFFF8001, 0x00000001, 0x0000029E, 0x0000003C, 0x00000014, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00280001, 0x00280003, 0x00280004, 0x00280004, 0x00280001, 0x00280001, 0x00280006, 0x00280006, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004,
        },
    },
};

NpcGroupList N(npcGroupList_8024256C) = {
    NPC_GROUP(N(npcGroup_80241950), 0x00010003),
    NPC_GROUP(N(npcGroup_80241B40), 0x00010003),
    NPC_GROUP(N(npcGroup_8024218C), 0x00000003),
    NPC_GROUP(N(npcGroup_8024237C), 0x00080003),
    {},
};

s32 pad_0025A8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 400, 60, 0xFFFFFFF1, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(77));
    MakeEntity(0x802EA0C4, 450, 60, 0xFFFFFFF1, 0, 0x80000000);
    MakeEntity(0x802EA564, 500, 60, 0xFFFFFFF1, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(78));
});

s32 pad_002654[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242660_8D8460

// rodata: D_80242668_8D8468

// rodata: D_80242670_8D8470

// rodata: D_80242678_8D8478

// rodata: D_80242680_8D8480

// rodata: jtbl_80242688_8D8488

s32 pad_0026C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

