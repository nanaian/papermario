#include "flo_11.h"

s32 pad_000314[3];
Script N(script_802403E0);
Script N(script_80240450);
Script N(script_802406FC);
Script N(script_80240A50);
Script N(script_80240E40);
Script N(script_80240F1C);
Script N(script_802410F8);
Script N(script_ExitWalk_8024142C);
Script N(script_ExitWalk_80241488);
Script N(script_802414E4);
Script N(script_80241520);
Script N(script_8024155C);
Script N(script_80241598);
Script N(script_802415D4);
Script N(script_80241610);
Script N(script_8024164C);
Script N(script_80241698);
Script N(main);
s32 pad_001AB8[2];
s32 N(vectorList_80241AEC)[24];
s32 N(vectorList_80241B4C)[24];
s32 N(vectorList_80241BAC)[12];
s32 N(vectorList_80241BDC)[12];
s32 N(vectorList_80241C0C)[9];
s32 N(vectorList_80241C30)[9];
s32 N(vectorList_80241C54)[12];
s32 N(vectorList_80241C84)[12];
Script N(script_80241CB4);
Script N(script_80241CF4);
Script N(script_80241E4C);
Script N(script_80241F80);
Script N(script_802420C8);
Script N(script_80242240);
Script N(script_Idle_80242810);
Script N(script_Defeat_802428B8);
Script N(script_Defeat_80242AC4);
Script N(script_Init_80242B58);
Script N(script_Init_80242C38);
StaticNpc N(npcGroup_80242CF4)[2];
NpcGroupList N(npcGroupList_802430D4);
s32 pad_0030EC[1];
Script N(script_MakeEntities);
s32 pad_003134[3];
const char D_80243140_CC0E10[8]; // "flo_23"
const char D_80243148_CC0E18[8]; // "flo_12"
const char D_80243150_CC0E20[8]; // "flo_11"
s32 pad_003158[2];

// text: func_80240000_CBDCD0

// text: func_80240020_CBDCF0

// text: func_80240034_CBDD04

// text: func_802400F0_CBDDC0

// text: func_802401D0_CBDEA0

// text: func_8024023C_CBDF0C

// text: func_802402E0_CBDFB0

s32 pad_000314[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 470.0f, 0.0f, -15.0f, 270.0f },
    { -470.0f, 0.0f, -15.0f, 90.0f },
    { 360.0f, 50.0f, -237.0f, 270.0f },
    { 118.0f, 50.0f, -420.0f, 270.0f },
    { 0.0f, 50.0f, 0.0f, 270.0f },
    { -120.0f, 50.0f, 357.0f, 90.0f },
    { -360.0f, 50.0f, -240.0f, 90.0f },
    { -360.0f, 35.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19011B,
};

Script N(script_802403E0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_80240450) = SCRIPT({
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

Script N(script_802406FC) = SCRIPT({
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
    func_802400F0_CBDDC0();
    SI_VAR(2) -= 40;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    PlaySound(355);
    0x802D286C(256);
    0x802D2520(0x10000, 5, 2, 1, 1, 0);
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
    0x802D2520(0x10000, 0, 0, 0, 0, 0);
    sleep 1;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    HidePlayerShadow(0);
0:
    func_80240020_CBDCF0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80240A50) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_CBDDC0();
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
    0x802D286C(2304);
    0x802D2520(0x10002, 5, 3, 1, 1, 0);
    loop 40 {
        func_8024023C_CBDF0C(1.0);
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
    0x802D2520(0x10002, 0, 0, 0, 0, 0);
    ModifyColliderFlags(1, SI_VAR(11), 0x7FFFFE00);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    spawn 0xFE363C8A;
});

Script N(script_80240E40) = SCRIPT({
    func_80240034_CBDD04();
    if (SI_VAR(0) == 0) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    await N(script_80240F1C);
});

Script N(script_80240F1C) = SCRIPT({
    func_80240000_CBDCD0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_CBDDC0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_CBDDC0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_CBDEA0();
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
    0x802D286C(2048);
    0x802D2520(0x10002, 5, 2, 1, 1, 0);
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_802410F8) = SCRIPT({
    0x802D249C(SI_VAR(0));
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
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    group 27;
    func_80240000_CBDCD0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_CBDDC0();
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
    0x802D286C(2048);
    0x802D2520(0x10000, 5, 3, 1, 1, 0);
    spawn {
        sleep 8;
        HidePlayerShadow(1);
    }
    spawn {
        sleep 3;
        loop 40 {
            func_8024023C_CBDF0C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_ExitWalk_8024142C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243140_CC0E10, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241488) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243148_CC0E18, 0);
    sleep 100;
});

Script N(script_802414E4) = SCRIPT({
    group 27;
    GotoMap(D_80243150_CC0E20, 5);
    sleep 100;
});

Script N(script_80241520) = SCRIPT({
    group 27;
    GotoMap(D_80243150_CC0E20, 6);
    sleep 100;
});

Script N(script_8024155C) = SCRIPT({
    group 27;
    GotoMap(D_80243150_CC0E20, 7);
    sleep 100;
});

Script N(script_80241598) = SCRIPT({
    group 27;
    GotoMap(D_80243150_CC0E20, 2);
    sleep 100;
});

Script N(script_802415D4) = SCRIPT({
    group 27;
    GotoMap(D_80243150_CC0E20, 3);
    sleep 100;
});

Script N(script_80241610) = SCRIPT({
    group 27;
    GotoMap(D_80243150_CC0E20, 4);
    sleep 100;
});

Script N(script_8024164C) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    await N(script_80240E40);
});

Script N(script_80241698) = SCRIPT({
    bind N(script_ExitWalk_80241488) to 0x80000 0;
    bind N(script_ExitWalk_8024142C) to 0x80000 4;
    SI_VAR(0) = 2;
    SI_VAR(1) = 35;
    SI_VAR(2) = N(script_802414E4);
    bind N(script_8024164C) to TriggerFlag_FLOOR_TOUCH SI_VAR(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 34;
    SI_VAR(2) = N(script_80241520);
    bind N(script_8024164C) to TriggerFlag_FLOOR_TOUCH SI_VAR(1);
    SI_VAR(0) = 4;
    SI_VAR(1) = 33;
    SI_VAR(2) = N(script_8024155C);
    bind N(script_8024164C) to TriggerFlag_FLOOR_TOUCH SI_VAR(1);
    SI_VAR(0) = 5;
    SI_VAR(1) = 32;
    SI_VAR(2) = N(script_80241598);
    bind N(script_8024164C) to TriggerFlag_FLOOR_TOUCH SI_VAR(1);
    SI_VAR(0) = 6;
    SI_VAR(1) = 31;
    SI_VAR(2) = N(script_802415D4);
    bind N(script_8024164C) to TriggerFlag_FLOOR_TOUCH SI_VAR(1);
    SI_VAR(0) = 7;
    SI_VAR(1) = 30;
    SI_VAR(2) = N(script_80241610);
    bind N(script_8024164C) to TriggerFlag_FLOOR_TOUCH SI_VAR(1);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    0x80044238(5);
    MakeNpcs(0, N(npcGroupList_802430D4));
    await N(script_MakeEntities);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) <= 1) {
        SI_VAR(0) = N(script_80241698);
        spawn EnterWalk;
        spawn N(script_80242240);
        sleep 1;
    } else {
        SI_VAR(10) = N(script_80241698);
        spawn N(script_802406FC);
        sleep 1;
    }
    await N(script_802403E0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_802402E0_CBDFB0();
    }
    ModifyColliderFlags(3, 9, 9);
    ModifyColliderFlags(3, 10, 9);
    ModifyColliderFlags(3, 11, 9);
    ModifyColliderFlags(3, 12, 9);
});

s32 pad_001AB8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241AC0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x14,
    .unk_2A = 0,
};

s32 N(vectorList_80241AEC)[] = {
    0x43E60000, 0x43480000, 0xC3700000, 0x43B40000, 0x43160000, 0xC30C0000, 0x43820000, 0x42C80000,
    0xC3700000, 0x43B40000, 0x42C80000, 0xC3DC0000, 0x43E60000, 0x42C80000, 0xC3700000, 0x43B40000,
    0x42C80000, 0xC30C0000, 0x43820000, 0x42C80000, 0xC3700000, 0x43B40000, 0x42C80000, 0xC3DC0000,
};

s32 N(vectorList_80241B4C)[] = {
    0xC2C80000, 0x43480000, 0xC2480000, 0x00000000, 0x43160000, 0xC3160000, 0x42C80000, 0x42C80000,
    0xC2480000, 0x00000000, 0x42C80000, 0x42480000, 0xC2C80000, 0x42C80000, 0xC2480000, 0x00000000,
    0x42C80000, 0xC3160000, 0x42C80000, 0x42C80000, 0xC2480000, 0x00000000, 0x42C80000, 0x42480000,
};

s32 N(vectorList_80241BAC)[] = {
    0x43B40000, 0x42C80000, 0xC3DC0000, 0x43AF0000, 0x42F00000, 0xC35C0000, 0x43960000, 0x42F00000,
    0xC3240000, 0x43200000, 0x42DC0000, 0xC3340000,
};

s32 N(vectorList_80241BDC)[] = {
    0x00000000, 0x42C80000, 0x42480000, 0x43480000, 0x42DC0000, 0x41E80000, 0x43670000, 0x42DC0000,
    0xC1900000, 0x42E60000, 0x42C80000, 0xC3160000,
};

s32 N(vectorList_80241C0C)[] = {
    0x438E8000, 0x42F00000, 0xC2D80000, 0x43B90000, 0x42C80000, 0xC3020000, 0x43E30000, 0x42700000,
    0xC1A00000,
};

s32 N(vectorList_80241C30)[] = {
    0x43838000, 0x42DC0000, 0xC2840000, 0x43B40000, 0x42B40000, 0x42480000, 0x43E30000, 0x42480000,
    0x41A00000,
};

s32 N(vectorList_80241C54)[] = {
    0x43C80000, 0x41F00000, 0xC2200000, 0x43960000, 0x42A00000, 0xC2200000, 0x43160000, 0x43480000,
    0xC2200000, 0x42C80000, 0x43AF0000, 0xC2200000,
};

s32 N(vectorList_80241C84)[] = {
    0x43C80000, 0x41F00000, 0x42200000, 0x43960000, 0x42A00000, 0x42200000, 0x43160000, 0x43480000,
    0x42200000, 0x42C80000, 0x43AF0000, 0x42200000,
};

Script N(script_80241CB4) = SCRIPT({
    loop {
        PlaySound(661);
        sleep SI_VAR(0);
    }
});

Script N(script_80241CF4) = SCRIPT({
    SI_VAR(0) = 5;
    SI_MAP_VAR(11) = spawn N(script_80241CB4);
    spawn {
        LoadPath(160, N(vectorList_80241AEC), 8, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    LoadPath(160, N(vectorList_80241B4C), 8, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SI_MAP_VAR(10) = 1;
});

Script N(script_80241E4C) = SCRIPT({
    spawn {
        LoadPath(30, N(vectorList_80241BAC), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    LoadPath(45, N(vectorList_80241BDC), 4, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    kill SI_MAP_VAR(11);
});

Script N(script_80241F80) = SCRIPT({
    SI_VAR(0) = 4;
    SI_MAP_VAR(11) = spawn N(script_80241CB4);
    spawn {
        LoadPath(35, N(vectorList_80241C0C), 3, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    LoadPath(35, N(vectorList_80241C30), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_802420C8) = SCRIPT({
    spawn {
        LoadPath(40, N(vectorList_80241C54), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
    }
    LoadPath(40, N(vectorList_80241C84), 4, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    sleep 40;
    kill SI_MAP_VAR(11);
});

Script N(script_80242240) = SCRIPT({
    if (SI_SAVE_FLAG(1377) == 1) {
        return;
    }
    if (SI_SAVE_VAR(0) < 45) {
        return;
    }
    if (SI_SAVE_FLAG(1375) == 0) {
        return;
    }
    SetNpcPos(0, 460, 200, 0xFFFFFF10);
    SetNpcPos(1, 0xFFFFFF9C, 200, 0xFFFFFFCE);
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 440) {
            break;
        }
    }
    DisablePlayerInput(1);
    SI_MAP_VAR(10) = 0;
    spawn N(script_80241CF4);
    SetCamType(0, 1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 25.0, -7.0);
    SetCamDistance(0, 450);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SI_VAR(0) = 270;
    SI_VAR(1) = 100;
    SI_VAR(2) = 0xFFFFFFA9;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 14.0, -11.0);
    SetCamPosA(0, 87, 0);
    SetCamPosB(0, 0, 0xFFFFFFCE);
    SetCamPosC(0, 87, 0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 30;
    SetCamDistance(0, 150);
    SetCamPitch(0, 17.0, -16.0);
    PanToTarget(0, 0, 1);
    loop {
        sleep 1;
        if (SI_MAP_VAR(10) == 1) {
            break;
        }
    }
    NpcFaceNpc(0, 1, 1);
    NpcFaceNpc(1, 0, 1);
    spawn N(script_80241E4C);
    sleep 30;
    SpeakToPlayer(0, 0x490016, 0x490001, 0, 0x110088);
    NpcFaceNpc(1, 0, 1);
    SpeakToPlayer(1, 0x490016, 0x490001, 0, 0x110089);
    InterpNpcYaw(0, 0, 1);
    sleep 20;
    SpeakToPlayer(0, 0x490016, 0x490001, 0, 0x11008A);
    SpeakToPlayer(1, 0x490016, 0x490001, 0, 0x11008B);
    SetCamType(0, 1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 14.0, -11.0);
    SetCamDistance(0, 450);
    SetCamPosA(0, 87, 0);
    SetCamPosB(0, 0, 0xFFFFFFCE);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn N(script_80241F80);
    SetNpcVar(0, 0, 1);
});

Script N(script_Idle_80242810) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        sleep 1;
    }
    spawn {
        AdjustCam(0, 4.0, 0, 1000, 14.0, -11.0);
    }
    StartBossBattle(3);
});

Script N(script_Defeat_802428B8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcPos(0, 400, 20, 0xFFFFFFD8);
            SetNpcPos(1, 400, 20, 40);
            InterpNpcYaw(0, 270, 0);
            InterpNpcYaw(1, 270, 0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) += 0xFFFFFFC4;
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 900);
            SetCamPitch(0, 24.0, -4.0);
            SetCamPosA(0, -95.0, 0.0);
            SetCamPosB(0, 0.0, -50.0);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            await N(script_802420C8);
            ResetCam(0, 4.0);
            SI_SAVE_FLAG(1377) = 1;
            SI_MAP_VAR(0) = 1;
            DisablePlayerInput(0);
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Defeat_80242AC4) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
        0:
            if (SI_MAP_VAR(0) == 0) {
                sleep 1;
                goto 0;
            }
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242B58) = SCRIPT({
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(1377) == 0) {
        if (SI_SAVE_VAR(0) >= 45) {
            if (SI_SAVE_FLAG(1375) == 1) {
                SI_MAP_VAR(0) = 0;
                BindNpcIdle(-1, N(script_Idle_80242810));
                BindNpcDefeat(-1, N(script_Defeat_802428B8));
                SetNpcPos(0, 350, 120, 0xFFFFFF24);
                InterpNpcYaw(0, 270, 1);
            }
        }
    }
});

Script N(script_Init_80242C38) = SCRIPT({
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(1377) == 0) {
        if (SI_SAVE_VAR(0) >= 45) {
            if (SI_SAVE_FLAG(1375) == 1) {
                BindNpcDefeat(-1, N(script_Defeat_80242AC4));
                SetNpcPos(1, 200, 110, 29);
                InterpNpcYaw(1, 0, 1);
            }
        }
    }
});

StaticNpc N(npcGroup_80242CF4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241AC0),
        .pos = { 553.0, 60.0, 52.0 },
        .flags = 0x00040D01,
        .init = N(script_Init_80242B58),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241AC0),
        .pos = { 553.0, 60.0, 52.0 },
        .flags = 0x00040D01,
        .init = N(script_Init_80242C38),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
    },
};

NpcGroupList N(npcGroupList_802430D4) = {
    NPC_GROUP(N(npcGroup_80242CF4), 0x18070009),
    {},
};

s32 pad_0030EC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA0E8, 0xFFFFFF24, 60, 0xFFFFFFB5, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1384));
});

s32 pad_003134[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80243140_CC0E10

// rodata: D_80243148_CC0E18

// rodata: D_80243150_CC0E20

s32 pad_003158[] = {
    0x00000000, 0x00000000,
};
