#include "obk_05.h"

s32 pad_000764[3];
s32 pad_0009DC[1];
Script N(script_80240A30);
s32 pad_000A98[2];
Script N(script_80240AA0);
Script N(script_80240B1C);
Script N(script_80240BD0);
Script N(script_80240C84);
Script N(main);
Script N(script_80240F10);
Script N(script_80240F2C);
s32 pad_000F84[3];
Script N(script_80240F90);
s32 pad_000FDC[1];
s32 N(shortTable_8024100C)[2];
Script N(script_Idle_80241014);
Script N(script_Init_802410C0);
Script N(script_Init_802410E4);
StaticNpc N(npcGroup_80241108)[2];
NpcGroupList N(npcGroupList_802414E8);
Script N(script_80241500);
Script N(script_MakeEntities);
s32 pad_00161C[1];
const char D_80241620_BCE680[8]; // "obk_01"
const char D_80241628_BCE688[8]; // "obk_06"

// text: func_80240000_BCD060

// text: func_8024001C_BCD07C

// text: func_80240038_BCD098

// text: func_80240050_BCD0B0

s32 pad_000764[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240770_BCD7D0

// text: func_802407A0_BCD800

// text: func_802407AC_BCD80C

// text: func_80240934_BCD994

s32 pad_0009DC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -68.0f, 0.0f, 235.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900B6,
};

Script N(script_80240A30) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

s32 pad_000A98[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240AA0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 49;
            SI_VAR(4) = 50;
            SI_VAR(3) = 1;
            await 0x80285E24;
        }
    }
});

Script N(script_80240B1C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 12;
    SI_VAR(2) = 49;
    SI_VAR(4) = 50;
    SI_VAR(3) = 1;
    spawn 0x80285DFC;
    sleep 17;
    GotoMap(D_80241620_BCE680, 2);
    sleep 100;
});

Script N(script_80240BD0) = SCRIPT({
    SetTexPanner(33, 0);
    SetTexPanner(34, 0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    loop {
        SI_VAR(0) += 300;
        SI_VAR(1) += 100;
        SetTexPanOffset(0, 0, SI_VAR(0), SI_VAR(1));
        sleep 1;
    }
});

Script N(script_80240C84) = SCRIPT({
    loop {
        func_80240038_BCD098();
        DisablePlayerInput(1);
        sleep 1;
        if (SI_MAP_FLAG(10) == 0) {
            PlaySoundAtPlayer(8322, 0);
            Disable8bitMario(0);
            SetMusicTrack(0, 65, 1, 8);
            SI_MAP_FLAG(10) = 1;
        } else {
            PlaySoundAtPlayer(8321, 0);
            Disable8bitMario(1);
            spawn N(script_80240A30);
            SI_MAP_FLAG(10) = 0;
        }
        func_8024001C_BCD07C();
        SetPlayerJumpscale(1.0);
        PlayerJump(0xFFFFFF97, 30, 0xFFFFFFC9, 30);
        sleep 1;
        func_80240000_BCD060();
        DisablePlayerInput(0);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_802414E8));
    await N(script_MakeEntities);
    spawn N(script_80240F10);
    spawn N(script_80240F90);
    spawn N(script_80240BD0);
    bind N(script_80240B1C) to TriggerFlag_WALL_INTERACT 12;
    spawn N(script_80240AA0);
    ModifyColliderFlags(0, 17, 0x7FFFFE00);
    spawn N(script_80240A30);
    spawn N(script_80240C84);
});

Script N(script_80240F10) = SCRIPT({
    spawn N(script_80240F2C);
});

Script N(script_80240F2C) = SCRIPT({
    ParentColliderToModel(8, 25);
    ParentColliderToModel(9, 27);
    ParentColliderToModel(10, 27);
    func_80240050_BCD0B0();
});

s32 pad_000F84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240F90) = SCRIPT({
    func_80240770_BCD7D0();
    DisablePlayerPhysics(1);
    GotoMap(D_80241628_BCE688, 0);
    sleep 100;
});

s32 pad_000FDC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240FE0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
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

s32 N(shortTable_8024100C)[] = {
    0x0032003C, 0x00C800F0,
};

Script N(script_Idle_80241014) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    func_802407A0_BCD800();
    loop {
        func_802407AC_BCD80C();
        func_80240934_BCD994();
        0x802CFD30(-1, 7, SI_VAR(0), 0, 0, 0);
        0x802D0244(-1, 17);
        sleep 1;
    }
});

Script N(script_Init_802410C0) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241014));
});

Script N(script_Init_802410E4) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241014));
});

StaticNpc N(npcGroup_80241108)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240FE0),
        .pos = { 523.0, -139.0, 193.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802410C0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240FE0),
        .pos = { 473.0, -122.0, 247.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802410E4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

NpcGroupList N(npcGroupList_802414E8) = {
    NPC_GROUP(N(npcGroup_80241108), 0x00000000),
    {},
};

Script N(script_80241500) = SCRIPT({
    SI_SAVE_FLAG(973) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(973) == 0) {
        MakeEntity(0x802BCE84, 0, 0, 0, 0, 0x80000000);
        AssignScript(N(script_80241500));
    }
    MakeEntity(0x802EAED4, 200, 0, 0xFFFFFF9C, 0, 148, 0x80000000);
    MakeEntity(0x802EAED4, 200, 30, 0xFFFFFF9C, 0, -1, 0x80000000);
    MakeEntity(0x802EAED4, 165, 0, 0xFFFFFF9C, 0, 148, 0x80000000);
    MakeEntity(0x802EAED4, 0xFFFFFF97, 0, 0xFFFFFFC9, 0, -1, 0x80000000);
});

s32 pad_00161C[] = {
    0x00000000,
};

// rodata: D_80241620_BCE680

// rodata: D_80241628_BCE688
