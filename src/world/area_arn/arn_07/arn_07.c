#include "arn_07.h"

s32 pad_0007F4[3];
s32 pad_000868[2];
s32 pad_000944[3];
s32 pad_001E84[3];
Script N(script_80241F10);
s32 pad_002038[2];
s32 N(itemList_80242040)[2];
Script N(script_80242048);
Script N(script_80242498);
Script N(script_ExitSingleDoor_802428D4);
Script N(script_ExitWalk_80242978);
Script N(script_ExitWalk_802429D4);
Script N(script_80242A30);
Script N(script_802433C8);
Script N(script_EnterWalk_8024346C);
Script N(main);
s32 pad_003788[2];
Script N(script_80243790);
Script N(script_802437AC);
Script N(script_802439B0);
Script N(script_80243B28);
Script N(script_MakeEntities);
f32 N(floatTable_80243BC0)[6];
Script N(script_NpcAI_80243C08);
Script N(script_80243CA4);
Script N(script_80243CB4);
s32 unk_missing_80243D74[22];
Script N(script_80243DCC);
Script N(script_80243E24);
Script N(script_80243FE8);
Script N(script_Idle_80244C54);
Script N(script_Idle_80244CC8);
Script N(script_Defeat_80244FB8);
Script N(script_Init_80245058);
Script N(script_Init_80245090);
Script N(script_Init_80245104);
Script N(script_Init_80245164);
Script N(script_Init_8024519C);
s32 N(extraAnimationList_802451D4)[9];
s32 N(extraAnimationList_802451F8)[2];
s32 N(extraAnimationList_80245200)[2];
s32 N(extraAnimationList_80245208)[2];
Script N(script_Idle_80245210);
Script N(script_80245304);
Script N(script_Init_80245C9C);
StaticNpc N(npcGroup_80245D0C)[2];
StaticNpc N(npcGroup_802460EC)[6];
StaticNpc N(npcGroup_80246C8C)[1];
StaticNpc N(npcGroup_80246E7C)[1];
Script N(script_Init_8024706C);
StaticNpc N(npcGroup_802470BC)[1];
StaticNpc N(npcGroup_802472AC)[1];
StaticNpc N(npcGroup_8024749C)[1];
StaticNpc N(npcGroup_8024768C)[1];
NpcGroupList N(npcGroupList_8024787C);
NpcGroupList N(npcGroupList_802478B8);
NpcGroupList N(npcGroupList_802478E8);
const char D_80247914_BF4704[8]; // "kmr_23"
const char D_8024791C_BF470C[8]; // "arn_08"
const char D_80247924_BF4714[8]; // "arn_03"
const char D_8024792C_BF471C[8]; // "mim_12"
s32 pad_007934[3];
s32 pad_007948[2];
s32 pad_0079A4[3];

// text: func_80240000_BECDF0

// text: func_8024004C_BECE3C

// text: func_802401AC_BECF9C

// text: func_802405BC_BED3AC

// text: func_802405FC_BED3EC

// text: func_80240708_BED4F8

s32 pad_0007F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240800_BED5F0

s32 pad_000868[] = {
    0x00000000, 0x00000000,
};

// text: func_80240870_BED660

// text: func_802408A4_BED694

s32 pad_000944[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240950_BED740

// text: func_80240B00_BED8F0

// text: N(UnkNpcAIFunc1)

// text: func_802411E8_BEDFD8

// text: N(UnkNpcAIFunc2)

// text: func_802415A4_BEE394

// text: func_80241610_BEE400

// text: N(UnkNpcAIFunc3)

// text: func_802417A8_BEE598

// text: func_80241B38_BEE928

// text: func_80241C5C_BEEA4C

// text: func_80241E48_BEEC38

s32 pad_001E84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 20.0f, -147.0f, 180.0f },
    { 485.0f, 0.0f, 0.0f, 270.0f },
    { -488.0f, 0.0f, 0.0f, 90.0f },
    { 194.0f, 0.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900BB,
};

Script N(script_80241F10) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 29, 0, 8);
            PlayAmbientSounds(1);
        }
        < 0xFFFFFFEF {
            SetMusicTrack(0, 31, 0, 8);
            PlayAmbientSounds(1);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 85, 0, 8);
            PlayAmbientSounds(1);
        }
        == 0xFFFFFFF2 {
            SetMusicTrack(0, 120, 1, 8);
        }
        else {
            SetMusicTrack(0, 29, 0, 8);
            PlayAmbientSounds(1);
        }
    }
});

s32 pad_002038[] = {
    0x00000000, 0x00000000,
};

s32 N(itemList_80242040)[] = {
    0x0000001F, 0x00000000,
};

Script N(script_80242048) = SCRIPT({
    FadeOutMusic(0, 1000);
    SI_VAR(0) = 0;
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 145, 65, 0);
        SetCamSpeed(0, 0.6005859375);
        SetPanTarget(0, 145, 30, 0);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_8024004C_BECE3C(2, 50, 100, 31, 0xFFFFFFFA, 145, 65, 0, 30, 0);
        spawn {
            func_802401AC_BECF9C();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240000_BECDF0();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 145, 65, 0);
        }
        spawn {
            sleep 12;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 50;
            sleep 115;
            PlaySoundAt(311, 0, 145, 65, 0);
        }
        func_802405BC_BED3AC(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 145, 0, 0);
        func_802405BC_BED3AC(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_802405FC_BED3EC(2, 145, 30, 0, 0);
        spawn {
            func_80240708_BED4F8();
        }
        sleep 1;
    }
    func_802405BC_BED3AC(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 0xFFFFFFF1;
    GotoMapSpecial(D_80247914_BF4704, 2, 14);
    sleep 100;
});

Script N(script_80242498) = SCRIPT({
    SI_VAR(0) = 1;
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 145, 65, 0);
        SetCamSpeed(0, 0.6005859375);
        SetPanTarget(0, 145, 30, 0);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_8024004C_BECE3C(2, 50, 100, 31, 0xFFFFFFFA, 145, 65, 0, 30, 0);
        spawn {
            func_802401AC_BECF9C();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240000_BECDF0();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 145, 65, 0);
        }
        spawn {
            sleep 12;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 50;
            sleep 115;
            PlaySoundAt(311, 0, 145, 65, 0);
        }
        func_802405BC_BED3AC(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 145, 0, 0);
        func_802405BC_BED3AC(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_802405FC_BED3EC(2, 145, 30, 0, 0);
        spawn {
            func_80240708_BED4F8();
        }
        sleep 1;
    }
    func_802405BC_BED3AC(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 0xFFFFFFF1;
    GotoMapSpecial(D_80247914_BF4704, 2, 14);
    sleep 100;
});

Script N(script_ExitSingleDoor_802428D4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 10;
    SI_VAR(2) = 29;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_8024791C_BF470C, 0);
    sleep 100;
});

Script N(script_ExitWalk_80242978) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80247924_BF4714, 0);
    sleep 100;
});

Script N(script_ExitWalk_802429D4) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_8024792C_BF471C, 1);
    sleep 100;
});

Script N(script_80242A30) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetPlayerPos(0xFFFFFFE4, 0, 0xFFFFFEB3);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFE4, 0, 0xFFFFFEB3);
    SetCamSpeed(0, 90.0);
    SetCamType(0, 0, 0);
    SetCamPitch(0, 25.0, -4.0);
    SetCamDistance(0, 1100);
    SetCamPosA(0, 500, 0);
    SetCamPosB(0, 0, 0xFFFFFE0C);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 5, 0, 0xFFFFFF6D);
    PanToTarget(0, 0, 1);
    RotateModel(29, 80, 0, -1, 0);
    PlaySoundAtNpc(0, 8392, 0);
    SetNpcJumpscale(0, 2.5);
    NpcJump0(0, 0, 20, 0xFFFFFF88, 8);
    sleep 1;
    PlaySoundAtNpc(0, 8392, 0);
    NpcJump0(0, 0, 10, 0xFFFFFFC4, 12);
    sleep 1;
    PlaySoundAtNpc(0, 8392, 0);
    NpcJump0(0, 0, 0, 0, 12);
    sleep 1;
    SetNpcVar(0, 0, 0);
    spawn {
        loop {
            PlaySoundAtNpc(0, 8392, 0);
            NpcJump0(0, 0, 0, 0, 10);
            sleep 1;
            GetNpcVar(0, 0, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
        }
        SetNpcVar(0, 0, 2);
    }
    spawn {
        MakeLerp(80, 0, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(29, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(10, 450, 0);
    }
    NpcFaceNpc(0, 1, 0);
    SpeakToPlayer(0, 0x6C000A, 0x6C0001, 5, 0xE00C7);
    SetNpcVar(0, 0, 1);
    loop {
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    PlaySoundAtNpc(0, 8392, 0);
    NpcJump0(0, 75, 0, 10, 12);
    sleep 1;
    PlaySoundAtNpc(0, 8392, 0);
    NpcJump0(0, 150, 0, 20, 12);
    sleep 1;
    spawn {
        sleep 4;
        SetCamSpeed(0, 90.0);
        SetCamPitch(0, 2.0, -9.0);
        SetCamDistance(0, 700);
        SetCamPosA(0, 500, 0);
        SetCamPosB(0, 0, 0xFFFFFE0C);
        SetCamPosC(0, 0, 0);
        SetPanTarget(0, 65, 0, 0xFFFFFF77);
        PanToTarget(0, 0, 1);
        SetNpcAnimation(1, 0x6A0022);
    }
    PlaySoundAtNpc(0, 8392, 0);
    NpcJump0(0, 298, 56, 31, 18);
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    EnableNpcShadow(0, 0);
    spawn {
        SetNpcAnimation(1, 0x6A0023);
        sleep 20;
        SetNpcAnimation(1, 0x6A0006);
    }
    sleep 20;
    spawn {
        PlaySoundAtCollider(10, 449, 0);
        MakeLerp(0, 80, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(29, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        sleep 30;
        UseSettingsFrom(0, 236, 0, 0xFFFFFFD2);
        SetCamSpeed(0, 4.0);
        SetCamPitch(0, 8.0, -9.0);
        SetCamDistance(0, 450);
        SetPanTarget(0, 250, 0, 0xFFFFFFD2);
        PanToTarget(0, 0, 1);
    }
    ModifyColliderFlags(0, 10, 0x7FFFFE00);
    SetPlayerPos(0, 20, 0xFFFFFF3D);
    SetNpcPos(0xFFFFFFFC, 0, 20, 0xFFFFFF3D);
    EnablePartnerAI();
    PlayerMoveTo(0, 0, 45);
    ModifyColliderFlags(1, 10, 0x7FFFFE00);
    spawn {
        MakeLerp(80, 0, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(29, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(10, 450, 0);
    }
    PlayerMoveTo(200, 0, 35);
    sleep 5;
    SpeakToPlayer(1, 0x6A0010, 0x6A0006, 0, 0xE00C8);
    SetNpcVar(1, 0, 1);
    sleep 30;
    DisablePlayerInput(0);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_802433C8) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitWalk_80242978), 0x80000, 5, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitWalk_802429D4), 0x80000, 1, 1, 0),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFE8),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802439B0), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80242040), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitSingleDoor_802428D4), TriggerFlag_WALL_INTERACT, 10, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_EnterWalk_8024346C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_VAR(0) == 0xFFFFFFEF) {
                await N(script_80242A30);
                spawn N(script_802433C8);
            } else {
                SI_VAR(2) = 29;
                SI_VAR(3) = 1;
                await EnterSingleDoor;
                spawn N(script_802433C8);
            }
        }
        == 1 {
            SI_VAR(0) = N(script_802433C8);
            spawn EnterWalk;
            sleep 1;
        }
        == 2 {
            SI_VAR(0) = N(script_802433C8);
            spawn EnterWalk;
            sleep 1;
        }
        == 3 {
            spawn N(script_802433C8);
            sleep 1;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 34;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1977) = 1;
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            MakeNpcs(0, N(npcGroupList_802478B8));
        }
        < 0xFFFFFFF2 {
            MakeNpcs(0, N(npcGroupList_8024787C));
        }
        == 0xFFFFFFF2 {
            MakeNpcs(0, N(npcGroupList_802478E8));
        }
        else {
            MakeNpcs(0, N(npcGroupList_802478B8));
        }
    }
    await N(script_MakeEntities);
    if (SI_SAVE_VAR(0) == 0xFFFFFFF0) {
        spawn N(script_80242498);
    }
    spawn N(script_EnterWalk_8024346C);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        sleep 65;
    }
    spawn N(script_80243790);
    spawn N(script_80241F10);
    UseDoorSounds(0);
    SetCamSpeed(0, 0.30078125);
});

s32 pad_003788[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243790) = SCRIPT({
    spawn N(script_802437AC);
});

Script N(script_802437AC) = SCRIPT({
    SI_VAR(0) = 0.0;
    SI_VAR(1) = 30;
    PlaySoundAtModel(23, 0x8000004A, 0);
0:
    SI_VAR(0) += 1.0;
    func_80240800_BED5F0();
    RotateModel(27, SI_VAR(0), 0, 0, 1);
    sleep 1;
    SI_VAR(1) -= 1;
    if (SI_VAR(1) > 0) {
        goto 0;
    }
    SI_VAR(1) = 30;
    RandInt(100, SI_VAR(2));
    if (SI_VAR(2) > 10) {
        goto 0;
    }
    SI_VAR(2) = 1.0;
    loop 50 {
        SI_VAR(2) -= 0.0107421875;
        SI_VAR(0) +=f SI_VAR(2);
        RotateModel(27, SI_VAR(0), 0, 0, 1);
        sleep 1;
    }
    loop 50 {
        SI_VAR(2) += 0.0107421875;
        SI_VAR(0) +=f SI_VAR(2);
        RotateModel(27, SI_VAR(0), 0, 0, 1);
        sleep 1;
    }
    SI_VAR(1) = 30;
    goto 0;
});

Script N(script_802439B0) = SCRIPT({
    group 0;
    0x802D5830(1);
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        0x802D5830(0);
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        0x802D5830(0);
        return;
    }
    FindKeyItem(31, SI_VAR(0));
    RemoveKeyItemAt(SI_VAR(0));
    0x802D6954();
    SI_SAVE_VAR(0) = 0xFFFFFFE8;
    func_802408A4_BED694(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240870_BED660();
    0x802D5830(0);
    unbind;
});

Script N(script_80243B28) = SCRIPT({
    bind N(script_ExitSingleDoor_802428D4) to TriggerFlag_WALL_INTERACT 10;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFE8) {
        MakeEntity(0x802BCD68, 10, 30, 0xFFFFFF65, 0, 0x80000000);
        AssignScript(N(script_80243B28));
        SI_MAP_VAR(0) = SI_VAR(0);
    }
});

f32 N(floatTable_80243BC0)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80243BD8) = {
    .moveSpeed = 1.8f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 4.0f,
    .unk_1C = 0x5,
    .unk_20 = 0x1,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243C08) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0xFFFFFCAE);
    SetSelfVar(6, 60);
    SetSelfVar(1, 700);
    func_80241C5C_BEEA4C(N(aISettings_80243BD8));
});

NpcSettings N(npcSettings_80243C78) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x12,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243C08),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xC,
    .unk_2A = 0x1,
};

Script N(script_80243CA4) = SCRIPT({

});

Script N(script_80243CB4) = SCRIPT({

});

NpcSettings N(npcSettings_80243CC4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_80243CA4),
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80243CB4),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80243CF0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x5A,
    .radius = 0x41,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80243D1C) = {
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

NpcSettings N(npcSettings_80243D48) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
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

s32 unk_missing_80243D74[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_80243DCC) = SCRIPT({
    loop {
        PlaySoundAtNpc(1, 8438, 0);
        ShakeCam(0, 0, 3, 0.80078125);
    }
});

Script N(script_80243E24) = SCRIPT({
    DisablePlayerInput(1);
    UseSettingsFrom(0, 236, 0, 0xFFFFFFD2);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, 250, 0, 0xFFFFFFD2);
    PanToTarget(0, 0, 1);
    SetPlayerAnimation(0x10002);
    SetNpcAnimation(-1, 0x6A0008);
    SetNpcYaw(-1, 90);
    sleep 10;
    SpeakToPlayer(-1, 0x6A0012, 0x6A0008, 5, 0xE00CA);
    sleep 10;
    InterpNpcYaw(-1, 270, 0);
    sleep 10;
    SpeakToPlayer(-1, 0x6A0012, 0x6A0008, 5, 0xE00CB);
    SetCamDistance(0, 300);
    SetCamSpeed(0, 2.0);
    SetCamPitch(0, 5.0, -16.0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    WaitForCam(0, 1.0);
});

Script N(script_80243FE8) = SCRIPT({
    sleep 10;
    SetNpcAnimation(-1, 0x6A0022);
    sleep 15;
    loop 4 {
        PlaySoundAtNpc(-1, 0xB0000010, 0);
        SetNpcVar(3, 0, 1);
        sleep 4;
        PlaySoundAtNpc(-1, 0xB0000010, 0);
        SetNpcVar(6, 0, 1);
        sleep 4;
        PlaySoundAtNpc(-1, 0xB0000010, 0);
        SetNpcVar(2, 0, 1);
        sleep 6;
        PlaySoundAtNpc(-1, 0xB0000010, 0);
        SetNpcVar(4, 0, 1);
        sleep 8;
        PlaySoundAtNpc(-1, 0xB0000010, 0);
        SetNpcVar(5, 0, 1);
        sleep 6;
        PlaySoundAtNpc(-1, 0xB0000010, 0);
        SetNpcVar(7, 0, 1);
        sleep 6;
    }
    sleep 10;
    SetNpcAnimation(-1, 0x6A0023);
    sleep 30;
    SetNpcAnimation(-1, 0x6A0022);
    sleep 10;
    PlaySoundAtNpc(-1, 0xB0000010, 0);
    SetNpcVar(3, 0, 1);
    sleep 15;
    SetNpcAnimation(-1, 0x6A0021);
    sleep 45;
    UseSettingsFrom(0, 236, 0, 0xFFFFFFD2);
    SetCamSpeed(0, 90.0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 50;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 5;
    SetPlayerAnimation(0x10000);
    SetNpcAnimation(-1, 0x6A000F);
    SpeakToPlayer(-1, 0x6A0012, 0x6A0008, 0, 0xE00CC);
    spawn {
        sleep 5;
        SetCamSpeed(0, 90.0);
        loop 40 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    spawn {
        0x802CF56C(2);
        loop 45 {
            PlayerFaceNpc(-1, 1);
        }
    }
    SI_VAR(10) = spawn N(script_80243DCC);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 800;
    NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 80);
    kill SI_VAR(10);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    EnableNpcShadow(-1, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFF0;
    SetMusicTrack(0, 28, 0, 8);
    GetCurrentPartnerID(SI_VAR(6));
    if (SI_VAR(6) == 9) {
        SI_VAR(5) = 0xFFFFFFFC;
        0x802CF56C(0);
        DisablePartnerAI(0);
        SetNpcPos(0xFFFFFFFC, 257, 25, 0);
    }
    SetCamSpeed(0, 90.0);
    SetCamDistance(0, 300);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 30;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 10;
    if (SI_VAR(6) != 9) {
        SI_VAR(5) = 8;
        SetNpcPos(8, 257, 25, 0);
        0x802CFD30(8, 7, 0, 0, 0, 0);
        NpcFacePlayer(8, 0);
        MakeLerp(0, 240, 20, 0);
        loop {
            UpdateLerp();
            0x802CFD30(8, 7, SI_VAR(0), 0, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        0x802CF56C(0);
    }
    sleep 10;
    spawn {
        if (SI_VAR(6) != 9) {
            DisablePartnerAI(0);
            sleep 1;
            NpcFaceNpc(0xFFFFFFFC, 8, 0);
            sleep 5;
        }
    }
    SpeakToPlayer(SI_VAR(5), 0x5000B, 0x5000B, 0, 0xE00CD);
    InterpPlayerYaw(270, 0);
    sleep 10;
    GetNpcPos(SI_VAR(5), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 0xFFFFFFEC;
    SetCamProperties(0, 2.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 300.0, 15.0, -7.0);
    PlayerFaceNpc(SI_VAR(5), 0);
    sleep 10;
    SpeakToPlayer(SI_VAR(5), 0x50004, 0x50001, 0, 0xE00CE);
    ShowChoice(0x1E000D);
    if (SI_VAR(0) == 0) {
        ContinueSpeech(SI_VAR(5), 0x5000B, 0x5000B, 0, 0xE00CF);
    } else {
        ContinueSpeech(SI_VAR(5), 0x5000B, 0x5000B, 0, 0xE00D0);
    }
    SpeakToPlayer(SI_VAR(5), 0x50004, 0x50001, 0, 0xE00D1);
    UseSettingsFrom(0, 175, 0, 0);
    SetCamSpeed(0, 4.0);
    SetPanTarget(0, 175, 0, 0);
    WaitForCam(0, 1.0);
    SetNpcPos(9, 93, 160, 0xFFFFFFFA);
    InterpNpcYaw(9, 90, 0);
    spawn {
        sleep 10;
        InterpPlayerYaw(270, 0);
    }
    spawn {
        if (SI_VAR(6) != 9) {
            sleep 12;
            InterpNpcYaw(0xFFFFFFFC, 270, 0);
        }
    }
    MakeLerp(160, 31, 70, 0);
    loop {
        UpdateLerp();
        SetNpcPos(9, 93, SI_VAR(0), 0xFFFFFFFA);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        if (SI_VAR(6) != 9) {
            InterpNpcYaw(0xFFFFFFFC, 90, 0);
        }
    }
    SpeakToPlayer(SI_VAR(5), 0x50004, 0x50001, 0, 0xE00D2);
    spawn {
        if (SI_VAR(6) != 9) {
            sleep 12;
            InterpNpcYaw(0xFFFFFFFC, 270, 0);
        }
    }
    sleep 10;
    InterpPlayerYaw(270, 0);
    spawn N(script_80242048);
    sleep 20;
    spawn {
        if (SI_VAR(6) != 9) {
            MakeLerp(240, 0, 20, 0);
            loop {
                UpdateLerp();
                0x802CFD30(8, 7, SI_VAR(0), 0, 0, 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            SetNpcPos(8, 0, 0xFFFFFC18, 0);
            EnablePartnerAI();
        } else {
            sleep 20;
            ClearPartnerMoveHistory(0xFFFFFFFC);
            EnablePartnerAI();
        }
        sleep 8;
        0x802CF56C(2);
    }
    sleep 20;
    DisablePlayerInput(0);
});

Script N(script_Idle_80244C54) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    StartBossBattle(11);
});

Script N(script_Idle_80244CC8) = SCRIPT({
10:
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    spawn {
        SI_VAR(0) = 0.5;
        MakeLerp(50, 80, 15, 0);
        loop {
            UpdateLerp();
            SI_VAR(2) =f SI_VAR(0);
            SI_VAR(2) /= 100;
            SetNpcScale(-1, SI_VAR(2), SI_VAR(2), SI_VAR(2));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        RandInt(80, SI_VAR(2));
        RandInt(10, SI_VAR(3));
        SI_VAR(3) += 5;
        MakeLerp(SI_VAR(2), 240, SI_VAR(3), 0);
        loop {
            UpdateLerp();
            0x802CFD30(-1, 7, SI_VAR(0), 0, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    SetNpcPos(-1, 293, 59, 21);
    sleep 1;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcJumpscale(-1, -0.2998046875);
    RandInt(100, SI_VAR(3));
    SI_VAR(0) -= SI_VAR(3);
    SI_VAR(1) += 100;
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    SetSelfVar(0, 0);
    goto 10;
});

Script N(script_Defeat_80244FB8) = SCRIPT({
    SetEncounterStatusFlags(2, 1);
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetMusicTrack(0, 30, 1, 8);
            await N(script_80243E24);
            spawn N(script_80243FE8);
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80245058) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFEF) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80245090) = SCRIPT({
    SetSelfVar(0, 0);
    BindNpcIdle(-1, N(script_Idle_80244C54));
    BindNpcDefeat(-1, N(script_Defeat_80244FB8));
    if (SI_SAVE_VAR(0) != 0xFFFFFFEF) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80245104) = SCRIPT({
    SetSelfVar(0, 0);
    BindNpcIdle(-1, N(script_Idle_80244CC8));
    if (SI_SAVE_VAR(0) != 0xFFFFFFEF) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80245164) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFEF) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_8024519C) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFEF) {
        RemoveNpc(-1);
    }
});

s32 N(extraAnimationList_802451D4)[] = {
    0x006A0000, 0x006A0022, 0x006A0023, 0x006A0006, 0x006A0010, 0x006A0008, 0x006A000F, 0x006A0012,
    0xFFFFFFFF,
};

s32 N(extraAnimationList_802451F8)[] = {
    0x00950000, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80245200)[] = {
    0x00950100, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80245208)[] = {
    0x00BF0001, 0xFFFFFFFF,
};

Script N(script_Idle_80245210) = SCRIPT({
    loop {
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) -= 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
});

Script N(script_80245304) = SCRIPT({
    DisablePartnerAI(0);
    0x802CF56C(2);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 0xFFFFFFCE;
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(4) += 26;
    SetNpcPos(13, SI_VAR(3), SI_VAR(4), SI_VAR(2));
    PlayerFaceNpc(13, 0);
    NpcFaceNpc(0xFFFFFFFC, 13, 0);
    SI_VAR(0) += 0xFFFFFFE7;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 475.0);
    SetCamPitch(0, 18, 0xFFFFFFF8);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    0x802D2508();
    DisablePlayerInput(1);
    sleep 40;
    SpeakToPlayer(13, 0x140002, 0x140001, 512, 0xE00D3);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 18, 0xFFFFFFF7);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(13, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableNpcAI(13, 0);
    SetNpcAnimation(13, 0x140003);
    sleep 20;
    SetPlayerAnimation(0x1001F);
    PlaySoundAtPlayer(313, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(1);
    SI_VAR(1) += 50;
    SI_VAR(2) += 10;
    SI_VAR(3) += 30;
    loop 5 {
        PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
        PlayEffect(17, 1, SI_VAR(0), SI_VAR(3), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
    }
    sleep 20;
    PlaySoundAtPlayer(392, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    PlayEffect(82, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 30, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    SetPlayerAnimation(0x10002);
    SetNpcAnimation(13, 0x140001);
    EnableNpcAI(13, 1);
    func_80241E48_BEEC38();
    ShowMessageAtScreenPos(0x1D0193, 160, 40);
    sleep 10;
    GetNpcPos(13, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(13, 0x140002, 0x140001, 512, 0xE00D4);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFE7;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(13, 0x140002, 0x140001, 512, 0xE00D5);
    SetNpcFlagBits(13, 0x40000, 1);
    spawn {
        loop 25 {
            GetNpcPos(13, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 4;
        }
    }
    spawn {
        SI_VAR(2) = 0;
        SI_VAR(3) = 1800;
        MakeLerp(SI_VAR(2), SI_VAR(3), 100, 2);
        loop {
            UpdateLerp();
            SetNpcRotation(13, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        GetNpcPos(13, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = SI_VAR(3);
        SI_VAR(5) += 180;
        MakeLerp(SI_VAR(3), SI_VAR(5), 100, 2);
        loop {
            UpdateLerp();
            SetNpcPos(13, SI_VAR(2), SI_VAR(0), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcPos(13, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 15;
        PlaySoundAtNpc(13, 8261, 0);
    }
    sleep 10;
    SetPlayerAnimation(0x1002A);
    sleep 90;
    ResetCam(0, 3);
    sleep 20;
    SetPlayerAnimation(0x10002);
    SI_SAVE_VAR(0) = 0xFFFFFFF3;
    spawn N(script_80241F10);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Init_80245C9C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        BindNpcIdle(-1, N(script_Idle_80245210));
        spawn N(script_80245304);
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80245D0C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243CF0),
        .pos = { 309.0, 0.0, 11.0 },
        .flags = 0x00240F04,
        .init = N(script_Init_80245090),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006A0006, 0x006A0009, 0x006A000C, 0x006A000C, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000,
        },
        .extraAnimations = N(extraAnimationList_802451D4),
    },
    {
        .id = 0,
        .settings = &N(npcSettings_80243CC4),
        .pos = { -10.0, 50.0, -170.0 },
        .flags = 0x00240F05,
        .init = N(script_Init_80245058),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001,
        },
    },
};

StaticNpc N(npcGroup_802460EC)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F0D,
        .init = N(script_Init_80245104),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .extraAnimations = N(extraAnimationList_80245200),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F0D,
        .init = N(script_Init_80245104),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .extraAnimations = N(extraAnimationList_80245200),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F0D,
        .init = N(script_Init_80245104),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .extraAnimations = N(extraAnimationList_80245200),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F0D,
        .init = N(script_Init_80245104),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .extraAnimations = N(extraAnimationList_80245200),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F0D,
        .init = N(script_Init_80245104),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .extraAnimations = N(extraAnimationList_802451F8),
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F0D,
        .init = N(script_Init_80245104),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .extraAnimations = N(extraAnimationList_802451F8),
    },
};

StaticNpc N(npcGroup_80246C8C)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F05,
        .init = N(script_Init_80245164),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00050001, 0x00050002, 0x00050003, 0x00050003, 0x00050001, 0x00050001, 0x00050000, 0x00050000, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003, 0x00050003,
        },
    },
};

StaticNpc N(npcGroup_80246E7C)[] = {
    {
        .id = 9,
        .settings = &N(npcSettings_80243D1C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200D05,
        .init = N(script_Init_8024519C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00BF0001, 0x00BF0002, 0x00BF0003, 0x00BF0003, 0x00BF0001, 0x00BF0001, 0x00BF0000, 0x00BF0000, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008,
        },
        .extraAnimations = N(extraAnimationList_80245208),
    },
};

Script N(script_Init_8024706C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFE6) {
        if (SI_SAVE_VAR(0) < 0xFFFFFFF1) {
            RemoveNpc(-1);
        }
    }
});

StaticNpc N(npcGroup_802470BC)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80243C78),
        .pos = { -216.0, 60.0, -10.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_8024706C),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DRIED_SHROOM, 10 } },
        .movement = { 0xFFFFFF28, 0x0000003C, 0xFFFFFFF6, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF28, 0x0000003C, 0xFFFFFFF6, 0x000000FA },
        .animations = {
            0x00280201, 0x00280203, 0x00280204, 0x00280204, 0x00280201, 0x00280201, 0x00280206, 0x00280206, 0x00280205, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204,
        },
    },
};

StaticNpc N(npcGroup_802472AC)[] = {
    {
        .id = 11,
        .settings = &N(npcSettings_80243C78),
        .pos = { 0.0, 60.0, 150.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_8024706C),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DRIED_SHROOM, 10 } },
        .movement = { 0x00000000, 0x0000003C, 0x00000096, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x0000003C, 0x00000096, 0x000000FA },
        .animations = {
            0x00280201, 0x00280203, 0x00280204, 0x00280204, 0x00280201, 0x00280201, 0x00280206, 0x00280206, 0x00280205, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204,
        },
    },
};

StaticNpc N(npcGroup_8024749C)[] = {
    {
        .id = 12,
        .settings = &N(npcSettings_80243C78),
        .pos = { 260.0, 60.0, 30.0 },
        .flags = 0x00000C00,
        .init = N(script_Init_8024706C),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DRIED_SHROOM, 10 } },
        .movement = { 0x00000104, 0x0000003C, 0x0000001E, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000104, 0x0000003C, 0x0000001E, 0x000000FA },
        .animations = {
            0x00280201, 0x00280203, 0x00280204, 0x00280204, 0x00280201, 0x00280201, 0x00280206, 0x00280206, 0x00280205, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204, 0x00280204,
        },
    },
};

StaticNpc N(npcGroup_8024768C)[] = {
    {
        .id = 13,
        .settings = &N(npcSettings_80243D48),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80245C9C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
    },
};

NpcGroupList N(npcGroupList_8024787C) = {
    NPC_GROUP(N(npcGroup_80245D0C), 0x0E100002),
    NPC_GROUP(N(npcGroup_802460EC), 0x00000000),
    NPC_GROUP(N(npcGroup_80246C8C), 0x00000000),
    NPC_GROUP(N(npcGroup_80246E7C), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_802478B8) = {
    NPC_GROUP(N(npcGroup_802470BC), 0x0E060002),
    NPC_GROUP(N(npcGroup_802472AC), 0x0E070002),
    NPC_GROUP(N(npcGroup_8024749C), 0x0E080002),
    {},
};

NpcGroupList N(npcGroupList_802478E8) = {
    NPC_GROUP(N(npcGroup_8024768C), 0x00000000),
    {},
};

// rodata: jtbl_80247900_BF46F0

// rodata: D_80247914_BF4704

// rodata: D_8024791C_BF470C

// rodata: D_80247924_BF4714

// rodata: D_8024792C_BF471C

s32 pad_007934[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80247940_BF4730

s32 pad_007948[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80247950_BF4740

// rodata: D_80247958_BF4748

// rodata: D_80247960_BF4750

// rodata: jtbl_80247968_BF4758

s32 pad_0079A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
