#include "hos_01.h"

s32 pad_000794[3];
s32 pad_000DC4[3];
s32 pad_000E18[2];
Script N(script_80240E80);
s32 pad_000ED4[3];
Script N(script_80240EE0);
Script N(script_8024121C);
Script N(script_ExitWalk_80241384);
Script N(script_80241418);
Script N(script_80241540);
Script N(script_802415B0);
Script N(main);
Script N(script_UpdateTexturePan_80241B90);
s32 N(unk_80241C2C)[1];
s32 N(unk_80241C30)[1];
Script N(script_80241C34);
Script N(script_80241D48);
s32 pad_002578[2];
s32 unk_missing_802425AC[22];
Script N(script_80242604);
Script N(script_802427C8);
Script N(script_Interact_8024373C);
Script N(script_Aux_80243758);
Script N(script_Init_80244058);
StaticNpc N(npcGroup_80244230)[7];
NpcGroupList N(npcGroupList_80244FC0);
s32 pad_004FD8[2];
Script N(script_MakeEntities);
s32 pad_00504C[1];
Script N(script_80245050);
Script N(script_80245580);
s32 pad_005968[2];
const char D_80245988_A16208[8]; // "kmr_24"
const char D_80245990_A16210[8]; // "hos_00"
const char D_80245998_A16218[8]; // "hos_02"

// text: func_80240000_A10880

// text: func_80240120_A109A0

// text: func_8024031C_A10B9C

// text: func_80240534_A10DB4

// text: func_80240768_A10FE8

s32 pad_000794[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802407A0_A11020

// text: func_802408C4_A11144

// text: func_80240AAC_A1132C

// text: func_80240B10_A11390

// text: func_80240B64_A113E4

// text: func_80240BB8_A11438

// text: func_80240C08_A11488

// text: func_80240C34_A114B4

// text: func_80240C84_A11504

// text: func_80240CB0_A11530

// text: func_80240CDC_A1155C

s32 pad_000DC4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240DD0_A11650

// text: func_80240DEC_A1166C

s32 pad_000E18[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -400.0f, 0.0f, 410.0f, 45.0f },
    { 22.0f, 285.0f, -190.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19001D,
};

Script N(script_80240E80) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetMusicTrack(0, 97, 0, 8);
    }
});

s32 pad_000ED4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240EE0) = SCRIPT({
    group 11;
    SI_VAR(13) = 0;
    SI_VAR(14) = 0;
0:
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(1) < 0xFFFFFFCE) {
        sleep 1;
        goto 0;
    }
    SI_VAR(8) = 1000;
    SI_VAR(8) -= SI_VAR(1);
    SI_VAR(8) /= 10;
    if (SI_VAR(8) < 20) {
        SI_VAR(8) = 20;
    }
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    RandInt(400, SI_VAR(10));
    SI_VAR(11) = 200;
    RandInt(400, SI_VAR(12));
    SI_VAR(12) -= 200;
    SI_VAR(1) += SI_VAR(10);
    SI_VAR(2) += SI_VAR(11);
    SI_VAR(3) += SI_VAR(12);
    SI_VAR(4) = SI_VAR(1);
    RandInt(100, SI_VAR(10));
    SI_VAR(10) += 50;
    SI_VAR(4) -= SI_VAR(10);
    SI_VAR(5) = 0;
    SI_VAR(6) = SI_VAR(3);
    RandInt(4, SI_VAR(7));
    SI_VAR(7) += 10;
    match SI_VAR(3) {
        < 0xFFFFFEDE {
            SI_VAR(0) = 0;
        }
        < 40 {
            SI_VAR(0) = 2;
        }
        >= 40 {
            SI_VAR(0) = 1;
        }
    }
    if (SI_VAR(14) < 2) {
        PlaySoundAt(0xB0000015, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(14) += 1;
    }
    SI_VAR(13) += SI_VAR(8);
    if (SI_VAR(13) > 30) {
        SI_VAR(13) = 0;
        SI_VAR(14) = 0;
    }
    func_80240000_A10880(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7));
    sleep SI_VAR(8);
    goto 0;
});

Script N(script_8024121C) = SCRIPT({
    group 11;
    spawn {
0:
        RandInt(50, SI_VAR(0));
        SI_VAR(0) += 10;
        func_80240120_A109A0();
        sleep SI_VAR(0);
        goto 0;
    }
    spawn {
1:
        RandInt(50, SI_VAR(0));
        SI_VAR(0) += 20;
        func_8024031C_A10B9C();
        sleep SI_VAR(0);
        goto 1;
    }
    spawn {
2:
        RandInt(50, SI_VAR(0));
        SI_VAR(0) += 20;
        func_80240534_A10DB4();
        PlaySoundAt(0xB0000015, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep SI_VAR(0);
        goto 2;
    }
});

Script N(script_ExitWalk_80241384) = SCRIPT({
    FadeOutMusic(0, 1500);
    GotoMapSpecial(D_80245988_A16208, 0, 11);
    sleep 100;
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245990_A16210, 1);
    sleep 100;
});

Script N(script_80241418) = SCRIPT({
    group 27;
    if (SI_SAVE_VAR(0) < 90) {
        return;
    }
    DisablePlayerInput(1);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        0x802D2B6C();
        sleep 20;
        loop {
            sleep 1;
            0x802D249C(SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
        }
    }
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    await N(script_80245580);
    GotoMap(D_80245998_A16218, 0);
    sleep 100;
});

Script N(script_80241540) = SCRIPT({
    bind 0x802413BC to 0x80000 0;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 1) {
        bind N(script_80241418) to TriggerFlag_FLOOR_TOUCH 4;
    }
});

Script N(script_802415B0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    UseSettingsFrom(0, 0xFFFFFFE2, 250, 0xFFFFFF60);
    SetPanTarget(0, 0xFFFFFFE2, 250, 0xFFFFFF60);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SI_VAR(2) = 360;
    MakeLerp(500, 250, 60, 4);
    loop {
        UpdateLerp();
        SetPlayerPos(0xFFFFFFE2, SI_VAR(0), 0xFFFFFF60);
        SetNpcPos(0xFFFFFFFC, 0xFFFFFFE2, SI_VAR(0), 0xFFFFFF56);
        SI_VAR(2) += 40;
        InterpPlayerYaw(SI_VAR(2), 0);
        SetNpcRotation(0xFFFFFFFC, 0, SI_VAR(2), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SI_VAR(0) = SI_VAR(2);
    SI_VAR(0) -= 360;
    SI_VAR(2) -= SI_VAR(0);
    SI_VAR(0) = 40;
10:
    if (SI_VAR(2) < 540) {
        InterpPlayerYaw(SI_VAR(2), 0);
        SetNpcRotation(0xFFFFFFFC, 0, SI_VAR(2), 0);
        SI_VAR(2) += SI_VAR(0);
        sleep 1;
        goto 10;
    }
    SI_VAR(2) = 180;
    SI_VAR(0) -= 5;
    if (SI_VAR(0) > 20) {
        goto 10;
    }
    SetNpcRotation(0xFFFFFFFC, 0, 0, 0);
    func_80240AAC_A1132C(SI_MAP_VAR(10));
    SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    SetMusicTrack(0, 97, 0, 8);
    DisablePlayerInput(0);
20:
    func_80240768_A10FE8(SI_VAR(0));
    if (SI_VAR(0) != 16) {
        sleep 1;
        goto 20;
    }
    bind N(script_80241418) to TriggerFlag_FLOOR_TOUCH 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 27;
    SetSpriteShading(0x30000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    spawn {
1:
        if (SI_SAVE_VAR(0) != 0xFFFFFF96) {
            sleep 1;
            goto 1;
        }
        DisablePlayerInput(1);
        await N(script_ExitWalk_80241384);
    }
    MakeNpcs(0, N(npcGroupList_80244FC0));
    await N(script_MakeEntities);
    spawn N(script_80241D48);
    spawn N(script_8024121C);
    spawn N(script_80240E80);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_80241540);
            spawn EnterWalk;
            sleep 1;
        }
        == 1 {
            spawn {
                await N(script_802415B0);
                spawn N(script_80241540);
            }
        }
    }
    if (SI_SAVE_VAR(0) == 89) {
        spawn N(script_80245050);
    }
});

Script N(script_UpdateTexturePan_80241B90) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802407A0_A11020();
                    return;
                }
            }
        }
    }
    func_802408C4_A11144();
});

s32 N(unk_80241C2C)[] = {
    0x000000FF,
};

s32 N(unk_80241C30)[] = {
    0x000000FF,
};

Script N(script_80241C34) = SCRIPT({
    loop {
        MakeLerp(180, 80, 45, 10);
        loop {
            UpdateLerp();
            func_80240C84_A11504(SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(80, 180, 35, 10);
        loop {
            UpdateLerp();
            func_80240C84_A11504(SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(script_80241D48) = SCRIPT({
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFF56;
        SI_VAR(4) = 0xFFFFFFBA;
        SI_VAR(5) = 0;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241B90);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 200;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 0;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80241B90);
    }
    SetTexPanner(5, 4);
    SetTexPanner(6, 4);
    SetTexPanner(12, 5);
    SetTexPanner(20, 5);
    if (SI_SAVE_VAR(0) < 89) {
        EnableModel(90, 0);
        if (SI_SAVE_VAR(0) < 57) {
            EnableModel(89, 0);
            if (SI_SAVE_VAR(0) < 39) {
                EnableModel(88, 0);
                if (SI_SAVE_VAR(0) < 7) {
                    EnableModel(87, 0);
                    if (SI_SAVE_VAR(0) < 0xFFFFFFF1) {
                        EnableModel(86, 0);
                        if (SI_SAVE_VAR(0) < 0xFFFFFFCB) {
                            EnableModel(85, 0);
                            if (SI_SAVE_VAR(0) < 0xFFFFFFB5) {
                                EnableModel(84, 0);
                            }
                        }
                    }
                }
            }
        }
    }
    if (SI_SAVE_VAR(0) < 90) {
        EnableModel(83, 0);
    } else {
        PlayEffect(117, 0, 0xFFFFFFE2, 250, 0xFFFFFF60, 1, -1, 0, 0, 0, 0, 0, 0, 0);
        SI_MAP_VAR(10) = SI_VAR(15);
        SI_VAR(0) = 255;
        func_80240B64_A113E4(SI_MAP_VAR(10), SI_VAR(0));
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 1) {
            func_80240B10_A11390(SI_MAP_VAR(10));
        } else {
            func_80240AAC_A1132C(SI_MAP_VAR(10));
        }
    }
    SetRenderMode(84, 22);
    SetRenderMode(85, 22);
    SetRenderMode(86, 22);
    SetRenderMode(87, 22);
    SetRenderMode(88, 22);
    SetRenderMode(89, 22);
    SetRenderMode(90, 22);
    0x802C90FC(84, 0, -1);
    0x802C90FC(85, 0, -1);
    0x802C90FC(86, 0, -1);
    0x802C90FC(87, 0, -1);
    0x802C90FC(88, 0, -1);
    0x802C90FC(89, 0, -1);
    0x802C90FC(90, 0, -1);
    0x802C94A0(0, func_80240BB8_A11438, 0);
    TranslateModel(83, 0, 2, 0);
    0x802C90FC(83, 1, -1);
    0x802C94A0(1, func_80240C34_A114B4, 0);
    spawn {
        loop {
            MakeLerp(255, 100, 60, 10);
            loop {
                UpdateLerp();
                func_80240C08_A11488(SI_VAR(0));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            MakeLerp(100, 255, 35, 10);
            loop {
                UpdateLerp();
                func_80240C08_A11488(SI_VAR(0));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
    }
    spawn {
        if (SI_SAVE_VAR(0) >= 90) {
            await N(script_80241C34);
        } else {
            func_80240C84_A11504(0);
10:
            if (SI_MAP_VAR(11) != 1) {
                sleep 1;
                goto 10;
            }
            MakeLerp(0, 180, 55, 10);
            loop {
                UpdateLerp();
                func_80240C84_A11504(SI_VAR(0));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            SI_MAP_VAR(11) = 2;
            await N(script_80241C34);
        }
    }
});

s32 pad_002578[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242580) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
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

s32 unk_missing_802425AC[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_80242604) = SCRIPT({
    SI_VAR(10) = 0;
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= 245) {
        IsPlayerWithin(0xFFFFFFE2, 0xFFFFFF5B, 180, SI_VAR(3));
        if (SI_VAR(3) == 1) {
            goto 10;
        }
    }
    sleep 1;
    goto 0;
10:
    SI_VAR(10) = 1;
    FadeOutMusic(0, 2000);
    sleep 60;
20:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 245) {
        IsPlayerWithin(0xFFFFFFE2, 0xFFFFFF5B, 180, SI_VAR(3));
        if (SI_VAR(3) == 0) {
            goto 30;
        }
    }
    sleep 1;
    goto 20;
30:
    SetMusicTrack(0, 97, 0, 8);
    sleep 30;
    goto 0;
});

Script N(script_802427C8) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    UseSettingsFrom(0, 0xFFFFFFDD, 250, 0xFFFFFF6F);
    SetPanTarget(0, 0xFFFFFFDD, 250, 0xFFFFFF6F);
    SetCamDistance(0, 450);
    SetCamPitch(0, 20.0, -5.5);
    SetCamSpeed(0, 0.5);
    PanToTarget(0, 0, 1);
    0x802D2C14(2);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 30;
        SetNpcJumpscale(0xFFFFFFFC, 0);
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
        SetNpcAnimation(0xFFFFFFFC, 262);
    }
    SetMusicTrack(0, 120, 1, 8);
    SpeakToPlayer(0, 0x120002, 0x120001, 0, 0xA0000);
    sleep 10;
    sleep 1;
    PlayerFaceNpc(0, 1);
    SetNpcFlagBits(0, 256, 1);
    SetNpcJumpscale(0, 0);
    NpcJump0(0, 21, 260, 0xFFFFFEEB, 30);
    EnableModel(84, 1);
    PlaySound(100);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    func_80240CDC_A1155C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    func_80240CDC_A1155C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    func_80240CDC_A1155C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    func_80240CDC_A1155C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    func_80240CDC_A1155C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    func_80240CDC_A1155C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    EnableModel(85, 1);
    EnableModel(86, 1);
    EnableModel(87, 1);
    EnableModel(88, 1);
    EnableModel(89, 1);
    EnableModel(90, 1);
    SI_MAP_VAR(1) = -80.0;
    loop 20 {
        SI_MAP_VAR(1) += 6.0;
        sleep 1;
    }
    EnableNpcShadow(1, 1);
    EnableNpcShadow(2, 1);
    EnableNpcShadow(3, 1);
    EnableNpcShadow(4, 1);
    EnableNpcShadow(5, 1);
    EnableNpcShadow(6, 1);
    sleep 10;
    SpeakToPlayer(0, 0x120002, 0x120001, 0, 0xA0001);
    SetCamDistance(0, 270);
    SetCamSpeed(0, 2.80078125);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 20.0, -6.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x120002, 0x120001, 0, 0xA0002);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 20.0, -6.8994140625);
    WaitForCam(0, 1.0);
    SpeakToPlayer(1, 0x130002, 0x120001, 0, 0xA0003);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 20.0, -7.2998046875);
    WaitForCam(0, 1.0);
    SpeakToPlayer(2, 0x140002, 0x130001, 0, 0xA0004);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 20.0, -7.69921875);
    WaitForCam(0, 1.0);
    SpeakToPlayer(3, 0x150002, 0x150001, 0, 0xA0005);
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 20.0, -7.69921875);
    WaitForCam(0, 1.0);
    SpeakToPlayer(4, 0x160002, 0x160001, 0, 0xA0006);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 20.0, -7.2998046875);
    WaitForCam(0, 1.0);
    SpeakToPlayer(5, 0x170003, 0x170001, 0, 0xA0007);
    GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 20.0, -6.8994140625);
    WaitForCam(0, 1.0);
    SpeakToPlayer(6, 0x180002, 0x180001, 0, 0xA0008);
    SI_AREA_VAR(6) = 200;
    sleep 30;
    SI_AREA_VAR(6) = 0;
    sleep 20;
    SpeakToPlayer(6, 0x180002, 0x180001, 0, 0xA0009);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 0xFFFFFED4);
    SetCamPitch(0, 16.0, -6.0);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x120002, 0x120001, 0, 0xA000A);
    SI_AREA_VAR(0) = 200;
    SI_AREA_VAR(1) = 200;
    SI_AREA_VAR(2) = 200;
    SI_AREA_VAR(3) = 200;
    SI_AREA_VAR(4) = 200;
    SI_AREA_VAR(5) = 200;
    SI_AREA_VAR(6) = 200;
    sleep 30;
    SI_AREA_VAR(0) = 0;
    SI_AREA_VAR(1) = 0;
    SI_AREA_VAR(2) = 0;
    SI_AREA_VAR(3) = 0;
    SI_AREA_VAR(4) = 0;
    SI_AREA_VAR(5) = 0;
    SI_AREA_VAR(6) = 0;
    SpeakToPlayer(0, 0x120002, 0x120001, 0, 0xA000B);
    EnableNpcShadow(0, 0);
    EnableNpcShadow(1, 0);
    EnableNpcShadow(2, 0);
    EnableNpcShadow(3, 0);
    EnableNpcShadow(4, 0);
    EnableNpcShadow(5, 0);
    EnableNpcShadow(6, 0);
    FullyRestoreHPandFP();
    SI_AREA_VAR(0) = 100;
    SI_AREA_VAR(1) = 100;
    SI_AREA_VAR(2) = 100;
    SI_AREA_VAR(3) = 100;
    SI_AREA_VAR(4) = 100;
    SI_AREA_VAR(5) = 100;
    SI_AREA_VAR(6) = 100;
    SI_MAP_VAR(0) = 40.0;
    SI_MAP_VAR(1) = 40.0;
    loop 20 {
        SI_MAP_VAR(0) += -6.0;
        SI_MAP_VAR(1) += -6.0;
        sleep 1;
    }
    SI_MAP_FLAG(0) = 1;
    SI_AREA_VAR(0) = 0;
    SI_AREA_VAR(1) = 0;
    SI_AREA_VAR(2) = 0;
    SI_AREA_VAR(3) = 0;
    SI_AREA_VAR(4) = 0;
    SI_AREA_VAR(5) = 0;
    SI_AREA_VAR(6) = 0;
    EnableModel(84, 0);
    EnableModel(85, 0);
    EnableModel(86, 0);
    EnableModel(87, 0);
    EnableModel(88, 0);
    EnableModel(89, 0);
    EnableModel(90, 0);
    DisablePartnerAI(0);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 20;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamSpeed(0, 2.0);
    func_80240CB0_A11530(1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 30;
    SI_VAR(2) += 30;
    SetNpcSpeed(0xFFFFFFFC, 2.0);
    NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 0);
    WaitForCam(0, 1.0);
    sleep 10;
    PlayerFaceNpc(0xFFFFFFFC, 0);
    SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 0, 0xA000C);
    EnablePartnerAI();
    spawn {
        SI_SAVE_VAR(0) = 0xFFFFFF96;
        ResetCam(0, 1.5);
    }
    FadeOutMusic(0, 3000);
    sleep 10;
    DisablePlayerInput(0);
});

Script N(script_Interact_8024373C) = SCRIPT({
    spawn N(script_802427C8);
});

Script N(script_Aux_80243758) = SCRIPT({
    SI_AREA_VAR(0) = 0;
    SI_AREA_VAR(1) = 0;
    SI_AREA_VAR(2) = 0;
    SI_AREA_VAR(3) = 0;
    SI_AREA_VAR(4) = 0;
    SI_AREA_VAR(5) = 0;
    SI_AREA_VAR(6) = 0;
    spawn {
        loop {
            if (SI_AREA_VAR(0) == 0) {
                RandInt(45, SI_VAR(1));
                SI_VAR(1) += 105;
                SI_AREA_VAR(0) = 200;
                sleep 10;
                SI_AREA_VAR(0) = 0;
                sleep SI_VAR(1);
            } else {
                sleep 1;
            }
        }
    }
    spawn {
        loop {
            if (SI_AREA_VAR(1) == 0) {
                RandInt(45, SI_VAR(1));
                SI_VAR(1) += 105;
                SI_AREA_VAR(1) = 200;
                sleep 10;
                SI_AREA_VAR(1) = 0;
                sleep SI_VAR(1);
            } else {
                sleep 1;
            }
        }
    }
    spawn {
        loop {
            if (SI_AREA_VAR(2) == 0) {
                RandInt(45, SI_VAR(1));
                SI_VAR(1) += 105;
                SI_AREA_VAR(2) = 200;
                sleep 10;
                SI_AREA_VAR(2) = 0;
                sleep SI_VAR(1);
            } else {
                sleep 1;
            }
        }
    }
    spawn {
        loop {
            if (SI_AREA_VAR(3) == 0) {
                RandInt(45, SI_VAR(1));
                SI_VAR(1) += 105;
                SI_AREA_VAR(3) = 200;
                sleep 10;
                SI_AREA_VAR(3) = 0;
                sleep SI_VAR(1);
            } else {
                sleep 1;
            }
        }
    }
    spawn {
        loop {
            if (SI_AREA_VAR(4) == 0) {
                RandInt(45, SI_VAR(1));
                SI_VAR(1) += 105;
                SI_AREA_VAR(4) = 200;
                sleep 10;
                SI_AREA_VAR(4) = 0;
                sleep SI_VAR(1);
            } else {
                sleep 1;
            }
        }
    }
    spawn {
        loop {
            if (SI_AREA_VAR(5) == 0) {
                RandInt(45, SI_VAR(1));
                SI_VAR(1) += 105;
                SI_AREA_VAR(5) = 200;
                sleep 10;
                SI_AREA_VAR(5) = 0;
                sleep SI_VAR(1);
            } else {
                sleep 1;
            }
        }
    }
    spawn {
        loop {
            if (SI_AREA_VAR(6) == 0) {
                RandInt(45, SI_VAR(1));
                SI_VAR(1) += 105;
                SI_AREA_VAR(6) = 200;
                sleep 10;
                SI_AREA_VAR(6) = 0;
                sleep SI_VAR(1);
            } else {
                sleep 1;
            }
        }
    }
    loop {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop 20 {
            SI_VAR(0) += 4.0;
            SI_VAR(1) += 4.0;
            SI_VAR(2) = f SI_VAR(0);
            SI_VAR(2) += f SI_MAP_VAR(0);
            SI_VAR(3) = f SI_VAR(1);
            SI_VAR(3) += f SI_MAP_VAR(1);
            if (SI_VAR(2) < 0) {
                SI_VAR(2) = 0.0;
            }
            if (SI_VAR(3) < 0) {
                SI_VAR(3) = 0.0;
            }
            0x802CFD30(0, 13, 0, SI_AREA_VAR(0), 1, SI_VAR(2));
            0x802CFD30(1, 13, 0, SI_AREA_VAR(1), 1, SI_VAR(3));
            0x802CFD30(2, 13, 0, SI_AREA_VAR(2), 1, SI_VAR(3));
            0x802CFD30(3, 13, 0, SI_AREA_VAR(3), 1, SI_VAR(3));
            0x802CFD30(4, 13, 0, SI_AREA_VAR(4), 1, SI_VAR(3));
            0x802CFD30(5, 13, 0, SI_AREA_VAR(5), 1, SI_VAR(3));
            0x802CFD30(6, 13, 0, SI_AREA_VAR(6), 1, SI_VAR(3));
            sleep 1;
        }
        loop 20 {
            SI_VAR(0) += -4.0;
            SI_VAR(1) += -4.0;
            SI_VAR(2) = f SI_VAR(0);
            SI_VAR(2) += f SI_MAP_VAR(0);
            SI_VAR(3) = f SI_VAR(1);
            SI_VAR(3) += f SI_MAP_VAR(1);
            if (SI_VAR(2) < 0) {
                SI_VAR(2) = 0.0;
            }
            if (SI_VAR(3) < 0) {
                SI_VAR(3) = 0.0;
            }
            0x802CFD30(0, 13, 0, SI_AREA_VAR(0), 1, SI_VAR(2));
            0x802CFD30(1, 13, 0, SI_AREA_VAR(1), 1, SI_VAR(3));
            0x802CFD30(2, 13, 0, SI_AREA_VAR(2), 1, SI_VAR(3));
            0x802CFD30(3, 13, 0, SI_AREA_VAR(3), 1, SI_VAR(3));
            0x802CFD30(4, 13, 0, SI_AREA_VAR(4), 1, SI_VAR(3));
            0x802CFD30(5, 13, 0, SI_AREA_VAR(5), 1, SI_VAR(3));
            0x802CFD30(6, 13, 0, SI_AREA_VAR(6), 1, SI_VAR(3));
            sleep 1;
        }
    }
});

Script N(script_Init_80244058) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024373C));
    BindNpcAux(-1, N(script_Aux_80243758));
    if (SI_SAVE_VAR(0) < 0xFFFFFF96) {
        spawn N(script_80242604);
    }
    if (SI_SAVE_VAR(0) >= 0xFFFFFF96) {
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        SetNpcPos(2, 0, 0xFFFFFC18, 0);
        SetNpcPos(3, 0, 0xFFFFFC18, 0);
        SetNpcPos(4, 0, 0xFFFFFC18, 0);
        SetNpcPos(5, 0, 0xFFFFFC18, 0);
        SetNpcPos(6, 0, 0xFFFFFC18, 0);
        return;
    }
    EnableNpcShadow(1, 0);
    EnableNpcShadow(2, 0);
    EnableNpcShadow(3, 0);
    EnableNpcShadow(4, 0);
    EnableNpcShadow(5, 0);
    EnableNpcShadow(6, 0);
    SI_MAP_VAR(0) = 40;
    SI_MAP_VAR(1) = 0xFFFFFFB0;
});

StaticNpc N(npcGroup_80244230)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242580),
        .pos = { -30.0, 260.0, -170.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80244058),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120000, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001,
        },
        .tattle = 0x1A000A,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242580),
        .pos = { 100.0, 260.0, -215.0 },
        .flags = 0x00000F09,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130000, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80242580),
        .pos = { -145.0, 260.0, -225.0 },
        .flags = 0x00000F09,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242580),
        .pos = { 20.0, 260.0, -45.0 },
        .flags = 0x00000F09,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150000, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80242580),
        .pos = { -155.0, 260.0, -125.0 },
        .flags = 0x00000F09,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80242580),
        .pos = { 90.0, 260.0, -110.0 },
        .flags = 0x00000F09,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170000, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80242580),
        .pos = { -75.0, 260.0, -290.0 },
        .flags = 0x00000F09,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180000, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001,
        },
    },
};

NpcGroupList N(npcGroupList_80244FC0) = {
    NPC_GROUP(N(npcGroup_80244230), 0x00000000),
    {},
};

s32 pad_004FD8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 0xFFFFFF2E, 30, 285, 0, 19, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(539));
    MakeItemEntity(348, 0xFFFFFEA2, 0, 0xFFFFFEED, 17, SI_SAVE_FLAG(544));
});

s32 pad_00504C[] = {
    0x00000000,
};

Script N(script_80245050) = SCRIPT({
0:
    func_80240DEC_A1166C(SI_VAR(0));
    if (SI_VAR(0) != 16) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    0x802D5830(1);
    0x802D2884(0xFFFFFFE2, 0xFFFFFF60, 0);
    sleep 15;
    ShowMessageAtScreenPos(0xA005C, 160, 40);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF9C;
    SI_VAR(0) /= 2;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamPitch(0, 17.0, -9.0);
    SetCamSpeed(0, 3);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    ShowMessageAtScreenPos(0xA005D, 160, 40);
    SetMusicTrack(0, 43, 0, 8);
    sleep 10;
    EnableModel(83, 1);
    SI_MAP_VAR(11) = 1;
10:
    if (SI_MAP_VAR(11) != 2) {
        sleep 1;
        goto 10;
    }
    UseSettingsFrom(0, 0xFFFFFF9C, 245, 0);
    SetPanTarget(0, 0xFFFFFF9C, 245, 0);
    SetCamDistance(0, 600);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 1.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlayEffect(117, 0, 0xFFFFFFE2, 250, 0xFFFFFF60, 1, -1, 0, 0, 0, 0, 0, 0, 0);
    SI_MAP_VAR(10) = SI_VAR(15);
    func_80240AAC_A1132C(SI_MAP_VAR(10));
    MakeLerp(1, 255, 55, 1);
    loop {
        UpdateLerp();
        func_80240B64_A113E4(SI_MAP_VAR(10), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 45;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF9C;
    SI_VAR(0) /= 2;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamPitch(0, 17.0, -9.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    ShowMessageAtScreenPos(0xA005E, 160, 40);
    ResetCam(0, 5.0);
    SI_SAVE_VAR(0) = 90;
    SetMusicTrack(0, 97, 0, 8);
    0x802D5830(0);
    DisablePlayerInput(0);
});

Script N(script_80245580) = SCRIPT({
    func_80240B10_A11390(SI_MAP_VAR(10));
    UseSettingsFrom(0, 0xFFFFFFE2, 250, 0xFFFFFF60);
    SetPanTarget(0, 0xFFFFFFE2, 250, 0xFFFFFF60);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFFE2, 0xFFFFFF60, 0);
    InterpPlayerYaw(90, 0);
    SetMusicTrack(0, 43, 1, 8);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcFlagBits(0xFFFFFFFC, 320, 1);
    SetNpcJumpscale(0xFFFFFFFC, 1.0);
    NpcJump0(0xFFFFFFFC, 0xFFFFFFE2, 250, 0xFFFFFF56, 15);
    spawn {
        SI_VAR(2) = 90;
        MakeLerp(1, 90, 60, 1);
        loop {
            UpdateLerp();
            SI_VAR(2) += SI_VAR(0);
            InterpPlayerYaw(SI_VAR(2), 0);
            SetNpcRotation(0xFFFFFFFC, 0, SI_VAR(2), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        loop {
            SI_VAR(2) += SI_VAR(0);
            InterpPlayerYaw(SI_VAR(2), 0);
            SetNpcRotation(0xFFFFFFFC, 0, SI_VAR(2), 0);
            sleep 1;
        }
    }
    sleep 30;
    func_80240DD0_A11650();
    spawn {
10:
        SetCamSpeed(0, 90.0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(1) < 430) {
            sleep 1;
            goto 10;
        }
    }
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(5) = SI_VAR(4);
    SI_VAR(5) += 0xFFFFFFF6;
    MakeLerp(SI_VAR(3), 700, 90, 1);
    loop {
        UpdateLerp();
        SetPlayerPos(SI_VAR(2), SI_VAR(0), SI_VAR(4));
        SetNpcPos(0xFFFFFFFC, SI_VAR(2), SI_VAR(0), SI_VAR(5));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

s32 pad_005968[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80245970_A161F0

// rodata: D_80245978_A161F8

// rodata: D_80245980_A16200

// rodata: D_80245988_A16208

// rodata: D_80245990_A16210

// rodata: D_80245998_A16218
