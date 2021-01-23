#include "sam_08.h"

s32 pad_000D38[2];
s32 pad_0017A4[3];
Script N(script_80241810);
s32 pad_00183C[1];
Script N(script_ExitWalk_80241840);
Script N(script_ExitWalk_8024189C);
Script N(script_802418F8);
Script N(main);
s32 N(unk_80241AE0)[2];
s32 N(unk_80241AE8)[4];
s32 N(unk_80241AF8)[16];
s32 N(unk_80241B38)[3];
Script N(script_80241B44);
Script N(script_80241CA8);
Script N(script_MakeEntities);
s32 pad_0021FC[1];
Script N(script_80242258);
s32 unk_missing_80242314[10];
s32 N(extraAnimationList_8024233C)[2];
Script N(script_NpcAI_80242374);
Script N(script_NpcAI_80242410);
Script N(script_Interact_802424E4);
Script N(script_Hit_80242514);
Script N(script_Interact_80242560);
Script N(script_Hit_80242590);
Script N(script_Idle_802425DC);
Script N(script_Defeat_8024264C);
Script N(script_Init_802428AC);
Script N(script_Init_802428F8);
Script N(script_Init_80242944);
StaticNpc N(npcGroup_802429A4)[3];
Script N(script_Idle_80242F74);
Script N(script_Init_80242FDC);
Script N(script_Idle_8024306C);
Script N(script_Init_802430D4);
StaticNpc N(npcGroup_80243164)[2];
StaticNpc N(npcGroup_80243544)[2];
NpcGroupList N(npcGroupList_80243924);
s32 pad_003954[3];
Script N(script_80243960);
Script N(script_80243A18);
Script N(script_80244680);
Script N(script_80245EB0);
Script N(script_80246424);
s32 pad_0064BC[1];
const char D_802464C0_D36140[8]; // "sam_07"
const char D_802464C8_D36148[8]; // "sam_09"
s32 pad_006668[2];

// text: func_80240000_D2FC80

// text: func_8024001C_D2FC9C

// text: func_8024003C_D2FCBC

// text: func_80240068_D2FCE8

// text: func_802400D4_D2FD54

// text: func_80240120_D2FDA0

// text: func_802401CC_D2FE4C

// text: func_8024041C_D3009C

// text: func_80240448_D300C8

// text: func_80240480_D30100

// text: func_80240510_D30190

// text: func_80240544_D301C4

// text: func_802405A8_D30228

// text: func_80240600_D30280

// text: func_80240B38_D307B8

// text: func_80240C78_D308F8

// text: func_80240CC0_D30940

// text: func_80240D08_D30988

s32 pad_000D38[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240F48_D30BC8

// text: func_802410FC_D30D7C

// text: func_8024135C_D30FDC

// text: func_80241610_D31290

// text: func_802416A4_D31324

// text: func_8024174C_D313CC

s32 pad_0017A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -1527.0f, -120.0f, 0.0f, 90.0f },
    { -150.0f, 0.0f, -80.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190132,
};

Script N(script_80241810) = SCRIPT({
    SetMusicTrack(0, 59, 0, 8);
});

s32 pad_00183C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241840) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802464C0_D36140, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024189C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802464C8_D36148, 0);
    sleep 100;
});

Script N(script_802418F8) = SCRIPT({
    bind N(script_ExitWalk_80241840) to 0x80000 15;
    bind N(script_ExitWalk_8024189C) to 0x80000 20;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 43;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80243924));
    await N(script_MakeEntities);
    await N(script_80241810);
    ModifyColliderFlags(3, 0, 8);
    ModifyColliderFlags(3, 4, 8);
    ModifyColliderFlags(3, 6, 8);
    ModifyColliderFlags(3, 8, 8);
    ModifyColliderFlags(3, 2, 8);
    ModifyColliderFlags(3, 15, 8);
    ModifyColliderFlags(3, 20, 8);
    ModifyColliderFlags(0, 27, 0x7FFFFE00);
    await N(script_80246424);
    SI_VAR(0) = N(script_802418F8);
    spawn EnterWalk;
    sleep 1;
});

s32 N(unk_80241AE0)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80241AE8)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80241AF8)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80241B38)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80241B44) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240544_D301C4(SI_MAP_VAR(1));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240B38_D307B8(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240B38_D307B8(50, 50);
    }
    spawn {
        sleep 3;
        func_8024003C_D2FCBC(SI_MAP_VAR(1));
    }
    spawn {
        sleep 47;
        func_802405A8_D30228();
        func_80240C78_D308F8();
        sleep 5;
        func_80240CC0_D30940();
        sleep 5;
        func_80240C78_D308F8();
    }
    sleep 3;
    func_80240600_D30280(SI_MAP_VAR(1));
    sleep 30;
});

Script N(script_80241CA8) = SCRIPT({
    if (SI_SAVE_FLAG(1457) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240D08_D30988();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240000_D2FC80();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240480_D30100(SI_MAP_VAR(1), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240120_D2FDA0();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240510_D30190(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_D2FC9C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802401CC_D2FE4C();
    if (SI_VAR(0) == -1) {
        func_80240510_D30190(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_D2FC9C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_8024041C_D3009C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240510_D30190(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_D2FC9C();
        return;
    }
    await N(script_80241B44);
    func_80240068_D2FCE8(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(1457) = 1;
    func_80240510_D30190(SI_VAR(9));
    func_80240448_D300C8();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024001C_D2FC9C();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 0xFFFFFCE0, 210, 0xFFFFFF7E, 0, 0x80000000);
    SI_MAP_VAR(1) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(1457));
    AssignScript(N(script_80241CA8));
    MakeItemEntity(133, 0xFFFFFCFE, 0xFFFFFF10, 30, 19, 0);
    if (SI_SAVE_VAR(0) < 75) {
        MakeEntity(0x802E9BD4, 0xFFFFFC40, 0xFFFFFF88, 0xFFFFFFDB, 0, 0x80000000);
        AssignAreaFlag(6);
    }
});

s32 pad_0021FC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80242200) = {
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

NpcSettings N(npcSettings_8024222C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x2D,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_80242258) = SCRIPT({
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

s32 unk_missing_80242314[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024233C)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_80242344) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x7,
    .chaseSpeed = 3.8f,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0f,
    .unk_28 = 160.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242374) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 7);
    SetSelfVar(3, 6);
    func_8024135C_D30FDC(N(aISettings_80242344));
});

NpcSettings N(npcSettings_802423E4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242374),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x17,
    .unk_2A = 0,
};

Script N(script_NpcAI_80242410) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 48);
    SetSelfVar(3, 30);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_802410FC_D30D7C();
});

NpcSettings N(npcSettings_802424B8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x10,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242410),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80242258),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x17,
    .unk_2A = 0x8,
};

Script N(script_Interact_802424E4) = SCRIPT({
    SpeakToPlayer(-1, 0x2000D, 0x20003, 0, 0x12012B);
});

Script N(script_Hit_80242514) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            await N(script_80244680);
        }
    }
});

Script N(script_Interact_80242560) = SCRIPT({
    SpeakToPlayer(-1, 0x2000D, 0x20003, 0, 0x12012A);
});

Script N(script_Hit_80242590) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            await N(script_80245EB0);
        }
    }
});

Script N(script_Idle_802425DC) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    StartBossBattle(3);
});

Script N(script_Defeat_8024264C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcFlagBits(2, 256, 1);
            SetNpcSpeed(2, 3.0);
            SetNpcJumpscale(2, 1.5);
            SetNpcAnimation(2, 0x4E0004);
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 50;
            PlaySoundAtNpc(2, 714, 0);
            NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 13);
            InterpPlayerYaw(90, 0);
            InterpNpcYaw(0xFFFFFFFC, 90, 0);
            SI_VAR(0) += 50;
            PlaySoundAtNpc(2, 714, 0);
            NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 13);
            SI_VAR(0) += 50;
            PlaySoundAtNpc(2, 714, 0);
            NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 13);
            SI_SAVE_VAR(0) = 75;
            SetPlayerFlagBits(192, 0);
            ModifyColliderFlags(0, 27, 0x7FFFFE00);
            DisablePlayerInput(0);
            SI_VAR(0) += 50;
            PlaySoundAtNpc(2, 714, 0);
            NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_802428AC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802424E4));
    if (SI_SAVE_VAR(0) >= 75) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_802428F8) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242560));
    if (SI_SAVE_VAR(0) >= 75) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80242944) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802425DC));
    BindNpcDefeat(-1, N(script_Defeat_8024264C));
    if (SI_SAVE_VAR(0) >= 75) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802429A4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242200),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40D09,
        .init = N(script_Init_802428AC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242200),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40D09,
        .init = N(script_Init_802428F8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024222C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40D09,
        .init = N(script_Init_80242944),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
};

Script N(script_Idle_80242F74) = SCRIPT({
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Init_80242FDC) = SCRIPT({
    SetNpcFlagBits(-1, 256, 1);
    SetEnemyFlagBits(-1, 1, 0);
    BindNpcIdle(-1, N(script_Idle_80242F74));
    BindNpcHit(-1, N(script_Hit_80242514));
    if (SI_SAVE_VAR(0) >= 75) {
        RemoveNpc(-1);
    }
});

Script N(script_Idle_8024306C) = SCRIPT({
    loop {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Init_802430D4) = SCRIPT({
    SetNpcFlagBits(-1, 256, 1);
    SetEnemyFlagBits(-1, 1, 0);
    BindNpcIdle(-1, N(script_Idle_8024306C));
    BindNpcHit(-1, N(script_Hit_80242590));
    if (SI_SAVE_VAR(0) >= 75) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80243164)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80242200),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D0D,
        .init = N(script_Init_80242FDC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80242200),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D0D,
        .init = N(script_Init_802430D4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
};

StaticNpc N(npcGroup_80243544)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802423E4),
        .pos = { -450.0, 0.0, -90.0 },
        .flags = 0x00002D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFE3E, 0x00000000, 0xFFFFFFA6, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE3E, 0x00000000, 0xFFFFFFA6, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802424B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
        .extraAnimations = N(extraAnimationList_8024233C),
    },
};

NpcGroupList N(npcGroupList_80243924) = {
    NPC_GROUP(N(npcGroup_802429A4), 0x1D000005),
    NPC_GROUP(N(npcGroup_80243164), 0x1D000005),
    NPC_GROUP(N(npcGroup_80243544), 0x1D0B0005),
    {},
};

s32 pad_003954[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243960) = SCRIPT({
    PlaySoundAtNpc(0, 0x8000006C, 0);
    loop {
        func_8024174C_D313CC(80, 10);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 3;
        func_80241610_D31290(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        func_802416A4_D31324(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 6;
    }
});

Script N(script_80243A18) = SCRIPT({
    DisablePlayerInput(1);
    ModifyColliderFlags(1, 27, 0x7FFFFE00);
    ModifyColliderFlags(0, 27, 0x8000);
    spawn {
        EnableModel(22, 1);
        PlaySoundAtCollider(25, 923, 0);
        MakeLerp(0xFFFFFF88, 0, 60, 10);
    0:
        UpdateLerp();
        TranslateGroup(23, 0, SI_VAR(0), 0);
        UpdateColliderTransform(25);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 0;
        }
    }
    SetNpcFlagBits(0xFFFFFFFC, 2, 1);
    SetNpcFlagBits(0, 256, 1);
    SetNpcFlagBits(1, 256, 1);
    EnableNpcShadow(0xFFFFFFFC, 0);
    GetNpcPos(0xFFFFFFFC, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    GetPlayerPos(SI_VAR(5), SI_VAR(6), SI_VAR(7));
    spawn {
        SetNpcPos(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) -= 30;
        MakeLerp(SI_VAR(2), SI_VAR(5), 20, 4);
    1:
        UpdateLerp();
        SetNpcPos(0, SI_VAR(0), SI_VAR(3), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
    }
    SetNpcPos(1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(5) -= 60;
    MakeLerp(SI_VAR(2), SI_VAR(5), 20, 4);
2:
    UpdateLerp();
    SetNpcPos(1, SI_VAR(0), SI_VAR(3), SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    InterpPlayerYaw(270, 0);
    sleep 70;
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(0xFFFFFFFC, 4, 1);
    SetNpcAnimation(0, 0x20003);
    SetNpcAnimation(1, 0x20003);
    InterpNpcYaw(0, 270, 0);
    InterpNpcYaw(1, 90, 0);
    sleep 15;
    PlaySoundAtNpc(1, 611, 0);
    ShowEmote(1, 2, 45, 20, 1, 0, 0, 0, 0);
    sleep 15;
    PlaySoundAtNpc(0, 611, 0);
    ShowEmote(0, 2, 0, 20, 1, 0, 0, 0, 0);
    sleep 15;
    PlaySoundAtPlayer(611, 0);
    ShowEmote(0, 2, 0xFFFFFFD3, 20, 0, 0, 0, 0, 0);
    sleep 15;
    PlaySoundAtNpc(1, 611, 0);
    ShowEmote(1, 2, 45, 20, 1, 0, 0, 0, 0);
    sleep 15;
    PlaySoundAtNpc(0, 611, 0);
    ShowEmote(0, 2, 0, 20, 1, 0, 0, 0, 0);
    SpeakToPlayer(0, 0x20003, 0x20003, 5, 0x12011F);
    spawn {
        SetNpcAnimation(0, 0x20006);
        SetNpcJumpscale(0, 1.0);
        NpcJump1(0, 0xFFFFFBDA, 0xFFFFFF88, 0xFFFFFFDB, 15);
        SetNpcAnimation(0, 0x20003);
    }
    spawn {
        SetNpcAnimation(1, 0x20006);
        SetNpcJumpscale(1, 1.0);
        NpcJump1(1, 0xFFFFFB6C, 0xFFFFFF88, 0xFFFFFFDB, 15);
        SetNpcAnimation(1, 0x20003);
    }
    sleep 5;
    ShowMessageAtScreenPos(0x120120, 160, 40);
    sleep 20;
    SetCamLeadPlayer(0, 0);
    GetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    GetPlayerPos(SI_VAR(4), SI_VAR(5), SI_VAR(6));
    SI_VAR(1) += SI_VAR(4);
    SI_VAR(2) += SI_VAR(5);
    SI_VAR(3) += SI_VAR(6);
    SI_VAR(1) /= 2.0;
    SI_VAR(2) /= 2.0;
    SI_VAR(3) /= 2.0;
    UseSettingsFrom(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPanTarget(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 15.0, -8.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlayerFaceNpc(0, 0);
    SpeakToPlayer(0, 0x2000E, 0x20003, 0, 0x120121);
    GetNpcPos(1, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    SI_VAR(7) += SI_VAR(4);
    SI_VAR(8) += SI_VAR(5);
    SI_VAR(9) += SI_VAR(6);
    SI_VAR(7) /= 2.0;
    SI_VAR(8) /= 2.0;
    SI_VAR(9) /= 2.0;
    SetPanTarget(0, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    SetCamSpeed(0, 1.5);
    WaitForCam(0, 1.0);
    PlayerFaceNpc(1, 0);
    SpeakToPlayer(1, 0x2000E, 0x20003, 0, 0x120122);
    SetPanTarget(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    WaitForCam(0, 1.0);
    PlayerFaceNpc(0, 0);
    SpeakToPlayer(0, 0x2000E, 0x20003, 0, 0x120123);
    SetPanTarget(0, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    WaitForCam(0, 1.0);
    PlayerFaceNpc(1, 0);
    SpeakToPlayer(1, 0x2000E, 0x20003, 0, 0x120124);
    SetPanTarget(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    WaitForCam(0, 1.0);
    PlayerFaceNpc(0, 0);
    SpeakToPlayer(0, 0x2000E, 0x20003, 0, 0x120125);
    SetPanTarget(0, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    WaitForCam(0, 1.0);
    PlayerFaceNpc(1, 0);
    SpeakToPlayer(1, 0x2000E, 0x20003, 0, 0x120126);
    SetPanTarget(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    WaitForCam(0, 1.0);
    PlayerFaceNpc(0, 0);
    SpeakToPlayer(0, 0x2000E, 0x20003, 0, 0x120127);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 400.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlayerFaceNpc(1, 0);
    SpeakToPlayer(1, 0x2000E, 0x20003, 0, 0x120128);
    PlayerFaceNpc(0, 0);
    SpeakToPlayer(0, 0x2000E, 0x20003, 0, 0x120129);
    SetNpcFlagBits(0, 256, 0);
    SetNpcFlagBits(1, 256, 0);
    DisablePlayerInput(0);
    SetPlayerFlagBits(192, 1);
    unbind;
});

Script N(script_80244680) = SCRIPT({
    DisablePlayerInput(1);
    SetNpcAnimation(0, 0x2000C);
    sleep 20;
    SetNpcAnimation(0, 0x20003);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(0) +=f SI_VAR(3);
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(0) /= 2;
    SI_VAR(1) /= 2;
    SI_VAR(2) /= 2;
    SI_VAR(6) =f SI_VAR(0);
    SI_VAR(7) =f SI_VAR(1);
    SI_VAR(8) =f SI_VAR(2);
    SI_VAR(0) +=f SI_VAR(3);
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(0) /= 2.0;
    SI_VAR(1) /= 2.0;
    SI_VAR(2) /= 2.0;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 15.0, -8.0);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x2000F, 0x20002, 0, 0x12012C);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) =f SI_VAR(6);
    SI_VAR(4) =f SI_VAR(7);
    SI_VAR(5) =f SI_VAR(8);
    SI_VAR(3) +=f SI_VAR(0);
    SI_VAR(4) +=f SI_VAR(1);
    SI_VAR(5) +=f SI_VAR(2);
    SI_VAR(3) /= 2.0;
    SI_VAR(4) /= 2.0;
    SI_VAR(5) /= 2.0;
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamSpeed(0, 1.5);
    WaitForCam(0, 1.0);
    PlayerFaceNpc(1, 0);
    SpeakToPlayer(1, 0x20011, 0x20003, 0, 0x12012D);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) =f SI_VAR(6);
    SI_VAR(4) =f SI_VAR(7);
    SI_VAR(5) =f SI_VAR(8);
    SI_VAR(3) +=f SI_VAR(0);
    SI_VAR(4) +=f SI_VAR(1);
    SI_VAR(5) +=f SI_VAR(2);
    SI_VAR(3) /= 2.0;
    SI_VAR(4) /= 2.0;
    SI_VAR(5) /= 2.0;
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamSpeed(0, 90.0);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x2000F, 0x20002, 0, 0x12012E);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) =f SI_VAR(6);
    SI_VAR(4) =f SI_VAR(7);
    SI_VAR(5) =f SI_VAR(8);
    SI_VAR(3) +=f SI_VAR(0);
    SI_VAR(4) +=f SI_VAR(1);
    SI_VAR(5) +=f SI_VAR(2);
    SI_VAR(3) /= 2.0;
    SI_VAR(4) /= 2.0;
    SI_VAR(5) /= 2.0;
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamSpeed(0, 1.5);
    WaitForCam(0, 1.0);
    SpeakToPlayer(1, 0x2000E, 0x20003, 0, 0x12012F);
    SetNpcFlagBits(0, 256, 1);
    SetNpcFlagBits(1, 256, 1);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    GetAngleBetweenNPCs(0, 1, SI_VAR(9));
    GetDist2D(SI_VAR(10), SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(5));
    SI_VAR(10) *= 0.6005859375;
    AddVectorPolar(SI_VAR(0), SI_VAR(2), SI_VAR(10), SI_VAR(9));
    SetNpcJumpscale(0, 1.0);
    SetNpcAnimation(0, 0x20006);
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    NpcJump0(0, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10);
    WaitForCam(0, 1.0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 400.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SI_MAP_VAR(0) = spawn N(script_80243960);
    spawn {
        SetPlayerSpeed(3.0);
        PlayerMoveTo(SI_VAR(6), SI_VAR(8), 0);
    }
    SetNpcAnimation(0, 0x20005);
    SetNpcAnimation(1, 0x20005);
    PlayerFaceNpc(0, 0);
    loop 3 {
        GetNpcYaw(0, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(0, SI_VAR(0), 0);
        GetNpcYaw(1, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(1, SI_VAR(0), 0);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 3;
        func_80241610_D31290(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 5;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) += 0xFFFFFFE2;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    spawn {
        SetNpcJumpscale(0, 1.0);
        NpcJump1(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    }
    SetNpcJumpscale(1, 1.0);
    NpcJump1(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    PlayerFaceNpc(0, 0);
    loop 3 {
        GetNpcYaw(0, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(0, SI_VAR(0), 0);
        GetNpcYaw(1, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(1, SI_VAR(0), 0);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 3;
        func_80241610_D31290(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 5;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 55;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    spawn {
        SetNpcJumpscale(0, 0.0);
        NpcJump1(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    }
    SetNpcJumpscale(1, 0.0);
    NpcJump1(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    PlayerFaceNpc(0, 0);
    loop 5 {
        GetNpcYaw(0, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(0, SI_VAR(0), 0);
        GetNpcYaw(1, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(1, SI_VAR(0), 0);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 3;
        func_80241610_D31290(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 4;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    SI_VAR(2) += 30;
    spawn {
        SetNpcJumpscale(0, 1.0);
        NpcJump1(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    }
    SetNpcJumpscale(1, 1.0);
    NpcJump1(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    PlayerFaceNpc(0, 0);
    loop 6 {
        GetNpcYaw(0, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(0, SI_VAR(0), 0);
        GetNpcYaw(1, SI_VAR(0));
        SI_VAR(0) += 180;
        InterpNpcYaw(1, SI_VAR(0), 0);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 3;
        func_80241610_D31290(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 6;
    }
    StopSound(0x8000006C);
    kill SI_MAP_VAR(0);
    RandInt(100, SI_VAR(0));
    if (SI_VAR(0) > 50) {
        spawn {
            InterpNpcYaw(0, 270, 0);
            SetNpcJumpscale(0, 2.0);
            NpcJump1(0, 0xFFFFFBDA, 0xFFFFFF88, 0xFFFFFFDB, 15);
        }
        spawn {
            InterpNpcYaw(1, 90, 0);
            SetNpcJumpscale(1, 2.0);
            NpcJump1(1, 0xFFFFFB6C, 0xFFFFFF88, 0xFFFFFFDB, 15);
        }
    } else {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        spawn {
            InterpNpcYaw(0, 90, 0);
            SetNpcJumpscale(0, 2.0);
            NpcJump1(0, 0xFFFFFB6C, 0xFFFFFF88, 0xFFFFFFDB, 15);
        }
        spawn {
            InterpNpcYaw(1, 270, 0);
            SetNpcJumpscale(1, 2.0);
            NpcJump1(1, 0xFFFFFBDA, 0xFFFFFF88, 0xFFFFFFDB, 15);
        }
    }
    sleep 30;
    SetNpcAnimation(0, 0x20003);
    SetNpcAnimation(1, 0x20003);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(3) +=f SI_VAR(0);
    SI_VAR(4) +=f SI_VAR(1);
    SI_VAR(5) +=f SI_VAR(2);
    SI_VAR(3) /= 2.0;
    SI_VAR(4) /= 2.0;
    SI_VAR(5) /= 2.0;
    GetNpcPos(1, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    SI_VAR(6) +=f SI_VAR(0);
    SI_VAR(7) +=f SI_VAR(1);
    SI_VAR(8) +=f SI_VAR(2);
    SI_VAR(6) /= 2.0;
    SI_VAR(7) /= 2.0;
    SI_VAR(8) /= 2.0;
    RandInt(100, SI_VAR(0));
    if (SI_VAR(0) > 50) {
        UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetCamDistance(0, 205.0);
        SetCamPitch(0, 15.0, -9.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PlayerFaceNpc(0, 0);
        SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x120125);
        SetPanTarget(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        SetCamSpeed(0, 1.5);
        WaitForCam(0, 1.0);
        PlayerFaceNpc(1, 0);
        SpeakToPlayer(1, 0x2000D, 0x20003, 0, 0x120124);
        SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        WaitForCam(0, 1.0);
        PlayerFaceNpc(0, 0);
        SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x120127);
        SetPanTarget(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        WaitForCam(0, 1.0);
        PlayerFaceNpc(1, 0);
        SpeakToPlayer(1, 0x2000D, 0x20003, 0, 0x120126);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 400.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PlayerFaceNpc(0, 0);
        SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x120129);
        PlayerFaceNpc(1, 0);
        SpeakToPlayer(1, 0x2000D, 0x20003, 0, 0x120128);
    } else {
        UseSettingsFrom(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        SetPanTarget(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        SetCamDistance(0, 205.0);
        SetCamPitch(0, 15.0, -9.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PlayerFaceNpc(1, 0);
        SpeakToPlayer(1, 0x2000D, 0x20003, 0, 0x120124);
        SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetCamSpeed(0, 1.0);
        WaitForCam(0, 1.0);
        PlayerFaceNpc(0, 0);
        SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x120125);
        SetPanTarget(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        WaitForCam(0, 1.0);
        PlayerFaceNpc(1, 0);
        SpeakToPlayer(1, 0x2000D, 0x20003, 0, 0x120126);
        SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        WaitForCam(0, 1.0);
        PlayerFaceNpc(0, 0);
        SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x120127);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 400.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PlayerFaceNpc(1, 0);
        SpeakToPlayer(1, 0x2000D, 0x20003, 0, 0x120128);
        PlayerFaceNpc(0, 0);
        SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x120129);
    }
    SetNpcFlagBits(0, 256, 0);
    SetNpcFlagBits(1, 256, 0);
    DisablePlayerInput(0);
    SetPlayerFlagBits(192, 1);
});

Script N(script_80245EB0) = SCRIPT({
    DisablePlayerInput(1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 15.0, -8.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(1, 0x2000C);
    sleep 20;
    PlaySoundAtNpc(1, 8376, 0);
    loop 10 {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 3;
        func_80241610_D31290(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 5;
    }
    PlaySoundAtNpc(1, 717, 0);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    EnableNpcShadow(1, 0);
    SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(0, 2880, 40, 4);
1:
    UpdateLerp();
    SetNpcRotation(2, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    GetAngleToPlayer(2, SI_VAR(0));
    InterpNpcYaw(2, SI_VAR(0), 0);
    spawn {
        SI_MAP_FLAG(0) = 0;
        GetAngleToNPC(0, SI_VAR(0));
        GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        AddVectorPolar(SI_VAR(1), SI_VAR(3), 40.0, SI_VAR(0));
        SetNpcSpeed(0, 3.0);
        SetNpcAnimation(0, 0x20005);
        SetNpcFlagBits(0, 256, 1);
        NpcMoveTo(0, SI_VAR(1), SI_VAR(3), 0);
        SetNpcAnimation(0, 0x20003);
        SI_MAP_FLAG(0) = 1;
    }
    PlayerFaceNpc(2, 0);
    SpeakToPlayer(2, 0x4E0005, 0x4E0002, 0, 0x120130);
0:
    if (SI_MAP_FLAG(0) == 0) {
        sleep 1;
        goto 0;
    }
    SpeakToPlayer(0, 0x2000D, 0x20003, 5, 0x120131);
    sleep 10;
    SpeakToPlayer(2, 0x4E0005, 0x4E0002, 0, 0x120132);
    SetNpcAnimation(2, 0x4E0006);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    EnableNpcShadow(0, 0);
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcYaw(0, SI_VAR(0));
    SetNpcYaw(0xFFFFFFFC, SI_VAR(0));
    SetNpcFlagBits(0xFFFFFFFC, 6, 0);
    EnableNpcShadow(0xFFFFFFFC, 1);
    EnablePartnerAI();
    SetNpcVar(2, 0, 1);
});

Script N(script_80246424) = SCRIPT({
    ParentColliderToModel(25, 22);
    if (SI_SAVE_VAR(0) < 75) {
        TranslateGroup(23, 0, 0xFFFFFF88, 0);
        UpdateColliderTransform(25);
        EnableModel(22, 0);
        bind N(script_80243A18) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(6);
    }
});

s32 pad_0064BC[] = {
    0x00000000,
};

// rodata: D_802464C0_D36140

// rodata: D_802464C8_D36148

// rodata: D_802464D0_D36150

// rodata: jtbl_802464D8_D36158

s32 pad_006668[] = {
    0x00000000, 0x00000000,
};
