#include "kpa_13.h"

s32 pad_00003C[1];
s32 pad_00034C[1];
s32 pad_000468[2];
Script N(script_802404E0);
Script N(script_UpdateTexturePan_80240570);
Script N(script_ExitWalk_8024060C);
Script N(script_ExitWalk_80240668);
Script N(script_ExitWalk_802406C4);
Script N(script_80240720);
Script N(script_80240784);
s32 N(lavaResetList_802408D0)[52];
Script N(main);
s32 pad_000CAC[1];
Script N(script_MakeEntities);
s32 pad_000D78[2];
Script N(script_80240D80);
s32 pad_00156C[1];
const char D_80241570_A57490[8]; // "kpa_12"
const char D_80241578_A57498[8]; // "kpa_15"
const char D_80241580_A574A0[8]; // "kpa_14"
s32 pad_001588[2];

// text: func_GetTattle_A55F20

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_A55F60

// text: func_80240164_A56084

s32 pad_00034C[] = {
    0x00000000,
};

// text: func_80240350_A56270

// text: func_8024037C_A5629C

// text: func_80240444_A56364

s32 pad_000468[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 30.0f, 30.0f, -150.0f, 90.0f },
    { 1920.0f, 30.0f, -150.0f, 270.0f },
    { 647.0f, 0.0f, -173.0f, 180.0f },
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
        func_802D5FA4(5);
    }
});

Script N(script_UpdateTexturePan_80240570) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240040_A55F60();
                    return;
                }
            }
        }
    }
    func_80240164_A56084();
});

Script N(script_ExitWalk_8024060C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241570_A57490, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240668) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80241578_A57498, 0);
    sleep 100;
});

Script N(script_ExitWalk_802406C4) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241580_A574A0, 0);
    sleep 100;
});

Script N(script_80240720) = SCRIPT({
    bind N(script_ExitWalk_8024060C) to 0x80000 80;
    bind N(script_ExitWalk_80240668) to 0x80000 86;
    bind N(script_ExitWalk_802406C4) to 0x80000 83;
});

Script N(script_80240784) = SCRIPT({
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
    SetTexPanner(119, 0);
    SetTexPanner(120, 0);
    SetTexPanner(121, 0);
    SetTexPanner(122, 0);
});

s32 N(lavaResetList_802408D0)[] = {
    0x00000011, 0x42DC0000, 0x41F00000, 0xC3160000, 0x00000012, 0x438E8000, 0x41F00000, 0xC1A00000,
    0x00000013, 0x43FA0000, 0x41F00000, 0xC2B40000, 0x0000000F, 0x44480000, 0x41F00000, 0xC3160000,
    0x00000015, 0x4469C000, 0x41F00000, 0xC1A00000, 0x0000000E, 0x448FC000, 0x41F00000, 0xC3160000,
    0x00000014, 0x44A0A000, 0x41F00000, 0xC32F0000, 0x00000019, 0x44B0E000, 0x41F00000, 0xC32F0000,
    0x0000001B, 0x44BD6000, 0x41F00000, 0xC32F0000, 0x0000001D, 0x44CEE000, 0x41F00000, 0xC32F0000,
    0x0000001F, 0x44DB6000, 0x41F00000, 0xC32F0000, 0x00000010, 0x44E88000, 0x41F00000, 0xC2F00000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(1556) == 0) {
        EnableGroup(239, 0);
        spawn N(script_80240784);
    } else {
        EnableGroup(125, 0);
    }
    spawn N(script_802404E0);
    SI_VAR(0) = N(script_80240720);
    spawn EnterWalk;
    sleep 1;
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn N(script_80240D80);
    }
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 2;
            ModifyColliderFlags(3, 12, 3);
            ModifyColliderFlags(3, 0, 3);
            ModifyColliderFlags(3, 1, 3);
            ModifyColliderFlags(3, 2, 3);
            ModifyColliderFlags(3, 3, 3);
            ModifyColliderFlags(3, 4, 3);
            ModifyColliderFlags(3, 5, 3);
            ModifyColliderFlags(3, 6, 3);
            ModifyColliderFlags(3, 7, 3);
            ModifyColliderFlags(3, 8, 3);
            ModifyColliderFlags(3, 9, 3);
            ModifyColliderFlags(3, 10, 3);
            ModifyColliderFlags(3, 11, 3);
            ModifyColliderFlags(3, 90, 3);
            ModifyColliderFlags(3, 91, 3);
            ModifyColliderFlags(3, 86, 3);
            spawn {
                ResetFromLava(N(lavaResetList_802408D0));
            }
        }
    }
});

s32 pad_000CAC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    SI_AREA_FLAG(5) = 0;
    SI_AREA_FLAG(6) = 0;
    if (SI_SAVE_FLAG(1550) == 0) {
        MakeEntity(D_802E9BD4, 285, 10, 0xFFFFFFC9, 0, 0x80000000);
        AssignAreaFlag(5);
    }
    if (SI_SAVE_FLAG(1551) == 0) {
        MakeEntity(D_802E9BD4, 935, 10, 0xFFFFFFC9, 0, 0x80000000);
        AssignAreaFlag(6);
    }
});

s32 pad_000D78[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240D80) = SCRIPT({
    group 11;
    spawn {
        ParentColliderToModel(33, 112);
        TranslateGroup(114, 125, 0, 0);
        UpdateColliderTransform(33);
        if (SI_SAVE_FLAG(1550) == 0) {
        11:
            if (SI_AREA_FLAG(5) == 0) {
                sleep 1;
                goto 11;
            }
            sleep 20;
            ShakeCam(0, 0, 30, 0.5);
            SI_SAVE_FLAG(1550) = 1;
        }
        SI_VAR(0) = 125;
        SI_VAR(3) = 0xFFFFFF9C;
        loop {
            SI_VAR(1) = SI_VAR(0);
            SI_VAR(1) -= 0xFFFFFF9C;
            MakeLerp(SI_VAR(0), 0xFFFFFF9C, SI_VAR(1), 0);
            loop {
                UpdateLerp();
                TranslateGroup(114, SI_VAR(0), 0, 0);
                UpdateColliderTransform(33);
                SI_VAR(4) = SI_VAR(0);
                SI_VAR(4) -= SI_VAR(3);
                SI_VAR(3) = SI_VAR(0);
                func_8024037C_A5629C(SI_VAR(4), 33);
                if (SI_VAR(0) < 0xFFFFFFBA) {
                    func_80240444_A56364();
                    if (SI_VAR(9) == 1) {
                        func_80240350_A56270(SI_VAR(2));
                        if (SI_VAR(2) == 90) {
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
            SI_VAR(1) = 125;
            SI_VAR(1) -= SI_VAR(0);
            MakeLerp(SI_VAR(0), 125, SI_VAR(1), 0);
            loop {
                UpdateLerp();
                TranslateGroup(114, SI_VAR(0), 0, 0);
                UpdateColliderTransform(33);
                SI_VAR(4) = SI_VAR(0);
                SI_VAR(4) -= SI_VAR(3);
                SI_VAR(3) = SI_VAR(0);
                func_8024037C_A5629C(SI_VAR(4), 33);
                if (SI_VAR(0) > 95) {
                    func_80240444_A56364();
                    if (SI_VAR(9) == 1) {
                        func_80240350_A56270(SI_VAR(2));
                        if (SI_VAR(2) == 91) {
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
    }
    ParentColliderToModel(35, 115);
    TranslateGroup(117, 75, 0, 0);
    UpdateColliderTransform(35);
    if (SI_SAVE_FLAG(1551) == 0) {
    12:
        if (SI_AREA_FLAG(6) == 0) {
            sleep 1;
            goto 12;
        }
        sleep 20;
        ShakeCam(0, 0, 30, 0.5);
        SI_SAVE_FLAG(1551) = 1;
    }
    SI_VAR(0) = 75;
    SI_VAR(3) = 0xFFFFFF9C;
    loop {
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(1) -= 0xFFFFFF9C;
        MakeLerp(SI_VAR(0), 0xFFFFFF9C, SI_VAR(1), 0);
        loop {
            UpdateLerp();
            TranslateGroup(117, SI_VAR(0), 0, 0);
            UpdateColliderTransform(35);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_8024037C_A5629C(SI_VAR(4), 35);
            if (SI_VAR(0) < 0xFFFFFFBA) {
                func_80240444_A56364();
                if (SI_VAR(9) == 1) {
                    func_80240350_A56270(SI_VAR(2));
                    if (SI_VAR(2) == 90) {
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
        SI_VAR(1) = 75;
        SI_VAR(1) -= SI_VAR(0);
        MakeLerp(SI_VAR(0), 75, SI_VAR(1), 0);
        loop {
            UpdateLerp();
            TranslateGroup(117, SI_VAR(0), 0, 0);
            UpdateColliderTransform(35);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_8024037C_A5629C(SI_VAR(4), 35);
            if (SI_VAR(0) > 45) {
                func_80240444_A56364();
                if (SI_VAR(9) == 1) {
                    func_80240350_A56270(SI_VAR(2));
                    if (SI_VAR(2) == 91) {
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

s32 pad_00156C[] = {
    0x00000000,
};

// rodata: D_80241570_A57490

// rodata: D_80241578_A57498

// rodata: D_80241580_A574A0

s32 pad_001588[] = {
    0x00000000, 0x00000000,
};
