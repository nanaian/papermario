#include "kkj_13.h"

s32 pad_000018[2];
s32 pad_00032C[1];
Script N(script_802407E0);
s32 pad_0008A8[2];
Script N(script_UpdateTexturePan_802408B0);
s32 pad_00094C[1];
s32 N(displayList_80240950)[32];
Script N(script_ExitDoubleDoor_802409D0);
Script N(script_ExitDoubleDoor_80240A74);
Script N(script_EnterDoubleDoor_80240B18);
Script N(main);
s32 pad_000F84[3];
Script N(script_80240FE8);
Script N(script_8024108C);
Script N(script_8024126C);
Script N(script_Idle_802418C4);
s32 N(vectorList_80241964)[18];
s32 N(vectorList_802419AC)[12];
s32 N(vectorList_802419DC)[9];
Script N(script_80241A00);
Script N(script_80241AE0);
Script N(script_80241C98);
Script N(script_Defeat_80241F4C);
Script N(script_Init_80241FC4);
Script N(script_Init_8024204C);
Script N(script_Init_802420C0);
s32 N(extraAnimationList_8024213C)[14];
StaticNpc N(npcGroup_80242174)[1];
StaticNpc N(npcGroup_80242364)[1];
StaticNpc N(npcGroup_80242554)[1];
NpcGroupList N(npcGroupList_80242744);
s32 pad_002774[3];
Script N(script_Idle_8024285C);
Script N(script_Defeat_802428F8);
Script N(script_Init_8024291C);
s32 N(extraAnimationList_80242954)[17];
s32 N(extraAnimationList_80242998)[7];
s32 N(extraAnimationList_802429B4)[5];
StaticNpc N(npcGroup_802429C8)[1];
StaticNpc N(npcGroup_80242BB8)[5];
NpcGroupList N(npcGroupList_80243568);
s32 pad_00358C[1];
Script N(script_80243590);
s32 N(unk_80243614)[28];
s32 N(vectorList_80243684)[12];
s32 N(vectorList_802436B4)[18];
Script N(script_802436FC);
Script N(script_80243784);
Script N(script_8024383C);
Script N(script_8024390C);
Script N(script_80244CA8);
s32 pad_004F84[3];
const char D_80244F90_ADAE60[8]; // "kkj_12"
const char D_80244F98_ADAE68[8]; // "kkj_22"
const char D_80244FC0_ADAE90[8]; // "osr_03"
const char D_80244FC8_ADAE98[8]; // "hos_10"

// text: func_Init_AD5ED0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_AD5EF0

// text: func_80240144_AD6014

s32 pad_00032C[] = {
    0x00000000,
};

// text: func_80240330_AD6200

// text: func_80240390_AD6260

// text: func_802403F0_AD62C0

// text: func_8024046C_AD633C

// text: func_802404E0_AD63B0

EntryList N(entryList) = {
    { -95.0f, 0.0f, 0.0f, 90.0f },
    { 1295.0f, 0.0f, 0.0f, 270.0f },
    { 630.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19000E,
};

Script N(script_802407E0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF80 {}
        >= 95 {
            if (SI_SAVE_FLAG(506) == 0) {
                spawn {
                    sleep 30;
                    SetMusicTrack(0, 102, 0, 8);
                }
            } else {
                SetMusicTrack(0, 102, 0, 8);
            }
        } else {
        }
    }
    UseDoorSounds(2);
});

s32 pad_0008A8[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_802408B0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240020_AD5EF0();
                    return;
                }
            }
        }
    }
    func_80240144_AD6014();
});

s32 pad_00094C[] = {
    0x00000000,
};

s32 N(displayList_80240950)[] = {
    0xE7000000, 0x00000000, 0xD7000002, 0xFFFFFFFF, 0xE3000A01, 0x00100000, 0xE3000C00, 0x00080000,
    0xE3000D01, 0x00000000, 0xE3000F00, 0x00000000, 0xE3001001, 0x00000000, 0xE3001201, 0x00002000,
    0xE3001402, 0x00000C00, 0xFA000000, 0x4B1F13FF, 0xFB000000, 0xFF764D00, 0xFC10E5E0, 0x230B1D52,
    0xE200001C, 0x0C184B50, 0xD9FDFFFF, 0x00000000, 0xD9FFFFFF, 0x00200404, 0xDF000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_802409D0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 78;
    SI_VAR(3) = 80;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80244F90_ADAE60, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240A74) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 3;
    SI_VAR(2) = 98;
    SI_VAR(3) = 96;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80244F98_ADAE68, 0);
    sleep 100;
});

Script N(script_EnterDoubleDoor_80240B18) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 78;
            SI_VAR(3) = 80;
            await EnterDoubleDoor;
            spawn N(script_8024126C);
        }
        == 1 {
            SI_VAR(2) = 98;
            SI_VAR(3) = 96;
            await EnterDoubleDoor;
        }
        == 2 {
            spawn N(script_8024390C);
        }
        == 3 {
            spawn N(script_80244CA8);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50003);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) == 0xFFFFFF80) {
        MakeNpcs(0, N(npcGroupList_80243568));
    }
    if (SI_SAVE_VAR(0) >= 90) {
        MakeNpcs(0, N(npcGroupList_80242744));
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        EnableGroup(42, 0);
        EnableGroup(39, 0);
        EnableGroup(169, 0);
    } else {
        EnableGroup(45, 0);
        EnableGroup(35, 0);
        EnableGroup(169, 0);
    }
    if (SI_SAVE_VAR(0) >= 90) {
        if (SI_SAVE_FLAG(506) == 0) {
            EnableGroup(169, 1);
            TranslateGroup(169, 780, 90, 0);
            RotateGroup(169, 0xFFFFFFC4, 0, 1, 0);
        }
    }
    SetTexPanner(154, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 40;
        SI_VAR(4) = 900;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802408B0);
    }
    0x802C90FC(154, 0, -1);
    0x802C9428(0, N(displayList_80240950), 0);
    spawn N(script_802407E0);
    bind N(script_ExitDoubleDoor_802409D0) to TriggerFlag_WALL_INTERACT 0;
    bind N(script_ExitDoubleDoor_80240A74) to TriggerFlag_WALL_INTERACT 3;
    spawn N(script_EnterDoubleDoor_80240B18);
    sleep 1;
});

s32 pad_000F84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240F90) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x4B,
    .radius = 0x48,
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

NpcSettings N(npcSettings_80240FBC) = {
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
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_80240FE8) = SCRIPT({
    PlaySoundAtNpc(1, 0x80000066, 0);
    loop {
        func_80240330_AD6200();
        if (SI_VAR(0) < 0) {
            break;
        }
        if (SI_SAVE_FLAG(506) == 1) {
            break;
        }
        sleep 1;
    }
    StopSound(0x80000066);
});

Script N(script_8024108C) = SCRIPT({
    spawn {
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        PlayerMoveTo(525, 0, 50);
        SetPlayerAnimation(0x10006);
    }
    spawn {
        UseSettingsFrom(0, 600, 0, 0);
        SetPanTarget(0, 600, 0, 0);
        SetCamSpeed(0, 1.5);
        PanToTarget(0, 0, 1);
    }
    spawn {
        sleep 20;
        SetNpcJumpscale(0, 0.0);
        NpcJump0(0, 675, 0, 0, 10);
        PlaySoundAtNpc(0, 8352, 0);
    }
    spawn {
        sleep 20;
        SetNpcAnimation(0, 0x800012);
        sleep 5;
        SetNpcAnimation(0, 0x800013);
        sleep 5;
        SetNpcAnimation(0, 0x800014);
        ShakeCam(0, 0, 20, 2.0);
        SetNpcAnimation(0, 0x800002);
    }
});

Script N(script_8024126C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 90) {
        return;
    }
    if (SI_SAVE_FLAG(506) == 1) {
        return;
    }
    DisablePlayerInput(1);
    SetNpcPos(0, 725, 210, 0xFFFFFFE7);
    SetNpcPos(1, 725, 210, 0xFFFFFFE7);
    spawn N(script_80240FE8);
    SpeakToPlayer(2, 0xC001C, 0xC001B, 0, 0x13006F);
    EnableNpcShadow(0, 0);
    SetCamType(0, 1, 0);
    SI_VAR(0) = 725;
    SI_VAR(1) = 50;
    SI_VAR(2) = 0xFFFFFFE7;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 4.0);
    SetCamPitch(0, 11.0, -2.5);
    SetCamDistance(0, 600);
    SetCamPosA(0, 85.0, -3.5);
    SetCamPosB(0, 210.0, 240.0);
    PanToTarget(0, 0, 1);
    sleep 60;
    EnableNpcShadow(0, 1);
    spawn {
        SetNpcJumpscale(0, 0.0);
        NpcJump0(0, 725, 50, 0xFFFFFFE7, 20);
    }
    SetNpcJumpscale(1, 0.0);
    NpcJump0(1, 725, 50, 0xFFFFFFE7, 20);
    sleep 10;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 4.0);
    SetCamPitch(0, 20.0, -12.0);
    SetCamDistance(0, 350);
    SetCamPosA(0, 72.5, -25.0);
    SetCamPosB(0, 210.0, 240.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(0, 0x800019, 0x800018, 0, 0x130070);
    sleep 5;
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    SetCamPitch(0, 15.0, -7.0);
    SetCamDistance(0, 325);
    SetCamPosA(0, 72.0, 0.0);
    SetCamPosB(0, 170.0, 240.0);
    PanToTarget(0, 0, 1);
    sleep 20;
    SpeakToPlayer(2, 0xC001C, 0xC001B, 0, 0x130071);
    sleep 20;
    SetPlayerPos(400, 0, 0xFFFFFFF1);
    PartnerIsFlying(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetNpcPos(0xFFFFFFFC, 370, 20, 0xFFFFFFF1);
    } else {
        SetNpcPos(0xFFFFFFFC, 370, 0, 0xFFFFFFF1);
    }
    ClearPartnerMoveHistory(0xFFFFFFFC);
    ResetCam(0, 90.0);
    await N(script_8024108C);
    sleep 50;
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x130072);
    sleep 10;
    SetNpcVar(0, 0, 1);
    sleep 10;
    spawn {
        PlayerMoveTo(580, 0, 25);
    }
    spawn {
        SetNpcAnimation(0, 0x800004);
        NpcMoveTo(0, 630, 0, 25);
        SetNpcAnimation(0, 0x800002);
    }
    DisablePlayerInput(0);
});

Script N(script_Idle_802418C4) = SCRIPT({
0:
    SetSelfVar(0, 0);
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        sleep 1;
    }
    StartBossBattle(102);
    goto 0;
});

s32 N(vectorList_80241964)[] = {
    0x44480000, 0x42480000, 0x00000000, 0x44430000, 0x42200000, 0x00000000, 0x442F0000, 0x41A00000,
    0x40A00000, 0x441B0000, 0x41700000, 0x41700000, 0x44188000, 0x41C80000, 0x00000000, 0x4414C000,
    0x42480000, 0xC1700000,
};

s32 N(vectorList_802419AC)[] = {
    0x4414C000, 0x42480000, 0xC1700000, 0x4414C000, 0x42340000, 0xC3160000, 0x4414C000, 0x420C0000,
    0xC32A0000, 0x4414C000, 0x42200000, 0xC33E0000,
};

s32 N(vectorList_802419DC)[] = {
    0x4414C000, 0x42200000, 0xC33E0000, 0x4414C000, 0x43110000, 0xC3390000, 0x4414C000, 0x437A0000,
    0xC3340000,
};

Script N(script_80241A00) = SCRIPT({
    loop {
        GetNextPathPos();
        SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(1) += 28;
        SI_VAR(2) += 40;
        SI_VAR(3) += 0xFFFFFFFD;
        SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_80241AE0) = SCRIPT({
    SetNpcPos(0, 800, 0, 0);
    SetNpcYaw(0, 270);
    SetNpcPos(1, 800, 0, 0);
    SetNpcYaw(1, 270);
    SetNpcPos(2, 828, 90, 0xFFFFFFFD);
    spawn N(script_80240FE8);
    spawn {
        sleep 15;
        SetPlayerAnimation(0x1002B);
        sleep 20;
        SetPlayerAnimation(0x10002);
        InterpPlayerYaw(0, 1);
    }
    LoadPath(25, N(vectorList_80241964), 6, 0);
    await N(script_80241A00);
    SetNpcAnimation(0, 0x80001B);
    sleep 40;
    LoadPath(25, N(vectorList_802419AC), 4, 0);
    await N(script_80241A00);
    SetNpcAnimation(0, 0x800018);
    sleep 15;
    LoadPath(25, N(vectorList_802419DC), 3, 0);
    spawn N(script_80241A00);
    sleep 10;
});

Script N(script_80241C98) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(1);
    EnableGroup(169, 0);
    SetPlayerPos(525, 0, 0);
    PartnerIsFlying(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_VAR(1) = 10;
    } else {
        SI_VAR(1) = 0;
    }
    SetNpcPos(0xFFFFFFFC, 490, SI_VAR(1), 0);
    SetNpcYaw(0xFFFFFFFC, 90);
    SetNpcPos(0, 675, 0, 0);
    AdjustCam(0, 90.0, 75, 450, 17.0, -7.0);
    SetNpcAnimation(0, 0x80000F);
    sleep 30;
    SetNpcAnimation(0, 0x800002);
    sleep 10;
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x130078);
    sleep 20;
    InterpNpcYaw(0, 90, 1);
    sleep 10;
    SetNpcAnimation(0, 0x800004);
    NpcMoveTo(0, 800, 0, 20);
    SetNpcAnimation(0, 0x800018);
    SetNpcAnimation(2, 0xC001E);
    SpeakToPlayer(2, 0xC001C, 0xC001B, 0, 0x130079);
    EnablePartnerAI();
    PlayerMoveTo(580, 0, 10);
    await N(script_80241AE0);
    sleep 10;
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x13007A);
    ResetCam(0, 1.0);
    SI_SAVE_FLAG(506) = 1;
    DisablePlayerInput(0);
});

Script N(script_Defeat_80241F4C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetEncounterStatusFlags(2, 1);
            spawn N(script_80241C98);
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80241FC4) = SCRIPT({
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(506) == 1) {
        return;
    }
    BindNpcIdle(-1, N(script_Idle_802418C4));
    BindNpcDefeat(-1, N(script_Defeat_80241F4C));
    SetNpcAnimation(0, 0x800018);
});

Script N(script_Init_8024204C) = SCRIPT({
    EnableNpcShadow(1, 0);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(506) == 1) {
        return;
    }
    SetNpcAnimation(1, 0x800021);
});

Script N(script_Init_802420C0) = SCRIPT({
    SetNpcPos(2, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(506) == 1) {
        return;
    }
    SetNpcPos(2, 775, 90, 0);
    SetNpcAnimation(2, 0xC001C);
});

s32 N(extraAnimationList_8024213C)[] = {
    0x00800000, 0x00800002, 0x00800004, 0x00800005, 0x00800006, 0x00800012, 0x00800013, 0x00800014,
    0x00800018, 0x0080000F, 0x00800019, 0x0080001B, 0x00800021, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242174)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240F90),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00840F05,
        .init = N(script_Init_80241FC4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_8024213C),
    },
};

StaticNpc N(npcGroup_80242364)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240FBC),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00840F05,
        .init = N(script_Init_8024204C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_8024213C),
    },
};

StaticNpc N(npcGroup_80242554)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240FBC),
        .pos = { 670.0, 0.0, -12.0 },
        .flags = 0x00860F05,
        .init = N(script_Init_802420C0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000,
        },
    },
};

NpcGroupList N(npcGroupList_80242744) = {
    NPC_GROUP(N(npcGroup_80242174), 0x23020000),
    NPC_GROUP(N(npcGroup_80242364), 0x23020000),
    NPC_GROUP(N(npcGroup_80242554), 0x00000000),
    {},
};

s32 pad_002774[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242780) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x4B,
    .radius = 0x48,
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

NpcSettings N(npcSettings_802427AC) = {
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
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802427D8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80242804) = {
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

NpcSettings N(npcSettings_80242830) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x2E,
    .radius = 0x24,
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

Script N(script_Idle_8024285C) = SCRIPT({
    SetSelfVar(0, 1);
    loop {
        sleep 1;
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    0x802D585C(1, 0x20000);
    StartBossBattle(102);
});

Script N(script_Defeat_802428F8) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_Init_8024291C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024285C));
    BindNpcDefeat(-1, N(script_Defeat_802428F8));
});

s32 N(extraAnimationList_80242954)[] = {
    0x00800000, 0x00800002, 0x00800003, 0x00800004, 0x00800005, 0x00800006, 0x00800007, 0x00800009,
    0x0080000A, 0x0080000E, 0x00800010, 0x0080000B, 0x00800014, 0x00800017, 0x00800018, 0x00800021,
    0xFFFFFFFF,
};

s32 N(extraAnimationList_80242998)[] = {
    0x00600001, 0x00600002, 0x00600004, 0x00600009, 0x0060000A, 0x0060000B, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802429B4)[] = {
    0x00580000, 0x00580001, 0x00580004, 0x00580006, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802429C8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242780),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00840F05,
        .init = N(script_Init_8024291C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80242954),
    },
};

StaticNpc N(npcGroup_80242BB8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802427AC),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80242954),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80242804),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802429B4),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242804),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802429B4),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802427D8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80242998),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80242830),
        .pos = { 670.0, 0.0, -12.0 },
        .flags = 0x00020F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000,
        },
    },
};

NpcGroupList N(npcGroupList_80243568) = {
    NPC_GROUP(N(npcGroup_802429C8), 0x23010000),
    NPC_GROUP(N(npcGroup_80242BB8), 0x00000000),
    {},
};

s32 pad_00358C[] = {
    0x00000000,
};

Script N(script_80243590) = SCRIPT({
    PlaySoundAtNpc(1, 0x80000066, 0);
    loop {
        func_80240390_AD6260();
        if (SI_VAR(0) < 0) {
            break;
        }
        sleep 1;
    }
    StopSound(0x80000066);
});

s32 N(unk_80243614)[] = {
    0x00050000, 0x0005005A, 0x000500B4, 0x0005010E, 0x000A001E, 0x000A005A, 0x000A0096, 0x000A00D2,
    0x000A010E, 0x000A014A, 0x00140000, 0x0014003C, 0x00140078, 0x001400B4, 0x001400F0, 0x0014012C,
    0x001E000F, 0x001E002D, 0x001E004B, 0x001E0069, 0x001E0087, 0x001E00A5, 0x001E00C3, 0x001E00E1,
    0x001E00FF, 0x001E011D, 0x001E013B, 0x001E0159,
};

s32 N(vectorList_80243684)[] = {
    0x43E10000, 0x43160000, 0xC3960000, 0x44098000, 0x42D20000, 0xC3340000, 0x44228000, 0x42700000,
    0xC2960000, 0x44548000, 0x42B40000, 0x00000000,
};

s32 N(vectorList_802436B4)[] = {
    0x44250000, 0x00000000, 0x41700000, 0x441E8000, 0x42700000, 0xC2A60000, 0x44180000, 0x42A00000,
    0xC3160000, 0x44118000, 0x42700000, 0xC3690000, 0x440B0000, 0x00000000, 0xC39D8000, 0x44048000,
    0xC2700000, 0xC3C70000,
};

Script N(script_802436FC) = SCRIPT({
    UseSettingsFrom(0, 720, 0, 0);
    SetPanTarget(0, 720, 0, 0);
    SetCamSpeed(0, SI_VAR(0));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_80243784) = SCRIPT({
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_8024383C) = SCRIPT({
    GetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    UseSettingsFrom(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPanTarget(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, SI_VAR(0));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_8024390C) = SCRIPT({
    SetMusicTrack(0, 107, 0, 8);
    DisablePlayerInput(1);
    SetNpcPos(5, 680, 0, 0xFFFFFFF1);
    UseSettingsFrom(0, 600, 0, 0xFFFFFFF1);
    SetPanTarget(0, 600, 0, 0xFFFFFFF1);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -10.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        PlaySound(0x80000056);
        ShakeCam(0, 0, 30, 1.0);
        ShakeCam(0, 0, 30, 0.5);
        PlaySound(1075);
        0x802D62E4(51);
    }
    spawn {
        SetPlayerJumpscale(0);
        loop 2 {
            InterpPlayerYaw(270, 0);
            PlayerJump1(550, 0, 0, 20);
            InterpPlayerYaw(90, 0);
            PlayerJump1(630, 0, 0, 20);
        }
        PlayerMoveTo(550, 0, 30);
        PlayerMoveTo(575, 0, 30);
        InterpPlayerYaw(90, 7);
    }
    spawn {
        loop 2 {
            SetPlayerAnimation(0x60003);
            sleep 15;
            SetPlayerAnimation(0x10005);
            sleep 15;
        }
    }
    spawn {
        SetNpcAnimation(5, 0xA0004);
        loop 2 {
            NpcMoveTo(5, 600, 0xFFFFFFFE, 20);
            NpcMoveTo(5, 680, 0xFFFFFFFE, 20);
        }
        SetNpcAnimation(5, 0xA0002);
        NpcMoveTo(5, 600, 0xFFFFFFFE, 30);
        NpcMoveTo(5, 625, 0xFFFFFFFE, 30);
        SetNpcAnimation(5, 0xA0001);
        InterpNpcYaw(5, 270, 7);
    }
    sleep 160;
    SetNpcAnimation(5, 0xC0000);
    sleep 10;
    SetNpcAnimation(5, 0xC0026);
    SpeakToPlayer(5, 0xC0001, 0xC0026, 0, 78);
    SetNpcAnimation(5, 0xC0002);
    sleep 10;
    SetNpcAnimation(5, 0xA0001);
    sleep 10;
    SetNpcAnimation(5, 0x10A0001);
    sleep 20;
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(5, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    sleep 10;
    InterpPlayerYaw(0, 7);
    UseSettingsFrom(0, 600, 0, 0xFFFFFFF1);
    SetPanTarget(0, 600, 0, 0xFFFFFFF1);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(5, 0x10A0001, 0x10A0001, 5, 79);
    sleep 30;
    spawn {
        SetNpcAnimation(0, 0x800018);
        SetNpcAnimation(1, 0x800021);
        SetNpcYaw(0, 90);
        SetNpcYaw(1, 90);
        spawn N(script_80243590);
        LoadPath(50, N(vectorList_80243684), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        SetNpcAnimation(0, 0x800002);
        SetNpcPos(0, 820, 20, 0);
        SetNpcYaw(0, 270);
    }
    spawn {
        SetNpcAnimation(4, 0x60000B);
        SetNpcYaw(4, 90);
        sleep 10;
        LoadPath(50, N(vectorList_80243684), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(4, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        SetNpcAnimation(4, 0x600001);
        SetNpcPos(4, 920, 0, 0);
        SetNpcYaw(4, 270);
    }
    spawn {
        sleep 20;
        func_802403F0_AD62C0();
        EnableGroup(45, 0);
        EnableGroup(35, 0);
        EnableGroup(42, 1);
        EnableGroup(39, 1);
        PlaySoundAt(8343, 0, 600, 60, 0xFFFFFF6A);
        PlayEffect(17, 0, 600, 60, 0xFFFFFF6A, 120, 0, 0, 0, 0, 0, 0, 0, 0);
        func_802404E0_AD63B0();
        sleep 1;
        func_8024046C_AD633C();
    }
    spawn {
        sleep 20;
        ShakeCam(0, 0, 10, 2.0);
    }
    loop 70 {
        sleep 1;
        PlayerFaceNpc(0, 0);
        NpcFaceNpc(5, 0, 0);
    }
    SetNpcAnimation(5, 0xA0001);
    sleep 30;
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    SetMusicTrack(0, 102, 0, 8);
    spawn {
        sleep 5;
        SetNpcJumpscale(0, 0.0);
        NpcJump0(0, 810, 0, 0, 5);
        PlaySoundAtNpc(0, 8352, 0);
        SetNpcAnimation(0, 0x800014);
        ShakeCam(0, 0, 20, 2.0);
        SetNpcAnimation(0, 0x800002);
    }
    SetPanTarget(0, 740, 0, 0);
    SetCamSpeed(0, 2.0);
    WaitForCam(0, 1.0);
    sleep 30;
    spawn {
        SetNpcAnimation(4, 0x600002);
        NpcMoveTo(4, 880, 0, 20);
        SetNpcAnimation(4, 0x600001);
    }
    SpeakToNpc(0, 0x800006, 0x800002, 0, 5, 80);
    SetPanTarget(0, 625, 0, 0xFFFFFFF1);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SpeakToNpc(5, 0xC0007, 0xC0008, 0, 0, 81);
    SI_VAR(0) = 1.0;
    await N(script_8024383C);
    SpeakToNpc(0, 0x800007, 0x800002, 0, 5, 82);
    spawn {
        SetNpcAnimation(0, 0x800004);
        NpcMoveTo(0, 770, 0, 30);
        SetNpcAnimation(0, 0x800002);
    }
    spawn {
        SetNpcAnimation(4, 0x600002);
        NpcMoveTo(4, 840, 0, 30);
        SetNpcAnimation(4, 0x600001);
    }
    sleep 5;
    SI_VAR(0) = 90.0;
    await N(script_802436FC);
    sleep 5;
    PlayerMoveTo(660, 0, 15);
    SetPlayerAnimation(0x10006);
    sleep 15;
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 83);
    SpeakToPlayer(5, 0xC0013, 0xC0012, 5, 84);
    sleep 10;
    SetNpcAnimation(0, 0x80000E);
    SpeakToPlayer(0, 0x80000E, 0x80000E, 0, 85);
    SI_VAR(0) = 90.0;
    await N(script_8024383C);
    SpeakToPlayer(0, 0x80000A, 0x80000A, 0, 86);
    SI_VAR(0) = 5.0;
    await N(script_802436FC);
    SetNpcVar(0, 0, 0);
    sleep 5;
    PlayerMoveTo(695, 0, 10);
    SetPlayerJumpscale(0.75);
    PlayerJump(720, 80, 0, 20);
    DisablePlayerPhysics(1);
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
    }
    SetPlayerActionState(10);
    SetPlayerPos(660, 0, 15);
    sleep 1;
    SetPlayerAnimation(0x10018);
    SetNpcAnimation(5, 0xC0006);
    SetNpcAnimation(0, 0x80000E);
    await N(script_80243784);
    sleep 10;
    SpeakToPlayer(5, 0xC0006, 0xC0006, 5, 93);
    sleep 10;
    UseSettingsFrom(0, 790, 0, 0);
    SetPanTarget(0, 790, 0, 0);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    SpeakToPlayer(0, 0x80000E, 0x80000E, 5, 94);
    sleep 10;
    SpeakToPlayer(4, 0x600004, 0x600001, 5, 95);
    SetNpcAnimation(0, 0x800002);
    InterpNpcYaw(0, 90, 5);
    sleep 10;
    SetNpcAnimation(0, 0x800010);
    sleep 20;
    SetNpcAnimation(0, 0x800003);
    SpeakToNpc(0, 0x800009, 0x800003, 0, 4, 96);
    sleep 10;
    SI_VAR(0) = 90.0;
    await N(script_802436FC);
    SetNpcAnimation(0, 0x800002);
    InterpNpcYaw(0, 270, 10);
    sleep 20;
    SpeakToPlayer(0, 0x800006, 0x800002, 5, 97);
    SetNpcAnimation(0, 0x800010);
    sleep 10;
    FadeOutMusic(0, 500);
    PlaySoundAtNpc(0, 8481, 0);
    PlayEffect(19, 0, 780, 95, 27, 1, 30, 0, 0, 0, 0, 0, 0, 0);
    sleep 40;
    spawn {
        ShakeCam(0, 0, 10, 4.0);
    }
    PlaySoundAtPlayer(8487, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) += 5;
    PlayEffect(54, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    spawn {
        PlaySoundAtPlayer(912, 0);
        SetPlayerAnimation(0x10017);
        LoadPath(30, N(vectorList_802436B4), 6, 0);
        SI_VAR(4) = 0;
        loop {
            GetNextPathPos();
            SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
            SI_VAR(4) += 45;
            InterpPlayerYaw(SI_VAR(4), 0);
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    sleep 30;
    GotoMap(D_80244FC0_ADAE90, 2);
    sleep 100;
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80244CA8) = SCRIPT({
    FadeOutMusic(0, 500);
    DisablePlayerInput(1);
    SetNpcAnimation(5, 0x10A0001);
    SetNpcYaw(5, 315);
    SetNpcPos(5, 613, 0, 0xFFFFFFA6);
    SetNpcAnimation(0, 0x80000E);
    SetNpcPos(0, 750, 0, 0);
    SetNpcAnimation(4, 0x600001);
    SetNpcPos(4, 820, 0, 0);
    SI_VAR(0) = 90.0;
    await N(script_802436FC);
    SetNpcSpeed(5, 3.0);
    NpcMoveTo(5, 570, 0xFFFFFF7E, 0);
    SpeakToPlayer(5, 0x10A0001, 0x10A0001, 5, 98);
    sleep 10;
    InterpNpcYaw(4, 90, 0);
    sleep 10;
    SetNpcAnimation(4, 0x600004);
    sleep 30;
    SetNpcAnimation(4, 0x600001);
    spawn {
        SetNpcAnimation(2, 0x580006);
        SetNpcPos(2, 900, 0, 30);
        SetNpcSpeed(2, 4.0);
        NpcMoveTo(2, 660, 30, 0);
    }
    spawn {
        SetNpcAnimation(3, 0x580006);
        SetNpcPos(3, 940, 0, 30);
        SetNpcSpeed(3, 4.0);
        NpcMoveTo(3, 700, 30, 0);
    }
    sleep 30;
    InterpNpcYaw(4, 270, 0);
    GotoMap(D_80244FC8_ADAE98, 5);
    sleep 100;
    DisablePlayerInput(0);
});

s32 pad_004F84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244F90_ADAE60

// rodata: D_80244F98_ADAE68

// rodata: D_80244FA0_ADAE70

// rodata: D_80244FA8_ADAE78

// rodata: D_80244FB0_ADAE80

// rodata: D_80244FB8_ADAE88

// rodata: D_80244FC0_ADAE90

// rodata: D_80244FC8_ADAE98
