#include "flo_23.h"

s32 pad_000034[3];
Script N(script_80240D30);
Script N(script_80240DA0);
Script N(script_ExitWalk_8024104C);
Script N(script_ExitWalk_802410A8);
Script N(script_80241104);
Script N(main);
s32 pad_0012D8[2];
s32 N(unk_8024130C)[1];
s32 N(unk_80241310)[1];
Script N(script_80241314);
Script N(script_80241448);
Script N(script_NpcAI_802414C8);
Script N(script_Interact_80241564);
Script N(script_Init_80241E70);
StaticNpc N(npcGroup_80241F98)[1];
StaticNpc N(npcGroup_80242188)[1];
StaticNpc N(npcGroup_80242378)[1];
NpcGroupList N(npcGroupList_80242568);
s32 pad_002598[2];
Script N(script_MakeEntities);
s32 pad_00266C[1];
const char D_80242670_CF08D0[8]; // "flo_00"
const char D_80242678_CF08D8[8]; // "flo_11"
s32 pad_0026DC[1];

// text: func_80240000_CEE260

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CEE2A0

// text: func_8024009C_CEE2FC

// text: func_8024026C_CEE4CC

// text: func_802402C0_CEE520

// text: func_802402F8_CEE558

// text: N(set_script_owner_npc_anim)

// text: func_80240410_CEE670

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240728_CEE988

// text: func_80240B68_CEEDC8

// text: func_80240C2C_CEEE8C

// text: func_80240C9C_CEEEFC

EntryList N(entryList) = {
    { 470.0f, 0.0f, 0.0f, 270.0f },
    { -470.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190126,
};

Script N(script_80240D30) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 53 {
            SetMusicTrack(0, 48, 0, 8);
        }
        else {
            SetMusicTrack(0, 49, 0, 8);
        }
    }
});

Script N(script_80240DA0) = SCRIPT({
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

Script N(script_ExitWalk_8024104C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242670_CF08D0, 2);
    sleep 100;
});

Script N(script_ExitWalk_802410A8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242678_CF08D8, 0);
    sleep 100;
});

Script N(script_80241104) = SCRIPT({
    bind N(script_ExitWalk_802410A8) to 0x80000 0;
    bind N(script_ExitWalk_8024104C) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80242568));
    await N(script_MakeEntities);
    SI_VAR(0) = 0xFFFFFEDE;
    SI_VAR(1) = 0xFFFFFF42;
    SI_VAR(2) = 480;
    SI_VAR(3) = 0xFFFFFFA6;
    SI_VAR(4) = 0;
    spawn N(script_80240DA0);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80241104);
    spawn EnterWalk;
    await N(script_80240D30);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CEE260();
    }
});

s32 pad_0012D8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802412E0) = {
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

s32 N(unk_8024130C)[] = {
    0x00000000,
};

s32 N(unk_80241310)[] = {
    0x00000000,
};

Script N(script_80241314) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024009C_CEE2FC(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802402C0_CEE520(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241448) = {
    SI_CMD(ScriptOpcode_CALL, func_802402F8_CEE558, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241314), 0x10, 0, 0x802426E0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024026C_CEE4CC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

NpcAISettings N(aISettings_80241498) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x32,
    .alertRadius = 60.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 6.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 30.0f,
    .unk_2C = 0x3,
};

Script N(script_NpcAI_802414C8) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 18);
    SetSelfVar(5, 3);
    SetSelfVar(7, 4);
    func_80240728_CEE988(N(aISettings_80241498));
});

NpcSettings N(npcSettings_80241538) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x15,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802414C8),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x13,
    .unk_2A = 0,
};

Script N(script_Interact_80241564) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_SAVE_FLAG(1365) == 0) {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 350);
        SetCamPitch(0, 18.5, -7.5);
        SetCamSpeed(0, 4.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(-1, 0xC60002, 0xC60001, 0, 0x110049);
        SetPlayerAnimation(0x10021);
        func_80240C9C_CEEEFC();
        SI_VAR(0) = 0x80242850;
        SI_VAR(1) = 2;
        await N(script_80241448);
        match SI_VAR(0) {
            <= 0 {
                SetPlayerAnimation(0x10000);
                SpeakToPlayer(-1, 0xC60002, 0xC60001, 0, 0x11004A);
            }
            else {
                SI_VAR(8) = SI_VAR(0);
                func_80240C2C_CEEE8C(SI_VAR(0));
                MakeItemEntity(SI_VAR(8), 385, 20, 0xFFFFFFDE, 1, 0);
                SI_VAR(7) = SI_VAR(0);
                PlaySoundAtNpc(-1, 8341, 0);
                SetNpcAnimation(-1, 0xC60003);
                sleep 20;
                RemoveItemEntity(SI_VAR(7));
                match SI_VAR(8) {
                    == 158 {
                        SpeakToPlayer(-1, 0xC60004, 0xC60001, 0, 0x11004D);
                        PlaySoundAtNpc(-1, 540, 0);
                        EndSpeech(-1, 0xC60009, 0xC60008, 0);
                        SetNpcAnimation(-1, 0xC60007);
                        PlaySoundAtCollider(13, 457, 0);
                        ModifyColliderFlags(0, 13, 0x7FFFFE00);
                        MakeLerp(0, 100, 30, 1);
                        loop {
                            UpdateLerp();
                            SI_VAR(8) =f SI_VAR(0);
                            SI_VAR(9) =f SI_VAR(0);
                            SI_VAR(8) *= 0.5;
                            SI_VAR(9) *= 1.2001953125;
                            RotateModel(59, SI_VAR(8), 0, -1, 0);
                            RotateModel(60, SI_VAR(8), 0, -1, 0);
                            RotateModel(61, SI_VAR(8), 0, -1, 0);
                            RotateModel(55, SI_VAR(9), 0, 1, 0);
                            RotateModel(56, SI_VAR(9), 0, 1, 0);
                            RotateModel(57, SI_VAR(9), 0, 1, 0);
                            sleep 1;
                            if (SI_VAR(1) != 1) {
                                break;
                            }
                        }
                        SetNpcAnimation(-1, 0xC60005);
                        SI_SAVE_FLAG(1365) = 1;
                    }
                    == 159 {
                        SpeakToPlayer(-1, 0xC60004, 0xC60001, 0, 0x11004C);
                        SetNpcAnimation(-1, 0xC60001);
                    }
                    == 160 {
                        SpeakToPlayer(-1, 0xC60004, 0xC60001, 0, 0x11004C);
                        SetNpcAnimation(-1, 0xC60001);
                    }
                    else {
                        SpeakToPlayer(-1, 0xC60004, 0xC60001, 0, 0x11004B);
                        SetNpcAnimation(-1, 0xC60006);
                        PlaySoundAtNpc(-1, 8342, 0);
                        MakeItemEntity(SI_VAR(8), 375, 20, 0, 1, 0);
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
                                SI_VAR(2) += 380.0;
                                SI_VAR(3) += 15.0;
                                SI_VAR(4) += -30.0;
                                func_80240B68_CEEDC8(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
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
                                SI_VAR(4) = 1.0;
                                SI_VAR(2) *=f SI_VAR(0);
                                SI_VAR(3) *=f SI_VAR(0);
                                SI_VAR(4) *=f SI_VAR(0);
                                SI_VAR(2) += 390.0;
                                SI_VAR(3) += 15.0;
                                SI_VAR(4) += -30.0;
                                func_80240B68_CEEDC8(SI_VAR(7), SI_VAR(2), SI_VAR(3), SI_VAR(4));
                                sleep 1;
                                if (SI_VAR(1) != 1) {
                                    break;
                                }
                            }
                        }
                        SetNpcAnimation(-1, 0xC60001);
                        RemoveItemEntity(SI_VAR(7));
                        SetNpcAnimation(-1, 0xC60001);
                        EndSpeech(-1, 0xC60002, 0xC60001, 0);
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
            SpeakToPlayer(-1, 0xC60009, 0xC60008, 0, 0x11004E);
        } else {
            SpeakToPlayer(-1, 0xC60009, 0xC60008, 0, 0x11004F);
        }
    }
    DisablePlayerInput(0);
    unbind;
});

Script N(script_Init_80241E70) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241564));
    if (SI_SAVE_FLAG(1365) == 1) {
        SetNpcAnimation(-1, 0xC60005);
        ModifyColliderFlags(0, 13, 0x7FFFFE00);
        RotateModel(59, 50, 0, -1, 0);
        RotateModel(60, 50, 0, -1, 0);
        RotateModel(61, 50, 0, -1, 0);
        RotateModel(55, 120, 0, 1, 0);
        RotateModel(56, 120, 0, 1, 0);
        RotateModel(57, 120, 0, 1, 0);
    }
});

StaticNpc N(npcGroup_80241F98)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802412E0),
        .pos = { 385.0, 0.0, -35.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80241E70),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001, 0x00C60001,
        },
        .tattle = 0x1A00DC,
    },
};

StaticNpc N(npcGroup_80242188)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241538),
        .pos = { 80.0, 0.0, 0.0 },
        .flags = 0x00002800,
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000050, 0x00000000, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000050, 0x00000000, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

StaticNpc N(npcGroup_80242378)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241538),
        .pos = { -320.0, 0.0, 0.0 },
        .flags = 0x00002800,
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFEC0, 0x00000000, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEC0, 0x00000000, 0x00000000, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004A0001, 0x004A0003, 0x004A0004, 0x004A0004, 0x004A0001, 0x004A0001, 0x004A0009, 0x004A0009, 0x004A0006, 0x004A0008, 0x004A0007, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001, 0x004A0001,
        },
    },
};

NpcGroupList N(npcGroupList_80242568) = {
    NPC_GROUP(N(npcGroup_80242188), 0x180C0003),
    NPC_GROUP(N(npcGroup_80242378), 0x180D0003),
    NPC_GROUP(N(npcGroup_80241F98), 0x00000000),
    {},
};

s32 pad_002598[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA0C4, 100, 60, 5, 0, 0x80000000);
    MakeEntity(0x802EA588, 100, 145, 0, 0, 131, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1409));
    MakeEntity(0x802EA588, 25, 60, 0, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1408));
    MakeEntity(0x802EAA54, 0xFFFFFFCE, 0, 0, 90, 60, 0x80000000);
});

s32 pad_00266C[] = {
    0x00000000,
};

// rodata: D_80242670_CF08D0

// rodata: D_80242678_CF08D8

// rodata: D_80242680_CF08E0

// rodata: jtbl_80242688_CF08E8

s32 pad_0026DC[] = {
    0x00000000,
};
