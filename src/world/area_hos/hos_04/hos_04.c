#include "hos_04.h"

s32 pad_0005B4[3];
s32 pad_0005D8[2];
s32 pad_000B5C[1];
s32 pad_000BC8[2];
Script N(script_80240F20);
Script N(script_80240F58);
s32 pad_001048[2];
Script N(script_ExitWalk_80241050);
Script N(script_ExitWalk_802410AC);
Script N(script_80241108);
Script N(script_EnterWalk_80241150);
Script N(main);
s32 pad_0016E8[2];
s32 N(unk_802416F0)[1];
Script N(script_UpdateTexturePan_802416F4);
Script N(script_80241790);
s32 pad_001A44[3];
Script N(script_80241A50);
Script N(script_80241A60);
s32 pad_001AB8[2];
s32 N(vectorList_80241AC0)[24];
s32 pad_001B20[1];
s32 N(unk_80241B24)[11];
s32 N(unk_80241B50)[1];
s32 N(unk_80241B54)[8];
s32 N(unk_80241B74)[2];
s32 N(unk_80241B7C)[1];
s32 N(unk_80241B80)[1];
s32 N(unk_80241B84)[1];
s32 N(unk_80241B88)[1];
Script N(script_80241B8C);
Script N(script_80241C5C);
Script N(script_80241E48);
s32 unk_missing_80241F6C[22];
Script N(script_Init_80241FC4);
StaticNpc N(npcGroup_80241FD4)[1];
NpcGroupList N(npcGroupList_802421C4);
s32 pad_0021DC[1];
Script N(script_802421E0);
Script N(script_80242474);
Script N(script_802425C0);
Script N(script_80242A64);
Script N(script_80242E14);
s32 pad_00324C[1];
s32 N(unk_80243250)[1];
s32 N(unk_80243254)[1];
s32 N(unk_80243258)[1];
s32 N(unk_8024325C)[10];
s32 N(unk_80243284)[4];
Script N(script_80243294);
s32 pad_0032E4[3];
const char D_802432F0_A2A1C0[8]; // "hos_03"
const char D_802432F8_A2A1C8[8]; // "hos_05"
s32 pad_003308[2];
s32 pad_003324[1];
const char D_80243330_A2A200[8]; // "hos_20"
const char D_80243338_A2A208[8]; // "kpa_60"
const char D_80243340_A2A210[8]; // "hos_00"
const char D_80243348_A2A218[8]; // "osr_03"
const char D_80243350_A2A220[8]; // "hos_05"
s32 pad_00336C[1];

// text: func_80240000_A26ED0

// text: func_80240154_A27024

// text: func_802402A8_A27178

// text: func_802403CC_A2729C

s32 pad_0005B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802405C0_A27490

s32 pad_0005D8[] = {
    0x00000000, 0x00000000,
};

// text: func_802405E0_A274B0

// text: func_80240654_A27524

// text: func_8024068C_A2755C

// text: func_80240694_A27564

// text: func_80240734_A27604

// text: func_802408F8_A277C8

// text: func_802409B0_A27880

// text: func_80240A84_A27954

s32 pad_000B5C[] = {
    0x00000000,
};

// text: func_80240B60_A27A30

s32 pad_000BC8[] = {
    0x00000000, 0x00000000,
};

// text: func_80240BD0_A27AA0

// text: func_80240E40_A27D10

// text: func_80240E6C_A27D3C

EntryList N(entryList) = {
    { -565.0f, 0.0f, 0.0f, 90.0f },
    { 100.0f, 100.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { -1570.0f, 0.0f, 0.0f, 90.0f },
    { -1570.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190020,
};

Script N(script_80240F20) = SCRIPT({
    sleep 80;
    SetMusicTrack(0, 149, 2, 8);
});

Script N(script_80240F58) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 2 {
            SetMusicTrack(0, 98, 0, 8);
        }
        == 3 {}
        == 4 {
            spawn N(script_80240F20);
        } else {
            if (SI_SAVE_FLAG(532) == 0) {
                SetMusicTrack(0, 99, 1, 8);
            } else {
                SetMusicTrack(0, 96, 0, 8);
            }
            PlaySound(0x80000064);
        }
    }
});

s32 pad_001048[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80241050) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802432F0_A2A1C0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802410AC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802432F8_A2A1C8, 0);
    sleep 100;
});

Script N(script_80241108) = SCRIPT({
    bind N(script_ExitWalk_80241050) to 0x80000 0;
    bind N(script_ExitWalk_802410AC) to 0x80000 4;
});

Script N(script_EnterWalk_80241150) = SCRIPT({
    SI_AREA_FLAG(181) = 0;
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            ModifyColliderFlags(0, 1, 0x7FFFFE00);
            if (SI_SAVE_FLAG(532) == 0) {
                spawn {
                    DisablePlayerInput(1);
                    SetPlayerPos(0xFFFFFD8A, 0, 0);
                    GetCurrentPartner(SI_VAR(0));
                    if (SI_VAR(0) == 0) {
                        DisablePartnerAI(0);
                        SetNpcPos(0xFFFFFFFC, 0xFFFFFD6C, 0, 0);
                        sleep 1;
                        EnablePartnerAI();
                    }
                    UseSettingsFrom(0, 0xFFFFFDCB, 0, 0);
                    SetPanTarget(0, 0xFFFFFDCB, 0, 0);
                    SetCamDistance(0, 1350);
                    SetCamPitch(0, 15.0, -25.0);
                    SetCamPosA(0, -15.0, -100.0);
                    SetCamPosB(0, 87.5, 50.0);
                    SetCamSpeed(0, 90.0);
                    PanToTarget(0, 0, 1);
                    WaitForCam(0, 1.0);
                    sleep 10;
                    SetCamPitch(0, 4.0, -7.5);
                    SetCamSpeed(0, 0.150390625);
                    PanToTarget(0, 0, 1);
                    WaitForCam(0, 1.0);
                    sleep 30;
                    SI_VAR(0) = N(script_80241108);
                    await EnterWalk;
                    sleep 20;
                    SI_SAVE_FLAG(532) = 1;
                    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    UseSettingsFrom(0, SI_VAR(0), 0, SI_VAR(2));
                    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
                    SetCamSpeed(0, 90.0);
                    PanToTarget(0, 0, 1);
                    WaitForCam(0, 1.0);
                    PanToTarget(0, 0, 0);
                    SI_AREA_FLAG(181) = 1;
                    DisablePlayerInput(0);
                }
            } else {
                SI_VAR(0) = N(script_80241108);
                spawn EnterWalk;
                sleep 1;
            }
        }
        == 1 {
            ModifyColliderFlags(0, 1, 0x7FFFFE00);
            SI_VAR(0) = N(script_80241108);
            spawn EnterWalk;
        }
        == 2 {
            spawn N(script_802421E0);
        }
        == 3 {
            await N(script_80241E48);
        }
        == 4 {
            await N(script_80241B8C);
        }
        == 5 {
            EnableGroup(166, 0);
            spawn N(script_802425C0);
        }
        == 6 {
            EnableGroup(166, 0);
            spawn N(script_80242A64);
        }
        == 7 {
            EnableGroup(166, 0);
            spawn N(script_80242E14);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 29;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    spawn {
        MakeNpcs(0, N(npcGroupList_802421C4));
    }
    spawn N(script_80241790);
    await N(script_80240F58);
    spawn N(script_EnterWalk_80241150);
    sleep 1;
    spawn N(script_80243294);
});

s32 pad_0016E8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802416F0)[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802416F4) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402A8_A27178();
                    return;
                }
            }
        }
    }
    func_802403CC_A2729C();
});

Script N(script_80241790) = SCRIPT({
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 100;
        SI_VAR(2) = 0xFFFFFFB0;
        SI_VAR(3) = 0xFFFFFFCE;
        SI_VAR(4) = 120;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802416F4);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFF830;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802416F4);
    }
    EnableTexPanning(9, 1);
    EnableTexPanning(154, 1);
    EnableTexPanning(162, 1);
    0x802C90FC(162, 0, -1);
    0x802C90FC(154, 0, -1);
    0x802C90FC(160, 1, -1);
    0x802C90FC(152, 1, -1);
    0x802C94A0(0, func_80240000_A26ED0, 0);
    0x802C94A0(1, func_80240154_A27024, 0);
});

s32 pad_001A44[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241A50) = SCRIPT({

});

Script N(script_80241A60) = SCRIPT({
    func_802405C0_A27490();
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = -1;
            spawn N(script_80241A50);
        }
    }
});

s32 pad_001AB8[] = {
    0x00000000, 0x00000000,
};

s32 N(vectorList_80241AC0)[] = {
    0xC4274000, 0x42C40000, 0xC2080000, 0xC4274000, 0x42880000, 0xC2080000, 0xC4210000, 0x41600000,
    0xC1B80000, 0xC40D0000, 0x41000000, 0x42200000, 0xC3A20000, 0x43080000, 0x432F0000, 0xC2180000,
    0x42EC0000, 0x00000000, 0x434D0000, 0x42DE0000, 0x00000000, 0x43988000, 0x42CA0000, 0x00000000,
};

s32 pad_001B20[] = {
    0x00000000,
};

s32 N(unk_80241B24)[] = {
    0x00000000, 0x442F0000, 0xBF666666, 0x00000000, 0xBF800000, 0x00000000, 0x43FA0000, 0xBF800000,
    0x00000000, 0xC18B3333, 0x00000000,
};

s32 N(unk_80241B50)[] = {
    0x00000000,
};

s32 N(unk_80241B54)[] = {
    0x44264000, 0xBF666666, 0x00000000, 0xBF800000, 0x00000000, 0x43FA0000, 0xBF800000, 0x00000000,
};

s32 N(unk_80241B74)[] = {
    0xC18B3333, 0x00000000,
};

s32 N(unk_80241B7C)[] = {
    0x442F0000,
};

s32 N(unk_80241B80)[] = {
    0x00000000,
};

s32 N(unk_80241B84)[] = {
    0x00000000,
};

s32 N(unk_80241B88)[] = {
    0x00000000,
};

Script N(script_80241B8C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetCamLeadPlayer(0, 0);
    func_802405E0_A274B0(0, 75);
    SetPanTarget(0, 0, 30, 0);
    LoadSettings(0, N(unk_80241B50));
    PanToTarget(0, 0, 1);
    SetCamSpeed(0, 90.0);
    spawn {
        spawn N(script_80241C5C);
    }
});

Script N(script_80241C5C) = SCRIPT({
    SetNpcAnimation(0, 0x20001A);
    SetNpcYaw(0, 180);
    func_802409B0_A27880();
    sleep 15;
    spawn {
        sleep 10;
        InterpNpcYaw(0, 0, 0);
        sleep 2;
        SetNpcAnimation(0, 0x200000);
        sleep 20;
        InterpNpcYaw(0, 180, 0);
        sleep 2;
        SetNpcAnimation(0, 0x20001A);
    }
    spawn {
        sleep 100;
        func_80240A84_A27954();
    }
    LoadPath(200, N(vectorList_80241AC0), 8, 0);
0:
    GetNextPathPos();
    SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    spawn {
        sleep 85;
        func_8024068C_A2755C();
    }
    sleep 120;
    func_80240654_A27524();
});

Script N(script_80241E48) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetCamLeadPlayer(0, 0);
    func_802405E0_A274B0(0, 75);
    SetPanTarget(0, 0, 30, 0);
    LoadSettings(0, N(unk_80241B24));
    PanToTarget(0, 0, 1);
    SetCamSpeed(0, 90.0);
    spawn {
        func_802408F8_A277C8();
    }
    spawn {
        sleep 300;
        func_80240654_A27524();
    }
});

NpcSettings N(npcSettings_80241F40) = {
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

s32 unk_missing_80241F6C[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Init_80241FC4) = SCRIPT({

});

StaticNpc N(npcGroup_80241FD4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241F40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80241FC4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
    },
};

NpcGroupList N(npcGroupList_802421C4) = {
    NPC_GROUP(N(npcGroup_80241FD4), 0x00000000),
    {},
};

s32 pad_0021DC[] = {
    0x00000000,
};

Script N(script_802421E0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetCamPerspective(0, 3, 45, 16, 4096);
    UseSettingsFrom(0, 0xFFFFFEE8, 0, 0);
    SetPanTarget(0, 0xFFFFFEE8, 0, 0);
    SetCamType(0, 0, 0);
    SetCamDistance(0, 550.0);
    SetCamPosA(0, -688.0, 50.0);
    SetCamPosB(0, -544.0, 50.0);
    SetCamPitch(0, 2.0, -20.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    spawn {
        PlaySound(385);
        MakeLerp(0, 900, 45, 1);
        loop {
            UpdateLerp();
            TranslateGroup(171, 0, SI_VAR(0), 0);
            SI_VAR(0) += 520;
            SetPlayerPos(315, SI_VAR(0), 5);
            SetNpcPos(0xFFFFFFFC, 313, SI_VAR(0), 5);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 55;
    GotoMap(D_80243330_A2A200, 0);
    sleep 100;
});

Script N(script_80242474) = SCRIPT({
    SI_VAR(4) = 0;
    SI_VAR(5) = 100;
10:
    SI_VAR(3) = SI_VAR(4);
    SI_VAR(4) = SI_VAR(5);
    SI_VAR(5) = SI_VAR(3);
    MakeLerp(SI_VAR(3), SI_VAR(4), 30, 10);
    loop {
        UpdateLerp();
        SI_VAR(2) = f SI_VAR(0);
        SI_VAR(2) *= 0.1005859375;
        SI_VAR(2) += f SI_MAP_VAR(11);
        TranslateGroup(171, SI_MAP_VAR(10), SI_VAR(2), 0);
        RotateGroup(171, SI_MAP_VAR(12), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    goto 10;
});

Script N(script_802425C0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    ModifyColliderFlags(0, 16, 0x7FFFFE00);
    InterpPlayerYaw(90, 0);
    UseSettingsFrom(0, 0xFFFFFE0C, 0, 0);
    SetPanTarget(0, 0xFFFFEC78, 0, 0);
    SetCamDistance(0, 350.0);
    SetCamPosA(0, 0xFFFFEC78, 50);
    SetCamPosB(0, 5000, 50);
    SetCamPitch(0, 17.0, -7.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_MAP_VAR(13) = 0;
    SI_MAP_VAR(10) = 0xFFFFEC78;
    SI_MAP_VAR(11) = 0xFFFFFDF3;
    SI_MAP_VAR(12) = 180;
    spawn N(script_80242474);
    sleep 1;
    spawn {
        SI_VAR(7) = 45;
        loop 20 {
            SI_MAP_VAR(10) += SI_VAR(7);
            sleep 1;
        }
        SI_VAR(7) = 50;
        loop {
            SI_MAP_VAR(10) += SI_VAR(7);
            sleep 1;
            GetModelCenter(167);
            SI_VAR(0) += 25;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) -= 10;
            SI_VAR(2) += 2;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            GetCamPosition(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            if (SI_VAR(0) > SI_VAR(3)) {
                if (SI_VAR(7) > 45) {
                    SI_VAR(7) -= 1;
                }
            }
            if (SI_MAP_VAR(10) > 2000) {
                SI_MAP_VAR(13) = 1;
            }
        }
    }
    spawn {
        SI_VAR(0) = 0xFFFFEC78;
        loop {
            SI_VAR(0) += 45;
            SetPanTarget(0, SI_VAR(0), 0, 0);
            PanToTarget(0, 0, 1);
            sleep 1;
        }
    }
20:
    if (SI_MAP_VAR(13) == 0) {
        sleep 1;
        goto 20;
    }
    if (SI_SAVE_VAR(0) < 93) {
        GotoMap(D_80243340_A2A210, 3);
    } else {
        SI_VAR(0) = 2;
        loop 10 {
            SI_VAR(0) *= 2;
            SI_MAP_VAR(10) += SI_VAR(0);
            sleep 1;
        }
        sleep 20;
        GotoMap(D_80243338_A2A208, 4);
    }
    sleep 100;
});

Script N(script_80242A64) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    ModifyColliderFlags(0, 16, 0x7FFFFE00);
    UseSettingsFrom(0, 0xFFFFFE0C, 0, 0);
    SetPanTarget(0, 0xFFFFEC78, 0, 0);
    SetCamDistance(0, 350.0);
    SetCamPosA(0, 0xFFFFEC78, 50);
    SetCamPosB(0, 5000, 50);
    SetCamPitch(0, 17.0, -7.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_MAP_VAR(13) = 0;
    SI_MAP_VAR(10) = 0xFFFFEDBF;
    SI_MAP_VAR(11) = 0xFFFFFDF3;
    SI_MAP_VAR(12) = 180;
    spawn N(script_80242474);
    sleep 1;
    spawn {
        loop {
            SI_MAP_VAR(10) += 45;
            sleep 1;
            GetModelCenter(167);
            SI_VAR(0) += 25;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) -= 10;
            SI_VAR(2) += 2;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
    }
    spawn {
        SI_VAR(0) = 0xFFFFEC78;
        loop {
            SI_VAR(0) += 45;
            SetPanTarget(0, SI_VAR(0), 0, 0);
            PanToTarget(0, 0, 1);
            sleep 1;
            if (SI_VAR(0) > 0) {
                SI_MAP_VAR(13) = 1;
            }
        }
    }
20:
    if (SI_MAP_VAR(13) == 0) {
        sleep 1;
        goto 20;
    }
    SI_VAR(0) = 2;
    loop 10 {
        SI_VAR(0) *= 2;
        SI_MAP_VAR(10) += SI_VAR(0);
        sleep 1;
    }
    sleep 20;
    GotoMap(D_80243348_A2A218, 3);
    sleep 100;
});

Script N(script_80242E14) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    ModifyColliderFlags(0, 16, 0x7FFFFE00);
    SetNpcYaw(0xFFFFFFFC, 90);
    UseSettingsFrom(0, 0xFFFFFE0C, 0, 0);
    SetPanTarget(0, 5000, 0, 0);
    SetCamDistance(0, 350.0);
    SetCamPosA(0, 0xFFFFEC78, 50);
    SetCamPosB(0, 5000, 50);
    SetCamPitch(0, 17.0, -7.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SI_MAP_VAR(13) = 0;
    SI_MAP_VAR(10) = 5000;
    SI_MAP_VAR(11) = 0xFFFFFDF3;
    SI_MAP_VAR(12) = 0;
    spawn N(script_80242474);
    sleep 2;
    spawn {
        InterpPlayerYaw(225, 0);
        SI_VAR(7) = 0xFFFFFFCE;
        loop {
            SI_MAP_VAR(10) += SI_VAR(7);
            GetModelCenter(167);
            SI_VAR(0) += 0xFFFFFFE7;
            SI_VAR(2) += 0xFFFFFFFB;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) += 10;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
            GetCamPosition(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            if (SI_VAR(0) < SI_VAR(3)) {
                if (SI_VAR(7) < 0xFFFFFFD3) {
                    SI_VAR(7) += 1;
                }
            }
        }
    }
    spawn {
        SI_VAR(0) = 5000;
        loop {
            SI_VAR(0) += 0xFFFFFFD3;
            SetPanTarget(0, SI_VAR(0), 0, 0);
            PanToTarget(0, 0, 1);
            sleep 1;
            if (SI_VAR(0) < 0xFFFFFC18) {
                SI_MAP_VAR(13) = 1;
            }
        }
    }
20:
    if (SI_MAP_VAR(13) == 0) {
        sleep 1;
        goto 20;
    }
    SI_VAR(0) = 0xFFFFFFFE;
    loop 10 {
        SI_VAR(0) *= 2;
        SI_MAP_VAR(10) += SI_VAR(0);
        sleep 1;
    }
    GotoMap(D_80243350_A2A220, 1);
    sleep 100;
});

s32 pad_00324C[] = {
    0x00000000,
};

s32 N(unk_80243250)[] = {
    0x00000000,
};

s32 N(unk_80243254)[] = {
    0x00000000,
};

s32 N(unk_80243258)[] = {
    0x00000000,
};

s32 N(unk_8024325C)[] = {
    0xFFFFFFFF, 0x00000059, 0x0000001B, 0x0000002C, 0x0000001C, 0x0000002C, 0x0000001D, 0x0000002C,
    0x00000000, 0x00000000,
};

s32 N(unk_80243284)[] = {
    N(unk_8024325C), N(unk_8024325C), N(unk_8024325C), N(unk_8024325C),
};

Script N(script_80243294) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            func_80240E40_A27D10(func_80240E6C_A27D3C);
        }
    }
});

s32 pad_0032E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802432F0_A2A1C0

// rodata: D_802432F8_A2A1C8

// rodata: D_80243300_A2A1D0

s32 pad_003308[] = {
    0x00000000, 0x00000000,
};

// rodata: jtbl_80243310_A2A1E0

s32 pad_003324[] = {
    0x00000000,
};

// rodata: D_80243328_A2A1F8

// rodata: D_80243330_A2A200

// rodata: D_80243338_A2A208

// rodata: D_80243340_A2A210

// rodata: D_80243348_A2A218

// rodata: D_80243350_A2A220

// rodata: jtbl_80243358_A2A228

s32 pad_00336C[] = {
    0x00000000,
};
