#include "pra_20.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
Script N(script_80240FB0);
s32 pad_000FEC[1];
Script N(script_80240FF0);
Script N(script_80241100);
Script N(script_802411A8);
s32 N(unk_802412AC)[3];
s32 N(unk_802412B8)[3];
s32 N(unk_802412C4)[3];
s32 N(unk_802412D0)[3];
s32 N(unk_802412DC)[3];
s32 N(unk_802412E8)[3];
s32 N(unk_802412F4)[5];
s32 N(unk_80241308)[5];
s32 N(unk_8024131C)[1];
Script N(script_ExitWalk_80241320);
Script N(script_8024137C);
Script N(script_80241460);
Script N(script_80241544);
Script N(script_80241628);
Script N(script_8024170C);
Script N(script_EnterWalk_802417A8);
Script N(main);
const char D_80241B60_D77F00[8]; // "pra_19"
const char D_80241B68_D77F08[8]; // "pra_21"
const char D_80241B70_D77F10[8]; // "pra_29"
const char D_80241B78_D77F18[8]; // "pra_22"

// text: func_Init_D763A0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D763F4

// text: func_802400EC_D7648C

// text: func_80240128_D764C8

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

// text: func_8024049C_D7683C

// text: func_80240500_D768A0

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

// text: func_80240870_D76C10

// text: func_80240D3C_D770DC

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 126.0f, 0.0f, 137.0f, 0.0f },
    { 237.0f, 0.0f, 70.0f, 270.0f },
    { 237.0f, 0.0f, -70.0f, 270.0f },
    { 126.0f, 0.0f, -137.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190146,
};

Script N(script_80240FB0) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_000FEC[] = {
    0x00000000,
};

Script N(script_80240FF0) = SCRIPT({
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
Script N(script_80241100) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D7648C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D7648C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D7683C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D770DC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802411A8) = SCRIPT({
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

s32 N(unk_802412AC)[] = {
    0x0000003C, 0x0000003D, 0xFFFFFFFF,
};

s32 N(unk_802412B8)[] = {
    0x00000000, 0x00000001, 0xFFFFFFFF,
};

s32 N(unk_802412C4)[] = {
    0x0000002A, 0x0000002B, 0xFFFFFFFF,
};

s32 N(unk_802412D0)[] = {
    0x0000002D, 0x0000002E, 0xFFFFFFFF,
};

s32 N(unk_802412DC)[] = {
    0x00000014, 0x00000015, 0xFFFFFFFF,
};

s32 N(unk_802412E8)[] = {
    0x00000011, 0x00000012, 0xFFFFFFFF,
};

s32 N(unk_802412F4)[] = {
    0x0000002A, 0x0000002B, 0x00000014, 0x00000015, 0xFFFFFFFF,
};

s32 N(unk_80241308)[] = {
    0x0000002D, 0x0000002E, 0x00000011, 0x00000012, 0xFFFFFFFF,
};

s32 N(unk_8024131C)[] = {
    0xFFFFFFFF,
};

Script N(script_ExitWalk_80241320) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241B60_D77F00, 1);
    sleep 100;
});

Script N(script_8024137C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 32;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412AC);
        SI_VAR(3) = N(unk_802412B8);
    } else {
        SI_VAR(2) = N(unk_802412AC);
        SI_VAR(3) = N(unk_8024131C);
    }
    spawn func_80285EEC;
    sleep 17;
    GotoMap(D_80241B68_D77F08, 0);
    sleep 100;
});

Script N(script_80241460) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 19;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412F4);
        SI_VAR(3) = N(unk_80241308);
    } else {
        SI_VAR(2) = N(unk_802412C4);
        SI_VAR(3) = N(unk_802412D0);
    }
    spawn func_80285EEC;
    sleep 17;
    GotoMap(D_80241B70_D77F10, 0);
    sleep 100;
});

Script N(script_80241544) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 23;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412F4);
        SI_VAR(3) = N(unk_80241308);
    } else {
        SI_VAR(2) = N(unk_802412DC);
        SI_VAR(3) = N(unk_802412E8);
    }
    spawn func_80285EEC;
    sleep 17;
    GotoMap(D_80241B70_D77F10, 3);
    sleep 100;
});

Script N(script_80241628) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 4;
    SI_VAR(1) = 28;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412AC);
        SI_VAR(3) = N(unk_802412B8);
    } else {
        SI_VAR(2) = N(unk_8024131C);
        SI_VAR(3) = N(unk_802412B8);
    }
    spawn func_80285EEC;
    sleep 17;
    GotoMap(D_80241B78_D77F18, 0);
    sleep 100;
});

Script N(script_8024170C) = SCRIPT({
    bind N(script_ExitWalk_80241320) to 0x80000 11;
    bind N(script_8024137C) to TriggerFlag_WALL_INTERACT 32;
    bind N(script_80241460) to TriggerFlag_WALL_INTERACT 19;
    bind N(script_80241544) to TriggerFlag_WALL_INTERACT 23;
    bind N(script_80241628) to TriggerFlag_WALL_INTERACT 28;
});

Script N(script_EnterWalk_802417A8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_8024170C);
            spawn EnterWalk;
        }
        == 1 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412AC);
                SI_VAR(3) = N(unk_802412B8);
            } else {
                SI_VAR(2) = N(unk_802412AC);
                SI_VAR(3) = N(unk_8024131C);
            }
            await func_802861B0;
            spawn N(script_8024170C);
        }
        == 2 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412F4);
                SI_VAR(3) = N(unk_80241308);
            } else {
                SI_VAR(2) = N(unk_802412C4);
                SI_VAR(3) = N(unk_802412D0);
            }
            await func_802861B0;
            spawn N(script_8024170C);
        }
        == 3 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412F4);
                SI_VAR(3) = N(unk_80241308);
            } else {
                SI_VAR(2) = N(unk_802412DC);
                SI_VAR(3) = N(unk_802412E8);
            }
            await func_802861B0;
            spawn N(script_8024170C);
        }
        == 4 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412AC);
                SI_VAR(3) = N(unk_802412B8);
            } else {
                SI_VAR(2) = N(unk_802412B8);
                SI_VAR(3) = N(unk_8024131C);
            }
            await func_802861B0;
            spawn N(script_8024170C);
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
    spawn N(script_80240FB0);
    EnableModel(52, 0);
    ModifyColliderFlags(0, 38, 0x7FFFFE00);
    SI_VAR(0) = 25;
    SI_VAR(1) = 26;
    SI_VAR(2) = 0;
    spawn N(script_802411A8);
    SI_VAR(0) = 0;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_80241100);
    spawn N(script_EnterWalk_802417A8);
    sleep 1;
});

// rodata: D_80241B60_D77F00

// rodata: D_80241B68_D77F08

// rodata: D_80241B70_D77F10

// rodata: D_80241B78_D77F18
