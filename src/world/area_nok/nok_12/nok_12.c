#include "nok_12.h"

s32 pad_000178[2];
s32 pad_0002E8[2];
s32 pad_000328[2];
s32 pad_00056C[1];
s32 pad_001ED8[2];
Script N(script_80242140);
s32 pad_00217C[1];
Script N(script_ExitWalk_80242180);
Script N(script_ExitWalk_802421D0);
Script N(script_80242220);
Script N(script_80242290);
Script N(script_802423DC);
Script N(script_802425F8);
Script N(script_EnterWalk_80242640);
Script N(main);
Script N(script_80242870);
Script N(script_Tree1_Callback);
Script N(script_MakeEntities);
s32 pad_002C14[3];
Script N(script_80242C20);
Script N(script_80243468);
s32 pad_00380C[1];
Script N(script_SearchBush_80243810);
Script N(script_ShakeTree_80243B70);
Script N(script_802441A8);
Script N(script_NpcAI_80244230);
Script N(script_NpcAI_802442FC);
Script N(script_NpcAI_802443B4);
Script N(script_NpcAI_80244430);
s32 N(unk_8024447C)[12];
Script N(script_802444AC);
s32 unk_missing_802444CC[11];
Script N(script_Idle_802444F8);
Script N(script_Init_80244748);
Script N(script_Idle_802447A4);
Script N(script_Idle_802447B4);
Script N(script_Init_8024489C);
Script N(script_Init_80244904);
StaticNpc N(npcGroup_80244950)[1];
StaticNpc N(npcGroup_80244B40)[1];
StaticNpc N(npcGroup_80244D30)[1];
StaticNpc N(npcGroup_80244F20)[1];
StaticNpc N(npcGroup_80245110)[1];
NpcGroupList N(npcGroupList_80245300);
NpcGroupList N(npcGroupList_8024533C);
s32 pad_005378[2];
Script N(script_80245380);
Script N(script_802454E4);
Script N(script_802455A4);
Script N(script_8024590C);
s32 N(unk_802459CC)[1];
Script N(script_802459D0);
s32 N(unk_80245A14)[1];
Script N(script_80245A18);
s32 pad_005A5C[1];
const char D_80245A60_A00250[8]; // "nok_11"
const char D_80245A68_A00258[8]; // "nok_13"
s32 pad_005ACC[1];
const char D_80245E00_A005F0[8]; // "nok_12"
s32 pad_005E08[2];

// text: func_80240000_9FA7F0

s32 pad_000178[] = {
    0x00000000, 0x00000000,
};

// text: func_80240180_9FA970

// text: func_80240224_9FAA14

s32 pad_0002E8[] = {
    0x00000000, 0x00000000,
};

// text: func_802402F0_9FAAE0

// text: func_8024030C_9FAAFC

s32 pad_000328[] = {
    0x00000000, 0x00000000,
};

// text: func_80240330_9FAB20

// text: func_802403A0_9FAB90

s32 pad_00056C[] = {
    0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_802405EC_9FADDC

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240904_9FB0F4

// text: func_80240D44_9FB534

// text: func_80240E9C_9FB68C

// text: N(UnkNpcAIFunc1)

// text: func_80241204_9FB9F4

// text: func_802413C0_9FBBB0

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_80241560_9FBD50

// text: func_80241690_9FBE80

// text: N(UnkNpcDurationFlagFunc)

// text: func_80241818_9FC008

// text: func_802418D8_9FC0C8

// text: func_80241BD4_9FC3C4

s32 pad_001ED8[] = {
    0x00000000, 0x00000000,
};

// text: func_80241EE0_9FC6D0

// text: func_80241FD0_9FC7C0

EntryList N(entryList) = {
    { -786.0f, 0.0f, -49.0f, 90.0f },
    { 886.0f, 75.0f, -49.0f, 270.0f },
    { 180.0f, 0.0f, -50.0f, 90.0f },
    { -500.0f, 0.0f, -145.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190046,
};

Script N(script_80242140) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
    PlaySound(0x8000005B);
});

s32 pad_00217C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80242180) = SCRIPT({
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245A60_A00250, 1);
    sleep 100;
});

Script N(script_ExitWalk_802421D0) = SCRIPT({
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245A68_A00258, 0);
    sleep 100;
});

Script N(script_80242220) = SCRIPT({
0:
    if (SI_SAVE_VAR(0) >= 0xFFFFFF9E) {
        func_80240000_9FA7F0(0xFFFFFE84, 0xFFFFFF56, 0xFFFFFF9C, 999, 0, 2);
    }
    sleep 1;
    goto 0;
});

Script N(script_80242290) = SCRIPT({
    group 0;
    SetTexPanner(188, 0);
    SetTexPanner(189, 0);
    SetTexPanner(190, 0);
    SetTexPanner(191, 0);
    SetTexPanner(192, 0);
    SetTexPanner(193, 0);
    SetTexPanner(194, 0);
    SetTexPanner(195, 0);
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

Script N(script_802423DC) = SCRIPT({
    group 0;
    spawn {
        SetTexPanner(197, 1);
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
    SetTexPanner(33, 2);
    SetTexPanner(34, 2);
    SetTexPanner(35, 2);
    SetTexPanner(31, 2);
    SetTexPanner(32, 2);
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

Script N(script_802425F8) = SCRIPT({
    bind N(script_ExitWalk_80242180) to 0x80000 0;
    bind N(script_ExitWalk_802421D0) to 0x80000 27;
});

Script N(script_EnterWalk_80242640) = SCRIPT({
    SI_VAR(0) = N(script_802425F8);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 32;
    SetSpriteShading(-1);
    SI_AREA_FLAG(1) = 0;
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        MakeNpcs(0, N(npcGroupList_80245300));
    } else {
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            MakeNpcs(0, N(npcGroupList_8024533C));
        }
    }
    await N(script_MakeEntities);
    await N(script_802441A8);
    spawn N(script_80242290);
    spawn N(script_802423DC);
    spawn N(script_80243468);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            await N(script_802459D0);
        } else {
            await N(script_80245A18);
        }
        return;
    }
    spawn N(script_80242220);
    spawn N(script_80242140);
    spawn N(script_EnterWalk_80242640);
    sleep 1;
    SI_SAVE_FLAG(263) = 0;
});

Script N(script_80242870) = SCRIPT({
    func_80240180_9FA970(3, 0, 1);
});

Script N(script_Tree1_Callback) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFF9D) {
        SI_SAVE_VAR(0) = 0xFFFFFF9D;
        sleep 15;
        group 0;
        0x802D5830(1);
        DisablePlayerInput(1);
        MakeLerp(95, 0, 12, 1);
    0:
        UpdateLerp();
        func_80240224_9FAA14(SI_MAP_VAR(0), 0xFFFFFE2A, SI_VAR(0), 0xFFFFFF6A);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 0;
        }
        PlaySoundAt(72, 0, 0xFFFFFE2A, SI_VAR(0), 0xFFFFFF6A);
        ShakeCam(0, 0, 5, 1.0);
        spawn {
            sleep 5;
            0x802D5830(0);
        }
        DisablePlayerInput(0);
    }
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) <= 0xFFFFFF9D) {
        if (SI_SAVE_VAR(0) == 0xFFFFFF9D) {
            MakeEntity(0x802E9BD4, 0xFFFFFE2A, 0, 0xFFFFFF6A, 0, 0x80000000);
            AssignAreaFlag(1);
        } else {
            MakeEntity(0x802E9BD4, 0, 0xFFFFFC18, 0, 0, 0x80000000);
            AssignAreaFlag(1);
            SI_MAP_VAR(0) = SI_VAR(0);
        }
    }
    MakeEntity(0x802EA564, 0xFFFFFDD0, 60, 0xFFFFFF88, 0, 144, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(597));
    MakeEntity(0x802EA0C4, 0xFFFFFF5B, 60, 0xFFFFFF7E, 0, 0x80000000);
    AssignScript(N(script_80242870));
    MakeEntity(0x802EA0C4, 520, 110, 0xFFFFFF4C, 0, 0x80000000);
    MakeEntity(0x802EA0C4, 595, 110, 0xFFFFFF4C, 0, 0x80000000);
    MakeEntity(0x802EA0C4, 720, 135, 0xFFFFFF4C, 0, 0x80000000);
    MakeEntity(0x802EA0E8, 820, 135, 0xFFFFFF4C, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(600));
    MakeItemEntity(348, 0xFFFFFF24, 0xFFFFFFCE, 155, 17, SI_SAVE_FLAG(580));
    MakeItemEntity(143, 392, 25, 0xFFFFFF6F, 17, SI_SAVE_FLAG(615));
});

s32 pad_002C14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242C20) = SCRIPT({
    DisablePlayerInput(1);
    sleep 20;
    DisablePlayerPhysics(1);
    group 0;
    0x802D5830(1);
    func_802402F0_9FAAE0();
    0x802CB008(0, 1, 0xFFFFFEF0, 0, 0xFFFFFFC8, 20);
    sleep 15;
    PlaySoundAt(113, 0, 0xFFFFFEED, 0, 0xFFFFFFD9);
    MakeLerp(0xFFFFFEC0, 0, 15, 1);
10:
    UpdateLerp();
    TranslateGroup(146, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 10;
    }
    loop 6 {
        TranslateGroup(146, 0, 3, 0);
        sleep 1;
        TranslateGroup(146, 0, 0, 0);
        sleep 1;
    }
    sleep 15;
    PlaySoundAt(114, 0, 0xFFFFFEED, 0, 0xFFFFFFD9);
    MakeLerp(0, 90, 10, 1);
20:
    UpdateLerp();
    RotateModel(134, SI_VAR(0), -1, 0, 0);
    RotateModel(135, SI_VAR(0), -1, 0, 0);
    RotateModel(136, SI_VAR(0), -1, 0, 0);
    RotateModel(137, SI_VAR(0), -1, 0, 0);
    RotateModel(138, SI_VAR(0), -1, 0, 0);
    TranslateModel(140, 0, 0xFFFFFFB0, 0);
    TranslateModel(141, 0, 0xFFFFFFB0, 0);
    TranslateModel(142, 0, 0xFFFFFFB0, 0);
    TranslateModel(143, 0, 0xFFFFFFB0, 0);
    TranslateModel(144, 0, 0xFFFFFFB0, 0);
    RotateModel(140, SI_VAR(0), -1, 0, 0);
    RotateModel(141, SI_VAR(0), -1, 0, 0);
    RotateModel(142, SI_VAR(0), -1, 0, 0);
    RotateModel(143, SI_VAR(0), -1, 0, 0);
    RotateModel(144, SI_VAR(0), -1, 0, 0);
    TranslateModel(140, 0, 80, 0);
    TranslateModel(141, 0, 80, 0);
    TranslateModel(142, 0, 80, 0);
    TranslateModel(143, 0, 80, 0);
    TranslateModel(144, 0, 80, 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 20;
    }
    sleep 10;
    PlaySoundAt(115, 0, 0xFFFFFEED, 0, 0xFFFFFFD9);
    MakeLerp(0, 90, 10, 1);
30:
    UpdateLerp();
    TranslateModel(140, 0, 0xFFFFFFB0, 0);
    TranslateModel(141, 0, 0xFFFFFFB0, 0);
    TranslateModel(142, 0, 0xFFFFFFB0, 0);
    TranslateModel(143, 0, 0xFFFFFFB0, 0);
    TranslateModel(144, 0, 0xFFFFFFB0, 0);
    RotateModel(140, 90, -1, 0, 0);
    RotateModel(141, 90, -1, 0, 0);
    RotateModel(142, 90, -1, 0, 0);
    RotateModel(143, 90, -1, 0, 0);
    RotateModel(144, 90, -1, 0, 0);
    TranslateModel(140, 0, 80, 0);
    TranslateModel(141, 0, 80, 0);
    TranslateModel(142, 0, 80, 0);
    TranslateModel(143, 0, 80, 0);
    TranslateModel(144, 0, 80, 0);
    RotateModel(140, SI_VAR(0), -1, 0, 0);
    RotateModel(141, SI_VAR(0), -1, 0, 0);
    RotateModel(142, SI_VAR(0), -1, 0, 0);
    RotateModel(143, SI_VAR(0), -1, 0, 0);
    RotateModel(144, SI_VAR(0), -1, 0, 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 30;
    }
    ModifyColliderFlags(1, 9, 0x7FFFFE00);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    0x802CB008(0, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    func_8024030C_9FAAFC();
    0x802D5830(0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    SI_SAVE_VAR(0) = 0xFFFFFF9E;
    SetGroupEnabled(206, 0);
    unbind;
});

Script N(script_80243468) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFF9E) {
        bind N(script_80242C20) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(1);
        TranslateGroup(146, 0, 0xFFFFFEC0, 0);
        ModifyColliderFlags(0, 9, 0x7FFFFE00);
        return;
    }
    SetGroupEnabled(206, 0);
    RotateModel(134, 90, -1, 0, 0);
    RotateModel(135, 90, -1, 0, 0);
    RotateModel(136, 90, -1, 0, 0);
    RotateModel(137, 90, -1, 0, 0);
    RotateModel(138, 90, -1, 0, 0);
    TranslateModel(140, 0, 0xFFFFFFB0, 0);
    TranslateModel(141, 0, 0xFFFFFFB0, 0);
    TranslateModel(142, 0, 0xFFFFFFB0, 0);
    TranslateModel(143, 0, 0xFFFFFFB0, 0);
    TranslateModel(144, 0, 0xFFFFFFB0, 0);
    RotateModel(140, 90, -1, 0, 0);
    RotateModel(141, 90, -1, 0, 0);
    RotateModel(142, 90, -1, 0, 0);
    RotateModel(143, 90, -1, 0, 0);
    RotateModel(144, 90, -1, 0, 0);
    TranslateModel(140, 0, 80, 0);
    TranslateModel(141, 0, 80, 0);
    TranslateModel(142, 0, 80, 0);
    TranslateModel(143, 0, 80, 0);
    TranslateModel(144, 0, 80, 0);
    RotateModel(140, 90, -1, 0, 0);
    RotateModel(141, 90, -1, 0, 0);
    RotateModel(142, 90, -1, 0, 0);
    RotateModel(143, 90, -1, 0, 0);
    RotateModel(144, 90, -1, 0, 0);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
});

s32 pad_00380C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243810) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802403A0_9FAB90, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802403A0_9FAB90, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80243B70) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802403A0_9FAB90, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802403A0_9FAB90, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802403A0_9FAB90, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802403A0_9FAB90, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x1A },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1B },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = &N(script_Tree1_Callback),
};

Vec4f N(triggerCoord_80244198) =  { -422.0f, 0.0f, -120.0f, 0.0f };

Script N(script_802441A8) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80243B70) to TriggerFlag_WALL_HAMMER 3;
    bind N(script_ShakeTree_80243B70) to TriggerFlag_BOMB N(triggerCoord_80244198);
});

NpcAISettings N(aISettings_80244200) = {
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

Script N(script_NpcAI_80244230) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_80240904_9FB0F4(N(aISettings_80244200));
});

NpcSettings N(npcSettings_802442A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244230),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_802442CC) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x19,
    .waitTime = 0x14,
    .alertRadius = 70.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 7.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802442FC) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    func_80241BD4_9FC3C4(N(aISettings_802442CC));
});

NpcSettings N(npcSettings_80244358) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802442FC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80244384) = {
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

Script N(script_NpcAI_802443B4) = SCRIPT({
    DoBasicAI(N(aISettings_80244384));
});

NpcSettings N(npcSettings_802443D4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802443B4),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x5,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80244400) = {
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

Script N(script_NpcAI_80244430) = SCRIPT({
    DoBasicAI(N(aISettings_80244400));
});

NpcSettings N(npcSettings_80244450) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244430),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

s32 N(unk_8024447C)[] = {
    0x3FC00000, 0x0000001E, 0x0000001E, 0x43020000, 0x00000000, 0x00000001, 0x40200000, 0x000000B4,
    0x00000003, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_802444AC) = SCRIPT({
    func_802418D8_9FC0C8(N(unk_8024447C));
});

s32 unk_missing_802444CC[] = {
    0x00000000, 0x00170017, 0x00000000, 0x00000000, N(script_802444AC), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x00060000,
};

Script N(script_Idle_802444F8) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    SetNpcAnimation(-1, 0x27000A);
    spawn {
        PlaySoundAtNpc(-1, 993, 0);
        MakeLerp(0xFFFFFFA6, 0, 10, 0);
    1:
        UpdateLerp();
        SetNpcRotation(-1, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 1;
        }
        GetNpcPos(-1, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        MakeLerp(0, 360, 15, 0);
    2:
        UpdateLerp();
        SetNpcRotation(-1, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 2;
        }
        SetNpcRotation(-1, 0, 0, 0);
    }
    SetNpcJumpscale(-1, 0.7001953125);
    NpcJump0(-1, 0xFFFFFFBF, 0, 0xFFFFFF88, 25);
    SetNpcAnimation(-1, 0x270006);
    sleep 20;
    SetNpcAnimation(-1, 0x270001);
    BindNpcAI(-1, N(script_NpcAI_80244430));
});

Script N(script_Init_80244748) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFF5B, 86, 0xFFFFFF8A);
    SetNpcRotation(-1, 0xFFFFFFAB, 0, 0);
    BindNpcIdle(-1, N(script_Idle_802444F8));
});

Script N(script_Idle_802447A4) = SCRIPT({

});

Script N(script_Idle_802447B4) = SCRIPT({
    sleep 45;
    SetNpcAnimation(-1, 0x290107);
    sleep 8;
    SetNpcAnimation(-1, 0x290106);
    sleep 6;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 80;
    SI_VAR(2) += 100;
    NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 12);
    SetNpcAnimation(-1, 0x290108);
    sleep 8;
    SetNpcAnimation(-1, 0x290101);
});

Script N(script_Init_8024489C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) >= 2) {
        BindNpcIdle(-1, N(script_Idle_802447A4));
        SetNpcPos(-1, 310, 0, 0xFFFFFF5B);
    }
});

Script N(script_Init_80244904) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) >= 2) {
        BindNpcIdle(-1, N(script_Idle_802447B4));
    }
});

StaticNpc N(npcGroup_80244950)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244358),
        .pos = { -370.0, 0.0, -25.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 3 }, { ItemId_KOOPA_LEAF, 7 } },
        .movement = { 0x00000002, 0xFFFFFE8E, 0x00000000, 0xFFFFFFE7, 0xFFFFFE39, 0x00000000, 0xFFFFFFE7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFE4C, 0x00000000, 0xFFFFFF98, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80244B40)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802442A0),
        .pos = { 563.0, 50.0, -43.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_8024489C),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 3 }, { ItemId_KOOPA_LEAF, 7 } },
        .movement = { 0x00000233, 0x00000032, 0xFFFFFFD5, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000233, 0x00000032, 0xFFFFFFD5, 0x000001F4 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80244D30)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802442A0),
        .pos = { 600.0, 50.0, -75.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80244904),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 3 }, { ItemId_KOOPA_LEAF, 7 } },
        .movement = { 0x00000233, 0x00000032, 0xFFFFFFD5, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000233, 0x00000032, 0xFFFFFFD5, 0x000001F4 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80244F20)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802443D4),
        .pos = { 50.0, 0.0, -72.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0x00000032, 0x00000000, 0xFFFFFFB8, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000032, 0x00000000, 0xFFFFFFB8, 0x00000096, 0x00000050, 0x00000001, 0x00000001 },
        .animations = {
            0x00260001, 0x00260002, 0x00260003, 0x00260003, 0x00260001, 0x00260001, 0x00260005, 0x00260005, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003, 0x00260003,
        },
    },
};

StaticNpc N(npcGroup_80245110)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244450),
        .pos = { -160.0, 0.0, -120.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_80244748),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 10 } },
        .movement = { 0xFFFFFFAC, 0x00000000, 0xFFFFFFB8, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFAC, 0x00000000, 0xFFFFFFB8, 0x00000096, 0x00000050, 0x00000001, 0x00000001 },
        .animations = {
            0x00270001, 0x00270002, 0x00270003, 0x00270003, 0x00270001, 0x00270001, 0x00270005, 0x00270005, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003,
        },
    },
};

NpcGroupList N(npcGroupList_80245300) = {
    NPC_GROUP(N(npcGroup_80244950), 0x05090001),
    NPC_GROUP(N(npcGroup_80244B40), 0x050F0001),
    NPC_GROUP(N(npcGroup_80244F20), 0x05010002),
    NPC_GROUP(N(npcGroup_80245110), 0x05040002),
    {},
};

NpcGroupList N(npcGroupList_8024533C) = {
    NPC_GROUP(N(npcGroup_80244950), 0x05090001),
    NPC_GROUP(N(npcGroup_80244D30), 0x050F0001),
    NPC_GROUP(N(npcGroup_80244F20), 0x05010002),
    NPC_GROUP(N(npcGroup_80245110), 0x05040002),
    {},
};

s32 pad_005378[] = {
    0x00000000, 0x00000000,
};

Script N(script_80245380) = SCRIPT({
    DemoJoystickXY(79, 0xFFFFFFF9);
    sleep 28;
    DemoSetButtons(0x8000);
    sleep 18;
    DemoSetButtons(0);
    sleep 11;
    DemoSetButtons(0x8000);
    sleep 7;
    DemoSetButtons(0);
    sleep 13;
    DemoSetButtons(0x8000);
    sleep 16;
    DemoSetButtons(0);
    sleep 12;
    DemoSetButtons(0x8000);
    sleep 14;
    DemoSetButtons(0);
    sleep 10;
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80245E00_A005F0, 2, 2);
    sleep 100;
});

Script N(script_802454E4) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80245E00_A005F0, 2, 3);
    sleep 100;
});

Script N(script_802455A4) = SCRIPT({
    sleep 13;
    DemoSetButtons(0x4000);
    sleep 3;
    DemoSetButtons(0);
    sleep 160;
    DemoJoystickXY(0, 0);
    sleep 1;
    DemoJoystickXY(0, 0xFFFFFFFA);
    sleep 1;
    DemoJoystickXY(1, 0xFFFFFFF5);
    sleep 1;
    DemoJoystickXY(3, 0xFFFFFFEE);
    sleep 1;
    DemoJoystickXY(7, 0xFFFFFFE1);
    sleep 1;
    DemoJoystickXY(12, 0xFFFFFFD6);
    sleep 1;
    DemoJoystickXY(16, 0xFFFFFFCF);
    sleep 1;
    DemoJoystickXY(25, 0xFFFFFFC8);
    sleep 1;
    DemoJoystickXY(36, 0xFFFFFFC4);
    sleep 1;
    DemoJoystickXY(47, 0xFFFFFFC3);
    sleep 1;
    DemoJoystickXY(52, 0xFFFFFFC5);
    sleep 1;
    DemoJoystickXY(55, 0xFFFFFFCC);
    sleep 1;
    DemoJoystickXY(56, 0xFFFFFFD0);
    sleep 1;
    DemoJoystickXY(58, 0xFFFFFFD4);
    sleep 1;
    DemoJoystickXY(61, 0xFFFFFFD7);
    sleep 1;
    DemoJoystickXY(62, 0xFFFFFFD8);
    sleep 20;
    DemoJoystickXY(63, 0xFFFFFFD7);
    sleep 5;
    DemoJoystickXY(64, 0xFFFFFFD7);
    sleep 1;
    DemoJoystickXY(67, 0xFFFFFFD9);
    sleep 1;
    DemoJoystickXY(68, 0xFFFFFFD9);
    sleep 1;
    DemoJoystickXY(68, 0xFFFFFFD9);
    sleep 1;
    DemoJoystickXY(70, 0);
    sleep 20;
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80245E00_A005F0, 2, 2);
    sleep 100;
});

Script N(script_8024590C) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80245E00_A005F0, 2, 3);
    sleep 216;
});

s32 N(unk_802459CC)[] = {
    0x00000000,
};

Script N(script_802459D0) = SCRIPT({
    func_80241EE0_9FC6D0();
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_802454E4);
    spawn N(script_80245380);
});

s32 N(unk_80245A14)[] = {
    0x00000000,
};

Script N(script_80245A18) = SCRIPT({
    func_80241FD0_9FC7C0();
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_8024590C);
    spawn N(script_802455A4);
});

s32 pad_005A5C[] = {
    0x00000000,
};

// rodata: D_80245A60_A00250

// rodata: D_80245A68_A00258

// rodata: D_80245A70_A00260

// rodata: jtbl_80245A78_A00268

s32 pad_005ACC[] = {
    0x00000000,
};

// rodata: D_80245AD0_A002C0

// rodata: D_80245AD8_A002C8

// rodata: jtbl_80245AE0_A002D0

// rodata: jtbl_80245C70_A00460

// rodata: D_80245E00_A005F0

s32 pad_005E08[] = {
    0x00000000, 0x00000000,
};
