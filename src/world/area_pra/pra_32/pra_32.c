#include "pra_32.h"

s32 pad_000018[2];
s32 pad_000834[3];
Script N(script_80240890);
Script N(script_80240900);
Script N(script_80240D3C);
s32 N(unk_80241178)[2];
s32 N(unk_80241180)[2];
Script N(script_80241188);
Script N(script_8024122C);
Script N(script_80241258);
Script N(main);
s32 pad_0013EC[1];
s32 unk_missing_80241448[22];
Script N(script_802414A0);
Script N(script_Idle_80241660);
Script N(script_Defeat_80241E44);
Script N(script_Init_802423F4);
Script N(script_Init_802424B4);
Script N(script_Init_802424C4);
StaticNpc N(npcGroup_802424D4)[4];
NpcGroupList N(npcGroupList_80242C94);
s32 pad_002CAC[1];
const char D_80242CC4_D896C4[8]; // "kmr_23"
const char D_80242CCC_D896CC[8]; // "pra_40"
s32 pad_002CD4[3];

// text: func_Init_D86A00

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_D86A20

// text: func_8024006C_D86A6C

// text: func_802401CC_D86BCC

// text: func_802405DC_D86FDC

// text: func_8024061C_D8701C

// text: func_80240728_D87128

// text: func_80240814_D87214

s32 pad_000834[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19014D,
};

Script N(script_80240890) = SCRIPT({
    if (SI_SAVE_VAR(0) == 86) {
        FadeOutMusic(0, 500);
    } else {
        SetMusicTrack(0, 55, 0, 8);
    }
    UseDoorSounds(0);
});

Script N(script_80240900) = SCRIPT({
    SI_VAR(0) = 0;
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 595, 185, 116);
        SetCamSpeed(0, 0.6005859375);
        SetPanTarget(0, 595, 130, 116);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_8024006C_D86A6C(6, 180, 590, 120, 116, 595, 185, 116, 130, 100);
        spawn {
            func_802401CC_D86BCC();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240020_D86A20();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 595, 185, 116);
        }
        spawn {
            sleep 45;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 180;
            sleep 115;
            PlaySoundAt(311, 0, 595, 185, 116);
        }
        func_802405DC_D86FDC(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 595, 100, 116);
        func_802405DC_D86FDC(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_8024061C_D8701C(6, 595, 130, 116, 100);
        spawn {
            func_80240728_D87128();
        }
        sleep 1;
    }
    func_802405DC_D86FDC(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 87;
    GotoMapSpecial(D_80242CC4_D896C4, 6, 14);
    sleep 100;
});

Script N(script_80240D3C) = SCRIPT({
    SI_VAR(0) = 1;
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 595, 185, 116);
        SetCamSpeed(0, 0.6005859375);
        SetPanTarget(0, 595, 130, 116);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_8024006C_D86A6C(6, 180, 590, 120, 116, 595, 185, 116, 130, 100);
        spawn {
            func_802401CC_D86BCC();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240020_D86A20();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 595, 185, 116);
        }
        spawn {
            sleep 45;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 180;
            sleep 115;
            PlaySoundAt(311, 0, 595, 185, 116);
        }
        func_802405DC_D86FDC(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 595, 100, 116);
        func_802405DC_D86FDC(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_8024061C_D8701C(6, 595, 130, 116, 100);
        spawn {
            func_80240728_D87128();
        }
        sleep 1;
    }
    func_802405DC_D86FDC(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 87;
    GotoMapSpecial(D_80242CC4_D896C4, 6, 14);
    sleep 100;
});

s32 N(unk_80241178)[] = {
    0x00000006, 0xFFFFFFFF,
};

s32 N(unk_80241180)[] = {
    0x00000004, 0xFFFFFFFF,
};

Script N(script_80241188) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 5;
    SI_VAR(2) = N(unk_80241178);
    SI_VAR(3) = N(unk_80241180);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80242CCC_D896CC, 1);
    sleep 100;
});

Script N(script_8024122C) = SCRIPT({
    bind N(script_80241188) to TriggerFlag_WALL_INTERACT 5;
});

Script N(script_80241258) = SCRIPT({
    SI_VAR(2) = N(unk_80241178);
    SI_VAR(3) = N(unk_80241180);
    await 0x802861B0;
    spawn N(script_8024122C);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242C94));
    ModifyColliderFlags(3, 11, 8);
    ModifyColliderFlags(3, 10, 8);
    PlayEffect(69, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80240814_D87214();
    spawn N(script_80240890);
    spawn N(script_80241258);
    sleep 1;
});

s32 pad_0013EC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_802413F0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x32,
    .radius = 0x37,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024141C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
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

s32 unk_missing_80241448[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_802414A0) = SCRIPT({
    SI_MAP_VAR(0) = 400;
    spawn {
        MakeLerp(400, 300, 200, 0);
        loop {
            UpdateLerp();
            SI_MAP_VAR(0) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    MakeLerp(200, 100, 200, 0);
    loop {
        UpdateLerp();
        SetNpcPos(0, 588, SI_VAR(0), 116);
        SI_VAR(5) = SI_VAR(0);
        SI_VAR(5) += 0xFFFFFFE2;
        if (SI_VAR(5) >= 100) {
            SetPanTarget(0, 588, SI_VAR(5), 116);
            SetCamDistance(0, SI_MAP_VAR(0));
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
        }
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_Idle_80241660) = SCRIPT({
    EnableNpcShadow(0, 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 377) {
        goto 0;
    }
    DisablePlayerInput(1);
    0x802D2B6C();
    SetMusicTrack(0, 89, 0, 8);
    ShowMessageAtScreenPos(0x12016A, 160, 40);
    SetNpcPos(0, 588, 200, 116);
    0x802CFD30(0, 7, 0, 0, 0, 0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 0xFFFFFFE2;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 3.0);
    SetCamPitch(0, 12.0, -10.0);
    SetCamDistance(0, 400.0);
    PanToTarget(0, 0, 1);
    sleep 30;
    SetPlayerAnimation(0x10006);
    SetPlayerPos(475, 100, 116);
    DisablePartnerAI(0);
    PartnerIsFlying(SI_VAR(4));
    if (SI_VAR(4) == 0) {
        SetNpcPos(0xFFFFFFFC, 452, 116, 120);
    } else {
        SetNpcPos(0xFFFFFFFC, 452, 100, 120);
    }
    WaitForCam(0, 1.0);
    spawn {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 10;
        PlayEffect(114, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 50, 50, 1, 40, 50, 0, 0, 0, 0);
        sleep 20;
        PlayEffect(114, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 50, 50, 1, 40, 50, 0, 0, 0, 0);
        sleep 20;
        PlayEffect(114, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 50, 50, 1, 40, 50, 0, 0, 0, 0);
        sleep 20;
        PlayEffect(114, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 50, 50, 1, 20, 40, 0, 0, 0, 0);
        sleep 20;
        PlayEffect(114, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 50, 50, 1, 20, 40, 0, 0, 0, 0);
        sleep 20;
        PlayEffect(114, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 50, 50, 1, 20, 40, 0, 0, 0, 0);
        sleep 20;
        PlayEffect(48, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(17, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 20;
        PlayEffect(48, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(17, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 7, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    MakeLerp(0, 255, 120, 0);
5:
    UpdateLerp();
    0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 5;
    }
    EnableNpcShadow(0, 1);
    sleep 30;
    await N(script_802414A0);
    sleep 20;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(2));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    SetCamSpeed(0, 3.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x7F0009, 0x7F0009, 0, 0x12016B);
    PanToTarget(0, 0, 0);
    SetPlayerAnimation(0x10005);
    SetPlayerSpeed(2.5);
    spawn {
        sleep 10;
        ModifyColliderFlags(3, 11, 0);
        PlayerMoveTo(564, 116, 0);
    }
    StartBossBattle(15);
});

Script N(script_Defeat_80241E44) = SCRIPT({
    spawn {
        sleep 2;
        FadeOutMusic(0, 500);
    }
    SetEncounterStatusFlags(1, 1);
    SetPlayerPos(475, 100, 116);
    DisablePartnerAI(0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 12.0, -10.0);
    SetCamDistance(0, 300.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x7F0009, 0x7F0009, 0, 0x12016C);
    spawn {
        0x802CDE68(0, 30);
        MakeLerp(0, 6840, 210, 10);
        loop {
            UpdateLerp();
            SetNpcRotation(0, 0, 0, SI_VAR(0));
            if (SI_VAR(1) == 0) {
                break;
            }
            sleep 1;
        }
    }
    spawn {
        MakeLerp(100, 200, 210, 10);
        loop {
            UpdateLerp();
            SI_VAR(10) =f SI_VAR(0);
            SI_VAR(10) *= 0.0107421875;
            SetNpcScale(0, SI_VAR(10), SI_VAR(10), 1);
            if (SI_VAR(1) == 0) {
                break;
            }
            sleep 1;
        }
    }
    MakeLerp(255, 122, 30, 10);
    loop {
        UpdateLerp();
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    spawn {
        PlaySoundAtNpc(0, 875, 0);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(56, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 130, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep 30;
    MakeLerp(120, 0, 30, 10);
    loop {
        UpdateLerp();
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    0x802CFD30(0, 7, 0, 0, 0, 0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    PlayEffect(17, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    sleep 75;
    PanToTarget(0, 0, 0);
    ModifyColliderFlags(3, 11, 8);
    sleep 25;
    DisablePlayerInput(0);
    EnablePartnerAI();
    spawn N(script_80240900);
    SI_SAVE_VAR(0) = 86;
});

Script N(script_Init_802423F4) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_80241E44));
    match SI_SAVE_VAR(0) {
        < 86 {
            BindNpcIdle(-1, N(script_Idle_80241660));
        }
        == 86 {
            spawn N(script_80240D3C);
        }
        > 86 {
        }
    }
    SetNpcFlagBits(-1, 0x10000102, 1);
    SetNpcFlagBits(-1, 16, 0);
    SetNpcYaw(0, 270);
});

Script N(script_Init_802424B4) = SCRIPT({

});

Script N(script_Init_802424C4) = SCRIPT({

});

StaticNpc N(npcGroup_802424D4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802413F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00640D08,
        .init = N(script_Init_802424B4),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802413F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00640D08,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024141C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00640D09,
        .init = N(script_Init_802424C4),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180000, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802413F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00644D0C,
        .init = N(script_Init_802423F4),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009, 0x007F0009,
        },
    },
};

NpcGroupList N(npcGroupList_80242C94) = {
    NPC_GROUP(N(npcGroup_802424D4), 0x20000000),
    {},
};

s32 pad_002CAC[] = {
    0x00000000,
};

// rodata: jtbl_80242CB0_D896B0

// rodata: D_80242CC4_D896C4

// rodata: D_80242CCC_D896CC

s32 pad_002CD4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
