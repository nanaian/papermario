#include "flo_18.h"

s32 pad_000524[3];
s32 pad_000588[2];
s32 pad_0007CC[1];
Script N(script_80240830);
s32 pad_0008B8[2];
Script N(script_UpdateTexturePan_802408C0);
Script N(script_ExitWalk_8024095C);
Script N(script_802409B8);
s32 N(lavaResetList_802409E4)[16];
Script N(main);
s32 pad_000E88[2];
Script N(script_80240E90);
Script N(script_80241094);
Script N(script_80241284);
Script N(script_802413F0);
Script N(script_80241ED4);
Script N(script_80242174);
Script N(script_80242474);
Script N(script_80242620);
Script N(script_80242910);
Script N(script_80242B18);
s32 N(intTable_80242DC8)[24];
Script N(script_80242E28);
Script N(script_802436BC);
s32 N(vectorList_80243F68)[15];
s32 N(vectorList_80243FA4)[15];
s32 N(vectorList_80243FE0)[15];
s32 N(vectorList_8024401C)[15];
Script N(script_80244058);
Script N(script_80244270);
Script N(script_802445D4);
Script N(script_80244774);
Script N(script_Idle_80244B3C);
Script N(script_Defeat_80244C84);
Script N(script_80244E2C);
Script N(script_80244ED0);
Script N(script_80245004);
Script N(script_80245108);
Script N(script_80245228);
Script N(script_8024527C);
Script N(script_802452D0);
Script N(script_80245324);
Script N(script_80245378);
Script N(script_802454D4);
Script N(script_80245544);
Script N(script_802455B4);
Script N(script_80245624);
Script N(script_802456D4);
Script N(script_Interact_802457D4);
Script N(script_Init_80245AA8);
Script N(script_Init_80245B30);
Script N(script_Init_80245B90);
Script N(script_Init_80245C04);
Script N(script_Init_80245C78);
StaticNpc N(npcGroup_80245CEC)[5];
NpcGroupList N(npcGroupList_8024669C);
s32 pad_0066B4[3];
Script N(script_SearchBush_802466C0);
Script N(script_ShakeTree_80246A20);
Script N(script_80247024);
s32 pad_007034[3];
const char D_80247040_CE36E0[8]; // "flo_17"
const char D_80247048_CE36E8[8]; // "flo_15"

// text: func_80240000_CDC6A0

// text: func_80240124_CDC7C4

// text: func_8024030C_CDC9AC

// text: func_80240340_CDC9E0

// text: func_80240394_CDCA34

s32 pad_000524[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240530_CDCBD0

s32 pad_000588[] = {
    0x00000000, 0x00000000,
};

// text: func_80240590_CDCC30

// text: func_80240600_CDCCA0

s32 pad_0007CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -320.0f, 0.0f, 0.0f, 90.0f },
    { 36.0f, 0.0f, 40.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190122,
};

Script N(script_80240830) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 51, 0, 8);
            PlaySoundAtCollider(20, 0x80000025, 0);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

s32 pad_0008B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_802408C0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_CDC6A0();
                    return;
                }
            }
        }
    }
    func_80240124_CDC7C4();
});

Script N(script_ExitWalk_8024095C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80247040_CE36E0, 1);
    sleep 100;
});

Script N(script_802409B8) = SCRIPT({
    bind N(script_ExitWalk_8024095C) to 0x80000 0;
});

s32 N(lavaResetList_802409E4)[] = {
    0x0000000B, 0xC3480000, 0x00000000, 0x42F00000, 0x0000000C, 0x00000000, 0x00000000, 0x42F00000,
    0x0000000D, 0x432A0000, 0x00000000, 0x42F00000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_8024669C));
    spawn N(script_80247024);
    spawn N(script_802436BC);
    spawn N(script_802456D4);
    ModifyColliderFlags(3, 8, 2);
    spawn {
        ResetFromLava(N(lavaResetList_802409E4));
    }
    EnableTexPanning(9, 1);
    EnableTexPanning(11, 1);
    EnableTexPanning(12, 1);
    EnableTexPanning(13, 1);
    EnableTexPanning(14, 1);
    EnableTexPanning(15, 1);
    EnableTexPanning(7, 1);
    EnableTexPanning(8, 1);
    EnableTexPanning(10, 1);
    EnableTexPanning(16, 1);
    EnableTexPanning(17, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFF74;
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
        spawn N(script_UpdateTexturePan_802408C0);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFF38;
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
        spawn N(script_UpdateTexturePan_802408C0);
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        ModifyColliderFlags(0, 1, 0x7FFFFE00);
        SI_VAR(0) = N(script_802409B8);
        spawn EnterWalk;
    } else {
        spawn N(script_80244058);
        spawn N(script_802409B8);
    }
    await N(script_80240830);
    if (SI_SAVE_VAR(0) >= 53) {
        func_8024030C_CDC9AC();
    }
});

s32 pad_000E88[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240E90) = SCRIPT({
    group 11;
    loop {
        PlayEffect(94, 0, -16.0, 102.0, -4.099609375, 80.900390625, 102.0, -4.099609375, 0.5, 6, 0, 0, 0, 0);
        func_80240340_CDC9E0();
        sleep 4;
        PlayEffect(94, 0, 80.900390625, 102.0, -4.099609375, -16.0, 102.0, -4.099609375, 0.5, 6, 0, 0, 0, 0);
        func_80240340_CDC9E0();
        sleep 4;
        if (SI_SAVE_VAR(253) >= 3) {
            break;
        }
    }
    SI_VAR(0) = 6;
    loop 5 {
        PlayEffect(94, 0, -16.0, 102.0, -4.099609375, 80.900390625, 102.0, -4.099609375, 0.5, 6, 0, 0, 0, 0);
        func_80240340_CDC9E0();
        sleep SI_VAR(0);
        SI_VAR(0) += 2;
        PlayEffect(94, 0, 80.900390625, 102.0, -4.099609375, -16.0, 102.0, -4.099609375, 0.5, 6, 0, 0, 0, 0);
        func_80240340_CDC9E0();
        sleep SI_VAR(0);
        SI_VAR(0) += 2;
    }
});

Script N(script_80241094) = SCRIPT({
    EnableModel(SI_VAR(15), 1);
    SI_VAR(14) = 159;
    loop SI_VAR(14) {
        SI_VAR(3) += 0;
        SI_VAR(4) += 0.0;
        SI_VAR(5) = 0.0107421875;
        SI_VAR(0) +=f SI_VAR(3);
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(2) +=f SI_VAR(5);
        SI_VAR(6) *= 1.0107421875;
        SI_VAR(7) += 0.0107421875;
        SI_VAR(8) =f SI_VAR(6);
        func_80240394_CDCA34(SI_VAR(14), SI_VAR(10), 0.0, 0.203125, 15, 0, 0);
        SI_VAR(8) +=f SI_VAR(10);
        SI_VAR(9) =f SI_VAR(7);
        func_80240394_CDCA34(SI_VAR(14), SI_VAR(10), 0.0, 0.203125, 20, 0, 90);
        SI_VAR(9) +=f SI_VAR(10);
        SI_VAR(10) =f SI_VAR(0);
        SI_VAR(10) *= 10.0;
        TranslateModel(SI_VAR(15), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(SI_VAR(15), SI_VAR(8), SI_VAR(9), 1);
        RotateModel(SI_VAR(15), SI_VAR(10), 0, 0, 1);
        sleep 1;
    }
    EnableModel(SI_VAR(15), 0);
});

Script N(script_80241284) = SCRIPT({
    SI_VAR(14) = 0;
0:
    if (SI_SAVE_VAR(253) >= 3) {
        return;
    }
    SI_VAR(0) = 132.0;
    SI_VAR(1) = 90.0;
    SI_VAR(2) = -30.0;
    RandInt(100, SI_VAR(3));
    SI_VAR(3) +=f 0xFFFFFFCE;
    SI_VAR(3) /= 200.0;
    SI_VAR(4) = 1.0;
    SI_VAR(5) = 0;
    SI_VAR(6) = 0.296875;
    SI_VAR(7) = 0.296875;
    SI_VAR(15) = SI_VAR(14);
    SI_VAR(15) += 10000;
    spawn N(script_80241094);
    SI_VAR(14) += 1;
    if (SI_VAR(14) >= 16) {
        SI_VAR(14) = 0;
    }
    sleep 10;
    goto 0;
});

Script N(script_802413F0) = SCRIPT({
    if (SI_MAP_FLAG(2) == 1) {
        return;
    }
    SI_MAP_FLAG(2) = 1;
    SI_VAR(15) = 0;
    loop 12 {
        RandInt(80, SI_VAR(0));
        SI_VAR(0) -= 40;
        RandInt(50, SI_VAR(1));
        RandInt(50, SI_VAR(2));
        SI_VAR(2) -= 25;
        PlayEffect(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5, 10, 1, 1, 0, 0, 0, 0, 0, 0);
        SI_VAR(15) += 1;
        func_80240394_CDCA34(SI_VAR(15), SI_VAR(14), 1.0, 1.09375, 2, 0, 0);
        func_80240394_CDCA34(SI_VAR(15), SI_VAR(13), 1.09375, 1.0, 2, 0, 0);
        SI_VAR(0) =f SI_VAR(14);
        SI_VAR(1) =f SI_VAR(13);
        SI_VAR(2) =f SI_VAR(14);
        if (SI_SAVE_VAR(252) == 0) {
            ScaleModel(31, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(32, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
        if (SI_SAVE_VAR(253) == 0) {
            ScaleModel(19, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(20, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
        if (SI_SAVE_VAR(252) <= 1) {
            ScaleModel(21, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
        if (SI_SAVE_VAR(252) <= 2) {
            if (SI_SAVE_VAR(253) <= 1) {
                ScaleModel(22, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                ScaleModel(23, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                ScaleModel(24, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                ScaleModel(25, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                ScaleModel(26, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            }
        }
        ScaleModel(27, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_SAVE_VAR(252) <= 2) {
            if (SI_SAVE_VAR(253) <= 2) {
                ScaleModel(29, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                ScaleModel(41, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                ScaleModel(33, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            }
        }
        ScaleModel(36, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(37, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(38, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(39, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(40, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(34, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 1.046875;
        SI_VAR(0) *= 100.0;
        if (SI_SAVE_VAR(252) == 0) {
            RotateModel(31, SI_VAR(0), 0, 0, 1);
            RotateModel(32, SI_VAR(0), 0, 0, 1);
        }
        if (SI_SAVE_VAR(253) == 0) {
            RotateModel(19, SI_VAR(0), 0, 0, 1);
            RotateModel(20, SI_VAR(0), 0, 0, 1);
        }
        if (SI_SAVE_VAR(252) <= 1) {
            RotateModel(21, SI_VAR(0), 0, 0, 1);
        }
        if (SI_SAVE_VAR(252) <= 2) {
            if (SI_SAVE_VAR(253) <= 1) {
                RotateModel(22, SI_VAR(0), 0, 0, 1);
                RotateModel(23, SI_VAR(0), 0, 0, 1);
                RotateModel(24, SI_VAR(0), 0, 0, 1);
                RotateModel(25, SI_VAR(0), 0, 0, 1);
                RotateModel(26, SI_VAR(0), 0, 0, 1);
            }
        }
        RotateModel(27, SI_VAR(0), 0, 0, 1);
        if (SI_SAVE_VAR(252) <= 2) {
            if (SI_SAVE_VAR(253) <= 2) {
                RotateModel(29, SI_VAR(0), 0, 0, 1);
                RotateModel(41, SI_VAR(0), 0, 0, 1);
                RotateModel(33, SI_VAR(0), 0, 0, 1);
            }
        }
        RotateModel(36, SI_VAR(0), 0, 0, 1);
        RotateModel(37, SI_VAR(0), 0, 0, 1);
        RotateModel(38, SI_VAR(0), 0, 0, 1);
        RotateModel(39, SI_VAR(0), 0, 0, 1);
        RotateModel(40, SI_VAR(0), 0, 0, 1);
        RotateModel(34, SI_VAR(0), 0, 0, 1);
        sleep 1;
    }
    SI_VAR(0) = 1;
    SI_VAR(1) = 1;
    SI_VAR(2) = 1;
    if (SI_SAVE_VAR(252) == 0) {
        ScaleModel(31, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(32, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    }
    if (SI_SAVE_VAR(253) == 0) {
        ScaleModel(19, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(20, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    }
    if (SI_SAVE_VAR(252) <= 1) {
        ScaleModel(21, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    }
    if (SI_SAVE_VAR(252) <= 2) {
        if (SI_SAVE_VAR(253) <= 1) {
            ScaleModel(22, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(23, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(24, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(25, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(26, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
    }
    ScaleModel(27, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_SAVE_VAR(252) <= 2) {
        if (SI_SAVE_VAR(253) <= 2) {
            ScaleModel(29, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(41, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            ScaleModel(33, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
    }
    ScaleModel(36, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    ScaleModel(37, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    ScaleModel(38, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    ScaleModel(39, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    ScaleModel(40, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    ScaleModel(34, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_MAP_FLAG(2) = 0;
});

Script N(script_80241ED4) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(3) = -1.0;
    SI_VAR(4) = 0.0;
    SI_VAR(5) = 3.0;
    spawn {
        sleep 10;
        PlaySoundAtCollider(19, 486, 0);
    }
    loop 300 {
        SI_VAR(4) += -0.5;
        SI_VAR(5) += 0.09375;
        SI_VAR(0) +=f SI_VAR(3);
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(2) +=f SI_VAR(5);
        if (SI_VAR(1) < 0xFFFFFFF6) {
            SI_VAR(1) = -10.0;
            SI_VAR(3) = 0.0;
            SI_VAR(4) = 0.0;
            if (SI_VAR(2) >= 80) {
                goto 0;
            }
        }
    }
    TranslateModel(31, 0xFFFFFFB2, 19, 2);
    TranslateModel(32, 0xFFFFFFB2, 19, 2);
    TranslateModel(31, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(32, SI_VAR(0), SI_VAR(1), 0);
    RotateModel(31, SI_VAR(2), 0, 0, 1);
    RotateModel(32, SI_VAR(2), 0, 0, 1);
    TranslateModel(31, 78, 0xFFFFFFED, 0xFFFFFFFE);
    TranslateModel(32, 78, 0xFFFFFFED, 0xFFFFFFFE);
    sleep 1;
}
0:
    sleep 30;
    ModifyColliderFlags(0, 19, 0x7FFFFE00);
});

Script N(script_80242174) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0.0;
    SI_VAR(4) = 0.0;
    SI_VAR(5) = -5.0;
    spawn {
        sleep 12;
        PlaySoundAtCollider(21, 487, 0);
    }
    loop 300 {
        SI_VAR(4) += -0.5;
        SI_VAR(0) +=f SI_VAR(3);
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(2) +=f SI_VAR(5);
        if (SI_VAR(2) < 0xFFFFFFD3) {
            SI_VAR(5) = 5;
        }
        if (SI_VAR(2) > 0) {
            SI_VAR(2) = 0;
            SI_VAR(3) = 5;
        }
        if (SI_VAR(1) < 0xFFFFFFE7) {
            SI_VAR(4) = 0;
            SI_VAR(1) = 0xFFFFFFE7;
        }
        if (SI_VAR(0) > 90) {
            goto 0;
        }
        TranslateModel(19, 50, 28, 27);
        TranslateModel(20, 50, 28, 27);
        TranslateModel(19, 0, SI_VAR(1), 1);
        TranslateModel(20, 0, SI_VAR(1), 1);
        RotateModel(19, SI_VAR(0), 1, 0, 0);
        RotateModel(20, SI_VAR(0), 1, 0, 0);
        RotateModel(19, SI_VAR(2), 0, 0, 1);
        RotateModel(20, SI_VAR(2), 0, 0, 1);
        TranslateModel(19, 0xFFFFFFCE, 0xFFFFFFE4, 0xFFFFFFE5);
        TranslateModel(20, 0xFFFFFFCE, 0xFFFFFFE4, 0xFFFFFFE5);
        sleep 1;
    }
0:
    sleep 30;
});

Script N(script_80242474) = SCRIPT({
    SI_VAR(2) = 0;
    SI_VAR(1) = 0;
    SI_VAR(0) = 0;
    SI_VAR(5) = 0.0;
    spawn {
        sleep 15;
        PlaySoundAtCollider(23, 487, 0);
    }
    loop 300 {
        SI_VAR(5) += 0.5;
        SI_VAR(2) +=f SI_VAR(5);
        if (SI_VAR(2) >= 80) {
            SI_VAR(2) = 80;
            SI_VAR(5) *= -0.5;
            if (SI_VAR(5) == 0) {
                goto 0;
            }
        }
        TranslateModel(21, 0xFFFFFFC9, 5, 16);
        TranslateModel(21, SI_VAR(0), SI_VAR(1), 0);
        RotateModel(21, SI_VAR(2), 0, 0, 1);
        TranslateModel(21, 55, 0xFFFFFFFB, 0xFFFFFFF0);
        sleep 1;
    }
0:
    sleep 30;
});

Script N(script_80242620) = SCRIPT({
    SI_VAR(2) = 0;
    SI_VAR(1) = 0;
    SI_VAR(0) = 0;
    SI_VAR(5) = 0.0;
    spawn {
        sleep 15;
        PlaySoundAtCollider(22, 487, 0);
    }
    loop 300 {
        SI_VAR(5) += 0.5;
        SI_VAR(2) +=f SI_VAR(5);
        if (SI_VAR(2) >= 80) {
            SI_VAR(2) = 80;
            SI_VAR(5) *= -0.5;
            if (SI_VAR(5) == 0) {
                goto 0;
            }
        }
        TranslateModel(24, 60, 0, 16);
        RotateModel(24, SI_VAR(2), 0, 0, -1);
        TranslateModel(24, 0xFFFFFFC4, 0, 0xFFFFFFF0);
        TranslateModel(22, 0, 0, 27);
        TranslateModel(23, 0, 0, 27);
        RotateModel(22, SI_VAR(2), 1, 0, 0);
        RotateModel(23, SI_VAR(2), 1, 0, 0);
        TranslateModel(22, 0, 0, 0xFFFFFFE5);
        TranslateModel(23, 0, 0, 0xFFFFFFE5);
        TranslateModel(25, 0, 0, 0xFFFFFFD7);
        TranslateModel(26, 0, 0, 0xFFFFFFD7);
        RotateModel(25, SI_VAR(2), -1, 0, 0);
        RotateModel(26, SI_VAR(2), -1, 0, 0);
        TranslateModel(25, 0, 0, 41);
        TranslateModel(26, 0, 0, 41);
        sleep 1;
    }
0:
    sleep 30;
});

Script N(script_80242910) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(3) = -1.0;
    SI_VAR(4) = 0.0;
    SI_VAR(5) = 3.0;
    spawn {
        sleep 15;
        PlaySoundAtCollider(18, 486, 0);
    }
    loop 300 {
        SI_VAR(4) += -0.5;
        SI_VAR(5) += 0.09375;
        SI_VAR(0) +=f SI_VAR(3);
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(2) +=f SI_VAR(5);
        if (SI_VAR(1) < 0xFFFFFFE7) {
            SI_VAR(1) = -25.0;
            SI_VAR(3) = 0.0;
            SI_VAR(4) = 0.0;
            if (SI_VAR(2) >= 80) {
                goto 0;
            }
        }
    }
    TranslateModel(29, 124, 17, 3);
    TranslateModel(29, SI_VAR(0), SI_VAR(1), 0);
    RotateModel(29, SI_VAR(2), 0, 0, -1);
    TranslateModel(29, 0xFFFFFF84, 0xFFFFFFEF, 0xFFFFFFFD);
    sleep 1;
}
0:
});

Script N(script_80242B18) = SCRIPT({
    ModifyColliderFlags(0, 18, 0x7FFFFE00);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(3) = 3.0;
    SI_VAR(4) = 1.0;
    SI_VAR(5) = 5.0;
    spawn {
        sleep 15;
        PlaySoundAtCollider(20, 486, 0);
    }
    loop 300 {
        SI_VAR(4) += -0.5;
        SI_VAR(0) +=f SI_VAR(3);
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(2) +=f SI_VAR(5);
        if (SI_VAR(1) <= 0xFFFFFFD8) {
            SI_VAR(1) =f 0xFFFFFFD8;
            SI_VAR(4) *= -0.5;
            if (SI_VAR(4) <= 1) {
                goto 1;
            }
        }
        if (SI_VAR(2) >= 60) {
            SI_VAR(2) = 60;
            SI_VAR(5) = 0;
        }
        TranslateModel(41, 0xFFFFFFDE, 50, 10);
        TranslateModel(33, 0xFFFFFFDE, 50, 10);
        TranslateModel(41, 0, SI_VAR(1), SI_VAR(0));
        RotateModel(41, SI_VAR(2), 0, 0, 1);
        TranslateModel(33, 0, SI_VAR(1), SI_VAR(0));
        RotateModel(33, SI_VAR(2), 0, 0, 1);
        TranslateModel(41, 34, 0xFFFFFFCE, 0xFFFFFFF6);
        TranslateModel(33, 34, 0xFFFFFFCE, 0xFFFFFFF6);
        sleep 1;
    }
1:
    sleep 30;
});

s32 N(intTable_80242DC8)[] = {
    0x00000000, 0x00000000, 0x0000001B, 0x00000050, 0x00000023, 0x0000001B, 0x0000003C, 0x0000000A,
    0x0000001B, 0x0000001E, 0x00000000, 0x0000001B, 0x00000050, 0x00000023, 0x0000001B, 0x0000001E,
    0x00000000, 0x0000001B, 0x00000055, 0x00000000, 0x0000001B, 0x00000050, 0x00000023, 0x0000001B,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242E28) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 0xFFFFFF2E),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 485),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802413F0)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 52),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(1), 1),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(3), 1),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(3), 1),
    SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 2),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 2),
        SI_CMD(ScriptOpcode_GOTO, 11),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_LABEL, 11),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(252), 0),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(252), 1),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80241ED4)),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(253), 0),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(253), 1),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242174)),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(252), 1),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(252), 2),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242474)),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(252), 2),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(253), 1),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(253), 2),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80242620)),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(252), 2),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(253), 2),
            SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
            SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 40, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 40, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(1.5)),
            SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(253), 3),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802413F0)),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802413F0)),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802413F0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
            SI_CMD(ScriptOpcode_CALL, GetModelCenter, 27),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 29, 0, SI_VAR(0), 50, SI_VAR(2), 100, 20, 0, 30, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 29, 0, SI_VAR(0), 30, SI_VAR(2), 120, 20, 0, 30, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 29, 0, SI_VAR(0), 10, SI_VAR(2), 100, 20, 0, 30, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
            SI_CMD(ScriptOpcode_SPAWN_THREAD),
                SI_CMD(ScriptOpcode_SET, SI_VAR(3), 6),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242DC8)),
                SI_CMD(ScriptOpcode_LOOP, 8),
                    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                    SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 400, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                    SI_CMD(ScriptOpcode_CALL, PlayEffect, 39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 6, 0, 0, 0, 0, 0, 0, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 5),
                    SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 400, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                    SI_CMD(ScriptOpcode_CALL, PlayEffect, 39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 2, 15, 0, 0, 0, 0, 0, 0, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(3), 1),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(4), SI_FIXED(2.0)),
                SI_CMD(ScriptOpcode_LOOP, 2),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242DC8)),
                    SI_CMD(ScriptOpcode_LOOP, 8),
                        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 400, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, PlayEffect, 39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 25, 0, 0, 0, 0, 0, 0, 0),
                        SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(3)),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(3), SI_VAR(4)),
                        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(4), SI_FIXED(0.5)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 416, 0, 70, 40, 10),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, 70, 40, 10, SI_FIXED(3.0), 30, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 20, SI_FIXED(1.0)),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 416, 0, 0, 30, 30),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, 0, 30, 30, SI_FIXED(4.0), 40, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 20, SI_FIXED(2.0)),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80242910)),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 20, 1169, 0),
            SI_CMD(ScriptOpcode_CALL, FadeOutMusic, 0, 1000),
            SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80242B18)),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(0), 53),
            SI_CMD(ScriptOpcode_CALL, GotoMap, D_80247048_CE36E8, 1),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 70),
            SI_CMD(ScriptOpcode_RETURN),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(3), 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Vec4f N(triggerCoord_8024367C) =  { 5.0f, 0.0f, -10.0f, 0.0f };

Vec4f N(triggerCoord_8024368C) =  { -5.0f, 0.0f, -20.0f, 0.0f };

Vec4f N(triggerCoord_8024369C) =  { 50.0f, 0.0f, -10.0f, 0.0f };

Vec4f N(triggerCoord_802436AC) =  { 105.0f, 0.0f, -10.0f, 0.0f };

Script N(script_802436BC) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 53) {
        EnableModel(49, 0);
        ModifyColliderFlags(0, 19, 0x7FFFFE00);
        EnableModel(31, 0);
        EnableModel(32, 0);
        EnableModel(19, 0);
        EnableModel(20, 0);
        EnableModel(21, 0);
        EnableModel(22, 0);
        EnableModel(23, 0);
        EnableModel(24, 0);
        EnableModel(25, 0);
        EnableModel(26, 0);
        EnableModel(29, 0);
        EnableModel(41, 0);
        EnableModel(33, 0);
        ModifyColliderFlags(0, 18, 0x7FFFFE00);
        return;
    }
    spawn N(script_80240E90);
    EnableModel(49, 0);
    if (SI_SAVE_VAR(252) >= 1) {
        ModifyColliderFlags(0, 19, 0x7FFFFE00);
        EnableModel(31, 0);
        EnableModel(32, 0);
    }
    if (SI_SAVE_VAR(253) >= 1) {
        EnableModel(19, 0);
        EnableModel(20, 0);
    }
    if (SI_SAVE_VAR(252) >= 2) {
        EnableModel(21, 0);
    }
    if (SI_SAVE_VAR(253) >= 2) {
        EnableModel(22, 0);
        EnableModel(23, 0);
        EnableModel(24, 0);
        EnableModel(25, 0);
        EnableModel(26, 0);
    }
    if (SI_SAVE_VAR(253) >= 3) {
        EnableModel(29, 0);
        EnableModel(41, 0);
        EnableModel(33, 0);
        ModifyColliderFlags(0, 18, 0x7FFFFE00);
        return;
    }
    SI_VAR(0) = 0;
    bind N(script_80242E28) to TriggerFlag_WALL_HAMMER 23;
    bind N(script_80242E28) to TriggerFlag_BOMB N(triggerCoord_8024367C);
    bind N(script_80242E28) to TriggerFlag_BOMB N(triggerCoord_8024368C);
    SI_VAR(0) = 1;
    bind N(script_80242E28) to TriggerFlag_WALL_HAMMER 22;
    bind N(script_80242E28) to TriggerFlag_BOMB N(triggerCoord_8024369C);
    bind N(script_80242E28) to TriggerFlag_BOMB N(triggerCoord_802436AC);
    SI_VAR(0) = 3;
    bind N(script_80242E28) to TriggerFlag_WALL_HAMMER 19;
    SI_VAR(0) = 4;
    bind N(script_80242E28) to TriggerFlag_WALL_HAMMER 18;
    SI_VAR(0) = 0;
    loop 16 {
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(1) += 10000;
        SI_VAR(0) += 1;
        CloneModel(49, SI_VAR(1));
        EnableModel(SI_VAR(1), 0);
    }
    spawn N(script_80241284);
    EnableTexPanning(36, 1);
    EnableTexPanning(37, 1);
    EnableTexPanning(38, 1);
    EnableTexPanning(39, 1);
    EnableTexPanning(40, 1);
    EnableTexPanning(41, 1);
    spawn {
        SI_VAR(14) = 1.0;
    0:
        if (SI_SAVE_VAR(253) >= 3) {
            SI_VAR(14) *= 0.953125;
        }
        SI_VAR(15) +=f SI_VAR(14);
        if (SI_VAR(15) == 1080) {
            SI_VAR(15) = 0;
        }
        SI_VAR(0) = SI_VAR(15);
        SI_VAR(0) /= 9;
        SI_VAR(0) %= 4;
        SI_VAR(0) *= 0x4000;
        SI_VAR(1) = SI_VAR(15);
        SI_VAR(1) /= 4;
        SI_VAR(1) %= 2;
        SI_VAR(1) *= 0x4000;
        SI_VAR(2) = SI_VAR(15);
        SI_VAR(2) /= 5;
        SI_VAR(2) %= 2;
        SI_VAR(2) *= 0x4000;
        SI_VAR(3) = SI_VAR(15);
        SI_VAR(3) /= 6;
        SI_VAR(3) %= 2;
        SI_VAR(3) *= 0x4000;
        SI_VAR(4) = SI_VAR(15);
        SI_VAR(4) /= 2;
        SI_VAR(4) %= 2;
        SI_VAR(4) *= 0x8000;
        SI_VAR(5) = SI_VAR(15);
        SI_VAR(5) /= 8;
        SI_VAR(5) %= 2;
        SI_VAR(5) *= 0x4000;
        SetTexPanOffset(12, 0, SI_VAR(0), 0);
        SetTexPanOffset(13, 0, SI_VAR(1), 0);
        SetTexPanOffset(14, 0, SI_VAR(2), 0);
        SetTexPanOffset(15, 0, SI_VAR(3), 0);
        SetTexPanOffset(11, 0, SI_VAR(4), 0);
        SetTexPanOffset(10, 0, SI_VAR(5), 0);
        SetTexPanOffset(9, 0, SI_VAR(5), 0);
        sleep 1;
        goto 0;
    }
});

NpcSettings N(npcSettings_80243F10) = {
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

NpcSettings N(npcSettings_80243F3C) = {
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
    .level = 0x1A,
    .unk_2A = 0,
};

s32 N(vectorList_80243F68)[] = {
    0xC25C0000, 0x41700000, 0x420C0000, 0xC31B0000, 0x420C0000, 0x420C0000, 0xC37F0000, 0x42960000,
    0x420C0000, 0xC3B18000, 0x431B0000, 0x420C0000, 0xC3E38000, 0x439D8000, 0x420C0000,
};

s32 N(vectorList_80243FA4)[] = {
    0xC1A00000, 0x41700000, 0x41F00000, 0xC2F00000, 0x420C0000, 0x41F00000, 0xC35C0000, 0x42960000,
    0x41F00000, 0xC3A00000, 0x431B0000, 0x41F00000, 0xC3D20000, 0x439D8000, 0x41F00000,
};

s32 N(vectorList_80243FE0)[] = {
    0x42820000, 0x41700000, 0x41F00000, 0xC20C0000, 0x420C0000, 0x41F00000, 0xC3070000, 0x42960000,
    0x41F00000, 0xC36B0000, 0x431B0000, 0x41F00000, 0xC3A78000, 0x439D8000, 0x41F00000,
};

s32 N(vectorList_8024401C)[] = {
    0x42F00000, 0x41700000, 0x41F00000, 0x41A00000, 0x420C0000, 0x41F00000, 0xC2A00000, 0x42960000,
    0x41F00000, 0xC3340000, 0x431B0000, 0x41F00000, 0xC38C0000, 0x439D8000, 0x41F00000,
};

Script N(script_80244058) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetPlayerPos(30, 0, 50);
    InterpPlayerYaw(90, 0);
    SetNpcPos(0xFFFFFFFC, 65, 0, 50);
    sleep 30;
    AdjustCam(0, 8.0, 0, 300, 19.0, -8.5);
    GetCurrentPartnerID(SI_VAR(0));
    BringPartnerOut(8);
    if (SI_VAR(0) != 8) {
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(1) += 20;
        SI_VAR(2) += 20;
        SI_VAR(3) += 20;
        NpcJump0(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3), 30);
    }
    PlayerFaceNpc(0xFFFFFFFC, 0);
    NpcFacePlayer(0xFFFFFFFC, 0);
    SpeakToPlayer(0xFFFFFFFC, 0x80009, 0x80001, 5, 0x1100C9);
    SetPlayerAnimation(0x10029);
    sleep 10;
    SetPlayerAnimation(0x10000);
    sleep 20;
    EnablePartnerAI();
    PutPartnerAway();
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
});

Script N(script_80244270) = SCRIPT({
    spawn {
        PlaySoundAtNpc(4, 414, 0);
        SetNpcFlagBits(4, 256, 1);
        InterpNpcYaw(4, 270, 0);
        LoadPath(60, N(vectorList_80243F68), 5, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(4, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) != 1) {
                break;
            }
        }
    }
    sleep 15;
    spawn {
        PlaySoundAtNpc(0, 415, 0);
        SetNpcFlagBits(0, 256, 1);
        InterpNpcYaw(0, 270, 0);
        LoadPath(60, N(vectorList_80243FA4), 5, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) != 1) {
                break;
            }
        }
    }
    spawn {
        SetNpcFlagBits(1, 256, 1);
        InterpNpcYaw(1, 270, 0);
        LoadPath(70, N(vectorList_80243FE0), 5, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) != 1) {
                break;
            }
        }
    }
    PlaySoundAtNpc(2, 415, 0);
    SetNpcFlagBits(2, 256, 1);
    InterpNpcYaw(2, 270, 0);
    LoadPath(80, N(vectorList_8024401C), 5, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) != 1) {
            break;
        }
    }
});

Script N(script_802445D4) = SCRIPT({
    sleep 5;
    IsPlayerWithin(40, 0, 200, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_VAR(3) = 45;
    } else {
        SI_VAR(3) = 25;
    }
    SI_VAR(4) = SI_VAR(3);
    SI_VAR(4) += 0xFFFFFFFB;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(2) > 0xFFFFFFC3) {
        parallel {
            SetNpcFlagBits(0, 256, 1);
            NpcMoveTo(0, SI_VAR(0), 55, SI_VAR(3));
        }
        parallel {
            SetNpcFlagBits(1, 256, 1);
            NpcMoveTo(1, SI_VAR(0), 55, SI_VAR(3));
        }
        parallel {
            SetNpcFlagBits(2, 256, 1);
            NpcMoveTo(2, SI_VAR(0), 55, SI_VAR(3));
        }
        sleep SI_VAR(4);
    }
});

Script N(script_80244774) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0xFFFFFFFC, 65, SI_VAR(1), 80);
    SetNpcYaw(0xFFFFFFFC, 270);
    AdjustCam(0, 8.0, 0, 450, 17.0, -6.0);
    SpeakToPlayer(4, 0x570209, 0x570201, 0, 0x1100BB);
    sleep 20;
    spawn N(script_80244270);
    sleep 80;
    AdjustCam(0, 8.0, 0, 300, 19.0, -8.5);
    GetCurrentPartnerID(SI_VAR(0));
    BringPartnerOut(8);
    if (SI_VAR(0) != 8) {
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(1) += 20;
        SI_VAR(2) += 20;
        SI_VAR(3) += 20;
        NpcJump0(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3), 30);
    }
    NpcFacePlayer(0xFFFFFFFC, 0);
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x80009, 0x80001, 5, 0x1100C1);
    EnablePartnerAI();
    sleep 20;
    PutPartnerAway();
    ResetCam(0, 4.0);
    SI_SAVE_VAR(0) = 52;
    DisablePlayerInput(0);
    AwaitPlayerApproach(0xFFFFFF06, 0, 50);
    DisablePlayerInput(1);
    GetCurrentPartnerID(SI_VAR(0));
    BringPartnerOut(8);
    if (SI_VAR(0) != 8) {
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(1) += 20;
        SI_VAR(2) += 20;
        SI_VAR(3) += 20;
        NpcJump0(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3), 30);
    }
    PlayerFaceNpc(0xFFFFFFFC, 0);
    NpcFacePlayer(0xFFFFFFFC, 0);
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x80009, 0x80001, 5, 0x1100C2);
    EnablePartnerAI();
    PutPartnerAway();
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
});

Script N(script_Idle_80244B3C) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 1000);
    SetCamPitch(0, 17.0, -6.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Defeat_80244C84) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            GetSelfNpcID(SI_VAR(0));
            if (SI_VAR(0) == 3) {
                SetNpcPos(3, 0, 0xFFFFFC18, 0);
                SetNpcPos(4, 0xFFFFFFC9, 15, 35);
                GetNpcYaw(3, SI_VAR(0));
                SetNpcYaw(4, 90);
                InterpPlayerYaw(180, 0);
                SetPlayerPos(30, 0, 80);
                SetNpcYaw(0, 90);
                SetNpcPos(0, 0xFFFFFFEC, 15, 30);
                SetNpcYaw(1, 270);
                SetNpcPos(1, 65, 15, 30);
                SetNpcYaw(2, 270);
                SetNpcPos(2, 120, 15, 30);
                spawn N(script_80244774);
            }
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_80244E2C) = SCRIPT({
    match SI_MAP_VAR(10) {
        == 0 {
            NpcFacePlayer(3, 1);
        }
        == 1 {
            NpcFacePlayer(0, 1);
        }
        == 2 {
            NpcFacePlayer(1, 1);
        }
        == 3 {
            NpcFacePlayer(2, 1);
        }
    }
});

Script N(script_80244ED0) = SCRIPT({
    match SI_MAP_VAR(10) {
        == 0 {
            SpeakToPlayer(3, 0x560202, 0x560201, 16, 0x1100B9);
            InterpNpcYaw(3, 90, 0);
        }
        == 1 {
            SpeakToPlayer(0, 0x490016, 0x490001, 16, 0x1100BF);
            InterpNpcYaw(0, 90, 0);
        }
        == 2 {
            SpeakToPlayer(1, 0x490016, 0x490001, 16, 0x1100BF);
            InterpNpcYaw(1, 270, 0);
        }
        == 3 {
            SpeakToPlayer(2, 0x490016, 0x490001, 16, 0x1100BF);
            InterpNpcYaw(2, 270, 0);
        }
    }
});

Script N(script_80245004) = SCRIPT({
    match SI_MAP_VAR(10) {
        == 0 {
            SpeakToPlayer(3, 0x560202, 0x560201, 16, 0x1100BA);
        }
        == 1 {
            SpeakToPlayer(0, 0x490016, 0x490001, 16, 0x1100C0);
        }
        == 2 {
            SpeakToPlayer(1, 0x490016, 0x490001, 16, 0x1100C0);
        }
        == 3 {
            SpeakToPlayer(2, 0x490016, 0x490001, 16, 0x1100C0);
        }
    }
    SetNpcVar(3, 0, 1);
    sleep 5;
    spawn N(script_802445D4);
});

Script N(script_80245108) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 52) {
        return;
    }
    DisablePlayerInput(1);
    func_802D2C14(1);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    AdjustCam(0, 8.0, 0, 300, 17.0, -6.0);
    await N(script_80244E2C);
    match SI_AREA_VAR(7) {
        == 0 {
            await N(script_80244ED0);
            SI_AREA_VAR(7) += 1;
            ResetCam(0, 4.0);
        }
        == 1 {
            await N(script_80245004);
        }
    }
    func_802D2C14(0);
    DisablePlayerInput(0);
});

Script N(script_80245228) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 0;
        await N(script_80245108);
        SI_MAP_VAR(10) = -1;
    }
});

Script N(script_8024527C) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 1;
        await N(script_80245108);
        SI_MAP_VAR(10) = -1;
    }
});

Script N(script_802452D0) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 2;
        await N(script_80245108);
        SI_MAP_VAR(10) = -1;
    }
});

Script N(script_80245324) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 3;
        await N(script_80245108);
        SI_MAP_VAR(10) = -1;
    }
});

Script N(script_80245378) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 52) {
        return;
    }
    DisablePlayerInput(1);
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 8.0);
    SetCamPitch(0, 17.0, -6.0);
    SetCamDistance(0, 300);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    await N(script_80244E2C);
    if (SI_AREA_VAR(7) == 0) {
        await N(script_80244ED0);
        SI_AREA_VAR(7) += 1;
        ResetCam(0, 4.0);
    } else {
        await N(script_80245004);
    }
    DisablePlayerInput(0);
});

Script N(script_802454D4) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 0;
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        await N(script_80245378);
        SI_MAP_VAR(10) = -1;
    }
});

Script N(script_80245544) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 1;
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        await N(script_80245378);
        SI_MAP_VAR(10) = -1;
    }
});

Script N(script_802455B4) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 2;
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        await N(script_80245378);
        SI_MAP_VAR(10) = -1;
    }
});

Script N(script_80245624) = SCRIPT({
    if (SI_MAP_VAR(10) == -1) {
        SI_MAP_VAR(10) = 3;
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        await N(script_80245378);
        SI_MAP_VAR(10) = -1;
    }
});

Vec4f N(triggerCoord_80245694) =  { 5.0f, 0.0f, -10.0f, 0.0f };

Vec4f N(triggerCoord_802456A4) =  { -5.0f, 0.0f, -20.0f, 0.0f };

Vec4f N(triggerCoord_802456B4) =  { 50.0f, 0.0f, -10.0f, 0.0f };

Vec4f N(triggerCoord_802456C4) =  { 105.0f, 0.0f, -10.0f, 0.0f };

Script N(script_802456D4) = SCRIPT({
    SI_MAP_VAR(10) = -1;
    bind N(script_80245228) to TriggerFlag_WALL_HAMMER 23;
    bind N(script_80245228) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_802454D4) to TriggerFlag_BOMB N(triggerCoord_802456A4);
    bind N(script_80245544) to TriggerFlag_BOMB N(triggerCoord_80245694);
    bind N(script_802452D0) to TriggerFlag_WALL_HAMMER 22;
    bind N(script_802455B4) to TriggerFlag_BOMB N(triggerCoord_802456B4);
    bind N(script_80245324) to TriggerFlag_WALL_HAMMER 18;
    bind N(script_80245624) to TriggerFlag_BOMB N(triggerCoord_802456C4);
});

Script N(script_Interact_802457D4) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            GetSelfNpcID(SI_VAR(0));
            if (SI_VAR(0) == 3) {
                SpeakToPlayer(-1, 0x560202, 0x560201, 5, 0x1100B6);
            } else {
                SpeakToPlayer(-1, 0x490016, 0x490001, 5, 0x1100BC);
            }
            SI_AREA_VAR(6) += 1;
        }
        == 1 {
            GetSelfNpcID(SI_VAR(0));
            if (SI_VAR(0) == 3) {
                SpeakToPlayer(-1, 0x560202, 0x560201, 5, 0x1100B7);
            } else {
                SpeakToPlayer(-1, 0x490016, 0x490001, 5, 0x1100BD);
            }
            SI_AREA_VAR(6) += 1;
        }
        == 2 {
            AdjustCam(0, 8.0, 0, 300, 19.0, -9.0);
            GetSelfNpcID(SI_VAR(0));
            if (SI_VAR(0) == 3) {
                SpeakToPlayer(-1, 0x560202, 0x560201, 5, 0x1100B8);
                NpcFacePlayer(-1, 0);
                sleep 15;
                EndSpeech(-1, 0x560202, 0x560201, 0);
            } else {
                SpeakToPlayer(-1, 0x490016, 0x490001, 5, 0x1100BE);
                NpcFacePlayer(-1, 0);
                sleep 15;
                EndSpeech(-1, 0x490016, 0x490001, 0);
            }
            SetNpcVar(3, 0, 1);
            sleep 5;
            spawn N(script_802445D4);
            BindNpcInteract(0, 0);
            BindNpcInteract(1, 0);
            BindNpcInteract(2, 0);
            BindNpcInteract(3, 0);
        }
    }
});

Script N(script_Init_80245AA8) = SCRIPT({
    if (SI_SAVE_VAR(0) < 52) {
        BindNpcIdle(-1, N(script_Idle_80244B3C));
        BindNpcInteract(-1, N(script_Interact_802457D4));
        BindNpcDefeat(-1, N(script_Defeat_80244C84));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80245B30) = SCRIPT({
    if (SI_SAVE_VAR(0) < 52) {
        BindNpcDefeat(-1, N(script_Defeat_80244C84));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80245B90) = SCRIPT({
    if (SI_SAVE_VAR(0) < 52) {
        BindNpcInteract(-1, N(script_Interact_802457D4));
        BindNpcDefeat(-1, N(script_Defeat_80244C84));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80245C04) = SCRIPT({
    if (SI_SAVE_VAR(0) < 52) {
        BindNpcInteract(-1, N(script_Interact_802457D4));
        BindNpcDefeat(-1, N(script_Defeat_80244C84));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80245C78) = SCRIPT({
    if (SI_SAVE_VAR(0) < 52) {
        BindNpcInteract(-1, N(script_Interact_802457D4));
        BindNpcDefeat(-1, N(script_Defeat_80244C84));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

StaticNpc N(npcGroup_80245CEC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243F10),
        .pos = { 0.0, 15.0, 60.0 },
        .flags = 0x00440D05,
        .init = N(script_Init_80245B90),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
        .tattle = 0x1A00E4,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80243F10),
        .pos = { 65.0, 15.0, 60.0 },
        .flags = 0x00440D05,
        .init = N(script_Init_80245C04),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
        .tattle = 0x1A00E4,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80243F10),
        .pos = { 135.0, 15.0, 35.0 },
        .flags = 0x00440D05,
        .init = N(script_Init_80245C78),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
        .tattle = 0x1A00E4,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80243F3C),
        .pos = { -60.0, 0.0, 50.0 },
        .flags = 0x00440D05,
        .init = N(script_Init_80245AA8),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .animations = {
            0x00560201, 0x00560201, 0x00560201, 0x00560201, 0x00560201, 0x00560201, 0x00560204, 0x00560204, 0x00560201, 0x00560201, 0x00560201, 0x00560201, 0x00560201, 0x00560201, 0x00560201, 0x00560201,
        },
        .tattle = 0x1A00E4,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80243F3C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00440D05,
        .init = N(script_Init_80245B30),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .animations = {
            0x00570201, 0x00570201, 0x00570201, 0x00570201, 0x00570201, 0x00570201, 0x00570204, 0x00570204, 0x00570201, 0x00570201, 0x00570201, 0x00570201, 0x00570201, 0x00570201, 0x00570201, 0x00570201,
        },
        .tattle = 0x1A00E4,
    },
};

NpcGroupList N(npcGroupList_8024669C) = {
    NPC_GROUP(N(npcGroup_80245CEC), 0x180B0007),
    {},
};

s32 pad_0066B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802466C0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240600_CDCCA0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240600_CDCCA0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80246A20) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240600_CDCCA0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240600_CDCCA0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240600_CDCCA0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240600_CDCCA0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_80247024) = SCRIPT({

});

s32 pad_007034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80247040_CE36E0

// rodata: D_80247048_CE36E8
