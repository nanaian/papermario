#include "pra_18.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
Script N(script_80240F90);
s32 pad_000FCC[1];
Script N(script_80240FD0);
Script N(script_802410E0);
Script N(script_80241188);
s32 N(unk_8024128C)[2];
s32 N(unk_80241294)[2];
s32 N(unk_8024129C)[2];
s32 N(unk_802412A4)[2];
s32 N(unk_802412AC)[3];
s32 N(unk_802412B8)[3];
s32 N(unk_802412C4)[3];
s32 N(unk_802412D0)[3];
Script N(script_802412DC);
Script N(script_802413C0);
Script N(script_80241464);
Script N(script_80241548);
Script N(script_802415C4);
Script N(main);
s32 pad_001934[3];
Script N(script_Interact_8024196C);
Script N(script_Interact_80241990);
Script N(script_Interact_802419B4);
Script N(script_Hit_802419D8);
Script N(script_Hit_802419FC);
Script N(script_Hit_80241A20);
Script N(script_Hit_80241A44);
Script N(script_Hit_80241A54);
Script N(script_Hit_80241A64);
Script N(script_Idle_80241A74);
Script N(script_Idle_80241B98);
Script N(script_Idle_80241CBC);
Script N(script_80241DF4);
Script N(script_Defeat_80242014);
Script N(script_Defeat_80242140);
Script N(script_Defeat_8024226C);
Script N(script_Init_802423B4);
Script N(script_Init_8024248C);
Script N(script_Init_80242564);
Script N(script_Init_8024260C);
Script N(script_Init_802426A8);
Script N(script_Init_80242744);
StaticNpc N(npcGroup_802427B0)[2];
StaticNpc N(npcGroup_80242B90)[2];
StaticNpc N(npcGroup_80242F70)[2];
NpcGroupList N(npcGroupList_80243350);
const char D_80243380_D6E9A0[8]; // "pra_16"
const char D_80243388_D6E9A8[8]; // "pra_33"

// text: func_Init_D6B620

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D6B674

// text: func_802400EC_D6B70C

// text: func_80240128_D6B748

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

// text: func_8024049C_D6BABC

// text: func_80240500_D6BB20

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

// text: func_80240870_D6BE90

// text: func_80240D3C_D6C35C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 737.0f, 0.0f, -70.0f, 270.0f },
    { 13.0f, 0.0f, -70.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190144,
};

Script N(script_80240F90) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
    UseDoorSounds(0);
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
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D6B70C),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D6B70C),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D6BABC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D6C35C, SI_VAR(0)),
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
    0x0000004B, 0xFFFFFFFF,
};

s32 N(unk_80241294)[] = {
    0x00000049, 0xFFFFFFFF,
};

s32 N(unk_8024129C)[] = {
    0x0000004D, 0xFFFFFFFF,
};

s32 N(unk_802412A4)[] = {
    0x0000004F, 0xFFFFFFFF,
};

s32 N(unk_802412AC)[] = {
    0x0000004B, 0x0000004D, 0xFFFFFFFF,
};

s32 N(unk_802412B8)[] = {
    0x00000049, 0x0000004F, 0xFFFFFFFF,
};

s32 N(unk_802412C4)[] = {
    0x00000052, 0x00000053, 0xFFFFFFFF,
};

s32 N(unk_802412D0)[] = {
    0x00000055, 0x00000056, 0xFFFFFFFF,
};

Script N(script_802412DC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 27;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412AC);
        SI_VAR(3) = N(unk_802412B8);
    } else {
        SI_VAR(2) = N(unk_8024128C);
        SI_VAR(3) = N(unk_80241294);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80243380_D6E9A0, 1);
    sleep 100;
});

Script N(script_802413C0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 35;
    SI_VAR(2) = N(unk_802412C4);
    SI_VAR(3) = N(unk_802412D0);
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80243388_D6E9A8, 1);
    sleep 100;
});

Script N(script_80241464) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 31;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_802412AC);
        SI_VAR(3) = N(unk_802412B8);
    } else {
        SI_VAR(2) = N(unk_8024129C);
        SI_VAR(3) = N(unk_802412A4);
    }
    spawn 0x80285EEC;
    sleep 17;
    GotoMap(D_80243380_D6E9A0, 2);
    sleep 100;
});

Script N(script_80241548) = SCRIPT({
    bind N(script_802412DC) to TriggerFlag_WALL_INTERACT 27;
    if (SI_SAVE_VAR(0) >= 81) {
        bind N(script_802413C0) to TriggerFlag_WALL_INTERACT 35;
    }
    bind N(script_80241464) to TriggerFlag_WALL_INTERACT 31;
});

Script N(script_802415C4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412AC);
                SI_VAR(3) = N(unk_802412B8);
            } else {
                SI_VAR(2) = N(unk_8024128C);
                SI_VAR(3) = N(unk_80241294);
            }
        }
        == 1 {
            SI_VAR(2) = N(unk_802412C4);
            SI_VAR(3) = N(unk_802412D0);
        }
        == 2 {
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_802412AC);
                SI_VAR(3) = N(unk_802412B8);
            } else {
                SI_VAR(2) = N(unk_8024129C);
                SI_VAR(3) = N(unk_802412A4);
            }
        }
    }
    await 0x802861B0;
    spawn N(script_80241548);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80243350));
    spawn N(script_80240F90);
    if (SI_SAVE_VAR(0) >= 81) {
        ModifyColliderFlags(0, 39, 0x7FFFFE00);
        SetGroupEnabled(71, 0);
        ModifyColliderFlags(0, 40, 0x7FFFFE00);
        SetGroupEnabled(62, 0);
        ModifyColliderFlags(0, 41, 0x7FFFFE00);
        SetGroupEnabled(66, 0);
    } else {
        match SI_SAVE_VAR(284) {
            == 1 {
                ModifyColliderFlags(0, 41, 0x7FFFFE00);
                SetGroupEnabled(66, 0);
            }
            == 2 {
                ModifyColliderFlags(0, 40, 0x7FFFFE00);
                SetGroupEnabled(62, 0);
                ModifyColliderFlags(0, 41, 0x7FFFFE00);
                SetGroupEnabled(66, 0);
            }
        }
    }
    spawn N(script_802415C4);
    sleep 1;
});

s32 pad_001934[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241940) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x46,
    .radius = 0x3C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_Interact_8024196C) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_Interact_80241990) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_Interact_802419B4) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_Hit_802419D8) = SCRIPT({
    SetSelfVar(0, 2);
});

Script N(script_Hit_802419FC) = SCRIPT({
    SetSelfVar(0, 2);
});

Script N(script_Hit_80241A20) = SCRIPT({
    SetSelfVar(0, 2);
});

Script N(script_Hit_80241A44) = SCRIPT({

});

Script N(script_Hit_80241A54) = SCRIPT({

});

Script N(script_Hit_80241A64) = SCRIPT({

});

Script N(script_Idle_80241A74) = SCRIPT({
    loop {
        sleep 1;
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        IsPlayerWithin(SI_VAR(3), SI_VAR(5), 80, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
    }
    if (SI_VAR(0) != 2) {
        DisablePlayerInput(1);
        SpeakToPlayer(-1, 0x390105, 0x390102, 0, 0x120150);
        DisablePlayerInput(0);
    }
    StartBossBattle(3);
});

Script N(script_Idle_80241B98) = SCRIPT({
    loop {
        sleep 1;
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        IsPlayerWithin(SI_VAR(3), SI_VAR(5), 80, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
    }
    if (SI_VAR(0) != 2) {
        DisablePlayerInput(1);
        SpeakToPlayer(-1, 0x390105, 0x390102, 0, 0x120151);
        DisablePlayerInput(0);
    }
    StartBossBattle(3);
});

Script N(script_Idle_80241CBC) = SCRIPT({
    loop {
        sleep 1;
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        IsPlayerWithin(SI_VAR(3), SI_VAR(5), 80, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
    }
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) != 2) {
        DisablePlayerInput(1);
        SpeakToPlayer(-1, 0x390105, 0x390102, 0, 0x120152);
        DisablePlayerInput(0);
    }
    StartBossBattle(3);
});

Script N(script_80241DF4) = SCRIPT({
    sleep 20;
    loop 4 {
        SI_VAR(0) = SI_VAR(10);
        SI_VAR(1) = SI_VAR(11);
        SI_VAR(2) = SI_VAR(12);
        RandInt(50, SI_VAR(3));
        RandInt(50, SI_VAR(4));
        SI_VAR(0) += 0xFFFFFFF1;
        SI_VAR(0) += SI_VAR(3);
        SI_VAR(1) += SI_VAR(4);
        PlayEffect(67, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.80078125, 0, 0, 0, 0, 0, 0, 0, 0);
        PlaySoundAt(0xB0000018, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 2;
        SI_VAR(0) = SI_VAR(10);
        SI_VAR(1) = SI_VAR(11);
        SI_VAR(2) = SI_VAR(12);
        RandInt(50, SI_VAR(3));
        RandInt(50, SI_VAR(4));
        SI_VAR(0) += 0xFFFFFFF1;
        SI_VAR(0) += SI_VAR(3);
        SI_VAR(1) += SI_VAR(4);
        PlayEffect(67, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.80078125, 0, 0, 0, 0, 0, 0, 0, 0);
        PlaySoundAt(0xB0000018, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 8;
    }
});

Script N(script_Defeat_80242014) = SCRIPT({
    spawn {
        DisablePlayerInput(1);
        sleep 50;
        loop 10 {
            sleep 2;
            SetGroupEnabled(66, 1);
            sleep 2;
            SetGroupEnabled(66, 0);
        }
        ModifyColliderFlags(0, 41, 0x7FFFFE00);
        SI_SAVE_VAR(284) = 1;
        DisablePlayerInput(0);
    }
    spawn {
        sleep 30;
        SI_VAR(10) = 270;
        SI_VAR(11) = 20;
        SI_VAR(12) = 0xFFFFFFB5;
        spawn N(script_80241DF4);
    }
    DoNpcDefeat();
});

Script N(script_Defeat_80242140) = SCRIPT({
    spawn {
        DisablePlayerInput(1);
        sleep 50;
        loop 10 {
            sleep 2;
            SetGroupEnabled(62, 1);
            sleep 2;
            SetGroupEnabled(62, 0);
        }
        ModifyColliderFlags(0, 40, 0x7FFFFE00);
        SI_SAVE_VAR(284) = 2;
        DisablePlayerInput(0);
    }
    spawn {
        sleep 30;
        SI_VAR(10) = 480;
        SI_VAR(11) = 20;
        SI_VAR(12) = 0xFFFFFFB5;
        spawn N(script_80241DF4);
    }
    DoNpcDefeat();
});

Script N(script_Defeat_8024226C) = SCRIPT({
    spawn {
        DisablePlayerInput(1);
        sleep 50;
        loop 10 {
            sleep 2;
            SetGroupEnabled(71, 1);
            sleep 2;
            SetGroupEnabled(71, 0);
        }
        ModifyColliderFlags(0, 39, 0x7FFFFE00);
        bind N(script_802413C0) to TriggerFlag_WALL_INTERACT 35;
        SI_SAVE_VAR(0) = 81;
        DisablePlayerInput(0);
    }
    spawn {
        sleep 30;
        SI_VAR(10) = 725;
        SI_VAR(11) = 20;
        SI_VAR(12) = 0xFFFFFFB5;
        spawn N(script_80241DF4);
    }
    DoNpcDefeat();
});

Script N(script_Init_802423B4) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 81) {
        RemoveNpc(-1);
        return;
    }
    if (SI_SAVE_VAR(284) >= 1) {
        RemoveNpc(-1);
        return;
    }
    BindNpcInteract(-1, N(script_Interact_8024196C));
    BindNpcIdle(-1, N(script_Idle_80241A74));
    BindNpcDefeat(-1, N(script_Defeat_80242014));
    BindNpcHit(-1, N(script_Hit_802419D8));
    SetNpcFlagBits(-1, 0x10000000, 1);
});

Script N(script_Init_8024248C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 81) {
        RemoveNpc(-1);
        return;
    }
    if (SI_SAVE_VAR(284) >= 2) {
        RemoveNpc(-1);
        return;
    }
    BindNpcInteract(-1, N(script_Interact_80241990));
    BindNpcIdle(-1, N(script_Idle_80241B98));
    BindNpcDefeat(-1, N(script_Defeat_80242140));
    BindNpcHit(-1, N(script_Hit_802419FC));
    SetNpcFlagBits(-1, 0x10000000, 1);
});

Script N(script_Init_80242564) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 81) {
        RemoveNpc(-1);
        return;
    }
    BindNpcInteract(-1, N(script_Interact_802419B4));
    BindNpcIdle(-1, N(script_Idle_80241CBC));
    BindNpcDefeat(-1, N(script_Defeat_8024226C));
    BindNpcHit(-1, N(script_Hit_80241A20));
    SetNpcFlagBits(-1, 0x10000000, 1);
});

Script N(script_Init_8024260C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 81) {
        RemoveNpc(-1);
        return;
    }
    if (SI_SAVE_VAR(284) >= 1) {
        RemoveNpc(-1);
        return;
    }
    SetNpcFlagBits(-1, 0x10000000, 1);
    BindNpcHit(-1, N(script_Hit_80241A44));
});

Script N(script_Init_802426A8) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 81) {
        RemoveNpc(-1);
        return;
    }
    if (SI_SAVE_VAR(284) >= 2) {
        RemoveNpc(-1);
        return;
    }
    SetNpcFlagBits(-1, 0x10000000, 1);
    BindNpcHit(-1, N(script_Hit_80241A54));
});

Script N(script_Init_80242744) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 81) {
        RemoveNpc(-1);
        return;
    }
    SetNpcFlagBits(-1, 0x10000000, 1);
    BindNpcHit(-1, N(script_Hit_80241A64));
});

StaticNpc N(npcGroup_802427B0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241940),
        .pos = { 268.0, 0.0, 70.0 },
        .flags = 0x00500D00,
        .init = N(script_Init_802423B4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241940),
        .pos = { 268.0, 0.0, 70.0 },
        .flags = 0x00404D00,
        .init = N(script_Init_8024260C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
};

StaticNpc N(npcGroup_80242B90)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241940),
        .pos = { 490.0, 0.0, 70.0 },
        .flags = 0x00500D00,
        .init = N(script_Init_8024248C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80241940),
        .pos = { 490.0, 0.0, 70.0 },
        .flags = 0x00404D00,
        .init = N(script_Init_802426A8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
};

StaticNpc N(npcGroup_80242F70)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241940),
        .pos = { 717.0, 0.0, 70.0 },
        .flags = 0x00500D00,
        .init = N(script_Init_80242564),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80241940),
        .pos = { 717.0, 0.0, 70.0 },
        .flags = 0x00404D00,
        .init = N(script_Init_80242744),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00390102, 0x00390103, 0x00390104, 0x00390104, 0x00390102, 0x00390102, 0x0039010C, 0x0039010C, 0x00390111, 0x00390112, 0x00390107, 0x00390108, 0x00390102, 0x00390102, 0x00390102, 0x00390102,
        },
    },
};

NpcGroupList N(npcGroupList_80243350) = {
    NPC_GROUP(N(npcGroup_802427B0), 0x1F0B0003),
    NPC_GROUP(N(npcGroup_80242B90), 0x1F090003),
    NPC_GROUP(N(npcGroup_80242F70), 0x1F0C0004),
    {},
};

// rodata: D_80243380_D6E9A0

// rodata: D_80243388_D6E9A8

