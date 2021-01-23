#include "flo_15.h"

Script N(script_80240060);
s32 pad_00011C[1];
Script N(script_ExitWalk_80240120);
Script N(script_8024017C);
Script N(main);
s32 pad_0002FC[1];
Script N(script_8024032C);
Script N(script_802404D8);
Script N(script_Aux_8024079C);
Script N(script_8024094C);
Script N(script_Interact_80240B28);
Script N(script_Init_80240CD0);
Script N(script_Init_80240DB4);
StaticNpc N(npcGroup_80240EE0)[2];
NpcGroupList N(npcGroupList_802412C0);
s32 pad_0012D8[2];
Script N(script_802412E0);
Script N(script_MakeEntities);
s32 pad_00135C[1];
s32 N(intTable_80241360)[20];
Script N(script_802413B0);
const char D_80241760_CD1E20[8]; // "flo_13"
const char D_80241768_CD1E28[8]; // "flo_00"

EntryList N(entryList) = {
    { 320.0f, 0.0f, 0.0f, 270.0f },
    { -170.0f, 0.0f, 55.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19011F,
};

Script N(script_80240060) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetMusicTrack(0, 127, 0, 8);
    } else {
        match SI_SAVE_VAR(0) {
            < 53 {
                SetMusicTrack(0, 52, 0, 8);
            }
            else {
                SetMusicTrack(0, 53, 0, 8);
            }
        }
    }
});

s32 pad_00011C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240120) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241760_CD1E20, 1);
    sleep 100;
});

Script N(script_8024017C) = SCRIPT({
    bind N(script_ExitWalk_80240120) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802412C0));
    await N(script_MakeEntities);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn N(script_802404D8);
    } else {
        ModifyColliderFlags(0, 1, 0x7FFFFE00);
        SI_VAR(0) = N(script_8024017C);
        spawn EnterWalk;
    }
    ModifyColliderFlags(0, 14, 0x7FFFFE00);
    spawn N(script_802413B0);
    await N(script_80240060);
});

s32 pad_0002FC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240300) = {
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

Script N(script_8024032C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 53) {
        SI_VAR(3) = 7;
        SI_VAR(4) = 5;
    } else {
        SI_VAR(3) = 15;
        SI_VAR(4) = 1;
    }
    loop {
        SI_VAR(5) = SI_VAR(3);
        loop SI_VAR(5) {
            GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(11, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep SI_VAR(4);
        }
        SI_VAR(5) = SI_VAR(3);
        loop SI_VAR(5) {
            GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += -1;
            SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(11, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep SI_VAR(4);
        }
    }
});

Script N(script_802404D8) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetNpcPos(10, 0, 270, 0);
    SetNpcPos(11, 0, 0xFFFFFC18, 0);
    sleep 1;
    GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 1050);
    SetCamPitch(0, 10.0, 4.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetCamDistance(0, 300);
    SetCamPitch(0, 15.0, -10.0);
    SetCamSpeed(0, 6.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(10, 0xCB0009, 0xCB0009, 517, 0x1100C3);
    SetNpcAnimation(10, 0xCB0009);
    spawn {
        SetCamDistance(0, 1000);
        SetCamSpeed(0, 5.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    sleep 15;
    SetNpcJumpscale(10, 0.0);
    GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 400;
    NpcJump0(10, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40);
    GotoMap(D_80241768_CD1E28, 9);
    sleep 70;
});

Script N(script_Aux_8024079C) = SCRIPT({
    func_802CDE68(11, 48);
    loop {
        MakeLerp(0xFFFFFFE2, 30, 20, 11);
        loop {
            UpdateLerp();
            SetNpcRotation(11, 0, 0, SI_VAR(0));
            GetNpcPos(10, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            SetNpcPos(11, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(30, 0xFFFFFFE2, 20, 11);
        loop {
            UpdateLerp();
            SetNpcRotation(11, 0, 0, SI_VAR(0));
            GetNpcPos(10, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            SetNpcPos(11, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(script_8024094C) = SCRIPT({
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(1) > 220) {
            break;
        }
    }
    spawn {
        sleep 15;
        PlayerFaceNpc(10, 0);
    }
    SetNpcJumpscale(10, 0.0);
    GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 400;
    NpcJump0(10, SI_VAR(0), 275, SI_VAR(2), 30);
    SI_VAR(9) = spawn N(script_8024032C);
    loop {
        sleep 1;
        if (SI_AREA_FLAG(38) == 1) {
            break;
        }
    }
    DisablePlayerInput(1);
    sleep 10;
    kill SI_VAR(9);
    SetNpcFlagBits(10, 256, 1);
    GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(10, SI_VAR(0), 450, SI_VAR(2), 30);
    DisablePlayerInput(0);
    unbind;
});

Script N(script_Interact_80240B28) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 50 {
            SpeakToPlayer(10, 0xCB0007, 0xCB0001, 517, 0x11009A);
            SetPlayerAnimation(0x10021);
            sleep 20;
            SetPlayerAnimation(0x80007);
            sleep 20;
            SetPlayerAnimation(0x10002);
            SpeakToPlayer(10, 0xCB0007, 0xCB0001, 517, 0x11009B);
            SI_SAVE_VAR(0) = 50;
        }
        < 53 {
            SpeakToPlayer(10, 0xCB0007, 0xCB0001, 517, 0x11009C);
        }
        < 57 {
            if (SI_SAVE_FLAG(1410) == 0) {
                SpeakToPlayer(10, 0xCB0007, 0xCB0001, 517, 0x11009D);
                SI_SAVE_FLAG(1410) = 1;
            } else {
                SpeakToPlayer(10, 0xCB0007, 0xCB0001, 517, 0x11009E);
            }
        }
        else {
            SpeakToPlayer(10, 0xCB0007, 0xCB0001, 517, 0x11009F);
        }
    }
    SI_AREA_FLAG(38) = 1;
});

Script N(script_Init_80240CD0) = SCRIPT({
    SetNpcCollisionSize(10, 64, 40);
    EnableNpcShadow(10, 0);
    if (SI_SAVE_VAR(0) < 53) {
        SetNpcPos(10, 0, 270, 0);
        BindNpcInteract(-1, N(script_Interact_80240B28));
        spawn N(script_8024032C);
    } else {
        SetNpcPos(10, 0, 450, 0);
        BindNpcInteract(-1, N(script_Interact_80240B28));
        SI_AREA_FLAG(38) = 0;
        spawn N(script_8024094C);
    }
});

Script N(script_Init_80240DB4) = SCRIPT({
    EnableNpcShadow(11, 0);
    SetNpcAnimation(11, 0xCB0002);
    func_802CFE80(10, 3);
    func_802CFE80(11, 3);
    func_802CFFC0(10, 0, 1, 5, 5, 13, 5, 0, 0);
    func_802CFFC0(11, 0, 1, 5, 5, 13, 5, 0, 0);
    if (SI_SAVE_VAR(0) < 53) {
        SetNpcPos(11, 0, 270, 0xFFFFFFFB);
    } else {
        SetNpcPos(11, 0, 450, 0xFFFFFFFB);
        BindNpcAux(-1, N(script_Aux_8024079C));
    }
});

StaticNpc N(npcGroup_80240EE0)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80240300),
        .pos = { 0.0, 250.0, 0.0 },
        .flags = 0x00400D01,
        .init = N(script_Init_80240CD0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001,
        },
        .tattle = 0x1A00E1,
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80240300),
        .pos = { 0.0, 250.0, 0.0 },
        .flags = 0x00008F01,
        .init = N(script_Init_80240DB4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001, 0x00CB0001,
        },
        .tattle = 0x1A00E1,
    },
};

NpcGroupList N(npcGroupList_802412C0) = {
    NPC_GROUP(N(npcGroup_80240EE0), 0x00000000),
    {},
};

s32 pad_0012D8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802412E0) = SCRIPT({
    SI_SAVE_FLAG(1401) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1401) == 0) {
        MakeEntity(D_802BCF00, 0xFFFFFF4C, 0, 0xFFFFFFEE, 0, 0x80000000);
        AssignScript(N(script_802412E0));
    }
});

s32 pad_00135C[] = {
    0x00000000,
};

s32 N(intTable_80241360)[] = {
    0x0000000A, 0xF24A7CE7, 0x0000000D, 0xF24A7D80, 0x00000010, 0xF24A7E1A, 0x00000013, 0xF24A7EB4,
    0x00000016, 0xF24A7F4D, 0x00000019, 0xF24A7EB4, 0x00000018, 0xF24A7E1A, 0x00000019, 0xF24A7D80,
    0x00000018, 0xF24A7CE7, 0x0000000A, 0xF24A814D,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802413B0) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1401), 0),
        SI_CMD(ScriptOpcode_LABEL, 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1401), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241360)),
            SI_CMD(ScriptOpcode_LOOP, 10),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(1), SI_VAR(2)),
                SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 0xFFFFFF56, 0, 35),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 0xFFFFFF56, 0, 35),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, 600),
        SI_CMD(ScriptOpcode_CALL, SetCamPitch, 0, SI_FIXED(25.0), SI_FIXED(-9.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamPosA, 0, SI_FIXED(-50.0), SI_FIXED(25.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(1.5)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
        SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 100),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 4, 0xFFFFFF4C, 0, 0xFFFFFFF1, 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 4, 0xFFFFFF42, 0, 0xFFFFFFDD, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_LOOP, 6),
                SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 11, 391, 0),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFCE, 120, 2),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, UpdateLerp),
            SI_CMD(ScriptOpcode_CALL, TranslateGroup, 16, 0, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 12, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 14, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
        SI_CMD(ScriptOpcode_CALL, ResetCam, 0, SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 12, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 1, 14, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, TranslateGroup, 16, 0, 0xFFFFFFCE, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// rodata: D_80241760_CD1E20

// rodata: D_80241768_CD1E28
