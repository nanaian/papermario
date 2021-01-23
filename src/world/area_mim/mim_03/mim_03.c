#include "mim_03.h"

s32 pad_000528[2];
Script N(script_802405B0);
s32 pad_0005EC[1];
Script N(script_ExitWalk_802405F0);
Script N(script_ExitWalk_8024064C);
Script N(script_ExitWalk_802406A8);
Script N(script_ExitWalk_80240704);
Script N(script_80240760);
Script N(main);
s32 pad_0009AC[1];
Script N(script_802409B0);
s32 N(unk_802409C0)[6];
s32 N(unk_802409D8)[8];
s32 N(unk_802409F8)[6];
s32 N(unk_80240A10)[6];
Script N(script_80240A28);
Script N(script_80240BC8);
Script N(script_80240F0C);
Script N(script_80240F68);
Script N(script_80240FC4);
Script N(script_80241020);
Script N(script_8024107C);
Script N(script_80241200);
Script N(script_80241494);
Script N(script_802415B4);
Script N(script_80241684);
Script N(script_80241CB0);
Script N(script_80241D2C);
Script N(script_80241DA8);
Script N(script_80241E24);
Script N(script_80241EA0);
s32 pad_002078[2];
Script N(script_Interact_802420AC);
Script N(script_Init_80242294);
StaticNpc N(npcGroup_802422B8)[1];
NpcGroupList N(npcGroupList_802424A8);
const char D_802424C0_B9D940[8]; // "mim_01"
const char D_802424C8_B9D948[8]; // "mim_04"
const char D_802424D0_B9D950[8]; // "mim_02"
s32 pad_0024D8[2];

// text: func_80240000_B9B480

// text: func_80240068_B9B4E8

// text: func_802400A0_B9B520

// text: func_80240420_B9B8A0

s32 pad_000528[] = {
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
    .tattle = 0x1900A9,
};

Script N(script_802405B0) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_0005EC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802405F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802424C0_B9D940, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024064C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802424C8_B9D948, 3);
    sleep 100;
});

Script N(script_ExitWalk_802406A8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802424D0_B9D950, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240704) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802424C0_B9D940, 1);
    sleep 100;
});

Script N(script_80240760) = SCRIPT({
    bind N(script_ExitWalk_802405F0) to 0x80000 1;
    bind N(script_ExitWalk_8024064C) to 0x80000 16;
    bind N(script_ExitWalk_802406A8) to 0x80000 11;
    bind N(script_ExitWalk_80240704) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70002);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    SI_AREA_FLAG(2) = 0;
    await N(script_80241EA0);
    MakeNpcs(1, N(npcGroupList_802424A8));
    await N(script_802409B0);
    SI_VAR(0) = N(script_80240760);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_802405B0);
    await N(script_8024107C);
    func_80240000_B9B480();
    spawn {
    0:
        WaitForCam(0, 1.0);
        func_80240068_B9B4E8();
        if (SI_VAR(0) < 350) {
            SetCamSpeed(0, 1.0);
        } else {
            SetCamSpeed(0, 3.0);
        }
        goto 0;
    }
});

s32 pad_0009AC[] = {
    0x00000000,
};

Script N(script_802409B0) = SCRIPT({

});

s32 N(unk_802409C0)[] = {
    0x0000003B, 0x0000003C, 0x0000003E, 0x0000003F, 0x00000041, 0x00000042,
};

s32 N(unk_802409D8)[] = {
    0x00000059, 0x0000005A, 0x0000005C, 0x0000005D, 0x0000005F, 0x00000060, 0x00000062, 0x00000063,
};

s32 N(unk_802409F8)[] = {
    0x0000004F, 0x00000050, 0x00000052, 0x00000053, 0x00000055, 0x00000056,
};

s32 N(unk_80240A10)[] = {
    0x00000045, 0x00000046, 0x00000048, 0x00000049, 0x0000004B, 0x0000004C,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80240A28) = {
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(9), 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(9), 0, 0, 0xFFFF0000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 720, 200, 10),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(8)),
    SI_CMD(ScriptOpcode_LOOP, 3),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(6), SI_VAR(7)),
        SI_CMD(ScriptOpcode_CALL, func_80240420_B9B8A0, SI_VAR(6), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(6), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(7), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(9), 0, 0, 0xFFFF8000),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(9), 0, 0, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80240BC8) = {
    SI_CMD(ScriptOpcode_LOOP, 2),
        SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(9), 0, 0, 0xFFFF8000),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 30, 50, 10),
        SI_CMD(ScriptOpcode_LABEL, 5),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(8)),
        SI_CMD(ScriptOpcode_LOOP, 4),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(6), SI_VAR(7)),
            SI_CMD(ScriptOpcode_CALL, func_80240420_B9B8A0, SI_VAR(6), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(6), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(7), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
            SI_CMD(ScriptOpcode_GOTO, 5),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 30, 0xFFFFFFE2, 50, 10),
        SI_CMD(ScriptOpcode_LABEL, 10),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(8)),
        SI_CMD(ScriptOpcode_LOOP, 4),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(6), SI_VAR(7)),
            SI_CMD(ScriptOpcode_CALL, func_80240420_B9B8A0, SI_VAR(6), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(6), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(7), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
            SI_CMD(ScriptOpcode_GOTO, 10),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFE2, 0, 50, 10),
        SI_CMD(ScriptOpcode_LABEL, 20),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(8)),
        SI_CMD(ScriptOpcode_LOOP, 4),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(6), SI_VAR(7)),
            SI_CMD(ScriptOpcode_CALL, func_80240420_B9B8A0, SI_VAR(6), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(6), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
            SI_CMD(ScriptOpcode_CALL, RotateModel, SI_VAR(7), SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
            SI_CMD(ScriptOpcode_GOTO, 20),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, SetTexPanOffset, SI_VAR(9), 0, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80240F0C) = SCRIPT({
    PlaySoundAt(8281, 0, 0, 0, 0xFFFFFED4);
    SI_VAR(8) = N(unk_802409C0);
    SI_VAR(9) = 0;
    await N(script_80240A28);
});

Script N(script_80240F68) = SCRIPT({
    PlaySoundAt(8282, 0, 0xFFFFFED4, 0, 0);
    SI_VAR(8) = N(unk_802409D8);
    SI_VAR(9) = 1;
    await N(script_80240BC8);
});

Script N(script_80240FC4) = SCRIPT({
    PlaySoundAt(8281, 0, 0, 0, 300);
    SI_VAR(8) = N(unk_802409F8);
    SI_VAR(9) = 2;
    await N(script_80240A28);
});

Script N(script_80241020) = SCRIPT({
    PlaySoundAt(8281, 0, 300, 0, 0);
    SI_VAR(8) = N(unk_80240A10);
    SI_VAR(9) = 3;
    await N(script_80240A28);
});

Script N(script_8024107C) = SCRIPT({
    SetTexPanner(60, 0);
    SetTexPanner(63, 0);
    SetTexPanner(66, 0);
    SetTexPanner(90, 1);
    SetTexPanner(93, 1);
    SetTexPanner(96, 1);
    SetTexPanner(99, 1);
    SetTexPanner(80, 2);
    SetTexPanner(83, 2);
    SetTexPanner(86, 2);
    SetTexPanner(70, 3);
    SetTexPanner(73, 3);
    SetTexPanner(76, 3);
    bind N(script_80240F68) to TriggerFlag_WALL_INTERACT 27;
    bind N(script_80240F0C) to TriggerFlag_WALL_INTERACT 28;
    bind N(script_80240FC4) to TriggerFlag_WALL_INTERACT 30;
    bind N(script_80241020) to TriggerFlag_WALL_INTERACT 29;
});

Script N(script_80241200) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(11, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(6, 0);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 0;
        }
        == 1 {
            SetZoneEnabled(11, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(6, 0);
            SetZoneEnabled(0, 1);
            SI_VAR(1) = 1;
        }
        == 2 {
            SetZoneEnabled(11, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(3, 1);
            SetZoneEnabled(4, 1);
            SetZoneEnabled(5, 1);
            SetZoneEnabled(6, 1);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 2;
        }
    }
});

Script N(script_80241494) = SCRIPT({
    ParentColliderToModel(35, 152);
    RotateGroup(154, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(35);
    ParentColliderToModel(39, 158);
    RotateGroup(160, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(39);
    ParentColliderToModel(37, 155);
    RotateGroup(157, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(37);
    ParentColliderToModel(41, 161);
    RotateGroup(163, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(41);
});

Script N(script_802415B4) = SCRIPT({
    RotateGroup(154, 0, 0, 1, 0);
    UpdateColliderTransform(35);
    RotateGroup(160, 0, 0, 1, 0);
    UpdateColliderTransform(39);
    RotateGroup(157, 0, 0, 1, 0);
    UpdateColliderTransform(37);
    RotateGroup(163, 0, 0, 1, 0);
    UpdateColliderTransform(41);
});

Script N(script_80241684) = SCRIPT({
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
            spawn N(script_80241200);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_802415B4);
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
            spawn N(script_80241200);
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
            spawn N(script_80241200);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_802415B4);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_80241CB0) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 35;
    SI_VAR(10) = 154;
    await N(script_80241684);
    DisablePlayerInput(0);
});

Script N(script_80241D2C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 39;
    SI_VAR(10) = 160;
    await N(script_80241684);
    DisablePlayerInput(0);
});

Script N(script_80241DA8) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 37;
    SI_VAR(10) = 157;
    await N(script_80241684);
    DisablePlayerInput(0);
});

Script N(script_80241E24) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 41;
    SI_VAR(10) = 163;
    await N(script_80241684);
    DisablePlayerInput(0);
});

Script N(script_80241EA0) = SCRIPT({
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
    await N(script_80241200);
    spawn N(script_80241494);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_80241CB0) to TriggerFlag_WALL_INTERACT 35;
    bind N(script_80241D2C) to TriggerFlag_WALL_INTERACT 39;
    bind N(script_80241E24) to TriggerFlag_WALL_INTERACT 41;
    bind N(script_80241DA8) to TriggerFlag_WALL_INTERACT 37;
});

s32 pad_002078[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242080) = {
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

Script N(script_Interact_802420AC) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFDC {
            if (SI_AREA_FLAG(2) == 0) {
                SpeakToPlayer(-1, 0xBE0002, 0xBE0001, 0, 0xE0009);
                SI_AREA_FLAG(2) = 1;
            } else {
                SpeakToPlayer(-1, 0xBE0002, 0xBE0001, 0, 0xE000A);
                SI_AREA_FLAG(2) = 0;
            }
        }
        < 11 {
            if (SI_AREA_FLAG(2) == 0) {
                SpeakToPlayer(-1, 0xBE0002, 0xBE0001, 0, 0xE000B);
                SI_AREA_FLAG(2) = 1;
            } else {
                SpeakToPlayer(-1, 0xBE0002, 0xBE0001, 0, 0xE000C);
                SI_AREA_FLAG(2) = 0;
            }
        }
        >= 11 {
            if (SI_AREA_FLAG(2) == 0) {
                SpeakToPlayer(-1, 0xBE0002, 0xBE0001, 0, 0xE000D);
                SI_AREA_FLAG(2) = 1;
            } else {
                SpeakToPlayer(-1, 0xBE0002, 0xBE0001, 0, 0xE000E);
                SI_AREA_FLAG(2) = 0;
            }
        }
    }
    DisablePlayerInput(0);
});

Script N(script_Init_80242294) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802420AC));
});

StaticNpc N(npcGroup_802422B8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242080),
        .pos = { 0.0, 32.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80242294),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001,
        },
        .tattle = 0x1A00A1,
    },
};

NpcGroupList N(npcGroupList_802424A8) = {
    NPC_GROUP(N(npcGroup_802422B8), 0x00000000),
    {},
};

// rodata: D_802424C0_B9D940

// rodata: D_802424C8_B9D948

// rodata: D_802424D0_B9D950

s32 pad_0024D8[] = {
    0x00000000, 0x00000000,
};
