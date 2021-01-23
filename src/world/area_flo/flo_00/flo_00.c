#include "flo_00.h"

s32 pad_000034[3];
s32 pad_000F0C[1];
s32 pad_0013DC[1];
Script N(script_802414D0);
s32 pad_0016BC[1];
Script N(script_802416C0);
Script N(script_8024196C);
Script N(script_80241B90);
Script N(script_ExitWalk_80241D7C);
Script N(script_ExitWalk_80241DD8);
Script N(script_ExitWalk_80241E34);
Script N(script_ExitWalk_80241E90);
Script N(script_ExitWalk_80241EEC);
Script N(script_ExitWalk_80241F48);
Script N(script_80241FA4);
Script N(script_EnterWalk_8024205C);
Script N(main);
Script N(script_NpcAI_8024289C);
s32 unk_missing_80242940[22];
Script N(script_80242998);
Script N(script_80242AF0);
Script N(script_80242FCC);
Script N(script_80243368);
Script N(script_Init_80243474);
Script N(script_Interact_8024352C);
Script N(script_Interact_802436C0);
Script N(script_Interact_80243854);
Script N(script_Interact_802439E8);
Script N(script_Init_80243B7C);
Script N(script_Init_80243BB0);
Script N(script_Init_80243BE4);
Script N(script_Init_80243C18);
Script N(script_Interact_80243C4C);
Script N(script_Init_8024414C);
Script N(script_Idle_80244188);
Script N(script_8024427C);
Script N(script_Init_80244BF4);
Script N(script_Interact_80244C98);
Script N(script_Init_80244DD0);
StaticNpc N(npcGroup_80244E64)[1];
StaticNpc N(npcGroup_80245054)[4];
StaticNpc N(npcGroup_80245814)[1];
StaticNpc N(npcGroup_80245A04)[1];
StaticNpc N(npcGroup_80245BF4)[1];
NpcGroupList N(npcGroupList_80245DE4);
s32 pad_005E2C[1];
s32 unk_missing_80245E88[12];
Script N(script_80245EB8);
Script N(script_Init_80246170);
Script N(script_Init_802461E4);
Script N(script_Init_80246224);
StaticNpc N(npcGroup_80246264)[3];
NpcGroupList N(npcGroupList_80246834);
s32 pad_00684C[1];
Script N(script_80246850);
Script N(script_80247488);
Script N(script_80247588);
Script N(script_802476F4);
Script N(script_80247770);
Script N(script_802477EC);
Script N(script_80247BCC);
Script N(script_80247FAC);
Script N(script_8024834C);
s32 N(itemList_80248598)[4];
Script N(script_802485A8);
Script N(script_80248D3C);
Script N(script_80248E30);
Script N(script_80248F48);
s32 pad_009128[2];
Script N(script_MakeEntities);
s32 pad_00917C[1];
const char D_80249180_CA70A0[8]; // "mac_01"
const char D_80249188_CA70A8[8]; // "flo_14"
const char D_80249190_CA70B0[8]; // "flo_23"
const char D_80249198_CA70B8[8]; // "flo_25"
const char D_802491A0_CA70C0[8]; // "flo_16"
const char D_802491A8_CA70C8[8]; // "flo_09"
const char D_802491B0_CA70D0[8]; // "flo_08"
s32 pad_0091B8[2];
const char D_80249360_CA7280[8]; // "flo_07"
s32 pad_009368[2];
const char D_80249370_CA7290[8]; // "sam_11"
const char D_80249378_CA7298[8]; // "flo_19"

// text: func_80240000_C9DF20

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_C9DF60

// text: func_80240198_C9E0B8

// text: N(UnkNpcAIFunc1)

// text: func_80240500_C9E420

// text: func_802406BC_C9E5DC

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024085C_C9E77C

// text: func_8024098C_C9E8AC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240B14_C9EA34

// text: func_80240BD4_C9EAF4

// text: func_80240ED0_C9EDF0

s32 pad_000F0C[] = {
    0x00000000,
};

// text: func_80240F10_C9EE30

// text: func_80240F80_C9EEA0

// text: func_802410B4_C9EFD4

// text: func_802411EC_C9F10C

// text: func_8024137C_C9F29C

// text: func_8024139C_C9F2BC

// text: func_802413BC_C9F2DC

s32 pad_0013DC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, -310.0f, 170.0f },
    { -320.0f, 0.0f, -335.0f, 135.0f },
    { -470.0f, 0.0f, 0.0f, 90.0f },
    { -320.0f, 0.0f, 335.0f, 45.0f },
    { 320.0f, 0.0f, -335.0f, 225.0f },
    { 465.0f, 0.0f, 0.0f, 270.0f },
    { 320.0f, 0.0f, 335.0f, 315.0f },
    { -30.0f, 0.0f, 120.0f, 270.0f },
    { -30.0f, 0.0f, 120.0f, 270.0f },
    { -470.0f, 0.0f, 0.0f, 90.0f },
    { 40.0f, 0.0f, -30.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190114,
};

Script N(script_802414D0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 8 {
            if (SI_AREA_FLAG(44) != 0) {
                SetMusicTrack(0, 123, 1, 8);
            } else {
                SetMusicTrack(0, 49, 0, 8);
            }
        }
        == 9 {
            SetMusicTrack(0, 127, 0, 8);
        }
        == 10 {
            SetMusicTrack(0, 120, 1, 8);
            spawn {
                loop {
                    sleep 1;
                    if (SI_SAVE_VAR(0) >= 59) {
                        break;
                    }
                }
                SetMusicTrack(0, 49, 0, 8);
            }
        }
        == 11 {
            FadeInMusic(0, 49, 0, 3000, 0, 127);
        }
        else {
            match SI_SAVE_VAR(0) {
                < 53 {
                    SetMusicTrack(0, 48, 0, 8);
                }
                else {
                    SetMusicTrack(0, 49, 0, 8);
                }
            }
        }
    }
});

s32 pad_0016BC[] = {
    0x00000000,
};

Script N(script_802416C0) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_8024196C) = SCRIPT({
    DisablePlayerInput(1);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    PlayerMoveTo(30, 0xFFFFFF56, 10);
    InterpPlayerYaw(0, 0);
    PlaySoundAtCollider(2, 463, 0);
    MakeLerp(0, 0xFFFFFF9C, 20, 4);
    loop {
        UpdateLerp();
        RotateGroup(28, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    func_802D2C14(1);
    PlayerMoveTo(0, 0xFFFFFECA, 30);
    func_802D2C14(0);
    if (SI_SAVE_VAR(0) == 59) {
        SI_SAVE_VAR(0) = 60;
    }
    MakeLerp(0xFFFFFF9C, 0, 30, 1);
    loop {
        UpdateLerp();
        RotateGroup(28, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 464, 0);
    GotoMap(D_80249180_CA70A0, 5);
    sleep 100;
});

Script N(script_80241B90) = SCRIPT({
    DisablePlayerInput(1);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    InterpPlayerYaw(180, 0);
    PlaySoundAtCollider(2, 463, 0);
    MakeLerp(0, 0xFFFFFF9C, 30, 1);
    loop {
        UpdateLerp();
        RotateGroup(28, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    func_802D2C14(1);
    PlayerMoveTo(0, 0xFFFFFF79, 30);
    func_802D2C14(0);
    MakeLerp(0xFFFFFF9C, 0, 30, 1);
    loop {
        UpdateLerp();
        RotateGroup(28, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 464, 0);
    DisablePlayerInput(0);
    ModifyColliderFlags(1, 2, 0x7FFFFE00);
});

Script N(script_ExitWalk_80241D7C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80249188_CA70A8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241DD8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80249190_CA70B0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241E34) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80249198_CA70B8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241E90) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_802491A0_CA70C0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241EEC) = SCRIPT({
    group 27;
    UseExitHeading(60, 5);
    spawn ExitWalk;
    GotoMap(D_802491A8_CA70C8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241F48) = SCRIPT({
    group 27;
    UseExitHeading(60, 6);
    spawn ExitWalk;
    GotoMap(D_802491B0_CA70D0, 0);
    sleep 100;
});

Script N(script_80241FA4) = SCRIPT({
    bind N(script_ExitWalk_80241D7C) to 0x80000 5;
    bind N(script_ExitWalk_80241DD8) to 0x80000 9;
    bind N(script_ExitWalk_80241E34) to 0x80000 13;
    bind N(script_ExitWalk_80241E90) to 0x80000 17;
    bind N(script_ExitWalk_80241EEC) to 0x80000 21;
    bind N(script_ExitWalk_80241F48) to 0x80000 25;
});

Script N(script_EnterWalk_8024205C) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80241FA4);
    } else {
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) != 8) {
            SI_AREA_FLAG(44) = 0;
        }
        match SI_VAR(0) {
            == 0 {
                spawn {
                    await N(script_80241B90);
                    spawn N(script_80241FA4);
                }
            }
        1..6
            SI_VAR(0) = N(script_80241FA4);
            spawn EnterWalk;
            == 7 {
                spawn {
                    await N(script_8024834C);
                    spawn N(script_80241FA4);
                }
            }
            == 8 {
                spawn {
                    await N(script_80247BCC);
                    spawn N(script_80241FA4);
                }
            }
            == 9 {
                spawn N(script_80242998);
                SI_VAR(0) = N(script_80241FA4);
                spawn EnterWalk;
            }
            == 10 {
                spawn N(script_80241FA4);
            }
            == 11 {
                spawn N(script_80245EB8);
            }
        }
    }
    bind N(script_80242FCC) to TriggerFlag_WALL_INTERACT 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1984) = 1;
    if (SI_SAVE_VAR(0) < 55) {
        ModifyColliderFlags(0, 48, 0x7FFFFE00);
    }
    SI_SAVE_FLAG(263) = 0;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 11) {
        MakeNpcs(0, N(npcGroupList_80246834));
    } else {
        MakeNpcs(0, N(npcGroupList_80245DE4));
    }
    await N(script_MakeEntities);
    ParentColliderToModel(46, 81);
    spawn N(script_80248F48);
    spawn N(script_80248E30);
    ModifyColliderFlags(3, 30, 6);
    ModifyColliderFlags(3, 31, 6);
    SI_VAR(0) = 150;
    SI_VAR(1) = 0xFFFFFEF2;
    SI_VAR(2) = 410;
    SI_VAR(3) = 170;
    SI_VAR(4) = 0;
    spawn N(script_802416C0);
    SI_VAR(0) = 115;
    SI_VAR(1) = 0xFFFFFE3E;
    SI_VAR(2) = 250;
    SI_VAR(3) = 0xFFFFFEF2;
    SI_VAR(4) = 0;
    spawn N(script_802416C0);
    SI_VAR(0) = 0xFFFFFEB6;
    SI_VAR(1) = 220;
    SI_VAR(2) = 45;
    SI_VAR(3) = 410;
    SI_VAR(4) = 0;
    spawn N(script_802416C0);
    SI_VAR(0) = 0xFFFFFE5C;
    SI_VAR(1) = 0xFFFFFEFC;
    SI_VAR(2) = 0xFFFFFF74;
    SI_VAR(3) = 160;
    SI_VAR(4) = 0;
    spawn N(script_802416C0);
    ModifyColliderFlags(0, 26, 0x7FFFFE00);
    ModifyColliderFlags(0, 18, 0x7FFFFE00);
    ModifyColliderFlags(0, 14, 0x7FFFFE00);
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
    spawn N(script_EnterWalk_8024205C);
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) != 1) {
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 10) {
            sleep 65;
        }
    }
    await N(script_802414D0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_C9DF20();
    }
    spawn {
        EnableTexPanning(35, 1);
        SI_VAR(0) = 0;
    0:
        RandInt(300, SI_VAR(1));
        SI_VAR(1) += 100;
        RandInt(1, SI_VAR(2));
        SI_VAR(2) += 1;
        sleep SI_VAR(1);
        loop SI_VAR(2) {
            SetTexPanOffset(12, 0, 0xFFFF8000, 0);
            sleep 2;
            SetTexPanOffset(12, 0, 0xFFFF0000, 0);
            sleep 2;
            SetTexPanOffset(12, 0, 0xFFFE8000, 0);
            RandInt(5, SI_VAR(3));
            SI_VAR(3) += 2;
            sleep SI_VAR(3);
            SetTexPanOffset(12, 0, 0xFFFF0000, 0);
            sleep 2;
            SetTexPanOffset(12, 0, 0xFFFF8000, 0);
            sleep 2;
            SetTexPanOffset(12, 0, 0, 0);
            RandInt(5, SI_VAR(3));
            SI_VAR(3) += 2;
            sleep SI_VAR(3);
        }
        goto 0;
    }
});

NpcSettings N(npcSettings_80242840) = {
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

NpcAISettings N(aISettings_8024286C) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
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

Script N(script_NpcAI_8024289C) = SCRIPT({
    func_80240BD4_C9EAF4(N(aISettings_8024286C));
});

NpcSettings N(npcSettings_802428BC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x2A,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024289C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802428E8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x38,
    .radius = 0x28,
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

NpcSettings N(npcSettings_80242914) = {
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

s32 unk_missing_80242940[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_80242998) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    UseSettingsFrom(0, 50, 0, 0xFFFFFF38);
    SetPanTarget(0, 50, 0, 0xFFFFFF38);
    SetCamDistance(0, 700);
    SetCamPitch(0, 10.0, -11.0);
    SetCamPosA(0, 0xFFFFFFE5, 0);
    SetCamPosB(0, 0, 0xFFFFFFCE);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    ShowMessageAtWorldPos(0x1100C4, 0, 50, 0xFFFFFF38);
    sleep 10;
    GotoMap(D_80249360_CA7280, 1);
    sleep 100;
});

Script N(script_80242AF0) = SCRIPT({
    DisablePlayerInput(1);
    UseSettingsFrom(0, 0, 0, 0xFFFFFF56);
    SetPanTarget(0, 0, 0, 0xFFFFFF56);
    SetCamDistance(0, 300);
    SetCamPitch(0, 17.0, -8.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 75;
    ShowMessageAtScreenPos(0x110000, 160, 40);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerJumpscale(1.5);
    PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 12);
    sleep 10;
    DisablePartnerAI(0);
    InterpPlayerYaw(270, 0);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    sleep 15;
    InterpPlayerYaw(90, 0);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    sleep 15;
    SetCamDistance(0, 800);
    SetCamPitch(0, 15.0, -5.7998046875);
    SetCamPosA(0, 0xFFFFFFFE, 0);
    PanToTarget(0, 0, 1);
    sleep 15;
    SpeakToPlayer(0, -1, -1, 5, 0x110001);
    SetPlayerAnimation(0x10002);
    InterpPlayerYaw(350, 0);
    sleep 15;
    ContinueSpeech(0, -1, -1, 5, 0x110002);
    sleep 10;
    SetCamDistance(0, 333);
    SetCamPitch(0, 9.0, -22.0);
    SetCamPosA(0, 0xFFFFFFFE, 0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    EnablePartnerAI();
    func_802D2C14(1);
    sleep 10;
    ShowMessageAtWorldPos(0x110003, 0, 70, 0xFFFFFF38);
    SetCamPitch(0, 16.5, -11.7998046875);
    SetCamDistance(0, 525);
    SetCamPosA(0, 0xFFFFFFF2, 0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SetPlayerAnimation(0x80007);
    sleep 20;
    SetPlayerAnimation(0x10002);
    ShowMessageAtWorldPos(0x110004, 0, 50, 0xFFFFFF38);
    SetCamPitch(0, 9.0, -22.0);
    SetCamDistance(0, 333);
    SetCamPosA(0, 0xFFFFFFFE, 0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    ShowMessageAtWorldPos(0x110005, 0, 70, 0xFFFFFF38);
    ResetCam(0, 90.0);
    SI_SAVE_VAR(0) = 43;
    func_802D2C14(0);
    DisablePlayerInput(0);
});

Script N(script_80242FCC) = SCRIPT({
    DisablePlayerInput(1);
    sleep 2;
    GetPlayerActionState(SI_VAR(3));
    SI_VAR(4) = 0;
    if (SI_VAR(3) == 0) {
        SI_VAR(4) += 1;
    }
    if (SI_VAR(3) == 1) {
        SI_VAR(4) += 1;
    }
    if (SI_VAR(3) == 2) {
        SI_VAR(4) += 1;
    }
    if (SI_VAR(4) == 0) {
        DisablePlayerInput(0);
        return;
    }
    if (SI_SAVE_VAR(0) == 53) {
        ShowMessageAtWorldPos(0x110006, 0, 50, 0xFFFFFF38);
        SI_SAVE_VAR(0) = 54;
        DisablePlayerInput(0);
        return;
    }
    if (SI_SAVE_VAR(0) < 60) {
        ShowMessageAtWorldPos(0x11000D, 0, 50, 0xFFFFFF38);
        ShowChoice(0x1E001F);
        sleep 10;
        match SI_VAR(0) {
            == 0 {
                match SI_SAVE_VAR(0) {
                    < 45 {
                        SwitchMessage(0x11000E);
                    }
                    < 46 {
                        SwitchMessage(0x11000F);
                    }
                    < 49 {
                        SwitchMessage(0x110010);
                    }
                    < 53 {
                        SwitchMessage(0x110011);
                    }
                    < 55 {
                        SwitchMessage(0x110007);
                    }
                    < 58 {
                        SwitchMessage(0x110012);
                    }
                    else {
                        SwitchMessage(0x110013);
                    }
                }
            }
            == 1 {
                CloseMessage();
                spawn N(script_8024196C);
                return;
            }
            == 2 {
                CloseMessage();
            }
        }
    } else {
        ShowMessageAtWorldPos(0x110014, 0, 50, 0xFFFFFF38);
        ShowChoice(0x1E001F);
        sleep 10;
        match SI_VAR(0) {
            == 0 {
                SwitchMessage(0x110015);
            }
            == 1 {
                CloseMessage();
                spawn N(script_8024196C);
                return;
            }
            == 2 {
                CloseMessage();
            }
        }
    }
    DisablePlayerInput(0);
});

Script N(script_80243368) = SCRIPT({
    AdjustCam(0, 90.0, 0, 600, 21.0, -12.0);
    sleep 20;
    ShowMessageAtWorldPos(0x11000B, 0, 50, 0xFFFFFF38);
    SetPanTarget(0, 0, 0, 0xFFFFFFE2);
    SetCamDistance(0, 250);
    SetCamPitch(0, 25.0, -25.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    ShowMessageAtWorldPos(0x11000C, 0, 50, 0xFFFFFF38);
    ResetCam(0, 90.0);
});

Script N(script_Init_80243474) = SCRIPT({
    EnableGroup(121, 0);
    EnableGroup(80, 0);
    EnableGroup(132, 0);
    SetNpcPos(-1, 50, 70, 0xFFFFFF1A);
    SetNpcFlagBits(-1, 2, 1);
    EnableNpcShadow(-1, 0);
    if (SI_SAVE_VAR(0) < 43) {
        spawn N(script_80242AF0);
    }
});

Script N(script_Interact_8024352C) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 45 {
            SpeakToPlayer(-1, 0x990003, 0x990002, 0, 0x110016);
        }
        < 46 {
            SpeakToPlayer(-1, 0x990003, 0x990002, 0, 0x110017);
        }
        < 49 {
            SpeakToPlayer(-1, 0x990003, 0x990002, 0, 0x110018);
        }
        < 53 {
            SpeakToPlayer(-1, 0x990003, 0x990002, 0, 0x110019);
        }
        < 57 {
            match SI_AREA_FLAG(18) {
                == 0 {
                    SpeakToPlayer(-1, 0x990009, 0x990008, 0, 0x11001A);
                    SI_AREA_FLAG(18) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x990009, 0x990008, 0, 0x11001B);
                    SI_AREA_FLAG(18) = 0;
                }
            }
        }
        else {
            SpeakToPlayer(-1, 0x990009, 0x990008, 0, 0x11001C);
        }
    }
});

Script N(script_Interact_802436C0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 45 {
            SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0x11001D);
        }
        < 46 {
            SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0x11001E);
        }
        < 49 {
            SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0x11001F);
        }
        < 53 {
            SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0x110020);
        }
        < 57 {
            match SI_AREA_FLAG(19) {
                == 0 {
                    SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0x110021);
                    SI_AREA_FLAG(19) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0x110022);
                    SI_AREA_FLAG(19) = 0;
                }
            }
        }
        else {
            SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0x110023);
        }
    }
});

Script N(script_Interact_80243854) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 45 {
            SpeakToPlayer(-1, 0x990203, 0x990202, 0, 0x110024);
        }
        < 46 {
            SpeakToPlayer(-1, 0x990203, 0x990202, 0, 0x110025);
        }
        < 49 {
            SpeakToPlayer(-1, 0x990203, 0x990202, 0, 0x110026);
        }
        < 53 {
            SpeakToPlayer(-1, 0x990203, 0x990202, 0, 0x110027);
        }
        < 57 {
            match SI_AREA_FLAG(20) {
                == 0 {
                    SpeakToPlayer(-1, 0x990209, 0x990208, 0, 0x110028);
                    SI_AREA_FLAG(20) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x990209, 0x990208, 0, 0x110029);
                    SI_AREA_FLAG(20) = 0;
                }
            }
        }
        else {
            SpeakToPlayer(-1, 0x990209, 0x990208, 0, 0x11002A);
        }
    }
});

Script N(script_Interact_802439E8) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 45 {
            SpeakToPlayer(-1, 0x990303, 0x990302, 0, 0x11002B);
        }
        < 46 {
            SpeakToPlayer(-1, 0x990303, 0x990302, 0, 0x11002C);
        }
        < 49 {
            SpeakToPlayer(-1, 0x990303, 0x990302, 0, 0x11002D);
        }
        < 53 {
            SpeakToPlayer(-1, 0x990303, 0x990302, 0, 0x11002E);
        }
        < 57 {
            match SI_AREA_FLAG(21) {
                == 0 {
                    SpeakToPlayer(-1, 0x990309, 0x990308, 0, 0x11002F);
                    SI_AREA_FLAG(21) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x990309, 0x990308, 0, 0x110030);
                    SI_AREA_FLAG(21) = 0;
                }
            }
        }
        else {
            SpeakToPlayer(-1, 0x990309, 0x990308, 0, 0x110031);
        }
    }
});

Script N(script_Init_80243B7C) = SCRIPT({
    SI_AREA_FLAG(18) = 0;
    BindNpcInteract(-1, N(script_Interact_8024352C));
});

Script N(script_Init_80243BB0) = SCRIPT({
    SI_AREA_FLAG(19) = 0;
    BindNpcInteract(-1, N(script_Interact_802436C0));
});

Script N(script_Init_80243BE4) = SCRIPT({
    SI_AREA_FLAG(20) = 0;
    BindNpcInteract(-1, N(script_Interact_80243854));
});

Script N(script_Init_80243C18) = SCRIPT({
    SI_AREA_FLAG(21) = 0;
    BindNpcInteract(-1, N(script_Interact_802439E8));
});

Script N(script_Interact_80243C4C) = SCRIPT({
    if (SI_SAVE_FLAG(1373) == 0) {
        AdjustCam(0, 4.0, 0xFFFFFFE2, 300, 20.0, -9.5);
        SI_SAVE_FLAG(1373) = 1;
    }
    match SI_SAVE_VAR(0) {
        < 45 {
            match SI_AREA_VAR(0) {
                == 0 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110035);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110038);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 2;
                }
                == 2 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110039);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 0;
                }
            }
        }
        < 47 {
            match SI_AREA_VAR(0) {
                == 0 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110036);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110038);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 2;
                }
                == 2 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110039);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 0;
                }
            }
        }
        < 53 {
            match SI_AREA_VAR(0) {
                == 0 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110037);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110038);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 2;
                }
                == 2 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110039);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 0;
                }
            }
        }
        < 57 {
            match SI_AREA_VAR(0) {
                == 0 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110039);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                    SI_AREA_VAR(0) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x110038);
                    EndSpeech(-1, 0xC50003, 0xC50003, 0);
                }
            }
        }
        else {
            SpeakToPlayer(-1, 0xC50002, 0xC50001, 0, 0x11003A);
            EndSpeech(-1, 0xC50003, 0xC50003, 0);
        }
    }
    ResetCam(0, 4.0);
});

Script N(script_Init_8024414C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243C4C));
    SetNpcCollisionSize(-1, 65, 50);
});

Script N(script_Idle_80244188) = SCRIPT({
    loop {
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) -= 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
});

Script N(script_8024427C) = SCRIPT({
    DisablePartnerAI(0);
    func_802CF56C(2);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 0xFFFFFFCE;
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(4) += 26;
    SetNpcPos(6, SI_VAR(3), SI_VAR(4), SI_VAR(2));
    PlayerFaceNpc(6, 0);
    NpcFaceNpc(0xFFFFFFFC, 6, 0);
    SI_VAR(0) += 0xFFFFFFE7;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 475.0);
    SetCamPitch(0, 18, 0xFFFFFFF8);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    func_802D2508();
    DisablePlayerInput(1);
    sleep 40;
    SpeakToPlayer(6, 0x170003, 0x170001, 512, 0x1100D8);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 18, 0xFFFFFFF7);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(6, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableNpcAI(6, 0);
    SetNpcAnimation(6, 0x170004);
    sleep 20;
    SetPlayerAnimation(0x1001F);
    PlaySoundAtPlayer(313, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(1);
    SI_VAR(1) += 50;
    SI_VAR(2) += 10;
    SI_VAR(3) += 30;
    loop 5 {
        PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
        PlayEffect(17, 1, SI_VAR(0), SI_VAR(3), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
    }
    sleep 20;
    PlaySoundAtPlayer(392, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    PlayEffect(82, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 30, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    SetPlayerAnimation(0x10002);
    SetNpcAnimation(6, 0x170001);
    EnableNpcAI(6, 1);
    func_80240ED0_C9EDF0();
    ShowMessageAtScreenPos(0x1D0196, 160, 40);
    sleep 10;
    GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(6, 0x170003, 0x170001, 512, 0x1100D9);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFE7;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(6, 0x170003, 0x170001, 512, 0x1100DA);
    SetNpcFlagBits(6, 0x40000, 1);
    spawn {
        loop 25 {
            GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 4;
        }
    }
    spawn {
        SI_VAR(2) = 0;
        SI_VAR(3) = 1800;
        MakeLerp(SI_VAR(2), SI_VAR(3), 100, 2);
        loop {
            UpdateLerp();
            SetNpcRotation(6, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        GetNpcPos(6, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = SI_VAR(3);
        SI_VAR(5) += 180;
        MakeLerp(SI_VAR(3), SI_VAR(5), 100, 2);
        loop {
            UpdateLerp();
            SetNpcPos(6, SI_VAR(2), SI_VAR(0), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcPos(6, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 15;
        PlaySoundAtNpc(6, 8261, 0);
    }
    sleep 10;
    SetPlayerAnimation(0x1002A);
    sleep 110;
    SetPlayerAnimation(0x10002);
    SI_SAVE_VAR(0) = 59;
    await N(script_80243368);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Init_80244BF4) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) != 1) {
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 10) {
            BindNpcIdle(-1, N(script_Idle_80244188));
            spawn N(script_8024427C);
        } else {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

Script N(script_Interact_80244C98) = SCRIPT({
    if (SI_SAVE_VAR(0) <= 53) {
        SpeakToPlayer(7, 0xCC0004, 0xCC0001, 0, 0x110032);
    } else {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 8) {
            SpeakToPlayer(7, 0xCC0004, 0xCC0001, 0, 0x110032);
            sleep 10;
            DisablePartnerAI(0);
            SpeakToPlayer(0xFFFFFFFC, 0x8000B, 0x80003, 5, 0x110033);
            SetNpcAnimation(0xFFFFFFFC, 0x80001);
            EndSpeech(0xFFFFFFFC, 0x80009, 0x80001, 5);
            EnablePartnerAI();
        } else {
            SpeakToPlayer(7, 0xCC0004, 0xCC0001, 0, 0x110034);
        }
    }
});

Script N(script_Init_80244DD0) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 58) {
        BindNpcInteract(-1, N(script_Interact_80244C98));
        SetNpcCollisionSize(-1, 36, 28);
        SetNpcPos(-1, 0xFFFFFF38, 15, 0xFFFFFED4);
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

StaticNpc N(npcGroup_80244E64)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242840),
        .pos = { -72.0, 60.0, -100.0 },
        .flags = 0x00000A01,
        .init = N(script_Init_80243474),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00990002, 0x0099000E, 0x0099000E, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002,
        },
    },
};

StaticNpc N(npcGroup_80245054)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802428BC),
        .pos = { -59.0, 0.0, -40.0 },
        .flags = 0x00002801,
        .init = N(script_Init_80243B7C),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0xFFFFFFC5, 0x00000000, 0xFFFFFFD8, 0xFFFFFFB0, 0x00000000, 0xFFFFFFD8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFFC5, 0x00000000, 0xFFFFFFD8, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00990002, 0x0099000E, 0x0099000E, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002, 0x00990002,
        },
        .tattle = 0x1A00D5,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802428BC),
        .pos = { 67.0, 0.0, 85.0 },
        .flags = 0x00002801,
        .init = N(script_Init_80243BB0),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x00000043, 0x00000000, 0x00000055, 0x00000061, 0x00000000, 0x00000055, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFFC5, 0x00000000, 0xFFFFFFD8, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00990102, 0x0099010E, 0x0099010E, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102,
        },
        .tattle = 0x1A00D6,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802428BC),
        .pos = { 90.0, 0.0, 410.0 },
        .flags = 0x00002801,
        .init = N(script_Init_80243BE4),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x0000005A, 0x00000000, 0x0000019A, 0x00000078, 0x00000000, 0x0000019A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFFC5, 0x00000000, 0xFFFFFFD8, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00990202, 0x0099020E, 0x0099020E, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202,
        },
        .tattle = 0x1A00D7,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802428BC),
        .pos = { 200.0, 0.0, 430.0 },
        .flags = 0x00002801,
        .init = N(script_Init_80243C18),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x000000C8, 0x00000000, 0x000001AE, 0x000000F0, 0x00000000, 0x000001AE, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFFC5, 0x00000000, 0xFFFFFFD8, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00990302, 0x0099030E, 0x0099030E, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302,
        },
        .tattle = 0x1A00D8,
    },
};

StaticNpc N(npcGroup_80245814)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802428E8),
        .pos = { -400.0, 0.0, 190.0 },
        .flags = 0x00402D01,
        .init = N(script_Init_8024414C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001, 0x00C50001,
        },
        .tattle = 0x1A00D9,
    },
};

StaticNpc N(npcGroup_80245A04)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80242914),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80244BF4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170000, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001,
        },
    },
};

StaticNpc N(npcGroup_80245BF4)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_80242840),
        .pos = { 198.0, 0.0, 363.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80244DD0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001,
        },
        .tattle = 0x1A00E2,
    },
};

NpcGroupList N(npcGroupList_80245DE4) = {
    NPC_GROUP(N(npcGroup_80244E64), 0x00000000),
    NPC_GROUP(N(npcGroup_80245054), 0x00000000),
    NPC_GROUP(N(npcGroup_80245814), 0x00000000),
    NPC_GROUP(N(npcGroup_80245A04), 0x00000000),
    NPC_GROUP(N(npcGroup_80245BF4), 0x00000000),
    {},
};

s32 pad_005E2C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80245E30) = {
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

NpcSettings N(npcSettings_80245E5C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
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
    .unk_2A = 0x10,
};

s32 unk_missing_80245E88[] = {
    0x43850000, 0x41A00000, 0x43A10000, 0x439B0000, 0x41F00000, 0x439C0000, 0x43AD0000, 0x42B40000,
    0x43960000, 0x43C80000, 0x43480000, 0x438F8000,
};

Script N(script_80245EB8) = SCRIPT({
    SetPlayerPos(0xFFFFFE70, 0, 200);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFE84, 0, 200);
    func_802CF56C(2);
    DisablePartnerAI(0);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SI_VAR(0) = 230;
    SI_VAR(1) = 0;
    SI_VAR(2) = 350;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 17.0, -10.0);
    SetCamDistance(0, 350);
    SetCamPosA(0, 17.5, 35.0);
    SetCamPosB(0, 0, 0xFFFFFFCE);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 70;
    InterpNpcYaw(0, 90, 0);
    sleep 10;
    SetNpcAnimation(0, 0x80009);
    sleep 40;
    SetNpcAnimation(0, 0x80001);
    SetNpcAnimation(2, 0x40006);
    sleep 40;
    SetNpcAnimation(2, 0x40001);
    InterpNpcYaw(2, 90, 0);
    NpcFlyTo(2, 400, 200, 287, 80, 0xFFFFFFFB, 0);
    InterpNpcYaw(0, 270, 0);
    sleep 40;
    FadeOutMusic(0, 1000);
    GotoMap(D_80249370_CA7290, 2);
    sleep 100;
});

Script N(script_Init_80246170) = SCRIPT({
    SetPlayerPos(0xFFFFFE70, 0, 200);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFE84, 0, 200);
    SetNpcPos(0, 196, 20, 354);
    SetNpcYaw(0, 270);
});

Script N(script_Init_802461E4) = SCRIPT({
    SetNpcPos(1, 163, 20, 370);
    SetNpcYaw(1, 90);
});

Script N(script_Init_80246224) = SCRIPT({
    SetNpcPos(2, 266, 20, 322);
    SetNpcYaw(2, 270);
});

StaticNpc N(npcGroup_80246264)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80245E30),
        .pos = { 144.0, 0.0, 374.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80246170),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80245E30),
        .pos = { 198.0, 0.0, 363.0 },
        .flags = 0x00000801,
        .init = N(script_Init_802461E4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80245E5C),
        .pos = { 266.0, 0.0, 322.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80246224),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00040001, 0x00040002, 0x00040003, 0x00040003, 0x00040001, 0x00040001, 0x00040000, 0x00040000, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001,
        },
    },
};

NpcGroupList N(npcGroupList_80246834) = {
    NPC_GROUP(N(npcGroup_80246264), 0x00000000),
    {},
};

s32 pad_00684C[] = {
    0x00000000,
};

Script N(script_80246850) = SCRIPT({
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) -= -700.0;
    SI_VAR(1) /= 100.0;
    SI_VAR(2) =f SI_VAR(1);
    SI_VAR(2) *= 100.0;
    if (SI_VAR(2) > 100) {
        SI_VAR(1) = 1.0;
    }
    ScaleGroup(74, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(89, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(91, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(93, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(95, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(97, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(99, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(101, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(103, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(105, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(107, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(109, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(111, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(113, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(115, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(117, SI_VAR(1), 1, SI_VAR(1));
    ScaleModel(119, SI_VAR(1), 1, SI_VAR(1));
    TranslateGroup(74, 0, SI_VAR(0), 0);
    TranslateModel(89, 0, SI_VAR(0), 0);
    TranslateModel(91, 0, SI_VAR(0), 0);
    TranslateModel(93, 0, SI_VAR(0), 0);
    TranslateModel(95, 0, SI_VAR(0), 0);
    TranslateModel(97, 0, SI_VAR(0), 0);
    TranslateModel(99, 0, SI_VAR(0), 0);
    TranslateModel(101, 0, SI_VAR(0), 0);
    TranslateModel(103, 0, SI_VAR(0), 0);
    TranslateModel(105, 0, SI_VAR(0), 0);
    TranslateModel(107, 0, SI_VAR(0), 0);
    TranslateModel(109, 0, SI_VAR(0), 0);
    TranslateModel(111, 0, SI_VAR(0), 0);
    TranslateModel(113, 0, SI_VAR(0), 0);
    TranslateModel(115, 0, SI_VAR(0), 0);
    TranslateModel(117, 0, SI_VAR(0), 0);
    TranslateModel(119, 0, SI_VAR(0), 0);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) *= -12.0;
    RotateGroup(74, SI_VAR(1), 0, 1, 0);
    RotateModel(89, SI_VAR(1), 0, 1, 0);
    RotateModel(91, SI_VAR(1), 0, 1, 0);
    RotateModel(93, SI_VAR(1), 0, 1, 0);
    RotateModel(95, SI_VAR(1), 0, 1, 0);
    RotateModel(97, SI_VAR(1), 0, 1, 0);
    RotateModel(99, SI_VAR(1), 0, 1, 0);
    RotateModel(101, SI_VAR(1), 0, 1, 0);
    RotateModel(103, SI_VAR(1), 0, 1, 0);
    RotateModel(105, SI_VAR(1), 0, 1, 0);
    RotateModel(107, SI_VAR(1), 0, 1, 0);
    RotateModel(109, SI_VAR(1), 0, 1, 0);
    RotateModel(111, SI_VAR(1), 0, 1, 0);
    RotateModel(113, SI_VAR(1), 0, 1, 0);
    RotateModel(115, SI_VAR(1), 0, 1, 0);
    RotateModel(117, SI_VAR(1), 0, 1, 0);
    RotateModel(119, SI_VAR(1), 0, 1, 0);
    TranslateModel(89, 8.1220703125, 56.1533203125, 1.166015625);
    TranslateModel(91, -6.8779296875, 91.1533203125, 1.166015625);
    TranslateModel(93, 13.1220703125, 106.1533203125, 1.166015625);
    TranslateModel(95, -9.8779296875, 136.1533203125, 1.166015625);
    TranslateModel(97, -7.8779296875, 201.1533203125, 1.166015625);
    TranslateModel(99, 13.1220703125, 221.1533203125, 1.166015625);
    TranslateModel(101, 8.126953125, 261.2294921875, 1.166015625);
    TranslateModel(103, -12.8779296875, 266.1533203125, 1.166015625);
    TranslateModel(105, 8.1220703125, 316.1533203125, -13.833984375);
    TranslateModel(107, -10.943359375, 391.1533203125, 10.56640625);
    TranslateModel(109, -7.001953125, 456.1533203125, 0.947265625);
    TranslateModel(111, 12.998046875, 471.1533203125, 0.947265625);
    TranslateModel(113, -10.001953125, 501.1533203125, 0.947265625);
    TranslateModel(115, 8.0029296875, 536.2294921875, 0.947265625);
    TranslateModel(117, 12.998046875, 586.1533203125, 0.947265625);
    TranslateModel(119, -13.001953125, 631.1533203125, 0.947265625);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) -= -700.0;
    SI_VAR(1) /= 300.0;
    SI_VAR(2) =f SI_VAR(1);
    SI_VAR(2) *= 100.0;
    if (SI_VAR(2) > 100) {
        SI_VAR(1) = 1.0;
    }
    ScaleModel(89, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(91, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(93, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(95, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(97, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(99, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(101, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(103, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(105, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(107, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(109, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(111, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(113, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(115, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(117, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    ScaleModel(119, SI_VAR(1), SI_VAR(1), SI_VAR(1));
    TranslateModel(89, -8.12109375, -56.15234375, -1.1650390625);
    TranslateModel(91, 6.87890625, -91.15234375, -1.1650390625);
    TranslateModel(93, -13.12109375, -106.15234375, -1.1650390625);
    TranslateModel(95, 9.87890625, -136.15234375, -1.1650390625);
    TranslateModel(97, 7.87890625, -201.15234375, -1.1650390625);
    TranslateModel(99, -13.12109375, -221.15234375, -1.1650390625);
    TranslateModel(101, -8.1259765625, -261.228515625, -1.1650390625);
    TranslateModel(103, 12.87890625, -266.15234375, -1.1650390625);
    TranslateModel(105, -8.12109375, -316.15234375, 13.8349609375);
    TranslateModel(107, 10.9443359375, -391.15234375, -10.5654296875);
    TranslateModel(109, 7.0029296875, -456.15234375, -0.9462890625);
    TranslateModel(111, -12.9970703125, -471.15234375, -0.9462890625);
    TranslateModel(113, 10.0029296875, -501.15234375, -0.9462890625);
    TranslateModel(115, -8.001953125, -536.228515625, -0.9462890625);
    TranslateModel(117, -12.9970703125, -586.15234375, -0.9462890625);
    TranslateModel(119, 13.0029296875, -631.15234375, -0.9462890625);
});

Script N(script_80247488) = SCRIPT({
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) -= -700.0;
    SI_VAR(1) /= 100.0;
    SI_VAR(2) =f SI_VAR(1);
    SI_VAR(2) *= 100.0;
    if (SI_VAR(2) > 100) {
        SI_VAR(1) = 1.0;
    }
    ScaleGroup(79, SI_VAR(1), 1, SI_VAR(1));
    TranslateGroup(79, 0, SI_VAR(0), 0);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) *= -12.0;
    RotateGroup(79, SI_VAR(1), 0, 1, 0);
});

Script N(script_80247588) = SCRIPT({
    TranslateModel(83, 9.5, 12.0, 15.0);
    TranslateModel(85, -9.5, 12.0, 15.0);
    TranslateModel(87, 0.0, 0.0, 17.0);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) *= 90.0;
    RotateModel(83, SI_VAR(1), 0, 0, -1);
    RotateModel(85, SI_VAR(1), 0, 0, 1);
    TranslateModel(83, -9.5, -12.0, -15.0);
    TranslateModel(85, 9.5, -12.0, -15.0);
    TranslateModel(87, 0.0, 0.0, -17.0);
    ScaleModel(83, SI_VAR(0), SI_VAR(0), SI_VAR(0));
    ScaleModel(85, SI_VAR(0), SI_VAR(0), SI_VAR(0));
    ScaleModel(87, SI_VAR(0), SI_VAR(0), SI_VAR(0));
});

Script N(script_802476F4) = SCRIPT({
    ScaleModel(81, SI_VAR(0), SI_VAR(0), SI_VAR(0));
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) *= 90.0;
    SI_VAR(1) += -90.0;
    RotateModel(81, SI_VAR(1), 1, 0, 0);
});

Script N(script_80247770) = SCRIPT({
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) *= -3.0;
    TranslateModel(81, -0.259765625, SI_VAR(0), 1.4775390625);
    RotateModel(81, SI_VAR(1), 0, 1, 0);
    UpdateColliderTransform(46);
});

Script N(script_802477EC) = SCRIPT({
    if (SI_AREA_FLAG(44) == 0) {
        DisablePlayerInput(1);
        func_802D2B6C();
        sleep 15;
        DisablePartnerAI(0);
        SI_AREA_FLAG(44) = 1;
        ModifyColliderFlags(0, 47, 0x7FFFFE00);
        ModifyColliderFlags(0, 48, 0x7FFFFE00);
        SI_VAR(9) = -59.0;
        SI_VAR(10) = 22.0;
        SI_VAR(11) = 125.0;
        SI_VAR(12) = -55.0;
        SI_VAR(13) = 24.0;
        SI_VAR(14) = 145.0;
        PlayerMoveTo(SI_VAR(9), SI_VAR(11), 8);
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        NpcJump0(0xFFFFFFFC, SI_VAR(12), SI_VAR(13), SI_VAR(14), 5);
        PlaySound(412);
        SetMusicTrack(0, 123, 1, 8);
        SetNpcAnimation(0xFFFFFFFC, 262);
        SetPlayerAnimation(0x10004);
        func_80240F10_C9EE30(SI_VAR(3), SI_VAR(4));
        match SI_VAR(4) {
            < 90 {
                SI_AREA_FLAG(16) = 0;
                InterpPlayerYaw(90, 0);
                InterpNpcYaw(0xFFFFFFFC, 90, 0);
            }
            >= 270 {
                SI_AREA_FLAG(16) = 1;
                InterpPlayerYaw(270, 0);
                InterpNpcYaw(0xFFFFFFFC, 270, 0);
            }
        }
        TranslateModel(81, -0.259765625, 2.0, 1.4775390625);
        UpdateColliderTransform(46);
        SI_MAP_VAR(10) = 0;
        spawn {
            SI_VAR(15) = 0;
            loop {
                SI_VAR(15) += 1;
                func_802411EC_C9F10C(SI_VAR(15), SI_VAR(0), 0, 700, 800, 0, 0);
                spawn N(script_80247770);
                SI_VAR(2) =f SI_VAR(0);
                SI_VAR(2) *= -3.0;
                SI_VAR(3) =f SI_VAR(0);
                func_80240F80_C9EEA0();
                func_802410B4_C9EFD4();
                if (SI_VAR(15) == 350) {
                    SI_MAP_VAR(10) = 1;
                }
                sleep 1;
            }
        }
    10:
        if (SI_MAP_VAR(10) == 0) {
            sleep 1;
            goto 10;
        }
        GotoMap(D_80249378_CA7298, 3);
        sleep 100;
    }
});

Script N(script_80247BCC) = SCRIPT({
    DisablePlayerInput(1);
    SetPlayerActionState(10);
    ModifyColliderFlags(0, 47, 0x7FFFFE00);
    ModifyColliderFlags(0, 48, 0x7FFFFE00);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_VAR(9) = -59.0;
    SI_VAR(10) = 22.0;
    SI_VAR(11) = 125.0;
    SI_VAR(12) = -55.0;
    SI_VAR(13) = 23.0;
    SI_VAR(14) = 145.0;
    spawn {
        sleep 5;
        SetNpcAnimation(0xFFFFFFFC, 262);
        SetPlayerAnimation(0x10004);
        match SI_AREA_FLAG(16) {
            == 0 {
                InterpPlayerYaw(90, 0);
                InterpNpcYaw(0xFFFFFFFC, 90, 0);
            }
            == 1 {
                InterpPlayerYaw(270, 0);
                InterpNpcYaw(0xFFFFFFFC, 270, 0);
            }
        }
    }
    TranslateModel(81, -0.259765625, 2.0, 1.4775390625);
    UpdateColliderTransform(46);
    SI_VAR(15) = 0;
    loop 120 {
        SI_VAR(15) += 1;
        func_802411EC_C9F10C(SI_VAR(15), SI_VAR(0), 70, 0, 120, 0, 0);
        spawn N(script_80247770);
        SI_VAR(2) =f SI_VAR(0);
        SI_VAR(2) *= -3.0;
        SI_VAR(3) =f SI_VAR(0);
        func_80240F80_C9EEA0();
        func_802410B4_C9EFD4();
        sleep 1;
    }
    EnablePartnerAI();
    ClearPartnerMoveHistory(0xFFFFFFFC);
    SetPlayerJumpscale(1);
    PlayerJump(10, 0, 110, 20);
    SetPlayerActionState(10);
    InterpPlayerYaw(90, 0);
    sleep 5;
    ModifyColliderFlags(1, 47, 0x7FFFFE00);
    ModifyColliderFlags(1, 48, 0x7FFFFE00);
    SI_AREA_FLAG(44) = 0;
    StopSound(413);
    await N(script_802414D0);
    ResetCam(0, 1.0);
    DisablePlayerInput(0);
});

Script N(script_80247FAC) = SCRIPT({
    PlaySoundAtCollider(47, 411, 0);
    SI_VAR(15) = 0;
    loop 100 {
        SI_VAR(15) += 1;
        func_802411EC_C9F10C(SI_VAR(15), SI_VAR(0), 0, 1.0, 100, 0, 0);
        spawn N(script_80247588);
        sleep 1;
    }
    SI_MAP_VAR(10) = 0;
    spawn {
        SI_VAR(15) = 0;
        loop 1200 {
            SI_VAR(15) += 1;
            func_802411EC_C9F10C(SI_VAR(15), SI_VAR(0), 0xFFFFFD44, 0, 1200, 0, 0);
            SI_VAR(2) =f SI_VAR(0);
            SI_VAR(2) *= 1.0;
            SI_VAR(0) =f SI_VAR(2);
            spawn N(script_80246850);
            SI_VAR(2) =f SI_VAR(0);
            SI_VAR(2) *= 1.0;
            SI_VAR(0) =f SI_VAR(2);
            spawn N(script_80247488);
            match SI_VAR(15) {
                == 200 {
                    SetPlayerAnimation(0x1002A);
                }
                == 250 {
                    SI_VAR(0) = 0xFFFFFFC4;
                    SI_VAR(1) = 0;
                    SI_VAR(2) = 65;
                    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetCamSpeed(0, 90.0);
                    SetCamPitch(0, 12.5, -7.0);
                    SetCamDistance(0, 800);
                    SetCamPosA(0, 0xFFFFFF38, 0);
                    SetCamPosB(0, 0, 0xFFFFFED4);
                    PanToTarget(0, 0, 1);
                    WaitForCam(0, 1.0);
                }
                else {
                }
            }
            if (SI_VAR(15) > 550) {
                SI_MAP_VAR(10) = 1;
            }
            sleep 1;
        }
    }
10:
    if (SI_MAP_VAR(10) == 0) {
        sleep 1;
        goto 10;
    }
    FadeInMusic(0, 50, 0, 3000, 0, 127);
    FadeOutMusic(1, 3000);
    GotoMap(D_80249378_CA7298, 2);
    sleep 100;
});

Script N(script_8024834C) = SCRIPT({
    DisablePlayerInput(1);
    InterpPlayerYaw(200, 0);
    SetPlayerPos(0xFFFFFFC4, 0, 30);
    NpcFacePlayer(0xFFFFFFFC, 1);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFEC, 0, 10);
    SI_VAR(0) = 0xFFFFFFC4;
    SI_VAR(1) = 0;
    SI_VAR(2) = 65;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 12.5, -7.0);
    SetCamDistance(0, 800);
    SetCamPosA(0, 0xFFFFFF38, 0);
    SetCamPosB(0, 0, 0xFFFFFED4);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SI_VAR(15) = 0;
    loop 5 {
        SI_VAR(15) += 20;
        func_802411EC_C9F10C(SI_VAR(15), SI_VAR(0), 0.0, 1.0, 100, 0, 0);
        spawn N(script_802476F4);
        sleep 1;
    }
    ModifyColliderFlags(1, 46, 0x7FFFFE00);
    ShowMessageAtWorldPos(0x11000A, 0, 50, 0xFFFFFF38);
    ResetCam(0, 90.0);
    DisablePlayerInput(0);
});

s32 N(itemList_80248598)[] = {
    0x00000059, 0x00000058, 0x0000005A, 0x00000000,
};

Script N(script_802485A8) = SCRIPT({
    DisablePlayerInput(1);
    func_802D2884(0xFFFFFFAB, 85, 0);
    func_802CF56C(2);
    DisablePlayerInput(0);
    if (SI_SAVE_FLAG(1371) == 0) {
        group 0;
        func_802D5830(1);
    10:
        func_802D6420();
        SI_VAR(2) = SI_VAR(0);
        match SI_VAR(2) {
            <= 0 {
                func_802D6954();
                func_802D5830(0);
                AwaitPlayerLeave(0xFFFFFFAB, 85, 28);
                return;
            }
            == 89 {
                SetPlayerAnimation(0x60006);
                sleep 5;
                RemoveKeyItemAt(SI_VAR(1));
                MakeItemEntity(89, 0xFFFFFFAD, 0, 87, 1, 0);
                SI_MAP_VAR(11) = SI_VAR(0);
                SetPlayerAnimation(0x10000);
                sleep 20;
            }
            else {
                match SI_AREA_FLAG(17) {
                    == 0 {
                        ShowMessageAtWorldPos(0x110008, 0, 10, 0xFFFFFF38);
                        SI_AREA_FLAG(17) = 1;
                    }
                    else {
                        ShowMessageAtWorldPos(0x110009, 0, 10, 0xFFFFFF38);
                    }
                }
            }
        }
        DisablePlayerInput(0);
        DisablePlayerPhysics(0);
        if (SI_VAR(2) != 89) {
            goto 10;
        }
        SI_SAVE_FLAG(1371) = 1;
    }
    if (SI_SAVE_FLAG(1372) == 0) {
        group 0;
        func_802D5830(1);
    20:
        func_802D6420();
        SI_VAR(2) = SI_VAR(0);
        match SI_VAR(2) {
            <= 0 {
                func_802D6954();
                func_802D5830(0);
                AwaitPlayerLeave(0xFFFFFFAB, 85, 28);
                return;
            }
            == 88 {
                RemoveItemEntity(SI_MAP_VAR(11));
                sleep 5;
                SetPlayerAnimation(0x60006);
                sleep 5;
                RemoveKeyItemAt(SI_VAR(1));
                MakeItemEntity(88, 0xFFFFFFAD, 0, 87, 1, 0);
                SI_MAP_VAR(11) = SI_VAR(0);
                SetPlayerAnimation(0x10000);
                sleep 20;
            }
            else {
                match SI_AREA_FLAG(17) {
                    == 0 {
                        ShowMessageAtWorldPos(0x110008, 0, 10, 0xFFFFFF38);
                        SI_AREA_FLAG(17) = 1;
                    }
                    else {
                        ShowMessageAtWorldPos(0x110009, 0, 10, 0xFFFFFF38);
                    }
                }
            }
        }
        DisablePlayerInput(0);
        DisablePlayerPhysics(0);
        if (SI_VAR(2) != 88) {
            goto 20;
        }
        SI_SAVE_FLAG(1372) = 1;
    }
    group 0;
    func_802D5830(1);
30:
    func_802D6420();
    SI_VAR(2) = SI_VAR(0);
    match SI_VAR(2) {
        <= 0 {
            func_802D6954();
            func_802D5830(0);
            AwaitPlayerLeave(0xFFFFFFAB, 85, 28);
            return;
        }
        == 90 {
            RemoveItemEntity(SI_MAP_VAR(11));
            sleep 5;
            SetPlayerAnimation(0x60006);
            sleep 5;
            RemoveKeyItemAt(SI_VAR(1));
            func_8024137C_C9F29C();
            MakeItemEntity(90, 0xFFFFFFAD, 0, 87, 1, 0);
            SI_MAP_VAR(11) = SI_VAR(0);
            SetPlayerAnimation(0x10000);
            sleep 30;
            RemoveItemEntity(SI_MAP_VAR(11));
            sleep 30;
            ModifyColliderFlags(0, 47, 0x7FFFFE00);
            PlayerMoveTo(0xFFFFFFC4, 30, 20);
            ModifyColliderFlags(1, 47, 0x7FFFFE00);
            ModifyColliderFlags(1, 48, 0x7FFFFE00);
            InterpPlayerYaw(200, 0);
            func_802CF56C(2);
            sleep 60;
            FadeInMusic(1, 123, 0, 3000, 0, 127);
            FadeOutMusic(0, 3000);
            UseSettingsFrom(0, 0xFFFFFFAB, 0, 75);
            SetPanTarget(0, 0xFFFFFFAB, 0, 75);
            SetCamSpeed(0, 1.0);
            SetCamPitch(0, 17.0, -6.0);
            SetCamDistance(0, 250);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            await N(script_80247FAC);
        }
    }
    if (SI_VAR(2) != 90) {
        goto 30;
    }
});

Script N(script_80248D3C) = SCRIPT({
0:
    IsPlayerWithin(0xFFFFFFAB, 85, 20, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    } else {
        func_802D249C(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            sleep 1;
            goto 0;
        }
        GetCurrentPartner(SI_VAR(0));
        if (SI_VAR(0) != 0) {
            return;
        }
    }
    func_8024139C_C9F2BC();
    await N(script_802485A8);
    func_802413BC_C9F2DC();
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80248E30) = {
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 55),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(0), 54),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1371), 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1372), 0),
                SI_CMD(ScriptOpcode_CALL, MakeItemEntity, 89, 0xFFFFFFAD, 0, 87, 1, 0),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, MakeItemEntity, 88, 0xFFFFFFAD, 0, 87, 1, 0),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(11), SI_VAR(0)),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80248D3C), 0x10, 0, N(itemList_80248598), 0, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80248F48) = SCRIPT({
    bind N(script_802477EC) to TriggerFlag_FLOOR_TOUCH 46;
    EnableGroup(121, 1);
    EnableGroup(80, 1);
    match SI_SAVE_VAR(0) {
        == 54 {
            SI_VAR(0) = 0xFFFFFD44;
            spawn N(script_80246850);
            spawn N(script_80247488);
            SI_VAR(0) = 0;
            spawn N(script_80247588);
            SI_VAR(0) = 0;
            spawn N(script_802476F4);
            ModifyColliderFlags(0, 46, 0x7FFFFE00);
            ModifyColliderFlags(0, 47, 0x7FFFFE00);
        }
        >= 55 {
            SI_VAR(0) = 1;
            spawn N(script_80247588);
            SI_VAR(0) = 1;
            spawn N(script_802476F4);
        }
        else {
            SI_VAR(0) = 0xFFFFFD44;
            spawn N(script_80246850);
            spawn N(script_80247488);
            SI_VAR(0) = 0;
            spawn N(script_80247588);
            SI_VAR(0) = 0;
            spawn N(script_802476F4);
            ModifyColliderFlags(0, 46, 0x7FFFFE00);
            ModifyColliderFlags(0, 47, 0x7FFFFE00);
        }
    }
});

s32 pad_009128[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) < 96) {
        MakeEntity(D_802E9A18, 110, 60, 0xFFFFFF9C, 0, 0x80000000);
    }
});

s32 pad_00917C[] = {
    0x00000000,
};

// rodata: D_80249180_CA70A0

// rodata: D_80249188_CA70A8

// rodata: D_80249190_CA70B0

// rodata: D_80249198_CA70B8

// rodata: D_802491A0_CA70C0

// rodata: D_802491A8_CA70C8

// rodata: D_802491B0_CA70D0

s32 pad_0091B8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802491C0_CA70E0

// rodata: D_802491C8_CA70E8

// rodata: jtbl_802491D0_CA70F0

// rodata: D_80249360_CA7280

s32 pad_009368[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80249370_CA7290

// rodata: D_80249378_CA7298
