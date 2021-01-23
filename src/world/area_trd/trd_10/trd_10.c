#include "trd_10.h"

s32 unk_missing_80240814[15];
Script N(script_802408B0);
Script N(script_80240950);
Script N(script_EnterDoubleDoor_80240E38);
Script N(script_ExitDoubleDoor_80240F08);
Script N(script_80240FB4);
Script N(main);
s32 pad_001118[2];
Script N(script_80241120);
Script N(script_80241160);
Script N(script_NpcAI_80241170);
Script N(script_80241870);
Script N(script_80241880);
Script N(script_80241890);
Script N(script_80241C6C);
Script N(script_80241CAC);
Script N(script_NpcAI_80241CBC);
Script N(script_80241CCC);
Script N(script_80241CDC);
Script N(script_80241CEC);
Script N(script_80241CFC);
Script N(script_80241D3C);
Script N(script_NpcAI_80241D4C);
Script N(script_80241D5C);
Script N(script_80241D6C);
Script N(script_80241D7C);
Script N(script_80241D8C);
Script N(script_80241DCC);
Script N(script_NpcAI_80241DDC);
Script N(script_80241DEC);
Script N(script_80241DFC);
Script N(script_80241E0C);
StaticNpc N(npcGroup_80241ECC)[4];
NpcGroupList N(npcGroupList_8024268C);
s32 pad_0026A4[3];
Script N(script_802426B0);
Script N(script_802426C0);
Script N(script_802427D4);
Script N(script_80242950);
Script N(script_80242A4C);
s32 pad_002A94[3];
const char D_80242AB4_9C53C4[8]; // "kmr_23"
const char D_80242ABC_9C53CC[8]; // "trd_06"
const char D_80242AC4_9C53D4[8]; // "trd_09"
s32 pad_002ACC[1];

// text: func_80240000_9C2910

// text: func_8024004C_9C295C

// text: func_802401AC_9C2ABC

// text: func_802405BC_9C2ECC

// text: func_802405FC_9C2F0C

// text: func_80240708_9C3018

// text: func_802407F4_9C3104

s32 unk_missing_80240814[] = {
    0x00000000, 0x00000000, 0x00000000, 0x3C038011, 0x8063F2A2, 0x24020003, 0x54620003, 0xAC800084,
    0x24020001, 0xAC820084, 0x03E00008, 0x24020002, 0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -310.0f, 0.0f, 0.0f, 90.0f },
    { -225.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190058,
};

Script N(script_802408B0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFB2 {
            SetMusicTrack(0, 82, 1, 8);
        }
        == 0xFFFFFFB2 {
            FadeOutMusic(0, 500);
        } else {
            SetMusicTrack(0, 20, 0, 8);
        }
    }
    UseDoorSounds(1);
});

Script N(script_80240950) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFB1 {
            SI_SAVE_VAR(0) = 0xFFFFFFB2;
            GotoMap(D_80242ABC_9C53CC, 2);
            sleep 100;
            return;
        }
        == 0xFFFFFFB2 {
            SI_VAR(0) = 1;
            GetEntryID(SI_VAR(1));
            if (SI_VAR(1) == 1) {
                SI_VAR(0) = 0;
            }
        } else {
            return;
        }
    }
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 0xFFFFFF79, 85, 0);
        SetCamSpeed(0, 0.6005859375);
        SetPanTarget(0, 0xFFFFFF79, 30, 0);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_8024004C_9C295C(0, 180, 0xFFFFFF79, 10, 0, 0xFFFFFF79, 85, 0, 30, 0);
        spawn {
            func_802401AC_9C2ABC();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240000_9C2910();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 0xFFFFFF79, 85, 0);
        }
        spawn {
            sleep 45;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 180;
            sleep 115;
            PlaySoundAt(311, 0, 0xFFFFFF79, 85, 0);
        }
        func_802405BC_9C2ECC(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 0xFFFFFF79, 0, 0);
        func_802405BC_9C2ECC(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_802405FC_9C2F0C(0, 0xFFFFFF79, 30, 0, 0);
        spawn {
            func_80240708_9C3018();
        }
        sleep 1;
    }
    func_802405BC_9C2ECC(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 0xFFFFFFB3;
    GotoMapSpecial(D_80242AB4_9C53C4, 0, 14);
    sleep 100;
});

Script N(script_EnterDoubleDoor_80240E38) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 41;
            SI_VAR(3) = 39;
            await EnterDoubleDoor;
        }
        == 1 {
            DisablePartnerAI(0);
            SetNpcPos(0xFFFFFFFC, 0xFFFFFF03, 0, 0);
            SetNpcYaw(0xFFFFFFFC, 90);
            sleep 3;
            EnablePartnerAI();
        }
    }
});

Script N(script_ExitDoubleDoor_80240F08) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 5;
    SI_VAR(2) = 41;
    SI_VAR(3) = 39;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80242AC4_9C53D4, 1);
}
sleep 100;
});

Script N(script_80240FB4) = SCRIPT({
    bind N(script_ExitDoubleDoor_80240F08) to TriggerFlag_WALL_INTERACT 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    func_802407F4_9C3104();
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_8024268C));
    await N(script_802426B0);
    spawn N(script_80242A4C);
    if (SI_SAVE_VAR(0) == 0xFFFFFFB2) {
        spawn N(script_80240950);
    }
    spawn N(script_80240FB4);
    spawn N(script_802408B0);
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB2) {
        spawn N(script_EnterDoubleDoor_80240E38);
    }
    sleep 1;
});

s32 pad_001118[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241120) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB2) {
        RemoveNpc(-1);
        return;
    }
});

Script N(script_80241160) = SCRIPT({

});

Script N(script_NpcAI_80241170) = SCRIPT({
    DisablePlayerInput(1);
    SetPlayerPos(0xFFFFFEB3, 0, 0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFE95, 0, 0);
    UseSettingsFrom(0, 0xFFFFFF10, 0, 0);
    SetPanTarget(0, 0xFFFFFF10, 0xFFFFFF56, 0);
    SetCamPitch(0, 18, 0xFFFFFFFD);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    UseSettingsFrom(0, 0xFFFFFF10, 0, 0);
    SetPanTarget(0, 0xFFFFFF10, 0, 0);
    SetCamSpeed(0, 0.2001953125);
    PanToTarget(0, 0.5, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    PlaySound(451);
    MakeLerp(0, 80, 10, 0);
10:
    UpdateLerp();
    RotateModel(41, SI_VAR(0), 0, -1, 0);
    RotateModel(39, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFF24, 0, 0);
    MakeLerp(0xFFFFFFB0, 0, 10, 0);
11:
    UpdateLerp();
    RotateModel(41, SI_VAR(0), 0, 1, 0);
    RotateModel(39, SI_VAR(0), 0, -1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 11;
    }
    PlaySound(452);
    SetNpcPos(0, 0xFFFFFFE0, 0, 0);
    NpcMoveTo(0, 0xFFFFFFA8, 0, 15);
    sleep 10;
    0x802CFD30(0, 5, 4, 2, 1, 0);
    SetNpcAnimation(0, 0x66001E);
    sleep 12;
    0x802CFD30(0, 0, 0, 0, 0, 0);
    SetNpcAnimation(0, 0x660004);
    sleep 10;
    SpeakToPlayer(0, 0x660002, 0x660004, 0, 0xC00F4);
    SetNpcPos(1, 0xFFFFFFE0, 0, 0);
    NpcMoveTo(1, 0xFFFFFFC0, 0, 10);
    SpeakToPlayer(1, 0x660102, 0x660104, 0, 0xC00F5);
    NpcMoveTo(1, 0, 0, 10);
    InterpNpcYaw(0, 0xFFFFFFF6, 4);
    NpcMoveTo(0, 0, 0, 10);
    sleep 30;
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(0, 2, 1);
    SetNpcFlagBits(0, 16, 0);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    SetNpcPos(2, 0, 0xFFFFFC18, 0);
    SetNpcPos(3, 0, 0xFFFFFC18, 0);
    ShowMessageAtScreenPos(0xC00F6, 300, 100);
    ShowMessageAtScreenPos(0xC00F7, 300, 100);
    ShowMessageAtScreenPos(0xC00F8, 300, 100);
    PlaySoundAt(482, 0, 0, 0, 0);
    ShakeCam(0, 0, 20, 1.0);
    ShowMessageAtScreenPos(0xC00F9, 300, 100);
    sleep 30;
    ShowMessageAtScreenPos(0xC00FA, 300, 100);
    sleep 30;
    ShowMessageAtScreenPos(0xC00FB, 300, 100);
    sleep 10;
    ShowMessageAtScreenPos(0xC00FC, 300, 100);
    UseSettingsFrom(0, 0xFFFFFF60, 0, 0);
    SetPanTarget(0, 0xFFFFFF60, 0, 0);
    SetCamSpeed(0, 0.2001953125);
    PanToTarget(0, 0, 1);
    SI_AREA_FLAG(13) = 1;
    sleep 60;
    DisablePlayerInput(0);
    SetNpcPos(0, 0xFFFFFF65, 0, 0);
    StartBossBattle(9);
});

Script N(script_80241870) = SCRIPT({

});

Script N(script_80241880) = SCRIPT({

});

Script N(script_80241890) = SCRIPT({
    SetEncounterStatusFlags(2, 1);
    DisablePlayerInput(1);
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(0, 2, 0);
    SetNpcFlagBits(0, 16, 1);
    SetMusicTrack(0, 81, 0, 8);
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            PanToTarget(0, 0, 0);
            SetCamSpeed(0, 90.0);
            EnableGroup(38, 0);
            SetNpcPos(0, 0xFFFFFF56, 30, 0xFFFFFFC9);
            SetNpcPos(1, 0xFFFFFF6A, 30, 55);
            SetNpcPos(2, 0xFFFFFF7E, 30, 0xFFFFFFC9);
            SetNpcPos(3, 0xFFFFFF92, 30, 55);
            SetNpcAnimation(0, 0x66001C);
            SetNpcAnimation(1, 0x66011C);
            SetNpcAnimation(2, 0x66021C);
            SetNpcAnimation(3, 0x66031C);
            sleep 1;
            spawn {
                sleep 30;
                ShowMessageAtScreenPos(0xC010B, 160, 40);
            }
            SetNpcJumpscale(0, 0.30078125);
            SetNpcJumpscale(1, 0.30078125);
            SetNpcJumpscale(2, 0.30078125);
            SetNpcJumpscale(3, 0.30078125);
            spawn {
                NpcJump0(0, 0xFFFFFF56, 0xFFFFFE70, 0xFFFFFF38, 75);
            }
            spawn {
                NpcJump0(1, 0xFFFFFF6A, 0xFFFFFE70, 200, 75);
            }
            spawn {
                NpcJump0(2, 0xFFFFFF7E, 0xFFFFFE70, 0xFFFFFF38, 75);
            }
            spawn {
                NpcJump0(3, 0xFFFFFF92, 0xFFFFFE70, 200, 75);
            }
            spawn {
                sleep 165;
                spawn N(script_80240950);
                sleep 1;
                DisablePlayerInput(0);
            }
            sleep 120;
            PlaySoundAt(482, 0, 0, 0, 0);
            ShakeCam(0, 0, 15, 0.5);
            sleep 15;
            SI_SAVE_FLAG(663) = 1;
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_80241C6C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB2) {
        RemoveNpc(-1);
        return;
    }
});

Script N(script_80241CAC) = SCRIPT({

});

Script N(script_NpcAI_80241CBC) = SCRIPT({

});

Script N(script_80241CCC) = SCRIPT({

});

Script N(script_80241CDC) = SCRIPT({

});

Script N(script_80241CEC) = SCRIPT({

});

Script N(script_80241CFC) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB2) {
        RemoveNpc(-1);
        return;
    }
});

Script N(script_80241D3C) = SCRIPT({

});

Script N(script_NpcAI_80241D4C) = SCRIPT({

});

Script N(script_80241D5C) = SCRIPT({

});

Script N(script_80241D6C) = SCRIPT({

});

Script N(script_80241D7C) = SCRIPT({

});

Script N(script_80241D8C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB2) {
        RemoveNpc(-1);
        return;
    }
});

Script N(script_80241DCC) = SCRIPT({

});

Script N(script_NpcAI_80241DDC) = SCRIPT({

});

Script N(script_80241DEC) = SCRIPT({

});

Script N(script_80241DFC) = SCRIPT({

});

Script N(script_80241E0C) = SCRIPT({

});

NpcSettings N(npcSettings_80241E1C) = {
    .unk_00 = { 0, 0x66, 0, 0x2 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = &N(script_80241120),
    .onInteract = &N(script_80241880),
    .ai = &N(script_NpcAI_80241170),
    .onHit = &N(script_80241870),
    .aux = &N(script_80241160),
    .onDefeat = &N(script_80241890),
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241E48) = {
    .unk_00 = { 0, 0x66, 0x1, 0x2 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = &N(script_80241C6C),
    .onInteract = &N(script_80241CDC),
    .ai = &N(script_NpcAI_80241CBC),
    .onHit = &N(script_80241CCC),
    .aux = &N(script_80241CAC),
    .onDefeat = &N(script_80241CEC),
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241E74) = {
    .unk_00 = { 0, 0x66, 0x2, 0x2 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = &N(script_80241CFC),
    .onInteract = &N(script_80241D6C),
    .ai = &N(script_NpcAI_80241D4C),
    .onHit = &N(script_80241D5C),
    .aux = &N(script_80241D3C),
    .onDefeat = &N(script_80241D7C),
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241EA0) = {
    .unk_00 = { 0, 0x66, 0x3, 0x2 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = &N(script_80241D8C),
    .onInteract = &N(script_80241DFC),
    .ai = &N(script_NpcAI_80241DDC),
    .onHit = &N(script_80241DEC),
    .aux = &N(script_80241DCC),
    .onDefeat = &N(script_80241E0C),
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80241ECC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241E1C),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00840D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00660004, 0x00660002, 0x00660003, 0x00660003, 0x00660004, 0x00660004, 0x0066000A, 0x0066000A, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241E48),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00840D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00660104, 0x00660102, 0x00660103, 0x00660103, 0x00660104, 0x00660104, 0x0066010A, 0x0066010A, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241E74),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00840D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00660204, 0x00660202, 0x00660203, 0x00660203, 0x00660204, 0x00660204, 0x0066020A, 0x0066020A, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241EA0),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00840D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00660304, 0x00660302, 0x00660303, 0x00660303, 0x00660304, 0x00660304, 0x0066030A, 0x0066030A, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303,
        },
    },
};

NpcGroupList N(npcGroupList_8024268C) = {
    NPC_GROUP(N(npcGroup_80241ECC), 0x07000000),
    {},
};

s32 pad_0026A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802426B0) = SCRIPT({

});

Script N(script_802426C0) = SCRIPT({
    EnableGroup(15, 0);
    EnableGroup(5, 0);
    EnableGroup(1, 0);
    EnableGroup(25, 0);
    EnableGroup(21, 0);
    EnableGroup(35, 0);
    EnableGroup(37, 0);
    EnableModel(26, 0);
    EnableModel(27, 0);
    EnableModel(28, 0);
    EnableModel(30, 0);
    EnableModel(31, 0);
    EnableModel(32, 0);
});

Script N(script_802427D4) = SCRIPT({
    TranslateGroup(15, SI_VAR(0), 0, 0);
    TranslateGroup(5, SI_VAR(0), 0, 0);
    TranslateGroup(1, SI_VAR(0), 0, 0);
    TranslateGroup(25, SI_VAR(0), 0, 0);
    TranslateGroup(21, SI_VAR(0), 0, 0);
    TranslateGroup(35, SI_VAR(0), 0, 0);
    TranslateGroup(37, SI_VAR(0), 0, 0);
    TranslateModel(26, SI_VAR(0), 0, 0);
    TranslateModel(27, SI_VAR(0), 0, 0);
    TranslateModel(28, SI_VAR(0), 0, 0);
    TranslateModel(30, SI_VAR(0), 0, 0);
    TranslateModel(31, SI_VAR(0), 0, 0);
    TranslateModel(32, SI_VAR(0), 0, 0);
});

Script N(script_80242950) = SCRIPT({
    SI_VAR(0) = 100;
    await N(script_802427D4);
    SI_AREA_FLAG(13) = 0;
0:
    if (SI_AREA_FLAG(13) == 0) {
        sleep 1;
        goto 0;
    }
    MakeLerp(100, 0xFFFFFF9C, 60, 4);
    PlaySoundAt(958, 0, 50, 0, 0);
10:
    UpdateLerp();
    await N(script_802427D4);
    if (SI_VAR(1) != 0) {
        goto 10;
    }
});

Script N(script_80242A4C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFB2) {
        spawn N(script_802426C0);
    } else {
        spawn N(script_80242950);
    }
});

s32 pad_002A94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: jtbl_80242AA0_9C53B0

// rodata: D_80242AB4_9C53C4

// rodata: D_80242ABC_9C53CC

// rodata: D_80242AC4_9C53D4

s32 pad_002ACC[] = {
    0x00000000,
};
