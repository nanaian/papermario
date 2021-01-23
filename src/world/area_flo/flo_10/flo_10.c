#include "flo_10.h"

s32 pad_00003C[1];
s32 pad_000074[3];
s32 pad_0004A4[3];
s32 pad_001224[3];
s32 pad_00146C[1];
Script N(script_802414E0);
Script N(script_802415C4);
Script N(script_802415E8);
s32 pad_001624[3];
Script N(script_80241630);
s32 pad_00167C[1];
Script N(script_80241680);
Script N(script_ExitWalk_8024192C);
Script N(script_80241988);
Script N(main);
s32 pad_001CA8[2];
s32 N(unk_80241CB0)[1];
Script N(script_80241CB4);
Script N(script_80241CE4);
Script N(script_UpdateTexturePan_80241D14);
Script N(script_80241DB0);
Script N(script_80241E40);
Script N(script_80241F20);
Script N(script_80242030);
Script N(script_8024206C);
Script N(script_80242188);
Script N(script_8024230C);
Script N(script_802423E4);
Script N(script_8024244C);
Script N(script_802424DC);
Script N(script_802425BC);
Script N(script_802425E4);
Script N(script_802427EC);
Script N(script_80242AE8);
s32 pad_003218[2];
Script N(script_8024324C);
s32 N(itemList_80243394)[2];
Script N(script_8024339C);
Script N(script_802435F8);
Script N(script_80243628);
Script N(script_Interact_802437C8);
Script N(script_Init_80243D78);
StaticNpc N(npcGroup_80243E64)[1];
NpcGroupList N(npcGroupList_80244054);
s32 pad_00406C[1];
s32 N(unk_80244070)[1];
Script N(script_80244074);
s32 pad_004084[3];
Script N(script_SearchBush_80244090);
Script N(script_ShakeTree_802443F0);
s32 N(treeDropList_Tree1)[8];
Script N(script_80244A50);
s32 pad_004AA8[2];
const char D_80244AB0_CBDCB0[8]; // "flo_24"
const char D_80244AB8_CBDCB8[8]; // "flo_24"
const char D_80244AC0_CBDCC0[8]; // "flo_12"
s32 pad_004AC8[2];

// text: func_GetTattle_CB9200

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_CB9240

s32 pad_000074[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240080_CB9280

// text: func_80240134_CB9334

// text: func_80240198_CB9398

// text: func_802402BC_CB94BC

s32 pad_0004A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802404B0_CB96B0

// text: func_80240A98_CB9C98

s32 pad_001224[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80241230_CBA430

// text: func_802412A0_CBA4A0

s32 pad_00146C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -360.0f, 0.0f, 0.0f, 90.0f },
    { -360.0f, 0.0f, 0.0f, 90.0f },
    { -100.0f, -10.0f, -172.0f, 135.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x80240000,
};

Script N(script_802414E0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetMusicTrack(0, 127, 0, 8);
    } else {
        match SI_SAVE_VAR(0) {
            < 53 {
                SetMusicTrack(0, 48, 0, 8);
            }
            else {
                SetMusicTrack(0, 49, 0, 8);
            }
        }
    }
    if (SI_SAVE_VAR(0) >= 49) {
        PlaySound(0x80000022);
    }
});

Script N(script_802415C4) = SCRIPT({
    0x802D5FF8(137, 2);
});

Script N(script_802415E8) = SCRIPT({
    FadeOutMusic(0, 250);
    sleep 10;
    0x802D5FD8();
});

s32 pad_001624[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241630) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 49) {
        MakeItemEntity(87, 0, 0xFFFFFFC4, 6, 1, 0);
    }
});

s32 pad_00167C[] = {
    0x00000000,
};

Script N(script_80241680) = SCRIPT({
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

Script N(script_ExitWalk_8024192C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244AB0_CBDCB0, 1);
    sleep 100;
});

Script N(script_80241988) = SCRIPT({
    bind N(script_ExitWalk_8024192C) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80244054));
    await N(script_80241630);
    spawn N(script_80244A50);
    spawn N(script_802435F8);
    spawn N(script_80242AE8);
    spawn N(script_80244074);
    ModifyColliderFlags(3, 11, 6);
    ModifyColliderFlags(3, 12, 6);
    SI_VAR(0) = 0xFFFFFEF7;
    SI_VAR(1) = 247;
    SI_VAR(2) = 199;
    SI_VAR(3) = 313;
    SI_VAR(4) = 0;
    spawn N(script_80241680);
    SI_VAR(0) = 0xFFFFFED4;
    SI_VAR(1) = 0xFFFFFEED;
    SI_VAR(2) = 0xFFFFFF74;
    SI_VAR(3) = 0xFFFFFF47;
    SI_VAR(4) = 0;
    spawn N(script_80241680);
    SI_VAR(0) = 263;
    SI_VAR(1) = 0xFFFFFF08;
    SI_VAR(2) = 362;
    SI_VAR(3) = 146;
    SI_VAR(4) = 0;
    spawn N(script_80241680);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            spawn N(script_8024324C);
        }
        == 2 {
            spawn N(script_802427EC);
            spawn N(script_80241988);
        }
        else {
            ModifyColliderFlags(0, 1, 0x7FFFFE00);
            SI_VAR(0) = N(script_80241988);
            spawn EnterWalk;
        }
    }
    await N(script_802414E0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240040_CB9240();
    }
});

s32 pad_001CA8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80241CB0)[] = {
    0x00000000,
};

Script N(script_80241CB4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80241CE4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_UpdateTexturePan_80241D14) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240198_CB9398();
                    return;
                }
            }
        }
    }
    func_802402BC_CB94BC();
});

Script N(script_80241DB0) = SCRIPT({
    MakeLerp(0xFFFFFFCE, 170, 385, 0);
1:
    UpdateLerp();
    TranslateGroup(56, 0, SI_VAR(0), 0);
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
});

Script N(script_80241E40) = SCRIPT({
    MakeLerp(0, 100, 90, 1);
1:
    UpdateLerp();
    SI_VAR(2) =f SI_VAR(0);
    SI_VAR(3) =f SI_VAR(0);
    SI_VAR(2) /= 333.0;
    SI_VAR(3) /= 100.0;
    SI_VAR(2) += 0.703125;
    ScaleGroup(56, SI_VAR(2), SI_VAR(3), SI_VAR(2));
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
});

Script N(script_80241F20) = SCRIPT({
    EnableTexPanning(53, 1);
    spawn {
        SI_VAR(0) = 10;
        SI_VAR(1) = 0xFFFFFF6A;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241D14);
    }
});

Script N(script_80242030) = SCRIPT({
    sleep 60;
    EnableModel(53, 1);
    spawn N(script_80241F20);
});

Script N(script_8024206C) = SCRIPT({
    sleep 80;
    EnableNpcShadow(0, 0);
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    MakeLerp(10, 55, 108, 0);
    loop {
        UpdateLerp();
        SI_VAR(6) = SI_VAR(4);
        SI_VAR(6) += SI_VAR(0);
        SI_VAR(6) += 0xFFFFFFF6;
        SetNpcPos(0, SI_VAR(3), SI_VAR(6), SI_VAR(5));
        TranslateGroup(60, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80242188) = SCRIPT({
    DisablePlayerPhysics(1);
    sleep 40;
    SetPlayerAnimation(0x80024);
    GetPlayerPos(SI_VAR(2), SI_VAR(0), SI_VAR(3));
    MakeLerp(0xFFFFFFCE, 90, 60, 1);
    loop {
        UpdateLerp();
        SI_VAR(2) /= 1.2001953125;
        SI_VAR(3) /= 1.2001953125;
        SetPlayerPos(SI_VAR(2), SI_VAR(0), SI_VAR(3));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(90, 270, 280, 0);
    loop {
        UpdateLerp();
        SetPlayerPos(0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerPhysics(0);
});

Script N(script_8024230C) = SCRIPT({
    sleep 80;
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamSpeed(0, 0.7001953125);
    SetCamPitch(0, 25.0, -22.0);
    SetCamDistance(0, 450);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_802423E4) = SCRIPT({
    DisablePartnerAI(0);
    spawn N(script_80241DB0);
    spawn N(script_80241E40);
    spawn N(script_80242030);
    spawn N(script_8024206C);
    spawn N(script_80242188);
    spawn N(script_8024230C);
});

Script N(script_8024244C) = SCRIPT({
    MakeLerp(170, 75, 150, 0);
1:
    UpdateLerp();
    TranslateGroup(56, 0, SI_VAR(0), 0);
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
});

Script N(script_802424DC) = SCRIPT({
    MakeLerp(100, 15, 150, 1);
1:
    UpdateLerp();
    SI_VAR(2) =f SI_VAR(0);
    SI_VAR(3) =f SI_VAR(0);
    SI_VAR(2) /= 333.0;
    SI_VAR(3) /= 100.0;
    SI_VAR(2) += 0.703125;
    ScaleGroup(56, SI_VAR(2), SI_VAR(3), SI_VAR(2));
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
});

Script N(script_802425BC) = SCRIPT({
    spawn N(script_8024244C);
    spawn N(script_802424DC);
});

Script N(script_802425E4) = SCRIPT({
    sleep 20;
    SetPlayerAnimation(0x10000);
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamSpeed(0, 1.0);
    SetCamDistance(0, 600);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    EnableGroup(56, 1);
    TranslateGroup(56, 0, 0xFFFFFFCE, 0);
    ScaleGroup(56, 0, 0, 0);
    EnableGroup(60, 1);
    await N(script_802423E4);
    sleep 20;
    PlaySound(0x80000024);
    sleep 360;
    InterpPlayerYaw(90, 0);
    SetPlayerAnimation(0x80017);
    SetPlayerJumpscale(0.2001953125);
    PlayerJump1(0xFFFFFF9C, 0xFFFFFFF6, 0xFFFFFF54, 75);
    ShakeCam(0, 0, 5, 1.0);
    await N(script_802425BC);
    sleep 60;
    GotoMap(D_80244AB8_CBDCB8, 2);
    sleep 100;
});

Script N(script_802427EC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerPos(0xFFFFFF9C, 0xFFFFFFF6, 0xFFFFFF54);
    InterpPlayerYaw(150, 0);
    SetPlayerAnimation(0x1000F);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFF7F, 9, 0xFFFFFF4F);
    EnablePartnerAI();
    ClearPartnerMoveHistory(0xFFFFFFFC);
    EnableGroup(52, 1);
    EnableGroup(19, 0);
    EnableGroup(61, 0);
    EnableGroup(60, 0);
    SetNpcPos(0, 0xFFFFFFC7, 0xFFFFFFEC, 0xFFFFFF97);
    InterpNpcYaw(0, 90, 0);
    AdjustCam(0, 90.0, 0, 450, 25.0, -6.0);
    sleep 30;
    SetPlayerAnimation(0x10030);
    sleep 20;
    SetPlayerAnimation(0x10002);
    sleep 10;
    await N(script_802415C4);
    sleep 10;
    SpeakToPlayer(0, 0xC90002, 0xC90001, 5, 0x110082);
    NpcFacePlayer(0, 1);
    SpeakToPlayer(0, 0xC90003, 0xC90007, 0, 0x110083);
    SetNpcAnimation(0, 0xC90006);
    sleep 20;
    SetNpcAnimation(0, 0xC90001);
    SI_VAR(0) = 90;
    SI_VAR(1) = 1;
    await N(script_80241CB4);
    AddKeyItem(90);
    SpeakToPlayer(0, 0xC90003, 0xC90007, 0, 0x110084);
    EndSpeech(0, 0xC90002, 0xC90001, 0);
    SetNpcAnimation(0, 0xC90001);
    ResetCam(0, 4.0);
    await N(script_802415E8);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80242AE8) = SCRIPT({
    if (SI_SAVE_VAR(0) < 49) {
        EnableGroup(52, 0);
        EnableGroup(61, 0);
        ModifyColliderFlags(0, 21, 0x7FFFFE00);
    } else {
        EnableGroup(19, 0);
        EnableGroup(61, 0);
        EnableGroup(60, 0);
        ModifyColliderFlags(0, 14, 0x7FFFFE00);
        ModifyColliderFlags(0, 15, 0x7FFFFE00);
        ModifyColliderFlags(0, 16, 0x7FFFFE00);
        ModifyColliderFlags(0, 17, 0x7FFFFE00);
    }
    EnableTexPanning(54, 1);
    EnableTexPanning(48, 1);
    EnableTexPanning(55, 1);
    EnableTexPanning(59, 1);
    EnableTexPanning(49, 1);
    EnableTexPanning(51, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFF830;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241D14);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 80;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241D14);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 0xFFFFFC18;
        SI_VAR(2) = 2000;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241D14);
    }
    spawn {
        SI_VAR(0) = 6;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFF830;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241D14);
    }
    spawn {
        SI_VAR(0) = 8;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFA24;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241D14);
    }
    spawn {
        SI_VAR(0) = 9;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFC18;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241D14);
    }
    if (SI_SAVE_VAR(0) >= 49) {
        spawn N(script_80241F20);
    }
});

s32 pad_003218[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80243220) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x2D,
    .radius = 0x41,
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

Script N(script_8024324C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetNpcPos(0, 60, 0, 55);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamDistance(0, 450);
    SetCamPitch(0, 17.0, -6.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SpeakToPlayer(0, 0xC90002, 0xC90001, 0, 0x1100C6);
    sleep 10;
    GotoMap(D_80244AC0_CBDCC0, 1);
    sleep 100;
});

s32 N(itemList_80243394)[] = {
    0x00000057, 0x00000000,
};

Script N(script_8024339C) = SCRIPT({
    if (SI_SAVE_FLAG(1376) == 1) {
        GetCurrentPartner(SI_VAR(10));
        if (SI_VAR(10) != 0) {
            AwaitPlayerLeave(0, 0, 19);
            return;
        }
        DisablePlayerInput(1);
        group 0;
        0x802D5830(1);
        0x802D6420();
        SI_VAR(2) = SI_VAR(0);
        match SI_VAR(2) {
            == -1 {
                0x802D6954();
                0x802D5830(0);
                sleep 10;
                SpeakToPlayer(0, 0xC90004, 0xC90008, 0, 0x110081);
            }
            else {
                GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
                PlayerMoveTo(0xFFFFFFEF, 0xFFFFFFEF, 20);
                0x802CF56C(2);
                InterpPlayerYaw(100, 1);
                sleep 10;
                AdjustCam(0, 1.0, 0, 450, 25.0, -6.0);
                sleep 10;
                SetPlayerAnimation(0x60006);
                RemoveKeyItemAt(SI_VAR(1));
                MakeItemEntity(87, 0, 0xFFFFFFC4, 6, 1, 0);
                SI_VAR(10) = SI_VAR(0);
                0x802D6954();
                0x802D5830(0);
                await N(script_802425E4);
            }
        }
        DisablePlayerInput(0);
        AwaitPlayerLeave(0, 0, 19);
    }
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802435F8) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024339C), TriggerFlag_FLOOR_TOUCH, 15, N(itemList_80243394), 0, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80243628) = SCRIPT({
    sleep 10;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(5) < SI_VAR(2)) {
        SI_VAR(6) = 30;
    } else {
        SI_VAR(6) = 20;
    }
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(4) = SI_VAR(0);
    SI_VAR(1) -= SI_VAR(6);
    SI_VAR(4) += SI_VAR(6);
    match SI_VAR(3) {
    SI_VAR(1)..SI_VAR(4)
        spawn {
            if (SI_VAR(3) < SI_VAR(0)) {
                SI_VAR(0) -= 40;
            } else {
                SI_VAR(0) += 40;
            }
            SetNpcFlagBits(-1, 256, 1);
            PlayerMoveTo(SI_VAR(0), SI_VAR(5), 15);
            PlayerFaceNpc(0, 1);
            SetNpcFlagBits(-1, 256, 0);
        }
    }
});

Script N(script_Interact_802437C8) = SCRIPT({
    await N(script_802415C4);
    match SI_SAVE_VAR(0) {
        < 45 {
            spawn N(script_80243628);
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 325);
            SetCamPitch(0, 23.0, -9.0);
            SetCamSpeed(0, 4.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            sleep 10;
            SpeakToPlayer(-1, 0xC90004, 0xC90008, 5, 0x110078);
            EndSpeech(-1, 0xC90009, 0xC90005, 5);
        }
        < 48 {
            if (SI_SAVE_FLAG(1375) == 0) {
                spawn N(script_80243628);
                GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetCamDistance(0, 325);
                SetCamPitch(0, 23.0, -9.0);
                SetCamSpeed(0, 4.0);
                PanToTarget(0, 0, 1);
                WaitForCam(0, 1.0);
                sleep 10;
                SpeakToPlayer(-1, 0xC90004, 0xC90008, 5, 0x110079);
                NpcFacePlayer(-1, 1);
                SetNpcAnimation(-1, 0xC90001);
                PlaySoundAtNpc(-1, 610, 0);
                ShowEmote(-1, 0, 0, 15, 1, 0, 0, 0, 0);
                sleep 15;
                SpeakToPlayer(-1, 0xC90001, 0xC90001, 0, 0x11007A);
                EndSpeech(-1, 0xC90005, 0xC90001, 0);
                GetPlayerTargetYaw(SI_VAR(0));
                InterpNpcYaw(-1, SI_VAR(0), 1);
                sleep 20;
                SpeakToPlayer(-1, 0xC90002, 0xC90001, 5, 0x11007B);
                NpcFacePlayer(-1, 1);
                sleep 20;
                SpeakToPlayer(-1, 0xC90002, 0xC90001, 0, 0x11007C);
                ShowChoice(0x1E0011);
                sleep 10;
                match SI_VAR(0) {
                    == 0 {
                        ContinueSpeech(-1, 0xC90003, 0xC90007, 0, 0x11007D);
                    }
                    == 1 {
                        ContinueSpeech(-1, 0xC90004, 0xC90008, 0, 0x11007E);
                    }
                }
                sleep 10;
                SI_SAVE_FLAG(1375) = 1;
                SetEnemyFlagBits(-1, 0x400000, 0);
            } else {
                SpeakToPlayer(-1, 0xC90004, 0xC90008, 5, 0x11007F);
            }
        }
        < 49 {
            SpeakToPlayer(-1, 0xC90002, 0xC90001, 0, 0x110080);
            SI_SAVE_FLAG(1376) = 1;
        }
        < 53 {
            SpeakToPlayer(-1, 0xC90004, 0xC90008, 0, 0x110085);
            EndSpeech(-1, 0xC90002, 0xC90001, 0);
            EndSpeech(-1, 0xC90004, 0xC90008, 0);
        }
        < 60 {
            SpeakToPlayer(-1, 0xC90003, 0xC90007, 0, 0x110086);
        }
        else {
            SpeakToPlayer(-1, 0xC90002, 0xC90001, 0, 0x110087);
        }
    }
    ResetCam(0, 4.0);
    await N(script_802415E8);
});

Script N(script_Init_80243D78) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802437C8));
    match SI_SAVE_VAR(0) {
        < 48 {
            if (SI_SAVE_FLAG(1375) == 0) {
                SetNpcAnimation(-1, 0xC90008);
                InterpNpcYaw(-1, 90, 1);
                SetEnemyFlagBits(-1, 0x400000, 1);
            }
        }
        == 48 {
            InterpNpcYaw(-1, 270, 1);
        }
        >= 49 {
            SetNpcPos(-1, 0xFFFFFFBD, 0xFFFFFFEC, 0xFFFFFF97);
        }
    }
});

StaticNpc N(npcGroup_80243E64)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243220),
        .pos = { 80.0, -60.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80243D78),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001, 0x00C90001,
        },
        .tattle = 0x1A00DF,
    },
};

NpcGroupList N(npcGroupList_80244054) = {
    NPC_GROUP(N(npcGroup_80243E64), 0x00000000),
    {},
};

s32 pad_00406C[] = {
    0x00000000,
};

s32 N(unk_80244070)[] = {
    0x00000000,
};

Script N(script_80244074) = SCRIPT({

});

s32 pad_004084[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80244090) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802412A0_CBA4A0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412A0_CBA4A0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802443F0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802412A0_CBA4A0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412A0_CBA4A0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412A0_CBA4A0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802412A0_CBA4A0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .count = 0x3,
    .modelIDs = { 0x21, 0x22, 0x23 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x20 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x000000A2, 0x00000050, 0x00000064, 0xFFFFFF10, 0x0000000F, 0xF84060E7, 0x00000000,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80244A40) =  { 137.0f, 0.0f, -283.0f, 0.0f };

Script N(script_80244A50) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802443F0) to TriggerFlag_WALL_HAMMER 9;
    bind N(script_ShakeTree_802443F0) to TriggerFlag_BOMB N(triggerCoord_80244A40);
});

s32 pad_004AA8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244AB0_CBDCB0

// rodata: D_80244AB8_CBDCB8

// rodata: D_80244AC0_CBDCC0

s32 pad_004AC8[] = {
    0x00000000, 0x00000000,
};
