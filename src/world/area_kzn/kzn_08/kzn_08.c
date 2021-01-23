#include "kzn_08.h"

s32 pad_00078C[1];
s32 pad_000A4C[1];
s32 pad_00411C[1];
s32 N(unk_80244170)[1];
Script N(script_UpdateTexturePan_80244174);
Script N(script_80244210);
Script N(script_8024432C);
s32 N(unk_80244448)[1];
Script N(script_ExitWalk_8024444C);
Script N(script_802444B8);
Script N(script_802444E4);
Script N(script_80244600);
s32 N(lavaResetList_80244730)[24];
Script N(script_80244790);
Script N(main);
s32 pad_004BA8[2];
s32 N(unk_80244BB0)[1];
Script N(script_80244BB4);
Script N(script_80244C1C);
Script N(script_80244CFC);
Script N(script_MakeEntities);
f32 N(floatTable_80244DA0)[6];
s32 N(unk_80244DB8)[12];
Script N(script_80244DE8);
s32 unk_missing_80244E58[11];
Script N(script_80244E84);
Script N(script_NpcAI_80244F70);
Script N(script_NpcAI_80245070);
Script N(script_802450F0);
StaticNpc N(npcGroup_802451A8)[2];
NpcGroupList N(npcGroupList_80245588);
Script N(script_802455A0);
s32 pad_0055CC[1];
const char D_802455D8_C76A58[8]; // "kzn_06"
s32 pad_005634[1];
s32 pad_005694[1];

// text: func_80240000_C71480

// text: func_80240348_C717C8

// text: func_8024040C_C7188C

// text: func_80240530_C719B0

// text: func_80240718_C71B98

s32 pad_00078C[] = {
    0x00000000,
};

// text: func_80240790_C71C10

// text: func_80240844_C71CC4

// text: func_802408A8_C71D28

// text: func_802409F8_C71E78

s32 pad_000A4C[] = {
    0x00000000,
};

// text: func_80240A50_C71ED0

// text: func_80240C00_C72080

// text: N(UnkNpcAIFunc1)

// text: func_802412E8_C72768

// text: N(UnkNpcAIFunc2)

// text: func_802416A4_C72B24

// text: func_80241710_C72B90

// text: N(UnkNpcAIFunc3)

// text: func_802418A8_C72D28

// text: func_80241C38_C730B8

// text: func_80241D5C_C731DC

// text: func_80241F48_C733C8

// text: func_80242078_C734F8

// text: func_802422F8_C73778

// text: func_80242354_C737D4

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80242744_C73BC4

// text: func_802428F8_C73D78

// text: func_80242B58_C73FD8

// text: func_80242E0C_C7428C

// text: func_80242E78_C742F8

// text: func_80242F74_C743F4

// text: func_802439B4_C74E34

// text: func_80243A44_C74EC4

// text: func_80243B44_C74FC4

// text: func_80243BA4_C75024

// text: func_80243C90_C75110

// text: func_80243EE0_C75360

s32 pad_00411C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -315.0f, 0.0f, 85.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19010A,
};

s32 N(unk_80244170)[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80244174) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_8024040C_C7188C();
                    return;
                }
            }
        }
    }
    func_80240530_C719B0();
});

Script N(script_80244210) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 3);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 600;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80244174);
    }
});

Script N(script_8024432C) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 4);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 500;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80244174);
    }
});

s32 N(unk_80244448)[] = {
    0x00010001,
};

Script N(script_ExitWalk_8024444C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802455D8_C76A58, 2);
    sleep 100;
});

Script N(script_802444B8) = SCRIPT({
    bind N(script_ExitWalk_8024444C) to TriggerFlag_FLOOR_TOUCH 0;
});

Script N(script_802444E4) = SCRIPT({
    group 0;
    SetTexPanner(3, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFCE0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80244174);
    }
});

Script N(script_80244600) = SCRIPT({
    group 0;
    SetTexPanner(1, 1);
    SetTexPanner(0, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 800;
        SI_VAR(2) = 0;
        SI_VAR(3) = 1600;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80244174);
    }
});

s32 N(lavaResetList_80244730)[] = {
    0x00000016, 0xC3660000, 0x00000000, 0x42C80000, 0x00000017, 0xC3660000, 0x00000000, 0x42C80000,
    0x0000000E, 0xC1200000, 0x00000000, 0x42C80000, 0x00000019, 0xC1200000, 0x00000000, 0x42C80000,
    0x00000014, 0xC2B40000, 0x00000000, 0xC2340000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244790) = SCRIPT({
    DisablePlayerInput(1);
    MakeLerp(1, 100, 200, 0);
0:
    UpdateLerp();
    SI_VAR(0) /= 10.0;
    ScaleModel(3, SI_VAR(0), 1.0, 1.0);
    SI_VAR(0) *= -5.0;
    SI_VAR(0) += 100.0;
    SI_MAP_VAR(0) = SI_VAR(0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0, 35, 100, 0);
10:
    UpdateLerp();
    TranslateModel(1, 0, SI_VAR(0), 0);
    SI_VAR(0) *= -1.25;
    SI_VAR(0) += 50.0;
    SI_MAP_VAR(0) = SI_VAR(0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    ModifyColliderFlags(1, 11, 0x7FFFFE00);
    ModifyColliderFlags(3, 11, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80244730));
    }
    DisablePlayerInput(0);
    unbind;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0007);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80245588));
    await N(script_MakeEntities);
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    SI_VAR(0) = N(script_802444B8);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_802455A0);
    ModifyColliderFlags(3, 11, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80244730));
    }
    ScaleModel(3, 10.0, 1.0, 1.0);
    TranslateModel(1, 0, 40, 0);
    SI_MAP_VAR(0) = 0;
    spawn {
        group 0;
        func_80240000_C71480(2, 0);
    }
    spawn {
        func_80240348_C717C8(N(unk_80244448));
    }
    spawn N(script_802444E4);
    spawn N(script_80244600);
    SI_VAR(0) = 27;
    spawn N(script_80244210);
    SI_VAR(0) = 28;
    spawn N(script_8024432C);
});

s32 pad_004BA8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80244BB0)[] = {
    0x00000000,
};

Script N(script_80244BB4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_80244C1C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80244BB4);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_80244CFC) = SCRIPT({
    SI_VAR(10) = 239;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(1324) = 1;
    await N(script_80244C1C);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 120, 100, 0xFFFFFFC9, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1324));
    AssignScript(N(script_80244CFC));
});

f32 N(floatTable_80244DA0)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

s32 N(unk_80244DB8)[] = {
    0x3F4CCCCD, 0x00000064, 0x00000000, 0x42B40000, 0x00000000, 0x00000004, 0x404CCCCD, 0x0000000A,
    0x00000001, 0x42C80000, 0x00000000, 0x00000001,
};

Script N(script_80244DE8) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0);
    SetSelfVar(6, 0);
    SetSelfVar(1, 150);
    func_80242354_C737D4(N(unk_80244DB8));
});

s32 unk_missing_80244E58[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80244DE8), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x00110000,
};

Script N(script_80244E84) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80244F40) = {
    .moveSpeed = 0.0,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0,
    .unk_10 = 0.0,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0,
    .unk_28 = 0.0,
    .unk_2C = 0,
};

Script N(script_NpcAI_80244F70) = SCRIPT({
    SetSelfVar(7, 1);
    SetSelfVar(8, 10);
    SetSelfVar(9, 9);
    SetSelfVar(10, 12);
    SetSelfVar(11, 7);
    SetSelfVar(12, 30);
    SetSelfVar(13, 15);
    SetSelfVar(14, 18);
    SetSelfVar(15, 15);
    func_80243C90_C75110(N(aISettings_80244F40));
});

NpcSettings N(npcSettings_80245044) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x32,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244F70),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

Script N(script_NpcAI_80245070) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 14);
    SetSelfVar(1, 28);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_802428F8_C73D78();
});

Script N(script_802450F0) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

NpcSettings N(npcSettings_8024517C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80245070),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244E84),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802451A8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80245044),
        .pos = { 80.0, 0.0, 135.0 },
        .flags = 0x00000500,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000050, 0x00000000, 0x00000087, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000005A, 0x00000000, 0x00000082, 0x00000082, 0x0000003C, 0x00000001 },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_8024517C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

NpcGroupList N(npcGroupList_80245588) = {
    NPC_GROUP(N(npcGroup_802451A8), 0x16110005),
    {},
};

Script N(script_802455A0) = SCRIPT({
    spawn {
        func_80243EE0_C75360();
    }
});

s32 pad_0055CC[] = {
    0x00000000,
};

// rodata: D_802455D0_C76A50

// rodata: D_802455D8_C76A58

// rodata: D_802455E0_C76A60

// rodata: D_802455E8_C76A68

// rodata: D_802455F0_C76A70

// rodata: jtbl_802455F8_C76A78

s32 pad_005634[] = {
    0x00000000,
};

// rodata: D_80245638_C76AB8

// rodata: jtbl_80245640_C76AC0

s32 pad_005694[] = {
    0x00000000,
};

// rodata: D_80245698_C76B18

// rodata: jtbl_802456A0_C76B20

// rodata: D_80245830_C76CB0

// rodata: D_80245838_C76CB8

// rodata: D_80245840_C76CC0

// rodata: D_80245848_C76CC8

// rodata: D_80245850_C76CD0

// rodata: D_80245858_C76CD8

