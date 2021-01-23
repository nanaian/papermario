#include "kzn_18.h"

s32 pad_00003C[1];
s32 pad_00034C[1];
s32 pad_0003B4[3];
Script N(script_UpdateTexturePan_80240430);
Script N(script_802404CC);
Script N(script_802405E8);
Script N(script_ExitWalk_80240704);
Script N(script_ExitWalk_80240760);
Script N(script_ExitWalk_802407BC);
Script N(script_80240818);
Script N(script_8024087C);
s32 N(lavaResetList_80240B2C)[8];
Script N(script_EnterWalk_80240B4C);
Script N(main);
s32 unk_missing_80240E18[11];
Script N(script_Idle_80240E44);
Script N(script_Init_80241360);
Script N(script_Idle_802413B4);
Script N(script_Init_80241618);
StaticNpc N(npcGroup_8024166C)[1];
StaticNpc N(npcGroup_8024185C)[1];
NpcGroupList N(npcGroupList_80241A4C);
Script N(script_MakeEntities);
const char D_80241B00_C8DBA0[8]; // "kzn_17"
const char D_80241B08_C8DBA8[8]; // "kzn_19"

// text: func_GetTattle_C8C0A0

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_C8C0E0

// text: func_80240164_C8C204

s32 pad_00034C[] = {
    0x00000000,
};

// text: func_80240350_C8C3F0

// text: func_8024036C_C8C40C

// text: func_80240388_C8C428

s32 pad_0003B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -405.0f, 250.0f, -330.0f, 90.0f },
    { 435.0f, 250.0f, -350.0f, 270.0f },
    { 490.0f, 25.0f, -5.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x80240000,
};

Script N(script_UpdateTexturePan_80240430) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240040_C8C0E0();
                    return;
                }
            }
        }
    }
    func_80240164_C8C204();
});

Script N(script_802404CC) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80240430);
    }
});

Script N(script_802405E8) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80240430);
    }
});

Script N(script_ExitWalk_80240704) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241B00_C8DBA0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240760) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241B08_C8DBA8, 0);
    sleep 100;
});

Script N(script_ExitWalk_802407BC) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80241B08_C8DBA8, 1);
    sleep 100;
});

Script N(script_80240818) = SCRIPT({
    bind N(script_ExitWalk_80240704) to 0x80000 10;
    bind N(script_ExitWalk_80240760) to 0x80000 7;
    bind N(script_ExitWalk_802407BC) to 0x80000 4;
});

Script N(script_8024087C) = SCRIPT({
    group 0;
    EnableTexPanning(32, 1);
    EnableTexPanning(33, 1);
    EnableTexPanning(41, 1);
    EnableTexPanning(42, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 200;
        SI_VAR(2) = 0;
        SI_VAR(3) = 400;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240430);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 300;
        SI_VAR(2) = 0xFFFFFE0C;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240430);
    }
    spawn {
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(13, 0, SI_VAR(0), 0);
            SI_VAR(0) += 0x8000;
            sleep 6;
        }
    }
});

s32 N(lavaResetList_80240B2C)[] = {
    0x00000027, 0x42480000, 0x43480000, 0xC3390000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_EnterWalk_80240B4C) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240818);
        return;
    }
    SI_VAR(0) = N(script_80240818);
    spawn EnterWalk;
    sleep 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA000C);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241A4C));
    await N(script_MakeEntities);
    spawn N(script_EnterWalk_80240B4C);
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    if (SI_SAVE_VAR(0) < 37) {
        EnableModel(33, 0);
        EnableModel(34, 0);
        EnableModel(35, 0);
        EnableModel(36, 0);
        ModifyColliderFlags(0, 0, 0x7FFFFE00);
    } else {
        ModifyColliderFlags(0, 1, 0x7FFFFE00);
    }
    ModifyColliderFlags(3, 0, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80240B2C));
    }
    spawn N(script_8024087C);
    SI_VAR(0) = 38;
    spawn N(script_802404CC);
    SI_VAR(0) = 39;
    spawn N(script_802405E8);
});

NpcSettings N(npcSettings_80240DC0) = {
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

NpcSettings N(npcSettings_80240DEC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
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

s32 unk_missing_80240E18[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Idle_80240E44) = SCRIPT({
    if (SI_SAVE_VAR(0) < 33) {
0:
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 0xFFFFFF83) {
            sleep 1;
            goto 0;
        }
        SI_SAVE_VAR(0) = 33;
        SetNpcPos(-1, 0xFFFFFEE8, 250, 0xFFFFFE98);
        SetNpcAnimation(-1, 0xB60007);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(2) < 0xFFFFFEAC) {
            SI_VAR(2) = 0xFFFFFEC0;
        } else {
            SI_VAR(2) = 0xFFFFFE98;
        }
        SetNpcSpeed(-1, 10.0);
        NpcMoveTo(-1, 185, SI_VAR(2), 0);
        NpcFacePlayer(-1, 4);
        SetNpcAnimation(-1, 0xB60001);
    } else {
        SetNpcPos(-1, 185, 250, 0xFFFFFEAC);
        SetNpcYaw(-1, 270);
    }
    loop {
        sleep 1;
        func_80240388_C8C428(SI_VAR(0));
        if (SI_VAR(0) == 32) {
            break;
        }
        if (SI_VAR(0) == 42) {
            break;
        }
    }
    DisablePlayerInput(1);
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamDistance(0, 400.0);
    SetCamPitch(0, 15.0, -7.0);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x1000FD);
    sleep 15;
    SI_MAP_VAR(10) = 0;
    spawn {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcJumpscale(-1, 2.0);
        PlaySoundAtNpc(-1, 812, 0);
        NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        SetNpcYaw(-1, 90);
        SI_MAP_VAR(10) = 1;
    }
    ContinueSpeech(-1, 0xB60008, 0xB60001, 0, 0x1000FE);
    loop {
        sleep 1;
        if (SI_MAP_VAR(10) == 1) {
            break;
        }
    }
    UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetPanTarget(0, 420, 250, 0xFFFFFEA2);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(-1, 0xB60006);
    SetNpcSpeed(-1, 5.0);
    NpcMoveTo(-1, 530, 0xFFFFFE98, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    sleep 15;
    ResetCam(0, 3.0);
    SI_SAVE_VAR(0) = 34;
    DisablePlayerInput(0);
});

Script N(script_Init_80241360) = SCRIPT({
    if (SI_SAVE_VAR(0) < 34) {
        BindNpcIdle(-1, N(script_Idle_80240E44));
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_Idle_802413B4) = SCRIPT({
0:
    sleep 1;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) > 100) {
        goto 0;
    }
    if (SI_VAR(0) < 100) {
        goto 0;
    }
    DisablePlayerInput(1);
    func_80240350_C8C3F0();
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, 285, 25, 35);
    SetCamDistance(0, 400);
    SetCamSpeed(0, 2.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SetNpcPos(-1, 285, 25, 35);
    PlaySoundAtNpc(-1, 801, 0);
    SetNpcAnimation(-1, 0x360017);
    sleep 30;
    SetNpcAnimation(-1, 0x360001);
    SpeakToPlayer(-1, 0x360004, 0x360001, 0, 0x1000FF);
    sleep 10;
    PlaySoundAtNpc(-1, 802, 0);
    SetNpcAnimation(-1, 0x360018);
    sleep 25;
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    func_8024036C_C8C40C();
    ResetCam(0, 3.0);
    SI_SAVE_FLAG(1310) = 1;
    DisablePlayerInput(0);
});

Script N(script_Init_80241618) = SCRIPT({
    if (SI_SAVE_FLAG(1310) == 0) {
        BindNpcIdle(-1, N(script_Idle_802413B4));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_8024166C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240DC0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00110709,
        .init = N(script_Init_80241360),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_8024185C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240DEC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200004,
        .init = N(script_Init_80241618),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

NpcGroupList N(npcGroupList_80241A4C) = {
    NPC_GROUP(N(npcGroup_8024166C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024185C), 0x00000000),
    {},
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 250, 250, 0xFFFFFF1F, 0, 23, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1339));
    MakeEntity(0x802E9A18, 0xFFFFFE5C, 85, 0xFFFFFFB0, 0, 0x80000000);
    MakeEntity(0x802EA7E0, 350, 310, 0xFFFFFF06, 0, 0x80000000);
});

// rodata: D_80241B00_C8DBA0

// rodata: D_80241B08_C8DBA8
