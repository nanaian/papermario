#include "flo_13.h"

s32 pad_000034[3];
s32 pad_0035CC[1];
s32 pad_003664[3];
Script N(script_802436D0);
Script N(script_802438B0);
Script N(script_802438CC);
Script N(script_802438F8);
s32 pad_003944[3];
Script N(script_80243950);
Script N(script_MakeEntities);
s32 pad_003A3C[1];
Script N(script_80243A40);
Script N(script_ExitWalk_80243CEC);
Script N(script_ExitWalk_80243D48);
Script N(script_80243DA4);
Script N(main);
f32 N(floatTable_8024412C)[6];
Script N(script_NpcAI_80244174);
Script N(script_NpcAI_80244240);
Script N(script_802442B0);
s32 N(vectorList_802443A8)[15];
s32 N(vectorList_802443E4)[15];
s32 N(vectorList_80244420)[15];
Script N(script_8024445C);
Script N(script_80244560);
Script N(script_802446AC);
Script N(script_80244888);
Script N(script_Idle_80244BF8);
Script N(script_80245014);
Script N(script_80245444);
Script N(script_Defeat_80246038);
Script N(script_Interact_802461C0);
Script N(script_Init_80246280);
Script N(script_Init_802462D0);
Script N(script_Init_80246370);
Script N(script_Init_802463B0);
Script N(script_Init_802463E8);
StaticNpc N(npcGroup_80246434)[1];
StaticNpc N(npcGroup_80246624)[1];
StaticNpc N(npcGroup_80246814)[1];
StaticNpc N(npcGroup_80246A04)[1];
StaticNpc N(npcGroup_80246BF4)[1];
StaticNpc N(npcGroup_80246DE4)[1];
StaticNpc N(npcGroup_80246FD4)[1];
StaticNpc N(npcGroup_802471C4)[1];
StaticNpc N(npcGroup_802473B4)[1];
StaticNpc N(npcGroup_802475A4)[1];
StaticNpc N(npcGroup_80247794)[1];
NpcGroupList N(npcGroupList_80247984);
s32 pad_007A14[3];
const char D_80247A20_CCB230[8]; // "flo_14"
const char D_80247A28_CCB238[8]; // "flo_15"
s32 pad_007A84[1];
s32 pad_007AE4[1];
const char D_80247AF0_CCB300[14]; // "party_pokopi"

// text: func_80240000_CC3810

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CC3850

// text: func_802401C4_CC39D4

// text: func_80240374_CC3B84

// text: N(UnkNpcAIFunc1)

// text: func_80240A5C_CC426C

// text: N(UnkNpcAIFunc2)

// text: func_80240E18_CC4628

// text: func_80240E84_CC4694

// text: N(UnkNpcAIFunc3)

// text: func_8024101C_CC482C

// text: func_802413AC_CC4BBC

// text: func_802414D0_CC4CE0

// text: func_802416BC_CC4ECC

// text: func_80241704_CC4F14

// text: func_80241B68_CC5378

// text: func_80241DB8_CC55C8

// text: func_80242298_CC5AA8

// text: func_80242314_CC5B24

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_8024262C_CC5E3C

// text: func_80242A6C_CC627C

// text: func_80243368_CC6B78

// text: func_802433C0_CC6BD0

// text: func_802434D4_CC6CE4

s32 pad_0035CC[] = {
    0x00000000,
};

// text: func_802435D0_CC6DE0

s32 pad_003664[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 570.0f, 0.0f, 0.0f, 270.0f },
    { -570.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19011D,
};

Script N(script_802436D0) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFFE0C) {
        goto 10;
    }
0:
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 0xFFFFFE0C) {
            break;
        }
        sleep 1;
    }
10:
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 52, 0, 8);
        }
        else {
            SetMusicTrack(0, 53, 0, 8);
        }
    }
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFE0C) {
            break;
        }
        sleep 1;
    }
    goto 0;
});

Script N(script_802438B0) = SCRIPT({
    spawn N(script_802436D0);
});

Script N(script_802438CC) = SCRIPT({
    SetMusicTrack(0, 130, 0, 8);
});

Script N(script_802438F8) = SCRIPT({
    FadeOutMusic(0, 500);
    sleep 15;
    SetMusicTrack(0, 48, 0, 8);
});

s32 pad_003944[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243950) = SCRIPT({
    ModifyColliderFlags(0, 14, 0x7FFFFE00);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(294, 0xFFFFFFC3, 60, 0xFFFFFFAB, 17, SI_SAVE_FLAG(1385));
    MakeItemEntity(131, 128, 0, 157, 17, SI_SAVE_FLAG(1386));
    if (SI_SAVE_FLAG(1385) == 0) {
        MakeEntity(0x802BCF00, 0xFFFFFF60, 160, 0xFFFFFFA6, 0, 0x80000000);
        AssignScript(N(script_80243950));
    } else {
        ModifyColliderFlags(0, 14, 0x7FFFFE00);
    }
});

s32 pad_003A3C[] = {
    0x00000000,
};

Script N(script_80243A40) = SCRIPT({
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

Script N(script_ExitWalk_80243CEC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80247A20_CCB230, 1);
    sleep 100;
});

Script N(script_ExitWalk_80243D48) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80247A28_CCB238, 0);
    sleep 100;
});

Script N(script_80243DA4) = SCRIPT({
    bind N(script_ExitWalk_80243D48) to 0x80000 0;
    bind N(script_ExitWalk_80243CEC) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80247984));
    await N(script_MakeEntities);
    ModifyColliderFlags(3, 13, 6);
    SI_VAR(0) = 274;
    SI_VAR(1) = 0xFFFFFF77;
    SI_VAR(2) = 583;
    SI_VAR(3) = 0xFFFFFFC0;
    SI_VAR(4) = 0;
    spawn N(script_80243A40);
    SI_VAR(0) = 433;
    SI_VAR(1) = 108;
    SI_VAR(2) = 580;
    SI_VAR(3) = 169;
    SI_VAR(4) = 0;
    spawn N(script_80243A40);
    SI_VAR(0) = 0xFFFFFE34;
    SI_VAR(1) = 90;
    SI_VAR(2) = 0xFFFFFF83;
    SI_VAR(3) = 130;
    SI_VAR(4) = 0;
    spawn N(script_80243A40);
    SI_VAR(0) = 0xFFFFFE5C;
    SI_VAR(1) = 0xFFFFFF7E;
    SI_VAR(2) = 0xFFFFFEFC;
    SI_VAR(3) = 0xFFFFFFA6;
    SI_VAR(4) = 0;
    spawn N(script_80243A40);
    SI_VAR(0) = 0xFFFFFF24;
    SI_VAR(1) = 0xFFFFFF77;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0xFFFFFFCE;
    SI_VAR(4) = 160;
    spawn N(script_80243A40);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80243DA4);
    spawn EnterWalk;
    await N(script_802438B0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CC3810();
    }
});

NpcSettings N(npcSettings_80244100) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x14,
    .unk_2A = 0,
};

f32 N(floatTable_8024412C)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80244144) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 60.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 80.0f,
    .unk_28 = 70.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244174) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 400);
    func_80241DB8_CC55C8(N(aISettings_80244144));
});

NpcSettings N(npcSettings_802441E4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244174),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x14,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80244210) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 60.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 6.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_80244240) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 18);
    SetSelfVar(5, 3);
    SetSelfVar(7, 4);
    func_80242A6C_CC627C(N(aISettings_80244210));
});

Script N(script_802442B0) = SCRIPT({
    SetNpcRotation(-1, 0, 0, 0);
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(10, 100);
            DoNpcDefeat();
        }
        == 2 {
            0x80045900(0);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_8024437C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x15,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244240),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = &N(script_802442B0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

s32 N(vectorList_802443A8)[] = {
    0xC37A0000, 0x43020000, 0x42C80000, 0xC3160000, 0x42B40000, 0x428C0000, 0x42480000, 0x428C0000,
    0x41200000, 0x43480000, 0x420C0000, 0x41F00000, 0x41F00000, 0x41200000, 0x42340000,
};

s32 N(vectorList_802443E4)[] = {
    0xC38E8000, 0x43020000, 0x42340000, 0xC3390000, 0x42B40000, 0x41C80000, 0x41700000, 0x428C0000,
    0x41200000, 0x43250000, 0x420C0000, 0x41F00000, 0xC0A00000, 0x41200000, 0x42340000,
};

s32 N(vectorList_80244420)[] = {
    0x41200000, 0x00000000, 0x42340000, 0xC2B40000, 0x41A00000, 0x42340000, 0xC33E0000, 0x42700000,
    0x42340000, 0xC3910000, 0x430C0000, 0x42340000, 0xC3C30000, 0x43960000, 0x42340000,
};

Script N(script_8024445C) = SCRIPT({
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
0:
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    func_80243368_CC6B78();
    InterpNpcYaw(0, SI_VAR(10), 0);
    SI_VAR(0) = SI_VAR(3);
    SI_VAR(1) = SI_VAR(4);
    SI_VAR(2) = SI_VAR(5);
    GetAngleBetweenNPCs(0xFFFFFFFC, 0, SI_VAR(10));
    InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
    PlayerFaceNpc(0, 0);
    sleep 1;
    goto 0;
});

Script N(script_80244560) = SCRIPT({
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
0:
    GetNpcPos(1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    func_80243368_CC6B78();
    InterpNpcYaw(1, SI_VAR(10), 0);
    SI_VAR(0) = SI_VAR(3);
    SI_VAR(1) = SI_VAR(4);
    SI_VAR(2) = SI_VAR(5);
    GetAngleBetweenNPCs(0xFFFFFFFC, 1, SI_VAR(10));
    InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
    if (SI_SAVE_VAR(0) < 51) {
        GetAngleBetweenNPCs(0, 1, SI_VAR(11));
        InterpNpcYaw(0, SI_VAR(11), 0);
    }
    PlayerFaceNpc(1, 0);
    sleep 1;
    goto 0;
});

Script N(script_802446AC) = SCRIPT({
    SI_MAP_VAR(10) = 0;
    loop {
        loop 2 {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 2;
        }
        sleep 1;
        loop 2 {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += -1;
            SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += -1;
            SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 2;
        }
        sleep 1;
        if (SI_MAP_VAR(10) == 1) {
            SI_MAP_VAR(10) = 2;
            break;
        }
    }
});

Script N(script_80244888) = SCRIPT({
    spawn N(script_802446AC);
    SetNpcAnimation(1, 0xCC000C);
    GetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(1) += 0xFFFFFFFB;
    SI_VAR(2) += 30;
    SI_VAR(3) += 2;
    SetNpcYaw(2, 270);
    SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    spawn {
        sleep 5;
        SetPlayerAnimation(0x1002B);
    }
    ContinueSpeech(1, -1, -1, 512, 0x1100A8);
    spawn {
        sleep 15;
        EndSpeech(1, -1, -1, 512);
    }
    SI_MAP_VAR(10) = 1;
    loop {
        sleep 1;
        if (SI_MAP_VAR(10) == 2) {
            break;
        }
    }
    SetNpcAnimation(1, 0xCC000D);
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(1) += 5;
    SI_VAR(2) += 20;
    SetNpcJumpscale(2, 0.0);
    NpcJump0(2, SI_VAR(1), SI_VAR(2), SI_VAR(3), 7);
    SI_VAR(1) += 0xFFFFFF9C;
    SI_VAR(2) += 10;
    spawn {
        SetNpcJumpscale(2, 1.5);
        NpcJump0(2, SI_VAR(1), SI_VAR(2), SI_VAR(3), 15);
        SetNpcPos(2, 0, 0xFFFFFC18, 0);
    }
    spawn {
        ShakeCam(0, 0, 10, 2.0);
    }
    PlaySoundAtPlayer(225, 0);
    SetPlayerAnimation(0x10017);
    SI_VAR(0) = 90;
    loop 20 {
        SI_VAR(0) += 144;
        if (SI_VAR(0) > 359) {
            SI_VAR(0) -= 360;
        }
        InterpPlayerYaw(SI_VAR(0), 1);
        sleep 1;
    }
    SetPlayerAnimation(0x10000);
    SetNpcAnimation(1, 0xCC0001);
});

Script N(script_Idle_80244BF8) = SCRIPT({
    if (SI_SAVE_VAR(0) != 50) {
        return;
    }
    AwaitPlayerApproach(200, 20, 275);
    DisablePlayerInput(1);
    SetNpcPos(0, 0xFFFFFF06, 120, 45);
    SetMusicTrack(0, 125, 0, 8);
    ShowMessageAtScreenPos(0x1100A0, 160, 40);
    0x802D2B6C();
    SetPlayerAnimation(0x1002A);
    sleep 20;
    InterpPlayerYaw(270, 1);
    sleep 20;
    InterpPlayerYaw(90, 1);
    sleep 20;
    SetPlayerAnimation(0x10000);
    0x802CF56C(2);
    SetNpcAnimation(0, 0x80007);
    spawn {
        func_802434D4_CC6CE4();
    }
    SI_VAR(9) = spawn N(script_8024445C);
    LoadPath(80, N(vectorList_802443A8), 5, 0);
0:
    GetNextPathPos();
    SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    kill SI_VAR(9);
    SetNpcAnimation(0, 0x80001);
    PlayerFaceNpc(0, 0);
    sleep 15;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 200);
    SetCamPitch(0, 18.0, -8.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        PlayerMoveTo(0xFFFFFFB5, 65, 10);
        PlayerFaceNpc(0, 0);
    }
    SpeakToPlayer(0, 0x80009, 0x80001, 0, 0x1100A1);
    SetNpcAnimation(0, 0x80007);
    sleep 10;
    SetNpcAnimation(0, 0x80001);
    spawn {
        SetCamDistance(0, 1000);
        SetCamPitch(0, 17.0, -6.0);
        SetCamSpeed(0, 4.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_80245014) = SCRIPT({
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    AwaitPlayerLeave(SI_VAR(0), SI_VAR(2), 120);
    DisablePlayerInput(1);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), 0, SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250);
    SetCamPitch(0, 5.5, -7.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    NpcFaceNpc(1, 0, 1);
    SpeakToPlayer(1, 0xCC0004, 0xCC0001, 0, 0x1100B4);
    NpcFaceNpc(0xFFFFFFFC, 1, 1);
    SetCamDistance(0, 600);
    SetCamPitch(0, 10.0, -8.0);
    SetCamPosA(0, 0, 0);
    SetCamPosB(0, 130, 0xFFFFFF38);
    SetCamPosC(0, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        func_802433C0_CC6BD0(55);
    }
    SetNpcFlagBits(1, 256, 1);
    SI_VAR(9) = spawn N(script_80244560);
    LoadPath(55, N(vectorList_80244420), 5, 0);
20:
    GetNextPathPos();
    SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 20;
    }
    kill SI_VAR(9);
    GetCurrentPartnerID(SI_VAR(0));
    BringPartnerOut(8);
    if (SI_VAR(0) != 8) {
        SetNpcJumpscale(0xFFFFFFFC, 0.0);
        GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(1) += 20;
        SI_VAR(2) += 20;
        SI_VAR(3) += 20;
        NpcJump0(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3), 30);
    }
    DisablePartnerAI(0);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    sleep 5;
    SpeakToPlayer(0xFFFFFFFC, 0x80009, 0x80001, 5, 0x1100B5);
    EnablePartnerAI();
    PutPartnerAway();
    ResetCam(0, 90.0);
    DisablePlayerInput(0);
});

Script N(script_80245444) = SCRIPT({
    DisablePlayerInput(1);
    sleep 30;
    SpeakToPlayer(0, 0x8000A, 0x80004, 0, 0x1100A2);
    SetNpcPos(1, 0xFFFFFEDE, 120, 45);
    spawn {
        sleep 10;
        SetNpcAnimation(-1, 0x80001);
        SetPlayerAnimation(0x1002A);
        sleep 20;
        InterpPlayerYaw(270, 1);
    }
    SpeakToPlayer(1, 0xCC0004, 0xCC0001, 5, 0x1100A3);
    SetNpcAnimation(1, 0xCC0007);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamDistance(0, 500);
    SetCamPitch(0, 5.5, -6.0);
    SetCamPosA(0, 0, 0);
    SetCamPosB(0, 130, 0xFFFFFF38);
    SetCamPosC(0, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    spawn {
        SetCamDistance(0, 400);
        SetCamPosB(0, 130, 60);
        SetCamSpeed(0, 1.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    spawn {
        func_802433C0_CC6BD0(80);
    }
    SI_VAR(9) = spawn N(script_80244560);
    LoadPath(80, N(vectorList_802443E4), 5, 0);
0:
    GetNextPathPos();
    SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    kill SI_VAR(9);
    SetNpcAnimation(1, 0xCC0009);
    SetPlayerAnimation(0x10000);
    sleep 20;
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 20;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250);
    SetCamPitch(0, 5.5, -7.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x80009, 0x80001, 0, 0x1100A4);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 40;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(1, 0xCC0008, 0xCC0008, 0, 0x1100A5);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 20;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x8000B, 0x80003, 0, 0x1100A6);
    SetNpcAnimation(0, 0x80001);
    EndSpeech(0, 0x80009, 0x80001, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 40;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350);
    SetCamSpeed(0, 10.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
10:
    SpeakToPlayer(1, 0xCC000A, 0xCC0009, 0, 0x1100A7);
    ShowChoice(0x1E0020);
    if (SI_VAR(0) != 0) {
        await N(script_80244888);
        sleep 10;
        goto 10;
    } else {
        ContinueSpeech(1, 0xCC0004, 0xCC0001, 0, 0x1100A9);
        SetNpcAnimation(1, 0xCC0001);
        SetPlayerAnimation(0x10029);
        sleep 10;
        SetPlayerAnimation(0x10000);
        sleep 20;
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 20;
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 250);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(0, 0x8000B, 0x80003, 0, 0x1100AA);
        SetNpcAnimation(0, 0x80001);
        EndSpeech(0, 0x80009, 0x80001, 0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 40;
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 350);
        SetCamSpeed(0, 5.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 10;
        SpeakToPlayer(0, 0x8000B, 0x80003, 0, 0x1100AB);
        sleep 10;
        ShowChoice(0x1E0021);
        match SI_VAR(0) {
            == -1 {}
            == 0 {
                ContinueSpeech(0, 0x80009, 0x80001, 0, 0x1100AC);
            }
            == 1 {
                ContinueSpeech(0, 0x80009, 0x80001, 0, 0x1100AD);
            }
            == 2 {
                ContinueSpeech(0, 0x80009, 0x80001, 0, 0x1100AE);
            }
            == 3 {
                ContinueSpeech(0, 0x80009, 0x80001, 0, 0x1100AF);
            }
        }
    }
    InterpNpcYaw(1, 90, 1);
    SetNpcAnimation(1, 0xCC0009);
    SpeakToPlayer(1, 0xCC000A, 0xCC0009, 5, 0x1100B0);
    SpeakToPlayer(0, 0x80009, 0x80001, 0, 0x1100B1);
    sleep 15;
    SpeakToPlayer(1, 0xCC000A, 0xCC0009, 5, 0x1100B2);
    SpeakToPlayer(0, 0x80009, 0x80001, 0, 0x1100B3);
    sleep 10;
    spawn {
        ResetCam(0, 90.0);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 30;
    SetNpcSpeed(0, 3.5);
    NpcMoveTo(0, SI_VAR(0), 60, 0);
    func_80240040_CC3850(0, 8);
    func_802435D0_CC6DE0();
    spawn N(script_802438CC);
    sleep 15;
    ShowMessageAtScreenPos(0x1D0190, 160, 40);
    spawn N(script_802438F8);
    sleep 10;
    PanToTarget(0, 0, 0);
    SI_SAVE_VAR(0) = 51;
    EnablePartnerAI();
    DisablePlayerInput(0);
    await N(script_80245014);
});

Script N(script_Defeat_80246038) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcAnimation(-1, 0x80004);
            SetCamType(0, 6, 1);
            GetNpcPos(-1, SI_VAR(3), SI_VAR(1), SI_VAR(2));
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += SI_VAR(3);
            SI_VAR(0) /= 2;
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 300);
            SetCamPitch(0, 17.0, -7.5);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            spawn N(script_80245444);
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Interact_802461C0) = SCRIPT({
    if (SI_SAVE_VAR(0) <= 53) {
        SpeakToPlayer(1, 0xCC0004, 0xCC0001, 0, 0x110032);
    } else {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) != 8) {
            SpeakToPlayer(1, 0xCC0004, 0xCC0001, 0, 0x110034);
        } else {
            SpeakToPlayer(1, 0xCC0004, 0xCC0001, 0, 0x110032);
        }
    }
});

Script N(script_Init_80246280) = SCRIPT({
    if (SI_SAVE_VAR(0) < 51) {
        BindNpcIdle(-1, N(script_Idle_80244BF8));
        BindNpcDefeat(-1, N(script_Defeat_80246038));
    }
});

Script N(script_Init_802462D0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 58) {
        BindNpcInteract(-1, N(script_Interact_802461C0));
        SetNpcCollisionSize(-1, 36, 28);
        if (SI_SAVE_VAR(0) >= 53) {
            SetNpcPos(-1, 0xFFFFFFCE, 180, 0xFFFFFFCE);
        }
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80246370) = SCRIPT({
    SetNpcPos(2, 0, 0xFFFFFC18, 0);
    SetNpcAnimation(2, 0xCC000B);
});

Script N(script_Init_802463B0) = SCRIPT({
    if (SI_SAVE_VAR(0) == 50) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_802463E8) = SCRIPT({
    if (SI_SAVE_VAR(0) == 50) {
        RemoveNpc(-1);
    }
    SetSelfVar(13, 1);
});

StaticNpc N(npcGroup_80246434)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244100),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00040F05,
        .init = N(script_Init_80246280),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001, 0x00080001,
        },
    },
};

StaticNpc N(npcGroup_80246624)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80244100),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_802462D0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001,
        },
        .tattle = 0x1A00E2,
    },
};

StaticNpc N(npcGroup_80246814)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80244100),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80246370),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001, 0x00CC0001,
        },
    },
};

StaticNpc N(npcGroup_80246A04)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802441E4),
        .pos = { 335.0, 90.0, 45.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_802463B0),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .movement = { 0x0000014F, 0x0000005A, 0x0000002D, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000014F, 0x0000005A, 0x0000002D, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
    },
};

StaticNpc N(npcGroup_80246BF4)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802441E4),
        .pos = { -320.0, 90.0, 0.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_802463B0),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 25,
        .itemDrops = { { ItemId_SUPER_SHROOM, 2 }, { ItemId_MAPLE_SYRUP, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_STOP_WATCH, 2 } },
        .movement = { 0xFFFFFEC0, 0x0000005A, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEC0, 0x0000005A, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00490001, 0x00490002, 0x00490003, 0x00490003, 0x00490001, 0x00490001, 0x00490004, 0x00490004, 0x00490003, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001, 0x00490001,
        },
    },
};

StaticNpc N(npcGroup_80246DE4)[] = {
    {
        .id = 50,
        .settings = &N(npcSettings_8024437C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000404,
        .init = N(script_Init_802463E8),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_80246FD4)[] = {
    {
        .id = 51,
        .settings = &N(npcSettings_8024437C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000404,
        .init = N(script_Init_802463E8),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_802471C4)[] = {
    {
        .id = 52,
        .settings = &N(npcSettings_8024437C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000404,
        .init = N(script_Init_802463E8),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_802473B4)[] = {
    {
        .id = 53,
        .settings = &N(npcSettings_8024437C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000404,
        .init = N(script_Init_802463E8),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_802475A4)[] = {
    {
        .id = 54,
        .settings = &N(npcSettings_8024437C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000404,
        .init = N(script_Init_802463E8),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_80247794)[] = {
    {
        .id = 55,
        .settings = &N(npcSettings_8024437C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000404,
        .init = N(script_Init_802463E8),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

NpcGroupList N(npcGroupList_80247984) = {
    NPC_GROUP(N(npcGroup_80246A04), 0x18060005),
    NPC_GROUP(N(npcGroup_80246BF4), 0x18040005),
    NPC_GROUP(N(npcGroup_80246DE4), 0x180C0003),
    NPC_GROUP(N(npcGroup_80246FD4), 0x180C0003),
    NPC_GROUP(N(npcGroup_802471C4), 0x180C0003),
    NPC_GROUP(N(npcGroup_802473B4), 0x180C0003),
    NPC_GROUP(N(npcGroup_802475A4), 0x180C0003),
    NPC_GROUP(N(npcGroup_80247794), 0x180C0003),
    NPC_GROUP(N(npcGroup_80246434), 0x19050002),
    NPC_GROUP(N(npcGroup_80246624), 0x00000000),
    NPC_GROUP(N(npcGroup_80246814), 0x00000000),
    {},
};

s32 pad_007A14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80247A20_CCB230

// rodata: D_80247A28_CCB238

// rodata: D_80247A30_CCB240

// rodata: D_80247A38_CCB248

// rodata: D_80247A40_CCB250

// rodata: jtbl_80247A48_CCB258

s32 pad_007A84[] = {
    0x00000000,
};

// rodata: D_80247A88_CCB298

// rodata: jtbl_80247A90_CCB2A0

s32 pad_007AE4[] = {
    0x00000000,
};

// rodata: D_80247AE8_CCB2F8

// rodata: D_80247AF0_CCB300
