#include "iwa_01.h"

s32 pad_000514[3];
s32 pad_0032A4[3];
s32 pad_0032D4[3];
Script N(script_ExitWalk_80243360);
Script N(script_ExitWalk_802433BC);
Script N(script_ExitWalk_80243418);
Script N(script_ExitWalk_80243474);
Script N(script_802434D0);
Script N(script_80243568);
Script N(script_80243688);
Script N(main);
Script N(script_MakeEntities);
s32 pad_0039B4[3];
s32 N(intTable_802439C0)[256];
s32 N(vertexTable_80243DC0)[16];
s32 N(displayList_80243E00)[50];
Script N(script_80243EC8);
s32 pad_003F14[3];
Script N(script_80243F20);
Script N(script_NpcAI_80244020);
Script N(script_NpcAI_80244104);
Script N(script_NpcAI_80244174);
Script N(script_80244184);
Script N(script_80244384);
Script N(script_80244420);
Script N(script_802444D0);
s32 unk_missing_8024471C[22];
Script N(script_80244774);
Script N(script_802447F8);
Script N(script_NpcAI_802448C0);
s32 unk_missing_80244B58[4];
Script N(script_NpcAI_80244BF0);
StaticNpc N(npcGroup_80244C40)[2];
StaticNpc N(npcGroup_80245020)[2];
StaticNpc N(npcGroup_80245400)[2];
StaticNpc N(npcGroup_802457E0)[2];
StaticNpc N(npcGroup_80245BC0)[1];
NpcGroupList N(npcGroupList_80245DB0);
s32 pad_005DF8[2];
s32 N(unk_80245E00)[8];
s32 N(unk_80245E20)[8];
Script N(script_80245E40);
Script N(script_80245E6C);
Script N(script_80245E98);
Script N(script_80246094);
Script N(script_80246290);
Script N(script_802462F0);
const char D_80246350_915A00[8]; // "iwa_00"
const char D_80246358_915A08[8]; // "iwa_03"
const char D_80246360_915A10[8]; // "iwa_02"
s32 pad_006368[2];
s32 pad_006388[2];
s32 pad_0066BC[1];

// text: func_80240000_90F6B0

// text: func_80240398_90FA48

s32 pad_000514[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240520_90FBD0

// text: func_80240710_90FDC0

// text: func_80240854_90FF04

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_80240A7C_91012C

// text: func_80240FB8_910668

// text: func_80241414_910AC4

// text: func_802415E0_910C90

// text: func_802416F0_910DA0

// text: func_8024192C_910FDC

// text: func_802419C0_911070

// text: func_80241A4C_9110FC

// text: func_80241B74_911224

// text: func_80241C78_911328

// text: func_80241CF0_9113A0

// text: func_80241D70_911420

// text: func_80241F6C_91161C

// text: func_8024228C_91193C

// text: func_802422C4_911974

// text: func_80242424_911AD4

// text: func_80242498_911B48

// text: func_802425C8_911C78

// text: func_80242664_911D14

// text: func_802426EC_911D9C

// text: func_80242794_911E44

// text: func_80242908_911FB8

// text: func_80242958_912008

// text: func_80242AF8_9121A8

// text: func_80242C48_9122F8

// text: func_80242CF4_9123A4

// text: func_80242E2C_9124DC

// text: func_80242EA8_912558

// text: dup_iwa_01_UnkDurationCheck

// text: func_80242F54_912604

s32 pad_0032A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802432B0_912960

s32 pad_0032D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -786.0f, 63.0f, 323.0f, 90.0f },
    { -770.0f, 163.0f, 45.0f, 90.0f },
    { 958.0f, 170.0f, 173.0f, 270.0f },
    { 989.0f, 370.0f, 235.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19005B,
};

Script N(script_ExitWalk_80243360) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246350_915A00, 1);
    sleep 100;
});

Script N(script_ExitWalk_802433BC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80246358_915A08, 0);
    sleep 100;
});

Script N(script_ExitWalk_80243418) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80246360_915A10, 0);
    sleep 100;
});

Script N(script_ExitWalk_80243474) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80246360_915A10, 1);
    sleep 100;
});

Script N(script_802434D0) = SCRIPT({
    EnableTexPanning(24, 1);
    EnableTexPanning(33, 1);
    SI_VAR(0) = 0;
10:
    SI_VAR(0) -= 3000;
    SetTexPanOffset(1, 0, 0, SI_VAR(0));
    sleep 1;
    goto 10;
});

Script N(script_80243568) = SCRIPT({
    EnableTexPanning(34, 1);
    EnableTexPanning(35, 1);
    EnableTexPanning(36, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
10:
    SetTexPanOffset(12, 0, SI_VAR(0), 0);
    SetTexPanOffset(13, 0, 0, SI_VAR(1));
    SI_VAR(0) += 0x8000;
    SI_VAR(1) += 0x8000;
    sleep 2;
    SetTexPanOffset(13, 0, 0, SI_VAR(1));
    SI_VAR(1) += 0x8000;
    sleep 2;
    goto 10;
});

Script N(script_80243688) = SCRIPT({
    bind N(script_ExitWalk_80243360) to 0x80000 4;
    bind N(script_ExitWalk_802433BC) to 0x80000 6;
    bind N(script_ExitWalk_80243418) to 0x80000 25;
    bind N(script_ExitWalk_80243474) to 0x80000 32;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 8;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80245DB0));
    await N(script_MakeEntities);
    spawn N(script_802434D0);
    spawn N(script_80243568);
    await N(script_80243EC8);
    spawn N(script_802462F0);
    spawn N(script_80246290);
    SetMusicTrack(0, 22, 0, 8);
    PlaySoundAtF(0x8000000D, 1, 0xFFFFFDC6, 0xFFFFFF4C, 425);
    PlaySoundAtF(0x8000000E, 1, 740, 0xFFFFFF56, 330);
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80243688);
    } else {
        SI_VAR(0) = N(script_80243688);
        spawn EnterWalk;
    }
    sleep 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802E9A18, 0xFFFFFD76, 123, 375, 0, 0x80000000);
    MakeEntity(D_802BCD9C, 0xFFFFFE09, 63, 225, 0, 90, 0x80000000);
    MakeEntity(D_802BCD9C, 825, 170, 115, 0, 90, 0x80000000);
    MakeItemEntity(232, 160, 125, 125, 17, SI_SAVE_FLAG(686));
    MakeItemEntity(54, 410, 140, 135, 0, SI_SAVE_FLAG(705));
    MakeEntity(D_802EAB04, 45, 10, 60, 0, 2, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(717));
});

s32 pad_0039B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(intTable_802439C0)[] = {
    0x00000000, 0x00000000, 0x00000011, 0x00000000, 0x00000000, 0x00000011, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x0E000022, 0x00000000, 0x00000000, 0x00000091, 0x00000000, 0x25000000,
    0x00000000, 0x0000CCCC, 0x4D00071F, 0x00003A00, 0x000000CC, 0xCC441A00, 0x00000000, 0x00000000,
    0x29000001, 0x0000CCCC, 0x9D000000, 0x00000000, 0x000026B9, 0xCC9E0000, 0x00000000, 0x00000007,
    0x0000001D, 0x00004DCC, 0x00003900, 0x00000000, 0x000029CC, 0xCC004800, 0x00000000, 0x00000008,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x30350000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x4F0032BA, 0x6A000000, 0x00000000,
    0x000000CC, 0xCC260000, 0xCCCC0A00, 0x0000008D, 0xA800002A, 0x00000000, 0x00000000, 0x00000000,
    0x000000CC, 0xCCA10028, 0xCCCC0000, 0x000000B2, 0x000000B3, 0xB3000006, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00230000, 0x000094CC, 0xCC920000, 0x00003830, 0x00000000,
    0x00000000, 0x005E0400, 0x00003600, 0x1F000026, 0x0000CCCC, 0xCCCC0017, 0x0078B3CC, 0x24000000,
    0x007BB800, 0x00CCCC42, 0x00CCCC3B, 0x0000CCCC, 0x000000CC, 0xBA00001E, 0x0000CCCC, 0x4D000000,
    0x00006506, 0x00CCB900, 0x00CCBA00, 0x0000CCCC, 0x49000000, 0x00000000, 0x0000CCA6, 0x4D000000,
    0x00B9A3BD, 0x00001800, 0x00000000, 0x00000DB3, 0x0000A64F, 0x0000CCCC, 0x00000000, 0x00000000,
    0x00000000, 0x00000033, 0x00740000, 0x00000000, 0x0000CCCC, 0x0000CCCC, 0x00000400, 0x00000000,
    0x00000000, 0x00001785, 0x0000164D, 0x4D002C00, 0x0060CCCC, 0x1500CCCC, 0x00000000, 0x00008C26,
    0x0000B3B3, 0x0E00AB7B, 0x1200CCCC, 0xCC000000, 0x004DCCCC, 0x00000000, 0xBAB3CC59, 0x00490049,
    0x0029CCCC, 0x00000600, 0x0000CCCC, 0xCC4D0000, 0x00000000, 0x0000000E, 0xCCCCCC36, 0x00002B49,
    0x005A0016, 0x00000014, 0x1F004DCC, 0xCC000000, 0x0A000000, 0x08AF2600, 0xCCCCCCB6, 0x0000001B,
    0x00000000, 0x00002C47, 0x00000000, 0x00000000, 0x0000004C, 0x7B2B0000, 0x00001A00, 0x00000000,
    0x00000000, 0x5E004D4D, 0x00003600, 0x0000AB00, 0x4887203A, 0xCCCC6F00, 0x00000E2B, 0xC8590000,
    0x00002900, 0x0000B39A, 0x26000000, 0x00450000, 0x0000003F, 0xCCCC3A00, 0x00000081, 0x68000000,
    0x004B0000, 0x0057CCB3, 0x57000000, 0x0084CCB3, 0x07004C00, 0x001B0000, 0x4DCC0000, 0xB8560000,
    0x00000000, 0x00007DA4, 0x00002900, 0x0099CCB3, 0x0A000000, 0x00000014, 0xB3B38300, 0x00860000,
    0x000000B3, 0xCC000000, 0x39020000, 0x00040000, 0x00000036, 0x00000000, 0xCCB35400, 0x00000A00,
    0x220000B3, 0xB3000000, 0xB3CC9500, 0x00000000, 0x00000000, 0x0000003A, 0xCCCC5900, 0x1D0D0000,
    0x0000006A, 0x6F00000D, 0xCCCC2400, 0x00000000, 0x00004D4D, 0x1B520000, 0x00000000, 0x00000000,
    0x00030000, 0x00000000, 0x5E000000, 0x43CCCC23, 0x0030CC74, 0x00000000, 0x00000000, 0x008E4633,
    0x00190700, 0x00000000, 0x00000000, 0x00CCCC00, 0x00000000, 0x00000026, 0x46007E55, 0x00000000,
    0x00000017, 0x000D0055, 0x83009F00, 0x00000000, 0x007D0000, 0x3A2B0000, 0x06006200, 0x00000000,
    0x00000000, 0x0000001B, 0x53550000, 0x81000000, 0x00A52D00, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x02730000, 0x00005A2A, 0x00000300, 0x00000000, 0x00000000,
};

s32 N(vertexTable_80243DC0)[] = {
    0xFFECFFEC, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x0014FFEC, 0x00000000, 0x04000000, 0xFFFFFFFF,
    0x00140014, 0x00000000, 0x04000400, 0xFFFFFFFF, 0xFFEC0014, 0x00000000, 0x00000400, 0xFFFFFFFF,
};

s32 N(displayList_80243E00)[] = {
    0xE7000000, 0x00000000, 0xE3000A01, 0x00000000, 0xE200001C, 0x00404A50, 0xD7000002, 0xFFFFFFFF,
    0xE7000000, 0x00000000, 0xE2001E01, 0x00000001, 0xFCFF97FF, 0xFF2DFEFF, 0xE3000D01, 0x00000000,
    0xE3000F00, 0x00000000, 0xFD900000, N(intTable_802439C0), 0xF5900000, 0x07094250, 0xE6000000, 0x00000000,
    0xF3000000, 0x071FF200, 0xE7000000, 0x00000000, 0xF5880800, 0x00094250, 0xF2000000, 0x0007C07C,
    0xE3000C00, 0x00080000, 0xE3001001, 0x00000000, 0xE3001201, 0x00002000, 0xE3001402, 0x00000C00,
    0xD9C0F9FB, 0x00000000, 0xD9FFFFFF, 0x00000005, 0x01004008, N(vertexTable_80243DC0), 0x06000204, 0x00000406,
    0xDF000000, 0x00000000,
};

Script N(script_80243EC8) = SCRIPT({
    func_80240398_90FA48();
    func_802C94A0(0, 0, func_80240000_90F6B0);
    func_802C90FC(26, 0, -1);
});

s32 pad_003F14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243F20) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
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

NpcAISettings N(aISettings_80243FF0) = {
    .moveSpeed = 1.7f,
    .moveTime = 0x5A,
    .waitTime = 0,
    .alertRadius = 110.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x2,
    .chaseSpeed = 7.5f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 110.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244020) = SCRIPT({
    SetNpcFlagBits(-1, 0x200002, 1);
    EnableNpcShadow(-1, 0);
0:
    RandInt(15, SI_VAR(0));
    SI_VAR(0) += 15;
    sleep SI_VAR(0);
    func_80241D70_911420(N(aISettings_80243FF0));
});

NpcSettings N(npcSettings_802440A8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244020),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x8,
    .unk_2A = 0x8,
};

NpcAISettings N(aISettings_802440D4) = {
    .moveSpeed = 8.3f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 2.5f,
    .unk_10 = 0.4f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80244104) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
    SetSelfVar(2, 17);
    SetSelfVar(3, 17);
    func_80240A7C_91012C(N(aISettings_802440D4));
});

Script N(script_NpcAI_80244174) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80244184) = {
    SI_CMD(ScriptOpcode_CALL, func_8024228C_91193C),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80244174)),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, -1, 256, 1),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_80240FB8_910668),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 4),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 0, 0xFFFFFC18, 0),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, func_800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80244104)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_80244358) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xC,
    .radius = 0xC,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244104),
    .onHit = &N(script_80244184),
    .aux = NULL,
    .onDefeat = &N(script_80243F20),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

Script N(script_80244384) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcFlagBits(-1, 4, 1);
    SetNpcFlagBits(-1, 512, 1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
});

Script N(script_80244420) = SCRIPT({
    EnableNpcShadow(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 30;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0x2F0012);
});

NpcAISettings N(aISettings_802444A0) = {
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

Script N(script_802444D0) = SCRIPT({
    func_800445D4(SI_VAR(0));
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
        DoBasicAI(N(aISettings_802444A0));
    });

s32 unk_missing_8024471C[] = {
    0x00000000, 0x00180016, N(script_80244384), 0x00000000, N(script_802444D0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x00080001, 0x00000000, 0x00180016, N(script_80244420), 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00080001,
};

Script N(script_80244774) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcFlagBits(-1, 4, 1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) -= 50;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
});

Script N(script_802447F8) = SCRIPT({
    SetNpcFlagBits(-1, 0x40000, 1);
    EnableNpcShadow(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) -= 50;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0x2F0013);
});

NpcAISettings N(aISettings_80244890) = {
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

Script N(script_NpcAI_802448C0) = SCRIPT({
    func_800445D4(SI_VAR(0));
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
    DoBasicAI(N(aISettings_80244890));
});

s32 unk_missing_80244B58[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

NpcSettings N(npcSettings_80244B68) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_80244774),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802448C0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x8,
    .unk_2A = 0x1,
};

NpcSettings N(npcSettings_80244B94) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = &N(script_802447F8),
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

NpcAISettings N(aISettings_80244BC0) = {
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

Script N(script_NpcAI_80244BF0) = SCRIPT({
    func_80242F54_912604(N(aISettings_80244BC0), 16);
});

NpcSettings N(npcSettings_80244C14) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244BF0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80244C40)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244B68),
        .pos = { 340.0, 70.0, 101.0 },
        .flags = 0x00000400,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0x00000159, 0x00000046, 0x000000F5, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001A9, 0x00000046, 0x000000F5, 0x00000091, 0x0000012C, 0x00000001 },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80244B94),
        .pos = { 340.0, 70.0, 101.0 },
        .flags = 0x00800F21,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F0019, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0019, 0x002F0019, 0x002F0009, 0x002F0009, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019, 0x002F0019,
        },
    },
};

StaticNpc N(npcGroup_80245020)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802440A8),
        .pos = { -250.0, 10.0, 260.0 },
        .flags = 0x00000800,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0xFFFFFF06, 0x0000000A, 0x00000104, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF06, 0x0000000A, 0x00000104, 0x000000B4, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F0001, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0001, 0x002F0001, 0x002F0005, 0x002F0005, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80244358),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F,
        },
    },
};

StaticNpc N(npcGroup_80245400)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802440A8),
        .pos = { -175.0, 10.0, 240.0 },
        .flags = 0x00000800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0xFFFFFF51, 0x0000000A, 0x000000F0, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF51, 0x0000000A, 0x000000F0, 0x000000B4, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F0001, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0001, 0x002F0001, 0x002F0005, 0x002F0005, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80244358),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F,
        },
    },
};

StaticNpc N(npcGroup_802457E0)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_802440A8),
        .pos = { -55.0, 10.0, 180.0 },
        .flags = 0x00000800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_HONEY_SYRUP, 10 } },
        .movement = { 0xFFFFFFC9, 0x0000000A, 0x000000B4, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFC9, 0x0000000A, 0x000000B4, 0x000000B4, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F0001, 0x002F0002, 0x002F0003, 0x002F0003, 0x002F0001, 0x002F0001, 0x002F0005, 0x002F0005, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000, 0x002F0000,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80244358),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F, 0x002F000F,
        },
    },
};

StaticNpc N(npcGroup_80245BC0)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_80244C14),
        .pos = { -657.0, 163.0, 155.0 },
        .flags = 0x00000C00,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFD81, 0x000000A3, 0x00000064, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFD71, 0x00000000, 0x0000007D, 0x0000007D, 0x0000007D, 0x00000000, 0x00000001 },
        .animations = {
            0x00300002, 0x00300006, 0x00300007, 0x00300007, 0x00300002, 0x00300002, 0x00300008, 0x00300008, 0x00300014, 0x00300017, 0x00300013, 0x00300015, 0x00300010, 0x00300011, 0x00300016, 0x00300000,
        },
    },
};

NpcGroupList N(npcGroupList_80245DB0) = {
    NPC_GROUP(N(npcGroup_80244C40), 0x09060002),
    NPC_GROUP(N(npcGroup_80245020), 0x09070002),
    NPC_GROUP(N(npcGroup_80245400), 0x09060002),
    NPC_GROUP(N(npcGroup_802457E0), 0x09070002),
    NPC_GROUP(N(npcGroup_80245BC0), 0x09040002),
    {},
};

s32 pad_005DF8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80245E00)[] = {
    0x42B40000, 0x3F000000, 0xBF000000, 0x41800000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80245E20)[] = {
    0x43870000, 0x3F000000, 0xBE3851EC, 0x41900000, 0x412F8BAC, 0xBEAE147B, 0x3B449BA6, 0xBC449BA6,
};

Script N(script_80245E40) = SCRIPT({
    SI_VAR(0) = N(unk_80245E00);
    func_802432B0_912960();
});

Script N(script_80245E6C) = SCRIPT({
    SI_VAR(0) = N(unk_80245E20);
    func_802432B0_912960();
});

Script N(script_80245E98) = SCRIPT({
    DisablePlayerInput(1);
    sleep 10;
    spawn {
        PlaySoundAtCollider(49, 8354, 0);
        MakeLerp(0, 0xFFFFFFB0, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(38, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 15;
    ModifyColliderFlags(0, 49, 0x7FFFFE00);
    PlayerMoveTo(0xFFFFFE48, 60, 30);
    DisablePlayerInput(0);
    sleep 100;
    spawn {
        PlaySoundAtCollider(49, 8354, 0);
        MakeLerp(0xFFFFFFB0, 0, 30, 0);
        loop {
            UpdateLerp();
            RotateModel(38, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    ModifyColliderFlags(1, 49, 0x7FFFFE00);
});

Script N(script_80246094) = SCRIPT({
    DisablePlayerInput(1);
    sleep 10;
    spawn {
        PlaySoundAtCollider(51, 8354, 0);
        MakeLerp(0, 80, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(40, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 15;
    ModifyColliderFlags(0, 51, 0x7FFFFE00);
    PlayerMoveTo(543, 50, 20);
    DisablePlayerInput(0);
    sleep 100;
    spawn {
        PlaySoundAtCollider(51, 8354, 0);
        MakeLerp(80, 0, 30, 0);
        loop {
            UpdateLerp();
            RotateModel(40, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    ModifyColliderFlags(1, 51, 0x7FFFFE00);
});

Script N(script_80246290) = SCRIPT({
    bind N(script_80245E98) to TriggerFlag_WALL_INTERACT 49;
    bind N(script_80245E40) to TriggerFlag_FLOOR_TOUCH 11;
    ModifyColliderFlags(3, 11, 5);
});

Script N(script_802462F0) = SCRIPT({
    bind N(script_80246094) to TriggerFlag_WALL_INTERACT 51;
    bind N(script_80245E6C) to TriggerFlag_FLOOR_TOUCH 17;
    ModifyColliderFlags(3, 17, 5);
});

// rodata: D_80246350_915A00

// rodata: D_80246358_915A08

// rodata: D_80246360_915A10

s32 pad_006368[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80246370_915A20

// rodata: D_80246378_915A28

// rodata: D_80246380_915A30

s32 pad_006388[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80246390_915A40

// rodata: D_80246398_915A48

// rodata: D_802463A0_915A50

// rodata: D_802463A8_915A58

// rodata: D_802463B0_915A60

// rodata: D_802463B8_915A68

// rodata: D_802463C0_915A70

// rodata: D_802463C8_915A78

// rodata: D_802463D0_915A80

// rodata: jtbl_802463D8_915A88

// rodata: jtbl_80246430_915AE0

// rodata: D_802465C0_915C70

// rodata: D_802465C8_915C78

// rodata: D_802465D0_915C80

// rodata: D_802465D8_915C88

// rodata: D_802465E0_915C90

// rodata: jtbl_802465E8_915C98

s32 pad_0066BC[] = {
    0x00000000,
};
