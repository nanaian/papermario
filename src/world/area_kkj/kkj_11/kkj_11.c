#include "kkj_11.h"

s32 pad_00006C[1];
s32 pad_0000A4[3];
s32 pad_000894[3];
s32 pad_0010CC[1];
Script N(script_ExitDoubleDoor_802411A0);
Script N(script_ExitDoubleDoor_80241254);
Script N(script_ExitSingleDoor_80241308);
Script N(script_ExitSingleDoor_802413BC);
Script N(script_ExitSingleDoor_80241470);
Script N(script_ExitSingleDoor_80241524);
Script N(script_ExitSingleDoor_802415D8);
Script N(script_8024168C);
Script N(script_EnterSingleDoor_80241790);
Script N(main);
s32 pad_001BFC[1];
s32 N(itemList_80241C00)[2];
Script N(script_80241C08);
Script N(script_MakeEntities);
s32 pad_001DE4[3];
Script N(script_80241DF0);
Script N(script_80241F4C);
s32 pad_002194[3];
Script N(script_802421A0);
Script N(script_80242D78);
Script N(script_80242E38);
Script N(script_NpcAI_80242E9C);
Script N(script_Idle_802430A4);
Script N(script_Idle_802432E8);
Script N(script_Idle_802435D4);
Script N(script_Idle_802438C0);
Script N(script_Init_80243AB4);
Script N(script_Init_80243B08);
Script N(script_Init_80243B5C);
Script N(script_Init_80243BB0);
Script N(script_Init_80243C04);
s32 N(extraAnimationList_80243CB8)[9];
StaticNpc N(npcGroup_80243CDC)[5];
NpcGroupList N(npcGroupList_8024468C);
s32 pad_0046A4[3];
s32 N(extraAnimationList_802446DC)[13];
Script N(script_NpcAI_80244710);
Script N(script_80244924);
Script N(script_80244A18);
Script N(script_Idle_80244AE8);
Script N(script_Idle_80244C48);
Script N(script_Idle_80244DA8);
Script N(script_Interact_80244EB4);
Script N(script_Interact_8024502C);
Script N(script_Interact_802451A4);
Script N(script_Interact_802452F4);
Script N(script_Init_8024546C);
Script N(script_Init_80245534);
Script N(script_Init_802455C0);
Script N(script_Init_8024562C);
StaticNpc N(npcGroup_802456F4)[4];
NpcGroupList N(npcGroupList_80245EB4);
s32 pad_005ECC[1];
const char D_80245ED0_AD4010[8]; // "kkj_10"
const char D_80245ED8_AD4018[8]; // "kkj_12"
const char D_80245EE0_AD4020[8]; // "kkj_14"
const char D_80245EE8_AD4028[8]; // "kkj_16"
const char D_80245EF0_AD4030[8]; // "kkj_15"
const char D_80245EF8_AD4038[8]; // "kkj_17"
const char D_80245F00_AD4040[8]; // "kkj_18"
const char D_80245F08_AD4048[8]; // "kkj_11"
const char D_80245F28_AD4068[8]; // "kkj_14"
const char D_80245F48_AD4088[8]; // "kkj_14"

// text: func_80240000_ACE140

// text: func_80240034_ACE174

s32 pad_00006C[] = {
    0x00000000,
};

// text: func_80240070_ACE1B0

s32 pad_0000A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400B0_ACE1F0

// text: func_802402C0_ACE400

// text: func_8024036C_ACE4AC

// text: func_80240644_ACE784

// text: func_80240728_ACE868

s32 pad_000894[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802408A0_ACE9E0

// text: func_80240AB0_ACEBF0

// text: func_80240B5C_ACEC9C

// text: func_80240E34_ACEF74

// text: func_80240F18_ACF058

// text: func_80240F44_ACF084

// text: func_80240F60_ACF0A0

s32 pad_0010CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 480.0f, 0.0f },
    { 0.0f, 100.0f, -360.0f, 180.0f },
    { -325.0f, 0.0f, 360.0f, 45.0f },
    { -480.0f, 0.0f, 50.0f, 90.0f },
    { 0.0f, 0.0f, -255.0f, 180.0f },
    { 480.0f, 0.0f, 50.0f, 270.0f },
    { 300.0f, 0.0f, 380.0f, 315.0f },
    { -520.0f, 0.0f, 50.0f, 90.0f },
    { 466.0f, 0.0f, 60.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19000C,
};

Script N(script_ExitDoubleDoor_802411A0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(2);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 20;
    SI_VAR(3) = 18;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245ED0_AD4010, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241254) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(2);
    SI_VAR(0) = 1;
    SI_VAR(1) = 5;
    SI_VAR(2) = 23;
    SI_VAR(3) = 25;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245ED8_AD4018, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_80241308) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 4;
    SI_VAR(1) = 10;
    SI_VAR(2) = 32;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245EE0_AD4020, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_802413BC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 15;
    SI_VAR(2) = 28;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245EE8_AD4028, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_80241470) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 3;
    SI_VAR(1) = 20;
    SI_VAR(2) = 30;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245EF0_AD4030, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_80241524) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 5;
    SI_VAR(1) = 30;
    SI_VAR(2) = 34;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245EF8_AD4038, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_802415D8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 6;
    SI_VAR(1) = 25;
    SI_VAR(2) = 36;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245F00_AD4040, 0);
    sleep 100;
});

Script N(script_8024168C) = SCRIPT({
    if (SI_SAVE_VAR(0) > 6) {
        bind N(script_ExitDoubleDoor_802411A0) to TriggerFlag_WALL_INTERACT 0;
    }
    if (SI_SAVE_VAR(0) > 88) {
        bind N(script_ExitDoubleDoor_80241254) to TriggerFlag_WALL_INTERACT 5;
        bind N(script_ExitSingleDoor_80241308) to TriggerFlag_WALL_INTERACT 10;
    }
    bind N(script_ExitSingleDoor_80241524) to TriggerFlag_WALL_INTERACT 30;
    bind N(script_ExitSingleDoor_802413BC) to TriggerFlag_WALL_INTERACT 15;
    bind N(script_ExitSingleDoor_80241470) to TriggerFlag_WALL_INTERACT 20;
    bind N(script_ExitSingleDoor_802415D8) to TriggerFlag_WALL_INTERACT 25;
});

Script N(script_EnterSingleDoor_80241790) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(2);
            SI_VAR(2) = 20;
            SI_VAR(3) = 18;
            await EnterDoubleDoor;
        }
        == 1 {
            UseDoorSounds(2);
            SI_VAR(2) = 23;
            SI_VAR(3) = 25;
            await EnterDoubleDoor;
        }
        == 2 {
            SI_VAR(2) = 28;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 3 {
            SI_VAR(2) = 30;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 4 {
            SI_VAR(2) = 32;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 5 {
            SI_VAR(2) = 34;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 6 {
            SI_VAR(2) = 36;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 7 {
            await N(script_80241F4C);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50001);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    match SI_SAVE_VAR(0) {
        0xFFFFFFB4, 0xFFFFFFCA, 0xFFFFFFF2, 6, 38 {
            MakeNpcs(0, N(npcGroupList_8024468C));
        }
        == 58 {
            func_80240034_ACE174(1);
            EnableModel(127, 0);
            EnableModel(128, 0);
            EnableModel(129, 0);
            func_80240000_ACE140();
            MakeNpcs(0, N(npcGroupList_80245EB4));
        } else {
            EnableModel(127, 0);
            EnableModel(128, 0);
            EnableModel(129, 0);
            func_80240000_ACE140();
        }
    }
    await N(script_MakeEntities);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        await N(script_80242E38);
        return;
    }
    if (SI_SAVE_VAR(0) < 95) {
        SetMusicTrack(0, 117, 0, 8);
    }
    spawn N(script_8024168C);
    spawn N(script_EnterSingleDoor_80241790);
    sleep 1;
});

s32 pad_001BFC[] = {
    0x00000000,
};

s32 N(itemList_80241C00)[] = {
    0x0000006A, 0x00000000,
};

Script N(script_80241C08) = SCRIPT({
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        return;
    }
    PlaySoundAt(617, 0, 0, 10, 490);
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240070_ACE1B0();
    sleep 5;
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(500) = 1;
    0x802D6954();
    unbind;
    bind N(script_ExitDoubleDoor_802411A0) to TriggerFlag_WALL_INTERACT 0;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_LE, SI_SAVE_VAR(0), 6),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(500), 0),
            SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 0, 10, 490, 180, 0x80000000),
            SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(0)),
            SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241C08), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80241C00), 0, 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_802411A0), TriggerFlag_WALL_INTERACT, 0, 1, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_001DE4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241DF0) = SCRIPT({
    PlaySoundAtCollider(20, 449, 0);
    MakeLerp(0, 0xFFFFFF88, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(30, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 40;
    MakeLerp(0xFFFFFF88, 0, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(30, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(20, 450, 0);
});

Script N(script_80241F4C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), 10, SI_VAR(2));
    UseSettingsFrom(0, 0, 0, 444);
    SetPanTarget(0, 0, 0, 444);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 1;
    sleep 30;
    UseSettingsFrom(0, 0xFFFFFE52, 0, 50);
    SetPanTarget(0, 0xFFFFFE52, 0, 50);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 30;
    SI_AREA_FLAG(6) = 1;
    spawn N(script_80241DF0);
    sleep 10;
    spawn {
        sleep 5;
        NpcMoveTo(0xFFFFFFFC, 0xFFFFFE39, 50, 30);
    }
    PlayerMoveTo(0xFFFFFE52, 50, 30);
    SetPlayerPos(0xFFFFFE52, 0, 50);
    PanToTarget(0, 0, 0);
    sleep 5;
    EnablePartnerAI();
    DisablePlayerInput(0);
});

s32 pad_002194[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802421A0) = SCRIPT({
    DemoJoystickXY(0xFFFFFFB5, 0xFFFFFFD4);
    sleep 41;
    DemoJoystickXY(0xFFFFFFB6, 0xFFFFFFD4);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB6, 0xFFFFFFD6);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB6, 0xFFFFFFD8);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB6, 0xFFFFFFD9);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB5, 0xFFFFFFDB);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB5, 0xFFFFFFDD);
    sleep 2;
    DemoJoystickXY(0xFFFFFFB5, 0xFFFFFFDF);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB5, 0xFFFFFFE0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB4, 0xFFFFFFE1);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB4, 0xFFFFFFE2);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB4, 0xFFFFFFE3);
    sleep 4;
    DemoJoystickXY(0xFFFFFFB4, 0xFFFFFFE4);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB2, 0xFFFFFFE9);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB1, 0xFFFFFFF1);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAF, 0xFFFFFFF9);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAE, 0xFFFFFFFE);
    sleep 5;
    DemoJoystickXY(0xFFFFFFAE, 0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAF, 2);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB0, 5);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB0, 7);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB1, 9);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB1, 12);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB2, 18);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB3, 21);
    sleep 12;
    DemoJoystickXY(0xFFFFFFB4, 22);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB5, 27);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB6, 30);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB6, 31);
    sleep 2;
    DemoJoystickXY(0xFFFFFFB7, 31);
    sleep 2;
    DemoJoystickXY(0xFFFFFFB7, 33);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB7, 34);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB8, 36);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB9, 38);
    sleep 10;
    DemoJoystickXY(0xFFFFFFBA, 38);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE0, 23);
    sleep 1;
    DemoJoystickXY(-1, 0);
    sleep 5;
    DemoJoystickXY(-1, 0xFFFFFFFD);
    sleep 1;
    DemoJoystickXY(0, 0xFFFFFFE5);
    sleep 1;
    DemoJoystickXY(-1, 0xFFFFFFC0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFF4, 0xFFFFFFAF);
    sleep 1;
    DemoJoystickXY(0xFFFFFFF2, 0xFFFFFFAE);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE8, 0xFFFFFFAF);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE0, 0xFFFFFFB0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFDD, 0xFFFFFFB1);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD5, 0xFFFFFFB3);
    sleep 1;
    DemoJoystickXY(0xFFFFFFCC, 0xFFFFFFB5);
    sleep 1;
    DemoJoystickXY(0xFFFFFFC4, 0xFFFFFFB7);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBE, 0xFFFFFFB8);
    sleep 5;
    DemoJoystickXY(0xFFFFFFBD, 0xFFFFFFB9);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBC, 0xFFFFFFC1);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB9, 0xFFFFFFCB);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB5, 0xFFFFFFE0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB1, 0xFFFFFFF0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAE, 0xFFFFFFFE);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAE, 0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAF, 1);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAF, 2);
    sleep 1;
    DemoJoystickXY(0xFFFFFFAF, 3);
    sleep 2;
    DemoJoystickXY(0xFFFFFFB0, 5);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB0, 7);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB1, 11);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB3, 20);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB7, 33);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBA, 48);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBF, 66);
    sleep 5;
    DemoJoystickXY(0xFFFFFFBF, 67);
    sleep 28;
    DemoJoystickXY(0xFFFFFFBF, 66);
    sleep 4;
    DemoJoystickXY(0xFFFFFFBF, 65);
    sleep 1;
    DemoJoystickXY(0xFFFFFFC4, 59);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD0, 49);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE3, 31);
    sleep 1;
    DemoJoystickXY(0xFFFFFFF3, 15);
    sleep 1;
    DemoJoystickXY(-1, 0);
    sleep 5;
    DemoJoystickXY(0, 0);
    sleep 1;
    DemoJoystickXY(2, 0);
    sleep 1;
    DemoJoystickXY(10, 1);
    sleep 2;
    DemoJoystickXY(-1, 0);
    sleep 15;
    DemoJoystickXY(0xFFFFFFFE, 9);
    sleep 1;
    DemoJoystickXY(0xFFFFFFED, 33);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD8, 67);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD4, 71);
    sleep 5;
    DemoJoystickXY(0xFFFFFFD4, 72);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD4, 73);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD5, 73);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD5, 74);
    sleep 8;
    DemoJoystickXY(0xFFFFFFD6, 74);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD7, 74);
    sleep 3;
    DemoJoystickXY(0xFFFFFFD9, 75);
    sleep 1;
    DemoJoystickXY(0xFFFFFFDC, 75);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE1, 76);
    sleep 51;
    DemoJoystickXY(0xFFFFFFE3, 76);
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80245F08_AD4048, 2, 2);
    sleep 110;
});

Script N(script_80242D78) = SCRIPT({
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
    GotoMapSpecial(D_80245F08_AD4048, 2, 3);
    sleep 100;
});

Script N(script_80242E38) = SCRIPT({
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_80242D78);
    spawn N(script_802421A0);
});

NpcSettings N(npcSettings_80242E70) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

Script N(script_NpcAI_80242E9C) = SCRIPT({
    DisablePlayerInput(1);
    group 0;
    0x802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 5);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x580002);
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140174);
    func_80240728_ACE868(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x580007);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x580002);
    }
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80245F28_AD4068, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_Idle_802430A4) = SCRIPT({
    spawn {
        SI_VAR(1) = 0;
        loop {
            func_8024036C_ACE4AC(SI_VAR(0), 100, 90, 0, 40, 127, 0);
            if (SI_VAR(0) != 0) {
                if (SI_VAR(1) == 0) {
                    BindNpcAI(-1, N(script_NpcAI_80242E9C));
                    SI_VAR(1) = 1;
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 0xFFFFFF7E, 0xFFFFFF7E, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFF7E, 0xFFFFFF7E, 0xFFFFFF4C, 0xFFFFFFE2);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF4C, 0xFFFFFFE2, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFF4C, 0xFFFFFFE2, 180, 0xFFFFFFE2);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 180, 0xFFFFFFE2, 0);
        func_80240644_ACE784(SI_VAR(0), 180, 0xFFFFFFE2, 130, 0xFFFFFF7E);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 130, 0xFFFFFF7E, 0);
        func_80240644_ACE784(SI_VAR(0), 130, 0xFFFFFF7E, 0xFFFFFF7E, 0xFFFFFF7E);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Idle_802432E8) = SCRIPT({
    spawn {
        SI_VAR(1) = 0;
        loop {
            func_8024036C_ACE4AC(SI_VAR(0), 100, 90, 0, 40, 128, 1);
            if (SI_VAR(0) != 0) {
                if (SI_VAR(1) == 0) {
                    BindNpcAI(-1, N(script_NpcAI_80242E9C));
                    SI_VAR(1) = 1;
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 0xFFFFFF7E, 180, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFF7E, 180, 0xFFFFFF7E, 230);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF7E, 230, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFF7E, 230, 0xFFFFFFD8, 230);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFFD8, 230, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFFD8, 230, 0xFFFFFFD8, 80);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFFD8, 80, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFFD8, 80, 0xFFFFFF06, 80);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF06, 80, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFF06, 80, 0xFFFFFF06, 180);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF06, 180, 0);
        func_80240644_ACE784(SI_VAR(0), 0xFFFFFF06, 180, 0xFFFFFF7E, 180);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Idle_802435D4) = SCRIPT({
    spawn {
        SI_VAR(1) = 0;
        loop {
            func_8024036C_ACE4AC(SI_VAR(0), 100, 90, 0, 40, 129, 2);
            if (SI_VAR(0) != 0) {
                if (SI_VAR(1) == 0) {
                    BindNpcAI(-1, N(script_NpcAI_80242E9C));
                    SI_VAR(1) = 1;
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 130, 180, 0);
        func_80240644_ACE784(SI_VAR(0), 130, 180, 250, 180);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 250, 180, 0);
        func_80240644_ACE784(SI_VAR(0), 250, 180, 250, 80);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 250, 80, 0);
        func_80240644_ACE784(SI_VAR(0), 250, 80, 40, 80);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 40, 80, 0);
        func_80240644_ACE784(SI_VAR(0), 40, 80, 40, 230);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 40, 230, 0);
        func_80240644_ACE784(SI_VAR(0), 40, 230, 130, 230);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 130, 230, 0);
        func_80240644_ACE784(SI_VAR(0), 130, 230, 130, 180);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Idle_802438C0) = SCRIPT({
    loop {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        AwaitPlayerApproach(SI_VAR(0), SI_VAR(2), 50);
        GetPlayerPos(SI_VAR(0), SI_VAR(3), SI_VAR(2));
        if (SI_VAR(1) == SI_VAR(3)) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    group 0;
    0x802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 5);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140174);
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80245F28_AD4068, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_Init_80243AB4) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 130, 0, 0xFFFFFF7E);
    BindNpcIdle(-1, N(script_Idle_802430A4));
});

Script N(script_Init_80243B08) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 0xFFFFFF06, 0, 180);
    BindNpcIdle(-1, N(script_Idle_802432E8));
});

Script N(script_Init_80243B5C) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 130, 0, 230);
    BindNpcIdle(-1, N(script_Idle_802435D4));
});

Script N(script_Init_80243BB0) = SCRIPT({
    SetNpcPos(-1, 0, 100, 0xFFFFFEA2);
    SetNpcYaw(-1, 220);
    BindNpcIdle(-1, N(script_Idle_802438C0));
});

Script N(script_Init_80243C04) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 4) {
        SetNpcPos(-1, 0xFFFFFFD8, 0, 0xFFFFFF24);
        SetNpcYaw(-1, 90);
    } else {
        SetNpcPos(-1, 0, 0, 0xFFFFFF10);
        SetNpcYaw(-1, 220);
    }
    BindNpcIdle(-1, N(script_Idle_802438C0));
});

s32 N(extraAnimationList_80243CB8)[] = {
    0x00580001, 0x00580004, 0x00580006, 0x00580008, 0x00580002, 0x00580005, 0x00580007, 0x00580009,
    0xFFFFFFFF,
};

StaticNpc N(npcGroup_80243CDC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242E70),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80243AB4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80243CB8),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242E70),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80243B08),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80243CB8),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80242E70),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80243B5C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80243CB8),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242E70),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80243BB0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80243CB8),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80242E70),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80243C04),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80243CB8),
    },
};

NpcGroupList N(npcGroupList_8024468C) = {
    NPC_GROUP(N(npcGroup_80243CDC), 0x00000000),
    {},
};

s32 pad_0046A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802446B0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

s32 N(extraAnimationList_802446DC)[] = {
    0x00580000, 0x00580001, 0x00580002, 0x00580004, 0x00580005, 0x00580006, 0x00580007, 0x00580008,
    0x00580009, 0x00580012, 0x00580014, 0x0058001B, 0xFFFFFFFF,
};

Script N(script_NpcAI_80244710) = SCRIPT({
    DisablePlayerInput(1);
    func_80240F44_ACF084();
    group 0;
    0x802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 5);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x580001);
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140174);
    func_80240F60_ACF0A0(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x580007);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x580001);
    }
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80245F48_AD4088, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_80244924) = SCRIPT({
    loop {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        if (SI_VAR(1) == SI_VAR(4)) {
            func_80240F18_ACF058(SI_VAR(3));
            if (SI_VAR(3) == 0) {
                IsPlayerWithin(SI_VAR(0), SI_VAR(2), 80, SI_VAR(0));
                if (SI_VAR(0) == 1) {
                    BindNpcAI(-1, N(script_NpcAI_80244710));
                    return;
                }
            }
        }
        sleep 1;
    }
});

Script N(script_80244A18) = SCRIPT({
    loop {
        func_80240F18_ACF058(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            IsPlayerWithin(0xFFFFFEED, 0xFFFFFFDA, 30, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                SetNpcAnimation(1, 0x580001);
                SetNpcAnimation(2, 0x580001);
                BindNpcAI(-1, N(script_NpcAI_80244710));
                return;
            }
        }
        sleep 1;
    }
});

Script N(script_Idle_80244AE8) = SCRIPT({
    spawn N(script_80244924);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetSelfEnemyFlagBits(0x8000000, 1);
        0x802D2508();
        spawn {
            DisablePlayerInput(1);
            SetPlayerSpeed(2.0);
            PlayerMoveTo(70, 0xFFFFFEBB, 0);
            DisablePlayerInput(0);
        }
        SetNpcAnimation(-1, 0x580004);
        SetNpcSpeed(-1, 2.0);
        NpcMoveTo(-1, 0, 0xFFFFFEA2, 0);
        SetNpcAnimation(-1, 0x580001);
        InterpNpcYaw(-1, 220, 5);
        SetSelfEnemyFlagBits(0x8000000, 0);
    }
    loop {
        sleep 1;
    }
});

Script N(script_Idle_80244C48) = SCRIPT({
    spawn N(script_80244924);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 4) {
        SetSelfEnemyFlagBits(0x8000000, 1);
        0x802D2508();
        spawn {
            DisablePlayerInput(1);
            SetPlayerSpeed(2.0);
            PlayerMoveTo(70, 0xFFFFFF38, 0);
            DisablePlayerInput(0);
        }
        SetNpcAnimation(-1, 0x580004);
        SetNpcSpeed(-1, 2.0);
        NpcMoveTo(-1, 0, 0xFFFFFF10, 0);
        SetNpcAnimation(-1, 0x580001);
        InterpNpcYaw(-1, 220, 5);
        SetSelfEnemyFlagBits(0x8000000, 0);
    }
    loop {
        sleep 1;
    }
});

Script N(script_Idle_80244DA8) = SCRIPT({
    loop {
        GetSelfVar(1, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SetNpcAnimation(1, 0x580008);
            SetSelfVar(1, 1);
        } else {
            SetNpcAnimation(2, 0x580008);
            SetSelfVar(1, 0);
        }
        RandInt(60, SI_VAR(0));
        SI_VAR(0) += 30;
        sleep SI_VAR(0);
        SetNpcAnimation(1, 0x580001);
        SetNpcAnimation(2, 0x580001);
        sleep 10;
    }
});

Script N(script_Interact_80244EB4) = SCRIPT({
    SpeakToPlayer(-1, 0x580008, 0x580001, 16, 0x140135);
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(0, 0x580004);
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(0) > 0) {
        SI_VAR(3) += 0xFFFFFFCE;
    } else {
        SI_VAR(3) += 50;
    }
    SetNpcSpeed(-1, 2.0);
    NpcMoveTo(-1, SI_VAR(3), SI_VAR(5), 0);
    SetNpcAnimation(-1, 0x580001);
    InterpNpcYaw(-1, 220, 5);
    SetSelfVar(0, 1);
    bind N(script_ExitDoubleDoor_80241254) to TriggerFlag_WALL_INTERACT 5;
});

Script N(script_Interact_8024502C) = SCRIPT({
    SpeakToPlayer(-1, 0x580008, 0x580001, 16, 0x140135);
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0x580004);
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(0) > 0) {
        SI_VAR(3) += 0xFFFFFFCE;
    } else {
        SI_VAR(3) += 50;
    }
    SetNpcSpeed(-1, 2.0);
    NpcMoveTo(-1, SI_VAR(3), SI_VAR(5), 0);
    SetNpcAnimation(-1, 0x580001);
    InterpNpcYaw(-1, 220, 5);
    SetSelfVar(0, 1);
    bind N(script_ExitSingleDoor_80241308) to TriggerFlag_WALL_INTERACT 10;
});

Script N(script_Interact_802451A4) = SCRIPT({
    SetNpcAnimation(1, 0x580001);
    SetNpcAnimation(2, 0x580001);
    sleep 10;
    func_80240F18_ACF058(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        NpcFacePlayer(-1, 0);
        sleep 5;
        BindNpcAI(-1, N(script_NpcAI_80244710));
        return;
    }
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x580008, 0x580001, 16, 0x140131);
        SetSelfVar(0, 1);
    } else {
        SpeakToPlayer(-1, 0x580008, 0x580001, 16, 0x140132);
        SetSelfVar(0, 0);
    }
    sleep 10;
});

Script N(script_Interact_802452F4) = SCRIPT({
    EnableNpcAI(1, 0);
    SetNpcAnimation(1, 0x580001);
    SetNpcAnimation(2, 0x580001);
    sleep 10;
    func_80240F18_ACF058(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        NpcFacePlayer(-1, 0);
        sleep 5;
        BindNpcAI(-1, N(script_NpcAI_80244710));
        return;
    }
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x580008, 0x580001, 16, 0x140133);
        SetSelfVar(0, 1);
    } else {
        SpeakToPlayer(-1, 0x580008, 0x580001, 16, 0x140134);
        SetSelfVar(0, 0);
    }
    sleep 10;
    EnableNpcAI(1, 1);
});

Script N(script_Init_8024546C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetNpcPos(-1, 0xFFFFFFBA, 100, 0xFFFFFEA2);
        SetNpcYaw(-1, 90);
    } else {
        SetNpcPos(-1, 0, 100, 0xFFFFFEA2);
        SetNpcYaw(-1, 200);
    }
    BindNpcIdle(-1, N(script_Idle_80244AE8));
    BindNpcInteract(-1, N(script_Interact_80244EB4));
});

Script N(script_Init_80245534) = SCRIPT({
    SetNpcAnimation(-1, 0x580001);
    SetNpcPos(-1, 0xFFFFFED9, 0, 0xFFFFFFE2);
    NpcFaceNpc(-1, 2, 0);
    spawn N(script_80244A18);
    BindNpcIdle(-1, N(script_Idle_80244DA8));
    BindNpcInteract(-1, N(script_Interact_802451A4));
});

Script N(script_Init_802455C0) = SCRIPT({
    SetNpcAnimation(-1, 0x580001);
    SetNpcPos(-1, 0xFFFFFF01, 0, 0xFFFFFFC9);
    NpcFaceNpc(-1, 1, 0);
    BindNpcInteract(-1, N(script_Interact_802452F4));
});

Script N(script_Init_8024562C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 4) {
        SetNpcPos(-1, 0xFFFFFFD8, 0, 0xFFFFFF24);
        SetNpcYaw(-1, 90);
    } else {
        SetNpcPos(-1, 0, 0, 0xFFFFFF10);
        SetNpcYaw(-1, 220);
    }
    BindNpcIdle(-1, N(script_Idle_80244C48));
    BindNpcInteract(-1, N(script_Interact_8024502C));
});

StaticNpc N(npcGroup_802456F4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802446B0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_8024546C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802446DC),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802446B0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_80245534),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802446DC),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802446B0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_802455C0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802446DC),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802446B0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_8024562C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802446DC),
    },
};

NpcGroupList N(npcGroupList_80245EB4) = {
    NPC_GROUP(N(npcGroup_802456F4), 0x00000000),
    {},
};

s32 pad_005ECC[] = {
    0x00000000,
};

// rodata: D_80245ED0_AD4010

// rodata: D_80245ED8_AD4018

// rodata: D_80245EE0_AD4020

// rodata: D_80245EE8_AD4028

// rodata: D_80245EF0_AD4030

// rodata: D_80245EF8_AD4038

// rodata: D_80245F00_AD4040

// rodata: D_80245F08_AD4048

// rodata: D_80245F10_AD4050

// rodata: D_80245F18_AD4058

// rodata: D_80245F20_AD4060

// rodata: D_80245F28_AD4068

// rodata: D_80245F30_AD4070

// rodata: D_80245F38_AD4078

// rodata: D_80245F40_AD4080

// rodata: D_80245F48_AD4088
