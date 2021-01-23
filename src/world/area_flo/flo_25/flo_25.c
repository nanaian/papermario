#include "flo_25.h"

s32 pad_000034[3];
s32 pad_001FE8[2];
s32 pad_00222C[1];
s32 pad_0022C4[3];
Script N(script_80242330);
Script N(script_802423A0);
Script N(script_ExitWalk_8024264C);
Script N(script_ExitWalk_802426A8);
Script N(script_80242704);
Script N(main);
f32 N(floatTable_8024291C)[6];
Script N(script_NpcAI_80242964);
Script N(script_NpcAI_80242A30);
s32 N(unk_80242ACC)[1];
s32 N(unk_80242AD0)[1];
Script N(script_80242AD4);
Script N(script_80242C08);
Script N(script_Interact_80242C58);
Script N(script_Init_80243564);
StaticNpc N(npcGroup_8024368C)[1];
StaticNpc N(npcGroup_8024387C)[1];
StaticNpc N(npcGroup_80243A6C)[1];
NpcGroupList N(npcGroupList_80243C5C);
s32 pad_003C8C[1];
Script N(script_MakeEntities);
s32 pad_003CD8[2];
Script N(script_SearchBush_80243CE0);
Script N(script_ShakeTree_80244040);
s32 N(treeDropList_Tree1)[15];
Script N(script_802446BC);
s32 pad_004734[3];
Script N(script_80244740);
Script N(script_802449EC);
Script N(script_80244D0C);
s32 pad_004ECC[1];
const char D_80244ED0_CF7AA0[8]; // "flo_00"
const char D_80244ED8_CF7AA8[8]; // "flo_07"
s32 pad_004F34[1];
s32 pad_004F94[3];

// text: func_80240000_CF2BD0

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CF2C10

// text: func_802401F0_CF2DC0

// text: N(UnkNpcAIFunc1)

// text: func_802408D8_CF34A8

// text: N(UnkNpcAIFunc2)

// text: func_80240C94_CF3864

// text: func_80240D00_CF38D0

// text: N(UnkNpcAIFunc3)

// text: func_80240E98_CF3A68

// text: func_80241228_CF3DF8

// text: func_8024134C_CF3F1C

// text: func_80241538_CF4108

// text: func_80241668_CF4238

// text: func_802418E8_CF44B8

// text: func_80241944_CF4514

// text: func_80241B2C_CF46FC

// text: func_80241B88_CF4758

// text: func_80241D58_CF4928

// text: func_80241DAC_CF497C

// text: func_80241DE4_CF49B4

// text: func_80241E80_CF4A50

// text: func_80241F44_CF4B14

// text: func_80241FB4_CF4B84

s32 pad_001FE8[] = {
    0x00000000, 0x00000000,
};

// text: func_80241FF0_CF4BC0

// text: func_80242060_CF4C30

s32 pad_00222C[] = {
    0x00000000,
};

// text: func_80242230_CF4E00

s32 pad_0022C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 620.0f, 0.0f, 0.0f, 270.0f },
    { -620.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190128,
};

Script N(script_80242330) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_802423A0) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_ExitWalk_8024264C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244ED0_CF7AA0, 3);
    sleep 100;
});

Script N(script_ExitWalk_802426A8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244ED8_CF7AA8, 0);
    sleep 100;
});

Script N(script_80242704) = SCRIPT({
    bind N(script_ExitWalk_802426A8) to 0x80000 0;
    bind N(script_ExitWalk_8024264C) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80243C5C));
    await N(script_MakeEntities);
    spawn N(script_80244D0C);
    spawn N(script_802446BC);
    SI_VAR(0) = 0xFFFFFEF2;
    SI_VAR(1) = 0xFFFFFF42;
    SI_VAR(2) = 640;
    SI_VAR(3) = 0xFFFFFFC4;
    SI_VAR(4) = 60;
    spawn N(script_802423A0);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80242704);
    spawn EnterWalk;
    await N(script_80242330);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CF2BD0();
    }
});

NpcSettings N(npcSettings_802428F0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x38,
    .radius = 0x28,
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

f32 N(floatTable_8024291C)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_80242934) = {
    .moveSpeed = 1.0,
    .moveTime = 0x2D,
    .waitTime = 0x3C,
    .alertRadius = 100.0,
    .unk_10 = 0.0,
    .unk_14 = 0x3,
    .chaseSpeed = 3.5999999046325684,
    .unk_1C = 0xA,
    .unk_20 = 0x1,
    .chaseRadius = 120.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242964) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0);
    SetSelfVar(6, 0);
    SetSelfVar(1, 600);
    func_80241944_CF4514(N(aISettings_80242934));
});

NpcSettings N(npcSettings_802429D4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242964),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

NpcAISettings N(aISettings_80242A00) = {
    .moveSpeed = 1.0,
    .moveTime = 0x1E,
    .waitTime = 0x5,
    .alertRadius = 80.0,
    .unk_10 = 30.0,
    .unk_14 = 0x2,
    .chaseSpeed = 4.5,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 90.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242A30) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(5, 0xFFFFFD8A);
    SetSelfVar(6, 50);
    SetSelfVar(1, 200);
    func_8024134C_CF3F1C(N(aISettings_80242A00));
});

NpcSettings N(npcSettings_80242AA0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242A30),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

s32 N(unk_80242ACC)[] = {
    0x00000000,
};

s32 N(unk_80242AD0)[] = {
    0x00000000,
};

Script N(script_80242AD4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80241B88_CF4758(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241DAC_CF497C(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242C08) = {
    SI_CMD(ScriptOpcode_CALL, func_80241DE4_CF49B4, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242AD4), 0x10, 0, 0x80244FA0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80241D58_CF4928, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Interact_80242C58) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_SAVE_FLAG(1363) == 0) {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 350);
        SetCamPitch(0, 18.5, -7.5);
        SetCamSpeed(0, 4.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(-1, 0xC60102, 0xC60101, 0, 0x11003B);
        SetPlayerAnimation(0x10021);
        func_80241FB4_CF4B84();
        SI_VAR(0) = 0x80245110;
        SI_VAR(1) = 0;
        await N(script_80242C08);
        match SI_VAR(0) {
            <= 0 {
                SetPlayerAnimation(0x10000);
                SpeakToPlayer(-1, 0xC60102, 0xC60101, 0, 0x11003C);
            }
            else {
                SI_VAR(8) = SI_VAR(0);
                func_80241F44_CF4B14(SI_VAR(0));
                MakeItemEntity(SI_VAR(8), 505, 20, 0xFFFFFFE8, 1, 0);
                SI_VAR(7) = SI_VAR(0);
                PlaySoundAtNpc(-1, 8341, 0);
                SetNpcAnimation(-1, 0xC60103);
                sleep 20;
                RemoveItemEntity(SI_VAR(7));
                match SI_VAR(8) {
                    == 159 {
                        SpeakToPlayer(-1, 0xC60104, 0xC60101, 0, 0x11003F);
                        PlaySoundAtNpc(-1, 540, 0);
                        EndSpeech(-1, 0xC60109, 0xC60108, 0);
                        SetNpcAnimation(-1, 0xC60107);
                        PlaySoundAtCollider(14, 457, 0);
                        ModifyColliderFlags(0, 14, 0x7FFFFE00);
                        MakeLerp(0, 100, 30, 1);
                        loop {
                            UpdateLerp();
                            SI_VAR(8) =f SI_VAR(0);
                            SI_VAR(9) =f SI_VAR(0);
                            SI_VAR(8) *= 0.5;
                            SI_VAR(9) *= 1.2001953125;
                            RotateModel(86, SI_VAR(8), 0, -1, 0);
                            RotateModel(87, SI_VAR(8), 0, -1, 0);
                            RotateModel(88, SI_VAR(8), 0, -1, 0);
                            RotateModel(82, SI_VAR(9), 0, 1, 0);
                            RotateModel(83, SI_VAR(9), 0, 1, 0);
                            RotateModel(84, SI_VAR(9), 0, 1, 0);
                            sleep 1;
                            if (SI_VAR(1) != 1) {
                                break;
                            }
                        }
                        SetNpcAnimation(-1, 0xC60105);
                        SI_SAVE_FLAG(1363) = 1;
                    }
                    == 160 {
                        SpeakToPlayer(-1, 0xC60104, 0xC60101, 0, 0x11003E);
                        SetNpcAnimation(-1, 0xC60101);
                    }
                    == 158 {
                        SpeakToPlayer(-1, 0xC60104, 0xC60101, 0, 0x11003E);
                        SetNpcAnimation(-1, 0xC60101);
                    }
                    else {
                        SpeakToPlayer(-1, 0xC60104, 0xC60101, 0, 0x11003D);
                        SetNpcAnimation(-1, 0xC60106);
                        PlaySoundAtNpc(-1, 8342, 0);
                        MakeItemEntity(SI_VAR(8), 0xFFFFFF83, 20, 0, 1, 0);
                        SI_VAR(7) = SI_VAR(0);
                        sleep 5;
                        GetAngleToPlayer(-1, SI_VAR(0));
                        if (SI_VAR(0) < 180) {
                            MakeLerp(0, 100, 7, 0);
                            loop {
                                UpdateLerp();
                                SI_VAR(2) = -0.5;
                                SI_VAR(3) = -0.19921875;
                                SI_VAR(4) = 0.900390625;
                                SI_VAR(2) *=f SI_VAR(0);
                                SI_VAR(3) *=f SI_VAR(0);
                                SI_VAR(4) *=f SI_VAR(0);
                                SI_VAR(2) += 500.0;
                                SI_VAR(3) += 15.0;
                                SI_VAR(4) += -20.0;
                                func_80241E80_CF4A50(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                                sleep 1;
                                if (SI_VAR(1) != 1) {
                                    break;
                                }
                            }
                        } else {
                            MakeLerp(0, 100, 7, 0);
                            loop {
                                UpdateLerp();
                                SI_VAR(2) = 0.5;
                                SI_VAR(3) = -0.19921875;
                                SI_VAR(4) = 0.900390625;
                                SI_VAR(2) *=f SI_VAR(0);
                                SI_VAR(3) *=f SI_VAR(0);
                                SI_VAR(4) *=f SI_VAR(0);
                                SI_VAR(2) += 510.0;
                                SI_VAR(3) += 15.0;
                                SI_VAR(4) += -20.0;
                                func_80241E80_CF4A50(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                                sleep 1;
                                if (SI_VAR(1) != 1) {
                                    break;
                                }
                            }
                        }
                        SetNpcAnimation(-1, 0xC60101);
                        RemoveItemEntity(SI_VAR(7));
                        SetNpcAnimation(-1, 0xC60101);
                        EndSpeech(-1, 0xC60102, 0xC60101, 0);
                    }
                }
            }
        }
        spawn {
            ResetCam(0, 6.0);
        }
        sleep 10;
    } else {
        if (SI_SAVE_VAR(0) < 57) {
            SpeakToPlayer(-1, 0xC60109, 0xC60108, 0, 0x110040);
        } else {
            SpeakToPlayer(-1, 0xC60109, 0xC60108, 0, 0x110041);
        }
    }
    DisablePlayerInput(0);
    unbind;
});

Script N(script_Init_80243564) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242C58));
    if (SI_SAVE_FLAG(1363) == 1) {
        SetNpcAnimation(-1, 0xC60105);
        ModifyColliderFlags(0, 14, 0x7FFFFE00);
        RotateModel(86, 50, 0, -1, 0);
        RotateModel(87, 50, 0, -1, 0);
        RotateModel(88, 50, 0, -1, 0);
        RotateModel(82, 120, 0, 1, 0);
        RotateModel(83, 120, 0, 1, 0);
        RotateModel(84, 120, 0, 1, 0);
    }
});

StaticNpc N(npcGroup_8024368C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802428F0),
        .pos = { 505.0, 0.0, -25.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80243564),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101, 0x00C60101,
        },
        .tattle = 0x1A00DA,
    },
};

StaticNpc N(npcGroup_8024387C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802429D4),
        .pos = { -200.0, 45.0, 0.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_THUNDER_RAGE, 10 } },
        .movement = { 0xFFFFFF38, 0x0000002D, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF38, 0x0000002D, 0x00000000, 0x000000C8 },
        .animations = {
            0x007D0000, 0x007D0000, 0x007D0005, 0x007D0005, 0x007D0000, 0x007D0000, 0x007D0006, 0x007D0006, 0x007D0005, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001, 0x007D0001,
        },
    },
};

StaticNpc N(npcGroup_80243A6C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242AA0),
        .pos = { 150.0, 55.0, 0.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 15,
        .itemDrops = { { ItemId_MAPLE_SYRUP, 6 }, { ItemId_HONEY_SYRUP, 4 } },
        .movement = { 0x00000096, 0x00000032, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000032, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004B0002, 0x004B0002, 0x004B0003, 0x004B0003, 0x004B0001, 0x004B0002, 0x004B0006, 0x004B0006, 0x004B0004, 0x004B0002, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001, 0x004B0001,
        },
    },
};

NpcGroupList N(npcGroupList_80243C5C) = {
    NPC_GROUP(N(npcGroup_8024387C), 0x18220006),
    NPC_GROUP(N(npcGroup_80243A6C), 0x181A0002),
    NPC_GROUP(N(npcGroup_8024368C), 0x00000000),
    {},
};

s32 pad_003C8C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 0xFFFFFE7A, 0, 0, 0, 8, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1407));
});

s32 pad_003CD8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243CE0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80242060_CF4C30, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242060_CF4C30, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80244040) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80242060_CF4C30, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242060_CF4C30, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242060_CF4C30, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242060_CF4C30, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .modelIDs = { 0x16, 0x17, 0x18 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x15 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000002, 0x000000A0, 0xFFFFFE50, 0x00000054, 0xFFFFFFD4, 0x0000000C, 0x00000000, 0xF97188A1,
    0x000000A0, 0xFFFFFEA6, 0x00000048, 0xFFFFFF8E, 0x0000000C, 0x00000000, 0xF97188A2,
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802446AC) =  { -388.0, 0.0, -92.0, 0.0 };

Script N(script_802446BC) = SCRIPT({
    SI_AREA_FLAG(33) = 0;
    SI_AREA_FLAG(34) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80244040) to TriggerFlag_WALL_HAMMER 12;
    bind N(script_ShakeTree_80244040) to TriggerFlag_BOMB N(triggerCoord_802446AC);
});

s32 pad_004734[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80244740) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_802449EC) = SCRIPT({
    SI_VAR(9) = SI_VAR(6);
    SI_VAR(8) = SI_VAR(5);
    SI_VAR(7) = SI_VAR(4);
    SI_VAR(6) = SI_VAR(3);
    SI_VAR(5) = SI_VAR(2);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(3) = SI_VAR(0);
    EnableModel(SI_VAR(6), 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80242230_CF4E00();
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    spawn {
        sleep 5;
        EnableModel(SI_VAR(6), 1);
    }
    if (SI_VAR(10) != 0) {
        spawn {
            sleep 5;
            SI_VAR(0) = SI_VAR(3);
            SI_VAR(1) = SI_VAR(4);
            SI_VAR(2) = SI_VAR(5);
            SI_VAR(1) += 10;
            SI_VAR(2) += 8;
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 15;
            SI_VAR(1) -= 10;
            MakeItemEntity(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2), 14, 0);
        }
    }
    spawn {
        sleep 10;
        PlaySoundAt(248, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    }
    MakeLerp(0, 180, 20, 2);
1:
    UpdateLerp();
    RotateModel(SI_VAR(8), SI_VAR(0), 1, 0, 0);
    RotateModel(SI_VAR(9), SI_VAR(0), 1, 0, 0);
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 1;
    }
    EnableModel(SI_VAR(7), 0);
});

Script N(script_80244D0C) = SCRIPT({
    GetModelCenter(57);
    SI_VAR(3) = 57;
    SI_VAR(4) = 58;
    SI_VAR(5) = 59;
    SI_VAR(6) = 60;
    SI_VAR(10) = 0;
    spawn N(script_802449EC);
    GetModelCenter(63);
    SI_VAR(3) = 63;
    SI_VAR(4) = 64;
    SI_VAR(5) = 65;
    SI_VAR(6) = 66;
    SI_VAR(10) = 0;
    spawn N(script_802449EC);
    GetModelCenter(69);
    SI_VAR(3) = 69;
    SI_VAR(4) = 70;
    SI_VAR(5) = 71;
    SI_VAR(6) = 72;
    SI_VAR(10) = 174;
    spawn N(script_802449EC);
    GetModelCenter(75);
    SI_VAR(3) = 75;
    SI_VAR(4) = 76;
    SI_VAR(5) = 77;
    SI_VAR(6) = 78;
    SI_VAR(10) = 0;
    spawn N(script_802449EC);
});

s32 pad_004ECC[] = {
    0x00000000,
};

// rodata: D_80244ED0_CF7AA0

// rodata: D_80244ED8_CF7AA8

// rodata: D_80244EE0_CF7AB0

// rodata: D_80244EE8_CF7AB8

// rodata: D_80244EF0_CF7AC0

// rodata: jtbl_80244EF8_CF7AC8

s32 pad_004F34[] = {
    0x00000000,
};

// rodata: D_80244F38_CF7B08

// rodata: jtbl_80244F40_CF7B10

s32 pad_004F94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

