#include "pra_22.h"

s32 pad_000018[2];
s32 pad_0002CC[1];
Script N(script_80240330);
s32 pad_00036C[1];
s32 N(unk_80240370)[2];
s32 N(unk_80240378)[2];
Script N(script_ExitSingleDoor_80240380);
Script N(script_80240424);
Script N(script_802404C8);
Script N(script_EnterSingleDoor_80240510);
Script N(script_80240608);
Script N(script_80240AB0);
Script N(main);
s32 pad_000E28[2];
Script N(script_80240E30);
Script N(script_80240EC0);
Script N(script_MakeEntities);
s32 pad_001158[2];
const char D_80241160_D799E0[8]; // "pra_20"
const char D_80241168_D799E8[8]; // "pra_37"

// text: func_Init_D78880

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_D788A0

// text: func_802400DC_D7895C

// text: func_802401D0_D78A50

// text: func_8024025C_D78ADC

s32 pad_0002CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 126.0f, 0.0f, 137.0f, 0.0f },
    { 487.0f, -200.0f, 70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190148,
};

Script N(script_80240330) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_00036C[] = {
    0x00000000,
};

s32 N(unk_80240370)[] = {
    0x0000002D, 0xFFFFFFFF,
};

s32 N(unk_80240378)[] = {
    0x0000002F, 0xFFFFFFFF,
};

Script N(script_ExitSingleDoor_80240380) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 12;
    SI_VAR(2) = 42;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80241160_D799E0, 4);
    sleep 100;
});

Script N(script_80240424) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 25;
    SI_VAR(2) = N(unk_80240370);
    SI_VAR(3) = N(unk_80240378);
    spawn func_80285EEC;
    sleep 17;
    GotoMap(D_80241168_D799E8, 0);
    sleep 100;
});

Script N(script_802404C8) = SCRIPT({
    bind N(script_ExitSingleDoor_80240380) to TriggerFlag_WALL_INTERACT 12;
    bind N(script_80240424) to TriggerFlag_WALL_INTERACT 25;
});

Script N(script_EnterSingleDoor_80240510) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_802404C8);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 42;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 1 {
            SI_VAR(2) = N(unk_80240370);
            SI_VAR(3) = N(unk_80240378);
            await func_802861B0;
        }
    }
    spawn N(script_802404C8);
});

Script N(script_80240608) = SCRIPT({
    loop 30 {
        GetCurrentPartner(SI_VAR(10));
        if (SI_VAR(10) != 0) {
            SI_VAR(8) = -1;
            return;
        }
        func_80240020_D788A0(SI_VAR(9));
        if (SI_VAR(0) == 0) {
            SI_VAR(8) = -1;
            return;
        } else {
            SetPlayerActionState(20);
        }
        sleep 1;
    }
    GetCurrentPartner(SI_VAR(10));
    if (SI_VAR(10) != 0) {
        SI_VAR(8) = -1;
        return;
    }
    DisablePlayerInput(1);
    spawn {
        ShakeCam(0, 0, 100, 0.6005859375);
    }
    spawn {
        if (SI_VAR(6) >= SI_VAR(7)) {
            InterpPlayerYaw(270, 0);
        } else {
            InterpPlayerYaw(90, 0);
        }
        SetPlayerActionState(20);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(2) = SI_VAR(7);
        SI_VAR(2) -= SI_VAR(6);
        SI_VAR(1) += SI_VAR(2);
        MakeLerp(SI_VAR(0), SI_VAR(1), 100, 0);
        SI_VAR(3) = 0;
        loop {
            SetPlayerActionState(20);
            UpdateLerp();
            func_802400DC_D7895C();
            if (SI_VAR(10) == 1) {
                break;
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetPlayerActionState(0);
        sleep 1;
        if (SI_VAR(10) == 1) {
            DisablePlayerPhysics(1);
            sleep 1;
            SetPlayerAnimation(0x80002);
            sleep 15;
            SetPlayerAnimation(0x10002);
            sleep 1;
            DisablePlayerPhysics(0);
            SetPlayerActionState(8);
            sleep 1;
        }
        DisablePlayerInput(0);
    }
    MakeLerp(SI_VAR(6), SI_VAR(7), 100, 0);
    PlaySoundAtCollider(28, 0x80000010, 0);
    loop {
        UpdateLerp();
        TranslateModel(33, SI_VAR(0), 0, 0);
        TranslateModel(34, SI_VAR(0), 0, 0);
        TranslateModel(35, SI_VAR(0), 0, 0);
        TranslateModel(36, SI_VAR(0), 0, 0);
        TranslateModel(38, SI_VAR(0), 0, 0);
        UpdateColliderTransform(28);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(0x80000010);
});

Script N(script_80240AB0) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) <= 337) {
        SI_VAR(6) = 0;
        SI_VAR(7) = 50;
        SI_VAR(8) = 2;
    }
    if (SI_VAR(0) >= 413) {
        SI_VAR(6) = 0;
        SI_VAR(7) = 0xFFFFFFCE;
        SI_VAR(8) = 1;
    } else {
        return;
    }
    SI_VAR(9) = 28;
    await N(script_80240608);
    if (SI_VAR(8) != -1) {
        SI_SAVE_VAR(0) = 84;
        SI_SAVE_VAR(286) = SI_VAR(8);
        spawn {
            ShakeCam(0, 0, 10, 1.0);
        }
        unbind;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80240330);
    if (SI_SAVE_VAR(0) < 84) {
        bind N(script_80240AB0) to TriggerFlag_WALL_PUSH 28;
        SI_VAR(0) = 0;
    } else {
        match SI_SAVE_VAR(286) {
            == 0 {
                SI_VAR(0) = 0xFFFFFFCE;
            }
            == 1 {
                SI_VAR(0) = 0xFFFFFFCE;
            }
            == 2 {
                SI_VAR(0) = 50;
            }
        }
    }
    ParentColliderToModel(28, 33);
    TranslateModel(33, SI_VAR(0), 0, 0);
    TranslateModel(34, SI_VAR(0), 0, 0);
    TranslateModel(35, SI_VAR(0), 0, 0);
    TranslateModel(36, SI_VAR(0), 0, 0);
    TranslateModel(38, SI_VAR(0), 0, 0);
    UpdateColliderTransform(28);
    spawn N(script_EnterSingleDoor_80240510);
    sleep 1;
});

s32 pad_000E28[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240E30) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= SI_VAR(3)) {
        SI_VAR(1) = SI_VAR(3);
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80240EC0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    GetPlayerPos(SI_VAR(7), SI_VAR(8), SI_VAR(9));
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(3) = 0xFFFFFF51;
        SI_VAR(10) = spawn N(script_80240E30);
        func_802401D0_D78A50();
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 15;
        SetPlayerJumpscale(2.0);
    } else {
        SI_VAR(3) = 0;
        SI_VAR(10) = spawn N(script_80240E30);
        if (SI_SAVE_VAR(286) == 2) {
            SI_VAR(0) = 340;
        } else {
            SI_VAR(0) = 410;
        }
        SI_VAR(1) = 0;
        SI_VAR(2) = 35;
        SetPlayerJumpscale(0.7001953125);
    }
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(9), SI_VAR(2));
    kill SI_VAR(10);
    SetPlayerActionState(0);
    sleep 2;
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    spawn {
        func_8024025C_D78ADC();
    }
    MakeEntity(D_802EAA30, 366, 0xFFFFFF38, 80, 0, 0x80000000);
    AssignScript(N(script_80240EC0));
    MakeEntity(D_802EA588, 55, 80, 75, 0, 162, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1511));
    MakeEntity(D_802EAB04, 50, 0, 75, 0, 55, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1512));
});

s32 pad_001158[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241160_D799E0

// rodata: D_80241168_D799E8
