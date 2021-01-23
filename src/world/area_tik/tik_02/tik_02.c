#include "tik_02.h"

s32 pad_00030C[1];
s32 pad_0005CC[1];
s32 pad_000998[2];
Script N(script_802409F0);
Script N(script_80240A1C);
s32 pad_000A48[2];
Script N(script_UpdateTexturePan_80240A50);
Script N(script_ExitWalk_80240AEC);
Script N(script_80240B48);
Script N(main);
s32 pad_0010B8[2];
s32 N(unk_802410C0)[1];
Script N(script_802410C4);
Script N(script_8024112C);
Script N(script_8024120C);
Script N(script_MakeEntities);
Script N(script_802412B0);
Script N(script_80241780);
Script N(script_80241958);
s32 N(unk_80241B04)[17];
Script N(script_80241B48);
s32 pad_001B74[3];
s32 N(shortTable_80241BAC)[3];
Script N(script_Idle_80241BB8);
Script N(script_Defeat_80241E48);
Script N(script_Init_8024207C);
StaticNpc N(npcGroup_802421A8)[1];
NpcGroupList N(npcGroupList_80242398);
const char D_802423B0_86EAF0[8]; // "tik_18"
s32 pad_0023B8[2];

// text: func_80240000_86C740

// text: func_80240124_86C864

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_86CA50

// text: func_802403C4_86CB04

// text: func_80240428_86CB68

// text: func_80240578_86CCB8

s32 pad_0005CC[] = {
    0x00000000,
};

// text: func_802405D0_86CD10

// text: func_80240940_86D080

s32 pad_000998[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -360.0f, -10.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190024,
};

Script N(script_802409F0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

Script N(script_80240A1C) = SCRIPT({
    SetMusicTrack(0, 90, 0, 8);
});

s32 pad_000A48[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240A50) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_86C740();
                    return;
                }
            }
        }
    }
    func_80240124_86C864();
});

Script N(script_ExitWalk_80240AEC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802423B0_86EAF0, 1);
    sleep 100;
});

Script N(script_80240B48) = SCRIPT({
    bind N(script_ExitWalk_80240AEC) to 0x80000 8;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80242398));
    await N(script_MakeEntities);
    spawn N(script_802409F0);
    PlaySound(0x80000028);
    PlaySoundAtF(0x80000029, 1, 0xFFFFFF1A, 0xFFFFFF4C, 120);
    PlaySoundAtF(0x8000002A, 1, 20, 0xFFFFFF4C, 120);
    spawn N(script_80241B48);
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
        spawn N(script_UpdateTexturePan_80240A50);
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
        spawn N(script_UpdateTexturePan_80240A50);
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
        spawn N(script_UpdateTexturePan_80240A50);
    }
    EnableTexPanning(11, 1);
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
        spawn N(script_UpdateTexturePan_80240A50);
    }
    SI_VAR(0) = N(script_80240B48);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_0010B8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802410C0)[] = {
    0x00000000,
};

Script N(script_802410C4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_8024112C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_802410C4);
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

Script N(script_8024120C) = SCRIPT({
    SI_VAR(10) = 303;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(399) = 1;
    await N(script_8024112C);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 280, 0xFFFFFFF6, 0, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(399));
    AssignScript(N(script_8024120C));
});

Script N(script_802412B0) = SCRIPT({
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
Script N(script_80241780) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 17, SI_VAR(5)),
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
    SI_CMD(ScriptOpcode_CALL, func_802405D0_86CD10, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802412B0)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241958) = {
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
            SI_CMD(ScriptOpcode_SPAWN, N(script_80241780)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 17, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80241B04)[] = {
    0x00000002, 0xFFFFFE8A, 0xFFFFFF9E, 0x00000066, 0x0000009E, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000002, 0x00000042, 0xFFFFFF96, 0x000000B6, 0x00000098, 0x000000C8, 0xFFFFFFF6, 0x0000003C,
    0x00000002,
};

Script N(script_80241B48) = SCRIPT({
    SI_VAR(0) = N(unk_80241B04);
    spawn N(script_80241958);
});

s32 pad_001B74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241B80) = {
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

s32 N(shortTable_80241BAC)[] = {
    0x00001B00, 0x00001B01, 0x00001B02,
};

Script N(script_Idle_80241BB8) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 65) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    spawn N(script_80240A1C);
    ShowMessageAtScreenPos(0x80000, 160, 40);
    spawn {
        InterpPlayerYaw(315, 0);
        sleep 50;
        InterpPlayerYaw(45, 0);
    }
    UseSettingsFrom(0, 0xFFFFFFE7, SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, 0xFFFFFFE7, SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    spawn {
        sleep 10;
        SetPanTarget(0, 140, SI_VAR(1), SI_VAR(2));
        WaitForCam(0, 1.0);
    }
    PlaySoundAtNpc(-1, 988, 0);
    PlaySoundAtNpc(-1, 999, 0);
    SetNpcPos(-1, 0xFFFFFF9C, 0xFFFFFED4, 0xFFFFFF88);
    SetNpcAnimation(-1, 0x500001);
    SetNpcJumpscale(-1, 1.0);
    NpcJump0(-1, 175, 0, 0, 40);
    SetNpcAnimation(-1, 0x50000C);
    ShakeCam(0, 0, 5, 1.0);
    sleep 15;
    StartBossBattle(3);
});

Script N(script_Defeat_80241E48) = SCRIPT({
    sleep 5;
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        WaitForCam(0, 1.0);
    }
    spawn {
        SetNpcAnimation(-1, 0x500004);
        MakeLerp(0, 2160, 40, 0);
        loop {
            UpdateLerp();
            SetNpcRotation(-1, 0, SI_VAR(0), 0);
            PlayerFaceNpc(-1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    PlaySoundAtNpc(-1, 989, 0);
    PlaySoundAtNpc(-1, 999, 0);
    SetNpcJumpscale(-1, 1.0);
    NpcJump0(-1, 0xFFFFFF9C, 0xFFFFFED4, 0xFFFFFF88, 40);
    sleep 1;
    if (SI_SAVE_FLAG(427) == 0) {
        SI_SAVE_FLAG(427) = 1;
    } else {
        SI_SAVE_FLAG(428) = 1;
    }
    SI_SAVE_FLAG(430) = 1;
    PanToTarget(0, 0, 0);
    spawn N(script_802409F0);
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Init_8024207C) = SCRIPT({
    if (SI_SAVE_FLAG(430) == 0) {
        BindNpcIdle(-1, N(script_Idle_80241BB8));
        BindNpcDefeat(-1, N(script_Defeat_80241E48));
        if (SI_SAVE_FLAG(427) == 0) {
            SetNpcScale(-1, 0.75, 0.75, 0.75);
            func_80240940_86D080(0);
        } else {
            if (SI_SAVE_FLAG(428) == 0) {
                SetNpcScale(-1, 1.25, 1.25, 1.25);
                func_80240940_86D080(1);
            } else {
                SetNpcScale(-1, 2.0, 2.0, 2.0);
                func_80240940_86D080(2);
            }
        }
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802421A8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241B80),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00840D0D,
        .init = N(script_Init_8024207C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C, 0x0050000C,
        },
    },
};

NpcGroupList N(npcGroupList_80242398) = {
    NPC_GROUP(N(npcGroup_802421A8), 0x1B000001),
    {},
};

// rodata: D_802423B0_86EAF0

s32 pad_0023B8[] = {
    0x00000000, 0x00000000,
};
