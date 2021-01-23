#include "iwa_04.h"

s32 unk_missing_80241060[32];
Script N(script_80241140);
s32 pad_00116C[1];
Script N(script_ExitWalk_80241170);
Script N(script_ExitWalk_802411CC);
Script N(script_80241228);
Script N(main);
Script N(script_80241420);
Script N(script_80241484);
Script N(script_MakeEntities);
s32 pad_0016B8[2];
Script N(script_NpcAI_802416F0);
Script N(script_80241740);
Script N(script_80241788);
Script N(script_80241870);
Script N(script_NpcAI_802418EC);
Script N(script_8024257C);
StaticNpc N(npcGroup_80242770)[1];
StaticNpc N(npcGroup_80242960)[1];
NpcGroupList N(npcGroupList_80242B50);
s32 pad_002B74[3];
const char D_80242B80_91E460[8]; // "iwa_02"
const char D_80242B88_91E468[8]; // "sbk_99"
s32 pad_002C8C[1];

// text: func_80240000_91B8E0

// text: func_80240080_91B960

// text: func_802401E0_91BAC0

// text: func_80240254_91BB34

// text: func_80240384_91BC64

// text: func_80240420_91BD00

// text: func_802404A8_91BD88

// text: func_80240550_91BE30

// text: func_802406C4_91BFA4

// text: func_80240714_91BFF4

// text: func_802408B4_91C194

// text: func_80240A04_91C2E4

// text: func_80240AB0_91C390

// text: func_80240BE8_91C4C8

// text: func_80240C64_91C544

// text: N(UnkDurationCheck)

// text: func_80240D10_91C5F0

s32 unk_missing_80241060[] = {
    0x3C013F80, 0x44810000, 0x00000000, 0x3C01800B, 0xE4202218, 0x03E00008, 0x0000102D, 0x27BDFFE0,
    0xAFB00010, 0x0080802D, 0xAFBF0018, 0xAFB10014, 0x8E11000C, 0x0C0B36B0, 0x2405FFFF, 0x0200202D,
    0x8E250000, 0x0C0B1EAF, 0x0040802D, 0x44820000, 0x00000000, 0x46800020, 0xE6000034, 0x8FBF0018,
    0x8FB10014, 0x8FB00010, 0x24020002, 0x03E00008, 0x27BD0020, 0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -630.0f, 0.0f, -49.0f, 90.0f },
    { 770.0f, -250.0f, -40.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19005E,
};

Script N(script_80241140) = SCRIPT({
    SetMusicTrack(0, 22, 0, 8);
});

s32 pad_00116C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241170) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242B80_91E460, 2);
    sleep 100;
});

Script N(script_ExitWalk_802411CC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242B88_91E468, 0);
    sleep 100;
});

Script N(script_80241228) = SCRIPT({
    bind N(script_ExitWalk_80241170) to 0x80000 3;
    bind N(script_ExitWalk_802411CC) to 0x80000 19;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 8;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80242B50));
    await N(script_MakeEntities);
    spawn N(script_80241140);
    ParentColliderToModel(28, 10);
    ParentColliderToModel(30, 12);
    ParentColliderToModel(32, 14);
    ParentColliderToModel(34, 16);
    ParentColliderToModel(36, 18);
    ParentColliderToModel(38, 20);
    ParentColliderToModel(40, 22);
    ParentColliderToModel(42, 24);
    ParentColliderToModel(44, 26);
    ParentColliderToModel(46, 28);
    SI_VAR(0) = N(script_80241228);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_80241420) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80241484) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    sleep 1;
    SI_VAR(10) = spawn N(script_80241420);
    if (SI_MAP_VAR(9) == 0) {
        SetPlayerJumpscale(1.400390625);
        PlayerJump(0xFFFFFDD0, 0xFFFFFF06, 190, 15);
    } else {
        SetPlayerJumpscale(0.7001953125);
        PlayerJump(0xFFFFFDD0, 0, 90, 40);
    }
    kill SI_VAR(10);
    SetPlayerActionState(0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    spawn {
        func_80240000_91B8E0();
    }
    MakeEntity(0x802EAA30, 0xFFFFFDCF, 0xFFFFFF06, 121, 0, 0x80000000);
    AssignScript(N(script_80241484));
    MakeEntity(0x802BCD9C, 0xFFFFFDFF, 0, 0xFFFFFF9F, 0, 90, 0x80000000);
    MakeEntity(0x802BCD9C, 600, 0, 200, 0, 270, 0x80000000);
    MakeEntity(0x802BCD9C, 336, 0xFFFFFF74, 203, 0, 70, 0x80000000);
    MakeEntity(0x802BCD9C, 730, 0xFFFFFF06, 0xFFFFFFA1, 0, 90, 0x80000000);
    MakeItemEntity(64, 0xFFFFFEED, 0xFFFFFF06, 150, 17, SI_SAVE_FLAG(707));
});

s32 pad_0016B8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_802416C0) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 7.0f,
    .unk_1C = 0x3C,
    .unk_20 = 0x5,
    .chaseRadius = 100.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802416F0) = SCRIPT({
    func_80240D10_91C5F0(N(aISettings_802416C0), 16);
});

NpcSettings N(npcSettings_80241714) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802416F0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

Script N(script_80241740) = SCRIPT({
    loop {
        PlaySoundAtNpc(-1, 8431, 0);
        sleep 16;
    }
});

Script N(script_80241788) = SCRIPT({
    loop {
        loop {
            GetNpcAnimation(-1, SI_VAR(0));
            if (SI_VAR(0) == 0x670002) {
                break;
            }
            sleep 1;
        }
        SI_VAR(10) = spawn N(script_80241740);
        loop {
            GetNpcAnimation(-1, SI_VAR(0));
            if (SI_VAR(0) != 0x670002) {
                break;
            }
            sleep 1;
        }
        kill SI_VAR(10);
    }
});

Script N(script_80241870) = SCRIPT({
    if (SI_SAVE_FLAG(708) == 1) {
        RemoveNpc(-1);
    } else {
        spawn N(script_80241788);
        SetNpcPos(-1, 10, 96, 0xFFFFFEA5);
        EnableNpcShadow(-1, 0);
    }
});

Script N(script_NpcAI_802418EC) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcPos(1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        if (SI_VAR(0) < SI_VAR(3)) {
            InterpNpcYaw(1, 270, 0);
        } else {
            InterpNpcYaw(1, 90, 0);
        }
        if (SI_VAR(0) >= 400) {
            if (SI_VAR(0) < 450) {
                if (SI_VAR(2) < 100) {
                    break;
                }
            }
        }
        sleep 1;
    }
    SetMusicTrack(0, 91, 0, 8);
    DisablePlayerInput(1);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        0x802D2B6C();
        sleep 5;
    }
    NpcFacePlayer(-1, 0);
    ShowMessageAtScreenPos(0xD0030, 160, 40);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 15;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetAngleToPlayer(-1, SI_VAR(10));
    sleep 4;
    UseSettingsFrom(0, 430, 0, 0xFFFFFFE7);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    SetPanTarget(0, 30, 180, 0xFFFFFDA8);
    SetCamDistance(0, 100.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(-1, 0x670005, 0x670005, 5, 0xD0031);
    SetNpcAnimation(-1, 0x670002);
    GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(5) = SI_VAR(3);
    SI_VAR(5) += 150;
    MakeLerp(SI_VAR(3), SI_VAR(5), 15, 0);
    loop {
        UpdateLerp();
        SetNpcPos(-1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 5;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetPlayerPos(430, 0, 0xFFFFFFE7);
    0x802CF56C(2);
    SetNpcPos(-1, 538, 200, 0xFFFFFFE7);
    EnableNpcShadow(-1, 1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPosA(0, 0, 0);
    SetCamPosB(0, 100, 0xFFFFFF9C);
    SetCamDistance(0, 600);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 40;
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 500);
        SetCamSpeed(0, 1.0);
        PanToTarget(0, 0.5, 1);
        WaitForCam(0, 1.0);
        0x802CF56C(2);
    }
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0x1002A);
    NpcFacePlayer(-1, 0);
    GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(5) = SI_VAR(3);
    SI_VAR(5) -= 150;
    MakeLerp(SI_VAR(3), SI_VAR(5), 15, 0);
    loop {
        UpdateLerp();
        SetNpcPos(-1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 5;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetNpcAnimation(1, 0x670001);
    WaitForCam(0, 1.0);
    sleep 30;
    SetNpcAnimation(1, 0x670007);
    sleep 30;
    SetNpcAnimation(1, 0x670008);
    sleep 30;
    SetNpcAnimation(1, 0x670009);
    sleep 30;
    SetNpcAnimation(1, 0x67000A);
    sleep 30;
    SetNpcAnimation(1, 0x670001);
    sleep 30;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), 0, SI_VAR(2));
    SI_VAR(1) += 20;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 275);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    SpeakToPlayer(-1, 0x670003, 0x670001, 0, 0xD0032);
    AdjustCam(0, 90.0, 50, 350, 15.0, -12.0);
    ShowChoice(0x1E0017);
    EndSpeech(-1, 0x670003, 0x670001, 0);
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(10) {
        == 0 {
            SI_VAR(11) = 0xD0033;
            SI_VAR(12) = 0x670004;
        }
        == 1 {
            SI_VAR(11) = 0xD0034;
            SI_VAR(12) = 0x670003;
        }
        == 2 {
            SI_VAR(11) = 0xD0035;
            SI_VAR(12) = 0x670004;
        }
    }
    sleep 10;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), 0, SI_VAR(2));
    SI_VAR(1) += 20;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 275);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(-1, SI_VAR(12), 0x670001, 0, SI_VAR(11));
    if (SI_VAR(10) == 1) {
        spawn N(script_80241140);
        SetNpcAnimation(-1, 0x670006);
        sleep 30;
        SetNpcAnimation(-1, 0x670002);
        PanToTarget(0, 0, 0);
        SetCamSpeed(0, 4.0);
        GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = SI_VAR(3);
        SI_VAR(5) += 150;
        MakeLerp(SI_VAR(3), SI_VAR(5), 15, 0);
        loop {
            UpdateLerp();
            SetNpcPos(-1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
            sleep 5;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcPos(-1, 10, 96, 0xFFFFFEA5);
        EnableNpcShadow(-1, 0);
        SetNpcAnimation(-1, 0x670005);
        WaitForCam(0, 1.0);
        SetCamSpeed(0, 1.0);
        SetPlayerAnimation(0x10002);
        DisablePlayerInput(0);
    } else {
        PanToTarget(0, 0, 0);
        SetCamSpeed(0, 4.0);
        sleep 5;
        DisablePlayerInput(0);
        StartBossBattle(3);
    }
});

Script N(script_8024257C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(708) = 1;
            spawn N(script_80241140);
            SetNpcPos(-1, 530, 15, 0xFFFFFFEC);
            SetNpcAnimation(-1, 0x67000B);
            AdjustCam(0, 90.0, 50, 350, 15.0, -12.0);
            sleep 10;
            SpeakToPlayer(-1, -1, -1, 0, 0xD0036);
            spawn {
                GetNpcYaw(-1, SI_VAR(0));
                loop 55 {
                    SI_VAR(0) += 30;
                    SetNpcRotation(-1, 0, SI_VAR(0), 0);
                    sleep 1;
                }
            }
            SetNpcJumpscale(-1, 0.75);
            NpcJump1(-1, 400, 0xFFFFFF38, 0xFFFFFED4, 60);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            ResetCam(0, 2.5);
        }
        == 1 {}
        == 2 {
        }
    }
});

NpcSettings N(npcSettings_80242744) = {
    .unk_00 = { 0, 0x67, 0, 0x5 },
    .height = 0x20,
    .radius = 0x20,
    .otherAI = &N(script_80241870),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802418EC),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_8024257C),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80242770)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241714),
        .pos = { -412.0, -250.0, 143.0 },
        .flags = 0x00000900,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFE64, 0xFFFFFF06, 0x0000008F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE9D, 0xFFFFFF06, 0x00000069, 0x000000AF, 0x000000C3, 0x00000001 },
        .animations = {
            0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
        },
    },
};

StaticNpc N(npcGroup_80242960)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242744),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00A40D04,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00670001, 0x00670001, 0x00670001, 0x00670001, 0x00670001, 0x00670001, 0x0067000B, 0x0067000B, 0x00670001, 0x00670001, 0x00670001, 0x00670001, 0x00670001, 0x00670001, 0x00670001, 0x00670001,
        },
    },
};

NpcGroupList N(npcGroupList_80242B50) = {
    NPC_GROUP(N(npcGroup_80242770), 0x09010002),
    NPC_GROUP(N(npcGroup_80242960), 0x090C0003),
    {},
};

s32 pad_002B74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242B80_91E460

// rodata: D_80242B88_91E468

// rodata: D_80242B90_91E470

// rodata: D_80242B98_91E478

// rodata: D_80242BA0_91E480

// rodata: D_80242BA8_91E488

// rodata: D_80242BB0_91E490

// rodata: jtbl_80242BB8_91E498

s32 pad_002C8C[] = {
    0x00000000,
};
