#include "pra_29.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_001278[2];
Script N(script_80241300);
s32 pad_00133C[1];
Script N(script_MakeEntities);
Script N(script_802413D0);
Script N(script_802414E0);
Script N(script_80241588);
s32 N(unk_8024168C)[2];
s32 N(unk_80241694)[2];
s32 N(unk_8024169C)[2];
s32 N(unk_802416A4)[2];
s32 N(unk_802416AC)[3];
s32 N(unk_802416B8)[3];
s32 N(unk_802416C4)[2];
s32 N(unk_802416CC)[2];
s32 N(unk_802416D4)[2];
s32 N(unk_802416DC)[2];
s32 N(unk_802416E4)[3];
s32 N(unk_802416F0)[3];
Script N(script_802416FC);
Script N(script_802417E0);
Script N(script_802418C4);
Script N(script_802419A8);
Script N(script_80241A8C);
Script N(script_80241B0C);
Script N(main);
s32 pad_001E5C[1];
Script N(script_80241E60);
Script N(script_80241F8C);
const char D_80242200_D7ED50[8]; // "pra_20"
const char D_80242208_D7ED58[8]; // "pra_34"

// text: func_Init_D7CB50

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D7CBA4

// text: func_802400EC_D7CC3C

// text: func_80240128_D7CC78

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

// text: func_8024049C_D7CFEC

// text: func_80240500_D7D050

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

// text: func_80240870_D7D3C0

// text: func_80240D3C_D7D88C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D7DA70

// text: func_802410B0_D7DC00

// text: func_802411D4_D7DD24

s32 pad_001278[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 487.0f, 0.0f, 70.0f, 270.0f },
    { 487.0f, 0.0f, -70.0f, 270.0f },
    { 13.0f, 0.0f, -70.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19014B,
};

Script N(script_80241300) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_00133C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 83) {
    } else {
        MakeEntity(0x802E9BD4, 330, 0, 0xFFFFFFB3, 0, 2, 0x80000000);
        MakeEntity(0x802E9BD4, 330, 0, 77, 0, 1, 0x80000000);
        AssignAreaFlag(2);
    }
});

Script N(script_802413D0) = SCRIPT({
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
Script N(script_802414E0) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D7CC3C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D7CC3C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D7CFEC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D7D88C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241588) = SCRIPT({
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

s32 N(unk_8024168C)[] = {
    0x0000000D, 0xFFFFFFFF,
};

s32 N(unk_80241694)[] = {
    0x0000000B, 0xFFFFFFFF,
};

s32 N(unk_8024169C)[] = {
    0x0000000F, 0xFFFFFFFF,
};

s32 N(unk_802416A4)[] = {
    0x00000011, 0xFFFFFFFF,
};

s32 N(unk_802416AC)[] = {
    0x0000000D, 0x0000000F, 0xFFFFFFFF,
};

s32 N(unk_802416B8)[] = {
    0x0000000B, 0x00000011, 0xFFFFFFFF,
};

s32 N(unk_802416C4)[] = {
    0x0000001B, 0xFFFFFFFF,
};

s32 N(unk_802416CC)[] = {
    0x0000001D, 0xFFFFFFFF,
};

s32 N(unk_802416D4)[] = {
    0x00000021, 0xFFFFFFFF,
};

s32 N(unk_802416DC)[] = {
    0x0000001F, 0xFFFFFFFF,
};

s32 N(unk_802416E4)[] = {
    0x0000001B, 0x00000021, 0xFFFFFFFF,
};

s32 N(unk_802416F0)[] = {
    0x0000001D, 0x0000001F, 0xFFFFFFFF,
};

Script N(script_802416FC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 19;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802416AC);
        SI_VAR(3) = N(unk_802416B8);
    } else {
        SI_VAR(2) = N(unk_8024168C);
        SI_VAR(3) = N(unk_80241694);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80242200_D7ED50, 2);
    sleep 100;
});

Script N(script_802417E0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 27;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802416E4);
        SI_VAR(3) = N(unk_802416F0);
    } else {
        SI_VAR(2) = N(unk_802416C4);
        SI_VAR(3) = N(unk_802416CC);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80242208_D7ED58, 0);
    sleep 100;
});

Script N(script_802418C4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 31;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802416E4);
        SI_VAR(3) = N(unk_802416F0);
    } else {
        SI_VAR(2) = N(unk_802416D4);
        SI_VAR(3) = N(unk_802416DC);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80242208_D7ED58, 3);
    sleep 100;
});

Script N(script_802419A8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 23;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802416AC);
        SI_VAR(3) = N(unk_802416B8);
    } else {
        SI_VAR(2) = N(unk_8024169C);
        SI_VAR(3) = N(unk_802416A4);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80242200_D7ED50, 3);
    sleep 100;
});

Script N(script_80241A8C) = SCRIPT({
    bind N(script_802416FC) to TriggerFlag_WALL_INTERACT 19;
    bind N(script_802417E0) to TriggerFlag_WALL_INTERACT 27;
    bind N(script_802418C4) to TriggerFlag_WALL_INTERACT 31;
    bind N(script_802419A8) to TriggerFlag_WALL_INTERACT 23;
});

Script N(script_80241B0C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802416AC);
                SI_VAR(3) = N(unk_802416B8);
            } else {
                SI_VAR(2) = N(unk_8024168C);
                SI_VAR(3) = N(unk_80241694);
            }
        }
        == 1 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802416E4);
                SI_VAR(3) = N(unk_802416F0);
            } else {
                SI_VAR(2) = N(unk_802416C4);
                SI_VAR(3) = N(unk_802416CC);
            }
        }
        == 2 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802416E4);
                SI_VAR(3) = N(unk_802416F0);
            } else {
                SI_VAR(2) = N(unk_802416D4);
                SI_VAR(3) = N(unk_802416DC);
            }
        }
        == 3 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802416AC);
                SI_VAR(3) = N(unk_802416B8);
            } else {
                SI_VAR(2) = N(unk_8024169C);
                SI_VAR(3) = N(unk_802416A4);
            }
        }
    }
    await 0x802861B0;
    spawn N(script_80241A8C);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80241300);
    spawn N(script_80241F8C);
    SI_VAR(0) = 49;
    SI_VAR(1) = 49;
    SI_VAR(2) = 0;
    spawn N(script_80241588);
    SI_VAR(0) = 2;
    if (SI_SAVE_VAR(0) >= 83) {
        SI_VAR(1) = 1;
    } else {
        SI_VAR(1) = 0;
    }
    spawn N(script_802414E0);
    spawn N(script_80241B0C);
    sleep 1;
});

s32 pad_001E5C[] = {
    0x00000000,
};

Script N(script_80241E60) = SCRIPT({
    sleep 40;
    spawn {
        loop 5 {
            func_802411D4_D7DD24(260, 0, 0);
            sleep 10;
        }
    }
    PlaySoundAt(47, 0, 250, 0, 0);
    MakeLerp(0, 511, 80, 0);
    loop {
        UpdateLerp();
        SI_MAP_VAR(0) = SI_VAR(0);
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    ModifyColliderFlags(0, 45, 0x7FFFFE00);
    SI_SAVE_VAR(0) = 83;
    unbind;
});

Script N(script_80241F8C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 83) {
        EnableModel(51, 0);
        EnableModel(56, 0);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = 255;
        0x802C90FC(53, 0, -1);
        0x802C90FC(58, 1, -1);
        SetModelFlags(53, 16, 0);
        SetModelFlags(58, 16, 0);
        0x802C94A0(0, func_802410B0_D7DC00, 0);
        0x802C94A0(1, func_802410B0_D7DC00, 0);
        0x802C9C70(0, 53, 1);
        0x802C9C70(1, 52, 0);
        0x802C9C70(2, 54, 0);
        SetModelFlags(53, 144, 1);
        0x802C9C70(3, 58, 1);
        0x802C9C70(4, 57, 0);
        0x802C9C70(5, 59, 0);
        SetModelFlags(58, 144, 1);
        bind N(script_80241E60) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(2);
    } else {
        ModifyColliderFlags(0, 45, 0x7FFFFE00);
        EnableModel(51, 0);
        EnableModel(52, 0);
        EnableModel(53, 0);
        EnableModel(56, 0);
        EnableModel(57, 0);
        EnableModel(58, 0);
    }
});

// rodata: D_80242200_D7ED50

// rodata: D_80242208_D7ED58
