#include "kmr_00.h"

s32 pad_000D6C[1];
Script N(script_80240DC0);
s32 pad_000E14[3];
Script N(script_ExitWalk_80240E20);
Script N(script_80240E7C);
Script N(main);
s32 pad_001044[3];
Script N(script_80241050);
s32 pad_002CA8[2];
s32 unk_missing_80242CDC[22];
s32 N(shortTable_80242D60)[4];
Script N(script_Aux_80242D70);
Script N(script_Init_8024303C);
Script N(script_Init_8024309C);
StaticNpc N(npcGroup_802430D4)[1];
StaticNpc N(npcGroup_802432C4)[7];
NpcGroupList N(npcGroupList_80244054);
s32 pad_004078[2];
Script N(script_MakeEntities);
s32 pad_0040C8[2];
const char D_802440D0_8B0060[8]; // "kmr_02"
const char D_802440D8_8B0068[8]; // "kmr_02"

// text: func_80240000_8ABF90

// text: func_80240388_8AC318

// text: func_802403B8_8AC348

// text: func_802404A0_8AC430

// text: func_802404E8_8AC478

// text: func_80240530_8AC4C0

// text: func_80240584_8AC514

// text: func_802405A8_8AC538

// text: func_802405CC_8AC55C

// text: func_802405F0_8AC580

// text: func_80240BD8_8ACB68

// text: func_80240CB0_8ACC40

s32 pad_000D6C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 485.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190039,
};

Script N(script_80240DC0) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFF81) {
        SetMusicTrack(0, 16, 0, 8);
        PlayAmbientSounds(12);
    }
});

s32 pad_000E14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240E20) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802440D0_8B0060, 1);
    sleep 100;
});

Script N(script_80240E7C) = SCRIPT({
    bind N(script_ExitWalk_80240E20) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 30;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_SAVE_FLAG(1966) = 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFF82) {
        MakeNpcs(0, N(npcGroupList_80244054));
        ClearDefeatedEnemies();
    }
    await N(script_MakeEntities);
    spawn N(script_80240DC0);
    spawn N(script_80241050);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF80 {
            EnableModel(2, 0);
            spawn N(script_80240E7C);
        }
        >= 0xFFFFFF81 {
            EnableModel(0, 0);
            EnableModel(1, 0);
            SI_VAR(0) = N(script_80240E7C);
            spawn EnterWalk;
        }
    }
    sleep 1;
});

s32 pad_001044[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241050) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFF81) {
        EnableModel(56, 0);
        EnableModel(58, 0);
        EnableModel(52, 0);
        EnableModel(54, 0);
        EnableModel(60, 0);
        EnableModel(64, 0);
        EnableModel(61, 0);
        EnableModel(62, 0);
        EnableModel(65, 0);
        EnableModel(66, 0);
        EnableModel(67, 0);
        return;
    }
    SI_MAP_VAR(1) = 0.0;
    func_80240388_8AC318();
    func_80240000_8ABF90(255, 255, 255, 60, 60, 60, 0);
    FadeOutMusic(0, 500);
    SetPlayerFlagBits(0x200000, 1);
    InterpPlayerYaw(90, 0);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    PlayAmbientSounds(12);
    UseSettingsFrom(0, 0, 0, 0);
    SetCamPitch(0, 6.0, -7.5);
    SetCamDistance(0, 0xFFFFFDE4);
    SetCamSpeed(0, 90.0);
    SetPanTarget(0, 0, 15, 0);
    PanToTarget(0, 0, 1);
    sleep 1;
    func_802D4D14(180);
    SetPlayerPos(0, 2, 0);
    SetPlayerAnimation(0x1000F);
    sleep 60;
    SetCamSpeed(0, 0.7001953125);
    SetCamDistance(0, 0xFFFFFEA2);
    PanToTarget(0, 0, 1);
    spawn {
        sleep 2;
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop 90 {
            TranslateModel(52, SI_VAR(0), 0, 0);
            TranslateModel(54, SI_VAR(1), 0, 0);
            SI_VAR(0) += -0.6591796875;
            SI_VAR(1) += 0.66015625;
            sleep 1;
        }
    }
    spawn {
        sleep 20;
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop 120 {
            TranslateModel(56, SI_VAR(0), 0, 0);
            TranslateModel(58, SI_VAR(1), 0, 0);
            TranslateModel(64, SI_VAR(1), 0, 0);
            TranslateModel(65, SI_VAR(1), 0, 0);
            TranslateModel(66, SI_VAR(1), 0, 0);
            TranslateModel(67, SI_VAR(1), 0, 0);
            SI_VAR(0) += -0.75;
            SI_VAR(1) += 0.75;
            sleep 1;
        }
    }
    spawn {
        sleep 10;
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop 120 {
            TranslateModel(60, SI_VAR(0), 0, 0);
            TranslateModel(61, SI_VAR(0), 0, 0);
            TranslateModel(62, SI_VAR(0), 0, 0);
            RotateModel(60, SI_VAR(1), 0, 1, 0);
            RotateModel(61, SI_VAR(1), 0, 1, 0);
            RotateModel(62, SI_VAR(1), 0, 1, 0);
            SI_VAR(0) += -0.19921875;
            SI_VAR(1) += -0.3994140625;
            sleep 1;
        }
    }
    sleep 140;
    func_80240584_8AC514();
    sleep 30;
    SetMusicTrack(0, 120, 0, 8);
    spawn {
        func_80240000_8ABF90(50, 50, 50, 0, 0, 0, 50);
    }
    sleep 90;
    func_802D4D88();
    spawn {
        func_802405F0_8AC580(1, 0, 180);
    }
    spawn {
        func_802405F0_8AC580(2, 1, 30);
    }
    spawn {
        func_802405F0_8AC580(3, 2, 90);
    }
    spawn {
        func_802405F0_8AC580(4, 3, 150);
    }
    spawn {
        func_802405F0_8AC580(5, 4, 0);
    }
    spawn {
        func_802405F0_8AC580(6, 5, 60);
    }
    spawn {
        func_802405F0_8AC580(7, 6, 120);
    }
    spawn {
        sleep 330;
        MakeLerp(6000, 0x2EE0, 120, 0);
    25:
        UpdateLerp();
        func_802404E8_8AC478();
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 25;
        }
    }
    sleep 550;
    GetNpcPos(7, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    GetNpcPos(2, SI_VAR(9), SI_VAR(10), SI_VAR(11));
    sleep 15;
    SetCamSpeed(0, 3.0);
    SetCamDistance(0, 0xFFFFFF38);
    PanToTarget(0, 0, 1);
    spawn {
        SetNpcAnimation(7, 0x180004);
        NpcFlyTo(7, 20, 10, 0xFFFFFFFB, 25, 0xFFFFFFF6, 4);
        sleep 10;
        SetNpcAnimation(7, 0x180006);
        sleep 35;
        SetNpcAnimation(7, 0x180005);
    }
    spawn {
        loop 3 {
            func_80240530_8AC4C0(7);
            sleep 6;
        }
    }
    sleep 10;
    spawn {
        func_80240530_8AC4C0(2);
        SetNpcAnimation(2, 0x130004);
        NpcFlyTo(2, 0xFFFFFFEC, 10, 0xFFFFFFFB, 25, 0xFFFFFFF6, 4);
        sleep 5;
        SetNpcAnimation(2, 0x130006);
        sleep 30;
        SetNpcAnimation(2, 0x130005);
    }
    spawn {
        loop 3 {
            func_80240530_8AC4C0(2);
            sleep 6;
        }
    }
    sleep 35;
    SpeakToPlayer(2, 0x130002, 0x130001, 5, 0xB0000);
    sleep 15;
    SpeakToPlayer(7, 0x130002, 0x130001, 5, 0xB0001);
    sleep 3;
    spawn {
        SetNpcAnimation(7, 0x180006);
        sleep 30;
        SetNpcAnimation(7, 0x180005);
        sleep 10;
        NpcFlyTo(7, SI_VAR(6), SI_VAR(7), SI_VAR(8), 15, 0xFFFFFFF6, 5);
        SetNpcAnimation(7, 0x180001);
    }
    spawn {
        sleep 40;
        SetCamSpeed(0, 3.0);
        SetCamDistance(0, 0xFFFFFEA2);
        PanToTarget(0, 0, 1);
        loop 3 {
            func_80240530_8AC4C0(7);
            sleep 4;
        }
    }
    spawn {
        SetNpcAnimation(2, 0x130006);
        sleep 30;
        SetNpcAnimation(2, 0x130005);
        sleep 10;
        NpcFlyTo(2, SI_VAR(9), SI_VAR(10), SI_VAR(11), 15, 0xFFFFFFF6, 5);
        SetNpcAnimation(2, 0x130001);
    }
    spawn {
        sleep 40;
        loop 3 {
            func_80240530_8AC4C0(2);
            sleep 4;
        }
    }
    sleep 90;
    SpeakToPlayer(1, 0x120002, 0x120002, 5, 0xB0002);
    sleep 15;
    spawn {
        SetNpcFlagBits(1, 0x400000, 0);
        SetNpcAnimation(1, 0x120003);
        SetNpcJumpscale(1, 3.2001953125);
        GetNpcPos(1, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        NpcJump0(1, SI_VAR(6), SI_VAR(7), SI_VAR(8), 5);
        SetNpcAnimation(1, 0x120001);
        PlaySoundAtPlayer(0xB000001F, 0);
        func_802403B8_8AC348(0, 0, 0, 3, 10);
    }
    spawn {
        sleep 20;
        SetNpcAnimation(2, 0x130003);
        SetNpcFlagBits(2, 0x400000, 0);
        SetNpcJumpscale(2, 3.2001953125);
        GetNpcPos(2, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        NpcJump0(2, SI_VAR(6), SI_VAR(7), SI_VAR(8), 5);
        SetNpcAnimation(2, 0x130001);
    }
    spawn {
        sleep 21;
        SetNpcAnimation(3, 0x140003);
        SetNpcFlagBits(3, 0x400000, 0);
        SetNpcJumpscale(3, 3.2001953125);
        GetNpcPos(3, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        NpcJump0(3, SI_VAR(6), SI_VAR(7), SI_VAR(8), 5);
        SetNpcAnimation(3, 0x140001);
    }
    spawn {
        sleep 22;
        SetNpcAnimation(4, 0x150003);
        SetNpcFlagBits(4, 0x400000, 0);
        SetNpcJumpscale(4, 3.2001953125);
        GetNpcPos(4, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        NpcJump0(4, SI_VAR(6), SI_VAR(7), SI_VAR(8), 5);
        SetNpcAnimation(4, 0x150001);
    }
    spawn {
        sleep 20;
        SetNpcAnimation(5, 0x160003);
        SetNpcFlagBits(5, 0x400000, 0);
        SetNpcJumpscale(5, 3.2001953125);
        GetNpcPos(5, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        NpcJump0(5, SI_VAR(6), SI_VAR(7), SI_VAR(8), 5);
        SetNpcAnimation(5, 0x160001);
    }
    spawn {
        sleep 21;
        SetNpcAnimation(6, 0x170004);
        SetNpcFlagBits(6, 0x400000, 0);
        SetNpcJumpscale(6, 3.2001953125);
        GetNpcPos(6, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        NpcJump0(6, SI_VAR(6), SI_VAR(7), SI_VAR(8), 5);
        SetNpcAnimation(6, 0x170001);
    }
    spawn {
        sleep 22;
        SetNpcAnimation(7, 0x180003);
        SetNpcFlagBits(7, 0x400000, 0);
        SetNpcJumpscale(7, 3.2001953125);
        GetNpcPos(7, SI_VAR(6), SI_VAR(7), SI_VAR(8));
        NpcJump0(7, SI_VAR(6), SI_VAR(7), SI_VAR(8), 5);
        SetNpcAnimation(7, 0x180001);
    }
    sleep 30;
    spawn {
        sleep 45;
        PlaySoundAtPlayer(392, 0);
        func_802404A0_8AC430();
    }
    PlaySoundAtPlayer(0xB000001F, 0);
    func_802403B8_8AC348(0, 10, 10, 3, 10);
    sleep 6;
    PlaySoundAtPlayer(0xB000001F, 0);
    func_802403B8_8AC348(0, 0, 10, 3, 15);
    sleep 6;
    PlaySoundAtPlayer(0xB000001F, 0);
    func_802403B8_8AC348(0, 0xFFFFFFF6, 10, 3, 20);
    sleep 6;
    PlaySoundAtPlayer(0xB000001F, 0);
    func_802403B8_8AC348(0, 10, 10, 3, 25);
    sleep 6;
    loop 3 {
        PlaySoundAtPlayer(0xB000001F, 0);
        func_802403B8_8AC348(0, 0, 10, 3, 30);
        sleep 6;
        PlaySoundAtPlayer(0xB000001F, 0);
        func_802403B8_8AC348(0, 0xFFFFFFF6, 10, 3, 30);
        sleep 6;
        PlaySoundAtPlayer(0xB000001F, 0);
        func_802403B8_8AC348(0, 10, 10, 3, 30);
        sleep 6;
    }
    sleep 40;
    SpeakToPlayer(1, 0x120002, 0x120002, 5, 0xB0003);
    spawn {
        sleep 15;
        func_80240BD8_8ACB68(5);
        sleep 2;
        func_80240BD8_8ACB68(2);
        sleep 2;
        func_80240BD8_8ACB68(6);
        sleep 2;
        func_80240BD8_8ACB68(3);
        sleep 2;
        func_80240BD8_8ACB68(7);
        sleep 2;
        func_80240BD8_8ACB68(4);
        sleep 2;
        func_80240BD8_8ACB68(1);
    }
    FadeOutMusic(0, 5000);
    spawn {
        sleep 90;
        func_802405A8_8AC538();
    }
    sleep 60;
    func_80240000_8ABF90(255, 255, 255, 0, 0, 0, 50);
    SetNpcSpeed(0, 3.0);
    SetNpcFlagBits(0, 768, 1);
    SetNpcFlagBits(0, 72, 0);
    EnableNpcShadow(0, 1);
    SetNpcAnimation(0, 0x9E0005);
    SetNpcPos(0, 300, 0, 0);
    NpcMoveTo(0, 110, 0, 0);
    SetNpcAnimation(0, 0x9E0004);
    InterpNpcYaw(0, 90, 1);
    sleep 10;
    InterpNpcYaw(0, 270, 1);
    sleep 15;
    InterpNpcYaw(0, 90, 1);
    sleep 18;
    InterpNpcYaw(0, 270, 1);
    sleep 10;
    sleep 6;
    SetCamDistance(0, 200);
    SetCamPitch(0, 15, 0xFFFFFFF4);
    SetCamSpeed(0, 90.0);
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(3) += 0xFFFFFFEC;
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    sleep 25;
    SetNpcAnimation(0, 0x9E000F);
    PlaySoundAtNpc(0, 611, 0);
    ShowEmote(0, 2, 0, 20, 1, 0, 0, 0, 0);
    sleep 25;
    SetNpcAnimation(0, 0x9E0004);
    SpeakToPlayer(0, 0x9E000B, 0x9E0004, 5, 0xB0004);
    SetCamSpeed(0, 1);
    SetPanTarget(0, 0, 0, 0);
    SetNpcSpeed(0, 3.0);
    SetNpcAnimation(0, 0x9E0007);
    NpcMoveTo(0, 30, 0xFFFFFFF6, 0);
    sleep 2;
    SetNpcAnimation(0, 0x9E0010);
    sleep 15;
    SpeakToPlayer(0, 0x9E0010, 0x9E0010, 5, 0xB0005);
    SetNpcAnimation(0, 0x9E000B);
    NpcJump0(0, 30, 0, 0xFFFFFFF6, 4);
    sleep 5;
    SetNpcAnimation(0, 0x9E000F);
    NpcJump0(0, 30, 0, 0xFFFFFFF6, 4);
    sleep 10;
    SpeakToPlayer(0, 0x9E000B, 0x9E0004, 5, 0xB0006);
    SetNpcAnimation(0, 0x9E0007);
    SetNpcSpeed(0, 6.0);
    NpcMoveTo(0, 0xFFFFFFE2, 0xFFFFFFFB, 0);
    NpcFacePlayer(0, 5);
    SetNpcJumpscale(0, 4.0);
    NpcJump0(0, 0xFFFFFFE3, 0, 5, 4);
    SetNpcAnimation(0, 0x9E0007);
    SetNpcSpeed(0, 6.0);
    NpcMoveTo(0, 34, 5, 0);
    NpcFacePlayer(0, 5);
    SetNpcJumpscale(0, 4.0);
    NpcJump0(0, 33, 0, 5, 4);
    SetNpcAnimation(0, 0x9E0007);
    SetNpcSpeed(0, 6.0);
    NpcMoveTo(0, 0xFFFFFFE2, 5, 0);
    NpcFacePlayer(0, 5);
    SetNpcJumpscale(0, 4.0);
    NpcJump0(0, 0xFFFFFFE3, 0, 5, 4);
    SetNpcAnimation(0, 0x9E0007);
    SetNpcSpeed(0, 6.0);
    NpcMoveTo(0, 34, 5, 0);
    NpcFacePlayer(0, 5);
    SetNpcJumpscale(0, 4.0);
    NpcJump0(0, 33, 0, 5, 4);
    sleep 20;
    SpeakToPlayer(0, 0x9E000B, 0x9E0004, 5, 0xB0007);
    sleep 20;
    spawn {
        SetNpcSpeed(0, 4.0);
        NpcMoveTo(0, 450, 0, 0);
    }
    sleep 15;
    SpeakToPlayer(0, 0x9E000B, 0x9E0004, 5, 0xB0008);
    sleep 30;
    SI_SAVE_VAR(0) = 0xFFFFFF81;
    DisablePlayerPhysics(0);
    func_802405CC_8AC55C();
    GotoMapSpecial(D_802440D8_8B0068, 5, 10);
});

s32 pad_002CA8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242CB0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
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

s32 unk_missing_80242CDC[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80242D34) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
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

s32 N(shortTable_80242D60)[] = {
    0x00010003, 0x00050007, 0x00070005, 0x00030000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_Aux_80242D70) = {
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, func_80240CB0_8ACC40),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, RandInt, 100, SI_VAR(0)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
    SI_CMD(ScriptOpcode_USE_FLAGS, 1),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
        SI_CMD(ScriptOpcode_LABEL, 0),
        SI_CMD(ScriptOpcode_CALL, RandInt, 90, SI_VAR(0)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 30),
        SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_FIXED(10.0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CALL, RandInt, 100, SI_VAR(1)),
        SI_CMD(ScriptOpcode_IF_LT, SI_VAR(1), 80),
            SI_CMD(ScriptOpcode_SET, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_SET, SI_VAR(1), 2),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_FIXED(40.0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_FIXED(50.0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_FIXED(80.0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_FIXED(70.0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_FIXED(60.0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_FIXED(50.0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(100.0)),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_LOOP, 50),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_FIXED(0.80078125)),
        SI_CMD(ScriptOpcode_CALL, func_802CFD30, -1, 13, 0, SI_ARRAY(0), SI_MAP_VAR(1), SI_VAR(0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_LOOP, 50),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_FIXED(-0.7998046875)),
        SI_CMD(ScriptOpcode_CALL, func_802CFD30, -1, 13, 0, SI_ARRAY(0), SI_MAP_VAR(1), SI_VAR(0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_8024303C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    BindNpcAux(-1, N(script_Aux_80242D70));
    if (SI_SAVE_VAR(0) >= 0xFFFFFF81) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_8024309C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFF81) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802430D4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242D34),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024309C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x009E0001, 0x009E0005, 0x009E0007, 0x009E0007, 0x009E0001, 0x009E0001, 0x009E0000, 0x009E0000, 0x009E0007, 0x009E0007, 0x009E0007, 0x009E0007, 0x009E0007, 0x009E0007, 0x009E0007, 0x009E0007,
        },
    },
};

StaticNpc N(npcGroup_802432C4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242CB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024303C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120000, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80242CB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024303C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130000, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242CB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024303C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140000, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001, 0x00140001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80242CB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024303C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150000, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001, 0x00150001,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80242CB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024303C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80242CB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024303C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170000, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001, 0x00170001,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80242CB0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_8024303C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180000, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001, 0x00180001,
        },
    },
};

NpcGroupList N(npcGroupList_80244054) = {
    NPC_GROUP(N(npcGroup_802430D4), 0x00000000),
    NPC_GROUP(N(npcGroup_802432C4), 0x00000000),
    {},
};

s32 pad_004078[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAB04, 0, 0, 0, 0, 2, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(86));
});

s32 pad_0040C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802440D0_8B0060

// rodata: D_802440D8_8B0068
