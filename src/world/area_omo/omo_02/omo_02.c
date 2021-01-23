#include "omo_02.h"

s32 pad_000038[2];
s32 pad_002BA8[2];
Script N(script_80242C10);
s32 pad_002C3C[1];
Script N(script_ExitWalk_80242C40);
Script N(script_ExitWalk_80242C9C);
Script N(script_80242CF8);
Script N(main);
s32 pad_002E2C[1];
Script N(script_80242E30);
Script N(script_80242E98);
Script N(script_MakeEntities);
s32 pad_0030DC[1];
Script N(script_802430E0);
Script N(script_8024324C);
Script N(script_802434C8);
Script N(script_802434D8);
s32 unk_missing_802434E8[4];
s32 N(unk_802434F8)[2];
Script N(script_80243500);
Script N(script_8024351C);
s32 pad_003574[3];
s32 N(intTable_80243580)[12];
s32 N(intTable_802435B0)[12];
Script N(script_802435F0);
Script N(script_8024455C);
s32 pad_0047FC[1];
s32 N(unk_80244800)[12];
Script N(script_80244830);
s32 unk_missing_80244850[11];
s32 N(unk_8024487C)[9];
Script N(script_802448A0);
s32 unk_missing_802448C0[11];
Script N(script_80244918);
Script N(script_NpcAI_80244A18);
Script N(script_NpcAI_80244AF0);
Script N(script_NpcAI_80244B60);
Script N(script_80244B70);
Script N(script_80244D64);
Script N(script_80244E44);
Script N(script_Idle_80244E8C);
Script N(script_Init_80245144);
s32 N(unk_802451B4)[41];
s32 N(unk_80245258)[37];
s32 N(unk_802452EC)[68];
s32 N(unk_802453FC)[25];
s32 N(intTable_80245460)[10];
Script N(script_Idle_80245488);
s32 N(intTable_802459DC)[30];
Script N(script_Init_80245A54);
StaticNpc N(npcGroup_80245B18)[1];
StaticNpc N(npcGroup_80245D08)[10];
StaticNpc N(npcGroup_80247068)[3];
s32 unk_missing_80247638[124];
NpcGroupList N(npcGroupList_80247828);
s32 pad_007858[2];
const char D_80247860_DA4D30[8]; // "omo_10"
const char D_80247868_DA4D38[8]; // "omo_14"

// text: func_80240000_D9D4D0

// text: func_8024001C_D9D4EC

s32 pad_000038[] = {
    0x00000000, 0x00000000,
};

// text: func_80240040_D9D510

// text: func_802402C0_D9D790

// text: func_8024043C_D9D90C

// text: func_80240970_D9DE40

// text: func_802409E0_D9DEB0

// text: func_80240AB0_D9DF80

// text: func_80240B48_D9E018

// text: func_80240BA8_D9E078

// text: func_80240EDC_D9E3AC

// text: func_80240F90_D9E460

// text: N(NpcJumpFunc3)

// text: N(NpcJumpFunc)

// text: func_80241188_D9E658

// text: N(UnkNpcAIFunc11)

// text: N(UnkNpcAIFunc10)

// text: func_8024141C_D9E8EC

// text: func_802414C8_D9E998

// text: func_802416D0_D9EBA0

// text: func_80241948_D9EE18

// text: func_80241B38_D9F008

// text: func_80241C7C_D9F14C

// text: N(UnkSetDurationFunc)

// text: N(UnkNpcAIFunc9)

// text: N(UnkDurationCheck)

// text: func_80241EA4_D9F374

// text: func_802423E0_D9F8B0

// text: func_8024283C_D9FD0C

// text: func_80242B5C_DA002C

// text: func_80242B70_DA0040

s32 pad_002BA8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -970.0f, 0.0f, 0.0f, 90.0f },
    { 360.0f, 0.0f, 20.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900DA,
};

Script N(script_80242C10) = SCRIPT({
    SetMusicTrack(0, 32, 0, 8);
});

s32 pad_002C3C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80242C40) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80247860_DA4D30, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242C9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80247868_DA4D38, 0);
    sleep 100;
});

Script N(script_80242CF8) = SCRIPT({
    bind N(script_ExitWalk_80242C40) to 0x80000 0;
    bind N(script_ExitWalk_80242C9C) to 0x80000 3;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80247828));
    await N(script_MakeEntities);
    await N(script_8024351C);
    await N(script_80242C10);
    await N(script_8024455C);
    SI_VAR(0) = N(script_80242CF8);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_002E2C[] = {
    0x00000000,
};

Script N(script_80242E30) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80242E98) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(3);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop 4 {
        SI_VAR(1) += 10;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    func_80240000_D9D4D0();
    SI_VAR(10) = spawn N(script_80242E30);
    SetPlayerJumpscale(0.7001953125);
    PlayerJump(0xFFFFFEDE, 85, 0xFFFFFFB2, 40);
    kill SI_VAR(10);
    func_8024001C_D9D4EC();
    sleep 3;
    SetPlayerActionState(0);
    func_8024001C_D9D4EC();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 300, 60, 0xFFFFFF9C, 0, 143, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1114));
    MakeEntity(0x802EA588, 0xFFFFFF38, 60, 0xFFFFFFB2, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1115));
    MakeEntity(0x802EA0C4, 0xFFFFFFB0, 89, 0xFFFFFFB2, 0, 0x80000000);
    MakeItemEntity(131, 0xFFFFFFB0, 114, 0xFFFFFFB2, 13, SI_SAVE_FLAG(1116));
    MakeEntity(0x802BCB44, 0xFFFFFE9A, 0, 0xFFFFFFAE, 0, 0x80000000);
    AssignScript(N(script_80242E98));
});

s32 pad_0030DC[] = {
    0x00000000,
};

Script N(script_802430E0) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(137, SI_VAR(0), 0, 0, 1);
    RotateModel(139, SI_VAR(0), 0, 0, 1);
    RotateModel(141, SI_VAR(0), 0, 0, 1);
    RotateModel(143, SI_VAR(0), 0, 0, 1);
    RotateModel(145, SI_VAR(0), 0, 0, 1);
    RotateModel(147, SI_VAR(0), 0, 0, 1);
    RotateModel(149, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_8024324C) = SCRIPT({
0:
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(118, SI_VAR(0), 0, -1, 0);
    RotateModel(120, SI_VAR(0), 0, 1, 0);
    RotateModel(122, SI_VAR(0), 0, -1, 0);
    RotateModel(124, SI_VAR(0), 0, 1, 0);
    RotateModel(126, SI_VAR(0), 0, -1, 0);
    RotateModel(128, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(118, SI_VAR(0), 0, -1, 0);
    RotateModel(120, SI_VAR(0), 0, 1, 0);
    RotateModel(122, SI_VAR(0), 0, -1, 0);
    RotateModel(124, SI_VAR(0), 0, 1, 0);
    RotateModel(126, SI_VAR(0), 0, -1, 0);
    RotateModel(128, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_802434C8) = SCRIPT({

});

Script N(script_802434D8) = SCRIPT({

});

s32 unk_missing_802434E8[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

s32 N(unk_802434F8)[] = {
    0x0000004A, 0x0000004B,
};

Script N(script_80243500) = SCRIPT({
    func_80240040_D9D510();
});

Script N(script_8024351C) = SCRIPT({
    spawn N(script_802430E0);
    spawn N(script_8024324C);
    spawn N(script_802434C8);
    spawn N(script_802434D8);
    spawn N(script_80243500);
    sleep 1;
});

s32 pad_003574[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(intTable_80243580)[] = {
    0x00000054, 0x00000056, 0x00000058, 0x0000005A, 0x0000005F, 0x00000061, 0x00000063, 0x00000065,
    0x00000068, 0x0000006C, 0x0000006E, 0x00000070,
};

s32 N(intTable_802435B0)[] = {
    0x0000002C, 0x0000002E, 0x00000030, 0x00000032, 0x00000037, 0x00000039, 0x0000003B, 0x0000003D,
    0x00000040, 0x00000044, 0x00000046, 0x00000048,
};

Vec4f N(triggerCoord_802435E0) =  { -520.0f, 0.0f, 0.0f, 0.0f };

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802435F0) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, EnableGroup, 116, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, func_8024043C_D9D90C),
        SI_CMD(ScriptOpcode_LOOP, 10),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243580)),
            SI_CMD(ScriptOpcode_LOOP, 12),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
                SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243580)),
            SI_CMD(ScriptOpcode_LOOP, 12),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
                SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802435B0)),
        SI_CMD(ScriptOpcode_LOOP, 12),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, SI_VAR(0), 0x7FFFFE00),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
        SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(10)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 0xFFFFFE84, 0, 0),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 0xFFFFFE84, 0, 0),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(2.0)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
        SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFF6, 20, 2),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, RotateModel, 82, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
            SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 42),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFF6, 7, 40, 2),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, RotateModel, 82, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
            SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 42),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 7, 0xFFFFFFA6, 30, 2),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, RotateModel, 82, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
            SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 42),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, 82, 500, 0),
        SI_CMD(ScriptOpcode_CALL, GetModelCenter, 82),
        SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
        SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 5, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFF6, 20, 2),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, RotateModel, 93, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
            SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 53),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFF6, 7, 40, 2),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, RotateModel, 93, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
            SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 53),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 7, 0xFFFFFFA6, 30, 2),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, RotateModel, 93, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
            SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 53),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, 93, 500, 0),
        SI_CMD(ScriptOpcode_CALL, GetModelCenter, 93),
        SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
        SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 5, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_LOOP, 10),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
            SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, SI_VAR(0), SI_FIXED(1.5)),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 0),
                SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(0), SI_VAR(1), 0, SI_VAR(3), 20),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFF6, 20, 2),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 106, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 66),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFF6, 7, 40, 2),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 106, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 66),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 7, 0xFFFFFFA6, 30, 2),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 106, SI_VAR(0), SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 66),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, 106, 500, 0),
    SI_CMD(ScriptOpcode_CALL, GetModelCenter, 106),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 5, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 35),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 0x8000004D),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), 1),
    SI_CMD(ScriptOpcode_LOOP, 10),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, SI_VAR(0), SI_FIXED(1.5)),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, RandInt, 10, SI_VAR(4)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(4), 10),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 0),
                SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(0), SI_VAR(1), 0, SI_VAR(3), SI_VAR(4)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, SetNpcVar, SI_VAR(0), 0, 11),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, SetNpcVar, SI_VAR(0), 0, 20),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(5), 12),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 60),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 0xFFFFFF83, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 0xFFFFFF83, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 165),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1901),
    SI_CMD(ScriptOpcode_CALL, 0x802D62E4, 877),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x3B0004),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0, 0xFFFFFEE3, 0, 35),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(8.0)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, 0xFFFFFF79, 23, 0),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, 0xFFFFFF92, 0xFFFFFFF3, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CDE68, 0, 10),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_LOOP, 10),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 0xFFFFFFF7),
            SI_CMD(ScriptOpcode_CALL, SetNpcRotation, 0, 0, 0, SI_VAR(0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
        SI_CMD(ScriptOpcode_CALL, SetNpcRotation, 0, 0, 0, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x3B0010),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, 0xFFFFFFD3, 0, 0xFFFFFFF8, 10),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 0, 995, 0),
    SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 5, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 50),
    SI_CMD(ScriptOpcode_LOOP, 2),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, SI_VAR(9), 996, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 7),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, 0x802CDE68, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x3B0001),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, 0xFFFFFFCE, 0, 0xFFFFFFF8, 10),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, 270, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 0, 930, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x3B0004),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(6.0)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, 100, 50, 0),
    SI_CMD(ScriptOpcode_CALL, RemoveNpc, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
    SI_CMD(ScriptOpcode_CALL, StopSound, 930),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1113), 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024455C) = {
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 42, 82),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 44, 84),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 46, 86),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 48, 88),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 50, 90),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 53, 93),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 55, 95),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 57, 97),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 59, 99),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 61, 101),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 64, 104),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 66, 106),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 68, 108),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 70, 110),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 72, 112),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1113), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802435F0), TriggerFlag_BOMB, N(triggerCoord_802435E0), 1, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, EnableGroup, 116, 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243580)),
        SI_CMD(ScriptOpcode_LOOP, 12),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802435B0)),
        SI_CMD(ScriptOpcode_LOOP, 12),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, SI_VAR(0), 0x7FFFFE00),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 82, 0xFFFFFFA6, SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 93, 0xFFFFFFA6, SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 106, 0xFFFFFFA6, SI_FIXED(0.5185546875), 0, SI_FIXED(1.931640625)),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 42),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 53),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 66),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_0047FC[] = {
    0x00000000,
};

s32 N(unk_80244800)[] = {
    0x40000000, 0x0000003C, 0x0000000F, 0x42C80000, 0x41F00000, 0x00000004, 0x40800000, 0x00000006,
    0x00000001, 0x430C0000, 0x41F00000, 0x00000001,
};

Script N(script_80244830) = SCRIPT({
    func_80240BA8_D9E078(N(unk_80244800));
});

s32 unk_missing_80244850[] = {
    0x00000000, 0x00170016, 0x00000000, 0x00000000, N(script_80244830), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000E0001,
};

s32 N(unk_8024487C)[] = {
    0x42C80000, 0x41F00000, 0x00000004, 0x40800000, 0x00000006, 0x00000001, 0x43200000, 0x42480000,
    0x00000001,
};

Script N(script_802448A0) = SCRIPT({
    func_802416D0_D9EBA0(N(unk_8024487C));
});

s32 unk_missing_802448C0[] = {
    0x00000000, 0x00170016, 0x00000000, 0x00000000, N(script_802448A0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000E0001,
};

NpcSettings N(npcSettings_802448EC) = {
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

Script N(script_80244918) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 5);
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

NpcAISettings N(aISettings_802449E8) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 90.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 3.8f,
    .unk_1C = 0x8,
    .unk_20 = 0x1,
    .chaseRadius = 140.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244A18) = SCRIPT({
    func_80242B5C_DA002C();
    SetSelfVar(0, 0);
    SetSelfVar(1, 12);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    func_8024283C_D9FD0C(N(aISettings_802449E8));
});

NpcSettings N(npcSettings_80244A94) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244A18),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80244AC0) = {
    .moveSpeed = 8.0f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 4.0f,
    .unk_10 = 0.5f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80244AF0) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
    SetSelfVar(2, 12);
    SetSelfVar(3, 13);
    func_80241EA4_D9F374(N(aISettings_80244AC0));
});

Script N(script_NpcAI_80244B60) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80244B70) = {
    SI_CMD(ScriptOpcode_CALL, func_80242B70_DA0040),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80244B60)),
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 4),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 3),
            SI_CMD(ScriptOpcode_CALL, func_802423E0_D9F8B0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 2),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 4),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 0, 0xFFFFFC18, 0),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, 0x800457F8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, BindNpcAI, -1, N(script_NpcAI_80244AF0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

NpcSettings N(npcSettings_80244D38) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x7,
    .radius = 0x7,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244AF0),
    .onHit = &N(script_80244B70),
    .aux = NULL,
    .onDefeat = &N(script_80244918),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0x8,
};

Script N(script_80244D64) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
    GetCamPosB(0, SI_VAR(0), SI_VAR(1));
    SetCamPosB(0, -600.0, SI_VAR(1));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    goto 0;
});

Script N(script_80244E44) = SCRIPT({
    loop {
        PlaySoundAtNpc(0, 0xB0000021, 0);
        sleep 8;
    }
});

Script N(script_Idle_80244E8C) = SCRIPT({
    if (SI_SAVE_FLAG(1112) == 0) {
        DisablePlayerInput(1);
        sleep 30;
        SetNpcJumpscale(-1, 1.0);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
        UseSettingsFrom(0, 0xFFFFFDC6, 0, 0);
        SetPanTarget(0, 0xFFFFFDC6, 0, 0);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
        SI_VAR(10) = spawn N(script_80244E44);
        SetNpcAnimation(-1, 0x3B0003);
        SetNpcSpeed(-1, 6.0);
        NpcMoveTo(-1, 0xFFFFFDC1, 0, 0);
        kill SI_VAR(10);
        PlaySoundAtNpc(-1, 812, 0);
        NpcJump0(-1, 0xFFFFFE34, 0, 0xFFFFFFEC, 40);
        PanToTarget(0, 0, 0);
        WaitForCam(0, 1.0);
        SI_MAP_VAR(10) = spawn N(script_80244D64);
        SI_SAVE_FLAG(1112) = 1;
        DisablePlayerInput(0);
    } else {
        SI_MAP_VAR(10) = spawn N(script_80244D64);
        SetNpcPos(-1, 0xFFFFFDC1, 0, 0xFFFFFFEC);
    10:
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 0xFFFFFD08) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        PlaySoundAtNpc(-1, 812, 0);
        NpcJump0(-1, 0xFFFFFE34, 0, 0xFFFFFFEC, 40);
    }
});

Script N(script_Init_80245144) = SCRIPT({
    if (SI_SAVE_FLAG(1113) == 0) {
        SetNpcPos(-1, 0xFFFFFCE0, 0, 0);
        BindNpcIdle(-1, N(script_Idle_80244E8C));
    } else {
        RemoveNpc(-1);
    }
});

s32 N(unk_802451B4)[] = {
    0x00000000, 0xFFFFFEC0, 0x0000001E, 0x00000000, 0xFFFFFF16, 0x00000017, 0x00000001, 0xFFFFFF54,
    0x00000000, 0x00000019, 0x00000000, 0xFFFFFF88, 0x0000002B, 0x00000000, 0xFFFFFFC1, 0xFFFFFFF0,
    0x00000001, 0xFFFFFFE8, 0x00000000, 0xFFFFFFF5, 0x00000000, 0x00000011, 0x0000002E, 0x00000001,
    0x00000041, 0x00000000, 0x00000057, 0x00000000, 0x00000073, 0x00000048, 0x00000001, 0x0000009A,
    0x00000000, 0x00000021, 0x00000000, 0x000000C2, 0x00000000, 0x00000000, 0x000000F0, 0xFFFFFFFE,
    0xFFFFFFFF,
};

s32 N(unk_80245258)[] = {
    0x00000000, 0xFFFFFEE9, 0x00000014, 0x00000000, 0xFFFFFF58, 0x0000001E, 0x00000000, 0xFFFFFF96,
    0xFFFFFFF5, 0x00000000, 0xFFFFFFC4, 0xFFFFFFBD, 0x00000000, 0xFFFFFFED, 0xFFFFFF98, 0x00000000,
    0x0000001D, 0xFFFFFFB8, 0x00000000, 0x0000004C, 0x00000008, 0x00000000, 0x00000080, 0x00000063,
    0x00000000, 0x000000C4, 0x0000004F, 0x00000000, 0x00000103, 0x0000000E, 0x00000000, 0x00000135,
    0xFFFFFFEC, 0x00000000, 0x00000173, 0x0000001E, 0xFFFFFFFF,
};

s32 N(unk_802452EC)[] = {
    0x00000000, 0xFFFFFEBA, 0x0000002A, 0x00000000, 0xFFFFFEE0, 0x00000045, 0x00000000, 0xFFFFFF00,
    0x00000054, 0x00000000, 0xFFFFFF1B, 0x00000044, 0x00000000, 0xFFFFFF30, 0x0000002B, 0x00000000,
    0xFFFFFF4B, 0x00000015, 0x00000000, 0xFFFFFF65, 0x00000015, 0x00000000, 0xFFFFFF87, 0x00000032,
    0x00000000, 0xFFFFFF88, 0x00000067, 0x00000000, 0xFFFFFF6F, 0x0000006F, 0x00000000, 0xFFFFFF58,
    0x00000049, 0x00000000, 0xFFFFFF5C, 0x00000016, 0x00000000, 0xFFFFFF85, 0xFFFFFFF3, 0x00000000,
    0xFFFFFFB3, 0x00000000, 0x00000001, 0xFFFFFFE2, 0x00000000, 0x0000001B, 0x00000000, 0x00000005,
    0x0000002D, 0x00000000, 0x00000028, 0x00000029, 0x00000000, 0x00000057, 0x00000000, 0x00000000,
    0x00000078, 0xFFFFFFF9, 0x00000000, 0x000000B1, 0x00000012, 0x00000000, 0x000000DB, 0x0000002E,
    0x00000000, 0x00000104, 0x00000036, 0xFFFFFFFF,
};

s32 N(unk_802453FC)[] = {
    0x00000000, 0xFFFFFECB, 0x00000009, 0x00000000, 0xFFFFFF1A, 0x0000001B, 0x00000000, 0xFFFFFF6A,
    0x00000010, 0x00000000, 0xFFFFFF9F, 0xFFFFFFE8, 0x00000000, 0xFFFFFFE1, 0xFFFFFFF3, 0x00000000,
    0x00000019, 0x0000001E, 0x00000000, 0x00000054, 0x0000001B, 0x00000000, 0x00000085, 0xFFFFFFFD,
    0xFFFFFFFF,
};

s32 N(intTable_80245460)[] = {
    N(unk_802451B4), N(unk_80245258), N(unk_802452EC), N(unk_802453FC), N(unk_802451B4), N(unk_80245258), N(unk_802451B4), N(unk_802453FC),
    N(unk_802451B4), N(unk_80245258),
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80245488) = {
    SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_CALL, RandInt, 2, SI_VAR(0)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_LOOP, 3),
                SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 270, 0),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
                SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 90, 0),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
                SI_CMD(ScriptOpcode_CALL, RandInt, 1, SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 270, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CALL, RandInt, 10, SI_VAR(0)),
                SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 5),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 10),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_CALL, RandInt, 1, SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_CALL, GetNpcPos, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                    SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 2),
                SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 10),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 10),
            SI_CMD(ScriptOpcode_CALL, RandInt, 30, SI_VAR(0)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 10),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, RandInt, 1, SI_VAR(0)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(1)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 10),
                SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, SI_VAR(0)),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 11),
            SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 270, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
            SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, -1, 90, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_CASE_EQ, 20),
            SI_CMD(ScriptOpcode_CALL, SetSelfEnemyFlagBits, 256, 1),
            SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(0)),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80245460)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_LABEL, 10),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_MATCH, SI_VAR(2)),
                SI_CMD(ScriptOpcode_CASE_EQ, 0),
                    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, -1, 0x3B0004),
                    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_FIXED(10.0)),
                    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, -1, SI_VAR(3), SI_VAR(4), 0),
                SI_CMD(ScriptOpcode_CASE_EQ, 1),
                    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(3), SI_VAR(4), SI_VAR(5)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, -1, SI_FIXED(1.0)),
                    SI_CMD(ScriptOpcode_CALL, NpcJump0, -1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), -1),
                SI_CMD(ScriptOpcode_GOTO, 10),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 21),
        SI_CMD(ScriptOpcode_CASE_EQ, 21),
            SI_CMD(ScriptOpcode_CALL, RemoveNpc, -1),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(intTable_802459DC)[] = {
    0xFFFFFE32, 0x00000000, 0xFFFFFFB0, 0xFFFFFE41, 0x00000000, 0xFFFFFFD8, 0xFFFFFE50, 0x00000000,
    0x00000000, 0xFFFFFE4B, 0x00000000, 0x00000050, 0xFFFFFE6E, 0x00000000, 0x00000050, 0xFFFFFE4A,
    0x00000000, 0xFFFFFFB0, 0xFFFFFE59, 0x00000000, 0xFFFFFFD8, 0xFFFFFE68, 0x00000000, 0x00000000,
    0xFFFFFE26, 0x00000000, 0xFFFFFFC5, 0xFFFFFE86, 0x00000000, 0x00000050,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Init_80245A54) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1113), 0),
        SI_CMD(ScriptOpcode_CALL, BindNpcIdle, -1, N(script_Idle_80245488)),
        SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(0)),
        SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802459DC)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RemoveNpc, -1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

StaticNpc N(npcGroup_80245B18)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000A01,
        .init = N(script_Init_80245144),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_80245D08)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 9,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 10,
        .settings = &N(npcSettings_802448EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80245A54),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_80247068)[] = {
    {
        .id = 50,
        .settings = &N(npcSettings_80244A94),
        .pos = { 200.0, 0.0, 30.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 2 }, { ItemId_THUNDER_RAGE, 2 }, { ItemId_THUNDER_BOLT, 2 }, { ItemId_DUSTY_HAMMER, 2 }, { ItemId_PEBBLE, 2 } },
        .movement = { 0x000000C8, 0x00000000, 0x0000001E, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000C8, 0x00000000, 0x0000001E, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003F0002, 0x003F0004, 0x003F0005, 0x003F0004, 0x003F0002, 0x003F0002, 0x003F000B, 0x003F000B, 0x003F0015, 0x003F0016, 0x003F0002, 0x003F0002, 0x003F0002, 0x003F0002, 0x003F0002, 0x003F0002,
        },
    },
    {
        .id = 51,
        .settings = &N(npcSettings_80244D38),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010,
        },
    },
    {
        .id = 52,
        .settings = &N(npcSettings_80244D38),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010,
        },
    },
};

s32 unk_missing_80247638[] = {
    0x00000035, N(npcSettings_80244D38), 0x00000000, 0xC47A0000, 0x00000000, 0x00800D00, 0x00000000, 0x00000000,
    0x00000000, 0x0000005A, 0x80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000,
    0xFFFFFC18, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010,
    0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010, 0x003F0010,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

NpcGroupList N(npcGroupList_80247828) = {
    NPC_GROUP(N(npcGroup_80245B18), 0x00000000),
    NPC_GROUP(N(npcGroup_80245D08), 0x00000000),
    NPC_GROUP(N(npcGroup_80247068), 0x101B0001),
    {},
};

s32 pad_007858[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80247860_DA4D30

// rodata: D_80247868_DA4D38

// rodata: D_80247870_DA4D40

// rodata: D_80247878_DA4D48

// rodata: jtbl_80247880_DA4D50

// rodata: D_80247A10_DA4EE0

// rodata: D_80247A18_DA4EE8

// rodata: D_80247A20_DA4EF0

// rodata: jtbl_80247A28_DA4EF8

// rodata: D_80247BB8_DA5088

// rodata: D_80247BC0_DA5090

// rodata: D_80247BC8_DA5098

// rodata: D_80247BD0_DA50A0

// rodata: D_80247BD8_DA50A8

// rodata: jtbl_80247BE0_DA50B0
