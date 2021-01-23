#include "iwa_11.h"

s32 pad_00001C[1];
s32 pad_000278[2];
s32 pad_000308[2];
Script N(script_80240370);
s32 pad_00039C[1];
Script N(script_802403A0);
Script N(main);
s32 pad_00063C[1];
Script N(script_80240640);
Script N(script_802407B8);
Script N(script_80241908);
Script N(script_80241AE4);
Script N(script_80241C1C);
Script N(script_80241DE0);
Script N(script_80241FD8);
s32 unk_missing_80242124[9];
s32 N(unk_80242148)[98];
Script N(script_802422D0);
Script N(script_802424C0);
s32 unk_missing_802424FC[33];
Script N(script_Init_80242580);
StaticNpc N(npcGroup_8024263C)[1];
NpcGroupList N(npcGroupList_8024282C);
s32 pad_002844[3];
const char D_80242850_929240[8]; // "mac_03"
const char D_80242858_929248[8]; // "iwa_10"
const char D_80242860_929250[8]; // "mac_03"
const char D_80242868_929258[8]; // "iwa_10"
const char D_80242870_929260[8]; // "kmr_22"
s32 pad_002878[2];

// text: func_80240000_9269F0

s32 pad_00001C[] = {
    0x00000000,
};

// text: func_80240020_926A10

// text: func_802401B0_926BA0

// text: func_80240208_926BF8

s32 pad_000278[] = {
    0x00000000, 0x00000000,
};

// text: func_80240280_926C70

s32 pad_000308[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 15.0f, 90.0f },
    { 0.0f, 0.0f, 15.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x0,
};

Script N(script_80240370) = SCRIPT({
    SetMusicTrack(0, 128, 0, 8);
});

s32 pad_00039C[] = {
    0x00000000,
};

Script N(script_802403A0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFB8) {
        return;
    }
    GetEntryID(SI_VAR(0));
    func_80240000_9269F0();
    match SI_VAR(0) {
        == 0 {
            GotoMap(D_80242858_929248, 0);
        }
        == 1 {
            GotoMap(D_80242850_929240, 1);
        }
    }
    sleep 100;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 8;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 30, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    UseSettingsFrom(0, 0, 0, 0);
    SetCamPosA(0, 0xFFFFE958, 0);
    SetCamPosB(0, 5700, 0);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, 0, 0, 0);
    PanToTarget(0, 0, 1);
    MakeNpcs(1, N(npcGroupList_8024282C));
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    ModifyColliderFlags(0, 11, 0x7FFFFE00);
    await N(script_80241FD8);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn N(script_80241DE0);
        }
        == 1 {
            spawn N(script_80241C1C);
        }
    }
    spawn N(script_802422D0);
    spawn N(script_802403A0);
    spawn N(script_80240370);
});

s32 pad_00063C[] = {
    0x00000000,
};

Script N(script_80240640) = SCRIPT({
    PlaySoundAtModel(14, 0xB000001A, 0);
    SI_VAR(0) =f SI_MAP_VAR(0);
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(0) +=f 0xFFFFFECA;
    } else {
        SI_VAR(0) +=f 0xFFFFFE3E;
    }
    SI_VAR(1) = 140;
    SI_VAR(2) = 0;
    SI_VAR(3) = 1.0;
    SI_VAR(4) = 3.0;
    SI_VAR(11) += 10000;
    EnableModel(SI_VAR(11), 1);
    loop 20 {
        TranslateModel(SI_VAR(11), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(SI_VAR(11), SI_VAR(3), SI_VAR(3), 1);
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(3) += 0.046875;
        SI_VAR(4) *= 0.90625;
        sleep 1;
    }
    EnableModel(SI_VAR(11), 0);
});

Script N(script_802407B8) = SCRIPT({
0:
    SI_VAR(0) = SI_MAP_VAR(0);
    TranslateModel(13, SI_VAR(0), 0, 0);
    TranslateModel(14, SI_VAR(0), 0, 0);
    TranslateModel(18, SI_VAR(0), 0, 0);
    TranslateModel(20, SI_VAR(0), 0, 0);
    TranslateModel(22, SI_VAR(0), 0, 0);
    TranslateModel(24, SI_VAR(0), 0, 0);
    TranslateModel(16, SI_VAR(0), 0, 0);
    TranslateModel(0, SI_VAR(0), 0, 0);
    TranslateModel(1, SI_VAR(0), 0, 0);
    TranslateModel(2, SI_VAR(0), 0, 0);
    TranslateModel(3, SI_VAR(0), 0, 0);
    TranslateModel(4, SI_VAR(0), 0, 0);
    TranslateModel(5, SI_VAR(0), 0, 0);
    TranslateModel(7, SI_VAR(0), 0, 0);
    TranslateModel(8, SI_VAR(0), 0, 0);
    TranslateModel(10, SI_VAR(0), 0, 0);
    TranslateModel(11, SI_VAR(0), 0, 0);
    TranslateModel(27, SI_VAR(0), 0, 0);
    TranslateModel(29, SI_VAR(0), 0, 0);
    TranslateModel(31, SI_VAR(0), 0, 0);
    if (SI_MAP_FLAG(5) == 1) {
        SI_VAR(0) = 180;
        TranslateModel(13, 0xFFFFFFBB, 0xFFFFFFCE, 0);
        TranslateModel(14, 0xFFFFFFBB, 0xFFFFFFCE, 0);
        TranslateModel(18, 75, 25, 2);
        TranslateModel(20, 30, 30, 2);
        TranslateModel(22, 0xFFFFFFF6, 30, 2);
        TranslateModel(24, 0xFFFFFFCE, 30, 2);
        TranslateModel(16, -1, 0xFFFFFFC6, 0);
        TranslateModel(7, 82, 0xFFFFFFED, 0xFFFFFFDD);
        TranslateModel(8, 82, 0xFFFFFFED, 0xFFFFFFDD);
        TranslateModel(10, 82, 0xFFFFFFED, 35);
        TranslateModel(11, 82, 0xFFFFFFED, 35);
        TranslateModel(27, 0xFFFFFFEB, 30, 0);
        TranslateModel(29, 0xFFFFFFE7, 30, 0);
        TranslateModel(31, 0xFFFFFFC1, 15, 0);
        RotateModel(13, SI_VAR(0), 0, 1, 0);
        RotateModel(14, SI_VAR(0), 0, 1, 0);
        RotateModel(18, SI_VAR(0), 0, 1, 0);
        RotateModel(20, SI_VAR(0), 0, 1, 0);
        RotateModel(22, SI_VAR(0), 0, 1, 0);
        RotateModel(24, SI_VAR(0), 0, 1, 0);
        RotateModel(16, SI_VAR(0), 0, 1, 0);
        RotateModel(0, SI_VAR(0), 0, 1, 0);
        RotateModel(1, SI_VAR(0), 0, 1, 0);
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        RotateModel(3, SI_VAR(0), 0, 1, 0);
        RotateModel(4, SI_VAR(0), 0, 1, 0);
        RotateModel(5, SI_VAR(0), 0, 1, 0);
        RotateModel(7, SI_VAR(0), 0, 1, 0);
        RotateModel(8, SI_VAR(0), 0, 1, 0);
        RotateModel(10, SI_VAR(0), 0, 1, 0);
        RotateModel(11, SI_VAR(0), 0, 1, 0);
        RotateModel(27, SI_VAR(0), 0, 1, 0);
        RotateModel(29, SI_VAR(0), 0, 1, 0);
        RotateModel(31, SI_VAR(0), 0, 1, 0);
        TranslateModel(13, 69, 50, 0);
        TranslateModel(14, 69, 50, 0);
        TranslateModel(18, 0xFFFFFFB5, 0xFFFFFFE7, 0xFFFFFFFE);
        TranslateModel(20, 0xFFFFFFE2, 0xFFFFFFE2, 0xFFFFFFFE);
        TranslateModel(22, 10, 0xFFFFFFE2, 0xFFFFFFFE);
        TranslateModel(24, 50, 0xFFFFFFE2, 0xFFFFFFFE);
        TranslateModel(16, 1, 58, 0);
        TranslateModel(7, 0xFFFFFFAE, 19, 35);
        TranslateModel(8, 0xFFFFFFAE, 19, 35);
        TranslateModel(10, 0xFFFFFFAE, 19, 0xFFFFFFDD);
        TranslateModel(11, 0xFFFFFFAE, 19, 0xFFFFFFDD);
        TranslateModel(27, 21, 0xFFFFFFE2, 0);
        TranslateModel(29, 25, 0xFFFFFFE2, 0);
        TranslateModel(31, 63, 0xFFFFFFF1, 0);
    }
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(2) = SI_MAP_VAR(0);
    } else {
        SI_VAR(2) = 1000;
        SI_VAR(2) -= SI_MAP_VAR(0);
    }
    func_802401B0_926BA0();
    RotateModel(20, SI_VAR(0), 0, 0, 1);
    RotateModel(22, SI_VAR(0), 0, 0, 1);
    RotateModel(24, SI_VAR(0), 0, 0, 1);
    func_80240208_926BF8();
    RotateModel(18, SI_VAR(0), 0, 0, 1);
    func_80240020_926A10(SI_VAR(2), SI_VAR(0), 0, 0xFFFFFFEC, 75, 0, 0);
    func_80240020_926A10(SI_VAR(2), SI_VAR(1), 0xFFFFFFF6, 10, 75, 0, 0xFFFFFFA6);
    TranslateModel(27, SI_VAR(0), SI_VAR(1), 0);
    func_80240020_926A10(SI_VAR(2), SI_VAR(0), 0, 0xFFFFFFEC, 75, 0, 0);
    SI_VAR(0) += 5;
    TranslateModel(31, SI_VAR(0), 0xFFFFFFF2, 0);
    func_80240020_926A10(SI_VAR(2), SI_VAR(0), 0, 0xFFFFFFEC, 75, 0, 0);
    func_80240020_926A10(SI_VAR(2), SI_VAR(1), 0xFFFFFFF6, 10, 75, 0, 0xFFFFFFA6);
    TranslateModel(29, SI_VAR(0), SI_VAR(1), 0);
    func_80240020_926A10(SI_VAR(2), SI_VAR(0), 0xFFFFFFD8, 40, 75, 0, 90);
    RotateModel(29, SI_VAR(0), 0, 0, 1);
    func_80240020_926A10(SI_VAR(12), SI_VAR(0), 0xFFFFFFE2, 30, 10, 0, 0);
    RotateModel(16, SI_VAR(0), 0, 0, 1);
    if (SI_MAP_VAR(1) != 0) {
        if (SI_VAR(13) == 0) {
            spawn {
                sleep 18;
                spawn N(script_80240640);
            }
        }
    }
    if (SI_VAR(13) <= 20) {
        func_80240020_926A10(SI_VAR(13), SI_VAR(0), 0.703125, 1.0, 10, 0, 180);
        func_80240020_926A10(SI_VAR(13), SI_VAR(2), 0.0, 0.296875, 10, 0, 180);
        SI_VAR(1) = 0.296875;
        SI_VAR(1) -=f SI_VAR(2);
        SI_VAR(1) += 1.0;
        ScaleModel(14, SI_VAR(1), SI_VAR(0), SI_VAR(1));
        ScaleModel(13, SI_VAR(1), SI_VAR(0), SI_VAR(1));
    } else {
        SI_VAR(0) = 1.0;
        SI_VAR(2) = 0.296875;
        SI_VAR(1) = 0.296875;
        SI_VAR(1) -=f SI_VAR(2);
        SI_VAR(1) += 1.0;
        ScaleModel(14, SI_VAR(1), SI_VAR(0), SI_VAR(1));
        ScaleModel(13, SI_VAR(1), SI_VAR(0), SI_VAR(1));
    }
    if (SI_MAP_FLAG(0) == 1) {
        SI_VAR(8) = 10;
        SI_FLAG(1) = 1;
        SI_MAP_FLAG(0) = 0;
    }
    if (SI_MAP_FLAG(1) == 1) {
        SI_VAR(8) = 0xFFFFFFF6;
        SI_FLAG(1) = 1;
        SI_MAP_FLAG(1) = 0;
    }
    if (SI_MAP_FLAG(2) == 1) {
        SI_VAR(8) = 10;
        SI_FLAG(2) = 1;
        SI_MAP_FLAG(2) = 0;
    }
    if (SI_MAP_FLAG(3) == 1) {
        SI_VAR(8) = 0xFFFFFFF6;
        SI_FLAG(2) = 1;
        SI_MAP_FLAG(3) = 0;
    }
    if (SI_FLAG(1) == 1) {
        SI_VAR(9) += SI_VAR(8);
        if (SI_VAR(9) >= 90) {
            SI_VAR(9) = 90;
            SI_FLAG(1) = 0;
        }
        if (SI_VAR(9) <= 0) {
            SI_VAR(9) = 0;
            SI_FLAG(1) = 0;
        }
    }
    if (SI_FLAG(2) == 1) {
        SI_VAR(10) += SI_VAR(8);
        if (SI_VAR(10) >= 90) {
            SI_VAR(10) = 90;
            SI_FLAG(2) = 0;
        }
        if (SI_VAR(10) <= 0) {
            SI_VAR(10) = 0;
            SI_FLAG(2) = 0;
        }
    }
    RotateModel(8, SI_VAR(9), 0, -1, 0);
    RotateModel(7, SI_VAR(9), 0, -1, 0);
    RotateModel(11, SI_VAR(10), 0, 1, 0);
    RotateModel(10, SI_VAR(10), 0, 1, 0);
    if (SI_MAP_FLAG(4) == 1) {
        if (SI_MAP_FLAG(5) == 0) {
            SI_VAR(0) = SI_MAP_VAR(0);
            SI_VAR(0) += 0xFFFFFE57;
            SI_VAR(1) += 75;
            SI_VAR(2) += 20;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        } else {
            SI_VAR(0) = SI_MAP_VAR(0);
            SI_VAR(0) += 0xFFFFFEB1;
            SI_VAR(1) += 75;
            SI_VAR(2) += 20;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
    }
    SI_MAP_VAR(0) += SI_MAP_VAR(1);
    SI_VAR(0) = SI_MAP_VAR(0);
    SI_VAR(0) /= 75;
    if (SI_VAR(0) != SI_VAR(14)) {
        SI_VAR(14) = SI_VAR(0);
        SI_VAR(13) = -1;
        SI_VAR(11) += 1;
        if (SI_VAR(11) == 10) {
            SI_VAR(11) = 0;
        }
    }
    SI_VAR(13) += 1;
    if (SI_VAR(13) > 1000) {
        SI_VAR(13) = 1000;
    }
    SI_VAR(12) += 1;
    if (SI_VAR(12) > 1000) {
        SI_VAR(12) = 0;
    }
    sleep 1;
    goto 0;
});

Script N(script_80241908) = SCRIPT({
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(0) += 0xFFFFFE57;
    } else {
        SI_VAR(0) += 0xFFFFFEB1;
    }
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(5) = SI_VAR(2);
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(3) += 0xFFFFFFC7;
    } else {
        SI_VAR(3) += 57;
    }
    SI_VAR(4) += 0xFFFFFFE1;
    SI_VAR(5) += 0;
    SetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(0) += 0;
    } else {
        SI_VAR(0) += 0;
    }
    SI_VAR(1) += 0xFFFFFFFA;
    SI_VAR(2) += 0xFFFFFFD8;
    SetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80241AE4) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_MAP_FLAG(5) == 0) {
        if (SI_VAR(0) < 0xFFFFFBB4) {
            SI_VAR(0) = 0xFFFFFBB4;
        }
        SI_VAR(0) += 40;
        SI_VAR(1) = 30;
        SI_VAR(2) += 40;
    } else {
        if (SI_VAR(0) < 0xFFFFFBB4) {
            SI_VAR(0) = 0xFFFFFBB4;
        }
        SI_VAR(0) += 0xFFFFFFD8;
        SI_VAR(1) = 30;
        SI_VAR(2) += 40;
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80241C1C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SetPlayerActionState(0);
    InterpPlayerYaw(270, 0);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    EnableNpcShadow(0xFFFFFFFC, 0);
    HidePlayerShadow(1);
    SI_MAP_FLAG(4) = 1;
    SI_MAP_FLAG(5) = 1;
    spawn N(script_80241908);
    spawn {
        MakeLerp(6400, 0xFFFFEA20, 1200, 0);
        loop {
            UpdateLerp();
            SI_MAP_VAR(0) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        loop {
            sleep 1;
        }
    }
    sleep 1200;
    GotoMap(D_80242860_929250, 1);
    sleep 100;
});

Script N(script_80241DE0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SetPlayerActionState(0);
    InterpPlayerYaw(90, 0);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    EnableNpcShadow(0xFFFFFFFC, 0);
    HidePlayerShadow(1);
    spawn N(script_80241908);
    SI_MAP_FLAG(4) = 1;
    MakeLerp(0, 6350, 600, 0);
    loop {
        UpdateLerp();
        SI_MAP_VAR(0) = SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFB8) {
        SI_SAVE_VAR(0) = 0xFFFFFFB8;
    }
    if (SI_SAVE_FLAG(2) == 0) {
        SI_SAVE_FLAG(2) = 1;
        FadeOutMusic(0, 1500);
        GotoMapSpecial(D_80242870_929260, 2, 6);
        sleep 100;
        return;
    }
    GotoMap(D_80242868_929258, 0);
    sleep 100;
});

Script N(script_80241FD8) = SCRIPT({
    EnableModel(35, 0);
    SetModelFlags(35, 256, 1);
    CloneModel(35, 10000);
    CloneModel(35, 0x2711);
    CloneModel(35, 0x2712);
    CloneModel(35, 0x2713);
    CloneModel(35, 0x2714);
    CloneModel(35, 0x2715);
    CloneModel(35, 0x2716);
    CloneModel(35, 0x2717);
    CloneModel(35, 0x2718);
    CloneModel(35, 0x2719);
    SI_MAP_FLAG(5) = 0;
    SI_MAP_VAR(0) = 0xFFFFE890;
    SI_MAP_VAR(1) = 10;
    spawn N(script_802407B8);
    sleep 1;
});

s32 unk_missing_80242124[] = {
    0x00000000, 0x00000000, 0x00000000, 0x0000003F, 0x00000048, 0x00000054, 0x00000067, 0x0000006F,
    0x00000077,
};

s32 N(unk_80242148)[] = {
    0xFFFFE890, 0xFFFFE98A, 0xFFFFE98A, 0xFFFFE98A, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFEE6C,
    0xFFFFEF66, 0xFFFFE98A, 0xFFFFE98A, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF060, 0xFFFFEF66,
    0xFFFFEF66, 0xFFFFE98A, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFEF66,
    0xFFFFE98A, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF542, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E,
    0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF63C, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E,
    0xFFFFF34E, 0xFFFFF34E, 0x000000FA, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF736,
    0xFFFFF34E, 0x000002EE, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFFD12, 0xFFFFF736, 0xFFFFF736,
    0x000005DC, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFFD12, 0xFFFFFD12, 0xFFFFF736, 0x000007D0,
    0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFFD12, 0xFFFFFD12, 0xFFFFFD12, 0x00000ABE, 0xFFFFF34E,
    0xFFFFF34E, 0xFFFFF34E, 0x000006D6, 0x000000FA, 0xFFFFFD12, 0x00000CB2, 0xFFFFF34E, 0xFFFFF34E,
    0xFFFFF34E, 0x000006D6, 0x000000FA, 0x000000FA, 0x00000FA0, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E,
    0x000006D6, 0x000006D6, 0x000000FA, 0x00001194, 0xFFFFF34E, 0xFFFFF34E, 0xFFFFF34E, 0x000006D6,
    0x000006D6, 0x000006D6,
};

Script N(script_802422D0) = SCRIPT({
    TranslateGroup(50, 0xFFFFE98A, 0, 0);
    TranslateGroup(93, 0xFFFFF34E, 0, 0);
    TranslateGroup(129, 1750, 0, 0);
    GetEntryID(SI_VAR(2));
    match SI_VAR(2) {
        == 0 {
            SI_VAR(3) = 350;
            SI_MAP_VAR(1) = 10;
        }
        == 1 {
            SI_VAR(3) = 400;
            SI_MAP_VAR(1) = 0xFFFFFFF6;
        }
    }
    loop {
        SI_VAR(0) = SI_MAP_VAR(0);
        SI_VAR(0) -= SI_VAR(3);
        SetPanTarget(0, SI_VAR(0), 0, 0);
        func_80240280_926C70();
        TranslateGroup(63, SI_VAR(5), 0, 0);
        TranslateGroup(72, SI_VAR(6), 0, 0);
        TranslateGroup(84, SI_VAR(7), 0, 0);
        TranslateGroup(103, SI_VAR(8), 0, 0);
        TranslateGroup(111, SI_VAR(9), 0, 0);
        TranslateGroup(119, SI_VAR(10), 0, 0);
        sleep 1;
    }
});

Script N(script_802424C0) = SCRIPT({

});

NpcSettings N(npcSettings_802424D0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = &N(script_802424C0),
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

s32 unk_missing_802424FC[] = {
    0x00000000, 0x001E0018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x001A0017,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00630000,
};

Script N(script_Init_80242580) = SCRIPT({
    EnableNpcShadow(-1, 0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetNpcPos(-1, 0xFFFFFE57, 70, 0xFFFFFFEC);
        InterpNpcYaw(-1, 90, 0);
    } else {
        SetNpcPos(-1, 0xFFFFFE57, 70, 0xFFFFFFEC);
        InterpNpcYaw(-1, 270, 0);
    }
});

StaticNpc N(npcGroup_8024263C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802424D0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80242580),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x008C0001, 0x008C0003, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001,
        },
    },
};

NpcGroupList N(npcGroupList_8024282C) = {
    NPC_GROUP(N(npcGroup_8024263C), 0x00000000),
    {},
};

s32 pad_002844[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242850_929240

// rodata: D_80242858_929248

// rodata: D_80242860_929250

// rodata: D_80242868_929258

// rodata: D_80242870_929260

s32 pad_002878[] = {
    0x00000000, 0x00000000,
};

