#include "dgb_04.h"

s32 pad_003108[2];
Script N(script_80243170);
s32 pad_003208[2];
Script N(script_ExitSingleDoor_80243210);
Script N(script_ExitDoubleDoor_802432C4);
Script N(script_EnterSingleDoor_80243378);
Script N(main);
s32 pad_003558[2];
f32 N(floatTable_80243560)[6];
Script N(script_80243578);
Script N(script_NpcAI_802435E4);
Script N(script_80243A0C);
Script N(script_80243A98);
StaticNpc N(npcGroup_80243B28)[1];
NpcGroupList N(npcGroupList_80243D18);
s32 N(unk_80243D30)[2];
s32 N(unk_80243D38)[4];
s32 N(unk_80243D48)[16];
s32 N(unk_80243D88)[3];
Script N(script_80243D94);
Script N(script_80243EF8);
Script N(script_MakeEntities);
s32 pad_0043DC[1];
const char D_802443E0_C3A910[8]; // "dgb_06"
const char D_802443E8_C3A918[8]; // "dgb_03"
s32 pad_004444[1];
const char D_802444D8_C3AA08[8]; // "dgb_00"

// text: func_80240000_C36530

// text: func_802401B0_C366E0

// text: N(UnkNpcAIFunc1)

// text: func_80240898_C36DC8

// text: N(UnkNpcAIFunc2)

// text: func_80240C54_C37184

// text: func_80240CC0_C371F0

// text: N(UnkNpcAIFunc3)

// text: func_80240E58_C37388

// text: func_802411E8_C37718

// text: func_8024130C_C3783C

// text: func_802414F8_C37A28

// text: func_80241650_C37B80

// text: func_80241754_C37C84

// text: func_802417F8_C37D28

// text: func_80241A94_C37FC4

// text: func_80241B4C_C3807C

// text: func_80241CCC_C381FC

// text: func_80241D14_C38244

// text: func_80241D94_C382C4

// text: func_80241E3C_C3836C

// text: func_80242154_C38684

// text: func_802423D0_C38900

// text: func_802423EC_C3891C

// text: func_8024240C_C3893C

// text: func_80242438_C38968

// text: func_802424A4_C389D4

// text: func_802424F0_C38A20

// text: func_8024259C_C38ACC

// text: func_802427EC_C38D1C

// text: func_80242818_C38D48

// text: func_80242850_C38D80

// text: func_802428E0_C38E10

// text: func_80242914_C38E44

// text: func_80242978_C38EA8

// text: func_802429D0_C38F00

// text: func_80242F08_C39438

// text: func_80243048_C39578

// text: func_80243090_C395C0

// text: func_802430D8_C39608

s32 pad_003108[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 575.0f, 0.0f, 180.0f, 270.0f },
    { 575.0f, -420.0f, 180.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C4,
};

Script N(script_80243170) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_003208[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80243210) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 16;
    SI_VAR(2) = 16;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802443E0_C3A910, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802432C4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 20;
    SI_VAR(2) = 13;
    SI_VAR(3) = 11;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802443E8_C3A918, 0);
    sleep 100;
});

Script N(script_EnterSingleDoor_80243378) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            SI_VAR(2) = 13;
            SI_VAR(3) = 11;
            await EnterDoubleDoor;
        }
        == 1 {
            UseDoorSounds(0);
            SI_VAR(2) = 16;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFF1) {
        MakeNpcs(1, N(npcGroupList_80243D18));
    }
    await N(script_MakeEntities);
    bind N(script_ExitSingleDoor_80243210) to TriggerFlag_WALL_INTERACT 16;
    bind N(script_ExitDoubleDoor_802432C4) to TriggerFlag_WALL_INTERACT 20;
    spawn N(script_80243170);
    spawn N(script_EnterSingleDoor_80243378);
});

s32 pad_003558[] = {
    0x00000000, 0x00000000,
};

f32 N(floatTable_80243560)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

Script N(script_80243578) = SCRIPT({
    SetSelfEnemyFlagBits(0x3F100000, 1);
    SetNpcFlagBits(-1, 3328, 1);
});

NpcAISettings N(aISettings_802435B4) = {
    .moveSpeed = 1.5,
    .moveTime = 0x5A,
    .waitTime = 0x1E,
    .alertRadius = 240.0,
    .unk_10 = 0.0,
    .unk_14 = 0x1,
    .chaseSpeed = 5.300000190734863,
    .unk_1C = 0xB4,
    .unk_20 = 0x1,
    .chaseRadius = 240.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802435E4) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_80242154_C38684(N(aISettings_802435B4));
    DisablePlayerInput(1);
    sleep 2;
20:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetNpcPos(-1, SI_VAR(0), SI_VAR(4), SI_VAR(2));
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        sleep 1;
        goto 20;
    }
    DisablePlayerPhysics(1);
    0x802D2B6C();
    DisablePartnerAI(0);
    group 0;
    0x802D5830(1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    SI_VAR(2) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    0x80045838(-1, 759, 0);
    SetNpcAnimation(-1, 0x380008);
    sleep 10;
    SetPlayerAnimation(0x80017);
    sleep 10;
    0x80045838(-1, 1838, 0);
    spawn {
        loop 100 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    spawn {
        SetNpcAnimation(0xFFFFFFFC, 264);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    }
    sleep 30;
    GotoMap(D_802444D8_C3AA08, 2);
    sleep 100;
});

Script N(script_80243A0C) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

Script N(script_80243A98) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

NpcSettings N(npcSettings_80243AFC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x26,
    .radius = 0x20,
    .otherAI = &N(script_80243578),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802435E4),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80243B28)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243AFC),
        .pos = { 70.0, -220.0, 186.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000046, 0xFFFFFF24, 0x000000BA, 0x0000000F, 0x00000028, 0xFFFF8001, 0x00000001, 0x00000050, 0xFFFFFF24, 0x000000AA, 0x00000050, 0x00000096, 0x00000001 },
        .animations = {
            0x00380001, 0x00380002, 0x00380003, 0x00380003, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380005, 0x00380001, 0x00380008, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380001,
        },
    },
};

NpcGroupList N(npcGroupList_80243D18) = {
    NPC_GROUP(N(npcGroup_80243B28), 0x00000000),
    {},
};

s32 N(unk_80243D30)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80243D38)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80243D48)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80243D88)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80243D94) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80242914_C38E44(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80242F08_C39438(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80242F08_C39438(50, 50);
    }
    spawn {
        sleep 3;
        func_8024240C_C3893C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_80242978_C38EA8();
        func_80243048_C39578();
        sleep 5;
        func_80243090_C395C0();
        sleep 5;
        func_80243048_C39578();
    }
    sleep 3;
    func_802429D0_C38F00(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_80243EF8) = SCRIPT({
    if (SI_SAVE_FLAG(1046) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_802430D8_C39608();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_802423D0_C38900();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80242850_C38D80(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_802424F0_C38A20();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_802428E0_C38E10(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802423EC_C3891C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_8024259C_C38ACC();
    if (SI_VAR(0) == -1) {
        func_802428E0_C38E10(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802423EC_C3891C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_802427EC_C38D1C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_802428E0_C38E10(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802423EC_C3891C();
        return;
    }
    await N(script_80243D94);
    func_80242438_C38968(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(1046) = 1;
    func_802428E0_C38E10(SI_VAR(9));
    func_80242818_C38D48();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_802423EC_C3891C();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 500, 0xFFFFFE98, 110, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(1046));
    AssignScript(N(script_80243EF8));
});

s32 pad_0043DC[] = {
    0x00000000,
};

// rodata: D_802443E0_C3A910

// rodata: D_802443E8_C3A918

// rodata: D_802443F0_C3A920

// rodata: D_802443F8_C3A928

// rodata: D_80244400_C3A930

// rodata: jtbl_80244408_C3A938

s32 pad_004444[] = {
    0x00000000,
};

// rodata: D_80244448_C3A978

// rodata: D_80244450_C3A980

// rodata: jtbl_80244458_C3A988

// rodata: D_802444D8_C3AA08

