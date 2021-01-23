#include "isk_16.h"

s32 pad_0007F4[3];
s32 pad_000AF8[2];
Script N(script_80240B60);
Script N(script_ExitWalk_80240FF8);
Script N(script_80241054);
Script N(main);
s32 pad_001214[3];
Script N(script_Idle_80241220);
Script N(script_Defeat_80241290);
Script N(script_Init_80241328);
Script N(script_Init_802413C0);
StaticNpc N(npcGroup_80241454)[2];
StaticNpc N(npcGroup_80241834)[1];
NpcGroupList N(npcGroupList_80241A24);
s32 pad_001A48[2];
Script N(script_80241A50);
Script N(script_80242424);
Script N(script_8024246C);
s32 pad_002C2C[1];
Script N(script_80242C30);
const char D_80242D64_997F54[8]; // "kmr_23"
const char D_80242D6C_997F5C[8]; // "isk_19"
s32 pad_002D74[3];

// text: func_80240000_9951F0

// text: func_8024004C_99523C

// text: func_802401AC_99539C

// text: func_802405BC_9957AC

// text: func_802405FC_9957EC

// text: func_80240708_9958F8

s32 pad_0007F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240800_9959F0

// text: func_80240924_995B14

s32 pad_000AF8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 307.0f, -910.0f, 492.0f, 50.0f },
    { 492.0f, -910.0f, 307.0f, 220.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900A3,
};

Script N(script_80240B60) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFC7 {
            SI_VAR(0) = 0;
            SI_SAVE_VAR(0) = 0xFFFFFFC8;
        }
        == 0xFFFFFFC8 {
            SI_VAR(0) = 1;
        } else {
            return;
        }
    }
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 408, 0xFFFFFCC7, 414);
        SetCamSpeed(0, 0.6005859375);
        SetPanTarget(0, 408, 0xFFFFFC90, 414);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_8024004C_99523C(1, 180, 408, 0xFFFFFC7C, 414, 408, 0xFFFFFCC7, 414, 0xFFFFFC90, 0xFFFFFC72);
        spawn {
            func_802401AC_99539C();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240000_9951F0();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 408, 0xFFFFFCC7, 414);
        }
        spawn {
            sleep 45;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 180;
            sleep 115;
            PlaySoundAt(311, 0, 408, 0xFFFFFCC7, 414);
        }
        func_802405BC_9957AC(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 408, 0xFFFFFC72, 414);
        func_802405BC_9957AC(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_802405FC_9957EC(1, 408, 0xFFFFFC90, 414, 0xFFFFFC72);
        spawn {
            func_80240708_9958F8();
        }
        sleep 1;
    }
    func_802405BC_9957AC(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 0xFFFFFFC9;
    GotoMapSpecial(D_80242D64_997F54, 1, 14);
    sleep 100;
});

Script N(script_ExitWalk_80240FF8) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242D6C_997F5C, 1);
    sleep 100;
});

Script N(script_80241054) = SCRIPT({
    bind N(script_ExitWalk_80240FF8) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x2000C);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80241A24));
    await N(script_80242C30);
    if (SI_SAVE_VAR(0) == 0xFFFFFFC8) {
        spawn N(script_80240B60);
    }
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 84, 0, 8);
        }
        == 0xFFFFFFC8 {
            FadeOutMusic(0, 500);
        }
        > 0xFFFFFFC8 {
        }
    }
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC8 {
            spawn N(script_80241A50);
        }
        >= 0xFFFFFFC8 {
            SI_VAR(0) = N(script_80241054);
            spawn EnterWalk;
        }
    }
});

s32 pad_001214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_Idle_80241220) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    StartBossBattle(10);
});

Script N(script_Defeat_80241290) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetEncounterStatusFlags(1, 1);
            InterpPlayerYaw(90, 0);
            await N(script_8024246C);
            spawn N(script_80240B60);
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80241328) = SCRIPT({
    InterpNpcYaw(0, 150, 1);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC8 {
            BindNpcIdle(-1, N(script_Idle_80241220));
            BindNpcDefeat(-1, N(script_Defeat_80241290));
        }
        >= 0xFFFFFFC8 {
            SetNpcPos(0, 0, 0xFFFFFA24, 0);
        }
    }
});

Script N(script_Init_802413C0) = SCRIPT({

});

NpcSettings N(npcSettings_802413D0) = {
    .unk_00 = { 0, 0x68, 0, 0x1 },
    .height = 0x28,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802413FC) = {
    .unk_00 = { 0, 0x69, 0, 0x3 },
    .height = 0x20,
    .radius = 0x20,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241428) = {
    .unk_00 = { 0, 0x68, 0, 0 },
    .height = 0x28,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80241454)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802413D0),
        .pos = { 457.0, -1300.0, 316.0 },
        .flags = 0x00440A05,
        .init = N(script_Init_80241328),
        .unk_1C = 0x00000001,
        .yaw = 230,
        .dropFlags = 0x80,
        .animations = {
            0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680006, 0x00680006, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241428),
        .pos = { 500.0, -1300.0, 316.0 },
        .flags = 0x00440A05,
        .yaw = 230,
        .dropFlags = 0x80,
        .animations = {
            0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680006, 0x00680006, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001, 0x00680001,
        },
    },
};

StaticNpc N(npcGroup_80241834)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802413FC),
        .pos = { 457.0, -1300.0, 316.0 },
        .flags = 0x00440A05,
        .init = N(script_Init_802413C0),
        .yaw = 230,
        .dropFlags = 0x80,
        .animations = {
            0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000, 0x00690000,
        },
    },
};

NpcGroupList N(npcGroupList_80241A24) = {
    NPC_GROUP(N(npcGroup_80241454), 0x0C000002),
    NPC_GROUP(N(npcGroup_80241834), 0x00000000),
    {},
};

s32 pad_001A48[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241A50) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    func_80240800_9959F0(0, -1, 1);
    func_80240800_9959F0(2, 0, 1);
    func_80240924_995B14(1, 0, 0, 0, 255, 0, 0, 0, 0, 0);
    UseSettingsFrom(0, 410, 0xFFFFFC72, 410);
    SetCamDistance(0, 300.0);
    SetPanTarget(0, 336, 0xFFFFFC72, 467);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SetPlayerPos(279, 0xFFFFFC72, 520);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) == 4) {
        SI_VAR(1) = 0xFFFFFC7D;
    } else {
        SI_VAR(1) = 0xFFFFFC72;
    }
    SetNpcPos(0xFFFFFFFC, 243, SI_VAR(1), 535);
    SetNpcYaw(0xFFFFFFFC, 45);
    ClearPartnerMoveHistory(0xFFFFFFFC);
    spawn {
        SetNpcFlagBits(0xFFFFFFFC, 64, 1);
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 258);
        SetNpcSpeed(0xFFFFFFFC, 2.5);
        NpcMoveTo(0xFFFFFFFC, 311, 487, 0);
        SetNpcAnimation(0xFFFFFFFC, 262);
        SetNpcFlagBits(0xFFFFFFFC, 64, 0);
    }
    SetPlayerSpeed(4.0);
    PlayerMoveTo(343, 460, 0);
    await N(script_80241054);
    sleep 20;
    SetPanTarget(0, 410, 0xFFFFFC72, 410);
    SetCamSpeed(0, 0.5);
    WaitForCam(0, 1.0);
    ShowMessageAtScreenPos(0xD00E2, 160, 40);
    sleep 30;
    SetNpcPos(0, 410, 0xFFFFFAEC, 410);
    spawn {
        sleep 50;
        SetPlayerAnimation(0x1002B);
        sleep 30;
        SetPlayerAnimation(0x10002);
    }
    0x802CFD30(1, 7, 0, 0, 0, 0);
    SetNpcPos(1, 410, 0xFFFFFC77, 410);
    SetNpcAnimation(1, 0x680010);
    MakeLerp(0, 255, 100, 1);
2:
    UpdateLerp();
    0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    0x802CFD30(1, 0, 0, 0, 0, 0);
    sleep 30;
    SI_VAR(0) = 255;
    loop 60 {
        SI_VAR(0) += 0xFFFFFFFC;
        func_80240924_995B14(1, 0, 0, 0, SI_VAR(0), 0, 0, 0, 0, 0);
        sleep 1;
    }
    func_80240924_995B14(1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    SetCamDistance(0, 530.0);
    SetCamSpeed(0, 0.5);
    PanToTarget(0, 0, 1);
    spawn {
        sleep 30;
        SetPlayerAnimation(0x1002A);
    }
    GetNpcPos(1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    MakeLerp(0, 110, 100, 10);
0:
    UpdateLerp();
    SI_VAR(0) += SI_VAR(3);
    SetNpcPos(1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    GetNpcPos(1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    MakeLerp(0, 100, 60, 10);
1:
    UpdateLerp();
    SI_VAR(5) = 0.470703125;
    SI_VAR(6) = -0.939453125;
    SI_VAR(5) *= f SI_VAR(0);
    SI_VAR(6) *= f SI_VAR(0);
    SI_VAR(5) += f SI_VAR(2);
    SI_VAR(6) += f SI_VAR(4);
    SetNpcPos(1, SI_VAR(5), SI_VAR(3), SI_VAR(6));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    SetNpcPos(0, 457, 0xFFFFFCE0, 316);
    SetNpcAnimation(0, 0x680001);
    spawn {
        sleep 59;
        PlaySoundAtNpc(0, 1007, 0);
    }
    0x802CFD30(0, 7, 255, 0, 0, 0);
    0x802CFE2C(0, 2048);
    0x802CFD30(0, 5, 14, 2, 1, 0);
    sleep 39;
    0x802CFE2C(0, 2048);
    0x802CFD30(0, 5, 13, 2, 1, 0);
    sleep 39;
    0x802CFE2C(0, 2048);
    0x802CFD30(0, 5, 12, 2, 1, 0);
    sleep 55;
    0x802CFD30(0, 0, 0, 0, 0, 0);
    SetNpcPos(1, 457, 0xFFFFFAEC, 316);
    sleep 10;
    SetPanTarget(0, 438, 0xFFFFFCE0, 332);
    SetCamDistance(0, 225.0);
    SetCamPitch(0, -7.5, -7.5);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x68000B, 0x680001, 0, 0xD00E3);
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 3.0);
    DisablePlayerInput(0);
    EnablePartnerAI();
    SetNpcVar(0, 0, 1);
});

Script N(script_80242424) = SCRIPT({
    loop {
        PlaySoundAtNpc(2, 8289, 0);
        sleep 5;
    }
});

Script N(script_8024246C) = SCRIPT({
    SetCamSpeed(0, 90.0);
    WaitForCam(0, 1.0);
    SetCamSpeed(0, 1.0);
    spawn {
        ShowMessageAtScreenPos(0xD00E8, 160, 40);
    }
    SetNpcAnimation(0, 0x680006);
    SetNpcJumpscale(0, 1.0);
    PlaySoundAtNpc(0, 8419, 0);
    NpcJump0(0, 442, 0xFFFFFC72, 393, 30);
    PlaySoundAtNpc(0, 994, 0);
    NpcJump0(0, 416, 0xFFFFFC72, 420, 20);
    PlaySoundAtNpc(0, 994, 0);
    NpcJump0(0, 395, 0xFFFFFC72, 440, 10);
    sleep 20;
    SetNpcAnimation(0, 0x680001);
    UseSettingsFrom(0, 410, 0xFFFFFC72, 410);
    SetPanTarget(0, 490, 0xFFFFFC72, 327);
    SetCamDistance(0, 200.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    EnableModel(25, 0);
    SI_VAR(10) = spawn N(script_80242424);
    SetNpcPos(2, 516, 0xFFFFFC72, 263);
    SetNpcSpeed(2, 3.0);
    NpcMoveTo(2, 493, 292, 0);
    sleep 30;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    EnableModel(25, 1);
    NpcFaceNpc(0, 2, 0);
    SetNpcAnimation(0, 0x680006);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAtNpc(0, 994, 0);
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    SetNpcAnimation(0, 0x680001);
    SpeakToPlayer(0, 0x68000B, 0x680001, 5, 0xD00E9);
    PanToTarget(0, 0, 0);
    spawn {
        SetNpcAnimation(2, 0x690003);
        SetNpcSpeed(2, 8.0);
        SetNpcPos(2, 486, 0xFFFFFC72, 340);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 0);
        loop 2 {
            NpcMoveTo(2, 304, 434, 0);
            NpcMoveTo(2, 444, 316, 0);
            NpcMoveTo(2, 473, 337, 0);
            NpcMoveTo(2, 318, 460, 0);
        }
        NpcMoveTo(2, 259, 522, 0);
        SetNpcPos(2, 0, 0xFFFFFA24, 0);
        kill SI_VAR(10);
    }
    loop {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        GetDist2D(SI_VAR(6), SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(5));
        if (SI_VAR(6) < 50) {
            break;
        }
        sleep 1;
    }
    SetSelfVar(1, 1);
    spawn {
        SetNpcAnimation(0, 0x680002);
        SetNpcSpeed(0, 8.0);
        SetPlayerAnimation(0x80022);
        loop 2 {
            NpcMoveTo(0, 304, 434, 0);
            NpcMoveTo(0, 444, 316, 0);
            NpcMoveTo(0, 473, 337, 0);
            NpcMoveTo(0, 318, 460, 0);
        }
        SetPlayerAnimation(0x1002B);
        NpcMoveTo(0, 259, 522, 0);
        SetNpcPos(0, 0, 0xFFFFFA24, 0);
        sleep 10;
        SetPlayerAnimation(0x10002);
        SetSelfVar(1, 0);
    }
    ShowMessageAtScreenPos(0xD00EA, 160, 40);
    loop {
        GetSelfVar(1, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
        sleep 1;
    }
    sleep 10;
    SI_SAVE_FLAG(902) = 1;
    FadeOutMusic(0, 500);
});

s32 pad_002C2C[] = {
    0x00000000,
};

Script N(script_80242C30) = SCRIPT({
    PlayEffect(32, 1, 415, 0xFFFFFD37, 291, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 291, 0xFFFFFD37, 415, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 415, 0xFFFFFCB5, 291, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 291, 0xFFFFFCB5, 415, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

// rodata: jtbl_80242D50_997F40

// rodata: D_80242D64_997F54

// rodata: D_80242D6C_997F5C

s32 pad_002D74[] = {
    0x00000000, 0x00000000, 0x00000000,
};
