#include "kzn_17.h"

s32 pad_00030C[1];
s32 pad_002CF4[3];
s32 pad_00309C[1];
Script N(script_UpdateTexturePan_80243100);
Script N(script_8024319C);
Script N(script_802432B8);
Script N(script_ExitWalk_802433D4);
Script N(script_ExitWalk_80243430);
Script N(script_8024348C);
Script N(main);
s32 unk_missing_8024360C[16];
Script N(script_8024364C);
Script N(script_8024366C);
Script N(script_8024368C);
Script N(script_802436AC);
Script N(script_802436CC);
Script N(script_802436EC);
Script N(script_8024370C);
Script N(script_MakeEntities);
s32 pad_003994[3];
Script N(script_802439CC);
Script N(script_NpcAI_80243AB8);
Script N(script_NpcAI_80243BB8);
Script N(script_80243C38);
s32 N(unk_80243CF0)[12];
Script N(script_80243D20);
Script N(script_NpcAI_80243DC0);
s32 N(unk_80243E30)[12];
Script N(script_80243E60);
Script N(script_80243ED0);
s32 unk_missing_80243FC4[22];
s32 unk_missing_80244048[11];
s32 N(unk_80244074)[1];
Script N(script_80244078);
Script N(script_802440A8);
s32 N(unk_802440D8)[1];
s32 N(unk_802440DC)[1];
Script N(script_802440E0);
Script N(script_80244224);
Script N(script_80244274);
Script N(script_802442F4);
Script N(script_80244618);
Script N(script_80244688);
s32 N(unk_80244980)[2];
Script N(script_80244988);
Script N(script_802449D8);
Script N(script_80244A28);
s32 N(vectorList_80244A8C)[15];
Script N(script_80244AC8);
Script N(script_80244B1C);
Script N(script_80244C8C);
Script N(script_Idle_80244D4C);
Script N(script_Interact_80244EBC);
Script N(script_Init_80244F5C);
StaticNpc N(npcGroup_80245050)[1];
StaticNpc N(npcGroup_80245240)[2];
StaticNpc N(npcGroup_80245620)[1];
NpcGroupList N(npcGroupList_80245810);
Script N(script_80245840);
Script N(script_80245AE0);
Script N(script_80245CA8);
Script N(script_80245CE8);
const char D_80246390_C8BE40[8]; // "kzn_11"
const char D_80246398_C8BE48[8]; // "kzn_18"
s32 pad_0065C4[3];

// text: func_80240000_C85AB0

// text: func_80240124_C85BD4

s32 pad_00030C[] = {
    0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240518_C85FC8

// text: func_802406CC_C8617C

// text: func_8024092C_C863DC

// text: func_80240BE0_C86690

// text: func_80240C4C_C866FC

// text: func_80240D48_C867F8

// text: func_80241788_C87238

// text: func_80241818_C872C8

// text: func_80241918_C873C8

// text: func_80241978_C87428

// text: func_80241A64_C87514

// text: N(set_script_owner_npc_anim)

// text: func_80241D30_C877E0

// text: N(UnkNpcAIFunc12)

// text: func_80241FC8_C87A78

// text: func_80242048_C87AF8

// text: func_80242488_C87F38

// text: func_802424D0_C87F80

// text: func_80242528_C87FD8

// text: func_8024259C_C8804C

// text: func_80242650_C88100

// text: func_802426B4_C88164

// text: func_80242710_C881C0

// text: func_802428E0_C88390

// text: func_80242934_C883E4

// text: func_8024296C_C8841C

// text: func_80242A08_C884B8

// text: func_80242AF8_C885A8

// text: func_80242C84_C88734

// text: func_80242CC8_C88778

s32 pad_002CF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80242D00_C887B0

// text: func_80242D20_C887D0

// text: func_80242D4C_C887FC

// text: func_80242DE4_C88894

// text: func_80242E84_C88934

// text: func_80242EBC_C8896C

// text: func_80242F74_C88A24

// text: func_80243004_C88AB4

s32 pad_00309C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -670.0f, 0.0f, 160.0f, 90.0f },
    { 620.0f, 0.0f, 30.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19010E,
};

Script N(script_UpdateTexturePan_80243100) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C85AB0();
                    return;
                }
            }
        }
    }
    func_80240124_C85BD4();
});

Script N(script_8024319C) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80243100);
    }
});

Script N(script_802432B8) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80243100);
    }
});

Script N(script_ExitWalk_802433D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246390_C8BE40, 1);
    sleep 100;
});

Script N(script_ExitWalk_80243430) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80246398_C8BE48, 0);
    sleep 100;
});

Script N(script_8024348C) = SCRIPT({
    bind N(script_ExitWalk_802433D4) to 0x80000 0;
    bind N(script_ExitWalk_80243430) to 0x80000 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA000B);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80245810));
    await N(script_MakeEntities);
    SI_VAR(0) = N(script_8024348C);
    spawn EnterWalk;
    sleep 1;
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    spawn N(script_80245CE8);
    SI_VAR(0) = 42;
    spawn N(script_8024319C);
    SI_VAR(0) = 43;
    spawn N(script_802432B8);
});

s32 unk_missing_8024360C[] = {
    0x00000000, 0x01010101, 0x01010101, 0x01010101, 0x01010101, 0x01010101, 0x01010101, 0x01010101,
    0x01010101, 0x01010101, 0x01010101, 0x01010101, 0x01010101, 0x01010101, 0x01010101, 0x01010000,
};

Script N(script_8024364C) = SCRIPT({
    SI_SAVE_FLAG(1316) = 1;
});

Script N(script_8024366C) = SCRIPT({
    SI_SAVE_FLAG(1317) = 1;
});

Script N(script_8024368C) = SCRIPT({
    SI_SAVE_FLAG(1318) = 1;
});

Script N(script_802436AC) = SCRIPT({
    SI_SAVE_FLAG(1319) = 1;
});

Script N(script_802436CC) = SCRIPT({
    SI_SAVE_FLAG(1320) = 1;
});

Script N(script_802436EC) = SCRIPT({
    SI_SAVE_FLAG(1321) = 1;
});

Script N(script_8024370C) = SCRIPT({
    SI_SAVE_FLAG(1322) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1316) == 0) {
        MakeEntity(D_802EA22C, 0xFFFFFF3D, 50, 27, 0, 0x80000000);
        AssignScript(N(script_8024364C));
    }
    if (SI_SAVE_FLAG(1317) == 0) {
        MakeEntity(D_802EA22C, 0xFFFFFF0B, 60, 27, 0, 0x80000000);
        AssignScript(N(script_8024366C));
    }
    if (SI_SAVE_FLAG(1318) == 0) {
        MakeEntity(D_802EA22C, 0xFFFFFED9, 70, 27, 0, 0x80000000);
        AssignScript(N(script_8024368C));
    }
    if (SI_SAVE_FLAG(1319) == 0) {
        MakeEntity(D_802EA22C, 0xFFFFFEA7, 80, 27, 0, 0x80000000);
        AssignScript(N(script_802436AC));
    }
    if (SI_SAVE_FLAG(1320) == 0) {
        MakeEntity(D_802EA22C, 0xFFFFFE75, 90, 27, 0, 0x80000000);
        AssignScript(N(script_802436CC));
    }
    if (SI_SAVE_FLAG(1321) == 0) {
        MakeEntity(D_802EA22C, 0xFFFFFE43, 100, 27, 0, 0x80000000);
        AssignScript(N(script_802436EC));
    }
    if (SI_SAVE_FLAG(1322) == 0) {
        MakeEntity(D_802EA22C, 0xFFFFFE11, 110, 27, 0, 0x80000000);
        AssignScript(N(script_8024370C));
    }
    CreatePushBlockGrid(0, 29, 2, 0xFFFFFF89, 0xFFFFFFFD, 5, 0);
    SetPushBlock(0, 28, 1, 1);
});

s32 pad_003994[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802439A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
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

Script N(script_802439CC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            func_80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80243A88) = {
    .moveSpeed = 0.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80243AB8) = SCRIPT({
    SetSelfVar(7, 1);
    SetSelfVar(8, 10);
    SetSelfVar(9, 9);
    SetSelfVar(10, 12);
    SetSelfVar(11, 7);
    SetSelfVar(12, 30);
    SetSelfVar(13, 15);
    SetSelfVar(14, 18);
    SetSelfVar(15, 15);
    func_80241A64_C87514(N(aISettings_80243A88));
});

NpcSettings N(npcSettings_80243B8C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x32,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243AB8),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

Script N(script_NpcAI_80243BB8) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 14);
    SetSelfVar(1, 28);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_802406CC_C8617C();
});

Script N(script_80243C38) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await func_800936DC;
        }
    }
});

NpcSettings N(npcSettings_80243CC4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243BB8),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802439CC),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

s32 N(unk_80243CF0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40900000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80243D20) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80242048_C87AF8(N(unk_80243CF0));
});

NpcAISettings N(aISettings_80243D90) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x3C,
    .waitTime = 0x3C,
    .alertRadius = 90.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 7.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 40.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243DC0) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_80242048_C87AF8(N(aISettings_80243D90));
});

s32 N(unk_80243E30)[] = {
    0x3F800000, 0x00000014, 0x00000005, 0x42F00000, 0x00000000, 0x00000003, 0x40C00000, 0x00000000,
    0x00000000, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_80243E60) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_80242048_C87AF8(N(unk_80243E30));
});

Script N(script_80243ED0) = SCRIPT({
    func_80242488_C87F38();
    SetNpcAnimation(-1, 0x33000F);
    func_802424D0_C87F80();
    func_80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_80242528_C87FD8();
    func_80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80242048_C87AF8(N(unk_80243CF0));
});

s32 unk_missing_80243FC4[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80243D20), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80243ED0),
    EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x000A0000,
};

NpcSettings N(npcSettings_8024401C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243DC0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

s32 unk_missing_80244048[] = {
    0x00000000, 0x00180018, 0x00000000, 0x00000000, N(script_80243E60), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x00190000,
};

s32 N(unk_80244074)[] = {
    0x00000000,
};

Script N(script_80244078) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802440A8) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_802440D8)[] = {
    0x00000000,
};

s32 N(unk_802440DC)[] = {
    0x00000000,
};

Script N(script_802440E0) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80242710_C881C0(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80242934_C883E4(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244224) = {
    SI_CMD(ScriptOpcode_CALL, func_8024296C_C8841C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802440E0), 0x10, 0, D_802465F0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802428E0_C88390, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80244274) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_80242AF8_C885A8(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_802442F4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80242AF8_C885A8(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_80244274);
            SetNpcAnimation(0xFFFFFFFC, 0x40002);
            GetAngleBetweenNPCs(SI_VAR(9), 0xFFFFFFFC, SI_VAR(11));
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            GetNpcPos(SI_VAR(9), SI_VAR(6), SI_VAR(7), SI_VAR(8));
            SetNpcFlagBits(0xFFFFFFFC, 256, 1);
            if (SI_VAR(11) <= 180) {
                SI_VAR(6) += 20;
            } else {
                SI_VAR(6) += 0xFFFFFFEC;
            }
            SI_VAR(7) += 10;
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            NpcJump1(0xFFFFFFFC, SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
            kill SI_VAR(10);
            RemoveItemEntity(SI_VAR(0));
            sleep 20;
            GetNpcYaw(0xFFFFFFFC, SI_VAR(10));
            SI_VAR(10) += 180;
            InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
            sleep 5;
            NpcJump1(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20);
            SetNpcAnimation(0xFFFFFFFC, 0x40001);
            NpcFaceNpc(0xFFFFFFFC, SI_VAR(9), 0);
            sleep 5;
            SetNpcFlagBits(0xFFFFFFFC, 256, 0);
            EnablePartnerAI();
            sleep 5;
        }
    }
    func_80242934_C883E4(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244618) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_8024296C_C8841C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802442F4), 0x10, 0, D_802465F0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802428E0_C88390, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80244688) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80242C84_C88734();
    GetCurrentPartnerID(SI_VAR(0));
    FindKeyItem(SI_VAR(5), SI_VAR(1));
    if (SI_VAR(0) == 4) {
        if (SI_VAR(1) != -1) {
            DisablePartnerAI(0);
            PlayerFaceNpc(SI_VAR(2), 0);
            sleep 1;
            GetNpcPos(SI_VAR(2), SI_VAR(13), SI_VAR(0), SI_VAR(14));
            GetNpcPos(0xFFFFFFFC, SI_VAR(13), SI_VAR(14), SI_VAR(15));
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            SI_VAR(0) += 10;
            NpcJump1(0xFFFFFFFC, SI_VAR(13), SI_VAR(0), SI_VAR(15), 10);
            SpeakToNpc(0xFFFFFFFC, 0x40006, 0x40001, 0, SI_VAR(2), SI_VAR(7));
            EnablePartnerAI();
            await N(script_80244618);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                }
                else {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(9));
                    if (SI_VAR(10) != 0) {
                        SpeakToPlayer(SI_VAR(2), SI_VAR(3), SI_VAR(4), 0, SI_VAR(10));
                    }
                    EnablePartnerAI();
                    if (SI_VAR(6) != 0) {
                        SI_VAR(0) = SI_VAR(6);
                        SI_VAR(1) = 1;
                        await N(script_80244078);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80242CC8_C88778();
});

s32 N(unk_80244980)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80244988) = SCRIPT({
    func_80242A08_C884B8(0, 0xB60008, 0xB60001, 84, 0, 0x1000E4, 0x1000E5, 0x1000E6, 0x1000E7, N(unk_80244980));
    await N(script_80244688);
});

Script N(script_802449D8) = SCRIPT({
    func_80242A08_C884B8(0, 0xB60008, 0xB60001, 84, 0, 0x1000E8, 0x1000E9, 0x1000EA, 0x1000EB, N(unk_80244980));
    await N(script_80244688);
});

Script N(script_80244A28) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80244078);
        AddStarPieces(1);
    }
});

s32 N(vectorList_80244A8C)[] = {
    0x43DF8000, 0x00000000, 0x421C0000, 0x43D80000, 0x40A00000, 0x423C0000, 0x43D58000, 0x41A00000,
    0x425C0000, 0x43D80000, 0x40A00000, 0x42780000, 0x43DF8000, 0x00000000, 0x428C0000,
};

Script N(script_80244AC8) = SCRIPT({
    SetNpcPos(0, 447, 0, 39);
    SetNpcYaw(0, 270);
    SetNpcAnimation(0, 0xB60007);
});

Script N(script_80244B1C) = SCRIPT({
    SetEnemyFlagBits(0, 0x400000, 1);
    func_802CDE68(0, 13);
    SetNpcRotation(0, 0, 0, 250);
    SetNpcAnimation(0, 0xB6000C);
    func_802CFD30(0, 4, 3.0, 3.0, 0, 0);
    PlaySoundAtNpc(0, 225, 0);
    spawn {
        SetNpcCollisionSize(0, 20, 24);
        LoadPath(30, N(vectorList_80244A8C), 5, 0);
    0:
        GetNextPathPos();
        SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 0;
        }
    }
    SpeakToPlayer(0, 0xB6000C, 0xB6000C, 5, 0x1000F9);
});

Script N(script_80244C8C) = SCRIPT({
    SetNpcPos(0, 447, 0, 70);
    SetNpcYaw(0, 270);
    SetEnemyFlagBits(0, 0x400000, 1);
    func_802CDE68(0, 13);
    SetNpcRotation(0, 0, 0, 250);
    SetNpcAnimation(0, 0xB6000C);
    func_802CFD30(0, 4, 3.0, 3.0, 0, 0);
});

Script N(script_Idle_80244D4C) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 605) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1000F7, 160, 40);
    SetNpcFlagBits(-1, 256, 1);
    SetNpcPos(-1, 290, 0, 30);
    SetNpcSpeed(-1, 5.0);
    SetNpcAnimation(-1, 0xB60007);
    NpcMoveTo(-1, 640, 80, 0);
    SetNpcFlagBits(-1, 256, 0);
    SetNpcAnimation(-1, 0xB60002);
    SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x1000F8);
    SI_SAVE_VAR(0) = 31;
    DisablePlayerInput(0);
});

Script N(script_Interact_80244EBC) = SCRIPT({
    if (SI_SAVE_VAR(0) < 32) {
        SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x1000FC);
        await N(script_80244988);
        await N(script_80244A28);
    } else {
        SpeakToPlayer(-1, 0xB60008, 0xB6000C, 5, 0x1000FA);
        await N(script_802449D8);
        await N(script_80244A28);
    }
});

Script N(script_Init_80244F5C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244EBC));
    match SI_SAVE_VAR(0) {
        < 31 {
            BindNpcIdle(-1, N(script_Idle_80244D4C));
            return;
        }
        < 32 {
            SetNpcPos(-1, 640, 0, 80);
            SetNpcAnimation(-1, 0xB60002);
            return;
        }
        == 32 {
            SetNpcCollisionSize(0, 20, 24);
            spawn N(script_80244C8C);
            return;
        }
        else {
            RemoveNpc(-1);
        }
    }
});

StaticNpc N(npcGroup_80245050)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802439A0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00510509,
        .init = N(script_Init_80244F5C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_80245240)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243B8C),
        .pos = { -325.0, 0.0, 150.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFEBB, 0x00000000, 0x00000096, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE7A, 0x00000000, 0x00000082, 0x0000010E, 0x00000082, 0x00000001, 0x00000001 },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80243CC4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

StaticNpc N(npcGroup_80245620)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_8024401C),
        .pos = { -450.0, 0.0, 100.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SODA, 10 } },
        .movement = { 0xFFFFFE3E, 0x00000000, 0x00000064, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE3E, 0x00000000, 0x00000064, 0x0000010E, 0x00000082, 0x00000001 },
        .animations = {
            0x004D0003, 0x004D0006, 0x004D0008, 0x004D0008, 0x004D0003, 0x004D0003, 0x004D0013, 0x004D0013, 0x004D000B, 0x004D000A, 0x004D000C, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003,
        },
    },
};

NpcGroupList N(npcGroupList_80245810) = {
    NPC_GROUP(N(npcGroup_80245050), 0x00000000),
    NPC_GROUP(N(npcGroup_80245240), 0x16140001),
    NPC_GROUP(N(npcGroup_80245620), 0x160D0001),
    {},
};

Script N(script_80245840) = SCRIPT({
    DisablePlayerInput(1);
10:
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        func_802D2B6C();
    }
0:
    sleep 1;
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 9) {
            goto 2;
        } else {
            goto 10;
        }
    }
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        goto 0;
    }
    GetPlayerTargetYaw(SI_VAR(0));
    if (SI_VAR(0) < 180) {
        InterpPlayerYaw(90, 1);
        sleep 1;
        func_80242E84_C88934(20);
    } else {
        InterpPlayerYaw(270, 1);
        sleep 1;
        func_80242E84_C88934(0xFFFFFFEC);
    }
    SetPlayerAnimation(0x1000F);
    sleep 1;
    func_80242D00_C887B0();
    func_802D2520(0x1000F, 4, 3.0, 3.0, 0, 0);
1:
    sleep 1;
    if (SI_AREA_FLAG(2) == 0) {
        goto 1;
    }
    sleep 30;
    func_802D2520(0x1000F, 0, 0, 0, 0, 0);
    SetPlayerAnimation(0x10030);
    func_80242E84_C88934(0);
2:
    DisablePlayerInput(0);
});

Script N(script_80245AE0) = SCRIPT({
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    UseSettingsFrom(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamDistance(0, 500);
    SetCamSpeed(0, 10.0);
    PanToTarget(0, 0, 1);
    loop {
        if (SI_AREA_FLAG(6) == 0) {
            if (SI_MAP_VAR(0) < 550) {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_MAP_VAR(0) < SI_VAR(0)) {
                    SI_VAR(0) += SI_MAP_VAR(0);
                    SI_VAR(0) /= 2;
                } else {
                    SI_VAR(0) = SI_MAP_VAR(0);
                }
                SI_VAR(1) += 55;
                SI_VAR(2) = SI_VAR(1);
                func_80242D4C_C887FC();
                SI_VAR(2) -= 55;
                SetPanTarget(0, SI_VAR(0), SI_VAR(2), 30);
                PanToTarget(0, 0, 1);
            }
        }
        sleep 1;
    }
});

Script N(script_80245CA8) = SCRIPT({
    loop {
        ShakeCam(0, 0, 30, 1.0);
    }
});

Script N(script_80245CE8) = SCRIPT({
    group 239;
    if (SI_SAVE_VAR(0) >= 32) {
        SetGroupEnabled(27, 0);
        EnableModel(28, 0);
        EnableModel(32, 0);
        ModifyColliderFlags(0, 6, 0x7FFFFE00);
        return;
    }
    EnableModel(30, 0);
    SI_AREA_FLAG(5) = 0;
    SI_AREA_FLAG(6) = 0;
    SI_AREA_FLAG(3) = 0;
    SI_AREA_FLAG(2) = 0;
    SI_AREA_FLAG(7) = 0;
    SI_VAR(0) = 0xFFFFFDB9;
    SI_VAR(2) = 165;
    TranslateGroup(27, SI_VAR(0), SI_VAR(2), 30);
    TranslateModel(28, SI_VAR(0), SI_VAR(2), 30);
0:
    sleep 1;
    if (SI_SAVE_FLAG(1322) == 0) {
        goto 0;
    }
    SI_VAR(10) = spawn N(script_80245AE0);
    spawn N(script_80244AC8);
    SI_MAP_VAR(10) = spawn N(script_80245CA8);
    PlaySound(0x8000001B);
    SI_VAR(3) = 0;
    MakeLerp(0xFFFFFDB9, 750, 270, 1);
    loop {
        UpdateLerp();
        func_80242D4C_C887FC();
        func_80243004_C88AB4(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_MAP_VAR(0) = SI_VAR(0);
        SI_MAP_VAR(0) += 20;
        TranslateGroup(27, SI_VAR(0), SI_VAR(2), 30);
        TranslateModel(28, SI_VAR(0), SI_VAR(2), 30);
        RotateGroup(27, SI_VAR(3), 0, 0, 1);
        RotateModel(28, SI_VAR(3), 0, 0, 1);
        func_80242EBC_C8896C();
        TranslateModel(28, SI_VAR(5), SI_VAR(6), 30);
        func_80242F74_C88A24();
        if (SI_AREA_FLAG(7) == 0) {
            spawn {
                GetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
                SI_VAR(3) -= 20;
                if (SI_VAR(3) < SI_VAR(0)) {
                    DisablePlayerInput(1);
                    SI_AREA_FLAG(7) = 1;
                12:
                    sleep 1;
                    if (SI_AREA_FLAG(7) != 0) {
                        goto 12;
                    }
                    DisablePlayerInput(0);
                }
            }
        }
        if (SI_AREA_FLAG(5) == 0) {
            if (SI_VAR(0) > 430) {
                spawn N(script_80244B1C);
                SI_AREA_FLAG(5) = 1;
            }
        }
        if (SI_AREA_FLAG(6) == 0) {
            if (SI_VAR(0) > 630) {
                kill SI_MAP_VAR(10);
                ModifyColliderFlags(0, 6, 0x7FFFFE00);
                PlaySoundAtCollider(6, 484, 0);
                PlayEffect(66, 2, 32, 32, 1, 10, 45, 0, 0, 0, 0, 0, 0, 0);
                EnableModel(32, 0);
                EnableModel(30, 1);
                spawn {
                    ShakeCam(0, 0, 20, 3.0);
                    ShakeCam(0, 0, 10, 1.7001953125);
                    ShakeCam(0, 0, 5, 0.5);
                }
                SI_AREA_FLAG(6) = 1;
            }
        }
        sleep 1;
        func_80242DE4_C88894();
        if (SI_VAR(4) < 80) {
            if (SI_AREA_FLAG(3) == 0) {
                func_80242D20_C887D0();
                if (SI_VAR(0) != 9) {
                    SI_AREA_FLAG(3) = 1;
                    spawn N(script_80245840);
                }
            }
        }
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SI_SAVE_VAR(0) = 32;
    sleep 50;
    StopSound(0x8000001B);
    SetGroupEnabled(27, 0);
    EnableModel(28, 0);
    kill SI_VAR(10);
    ResetCam(0, 90.0);
    SI_AREA_FLAG(7) = 0;
    SI_AREA_FLAG(2) = 1;
});

// rodata: D_80246390_C8BE40

// rodata: D_80246398_C8BE48

// rodata: D_802463A0_C8BE50

// rodata: jtbl_802463A8_C8BE58

// rodata: D_80246538_C8BFE8

// rodata: D_80246540_C8BFF0

// rodata: D_80246548_C8BFF8

// rodata: D_80246550_C8C000

// rodata: D_80246558_C8C008

// rodata: D_80246560_C8C010

// rodata: D_80246568_C8C018

// rodata: jtbl_80246570_C8C020

s32 pad_0065C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802465D0_C8C080

// rodata: D_802465D8_C8C088

// rodata: D_802465E0_C8C090

// rodata: D_802465E8_C8C098
