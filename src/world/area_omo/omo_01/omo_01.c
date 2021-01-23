#include "omo_01.h"

s32 pad_00025C[1];
s32 pad_000C24[3];
Script N(script_80240C80);
s32 pad_000CAC[1];
Script N(script_ExitWalk_80240CB0);
Script N(script_80240D0C);
Script N(main);
s32 pad_000E5C[1];
Script N(script_80240E60);
Script N(script_80240F6C);
Script N(script_802411D8);
s32 N(unk_802412A0)[2];
Script N(script_802412A8);
Script N(script_802412C4);
s32 pad_001304[3];
Script N(script_NpcAI_80241340);
Script N(script_8024138C);
Script N(script_Defeat_802415C0);
Script N(script_Init_802416A0);
StaticNpc N(npcGroup_802417A0)[1];
Script N(script_Init_80241990);
StaticNpc N(npcGroup_80241A00)[1];
Script N(script_Init_80241BF0);
StaticNpc N(npcGroup_80241C60)[1];
Script N(script_Init_80241E50);
StaticNpc N(npcGroup_80241EC0)[1];
Script N(script_Init_802420B0);
StaticNpc N(npcGroup_80242120)[1];
NpcGroupList N(npcGroupList_80242310);
s32 pad_002358[2];
Script N(script_MakeEntities);
s32 pad_002434[3];
const char D_80242440_D9D330[8]; // "omo_13"
s32 pad_0025D8[2];

// text: func_80240000_D9AEF0

s32 pad_00025C[] = {
    0x00000000,
};

// text: func_80240260_D9B150

// text: func_80240844_D9B734

// text: func_802409A8_D9B898

// text: func_802409EC_D9B8DC

s32 pad_000C24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 350.0f, 0.0f, -330.0f, 225.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900D9,
};

Script N(script_80240C80) = SCRIPT({
    SetMusicTrack(0, 32, 0, 8);
});

s32 pad_000CAC[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240CB0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242440_D9D330, 0);
    sleep 100;
});

Script N(script_80240D0C) = SCRIPT({
    bind N(script_ExitWalk_80240CB0) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1980) = 1;
    SI_SAVE_FLAG(1107) = 1;
    SI_SAVE_FLAG(268) = 1;
    MakeNpcs(1, N(npcGroupList_80242310));
    await N(script_MakeEntities);
    await N(script_802412C4);
    await N(script_80240C80);
    SI_VAR(0) = N(script_80240D0C);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_000E5C[] = {
    0x00000000,
};

Script N(script_80240E60) = SCRIPT({
    loop {
        MakeLerp(0, 0xFFFFFE98, 100, 0);
        loop {
            UpdateLerp();
            RotateModel(95, SI_VAR(0), 1, 0, 1);
            RotateModel(97, SI_VAR(0), 1, 0, 1);
            RotateModel(99, SI_VAR(0), 1, 0, 1);
            RotateModel(101, SI_VAR(0), 1, 0, 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(script_80240F6C) = SCRIPT({
    loop {
        MakeLerp(0, 160, 60, 10);
    1:
        UpdateLerp();
        RotateModel(117, SI_VAR(0), 0, -1, 0);
        RotateModel(119, SI_VAR(0), 0, 1, 0);
        RotateModel(121, SI_VAR(0), 0, -1, 0);
        RotateModel(123, SI_VAR(0), 0, 1, 0);
        RotateModel(125, SI_VAR(0), 0, -1, 0);
        RotateModel(127, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
        MakeLerp(160, 0, 60, 10);
    2:
        UpdateLerp();
        RotateModel(117, SI_VAR(0), 0, -1, 0);
        RotateModel(119, SI_VAR(0), 0, 1, 0);
        RotateModel(121, SI_VAR(0), 0, -1, 0);
        RotateModel(123, SI_VAR(0), 0, 1, 0);
        RotateModel(125, SI_VAR(0), 0, -1, 0);
        RotateModel(127, SI_VAR(0), 0, 1, 0);
        sleep 2;
        if (SI_VAR(1) == 1) {
            goto 2;
        }
    }
});

Script N(script_802411D8) = SCRIPT({
    loop {
        MakeLerp(0, 0xFFFFFE98, 100, 0);
    1:
        UpdateLerp();
        RotateModel(130, SI_VAR(0), 0, 0, 1);
        RotateModel(135, SI_VAR(0), 1, 0, 1);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
    }
});

s32 N(unk_802412A0)[] = {
    0x0000008D, 0x0000008E,
};

Script N(script_802412A8) = SCRIPT({
    func_80240000_D9AEF0();
});

Script N(script_802412C4) = SCRIPT({
    spawn N(script_80240E60);
    spawn N(script_80240F6C);
    spawn N(script_802411D8);
    spawn N(script_802412A8);
});

s32 pad_001304[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80241310) = {
    .moveSpeed = 2.5f,
    .moveTime = 0x32,
    .waitTime = 0xF,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 3.9f,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 180.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241340) = SCRIPT({
    func_802409EC_D9B8DC(N(aISettings_80241310));
});

NpcSettings N(npcSettings_80241360) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241340),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

Script N(script_8024138C) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(13) = SI_VAR(2);
    SI_VAR(14) = SI_VAR(3);
    SetNpcVar(SI_VAR(10), 10, 0);
    GetNpcPos(SI_VAR(10), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(3) += 26;
    MakeItemEntity(SI_VAR(11), SI_VAR(2), SI_VAR(3), SI_VAR(4), 1, 0);
    SI_VAR(9) = SI_VAR(0);
    sleep 1;
10:
    GetNpcPos(SI_VAR(10), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(3) += 26;
    SI_VAR(4) -= 1;
    SetItemPos(SI_VAR(9), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    sleep 1;
    GetNpcVar(SI_VAR(10), 10, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        goto 10;
    }
    RemoveItemEntity(SI_VAR(9));
    match SI_VAR(13) {
        == 0 {
            MakeItemEntity(SI_VAR(11), SI_VAR(2), SI_VAR(3), SI_VAR(4), 12, SI_VAR(14));
        }
        == 1 {
            DropItemEntity(SI_VAR(11), SI_VAR(2), SI_VAR(3), SI_VAR(4), 13, SI_VAR(14));
        }
        == 2 {
            DropItemEntity(SI_VAR(11), SI_VAR(2), SI_VAR(3), SI_VAR(4), 14, SI_VAR(14));
        }
    }
});

Script N(script_Defeat_802415C0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(1109) = 1;
            SetSelfVar(10, 1);
            sleep 2;
            DoNpcDefeat();
        }
        == 2 {
            func_80045900(0);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
            SetSelfVar(10, 1);
        }
    }
});

Script N(script_Init_802416A0) = SCRIPT({
    if (SI_SAVE_FLAG(1109) == 1) {
        if (SI_SAVE_FLAG(1108) == 0) {
            RemoveNpc(-1);
        }
    }
    BindNpcDefeat(-1, N(script_Defeat_802415C0));
    SI_VAR(0) = 0;
    if (SI_SAVE_FLAG(1108) == 0) {
        SI_VAR(1) = 48;
        SI_VAR(2) = 1;
        SI_VAR(3) =c 0xF8405FD4;
    } else {
        SI_VAR(1) = 163;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
    }
    spawn N(script_8024138C);
});

StaticNpc N(npcGroup_802417A0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241360),
        .pos = { -165.0, 0.0, -50.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_802416A0),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_DIZZY_DIAL, 2 }, { ItemId_SUPER_SHROOM, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DRIED_SHROOM, 2 }, { ItemId_SLEEPY_SHEEP, 2 }, { ItemId_P_O_W_BLOCK, 2 }, { ItemId_FRIGHT_JAR, 2 } },
        .movement = { 0xFFFFFF5B, 0x00000000, 0xFFFFFFCE, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF5B, 0x00000000, 0xFFFFFFCE, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0004, 0x003B0004, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

Script N(script_Init_80241990) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_802415C0));
    SI_VAR(0) = 1;
    SI_VAR(1) = 170;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    spawn N(script_8024138C);
});

StaticNpc N(npcGroup_80241A00)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241360),
        .pos = { -25.0, 0.0, -160.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80241990),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_DIZZY_DIAL, 2 }, { ItemId_SUPER_SHROOM, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DRIED_SHROOM, 2 }, { ItemId_SLEEPY_SHEEP, 2 }, { ItemId_P_O_W_BLOCK, 2 }, { ItemId_FRIGHT_JAR, 2 } },
        .movement = { 0xFFFFFFE7, 0x00000000, 0xFFFFFF60, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFE7, 0x00000000, 0xFFFFFF60, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0401, 0x003B0402, 0x003B0404, 0x003B0404, 0x003B0401, 0x003B0401, 0x003B040C, 0x003B040C, 0x003B0415, 0x003B0412, 0x003B0411, 0x003B0410, 0x003B0405, 0x003B0401, 0x003B0401, 0x003B0401,
        },
    },
};

Script N(script_Init_80241BF0) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_802415C0));
    SI_VAR(0) = 2;
    SI_VAR(1) = 170;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    spawn N(script_8024138C);
});

StaticNpc N(npcGroup_80241C60)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241360),
        .pos = { -60.0, 0.0, 390.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80241BF0),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_DIZZY_DIAL, 2 }, { ItemId_SUPER_SHROOM, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DRIED_SHROOM, 2 }, { ItemId_SLEEPY_SHEEP, 2 }, { ItemId_P_O_W_BLOCK, 2 }, { ItemId_FRIGHT_JAR, 2 } },
        .movement = { 0xFFFFFFC4, 0x00000000, 0x00000186, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFC4, 0x00000000, 0x00000186, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0401, 0x003B0402, 0x003B0404, 0x003B0404, 0x003B0401, 0x003B0401, 0x003B040C, 0x003B040C, 0x003B0415, 0x003B0412, 0x003B0411, 0x003B0410, 0x003B0405, 0x003B0401, 0x003B0401, 0x003B0401,
        },
    },
};

Script N(script_Init_80241E50) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_802415C0));
    SI_VAR(0) = 3;
    SI_VAR(1) = 138;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    spawn N(script_8024138C);
});

StaticNpc N(npcGroup_80241EC0)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80241360),
        .pos = { 50.0, 0.0, 230.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80241E50),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_DIZZY_DIAL, 2 }, { ItemId_SUPER_SHROOM, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DRIED_SHROOM, 2 }, { ItemId_SLEEPY_SHEEP, 2 }, { ItemId_P_O_W_BLOCK, 2 }, { ItemId_FRIGHT_JAR, 2 } },
        .movement = { 0x00000032, 0x00000000, 0x000000E6, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000032, 0x00000000, 0x000000E6, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0101, 0x003B0102, 0x003B0104, 0x003B0104, 0x003B0101, 0x003B0101, 0x003B010C, 0x003B010C, 0x003B0115, 0x003B0112, 0x003B0111, 0x003B0110, 0x003B0105, 0x003B0101, 0x003B0101, 0x003B0101,
        },
    },
};

Script N(script_Init_802420B0) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_802415C0));
    SI_VAR(0) = 4;
    SI_VAR(1) = 128;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    spawn N(script_8024138C);
});

StaticNpc N(npcGroup_80242120)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80241360),
        .pos = { 340.0, 0.0, 120.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_802420B0),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_DIZZY_DIAL, 2 }, { ItemId_SUPER_SHROOM, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DRIED_SHROOM, 2 }, { ItemId_SLEEPY_SHEEP, 2 }, { ItemId_P_O_W_BLOCK, 2 }, { ItemId_FRIGHT_JAR, 2 } },
        .movement = { 0x00000154, 0x00000000, 0x00000078, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000154, 0x00000000, 0x00000078, 0x0000012C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0201, 0x003B0202, 0x003B0204, 0x003B0204, 0x003B0201, 0x003B0201, 0x003B020C, 0x003B020C, 0x003B0215, 0x003B0212, 0x003B0211, 0x003B0210, 0x003B0205, 0x003B0201, 0x003B0201, 0x003B0201,
        },
    },
};

NpcGroupList N(npcGroupList_80242310) = {
    NPC_GROUP(N(npcGroup_802417A0), 0x10000001),
    NPC_GROUP(N(npcGroup_80241A00), 0x10020001),
    NPC_GROUP(N(npcGroup_80241C60), 0x10020001),
    NPC_GROUP(N(npcGroup_80241EC0), 0x10010001),
    NPC_GROUP(N(npcGroup_80242120), 0x10050001),
    {},
};

s32 pad_002358[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1109) == 1) {
        if (SI_SAVE_FLAG(1108) == 0) {
            MakeItemEntity(48, 0xFFFFFFA3, 0, 35, 17, SI_SAVE_FLAG(1108));
        }
    }
    MakeEntity(D_802EA588, 0xFFFFFFB0, 60, 0xFFFFFF15, 0, 150, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1110));
    MakeEntity(D_802EA588, 0xFFFFFFE2, 60, 0xFFFFFF15, 0, 152, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1111));
});

s32 pad_002434[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242440_D9D330

// rodata: jtbl_80242448_D9D338

s32 pad_0025D8[] = {
    0x00000000, 0x00000000,
};
