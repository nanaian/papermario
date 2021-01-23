#include "arn_12.h"

Script N(script_80240060);
s32 pad_0000F8[2];
Script N(script_ExitSingleDoor_80240100);
Script N(script_ExitSingleDoor_802401A4);
Script N(script_80240248);
Script N(script_EnterSingleDoor_80240290);
Script N(main);
s32 pad_000418[2];
Script N(script_80240420);
Script N(script_80240430);
Script N(script_NpcAI_8024049C);
Script N(script_Idle_802404E8);
Script N(script_Defeat_802406E4);
Script N(script_Init_80240710);
Script N(script_Init_8024075C);
StaticNpc N(npcGroup_802407DC)[1];
StaticNpc N(npcGroup_802409CC)[1];
NpcGroupList N(npcGroupList_80240BBC);
Script N(script_80240BE0);
Script N(script_MakeEntities);
s32 pad_000C6C[1];
const char D_80240C70_BF9400[8]; // "arn_10"
const char D_80240C78_BF9408[8]; // "arn_13"

EntryList N(entryList) = {
    { -231.0f, 0.0f, 5.0f, 90.0f },
    { 231.0f, 0.0f, 5.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900D6,
};

Script N(script_80240060) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFEA {
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

s32 pad_0000F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80240100) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 0;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80240C70_BF9400, 1);
    sleep 100;
});

Script N(script_ExitSingleDoor_802401A4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 2;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80240C78_BF9408, 0);
    sleep 100;
});

Script N(script_80240248) = SCRIPT({
    bind N(script_ExitSingleDoor_80240100) to TriggerFlag_WALL_INTERACT 2;
    bind N(script_ExitSingleDoor_802401A4) to TriggerFlag_WALL_INTERACT 7;
});

Script N(script_EnterSingleDoor_80240290) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 0;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
            spawn N(script_80240248);
        }
        == 1 {
            SI_VAR(2) = 2;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
            spawn N(script_80240248);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 35;
    SetSpriteShading(0x80003);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80240BBC));
    await N(script_MakeEntities);
    spawn N(script_EnterSingleDoor_80240290);
    spawn N(script_80240060);
});

s32 pad_000418[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240420) = SCRIPT({

});

Script N(script_80240430) = SCRIPT({

});

NpcSettings N(npcSettings_80240440) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_80240420),
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80240430),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_8024046C) = {
    .moveSpeed = 1.7999999523162842,
    .moveTime = 0x28,
    .waitTime = 0xF,
    .alertRadius = 150.0,
    .unk_10 = 0.0,
    .unk_14 = 0x2,
    .chaseSpeed = 3.299999952316284,
    .unk_1C = 0x46,
    .unk_20 = 0x1,
    .chaseRadius = 180.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024049C) = SCRIPT({
    DoBasicAI(N(aISettings_8024046C));
});

NpcSettings N(npcSettings_802404BC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024049C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0,
};

Script N(script_Idle_802404E8) = SCRIPT({
    SetNpcAnimation(-1, 0x6C0013);
    SetNpcJumpscale(-1, 3.0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 30;
    PlaySoundAtNpc(-1, 8392, 0);
    NpcJump0(-1, SI_VAR(0), 0, SI_VAR(2), 8);
    SetNpcAnimation(-1, 0x6C0014);
    sleep 1;
    SetNpcAnimation(-1, 0x6C0013);
    SI_VAR(0) -= 80;
    SetNpcJumpscale(-1, 2.5);
    PlaySoundAtNpc(-1, 8392, 0);
    NpcJump0(-1, SI_VAR(0), 0, SI_VAR(2), 12);
    SetNpcAnimation(-1, 0x6C0014);
    sleep 1;
    SetNpcAnimation(-1, 0x6C0013);
    SI_VAR(0) -= 80;
    SetNpcJumpscale(-1, 2.5);
    PlaySoundAtNpc(-1, 8392, 0);
    NpcJump0(-1, SI_VAR(0), 0, SI_VAR(2), 12);
    EnableNpcShadow(-1, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFEC;
});

Script N(script_Defeat_802406E4) = SCRIPT({
    SI_SAVE_FLAG(1017) = 1;
    DoNpcDefeat();
});

Script N(script_Init_80240710) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802404E8));
    if (SI_SAVE_VAR(0) != 0xFFFFFFEB) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_8024075C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF4) {
        if (SI_SAVE_FLAG(1017) == 1) {
            RemoveNpc(-1);
            return;
        }
        BindNpcDefeat(-1, N(script_Defeat_802406E4));
    }
    BindNpcDefeat(-1, N(script_Defeat_802406E4));
});

StaticNpc N(npcGroup_802407DC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240440),
        .pos = { 80.0, 50.0, 0.0 },
        .flags = 0x00000D05,
        .init = N(script_Init_80240710),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001,
        },
    },
};

StaticNpc N(npcGroup_802409CC)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802404BC),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_8024075C),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DRIED_SHROOM, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00260201, 0x00260202, 0x00260203, 0x00260203, 0x00260201, 0x00260201, 0x00260205, 0x00260205, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203,
        },
    },
};

NpcGroupList N(npcGroupList_80240BBC) = {
    NPC_GROUP(N(npcGroup_802407DC), 0x00000000),
    NPC_GROUP(N(npcGroup_802409CC), 0x0E010005),
    {},
};

Script N(script_80240BE0) = SCRIPT({
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0183, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAFDC, 200, 0, 0xFFFFFFD8, 0, 0x80000000);
    AssignScript(N(script_80240BE0));
});

s32 pad_000C6C[] = {
    0x00000000,
};

// rodata: D_80240C70_BF9400

// rodata: D_80240C78_BF9408
