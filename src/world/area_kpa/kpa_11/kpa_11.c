#include "kpa_11.h"

s32 pad_00030C[1];
s32 pad_000AE4[3];
Script N(script_80240B80);
s32 pad_000BF8[2];
Script N(script_UpdateTexturePan_80240C00);
Script N(script_ExitWalk_80240C9C);
Script N(script_ExitWalk_80240CF8);
Script N(script_ExitWalk_80240D54);
Script N(script_ExitWalk_80240DB0);
Script N(script_ExitWalk_80240E0C);
Script N(script_80240E68);
Script N(script_EnterWalk_80240F04);
Script N(script_80240F84);
s32 N(lavaResetList_802411C0)[8];
Script N(main);
s32 pad_0014BC[1];
Script N(script_MakeEntities);
s32 pad_001568[2];
Script N(script_NpcAI_802415A0);
s32 unk_missing_80241668[11];
Script N(script_Defeat_80241694);
Script N(script_Init_802417C0);
StaticNpc N(npcGroup_80241814)[1];
Script N(script_Init_80241A04);
StaticNpc N(npcGroup_80241A14)[3];
NpcGroupList N(npcGroupList_80241FE4);
s32 pad_002008[2];
const char D_80242010_A548D0[8]; // "kpa_62"
const char D_80242018_A548D8[8]; // "kpa_12"
const char D_80242020_A548E0[8]; // "kpa_17"
s32 pad_002028[2];
s32 pad_00208C[1];

// text: func_80240000_A528C0

// text: func_80240124_A529E4

s32 pad_00030C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024038C_A52C4C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802406A4_A52F64

s32 pad_000AE4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 30.0f, 100.0f, -140.0f, 90.0f },
    { 1402.0f, 30.0f, -1070.0f, 180.0f },
    { 1378.0f, 30.0f, -724.0f, 90.0f },
    { 15.0f, -20.0f, -20.0f, 90.0f },
    { 1529.0f, -20.0f, -1082.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190158,
};

Script N(script_80240B80) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    PlayAmbientSounds(4);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

s32 pad_000BF8[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240C00) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A528C0();
                    return;
                }
            }
        }
    }
    func_80240124_A529E4();
});

Script N(script_ExitWalk_80240C9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242010_A548D0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240CF8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242018_A548D8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240D54) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80242020_A548E0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240DB0) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80242010_A548D0, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240E0C) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_80242018_A548D8, 2);
    sleep 100;
});

Script N(script_80240E68) = SCRIPT({
    bind N(script_ExitWalk_80240C9C) to 0x80000 96;
    bind N(script_ExitWalk_80240CF8) to 0x80000 90;
    bind N(script_ExitWalk_80240D54) to 0x80000 106;
    bind N(script_ExitWalk_80240DB0) to 0x80000 99;
    bind N(script_ExitWalk_80240E0C) to 0x80000 93;
});

Script N(script_EnterWalk_80240F04) = SCRIPT({
    GetLoadType(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240E68);
        return;
    }
    SI_VAR(0) = N(script_80240E68);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_80240F84) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80240C00);
    }
    SetTexPanner(79, 0);
    SetTexPanner(80, 0);
    SetTexPanner(81, 0);
    SetTexPanner(82, 0);
    SetTexPanner(83, 0);
    SetTexPanner(84, 0);
    SetTexPanner(85, 0);
    SetTexPanner(86, 0);
    SetTexPanner(87, 0);
    SetTexPanner(88, 0);
    SetTexPanner(89, 0);
    SetTexPanner(90, 0);
    SetTexPanner(91, 0);
    SetTexPanner(92, 0);
    SetTexPanner(93, 0);
    SetTexPanner(94, 0);
});

s32 N(lavaResetList_802411C0)[] = {
    0x00000008, 0x44AF0000, 0x41F00000, 0xC3A28000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241FE4));
    await N(script_MakeEntities);
    spawn N(script_80240F84);
    if (SI_SAVE_FLAG(1558) == 1) {
        EnableGroup(159, 0);
        ModifyColliderFlags(0, 108, 0x7FFFFE00);
    }
    spawn N(script_EnterWalk_80240F04);
    spawn N(script_80240B80);
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 2;
            ModifyColliderFlags(3, 24, 3);
            ModifyColliderFlags(3, 23, 3);
            ModifyColliderFlags(3, 22, 3);
            ModifyColliderFlags(3, 21, 3);
            ModifyColliderFlags(3, 20, 3);
            ModifyColliderFlags(3, 19, 3);
            ModifyColliderFlags(3, 18, 3);
            ModifyColliderFlags(3, 11, 3);
            ModifyColliderFlags(3, 12, 3);
            ModifyColliderFlags(3, 13, 3);
            ModifyColliderFlags(3, 14, 3);
            ModifyColliderFlags(3, 15, 3);
            ModifyColliderFlags(3, 16, 3);
            ModifyColliderFlags(3, 17, 3);
            ModifyColliderFlags(3, 93, 3);
            ModifyColliderFlags(3, 99, 3);
            spawn {
                ResetFromLava(N(lavaResetList_802411C0));
            }
        }
    }
});

s32 pad_0014BC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 1400, 90, 0xFFFFFC95, 0, 0x80000000);
    if (SI_SAVE_FLAG(1548) == 1) {
        MakeItemEntity(26, 550, 30, 0xFFFFFF6F, 17, SI_SAVE_FLAG(1549));
    }
    MakeEntity(0x802EA564, 1400, 90, 0xFFFFFE89, 0, 149, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1547));
});

s32 pad_001568[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80241570) = {
    .moveSpeed = 1.0,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 90.0,
    .unk_10 = 40.0,
    .unk_14 = 0x2,
    .chaseSpeed = 11.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0,
    .unk_28 = 40.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802415A0) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 4);
    SetSelfVar(5, 10);
    SetSelfVar(7, 5);
    func_802406A4_A52F64(N(aISettings_80241570));
});

NpcSettings N(npcSettings_80241610) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802415A0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024163C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
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

s32 unk_missing_80241668[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Defeat_80241694) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(1548) = 1;
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            MakeItemEntity(26, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5, SI_SAVE_FLAG(1549));
            DoNpcDefeat();
        }
        == 2 {}
        == 3 {
            SI_SAVE_FLAG(1548) = 1;
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            MakeItemEntity(26, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5, SI_SAVE_FLAG(1549));
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

Script N(script_Init_802417C0) = SCRIPT({
    if (SI_SAVE_FLAG(1548) == 0) {
        BindNpcDefeat(-1, N(script_Defeat_80241694));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80241814)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241610),
        .pos = { 550.0, 30.0, -145.0 },
        .flags = 0x00842C00,
        .init = N(script_Init_802417C0),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000226, 0x0000001E, 0xFFFFFF6F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000226, 0x0000001E, 0xFFFFFF6F, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
    },
};

Script N(script_Init_80241A04) = SCRIPT({

});

StaticNpc N(npcGroup_80241A14)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024163C),
        .pos = { 845.0, 30.0, -285.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_80241A04),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A0113,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024163C),
        .pos = { 872.0, 30.0, -315.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_80241A04),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830201, 0x00830202, 0x00830203, 0x00830203, 0x00830201, 0x00830201, 0x00830206, 0x00830206, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203,
        },
        .tattle = 0x1A0114,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_8024163C),
        .pos = { 900.0, 30.0, -285.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_80241A04),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301,
        },
        .tattle = 0x1A0115,
    },
};

NpcGroupList N(npcGroupList_80241FE4) = {
    NPC_GROUP(N(npcGroup_80241814), 0x22180003),
    NPC_GROUP(N(npcGroup_80241A14), 0x00000003),
    {},
};

s32 pad_002008[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242010_A548D0

// rodata: D_80242018_A548D8

// rodata: D_80242020_A548E0

s32 pad_002028[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242030_A548F0

// rodata: jtbl_80242038_A548F8

s32 pad_00208C[] = {
    0x00000000,
};

