#include "nok_11.h"

s32 pad_001F4C[1];
Script N(script_80241FB0);
Script N(script_80241FDC);
s32 pad_002008[2];
Script N(script_ExitWalk_80242010);
Script N(script_ExitWalk_80242088);
Script N(script_802420D8);
Script N(script_80242240);
Script N(script_80242400);
Script N(main);
Script N(script_MakeEntities);
s32 pad_002738[2];
Script N(script_80242770);
s32 unk_missing_80242790[11];
Script N(script_NpcAI_802427EC);
f32 N(floatTable_80242888)[6];
Script N(script_NpcAI_802428D0);
Script N(script_NpcAI_8024299C);
Script N(script_SearchBush_80242A40);
Script N(script_ShakeTree_80242DA0);
Script N(script_802433A4);
s32 N(unk_80243434)[2];
s32 N(unk_8024343C)[4];
Script N(script_Idle_8024344C);
Script N(script_NpcAI_80243E2C);
Script N(script_Interact_80243E3C);
Script N(script_Idle_80243E6C);
Script N(script_Hit_80243ED4);
Script N(script_Defeat_80243F6C);
Script N(script_Interact_8024408C);
Script N(script_Idle_802440BC);
Script N(script_Defeat_80244CE8);
Script N(script_Defeat_80244D14);
StaticNpc N(npcGroup_80244D30)[1];
StaticNpc N(npcGroup_80244F20)[1];
StaticNpc N(npcGroup_80245110)[1];
Script N(script_Init_80245300);
Script N(script_Init_8024534C);
StaticNpc N(npcGroup_802453B4)[2];
Script N(script_Init_80245794);
Script N(script_Init_80245808);
StaticNpc N(npcGroup_8024589C)[2];
NpcGroupList N(npcGroupList_80245C7C);
NpcGroupList N(npcGroupList_80245CAC);
NpcGroupList N(npcGroupList_80245CC4);
s32 pad_005CDC[1];
const char D_80245CE0_9FA720[8]; // "mac_01"
const char D_80245CE8_9FA728[8]; // "nok_12"
s32 pad_005D4C[1];
s32 pad_005DA4[3];

// text: N(set_script_owner_npc_anim)

// text: func_8024007C_9F4ABC

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240394_9F4DD4

// text: func_802407D4_9F5214

// text: func_80240984_9F53C4

// text: N(UnkNpcAIFunc1)

// text: func_8024106C_9F5AAC

// text: N(UnkNpcAIFunc2)

// text: func_80241428_9F5E68

// text: func_80241494_9F5ED4

// text: N(UnkNpcAIFunc3)

// text: func_8024162C_9F606C

// text: func_802419BC_9F63FC

// text: func_80241AE0_9F6520

// text: func_80241CCC_9F670C

// text: func_80241D3C_9F677C

// text: func_80241F08_9F6948

// text: func_80241F30_9F6970

s32 pad_001F4C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -758.0f, 0.0f, -49.0f, 90.0f },
    { 886.0f, 0.0f, -40.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190045,
};

Script N(script_80241FB0) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

Script N(script_80241FDC) = SCRIPT({
    SetMusicTrack(0, 71, 0, 8);
});

s32 pad_002008[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80242010) = SCRIPT({
    if (SI_SAVE_VAR(346) == 2) {
        SI_SAVE_FLAG(1705) = 1;
    }
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245CE0_9FA720, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242088) = SCRIPT({
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245CE8_9FA728, 0);
    sleep 100;
});

Script N(script_802420D8) = SCRIPT({
    SetTexPanner(59, 0);
    SetTexPanner(60, 0);
    SetTexPanner(61, 0);
    SetTexPanner(62, 0);
    SetTexPanner(63, 0);
    SetTexPanner(64, 0);
    SetTexPanner(65, 0);
    SetTexPanner(66, 0);
    SetTexPanner(67, 0);
    SetTexPanner(68, 0);
10:
    loop 12 {
        SetTexPanOffset(0, 0, 0, 0);
        sleep 1;
    }
    loop 12 {
        SetTexPanOffset(0, 0, 0x4000, 0);
        sleep 1;
    }
    goto 10;
});

Script N(script_80242240) = SCRIPT({
    spawn {
        SetTexPanner(97, 1);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
10:
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        SetTexPanOffset(1, 1, SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 100;
        SI_VAR(1) -= 400;
        SI_VAR(1) += 1000;
        sleep 1;
        goto 10;
    }
    SetTexPanner(84, 2);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
20:
    SetTexPanOffset(2, 0, SI_VAR(0), 0);
    SetTexPanOffset(2, 1, SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 100;
    SI_VAR(1) += 800;
    SI_VAR(1) -= 400;
    sleep 1;
    goto 20;
});

Script N(script_80242400) = SCRIPT({
    bind N(script_ExitWalk_80242010) to 0x80000 0;
    bind N(script_ExitWalk_80242088) to 0x80000 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 32;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1968) = 1;
    if (SI_SAVE_VAR(0) == 0xFFFFFFB5) {
        MakeNpcs(0, N(npcGroupList_80245CAC));
    } else {
        if (SI_SAVE_VAR(0) >= 41) {
            if (SI_SAVE_FLAG(610) == 0) {
                MakeNpcs(0, N(npcGroupList_80245CC4));
            } else {
                MakeNpcs(0, N(npcGroupList_80245C7C));
            }
        } else {
            MakeNpcs(0, N(npcGroupList_80245C7C));
        }
    }
    await N(script_MakeEntities);
    spawn N(script_802420D8);
    spawn N(script_80242240);
    spawn N(script_80241FB0);
    PlaySound(0x8000005B);
    SI_VAR(0) = N(script_80242400);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA0C4, 30, 60, 0xFFFFFFAB, 0, 0x80000000);
    MakeEntity(0x802EA564, 110, 60, 0xFFFFFFAB, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(594));
    MakeEntity(0x802EA0C4, 330, 60, 0xFFFFFFAB, 0, 0x80000000);
    MakeEntity(0x802EA5AC, 380, 60, 0xFFFFFFAB, 0, 285, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(595));
    MakeEntity(0x802EA0C4, 650, 60, 0xFFFFFFAB, 0, 0x80000000);
    MakeEntity(0x802EA0C4, 700, 60, 0xFFFFFFAB, 0, 0x80000000);
    MakeEntity(0x802EA564, 750, 60, 0xFFFFFFAB, 0, 152, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(596));
});

s32 pad_002738[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242740) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 130.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_80242770) = SCRIPT({
    DoBasicAI(N(aISettings_80242740));
});

s32 unk_missing_80242790[] = {
    0x00000000, 0x00140017, 0x00000000, 0x00000000, N(script_80242770), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x00050000,
};

NpcAISettings N(aISettings_802427BC) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x2D,
    .waitTime = 0x14,
    .alertRadius = 70.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 7.5f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802427EC) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_80240394_9F4DD4(N(aISettings_802427BC));
});

NpcSettings N(npcSettings_8024285C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802427EC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

f32 N(floatTable_80242888)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_802428A0) = {
    .moveSpeed = 1.6f,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 80.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 2.2f,
    .unk_1C = 0x3C,
    .unk_20 = 0xF,
    .chaseRadius = 100.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802428D0) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFE0C);
    SetSelfVar(6, 21);
    SetSelfVar(1, 580);
    func_80241AE0_9F6520(N(aISettings_802428A0));
});

NpcSettings N(npcSettings_80242940) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x15,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802428D0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0x2,
};

NpcAISettings N(aISettings_8024296C) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 130.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 2.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x3,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024299C) = SCRIPT({
    DoBasicAI(N(aISettings_8024296C));
});

NpcSettings N(npcSettings_802429BC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024299C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802429E8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
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

NpcSettings N(npcSettings_80242A14) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x44,
    .radius = 0x50,
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

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80242A40) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241D3C_9F677C, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241D3C_9F677C, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80242DA0) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241D3C_9F677C, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241D3C_9F677C, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241D3C_9F677C, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241D3C_9F677C, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802433A4) = SCRIPT({
    loop {
        GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(6, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 3;
    }
});

s32 N(unk_80243434)[] = {
    0x00000001, 0x00000037,
};

s32 N(unk_8024343C)[] = {
    N(unk_80243434), 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_Idle_8024344C) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) <= 0xFFFFFF83) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    parallel {
10:
        sleep 3;
        PlayerFaceNpc(-1, 0);
        sleep 1;
        goto 10;
    }
    spawn N(script_80241FDC);
    SpeakToPlayer(-1, 0x210016, 0x210003, 5, 0xC011E);
    sleep 15;
    SetCamLeadPlayer(0, 0);
    SetCamProperties(0, 90.0, 0xFFFFFF42, 0, 0xFFFFFFD8, 200, 15.0, -8.5);
    sleep 15;
    SI_VAR(0) = N(unk_8024343C);
    spawn N(script_SearchBush_80242A40);
    sleep 15;
    PlaySoundAtNpc(-1, 812, 0);
    SetNpcJumpscale(-1, 1.0);
    NpcJump0(-1, 0xFFFFFF1A, 0, 0xFFFFFF63, 15);
    NpcFacePlayer(-1, 0);
    sleep 15;
    SpeakToPlayer(-1, 0x21001A, 0x21001B, 0, 0xC011F);
    SetCamProperties(0, 4.0, 0xFFFFFF74, 0, 0xFFFFFFD8, 400, 15.0, -5.0);
    SetNpcAnimation(-1, 0x21000A);
    sleep 10;
    spawn {
        sleep 10;
        SetNpcAnimation(-1, 0x210021);
        ShowMessageAtScreenPos(0xC0120, 160, 40);
    }
    spawn {
    }
    spawn {
        sleep 10;
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlayEffect(7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
        }
    }
    NpcMoveTo(-1, 0xFFFFFF37, 0xFFFFFFBD, 10);
    SetNpcJumpscale(-1, 2.0);
    NpcJump1(-1, 0xFFFFFF41, 0, 0xFFFFFFE0, 5);
    SI_VAR(10) = spawn N(script_802433A4);
    PlaySoundAtNpc(-1, 359, 0);
    NpcMoveTo(-1, 0xFFFFFF5B, 50, 15);
    kill SI_VAR(10);
    StopSound(359);
    sleep 5;
    SetNpcAnimation(-1, 0x210023);
    sleep 15;
    spawn {
        sleep 15;
        PlaySoundAtNpc(-1, 8365, 0);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 5;
        PlayEffect(95, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.7001953125, 30, 0, 0, 0, 0, 0, 0, 0);
        SI_VAR(0) += 10;
        PlayEffect(95, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.7001953125, 30, 0, 0, 0, 0, 0, 0, 0);
        sleep 5;
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 25;
        PlayEffect(95, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.7001953125, 30, 0, 0, 0, 0, 0, 0, 0);
        SI_VAR(0) += 10;
        PlayEffect(95, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.7001953125, 30, 0, 0, 0, 0, 0, 0, 0);
        sleep 5;
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 0xFFFFFFF1;
        PlayEffect(95, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.7001953125, 30, 0, 0, 0, 0, 0, 0, 0);
        SI_VAR(0) += 10;
        PlayEffect(95, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.7001953125, 30, 0, 0, 0, 0, 0, 0, 0);
    }
    PlaySoundAtNpc(-1, 769, 0);
    SetNpcJumpscale(-1, 0.5);
    NpcJump0(-1, 0xFFFFFF5B, 0xFFFFFFA6, 50, 20);
    sleep 30;
    PlaySoundAtNpc(-1, 116, 0);
    SetNpcAnimation(-1, 0x210025);
    SetNpcYaw(-1, 270);
    spawn {
        sleep 85;
        SetNpcAnimation(-1, 0x210026);
    }
    SetNpcJumpscale(-1, 0);
    NpcJump0(-1, 0xFFFFFF5B, 0, 50, 90);
    sleep 30;
    SetNpcAnimation(-1, 0x21000A);
    NpcMoveTo(-1, 0xFFFFFF42, 0xFFFFFFD3, 10);
    NpcFacePlayer(-1, 0);
    SetNpcAnimation(-1, 0x21001B);
    SetCamProperties(0, 90.0, 0xFFFFFF74, 0, 0xFFFFFFD8, 250, 15.0, -8.5);
    SpeakToPlayer(-1, 0x21001A, 0x21001B, 0, 0xC0121);
    DisablePartnerAI(0);
    GetCurrentPartnerID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 5, 0xC0122);
        }
        == 2 {
            SpeakToPlayer(0xFFFFFFFC, 0x2000D, 0x20003, 5, 0xC0123);
        }
        == 3 {
            SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 5, 0xC0124);
        }
    }
    EnablePartnerAI();
    SpeakToPlayer(-1, 0x21001A, 0x21001B, 0, 0xC0125);
    ShowChoice(0x1E0013);
    sleep 10;
    if (SI_VAR(0) == 0) {
        ContinueSpeech(-1, 0x21001A, 0x21001B, 0, 0xC0126);
    } else {
        ContinueSpeech(-1, 0x21001A, 0x21001B, 0, 0xC0127);
    }
    sleep 10;
    StartBossBattle(4);
});

Script N(script_NpcAI_80243E2C) = SCRIPT({

});

Script N(script_Interact_80243E3C) = SCRIPT({
    SpeakToPlayer(-1, 0x210014, 0x210014, 5, 0xC012B);
});

Script N(script_Idle_80243E6C) = SCRIPT({
    loop {
        GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Hit_80243ED4) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        2, 4, 6 {
            DisablePlayerInput(1);
            SpeakToPlayer(-1, 0x210014, 0x210014, 5, 0xC012B);
            DisablePlayerInput(0);
        }
    }
});

Script N(script_Defeat_80243F6C) = SCRIPT({
    ClearDefeatedEnemies();
    SetNpcAnimation(-1, 0x210014);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcCollisionSize(-1, 24, 32);
    SetNpcCollisionSize(6, 24, 32);
    SI_SAVE_VAR(0) = 0xFFFFFFB6;
    spawn {
        sleep 4;
        spawn N(script_80241FB0);
    }
    BindNpcAI(-1, N(script_NpcAI_80243E2C));
    SetNpcFlagBits(6, 2, 1);
    ResetCam(0, 90.0);
    DisablePlayerInput(0);
});

Script N(script_Interact_8024408C) = SCRIPT({
    SpeakToPlayer(-1, 0x470002, 0x470001, 0, 0xC0134);
});

Script N(script_Idle_802440BC) = SCRIPT({
1:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_AREA_VAR(2) == 0) {
        if (SI_VAR(0) >= 0xFFFFFEFC) {
            goto 10;
        } else {
            goto 2;
        }
    } else {
        if (SI_VAR(0) <= 0xFFFFFFC9) {
            goto 10;
        } else {
            goto 2;
        }
    }
2:
    sleep 1;
    goto 1;
10:
    DisablePlayerInput(1);
    0x802D2B6C();
    SetMusicTrack(0, 91, 0, 8);
    SpeakToPlayer(8, 0x470002, 0x470001, 0, 0xC012C);
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 20;
    } else {
        SI_VAR(0) = 0xFFFFFFEC;
    }
    AdjustCam(0, 5.0, SI_VAR(0), 275.0, 17.5, -12.0);
    SpeakToPlayer(8, 0x470002, 0x470001, 0, 0xC012D);
15:
    ShowCoinCounter(1);
    ShowChoice(0x1E0045);
    if (SI_VAR(0) == 0) {
        goto 30;
    }
    if (SI_VAR(0) == 1) {
        goto 50;
    }
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 20;
    } else {
        SI_VAR(0) = 0xFFFFFFEC;
    }
    ShowCoinCounter(0);
    ContinueSpeech(8, 0x470002, 0x470001, 0, 0xC012E);
    ShowCoinCounter(1);
    ShowChoice(0x1E0045);
    if (SI_VAR(0) == 0) {
        goto 30;
    }
    if (SI_VAR(0) == 1) {
        goto 50;
    }
    ShowCoinCounter(0);
20:
    ContinueSpeech(8, 0x470002, 0x470001, 0, 0xC0135);
    StartBossBattle(3);
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 20;
    } else {
        SI_VAR(0) = 0xFFFFFFEC;
    }
    SpeakToPlayer(8, 0x470002, 0x470001, 0, 0xC0136);
    SetNpcAnimation(8, 0x470005);
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 90;
    } else {
        SI_VAR(0) = 270;
    }
    InterpNpcYaw(8, SI_VAR(0), 0);
    sleep 30;
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 125;
    } else {
        SI_VAR(0) = 0xFFFFFE52;
    }
    NpcMoveTo(8, SI_VAR(0), 0xFFFFFFDB, 40);
    SetNpcPos(8, 0, 0xFFFFFC18, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    ResetCam(0, 5.0);
    goto 100;
30:
    func_80241F08_9F6948();
    if (SI_VAR(0) == 1) {
        goto 40;
    }
    CloseMessage();
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 0xFFFFFF29;
    } else {
        SI_VAR(0) = 0xFFFFFF9C;
    }
    SetNpcAnimation(8, 0x470003);
    NpcMoveTo(8, SI_VAR(0), SI_VAR(2), 20);
    SetNpcAnimation(8, 0x470001);
    func_80241F30_9F6970();
    ShowCoinCounter(0);
    SpeakToPlayer(8, 0x470002, 0x470001, 0, 0xC0133);
    sleep 20;
    SetNpcAnimation(8, 0x470003);
    NpcMoveTo(8, 0xFFFFFF59, 0xFFFFFF9C, 20);
    SetNpcFlagBits(8, 256, 0);
    BindNpcInteract(8, N(script_Interact_8024408C));
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    SetNpcAnimation(8, 0x470001);
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 270;
    } else {
        SI_VAR(0) = 90;
    }
    InterpNpcYaw(8, SI_VAR(0), 0);
    sleep 10;
    SpeakToPlayer(8, 0x470002, 0x470001, 0, 0xC0134);
    ResetCam(0, 5.0);
    goto 100;
40:
    ShowCoinCounter(0);
    ContinueSpeech(8, 0x470002, 0x470001, 0, 0xC012F);
    ResetCam(0, 5.0);
    spawn N(script_80241FB0);
    sleep 30;
    DisablePlayerInput(0);
41:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_AREA_VAR(2) == 0) {
        if (SI_VAR(0) >= 0xFFFFFF01) {
            SI_VAR(3) = 0xFFFFFF00;
            goto 43;
        } else {
            goto 42;
        }
    } else {
        if (SI_VAR(0) <= 0xFFFFFFC4) {
            SI_VAR(3) = 0xFFFFFFC5;
            goto 43;
        } else {
            goto 42;
        }
    }
42:
    sleep 1;
    goto 41;
43:
    DisablePlayerInput(1);
    0x802D2B6C();
    SetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
    SpeakToPlayer(8, 0x470002, 0x470001, 0, 0xC0130);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
    DisablePlayerInput(0);
    goto 41;
50:
    ShowCoinCounter(0);
    ContinueSpeech(8, 0x470002, 0x470001, 0, 0xC0131);
    ResetCam(0, 5.0);
    spawn N(script_80241FB0);
    sleep 30;
    DisablePlayerInput(0);
51:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_AREA_VAR(2) == 0) {
        if (SI_VAR(0) >= 0xFFFFFF01) {
            SI_VAR(3) = 0xFFFFFF00;
            goto 53;
        } else {
            goto 52;
        }
    } else {
        if (SI_VAR(0) <= 0xFFFFFFC4) {
            SI_VAR(3) = 0xFFFFFFC5;
            goto 53;
        } else {
            goto 52;
        }
    }
52:
    sleep 1;
    goto 51;
53:
    DisablePlayerInput(1);
    0x802D2B6C();
    SetMusicTrack(0, 91, 0, 8);
    SetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
    SpeakToPlayer(8, 0x470002, 0x470001, 0, 0xC0132);
    if (SI_AREA_VAR(2) == 0) {
        SI_VAR(0) = 20;
    } else {
        SI_VAR(0) = 0xFFFFFFEC;
    }
    AdjustCam(0, 5.0, SI_VAR(0), 275.0, 17.5, -12.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
    goto 15;
100:
    spawn N(script_80241FB0);
    sleep 30;
    DisablePlayerInput(0);
});

Script N(script_Defeat_80244CE8) = SCRIPT({
    SI_SAVE_FLAG(610) = 1;
    ClearDefeatedEnemies();
});

Script N(script_Defeat_80244D14) = SCRIPT({
    ClearDefeatedEnemies();
});

StaticNpc N(npcGroup_80244D30)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024285C),
        .pos = { -350.0, 0.0, -30.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 3 }, { ItemId_KOOPA_LEAF, 7 } },
        .movement = { 0xFFFFFEA2, 0x00000000, 0xFFFFFFE2, 0x00000032, 0x00000014, 0xFFFF8001, 0x00000001, 0xFFFFFEA2, 0x00000000, 0xFFFFFFE2, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80244F20)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242940),
        .pos = { 0.0, 60.0, -30.0 },
        .flags = 0x00000500,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000000, 0x0000003C, 0xFFFFFFE2, 0x00000032, 0x00000014, 0xFFFF8001, 0x00000001, 0x00000000, 0x0000003C, 0xFFFFFFE2, 0x000000FA },
        .animations = {
            0x00280001, 0x00280003, 0x00280004, 0x00280004, 0x00280001, 0x00280001, 0x00280006, 0x00280006, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004, 0x00280004,
        },
    },
};

StaticNpc N(npcGroup_80245110)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802429BC),
        .pos = { 430.0, 0.0, -27.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x000001AE, 0x00000000, 0xFFFFFFE5, 0x00000032, 0x00000014, 0xFFFF8001, 0x00000001, 0x000001AE, 0x00000000, 0xFFFFFFE5, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00270001, 0x00270002, 0x00270003, 0x00270003, 0x00270001, 0x00270001, 0x00270005, 0x00270005, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003,
        },
    },
};

Script N(script_Init_80245300) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024344C));
    BindNpcDefeat(-1, N(script_Defeat_80243F6C));
    BindNpcInteract(-1, N(script_Interact_80243E3C));
});

Script N(script_Init_8024534C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80243E6C));
    BindNpcHit(-1, N(script_Hit_80243ED4));
    SetNpcFlagBits(-1, 16, 0);
    SetNpcFlagBits(-1, 2, 1);
});

StaticNpc N(npcGroup_802453B4)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802429E8),
        .pos = { -170.0, 0.0, -155.0 },
        .flags = 0x00640D0D,
        .init = N(script_Init_80245300),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
        .tattle = 0x1A0006,
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802429E8),
        .pos = { -170.0, 0.0, -155.0 },
        .flags = 0x21F40F0C,
        .init = N(script_Init_8024534C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
        .tattle = 0x1A0006,
    },
};

Script N(script_Init_80245794) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802440BC));
    BindNpcDefeat(-1, N(script_Defeat_80244CE8));
    EnableNpcShadow(-1, 0);
    SetNpcFlagBits(-1, 256, 1);
    GetEntryID(SI_AREA_VAR(2));
});

Script N(script_Init_80245808) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_80244D14));
    SetNpcFlagBits(-1, 256, 1);
    GetEntryID(SI_VAR(3));
    if (SI_VAR(3) == 0) {
        SetNpcYaw(-1, 270);
    } else {
        SetNpcYaw(-1, 90);
    }
});

StaticNpc N(npcGroup_8024589C)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_80242A14),
        .pos = { -164.0, 0.0, -37.0 },
        .flags = 0x00B44D04,
        .init = N(script_Init_80245794),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80242A14),
        .pos = { -164.0, 0.0, -37.0 },
        .flags = 0x00F00D05,
        .init = N(script_Init_80245808),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001, 0x00470001,
        },
        .tattle = 0x1A0082,
    },
};

NpcGroupList N(npcGroupList_80245C7C) = {
    NPC_GROUP(N(npcGroup_80244D30), 0x05080001),
    NPC_GROUP(N(npcGroup_80244F20), 0x05020001),
    NPC_GROUP(N(npcGroup_80245110), 0x05030002),
    {},
};

NpcGroupList N(npcGroupList_80245CAC) = {
    NPC_GROUP(N(npcGroup_802453B4), 0x02030000),
    {},
};

NpcGroupList N(npcGroupList_80245CC4) = {
    NPC_GROUP(N(npcGroup_8024589C), 0x05180001),
    {},
};

s32 pad_005CDC[] = {
    0x00000000,
};

// rodata: D_80245CE0_9FA720

// rodata: D_80245CE8_9FA728

// rodata: D_80245CF0_9FA730

// rodata: jtbl_80245CF8_9FA738

s32 pad_005D4C[] = {
    0x00000000,
};

// rodata: D_80245D50_9FA790

// rodata: D_80245D58_9FA798

// rodata: D_80245D60_9FA7A0

// rodata: jtbl_80245D68_9FA7A8

s32 pad_005DA4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
