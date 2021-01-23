#include "kkj_01.h"

Script N(script_80240F50);
s32 pad_000FCC[1];
Script N(script_ExitDoubleDoor_80240FD0);
Script N(script_ExitDoubleDoor_80241084);
Script N(script_ExitSingleDoor_80241138);
Script N(script_802411EC);
Script N(script_80241234);
Script N(script_EnterSingleDoor_80241320);
Script N(main);
s32 pad_00166C[1];
Script N(script_NpcAI_802416A0);
s32 unk_missing_802416EC[11];
Script N(script_NpcAI_80241748);
s32 unk_missing_80241794[11];
s32 unk_missing_802417EC[11];
Script N(script_Idle_802418C8);
Script N(script_Idle_802419CC);
Script N(script_Idle_80241AD0);
Script N(script_Idle_80241B68);
Script N(script_Idle_80241BF4);
Script N(script_Interact_80241CB0);
Script N(script_Interact_80241CE0);
Script N(script_Interact_80241D10);
Script N(script_Interact_80241D40);
Script N(script_Interact_80241D70);
Script N(script_Interact_80241DA0);
Script N(script_Interact_80241DD0);
Script N(script_Interact_80242048);
Script N(script_Interact_802420AC);
Script N(script_Interact_80242138);
Script N(script_Interact_8024219C);
Script N(script_Init_80242228);
Script N(script_Init_80242260);
Script N(script_Init_80242298);
Script N(script_Init_802422BC);
Script N(script_Init_802422E0);
Script N(script_Init_80242304);
Script N(script_Init_80242328);
Script N(script_Init_802423CC);
Script N(script_Init_80242404);
Script N(script_Init_80242428);
Script N(script_Init_80242460);
StaticNpc N(npcGroup_80242484)[11];
NpcGroupList N(npcGroupList_802439D4);
s32 pad_0039EC[1];
const char D_802439F0_AC8B60[8]; // "kkj_00"
const char D_802439F8_AC8B68[8]; // "kkj_02"
const char D_80243A00_AC8B70[8]; // "kkj_14"
s32 pad_003A08[2];

// text: func_80240000_AC5170

// text: func_80240158_AC52C8

// text: N(UnkNpcAIFunc1)

// text: func_802404C0_AC5630

// text: func_8024067C_AC57EC

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024081C_AC598C

// text: func_8024094C_AC5ABC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240AD4_AC5C44

// text: func_80240B94_AC5D04

EntryList N(entryList) = {
    { 0.0f, 0.0f, 480.0f, 0.0f },
    { 0.0f, 100.0f, -360.0f, 180.0f },
    { -325.0f, 0.0f, 360.0f, 45.0f },
    { -480.0f, 0.0f, 50.0f, 90.0f },
    { 0.0f, 0.0f, -255.0f, 180.0f },
    { 480.0f, 0.0f, 50.0f, 270.0f },
    { 300.0f, 0.0f, 380.0f, 315.0f },
    { 354.0f, 0.0f, 294.0f, 117.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_80240F50) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetMusicTrack(0, 63, 1, 7);
        sleep 3;
    }
    SetMusicTrack(0, 63, 1, 8);
});

s32 pad_000FCC[] = {
    0x00000000,
};

Script N(script_ExitDoubleDoor_80240FD0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(2);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 7;
    SI_VAR(3) = 5;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802439F0_AC8B60, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241084) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(2);
    SI_VAR(0) = 1;
    SI_VAR(1) = 5;
    SI_VAR(2) = 10;
    SI_VAR(3) = 12;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802439F8_AC8B68, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_80241138) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 4;
    SI_VAR(1) = 10;
    SI_VAR(2) = 19;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80243A00_AC8B70, 0);
    sleep 100;
});

Script N(script_802411EC) = SCRIPT({
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0163, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_80241234) = SCRIPT({
    if (SI_AREA_FLAG(1) == 1) {
        bind N(script_ExitSingleDoor_80241138) to TriggerFlag_WALL_INTERACT 10;
    }
    bind N(script_802411EC) to TriggerFlag_WALL_INTERACT 30;
    bind N(script_802411EC) to TriggerFlag_WALL_INTERACT 15;
    bind N(script_802411EC) to TriggerFlag_WALL_INTERACT 20;
    bind N(script_802411EC) to TriggerFlag_WALL_INTERACT 25;
    bind N(script_ExitDoubleDoor_80240FD0) to TriggerFlag_WALL_INTERACT 0;
    bind N(script_ExitDoubleDoor_80241084) to TriggerFlag_WALL_INTERACT 5;
});

Script N(script_EnterSingleDoor_80241320) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(2);
            SI_VAR(2) = 7;
            SI_VAR(3) = 5;
            await EnterDoubleDoor;
        }
        == 1 {
            UseDoorSounds(2);
            SI_VAR(2) = 10;
            SI_VAR(3) = 12;
            await EnterDoubleDoor;
        }
        == 2 {
            SI_VAR(2) = 15;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 3 {
            SI_VAR(2) = 17;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 4 {
            SI_VAR(2) = 19;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 5 {
            SI_VAR(2) = 21;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 6 {
            SI_VAR(2) = 23;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
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
    MakeNpcs(0, N(npcGroupList_802439D4));
    if (SI_SAVE_VAR(0) != 0xFFFFFF80) {
        EnableModel(173, 0);
        ModifyColliderFlags(0, 94, 0x7FFFFE00);
    } else {
        EnableModel(1, 0);
        EnableModel(2, 0);
        EnableModel(3, 0);
    }
    spawn N(script_80240F50);
    spawn N(script_80241234);
    spawn N(script_EnterSingleDoor_80241320);
    sleep 1;
});

s32 pad_00166C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80241670) = {
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

Script N(script_NpcAI_802416A0) = SCRIPT({
    DoBasicAI(N(aISettings_80241670));
});

NpcSettings N(npcSettings_802416C0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802416A0),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0x10,
};

s32 unk_missing_802416EC[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, N(script_NpcAI_802416A0), 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630010,
};

NpcAISettings N(aISettings_80241718) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
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

Script N(script_NpcAI_80241748) = SCRIPT({
    func_80240B94_AC5D04(N(aISettings_80241718));
});

NpcSettings N(npcSettings_80241768) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241748),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0x10,
};

s32 unk_missing_80241794[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, N(script_NpcAI_80241748), 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630010,
};

NpcSettings N(npcSettings_802417C0) = {
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

s32 unk_missing_802417EC[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80241818) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x17,
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

NpcSettings N(npcSettings_80241844) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x16,
    .radius = 0x19,
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

NpcSettings N(npcSettings_80241870) = {
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

NpcSettings N(npcSettings_8024189C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
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
    .unk_2A = 0x10,
};

Script N(script_Idle_802418C8) = SCRIPT({
    loop {
        GetSelfVar(1, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SetNpcAnimation(7, 0x930304);
            SetSelfVar(1, 1);
        } else {
            SetNpcAnimation(8, 0x940005);
            SetSelfVar(1, 0);
        }
        RandInt(60, SI_VAR(0));
        SI_VAR(0) += 30;
        sleep SI_VAR(0);
        SetNpcAnimation(7, 0x930301);
        SetNpcAnimation(8, 0x940001);
        sleep 10;
    }
    break;
});

Script N(script_Idle_802419CC) = SCRIPT({
    loop {
        GetSelfVar(1, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SetNpcAnimation(9, 0xCE0004);
            SetSelfVar(1, 1);
        } else {
            SetNpcAnimation(10, 0x8F0007);
            SetSelfVar(1, 0);
        }
        RandInt(60, SI_VAR(0));
        SI_VAR(0) += 30;
        sleep SI_VAR(0);
        SetNpcAnimation(9, 0xCE0001);
        SetNpcAnimation(10, 0x8F0002);
        sleep 10;
    }
    break;
});

Script N(script_Idle_80241AD0) = SCRIPT({
    sleep 30;
    loop {
        sleep 150;
        loop 2 {
            InterpNpcYaw(-1, 90, 7);
            sleep 20;
            InterpNpcYaw(-1, 270, 7);
            sleep 20;
        }
    }
});

Script N(script_Idle_80241B68) = SCRIPT({
    loop {
        sleep 150;
        loop 2 {
            InterpNpcYaw(-1, 90, 7);
            sleep 15;
            InterpNpcYaw(-1, 270, 7);
            sleep 15;
        }
    }
});

Script N(script_Idle_80241BF4) = SCRIPT({
    if (SI_AREA_FLAG(2) == 1) {
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 4) {
        return;
    }
    0x802D2508();
    DisablePlayerInput(1);
    SpeakToPlayer(-1, 0x870304, 0x870301, 16, 66);
    SI_AREA_FLAG(2) = 1;
    DisablePlayerInput(0);
});

Script N(script_Interact_80241CB0) = SCRIPT({
    SpeakToPlayer(-1, 0x890004, 0x890001, 0, 51);
});

Script N(script_Interact_80241CE0) = SCRIPT({
    SpeakToPlayer(-1, 0x830204, 0x830201, 16, 56);
});

Script N(script_Interact_80241D10) = SCRIPT({
    SpeakToPlayer(-1, 0x830104, 0x830101, 16, 57);
});

Script N(script_Interact_80241D40) = SCRIPT({
    SpeakToPlayer(-1, 0x830004, 0x830001, 16, 58);
});

Script N(script_Interact_80241D70) = SCRIPT({
    SpeakToPlayer(-1, 0x840004, 0x840001, 16, 59);
});

Script N(script_Interact_80241DA0) = SCRIPT({
    SpeakToPlayer(-1, 0x870004, 0x870001, 16, 60);
});

Script N(script_Interact_80241DD0) = SCRIPT({
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SpeakToPlayer(-1, 0x870304, 0x870301, 16, 61);
        }
        == 1 {
            SpeakToPlayer(-1, 0x870304, 0x870301, 16, 62);
        }
        2, 3 {
            SpeakToPlayer(-1, 0x870304, 0x870301, 16, 63);
        }
        == 4 {
            SpeakToPlayer(-1, 0x870304, 0x870301, 16, 64);
            sleep 10;
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcAnimation(6, 0x870302);
            if (SI_VAR(0) > 0) {
                SI_VAR(3) = 0xFFFFFFCE;
            } else {
                SI_VAR(3) = 50;
            }
            SetNpcFlagBits(-1, 256, 1);
            SetNpcSpeed(-1, 2.0);
            NpcMoveTo(-1, SI_VAR(3), 0xFFFFFF0B, 0);
            SetNpcFlagBits(-1, 256, 0);
            SetNpcAnimation(6, 0x870301);
            InterpNpcYaw(-1, 180, 5);
            SI_AREA_FLAG(1) = 1;
            bind N(script_ExitSingleDoor_80241138) to TriggerFlag_WALL_INTERACT 10;
        }
        else {
            SpeakToPlayer(-1, 0x870304, 0x870301, 16, 65);
        }
    }
    SI_VAR(0) += 1;
    SetSelfVar(0, SI_VAR(0));
});

Script N(script_Interact_80242048) = SCRIPT({
    SetNpcAnimation(8, 0x940001);
    SetNpcAnimation(7, 0x930301);
    sleep 10;
    SpeakToPlayer(-1, 0x930304, 0x930301, 16, 52);
});

Script N(script_Interact_802420AC) = SCRIPT({
    EnableNpcAI(7, 0);
    SetNpcAnimation(8, 0x940001);
    SetNpcAnimation(7, 0x930301);
    sleep 10;
    SpeakToPlayer(-1, 0x940005, 0x940001, 16, 53);
    EnableNpcAI(7, 1);
});

Script N(script_Interact_80242138) = SCRIPT({
    SetNpcAnimation(9, 0xCE0001);
    SetNpcAnimation(10, 0x8F0002);
    sleep 10;
    SpeakToPlayer(-1, 0xCE0004, 0xCE0001, 16, 54);
});

Script N(script_Interact_8024219C) = SCRIPT({
    EnableNpcAI(9, 0);
    SetNpcAnimation(9, 0xCE0001);
    SetNpcAnimation(10, 0x8F0002);
    sleep 10;
    SpeakToPlayer(-1, 0x8F0007, 0x8F0002, 16, 55);
    EnableNpcAI(9, 1);
});

Script N(script_Init_80242228) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241AD0));
    BindNpcInteract(-1, N(script_Interact_80241CB0));
});

Script N(script_Init_80242260) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241B68));
    BindNpcInteract(-1, N(script_Interact_80241CE0));
});

Script N(script_Init_80242298) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241D10));
});

Script N(script_Init_802422BC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241D40));
});

Script N(script_Init_802422E0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241D70));
});

Script N(script_Init_80242304) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241DA0));
});

Script N(script_Init_80242328) = SCRIPT({
    if (SI_AREA_FLAG(1) == 1) {
        SetNpcPos(-1, 0xFFFFFFCE, 0, 0xFFFFFF0B);
        SetSelfVar(0, 5);
    } else {
        SetNpcPos(-1, 0, 0, 0xFFFFFEFC);
    }
    BindNpcIdle(-1, N(script_Idle_80241BF4));
    BindNpcInteract(-1, N(script_Interact_80241DD0));
});

Script N(script_Init_802423CC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802418C8));
    BindNpcInteract(-1, N(script_Interact_80242048));
});

Script N(script_Init_80242404) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802420AC));
});

Script N(script_Init_80242428) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802419CC));
    BindNpcInteract(-1, N(script_Interact_80242138));
});

Script N(script_Init_80242460) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024219C));
});

StaticNpc N(npcGroup_80242484)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, 0.0, 350.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80242228),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802417C0),
        .pos = { 100.0, 0.0, 175.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80242260),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00830201, 0x00830202, 0x00830203, 0x00830203, 0x00830201, 0x00830201, 0x00830206, 0x00830206, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802416C0),
        .pos = { 200.0, 0.0, 110.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80242298),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x000000C8, 0x00000000, 0x0000006E, 0x00000046, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000C8, 0x00000000, 0x0000006E, 0x00000046, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00830101, 0x00830102, 0x00830103, 0x00830103, 0x00830101, 0x00830101, 0x00830106, 0x00830106, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241768),
        .pos = { -250.0, 0.0, 225.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_802422BC),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0xFFFFFF06, 0x00000000, 0x000000E1, 0x0000012C, 0x00000000, 0xFFFFFFCE, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFF06, 0x00000000, 0x000000E1, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802416C0),
        .pos = { -170.0, 0.0, 100.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_802422E0),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFF56, 0x00000000, 0x00000064, 0x00000046, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF56, 0x00000000, 0x00000064, 0x00000046, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00840001, 0x00840002, 0x00840003, 0x00840003, 0x00840001, 0x00840001, 0x00840006, 0x00840006, 0x00840003, 0x00840003, 0x00840003, 0x00840003, 0x00840003, 0x00840003, 0x00840003, 0x00840003,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802417C0),
        .pos = { -55.0, 100.0, -360.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80242304),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802417C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80242328),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80241818),
        .pos = { 170.0, 0.0, 345.0 },
        .flags = 0x00400D01,
        .init = N(script_Init_802423CC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00930301, 0x00930302, 0x00930303, 0x00930303, 0x00930301, 0x00930301, 0x00930300, 0x00930300, 0x00930301, 0x00930301, 0x00930301, 0x00930301, 0x00930301, 0x00930301, 0x00930301, 0x00930301,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80241844),
        .pos = { 200.0, 0.0, 325.0 },
        .flags = 0x00400D01,
        .init = N(script_Init_80242404),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00940001, 0x00940004, 0x00940004, 0x00940004, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001, 0x00940001,
        },
    },
    {
        .id = 9,
        .settings = &N(npcSettings_80241870),
        .pos = { -150.0, 0.0, 0.0 },
        .flags = 0x00400C09,
        .init = N(script_Init_80242428),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00CE0001, 0x00CE0002, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001,
        },
    },
    {
        .id = 10,
        .settings = &N(npcSettings_8024189C),
        .pos = { -120.0, 0.0, -15.0 },
        .flags = 0x00400909,
        .init = N(script_Init_80242460),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x008F0002, 0x008F0005, 0x008F0006, 0x008F0006, 0x008F0002, 0x008F0002, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000, 0x008F0000,
        },
    },
};

NpcGroupList N(npcGroupList_802439D4) = {
    NPC_GROUP(N(npcGroup_80242484), 0x00000000),
    {},
};

s32 pad_0039EC[] = {
    0x00000000,
};

// rodata: D_802439F0_AC8B60

// rodata: D_802439F8_AC8B68

// rodata: D_80243A00_AC8B70

s32 pad_003A08[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243A10_AC8B80

// rodata: D_80243A18_AC8B88

// rodata: jtbl_80243A20_AC8B90
