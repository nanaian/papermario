#include "flo_22.h"

s32 unk_missing_80240034[7];
s32 pad_00028C[1];
Script N(script_802402E0);
Script N(script_ExitWalk_80240350);
Script N(script_802403AC);
Script N(main);
s32 pad_000518[2];
Script N(script_Idle_8024054C);
Script N(script_Defeat_802405E4);
Script N(script_Init_80240740);
Script N(script_Idle_80240778);
Script N(script_Defeat_80240810);
Script N(script_Init_802409CC);
StaticNpc N(npcGroup_80240A04)[1];
StaticNpc N(npcGroup_80240BF4)[1];
NpcGroupList N(npcGroupList_80240DE4);
s32 pad_000E08[2];
s32 N(itemList_80240E10)[5];
Script N(script_80240E24);
Script N(script_80240E84);
Script N(script_80241028);
Script N(script_80241528);
s32 pad_001594[3];
Script N(script_SearchBush_802415A0);
Script N(script_ShakeTree_80241900);
Script N(script_80241F6C);
s32 pad_00200C[1];
const char D_80242010_CEE250[8]; // "flo_03"
s32 pad_002018[2];

// text: func_80240000_CEC240

s32 unk_missing_80240034[] = {
    0x00000000, 0x00000000, 0x00000000, 0x03E00008, 0x24020002, 0x00000000, 0x00000000,
};

// text: func_80240050_CEC290

// text: func_802400C0_CEC300

s32 pad_00028C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -230.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190125,
};

Script N(script_802402E0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_ExitWalk_80240350) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242010_CEE250, 1);
    sleep 100;
});

Script N(script_802403AC) = SCRIPT({
    bind N(script_ExitWalk_80240350) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80240DE4));
    spawn N(script_80241F6C);
    spawn N(script_80241528);
    GetEntryID(SI_VAR(0));
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    SI_VAR(0) = N(script_802403AC);
    spawn EnterWalk;
    spawn N(script_80240E24);
    await N(script_802402E0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CEC240();
    }
});

s32 pad_000518[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240520) = {
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

Script N(script_Idle_8024054C) = SCRIPT({
    SI_MAP_VAR(10) = 0;
    loop {
        match SI_MAP_VAR(10) {
            == 0 {}
            == 1 {
                SetPlayerAnimation(0x1002E);
                SI_MAP_VAR(10) = 0;
                StartBattle();
            }
        }
        sleep 1;
    }
});

Script N(script_Defeat_802405E4) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn {
                sleep 25;
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
                SetNpcFlagBits(-1, 2, 0);
            }
            DoNpcDefeat();
        }
        == 1 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
        == 2 {
            SetNpcAnimation(-1, 0x4B0001);
            SetNpcPos(-1, 30, 60, 0);
            sleep 10;
            SetNpcJumpscale(-1, 0);
            NpcJump0(-1, 30, 0, 0, 15);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

Script N(script_Init_80240740) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024054C));
    BindNpcDefeat(-1, N(script_Defeat_802405E4));
});

Script N(script_Idle_80240778) = SCRIPT({
    SI_MAP_VAR(11) = 0;
    loop {
        match SI_MAP_VAR(11) {
            == 0 {}
            == 1 {
                SetPlayerAnimation(0x1002E);
                SI_MAP_VAR(11) = 0;
                StartBattle();
            }
        }
        sleep 1;
    }
});

Script N(script_Defeat_80240810) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn {
                sleep 25;
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
                SetNpcFlagBits(-1, 2, 0);
            }
            DoNpcDefeat();
        }
        == 1 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
        == 3 {
            SetNpcAnimation(-1, 0x480001);
            sleep 10;
            SetNpcJumpscale(-1, 2.0);
            NpcJump0(-1, 30, 0, 0, 15);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
        == 2 {
            SetNpcAnimation(-1, 0x480001);
            sleep 10;
            SetNpcJumpscale(-1, 2.0);
            NpcJump0(-1, 30, 0, 0, 15);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

Script N(script_Init_802409CC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240778));
    BindNpcDefeat(-1, N(script_Defeat_80240810));
});

StaticNpc N(npcGroup_80240A04)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240520),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F04,
        .init = N(script_Init_80240740),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x004B0002, 0x004B0002, 0x004B0003, 0x004B0003, 0x004B0001, 0x004B0002, 0x004B0006, 0x004B0006, 0x004B0004, 0x004B0002, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001,
        },
    },
};

StaticNpc N(npcGroup_80240BF4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240520),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F04,
        .init = N(script_Init_802409CC),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .animations = {
            0x00480001, 0x00480002, 0x00480003, 0x00480003, 0x00480001, 0x00480001, 0x00480008, 0x00480008, 0x00480006, 0x00480007, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001, 0x00480001,
        },
    },
};

NpcGroupList N(npcGroupList_80240DE4) = {
    NPC_GROUP(N(npcGroup_80240A04), 0x18170003),
    NPC_GROUP(N(npcGroup_80240BF4), 0x180F0002),
    {},
};

s32 pad_000E08[] = {
    0x00000000, 0x00000000,
};

s32 N(itemList_80240E10)[] = {
    0x0000009F, 0x0000009E, 0x000000A0, 0x000000A1, 0x00000000,
};

Script N(script_80240E24) = SCRIPT({
    DisablePlayerInput(1);
    sleep 20;
    ShowMessageAtScreenPos(0x1100DB, 300, 120);
    sleep 10;
    DisablePlayerInput(0);
});

Script N(script_80240E84) = SCRIPT({
    SetPlayerAnimation(0x6000E);
    spawn {
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(6) = 35;
        SI_VAR(5) = 5;
        MakeItemEntity(SI_VAR(8), SI_VAR(2), SI_VAR(6), 0, 1, 0);
        SI_VAR(7) = SI_VAR(0);
        MakeLerp(SI_VAR(2), 35, 20, 5);
        loop {
            UpdateLerp();
            SetItemPos(SI_VAR(7), SI_VAR(0), SI_VAR(6), 0);
            SI_VAR(6) += SI_VAR(5);
            SI_VAR(5) += -1;
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        RemoveItemEntity(SI_VAR(7));
    }
    sleep 10;
    PlaySoundAt(770, 0, 35, 0, 0);
    sleep 5;
    SetPlayerAnimation(0x10002);
    sleep 10;
});

Script N(script_80241028) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerInput(0);
    func_802D663C();
    func_802D6954();
    DisablePlayerInput(1);
    SI_VAR(8) = SI_VAR(0);
    match SI_VAR(8) {
        <= -1 {}
        <= 0 {
            ShowMessageAtScreenPos(0x1D015C, 160, 40);
        }
        == 158 {
            await N(script_80240E84);
            RemoveItemAt(SI_VAR(1));
            if (SI_SAVE_FLAG(1395) == 0) {
                ShowMessageAtWorldPos(0x1100DD, 35, 35, 0);
                SI_SAVE_FLAG(1395) = 1;
                MakeItemEntity(312, 0xFFFFFFDD, 0, 0, 0, SI_SAVE_FLAG(1392));
                SI_VAR(7) = SI_VAR(0);
                SetNpcFlagBits(0, 2, 1);
                SetNpcFlagBits(0, 16, 0);
                SetNpcPos(0, 35, 0, 0);
                SetNpcJumpscale(0, 1.0);
                spawn {
                    NpcJump0(0, 0xFFFFFFCB, 0, 0, 25);
                    NpcJump0(0, 0xFFFFFFB7, 0, 0, 15);
                    NpcJump0(0, 0xFFFFFFAD, 0, 0, 8);
                }
                loop 53 {
                    GetNpcPos(0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
                    SetItemPos(SI_VAR(7), SI_VAR(1), SI_VAR(2), SI_VAR(3));
                    sleep 1;
                }
                SetNpcPos(0, 0, 0xFFFFFC18, 0);
                SetNpcFlagBits(0, 2, 0);
                SetNpcFlagBits(0, 16, 1);
            } else {
                ShowMessageAtWorldPos(0x1100DE, 35, 35, 0);
            }
        }
        else {
            await N(script_80240E84);
            RemoveItemAt(SI_VAR(1));
            ShowMessageAtWorldPos(0x1100DC, 35, 35, 0);
            RandInt(1, SI_VAR(1));
            if (SI_VAR(1) == 0) {
                SetNpcJumpscale(0, 0.0);
                NpcFacePlayer(0, 0);
                sleep 1;
                SetNpcPos(0, 30, 0, 0);
                SetNpcAnimation(0, 0x4B0001);
                NpcJump0(0, 30, 60, 0, 20);
                sleep 10;
                SetNpcAnimation(0, 0x4B0004);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(1) += 20;
                NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5);
                SI_MAP_VAR(10) = 1;
            } else {
                SetNpcPos(1, 30, 0, 0);
                SetNpcAnimation(1, 0x48000E);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(1) += 20;
                SetNpcJumpscale(1, 2.0);
                NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
                SI_MAP_VAR(11) = 1;
            }
        }
    }
    DisablePlayerInput(0);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80241528) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241028), TriggerFlag_WALL_INTERACT, 9, N(itemList_80240E10), 0, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1395), 1),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, 312, 0xFFFFFFAD, 0, 0, 0, SI_SAVE_FLAG(1392)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_001594[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802415A0) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802400C0_CEC300, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802400C0_CEC300, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80241900) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802400C0_CEC300, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_802400C0_CEC300, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_802400C0_CEC300, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_802400C0_CEC300, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x3,
    .modelIDs = { 0x15, 0x16, 0x17 },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = NULL,
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241F28) =  { 93.0f, 0.0f, -89.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x3,
    .modelIDs = { 0x19, 0x1A, 0x1B },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = NULL,
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80241F5C) =  { 150.0f, 0.0f, 135.0f, 0.0f };

Script N(script_80241F6C) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80241900) to TriggerFlag_WALL_HAMMER 14;
    bind N(script_ShakeTree_80241900) to TriggerFlag_BOMB N(triggerCoord_80241F28);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80241900) to TriggerFlag_WALL_HAMMER 16;
    bind N(script_ShakeTree_80241900) to TriggerFlag_BOMB N(triggerCoord_80241F5C);
});

s32 pad_00200C[] = {
    0x00000000,
};

// rodata: D_80242010_CEE250

s32 pad_002018[] = {
    0x00000000, 0x00000000,
};
