#include "dgb_09.h"

s32 pad_0037F4[3];
Script N(script_80243880);
s32 pad_003918[2];
Script N(script_ExitDoubleDoor_80243920);
Script N(script_ExitDoubleDoor_802439D4);
Script N(script_ExitSingleDoor_80243A88);
Script N(script_ExitWalk_80243B3C);
Script N(script_80243B98);
Script N(script_EnterWalk_80243BC4);
Script N(main);
s32 pad_003E4C[1];
Script N(script_80243E60);
Script N(script_80243F6C);
s32 pad_003FF8[2];
Script N(script_80244000);
s32 N(extraAnimationList_802440BC)[10];
s32 N(extraAnimationList_802440E4)[2];
Script N(script_NpcAI_8024411C);
Script N(script_NpcAI_802441E8);
Script N(script_NpcAI_80244284);
f32 N(floatTable_80244358)[6];
Script N(script_80244370);
Script N(script_NpcAI_802443DC);
Script N(script_80244804);
Script N(script_80244890);
StaticNpc N(npcGroup_80244920)[2];
Script N(script_Init_80244D00);
StaticNpc N(npcGroup_80244D6C)[2];
StaticNpc N(npcGroup_8024514C)[1];
NpcGroupList N(npcGroupList_8024533C);
s32 pad_00536C[1];
const char D_80245370_C4BF50[8]; // "dgb_03"
const char D_80245378_C4BF58[8]; // "dgb_01"
const char D_80245380_C4BF60[8]; // "dgb_12"
const char D_80245388_C4BF68[8]; // "dgb_10"
s32 pad_005714[1];
const char D_802457A8_C4C388[8]; // "dgb_00"

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240208_C46DE8

// text: func_802403BC_C46F9C

// text: func_8024061C_C471FC

// text: func_802408D0_C474B0

// text: func_80240958_C47538

// text: func_80240C10_C477F0

// text: func_80240C74_C47854

// text: func_80240D1C_C478FC

// text: func_80240E54_C47A34

// text: func_80240F00_C47AE0

// text: func_80241078_C47C58

// text: func_802410D4_C47CB4

// text: func_80241424_C48004

// text: func_802415D4_C481B4

// text: N(UnkNpcAIFunc1)

// text: func_80241CBC_C4889C

// text: func_80242000_C48BE0

// text: func_80242078_C48C58

// text: func_802420E4_C48CC4

// text: N(UnkNpcAIFunc3)

// text: func_8024227C_C48E5C

// text: func_8024260C_C491EC

// text: func_80242730_C49310

// text: func_8024291C_C494FC

// text: func_80242A74_C49654

// text: func_80242B78_C49758

// text: func_80242C1C_C497FC

// text: func_80242EB8_C49A98

// text: func_80242F70_C49B50

// text: func_802430F0_C49CD0

// text: func_80243138_C49D18

// text: func_802431B8_C49D98

// text: func_80243260_C49E40

// text: func_80243578_C4A158

s32 pad_0037F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -567.0f, 0.0f, 180.0f, 90.0f },
    { 567.0f, 0.0f, 180.0f, 270.0f },
    { -450.0f, 0.0f, 90.0f, 180.0f },
    { 300.0f, 0.0f, 90.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C9,
};

Script N(script_80243880) = SCRIPT({
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

s32 pad_003918[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80243920) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 5;
    SI_VAR(2) = 10;
    SI_VAR(3) = 12;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245370_C4BF50, 4);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802439D4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 17;
    SI_VAR(2) = 17;
    SI_VAR(3) = 15;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245378_C4BF58, 3);
    sleep 100;
});

Script N(script_ExitSingleDoor_80243A88) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 9;
    SI_VAR(2) = 20;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245380_C4BF60, 0);
    sleep 100;
});

Script N(script_ExitWalk_80243B3C) = SCRIPT({
    group 27;
    UseExitHeading(40, 3);
    spawn ExitWalk;
    GotoMap(D_80245388_C4BF68, 0);
    sleep 100;
});

Script N(script_80243B98) = SCRIPT({
    bind N(script_ExitWalk_80243B3C) to 0x80000 11;
});

Script N(script_EnterWalk_80243BC4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            SI_VAR(2) = 10;
            SI_VAR(3) = 12;
            await EnterDoubleDoor;
            spawn N(script_80243B98);
        }
        == 1 {
            UseDoorSounds(3);
            SI_VAR(2) = 17;
            SI_VAR(3) = 15;
            await EnterDoubleDoor;
            spawn N(script_80243B98);
        }
        == 2 {
            UseDoorSounds(0);
            SI_VAR(2) = 20;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
            spawn N(script_80243B98);
        }
        == 3 {
            SI_VAR(0) = N(script_80243B98);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFF1) {
        MakeNpcs(1, N(npcGroupList_8024533C));
    }
    spawn N(script_80243F6C);
    bind N(script_ExitDoubleDoor_80243920) to TriggerFlag_WALL_INTERACT 5;
    bind N(script_ExitDoubleDoor_802439D4) to TriggerFlag_WALL_INTERACT 17;
    bind N(script_ExitSingleDoor_80243A88) to TriggerFlag_WALL_INTERACT 9;
    spawn N(script_80243880);
    spawn N(script_EnterWalk_80243BC4);
});

s32 pad_003E4C[] = {
    0x00000000,
};

Vec4f N(triggerCoord_80243E50) =  { 300.0f, 0.0f, 88.0f, 0.0f };

Script N(script_80243E60) = SCRIPT({
    sleep 2;
    PlayEffect(66, 1, 25, 3, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(29, 0);
        EnableModel(25, 1);
        sleep 1;
        EnableModel(29, 1);
        EnableModel(25, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    SI_SAVE_FLAG(1051) = 1;
    unbind;
});

Script N(script_80243F6C) = SCRIPT({
    if (SI_SAVE_FLAG(1051) == 0) {
        bind N(script_80243E60) to TriggerFlag_BOMB N(triggerCoord_80243E50);
        EnableModel(29, 0);
    } else {
        EnableModel(25, 0);
        ModifyColliderFlags(0, 13, 0x7FFFFE00);
    }
});

s32 pad_003FF8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80244000) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

s32 N(extraAnimationList_802440BC)[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802440E4)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_802440EC) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 85.0f,
    .unk_10 = 65.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xC,
    .chaseRadius = 110.0f,
    .unk_28 = 90.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_8024411C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    func_8024061C_C471FC(N(aISettings_802440EC));
});

NpcSettings N(npcSettings_8024418C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024411C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_802441B8) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0f,
    .unk_28 = 160.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802441E8) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 10);
    SetSelfVar(2, 14);
    SetSelfVar(3, 18);
    func_802410D4_C47CB4(N(aISettings_802441B8));
});

NpcSettings N(npcSettings_80244258) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802441E8),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244284) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_802403BC_C46F9C();
});

NpcSettings N(npcSettings_8024432C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244284),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244000),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0x8,
};

f32 N(floatTable_80244358)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

Script N(script_80244370) = SCRIPT({
    SetSelfEnemyFlagBits(0x3F100000, 1);
    SetNpcFlagBits(-1, 3328, 1);
});

NpcAISettings N(aISettings_802443AC) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x5A,
    .waitTime = 0x1E,
    .alertRadius = 240.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 5.3f,
    .unk_1C = 0xB4,
    .unk_20 = 0x1,
    .chaseRadius = 240.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802443DC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_80243578_C4A158(N(aISettings_802443AC));
    DisablePlayerInput(1);
    sleep 2;
20:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetNpcPos(-1, SI_VAR(0), SI_VAR(4), SI_VAR(2));
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        sleep 1;
        goto 20;
    }
    DisablePlayerPhysics(1);
    0x802D2B6C();
    DisablePartnerAI(0);
    group 0;
    0x802D5830(1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    SI_VAR(2) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    0x80045838(-1, 759, 0);
    SetNpcAnimation(-1, 0x380008);
    sleep 10;
    SetPlayerAnimation(0x80017);
    sleep 10;
    0x80045838(-1, 1838, 0);
    spawn {
        loop 100 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    spawn {
        SetNpcAnimation(0xFFFFFFFC, 264);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    }
    sleep 30;
    GotoMap(D_802457A8_C4C388, 2);
    sleep 100;
});

Script N(script_80244804) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

Script N(script_80244890) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

NpcSettings N(npcSettings_802448F4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x26,
    .radius = 0x20,
    .otherAI = &N(script_80244370),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802443DC),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80244920)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024418C),
        .pos = { -350.0, 0.0, 180.0 },
        .flags = 0x00000D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFEA2, 0x00000000, 0x000000B4, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000032, 0x00000258, 0x000000FA, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802440BC),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_8024432C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802440E4),
    },
};

Script N(script_Init_80244D00) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SetNpcPos(-1, 240, 0, 88);
        InterpNpcYaw(-1, 270, 0);
    }
});

StaticNpc N(npcGroup_80244D6C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80244258),
        .pos = { 310.0, 0.0, 88.0 },
        .flags = 0x00000D00,
        .init = N(script_Init_80244D00),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000136, 0x00000000, 0x00000058, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000032, 0x00000258, 0x000000FA, 0x00000001, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802440BC),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_8024432C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802440E4),
    },
};

StaticNpc N(npcGroup_8024514C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802448F4),
        .pos = { -20.0, 100.0, 180.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFFEC, 0x00000064, 0x000000B4, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFEC, 0x00000064, 0x000000B4, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00380001, 0x00380002, 0x00380003, 0x00380003, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380005, 0x00380001, 0x00380008, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380001,
        },
    },
};

NpcGroupList N(npcGroupList_8024533C) = {
    NPC_GROUP(N(npcGroup_80244920), 0x0F030001),
    NPC_GROUP(N(npcGroup_80244D6C), 0x0F010001),
    NPC_GROUP(N(npcGroup_8024514C), 0x00000000),
    {},
};

s32 pad_00536C[] = {
    0x00000000,
};

// rodata: D_80245370_C4BF50

// rodata: D_80245378_C4BF58

// rodata: D_80245380_C4BF60

// rodata: D_80245388_C4BF68

// rodata: D_80245390_C4BF70

// rodata: jtbl_80245398_C4BF78

// rodata: D_80245528_C4C108

// rodata: jtbl_80245530_C4C110

// rodata: D_802456C0_C4C2A0

// rodata: D_802456C8_C4C2A8

// rodata: D_802456D0_C4C2B0

// rodata: jtbl_802456D8_C4C2B8

s32 pad_005714[] = {
    0x00000000,
};

// rodata: D_80245718_C4C2F8

// rodata: D_80245720_C4C300

// rodata: jtbl_80245728_C4C308

// rodata: D_802457A8_C4C388
