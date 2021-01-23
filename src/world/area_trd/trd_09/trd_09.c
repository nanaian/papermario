#include "trd_09.h"

s32 pad_0000B8[2];
Script N(script_80240240);
s32 pad_0002F4[3];
Script N(script_ExitDoubleDoor_80240300);
Script N(script_ExitDoubleDoor_802403A4);
Script N(script_80240448);
Script N(script_EnterDoubleDoor_80240490);
Script N(main);
s32 pad_000714[3];
Script N(script_80240720);
Script N(script_MakeEntities);
s32 pad_00081C[1];
Script N(script_80240820);
Script N(script_80240844);
Script N(script_80240A48);
Script N(script_80240B80);
Script N(script_80240C0C);
s32 N(unk_80240C1C)[4];
Script N(script_80240C2C);
s32 unk_missing_80240CE4[22];
Script N(script_80240D3C);
Script N(script_NpcAI_80240D74);
Script N(script_80241388);
Script N(script_802413C0);
Script N(script_802413F8);
Script N(script_80241430);
Script N(script_80241614);
Script N(script_802417F8);
Script N(script_NpcAI_802419DC);
Script N(script_NpcAI_80241B6C);
Script N(script_80241FB8);
s32 N(unk_802420CC)[11];
s32 N(unk_802420F8)[11];
s32 N(unk_80242124)[11];
Script N(script_Defeat_802421A8);
Script N(script_Init_802421EC);
StaticNpc N(npcGroup_80242240)[3];
StaticNpc N(npcGroup_80242810)[1];
StaticNpc N(npcGroup_80242A00)[1];
StaticNpc N(npcGroup_80242BF0)[1];
StaticNpc N(npcGroup_80242DE0)[1];
StaticNpc N(npcGroup_80242FD0)[1];
StaticNpc N(npcGroup_802431C0)[1];
StaticNpc N(npcGroup_802433B0)[1];
StaticNpc N(npcGroup_802435A0)[1];
StaticNpc N(npcGroup_80243790)[1];
StaticNpc N(npcGroup_80243980)[1];
s32 N(npcGroup_80243B70)[314];
s32 unk_missing_80244058[182];
NpcGroupList N(npcGroupList_80244330);
Script N(script_Idle_802443CC);
Script N(script_Init_80244428);
StaticNpc N(npcGroup_8024445C)[1];
StaticNpc N(npcGroup_8024464C)[1];
StaticNpc N(npcGroup_8024483C)[1];
StaticNpc N(npcGroup_80244A2C)[1];
StaticNpc N(npcGroup_80244C1C)[1];
NpcGroupList N(npcGroupList_80244E0C);
s32 pad_004E54[3];
Script N(script_80244E60);
Script N(script_80245174);
s32 N(unk_80245234)[1];
Script N(script_80245238);
const char D_80245290_9C28F0[8]; // "trd_01"
const char D_80245298_9C28F8[8]; // "trd_10"
const char D_802452A0_9C2900[8]; // "trd_09"
s32 pad_0052A8[2];

// text: func_80240000_9BD660

s32 pad_0000B8[] = {
    0x00000000, 0x00000000,
};

// text: func_802400C0_9BD720

EntryList N(entryList) = {
    { -565.0f, 60.0f, 10.0f, 90.0f },
    { 1515.0f, 60.0f, 0.0f, 270.0f },
    { -340.0f, 0.0f, 50.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190057,
};

Script N(script_80240240) = SCRIPT({
    if (SI_SAVE_VAR(0) == 0xFFFFFFB1) {
        if (SI_SAVE_FLAG(661) == 0) {
            SetMusicTrack(0, 72, 0, 8);
        } else {
            SetMusicTrack(0, 20, 0, 8);
        }
    } else {
        SetMusicTrack(0, 20, 0, 8);
    }
    UseDoorSounds(1);
});

s32 pad_0002F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80240300) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 16;
    SI_VAR(2) = 12;
    SI_VAR(3) = 14;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245290_9C28F0, 3);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802403A4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 11;
    SI_VAR(2) = 18;
    SI_VAR(3) = 16;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245298_9C28F8, 0);
    sleep 100;
});

Script N(script_80240448) = SCRIPT({
    bind N(script_ExitDoubleDoor_80240300) to TriggerFlag_WALL_INTERACT 16;
    bind N(script_ExitDoubleDoor_802403A4) to TriggerFlag_WALL_INTERACT 11;
});

Script N(script_EnterDoubleDoor_80240490) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240448);
        return;
    }
    group 0;
    suspend group 1;
    spawn N(script_80240448);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 12;
            SI_VAR(3) = 14;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 18;
            SI_VAR(3) = 16;
            await EnterDoubleDoor;
        }
    }
    resume group 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        MakeNpcs(1, N(npcGroupList_80244E0C));
        await N(script_MakeEntities);
        await N(script_80245238);
        return;
    }
    if (SI_SAVE_VAR(0) <= 0xFFFFFFB2) {
        MakeNpcs(1, N(npcGroupList_80244330));
    }
    if (SI_SAVE_FLAG(661) == 1) {
        ModifyColliderFlags(0, 19, 0x7FFFFE00);
    }
    await N(script_MakeEntities);
    spawn N(script_80240240);
    spawn N(script_EnterDoubleDoor_80240490);
    sleep 1;
});

s32 pad_000714[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240720) = SCRIPT({
    SI_SAVE_FLAG(662) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(662) == 0) {
        MakeEntity(D_802BCF24, 0xFFFFFE2A, 0xFFFFFFB5, 139, 0, 0x80000000);
        AssignScript(N(script_80240720));
    }
    MakeEntity(D_802EA7E0, 1400, 0xFFFFFFF1, 135, 0, 0x80000000);
    MakeEntity(D_802E9A18, 1490, 0xFFFFFFF1, 135, 0, 0x80000000);
    MakeEntity(D_802EA564, 0xFFFFFDE4, 0xFFFFFFF1, 135, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(640));
});

s32 pad_00081C[] = {
    0x00000000,
};

Script N(script_80240820) = SCRIPT({
    SetSelfEnemyFlagBits(0x200000, 1);
});

Script N(script_80240844) = SCRIPT({
0:
    SI_VAR(0) = 400.0;
    SI_VAR(1) = 1;
    GetNpcYaw(-1, SI_VAR(2));
    SI_VAR(3) = 10;
    SI_VAR(10) = 0x2E0001;
    SI_VAR(11) = 0x2E0001;
    await func_800936C0;
    SetNpcAnimation(-1, 0x2E0002);
    sleep 15;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcYaw(-1, SI_VAR(3));
    AddVectorPolar(SI_VAR(0), SI_VAR(2), 20.0, SI_VAR(3));
    SI_VAR(1) += 12;
    SetNpcAnimation(-1, 0x2E0001);
    GetSelfNpcID(SI_VAR(0));
    SI_VAR(0) += 1;
    SetNpcVar(SI_VAR(0), 0, 1);
1:
    GetSelfNpcID(SI_VAR(0));
    SI_VAR(0) += 1;
    GetNpcVar(SI_VAR(0), 0, SI_VAR(1));
    if (SI_VAR(1) == 0) {
        sleep 1;
        goto 1;
    }
    RandInt(30, SI_VAR(0));
    SI_VAR(0) += 30;
    sleep SI_VAR(0);
    goto 0;
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80240A48) = {
    SI_CMD(ScriptOpcode_CALL, SetBattleMusic, 3),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0x2E0003),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, func_800936DC),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_SPAWN_THREAD),
                SI_CMD(ScriptOpcode_CALL, func_800458CC, SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_LOOP, 30),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(10), 40),
                        SI_CMD(ScriptOpcode_CALL, SetNpcRotation, -1, 0, SI_VAR(10), 0),
                        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                    SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80240B80) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {}
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

Script N(script_80240C0C) = SCRIPT({

});

s32 N(unk_80240C1C)[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_80240C2C) = SCRIPT({
    SetNpcRotation(-1, 0, 0, 0);
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
        == 2 {}
        == 3 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

s32 unk_missing_80240CE4[] = {
    0x002E0001, 0x001A0020, N(script_80240820), 0x00000000, N(script_80240844), N(script_80240A48), 0x00000000, N(script_80240B80),
    0x00000000, 0x00000000, 0x000A0000, 0x002D0001, 0x000E001F, N(script_80240C0C), 0x00000000, N(unk_80240C1C),
    EnemyNpcHit, 0x00000000, N(script_80240C2C), 0x00000000, 0x00000000, 0x00050000,
};

Script N(script_80240D3C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB1) {
        RemoveNpc(-1);
    }
});

Script N(script_NpcAI_80240D74) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 0xFFFFFE8E) {
        goto 0;
    }
    DisablePlayerInput(1);
    sleep 20;
    FadeOutMusic(0, 2000);
    UseSettingsFrom(0, 1300, 0, 0);
    SetPanTarget(0, 1490, 0, 0);
    SetCamPosB(0, 1466, 41.6005859375);
    SetCamSpeed(0, 1.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SetCamPosB(0, 1466, 41.6005859375);
    SetPanTarget(0, 1490, 60, 0);
    SetCamDistance(0, 300);
    SetCamPitch(0, 25, 0xFFFFFFF7);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    sleep 20;
    PlaySound(451);
    SetMusicTrack(0, 82, 0, 8);
    MakeLerp(0, 110, 10, 10);
2:
    UpdateLerp();
    RotateModel(18, SI_VAR(0), 0, -1, 0);
    RotateModel(16, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    SetNpcVar(71, 0, 1);
    SetNpcVar(72, 0, 1);
    SetNpcVar(73, 0, 1);
    sleep 60;
    SetNpcAnimation(-1, 0x660103);
    SetNpcSpeed(-1, 3.0);
    SetNpcJumpscale(-1, 0.80078125);
    NpcMoveTo(-1, 1490, 0, 0);
    sleep 10;
    SpeakToPlayer(-1, 0x66011B, 0x66011B, 0, 0xC00F2);
    UseSettingsFrom(0, 1300, 0, 0);
    SetCamPosB(0, 1466, 41.6005859375);
    SetPanTarget(0, 1250, 0, 0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(-1, 0x660112);
    NpcJump0(-1, 1440, 30, 0, 20);
    NpcJump0(-1, 1380, 0, 0, 20);
    SetNpcAnimation(-1, 0x660103);
    NpcMoveTo(-1, 1360, 0, 0);
    sleep 20;
    SetNpcAnimation(-1, 0x660104);
    SpeakToPlayer(-1, 0x66011B, 0x66011B, 0, 0xC00F3);
    SetNpcVar(71, 0, 2);
    SetNpcVar(72, 0, 2);
    SetNpcVar(73, 0, 2);
    SetSelfVar(0, 1);
    SetMusicTrack(0, 72, 0, 8);
    sleep 60;
    UseSettingsFrom(0, 1300, 0, 0);
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 1.5);
    WaitForCam(0, 1.0);
    SetCamSpeed(0, 1.0);
    SI_SAVE_VAR(0) = 0xFFFFFFB1;
    DisablePlayerInput(0);
    RotateModel(18, 0, 0, -1, 0);
    RotateModel(16, 0, 0, 1, 0);
    RemoveNpc(-1);
});

Script N(script_80241388) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB1) {
        RemoveNpc(-1);
    }
});

Script N(script_802413C0) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB1) {
        RemoveNpc(-1);
    }
});

Script N(script_802413F8) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB1) {
        RemoveNpc(-1);
    }
});

Script N(script_80241430) = SCRIPT({
    SetSelfVar(0, 0);
10:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 10;
    }
    SetNpcAnimation(-1, 0x660003);
    SetNpcSpeed(-1, 3.0);
    SetNpcJumpscale(-1, 0.80078125);
    NpcMoveTo(-1, 1520, 20, 0);
    SetNpcAnimation(-1, 0x660012);
    NpcJump0(-1, 1470, 30, 30, 20);
    NpcJump0(-1, 1410, 0, 40, 20);
    SetNpcAnimation(-1, 0x660003);
    NpcMoveTo(-1, 1330, 50, 0);
    SetNpcAnimation(-1, 0x660001);
20:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 1) {
        sleep 1;
        goto 20;
    }
    SetNpcAnimation(-1, 0x66001B);
    sleep 100;
    RemoveNpc(-1);
});

Script N(script_80241614) = SCRIPT({
    SetSelfVar(0, 0);
10:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 10;
    }
    SetNpcAnimation(-1, 0x660203);
    SetNpcSpeed(-1, 3.0);
    SetNpcJumpscale(-1, 0.80078125);
    NpcMoveTo(-1, 1505, 5, 0);
    SetNpcAnimation(-1, 0x660212);
    NpcJump0(-1, 1455, 30, 5, 20);
    NpcJump0(-1, 1395, 0, 5, 20);
    SetNpcAnimation(-1, 0x660203);
    NpcMoveTo(-1, 1315, 5, 0);
    SetNpcAnimation(-1, 0x660201);
20:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 1) {
        sleep 1;
        goto 20;
    }
    SetNpcAnimation(-1, 0x66021B);
    sleep 100;
    RemoveNpc(-1);
});

Script N(script_802417F8) = SCRIPT({
    SetSelfVar(0, 0);
10:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 10;
    }
    SetNpcAnimation(-1, 0x660303);
    SetNpcSpeed(-1, 3.0);
    SetNpcJumpscale(-1, 0.80078125);
    NpcMoveTo(-1, 1490, 0xFFFFFFF6, 0);
    SetNpcAnimation(-1, 0x660312);
    NpcJump0(-1, 1440, 30, 0xFFFFFFEC, 20);
    NpcJump0(-1, 1380, 0, 0xFFFFFFE2, 20);
    SetNpcAnimation(-1, 0x660303);
    NpcMoveTo(-1, 1300, 0xFFFFFFD8, 0);
    SetNpcAnimation(-1, 0x660301);
20:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 1) {
        sleep 1;
        goto 20;
    }
    SetNpcAnimation(-1, 0x66031B);
    sleep 100;
    RemoveNpc(-1);
});

Script N(script_NpcAI_802419DC) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFB1) {
    100:
        GetNpcVar(70, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            sleep 1;
            goto 100;
        }
    }
0:
    SI_VAR(10) = 20;
    loop 10 {
        func_80240000_9BD660(SI_VAR(10), 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            GetSelfNpcID(SI_VAR(0));
            SetNpcVar(SI_VAR(10), 0, SI_VAR(0));
            SetNpcAnimation(-1, 0x2E0002);
            sleep 15;
            SetNpcAnimation(-1, 0x2E0001);
            RandInt(100, SI_VAR(0));
            SI_VAR(0) += 60;
            sleep SI_VAR(0);
        }
        SI_VAR(10) += 1;
    }
    sleep 1;
    goto 0;
});

Script N(script_NpcAI_80241B6C) = SCRIPT({
    SetSelfEnemyFlagBits(0x200000, 1);
1:
    SetSelfVar(0, 0);
    EnableNpcShadow(-1, 0);
    func_80045580(0);
    SetNpcFlagBits(-1, 2, 1);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
2:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 2;
    }
    sleep 15;
    SetNpcAnimation(-1, 0x2D0004);
    EnableNpcShadow(-1, 1);
    SetNpcFlagBits(-1, 2, 0);
    func_80045580(1);
    GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    GetNpcYaw(SI_VAR(0), SI_VAR(4));
    AddVectorPolar(SI_VAR(1), SI_VAR(3), 14.0, SI_VAR(4));
    SI_VAR(2) += 11;
    SetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpNpcYaw(-1, SI_VAR(4), 0);
    func_80045838(-1, 808, 0x200000);
    SI_VAR(10) = SI_VAR(1);
    SI_VAR(10) -= 10;
    SI_VAR(11) = SI_VAR(2);
    SI_VAR(11) += 5;
    SI_VAR(12) = SI_VAR(3);
    SI_VAR(12) += 3;
    PlayEffect(7, 2, SI_VAR(10), SI_VAR(11), SI_VAR(12), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    SetNpcSpeed(-1, 6.0);
    match SI_VAR(0) {
        == 10 {
            NpcMoveTo(-1, 0xFFFFFE4B, SI_VAR(3), 0);
        }
        == 11 {
            NpcMoveTo(-1, 0xFFFFFE34, SI_VAR(3), 0);
        }
        == 12 {
            NpcMoveTo(-1, 0xFFFFFE3E, SI_VAR(3), 0);
        }
    }
    func_80045838(-1, 0xB0000018, 0);
    SetNpcAnimation(-1, 0x2D0005);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 5;
    SI_VAR(2) += 1;
    PlayEffect(39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.05078125, 20, 0, 0, 0, 0, 0, 0, 0);
    SI_VAR(2) += 1;
    PlayEffect(36, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1.2001953125, 25, 0, 0, 0, 0, 0, 0, 0);
    sleep 3;
    goto 1;
});

Script N(script_80241FB8) = SCRIPT({
    SetNpcRotation(-1, 0, 0, 0);
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn {
                sleep 20;
                SetNpcFlagBits(-1, 2, 1);
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
                BindNpcAI(-1, N(script_NpcAI_80241B6C));
            }
            DoNpcDefeat();
        }
        == 2 {
            func_80045900(0);
        }
    }
});

NpcSettings N(npcSettings_802420A0) = {
    .unk_00 = { 0, 0x66, 0x1, 0x2 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = &N(script_80240D3C),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240D74),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0x700,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 N(unk_802420CC)[] = {
    0x00660002, 0x00220018, N(script_80241388), 0x00000000, N(script_80241430), 0x00000000, 0x00000000, 0x00000000,
    0x00000700, 0x00000000, 0x00630000,
};

s32 N(unk_802420F8)[] = {
    0x00660202, 0x00220018, N(script_802413C0), 0x00000000, N(script_80241614), 0x00000000, 0x00000000, 0x00000000,
    0x00000700, 0x00000000, 0x00630000,
};

s32 N(unk_80242124)[] = {
    0x00660302, 0x00220018, N(script_802413F8), 0x00000000, N(script_802417F8), 0x00000000, 0x00000000, 0x00000000,
    0x00000700, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80242150) = {
    .unk_00 = { 0, 0x2E, 0, 0x1 },
    .height = 0x1A,
    .radius = 0x20,
    .otherAI = &N(script_80240820),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802419DC),
    .onHit = &N(script_80240A48),
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024217C) = {
    .unk_00 = { 0, 0x2D, 0, 0x1 },
    .height = 0xE,
    .radius = 0x1F,
    .otherAI = &N(script_80240C0C),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241B6C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &N(script_80241FB8),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x5,
    .unk_2A = 0,
};

Script N(script_Defeat_802421A8) = SCRIPT({
    ModifyColliderFlags(0, 19, 0x7FFFFE00);
    SI_SAVE_FLAG(661) = 1;
    DoNpcDefeat();
});

Script N(script_Init_802421EC) = SCRIPT({
    if (SI_SAVE_FLAG(661) == 0) {
        BindNpcDefeat(-1, N(script_Defeat_802421A8));
    } else {
        RemoveEncounter(-1);
    }
});

StaticNpc N(npcGroup_80242240)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80242150),
        .pos = { 1260.0, 0.0, -40.0 },
        .flags = 0x00242D00,
        .init = N(script_Init_802421EC),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0003, 0x002E0003, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001,
        },
    },
    {
        .id = 12,
        .settings = &N(npcSettings_80242150),
        .pos = { 1275.0, 0.0, 5.0 },
        .flags = 0x00242D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0003, 0x002E0003, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001,
        },
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80242150),
        .pos = { 1290.0, 0.0, 50.0 },
        .flags = 0x00242D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0003, 0x002E0003, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001, 0x002E0001,
        },
    },
};

StaticNpc N(npcGroup_80242810)[] = {
    {
        .id = 20,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80242A00)[] = {
    {
        .id = 21,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80242BF0)[] = {
    {
        .id = 22,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80242DE0)[] = {
    {
        .id = 23,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80242FD0)[] = {
    {
        .id = 24,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_802431C0)[] = {
    {
        .id = 25,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_802433B0)[] = {
    {
        .id = 26,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_802435A0)[] = {
    {
        .id = 27,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80243790)[] = {
    {
        .id = 28,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80243980)[] = {
    {
        .id = 29,
        .settings = &N(npcSettings_8024217C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00080D04,
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

s32 N(npcGroup_80243B70)[] = {
    0x00000046, N(npcSettings_802420A0), 0x44C6C000, 0x42700000, 0x00000000, 0x00000001, 0x00000000, 0x00000001,
    0x00000000, 0x0000010E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000047, N(unk_80242124), 0x44C6C000, 0x42700000,
    0xC1200000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x0000010E, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000048, N(unk_802420F8), 0x44C8A000, 0x42700000, 0x40A00000, 0x00000001, 0x00000000, 0x00000001,
    0x00000000, 0x0000010E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000,
};

s32 unk_missing_80244058[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000049, N(unk_802420CC), 0x44CA8000, 0x42700000, 0x41A00000, 0x00000001,
    0x00000000, 0x00000001, 0x00000000, 0x0000010E, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

NpcGroupList N(npcGroupList_80244330) = {
    NPC_GROUP(N(npcGroup_80242240), 0x06170007),
    NPC_GROUP(N(npcGroup_80242810), 0x061A0007),
    NPC_GROUP(N(npcGroup_80242A00), 0x061A0007),
    NPC_GROUP(N(npcGroup_80242BF0), 0x061A0007),
    NPC_GROUP(N(npcGroup_80242DE0), 0x061A0007),
    NPC_GROUP(N(npcGroup_80242FD0), 0x061A0007),
    NPC_GROUP(N(npcGroup_802431C0), 0x061A0007),
    NPC_GROUP(N(npcGroup_802433B0), 0x061A0007),
    NPC_GROUP(N(npcGroup_802435A0), 0x061A0007),
    NPC_GROUP(N(npcGroup_80243790), 0x061A0007),
    NPC_GROUP(N(npcGroup_80243980), 0x061A0007),
    NPC_GROUP(N(npcGroup_80243B70), 0x00000000),
    {},
};

Script N(script_Idle_802443CC) = SCRIPT({
    GetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetNpcSpeed(-1, 6.0);
    NpcMoveTo(-1, 0xFFFFFE34, SI_VAR(3), 0);
});

Script N(script_Init_80244428) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802443CC));
    func_80045580(1);
});

StaticNpc N(npcGroup_8024445C)[] = {
    {
        .id = 40,
        .settings = &N(npcSettings_8024217C),
        .pos = { -100.0, 11.0, 50.0 },
        .flags = 0x00080D04,
        .init = N(script_Init_80244428),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_8024464C)[] = {
    {
        .id = 41,
        .settings = &N(npcSettings_8024217C),
        .pos = { -150.0, 11.0, 5.0 },
        .flags = 0x00080D04,
        .init = N(script_Init_80244428),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_8024483C)[] = {
    {
        .id = 42,
        .settings = &N(npcSettings_8024217C),
        .pos = { 120.0, 11.0, 50.0 },
        .flags = 0x00080D04,
        .init = N(script_Init_80244428),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80244A2C)[] = {
    {
        .id = 43,
        .settings = &N(npcSettings_8024217C),
        .pos = { 330.0, 11.0, 5.0 },
        .flags = 0x00080D04,
        .init = N(script_Init_80244428),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

StaticNpc N(npcGroup_80244C1C)[] = {
    {
        .id = 44,
        .settings = &N(npcSettings_8024217C),
        .pos = { 380.0, 11.0, -40.0 },
        .flags = 0x00080D04,
        .init = N(script_Init_80244428),
        .unk_1C = 0x00000001,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 3,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002D0001, 0x002D0002, 0x002D0003, 0x002D0003, 0x002D0001, 0x002D0004, 0x002D0005, 0x002D0005, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001, 0x002D0001,
        },
    },
};

NpcGroupList N(npcGroupList_80244E0C) = {
    NPC_GROUP(N(npcGroup_8024445C), 0x061A0007),
    NPC_GROUP(N(npcGroup_8024464C), 0x061A0007),
    NPC_GROUP(N(npcGroup_8024483C), 0x061A0007),
    NPC_GROUP(N(npcGroup_80244A2C), 0x061A0007),
    NPC_GROUP(N(npcGroup_80244C1C), 0x061A0007),
    {},
};

s32 pad_004E54[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244E60) = SCRIPT({
    sleep 5;
    DemoJoystickXY(78, 0);
    sleep 11;
    DemoJoystickXY(79, 1);
    DemoSetButtons(0x8000);
    sleep 7;
    DemoSetButtons(0);
    sleep 34;
    DemoSetButtons(0x8000);
    sleep 4;
    DemoSetButtons(0);
    sleep 9;
    DemoJoystickXY(78, 1);
    sleep 1;
    DemoJoystickXY(76, 6);
    sleep 1;
    DemoJoystickXY(71, 31);
    sleep 1;
    DemoJoystickXY(66, 51);
    sleep 1;
    DemoJoystickXY(63, 60);
    sleep 1;
    DemoJoystickXY(63, 61);
    sleep 7;
    DemoJoystickXY(64, 61);
    sleep 1;
    DemoJoystickXY(65, 59);
    sleep 1;
    DemoJoystickXY(65, 56);
    sleep 1;
    DemoJoystickXY(67, 45);
    sleep 1;
    DemoJoystickXY(71, 28);
    sleep 1;
    DemoJoystickXY(75, 14);
    sleep 1;
    DemoJoystickXY(77, 6);
    sleep 1;
    DemoJoystickXY(78, 2);
    sleep 13;
    DemoJoystickXY(78, 3);
    DemoSetButtons(0x8000);
    sleep 9;
    DemoSetButtons(0);
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802452A0_9C2900, 2, 2);
    sleep 123;
});

Script N(script_80245174) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802452A0_9C2900, 2, 3);
    sleep 113;
});

s32 N(unk_80245234)[] = {
    0x00000000,
};

Script N(script_80245238) = SCRIPT({
    func_802400C0_9BD720();
    SetNpcYaw(0xFFFFFFFC, 90);
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_80245174);
    spawn N(script_80244E60);
});

// rodata: D_80245290_9C28F0

// rodata: D_80245298_9C28F8

// rodata: D_802452A0_9C2900

s32 pad_0052A8[] = {
    0x00000000, 0x00000000,
};
