#include "kzn_03.h"

s32 pad_00030C[1];
s32 pad_002CF4[3];
s32 pad_00308C[1];
Script N(script_UpdateTexturePan_80243120);
Script N(script_802431BC);
Script N(script_802432D8);
Script N(script_ExitWalk_802433F4);
Script N(script_ExitWalk_80243450);
Script N(script_ExitWalk_802434AC);
Script N(script_ExitWalk_80243508);
Script N(script_ExitWalk_80243564);
Script N(script_802435C0);
Script N(script_8024365C);
Script N(main);
s32 pad_003A98[2];
s32 N(unk_80243AA0)[12];
Script N(script_80243AD0);
Script N(script_NpcAI_80243B70);
s32 N(unk_80243BE0)[12];
Script N(script_80243C10);
Script N(script_80243C80);
s32 unk_missing_80243D74[22];
s32 unk_missing_80243DF8[11];
Script N(script_80243E24);
Script N(script_NpcAI_80243F10);
Script N(script_NpcAI_80244010);
Script N(script_80244090);
s32 N(unk_802441A0)[1];
Script N(script_802441A4);
Script N(script_802441D4);
s32 N(unk_80244204)[1];
s32 N(unk_80244208)[1];
Script N(script_8024420C);
Script N(script_80244350);
Script N(script_802443A0);
Script N(script_80244420);
Script N(script_80244744);
Script N(script_802447B4);
s32 N(unk_80244AAC)[2];
Script N(script_80244AB4);
Script N(script_80244B04);
Script N(script_Idle_80244B68);
Script N(script_Interact_80244EF8);
Script N(script_Init_80245134);
Script N(script_802451E4);
Script N(script_80245240);
Script N(script_Init_8024529C);
StaticNpc N(npcGroup_802452E0)[3];
StaticNpc N(npcGroup_802458B0)[1];
StaticNpc N(npcGroup_80245AA0)[1];
StaticNpc N(npcGroup_80245C90)[1];
StaticNpc N(npcGroup_80245E80)[2];
NpcGroupList N(npcGroupList_80246260);
s32 pad_0062A8[2];
Script N(script_802462B0);
Script N(script_80246314);
Script N(script_80246410);
Script N(script_802464F8);
Script N(script_8024663C);
Script N(script_MakeEntities);
s32 pad_00698C[1];
s32 N(unk_80246990)[6];
s32 N(unk_802469A8)[6];
Script N(script_802469C0);
Script N(script_80246A28);
Script N(script_80247044);
s32 pad_0071BC[1];
const char D_802471C0_C67ED0[8]; // "kzn_02"
const char D_802471C8_C67ED8[8]; // "kzn_04"
const char D_802471D0_C67EE0[8]; // "kzn_09"
const char D_802471D8_C67EE8[8]; // "kzn_05"
s32 pad_00723C[1];
s32 pad_007408[2];
s32 pad_007418[2];

// text: func_80240000_C60D10

// text: func_80240124_C60E34

s32 pad_00030C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024038C_C6109C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802406A4_C613B4

// text: func_80240AE4_C617F4

// text: func_80240B2C_C6183C

// text: func_80240B84_C61894

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240E00_C61B10

// text: func_80240FB4_C61CC4

// text: func_80241214_C61F24

// text: func_802414C8_C621D8

// text: func_80241534_C62244

// text: func_80241630_C62340

// text: func_80242070_C62D80

// text: func_80242100_C62E10

// text: func_80242200_C62F10

// text: func_80242260_C62F70

// text: func_8024234C_C6305C

// text: func_8024259C_C632AC

// text: func_80242650_C63360

// text: func_802426B4_C633C4

// text: func_80242710_C63420

// text: func_802428E0_C635F0

// text: func_80242934_C63644

// text: func_8024296C_C6367C

// text: func_80242A08_C63718

// text: func_80242AF8_C63808

// text: func_80242C84_C63994

// text: func_80242CC8_C639D8

s32 pad_002CF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80242D00_C63A10

// text: func_80242D1C_C63A2C

// text: func_80242D38_C63A48

// text: func_80242DB0_C63AC0

// text: func_80242E54_C63B64

// text: func_80242EF8_C63C08

// text: func_80243070_C63D80

s32 pad_00308C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -410.0f, 870.0f, -65.0f, 90.0f },
    { 435.0f, 670.0f, -10.0f, 270.0f },
    { 450.0f, 470.0f, 220.0f, 270.0f },
    { -425.0f, 60.0f, 325.0f, 90.0f },
    { 440.0f, 20.0f, 280.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190105,
};

Script N(script_UpdateTexturePan_80243120) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C60D10();
                    return;
                }
            }
        }
    }
    func_80240124_C60E34();
});

Script N(script_802431BC) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80243120);
    }
});

Script N(script_802432D8) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80243120);
    }
});

Script N(script_ExitWalk_802433F4) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802471C0_C67ED0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80243450) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802471C8_C67ED8, 0);
    sleep 100;
});

Script N(script_ExitWalk_802434AC) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802471D0_C67EE0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80243508) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802471D8_C67EE8, 1);
    sleep 100;
});

Script N(script_ExitWalk_80243564) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_802471D0_C67EE0, 2);
    sleep 100;
});

Script N(script_802435C0) = SCRIPT({
    bind N(script_ExitWalk_802433F4) to 0x80000 31;
    bind N(script_ExitWalk_80243450) to 0x80000 34;
    bind N(script_ExitWalk_802434AC) to 0x80000 38;
    bind N(script_ExitWalk_80243508) to 0x80000 40;
    bind N(script_ExitWalk_80243564) to 0x80000 43;
});

Script N(script_8024365C) = SCRIPT({
    group 0;
    EnableTexPanning(27, 1);
    EnableTexPanning(26, 1);
    EnableTexPanning(71, 1);
    EnableTexPanning(70, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 400;
        SI_VAR(2) = 0;
        SI_VAR(3) = 800;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243120);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 300;
        SI_VAR(2) = 0xFFFFFE0C;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243120);
    }
    spawn {
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(13, 0, SI_VAR(0), 0);
            SI_VAR(0) += 0x8000;
            sleep 6;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0002);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80246260));
    await N(script_MakeEntities);
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_802435C0);
    } else {
        SI_VAR(0) = N(script_802435C0);
        spawn EnterWalk;
    }
    sleep 1;
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    spawn N(script_8024365C);
    SI_VAR(0) = 67;
    spawn N(script_802431BC);
    SI_VAR(0) = 68;
    spawn N(script_802432D8);
    await N(script_80247044);
});

s32 pad_003A98[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80243AA0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40900000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80243AD0) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802406A4_C613B4(N(unk_80243AA0));
});

NpcAISettings N(aISettings_80243B40) = {
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

Script N(script_NpcAI_80243B70) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_802406A4_C613B4(N(aISettings_80243B40));
});

s32 N(unk_80243BE0)[] = {
    0x3F800000, 0x00000014, 0x00000005, 0x42F00000, 0x00000000, 0x00000003, 0x40C00000, 0x00000000,
    0x00000000, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_80243C10) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_802406A4_C613B4(N(unk_80243BE0));
});

Script N(script_80243C80) = SCRIPT({
    func_80240AE4_C617F4();
    SetNpcAnimation(-1, 0x33000F);
    func_80240B2C_C6183C();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_80240B84_C61894();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802406A4_C613B4(N(unk_80243AA0));
});

s32 unk_missing_80243D74[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80243AD0), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80243C80),
    0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000, 0x000A0000,
};

NpcSettings N(npcSettings_80243DCC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243B70),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

s32 unk_missing_80243DF8[] = {
    0x00000000, 0x00180018, 0x00000000, 0x00000000, N(script_80243C10), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x00190000,
};

Script N(script_80243E24) = SCRIPT({
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

NpcAISettings N(aISettings_80243EE0) = {
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

Script N(script_NpcAI_80243F10) = SCRIPT({
    SetSelfVar(7, 1);
    SetSelfVar(8, 10);
    SetSelfVar(9, 9);
    SetSelfVar(10, 12);
    SetSelfVar(11, 7);
    SetSelfVar(12, 30);
    SetSelfVar(13, 15);
    SetSelfVar(14, 18);
    SetSelfVar(15, 15);
    func_8024234C_C6305C(N(aISettings_80243EE0));
});

NpcSettings N(npcSettings_80243FE4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x32,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243F10),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244010) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 14);
    SetSelfVar(1, 28);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_80240FB4_C61CC4();
});

Script N(script_80244090) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

NpcSettings N(npcSettings_8024411C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244010),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80243E24),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80244148) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
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

NpcSettings N(npcSettings_80244174) = {
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

s32 N(unk_802441A0)[] = {
    0x00000000,
};

Script N(script_802441A4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802441D4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80244204)[] = {
    0x00000000,
};

s32 N(unk_80244208)[] = {
    0x00000000,
};

Script N(script_8024420C) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80242710_C63420(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80242934_C63644(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244350) = {
    SI_CMD(ScriptOpcode_CALL, func_8024296C_C6367C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024420C), 0x10, 0, 0x80247420, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802428E0_C635F0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802443A0) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_80242AF8_C63808(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80244420) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80242AF8_C63808(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_802443A0);
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
    func_80242934_C63644(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244744) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_8024296C_C6367C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244420), 0x10, 0, 0x80247420, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802428E0_C635F0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802447B4) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80242C84_C63994();
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
            await N(script_80244744);
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
                        await N(script_802441A4);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80242CC8_C639D8();
});

s32 N(unk_80244AAC)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80244AB4) = SCRIPT({
    func_80242A08_C63718(0, 0xB60008, 0xB60001, 84, 0, 0x1000E4, 0x1000E5, 0x1000E6, 0x1000E7, N(unk_80244AAC));
    await N(script_802447B4);
});

Script N(script_80244B04) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_802441A4);
        AddStarPieces(1);
    }
});

Script N(script_Idle_80244B68) = SCRIPT({
    SetNpcSpeed(-1, 2.0);
    SetNpcAnimation(-1, 0xB60004);
    GetNpcPos(-1, SI_VAR(4), SI_VAR(5), SI_VAR(6));
    SI_VAR(3) = SI_VAR(4);
    SI_VAR(3) += 0xFFFFFFD3;
    SI_VAR(7) = 90;
    loop {
        SI_VAR(2) = SI_VAR(3);
        SI_VAR(3) = SI_VAR(4);
        SI_VAR(4) = SI_VAR(2);
        InterpNpcYaw(-1, SI_VAR(7), 5);
        MakeLerp(SI_VAR(2), SI_VAR(3), 45, 0);
        loop {
            UpdateLerp();
            SetNpcYaw(-1, SI_VAR(7));
            SetNpcPos(-1, SI_VAR(0), SI_VAR(5), SI_VAR(6));
            sleep 1;
            if (SI_SAVE_VAR(0) >= 29) {
                break;
            }
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        if (SI_SAVE_VAR(0) >= 29) {
            break;
        }
        SI_VAR(7) += 180;
        if (SI_VAR(7) >= 360) {
            SI_VAR(7) += 0xFFFFFE98;
        }
    }
    DisablePlayerInput(1);
    SetNpcAnimation(-1, 0xB60001);
    NpcFacePlayer(-1, 0);
    sleep 10;
    SetNpcFlagBits(-1, 256, 1);
    SetSelfVar(0, 1);
    spawn {
        GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetNpcJumpscale(-1, 2.5);
    5:
        PlaySoundAtNpc(-1, 812, 0);
        NpcJump0(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 9);
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            sleep 6;
            goto 5;
        }
    }
    SpeakToPlayer(-1, 0xB60009, 0xB60007, 512, 0x1000F3);
    SetSelfVar(0, 0);
    sleep 18;
    SetNpcFlagBits(-1, 256, 0);
    DisablePlayerInput(0);
});

Script N(script_Interact_80244EF8) = SCRIPT({
    SetNpcFlagBits(-1, 256, 1);
    if (SI_SAVE_VAR(0) < 29) {
        if (SI_SAVE_FLAG(1325) == 0) {
            AdjustCam(0, 3.30078125, 0, 350, 15.0, -7.0);
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000F1);
            SI_SAVE_FLAG(1325) = 1;
            ResetCam(0, 5.0);
        } else {
            SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000F2);
        }
    } else {
        SetSelfVar(0, 1);
        spawn {
            GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SetNpcJumpscale(-1, 2.5);
        5:
            PlaySoundAtNpc(-1, 812, 0);
            NpcJump0(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 9);
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                sleep 6;
                goto 5;
            }
        }
        SpeakToPlayer(-1, 0xB60009, 0xB60007, 512, 0x1000F3);
        SetSelfVar(0, 0);
        sleep 18;
    }
    SetNpcFlagBits(-1, 256, 0);
    await N(script_80244AB4);
    await N(script_80244B04);
});

Script N(script_Init_80245134) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 29 {
            if (SI_SAVE_FLAG(1311) == 1) {
                BindNpcIdle(-1, N(script_Idle_80244B68));
                BindNpcInteract(-1, N(script_Interact_80244EF8));
                return;
            }
        }
        == 29 {
            BindNpcInteract(-1, N(script_Interact_80244EF8));
            return;
        }
    }
    RemoveNpc(-1);
});

Script N(script_802451E4) = SCRIPT({
    loop {
        GetModelCenter(53);
        SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80245240) = SCRIPT({
    loop {
        GetModelCenter(59);
        SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Init_8024529C) = SCRIPT({
    SetNpcFlagBits(-1, 2, 1);
    SetNpcScale(-1, 0.30078125, 1, 0.30078125);
});

StaticNpc N(npcGroup_802452E0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244174),
        .pos = { 392.0, 470.0, 218.0 },
        .flags = 0x00110509,
        .init = N(script_Init_80245134),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80244148),
        .pos = { 392.0, 470.0, 218.0 },
        .flags = 0x00200F01,
        .init = N(script_Init_8024529C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80244148),
        .pos = { 392.0, 470.0, 218.0 },
        .flags = 0x00200F01,
        .init = N(script_Init_8024529C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_802458B0)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243DCC),
        .pos = { 140.0, 670.0, -20.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SODA, 10 } },
        .movement = { 0x0000008C, 0x0000029E, 0xFFFFFFEC, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFCE, 0x0000029E, 0xFFFFFFE7, 0x000000F0, 0x00000073, 0x00000001, 0x00000001 },
        .animations = {
            0x004D0003, 0x004D0006, 0x004D0008, 0x004D0008, 0x004D0003, 0x004D0003, 0x004D0013, 0x004D0013, 0x004D000B, 0x004D000A, 0x004D000C, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003,
        },
    },
};

StaticNpc N(npcGroup_80245AA0)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80243DCC),
        .pos = { -200.0, 670.0, -35.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SODA, 10 } },
        .movement = { 0xFFFFFF38, 0x0000029E, 0xFFFFFFDD, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFCE, 0x0000029E, 0xFFFFFFE7, 0x000000F0, 0x00000073, 0x00000001, 0x00000001 },
        .animations = {
            0x004D0003, 0x004D0006, 0x004D0008, 0x004D0008, 0x004D0003, 0x004D0003, 0x004D0013, 0x004D0013, 0x004D000B, 0x004D000A, 0x004D000C, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003,
        },
    },
};

StaticNpc N(npcGroup_80245C90)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80243DCC),
        .pos = { 30.0, 20.0, 320.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SODA, 10 } },
        .movement = { 0x0000001E, 0x00000014, 0x00000140, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000008C, 0x00000014, 0x00000113, 0x000000B4, 0x0000005F, 0x00000001, 0x00000001 },
        .animations = {
            0x004D0003, 0x004D0006, 0x004D0008, 0x004D0008, 0x004D0003, 0x004D0003, 0x004D0013, 0x004D0013, 0x004D000B, 0x004D000A, 0x004D000C, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003,
        },
    },
};

StaticNpc N(npcGroup_80245E80)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80243FE4),
        .pos = { 260.0, 20.0, 255.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000104, 0x00000014, 0x000000FF, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000104, 0x00000014, 0x000000FF, 0x00000064, 0x00000032, 0x00000001, 0x00000001 },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_8024411C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

NpcGroupList N(npcGroupList_80246260) = {
    NPC_GROUP(N(npcGroup_802452E0), 0x00000000),
    NPC_GROUP(N(npcGroup_802458B0), 0x16080002),
    NPC_GROUP(N(npcGroup_80245AA0), 0x16090002),
    NPC_GROUP(N(npcGroup_80245C90), 0x160A0002),
    NPC_GROUP(N(npcGroup_80245E80), 0x16130002),
    {},
};

s32 pad_0062A8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802462B0) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80246314) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(0);
    sleep 1;
    SetPlayerActionState(6);
    sleep 1;
    func_80242D00_C63A10();
    SI_VAR(10) = spawn N(script_802462B0);
    SetPlayerJumpscale(0.7001953125);
    PlayerJump(335, 290, 360, 40);
    SetPlayerFlagBits(8, 1);
    SetPlayerActionState(8);
    DisablePlayerPhysics(0);
    kill SI_VAR(10);
    func_80242D1C_C63A2C();
});

Script N(script_80246410) = SCRIPT({
    DisablePlayerPhysics(1);
    SetPlayerActionState(0);
    sleep 1;
    SetPlayerActionState(3);
    sleep 1;
    func_80242D00_C63A10();
    SI_VAR(10) = spawn N(script_802462B0);
    SetPlayerJumpscale(0.7001953125);
    PlayerJump(350, 470, 210, 40);
    SetPlayerActionState(10);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    kill SI_VAR(10);
    func_80242D1C_C63A2C();
});

Script N(script_802464F8) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(0);
    sleep 1;
    SetPlayerActionState(3);
    sleep 1;
    func_80242D00_C63A10();
    SI_VAR(10) = spawn N(script_802462B0);
    if (SI_MAP_VAR(9) == 0) {
        SetPlayerJumpscale(1.400390625);
        PlayerJump(0xFFFFFE2A, 670, 71, 18);
    } else {
        SetPlayerJumpscale(0.7001953125);
        PlayerJump(0xFFFFFE80, 870, 0xFFFFFFEA, 40);
    }
    SetPlayerActionState(10);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    kill SI_VAR(10);
    func_80242D1C_C63A2C();
});

Script N(script_8024663C) = SCRIPT({
    SI_SAVE_VAR(0) = 29;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 365, 530, 135, 0, 0x80000000);
    MakeItemEntity(236, 75, 290, 235, 17, SI_SAVE_FLAG(1330));
    MakeEntity(0x802EA0C4, 215, 745, 0xFFFFFF97, 0, 0x80000000);
    MakeEntity(0x802EA0C4, 85, 770, 0xFFFFFF97, 0, 0x80000000);
    MakeItemEntity(144, 85, 795, 0xFFFFFF97, 13, SI_SAVE_FLAG(1331));
    MakeEntity(0x802EA564, 35, 730, 0xFFFFFF97, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1332));
    MakeEntity(0x802EA564, 0xFFFFFFF1, 730, 0xFFFFFF97, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1333));
    MakeEntity(0x802EA564, 0xFFFFFFBF, 730, 0xFFFFFF97, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1334));
    MakeEntity(0x802EA564, 0xFFFFFF8D, 730, 0xFFFFFF97, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1335));
    if (SI_SAVE_VAR(0) < 29) {
        MakeEntity(0x802EA22C, 490, 470, 210, 0, 0x80000000);
        AssignScript(N(script_8024663C));
        spawn {
            loop {
                if (SI_SAVE_VAR(0) >= 29) {
                    break;
                }
                sleep 1;
            }
            ModifyColliderFlags(0, 50, 0x7FFFFE00);
        }
    } else {
        ModifyColliderFlags(0, 50, 0x7FFFFE00);
    }
    MakeEntity(0x802EAA30, 160, 30, 350, 0, 0x80000000);
    AssignScript(N(script_80246314));
    MakeEntity(0x802EAA30, 335, 265, 360, 0, 0x80000000);
    AssignScript(N(script_80246410));
    spawn {
        func_80242D38_C63A48();
    }
    MakeEntity(0x802EAA30, 0xFFFFFE66, 645, 120, 0, 0x80000000);
    AssignScript(N(script_802464F8));
});

s32 pad_00698C[] = {
    0x00000000,
};

s32 N(unk_80246990)[] = {
    0xC3A3C000, 0x447C2CCD, 0xC25C0000, 0x4369E666, 0x44648000, 0xC25C0000,
};

s32 N(unk_802469A8)[] = {
    0x43948000, 0x44180000, 0x437F0000, 0xC3B50000, 0x43858000, 0x437F0000,
};

Script N(script_802469C0) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80246A28) = {
    SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(9)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 2),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 3),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 3),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802469C0), SI_VAR(9)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 7),
        SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 512, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(4)),
        SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 10),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(5)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 0xFFFFFFFB),
        SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0xFFFFFFFC, SI_FIXED(0.5)),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0xFFFFFFFC, SI_ARRAY(3), SI_VAR(0), SI_VAR(1), 8),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, SI_FIXED(0.2001953125)),
    SI_CMD(ScriptOpcode_CALL, PlayerJump, SI_ARRAY(3), SI_ARRAY(4), SI_ARRAY(5), 5),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 10),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x8000D),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x80000019),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, func_80242DB0_C63AC0, SI_MAP_FLAG(10), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_NE, SI_AREA_VAR(0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 1000, 70, 1),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, func_80242EF8_C63C08, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(1), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(2), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80243070_C63D80),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(8), 0x8000),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 8327),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, SetPlayerFlagBits, 0x800000, 1),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 0),
    SI_CMD(ScriptOpcode_CALL, StopSound, 0x80000019),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 64, 0),
    SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(9)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x8000001A),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(11), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(1), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, func_80242E54_C63B64, SI_MAP_FLAG(11), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_NE, SI_AREA_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_SET, SI_VAR(2), SI_VAR(0)),
    SI_CMD(ScriptOpcode_DIV, SI_VAR(2), 10),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(0), 0, SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, func_80242EF8_C63C08, 1),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(1), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(2), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(11), 0),
    SI_CMD(ScriptOpcode_CALL, StopSound, 0x8000001A),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_80247044) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 7),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), N(unk_80246990)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 53),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 55),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 0xFFFFFEB9),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 895),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 0xFFFFFFD2),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 1),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80246A28), TriggerFlag_FLOOR_INTERACT, 47, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802451E4)),
    SI_CMD(ScriptOpcode_USE_FLAGS, 7),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), N(unk_802469A8)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 59),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 57),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 298),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 495),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 265),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 2),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80246A28), TriggerFlag_FLOOR_INTERACT, 48, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80245240)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 pad_0071BC[] = {
    0x00000000,
};

// rodata: D_802471C0_C67ED0

// rodata: D_802471C8_C67ED8

// rodata: D_802471D0_C67EE0

// rodata: D_802471D8_C67EE8

// rodata: D_802471E0_C67EF0

// rodata: jtbl_802471E8_C67EF8

s32 pad_00723C[] = {
    0x00000000,
};

// rodata: D_80247240_C67F50

// rodata: jtbl_80247248_C67F58

// rodata: D_802473D8_C680E8

// rodata: D_802473E0_C680F0

// rodata: D_802473E8_C680F8

// rodata: D_802473F0_C68100

// rodata: D_802473F8_C68108

// rodata: D_80247400_C68110

s32 pad_007408[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80247410_C68120

s32 pad_007418[] = {
    0x00000000, 0x00000000,
};
