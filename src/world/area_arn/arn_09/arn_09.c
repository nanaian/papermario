#include "arn_09.h"

s32 pad_00003C[1];
Script N(script_802400A0);
s32 pad_000138[2];
Script N(script_80240140);
Script N(script_802401F4);
Script N(script_80240220);
Script N(main);
s32 pad_000398[2];
Script N(script_802403A0);
Script N(script_MakeEntities);
s32 pad_0004CC[1];
Script N(script_802404D0);
s32 pad_0005A8[2];
Script N(script_802405B0);
Script N(script_802405C0);
Script N(script_Idle_802405FC);
Script N(script_Init_80240730);
StaticNpc N(npcGroup_80240784)[1];
NpcGroupList N(npcGroupList_80240974);
s32 pad_00098C[1];
const char D_80240990_BF69F0[8]; // "arn_10"
const char D_80240998_BF69F8[8]; // "arn_08"

// text: func_80240000_BF6060

s32 pad_00003C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 125.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 200.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900D4,
};

Script N(script_802400A0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFEA {
            SetMusicTrack(0, 31, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 85, 0, 8);
        } else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
});

s32 pad_000138[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240140) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 5;
    SI_VAR(2) = 0;
    SI_VAR(4) = 1;
    SI_VAR(3) = 1;
    spawn 0x80285DFC;
    sleep 17;
    GotoMap(D_80240990_BF69F0, 0);
    sleep 100;
});

Script N(script_802401F4) = SCRIPT({
    bind N(script_80240140) to TriggerFlag_WALL_INTERACT 5;
});

Script N(script_80240220) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 0;
            SI_VAR(4) = 1;
            SI_VAR(3) = 1;
            await 0x80285E24;
            spawn N(script_802401F4);
        }
        == 1 {
            spawn N(script_802401F4);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 35;
    SetSpriteShading(0x80000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80240974));
    await N(script_MakeEntities);
    spawn N(script_80240220);
    spawn N(script_802404D0);
    spawn N(script_802400A0);
});

s32 pad_000398[] = {
    0x00000000, 0x00000000,
};

Script N(script_802403A0) = SCRIPT({
    if (SI_AREA_FLAG(1) == 1) {
        return;
    }
    SI_AREA_FLAG(1) = 1;
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(6);
    sleep 1;
    SetPlayerJumpscale(1.0);
    PlayerJump(0, 200, 0, 30);
    GotoMap(D_80240998_BF69F8, 1);
    sleep 100;
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAA30, 0, 0, 0, 0, 0x80000000);
    AssignScript(N(script_802403A0));
});

s32 pad_0004CC[] = {
    0x00000000,
};

Script N(script_802404D0) = SCRIPT({
    if (SI_AREA_FLAG(1) == 0) {
        return;
    }
    SI_AREA_FLAG(1) = 1;
    DisablePlayerInput(1);
    SetPlayerActionState(8);
    0x802D2484();
    SetPlayerActionState(6);
    SetPlayerJumpscale(1.5);
    PlayerJump(50, 0, 0, 16);
    SetPlayerAnimation(0x10002);
    SI_AREA_FLAG(1) = 0;
    DisablePlayerInput(0);
});

s32 pad_0005A8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802405B0) = SCRIPT({

});

Script N(script_802405C0) = SCRIPT({

});

NpcSettings N(npcSettings_802405D0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_802405B0),
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802405C0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_Idle_802405FC) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x6C0013);
    SetNpcJumpscale(-1, 2.5);
    PlaySoundAtNpc(-1, 8392, 0);
    NpcJump0(-1, 0, 25, 0xFFFFFFF6, 6);
    PlaySoundAtNpc(-1, 8326, 0);
    func_80240000_BF6060();
    SetNpcAnimation(-1, 0x6C0013);
    SetNpcJumpscale(-1, 2.5);
    PlaySoundAtNpc(-1, 8392, 0);
    NpcJump0(-1, 0, 200, 0, 15);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFEE;
});

Script N(script_Init_80240730) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFED) {
        RemoveNpc(-1);
    } else {
        BindNpcIdle(-1, N(script_Idle_802405FC));
    }
});

StaticNpc N(npcGroup_80240784)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802405D0),
        .pos = { 0.0, 25.0, 0.0 },
        .flags = 0x00000D05,
        .init = N(script_Init_80240730),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001,
        },
    },
};

NpcGroupList N(npcGroupList_80240974) = {
    NPC_GROUP(N(npcGroup_80240784), 0x00000000),
    {},
};

s32 pad_00098C[] = {
    0x00000000,
};

// rodata: D_80240990_BF69F0

// rodata: D_80240998_BF69F8
