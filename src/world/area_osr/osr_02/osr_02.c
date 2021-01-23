#include "osr_02.h"

s32 pad_000018[2];
s32 pad_000058[2];
s32 pad_00011C[1];
s32 pad_00014C[1];
Script N(script_ExitSingleDoor_802401B0);
Script N(script_ExitDoubleDoor_80240264);
Script N(script_80240318);
Script N(script_80240384);
Script N(script_EnterDoubleDoor_80240408);
Script N(main);
s32 pad_000984[3];
Script N(script_MakeEntities);
s32 pad_000A3C[1];
s32 unk_missing_80240AC4[22];
Script N(script_80240B1C);
s32 N(vectorList_80240B58)[9];
s32 N(vectorList_80240B7C)[39];
Script N(script_80240C18);
Script N(script_80240EC0);
Script N(script_80241190);
Script N(script_Init_802424B8);
Script N(script_Init_802424FC);
s32 N(shortTable_8024253C)[4];
Script N(script_Aux_8024254C);
Script N(script_Init_80242568);
Script N(script_Init_802425BC);
Script N(script_Init_80242610);
Script N(script_Init_80242664);
Script N(script_Init_802426B8);
Script N(script_Init_8024270C);
Script N(script_Init_80242760);
Script N(script_Init_802427B4);
s32 N(extraAnimationList_802427C4)[9];
s32 N(extraAnimationList_802427E8)[4];
s32 N(extraAnimationList_802427F8)[4];
s32 N(extraAnimationList_80242808)[3];
s32 N(extraAnimationList_80242814)[3];
s32 N(extraAnimationList_80242820)[3];
s32 N(extraAnimationList_8024282C)[3];
s32 N(extraAnimationList_80242838)[3];
s32 N(extraAnimationList_80242844)[3];
StaticNpc N(npcGroup_80242850)[10];
NpcGroupList N(npcGroupList_80243BB0);
s32 pad_003BC8[2];
s32 N(extraAnimationList_80243BFC)[10];
Script N(script_Interact_80243C24);
Script N(script_Idle_80243D54);
Script N(script_Init_80243E7C);
StaticNpc N(npcGroup_80243EF8)[1];
NpcGroupList N(npcGroupList_802440E8);
const char D_80244100_AB6270[9]; // "kpa_121"
const char D_80244108_AB6278[8]; // "kkj_10"
const char D_80244110_AB6280[8]; // "hos_10"
s32 pad_004118[2];

// text: func_Init_AB2170

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_AB2190

s32 pad_000058[] = {
    0x00000000, 0x00000000,
};

// text: func_80240060_AB21D0

s32 pad_00011C[] = {
    0x00000000,
};

// text: func_80240120_AB2290

s32 pad_00014C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -205.0f, 0.0f, 55.0f, 135.0f },
    { 0.0f, 20.0f, -290.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19000A,
};

Script N(script_ExitSingleDoor_802401B0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 49;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80244100_AB6270, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240264) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(2);
    SI_VAR(0) = 1;
    SI_VAR(1) = 1;
    SI_VAR(2) = 46;
    SI_VAR(3) = 44;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80244108_AB6278, 0);
    sleep 100;
});

Script N(script_80240318) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(1);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140180);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_80240384) = SCRIPT({
    if (SI_SAVE_VAR(0) == 58) {
        bind N(script_80240318) to TriggerFlag_WALL_INTERACT 0;
    } else {
        bind N(script_ExitSingleDoor_802401B0) to TriggerFlag_WALL_INTERACT 0;
    }
    bind N(script_ExitDoubleDoor_80240264) to TriggerFlag_WALL_INTERACT 1;
});

Script N(script_EnterDoubleDoor_80240408) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240384);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(1);
            SI_VAR(2) = 49;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 1 {
            UseDoorSounds(2);
            SI_VAR(2) = 46;
            SI_VAR(3) = 44;
            await EnterDoubleDoor;
        }
        == 2 {
            spawn N(script_80241190);
        }
    }
    spawn N(script_80240384);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    if (SI_SAVE_VAR(0) > 94) {
        SI_SAVE_FLAG(1994) = 1;
    }
    SetSpriteShading(0x40000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    if (SI_SAVE_VAR(0) == 58) {
        func_80240020_AB2190(3);
        MakeNpcs(0, N(npcGroupList_802440E8));
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 2 {
            MakeNpcs(0, N(npcGroupList_80243BB0));
        }
    }
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(509) == 0) {
        PlayEffect(32, 3, -269.1689453125, 50.0, 100.220703125, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, -2.6025390625, 50.0, 161.5830078125, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, 182.146484375, 50.0, 158.033203125, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, 346.9384765625, 50.0, 31.861328125, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, 291.044921875, 86.2060546875, -191.08203125, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, -105.3916015625, 70.0, -203.115234375, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, -52.5, 70.0, -233.7373046875, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, 52.5, 70.0, -233.7373046875, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(32, 3, 108.2294921875, 70.0, -200.599609375, 1, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    } else {
        EnableGroup(42, 0);
    }
    if (SI_SAVE_VAR(0) >= 94) {
        FadeOutMusic(0, 500);
    }
    spawn N(script_EnterDoubleDoor_80240408);
    sleep 1;
    if (SI_SAVE_VAR(0) == 94) {
        SI_SAVE_VAR(0) = 95;
    }
});

s32 pad_000984[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(509) == 1) {
        return;
    }
    if (SI_SAVE_VAR(0) < 89) {
        return;
    }
    MakeEntity(D_802EA588, 180, 60, 0xFFFFFFF1, 0, 142, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1643));
    MakeEntity(D_802E9A18, 0xFFFFFF9C, 60, 0xFFFFFFCE, 0, 0x80000000);
});

s32 pad_000A3C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240A40) = {
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

NpcSettings N(npcSettings_80240A6C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x14,
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

NpcSettings N(npcSettings_80240A98) = {
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

s32 unk_missing_80240AC4[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_80240B1C) = SCRIPT({

});

NpcSettings N(npcSettings_80240B2C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_80240B1C),
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

s32 N(vectorList_80240B58)[] = {
    0xC1200000, 0x42200000, 0x41200000, 0x41700000, 0x42040000, 0x41A00000, 0x42480000, 0x41F00000,
    0x41F00000,
};

s32 N(vectorList_80240B7C)[] = {
    0x42480000, 0x41F00000, 0x41F00000, 0x428C0000, 0x42340000, 0x41200000, 0x42B40000, 0x42700000,
    0x41F00000, 0x428C0000, 0x42960000, 0x42480000, 0x42480000, 0x42B40000, 0x41F00000, 0x428C0000,
    0x42D20000, 0x41200000, 0x42B40000, 0x42F00000, 0x41F00000, 0x428C0000, 0x43070000, 0x42480000,
    0x42480000, 0x43160000, 0x41F00000, 0x428C0000, 0x43250000, 0x41200000, 0x42B40000, 0x43340000,
    0x41F00000, 0x428C0000, 0x43430000, 0x42480000, 0x42480000, 0x43520000, 0x41F00000,
};

Script N(script_80240C18) = SCRIPT({
    SetNpcFlagBits(SI_VAR(4), 0x40000, 1);
    spawn {
        loop 30 {
            GetNpcPos(SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 6;
        }
    }
    spawn {
        loop 30 {
            GetNpcPos(SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 20;
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 8;
        }
    }
    spawn {
        MakeLerp(0, 1800, 100, 2);
        loop {
            UpdateLerp();
            SetNpcRotation(SI_VAR(4), 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    GetNpcPos(SI_VAR(4), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    MakeLerp(80, 260, 100, 2);
    loop {
        UpdateLerp();
        SetNpcPos(SI_VAR(4), SI_VAR(7), SI_VAR(0), SI_VAR(9));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetNpcPos(SI_VAR(4), SI_VAR(7), 0xFFFFFC18, SI_VAR(9));
});

Script N(script_80240EC0) = SCRIPT({
    spawn {
        loop 30 {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 6;
        }
    }
    spawn {
        loop 30 {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 20;
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 8;
        }
    }
    spawn {
        MakeLerp(0, 2160, 120, 2);
        loop {
            UpdateLerp();
            SetNpcRotation(1, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        PlaySoundAtNpc(1, 98, 0);
        LoadPath(120, N(vectorList_80240B7C), 13, 1);
        loop {
            GetNextPathPos();
            SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        SetNpcPos(1, SI_VAR(1), 0xFFFFFC18, SI_VAR(3));
    }
    spawn {
        AdjustCam(0, 0.5, 0, 550, 17.0, -10.0);
    }
});

Script N(script_80241190) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetMusicTrack(0, 120, 2, 8);
    SetPlayerPos(15, 0, 30);
    InterpPlayerYaw(90, 0);
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFBA, SI_VAR(1), 15);
    SetNpcYaw(0xFFFFFFFC, 90);
    SetNpcAnimation(0xFFFFFFFC, 262);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 17.0, -7.0);
    SetCamDistance(0, 700.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    SetCamDistance(0, 350.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SetPlayerAnimation(0x60005);
    SetNpcPos(9, 30, 25, 30);
    sleep 20;
    SetNpcAnimation(2, 0x120003);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) = 80;
    SI_VAR(2) = 35;
    SetNpcJumpscale(9, 0.5);
    NpcJump1(9, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    SetPlayerAnimation(0x10002);
    PlaySound(313);
    loop 6 {
        PlayEffect(51, 9, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 20, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(17, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 10;
    }
    loop 20 {
        SI_VAR(1) += -1;
        SetNpcPos(9, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    SetNpcPos(9, 0, 0xFFFFFC18, 0);
    sleep 20;
    SetNpcAnimation(2, 0x120001);
    sleep 10;
    SpeakToPlayer(2, 0x120002, 0x120001, 0, 0x10000);
    sleep 10;
    spawn {
        sleep 5;
        SetNpcJumpscale(2, 0.0);
        NpcJump0(2, 120, 80, 0, 40);
        InterpNpcYaw(2, 270, 0);
    }
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = 120;
    SI_VAR(1) = 80;
    SI_VAR(2) = 0;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SetCamSpeed(0, 1.0);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(3, 0x130002, 0x130001, 0, 0x10001);
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(4, 0x140002, 0x140001, 0, 0x10002);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(5, 0x150002, 0x150001, 0, 0x10003);
    GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(6, 0x160002, 0x160001, 0, 0x10004);
    GetNpcPos(7, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(7, 0x170003, 0x170001, 0, 0x10005);
    GetNpcPos(8, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(8, 0x180002, 0x180001, 0, 0x10006);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -5.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(2, 0x120002, 0x120001, 0, 0x10007);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 17.0, -2.0);
    SetCamDistance(0, 300.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 5;
    SpeakToPlayer(1, 0x200009, 0x200001, 5, 0x10008);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 17.0, -6.0);
    SetCamDistance(0, 275.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(2, 0x120002, 0x120001, 0, 0x10009);
    sleep 20;
    AdjustCam(0, 90.0, 70, 400, 17.0, -11.0);
    SetPlayerAnimation(0x1002A);
    spawn {
        SI_VAR(4) = 2;
        PlaySoundAtNpc(SI_VAR(4), 8261, 0);
        await N(script_80240C18);
    }
    spawn {
        sleep 30;
        SI_VAR(4) = 6;
        PlaySoundAtNpc(SI_VAR(4), 8262, 0);
        await N(script_80240C18);
    }
    spawn {
        sleep 60;
        SI_VAR(4) = 4;
        PlaySoundAtNpc(SI_VAR(4), 8261, 0);
        await N(script_80240C18);
    }
    spawn {
        sleep 90;
        SI_VAR(4) = 3;
        PlaySoundAtNpc(SI_VAR(4), 8262, 0);
        await N(script_80240C18);
    }
    spawn {
        sleep 120;
        SI_VAR(4) = 8;
        PlaySoundAtNpc(SI_VAR(4), 8261, 0);
        await N(script_80240C18);
    }
    spawn {
        sleep 150;
        SI_VAR(4) = 5;
        PlaySoundAtNpc(SI_VAR(4), 8262, 0);
        await N(script_80240C18);
    }
    sleep 180;
    SI_VAR(4) = 7;
    PlaySoundAtNpc(SI_VAR(4), 8261, 0);
    await N(script_80240C18);
    SetPlayerAnimation(0x10002);
    sleep 20;
    SetMusicTrack(0, 112, 1, 8);
    LoadPath(30, N(vectorList_80240B58), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 5;
    InterpNpcYaw(1, 270, 0);
    sleep 10;
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 17.0, -4.0);
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(1, 0x200009, 0x200001, 0, 0x1000A);
    sleep 10;
    SetNpcAnimation(0, 0xC0000);
    sleep 10;
    SetNpcAnimation(0, 0xC0026);
    SpeakToPlayer(0, 0xC0001, 0xC0026, 5, 0x1000B);
    SetNpcAnimation(0, 0xC0002);
    sleep 10;
    SetNpcAnimation(0, 0xA0001);
    sleep 10;
    SetNpcAnimation(1, 0x200016);
    SpeakToPlayer(1, 0x200016, 0x200016, 0, 0x1000C);
    SetNpcAnimation(1, 0x200001);
    EndSpeech(1, 0x200009, 0x200001, 0);
    sleep 20;
    spawn N(script_80240EC0);
    SetPlayerAnimation(0x1002A);
    sleep 250;
    SetNpcAnimation(0, 0xA0002);
    NpcMoveTo(0, 0xFFFFFFF6, 30, 40);
    SetNpcAnimation(0, 0xA0001);
    SetPlayerAnimation(0x10002);
    InterpPlayerYaw(270, 0);
    sleep 60;
    InterpPlayerYaw(90, 0);
    SetPlayerAnimation(0x1002A);
    sleep 20;
    GotoMap(D_80244110_AB6280, 2);
    sleep 100;
});

Script N(script_Init_802424B8) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFFE7, 0, 40);
    InterpNpcYaw(-1, 90, 0);
});

Script N(script_Init_802424FC) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFFF6, 40, 10);
    SetNpcYaw(-1, 90);
});

s32 N(shortTable_8024253C)[] = {
    0x00010003, 0x00050007, 0x00070005, 0x00030000,
};

Script N(script_Aux_8024254C) = SCRIPT({
    func_80240060_AB21D0();
});

Script N(script_Init_80242568) = SCRIPT({
    SetNpcPos(2, 60, 20, 30);
    NpcFacePlayer(-1, 0);
    BindNpcAux(-1, N(script_Aux_8024254C));
});

Script N(script_Init_802425BC) = SCRIPT({
    SetNpcPos(-1, 66, 80, 0xFFFFFFE5);
    NpcFacePlayer(-1, 0);
    BindNpcAux(-1, N(script_Aux_8024254C));
});

Script N(script_Init_80242610) = SCRIPT({
    SetNpcPos(-1, 53, 80, 0xFFFFFFA1);
    NpcFacePlayer(-1, 0);
    BindNpcAux(-1, N(script_Aux_8024254C));
});

Script N(script_Init_80242664) = SCRIPT({
    SetNpcPos(-1, 91, 80, 0xFFFFFF7C);
    NpcFacePlayer(-1, 0);
    BindNpcAux(-1, N(script_Aux_8024254C));
});

Script N(script_Init_802426B8) = SCRIPT({
    SetNpcPos(-1, 151, 80, 0xFFFFFF7C);
    NpcFacePlayer(-1, 0);
    BindNpcAux(-1, N(script_Aux_8024254C));
});

Script N(script_Init_8024270C) = SCRIPT({
    SetNpcPos(-1, 189, 80, 0xFFFFFFA1);
    NpcFacePlayer(-1, 0);
    BindNpcAux(-1, N(script_Aux_8024254C));
});

Script N(script_Init_80242760) = SCRIPT({
    SetNpcPos(-1, 176, 80, 0xFFFFFFE5);
    NpcFacePlayer(-1, 0);
    BindNpcAux(-1, N(script_Aux_8024254C));
});

Script N(script_Init_802427B4) = SCRIPT({

});

s32 N(extraAnimationList_802427C4)[] = {
    0x000A0001, 0x000A0002, 0x000C0000, 0x000C0001, 0x000C0002, 0x000C0006, 0x000C001E, 0x000C0026,
    0xFFFFFFFF,
};

s32 N(extraAnimationList_802427E8)[] = {
    0x00200001, 0x00200009, 0x00200016, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802427F8)[] = {
    0x00120001, 0x00120002, 0x00120003, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242808)[] = {
    0x00130001, 0x00130002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242814)[] = {
    0x00140001, 0x00140002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242820)[] = {
    0x00150001, 0x00150002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024282C)[] = {
    0x00160001, 0x00160002, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242838)[] = {
    0x00170001, 0x00170003, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242844)[] = {
    0x00180001, 0x00180002, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242850)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240A40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00020F05,
        .init = N(script_Init_802424B8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000,
        },
        .extraAnimations = N(extraAnimationList_802427C4),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240A6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_802424FC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802427E8),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80240A98),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80242568),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120000, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001,
        },
        .extraAnimations = N(extraAnimationList_802427F8),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80240A98),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_802425BC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130000, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001,
        },
        .extraAnimations = N(extraAnimationList_80242808),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80240A98),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80242610),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
        .extraAnimations = N(extraAnimationList_80242814),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80240A98),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80242664),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150000, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001,
        },
        .extraAnimations = N(extraAnimationList_80242820),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80240A98),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_802426B8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
        .extraAnimations = N(extraAnimationList_8024282C),
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80240A98),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_8024270C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170000, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001,
        },
        .extraAnimations = N(extraAnimationList_80242838),
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80240A98),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80242760),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180000, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001,
        },
        .extraAnimations = N(extraAnimationList_80242844),
    },
    {
        .id = 9,
        .settings = &N(npcSettings_80240B2C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_802427B4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000, 0x00D30000,
        },
    },
};

NpcGroupList N(npcGroupList_80243BB0) = {
    NPC_GROUP(N(npcGroup_80242850), 0x00000000),
    {},
};

s32 pad_003BC8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80243BD0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
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

s32 N(extraAnimationList_80243BFC)[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x00390005, 0x00390008, 0x00390007, 0x00390013,
    0x00390014, 0xFFFFFFFF,
};

Script N(script_Interact_80243C24) = SCRIPT({
    DisablePlayerInput(1);
    CancelMessage();
    sleep 10;
    SetNpcAnimation(-1, 0x390008);
    sleep 10;
    SetNpcAnimation(-1, 0x390002);
    func_80240120_AB2290(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(1) = 0x14014A;
        }
        == 3 {
            SI_VAR(1) = 0x14014B;
        }
        else {
            SI_VAR(1) = 0x14014C;
        }
    }
    SpeakToPlayer(-1, 0x390005, 0x390002, 16, SI_VAR(1));
    sleep 10;
    SetNpcAnimation(-1, 0x390007);
    DisablePlayerInput(0);
});

Script N(script_Idle_80243D54) = SCRIPT({
    SetSelfVar(0, 0);
    GetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            AwaitPlayerApproach(SI_VAR(1), SI_VAR(3), 85);
            spawn {
                SpeakToPlayer(-1, 0x390007, 0x390007, 5, 0x140149);
            }
            SetSelfVar(0, 1);
        } else {
            AwaitPlayerLeave(SI_VAR(1), SI_VAR(3), 90);
            CancelMessage();
            SetSelfVar(0, 0);
        }
        sleep 1;
    }
});

Script N(script_Init_80243E7C) = SCRIPT({
    SetNpcAnimation(-1, 0x390007);
    SetNpcPos(-1, 0xFFFFFFD8, 20, 0xFFFFFF56);
    SetNpcYaw(-1, 200);
    BindNpcIdle(-1, N(script_Idle_80243D54));
    BindNpcInteract(-1, N(script_Interact_80243C24));
});

StaticNpc N(npcGroup_80243EF8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243BD0),
        .pos = { -70.0, 0.0, -100.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_80243E7C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80243BFC),
    },
};

NpcGroupList N(npcGroupList_802440E8) = {
    NPC_GROUP(N(npcGroup_80243EF8), 0x00000000),
    {},
};

// rodata: D_80244100_AB6270

// rodata: D_80244108_AB6278

// rodata: D_80244110_AB6280

s32 pad_004118[] = {
    0x00000000, 0x00000000,
};
