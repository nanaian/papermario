#include "omo_14.h"

s32 pad_000158[2];
s32 unk_missing_80240590[12];
Script N(script_80240620);
s32 pad_00064C[1];
Script N(script_80240650);
Script N(script_ExitWalk_8024067C);
Script N(script_ExitWalk_802406D8);
Script N(script_80240734);
Script N(main);
s32 pad_0008EC[1];
s32 N(intTable_8024091C)[22];
Script N(script_Idle_80240974);
Script N(script_Idle_80241288);
Script N(script_Init_8024195C);
s32 N(intTable_802419E0)[30];
Script N(script_Init_80241A58);
StaticNpc N(npcGroup_80241B30)[1];
StaticNpc N(npcGroup_80241D20)[10];
NpcGroupList N(npcGroupList_80243080);
s32 pad_0030A4[3];
const char D_802430B0_DE8760[8]; // "omo_02"
const char D_802430B8_DE8768[8]; // "omo_15"

// text: func_80240000_DE56B0

s32 pad_000158[] = {
    0x00000000, 0x00000000,
};

// text: func_80240160_DE5810

// text: func_802403FC_DE5AAC

// text: func_80240564_DE5C14

s32 unk_missing_80240590[] = {
    0x3C038011, D_8063EBB3, 0x24020006, 0x54620003, 0xAC800088, 0x24020001, 0xAC820088, 0x03E00008,
    0x24020002, 0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -260.0f, 0.0f, 20.0f, 90.0f },
    { 230.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900E6,
};

Script N(script_80240620) = SCRIPT({
    SetMusicTrack(0, 32, 0, 8);
});

s32 pad_00064C[] = {
    0x00000000,
};

Script N(script_80240650) = SCRIPT({
    spawn {
        func_80240000_DE56B0();
    }
});

Script N(script_ExitWalk_8024067C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802430B0_DE8760, 1);
    sleep 100;
});

Script N(script_ExitWalk_802406D8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802430B8_DE8768, 0);
    sleep 100;
});

Script N(script_80240734) = SCRIPT({
    bind N(script_ExitWalk_8024067C) to 0x80000 0;
    bind N(script_ExitWalk_802406D8) to 0x80000 3;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243080));
    spawn N(script_80240620);
    if (SI_SAVE_VAR(0) < 3) {
        PlaySoundAtNpc(0, 0x8000004C, 0);
    }
    spawn N(script_80240650);
    if (SI_SAVE_VAR(0) >= 3) {
        EnableModel(37, 0);
        EnableModel(38, 0);
        ModifyColliderFlags(0, 6, 0x7FFFFE00);
    }
    SI_VAR(0) = N(script_80240734);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_0008EC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_802408F0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

s32 N(intTable_8024091C)[] = {
    0x000000C8, 0x00000000, 0x000000D2, 0xFFFFFFF6, 0x000000D2, 0x0000000A, 0x000000DC, 0xFFFFFFEC,
    0x000000DC, 0x00000000, 0x000000DC, 0x00000014, 0x000000E6, 0x0000001E, 0x000000E6, 0x0000000A,
    0x000000E6, 0x00000000, 0x000000E6, 0x0000000A, 0x000000E6, 0x0000001E,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80240974) = {
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_FIXED(3.5)),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(17), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_VAR(10)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
            SI_CMD(ScriptOpcode_IF_GT, SI_VAR(2), 0xFFFFFF2E),
                SI_CMD(ScriptOpcode_CALL, func_80240564_DE5C14),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(10), SI_VAR(9)),
                SI_CMD(ScriptOpcode_MATCH, SI_VAR(9)),
                    SI_CMD(ScriptOpcode_CASE_EQ, -1),
                        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_VAR(10)),
                        SI_CMD(ScriptOpcode_CALL, func_80240160_DE5810),
                        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(14), 30),
                            SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                                SI_CMD(ScriptOpcode_CALL, PlaySound, 1005),
                                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10),
                                SI_CMD(ScriptOpcode_SPAWN_THREAD),
                                    SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 1, 4, SI_FIXED(1.0)),
                                SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
                                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
                                SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x1001B),
                                SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, SI_FIXED(1.0)),
                                SI_CMD(ScriptOpcode_CALL, PlaySound, 1006),
                                SI_CMD(ScriptOpcode_CALL, PlayerJump1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15),
                                SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
                            SI_CMD(ScriptOpcode_ELSE),
                                SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(3), SI_VAR(4), SI_VAR(5)),
                                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10),
                            SI_CMD(ScriptOpcode_END_IF),
                            SI_CMD(ScriptOpcode_SET, SI_VAR(14), 0),
                        SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CASE_EQ, 6),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024091C)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
                        SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 180),
                            SI_CMD(ScriptOpcode_CALL, GetSelfVar, 1, SI_VAR(9)),
                            SI_CMD(ScriptOpcode_IF_NE, SI_VAR(9), 6),
                                SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                                SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(0), 0, SI_VAR(2), 15),
                            SI_CMD(ScriptOpcode_END_IF),
                            SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(17), 0),
                                SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(17), 1),
                            SI_CMD(ScriptOpcode_END_IF),
                            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024091C)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(1), SI_VAR(2)),
                            SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_FIXED(4.0)),
                            SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, SI_VAR(3), SI_VAR(4)),
                        SI_CMD(ScriptOpcode_ELSE),
                            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 150),
                                SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(3), 0, SI_VAR(4), 15),
                                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
                            SI_CMD(ScriptOpcode_ELSE),
                                SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
                                SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(3), 0, SI_VAR(4), 15),
                                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
                                SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
                            SI_CMD(ScriptOpcode_END_IF),
                            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 1),
                        SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CASE_EQ, 9),
                        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
                        SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 30),
                            SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, 200, 0),
                        SI_CMD(ScriptOpcode_ELSE),
                            SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, 0xFFFFFF6A, 0),
                        SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_MATCH),
                SI_CMD(ScriptOpcode_SET, SI_VAR(9), SI_MAP_VAR(10)),
                SI_CMD(ScriptOpcode_CALL, SetSelfVar, 1, SI_VAR(9)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, 200, 0),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 150),
                SI_CMD(ScriptOpcode_CALL, func_80240564_DE5C14),
                SI_CMD(ScriptOpcode_IF_NE, SI_VAR(9), 6),
                    SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, -1, -1, 5, 0xF005D),
                SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(0), 0, SI_VAR(2), 15),
                SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_FIXED(4.0)),
                SI_CMD(ScriptOpcode_CALL, NpcMoveTo, -1, 230, 0, 0),
                SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_VAR(10)),
                SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_LOOP, 10),
                    SI_CMD(ScriptOpcode_CALL, SetNpcVar, SI_VAR(0), 0, 2),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
                SI_CMD(ScriptOpcode_CALL, StopSound, 0x8000004C),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, -1, -1, 5, 0xF005E),
                SI_CMD(ScriptOpcode_SPAWN_THREAD),
                    SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 10, SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 6, 484, 0),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 66, 0, 37, 37, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0),
                SI_CMD(ScriptOpcode_CALL, EnableModel, 40, 1),
                SI_CMD(ScriptOpcode_LOOP, 10),
                    SI_CMD(ScriptOpcode_CALL, EnableModel, 37, 1),
                    SI_CMD(ScriptOpcode_CALL, EnableModel, 38, 1),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                    SI_CMD(ScriptOpcode_CALL, EnableModel, 37, 0),
                    SI_CMD(ScriptOpcode_CALL, EnableModel, 38, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 6, 0x7FFFFE00),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 40),
                SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 270, 0),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_FIXED(4.0)),
                SI_CMD(ScriptOpcode_CALL, NpcMoveTo, -1, 300, 0, 0),
                SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(0), 3),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
                SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
                SI_CMD(ScriptOpcode_CALL, RemoveNpc, -1),
            SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80241288) = {
    SI_CMD(ScriptOpcode_CALL, RandInt, 15, SI_VAR(10)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(10), 20),
    SI_CMD(ScriptOpcode_DIV_F, SI_VAR(10), SI_FIXED(10.0)),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_VAR(10)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
            SI_CMD(ScriptOpcode_IF_GT, SI_VAR(2), 0xFFFFFF2E),
                SI_CMD(ScriptOpcode_CALL, func_80240564_DE5C14),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(10), SI_VAR(9)),
                SI_CMD(ScriptOpcode_MATCH, SI_VAR(9)),
                    SI_CMD(ScriptOpcode_CASE_EQ, -1),
                        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_VAR(10)),
                        SI_CMD(ScriptOpcode_CALL, func_80240160_DE5810),
                        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(14), 30),
                            SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10),
                            SI_CMD(ScriptOpcode_ELSE),
                                SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(3), SI_VAR(4), SI_VAR(5)),
                                SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10),
                            SI_CMD(ScriptOpcode_END_IF),
                            SI_CMD(ScriptOpcode_SET, SI_VAR(14), 0),
                        SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CASE_EQ, 6),
                        SI_CMD(ScriptOpcode_CALL, GetSelfVar, 1, SI_VAR(9)),
                        SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(9), 6),
                            SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                            SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(0), 0, SI_VAR(2), 15),
                        SI_CMD(ScriptOpcode_END_IF),
                        SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(5)),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024091C)),
                        SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
                        SI_CMD(ScriptOpcode_END_LOOP),
                        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), SI_VAR(15)),
                            SI_CMD(ScriptOpcode_SET, SI_VAR(3), SI_VAR(0)),
                            SI_CMD(ScriptOpcode_ADD, SI_VAR(3), 10),
                            SI_CMD(ScriptOpcode_SET, SI_VAR(4), 50),
                        SI_CMD(ScriptOpcode_END_IF),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(15), SI_VAR(0)),
                        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_FIXED(7.0)),
                        SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, SI_VAR(3), SI_VAR(4)),
                        SI_CMD(ScriptOpcode_CALL, GetNpcVar, 0, 0, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 1),
                        SI_CMD(ScriptOpcode_END_IF),
                    SI_CMD(ScriptOpcode_CASE_EQ, 9),
                        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
                        SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 30),
                            SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, 200, 0),
                        SI_CMD(ScriptOpcode_ELSE),
                            SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, 0xFFFFFF6A, 0),
                        SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_MATCH),
                SI_CMD(ScriptOpcode_SET, SI_VAR(9), SI_MAP_VAR(10)),
                SI_CMD(ScriptOpcode_CALL, SetSelfVar, 1, SI_VAR(9)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, func_802403FC_DE5AAC, 200, 0),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, RandInt, 360, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_CALL, RandInt, 20, SI_VAR(0)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 90, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, 2),
            SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 12),
            SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_CALL, func_80240564_DE5C14),
                SI_CMD(ScriptOpcode_IF_NE, SI_VAR(9), 6),
                    SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_CALL, RandInt, 15, SI_VAR(0)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 90, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
            SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, 235, SI_VAR(1), SI_VAR(2), 20),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, -1, 64, 1),
            SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_FIXED(4.0)),
            SI_CMD(ScriptOpcode_CALL, NpcMoveTo, -1, 235, 0, 0),
            SI_CMD(ScriptOpcode_CALL, NpcMoveTo, -1, 300, 0, 0),
            SI_CMD(ScriptOpcode_CALL, RemoveNpc, -1),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_8024195C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 3) {
        BindNpcIdle(-1, N(script_Idle_80240974));
        SetNpcPos(-1, 120, 0, 0);
        SetNpcAnimation(-1, 0x3B0002);
    } else {
        RemoveNpc(-1);
    }
});

s32 N(intTable_802419E0)[] = {
    0x00000096, 0x00000000, 0xFFFFFF9C, 0x00000096, 0x00000000, 0xFFFFFFCE, 0x00000096, 0x00000000,
    0x00000000, 0x00000096, 0x00000000, 0x00000032, 0x00000096, 0x00000000, 0x00000064, 0x000000B4,
    0x00000000, 0xFFFFFF9C, 0x000000B4, 0x00000000, 0xFFFFFFCE, 0x000000B4, 0x00000000, 0x00000000,
    0x000000B4, 0x00000000, 0x00000032, 0x000000B4, 0x00000000, 0x00000064,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Init_80241A58) = {
    SI_CMD(ScriptOpcode_CALL, BindNpcIdle, -1, N(script_Idle_80241288)),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 3),
        SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(0)),
        SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802419E0)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, -1, 0x3B0002),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RemoveNpc, -1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

StaticNpc N(npcGroup_80241B30)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000301,
        .init = N(script_Init_8024195C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_80241D20)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 9,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 10,
        .settings = &N(npcSettings_802408F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000201,
        .init = N(script_Init_80241A58),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

NpcGroupList N(npcGroupList_80243080) = {
    NPC_GROUP(N(npcGroup_80241B30), 0x00000000),
    NPC_GROUP(N(npcGroup_80241D20), 0x00000000),
    {},
};

s32 pad_0030A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802430B0_DE8760

// rodata: D_802430B8_DE8768
