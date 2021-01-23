#include "flo_21.h"

s32 pad_000B34[3];
s32 unk_missing_80240CD0[8];
Script N(script_80240D40);
Script N(script_80240DA0);
Script N(script_80240E3C);
Script N(script_ExitWalk_802412F4);
Script N(script_80241350);
Script N(main);
s32 unk_missing_802414FC[25];
Script N(script_80241560);
Script N(script_80241580);
Script N(script_802415A0);
Script N(script_802415C0);
Script N(script_802415E0);
Script N(script_80241600);
s32 pad_0017BC[1];
s32 unk_missing_80241818[33];
s32 N(vectorList_8024189C)[9];
Script N(script_802418C0);
Script N(script_80241920);
Script N(script_80241B98);
Script N(script_80242290);
s32 N(intTable_8024249C)[60];
s32 N(intTable_8024258C)[18];
s32 N(intTable_802425D4)[4];
s32 N(intTable_802425E4)[18];
s32 N(intTable_8024262C)[4];
Script N(script_8024263C);
Script N(script_80242918);
Script N(script_80242D34);
Script N(script_80243010);
Script N(script_Idle_80243428);
Script N(script_Defeat_802434D8);
Script N(script_Defeat_802435D4);
Script N(script_Init_802435E4);
Script N(script_Init_80243684);
Script N(script_Init_8024371C);
Script N(script_Init_802437A8);
s32 N(extraAnimationList_802437E0)[9];
StaticNpc N(npcGroup_80243804)[3];
s32 N(extraAnimationList_80243DD4)[2];
StaticNpc N(npcGroup_80243DDC)[15];
NpcGroupList N(npcGroupList_80245AEC);
const char D_80245B24_CEC224[8]; // "kmr_23"
const char D_80245B2C_CEC22C[8]; // "flo_19"
s32 pad_005B34[3];

// text: func_80240000_CE6700

// text: func_8024004C_CE674C

// text: func_802401AC_CE68AC

// text: func_802405BC_CE6CBC

// text: func_802405FC_CE6CFC

// text: func_80240708_CE6E08

// text: func_802407F4_CE6EF4

// text: func_80240918_CE7018

// text: func_80240B00_CE7200

s32 pad_000B34[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240B40_CE7240

s32 unk_missing_80240CD0[] = {
    0x3C03800B, 0x24631D80, 0x94620002, 0x3042FFFE, 0xA4620002, 0x03E00008, 0x24020002, 0x00000000,
};

EntryList N(entryList) = {
    { -800.0f, -46.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190124,
};

Script N(script_80240D40) = SCRIPT({
    if (SI_SAVE_VAR(0) == 56) {
        FadeOutMusic(0, 500);
    } else {
        SetMusicTrack(0, 50, 0, 8);
    }
});

Script N(script_80240DA0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802407F4_CE6EF4();
                    return;
                }
            }
        }
    }
    func_80240918_CE7018();
});

Script N(script_80240E3C) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 55 {
            SI_VAR(0) = 0;
            if (SI_MAP_VAR(10) == 0) {
                return;
            }
            SI_SAVE_VAR(0) = 56;
        }
        == 56 {
            SI_VAR(0) = 1;
        }
        else {
            return;
        }
    }
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 650, 205, 0);
        SetCamSpeed(0, 0.6005859375);
        SetPanTarget(0, 650, 150, 0);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (-5.5 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), -5.5);
        }
        PanToTarget(0, 0, 1);
        func_8024004C_CE674C(5, 180, 650, 170, 0, 650, 205, 0, 150, 120);
        spawn {
            func_802401AC_CE68AC();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240000_CE6700();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 650, 205, 0);
        }
        spawn {
            sleep 45;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 180;
            sleep 115;
            PlaySoundAt(311, 0, 650, 205, 0);
        }
        func_802405BC_CE6CBC(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 650, 120, 0);
        func_802405BC_CE6CBC(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_802405FC_CE6CFC(5, 650, 150, 0, 120);
        spawn {
            func_80240708_CE6E08();
        }
        sleep 1;
    }
    func_802405BC_CE6CBC(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 57;
    GotoMapSpecial(D_80245B24_CEC224, 5, 14);
    sleep 100;
});

Script N(script_ExitWalk_802412F4) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245B2C_CEC22C, 1);
    sleep 100;
});

Script N(script_80241350) = SCRIPT({
    bind N(script_ExitWalk_802412F4) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 39;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80245AEC));
    spawn N(script_80241B98);
    HidePlayerShadow(1);
    spawn N(script_80241600);
    ModifyColliderFlags(3, 5, 7);
    ModifyColliderFlags(3, 7, 7);
    GetEntryID(SI_VAR(0));
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    SI_VAR(0) = N(script_80241350);
    spawn EnterWalk;
    await N(script_80240D40);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240B00_CE7200();
    }
    spawn N(script_80240E3C);
});

s32 unk_missing_802414FC[] = {
    0x00000000, 0xF24A7E80, 0xF24A7E80, 0xF24A7E80, 0xF24A7E80, 0xF24A7E80, 0xF24A7E80, 0xF24A7EE7,
    0xF24A7EE7, 0xF24A7EE7, 0xF24A7EE7, 0xF24A7EE7, 0xF24A7EE7, 0xF24A7E80, 0xF24A7E80, 0xF24A7E80,
    0xF24A7E80, 0xF24A7E80, 0xF24A7E80, 0xF24A7E1A, 0xF24A7E1A, 0xF24A7E1A, 0xF24A7E1A, 0xF24A7E1A,
    0xF24A7E1A,
};

Script N(script_80241560) = SCRIPT({
    SI_MAP_VAR(0) += -1.5;
});

Script N(script_80241580) = SCRIPT({
    SI_MAP_VAR(1) += -1.5;
});

Script N(script_802415A0) = SCRIPT({
    SI_MAP_VAR(2) += -1.5;
});

Script N(script_802415C0) = SCRIPT({
    SI_MAP_VAR(3) += -1.5;
});

Script N(script_802415E0) = SCRIPT({
    SI_MAP_VAR(4) += -1.5;
});

Script N(script_80241600) = SCRIPT({
    spawn {
        SI_VAR(15) = 0;
    0:
        func_80240B40_CE7240(SI_VAR(15), SI_VAR(0), 0.96875, 1.03125, 15, 0, 0);
        func_80240B40_CE7240(SI_VAR(15), SI_VAR(1), 1.03125, 0.96875, 15, 0, 0);
        ScaleModel(88, SI_VAR(1), SI_VAR(0), 1);
        ScaleModel(90, SI_VAR(1), SI_VAR(0), 1);
        ScaleModel(92, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(94, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(96, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(98, SI_VAR(1), SI_VAR(0), 1);
        ScaleModel(100, SI_VAR(0), SI_VAR(1), 1);
        ScaleModel(102, SI_VAR(0), SI_VAR(1), 1);
        SI_VAR(15) += 1;
        if (SI_VAR(15) >= 30) {
            SI_VAR(15) = 0;
        }
        sleep 1;
        goto 0;
    }
});

s32 pad_0017BC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_802417C0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802417EC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
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

s32 unk_missing_80241818[] = {
    0x00000000, 0x001A0018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00630000,
};

s32 N(vectorList_8024189C)[] = {
    0x44160000, 0x42D00000, 0x00000000, 0x440FC000, 0x434C0000, 0x00000000, 0x44098000, 0x42D00000,
    0x00000000,
};

Script N(script_802418C0) = SCRIPT({
0:
    PlaySound(8374);
    ShakeCam(0, 0, 15, 1.0);
    sleep 15;
    goto 0;
});

Script N(script_80241920) = SCRIPT({
    PlaySoundAtNpc(0, 960, 0);
    PlayEffect(37, 3, 650, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 15;
    SetNpcJumpscale(1, 0.0);
    NpcJump0(1, 650, 50, 0, 5);
    SetNpcPos(0, 650, 50, 5);
    SetNpcPos(1, 650, 50, 0);
    SetNpcPos(2, 650, 50, 0);
    SetNpcJumpscale(0, 0.0);
    SetNpcJumpscale(1, 0.0);
    SetNpcJumpscale(2, 0.0);
    spawn {
        NpcJump0(0, 650, 150, 5, 10);
    }
    spawn {
        NpcJump0(1, 650, 150, 0, 10);
    }
    spawn {
        NpcJump0(2, 650, 150, 0, 10);
    }
    spawn {
        SetPlayerAnimation(0x80017);
        LoadPath(30, N(vectorList_8024189C), 3, 0);
    0:
        GetNextPathPos();
        SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 0;
        }
    }
    SetPlayerAnimation(0x1002B);
});

Script N(script_80241B98) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 56) {
        return;
    }
    AwaitPlayerApproach(650, 0, 30);
    DisablePlayerInput(1);
    SetMusicTrack(0, 88, 0, 8);
    SI_VAR(9) = spawn N(script_802418C0);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        func_802D2B6C();
        sleep 20;
    }
    DisablePlayerPhysics(1);
    InterpPlayerYaw(90, 1);
    sleep 5;
    SetPlayerAnimation(0x1002B);
    SetNpcFlagBits(1, 256, 1);
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    MakeLerp(SI_VAR(2), 600, 20, 0);
    SI_VAR(2) = SI_VAR(3);
    SI_VAR(5) = SI_VAR(3);
    SI_VAR(5) += 15;
    loop {
        UpdateLerp();
        SI_VAR(3) += 3;
        SetPlayerPos(SI_VAR(0), SI_VAR(3), SI_VAR(4));
        if (SI_VAR(3) > SI_VAR(5)) {
            SI_VAR(3) = SI_VAR(2);
        }
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
        SetPanTarget(0, SI_VAR(0), SI_VAR(2), SI_VAR(4));
    }
    func_802D2C14(1);
    SetPlayerPos(SI_VAR(0), SI_VAR(2), SI_VAR(4));
    SetNpcFlagBits(1, 256, 0);
    DisablePlayerPhysics(0);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 25;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -9.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    ShowMessageAtWorldPos(0x1100CA, 630, 120, 0);
    SetCamDistance(0, 600.0);
    SetCamPitch(0, 30.0, -9.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    ShowMessageAtWorldPos(0x1100CB, 630, 120, 0);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -9.0);
    PanToTarget(0, 0, 1);
    func_802D2C14(0);
    sleep 10;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 8) {
        ShowMessageAtWorldPos(0x1100CC, 630, 120, 0);
    } else {
        ShowMessageAtWorldPos(0x1100CD, 630, 120, 0);
    }
    parallel {
        sleep 15;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 25;
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamPitch(0, 17.0, -6.0);
        SI_VAR(3) = 40;
        loop 5 {
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 400.0);
            SetCamSpeed(0, SI_VAR(3));
            WaitForCam(0, 1.0);
            SI_VAR(3) -= 10;
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 600.0);
            SetCamSpeed(0, SI_VAR(3));
            WaitForCam(0, 1.0);
            SI_VAR(3) += 7;
        }
    }
    await N(script_80241920);
    kill SI_VAR(9);
    sleep 30;
    SetNpcVar(0, 0, 1);
    DisablePlayerInput(0);
    sleep 15;
});

Script N(script_80242290) = SCRIPT({
    SI_VAR(0) = 0.9501953125;
    SI_VAR(1) = 1.1005859375;
0:
    match SI_MAP_VAR(13) {
        == 0 {
            SI_VAR(3) = 10;
            SI_VAR(2) = 2;
        }
        == 1 {
            SI_VAR(3) = 5;
            SI_VAR(2) = 1;
        }
        else {
            return;
        }
    }
    SI_VAR(4) = SI_VAR(3);
    loop SI_VAR(4) {
        SetNpcScale(0, SI_VAR(0), SI_VAR(1), 1);
        SetNpcScale(1, SI_VAR(0), SI_VAR(1), 1);
        SetNpcScale(2, SI_VAR(0), SI_VAR(1), 1);
        SI_VAR(0) += 0.015625;
        SI_VAR(1) -= 0.0107421875;
        sleep SI_VAR(2);
    }
    SI_VAR(4) = SI_VAR(3);
    loop SI_VAR(4) {
        SetNpcScale(0, SI_VAR(0), SI_VAR(1), 1);
        SetNpcScale(1, SI_VAR(0), SI_VAR(1), 1);
        SetNpcScale(2, SI_VAR(0), SI_VAR(1), 1);
        SI_VAR(0) -= 0.015625;
        SI_VAR(1) += 0.0107421875;
        sleep SI_VAR(2);
    }
    goto 0;
});

s32 N(intTable_8024249C)[] = {
    0x0000027B, 0x000000A5, 0x000001C2, 0x00000078, 0x00000280, 0x000000AA, 0x00000208, 0x0000010E,
    0x0000028A, 0x000000AF, 0x0000028A, 0x00000113, 0x00000294, 0x000000AA, 0x000002DA, 0x00000113,
    0x00000299, 0x000000A5, 0x00000352, 0x00000078, 0x00000276, 0x00000096, 0x000001C2, 0x0000009B,
    0x0000027D, 0x00000096, 0x00000258, 0x00000113, 0x0000028A, 0x00000096, 0x00000352, 0x0000009B,
    0x00000297, 0x00000096, 0x000002EE, 0x0000010E, 0x0000029E, 0x00000096, 0x00000352, 0x000000C3,
    0x0000027B, 0x00000087, 0x000001C2, 0x000000C3, 0x00000280, 0x00000082, 0x000001C2, 0x000000EB,
    0x0000028A, 0x0000007D, 0x000001C2, 0x0000010E, 0x00000294, 0x00000082, 0x00000352, 0x0000010E,
    0x00000299, 0x00000087, 0x00000352, 0x000000EB,
};

s32 N(intTable_8024258C)[] = {
    0x0000000A, 0x0000000E, 0x00000007, 0x0000000E, 0x00000005, 0x00000006, 0x00000005, 0x0000000C,
    0x00000006, 0x0000000C, 0x00000005, 0x00000005, 0x00000005, 0x0000000A, 0x00000005, 0x0000000A,
    0x00000005, 0x00000004,
};

s32 N(intTable_802425D4)[] = {
    0x00000008, 0x0000000A, 0x0000000A, 0x00000008,
};

s32 N(intTable_802425E4)[] = {
    0x0000000A, 0x00000005, 0x00000007, 0x00000005, 0x0000000E, 0x00000006, 0x0000000E, 0x00000005,
    0x00000006, 0x00000005, 0x0000000C, 0x00000005, 0x0000000C, 0x00000005, 0x00000005, 0x00000005,
    0x0000000A, 0x00000004,
};

s32 N(intTable_8024262C)[] = {
    0x0000000A, 0x00000006, 0x00000006, 0x0000000A,
};

Script N(script_8024263C) = SCRIPT({
    SI_VAR(0) = 10;
    SI_VAR(1) = 1;
    parallel {
        loop 8 {
            SetNpcFlagBits(0, 2, 0);
            SetNpcFlagBits(1, 2, 0);
            SetNpcFlagBits(2, 2, 0);
            sleep SI_VAR(0);
            SetNpcFlagBits(0, 2, 1);
            SetNpcFlagBits(1, 2, 1);
            SetNpcFlagBits(2, 2, 1);
            sleep SI_VAR(1);
            SI_VAR(0) -= 0;
            SI_VAR(1) += 0;
        }
        loop {
            SetNpcFlagBits(0, 2, 0);
            SetNpcFlagBits(1, 2, 0);
            SetNpcFlagBits(2, 2, 0);
            sleep SI_VAR(0);
            SetNpcFlagBits(0, 2, 1);
            SetNpcFlagBits(1, 2, 1);
            SetNpcFlagBits(2, 2, 1);
            sleep SI_VAR(1);
        }
    }
    parallel {
        loop {
            MakeLerp(0, 255, 10, 4);
            loop {
                UpdateLerp();
                func_802CFD30(0, 9, SI_VAR(0), SI_VAR(0), SI_VAR(0), 0);
                func_802CFD30(1, 9, SI_VAR(0), SI_VAR(0), SI_VAR(0), 0);
                func_802CFD30(2, 9, SI_VAR(0), SI_VAR(0), SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
    }
    sleep 100;
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242918) = {
    SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024258C)),
        SI_CMD(ScriptOpcode_LOOP, 6),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 0, 8374, 0),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
            SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(6), SI_VAR(7), SI_VAR(8), 11),
            SI_CMD(ScriptOpcode_LOOP, 0),
                SI_CMD(ScriptOpcode_CALL, UpdateLerp),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), 10),
                SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                    SI_CMD(ScriptOpcode_BREAK_LOOP),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802425D4)),
            SI_CMD(ScriptOpcode_LOOP, 2),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 0, 8374, 0),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(6), SI_VAR(7), 4, 11),
                SI_CMD(ScriptOpcode_LOOP, 0),
                    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
                    SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), 10),
                    SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_VAR(0)),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                        SI_CMD(ScriptOpcode_BREAK_LOOP),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802425E4)),
        SI_CMD(ScriptOpcode_LOOP, 6),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
            SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(6), SI_VAR(7), SI_VAR(8), 11),
            SI_CMD(ScriptOpcode_LOOP, 0),
                SI_CMD(ScriptOpcode_CALL, UpdateLerp),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), 10),
                SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                    SI_CMD(ScriptOpcode_BREAK_LOOP),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024262C)),
            SI_CMD(ScriptOpcode_LOOP, 2),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(6), SI_VAR(7), 4, 11),
                SI_CMD(ScriptOpcode_LOOP, 0),
                    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
                    SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), 10),
                    SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_VAR(0)),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                        SI_CMD(ScriptOpcode_BREAK_LOOP),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_LOOP, 100),
        SI_CMD(ScriptOpcode_CALL, SetNpcScale, 0, SI_MAP_VAR(11), SI_MAP_VAR(12), 1),
        SI_CMD(ScriptOpcode_CALL, SetNpcScale, 1, SI_MAP_VAR(11), SI_MAP_VAR(12), 1),
        SI_CMD(ScriptOpcode_CALL, SetNpcScale, 2, SI_MAP_VAR(11), SI_MAP_VAR(12), 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242D34) = {
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 3),
            SI_CMD(ScriptOpcode_LOOP, 15),
                SI_CMD(ScriptOpcode_CALL, SetNpcRotation, SI_VAR(0), 0, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 60),
            SI_CMD(ScriptOpcode_IF_GT, SI_VAR(1), 360),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 0xFFFFFE98),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024249C)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(8), 3),
    SI_CMD(ScriptOpcode_LOOP, 14),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_CALL, RandInt, 5, SI_VAR(5)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(8), SI_VAR(1), SI_VAR(2), 0xFFFFFFE2),
            SI_CMD(ScriptOpcode_CALL, RandInt, 2, SI_VAR(5)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(5), 8),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, SI_VAR(8), 981, 0),
            SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(8), SI_VAR(3), SI_VAR(4), 0xFFFFFFF1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(8), 0, 0xFFFFFC18, 0),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(8), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 1, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 2, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(8), SI_VAR(1), SI_VAR(2), 0xFFFFFFE2),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, SI_VAR(8), 982, 0),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(8), SI_VAR(3), SI_VAR(4), 0xFFFFFFF1, 10),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(8), 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80243010) = SCRIPT({
    SetNpcAnimation(1, 0x7C0004);
    SetNpcAnimation(0, 0x7C0005);
    SetNpcAnimation(2, 0x7C0006);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFF1;
    SI_VAR(2) += 40;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350.0);
    SetCamPitch(0, 17.0, -5.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x7C0030, 0x7C0005, 256, 0xFFFFFFE2, 30, 0x1100CE);
    FadeOutMusic(0, 1500);
    SI_MAP_VAR(13) = 2;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        SI_VAR(3) = SI_VAR(0);
        SI_VAR(4) = SI_VAR(0);
        SI_VAR(3) += 0xFFFFFFDD;
        SI_VAR(4) += 35;
        loop 3 {
            PlayEffect(25, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 12;
            PlayEffect(25, 0, SI_VAR(3), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            SI_VAR(3) += 7;
            sleep 8;
            PlayEffect(25, 0, SI_VAR(4), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            SI_VAR(4) += 0xFFFFFFF9;
            sleep 14;
        }
        PlayEffect(25, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        ShakeCam(0, 0, 30, 1.5);
    }
    spawn {
        sleep 30;
        loop 10 {
            PlayEffect(58, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 65, 12, 15, 0, 0, 0, 0, 0);
            sleep 7;
        }
    }
    spawn N(script_8024263C);
    await N(script_80242918);
    await N(script_80242D34);
    sleep 10;
});

Script N(script_Idle_80243428) = SCRIPT({
0:
    SetSelfVar(0, 0);
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        sleep 1;
    }
    SI_MAP_VAR(13) = 1;
    StartBossBattle(14);
    goto 0;
});

Script N(script_Defeat_802434D8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetEncounterStatusFlags(1, 1);
            SetNpcYaw(0xFFFFFFFC, 90);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(3));
            GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(3) += 0xFFFFFFEC;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(3));
            await N(script_80243010);
            sleep 50;
            SI_MAP_VAR(10) = 1;
            spawn N(script_80240E3C);
        }
    }
});

Script N(script_Defeat_802435D4) = SCRIPT({

});

Script N(script_Init_802435E4) = SCRIPT({
    if (SI_SAVE_VAR(0) < 56) {
        SetEnemyFlagBits(-1, 0x400000, 1);
        BindNpcIdle(-1, N(script_Idle_80243428));
        BindNpcDefeat(-1, N(script_Defeat_802434D8));
        SetNpcAnimation(-1, 0x7C0002);
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80243684) = SCRIPT({
    if (SI_SAVE_VAR(0) < 56) {
        SetEnemyFlagBits(-1, 0x400000, 1);
        BindNpcDefeat(-1, N(script_Defeat_802435D4));
        SetNpcAnimation(-1, 0x7C0001);
        spawn N(script_80242290);
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_8024371C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 56) {
        SetEnemyFlagBits(-1, 0x400000, 1);
        BindNpcDefeat(-1, N(script_Defeat_802435D4));
        SetNpcAnimation(-1, 0x7C0019);
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_802437A8) = SCRIPT({
    SetNpcAnimation(-1, 0x7D000B);
    SetNpcJumpscale(-1, 0);
});

s32 N(extraAnimationList_802437E0)[] = {
    0x007C0000, 0x007C0001, 0x007C0002, 0x007C0004, 0x007C0005, 0x007C0031, 0x007C0019, 0x007C002D,
    0xFFFFFFFF,
};

StaticNpc N(npcGroup_80243804)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802417EC),
        .pos = { 650.0, -1000.0, 0.0 },
        .flags = 0x00040D01,
        .init = N(script_Init_802435E4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001,
        },
        .extraAnimations = N(extraAnimationList_802437E0),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802417EC),
        .pos = { 650.0, 100.0, 0.0 },
        .flags = 0x00040F01,
        .init = N(script_Init_80243684),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001,
        },
        .extraAnimations = N(extraAnimationList_802437E0),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802417EC),
        .pos = { 650.0, -1000.0, 0.0 },
        .flags = 0x00040F01,
        .init = N(script_Init_8024371C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001, 0x007C0001,
        },
        .extraAnimations = N(extraAnimationList_802437E0),
    },
};

s32 N(extraAnimationList_80243DD4)[] = {
    0x007D000B, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80243DDC)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 7,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 8,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 9,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 10,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 11,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 12,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 13,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 14,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 15,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 16,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
    {
        .id = 17,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802437A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
        .extraAnimations = N(extraAnimationList_80243DD4),
    },
};

NpcGroupList N(npcGroupList_80245AEC) = {
    NPC_GROUP(N(npcGroup_80243804), 0x19000008),
    NPC_GROUP(N(npcGroup_80243DDC), 0x181F0008),
    {},
};

// rodata: jtbl_80245B10_CEC210

// rodata: D_80245B24_CEC224

// rodata: D_80245B2C_CEC22C

s32 pad_005B34[] = {
    0x00000000, 0x00000000, 0x00000000,
};
