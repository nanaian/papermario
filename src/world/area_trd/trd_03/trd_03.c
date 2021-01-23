#include "trd_03.h"

s32 pad_00009C[1];
s32 pad_000874[3];
Script N(script_80240A80);
Script N(script_80240ABC);
Script N(script_80240B04);
s32 pad_000B4C[1];
Script N(script_ExitDoubleDoor_80240B50);
Script N(script_ExitDoubleDoor_80240BF4);
Script N(script_ExitDoubleDoor_80240C98);
Script N(script_ExitDoubleDoor_80240D3C);
Script N(script_ExitWalk_80240DE0);
Script N(script_80240E3C);
Script N(script_EnterWalk_80240ED8);
Script N(script_80241064);
Script N(script_80241168);
Script N(script_8024126C);
Script N(main);
s32 pad_001998[2];
Script N(script_MakeEntities);
s32 pad_001A94[3];
Script N(script_NpcAI_80241AD0);
Script N(script_80241BC8);
s32 unk_missing_80241BE8[11];
Script N(script_80241C14);
Script N(script_Init_80242334);
Script N(script_Idle_8024236C);
Script N(script_Init_802423F8);
Script N(script_Idle_8024241C);
Script N(script_Init_80242620);
StaticNpc N(npcGroup_80242644)[1];
StaticNpc N(npcGroup_80242834)[1];
StaticNpc N(npcGroup_80242A24)[1];
StaticNpc N(npcGroup_80242C14)[1];
NpcGroupList N(npcGroupList_80242E04);
Script N(script_80242E40);
Script N(script_80242FCC);
Script N(script_802430A0);
Script N(script_80243174);
Script N(script_8024374C);
s32 pad_003D24[3];
const char D_80243D30_9A8380[8]; // "trd_02"
const char D_80243D38_9A8388[8]; // "trd_04"
s32 pad_003D9C[1];

// text: func_80240000_9A4650

// text: func_8024006C_9A46BC

s32 pad_00009C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024011C_9A476C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240434_9A4A84

s32 pad_000874[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240880_9A4ED0

EntryList N(entryList) = {
    { -647.0f, 0.0f, 80.0f, 90.0f },
    { 537.0f, 0.0f, 80.0f, 270.0f },
    { -647.0f, 180.0f, -100.0f, 90.0f },
    { 537.0f, 180.0f, -100.0f, 270.0f },
    { -645.0f, 45.0f, -100.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190051,
};

Script N(script_80240A80) = SCRIPT({
    SetMusicTrack(0, 20, 0, 8);
    UseDoorSounds(1);
});

Script N(script_80240ABC) = SCRIPT({
    FadeInMusic(1, 81, 0, 3000, 0, 127);
    FadeOutMusic(0, 3000);
});

Script N(script_80240B04) = SCRIPT({
    FadeInMusic(0, 20, 0, 3000, 0, 127);
    FadeOutMusic(1, 3000);
});

s32 pad_000B4C[] = {
    0x00000000,
};

Script N(script_ExitDoubleDoor_80240B50) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 45;
    SI_VAR(3) = 47;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243D30_9A8380, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240BF4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 49;
    SI_VAR(3) = 51;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243D38_9A8388, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240C98) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 17;
    SI_VAR(2) = 57;
    SI_VAR(3) = 59;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243D30_9A8380, 3);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240D3C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 12;
    SI_VAR(2) = 53;
    SI_VAR(3) = 55;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243D38_9A8388, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240DE0) = SCRIPT({
    group 27;
    UseExitHeading(40, 4);
    spawn ExitWalk;
    GotoMap(D_80243D30_9A8380, 4);
    sleep 100;
});

Script N(script_80240E3C) = SCRIPT({
    bind N(script_ExitDoubleDoor_80240B50) to TriggerFlag_WALL_INTERACT 2;
    bind N(script_ExitDoubleDoor_80240BF4) to TriggerFlag_WALL_INTERACT 7;
    bind N(script_ExitDoubleDoor_80240C98) to TriggerFlag_WALL_INTERACT 17;
    bind N(script_ExitDoubleDoor_80240D3C) to TriggerFlag_WALL_INTERACT 12;
    bind N(script_ExitWalk_80240DE0) to 0x80000 21;
});

Script N(script_EnterWalk_80240ED8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 45;
            SI_VAR(3) = 47;
            await EnterDoubleDoor;
            spawn N(script_80240E3C);
        }
        == 1 {
            SI_VAR(2) = 49;
            SI_VAR(3) = 51;
            await EnterDoubleDoor;
            spawn N(script_80240E3C);
        }
        == 2 {
            SI_VAR(2) = 57;
            SI_VAR(3) = 59;
            await EnterDoubleDoor;
            spawn N(script_80240E3C);
        }
        == 3 {
            SI_VAR(2) = 53;
            SI_VAR(3) = 55;
            await EnterDoubleDoor;
            spawn N(script_80240E3C);
        }
        == 4 {
            SI_VAR(0) = N(script_80240E3C);
            spawn EnterWalk;
        }
    }
});

Vec4f N(triggerCoord_80241044) =  { -160.0f, 0.0f, -10.0f, 0.0f };

Vec4f N(triggerCoord_80241054) =  { 360.0f, 0.0f, -10.0f, 0.0f };

Script N(script_80241064) = SCRIPT({
    PlayEffect(66, 0, 40, 10, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(32, 1);
    loop 10 {
        SetGroupEnabled(40, 1);
        sleep 1;
        SetGroupEnabled(40, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 25, 0x7FFFFE00);
    ModifyColliderFlags(0, 27, 0x7FFFFE00);
    SI_SAVE_FLAG(656) = 1;
    unbind;
});

Script N(script_80241168) = SCRIPT({
    PlayEffect(66, 0, 43, 10, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(33, 1);
    loop 10 {
        SetGroupEnabled(43, 1);
        sleep 1;
        SetGroupEnabled(43, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 30, 0x7FFFFE00);
    ModifyColliderFlags(0, 32, 0x7FFFFE00);
    SI_SAVE_FLAG(657) = 1;
    unbind;
});

Script N(script_8024126C) = SCRIPT({
    SI_VAR(11) = 0;
    SI_VAR(12) = 0.0;
    SI_VAR(13) = 0;
    SI_VAR(14) = 0;
    CloneModel(8, 10000);
    EnableModel(10000, 0);
    ParentColliderToModel(35, 10000);
    CloneModel(8, 0x2711);
    EnableModel(0x2711, 0);
    ParentColliderToModel(37, 0x2711);
0:
    if (SI_VAR(13) == 0) {
        func_80240000_9A4650(SI_VAR(0));
        match SI_VAR(0) {
            == 1 {
                func_8024006C_9A46BC(SI_VAR(1));
                SI_VAR(1) -= SI_VAR(10);
                if (SI_VAR(1) == 1) {
                    SI_VAR(11) += 1;
                    SI_VAR(12) -= 0.1005859375;
                } else {
                    SI_VAR(11) = 0;
                }
                if (SI_VAR(11) > 15) {
                    SI_VAR(11) = 0;
                    SI_VAR(13) = 8;
                }
                if (SI_VAR(12) < 0xFFFFFFFD) {
                    SI_VAR(13) = 8;
                }
            }
            == 2 {
                SI_VAR(13) = 0xFFFFFFF8;
            }
            else {
                SI_VAR(11) = 0;
                if (SI_VAR(12) < 0) {
                    SI_VAR(12) += 0.2001953125;
                    if (SI_VAR(12) > 0) {
                        SI_VAR(12) = 0.0;
                    }
                } else {
                    SI_VAR(12) -= 0.2001953125;
                    if (SI_VAR(12) < 0) {
                        SI_VAR(12) = 0.0;
                    }
                }
            }
        }
        ModifyColliderFlags(1, 35, 0x7FFFFFFF);
        ModifyColliderFlags(1, 37, 0x7FFFFFFF);
        TranslateModel(10000, SI_VAR(12), 0, 0);
        TranslateModel(0x2711, SI_VAR(12), 0, 0);
        UpdateColliderTransform(35);
        UpdateColliderTransform(37);
    } else {
        SI_VAR(12) = 0.0;
        ModifyColliderFlags(0, 35, 0x7FFFFFFF);
        ModifyColliderFlags(0, 37, 0x7FFFFFFF);
        if (SI_VAR(13) > 0) {
            SI_VAR(13) -= 1;
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(3) =f SI_VAR(13);
            SI_VAR(3) *= 1.80078125;
            SI_VAR(0) -=f SI_VAR(3);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        } else {
            SI_VAR(13) += 1;
        }
    }
    func_8024006C_9A46BC(SI_VAR(10));
    sleep 1;
    goto 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242E04));
    await N(script_MakeEntities);
    if (SI_SAVE_VAR(0) < 0xFFFFFFA8) {
        spawn N(script_80241C14);
    } else {
        spawn N(script_EnterWalk_80240ED8);
    }
    if (SI_SAVE_FLAG(655) == 0) {
        EnableModel(30, 0);
    } else {
        SetGroupEnabled(37, 0);
        ModifyColliderFlags(0, 20, 0x7FFFFE00);
        ModifyColliderFlags(0, 22, 0x7FFFFE00);
    }
    if (SI_SAVE_FLAG(656) == 0) {
        EnableModel(32, 0);
        bind N(script_80241064) to TriggerFlag_BOMB N(triggerCoord_80241044);
    } else {
        SetGroupEnabled(40, 0);
        ModifyColliderFlags(0, 25, 0x7FFFFE00);
        ModifyColliderFlags(0, 27, 0x7FFFFE00);
    }
    if (SI_SAVE_FLAG(657) == 0) {
        EnableModel(33, 0);
        bind N(script_80241168) to TriggerFlag_BOMB N(triggerCoord_80241054);
    } else {
        SetGroupEnabled(43, 0);
        ModifyColliderFlags(0, 30, 0x7FFFFE00);
        ModifyColliderFlags(0, 32, 0x7FFFFE00);
    }
    spawn N(script_80240A80);
    if (SI_SAVE_VAR(0) < 0xFFFFFFA8) {
        TranslateModel(12, 0, 100, -1);
    }
    await N(script_80242E40);
    spawn N(script_8024126C);
});

s32 pad_001998[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    SI_MAP_VAR(0) = 0;
    MakeEntity(0x802E9BB0, 0xFFFFFEC5, 120, 0xFFFFFF9C, 0, 0x80000000);
    AssignScript(N(script_80243174));
    MakeEntity(0x802E9BB0, 210, 120, 0xFFFFFF9C, 0, 0x80000000);
    AssignScript(N(script_8024374C));
    MakeItemEntity(16, 0xFFFFFDBC, 0, 0xFFFFFFC4, 0, SI_SAVE_FLAG(646));
    MakeItemEntity(16, 470, 0, 0xFFFFFFC4, 0, SI_SAVE_FLAG(647));
    MakeItemEntity(228, 0xFFFFFFCE, 0, 0xFFFFFFC4, 17, SI_SAVE_FLAG(639));
});

s32 pad_001A94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80241AA0) = {
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

Script N(script_NpcAI_80241AD0) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_80240434_9A4A84(N(aISettings_80241AA0));
});

NpcSettings N(npcSettings_80241B40) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241AD0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241B6C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80241B98) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0xA,
    .alertRadius = 110.0f,
    .unk_10 = 65.0f,
    .unk_14 = 0x8,
    .chaseSpeed = 3.4f,
    .unk_1C = 0x78,
    .unk_20 = 0x2,
    .chaseRadius = 110.0f,
    .unk_28 = 65.0f,
    .unk_2C = 0x1,
};

Script N(script_80241BC8) = SCRIPT({
    DoBasicAI(N(aISettings_80241B98));
});

s32 unk_missing_80241BE8[] = {
    0x00000000, 0x00170014, 0x00000000, 0x00000000, N(script_80241BC8), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x00060000,
};

Script N(script_80241C14) = SCRIPT({
    DisablePlayerInput(1);
    spawn N(script_80240ABC);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFD30, 0, 75);
    SetPlayerPos(0xFFFFFD44, 0, 80);
    SetNpcAnimation(0, 0x660305);
    SetNpcPos(0, 0xFFFFFDC6, 0, 0xFFFFFFC7);
    InterpNpcYaw(0, 270, 0);
    spawn {
        UseSettingsFrom(0, 0xFFFFFDA1, 0, 80);
        SetCamDistance(0, 320);
        SetPanTarget(0, 0xFFFFFDA1, 0, 80);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
    }
    sleep 10;
    SetNpcAnimation(0, 0x660304);
    sleep 15;
    InterpNpcYaw(0, 90, 0);
    sleep 3;
    SetNpcAnimation(0, 0x660303);
    SetNpcSpeed(0, 2.6005859375);
    NpcMoveTo(0, 0xFFFFFDD5, 20, 0);
    InterpNpcYaw(10, 270, 0);
    sleep 15;
    SetNpcAnimation(0, 0x660304);
    sleep 2;
    SetNpcAnimation(0, 0x660314);
    sleep 25;
    SetNpcAnimation(0, 0x660304);
    SetNpcAnimation(10, 0x290109);
    sleep 25;
    SetNpcAnimation(10, 0x290101);
    spawn {
        PlaySoundAtCollider(54, 619, 0);
        MakeLerp(100, 0, 40, 1);
    0:
        UpdateLerp();
        TranslateModel(12, 0, SI_VAR(0), -1);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 0;
        }
        PlaySoundAtCollider(54, 620, 0);
        ShakeCam(0, 0, 5, 1.0);
        sleep 10;
    }
    sleep 10;
    SetNpcAnimation(0, 0x660303);
    SetNpcSpeed(0, 2.0);
    NpcMoveTo(0, 0xFFFFFDDA, 70, 0);
    SetNpcAnimation(0, 0x660304);
    sleep 15;
    sleep 10;
    SpeakToPlayer(0, 0x660314, 0x660304, 5, 0xC00D3);
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 4.0);
    sleep 10;
    PlaySoundAtCollider(2, 451, 0);
    MakeLerp(0, 80, 10, 0);
10:
    UpdateLerp();
    RotateModel(45, SI_VAR(0), 0, -1, 0);
    RotateModel(47, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    EnablePartnerAI();
    SetPlayerPos(0xFFFFFD79, 0, 80);
    await N(script_EnterWalk_80240ED8);
    InterpNpcYaw(0, 270, 5);
    0x802CFD30(0, 5, 4, 2, 1, 0);
    SetNpcAnimation(0, 0x66031E);
    sleep 12;
    0x802CFD30(0, 0, 0, 0, 0, 0);
    SetNpcAnimation(0, 0x660304);
    sleep 10;
    SpeakToPlayer(0, 0x660314, 0x660304, 0, 0xC00D4);
    SetNpcAnimation(0, 0x660302);
    InterpNpcYaw(0, 45, 2);
    PlaySoundAtNpc(0, 371, 0);
    SetNpcAnimation(0, 0x660303);
    SetNpcJumpscale(0, 0.80078125);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    sleep 8;
    PlaySoundAtNpc(0, 372, 0);
    SetNpcSpeed(0, 8.0);
    NpcMoveTo(0, 0xFFFFFED4, 70, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFA8;
    RemoveNpc(0);
    DisablePlayerInput(0);
    spawn N(script_80240B04);
});

Script N(script_Init_80242334) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA8) {
        RemoveNpc(-1);
    }
});

Script N(script_Idle_8024236C) = SCRIPT({
0:
    sleep 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFA8) {
        goto 0;
    }
    sleep 10;
    SetNpcAnimation(-1, 0x290103);
    sleep 10;
    BindNpcAI(-1, N(script_NpcAI_80241AD0));
});

Script N(script_Init_802423F8) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024236C));
});

Script N(script_Idle_8024241C) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 0xFFFFFF6A) {
        goto 0;
    }
    SetNpcAnimation(-1, 0x290109);
    SetNpcJumpscale(-1, 1.0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    SetNpcAnimation(-1, 0x290103);
1:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 0xFFFFFF9C) {
        goto 1;
    }
    SetNpcAnimation(-1, 0x290104);
    SetNpcSpeed(-1, 7.0);
    NpcMoveTo(-1, 35, 0xFFFFFF7E, 0);
    SetNpcFlagBits(-1, 64, 1);
    NpcMoveTo(-1, 90, 0xFFFFFF7E, 0);
    SetNpcFlagBits(-1, 64, 0);
    NpcMoveTo(-1, 105, 10, 0);
    SetNpcAnimation(-1, 0x290103);
    BindNpcAI(-1, N(script_NpcAI_80241AD0));
});

Script N(script_Init_80242620) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024241C));
});

StaticNpc N(npcGroup_80242644)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241B6C),
        .pos = { -569.0, 0.0, -57.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80242334),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00660304, 0x00660302, 0x00660303, 0x00660303, 0x00660304, 0x00660304, 0x0066030A, 0x0066030A, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303,
        },
    },
};

StaticNpc N(npcGroup_80242834)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80241B40),
        .pos = { -520.0, 0.0, 15.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_802423F8),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0xFFFFFDF8, 0x00000000, 0x0000000F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFDF8, 0x00000000, 0x0000000F, 0x0000015E, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80242A24)[] = {
    {
        .id = 11,
        .settings = &N(npcSettings_80241B40),
        .pos = { -52.0, 0.0, -21.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80242620),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0xFFFFFFCC, 0x00000000, 0xFFFFFFEB, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFCC, 0x00000000, 0xFFFFFFEB, 0x0000015E, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80242C14)[] = {
    {
        .id = 12,
        .settings = &N(npcSettings_80241B40),
        .pos = { 375.0, 0.0, 15.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0x00000177, 0x00000000, 0x0000000F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000177, 0x00000000, 0x0000000F, 0x0000015E, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

NpcGroupList N(npcGroupList_80242E04) = {
    NPC_GROUP(N(npcGroup_80242644), 0x00000002),
    NPC_GROUP(N(npcGroup_80242834), 0x06030002),
    NPC_GROUP(N(npcGroup_80242A24), 0x06040002),
    NPC_GROUP(N(npcGroup_80242C14), 0x06030002),
    {},
};

Script N(script_80242E40) = SCRIPT({
    TranslateModel(14, 0, 0, 0xFFFFFFA1);
    TranslateModel(15, 0, 0, 0xFFFFFFA1);
    TranslateModel(16, 0, 0, 0xFFFFFFA1);
    TranslateModel(17, 0, 0, 0xFFFFFFA1);
    TranslateModel(18, 0, 0, 0xFFFFFF6F);
    TranslateModel(19, 0, 0, 0xFFFFFF6F);
    TranslateModel(20, 0, 0, 0xFFFFFF6F);
    ModifyColliderFlags(0, 50, 0x7FFFFE00);
    ModifyColliderFlags(0, 51, 0x7FFFFE00);
    ModifyColliderFlags(0, 52, 0x7FFFFE00);
    ModifyColliderFlags(0, 53, 0x7FFFFE00);
    ModifyColliderFlags(0, 59, 0x7FFFFE00);
    ModifyColliderFlags(0, 58, 0x7FFFFE00);
    ModifyColliderFlags(0, 57, 0x7FFFFE00);
    SI_MAP_VAR(0) = 0;
});

Script N(script_80242FCC) = SCRIPT({
    MakeLerp(0, SI_VAR(8), 7, 2);
0:
    UpdateLerp();
    TranslateModel(SI_VAR(9), 0, 0, SI_VAR(0));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    ModifyColliderFlags(0, SI_VAR(7), 0x7FFFFE00);
    PlaySound(38);
    ShakeCam(0, 0, 2, 0.30078125);
});

Script N(script_802430A0) = SCRIPT({
    MakeLerp(SI_VAR(8), 0, 7, 2);
0:
    UpdateLerp();
    TranslateModel(SI_VAR(9), 0, 0, SI_VAR(0));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    ModifyColliderFlags(1, SI_VAR(7), 0x7FFFFE00);
    PlaySound(38);
    ShakeCam(0, 0, 2, 0.30078125);
});

Script N(script_80243174) = SCRIPT({
    DisablePlayerInput(1);
123:
    GetPlayerActionState(SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) != 0) {
        goto 123;
    }
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0xFFFFFEC5, 120, 0xFFFFFFCE);
    func_80240880_9A4ED0(0xFFFFFEC5, 0xFFFFFF9C, 60);
    SetCamPosA(0, SI_VAR(0), SI_VAR(1));
    SetCamPosB(0, SI_VAR(2), SI_VAR(3));
    SetCamSpeed(0, 2.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 15;
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(7) = 57;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 20;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 53;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 17;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 52;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 16;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 58;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 19;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 51;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 15;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 50;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 14;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 59;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 18;
        spawn N(script_802430A0);
        sleep 9;
        SI_MAP_VAR(0) = 1;
    } else {
        SI_VAR(7) = 59;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 18;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 50;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 14;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 51;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 15;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 58;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 19;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 52;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 16;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 53;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 17;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 57;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 20;
        spawn N(script_80242FCC);
        sleep 9;
        SI_MAP_VAR(0) = 0;
    }
    sleep 10;
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 2.5);
    WaitForCam(0, 1.0);
    SetCamSpeed(0, 1.0);
    DisablePlayerInput(0);
});

Script N(script_8024374C) = SCRIPT({
    DisablePlayerInput(1);
123:
    GetPlayerActionState(SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) != 0) {
        goto 123;
    }
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 210, 120, 0xFFFFFFCE);
    func_80240880_9A4ED0(210, 0xFFFFFF9C, 0xFFFFFFC4);
    SetCamPosA(0, SI_VAR(0), SI_VAR(1));
    SetCamPosB(0, SI_VAR(2), SI_VAR(3));
    SetCamSpeed(0, 2.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 15;
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(7) = 59;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 18;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 50;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 14;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 51;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 15;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 58;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 19;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 52;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 16;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 53;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 17;
        spawn N(script_802430A0);
        sleep 9;
        SI_VAR(7) = 57;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 20;
        spawn N(script_802430A0);
        sleep 9;
        SI_MAP_VAR(0) = 1;
    } else {
        SI_VAR(7) = 57;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 20;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 53;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 17;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 52;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 16;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 58;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 19;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 51;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 15;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 50;
        SI_VAR(8) = 0xFFFFFFA1;
        SI_VAR(9) = 14;
        spawn N(script_80242FCC);
        sleep 9;
        SI_VAR(7) = 59;
        SI_VAR(8) = 0xFFFFFF6F;
        SI_VAR(9) = 18;
        spawn N(script_80242FCC);
        sleep 9;
        SI_MAP_VAR(0) = 0;
    }
    sleep 10;
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 2.5);
    WaitForCam(0, 1.0);
    SetCamSpeed(0, 1.0);
    DisablePlayerInput(0);
});

s32 pad_003D24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80243D30_9A8380

// rodata: D_80243D38_9A8388

// rodata: D_80243D40_9A8390

// rodata: jtbl_80243D48_9A8398

s32 pad_003D9C[] = {
    0x00000000,
};
