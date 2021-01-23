#include "kkj_10.h"

s32 pad_00006C[1];
s32 pad_0000A4[3];
s32 pad_000894[3];
s32 pad_0010CC[1];
Script N(script_ExitDoubleDoor_80241160);
Script N(script_ExitDoubleDoor_80241214);
Script N(script_ExitSingleDoor_802412C8);
Script N(script_ExitSingleDoor_8024137C);
Script N(script_ExitSingleDoor_80241430);
Script N(script_ExitSingleDoor_802414E4);
Script N(script_80241598);
Script N(script_EnterSingleDoor_80241690);
Script N(main);
s32 pad_0019E8[2];
s32 N(itemList_802419F0)[2];
Script N(script_802419F8);
Script N(script_MakeEntities);
s32 pad_001BD4[3];
Script N(script_NpcAI_80241C0C);
Script N(script_Idle_80241E14);
Script N(script_Idle_80242058);
Script N(script_Init_8024229C);
Script N(script_Init_802422F0);
s32 N(extraAnimationList_80242344)[5];
StaticNpc N(npcGroup_80242358)[2];
NpcGroupList N(npcGroupList_80242738);
s32 N(extraAnimationList_8024277C)[13];
Script N(script_NpcAI_802427B0);
Script N(script_Idle_802429C4);
Script N(script_Idle_80242C60);
Script N(script_Interact_80242EFC);
Script N(script_Interact_80242FC8);
Script N(script_Init_802430E4);
Script N(script_Init_8024314C);
StaticNpc N(npcGroup_802431B4)[2];
NpcGroupList N(npcGroupList_80243594);
s32 pad_0035AC[1];
const char D_802435B0_ACE0D0[8]; // "osr_02"
const char D_802435B8_ACE0D8[8]; // "kkj_11"
const char D_802435C0_ACE0E0[8]; // "kkj_21"
const char D_802435C8_ACE0E8[8]; // "kkj_19"
const char D_802435D0_ACE0F0[8]; // "kkj_20"
const char D_802435D8_ACE0F8[8]; // "kkj_29"
const char D_802435F8_ACE118[8]; // "kkj_14"
const char D_80243618_ACE138[8]; // "kkj_14"

// text: func_80240000_ACAB20

// text: func_80240034_ACAB54

s32 pad_00006C[] = {
    0x00000000,
};

// text: func_80240070_ACAB90

s32 pad_0000A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400B0_ACABD0

// text: func_802402C0_ACADE0

// text: func_8024036C_ACAE8C

// text: func_80240644_ACB164

// text: func_80240728_ACB248

s32 pad_000894[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802408A0_ACB3C0

// text: func_80240AB0_ACB5D0

// text: func_80240B5C_ACB67C

// text: func_80240E34_ACB954

// text: func_80240F18_ACBA38

// text: func_80240F44_ACBA64

// text: func_80240F60_ACBA80

s32 pad_0010CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 480.0f, 0.0f },
    { 0.0f, 100.0f, -365.0f, 180.0f },
    { -420.0f, 40.0f, -260.0f, 135.0f },
    { 230.0f, 0.0f, -210.0f, 180.0f },
    { 420.0f, 40.0f, -260.0f, 225.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19000B,
};

Script N(script_ExitDoubleDoor_80241160) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(2);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 21;
    SI_VAR(3) = 19;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802435B0_ACE0D0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241214) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(2);
    SI_VAR(0) = 1;
    SI_VAR(1) = 5;
    SI_VAR(2) = 14;
    SI_VAR(3) = 16;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802435B8_ACE0D8, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_802412C8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 10;
    SI_VAR(2) = 24;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802435C0_ACE0E0, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_8024137C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 3;
    SI_VAR(1) = 20;
    SI_VAR(2) = 26;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802435C8_ACE0E8, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_80241430) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 4;
    SI_VAR(1) = 25;
    SI_VAR(2) = 28;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802435D0_ACE0F0, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_802414E4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 10;
    SI_VAR(2) = 24;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802435D8_ACE0F8, 0);
    sleep 100;
});

Script N(script_80241598) = SCRIPT({
    if (SI_SAVE_VAR(0) > 58) {
        bind N(script_ExitDoubleDoor_80241160) to TriggerFlag_WALL_INTERACT 0;
    }
    match SI_SAVE_VAR(0) {
        == 38 {
            bind N(script_ExitSingleDoor_802414E4) to TriggerFlag_WALL_INTERACT 10;
        }
        else {
            bind N(script_ExitSingleDoor_802412C8) to TriggerFlag_WALL_INTERACT 10;
        }
    }
    bind N(script_ExitDoubleDoor_80241214) to TriggerFlag_WALL_INTERACT 5;
    bind N(script_ExitSingleDoor_8024137C) to TriggerFlag_WALL_INTERACT 20;
    bind N(script_ExitSingleDoor_80241430) to TriggerFlag_WALL_INTERACT 25;
});

Script N(script_EnterSingleDoor_80241690) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(2);
            SI_VAR(2) = 21;
            SI_VAR(3) = 19;
            await EnterDoubleDoor;
        }
        == 1 {
            UseDoorSounds(2);
            SI_VAR(2) = 14;
            SI_VAR(3) = 16;
            await EnterDoubleDoor;
        }
        == 2 {
            SI_VAR(2) = 24;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 3 {
            SI_VAR(2) = 26;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
        == 4 {
            SI_VAR(2) = 28;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    match SI_SAVE_VAR(0) {
        6, 38 {
            MakeNpcs(0, N(npcGroupList_80242738));
        }
        == 58 {
            func_80240034_ACAB54(1);
            MakeNpcs(0, N(npcGroupList_80243594));
        }
        else {
            EnableModel(130, 0);
            EnableModel(131, 0);
        }
    }
    await N(script_MakeEntities);
    if (SI_SAVE_VAR(0) >= 94) {
        func_80240000_ACAB20();
    }
    if (SI_SAVE_VAR(0) < 95) {
        SetMusicTrack(0, 117, 0, 8);
    } else {
        SetMusicTrack(0, 107, 1, 8);
    }
    spawn N(script_80241598);
    spawn N(script_EnterSingleDoor_80241690);
});

s32 pad_0019E8[] = {
    0x00000000, 0x00000000,
};

s32 N(itemList_802419F0)[] = {
    0x0000006A, 0x00000000,
};

Script N(script_802419F8) = SCRIPT({
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        return;
    }
    PlaySoundAt(617, 0, 0, 10, 490);
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240070_ACAB90();
    sleep 5;
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(502) = 1;
    0x802D6954();
    unbind;
    bind N(script_ExitDoubleDoor_80241160) to TriggerFlag_WALL_INTERACT 0;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_LE, SI_SAVE_VAR(0), 58),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(502), 0),
            SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 0, 10, 490, 180, 0x80000000),
            SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(0)),
            SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802419F8), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_802419F0), 0, 1),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241160), TriggerFlag_WALL_INTERACT, 0, 1, 0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_001BD4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241BE0) = {
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

Script N(script_NpcAI_80241C0C) = SCRIPT({
    DisablePlayerInput(1);
    group 0;
    0x802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 5);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x580002);
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140174);
    func_80240728_ACB248(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x580007);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x580002);
    }
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_802435F8_ACE118, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_Idle_80241E14) = SCRIPT({
    spawn {
        SI_VAR(1) = 0;
        loop {
            func_8024036C_ACAE8C(SI_VAR(0), 100, 90, 0, 40, 130, 0);
            if (SI_VAR(0) != 0) {
                if (SI_VAR(1) == 0) {
                    BindNpcAI(-1, N(script_NpcAI_80241C0C));
                    SI_VAR(1) = 1;
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 0xFFFFFF10, 240, 0);
        func_80240644_ACB164(SI_VAR(0), 0xFFFFFF10, 240, 0, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0, 240, 0);
        func_80240644_ACB164(SI_VAR(0), 0, 240, 0xFFFFFF10, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF10, 240, 0);
        func_80240644_ACB164(SI_VAR(0), 0xFFFFFF10, 240, 0xFFFFFF10, 0);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF10, 0, 0);
        func_80240644_ACB164(SI_VAR(0), 0xFFFFFF10, 0, 0xFFFFFF10, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Idle_80242058) = SCRIPT({
    spawn {
        SI_VAR(1) = 0;
        loop {
            func_8024036C_ACAE8C(SI_VAR(0), 100, 90, 0, 40, 131, 1);
            if (SI_VAR(0) != 0) {
                if (SI_VAR(1) == 0) {
                    BindNpcAI(-1, N(script_NpcAI_80241C0C));
                    SI_VAR(1) = 1;
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 240, 240, 0);
        func_80240644_ACB164(SI_VAR(0), 240, 240, 240, 0);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 240, 0, 0);
        func_80240644_ACB164(SI_VAR(0), 240, 0, 240, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 240, 240, 0);
        func_80240644_ACB164(SI_VAR(0), 240, 240, 0, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0, 240, 0);
        func_80240644_ACB164(SI_VAR(0), 0, 240, 240, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Init_8024229C) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 0xFFFFFF10, 0, 0);
    BindNpcIdle(-1, N(script_Idle_80241E14));
});

Script N(script_Init_802422F0) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 0, 0, 240);
    BindNpcIdle(-1, N(script_Idle_80242058));
});

s32 N(extraAnimationList_80242344)[] = {
    0x00580002, 0x00580005, 0x00580007, 0x00580009, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242358)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241BE0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_8024229C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80242344),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241BE0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_802422F0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80242344),
    },
};

NpcGroupList N(npcGroupList_80242738) = {
    NPC_GROUP(N(npcGroup_80242358), 0x00000000),
    {},
};

NpcSettings N(npcSettings_80242750) = {
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

s32 N(extraAnimationList_8024277C)[] = {
    0x00580000, 0x00580001, 0x00580002, 0x00580004, 0x00580005, 0x00580006, 0x00580007, 0x00580008,
    0x00580009, 0x00580012, 0x00580014, 0x0058001B, 0xFFFFFFFF,
};

Script N(script_NpcAI_802427B0) = SCRIPT({
    DisablePlayerInput(1);
    group 0;
    0x802D5830(1);
    func_80240F44_ACBA64();
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 5);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x580002);
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140174);
    func_80240F60_ACBA80(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x580007);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x580002);
    }
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80243618_ACE138, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_Idle_802429C4) = SCRIPT({
    spawn {
        SI_VAR(2) = 0;
        loop {
            func_80240B5C_ACB67C(SI_VAR(0), 100, 90, 0, 40, 130, 0);
            if (SI_VAR(2) == 0) {
                func_80240F18_ACBA38(SI_VAR(1));
                if (SI_VAR(1) == 0) {
                    SetSelfEnemyFlagBits(0x8000000, 1);
                    if (SI_VAR(0) != 0) {
                        BindNpcAI(-1, N(script_NpcAI_802427B0));
                        SI_VAR(2) = 1;
                    }
                } else {
                    SetSelfEnemyFlagBits(0x8000000, 0);
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 0xFFFFFF10, 240, 0);
        func_80240E34_ACB954(SI_VAR(0), 0xFFFFFF10, 240, 0, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0, 240, 0);
        func_80240E34_ACB954(SI_VAR(0), 0, 240, 0xFFFFFF10, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF10, 240, 0);
        func_80240E34_ACB954(SI_VAR(0), 0xFFFFFF10, 240, 0xFFFFFF10, 0xFFFFFFCE);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0xFFFFFF10, 0xFFFFFFCE, 0);
        func_80240E34_ACB954(SI_VAR(0), 0xFFFFFF10, 0xFFFFFFCE, 0xFFFFFF10, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Idle_80242C60) = SCRIPT({
    spawn {
        SI_VAR(2) = 0;
        loop {
            func_80240B5C_ACB67C(SI_VAR(0), 100, 90, 0, 40, 131, 1);
            if (SI_VAR(2) == 0) {
                func_80240F18_ACBA38(SI_VAR(1));
                if (SI_VAR(1) == 0) {
                    SetSelfEnemyFlagBits(0x8000000, 0);
                    if (SI_VAR(0) != 0) {
                        BindNpcAI(-1, N(script_NpcAI_802427B0));
                        SI_VAR(2) = 1;
                    }
                } else {
                    SetSelfEnemyFlagBits(0x8000000, 0);
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 240, 240, 0);
        func_80240E34_ACB954(SI_VAR(0), 240, 240, 240, 0xFFFFFFCE);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 240, 0xFFFFFFCE, 0);
        func_80240E34_ACB954(SI_VAR(0), 240, 0xFFFFFFCE, 240, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 240, 240, 0);
        func_80240E34_ACB954(SI_VAR(0), 240, 240, 0, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 0, 240, 0);
        func_80240E34_ACB954(SI_VAR(0), 0, 240, 240, 240);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Interact_80242EFC) = SCRIPT({
    DisablePlayerInput(1);
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x580009, 0x580002, 5, 0x14013C);
        SetSelfVar(0, 1);
    } else {
        SpeakToPlayer(-1, 0x580009, 0x580002, 5, 0x14013D);
        SetSelfVar(0, 0);
    }
    DisablePlayerInput(0);
});

Script N(script_Interact_80242FC8) = SCRIPT({
    DisablePlayerInput(1);
    func_80240F18_ACBA38(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SpeakToPlayer(-1, 0x580009, 0x580002, 5, 0x140140);
    } else {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SpeakToPlayer(-1, 0x580009, 0x580002, 5, 0x14013E);
            SetSelfVar(0, 1);
        } else {
            SpeakToPlayer(-1, 0x580009, 0x580002, 5, 0x14013F);
            SetSelfVar(0, 0);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_Init_802430E4) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 0xFFFFFF10, 0, 0xFFFFFFCE);
    BindNpcIdle(-1, N(script_Idle_802429C4));
    BindNpcInteract(-1, N(script_Interact_80242EFC));
});

Script N(script_Init_8024314C) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 0, 0, 240);
    BindNpcIdle(-1, N(script_Idle_80242C60));
    BindNpcInteract(-1, N(script_Interact_80242FC8));
});

StaticNpc N(npcGroup_802431B4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242750),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_802430E4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_8024277C),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242750),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_8024314C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_8024277C),
    },
};

NpcGroupList N(npcGroupList_80243594) = {
    NPC_GROUP(N(npcGroup_802431B4), 0x00000000),
    {},
};

s32 pad_0035AC[] = {
    0x00000000,
};

// rodata: D_802435B0_ACE0D0

// rodata: D_802435B8_ACE0D8

// rodata: D_802435C0_ACE0E0

// rodata: D_802435C8_ACE0E8

// rodata: D_802435D0_ACE0F0

// rodata: D_802435D8_ACE0F8

// rodata: D_802435E0_ACE100

// rodata: D_802435E8_ACE108

// rodata: D_802435F0_ACE110

// rodata: D_802435F8_ACE118

// rodata: D_80243600_ACE120

// rodata: D_80243608_ACE128

// rodata: D_80243610_ACE130

// rodata: D_80243618_ACE138
