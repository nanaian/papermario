#include "arn_11.h"

Script N(script_80240050);
s32 pad_0000E8[2];
Script N(script_802400F0);
Script N(script_802401BC);
Script N(script_ExitSingleDoor_80240428);
Script N(script_802404CC);
Script N(script_EnterSingleDoor_802404F8);
Script N(main);
s32 pad_000674[3];
Script N(script_80240680);
Script N(script_80240690);
Script N(script_Idle_802406CC);
Script N(script_8024081C);
Script N(script_802408D8);
s32 N(intTable_80240988)[21];
Script N(script_Defeat_802409DC);
Script N(script_Init_80240E70);
StaticNpc N(npcGroup_80240EEC)[1];
NpcGroupList N(npcGroupList_802410DC);
s32 pad_0010F4[3];
const char D_80241100_BF8780[8]; // "arn_13"
s32 pad_001108[2];

EntryList N(entryList) = {
    { -165.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900D8,
};

Script N(script_80240050) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE9 {
            SetMusicTrack(0, 31, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 85, 0, 8);
        }
        else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
});

s32 pad_0000E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802400F0) = SCRIPT({
    SetCamType(0, 6, 1);
    SetCamSpeed(0, 3.0);
    UseSettingsFrom(0, 60, 30, 0);
    SetPanTarget(0, 60, 30, 0);
    SetCamPitch(0, 20.0, -13.0);
    SetCamDistance(0, 275);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_802401BC) = SCRIPT({
    DisablePlayerInput(1);
    sleep 30;
    SetPlayerSpeed(3.0);
    PlayerMoveTo(6, 0, 0);
    SpeakToPlayer(0, 0x6C000B, 0x6C0001, 0, 0xE00BF);
    sleep 10;
    SetPlayerAnimation(0x80007);
    sleep 40;
    SpeakToPlayer(0, 0x6C000B, 0x6C0001, 0, 0xE00C0);
    SetPlayerAnimation(0x10002);
    sleep 10;
    SetPlayerAnimation(0x90000);
    sleep 30;
    SpeakToPlayer(0, 0x6C000B, 0x6C0001, 0, 0xE00C1);
    SetPlayerAnimation(0x10002);
    sleep 20;
    SetPlayerAnimation(0x90000);
    spawn {
        SetNpcJumpscale(0, 2.5);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlaySoundAtNpc(0, 8392, 0);
        NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        sleep 1;
        PlaySoundAtNpc(0, 8392, 0);
        NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    }
    sleep 40;
    SpeakToPlayer(0, 0x6C000B, 0x6C0001, 0, 0xE00C2);
    SetPlayerAnimation(0x90000);
    sleep 10;
    SetNpcVar(0, 0, 1);
    DisablePlayerInput(0);
});

Script N(script_ExitSingleDoor_80240428) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 0;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80241100_BF8780, 1);
    sleep 100;
});

Script N(script_802404CC) = SCRIPT({
    bind N(script_ExitSingleDoor_80240428) to TriggerFlag_WALL_INTERACT 2;
});

Script N(script_EnterSingleDoor_802404F8) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(2) = 0;
    SI_VAR(3) = -1;
    await EnterSingleDoor;
    spawn N(script_802404CC);
    if (SI_SAVE_VAR(0) < 0xFFFFFFEA) {
        sleep 10;
        spawn N(script_802400F0);
        spawn N(script_802401BC);
        sleep 1;
    }
    DisablePlayerInput(0);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 35;
    SetSpriteShading(0x80002);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802410DC));
    spawn N(script_80240050);
    spawn N(script_EnterSingleDoor_802404F8);
    sleep 1;
});

s32 pad_000674[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240680) = SCRIPT({

});

Script N(script_80240690) = SCRIPT({

});

NpcSettings N(npcSettings_802406A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_80240680),
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80240690),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_Idle_802406CC) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        sleep 1;
    }
    spawn {
        SetCamType(0, 6, 1);
        SetCamSpeed(0, 4.0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 50;
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 3000);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    StartBossBattle(11);
});

Script N(script_8024081C) = SCRIPT({
    sleep 15;
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 80, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(0, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802408D8) = SCRIPT({
    MakeLerp(80, 0, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(0, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 450, 0);
});

s32 N(intTable_80240988)[] = {
    0x00000064, 0x0000001E, 0x00000046, 0x00000019, 0x0000001E, 0x00000050, 0xFFFFD8F0, 0x00000000,
    0x00000000, 0xFFFFFFBA, 0x0000000A, 0x00000014, 0xFFFFFF4C, 0x00000000, 0x00000000, 0xFFFFFED4,
    0x00000000, 0x00000000, 0xFFFFD8F0, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Defeat_802409DC) = {
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, SetCamType, 0, 6, 1),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 50),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, 450),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_CALL, PlayerFaceNpc, 0, 1),
    SI_CMD(ScriptOpcode_LOOP, 2),
        SI_CMD(ScriptOpcode_CALL, GetNpcPos, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(2.5)),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, -1, 8392, 0),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 12),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
        SI_CMD(ScriptOpcode_CALL, SetCamType, 0, 4, 1),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(2.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamPitch, 0, SI_FIXED(17.0), SI_FIXED(-7.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, 450),
        SI_CMD(ScriptOpcode_CALL, SetCamPosA, 0, 0xFFFFFFC8, 70),
        SI_CMD(ScriptOpcode_CALL, SetCamPosB, 0, 0xFFFFFFA6, 40),
        SI_CMD(ScriptOpcode_CALL, SetCamPosC, 0, 0, 0),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, PlayerFaceNpc, 0, 1),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240988)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0xFFFFD8F0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, -1, 8392, 0),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 12),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_8024081C)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0xFFFFD8F0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, -1, 8392, 0),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 12),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802408D8)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
    SI_CMD(ScriptOpcode_CALL, SetCamType, 0, 6, 1),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, 450),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(0), 0xFFFFFFEA),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_80240E70) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFEA) {
        RemoveNpc(-1);
    } else {
        SetSelfVar(0, 0);
        BindNpcIdle(-1, N(script_Idle_802406CC));
        BindNpcDefeat(-1, N(script_Defeat_802409DC));
    }
});

StaticNpc N(npcGroup_80240EEC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802406A0),
        .pos = { 119.0, 60.0, 0.0 },
        .flags = 0x00040B05,
        .init = N(script_Init_80240E70),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001,
        },
    },
};

NpcGroupList N(npcGroupList_802410DC) = {
    NPC_GROUP(N(npcGroup_80240EEC), 0x0E0F0000),
    {},
};

s32 pad_0010F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241100_BF8780

s32 pad_001108[] = {
    0x00000000, 0x00000000,
};
