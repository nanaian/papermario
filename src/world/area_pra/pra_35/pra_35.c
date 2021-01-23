#include "pra_35.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_00294C[1];
s32 pad_002C0C[1];
Script N(script_80242C80);
s32 pad_002CBC[1];
Script N(script_80242CC0);
Script N(script_80242DC4);
Script N(script_80242ED4);
s32 N(unk_80242F7C)[3];
s32 N(unk_80242F88)[3];
s32 N(unk_80242F94)[3];
s32 N(unk_80242FA0)[3];
Script N(script_80242FAC);
Script N(script_80243050);
Script N(script_ExitWalk_802430F4);
s32 unk_missing_80243150[4];
Script N(script_80243160);
Script N(script_EnterWalk_802431C4);
Script N(script_802432B8);
Script N(main);
s32 pad_0034A4[3];
Script N(script_802434B0);
s32 unk_missing_8024356C[10];
s32 N(extraAnimationList_80243594)[2];
Script N(script_NpcAI_802435CC);
Script N(script_NpcAI_80243668);
Script N(script_NpcAI_8024376C);
Script N(script_Init_802437B8);
StaticNpc N(npcGroup_802437E0)[2];
StaticNpc N(npcGroup_80243BC0)[1];
NpcGroupList N(npcGroupList_80243DB0);
s32 pad_003DD4[3];
s32 N(unk_80243DE0)[1];
Script N(script_80243DE4);
Script N(script_80243E4C);
Script N(script_80243F2C);
Script N(script_MakeEntities);
const char D_80243FD0_D91220[8]; // "pra_33"
const char D_80243FD8_D91228[8]; // "pra_19"
s32 pad_0044A8[2];

// text: func_Init_D8D250

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D8D2A4

// text: func_802400EC_D8D33C

// text: func_80240128_D8D378

s32 N(unk_802402F0)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x3C013F36, 0x3421DB6E, 0x44810000, 0x27B000D8, 0x44050000, 0x0200202D, 0x00A0302D, 0x0C019DF0,
    0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0xC6200030, 0x3C014040,
    0x44811000, 0x46000007, 0x46020001, 0x8E250028, 0x8E26002C, 0x44070000, 0x0C019E40, 0x0200202D,
    0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x24040002, 0x0000282D, 0x00A0302D, 0x00A0382D,
    0x27A20018, 0x0C0B7710, 0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130,
    0xD7B40128, 0x03E00008, 0x27BD0140,
};

// text: func_8024049C_D8D6EC

// text: func_80240500_D8D750

s32 N(unk_8024068C)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x27B000D8, 0x3C013F36, 0x3421DB6E, 0x44810000, 0x0200202D, 0x44050000, 0x3C06BF36, 0x34C6DB6E,
    0x0C019DF0, 0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0x8E250028,
    0xC620002C, 0x8E270030, 0x46000007, 0x44060000, 0x0C019E40, 0x0200202D, 0x27A40018, 0x0200282D,
    0x0C019D80, 0x0080302D, 0xC62200A8, 0x3C0142B4, 0x44810000, 0x00000000, 0x4602003E, 0x00000000,
    0x4500000A, 0x24040001, 0x3C014387, 0x44810000, 0x00000000, 0x4600103C, 0x00000000, 0x45000004,
    0x27A20018, 0x3C041000, 0x34840001, 0x27A20018, 0x0000282D, 0x00A0302D, 0x00A0382D, 0x0C0B7710,
    0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130, 0xD7B40128, 0x03E00008,
    0x27BD0140,
};

// text: func_80240870_D8DAC0

// text: func_80240D3C_D8DF8C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D8E170

// text: func_80241078_D8E2C8

// text: N(UnkNpcAIFunc1)

// text: func_802413E0_D8E630

// text: func_8024159C_D8E7EC

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024173C_D8E98C

// text: func_8024186C_D8EABC

// text: N(UnkNpcDurationFlagFunc)

// text: func_802419F4_D8EC44

// text: func_80241AB4_D8ED04

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80241FB8_D8F208

// text: func_8024216C_D8F3BC

// text: func_802423CC_D8F61C

// text: func_80242698_D8F8E8

s32 pad_00294C[] = {
    0x00000000,
};

// text: func_80242950_D8FBA0

// text: func_80242A04_D8FC54

// text: func_80242A68_D8FCB8

// text: func_80242BB8_D8FE08

s32 pad_002C0C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 80.0f, 90.0f },
    { 487.0f, 0.0f, 80.0f, 270.0f },
    { 13.0f, 0.0f, -80.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190150,
};

Script N(script_80242C80) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_002CBC[] = {
    0x00000000,
};

Script N(script_80242CC0) = SCRIPT({
    SetTexPanner(SI_VAR(0), SI_VAR(2));
    SetTexPanner(SI_VAR(1), SI_VAR(2));
    loop {
        EnableModel(SI_VAR(0), 1);
        EnableModel(SI_VAR(1), 1);
        SI_VAR(10) = 0;
        loop 20 {
            SetTexPanOffset(SI_VAR(2), 0, SI_VAR(10), 0);
            SI_VAR(10) += 3000;
            sleep 1;
        }
        EnableModel(SI_VAR(0), 0);
        EnableModel(SI_VAR(1), 0);
        sleep 160;
    }
});

Script N(script_80242DC4) = SCRIPT({
    GetEntryID(SI_VAR(10));
    if (SI_VAR(10) == SI_VAR(1)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(2)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(3)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(4)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(5)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(6)) {
        SI_VAR(0) = 2;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80242ED4) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D8D33C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D8D33C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D8D6EC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D8DF8C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80242F7C)[] = {
    0x0000002D, 0x0000002E, 0xFFFFFFFF,
};

s32 N(unk_80242F88)[] = {
    0x0000002A, 0x0000002B, 0xFFFFFFFF,
};

s32 N(unk_80242F94)[] = {
    0x00000033, 0x00000034, 0xFFFFFFFF,
};

s32 N(unk_80242FA0)[] = {
    0x00000030, 0x00000031, 0xFFFFFFFF,
};

Script N(script_80242FAC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 20;
    SI_VAR(2) = N(unk_80242F7C);
    SI_VAR(3) = N(unk_80242F88);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80243FD0_D91220, 0);
    sleep 100;
});

Script N(script_80243050) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 20;
    SI_VAR(2) = N(unk_80242F94);
    SI_VAR(3) = N(unk_80242FA0);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80243FD8_D91228, 0);
    sleep 100;
});

Script N(script_ExitWalk_802430F4) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80243FD0_D91220, 2);
    sleep 100;
});

s32 unk_missing_80243150[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_80243160) = SCRIPT({
    bind N(script_80242FAC) to TriggerFlag_WALL_INTERACT 20;
    bind N(script_80243050) to TriggerFlag_WALL_INTERACT 33;
    bind N(script_ExitWalk_802430F4) to 0x80000 22;
});

Script N(script_EnterWalk_802431C4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = N(unk_80242F7C);
            SI_VAR(3) = N(unk_80242F88);
            await 0x802861B0;
            spawn N(script_80243160);
        }
        == 1 {
            SI_VAR(2) = N(unk_80242F94);
            SI_VAR(3) = N(unk_80242FA0);
            await 0x802861B0;
            spawn N(script_80243160);
        }
        == 2 {
            SI_VAR(0) = N(script_80243160);
            spawn EnterWalk;
        }
    }
});

Vec4f N(triggerCoord_802432A8) =  { 13.0, 0.0, -80.0, 0.0 };

Script N(script_802432B8) = SCRIPT({
    EnableGroup(25, 0);
    ModifyColliderFlags(0, 24, 0x7FFFFE00);
    unbind;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243DB0));
    SI_VAR(0) = 64;
    SI_VAR(1) = 65;
    SI_VAR(2) = 0;
    spawn N(script_80242CC0);
    await N(script_MakeEntities);
    spawn N(script_EnterWalk_802431C4);
    sleep 1;
    if (SI_SAVE_FLAG(1516) == 0) {
        bind N(script_802432B8) to TriggerFlag_BOMB N(triggerCoord_802432A8);
    } else {
        EnableGroup(25, 0);
        ModifyColliderFlags(0, 24, 0x7FFFFE00);
    }
    SI_VAR(0) = 0;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_80242ED4);
    spawn N(script_80242C80);
});

s32 pad_0034A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802434B0) = SCRIPT({
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

s32 unk_missing_8024356C[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80243594)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_8024359C) = {
    .moveSpeed = 2.0,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 100.0,
    .unk_10 = 40.0,
    .unk_14 = 0x7,
    .chaseSpeed = 3.799999952316284,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 110.0,
    .unk_28 = 50.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802435CC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 3);
    SetSelfVar(2, 7);
    SetSelfVar(3, 6);
    func_802423CC_D8F61C(N(aISettings_8024359C));
});

NpcSettings N(npcSettings_8024363C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802435CC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x17,
    .unk_2A = 0,
};

Script N(script_NpcAI_80243668) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 48);
    SetSelfVar(3, 30);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_8024216C_D8F3BC();
});

NpcSettings N(npcSettings_80243710) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x10,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243668),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802434B0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x17,
    .unk_2A = 0x8,
};

NpcAISettings N(aISettings_8024373C) = {
    .moveSpeed = 2.0,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 100.0,
    .unk_10 = 0.0,
    .unk_14 = 0x4,
    .chaseSpeed = 3.5,
    .unk_1C = 0x1E,
    .unk_20 = 0x3,
    .chaseRadius = 150.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024376C) = SCRIPT({
    func_80241AB4_D8ED04(N(aISettings_8024373C));
});

NpcSettings N(npcSettings_8024378C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024376C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x17,
    .unk_2A = 0,
};

Script N(script_Init_802437B8) = SCRIPT({
    SetNpcFlagBits(-1, 0x80000, 1);
});

StaticNpc N(npcGroup_802437E0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024363C),
        .pos = { 200.0, 0.0, 75.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_802437B8),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000002, 0x000000C8, 0x00000000, 0x0000004B, 0x0000012C, 0x00000000, 0x0000004B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x000000FA, 0x00000000, 0x0000004B, 0x000000C8, 0x00000064, 0x00000001, 0x00000001 },
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80243710),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
        .extraAnimations = N(extraAnimationList_80243594),
    },
};

StaticNpc N(npcGroup_80243BC0)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_8024378C),
        .pos = { 200.0, 0.0, -75.0 },
        .flags = 0x00200C00,
        .init = N(script_Init_802437B8),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MYSTERY, 10 } },
        .movement = { 0x00000002, 0x000000C8, 0x00000000, 0xFFFFFFB5, 0x0000012C, 0x00000000, 0xFFFFFFB5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x000000FA, 0x00000000, 0x0000004B, 0x000000C8, 0x00000064, 0x00000001, 0x00000001 },
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
};

NpcGroupList N(npcGroupList_80243DB0) = {
    NPC_GROUP(N(npcGroup_802437E0), 0x1F080002),
    NPC_GROUP(N(npcGroup_80243BC0), 0x21040001),
    {},
};

s32 pad_003DD4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243DE0)[] = {
    0x00000000,
};

Script N(script_80243DE4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_80243E4C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80243DE4);
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

Script N(script_80243F2C) = SCRIPT({
    SI_VAR(10) = 262;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(1517) = 1;
    await N(script_80243E4C);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 435, 0, 0xFFFFFFBA, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1517));
    AssignScript(N(script_80243F2C));
});

// rodata: D_80243FD0_D91220

// rodata: D_80243FD8_D91228

// rodata: D_80243FE0_D91230

// rodata: D_80243FE8_D91238

// rodata: jtbl_80243FF0_D91240

// rodata: D_80244180_D913D0

// rodata: jtbl_80244188_D913D8

// rodata: jtbl_80244318_D91568

s32 pad_0044A8[] = {
    0x00000000, 0x00000000,
};

