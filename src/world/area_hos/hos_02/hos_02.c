#include "hos_02.h"

s32 unk_missing_80240FCC[9];
s32 pad_002ADC[1];
Script N(script_80242BD0);
s32 pad_002C24[3];
Script N(script_80242C30);
Script N(script_ExitWalk_80242D38);
Script N(script_80242D94);
Script N(script_80242E04);
Script N(main);
s32 pad_00330C[1];
Script N(script_UpdateTexturePan_80243310);
s32 N(byteTable_802433AC)[3];
Script N(script_802433B8);
s32 pad_00447C[1];
Script N(script_80244480);
f32 N(floatTable_80244490)[6];
Script N(script_NpcAI_802444D8);
StaticNpc N(npcGroup_80244574)[1];
StaticNpc N(npcGroup_80244764)[1];
StaticNpc N(npcGroup_80244954)[1];
NpcGroupList N(npcGroupList_80244B44);
s32 pad_004B74[3];
Script N(script_80244B80);
s32 pad_004DC8[2];
const char D_80244DD0_A1AFF0[8]; // "hos_01"
const char D_80244DD8_A1AFF8[8]; // "hos_03"
s32 pad_004E74[1];
s32 pad_004ED4[3];

// text: func_80240000_A16220

// text: func_80240124_A16344

// text: func_8024030C_A1652C

// text: func_80240434_A16654

// text: func_80240610_A16830

// text: func_80240904_A16B24

// text: func_80240BFC_A16E1C

// text: func_80240EF4_A17114

// text: func_80240F68_A17188

s32 unk_missing_80240FCC[] = {
    0x00000000, 0x3C028007, 0x8C42419C, 0x8442008E, 0xAC820084, 0x03E00008, 0x24020002, 0x00000000,
    0x00000000,
};

// text: func_80240FF0_A17210

// text: func_802411A0_A173C0

// text: N(UnkNpcAIFunc1)

// text: func_80241888_A17AA8

// text: N(UnkNpcAIFunc2)

// text: func_80241C44_A17E64

// text: func_80241CB0_A17ED0

// text: N(UnkNpcAIFunc3)

// text: func_80241E48_A18068

// text: func_802421D8_A183F8

// text: func_802422FC_A1851C

// text: func_802424E8_A18708

// text: func_80242618_A18838

// text: func_80242898_A18AB8

// text: func_802428F4_A18B14

s32 pad_002ADC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -1005.0f, -171.0f, 225.0f, 90.0f },
    { 1160.0f, 503.0f, 350.0f, 270.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 354.0f, 0.0f, 294.0f, 117.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19001E,
};

Script N(script_80242BD0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetMusicTrack(0, 43, 3, 8);
    }
});

s32 pad_002C24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242C30) = SCRIPT({
    group 27;
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
    await N(script_80244B80);
    GotoMap(D_80244DD0_A1AFF0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242D38) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244DD8_A1AFF8, 0);
    sleep 100;
});

Script N(script_80242D94) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        bind N(script_80242C30) to TriggerFlag_FLOOR_TOUCH 0;
    }
    bind N(script_ExitWalk_80242D38) to 0x80000 2;
});

Script N(script_80242E04) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    UseSettingsFrom(0, 0xFFFFFBAF, 0xFFFFFF55, 225);
    SetPanTarget(0, 0xFFFFFBAF, 0xFFFFFF55, 225);
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SI_VAR(2) = 360;
    MakeLerp(0xFFFFFE70, 0xFFFFFF55, 60, 4);
    loop {
        UpdateLerp();
        SetPlayerPos(0xFFFFFBAF, SI_VAR(0), 225);
        SetNpcPos(0xFFFFFFFC, 0xFFFFFBAF, SI_VAR(0), 215);
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
    if (SI_VAR(2) < 450) {
        InterpPlayerYaw(SI_VAR(2), 0);
        SetNpcRotation(0xFFFFFFFC, 0, SI_VAR(2), 0);
        SI_VAR(2) += SI_VAR(0);
        sleep 1;
        goto 10;
    }
    SI_VAR(2) = 90;
    SI_VAR(0) -= 5;
    if (SI_VAR(0) > 20) {
        goto 10;
    }
    SetNpcRotation(0xFFFFFFFC, 0, 0, 0);
    func_80240EF4_A17114(SI_MAP_VAR(10));
    SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    SetMusicTrack(0, 43, 3, 8);
    DisablePlayerInput(0);
    AwaitPlayerLeave(0xFFFFFBAF, 225, 40);
    bind N(script_80242C30) to TriggerFlag_FLOOR_TOUCH 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 28;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1991) = 1;
    MakeNpcs(0, N(npcGroupList_80244B44));
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn {
                await N(script_80242E04);
                spawn N(script_80242D94);
            }
        }
        == 1 {
            ModifyColliderFlags(0, 3, 0x7FFFFE00);
            SI_VAR(0) = N(script_80242D94);
            spawn EnterWalk;
        }
    }
    spawn N(script_802433B8);
    spawn N(script_80244480);
    spawn N(script_80242BD0);
});

s32 pad_00330C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80243310) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A16220();
                    return;
                }
            }
        }
    }
    func_80240124_A16344();
});

s32 N(byteTable_802433AC)[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802433B8) = SCRIPT({
    PlayEffect(117, 1, 0xFFFFFBAF, 0xFFFFFFAA, 230, 1, -1, 0, 0, 0, 0, 0, 0, 0);
    SI_MAP_VAR(10) = SI_VAR(15);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_80240F68_A17188(SI_MAP_VAR(10));
        }
        == 1 {
            func_80240EF4_A17114(SI_MAP_VAR(10));
        }
    }
    EnableTexPanning(1, 1);
    EnableTexPanning(4, 1);
    EnableTexPanning(5, 1);
    EnableTexPanning(6, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 80;
        SI_VAR(2) = 0xFFFFFF38;
        SI_VAR(3) = 0xFFFFFFCE;
        SI_VAR(4) = 100;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243310);
    }
    0x802C90FC(20, 0, -1);
    0x802C90FC(22, 0, -1);
    0x802C90FC(37, 0, -1);
    0x802C90FC(39, 0, -1);
    0x802C90FC(54, 0, -1);
    0x802C90FC(56, 0, -1);
    0x802C94A0(0, func_8024030C_A1652C, 0);
    SetModelFlags(20, 256, 1);
    SetModelFlags(22, 256, 1);
    SetModelFlags(37, 256, 1);
    SetModelFlags(39, 256, 1);
    SetModelFlags(54, 256, 1);
    SetModelFlags(56, 256, 1);
    SetModelFlags(16, 256, 1);
    SetModelFlags(17, 256, 1);
    SetModelFlags(18, 256, 1);
    SetModelFlags(33, 256, 1);
    SetModelFlags(34, 256, 1);
    SetModelFlags(35, 256, 1);
    SetModelFlags(50, 256, 1);
    SetModelFlags(51, 256, 1);
    SetModelFlags(52, 256, 1);
    0x802C9C70(0, 60, 1);
    0x802C94A0(1, func_80240434_A16654, 0);
    0x802C90FC(60, 1, -1);
    0x802C90FC(62, 1, -1);
    0x802C90FC(64, 1, -1);
    0x802C90FC(66, 1, -1);
    0x802C90FC(68, 1, -1);
    0x802C90FC(70, 1, -1);
    0x802C90FC(72, 1, -1);
    0x802C90FC(74, 1, -1);
    0x802C90FC(76, 1, -1);
    0x802C90FC(82, 1, -1);
    0x802C90FC(88, 1, -1);
    SetModelFlags(60, 128, 1);
    SetModelFlags(62, 128, 1);
    SetModelFlags(64, 128, 1);
    SetModelFlags(66, 128, 1);
    SetModelFlags(68, 128, 1);
    SetModelFlags(70, 128, 1);
    SetModelFlags(72, 128, 1);
    SetModelFlags(74, 128, 1);
    SetModelFlags(76, 128, 1);
    SetModelFlags(82, 128, 1);
    SetModelFlags(88, 128, 1);
    0x802C9C70(1, 60, 1);
    0x802C94A0(2, func_80240610_A16830, 0);
    0x802C90FC(78, 2, -1);
    0x802C90FC(90, 2, -1);
    SetModelFlags(78, 128, 1);
    SetModelFlags(90, 128, 1);
    0x802C9C70(2, 60, 1);
    0x802C94A0(3, func_80240904_A16B24, 0);
    0x802C90FC(84, 3, -1);
    0x802C90FC(92, 3, -1);
    SetModelFlags(84, 128, 1);
    SetModelFlags(92, 128, 1);
    0x802C9C70(3, 60, 1);
    0x802C94A0(4, func_80240BFC_A16E1C, 0);
    0x802C90FC(80, 4, -1);
    0x802C90FC(86, 4, -1);
    SetModelFlags(80, 128, 1);
    SetModelFlags(86, 128, 1);
    spawn {
        loop {
            MakeLerp(0xFFFFFFF3, 13, 20, 10);
            loop {
                UpdateLerp();
                TranslateModel(60, 0, SI_VAR(0), 0);
                TranslateModel(68, 0, SI_VAR(0), 0);
                TranslateModel(70, 0, SI_VAR(0), 0);
                TranslateModel(72, 0, SI_VAR(0), 0);
                TranslateModel(74, 0, SI_VAR(0), 0);
                TranslateModel(78, 0, SI_VAR(0), 0);
                TranslateModel(82, 0, SI_VAR(0), 0);
                TranslateModel(86, 0, SI_VAR(0), 0);
                TranslateModel(90, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            MakeLerp(13, 0xFFFFFFF3, 20, 10);
            loop {
                UpdateLerp();
                TranslateModel(60, 0, SI_VAR(0), 0);
                TranslateModel(68, 0, SI_VAR(0), 0);
                TranslateModel(70, 0, SI_VAR(0), 0);
                TranslateModel(72, 0, SI_VAR(0), 0);
                TranslateModel(74, 0, SI_VAR(0), 0);
                TranslateModel(78, 0, SI_VAR(0), 0);
                TranslateModel(82, 0, SI_VAR(0), 0);
                TranslateModel(86, 0, SI_VAR(0), 0);
                TranslateModel(90, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
    }
    spawn {
        loop {
            MakeLerp(13, 0xFFFFFFF3, 20, 10);
            loop {
                UpdateLerp();
                TranslateModel(62, 0, SI_VAR(0), 0);
                TranslateModel(64, 0, SI_VAR(0), 0);
                TranslateModel(66, 0, SI_VAR(0), 0);
                TranslateModel(76, 0, SI_VAR(0), 0);
                TranslateModel(80, 0, SI_VAR(0), 0);
                TranslateModel(84, 0, SI_VAR(0), 0);
                TranslateModel(88, 0, SI_VAR(0), 0);
                TranslateModel(92, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            MakeLerp(0xFFFFFFF3, 13, 20, 10);
            loop {
                UpdateLerp();
                TranslateModel(62, 0, SI_VAR(0), 0);
                TranslateModel(64, 0, SI_VAR(0), 0);
                TranslateModel(66, 0, SI_VAR(0), 0);
                TranslateModel(76, 0, SI_VAR(0), 0);
                TranslateModel(80, 0, SI_VAR(0), 0);
                TranslateModel(84, 0, SI_VAR(0), 0);
                TranslateModel(88, 0, SI_VAR(0), 0);
                TranslateModel(92, 0, SI_VAR(0), 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
    }
    spawn {
        loop {
            MakeLerp(0, 360, 50, 10);
            loop {
                UpdateLerp();
                RotateModel(60, SI_VAR(0), 0, 1, 0);
                RotateModel(68, SI_VAR(0), 0, 1, 0);
                RotateModel(70, SI_VAR(0), 0, 1, 0);
                RotateModel(72, SI_VAR(0), 0, 1, 0);
                RotateModel(74, SI_VAR(0), 0, 1, 0);
                RotateModel(78, SI_VAR(0), 0, 1, 0);
                RotateModel(82, SI_VAR(0), 0, 1, 0);
                RotateModel(86, SI_VAR(0), 0, 1, 0);
                RotateModel(90, SI_VAR(0), 0, 1, 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
    }
    loop {
        MakeLerp(360, 0, 44, 10);
        loop {
            UpdateLerp();
            RotateModel(62, SI_VAR(0), 0, 1, 0);
            RotateModel(64, SI_VAR(0), 0, 1, 0);
            RotateModel(66, SI_VAR(0), 0, 1, 0);
            RotateModel(76, SI_VAR(0), 0, 1, 0);
            RotateModel(80, SI_VAR(0), 0, 1, 0);
            RotateModel(84, SI_VAR(0), 0, 1, 0);
            RotateModel(88, SI_VAR(0), 0, 1, 0);
            RotateModel(92, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

s32 pad_00447C[] = {
    0x00000000,
};

Script N(script_80244480) = SCRIPT({

});

f32 N(floatTable_80244490)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_802444A8) = {
    .moveSpeed = 0.800000011920929,
    .moveTime = 0x64,
    .waitTime = 0,
    .alertRadius = 90.0,
    .unk_10 = 0.0,
    .unk_14 = 0x4,
    .chaseSpeed = 3.799999952316284,
    .unk_1C = 0xA,
    .unk_20 = 0x1,
    .chaseRadius = 100.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802444D8) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0);
    SetSelfVar(6, 0);
    SetSelfVar(1, 0);
    func_802428F4_A18B14(N(aISettings_802444A8));
});

NpcSettings N(npcSettings_80244548) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802444D8),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x18,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80244574)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244548),
        .pos = { -410.0, -15.0, 260.0 },
        .flags = 0x00000D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SHOOTING_STAR, 10 } },
        .movement = { 0xFFFFFE66, 0xFFFFFFF1, 0x00000104, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE66, 0xFFFFFFF1, 0x00000104, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00460101, 0x00460102, 0x00460103, 0x00460103, 0x00460101, 0x00460101, 0x00460107, 0x00460107, 0x00460104, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101,
        },
    },
};

StaticNpc N(npcGroup_80244764)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80244548),
        .pos = { 220.0, 200.0, -205.0 },
        .flags = 0x00000D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SHOOTING_STAR, 10 } },
        .movement = { 0x000000DC, 0x000000C8, 0xFFFFFF33, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000DC, 0x000000C8, 0xFFFFFF33, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00460101, 0x00460102, 0x00460103, 0x00460103, 0x00460101, 0x00460101, 0x00460107, 0x00460107, 0x00460104, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101,
        },
    },
};

StaticNpc N(npcGroup_80244954)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80244548),
        .pos = { -135.0, 370.0, 270.0 },
        .flags = 0x00000D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SHOOTING_STAR, 10 } },
        .movement = { 0xFFFFFF79, 0x00000172, 0x0000010E, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF79, 0x00000172, 0x0000010E, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00460101, 0x00460102, 0x00460103, 0x00460103, 0x00460101, 0x00460101, 0x00460107, 0x00460107, 0x00460104, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101, 0x00460101,
        },
    },
};

NpcGroupList N(npcGroupList_80244B44) = {
    NPC_GROUP(N(npcGroup_80244574), 0x04010002),
    NPC_GROUP(N(npcGroup_80244764), 0x04010002),
    NPC_GROUP(N(npcGroup_80244954), 0x04010002),
    {},
};

s32 pad_004B74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244B80) = SCRIPT({
    SetMusicTrack(0, 43, 2, 8);
    func_80240F68_A17188(SI_MAP_VAR(10));
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFBAF, 230, 0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    SetNpcJumpscale(0xFFFFFFFC, 0.5);
    NpcJump0(0xFFFFFFFC, 0xFFFFFBAF, 0xFFFFFF55, 220, 5);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 90;
        loop {
            SI_VAR(0) += 2;
            SI_VAR(1) += SI_VAR(0);
            InterpPlayerYaw(SI_VAR(1), 0);
            SetNpcRotation(0xFFFFFFFC, 0, SI_VAR(1), 0);
            sleep 1;
        }
    }
    sleep 60;
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(5) = SI_VAR(4);
    SI_VAR(5) += 0xFFFFFFF6;
    MakeLerp(SI_VAR(3), 0xFFFFFDA8, 40, 1);
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

s32 pad_004DC8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244DD0_A1AFF0

// rodata: D_80244DD8_A1AFF8

// rodata: D_80244DE0_A1B000

// rodata: D_80244DE8_A1B008

// rodata: D_80244DF0_A1B010

// rodata: D_80244DF8_A1B018

// rodata: D_80244E00_A1B020

// rodata: D_80244E08_A1B028

// rodata: D_80244E10_A1B030

// rodata: D_80244E18_A1B038

// rodata: D_80244E20_A1B040

// rodata: D_80244E28_A1B048

// rodata: D_80244E30_A1B050

// rodata: jtbl_80244E38_A1B058

s32 pad_004E74[] = {
    0x00000000,
};

// rodata: D_80244E78_A1B098

// rodata: jtbl_80244E80_A1B0A0

s32 pad_004ED4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

