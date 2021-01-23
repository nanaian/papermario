#include "sbk_60.h"

s32 pad_000038[2];
s32 pad_000054[3];
Script N(script_ExitWalk_802400E0);
Script N(script_ExitWalk_8024013C);
Script N(script_80240198);
Script N(main);
s32 pad_0002F4[3];
Script N(script_NpcAI_80240330);
StaticNpc N(npcGroup_80240388)[1];
NpcGroupList N(npcGroupList_80240578);
const char D_80240590_956F80[8]; // "sbk_61"
const char D_80240598_956F88[8]; // "sbk_50"

// text: func_80240000_9569F0

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_956A30

s32 pad_000054[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19008C,
};

Script N(script_ExitWalk_802400E0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240590_956F80, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024013C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80240598_956F88, 3);
    sleep 100;
});

Script N(script_80240198) = SCRIPT({
    bind N(script_ExitWalk_802400E0) to 0x80000 5;
    bind N(script_ExitWalk_8024013C) to 0x80000 3;
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
    MakeNpcs(0, N(npcGroupList_80240578));
    func_80240000_9569F0();
    SetMusicTrack(0, 23, 0, 8);
    SI_VAR(0) = N(script_80240198);
    spawn EnterWalk;
});

s32 pad_0002F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80240300) = {
    .moveSpeed = 1.7999999523162842,
    .moveTime = 0x32,
    .waitTime = 0xA,
    .alertRadius = 250.0,
    .unk_10 = 0.0,
    .unk_14 = 0x2,
    .chaseSpeed = 3.5,
    .unk_1C = 0x2D,
    .unk_20 = 0x6,
    .chaseRadius = 300.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240330) = SCRIPT({
    func_80240040_956A30();
    DoBasicAI(N(aISettings_80240300));
});

NpcSettings N(npcSettings_8024035C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240330),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x9,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80240388)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024035C),
        .pos = { 160.0, 0.0, -120.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_DRIED_FRUIT, 9 }, { ItemId_TASTY_TONIC, 1 } },
        .movement = { 0x000000A0, 0x00000000, 0xFFFFFF88, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310004, 0x00310008, 0x00310008, 0x00310008, 0x00310004, 0x00310004, 0x0031000C, 0x0031000C, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008, 0x00310008,
        },
    },
};

NpcGroupList N(npcGroupList_80240578) = {
    NPC_GROUP(N(npcGroup_80240388), 0x0A030001),
    {},
};

// rodata: D_80240590_956F80

// rodata: D_80240598_956F88

