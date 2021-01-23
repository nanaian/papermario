#include "kpa_08.h"

s32 pad_00009C[1];
s32 pad_00149C[1];
Script N(script_80241500);
s32 pad_001568[2];
Script N(script_ExitDoubleDoor_80241570);
Script N(script_ExitWalk_80241614);
Script N(script_80241670);
Script N(script_EnterWalk_802416B8);
Script N(main);
s32 pad_00182C[1];
Script N(script_80241830);
Script N(script_MakeEntities);
s32 pad_001CEC[1];
f32 N(floatTable_80241CF0)[1];
f32 N(floatTable_80241CF4)[1];
s32 N(byteTable_80241CF8)[31];
Script N(script_NpcAI_80241DA4);
Script N(script_80241DC4);
Script N(script_80241E50);
s32 N(extraAnimationList_80241EFC)[8];
Script N(script_80241F1C);
Script N(script_80241F54);
Script N(script_NpcAI_80241F8C);
Script N(script_80241FA8);
Script N(script_80241FFC);
s32 unk_missing_802420E4[11];
StaticNpc N(npcGroup_80242110)[2];
NpcGroupList N(npcGroupList_802424F0);
s32 pad_002508[2];
const char D_80242510_A4EF30[8]; // "kpa_52"
const char D_80242518_A4EF38[9]; // "kpa_100"
s32 pad_002554[1];
s32 pad_0025D4[3];

// text: func_80240000_A4CA20

// text: func_8024001C_A4CA3C

s32 pad_00009C[] = {
    0x00000000,
};

// text: func_802400A0_A4CAC0

// text: func_80240270_A4CC90

// text: func_80240780_A4D1A0

// text: func_802407F4_A4D214

// text: func_80240920_A4D340

// text: func_802409C0_A4D3E0

// text: func_80240A24_A4D444

// text: func_80240B64_A4D584

// text: func_80240D08_A4D728

// text: func_80240D44_A4D764

// text: func_80240F04_A4D924

// text: func_80240F70_A4D990

// text: func_802410A4_A4DAC4

// text: func_8024110C_A4DB2C

// text: func_80241378_A4DD98

// text: func_802413C4_A4DDE4

// text: func_8024141C_A4DE3C

// text: func_80241454_A4DE74

s32 pad_00149C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -483.0f, 0.0f, -19.0f, 90.0f },
    { 203.0f, 100.0f, -22.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190172,
};

Script N(script_80241500) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(7);
    }
});

s32 pad_001568[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80241570) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 6;
    SI_VAR(2) = 75;
    SI_VAR(3) = 77;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80242510_A4EF30, 2);
    sleep 100;
});

Script N(script_ExitWalk_80241614) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80242518_A4EF38, 0);
    sleep 100;
});

Script N(script_80241670) = SCRIPT({
    bind N(script_ExitDoubleDoor_80241570) to TriggerFlag_WALL_INTERACT 6;
    bind N(script_ExitWalk_80241614) to 0x80000 0;
});

Script N(script_EnterWalk_802416B8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(2) = 75;
            SI_VAR(3) = 77;
            spawn EnterDoubleDoor;
            spawn N(script_80241670);
        }
        == 1 {
            SI_VAR(0) = N(script_80241670);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802424F0));
    await N(script_MakeEntities);
    spawn N(script_EnterWalk_802416B8);
    sleep 1;
    spawn N(script_80241500);
});

s32 pad_00182C[] = {
    0x00000000,
};

Script N(script_80241830) = SCRIPT({
    if (SI_AREA_FLAG(3) != 0) {
        return;
    }
    SI_AREA_FLAG(3) = 1;
    func_80240000_A4CA20();
    spawn {
        group 239;
        PlaySoundAtCollider(15, 551, 0);
        MakeLerp(0xFFFFFFCE, 0, 15, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4CA3C(15, 100);
            TranslateGroup(64, 0, SI_VAR(0), 0);
            UpdateColliderTransform(15);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 80;
        PlaySoundAtCollider(15, 552, 0);
        MakeLerp(0, 0xFFFFFFCE, 20, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4CA3C(15, 100);
            TranslateGroup(64, 0, SI_VAR(0), 0);
            UpdateColliderTransform(15);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        group 239;
        DisablePlayerInput(1);
        PlaySoundAtCollider(17, 551, 0);
        MakeLerp(0xFFFFFF9D, 0, 15, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4CA3C(17, 100);
            TranslateGroup(67, 0, SI_VAR(0), 0);
            UpdateColliderTransform(17);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        DisablePlayerInput(0);
        sleep 80;
        PlaySoundAtCollider(17, 552, 0);
        MakeLerp(0, 0xFFFFFF9D, 15, 10);
        loop {
            UpdateLerp();
            func_8024001C_A4CA3C(17, 100);
            TranslateGroup(67, 0, SI_VAR(0), 0);
            UpdateColliderTransform(17);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        TranslateGroup(67, 0, 0xFFFFFF9D, -1);
        SI_AREA_FLAG(3) = 0;
    }
});

Script N(script_MakeEntities) = SCRIPT({
    SI_AREA_FLAG(3) = 0;
    MakeEntity(D_802E9BB0, 10, 0, 0, 0, 0x80000000);
    AssignScript(N(script_80241830));
    ParentColliderToModel(15, 63);
    TranslateGroup(64, 0, 0xFFFFFFCE, 0);
    UpdateColliderTransform(15);
    ParentColliderToModel(17, 66);
    TranslateGroup(67, 0, 0xFFFFFF9D, -1);
    UpdateColliderTransform(17);
});

s32 pad_001CEC[] = {
    0x00000000,
};

f32 N(floatTable_80241CF0)[] = {
    0.8f,
};

f32 N(floatTable_80241CF4)[] = {
    1.0f,
};

s32 N(byteTable_80241CF8)[] = {
    0xC8000000, 0x3F19999A, 0x3F800000, 0xB4000000, 0x3F000000, 0x3F800000, 0xA0000000, 0x3ECCCCCD,
    0x3F800000, 0x8C000000, 0x3E99999A, 0x3F8CCCCD, 0x78000000, 0x3E4CCCCD, 0x3FA66666, 0x6E000000,
    0x3E19999A, 0x3FCCCCCD, 0x64000000, 0x3DF5C28F, 0x40000000, 0x5A000000, 0x3DE147AE, 0x40400000,
    0x50000000, 0x3DCCCCCD, 0x40800000, 0x46000000, 0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80241D74) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x5A,
    .unk_20 = 0xF,
    .chaseRadius = 200.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241DA4) = SCRIPT({
    func_8024110C_A4DB2C(N(aISettings_80241D74));
});

Script N(script_80241DC4) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await func_800936DC;
        }
    }
});

Script N(script_80241E50) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            func_80241378_A4DD98();
            DoNpcDefeat();
        }
        == 2 {
            func_802413C4_A4DDE4();
            func_80045900(0);
        }
    }
});

NpcSettings N(npcSettings_80241ED0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241DA4),
    .onHit = &N(script_80241DC4),
    .aux = NULL,
    .onDefeat = &N(script_80241E50),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80241EFC)[] = {
    0x00560000, 0x00560001, 0x00560001, 0x00560001, 0x00560002, 0x00560003, 0x00560004, 0xFFFFFFFF,
};

Script N(script_80241F1C) = SCRIPT({
    SetSelfVar(1, 10);
    SetSelfVar(2, 40);
});

Script N(script_80241F54) = SCRIPT({
    SetSelfVar(1, 0);
    SetSelfVar(2, 55);
});

Script N(script_NpcAI_80241F8C) = SCRIPT({
    func_80240270_A4CC90();
});

Script N(script_80241FA8) = SCRIPT({
    func_8024141C_A4DE3C();
    if (SI_VAR(0) == 0) {
        return;
    }
    func_80241454_A4DE74();
    spawn EnemyNpcHit;
});

Script N(script_80241FFC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            func_80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_802420B8) = {
    .unk_00 = { 0, 0x56, 0, 0 },
    .height = 0,
    .radius = 0,
    .otherAI = &N(script_80241F1C),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241F8C),
    .onHit = &N(script_80241FA8),
    .aux = NULL,
    .onDefeat = &N(script_80241FFC),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

s32 unk_missing_802420E4[] = {
    0x00570000, 0x00000000, N(script_80241F54), 0x00000000, N(script_NpcAI_80241F8C), N(script_80241FA8), 0x00000000, N(script_80241FFC),
    0x00000000, 0x00000000, 0x00000000,
};

StaticNpc N(npcGroup_80242110)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241ED0),
        .pos = { -210.0, 0.0, 25.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 5 }, { ItemId_MAPLE_SYRUP, 5 }, { ItemId_THUNDER_RAGE, 5 }, { ItemId_STOP_WATCH, 5 } },
        .movement = { 0xFFFFFF2E, 0x00000000, 0x00000019, 0x0000001E, 0x0000000A, 0xFFFF8001, 0x00000001, 0xFFFFFF2E, 0x00000000, 0x00000019, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560004, 0x00560004, 0x00560002, 0x00560003, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001, 0x00560001,
        },
        .extraAnimations = N(extraAnimationList_80241EFC),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802420B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000, 0x00560000,
        },
    },
};

NpcGroupList N(npcGroupList_802424F0) = {
    NPC_GROUP(N(npcGroup_80242110), 0x222B0002),
    {},
};

s32 pad_002508[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242510_A4EF30

// rodata: D_80242518_A4EF38

// rodata: D_80242520_A4EF40

// rodata: D_80242528_A4EF48

// rodata: D_80242530_A4EF50

// rodata: D_80242538_A4EF58

// rodata: jtbl_80242540_A4EF60

s32 pad_002554[] = {
    0x00000000,
};

// rodata: D_80242558_A4EF78

// rodata: D_80242560_A4EF80

// rodata: D_80242568_A4EF88

// rodata: jtbl_80242570_A4EF90

s32 pad_0025D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
