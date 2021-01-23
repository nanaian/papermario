#include "pra_16.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
Script N(script_80240FA0);
s32 pad_000FCC[1];
Script N(script_80240FD0);
Script N(script_802410E0);
Script N(script_80241188);
s32 N(unk_8024128C)[3];
s32 N(unk_80241298)[3];
s32 N(unk_802412A4)[3];
s32 N(unk_802412B0)[3];
s32 N(unk_802412BC)[5];
s32 N(unk_802412D0)[5];
s32 N(unk_802412E4)[3];
s32 N(unk_802412F0)[3];
s32 N(unk_802412FC)[3];
s32 N(unk_80241308)[3];
s32 N(unk_80241314)[5];
s32 N(unk_80241328)[5];
Script N(script_8024133C);
Script N(script_80241430);
Script N(script_80241524);
Script N(script_80241618);
Script N(script_8024170C);
Script N(script_8024178C);
Script N(main);
s32 pad_001AE8[2];
const char D_80241AF0_D6B610[8]; // "pra_02"
const char D_80241AF8_D6B618[8]; // "pra_18"

// text: func_Init_D69B20

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D69B74

// text: func_802400EC_D69C0C

// text: func_80240128_D69C48

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

// text: func_8024049C_D69FBC

// text: func_80240500_D6A020

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

// text: func_80240870_D6A390

// text: func_80240D3C_D6A85C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

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
    .tattle = 0x190143,
};

Script N(script_80240FA0) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
});

s32 pad_000FCC[] = {
    0x00000000,
};

Script N(script_80240FD0) = SCRIPT({
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
Script N(script_802410E0) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D69C0C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D69C0C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D69FBC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D6A85C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241188) = SCRIPT({
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

s32 N(unk_8024128C)[] = {
    0x00000021, 0x00000022, 0xFFFFFFFF,
};

s32 N(unk_80241298)[] = {
    0x0000001E, 0x0000001F, 0xFFFFFFFF,
};

s32 N(unk_802412A4)[] = {
    0x00000024, 0x00000025, 0xFFFFFFFF,
};

s32 N(unk_802412B0)[] = {
    0x00000027, 0x00000028, 0xFFFFFFFF,
};

s32 N(unk_802412BC)[] = {
    0x00000021, 0x00000022, 0x00000024, 0x00000025, 0xFFFFFFFF,
};

s32 N(unk_802412D0)[] = {
    0x0000001E, 0x0000001F, 0x00000027, 0x00000028, 0xFFFFFFFF,
};

s32 N(unk_802412E4)[] = {
    0x0000002B, 0x0000002C, 0xFFFFFFFF,
};

s32 N(unk_802412F0)[] = {
    0x0000002E, 0x0000002F, 0xFFFFFFFF,
};

s32 N(unk_802412FC)[] = {
    0x00000034, 0x00000035, 0xFFFFFFFF,
};

s32 N(unk_80241308)[] = {
    0x00000031, 0x00000032, 0xFFFFFFFF,
};

s32 N(unk_80241314)[] = {
    0x0000002B, 0x0000002C, 0x00000034, 0x00000035, 0xFFFFFFFF,
};

s32 N(unk_80241328)[] = {
    0x0000002E, 0x0000002F, 0x00000031, 0x00000032, 0xFFFFFFFF,
};

Script N(script_8024133C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 21;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412BC);
        SI_VAR(3) = N(unk_802412D0);
    } else {
        SI_VAR(2) = N(unk_8024128C);
        SI_VAR(3) = N(unk_80241298);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241AF0_D6B610, 2);
    sleep 100;
});

Script N(script_80241430) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 1;
    SI_VAR(1) = 29;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_80241314);
        SI_VAR(3) = N(unk_80241328);
    } else {
        SI_VAR(2) = N(unk_802412E4);
        SI_VAR(3) = N(unk_802412F0);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241AF8_D6B618, 0);
    sleep 100;
});

Script N(script_80241524) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 33;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_80241314);
        SI_VAR(3) = N(unk_80241328);
    } else {
        SI_VAR(2) = N(unk_802412FC);
        SI_VAR(3) = N(unk_80241308);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241AF8_D6B618, 2);
    sleep 100;
});

Script N(script_80241618) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 3;
    SI_VAR(1) = 25;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412BC);
        SI_VAR(3) = N(unk_802412D0);
    } else {
        SI_VAR(2) = N(unk_802412A4);
        SI_VAR(3) = N(unk_802412B0);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241AF0_D6B610, 3);
    sleep 100;
});

Script N(script_8024170C) = SCRIPT({
    bind N(script_8024133C) to TriggerFlag_WALL_INTERACT 21;
    bind N(script_80241430) to TriggerFlag_WALL_INTERACT 29;
    bind N(script_80241524) to TriggerFlag_WALL_INTERACT 33;
    bind N(script_80241618) to TriggerFlag_WALL_INTERACT 25;
});

Script N(script_8024178C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412BC);
                SI_VAR(3) = N(unk_802412D0);
            } else {
                SI_VAR(2) = N(unk_8024128C);
                SI_VAR(3) = N(unk_80241298);
            }
        }
        == 1 {
            UseDoorSounds(0);
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_80241314);
                SI_VAR(3) = N(unk_80241328);
            } else {
                SI_VAR(2) = N(unk_802412E4);
                SI_VAR(3) = N(unk_802412F0);
            }
        }
        == 2 {
            UseDoorSounds(0);
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_80241314);
                SI_VAR(3) = N(unk_80241328);
            } else {
                SI_VAR(2) = N(unk_802412FC);
                SI_VAR(3) = N(unk_80241308);
            }
        }
        == 3 {
            UseDoorSounds(3);
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412BC);
                SI_VAR(3) = N(unk_802412D0);
            } else {
                SI_VAR(2) = N(unk_802412A4);
                SI_VAR(3) = N(unk_802412B0);
            }
        }
    }
    await 0x802861B0;
    spawn N(script_8024170C);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_80240FA0);
    SI_VAR(0) = 59;
    SI_VAR(1) = 60;
    SI_VAR(2) = 0;
    spawn N(script_80241188);
    SI_VAR(0) = 0;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_802410E0);
    spawn N(script_8024178C);
    sleep 1;
});

s32 pad_001AE8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241AF0_D6B610

// rodata: D_80241AF8_D6B618
