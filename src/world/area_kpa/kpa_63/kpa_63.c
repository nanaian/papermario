#include "kpa_63.h"

s32 pad_00018C[1];
Script N(script_802401F0);
s32 pad_000328[2];
Script N(script_MakeEntities);
s32 pad_000364[3];
Script N(script_80240370);
Script N(script_8024043C);
Script N(script_ExitWalk_80240508);
Script N(script_8024058C);
Script N(script_EnterWalk_802405B8);
Script N(main);
s32 pad_00077C[1];
Script N(script_80240780);
Script N(script_802407F0);
Script N(script_802409D8);
Script N(script_80240E14);
Script N(script_80241250);
const char D_802412B0_A74860[8]; // "kpa_62"
const char D_802412B8_A74868[8]; // "kpa_60"

// text: func_80240000_A735B0

s32 pad_00018C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 160.0f, 0.0f, 240.0f, 0.0f },
    { -40.0f, 0.0f, 225.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190156,
};

Script N(script_802401F0) = SCRIPT({
    GetLoadType(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetMusicTrack(0, 100, 0, 8);
        spawn {
            sleep 30;
            func_802D5FA4(4);
        }
        ClearAmbientSounds(250);
        UseDoorSounds(1);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetMusicTrack(0, 100, 0, 8);
        spawn {
            sleep 30;
            func_802D5FA4(4);
        }
    }
    ClearAmbientSounds(250);
    UseDoorSounds(1);
});

s32 pad_000328[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802E9A18, 120, 60, 90, 0, 0x80000000);
});

s32 pad_000364[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240370) = SCRIPT({
    PlaySoundAtCollider(18, 479, 0);
    MakeLerp(100, 0, 20, 2);
    loop {
        UpdateLerp();
        SI_VAR(5) =f SI_VAR(0);
        SI_VAR(5) *= 0.0107421875;
        ScaleGroup(65, SI_VAR(5), 1, 1);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_8024043C) = SCRIPT({
    MakeLerp(0, 100, 20, 2);
    loop {
        UpdateLerp();
        SI_VAR(5) =f SI_VAR(0);
        SI_VAR(5) *= 0.0107421875;
        ScaleGroup(65, SI_VAR(5), 1, 1);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(18, 480, 0);
});

Script N(script_ExitWalk_80240508) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    spawn N(script_80240370);
    sleep 15;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802412B0_A74860, 3);
    sleep 100;
});

Script N(script_8024058C) = SCRIPT({
    bind N(script_ExitWalk_80240508) to TriggerFlag_WALL_INTERACT 18;
});

Script N(script_EnterWalk_802405B8) = SCRIPT({
    GetLoadType(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn EnterSavePoint;
        spawn N(script_8024058C);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn N(script_80240E14);
        spawn N(script_8024058C);
    } else {
        spawn N(script_8024043C);
        SI_VAR(0) = N(script_8024058C);
        spawn EnterWalk;
        sleep 1;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1993) = 1;
    await N(script_MakeEntities);
    spawn N(script_EnterWalk_802405B8);
    spawn N(script_802401F0);
    bind N(script_802409D8) to TriggerFlag_FLOOR_TOUCH 20;
    spawn N(script_80241250);
});

s32 pad_00077C[] = {
    0x00000000,
};

Script N(script_80240780) = SCRIPT({
    if (SI_MAP_VAR(12) == 1) {
        func_80240000_A735B0(0, SI_VAR(3), SI_MAP_VAR(11));
    }
    if (SI_MAP_VAR(13) == 1) {
        func_80240000_A735B0(1, SI_VAR(3), SI_MAP_VAR(11));
    }
});

Script N(script_802407F0) = SCRIPT({
0:
    MakeLerp(0, 100, 30, 10);
    loop {
        UpdateLerp();
        SI_VAR(3) =f SI_VAR(0);
        SI_VAR(3) *= 0.1005859375;
        SI_VAR(3) +=f SI_MAP_VAR(10);
        TranslateGroup(78, 0, SI_VAR(3), 0);
        RotateGroup(78, SI_MAP_VAR(11), 0, 1, 0);
        spawn N(script_80240780);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(100, 0, 30, 10);
    loop {
        UpdateLerp();
        SI_VAR(3) =f SI_VAR(0);
        SI_VAR(3) *= 0.1005859375;
        SI_VAR(3) +=f SI_MAP_VAR(10);
        TranslateGroup(78, 0, SI_VAR(3), 0);
        RotateGroup(78, SI_MAP_VAR(11), 0, 1, 0);
        spawn N(script_80240780);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    goto 0;
});

Script N(script_802409D8) = SCRIPT({
    GetCurrentPartner(SI_VAR(9));
    if (SI_VAR(9) != 0) {
        return;
    }
    DisablePlayerInput(1);
    HidePlayerShadow(1);
    GetModelCenter(75);
    SI_VAR(0) += 0xFFFFFFFB;
    SetPlayerJumpscale(0);
    PlayerJump2(SI_VAR(0), SI_VAR(1), SI_VAR(2), 2);
    SetPlayerActionState(10);
    SI_MAP_VAR(12) = 1;
    InterpPlayerYaw(225, 0);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SI_VAR(2) += 10;
    SetNpcFlagBits(0xFFFFFFFC, 320, 1);
    SetNpcJumpscale(0xFFFFFFFC, 1);
    NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SI_MAP_VAR(13) = 1;
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    EnableNpcShadow(0xFFFFFFFC, 0);
    sleep 10;
    ShowMessageAtScreenPos(0x1D0188, 160, 40);
    ShowChoice(0x1E000C);
    CloseMessage();
    if (SI_VAR(0) == 1) {
        DisablePlayerPhysics(0);
        SetPlayerJumpscale(2);
        SI_MAP_VAR(12) = 0;
        PlayerJump(0xFFFFFFCE, 0, 225, 13);
        HidePlayerShadow(0);
        SetPlayerActionState(10);
        SI_MAP_VAR(13) = 0;
        PartnerIsFlying(SI_VAR(0));
        if (SI_VAR(0) == 1) {
            sleep 10;
            SetNpcJumpscale(0xFFFFFFFC, 2);
            NpcJump0(0xFFFFFFFC, 0xFFFFFFBF, 0, 225, 13);
        }
        EnableNpcShadow(0xFFFFFFFC, 1);
        SetNpcFlagBits(0xFFFFFFFC, 64, 0);
        EnablePartnerAI();
        DisablePlayerInput(0);
        return;
    }
    SetMusicTrack(0, 98, 1, 8);
    spawn {
        PlaySoundAtPlayer(382, 0);
        SI_VAR(2) = SI_MAP_VAR(10);
        MakeLerp(0, 0xFFFFFF92, 60, 4);
        loop {
            UpdateLerp();
            SI_VAR(0) += SI_VAR(2);
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 50;
    GotoMap(D_802412B8_A74868, 5);
    sleep 100;
});

Script N(script_80240E14) = SCRIPT({
    SI_MAP_VAR(10) = 0xFFFFFF9C;
    SI_MAP_VAR(11) = 180;
    SI_MAP_VAR(12) = 1;
    SI_MAP_VAR(13) = 1;
    InterpPlayerYaw(90, 0);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    UseSettingsFrom(0, 0xFFFFFF88, 0, 230);
    SetPanTarget(0, 0xFFFFFF88, 0, 230);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    HidePlayerShadow(0);
    EnableNpcShadow(0xFFFFFFFC, 1);
    SI_VAR(9) = spawn N(script_80240780);
    PlaySoundAtPlayer(383, 0);
    spawn {
        MakeLerp(0xFFFFFF9C, 0, 60, 4);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 20;
    spawn {
        InterpPlayerYaw(270, 40);
    }
    MakeLerp(180, 0, 60, 4);
    loop {
        UpdateLerp();
        SI_MAP_VAR(11) = SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    kill SI_VAR(9);
    SetPlayerJumpscale(2);
    SI_MAP_VAR(12) = 0;
    PlayerJump(0xFFFFFFCE, 0, 225, 13);
    HidePlayerShadow(0);
    DisablePlayerPhysics(0);
    SI_MAP_VAR(13) = 0;
    PartnerIsFlying(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        sleep 10;
        SetNpcJumpscale(0xFFFFFFFC, 2);
        NpcJump0(0xFFFFFFFC, 0xFFFFFFBF, 0, 225, 13);
    }
    EnableNpcShadow(0xFFFFFFFC, 1);
    EnablePartnerAI();
    PanToTarget(0, 0, 0);
    sleep 10;
    if (SI_SAVE_VAR(0) < 94) {
        SI_SAVE_VAR(0) = 94;
    }
    SetMusicTrack(0, 100, 0, 8);
    spawn {
        sleep 30;
        func_802D5FA4(4);
    }
    DisablePlayerInput(0);
});

Script N(script_80241250) = SCRIPT({
    spawn N(script_802407F0);
    ParentColliderToModel(20, 75);
    loop {
        UpdateColliderTransform(20);
        sleep 1;
    }
});

// rodata: D_802412B0_A74860

// rodata: D_802412B8_A74868
