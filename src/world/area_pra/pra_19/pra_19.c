#include "pra_19.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_0019A4[3];
Script N(script_80241A10);
s32 pad_001A4C[1];
Script N(script_80241A50);
Script N(script_80241B60);
Script N(script_80241C08);
s32 N(unk_80241D0C)[3];
s32 N(unk_80241D18)[3];
Script N(script_80241D24);
Script N(script_ExitWalk_80241DC8);
Script N(script_80241E24);
Script N(script_EnterWalk_80241E84);
Script N(main);
s32 pad_0020B8[2];
s32 N(unk_8024219C)[1];
s32 N(unk_802421A0)[1];
Script N(script_802421A4);
Script N(script_802422E8);
Script N(script_80242338);
Script N(script_8024246C);
Script N(script_802424BC);
Script N(script_80242588);
Script N(script_8024266C);
Script N(script_80242778);
Script N(script_802429D4);
Script N(script_80242A70);
Script N(script_80242E0C);
Script N(script_80242E7C);
Script N(script_80242F2C);
Script N(script_80242F9C);
Script N(script_802436C4);
Script N(script_80243978);
Script N(script_80243A44);
Script N(script_Defeat_80244E4C);
Script N(script_Interact_80244F34);
Script N(script_Interact_80244F64);
Script N(script_Interact_80244F94);
Script N(script_Interact_80244FC4);
Script N(script_Interact_80244FF4);
Script N(script_Init_80245024);
Script N(script_Init_8024506C);
Script N(script_Init_802450C0);
Script N(script_Init_80245114);
Script N(script_Init_80245168);
Script N(script_Init_802451BC);
Script N(script_Init_80245210);
Script N(script_Init_80245268);
Script N(script_Init_80245290);
Script N(script_Init_802452B8);
Script N(script_Init_802452E0);
Script N(script_Init_80245308);
s32 N(extraAnimationList_80245330)[5];
s32 N(extraAnimationList_80245344)[5];
s32 N(extraAnimationList_80245358)[5];
s32 N(extraAnimationList_8024536C)[5];
s32 N(extraAnimationList_80245380)[5];
StaticNpc N(npcGroup_80245394)[7];
StaticNpc N(npcGroup_80246124)[5];
Script N(script_Idle_80246AD4);
Script N(script_Idle_80246B3C);
Script N(script_Idle_80246BA4);
Script N(script_Idle_80246C0C);
Script N(script_Idle_80246C74);
Script N(script_Hit_80246CDC);
Script N(script_Hit_80246D2C);
Script N(script_Hit_80246D7C);
Script N(script_Hit_80246DCC);
Script N(script_Hit_80246E1C);
Script N(script_Init_80246E6C);
Script N(script_Init_80246EBC);
Script N(script_Init_80246F0C);
Script N(script_Init_80246F5C);
Script N(script_Init_80246FAC);
StaticNpc N(npcGroup_80246FFC)[5];
NpcGroupList N(npcGroupList_802479AC);
s32 pad_0079DC[1];
const char D_802479E0_D76390[8]; // "pra_35"
const char D_802479E8_D76398[8]; // "pra_20"

// text: func_Init_D6E9B0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D6EA04

// text: func_802400EC_D6EA9C

// text: func_80240128_D6EAD8

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

// text: func_8024049C_D6EE4C

// text: func_80240500_D6EEB0

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

// text: func_80240870_D6F220

// text: func_80240D3C_D6F6EC

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D6F8D0

// text: func_80240F7C_D6F92C

// text: func_8024114C_D6FAFC

// text: func_802411A0_D6FB50

// text: func_802411D8_D6FB88

// text: func_80241274_D6FC24

// text: func_80241310_D6FCC0

// text: func_802413A4_D6FD54

// text: func_802414F4_D6FEA4

// text: func_80241530_D6FEE0

// text: func_802415E0_D6FF90

// text: func_802416F8_D700A8

// text: func_80241710_D700C0

// text: func_8024175C_D7010C

// text: func_80241838_D701E8

s32 pad_0019A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 487.0f, 0.0f, 70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190145,
};

Script N(script_80241A10) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_001A4C[] = {
    0x00000000,
};

Script N(script_80241A50) = SCRIPT({
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
Script N(script_80241B60) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D6EA9C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D6EA9C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D6EE4C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D6F6EC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241C08) = SCRIPT({
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

s32 N(unk_80241D0C)[] = {
    0x0000002E, 0x0000002F, 0xFFFFFFFF,
};

s32 N(unk_80241D18)[] = {
    0x0000002B, 0x0000002C, 0xFFFFFFFF,
};

Script N(script_80241D24) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 19;
    SI_VAR(2) = N(unk_80241D0C);
    SI_VAR(3) = N(unk_80241D18);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_802479E0_D76390, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241DC8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802479E8_D76398, 0);
    sleep 100;
});

Script N(script_80241E24) = SCRIPT({
    bind N(script_80241D24) to TriggerFlag_WALL_INTERACT 19;
    if (SI_SAVE_VAR(0) >= 82) {
        bind N(script_ExitWalk_80241DC8) to 0x80000 25;
    }
});

Script N(script_EnterWalk_80241E84) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = N(unk_80241D0C);
            SI_VAR(3) = N(unk_80241D18);
            await 0x802861B0;
            spawn N(script_80241E24);
        }
        == 1 {
            SI_VAR(0) = N(script_80241E24);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802479AC));
    spawn N(script_80241A10);
    if (SI_SAVE_VAR(0) >= 82) {
        EnableModel(34, 0);
        ModifyColliderFlags(0, 33, 0x7FFFFE00);
    } else {
        EnableModel(36, 0);
    }
    SI_VAR(0) = 59;
    SI_VAR(1) = 60;
    SI_VAR(2) = 0;
    spawn N(script_80241C08);
    SI_VAR(0) = 0;
    SI_VAR(1) = 1;
    spawn N(script_80241B60);
    spawn N(script_EnterWalk_80241E84);
    sleep 1;
});

s32 pad_0020B8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802420C0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802420EC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x16,
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
    .unk_2A = 0x10,
};

NpcSettings N(npcSettings_80242118) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
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

NpcSettings N(npcSettings_80242144) = {
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
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80242170) = {
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

s32 N(unk_8024219C)[] = {
    0x00000000,
};

s32 N(unk_802421A0)[] = {
    0x00000000,
};

Script N(script_802421A4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F7C_D6F92C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |= c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802411A0_D6FB50(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802422E8) = {
    SI_CMD(ScriptOpcode_CALL, func_802411D8_D6FB88, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802421A4), 0x10, 0, 0x802479F0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024114C_D6FAFC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80242338) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F7C_D6F92C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802411A0_D6FB50(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024246C) = {
    SI_CMD(ScriptOpcode_CALL, func_80241274_D6FC24, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242338), 0x10, 0, 0x80247BB8, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024114C_D6FAFC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802424BC) = SCRIPT({
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, SI_VAR(10));
    SetCamDistance(0, 350.0);
    SetCamPitch(0, 12.0, -5.5);
    SetCamPosB(0, 500.0, 20.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_80242588) = SCRIPT({
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

Script N(script_8024266C) = SCRIPT({
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

Script N(script_80242778) = SCRIPT({
    func_80241710_D700C0();
    SetNpcFlagBits(SI_VAR(3), 256, 1);
    SpeakToPlayer(SI_VAR(3), SI_VAR(6), SI_VAR(7), 0, SI_VAR(5));
    GetNpcPos(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80241310_D6FCC0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
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
    await N(script_8024266C);
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

Script N(script_802429D4) = SCRIPT({
    SetNpcJumpscale(SI_VAR(3), 1.0);
    GetNpcPos(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    GetNpcPos(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
});

Script N(script_80242A70) = SCRIPT({
    if (SI_MAP_VAR(2) == 0) {
        spawn {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(1, 0, 0xFFFFFC18, 0);
            func_80241310_D6FCC0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(7, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(7, 717, 0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(7, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    if (SI_MAP_VAR(3) == 0) {
        spawn {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(2, 0, 0xFFFFFC18, 0);
            func_80241310_D6FCC0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(8, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(8, 717, 0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(8, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    if (SI_MAP_VAR(4) == 0) {
        spawn {
            GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(3, 0, 0xFFFFFC18, 0);
            func_80241310_D6FCC0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(9, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(9, 717, 0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(9, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    if (SI_MAP_VAR(5) == 0) {
        spawn {
            GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(4, 0, 0xFFFFFC18, 0);
            func_80241310_D6FCC0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(10, 717, 0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcMoveTo(10, SI_VAR(0), SI_VAR(2), 30);
        }
    }
    sleep 20;
});

Script N(script_80242E0C) = SCRIPT({
    SetNpcFlagBits(SI_VAR(3), 256, 1);
    SetNpcAnimation(SI_VAR(3), SI_VAR(4));
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcMoveTo(SI_VAR(3), SI_VAR(0), SI_VAR(2), 30);
});

Script N(script_80242E7C) = SCRIPT({
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

Script N(script_80242F2C) = SCRIPT({
    NpcMoveTo(SI_VAR(3), SI_VAR(0), SI_VAR(2), 20);
    SetNpcAnimation(SI_VAR(3), SI_VAR(4));
    SetNpcFlagBits(SI_VAR(3), 256, 0);
    InterpNpcYaw(SI_VAR(3), 90, 0);
});

Script N(script_80242F9C) = SCRIPT({
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
        SI_VAR(4) = 0x9D0003;
        spawn N(script_80242E0C);
    }
    if (SI_MAP_VAR(3) == 0) {
        SI_VAR(3) = 2;
        SI_VAR(4) = 0x82000A;
        spawn N(script_80242E0C);
    }
    if (SI_MAP_VAR(4) == 0) {
        SI_VAR(3) = 3;
        SI_VAR(4) = 0xB50003;
        spawn N(script_80242E0C);
    }
    if (SI_MAP_VAR(5) == 0) {
        SI_VAR(3) = 4;
        SI_VAR(4) = 0xB60006;
        spawn N(script_80242E0C);
    }
    SI_VAR(3) = 0;
    SI_VAR(4) = 0x20005;
    await N(script_80242E0C);
    InterpPlayerYaw(90, 3);
    SetPlayerAnimation(0x80009);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 30;
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
            SI_VAR(1) += 30;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    if (SI_MAP_VAR(2) == 0) {
        SI_VAR(3) = 1;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 10;
        spawn N(script_80242E7C);
    }
    if (SI_MAP_VAR(3) == 0) {
        SI_VAR(3) = 2;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 0;
        SI_VAR(6) = 0;
        spawn N(script_80242E7C);
    }
    if (SI_MAP_VAR(4) == 0) {
        SI_VAR(3) = 3;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 0;
        SI_VAR(6) = 10;
        spawn N(script_80242E7C);
    }
    if (SI_MAP_VAR(5) == 0) {
        SI_VAR(3) = 4;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 0;
        SI_VAR(6) = 20;
        spawn N(script_80242E7C);
    }
    NpcMoveTo(0, 370, 73, 30);
    DisablePlayerPhysics(0);
    if (SI_MAP_VAR(2) == 0) {
        SI_VAR(3) = 1;
        SI_VAR(4) = 0x9D0001;
        SI_VAR(0) = 350;
        SI_VAR(2) = 90;
        spawn N(script_80242F2C);
    }
    if (SI_MAP_VAR(3) == 0) {
        SI_VAR(3) = 2;
        SI_VAR(4) = 0x820004;
        SI_VAR(0) = 280;
        SI_VAR(2) = 90;
        spawn N(script_80242F2C);
    }
    if (SI_MAP_VAR(4) == 0) {
        SI_VAR(3) = 3;
        SI_VAR(4) = 0xB50001;
        SI_VAR(0) = 420;
        SI_VAR(2) = 60;
        spawn N(script_80242F2C);
    }
    if (SI_MAP_VAR(5) == 0) {
        SI_VAR(3) = 4;
        SI_VAR(4) = 0xB60001;
        SI_VAR(0) = 315;
        SI_VAR(2) = 55;
        spawn N(script_80242F2C);
    }
    SI_VAR(3) = 0;
    SI_VAR(4) = 0x20003;
    SI_VAR(0) = 385;
    SI_VAR(2) = 120;
    await N(script_80242F2C);
    ShowMessageAtScreenPos(0x120165, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_802436C4) = SCRIPT({
    GetNpcPos(5, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    spawn {
        GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 10;
        NpcMoveTo(6, SI_VAR(0), SI_VAR(2), 4);
        sleep 2;
        SetNpcAnimation(6, 0x2000A);
        sleep 2;
        SetNpcAnimation(6, 0x20009);
    }
    spawn {
        SetNpcAnimation(5, 0x10007);
        sleep 10;
        SetNpcAnimation(5, 0x10009);
    }
    SetNpcJumpscale(5, 2.0);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(5, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
10:
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 140;
    func_80241838_D701E8(6, SI_VAR(3), 0);
    func_80241838_D701E8(6, SI_VAR(0), 1);
    SetNpcAnimation(6, 0x20008);
    spawn {
        SetNpcAnimation(5, 0x10007);
        sleep 10;
        SetNpcAnimation(5, 0x10009);
    }
    SetNpcJumpscale(5, 2.0);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(5, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetNpcAnimation(6, 0x20009);
    goto 10;
});

Script N(script_80243978) = SCRIPT({
    SetNpcPos(SI_VAR(3), 533, 0, 77);
    SetNpcFlagBits(SI_VAR(3), 256, 1);
    SetNpcSpeed(SI_VAR(3), 6.0);
    SetNpcAnimation(SI_VAR(3), SI_VAR(4));
    NpcMoveTo(SI_VAR(3), SI_VAR(0), SI_VAR(2), 0);
    SetNpcFlagBits(SI_VAR(3), 256, 0);
    SetNpcAnimation(SI_VAR(3), SI_VAR(5));
    InterpNpcYaw(SI_VAR(3), 90, 0);
});

Script N(script_80243A44) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 82) {
        goto 30;
    }
    if (SI_SAVE_VAR(285) == 0) {
        goto 0;
    }
    if (SI_SAVE_VAR(285) == 1) {
        goto 10;
    }
    if (SI_SAVE_VAR(285) == 2) {
        goto 20;
    }
0:
    SetNpcAnimation(5, 0x10002);
    SetNpcPos(5, 53, 0, 0xFFFFFFB5);
    SetNpcAnimation(6, 0x20003);
    SetNpcPos(6, 23, 0, 0xFFFFFFB5);
1:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 110) {
        goto 1;
    }
    SetNpcSpeed(5, 3.0);
    SetNpcAnimation(5, 0x10004);
    spawn {
        SetNpcSpeed(6, 3.0);
        SetNpcAnimation(6, 0x20004);
        NpcMoveTo(6, 385, 0xFFFFFFB5, 0);
        SetNpcAnimation(6, 0x20003);
    }
    NpcMoveTo(5, 415, 0xFFFFFFB5, 0);
    SetNpcAnimation(5, 0x10002);
    SI_SAVE_VAR(285) = 1;
    goto 11;
10:
    SetNpcAnimation(5, 0x10002);
    SetNpcPos(5, 415, 0, 0xFFFFFFB5);
    SetNpcAnimation(6, 0x20003);
    SetNpcPos(6, 385, 0, 0xFFFFFFB5);
11:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 380) {
        goto 11;
    }
    spawn N(script_802436C4);
    SI_SAVE_VAR(285) = 2;
    goto 21;
20:
    SetNpcAnimation(5, 0x10002);
    SetNpcPos(5, 415, 0, 0xFFFFFFB5);
    SetNpcAnimation(6, 0x20003);
    SetNpcPos(6, 385, 0, 0xFFFFFFB5);
    spawn N(script_802436C4);
21:
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(0) < 510) {
        goto 21;
    }
    if (SI_VAR(3) < SI_VAR(0)) {
        goto 21;
    }
    SetNpcFlagBits(0xFFFFFFFC, 258, 1);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetPlayerFlagBits(192, 1);
    sleep 60;
    SetPlayerAnimation(0x10028);
    PlaySoundAtPlayer(611, 0);
    ShowEmote(0, 2, 0, 30, 0, 0, 0, 0, 0);
    sleep 35;
    SetPlayerAnimation(0x1002B);
    PlaySoundAtCollider(33, 484, 0);
    PlayEffect(66, 0, 34, 22, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(34, 0);
    EnableModel(36, 1);
    ModifyColliderFlags(0, 33, 0x7FFFFE00);
    SI_VAR(3) = 1;
    SI_VAR(4) = 0x9D0003;
    SI_VAR(5) = 0x9D0001;
    SI_VAR(0) = 350;
    SI_VAR(2) = 90;
    spawn N(script_80243978);
    SI_VAR(3) = 2;
    SI_VAR(4) = 0x82000A;
    SI_VAR(5) = 0x820004;
    SI_VAR(0) = 280;
    SI_VAR(2) = 90;
    spawn N(script_80243978);
    SI_VAR(3) = 3;
    SI_VAR(4) = 0xB50003;
    SI_VAR(5) = 0xB50001;
    SI_VAR(0) = 420;
    SI_VAR(2) = 60;
    spawn N(script_80243978);
    SI_VAR(3) = 4;
    SI_VAR(4) = 0xB60006;
    SI_VAR(5) = 0xB60001;
    SI_VAR(0) = 315;
    SI_VAR(2) = 55;
    spawn N(script_80243978);
    SI_VAR(3) = 0;
    SI_VAR(4) = 0x20005;
    SI_VAR(5) = 0x20003;
    SI_VAR(0) = 385;
    SI_VAR(2) = 120;
    spawn N(script_80243978);
    spawn {
        sleep 2;
        func_8024175C_D7010C();
        SetPlayerFlagBits(0x10101000, 1);
        MakeLerp(0, 1980, 30, 4);
        loop {
            UpdateLerp();
            InterpPlayerYaw(SI_VAR(0), 0);
            func_802416F8_D700A8();
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetPlayerFlagBits(0x10101000, 0);
    }
    sleep 60;
    InterpPlayerYaw(270, 0);
    SetPlayerAnimation(0x10002);
    sleep 10;
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SI_VAR(3) = 4;
    spawn N(script_802429D4);
    SpeakToPlayer(4, 0xB60008, 0xB60001, 0, 0x120153);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SI_VAR(3) = 1;
    spawn N(script_802429D4);
    SpeakToPlayer(1, 0x9D0008, 0x9D0001, 0, 0x120154);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SI_VAR(3) = 0;
    spawn N(script_802429D4);
    SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x120155);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SI_VAR(3) = 3;
    spawn N(script_802429D4);
    SpeakToPlayer(3, 0xB50004, 0xB50001, 0, 0x120156);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SI_VAR(3) = 2;
    spawn N(script_802429D4);
    SpeakToPlayer(2, 0x820014, 0x820004, 0, 0x120157);
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SpeakToPlayer(4, 0xB60008, 0xB60001, 0, 0x120158);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SpeakToPlayer(1, 0x9D0008, 0x9D0001, 0, 0x120159);
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = 3.0;
    await N(script_802424BC);
    SpeakToPlayer(2, 0x820014, 0x820004, 0, 0x12015A);
    ResetCam(0, 2.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
    SetPlayerFlagBits(192, 1);
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 490) {
            SI_VAR(9) = 270;
            await N(script_80242F9C);
        }
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 190) {
            SI_VAR(9) = 90;
            await N(script_80242F9C);
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
                            SI_VAR(0) += 50;
                        } else {
                            SI_VAR(0) += 0xFFFFFFCE;
                        }
                        SetNpcAnimation(0xFFFFFFFC, 0x20004);
                        SetNpcFlagBits(0xFFFFFFFC, 256, 1);
                        NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 20);
                        SetNpcAnimation(0xFFFFFFFC, 0x20003);
                        SpeakToPlayer(0xFFFFFFFC, 0x2000D, 0x20003, 0, 0x120166);
                        sleep 10;
                        SetNpcFlagBits(0xFFFFFFFC, 256, 0);
                        SetPlayerFlagBits(192, 0);
                        EnablePartnerAI();
                        DisablePlayerInput(0);
                        bind N(script_ExitWalk_80241DC8) to 0x80000 25;
                        SI_SAVE_VAR(0) = 82;
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
                SetNpcAnimation(0, 0x2000C);
                GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802424BC);
                SpeakToPlayer(0, 0x2000C, 0x2000C, 0, 0x120162);
                await N(script_80242588);
                SetPlayerAnimation(0x1002B);
                await N(script_80242A70);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                func_802413A4_D6FD54(SI_MAP_VAR(2), SI_MAP_VAR(3), SI_MAP_VAR(4), SI_MAP_VAR(5));
                DisablePlayerInput(0);
                StartBossBattle(3);
                break;
            }
            == 2 {
                DisablePlayerInput(1);
                GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802424BC);
                SI_VAR(3) = 1;
                SI_VAR(4) = 7;
                SI_VAR(5) = 0x120161;
                SI_VAR(6) = 0x9D0008;
                SI_VAR(7) = 0x9D0001;
                await N(script_80242778);
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(2) = 1;
                DisablePlayerInput(0);
            }
            == 3 {
                DisablePlayerInput(1);
                GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802424BC);
                SI_VAR(3) = 2;
                SI_VAR(4) = 8;
                SI_VAR(5) = 0x120164;
                SI_VAR(6) = 0x820014;
                SI_VAR(7) = 0x820004;
                await N(script_80242778);
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(3) = 1;
                DisablePlayerInput(0);
            }
            == 4 {
                DisablePlayerInput(1);
                GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802424BC);
                SI_VAR(3) = 3;
                SI_VAR(4) = 9;
                SI_VAR(5) = 0x120163;
                SI_VAR(6) = 0xB50004;
                SI_VAR(7) = 0xB50001;
                await N(script_80242778);
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(4) = 1;
                DisablePlayerInput(0);
            }
            == 5 {
                DisablePlayerInput(1);
                GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(10) = 6.0;
                await N(script_802424BC);
                SI_VAR(3) = 4;
                SI_VAR(4) = 10;
                SI_VAR(5) = 0x120160;
                SI_VAR(6) = 0xB60008;
                SI_VAR(7) = 0xB60001;
                await N(script_80242778);
                sleep 1;
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(5) = 1;
                DisablePlayerInput(0);
            }
        }
    }
30:
});

Script N(script_Defeat_80244E4C) = SCRIPT({
    DisablePlayerInput(1);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(0xFFFFFFFC, 258, 0);
    SetPlayerFlagBits(192, 0);
    EnablePartnerAI();
    DisablePlayerInput(0);
    bind N(script_ExitWalk_80241DC8) to 0x80000 25;
    SI_SAVE_VAR(0) = 82;
});

Script N(script_Interact_80244F34) = SCRIPT({
    SpeakToPlayer(0, 0x2000D, 0x20003, 0, 0x12015D);
});

Script N(script_Interact_80244F64) = SCRIPT({
    SpeakToPlayer(1, 0x9D0008, 0x9D0001, 0, 0x12015C);
});

Script N(script_Interact_80244F94) = SCRIPT({
    SpeakToPlayer(2, 0x820014, 0x820004, 0, 0x12015F);
});

Script N(script_Interact_80244FC4) = SCRIPT({
    SpeakToPlayer(3, 0xB50004, 0xB50001, 0, 0x12015E);
});

Script N(script_Interact_80244FF4) = SCRIPT({
    SpeakToPlayer(4, 0xB60008, 0xB60001, 0, 0x12015B);
});

Script N(script_Init_80245024) = SCRIPT({
    BindNpcDefeat(-1, N(script_Defeat_80244E4C));
    SetNpcFlagBits(-1, 0x10000102, 1);
    spawn N(script_80243A44);
});

Script N(script_Init_8024506C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244F34));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_802450C0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244F64));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_80245114) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244F94));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_80245168) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244FC4));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

Script N(script_Init_802451BC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80244FF4));
    SetNpcFlagBits(-1, 0x80000, 1);
    SetNpcFlagBits(-1, 256, 0);
});

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_Init_80245210) = {
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, -1, 0x10000100, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, -1, 0x10002),
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_CALL, func_802414F4_D6FEA4),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Init_80245268) = SCRIPT({
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80245290) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080000, 1);
});

Script N(script_Init_802452B8) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080000, 1);
});

Script N(script_Init_802452E0) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080000, 1);
});

Script N(script_Init_80245308) = SCRIPT({
    SetNpcFlagBits(-1, 0x10080000, 1);
});

s32 N(extraAnimationList_80245330)[] = {
    0x009D0001, 0x009D0002, 0x009D0008, 0x009D0003, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80245344)[] = {
    0x00820004, 0x00820008, 0x00820014, 0x0082000A, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80245358)[] = {
    0x00B50001, 0x00B50002, 0x00B50004, 0x00B50003, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024536C)[] = {
    0x00B60001, 0x00B60004, 0x00B60008, 0x00B60006, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80245380)[] = {
    0x004E0002, 0x004E0003, 0x004E0005, 0x004E0004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80245394)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802420C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_8024506C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802420EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_802450C0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x009D0001, 0x009D0002, 0x009D0003, 0x009D0003, 0x009D0001, 0x009D0001, 0x009D0000, 0x009D0000, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003,
        },
        .extraAnimations = N(extraAnimationList_80245330),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802420C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_80245114),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .extraAnimations = N(extraAnimationList_80245344),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242118),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_80245168),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001,
        },
        .extraAnimations = N(extraAnimationList_80245358),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80242144),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D40D09,
        .init = N(script_Init_802451BC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .extraAnimations = N(extraAnimationList_8024536C),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80242170),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03D44D08,
        .init = N(script_Init_80245210),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
        .extraAnimations = N(extraAnimationList_80245380),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802420C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F40D08,
        .init = N(script_Init_80245268),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
};

StaticNpc N(npcGroup_80246124)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_80242170),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00D40D00,
        .init = N(script_Init_80245290),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
        .extraAnimations = N(extraAnimationList_80245380),
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80242170),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00D40D00,
        .init = N(script_Init_802452B8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
        .extraAnimations = N(extraAnimationList_80245380),
    },
    {
        .id = 9,
        .settings = &N(npcSettings_80242170),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00D40D00,
        .init = N(script_Init_802452E0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
        .extraAnimations = N(extraAnimationList_80245380),
    },
    {
        .id = 10,
        .settings = &N(npcSettings_80242170),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00D40D00,
        .init = N(script_Init_80245308),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
        .extraAnimations = N(extraAnimationList_80245380),
    },
    {
        .id = 11,
        .settings = &N(npcSettings_80242170),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00E44D00,
        .init = N(script_Init_80245024),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
        .extraAnimations = N(extraAnimationList_80245380),
    },
};

Script N(script_Idle_80246AD4) = SCRIPT({
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(12, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80246B3C) = SCRIPT({
    loop {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(13, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80246BA4) = SCRIPT({
    loop {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(14, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80246C0C) = SCRIPT({
    loop {
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(15, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Idle_80246C74) = SCRIPT({
    loop {
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(16, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Hit_80246CDC) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 1;
        }
    }
});

Script N(script_Hit_80246D2C) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 2;
        }
    }
});

Script N(script_Hit_80246D7C) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 3;
        }
    }
});

Script N(script_Hit_80246DCC) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 4;
        }
    }
});

Script N(script_Hit_80246E1C) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_MAP_VAR(0) = 5;
        }
    }
});

Script N(script_Init_80246E6C) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80246CDC));
    BindNpcIdle(-1, N(script_Idle_80246AD4));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80246EBC) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80246D2C));
    BindNpcIdle(-1, N(script_Idle_80246B3C));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80246F0C) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80246D7C));
    BindNpcIdle(-1, N(script_Idle_80246BA4));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80246F5C) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80246DCC));
    BindNpcIdle(-1, N(script_Idle_80246C0C));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

Script N(script_Init_80246FAC) = SCRIPT({
    BindNpcHit(-1, N(script_Hit_80246E1C));
    BindNpcIdle(-1, N(script_Idle_80246C74));
    SetNpcFlagBits(-1, 0x10000100, 1);
});

StaticNpc N(npcGroup_80246FFC)[] = {
    {
        .id = 12,
        .settings = &N(npcSettings_802420C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80246E6C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
    {
        .id = 13,
        .settings = &N(npcSettings_802420EC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80246EBC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x009D0001, 0x009D0002, 0x009D0003, 0x009D0003, 0x009D0001, 0x009D0001, 0x009D0000, 0x009D0000, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003,
        },
        .extraAnimations = N(extraAnimationList_80245330),
    },
    {
        .id = 14,
        .settings = &N(npcSettings_802420C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80246F0C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .extraAnimations = N(extraAnimationList_80245344),
    },
    {
        .id = 15,
        .settings = &N(npcSettings_80242118),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80246F5C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001, 0x00B50001,
        },
        .extraAnimations = N(extraAnimationList_80245358),
    },
    {
        .id = 16,
        .settings = &N(npcSettings_80242144),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x03F44D08,
        .init = N(script_Init_80246FAC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .extraAnimations = N(extraAnimationList_8024536C),
    },
};

NpcGroupList N(npcGroupList_802479AC) = {
    NPC_GROUP(N(npcGroup_80245394), 0x21010002),
    NPC_GROUP(N(npcGroup_80246124), 0x21010002),
    NPC_GROUP(N(npcGroup_80246FFC), 0x21010002),
    {},
};

s32 pad_0079DC[] = {
    0x00000000,
};

// rodata: D_802479E0_D76390

// rodata: D_802479E8_D76398
