#include "trd_04.h"

s32 pad_00030C[1];
s32 pad_0004A8[2];
Script N(script_80243940);
s32 pad_00397C[1];
Script N(script_UpdateTexturePan_80243980);
Script N(script_ExitDoubleDoor_80243A1C);
Script N(script_ExitDoubleDoor_80243AC0);
Script N(script_ExitDoubleDoor_80243B64);
Script N(script_ExitDoubleDoor_80243C08);
Script N(script_ExitWalk_80243CAC);
Script N(script_ExitDoubleDoor_80243D08);
s32 N(itemList_80243DAC)[2];
Script N(script_80243DB4);
Script N(script_EnterDoubleDoor_80243F04);
Script N(script_80244120);
Script N(script_80244938);
Script N(main);
s32 unk_missing_80244D68[76];
Script N(script_80244E98);
Script N(script_80244FEC);
Script N(script_80245140);
Script N(script_8024516C);
Script N(script_80245198);
Script N(script_MakeEntities);
s32 pad_005564[3];
Script N(script_NpcAI_802455A0);
Script N(script_NpcAI_8024566C);
f32 N(floatTable_802456F4)[6];
Script N(script_NpcAI_8024573C);
Script N(script_Defeat_802457D8);
Script N(script_Init_80245850);
StaticNpc N(npcGroup_802458A4)[1];
StaticNpc N(npcGroup_80245A94)[1];
StaticNpc N(npcGroup_80245C84)[1];
NpcGroupList N(npcGroupList_80245E74);
NpcGroupList N(npcGroupList_80245E98);
s32 pad_005EBC[1];
const char D_80245EC0_9AE2B0[8]; // "trd_03"
const char D_80245EC8_9AE2B8[8]; // "trd_05"
const char D_80245ED0_9AE2C0[8]; // "trd_07"
const char D_80245ED8_9AE2C8[8]; // "trd_06"
s32 pad_005F3C[1];
s32 pad_0062C4[1];
s32 pad_006308[2];

// text: func_80240000_9A83F0

// text: func_80240124_9A8514

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_9A8700

// text: func_80240344_9A8734

// text: func_80240408_9A87F8

s32 pad_0004A8[] = {
    0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024052C_9A891C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240844_9A8C34

// text: func_80240C84_9A9074

// text: func_80240DDC_9A91CC

// text: N(UnkNpcAIFunc1)

// text: func_80241144_9A9534

// text: func_80241300_9A96F0

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_802414A0_9A9890

// text: func_802415D0_9A99C0

// text: N(UnkNpcDurationFlagFunc)

// text: func_80241758_9A9B48

// text: func_80241818_9A9C08

// text: func_80241B14_9A9F04

// text: func_80241E18_9AA208

// text: func_80241FC8_9AA3B8

// text: dup_trd_04_UnkNpcAIFunc1

// text: func_802426B0_9AAAA0

// text: N(UnkNpcAIFunc2)

// text: func_80242A6C_9AAE5C

// text: func_80242AD8_9AAEC8

// text: N(UnkNpcAIFunc3)

// text: func_80242C70_9AB060

// text: func_80243000_9AB3F0

// text: func_80243124_9AB514

// text: func_80243310_9AB700

// text: func_80243438_9AB828

// text: func_802434F4_9AB8E4

// text: N(UnkDurationCheck)

// text: func_80243650_9ABA40

EntryList N(entryList) = {
    { -257.0f, 0.0f, 80.0f, 90.0f },
    { 257.0f, 0.0f, 80.0f, 270.0f },
    { -257.0f, 187.0f, -55.0f, 90.0f },
    { 257.0f, 187.0f, -55.0f, 270.0f },
    { -257.0f, -187.0f, 80.0f, 90.0f },
    { 257.0f, -187.0f, 80.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190052,
};

Script N(script_80243940) = SCRIPT({
    SetMusicTrack(0, 20, 0, 8);
    UseDoorSounds(1);
});

s32 pad_00397C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80243980) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_9A83F0();
                    return;
                }
            }
        }
    }
    func_80240124_9A8514();
});

Script N(script_ExitDoubleDoor_80243A1C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 12;
    SI_VAR(2) = 20;
    SI_VAR(3) = 22;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245EC0_9AE2B0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80243AC0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 17;
    SI_VAR(2) = 26;
    SI_VAR(3) = 24;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245EC8_9AE2B8, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80243B64) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 22;
    SI_VAR(2) = 32;
    SI_VAR(3) = 34;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245EC0_9AE2B0, 3);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80243C08) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 27;
    SI_VAR(2) = 28;
    SI_VAR(3) = 30;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245EC8_9AE2B8, 3);
    sleep 100;
});

Script N(script_ExitWalk_80243CAC) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_80245ED0_9AE2C0, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80243D08) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 5;
    SI_VAR(1) = 7;
    SI_VAR(2) = 38;
    SI_VAR(3) = 36;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80245ED8_9AE2C8, 1);
    sleep 100;
});

s32 N(itemList_80243DAC)[] = {
    0x00000010, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80243DB4) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80243A1C), TriggerFlag_WALL_INTERACT, 12, 1, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(653), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244FEC), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80243DAC), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80243AC0), TriggerFlag_WALL_INTERACT, 17, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(652), 0),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(653), 1),
            SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244E98), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80243DAC), 0, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80243B64), TriggerFlag_WALL_INTERACT, 22, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80243C08), TriggerFlag_WALL_INTERACT, 27, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitWalk_80243CAC), 0x80000, 1, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80243D08), TriggerFlag_WALL_INTERACT, 7, 1, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_EnterDoubleDoor_80243F04) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80243DB4);
        return;
    }
    group 0;
    suspend group 1;
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 20;
            SI_VAR(3) = 22;
            await EnterDoubleDoor;
            spawn N(script_80243DB4);
        }
        == 1 {
            SI_VAR(2) = 26;
            SI_VAR(3) = 24;
            await EnterDoubleDoor;
            spawn N(script_80243DB4);
        }
        == 2 {
            SI_VAR(2) = 32;
            SI_VAR(3) = 34;
            await EnterDoubleDoor;
            spawn N(script_80243DB4);
        }
        == 3 {
            SI_VAR(2) = 28;
            SI_VAR(3) = 30;
            await EnterDoubleDoor;
            spawn N(script_80243DB4);
        }
        == 4 {
            SI_VAR(0) = N(script_80243DB4);
            spawn EnterWalk;
        }
        == 5 {
            SI_VAR(2) = 38;
            SI_VAR(3) = 36;
            await EnterDoubleDoor;
            spawn N(script_80243DB4);
        }
    }
    resume group 1;
});

Script N(script_80244120) = SCRIPT({
    group 0;
    suspend group 1;
    SI_SAVE_VAR(0) = 0xFFFFFFAA;
    DisablePlayerInput(1);
    sleep 30;
    spawn {
        ShakeCam(0, 0, 10, 0.7001953125);
        ShakeCam(0, 0, 320, 1.0);
        ShakeCam(0, 0, 10, 0.7001953125);
        ShakeCam(0, 0, 10, 0.400390625);
    }
    sleep 30;
    EnableModel(20, 0);
    EnableModel(22, 0);
    EnableModel(3, 0);
    UseSettingsFrom(0, 0xFFFFFFCE, 0, 0);
    SetPanTarget(0, 0xFFFFFFCE, 0, 0);
    SetCamDistance(0, 540.0);
    SetCamPitch(0, 15, 0xFFFFFFFA);
    SetCamPosA(0, 0xFFFFFFE2, 0xFFFFFFC4);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SetPlayerPos(0xFFFFFF47, 0, 0xFFFFFFDC);
    InterpPlayerYaw(90, 0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFF5D, 0, 0xFFFFFFF4);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    PlaySound(0x80000005);
    sleep 20;
    spawn {
        loop 5 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 150;
            PlayEffect(21, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
            RandInt(20, SI_VAR(0));
            SI_VAR(0) += 20;
            sleep SI_VAR(0);
        }
    }
    spawn {
        loop 7 {
            GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
            RandInt(200, SI_VAR(4));
            SI_VAR(4) -= 100;
            RandInt(100, SI_VAR(5));
            SI_VAR(5) -= 100;
            SI_VAR(1) += SI_VAR(4);
            SI_VAR(2) += 200;
            SI_VAR(3) += SI_VAR(5);
            PlayEffect(22, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            RandInt(30, SI_VAR(0));
            SI_VAR(0) += 30;
            sleep SI_VAR(0);
        }
    }
    spawn {
        InterpPlayerYaw(270, 0);
        sleep 10;
        InterpPlayerYaw(90, 0);
        sleep 15;
        InterpPlayerYaw(270, 0);
        sleep 12;
        InterpPlayerYaw(90, 0);
        sleep 18;
        InterpPlayerYaw(270, 0);
        sleep 29;
        InterpPlayerYaw(90, 0);
    }
    spawn {
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        sleep 13;
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
        sleep 15;
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        sleep 17;
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
        sleep 18;
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        sleep 17;
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
    }
    sleep 20;
    MakeLerp(187, 0, 300, 10);
0:
    UpdateLerp();
    TranslateModel(16, 0, SI_VAR(0), 0);
    TranslateModel(17, 0, SI_VAR(0), 0);
    TranslateModel(18, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    UpdateColliderTransform(40);
    UpdateColliderTransform(41);
    StopSound(0x80000005);
    PlaySound(40);
    sleep 50;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
    SetCamDistance(0, 400.0);
    SetCamPosA(0, 0xFFFFFF57, 130);
    SetCamPitch(0, 18, 0xFFFFFFFA);
    SetCamSpeed(0, 4.0);
    WaitForCam(0, 1.0);
    sleep 2;
    PanToTarget(0, 0, 0);
    EnableModel(20, 1);
    EnableModel(22, 1);
    EnableModel(3, 1);
    DisablePlayerInput(0);
    resume group 1;
    unbind;
});

Script N(script_80244938) = SCRIPT({
    group 0;
    SetTexPanner(7, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
10:
    SetTexPanOffset(1, 0, SI_VAR(0), 0);
    SetTexPanOffset(1, 1, SI_VAR(1), 0);
    SI_VAR(0) += 100;
    SI_VAR(1) -= 100;
    sleep 1;
    goto 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SetRenderMode(7, 22);
    if (SI_SAVE_VAR(0) < 0xFFFFFFAA) {
        MakeNpcs(1, N(npcGroupList_80245E98));
    } else {
        MakeNpcs(1, N(npcGroupList_80245E74));
    }
    await N(script_MakeEntities);
    spawn N(script_80243940);
    SI_AREA_FLAG(4) = 0;
    ParentColliderToModel(40, 17);
    ParentColliderToModel(41, 17);
    if (SI_SAVE_VAR(0) < 0xFFFFFFAA) {
        TranslateModel(16, 0, 187, 0);
        TranslateModel(17, 0, 187, 0);
        TranslateModel(18, 0, 187, 0);
        UpdateColliderTransform(40);
        UpdateColliderTransform(41);
        bind N(script_80244120) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(4);
    }
    spawn N(script_80244938);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    EnableModel(40, 0);
    EnableModel(0, 0);
    ModifyColliderFlags(0, 30, 0x7FFFFE00);
    spawn N(script_EnterDoubleDoor_80243F04);
    sleep 1;
    EnableTexPanning(7, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 90;
        SI_VAR(3) = 0xFFFFFFC4;
        SI_VAR(4) = 0xFFFFFFBA;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80243980);
    }
});

s32 unk_missing_80244D68[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00010101, 0x01010101, 0x01010101, 0x01000000, 0x00000000,
    0x00000101, 0x01010101, 0x01010101, 0x01010000, 0x00000000, 0x00000001, 0x01010101, 0x01010101,
    0x01010100, 0x00000000, 0x00000000, 0x01010101, 0x01010101, 0x01010101, 0x00000000, 0x00000000,
    0x00010101, 0x01010101, 0x01010101, 0x01000000, 0x00000000, 0x00000101, 0x01010101, 0x01010101,
    0x01010000, 0x00000000, 0x00000001, 0x01010101, 0x01010101, 0x01010100, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x01010101, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00010101, 0x01000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000101, 0x01010000, 0x00000000, 0x00000000,
};

Script N(script_80244E98) = SCRIPT({
    group 0;
    suspend group 1;
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        resume group 1;
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        resume group 1;
        return;
    }
    RemoveKeyItemAt(SI_VAR(1));
    0x802D6954();
    SI_SAVE_FLAG(652) = 1;
    func_80240408_9A87F8(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240310_9A8700();
    resume group 1;
    unbind;
});

Script N(script_80244FEC) = SCRIPT({
    group 0;
    suspend group 1;
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        resume group 1;
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        resume group 1;
        return;
    }
    RemoveKeyItemAt(SI_VAR(1));
    0x802D6954();
    SI_SAVE_FLAG(653) = 1;
    func_80240408_9A87F8(SI_MAP_VAR(1), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(1);
    func_80240310_9A8700();
    resume group 1;
    unbind;
});

Script N(script_80245140) = SCRIPT({
    bind N(script_ExitDoubleDoor_80243AC0) to TriggerFlag_WALL_INTERACT 17;
});

Script N(script_8024516C) = SCRIPT({
    bind N(script_ExitDoubleDoor_80243B64) to TriggerFlag_WALL_INTERACT 22;
});

Script N(script_80245198) = SCRIPT({
    DisablePlayerInput(1);
    sleep 40;
    UseSettingsFrom(0, 0xFFFFFF44, 0, 0xFFFFFFD5);
    SetPanTarget(0, 0xFFFFFF44, 0, 0xFFFFFFD5);
    SetCamDistance(0, 510.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 3;
    PlaySoundAt(769, 0, 0xFFFFFF4C, 175, 0xFFFFFFDD);
    MakeLerp(175, 0, 20, 1);
    loop {
        UpdateLerp();
        func_80240344_9A8734(SI_MAP_VAR(2), 0xFFFFFF4C, SI_VAR(0), 0xFFFFFFDD);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    PlaySoundAt(72, 0, 0xFFFFFF4C, 0, 0xFFFFFFDD);
    ShakeCam(0, 0, 5, 1.0);
    sleep 20;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
    SetCamDistance(0, 400.0);
    SetCamSpeed(0, 4.0);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 1);
    sleep 2;
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(653) == 0) {
        MakeEntity(0x802BCD68, 265, 8, 90, 0xFFFFFFB0, 0x80000000);
        AssignScript(N(script_80245140));
        SI_MAP_VAR(1) = SI_VAR(0);
    }
    if (SI_SAVE_FLAG(652) == 0) {
        MakeEntity(0x802BCD68, 0xFFFFFEF7, 195, 0xFFFFFFC9, 80, 0x80000000);
        AssignScript(N(script_8024516C));
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    if (SI_SAVE_VAR(0) <= 0xFFFFFFA9) {
        MakeEntity(0x802E9BD4, 0, 0xFFFFFC18, 0, 0, 0x80000000);
        AssignAreaFlag(4);
        SI_MAP_VAR(2) = SI_VAR(0);
        if (SI_SAVE_VAR(0) == 0xFFFFFFA9) {
            func_80240344_9A8734(SI_MAP_VAR(2), 0xFFFFFF4C, 0, 0xFFFFFFDD);
        }
    }
});

s32 pad_005564[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80245570) = {
    .moveSpeed = 1.5,
    .moveTime = 0x2D,
    .waitTime = 0x14,
    .alertRadius = 70.0,
    .unk_10 = 50.0,
    .unk_14 = 0xA,
    .chaseSpeed = 7.5,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0,
    .unk_28 = 60.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802455A0) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_80240844_9A8C34(N(aISettings_80245570));
});

NpcSettings N(npcSettings_80245610) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802455A0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_8024563C) = {
    .moveSpeed = 1.5,
    .moveTime = 0x19,
    .waitTime = 0x14,
    .alertRadius = 70.0,
    .unk_10 = 50.0,
    .unk_14 = 0xA,
    .chaseSpeed = 7.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0,
    .unk_28 = 60.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024566C) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    func_80241B14_9A9F04(N(aISettings_8024563C));
});

NpcSettings N(npcSettings_802456C8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024566C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

f32 N(floatTable_802456F4)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_8024570C) = {
    .moveSpeed = 2.0,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0,
    .unk_10 = 20.0,
    .unk_14 = 0xA,
    .chaseSpeed = 2.5999999046325684,
    .unk_1C = 0x3C,
    .unk_20 = 0xA,
    .chaseRadius = 150.0,
    .unk_28 = 20.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024573C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_80243650_9ABA40(N(aISettings_8024570C));
});

NpcSettings N(npcSettings_802457AC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024573C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0x1,
};

Script N(script_Defeat_802457D8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_VAR(0) = 0xFFFFFFA9;
            spawn {
                DoNpcDefeat();
            }
            await N(script_80245198);
        }
    }
});

Script N(script_Init_80245850) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA9) {
        RemoveNpc(-1);
        return;
    }
    BindNpcDefeat(-1, N(script_Defeat_802457D8));
});

StaticNpc N(npcGroup_802458A4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80245610),
        .pos = { 0.0, 0.0, 125.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0x00000000, 0x00000000, 0x0000007D, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x0000007D, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80245A94)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802456C8),
        .pos = { 220.0, 0.0, 30.0 },
        .flags = 0x00802C00,
        .init = N(script_Init_80245850),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x000000DC, 0x00000000, 0x0000001E, 0x000000F0, 0x00000000, 0x000000A0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x000000DC, 0x00000000, 0x0000001E, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80245C84)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802457AC),
        .pos = { -5.0, 237.0, 157.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_P_O_W_BLOCK, 10 } },
        .movement = { 0xFFFFFFFB, 0x000000ED, 0x0000009D, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFFB, 0x000000ED, 0x0000009D, 0x000000C8 },
        .animations = {
            0x002A0101, 0x002A0102, 0x002A0103, 0x002A0103, 0x002A0101, 0x002A0101, 0x002A0106, 0x002A0106, 0x002A0104, 0x002A010C, 0x002A010A, 0x002A010E, 0x002A0103, 0x002A0103, 0x002A0103, 0x002A0103,
        },
    },
};

NpcGroupList N(npcGroupList_80245E74) = {
    NPC_GROUP(N(npcGroup_802458A4), 0x0605000D),
    NPC_GROUP(N(npcGroup_80245C84), 0x060D0006),
    {},
};

NpcGroupList N(npcGroupList_80245E98) = {
    NPC_GROUP(N(npcGroup_80245A94), 0x0605000D),
    NPC_GROUP(N(npcGroup_80245C84), 0x060D0006),
    {},
};

s32 pad_005EBC[] = {
    0x00000000,
};

// rodata: D_80245EC0_9AE2B0

// rodata: D_80245EC8_9AE2B8

// rodata: D_80245ED0_9AE2C0

// rodata: D_80245ED8_9AE2C8

// rodata: D_80245EE0_9AE2D0

// rodata: jtbl_80245EE8_9AE2D8

s32 pad_005F3C[] = {
    0x00000000,
};

// rodata: D_80245F40_9AE330

// rodata: D_80245F48_9AE338

// rodata: jtbl_80245F50_9AE340

// rodata: jtbl_802460E0_9AE4D0

// rodata: D_80246270_9AE660

// rodata: D_80246278_9AE668

// rodata: D_80246280_9AE670

// rodata: jtbl_80246288_9AE678

s32 pad_0062C4[] = {
    0x00000000,
};

// rodata: jtbl_802462C8_9AE6B8

s32 pad_006308[] = {
    0x00000000, 0x00000000,
};

