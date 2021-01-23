#include "tik_05.h"

s32 pad_00030C[1];
s32 pad_000A48[2];
Script N(script_80240AD0);
s32 pad_000AFC[1];
Script N(script_UpdateTexturePan_80240B00);
Script N(script_ExitWalk_80240B9C);
Script N(script_80240BF8);
Script N(main);
s32 pad_000F48[2];
Script N(script_80240F50);
Script N(script_80241420);
Script N(script_802415F8);
s32 N(unk_802417A4)[9];
Script N(script_802417C8);
s32 pad_0017F4[3];
s32 N(unk_80241800)[1];
Script N(script_80241804);
Script N(script_8024186C);
Script N(script_8024194C);
Script N(script_80241B34);
Script N(script_MakeEntities);
s32 pad_001C8C[1];
Script N(script_NpcAI_80241CC0);
StaticNpc N(npcGroup_80241D0C)[1];
StaticNpc N(npcGroup_80241EFC)[1];
NpcGroupList N(npcGroupList_802420EC);
const char D_80242110_876ED0[8]; // "tik_04"
s32 pad_002118[2];

// text: func_80240000_874DC0

// text: func_80240124_874EE4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_8750D0

// text: func_80240680_875440

// text: func_80240734_8754F4

// text: func_80240798_875558

// text: func_802408E8_8756A8

// text: func_8024093C_8756FC

// text: func_80240984_875744

s32 pad_000A48[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 320.0f, -10.0f, 0.0f, 270.0f },
    { 100.0f, 25.0f, -82.0f, 180.0f },
    { 185.0f, 25.0f, -82.0f, 180.0f },
    { 270.0f, 25.0f, -82.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190027,
};

Script N(script_80240AD0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_000AFC[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80240B00) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_874DC0();
                    return;
                }
            }
        }
    }
    func_80240124_874EE4();
});

Script N(script_ExitWalk_80240B9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242110_876ED0, 0);
    sleep 100;
});

Script N(script_80240BF8) = SCRIPT({
    bind N(script_ExitWalk_80240B9C) to 0x80000 7;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(4);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_802420EC));
    await N(script_MakeEntities);
    spawn N(script_80240AD0);
    PlaySound(0x8000002D);
    PlaySoundAtF(0x8000002E, 1, 0xFFFFFFAB, 0xFFFFFFEC, 120);
    spawn N(script_802417C8);
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
        spawn N(script_UpdateTexturePan_80240B00);
    }
    EnableTexPanning(9, 1);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 0xFFFFFFCE;
        SI_VAR(2) = 0xFFFFFC7C;
        SI_VAR(3) = 0xFFFFFFBA;
        SI_VAR(4) = 0xFFFFFB50;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240B00);
    }
    SI_VAR(0) = N(script_80240BF8);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_000F48[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240F50) = SCRIPT({
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
Script N(script_80241420) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 15, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_80240310_8750D0, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80240F50)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802415F8) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80241420)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 15, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_802417A4)[] = {
    0x00000001, 0xFFFFFFEB, 0xFFFFFFA6, 0x00000056, 0x0000009C, 0x0000012C, 0xFFFFFFF6, 0x0000005A,
    0x00000002,
};

Script N(script_802417C8) = SCRIPT({
    SI_VAR(0) = N(unk_802417A4);
    spawn N(script_802415F8);
});

s32 pad_0017F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80241800)[] = {
    0x00000000,
};

Script N(script_80241804) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_8024186C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80241804);
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

Script N(script_8024194C) = SCRIPT({
    if (SI_SAVE_FLAG(424) == 1) {
        return;
    }
    SI_SAVE_FLAG(424) = 1;
    DisablePlayerInput(1);
    SI_VAR(5) = 25;
    MakeLerp(75, 105, 8, 4);
    loop {
        UpdateLerp();
        func_80240984_875744(SI_MAP_VAR(0), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) -= 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(SI_VAR(0), 0xFFFFFFF6, 22, 1);
    loop {
        UpdateLerp();
        func_80240984_875744(SI_MAP_VAR(0), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) -= 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAt(72, 0, SI_VAR(5), SI_VAR(0), 0);
    PlaySoundAt(8326, 0, SI_VAR(5), SI_VAR(0), 0);
    func_8024093C_8756FC(SI_MAP_VAR(0));
    DisablePlayerInput(0);
});

Script N(script_80241B34) = SCRIPT({
    SI_VAR(10) = 292;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(403) = 1;
    await N(script_8024186C);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 0xFFFFFF47, 60, 0xFFFFFFE7, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(403));
    AssignScript(N(script_80241B34));
    MakeEntity(0x802EA0C4, 25, 50, 0, 0, 0x80000000);
    AssignScript(N(script_8024194C));
    if (SI_SAVE_FLAG(424) == 0) {
        MakeEntity(0x802EAA54, 25, 75, 0, 0, 100, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
    } else {
        MakeEntity(0x802EAA54, 0xFFFFFFDD, 0xFFFFFFF6, 0, 0, 100, 0x80000000);
    }
});

s32 pad_001C8C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80241C90) = {
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

Script N(script_NpcAI_80241CC0) = SCRIPT({
    DoBasicAI(N(aISettings_80241C90));
});

NpcSettings N(npcSettings_80241CE0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x17,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241CC0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80241D0C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241CE0),
        .pos = { 220.0, -10.0, -80.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0x000000DC, 0xFFFFFFF6, 0xFFFFFFB0, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000A0, 0x00000000, 0xFFFFFFEC, 0x000000B4, 0x00000064, 0x00000001, 0x00000001 },
        .animations = {
            0x00270101, 0x00270103, 0x00270103, 0x00270103, 0x00270103, 0x00270101, 0x00270105, 0x00270105, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100,
        },
    },
};

StaticNpc N(npcGroup_80241EFC)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241CE0),
        .pos = { 130.0, -10.0, 45.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0x00000082, 0xFFFFFFF6, 0x0000002D, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000A0, 0x00000000, 0xFFFFFFEC, 0x000000B4, 0x00000064, 0x00000001, 0x00000001 },
        .animations = {
            0x00270101, 0x00270103, 0x00270103, 0x00270103, 0x00270103, 0x00270101, 0x00270105, 0x00270105, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100, 0x00270100,
        },
    },
};

NpcGroupList N(npcGroupList_802420EC) = {
    NPC_GROUP(N(npcGroup_80241D0C), 0x1A100001),
    NPC_GROUP(N(npcGroup_80241EFC), 0x1A120001),
    {},
};

// rodata: D_80242110_876ED0

s32 pad_002118[] = {
    0x00000000, 0x00000000,
};
