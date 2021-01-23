#include "mim_06.h"

s32 pad_000068[2];
s32 pad_00056C[1];
s32 pad_002D28[2];
Script N(script_80242DB0);
s32 pad_002DEC[1];
Script N(script_ExitWalk_80242DF0);
Script N(script_ExitWalk_80242E4C);
Script N(script_ExitWalk_80242EA8);
Script N(script_ExitWalk_80242F04);
Script N(script_80242F60);
Script N(main);
s32 unk_missing_80243114[7];
s32 N(intTable_80243130)[6];
s32 N(intTable_80243148)[6];
s32 N(intTable_80243160)[6];
s32 N(intTable_80243178)[6];
Script N(script_80243190);
Script N(script_80243398);
Script N(script_80243740);
Script N(script_80243828);
Script N(script_80243910);
Script N(script_802439F8);
s32 pad_003B68[2];
Script N(script_80243B70);
Script N(script_80243E04);
Script N(script_80243F24);
Script N(script_80243FF4);
Script N(script_80244620);
Script N(script_8024469C);
Script N(script_80244718);
Script N(script_80244794);
Script N(script_80244810);
s32 pad_0049E8[2];
Script N(script_802449F0);
Script N(script_NpcAI_80244ADC);
Script N(script_NpcAI_80244BDC);
Script N(script_80244C5C);
Script N(script_NpcAI_80244D44);
StaticNpc N(npcGroup_80244DAC)[2];
StaticNpc N(npcGroup_8024518C)[2];
StaticNpc N(npcGroup_8024556C)[1];
NpcGroupList N(npcGroupList_8024575C);
s32 pad_00578C[1];
const char D_80245790_BA9F10[8]; // "mim_07"
const char D_80245798_BA9F18[8]; // "mim_01"
const char D_802457A0_BA9F20[8]; // "mim_05"
s32 pad_0057A8[2];
s32 pad_0059BC[1];

// text: func_80240000_BA4780

s32 pad_000068[] = {
    0x00000000, 0x00000000,
};

// text: func_80240070_BA47F0

// text: func_802403F0_BA4B70

// text: func_802404F8_BA4C78

s32 pad_00056C[] = {
    0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240778_BA4EF8

// text: func_8024092C_BA50AC

// text: func_80240B8C_BA530C

// text: func_80240E40_BA55C0

// text: func_80240EAC_BA562C

// text: func_80240FA8_BA5728

// text: func_802419E8_BA6168

// text: func_80241A78_BA61F8

// text: func_80241B78_BA62F8

// text: func_80241BD8_BA6358

// text: func_80241CC4_BA6444

// text: func_80241F14_BA6694

// text: func_80242144_BA68C4

// text: N(UnkNpcAIFunc1)

// text: func_8024253C_BA6CBC

// text: func_802426E0_BA6E60

// text: func_802427C0_BA6F40

// text: N(UnkDurationCheck)

// text: func_80242B04_BA7284

s32 pad_002D28[] = {
    0x00000000, 0x00000000,
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
    .tattle = 0x1900AC,
};

Script N(script_80242DB0) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_002DEC[] = {
    0x00000000,
};

Script N(script_ExitWalk_80242DF0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245790_BA9F10, 2);
    sleep 100;
});

Script N(script_ExitWalk_80242E4C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245798_BA9F18, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242EA8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80245798_BA9F18, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242F04) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802457A0_BA9F20, 1);
    sleep 100;
});

Script N(script_80242F60) = SCRIPT({
    bind N(script_ExitWalk_80242DF0) to 0x80000 1;
    bind N(script_ExitWalk_80242E4C) to 0x80000 16;
    bind N(script_ExitWalk_80242EA8) to 0x80000 11;
    bind N(script_ExitWalk_80242F04) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70005);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_80244810);
    MakeNpcs(1, N(npcGroupList_8024575C));
    SI_VAR(0) = N(script_80242F60);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80242DB0);
    await N(script_802439F8);
    func_80240000_BA4780();
    SetCamSpeed(0, 3.0);
});

s32 unk_missing_80243114[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

s32 N(intTable_80243130)[] = {
    0x0000005A, 0x0000005B, 0x0000005D, 0x0000005E, 0x00000060, 0x00000061,
};

s32 N(intTable_80243148)[] = {
    0x00000050, 0x00000051, 0x00000053, 0x00000054, 0x00000056, 0x00000057,
};

s32 N(intTable_80243160)[] = {
    0x00000046, 0x00000047, 0x00000049, 0x0000004A, 0x0000004C, 0x0000004D,
};

s32 N(intTable_80243178)[] = {
    0x0000003C, 0x0000003D, 0x0000003F, 0x00000040, 0x00000042, 0x00000043,
};

Script N(script_80243190) = SCRIPT({
    RandInt(20, SI_VAR(0));
    SI_VAR(0) += 1;
    sleep SI_VAR(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(3) = 1.0;
    RandInt(20, SI_VAR(12));
    SI_VAR(12) -= 10;
    loop 60 {
        SI_VAR(0) += SI_VAR(12);
        func_802404F8_BA4C78(SI_VAR(0), SI_VAR(2));
        SI_VAR(1) -= 1;
        TranslateModel(SI_VAR(10), 0, SI_VAR(1), SI_VAR(2));
        func_802403F0_BA4B70(SI_VAR(10), SI_VAR(7), SI_VAR(8), SI_VAR(9));
        RotateModel(SI_VAR(10), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
        ScaleModel(SI_VAR(10), SI_VAR(3), SI_VAR(3), SI_VAR(3));
        TranslateModel(SI_VAR(11), 0, SI_VAR(1), SI_VAR(2));
        func_802403F0_BA4B70(SI_VAR(10), SI_VAR(7), SI_VAR(8), SI_VAR(9));
        RotateModel(SI_VAR(11), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9));
        ScaleModel(SI_VAR(11), SI_VAR(3), SI_VAR(3), SI_VAR(3));
        SI_VAR(3) *= 0.9658203125;
        sleep 2;
    }
    EnableModel(SI_VAR(10), 0);
    EnableModel(SI_VAR(11), 0);
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80243398) = {
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 0, 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 0, 0, 0, 0xFFFF0000),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 8283, 0, 0xFFFFFFF6, 0, 0xFFFFFED4),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 30, 50, 10),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243130)),
    SI_CMD(ScriptOpcode_LOOP, 3),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, func_802403F0_BA4B70, SI_VAR(2), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(2), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(3), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 8283),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 30, 0xFFFFFFE2, 50, 10),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243130)),
    SI_CMD(ScriptOpcode_LOOP, 3),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, func_802403F0_BA4B70, SI_VAR(2), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(2), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(3), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 8283),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFE2, 0, 50, 10),
    SI_CMD(ScriptOpcode_LABEL, 20),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243130)),
    SI_CMD(ScriptOpcode_LOOP, 3),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, func_802403F0_BA4B70, SI_VAR(2), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(2), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(3), SI_VAR(0), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 20),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 0, 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
Script N(script_80243740) = {
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 1, 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 1, 0, 0, 0xFFFF0000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 8284, 0, 0xFFFFFED4, 0, 0xFFFFFFF6),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243148)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

// Unable to use DSL: DSL does not support script opcode 0x30
Script N(script_80243828) = {
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 2, 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 2, 0, 0, 0xFFFF0000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 8284, 0, 10, 0, 300),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243160)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

// Unable to use DSL: DSL does not support script opcode 0x30
Script N(script_80243910) = {
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 3, 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, 3, 0, 0, 0xFFFF0000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 8284, 0, 300, 0, 0xFFFFFFF6),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80243178)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(10), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243190)),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802439F8) = SCRIPT({
    SetTexPanner(91, 0);
    SetTexPanner(94, 0);
    SetTexPanner(97, 0);
    SetTexPanner(81, 1);
    SetTexPanner(84, 1);
    SetTexPanner(87, 1);
    SetTexPanner(71, 2);
    SetTexPanner(74, 2);
    SetTexPanner(77, 2);
    SetTexPanner(61, 3);
    SetTexPanner(64, 3);
    SetTexPanner(67, 3);
    bind N(script_80243398) to TriggerFlag_WALL_INTERACT 21;
    bind N(script_80243740) to TriggerFlag_WALL_INTERACT 27;
    bind N(script_80243828) to TriggerFlag_WALL_INTERACT 25;
    bind N(script_80243910) to TriggerFlag_WALL_INTERACT 23;
});

s32 pad_003B68[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243B70) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(7, 1);
            SetZoneEnabled(2, 0);
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

Script N(script_80243E04) = SCRIPT({
    ParentColliderToModel(33, 152);
    RotateGroup(154, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(33);
    ParentColliderToModel(37, 158);
    RotateGroup(160, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(37);
    ParentColliderToModel(35, 155);
    RotateGroup(157, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(35);
    ParentColliderToModel(39, 161);
    RotateGroup(163, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(39);
});

Script N(script_80243F24) = SCRIPT({
    RotateGroup(154, 0, 0, 1, 0);
    UpdateColliderTransform(33);
    RotateGroup(160, 0, 0, 1, 0);
    UpdateColliderTransform(37);
    RotateGroup(157, 0, 0, 1, 0);
    UpdateColliderTransform(35);
    RotateGroup(163, 0, 0, 1, 0);
    UpdateColliderTransform(39);
});

Script N(script_80243FF4) = SCRIPT({
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
            spawn N(script_80243B70);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_80243F24);
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
            spawn N(script_80243B70);
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
            spawn N(script_80243B70);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_80243F24);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_80244620) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 33;
    SI_VAR(10) = 154;
    await N(script_80243FF4);
    DisablePlayerInput(0);
});

Script N(script_8024469C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 37;
    SI_VAR(10) = 160;
    await N(script_80243FF4);
    DisablePlayerInput(0);
});

Script N(script_80244718) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 35;
    SI_VAR(10) = 157;
    await N(script_80243FF4);
    DisablePlayerInput(0);
});

Script N(script_80244794) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 39;
    SI_VAR(10) = 163;
    await N(script_80243FF4);
    DisablePlayerInput(0);
});

Script N(script_80244810) = SCRIPT({
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
    await N(script_80243B70);
    spawn N(script_80243E04);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_80244620) to TriggerFlag_WALL_INTERACT 33;
    bind N(script_8024469C) to TriggerFlag_WALL_INTERACT 37;
    bind N(script_80244794) to TriggerFlag_WALL_INTERACT 39;
    bind N(script_80244718) to TriggerFlag_WALL_INTERACT 35;
});

s32 pad_0049E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802449F0) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
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

NpcAISettings N(aISettings_80244AAC) = {
    .moveSpeed = 0.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80244ADC) = SCRIPT({
    SetSelfVar(7, 0);
    SetSelfVar(8, 12);
    SetSelfVar(9, 11);
    SetSelfVar(10, 14);
    SetSelfVar(11, 9);
    SetSelfVar(12, 25);
    SetSelfVar(13, -1);
    SetSelfVar(14, 10);
    SetSelfVar(15, 15);
    func_80241CC4_BA6444(N(aISettings_80244AAC));
});

NpcSettings N(npcSettings_80244BB0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x1A,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244ADC),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244BDC) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 10);
    SetSelfVar(1, 18);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_8024092C_BA50AC();
});

Script N(script_80244C5C) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await func_800936DC;
        }
    }
});

NpcSettings N(npcSettings_80244CE8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x12,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244BDC),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802449F0),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0x8,
};

NpcAISettings N(aISettings_80244D14) = {
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

Script N(script_NpcAI_80244D44) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80242B04_BA7284(N(aISettings_80244D14), 1);
});

NpcSettings N(npcSettings_80244D80) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244D44),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80244DAC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244BB0),
        .pos = { -240.0, 0.0, -240.0 },
        .flags = 0x00000000,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80244CE8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
};

StaticNpc N(npcGroup_8024518C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80244BB0),
        .pos = { 240.0, 0.0, -240.0 },
        .flags = 0x00000000,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80244CE8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370001, 0x00370009, 0x00370009, 0x00370004, 0x00370003, 0x00370007, 0x00370007, 0x00370008, 0x00370001, 0x00370001, 0x00370001,
        },
    },
};

StaticNpc N(npcGroup_8024556C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80244D80),
        .pos = { -140.0, 0.0, 300.0 },
        .flags = 0x00000400,
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

NpcGroupList N(npcGroupList_8024575C) = {
    NPC_GROUP(N(npcGroup_80244DAC), 0x0D0D0001),
    NPC_GROUP(N(npcGroup_8024518C), 0x0D0E0001),
    NPC_GROUP(N(npcGroup_8024556C), 0x0D070001),
    {},
};

s32 pad_00578C[] = {
    0x00000000,
};

// rodata: D_80245790_BA9F10

// rodata: D_80245798_BA9F18

// rodata: D_802457A0_BA9F20

s32 pad_0057A8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802457B0_BA9F30

// rodata: jtbl_802457B8_BA9F38

// rodata: D_80245948_BAA0C8

// rodata: D_80245950_BAA0D0

// rodata: D_80245958_BAA0D8

// rodata: D_80245960_BAA0E0

// rodata: D_80245968_BAA0E8

// rodata: D_80245970_BAA0F0

// rodata: D_80245978_BAA0F8

// rodata: jtbl_80245980_BAA100

s32 pad_0059BC[] = {
    0x00000000,
};
