#include "isk_18.h"

s32 pad_0008E8[2];
Script N(script_ExitWalk_80240950);
Script N(script_ExitWalk_802409AC);
Script N(script_80240A08);
Script N(main);
s32 pad_000C18[2];
Script N(script_NpcAI_80240C50);
s32 N(unk_80240CC0)[12];
Script N(script_80240CF0);
s32 N(unk_80240D60)[12];
Script N(script_80240D90);
Script N(script_NpcAI_80240E00);
s32 unk_missing_80240F4C[22];
StaticNpc N(npcGroup_80240FA4)[1];
StaticNpc N(npcGroup_80241194)[1];
StaticNpc N(npcGroup_80241384)[1];
NpcGroupList N(npcGroupList_80241574);
s32 pad_0015A4[3];
Script N(script_802415B0);
s32 pad_001758[2];
const char D_80241760_9996D0[8]; // "isk_10"
const char D_80241768_9996D8[8]; // "isk_12"
s32 pad_0017CC[1];

// text: N(set_script_owner_npc_anim)

// text: func_8024007C_997FEC

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240394_998304

// text: func_802407D4_998744

// text: func_8024081C_99878C

// text: func_80240874_9987E4

s32 pad_0008E8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -528.0f, -780.0f, 217.0f, 150.0f },
    { 431.0f, -780.0f, 388.0f, 230.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900A4,
};

Script N(script_ExitWalk_80240950) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80241760_9996D0, 2);
    sleep 100;
});

Script N(script_ExitWalk_802409AC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80241768_9996D8, 2);
    sleep 100;
});

Script N(script_80240A08) = SCRIPT({
    bind N(script_ExitWalk_80240950) to 0x80000 4;
    bind N(script_ExitWalk_802409AC) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x2000E);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241574));
    await N(script_802415B0);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFC6) {
        EnableModel(32, 0);
        EnableModel(33, 0);
        EnableModel(34, 0);
        ModifyColliderFlags(0, 14, 0x7FFFFE00);
    }
    SI_VAR(0) = N(script_80240A08);
    spawn EnterWalk;
});

s32 pad_000C18[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80240C20) = {
    .moveSpeed = 1.0,
    .moveTime = 0x3C,
    .waitTime = 0x3C,
    .alertRadius = 90.0,
    .unk_10 = 40.0,
    .unk_14 = 0x1,
    .chaseSpeed = 4.5,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0,
    .unk_28 = 40.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240C50) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80240394_998304(N(aISettings_80240C20));
});

s32 N(unk_80240CC0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40E00000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80240CF0) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_80240394_998304(N(unk_80240CC0));
});

s32 N(unk_80240D60)[] = {
    0x3F800000, 0x00000014, 0x00000005, 0x42F00000, 0x00000000, 0x00000003, 0x40C00000, 0x00000000,
    0x00000000, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_80240D90) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_80240394_998304(N(unk_80240D60));
});

Script N(script_NpcAI_80240E00) = SCRIPT({
    func_802407D4_998744();
    SetNpcAnimation(-1, 0x33000F);
    func_8024081C_99878C();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_80240874_9987E4();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80240394_998304(N(aISettings_80240C20));
});

NpcSettings N(npcSettings_80240EF4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240C50),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80240F20) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240E00),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

s32 unk_missing_80240F4C[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80240CF0), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x00110000, 0x00000000, 0x00180018, 0x00000000, 0x00000000, N(script_80240D90),
    0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000, 0x00190000,
};

StaticNpc N(npcGroup_80240FA4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240F20),
        .pos = { -372.0, -700.0, 439.0 },
        .flags = 0x00000400,
        .unk_1C = 0x00000001,
        .unk_20 = 0x00000B0E,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFE8C, 0xFFFFFD44, 0x000001B7, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE8C, 0xFFFFFD44, 0x000001B7, 0x000000C8 },
        .animations = {
            0x00330001, 0x00330003, 0x00330004, 0x00330004, 0x00330000, 0x00330000, 0x00330007, 0x00330007, 0x0033000C, 0x00330005, 0x0033000D, 0x00330000, 0x00330000, 0x00330000, 0x00330000, 0x00330000,
        },
    },
};

StaticNpc N(npcGroup_80241194)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240F20),
        .pos = { -58.0, -700.0, 591.0 },
        .flags = 0x00000400,
        .unk_1C = 0x00000001,
        .unk_20 = 0x00000B0B,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFFC6, 0xFFFFFD44, 0x0000024F, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFC6, 0xFFFFFD44, 0x0000024F, 0x000000C8 },
        .animations = {
            0x00330001, 0x00330003, 0x00330004, 0x00330004, 0x00330000, 0x00330000, 0x00330007, 0x00330007, 0x0033000C, 0x00330005, 0x0033000D, 0x00330000, 0x00330000, 0x00330000, 0x00330000, 0x00330000,
        },
    },
};

StaticNpc N(npcGroup_80241384)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240EF4),
        .pos = { 292.0, -780.0, 488.0 },
        .flags = 0x00000400,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000124, 0xFFFFFCF4, 0x000001E8, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000124, 0xFFFFFCF4, 0x000001E8, 0x000000C8 },
        .animations = {
            0x00330001, 0x00330003, 0x00330004, 0x00330004, 0x00330000, 0x00330000, 0x00330007, 0x00330007, 0x0033000C, 0x00330005, 0x0033000D, 0x00330000, 0x00330000, 0x00330000, 0x00330000, 0x00330000,
        },
    },
};

NpcGroupList N(npcGroupList_80241574) = {
    NPC_GROUP(N(npcGroup_80240FA4), 0x0B0F0009),
    NPC_GROUP(N(npcGroup_80241194), 0x0B130009),
    NPC_GROUP(N(npcGroup_80241384), 0x0B0C0009),
    {},
};

s32 pad_0015A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802415B0) = SCRIPT({
    PlayEffect(32, 1, 305, 0xFFFFFD1E, 435, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 138, 0xFFFFFD1E, 514, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFFD2, 0xFFFFFD1E, 530, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFF1F, 0xFFFFFD1E, 482, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE88, 0xFFFFFD1E, 376, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE1E, 0xFFFFFD1E, 225, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

s32 pad_001758[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241760_9996D0

// rodata: D_80241768_9996D8

// rodata: D_80241770_9996E0

// rodata: jtbl_80241778_9996E8

s32 pad_0017CC[] = {
    0x00000000,
};

