#include "trd_05.h"

s32 pad_00071C[1];
s32 pad_00076C[1];
Script N(script_802407F0);
Script N(script_8024082C);
Script N(script_80240874);
s32 pad_0008BC[1];
Script N(script_ExitDoubleDoor_802408C0);
Script N(script_ExitDoubleDoor_80240964);
Script N(script_ExitWalk_80240A08);
Script N(script_ExitDoubleDoor_80240A64);
Script N(script_80240B08);
Script N(script_EnterDoubleDoor_80240B88);
Script N(script_80240CE4);
Script N(script_80240DF4);
Script N(main);
s32 pad_0010B8[2];
Script N(script_MakeEntities);
s32 pad_00111C[1];
s32 N(vectorList_80241120)[12];
s32 unk_missing_80241150[12];
Script N(script_80241180);
Script N(script_802414B4);
Script N(script_80241810);
Script N(script_80241ECC);
Script N(script_Init_80242C0C);
StaticNpc N(npcGroup_80242C5C)[2];
NpcGroupList N(npcGroupList_8024303C);
s32 pad_003054[3];
const char D_80243060_9B1760[8]; // "trd_04"
const char D_80243068_9B1768[8]; // "trd_00"
const char D_80243080_9B1780[8]; // "trd_06"
s32 pad_003088[2];

// text: func_80240000_9AE700

// text: func_80240020_9AE720

// text: func_80240404_9AEB04

// text: func_802404D0_9AEBD0

// text: func_80240508_9AEC08

// text: func_802405FC_9AECFC

s32 pad_00071C[] = {
    0x00000000,
};

// text: func_80240720_9AEE20

s32 pad_00076C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -310.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 310.0f, 0.0f },
    { 290.0f, 0.0f, 30.0f, 270.0f },
    { -310.0f, 240.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190053,
};

Script N(script_802407F0) = SCRIPT({
    SetMusicTrack(0, 20, 0, 8);
    UseDoorSounds(1);
});

Script N(script_8024082C) = SCRIPT({
    FadeInMusic(1, 81, 0, 3000, 0, 127);
    FadeOutMusic(0, 3000);
});

Script N(script_80240874) = SCRIPT({
    FadeInMusic(0, 20, 0, 3000, 0, 127);
    FadeOutMusic(1, 3000);
});

s32 pad_0008BC[] = {
    0x00000000,
};

Script N(script_ExitDoubleDoor_802408C0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 43;
    SI_VAR(3) = 41;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243060_9B1760, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240964) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 46;
    SI_VAR(3) = 49;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243068_9B1768, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240A08) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80243068_9B1768, 3);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240A64) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 12;
    SI_VAR(2) = 51;
    SI_VAR(3) = 53;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243060_9B1760, 3);
    sleep 100;
});

Script N(script_80240B08) = SCRIPT({
    bind N(script_ExitDoubleDoor_802408C0) to TriggerFlag_WALL_INTERACT 2;
    bind N(script_ExitWalk_80240A08) to 0x80000 17;
    bind N(script_ExitDoubleDoor_80240964) to TriggerFlag_WALL_INTERACT 7;
    bind N(script_ExitDoubleDoor_80240A64) to TriggerFlag_WALL_INTERACT 12;
});

Script N(script_EnterDoubleDoor_80240B88) = SCRIPT({
    group 0;
    suspend group 1;
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 43;
            SI_VAR(3) = 41;
            await EnterDoubleDoor;
            spawn N(script_80240B08);
        }
        == 1 {
            SI_VAR(2) = 46;
            SI_VAR(3) = 49;
            await EnterDoubleDoor;
            spawn N(script_80240B08);
        }
        == 2 {
            SI_VAR(0) = N(script_80240B08);
            spawn EnterWalk;
        }
        == 3 {
            SI_VAR(2) = 51;
            SI_VAR(3) = 53;
            await EnterDoubleDoor;
            spawn N(script_80240B08);
        }
    }
    resume group 1;
});

Vec4f N(triggerCoord_80240CD4) =  { 300.0f, 0.0f, 0.0f, 0.0f };

Script N(script_80240CE4) = SCRIPT({
    PlayEffect(66, 0, 29, 0, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    group 0;
    suspend group 1;
    SetGroupEnabled(28, 1);
    loop 10 {
        SetGroupEnabled(31, 1);
        sleep 1;
        SetGroupEnabled(31, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 19, 0x7FFFFE00);
    SI_SAVE_FLAG(658) = 1;
    resume group 1;
    unbind;
});

Script N(script_80240DF4) = SCRIPT({
    group 0;
    SetTexPanner(39, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
10:
    SetTexPanOffset(1, 0, SI_VAR(0), 0);
    SetTexPanOffset(1, 1, SI_VAR(1), 0);
    SI_VAR(0) += 100;
    SI_VAR(1) -= 100;
    sleep 1;
    goto 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_8024303C));
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(658) == 0) {
        SetGroupEnabled(28, 0);
        bind N(script_80240CE4) to TriggerFlag_BOMB N(triggerCoord_80240CD4);
    } else {
        SetGroupEnabled(31, 0);
        ModifyColliderFlags(0, 19, 0x7FFFFE00);
    }
    spawn N(script_802407F0);
    spawn N(script_80240DF4);
    EnableModel(56, 0);
    EnableModel(58, 0);
    SetGroupEnabled(5, 0);
    ModifyColliderFlags(0, 25, 0x7FFFFE00);
    if (SI_SAVE_VAR(0) < 0xFFFFFFAB) {
        sleep 10;
        func_80240000_9AE700();
        spawn N(script_80241ECC);
    } else {
        spawn N(script_EnterDoubleDoor_80240B88);
    }
    sleep 1;
});

s32 pad_0010B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFAC) {
        MakeEntity(0x802EA5F4, 0xFFFFFFBA, 300, 0xFFFFFFF1, 0, 0x80000000);
        AssignScript(N(script_80241810));
    }
});

s32 pad_00111C[] = {
    0x00000000,
};

s32 N(vectorList_80241120)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x41A00000, 0xC3160000, 0x00000000, 0x42480000, 0xC32A0000,
    0x00000000, 0x42A00000, 0xC3200000, 0x00000000,
};

s32 unk_missing_80241150[] = {
    0x00000000, 0x00000000, 0x00000000, 0x41C80000, 0xC2A00000, 0x00000000, 0x42480000, 0xC2C80000,
    0x00000000, 0x428C0000, 0xC2C80000, 0x00000000,
};

Script N(script_80241180) = SCRIPT({
    spawn {
        sleep 5;
        PlaySound(373);
    }
    spawn {
        MakeLerp(0, 150, 45, 10);
10:
        UpdateLerp();
        func_802405FC_9AECFC(0, 0.0, 0.0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    sleep 1;
    GetPlayerPos(SI_VAR(4), SI_VAR(5), SI_VAR(6));
    SetPlayerPos(0, 0xFFFFFC18, 0);
    LoadPath(45, N(vectorList_80241120), 4, 10);
0:
    GetNextPathPos();
    SI_VAR(1) += f SI_VAR(4);
    SI_VAR(2) += f SI_VAR(5);
    SI_VAR(3) += f SI_VAR(6);
    func_80240508_9AEC08(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SI_VAR(4) = f SI_VAR(1);
    SI_VAR(5) = f SI_VAR(2);
    SI_VAR(6) = f SI_VAR(3);
    spawn {
        sleep 5;
        PlaySound(373);
    }
    MakeLerp(0, 100, 30, 1);
1:
    UpdateLerp();
    SI_VAR(7) = -1.0;
    SI_VAR(8) = -1.7314453125;
    SI_VAR(9) = 0.0;
    SI_VAR(7) *= f SI_VAR(0);
    SI_VAR(8) *= f SI_VAR(0);
    SI_VAR(9) *= f SI_VAR(0);
    SI_VAR(7) += f SI_VAR(4);
    SI_VAR(8) += f SI_VAR(5);
    SI_VAR(9) += f SI_VAR(6);
    func_80240508_9AEC08(SI_VAR(7), SI_VAR(8), SI_VAR(9));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    SetPlayerPos(SI_VAR(7), SI_VAR(8), SI_VAR(9));
});

Script N(script_802414B4) = SCRIPT({
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    spawn {
        sleep 5;
        PlaySound(374);
    }
    spawn {
        MakeLerp(0, 0xFFFFFF79, 45, 10);
10:
        UpdateLerp();
        SetNpcRotation(0xFFFFFFFC, 0.0, 0.0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    sleep 1;
    GetNpcPos(0xFFFFFFFC, SI_VAR(4), SI_VAR(5), SI_VAR(6));
    LoadPath(45, N(vectorList_80241120), 4, 10);
0:
    GetNextPathPos();
    SI_VAR(1) *= -1.0;
    SI_VAR(1) += f SI_VAR(4);
    SI_VAR(2) += f SI_VAR(5);
    SI_VAR(3) += f SI_VAR(6);
    SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    spawn {
        sleep 5;
        PlaySound(374);
    }
    GetNpcPos(0xFFFFFFFC, SI_VAR(4), SI_VAR(5), SI_VAR(6));
    MakeLerp(0, 100, 30, 1);
1:
    UpdateLerp();
    SI_VAR(7) = 1.0;
    SI_VAR(8) = -2.0;
    SI_VAR(9) = 0.0;
    SI_VAR(7) *= f SI_VAR(0);
    SI_VAR(8) *= f SI_VAR(0);
    SI_VAR(9) *= f SI_VAR(0);
    SI_VAR(7) += f SI_VAR(4);
    SI_VAR(8) += f SI_VAR(5);
    SI_VAR(9) += f SI_VAR(6);
    SetNpcPos(0xFFFFFFFC, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    SetNpcPos(0xFFFFFFFC, SI_VAR(7), SI_VAR(8), SI_VAR(9));
});

Script N(script_80241810) = SCRIPT({
    DisablePlayerInput(1);
10:
    GetPlayerActionState(SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) != 0) {
        goto 10;
    }
    loop {
        GetCurrentPartner(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
        sleep 1;
    }
    sleep 10;
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    spawn {
        SetNpcAnimation(0xFFFFFFFC, 258);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFF6;
        SI_VAR(2) += 0xFFFFFFFB;
        NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 10);
        SetNpcAnimation(0xFFFFFFFC, 262);
    }
    sleep 10;
    EnableModel(3, 0);
    EnableModel(56, 1);
    EnableModel(58, 1);
    SetGroupEnabled(5, 1);
    PlaySound(8337);
    MakeLerp(0, 90, 30, 7);
0:
    UpdateLerp();
    RotateModel(56, SI_VAR(0), 0, 0, -1);
    RotateModel(58, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    SetPlayerAnimation(0x10002);
    InterpPlayerYaw(270, 1);
    sleep 10;
    InterpPlayerYaw(90, 1);
    sleep 15;
    InterpPlayerYaw(270, 1);
    sleep 3;
    InterpPlayerYaw(90, 1);
    sleep 3;
    InterpPlayerYaw(270, 1);
    sleep 3;
    sleep 10;
    SetPlayerAnimation(0x80017);
    sleep 5;
    SetNpcAnimation(0xFFFFFFFC, 265);
    sleep 15;
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    sleep 5;
    spawn {
        func_80240404_9AEB04();
        await N(script_80241180);
    }
    spawn {
        sleep 10;
        await N(script_802414B4);
    }
    ModifyColliderFlags(0, 24, 0x7FFFFE00);
    UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(5) = SI_VAR(3);
    SI_VAR(5) -= 200;
    SetPanTarget(0, SI_VAR(2), SI_VAR(5), SI_VAR(4));
    PanToTarget(0, 0.5, 1);
    SetCamSpeed(0, 1.0);
    WaitForCam(0, 1.0);
    if (SI_SAVE_VAR(0) < 0xFFFFFFAC) {
        sleep 60;
        PanToTarget(0, 0, 0);
        WaitForCam(0, 1.0);
        func_802404D0_9AEBD0();
        SetNpcPos(0, 0xFFFFFF06, 240, 0xFFFFFFE7);
        SetNpcAnimation(0, 0x660202);
        SetNpcSpeed(0, 3.0);
        NpcMoveTo(0, 0xFFFFFF6A, 0xFFFFFFE7, 0);
        sleep 5;
        SetNpcAnimation(0, 0x66021A);
        sleep 20;
        SetNpcAnimation(0, 0x660204);
        sleep 5;
        SpeakToPlayer(0, 0x660214, 0x660204, 5, 0xC00D7);
        spawn {
            sleep 10;
            SetNpcSpeed(0, 2.5);
            SetNpcAnimation(0, 0x660202);
            NpcMoveTo(0, 0xFFFFFF38, 0xFFFFFFE7, 0);
        }
        sleep 20;
        SI_SAVE_VAR(0) = 0xFFFFFFAC;
    } else {
        sleep 20;
    }
    GotoMap(D_80243080_9B1780, 0);
    sleep 100;
});

NpcSettings N(npcSettings_80241EA0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_80241ECC) = SCRIPT({
    spawn N(script_8024082C);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetPlayerPos(0xFFFFFEA2, 0, 0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFEA2, 0, 0);
    UseSettingsFrom(0, 0xFFFFFFBA, 240, 0xFFFFFFF6);
    SetPanTarget(0, 0xFFFFFFBA, 240, 0xFFFFFFF6);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(0, 0x660204);
    spawn {
        loop 8 {
            0x802CFD30(0, 7, 0, 0, 0, 0);
            0x802CFD30(1, 7, 255, 0, 0, 0);
            sleep 6;
            0x802CFD30(0, 7, 255, 0, 0, 0);
            0x802CFD30(1, 7, 0, 0, 0, 0);
            sleep 6;
        }
    }
    spawn {
        loop 8 {
            sleep 5;
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 8;
            func_80240720_9AEE20();
            sleep 5;
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 8;
            func_80240720_9AEE20();
            sleep 1;
        }
    }
    spawn {
        PlaySound(41);
        SetNpcAnimation(1, 0x66021D);
        SetNpcPos(1, 0xFFFFFF9C, 240, 30);
        SetNpcYaw(1, 90);
        sleep 15;
        PlaySound(42);
        SetNpcAnimation(1, 0x66021D);
        SetNpcPos(1, 0xFFFFFFDD, 240, 0xFFFFFFB5);
        SetNpcYaw(1, 270);
        sleep 15;
        PlaySound(41);
        SetNpcAnimation(1, 0x66021D);
        SetNpcPos(1, 0xFFFFFFD8, 240, 10);
        SetNpcYaw(1, 270);
        sleep 15;
        PlaySound(42);
        SetNpcAnimation(1, 0x66021D);
        SetNpcPos(1, 0xFFFFFF92, 240, 0xFFFFFFEC);
        SetNpcYaw(1, 90);
        sleep 15;
        PlaySound(41);
        SetNpcAnimation(1, 0x66021D);
        SetNpcPos(1, 0xFFFFFFA6, 240, 30);
        SetNpcYaw(1, 90);
        sleep 15;
        PlaySound(42);
        SetNpcAnimation(1, 0x66021D);
        SetNpcPos(1, 0xFFFFFFE2, 240, 0xFFFFFFCE);
        SetNpcYaw(1, 270);
        sleep 15;
        SetNpcPos(1, 0, 0xFFFFFE0C, 0);
    }
    SetNpcPos(0, 0xFFFFFFD3, 240, 0xFFFFFFE2);
    SetNpcYaw(0, 270);
    sleep 1;
    SetNpcJumpscale(0, 1.6005859375);
    NpcJump0(0, 0xFFFFFFD3, 240, 0xFFFFFFE2, 6);
    NpcJump0(0, 0xFFFFFFD3, 240, 0xFFFFFFE2, 6);
    SetNpcPos(0, 0xFFFFFF88, 240, 20);
    SetNpcYaw(0, 90);
    SetNpcAnimation(0, 0x66021B);
    sleep 15;
    SetNpcAnimation(0, 0x660204);
    SetNpcPos(0, 0xFFFFFF92, 240, 0xFFFFFFBA);
    SetNpcYaw(0, 90);
    sleep 1;
    SetNpcJumpscale(0, 1.6005859375);
    NpcJump0(0, 0xFFFFFF92, 240, 0xFFFFFFBA, 6);
    NpcJump0(0, 0xFFFFFF92, 240, 0xFFFFFFBA, 6);
    SetNpcPos(0, 0xFFFFFFDD, 240, 0xFFFFFFCD);
    SetNpcYaw(0, 270);
    SetNpcAnimation(0, 0x66021B);
    sleep 14;
    SetNpcAnimation(0, 0x660204);
    SetNpcPos(0, 0xFFFFFFD3, 240, 0xFFFFFFE7);
    SetNpcYaw(0, 270);
    sleep 1;
    SetNpcJumpscale(0, 1.6005859375);
    NpcJump0(0, 0xFFFFFFD3, 240, 0xFFFFFFE7, 6);
    NpcJump0(0, 0xFFFFFFD3, 240, 0xFFFFFFE7, 6);
    sleep 1;
    SetNpcPos(0, 0xFFFFFF88, 240, 20);
    SetNpcYaw(0, 90);
    SetNpcAnimation(0, 0x66021B);
    sleep 20;
    SetNpcPos(0, 0xFFFFFF88, 240, 20);
    SetNpcYaw(0, 90);
    SetNpcAnimation(0, 0x66021A);
    sleep 26;
    SetNpcAnimation(0, 0x660204);
    sleep 10;
    SetNpcAnimation(0, 0x660202);
    SetNpcSpeed(0, 4.0);
    NpcMoveTo(0, 0xFFFFFFE7, 0xFFFFFFF1, 0);
    SetNpcAnimation(0, 0x660204);
    sleep 10;
    InterpNpcYaw(0, 270, 4);
    sleep 10;
    SetNpcAnimation(0, 0x660205);
    sleep 25;
    SetNpcAnimation(0, 0x660204);
    sleep 10;
    SetNpcAnimation(0, 0x660202);
    SetNpcSpeed(0, 4.0);
    NpcMoveTo(0, 0xFFFFFF86, 0xFFFFFFF1, 0);
    SetNpcAnimation(0, 0x660204);
    sleep 3;
    InterpNpcYaw(0, 90, 5);
    sleep 10;
    SpeakToPlayer(0, 0x660214, 0x660204, 5, 0xC00D5);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAtNpc(0, 610, 0);
    ShowEmote(0, 0, 0, 25, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40);
    sleep 25;
    InterpNpcYaw(0, 270, 2);
    sleep 7;
    SetNpcAnimation(0, 0x660205);
    sleep 25;
    SetNpcAnimation(0, 0x660204);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcJumpscale(0, 3.0);
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5);
    SpeakToPlayer(0, 0x660214, 0x660204, 0, 0xC00D6);
    PlaySound(371);
    SetNpcAnimation(0, 0x660203);
    SetNpcJumpscale(0, 0.80078125);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    sleep 8;
    PlaySound(372);
    SetNpcSpeed(0, 8.0);
    NpcMoveTo(0, 0xFFFFFE70, 0xFFFFFFF6, 0);
    spawn N(script_80240874);
    UseSettingsFrom(0, 0xFFFFFEF2, 0, 0);
    SetPanTarget(0, 0xFFFFFEF2, 0, 0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    PlaySound(451);
    MakeLerp(0, 80, 10, 0);
10:
    UpdateLerp();
    RotateModel(43, SI_VAR(0), 0, -1, 0);
    RotateModel(41, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    SetPlayerPos(0xFFFFFECA, 0, 0);
    await N(script_EnterDoubleDoor_80240B88);
    PanToTarget(0, 0, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFAB;
});

Script N(script_Init_80242C0C) = SCRIPT({
    InterpNpcYaw(-1, 90, 0);
    if (SI_SAVE_VAR(0) >= 0xFFFFFFAC) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80242C5C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241EA0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80242C0C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00660204, 0x00660202, 0x00660203, 0x00660203, 0x00660204, 0x00660204, 0x0066020A, 0x0066020A, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241EA0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80242C0C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00660204, 0x00660202, 0x00660203, 0x00660203, 0x00660204, 0x00660204, 0x0066020A, 0x0066020A, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203,
        },
    },
};

NpcGroupList N(npcGroupList_8024303C) = {
    NPC_GROUP(N(npcGroup_80242C5C), 0x00000000),
    {},
};

s32 pad_003054[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80243060_9B1760

// rodata: D_80243068_9B1768

// rodata: D_80243070_9B1770

// rodata: D_80243078_9B1778

// rodata: D_80243080_9B1780

s32 pad_003088[] = {
    0x00000000, 0x00000000,
};
