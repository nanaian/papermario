#include "pra_33.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
Script N(script_80241100);
s32 pad_00113C[1];
Script N(script_80241140);
Script N(script_80241250);
Script N(script_802412F8);
s32 N(unk_802413FC)[2];
s32 N(unk_80241404)[2];
s32 N(unk_8024140C)[2];
s32 N(unk_80241414)[2];
Script N(script_8024141C);
Script N(script_802414C0);
Script N(script_ExitWalk_80241564);
s32 unk_missing_802415C0[4];
Script N(script_802415D0);
Script N(script_EnterWalk_80241634);
Script N(script_80241728);
Script N(main);
s32 pad_00197C[1];
Script N(script_80241980);
Script N(script_MakeEntities);
s32 pad_001CB8[2];
const char D_80241CC0_D8B3A0[8]; // "pra_35"
const char D_80241CC8_D8B3A8[8]; // "pra_18"

// text: func_Init_D896E0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D89734

// text: func_802400EC_D897CC

// text: func_80240128_D89808

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

// text: func_8024049C_D89B7C

// text: func_80240500_D89BE0

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

// text: func_80240870_D89F50

// text: func_80240D3C_D8A41C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D8A600

// text: func_80240F58_D8A638

// text: func_80241000_D8A6E0

EntryList N(entryList) = {
    { 487.0f, 0.0f, 70.0f, 270.0f },
    { 13.0f, 0.0f, -70.0f, 90.0f },
    { 487.0f, 0.0f, -70.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19014E,
};

Script N(script_80241100) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
});

s32 pad_00113C[] = {
    0x00000000,
};

Script N(script_80241140) = SCRIPT({
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
Script N(script_80241250) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D897CC),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D897CC),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D89B7C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D8A41C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802412F8) = SCRIPT({
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

s32 N(unk_802413FC)[] = {
    0x00000028, 0xFFFFFFFF,
};

s32 N(unk_80241404)[] = {
    0x0000002A, 0xFFFFFFFF,
};

s32 N(unk_8024140C)[] = {
    0x00000012, 0xFFFFFFFF,
};

s32 N(unk_80241414)[] = {
    0x00000014, 0xFFFFFFFF,
};

Script N(script_8024141C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 21;
    SI_VAR(2) = N(unk_802413FC);
    SI_VAR(3) = N(unk_80241404);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241CC0_D8B3A0, 0);
    sleep 100;
});

Script N(script_802414C0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 17;
    SI_VAR(2) = N(unk_8024140C);
    SI_VAR(3) = N(unk_80241414);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80241CC8_D8B3A8, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241564) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80241CC0_D8B3A0, 2);
    sleep 100;
});

s32 unk_missing_802415C0[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_802415D0) = SCRIPT({
    bind N(script_8024141C) to TriggerFlag_WALL_INTERACT 21;
    bind N(script_802414C0) to TriggerFlag_WALL_INTERACT 17;
    bind N(script_ExitWalk_80241564) to 0x80000 23;
});

Script N(script_EnterWalk_80241634) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = N(unk_802413FC);
            SI_VAR(3) = N(unk_80241404);
            await 0x802861B0;
            spawn N(script_802415D0);
        }
        == 1 {
            SI_VAR(2) = N(unk_8024140C);
            SI_VAR(3) = N(unk_80241414);
            await 0x802861B0;
            spawn N(script_802415D0);
        }
        == 2 {
            SI_VAR(0) = N(script_802415D0);
            spawn EnterWalk;
        }
    }
});

Vec4f N(triggerCoord_80241718) =  { 487.0f, 0.0f, -80.0f, 0.0f };

Script N(script_80241728) = SCRIPT({
    SI_SAVE_FLAG(1516) = 1;
    PlayEffect(66, 0, 2, 34, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableGroup(2, 0);
    EnableGroup(7, 1);
    ModifyColliderFlags(0, 25, 0x7FFFFE00);
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
    spawn N(script_80241100);
    if (SI_SAVE_FLAG(1516) == 0) {
        bind N(script_80241728) to TriggerFlag_BOMB N(triggerCoord_80241718);
        EnableGroup(7, 0);
    } else {
        EnableGroup(2, 0);
        ModifyColliderFlags(0, 25, 0x7FFFFE00);
    }
    SI_VAR(0) = 27;
    SI_VAR(1) = 52;
    SI_VAR(2) = 0;
    spawn N(script_802412F8);
    SI_VAR(0) = 2;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_80241250);
    spawn N(script_EnterWalk_80241634);
    sleep 1;
});

s32 pad_00197C[] = {
    0x00000000,
};

Script N(script_80241980) = SCRIPT({
    if (SI_AREA_FLAG(3) == 1) {
        return;
    }
    SI_AREA_FLAG(3) = 1;
    if (SI_MAP_VAR(0) == 0) {
        SI_MAP_VAR(0) = 1;
    } else {
        SI_MAP_VAR(0) = 0;
    }
    PlaySoundAtCollider(29, 46, 0);
    func_80240F20_D8A600();
    ModifyColliderFlags(1, 29, 0x7FFFFE00);
    func_80240F58_D8A638();
    if (SI_MAP_VAR(0) == 0) {
        SI_VAR(2) = 180;
        MakeLerp(180, 360, 15, 0);
    } else {
        SI_VAR(2) = 0;
        MakeLerp(0, 180, 15, 0);
    }
    loop {
        UpdateLerp();
        RotateGroup(51, SI_VAR(0), 0, 1, 0);
        UpdateColliderTransform(28);
        func_80240F20_D8A600();
        if (SI_VAR(10) == 1) {
            SI_VAR(3) = SI_VAR(2);
            SI_VAR(3) -= SI_VAR(0);
            SI_VAR(2) = SI_VAR(0);
            SI_VAR(7) += SI_VAR(3);
            func_80241000_D8A6E0();
        }
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SI_AREA_FLAG(3) = 0;
    func_80240F20_D8A600();
    ModifyColliderFlags(0, 29, 0x7FFFFE00);
});

Script N(script_MakeEntities) = SCRIPT({
    SI_SAVE_FLAG(1515) = 0;
    SI_AREA_FLAG(3) = 0;
    MakeEntity(0x802E9BB0, 310, 0, 110, 0, 0x80000000);
    AssignScript(N(script_80241980));
    MakeEntity(0x802E9BB0, 310, 0, 0xFFFFFF92, 0, 0x80000000);
    AssignScript(N(script_80241980));
    ParentColliderToModel(28, 49);
    ParentColliderToModel(29, 49);
    ModifyColliderFlags(0, 29, 0x7FFFFE00);
});

s32 pad_001CB8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241CC0_D8B3A0

// rodata: D_80241CC8_D8B3A8
