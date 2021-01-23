#include "kpa_04.h"

Script N(script_802401D0);
s32 pad_000238[2];
Script N(script_ExitWalk_80240240);
Script N(script_ExitWalk_8024029C);
Script N(script_802402F8);
Script N(script_EnterWalk_80240340);
Script N(main);
Script N(script_80240430);
Script N(script_80240808);
Script N(script_80240990);
s32 pad_000AAC[1];
const char D_80240AB0_A4CA10[8]; // "kpa_03"
const char D_80240AB8_A4CA18[8]; // "kpa_81"

// text: func_80240000_A4BF60

// text: func_802400BC_A4C01C

EntryList N(entryList) = {
    { 212.0f, 0.0f, 150.0f, 270.0f },
    { 0.0f, 0.0f, 287.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19016A,
};

Script N(script_802401D0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

s32 pad_000238[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240240) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240AB0_A4CA10, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024029C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240AB8_A4CA18, 3);
    sleep 100;
});

Script N(script_802402F8) = SCRIPT({
    bind N(script_ExitWalk_80240240) to 0x80000 13;
    bind N(script_ExitWalk_8024029C) to 0x80000 17;
});

Script N(script_EnterWalk_80240340) = SCRIPT({
    SI_VAR(0) = N(script_802402F8);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_80240990);
    spawn N(script_EnterWalk_80240340);
    sleep 1;
    spawn N(script_802401D0);
});

Script N(script_80240430) = SCRIPT({
    loop 20 {
        GetCurrentPartner(SI_VAR(10));
        if (SI_VAR(10) != 0) {
            SI_VAR(9) = 0;
            return;
        }
        func_80240000_A4BF60(25);
        if (SI_VAR(0) == 0) {
            SI_VAR(9) = 0;
            return;
        } else {
            SetPlayerActionState(20);
        }
        sleep 1;
    }
    GetCurrentPartner(SI_VAR(10));
    if (SI_VAR(10) != 0) {
        SI_VAR(9) = 0;
        return;
    }
    DisablePlayerInput(1);
    PlaySoundAtCollider(25, 0x80000010, 0);
    spawn {
        ShakeCam(0, 0, 100, 0.6005859375);
    }
    spawn {
        EnableGroup(37, 1);
        MakeLerp(6, 100, 100, 0);
        loop {
            UpdateLerp();
            SI_VAR(10) =f SI_VAR(0);
            SI_VAR(10) *= 0.0107421875;
            ScaleGroup(37, SI_VAR(10), 1, 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        InterpPlayerYaw(270, 0);
        SetPlayerActionState(20);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(1) += SI_VAR(11);
        MakeLerp(SI_VAR(0), SI_VAR(1), 100, 0);
        loop {
            SetPlayerActionState(20);
            UpdateLerp();
            func_802400BC_A4C01C();
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetPlayerActionState(0);
        DisablePlayerInput(0);
    }
    MakeLerp(0, SI_VAR(11), 100, 0);
    loop {
        UpdateLerp();
        TranslateGroup(26, SI_VAR(0), 0, 0);
        UpdateColliderTransform(25);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(0x80000010);
});

Script N(script_80240808) = SCRIPT({
    if (SI_SAVE_VAR(304) != 0) {
        return;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) <= 30) {
        return;
    }
    if (SI_VAR(2) <= 130) {
        return;
    }
    if (SI_VAR(2) >= 170) {
        return;
    }
    if (SI_VAR(0) >= 0) {
        SI_VAR(9) = 1;
        SI_VAR(11) = 0xFFFFFFCE;
        await N(script_80240430);
    } else {
        SI_VAR(9) = 2;
        SI_VAR(11) = 50;
        await N(script_80240430);
    }
    SI_SAVE_VAR(304) = SI_VAR(9);
    if (SI_SAVE_VAR(304) != 0) {
        EnableModel(28, 1);
        EnableModel(35, 1);
        ModifyColliderFlags(0, 19, 0x7FFFFE00);
    }
});

Script N(script_80240990) = SCRIPT({
    ParentColliderToModel(25, 25);
    match SI_SAVE_VAR(304) {
        == 0 {
            bind N(script_80240808) to TriggerFlag_WALL_PUSH 25;
            EnableGroup(37, 0);
        }
        == 1 {
            TranslateGroup(26, 0xFFFFFFCE, 0, 0);
            ModifyColliderFlags(0, 19, 0x7FFFFE00);
        }
        == 2 {
            TranslateGroup(26, 50, 0, 0);
            ModifyColliderFlags(0, 19, 0x7FFFFE00);
        }
    }
    UpdateColliderTransform(25);
    ModifyColliderFlags(0, 15, 0x7FFFFE00);
});

s32 pad_000AAC[] = {
    0x00000000,
};

// rodata: D_80240AB0_A4CA10

// rodata: D_80240AB8_A4CA18

