#include "dgb_15.h"

s32 pad_00178C[1];
s32 pad_001864[3];
Script N(script_802418E0);
s32 pad_0019B4[3];
s32 N(itemList_802419C0)[2];
Script N(script_ExitDoubleDoor_802419C8);
Script N(script_ExitDoubleDoor_80241A7C);
Script N(script_ExitSingleDoor_80241B30);
Script N(script_80241BE4);
Script N(script_EnterSingleDoor_80241C88);
Script N(main);
s32 pad_001E94[3];
Script N(script_80241EA0);
s32 unk_missing_80241F5C[12];
s32 N(unk_80241F8C)[12];
Script N(script_80241FBC);
s32 unk_missing_8024202C[11];
Script N(script_80242058);
s32 unk_missing_80242100[11];
s32 unk_missing_80242158[11];
Script N(script_80242184);
Script N(script_Idle_80242238);
Script N(script_802424E8);
Script N(script_NpcAI_8024274C);
Script N(script_Defeat_802427B0);
Script N(script_Init_802427EC);
StaticNpc N(npcGroup_802428C0)[1];
NpcGroupList N(npcGroupList_80242AB0);
s32 pad_002AC8[2];
Script N(script_80242AD0);
Script N(script_80242C38);
Script N(script_MakeEntities);
const char D_80242CD0_C521E0[8]; // "dgb_14"
const char D_80242CD8_C521E8[8]; // "dgb_17"
const char D_80242CE0_C521F0[8]; // "dgb_16"
s32 pad_002CE8[2];
const char D_80243028_C52538[8]; // "dgb_14"

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240208_C4F718

// text: func_802403BC_C4F8CC

// text: func_8024061C_C4FB2C

// text: func_802408D0_C4FDE0

// text: func_80240A28_C4FF38

// text: N(UnkNpcAIFunc1)

// text: func_80240D90_C502A0

// text: func_80240F4C_C5045C

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_802410EC_C505FC

// text: func_8024121C_C5072C

// text: N(UnkNpcDurationFlagFunc)

// text: func_802413A4_C508B4

// text: func_80241464_C50974

// text: func_80241760_C50C70

s32 pad_00178C[] = {
    0x00000000,
};

// text: func_80241790_C50CA0

// text: func_80241830_C50D40

s32 pad_001864[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -1290.0f, 0.0f, 180.0f, 90.0f },
    { 125.0f, 0.0f, 180.0f, 270.0f },
    { 0.0f, 0.0f, 88.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900CF,
};

Script N(script_802418E0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            if (SI_SAVE_VAR(203) == 15) {
                SetMusicTrack(0, 85, 0, 8);
            } else {
                SetMusicTrack(0, 30, 0, 8);
            }
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_0019B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(itemList_802419C0)[] = {
    0x00000013, 0x00000000,
};

Script N(script_ExitDoubleDoor_802419C8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 19;
    SI_VAR(2) = 12;
    SI_VAR(3) = 14;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80242CD0_C521E0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80241A7C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 1;
    SI_VAR(1) = 10;
    SI_VAR(2) = 19;
    SI_VAR(3) = 17;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80242CD8_C521E8, 0);
    sleep 100;
});

Script N(script_ExitSingleDoor_80241B30) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 2;
    SI_VAR(1) = 6;
    SI_VAR(2) = 22;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80242CE0_C521F0, 0);
    sleep 100;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80241BE4) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_802419C8), TriggerFlag_WALL_INTERACT, 19, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitSingleDoor_80241B30), TriggerFlag_WALL_INTERACT, 6, 1, 0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1066), 0),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242AD0), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_802419C0), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80241A7C), TriggerFlag_WALL_INTERACT, 10, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_EnterSingleDoor_80241C88) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            SI_VAR(2) = 12;
            SI_VAR(3) = 14;
            await EnterDoubleDoor;
        }
        == 1 {
            UseDoorSounds(3);
            SI_VAR(2) = 19;
            SI_VAR(3) = 17;
            await EnterDoubleDoor;
        }
        == 2 {
            UseDoorSounds(0);
            SI_VAR(2) = 22;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
    }
    spawn N(script_80241BE4);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SI_AREA_FLAG(1) = 0;
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    if (SI_SAVE_FLAG(1068) == 0) {
        MakeNpcs(1, N(npcGroupList_80242AB0));
    }
    await N(script_MakeEntities);
    spawn N(script_802418E0);
    spawn N(script_EnterSingleDoor_80241C88);
});

s32 pad_001E94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241EA0) = SCRIPT({
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

s32 unk_missing_80241F5C[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x0039000C, 0x00390007, 0x00390008, 0x00390011,
    0x00390012, 0xFFFFFFFF, 0x00390000, 0xFFFFFFFF,
};

s32 N(unk_80241F8C)[] = {
    0x3FC00000, 0x00000078, 0x0000001E, 0x42AA0000, 0x42820000, 0x00000005, 0x40600000, 0x0000005A,
    0x0000000C, 0x42DC0000, 0x42B40000, 0x00000003,
};

Script N(script_80241FBC) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 8);
    SetSelfVar(3, 12);
    func_8024061C_C4FB2C(N(unk_80241F8C));
});

s32 unk_missing_8024202C[] = {
    0x00000000, 0x00240022, 0x00000000, 0x00000000, N(script_80241FBC), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000D0000,
};

Script N(script_80242058) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 32);
    SetSelfVar(2, 50);
    SetSelfVar(3, 32);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8389);
    func_802403BC_C4F8CC();
});

s32 unk_missing_80242100[] = {
    0x00000000, 0x000E0012, 0x00000000, 0x00000000, N(script_80242058), 0x00000000, 0x00000000, N(script_80241EA0),
    0x00000000, 0x00000000, 0x000D0008,
};

NpcSettings N(npcSettings_8024212C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x5A,
    .radius = 0x41,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

s32 unk_missing_80242158[] = {
    0x00000000, 0x00180018, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x000D0000,
};

Script N(script_80242184) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        SI_VAR(1) -= SI_VAR(0);
        if (SI_VAR(1) < 150) {
            break;
        }
        sleep 1;
    }
    SI_SAVE_FLAG(1067) = 1;
    SI_AREA_FLAG(1) = 1;
});

Script N(script_Idle_80242238) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) >= 0xFFFFFB82) {
            break;
        }
        sleep 1;
    }
    DisablePlayerInput(1);
    SetMusicTrack(0, 85, 0, 8);
    sleep 15;
    spawn {
        UseSettingsFrom(0, 0xFFFFFFCE, 0, 180);
        SetCamSpeed(0, 2.0);
        SetPanTarget(0, 0xFFFFFFCE, 0, 180);
        PanToTarget(0, 0, 1);
    }
    SI_SAVE_VAR(203) = 15;
    SetNpcPos(-1, 0, 0, 88);
    SetNpcAnimation(0, 0x6A0009);
    SetNpcYaw(-1, 270);
    NpcMoveTo(-1, 0xFFFFFFCB, 180, 60);
    SetMusicTrack(0, 85, 0, 8);
    SetNpcAnimation(-1, 0x6A0006);
    sleep 15;
    SpeakToPlayer(-1, 0x6A0010, 0x6A0006, 0, 0xE00F3);
    sleep 15;
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamSpeed(0, 2.0);
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    }
    BindNpcAI(-1, N(script_NpcAI_8024274C));
});

Script N(script_802424E8) = SCRIPT({
    GetNpcPos(-1, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        if (SI_VAR(3) != SI_VAR(6)) {
            PlaySoundAtNpc(-1, 8438, 0x10002);
            GetDist2D(SI_VAR(10), SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(5));
            match SI_VAR(10) {
                < 200 {
                    spawn {
                        ShakeCam(0, 0, 5, 1.6005859375);
                        sleep 5;
                        ShakeCam(0, 0, 2, 0.80078125);
                    }
                }
                < 300 {
                    spawn {
                        ShakeCam(0, 0, 5, 0.6005859375);
                        sleep 5;
                        ShakeCam(0, 0, 2, 0.30078125);
                    }
                }
                >= 300 {
                    spawn {
                        ShakeCam(0, 0, 5, 0.1005859375);
                        sleep 5;
                        ShakeCam(0, 0, 2, 0.05078125);
                    }
                }
            }
            sleep 12;
        } else {
        }
        GetNpcPos(-1, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    }
});

NpcAISettings N(aISettings_8024271C) = {
    .moveSpeed = 3.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0f,
    .unk_10 = 80.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 3.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x2,
    .chaseRadius = 160.0f,
    .unk_28 = 80.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024274C) = SCRIPT({
    spawn N(script_80242184);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(0, 0x6A000C);
    spawn N(script_802424E8);
    func_80241464_C50974(N(aISettings_8024271C));
});

Script N(script_Defeat_802427B0) = SCRIPT({
    func_80241760_C50C70();
    GotoMap(D_80243028_C52538, 1);
    sleep 100;
});

Script N(script_Init_802427EC) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFE0) {
        RemoveNpc(-1);
        return;
    }
    SetNpcScale(-1, 1.25, 1.25, 1.25);
    if (SI_SAVE_VAR(203) != 15) {
        BindNpcIdle(-1, N(script_Idle_80242238));
    } else {
        SetNpcPos(-1, 0xFFFFFECA, 0, 180);
        BindNpcIdle(-1, N(script_NpcAI_8024274C));
    }
    BindNpcDefeat(-1, N(script_Defeat_802427B0));
});

StaticNpc N(npcGroup_802428C0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024212C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00A40900,
        .init = N(script_Init_802427EC),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000007, 0xFFFFFE0C, 0x00000000, 0x000000C8, 0xFFFFFD44, 0x00000000, 0x000000C8, 0xFFFFFC7C, 0x00000000, 0x000000C8, 0xFFFFFC18, 0x00000000, 0x000000C8, 0xFFFFFCE0, 0x00000000, 0x000000C8, 0xFFFFFDA8, 0x00000000, 0x000000C8, 0xFFFFFE70, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFE0C, 0x00000000, 0x000000C8, 0x000003E8, 0x000000FA, 0x00000001, 0x00000001 },
        .animations = {
            0x006A0006, 0x006A0009, 0x006A000C, 0x006A000C, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000,
        },
    },
};

NpcGroupList N(npcGroupList_80242AB0) = {
    NPC_GROUP(N(npcGroup_802428C0), 0x0F040001),
    {},
};

s32 pad_002AC8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80242AD0) = SCRIPT({
    group 0;
    suspend group 1;
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        resume group 1;
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        resume group 1;
        return;
    }
    FindKeyItem(19, SI_VAR(0));
    RemoveKeyItemAt(SI_VAR(0));
    0x802D6954();
    SI_SAVE_FLAG(1066) = 1;
    func_80241790_C50CA0(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80241830_C50D40();
    resume group 1;
    unbind;
});

Script N(script_80242C38) = SCRIPT({
    bind N(script_ExitDoubleDoor_80241A7C) to TriggerFlag_WALL_INTERACT 10;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1066) == 0) {
        MakeEntity(0x802BCD68, 130, 8, 175, 0xFFFFFFB0, 0x80000000);
        AssignScript(N(script_80242C38));
        SI_MAP_VAR(0) = SI_VAR(0);
    }
});

// rodata: D_80242CD0_C521E0

// rodata: D_80242CD8_C521E8

// rodata: D_80242CE0_C521F0

s32 pad_002CE8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242CF0_C52200

// rodata: jtbl_80242CF8_C52208

// rodata: D_80242E88_C52398

// rodata: D_80242E90_C523A0

// rodata: jtbl_80242E98_C523A8

// rodata: D_80243028_C52538
