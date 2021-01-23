#include "pra_01.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_0013AC[1];
Script N(script_80241440);
s32 pad_0014B8[2];
Script N(script_802414C0);
Script N(script_802415D0);
Script N(script_80241678);
s32 N(unk_8024177C)[2];
s32 N(unk_80241784)[2];
s32 N(unk_8024178C)[2];
s32 N(unk_80241794)[2];
s32 N(unk_8024179C)[3];
s32 N(unk_802417A8)[3];
Script N(script_ExitWalk_802417B4);
Script N(script_ExitWalk_80241810);
Script N(script_8024186C);
Script N(script_80241950);
Script N(script_80241A34);
Script N(script_EnterWalk_80241AB4);
Script N(main);
s32 pad_001F04[3];
s32 unk_missing_80241F3C[22];
s32 N(unk_80241F94)[1];
s32 N(unk_80241F98)[1];
Script N(script_80241F9C);
Script N(script_802420E0);
Script N(script_80242130);
Script N(script_80242264);
Script N(script_Idle_802422B4);
Script N(script_802423A8);
Script N(script_Init_80242D40);
StaticNpc N(npcGroup_80242D70)[1];
NpcGroupList N(npcGroupList_80242F60);
s32 pad_002F78[2];
Script N(script_80242F80);
const char D_80242F90_D4FFD0[8]; // "sam_10"
const char D_80242F98_D4FFD8[8]; // "pra_15"
const char D_80242FA0_D4FFE0[8]; // "pra_02"
s32 pad_002FA8[2];

// text: func_Init_D4D040

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D4D094

// text: func_802400EC_D4D12C

// text: func_80240128_D4D168

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

// text: func_8024049C_D4D4DC

// text: func_80240500_D4D540

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

// text: func_80240870_D4D8B0

// text: func_80240D3C_D4DD7C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D4DF60

// text: func_80240F60_D4DFA0

// text: func_80240F80_D4DFC0

// text: func_80240FDC_D4E01C

// text: func_802411AC_D4E1EC

// text: func_80241200_D4E240

// text: func_80241238_D4E278

// text: func_802412D4_D4E314

// text: func_80241370_D4E3B0

s32 pad_0013AC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 519.0f, -60.0f, 105.0f, 90.0f },
    { 977.0f, 0.0f, 70.0f, 270.0f },
    { 977.0f, 0.0f, -78.0f, 270.0f },
    { 519.0f, -60.0f, -100.0f, 90.0f },
    { 774.0f, -30.0f, 85.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190136,
};

Script N(script_80241440) = SCRIPT({
    if (SI_SAVE_VAR(0) == 88) {
        SetMusicTrack(0, 120, 1, 8);
    } else {
        SetMusicTrack(0, 59, 0, 8);
    }
    UseDoorSounds(0);
});

s32 pad_0014B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802414C0) = SCRIPT({
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
Script N(script_802415D0) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D4D12C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D4D12C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D4D4DC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D4DD7C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241678) = SCRIPT({
    SetTexPanner(SI_VAR(0), SI_VAR(2));
    SetTexPanner(SI_VAR(1), SI_VAR(2));
    loop {
        EnableModel(SI_VAR(0), 1);
        EnableModel(SI_VAR(1), 1);
        SI_VAR(10) = 0;
        loop 20 {
            SetTexPanOffset(SI_VAR(2), 0, SI_VAR(10), 0);
            SI_VAR(10) += 3000;
            sleep 1;
        }
        EnableModel(SI_VAR(0), 0);
        EnableModel(SI_VAR(1), 0);
        sleep 160;
    }
});

s32 N(unk_8024177C)[] = {
    0x00000033, 0xFFFFFFFF,
};

s32 N(unk_80241784)[] = {
    0x00000035, 0xFFFFFFFF,
};

s32 N(unk_8024178C)[] = {
    0x00000013, 0xFFFFFFFF,
};

s32 N(unk_80241794)[] = {
    0x00000011, 0xFFFFFFFF,
};

s32 N(unk_8024179C)[] = {
    0x00000033, 0x00000013, 0xFFFFFFFF,
};

s32 N(unk_802417A8)[] = {
    0x00000035, 0x00000011, 0xFFFFFFFF,
};

Script N(script_ExitWalk_802417B4) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242F90_D4FFD0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241810) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80242F98_D4FFD8, 0);
    sleep 100;
});

Script N(script_8024186C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 10;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_8024179C);
        SI_VAR(3) = N(unk_802417A8);
    } else {
        SI_VAR(2) = N(unk_8024177C);
        SI_VAR(3) = N(unk_80241784);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80242FA0_D4FFE0, 0);
    sleep 100;
});

Script N(script_80241950) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 10;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_8024179C);
        SI_VAR(3) = N(unk_802417A8);
    } else {
        SI_VAR(2) = N(unk_8024178C);
        SI_VAR(3) = N(unk_80241794);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80242FA0_D4FFE0, 5);
    sleep 100;
});

Script N(script_80241A34) = SCRIPT({
    bind N(script_ExitWalk_802417B4) to 0x80000 16;
    bind N(script_ExitWalk_80241810) to 0x80000 19;
    bind N(script_8024186C) to TriggerFlag_WALL_INTERACT 10;
    bind N(script_80241950) to TriggerFlag_WALL_INTERACT 14;
});

Script N(script_EnterWalk_80241AB4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_80241A34);
            spawn EnterWalk;
        }
        == 1 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_8024179C);
                SI_VAR(3) = N(unk_802417A8);
            } else {
                SI_VAR(2) = N(unk_8024177C);
                SI_VAR(3) = N(unk_80241784);
            }
            await 0x802861B0;
            spawn N(script_80241A34);
        }
        == 2 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_8024179C);
                SI_VAR(3) = N(unk_802417A8);
            } else {
                SI_VAR(2) = N(unk_8024178C);
                SI_VAR(3) = N(unk_80241794);
            }
            await 0x802861B0;
            spawn N(script_80241A34);
        }
        == 3 {
            SI_VAR(0) = N(script_80241A34);
            spawn EnterWalk;
        }
        == 4 {
            spawn N(script_80241A34);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 43;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1990) = 1;
    if (SI_SAVE_VAR(0) == 88) {
        MakeNpcs(1, N(npcGroupList_80242F60));
    }
    await N(script_80242F80);
    await N(script_80241440);
    func_80240F20_D4DF60();
    func_80240F60_D4DFA0();
    SI_VAR(0) = 30;
    SI_VAR(1) = 30;
    SI_VAR(2) = 0;
    spawn N(script_80241678);
    SI_VAR(0) = 2;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_802415D0);
    ModifyColliderFlags(3, 16, 8);
    ModifyColliderFlags(3, 24, 8);
    ModifyColliderFlags(3, 33, 8);
    ModifyColliderFlags(3, 26, 8);
    ModifyColliderFlags(3, 29, 8);
    ModifyColliderFlags(3, 19, 8);
    ModifyColliderFlags(3, 23, 8);
    ModifyColliderFlags(3, 36, 8);
    ModifyColliderFlags(3, 25, 8);
    ModifyColliderFlags(3, 31, 8);
    spawn N(script_EnterWalk_80241AB4);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 4) {
        sleep 65;
    } else {
        sleep 1;
    }
});

s32 pad_001F04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241F10) = {
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

s32 unk_missing_80241F3C[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

s32 N(unk_80241F94)[] = {
    0x00000000,
};

s32 N(unk_80241F98)[] = {
    0x00000000,
};

Script N(script_80241F9C) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240FDC_D4E01C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241200_D4E240(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802420E0) = {
    SI_CMD(ScriptOpcode_CALL, func_80241238_D4E278, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241F9C), 0x10, 0, 0x80242FB0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802411AC_D4E1EC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80242130) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240FDC_D4E01C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241200_D4E240(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242264) = {
    SI_CMD(ScriptOpcode_CALL, func_802412D4_D4E314, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242130), 0x10, 0, 0x80243178, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802411AC_D4E1EC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Idle_802422B4) = SCRIPT({
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

Script N(script_802423A8) = SCRIPT({
    DisablePartnerAI(0);
    0x802CF56C(2);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 0xFFFFFFCE;
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(4) += 26;
    SetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(2));
    PlayerFaceNpc(0, 0);
    NpcFaceNpc(0xFFFFFFFC, 0, 0);
    SI_VAR(0) += 0xFFFFFFE7;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 575.0);
    SetCamPitch(0, 18, 0xFFFFFFFB);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    0x802D2508();
    DisablePlayerInput(1);
    sleep 40;
    SpeakToPlayer(0, 0x180002, 0x180001, 512, 0x12016D);
    SetCamDistance(0, 400.0);
    SetCamPitch(0, 18, 0xFFFFFFFA);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(0, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableNpcAI(0, 0);
    SetNpcAnimation(0, 0x180003);
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
    SetNpcAnimation(0, 0x180001);
    EnableNpcAI(0, 1);
    func_80241370_D4E3B0();
    ShowMessageAtScreenPos(0x1D0197, 160, 40);
    sleep 10;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(0, 0x180002, 0x180001, 512, 0x12016E);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFE7;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 400.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(0, 0x180002, 0x180001, 512, 0x12016F);
    SetNpcFlagBits(0, 0x40000, 1);
    spawn {
        loop 25 {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
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
            SetNpcRotation(0, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        GetNpcPos(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = SI_VAR(3);
        SI_VAR(5) += 180;
        MakeLerp(SI_VAR(3), SI_VAR(5), 100, 2);
        loop {
            UpdateLerp();
            SetNpcPos(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 15;
        PlaySoundAtNpc(0, 8261, 0);
    }
    sleep 10;
    SetPlayerAnimation(0x1002A);
    sleep 90;
    ResetCam(0, 3);
    sleep 20;
    SetPlayerAnimation(0x10002);
    SI_SAVE_VAR(0) = 89;
    spawn N(script_80241440);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Init_80242D40) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802422B4));
    spawn N(script_802423A8);
});

StaticNpc N(npcGroup_80242D70)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241F10),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00600D09,
        .init = N(script_Init_80242D40),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180000, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001,
        },
    },
};

NpcGroupList N(npcGroupList_80242F60) = {
    NPC_GROUP(N(npcGroup_80242D70), 0x21010001),
    {},
};

s32 pad_002F78[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242F80) = SCRIPT({

});

// rodata: D_80242F90_D4FFD0

// rodata: D_80242F98_D4FFD8

// rodata: D_80242FA0_D4FFE0

s32 pad_002FA8[] = {
    0x00000000, 0x00000000,
};
