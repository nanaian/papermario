#include "dgb_18.h"

s32 pad_000FA8[2];
s32 pad_00126C[1];
Script N(script_802412C0);
s32 pad_001358[2];
Script N(script_ExitDoubleDoor_80241360);
Script N(script_EnterDoubleDoor_80241414);
Script N(main);
s32 pad_001578[2];
s32 N(unk_80241580)[12];
Script N(script_802415B0);
s32 unk_missing_802415D0[11];
Script N(script_Idle_80241654);
Script N(script_Idle_80242494);
Script N(script_NpcAI_802426B0);
Script N(script_NpcAI_80242834);
Script N(script_Defeat_802428E8);
Script N(script_Init_80242924);
Script N(script_Idle_80242A24);
Script N(script_Init_8024329C);
StaticNpc N(npcGroup_802432D4)[1];
StaticNpc N(npcGroup_802434C4)[1];
NpcGroupList N(npcGroupList_802436B4);
s32 pad_0036D8[2];
s32 N(unk_802436E0)[1];
Script N(script_802436E4);
Script N(script_8024374C);
Script N(script_8024382C);
Script N(script_MakeEntities);
s32 pad_0038CC[1];
const char D_802438D0_C59810[8]; // "dgb_01"
s32 pad_0038D8[2];
const char D_80243A80_C599C0[8]; // "dgb_01"
s32 pad_003A88[2];

// text: func_80240000_C55F40

// text: func_80240158_C56098

// text: N(UnkNpcAIFunc1)

// text: func_802404C0_C56400

// text: func_8024067C_C565BC

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024081C_C5675C

// text: func_8024094C_C5688C

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240AD4_C56A14

// text: func_80240B94_C56AD4

// text: func_80240E90_C56DD0

// text: func_80240EBC_C56DFC

s32 pad_000FA8[] = {
    0x00000000, 0x00000000,
};

// text: func_80240FB0_C56EF0

// text: func_80241064_C56FA4

// text: func_802410C8_C57008

// text: func_80241218_C57158

s32 pad_00126C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -120.0f, 0.0f, 180.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900D2,
};

Script N(script_802412C0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_001358[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80241360) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 17;
    SI_VAR(2) = 8;
    SI_VAR(3) = 10;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802438D0_C59810, 6);
    sleep 100;
});

Script N(script_EnterDoubleDoor_80241414) = SCRIPT({
    UseDoorSounds(3);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 8;
            SI_VAR(3) = 10;
            await EnterDoubleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_802436B4));
    await N(script_MakeEntities);
    spawn N(script_802412C0);
    bind N(script_ExitDoubleDoor_80241360) to TriggerFlag_WALL_INTERACT 17;
    spawn N(script_EnterDoubleDoor_80241414);
});

s32 pad_001578[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80241580)[] = {
    0x40900000, 0x00000000, 0x00000000, 0x432A0000, 0x42B40000, 0x00000001, 0x4079999A, 0x000000B4,
    0x00000002, 0x432A0000, 0x42B40000, 0x00000001,
};

Script N(script_802415B0) = SCRIPT({
    func_80240B94_C56AD4(N(unk_80241580));
});

s32 unk_missing_802415D0[] = {
    0x00000000, 0x005A0041, 0x00000000, 0x00000000, N(script_802415B0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000D0000,
};

NpcSettings N(npcSettings_802415FC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x5A,
    .radius = 0x41,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241628) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_Idle_80241654) = SCRIPT({
10:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 700) {
        goto 10;
    }
    if (SI_VAR(2) > 185) {
        goto 10;
    }
    DisablePlayerInput(1);
    sleep 10;
    spawn {
        sleep 10;
        InterpPlayerYaw(270, 0);
    }
    FadeOutMusic(0, 500);
    loop 3 {
        SetPlayerAnimation(0x8001E);
        PlaySoundAt(8438, 0, 382, 0, 218);
        ShakeCam(0, 0, 5, 1.0);
        sleep 20;
        SetPlayerAnimation(0x10002);
        sleep 10;
    }
    loop 2 {
        InterpPlayerYaw(270, 0);
        sleep 10;
        InterpPlayerYaw(90, 0);
        sleep 10;
    }
    UseSettingsFrom(0, 0xFFFFFFD8, 0, 180);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, 0xFFFFFFD8, 0, 180);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetPlayerPos(740, 0, 180);
    SetNpcPos(0xFFFFFFFC, 765, 0, 180);
    InterpPlayerYaw(270, 0);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    SetPlayerAnimation(0x8000C);
    PlaySoundAtCollider(17, 455, 0);
    MakeLerp(0, 80, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(8, SI_VAR(0), 0, -1, 0);
        RotateModel(10, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        loop 3 {
            PlaySoundAtNpc(-1, 8438, 0);
            ShakeCam(0, 0, 5, 0.30078125);
            sleep 5;
        }
    }
    SetMusicTrack(0, 85, 0, 8);
    SetNpcAnimation(-1, 0x6A0009);
    SetNpcPos(-1, 0xFFFFFF2E, 0, 180);
    NpcMoveTo(-1, 0xFFFFFFC4, 180, 30);
    SetNpcAnimation(-1, 0x6A0006);
    spawn {
        MakeLerp(80, 0, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(8, SI_VAR(0), 0, -1, 0);
            RotateModel(10, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(17, 456, 0);
    }
    sleep 20;
    SpeakToPlayer(-1, 0x6A0010, 0x6A0006, 5, 0xE00F4);
    sleep 20;
    SetNpcAnimation(-1, 0x6A0009);
    SetSelfVar(0, 0);
    spawn {
        loop {
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
            PlaySoundAtNpc(-1, 8438, 0);
            ShakeCam(0, 0, 5, 0.30078125);
            sleep 9;
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
            PlaySoundAtNpc(-1, 8438, 0);
            ShakeCam(0, 0, 2, 0.150390625);
            sleep 12;
        }
    }
    spawn {
        loop {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
        }
    }
    SetNpcSpeed(-1, 4.0);
    NpcMoveTo(-1, 45, 215, 0);
    NpcMoveTo(-1, 140, 245, 0);
    NpcMoveTo(-1, 615, 245, 0);
    SetSelfVar(0, 1);
    SetNpcAnimation(-1, 0x6A0006);
    sleep 15;
    sleep 20;
    SpeakToPlayer(-1, 0x6A0010, 0x6A0006, 5, 0xE00F5);
    sleep 20;
    spawn {
        SetNpcAnimation(-1, 0x6A0014);
        sleep 5;
        SetNpcAnimation(-1, 0x6A0015);
        sleep 5;
        SetNpcAnimation(-1, 0x6A0016);
        sleep 5;
    }
    sleep 5;
    SetNpcJumpscale(-1, 0.7001953125);
    NpcJump0(-1, 600, 50, 115, 20);
    spawn {
        ShakeCam(0, 0, 5, 0.30078125);
    }
    SetNpcAnimation(-1, 0x6A0005);
    SetNpcScale(-1, 1.25, 1.2001953125, 1.25);
    sleep 1;
    SetNpcScale(-1, 1.3505859375, 1.150390625, 1.25);
    sleep 1;
    SetNpcScale(-1, 1.4501953125, 1.05078125, 1.25);
    sleep 1;
    SetNpcScale(-1, 1.3505859375, 1.150390625, 1.25);
    sleep 1;
    SetNpcScale(-1, 1.25, 1.2001953125, 1.25);
    sleep 1;
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    spawn {
        SetNpcJumpscale(-1, 0.5);
        NpcJump0(-1, SI_VAR(3), 30, SI_VAR(5), 23);
    }
    sleep 2;
    spawn {
        MakeLerp(0, 50, 18, 1);
        loop {
            UpdateLerp();
            func_802CDE68(-1, SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    MakeLerp(0, 0xFFFFFFA6, 18, 1);
    loop {
        UpdateLerp();
        SetNpcRotation(-1, 0, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        ShakeCam(0, 0, 10, 0.400390625);
    }
    sleep 5;
    FadeOutMusic(0, 1000);
    SetNpcScale(-1, 1.25, 1.25, 1.25);
    SetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    func_802CDE68(-1, 0);
    SetNpcRotation(-1, 0, 0, 0);
    SetNpcAnimation(-1, 0x6A0002);
    sleep 15;
    SetNpcAnimation(-1, 0x6A0024);
    sleep 30;
    PlaySoundAtNpc(-1, 8248, 0);
    sleep 30;
    spawn {
        SetSelfVar(1, 0);
        loop {
            GetSelfVar(1, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
            PlaySoundAtNpc(-1, 8249, 0);
            RandInt(10, SI_VAR(1));
            SI_VAR(1) += 15;
            ShowSleepBubble(0, 0, 0, 2, 628, 121, 127, SI_VAR(1), SI_VAR(0));
            sleep 48;
            PlaySoundAtNpc(-1, 8248, 0);
            RandInt(10, SI_VAR(1));
            SI_VAR(1) += 10;
            func_802D8248(SI_VAR(0), SI_VAR(1));
            sleep 30;
        }
    }
    sleep 30;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 2.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFE2;
    DisablePlayerInput(0);
});

Script N(script_Idle_80242494) = SCRIPT({
    SetNpcScale(-1, 1.25, 1.25, 1.25);
    SetNpcPos(-1, 600, 50, 115);
    func_802CDE68(-1, 0);
    SetNpcRotation(-1, 0, 0, 0);
    SetNpcAnimation(-1, 0x6A0002);
    sleep 15;
    SetNpcAnimation(-1, 0x6A0024);
    sleep 30;
    PlaySoundAtNpc(-1, 8248, 0);
    sleep 30;
    spawn {
        SetSelfVar(1, 0);
        loop {
            GetSelfVar(1, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
            PlaySoundAtNpc(-1, 8249, 0);
            RandInt(10, SI_VAR(1));
            SI_VAR(1) += 15;
            ShowSleepBubble(0, 0, 0, 2, 628, 121, 127, SI_VAR(1), SI_VAR(0));
            sleep 48;
            PlaySoundAtNpc(-1, 8248, 0);
            RandInt(10, SI_VAR(1));
            SI_VAR(1) += 10;
            func_802D8248(SI_VAR(0), SI_VAR(1));
            sleep 30;
        }
    }
});

Script N(script_NpcAI_802426B0) = SCRIPT({
    group 11;
    PlaySoundAtNpc(-1, 8249, 0);
    ShowSleepBubble(0, 0, 50, 2, 552, 111, 128, 30, SI_VAR(0));
    sleep 360;
    func_802D8248(SI_VAR(0), 20);
    SetNpcVar(-1, 1, 2);
    sleep 20;
    PlaySoundAtNpc(-1, 753, 0);
    SetNpcAnimation(-1, 0x6A0019);
    sleep 30;
    spawn {
        NpcJump0(-1, 650, 0, 250, 25);
    }
    SetNpcAnimation(-1, 0x6A001A);
    sleep 10;
    SetNpcAnimation(-1, 0x6A001B);
    sleep 12;
    SetNpcAnimation(-1, 0x6A001C);
    sleep 5;
    BindNpcAI(0, N(script_NpcAI_80242834));
});

Script N(script_NpcAI_80242834) = SCRIPT({
    group 11;
    SetNpcAnimation(0, 0x6A000D);
    spawn {
        loop {
            ShakeCam(0, 0, 5, 2.0);
            sleep 5;
            ShakeCam(0, 0, 2, 1.0);
            sleep 8;
        }
    }
    func_80240B94_C56AD4(N(unk_80241580));
});

Script N(script_Defeat_802428E8) = SCRIPT({
    func_80240E90_C56DD0();
    GotoMap(D_80243A80_C599C0, 6);
    sleep 100;
});

Script N(script_Init_80242924) = SCRIPT({
    SetNpcScale(-1, 1.25, 1.25, 1.25);
    BindNpcDefeat(-1, N(script_Defeat_802428E8));
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE2 {
            BindNpcIdle(-1, N(script_Idle_80241654));
        }
        < 0xFFFFFFE3 {
            BindNpcIdle(-1, N(script_Idle_80242494));
        }
        < 0xFFFFFFE4 {
            SetNpcPos(-1, 245, 0, 250);
            SetNpcYaw(-1, 270);
            BindNpcIdle(-1, N(script_NpcAI_80242834));
        }
        < 0xFFFFFFE6 {
            RemoveNpc(-1);
        }
    }
});

Script N(script_Idle_80242A24) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    sleep 40;
    SetNpcFlagBits(-1, 256, 1);
    SetNpcPos(-1, 845, 0, 140);
    SetNpcJumpscale(-1, 0.80078125);
    NpcJump1(-1, 845, 35, 145, 15);
    PlayerFaceNpc(-1, 0);
    sleep 15;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamDistance(0, 300);
    SetCamPosB(0, 800, 245);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    SpeakToPlayer(-1, 0xC00002, 0xC00001, 5, 0xE00F6);
    sleep 15;
    SpeakToPlayer(-1, 0xC00002, 0xC00001, 5, 0xE00F7);
    ShowChoice(0x1E000D);
    if (SI_VAR(0) == 0) {
        ContinueSpeech(-1, 0xC00002, 0xC00001, 0, 0xE00F8);
    } else {
        ContinueSpeech(-1, 0xC00002, 0xC00001, 0, 0xE00F9);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 4.0);
    UseSettingsFrom(0, 740, SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 600);
    SetCamPosB(0, 800, 245);
    SetPanTarget(0, 740, SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    spawn {
        SI_MAP_FLAG(0) = 0;
        SpeakToPlayer(-1, 0xC00002, 0xC00001, 517, 0xE00FA);
        SI_MAP_FLAG(0) = 1;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop {
        SetCamDistance(0, 550.0);
        SetCamSpeed(0, 90.0);
        SetPanTarget(0, 740, SI_VAR(1), SI_VAR(2));
        sleep 1;
        SetCamDistance(0, 600.0);
        SetCamSpeed(0, 90.0);
        SetPanTarget(0, 740, SI_VAR(1), SI_VAR(2));
        sleep 1;
        if (SI_MAP_FLAG(0) == 1) {
            break;
        }
    }
    SetMusicTrack(0, 31, 0, 8);
    SetNpcVar(0, 1, 1);
    sleep 15;
    SetNpcAnimation(0, 0x6A0025);
    spawn {
        loop {
            GetNpcVar(0, 1, SI_VAR(0));
            if (SI_VAR(0) == 2) {
                break;
            }
            RandInt(40, SI_VAR(0));
            RandInt(40, SI_VAR(1));
            SI_VAR(0) += 537;
            SI_VAR(1) += 110;
            PlayEffect(39, 2, SI_VAR(0), SI_VAR(1), 128, 0.30078125, 24, 0, 0, 0, 0, 0, 0, 0);
            sleep 5;
        }
    }
    sleep 15;
    SetNpcAnimation(0, 0x6A0005);
    SpeakToPlayer(0, 0x6A0013, 0x6A0005, 5, 0xE00FB);
    sleep 15;
    DisablePartnerAI(0);
    GetCurrentPartnerID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 0, 0xE00FC);
        }
        == 2 {
            SpeakToPlayer(0xFFFFFFFC, 0x2000D, 0x20003, 0, 0xE00FD);
        }
        == 3 {
            SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0xE00FE);
        }
        == 4 {
            SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 0, 0xE00FF);
        }
        == 9 {
            SpeakToPlayer(0xFFFFFFFC, 0x50004, 0x50001, 0, 0xE0100);
        }
    }
    EnablePartnerAI();
    sleep 15;
    BindNpcAI(0, N(script_NpcAI_802426B0));
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 4.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcJumpscale(-1, 1.0);
    SetNpcFlagBits(-1, 256, 1);
    SI_VAR(1) -= 10;
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFE3;
    DisablePlayerInput(0);
});

Script N(script_Init_8024329C) = SCRIPT({
    SetSelfVar(0, 0);
    BindNpcIdle(-1, N(script_Idle_80242A24));
});

StaticNpc N(npcGroup_802432D4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802415FC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00A40800,
        .init = N(script_Init_80242924),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000005, 0x00000000, 0x00000000, 0x000000F0, 0x000000AF, 0x00000000, 0x000000F0, 0x0000015E, 0x00000000, 0x000000F0, 0x0000020D, 0x00000000, 0x000000F0, 0x000002BC, 0x00000000, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x0000012C, 0x00000000, 0x000000F0, 0x000003E8, 0x000000FA, 0x00000001, 0x00000001 },
        .animations = {
            0x006A0007, 0x006A000A, 0x006A000D, 0x006A000D, 0x006A0019, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007,
        },
    },
};

StaticNpc N(npcGroup_802434C4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241628),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_8024329C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001,
        },
    },
};

NpcGroupList N(npcGroupList_802436B4) = {
    NPC_GROUP(N(npcGroup_802432D4), 0x0F040000),
    NPC_GROUP(N(npcGroup_802434C4), 0x00000000),
    {},
};

s32 pad_0036D8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802436E0)[] = {
    0x00000000,
};

Script N(script_802436E4) = SCRIPT({
    group 0;
    func_802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    func_802D5830(0);
    return;
});

Script N(script_8024374C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_802436E4);
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

Script N(script_8024382C) = SCRIPT({
    SI_SAVE_FLAG(1071) = 1;
    AddKeyItem(31);
    SetNpcVar(1, 0, 1);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAE30, 845, 0, 145, 0xFFFFFFDD, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1071));
    AssignScript(N(script_8024382C));
});

s32 pad_0038CC[] = {
    0x00000000,
};

// rodata: D_802438D0_C59810

s32 pad_0038D8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802438E0_C59820

// rodata: D_802438E8_C59828

// rodata: jtbl_802438F0_C59830

// rodata: D_80243A80_C599C0

s32 pad_003A88[] = {
    0x00000000, 0x00000000,
};
