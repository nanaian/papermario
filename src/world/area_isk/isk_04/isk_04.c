#include "isk_04.h"

s32 pad_000034[3];
s32 pad_000928[2];
s32 pad_000A6C[1];
Script N(script_80240B10);
s32 pad_000CCC[1];
Script N(script_ExitWalk_80240CD0);
Script N(script_ExitWalk_80240D2C);
Script N(script_ExitWalk_80240D88);
Script N(script_ExitWalk_80240DE4);
Script N(script_ExitWalk_80240E40);
Script N(script_80240E9C);
Script N(script_EnterWalk_80240F38);
Script N(main);
s32 N(itemList_80241090)[2];
Script N(script_802410A8);
Script N(script_80241180);
Script N(script_80241348);
s32 pad_00143C[1];
Script N(script_MakeEntities);
s32 pad_001524[3];
Script N(script_NpcAI_80241560);
s32 N(unk_802415D0)[12];
Script N(script_80241600);
s32 N(unk_80241670)[12];
Script N(script_802416A0);
Script N(script_80241710);
s32 unk_missing_80241830[33];
StaticNpc N(npcGroup_802418B4)[1];
StaticNpc N(npcGroup_80241AA4)[1];
NpcGroupList N(npcGroupList_80241C94);
s32 pad_001CB8[2];
Script N(script_80241CC0);
Script N(script_802421C8);
s32 N(unk_80242288)[1];
Script N(script_8024228C);
s32 pad_002408[2];
const char D_80242410_97DA40[8]; // "isk_03"
const char D_80242418_97DA48[8]; // "isk_07"
const char D_80242420_97DA50[8]; // "isk_06"
const char D_80242428_97DA58[8]; // "isk_05"
s32 pad_00248C[1];
const char D_80242490_97DAC0[8]; // "isk_04"
s32 pad_002498[2];

// text: func_80240000_97B630

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_802400BC_97B6EC

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_802403D4_97BA04

// text: func_80240814_97BE44

// text: func_8024085C_97BE8C

// text: func_802408B4_97BEE4

s32 pad_000928[] = {
    0x00000000, 0x00000000,
};

// text: func_80240930_97BF60

// text: func_8024095C_97BF8C

s32 pad_000A6C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 594.0f, -80.0f, 84.0f, 0.0f },
    { 594.0f, -340.0f, 84.0f, 0.0f },
    { 524.0f, 25.0f, -169.0f, 170.0f },
    { 571.0f, -80.0f, -186.0f, 170.0f },
    { 524.0f, -210.0f, -169.0f, 170.0f },
    { 543.0f, 25.0f, 5.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190098,
};

Script N(script_80240B10) = SCRIPT({
    if (SI_SAVE_FLAG(890) == 0) {
        spawn {
            FadeInMusic(1, 83, 0, 2000, 0, 127);
            FadeOutMusic(0, 2000);
            DisablePlayerInput(1);
            sleep 20;
            group 0;
            0x802D5830(1);
            ShowMessageAtScreenPos(0xD00DE, 160, 40);
            SI_SAVE_FLAG(890) = 1;
            DisablePlayerInput(0);
            0x802D5830(0);
            FadeInMusic(0, 24, 0, 2000, 0, 127);
            FadeOutMusic(1, 2000);
        }
        return;
    }
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
});

s32 pad_000CCC[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240CD0) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242410_97DA40, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240D2C) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80242418_97DA48, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240D88) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80242420_97DA50, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240DE4) = SCRIPT({
    group 27;
    UseExitHeading(40, 3);
    spawn ExitWalk;
    GotoMap(D_80242420_97DA50, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240E40) = SCRIPT({
    group 27;
    UseExitHeading(40, 4);
    spawn ExitWalk;
    GotoMap(D_80242428_97DA58, 0);
    sleep 100;
});

Script N(script_80240E9C) = SCRIPT({
    bind N(script_ExitWalk_80240CD0) to 0x80000 0;
    bind N(script_ExitWalk_80240D2C) to 0x80000 5;
    bind N(script_ExitWalk_80240D88) to 0x80000 10;
    bind N(script_ExitWalk_80240DE4) to 0x80000 14;
    bind N(script_ExitWalk_80240E40) to 0x80000 18;
});

Script N(script_EnterWalk_80240F38) = SCRIPT({
    SI_VAR(0) = N(script_80240E9C);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20001);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        await N(script_80241348);
        await N(script_8024228C);
        return;
    }
    MakeNpcs(1, N(npcGroupList_80241C94));
    await N(script_MakeEntities);
    await N(script_80241348);
    spawn N(script_80240B10);
    spawn N(script_EnterWalk_80240F38);
    sleep 1;
});

s32 N(itemList_80241090)[] = {
    0x00000011, 0x00000000,
};

Vec4f N(triggerCoord_80241098) =  { 510.0f, 25.0f, -184.0f, 0.0f };

Script N(script_802410A8) = SCRIPT({
    PlayEffect(66, 0, 63, 22, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(63, 1);
        sleep 1;
        EnableModel(63, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    SI_SAVE_FLAG(872) = 1;
    unbind;
});

Script N(script_80241180) = SCRIPT({
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
    PlaySoundAt(617, 0, 600, 0xFFFFFEB6, 100);
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(873) = 1;
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240000_97B630();
    SI_VAR(1) = 0;
    sleep 5;
    PlaySoundAtCollider(4, 613, 0);
    MakeLerp(0, 65, 65, 0);
10:
    UpdateLerp();
    TranslateGroup(68, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    ModifyColliderFlags(0, 4, 0x7FFFFE00);
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80241348) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(872), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802410A8), TriggerFlag_BOMB, N(triggerCoord_80241098), 1, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 63, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 9, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(873), 0),
        SI_CMD(ScriptOpcode_CALL, 0x802C971C, 68),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241180), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80241090), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 4, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 68, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_00143C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(873) == 0) {
        MakeEntity(0x802BCD68, 600, 0xFFFFFEB6, 100, 160, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    PlayEffect(32, 1, 504, 0xFFFFFF3F, 43, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 486, 0xFFFFFF3F, 0xFFFFFF80, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

s32 pad_001524[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80241530) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x3C,
    .waitTime = 0x3C,
    .alertRadius = 90.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 4.5f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 40.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241560) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802403D4_97BA04(N(aISettings_80241530));
});

s32 N(unk_802415D0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40E00000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80241600) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_802403D4_97BA04(N(unk_802415D0));
});

s32 N(unk_80241670)[] = {
    0x3F800000, 0x00000014, 0x00000005, 0x42F00000, 0x00000000, 0x00000003, 0x40C00000, 0x00000000,
    0x00000000, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_802416A0) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_802403D4_97BA04(N(unk_80241670));
});

Script N(script_80241710) = SCRIPT({
    func_80240814_97BE44();
    SetNpcAnimation(-1, 0x33000F);
    func_8024085C_97BE8C();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_802408B4_97BEE4();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_802403D4_97BA04(N(aISettings_80241530));
});

NpcSettings N(npcSettings_80241804) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241560),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

s32 unk_missing_80241830[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80241710), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80241600),
    EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x00110000, 0x00000000, 0x00180018,
    0x00000000, 0x00000000, N(script_802416A0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000,
    0x00190000,
};

StaticNpc N(npcGroup_802418B4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241804),
        .pos = { 561.0, 25.0, 47.0 },
        .flags = 0x00000400,
        .yaw = 355,
        .dropFlags = 0x80,
        .movement = { 0x00000231, 0x00000019, 0x0000002F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000025E, 0x00000019, 0x0000005E, 0x00000050, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00330001, 0x00330003, 0x00330004, 0x00330004, 0x00330000, 0x00330000, 0x00330007, 0x00330007, 0x0033000C, 0x00330005, 0x0033000D, 0x00330000, 0x00330000, 0x00330000, 0x00330000, 0x00330000,
        },
    },
};

StaticNpc N(npcGroup_80241AA4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241804),
        .pos = { 608.0, -260.0, -158.0 },
        .flags = 0x00000C00,
        .yaw = 175,
        .dropFlags = 0x80,
        .movement = { 0x00000260, 0xFFFFFEFC, 0xFFFFFF62, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000254, 0xFFFFFEFC, 0xFFFFFF35, 0x00000050, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00330001, 0x00330003, 0x00330004, 0x00330004, 0x00330000, 0x00330000, 0x00330007, 0x00330007, 0x0033000C, 0x00330005, 0x0033000D, 0x00330000, 0x00330000, 0x00330000, 0x00330000, 0x00330000,
        },
    },
};

NpcGroupList N(npcGroupList_80241C94) = {
    NPC_GROUP(N(npcGroup_802418B4), 0x0B090004),
    NPC_GROUP(N(npcGroup_80241AA4), 0x0B090004),
    {},
};

s32 pad_001CB8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241CC0) = SCRIPT({
    EnableStatusMenu(0);
    DemoSetButtons(4);
    sleep 5;
    DemoSetButtons(0);
    sleep 93;
    DemoJoystickXY(2, 0);
    sleep 1;
    DemoJoystickXY(15, 0);
    sleep 1;
    DemoJoystickXY(45, 19);
    sleep 1;
    DemoJoystickXY(75, 11);
    sleep 1;
    DemoJoystickXY(76, 11);
    sleep 8;
    DemoJoystickXY(69, 11);
    sleep 1;
    DemoJoystickXY(0xFFFFFFFE, 21);
    sleep 1;
    DemoJoystickXY(-1, -1);
    func_80240930_97BF60(3);
    sleep 57;
    DemoSetButtons(4);
    sleep 4;
    DemoSetButtons(0);
    sleep 34;
    DemoJoystickXY(-1, 0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFFC, 0);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE9, 3);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD0, 4);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBD, 6);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB4, 7);
    sleep 1;
    DemoJoystickXY(0xFFFFFFB2, 7);
    sleep 4;
    DemoJoystickXY(0xFFFFFFDC, 6);
    sleep 1;
    DemoJoystickXY(1, -1);
    sleep 1;
    DemoJoystickXY(47, 0xFFFFFFFA);
    sleep 1;
    DemoJoystickXY(74, 0xFFFFFFF4);
    sleep 1;
    DemoJoystickXY(63, 0xFFFFFFF7);
    sleep 1;
    DemoJoystickXY(-1, 0);
    sleep 70;
    DemoJoystickXY(0, 0);
    sleep 2;
    DemoJoystickXY(3, 0);
    sleep 1;
    DemoJoystickXY(17, 0);
    sleep 1;
    DemoJoystickXY(38, 0);
    sleep 1;
    DemoJoystickXY(64, 0xFFFFFFFD);
    sleep 1;
    DemoJoystickXY(76, 0xFFFFFFFA);
    sleep 8;
    DemoJoystickXY(77, 0xFFFFFFFB);
    sleep 3;
    DemoJoystickXY(77, 0xFFFFFFFC);
    sleep 1;
    DemoJoystickXY(77, 0xFFFFFFFE);
    sleep 2;
    DemoJoystickXY(77, -1);
    sleep 1;
    DemoJoystickXY(78, -1);
    sleep 2;
    DemoJoystickXY(78, 0);
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_80242490_97DAC0, 5, 2);
    sleep 323;
});

Script N(script_802421C8) = SCRIPT({
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
    GotoMapSpecial(D_80242490_97DAC0, 2, 3);
    sleep 313;
});

s32 N(unk_80242288)[] = {
    0x00000000,
};

Script N(script_8024228C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, 530, 25, 0xFFFFFFCE);
    SetCamPitch(0, 12, 0xFFFFFFFD);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, SI_VAR(0), 25, SI_VAR(2));
    PanToTarget(0, 0, 1);
    spawn {
        sleep 1;
        loop {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamPitch(0, 12, 0xFFFFFFFD);
            SetPanTarget(0, SI_VAR(0), 25, SI_VAR(2));
            sleep 1;
        }
    }
    func_8024095C_97BF8C();
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_802421C8);
    spawn N(script_80241CC0);
});

s32 pad_002408[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242410_97DA40

// rodata: D_80242418_97DA48

// rodata: D_80242420_97DA50

// rodata: D_80242428_97DA58

// rodata: D_80242430_97DA60

// rodata: jtbl_80242438_97DA68

s32 pad_00248C[] = {
    0x00000000,
};

// rodata: D_80242490_97DAC0

s32 pad_002498[] = {
    0x00000000, 0x00000000,
};
