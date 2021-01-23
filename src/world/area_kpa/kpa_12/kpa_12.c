#include "kpa_12.h"

s32 pad_00003C[1];
s32 pad_00034C[1];
s32 pad_000468[2];
Script N(script_802404E0);
Script N(script_UpdateTexturePan_80240570);
Script N(script_ExitWalk_8024060C);
Script N(script_ExitWalk_8024069C);
Script N(script_ExitWalk_8024072C);
Script N(script_80240788);
Script N(script_802407EC);
s32 N(lavaResetList_80240988)[28];
Script N(main);
s32 pad_000CC8[2];
Script N(script_80240CD0);
Script N(script_80240EA8);
Script N(script_80240EE4);
Script N(script_80240F20);
Script N(script_80240F5C);
Script N(script_80240F98);
Script N(script_802410CC);
Script N(script_802411A0);
Script N(script_802414C4);
s32 pad_0015AC[1];
const char D_802415B0_A55F00[8]; // "kpa_10"
const char D_802415B8_A55F08[8]; // "kpa_11"
const char D_802415C0_A55F10[8]; // "kpa_13"
s32 pad_0015C8[2];

// text: func_GetTattle_A54950

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_A54990

// text: func_80240164_A54AB4

s32 pad_00034C[] = {
    0x00000000,
};

// text: func_80240350_A54CA0

// text: func_8024037C_A54CCC

// text: func_80240444_A54D94

s32 pad_000468[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 30.0f, 30.0f, -150.0f, 90.0f },
    { 1470.0f, 30.0f, -150.0f, 270.0f },
    { 17.0f, -20.0f, -17.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x80240000,
};

Script N(script_802404E0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    if (SI_SAVE_FLAG(1556) == 0) {
        PlayAmbientSounds(4);
    }
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

Script N(script_UpdateTexturePan_80240570) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240040_A54990();
                    return;
                }
            }
        }
    }
    func_80240164_A54AB4();
});

Script N(script_ExitWalk_8024060C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        GotoMap(D_802415B8_A55F08, 1);
    } else {
        GotoMap(D_802415B0_A55F00, 1);
    }
    sleep 100;
});

Script N(script_ExitWalk_8024069C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        GotoMap(D_802415B8_A55F08, 4);
    } else {
        GotoMap(D_802415B0_A55F00, 4);
    }
    sleep 100;
});

Script N(script_ExitWalk_8024072C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802415C0_A55F10, 0);
    sleep 100;
});

Script N(script_80240788) = SCRIPT({
    bind N(script_ExitWalk_8024060C) to 0x80000 73;
    bind N(script_ExitWalk_8024069C) to 0x80000 76;
    bind N(script_ExitWalk_8024072C) to 0x80000 70;
});

Script N(script_802407EC) = SCRIPT({
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0xFFFFFE70;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFCE0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240570);
    }
    SetTexPanner(105, 0);
    SetTexPanner(106, 0);
    SetTexPanner(107, 0);
    SetTexPanner(108, 0);
    SetTexPanner(109, 0);
    SetTexPanner(110, 0);
    SetTexPanner(111, 0);
    SetTexPanner(112, 0);
});

s32 N(lavaResetList_80240988)[] = {
    0x00000003, 0x42C80000, 0x41F00000, 0xC3160000, 0x00000004, 0x43750000, 0x41F00000, 0xC3160000,
    0x00000005, 0x43C80000, 0x41F00000, 0xC3160000, 0x00000006, 0x442F0000, 0x41F00000, 0xC3160000,
    0x00000007, 0x4455C000, 0x41F00000, 0xC2C80000, 0x00000002, 0x44B4A000, 0x41F00000, 0xC3070000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_FLAG(1556) == 0) {
        EnableGroup(229, 0);
        spawn N(script_802407EC);
    } else {
        EnableGroup(114, 0);
    }
    spawn N(script_802404E0);
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn N(script_802414C4);
    }
    SI_VAR(0) = N(script_80240788);
    spawn EnterWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 2;
            ModifyColliderFlags(3, 9, 3);
            ModifyColliderFlags(3, 10, 3);
            ModifyColliderFlags(3, 11, 3);
            ModifyColliderFlags(3, 12, 3);
            ModifyColliderFlags(3, 13, 3);
            ModifyColliderFlags(3, 14, 3);
            ModifyColliderFlags(3, 15, 3);
            ModifyColliderFlags(3, 16, 3);
            ModifyColliderFlags(3, 17, 3);
            ModifyColliderFlags(3, 18, 3);
            ModifyColliderFlags(3, 19, 3);
            ModifyColliderFlags(3, 80, 3);
            ModifyColliderFlags(3, 81, 3);
            ModifyColliderFlags(3, 76, 3);
            spawn {
                ResetFromLava(N(lavaResetList_80240988));
            }
        }
    }
    sleep 1;
});

s32 pad_000CC8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240CD0) = SCRIPT({
    group 11;
    SI_VAR(0) = 0.0;
0:
    TranslateGroup(SI_VAR(1), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(3));
    SI_VAR(0) -= 0.5;
    if (SI_VAR(0) < 0xFFFFFFD8) {
        SI_VAR(0) = 0xFFFFFFD8;
    }
    sleep 1;
    func_80240350_A54CA0(SI_VAR(11));
    GetPlayerActionState(SI_VAR(12));
    if (SI_VAR(3) == SI_VAR(11)) {
        if (SI_VAR(12) != 3) {
            goto 0;
        }
    }
1:
    SI_VAR(0) += 1.0;
    TranslateGroup(SI_VAR(1), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(3));
    sleep 1;
    func_80240350_A54CA0(SI_VAR(11));
    GetPlayerActionState(SI_VAR(12));
    if (SI_VAR(3) == SI_VAR(11)) {
        if (SI_VAR(12) != 3) {
            goto 0;
        }
    }
    if (SI_VAR(0) < 0) {
        goto 1;
    }
});

Script N(script_80240EA8) = SCRIPT({
    SI_VAR(1) = 91;
    SI_VAR(3) = 21;
    await N(script_80240CD0);
});

Script N(script_80240EE4) = SCRIPT({
    SI_VAR(1) = 94;
    SI_VAR(3) = 23;
    await N(script_80240CD0);
});

Script N(script_80240F20) = SCRIPT({
    SI_VAR(1) = 97;
    SI_VAR(3) = 25;
    await N(script_80240CD0);
});

Script N(script_80240F5C) = SCRIPT({
    SI_VAR(1) = 100;
    SI_VAR(3) = 27;
    await N(script_80240CD0);
});

Script N(script_80240F98) = SCRIPT({
    group 11;
0:
    MakeLerp(0, 0xFFFFFFFD, 20, 0);
1:
    UpdateLerp();
    TranslateGroup(SI_VAR(2), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 1;
    }
    MakeLerp(0xFFFFFFFD, 0, 20, 0);
2:
    UpdateLerp();
    TranslateGroup(SI_VAR(2), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 2;
    }
    goto 0;
});

Script N(script_802410CC) = SCRIPT({
    spawn {
        SI_VAR(2) = 91;
        await N(script_80240F98);
    }
    sleep 10;
    spawn {
        SI_VAR(2) = 94;
        await N(script_80240F98);
    }
    sleep 10;
    spawn {
        SI_VAR(2) = 97;
        await N(script_80240F98);
    }
    sleep 10;
    SI_VAR(2) = 100;
    await N(script_80240F98);
});

Script N(script_802411A0) = SCRIPT({
    group 11;
    ParentColliderToModel(29, 101);
    SI_VAR(0) = 0;
    SI_VAR(3) = 0;
    loop {
        SI_VAR(1) = 125;
        SI_VAR(1) -= SI_VAR(0);
        MakeLerp(SI_VAR(0), 125, SI_VAR(1), 0);
        loop {
            UpdateLerp();
            TranslateGroup(103, SI_VAR(0), 0, 0);
            UpdateColliderTransform(29);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_8024037C_A54CCC(SI_VAR(4), 29);
            if (SI_VAR(0) > 95) {
                func_80240444_A54D94();
                if (SI_VAR(9) == 1) {
                    func_80240350_A54CA0(SI_VAR(2));
                    if (SI_VAR(2) == 81) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
        MakeLerp(SI_VAR(0), 0, SI_VAR(0), 0);
        loop {
            UpdateLerp();
            TranslateGroup(103, SI_VAR(0), 0, 0);
            UpdateColliderTransform(29);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_8024037C_A54CCC(SI_VAR(4), 29);
            if (SI_VAR(0) < 30) {
                func_80240444_A54D94();
                if (SI_VAR(9) == 1) {
                    func_80240350_A54CA0(SI_VAR(2));
                    if (SI_VAR(2) == 80) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
    }
});

Script N(script_802414C4) = SCRIPT({
    ParentColliderToModel(21, 90);
    ParentColliderToModel(23, 93);
    ParentColliderToModel(25, 96);
    ParentColliderToModel(27, 99);
    bind N(script_80240EA8) to TriggerFlag_FLOOR_TOUCH 21;
    bind N(script_80240EE4) to TriggerFlag_FLOOR_TOUCH 23;
    bind N(script_80240F20) to TriggerFlag_FLOOR_TOUCH 25;
    bind N(script_80240F5C) to TriggerFlag_FLOOR_TOUCH 27;
    spawn N(script_802410CC);
    spawn N(script_802411A0);
});

s32 pad_0015AC[] = {
    0x00000000,
};

// rodata: D_802415B0_A55F00

// rodata: D_802415B8_A55F08

// rodata: D_802415C0_A55F10

s32 pad_0015C8[] = {
    0x00000000, 0x00000000,
};

