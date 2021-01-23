#include "pra_09.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_001644[3];
Script N(script_802416B0);
s32 pad_0016EC[1];
Script N(script_802416F0);
Script N(script_80241800);
Script N(script_802418A8);
Script N(script_ExitWalk_8024196C);
Script N(script_802419C8);
Script N(script_EnterWalk_80241A28);
Script N(script_80241AF8);
Script N(main);
s32 N(unk_80241D98)[1];
s32 N(unk_80241D9C)[1];
Script N(script_80241DA0);
Script N(script_80241EE4);
Script N(script_80241F34);
Script N(script_80242068);
Script N(script_802420B8);
Script N(script_80242184);
Script N(script_80242268);
Script N(script_80242374);
Script N(script_802425D0);
Script N(script_8024266C);
Script N(script_80242A58);
Script N(script_80242AC8);
Script N(script_80242B78);
Script N(script_80242BE8);
Script N(script_80243270);
Script N(script_Defeat_8024432C);
Script N(script_Interact_80244424);
Script N(script_Interact_80244454);
Script N(script_Interact_80244484);
Script N(script_Interact_802444B4);
Script N(script_Interact_802444E4);
Script N(script_Init_80244514);
Script N(script_Init_8024455C);
Script N(script_Init_802445B0);
Script N(script_Init_80244604);
Script N(script_Init_80244658);
Script N(script_Init_802446AC);
Script N(script_Init_80244700);
Script N(script_Init_80244728);
Script N(script_Init_80244750);
Script N(script_Init_80244778);
StaticNpc N(npcGroup_802447A0)[5];
StaticNpc N(npcGroup_80245150)[5];
Script N(script_Hit_80245B00);
Script N(script_Hit_80245B50);
Script N(script_Hit_80245BA0);
Script N(script_Hit_80245BF0);
Script N(script_Hit_80245C40);
Script N(script_Idle_80245C90);
Script N(script_Idle_80245CF8);
Script N(script_Idle_80245D60);
Script N(script_Idle_80245DC8);
Script N(script_Idle_80245E30);
Script N(script_Init_80245E98);
Script N(script_Init_80245EE8);
Script N(script_Init_80245F38);
Script N(script_Init_80245F88);
Script N(script_Init_80245FD8);
StaticNpc N(npcGroup_80246028)[5];
NpcGroupList N(npcGroupList_802469D8);
s32 pad_006A08[2];
const char D_80246A10_D5F2A0[8]; // "pra_03"
const char D_80246A18_D5F2A8[8]; // "pra_11"

// text: func_Init_D58890

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D588E4

// text: func_802400EC_D5897C

// text: func_80240128_D589B8

s32 N(unk_802402F0)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x3C013F36, 0x3421DB6E, 0x44810000, 0x27B000D8, 0x44050000, 0x0200202D, 0x00A0302D, 0x0C019DF0,
    0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0xC6200030, 0x3C014040,
    0x44811000, 0x46000007, 0x46020001, 0x8E250028, 0x8E26002C, 0x44070000, 0x0C019E40, 0x0200202D,
    0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x24040002, 0x0000282D, 0x00A0302D, 0x00A0382D,
    0x27A20018, 0x0C0B7710, 0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130,
    0xD7B40128, 0x03E00008, 0x27BD0140,
};

// text: func_8024049C_D58D2C

// text: func_80240500_D58D90

s32 N(unk_8024068C)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x27B000D8, 0x3C013F36, 0x3421DB6E, 0x44810000, 0x0200202D, 0x44050000, 0x3C06BF36, 0x34C6DB6E,
    0x0C019DF0, 0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0x8E250028,
    0xC620002C, 0x8E270030, 0x46000007, 0x44060000, 0x0C019E40, 0x0200202D, 0x27A40018, 0x0200282D,
    0x0C019D80, 0x0080302D, 0xC62200A8, 0x3C0142B4, 0x44810000, 0x00000000, 0x4602003E, 0x00000000,
    0x4500000A, 0x24040001, 0x3C014387, 0x44810000, 0x00000000, 0x4600103C, 0x00000000, 0x45000004,
    0x27A20018, 0x3C041000, 0x34840001, 0x27A20018, 0x0000282D, 0x00A0302D, 0x00A0382D, 0x0C0B7710,
    0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130, 0xD7B40128, 0x03E00008,
    0x27BD0140,
};

// text: func_80240870_D59100

// text: func_80240D3C_D595CC

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D597B0

// text: func_80240F7C_D5980C

// text: func_8024114C_D599DC

// text: func_802411A0_D59A30

// text: func_802411D8_D59A68

// text: func_80241274_D59B04

// text: func_80241310_D59BA0

// text: func_802413A4_D59C34

// text: func_802414F4_D59D84

// text: func_802415F8_D59E88

s32 pad_001644[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 73.0f, 90.0f },
    { 479.0f, 0.0f, 84.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19013C,
};

Script N(script_802416B0) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_0016EC[] = {
    0x00000000,
};

Script N(script_802416F0) = SCRIPT({
    GetEntryID(SI_VAR(10));
    if (SI_VAR(10) == SI_VAR(1)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(2)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(3)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(4)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(5)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(6)) {
        SI_VAR(0) = 2;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80241800) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D5897C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D5897C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D58D2C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D595CC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802418A8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 12;
    SI_VAR(2) = 24;
    SI_VAR(3) = 21;
    SI_VAR(4) = 25;
    SI_VAR(5) = 22;
    spawn 0x80285E9C;
    sleep 17;
    GotoMap(D_80246A10_D5F2A0, 2);
    sleep 100;
});

Script N(script_ExitWalk_8024196C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80246A18_D5F2A8, 0);
    sleep 100;
});

Script N(script_802419C8) = SCRIPT({
    bind N(script_802418A8) to TriggerFlag_WALL_INTERACT 12;
    if (SI_SAVE_VAR(0) >= 80) {
        bind N(script_ExitWalk_8024196C) to 0x80000 14;
    }
});

Script N(script_EnterWalk_80241A28) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 24;
            SI_VAR(3) = 21;
            SI_VAR(4) = 25;
            SI_VAR(5) = 22;
            await 0x80285EC4;
            spawn N(script_802419C8);
        }
        == 1 {
            SI_VAR(0) = N(script_802419C8);
            spawn EnterWalk;
        }
    }
});

Vec4f N(triggerCoord_80241AE8) =  { 487.0f, 0.0f, 80.0f, 0.0f };

Script N(script_80241AF8) = SCRIPT({
    PlayEffect(66, 0, 38, 30, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(38, 0);
    EnableModel(41, 0);
    ModifyColliderFlags(0, 18, 0x7FFFFE00);
    EnableModel(43, 1);
    SI_SAVE_FLAG(1500) = 1;
    unbind;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802469D8));
    if (SI_SAVE_FLAG(1500) == 0) {
        bind N(script_80241AF8) to TriggerFlag_BOMB N(triggerCoord_80241AE8);
        EnableModel(43, 0);
    } else {
        EnableModel(38, 0);
        EnableModel(41, 0);
        ModifyColliderFlags(0, 18, 0x7FFFFE00);
    }
    spawn N(script_802416B0);
    SI_VAR(0) = 1;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_80241800);
    spawn N(script_EnterWalk_80241A28);
    sleep 1;
});

NpcSettings N(npcSettings_80241D40) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x2D,
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

NpcSettings N(npcSettings_80241D6C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

s32 N(unk_80241D98)[] = {
    0x00000000,
};

s32 N(unk_80241D9C)[] = {
    0x00000000,
};

Script N(script_80241DA0) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F7C_D5980C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802411A0_D59A30(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241EE4) = {
    SI_CMD(ScriptOpcode_CALL, func_802411D8_D59A68, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241DA0), 0x10, 0, N(script_ShakeTree_80246A20), 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024114C_D599DC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80241F34) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F7C_D5980C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802411A0_D59A30(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242068) = {
    SI_CMD(ScriptOpcode_CALL, func_80241274_D59B04, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241F34), 0x10, 0, 0x80246BE8, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024114C_D599DC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802420B8) = SCRIPT({
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, SI_VAR(10));
    SetCamDistance(0, 350.0);
    SetCamPitch(0, 12.0, -5.5);
    SetCamPosB(0, 500.0, 20.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_80242184) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 6.0);
    SetCamDistance(0, 500.0);
    SetCamPosB(0, 386.0, 20.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
});

Script N(script_80242268) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) > 386) {
        SI_VAR(0) = 386;
    }
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 6.0);
    SetCamDistance(0, 500.0);
    SetCamPosB(0, 500.0, 20.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
});

Script N(script_80242374) = SCRIPT({
    func_802415F8_D59E88();
    SetNpcFlagBits(SI_VAR(3), 256, 1);
    SpeakToPlayer(SI_VAR(3), 0x3000E, 0x30003, 0, SI_VAR(5));
    GetNpcPos(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80241310_D59BA0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(SI_VAR(3), 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(SI_VAR(3), 256, 0);
    SetNpcPos(SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAtNpc(SI_VAR(4), 717, 0);
    MakeLerp(0, 2880, 40, 4);
1:
    UpdateLerp();
    SetNpcRotation(SI_VAR(4), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    EndSpeech(SI_VAR(4), 0x4E0005, 0x4E0002, 0);
    await N(script_80242268);
    PanToTarget(0, 0, 0);
    spawn {
        SetNpcAnimation(SI_VAR(4), 0x4E0004);
        InterpNpcYaw(SI_VAR(4), 90, 0);
        SetNpcSpeed(SI_VAR(4), 6.5);
        PlaySoundAtNpc(SI_VAR(4), 715, 0);
        NpcMoveTo(SI_VAR(4), 0, SI_VAR(2), 0);
        SetNpcPos(SI_VAR(4), 0, 0xFFFFFC18, 0);
    }
    sleep 15;
});

Script N(script_802425D0) = SCRIPT({
    SetNpcJumpscale(SI_VAR(3), 1.0);
    GetNpcPos(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    GetNpcPos(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
});

Script N(script_8024266C) = SCRIPT({
    if (SI_MAP_VAR(2) == 0) {
        spawn {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(1, 0, 0xFFFFFC18, 0);
            func_80241310_D59BA0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(5, 717, 0);
            SetNpcAnimation(5, 0x4E0004);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(5, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    if (SI_MAP_VAR(3) == 0) {
        spawn {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(2, 0, 0xFFFFFC18, 0);
            func_80241310_D59BA0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(6, 717, 0);
            SetNpcAnimation(6, 0x4E0004);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(6, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    if (SI_MAP_VAR(4) == 0) {
        spawn {
            GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(3, 0, 0xFFFFFC18, 0);
            func_80241310_D59BA0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(7, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(7, 717, 0);
            SetNpcAnimation(7, 0x4E0004);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(7, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    if (SI_MAP_VAR(5) == 0) {
        spawn {
            GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(4, 0, 0xFFFFFC18, 0);
            func_80241310_D59BA0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(8, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(8, 717, 0);
            SetNpcAnimation(8, 0x4E0004);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(8, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    sleep 20;
});

Script N(script_80242A58) = SCRIPT({
    SetNpcFlagBits(SI_VAR(3), 256, 1);
    SetNpcAnimation(SI_VAR(3), 0x30007);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcMoveTo(SI_VAR(3), SI_VAR(0), SI_VAR(2), 30);
});

Script N(script_80242AC8) = SCRIPT({
    InterpNpcYaw(SI_VAR(3), SI_VAR(9), 0);
    loop 30 {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += SI_VAR(4);
        SI_VAR(1) += SI_VAR(5);
        SI_VAR(2) += SI_VAR(6);
        SetNpcPos(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80242B78) = SCRIPT({
    NpcMoveTo(SI_VAR(3), SI_VAR(0), SI_VAR(2), 20);
    SetNpcAnimation(SI_VAR(3), 0x30003);
    SetNpcFlagBits(SI_VAR(3), 256, 0);
    InterpNpcYaw(SI_VAR(3), 90, 0);
});

Script N(script_80242BE8) = SCRIPT({
    DisablePlayerInput(1);
    loop {
        sleep 1;
        GetPlayerActionState(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    DisablePlayerPhysics(1);
    if (SI_MAP_VAR(2) == 0) {
        SI_VAR(3) = 1;
        spawn N(script_80242A58);
    }
    if (SI_MAP_VAR(3) == 0) {
        SI_VAR(3) = 2;
        spawn N(script_80242A58);
    }
    if (SI_MAP_VAR(4) == 0) {
        SI_VAR(3) = 3;
        spawn N(script_80242A58);
    }
    if (SI_MAP_VAR(5) == 0) {
        SI_VAR(3) = 4;
        spawn N(script_80242A58);
    }
    SI_VAR(3) = 0;
    await N(script_80242A58);
    InterpPlayerYaw(90, 3);
    SetPlayerAnimation(0x80009);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 10;
    spawn {
        loop 35 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            sleep 1;
        }
        PanToTarget(0, 0, 0);
    }
    spawn {
        loop 30 {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 20;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    if (SI_MAP_VAR(2) == 0) {
        SI_VAR(3) = 1;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 10;
        spawn N(script_80242AC8);
    }
    if (SI_MAP_VAR(3) == 0) {
        SI_VAR(3) = 2;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 0;
        SI_VAR(6) = 0;
        spawn N(script_80242AC8);
    }
    if (SI_MAP_VAR(4) == 0) {
        SI_VAR(3) = 3;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 0;
        SI_VAR(6) = 10;
        spawn N(script_80242AC8);
    }
    if (SI_MAP_VAR(5) == 0) {
        SI_VAR(3) = 4;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 0;
        SI_VAR(6) = 20;
        spawn N(script_80242AC8);
    }
    NpcMoveTo(0, 370, 73, 30);
    DisablePlayerPhysics(0);
    if (SI_MAP_VAR(2) == 0) {
        SI_VAR(3) = 1;
        SI_VAR(0) = 280;
        SI_VAR(2) = 100;
        spawn N(script_80242B78);
    }
    if (SI_MAP_VAR(3) == 0) {
        SI_VAR(3) = 2;
        SI_VAR(0) = 315;
        SI_VAR(2) = 55;
        spawn N(script_80242B78);
    }
    if (SI_MAP_VAR(4) == 0) {
        SI_VAR(3) = 3;
        SI_VAR(0) = 350;
        SI_VAR(2) = 80;
        spawn N(script_80242B78);
    }
    if (SI_MAP_VAR(5) == 0) {
        SI_VAR(3) = 4;
        SI_VAR(0) = 420;
        SI_VAR(2) = 60;
        spawn N(script_80242B78);
    }
    SI_VAR(3) = 0;
    SI_VAR(0) = 385;
    SI_VAR(2) = 120;
    await N(script_80242B78);
    ShowMessageAtScreenPos(0x12014E, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_80243270) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 80) {
        return;
    }
0:
    SI_VAR(0) = SI_SAVE_FLAG(1500);
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    DisablePlayerInput(1);
    sleep 25;
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 258, 1);
    UseSettingsFrom(0, 386, 0, 93);
    SetPanTarget(0, 386, 0, 93);
    SetCamDistance(0, 500.0);
    SetCamPitch(0, 12.0, -7.0);
    SetCamPosB(0, 500.0, 20.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 350;
        SI_VAR(2) = 150;
        SI_VAR(3) = 90;
        SetNpcFlagBits(SI_VAR(0), 256, 1);
        func_802414F4_D59D84();
        sleep 1;
        SetNpcFlagBits(SI_VAR(0), 256, 0);
    }
    sleep 5;
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 280;
        SI_VAR(2) = 150;
        SI_VAR(3) = 100;
        SetNpcFlagBits(SI_VAR(0), 256, 1);
        func_802414F4_D59D84();
        sleep 1;
        SetNpcFlagBits(SI_VAR(0), 256, 0);
    }
    sleep 5;
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 420;
        SI_VAR(2) = 150;
        SI_VAR(3) = 60;
        SetNpcFlagBits(SI_VAR(0), 256, 1);
        func_802414F4_D59D84();
        sleep 1;
        SetNpcFlagBits(SI_VAR(0), 256, 0);
    }
    sleep 5;
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 385;
        SI_VAR(2) = 150;
        SI_VAR(3) = 120;
        SetNpcFlagBits(SI_VAR(0), 256, 1);
        func_802414F4_D59D84();
        sleep 1;
        SetNpcFlagBits(SI_VAR(0), 256, 0);
    }
    sleep 5;
    SI_VAR(0) = 2;
    SI_VAR(1) = 315;
    SI_VAR(2) = 150;
    SI_VAR(3) = 55;
    SetNpcFlagBits(SI_VAR(0), 256, 1);
    func_802414F4_D59D84();
    sleep 1;
    SetNpcFlagBits(SI_VAR(0), 256, 0);
    sleep 30;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SI_VAR(3) = 0;
    spawn N(script_802425D0);
    SpeakToPlayer(0, 0x3000E, 0x30003, 0, 0x12013C);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SI_VAR(3) = 1;
    spawn N(script_802425D0);
    SpeakToPlayer(1, 0x3000E, 0x30003, 0, 0x12013D);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SI_VAR(3) = 2;
    spawn N(script_802425D0);
    SpeakToPlayer(2, 0x3000E, 0x30003, 0, 0x12013E);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SI_VAR(3) = 3;
    spawn N(script_802425D0);
    SpeakToPlayer(3, 0x3000E, 0x30003, 0, 0x12013F);
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SI_VAR(3) = 4;
    spawn N(script_802425D0);
    SpeakToPlayer(4, 0x3000E, 0x30003, 0, 0x120140);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SpeakToPlayer(0, 0x3000E, 0x30003, 0, 0x120141);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SpeakToPlayer(2, 0x3000E, 0x30003, 0, 0x120142);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802420B8);
    SpeakToPlayer(3, 0x3000E, 0x30003, 0, 0x120143);
    ResetCam(0, 2.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
    SetPlayerFlagBits(192, 1);
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 490) {
            SI_VAR(9) = 270;
            await N(script_80242BE8);
        }
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 190) {
            SI_VAR(9) = 90;
            await N(script_80242BE8);
        }
        if (SI_MAP_VAR(2) == 1) {
            if (SI_MAP_VAR(3) == 1) {
                if (SI_MAP_VAR(4) == 1) {
                    if (SI_MAP_VAR(5) == 1) {
                        DisablePlayerInput(1);
                        DisablePartnerAI(0);
                        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        SetNpcPos(0, 0, 0xFFFFFC18, 0);
                        SetNpcFlagBits(0xFFFFFFFC, 2, 0);
                        GetAngleToNPC(0xFFFFFFFC, SI_VAR(10));
                        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        if (SI_VAR(10) <= 180) {
                            SI_VAR(0) += 20;
                        } else {
                            SI_VAR(0) += 0xFFFFFFEC;
                        }
                        SetNpcAnimation(0xFFFFFFFC, 0x30005);
                        SetNpcFlagBits(0xFFFFFFFC, 256, 1);
                        NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 20);
                        SetNpcAnimation(0xFFFFFFFC, 0x30003);
                        SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0x12014F);
                        SetNpcJumpscale(0xFFFFFFFC, 1.0);
                        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                        SetNpcAnimation(0xFFFFFFFC, 0x3000B);
                        spawn {
                            sleep 5;
                            SI_VAR(1) += 10;
                            GetAngleToNPC(0xFFFFFFFC, SI_VAR(10));
                            if (SI_VAR(10) >= 180) {
                                SI_VAR(0) += 20;
                            }
                            PlayEffect(64, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
                            PlaySoundAtPlayer(532, 0);
                        }
                        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
                        SetNpcAnimation(0xFFFFFFFC, 0x30003);
                        sleep 10;
                        SetNpcFlagBits(0xFFFFFFFC, 256, 0);
                        SetPlayerFlagBits(192, 0);
                        EnablePartnerAI();
                        DisablePlayerInput(0);
                        SI_SAVE_VAR(0) = 80;
                        bind N(script_ExitWalk_8024196C) to 0x80000 14;
                        break;
                    }
                }
            }
        }
        match SI_MAP_VAR(0) {
            == 0 {
                sleep 1;
            }
            == 1 {
                DisablePlayerInput(1);
                GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802420B8);
                SpeakToPlayer(0, 0x3000E, 0x3000D, 0, 0x120149);
                await N(script_80242184);
                SetPlayerAnimation(0x1002B);
                await N(script_8024266C);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                func_802413A4_D59C34(SI_MAP_VAR(2), SI_MAP_VAR(3), SI_MAP_VAR(4), SI_MAP_VAR(5));
                DisablePlayerInput(0);
                StartBossBattle(3);
                break;
            }
            == 2 {
                DisablePlayerInput(1);
                GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802420B8);
                SI_VAR(3) = 1;
                SI_VAR(4) = 5;
                SI_VAR(5) = 0x12014A;
                await N(script_80242374);
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(2) = 1;
                DisablePlayerInput(0);
            }
            == 3 {
                DisablePlayerInput(1);
                GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802420B8);
                SI_VAR(3) = 2;
                SI_VAR(4) = 6;
                SI_VAR(5) = 0x12014B;
                await N(script_80242374);
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(3) = 1;
                DisablePlayerInput(0);
            }
            == 4 {
                DisablePlayerInput(1);
                GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802420B8);
                SI_VAR(3) = 3;
                SI_VAR(4) = 7;
                SI_VAR(5) = 0x12014C;
                await N(script_80242374);
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(4) = 1;
                DisablePlayerInput(0);
            }
            == 5 {
                DisablePlayerInput(1);
                GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802420B8);
                SI_VAR(3) = 4;
                SI_VAR(4) = 8;
                SI_VAR(5) = 0x12014D;
                await N(script_80242374);
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(5) = 1;
                DisablePlayerInput(0);
            }
        }
    }
});

Script N(script_Defeat_8024432C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(0xFFFFFFFC, 258, 0);
    SetPlayerFlagBits(192, 0);
    EnablePartnerAI();
    DisablePlayerInput(0);
    SI_SAVE_VAR(0) = 80;
    bind N(script_ExitWalk_8024196C) to 0x80000 14;
});

Script N(script_Interact_80244424) = SCRIPT({
    SpeakToPlayer(-1, 0x3000E, 0x30003, 0, 0x120144);
});

Script N(script_Interact_80244454) = SCRIPT({
    SpeakToPlayer(-1, 0x3000E, 0x30003, 0, 0x120145);
});

Script N(script_Interact_80244484) = SCRIPT({
    SpeakToPlayer(-1, 0x3000E, 0x30003, 0, 0x120146);
});

Script N(script_Interact_802444B4) = SCRIPT({
    SpeakToPlayer(-1, 0x3000E, 0x30003, 0, 0x120147);
});

Script N(script_Interact_802444E4) = SCRIPT({
    SpeakToPlayer(-1, 0x3000E, 0x30003, 0, 0x120148);
});

Script N(script_Init_80244514) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_8024432C));
    SetNpcFlagBits(-1, 0x10000102, 1);
    spawn N(script_80243270);
});

Script N(script_Init_8024455C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244424));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_802445B0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244454));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_80244604) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244484));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_80244658) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802444B4));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_802446AC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802444E4));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_80244700) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080100, 1);
});

Script N(script_Init_80244728) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080100, 1);
});

Script N(script_Init_80244750) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080100, 1);
});

Script N(script_Init_80244778) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080100, 1);
});

StaticNpc N(npcGroup_802447A0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_8024455C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_802445B0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_80244604),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_80244658),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_802446AC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
};

StaticNpc N(npcGroup_80245150)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80241D40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40D01,
        .init = N(script_Init_80244700),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80241D40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40D01,
        .init = N(script_Init_80244728),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80241D40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40D01,
        .init = N(script_Init_80244750),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80241D40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40D01,
        .init = N(script_Init_80244778),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
    {
        .id = 9,
        .settings = &N(npcSettings_80241D40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00E44D00,
        .init = N(script_Init_80244514),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
};

Script N(script_Hit_80245B00) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 1;
        }
    }
});

Script N(script_Hit_80245B50) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 2;
        }
    }
});

Script N(script_Hit_80245BA0) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 3;
        }
    }
});

Script N(script_Hit_80245BF0) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 4;
        }
    }
});

Script N(script_Hit_80245C40) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 5;
        }
    }
});

Script N(script_Idle_80245C90) = SCRIPT({
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80245CF8) = SCRIPT({
    loop {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(11, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80245D60) = SCRIPT({
    loop {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(12, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80245DC8) = SCRIPT({
    loop {
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(13, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80245E30) = SCRIPT({
    loop {
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(14, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Init_80245E98) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80245B00));
    BindNpcIdle(-1, N(script_Idle_80245C90));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80245EE8) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80245B50));
    BindNpcIdle(-1, N(script_Idle_80245CF8));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80245F38) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80245BA0));
    BindNpcIdle(-1, N(script_Idle_80245D60));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80245F88) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80245BF0));
    BindNpcIdle(-1, N(script_Idle_80245DC8));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80245FD8) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80245C40));
    BindNpcIdle(-1, N(script_Idle_80245E30));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

StaticNpc N(npcGroup_80246028)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80245E98),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80245EE8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 12,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80245F38),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 13,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80245F88),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 14,
        .settings = &N(npcSettings_80241D6C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80245FD8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
};

NpcGroupList N(npcGroupList_802469D8) = {
    NPC_GROUP(N(npcGroup_802447A0), 0x21010001),
    NPC_GROUP(N(npcGroup_80245150), 0x21010001),
    NPC_GROUP(N(npcGroup_80246028), 0x21010001),
    {},
};

s32 pad_006A08[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80246A10_D5F2A0

// rodata: D_80246A18_D5F2A8
