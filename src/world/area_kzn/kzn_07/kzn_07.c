#include "kzn_07.h"

s32 pad_000718[2];
s32 pad_00230C[1];
Script N(script_80242360);
Script N(script_8024239C);
s32 pad_0023D8[2];
s32 N(unk_802423E0)[1];
Script N(script_UpdateTexturePan_802423E4);
s32 N(unk_80242480)[1];
Script N(script_ExitWalk_80242484);
Script N(script_802424E0);
Script N(script_8024250C);
s32 N(lavaResetList_80242778)[12];
Script N(main);
s32 pad_002924[3];
f32 N(floatTable_80242930)[28];
Script N(script_802429A0);
Script N(script_80242A50);
Script N(script_MakeEntities);
s32 pad_002B84[3];
f32 N(floatTable_80242B90)[6];
Script N(script_NpcAI_80242BD8);
StaticNpc N(npcGroup_80242C74)[1];
StaticNpc N(npcGroup_80242E64)[1];
NpcGroupList N(npcGroupList_80243054);
s32 pad_003078[2];
const char D_80243088_C713B8[8]; // "kzn_06"
s32 pad_0030E4[1];
s32 pad_003144[3];

// text: func_80240000_C6E330

// text: func_80240348_C6E678

// text: func_8024040C_C6E73C

// text: func_80240530_C6E860

s32 pad_000718[] = {
    0x00000000, 0x00000000,
};

// text: func_80240720_C6EA50

// text: func_802407F4_C6EB24

// text: func_80240820_C6EB50

// text: func_802409D0_C6ED00

// text: N(UnkNpcAIFunc1)

// text: func_802410B8_C6F3E8

// text: N(UnkNpcAIFunc2)

// text: func_80241474_C6F7A4

// text: func_802414E0_C6F810

// text: N(UnkNpcAIFunc3)

// text: func_80241678_C6F9A8

// text: func_80241A08_C6FD38

// text: func_80241B2C_C6FE5C

// text: func_80241D18_C70048

// text: func_80241E48_C70178

// text: func_802420C8_C703F8

// text: func_80242124_C70454

s32 pad_00230C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 290.0f, 0.0f, 70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190109,
};

Script N(script_80242360) = SCRIPT({
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
});

Script N(script_8024239C) = SCRIPT({
    0x802D5FF8(66, 1);
    sleep 130;
    0x802D5FD8();
});

s32 pad_0023D8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802423E0)[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802423E4) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_8024040C_C6E73C();
                    return;
                }
            }
        }
    }
    func_80240530_C6E860();
});

s32 N(unk_80242480)[] = {
    0x00010026,
};

Script N(script_ExitWalk_80242484) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243088_C713B8, 1);
    sleep 100;
});

Script N(script_802424E0) = SCRIPT({
    bind N(script_ExitWalk_80242484) to 0x80000 0;
});

Script N(script_8024250C) = SCRIPT({
    group 0;
    SetTexPanner(38, 0);
    SetTexPanner(39, 1);
    SetTexPanner(37, 1);
    SetTexPanner(40, 1);
    SetTexPanner(41, 1);
    SetTexPanner(36, 1);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0xFFFFFE70;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFCE0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802423E4);
    }
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFE70;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFCE0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802423E4);
    }
});

s32 N(lavaResetList_80242778)[] = {
    0x0000000C, 0x42F00000, 0x00000000, 0x42C80000, 0x00000008, 0xC2F00000, 0x00000000, 0x42C80000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0006);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243054));
    await N(script_MakeEntities);
    spawn N(script_80242360);
    ModifyColliderFlags(3, 25, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80242778));
    }
    spawn N(script_8024250C);
    SI_VAR(0) = N(script_802424E0);
    spawn EnterWalk;
    sleep 1;
    spawn {
        group 0;
        func_80240000_C6E330(0, 0);
    }
    spawn {
        func_80240348_C6E678(N(unk_80242480));
    }
});

s32 pad_002924[] = {
    0x00000000, 0x00000000, 0x00000000,
};

f32 N(floatTable_80242930)[] = {
    0.020000f, 0.020000f, 0.040000f, 0.080000f, 0.110000f, 0.200000f, 0.300000f, 0.310000f,
    0.420000f, 0.460000f, 0.500000f, 0.530000f, 0.560000f, 0.590000f, 0.620000f, 0.650000f,
    0.680000f, 0.710000f, 0.740000f, 0.770000f, 0.800000f, 0.830000f, 0.860000f, 0.890000f,
    0.920000f, 0.950000f, 0.980000f, 1.000000f,
};

Script N(script_802429A0) = SCRIPT({
    if (SI_SAVE_FLAG(1315) == 0) {
    10:
        if (SI_SAVE_FLAG(1315) == 0) {
            sleep 1;
            goto 10;
        }
        sleep 60;
        spawn N(script_8024239C);
        ShowMessageAtScreenPos(0x1D0186, 160, 40);
        func_802407F4_C6EB24();
        SI_SAVE_VAR(0) = 28;
    }
});

Script N(script_80242A50) = SCRIPT({
    SI_SAVE_FLAG(1314) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE0C, 0, 45, 0xFFFFFEDE, 0, 6, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1315));
    spawn N(script_802429A0);
    if (SI_SAVE_FLAG(1314) == 0) {
        MakeEntity(0x802EA274, 175, 35, 0xFFFFFF47, 0, 0x80000000);
        AssignScript(N(script_80242A50));
    }
    CreatePushBlockGrid(0, 15, 5, 0xFFFFFFC2, 0, 35, 0);
    SetPushBlockFallEffect(0, func_80240720_C6EA50);
    SetPushBlock(0, 8, 1, 1);
    SetPushBlock(0, 11, 4, 1);
});

s32 pad_002B84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

f32 N(floatTable_80242B90)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_80242BA8) = {
    .moveSpeed = 0.800000011920929,
    .moveTime = 0x64,
    .waitTime = 0,
    .alertRadius = 90.0,
    .unk_10 = 0.0,
    .unk_14 = 0x4,
    .chaseSpeed = 3.200000047683716,
    .unk_1C = 0xA,
    .unk_20 = 0x1,
    .chaseRadius = 100.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242BD8) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0);
    SetSelfVar(6, 0);
    SetSelfVar(1, 150);
    func_80242124_C70454(N(aISettings_80242BA8));
});

NpcSettings N(npcSettings_80242C48) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242BD8),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80242C74)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242C48),
        .pos = { -200.0, 50.0, 150.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF38, 0x00000032, 0x00000096, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF38, 0x00000032, 0x00000096, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00460001, 0x00460002, 0x00460003, 0x00460003, 0x00460001, 0x00460001, 0x00460007, 0x00460007, 0x00460004, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001,
        },
    },
};

StaticNpc N(npcGroup_80242E64)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242C48),
        .pos = { -250.0, 80.0, 50.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF06, 0x00000050, 0x00000032, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF06, 0x00000050, 0x00000032, 0x0000012C },
        .animations = {
            0x00460001, 0x00460002, 0x00460003, 0x00460003, 0x00460001, 0x00460001, 0x00460007, 0x00460007, 0x00460004, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001,
        },
    },
};

NpcGroupList N(npcGroupList_80243054) = {
    NPC_GROUP(N(npcGroup_80242C74), 0x16050002),
    NPC_GROUP(N(npcGroup_80242E64), 0x16060002),
    {},
};

s32 pad_003078[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243080_C713B0

// rodata: D_80243088_C713B8

// rodata: D_80243090_C713C0

// rodata: D_80243098_C713C8

// rodata: D_802430A0_C713D0

// rodata: jtbl_802430A8_C713D8

s32 pad_0030E4[] = {
    0x00000000,
};

// rodata: D_802430E8_C71418

// rodata: jtbl_802430F0_C71420

s32 pad_003144[] = {
    0x00000000, 0x00000000, 0x00000000,
};

