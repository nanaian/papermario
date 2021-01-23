#include "omo_12.h"

s32 pad_000418[2];
s32 pad_0004B4[3];
Script N(script_80240510);
Script N(script_802405E4);
Script N(script_80240608);
s32 pad_000644[3];
Script N(script_ExitWalk_80240650);
Script N(script_802406AC);
Script N(main);
s32 pad_000844[3];
Script N(script_802408A8);
Script N(script_802408D4);
Script N(script_80240AF4);
Script N(script_80240BA0);
Script N(script_80240F38);
s32 N(vectorList_80240FF4)[9];
s32 N(vectorList_80241018)[9];
s32 unk_missing_8024103C[4];
Script N(script_Hit_8024104C);
Script N(script_Idle_80241E60);
Script N(script_Defeat_80241EE0);
Script N(script_Init_80242284);
Script N(script_Interact_802422EC);
Script N(script_Idle_802424BC);
Script N(script_Init_8024272C);
Script N(script_Init_8024280C);
Script N(script_Init_802428DC);
s32 N(extraAnimationList_8024293C)[10];
StaticNpc N(npcGroup_80242964)[1];
StaticNpc N(npcGroup_80242B54)[1];
StaticNpc N(npcGroup_80242D44)[1];
StaticNpc N(npcGroup_80242F34)[1];
NpcGroupList N(npcGroupList_80243124);
const char D_80243160_DE2470[8]; // "omo_11"
s32 N(unk_80243168)[6];

// text: func_80240000_DDF310

// text: func_80240184_DDF494

// text: func_802402DC_DDF5EC

// text: func_802402F8_DDF608

// text: func_80240314_DDF624

// text: func_802403D8_DDF6E8

s32 pad_000418[] = {
    0x00000000, 0x00000000,
};

// text: func_80240420_DDF730

s32 pad_0004B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 260.0f, 0.0f, 20.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900E4,
};

Script N(script_80240510) = SCRIPT({
    if (SI_SAVE_VAR(0) < 1) {
        SetMusicTrack(0, 34, 0, 8);
        spawn {
            loop {
                sleep 1;
                if (SI_SAVE_VAR(0) >= 1) {
                    break;
                }
            }
            SetMusicTrack(0, 32, 0, 8);
        }
    } else {
        SetMusicTrack(0, 32, 0, 8);
    }
});

Script N(script_802405E4) = SCRIPT({
    0x802D5FF8(130, 0);
});

Script N(script_80240608) = SCRIPT({
    FadeOutMusic(0, 500);
    sleep 15;
    0x802D5FD8();
});

s32 pad_000644[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240650) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243160_DE2470, 0);
    sleep 100;
});

Script N(script_802406AC) = SCRIPT({
    bind N(script_ExitWalk_80240650) to 0x80000 8;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243124));
    await N(script_80240510);
    await N(script_80240AF4);
    match SI_SAVE_VAR(0) {
        < 1 {
            spawn N(script_802406AC);
            spawn N(script_80240BA0);
            sleep 1;
        }
        < 2 {
            SI_VAR(0) = N(script_802406AC);
            spawn EnterWalk;
            sleep 1;
        }
        >= 2 {
            SI_VAR(0) = N(script_802406AC);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

s32 pad_000844[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240850) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x44,
    .radius = 0x3C,
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

NpcSettings N(npcSettings_8024087C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

Script N(script_802408A8) = SCRIPT({
    spawn {
        func_80240184_DDF494();
    }
});

Script N(script_802408D4) = SCRIPT({
    group 0;
0:
    match SI_AREA_VAR(1) {
        == 0 {}
        == 1 {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(3) = SI_AREA_VAR(2);
            SI_VAR(3) += 128;
            func_80240314_DDF624(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        }
        == 2 {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(3) = SI_AREA_VAR(2);
            SI_VAR(3) += 128;
            func_80240314_DDF624(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        }
        == 3 {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(3) = SI_AREA_VAR(2);
            SI_VAR(3) += 128;
            func_80240314_DDF624(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        }
        == 4 {
            func_802403D8_DDF6E8();
            SI_AREA_VAR(1) = 0;
        }
        == 5 {
            SI_VAR(3) = SI_AREA_VAR(2);
            SI_VAR(3) += 128;
            func_80240314_DDF624(0, 0xFFFFFC18, 0, SI_VAR(3));
            SI_AREA_VAR(1) = 0;
        }
        == 6 {
            return;
        }
    }
    sleep 1;
    goto 0;
});

Script N(script_80240AF4) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 1 {
            SI_AREA_VAR(1) = 5;
            SI_AREA_VAR(2) = 127;
            spawn N(script_802408D4);
        }
        < 2 {
            SI_AREA_VAR(1) = 3;
            SI_AREA_VAR(2) = 102;
            spawn N(script_802408D4);
        }
        >= 2 {
            await N(script_802408A8);
        }
    }
});

Script N(script_80240BA0) = SCRIPT({
    DisablePlayerInput(1);
    SetPlayerPos(70, 20, 0);
    ShowMessageAtScreenPos(0xF004E, 160, 40);
    SetNpcPos(0, 0xFFFFFF6A, 0, 20);
    UseSettingsFrom(0, 0xFFFFFF6A, 0, 20);
    SetPanTarget(0, 0xFFFFFF6A, 0, 20);
    SetCamDistance(0, 350.0);
    SetCamPitch(0, 15.0, -9.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    GetNpcPos(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(2) += 32;
    SI_VAR(3) += 10;
    MakeLerp(255, 100, 60, 0);
0:
    UpdateLerp();
    func_80240314_DDF624(SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(0));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    SpeakToPlayer(0, 0x6D0005, 0x6D0001, 0, 0xF004F);
    SetPanTarget(0, 50, 0, 20);
    SetCamSpeed(0, 0.7001953125);
    PanToTarget(0, 0, 1);
    SI_AREA_VAR(1) = 1;
    SI_AREA_VAR(2) = 0xFFFFFFE4;
    SetNpcAnimation(0, 0x6D0006);
    SetNpcSpeed(0, 3.0);
    NpcMoveTo(0, 0, 20, 0);
    SetNpcAnimation(0, 0x6D0001);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x6D0005, 0x6D0001, 0, 0xF0050);
    spawn {
        ShakeCam(0, 0, 10, 0.5);
    }
    SetNpcAnimation(0, 0x6D000F);
    sleep 5;
    SetPlayerAnimation(0x8000A);
    sleep 15;
    spawn {
        sleep 20;
        SI_AREA_VAR(1) = 4;
    }
    SetNpcVar(0, 0, 1);
});

Script N(script_80240F38) = SCRIPT({
    loop {
        GetCurrentPartner(SI_VAR(0));
        if (SI_VAR(0) == 6) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x60006, 0x60001, 5, 0xF005C);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

s32 N(vectorList_80240FF4)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x41C80000, 0xC0A00000, 0x00000000, 0x42700000, 0x41F00000,
    0x00000000,
};

s32 N(vectorList_80241018)[] = {
    0x00000000, 0x00000000, 0x00000000, 0xC1C80000, 0xC0A00000, 0x00000000, 0xC2700000, 0x41F00000,
    0x00000000,
};

s32 unk_missing_8024103C[] = {
    0x00000000, 0x00000000, 0x41A00000, 0x00000000,
};

Script N(script_Hit_8024104C) = SCRIPT({
    DisablePlayerInput(1);
    func_802402DC_DDF5EC();
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamProperties(0, 2.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 450.0, 15.0, -6.0);
    SI_VAR(10) = 0;
    GetOwnerEncounterTrigger(SI_VAR(0));
    if (SI_VAR(0) == 6) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 3) {
            SetNpcAnimation(1, 0x60007);
            SI_VAR(10) = -1;
        }
    }
    NpcFacePlayer(1, 0);
    if (SI_VAR(10) == 0) {
        GetOwnerEncounterTrigger(SI_VAR(0));
        match SI_VAR(0) {
            == 4 {}
            == 6 {}
            else {
                0x8004580C(SI_VAR(0));
                if (SI_VAR(0) == 0) {
                    sleep 25;
                    DisablePlayerInput(0);
                    return;
                }
            }
        }
    }
    PlaySound(501);
    SI_AREA_FLAG(16) = 0;
    loop 8 {
        SetNpcFlagBits(2, 2, 1);
        sleep 3;
        SetNpcFlagBits(2, 2, 0);
        sleep 3;
    }
    SetNpcAnimation(2, 0x6D0003);
    SetNpcAnimation(3, 0x6D0004);
    spawn {
    10:
        SetNpcFlagBits(2, 2, 1);
        SetNpcFlagBits(3, 2, 1);
        sleep 2;
        SetNpcFlagBits(2, 2, 0);
        SetNpcFlagBits(3, 2, 0);
        sleep 2;
        if (SI_AREA_FLAG(16) == 0) {
            goto 10;
        }
    }
    GetAngleToPlayer(2, SI_VAR(0));
    if (SI_VAR(0) < 180) {
        SI_VAR(1) = 27;
        SI_VAR(2) = 50;
    } else {
        SI_VAR(1) = 0xFFFFFFE5;
        SI_VAR(2) = 0xFFFFFFCE;
    }
    0x802D2C14(1);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    SetPlayerSpeed(3.0);
    PlayerMoveTo(SI_VAR(1), 0, 0);
    PlayerFaceNpc(2, 3);
    spawn {
        SetNpcJumpscale(2, 0);
        GetNpcPos(2, SI_VAR(0), 20, SI_VAR(2));
        NpcJump0(2, SI_VAR(0), 20, SI_VAR(2), 20);
    }
    spawn {
        sleep 6;
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(1, SI_VAR(0), 6, SI_VAR(2));
        loop 7 {
            SetNpcFlagBits(2, 2, 1);
            sleep 1;
            SetNpcFlagBits(2, 2, 0);
            sleep 1;
        }
    }
    sleep 10;
    SI_AREA_VAR(1) = 2;
    SI_AREA_VAR(2) = 72;
    sleep 40;
    SI_AREA_FLAG(16) = 1;
    SetNpcPos(2, 0, 0xFFFFFC18, 0);
    SetNpcPos(3, 0, 0xFFFFFC18, 0);
    sleep 25;
    GetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamPitch(0, 15.0, -8.0);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    if (SI_VAR(10) == -1) {
        SpeakToPlayer(1, 0x60005, 0x60007, 0, 0xF0058);
        spawn {
            sleep 10;
            SetPlayerAnimation(0x1002C);
            sleep 15;
            SetPlayerAnimation(0x10002);
        }
        EndSpeech(1, 0x60005, 0x60007, 0);
    } else {
        SpeakToPlayer(1, 0x60006, 0x60001, 0, 0xF0057);
        SetPlayerAnimation(0x10029);
    }
    0x802D2C14(0);
    sleep 20;
    SetNpcAnimation(1, 0x60001);
    PlaySoundAtNpc(1, 610, 0);
    ShowEmote(1, 0, 0, 30, 1, 0, 0, 0, 0);
    sleep 40;
    SpeakToPlayer(1, 0x60004, 0x60001, 0, 0xF0059);
    SetPlayerAnimation(0x80011);
    sleep 30;
    SetPlayerAnimation(0x10029);
    sleep 20;
    EndSpeech(1, 0x60004, 0x60001, 0);
    sleep 20;
    GetAngleToPlayer(1, SI_VAR(0));
    if (SI_VAR(0) < 180) {
        SI_VAR(1) = 0xFFFFFFE7;
    } else {
        SI_VAR(1) = 25;
    }
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    spawn {
        DisablePartnerAI(0);
        SI_VAR(1) += SI_VAR(2);
        SetNpcSpeed(0xFFFFFFFC, 3.0);
        SetNpcAnimation(0xFFFFFFFC, 258);
        NpcMoveTo(0xFFFFFFFC, SI_VAR(1), SI_VAR(4), 0);
        NpcFacePlayer(0xFFFFFFFC, 3);
        EnablePartnerAI();
    }
    SetNpcFlagBits(1, 256, 1);
    GetNpcPos(1, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    GetAngleToPlayer(1, SI_VAR(0));
    if (SI_VAR(0) < 180) {
        LoadPath(15, N(vectorList_80240FF4), 3, 0);
        SI_VAR(4) = 12;
    } else {
        LoadPath(15, N(vectorList_80241018), 3, 0);
        SI_VAR(4) = 0xFFFFFFF4;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += SI_VAR(4);
    SetPanTarget(0, SI_VAR(0), 0, 0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
30:
    GetNextPathPos();
    SI_VAR(1) += SI_VAR(7);
    SI_VAR(2) += SI_VAR(8);
    SI_VAR(3) += SI_VAR(9);
    SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    PlayerFaceNpc(1, 0);
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 30;
    }
    NpcFacePlayer(1, 3);
    sleep 20;
    SpeakToPlayer(1, 0x60004, 0x60001, 0, 0xF005A);
    SetPlayerAnimation(0x10002);
    sleep 5;
    SetPlayerAnimation(0x10029);
    sleep 20;
    EndSpeech(1, 0x60004, 0x60001, 0);
    SI_AREA_VAR(1) = 6;
    sleep 1;
    func_80240000_DDF310(1, 6);
    func_80240420_DDF730();
    spawn N(script_802405E4);
    sleep 15;
    ShowMessageAtScreenPos(0x1D018E, 160, 40);
    spawn N(script_80240608);
    sleep 10;
    spawn {
        GetNpcPos(0xFFFFFFFC, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        MakeLerp(200, 255, 45, 0);
        loop {
            UpdateLerp();
            func_80240314_DDF624(SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(3) += 8;
        func_80240314_DDF624(SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(0));
    }
    sleep 30;
    CloseMessage();
    sleep 10;
    await N(script_802408A8);
    sleep 20;
    SpeakToPlayer(0xFFFFFFFC, 0x60004, 0x60001, 0, 0xF005B);
    EnablePartnerAI();
    spawn N(script_80240F38);
    func_802402F8_DDF608();
    ResetCam(0, 5.0);
    SI_SAVE_VAR(0) = 2;
    DisablePlayerInput(0);
    RemoveNpc(2);
    RemoveNpc(3);
    unbind;
});

Script N(script_Idle_80241E60) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(0) != 0) {
            break;
        }
    }
    sleep 1;
    StartBossBattle(3);
});

Script N(script_Defeat_80241EE0) = SCRIPT({
    sleep 1;
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            ResetCam(0, 90.0);
            SI_AREA_VAR(1) = 0;
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            func_80240314_DDF624(SI_VAR(0), SI_VAR(1), SI_VAR(2), 100);
            spawn {
                SI_MAP_FLAG(0) = 0;
                SpeakToPlayer(0, 0x6D0008, 0x6D0008, 0, 0xF0054);
                SI_MAP_FLAG(0) = 1;
            }
            spawn {
                sleep 15;
                SetNpcJumpscale(2, 1.0);
                SetNpcPos(2, 0, 0, 20);
                NpcJump0(2, 0, 0, 20, 10);
                SetNpcPos(3, 0, 0, 20);
            }
            SetNpcAnimation(-1, 0x6D0007);
            SetNpcSpeed(-1, 10.0);
            NpcMoveTo(-1, 400, 0, 0);
        0:
            if (SI_MAP_FLAG(0) == 0) {
                sleep 1;
                goto 0;
            }
            GetNpcPos(2, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(3) -=f SI_VAR(0);
            SI_VAR(4) -=f SI_VAR(1);
            SI_VAR(5) -=f SI_VAR(2);
            SI_VAR(3) /= 60.0;
            SI_VAR(4) /= 60.0;
            SI_VAR(5) /= 60.0;
            SI_VAR(6) = 2.1669921875;
            SI_VAR(7) = 100.0;
            loop 60 {
                SI_VAR(0) +=f SI_VAR(3);
                SI_VAR(1) +=f SI_VAR(4);
                SI_VAR(2) +=f SI_VAR(5);
                SI_VAR(7) +=f SI_VAR(6);
                func_80240314_DDF624(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(7));
                sleep 1;
            }
            SI_AREA_VAR(1) = 3;
            SI_AREA_VAR(2) = 102;
            sleep 1;
            SetNpcVar(2, 0, 1);
            SI_SAVE_VAR(0) = 1;
            DisablePlayerInput(0);
            RemoveNpc(-1);
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242284) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 1) {
        RemoveNpc(-1);
        return;
    }
    BindNpcIdle(-1, N(script_Idle_80241E60));
    BindNpcDefeat(-1, N(script_Defeat_80241EE0));
});

Script N(script_Interact_802422EC) = SCRIPT({
    spawn {
        sleep 15;
        SetNpcRotation(-1, 0, 0, 10);
        sleep 6;
        SetNpcRotation(-1, 0, 0, 0xFFFFFFF7);
        sleep 6;
        SetNpcRotation(-1, 0, 0, 8);
        sleep 5;
        SetNpcRotation(-1, 0, 0, 0xFFFFFFF9);
        sleep 5;
        SetNpcRotation(-1, 0, 0, 6);
        sleep 4;
        SetNpcRotation(-1, 0, 0, 0xFFFFFFFB);
        sleep 4;
        SetNpcRotation(-1, 0, 0, 4);
        sleep 3;
        SetNpcRotation(-1, 0, 0, 0xFFFFFFFD);
        sleep 3;
        SetNpcRotation(-1, 0, 0, 2);
        sleep 2;
        SetNpcRotation(-1, 0, 0, 0);
    }
    SpeakToPlayer(-1, 0x6D0002, 0x6D0002, 5, 0xF0055);
});

Script N(script_Idle_802424BC) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {}
        == 1 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            AwaitPlayerLeave(SI_VAR(0), SI_VAR(2), 100);
            PartnerCanUseAbility(SI_VAR(0));
            if (SI_VAR(0) != 1) {
                DisablePlayerInput(1);
                spawn {
                    SetNpcJumpscale(-1, 1.0);
                    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 16);
                    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
                    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 4);
                }
                SpeakToPlayer(-1, 0x6D0002, 0x6D0002, 0, 0xF0056);
                DisablePlayerInput(0);
            }
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                SetSelfVar(0, 2);
            }
        }
        == 2 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            AwaitPlayerApproach(SI_VAR(0), SI_VAR(2), 60);
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 2) {
                SetSelfVar(0, 1);
            }
        }
    }
    sleep 1;
    goto 0;
});

Script N(script_Init_8024272C) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 1 {
            SetNpcAnimation(-1, 0x6D0002);
        }
        < 2 {
            SetNpcAnimation(-1, 0x6D0002);
            SetNpcPos(-1, 0, 0, 20);
            SetSelfVar(0, 2);
        }
        >= 2 {
            RemoveNpc(-1);
            return;
        }
    }
    BindNpcIdle(-1, N(script_Idle_802424BC));
    BindNpcInteract(-1, N(script_Interact_802422EC));
});

Script N(script_Init_8024280C) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 1 {
            SetNpcAnimation(-1, 0x6D0002);
        }
        < 2 {
            SetNpcAnimation(-1, 0x6D0002);
            SetNpcPos(-1, 0, 0, 20);
        }
        >= 2 {
            RemoveNpc(-1);
            return;
        }
    }
    BindNpcHit(-1, N(script_Hit_8024104C));
    SetNpcFlagBits(3, 2, 1);
});

Script N(script_Init_802428DC) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 1 {}
        < 2 {}
        >= 2 {
            RemoveNpc(-1);
            return;
        }
    }
});

s32 N(extraAnimationList_8024293C)[] = {
    0x006D0001, 0x006D0006, 0x006D0007, 0x006D0008, 0x006D000F, 0x006D0005, 0x006D0002, 0x006D0003,
    0x006D0004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242964)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240850),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00040F04,
        .init = N(script_Init_80242284),
        .unk_1C = 0x00000001,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0009, 0x006D0009, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001,
        },
        .extraAnimations = N(extraAnimationList_8024293C),
        .tattle = 0x1A00B9,
    },
};

StaticNpc N(npcGroup_80242B54)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024087C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_802428DC),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001,
        },
        .tattle = 0x1A00B9,
    },
};

StaticNpc N(npcGroup_80242D44)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_8024087C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_8024272C),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0009, 0x006D0009, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001,
        },
        .extraAnimations = N(extraAnimationList_8024293C),
        .tattle = 0x1A00B9,
    },
};

StaticNpc N(npcGroup_80242F34)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_8024087C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x09100F08,
        .init = N(script_Init_8024280C),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0009, 0x006D0009, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001, 0x006D0001,
        },
        .extraAnimations = N(extraAnimationList_8024293C),
        .tattle = 0x1A00B9,
    },
};

NpcGroupList N(npcGroupList_80243124) = {
    NPC_GROUP(N(npcGroup_80242964), 0x12000000),
    NPC_GROUP(N(npcGroup_80242B54), 0x00000000),
    NPC_GROUP(N(npcGroup_80242D44), 0x00000000),
    NPC_GROUP(N(npcGroup_80242F34), 0x00000000),
    {},
};

// rodata: D_80243160_DE2470

s32 N(unk_80243168)[] = {
    0x70617274, 0x795F616B, 0x61726900, 0x00000000, 0x00000000, 0x00000000,
};

