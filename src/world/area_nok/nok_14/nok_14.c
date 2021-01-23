#include "nok_14.h"

s32 pad_000178[2];
s32 pad_0001B8[2];
s32 pad_00241C[1];
Script N(script_80242480);
s32 pad_0024BC[1];
Script N(script_ExitWalk_802424C0);
Script N(script_ExitWalk_80242510);
Script N(script_80242560);
Script N(script_80242648);
Script N(script_802428C0);
Script N(script_80242908);
Script N(main);
s32 pad_002AAC[1];
Script N(script_80242AB0);
Script N(script_80242B54);
Script N(script_MakeEntities);
s32 pad_002F6C[1];
Script N(script_80242F70);
Script N(script_80243714);
s32 pad_0038C4[3];
Script N(script_NpcAI_80243900);
Script N(script_NpcAI_802439CC);
f32 N(floatTable_80243A18)[6];
Script N(script_NpcAI_80243A60);
Script N(script_Idle_80243B28);
Script N(script_Init_80243D2C);
Script N(script_Init_80243D84);
StaticNpc N(npcGroup_80243DAC)[1];
StaticNpc N(npcGroup_80243F9C)[1];
StaticNpc N(npcGroup_8024418C)[1];
StaticNpc N(npcGroup_8024437C)[1];
NpcGroupList N(npcGroupList_8024456C);
s32 pad_0045A8[2];
const char D_802445B0_A06DF0[8]; // "nok_13"
const char D_802445B8_A06DF8[8]; // "nok_15"
s32 pad_00461C[1];
s32 pad_004674[1];
s32 pad_0046B8[2];

// text: func_80240000_A02840

s32 pad_000178[] = {
    0x00000000, 0x00000000,
};

// text: func_80240180_A029C0

// text: func_8024019C_A029DC

s32 pad_0001B8[] = {
    0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024023C_A02A7C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240554_A02D94

// text: func_80240994_A031D4

// text: func_80240B44_A03384

// text: N(UnkNpcAIFunc1)

// text: func_8024122C_A03A6C

// text: N(UnkNpcAIFunc2)

// text: func_802415E8_A03E28

// text: func_80241654_A03E94

// text: N(UnkNpcAIFunc3)

// text: func_802417EC_A0402C

// text: func_80241B7C_A043BC

// text: func_80241CA0_A044E0

// text: func_80241E8C_A046CC

// text: func_80241FB4_A047F4

// text: func_80242070_A048B0

// text: N(UnkDurationCheck)

// text: func_802421CC_A04A0C

s32 pad_00241C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -855.0f, 75.0f, -35.0f, 90.0f },
    { 436.0f, 0.0f, -49.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19004C,
};

Script N(script_80242480) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
    PlaySound(0x8000005B);
});

s32 pad_0024BC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802424C0) = SCRIPT({
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802445B0_A06DF0, 2);
    sleep 100;
});

Script N(script_ExitWalk_80242510) = SCRIPT({
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802445B8_A06DF8, 0);
    sleep 100;
});

Script N(script_80242560) = SCRIPT({
    group 0;
    SetTexPanner(125, 0);
    SetTexPanner(126, 0);
    SetTexPanner(127, 0);
10:
    loop 12 {
        SetTexPanOffset(0, 0, 0, 0);
        sleep 1;
    }
    loop 12 {
        SetTexPanOffset(0, 0, 0x4000, 0);
        sleep 1;
    }
    goto 10;
});

Script N(script_80242648) = SCRIPT({
    group 0;
    spawn {
        SetTexPanner(134, 1);
        SetTexPanner(135, 1);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
    10:
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        SetTexPanOffset(1, 1, SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 100;
        SI_VAR(1) -= 400;
        SI_VAR(1) += 1000;
        sleep 1;
        goto 10;
    }
    spawn {
        SetTexPanner(131, 2);
        SetTexPanner(132, 2);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
    20:
        SetTexPanOffset(2, 0, SI_VAR(0), 0);
        SetTexPanOffset(2, 1, SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 100;
        SI_VAR(1) += 800;
        SI_VAR(2) -= 400;
        sleep 1;
        goto 20;
    }
    SetTexPanner(129, 3);
    SI_VAR(0) = 0;
30:
    SetTexPanOffset(3, 0, 0, SI_VAR(0));
    SI_VAR(0) -= 1000;
    sleep 1;
    goto 30;
});

Script N(script_802428C0) = SCRIPT({
    bind N(script_ExitWalk_802424C0) to 0x80000 5;
    bind N(script_ExitWalk_80242510) to 0x80000 21;
});

Script N(script_80242908) = SCRIPT({
0:
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA5) {
        func_80240000_A02840(0xFFFFFF8D, 110, 0xFFFFFF92, 999, 0, 2);
    }
    sleep 1;
    goto 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 32;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_8024456C));
    await N(script_MakeEntities);
    spawn N(script_80242560);
    spawn N(script_80242648);
    spawn N(script_80243714);
    spawn N(script_80242908);
    spawn N(script_80242480);
    ModifyColliderFlags(0, 4, 0x7FFFFE00);
    ModifyColliderFlags(0, 20, 0x7FFFFE00);
    SI_VAR(0) = N(script_802428C0);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_002AAC[] = {
    0x00000000,
};

Script N(script_80242AB0) = SCRIPT({
    func_800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    group 0;
    func_802D5830(1);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0179, 160, 40);
    DisablePlayerInput(0);
    func_802D5830(0);
});

Script N(script_80242B54) = SCRIPT({
    if (SI_SAVE_FLAG(581) == 1) {
        return;
    }
    spawn {
        DisablePlayerInput(1);
        loop 25 {
            sleep 1;
            GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetItemPos(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
        SetNpcPos(4, 0, 0xFFFFFC18, 0);
        DisablePlayerInput(0);
    }
    SetNpcPos(4, 0xFFFFFEA7, 75, 0xFFFFFF8B);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcJumpscale(4, 1.5);
    if (SI_VAR(0) <= 0xFFFFFEA7) {
        NpcJump0(4, 0xFFFFFEE8, 0, 0xFFFFFF90, 20);
    } else {
        NpcJump0(4, 0xFFFFFE66, 0, 0xFFFFFF90, 20);
    }
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAFDC, 0xFFFFFF6A, 0, 0xFFFFFF51, 0, 0x80000000);
    AssignScript(N(script_80242AB0));
    SI_VAR(0) = 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFA5) {
        SI_VAR(0) = 0;
    }
    if (SI_VAR(0) == 0) {
        MakeEntity(D_802E9BD4, 100, 0, 0xFFFFFF47, 0, 0x80000000);
        AssignAreaFlag(2);
    }
    MakeItemEntity(343, 0xFFFFFD71, 75, 0xFFFFFFDD, 17, SI_SAVE_FLAG(582));
    MakeItemEntity(343, 0xFFFFFD80, 75, 0xFFFFFFEC, 17, SI_SAVE_FLAG(583));
    MakeItemEntity(343, 0xFFFFFD80, 75, 0xFFFFFFCE, 17, SI_SAVE_FLAG(584));
    MakeItemEntity(343, 0xFFFFFD62, 75, 0xFFFFFFEC, 17, SI_SAVE_FLAG(585));
    MakeItemEntity(343, 0xFFFFFD62, 75, 0xFFFFFFCE, 17, SI_SAVE_FLAG(586));
    MakeEntity(D_802EA0C4, 0xFFFFFEA7, 77, 0xFFFFFF8B, 0, 0x80000000);
    AssignScript(N(script_80242B54));
    MakeItemEntity(132, 0xFFFFFEA7, 102, 0xFFFFFF8B, 17, SI_SAVE_FLAG(581));
    SI_MAP_VAR(0) = SI_VAR(0);
    MakeEntity(D_802EA0C4, 200, 60, 0xFFFFFF60, 0, 0x80000000);
    MakeEntity(D_802EA588, 250, 60, 0xFFFFFF60, 0, 128, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(599));
    MakeEntity(D_802EA0C4, 300, 60, 0xFFFFFF60, 0, 0x80000000);
    MakeEntity(D_802EAB04, 0xFFFFFD76, 75, 0xFFFFFFCE, 0, 8, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(609));
});

s32 pad_002F6C[] = {
    0x00000000,
};

Script N(script_80242F70) = SCRIPT({
    group 0;
    func_802D5830(1);
    DisablePlayerInput(1);
    sleep 10;
    DisablePlayerPhysics(1);
    func_80240180_A029C0();
    func_802CB008(0, 1, 3, 0, 0xFFFFFFC4, 20);
    sleep 10;
    SI_SAVE_VAR(0) = 0xFFFFFFA5;
    PlaySoundAt(113, 0, 0, 0, 0xFFFFFFC4);
    MakeLerp(0xFFFFFF38, 0, 15, 12);
10:
    UpdateLerp();
    TranslateGroup(99, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 10;
    }
    loop 6 {
        TranslateGroup(99, 0, 3, 0);
        sleep 1;
        TranslateGroup(99, 0, 0, 0);
        sleep 1;
    }
    sleep 15;
    PlaySoundAt(103, 0, 0xFFFFFFAC, 0, 0xFFFFFFC4);
    spawn {
        MakeLerp(0, 90, 8, 10);
    20:
        UpdateLerp();
        RotateModel(55, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 20;
        }
    }
    sleep 3;
    PlaySoundAt(104, 0, 0xFFFFFFC8, 0, 0xFFFFFFC4);
    spawn {
        MakeLerp(0, 90, 8, 0);
    24:
        UpdateLerp();
        RotateModel(62, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 24;
        }
    }
    sleep 3;
    PlaySoundAt(105, 0, 0xFFFFFFE4, 0, 0xFFFFFFC4);
    spawn {
        MakeLerp(0, 90, 8, 0);
    21:
        UpdateLerp();
        RotateModel(69, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 21;
        }
    }
    sleep 3;
    PlaySoundAt(106, 0, 0, 0, 0xFFFFFFC4);
    spawn {
        MakeLerp(0, 90, 8, 0);
    25:
        UpdateLerp();
        RotateModel(76, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 25;
        }
    }
    sleep 3;
    PlaySoundAt(107, 0, 28, 0, 0xFFFFFFC4);
    spawn {
        MakeLerp(0, 90, 8, 0);
    22:
        UpdateLerp();
        RotateModel(83, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 22;
        }
    }
    sleep 3;
    PlaySoundAt(108, 0, 56, 0, 0xFFFFFFC4);
    spawn {
        MakeLerp(0, 90, 8, 0);
    26:
        UpdateLerp();
        RotateModel(90, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 26;
        }
    }
    sleep 3;
    PlaySoundAt(109, 0, 84, 0, 0xFFFFFFC4);
    spawn {
        MakeLerp(0, 90, 8, 0);
    23:
        UpdateLerp();
        RotateModel(96, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 23;
        }
    }
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
    ModifyColliderFlags(1, 15, 0x7FFFFE00);
    sleep 20;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_802CB008(0, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    func_8024019C_A029DC();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    func_802D5830(0);
    unbind;
});

Script N(script_80243714) = SCRIPT({
    SI_VAR(0) = 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFA5) {
        SI_VAR(0) = 0;
    }
    if (SI_VAR(0) == 0) {
        bind N(script_80242F70) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(2);
        TranslateGroup(99, 0, 0xFFFFFF38, 0);
        ModifyColliderFlags(0, 15, 0x7FFFFE00);
        return;
    }
    RotateModel(55, 90, -1, 0, 0);
    RotateModel(69, 90, -1, 0, 0);
    RotateModel(83, 90, -1, 0, 0);
    RotateModel(96, 90, -1, 0, 0);
    RotateModel(62, 90, 1, 0, 0);
    RotateModel(76, 90, 1, 0, 0);
    RotateModel(90, 90, 1, 0, 0);
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
});

s32 pad_0038C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_802438D0) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x2D,
    .waitTime = 0x14,
    .alertRadius = 70.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 7.5f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243900) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_80240554_A02D94(N(aISettings_802438D0));
});

NpcSettings N(npcSettings_80243970) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243900),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_8024399C) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 130.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802439CC) = SCRIPT({
    DoBasicAI(N(aISettings_8024399C));
});

NpcSettings N(npcSettings_802439EC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802439CC),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

f32 N(floatTable_80243A18)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80243A30) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 20.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 2.6f,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 150.0f,
    .unk_28 = 20.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243A60) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_802421CC_A04A0C(N(aISettings_80243A30));
});

NpcSettings N(npcSettings_80243AD0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243A60),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80243AFC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

Script N(script_Idle_80243B28) = SCRIPT({
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    AwaitPlayerApproach(0xFFFFFD76, 0xFFFFFFDD, 100);
    PlaySoundAt(339, 0, 0xFFFFFD76, 75, 0xFFFFFF88);
    spawn {
        loop 5 {
            TranslateModel(19, 2, 0, 0);
            sleep 1;
            TranslateModel(19, 0xFFFFFFFE, 0, 0);
            sleep 1;
        }
    }
    sleep 5;
    SetNpcFlagBits(-1, 0x240040, 1);
    spawn {
        MakeLerp(0, 360, 20, 0);
    1:
        UpdateLerp();
        SetNpcRotation(-1, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
    }
    SetNpcJumpscale(-1, 0.6005859375);
    NpcJump0(-1, 0xFFFFFD76, 75, 0xFFFFFFE2, 20);
    SetNpcFlagBits(-1, 0x240040, 0);
    SetNpcFlagBits(-1, 512, 1);
    BindNpcAI(-1, N(script_NpcAI_80243900));
});

Script N(script_Init_80243D2C) = SCRIPT({
    SetNpcFlagBits(-1, 512, 0);
    SetNpcPos(-1, 0xFFFFFD76, 75, 0xFFFFFF6A);
    BindNpcIdle(-1, N(script_Idle_80243B28));
});

Script N(script_Init_80243D84) = SCRIPT({
    SetNpcFlagBits(-1, 16, 0);
});

StaticNpc N(npcGroup_80243DAC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243970),
        .pos = { -667.0, 75.0, -50.0 },
        .flags = 0x00002400,
        .init = N(script_Init_80243D2C),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 3 }, { ItemId_KOOPA_LEAF, 7 } },
        .movement = { 0xFFFFFD4E, 0x0000004B, 0xFFFFFFCE, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFD62, 0x0000004B, 0xFFFFFF90, 0x000001F4 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80243F9C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243AD0),
        .pos = { 184.0, 50.0, -100.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0x000000B8, 0x00000032, 0xFFFFFF9C, 0x00000041, 0x00000028, 0xFFFF8001, 0x00000001, 0x000000EE, 0x00000032, 0xFFFFFF9C, 0x000000C8 },
        .animations = {
            0x002A0101, 0x002A0102, 0x002A0103, 0x002A0103, 0x002A0101, 0x002A0101, 0x002A0106, 0x002A0106, 0x002A0104, 0x002A010C, 0x002A010A, 0x002A010E, 0x002A0103, 0x002A0103, 0x002A0103, 0x002A0103,
        },
    },
};

StaticNpc N(npcGroup_8024418C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802439EC),
        .pos = { -257.0, 0.0, -47.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0xFFFFFEFF, 0x00000000, 0xFFFFFFD1, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEFF, 0x00000000, 0xFFFFFFD1, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00270001, 0x00270002, 0x00270003, 0x00270003, 0x00270001, 0x00270001, 0x00270005, 0x00270005, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003,
        },
    },
};

StaticNpc N(npcGroup_8024437C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80243AFC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00004E01,
        .init = N(script_Init_80243D84),
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 3 }, { ItemId_KOOPA_LEAF, 7 } },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

NpcGroupList N(npcGroupList_8024456C) = {
    NPC_GROUP(N(npcGroup_80243DAC), 0x050B0001),
    NPC_GROUP(N(npcGroup_80243F9C), 0x05110003),
    NPC_GROUP(N(npcGroup_8024418C), 0x05060001),
    NPC_GROUP(N(npcGroup_8024437C), 0x050C0001),
    {},
};

s32 pad_0045A8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802445B0_A06DF0

// rodata: D_802445B8_A06DF8

// rodata: D_802445C0_A06E00

// rodata: jtbl_802445C8_A06E08

s32 pad_00461C[] = {
    0x00000000,
};

// rodata: D_80244620_A06E60

// rodata: D_80244628_A06E68

// rodata: D_80244630_A06E70

// rodata: jtbl_80244638_A06E78

s32 pad_004674[] = {
    0x00000000,
};

// rodata: jtbl_80244678_A06EB8

s32 pad_0046B8[] = {
    0x00000000, 0x00000000,
};
