#include "kmr_07.h"

s32 pad_000AB8[2];
Script N(script_80240BB0);
s32 pad_000BDC[1];
Script N(script_ExitWalk_80240BE0);
Script N(script_ExitWalk_80240C3C);
Script N(script_80240C98);
Script N(script_EnterWalk_80240CE0);
Script N(main);
Script N(script_NpcAI_80240EB4);
Script N(script_80240F00);
Script N(script_Idle_80240F48);
Script N(script_Defeat_802414AC);
Script N(script_Init_80241884);
Script N(script_Idle_8024190C);
Script N(script_Defeat_8024191C);
Script N(script_Init_80241998);
StaticNpc N(npcGroup_80241A18)[2];
NpcGroupList N(npcGroupList_80241DF8);
Script N(script_MakeEntities);
s32 pad_001E7C[1];
const char D_80241E80_8D5C40[8]; // "kmr_06"
const char D_80241E88_8D5C48[8]; // "kmr_12"
s32 pad_002038[2];

// text: func_80240000_8D3DC0

// text: func_802400B4_8D3E74

// text: N(NpcJumpFunc3)

// text: N(NpcJumpFunc)

// text: func_802402AC_8D406C

// text: N(UnkNpcAIFunc11)

// text: N(UnkNpcAIFunc10)

// text: func_80240540_8D4300

// text: func_802405EC_8D43AC

// text: func_802407F4_8D45B4

// text: func_80240A6C_8D482C

s32 pad_000AB8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -22.0f, 0.0f, 42.0f, 90.0f },
    { 551.0f, 80.0f, -28.0f, 245.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 480.0f, 0.0f, 110.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19003F,
};

Script N(script_80240BB0) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

s32 pad_000BDC[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240BE0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241E80_8D5C40, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240C3C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241E88_8D5C48, 0);
    sleep 100;
});

Script N(script_80240C98) = SCRIPT({
    bind N(script_ExitWalk_80240BE0) to 0x80000 3;
    bind N(script_ExitWalk_80240C3C) to 0x80000 6;
});

Script N(script_EnterWalk_80240CE0) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240C98);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 10) {
        SI_VAR(0) = N(script_80240C98);
        spawn EnterWalk;
    } else {
        spawn 0x80285C50;
        spawn N(script_80240C98);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 31;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80241DF8));
    await N(script_MakeEntities);
    spawn N(script_80240BB0);
    ModifyColliderFlags(0, 4, 0x7FFFFE00);
    ModifyColliderFlags(0, 7, 0x7FFFFE00);
    spawn N(script_EnterWalk_80240CE0);
    sleep 1;
});

NpcAISettingsSmall N(aISettings_80240E90) = {
    .alertRadius = 130.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240EB4) = SCRIPT({
    func_802407F4_8D45B4(N(aISettings_80240E90));
});

NpcSettings N(npcSettings_80240ED4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240EB4),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x5,
    .unk_2A = 0,
};

Script N(script_80240F00) = SCRIPT({
    loop {
        PlaySoundAtNpc(SI_VAR(0), 940, 0);
        sleep 4;
    }
});

Script N(script_Idle_80240F48) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 210) {
        goto 0;
    }
    SetMusicTrack(0, 91, 0, 8);
    group 239;
    spawn {
        sleep 3;
        DisablePlayerInput(1);
        sleep 1;
    }
    ShowMessageAtScreenPos(0xB00BB, 320, 60);
    SetPlayerAnimation(0x80022);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, 360, 80, 35);
    SetCamDistance(0, 300);
    SetCamPitch(0, 15.0, -7.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    sleep 30;
    spawn {
        SetNpcSpeed(0, 6.0);
        SetNpcAnimation(0, 0x620004);
        SI_VAR(0) = 0;
        SI_VAR(10) = spawn N(script_80240F00);
        NpcMoveTo(0, 405, 42, 0);
        kill SI_VAR(10);
        SetNpcAnimation(0, 0x620002);
    }
    SetNpcAnimation(1, 0x620104);
    SetNpcSpeed(1, 6.0);
    SetNpcAnimation(1, 0x620104);
    SI_VAR(0) = 1;
    SI_VAR(10) = spawn N(script_80240F00);
    NpcMoveTo(1, 376, 11, 0);
    kill SI_VAR(10);
    SetNpcAnimation(1, 0x620102);
    WaitForCam(0, 1.0);
    sleep 20;
    SetPlayerAnimation(0x1002A);
    SpeakToPlayer(0, 0x62000A, 0x620002, 0, 0xB00BC);
    sleep 10;
    SetPanTarget(0, 270, 80, 45);
    SetCamDistance(0, 450);
    SetCamPitch(0, 15.0, -3.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x62000A, 0x620002, 0, 0xB00BD);
    sleep 10;
    SpeakToPlayer(1, 0x62010A, 0x620102, 0, 0xB00BE);
    sleep 10;
    spawn {
        sleep 5;
        SetNpcJumpscale(1, 0.80078125);
        SetNpcAnimation(1, 0x620104);
        PlaySoundAtNpc(1, 271, 0);
        NpcJump0(1, 267, 0, 28, 30);
        SetPlayerAnimation(0x1002A);
    }
    spawn {
        SetNpcJumpscale(0, 0.80078125);
        SetNpcAnimation(0, 0x620004);
        PlaySoundAtNpc(0, 271, 0);
        NpcJump0(0, 276, 0, 55, 30);
    }
    sleep 15;
    SetPlayerAnimation(0x10002);
    sleep 5;
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Defeat_802414AC) = SCRIPT({
    spawn {
        sleep 5;
        SetMusicTrack(0, 126, 0, 8);
    }
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcAnimation(0, 0x620003);
            SetNpcAnimation(1, 0x620103);
            SpeakToPlayer(0, 0x62000B, 0x620003, 0, 0xB00C2);
            sleep 10;
            DisablePlayerInput(1);
            sleep 10;
            spawn {
                SetNpcJumpscale(1, 1.80078125);
                SetNpcAnimation(1, 0x620105);
                PlaySoundAtNpc(1, 271, 0);
                NpcJump0(1, 307, 25, 49, 20);
                func_80240A6C_8D482C();
                PlaySoundAtNpc(1, 8326, 0);
                NpcJump0(1, 401, 80, 25, 30);
                sleep 5;
                SetNpcSpeed(1, 6.0);
                SI_VAR(0) = 1;
                SI_VAR(10) = spawn N(script_80240F00);
                NpcMoveTo(1, 616, 0xFFFFFFD1, 0);
                kill SI_VAR(10);
                SetNpcFlagBits(1, 512, 0);
                SetNpcPos(1, 0, 0xFFFFFC18, 0);
                sleep 1;
            }
            sleep 30;
            SetNpcJumpscale(0, 1.80078125);
            SetNpcAnimation(0, 0x620005);
            PlaySoundAtNpc(0, 271, 0);
            NpcJump0(0, 307, 25, 49, 20);
            func_80240A6C_8D482C();
            PlaySoundAtNpc(0, 8326, 0);
            NpcJump0(0, 401, 80, 25, 30);
            sleep 5;
            SetNpcSpeed(0, 6.0);
            SI_VAR(0) = 0;
            SI_VAR(10) = spawn N(script_80240F00);
            NpcMoveTo(0, 616, 0xFFFFFFD1, 0);
            kill SI_VAR(10);
            SetNpcFlagBits(0, 512, 0);
            SetNpcPos(0, 0, 0xFFFFFC18, 0);
            sleep 1;
            spawn N(script_80240BB0);
            SI_MAP_VAR(0) = 1;
            SI_SAVE_VAR(0) = 0xFFFFFF8F;
            DisablePlayerInput(0);
        }
    }
});

Script N(script_Init_80241884) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240F48));
    BindNpcDefeat(-1, N(script_Defeat_802414AC));
    SetNpcFlagBits(-1, 256, 1);
    SI_MAP_VAR(0) = 0;
    if (SI_SAVE_VAR(0) >= 0xFFFFFF8F) {
        RemoveNpc(-1);
    }
});

Script N(script_Idle_8024190C) = SCRIPT({

});

Script N(script_Defeat_8024191C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
0:
            if (SI_MAP_VAR(0) == 0) {
                sleep 1;
                goto 0;
            }
        }
    }
});

Script N(script_Init_80241998) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024190C));
    BindNpcDefeat(-1, N(script_Defeat_8024191C));
    SetNpcFlagBits(-1, 256, 1);
    if (SI_SAVE_VAR(0) >= 0xFFFFFF8F) {
        RemoveNpc(-1);
        return;
    }
});

StaticNpc N(npcGroup_80241A18)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240ED4),
        .pos = { 526.0, 80.0, 0.0 },
        .flags = 0x00A40105,
        .init = N(script_Init_80241884),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x00620002, 0x00620004, 0x00620006, 0x00620006, 0x00620002, 0x00620002, 0x00620009, 0x00620009, 0x00620006, 0x00620006, 0x00620006, 0x00620006, 0x00620006, 0x00620006, 0x00620006, 0x00620006,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240ED4),
        .pos = { 498.0, 80.0, -10.0 },
        .flags = 0x00A40105,
        .init = N(script_Init_80241998),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x00620102, 0x00620104, 0x00620106, 0x00620106, 0x00620102, 0x00620102, 0x00620109, 0x00620109, 0x00620106, 0x00620106, 0x00620106, 0x00620106, 0x00620106, 0x00620106, 0x00620106, 0x00620106,
        },
    },
};

NpcGroupList N(npcGroupList_80241DF8) = {
    NPC_GROUP(N(npcGroup_80241A18), 0x01000002),
    {},
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAA54, 310, 0, 45, 0, 65, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    MakeEntity(0x802E9A18, 510, 60, 110, 0, 0x80000000);
});

s32 pad_001E7C[] = {
    0x00000000,
};

// rodata: D_80241E80_8D5C40

// rodata: D_80241E88_8D5C48

// rodata: D_80241E90_8D5C50

// rodata: D_80241E98_8D5C58

// rodata: D_80241EA0_8D5C60

// rodata: jtbl_80241EA8_8D5C68

s32 pad_002038[] = {
    0x00000000, 0x00000000,
};
