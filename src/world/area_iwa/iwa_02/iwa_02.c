#include "iwa_02.h"

s32 pad_0010F8[2];
Script N(script_ExitWalk_80241180);
Script N(script_ExitWalk_802411DC);
Script N(script_ExitWalk_80241238);
Script N(script_80241294);
Script N(main);
s32 pad_0013F4[3];
Script N(script_MakeEntities);
s32 pad_0014AC[1];
Script N(script_802414B0);
Script N(script_8024154C);
Script N(script_802415FC);
s32 unk_missing_80241848[22];
Script N(script_802418A0);
Script N(script_80241924);
Script N(script_NpcAI_802419EC);
s32 unk_missing_80241C84[4];
Script N(script_NpcAI_80241D1C);
Script N(script_80241D6C);
s32 N(unk_80241DA8)[1];
Script N(script_80241DAC);
Script N(script_80241DDC);
StaticNpc N(npcGroup_80241E0C)[1];
StaticNpc N(npcGroup_80241FFC)[1];
StaticNpc N(npcGroup_802421EC)[1];
StaticNpc N(npcGroup_802423DC)[2];
Script N(script_802427BC);
Script N(script_Interact_8024284C);
Script N(script_Init_80242A70);
StaticNpc N(npcGroup_80242AEC)[1];
NpcGroupList N(npcGroupList_80242CDC);
s32 pad_002D24[3];
const char D_80242D30_918AA0[8]; // "iwa_01"
const char D_80242D38_918AA8[8]; // "iwa_04"
s32 pad_002E3C[1];

// text: func_80240000_915D70

// text: func_80240160_915ED0

// text: func_802401D4_915F44

// text: func_80240304_916074

// text: func_802403A0_916110

// text: func_80240428_916198

// text: func_802404D0_916240

// text: func_80240644_9163B4

// text: func_80240694_916404

// text: func_80240834_9165A4

// text: func_80240984_9166F4

// text: func_80240A30_9167A0

// text: func_80240B68_9168D8

// text: func_80240BE4_916954

// text: N(UnkDurationCheck)

// text: func_80240C90_916A00

// text: func_80240FE0_916D50

// text: func_80241094_916E04

s32 pad_0010F8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -172.0f, 0.0f, 164.0f, 90.0f },
    { -194.0f, 238.0f, 238.0f, 90.0f },
    { 1183.0f, 288.0f, 60.0f, 270.0f },
    { 1231.0f, 50.0f, 243.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19005C,
};

Script N(script_ExitWalk_80241180) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242D30_918AA0, 2);
    sleep 100;
});

Script N(script_ExitWalk_802411DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242D30_918AA0, 3);
    sleep 100;
});

Script N(script_ExitWalk_80241238) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80242D38_918AA8, 0);
    sleep 100;
});

Script N(script_80241294) = SCRIPT({
    bind N(script_ExitWalk_80241180) to 0x80000 2;
    bind N(script_ExitWalk_802411DC) to 0x80000 37;
    bind N(script_ExitWalk_80241238) to 0x80000 41;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 8;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242CDC));
    await N(script_MakeEntities);
    SetMusicTrack(0, 22, 0, 8);
    SI_VAR(0) = N(script_80241294);
    spawn EnterWalk;
    sleep 1;
    ModifyColliderFlags(0, 44, 0x7FFFFE00);
});

s32 pad_0013F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BCD9C, 64, 0, 95, 0, 120, 0x80000000);
    MakeEntity(0x802BCD9C, 307, 67, 99, 0, 120, 0x80000000);
    MakeEntity(0x802BCD9C, 700, 238, 15, 0, 90, 0x80000000);
    MakeItemEntity(348, 35, 167, 120, 17, SI_SAVE_FLAG(687));
});

s32 pad_0014AC[] = {
    0x00000000,
};

Script N(script_802414B0) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcFlagBits(-1, 4, 1);
    SetNpcFlagBits(-1, 512, 1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
});

Script N(script_8024154C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0x2F0012);
});

NpcAISettings N(aISettings_802415CC) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 90.0f,
    .unk_10 = 70.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x5A,
    .unk_20 = 0x19,
    .chaseRadius = 120.0f,
    .unk_28 = 70.0f,
    .unk_2C = 0x1,
};

Script N(script_802415FC) = SCRIPT({
    0x800445D4(SI_VAR(0));
    if (SI_VAR(0) == 100) {
        SetSelfEnemyFlagBits(32, 1);
10:
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        IsPlayerWithin(SI_VAR(0), SI_VAR(2), 80, SI_VAR(3));
        if (SI_VAR(3) != 1) {
            sleep 1;
            goto 10;
        }
        GetSelfNpcID(SI_VAR(0));
        SI_VAR(0) += 1;
        GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(2) += 30;
        SetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        SetNpcFlagBits(-1, 4, 0);
        EnableNpcShadow(-1, 1);
        SetNpcAnimation(-1, 0x2F000E);
        GetNpcPos(-1, SI_VAR(4), SI_VAR(5), SI_VAR(6));
        SI_VAR(5) += 30;
        SetNpcJumpscale(-1, 1.0);
        PlaySoundAtNpc(-1, 803, 0);
        NpcJump0(-1, SI_VAR(4), SI_VAR(5), SI_VAR(6), 20);
        SetNpcPos(SI_VAR(0), 0, 0xFFFFFC18, 0);
        SetSelfEnemyFlagBits(32, 0);
        NpcFacePlayer(-1, 0);
        SetSelfEnemyFlagBits(0x40000000, 1);
        DoBasicAI(N(aISettings_802415CC));
    });

    s32 unk_missing_80241848[] = {
        0x00000000, 0x00180016, N(script_802414B0), 0x00000000, N(script_802415FC), 0x80077F70, 0x00000000, 0x8007809C,
        0x00000000, 0x00000000, 0x00080001, 0x00000000, 0x00180016, N(script_8024154C), 0x00000000, 0x00000000,
        0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080001,
    };

    Script N(script_802418A0) = SCRIPT({
        EnableNpcShadow(-1, 0);
        SetNpcFlagBits(-1, 4, 1);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) -= 50;
        SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    });

    Script N(script_80241924) = SCRIPT({
        SetNpcFlagBits(-1, 0x40000, 1);
        EnableNpcShadow(-1, 0);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) -= 50;
        SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcAnimation(-1, 0x2F0013);
    });

    NpcAISettings N(aISettings_802419BC) = {
        .moveSpeed = 1.8f,
        .moveTime = 0x1E,
        .waitTime = 0x1E,
        .alertRadius = 90.0f,
        .unk_10 = 70.0f,
        .unk_14 = 0x2,
        .chaseSpeed = 3.0f,
        .unk_1C = 0x5A,
        .unk_20 = 0x19,
        .chaseRadius = 120.0f,
        .unk_28 = 70.0f,
        .unk_2C = 0x1,
    };

    Script N(script_NpcAI_802419EC) = SCRIPT({
        0x800445D4(SI_VAR(0));
        if (SI_VAR(0) == 100) {
            SetSelfEnemyFlagBits(32, 1);
10:
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) += 130;
            IsPlayerWithin(SI_VAR(0), SI_VAR(2), 80, SI_VAR(3));
            if (SI_VAR(3) != 1) {
                sleep 1;
                goto 10;
            }
            GetSelfNpcID(SI_VAR(0));
            SI_VAR(0) += 1;
            GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
            SI_VAR(2) += 30;
            SI_VAR(3) += 50;
            SetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            SetNpcFlagBits(-1, 4, 0);
            SetNpcFlagBits(-1, 64, 1);
            EnableNpcShadow(-1, 1);
            SetNpcAnimation(-1, 0x2F000E);
            SetNpcPos(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            SI_VAR(2) -= 30;
            SI_VAR(3) += 80;
            SetNpcJumpscale(-1, 0.7001953125);
            PlaySoundAtNpc(-1, 803, 0);
            NpcJump0(-1, SI_VAR(1), SI_VAR(2), SI_VAR(3), 20);
            SetNpcFlagBits(-1, 64, 0);
            SetSelfEnemyFlagBits(32, 0);
            NpcFacePlayer(-1, 0);
            SetSelfEnemyFlagBits(0x40000000, 1);
        }
        DoBasicAI(N(aISettings_802419BC));
    });

    s32 unk_missing_80241C84[] = {
        0x00000002, 0x00000000, 0x00000001, 0x00000000,
    };

    NpcSettings N(npcSettings_80241C94) = {
        .unk_00 = { 0, 0, 0, 0 },
        .height = 0x18,
        .radius = 0x16,
        .otherAI = &N(script_802418A0),
        .onInteract = NULL,
        .ai = &N(script_NpcAI_802419EC),
        .onHit = 0x80077F70,
        .aux = NULL,
        .onDefeat = 0x8007809C,
        .flags = 0,
        .unk_24 = { 0, 0, 0, 0 },
        .level = 0x8,
        .unk_2A = 0x1,
    };

    NpcSettings N(npcSettings_80241CC0) = {
        .unk_00 = { 0, 0, 0, 0 },
        .height = 0x18,
        .radius = 0x16,
        .otherAI = &N(script_80241924),
        .onInteract = NULL,
        .ai = NULL,
        .onHit = NULL,
        .aux = NULL,
        .onDefeat = NULL,
        .flags = 0,
        .unk_24 = { 0, 0, 0, 0 },
        .level = 0x8,
        .unk_2A = 0x1,
    };

    NpcAISettings N(aISettings_80241CEC) = {
        .moveSpeed = 1.0f,
        .moveTime = 0x1E,
        .waitTime = 0x1E,
        .alertRadius = 120.0f,
        .unk_10 = 0.0f,
        .unk_14 = 0x3,
        .chaseSpeed = 7.0f,
        .unk_1C = 0x3C,
        .unk_20 = 0x5,
        .chaseRadius = 100.0f,
        .unk_28 = 60.0f,
        .unk_2C = 0x1,
    };

    Script N(script_NpcAI_80241D1C) = SCRIPT({
        func_80240C90_916A00(N(aISettings_80241CEC), 16);
    });

    NpcSettings N(npcSettings_80241D40) = {
        .unk_00 = { 0, 0, 0, 0 },
        .height = 0x1A,
        .radius = 0x18,
        .otherAI = NULL,
        .onInteract = NULL,
        .ai = &N(script_NpcAI_80241D1C),
        .onHit = 0x80077F70,
        .aux = NULL,
        .onDefeat = 0x8007809C,
        .flags = 0,
        .unk_24 = { 0, 0, 0, 0 },
        .level = 0xA,
        .unk_2A = 0,
    };

    Script N(script_80241D6C) = SCRIPT({

    });

    NpcSettings N(npcSettings_80241D7C) = {
        .unk_00 = { 0, 0, 0, 0 },
        .height = 0x2A,
        .radius = 0x1A,
        .otherAI = &N(script_80241D6C),
        .onInteract = NULL,
        .ai = NULL,
        .onHit = NULL,
        .aux = NULL,
        .onDefeat = NULL,
        .flags = 0,
        .unk_24 = { 0, 0, 0, 0 },
        .level = 0x63,
        .unk_2A = 0,
    };

    s32 N(unk_80241DA8)[] = {
        0x00000000,
    };

    Script N(script_80241DAC) = SCRIPT({
        ShowGotItem(SI_VAR(0), 1, 0);
        return;
    });

    Script N(script_80241DDC) = SCRIPT({
        ShowGotItem(SI_VAR(0), 1, 16);
        return;
    });

    StaticNpc N(npcGroup_80241E0C)[] = {
        {
            .id = 0,
            .settings = &N(npcSettings_80241D40),
            .pos = { 526.0, 238.0, 69.0 },
            .flags = 0x00002400,
            .yaw = 0,
            .dropFlags = 0x80,
            .movement = { 0x0000020E, 0x000000EE, 0x00000045, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000020E, 0x000000EE, 0x00000045, 0x000000C8 },
            .animations = {
                0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
            },
        },
    };

    StaticNpc N(npcGroup_80241FFC)[] = {
        {
            .id = 1,
            .settings = &N(npcSettings_80241D40),
            .pos = { 450.0, 50.0, 215.0 },
            .flags = 0x00002400,
            .yaw = 90,
            .dropFlags = 0x80,
            .movement = { 0x000001C2, 0x00000032, 0x000000D7, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001C2, 0x00000032, 0x000000D7, 0x000000C8 },
            .animations = {
                0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
            },
        },
    };

    StaticNpc N(npcGroup_802421EC)[] = {
        {
            .id = 2,
            .settings = &N(npcSettings_80241D40),
            .pos = { 90.0, 0.0, 160.0 },
            .flags = 0x00002400,
            .yaw = 270,
            .dropFlags = 0x80,
            .movement = { 0x0000005A, 0x00000000, 0x000000A0, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000005A, 0x00000000, 0x000000A0, 0x000000C8 },
            .animations = {
                0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
            },
        },
    };

    StaticNpc N(npcGroup_802423DC)[] = {
        {
            .id = 3,
            .settings = &N(npcSettings_80241C94),
            .pos = { 867.0, 0.0, 101.0 },
            .flags = 0x00000C00,
            .yaw = 0,
            .dropFlags = 0x80,
            .itemDropChance = 10,
            .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
            .movement = { 0x00000363, 0x00000000, 0x00000065, 0x00000028, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000363, 0x00000000, 0x00000065, 0x00000096 },
            .animations = {
                0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
            },
        },
        {
            .id = 4,
            .settings = &N(npcSettings_80241CC0),
            .pos = { 867.0, 0.0, 101.0 },
            .flags = 0x00000F21,
            .yaw = 0,
            .dropFlags = 0x80,
            .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
            .animations = {
                0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
            },
        },
    };

    Script N(script_802427BC) = SCRIPT({
        if (SI_AREA_FLAG(1) == 0) {
            SI_VAR(2) = SI_VAR(0);
            SI_AREA_FLAG(1) = 1;
        } else {
            SI_VAR(2) = SI_VAR(1);
            SI_AREA_FLAG(1) = 0;
        }
        SpeakToPlayer(5, 0x990103, 0x990102, 0, SI_VAR(2));
    });

    Script N(script_Interact_8024284C) = SCRIPT({
        if (SI_SAVE_FLAG(716) == 0) {
            PlaySoundAtNpc(-1, 801, 0);
            PlaySoundAtNpc(-1, 803, 0);
            SetNpcAnimation(-1, 0x990105);
            sleep 45;
            SetNpcAnimation(-1, 0x990102);
            SetNpcCollisionSize(-1, 45, 26);
            AdjustCam(0, 10.0, 0, 350, 15.0, -6.5);
            SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0xD001F);
            SI_VAR(0) = 44;
            SI_VAR(1) = 1;
            await N(script_80241DAC);
            AddKeyItem(44);
            SpeakToPlayer(-1, 0x990103, 0x990102, 0, 0xD0020);
            ResetCam(0, 10.0);
            SI_SAVE_FLAG(716) = 1;
            SetTattleString(5, 0x1A0088);
        } else {
            match SI_SAVE_VAR(0) {
                < 0xFFFFFFF1 {
                    SI_VAR(0) = 0xD0021;
                    SI_VAR(1) = 0xD0022;
                }
                < 32 {
                    SI_VAR(0) = 0xD0023;
                    SI_VAR(1) = 0xD0024;
                } else {
                    SI_VAR(0) = 0xD0025;
                    SI_VAR(1) = 0xD0026;
                }
            }
            await N(script_802427BC);
        }
    });

    Script N(script_Init_80242A70) = SCRIPT({
        BindNpcInteract(-1, N(script_Interact_8024284C));
        if (SI_SAVE_FLAG(716) == 0) {
            SetNpcCollisionSize(-1, 25, 25);
            SetNpcAnimation(-1, 0x990107);
            SetTattleString(5, 0x1A0087);
        }
    });

    StaticNpc N(npcGroup_80242AEC)[] = {
        {
            .id = 5,
            .settings = &N(npcSettings_80241D7C),
            .pos = { 1075.0, 50.0, 230.0 },
            .flags = 0x00000801,
            .init = N(script_Init_80242A70),
            .yaw = 270,
            .dropFlags = 0x80,
            .animations = {
                0x00990102, 0x0099010E, 0x0099010E, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102, 0x00990102,
            },
            .tattle = 0x1A0088,
        },
    };

    NpcGroupList N(npcGroupList_80242CDC) = {
        NPC_GROUP(N(npcGroup_80241E0C), 0x09030002),
        NPC_GROUP(N(npcGroup_80241FFC), 0x09010002),
        NPC_GROUP(N(npcGroup_802421EC), 0x09000002),
        NPC_GROUP(N(npcGroup_802423DC), 0x09050002),
        NPC_GROUP(N(npcGroup_80242AEC), 0x00000000),
        {},
    };

    s32 pad_002D24[] = {
        0x00000000, 0x00000000, 0x00000000,
    };

// rodata: D_80242D30_918AA0

// rodata: D_80242D38_918AA8

// rodata: D_80242D40_918AB0

// rodata: D_80242D48_918AB8

// rodata: D_80242D50_918AC0

// rodata: D_80242D58_918AC8

// rodata: D_80242D60_918AD0

// rodata: jtbl_80242D68_918AD8

    s32 pad_002E3C[] = {
        0x00000000,
    };
