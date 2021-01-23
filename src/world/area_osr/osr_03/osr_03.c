#include "osr_03.h"

s32 pad_000018[2];
s32 pad_000374[3];
Script N(script_80240430);
Script N(script_802404E0);
Script N(script_EnterWalk_802404F0);
Script N(main);
s32 N(extraAnimationList_802408CC)[16];
StaticNpc N(npcGroup_8024090C)[1];
NpcGroupList N(npcGroupList_80240AFC);
s32 pad_000B14[3];
s32 N(vectorList_80240B20)[15];
Script N(script_80240B5C);
s32 N(vectorList_80240BEC)[24];
Script N(script_80240C4C);
Script N(script_80240CDC);
Script N(script_80240F20);
Script N(script_8024108C);
Script N(script_80241190);
Script N(script_80241224);
Script N(script_802412B8);
Script N(script_8024134C);
Script N(script_802413E0);
s32 N(vectorList_80241630)[9];
Script N(script_80241654);
Script N(script_8024191C);
s32 pad_001B8C[1];
Script N(script_80241B90);
s32 N(vectorList_80241C90)[27];
Script N(script_80241CFC);
s32 pad_0020B8[2];
s32 N(vectorList_802420C0)[12];
s32 N(vectorList_802420F0)[18];
Script N(script_80242138);
Script N(script_80242390);
Script N(script_80242528);
s32 pad_00287C[1];
Script N(script_80242880);
s32 N(intTable_80242934)[24];
Script N(script_80242994);
Script N(script_80242AE0);
const char D_80242FE0_AB9270[8]; // "kkj_13"
const char D_80242FE8_AB9278[8]; // "hos_10"
const char D_80242FF0_AB9280[8]; // "kpa_60"
const char D_80242FF8_AB9288[8]; // "kkj_26"
const char D_80243000_AB9290[8]; // "kkj_14"
const char D_80243008_AB9298[8]; // "kkj_15"
const char D_80243010_AB92A0[8]; // "hos_10"
s32 pad_003018[2];

// text: func_Init_AB6290

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_AB62B0

// text: func_80240090_AB6320

// text: func_802400C4_AB6354

// text: func_802401A0_AB6430

// text: func_80240290_AB6520

s32 pad_000374[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 604.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, 290.0f, 180.0f },
    { 0.0f, -50.0f, 0.0f, 180.0f },
    { 0.0f, 0.0f, 0.0f, 180.0f },
    { 0.0f, -50.0f, 0.0f, 180.0f },
    { 0.0f, 0.0f, -290.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x0,
};

Script N(script_80240430) = SCRIPT({
    EnableGroup(69, 0);
    EnableGroup(77, 0);
    EnableGroup(94, 0);
    EnableGroup(99, 0);
    EnableGroup(102, 0);
    EnableGroup(108, 0);
    EnableGroup(115, 0);
    EnableGroup(129, 0);
});

Script N(script_802404E0) = SCRIPT({

});

Script N(script_EnterWalk_802404F0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            spawn N(script_802413E0);
        }
        == 2 {
            spawn N(script_80241654);
        }
        == 3 {
            spawn N(script_80240430);
            spawn N(script_80241CFC);
        }
        == 4 {
            sleep 15;
            spawn N(script_80242528);
        }
        == 5 {
            spawn N(script_80240430);
            spawn N(script_80242AE0);
        }
        == 6 {
            spawn N(script_8024191C);
        } else {
            SI_VAR(0) = N(script_802404E0);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 24;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            MakeNpcs(0, N(npcGroupList_80240AFC));
        } else {
        }
    }
    match SI_SAVE_VAR(0) {
        0xFFFFFF96, 0xFFFFFFB3, 0xFFFFFFF1 {
            ClearAmbientSounds(250);
            SetMusicTrack(0, 115, 0, 8);
        }
        == 0xFFFFFFC9 {
            ClearAmbientSounds(250);
            SetMusicTrack(0, 102, 0, 8);
        }
        5, 37, 57 {
            ClearAmbientSounds(250);
            SetMusicTrack(0, 116, 0, 8);
        }
        == 87 {
            ClearAmbientSounds(250);
            FadeOutMusic(0, 500);
        } else {
            if (SI_SAVE_FLAG(509) == 0) {
            } else {
                SetMusicTrack(0, 95, 0, 8);
            }
        }
    }
    spawn N(script_EnterWalk_802404F0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 4) {
        sleep 15;
    } else {
        sleep 1;
    }
});

NpcSettings N(npcSettings_802408A0) = {
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

s32 N(extraAnimationList_802408CC)[] = {
    0x00600009, 0x0060000A, 0x0060000B, 0x0060000C, 0x0060000D, 0x0060000E, 0x0060000F, 0x00600010,
    0x00600011, 0x00600012, 0x00600013, 0x00600014, 0x00600015, 0x00600016, 0x0060001A, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_8024090C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802408A0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_802408CC),
    },
};

NpcGroupList N(npcGroupList_80240AFC) = {
    NPC_GROUP(N(npcGroup_8024090C), 0x00000000),
    {},
};

s32 pad_000B14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(vectorList_80240B20)[] = {
    0xC2C80000, 0x428C0000, 0x445A4000, 0xC3A40000, 0xC1200000, 0x44610000, 0xC3CB0000, 0xC2B40000,
    0x446F8000, 0xC3F28000, 0xC32A0000, 0x447C8000, 0xC41A8000, 0xC3660000, 0x44866000,
};

Script N(script_80240B5C) = SCRIPT({
    LoadPath(90, N(vectorList_80240B20), 5, 0);
    loop {
        GetNextPathPos();
        SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) != 1) {
            break;
        }
    }
});

s32 N(vectorList_80240BEC)[] = {
    0xC4AC8000, 0xC5386000, 0x450FC000, 0xC4A5A000, 0xC53D6000, 0x45117000, 0xC49D2000, 0xC53EA000,
    0x45102000, 0xC4992000, 0xC53B8000, 0x4510E000, 0xC49E8000, 0xC53B8000, 0x45102000, 0xC4A5A000,
    0xC53F1000, 0x450F9000, 0xC4AD6000, 0xC543E000, 0x45114000, 0xC4B32000, 0xC546D000, 0x45130000,
};

Script N(script_80240C4C) = SCRIPT({
    LoadPath(135, N(vectorList_80240BEC), 8, 0);
    loop {
        GetNextPathPos();
        SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) != 1) {
            break;
        }
    }
});

Script N(script_80240CDC) = SCRIPT({
    loop {
        MakeLerp(90, 0xFFFFFFA6, 30, 0);
        loop {
            UpdateLerp();
            TranslateGroup(25, 0, SI_MAP_VAR(14), 0);
            func_80240020_AB62B0(SI_VAR(0));
            RotateGroup(25, SI_VAR(0), 0, 0, 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        loop 2 {
            TranslateGroup(25, 0, SI_MAP_VAR(14), 0);
            RotateGroup(25, 0xFFFFFFEC, 0, 0, 1);
            sleep 1;
        }
        MakeLerp(0xFFFFFFA6, 90, 30, 0);
        loop {
            UpdateLerp();
            TranslateGroup(25, 0, SI_MAP_VAR(14), 0);
            func_80240020_AB62B0(SI_VAR(0));
            RotateGroup(25, SI_VAR(0), 0, 0, 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        loop 2 {
            TranslateGroup(25, 0, SI_MAP_VAR(14), 0);
            RotateGroup(25, 20, 0, 0, 1);
            sleep 1;
        }
    }
});

Script N(script_80240F20) = SCRIPT({
    loop {
        MakeLerp(45, 0xFFFFFFD3, 60, 4);
        loop {
            UpdateLerp();
            TranslateGroup(12, 0, SI_MAP_VAR(14), 0);
            RotateGroup(12, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(0xFFFFFFD3, 45, 60, 4);
        loop {
            UpdateLerp();
            TranslateGroup(12, 0, SI_MAP_VAR(14), 0);
            RotateGroup(12, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(script_8024108C) = SCRIPT({
    SI_MAP_VAR(14) = 0;
    spawn N(script_80240CDC);
    spawn N(script_80240F20);
    MakeLerp(0xFFFFFCE0, 4500, 400, 0);
    loop {
        UpdateLerp();
        SI_MAP_VAR(14) = SI_VAR(0);
        TranslateGroup(8, 0, SI_VAR(0), 0);
        TranslateGroup(29, 0, SI_VAR(0), 0);
        TranslateGroup(47, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80241190) = SCRIPT({
    MakeLerp(0, 0xFFFFEC78, 300, 0);
    loop {
        UpdateLerp();
        TranslateModel(95, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80241224) = SCRIPT({
    MakeLerp(0, 0xFFFFEC78, 300, 0);
    loop {
        UpdateLerp();
        TranslateModel(96, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802412B8) = SCRIPT({
    MakeLerp(0, 0xFFFFEC78, 300, 0);
    loop {
        UpdateLerp();
        TranslateModel(97, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_8024134C) = SCRIPT({
    MakeLerp(0, 0xFFFFEC78, 300, 0);
    loop {
        UpdateLerp();
        TranslateModel(98, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802413E0) = SCRIPT({
    SetMusicTrack(0, 107, 0, 8);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerPos(0, 0, 2000);
    EnableGroup(69, 0);
    EnableGroup(77, 0);
    EnableGroup(94, 0);
    EnableGroup(102, 0);
    EnableGroup(108, 0);
    EnableGroup(115, 0);
    EnableGroup(129, 0);
    EnableGroup(134, 0);
    SetCamPerspective(0, 3, 80, 16, 4096);
    UseSettingsFrom(0, 0, -1, 0);
    SetCamType(0, 1, 1);
    SetPanTarget(0, 0xFFFFFF6A, 0, 0);
    SetCamPitch(0, -13.0, 18.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn N(script_8024108C);
    sleep 1;
    SetPanTarget(0, 0xFFFFFFCE, 200, 0);
    SetCamDistance(0, 1000.0);
    SetCamSpeed(0, 0.75);
    sleep 180;
    GotoMap(D_80242FE0_AB9270, 2);
    sleep 100;
    DisablePlayerInput(0);
});

s32 N(vectorList_80241630)[] = {
    0xC3960000, 0x00000000, 0x43960000, 0xC3FA0000, 0x41C80000, 0x44610000, 0xC4340000, 0xC4228000,
    0x44BB8000,
};

Script N(script_80241654) = SCRIPT({
    FadeOutMusic(0, 500);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerAnimation(0x1001F);
    EnableGroup(69, 0);
    EnableGroup(77, 0);
    EnableGroup(94, 0);
    EnableGroup(99, 0);
    EnableGroup(102, 0);
    EnableGroup(108, 0);
    EnableGroup(115, 0);
    EnableGroup(129, 0);
    SetCamPerspective(0, 3, 80, 16, 4096);
    UseSettingsFrom(0, 0, -1, 0);
    SetPanTarget(0, 0, -1, 0);
    SetCamPitch(0, -13.0, 18.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    SI_MAP_VAR(14) = 0;
    spawn N(script_80240CDC);
    spawn N(script_80240F20);
    parallel {
        SI_VAR(0) = 0;
        loop {
            SI_VAR(0) += 45;
            InterpPlayerYaw(SI_VAR(0), 0);
            sleep 1;
        }
    }
    LoadPath(90, N(vectorList_80241630), 3, 0);
    loop {
        GetNextPathPos();
        SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    GotoMap(D_80242FE0_AB9270, 3);
    sleep 100;
});

Script N(script_8024191C) = SCRIPT({
    FadeOutMusic(0, 500);
    DisablePlayerInput(1);
    SetPlayerFlagBits(0x200000, 1);
    InterpPlayerYaw(90, 0);
    SetPlayerAnimation(0x10017);
    SetPlayerFlagBits(0x200000, 0);
    EnableGroup(69, 0);
    EnableGroup(77, 0);
    EnableGroup(94, 0);
    EnableGroup(99, 0);
    EnableGroup(102, 0);
    EnableGroup(108, 0);
    EnableGroup(115, 0);
    EnableGroup(129, 0);
    SetCamPerspective(0, 3, 25, 16, 6000);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0xFFFFFE70, 0xFFFFFA24, 0);
    SetCamDistance(0, 3500.0);
    SetCamPosA(0, 0xFFFFFED4, 0xFFFFFF60);
    SetCamPosB(0, 300, 80);
    SetCamPitch(0, -30.0, 0.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    DisablePlayerPhysics(1);
    sleep 15;
    await N(script_80240C4C);
    sleep 60;
    GotoMap(D_80242FE8_AB9278, 5);
    sleep 100;
    DisablePlayerInput(0);
});

s32 pad_001B8C[] = {
    0x00000000,
};

Script N(script_80241B90) = SCRIPT({
    loop {
        TranslateGroup(134, SI_MAP_VAR(10), SI_MAP_VAR(11), SI_MAP_VAR(12));
        RotateGroup(134, SI_MAP_VAR(13), 0, 1, 0);
        SI_VAR(0) = SI_MAP_VAR(10);
        SI_VAR(1) = SI_MAP_VAR(11);
        SI_VAR(2) = SI_MAP_VAR(12);
        SI_VAR(1) += 20;
        SI_VAR(2) += 0xFFFFFFF6;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 20;
        SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

s32 N(vectorList_80241C90)[] = {
    0xC42F0000, 0xC3AF0000, 0x44C80000, 0xC42F0000, 0xC3EB0000, 0x44C80000, 0xC4250000, 0xC3FC8000,
    0x44C6C000, 0xC40D4000, 0xC4020000, 0x44C9E000, 0xC36B0000, 0xC4250000, 0x44B4A000, 0xC2DC0000,
    0xC432C000, 0x44A28000, 0x41700000, 0xC4408000, 0x44906000, 0x00000000, 0xC4408000, 0x44660000,
    0x41A00000, 0xC4160000, 0x44160000,
};

Script N(script_80241CFC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    TranslateGroup(134, 0xFFFFFD44, 0xFFFFFEA2, 1600);
    SI_MAP_VAR(13) = 50;
    SI_MAP_VAR(10) = 0xFFFFFD44;
    SI_MAP_VAR(11) = 0xFFFFFEA2;
    SI_MAP_VAR(12) = 1600;
    spawn N(script_80241B90);
    SI_MAP_VAR(14) = 0;
    spawn N(script_80240CDC);
    spawn N(script_80240F20);
    SetCamPerspective(0, 3, 80, 16, 4096);
    UseSettingsFrom(0, 0, -1, 0);
    SetPanTarget(0, 0, -1, 0);
    SetCamPitch(0, -13.0, 18.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        PlaySound(384);
        MakeLerp(50, 10, 10, 0);
        loop {
            UpdateLerp();
            SI_MAP_VAR(13) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(10, 115, 80, 10);
        loop {
            UpdateLerp();
            SI_MAP_VAR(13) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    parallel {
        loop {
            0x802D2884(0, 0, 0);
            sleep 1;
        }
    }
    spawn {
        LoadPath(120, N(vectorList_80241C90), 9, 0);
90:
        GetNextPathPos();
        SI_MAP_VAR(10) = SI_VAR(1);
        SI_MAP_VAR(11) = SI_VAR(2);
        SI_MAP_VAR(12) = SI_VAR(3);
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 90;
        }
    }
    sleep 100;
    GotoMap(D_80242FF0_AB9280, 4);
    sleep 100;
});

s32 pad_0020B8[] = {
    0x00000000, 0x00000000,
};

s32 N(vectorList_802420C0)[] = {
    0xC42F0000, 0xC3B90000, 0x44C80000, 0xC43B8000, 0xC3E10000, 0x44C1C000, 0xC42F0000, 0xC4048000,
    0x44C1C000, 0xC41D8000, 0xC4098000, 0x44C1C000,
};

s32 N(vectorList_802420F0)[] = {
    0xC41D8000, 0xC4098000, 0x44C1C000, 0xC3D70000, 0xC4020000, 0x44BEA000, 0xC3AF0000, 0xC3D70000,
    0x44BB8000, 0xC2C80000, 0xC2C80000, 0x447A0000, 0x00000000, 0x00000000, 0x43FA0000, 0x00000000,
    0x00000000, 0x00000000,
};

Script N(script_80242138) = SCRIPT({
    parallel {
        SI_VAR(0) = 110;
        loop {
            0x802D617C(661, SI_VAR(0));
            SI_VAR(0) += 0xFFFFFFFE;
            if (SI_VAR(0) < 10) {
                SI_VAR(0) = 10;
            }
            sleep 4;
        }
    }
    GetNpcPos(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    loop {
        func_802400C4_AB6354();
        GetNpcPos(0, SI_VAR(9), SI_VAR(10), SI_VAR(11));
        SI_VAR(3) = SI_VAR(9);
        SI_VAR(4) = SI_VAR(10);
        SI_VAR(5) = SI_VAR(11);
        SI_VAR(3) -= SI_VAR(6);
        SI_VAR(4) -= SI_VAR(7);
        SI_VAR(5) -= SI_VAR(8);
        SI_VAR(6) = SI_VAR(9);
        SI_VAR(7) = SI_VAR(10);
        SI_VAR(8) = SI_VAR(11);
        if (SI_VAR(3) == 0) {
            if (SI_VAR(5) == 0) {
            } else {
                PlayEffect(31, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1.0, 0, 0, 0, 0, 0);
            }
        } else {
            PlayEffect(31, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1.0, 0, 0, 0, 0, 0);
        }
        sleep 3;
    }
});

Script N(script_80242390) = SCRIPT({
    sleep 30;
    spawn {
        loop {
            NpcFacePlayer(0, 0);
            sleep 1;
        }
    }
    SI_VAR(9) = spawn N(script_80242138);
    SetNpcAnimation(0, 0x60001A);
    LoadPath(30, N(vectorList_802420C0), 4, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        if (SI_VAR(0) == 0) {
            break;
        }
        sleep 1;
    }
    LoadPath(150, N(vectorList_802420F0), 6, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        if (SI_VAR(0) == 0) {
            break;
        }
        sleep 1;
    }
    kill SI_VAR(9);
});

Script N(script_80242528) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    EnableGroup(69, 0);
    EnableGroup(77, 0);
    EnableGroup(94, 0);
    EnableGroup(99, 0);
    EnableGroup(102, 0);
    EnableGroup(108, 0);
    EnableGroup(115, 0);
    EnableGroup(129, 0);
    SetCamPerspective(0, 3, 80, 16, 4096);
    UseSettingsFrom(0, 0, -1, 0);
    SetPanTarget(0, 0, -1, 0);
    SetCamPitch(0, -13.0, 18.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_MAP_VAR(14) = 0;
    spawn N(script_80240CDC);
    spawn N(script_80240F20);
    sleep 30;
    if (SI_SAVE_VAR(0) < 0xFFFFFF94) {
        await N(script_80242390);
    }
    sleep 80;
    func_80240090_AB6320();
    SI_SAVE_VAR(78) = SI_VAR(0);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFF94 {
            GotoMap(D_80243008_AB9298, 2);
        }
        < 0xFFFFFF97 {
            GotoMap(D_80243000_AB9290, 3);
        }
        < 0xFFFFFFB4 {
            GotoMap(D_80243000_AB9290, 4);
        }
        < 0xFFFFFFCA {
            GotoMap(D_80243000_AB9290, 5);
        }
        < 0xFFFFFFF2 {
            GotoMap(D_80243000_AB9290, 6);
        }
        < 6 {
            GotoMap(D_80243000_AB9290, 7);
        }
        < 38 {
            GotoMap(D_80243000_AB9290, 8);
        }
        < 58 {
            GotoMap(D_80243000_AB9290, 9);
        }
        < 88 {
            GotoMap(D_80242FF8_AB9288, 1);
        }
    }
    sleep 100;
});

s32 pad_00287C[] = {
    0x00000000,
};

Script N(script_80242880) = SCRIPT({
    ShakeCam(0, 0, 210, 2.0);
    MakeLerp(200, 50, 65, 0);
    loop {
        UpdateLerp();
        SI_VAR(0) /= 100;
        ShakeCam(0, 0, 4, SI_VAR(0));
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

s32 N(intTable_80242934)[] = {
    0xFFFFFDF8, 0xFFFFFEE8, 0x0000010E, 0x000000E6, 0xFFFFFF6A, 0x0000012C, 0xFFFFFE0C, 0xFFFFFF38,
    0x000000BE, 0xFFFFFE5C, 0xFFFFFF1A, 0xFFFFFF56, 0xFFFFFE70, 0xFFFFFE70, 0x000001C2, 0x00000000,
    0xFFFFFD30, 0x0000026C, 0xFFFFFEF2, 0xFFFFFD44, 0x000001D6, 0x00000140, 0xFFFFFE34, 0x00000212,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242994) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(4), 20),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), 110),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242934)),
        SI_CMD(ScriptOpcode_LOOP, 8),
            SI_CMD(ScriptOpcode_CALL, 0x802D617C, 0xB000001C, SI_VAR(5)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_FIXED(6.0), 30, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(4)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(5), 0xFFFFFFF6),
        SI_CMD(ScriptOpcode_IF_LT, SI_VAR(5), 10),
            SI_CMD(ScriptOpcode_SET, SI_VAR(5), 10),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(4), 0xFFFFFFFC),
        SI_CMD(ScriptOpcode_IF_LT, SI_VAR(4), 5),
            SI_CMD(ScriptOpcode_SET, SI_VAR(4), 5),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242AE0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetPlayerActionState(10);
    SetPlayerPos(0, 0, 0);
    DisablePlayerPhysics(1);
    SI_MAP_VAR(14) = 0;
    spawn N(script_80240CDC);
    spawn N(script_80240F20);
    spawn N(script_80242880);
    SI_VAR(9) = spawn N(script_80242994);
    SetCamPerspective(0, 3, 22, 16, 4096);
    UseSettingsFrom(0, 0, 0, 0);
    SetCamType(0, 1, 1);
    SetPanTarget(0, 0xFFFFFFC4, 0, 0);
    SetCamPitch(0, -20.0, -4.0);
    SetCamPosA(0, 0, 0xFFFFFFD8);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 20;
    SetPanTarget(0, 0, 0, 0);
    SetCamPitch(0, -13.0, 15.0);
    SetCamSpeed(0, 0.30078125);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        loop 6 {
            RandInt(20, SI_VAR(0));
            SI_VAR(0) += 30;
            sleep SI_VAR(0);
            func_802401A0_AB6430();
        }
    }
    MakeLerp(220, 600, 90, 1);
    loop {
        UpdateLerp();
        SI_VAR(2) = f SI_VAR(0);
        SI_VAR(2) /= 10;
        SetCamPerspective(0, 3, SI_VAR(2), 16, 4096);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(600, 1200, 250, 5);
    loop {
        UpdateLerp();
        SI_VAR(2) = f SI_VAR(0);
        SI_VAR(2) /= 10;
        SetCamPerspective(0, 3, SI_VAR(2), 1, 4096);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    kill SI_VAR(9);
    sleep 50;
    PlaySound(164);
    PlayEffect(53, 2, 0, 0xFFFFFE52, 1920, 15, SI_VAR(9), 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    spawn {
        func_80240290_AB6520(30, 2.0);
        MakeLerp(200, 100, 15, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100;
            func_80240290_AB6520(4, SI_VAR(0));
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    GotoMapSpecial(D_80243010_AB92A0, 1, 7);
    sleep 100;
});

// rodata: D_80242FE0_AB9270

// rodata: D_80242FE8_AB9278

// rodata: D_80242FF0_AB9280

// rodata: D_80242FF8_AB9288

// rodata: D_80243000_AB9290

// rodata: D_80243008_AB9298

// rodata: D_80243010_AB92A0

s32 pad_003018[] = {
    0x00000000, 0x00000000,
};
