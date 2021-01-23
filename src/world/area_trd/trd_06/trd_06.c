#include "trd_06.h"

s32 pad_00030C[1];
s32 pad_000AEC[1];
s32 pad_000C74[3];
s32 pad_000D14[3];
Script N(script_80240DA0);
Script N(script_80240E14);
Script N(script_80240E38);
s32 pad_000E74[3];
Script N(script_UpdateTexturePan_80240E80);
Script N(script_ExitDoubleDoor_80240F1C);
Script N(script_EnterDoubleDoor_80240FC0);
Script N(script_802410FC);
Script N(script_80241568);
Script N(main);
s32 N(vectorList_80241A00)[12];
Script N(script_80241A30);
Script N(script_80241C1C);
Script N(script_80241E24);
Script N(script_8024207C);
Script N(script_80242678);
Script N(script_Interact_802427F0);
Script N(script_Init_80242CEC);
Script N(script_Idle_80242D40);
Script N(script_Defeat_802433AC);
Script N(script_Init_80243414);
Script N(script_Init_80243474);
Script N(script_Interact_802434AC);
Script N(script_Interact_8024357C);
Script N(script_Interact_8024364C);
Script N(script_Interact_8024371C);
Script N(script_Init_802437EC);
Script N(script_Init_80243810);
Script N(script_Init_80243834);
Script N(script_Init_80243858);
StaticNpc N(npcGroup_8024387C)[1];
StaticNpc N(npcGroup_80243A6C)[3];
StaticNpc N(npcGroup_8024403C)[4];
NpcGroupList N(npcGroupList_802447FC);
s32 pad_00482C[1];
Script N(script_NpcAI_80244860);
s32 unk_missing_802448AC[11];
Script N(script_802448D8);
StaticNpc N(npcGroup_80244998)[4];
NpcGroupList N(npcGroupList_80245158);
Script N(script_MakeEntities);
s32 pad_0051A8[2];
const char D_802451B0_9B6940[8]; // "trd_04"
s32 pad_0051B8[2];
const char D_802451D0_9B6960[8]; // "trd_10"
s32 N(unk_802451D8)[6];

// text: func_80240000_9B1790

// text: func_80240124_9B18B4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_9B1AA0

// text: func_80240724_9B1EB4

// text: func_8024081C_9B1FAC

// text: func_80240854_9B1FE4

// text: func_8024093C_9B20CC

// text: func_80240A5C_9B21EC

// text: func_80240A70_9B2200

// text: func_80240AD0_9B2260

s32 pad_000AEC[] = {
    0x00000000,
};

// text: func_80240AF0_9B2280

s32 pad_000C74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240C80_9B2410

s32 pad_000D14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { -310.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190054,
};

Script N(script_80240DA0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        >= 2 {}
        else {
            SetMusicTrack(0, 20, 0, 8);
        }
    }
    UseDoorSounds(1);
});

Script N(script_80240E14) = SCRIPT({
    0x802D5FF8(130, 0);
});

Script N(script_80240E38) = SCRIPT({
    FadeOutMusic(0, 500);
    sleep 15;
    0x802D5FD8();
});

s32 pad_000E74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240E80) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_9B1790();
                    return;
                }
            }
        }
    }
    func_80240124_9B18B4();
});

Script N(script_ExitDoubleDoor_80240F1C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 6;
    SI_VAR(2) = 22;
    SI_VAR(3) = 24;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802451B0_9B6940, 5);
    sleep 100;
});

Script N(script_EnterDoubleDoor_80240FC0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn N(script_8024207C);
        }
        == 1 {
            SI_VAR(2) = 22;
            SI_VAR(3) = 24;
            await EnterDoubleDoor;
        }
        <= 3 {
            DisablePlayerInput(1);
            DisablePlayerPhysics(1);
            DisablePartnerAI(0);
            SetPlayerPos(0, 0xFFFFFC18, 0);
            SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
            SetNpcFlagBits(0xFFFFFFFC, 4, 1);
            EnableNpcShadow(0xFFFFFFFC, 0);
            spawn N(script_802448D8);
        }
    }
});

Vec4f N(triggerCoord_802410EC) =  { 160.0f, 0.0f, 160.0f, 0.0f };

Script N(script_802410FC) = SCRIPT({
    SetPlayerFlagBits(192, 1);
    PlayEffect(66, 0, 19, 19, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    SetGroupEnabled(15, 1);
    loop 10 {
        SetGroupEnabled(18, 1);
        sleep 1;
        SetGroupEnabled(18, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    ModifyColliderFlags(0, 11, 0x7FFFFE00);
    0x802D2508();
    DisablePlayerInput(1);
    SI_SAVE_FLAG(659) = 1;
    sleep 60;
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 110) {
            if (SI_VAR(2) < 140) {
                sleep 25;
                SetNpcFlagBits(2, 256, 1);
                SetNpcFlagBits(3, 256, 1);
                SetNpcFlagBits(4, 256, 1);
                SetNpcFlagBits(5, 256, 1);
                SetPlayerSpeed(3.0);
                PlayerMoveTo(110, 140, 0);
                PlayerFaceNpc(0xFFFFFFFC, 0);
                SetNpcFlagBits(2, 256, 0);
                SetNpcFlagBits(3, 256, 0);
                SetNpcFlagBits(4, 256, 0);
                SetNpcFlagBits(5, 256, 0);
            }
        }
    }
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 0x30005);
    SetNpcSpeed(0xFFFFFFFC, 3.5);
    NpcMoveTo(0xFFFFFFFC, 156, 156, 0);
    SetNpcAnimation(0xFFFFFFFC, 0x30003);
    sleep 30;
    SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0xC00E2);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    sleep 20;
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0xC00E3);
    SetPlayerFlagBits(192, 0);
    EnablePartnerAI();
    DisablePlayerInput(0);
    spawn {
    0:
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        if (SI_VAR(2) < 200) {
            goto 0;
        }
        if (SI_VAR(0) > 0xFFFFFF88) {
            goto 0;
        }
        SetNpcVar(10, 0, 1);
    }
    unbind;
});

Script N(script_80241568) = SCRIPT({
    group 0;
    SetTexPanner(7, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
10:
    SetTexPanOffset(1, 0, SI_VAR(0), 0);
    SetTexPanOffset(1, 1, SI_VAR(1), 0);
    SI_VAR(0) += 100;
    SI_VAR(1) -= 100;
    sleep 1;
    goto 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFB2 {
            EnableModel(19, 0);
            EnableModel(20, 0);
            ModifyColliderFlags(0, 14, 0x7FFFFE00);
        }
    }
    if (SI_SAVE_VAR(0) >= 0xFFFFFFAE) {
        SI_SAVE_FLAG(659) = 1;
    }
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFB2 {
            MakeNpcs(1, N(npcGroupList_802447FC));
            SetGroupEnabled(64, 0);
        }
        < 0xFFFFFFB6 {
            MakeNpcs(1, N(npcGroupList_80245158));
        }
    }
    sleep 2;
    await N(script_MakeEntities);
    bind N(script_ExitDoubleDoor_80240F1C) to TriggerFlag_WALL_INTERACT 6;
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        if (SI_VAR(0) <= 1) {
            if (SI_SAVE_FLAG(659) == 0) {
                bind N(script_802410FC) to TriggerFlag_BOMB N(triggerCoord_802410EC);
                SetGroupEnabled(15, 0);
            } else {
                SetGroupEnabled(18, 0);
                ModifyColliderFlags(0, 9, 0x7FFFFE00);
                ModifyColliderFlags(0, 11, 0x7FFFFE00);
            }
        } else {
            SetGroupEnabled(15, 0);
        }
        spawn N(script_80240DA0);
        spawn N(script_80241568);
        spawn N(script_EnterDoubleDoor_80240FC0);
        sleep 1;
        EnableTexPanning(7, 1);
        spawn {
            SI_VAR(0) = 1;
            SI_VAR(1) = 0;
            SI_VAR(2) = 90;
            SI_VAR(3) = 0xFFFFFFC4;
            SI_VAR(4) = 0xFFFFFFBA;
            SI_VAR(5) = 1;
            SI_VAR(6) = 1;
            SI_VAR(7) = 1;
            SI_VAR(8) = 1;
            SI_VAR(9) = 0;
            SI_VAR(10) = 0;
            SI_VAR(11) = 0;
            SI_VAR(12) = 0;
            spawn N(script_UpdateTexturePan_80240E80);
        }
    });

s32 N(vectorList_80241A00)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x41099CB7, 0xC2419978, 0xBFFF2D2C, 0x41C7FDC2, 0xC2C1FFEA,
    0xBFFF3C15, 0x424D98FA, 0xC30F6659, 0x3F80D3E1,
};

Script N(script_80241A30) = SCRIPT({
    SetPlayerPos(0, 130, 0);
    spawn {
        sleep 5;
        PlaySound(373);
    }
    spawn {
        MakeLerp(180, 210, 25, 1);
    10:
        UpdateLerp();
        func_8024093C_9B20CC(0, 0.0, 0.0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    sleep 1;
    GetPlayerPos(SI_VAR(4), SI_VAR(5), SI_VAR(6));
    LoadPath(30, N(vectorList_80241A00), 4, 1);
0:
    GetNextPathPos();
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(3) +=f SI_VAR(6);
    func_80240854_9B1FE4(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    PlaySound(264);
    SI_VAR(2) += 0xFFFFFC18;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
});

Script N(script_80241C1C) = SCRIPT({
    func_80240A70_9B2200();
    SetNpcPos(0xFFFFFFFC, 0, SI_VAR(0), 0);
    spawn {
        sleep 5;
        PlaySound(374);
    }
    spawn {
        MakeLerp(180, 150, 25, 1);
    10:
        UpdateLerp();
        SetNpcRotation(0xFFFFFFFC, 0, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    sleep 1;
    GetNpcPos(0xFFFFFFFC, SI_VAR(4), SI_VAR(5), SI_VAR(6));
    LoadPath(30, N(vectorList_80241A00), 4, 1);
0:
    GetNextPathPos();
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(3) +=f SI_VAR(6);
    SI_VAR(1) *= -1.0;
    SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    PlaySound(264);
    SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
});

Script N(script_80241E24) = SCRIPT({
    func_80240AD0_9B2260();
    spawn {
        loop 11 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1000;
            func_80240854_9B1FE4(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    spawn {
        MakeLerp(210, 360, 10, 10);
    0:
        UpdateLerp();
        func_8024093C_9B20CC(0, 0.0, 0.0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 0;
        }
    }
    sleep 1;
    SetPlayerJumpscale(1.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayerJump(SI_VAR(0), 0xFFFFFC18, SI_VAR(2), 10);
    spawn {
        MakeLerp(150, 0, 10, 10);
    1:
        UpdateLerp();
        SetNpcRotation(0xFFFFFFFC, 0, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
    }
    sleep 1;
    SetNpcJumpscale(0xFFFFFFFC, 1.0);
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(0xFFFFFFFC, SI_VAR(0), 0, SI_VAR(2), 10);
});

Script N(script_8024207C) = SCRIPT({
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamSpeed(0, 90.0);
    SetCamPosA(0, 300, 0xFFFFFE0C);
    SetCamPosB(0, 0xFFFFFF9C, 0);
    SetCamDistance(0, 360);
    PanToTarget(0, 0, 1);
    DisablePartnerAI(0);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(0);
    InterpPlayerYaw(270, 1);
    SetPlayerPos(0, 300, 0);
    SetNpcPos(0xFFFFFFFC, 0, 300, 0);
    SetNpcFlagBits(0xFFFFFFFC, 4, 1);
    sleep 30;
    func_80240724_9B1EB4();
    await N(script_80241A30);
    InterpNpcYaw(1, 90, 0);
    SetNpcFlagBits(0xFFFFFFFC, 516, 0);
    SetNpcFlagBits(0xFFFFFFFC, 264, 1);
    await N(script_80241C1C);
    InterpNpcYaw(1, 270, 0);
    sleep 20;
    InterpNpcYaw(1, 90, 0);
    SpeakToPlayer(1, 0x3000E, 0x30003, 0, 0xC00D8);
    func_80240A5C_9B21EC();
    SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    SetNpcFlagBits(0xFFFFFFFC, 264, 0);
    func_8024081C_9B1FAC();
    spawn {
        SetNpcRotation(0xFFFFFFFC, 0, 0, 0);
        SetNpcJumpscale(0xFFFFFFFC, 1.0);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), 0, SI_VAR(2), 10);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 1000;
    SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerJumpscale(1.0);
    PlayerJump(SI_VAR(0), 0, SI_VAR(2), 10);
    sleep 15;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    if (SI_SAVE_VAR(0) < 0xFFFFFFAD) {
        SetCamSpeed(0, 3);
        SetCamDistance(0, 300);
        SetPanTarget(0, 27, 0, 30);
        SetNpcAnimation(0xFFFFFFFC, 258);
        NpcMoveTo(0xFFFFFFFC, 0xFFFFFFEB, 47, 10);
        NpcMoveTo(0xFFFFFFFC, 50, 35, 15);
        NpcMoveTo(0xFFFFFFFC, 73, 22, 10);
        SetNpcAnimation(0xFFFFFFFC, 262);
        GetAngleToNPC(1, SI_VAR(0));
        InterpPlayerYaw(SI_VAR(0), 0);
        InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
        sleep 1;
        SpeakToPlayer(1, 0x3000E, 0x30003, 0, 0xC00D9);
        spawn {
            sleep 5;
            SetPlayerAnimation(0x80007);
            sleep 30;
            SetPlayerAnimation(0x10002);
        }
        EndSpeech(1, 0x3000E, 0x30003, 0);
        PanToTarget(0, 0, 0);
        SetCamSpeed(0, 2.0);
        WaitForCam(0, 1.0);
        SetNpcVar(1, 0, 1);
    }
    EnablePartnerAI();
    DisablePlayerInput(0);
});

NpcSettings N(npcSettings_80242620) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024264C) = {
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

Script N(script_80242678) = SCRIPT({
    SetPanTarget(0, 96, 0, 129);
    SetCamSpeed(0, 0.6005859375);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    spawn {
        SetNpcAnimation(0xFFFFFFFC, 0x30005);
        SetNpcSpeed(0xFFFFFFFC, 3.0);
        NpcMoveTo(0xFFFFFFFC, 124, 129, 0);
        GetAngleToPlayer(0xFFFFFFFC, SI_VAR(0));
        InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 5);
    }
    sleep 30;
    SetPlayerSpeed(3.0);
    PlayerMoveTo(96, 129, 0);
    GetAngleToNPC(0xFFFFFFFC, SI_VAR(0));
    InterpPlayerYaw(SI_VAR(0), 5);
    SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0xC00E1);
    DisablePlayerInput(0);
    EnablePartnerAI();
});

Script N(script_Interact_802427F0) = SCRIPT({
    spawn {
        AdjustCam(0, 5.0, 0, 300.0, 18.0, -7.0);
    }
    GetAngleToPlayer(-1, SI_VAR(0));
    if (SI_VAR(0) < 180) {
        SI_VAR(1) = 27;
    } else {
        SI_VAR(1) = 0xFFFFFFE5;
    }
    GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    GetPlayerPos(SI_VAR(10), SI_VAR(11), SI_VAR(12));
    SI_VAR(10) -= SI_VAR(2);
    if (SI_VAR(10) < 0) {
        SI_VAR(10) *= -1;
    }
    if (SI_VAR(10) < 20) {
        SI_VAR(2) += SI_VAR(1);
        SetPlayerSpeed(3.0);
        PlayerMoveTo(SI_VAR(2), SI_VAR(4), 0);
        PlayerFaceNpc(1, 3);
    }
    WaitForCam(0, 1.0);
    if (SI_SAVE_FLAG(660) == 0) {
        SI_SAVE_FLAG(660) = 1;
        SpeakToPlayer(-1, 0x3000E, 0x30003, 0, 0xC00DA);
        sleep 10;
        SetPlayerAnimation(0x10029);
        EndSpeech(-1, 0x3000E, 0x30003, 0);
        SetPlayerAnimation(0x10002);
        ShowChoice(0x1E000D);
        if (SI_VAR(0) != 0) {
            ContinueSpeech(-1, 0x3000E, 0x30003, 0, 0xC00DB);
        }
    } else {
        SpeakToPlayer(-1, 0x3000E, 0x30003, 0, 0xC00DC);
        SetPlayerAnimation(0x10002);
        ShowChoice(0x1E000D);
        if (SI_VAR(0) != 0) {
            ContinueSpeech(-1, 0x3000E, 0x30003, 0, 0xC00DD);
        }
    }
    if (SI_VAR(0) == 0) {
        SetNpcFlagBits(-1, 256, 1);
        SetNpcJumpscale(-1, 0.80078125);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
        SetNpcFlagBits(-1, 256, 0);
        ContinueSpeech(-1, 0x3000E, 0x30003, 0, 0xC00DE);
        func_80240AF0_9B2280(1, 3);
        SI_SAVE_VAR(0) = 0xFFFFFFAD;
        func_80240C80_9B2410();
        spawn N(script_80240E14);
        sleep 15;
        ShowMessageAtScreenPos(0x1D018B, 160, 40);
        spawn N(script_80240E38);
        sleep 10;
        SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0xC00DF);
        sleep 1;
        SetPlayerAnimation(0x10029);
        sleep 15;
        SetPlayerAnimation(0x10002);
        sleep 25;
        PlaySoundAtNpc(0xFFFFFFFC, 610, 0);
        ShowEmote(0xFFFFFFFC, 0, 0xFFFFFFD3, 30, 1, 0, 0, 0, 0);
        sleep 40;
        SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0xC00E0);
        await N(script_80242678);
    }
    ResetCam(0, 5.0);
});

Script N(script_Init_80242CEC) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFAD) {
        RemoveNpc(-1);
    } else {
        BindNpcInteract(-1, N(script_Interact_802427F0));
    }
});

Script N(script_Idle_80242D40) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(6, 451, 0);
    MakeLerp(0, 90, 15, 10);
10:
    UpdateLerp();
    RotateModel(22, SI_VAR(0), 0, -1, 0);
    RotateModel(24, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    SetNpcPos(10, 0xFFFFFEA2, 0, 0);
    SetNpcPos(11, 0xFFFFFE8E, 0, 0);
    SetNpcPos(12, 0xFFFFFE7A, 0, 0);
    SetNpcSpeed(10, 4.0);
    SetNpcSpeed(11, 4.0);
    SetNpcSpeed(12, 4.0);
    SetNpcAnimation(10, 0x290104);
    SetNpcAnimation(11, 0x2C0006);
    SetNpcAnimation(12, 0x2C0006);
    SetNpcFlagBits(10, 256, 1);
    SetNpcFlagBits(11, 256, 1);
    SetNpcFlagBits(12, 256, 1);
    spawn {
        NpcMoveTo(10, 0xFFFFFF13, 0, 0);
    }
    spawn {
        sleep 10;
        NpcMoveTo(11, 0xFFFFFEEE, 25, 0);
    }
    sleep 15;
    NpcMoveTo(12, 0xFFFFFEF6, 0xFFFFFFF1, 0);
    UseSettingsFrom(0, 0xFFFFFEFC, 0, 0);
    SetPanTarget(0, 0xFFFFFEFC, 0, 0);
    SetCamDistance(0, 300);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(11, 0x2C0002);
    SetNpcAnimation(12, 0x2C0002);
    SpeakToPlayer(10, 0x290104, 0x290101, 0, 0xC00F0);
    SetNpcAnimation(11, 0x2C0006);
    SetNpcAnimation(12, 0x2C0006);
    PanToTarget(0, 0, 0);
    spawn {
        sleep 60;
        MakeLerp(90, 0, 15, 10);
    20:
        UpdateLerp();
        RotateModel(22, SI_VAR(0), 0, -1, 0);
        RotateModel(24, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 20;
        }
        PlaySoundAtCollider(6, 452, 0);
    }
    spawn {
        NpcMoveTo(10, 0xFFFFFF17, 147, 0);
        NpcMoveTo(10, 0xFFFFFF59, 218, 0);
    }
    spawn {
        NpcMoveTo(11, 0xFFFFFF02, 144, 0);
        NpcMoveTo(11, 0xFFFFFF35, 222, 0);
    }
    sleep 15;
    NpcMoveTo(12, 0xFFFFFEF7, 0, 0);
    NpcMoveTo(12, 0xFFFFFF46, 175, 0);
    WaitForCam(0, 1.0);
    SetNpcJumpscale(10, 1.0);
    GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(10, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetNpcAnimation(11, 0x2C0002);
    SetNpcAnimation(12, 0x2C0002);
    SpeakToPlayer(10, 0x290104, 0x290101, 0, 0xC00F1);
    SetNpcAnimation(11, 0x2C0006);
    SetNpcAnimation(12, 0x2C0006);
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Defeat_802433AC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_VAR(0) = 0xFFFFFFAE;
            DoNpcDefeat();
        }
        == 1 {
        }
    }
});

Script N(script_Init_80243414) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80242D40));
    BindNpcDefeat(-1, N(script_Defeat_802433AC));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFAE) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243474) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFAE) {
        RemoveNpc(-1);
    }
});

Script N(script_Interact_802434AC) = SCRIPT({
    if (SI_SAVE_FLAG(659) == 0) {
        if (SI_AREA_FLAG(6) == 0) {
            SpeakToPlayer(-1, 0x910104, 0x910101, 0, 0xC00E4);
            SI_AREA_FLAG(6) = 1;
        } else {
            SpeakToPlayer(-1, 0x910104, 0x910101, 0, 0xC00E5);
            SI_AREA_FLAG(6) = 0;
        }
    } else {
        SpeakToPlayer(-1, 0x910104, 0x910101, 0, 0xC00E6);
    }
});

Script N(script_Interact_8024357C) = SCRIPT({
    if (SI_SAVE_FLAG(659) == 0) {
        if (SI_AREA_FLAG(7) == 0) {
            SpeakToPlayer(-1, 0x910204, 0x910201, 0, 0xC00E7);
            SI_AREA_FLAG(7) = 1;
        } else {
            SpeakToPlayer(-1, 0x910204, 0x910201, 0, 0xC00E8);
            SI_AREA_FLAG(7) = 0;
        }
    } else {
        SpeakToPlayer(-1, 0x910204, 0x910201, 0, 0xC00E9);
    }
});

Script N(script_Interact_8024364C) = SCRIPT({
    if (SI_SAVE_FLAG(659) == 0) {
        if (SI_AREA_FLAG(8) == 0) {
            SpeakToPlayer(-1, 0x910004, 0x910001, 0, 0xC00EA);
            SI_AREA_FLAG(8) = 1;
        } else {
            SpeakToPlayer(-1, 0x910004, 0x910001, 0, 0xC00EB);
            SI_AREA_FLAG(8) = 0;
        }
    } else {
        SpeakToPlayer(-1, 0x910004, 0x910001, 0, 0xC00EC);
    }
});

Script N(script_Interact_8024371C) = SCRIPT({
    if (SI_SAVE_FLAG(659) == 0) {
        if (SI_AREA_FLAG(9) == 0) {
            SpeakToPlayer(-1, 0x910004, 0x910001, 0, 0xC00ED);
            SI_AREA_FLAG(9) = 1;
        } else {
            SpeakToPlayer(-1, 0x910004, 0x910001, 0, 0xC00EE);
            SI_AREA_FLAG(9) = 0;
        }
    } else {
        SpeakToPlayer(-1, 0x910004, 0x910001, 0, 0xC00EF);
    }
});

Script N(script_Init_802437EC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802434AC));
});

Script N(script_Init_80243810) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024357C));
});

Script N(script_Init_80243834) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024364C));
});

Script N(script_Init_80243858) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024371C));
});

StaticNpc N(npcGroup_8024387C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242620),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80242CEC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
        .tattle = 0x1A007D,
    },
};

StaticNpc N(npcGroup_80243A6C)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_8024264C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00040801,
        .init = N(script_Init_80243414),
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_HONEY_SYRUP, 5 } },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80242620),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00040801,
        .init = N(script_Init_80243474),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
    },
    {
        .id = 12,
        .settings = &N(npcSettings_80242620),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00040801,
        .init = N(script_Init_80243474),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
    },
};

StaticNpc N(npcGroup_8024403C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242620),
        .pos = { 25.0, 0.0, 127.0 },
        .flags = 0x00000801,
        .init = N(script_Init_802437EC),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 5 }, { ItemId_FIRE_FLOWER, 5 } },
        .animations = {
            0x00910101, 0x00910102, 0x00910103, 0x00910103, 0x00910101, 0x00910101, 0x00910100, 0x00910100, 0x00910100, 0x00910100, 0x00910100, 0x00910100, 0x00910100, 0x00910100, 0x00910100, 0x00910100,
        },
        .tattle = 0x1A007E,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242620),
        .pos = { -30.0, 0.0, 130.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80243810),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 5 }, { ItemId_FIRE_FLOWER, 5 } },
        .animations = {
            0x00910201, 0x00910202, 0x00910203, 0x00910203, 0x00910201, 0x00910201, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200, 0x00910200,
        },
        .tattle = 0x1A007F,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80242620),
        .pos = { -140.0, 0.0, -90.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80243834),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 5 }, { ItemId_FIRE_FLOWER, 5 } },
        .animations = {
            0x00910001, 0x00910002, 0x00910003, 0x00910003, 0x00910001, 0x00910001, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000,
        },
        .tattle = 0x1A0080,
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80242620),
        .pos = { -75.0, 0.0, -80.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80243858),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 5 }, { ItemId_FIRE_FLOWER, 5 } },
        .animations = {
            0x00910001, 0x00910002, 0x00910003, 0x00910003, 0x00910001, 0x00910001, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000, 0x00910000,
        },
        .tattle = 0x1A0081,
    },
};

NpcGroupList N(npcGroupList_802447FC) = {
    NPC_GROUP(N(npcGroup_8024387C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024403C), 0x00000000),
    NPC_GROUP(N(npcGroup_80243A6C), 0x0604000C),
    {},
};

s32 pad_00482C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80244830) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 0.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244860) = SCRIPT({
    DoBasicAI(N(aISettings_80244830));
});

NpcSettings N(npcSettings_80244880) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244860),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0x10,
};

s32 unk_missing_802448AC[] = {
    0x00000000, 0x002A0018, 0x00000000, 0x00000000, N(script_NpcAI_80244860), 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_802448D8) = SCRIPT({
    sleep 60;
    EnableNpcAI(16, 0);
    SpeakToPlayer(16, 0x660118, 0x660118, 0, 0xC010C);
    EnableNpcAI(16, 1);
    sleep 30;
    FadeOutMusic(0, 2000);
    sleep 30;
    GetEntryID(SI_VAR(0));
    GotoMap(D_802451D0_9B6960, 1);
    sleep 100;
});

StaticNpc N(npcGroup_80244998)[] = {
    {
        .id = 16,
        .settings = &N(npcSettings_80244880),
        .pos = { 60.0, 0.0, -60.0 },
        .flags = 0x00000E01,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x0000003C, 0x00000000, 0xFFFFFFC4, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000003C, 0x00000000, 0xFFFFFFC4, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00660104, 0x00660102, 0x00660103, 0x00660103, 0x00660104, 0x00660104, 0x0066010A, 0x0066010A, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103,
        },
    },
    {
        .id = 15,
        .settings = &N(npcSettings_80244880),
        .pos = { 60.0, 0.0, 0.0 },
        .flags = 0x00000E01,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x0000003C, 0x00000000, 0x00000000, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000003C, 0x00000000, 0x0000003C, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00660004, 0x00660002, 0x00660003, 0x00660003, 0x00660004, 0x00660004, 0x0066000A, 0x0066000A, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003,
        },
    },
    {
        .id = 17,
        .settings = &N(npcSettings_80244880),
        .pos = { -10.0, 0.0, -60.0 },
        .flags = 0x00000E01,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFFF6, 0x00000000, 0xFFFFFFC4, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFF6, 0x00000000, 0xFFFFFFC4, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00660204, 0x00660202, 0x00660203, 0x00660203, 0x00660204, 0x00660204, 0x0066020A, 0x0066020A, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203,
        },
    },
    {
        .id = 18,
        .settings = &N(npcSettings_80244880),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00000E01,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFF6, 0x00000000, 0x0000003C, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00660304, 0x00660302, 0x00660303, 0x00660303, 0x00660304, 0x00660304, 0x0066030A, 0x0066030A, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303,
        },
    },
};

NpcGroupList N(npcGroupList_80245158) = {
    NPC_GROUP(N(npcGroup_80244998), 0x00000000),
    {},
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA7E0, 0xFFFFFF6A, 60, 100, 0, 6, 0x80000000);
});

s32 pad_0051A8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802451B0_9B6940

s32 pad_0051B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802451C0_9B6950

// rodata: D_802451C8_9B6958

// rodata: D_802451D0_9B6960

s32 N(unk_802451D8)[] = {
    0x70617274, 0x795F7069, 0x6E6B6900, 0x00000000, 0x00000000, 0x00000000,
};
