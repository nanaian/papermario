#include "obk_01.h"

s32 unk_missing_8024001C[31];
s32 pad_0007D4[3];
s32 pad_00113C[1];
Script N(script_802411F0);
s32 pad_001268[2];
Script N(script_ExitDoubleDoor_80241270);
Script N(script_ExitSingleDoor_80241324);
Script N(script_ExitSingleDoor_802413F8);
Script N(script_ExitSingleDoor_802414D8);
Script N(script_ExitSingleDoor_802415B8);
Script N(script_ExitDoubleDoor_80241698);
Script N(script_ExitDoubleDoor_8024174C);
Script N(script_80241800);
Script N(script_EnterDoubleDoor_802418D4);
Script N(main);
s32 N(itemList_80241C50)[2];
s32 N(unk_80241C58)[4];
Script N(script_80241C68);
Script N(script_80241C88);
Script N(script_80241DD8);
Script N(script_80241FB0);
Script N(script_8024218C);
Script N(script_8024293C);
Script N(script_802429E8);
Script N(script_80242CE8);
s32 pad_002F5C[1];
Script N(script_80242F60);
Script N(script_80243094);
Script N(script_802436C4);
Script N(script_80243904);
Script N(script_80243A38);
s32 N(itemList_80243B00)[2];
Script N(script_80243B08);
s32 unk_missing_80243C7C[61];
Script N(script_80243D70);
s32 pad_003FFC[1];
Script N(script_NpcAI_80244030);
Script N(script_802440A8);
s32 N(unk_802440F0)[1];
Script N(script_802440F4);
Script N(script_80244124);
s32 N(unk_80244154)[1];
s32 N(unk_80244158)[1];
Script N(script_8024415C);
Script N(script_802442A0);
Script N(script_802442F0);
Script N(script_80244370);
Script N(script_80244694);
Script N(script_80244704);
s32 N(unk_802449FC)[2];
Script N(script_80244A04);
s32 N(shortTable_80244A54)[2];
Script N(script_Idle_80244A5C);
Script N(script_Aux_80244A78);
Script N(script_Init_80244AE8);
Script N(script_Init_80244B34);
Script N(script_Interact_80244B80);
Script N(script_Interact_80244C28);
Script N(script_Init_80244DA4);
Script N(script_Init_80244DFC);
StaticNpc N(npcGroup_80244E54)[1];
StaticNpc N(npcGroup_80245044)[1];
StaticNpc N(npcGroup_80245234)[1];
StaticNpc N(npcGroup_80245424)[2];
NpcGroupList N(npcGroupList_80245804);
Script N(script_MakeEntities);
s32 pad_005888[2];
const char D_80245890_BC2A30[8]; // "mim_11"
const char D_80245898_BC2A38[8]; // "obk_02"
const char D_802458A0_BC2A40[8]; // "obk_05"
const char D_802458A8_BC2A48[8]; // "obk_07"
const char D_802458B0_BC2A50[8]; // "obk_08"
const char D_802458B8_BC2A58[8]; // "obk_09"

// text: func_80240000_BBD1A0

s32 unk_missing_8024001C[] = {
    0x3C03800B, 0x24631D80, 0x94620002, 0x34420001, 0xA4620002, 0x03E00008, 0x24020002, 0x27BDFFE8,
    0xAFBF0010, 0x8C82000C, 0x0C0B210B, 0x8C450000, 0x4600008D, 0x44021000, 0x00000000, 0x44820000,
    0x00000000, 0x46800020, 0x8FBF0010, 0x24020002, 0x3C01800B, 0xE4201D98, 0x03E00008, 0x27BD0018,
    0x3C028007, 0x8C42419C, 0x90420012, 0x000211C2, 0xAC82009C, 0x03E00008, 0x24020002,
};

// text: func_80240098_BBD238

// text: func_802406AC_BBD84C

// text: func_80240730_BBD8D0

// text: func_80240790_BBD930

s32 pad_0007D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802407E0_BBD980

// text: func_80240894_BBDA34

// text: func_802408F8_BBDA98

// text: func_80240954_BBDAF4

// text: func_80240B24_BBDCC4

// text: func_80240B78_BBDD18

// text: func_80240BB0_BBDD50

// text: func_80240C4C_BBDDEC

// text: func_80240D3C_BBDEDC

// text: func_80240EC8_BBE068

// text: func_80240F0C_BBE0AC

// text: func_80240F38_BBE0D8

// text: func_80241094_BBE234

s32 pad_00113C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 460.0f, -420.0f, 630.0f, 0.0f },
    { 250.0f, -420.0f, 15.0f, 180.0f },
    { 610.0f, -420.0f, 15.0f, 180.0f },
    { 250.0f, -210.0f, 15.0f, 180.0f },
    { 610.0f, -210.0f, 15.0f, 180.0f },
    { 270.0f, 0.0f, 15.0f, 180.0f },
    { 630.0f, 0.0f, 15.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900B2,
};

Script N(script_802411F0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
    ClearAmbientSounds(250);
});

s32 pad_001268[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80241270) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 85;
    SI_VAR(2) = 80;
    SI_VAR(3) = 78;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245890_BC2A30, 2);
    sleep 100;
});

Script N(script_ExitSingleDoor_80241324) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFD7) {
        return;
    }
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 1;
    SI_VAR(1) = 86;
    SI_VAR(2) = 62;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245898_BC2A38, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_802413F8) = SCRIPT({
    group 27;
    if (SI_SAVE_VAR(0) < 0xFFFFFFD3) {
        spawn N(script_80243D70);
        return;
    }
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 87;
    SI_VAR(2) = 64;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802458A0_BC2A40, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_802414D8) = SCRIPT({
    group 27;
    if (SI_SAVE_VAR(0) < 0xFFFFFFD3) {
        spawn N(script_80243D70);
        return;
    }
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 3;
    SI_VAR(1) = 88;
    SI_VAR(2) = 66;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802458A8_BC2A48, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_802415B8) = SCRIPT({
    group 27;
    if (SI_SAVE_VAR(0) < 0xFFFFFFD3) {
        spawn N(script_80243D70);
        return;
    }
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 4;
    SI_VAR(1) = 89;
    SI_VAR(2) = 68;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802458B0_BC2A50, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241698) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 5;
    SI_VAR(1) = 90;
    SI_VAR(2) = 70;
    SI_VAR(3) = 72;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802458B8_BC2A58, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_8024174C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 6;
    SI_VAR(1) = 91;
    SI_VAR(2) = 74;
    SI_VAR(3) = 76;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802458B8_BC2A58, 1);
    sleep 100;
});

Script N(script_80241800) = SCRIPT({
    bind N(script_ExitDoubleDoor_80241270) to TriggerFlag_WALL_INTERACT 85;
    bind N(script_ExitSingleDoor_80241324) to TriggerFlag_WALL_INTERACT 86;
    bind N(script_ExitSingleDoor_802413F8) to TriggerFlag_WALL_INTERACT 87;
    bind N(script_ExitSingleDoor_802414D8) to TriggerFlag_WALL_INTERACT 88;
    bind N(script_ExitSingleDoor_802415B8) to TriggerFlag_WALL_INTERACT 89;
    bind N(script_ExitDoubleDoor_80241698) to TriggerFlag_WALL_INTERACT 90;
    bind N(script_ExitDoubleDoor_8024174C) to TriggerFlag_WALL_INTERACT 91;
});

Script N(script_EnterDoubleDoor_802418D4) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80241800);
        return;
    }
    spawn N(script_80241800);
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_FLAG(957) == 0) {
                SI_SAVE_FLAG(957) = 1;
                SI_SAVE_VAR(0) = 0xFFFFFFD2;
            }
            UseDoorSounds(3);
            SI_VAR(2) = 80;
            SI_VAR(3) = 78;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 62;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 2 {
            SI_VAR(2) = 64;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 3 {
            SI_VAR(2) = 66;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 4 {
            SI_VAR(2) = 68;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
        == 5 {
            UseDoorSounds(3);
            SI_VAR(2) = 70;
            SI_VAR(3) = 72;
            await EnterDoubleDoor;
        }
        == 6 {
            UseDoorSounds(3);
            SI_VAR(2) = 74;
            SI_VAR(3) = 76;
            await EnterDoubleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_SAVE_FLAG(1976) = 1;
    MakeNpcs(0, N(npcGroupList_80245804));
    await N(script_MakeEntities);
    spawn N(script_80242CE8);
    spawn N(script_80243B08);
    spawn N(script_802411F0);
    spawn N(script_EnterDoubleDoor_802418D4);
});

s32 N(itemList_80241C50)[] = {
    0x0000001C, 0x00000000,
};

s32 N(unk_80241C58)[] = {
    0x00000058, 0x0000005A, 0x00000057, 0x00000059,
};

Script N(script_80241C68) = SCRIPT({
    func_80240098_BBD238(SI_VAR(0));
});

Script N(script_80241C88) = SCRIPT({
10:
    if (SI_AREA_FLAG(1) != 0) {
        goto 30;
    }
    SI_VAR(0) = SI_MAP_VAR(11);
    if (SI_VAR(0) == 0) {
        goto 20;
    }
    SI_VAR(0) += 3;
    if (SI_VAR(0) < 0) {
        goto 20;
    }
    SI_VAR(0) = 0;
20:
    TranslateModel(83, SI_VAR(0), 0, 0);
    TranslateModel(84, SI_VAR(0), 0, 0);
    UpdateColliderTransform(110);
    UpdateColliderTransform(109);
    SI_MAP_VAR(11) = SI_VAR(0);
30:
    sleep 1;
    goto 10;
});

Script N(script_80241DD8) = SCRIPT({
    TranslateModel(SI_VAR(8), 0, -1, 0);
    sleep 1;
    TranslateModel(SI_VAR(8), 0, 0xFFFFFFFE, 0);
    sleep 1;
    MakeLerp(0, 20, 3, 8);
1:
    UpdateLerp();
    TranslateModel(SI_VAR(8), 0xFFFFFF9C, 0, 0);
    RotateModel(SI_VAR(8), SI_VAR(0), 0, 0, 1);
    TranslateModel(SI_VAR(8), 100, 0, 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 1;
    }
    MakeLerp(20, 0, 10, 4);
2:
    UpdateLerp();
    TranslateModel(SI_VAR(8), 0xFFFFFF9C, 0, 0);
    RotateModel(SI_VAR(8), SI_VAR(0), 0, 0, 1);
    TranslateModel(SI_VAR(8), 100, 0, 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 2;
    }
});

Script N(script_80241FB0) = SCRIPT({
    sleep 2;
    MakeLerp(10, 25, 3, 8);
5:
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) -= 10;
    UpdateLerp();
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) *= 0.1005859375;
    ScaleModel(SI_VAR(8), 1.0, SI_VAR(3), 1.0);
    RotateModel(SI_VAR(8), SI_VAR(2), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 5;
    }
    MakeLerp(25, 10, 10, 4);
6:
    UpdateLerp();
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) -= 10;
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) *= 0.1005859375;
    ScaleModel(SI_VAR(8), 1.0, SI_VAR(3), 1.0);
    RotateModel(SI_VAR(8), SI_VAR(2), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 6;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_8024218C) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
    SI_CMD(ScriptOpcode_CALL, 0x802D2B6C),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetPlayerActionState, SI_VAR(8)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(8), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_SET, SI_VAR(10), SI_VAR(0)),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(8), 108),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80241DD8)),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 118, 8326, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(8), 110),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80241FB0)),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 3),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240000_BBD1A0),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(3), 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(3), 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), 0xFFFFFE5C, SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(10.0)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(3.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, 750),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 455, 0xFFFFFF2E, 279),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, SI_FIXED(0.80078125)),
    SI_CMD(ScriptOpcode_CALL, PlayerJump, 455, 0xFFFFFF79, 279, 30),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 0),
    SI_CMD(ScriptOpcode_CALL, SetPlayerPos, 445, 0xFFFFFF79, 279),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x8000D),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(1), 1),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 60),
        SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFF9C, 100, 0),
        SI_CMD(ScriptOpcode_LABEL, 10),
        SI_CMD(ScriptOpcode_CALL, UpdateLerp),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 83, SI_VAR(0), 0, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 84, SI_VAR(0), 0, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 110),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 109),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(11), SI_VAR(0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(1), 0),
            SI_CMD(ScriptOpcode_GOTO, 15),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_GOTO, 10),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_LABEL, 15),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 1),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, 450),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(0.5)),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 455, 0xFFFFFE5C, 279),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_CALL, func_80240730_BBD8D0, SI_VAR(10)),
    SI_CMD(ScriptOpcode_CALL, 0x802D6420),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_GOTO, 35),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), -1),
        SI_CMD(ScriptOpcode_GOTO, 40),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 35),
    SI_CMD(ScriptOpcode_CALL, 0x802D6954),
    SI_CMD(ScriptOpcode_LABEL, 39),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 2),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 1),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(3.0)),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), 0xFFFFFE5C, SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
        SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(1), 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_LABEL, 40),
    SI_CMD(ScriptOpcode_CALL, FindKeyItem, 28, SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, RemoveKeyItemAt, SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_VAR(0), 447, 0xFFFFFEA2, 278, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(0), 0xFFFFFFD7),
    SI_CMD(ScriptOpcode_CALL, 0x802D6954),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802429E8), TriggerFlag_FLOOR_TOUCH, 118, 1, 0),
    SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_8024293C) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        sleep 1;
    }
});

Script N(script_802429E8) = SCRIPT({
    DisablePlayerInput(1);
    0x802D2B6C();
    DisablePartnerAI(0);
    loop {
        sleep 1;
        GetPlayerActionState(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    DisablePlayerPhysics(1);
    SI_VAR(8) = 108;
    spawn N(script_80241DD8);
    PlaySoundAtCollider(118, 8326, 0);
    SI_VAR(8) = 110;
    spawn N(script_80241FB0);
    SetPlayerActionState(3);
    SI_VAR(10) = spawn N(script_8024293C);
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(3) -= 1;
    SetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    sleep 1;
    SI_VAR(3) -= 1;
    SetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    sleep 1;
    SetPlayerJumpscale(0.400390625);
    PlayerJump(51, 0xFFFFFF2E, 87, 60);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAtPlayer(354, 0);
    SetPlayerAnimation(0x80003);
    sleep 30;
    SetPlayerAnimation(0x10030);
    sleep 20;
    SetPlayerAnimation(0x10031);
    sleep 7;
    PlaySoundAtPlayer(370, 0);
    sleep 8;
    PlaySoundAtPlayer(370, 0);
    sleep 15;
    SetPlayerActionState(0);
    kill SI_VAR(10);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    sleep 1;
    EnablePartnerAI();
    DisablePlayerInput(0);
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80242CE8) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 3),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 110, 83),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 109, 84),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 120, 113),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 118, 108),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 122, 116),
    SI_CMD(ScriptOpcode_IF_GE, SI_SAVE_VAR(0), 0xFFFFFFD7),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0xFFFFFF9C),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 83, SI_VAR(0), 0, 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 84, SI_VAR(0), 0, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 110),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 109),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0xFFFFFF24),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 88, 0, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 90, 0, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 87, 0, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 89, 0, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, 28, 447, 0xFFFFFEA2, 278, 1, 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802429E8), TriggerFlag_FLOOR_TOUCH, 118, 1, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(10), 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(11), 0),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241C88)),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80241C68)),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024218C), TriggerFlag_FLOOR_TOUCH, 118, N(itemList_80241C50), 0, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_002F5C[] = {
    0x00000000,
};

Script N(script_80242F60) = SCRIPT({
    EnableModel(134, 0);
    EnableModel(136, 0);
    loop {
        EnableModel(138, 1);
        EnableModel(140, 1);
        EnableModel(142, 0);
        EnableModel(144, 0);
        sleep 5;
        EnableModel(138, 0);
        EnableModel(140, 0);
        EnableModel(142, 1);
        EnableModel(144, 1);
        sleep 5;
        SI_VAR(0) -= 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_80243094) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFDA {
            if (SI_SAVE_FLAG(981) == 0) {
                ShowMessageAtScreenPos(0xE002B, 160, 40);
                SI_SAVE_FLAG(981) = 1;
            } else {
                ShowMessageAtScreenPos(0xE002C, 160, 40);
            }
        }
        == 0xFFFFFFDA {
            0x802D6420();
            0x802D6954();
            match SI_VAR(0) {
                >= 1 {
                    RemoveKeyItemAt(SI_VAR(1));
                    sleep 10;
                    SetPlayerAnimation(0x6000C);
                    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SI_VAR(1) += 40;
                    MakeItemEntity(29, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 0);
                    func_80240790_BBD930();
                    SI_VAR(10) = SI_VAR(0);
                    sleep 30;
                    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
                    SI_VAR(6) = 40;
                    SI_VAR(6) += SI_VAR(4);
                    SI_VAR(7) = 70;
                    SI_VAR(7) += SI_VAR(4);
                    MakeLerp(SI_VAR(6), SI_VAR(7), 20, 0);
                    loop {
                        UpdateLerp();
                        SetItemPos(SI_VAR(10), SI_VAR(3), SI_VAR(0), SI_VAR(5));
                        sleep 1;
                        if (SI_VAR(1) == 0) {
                            break;
                        }
                    }
                    SetPlayerAnimation(0x10002);
                    MakeLerp(255, 0, 30, 0);
                    loop {
                        UpdateLerp();
                        0x802D721C(SI_VAR(10), SI_VAR(0));
                        sleep 1;
                        if (SI_VAR(1) == 0) {
                            break;
                        }
                    }
                    sleep 30;
                    RemoveItemEntity(SI_VAR(10));
                    if (SI_SAVE_FLAG(981) == 1) {
                        SI_VAR(0) = 25;
                        spawn N(script_80242F60);
                        ShowMessageAtScreenPos(0xE002D, 160, 40);
                    } else {
                        SI_VAR(0) = 35;
                        spawn N(script_80242F60);
                        ShowMessageAtScreenPos(0xE002E, 160, 40);
                    }
                    SI_SAVE_VAR(0) = 0xFFFFFFDB;
                }
            }
        }
        else {
            DisablePlayerPhysics(1);
            DisablePartnerAI(0);
            SetPlayerAnimation(0x1010006);
            sleep 3;
            SetPlayerAnimation(0x1010007);
            sleep 1;
            SetPlayerJumpscale(1.0);
            PlayerJump(812, 0xFFFFFF56, 0xFFFFFFFE, 20);
            PlaySoundAtPlayer(217, 0);
            sleep 10;
            UseSettingsFrom(0, 812, 0, 28);
            SetPanTarget(0, 812, 0, 28);
            SetCamSpeed(0, 2.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            sleep 10;
            SetPlayerAnimation(0x10007);
            sleep 1;
            PlaySoundAtPlayer(218, 0);
            SetPlayerPos(812, 61, 0xFFFFFFFE);
            PlayerJump(812, 0, 28, 8);
            SetPlayerActionState(10);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            EnablePartnerAI();
            if (SI_SAVE_FLAG(960) == 0) {
                sleep 10;
                SI_VAR(0) = 5;
                spawn N(script_80242F60);
                ShowMessageAtScreenPos(0xE002F, 160, 40);
                SI_SAVE_FLAG(960) = 1;
            }
            DisablePlayerPhysics(0);
            sleep 2;
            PanToTarget(0, 0, 0);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_802436C4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetPlayerAnimation(0x1010006);
    sleep 3;
    SetPlayerAnimation(0x1010007);
    sleep 1;
    SetPlayerJumpscale(1.0);
    PlayerJump(812, 40, 0xFFFFFFFE, 20);
    PlaySoundAtPlayer(217, 0);
    sleep 10;
    UseSettingsFrom(0, 812, 0xFFFFFF2E, 28);
    SetPanTarget(0, 812, 0xFFFFFF2E, 28);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SetPlayerAnimation(0x10007);
    sleep 1;
    PlaySoundAtPlayer(218, 0);
    SetPlayerPos(812, 0xFFFFFF6E, 0xFFFFFFFE);
    PlayerJump(812, 0xFFFFFF2E, 28, 8);
    SetPlayerActionState(10);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    sleep 2;
    DisablePlayerInput(0);
});

Script N(script_80243904) = SCRIPT({
    loop {
        if (SI_AREA_FLAG(3) == 1) {
            if (SI_AREA_FLAG(4) != SI_AREA_FLAG(3)) {
                loop 3 {
                    RotateModel(134, 5, 0, 0, 1);
                    sleep 2;
                    RotateModel(134, 0, 0, 0, 1);
                    sleep 1;
                    RotateModel(134, 5, 0, 0, 1);
                    sleep 2;
                    RotateModel(134, 0, 0, 0, 1);
                    sleep 1;
                }
            }
        }
        SI_AREA_FLAG(4) = SI_AREA_FLAG(3);
        sleep 1;
    }
});

Script N(script_80243A38) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_AREA_FLAG(3) = 0;
        if (SI_SAVE_FLAG(981) == 0) {
            if (SI_VAR(1) >= 0xFFFFFF2E) {
                if (SI_VAR(1) <= 0xFFFFFF9C) {
                    if (SI_VAR(0) >= 775) {
                        SI_AREA_FLAG(3) = 1;
                    }
                }
            }
        }
        sleep 1;
    }
});

s32 N(itemList_80243B00)[] = {
    0x0000001D, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80243B08) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243094), TriggerFlag_WALL_INTERACT, 125, N(itemList_80243B00), 0, 1),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802436C4), TriggerFlag_WALL_INTERACT, 126, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243A38)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243904)),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFDB),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 134, 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 138, 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 142, 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 136, 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 140, 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 144, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 134, 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 136, 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 138, 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 140, 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 142, 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, 144, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 unk_missing_80243C7C[] = {
    0x00000000, 0x00000001, 0x00000000, 0x00000005, 0x00000001, 0x00000000, 0x00000005, 0x00000001,
    0x00000000, 0x00000005, 0x00000001, 0x00000001, 0x00000005, 0x00000001, 0x00000001, 0x00000005,
    0x00000002, 0x00000002, 0x00000005, 0x00000002, 0x00000002, 0x00000005, 0x00000002, 0x00000002,
    0x00000005, 0x00000002, 0x00000003, 0x00000005, 0x00000002, 0x00000003, 0x00000005, 0x00000003,
    0x00000004, 0x00000005, 0x00000003, 0x00000004, 0x00000005, 0x00000003, 0x00000004, 0x00000005,
    0x00000003, 0x00000005, 0x00000005, 0x00000003, 0x00000005, 0x00000005, 0x00000004, 0x00000006,
    0x00000005, 0x00000004, 0x00000006, 0x00000005, 0x00000004, 0x00000006, 0x00000005, 0x00000004,
    0x00000007, 0x00000005, 0x00000004, 0x00000007, 0x00000005,
};

Script N(script_80243D70) = SCRIPT({
    DisablePlayerInput(1);
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(4) += 80;
    SetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    spawn {
        sleep 5;
        SI_VAR(3) -= 10;
        PlayEffect(51, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5), 2.80078125, 50, 0, 0, 0, 0, 0, 0, 0);
    }
    PlaySoundAtNpc(0, 8340, 0);
    SI_VAR(4) -= 12;
    MakeLerp(10, 450, 8, 1);
    loop {
        UpdateLerp();
        SI_VAR(2) =f SI_VAR(0);
        SI_VAR(2) /= 100.0;
        SetNpcScale(0, SI_VAR(2), SI_VAR(2), SI_VAR(2));
        SI_VAR(2) *= 12;
        SI_VAR(6) =f SI_VAR(4);
        SI_VAR(6) -=f SI_VAR(2);
        SetNpcPos(0, SI_VAR(3), SI_VAR(6), SI_VAR(5));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 15;
    SI_VAR(0) = 240.0;
    loop 20 {
        SI_VAR(0) -= 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    RemoveNpc(0);
    SI_SAVE_VAR(0) = 0xFFFFFFD3;
    DisablePlayerInput(0);
});

s32 pad_003FFC[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80244000) = {
    .moveSpeed = 1.5,
    .moveTime = 0x3C,
    .waitTime = 0x1E,
    .alertRadius = 0.0,
    .unk_10 = 0.0,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244030) = SCRIPT({
    DoBasicAI(N(aISettings_80244000));
});

NpcSettings N(npcSettings_80244050) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244030),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024407C) = {
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

Script N(script_802440A8) = SCRIPT({
    SetPlayerAnimation(0x10002);
    sleep 1;
    SetPlayerAnimation(0x80007);
    sleep 20;
});

s32 N(unk_802440F0)[] = {
    0x00000000,
};

Script N(script_802440F4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80244124) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80244154)[] = {
    0x00000000,
};

s32 N(unk_80244158)[] = {
    0x00000000,
};

Script N(script_8024415C) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240954_BBDAF4(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240B78_BBDD18(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802442A0) = {
    SI_CMD(ScriptOpcode_CALL, func_80240BB0_BBDD50, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024415C), 0x10, 0, 0x802458F0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240B24_BBDCC4, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802442F0) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_80240D3C_BBDEDC(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80244370) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240D3C_BBDEDC(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_802442F0);
            SetNpcAnimation(0xFFFFFFFC, 0x40002);
            GetAngleBetweenNPCs(SI_VAR(9), 0xFFFFFFFC, SI_VAR(11));
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            GetNpcPos(SI_VAR(9), SI_VAR(6), SI_VAR(7), SI_VAR(8));
            SetNpcFlagBits(0xFFFFFFFC, 256, 1);
            if (SI_VAR(11) <= 180) {
                SI_VAR(6) += 20;
            } else {
                SI_VAR(6) += 0xFFFFFFEC;
            }
            SI_VAR(7) += 10;
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            NpcJump1(0xFFFFFFFC, SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
            kill SI_VAR(10);
            RemoveItemEntity(SI_VAR(0));
            sleep 20;
            GetNpcYaw(0xFFFFFFFC, SI_VAR(10));
            SI_VAR(10) += 180;
            InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
            sleep 5;
            NpcJump1(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20);
            SetNpcAnimation(0xFFFFFFFC, 0x40001);
            NpcFaceNpc(0xFFFFFFFC, SI_VAR(9), 0);
            sleep 5;
            SetNpcFlagBits(0xFFFFFFFC, 256, 0);
            EnablePartnerAI();
            sleep 5;
        }
    }
    func_80240B78_BBDD18(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244694) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BB0_BBDD50, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244370), 0x10, 0, 0x802458F0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240B24_BBDCC4, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80244704) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80240EC8_BBE068();
    GetCurrentPartnerID(SI_VAR(0));
    FindKeyItem(SI_VAR(5), SI_VAR(1));
    if (SI_VAR(0) == 4) {
        if (SI_VAR(1) != -1) {
            DisablePartnerAI(0);
            PlayerFaceNpc(SI_VAR(2), 0);
            sleep 1;
            GetNpcPos(SI_VAR(2), SI_VAR(13), SI_VAR(0), SI_VAR(14));
            GetNpcPos(0xFFFFFFFC, SI_VAR(13), SI_VAR(14), SI_VAR(15));
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            SI_VAR(0) += 10;
            NpcJump1(0xFFFFFFFC, SI_VAR(13), SI_VAR(0), SI_VAR(15), 10);
            SpeakToNpc(0xFFFFFFFC, 0x40006, 0x40001, 0, SI_VAR(2), SI_VAR(7));
            EnablePartnerAI();
            await N(script_80244694);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                }
                else {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(9));
                    if (SI_VAR(10) != 0) {
                        SpeakToPlayer(SI_VAR(2), SI_VAR(3), SI_VAR(4), 0, SI_VAR(10));
                    }
                    EnablePartnerAI();
                    if (SI_VAR(6) != 0) {
                        SI_VAR(0) = SI_VAR(6);
                        SI_VAR(1) = 1;
                        await N(script_802440F4);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80240F0C_BBE0AC();
});

s32 N(unk_802449FC)[] = {
    0x00000045, 0x00000000,
};

Script N(script_80244A04) = SCRIPT({
    func_80240C4C_BBDDEC(4, 0x950004, 0x950001, 69, 78, 0xE0067, 0xE0068, 0xE0069, 0xE006A, N(unk_802449FC));
    await N(script_80244704);
});

s32 N(shortTable_80244A54)[] = {
    0x0032003C, 0x00C800F0,
};

Script N(script_Idle_80244A5C) = SCRIPT({
    func_80240F38_BBE0D8();
});

Script N(script_Aux_80244A78) = SCRIPT({
    SI_VAR(1) = 0;
    loop {
        func_80241094_BBE234();
        0x802CFD30(-1, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
});

Script N(script_Init_80244AE8) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80244A5C));
    BindNpcAux(-1, N(script_Aux_80244A78));
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_80244B34) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80244A5C));
    BindNpcAux(-1, N(script_Aux_80244A78));
    EnableNpcShadow(-1, 0);
});

Script N(script_Interact_80244B80) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE0061);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE0062);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE0063);
        }
    }
});

Script N(script_Interact_80244C28) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE0064);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE0065);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE0066);
        }
    }
    await N(script_80244A04);
    if (SI_VAR(12) != 0) {
        return;
    }
    if (SI_SAVE_VAR(348) == 13) {
        if (SI_SAVE_FLAG(959) == 0) {
            SI_SAVE_FLAG(959) = 1;
            await N(script_802440A8);
            SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE006B);
            SI_VAR(0) = 115;
            SI_VAR(1) = 1;
            await N(script_802440F4);
            AddKeyItem(115);
        }
    }
});

Script N(script_Init_80244DA4) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244B80));
    if (SI_SAVE_VAR(0) < 0xFFFFFFDC) {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_Init_80244DFC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244C28));
    if (SI_SAVE_VAR(0) < 0xFFFFFFDC) {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

StaticNpc N(npcGroup_80244E54)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024407C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000A01,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80245044)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024407C),
        .pos = { 523.0, -139.0, 193.0 },
        .flags = 0x00000B01,
        .init = N(script_Init_80244AE8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80245234)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_8024407C),
        .pos = { 473.0, -122.0, 247.0 },
        .flags = 0x00000B01,
        .init = N(script_Init_80244B34),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80245424)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244050),
        .pos = { 422.0, -200.0, 112.0 },
        .flags = 0x00000901,
        .init = N(script_Init_80244DA4),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x000001A6, 0xFFFFFF38, 0x00000070, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000001A6, 0xFFFFFF38, 0x00000070, 0x0000001E, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .tattle = 0x1A00A6,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80244050),
        .pos = { 397.0, -410.0, 352.0 },
        .flags = 0x00000901,
        .init = N(script_Init_80244DFC),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x0000018D, 0xFFFFFE66, 0x00000160, 0x00000050, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000018D, 0xFFFFFE66, 0x00000160, 0x00000050, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .tattle = 0x1A00A7,
    },
};

NpcGroupList N(npcGroupList_80245804) = {
    NPC_GROUP(N(npcGroup_80244E54), 0x00000000),
    NPC_GROUP(N(npcGroup_80245044), 0x00000000),
    NPC_GROUP(N(npcGroup_80245234), 0x00000000),
    NPC_GROUP(N(npcGroup_80245424), 0x00000000),
    {},
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 675, 0xFFFFFE5C, 415, 180, 47, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(961));
});

s32 pad_005888[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80245890_BC2A30

// rodata: D_80245898_BC2A38

// rodata: D_802458A0_BC2A40

// rodata: D_802458A8_BC2A48

// rodata: D_802458B0_BC2A50

// rodata: D_802458B8_BC2A58

// rodata: jtbl_802458C0_BC2A60

