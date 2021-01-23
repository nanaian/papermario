#include "sbk_05.h"

s32 pad_000038[2];
s32 pad_000054[3];
Script N(script_ExitWalk_802400F0);
Script N(script_ExitWalk_8024014C);
Script N(script_ExitWalk_802401A8);
Script N(script_80240204);
Script N(script_EnterWalk_80240268);
Script N(main);
s32 pad_0003F4[3];
Script N(script_80240400);
s32 pad_000434[3];
Script N(script_NpcAI_80240470);
StaticNpc N(npcGroup_802404C8)[1];
StaticNpc N(npcGroup_802406B8)[1];
StaticNpc N(npcGroup_802408A8)[1];
StaticNpc N(npcGroup_80240A98)[1];
StaticNpc N(npcGroup_80240C88)[1];
StaticNpc N(npcGroup_80240E78)[1];
StaticNpc N(npcGroup_80241068)[1];
StaticNpc N(npcGroup_80241258)[1];
StaticNpc N(npcGroup_80241448)[1];
StaticNpc N(npcGroup_80241638)[1];
NpcGroupList N(npcGroupList_80241828);
s32 pad_0018AC[1];
const char D_802418B0_9325A0[8]; // "sbk_04"
const char D_802418B8_9325A8[8]; // "sbk_06"
const char D_802418C0_9325B0[8]; // "sbk_15"
s32 pad_0018C8[2];

// text: func_80240000_930CF0

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_930D30

s32 pad_000054[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
    { 157.0f, 200.0f, -338.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190066,
};

Script N(script_ExitWalk_802400F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802418B0_9325A0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024014C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802418B8_9325A8, 0);
    sleep 100;
});

Script N(script_ExitWalk_802401A8) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802418C0_9325B0, 2);
    sleep 100;
});

Script N(script_80240204) = SCRIPT({
    bind N(script_ExitWalk_802400F0) to 0x80000 7;
    bind N(script_ExitWalk_8024014C) to 0x80000 3;
    bind N(script_ExitWalk_802401A8) to 0x80000 5;
});

Script N(script_EnterWalk_80240268) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            spawn N(script_80240204);
        } else {
            SI_VAR(0) = N(script_80240204);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 10;
    SetSpriteShading(-1);
    if (SI_SAVE_VAR(0) == 0xFFFFFFC1) {
        DisablePulseStone(0);
    }
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80241828));
    await N(script_80240400);
    func_80240000_930CF0();
    SetMusicTrack(0, 23, 0, 8);
    spawn N(script_EnterWalk_80240268);
    sleep 1;
});

s32 pad_0003F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240400) = SCRIPT({
    MakeItemEntity(128, 0xFFFFFF9C, 0, 0xFFFFFE43, 17, SI_SAVE_FLAG(831));
});

s32 pad_000434[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80240440) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x32,
    .waitTime = 0xA,
    .alertRadius = 250.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x2D,
    .unk_20 = 0x6,
    .chaseRadius = 300.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240470) = SCRIPT({
    func_80240040_930D30();
    DoBasicAI(N(aISettings_80240440));
});

NpcSettings N(npcSettings_8024049C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240470),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802404C8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024049C),
        .pos = { -280.0, 0.0, -110.0 },
        .flags = 0x00002C00,
        .yaw = 180,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFEE8, 0x00000000, 0xFFFFFF92, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_802406B8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024049C),
        .pos = { -200.0, 0.0, -80.0 },
        .flags = 0x00002C00,
        .yaw = 120,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF38, 0x00000000, 0xFFFFFFB0, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_802408A8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_8024049C),
        .pos = { -160.0, 0.0, -225.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF60, 0x00000000, 0xFFFFFF1F, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240A98)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_8024049C),
        .pos = { -100.0, 0.0, 70.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF9C, 0x00000000, 0x00000046, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240C88)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_8024049C),
        .pos = { -10.0, 0.0, 30.0 },
        .flags = 0x00002C00,
        .yaw = 80,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFFF6, 0x00000000, 0x0000001E, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80240E78)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_8024049C),
        .pos = { 20.0, 0.0, -110.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x00000014, 0x00000000, 0xFFFFFF92, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80241068)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_8024049C),
        .pos = { 170.0, 0.0, -50.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x000000AA, 0x00000000, 0xFFFFFFCE, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80241258)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_8024049C),
        .pos = { 250.0, 0.0, 130.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x000000FA, 0x00000000, 0x00000082, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80241448)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_8024049C),
        .pos = { 340.0, 0.0, 200.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x00000154, 0x00000000, 0x000000C8, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

StaticNpc N(npcGroup_80241638)[] = {
    {
        .id = 9,
        .settings = &N(npcSettings_8024049C),
        .pos = { -150.0, 0.0, 360.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0xFFFFFF6A, 0x00000000, 0x00000168, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

NpcGroupList N(npcGroupList_80241828) = {
    NPC_GROUP(N(npcGroup_802404C8), 0x0A000001),
    NPC_GROUP(N(npcGroup_802406B8), 0x0A000001),
    NPC_GROUP(N(npcGroup_802408A8), 0x0A000001),
    NPC_GROUP(N(npcGroup_80240A98), 0x0A020001),
    NPC_GROUP(N(npcGroup_80240C88), 0x0A020001),
    NPC_GROUP(N(npcGroup_80240E78), 0x0A030001),
    NPC_GROUP(N(npcGroup_80241068), 0x0A010001),
    NPC_GROUP(N(npcGroup_80241258), 0x0A010001),
    NPC_GROUP(N(npcGroup_80241448), 0x0A010001),
    NPC_GROUP(N(npcGroup_80241638), 0x0A010001),
    {},
};

s32 pad_0018AC[] = {
    0x00000000,
};

// rodata: D_802418B0_9325A0

// rodata: D_802418B8_9325A8

// rodata: D_802418C0_9325B0

s32 pad_0018C8[] = {
    0x00000000, 0x00000000,
};
