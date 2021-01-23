#include "jan_06.h"

s32 pad_00030C[1];
s32 pad_0003A8[2];
s32 pad_0004FC[1];
s32 pad_00073C[1];
s32 pad_0025DC[1];
Script N(script_UpdateTexturePan_80242660);
Script N(script_ExitWalk_802426FC);
Script N(script_ExitWalk_80242758);
Script N(script_ExitWalk_802427B4);
Script N(script_ExitWalk_80242810);
Script N(script_8024286C);
Script N(script_802428EC);
Script N(main);
s32 pad_00302C[1];
s32 N(itemList_80243030)[2];
Script N(script_80243038);
Script N(script_802432E4);
Script N(script_8024333C);
Script N(script_80243544);
Script N(script_802436BC);
s32 pad_003704[3];
Script N(script_80243710);
Script N(script_802438E0);
Script N(script_802439A8);
Script N(script_80243BE4);
Script N(script_80243D2C);
Script N(script_80243EBC);
Script N(script_80243F68);
s32 pad_003FB8[2];
Script N(script_SearchBush_80243FC0);
Script N(script_ShakeTree_80244320);
s32 N(treeDropList_Tree1)[8];
Script N(script_802449E4);
s32 pad_004A84[3];
Script N(script_MakeEntities);
s32 pad_004AE8[2];
Script N(script_NpcAI_80244B20);
Script N(script_80244B88);
Script N(script_80244BD4);
Script N(script_Interact_80244C04);
Script N(script_NpcAI_80244D3C);
Script N(script_80244EB8);
Script N(script_80244EDC);
s32 unk_missing_80244FA8[15];
s32 N(extraAnimationList_80244FE4)[2];
Script N(script_80244FEC);
Script N(script_NpcAI_802450D8);
Script N(script_NpcAI_80245174);
s32 N(extraAnimationList_80245248)[5];
StaticNpc N(npcGroup_8024525C)[1];
s32 N(extraAnimationList_8024544C)[13];
StaticNpc N(npcGroup_80245480)[2];
StaticNpc N(npcGroup_80245860)[1];
StaticNpc N(npcGroup_80245A50)[1];
StaticNpc N(npcGroup_80245C40)[1];
NpcGroupList N(npcGroupList_80245E30);
s32 pad_005E78[2];
Script N(script_SearchBush_80245E80);
Script N(script_ShakeTree_802461E0);
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
s32 N(searchBushEvent_Bush5)[4];
s32 N(searchBushEvent_Bush6)[4];
s32 N(searchBushEvent_Bush7)[4];
s32 N(searchBushEvent_Bush8)[4];
s32 N(searchBushEvent_Bush9)[4];
s32 N(searchBushEvent_Bush10)[4];
s32 N(searchBushEvent_Bush11)[4];
s32 N(searchBushEvent_Bush12)[4];
s32 N(searchBushEvent_Bush13)[4];
s32 N(searchBushEvent_Bush14)[4];
Script N(script_80246A14);
s32 pad_006C8C[1];
const char D_80246C90_B594C0[8]; // "jan_05"
const char D_80246C98_B594C8[8]; // "jan_07"
const char D_80246CA0_B594D0[8]; // "jan_12"
const char D_80246CA8_B594D8[8]; // "jan_09"
s32 pad_006CF4[1];
s32 pad_007038[2];

// text: func_80240000_B52830

// text: func_80240124_B52954

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_B52B40

s32 pad_0003A8[] = {
    0x00000000, 0x00000000,
};

// text: func_802403B0_B52BE0

s32 pad_0004FC[] = {
    0x00000000,
};

// text: func_80240500_B52D30

// text: func_80240570_B52DA0

s32 pad_00073C[] = {
    0x00000000,
};

// text: func_80240740_B52F70

// text: func_80240970_B531A0

// text: N(UnkNpcAIFunc1)

// text: func_80240D68_B53598

// text: func_80240F0C_B5373C

// text: func_80240FEC_B5381C

// text: N(UnkDurationCheck)

// text: func_80241330_B53B60

// text: func_80241554_B53D84

// text: N(UnkNpcAIFunc4)

// text: func_80241658_B53E88

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80241A24_B54254

// text: func_80241BD8_B54408

// text: func_80241E38_B54668

// text: func_802420EC_B5491C

// text: func_802423A0_B54BD0

// text: func_80242410_B54C40

s32 pad_0025DC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 470.0f, 0.0f },
    { 470.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -470.0f, 180.0f },
    { -470.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900F8,
};

Script N(script_UpdateTexturePan_80242660) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_B52830();
                    return;
                }
            }
        }
    }
    func_80240124_B52954();
});

Script N(script_ExitWalk_802426FC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246C90_B594C0, 3);
    sleep 100;
});

Script N(script_ExitWalk_80242758) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80246C98_B594C8, 0);
    sleep 100;
});

Script N(script_ExitWalk_802427B4) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80246CA0_B594D0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80242810) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80246CA8_B594D8, 1);
    sleep 100;
});

Script N(script_8024286C) = SCRIPT({
    bind N(script_ExitWalk_802426FC) to 0x80000 8;
    bind N(script_ExitWalk_80242758) to 0x80000 12;
    bind N(script_ExitWalk_802427B4) to 0x80000 4;
    bind N(script_ExitWalk_80242810) to 0x80000 0;
});

Script N(script_802428EC) = SCRIPT({
    if (SI_SAVE_VAR(0) < 18) {
        TranslateModel(107, 0, 0, 0);
        TranslateModel(108, 0, 0, 0);
        TranslateModel(109, 0, 0, 0);
        TranslateModel(103, 0, 0, 0);
        TranslateModel(104, 0, 0, 0);
        TranslateModel(105, 0, 0, 0);
        TranslateModel(106, 0, 0, 0);
        TranslateModel(110, 0, 0, 0);
        TranslateModel(111, 0, 0, 0);
        ModifyColliderFlags(0, 87, 0x7FFFFE00);
    } else {
        TranslateModel(107, 0xFFFFFF9C, 0, 0);
        TranslateModel(108, 0xFFFFFF9C, 0, 0);
        TranslateModel(109, 0xFFFFFF9C, 0, 0);
        TranslateModel(103, 0xFFFFFF9C, 0, 0);
        TranslateModel(104, 0xFFFFFF9C, 0, 0);
        TranslateModel(105, 0xFFFFFF9C, 0, 0);
        TranslateModel(106, 0xFFFFFF9C, 0, 0);
        TranslateModel(110, 0xFFFFFF9C, 0, 0);
        TranslateModel(111, 0xFFFFFF9C, 0, 0);
        RotateModel(107, 0, 0, 1, 0);
        RotateModel(108, 0, 0, 1, 0);
        RotateModel(109, 0, 0, 1, 0);
        RotateModel(104, 0, 0, 1, 0);
        RotateModel(105, 0, 0, 1, 0);
        RotateModel(106, 0, 0, 1, 0);
        RotateModel(110, 0, 0, 1, 0);
        RotateModel(111, 0, 0, 1, 0);
        MakeItemEntity(42, 0xFFFFFF9C, 15, 0xFFFFFE70, 1, 0);
        ModifyColliderFlags(0, 86, 0x7FFFFE00);
        ModifyColliderFlags(0, 88, 0x7FFFFE00);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SetZoneEnabled(4, 0);
    spawn N(script_802428EC);
    MakeNpcs(0, N(npcGroupList_80245E30));
    await N(script_MakeEntities);
    ModifyColliderFlags(3, 54, 4);
    ModifyColliderFlags(3, 56, 4);
    ModifyColliderFlags(3, 58, 4);
    ModifyColliderFlags(0, 54, 0x80000);
    ModifyColliderFlags(0, 56, 0x80000);
    ModifyColliderFlags(0, 58, 0x80000);
    ModifyColliderFlags(3, 100, 1);
    ModifyColliderFlags(3, 101, 1);
    ModifyColliderFlags(3, 102, 1);
    ModifyColliderFlags(3, 103, 1);
    spawn N(script_802436BC);
    spawn N(script_802449E4);
    spawn N(script_80246A14);
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    SI_VAR(0) = N(script_8024286C);
    spawn EnterWalk;
    spawn N(script_80243F68);
    SetMusicTrack(0, 36, 0, 8);
    ClearAmbientSounds(250);
    0x802C971C(138);
    EnableTexPanning(137, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFB0;
        SI_VAR(2) = 140;
        SI_VAR(3) = 80;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242660);
    }
});

s32 pad_00302C[] = {
    0x00000000,
};

s32 N(itemList_80243030)[] = {
    0x0000002A, 0x00000000,
};

Script N(script_80243038) = SCRIPT({
    spawn {
        ShakeCam(0, 0, 25, 0.80078125);
        ShakeCam(0, 0, 25, 0.7001953125);
    }
    MakeLerp(1, 5, 50, 2);
    SI_VAR(2) = 1;
    loop {
        UpdateLerp();
        SI_VAR(2) *= -1;
        SI_VAR(3) = SI_VAR(2);
        SI_VAR(3) *= SI_VAR(0);
        TranslateGroup(112, SI_VAR(3), 0, 0);
        RotateGroup(112, 0, 0, 1, 0);
        SetItemPos(SI_MAP_VAR(11), SI_VAR(3), 15, 0xFFFFFE70);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        ShakeCam(0, 0, 25, 0.6005859375);
        ShakeCam(0, 0, 25, 0.5);
        ShakeCam(0, 0, 25, 0.400390625);
    }
    MakeLerp(5, 0, 75, 5);
    loop {
        UpdateLerp();
        SI_VAR(2) *= -1;
        SI_VAR(3) = SI_VAR(2);
        SI_VAR(3) *= SI_VAR(0);
        TranslateGroup(112, SI_VAR(3), 0, 0);
        RotateGroup(112, 0, 0, 1, 0);
        SetItemPos(SI_MAP_VAR(11), SI_VAR(3), 15, 0xFFFFFE70);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802432E4) = SCRIPT({
    loop {
        GetModelCenter(111);
        func_80240310_B52B40(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_8024333C) = SCRIPT({
    PlaySound(0x80000018);
    await N(script_80243038);
    GetModelCenter(111);
    PlaySoundAt(0x80000010, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(9) = spawn N(script_802432E4);
    spawn {
        ShakeCam(0, 0, 180, 0.400390625);
    }
    MakeLerp(0, 0xFFFFFF9C, 180, 2);
    loop {
        UpdateLerp();
        TranslateGroup(112, SI_VAR(0), 0, 0);
        RotateGroup(112, 0, 0, 1, 0);
        SetItemPos(SI_MAP_VAR(11), SI_VAR(0), 15, 0xFFFFFE70);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ShakeCam(0, 0, 15, 1.0);
    kill SI_VAR(9);
    StopSound(0x80000010);
    StopSound(0x80000018);
    ModifyColliderFlags(0, 86, 0x7FFFFE00);
    ModifyColliderFlags(0, 88, 0x7FFFFE00);
    ModifyColliderFlags(1, 87, 0x7FFFFE00);
    sleep 10;
    ResetCam(0, 90.0);
});

Script N(script_80243544) = SCRIPT({
    group 0;
    0x802D5830(1);
    0x802D6420();
    if (SI_VAR(0) <= 0) {
        if (SI_VAR(0) == 0) {
            ShowMessageAtScreenPos(0x1D015B, 160, 40);
        }
        0x802D6954();
        0x802D5830(0);
        return;
    }
    DisablePlayerInput(1);
    RemoveKeyItemAt(SI_VAR(1));
    MakeItemEntity(42, 0, 15, 0xFFFFFE70, 1, 0);
    SI_MAP_VAR(11) = SI_VAR(0);
    0x802D6954();
    0x802D5830(0);
    SetPlayerAnimation(0x1060006);
    sleep 20;
    SetPlayerAnimation(0x10000);
    sleep 10;
    await N(script_8024333C);
    SI_SAVE_VAR(0) = 18;
    DisablePlayerInput(0);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_802436BC) = {
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 18),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243544), TriggerFlag_WALL_INTERACT, 86, N(itemList_80243030), 0, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_003704[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243710) = SCRIPT({
    if (SI_SAVE_FLAG(1236) == 0) {
        ModifyColliderFlags(0, 92, 0x7FFFFE00);
        EnableModel(130, 0);
        EnableModel(133, 0);
        TranslateGroup(131, 0, 0xFFFFFF6A, 0);
        TranslateGroup(134, 0, 0xFFFFFF6A, 0);
    } else {
        ModifyColliderFlags(0, 90, 0x7FFFFE00);
        ModifyColliderFlags(0, 91, 0x7FFFFE00);
        ModifyColliderFlags(1, 92, 0x7FFFFE00);
        EnableModel(130, 1);
        EnableModel(133, 1);
        TranslateGroup(131, 0, 10, 0);
        TranslateGroup(134, 0, 10, 0);
        RotateGroup(131, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(134, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(131, 90, 0, 1, 0);
        RotateGroup(134, 0xFFFFFFA6, 0, 1, 0);
    }
});

Script N(script_802438E0) = SCRIPT({
    PlaySoundAtCollider(90, 357, 0);
    MakeLerp(0xFFFFFF6A, 0xFFFFFF57, 5, 6);
    loop {
        UpdateLerp();
        TranslateGroup(131, 0, SI_VAR(0), 0);
        TranslateGroup(134, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802439A8) = SCRIPT({
    spawn {
        sleep 17;
        SetPlayerAnimation(0x1002A);
        func_802403B0_B52BE0(130, SI_MAP_FLAG(11));
    }
    ModifyColliderFlags(0, 90, 0x7FFFFE00);
    MakeLerp(0xFFFFFF57, 60, 30, 4);
    loop {
        UpdateLerp();
        TranslateGroup(131, 0, SI_VAR(0), 0);
        TranslateGroup(134, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 1;
    MakeLerp(60, 0, 30, 2);
    loop {
        UpdateLerp();
        TranslateGroup(131, 0, SI_VAR(0), 0);
        TranslateGroup(134, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetPlayerAnimation(0x10002);
    PlaySoundAtCollider(90, 8349, 0);
    PlayEffect(6, 4, 0xFFFFFF9C, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    ShakeCam(0, 2, 3, 1);
});

Script N(script_80243BE4) = SCRIPT({
    spawn {
        sleep 50;
        SI_MAP_FLAG(11) = 1;
    }
    MakeLerp(0, 0xFFFFFFA6, 60, 2);
    loop {
        UpdateLerp();
        TranslateGroup(131, 0, 0, 0);
        TranslateGroup(134, 0, 0, 0);
        RotateGroup(131, SI_VAR(0), 0, 0, 1);
        RotateGroup(134, SI_VAR(0), 0, 0, 1);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        ShakeCam(0, 2, 3, 1);
    }
});

Script N(script_80243D2C) = SCRIPT({
    PlaySoundAtCollider(90, 8350, 0);
    EnableModel(130, 1);
    EnableModel(133, 1);
    MakeLerp(0, 90, 30, 8);
    loop {
        UpdateLerp();
        SI_VAR(2) = SI_VAR(0);
        SI_VAR(2) /= 9;
        TranslateGroup(131, 0, SI_VAR(2), 0);
        TranslateGroup(134, 0, SI_VAR(2), 0);
        RotateGroup(131, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(134, 0xFFFFFFA6, 0, 0, 1);
        RotateGroup(131, SI_VAR(0), 0, 1, 0);
        RotateGroup(134, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80243EBC) = SCRIPT({
    SI_SAVE_FLAG(1236) = 1;
    DisablePlayerInput(1);
    await N(script_802438E0);
    sleep 1;
    await N(script_802439A8);
    sleep 1;
    await N(script_80243BE4);
    sleep 1;
    await N(script_80243D2C);
    sleep 1;
    DisablePlayerInput(0);
    spawn N(script_80243710);
});

Script N(script_80243F68) = SCRIPT({
    if (SI_SAVE_FLAG(1236) == 0) {
        bind N(script_80243EBC) to TriggerFlag_WALL_HAMMER 90;
    }
    spawn N(script_80243710);
});

s32 pad_003FB8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243FC0) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240570_B52DA0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240570_B52DA0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80244320) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240570_B52DA0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240570_B52DA0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240570_B52DA0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240570_B52DA0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x34 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2B },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x00000157, 0xFFFFFF1F, 0x00000050, 0xFFFFFE84, 0x0000000F, 0xF8406066, 0xFAA2B58A,
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nan, 1.5974802493302915e-43, nan }, { nan, 1.5974802493302915e-43, nan } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_80244984) =  { -285.0, 0.0, -360.0, 0.0 };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x3B },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2C },
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { 5.773349673018246e-43, 1.5974802493302915e-43, nan }, { 6.964453367694341e-43, 1.5974802493302915e-43, nan } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_802449D4) =  { 452.0, 0.0, -135.0, 0.0 };

Script N(script_802449E4) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80244320) to TriggerFlag_WALL_HAMMER 67;
    bind N(script_ShakeTree_80244320) to TriggerFlag_BOMB N(triggerCoord_80244984);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80244320) to TriggerFlag_WALL_HAMMER 68;
    bind N(script_ShakeTree_80244320) to TriggerFlag_BOMB N(triggerCoord_802449D4);
});

s32 pad_004A84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BC7AC, 84, 0, 0xFFFFFEC0, 5, 0x80000000);
    MakeItemEntity(343, 285, 0xFFFFFFC4, 220, 17, SI_SAVE_FLAG(1240));
});

s32 pad_004AE8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80244AF0) = {
    .moveSpeed = 1.5,
    .moveTime = 0x1E,
    .waitTime = 0xA,
    .alertRadius = 150.0,
    .unk_10 = 0.0,
    .unk_14 = 0x3,
    .chaseSpeed = 5.0,
    .unk_1C = 0x46,
    .unk_20 = 0x5,
    .chaseRadius = 200.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244B20) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80241330_B53B60(N(aISettings_80244AF0), 2);
});

NpcSettings N(npcSettings_80244B5C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244B20),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_80244B88) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
});

Script N(script_80244BD4) = SCRIPT({
    sleep 45;
    BindNpcInteract(-1, N(script_Interact_80244C04));
});

Script N(script_Interact_80244C04) = SCRIPT({
    GetSelfVar(1, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetSelfVar(1, 1);
        PlaySoundAtNpc(-1, 8345, 0);
        SetNpcAnimation(-1, 0x430000);
        sleep 1;
        func_80241554_B53D84();
        SetNpcAnimation(-1, 0x430001);
        spawn {
            BindNpcInteract(-1, 0);
            spawn N(script_80244BD4);
            sleep 45;
            SetSelfVar(1, 0);
            SetNpcAnimation(-1, 0x430000);
        }
    }
});

NpcSettings N(npcSettings_80244D10) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = &N(script_80244B88),
    .onInteract = &N(script_Interact_80244C04),
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244D3C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x440001);
    SetSelfVar(0, 0);
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    NpcFacePlayer(-1, 0);
    SetNpcAnimation(-1, 0x440008);
    sleep 15;
    PlaySoundAtNpc(-1, 8346, 0);
    sleep 10;
    SetPlayerAnimation(0x1002B);
    sleep 5;
    SetNpcAnimation(-1, 0x440002);
    DisablePlayerInput(0);
    0x802D5830(0);
    StartBattle();
});

Script N(script_80244EB8) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_80244EDC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            BindNpcAI(-1, N(script_NpcAI_80244D3C));
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_80244F7C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = &N(script_80244EB8),
    .ai = &N(script_NpcAI_80244D3C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244EDC),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

s32 unk_missing_80244FA8[] = {
    0x00440000, 0x00440001, 0x00440002, 0x00440008, 0xFFFFFFFF, 0x00420000, 0x00420003, 0x00420005,
    0x00420006, 0x00420007, 0x0042000F, 0x00420010, 0x0042001A, 0x0042001B, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80244FE4)[] = {
    0x00420000, 0xFFFFFFFF,
};

Script N(script_80244FEC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_802450A8) = {
    .moveSpeed = 1.7000000476837158,
    .moveTime = 0x64,
    .waitTime = 0x1,
    .alertRadius = 100.0,
    .unk_10 = 30.0,
    .unk_14 = 0x1,
    .chaseSpeed = 3.5,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 120.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802450D8) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 12);
    SetSelfVar(3, 9);
    func_802420EC_B5491C(N(aISettings_802450A8));
});

NpcSettings N(npcSettings_80245148) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802450D8),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_NpcAI_80245174) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 22);
    SetSelfVar(2, 40);
    SetSelfVar(3, 28);
    SetSelfVar(4, 1);
    SetSelfVar(15, 0);
    func_80241BD8_B54408();
});

NpcSettings N(npcSettings_8024521C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x8,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80245174),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244FEC),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_80245248)[] = {
    0x002B0201, 0x002B0202, 0x002B0203, 0x002B0208, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_8024525C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244B5C),
        .pos = { 310.0, 24.0, 35.0 },
        .flags = 0x00400400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .movement = { 0x00000136, 0x00000018, 0x00000023, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000136, 0x00000018, 0x00000023, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
        .extraAnimations = N(extraAnimationList_80245248),
    },
};

s32 N(extraAnimationList_8024544C)[] = {
    0x00420003, 0x00420004, 0x00420005, 0x00420006, 0x0042000F, 0x00420010, 0x00420007, 0x00420008,
    0x00420009, 0x0042000D, 0x0042001A, 0x0042001B, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80245480)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80245148),
        .pos = { -298.0, 35.0, 37.0 },
        .flags = 0x00400400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SLEEPY_SHEEP, 10 } },
        .movement = { 0xFFFFFED6, 0x00000000, 0x00000025, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFED6, 0x00000000, 0x00000025, 0x00000096 },
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_8024544C),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024521C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_80244FE4),
    },
};

StaticNpc N(npcGroup_80245860)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244D10),
        .pos = { 410.0, 0.0, -30.0 },
        .flags = 0x00408D01,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_80245A50)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80244F7C),
        .pos = { 110.0, 0.0, 55.0 },
        .flags = 0x00408D01,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_TASTY_TONIC, 5 }, { ItemId_SUPER_SODA, 5 } },
        .animations = {
            0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x0044000E, 0x0044000E, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_80245C40)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80244F7C),
        .pos = { -430.0, 0.0, -80.0 },
        .flags = 0x00408D01,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_TASTY_TONIC, 5 }, { ItemId_SUPER_SODA, 5 } },
        .animations = {
            0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x0044000E, 0x0044000E, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001,
        },
        .tattle = 0x1A00D3,
    },
};

NpcGroupList N(npcGroupList_80245E30) = {
    NPC_GROUP(N(npcGroup_8024525C), 0x140D0002),
    NPC_GROUP(N(npcGroup_80245480), 0x14020002),
    NPC_GROUP(N(npcGroup_80245860), 0x00000000),
    NPC_GROUP(N(npcGroup_80245A50), 0x14080002),
    NPC_GROUP(N(npcGroup_80245C40), 0x14080002),
    {},
};

s32 pad_005E78[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80245E80) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80242410_B54C40, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80242410_B54C40, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_802461E0) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80242410_B54C40, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80242410_B54C40, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80242410_B54C40, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80242410_B54C40, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4A },
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { nan, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), 0x00000000, N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4C },
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nan, 3.0828566215145976e-44, nan } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4E },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { nan, 3.0828566215145976e-44, nan } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x50 },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nan, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x52 },
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { nan, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), 0x00000000, N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x54 },
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { 1.1770907100328463e-43, 3.0828566215145976e-44, nan } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), 0x00000000, N(treeEffectVectors_Bush6), 0x00000000,
};

ModelIdList N(treeModelList_Bush7_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x56 },
};

TreeEffectVectorList N(treeEffectVectors_Bush7) = {
    .count = 0x1,
    .vectors = { { 2.802596928649634e-43, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush7)[] = {
    N(treeModelList_Bush7_Bush), 0x00000000, N(treeEffectVectors_Bush7), 0x00000000,
};

ModelIdList N(treeModelList_Bush8_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x58 },
};

TreeEffectVectorList N(treeEffectVectors_Bush8) = {
    .count = 0x1,
    .vectors = { { 1.5974802493302915e-43, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush8)[] = {
    N(treeModelList_Bush8_Bush), 0x00000000, N(treeEffectVectors_Bush8), 0x00000000,
};

ModelIdList N(treeModelList_Bush9_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5A },
};

TreeEffectVectorList N(treeEffectVectors_Bush9) = {
    .count = 0x1,
    .vectors = { { 2.2981294814927e-43, 3.0828566215145976e-44, nan } },
};

s32 N(searchBushEvent_Bush9)[] = {
    N(treeModelList_Bush9_Bush), 0x00000000, N(treeEffectVectors_Bush9), 0x00000000,
};

ModelIdList N(treeModelList_Bush10_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5C },
};

TreeEffectVectorList N(treeEffectVectors_Bush10) = {
    .count = 0x1,
    .vectors = { { nan, 3.0828566215145976e-44, 5.2128302872883195e-43 } },
};

s32 N(searchBushEvent_Bush10)[] = {
    N(treeModelList_Bush10_Bush), 0x00000000, N(treeEffectVectors_Bush10), 0x00000000,
};

ModelIdList N(treeModelList_Bush11_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5E },
};

TreeEffectVectorList N(treeEffectVectors_Bush11) = {
    .count = 0x1,
    .vectors = { { nan, 2.802596928649634e-44, 4.778427763347626e-43 } },
};

s32 N(searchBushEvent_Bush11)[] = {
    N(treeModelList_Bush11_Bush), 0x00000000, N(treeEffectVectors_Bush11), 0x00000000,
};

ModelIdList N(treeModelList_Bush12_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x60 },
};

TreeEffectVectorList N(treeEffectVectors_Bush12) = {
    .count = 0x1,
    .vectors = { { 2.1019476964872256e-43, 2.802596928649634e-44, 6.810310536618611e-43 } },
};

s32 N(searchBushEvent_Bush12)[] = {
    N(treeModelList_Bush12_Bush), 0x00000000, N(treeEffectVectors_Bush12), 0x00000000,
};

ModelIdList N(treeModelList_Bush13_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x62 },
};

TreeEffectVectorList N(treeEffectVectors_Bush13) = {
    .count = 0x1,
    .vectors = { { 5.5491419187262756e-43, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush13)[] = {
    N(treeModelList_Bush13_Bush), 0x00000000, N(treeEffectVectors_Bush13), 0x00000000,
};

ModelIdList N(treeModelList_Bush14_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x64 },
};

TreeEffectVectorList N(treeEffectVectors_Bush14) = {
    .count = 0x1,
    .vectors = { { 6.151700258385947e-43, 3.0828566215145976e-44, 1.961817850054744e-43 } },
};

s32 N(searchBushEvent_Bush14)[] = {
    N(treeModelList_Bush14_Bush), 0x00000000, N(treeEffectVectors_Bush14), 0x00000000,
};

Script N(script_80246A14) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 70;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 71;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 72;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 73;
    SI_VAR(0) = N(searchBushEvent_Bush5);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 74;
    SI_VAR(0) = N(searchBushEvent_Bush6);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 75;
    SI_VAR(0) = N(searchBushEvent_Bush7);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 76;
    SI_VAR(0) = N(searchBushEvent_Bush8);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 77;
    SI_VAR(0) = N(searchBushEvent_Bush9);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 78;
    SI_VAR(0) = N(searchBushEvent_Bush10);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 79;
    SI_VAR(0) = N(searchBushEvent_Bush11);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 80;
    SI_VAR(0) = N(searchBushEvent_Bush12);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 81;
    SI_VAR(0) = N(searchBushEvent_Bush13);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 82;
    SI_VAR(0) = N(searchBushEvent_Bush14);
    bind N(script_SearchBush_80245E80) to TriggerFlag_WALL_INTERACT 83;
});

s32 pad_006C8C[] = {
    0x00000000,
};

// rodata: D_80246C90_B594C0

// rodata: D_80246C98_B594C8

// rodata: D_80246CA0_B594D0

// rodata: D_80246CA8_B594D8

// rodata: D_80246CB0_B594E0

// rodata: jtbl_80246CB8_B594E8

s32 pad_006CF4[] = {
    0x00000000,
};

// rodata: jtbl_80246CF8_B59528

// rodata: D_80246D10_B59540

// rodata: jtbl_80246D18_B59548

// rodata: jtbl_80246EA8_B596D8

s32 pad_007038[] = {
    0x00000000, 0x00000000,
};

