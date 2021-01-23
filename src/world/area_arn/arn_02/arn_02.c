#include "arn_02.h"

Script N(script_80241040);
s32 pad_0010E8[2];
Script N(script_ExitWalk_802410F0);
Script N(script_ExitWalk_8024114C);
Script N(script_802411A8);
Script N(main);
s32 pad_0012C4[3];
Script N(script_MakeEntities);
Script N(script_NpcAI_80241400);
Script N(script_NpcAI_8024147C);
StaticNpc N(npcGroup_802414CC)[1];
StaticNpc N(npcGroup_802416BC)[1];
StaticNpc N(npcGroup_802418AC)[1];
NpcGroupList N(npcGroupList_80241A9C);
s32 pad_001ACC[1];
const char D_80241AD0_BDEC80[8]; // "arn_05"
const char D_80241AD8_BDEC88[8]; // "arn_04"
s32 pad_001BDC[1];

// text: func_80240000_BDD1B0

// text: func_80240160_BDD310

// text: func_802401D4_BDD384

// text: func_80240304_BDD4B4

// text: func_802403A0_BDD550

// text: func_80240428_BDD5D8

// text: func_802404D0_BDD680

// text: func_80240644_BDD7F4

// text: func_80240694_BDD844

// text: func_80240834_BDD9E4

// text: func_80240984_BDDB34

// text: func_80240A30_BDDBE0

// text: func_80240B68_BDDD18

// text: func_80240BE4_BDDD94

// text: N(UnkDurationCheck)

// text: func_80240C90_BDDE40

EntryList N(entryList) = {
    { -585.0f, 60.0f, 150.0f, 90.0f },
    { 880.0f, 320.0f, 150.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900BE,
};

Script N(script_80241040) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 29, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
    PlayAmbientSounds(1);
});

s32 pad_0010E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802410F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241AD0_BDEC80, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024114C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241AD8_BDEC88, 0);
    sleep 100;
});

Script N(script_802411A8) = SCRIPT({
    bind N(script_ExitWalk_802410F0) to 0x80000 1;
    bind N(script_ExitWalk_8024114C) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 34;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80241A9C));
    await N(script_MakeEntities);
    spawn N(script_80241040);
    SI_VAR(0) = N(script_802411A8);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_0012C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(154, 0xFFFFFF08, 193, 45, 17, SI_SAVE_FLAG(1005));
    MakeItemEntity(60, 536, 260, 227, 17, SI_SAVE_FLAG(1006));
    MakeEntity(0x802EA564, 0xFFFFFEA2, 172, 170, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1002));
    MakeEntity(0x802EA564, 225, 265, 30, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1003));
    MakeEntity(0x802EA564, 275, 265, 150, 0, 151, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1004));
});

NpcAISettings N(aISettings_802413D0) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x28,
    .waitTime = 0xF,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 3.3f,
    .unk_1C = 0x46,
    .unk_20 = 0x1,
    .chaseRadius = 180.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241400) = SCRIPT({
    DoBasicAI(N(aISettings_802413D0));
});

NpcSettings N(npcSettings_80241420) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241400),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_8024144C) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 8.5f,
    .unk_1C = 0x3C,
    .unk_20 = 0x3,
    .chaseRadius = 100.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024147C) = SCRIPT({
    func_80240C90_BDDE40(N(aISettings_8024144C), 8);
});

NpcSettings N(npcSettings_802414A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024147C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802414CC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802414A0),
        .pos = { -196.0, 130.0, 104.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFF3C, 0x00000082, 0x00000068, 0x00000032, 0x0000001E, 0xFFFF8001, 0x00000001, 0xFFFFFF3C, 0x00000082, 0x00000068, 0x00000078 },
        .animations = {
            0x00300102, 0x00300106, 0x00300107, 0x00300107, 0x00300102, 0x00300102, 0x00300108, 0x00300108, 0x00300114, 0x00300117, 0x00300113, 0x00300115, 0x00300110, 0x00300111, 0x00300116, 0x00300100,
        },
    },
};

StaticNpc N(npcGroup_802416BC)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802414A0),
        .pos = { 641.0, 268.0, 202.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000281, 0x0000010C, 0x000000CA, 0x00000032, 0x0000001E, 0xFFFF8001, 0x00000001, 0x00000281, 0x0000010C, 0x000000CA, 0x00000078 },
        .animations = {
            0x00300102, 0x00300106, 0x00300107, 0x00300107, 0x00300102, 0x00300102, 0x00300108, 0x00300108, 0x00300114, 0x00300117, 0x00300113, 0x00300115, 0x00300110, 0x00300111, 0x00300116, 0x00300100,
        },
    },
};

StaticNpc N(npcGroup_802418AC)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241420),
        .pos = { 333.0, 215.0, 85.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DRIED_SHROOM, 10 } },
        .movement = { 0x0000014D, 0x000000D7, 0x00000055, 0x00000028, 0x0000001E, 0xFFFF8001, 0x00000001, 0x00000168, 0x000000D7, 0x00000096, 0x00000078, 0x00000089, 0x00000001 },
        .animations = {
            0x00260201, 0x00260202, 0x00260203, 0x00260203, 0x00260201, 0x00260201, 0x00260205, 0x00260205, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203,
        },
    },
};

NpcGroupList N(npcGroupList_80241A9C) = {
    NPC_GROUP(N(npcGroup_802414CC), 0x0E0A0001),
    NPC_GROUP(N(npcGroup_802416BC), 0x0E0D0001),
    NPC_GROUP(N(npcGroup_802418AC), 0x0E030001),
    {},
};

s32 pad_001ACC[] = {
    0x00000000,
};

// rodata: D_80241AD0_BDEC80

// rodata: D_80241AD8_BDEC88

// rodata: D_80241AE0_BDEC90

// rodata: D_80241AE8_BDEC98

// rodata: D_80241AF0_BDECA0

// rodata: D_80241AF8_BDECA8

// rodata: D_80241B00_BDECB0

// rodata: jtbl_80241B08_BDECB8

s32 pad_001BDC[] = {
    0x00000000,
};
