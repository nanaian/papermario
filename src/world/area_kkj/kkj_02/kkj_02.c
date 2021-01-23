#include "kkj_02.h"

Script N(script_80240070);
s32 pad_00011C[1];
Script N(script_ExitDoubleDoor_80240120);
Script N(script_ExitDoubleDoor_802401C4);
Script N(script_80240268);
Script N(script_EnterDoubleDoor_802402B0);
Script N(main);
s32 pad_00043C[1];
Script N(script_NpcAI_80240470);
s32 unk_missing_802404BC[11];
s32 unk_missing_80240514[11];
Script N(script_Interact_80240540);
Script N(script_Interact_80240570);
Script N(script_Init_802405A0);
Script N(script_Init_802405C4);
StaticNpc N(npcGroup_802405E8)[2];
NpcGroupList N(npcGroupList_802409C8);
const char D_802409E0_AC9700[8]; // "kkj_01"
const char D_802409E8_AC9708[8]; // "kkj_03"

EntryList N(entryList) = {
    { -75.0f, 0.0f, 0.0f, 90.0f },
    { 1175.0f, 110.0f, 0.0f, 270.0f },
    { 354.0f, 0.0f, 294.0f, 117.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_80240070) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetMusicTrack(0, 63, 1, 7);
        }
        == 1 {
            SetMusicTrack(0, 63, 1, 5);
        }
    }
    sleep 3;
    SetMusicTrack(0, 63, 1, 6);
});

s32 pad_00011C[] = {
    0x00000000,
};

Script N(script_ExitDoubleDoor_80240120) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 1;
    SI_VAR(2) = 3;
    SI_VAR(3) = 5;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802409E0_AC9700, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802401C4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 4;
    SI_VAR(2) = 10;
    SI_VAR(3) = 8;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802409E8_AC9708, 0);
    sleep 100;
});

Script N(script_80240268) = SCRIPT({
    bind N(script_ExitDoubleDoor_80240120) to TriggerFlag_WALL_INTERACT 1;
    bind N(script_ExitDoubleDoor_802401C4) to TriggerFlag_WALL_INTERACT 4;
});

Script N(script_EnterDoubleDoor_802402B0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 3;
            SI_VAR(3) = 5;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 10;
            SI_VAR(3) = 8;
            await EnterDoubleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 25;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_802409C8));
    spawn N(script_80240070);
    UseDoorSounds(2);
    spawn N(script_80240268);
    spawn N(script_EnterDoubleDoor_802402B0);
    sleep 1;
});

s32 pad_00043C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80240440) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 0.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240470) = SCRIPT({
    DoBasicAI(N(aISettings_80240440));
});

NpcSettings N(npcSettings_80240490) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240470),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0x10,
};

s32 unk_missing_802404BC[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, N(script_NpcAI_80240470), 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630010,
};

NpcSettings N(npcSettings_802404E8) = {
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

s32 unk_missing_80240514[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Interact_80240540) = SCRIPT({
    SpeakToPlayer(-1, 0x830004, 0x830001, 0, 73);
});

Script N(script_Interact_80240570) = SCRIPT({
    SpeakToPlayer(-1, 0x870004, 0x870001, 0, 74);
});

Script N(script_Init_802405A0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80240540));
});

Script N(script_Init_802405C4) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80240570));
});

StaticNpc N(npcGroup_802405E8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240490),
        .pos = { 0.0, 0.0, -100.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_802405A0),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0xFFFFFF9C, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9C, 0x00000032, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802404E8),
        .pos = { 1175.0, 110.0, 60.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_802405C4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001,
        },
    },
};

NpcGroupList N(npcGroupList_802409C8) = {
    NPC_GROUP(N(npcGroup_802405E8), 0x00000000),
    {},
};

// rodata: D_802409E0_AC9700

// rodata: D_802409E8_AC9708
