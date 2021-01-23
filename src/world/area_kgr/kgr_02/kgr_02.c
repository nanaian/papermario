#include "kgr_02.h"

s32 pad_000158[2];
s32 pad_00072C[1];
s32 pad_00077C[1];
Script N(script_802407D0);
Script N(script_ExitWalk_802407FC);
Script N(script_80240858);
Script N(main);
s32 pad_00096C[1];
s32 N(unk_80240970)[1];
Script N(script_80240974);
Script N(script_80240990);
Script N(script_80240B2C);
Script N(script_80240D00);
Script N(script_80240F20);
Script N(script_NpcAI_80241098);
Script N(script_802411A4);
Script N(script_802411F8);
Script N(script_802417A0);
StaticNpc N(npcGroup_80241804)[1];
NpcGroupList N(npcGroupList_802419F4);
s32 pad_001A0C[1];
Script N(script_80241A10);
s32 pad_001B24[3];
const char D_80241B30_8ABF80[8]; // "kgr_01"
const char D_80241B38_8ABF88[8]; // "mac_05"

// text: func_80240000_8AA450

s32 pad_000158[] = {
    0x00000000, 0x00000000,
};

// text: func_80240160_8AA5B0

s32 pad_00072C[] = {
    0x00000000,
};

// text: func_80240730_8AAB80

// text: func_80240748_8AAB98

// text: func_80240760_8AABB0

s32 pad_00077C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -175.0f, 10.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900EA,
};

Script N(script_802407D0) = SCRIPT({
    spawn {
        func_80240000_8AA450();
    }
});

Script N(script_ExitWalk_802407FC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241B30_8ABF80, 1);
    sleep 100;
});

Script N(script_80240858) = SCRIPT({
    bind N(script_ExitWalk_802407FC) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 1;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_802419F4));
    SI_VAR(0) = N(script_80240858);
    spawn EnterWalk;
    spawn N(script_80240974);
    spawn N(script_802407D0);
    spawn N(script_80241A10);
});

s32 pad_00096C[] = {
    0x00000000,
};

s32 N(unk_80240970)[] = {
    0x00000000,
};

Script N(script_80240974) = SCRIPT({
    sleep 1;
});

Script N(script_80240990) = SCRIPT({
    loop {
        MakeLerp(0, 0xFFFFFFF6, 25, 4);
        loop {
            UpdateLerp();
            TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
            TranslateModel(SI_VAR(3), 0, SI_VAR(0), 0);
            TranslateModel(SI_VAR(4), 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(0xFFFFFFF6, 0, 30, 4);
        loop {
            UpdateLerp();
            TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
            TranslateModel(SI_VAR(3), 0, SI_VAR(0), 0);
            TranslateModel(SI_VAR(4), 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(script_80240B2C) = SCRIPT({
    SI_VAR(2) = 14;
    SI_VAR(3) = 21;
    SI_VAR(4) = 17;
    SI_VAR(10) = spawn N(script_80240990);
    sleep 5;
    SI_VAR(2) = 20;
    SI_VAR(3) = 19;
    SI_VAR(4) = 18;
    SI_VAR(11) = spawn N(script_80240990);
    sleep 5;
    SI_VAR(2) = 15;
    SI_VAR(3) = 16;
    SI_VAR(4) = 23;
    SI_VAR(12) = spawn N(script_80240990);
    sleep 5;
    SI_VAR(2) = 11;
    SI_VAR(3) = 12;
    SI_VAR(4) = 22;
    SI_VAR(13) = spawn N(script_80240990);
    SetNpcVar(0, 2, 0);
    loop {
        GetNpcVar(0, 2, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    kill SI_VAR(10);
    kill SI_VAR(11);
    kill SI_VAR(12);
    kill SI_VAR(13);
});

Script N(script_80240D00) = SCRIPT({
    SI_VAR(10) = 0;
    SI_VAR(11) = 0;
    0x802D2508();
    loop {
        if (SI_VAR(10) == 0) {
            func_80240730_8AAB80();
            if (SI_VAR(11) == 0) {
                DisablePlayerInput(1);
                SetNpcJumpscale(-1, 1.0);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(0) < 0) {
                    SI_VAR(0) += 80;
                } else {
                    SI_VAR(0) += 0xFFFFFFB0;
                }
                NpcJump0(-1, SI_VAR(0), 0, 0, 20);
                GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
                SpeakToPlayer(-1, 0x410024, 0x410004, 0, 0x7009B);
                SetSelfVar(0, 1);
                SI_VAR(11) = 1;
                DisablePlayerInput(0);
            }
            SetSelfEnemyFlagBits(0x3000000, 0);
            SI_VAR(10) = 1;
        } else {
            func_80240748_8AAB98();
            SetSelfEnemyFlagBits(0x3000000, 1);
            SI_VAR(10) = 0;
        }
        sleep 1;
    }
});

Script N(script_80240F20) = SCRIPT({
    loop {
        PlaySoundAtNpc(-1, 8409, 0);
        NpcJump0(-1, 0xFFFFFF9C, 80, 0xFFFFFFB0, 20);
        sleep 10;
        PlaySoundAtNpc(-1, 8409, 0);
        NpcJump0(-1, 100, 80, 0xFFFFFFB0, 20);
        sleep 10;
        PlaySoundAtNpc(-1, 8409, 0);
        NpcJump0(-1, 30, 40, 0xFFFFFFB0, 20);
        sleep 10;
        PlaySoundAtNpc(-1, 8409, 0);
        NpcJump0(-1, 135, 15, 0xFFFFFF9C, 20);
        sleep 10;
        PlaySoundAtNpc(-1, 8409, 0);
        NpcJump0(-1, 30, 0, 0, 20);
        sleep 10;
    }
});

Script N(script_NpcAI_80241098) = SCRIPT({
    spawn N(script_80240B2C);
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    SI_VAR(10) = spawn N(script_80240F20);
    SetSelfVar(3, SI_VAR(10));
    loop {
        GetSelfVar(1, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    SetSelfEnemyFlagBits(0x100000, 0);
    StartBossBattle(3);
});

Script N(script_802411A4) = SCRIPT({
    DisablePlayerInput(1);
    GetSelfVar(3, SI_VAR(0));
    kill SI_VAR(0);
    SetSelfVar(1, 1);
});

Script N(script_802411F8) = SCRIPT({
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    SetPlayerPos(0xFFFFFFD8, 0, 0);
    SetPlayerFlagBits(0x200000, 1);
    InterpPlayerYaw(90, 0);
    SetPlayerFlagBits(0x200000, 0);
    SetNpcPos(-1, 30, 0, 0);
    SetNpcYaw(-1, 270);
    UseSettingsFrom(0, 0xFFFFFFFB, 0, 0);
    SetPanTarget(0, 0xFFFFFFFB, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    SpeakToPlayer(-1, 0x410024, 0x410004, 0, 0x7009D);
    sleep 10;
    ShowMessageAtScreenPos(0x7009E, 0xFFFFFED4, 100);
    sleep 10;
    FadeOutMusic(0, 1000);
    SetSelfVar(2, 1);
    spawn {
        PlaySound(66);
        SI_VAR(0) = 0;
        loop 150 {
            SI_VAR(0) += 1;
            TranslateGroup(10, 0, SI_VAR(0), 0);
            TranslateModel(14, 0, SI_VAR(0), 0);
            TranslateModel(15, 0, SI_VAR(0), 0);
            TranslateModel(16, 0, SI_VAR(0), 0);
            TranslateModel(19, 0, SI_VAR(0), 0);
            TranslateModel(20, 0, SI_VAR(0), 0);
            TranslateModel(21, 0, SI_VAR(0), 0);
            TranslateModel(22, 0, SI_VAR(0), 0);
            TranslateModel(23, 0, SI_VAR(0), 0);
            sleep 1;
        }
    }
    spawn {
        SI_VAR(0) = 0;
        loop 75 {
            SI_VAR(0) += 1;
            TranslateGroup(13, 0, SI_VAR(0), 0);
            TranslateModel(17, 0, SI_VAR(0), 0);
            TranslateModel(18, 0, SI_VAR(0), 0);
            sleep 1;
        }
    }
    spawn {
        sleep 20;
        HidePlayerShadow(1);
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetPlayerAnimation(0x80017);
        GetPlayerPos(SI_VAR(1), SI_VAR(0), SI_VAR(3));
        loop 150 {
            SI_VAR(0) += 1;
            SetPlayerPos(SI_VAR(1), SI_VAR(0), SI_VAR(3));
            sleep 1;
        }
    }
    spawn {
        sleep 20;
        EnableNpcShadow(-1, 0);
        GetNpcPos(0, SI_VAR(1), SI_VAR(0), SI_VAR(3));
        loop 150 {
            SI_VAR(0) += 1;
            SetNpcPos(-1, SI_VAR(1), SI_VAR(0), SI_VAR(3));
            sleep 1;
        }
    }
    parallel {
        loop {
            InterpNpcYaw(0, 90, 7);
            sleep 10;
            InterpNpcYaw(0, 270, 7);
            sleep 10;
        }
    }
    sleep 120;
    GotoMap(D_80241B38_8ABF88, 2);
    sleep 100;
    0x802D2B6C();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_802417A0) = SCRIPT({
    SetNpcPos(-1, 100, 80, 0xFFFFFFB0);
    spawn N(script_80240D00);
});

NpcSettings N(npcSettings_802417D8) = {
    .unk_00 = { 0, 0x41, 0, 0x4 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_802417A0),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241098),
    .onHit = &N(script_802411A4),
    .aux = NULL,
    .onDefeat = &N(script_802411F8),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0x64 },
    .level = 0,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80241804)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802417D8),
        .pos = { 333.0, -10.0, -130.0 },
        .flags = 0x17148904,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00410004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
        },
    },
};

NpcGroupList N(npcGroupList_802419F4) = {
    NPC_GROUP(N(npcGroup_80241804), 0x13000001),
    {},
};

s32 pad_001A0C[] = {
    0x00000000,
};

Script N(script_80241A10) = SCRIPT({
    SI_VAR(1) = 0;
    loop {
        GetPlayerActionState(SI_VAR(0));
        match SI_VAR(0) {
            == 18 {
                sleep 10;
                SI_VAR(1) = 1;
            }
            == 14 {
                SI_VAR(1) = 1;
            }
        }
        func_80240760_8AABB0();
        if (SI_VAR(1) != 0) {
            DisablePlayerInput(1);
            ShowMessageAtScreenPos(0x7009A, 160, 40);
            SI_VAR(1) = 0;
            DisablePlayerInput(0);
        }
        sleep 1;
    }
});

s32 pad_001B24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241B30_8ABF80

// rodata: D_80241B38_8ABF88
