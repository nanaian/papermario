#include "obk_07.h"

s32 pad_0002BC[1];
s32 pad_0004FC[1];
s32 pad_001B84[3];
Script N(script_80241BE0);
s32 pad_001C48[2];
Script N(script_80241C50);
Script N(script_80241CAC);
Script N(script_80241D60);
Script N(main);
s32 pad_001FAC[1];
s32 N(unk_80241FB0)[1];
Script N(script_80241FB4);
Script N(script_8024201C);
Script N(script_802420FC);
Script N(script_MakeEntities);
s32 pad_0021BC[1];
s32 N(unk_802421C0)[21];
s32 N(unk_80242214)[21];
s32 N(unk_80242268)[21];
Script N(script_802422BC);
Script N(script_80242588);
Script N(script_8024267C);
Script N(script_802428D0);
s32 pad_0028FC[1];
s32 N(shortTable_8024292C)[2];
Script N(script_Idle_80242934);
Script N(script_Init_802429E0);
StaticNpc N(npcGroup_80242A04)[1];
Script N(script_Init_80242BF4);
StaticNpc N(npcGroup_80242C18)[1];
Script N(script_Init_80242E08);
StaticNpc N(npcGroup_80242E64)[1];
NpcGroupList N(npcGroupList_80243054);
s32 pad_003084[3];
s32 N(itemList_80243090)[2];
s32 N(intTable_80243098)[2];
s32 N(unk_802430A0)[4];
s32 N(unk_802430B0)[4];
s32 N(unk_802430C0)[4];
Script N(script_802430D0);
Script N(script_80243230);
Script N(script_80243290);
Script N(script_802432F0);
Script N(script_802433E4);
Script N(script_802434D0);
Script N(script_802435BC);
Script N(script_8024374C);
Script N(script_80243C3C);
Script N(script_NpcAI_80243E94);
Script N(script_NpcAI_80243F60);
Script N(script_NpcAI_80243F70);
Script N(script_80244144);
Script N(script_80244380);
Script N(script_802446EC);
Script N(script_80244728);
Script N(script_Interact_80244840);
Script N(script_8024493C);
Script N(script_80244B60);
Script N(script_80244BF4);
const char D_80244C70_BD3860[8]; // "obk_01"
s32 pad_004C78[2];

// text: func_80240000_BCEBF0

// text: func_802400B4_BCECA4

// text: func_80240118_BCED08

// text: func_80240268_BCEE58

s32 pad_0002BC[] = {
    0x00000000,
};

// text: func_802402C0_BCEEB0

// text: func_802402CC_BCEEBC

// text: func_80240454_BCF044

s32 pad_0004FC[] = {
    0x00000000,
};

// text: func_80240500_BCF0F0

// text: func_80240540_BCF130

// text: func_80240564_BCF154

// text: func_80240A10_BCF600

// text: func_80240A6C_BCF65C

// text: func_80240EF8_BCFAE8

// text: func_802410C0_BCFCB0

// text: func_80241130_BCFD20

// text: func_80241168_BCFD58

// text: func_8024130C_BCFEFC

// text: func_80241358_BCFF48

// text: func_802413D0_BCFFC0

// text: func_8024143C_BD002C

// text: func_8024146C_BD005C

// text: func_802414B4_BD00A4

// text: func_80241518_BD0108

// text: func_8024157C_BD016C

// text: func_802415B8_BD01A8

// text: func_802415F4_BD01E4

// text: func_80241630_BD0220

// text: func_80241674_BD0264

// text: func_802416F8_BD02E8

// text: func_80241788_BD0378

// text: func_80241790_BD0380

// text: func_80241898_BD0488

// text: func_802418E0_BD04D0

// text: func_80241B50_BD0740

s32 pad_001B84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 68.0f, 0.0f, 235.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900B8,
};

Script N(script_80241BE0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

s32 pad_001C48[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241C50) = SCRIPT({
    GetEntryID(SI_VAR(0));
    SI_VAR(2) = 45;
    SI_VAR(4) = 46;
    SI_VAR(3) = 1;
    await 0x80285E24;
});

Script N(script_80241CAC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 3;
    SI_VAR(2) = 45;
    SI_VAR(4) = 46;
    SI_VAR(3) = 1;
    spawn 0x80285DFC;
    sleep 17;
    GotoMap(D_80244C70_BD3860, 3);
    sleep 100;
});

Script N(script_80241D60) = SCRIPT({
    spawn {
        EnableTexPanning(67, 1);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop {
            SetTexPanOffset(2, 1, SI_VAR(0), SI_VAR(1));
            SI_VAR(0) += 300;
            SI_VAR(1) += 100;
            sleep 1;
        }
    }
    SetTexPanner(70, 0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    loop {
        SI_VAR(0) += 300;
        SI_VAR(1) += 100;
        SetTexPanOffset(0, 0, SI_VAR(0), SI_VAR(1));
        sleep 1;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80243054));
    await N(script_MakeEntities);
    spawn N(script_80241D60);
    spawn N(script_802428D0);
    spawn N(script_80244BF4);
    bind N(script_80241CAC) to TriggerFlag_WALL_INTERACT 3;
    spawn N(script_80241C50);
    spawn N(script_80241BE0);
});

s32 pad_001FAC[] = {
    0x00000000,
};

s32 N(unk_80241FB0)[] = {
    0x00000000,
};

Script N(script_80241FB4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_8024201C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80241FB4);
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

Script N(script_802420FC) = SCRIPT({
    SI_VAR(10) = 28;
    SI_VAR(11) = 1;
    SI_SAVE_VAR(0) = 0xFFFFFFD6;
    SI_SAVE_FLAG(978) = 1;
    await N(script_8024201C);
    await N(script_8024493C);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 170, 0, 0xFFFFFF60, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(978));
    AssignScript(N(script_802420FC));
});

s32 pad_0021BC[] = {
    0x00000000,
};

s32 N(unk_802421C0)[] = {
    0x00000005, 0x00000005, 0xFFFFFF24, 0x0000000A, 0x0000000A, 0xFFFFFF38, 0x0000000F, 0x0000000F,
    0xFFFFFF4C, 0x00000014, 0x00000014, 0xFFFFFF60, 0x00000019, 0x00000019, 0xFFFFFF74, 0x0000001E,
    0x0000001E, 0xFFFFFF88, 0x00000023, 0x00000023, 0xFFFFFF9C,
};

s32 N(unk_80242214)[] = {
    0xFFFFFFFB, 0x00000005, 0xFFFFFF24, 0xFFFFFFF6, 0x0000000A, 0xFFFFFF38, 0xFFFFFFF1, 0x0000000F,
    0xFFFFFF4C, 0xFFFFFFEC, 0x00000014, 0xFFFFFF60, 0xFFFFFFE7, 0x00000019, 0xFFFFFF74, 0xFFFFFFE2,
    0x0000001E, 0xFFFFFF88, 0xFFFFFFDD, 0x00000019, 0xFFFFFF9C,
};

s32 N(unk_80242268)[] = {
    0x00000000, 0x0000000A, 0xFFFFFF24, 0x00000000, 0x00000014, 0xFFFFFF38, 0x00000000, 0x0000001E,
    0xFFFFFF4C, 0x00000000, 0x00000028, 0xFFFFFF60, 0x00000000, 0x00000032, 0xFFFFFF74, 0x00000000,
    0x0000003C, 0xFFFFFF88, 0x00000000, 0x00000046, 0xFFFFFF9C,
};

// Unable to use DSL: DSL does not support script opcode 0x30
Script N(script_802422BC) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_FIXED(1.203125), 20, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_FIXED(1.5), 20, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_FIXED(2.0), 20, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_FIXED(2.5), 20, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_FIXED(3.0), 20, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_FIXED(3.5), 20, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(10), SI_VAR(11), SI_VAR(12)),
    SI_CMD(ScriptOpcode_CALL, PlayEffect, 36, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_FIXED(4.0), 80, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80242588) = SCRIPT({
    loop 10 {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        RandInt(30, SI_VAR(3));
        RandInt(30, SI_VAR(4));
        SI_VAR(0) += 0xFFFFFFF1;
        SI_VAR(2) += 10;
        SI_VAR(0) += SI_VAR(3);
        SI_VAR(1) += SI_VAR(4);
        PlayEffect(39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 20, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
    }
});

Script N(script_8024267C) = SCRIPT({
    if (SI_MAP_VAR(0) == 1) {
        return;
    }
    SI_MAP_VAR(0) = 1;
    DisablePlayerInput(1);
    spawn {
        AdjustCam(0, 4.0, 0, 250.0, 17.5, -10.0);
    }
    sleep 10;
    spawn {
        DisablePartnerAI(0);
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 25;
        SetNpcFlagBits(0xFFFFFFFC, 256, 1);
        NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 10);
        SetNpcFlagBits(0xFFFFFFFC, 256, 0);
        EnablePartnerAI();
        InterpPlayerYaw(90, 0);
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
    }
    PlaySoundAtPlayer(245, 0);
    SI_VAR(0) = N(unk_802421C0);
    spawn N(script_802422BC);
    SI_VAR(0) = N(unk_80242214);
    spawn N(script_802422BC);
    SI_VAR(0) = N(unk_80242268);
    spawn N(script_802422BC);
    sleep 5;
    SetPlayerAnimation(0x1002F);
    sleep 60;
    await N(script_80242588);
    sleep 40;
    SetPlayerAnimation(0x10002);
    ResetCam(0, 4.0);
    SI_MAP_VAR(0) = 0;
    DisablePlayerInput(0);
});

Script N(script_802428D0) = SCRIPT({
    bind N(script_8024267C) to TriggerFlag_WALL_INTERACT 6;
});

s32 pad_0028FC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80242900) = {
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

s32 N(shortTable_8024292C)[] = {
    0x0032003C, 0x00C800F0,
};

Script N(script_Idle_80242934) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    func_802402C0_BCEEB0();
    loop {
        func_802402CC_BCEEBC();
        func_80240454_BCF044();
        0x802CFD30(-1, 7, SI_VAR(0), 0, 0, 0);
        0x802D0244(-1, 17);
        sleep 1;
    }
});

Script N(script_Init_802429E0) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80242934));
});

StaticNpc N(npcGroup_80242A04)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242900),
        .pos = { 523.0, -139.0, 193.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802429E0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

Script N(script_Init_80242BF4) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80242934));
});

StaticNpc N(npcGroup_80242C18)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242900),
        .pos = { 473.0, -122.0, 247.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80242BF4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

Script N(script_Init_80242E08) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD6) {
        SI_MAP_VAR(2) = 1;
        RemoveNpc(-1);
    } else {
        await N(script_80244B60);
    }
});

StaticNpc N(npcGroup_80242E64)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242900),
        .pos = { 168.0, 0.0, -161.0 },
        .flags = 0x00400D01,
        .init = N(script_Init_80242E08),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .tattle = 0x1A00A8,
    },
};

NpcGroupList N(npcGroupList_80243054) = {
    NPC_GROUP(N(npcGroup_80242A04), 0x00000000),
    NPC_GROUP(N(npcGroup_80242C18), 0x00000000),
    NPC_GROUP(N(npcGroup_80242E64), 0x00000000),
    {},
};

s32 pad_003084[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(itemList_80243090)[] = {
    0x00000022, 0x00000000,
};

s32 N(intTable_80243098)[] = {
    0x00000044, 0x00000000,
};

s32 N(unk_802430A0)[] = {
    0x2121751D, 0x23A3460C, 0xB46B0078, 0x730D1300,
};

s32 N(unk_802430B0)[] = {
    0x00E4862E, 0xB4F27570, 0xFFF304BC, 0xF70D0500,
};

s32 N(unk_802430C0)[] = {
    0x2D38D254, 0x28D17D2C, 0xB5A11B55, 0xFFFFFF00,
};

Script N(script_802430D0) = SCRIPT({
30:
    MakeLerp(100, 200, 30, 10);
31:
    UpdateLerp();
    SI_VAR(2) =f SI_VAR(0);
    func_8024143C_BD002C();
    SI_VAR(2) /=f SI_VAR(3);
    func_8024146C_BD005C();
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 31;
    }
    MakeLerp(200, 100, 30, 10);
32:
    UpdateLerp();
    SI_VAR(2) =f SI_VAR(0);
    func_8024143C_BD002C();
    SI_VAR(2) /=f SI_VAR(3);
    func_8024146C_BD005C();
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 32;
    }
    goto 30;
});

Script N(script_80243230) = SCRIPT({
    SI_VAR(0) = 0;
10:
    func_802414B4_BD00A4();
    SI_VAR(0) += 2;
    sleep 1;
    goto 10;
});

Script N(script_80243290) = SCRIPT({
    SI_VAR(0) = 0;
20:
    func_80241518_BD0108();
    SI_VAR(0) += 10;
    sleep 1;
    goto 20;
});

Script N(script_802432F0) = SCRIPT({
    SI_MAP_FLAG(10) = 0;
    loop {
        if (SI_MAP_FLAG(10) == 1) {
            func_80241674_BD0264();
            if (SI_VAR(2) == 1) {
                break;
            }
        }
        func_80241630_BD0220();
        func_8024157C_BD016C();
        ScaleModel(50, SI_VAR(0), SI_VAR(0), SI_VAR(0));
        UpdateColliderTransform(24);
        sleep 1;
    }
    SI_MAP_FLAG(10) = 0;
    ScaleModel(50, 1, 1, 1);
});

Script N(script_802433E4) = SCRIPT({
    SI_MAP_FLAG(11) = 0;
    loop {
        if (SI_MAP_FLAG(11) == 1) {
            func_802416F8_BD02E8();
            if (SI_VAR(2) == 1) {
                break;
            }
        }
        func_80241630_BD0220();
        func_802415B8_BD01A8();
        RotateGroup(54, SI_VAR(0), 1, 0, 0);
        sleep 1;
    }
    SI_MAP_FLAG(11) = 0;
    RotateGroup(54, 0, 1, 0, 0);
});

Script N(script_802434D0) = SCRIPT({
    SI_MAP_FLAG(12) = 0;
    loop {
        if (SI_MAP_FLAG(12) == 1) {
            func_802416F8_BD02E8();
            if (SI_VAR(2) == 1) {
                break;
            }
        }
        func_80241630_BD0220();
        func_802415F4_BD01E4();
        RotateGroup(49, SI_VAR(0), 0, -1, 0);
        sleep 1;
    }
    SI_MAP_FLAG(12) = 0;
    RotateGroup(49, 0, 0, -1, 0);
});

Script N(script_802435BC) = SCRIPT({
    SI_MAP_VAR(4) = 1;
    MakeLerp(SI_MAP_VAR(7), 0, SI_VAR(0), 0);
    loop {
        UpdateLerp();
        func_80240EF8_BCFAE8();
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    SetNpcRotation(2, 0, 0, 0);
    SI_MAP_FLAG(10) = 1;
    SI_MAP_FLAG(11) = 1;
    SI_MAP_FLAG(12) = 1;
    loop {
        sleep 1;
        if (SI_MAP_FLAG(10) == 0) {
            if (SI_MAP_FLAG(11) == 0) {
                if (SI_MAP_FLAG(12) == 0) {
                    break;
                }
            }
        }
    }
    kill SI_MAP_VAR(8);
    kill SI_MAP_VAR(9);
    kill SI_MAP_VAR(10);
    spawn N(script_80241BE0);
    SI_MAP_VAR(4) = 0;
});

// Unable to use DSL: DSL does not support script opcode 0x55
// *INDENT-OFF*
Script N(script_8024374C) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(4), 1),
        SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(14), SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(14)),
            SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(8), SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(8)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(9), SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(9)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(10)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(12), SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_MAP_VAR(13), SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_IF_GT, SI_VAR(2), 0xFFFFFF56),
        SI_CMD(ScriptOpcode_GOTO, 33),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 11),
    SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, 0xFFFFFF36, 0xFFFFFF56, 0),
    SI_CMD(ScriptOpcode_LABEL, 33),
    SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, 0xFFFFFF28, 0xFFFFFF8D, 0),
    SI_CMD(ScriptOpcode_CALL, InterpPlayerYaw, 38, 1),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(3), 1),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_CALL, func_80241168_BCFD58),
    SI_CMD(ScriptOpcode_CALL, func_8024130C_BCFEFC),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
    SI_CMD(ScriptOpcode_CALL, func_80241898_BD0488),
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, BindNpcAI, 2, N(script_NpcAI_80243E94)),
        SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80244380), SI_MAP_VAR(15)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802446EC), SI_MAP_VAR(15)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802430D0), SI_MAP_VAR(8)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80243230), SI_MAP_VAR(9)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80243290), SI_MAP_VAR(10)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802432F0), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802433E4), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802434D0), SI_MAP_VAR(13)),
    SI_CMD(ScriptOpcode_CALL, func_80241358_BCFF48),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_CALL, func_80241790_BD0380),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_CALL, func_802413D0_BCFFC0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(13), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_MAP_VAR(15)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(2), 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(1), 1),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 150),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 80),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802435BC), SI_MAP_VAR(14)),
        SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80244144), SI_MAP_VAR(5)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 80),
        SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802435BC), SI_MAP_VAR(14)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80243C3C) = SCRIPT({
    if (SI_MAP_VAR(1) == 1) {
        if (SI_MAP_VAR(2) == 0) {
            return;
        }
    }
    DisablePlayerInput(1);
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD5) {
        goto 50;
    }
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D015A, 160, 40);
        goto 100;
    }
    if (SI_VAR(0) == -1) {
        goto 100;
    }
    func_80241130_BCFD20();
    if (SI_VAR(0) == -1) {
        goto 100;
    }
    SI_SAVE_VAR(182) = SI_VAR(0);
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_VAR(0) = 0xFFFFFFD5;
    EnableModel(48, 1);
    SetPlayerAnimation(0x60007);
    sleep 15;
    SetPlayerAnimation(0x10002);
    sleep 15;
    0x802D6954();
50:
    SI_MAP_VAR(3) = 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFD6) {
        SI_MAP_VAR(3) = 0;
        spawn {
            ShowMessageAtScreenPos(0x1D0181, 160, 40);
            SI_MAP_VAR(3) = 1;
        }
    }
    await N(script_8024374C);
    return;
100:
    0x802D6954();
    DisablePlayerInput(0);
});

Script N(script_NpcAI_80243E94) = SCRIPT({
    SetNpcAnimation(2, 0x950001);
0:
    RandInt(30, SI_VAR(0));
    SI_VAR(0) += 30;
    sleep SI_VAR(0);
    InterpNpcYaw(2, 90, 5);
    RandInt(30, SI_VAR(0));
    SI_VAR(0) += 30;
    sleep SI_VAR(0);
    InterpNpcYaw(2, 270, 5);
    goto 0;
});

Script N(script_NpcAI_80243F60) = SCRIPT({

});

Script N(script_NpcAI_80243F70) = SCRIPT({
    loop {
        RandInt(99, SI_VAR(0));
        match SI_VAR(0) {
            < 30 {
                RandInt(10, SI_VAR(0));
                SI_VAR(0) += 10;
                sleep SI_VAR(0);
                InterpNpcYaw(2, 90, 5);
                RandInt(10, SI_VAR(0));
                SI_VAR(0) += 10;
                sleep SI_VAR(0);
                InterpNpcYaw(2, 270, 5);
            }
            < 60 {
                GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcJumpscale(2, 1.0);
                NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
            }
            < 99 {
                MakeLerp(0, 720, 20, 4);
                loop {
                    UpdateLerp();
                    SetNpcRotation(2, 0, SI_VAR(0), 0);
                    sleep 1;
                    if (SI_VAR(1) == 0) {
                        break;
                    }
                }
            }
        }
    }
});

Script N(script_80244144) = SCRIPT({
    sleep 1;
    if (SI_MAP_VAR(1) == 1) {
        sleep 150;
        BindNpcAI(2, N(script_NpcAI_80243F60));
        sleep 1;
        SetNpcRotation(2, 0, 0, 0);
        sleep 90;
    } else {
        BindNpcAI(2, N(script_NpcAI_80243F60));
        sleep 1;
        SetNpcRotation(2, 0, 0, 0);
    }
    AwaitPlayerLeave(168, 0xFFFFFF78, 50);
    MakeLerp(180, 0, 10, 0);
    loop {
        UpdateLerp();
        0x802CFD30(2, 7, SI_VAR(0), 0, 0, 0);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    SetNpcPos(2, 168, 0, 0xFFFFFF78);
    MakeLerp(0, 180, 10, 0);
    loop {
        UpdateLerp();
        0x802CFD30(2, 7, SI_VAR(0), 0, 0, 0);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    SI_MAP_VAR(1) = 0;
    BindNpcAI(2, N(script_NpcAI_80243E94));
});

Script N(script_80244380) = SCRIPT({
    SI_MAP_VAR(1) = 0;
    SI_MAP_FLAG(13) = 0;
    InterpNpcYaw(2, 270, 5);
    SI_VAR(12) = 0;
    loop {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) <= 0xFFFFFFA4) {
            SI_MAP_VAR(1) = 1;
            BindNpcAI(2, N(script_NpcAI_80243F70));
            return;
        }
        if (SI_VAR(10) == 0) {
            func_802418E0_BD04D0();
            if (SI_VAR(12) != 0) {
                SI_VAR(12) -= 1;
            }
            sleep 1;
        } else {
            if (SI_VAR(12) != 0) {
                func_802418E0_BD04D0();
                if (SI_VAR(12) != 0) {
                    SI_VAR(12) -= 1;
                }
                sleep 1;
            } else {
                SI_VAR(12) = 20;
                RandInt(99, SI_VAR(0));
                match SI_VAR(0) {
                    < 60 {}
                    < 80 {
                        BindNpcAI(2, N(script_NpcAI_80243F60));
                        SI_MAP_FLAG(13) = 1;
                        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        SetNpcJumpscale(2, 1.0);
                        NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
                        SI_MAP_FLAG(13) = 0;
                        BindNpcAI(2, N(script_NpcAI_80243E94));
                    }
                    < 99 {
                        BindNpcAI(2, N(script_NpcAI_80243F60));
                        SI_MAP_FLAG(13) = 1;
                        MakeLerp(0, 720, 20, 4);
                        loop {
                            UpdateLerp();
                            SetNpcRotation(2, 0, SI_VAR(0), 0);
                            sleep 1;
                            if (SI_VAR(1) == 0) {
                                break;
                            }
                        }
                        SI_MAP_FLAG(13) = 0;
                        BindNpcAI(2, N(script_NpcAI_80243E94));
                    }
                }
            }
        }
        if (SI_VAR(11) == 1) {
            break;
        }
    }
});

Script N(script_802446EC) = SCRIPT({
    loop {
        func_80241788_BD0378();
        sleep 1;
    }
});

Script N(script_80244728) = SCRIPT({
    spawn {
        sleep 25;
        PlaySoundAtNpc(2, 71, 0);
    }
    SetNpcAnimation(2, 0x950008);
    sleep 10;
    MakeLerp(255, 0, 60, 0);
0:
    UpdateLerp();
    0x802CFD30(2, 7, SI_VAR(0), 0, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    SetNpcPos(2, 0, 0xFFFFFC18, 0);
    SI_MAP_VAR(2) = 1;
});

Script N(script_Interact_80244840) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFD5 {
            if (SI_SAVE_FLAG(979) == 1) {
                SpeakToPlayer(2, 0x950004, 0x950001, 0, 0xE0036);
            } else {
                SpeakToPlayer(2, 0x950004, 0x950001, 0, 0xE0035);
            }
        }
        == 0xFFFFFFD5 {
            if (SI_MAP_VAR(1) == 1) {
                SpeakToPlayer(2, 0x950004, 0x950001, 0, 0xE0037);
            } else {
                SpeakToPlayer(2, 0x950004, 0x950001, 0, 0xE0038);
            }
        }
    }
});

Script N(script_8024493C) = SCRIPT({
    kill SI_MAP_VAR(5);
    SetNpcRotation(2, 0, 0, 0);
    spawn N(script_80241BE0);
    DisablePlayerInput(1);
    BindNpcAI(2, N(script_NpcAI_80243F60));
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(2, 0x950009, 0x950009, 0, 0xE0039);
    SetNpcAnimation(2, 0x950001);
    EndSpeech(2, 0x950004, 0x950001, 0);
    await N(script_80244728);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_80244B60) = SCRIPT({
    SetNpcScale(2, 1.0, 1.0, 1.0);
    SetNpcCollisionSize(2, 40, 40);
    func_80241B50_BD0740();
    BindNpcInteract(-1, N(script_Interact_80244840));
    BindNpcIdle(-1, N(script_NpcAI_80243E94));
    SetNpcPos(2, 168, 0, 0xFFFFFF78);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80244BF4) = {
    SI_CMD(ScriptOpcode_CALL, func_80240500_BCF0F0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 24, 50),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFD5),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 48, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243C3C), TriggerFlag_WALL_INTERACT, 21, N(itemList_80243090), 0, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// rodata: D_80244C70_BD3860

s32 pad_004C78[] = {
    0x00000000, 0x00000000,
};
