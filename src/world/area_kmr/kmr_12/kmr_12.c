#include "kmr_12.h"

Script N(script_80240090);
s32 pad_0000BC[1];
Script N(script_ExitWalk_802400C0);
Script N(script_ExitWalk_8024011C);
Script N(script_80240178);
Script N(main);
Script N(script_NpcAI_802402E0);
Script N(script_8024032C);
s32 unk_missing_80240448[2];
Script N(script_Idle_80240450);
Script N(script_Init_80240794);
StaticNpc N(npcGroup_802407B8)[1];
NpcGroupList N(npcGroupList_802409A8);
Script N(script_802409C0);
Script N(script_MakeEntities);
s32 pad_000AA8[2];
const char D_80240AB0_8EBE10[8]; // "kmr_07"
const char D_80240AB8_8EBE18[8]; // "kmr_11"

// text: func_80240000_8EB360

EntryList N(entryList) = {
    { -126.0f, 0.0f, 12.0f, 90.0f },
    { 471.0f, 0.0f, 12.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190040,
};

Script N(script_80240090) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

s32 pad_0000BC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802400C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240AB0_8EBE10, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024011C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240AB8_8EBE18, 0);
    sleep 100;
});

Script N(script_80240178) = SCRIPT({
    bind N(script_ExitWalk_802400C0) to 0x80000 0;
    bind N(script_ExitWalk_8024011C) to 0x80000 3;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 31;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802409A8));
    await N(script_MakeEntities);
    spawn N(script_80240090);
    SI_VAR(0) = N(script_80240178);
    spawn EnterWalk;
    sleep 1;
    bind N(script_8024032C) to TriggerFlag_WALL_INTERACT 10;
});

NpcAISettings N(aISettings_802402B0) = {
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

Script N(script_NpcAI_802402E0) = SCRIPT({
    DoBasicAI(N(aISettings_802402B0));
});

NpcSettings N(npcSettings_80240300) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802402E0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x5,
    .unk_2A = 0,
};

Script N(script_8024032C) = SCRIPT({
    group 0;
    suspend group 1;
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0167, 160, 40);
    resume group 1;
    SI_FLAG(0) = 0;
    func_80240000_8EB360();
    if (SI_VAR(0) != 0) {
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SetNpcVar(0, 0, 1);
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

s32 unk_missing_80240448[] = {
    0x00000002, 0x00000000,
};

Script N(script_Idle_80240450) = SCRIPT({
    sleep 1;
    SetSelfVar(0, 0);
    SetNpcAnimation(-1, 0x26000D);
    EnableNpcShadow(-1, 0);
    SetSelfEnemyFlagBits(32, 1);
0:
    GetSelfVar(0, SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    SetNpcFlagBits(-1, 0x240000, 1);
    sleep 3;
    SI_VAR(0) = 0.0;
    loop 9 {
        SI_VAR(0) += 10.0;
        SetNpcRotation(-1, 0, SI_VAR(0), 0);
        sleep 1;
    }
    SetNpcAnimation(-1, 0x260000);
    loop 9 {
        SI_VAR(0) += 10.0;
        SetNpcRotation(-1, 0, SI_VAR(0), 0);
        sleep 1;
    }
    SetNpcAnimation(-1, 0x260007);
    sleep 20;
    SetNpcAnimation(-1, 0x260001);
    PlaySoundAtNpc(-1, 248, 0);
    0x802CFE2C(-1, 8192);
    0x802CFD30(-1, 5, 6, 1, 1, 0);
    sleep 12;
    sleep 5;
    PlaySoundAtNpc(-1, 812, 0);
    EnableNpcShadow(-1, 1);
    SetNpcJumpscale(-1, 0.6005859375);
    NpcJump0(-1, 0xFFFFFFDD, 0, 30, 23);
    0x802CFD30(-1, 0, 0, 0, 0, 0);
    InterpNpcYaw(-1, 90, 0);
    SetNpcFlagBits(-1, 0x240000, 0);
    SetSelfEnemyFlagBits(32, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    bind N(script_8024032C) to TriggerFlag_WALL_INTERACT 10;
    BindNpcAI(-1, N(script_NpcAI_802402E0));
});

Script N(script_Init_80240794) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240450));
});

StaticNpc N(npcGroup_802407B8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240300),
        .pos = { -33.0, 30.0, -25.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80240794),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0xFFFFFFDF, 0x00000000, 0x0000001E, 0x00000028, 0x00000014, 0xFFFF8001, 0x00000001, 0x000000C8, 0x00000000, 0x00000000, 0x00000190, 0x0000003C, 0x00000001, 0x00000001 },
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

NpcGroupList N(npcGroupList_802409A8) = {
    NPC_GROUP(N(npcGroup_802407B8), 0x00010003),
    {},
};

Script N(script_802409C0) = SCRIPT({
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0168, 160, 40);
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAFDC, 436, 0, 0xFFFFFFD6, 0, 0x80000000);
    AssignScript(N(script_802409C0));
});

s32 pad_000AA8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240AB0_8EBE10

// rodata: D_80240AB8_8EBE18
