#include "jan_22.h"

s32 pad_00101C[1];
s32 pad_00171C[1];
s32 pad_00195C[1];
Script N(script_802419E0);
Script N(script_ExitWalk_80241BC0);
Script N(script_ExitWalk_80241C1C);
Script N(script_ExitWalk_80241C78);
Script N(script_80241CD4);
Script N(script_80241D38);
Script N(script_80241DF0);
Script N(script_80241E94);
Script N(script_80241F38);
s32 N(lavaResetList_80241FDC)[20];
Script N(script_EnterWalk_8024202C);
Script N(main);
Script N(script_NpcAI_8024243C);
Script N(script_80242488);
s32 unk_missing_80242538[22];
s32 N(unk_802425BC)[1];
Script N(script_802425C0);
Script N(script_802425F0);
Script N(script_80242620);
Script N(script_80242688);
Script N(script_80242CE4);
Script N(script_80242E08);
Script N(script_80242EA4);
Script N(script_Interact_80243118);
Script N(script_Idle_80243290);
Script N(script_Init_802432F0);
Script N(script_Interact_802433A0);
Script N(script_80243420);
Script N(script_802434BC);
Script N(script_Idle_8024364C);
Script N(script_Init_80244A5C);
s32 N(vectorList_80244BAC)[9];
Script N(script_80244BD0);
Script N(script_8024511C);
Script N(script_Idle_80245208);
Script N(script_Idle_802458B0);
Script N(script_Idle_80245B14);
Script N(script_Interact_802460B0);
Script N(script_Hit_80246474);
Script N(script_Init_802465E0);
Script N(script_Init_80246694);
Script N(script_80246780);
Script N(script_802467DC);
Script N(script_Init_80246838);
Script N(script_Idle_8024687C);
Script N(script_Defeat_80246B7C);
Script N(script_Init_80246E38);
Script N(script_80246EB4);
Script N(script_80246FA8);
Script N(script_802470F8);
s32 N(vectorList_80247158)[12];
Script N(script_Idle_80247188);
Script N(script_Init_80247D9C);
StaticNpc N(npcGroup_80247F2C)[4];
StaticNpc N(npcGroup_802486EC)[1];
StaticNpc N(npcGroup_802488DC)[6];
StaticNpc N(npcGroup_8024947C)[1];
NpcGroupList N(npcGroupList_8024966C);
NpcGroupList N(npcGroupList_8024969C);
Script N(script_MakeEntities);
s32 pad_009788[2];
s32 N(unk_80249790)[6];
s32 N(unk_802497A8)[6];
Script N(script_802497C0);
Script N(script_80249828);
Script N(script_80249EC4);
s32 pad_00A07C[1];
Script N(script_SearchBush_8024A080);
Script N(script_ShakeTree_8024A3E0);
Script N(script_8024A9E4);
Script N(script_8024ABC4);
Script N(script_8024AC34);
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
s32 N(searchBushEvent_Bush5)[4];
s32 N(searchBushEvent_Bush6)[4];
Script N(script_8024ADD8);
Script N(script_SearchBush_8024AEF0);
Script N(script_ShakeTree_8024B250);
s32 unk_missing_8024B874[4];
Script N(script_8024B8DC);
s32 pad_00B97C[1];
const char D_8024B980_B8FB00[8]; // "jan_03"
const char D_8024B988_B8FB08[8]; // "jan_16"
const char D_8024B990_B8FB10[8]; // "kzn_01"
s32 pad_00B998[2];
s32 pad_00BB48[2];

// text: func_80240000_B84180

// text: func_80240158_B842D8

// text: N(UnkNpcAIFunc1)

// text: func_802404C0_B84640

// text: func_8024067C_B847FC

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024081C_B8499C

// text: func_8024094C_B84ACC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240AD4_B84C54

// text: func_80240B94_B84D14

// text: func_80240E90_B85010

// text: func_80240F44_B850C4

// text: func_80240FA8_B85128

// text: func_80240FC4_B85144

// text: func_80240FE0_B85160

s32 pad_00101C[] = {
    0x00000000,
};

// text: func_80241020_B851A0

// text: func_802410C4_B85244

// text: func_80241168_B852E8

// text: func_802412E0_B85460

// text: func_802413D0_B85550

// text: func_80241440_B855C0

// text: func_8024160C_B8578C

// text: func_80241668_B857E8

s32 pad_00171C[] = {
    0x00000000,
};

// text: func_80241720_B858A0

// text: func_80241790_B85910

s32 pad_00195C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -480.0f, 0.0f, 0.0f, 90.0f },
    { -190.0f, 0.0f, -130.0f, 180.0f },
    { 1200.0f, 90.0f, 0.0f, 270.0f },
    { 1200.0f, 90.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900EF,
};

Script N(script_802419E0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SetMusicTrack(0, 120, 1, 8);
        spawn {
            loop {
                sleep 1;
                if (SI_SAVE_VAR(0) >= 39) {
                    break;
                }
            }
            SetMusicTrack(0, 37, 0, 8);
        }
    } else {
        match SI_SAVE_VAR(0) {
            22..23
            if (SI_VAR(0) != 1) {
                SetMusicTrack(0, 40, 0, 8);
                SI_AREA_FLAG(3) = 0;
            }
            spawn {
                loop {
                    sleep 1;
                    if (SI_SAVE_VAR(0) >= 24) {
                        break;
                    }
                }
                SetMusicTrack(0, 37, 0, 8);
                SI_AREA_FLAG(3) = 0;
            } else {
                SetMusicTrack(0, 37, 0, 8);
            }
        }
    }
    PlayAmbientSounds(3);
});

Script N(script_ExitWalk_80241BC0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_8024B980_B8FB00, 2);
    sleep 100;
});

Script N(script_ExitWalk_80241C1C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_8024B988_B8FB08, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241C78) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_8024B990_B8FB10, 0);
    sleep 100;
});

Script N(script_80241CD4) = SCRIPT({
    bind N(script_ExitWalk_80241BC0) to 0x80000 0;
    bind N(script_ExitWalk_80241C1C) to 0x80000 4;
    bind N(script_ExitWalk_80241C78) to 0x80000 8;
});

Script N(script_80241D38) = SCRIPT({
    group 0;
    SetTexPanner(123, 1);
    SetTexPanner(148, 1);
    SetTexPanner(156, 1);
    SI_VAR(0) = 0;
10:
    SetTexPanOffset(1, 0, 0, SI_VAR(0));
    SI_VAR(0) -= 300;
    sleep 1;
    goto 10;
});

Script N(script_80241DF0) = SCRIPT({
    group 0;
    SetTexPanner(150, 2);
    SetTexPanner(152, 2);
    SI_VAR(0) = 0;
10:
    SetTexPanOffset(2, 0, 0, SI_VAR(0));
    SI_VAR(0) -= 300;
    sleep 1;
    goto 10;
});

Script N(script_80241E94) = SCRIPT({
    group 0;
    SetTexPanner(145, 3);
    SetTexPanner(146, 3);
    SI_VAR(0) = 0;
10:
    SetTexPanOffset(3, 0, 0, SI_VAR(0));
    SI_VAR(0) -= 170;
    sleep 1;
    goto 10;
});

Script N(script_80241F38) = SCRIPT({
    group 0;
    SetTexPanner(151, 4);
    SetTexPanner(153, 4);
    SI_VAR(0) = 0;
10:
    SetTexPanOffset(4, 0, 0, SI_VAR(0));
    SI_VAR(0) += 300;
    sleep 1;
    goto 10;
});

s32 N(lavaResetList_80241FDC)[] = {
    0x00000022, 0x443B8000, 0x00000000, 0x42480000, 0x00000011, 0x443B8000, 0x00000000, 0x42480000,
    0x00000018, 0x44700000, 0x00000000, 0x42480000, 0x00000019, 0x44700000, 0x00000000, 0x42480000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_EnterWalk_8024202C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 24) {
        SetGroupEnabled(68, 0);
        SetGroupEnabled(118, 0);
        SetGroupEnabled(73, 0);
        ModifyColliderFlags(0, 40, 0x7FFFFE00);
        ModifyColliderFlags(0, 33, 0x7FFFFE00);
        ModifyColliderFlags(0, 52, 0x7FFFFE00);
    }
    if (SI_SAVE_VAR(0) >= 23) {
        ModifyColliderFlags(0, 12, 0x7FFFFE00);
        await N(script_8024ABC4);
    }
    match SI_SAVE_VAR(0) {
        == 22 {
            spawn {
                spawn N(script_80244BD0);
                sleep 200;
                spawn N(script_80241CD4);
            }
        }
        == 38 {
            spawn N(script_80241CD4);
        } else {
            SI_VAR(0) = N(script_80241CD4);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    ModifyColliderFlags(0, 22, 0x7FFFFE00);
    match SI_SAVE_VAR(0) {
        < 22 {
            MakeNpcs(0, N(npcGroupList_8024966C));
        }
        == 38 {
            MakeNpcs(0, N(npcGroupList_8024966C));
        } else {
            MakeNpcs(0, N(npcGroupList_8024969C));
        }
    }
    await N(script_MakeEntities);
    spawn N(script_80249EC4);
    spawn N(script_80242CE4);
    spawn N(script_8024B8DC);
    spawn N(script_8024ADD8);
    ModifyColliderFlags(3, 53, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80241FDC));
    }
    spawn N(script_80241D38);
    spawn N(script_80241DF0);
    spawn N(script_80241E94);
    spawn N(script_80241F38);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    spawn N(script_EnterWalk_8024202C);
    if (SI_SAVE_VAR(0) == 38) {
        sleep 65;
    }
    await N(script_802419E0);
});

NpcSettings N(npcSettings_802423E0) = {
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
    .level = 0x63,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_8024240C) = {
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

Script N(script_NpcAI_8024243C) = SCRIPT({
    func_80240B94_B84D14(N(aISettings_8024240C));
});

NpcSettings N(npcSettings_8024245C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024243C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_80242488) = SCRIPT({
    SetNpcScale(-1, 1.5, 1.5, 1.5);
});

NpcSettings N(npcSettings_802424B4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x62,
    .radius = 0x50,
    .otherAI = &N(script_80242488),
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

NpcSettings N(npcSettings_802424E0) = {
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

NpcSettings N(npcSettings_8024250C) = {
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

s32 unk_missing_80242538[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80242590) = {
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

s32 N(unk_802425BC)[] = {
    0x00000000,
};

Script N(script_802425C0) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802425F0) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_80242620) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80242688) = SCRIPT({
    GetCurrentPartner(SI_VAR(9));
    if (SI_VAR(9) == 2) {
        return;
    }
    if (SI_VAR(9) == 3) {
        return;
    }
    if (SI_VAR(9) == 8) {
        return;
    }
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    IsPlayerWithin(200, 0, 25, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    sleep 7;
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcFlagBits(0xFFFFFFFC, 320, 1);
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_VAR(5) += 0xFFFFFFFB;
        SetNpcJumpscale(0xFFFFFFFC, 0.5);
        NpcJump0(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10);
        EnableNpcShadow(0xFFFFFFFC, 0);
    }
    SI_VAR(7) = spawn N(script_80242620);
    SetNpcAnimation(0xFFFFFFFC, 262);
    PlaySoundAtModel(67, 390, 0);
    MakeLerp(0, 170, 60, 0);
    loop {
        UpdateLerp();
        SI_VAR(6) = SI_VAR(4);
        SI_VAR(6) += SI_VAR(0);
        SetPlayerPos(SI_VAR(3), SI_VAR(6), SI_VAR(5));
        GetCurrentPartner(SI_VAR(8));
        if (SI_VAR(8) == 0) {
            SI_VAR(6) += 5;
            SI_VAR(5) += 0xFFFFFFFB;
            SetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(6), SI_VAR(5));
            SI_VAR(6) += 0xFFFFFFFB;
            SI_VAR(5) += 5;
        }
        SI_VAR(2) = 200.0;
        SI_VAR(2) -= f SI_VAR(0);
        SI_VAR(2) /= 200.0;
        ScaleModel(64, 1, SI_VAR(2), 1);
        TranslateModel(61, 0, SI_VAR(0), 0);
        TranslateModel(62, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    kill SI_VAR(7);
    DisablePlayerPhysics(0);
    sleep 5;
    spawn {
        sleep 15;
        PlaySoundAtModel(67, 390, 0);
        MakeLerp(170, 0, 60, 5);
        loop {
            UpdateLerp();
            SI_VAR(2) = 200.0;
            SI_VAR(2) -= f SI_VAR(0);
            SI_VAR(2) /= 200.0;
            ScaleModel(64, 1, SI_VAR(2), 1);
            TranslateModel(61, 0, SI_VAR(0), 0);
            TranslateModel(62, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        SetPlayerJumpscale(1.0);
        PlayerJump(270, 205, 15, 20);
        HidePlayerShadow(0);
        SetPlayerSpeed(3.0);
        PlayerMoveTo(285, 15, 0);
    }
    PartnerIsFlying(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        sleep 10;
        SetNpcJumpscale(0xFFFFFFFC, 1.0);
        NpcJump0(0xFFFFFFFC, 260, 205, 15, 15);
    }
    EnableNpcShadow(0xFFFFFFFC, 1);
    SetNpcFlagBits(0xFFFFFFFC, 64, 0);
    EnablePartnerAI();
    sleep 5;
    DisablePlayerInput(0);
});

Script N(script_80242CE4) = SCRIPT({
    bind N(script_80242688) to TriggerFlag_FLOOR_TOUCH 30;
    if (SI_SAVE_VAR(0) < 24) {
        ModifyColliderFlags(0, 30, 0x7FFFFE00);
        ScaleModel(64, 1, 0.15625, 1);
        TranslateModel(61, 0, 178, 0);
        TranslateModel(62, 0, 178, 0);
    } else {
        ModifyColliderFlags(1, 30, 0x7FFFFE00);
        ScaleModel(64, 1, 1, 1);
        TranslateModel(61, 0, 0, 0);
        TranslateModel(62, 0, 0, 0);
    }
});

Script N(script_80242E08) = SCRIPT({
    SetNpcPos(6, 177, 0, 0xFFFFFFF6);
    SetNpcPos(7, 127, 0, 5);
    SetNpcPos(8, 152, 0, 0);
    SetNpcPos(9, 102, 0, 0);
    SetNpcPos(10, 77, 0, 0xFFFFFFF6);
});

Script N(script_80242EA4) = SCRIPT({
    parallel {
        PlaySoundAtNpc(7, 678, 0);
        SetNpcFlagBits(7, 256, 1);
        SetNpcAnimation(7, 0x980006);
        NpcJump0(7, 271, 325, 0xFFFFFFEF, 30);
    }
    parallel {
        sleep 3;
        PlaySoundAtNpc(10, 679, 0);
        SetNpcFlagBits(10, 256, 1);
        SetNpcAnimation(10, 0x980006);
        NpcJump0(10, 400, 215, 0xFFFFFFE9, 30);
    }
    parallel {
        sleep 6;
        PlaySoundAtNpc(6, 678, 0);
        SetNpcFlagBits(6, 256, 1);
        SetNpcAnimation(6, 0x980006);
        NpcJump0(6, 208, 335, 0xFFFFFFEF, 30);
    }
    parallel {
        sleep 9;
        PlaySoundAtNpc(8, 679, 0);
        SetNpcFlagBits(8, 256, 1);
        SetNpcAnimation(8, 0x980006);
        NpcJump0(8, 327, 200, 0xFFFFFFF8, 30);
    }
    sleep 30;
    PlaySoundAtNpc(9, 678, 0);
    SetNpcFlagBits(9, 256, 1);
    SetNpcAnimation(9, 0x980006);
    NpcJump0(9, 222, 284, 0xFFFFFFF3, 15);
});

Script N(script_Interact_80243118) = SCRIPT({
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 15.0, -8.5);
    SetCamSpeed(0, 1.5);
    PanToTarget(0, 0, 1);
    func_80240FA8_B85128();
    WaitForCam(0, 1.0);
    sleep 10;
    SetNpcFlagBits(5, 256, 1);
    NpcFacePlayer(-1, 0);
    SpeakToPlayer(-1, 0xC40009, 0xC40002, 0, 0x1000C7);
    sleep 10;
    SpeakToPlayer(-1, 0xC40009, 0xC40002, 0, 0x1000C8);
    SetNpcVar(6, 0, 10);
    BindNpcInteract(-1, 0);
});

Script N(script_Idle_80243290) = SCRIPT({
0:
    if (SI_SAVE_VAR(0) < 23) {
        sleep 1;
        goto 0;
    }
    BindNpcInteract(-1, N(script_Interact_80243118));
});

Script N(script_Init_802432F0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 22 {
            BindNpcIdle(-1, N(script_Idle_80243290));
        }
        == 23 {
            SetNpcPos(-1, 125, 0, 0xFFFFFFD8);
            SetNpcFlagBits(-1, 256, 0);
            BindNpcInteract(-1, N(script_Interact_80243118));
        } else {
            RemoveNpc(-1);
        }
    }
});

Script N(script_Interact_802433A0) = SCRIPT({
    if (SI_SAVE_FLAG(1274) == 0) {
        SpeakToPlayer(6, 0x980005, 0x980001, 0, 0x1000D2);
        SI_SAVE_FLAG(1274) = 1;
    } else {
        SpeakToPlayer(6, 0x980005, 0x980001, 0, 0x1000D3);
    }
});

Script N(script_80243420) = SCRIPT({
    sleep 45;
    NpcJump0(SI_VAR(0), 30, 0, 0xFFFFFFF1, 10);
    SetNpcAnimation(SI_VAR(0), 0x980003);
    SetNpcSpeed(SI_VAR(0), 3.0);
    NpcMoveTo(SI_VAR(0), 0xFFFFFF88, 0, 0);
    SetNpcPos(SI_VAR(0), 0, 0xFFFFFC18, 0);
});

Script N(script_802434BC) = SCRIPT({
    PlaySoundAt(0x8000001E, 0, 270, 130, 0);
    loop {
        ShakeCam(0, 0, 3, 1.0);
        sleep 30;
        ShakeCam(0, 0, 8, 1.0);
        RandInt(4, SI_VAR(0));
        SI_VAR(0) += 1;
        PlayEffect(24, 3, 290, 155, 0, 240, 0, 0, SI_VAR(0), 0, 0, 0, 0, 0);
        sleep 10;
        PlayEffect(24, 3, 275, 150, 0, 240, 0, 0, 3, 0, 0, 0, 0, 0);
        ShakeCam(0, 0, 2, 1.0);
        sleep 4;
        ShakeCam(0, 0, 2, 1.0);
        sleep 4;
    }
});

Script N(script_Idle_8024364C) = SCRIPT({
0:
    if (SI_SAVE_VAR(0) < 23) {
        sleep 1;
        goto 0;
    }
    ModifyColliderFlags(1, 22, 0x7FFFFE00);
1:
    NpcFacePlayer(6, 0);
    NpcFacePlayer(7, 0);
    NpcFacePlayer(8, 0);
    NpcFacePlayer(9, 0);
    NpcFacePlayer(10, 0);
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 1;
    }
    ModifyColliderFlags(0, 22, 0x7FFFFE00);
2:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 10 {
            DisablePlayerInput(1);
            InterpNpcYaw(6, 90, 0);
            InterpNpcYaw(7, 90, 0);
            InterpNpcYaw(8, 90, 0);
            InterpNpcYaw(9, 90, 0);
            InterpNpcYaw(10, 90, 0);
            sleep 10;
            SI_VAR(9) = spawn N(script_80242EA4);
            sleep 40;
            kill SI_VAR(9);
            sleep 10;
            SetNpcPos(6, 0, 0xFFFFFC18, 0);
            SetNpcPos(7, 0, 0xFFFFFC18, 0);
            SetNpcPos(8, 0, 0xFFFFFC18, 0);
            SetNpcPos(9, 0, 0xFFFFFC18, 0);
            SetNpcPos(10, 0, 0xFFFFFC18, 0);
            UseSettingsFrom(0, 300, 250, 150);
            SetPanTarget(0, 300, 250, 150);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            spawn N(script_80242E08);
            sleep 10;
            await N(script_80242EA4);
            SetNpcAnimation(6, 0x980003);
            SetNpcAnimation(7, 0x980003);
            SetNpcAnimation(8, 0x980003);
            SetNpcAnimation(10, 0x980003);
            PlaySoundAtNpc(9, 357, 0);
            ShakeCam(0, 0, 3, 1.0);
            spawn {
                SetNpcJumpscale(6, 3.0);
                GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                NpcJump0(6, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5);
            }
            spawn {
                SetNpcJumpscale(7, 3.0);
                GetNpcPos(7, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                NpcJump0(7, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5);
                InterpNpcYaw(7, 270, 0);
            }
            sleep 3;
            PlaySoundAtNpc(9, 524, 0);
            SetNpcRotation(9, 0, 0, 180);
            SetNpcFlagBits(9, 512, 1);
            InterpNpcYaw(8, 270, 0);
            InterpNpcYaw(10, 270, 0);
            SetNpcYaw(5, 90);
            GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(2) += 80;
            SetPlayerPos(145, 0, SI_VAR(2));
            InterpPlayerYaw(90, 0);
            SetNpcPos(0xFFFFFFFC, 115, 0, SI_VAR(2));
            SetNpcYaw(0xFFFFFFFC, 90);
            sleep 80;
            SetNpcRotation(9, 0, 0, 0);
            SetSelfVar(0, 11);
        }
        == 11 {
            UseSettingsFrom(0, 165, 0, 0);
            SetPanTarget(0, 165, 0, 0);
            SetCamPitch(0, 15.0, -8.5);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            sleep 20;
            SetNpcFlagBits(9, 512, 0);
            NpcMoveTo(9, 260, 0xFFFFFFEC, 0);
            SetNpcRotation(9, 0, 0, 90);
            SetNpcAnimation(9, 0x980003);
            NpcJump0(9, 300, 300, 0xFFFFFFF2, 20);
            SetNpcRotation(9, 0, 0, 0);
            SI_VAR(10) = spawn N(script_802434BC);
            sleep 30;
            SpeakToPlayer(5, 0xC40009, 0xC40002, 0, 0x1000CA);
            sleep 50;
            SetNpcVar(1, 0, 10);
            sleep 140;
11:
            GetNpcVar(1, 0, SI_VAR(0));
            if (SI_VAR(0) != 0) {
                sleep 1;
                goto 11;
            }
            sleep 40;
            StopSound(0x8000001E);
            kill SI_VAR(10);
            SetSelfVar(0, 20);
        }
        == 20 {
            sleep 20;
            SetGroupEnabled(68, 1);
            SetGroupEnabled(118, 1);
            SetGroupEnabled(73, 1);
            ModifyColliderFlags(1, 40, 0x7FFFFE00);
            ModifyColliderFlags(1, 33, 0x7FFFFE00);
            ModifyColliderFlags(1, 52, 0x7FFFFE00);
            SetNpcAnimation(6, 0x980001);
            SetNpcPos(6, 255, 205, 0xFFFFFFE7);
            SetNpcPos(7, 200, 185, 0);
            SetNpcPos(8, 338, 212, 0xFFFFFFEC);
            SetNpcPos(9, 267, 314, 0xFFFFFFF4);
            PlaySoundAtNpc(10, 678, 0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 60;
            NpcJump0(10, SI_VAR(0), 0, 40, 20);
            sleep 10;
            SpeakToPlayer(10, 0x980005, 0x980001, 0, 0x1000CC);
            sleep 15;
            SetNpcAnimation(6, 0x980001);
            SetNpcAnimation(7, 0x980001);
            SetNpcAnimation(8, 0x980001);
            SetNpcAnimation(9, 0x980001);
            UseSettingsFrom(0, 300, 250, 150);
            SetPanTarget(0, 300, 250, 150);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            sleep 15;
            PlaySoundAtNpc(10, 678, 0);
            SetNpcPos(10, 350, 0, 100);
            SetNpcAnimation(10, 0x980006);
            NpcJump0(10, 400, 215, 0xFFFFFFE9, 20);
            SpeakToPlayer(10, 0x980005, 0x980001, 0, 0x1000CD);
            spawn {
                PlaySoundAtModel(67, 390, 0);
                MakeLerp(170, 0, 60, 5);
                loop {
                    UpdateLerp();
                    SI_VAR(3) = SI_VAR(0);
                    SI_VAR(3) += 9;
                    SetNpcPos(7, 200, SI_VAR(3), 0);
                    SI_VAR(2) = 200.0;
                    SI_VAR(2) -= f SI_VAR(0);
                    SI_VAR(2) /= 200.0;
                    ScaleModel(64, 1, SI_VAR(2), 1);
                    TranslateModel(61, 0, SI_VAR(0), 0);
                    TranslateModel(62, 0, SI_VAR(0), 0);
                    sleep 1;
                    if (SI_VAR(1) == 0) {
                        break;
                    }
                }
                SetSelfVar(0, 22);
            }
            sleep 20;
            UseSettingsFrom(0, 165, 0, 0);
            SetPanTarget(0, 165, 0, 0);
            SetCamPitch(0, 15.0, -8.5);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            sleep 10;
            SpeakToPlayer(5, 0xC40009, 0xC40002, 0, 0x1000CE);
            loop {
                sleep 1;
                GetSelfVar(0, SI_VAR(0));
                if (SI_VAR(0) == 22) {
                    break;
                }
            }
            PlaySoundAtNpc(10, 678, 0);
            NpcJump0(10, 150, 0, 20, 15);
            SetNpcAnimation(10, 0x980003);
            spawn {
                NpcMoveTo(10, 65, 25, 30);
                SetNpcAnimation(10, 0x980001);
                InterpNpcYaw(10, 90, 0);
            }
            PlaySoundAtNpc(9, 679, 0);
            NpcJump0(9, 150, 0, 20, 15);
            SetNpcAnimation(9, 0x980003);
            spawn {
                NpcMoveTo(9, 80, 0xFFFFFFF6, 25);
                SetNpcAnimation(9, 0x980001);
                InterpNpcYaw(9, 90, 0);
            }
            PlaySoundAtNpc(8, 678, 0);
            NpcJump0(8, 150, 0, 20, 15);
            SetNpcAnimation(8, 0x980003);
            spawn {
                NpcMoveTo(8, 95, 25, 20);
                SetNpcAnimation(8, 0x980001);
                InterpNpcYaw(8, 90, 0);
            }
            PlaySoundAtNpc(7, 679, 0);
            NpcJump0(7, 150, 0, 20, 15);
            SetNpcAnimation(7, 0x980003);
            NpcMoveTo(7, 110, 0xFFFFFFF6, 15);
            SetNpcAnimation(7, 0x980001);
            InterpNpcYaw(7, 90, 0);
            SetNpcVar(1, 0, 20);
            SetSelfVar(0, 25);
        }
        == 25 {
            GetNpcVar(1, 0, SI_VAR(0));
            if (SI_VAR(0) == -1) {
                SpeakToPlayer(5, 0xC40009, 0xC40002, 0, 0x1000D0);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetCamDistance(0, 350);
                SetCamPitch(0, 15.0, -7.0);
                SetCamSpeed(0, 10.0);
                PanToTarget(0, 0, 1);
                SI_VAR(0) = 15;
                SI_VAR(1) = 1;
                await N(script_802425C0);
                AddKeyItem(15);
                sleep 20;
                SetCamDistance(0, 400);
                SetCamPitch(0, 20.0, -11.5);
                SetCamSpeed(0, 3.5);
                PanToTarget(0, 0, 1);
                WaitForCam(0, 1.0);
                SpeakToPlayer(5, 0xC40009, 0xC40002, 0, 0x1000D1);
                SI_VAR(0) = 7;
                spawn N(script_80243420);
                spawn {
                    sleep 10;
                    SI_VAR(0) = 8;
                    spawn N(script_80243420);
                }
                spawn {
                    sleep 20;
                    SI_VAR(0) = 9;
                    spawn N(script_80243420);
                }
                spawn {
                    sleep 30;
                    SI_VAR(0) = 10;
                    spawn N(script_80243420);
                }
                SetNpcAnimation(5, 0xC40004);
                SetNpcSpeed(5, 3.0);
                NpcMoveTo(5, 0xFFFFFF88, 0, 0);
                SetNpcPos(5, 0, 0xFFFFFC18, 0);
                sleep 40;
                BindNpcInteract(6, N(script_Interact_802433A0));
                SetNpcFlagBits(6, 256, 0);
                func_80240FC4_B85144();
                ResetCam(0, 1.5);
                SI_SAVE_VAR(0) = 24;
                DisablePlayerInput(0);
                return;
            }
        }
    }
    sleep 1;
    goto 2;
});

Script N(script_Init_80244A5C) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 22 {
            BindNpcIdle(-1, N(script_Idle_8024364C));
        }
        == 23 {
            BindNpcIdle(-1, N(script_Idle_8024364C));
            spawn N(script_80242E08);
        }
        24..37
        BindNpcInteract(-1, N(script_Interact_802433A0));
        SetNpcPos(6, 260, 205, 0xFFFFFFE7);
        SetNpcFlagBits(6, 256, 0);
        goto 30;
        else {
            ModifyColliderFlags(0, 39, 0x7FFFFE00);
            RemoveNpc(6);
30:
            RemoveNpc(7);
            RemoveNpc(8);
            RemoveNpc(9);
            RemoveNpc(10);
        }
    }
});

s32 N(vectorList_80244BAC)[] = {
    0xC33E0000, 0x00000000, 0xC3480000, 0xC3390000, 0x00000000, 0xC2BE0000, 0xC3340000, 0x00000000,
    0x41200000,
};

Script N(script_80244BD0) = SCRIPT({
    DisablePlayerInput(1);
    SetNpcPos(5, 0xFFFFFF38, 0, 0xFFFFFF56);
    InterpPlayerYaw(90, 0);
    SetPlayerPos(0xFFFFFF42, 0, 0xFFFFFF38);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFF42, 0, 0xFFFFFF2E);
    await N(script_8024AC34);
    SetNpcAnimation(5, 0xC40004);
    SetNpcSpeed(5, 4.0);
    NpcMoveTo(5, 0xFFFFFF4C, 0xFFFFFFE2, 0);
    spawn {
        NpcMoveTo(5, 125, 0xFFFFFFD8, 0);
        SetNpcAnimation(5, 0xC40002);
        SetNpcFlagBits(5, 256, 0);
        InterpNpcYaw(5, 270, 0);
    }
    sleep 15;
    SetPlayerAnimation(0x10005);
    LoadPath(45, N(vectorList_80244BAC), 3, 0);
0:
    GetNextPathPos();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SetPlayerAnimation(0x10002);
    spawn {
        SetNpcPos(6, 0xFFFFFF38, 0, 0xFFFFFF42);
        SetNpcAnimation(6, 0x980003);
        SetNpcSpeed(6, 6.0);
        NpcMoveTo(6, 0xFFFFFF6A, 0xFFFFFFF6, 0);
        NpcMoveTo(6, 177, 0xFFFFFFF6, 0);
        SetNpcAnimation(6, 0x980001);
    }
    spawn {
        sleep 15;
        SetNpcPos(7, 0xFFFFFF38, 0, 0xFFFFFF1A);
        SetNpcAnimation(7, 0x980003);
        SetNpcSpeed(7, 6.0);
        NpcMoveTo(7, 0xFFFFFF6A, 0xFFFFFFF6, 0);
        NpcMoveTo(7, 152, 0, 0);
        SetNpcAnimation(7, 0x980001);
    }
    spawn {
        sleep 30;
        SetNpcPos(8, 0xFFFFFF38, 0, 0xFFFFFF1A);
        SetNpcAnimation(8, 0x980003);
        SetNpcSpeed(8, 6.0);
        NpcMoveTo(8, 0xFFFFFF6A, 0xFFFFFFF6, 0);
        NpcMoveTo(8, 127, 5, 0);
        SetNpcAnimation(8, 0x980001);
    }
    spawn {
        sleep 45;
        SetNpcPos(9, 0xFFFFFF38, 0, 0xFFFFFF1A);
        SetNpcAnimation(9, 0x980003);
        SetNpcSpeed(9, 6.0);
        NpcMoveTo(9, 0xFFFFFF6A, 0xFFFFFFF6, 0);
        NpcMoveTo(9, 102, 0, 0);
        SetNpcAnimation(9, 0x980001);
    }
    sleep 60;
    SetNpcPos(10, 0xFFFFFF38, 0, 0xFFFFFF1A);
    SetNpcAnimation(10, 0x980003);
    SetNpcSpeed(10, 6.0);
    NpcMoveTo(10, 0xFFFFFF6A, 0xFFFFFFF6, 0);
    NpcMoveTo(10, 77, 0xFFFFFFF6, 0);
    SetNpcAnimation(10, 0x980001);
    SI_SAVE_VAR(0) = 23;
    DisablePlayerInput(0);
});

Script N(script_8024511C) = SCRIPT({
    parallel {
        loop {
            PlayerFaceNpc(-1, 0);
            sleep 1;
        }
    }
    SetNpcFlagBits(-1, 320, 1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 150;
    SetNpcAnimation(-1, 0xB60006);
    SetNpcSpeed(-1, 4.0);
    NpcMoveTo(-1, SI_VAR(0), 60, 0);
    SetSelfVar(0, 3);
});

Script N(script_Idle_80245208) = SCRIPT({
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFE48) {
            break;
        }
    }
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1000BC, 320, 60);
    PlaySoundAtPlayer(610, 0);
    ShowEmote(0, 0, 0, 25, 0, 0, 0, 0, 0);
    PlaySoundAtNpc(0xFFFFFFFC, 610, 0);
    ShowEmote(0xFFFFFFFC, 0, 0, 25, 1, 0, 0, 0, 0);
    sleep 25;
    DisablePlayerInput(0);
0:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) > 150) {
                GetCurrentPartner(SI_VAR(0));
                if (SI_VAR(0) != 0) {
                    0x802D2B6C();
                }
                DisablePlayerInput(1);
                0x802D2C14(1);
                SetNpcFlagBits(0xFFFFFFFC, 256, 1);
                RemoveNpc(4);
                SetNpcFlagBits(-1, 320, 1);
                ShowMessageAtScreenPos(0x1000C0, 0, 60);
                InterpPlayerYaw(270, 4);
                SetNpcAnimation(-1, 0xB60007);
                SetNpcSpeed(-1, 5.0);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(3) = SI_VAR(0);
                SI_VAR(3) += 0xFFFFFFCE;
                NpcMoveTo(-1, SI_VAR(3), SI_VAR(2), 0);
                SI_VAR(0) += SI_VAR(3);
                SI_VAR(0) /= 2;
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetCamDistance(0, 300);
                SetCamPitch(0, 17.0, -7.5);
                SetCamSpeed(0, 5.0);
                PanToTarget(0, 0, 1);
                func_80240FA8_B85128();
                WaitForCam(0, 1.0);
                sleep 10;
                SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000C1);
                SetSelfVar(0, 2);
                0x802D2C14(0);
                DisablePlayerInput(0);
            }
        }
        == 1 {
            group 0;
            0x802D5830(1);
            0x802D2C14(1);
            sleep 10;
            if (SI_SAVE_FLAG(1220) == 0) {
                SpeakToPlayer(-1, 0xB60009, 0xB60001, 0, 0x1000BE);
            } else {
                SpeakToPlayer(-1, 0xB60009, 0xB60001, 0, 0x1000BF);
            }
            SetSelfVar(0, 2);
            0x802D2C14(0);
            0x802D5830(0);
            group 11;
            DisablePlayerInput(0);
        }
        == 2 {
            DisablePlayerInput(1);
            spawn {
                GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(0) < 70) {
                    SI_VAR(0) = 70;
                } else {
                    SI_VAR(0) = 300;
                }
                SetNpcAnimation(-1, 0xB60006);
                SetNpcSpeed(-1, 4.5);
                NpcMoveTo(-1, SI_VAR(0), 60, 0);
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
                SI_SAVE_VAR(0) = 13;
            }
            SI_VAR(9) = spawn N(script_8024511C);
            sleep 35;
            func_80240FC4_B85144();
            ResetCam(0, 5.0);
            kill SI_VAR(9);
            SetSelfVar(0, 3);
            DisablePlayerInput(0);
        }
        == 3 {
        }
    }
    if (SI_SAVE_VAR(0) < 13) {
        sleep 1;
        goto 0;
    }
});

Script N(script_Idle_802458B0) = SCRIPT({
0:
    if (SI_SAVE_VAR(0) != 14) {
        sleep 1;
        goto 0;
    }
1:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) > 85) {
        sleep 1;
        goto 1;
    }
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1000C5, 0, 60);
    PlaySoundAtPlayer(610, 0);
    ShowEmote(0, 0, 0, 20, 0, 0, 0, 0, 0);
    PlaySoundAtNpc(0xFFFFFFFC, 610, 0);
    ShowEmote(0xFFFFFFFC, 0, 0, 20, 1, 0, 0, 0, 0);
    sleep 20;
    DisablePlayerInput(0);
2:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) > 0xFFFFFF06) {
        sleep 1;
        goto 2;
    }
    DisablePlayerInput(1);
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000C6);
    SetNpcAnimation(-1, 0xB60006);
    SetNpcSpeed(-1, 5.0);
    NpcMoveTo(-1, 0xFFFFFE2A, 0, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    DisablePlayerInput(0);
});

Script N(script_Idle_80245B14) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 10 {
            DisablePlayerInput(1);
            SetNpcPos(-1, 0xFFFFFF9C, 0, 60);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) -= 60;
            SetNpcAnimation(-1, 0xB60004);
            SetNpcSpeed(-1, 3.0);
            NpcMoveTo(-1, SI_VAR(0), 60, 0);
            SetNpcAnimation(-1, 0xB60001);
            SpeakToPlayer(1, 0xB60008, 0xB60001, 0, 0x1000CB);
            SetSelfVar(0, 0);
            DisablePlayerInput(0);
        }
        == 20 {
            DisablePlayerInput(1);
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000CF);
            spawn {
20:
                PlayerFaceNpc(1, 0);
                GetSelfVar(0, SI_VAR(0));
                if (SI_VAR(0) == 20) {
                    sleep 1;
                    goto 20;
                }
            }
            SetNpcFlagBits(-1, 256, 1);
            SetNpcAnimation(-1, 0xB60004);
            SetNpcSpeed(-1, 3.0);
            NpcMoveTo(-1, 190, 60, 0);
            SetNpcJumpscale(-1, 0.5);
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, 200, 0, 0, 20);
            SetNpcAnimation(-1, 0xB60001);
            SetSelfVar(0, 21);
            PlaySoundAtModel(67, 390, 0);
            GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeLerp(0, 170, 60, 0);
            loop {
                UpdateLerp();
                SI_VAR(6) = SI_VAR(4);
                SI_VAR(6) += SI_VAR(0);
                SetNpcPos(-1, SI_VAR(3), SI_VAR(6), SI_VAR(5));
                SI_VAR(2) = 200.0;
                SI_VAR(2) -= f SI_VAR(0);
                SI_VAR(2) /= 200.0;
                ScaleModel(64, 1, SI_VAR(2), 1);
                TranslateModel(61, 0, SI_VAR(0), 0);
                TranslateModel(62, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            sleep 40;
            PlaySoundAtModel(67, 390, 0);
            MakeLerp(170, 0, 60, 5);
            loop {
                UpdateLerp();
                SI_VAR(2) = 200.0;
                SI_VAR(2) -= f SI_VAR(0);
                SI_VAR(2) /= 200.0;
                ScaleModel(64, 1, SI_VAR(2), 1);
                TranslateModel(61, 0, SI_VAR(0), 0);
                TranslateModel(62, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            SetSelfVar(0, -1);
            DisablePlayerInput(0);
        }
    }
    if (SI_VAR(0) != -1) {
        sleep 1;
        goto 0;
    }
});

Script N(script_Interact_802460B0) = SCRIPT({
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
    sleep 15;
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000C2);
    InterpPlayerYaw(90, 3);
    InterpNpcYaw(-1, 90, 3);
    SetMusicTrack(0, 41, 1, 8);
    UseSettingsFrom(0, 0, 200, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 16.0, -11.5);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 40;
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 5, 0x1000C3);
    sleep 10;
    AdjustCam(0, 90.0, 0, 300, 15, -6.0);
    sleep 10;
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000C4);
    ResetCam(0, 5.0);
    SetNpcFlagBits(-1, 256, 1);
    SetNpcAnimation(-1, 0xB60006);
    SetNpcSpeed(-1, 5.0);
    NpcMoveTo(-1, 500, 0, 0);
    SetNpcFlagBits(-1, 256, 0);
    SetNpcPos(-1, 0xFFFFFED4, 0, 0);
    SetNpcAnimation(-1, 0xB60001);
    InterpNpcYaw(-1, 90, 4);
    SI_SAVE_VAR(0) = 14;
    await N(script_802419E0);
});

Script N(script_Hit_80246474) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_VAR(1) = 1;
        }
        == 2 {
            SI_VAR(1) = 1;
        }
        == 6 {
            SI_VAR(1) = 1;
        } else {
            SI_VAR(1) = 0;
        }
    }
    if (SI_VAR(1) != 0) {
        DisablePlayerInput(1);
        sleep 5;
        SI_AREA_FLAG(10) = 1;
        sleep 10;
        SetNpcAnimation(4, 0x42000D);
        NpcFacePlayer(-1, 0);
        SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x1000BD);
        SI_AREA_FLAG(10) = 0;
        SetNpcAnimation(4, 0x420010);
        DisablePlayerInput(0);
    }
});

Script N(script_Init_802465E0) = SCRIPT({
    SetSelfVar(0, 0);
    SetNpcFlagBits(-1, 256, 0);
    if (SI_SAVE_VAR(0) < 13) {
        SetNpcAnimation(-1, 0xB6000B);
        BindNpcIdle(-1, N(script_Idle_80245208));
        BindNpcHit(-1, N(script_Hit_80246474));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80246694) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {
            SetNpcPos(-1, 750, 0, 30);
            SetSelfVar(0, 0);
            BindNpcInteract(-1, N(script_Interact_802460B0));
            BindNpcIdle(-1, N(script_Idle_802458B0));
        }
        22..23
        BindNpcIdle(-1, N(script_Idle_80245B14));
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        else {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

Script N(script_80246780) = SCRIPT({
    loop {
        GetModelCenter(99);
        SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_802467DC) = SCRIPT({
    loop {
        GetModelCenter(112);
        SetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Init_80246838) = SCRIPT({
    SetNpcFlagBits(-1, 2, 1);
    SetNpcScale(-1, 0.30078125, 1, 0.30078125);
});

Script N(script_Idle_8024687C) = SCRIPT({
    parallel {
        GetNpcPos(-1, SI_VAR(3), SI_VAR(1), SI_VAR(2));
        SI_VAR(4) = SI_VAR(3);
        SI_VAR(3) += 0xFFFFFF38;
        SI_VAR(4) += 200;
        loop {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            match SI_VAR(0) {
                SI_VAR(3)..SI_VAR(4)
                SetSelfEnemyFlagBits(0x1000000, 0);
                SetSelfEnemyFlagBits(0x10000000, 0);
                else {
                    SetSelfEnemyFlagBits(0x1000000, 1);
                    SetSelfEnemyFlagBits(0x10000000, 1);
                }
            }
            sleep 1;
        }
    }
    SI_AREA_FLAG(10) = 0;
    SI_VAR(9) = 0;
    SI_VAR(8) = 2;
    loop {
        if (SI_VAR(9) == 0) {
            spawn {
                sleep 40;
                0x802D7E08(0, 1, 0xFFFFFFD3, 1, 0, 0, 0, 0, 20);
            }
            0x802D7E08(0, 1, 45, 1, 0, 0, 0, 0, 20);
            SI_VAR(9) = 3;
        } else {
            SI_VAR(9) -= 1;
        }
        InterpNpcYaw(0, 270, 2);
        sleep 2;
1:
        if (SI_AREA_FLAG(10) == 0) {
            InterpNpcYaw(0, 90, 2);
            if (SI_VAR(8) == 0) {
                PlaySoundAtNpc(0, 225, 0);
                SI_VAR(8) = 2;
            }
            SI_VAR(8) -= 1;
        } else {
            SI_VAR(8) = 2;
            sleep 1;
            goto 1;
        }
    }
});

Script N(script_Defeat_80246B7C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DisablePlayerInput(1);
            SetNpcYaw(0, 90);
            SetNpcAnimation(0, 0xB60001);
            spawn {
                sleep 30;
                GetNpcPos(0, SI_VAR(3), SI_VAR(1), SI_VAR(2));
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(4) = SI_VAR(0);
                if (SI_VAR(3) < SI_VAR(0)) {
                    InterpPlayerYaw(270, 0);
                    SI_VAR(4) += 0xFFFFFFE2;
                } else {
                    InterpPlayerYaw(90, 0);
                    SI_VAR(4) += 30;
                }
                SI_VAR(0) += SI_VAR(4);
                SI_VAR(0) /= 2;
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetCamDistance(0, 300);
                SetCamPitch(0, 17.0, -7.5);
                SetCamSpeed(0, 3.0);
                func_80240FA8_B85128();
                PanToTarget(0, 0, 1);
                SetNpcFlagBits(0, 320, 1);
                SetNpcAnimation(0, 0xB60006);
                SetNpcSpeed(0, 2.5);
                NpcMoveTo(0, SI_VAR(4), SI_VAR(2), 0);
                SetNpcAnimation(0, 0xB60001);
                NpcFacePlayer(0, 0);
                SetNpcVar(0, 0, 1);
            }
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80246E38) = SCRIPT({
    if (SI_SAVE_VAR(0) < 13) {
        SetNpcAnimation(-1, 0x420010);
        BindNpcIdle(-1, N(script_Idle_8024687C));
        BindNpcDefeat(-1, N(script_Defeat_80246B7C));
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_80246EB4) = SCRIPT({
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

Script N(script_80246FA8) = SCRIPT({
    SI_AREA_FLAG(11) = 0;
    SI_AREA_FLAG(12) = 0;
0:
    GetNpcPos(11, SI_VAR(4), SI_VAR(2), SI_VAR(3));
    SI_VAR(4) += 10;
    SI_VAR(3) -= 5;
    SetNpcPos(1, SI_VAR(4), SI_VAR(2), SI_VAR(3));
    if (SI_AREA_FLAG(11) == 0) {
        SI_VAR(4) -= 20;
        SI_VAR(3) += 10;
        SetPlayerPos(SI_VAR(4), SI_VAR(2), SI_VAR(3));
        SI_VAR(2) += 20;
        SI_VAR(3) += 0xFFFFFFFB;
        SetNpcPos(0xFFFFFFFC, SI_VAR(4), SI_VAR(2), SI_VAR(3));
    }
    if (SI_AREA_FLAG(12) == 0) {
        sleep 1;
        goto 0;
    }
});

Script N(script_802470F8) = SCRIPT({
0:
    PlayerFaceNpc(11, 1);
    NpcFaceNpc(0xFFFFFFFC, 11, 1);
    sleep 1;
    goto 0;
});

s32 N(vectorList_80247158)[] = {
    0x44778000, 0x43520000, 0xC2F00000, 0x44674000, 0x42E60000, 0xC2A00000, 0x44570000, 0x42820000,
    0xC2200000, 0x44354000, 0x41200000, 0x00000000,
};

Script N(script_Idle_80247188) = SCRIPT({
    0x802D2508();
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    spawn N(script_80246FA8);
    sleep 30;
    LoadPath(45, N(vectorList_80247158), 4, 0);
0:
    GetNextPathPos();
    SetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    DisablePlayerPhysics(0);
    SetNpcJumpscale(-1, 0.400390625);
    SI_AREA_FLAG(11) = 1;
    NpcJump0(-1, 625, 20, 0, 25);
    spawn {
        SetNpcSpeed(0xFFFFFFFC, 1.0);
        NpcMoveTo(0xFFFFFFFC, 700, 0, 0);
    }
    SI_AREA_FLAG(12) = 1;
    SetNpcFlagBits(1, 512, 1);
    NpcJump0(-1, 675, 40, 0, 20);
    SI_VAR(9) = spawn N(script_80246EB4);
    sleep 20;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
    SetCamDistance(0, 325);
    SetCamPitch(0, 16.0, -11.5);
    SetCamSpeed(0, 1.5);
    PanToTarget(0, 0, 1);
    SpeakToPlayer(1, 0xB6000A, 0xB60003, 0, 0x1000D4);
    NpcFaceNpc(-1, 1, 1);
    sleep 10;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SpeakToPlayer(-1, 0x160009, 0x160008, 517, 0x1000D5);
    SetNpcAnimation(-1, 0x160001);
    loop {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(3), SI_VAR(2));
        if (SI_VAR(3) == SI_VAR(1)) {
            break;
        }
        sleep 1;
    }
    EndSpeech(-1, 0x160002, 0x160001, 517);
    sleep 10;
    InterpNpcYaw(1, 270, 1);
    sleep 15;
    SpeakToPlayer(1, 0xB6000A, 0xB60003, 5, 0x1000D6);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 30;
    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
    SetCamSpeed(0, 0.5);
    PanToTarget(0, 0, 1);
    InterpNpcYaw(1, 90, 10);
    SI_VAR(8) = spawn N(script_802470F8);
    SetNpcJumpscale(-1, 0.5);
    NpcJump0(-1, 760, 35, 0, 20);
    kill SI_VAR(8);
    sleep 5;
    NpcFacePlayer(-1, 4);
    SpeakToPlayer(-1, 0x160002, 0x160001, 512, 0x1000D7);
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(-1, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    kill SI_VAR(9);
    SetNpcAnimation(-1, 0x160003);
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
    SetNpcAnimation(-1, 0x160001);
    SI_VAR(9) = spawn N(script_80246EB4);
    func_80240FE0_B85160();
    ShowMessageAtScreenPos(0x1D0195, 160, 40);
    sleep 10;
    SpeakToPlayer(-1, 0x160002, 0x160001, 512, 0x1000D8);
    sleep 10;
    SetNpcFlagBits(-1, 0x40000, 1);
    spawn {
        loop 25 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
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
            SetNpcRotation(-1, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = SI_VAR(3);
        SI_VAR(5) += 180;
        MakeLerp(SI_VAR(3), SI_VAR(5), 100, 2);
        loop {
            UpdateLerp();
            SetNpcPos(-1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 15;
        PlaySoundAtNpc(-1, 8261, 0);
    }
    sleep 10;
    SetPlayerAnimation(0x1002A);
    sleep 90;
    ResetCam(0, 3);
    sleep 20;
    SetPlayerAnimation(0x10002);
    kill SI_VAR(9);
    SI_SAVE_VAR(0) = 39;
    sleep 10;
    SpeakToPlayer(1, 0xB6000A, 0xB60003, 0, 0x1000D9);
    sleep 5;
    InterpNpcYaw(1, 270, 4);
    SetNpcAnimation(1, 0xB60005);
    SetNpcSpeed(1, 1.0);
    NpcMoveTo(1, 530, 0, 0);
    SetNpcFlagBits(1, 512, 0);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Init_80247D9C) = SCRIPT({
    if (SI_SAVE_VAR(0) == 38) {
        SetPlayerPos(0, 0xFFFFFC18, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        InterpPlayerYaw(270, 0);
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        InterpNpcYaw(-1, 270, 0);
        SetNpcAnimation(1, 0xB60003);
        UseSettingsFrom(0, 700, 0, 0);
        SetPanTarget(0, 700, 0, 0);
        SetCamDistance(0, 500);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        BindNpcIdle(-1, N(script_Idle_80247188));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80247F2C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802423E0),
        .pos = { -100.0, 0.0, 10.0 },
        .flags = 0x21700100,
        .init = N(script_Init_802465E0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802423E0),
        .pos = { -100.0, 0.0, 10.0 },
        .flags = 0x00600101,
        .init = N(script_Init_80246694),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80242590),
        .pos = { -100.0, 0.0, 10.0 },
        .flags = 0x00200F01,
        .init = N(script_Init_80246838),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242590),
        .pos = { -100.0, 0.0, 10.0 },
        .flags = 0x00200F01,
        .init = N(script_Init_80246838),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_802486EC)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_8024245C),
        .pos = { -70.0, 0.0, 10.0 },
        .flags = 0x00E42D00,
        .init = N(script_Init_80246E38),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000003, 0x00000170, 0x00000000, 0x000000BE, 0x0000019B, 0x00000000, 0x000000BE, 0x0000018C, 0x00000000, 0x000000EF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFFBA, 0x00000000, 0x0000000A, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
    },
};

StaticNpc N(npcGroup_802488DC)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802424B4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400705,
        .init = N(script_Init_802432F0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002,
        },
        .tattle = 0x1A00D0,
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802424E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .init = N(script_Init_80244A5C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00C9,
    },
    {
        .id = 7,
        .settings = &N(npcSettings_802424E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_802424E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CB,
    },
    {
        .id = 9,
        .settings = &N(npcSettings_802424E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CC,
    },
    {
        .id = 10,
        .settings = &N(npcSettings_802424E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CD,
    },
};

StaticNpc N(npcGroup_8024947C)[] = {
    {
        .id = 11,
        .settings = &N(npcSettings_8024250C),
        .pos = { 1075.0, 120.0, 130.0 },
        .flags = 0x00400705,
        .init = N(script_Init_80247D9C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
    },
};

NpcGroupList N(npcGroupList_8024966C) = {
    NPC_GROUP(N(npcGroup_80247F2C), 0x00000000),
    NPC_GROUP(N(npcGroup_802486EC), 0x14000008),
    NPC_GROUP(N(npcGroup_8024947C), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_8024969C) = {
    NPC_GROUP(N(npcGroup_80247F2C), 0x00000000),
    NPC_GROUP(N(npcGroup_802488DC), 0x00000000),
    {},
};

Script N(script_MakeEntities) = SCRIPT({
    spawn {
0:
        if (SI_SAVE_VAR(0) < 24) {
            sleep 1;
            goto 0;
        }
        MakeEntity(0x802EA7E0, 1075, 150, 0xFFFFFFCE, 0, 0x80000000);
    }
    MakeItemEntity(162, 340, 0, 0xFFFFFFB5, 17, SI_SAVE_FLAG(1241));
    MakeEntity(0x802BC7AC, 0xFFFFFF95, 0, 0xFFFFFF9F, 0xFFFFFFF1, 0x80000000);
});

s32 pad_009788[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80249790)[] = {
    0x43FD8000, 0x43CB8000, 0xC20C0000, 0x446D8000, 0x43998000, 0xC20C0000,
};

s32 N(unk_802497A8)[] = {
    0x44730000, 0x43770000, 0x42820000, 0x44048000, 0x43240000, 0x42820000,
};

Script N(script_802497C0) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80249828) = {
    SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(9)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 2),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 3),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 38, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 25, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 3),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802497C0), SI_VAR(9)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 7),
        SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 512, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(4)),
        SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 10),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(5)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 0xFFFFFFFB),
        SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0xFFFFFFFC, SI_FIXED(0.5)),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0xFFFFFFFC, SI_ARRAY(3), SI_VAR(0), SI_VAR(1), 8),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, 0),
    SI_CMD(ScriptOpcode_CALL, PlayerJump, SI_ARRAY(3), SI_ARRAY(4), SI_ARRAY(5), 7),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 10),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x8000D),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x80000019),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, func_80241020_B851A0, SI_MAP_FLAG(10), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_NE, SI_AREA_VAR(0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 1000, 70, 1),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, func_80241168_B852E8, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(1), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(2), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_802412E0_B85460, SI_ARRAY(7), SI_ARRAY(8)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(8), 0x8000),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 8327),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, SetPlayerFlagBits, 0x800000, 1),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 0),
    SI_CMD(ScriptOpcode_CALL, StopSound, 0x80000019),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 38, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 38, 0x8000),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 25, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 64, 0),
    SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(9)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x8000001A),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(11), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(1), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, func_802410C4_B85244, SI_MAP_FLAG(11), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_NE, SI_AREA_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_SET, SI_VAR(2), SI_VAR(0)),
    SI_CMD(ScriptOpcode_DIV, SI_VAR(2), 10),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(0), 0, SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, func_80241168_B852E8, 1),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(1), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(2), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(11), 0),
    SI_CMD(ScriptOpcode_CALL, StopSound, 0x8000001A),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_80249EC4) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 9),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), N(unk_80249790)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 99),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 101),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 507),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 285),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 0xFFFFFFE6),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 2),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(7), 795),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(8), 940),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80249828), TriggerFlag_FLOOR_INTERACT, 34, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80246780)),
    SI_CMD(ScriptOpcode_USE_FLAGS, 9),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), N(unk_802497A8)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 112),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 114),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 974),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 135),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 74),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 3),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(7), 800),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(8), 930),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80249828), TriggerFlag_FLOOR_INTERACT, 24, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802467DC)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 pad_00A07C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_8024A080) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241440_B855C0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241440_B855C0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_8024A3E0) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241440_B855C0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241440_B855C0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241440_B855C0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241440_B855C0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_8024A9E4) = SCRIPT({
    PlaySoundAtCollider(12, 8351, 0);
    SI_VAR(0) = SI_MAP_VAR(0);
    SI_VAR(1) = SI_MAP_VAR(1);
    SI_VAR(6) = 0;
    SI_VAR(7) = 0;
    loop 60 {
        SI_VAR(2) = f SI_MAP_VAR(0);
        SI_VAR(3) = f SI_MAP_VAR(1);
        SI_VAR(2) -= f SI_VAR(0);
        SI_VAR(3) -= f SI_VAR(1);
        SI_VAR(4) = f SI_VAR(2);
        SI_VAR(5) = f SI_VAR(3);
        SI_VAR(4) *= 0.09375;
        SI_VAR(5) *= 0.09375;
        SI_VAR(6) *= 0.80078125;
        SI_VAR(7) *= 0.80078125;
        SI_VAR(6) += f SI_VAR(4);
        SI_VAR(7) += f SI_VAR(5);
        SI_VAR(0) += f SI_VAR(6);
        SI_VAR(1) += f SI_VAR(7);
        TranslateModel(29, SI_MAP_VAR(0), 0, 0);
        TranslateModel(31, SI_MAP_VAR(1), 0, 0);
        func_80241668_B857E8(29, SI_VAR(6));
        func_80241668_B857E8(31, SI_VAR(7));
        sleep 1;
    }
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
});

Script N(script_8024ABC4) = SCRIPT({
    TranslateModel(29, 0xFFFFFFD3, 0, 0);
    TranslateModel(31, 45, 0, 0);
    func_80241668_B857E8(29, 0);
    func_80241668_B857E8(31, 0);
});

Script N(script_8024AC34) = SCRIPT({
    spawn N(script_8024A9E4);
    MakeLerp(0, 45, 30, 5);
    loop {
        UpdateLerp();
        SI_MAP_VAR(1) = f SI_VAR(0);
        SI_MAP_VAR(0) = f SI_MAP_VAR(1);
        SI_MAP_VAR(0) *= -1;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x21 },
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { nanf, 2.1e-44f, 1.26e-43f } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), 0x00000000, N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x23 },
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nanf, 2.2e-44f, 1.89e-43f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x25 },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { nanf, 2.1e-44f, 1.68e-43f } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x27 },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { 6.39e-43f, 2.2e-44f, 1.89e-43f } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x29 },
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { 9.22e-43f, 2.1e-44f, 1.54e-43f } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), 0x00000000, N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x2B },
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { 9.95e-43f, 2.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), 0x00000000, N(treeEffectVectors_Bush6), 0x00000000,
};

Script N(script_8024ADD8) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_8024A080) to TriggerFlag_WALL_INTERACT 59;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_8024A080) to TriggerFlag_WALL_INTERACT 60;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_8024A080) to TriggerFlag_WALL_INTERACT 61;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_8024A080) to TriggerFlag_WALL_INTERACT 62;
    SI_VAR(0) = N(searchBushEvent_Bush5);
    bind N(script_SearchBush_8024A080) to TriggerFlag_WALL_INTERACT 63;
    SI_VAR(0) = N(searchBushEvent_Bush6);
    bind N(script_SearchBush_8024A080) to TriggerFlag_WALL_INTERACT 64;
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_8024AEF0) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241790_B85910, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241790_B85910, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_8024B250) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241790_B85910, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241790_B85910, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241790_B85910, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241790_B85910, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x15 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x16 },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x1,
    .vectors = { { 4.8e-43f, 5.75e-43f, 1.4e-43f } },
};

s32 unk_missing_8024B874[] = {
    0xFFFFFFE2, 0x0000000F, 0xF840606F, 0x00000000,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_8024B898) =  { -385.0f, 0.0f, -39.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x19 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x18 },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_8024B8CC) =  { -328.0f, 0.0f, -123.0f, 0.0f };

Script N(script_8024B8DC) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_8024B250) to TriggerFlag_WALL_HAMMER 18;
    bind N(script_ShakeTree_8024B250) to TriggerFlag_BOMB N(triggerCoord_8024B898);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_8024B250) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_ShakeTree_8024B250) to TriggerFlag_BOMB N(triggerCoord_8024B8CC);
});

s32 pad_00B97C[] = {
    0x00000000,
};

// rodata: D_8024B980_B8FB00

// rodata: D_8024B988_B8FB08

// rodata: D_8024B990_B8FB10

s32 pad_00B998[] = {
    0x00000000, 0x00000000,
};

// rodata: D_8024B9A0_B8FB20

// rodata: D_8024B9A8_B8FB28

// rodata: jtbl_8024B9B0_B8FB30

// rodata: D_8024BB40_B8FCC0

s32 pad_00BB48[] = {
    0x00000000, 0x00000000,
};
