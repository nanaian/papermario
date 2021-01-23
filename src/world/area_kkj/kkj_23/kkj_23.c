#include "kkj_23.h"

s32 pad_000018[2];
s32 pad_00090C[1];
s32 pad_0009CC[1];
Script N(script_80240A30);
s32 pad_000A74[3];
Script N(script_ExitDoubleDoor_80240A80);
Script N(script_ExitDoubleDoor_80240B74);
Script N(script_EnterDoubleDoor_80240C18);
Script N(main);
s32 pad_000E2C[1];
s32 N(vectorList_80240E88)[12];
Script N(script_80240EB8);
Script N(script_80240F3C);
s32 N(intTable_8024113C)[10];
Script N(script_Idle_80241164);
Script N(script_Idle_8024120C);
Script N(script_Idle_802412B4);
Script N(script_Init_8024135C);
Script N(script_Init_80241418);
Script N(script_Init_802414E0);
StaticNpc N(npcGroup_8024159C)[1];
StaticNpc N(npcGroup_8024178C)[1];
StaticNpc N(npcGroup_8024197C)[1];
NpcGroupList N(npcGroupList_80241B6C);
s32 pad_001B9C[1];
s32 N(extraAnimationList_80241BF8)[13];
Script N(script_Interact_80241C2C);
Script N(script_NpcAI_80241D10);
Script N(script_80241F14);
Script N(script_Idle_80241FB8);
Script N(script_Init_80242060);
Script N(script_Init_802420DC);
s32 N(extraAnimationList_80242130)[5];
StaticNpc N(npcGroup_80242144)[3];
NpcGroupList N(npcGroupList_80242714);
s32 pad_00272C[1];
Script N(script_80242730);
Script N(script_80242984);
Script N(script_80242BA8);
Script N(script_80242D68);
Script N(script_80242F04);
Script N(script_80243010);
const char D_80243CB0_B06530[8]; // "flo_00"
const char D_80243CB8_B06538[8]; // "kkj_22"
const char D_80243CC0_B06540[8]; // "kkj_24"
s32 pad_003CC8[2];
const char D_80243CE8_B06568[8]; // "kkj_14"

// text: func_Init_B02880

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_B028A0

// text: func_80240048_B028C8

// text: func_80240080_B02900

// text: func_802400E0_B02960

// text: func_802402F0_B02B70

// text: func_8024039C_B02C1C

// text: func_80240674_B02EF4

// text: func_80240758_B02FD8

// text: func_80240784_B03004

// text: func_802407A0_B03020

s32 pad_00090C[] = {
    0x00000000,
};

// text: func_80240910_B03190

// text: func_802409AC_B0322C

s32 pad_0009CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 735.0f, 0.0f, -60.0f, 270.0f },
    { 10.0f, 0.0f, -60.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190018,
};

Script N(script_80240A30) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 95) {
        SetMusicTrack(0, 102, 0, 8);
    }
});

s32 pad_000A74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80240A80) = SCRIPT({
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_80240020_B028A0();
    PlaySound(220);
    GotoMapSpecial(D_80243CB0_B06530, 10, 12);
    sleep 100;
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 7;
    SI_VAR(2) = 7;
    SI_VAR(3) = 5;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243CB8_B06538, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240B74) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 2;
    SI_VAR(2) = 0;
    SI_VAR(3) = 2;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243CC0_B06540, 0);
    sleep 100;
});

Script N(script_EnterDoubleDoor_80240C18) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 7;
            SI_VAR(3) = 5;
            await EnterDoubleDoor;
            if (SI_SAVE_VAR(0) == 58) {
                spawn N(script_80243010);
            } else {
                spawn N(script_80240F3C);
            }
        }
        == 1 {
            SI_VAR(2) = 0;
            SI_VAR(3) = 2;
            await EnterDoubleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50007);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) == 58) {
        func_80240048_B028C8(1);
        MakeNpcs(0, N(npcGroupList_80242714));
    } else {
        MakeNpcs(0, N(npcGroupList_80241B6C));
    }
    spawn N(script_80240A30);
    UseDoorSounds(2);
    bind N(script_ExitDoubleDoor_80240B74) to TriggerFlag_WALL_INTERACT 2;
    bind N(npcSettings_80240AD0) to TriggerFlag_WALL_INTERACT 7;
    spawn N(script_EnterDoubleDoor_80240C18);
});

s32 pad_000E2C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240E30) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x4B,
    .radius = 0x48,
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

NpcSettings N(npcSettings_80240E5C) = {
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

s32 N(vectorList_80240E88)[] = {
    0x437A0000, 0x41200000, 0xC3700000, 0x435C0000, 0x00000000, 0xC3820000, 0x434D0000, 0x42200000,
    0xC38C0000, 0x432A0000, 0x433E0000, 0xC3960000,
};

Script N(script_80240EB8) = SCRIPT({
    PlaySoundAtNpc(1, 0x80000066, 0);
    loop {
        func_80240080_B02900();
        if (SI_VAR(0) < 0) {
            break;
        }
        sleep 1;
    }
    StopSound(0x80000066);
});

Script N(script_80240F3C) = SCRIPT({
    if (SI_SAVE_FLAG(506) == 1) {
        if (SI_SAVE_FLAG(507) == 1) {
            return;
        }
    }
    SetNpcAnimation(0, 0x800018);
    AwaitPlayerApproach(100, 0xFFFFFFC4, 300);
    SI_SAVE_FLAG(507) = 1;
    spawn {
        SetNpcAnimation(0, 0x80001B);
        sleep 30;
        SetNpcAnimation(0, 0x800018);
    }
    AwaitPlayerApproach(0, 0xFFFFFFC4, 250);
    LoadPath(30, N(vectorList_80240E88), 4, 0);
0:
    GetNextPathPos();
    SetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(1) += 28;
    SI_VAR(2) += 40;
    SI_VAR(3) += 0xFFFFFFFD;
    SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
});

s32 N(intTable_8024113C)[] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFD,
    0xFFFFFFFE, 0xFFFFFFFF,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_80241164) = {
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024113C)),
    SI_CMD(ScriptOpcode_LOOP, 10),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, GetNpcPos, 0, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(3), SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_8024120C) = {
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024113C)),
    SI_CMD(ScriptOpcode_LOOP, 10),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, GetNpcPos, 1, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(3), SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, 1, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_Idle_802412B4) = {
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024113C)),
    SI_CMD(ScriptOpcode_LOOP, 10),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, GetNpcPos, 2, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(3), SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, 2, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_8024135C) = SCRIPT({
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(506) == 1) {
        if (SI_SAVE_FLAG(507) == 1) {
            return;
        }
    }
    BindNpcIdle(-1, N(script_Idle_80241164));
    SetNpcYaw(-1, 90);
    SetNpcPos(-1, 250, 10, 0xFFFFFF06);
    SetNpcAnimation(-1, 0x800018);
});

Script N(script_Init_80241418) = SCRIPT({
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(506) == 1) {
        if (SI_SAVE_FLAG(507) == 1) {
            return;
        }
    }
    BindNpcIdle(-1, N(script_Idle_8024120C));
    SetNpcYaw(-1, 90);
    SetNpcPos(-1, 250, 10, 0xFFFFFF06);
    SetNpcAnimation(-1, 0x800021);
    spawn N(script_80240EB8);
});

Script N(script_Init_802414E0) = SCRIPT({
    SetNpcPos(2, 0, 0xFFFFFC18, 0);
    if (SI_SAVE_FLAG(506) == 1) {
        if (SI_SAVE_FLAG(507) == 1) {
            return;
        }
    }
    BindNpcIdle(-1, N(script_Idle_802412B4));
    SetNpcYaw(-1, 90);
    SetNpcPos(2, 278, 50, 0xFFFFFF03);
    SetNpcAnimation(2, 0xC001E);
});

StaticNpc N(npcGroup_8024159C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240E30),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00000D05,
        .init = N(script_Init_8024135C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
    },
};

StaticNpc N(npcGroup_8024178C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240E5C),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00000F05,
        .init = N(script_Init_80241418),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
    },
};

StaticNpc N(npcGroup_8024197C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80240E5C),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00020F05,
        .init = N(script_Init_802414E0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000,
        },
    },
};

NpcGroupList N(npcGroupList_80241B6C) = {
    NPC_GROUP(N(npcGroup_8024159C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024178C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024197C), 0x00000000),
    {},
};

s32 pad_001B9C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80241BA0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241BCC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80241BF8)[] = {
    0x00580000, 0x00580001, 0x00580002, 0x00580004, 0x00580005, 0x00580006, 0x00580007, 0x00580008,
    0x00580009, 0x00580012, 0x00580014, 0x0058001B, 0xFFFFFFFF,
};

Script N(script_Interact_80241C2C) = SCRIPT({
    DisablePlayerInput(1);
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x14014D);
        SetSelfVar(0, 1);
    } else {
        SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x14014E);
        SetSelfVar(0, 0);
    }
    InterpNpcYaw(-1, 90, 0);
    DisablePlayerInput(0);
});

Script N(script_NpcAI_80241D10) = SCRIPT({
    DisablePlayerInput(1);
    func_80240784_B03004();
    group 0;
    func_802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 0);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x580001);
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140174);
    func_802407A0_B03020(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x580006);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x580001);
    }
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80243CE8_B06568, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
});

Script N(script_80241F14) = SCRIPT({
    loop {
        func_80240758_B02FD8(SI_VAR(1));
        if (SI_VAR(1) == 0) {
            SetSelfEnemyFlagBits(0x8000000, 1);
            BindNpcAI(-1, N(script_NpcAI_80241D10));
            return;
        } else {
            SetSelfEnemyFlagBits(0x8000000, 0);
        }
        sleep 1;
    }
});

Script N(script_Idle_80241FB8) = SCRIPT({
    SI_VAR(10) = spawn N(script_80241F14);
    SetSelfVar(1, 1);
    loop {
        sleep 1;
        GetSelfVar(1, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    kill SI_VAR(10);
    SetSelfEnemyFlagBits(0x8000000, 1);
});

Script N(script_Init_80242060) = SCRIPT({
    SetNpcAnimation(-1, 0x580001);
    SetNpcPos(-1, 140, 0, 0xFFFFFFB0);
    SetNpcYaw(-1, 90);
    BindNpcIdle(-1, N(script_Idle_80241FB8));
    BindNpcInteract(-1, N(script_Interact_80241C2C));
});

Script N(script_Init_802420DC) = SCRIPT({
    SetNpcAnimation(-1, 0x580001);
    SetNpcPos(-1, 40, 0, 0xFFFFFFB0);
    SetNpcYaw(-1, 90);
});

s32 N(extraAnimationList_80242130)[] = {
    0x00600001, 0x00600002, 0x00600004, 0x00600005, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242144)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241BA0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80242130),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241BCC),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_80242060),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241BF8),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241BCC),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_802420DC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241BF8),
    },
};

NpcGroupList N(npcGroupList_80242714) = {
    NPC_GROUP(N(npcGroup_80242144), 0x00000000),
    {},
};

s32 pad_00272C[] = {
    0x00000000,
};

Script N(script_80242730) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 26;
        SI_VAR(2) += 2;
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(1, 0x580001);
        NpcFacePlayer(1, 5);
    }
    SetNpcVar(2, 0, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 26;
        SI_VAR(2) -= 2;
        SetNpcAnimation(2, 0x580006);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(2, 0x580001);
        NpcFacePlayer(2, 5);
        SetNpcVar(2, 0, 0);
    }
    loop {
        sleep 1;
        GetNpcVar(2, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
});

Script N(script_80242984) = SCRIPT({
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(1, 0x580012);
        SI_VAR(0) -= 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
    }
    spawn {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(2, 0x580012);
        SI_VAR(0) += 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerAnimation(0xC0005);
    sleep 1;
    loop 4 {
        SI_VAR(1) += 2;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    SetPlayerAnimation(0xC0018);
    SI_VAR(0) -= 15;
    loop 5 {
        SI_VAR(1) += 4;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80242BA8) = SCRIPT({
    InterpNpcYaw(1, 90, 3);
    sleep 10;
    spawn {
        loop {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 10;
            SI_VAR(2) += 2;
            SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
            sleep 1;
        }
    }
    spawn {
        SetNpcAnimation(2, 0x580014);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, 684, 0xFFFFFFCC, 0);
    }
    spawn {
        SetNpcAnimation(1, 0x580014);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, 716, 0xFFFFFFD0, 0);
    }
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 0.5);
    WaitForCam(0, 1.0);
});

Script N(script_80242D68) = SCRIPT({
    PlaySoundAtCollider(2, 453, 0);
    MakeLerp(0, 80, 14, 4);
    loop {
        UpdateLerp();
        RotateModel(0, SI_VAR(0), 0, -1, 0);
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 20;
    MakeLerp(80, 0, 14, 4);
    loop {
        UpdateLerp();
        RotateModel(0, SI_VAR(0), 0, -1, 0);
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 454, 0);
});

Script N(script_80242F04) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 45;
    loop 10 {
        InterpPlayerYaw(SI_VAR(0), 0);
        SI_VAR(0) += SI_VAR(1);
        SI_VAR(1) += 4;
        sleep 1;
    }
    PlaySoundAtPlayer(8265, 0);
    func_802409AC_B0322C();
    loop 10 {
        InterpPlayerYaw(SI_VAR(0), 0);
        SI_VAR(0) += SI_VAR(1);
        SI_VAR(1) -= 4;
        sleep 1;
    }
    InterpPlayerYaw(90, 0);
});

Script N(script_80243010) = SCRIPT({
    SetCamLeadPlayer(0, 0);
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) <= 140) {
            break;
        }
    }
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetMusicTrack(0, 70, 0, 8);
    SetNpcVar(1, 1, 0);
    SetNpcFlagBits(1, 256, 1);
    SetNpcPos(0, 0xFFFFFFCE, 0, 0xFFFFFFCE);
    spawn N(script_80242D68);
    SetNpcAnimation(0, 0x600002);
    SetNpcSpeed(0, 2.0);
    NpcMoveTo(0, 30, 0xFFFFFFCE, 0);
    SetNpcAnimation(0, 0x600001);
    spawn {
        InterpNpcYaw(1, 270, 5);
        loop {
            sleep 1;
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) > 140) {
                break;
            }
        }
        InterpNpcYaw(1, 90, 5);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        func_802D1270(190, SI_VAR(2), 4.0);
        func_802D1270(195, 0xFFFFFFB0, 4.0);
        func_802D1270(190, 0xFFFFFFB0, 4.0);
        loop {
            sleep 1;
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) > 190) {
                break;
            }
        }
        InterpPlayerYaw(90, 5);
    }
    spawn {
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), 0xFFFFFFF6, 0xFFFFFF7E, 20);
        SetNpcSpeed(0xFFFFFFFC, 4.0);
        NpcFlyTo(0xFFFFFFFC, 210, 0xFFFFFFF6, 0xFFFFFF7E, 0, 0, 0);
        InterpNpcYaw(0xFFFFFFFC, 270, 5);
        loop {
            sleep 1;
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) > 210) {
                break;
            }
        }
        InterpNpcYaw(0xFFFFFFFC, 90, 5);
    }
    sleep 30;
    UseSettingsFrom(0, 0, 0, 0xFFFFFFCE);
    SetPanTarget(0, 0, 0, 0xFFFFFFCE);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -9.0);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(0, 0x600004, 0x600001, 5, 0x14014F);
    SpeakToNpc(1, 0x580008, 0x580001, 0, 0, 0x140150);
    SetNpcVar(0, 0, 1);
    spawn {
        SetCamSpeed(0, 90.0);
        loop {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
            GetNpcVar(0, 0, SI_VAR(0));
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    SetNpcAnimation(0, 0x600002);
    NpcMoveTo(0, 270, 0xFFFFFFCE, 0);
    SetNpcAnimation(0, 0x600001);
    SetNpcVar(0, 0, 0);
    sleep 10;
    InterpNpcYaw(0, 270, 5);
    SetPanTarget(0, 230, 0, 0xFFFFFFCE);
    SetCamSpeed(0, 3.0);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x600004, 0x600001, 5, 0x140151);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerJumpscale(1.0);
    PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    sleep 30;
    SpeakToPlayer(0, 0x600004, 0x600001, 5, 0x140152);
    InterpNpcYaw(0, 90, 5);
    sleep 10;
    NpcMoveTo(0, 280, 0xFFFFFFCE, 0);
    PlaySoundAtNpc(0, 610, 0);
    ShowEmote(0, 0, 0xFFFFFFD3, 15, 1, 0, 0, 0, 0);
    sleep 20;
    InterpNpcYaw(0, 270, 5);
    SpeakToPlayer(0, 0x600004, 0x600001, 5, 0x140153);
    sleep 10;
    InterpNpcYaw(1, 90, 5);
    SetNpcAnimation(0, 0x600005);
    SpeakToPlayer(0, 0x600005, 0x600005, 5, 0x140154);
    PlaySoundAtNpc(0, 8314, 0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFEC;
    SI_VAR(1) += 40;
    SI_VAR(2) += 27;
    PlayEffect(19, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 50, 0, 0, 0, 0, 0, 0, 0);
    sleep 60;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) += 5;
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(4) += 180;
    PlaySoundAtPlayer(8487, 0);
    PlayEffect(94, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), 5, 20, 0, 0, 0, 0);
    func_80240910_B03190(SI_VAR(15), 255, 0, 255);
    SI_VAR(1) += 15;
    PlayEffect(56, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 30, 0, 0, 0, 0, 0, 0, 0);
    NpcFacePlayer(0xFFFFFFFC, 0);
    await N(script_80242F04);
    SetNpcAnimation(0, 0x600001);
    SpeakToPlayer(0xFFFFFFFE, 0xC0006, 0xC0006, 5, 0x140155);
    SpeakToPlayer(0, 0x600005, 0x600005, 5, 0x140156);
    SetPlayerAnimation(0xC0011);
    SetNpcAnimation(0, 0x600002);
    NpcMoveTo(0, 260, 0xFFFFFFCE, 0);
    SetNpcAnimation(0, 0x600001);
    SpeakToPlayer(0, 0x600004, 0x600001, 5, 0x140157);
    spawn {
        loop {
            NpcFacePlayer(0, 0);
            sleep 1;
        }
    }
    spawn {
        loop {
            sleep 1;
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) > 240) {
                break;
            }
        }
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
    }
    await N(script_80242730);
    await N(script_80242984);
    SpeakToPlayer(0xFFFFFFFE, 0xC0018, 0xC0018, 5, 0x140158);
    await N(script_80242BA8);
    sleep 20;
    SetNpcSpeed(0xFFFFFFFC, 6.0);
    NpcFlyTo(0xFFFFFFFC, 460, 0xFFFFFFF6, 0xFFFFFF7E, 0, 0, 0);
    sleep 60;
    FadeOutMusic(0, 1000);
    await N(script_ExitDoubleDoor_80240A80);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

// rodata: D_80243CB0_B06530

// rodata: D_80243CB8_B06538

// rodata: D_80243CC0_B06540

s32 pad_003CC8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243CD0_B06550

// rodata: D_80243CD8_B06558

// rodata: D_80243CE0_B06560

// rodata: D_80243CE8_B06568
