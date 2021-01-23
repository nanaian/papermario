#include "jan_15.h"

s32 pad_0000B4[3];
s32 pad_0002FC[1];
Script N(script_ExitWalk_80240360);
Script N(script_ExitWalk_802403F0);
Script N(script_8024044C);
Script N(main);
s32 pad_0005B8[2];
s32 unk_missing_802405EC[11];
Script N(script_80240618);
Script N(script_80240664);
Script N(script_Interact_80240694);
Script N(script_802407CC);
Script N(script_Idle_802409F4);
Script N(script_Hit_80241080);
Script N(script_Init_802410E8);
StaticNpc N(npcGroup_80241194)[3];
StaticNpc N(npcGroup_80241764)[1];
StaticNpc N(npcGroup_80241954)[1];
NpcGroupList N(npcGroupList_80241B44);
s32 pad_001B74[3];
Script N(script_SearchBush_80241B80);
Script N(script_ShakeTree_80241EE0);
s32 N(treeDropList_Tree2)[8];
Script N(script_802425B4);
s32 pad_002654[3];
Script N(script_MakeEntities);
s32 pad_0026CC[1];
const char D_802426D0_B7FFF0[8]; // "jan_16"
const char D_802426D8_B7FFF8[8]; // "jan_14"

// text: func_80240000_B7D920

s32 pad_0000B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400C0_B7D9E0

// text: func_80240130_B7DA50

s32 pad_0002FC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -300.0f, 0.0f, 120.0f, 0.0f },
    { 380.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900FD,
};

Script N(script_ExitWalk_80240360) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    if (SI_SAVE_VAR(0) < 20) {
        GotoMap(D_802426D0_B7FFF0, 3);
    } else {
        GotoMap(D_802426D0_B7FFF0, 0);
    }
    sleep 100;
});

Script N(script_ExitWalk_802403F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802426D8_B7FFF8, 1);
    sleep 100;
});

Script N(script_8024044C) = SCRIPT({
    bind N(script_ExitWalk_802403F0) to 0x80000 0;
    bind N(script_ExitWalk_80240360) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80241B44));
    await N(script_MakeEntities);
    spawn N(script_802425B4);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_8024044C);
    spawn EnterWalk;
    SetMusicTrack(0, 37, 0, 8);
    PlayAmbientSounds(3);
});

s32 pad_0005B8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802405C0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
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

s32 unk_missing_802405EC[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_80240618) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
});

Script N(script_80240664) = SCRIPT({
    sleep 45;
    BindNpcInteract(-1, N(script_Interact_80240694));
});

Script N(script_Interact_80240694) = SCRIPT({
    GetSelfVar(1, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetSelfVar(1, 1);
        PlaySoundAtNpc(-1, 8345, 0);
        SetNpcAnimation(-1, 0x430000);
        sleep 1;
        func_80240000_B7D920();
        SetNpcAnimation(-1, 0x430001);
        spawn {
            BindNpcInteract(-1, 0);
            spawn N(script_80240664);
            sleep 45;
            SetSelfVar(1, 0);
            SetNpcAnimation(-1, 0x430000);
        }
    }
});

NpcSettings N(npcSettings_802407A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = &N(script_80240618),
    .onInteract = &N(script_Interact_80240694),
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_802407CC) = SCRIPT({
    parallel {
        loop {
            RandInt(5, SI_VAR(0));
            if (SI_VAR(0) != 0) {
                SetNpcAnimation(-1, 0x360001);
                sleep 15;
            } else {
                SetNpcAnimation(-1, 0x360005);
                sleep 10;
                SetNpcAnimation(-1, 0x360006);
                sleep 5;
            }
        }
    }
    parallel {
        loop {
            RandInt(5, SI_VAR(0));
            if (SI_VAR(0) != 0) {
                SetNpcAnimation(1, 0x360001);
                sleep 15;
            } else {
                SetNpcAnimation(1, 0x360005);
                sleep 10;
                SetNpcAnimation(1, 0x360006);
                sleep 5;
            }
        }
    }
    loop {
        RandInt(5, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            SetNpcAnimation(2, 0x360001);
            sleep 15;
        } else {
            SetNpcAnimation(2, 0x360005);
            sleep 10;
            SetNpcAnimation(2, 0x360006);
            sleep 5;
        }
    }
});

Script N(script_Idle_802409F4) = SCRIPT({
    if (SI_SAVE_FLAG(1273) == 0) {
    0:
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 34) {
            sleep 1;
            goto 0;
        }
        DisablePlayerInput(1);
        ShowMessageAtScreenPos(0x1000BB, 320, 60);
        SI_SAVE_FLAG(1273) = 1;
        DisablePlayerInput(0);
    }
    SI_VAR(9) = spawn N(script_802407CC);
    AwaitPlayerApproach(400, 0xFFFFFFF6, 135);
    DisablePlayerInput(1);
    kill SI_VAR(9);
    sleep 15;
    SetNpcAnimation(0, 0x360001);
    SetNpcAnimation(1, 0x360001);
    SetNpcAnimation(2, 0x360001);
    spawn {
        sleep 10;
        SetNpcAnimation(2, 0x360004);
        SI_VAR(0) = 0;
        loop 15 {
            SI_VAR(0) += 24;
            SetNpcRotation(2, 0, SI_VAR(0), 0);
            sleep 1;
        }
        PlaySoundAtNpc(2, 945, 0);
        SetNpcAnimation(2, 0x360001);
    }
    SetNpcAnimation(0, 0x360004);
    SI_VAR(0) = 0;
    loop 15 {
        SI_VAR(0) += 24;
        SetNpcRotation(0, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(0, 8369, 0);
    SetNpcAnimation(0, 0x360001);
    sleep 5;
    SetNpcAnimation(1, 0x360004);
    SI_VAR(0) = 0;
    loop 15 {
        SI_VAR(0) += 24;
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(1, 8369, 0);
    SetNpcAnimation(1, 0x360001);
    sleep 5;
    SetNpcAnimation(0, 0x360004);
    SetNpcAnimation(1, 0x360004);
    SetNpcAnimation(2, 0x360004);
    SI_VAR(0) = 0;
    loop 12 {
        SI_VAR(0) += 30;
        SetNpcRotation(0, 0, SI_VAR(0), 0);
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        SetNpcRotation(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(0, 8370, 0);
    SI_VAR(0) = 0;
    loop 12 {
        SI_VAR(0) += 30;
        SetNpcRotation(0, 0, SI_VAR(0), 0);
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        SetNpcRotation(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(0, 8370, 0);
    SI_VAR(0) = 0;
    loop 12 {
        SI_VAR(0) += 30;
        SetNpcRotation(0, 0, SI_VAR(0), 0);
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        SetNpcRotation(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
    PlaySoundAtNpc(0, 8370, 0);
    loop 3 {
        sleep 5;
        PlaySoundAtNpc(0, 8371, 0);
    }
    SetNpcAnimation(0, 0x360005);
    SetNpcAnimation(1, 0x360005);
    SetNpcAnimation(2, 0x360005);
    sleep 20;
    SetNpcAnimation(0, 0x360006);
    SetNpcAnimation(1, 0x360006);
    SetNpcAnimation(2, 0x360006);
    PlaySoundAtNpc(0, 946, 0);
    DisablePlayerInput(0);
    StartBossBattle(3);
});

Script N(script_Hit_80241080) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_SAVE_VAR(0) = 19;
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_802410E8) = SCRIPT({
    if (SI_SAVE_VAR(0) < 19) {
        BindNpcIdle(-1, N(script_Idle_802409F4));
        BindNpcHit(-1, N(script_Hit_80241080));
    } else {
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        SetNpcPos(2, 0, 0xFFFFFC18, 0);
    }
});

StaticNpc N(npcGroup_80241194)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802405C0),
        .pos = { 365.0, 0.0, -45.0 },
        .flags = 0x00040800,
        .init = N(script_Init_802410E8),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802405C0),
        .pos = { 325.0, 0.0, 0.0 },
        .flags = 0x00040800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802405C0),
        .pos = { 375.0, 0.0, 45.0 },
        .flags = 0x00040800,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

StaticNpc N(npcGroup_80241764)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802407A0),
        .pos = { -183.0, 0.0, 47.0 },
        .flags = 0x00408905,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_80241954)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802407A0),
        .pos = { -124.0, 0.0, 20.0 },
        .flags = 0x00408905,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

NpcGroupList N(npcGroupList_80241B44) = {
    NPC_GROUP(N(npcGroup_80241194), 0x15030005),
    NPC_GROUP(N(npcGroup_80241764), 0x00000000),
    NPC_GROUP(N(npcGroup_80241954), 0x00000000),
    {},
};

s32 pad_001B74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80241B80) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240130_B7DA50, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240130_B7DA50, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80241EE0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240130_B7DA50, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240130_B7DA50, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240130_B7DA50, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240130_B7DA50, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x10, 0x11, 0x12 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0xF },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, nanf }, { nanf, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_8024252C) =  { -94.0f, 0.0f, -102.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x15, 0x16, 0x17 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x14 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000157, 0x000000AA, 0x00000064, 0xFFFFFFB0, 0x0000000F, 0xF840606E, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { 2.3e-43f, 1.6e-43f, nanf }, { 3.49e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_802425A4) =  { 204.0f, 0.0f, -101.0f, 0.0f };

Script N(script_802425B4) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80241EE0) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_ShakeTree_80241EE0) to TriggerFlag_BOMB N(triggerCoord_8024252C);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80241EE0) to TriggerFlag_WALL_HAMMER 20;
    bind N(script_ShakeTree_80241EE0) to TriggerFlag_BOMB N(triggerCoord_802425A4);
});

s32 pad_002654[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BC7AC, 385, 0, 0xFFFFFFB5, 10, 0x80000000);
    MakeEntity(0x802EAB04, 0, 0, 0, 0, 7, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1270));
});

s32 pad_0026CC[] = {
    0x00000000,
};

// rodata: D_802426D0_B7FFF0

// rodata: D_802426D8_B7FFF8
