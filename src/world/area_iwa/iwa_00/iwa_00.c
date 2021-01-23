#include "iwa_00.h"

s32 pad_0002A8[2];
s32 pad_0002D4[3];
Script N(script_ExitWalk_80240350);
Script N(script_ExitWalk_802403AC);
Script N(script_80240408);
Script N(script_8024049C);
Script N(main);
Script N(script_80240620);
Script N(script_MakeEntities);
Script N(script_80240790);
Script N(script_8024082C);
Script N(script_NpcAI_802408DC);
Script N(script_80240B80);
Script N(script_80240C04);
Script N(script_NpcAI_80240CCC);
s32 unk_missing_80240F64[4];
s32 N(unk_80240FF8)[1];
Script N(script_80240FFC);
Script N(script_8024102C);
StaticNpc N(npcGroup_8024105C)[2];
StaticNpc N(npcGroup_8024143C)[2];
Script N(script_Interact_8024181C);
Script N(script_Idle_802419EC);
Script N(script_Hit_80241C6C);
Script N(script_Init_8024228C);
Script N(script_Init_80242338);
StaticNpc N(npcGroup_802423A0)[2];
NpcGroupList N(npcGroupList_80242780);
s32 N(unk_802427B0)[8];
Script N(script_802427D0);
Script N(script_802427FC);
Script N(script_802429F8);
s32 pad_002A58[2];
const char D_80242A60_90F6A0[8]; // "iwa_10"
const char D_80242A68_90F6A8[8]; // "iwa_01"

// text: func_80240000_90CC40

// text: func_802400B4_90CCF4

// text: func_80240118_90CD58

s32 pad_0002A8[] = {
    0x00000000, 0x00000000,
};

// text: func_802402B0_90CEF0

s32 pad_0002D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 55.0f, -5.0f, -25.0f, 90.0f },
    { 1313.0f, 90.0f, -40.0f, 270.0f },
    { 625.0f, -30.0f, 259.0f, 45.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19005A,
};

Script N(script_ExitWalk_80240350) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242A60_90F6A0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802403AC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242A68_90F6A8, 0);
    sleep 100;
});

Script N(script_80240408) = SCRIPT({
    EnableTexPanning(23, 1);
    EnableTexPanning(22, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 3000;
        SetTexPanOffset(1, 0, 0, SI_VAR(0));
        sleep 1;
    }
});

Script N(script_8024049C) = SCRIPT({
    bind N(script_ExitWalk_80240350) to 0x80000 1;
    bind N(script_ExitWalk_802403AC) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 8;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242780));
    await N(script_MakeEntities);
    spawn N(script_80240408);
    spawn N(script_802429F8);
    SetMusicTrack(0, 22, 0, 8);
    PlaySoundAtF(0x8000000B, 1, 35, 0xFFFFFFB0, 0xFFFFFF88);
    PlaySoundAtF(0x8000000C, 1, 500, 85, 0xFFFFFF88);
    SI_VAR(0) = N(script_8024049C);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_80240620) = SCRIPT({
    SI_SAVE_FLAG(719) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(719) == 0) {
        MakeEntity(0x802EA154, 900, 0xFFFFFFE2, 220, 0, 0x80000000);
        AssignScript(N(script_80240620));
    }
    MakeItemEntity(343, 405, 25, 25, 17, SI_SAVE_FLAG(691));
    MakeItemEntity(343, 465, 53, 25, 17, SI_SAVE_FLAG(692));
    MakeItemEntity(343, 515, 92, 25, 17, SI_SAVE_FLAG(693));
    MakeEntity(0x802EA564, 1260, 30, 140, 0, 143, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(715));
    MakeEntity(0x802BCD9C, 58, 0xFFFFFFFB, 0xFFFFFFB7, 0xFFFFFFE2, 90, 0x80000000);
    MakeEntity(0x802BCD9C, 926, 70, 0xFFFFFFD3, 22, 90, 0x80000000);
});

Script N(script_80240790) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcFlagBits(-1, 4, 1);
    SetNpcFlagBits(-1, 512, 1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
});

Script N(script_8024082C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0x2F0012);
});

NpcAISettings N(aISettings_802408AC) = {
    .moveSpeed = 1.7999999523162842,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 90.0,
    .unk_10 = 70.0,
    .unk_14 = 0x2,
    .chaseSpeed = 3.0,
    .unk_1C = 0x5A,
    .unk_20 = 0x19,
    .chaseRadius = 120.0,
    .unk_28 = 70.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802408DC) = SCRIPT({
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
        DoBasicAI(N(aISettings_802408AC));
    });

NpcSettings N(npcSettings_80240B28) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_80240790),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802408DC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x8,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80240B54) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_8024082C),
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

Script N(script_80240B80) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcFlagBits(-1, 4, 1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) -= 50;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
});

Script N(script_80240C04) = SCRIPT({
    SetNpcFlagBits(-1, 0x40000, 1);
    EnableNpcShadow(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) -= 50;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0x2F0013);
});

NpcAISettings N(aISettings_80240C9C) = {
    .moveSpeed = 1.7999999523162842,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 90.0,
    .unk_10 = 70.0,
    .unk_14 = 0x2,
    .chaseSpeed = 3.0,
    .unk_1C = 0x5A,
    .unk_20 = 0x19,
    .chaseRadius = 120.0,
    .unk_28 = 70.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240CCC) = SCRIPT({
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
    DoBasicAI(N(aISettings_80240C9C));
});

s32 unk_missing_80240F64[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

NpcSettings N(npcSettings_80240F74) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_80240B80),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240CCC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x8,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80240FA0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_80240C04),
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

NpcSettings N(npcSettings_80240FCC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x1A,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 N(unk_80240FF8)[] = {
    0x00000000,
};

Script N(script_80240FFC) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_8024102C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

StaticNpc N(npcGroup_8024105C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240B28),
        .pos = { 880.0, 70.0, 67.0 },
        .flags = 0x00000400,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0x00000370, 0x00000046, 0x00000043, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000370, 0x00000046, 0x00000043, 0x00000078 },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240B54),
        .pos = { 880.0, 70.0, 67.0 },
        .flags = 0x00000F21,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000370, 0x00000046, 0x00000043, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
};

StaticNpc N(npcGroup_8024143C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240F74),
        .pos = { 1220.0, -30.0, 70.0 },
        .flags = 0x00000400,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0x000004C4, 0xFFFFFFE2, 0x00000046, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x000004C4, 0xFFFFFFE2, 0x00000046, 0x00000078 },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80240FA0),
        .pos = { 1220.0, -30.0, 70.0 },
        .flags = 0x00000F21,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x000004C4, 0xFFFFFFE2, 0x00000046, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
};

Script N(script_Interact_8024181C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(0) < SI_VAR(3)) {
        InterpNpcYaw(-1, 270, 0);
    } else {
        InterpNpcYaw(-1, 90, 0);
    }
    match SI_SAVE_VAR(123) {
        == 0 {
            if (SI_SAVE_FLAG(722) == 0) {
                SpeakToPlayer(-1, 0x920005, 0x920001, 0, 0xD0027);
            } else {
                SpeakToPlayer(-1, 0x920005, 0x920001, 0, 0xD0028);
            }
        }
        <= 2 {
            SpeakToPlayer(-1, 0x920005, 0x920001, 0, 0xD0028);
        }
        <= 4 {
            SpeakToPlayer(-1, 0x920005, 0x920001, 0, 0xD0029);
        }
        <= 6 {
            SpeakToPlayer(-1, 0x920005, 0x920001, 0, 0xD002A);
        }
        else {
            SpeakToPlayer(-1, 0x920005, 0x920001, 0, 0xD002B);
        }
    }
    SI_SAVE_FLAG(722) = 1;
});

Script N(script_Idle_802419EC) = SCRIPT({
    SetNpcAnimation(-1, 0x920001);
    GetNpcPos(-1, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    SetNpcPos(4, 0, 0xFFFFFC18, 0);
    SetNpcPos(5, 0, 0xFFFFFC18, 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) >= 20) {
        sleep 1;
        goto 0;
    }
    if (SI_VAR(0) < 600) {
        sleep 1;
        goto 0;
    }
    if (SI_VAR(0) > 850) {
        sleep 1;
        goto 0;
    }
    SetNpcPos(4, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    PlaySoundAtNpc(-1, 801, 0);
    SetNpcAnimation(-1, 0x920002);
    sleep 15;
    SetNpcPos(5, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    sleep 5;
    SetNpcAnimation(-1, 0x920001);
    sleep 30;
10:
    sleep 1;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) <= 900) {
        goto 10;
    }
    SetNpcAnimation(-1, 0x920003);
    SetNpcPos(5, 0, 0xFFFFFC18, 0);
    sleep 15;
    SetNpcPos(4, 0, 0xFFFFFC18, 0);
    goto 0;
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80241C6C) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), 1),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), 1),
        SI_CMD(ScriptOpcode_CASE_EQ, 6),
            SI_CMD(ScriptOpcode_CALL, GetCurrentPartnerID, SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 2),
                SI_CMD(ScriptOpcode_SET, SI_VAR(10), 2),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET, SI_VAR(10), 3),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_SET, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, BindNpcInteract, 4, 0),
    SI_CMD(ScriptOpcode_CALL, EnableNpcAI, 4, 0),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(3), SI_VAR(4), SI_VAR(5)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 270, 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(11), 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 90, 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(11), 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ADD, SI_SAVE_VAR(123), 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 3),
        SI_CMD(ScriptOpcode_ADD, SI_SAVE_VAR(123), 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(10)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 4, 225, 0),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(10)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 1),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 4, 0x920004),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 14),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 14),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 30),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(2), 2),
            SI_CMD(ScriptOpcode_CALL, MakeItemEntity, 147, SI_VAR(0), SI_VAR(1), SI_VAR(2), 13, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 4, 0x920001),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 2),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 2),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(123), 8),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(10)),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 4, 0x920005, 0x920001, 0, 0xD002C),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 4, 0x920005, 0x920001, 0, 0xD002D),
            SI_CMD(ScriptOpcode_CASE_EQ, 3),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 4, 0x920005, 0x920001, 0, 0xD002E),
        SI_CMD(ScriptOpcode_END_MATCH),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 4, 0x920003),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 4, 0x920005, 0x920001, 0, 0xD002F),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_GE, SI_SAVE_VAR(123), 8),
        SI_CMD(ScriptOpcode_CALL, func_80240118_90CD58),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 5, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_CALL, RemoveNpc, 4),
    SI_CMD(ScriptOpcode_CALL, RemoveNpc, 5),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_8024228C) = SCRIPT({
    SetNpcVar(4, 8, 0);
    if (SI_SAVE_VAR(123) < 8) {
        BindNpcInteract(-1, N(script_Interact_8024181C));
        BindNpcIdle(-1, N(script_Idle_802419EC));
        EnableNpcShadow(-1, 0);
        SetNpcFlagBits(-1, 0x200000, 1);
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80242338) = SCRIPT({
    if (SI_SAVE_VAR(123) < 8) {
        EnableNpcShadow(-1, 0);
        BindNpcHit(-1, N(script_Hit_80241C6C));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802423A0)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80240FCC),
        .pos = { 725.0, -30.0, 225.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_8024228C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001,
        },
        .tattle = 0x1A0089,
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80240FCC),
        .pos = { 725.0, -30.0, 225.0 },
        .flags = 0x03704F0C,
        .init = N(script_Init_80242338),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001, 0x00920001,
        },
        .tattle = 0x1A0089,
    },
};

NpcGroupList N(npcGroupList_80242780) = {
    NPC_GROUP(N(npcGroup_8024105C), 0x09060002),
    NPC_GROUP(N(npcGroup_8024143C), 0x09070002),
    NPC_GROUP(N(npcGroup_802423A0), 0x00000000),
    {},
};

s32 N(unk_802427B0)[] = {
    0x43870000, 0x3ECCCCCD, 0xBD4CCCCD, 0x41A00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802427D0) = SCRIPT({
    SI_VAR(0) = N(unk_802427B0);
    func_802402B0_90CEF0();
});

Script N(script_802427FC) = SCRIPT({
    DisablePlayerInput(1);
    sleep 10;
    spawn {
        PlaySoundAtCollider(0, 8354, 0);
        MakeLerp(0, 80, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(30, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 15;
    ModifyColliderFlags(0, 0, 0x7FFFFE00);
    PlayerMoveTo(543, 17, 20);
    DisablePlayerInput(0);
    sleep 100;
    spawn {
        PlaySoundAtCollider(0, 8354, 0);
        MakeLerp(80, 0, 30, 0);
        loop {
            UpdateLerp();
            RotateModel(30, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    ModifyColliderFlags(1, 0, 0x7FFFFE00);
});

Script N(script_802429F8) = SCRIPT({
    bind N(script_802427FC) to TriggerFlag_WALL_INTERACT 0;
    bind N(script_802427D0) to TriggerFlag_FLOOR_TOUCH 12;
    ModifyColliderFlags(3, 12, 5);
});

s32 pad_002A58[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242A60_90F6A0

// rodata: D_80242A68_90F6A8

