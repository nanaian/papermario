#include "obk_08.h"

s32 pad_000838[2];
s32 pad_000894[3];
s32 pad_001214[3];
s32 pad_00179C[1];
Script N(script_802417F0);
s32 pad_001858[2];
Script N(script_80241860);
Script N(script_802418BC);
Script N(script_80241970);
Script N(main);
Script N(script_80241B40);
Script N(script_80241CD4);
Script N(script_80241F20);
s32 N(intTable_8024207C)[32];
s32 N(intTable_802420FC)[32];
Script N(script_8024217C);
Script N(script_8024224C);
Script N(script_8024231C);
Script N(script_8024240C);
Script N(script_802427A4);
Script N(script_80242B3C);
Script N(script_80242BF0);
s32 pad_002C54[3];
Script N(script_80242C60);
Script N(script_80242FA8);
Script N(script_80243298);
Script N(script_MakeEntities);
s32 pad_00355C[1];
Script N(script_Idle_8024358C);
Script N(script_Idle_802435E4);
Script N(script_8024363C);
Script N(script_Hit_802436D0);
Script N(script_Hit_8024375C);
Script N(script_Hit_802437E8);
Script N(script_Hit_80243874);
Script N(script_Hit_80243900);
Script N(script_Hit_8024398C);
Script N(script_Hit_80243A18);
Script N(script_Hit_80243AA4);
Script N(script_Init_80243B30);
Script N(script_Init_80243B7C);
Script N(script_Init_80243BDC);
Script N(script_Init_80243C3C);
Script N(script_Init_80243C9C);
Script N(script_Init_80243CFC);
Script N(script_Init_80243D5C);
Script N(script_Init_80243DBC);
Script N(script_Init_80243E1C);
StaticNpc N(npcGroup_80243E7C)[1];
StaticNpc N(npcGroup_8024406C)[1];
StaticNpc N(npcGroup_8024425C)[1];
StaticNpc N(npcGroup_8024444C)[1];
StaticNpc N(npcGroup_8024463C)[1];
StaticNpc N(npcGroup_8024482C)[1];
StaticNpc N(npcGroup_80244A1C)[1];
StaticNpc N(npcGroup_80244C0C)[1];
StaticNpc N(npcGroup_80244DFC)[1];
s32 N(shortTable_80244FEC)[2];
Script N(script_Idle_80244FF4);
Script N(script_Init_802450A0);
Script N(script_Init_802450C4);
StaticNpc N(npcGroup_802450E8)[2];
Script N(script_Init_802454C8);
Script N(script_Init_802454D8);
StaticNpc N(npcGroup_80245500)[2];
NpcGroupList N(npcGroupList_802458E0);
Script N(script_80245970);
Script N(script_80245A90);
Script N(script_80245B28);
Script N(script_80245C34);
const char D_80246EC0_BDA730[8]; // "obk_01"
s32 pad_006F38[2];

// text: func_80240000_BD3870

// text: func_802403DC_BD3C4C

// text: func_802404F0_BD3D60

// text: func_8024055C_BD3DCC

// text: func_8024061C_BD3E8C

// text: func_802406DC_BD3F4C

// text: func_8024079C_BD400C

// text: func_80240808_BD4078

s32 pad_000838[] = {
    0x00000000, 0x00000000,
};

// text: func_80240840_BD40B0

// text: func_80240870_BD40E0

s32 pad_000894[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802408A0_BD4110

// text: func_80240920_BD4190

// text: func_802409E8_BD4258

// text: func_80240A7C_BD42EC

// text: func_80240AF0_BD4360

// text: func_80240CA0_BD4510

// text: func_80240D10_BD4580

// text: func_80240FD8_BD4848

// text: func_80240FE4_BD4854

// text: func_8024116C_BD49DC

s32 pad_001214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80241220_BD4A90

// text: func_802412BC_BD4B2C

// text: func_80241300_BD4B70

// text: func_80241658_BD4EC8

s32 pad_00179C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -68.0f, 0.0f, 235.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900B9,
};

Script N(script_802417F0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

s32 pad_001858[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241860) = SCRIPT({
    GetEntryID(SI_VAR(0));
    SI_VAR(2) = 57;
    SI_VAR(4) = 58;
    SI_VAR(3) = 1;
    await 0x80285E24;
});

Script N(script_802418BC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 3;
    SI_VAR(2) = 57;
    SI_VAR(4) = 58;
    SI_VAR(3) = 1;
    spawn 0x80285DFC;
    sleep 17;
    GotoMap(D_80246EC0_BDA730, 4);
    sleep 100;
});

Script N(script_80241970) = SCRIPT({
    SetTexPanner(83, 0);
    SetTexPanner(84, 0);
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
    MakeNpcs(0, N(npcGroupList_802458E0));
    await N(script_MakeEntities);
    SI_AREA_FLAG(8) = 0;
    spawn N(script_80242B3C);
    spawn N(script_80243298);
    spawn N(script_80241970);
    bind N(script_802418BC) to TriggerFlag_WALL_INTERACT 3;
    spawn N(script_80241860);
    spawn N(script_802417F0);
});

Script N(script_80241B40) = SCRIPT({
    GetCurrentPartnerID(SI_VAR(0));
    match SI_VAR(0) {
        == 1 {
            SI_VAR(10) = 0x10003;
            SI_VAR(11) = 0x10001;
        }
        == 2 {
            SI_VAR(10) = 0x20005;
            SI_VAR(11) = 0x20003;
        }
        == 3 {
            SI_VAR(10) = 0x30007;
            SI_VAR(11) = 0x30003;
        }
        == 4 {
            SI_VAR(10) = 0x40003;
            SI_VAR(11) = 0x40001;
        }
        == 9 {
            SI_VAR(10) = 0x50003;
            SI_VAR(11) = 0x50001;
        }
        == 6 {
            SI_VAR(10) = 0x60003;
            SI_VAR(11) = 0x60001;
        }
        == 7 {
            SI_VAR(10) = 0x70003;
            SI_VAR(11) = 0x70001;
        }
        == 8 {
            SI_VAR(10) = 0x80007;
            SI_VAR(11) = 0x80001;
        }
    }
});

Script N(script_80241CD4) = SCRIPT({
    spawn {
        DisablePartnerAI(0);
        SetNpcFlagBits(0xFFFFFFFC, 256, 1);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        await N(script_80241B40);
        SetNpcAnimation(0xFFFFFFFC, SI_VAR(10));
        NpcMoveTo(0xFFFFFFFC, 0xFFFFFFA3, SI_VAR(2), 15);
        await N(script_80241B40);
        SetNpcAnimation(0xFFFFFFFC, SI_VAR(11));
        sleep 15;
        SetNpcFlagBits(0xFFFFFFFC, 256, 0);
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
    }
    DisablePlayerPhysics(1);
    sleep 8;
    SetPlayerAnimation(0x1002B);
    sleep 13;
    GetPlayerPos(SI_MAP_VAR(7), SI_MAP_VAR(8), SI_MAP_VAR(9));
    func_802403DC_BD3C4C(1, 37);
    func_8024055C_BD3DCC(SI_MAP_VAR(7), SI_MAP_VAR(8), SI_MAP_VAR(9));
    sleep 1;
    SetPlayerPos(0, 1000, 0);
    MakeLerp(0, 90, 10, 1);
0:
    UpdateLerp();
    func_8024061C_BD3E8C(SI_VAR(0), 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    SI_MAP_VAR(8) += 3;
    func_8024055C_BD3DCC(SI_MAP_VAR(7), SI_MAP_VAR(8), SI_MAP_VAR(9));
    func_80240808_BD4078();
});

Script N(script_80241F20) = SCRIPT({
    SetPlayerAnimation(0x10002);
    InterpPlayerYaw(270, 0);
    sleep 15;
    SI_MAP_VAR(8) -= 3;
    func_8024055C_BD3DCC(SI_MAP_VAR(7), SI_MAP_VAR(8), SI_MAP_VAR(9));
    MakeLerp(90, 0, 15, 4);
1:
    UpdateLerp();
    func_8024061C_BD3E8C(SI_VAR(0), 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    func_802404F0_BD3D60();
    SetPlayerPos(SI_MAP_VAR(7), SI_MAP_VAR(8), SI_MAP_VAR(9));
    sleep 10;
    SetPlayerAnimation(0x90001);
    sleep 25;
    SetPlayerAnimation(0x10002);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
});

s32 N(intTable_8024207C)[] = {
    0xFFFFFF24, 0xFFFFFF74, 0xFFFFFF24, 0xFFFFFF8D, 0xFFFFFF24, 0xFFFFFFA6, 0xFFFFFF24, 0xFFFFFFBF,
    0xFFFFFF24, 0xFFFFFFD8, 0xFFFFFF3D, 0xFFFFFFD8, 0xFFFFFF56, 0xFFFFFFD8, 0xFFFFFF6F, 0xFFFFFFD8,
    0xFFFFFF88, 0xFFFFFF74, 0xFFFFFF88, 0xFFFFFF8D, 0xFFFFFF88, 0xFFFFFFA6, 0xFFFFFF88, 0xFFFFFFBF,
    0xFFFFFF88, 0xFFFFFFD8, 0xFFFFFF6F, 0xFFFFFFD8, 0xFFFFFF56, 0xFFFFFFD8, 0xFFFFFF3D, 0xFFFFFFD8,
};

s32 N(intTable_802420FC)[] = {
    0xFFFFFF24, 0x0000003C, 0xFFFFFF24, 0x00000055, 0xFFFFFF24, 0x0000006E, 0xFFFFFF24, 0x00000087,
    0xFFFFFF24, 0x000000A0, 0xFFFFFF3D, 0x000000A0, 0xFFFFFF56, 0x000000A0, 0xFFFFFF6F, 0x000000A0,
    0xFFFFFF88, 0x0000003C, 0xFFFFFF88, 0x00000055, 0xFFFFFF88, 0x0000006E, 0xFFFFFF88, 0x00000087,
    0xFFFFFF88, 0x000000A0, 0xFFFFFF6F, 0x000000A0, 0xFFFFFF56, 0x000000A0, 0xFFFFFF3D, 0x000000A0,
};

Script N(script_8024217C) = SCRIPT({
    PlaySoundAtCollider(19, 246, 0);
    MakeLerp(0, 120, 15, 3);
    loop {
        UpdateLerp();
        RotateModel(20, SI_VAR(0), 0, -1, 0);
        RotateModel(22, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_8024224C) = SCRIPT({
    MakeLerp(120, 0, 15, 3);
    loop {
        UpdateLerp();
        RotateModel(20, SI_VAR(0), 0, -1, 0);
        RotateModel(22, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(19, 246, 0);
});

Script N(script_8024231C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFD4) {
        DeleteTrigger(SI_MAP_VAR(12));
        DeleteTrigger(SI_MAP_VAR(13));
        DeleteTrigger(SI_MAP_VAR(14));
        spawn N(script_80245C34);
        await N(script_8024217C);
        SI_AREA_FLAG(8) = 1;
        sleep 50;
        await N(script_8024224C);
    } else {
        DisablePlayerInput(1);
        0x802D2B6C();
        await N(script_8024217C);
        sleep 20;
        await N(script_8024224C);
        DisablePlayerInput(0);
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024240C) = {
    SI_CMD(ScriptOpcode_LABEL, 3),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802D2B6C),
    SI_CMD(ScriptOpcode_LOOP, 3),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 13, 246, 0),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 16, -1, 1, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 16, 0, 1, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 13, 246, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 16, 0, 0, 100),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 16, 1, 1, 0, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 16, 0, 0, 0xFFFFFF9C),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 16, 0, 1, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80241CD4)),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFA6, 30, 3),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, RotateModel, 16, SI_VAR(0), 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 13),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 14),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 13, 247, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 30, SI_FIXED(1.5)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802420FC)),
    SI_CMD(ScriptOpcode_LOOP, 16),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(0), SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 2, SI_VAR(0), 0, SI_VAR(1), 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 60),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFA6, 0, 10, 0),
    SI_CMD(ScriptOpcode_LABEL, 15),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, RotateModel, 16, SI_VAR(0), 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 13),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 14),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 15),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241F20)),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802427A4) = {
    SI_CMD(ScriptOpcode_LABEL, 5),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802D2B6C),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 16, 246, 0),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 26, -1, 1, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 26, 0, 1, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 16, 246, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 26, 0, 0, 100),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 26, 1, 1, 0, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 26, 0, 0, 0xFFFFFF9C),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
        SI_CMD(ScriptOpcode_CALL, RotateModel, 26, 0, 1, 0, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80241CD4)),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFA6, 30, 3),
    SI_CMD(ScriptOpcode_LABEL, 20),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, RotateModel, 26, SI_VAR(0), 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 16),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 17),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 20),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 16, 247, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 30, SI_FIXED(1.5)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024207C)),
    SI_CMD(ScriptOpcode_LOOP, 16),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(0), SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, PlayEffect, 6, 2, SI_VAR(0), 0, SI_VAR(1), 0, 0, 0, 0, 0, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 60),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFA6, 0, 10, 0),
    SI_CMD(ScriptOpcode_LABEL, 25),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, RotateModel, 26, SI_VAR(0), 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 16),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 17),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 25),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241F20)),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80242B3C) = SCRIPT({
    ParentColliderToModel(13, 16);
    ParentColliderToModel(14, 16);
    ParentColliderToModel(16, 26);
    ParentColliderToModel(17, 26);
    SI_MAP_VAR(12) = bind N(script_8024240C) to TriggerFlag_WALL_INTERACT 13;
    SI_MAP_VAR(13) = bind N(script_8024231C) to TriggerFlag_WALL_INTERACT 19;
    SI_MAP_VAR(14) = bind N(script_802427A4) to TriggerFlag_WALL_INTERACT 16;
});

Script N(script_80242BF0) = SCRIPT({
    SI_MAP_VAR(12) = bind N(script_8024240C) to TriggerFlag_WALL_INTERACT 13;
    SI_MAP_VAR(13) = bind N(script_8024231C) to TriggerFlag_WALL_INTERACT 19;
    SI_MAP_VAR(14) = bind N(script_802427A4) to TriggerFlag_WALL_INTERACT 16;
});

s32 pad_002C54[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242C60) = SCRIPT({
    0x802D617C(0xB0000011, 0);
    PlaySoundAtModel(SI_VAR(2), 0xB0000011, 0);
    func_80240840_BD40B0(5);
    SI_VAR(3) = 90;
    MakeLerp(0, SI_VAR(3), 15, 8);
10:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    func_80240840_BD40B0(5);
    SI_VAR(4) = 0;
15:
    MakeLerp(SI_VAR(3), 20, 20, 8);
20:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    func_80240840_BD40B0(5);
    MakeLerp(20, SI_VAR(3), 5, 8);
30:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 30;
    }
    func_80240840_BD40B0(5);
    if (SI_MAP_VAR(11) != 0) {
        goto 35;
    }
    SI_VAR(4) += 1;
    if (SI_VAR(4) != 2) {
        goto 15;
    }
35:
    MakeLerp(SI_VAR(3), 0, 15, 1);
40:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 40;
    }
    0x802D617C(0xB0000012, 0);
    PlaySoundAtModel(SI_VAR(2), 0xB0000012, 0);
});

Script N(script_80242FA8) = SCRIPT({
    func_80240840_BD40B0(5);
    SI_VAR(3) = 90;
    MakeLerp(0, SI_VAR(3), 15, 8);
10:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, -1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    func_80240840_BD40B0(5);
    SI_VAR(4) = 0;
15:
    MakeLerp(SI_VAR(3), 20, 17, 8);
20:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, -1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    func_80240840_BD40B0(5);
    MakeLerp(20, SI_VAR(3), 8, 8);
30:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, -1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 30;
    }
    func_80240840_BD40B0(5);
    if (SI_MAP_VAR(11) != 0) {
        goto 35;
    }
    SI_VAR(4) += 1;
    if (SI_VAR(4) != 2) {
        goto 15;
    }
35:
    MakeLerp(SI_VAR(3), 0, 15, 1);
40:
    UpdateLerp();
    RotateModel(SI_VAR(2), SI_VAR(0), 0, -1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 40;
    }
});

Script N(script_80243298) = SCRIPT({
10:
    AwaitPlayerApproach(0, 0xFFFFFE7A, 150);
    SI_MAP_VAR(11) = 0;
    SI_VAR(5) = 0;
    SI_VAR(2) = 41;
    spawn N(script_80242C60);
    sleep 3;
    SI_VAR(2) = 43;
    spawn N(script_80242FA8);
    sleep 2;
    SI_VAR(5) = 1;
    SI_VAR(2) = 51;
    spawn N(script_80242C60);
    sleep 3;
    SI_VAR(2) = 53;
    spawn N(script_80242FA8);
    sleep 2;
    SI_VAR(5) = 0;
    SI_VAR(2) = 46;
    spawn N(script_80242C60);
    sleep 2;
    SI_VAR(2) = 48;
    spawn N(script_80242FA8);
    sleep 2;
    SI_VAR(5) = 1;
    SI_VAR(2) = 36;
    spawn N(script_80242C60);
    sleep 3;
    SI_VAR(2) = 38;
    spawn N(script_80242FA8);
    sleep 2;
    AwaitPlayerLeave(0, 0xFFFFFE7A, 170);
    SI_MAP_VAR(11) = 1;
    goto 10;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        MakeItemEntity(34, 0, 0, 0xFFFFFFEC, 17, SI_SAVE_FLAG(979));
    } else {
        MakeItemEntity(34, 0, 0xFFFFFC18, 0, 1, 0);
        func_80240870_BD40E0();
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    MakeEntity(0x802EAB04, 0, 0, 0, 0, 5, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(980));
});

s32 pad_00355C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80243560) = {
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

Script N(script_Idle_8024358C) = SCRIPT({
    sleep 4;
    func_802408A0_BD4110();
10:
    func_80240AF0_BD4360();
    sleep 1;
    goto 10;
});

Script N(script_Idle_802435E4) = SCRIPT({
    sleep 5;
    func_80240CA0_BD4510();
10:
    func_80240D10_BD4580();
    sleep 1;
    goto 10;
});

Script N(script_8024363C) = SCRIPT({
    if (SI_MAP_VAR(3) == SI_VAR(0)) {
        SI_MAP_VAR(4) = 1;
    } else {
        SI_MAP_VAR(4) = 2;
    }
    spawn {
        SetNpcAnimation(-1, 0x950009);
        sleep 30;
        SetNpcAnimation(-1, 0x950001);
    }
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_802436D0) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_8024375C) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 2),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 2),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_802437E8) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 3),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 3),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80243874) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 4),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 4),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80243900) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 5),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 5),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_8024398C) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 6),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 6),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80243A18) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 7),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 7),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80243AA4) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 8),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 8),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024363C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_80243B30) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024358C));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243B7C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_802436D0));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243BDC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_8024375C));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243C3C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_802437E8));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243C9C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_80243874));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243CFC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_80243900));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243D5C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_8024398C));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243DBC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_80243A18));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80243E1C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802435E4));
    BindNpcHit(-1, N(script_Hit_80243AA4));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD4) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80243E7C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243560),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243B30),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024406C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243B7C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024425C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243BDC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024444C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243C3C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024463C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243C9C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024482C)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243CFC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80244A1C)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243D5C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80244C0C)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243DBC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80244DFC)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_80243560),
        .pos = { -268.0, 52.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80243E1C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

s32 N(shortTable_80244FEC)[] = {
    0x0032003C, 0x00C800F0,
};

Script N(script_Idle_80244FF4) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    func_80240FD8_BD4848();
    loop {
        func_80240FE4_BD4854();
        func_8024116C_BD49DC();
        0x802CFD30(-1, 7, SI_VAR(0), 0, 0, 0);
        0x802D0244(-1, 17);
        sleep 1;
    }
});

Script N(script_Init_802450A0) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80244FF4));
});

Script N(script_Init_802450C4) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80244FF4));
});

StaticNpc N(npcGroup_802450E8)[] = {
    {
        .id = 9,
        .settings = &N(npcSettings_80243560),
        .pos = { 523.0, -139.0, 193.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802450A0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
    {
        .id = 10,
        .settings = &N(npcSettings_80243560),
        .pos = { 473.0, -122.0, 247.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802450C4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

Script N(script_Init_802454C8) = SCRIPT({

});

Script N(script_Init_802454D8) = SCRIPT({
    SetNpcFlagBits(-1, 16, 1);
});

StaticNpc N(npcGroup_80245500)[] = {
    {
        .id = 11,
        .settings = &N(npcSettings_80243560),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_802454C8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
    {
        .id = 12,
        .settings = &N(npcSettings_80243560),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00004F01,
        .init = N(script_Init_802454D8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

NpcGroupList N(npcGroupList_802458E0) = {
    NPC_GROUP(N(npcGroup_80243E7C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024406C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024425C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024444C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024463C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024482C), 0x00000000),
    NPC_GROUP(N(npcGroup_80244A1C), 0x00000000),
    NPC_GROUP(N(npcGroup_80244C0C), 0x00000000),
    NPC_GROUP(N(npcGroup_80244DFC), 0x00000000),
    NPC_GROUP(N(npcGroup_802450E8), 0x00000000),
    NPC_GROUP(N(npcGroup_80245500), 0x00000000),
    {},
};

Script N(script_80245970) = SCRIPT({
    match SI_MAP_VAR(3) {
        == 0 {
            SI_MAP_VAR(6) = 0;
        }
        == 1 {
            SI_MAP_VAR(6) = 1;
        }
        == 2 {
            SI_MAP_VAR(6) = 2;
        }
        == 3 {
            SI_MAP_VAR(6) = 3;
        }
        == 4 {
            SI_MAP_VAR(6) = 4;
        }
        == 5 {
            SI_MAP_VAR(6) = 5;
        }
        == 6 {
            SI_MAP_VAR(6) = 6;
        }
        == 7 {
            SI_MAP_VAR(6) = 7;
        }
        == 8 {
            SI_MAP_VAR(6) = 8;
        }
    }
});

Script N(script_80245A90) = SCRIPT({
    loop {
        GetNpcPos(SI_VAR(0), SI_VAR(6), SI_VAR(7), SI_VAR(8));
        SI_VAR(6) += SI_VAR(3);
        SI_VAR(7) += SI_VAR(4);
        SI_VAR(8) += SI_VAR(5);
        SetItemPos(SI_MAP_VAR(0), SI_VAR(6), SI_VAR(7), SI_VAR(8));
        sleep 1;
    }
});

Script N(script_80245B28) = SCRIPT({
    SetNpcFlagBits(SI_VAR(10), 0x40000, 0);
    NpcFacePlayer(SI_VAR(10), 0);
    sleep 5;
    SetNpcAnimation(SI_VAR(10), 0x950008);
    sleep 10;
    MakeLerp(255, 0, 60, 0);
0:
    UpdateLerp();
    0x802CFD30(SI_VAR(10), 7, SI_VAR(0), 0, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    SetNpcPos(SI_VAR(10), 0, 0xFFFFFC18, 0);
});

Script N(script_80245C34) = SCRIPT({
    DisablePlayerInput(1);
    0x802D2B6C();
    SetMusicTrack(0, 141, 0, 8);
    sleep 20;
    InterpPlayerYaw(90, 0);
    sleep 20;
    spawn {
        SetPlayerSpeed(2.0);
        PlayerMoveTo(0xFFFFFF56, 0, 0);
    }
    SetCamProperties(0, 2.0, 0, 0, 0, 450.0, 15.0, -7.0);
    sleep 60;
    SetCamProperties(0, 2.0, 0, 0, 0, 325.0, 13.0, -13.0);
    SetNpcPos(11, 0, 45, 20);
    SetItemPos(SI_MAP_VAR(0), 0, 65, 0);
    MakeLerp(0, 255, 30, 0);
    loop {
        UpdateLerp();
        0x802CFD30(11, 7, SI_VAR(0), 0, 0, 0);
        0x802D721C(SI_MAP_VAR(0), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SpeakToPlayer(11, 0x950004, 0x950001, 0, 0xE0030);
50:
    SetCamProperties(0, 2.0, 0, 0, 0, 500.0, 15.0, -7.0);
    sleep 20;
    MakeLerp(255, 0, 30, 0);
    loop {
        UpdateLerp();
        0x802CFD30(11, 7, SI_VAR(0), 0, 0, 0);
        0x802D721C(SI_MAP_VAR(0), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    loop {
        sleep 1;
        if (SI_MAP_VAR(1) == 1) {
            break;
        }
    }
    sleep 10;
    SI_VAR(0) = 270;
    SI_MAP_VAR(5) = SI_VAR(0);
    func_80241220_BD4A90();
    MakeLerp(0, 255, 30, 0);
    loop {
        UpdateLerp();
        0x802CFD30(11, 7, SI_VAR(0), 0, 0, 0);
        GetNpcPos(11, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(4) += 20;
        SetItemPos(SI_MAP_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        0x802D721C(SI_MAP_VAR(0), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 20;
    SpeakToPlayer(11, 0x950004, 0x950001, 0, 0xE0031);
    sleep 20;
    spawn {
        GetNpcPos(11, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(6) = SI_VAR(4);
        SI_VAR(6) += 20;
        MakeLerp(SI_VAR(6), SI_VAR(4), 20, 0);
        loop {
            UpdateLerp();
            SetItemPos(SI_MAP_VAR(0), SI_VAR(3), SI_VAR(0), SI_VAR(5));
            if (SI_VAR(1) == 0) {
                break;
            }
            sleep 1;
        }
        SetItemPos(SI_MAP_VAR(0), 0, 0xFFFFFC18, 0);
    }
    sleep 20;
    RandInt(360, SI_VAR(0));
    SI_VAR(0) += 180;
    SI_VAR(10) = SI_VAR(0);
    RandInt(20, SI_VAR(0));
    SI_VAR(0) += 360;
    SI_VAR(11) = SI_VAR(0);
    SI_VAR(0) = SI_MAP_VAR(5);
    loop {
        func_80241220_BD4A90();
        func_802412BC_BD4B2C();
        sleep 1;
        SI_VAR(10) += 0xFFFFFFFE;
        if (SI_VAR(10) <= 0) {
            break;
        }
    }
    loop {
        func_80241220_BD4A90();
        func_802412BC_BD4B2C();
        func_80241300_BD4B70();
        sleep 1;
        if (SI_VAR(1) == 1) {
            break;
        }
    }
    spawn {
        PlaySoundAtNpc(11, 1018, 0);
        GetNpcPos(11, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(5) += 20;
        SI_VAR(6) = SI_VAR(4);
        SI_VAR(6) += 0xFFFFFFE2;
        MakeLerp(SI_VAR(4), SI_VAR(6), 15, 0);
        loop {
            UpdateLerp();
            SetItemPos(SI_MAP_VAR(0), SI_VAR(3), SI_VAR(0), SI_VAR(5));
            if (SI_VAR(1) == 0) {
                break;
            }
            sleep 1;
        }
        SetItemPos(SI_MAP_VAR(0), 0, 0xFFFFFC18, 0);
    }
    loop {
        func_80241220_BD4A90();
        func_802412BC_BD4B2C();
        sleep 1;
        SI_VAR(11) += 0xFFFFFFFE;
        if (SI_VAR(11) <= 0) {
            break;
        }
    }
    SpeakToPlayer(11, 0x950004, 0x950001, 0, 0xE0032);
    PanToTarget(0, 0, 0);
    sleep 10;
    SI_MAP_VAR(4) = 0;
    DisablePlayerInput(0);
    loop {
        sleep 1;
        if (SI_MAP_VAR(4) != 0) {
            break;
        }
    }
    SI_MAP_VAR(2) = 1;
    DisablePlayerInput(1);
    await N(script_80245970);
    if (SI_MAP_VAR(4) == 1) {
        GetNpcPos(SI_MAP_VAR(6), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetNpcPos(12, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(0) = 12;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0xFFFFFFEC;
        spawn N(script_80245A90);
        PlaySoundAtNpc(12, 1018, 0);
        SetNpcJumpscale(12, 2.0);
        NpcJump0(12, 0, 0, 0, 20);
        SetNpcPos(12, 0, 0xFFFFFC18, 0);
        MakeItemEntity(34, 0, 0, 0xFFFFFFEC, 17, SI_SAVE_FLAG(979));
        sleep 20;
        GetNpcPos(11, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 350.0);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(11, 0x950004, 0x950001, 0, 0xE0033);
        sleep 20;
        spawn {
            SetNpcJumpscale(11, 0);
            NpcJump1(11, 0, 45, 0, 20);
            InterpNpcYaw(11, 90, 0);
        }
        func_80241658_BD4EC8();
        SetPlayerSpeed(4.0);
        PlayerMoveTo(SI_VAR(0), SI_VAR(2), 0);
        UseSettingsFrom(0, 0, 0, 0);
        SetPanTarget(0, 0, 0, 0);
        SetCamDistance(0, 450.0);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 20;
        spawn {
            sleep 30;
            PlaySound(71);
        }
        SI_VAR(10) = 1;
        spawn N(script_80245B28);
        SI_VAR(10) = 2;
        spawn N(script_80245B28);
        SI_VAR(10) = 3;
        spawn N(script_80245B28);
        SI_VAR(10) = 4;
        spawn N(script_80245B28);
        SI_VAR(10) = 5;
        spawn N(script_80245B28);
        SI_VAR(10) = 6;
        spawn N(script_80245B28);
        SI_VAR(10) = 7;
        spawn N(script_80245B28);
        SI_VAR(10) = 8;
        spawn N(script_80245B28);
        SI_VAR(10) = 11;
        spawn N(script_80245B28);
        sleep 60;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 450.0);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
    } else {
        SetCamProperties(0, 2.0, 0, 0, 0, 450.0, 15.0, -7.0);
        sleep 30;
        SetNpcFlagBits(SI_MAP_VAR(6), 0x40000, 0);
        GetNpcPos(SI_MAP_VAR(6), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        GetAngleBetweenNPCs(SI_MAP_VAR(6), 0, SI_VAR(0));
        InterpNpcYaw(SI_MAP_VAR(6), SI_VAR(0), 0);
        SetNpcJumpscale(SI_MAP_VAR(6), 0);
        NpcJump0(SI_MAP_VAR(6), 0, 45, 0, 20);
        InterpNpcYaw(SI_MAP_VAR(6), 90, 0);
        GetNpcPos(SI_MAP_VAR(6), SI_VAR(6), SI_VAR(7), SI_VAR(8));
        SI_VAR(10) = SI_VAR(7);
        SI_VAR(10) += 20;
        MakeLerp(SI_VAR(7), SI_VAR(10), 20, 0);
        loop {
            UpdateLerp();
            SetItemPos(SI_MAP_VAR(0), SI_VAR(6), SI_VAR(0), SI_VAR(8));
            if (SI_VAR(1) == 0) {
                break;
            }
            sleep 1;
        }
        sleep 20;
        SpeakToPlayer(SI_MAP_VAR(6), 0x950004, 0x950001, 0, 0xE0034);
        GetNpcPos(11, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcPos(SI_MAP_VAR(6), SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SetNpcPos(11, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SetNpcPos(SI_MAP_VAR(6), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        MakeLerp(255, 0, 20, 0);
        loop {
            UpdateLerp();
            0x802CFD30(SI_MAP_VAR(6), 7, SI_VAR(0), 0, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 10;
        SetNpcPos(SI_MAP_VAR(6), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        InterpNpcYaw(SI_MAP_VAR(6), 90, 0);
        MakeLerp(0, 255, 20, 0);
        loop {
            UpdateLerp();
            0x802CFD30(SI_MAP_VAR(6), 7, SI_VAR(0), 0, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcFlagBits(SI_MAP_VAR(6), 0x40000, 1);
        SI_MAP_VAR(4) = 0;
        SI_MAP_VAR(2) = 0;
        func_80241658_BD4EC8();
        SetPlayerSpeed(4.0);
        PlayerMoveTo(SI_VAR(0), SI_VAR(2), 0);
        goto 50;
    }
    SI_SAVE_VAR(0) = 0xFFFFFFD4;
    spawn N(script_80242BF0);
    spawn N(script_802417F0);
    DisablePlayerInput(0);
});

// rodata: D_80246EC0_BDA730

// rodata: jtbl_80246EC8_BDA738

// rodata: jtbl_80246F00_BDA770

s32 pad_006F38[] = {
    0x00000000, 0x00000000,
};
