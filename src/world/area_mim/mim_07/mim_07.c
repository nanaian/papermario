#include "mim_07.h"

s32 pad_000068[2];
s32 pad_000268[2];
s32 pad_001084[3];
Script N(script_80241110);
Script N(script_8024114C);
s32 pad_001178[2];
Script N(script_ExitWalk_80241180);
Script N(script_ExitWalk_802411DC);
Script N(script_ExitWalk_80241238);
Script N(script_ExitWalk_80241294);
Script N(script_802412F0);
Script N(main);
s32 pad_00158C[1];
Script N(script_80241590);
Script N(script_MakeEntities);
s32 pad_001678[2];
s32 N(unk_80241680)[1];
s32 N(unk_80241684)[1];
s32 N(unk_80241688)[1];
Script N(script_8024168C);
Script N(script_80241704);
Script N(script_80241900);
s32 pad_001988[2];
Script N(script_80241990);
Script N(script_80241C24);
Script N(script_80241D44);
Script N(script_80241E14);
Script N(script_80242440);
Script N(script_802424BC);
Script N(script_80242538);
Script N(script_80242624);
Script N(script_802426A0);
s32 pad_002878[2];
Script N(script_NpcAI_802428B0);
s32 N(intTable_80242944)[2];
s32 N(intTable_8024294C)[2];
s32 N(intTable_80242954)[2];
s32 N(intTable_8024295C)[4];
s32 N(intTable_8024296C)[4];
s32 N(intTable_8024297C)[4];
s32 N(intTable_8024298C)[4];
s32 N(intTable_8024299C)[4];
s32 N(intTable_802429AC)[4];
Script N(script_Idle_802429BC);
Script N(script_Defeat_80242F94);
Script N(script_Init_802430B8);
Script N(script_Init_80243138);
StaticNpc N(npcGroup_80243188)[1];
StaticNpc N(npcGroup_80243378)[1];
StaticNpc N(npcGroup_80243568)[1];
NpcGroupList N(npcGroupList_80243758);
s32 pad_003788[2];
const char D_80243790_BAD8D0[8]; // "mim_09"
const char D_80243798_BAD8D8[8]; // "mim_01"
const char D_802437A0_BAD8E0[8]; // "mim_06"
const char D_802437A8_BAD8E8[8]; // "mim_11"
s32 pad_0037F4[3];

// text: func_80240000_BAA140

s32 pad_000068[] = {
    0x00000000, 0x00000000,
};

// text: func_80240070_BAA1B0

// text: func_802400D8_BAA218

// text: func_80240244_BAA384

s32 pad_000268[] = {
    0x00000000, 0x00000000,
};

// text: func_80240270_BAA3B0

// text: func_802404A0_BAA5E0

// text: N(UnkNpcAIFunc1)

// text: func_80240898_BAA9D8

// text: func_80240A3C_BAAB7C

// text: func_80240B1C_BAAC5C

// text: N(UnkDurationCheck)

// text: func_80240E60_BAAFA0

s32 pad_001084[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, -530.0f, 180.0f },
    { -530.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 530.0f, 0.0f },
    { 530.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900AD,
};

Script N(script_80241110) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

Script N(script_8024114C) = SCRIPT({
    SetMusicTrack(0, 71, 0, 8);
});

s32 pad_001178[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80241180) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243790_BAD8D0, 2);
    sleep 100;
});

Script N(script_ExitWalk_802411DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243798_BAD8D8, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241238) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802437A0_BAD8E0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80241294) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802437A8_BAD8E8, 0);
    sleep 100;
});

Script N(script_802412F0) = SCRIPT({
    bind N(script_ExitWalk_80241180) to 0x80000 1;
    bind N(script_ExitWalk_802411DC) to 0x80000 16;
    bind N(script_ExitWalk_80241238) to 0x80000 11;
    bind N(script_ExitWalk_80241294) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70006);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_802426A0);
    MakeNpcs(1, N(npcGroupList_80243758));
    await N(script_MakeEntities);
    SI_VAR(0) = N(script_802412F0);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80241110);
    await N(script_80241900);
    func_80240000_BAA140();
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        UseSettingsFrom(0, 500, 0xFFFFFF9C, 0);
        SetPanTarget(0, 530, 0, 0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        sleep 1;
        spawn {
            PanToTarget(0, 0, 0);
            SetCamSpeed(0, 3.0);
        }
    } else {
        SetCamSpeed(0, 3.0);
    }
});

s32 pad_00158C[] = {
    0x00000000,
};

Script N(script_80241590) = SCRIPT({
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D017F, 160, 40);
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAFDC, 280, 0, 0, 90, 0x80000000);
    AssignScript(N(script_80241590));
});

s32 pad_001678[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80241680)[] = {
    0x00000000,
};

s32 N(unk_80241684)[] = {
    0x00000000,
};

s32 N(unk_80241688)[] = {
    0x00000000,
};

Script N(script_8024168C) = SCRIPT({
0:
    SetTexPanOffset(0, 0, 0, 0xFFFF8000);
    sleep 3;
    SetTexPanOffset(0, 0, 0, 0);
    sleep 3;
    goto 0;
});

Script N(script_80241704) = SCRIPT({
    SI_VAR(0) = 0;
    func_80240244_BAA384();
    if (SI_VAR(0) == 1) {
        sleep 10;
        SI_VAR(9) = spawn N(script_8024168C);
        PlaySoundAt(8286, 0, 0xFFFFFFDE, 0, 0xFFFFFED4);
        loop 18 {
            TranslateModel(48, 1.0, 0, 1.0);
            TranslateModel(50, 1.0, 0, 1.0);
            sleep 2;
            TranslateModel(48, -1.0, 0, -1.0);
            TranslateModel(50, -1.0, 0, -1.0);
            sleep 2;
        }
        loop 10 {
            TranslateModel(48, 0.5, 0, 0.5);
            TranslateModel(50, 0.5, 0, 0.5);
            sleep 2;
            TranslateModel(48, -0.5, 0, -0.5);
            TranslateModel(50, -0.5, 0, -0.5);
            sleep 2;
        }
        kill SI_VAR(9);
        TranslateModel(48, 0, 0, 0);
        TranslateModel(50, 0, 0, 0);
    }
});

Script N(script_80241900) = SCRIPT({
    0x802C94A0(1, func_802400D8_BAA218, 0);
    0x802C90FC(50, 1, -1);
    SetModelFlags(50, 16, 1);
    bind N(script_80241704) to TriggerFlag_WALL_INTERACT 23;
    SetTexPanner(50, 0);
});

s32 pad_001988[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241990) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 1);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 0;
        }
        == 1 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 1);
            SI_VAR(1) = 1;
        }
        == 2 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 1);
            SetZoneEnabled(3, 1);
            SetZoneEnabled(4, 1);
            SetZoneEnabled(5, 1);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 2;
        }
    }
});

Script N(script_80241C24) = SCRIPT({
    ParentColliderToModel(28, 118);
    RotateGroup(120, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(28);
    ParentColliderToModel(32, 124);
    RotateGroup(126, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(32);
    ParentColliderToModel(30, 121);
    RotateGroup(123, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(30);
    ParentColliderToModel(34, 127);
    RotateGroup(129, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(34);
});

Script N(script_80241D44) = SCRIPT({
    RotateGroup(120, 0, 0, 1, 0);
    UpdateColliderTransform(28);
    RotateGroup(126, 0, 0, 1, 0);
    UpdateColliderTransform(32);
    RotateGroup(123, 0, 0, 1, 0);
    UpdateColliderTransform(30);
    RotateGroup(129, 0, 0, 1, 0);
    UpdateColliderTransform(34);
});

Script N(script_80241E14) = SCRIPT({
    spawn {
        PlaySoundAtCollider(SI_VAR(9), 468, 0);
        sleep 19;
        PlaySoundAtCollider(SI_VAR(9), 469, 0);
    }
    match SI_AREA_VAR(1) {
        == 0 {
            spawn {
                MakeLerp(10, 90, 10, 1);
            10:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 10;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_80241990);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_80241D44);
            SI_AREA_VAR(1) = 1;
            SI_SAVE_FLAG(924) = 1;
        }
        == 1 {
            spawn {
                MakeLerp(360, 270, 10, 1);
            30:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 30;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) -= SI_VAR(7);
                SI_VAR(2) -= SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 2;
            spawn N(script_80241990);
            MakeLerp(270, 0xFFFFFFF6, 30, 0);
        40:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 40;
            }
            SI_AREA_VAR(1) = 2;
        }
        == 2 {
            spawn {
                MakeLerp(0xFFFFFFF6, 90, 10, 1);
            50:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 50;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_80241990);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_80241D44);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_80242440) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 28;
    SI_VAR(10) = 120;
    await N(script_80241E14);
    DisablePlayerInput(0);
});

Script N(script_802424BC) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 32;
    SI_VAR(10) = 126;
    await N(script_80241E14);
    DisablePlayerInput(0);
});

Script N(script_80242538) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 30;
    SI_VAR(10) = 123;
    await N(script_80241E14);
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        if (SI_SAVE_FLAG(927) == 0) {
            if (SI_SAVE_FLAG(928) == 0) {
                SI_SAVE_FLAG(928) = 1;
                ShowMessageAtScreenPos(0xE0017, 160, 40);
            }
        }
    }
    DisablePlayerInput(0);
});

Script N(script_80242624) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 34;
    SI_VAR(10) = 129;
    await N(script_80241E14);
    DisablePlayerInput(0);
});

Script N(script_802426A0) = SCRIPT({
    if (SI_SAVE_FLAG(924) == 0) {
        SI_SAVE_FLAG(924) = 1;
        SI_AREA_VAR(1) = 2;
        SI_VAR(1) = 2;
        SI_VAR(2) = 0xFFFFFFF6;
    } else {
        SI_SAVE_FLAG(924) = 0;
        SI_AREA_VAR(1) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 10;
    }
    await N(script_80241990);
    spawn N(script_80241C24);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_80242440) to TriggerFlag_WALL_INTERACT 28;
    bind N(script_802424BC) to TriggerFlag_WALL_INTERACT 32;
    bind N(script_80242624) to TriggerFlag_WALL_INTERACT 34;
    bind N(script_80242538) to TriggerFlag_WALL_INTERACT 30;
});

s32 pad_002878[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242880) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0xA,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0x5,
    .chaseRadius = 160.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802428B0) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240E60_BAAFA0(N(aISettings_80242880), 1);
});

NpcSettings N(npcSettings_802428EC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802428B0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80242918) = {
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

s32 N(intTable_80242944)[] = {
    0x00000000, 0xFFFFFEA2,
};

s32 N(intTable_8024294C)[] = {
    0x00000000, 0x0000015E,
};

s32 N(intTable_80242954)[] = {
    0x0000015E, 0x00000000,
};

s32 N(intTable_8024295C)[] = {
    0xFFFFFEF2, 0xFFFFFF0B, 0xFFFFFF6A, 0xFFFFFECA,
};

s32 N(intTable_8024296C)[] = {
    0x0000010E, 0xFFFFFF0B, 0x00000096, 0xFFFFFECA,
};

s32 N(intTable_8024297C)[] = {
    0xFFFFFEF2, 0x000000F5, 0xFFFFFF6A, 0x00000136,
};

s32 N(intTable_8024298C)[] = {
    0x0000010E, 0x000000F5, 0x00000096, 0x00000136,
};

s32 N(intTable_8024299C)[] = {
    0x000000F5, 0xFFFFFEF2, 0x00000136, 0xFFFFFF6A,
};

s32 N(intTable_802429AC)[] = {
    0x000000F5, 0x0000010E, 0x00000136, 0x00000096,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_802429BC) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242944)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242944)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024294C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242954)),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, AwaitPlayerApproach, SI_VAR(1), SI_VAR(2), 80),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, AwaitPlayerLeave, SI_VAR(1), SI_VAR(2), 100),
    SI_CMD(ScriptOpcode_CALL, IsPlayerWithin, 0, 0, 410, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, 0x802D2B6C),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024114C)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024295C)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024296C)),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024297C)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024298C)),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(3), 0),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024299C)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802429AC)),
            SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetSelfVar, 1, SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, SI_VAR(2), 0, SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0x210016, 0x210003, 0, 0xE0018),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), SI_VAR(4)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(2), SI_VAR(5)),
        SI_CMD(ScriptOpcode_DIV, SI_VAR(0), 2),
        SI_CMD(ScriptOpcode_DIV, SI_VAR(2), 2),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(4.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, SI_FIXED(300.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamPitch, 0, SI_FIXED(20.0), SI_FIXED(-6.0)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, -1, 0x210009),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, -1, SI_VAR(4), SI_VAR(5), 30),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, -1, 0x210003),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0x210016, 0x210003, 0, 0xE0019),
    SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
    SI_CMD(ScriptOpcode_CALL, GetCurrentPartnerID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0xFFFFFFFC, 0x10008, 0x10001, 5, 0xE001A),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0xFFFFFFFC, 0x2000D, 0x20003, 5, 0xE001B),
        SI_CMD(ScriptOpcode_CASE_EQ, 3),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0xFFFFFFFC, 0x3000E, 0x30003, 5, 0xE001C),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0xFFFFFFFC, 0x40006, 0x40001, 5, 0xE001D),
        SI_CMD(ScriptOpcode_CASE_EQ, 9),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0xFFFFFFFC, 0x50004, 0x50001, 5, 0xE001E),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0x210016, 0x210003, 0, 0xE001F),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, -1, 0x21000B),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_CALL, StartBossBattle, 4),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Defeat_80242F94) = SCRIPT({
    SpeakToPlayer(-1, 0x210016, 0x210003, 0, 0xE0022);
    GetSelfVar(0, SI_VAR(0));
    GetSelfVar(1, SI_VAR(1));
    if (SI_VAR(1) >= 0) {
        InterpNpcYaw(-1, 200, 0);
    } else {
        InterpNpcYaw(-1, 330, 0);
    }
    SetNpcAnimation(-1, 0x21000B);
    sleep 10;
    NpcMoveTo(-1, SI_VAR(0), SI_VAR(1), 15);
    SI_SAVE_FLAG(927) = 1;
    await N(script_80241110);
    ResetCam(0, 4.0);
    RemoveNpc(-1);
});

Script N(script_Init_802430B8) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        if (SI_SAVE_FLAG(927) == 0) {
            BindNpcIdle(-1, N(script_Idle_802429BC));
            BindNpcDefeat(-1, N(script_Defeat_80242F94));
            return;
        }
    }
    RemoveNpc(-1);
});

Script N(script_Init_80243138) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        if (SI_SAVE_FLAG(927) == 0) {
            RemoveNpc(-1);
        }
    }
});

StaticNpc N(npcGroup_80243188)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802428EC),
        .pos = { -240.0, 0.0, -240.0 },
        .flags = 0x00000000,
        .init = N(script_Init_80243138),
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_THUNDER_BOLT, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0102, 0x002B0102, 0x002B0103, 0x002B0103, 0x002B0101, 0x002B0101, 0x002B0108, 0x002B0108, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103,
        },
    },
};

StaticNpc N(npcGroup_80243378)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802428EC),
        .pos = { 270.0, 0.0, 200.0 },
        .flags = 0x00000000,
        .init = N(script_Init_80243138),
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_THUNDER_BOLT, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0102, 0x002B0102, 0x002B0103, 0x002B0103, 0x002B0101, 0x002B0101, 0x002B0108, 0x002B0108, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103,
        },
    },
};

StaticNpc N(npcGroup_80243568)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242918),
        .pos = { -338.0, 0.0, 0.0 },
        .flags = 0x00A40D04,
        .init = N(script_Init_802430B8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
    },
};

NpcGroupList N(npcGroupList_80243758) = {
    NPC_GROUP(N(npcGroup_80243188), 0x0D020001),
    NPC_GROUP(N(npcGroup_80243378), 0x0D060001),
    NPC_GROUP(N(npcGroup_80243568), 0x02040000),
    {},
};

s32 pad_003788[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243790_BAD8D0

// rodata: D_80243798_BAD8D8

// rodata: D_802437A0_BAD8E0

// rodata: D_802437A8_BAD8E8

// rodata: D_802437B0_BAD8F0

// rodata: jtbl_802437B8_BAD8F8

s32 pad_0037F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
