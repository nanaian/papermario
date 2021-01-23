#include "trd_01.h"

s32 pad_00030C[1];
s32 pad_0003E4[3];
Script N(script_80241740);
s32 pad_00177C[1];
Script N(script_UpdateTexturePan_80241780);
Script N(script_EnterDoubleDoor_8024181C);
Script N(script_ExitDoubleDoor_80241954);
Script N(script_ExitDoubleDoor_802419F8);
Script N(script_ExitDoubleDoor_80241A9C);
Script N(script_ExitDoubleDoor_80241B40);
Script N(script_80241BE4);
Script N(script_80242B20);
s32 N(itemList_80242BEC)[2];
Script N(main);
s32 pad_002FC4[3];
Script N(script_80242FD0);
Script N(script_8024310C);
Script N(script_8024328C);
Script N(script_MakeEntities);
s32 pad_0033E8[2];
Script N(script_NpcAI_80243420);
Script N(script_NpcAI_802434E0);
Script N(script_Idle_8024352C);
Script N(script_Init_80243A1C);
Script N(script_Defeat_80243AF4);
Script N(script_Init_80243BC4);
StaticNpc N(npcGroup_80243C18)[1];
StaticNpc N(npcGroup_80243E08)[1];
StaticNpc N(npcGroup_80243FF8)[1];
StaticNpc N(npcGroup_802441E8)[1];
NpcGroupList N(npcGroupList_802443D8);
s32 pad_004414[3];
const char D_80244420_9A0DB0[8]; // "trd_00"
const char D_80244428_9A0DB8[8]; // "trd_02"
const char D_80244430_9A0DC0[8]; // "trd_09"
s32 pad_004438[2];
s32 pad_00449C[1];
s32 pad_004648[2];

// text: func_80240000_99C990

// text: func_80240124_99CAB4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_99CCA0

// text: func_80240344_99CCD4

s32 pad_0003E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: N(set_script_owner_npc_anim)

// text: func_8024046C_99CDFC

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240784_99D114

// text: func_80240BC4_99D554

// text: func_80240C78_99D608

// text: func_80240D98_99D728

// text: N(NpcJumpFunc)

// text: func_80240E70_99D800

// text: N(UnkNpcAIFunc11)

// text: N(UnkNpcAIFunc10)

// text: func_80241104_99DA94

// text: func_802411B0_99DB40

// text: func_802413B8_99DD48

// text: func_80241630_99DFC0

EntryList N(entryList) = {
    { -310.0f, 0.0f, 0.0f, 90.0f },
    { 310.0f, 0.0f, 0.0f, 270.0f },
    { 310.0f, 220.0f, 0.0f, 270.0f },
    { 310.0f, 520.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19004F,
};

Script N(script_80241740) = SCRIPT({
    SetMusicTrack(0, 20, 0, 8);
    UseDoorSounds(1);
});

s32 pad_00177C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80241780) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_99C990();
                    return;
                }
            }
        }
    }
    func_80240124_99CAB4();
});

Script N(script_EnterDoubleDoor_8024181C) = SCRIPT({
    group 0;
    suspend group 1;
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 30;
            SI_VAR(3) = 32;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 37;
            SI_VAR(3) = 39;
            await EnterDoubleDoor;
        }
        == 2 {
            SI_VAR(2) = 44;
            SI_VAR(3) = 46;
            await EnterDoubleDoor;
        }
        == 3 {
            SI_VAR(2) = 51;
            SI_VAR(3) = 53;
            await EnterDoubleDoor;
        }
    }
    resume group 1;
});

Script N(script_ExitDoubleDoor_80241954) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 11;
    SI_VAR(2) = 30;
    SI_VAR(3) = 32;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80244420_9A0DB0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802419F8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 16;
    SI_VAR(2) = 37;
    SI_VAR(3) = 39;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80244428_9A0DB8, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241A9C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 21;
    SI_VAR(2) = 44;
    SI_VAR(3) = 46;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80244428_9A0DB8, 2);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241B40) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 26;
    SI_VAR(2) = 51;
    SI_VAR(3) = 53;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80244430_9A0DC0, 0);
    sleep 100;
});

Script N(script_80241BE4) = SCRIPT({
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 0xFFFFFFB0;
    group 0;
    sleep 1;
    0x802D5830(1);
    sleep 20;
    SI_VAR(0) = 0;
    SI_VAR(1) = 220;
    SI_VAR(2) = 255;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamPitch(0, 18, 12);
    SetCamSpeed(0, 0.400390625);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    SetGroupEnabled(6, 0);
    PlaySound(0x80000006);
    parallel {
        group 0;
        sleep 4;
        EnableModel(20, 1);
        EnableModel(21, 1);
        EnableTexPanning(20, 1);
        EnableTexPanning(21, 1);
        EnableTexPanning(23, 1);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        loop {
            SetTexPanOffset(2, 0, SI_VAR(0), SI_VAR(1));
            SetTexPanOffset(2, 1, SI_VAR(2), SI_VAR(3));
            SetTexPanOffset(3, 0, SI_VAR(4), SI_VAR(5));
            SetTexPanOffset(3, 1, SI_VAR(6), SI_VAR(7));
            SetTexPanOffset(4, 0, SI_VAR(8), SI_VAR(9));
            SetTexPanOffset(4, 1, SI_VAR(10), SI_VAR(11));
            SI_VAR(0) += 0xFFFFFDA8;
            SI_VAR(1) += 0xFFFFFDA8;
            SI_VAR(2) += 0xFFFFFED4;
            SI_VAR(3) += 0xFFFFFED4;
            SI_VAR(4) += 140;
            SI_VAR(5) += 0xFFFFFDA8;
            SI_VAR(6) += 0xFFFFFFE2;
            SI_VAR(7) += 0xFFFFFDA8;
            SI_VAR(8) += 100;
            SI_VAR(9) += 0xFFFFFDA8;
            SI_VAR(10) += 0xFFFFFF9C;
            SI_VAR(11) += 0xFFFFFED4;
            sleep 1;
        }
    }
    spawn {
        PlaySound(0x80000007);
        ShakeCam(0, 0, 10, 4.0);
        ShakeCam(0, 0, 20, 0.7001953125);
        ShakeCam(0, 0, 250, 1.0);
        ShakeCam(0, 0, 30, 0.5);
        ShakeCam(0, 0, 10, 1.2001953125);
        StopSound(0x80000007);
    }
    spawn {
        sleep 50;
        SetPanTarget(0, SI_VAR(0), 500, SI_VAR(2));
    }
    spawn {
        GetNpcPos(1, SI_VAR(4), SI_VAR(5), SI_VAR(6));
        SetNpcPos(1, SI_VAR(4), 0xFFFFFFE5, SI_VAR(6));
        sleep 100;
        MakeLerp(0xFFFFFFE5, 300, 210, 4);
        loop 210 {
            UpdateLerp();
            SetNpcPos(1, SI_VAR(4), SI_VAR(0), SI_VAR(6));
            sleep 1;
        }
    }
    spawn {
        sleep 20;
        PlaySoundAtNpc(1, 611, 0);
        ShowEmote(1, 2, 0, 20, 1, 0, 0, 0, 0);
        sleep 120;
        SetNpcAnimation(1, 0x290108);
        sleep 20;
        SetNpcAnimation(1, 0x290117);
        PlaySoundAtNpc(1, 610, 0);
        ShowEmote(1, 0, 0, 15, 1, 0, 0, 0, 0);
        loop 4 {
            InterpNpcYaw(1, 270, 0);
            sleep 20;
            InterpNpcYaw(1, 90, 0);
            sleep 15;
        }
    }
    spawn {
        sleep 210;
        SI_MAP_FLAG(10) = 1;
    }
    spawn {
        GetNpcPos(2, SI_VAR(4), SI_VAR(5), SI_VAR(6));
        SetNpcPos(2, SI_VAR(4), 0xFFFFFFE5, SI_VAR(6));
        sleep 85;
        MakeLerp(0xFFFFFFE5, 350, 215, 4);
        loop 215 {
            UpdateLerp();
            SetNpcPos(2, SI_VAR(4), SI_VAR(0), SI_VAR(6));
            sleep 1;
        }
    }
    spawn {
        sleep 25;
        ShowEmote(2, 2, 0, 20, 1, 0, 0, 0, 0);
        sleep 120;
        SetNpcAnimation(2, 0x290108);
        sleep 20;
        SetNpcAnimation(2, 0x290117);
        PlaySoundAtNpc(2, 610, 0);
        ShowEmote(2, 0, 0, 15, 1, 0, 0, 0, 0);
        loop 4 {
            InterpNpcYaw(2, 270, 0);
            sleep 20;
            InterpNpcYaw(2, 90, 0);
            sleep 15;
        }
    }
    spawn {
        sleep 180;
        SI_MAP_FLAG(11) = 1;
    }
    MakeLerp(0xFFFFFE3E, 0, 300, 10);
0:
    UpdateLerp();
    TranslateModel(0, 0, SI_VAR(0), 0);
    TranslateModel(1, 0, SI_VAR(0), 0);
    TranslateModel(2, 0, SI_VAR(0), 0);
    UpdateColliderTransform(7);
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 400;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(0) == 0) {
            SI_FLAG(0) = 1;
            PlaySound(35);
            EnableModel(23, 1);
        }
    }
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 375;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(1) == 0) {
            SI_FLAG(1) = 1;
            PlaySound(35);
            TranslateModel(23, 50, 0, 0);
        }
    }
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 350;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(2) == 0) {
            SI_FLAG(2) = 1;
            PlaySound(35);
            TranslateModel(23, 100, 0, 0);
        }
    }
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 325;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(3) == 0) {
            SI_FLAG(3) = 1;
            PlaySound(35);
            TranslateModel(23, 150, 0, 0);
        }
    }
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 299;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(4) == 0) {
            SI_FLAG(4) = 1;
            PlaySound(35);
            TranslateModel(23, 200, 0, 0);
        }
    }
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 273;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(5) == 0) {
            SI_FLAG(5) = 1;
            PlaySound(35);
            TranslateModel(23, 250, 0, 0);
        }
    }
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 245;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(6) == 0) {
            SI_FLAG(6) = 1;
            PlaySound(35);
            TranslateModel(23, 300, 0, 0);
        }
    }
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) += 220;
    if (SI_VAR(2) >= 0xFFFFFFEC) {
        if (SI_FLAG(7) == 0) {
            SI_FLAG(7) = 1;
            PlaySound(35);
            EnableModel(23, 0);
        }
    }
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    WaitForCam(0, 1.0);
    sleep 30;
    spawn {
        sleep 28;
        EnableModel(20, 0);
        EnableModel(21, 0);
    }
    UseSettingsFrom(0, 0, 220, 255);
    PanToTarget(0, 0, 1);
    sleep 1;
    ResetCam(0, 1.5);
    StopSound(0x80000006);
    DisablePlayerInput(0);
    0x802D5830(0);
    unbind;
});

Script N(script_80242B20) = SCRIPT({
    group 0;
    SetTexPanner(19, 1);
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

s32 N(itemList_80242BEC)[] = {
    0x00000010, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(main) = {
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(425), 7),
    SI_CMD(ScriptOpcode_CALL, SetSpriteShading, -1),
    SI_CMD(ScriptOpcode_CALL, SetCamPerspective, 0, 3, 25, 16, 4096),
    SI_CMD(ScriptOpcode_CALL, SetCamBGColor, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamEnabled, 0, 1),
    SI_CMD(ScriptOpcode_CALL, SetCamLeadPlayer, 0, 0),
    SI_CMD(ScriptOpcode_CALL, MakeNpcs, 1, N(npcGroupList_802443D8)),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_MakeEntities)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80242B20)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241954), TriggerFlag_WALL_INTERACT, 11, 1, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(650), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024310C), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80242BEC), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_802419F8), TriggerFlag_WALL_INTERACT, 16, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241A9C), TriggerFlag_WALL_INTERACT, 21, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241B40), TriggerFlag_WALL_INTERACT, 26, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80241740)),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(1), 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 7, 0),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFB0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0xFFFFFE3E),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 0, 0, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 1, 0, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 2, 0, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 7),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241BE4), TriggerFlag_AREA_FLAG_SET, SI_AREA_FLAG(1), 0, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 2, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CALL, SetGroupEnabled, 6, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 20, 0),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 21, 0),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 23, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_EnterDoubleDoor_8024181C)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, EnableTexPanning, 19, 1),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 90),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0xFFFFFFC4),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 0xFFFFFFBA),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(7), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(8), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(10), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(11), 0),
        SI_CMD(ScriptOpcode_SET, SI_VAR(12), 0),
        SI_CMD(ScriptOpcode_SPAWN, N(script_UpdateTexturePan_80241780)),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_002FC4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242FD0) = SCRIPT({
0:
    if (SI_SAVE_FLAG(645) == 1) {
        AwaitPlayerApproach(320, 0, 40);
        UseSettingsFrom(0, 220, 0, 0);
        SetPanTarget(0, 300, 0, 0);
        SetCamDistance(0, 350.0);
        GetCamPosA(0, SI_VAR(0), SI_VAR(1));
        SetCamPosA(0, -64.0, SI_VAR(1));
        SetCamSpeed(0, 3.0);
        PanToTarget(0, 0, 1);
        AwaitPlayerLeave(320, 0, 60);
        PanToTarget(0, 0, 0);
    }
    sleep 1;
    goto 0;
});

Script N(script_8024310C) = SCRIPT({
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
    FindKeyItem(16, SI_VAR(0));
    RemoveKeyItemAt(SI_VAR(0));
    0x802D6954();
    SI_SAVE_FLAG(650) = 1;
    func_80240344_99CCD4(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240310_99CCA0();
    PanToTarget(0, 0, 0);
    resume group 1;
    unbind;
});

Script N(script_8024328C) = SCRIPT({
    bind N(script_ExitDoubleDoor_802419F8) to TriggerFlag_WALL_INTERACT 16;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(650) == 0) {
        MakeEntity(0x802BCD68, 315, 8, 0, 0xFFFFFFB0, 0x80000000);
        AssignScript(N(script_8024328C));
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFB0) {
        MakeEntity(0x802E9BD4, 0, 220, 255, 0, 0x80000000);
        AssignAreaFlag(1);
    }
    MakeItemEntity(265, 0xFFFFFEF4, 656, 0xFFFFFFD8, 17, SI_SAVE_FLAG(638));
    if (SI_SAVE_FLAG(665) == 1) {
        if (SI_SAVE_FLAG(645) == 0) {
            MakeItemEntity(16, 254, 0, 30, 0, SI_SAVE_FLAG(645));
        }
    }
});

s32 pad_0033E8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_802433F0) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x2D,
    .waitTime = 0x14,
    .alertRadius = 70.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 7.5f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 80.0f,
    .unk_28 = 60.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243420) = SCRIPT({
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    SetSelfVar(5, 10);
    SetSelfVar(7, 0);
    func_80240784_99D114(N(aISettings_802433F0));
});

NpcSettings N(npcSettings_80243490) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243420),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcAISettingsSmall N(aISettings_802434BC) = {
    .alertRadius = 110.0f,
    .unk_10 = 65.0f,
    .unk_14 = 0x8,
    .chaseSpeed = 3.4f,
    .unk_1C = 0x78,
    .unk_20 = 0x2,
    .chaseRadius = 110.0f,
    .unk_28 = 65.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802434E0) = SCRIPT({
    func_802413B8_99DD48(N(aISettings_802434BC));
});

NpcSettings N(npcSettings_80243500) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802434E0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

Script N(script_Idle_8024352C) = SCRIPT({
    SetNpcFlagBits(-1, 512, 0);
    SetNpcFlagBits(-1, 8, 1);
    SetNpcFlagBits(-1, 64, 1);
    GetSelfNpcID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetNpcPos(-1, 45, 0xFFFFFFE2, 20);
    } else {
        SetNpcPos(-1, 0xFFFFFFBA, 0xFFFFFFE2, 0xFFFFFFEC);
    }
    InterpNpcYaw(-1, 90, 0);
    EnableNpcShadow(-1, 0);
    GetNpcPos(-1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
0:
    MakeLerp(-2.0, 2.0, 30, 10);
10:
    if (SI_SAVE_VAR(0) == 0xFFFFFFB0) {
        goto 100;
    }
    UpdateLerp();
    SI_VAR(5) = SI_VAR(3);
    SI_VAR(5) += SI_VAR(0);
    SetNpcPos(-1, SI_VAR(2), SI_VAR(5), SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 10;
    }
    sleep 5;
    MakeLerp(2.0, -2.0, 30, 10);
20:
    if (SI_SAVE_VAR(0) == 0xFFFFFFB0) {
        goto 100;
    }
    UpdateLerp();
    SI_VAR(5) = SI_VAR(3);
    SI_VAR(5) += SI_VAR(0);
    SetNpcPos(-1, SI_VAR(2), SI_VAR(5), SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 20;
    }
    sleep 5;
    goto 0;
    EnableNpcShadow(-1, 1);
100:
    GetSelfNpcID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        if (SI_MAP_FLAG(10) == 0) {
            sleep 1;
            goto 100;
        }
    } else {
        if (SI_MAP_FLAG(11) == 0) {
            sleep 1;
            goto 100;
        }
    }
    sleep 10;
    SetNpcFlagBits(-1, 512, 1);
    SetNpcFlagBits(-1, 8, 0);
    GetSelfNpcID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetNpcSpeed(-1, 3.0);
        NpcMoveTo(-1, 190, 20, 0);
        NpcMoveTo(-1, 245, 75, 0);
    } else {
        SetNpcSpeed(-1, 3.6005859375);
        NpcMoveTo(-1, 210, 0xFFFFFFEC, 0);
        NpcMoveTo(-1, 260, 25, 0);
    }
    SetNpcSpeed(-1, 1.5);
    func_80241630_99DFC0();
    SetNpcFlagBits(-1, 512, 0);
    SetNpcFlagBits(-1, 8, 1);
    SetNpcFlagBits(-1, 64, 0);
    BindNpcAI(-1, N(script_NpcAI_80243420));
});

Script N(script_Init_80243A1C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFB0) {
        BindNpcIdle(-1, N(script_Idle_8024352C));
        SetNpcAnimation(-1, 0x29010E);
    } else {
        InterpNpcYaw(-1, 270, 0);
        GetSelfNpcID(SI_VAR(0));
        if (SI_VAR(0) == 1) {
            SetNpcPos(-1, 240, 220, 130);
        } else {
            SetNpcPos(-1, 80, 220, 265);
        }
    }
});

Script N(script_Defeat_80243AF4) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_FLAG(665) = 1;
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySound(11);
            MakeItemEntity(16, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5, SI_SAVE_FLAG(645));
            spawn N(script_80242FD0);
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80243BC4) = SCRIPT({
    if (SI_SAVE_FLAG(665) == 1) {
        RemoveNpc(-1);
        return;
    }
    BindNpcDefeat(-1, N(script_Defeat_80243AF4));
});

StaticNpc N(npcGroup_80243C18)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243490),
        .pos = { 260.0, 0.0, 30.0 },
        .flags = 0x00802C00,
        .init = N(script_Init_80243BC4),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000104, 0x00000000, 0x00000028, 0x0000001E, 0x00000019, 0xFFFF8001, 0x00000001, 0x00000104, 0x00000000, 0x00000028, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80243E08)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243490),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00002C00,
        .init = N(script_Init_80243A1C),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0x000000F0, 0x000000DC, 0x00000082, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000F0, 0x000000DC, 0x00000082, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_80243FF8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243490),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00002400,
        .init = N(script_Init_80243A1C),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_MUSHROOM, 5 }, { ItemId_P_O_W_BLOCK, 5 } },
        .movement = { 0x00000050, 0x000000DC, 0x00000109, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000050, 0x000000DC, 0x00000109, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00290101, 0x00290103, 0x00290104, 0x00290104, 0x00290101, 0x00290101, 0x0029010B, 0x0029010B, 0x00290107, 0x00290106, 0x00290108, 0x00290104, 0x00290104, 0x00290104, 0x00290104, 0x00290104,
        },
    },
};

StaticNpc N(npcGroup_802441E8)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243500),
        .pos = { -255.0, 640.0, 35.0 },
        .flags = 0x00002C00,
        .yaw = 180,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_HONEY_SYRUP, 5 }, { ItemId_FIRE_FLOWER, 5 } },
        .movement = { 0xFFFFFF01, 0x00000280, 0x00000023, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF01, 0x00000280, 0x00000023, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
    },
};

NpcGroupList N(npcGroupList_802443D8) = {
    NPC_GROUP(N(npcGroup_80243C18), 0x06030003),
    NPC_GROUP(N(npcGroup_80243E08), 0x06010008),
    NPC_GROUP(N(npcGroup_80243FF8), 0x06000008),
    NPC_GROUP(N(npcGroup_802441E8), 0x06100008),
    {},
};

s32 pad_004414[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244420_9A0DB0

// rodata: D_80244428_9A0DB8

// rodata: D_80244430_9A0DC0

s32 pad_004438[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244440_9A0DD0

// rodata: jtbl_80244448_9A0DD8

s32 pad_00449C[] = {
    0x00000000,
};

// rodata: D_802444A0_9A0E30

// rodata: D_802444A8_9A0E38

// rodata: D_802444B0_9A0E40

// rodata: jtbl_802444B8_9A0E48

s32 pad_004648[] = {
    0x00000000, 0x00000000,
};
