#include "pra_34.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_000FF4[3];
Script N(script_80241080);
s32 pad_0010BC[1];
Script N(script_802410C0);
Script N(script_802411D0);
Script N(script_80241278);
s32 N(unk_8024137C)[3];
s32 N(unk_80241388)[3];
s32 N(unk_80241394)[3];
s32 N(unk_802413A0)[3];
s32 N(unk_802413AC)[5];
s32 N(unk_802413C0)[5];
s32 N(unk_802413D4)[3];
s32 N(unk_802413E0)[3];
s32 N(unk_802413EC)[3];
s32 N(unk_802413F8)[3];
s32 N(unk_80241404)[5];
s32 N(unk_80241418)[5];
Script N(script_8024142C);
Script N(script_80241510);
Script N(script_802415F4);
Script N(script_802416D8);
s32 N(itemList_802417BC)[2];
Script N(script_802417C4);
Script N(script_80241970);
Script N(script_80241A50);
Script N(main);
s32 pad_001D78[2];
Script N(script_80241D80);
Script N(script_MakeEntities);
s32 pad_001E88[2];
const char D_80241E90_D8D240[8]; // "pra_29"
const char D_80241E98_D8D248[8]; // "pra_31"

// text: func_Init_D8B3B0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D8B404

// text: func_802400EC_D8B49C

// text: func_80240128_D8B4D8

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

// text: func_8024049C_D8B84C

// text: func_80240500_D8B8B0

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

// text: func_80240870_D8BC20

// text: func_80240D3C_D8C0EC

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D8C2D0

// text: func_80240F54_D8C304

s32 pad_000FF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 237.0f, 0.0f, 70.0f, 270.0f },
    { 237.0f, 0.0f, -70.0f, 270.0f },
    { 13.0f, 0.0f, -70.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19014F,
};

Script N(script_80241080) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_0010BC[] = {
    0x00000000,
};

Script N(script_802410C0) = SCRIPT({
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
Script N(script_802411D0) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D8B49C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D8B49C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D8B84C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D8C0EC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241278) = SCRIPT({
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

s32 N(unk_8024137C)[] = {
    0x0000002E, 0x0000002F, 0xFFFFFFFF,
};

s32 N(unk_80241388)[] = {
    0x00000031, 0x00000032, 0xFFFFFFFF,
};

s32 N(unk_80241394)[] = {
    0x00000018, 0x00000019, 0xFFFFFFFF,
};

s32 N(unk_802413A0)[] = {
    0x00000015, 0x00000016, 0xFFFFFFFF,
};

s32 N(unk_802413AC)[] = {
    0x0000002E, 0x0000002F, 0x00000018, 0x00000019, 0xFFFFFFFF,
};

s32 N(unk_802413C0)[] = {
    0x00000031, 0x00000032, 0x00000015, 0x00000016, 0xFFFFFFFF,
};

s32 N(unk_802413D4)[] = {
    0x00000028, 0x00000029, 0xFFFFFFFF,
};

s32 N(unk_802413E0)[] = {
    0x0000002B, 0x0000002C, 0xFFFFFFFF,
};

s32 N(unk_802413EC)[] = {
    0x00000012, 0x00000013, 0xFFFFFFFF,
};

s32 N(unk_802413F8)[] = {
    0x0000000F, 0x00000010, 0xFFFFFFFF,
};

s32 N(unk_80241404)[] = {
    0x00000028, 0x00000029, 0x00000012, 0x00000013, 0xFFFFFFFF,
};

s32 N(unk_80241418)[] = {
    0x0000002B, 0x0000002C, 0x0000000F, 0x00000010, 0xFFFFFFFF,
};

Script N(script_8024142C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 13;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802413AC);
        SI_VAR(3) = N(unk_802413C0);
    } else {
        SI_VAR(2) = N(unk_8024137C);
        SI_VAR(3) = N(unk_80241388);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241E90_D8D240, 1);
    sleep 100;
});

Script N(script_80241510) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 21;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_80241404);
        SI_VAR(3) = N(unk_80241418);
    } else {
        SI_VAR(2) = N(unk_802413D4);
        SI_VAR(3) = N(unk_802413E0);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241E98_D8D248, 0);
    sleep 100;
});

Script N(script_802415F4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 25;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_80241404);
        SI_VAR(3) = N(unk_80241418);
    } else {
        SI_VAR(2) = N(unk_802413EC);
        SI_VAR(3) = N(unk_802413F8);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241E98_D8D248, 2);
    sleep 100;
});

Script N(script_802416D8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 17;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802413AC);
        SI_VAR(3) = N(unk_802413C0);
    } else {
        SI_VAR(2) = N(unk_80241394);
        SI_VAR(3) = N(unk_802413A0);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241E90_D8D240, 2);
    sleep 100;
});

s32 N(itemList_802417BC)[] = {
    0x00000014, 0x00000000,
};

Script N(script_802417C4) = SCRIPT({
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
    SI_SAVE_FLAG(1520) = 1;
    func_80240F54_D8C304(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240F54_D8C304(SI_MAP_VAR(1), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240F20_D8C2D0();
    SI_VAR(0) = SI_MAP_VAR(1);
    func_80240F20_D8C2D0();
    resume group 1;
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80241970) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024142C), TriggerFlag_WALL_INTERACT, 13, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802416D8), TriggerFlag_WALL_INTERACT, 17, 1, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1520), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802417C4), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_802417BC), 0, 1),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802417C4), TriggerFlag_WALL_INTERACT, 0x4001, N(itemList_802417BC), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241510), TriggerFlag_WALL_INTERACT, 21, 1, 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802415F4), TriggerFlag_WALL_INTERACT, 25, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241A50) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802413AC);
                SI_VAR(3) = N(unk_802413C0);
            } else {
                SI_VAR(2) = N(unk_8024137C);
                SI_VAR(3) = N(unk_80241388);
            }
        }
        == 1 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_80241404);
                SI_VAR(3) = N(unk_80241418);
            } else {
                SI_VAR(2) = N(unk_802413D4);
                SI_VAR(3) = N(unk_802413E0);
            }
        }
        == 2 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_80241404);
                SI_VAR(3) = N(unk_80241418);
            } else {
                SI_VAR(2) = N(unk_802413EC);
                SI_VAR(3) = N(unk_802413F8);
            }
        }
        == 3 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802413AC);
                SI_VAR(3) = N(unk_802413C0);
            } else {
                SI_VAR(2) = N(unk_80241394);
                SI_VAR(3) = N(unk_802413A0);
            }
        }
    }
    await 0x802861B0;
    spawn N(script_80241970);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_80241080);
    SI_VAR(0) = 29;
    SI_VAR(1) = 30;
    SI_VAR(2) = 0;
    spawn N(script_80241278);
    SI_VAR(0) = 0;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_802411D0);
    spawn N(script_80241A50);
    sleep 1;
});

s32 pad_001D78[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241D80) = SCRIPT({
    SI_SAVE_FLAG(1520) = 1;
    bind N(script_80241510) to TriggerFlag_WALL_INTERACT 21;
    bind N(script_802415F4) to TriggerFlag_WALL_INTERACT 25;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1520) == 0) {
        MakeEntity(0x802BCD68, 240, 8, 0xFFFFFFB5, 270, 0x80000000);
        AssignScript(N(script_80241D80));
        SI_MAP_VAR(0) = SI_VAR(0);
        MakeEntity(0x802BCD68, 240, 8, 75, 270, 0x80000000);
        AssignScript(N(script_80241D80));
        SI_MAP_VAR(1) = SI_VAR(0);
    }
});

s32 pad_001E88[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241E90_D8D240

// rodata: D_80241E98_D8D248

