#include "kmr_06.h"

s32 pad_0014F8[2];
s32 pad_001D98[2];
Script N(script_80241E00);
s32 pad_001E2C[1];
Script N(script_ExitWalk_80241E30);
Script N(script_ExitWalk_80241E8C);
Script N(script_80241EE8);
Script N(main);
Script N(script_NpcAI_80242070);
f32 N(floatTable_802420BC)[6];
Script N(script_NpcAI_80242104);
StaticNpc N(npcGroup_802421A0)[1];
StaticNpc N(npcGroup_80242390)[1];
NpcGroupList N(npcGroupList_80242580);
s32 pad_0025A4[3];
Script N(script_MakeEntities);
s32 pad_00261C[1];
Script N(script_80242620);
Script N(script_802427C8);
s32 pad_002834[3];
const char D_80242840_8D3D50[8]; // "kmr_09"
const char D_80242848_8D3D58[8]; // "kmr_07"
s32 pad_0028A4[3];

// text: func_80240000_8D1510

// text: func_802401B0_8D16C0

// text: N(UnkNpcAIFunc1)

// text: func_80240898_8D1DA8

// text: N(UnkNpcAIFunc2)

// text: func_80240C54_8D2164

// text: func_80240CC0_8D21D0

// text: N(UnkNpcAIFunc3)

// text: func_80240E58_8D2368

// text: func_802411E8_8D26F8

// text: func_8024130C_8D281C

s32 pad_0014F8[] = {
    0x00000000, 0x00000000,
};

// text: func_80241500_8D2A10

// text: func_802417A8_8D2CB8

// text: func_802417E0_8D2CF0

// text: func_80241950_8D2E60

// text: func_802419EC_8D2EFC

// text: func_80241A68_8D2F78

// text: func_80241C78_8D3188

// text: func_80241CC8_8D31D8

s32 pad_001D98[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -110.0f, 0.0f, 33.0f, 90.0f },
    { 850.0f, 0.0f, 35.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19003E,
};

Script N(script_80241E00) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

s32 pad_001E2C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241E30) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242840_8D3D50, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241E8C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242848_8D3D58, 0);
    sleep 100;
});

Script N(script_80241EE8) = SCRIPT({
    bind N(script_ExitWalk_80241E30) to 0x80000 3;
    bind N(script_ExitWalk_80241E8C) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 31;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80242580));
    await N(script_MakeEntities);
    spawn N(script_80241E00);
    ModifyColliderFlags(0, 4, 0x7FFFFE00);
    ModifyColliderFlags(0, 7, 0x7FFFFE00);
    SI_VAR(0) = N(script_80241EE8);
    spawn EnterWalk;
    sleep 1;
    await N(script_802427C8);
});

NpcAISettings N(aISettings_80242040) = {
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

Script N(script_NpcAI_80242070) = SCRIPT({
    DoBasicAI(N(aISettings_80242040));
});

NpcSettings N(npcSettings_80242090) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242070),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

f32 N(floatTable_802420BC)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_802420D4) = {
    .moveSpeed = 1.6f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 80.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 2.2f,
    .unk_1C = 0x3C,
    .unk_20 = 0xF,
    .chaseRadius = 100.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242104) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFE0C);
    SetSelfVar(6, 21);
    SetSelfVar(1, 580);
    func_8024130C_8D281C(N(aISettings_802420D4));
});

NpcSettings N(npcSettings_80242174) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x15,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242104),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0x2,
};

StaticNpc N(npcGroup_802421A0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242090),
        .pos = { 160.0, 0.0, 30.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x000000A0, 0x00000000, 0x0000001E, 0x0000001E, 0x00000014, 0xFFFF8001, 0x00000001, 0x000000A0, 0x00000000, 0x0000001E, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00270001, 0x00270002, 0x00270003, 0x00270003, 0x00270001, 0x00270001, 0x00270005, 0x00270005, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003,
        },
    },
};

StaticNpc N(npcGroup_80242390)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242174),
        .pos = { 525.0, 60.0, 15.0 },
        .flags = 0x00000D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x0000020D, 0x0000003C, 0x0000000F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000020D, 0x0000003C, 0x0000000F, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00280001, 0x00280003, 0x00280004, 0x00280004, 0x00280001, 0x00280001, 0x00280006, 0x00280006, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004,
        },
    },
};

NpcGroupList N(npcGroupList_80242580) = {
    NPC_GROUP(N(npcGroup_802421A0), 0x000B0003),
    NPC_GROUP(N(npcGroup_80242390), 0x00090003),
    {},
};

s32 pad_0025A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA7E0, 800, 60, 0, 0, 0x80000000);
    MakeEntity(0x802EA5AC, 220, 60, 10, 0, 274, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(80));
});

s32 pad_00261C[] = {
    0x00000000,
};

Script N(script_80242620) = SCRIPT({
    group 0;
    suspend group 1;
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0166, 160, 40);
    if (SI_SAVE_FLAG(79) == 0) {
        if (SI_MAP_FLAG(10) == 0) {
            SI_MAP_FLAG(10) = 1;
            spawn {
                sleep 2;
                SI_VAR(0) = 0.0;
                loop 18 {
                    SI_VAR(0) += 10.0;
                    func_802419EC_8D2EFC(0, SI_VAR(0));
                    sleep 1;
                }
                func_802419EC_8D2EFC(0, 0);
            }
            spawn {
                func_80241C78_8D3188(0.6005859375);
                func_80241A68_8D2F78(362, 0, 40, 23);
                func_80241CC8_8D31D8();
                MakeItemEntity(138, 362, 0, 40, 17, SI_SAVE_FLAG(79));
            }
            sleep 10;
        }
    }
    resume group 1;
    DisablePlayerInput(0);
});

Script N(script_802427C8) = SCRIPT({
    if (SI_SAVE_FLAG(79) == 0) {
        func_802417E0_8D2CF0(138);
        func_80241950_8D2E60(362, 40, 0xFFFFFFEF);
    }
    bind N(script_80242620) to TriggerFlag_WALL_INTERACT 19;
});

s32 pad_002834[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242840_8D3D50

// rodata: D_80242848_8D3D58

// rodata: D_80242850_8D3D60

// rodata: D_80242858_8D3D68

// rodata: D_80242860_8D3D70

// rodata: jtbl_80242868_8D3D78

s32 pad_0028A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
