#include "mim_11.h"

s32 pad_0008CC[1];
s32 pad_000978[2];
s32 pad_000BBC[1];
Script N(script_80240C60);
Script N(script_80240CE0);
Script N(script_80241034);
Script N(script_80241424);
Script N(script_80241500);
Script N(script_802416DC);
Script N(script_80241A10);
Script N(script_80241AAC);
s32 unk_missing_80241E90[14];
Script N(script_ExitWalk_80241EC8);
Script N(script_ExitWalk_80241F34);
Script N(script_ExitDoubleDoor_80241F90);
Script N(script_80242044);
Script N(script_EnterDoubleDoor_802420A8);
Script N(main);
Script N(script_80242560);
Script N(script_80242B90);
Script N(script_80242DC8);
Script N(script_80242FF4);
Script N(script_802430E0);
s32 pad_00310C[1];
Script N(script_80243110);
Script N(script_MakeEntities);
s32 pad_003268[2];
s32 unk_missing_802432C8[22];
Script N(script_Aux_80243320);
Script N(script_Init_8024333C);
Script N(script_Init_802433B8);
StaticNpc N(npcGroup_80243438)[2];
NpcGroupList N(npcGroupList_80243818);
Script N(script_SearchBush_80243830);
Script N(script_ShakeTree_80243B90);
s32 N(treeDropList_Bush1)[8];
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
Script N(script_80244214);
s32 pad_0042D4[3];
const char D_802442E0_BBB350[8]; // "osr_03"
const char D_802442E8_BBB358[8]; // "mim_07"
const char D_802442F0_BBB360[8]; // "mim_12"
const char D_802442F8_BBB368[8]; // "obk_01"
const char D_80244300_BBB370[8]; // "tik_09"
s32 pad_004308[2];

// text: func_80240000_BB7070

// text: func_80240020_BB7090

// text: func_80240034_BB70A4

// text: func_802400F0_BB7160

// text: func_802401D0_BB7240

// text: func_8024023C_BB72AC

// text: func_802402E0_BB7350

// text: func_80240404_BB7474

// text: func_802405EC_BB765C

// text: func_8024066C_BB76DC

// text: func_80240790_BB7800

s32 pad_0008CC[] = {
    0x00000000,
};

// text: func_802408D0_BB7940

// text: func_802408F0_BB7960

s32 pad_000978[] = {
    0x00000000, 0x00000000,
};

// text: func_80240980_BB79F0

// text: func_802409F0_BB7A60

s32 pad_000BBC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -635.0f, 0.0f, 5.0f, 90.0f },
    { 635.0f, 0.0f, 5.0f, 270.0f },
    { 117.0f, 37.0f, -201.0f, 227.0f },
    { -270.0f, 35.0f, -225.0f, 180.0f },
    { -65.0f, 0.0f, -22.0f, 315.0f },
    { -56.0f, 0.0f, -25.0f, 227.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900B0,
};

Script N(script_80240C60) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFD0 {
            SetMusicTrack(0, 27, 1, 8);
        }
        else {
            SetMusicTrack(0, 26, 0, 8);
        }
    }
    PlayAmbientSounds(0);
});

Script N(script_80240CE0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    HidePlayerShadow(1);
    SetPlayerAnimation(0x10000);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
    }
    GetEntryID(SI_VAR(0));
    func_802400F0_BB7160();
    SI_VAR(2) -= 40;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    PlaySound(355);
    func_802D286C(256);
    func_802D2520(0x10000, 5, 2, 1, 1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop 40 {
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    sleep 3;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            DisablePartnerAI(0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcFlagBits(0xFFFFFFFC, 2, 0);
            EnablePartnerAI();
            EnableNpcShadow(0xFFFFFFFC, 1);
        }
    }
    sleep 2;
    func_802D2520(0x10000, 0, 0, 0, 0, 0);
    sleep 1;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    HidePlayerShadow(0);
0:
    func_80240020_BB7090();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241034) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_BB7160();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(2) += 2;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    if (SI_VAR(4) == 90) {
        SI_VAR(5) += 40;
    } else {
        SI_VAR(5) -= 40;
    }
    UseSettingsFrom(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetPanTarget(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        DisablePartnerAI(0);
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
        InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
    }
    sleep 1;
    PlaySound(355);
    spawn {
        sleep 25;
        HidePlayerShadow(0);
    }
    func_802D286C(2304);
    func_802D2520(0x10002, 5, 3, 1, 1, 0);
    loop 40 {
        func_8024023C_BB72AC(1.0);
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            EnableNpcShadow(0xFFFFFFFC, 1);
            EnablePartnerAI();
        }
    }
    sleep 5;
    func_802D2520(0x10002, 0, 0, 0, 0, 0);
    ModifyColliderFlags(1, SI_VAR(11), 0x7FFFFE00);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    spawn 0xFE363C8A;
});

Script N(script_80241424) = SCRIPT({
    func_80240034_BB70A4();
    if (SI_VAR(0) == 0) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            func_802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    await N(script_80241500);
});

Script N(script_80241500) = SCRIPT({
    func_80240000_BB7070();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_BB7160();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_BB7160();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_BB7240();
    InterpPlayerYaw(SI_VAR(0), 0);
    sleep 2;
    SetPlayerFlagBits(0x200000, 0);
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        sleep 4;
        loop 40 {
            SI_VAR(1) -= 1;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    func_802D286C(2048);
    func_802D2520(0x10002, 5, 2, 1, 1, 0);
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_802416DC) = SCRIPT({
    func_802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) == 26) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            func_802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    group 27;
    func_80240000_BB7070();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_BB7160();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(6) += 2;
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(8) = SI_VAR(4);
    SI_VAR(8) += 180;
    if (SI_VAR(4) >= 360) {
        SI_VAR(4) -= 360;
    }
    InterpPlayerYaw(SI_VAR(8), 1);
    sleep 1;
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(0), SI_VAR(6), SI_VAR(7));
    SetPlayerAnimation(0x10000);
    func_802D286C(2048);
    func_802D2520(0x10000, 5, 3, 1, 1, 0);
    spawn {
        sleep 8;
        HidePlayerShadow(1);
    }
    spawn {
        sleep 3;
        loop 40 {
            func_8024023C_BB72AC(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_80241A10) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_BB7350();
                    return;
                }
            }
        }
    }
    func_80240404_BB7474();
});

Script N(script_80241AAC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerPos(0xFFFFFCE0, 0, 0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFCE0, 0, 0);
    SetCamSpeed(0, 90.0);
    SetCamType(0, 1, 1);
    SetCamPitch(0, 40.0, -63.59375);
    SetCamDistance(0, 720);
    SetCamPosA(0, 89, 84);
    SetCamPosB(0, 89, 84);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 75, 0, 309);
    PanToTarget(0, 0, 1);
    func_8024066C_BB76DC();
    sleep 30;
    parallel {
        func_80240790_BB7800();
        sleep 90;
        SetCamSpeed(0, 90.0);
        loop {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 0xFFFFFEA2);
            WaitForCam(0, 1.0);
        }
    }
    sleep 50;
    SetPlayerPos(0xFFFFFD43, 0, 0xFFFFFFDE);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFD43, 0, 0xFFFFFFDE);
    DisablePlayerPhysics(0);
    SetPlayerFlagBits(0x200000, 1);
    PlayerMoveTo(0xFFFFFE69, 103, 120);
    SetPlayerFlagBits(0x200000, 0);
    sleep 10;
    spawn {
        sleep 15;
        PlayerFaceNpc(0xFFFFFFFC, 0);
    }
    DisablePartnerAI(0);
    GetCurrentPartnerID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 5, 0xE0024);
        }
        == 2 {
            SpeakToPlayer(0xFFFFFFFC, 0x2000D, 0x20003, 5, 0xE0025);
        }
        == 3 {
            SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 5, 0xE0026);
        }
        == 4 {
            SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, 0xE0027);
        }
    }
    EnablePartnerAI();
    DisablePlayerInput(0);
});

s32 unk_missing_80241E90[] = {
    0x00000043, 0x00000003, FadeOutMusic, 0x00000000, 0x000005DC, 0x00000043, 0x00000004, GotoMapSpecial,
    D_802442E0_BBB350, 0x00000004, 0x0000000B, 0x00000008, 0x00000001, 0x00000064,
};

Script N(script_ExitWalk_80241EC8) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    SI_SAVE_FLAG(924) = 0;
    GotoMap(D_802442E8_BBB358, 3);
    sleep 100;
});

Script N(script_ExitWalk_80241F34) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802442F0_BBB360, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241F90) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 2;
    SI_VAR(1) = 10;
    SI_VAR(2) = 102;
    SI_VAR(3) = 104;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802442F8_BBB368, 0);
    sleep 100;
});

Script N(script_80242044) = SCRIPT({
    bind N(script_ExitWalk_80241EC8) to 0x80000 5;
    bind N(script_ExitWalk_80241F34) to 0x80000 1;
    bind N(script_ExitDoubleDoor_80241F90) to TriggerFlag_WALL_INTERACT 10;
});

Script N(script_EnterDoubleDoor_802420A8) = SCRIPT({
    SI_AREA_FLAG(1) = 1;
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80242044);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_AREA_FLAG(1) = 0;
            if (SI_SAVE_VAR(0) < 0xFFFFFFD0) {
                SI_SAVE_VAR(0) = 0xFFFFFFD0;
                await N(script_80241AAC);
                SetCamSpeed(0, 4.0);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                WaitForCam(0, 1.0);
                PanToTarget(0, 0, 0);
                spawn N(script_80242044);
            } else {
                SI_VAR(0) = N(script_80242044);
                spawn EnterWalk;
            }
        }
        == 1 {
            SI_VAR(0) = N(script_80242044);
            spawn EnterWalk;
        }
        == 2 {
            UseDoorSounds(3);
            SI_VAR(2) = 102;
            SI_VAR(3) = 104;
            await EnterDoubleDoor;
            spawn N(script_80242044);
        }
        == 3 {
            if (SI_SAVE_FLAG(1940) == 0) {
                DisablePlayerInput(1);
                DisablePlayerPhysics(1);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPlayerPos(SI_VAR(0), 0xFFFFFC18, SI_VAR(2));
                sleep 30;
                PlaySound(8334);
                SI_SAVE_FLAG(1940) = 1;
                sleep 30;
                SetPlayerActionState(0);
                SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                DisablePlayerPhysics(0);
                DisablePlayerInput(0);
            }
            SI_VAR(10) = N(script_80242044);
            await N(script_80240CE0);
        }
        == 4 {
            spawn N(script_80242044);
        }
        == 5 {
            InterpPlayerYaw(227, 0);
            spawn N(script_80242044);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SI_SAVE_FLAG(1976) = 1;
    SetSpriteShading(0x70009);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    EnableGroup(116, 0);
    MakeNpcs(1, N(npcGroupList_80243818));
    await N(script_MakeEntities);
    spawn N(script_802430E0);
    spawn N(script_80244214);
    spawn N(script_80240C60);
    spawn N(script_EnterDoubleDoor_802420A8);
    func_802405EC_BB765C();
});

Script N(script_80242560) = SCRIPT({
    sleep 30;
    PlaySoundAtCollider(13, 457, 0);
    MakeLerp(0, 80, 30, 0);
    loop {
        UpdateLerp();
        RotateModel(108, SI_VAR(0), 0, 1, 0);
        RotateModel(106, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    SetPlayerSpeed(2.0);
    PlayerMoveTo(0xFFFFFF9B, 17, 0);
    sleep 30;
    ModifyColliderFlags(1, 13, 0x7FFFFE00);
    MakeLerp(80, 0, 8, 1);
    loop {
        UpdateLerp();
        RotateModel(108, SI_VAR(0), 0, 1, 0);
        RotateModel(106, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(13, 458, 0);
    ShakeCam(0, 0, 15, 1.5);
    sleep 20;
    SetCamSpeed(0, 1.0);
    SetCamType(0, 0, 1);
    SetCamPitch(0, 19.5, -14.8994140625);
    SetCamDistance(0, 350);
    SetCamPosA(0, 0xFFFFFF7B, 52);
    SetCamPosB(0, 23, 0xFFFFFF93);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 23, 0, 0xFFFFFF93);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetMusicTrack(0, 27, 0, 8);
    PlaySoundAtNpc(0, 193, 0);
    SI_VAR(0) = 0.0;
    loop 90 {
        SI_VAR(0) += 2.6669921875;
        func_802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    SpeakToPlayer(0, 0xBF0004, 0xBF0001, 0, 0xE0028);
    SetMusicTrack(0, 27, 1, 8);
    sleep 10;
    SetCamPitch(0, 0.0, -25.0);
    SetCamDistance(0, 550);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    ShowMessageAtScreenPos(0xE0029, 160, 40);
    sleep 30;
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 19.5, -14.8994140625);
    SetCamDistance(0, 350);
    PanToTarget(0, 0, 1);
    sleep 10;
    SpeakToPlayer(0, 0xBF0004, 0xBF0001, 0, 0xE002A);
    PlaySoundAtNpc(0, 195, 0);
    SI_VAR(0) = 240.0;
    loop 90 {
        SI_VAR(0) -= 2.6669921875;
        func_802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    RemoveNpc(0);
    SetCamSpeed(0, 2.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
});

Script N(script_80242B90) = SCRIPT({
    PlaySoundAtCollider(13, 457, 0);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    spawn {
        MakeLerp(0, 80, 30, 0);
        loop {
            UpdateLerp();
            RotateModel(108, SI_VAR(0), 0, 1, 0);
            RotateModel(106, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 20;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 80;
    SI_VAR(2) -= 80;
    PlayerMoveTo(SI_VAR(0), SI_VAR(2), 30);
    sleep 10;
    MakeLerp(80, 0, 30, 0);
    loop {
        UpdateLerp();
        RotateModel(108, SI_VAR(0), 0, 1, 0);
        RotateModel(106, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ModifyColliderFlags(1, 13, 0x7FFFFE00);
    PlaySoundAtCollider(13, 458, 0);
});

Script N(script_80242DC8) = SCRIPT({
    PlaySoundAtCollider(13, 457, 0);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    spawn {
        MakeLerp(0, 80, 30, 0);
        loop {
            UpdateLerp();
            RotateModel(108, SI_VAR(0), 0, -1, 0);
            RotateModel(106, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 20;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFB0;
    SI_VAR(2) -= 0xFFFFFFB0;
    PlayerMoveTo(SI_VAR(0), SI_VAR(2), 20);
    MakeLerp(80, 0, 30, 0);
    loop {
        UpdateLerp();
        RotateModel(108, SI_VAR(0), 0, -1, 0);
        RotateModel(106, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ModifyColliderFlags(1, 13, 0x7FFFFE00);
    PlaySoundAtCollider(13, 458, 0);
});

Script N(script_80242FF4) = SCRIPT({
    DisablePlayerInput(1);
    func_802D2B6C();
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFD1 {
            SI_SAVE_VAR(0) = 0xFFFFFFD1;
            SI_AREA_FLAG(1) = 1;
            await N(script_80242560);
        }
        >= 0xFFFFFFD1 {
            if (SI_AREA_FLAG(1) == 0) {
                await N(script_80242B90);
                SI_AREA_FLAG(1) = 1;
            } else {
                await N(script_80242DC8);
                SI_AREA_FLAG(1) = 0;
            }
        }
    }
    DisablePlayerInput(0);
});

Script N(script_802430E0) = SCRIPT({
    bind N(script_80242FF4) to TriggerFlag_WALL_INTERACT 13;
});

s32 pad_00310C[] = {
    0x00000000,
};

Script N(script_80243110) = SCRIPT({
    GotoMap(D_80244300_BBB370, 2);
    sleep 100;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1940) == 0) {
        if (SI_SAVE_FLAG(1935) == 1) {
            GetEntryID(SI_VAR(0));
            if (SI_VAR(0) != 3) {
                SI_SAVE_FLAG(1937) = 1;
            }
        }
    }
    MakeEntity(D_802EAF80, 0xFFFFFEED, 0, 0xFFFFFF1F, 270, 3, N(script_80243110), 1940, 0x80000000);
    MakeEntity(D_802EA7E0, 0, 60, 0xFFFFFED4, 45, 0x80000000);
    MakeEntity(D_802E9A18, 220, 60, 0xFFFFFFB0, 45, 0x80000000);
    MakeEntity(D_802EA564, 0xFFFFFEE6, 60, 522, 0, 139, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(935));
});

s32 pad_003268[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80243270) = {
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

NpcSettings N(npcSettings_8024329C) = {
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

s32 unk_missing_802432C8[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Aux_80243320) = SCRIPT({
    func_802408F0_BB7960();
});

Script N(script_Init_8024333C) = SCRIPT({
    BindNpcAux(-1, N(script_Aux_80243320));
    SetNpcPos(-1, 0, 0xFFFFFC18, 0xFFFFFF9C);
    EnableNpcShadow(-1, 0);
    if (SI_SAVE_VAR(0) != 0xFFFFFFF0) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_802433B8) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFD1 {
            EnableNpcShadow(-1, 0);
            func_802CFD30(-1, 7, 0, 0, 0, 0);
        }
        else {
            RemoveNpc(-1);
        }
    }
});

StaticNpc N(npcGroup_80243438)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243270),
        .pos = { 68.0, 60.0, -145.0 },
        .flags = 0x00000801,
        .init = N(script_Init_802433B8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00BF0001, 0x00BF0002, 0x00BF0003, 0x00BF0003, 0x00BF0001, 0x00BF0001, 0x00BF0000, 0x00BF0000, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024329C),
        .pos = { 68.0, 60.0, -145.0 },
        .flags = 0x00000B01,
        .init = N(script_Init_8024333C),
        .yaw = 135,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
    },
};

NpcGroupList N(npcGroupList_80243818) = {
    NPC_GROUP(N(npcGroup_80243438), 0x00000000),
    {},
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243830) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802409F0_BB7A60, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802409F0_BB7A60, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80243B90) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802409F0_BB7A60, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802409F0_BB7A60, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802409F0_BB7A60, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802409F0_BB7A60, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x75 },
};

s32 N(treeDropList_Bush1)[] = {
    0x00000001, 0x000000A9, 0x00000165, 0x00000010, 0x0000013B, 0x00000005, 0x00000000, 0xFAA2B58A,
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), N(treeDropList_Bush1), 0x00000000, 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x76 },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, 0x00000000, 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x77 },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, 0x00000000, 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x78 },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244214) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80243830) to TriggerFlag_WALL_INTERACT 31;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80243830) to TriggerFlag_WALL_INTERACT 32;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80243830) to TriggerFlag_WALL_INTERACT 33;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80243830) to TriggerFlag_WALL_INTERACT 34;
});

s32 pad_0042D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802442E0_BBB350

// rodata: D_802442E8_BBB358

// rodata: D_802442F0_BBB360

// rodata: D_802442F8_BBB368

// rodata: D_80244300_BBB370

s32 pad_004308[] = {
    0x00000000, 0x00000000,
};
