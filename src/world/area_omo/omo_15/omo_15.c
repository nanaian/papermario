#include "omo_15.h"

s32 pad_0007F4[3];
Script N(script_80240850);
Script N(script_802408E0);
Script N(script_ExitWalk_80240D78);
Script N(script_80240DD4);
Script N(main);
s32 pad_000EF4[3];
s32 N(intTable_80240F2C)[27];
Script N(script_80240F98);
s32 N(unk_8024157C)[31];
s32 N(unk_802415F8)[22];
s32 N(unk_80241650)[29];
s32 N(unk_802416C4)[29];
s32 N(unk_80241738)[26];
s32 N(unk_802417A0)[23];
s32 N(unk_802417FC)[37];
s32 N(intTable_80241890)[9];
s32 N(intTable_802418B4)[1];
s32 N(intTable_802418B8)[27];
s32 N(intTable_80241924)[3];
Script N(script_Idle_80241930);
Script N(script_80241AC4);
Script N(script_Defeat_80242084);
s32 N(intTable_80242200)[27];
Script N(script_Init_8024226C);
Script N(script_Init_8024234C);
StaticNpc N(npcGroup_802423AC)[10];
NpcGroupList N(npcGroupList_8024370C);
s32 pad_003724[3];
const char D_80243744_DEBEB4[8]; // "kmr_23"
const char D_8024374C_DEBEBC[8]; // "omo_14"
s32 pad_003754[3];

// text: func_80240000_DE8770

// text: func_8024004C_DE87BC

// text: func_802401AC_DE891C

// text: func_802405BC_DE8D2C

// text: func_802405FC_DE8D6C

// text: func_80240708_DE8E78

s32 pad_0007F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -290.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900E7,
};

Script N(script_80240850) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 4 {
            SetMusicTrack(0, 86, 0, 8);
        }
        == 4 {
            FadeOutMusic(0, 500);
        }
        else {
            SetMusicTrack(0, 32, 0, 8);
        }
    }
});

Script N(script_802408E0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 3 {
            SI_VAR(0) = 0;
            SI_SAVE_VAR(0) = 4;
        }
        == 4 {
            SI_VAR(0) = 1;
        }
        else {
            return;
        }
    }
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 0xFFFFFF9C, 85, 0);
        SetCamSpeed(0, 0.5);
        SetPanTarget(0, 0xFFFFFF9C, 30, 0);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_8024004C_DE87BC(3, 180, 215, 60, 0, 0xFFFFFF9C, 85, 0, 30, 0);
        spawn {
            func_802401AC_DE891C();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_80240000_DE8770();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 0xFFFFFF9C, 85, 0);
        }
        spawn {
            sleep 45;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 180;
            sleep 115;
            PlaySoundAt(311, 0, 0xFFFFFF9C, 85, 0);
        }
        func_802405BC_DE8D2C(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 0xFFFFFF9C, 0, 0);
        func_802405BC_DE8D2C(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 4.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_802405FC_DE8D6C(3, 0xFFFFFF9C, 30, 0, 0);
        spawn {
            func_80240708_DE8E78();
        }
        sleep 1;
    }
    func_802405BC_DE8D2C(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    SI_SAVE_VAR(0) = 5;
    GotoMapSpecial(D_80243744_DEBEB4, 3, 14);
    sleep 100;
});

Script N(script_ExitWalk_80240D78) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_8024374C_DEBEBC, 1);
    sleep 100;
});

Script N(script_80240DD4) = SCRIPT({
    bind N(script_ExitWalk_80240D78) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_8024370C));
    await N(script_80240850);
    SI_VAR(0) = N(script_80240DD4);
    spawn EnterWalk;
    if (SI_SAVE_VAR(0) == 4) {
        spawn N(script_802408E0);
    }
});

s32 pad_000EF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240F00) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

s32 N(intTable_80240F2C)[] = {
    0x00000008, 0xFFFFFFDD, 0xFFFFFF10, 0x00000007, 0xFFFFFFFB, 0xFFFFFF4C, 0x00000006, 0x0000000A,
    0xFFFFFF88, 0x00000006, 0x00000019, 0xFFFFFFC4, 0x00000006, 0x00000019, 0x0000003C, 0x00000006,
    0x0000000A, 0x00000078, 0x00000007, 0xFFFFFFFB, 0x000000B4, 0x00000008, 0xFFFFFFDD, 0x000000F0,
    0x00000006, 0x0000001E, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80240F98) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
        SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_CALL, 0x802D2B6C),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
            SI_CMD(ScriptOpcode_CALL, 0x802D2C14, 1),
            SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 256, 1),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
            SI_CMD(ScriptOpcode_CALL, 0x802D2C14, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x76000A, 0x760002, 0, 0xF005F),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 250, 0xFFFFFFCE, 10),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 250, 0xFFFFFFCE, 10),
    SI_CMD(ScriptOpcode_CALL, SetCamPosB, 0, SI_FIXED(205.0), SI_FIXED(11.0)),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x76000A, 0x760002, 0, 0xF0060),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x76000A, 0x760002, 0, 0xF0061),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x76000A, 0x760002, 0, 0xF0062),
    SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, 0xFFFFFF38, 0, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_LOOP, 9),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, SI_VAR(0), 0x3B0002),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x76000C),
    SI_CMD(ScriptOpcode_CALL, ShowMessageAtScreenPos, 0xF0063, 160, 40),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x760002),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_LOOP, 9),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, SI_VAR(0), 0x3B0001),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x760002, 0x76000A, 0, 0xF0064),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 0x8000004D),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_LOOP, 9),
            SI_CMD(ScriptOpcode_CALL, SetNpcVar, SI_VAR(0), 0, 10),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_LOOP, 30),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, SI_FIXED(330.0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, SI_FIXED(320.0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240F2C)),
    SI_CMD(ScriptOpcode_LOOP, 9),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, SI_VAR(0), SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(0), SI_VAR(2), 0, SI_VAR(3)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, ResetCam, 0, SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_LABEL, 5),
    SI_CMD(ScriptOpcode_CALL, GetNpcVar, 9, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 40),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_GOTO, 5),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, GetCurrentPartnerID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 6),
        SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0xFFFFFFFC, 264, 262, 0, 0xF0075),
        SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, InterpPlayerYaw, 90, 0),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 150, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(2.5)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, FadeOutMusic, 0, 3000),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802408E0)),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_8024157C)[] = {
    0x00000001, 0x00000041, 0x00000000, 0x00000057, 0x00000000, 0x00000011, 0x0000002E, 0x00000001,
    0xFFFFFFE8, 0x00000000, 0xFFFFFFF5, 0x00000000, 0xFFFFFFC1, 0xFFFFFFF0, 0x00000000, 0xFFFFFF88,
    0x0000002B, 0x00000001, 0xFFFFFF54, 0x00000000, 0x00000019, 0x00000000, 0xFFFFFF16, 0x00000017,
    0x00000000, 0xFFFFFEC0, 0x0000001E, 0x00000000, 0xFFFFFE70, 0x00000000, 0xFFFFFFFF,
};

s32 N(unk_802415F8)[] = {
    0x00000000, 0x0000001D, 0xFFFFFFB8, 0x00000000, 0xFFFFFFED, 0xFFFFFF98, 0x00000000, 0xFFFFFFC4,
    0xFFFFFFBD, 0x00000000, 0xFFFFFF96, 0xFFFFFFCE, 0x00000000, 0xFFFFFF58, 0xFFFFFF9C, 0x00000000,
    0xFFFFFEE9, 0xFFFFFFEC, 0x00000000, 0xFFFFFE70, 0x00000000, 0xFFFFFFFF,
};

s32 N(unk_80241650)[] = {
    0x00000001, 0xFFFFFFE2, 0x00000000, 0x0000001B, 0x00000000, 0xFFFFFF85, 0xFFFFFFF3, 0x00000000,
    0xFFFFFF58, 0x00000049, 0x00000000, 0xFFFFFF88, 0x00000067, 0x00000000, 0xFFFFFF65, 0x00000015,
    0x00000000, 0xFFFFFF30, 0x0000002B, 0x00000000, 0xFFFFFF00, 0x00000054, 0x00000000, 0xFFFFFEBA,
    0x0000002A, 0x00000000, 0xFFFFFE70, 0x00000000, 0xFFFFFFFF,
};

s32 N(unk_802416C4)[] = {
    0x00000000, 0x00000085, 0xFFFFFFFD, 0x00000000, 0x00000054, 0x0000001B, 0x00000000, 0x00000019,
    0x00000000, 0x00000000, 0xFFFFFFE1, 0xFFFFFFE9, 0x00000000, 0xFFFFFF9F, 0x00000000, 0xFFFFFFCE,
    0x00000000, 0xFFFFFF6A, 0xFFFFFFB5, 0x00000000, 0xFFFFFF1A, 0xFFFFFFA6, 0x00000000, 0xFFFFFECB,
    0xFFFFFFC9, 0x00000000, 0xFFFFFE70, 0x00000000, 0xFFFFFFFF,
};

s32 N(unk_80241738)[] = {
    0x00000000, 0xFFFFFFD8, 0x000000C8, 0x00000000, 0xFFFFFF9C, 0x00000100, 0x00000000, 0xFFFFFF4C,
    0x0000010E, 0x00000000, 0xFFFFFF2E, 0x000000C8, 0x00000000, 0xFFFFFF4D, 0x00000066, 0x00000001,
    0xFFFFFF59, 0x00000000, 0x00000034, 0x00000000, 0xFFFFFEFB, 0x00000076, 0x00000000, 0xFFFFFE70,
    0x00000000, 0xFFFFFFFF,
};

s32 N(unk_802417A0)[] = {
    0x00000000, 0xFFFFFF9F, 0xFFFFFFE8, 0x00000000, 0xFFFFFFE7, 0x0000012C, 0x00000000, 0x00000064,
    0x00000000, 0x00000000, 0xFFFFFFCE, 0x00000032, 0x00000000, 0xFFFFFF9C, 0x0000001E, 0x00000000,
    0xFFFFFF60, 0x0000003F, 0x00000002, 0x00000000, 0xFFFFFE70, 0x00000000, 0xFFFFFFFF,
};

s32 N(unk_802417FC)[] = {
    0x00000000, 0xFFFFFF67, 0x00000000, 0x00000000, 0xFFFFFF56, 0x00000046, 0x00000000, 0xFFFFFF30,
    0x00000050, 0x00000000, 0xFFFFFF0A, 0x00000046, 0x00000000, 0xFFFFFEF9, 0x00000000, 0x00000000,
    0xFFFFFF0A, 0xFFFFFFBA, 0x00000000, 0xFFFFFF30, 0xFFFFFFB0, 0x00000000, 0xFFFFFF56, 0xFFFFFFBA,
    0x00000000, 0xFFFFFF67, 0x00000000, 0x00000000, 0xFFFFFF56, 0x00000046, 0x00000000, 0xFFFFFF30,
    0x00000050, 0x00000000, 0xFFFFFE70, 0x00000000, 0xFFFFFFFF,
};

s32 N(intTable_80241890)[] = {
    N(unk_8024157C), N(unk_802415F8), N(unk_80241650), N(unk_802416C4), N(unk_80241738), N(unk_802415F8), N(unk_8024157C), N(unk_802416C4),
    N(unk_802417A0),
};

s32 N(intTable_802418B4)[] = {
    N(unk_802417FC),
};

s32 N(intTable_802418B8)[] = {
    0xFFFFFF12, 0xFFFFFFC9, 0x00000000, 0xFFFFFF26, 0xFFFFFFC4, 0x00000000, 0xFFFFFF3A, 0xFFFFFFC4,
    0x00000000, 0xFFFFFF4E, 0xFFFFFFCE, 0x00000000, 0xFFFFFF4E, 0x00000023, 0x00000000, 0xFFFFFF40,
    0x00000032, 0x00000000, 0xFFFFFF2E, 0x0000003C, 0x00000000, 0xFFFFFF1C, 0x00000037, 0x00000000,
    0xFFFFFF5B, 0xFFFFFFF6, 0x00000000,
};

s32 N(intTable_80241924)[] = {
    0xFFFFFF4A, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80241930) = {
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 10),
            SI_CMD(ScriptOpcode_SPAWN_THREAD),
                SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(0)),
                SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802418B8)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, -1, 0x3B0003),
                SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, -1, SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_CALL, NpcMoveTo, -1, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 60),
            SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 9),
                SI_CMD(ScriptOpcode_SPAWN_THREAD),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                    SI_CMD(ScriptOpcode_CALL, StopSound, 0x8000004D),
                SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
                SI_CMD(ScriptOpcode_CALL, StartBossBattle, 12),
            SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241AC4) = {
    SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(9)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 0),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 0x8000004D),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802418B4)),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, SI_VAR(9), 0x76000E),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_MATCH, SI_VAR(2)),
                SI_CMD(ScriptOpcode_CASE_EQ, 0),
                    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(8.0)),
                    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(3), SI_VAR(4), 0),
                SI_CMD(ScriptOpcode_CASE_EQ, 1),
                    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(3), SI_VAR(4), SI_VAR(5)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(1.0)),
                    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), -1),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 1901),
        SI_CMD(ScriptOpcode_CALL, 0x802D62E4, 877),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(9)),
        SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241890)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_MATCH, SI_VAR(2)),
                SI_CMD(ScriptOpcode_CASE_EQ, 0),
                    SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, SI_VAR(9), 0x3B0004),
                    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, SI_VAR(9), SI_FIXED(8.0)),
                    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, SI_VAR(9), SI_VAR(3), SI_VAR(4), 0),
                SI_CMD(ScriptOpcode_CASE_EQ, 1),
                    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(3), SI_VAR(4), SI_VAR(5)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, SI_VAR(9), SI_FIXED(1.0)),
                    SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(9), SI_VAR(3), SI_VAR(4), SI_VAR(5), 10),
                SI_CMD(ScriptOpcode_CASE_EQ, 2),
                    SI_CMD(ScriptOpcode_CALL, 0x802CDE68, SI_VAR(9), 10),
                    SI_CMD(ScriptOpcode_SPAWN_THREAD),
                        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 0),
                        SI_CMD(ScriptOpcode_LOOP, 10),
                            SI_CMD(ScriptOpcode_ADD, SI_VAR(3), 9),
                            SI_CMD(ScriptOpcode_CALL, SetNpcRotation, SI_VAR(9), 0, 0, SI_VAR(3)),
                            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                        SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
                    SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(9), 0xFFFFFF4C, 0, 63, 4),
                    SI_CMD(ScriptOpcode_SPAWN_THREAD),
                        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
                        SI_CMD(ScriptOpcode_CALL, SetNpcRotation, SI_VAR(9), 0, 0, 0),
                        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, SI_VAR(9), 0x3B0010),
                        SI_CMD(ScriptOpcode_CALL, PlayerFaceNpc, SI_VAR(9), 3),
                        SI_CMD(ScriptOpcode_CALL, NpcFaceNpc, 0xFFFFFFFC, SI_VAR(9), 3),
                    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
                    SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(9), 0xFFFFFF24, 0, 63, 10),
                    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, SI_VAR(9), 995, 0),
                    SI_CMD(ScriptOpcode_CALL, ShakeCam, 0, 0, 5, SI_FIXED(1.0)),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 50),
                    SI_CMD(ScriptOpcode_LOOP, 2),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, SI_VAR(9), 996, 0),
                        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 7),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
                    SI_CMD(ScriptOpcode_CALL, 0x802CDE68, SI_VAR(9), 0),
                    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, SI_VAR(9), 0x3B0001),
                    SI_CMD(ScriptOpcode_CALL, NpcJump0, SI_VAR(9), 0xFFFFFF1A, 0, 63, 10),
                    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, SI_VAR(9), 90, 0),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                    SI_CMD(ScriptOpcode_SPAWN_THREAD),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, SI_VAR(9), 930, 0),
                        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
                        SI_CMD(ScriptOpcode_CALL, StopSound, 930),
                        SI_CMD(ScriptOpcode_CALL, SetNpcVar, 9, 0, 40),
                    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), -1),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, SI_VAR(9), 512, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(9), 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Defeat_80242084) = {
    SI_CMD(ScriptOpcode_CALL, GetBattleOutcome, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 32, 0, 8),
            SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_CALL, SetEncounterStatusFlags, 2, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802418B8)),
                SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_LOOP, 9),
                    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(0), SI_VAR(1), 0, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, SI_VAR(0), 0),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241924)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80241AC4)),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(intTable_80242200)[] = {
    0x0000008C, 0x00000013, 0x00000005, 0x00000093, 0x00000013, 0x00000020, 0x0000009A, 0x00000013,
    0x0000003B, 0x000000A1, 0x00000013, 0x00000056, 0x00000064, 0x00000000, 0x0000001E, 0x0000006A,
    0x00000000, 0x00000037, 0x00000070, 0x00000000, 0x00000050, 0x00000076, 0x00000000, 0x00000069,
    0x0000007C, 0x00000000, 0x00000082,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Init_8024226C) = {
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 4),
        SI_CMD(ScriptOpcode_CALL, BindNpcIdle, -1, N(script_Idle_80241930)),
        SI_CMD(ScriptOpcode_CALL, BindNpcDefeat, -1, N(script_Defeat_80242084)),
        SI_CMD(ScriptOpcode_CALL, GetSelfNpcID, SI_VAR(0)),
        SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242200)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RemoveNpc, -1),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_8024234C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 4) {
        spawn N(script_80240F98);
        BindNpcDefeat(-1, N(script_Defeat_80242084));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802423AC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240F00),
        .pos = { 187.0, 38.0, 20.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024234C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002, 0x00760002,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 9,
        .settings = &N(npcSettings_80240F00),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00041705,
        .init = N(script_Init_8024226C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

NpcGroupList N(npcGroupList_8024370C) = {
    NPC_GROUP(N(npcGroup_802423AC), 0x11000000),
    {},
};

s32 pad_003724[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: jtbl_80243730_DEBEA0

// rodata: D_80243744_DEBEB4

// rodata: D_8024374C_DEBEBC

s32 pad_003754[] = {
    0x00000000, 0x00000000, 0x00000000,
};
