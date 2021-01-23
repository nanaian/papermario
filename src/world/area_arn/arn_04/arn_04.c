#include "arn_04.h"

s32 pad_003368[2];
Script N(script_802433D0);
s32 pad_003478[2];
Script N(script_ExitWalk_80243480);
Script N(script_ExitWalk_802434DC);
Script N(script_80243538);
Script N(main);
s32 pad_003654[3];
Script N(script_NpcAI_80243690);
f32 N(floatTable_802436DC)[6];
Script N(script_NpcAI_80243724);
Script N(script_NpcAI_802437F0);
StaticNpc N(npcGroup_80243840)[1];
StaticNpc N(npcGroup_80243A30)[1];
StaticNpc N(npcGroup_80243C20)[1];
StaticNpc N(npcGroup_80243E10)[1];
NpcGroupList N(npcGroupList_80244000);
s32 pad_00403C[1];
Script N(script_MakeEntities);
s32 pad_004118[2];
const char D_80244120_BE78D0[8]; // "arn_02"
const char D_80244128_BE78D8[8]; // "dgb_00"
s32 pad_004324[1];
s32 pad_004424[3];

// text: func_80240000_BE37B0

// text: func_80240158_BE3908

// text: N(UnkNpcAIFunc1)

// text: func_802404C0_BE3C70

// text: func_8024067C_BE3E2C

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024081C_BE3FCC

// text: func_8024094C_BE40FC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240AD4_BE4284

// text: func_80240B94_BE4344

// text: func_80240E90_BE4640

// text: func_80241040_BE47F0

// text: dup_arn_04_UnkNpcAIFunc1

// text: func_80241728_BE4ED8

// text: N(UnkNpcAIFunc2)

// text: func_80241AE4_BE5294

// text: func_80241B50_BE5300

// text: N(UnkNpcAIFunc3)

// text: func_80241CE8_BE5498

// text: func_80242078_BE5828

// text: func_8024219C_BE594C

// text: func_80242388_BE5B38

// text: func_802424E8_BE5C98

// text: func_8024255C_BE5D0C

// text: func_8024268C_BE5E3C

// text: func_80242728_BE5ED8

// text: func_802427B0_BE5F60

// text: func_80242858_BE6008

// text: func_802429CC_BE617C

// text: func_80242A1C_BE61CC

// text: func_80242BBC_BE636C

// text: func_80242D0C_BE64BC

// text: func_80242DB8_BE6568

// text: func_80242EF0_BE66A0

// text: func_80242F6C_BE671C

// text: N(UnkDurationCheck)

// text: func_80243018_BE67C8

s32 pad_003368[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -585.0f, 60.0f, 150.0f, 90.0f },
    { 820.0f, 285.0f, 150.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900BF,
};

Script N(script_802433D0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 29, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        } else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
    PlayAmbientSounds(1);
});

s32 pad_003478[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80243480) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244120_BE78D0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802434DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244128_BE78D8, 0);
    sleep 100;
});

Script N(script_80243538) = SCRIPT({
    bind N(script_ExitWalk_80243480) to 0x80000 1;
    bind N(script_ExitWalk_802434DC) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 34;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80244000));
    await N(script_MakeEntities);
    spawn N(script_802433D0);
    SI_VAR(0) = N(script_80243538);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_003654[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80243660) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 130.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243690) = SCRIPT({
    func_80240B94_BE4344(N(aISettings_80243660));
});

NpcSettings N(npcSettings_802436B0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243690),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0,
};

f32 N(floatTable_802436DC)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_802436F4) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 4.0f,
    .unk_1C = 0x5,
    .unk_20 = 0x1,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243724) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0xFFFFFCAE);
    SetSelfVar(6, 60);
    SetSelfVar(1, 700);
    func_8024219C_BE594C(N(aISettings_802436F4));
});

NpcSettings N(npcSettings_80243794) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x12,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243724),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0x1,
};

NpcAISettings N(aISettings_802437C0) = {
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

Script N(script_NpcAI_802437F0) = SCRIPT({
    func_80243018_BE67C8(N(aISettings_802437C0), 8);
});

NpcSettings N(npcSettings_80243814) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802437F0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80243840)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243794),
        .pos = { -350.0, 180.0, 150.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DRIED_SHROOM, 10 } },
        .movement = { 0xFFFFFEA2, 0x000000B4, 0x00000096, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEA2, 0x000000B4, 0x00000096, 0x00000096 },
        .animations = {
            0x00280201, 0x00280203, 0x00280204, 0x00280204, 0x00280201, 0x00280201, 0x00280206, 0x00280206, 0x00280205, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204,
        },
    },
};

StaticNpc N(npcGroup_80243A30)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802436B0),
        .pos = { 360.0, 208.0, 100.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DRIED_SHROOM, 10 } },
        .movement = { 0x00000168, 0x000000D0, 0x00000064, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000168, 0x000000D0, 0x00000064, 0x00000096 },
        .animations = {
            0x00260201, 0x00260202, 0x00260203, 0x00260203, 0x00260201, 0x00260201, 0x00260205, 0x00260205, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203, 0x00260203,
        },
    },
};

StaticNpc N(npcGroup_80243C20)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243814),
        .pos = { 150.0, 177.0, 160.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000096, 0x000000B1, 0x000000A0, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x000000B1, 0x000000A0, 0x00000096 },
        .animations = {
            0x00300102, 0x00300106, 0x00300107, 0x00300107, 0x00300102, 0x00300102, 0x00300108, 0x00300108, 0x00300114, 0x00300117, 0x00300113, 0x00300115, 0x00300110, 0x00300111, 0x00300116, 0x00300100,
        },
    },
};

StaticNpc N(npcGroup_80243E10)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243814),
        .pos = { 550.0, 230.0, 125.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000226, 0x000000E6, 0x0000007D, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000226, 0x000000E6, 0x0000007D, 0x00000096 },
        .animations = {
            0x00300102, 0x00300106, 0x00300107, 0x00300107, 0x00300102, 0x00300102, 0x00300108, 0x00300108, 0x00300114, 0x00300117, 0x00300113, 0x00300115, 0x00300110, 0x00300111, 0x00300116, 0x00300100,
        },
    },
};

NpcGroupList N(npcGroupList_80244000) = {
    NPC_GROUP(N(npcGroup_80243840), 0x0E090001),
    NPC_GROUP(N(npcGroup_80243A30), 0x0E030001),
    NPC_GROUP(N(npcGroup_80243C20), 0x0E0C0001),
    NPC_GROUP(N(npcGroup_80243E10), 0x0E0E0001),
    {},
};

s32 pad_00403C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 450, 285, 120, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1008));
    MakeEntity(0x802EA564, 720, 333, 75, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1009));
    MakeEntity(0x802EA0E8, 600, 290, 200, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1010));
    MakeItemEntity(348, 540, 230, 13, 17, SI_SAVE_FLAG(1019));
});

s32 pad_004118[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244120_BE78D0

// rodata: D_80244128_BE78D8

// rodata: D_80244130_BE78E0

// rodata: D_80244138_BE78E8

// rodata: jtbl_80244140_BE78F0

// rodata: D_802442D0_BE7A80

// rodata: D_802442D8_BE7A88

// rodata: D_802442E0_BE7A90

// rodata: jtbl_802442E8_BE7A98

s32 pad_004324[] = {
    0x00000000,
};

// rodata: D_80244328_BE7AD8

// rodata: D_80244330_BE7AE0

// rodata: D_80244338_BE7AE8

// rodata: D_80244340_BE7AF0

// rodata: D_80244348_BE7AF8

// rodata: jtbl_80244350_BE7B00

s32 pad_004424[] = {
    0x00000000, 0x00000000, 0x00000000,
};
