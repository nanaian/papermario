#include "isk_02.h"

s32 pad_000034[3];
s32 pad_0000E8[2];
s32 pad_000104[3];
Script N(script_ExitWalk_80240180);
Script N(script_ExitWalk_802401DC);
Script N(script_ExitWalk_80240238);
Script N(script_80240294);
Script N(main);
s32 pad_00046C[1];
s32 N(itemList_80240470)[2];
Script N(script_80240478);
Script N(script_80240640);
s32 pad_0006CC[1];
Script N(script_802406D0);
Script N(script_8024077C);
Script N(script_80240904);
Script N(script_80240A20);
Script N(script_80240B60);
s32 pad_000C7C[1];
Script N(script_MakeEntities);
s32 pad_000CDC[1];
Script N(script_NpcAI_80240D10);
Script N(script_Idle_80240D68);
Script N(script_Idle_80240E74);
Script N(script_Idle_80240F80);
Script N(script_Init_8024108C);
Script N(script_Init_802410C0);
Script N(script_Init_802410F4);
StaticNpc N(npcGroup_80241128)[1];
StaticNpc N(npcGroup_80241318)[1];
StaticNpc N(npcGroup_80241508)[1];
NpcGroupList N(npcGroupList_802416F8);
s32 pad_001728[2];
const char D_80241730_979E40[8]; // "isk_01"
const char D_80241738_979E48[8]; // "isk_03"

// text: func_80240000_978710

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_978750

s32 pad_0000E8[] = {
    0x00000000, 0x00000000,
};

// text: func_802400F0_978800

s32 pad_000104[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -484.0f, 0.0f, 302.0f, 140.0f },
    { 258.0f, 50.0f, 486.0f, 250.0f },
    { 283.0f, -80.0f, 530.0f, 250.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190096,
};

Script N(script_ExitWalk_80240180) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80241730_979E40, 1);
    sleep 100;
});

Script N(script_ExitWalk_802401DC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80241738_979E48, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240238) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80241738_979E48, 1);
    sleep 100;
});

Script N(script_80240294) = SCRIPT({
    bind N(script_ExitWalk_80240180) to 0x80000 0;
    bind N(script_ExitWalk_802401DC) to 0x80000 8;
    bind N(script_ExitWalk_80240238) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802416F8));
    await N(script_MakeEntities);
    await N(script_80240640);
    spawn N(script_802406D0);
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
    SI_VAR(0) = N(script_80240294);
    spawn EnterWalk;
});

s32 pad_00046C[] = {
    0x00000000,
};

s32 N(itemList_80240470)[] = {
    0x00000011, 0x00000000,
};

Script N(script_80240478) = SCRIPT({
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        return;
    }
    PlaySoundAt(617, 0, 272, 60, 486);
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(870) = 1;
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240000_978710();
    SI_VAR(1) = 0;
    sleep 5;
    PlaySoundAtCollider(10, 613, 0);
    MakeLerp(0, 65, 65, 0);
10:
    UpdateLerp();
    TranslateGroup(67, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    ModifyColliderFlags(0, 10, 0x7FFFFE00);
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80240640) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(870), 0),
        SI_CMD(ScriptOpcode_CALL, 0x802C971C, 67),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80240478), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80240470), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, EnableGroup, 67, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 10, 0x7FFDFFFF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_0006CC[] = {
    0x00000000,
};

Script N(script_802406D0) = SCRIPT({
    SI_AREA_FLAG(7) = 0;
    SI_AREA_FLAG(8) = 0;
    SI_AREA_FLAG(9) = 0;
    spawn N(script_80240904);
    spawn N(script_80240A20);
    spawn N(script_80240B60);
    ModifyColliderFlags(0, 50, 0x7FFFFE00);
    ModifyColliderFlags(0, 51, 0x7FFFFE00);
    ModifyColliderFlags(0, 52, 0x7FFFFE00);
});

Script N(script_8024077C) = SCRIPT({
    if (SI_VAR(0) == 0) {
        PlaySoundAtModel(SI_VAR(3), 465, 0);
        TranslateModel(SI_VAR(3), 0, 0, 13);
        sleep 3;
        MakeLerp(0, 35, 9, 10);
    10:
        UpdateLerp();
        SI_VAR(2) = SI_VAR(0);
        SI_VAR(2) *= 1.1005859375;
        TranslateModel(SI_VAR(3), SI_VAR(2), 0, 13);
        RotateModel(SI_VAR(3), SI_VAR(0), 0, 1, 0);
        SI_VAR(0) += 1;
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 10;
        }
        sleep 3;
    } else {
        TranslateModel(SI_VAR(3), 38.5, 0, 13);
        RotateModel(SI_VAR(3), 35, 0, 1, 0);
    }
});

Script N(script_80240904) = SCRIPT({
    if (SI_AREA_FLAG(4) == 0) {
    5:
        func_80240040_978750(0xFFFFFF2E, 580);
        sleep 1;
        if (SI_VAR(0) == 0) {
            goto 5;
        }
    }
    SI_AREA_FLAG(7) = 1;
    SetNpcFlagBits(0, 2, 0);
    SI_VAR(0) = SI_AREA_FLAG(4);
    SI_VAR(3) = 81;
    await N(script_8024077C);
    SI_AREA_FLAG(7) = 0;
    ModifyColliderFlags(0, 46, 0x7FFFFE00);
    ModifyColliderFlags(1, 50, 0x7FFFFE00);
    SI_AREA_FLAG(4) = 1;
});

Script N(script_80240A20) = SCRIPT({
    if (SI_AREA_FLAG(5) == 0) {
    5:
        func_80240040_978750(0xFFFFFFE2, 670);
        sleep 1;
        if (SI_VAR(0) == 0) {
            goto 5;
        }
    }
    MakeItemEntity(229, 0xFFFFFF7B, 1, 500, 17, SI_SAVE_FLAG(1684));
    SI_AREA_FLAG(8) = 1;
    SetNpcFlagBits(1, 2, 0);
    SI_VAR(0) = SI_AREA_FLAG(5);
    SI_VAR(3) = 90;
    await N(script_8024077C);
    SI_AREA_FLAG(8) = 0;
    ModifyColliderFlags(0, 47, 0x7FFFFE00);
    ModifyColliderFlags(1, 51, 0x7FFFFE00);
    SI_AREA_FLAG(5) = 1;
});

Script N(script_80240B60) = SCRIPT({
    if (SI_AREA_FLAG(6) == 0) {
    5:
        func_80240040_978750(220, 600);
        sleep 1;
        if (SI_VAR(0) == 0) {
            goto 5;
        }
    }
    SI_AREA_FLAG(9) = 1;
    SetNpcFlagBits(2, 2, 0);
    SI_VAR(0) = SI_AREA_FLAG(6);
    SI_VAR(3) = 99;
    await N(script_8024077C);
    SI_AREA_FLAG(9) = 0;
    ModifyColliderFlags(0, 48, 0x7FFFFE00);
    ModifyColliderFlags(1, 52, 0x7FFFFE00);
    SI_AREA_FLAG(6) = 1;
});

s32 pad_000C7C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(870) == 0) {
        MakeEntity(0x802BCD68, 272, 60, 486, 300, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
    }
});

s32 pad_000CDC[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80240CE0) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x28,
    .waitTime = 0xA,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 3.0f,
    .unk_1C = 0x2D,
    .unk_20 = 0x6,
    .chaseRadius = 300.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240D10) = SCRIPT({
    func_802400F0_978800();
    DoBasicAI(N(aISettings_80240CE0));
});

NpcSettings N(npcSettings_80240D3C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x48,
    .radius = 0xF,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240D10),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

Script N(script_Idle_80240D68) = SCRIPT({
    SetSelfEnemyFlagBits(0x17100000, 1);
    SetNpcFlagBits(-1, 2, 1);
1:
    if (SI_AREA_FLAG(7) == 0) {
        sleep 1;
        goto 1;
    }
    sleep 15;
    SetNpcFlagBits(-1, 64, 1);
    SetSelfEnemyFlagBits(0x17100000, 0);
    NpcMoveTo(-1, 0xFFFFFEC5, 455, 10);
    SetNpcFlagBits(-1, 64, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80240D10));
});

Script N(script_Idle_80240E74) = SCRIPT({
    SetSelfEnemyFlagBits(0x17100000, 1);
    SetNpcFlagBits(-1, 2, 1);
1:
    if (SI_AREA_FLAG(8) == 0) {
        sleep 1;
        goto 1;
    }
    sleep 15;
    SetNpcFlagBits(-1, 64, 1);
    SetSelfEnemyFlagBits(0x17100000, 0);
    NpcMoveTo(-1, 0xFFFFFF6F, 535, 10);
    SetNpcFlagBits(-1, 64, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80240D10));
});

Script N(script_Idle_80240F80) = SCRIPT({
    SetSelfEnemyFlagBits(0x17100000, 1);
    SetNpcFlagBits(-1, 2, 1);
1:
    if (SI_AREA_FLAG(9) == 0) {
        sleep 1;
        goto 1;
    }
    sleep 15;
    SetNpcFlagBits(-1, 64, 1);
    SetSelfEnemyFlagBits(0x17100000, 0);
    NpcMoveTo(-1, 50, 550, 10);
    SetNpcFlagBits(-1, 64, 0);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80240D10));
});

Script N(script_Init_8024108C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240D68));
    0x800457C4(3);
});

Script N(script_Init_802410C0) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240E74));
    0x800457C4(3);
});

Script N(script_Init_802410F4) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240F80));
    0x800457C4(3);
});

StaticNpc N(npcGroup_80241128)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240D3C),
        .pos = { -296.0, 0.0, 421.0 },
        .flags = 0x00000A00,
        .init = N(script_Init_8024108C),
        .yaw = 304,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_TASTY_TONIC, 10 } },
        .movement = { 0xFFFFFED3, 0x00000000, 0x000001AB, 0x000000C8, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFED3, 0x00000000, 0x000001AB, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310104, 0x00310108, 0x00310108, 0x00310108, 0x00310104, 0x00310104, 0x0031010C, 0x0031010C, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108,
        },
    },
};

StaticNpc N(npcGroup_80241318)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240D3C),
        .pos = { -133.0, 0.0, 497.0 },
        .flags = 0x00000A00,
        .init = N(script_Init_802410C0),
        .yaw = 284,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_TASTY_TONIC, 10 } },
        .movement = { 0xFFFFFF7A, 0x00000000, 0x000001EF, 0x000000C8, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF74, 0x00000000, 0x000001FE, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310104, 0x00310108, 0x00310108, 0x00310108, 0x00310104, 0x00310104, 0x0031010C, 0x0031010C, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108,
        },
    },
};

StaticNpc N(npcGroup_80241508)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240D3C),
        .pos = { 45.0, 0.0, 505.0 },
        .flags = 0x00000A00,
        .init = N(script_Init_802410F4),
        .yaw = 264,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_TASTY_TONIC, 10 } },
        .movement = { 0x0000002E, 0x00000000, 0x00000202, 0x000000C8, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000002F, 0x00000000, 0x00000206, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00310104, 0x00310108, 0x00310108, 0x00310108, 0x00310104, 0x00310104, 0x0031010C, 0x0031010C, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108, 0x00310108,
        },
    },
};

NpcGroupList N(npcGroupList_802416F8) = {
    NPC_GROUP(N(npcGroup_80241128), 0x0B000006),
    NPC_GROUP(N(npcGroup_80241318), 0x0B000006),
    NPC_GROUP(N(npcGroup_80241508), 0x0B010006),
    {},
};

s32 pad_001728[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241730_979E40

// rodata: D_80241738_979E48
