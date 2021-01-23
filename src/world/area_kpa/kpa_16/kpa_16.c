#include "kpa_16.h"

s32 pad_00030C[1];
s32 pad_00039C[1];
Script N(script_802403F0);
Script N(script_UpdateTexturePan_80240480);
Script N(script_ExitWalk_8024051C);
Script N(script_80240578);
Script N(script_EnterWalk_802405A4);
Script N(script_802405D0);
Script N(script_80240744);
s32 N(lavaResetList_80240E1C)[16];
Script N(main);
Script N(script_MakeEntities);
s32 pad_00114C[1];
Script N(script_8024117C);
Script N(script_802417F8);
Script N(script_Idle_802418DC);
Script N(script_Defeat_802420B4);
Script N(script_Init_80242140);
StaticNpc N(npcGroup_802421FC)[4];
NpcGroupList N(npcGroupList_802429BC);
s32 pad_0029D4[3];
const char D_802429E0_A5CA10[8]; // "kpa_14"
s32 pad_0029E8[2];

// text: func_80240000_A5A030

// text: func_80240124_A5A154

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_A5A340

// text: func_8024034C_A5A37C

// text: func_80240370_A5A3A0

s32 pad_00039C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 25.0f, 0.0f, -92.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190167,
};

Script N(script_802403F0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    if (SI_SAVE_FLAG(1556) == 0) {
        PlayAmbientSounds(11);
    }
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

Script N(script_UpdateTexturePan_80240480) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A5A030();
                    return;
                }
            }
        }
    }
    func_80240124_A5A154();
});

Script N(script_ExitWalk_8024051C) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_802429E0_A5CA10, 2);
    sleep 100;
});

Script N(script_80240578) = SCRIPT({
    bind N(script_ExitWalk_8024051C) to 0x80000 50;
});

Script N(script_EnterWalk_802405A4) = SCRIPT({
    SI_VAR(0) = N(script_80240578);
    spawn EnterWalk;
});

Script N(script_802405D0) = SCRIPT({
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0;
        SI_VAR(2) = 400;
        SI_VAR(3) = 0;
        SI_VAR(4) = 800;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240480);
    }
    SetTexPanner(236, 2);
    SetTexPanner(237, 2);
    SetTexPanner(238, 2);
    SetTexPanner(239, 2);
    SetTexPanner(240, 2);
    SetTexPanner(241, 2);
});

Script N(script_80240744) = SCRIPT({
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0xFFFFFB50;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFDA8;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240480);
    }
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 6144;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240480);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFCE0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFE70;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240480);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0;
        SI_VAR(2) = 3000;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240480);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 0;
        SI_VAR(2) = 3200;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240480);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 0;
        SI_VAR(2) = 2800;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240480);
    }
    SetTexPanner(16, 0);
    SetTexPanner(18, 0);
    SetTexPanner(20, 1);
    SetTexPanner(22, 1);
    SetTexPanner(24, 1);
    SetTexPanner(9, 2);
    SetTexPanner(10, 2);
    SetTexPanner(11, 2);
    SetTexPanner(14, 2);
    SetTexPanner(12, 2);
    SetTexPanner(13, 2);
    SetTexPanner(15, 2);
    SetTexPanner(26, 3);
    SetTexPanner(27, 4);
    SetTexPanner(28, 5);
    SetTexPanner(29, 5);
});

s32 N(lavaResetList_80240E1C)[] = {
    0x00000028, 0x43EB0000, 0x41F00000, 0xC1F00000, 0x00000029, 0x43EB0000, 0x41F00000, 0xC1F00000,
    0x00000027, 0x43FA0000, 0x43660000, 0xC30C0000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_FLAG(1557) == 1) {
        ModifyColliderFlags(0, 55, 0x7FFFFE00);
    }
    MakeNpcs(1, N(npcGroupList_802429BC));
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(1556) == 0) {
        EnableGroup(252, 0);
        spawn N(script_80240744);
        ModifyColliderFlags(0, 47, 0x7FFFFE00);
    } else {
        EnableGroup(130, 0);
        spawn N(script_802405D0);
        ModifyColliderFlags(0, 46, 0x7FFFFE00);
    }
    spawn N(script_EnterWalk_802405A4);
    spawn N(script_802403F0);
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 2;
            ModifyColliderFlags(3, 46, 3);
            ModifyColliderFlags(3, 43, 3);
            ModifyColliderFlags(3, 44, 3);
            ModifyColliderFlags(3, 45, 3);
            ModifyColliderFlags(3, 54, 3);
            ModifyColliderFlags(3, 47, 3);
            ModifyColliderFlags(3, 50, 3);
            spawn {
                ResetFromLava(N(lavaResetList_80240E1C));
            }
        }
    } else {
        ModifyColliderFlags(0, 54, 0x7FFFFE00);
    }
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1556) == 0) {
        MakeEntity(0x802E9BD4, 470, 230, 0xFFFFFF6F, 0, 0x80000000);
        AssignAreaFlag(7);
    }
});

s32 pad_00114C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80241150) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

Script N(script_8024117C) = SCRIPT({
0:
    if (SI_AREA_FLAG(7) == 0) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    loop {
        sleep 1;
        GetPlayerActionState(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 1;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350.0);
    SetCamSpeed(0, 1.0);
    SetPanTarget(0, 330, 230, 0xFFFFFF6A);
    PanToTarget(0, 0, 1);
    sleep 1;
    SetPanTarget(0, 330, 170, 0xFFFFFF6A);
    WaitForCam(0, 1.0);
    spawn {
        func_8024034C_A5A37C();
        SI_VAR(2) = 1;
        MakeLerp(0, 0xFFFFFFEC, 100, 0);
        loop {
            UpdateLerp();
            SI_VAR(2) += -0.009765625;
            TranslateModel(18, 0, SI_VAR(0), 0);
            TranslateModel(16, 0, SI_VAR(0), 0);
            ScaleModel(16, SI_VAR(2), 1, 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 50;
    MakeLerp(0, 255, 50, 0);
    loop {
        UpdateLerp();
        func_80240310_A5A340(SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ModifyColliderFlags(3, 46, 0);
    ModifyColliderFlags(3, 43, 0);
    ModifyColliderFlags(3, 44, 0);
    ModifyColliderFlags(3, 45, 0);
    ModifyColliderFlags(3, 54, 0);
    ModifyColliderFlags(3, 47, 0);
    ModifyColliderFlags(3, 50, 0);
    ModifyColliderFlags(0, 54, 0x7FFFFE00);
    spawn N(script_802405D0);
    EnableGroup(130, 0);
    EnableGroup(252, 1);
    ModifyColliderFlags(0, 46, 0x7FFFFE00);
    ModifyColliderFlags(1, 47, 0x7FFFFE00);
    SI_SAVE_FLAG(1556) = 1;
    ResetCam(0, 90.0);
    MakeLerp(255, 0, 50, 0);
    loop {
        UpdateLerp();
        func_80240310_A5A340(SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 60;
    DisablePartnerAI(0);
    GetCurrentPartnerID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 0, 0x13001B);
        }
        == 2 {
            SpeakToPlayer(0xFFFFFFFC, 0x2000D, 0x20003, 0, 0x13001C);
        }
        == 3 {
            SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0x13001D);
        }
        == 4 {
            SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 0, 0x13001E);
        }
        == 9 {
            SpeakToPlayer(0xFFFFFFFC, 0x50004, 0x50001, 0, 0x13001F);
        }
        == 6 {
            SpeakToPlayer(0xFFFFFFFC, 0x60004, 0x60001, 0, 0x130020);
        }
        == 7 {
            SpeakToPlayer(0xFFFFFFFC, 0x70004, 0x70001, 0, 0x130021);
        }
        == 8 {
            SpeakToPlayer(0xFFFFFFFC, 0x80009, 0x80001, 0, 0x130022);
        }
    }
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_802417F8) = SCRIPT({
    parallel {
        sleep 15;
        SetNpcSpeed(0, 3.0);
        NpcMoveTo(0, 650, 0xFFFFFF6F, 0);
    }
    parallel {
        sleep 10;
        SetNpcSpeed(2, 3.5);
        NpcMoveTo(2, 650, 0xFFFFFF5B, 0);
    }
    sleep 5;
    SetNpcSpeed(1, 4.0);
    NpcMoveTo(1, 650, 0xFFFFFF88, 0);
});

Script N(script_Idle_802418DC) = SCRIPT({
0:
    sleep 1;
    func_80240370_A5A3A0(SI_VAR(0));
    if (SI_VAR(0) != 39) {
        goto 0;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 230) {
        goto 0;
    }
    if (SI_VAR(0) > 710) {
        goto 0;
    }
    DisablePlayerInput(1);
    PlaySoundAtNpc(0, 610, 0);
    PlaySoundAtNpc(1, 610, 0);
    PlaySoundAtNpc(2, 610, 0);
    ShowEmote(0, 0, 0, 15, 1, 0, 0, 0, 0);
    ShowEmote(1, 0, 0, 15, 1, 0, 0, 0, 0);
    ShowEmote(2, 0, 0, 15, 1, 0, 0, 0, 0);
    sleep 15;
    InterpNpcYaw(0, 90, 0);
    InterpNpcYaw(1, 90, 0);
    InterpNpcYaw(2, 90, 0);
    InterpNpcYaw(3, 90, 0);
    SetNpcAnimation(0, 0x580006);
    SetNpcAnimation(1, 0x580006);
    SetNpcAnimation(2, 0x580006);
    sleep 10;
    UseSettingsFrom(0, 555, 230, 0xFFFFFF6A);
    SetPanTarget(0, 555, 230, 0xFFFFFF6A);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 10.0, -10.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        SetPlayerSpeed(3.0);
        PlayerMoveTo(680, 0xFFFFFF6F, 0);
        InterpPlayerYaw(270, 0);
    }
    SetSelfVar(0, 0);
    spawn {
        sleep 30;
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 4.0);
    10:
        NpcMoveTo(1, 550, 0xFFFFFF5B, 0);
        sleep 5;
        NpcMoveTo(1, 510, 0xFFFFFF5B, 0);
        sleep 5;
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            goto 10;
        }
        NpcMoveTo(1, 535, 0xFFFFFF5B, 0);
        SetSelfVar(0, 2);
    }
    InterpNpcYaw(0, 270, 0);
    SpeakToPlayer(0, 0x580006, 0x580006, 1, 0x130017);
    spawn {
        sleep 5;
        SetNpcJumpscale(2, 1.0);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    }
    SpeakToPlayer(2, 0x580006, 0x580006, 0, 0x130018);
    SetSelfVar(0, 1);
15:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 1) {
        sleep 1;
        goto 15;
    }
    InterpNpcYaw(1, 270, 0);
    InterpNpcYaw(2, 270, 0);
    SetNpcAnimation(0, 0x580001);
    SetNpcAnimation(1, 0x580001);
    SetNpcAnimation(2, 0x580001);
    SpeakToPlayer(3, 0x560002, 0x560001, 0, 0x130019);
    spawn {
        sleep 15;
        InterpNpcYaw(2, 90, 0);
        sleep 10;
        InterpNpcYaw(0, 90, 0);
    }
    SpeakToPlayer(1, 0x580008, 0x580001, 0, 0x13001A);
    ResetCam(0, 90.0);
    SetNpcAnimation(0, 0x580006);
    SetNpcAnimation(1, 0x580006);
    SetNpcAnimation(2, 0x580006);
    spawn N(script_802417F8);
    DisablePlayerInput(0);
    spawn {
        loop {
            sleep 1;
            if (SI_SAVE_FLAG(1557) == 1) {
                break;
            }
        }
        sleep 30;
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        SetNpcPos(2, 0, 0xFFFFFC18, 0);
        SetNpcPos(3, 0, 0xFFFFFC18, 0);
    }
    StartBossBattle(3);
});

Script N(script_Defeat_802420B4) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(1557) = 1;
            ModifyColliderFlags(0, 55, 0x7FFFFE00);
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242140) = SCRIPT({
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn N(script_8024117C);
    }
    if (SI_SAVE_FLAG(1557) == 0) {
        BindNpcIdle(-1, N(script_Idle_802418DC));
        BindNpcDefeat(-1, N(script_Defeat_802420B4));
    } else {
        RemoveNpc(3);
        RemoveNpc(1);
        RemoveNpc(2);
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802421FC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241150),
        .pos = { 585.0, 230.0, -145.0 },
        .flags = 0x00C42D05,
        .init = N(script_Init_80242140),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241150),
        .pos = { 525.0, 230.0, -165.0 },
        .flags = 0x00C42D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241150),
        .pos = { 550.0, 230.0, -120.0 },
        .flags = 0x00C42D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241150),
        .pos = { 505.0, 230.0, -120.0 },
        .flags = 0x00C40D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 }, { ItemId_THUNDER_RAGE, 5 }, { ItemId_STOP_WATCH, 5 } },
        .animations = {
            0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560004, 0x00560004, 0x00560002, 0x00560003, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001,
        },
    },
};

NpcGroupList N(npcGroupList_802429BC) = {
    NPC_GROUP(N(npcGroup_802421FC), 0x221D0003),
    {},
};

s32 pad_0029D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802429E0_A5CA10

s32 pad_0029E8[] = {
    0x00000000, 0x00000000,
};
