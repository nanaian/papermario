#include "tik_18.h"

s32 pad_00030C[1];
Script N(script_80240710);
s32 pad_00073C[1];
Script N(script_UpdateTexturePan_80240740);
Script N(script_ExitWalk_802407DC);
Script N(script_ExitWalk_80240838);
Script N(script_80240894);
Script N(main);
Script N(script_80240D10);
Script N(script_802411E0);
Script N(script_802413B8);
s32 N(unk_80241564)[9];
Script N(script_80241588);
s32 pad_0015B4[3];
Script N(script_NpcAI_802415F0);
Script N(script_NpcAI_8024166C);
Script N(script_Idle_802416B8);
Script N(script_Init_80241908);
StaticNpc N(npcGroup_80241964)[1];
StaticNpc N(npcGroup_80241B54)[1];
NpcGroupList N(npcGroupList_80241D44);
s32 pad_001D68[2];
Script N(script_80241D70);
Script N(script_MakeEntities);
const char D_80241EF0_8975D0[8]; // "tik_06"
const char D_80241EF8_8975D8[8]; // "tik_02"

// text: func_80240000_8956E0

// text: func_80240124_895804

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_8959F0

// text: func_80240680_895D60

EntryList N(entryList) = {
    { -220.0f, -10.0f, 0.0f, 90.0f },
    { 320.0f, -10.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190031,
};

Script N(script_80240710) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_00073C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80240740) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_8956E0();
                    return;
                }
            }
        }
    }
    func_80240124_895804();
});

Script N(script_ExitWalk_802407DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241EF0_8975D0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240838) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241EF8_8975D8, 0);
    sleep 100;
});

Script N(script_80240894) = SCRIPT({
    bind N(script_ExitWalk_802407DC) to 0x80000 8;
    bind N(script_ExitWalk_80240838) to 0x80000 14;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(13);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80241D44));
    await N(script_MakeEntities);
    ModifyColliderFlags(0, 11, 0x7FFFFE00);
    ModifyColliderFlags(0, 17, 0x7FFFFE00);
    spawn N(script_80241588);
    spawn N(script_80240710);
    PlaySound(0x80000043);
    EnableTexPanning(7, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 50;
        SI_VAR(2) = 200;
        SI_VAR(3) = 110;
        SI_VAR(4) = 500;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240740);
    }
    EnableTexPanning(9, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFF38;
        SI_VAR(3) = 0xFFFFFF9C;
        SI_VAR(4) = 0xFFFFFE0C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240740);
    }
    EnableTexPanning(10, 1);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFF06;
        SI_VAR(3) = 0xFFFFFF9C;
        SI_VAR(4) = 0xFFFFFE0C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240740);
    }
    SI_VAR(0) = N(script_80240894);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_80240D10) = SCRIPT({
    SI_VAR(1) = SI_ARRAY(5);
    SI_VAR(1) += 1;
    SI_VAR(2) = SI_ARRAY(0);
    SI_VAR(3) = SI_ARRAY(1);
    SI_VAR(4) = SI_ARRAY(5);
    SI_VAR(4) += 2;
    SI_VAR(5) = SI_ARRAY(0);
    SI_VAR(6) = SI_ARRAY(1);
    SI_VAR(7) = SI_ARRAY(5);
    SI_VAR(7) += 3;
    SI_VAR(8) = SI_ARRAY(0);
    SI_VAR(9) = SI_ARRAY(1);
    SI_VAR(10) = SI_ARRAY(5);
    SI_VAR(10) += 4;
    SI_VAR(11) = SI_ARRAY(0);
    SI_VAR(12) = SI_ARRAY(1);
    EnableModel(SI_VAR(1), 1);
    EnableModel(SI_VAR(4), 1);
    EnableModel(SI_VAR(7), 1);
    EnableModel(SI_VAR(10), 1);
    loop 5 {
        SI_VAR(0) += 1;
        SI_VAR(2) += 1;
        SI_VAR(3) += 1;
        TranslateModel(SI_VAR(1), SI_VAR(2), SI_VAR(0), SI_VAR(3));
        ScaleModel(SI_VAR(1), 0.5, 0.5, 0.5);
        SI_VAR(5) += -1;
        SI_VAR(6) += 1;
        TranslateModel(SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(6));
        ScaleModel(SI_VAR(4), 0.5, 0.5, 0.5);
        SI_VAR(8) += 1;
        SI_VAR(9) += -1;
        TranslateModel(SI_VAR(7), SI_VAR(8), SI_VAR(0), SI_VAR(9));
        ScaleModel(SI_VAR(7), 0.5, 0.5, 0.5);
        SI_VAR(11) += -1;
        SI_VAR(12) += -1;
        TranslateModel(SI_VAR(10), SI_VAR(11), SI_VAR(0), SI_VAR(12));
        ScaleModel(SI_VAR(10), 0.5, 0.5, 0.5);
        sleep 1;
    }
    loop 5 {
        SI_VAR(0) += -1;
        SI_VAR(2) += 1;
        SI_VAR(3) += 1;
        TranslateModel(SI_VAR(1), SI_VAR(2), SI_VAR(0), SI_VAR(3));
        ScaleModel(SI_VAR(1), 0.5, 0.5, 0.5);
        SI_VAR(5) += -1;
        SI_VAR(6) += 1;
        TranslateModel(SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(6));
        ScaleModel(SI_VAR(4), 0.5, 0.5, 0.5);
        SI_VAR(8) += 1;
        SI_VAR(9) += -1;
        TranslateModel(SI_VAR(7), SI_VAR(8), SI_VAR(0), SI_VAR(9));
        ScaleModel(SI_VAR(7), 0.5, 0.5, 0.5);
        SI_VAR(11) += -1;
        SI_VAR(12) += -1;
        TranslateModel(SI_VAR(10), SI_VAR(11), SI_VAR(0), SI_VAR(12));
        ScaleModel(SI_VAR(10), 0.5, 0.5, 0.5);
        sleep 1;
    }
    EnableModel(SI_VAR(1), 0);
    EnableModel(SI_VAR(4), 0);
    EnableModel(SI_VAR(7), 0);
    EnableModel(SI_VAR(10), 0);
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_802411E0) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 18, SI_VAR(5)),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(5), SI_ARRAY(0), SI_ARRAY(2), SI_ARRAY(1)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(5), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, RandInt, 200, SI_VAR(0)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 50),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 1),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_ARRAY(2), SI_ARRAY(3), SI_ARRAY(4), 1),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(5), SI_ARRAY(0), SI_VAR(0), SI_ARRAY(1)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240310_8959F0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80240D10)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802413B8) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(15), 10000),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(1)),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(9)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(9)),
            SI_CMD(ScriptOpcode_USE_FLAGS, 6),
            SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
            SI_CMD(ScriptOpcode_CALL, RandInt, SI_VAR(4), SI_VAR(11)),
            SI_CMD(ScriptOpcode_CALL, RandInt, SI_VAR(5), SI_VAR(12)),
            SI_CMD(ScriptOpcode_SET, SI_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET, SI_VAR(14), SI_VAR(3)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(13), SI_VAR(11)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(14), SI_VAR(12)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), SI_VAR(13)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), SI_VAR(14)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), SI_VAR(6)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), SI_VAR(7)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), SI_VAR(8)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), SI_VAR(15)),
            SI_CMD(ScriptOpcode_SPAWN, N(script_802411E0)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 18, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80241564)[] = {
    0x00000001, 0xFFFFFF17, 0xFFFFFF8B, 0x00000221, 0x000000BB, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000004,
};

Script N(script_80241588) = SCRIPT({
    SI_VAR(0) = N(unk_80241564);
    spawn N(script_802413B8);
});

s32 pad_0015B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_802415C0) = {
    .moveSpeed = 2.2f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 70.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 3.2f,
    .unk_1C = 0xF,
    .unk_20 = 0x1,
    .chaseRadius = 90.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802415F0) = SCRIPT({
    DoBasicAI(N(aISettings_802415C0));
});

NpcSettings N(npcSettings_80241610) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802415F0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_8024163C) = {
    .moveSpeed = 2.2f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 70.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 3.2f,
    .unk_1C = 0xF,
    .unk_20 = 0x1,
    .chaseRadius = 90.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024166C) = SCRIPT({
    DoBasicAI(N(aISettings_8024163C));
});

NpcSettings N(npcSettings_8024168C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024166C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0,
};

Script N(script_Idle_802416B8) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    SetNpcAnimation(-1, 0x27010A);
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
    NpcJump0(-1, 190, 0xFFFFFFF6, 0xFFFFFFF6, 25);
    SetNpcAnimation(-1, 0x27010B);
    sleep 20;
    SetNpcAnimation(-1, 0x270101);
    BindNpcAI(-1, N(script_NpcAI_8024166C));
});

Script N(script_Init_80241908) = SCRIPT({
    SetNpcPos(-1, 150, 76, 0xFFFFFFC1);
    SetNpcRotation(-1, 0xFFFFFFAB, 0, 0);
    BindNpcIdle(-1, N(script_Idle_802416B8));
});

StaticNpc N(npcGroup_80241964)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241610),
        .pos = { -60.0, -10.0, -30.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0xFFFFFFC4, 0xFFFFFFF6, 0xFFFFFFE2, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFC4, 0xFFFFFFF6, 0xFFFFFFE2, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00260401, 0x00260403, 0x00260403, 0x00260403, 0x00260403, 0x00260401, 0x00260405, 0x00260405, 0x00260400, 0x00260400, 0x00260400, 0x00260400, 0x00260400, 0x00260400, 0x00260400, 0x00260400,
        },
    },
};

StaticNpc N(npcGroup_80241B54)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024168C),
        .pos = { 30.0, -10.0, -20.0 },
        .flags = 0x00002C00,
        .init = N(script_Init_80241908),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0x0000001E, 0xFFFFFFF6, 0xFFFFFFEC, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000001E, 0xFFFFFFF6, 0xFFFFFFEC, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00270101, 0x00270103, 0x00270103, 0x00270103, 0x00270103, 0x00270101, 0x00270105, 0x00270105, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100,
        },
    },
};

NpcGroupList N(npcGroupList_80241D44) = {
    NPC_GROUP(N(npcGroup_80241964), 0x1A0A0001),
    NPC_GROUP(N(npcGroup_80241B54), 0x1A0E0001),
    {},
};

s32 pad_001D68[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241D70) = SCRIPT({
    func_80240680_895D60();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA588, 200, 50, 0xFFFFFFB5, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(408));
    MakeEntity(D_802EA0E8, 0, 50, 0xFFFFFFB5, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(409));
    MakeEntity(D_802EA0C4, 0xFFFFFF9C, 50, 0xFFFFFFB5, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 0xFFFFFFCE, 50, 0xFFFFFFB5, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 50, 50, 0xFFFFFFB5, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 100, 50, 0xFFFFFFB5, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 250, 50, 0xFFFFFFB5, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 150, 50, 0xFFFFFFB5, 0, 0x80000000);
    AssignScript(N(script_80241D70));
});

// rodata: D_80241EF0_8975D0

// rodata: D_80241EF8_8975D8
