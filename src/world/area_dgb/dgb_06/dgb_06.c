#include "dgb_06.h"

s32 pad_0002BC[1];
Script N(script_80240320);
s32 pad_0003B8[2];
Script N(script_ExitSingleDoor_802403C0);
Script N(script_EnterSingleDoor_80240474);
Script N(main);
s32 N(unk_80240620)[1];
Script N(script_80240624);
Script N(script_8024068C);
Script N(script_8024076C);
Script N(script_MakeEntities);
s32 pad_000834[3];
Script N(script_Interact_8024086C);
Script N(script_Init_802408FC);
StaticNpc N(npcGroup_80240954)[1];
NpcGroupList N(npcGroupList_80240B44);
s32 pad_000B5C[1];
const char D_80240B60_C3DBE0[8]; // "dgb_04"
s32 pad_000B68[2];

// text: func_80240000_C3D080

// text: func_802400B4_C3D134

// text: func_80240118_C3D198

// text: func_80240268_C3D2E8

s32 pad_0002BC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -575.0f, 0.0f, 175.0f, 90.0f },
    { -150.0f, 100.0f, -250.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C6,
};

Script N(script_80240320) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_0003B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_802403C0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 12;
    SI_VAR(2) = 5;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80240B60_C3DBE0, 1);
    sleep 100;
});

Script N(script_EnterSingleDoor_80240474) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 5;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(0x90000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80240B44));
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(1047) == 0) {
        EnableGroup(28, 0);
    } else {
        EnableGroup(25, 0);
    }
    bind N(script_ExitSingleDoor_802403C0) to TriggerFlag_WALL_INTERACT 12;
    spawn N(script_80240320);
    spawn N(script_EnterSingleDoor_80240474);
});

s32 N(unk_80240620)[] = {
    0x00000000,
};

Script N(script_80240624) = SCRIPT({
    group 0;
    func_802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    func_802D5830(0);
    return;
});

Script N(script_8024068C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80240624);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_8024076C) = SCRIPT({
    SI_VAR(10) = 19;
    SI_VAR(11) = 1;
    SI_SAVE_FLAG(1048) = 1;
    await N(script_8024068C);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAE30, 0xFFFFFED4, 50, 0xFFFFFF38, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1048));
    AssignScript(N(script_8024076C));
    MakeEntity(D_802EA7E0, 0xFFFFFF83, 60, 175, 0, 0x80000000);
});

s32 pad_000834[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240840) = {
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

Script N(script_Interact_8024086C) = SCRIPT({
    if (SI_AREA_FLAG(4) == 0) {
        SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00F0);
        SI_AREA_FLAG(4) = 1;
    } else {
        SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00F1);
        SI_AREA_FLAG(4) = 0;
    }
});

Script N(script_Init_802408FC) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFE6) {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
    BindNpcInteract(-1, N(script_Interact_8024086C));
});

StaticNpc N(npcGroup_80240954)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240840),
        .pos = { -300.0, 10.0, 150.0 },
        .flags = 0x00000401,
        .init = N(script_Init_802408FC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00B3,
    },
};

NpcGroupList N(npcGroupList_80240B44) = {
    NPC_GROUP(N(npcGroup_80240954), 0x00000000),
    {},
};

s32 pad_000B5C[] = {
    0x00000000,
};

// rodata: D_80240B60_C3DBE0

s32 pad_000B68[] = {
    0x00000000, 0x00000000,
};
