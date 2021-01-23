#include "flo_16.h"

s32 pad_000034[3];
s32 pad_0000D4[3];
s32 pad_000E48[2];
s32 pad_00293C[1];
Script N(script_802429D0);
Script N(script_ExitWalk_80242A40);
Script N(script_ExitWalk_80242A9C);
Script N(script_80242AF8);
s32 N(lavaResetList_80242B40)[12];
Script N(main);
Script N(script_80242EA0);
Script N(script_8024314C);
Script N(script_8024346C);
s32 pad_0036FC[1];
s32 N(unk_80243700)[2];
s32 N(unk_80243708)[4];
s32 N(unk_80243718)[16];
s32 N(unk_80243758)[3];
Script N(script_80243764);
Script N(script_802438C8);
Script N(script_80243D48);
Script N(script_80243DB0);
Script N(script_80243E80);
Script N(script_MakeEntities);
s32 pad_004008[2];
f32 N(floatTable_80244010)[6];
Script N(script_NpcAI_80244058);
StaticNpc N(npcGroup_802440F4)[1];
StaticNpc N(npcGroup_802442E4)[1];
NpcGroupList N(npcGroupList_802444D4);
s32 pad_0044F8[2];
Script N(script_80244500);
Script N(script_802448FC);
Script N(script_80244DC8);
Script N(script_802451C4);
const char D_802453E0_CD7210[8]; // "flo_00"
const char D_802453E8_CD7218[8]; // "flo_17"
s32 pad_005444[1];
s32 pad_0054A4[3];

// text: func_80240000_CD1E30

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CD1E70

s32 pad_0000D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400E0_CD1F10

// text: func_802400FC_CD1F2C

// text: func_8024011C_CD1F4C

// text: func_80240148_CD1F78

// text: func_802401B4_CD1FE4

// text: func_80240200_CD2030

// text: func_802402AC_CD20DC

// text: func_802404FC_CD232C

// text: func_80240528_CD2358

// text: func_80240560_CD2390

// text: func_802405F0_CD2420

// text: func_80240624_CD2454

// text: func_80240688_CD24B8

// text: func_802406E0_CD2510

// text: func_80240C18_CD2A48

// text: func_80240D58_CD2B88

// text: func_80240DA0_CD2BD0

// text: func_80240DE8_CD2C18

// text: func_80240E18_CD2C48

s32 pad_000E48[] = {
    0x00000000, 0x00000000,
};

// text: func_80240E50_CD2C80

// text: func_80241000_CD2E30

// text: N(UnkNpcAIFunc1)

// text: func_802416E8_CD3518

// text: N(UnkNpcAIFunc2)

// text: func_80241AA4_CD38D4

// text: func_80241B10_CD3940

// text: N(UnkNpcAIFunc3)

// text: func_80241CA8_CD3AD8

// text: func_80242038_CD3E68

// text: func_8024215C_CD3F8C

// text: func_80242348_CD4178

// text: func_80242478_CD42A8

// text: func_802426F8_CD4528

// text: func_80242754_CD4584

s32 pad_00293C[] = {
    0x00000000,
};

// text: func_80242940_CD4770

EntryList N(entryList) = {
    { -720.0f, 0.0f, 0.0f, 90.0f },
    { 710.0f, 100.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190120,
};

Script N(script_802429D0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_ExitWalk_80242A40) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802453E0_CD7210, 4);
    sleep 100;
});

Script N(script_ExitWalk_80242A9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802453E8_CD7218, 0);
    sleep 100;
});

Script N(script_80242AF8) = SCRIPT({
    bind N(script_ExitWalk_80242A40) to 0x80000 0;
    bind N(script_ExitWalk_80242A9C) to 0x80000 4;
});

s32 N(lavaResetList_80242B40)[] = {
    0x0000000A, 0xC39B0000, 0x00000000, 0x00000000, 0x0000000B, 0x43988000, 0x42C80000, 0x00000000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802444D4));
    await N(script_MakeEntities);
    spawn N(script_8024346C);
    ModifyColliderFlags(3, 9, 2);
    spawn {
        ResetFromLava(N(lavaResetList_80242B40));
    }
    EnableTexPanning(16, 1);
    EnableTexPanning(17, 1);
    EnableTexPanning(18, 1);
    EnableTexPanning(20, 1);
    EnableTexPanning(22, 1);
    EnableTexPanning(24, 1);
    EnableTexPanning(19, 1);
    EnableTexPanning(21, 1);
    EnableTexPanning(23, 1);
    EnableTexPanning(25, 1);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
    0:
        SI_VAR(0) += 140;
        if (SI_VAR(0) > 0x10000) {
            SI_VAR(0) += 0xFFFF0000;
        }
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        SI_VAR(1) += 0xFFFFFF38;
        if (SI_VAR(1) < 0) {
            SI_VAR(1) += 0x10000;
        }
        SetTexPanOffset(2, 0, SI_VAR(1), 0);
        sleep 1;
        goto 0;
    }
    spawn N(script_802451C4);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80242AF8);
    spawn EnterWalk;
    await N(script_802429D0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CD1E30();
    }
});

Script N(script_80242EA0) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_8024314C) = SCRIPT({
    SI_VAR(9) = SI_VAR(6);
    SI_VAR(8) = SI_VAR(5);
    SI_VAR(7) = SI_VAR(4);
    SI_VAR(6) = SI_VAR(3);
    SI_VAR(5) = SI_VAR(2);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(3) = SI_VAR(0);
    EnableModel(SI_VAR(6), 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240040_CD1E70();
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    spawn {
        sleep 5;
        EnableModel(SI_VAR(6), 1);
    }
    if (SI_VAR(10) != 0) {
        spawn {
            sleep 5;
            SI_VAR(0) = SI_VAR(3);
            SI_VAR(1) = SI_VAR(4);
            SI_VAR(2) = SI_VAR(5);
            SI_VAR(1) += 10;
            SI_VAR(2) += 8;
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 15;
            SI_VAR(1) -= 10;
            MakeItemEntity(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2), 14, 0);
        }
    }
    spawn {
        sleep 10;
        PlaySoundAt(248, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    }
    MakeLerp(0, 180, 20, 2);
1:
    UpdateLerp();
    RotateModel(SI_VAR(8), SI_VAR(0), 1, 0, 0);
    RotateModel(SI_VAR(9), SI_VAR(0), 1, 0, 0);
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
    EnableModel(SI_VAR(7), 0);
});

Script N(script_8024346C) = SCRIPT({
    ModifyColliderFlags(3, 20, 6);
    SI_VAR(0) = 0xFFFFFD1C;
    SI_VAR(1) = 0xFFFFFF74;
    SI_VAR(2) = 0xFFFFFEFC;
    SI_VAR(3) = 0xFFFFFFC9;
    SI_VAR(4) = 100;
    spawn N(script_80242EA0);
    SI_VAR(0) = 250;
    SI_VAR(1) = 0xFFFFFF74;
    SI_VAR(2) = 725;
    SI_VAR(3) = 0xFFFFFFC9;
    SI_VAR(4) = 180;
    spawn N(script_80242EA0);
    GetModelCenter(65);
    SI_VAR(3) = 65;
    SI_VAR(4) = 66;
    SI_VAR(5) = 67;
    SI_VAR(6) = 68;
    SI_VAR(10) = 0;
    spawn N(script_8024314C);
    GetModelCenter(71);
    SI_VAR(3) = 71;
    SI_VAR(4) = 72;
    SI_VAR(5) = 73;
    SI_VAR(6) = 74;
    SI_VAR(10) = 174;
    spawn N(script_8024314C);
    GetModelCenter(79);
    SI_VAR(3) = 79;
    SI_VAR(4) = 80;
    SI_VAR(5) = 81;
    SI_VAR(6) = 82;
    SI_VAR(10) = 0;
    spawn N(script_8024314C);
    GetModelCenter(85);
    SI_VAR(3) = 85;
    SI_VAR(4) = 86;
    SI_VAR(5) = 87;
    SI_VAR(6) = 88;
    SI_VAR(10) = 0;
    spawn N(script_8024314C);
});

s32 pad_0036FC[] = {
    0x00000000,
};

s32 N(unk_80243700)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80243708)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80243718)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80243758)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80243764) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240624_CD2454(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240C18_CD2A48(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240C18_CD2A48(50, 50);
    }
    spawn {
        sleep 3;
        func_8024011C_CD1F4C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_80240688_CD24B8();
        func_80240D58_CD2B88();
        sleep 5;
        func_80240DA0_CD2BD0();
        sleep 5;
        func_80240D58_CD2B88();
    }
    sleep 3;
    func_802406E0_CD2510(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_802438C8) = SCRIPT({
    if (SI_SAVE_FLAG(1403) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240DE8_CD2C18();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_802400E0_CD1F10();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240560_CD2390(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240200_CD2030();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_802405F0_CD2420(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802400FC_CD1F2C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802402AC_CD20DC();
    if (SI_VAR(0) == -1) {
        func_802405F0_CD2420(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802400FC_CD1F2C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_802404FC_CD232C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_802405F0_CD2420(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802400FC_CD1F2C();
        return;
    }
    await N(script_80243764);
    func_80240148_CD1F78(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(1403) = 1;
    func_802405F0_CD2420(SI_VAR(9));
    func_80240528_CD2358();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_802400FC_CD1F2C();
});

Script N(script_80243D48) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80243DB0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    sleep 2;
    GetPlayerPos(SI_VAR(7), SI_VAR(8), SI_VAR(9));
    SI_VAR(10) = spawn N(script_80243D48);
    SetPlayerJumpscale(0.7001953125);
    PlayerJump(450, 180, 0xFFFFFF88, 30);
    SetPlayerActionState(0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80243E80) = SCRIPT({
    if (SI_AREA_FLAG(39) == 0) {
        func_80240E18_CD2C48();
        if (SI_VAR(0) == 0) {
            return;
        }
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        match SI_VAR(0) {
        620..660
            MakeItemEntity(348, 640, 145, 0xFFFFFF9C, 13, SI_SAVE_FLAG(1388));
            SI_AREA_FLAG(39) = 1;
        }
    }
});

Script N(script_MakeEntities) = SCRIPT({
    SI_AREA_FLAG(39) = 0;
    bind N(script_80243E80) to TriggerFlag_FLOOR_TOUCH 20;
    MakeEntity(0x802EA910, 350, 240, 0xFFFFFF9C, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(1403));
    AssignScript(N(script_802438C8));
    MakeEntity(0x802EAA30, 472, 100, 0xFFFFFF9C, 0, 0x80000000);
    AssignScript(N(script_80243DB0));
});

s32 pad_004008[] = {
    0x00000000, 0x00000000,
};

f32 N(floatTable_80244010)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_80244028) = {
    .moveSpeed = 1.0,
    .moveTime = 0x2D,
    .waitTime = 0x3C,
    .alertRadius = 100.0,
    .unk_10 = 0.0,
    .unk_14 = 0x3,
    .chaseSpeed = 3.5999999046325684,
    .unk_1C = 0xA,
    .unk_20 = 0x1,
    .chaseRadius = 120.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244058) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0);
    SetSelfVar(6, 0);
    SetSelfVar(1, 600);
    func_80242754_CD4584(N(aISettings_80244028));
});

NpcSettings N(npcSettings_802440C8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244058),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802440F4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802440C8),
        .pos = { 440.0, 145.0, 15.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_THUNDER_RAGE, 10 } },
        .movement = { 0x000001B8, 0x00000091, 0x0000000F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001E5, 0x00000091, 0x00000037, 0x000000E1, 0x0000005F, 0x00000001 },
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
    },
};

StaticNpc N(npcGroup_802442E4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802440C8),
        .pos = { 600.0, 145.0, 15.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_THUNDER_RAGE, 10 } },
        .movement = { 0x00000258, 0x00000091, 0x0000000F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001E5, 0x00000091, 0x00000037, 0x000000E1, 0x0000005F, 0x00000001 },
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
    },
};

NpcGroupList N(npcGroupList_802444D4) = {
    NPC_GROUP(N(npcGroup_802440F4), 0x18240006),
    NPC_GROUP(N(npcGroup_802442E4), 0x18200006),
    {},
};

s32 pad_0044F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80244500) = SCRIPT({
    func_80242940_CD4770();
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    if (SI_AREA_FLAG(41) == 0) {
        SI_VAR(5) = 0;
        SI_VAR(6) = 50;
        SI_VAR(7) = 0;
        SI_VAR(8) = 180;
        SI_AREA_FLAG(41) = 1;
    } else {
        SI_VAR(5) = 50;
        SI_VAR(6) = 0;
        SI_VAR(7) = 180;
        SI_VAR(8) = 0;
        SI_AREA_FLAG(41) = 0;
    }
    sleep 15;
    PlaySound(8269);
    spawn {
        ShakeCam(0, 0, 30, 0.80078125);
        ShakeCam(0, 0, 5, 0.2001953125);
    }
    MakeLerp(SI_VAR(5), SI_VAR(6), 30, 0);
    loop {
        UpdateLerp();
        TranslateModel(94, 0, SI_VAR(0), 0);
        TranslateGroup(97, 0, SI_VAR(0), 0);
        TranslateModel(108, 0, SI_VAR(0), 0);
        TranslateGroup(111, 0, SI_VAR(0), 0);
        RotateGroup(97, SI_VAR(7), 1, 0, 0);
        RotateGroup(111, SI_VAR(7), 1, 0, 0);
        UpdateColliderTransform(26);
        UpdateColliderTransform(27);
        UpdateColliderTransform(32);
        UpdateColliderTransform(33);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerInput(0);
    sleep 10;
    MakeLerp(SI_VAR(7), SI_VAR(8), 15, 0);
    loop {
        UpdateLerp();
        TranslateModel(94, 0, SI_VAR(6), 0);
        TranslateGroup(97, 0, SI_VAR(6), 0);
        TranslateModel(108, 0, SI_VAR(6), 0);
        TranslateGroup(111, 0, SI_VAR(6), 0);
        RotateGroup(97, SI_VAR(0), 1, 0, 0);
        RotateGroup(111, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802448FC) = SCRIPT({
    func_80242940_CD4770();
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    if (SI_AREA_FLAG(42) == 0) {
        SI_VAR(5) = 0;
        SI_VAR(6) = 50;
        SI_VAR(7) = 0;
        SI_VAR(8) = 180;
        SI_AREA_FLAG(42) = 1;
    } else {
        SI_VAR(5) = 50;
        SI_VAR(6) = 0;
        SI_VAR(7) = 180;
        SI_VAR(8) = 0;
        SI_AREA_FLAG(42) = 0;
    }
    sleep 15;
    PlaySound(8269);
    spawn {
        ShakeCam(0, 0, 30, 0.80078125);
        ShakeCam(0, 0, 5, 0.2001953125);
    }
    MakeLerp(SI_VAR(5), SI_VAR(6), 30, 0);
    loop {
        UpdateLerp();
        TranslateModel(101, 0, SI_VAR(0), 0);
        TranslateGroup(104, 0, SI_VAR(0), 0);
        TranslateModel(115, 0, SI_VAR(0), 0);
        TranslateGroup(118, 0, SI_VAR(0), 0);
        TranslateModel(129, 0, SI_VAR(0), 0);
        TranslateGroup(132, 0, SI_VAR(0), 0);
        RotateGroup(104, SI_VAR(7), 1, 0, 0);
        RotateGroup(118, SI_VAR(7), 1, 0, 0);
        RotateGroup(132, SI_VAR(7), 1, 0, 0);
        UpdateColliderTransform(29);
        UpdateColliderTransform(30);
        UpdateColliderTransform(35);
        UpdateColliderTransform(36);
        UpdateColliderTransform(41);
        UpdateColliderTransform(42);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerInput(0);
    sleep 10;
    MakeLerp(SI_VAR(7), SI_VAR(8), 15, 0);
    loop {
        UpdateLerp();
        TranslateModel(101, 0, SI_VAR(6), 0);
        TranslateGroup(104, 0, SI_VAR(6), 0);
        TranslateModel(115, 0, SI_VAR(6), 0);
        TranslateGroup(118, 0, SI_VAR(6), 0);
        TranslateModel(129, 0, SI_VAR(6), 0);
        TranslateGroup(132, 0, SI_VAR(6), 0);
        RotateGroup(104, SI_VAR(0), 1, 0, 0);
        RotateGroup(118, SI_VAR(0), 1, 0, 0);
        RotateGroup(132, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80244DC8) = SCRIPT({
    func_80242940_CD4770();
    if (SI_VAR(0) == 0) {
        return;
    }
    DisablePlayerInput(1);
    if (SI_AREA_FLAG(43) == 0) {
        SI_VAR(5) = 0;
        SI_VAR(6) = 0xFFFFFFCE;
        SI_VAR(7) = 0;
        SI_VAR(8) = 180;
        SI_AREA_FLAG(43) = 1;
    } else {
        SI_VAR(5) = 0xFFFFFFCE;
        SI_VAR(6) = 0;
        SI_VAR(7) = 180;
        SI_VAR(8) = 0;
        SI_AREA_FLAG(43) = 0;
    }
    sleep 15;
    PlaySound(8269);
    spawn {
        ShakeCam(0, 0, 30, 0.80078125);
        ShakeCam(0, 0, 5, 0.2001953125);
    }
    MakeLerp(SI_VAR(5), SI_VAR(6), 30, 0);
    loop {
        UpdateLerp();
        TranslateModel(122, 0, SI_VAR(0), 0);
        TranslateGroup(125, 0, SI_VAR(0), 0);
        TranslateModel(136, 0, SI_VAR(0), 0);
        TranslateGroup(139, 0, SI_VAR(0), 0);
        RotateGroup(125, SI_VAR(7), 1, 0, 0);
        RotateGroup(139, SI_VAR(7), 1, 0, 0);
        UpdateColliderTransform(38);
        UpdateColliderTransform(39);
        UpdateColliderTransform(44);
        UpdateColliderTransform(45);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerInput(0);
    sleep 10;
    MakeLerp(SI_VAR(7), SI_VAR(8), 15, 0);
    loop {
        UpdateLerp();
        TranslateModel(122, 0, SI_VAR(6), 0);
        TranslateGroup(125, 0, SI_VAR(6), 0);
        TranslateModel(136, 0, SI_VAR(6), 0);
        TranslateGroup(139, 0, SI_VAR(6), 0);
        RotateGroup(125, SI_VAR(0), 1, 0, 0);
        RotateGroup(139, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802451C4) = SCRIPT({
    SI_AREA_FLAG(41) = 0;
    SI_AREA_FLAG(42) = 0;
    SI_AREA_FLAG(43) = 0;
    ParentColliderToModel(26, 94);
    ParentColliderToModel(27, 94);
    ParentColliderToModel(29, 101);
    ParentColliderToModel(30, 101);
    ParentColliderToModel(32, 108);
    ParentColliderToModel(33, 108);
    ParentColliderToModel(35, 115);
    ParentColliderToModel(36, 115);
    ParentColliderToModel(38, 122);
    ParentColliderToModel(39, 122);
    ParentColliderToModel(41, 129);
    ParentColliderToModel(42, 129);
    ParentColliderToModel(44, 136);
    ParentColliderToModel(45, 136);
    bind N(script_80244500) to TriggerFlag_FLOOR_TOUCH 26;
    bind N(script_802448FC) to TriggerFlag_FLOOR_TOUCH 29;
    bind N(script_80244500) to TriggerFlag_FLOOR_TOUCH 32;
    bind N(script_802448FC) to TriggerFlag_FLOOR_TOUCH 35;
    bind N(script_80244DC8) to TriggerFlag_FLOOR_TOUCH 38;
    bind N(script_802448FC) to TriggerFlag_FLOOR_TOUCH 41;
    bind N(script_80244DC8) to TriggerFlag_FLOOR_TOUCH 44;
});

// rodata: D_802453E0_CD7210

// rodata: D_802453E8_CD7218

// rodata: D_802453F0_CD7220

// rodata: D_802453F8_CD7228

// rodata: D_80245400_CD7230

// rodata: jtbl_80245408_CD7238

s32 pad_005444[] = {
    0x00000000,
};

// rodata: D_80245448_CD7278

// rodata: jtbl_80245450_CD7280

s32 pad_0054A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

