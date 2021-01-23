#include "kzn_22.h"

s32 pad_000338[2];
Script N(script_802403E0);
s32 pad_000444[3];
Script N(script_UpdateTexturePan_80240450);
Script N(script_802404EC);
Script N(script_80240608);
Script N(script_ExitWalk_80240724);
Script N(script_80240790);
Script N(script_802407BC);
Script N(script_802408A8);
Script N(script_80240958);
Script N(script_80240A34);
s32 N(lavaResetList_80240D30)[12];
Script N(main);
s32 unk_missing_80240EC8[6];
Script N(script_MakeEntities);
s32 pad_000F18[2];
s32 unk_missing_80240F78[22];
Script N(script_80240FD0);
Script N(script_Idle_80241010);
Script N(script_Init_8024131C);
s32 N(vectorList_80241340)[21];
s32 N(vectorList_80241394)[24];
s32 N(vectorList_802413F4)[27];
Script N(script_80241460);
Script N(script_80241648);
Script N(script_Idle_8024173C);
Script N(script_Init_80241C3C);
StaticNpc N(npcGroup_80241CE0)[1];
StaticNpc N(npcGroup_80241ED0)[1];
NpcGroupList N(npcGroupList_802420C0);
s32 pad_0020E4[3];
const char D_802420F0_C9C2F0[8]; // "kzn_20"
const char D_802420F8_C9C2F8[8]; // "kzn_23"

// text: func_80240000_C9A200

// text: func_80240124_C9A324

// text: func_8024030C_C9A50C

s32 pad_000338[] = {
    0x00000000, 0x00000000,
};

// text: func_80240340_C9A540

// text: func_8024036C_C9A56C

EntryList N(entryList) = {
    { -390.0f, 0.0f, 210.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190113,
};

Script N(script_802403E0) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 36) {
        PlaySound(0x8000006B);
    }
    SetMusicTrack(0, 42, 0, 8);
    PlayAmbientSounds(8);
});

s32 pad_000444[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240450) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C9A200();
                    return;
                }
            }
        }
    }
    func_80240124_C9A324();
});

Script N(script_802404EC) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 3);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 600;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240450);
    }
});

Script N(script_80240608) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 4);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 500;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240450);
    }
});

Script N(script_ExitWalk_80240724) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802420F0_C9C2F0, 1);
    sleep 100;
});

Script N(script_80240790) = SCRIPT({
    bind N(script_ExitWalk_80240724) to TriggerFlag_FLOOR_TOUCH 0;
});

Script N(script_802407BC) = SCRIPT({
    group 0;
    EnableTexPanning(49, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
10:
    SetTexPanOffset(6, 0, SI_VAR(0), 0);
    SetTexPanOffset(6, 1, SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFBB4;
    SI_VAR(1) += 300;
    SI_VAR(2) += 0xFFFFFE0C;
    sleep 1;
    goto 10;
});

Script N(script_802408A8) = SCRIPT({
    group 0;
    EnableTexPanning(50, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
10:
    SetTexPanOffset(1, 0, SI_VAR(0), SI_VAR(1));
    SI_VAR(0) += 300;
    SI_VAR(1) += 0xFFFFFE0C;
    sleep 1;
    goto 10;
});

Script N(script_80240958) = SCRIPT({
    loop {
        loop {
            sleep 1;
            GetModelCenter(41);
            GetPlayerPos(SI_VAR(0), SI_VAR(3), SI_VAR(2));
            if (SI_VAR(3) < SI_VAR(1)) {
                break;
            }
        }
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 8) {
            0x802D2B6C();
            SetPlayerActionState(23);
            sleep 30;
        }
    }
});

Script N(script_80240A34) = SCRIPT({
    group 239;
    SetTexPanner(43, 2);
    SetTexPanner(41, 2);
    EnableModel(41, 0);
    ParentColliderToModel(19, 41);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    SI_VAR(4) = 0.0;
    SI_VAR(5) = 0.0;
    SI_VAR(10) = 0;
10:
    UpdateColliderTransform(19);
    SetTexPanOffset(2, 0, SI_VAR(0), SI_VAR(1));
    SetTexPanOffset(2, 1, SI_VAR(2), SI_VAR(3));
    SI_VAR(0) -= 700;
    SI_VAR(1) += 700;
    SI_VAR(2) += 200;
    SI_VAR(3) -= 300;
    match SI_VAR(10) {
        == 0 {
            func_8024030C_C9A50C(SI_VAR(0));
            if (SI_VAR(0) == 9) {
                spawn N(script_80240958);
                EnableModel(41, 1);
                EnableModel(43, 0);
                SI_VAR(10) = 10;
            }
        }
        == 10 {
            if (SI_VAR(4) < 140) {
                SI_VAR(5) = 1.5;
            } else {
                if (SI_AREA_FLAG(16) == 0) {
                    SI_VAR(5) = 0.0;
                } else {
                    if (SI_VAR(4) < 285) {
                        SI_VAR(5) = 2.80078125;
                    } else {
                        SI_VAR(5) = 0.0;
                        SI_VAR(10) = -1;
                    }
                }
            }
        }
    }
    SI_VAR(4) +=f SI_VAR(5);
    TranslateModel(41, 0, SI_VAR(4), 0);
    sleep 1;
    goto 10;
});

s32 N(lavaResetList_80240D30)[] = {
    0x00000007, 0x43480000, 0x43160000, 0x43340000, 0x00000009, 0x43480000, 0x43160000, 0x43340000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA000F);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802420C0));
    await N(script_MakeEntities);
    SI_VAR(0) = N(script_80240790);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_802403E0);
    ModifyColliderFlags(3, 19, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80240D30));
    }
    spawn N(script_802407BC);
    spawn N(script_802408A8);
    spawn N(script_80240A34);
    SI_VAR(0) = 46;
    spawn N(script_802404EC);
    SI_VAR(0) = 47;
    spawn N(script_80240608);
});

s32 unk_missing_80240EC8[] = {
    0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 480, 235, 175, 0, 0, 0x80000000);
});

s32 pad_000F18[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240F20) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
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

NpcSettings N(npcSettings_80240F4C) = {
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

s32 unk_missing_80240F78[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_80240FD0) = SCRIPT({
    loop {
        ShakeCam(0, 0, 5, 0.5);
    }
});

Script N(script_Idle_80241010) = SCRIPT({
    spawn N(script_80240FD0);
0:
    func_80240340_C9A540(SI_VAR(0));
    if (SI_VAR(0) != 14) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    GetPlayerAnimation(SI_VAR(0));
    if (SI_VAR(0) == 0x8001A) {
        sleep 35;
    }
    sleep 10;
}
PlayerFaceNpc(0, 0);
SI_AREA_FLAG(12) = 1;
spawn {
    SetNpcAnimation(-1, 0xB60007);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
1:
    SetNpcJumpscale(-1, 2.0);
    PlaySoundAtNpc(-1, 812, 0);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    if (SI_AREA_FLAG(14) == 0) {
        sleep 1;
        goto 1;
    }
}
sleep 10;
GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
SetCamDistance(0, 350.0);
SetCamPitch(0, 15.0, -4.0);
SetCamPosB(0, 480.0, 299.6005859375);
SetCamSpeed(0, 5.0);
PanToTarget(0, 0, 1);
WaitForCam(0, 1.0);
spawn {
    SetPlayerSpeed(3.0);
    PlayerMoveTo(250, 210, 0);
}
sleep 20;
ShowMessageAtWorldPos(0x100116, 440, 240, 165);
sleep 20;
SI_AREA_FLAG(13) = 1;
});

Script N(script_Init_8024131C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241010));
});

s32 N(vectorList_80241340)[] = {
    0x43960000, 0x43320000, 0x42F00000, 0x43A00000, 0x432A0000, 0x43250000, 0x43AA0000, 0x43220000,
    0x43480000, 0x43C08000, 0x431B0000, 0x43700000, 0x43D98000, 0x43200000, 0x437F0000, 0x43E10000,
    0x43250000, 0x43610000, 0x43DC0000, 0x432C0000, 0x43430000,
};

s32 N(vectorList_80241394)[] = {
    0x43DE8000, 0x43340000, 0x42F00000, 0x43CA8000, 0x433E0000, 0x42A00000, 0x43B40000, 0x43430000,
    0x428C0000, 0x43AA0000, 0x43480000, 0x42B40000, 0x439D8000, 0x433E0000, 0x42DC0000, 0x43938000,
    0x43340000, 0x43340000, 0x43870000, 0x432F0000, 0x43660000, 0x437F0000, 0x432A0000, 0x43520000,
};

s32 N(vectorList_802413F4)[] = {
    0x437F0000, 0x432B0000, 0x432F0000, 0x43820000, 0x432D0000, 0x43200000, 0x43870000, 0x432F0000,
    0x43160000, 0x43910000, 0x43320000, 0x430E0000, 0x43980000, 0x43360000, 0x43070000, 0x43A50000,
    0x43390000, 0x43110000, 0x43AF0000, 0x433E0000, 0x431B0000, 0x43B80000, 0x436B0000, 0x432A0000,
    0x43B80000, 0x43938000, 0x432A0000,
};

Script N(script_80241460) = SCRIPT({
    UseSettingsFrom(0, 400, 150, 200);
    SetPanTarget(0, 400, 150, 200);
    SetCamDistance(0, 390.0);
    SetCamPitch(0, 15.0, -9.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
10:
    sleep 1;
    if (SI_AREA_FLAG(14) == 0) {
        goto 10;
    }
    SetPanTarget(0, 300, 150, 170);
    SetCamDistance(0, 450.0);
    SetCamPitch(0, 15.0, -7.0);
    SetCamSpeed(0, 1.30078125);
    PanToTarget(0, 0, 1);
20:
    sleep 1;
    if (SI_AREA_FLAG(16) == 0) {
        goto 20;
    }
    SetPanTarget(0, 368, 310, 170);
    SetCamSpeed(0, 0.80078125);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_80241648) = SCRIPT({
    SetNpcPos(1, SI_VAR(4), SI_VAR(2), SI_VAR(3));
    SI_VAR(4) += 10;
    SI_VAR(3) -= 5;
    SetNpcPos(0, SI_VAR(4), SI_VAR(2), SI_VAR(3));
    if (SI_AREA_FLAG(15) == 1) {
        SI_VAR(4) -= 20;
        SI_VAR(3) += 10;
        SetPlayerPos(SI_VAR(4), SI_VAR(2), SI_VAR(3));
        SI_VAR(2) += 20;
        SI_VAR(3) += 0xFFFFFFFB;
        SetNpcPos(0xFFFFFFFC, SI_VAR(4), SI_VAR(2), SI_VAR(3));
    }
});

Script N(script_Idle_8024173C) = SCRIPT({
    loop {
        sleep 1;
        if (SI_AREA_FLAG(13) != 0) {
            break;
        }
    }
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcFlagBits(-1, 256, 1);
    SetNpcFlagBits(0, 256, 1);
    spawn N(script_80241460);
    SetNpcJumpscale(-1, 3.0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    sleep 5;
    InterpNpcYaw(-1, 90, 0);
    LoadPath(35, N(vectorList_80241340), 7, 0);
10:
    GetNextPathPos();
    SetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 10;
    }
    SI_AREA_FLAG(14) = 1;
    0x802CDE68(0, 10);
    SetNpcRotation(0, 0, 0, 180);
    SetNpcAnimation(0, 0xB60007);
    spawn {
        sleep 32;
        SetPlayerJumpscale(0);
        PlayerJump(245, 171, 176, 8);
    }
    spawn {
        sleep 32;
        SetNpcJumpscale(0xFFFFFFFC, 0);
        NpcJump0(0xFFFFFFFC, 245, 191, 171, 8);
    }
    InterpNpcYaw(-1, 270, 0);
    LoadPath(40, N(vectorList_80241394), 8, 0);
20:
    GetNextPathPos();
    SI_VAR(4) = SI_VAR(1);
    await N(script_80241648);
    if (SI_VAR(0) == 1) {
        goto 20;
    }
    SI_AREA_FLAG(15) = 1;
    sleep 1;
    SetPlayerAnimation(0x80000);
    spawn {
        sleep 25;
        SI_AREA_FLAG(16) = 1;
        func_8024036C_C9A56C();
    }
    InterpNpcYaw(-1, 90, 0);
    LoadPath(70, N(vectorList_802413F4), 9, 0);
21:
    GetNextPathPos();
    SI_VAR(4) = SI_VAR(1);
    await N(script_80241648);
    if (SI_VAR(0) == 1) {
        goto 21;
    }
    sleep 1;
    MakeLerp(300, 500, 20, 2);
    GetNpcPos(-1, SI_VAR(5), SI_VAR(2), SI_VAR(6));
    loop {
        UpdateLerp();
        SI_VAR(4) = SI_VAR(5);
        SI_VAR(2) = SI_VAR(0);
        SI_VAR(3) = SI_VAR(6);
        await N(script_80241648);
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    GotoMap(D_802420F8_C9C2F8, 0);
    sleep 100;
});

Script N(script_Init_80241C3C) = SCRIPT({
    SetNpcPos(-1, 300, 180, 80);
    SetNpcAnimation(-1, 0x160008);
    SI_AREA_FLAG(12) = 0;
    SI_AREA_FLAG(13) = 0;
    SI_AREA_FLAG(14) = 0;
    SI_AREA_FLAG(15) = 0;
    SI_AREA_FLAG(16) = 0;
    BindNpcIdle(-1, N(script_Idle_8024173C));
});

StaticNpc N(npcGroup_80241CE0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240F20),
        .pos = { 445.0, 150.0, 175.0 },
        .flags = 0x00110509,
        .init = N(script_Init_8024131C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_80241ED0)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240F4C),
        .pos = { 285.0, 160.0, 80.0 },
        .flags = 0x00110509,
        .init = N(script_Init_80241C3C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
        .tattle = 0x1A000B,
    },
};

NpcGroupList N(npcGroupList_802420C0) = {
    NPC_GROUP(N(npcGroup_80241CE0), 0x00000000),
    NPC_GROUP(N(npcGroup_80241ED0), 0x00000000),
    {},
};

s32 pad_0020E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802420F0_C9C2F0

// rodata: D_802420F8_C9C2F8
