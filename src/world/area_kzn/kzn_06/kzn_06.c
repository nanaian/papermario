#include "kzn_06.h"

s32 pad_00030C[1];
s32 pad_0003E4[3];
s32 pad_000A68[2];
Script N(script_UpdateTexturePan_80240AE0);
Script N(script_ExitWalk_80240B7C);
Script N(script_ExitWalk_80240BD8);
Script N(script_ExitWalk_80240C34);
Script N(script_80240C90);
Script N(script_80240CF4);
s32 N(lavaResetList_80240F38)[24];
Script N(main);
f32 N(floatTable_80241120)[28];
Script N(script_80241190);
Script N(script_MakeEntities);
s32 N(unk_80241370)[1];
s32 N(unk_80241374)[1];
s32 N(unk_80241378)[1];
Script N(script_8024137C);
Script N(script_80241404);
Script N(script_80241744);
Script N(script_80241880);
s32 pad_0019DC[1];
const char D_802419E0_C6E300[8]; // "kzn_05"
const char D_802419E8_C6E308[8]; // "kzn_08"
const char D_802419F0_C6E310[8]; // "kzn_07"
s32 pad_0019F8[2];
s32 pad_001A08[2];

// text: func_80240000_C6C920

// text: func_80240124_C6CA44

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_C6CC30

s32 pad_0003E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802403F0_C6CD10

// text: func_80240738_C6D058

// text: func_802407FC_C6D11C

// text: func_80240A44_C6D364

s32 pad_000A68[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 385.0f, 115.0f, 55.0f, 270.0f },
    { -385.0f, 75.0f, 68.0f, 90.0f },
    { 400.0f, 5.0f, 175.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190108,
};

Script N(script_UpdateTexturePan_80240AE0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C6C920();
                    return;
                }
            }
        }
    }
    func_80240124_C6CA44();
});

Script N(script_ExitWalk_80240B7C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802419E0_C6E300, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240BD8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802419E8_C6E308, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240C34) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802419F0_C6E310, 0);
    sleep 100;
});

Script N(script_80240C90) = SCRIPT({
    bind N(script_ExitWalk_80240B7C) to 0x80000 0;
    bind N(script_ExitWalk_80240BD8) to 0x80000 2;
    bind N(script_ExitWalk_80240C34) to 0x80000 4;
});

Script N(script_80240CF4) = SCRIPT({
    group 0;
    SetTexPanner(23, 0);
    SetTexPanner(21, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFE70;
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
        spawn N(script_UpdateTexturePan_80240AE0);
    }
    SetTexPanner(18, 1);
    SetTexPanner(19, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 400;
        SI_VAR(2) = 0;
        SI_VAR(3) = 800;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240AE0);
    }
});

s32 N(lavaResetList_80240F38)[] = {
    0x00000027, 0x41200000, 0x43110000, 0xC20C0000, 0x00000026, 0xC3160000, 0x43110000, 0xC20C0000,
    0x00000025, 0xC3520000, 0x42960000, 0x42C80000, 0x00000024, 0x42700000, 0x42960000, 0x42C80000,
    0x0000000A, 0x42700000, 0x42960000, 0x42C80000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0005);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1311) = 1;
    await N(script_MakeEntities);
    SetMusicTrack(0, 41, 0, 8);
    if (SI_SAVE_VAR(0) < 27) {
        PlayAmbientSounds(5);
    } else {
        PlayAmbientSounds(4);
    }
    SI_VAR(0) = N(script_80240C90);
    spawn EnterWalk;
    sleep 1;
    ModifyColliderFlags(3, 27, 3);
    ModifyColliderFlags(3, 26, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80240F38));
    }
    spawn N(script_80240CF4);
    spawn N(script_80241880);
});

f32 N(floatTable_80241120)[] = {
    0.020000f, 0.020000f, 0.040000f, 0.080000f, 0.110000f, 0.200000f, 0.300000f, 0.310000f,
    0.420000f, 0.460000f, 0.500000f, 0.530000f, 0.560000f, 0.590000f, 0.620000f, 0.650000f,
    0.680000f, 0.710000f, 0.740000f, 0.770000f, 0.800000f, 0.830000f, 0.860000f, 0.890000f,
    0.920000f, 0.950000f, 0.980000f, 1.000000f,
};

Script N(script_80241190) = SCRIPT({
    SI_SAVE_FLAG(1313) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA588, 325, 205, 0xFFFFFFE2, 0, 149, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1312));
    if (SI_SAVE_FLAG(1313) == 0) {
        MakeEntity(0x802EA274, 385, 5, 180, 0, 0x80000000);
        AssignScript(N(script_80241190));
    }
    if (SI_SAVE_VAR(0) < 27) {
        CreatePushBlockGrid(0, 12, 1, 0xFFFFFEB6, 145, 0xFFFFFFA6, 0);
        SetPushBlockFallEffect(0, func_80240310_C6CC30);
        SetPushBlock(0, 4, 0, 1);
        SetPushBlock(0, 6, 0, 1);
        SetPushBlock(0, 8, 0, 1);
    } else {
        CreatePushBlockGrid(0, 12, 1, 0xFFFFFEB6, 120, 0xFFFFFFA6, 0);
        SetPushBlock(0, 9, 0, 1);
        SetPushBlock(0, 10, 0, 1);
        SetPushBlock(0, 11, 0, 1);
    }
});

s32 N(unk_80241370)[] = {
    0x00000000,
};

s32 N(unk_80241374)[] = {
    0x00010014,
};

s32 N(unk_80241378)[] = {
    0x0001000C,
};

Script N(script_8024137C) = SCRIPT({
0:
    func_802407FC_C6D11C(N(unk_80241378), 0, 0, 255, 60, 1);
    sleep 30;
    func_802407FC_C6D11C(N(unk_80241378), 0, 0, 255, 60, 0);
    sleep 30;
    goto 0;
});

Script N(script_80241404) = SCRIPT({
    DisablePlayerInput(1);
    sleep 3;
    DisablePlayerPhysics(1);
    func_80240A44_C6D364();
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFEC;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 600.0);
    SetCamPitch(0, 5.0, 8.0);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 15;
    spawn {
        loop 40 {
            SI_MAP_VAR(0) += -0.015625;
            sleep 3;
        }
    }
    MakeLerp(0, 0xFFFFFFE7, 100, 4);
    SI_VAR(2) = 0.0;
    SI_VAR(3) = 0.0;
    SI_VAR(4) = 0;
0:
    UpdateLerp();
    TranslateModel(18, 0, SI_VAR(0), SI_VAR(3));
    TranslateModel(19, 0, SI_VAR(0), 0);
    TranslateModel(21, 0, SI_VAR(0), SI_VAR(2));
    if (SI_VAR(4) > 20) {
        if (SI_VAR(2) > 0xFFFFFFB5) {
            SI_VAR(2) -= 0.5;
            SI_VAR(3) -= 0.55078125;
        }
    }
    SI_VAR(4) += 1;
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    sleep 45;
    ResetCam(0, 90.0);
    ModifyColliderFlags(0, 26, 0x7FFFFE00);
    ModifyColliderFlags(1, 27, 0x7FFFFE00);
    EnableGroup(29, 0);
    EnableGroup(32, 1);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80241744) = SCRIPT({
10:
    GetPushBlock(0, 11, 0, SI_VAR(2));
    if (SI_VAR(2) == 0) {
        sleep 1;
        goto 10;
    }
    DisablePlayerInput(1);
    sleep 40;
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop 20 {
            SI_VAR(0) -= 0.7001953125;
            SI_VAR(1) -= 0.1005859375;
            TranslateGroup(25, 0, SI_VAR(0), SI_VAR(1));
            sleep 2;
        }
    }
    await N(script_80241404);
    SI_SAVE_VAR(0) = 27;
    DisablePlayerInput(0);
});

Script N(script_80241880) = SCRIPT({
    if (SI_SAVE_VAR(0) < 27) {
        EnableGroup(32, 0);
        spawn N(script_80241744);
        SI_MAP_VAR(0) = 1.0;
    } else {
        ModifyColliderFlags(0, 26, 0x7FFFFE00);
        EnableGroup(29, 0);
        TranslateGroup(25, 0, 0xFFFFFFF2, 0xFFFFFFFE);
        TranslateModel(18, 0, 0xFFFFFFE7, 0xFFFFFFCE);
        TranslateModel(19, 0, 0xFFFFFFE7, 0);
        TranslateModel(21, 0, 0xFFFFFFE7, 0xFFFFFFD8);
        SI_MAP_VAR(0) = 0.5;
    }
    spawn {
        group 0;
        func_802403F0_C6CD10(1, 0);
    }
    spawn {
        func_80240738_C6D058(N(unk_80241374));
    }
});

s32 pad_0019DC[] = {
    0x00000000,
};

// rodata: D_802419E0_C6E300

// rodata: D_802419E8_C6E308

// rodata: D_802419F0_C6E310

s32 pad_0019F8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241A00_C6E320

s32 pad_001A08[] = {
    0x00000000, 0x00000000,
};

