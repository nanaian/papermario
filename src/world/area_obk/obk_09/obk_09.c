#include "obk_09.h"

s32 pad_000184[3];
s32 pad_000348[2];
s32 pad_0003E4[3];
s32 pad_000424[3];
Script N(script_802404A0);
Script N(script_80240508);
Script N(script_80240534);
Script N(script_EnterDoubleDoor_80240580);
Script N(script_ExitDoubleDoor_802406A8);
Script N(script_ExitDoubleDoor_8024075C);
Script N(main);
s32 pad_000988[2];
Script N(script_80240990);
s32 unk_missing_8024185C[33];
Script N(script_Init_802418E0);
Script N(script_Interact_802418F0);
Script N(script_Init_80241A94);
Script N(script_Aux_80241B1C);
Script N(script_Init_80241B44);
Script N(script_Init_80241BF8);
Script N(script_Init_80241C38);
StaticNpc N(npcGroup_80241C78)[3];
StaticNpc N(npcGroup_80242248)[2];
NpcGroupList N(npcGroupList_80242628);
NpcGroupList N(npcGroupList_80242640);
s32 pad_002658[2];
Script N(script_80242660);
s32 pad_0029DC[1];
const char D_802429E0_BDD190[8]; // "obk_01"
const char D_802429E8_BDD198[12]; // "party_resa"
const char D_802429F4_BDD1A4[8]; // "omo_03"
s32 pad_0029FC[1];

// text: func_80240000_BDA7B0

s32 pad_000184[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240190_BDA940

// text: func_80240248_BDA9F8

s32 pad_000348[] = {
    0x00000000, 0x00000000,
};

// text: func_80240350_BDAB00

s32 pad_0003E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802403F0_BDABA0

s32 pad_000424[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -180.0f, 0.0f, 380.0f, 0.0f },
    { 180.0f, 0.0f, 380.0f, 0.0f },
    { -135.0f, 0.0f, 135.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900BA,
};

Script N(script_802404A0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

Script N(script_80240508) = SCRIPT({
    SetMusicTrack(0, 130, 0, 8);
});

Script N(script_80240534) = SCRIPT({
    FadeOutMusic(0, 500);
    sleep 15;
    SetMusicTrack(0, 27, 0, 8);
});

Script N(script_EnterDoubleDoor_80240580) = SCRIPT({
    DisablePlayerInput(1);
    EnableGroup(41, 0);
    ModifyColliderFlags(0, 37, 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            SI_VAR(2) = 57;
            SI_VAR(3) = 55;
            await EnterDoubleDoor;
        }
        == 1 {
            UseDoorSounds(3);
            SI_VAR(2) = 61;
            SI_VAR(3) = 59;
            await EnterDoubleDoor;
        }
    }
    spawn N(script_80240990);
    sleep 1;
    DisablePlayerInput(0);
});

Script N(script_ExitDoubleDoor_802406A8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 38;
    SI_VAR(2) = 57;
    SI_VAR(3) = 55;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802429E0_BDD190, 5);
    sleep 100;
});

Script N(script_ExitDoubleDoor_8024075C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 39;
    SI_VAR(2) = 61;
    SI_VAR(3) = 59;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802429E0_BDD190, 6);
    sleep 100;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        MakeNpcs(0, N(npcGroupList_80242640));
        spawn N(script_80242660);
        FadeInMusic(0, 28, 0, 3000, 0, 127);
        sleep 1;
        return;
    }
    MakeNpcs(0, N(npcGroupList_80242628));
    bind N(script_ExitDoubleDoor_802406A8) to TriggerFlag_WALL_INTERACT 38;
    bind N(script_ExitDoubleDoor_8024075C) to TriggerFlag_WALL_INTERACT 39;
    spawn N(script_EnterDoubleDoor_80240580);
    spawn N(script_802404A0);
});

s32 pad_000988[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240990) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFDC) {
        return;
    }
    SI_SAVE_VAR(0) = 0xFFFFFFDC;
    DisablePlayerInput(1);
    SetMusicTrack(0, 28, 0, 8);
    spawn {
        sleep 10;
        SetPlayerPos(0xFFFFFF4C, 0, 344);
        SetNpcPos(0xFFFFFFFC, 0xFFFFFF4C, 20, 344);
        PlayerMoveTo(0, 190, 60);
        SetPlayerAnimation(0x8001E);
    }
    sleep 10;
    SetCamType(0, 4, 1);
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 5.0, -9.0);
    SetCamDistance(0, 500);
    SetCamPosA(0, 200, 280);
    SetCamPosB(0, 0, 110);
    SetCamPosC(0, 0, 0);
    PanToTarget(0, 0, 1);
    sleep 48;
    ShowMessageAtScreenPos(0xE0042, 160, 40);
    kill SI_VAR(10);
    InterpPlayerYaw(40, 0);
    SetPlayerAnimation(0x1010002);
    SetCamSpeed(0, 2.0);
    SetCamPitch(0, 4.0, -9.0);
    SetCamDistance(0, 400);
    SetCamPosA(0, 200, 300);
    SetCamPosB(0, 0xFFFFFFEC, 10);
    SetCamPosC(0, 0, 60);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SetNpcPos(0, 0xFFFFFFF6, 80, 0xFFFFFFDD);
    SetNpcPos(1, 30, 70, 0xFFFFFFB5);
    SetNpcYaw(0, 270);
    SetNpcYaw(1, 270);
    PlaySoundAtNpc(0, 193, 0);
    SI_VAR(0) = 0.0;
    loop 20 {
        SI_VAR(0) += 12.0;
        func_802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        func_802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    sleep 40;
    UseSettingsFrom(0, 0, 50, 0xFFFFFFBA);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 3.0, -10.0);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, 0, 50, 0xFFFFFFBA);
    sleep 20;
    SpeakToPlayer(0, 0x50004, 0x50001, 0, 0xE0043);
    SpeakToPlayer(1, 0xBF0004, 0xBF0001, 0, 0xE0044);
    sleep 10;
    SpeakToPlayer(0, 0x50004, 0x50001, 0, 0xE0045);
    sleep 20;
    InterpNpcYaw(0, 225, 0);
    SpeakToPlayer(1, 0xBF0004, 0xBF0001, 0, 0xE0046);
    SetCamSpeed(0, 2.0);
    SetPanTarget(0, 20, 50, 0xFFFFFFBA);
    sleep 10;
    SpeakToPlayer(1, 0xBF0004, 0xBF0001, 0, 0xE0047);
    SetCamType(0, 4, 1);
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 15.5, -9.5);
    SetCamDistance(0, 550);
    SetCamPosA(0, 200, 300);
    SetCamPosB(0, 0, 80);
    SetCamPosC(0, 0, 0);
    PanToTarget(0, 0, 1);
    sleep 10;
    SpeakToPlayer(1, 0xBF0007, 0xBF0008, 0, 0xE0048);
    UseSettingsFrom(0, 0, 50, 0xFFFFFFBA);
    SetCamDistance(0, 300);
    SetCamPitch(0, 3.0, -10.0);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, 20, 50, 0xFFFFFFBA);
    sleep 10;
    SpeakToPlayer(1, 0xBF0004, 0xBF0001, 0, 0xE0049);
    SetCamSpeed(0, 2.0);
    SetPanTarget(0, 0, 50, 0xFFFFFFBA);
    sleep 10;
    InterpNpcYaw(0, 270, 0);
    sleep 10;
    SpeakToPlayer(0, 0x50004, 0x50001, 5, 0xE004A);
    InterpNpcYaw(0, 90, 0);
    SpeakToPlayer(0, 0x50004, 0x50001, 5, 0xE004B);
    SetCamDistance(0, 550);
    SetCamPitch(0, 3.0, -12.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    EnableGroup(41, 1);
    SetNpcPos(2, 1, 650, 80);
    EnableNpcShadow(2, 0);
    PlaySoundAtNpc(2, 0x8000000F, 0);
    MakeLerp(0xFFFFFEE8, 0xFFFFFE20, 100, 1);
    loop {
        UpdateLerp();
        TranslateGroup(41, 0, SI_VAR(0), 0);
        SI_VAR(0) += 650;
        SetNpcPos(2, 1, SI_VAR(0), 80);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(0x8000000F);
    PlaySoundAtNpc(2, 155, 0);
    ShakeCam(0, 0, 15, 0.2001953125);
    sleep 40;
    SetCamType(0, 4, 1);
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 30.0, -18.0);
    SetCamDistance(0, 500);
    SetCamPosA(0, 0, 350);
    SetCamPosB(0, 0, 0);
    SetCamPosC(0, 0, 0);
    PanToTarget(0, 0, 1);
    sleep 20;
    SpeakToPlayer(2, 0x140005, 0x140009, 0, 0xE004C);
    UseSettingsFrom(0, 0, 50, 0xFFFFFFBA);
    SetCamDistance(0, 300);
    SetCamPitch(0, 3.0, -10.0);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, 0, 50, 0xFFFFFFBA);
    sleep 20;
    spawn {
        sleep 30;
        SetNpcPos(2, 1, 620, 80);
        EnableNpcShadow(2, 0);
        PlaySoundAtNpc(2, 0x8000000F, 0);
        MakeLerp(0xFFFFFE20, 0xFFFFFEE8, 100, 1);
        loop {
            UpdateLerp();
            TranslateGroup(41, 0, SI_VAR(0), 0);
            SI_VAR(0) += 640;
            SetNpcPos(2, 1, SI_VAR(0), 80);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        StopSound(0x8000000F);
        EnableGroup(41, 0);
    }
    SpeakToPlayer(0, 0x50004, 0x50001, 0, 0xE004D);
    SpeakToPlayer(1, 0xBF0006, 0xBF0005, 0, 0xE004E);
    SpeakToNpc(0, 0x50004, 0x50001, 0, 1, 0xE004F);
    SpeakToPlayer(1, 0xBF000B, 0xBF0008, 0, 0xE0050);
    SpeakToPlayer(0, 0x50008, 0x50001, 0, 0xE0051);
    SpeakToPlayer(1, 0xBF0007, 0xBF0008, 0, 0xE0052);
    SetCamSpeed(0, 2.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    SetNpcJumpscale(0, 0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 40;
    SI_VAR(2) += 150;
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 25);
    SpeakToPlayer(0, 0x50004, 0x50001, 0, 0xE0053);
    func_80240000_BDA7B0(0, 9);
    func_80240350_BDAB00();
    spawn N(script_80240508);
    sleep 15;
    ShowMessageAtScreenPos(0x1D018D, 160, 40);
    spawn N(script_80240534);
    sleep 10;
    sleep 10;
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x5000B, 0x5000B, 0, 0xE0054);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

NpcSettings N(npcSettings_80241830) = {
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

s32 unk_missing_8024185C[] = {
    0x00000000, 0x001A0018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00630000,
};

Script N(script_Init_802418E0) = SCRIPT({

});

Script N(script_Interact_802418F0) = SCRIPT({
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) == 9) {
        SpeakToNpc(1, 0xBF0004, 0xBF0004, 0, 0xFFFFFFFC, 0xE0057);
        DisablePartnerAI(0);
        SpeakToNpc(0xFFFFFFFC, 0x50004, 0x50001, 0, 1, 0xE0058);
        EnablePartnerAI();
        SpeakToPlayer(1, 0xBF0007, 0xBF0008, 0, 0xE0059);
    } else {
        match SI_SAVE_VAR(0) {
            < 0xFFFFFFF0 {
                SpeakToPlayer(1, 0xBF0007, 0xBF0008, 0, 0xE0055);
            }
            < 39 {
                SpeakToPlayer(1, 0xBF0007, 0xBF0008, 0, 0xE0056);
            }
            >= 39 {
                SpeakToPlayer(1, 0xBF0007, 0xBF0008, 0, 0xE005A);
                sleep 20;
                SetPlayerAnimation(0x10029);
                sleep 20;
                SpeakToPlayer(1, 0xBF000B, 0xBF000B, 0, 0xE005B);
            }
        }
    }
});

Script N(script_Init_80241A94) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802418F0));
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFDC {}
        >= 0xFFFFFFDC {
            SetNpcPos(1, 30, 70, 0xFFFFFFB5);
            SetNpcYaw(1, 270);
        }
        else {
        }
    }
});

Script N(script_Aux_80241B1C) = SCRIPT({
    func_80240190_BDA940();
    func_80240248_BDA9F8();
});

Script N(script_Init_80241B44) = SCRIPT({
    BindNpcAux(-1, N(script_Aux_80241B1C));
    SetNpcAnimation(-1, 0x140009);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0xFFFFFF9C);
    EnableNpcShadow(-1, 0);
    func_802CFD30(-1, 7, 170, 0, 0, 0);
    if (SI_SAVE_VAR(0) >= 0xFFFFFFDC) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80241BF8) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFF3C, 10, 121);
    SetNpcYaw(-1, 90);
});

Script N(script_Init_80241C38) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFFAE, 10, 212);
    SetNpcYaw(-1, 270);
});

StaticNpc N(npcGroup_80241C78)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241830),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_802418E0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00050001, 0x00050002, 0x00050003, 0x00050003, 0x00050001, 0x00050001, 0x00050000, 0x00050000, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241830),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80241A94),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00BF0001, 0x00BF0002, 0x00BF0003, 0x00BF0003, 0x00BF0001, 0x00BF0001, 0x00BF0000, 0x00BF0000, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008,
        },
        .tattle = 0x1A00A4,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241830),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80241B44),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
    },
};

StaticNpc N(npcGroup_80242248)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241830),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80241BF8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00050001, 0x00050002, 0x00050003, 0x00050003, 0x00050001, 0x00050001, 0x00050000, 0x00050000, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241830),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80241C38),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00BF0001, 0x00BF0002, 0x00BF0003, 0x00BF0003, 0x00BF0001, 0x00BF0001, 0x00BF0000, 0x00BF0000, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008,
        },
        .tattle = 0x1A00A4,
    },
};

NpcGroupList N(npcGroupList_80242628) = {
    NPC_GROUP(N(npcGroup_80241C78), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_80242640) = {
    NPC_GROUP(N(npcGroup_80242248), 0x00000000),
    {},
};

s32 pad_002658[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242660) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerPos(0, 0xFFFFFC18, 0);
    SetCamType(0, 4, 1);
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 15.0, -8.0);
    SetCamDistance(0, 450);
    SetCamPosA(0, 0xFFFFFEE8, 234);
    SetCamPosB(0, 0xFFFFFF79, 105);
    SetCamPosC(0, 0, 0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(1, 0xBF0002);
    NpcMoveTo(1, 0xFFFFFF61, 158, 50);
    SetNpcAnimation(1, 0xBF0001);
    sleep 15;
    SetNpcAnimation(1, 0xBF0004);
    sleep 15;
    SetNpcAnimation(1, 0xBF0001);
    sleep 15;
    spawn {
        DropItemEntityB(84, 0, 0xFFFFFC18, 0, 1, 0);
        func_802403F0_BDABA0();
        loop 35 {
            GetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            SI_VAR(1) += 0xFFFFFFF0;
            SI_VAR(2) += 4;
            SI_VAR(3) += 0xFFFFFFF6;
            SetItemPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
        }
        sleep 35;
        RemoveItemEntity(SI_VAR(0));
    }
    sleep 10;
    NpcMoveTo(1, 0xFFFFFF54, 143, 20);
    SetNpcJumpscale(1, 0);
    sleep 10;
    NpcJump1(1, 0xFFFFFF61, 10, 158, 20);
    sleep 10;
    SetNpcAnimation(0, 0x50005);
    sleep 40;
    SetNpcAnimation(0, 0x50001);
    sleep 10;
    SetNpcAnimation(0, 0x5000A);
    sleep 30;
    FadeOutMusic(0, 1000);
    GotoMap(D_802429F4_BDD1A4, 5);
    sleep 100;
});

s32 pad_0029DC[] = {
    0x00000000,
};

// rodata: D_802429E0_BDD190

// rodata: D_802429E8_BDD198

// rodata: D_802429F4_BDD1A4

s32 pad_0029FC[] = {
    0x00000000,
};
