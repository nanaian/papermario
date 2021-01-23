#include "dgb_08.h"

s32 pad_003C84[3];
Script N(script_80243CF0);
s32 pad_003D88[2];
Script N(script_ExitDoubleDoor_80243D90);
Script N(script_ExitDoubleDoor_80243E44);
Script N(script_EnterDoubleDoor_80243EF8);
Script N(main);
s32 pad_0040FC[1];
s32 N(unk_80244100)[12];
Script N(script_80244130);
s32 unk_missing_80244150[11];
s32 unk_missing_802441A8[11];
Script N(script_802441D4);
s32 N(extraAnimationList_80244290)[10];
s32 N(extraAnimationList_802442B8)[2];
Script N(script_NpcAI_802442F0);
Script N(script_NpcAI_8024438C);
f32 N(floatTable_80244460)[6];
Script N(script_80244478);
Script N(script_NpcAI_802444E4);
Script N(script_8024490C);
Script N(script_80244998);
Script N(script_Idle_80244A54);
Script N(script_80244D08);
Script N(script_NpcAI_80244D7C);
Script N(script_Defeat_80244E58);
Script N(script_Init_80244E94);
StaticNpc N(npcGroup_802450A0)[1];
StaticNpc N(npcGroup_80245290)[2];
StaticNpc N(npcGroup_80245670)[2];
StaticNpc N(npcGroup_80245A50)[2];
StaticNpc N(npcGroup_80245E30)[1];
StaticNpc N(npcGroup_80246020)[1];
Script N(script_Idle_80246210);
Script N(script_Interact_80246310);
Script N(script_Init_802464C4);
StaticNpc N(npcGroup_80246528)[1];
Script N(script_Idle_80246718);
Script N(script_Init_80246728);
StaticNpc N(npcGroup_80246768)[1];
NpcGroupList N(npcGroupList_80246958);
NpcGroupList N(npcGroupList_802469AC);
NpcGroupList N(npcGroupList_802469C4);
s32 pad_0069DC[1];
Script N(script_802469E0);
const char D_802469F0_C467A0[8]; // "dgb_01"
s32 pad_0069F8[2];
s32 pad_006D8C[1];
const char D_80246E20_C46BD0[8]; // "dgb_00"
const char D_80246E28_C46BD8[8]; // "dgb_01"

// text: func_80240000_C3FDB0

// text: func_80240158_C3FF08

// text: N(UnkNpcAIFunc1)

// text: func_802404C0_C40270

// text: func_8024067C_C4042C

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024081C_C405CC

// text: func_8024094C_C406FC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240AD4_C40884

// text: func_80240B94_C40944

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80241098_C40E48

// text: func_8024124C_C40FFC

// text: func_802414AC_C4125C

// text: func_80241760_C41510

// text: func_80241910_C416C0

// text: dup_dgb_08_UnkNpcAIFunc1

// text: func_80241FF8_C41DA8

// text: N(UnkNpcAIFunc2)

// text: func_802423B4_C42164

// text: func_80242420_C421D0

// text: N(UnkNpcAIFunc3)

// text: func_802425B8_C42368

// text: func_80242948_C426F8

// text: func_80242A6C_C4281C

// text: func_80242C58_C42A08

// text: func_80242DB0_C42B60

// text: func_80242EB4_C42C64

// text: func_80242F94_C42D44

// text: func_80243230_C42FE0

// text: func_802432E8_C43098

// text: func_80243468_C43218

// text: func_802434B0_C43260

// text: func_80243530_C432E0

// text: func_802435D8_C43388

// text: func_802438F0_C436A0

// text: func_80243B6C_C4391C

// text: func_80243B98_C43948

// text: func_80243C10_C439C0

// text: func_80243C50_C43A00

s32 pad_003C84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -575.0f, 0.0f, 180.0f, 90.0f },
    { -575.0f, 210.0f, 180.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900C8,
};

Script N(script_80243CF0) = SCRIPT({
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

s32 pad_003D88[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80243D90) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 14;
    SI_VAR(2) = 23;
    SI_VAR(3) = 25;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802469F0_C467A0, 2);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80243E44) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 18;
    SI_VAR(2) = 18;
    SI_VAR(3) = 20;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802469F0_C467A0, 4);
    sleep 100;
});

Script N(script_EnterDoubleDoor_80243EF8) = SCRIPT({
    UseDoorSounds(3);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 23;
            SI_VAR(3) = 25;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 18;
            SI_VAR(3) = 20;
            await EnterDoubleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE4 {
            MakeNpcs(1, N(npcGroupList_80246958));
        }
        < 0xFFFFFFF0 {
            MakeNpcs(1, N(npcGroupList_802469AC));
        }
        < 60 {
            MakeNpcs(1, N(npcGroupList_802469C4));
        }
    }
    await N(script_802469E0);
    bind N(script_ExitDoubleDoor_80243D90) to TriggerFlag_WALL_INTERACT 14;
    bind N(script_ExitDoubleDoor_80243E44) to TriggerFlag_WALL_INTERACT 18;
    spawn N(script_80243CF0);
    spawn N(script_EnterDoubleDoor_80243EF8);
});

s32 pad_0040FC[] = {
    0x00000000,
};

s32 N(unk_80244100)[] = {
    0x40900000, 0x00000000, 0x00000000, 0x432A0000, 0x42B40000, 0x00000001, 0x4079999A, 0x000000B4,
    0x00000002, 0x432A0000, 0x42B40000, 0x00000001,
};

Script N(script_80244130) = SCRIPT({
    func_80240B94_C40944(N(unk_80244100));
});

s32 unk_missing_80244150[] = {
    0x00000000, 0x005A0041, 0x00000000, 0x00000000, N(script_80244130), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000D0000,
};

NpcSettings N(npcSettings_8024417C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x5A,
    .radius = 0x41,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

s32 unk_missing_802441A8[] = {
    0x00000000, 0x00180018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x000D0000,
};

Script N(script_802441D4) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

s32 N(extraAnimationList_80244290)[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802442B8)[] = {
    0x00390000, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_802442C0) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x78,
    .waitTime = 0x1E,
    .alertRadius = 85.0f,
    .unk_10 = 65.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0xC,
    .chaseRadius = 110.0f,
    .unk_28 = 90.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_802442F0) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    func_802414AC_C4125C(N(aISettings_802442C0));
});

NpcSettings N(npcSettings_80244360) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x22,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802442F0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_NpcAI_8024438C) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_8024124C_C40FFC();
});

NpcSettings N(npcSettings_80244434) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0xE,
    .radius = 0x12,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024438C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_802441D4),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0x8,
};

f32 N(floatTable_80244460)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

Script N(script_80244478) = SCRIPT({
    SetSelfEnemyFlagBits(0x3F100000, 1);
    SetNpcFlagBits(-1, 3328, 1);
});

NpcAISettings N(aISettings_802444B4) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x5A,
    .waitTime = 0x1E,
    .alertRadius = 240.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 5.3f,
    .unk_1C = 0xB4,
    .unk_20 = 0x1,
    .chaseRadius = 240.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802444E4) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD76);
    SetSelfVar(6, 30);
    SetSelfVar(1, 600);
    func_802438F0_C436A0(N(aISettings_802444B4));
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
    GotoMap(D_80246E20_C46BD0, 2);
    sleep 100;
});

Script N(script_8024490C) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

Script N(script_80244998) = SCRIPT({
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

NpcSettings N(npcSettings_802449FC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x26,
    .radius = 0x20,
    .otherAI = &N(script_80244478),
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802444E4),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80244A28) = {
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

Script N(script_Idle_80244A54) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) >= 0xFFFFFEA2) {
            break;
        }
        sleep 1;
    }
    SI_SAVE_VAR(203) = 8;
    SI_SAVE_VAR(0) = 0xFFFFFFE5;
    PlaySoundAtCollider(18, 455, 0);
    MakeLerp(0, 80, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(18, SI_VAR(0), 0, -1, 0);
        RotateModel(20, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetNpcAnimation(9, 0x6A000A);
    SetNpcPos(-1, 0xFFFFFD67, 210, 180);
    SetNpcYaw(-1, 90);
    NpcMoveTo(-1, 0xFFFFFDEE, 180, 30);
    spawn {
        sleep 20;
        MakeLerp(80, 0, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(18, SI_VAR(0), 0, -1, 0);
            RotateModel(20, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(18, 456, 0);
    }
    NpcMoveTo(-1, 0xFFFFFE0C, 80, 10);
    BindNpcAI(-1, N(script_NpcAI_80244D7C));
});

Script N(script_80244D08) = SCRIPT({
10:
    GetNpcPos(9, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) > 0) {
        sleep 1;
        goto 10;
    }
    func_80243B98_C43948();
});

Script N(script_NpcAI_80244D7C) = SCRIPT({
    func_80243C10_C439C0();
    spawn N(script_80244D08);
    spawn {
        loop {
            PlaySoundAtNpc(-1, 8438, 0x400000);
            ShakeCam(0, 0, 5, 2.0);
            sleep 5;
            PlaySoundAtNpc(-1, 8438, 0x400000);
            ShakeCam(0, 0, 2, 1.0);
            sleep 8;
        }
    }
    func_80240B94_C40944(N(unk_80244100));
});

Script N(script_Defeat_80244E58) = SCRIPT({
    func_80243B6C_C4391C();
    GotoMap(D_80246E28_C46BD8, 2);
    sleep 100;
});

Script N(script_Init_80244E94) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFE4) {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(-1, 4, 1);
        return;
    }
    if (SI_SAVE_VAR(0) >= 0xFFFFFFE6) {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(-1, 4, 1);
        return;
    }
    SetNpcScale(-1, 1.25, 1.25, 1.25);
    BindNpcDefeat(-1, N(script_Defeat_80244E58));
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_VAR(203) != 8) {
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
                SetNpcFlagBits(-1, 4, 1);
            } else {
                SetNpcPos(-1, 0xFFFFFF7E, 0, 200);
                BindNpcIdle(-1, N(script_NpcAI_80244D7C));
            }
        }
        == 1 {
            if (SI_SAVE_VAR(203) != 8) {
                BindNpcIdle(-1, N(script_Idle_80244A54));
            } else {
                SetNpcPos(-1, 0xFFFFFF7E, 210, 80);
                BindNpcIdle(-1, N(script_NpcAI_80244D7C));
            }
        }
    }
});

StaticNpc N(npcGroup_802450A0)[] = {
    {
        .id = 9,
        .settings = &N(npcSettings_8024417C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00A40004,
        .init = N(script_Init_80244E94),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x0000000A, 0xFFFFFE70, 0x000000D2, 0x00000050, 0xFFFFFF9C, 0x000000D2, 0x00000050, 0x00000064, 0x000000D2, 0x00000050, 0x00000190, 0x000000D2, 0x00000050, 0x00000334, 0x00000064, 0x00000050, 0x00000334, 0x00000064, 0x00000104, 0x00000190, 0x00000000, 0x00000104, 0x00000064, 0x00000000, 0x000000C8, 0xFFFFFF9C, 0x00000000, 0x000000AF, 0xFFFFFE3E, 0x00000000, 0x000000AF, 0xFFFF8001, 0x00000096, 0x00000000, 0x000000AF, 0x000005AA, 0x000000C8, 0x00000001 },
        .animations = {
            0x006A0007, 0x006A000A, 0x006A000D, 0x006A000D, 0x006A0019, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007, 0x006A0007,
        },
    },
};

StaticNpc N(npcGroup_80245290)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80244360),
        .pos = { -250.0, 0.0, 135.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF06, 0x00000000, 0x00000087, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF06, 0x00000000, 0x00000087, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80244290),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80244434),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802442B8),
    },
};

StaticNpc N(npcGroup_80245670)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244360),
        .pos = { 220.0, 0.0, 155.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000DC, 0x00000000, 0x0000009B, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000DC, 0x00000000, 0x0000009B, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80244290),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80244434),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802442B8),
    },
};

StaticNpc N(npcGroup_80245A50)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80244360),
        .pos = { 825.0, 100.0, 200.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000339, 0x00000064, 0x000000C8, 0x00000019, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000339, 0x00000064, 0x000000C8, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80244290),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80244434),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_802442B8),
    },
};

StaticNpc N(npcGroup_80245E30)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_802449FC),
        .pos = { 75.0, 310.0, 85.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x0000004B, 0x00000136, 0x00000055, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000004B, 0x00000000, 0x00000055, 0x000000FA, 0x00000037, 0x00000001, 0x00000001 },
        .animations = {
            0x00380001, 0x00380002, 0x00380003, 0x00380003, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380005, 0x00380001, 0x00380008, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380001,
        },
    },
};

StaticNpc N(npcGroup_80246020)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_802449FC),
        .pos = { -451.0, 310.0, 81.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFE3D, 0x00000136, 0x00000051, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFECA, 0x00000000, 0x000000AF, 0x000000FA, 0x00000091, 0x00000001, 0x00000001 },
        .animations = {
            0x00380001, 0x00380002, 0x00380003, 0x00380003, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380005, 0x00380001, 0x00380008, 0x00380001, 0x00380001, 0x00380001, 0x00380001, 0x00380001,
        },
    },
};

Script N(script_Idle_80246210) = SCRIPT({
0:
    SetNpcAnimation(-1, 0x390007);
    sleep 30;
    loop 15 {
        func_80243C50_C43A00();
        sleep 60;
    }
    SetNpcAnimation(-1, 0x39000C);
    sleep 20;
    SetNpcAnimation(-1, 0x390007);
    sleep 30;
    loop 5 {
        func_80243C50_C43A00();
        sleep 60;
    }
    SetNpcAnimation(-1, 0x39000C);
    sleep 15;
    goto 0;
});

Script N(script_Interact_80246310) = SCRIPT({
    SetNpcAnimation(-1, 0x390008);
    PlaySoundAtNpc(-1, 753, 0);
    sleep 10;
    SetNpcAnimation(-1, 0x390002);
    sleep 20;
    GetNpcYaw(-1, SI_VAR(0));
    SI_VAR(0) += 180;
    InterpNpcYaw(-1, SI_VAR(0), 0);
    sleep 10;
    GetNpcYaw(-1, SI_VAR(0));
    SI_VAR(0) += 180;
    InterpNpcYaw(-1, SI_VAR(0), 0);
    sleep 25;
    GetNpcYaw(-1, SI_VAR(0));
    SI_VAR(0) += 180;
    InterpNpcYaw(-1, SI_VAR(0), 0);
    sleep 15;
    NpcFacePlayer(-1, 0);
    SpeakToPlayer(-1, 0x390005, 0x390002, 0, 0xE00F2);
    sleep 10;
    SetNpcAnimation(-1, 0x390006);
    sleep 10;
    SetNpcAnimation(-1, 0x390007);
});

Script N(script_Init_802464C4) = SCRIPT({
    SetNpcCollisionSize(-1, 36, 30);
    SetNpcAnimation(-1, 0x390007);
    BindNpcInteract(-1, N(script_Interact_80246310));
    BindNpcIdle(-1, N(script_Idle_80246210));
});

StaticNpc N(npcGroup_80246528)[] = {
    {
        .id = 11,
        .settings = &N(npcSettings_80244A28),
        .pos = { 426.0, 0.0, 38.0 },
        .flags = 0x00600D01,
        .init = N(script_Init_802464C4),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .tattle = 0x1A00B6,
    },
};

Script N(script_Idle_80246718) = SCRIPT({

});

Script N(script_Init_80246728) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80246718));
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
});

StaticNpc N(npcGroup_80246768)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244360),
        .pos = { -250.0, 0.0, 135.0 },
        .flags = 0x00000401,
        .init = N(script_Init_80246728),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF06, 0x00000000, 0x00000087, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF06, 0x00000000, 0x00000087, 0x000000FA, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80244290),
    },
};

NpcGroupList N(npcGroupList_80246958) = {
    NPC_GROUP(N(npcGroup_80246768), 0x0F020003),
    NPC_GROUP(N(npcGroup_80245290), 0x0F020003),
    NPC_GROUP(N(npcGroup_80245670), 0x0F020003),
    NPC_GROUP(N(npcGroup_80245A50), 0x0F030003),
    NPC_GROUP(N(npcGroup_80245E30), 0x00000000),
    NPC_GROUP(N(npcGroup_80246020), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_802469AC) = {
    NPC_GROUP(N(npcGroup_802450A0), 0x0F040001),
    {},
};

NpcGroupList N(npcGroupList_802469C4) = {
    NPC_GROUP(N(npcGroup_80246528), 0x00000000),
    {},
};

s32 pad_0069DC[] = {
    0x00000000,
};

Script N(script_802469E0) = SCRIPT({

});

// rodata: D_802469F0_C467A0

s32 pad_0069F8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80246A00_C467B0

// rodata: D_80246A08_C467B8

// rodata: jtbl_80246A10_C467C0

// rodata: D_80246BA0_C46950

// rodata: jtbl_80246BA8_C46958

// rodata: D_80246D38_C46AE8

// rodata: D_80246D40_C46AF0

// rodata: D_80246D48_C46AF8

// rodata: jtbl_80246D50_C46B00

s32 pad_006D8C[] = {
    0x00000000,
};

// rodata: D_80246D90_C46B40

// rodata: D_80246D98_C46B48

// rodata: jtbl_80246DA0_C46B50

// rodata: D_80246E20_C46BD0

// rodata: D_80246E28_C46BD8
