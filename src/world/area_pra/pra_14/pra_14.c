#include "pra_14.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_0011DC[1];
Script N(script_80241240);
s32 pad_00127C[1];
Script N(script_80241280);
Script N(script_80241390);
Script N(script_80241438);
Script N(script_ExitWalk_8024153C);
Script N(script_ExitWalk_80241598);
Script N(script_802415F4);
Script N(script_EnterWalk_8024163C);
Script N(script_80241688);
Script N(script_802416DC);
Script N(main);
s32 pad_00192C[1];
s32 N(unk_80241930)[1];
Script N(script_80241934);
Script N(script_8024199C);
Script N(script_MakeEntities);
s32 pad_001AF4[3];
const char D_80241B00_D69800[8]; // "pra_13"
s32 pad_001B08[2];

// text: func_Init_D67D00

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D67D54

// text: func_802400EC_D67DEC

// text: func_80240128_D67E28

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

// text: func_8024049C_D6819C

// text: func_80240500_D68200

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

// text: func_80240870_D68570

// text: func_80240D3C_D68A3C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D68C20

// text: func_80240FD4_D68CD4

// text: func_80241038_D68D38

// text: func_80241188_D68E88

s32 pad_0011DC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 13.0f, 0.0f, -70.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190141,
};

Script N(script_80241240) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_00127C[] = {
    0x00000000,
};

Script N(script_80241280) = SCRIPT({
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
Script N(script_80241390) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D67DEC),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D67DEC),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D6819C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D68A3C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241438) = SCRIPT({
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

Script N(script_ExitWalk_8024153C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241B00_D69800, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241598) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241B00_D69800, 2);
    sleep 100;
});

Script N(script_802415F4) = SCRIPT({
    bind N(script_ExitWalk_8024153C) to 0x80000 18;
    bind N(script_ExitWalk_80241598) to 0x80000 21;
});

Script N(script_EnterWalk_8024163C) = SCRIPT({
    SI_VAR(0) = N(script_802415F4);
    spawn EnterWalk;
});

Vec4f N(triggerCoord_80241668) =  { 13.0f, 0.0f, 70.0f, 0.0f };

Vec4f N(triggerCoord_80241678) =  { 13.0f, 0.0f, -70.0f, 0.0f };

Script N(script_80241688) = SCRIPT({
    EnableModel(15, 0);
    ModifyColliderFlags(0, 31, 0x7FFFFE00);
    SI_SAVE_FLAG(1502) = 1;
    unbind;
});

Script N(script_802416DC) = SCRIPT({
    EnableModel(20, 0);
    ModifyColliderFlags(0, 33, 0x7FFFFE00);
    SI_SAVE_FLAG(1503) = 1;
    unbind;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80241240);
    SI_VAR(0) = 40;
    SI_VAR(1) = 40;
    SI_VAR(2) = 0;
    spawn N(script_80241438);
    SI_VAR(0) = 2;
    SI_VAR(1) = 1;
    spawn N(script_80241390);
    spawn N(script_EnterWalk_8024163C);
    sleep 1;
    if (SI_SAVE_FLAG(1502) == 0) {
        bind N(script_80241688) to TriggerFlag_BOMB N(triggerCoord_80241668);
    } else {
        EnableModel(15, 0);
        ModifyColliderFlags(0, 31, 0x7FFFFE00);
    }
    if (SI_SAVE_FLAG(1503) == 0) {
        bind N(script_802416DC) to TriggerFlag_BOMB N(triggerCoord_80241678);
    } else {
        EnableModel(20, 0);
        ModifyColliderFlags(0, 33, 0x7FFFFE00);
    }
});

s32 pad_00192C[] = {
    0x00000000,
};

s32 N(unk_80241930)[] = {
    0x00000000,
};

Script N(script_80241934) = SCRIPT({
    group 0;
    func_802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    func_802D5830(0);
    return;
});

Script N(script_8024199C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80241934);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EA0E8, 445, 60, 80, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1504));
    MakeEntity(D_802EA0E8, 445, 60, 0xFFFFFFB0, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1505));
});

s32 pad_001AF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241B00_D69800

s32 pad_001B08[] = {
    0x00000000, 0x00000000,
};
