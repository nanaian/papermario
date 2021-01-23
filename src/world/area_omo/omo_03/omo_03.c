#include "omo_03.h"

s32 pad_00001C[1];
s32 pad_000888[2];
Script N(script_80240940);
Script N(script_ExitWalk_80240A40);
Script N(script_ExitWalk_80240A9C);
Script N(script_80240AF8);
Script N(script_EnterWalk_80240B40);
Script N(main);
s32 pad_000E04[3];
Script N(script_80240E10);
Script N(script_80240F1C);
Script N(script_8024108C);
Script N(script_80241138);
Script N(script_802414B4);
Script N(script_802415E0);
Script N(script_80241648);
Script N(script_802417B0);
Script N(script_MakeEntities);
Script N(script_80241AA0);
Script N(script_80241B34);
s32 N(itemList_80241E78)[2];
Script N(script_Interact_80241E80);
Script N(script_Init_80241EB0);
Script N(script_Interact_80241F00);
Script N(script_80242158);
StaticNpc N(npcGroup_8024217C)[1];
s32 unk_missing_8024236C[124];
StaticNpc N(npcGroup_8024255C)[5];
NpcGroupList N(npcGroupList_80242F0C);
NpcGroupList N(npcGroupList_80242F24);
s32 pad_002F48[2];
Script N(script_80242F50);
Script N(script_80244118);
Script N(script_80244180);
Script N(script_80244244);
Script N(script_8024435C);
Script N(script_8024475C);
Script N(script_80244BE4);
Script N(script_80244EE0);
Script N(script_80245178);
Script N(script_80245238);
Script N(script_802454DC);
Script N(script_8024556C);
Script N(script_8024598C);
Script N(script_80245BC4);
Script N(script_UpdateTexturePan_80245DFC);
Script N(script_80245E98);
s32 N(unk_80246080)[2];
s32 N(unk_80246088)[2];
s32 N(unk_80246090)[4];
s32 N(unk_802460A0)[12];
s32 N(unk_802460D0)[14];
Script N(script_80246108);
s32 N(unk_80246510)[10];
Script N(script_80246538);
s32 N(unk_802466C0)[14];
Script N(script_802466F8);
s32 N(unk_80246880)[12];
s32 N(unk_802468B0)[18];
Script N(script_802468F8);
s32 N(unk_80246BE0)[14];
s32 N(unk_80246C18)[10];
s32 N(unk_80246C40)[16];
Script N(script_80246C80);
s32 N(intTable_80247044)[3];
s32 N(intTable_80247050)[3];
Script N(script_8024705C);
s32 N(unk_80247454)[6];
Script N(script_8024746C);
s32 N(vectorList_80247640)[9];
s32 N(vectorList_80247664)[9];
s32 N(vectorList_80247688)[9];
Script N(script_802476AC);
s32 N(vectorList_80247E30)[12];
Script N(script_80247E60);
s32 pad_00816C[1];
const char D_80248170_DAD3B0[8]; // "omo_13"
const char D_80248178_DAD3B8[8]; // "omo_04"
const char D_80248180_DAD3C0[8]; // "mac_04"
const char D_80248188_DAD3C8[8]; // "omo_10"
const char D_80248190_DAD3D0[8]; // "omo_08"
const char D_80248198_DAD3D8[8]; // "omo_06"
const char D_802481A0_DAD3E0[8]; // "omo_03"
const char D_802481A8_DAD3E8[8]; // "omo_16"
const char D_802481B0_DAD3F0[8]; // "mac_04"
const char D_802481B8_DAD3F8[8]; // "jan_04"

// text: func_80240000_DA5240

s32 pad_00001C[] = {
    0x00000000,
};

// text: func_80240020_DA5260

// text: func_8024003C_DA527C

// text: func_80240104_DA5344

// text: func_80240188_DA53C8

// text: func_8024020C_DA544C

// text: func_802402B0_DA54F0

// text: func_802403A8_DA55E8

// text: func_80240538_DA5778

// text: func_8024057C_DA57BC

// text: func_802406A0_DA58E0

s32 pad_000888[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -320.0f, 0.0f, 320.0f, 45.0f },
    { 340.0f, 0.0f, 330.0f, 315.0f },
    { -320.0f, 10.0f, -320.0f, 135.0f },
    { 320.0f, 10.0f, -320.0f, 225.0f },
    { -245.0f, 270.0f, 250.0f, 90.0f },
    { 0.0f, -100.0f, 0.0f, 90.0f },
    { -320.0f, 0.0f, 320.0f, 45.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900DB,
};

Script N(script_80240940) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SetMusicTrack(0, 32, 0, 8);
    } else {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
        2..3
            SetMusicTrack(0, 33, 0, 8);
            == 5 {
                FadeInMusic(0, 32, 0, 3000, 0, 127);
            }
            else {
                SetMusicTrack(0, 32, 0, 8);
            }
        }
    }
});

Script N(script_ExitWalk_80240A40) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80248170_DAD3B0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240A9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80248178_DAD3B8, 0);
    sleep 100;
});

Script N(script_80240AF8) = SCRIPT({
    bind N(script_ExitWalk_80240A40) to 0x80000 0;
    bind N(script_ExitWalk_80240A9C) to 0x80000 2;
});

Script N(script_EnterWalk_80240B40) = SCRIPT({
    SI_AREA_FLAG(4) = 0;
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240AF8);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
    0..1
        SI_VAR(0) = N(script_80240AF8);
        spawn EnterWalk;
        sleep 1;
        == 4 {
            SI_AREA_FLAG(4) = 1;
            spawn N(script_80240AF8);
            spawn N(script_802417B0);
        }
        == 5 {
            spawn N(script_80247E60);
        }
        == 6 {
            spawn N(script_802476AC);
        }
        else {
            spawn N(script_80240AF8);
            sleep 3;
        }
    }
});

Script N(main) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF7) {
        SI_SAVE_VAR(0) = 0xFFFFFFF7;
    }
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_AREA_FLAG(5) = 0;
    SI_SAVE_FLAG(1980) = 1;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 5) {
        MakeNpcs(1, N(npcGroupList_80242F0C));
    } else {
        MakeNpcs(1, N(npcGroupList_80242F24));
    }
    await N(script_MakeEntities);
    await N(script_802414B4);
    await N(script_80240940);
    await N(script_8024746C);
    spawn N(script_EnterWalk_80240B40);
    sleep 1;
});

s32 pad_000E04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240E10) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(61, SI_VAR(0), 0, 0, 1);
    RotateModel(63, SI_VAR(0), 0, 0, 1);
    RotateModel(65, SI_VAR(0), 0, 0, 1);
    RotateModel(67, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_80240F1C) = SCRIPT({
0:
    MakeLerp(0, 160, 60, 10);
1:
    UpdateLerp();
    RotateModel(76, SI_VAR(0), 0, -1, 0);
    RotateModel(78, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    MakeLerp(160, 0, 60, 10);
2:
    UpdateLerp();
    RotateModel(76, SI_VAR(0), 0, -1, 0);
    RotateModel(78, SI_VAR(0), 0, 1, 0);
    sleep 2;
    if (SI_VAR(1) == 1) {
        goto 2;
    }
    goto 0;
});

Script N(script_8024108C) = SCRIPT({
0:
    MakeLerp(0, 0xFFFFFE98, 100, 0);
1:
    UpdateLerp();
    RotateModel(70, SI_VAR(0), 0, 0, 1);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    goto 0;
});

Script N(script_80241138) = SCRIPT({
    DisablePlayerInput(1);
    MakeLerp(0, 70, 30, 10);
0:
    UpdateLerp();
    RotateModel(87, SI_VAR(0), 0, 0, 1);
    UpdateColliderTransform(31);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    PlaySoundAt(497, 0, 0xFFFFFE48, 10, 40);
    ModifyColliderFlags(1, 28, 0x7FFFFE00);
    sleep 20;
    UseSettingsFrom(0, 0xFFFFFF48, 10, 0xFFFFFF1B);
    SetPanTarget(0, 0xFFFFFF48, 10, 0xFFFFFF1B);
    SetCamDistance(0, 517.400390625);
    SetCamPosA(0, -180.0, -322.0);
    SetCamPitch(0, 25.0, -6.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    PlaySoundAt(498, 0, 0xFFFFFF7E, 0, 0xFFFFFF29);
    MakeLerp(0, 180, 30, 10);
1:
    UpdateLerp();
    RotateModel(91, SI_VAR(0), 1, 0, 0);
    RotateModel(92, SI_VAR(0), 1, 0, 0);
    RotateModel(90, SI_VAR(0), 1, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
    PlaySoundAt(81, 0, 0xFFFFFF7E, 0, 0xFFFFFF29);
    ShakeCam(0, 0, 10, 1.0);
    GetModelCenter(23);
    PlayEffect(6, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    SI_SAVE_FLAG(1101) = 1;
    SetNpcAnimation(0, 0x8C0001);
    ResetCam(0, 90.0);
    DisablePlayerInput(0);
    unbind;
});

Script N(script_802414B4) = SCRIPT({
    spawn N(script_80240E10);
    spawn N(script_80240F1C);
    spawn N(script_8024108C);
    ParentColliderToModel(31, 87);
    if (SI_SAVE_FLAG(1101) == 0) {
        bind N(script_80241138) to TriggerFlag_WALL_INTERACT 27;
        ModifyColliderFlags(0, 28, 0x7FFFFE00);
    } else {
        RotateModel(87, 70, 0, 0, 1);
        UpdateColliderTransform(31);
        RotateModel(91, 180, 1, 0, 0);
        RotateModel(92, 180, 1, 0, 0);
        RotateModel(90, 180, 1, 0, 0);
    }
});

Script N(script_802415E0) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80241648) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(3);
    sleep 1;
    SI_VAR(10) = spawn N(script_802415E0);
    if (SI_AREA_FLAG(4) == 0) {
        func_80240000_DA5240();
        spawn {
            sleep 6;
            GotoMap(D_80248180_DAD3C0, 2);
            sleep 100;
        }
        SetPlayerJumpscale(0.7001953125);
        PlayerJump(0xFFFFFF0B, 270, 250, 20);
    } else {
        SetPlayerJumpscale(1.0);
        PlayerJump(0xFFFFFFA1, 0, 250, 25);
        SI_AREA_FLAG(4) = 0;
    }
    kill SI_VAR(10);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    SetPlayerActionState(0);
});

Script N(script_802417B0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(3);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 100;
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(10) = spawn N(script_802415E0);
    spawn {
        GetCurrentPartnerID(SI_VAR(0));
        match SI_VAR(0) {
            == 4 {}
            == 8 {}
            == 9 {}
            == 6 {}
            else {
                SetNpcJumpscale(0xFFFFFFFC, 0.7001953125);
                NpcJump0(0xFFFFFFFC, 0xFFFFFF6A, 25, 250, 37);
                NpcJump0(0xFFFFFFFC, 0xFFFFFF92, 0, 190, 20);
            }
        }
        SetNpcFlagBits(0xFFFFFFFC, 512, 1);
        EnablePartnerAI();
    }
    SetPlayerJumpscale(0.7001953125);
    PlayerJump(0xFFFFFF6A, 25, 250, 25);
    kill SI_VAR(10);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    SetPlayerActionState(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0xFFFFFF06, 60, 50, 0, 0x80000000);
    MakeEntity(0x802EAA30, 0xFFFFFF6A, 0, 250, 0, 0x80000000);
    AssignScript(N(script_80241648));
    MakeEntity(0x802EAB04, 203, 0, 200, 0, 25, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1190));
    MakeEntity(0x802EA588, 400, 60, 0xFFFFFFCE, 0, 136, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1117));
});

Script N(script_80241AA0) = SCRIPT({

});

NpcSettings N(npcSettings_80241AB0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = &N(script_80241AA0),
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

NpcSettings N(npcSettings_80241ADC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
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
    .unk_2A = 0x10,
};

NpcSettings N(npcSettings_80241B08) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

Script N(script_80241B34) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFFB) {
        0x802D6420();
        0x802D6954();
        if (SI_VAR(0) == 33) {
            SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0002);
        } else {
            if (SI_AREA_FLAG(5) == 0) {
                SpeakToPlayer(0, 0x8C0006, 0x8C0002, 0, 0xF0000);
                SI_AREA_FLAG(5) = 1;
            } else {
                SpeakToPlayer(0, 0x8C0006, 0x8C0002, 0, 0xF0001);
                SI_AREA_FLAG(5) = 0;
            }
        }
    } else {
        if (SI_SAVE_FLAG(1100) == 0) {
            if (SI_AREA_FLAG(5) == 0) {
                spawn {
                    SetNpcFlagBits(0, 256, 1);
                    SetNpcJumpscale(0, 1.0);
                    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    loop 2 {
                        NpcJump1(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
                    }
                    SetNpcFlagBits(0, 256, 0);
                }
                sleep 10;
                if (SI_MAP_FLAG(1) == 0) {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0003);
                    EndSpeech(0, -1, -1, 0);
                } else {
                    SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0003);
                    ContinueSpeech(0, 0x8C0004, 0x8C0001, 0, 0xF0005);
                    SI_SAVE_FLAG(1100) = 1;
                }
                SI_AREA_FLAG(5) = 1;
            } else {
                SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0004);
                SI_SAVE_FLAG(1100) = 1;
            }
        } else {
            if (SI_AREA_FLAG(6) == 0) {
                await N(script_8024705C);
            } else {
                await N(script_80246108);
            }
        }
    }
    DisablePlayerInput(0);
    unbind;
});

s32 N(itemList_80241E78)[] = {
    0x00000021, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_Interact_80241E80) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241B34), 0x10, 0, N(itemList_80241E78), 0, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Init_80241EB0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFFB) {
        SetNpcAnimation(-1, 0x8C0002);
    }
    BindNpcInteract(-1, N(script_Interact_80241E80));
});

Script N(script_Interact_80241F00) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFF8 {
            SpeakToPlayer(-1, 0x8C0206, 0x8C0202, 0, 0xF0017);
        }
        < 0xFFFFFFF9 {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF0018);
        }
        < 0xFFFFFFFB {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF0019);
        }
        < 0xFFFFFFFC {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF001A);
        }
        < 0xFFFFFFFD {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF001B);
        }
        < 0xFFFFFFFE {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF001C);
        }
        < -1 {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF001D);
        }
        < 0 {
            FindKeyItem(37, SI_VAR(0));
            if (SI_VAR(0) == -1) {
                SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF001E);
            } else {
                SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF001F);
            }
        }
        < 2 {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF0020);
        }
        < 4 {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF0021);
        }
        else {
            SpeakToPlayer(-1, 0x8C0204, 0x8C0201, 0, 0xF0022);
        }
    }
});

Script N(script_80242158) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241F00));
});

StaticNpc N(npcGroup_8024217C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241AB0),
        .pos = { 170.0, 50.0, -115.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_80241EB0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x008C0001, 0x008C0003, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001,
        },
        .tattle = 0x1A00B8,
    },
};

s32 unk_missing_8024236C[] = {
    0x00000001, N(npcSettings_80241AB0), 0x431E0000, 0x00000000, 0x42AA0000, 0x00400D05, N(script_80242158), 0x00000000,
    0x00000000, 0x0000005A, 0x80000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00007FFF, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201,
    0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201, 0x008C0201,
    0x00000000, 0x00000000, 0x00000000, 0x001A00B8,
};

StaticNpc N(npcGroup_8024255C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241ADC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000005,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00040001, 0x00040002, 0x00040003, 0x00040003, 0x00040001, 0x00040001, 0x00040000, 0x00040000, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241B08),
        .pos = { 50.0, 15.0, 160.0 },
        .flags = 0x00000005,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001, 0x00060001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80241B08),
        .pos = { 100.0, 0.0, 160.0 },
        .flags = 0x00000005,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80241B08),
        .pos = { 115.0, 0.0, 200.0 },
        .flags = 0x00000005,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80241B08),
        .pos = { 145.0, 0.0, 150.0 },
        .flags = 0x00000005,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

NpcGroupList N(npcGroupList_80242F0C) = {
    NPC_GROUP(N(npcGroup_8024217C), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_80242F24) = {
    NPC_GROUP(N(npcGroup_8024217C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024255C), 0x00000000),
    {},
};

s32 pad_002F48[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80242F50) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 20),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(2), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(3), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(7), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(8), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(14), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(16), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 0),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_MATCH, SI_MAP_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_VAR(1)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_FIXED(40.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(3), SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(40.0), SI_VAR(3)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_ARRAY(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_ARRAY(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(17), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_LABEL, 11),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), -1),
                SI_CMD(ScriptOpcode_GOTO, 12),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(17), SI_VAR(4)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_VAR(3)),
            SI_CMD(ScriptOpcode_GOTO, 11),
            SI_CMD(ScriptOpcode_LABEL, 12),
            SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(17), SI_FIXED(40.0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(10), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(13), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(18), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(0), 1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 1),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
            SI_CMD(ScriptOpcode_CALL, func_80240188_DA53C8, 3, 0, 0),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(0), SI_VAR(1)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), -1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(2), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(3), SI_VAR(1)),
                SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(7), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(8), SI_VAR(1)),
                SI_CMD(ScriptOpcode_SET, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 10),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 10),
            SI_CMD(ScriptOpcode_MATCH, SI_MAP_VAR(2)),
                SI_CMD(ScriptOpcode_CASE_EQ, 0),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(10), SI_FIXED(10.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 1),
                    SI_CMD(ScriptOpcode_CALL, func_802403A8_DA55E8, SI_ARRAY(18), SI_ARRAY(10), SI_FIXED(0.0), SI_FIXED(10.0), 100, 1, SI_FIXED(0.0)),
                    SI_CMD(ScriptOpcode_ADD, SI_ARRAY(18), 1),
                SI_CMD(ScriptOpcode_CASE_EQ, 2),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_CALL, func_802403A8_DA55E8, SI_VAR(0), SI_ARRAY(10), SI_FIXED(10.0), SI_FIXED(2.0), SI_VAR(1), 0, SI_FIXED(0.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 3),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_DIV, SI_VAR(1), 2),
                    SI_CMD(ScriptOpcode_CALL, func_802403A8_DA55E8, SI_VAR(0), SI_ARRAY(10), SI_FIXED(1.0), SI_FIXED(10.0), SI_VAR(1), 0, SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
            SI_CMD(ScriptOpcode_CALL, func_80240104_DA5344, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024003C_DA527C, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(2)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240188_DA53C8, 3, 2, SI_ARRAY(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(2), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 1),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024003C_DA527C, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
            SI_CMD(ScriptOpcode_CALL, func_80240104_DA5344, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024003C_DA527C, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(7)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240188_DA53C8, 3, 2, SI_ARRAY(9)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(7), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 0),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024003C_DA527C, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(1), 1),
                    SI_CMD(ScriptOpcode_CALL, func_8024003C_DA527C, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(5), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(0)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024003C_DA527C, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(5)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(1)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_ARRAY(5)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(1), SI_ARRAY(6)),
            SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(2.0)),
            SI_CMD(ScriptOpcode_DIV_F, SI_VAR(1), SI_FIXED(2.0)),
            SI_CMD(ScriptOpcode_CALL, func_8024003C_DA527C, SI_VAR(2), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_ARRAY(11), SI_ARRAY(12)),
            SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(13), SI_VAR(3)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(14), SI_ARRAY(13)),
            SI_CMD(ScriptOpcode_MUL_F, SI_ARRAY(14), SI_FIXED(1.4326171875)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(15), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_LT, SI_ARRAY(15), 0xFFFFFFF6),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(-10.0)),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(3), 0),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 511),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 132),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(15), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(15), 10),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(10.0)),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(3), 0),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 510),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 1),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 510),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_8024020C_DA544C, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_802402B0_DA54F0, 0xFFFFFFFC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
                SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_802402B0_DA54F0, 0, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_CASE_EQ, 100),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 131, SI_FIXED(79.1005859375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 134, SI_FIXED(-35.099609375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 131, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 134, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 138, SI_FIXED(40.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 140, SI_FIXED(-39.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 141, SI_MAP_VAR(11), SI_FIXED(10.0), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 141, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(180.0)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 141, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 131, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 134, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 131, SI_FIXED(-79.099609375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 134, SI_FIXED(35.1005859375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 138, SI_FIXED(-40.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 140, SI_FIXED(39.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 138, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 140, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 138, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 140, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 131, SI_FIXED(0.0), SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(15)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 134, SI_FIXED(0.0), SI_VAR(0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(16), SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(16), 360),
        SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(16), SI_FIXED(360.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 136, SI_ARRAY(16), SI_FIXED(0.0), SI_FIXED(1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80244118) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80244180) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(0, SI_VAR(1), 45, 0);
    loop {
        UpdateLerp();
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamTarget(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80244244) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(SI_VAR(1), 0, 40, 0);
    loop {
        UpdateLerp();
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamTarget(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
        sleep 1;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024435C) = {
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(4.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(0.7001953125)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(1), 50, SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
        SI_CMD(ScriptOpcode_CALL, InterpPlayerYaw, SI_VAR(3), 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(180.0)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0xFFFFFFFC, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0xFFFFFFFC, SI_VAR(1), 50, SI_VAR(2), 10),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(0.5)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0xFFFFFFFC, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(3), 180),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(3), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(4), SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(5), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(6), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(100.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0001),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(4), SI_VAR(5), SI_FIXED(20.0), SI_VAR(6)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(4), 50, SI_VAR(5), 10),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 5, 0xF0009),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 33, 0, 8),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024475C) = {
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(6), 0),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 50),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(9)),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(3), SI_VAR(4), SI_VAR(5), SI_VAR(6)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(2.5)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(3), SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerJump, SI_VAR(5), 50, SI_VAR(6), 15),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(4.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(0.7001953125)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(1), 50, SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
        SI_CMD(ScriptOpcode_CALL, InterpPlayerYaw, SI_VAR(3), 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(180.0)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0xFFFFFFFC, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0xFFFFFFFC, SI_VAR(1), 50, SI_VAR(2), 10),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(0.1005859375)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0xFFFFFFFC, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(4), SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(5), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(6), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(60.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0001),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(4), SI_VAR(5), SI_FIXED(20.0), SI_VAR(6)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(4), 50, SI_VAR(5), 10),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 5, 0xF0009),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 33, 0, 8),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80244BE4) = {
    SI_CMD(ScriptOpcode_CALL, StopSound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 32, 0, 8),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(100.0), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(0), 50, SI_VAR(1), 10),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(2.0)),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(9)),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(3), SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0001),
        SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, 270, 15),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(60.0)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(3.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(0), SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(1), 30),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 258),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(2.5)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(0), SI_VAR(1), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80244EE0) = {
    SI_CMD(ScriptOpcode_CALL, StopSound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 32, 0, 8),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(6), 1),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(3.5)),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(9)),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(3), SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0002),
        SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, 90, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(85.0)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(80.0), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(3.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(0), SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(50.0)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(85.0), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 258),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(2.5)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(0), SI_VAR(1), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80245178) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            GotoMapSpecial(D_802481A0_DAD3E0, 3, 1);
        }
        == 1 {
            GotoMapSpecial(D_80248198_DAD3D8, 3, 1);
        }
        == 2 {
            GotoMapSpecial(D_80248190_DAD3D0, 2, 1);
        }
        == 3 {
            GotoMapSpecial(D_80248188_DAD3C8, 3, 1);
        }
    }
    sleep 100;
});

Script N(script_80245238) = SCRIPT({
    match SI_AREA_VAR(5) {
    0..1
        match SI_AREA_VAR(6) {
            == 0 {
                GotoMapSpecial(D_802481A0_DAD3E0, 2, 1);
            }
            == 1 {
                GotoMapSpecial(D_80248198_DAD3D8, 2, 1);
            }
            == 2 {
                GotoMapSpecial(D_80248190_DAD3D0, 1, 1);
            }
            == 3 {
                GotoMapSpecial(D_80248188_DAD3C8, 2, 1);
            }
        }
        == 2 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_802481A0_DAD3E0, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80248198_DAD3D8, 2, 1);
                    } else {
                        GotoMapSpecial(D_802481A0_DAD3E0, 2, 1);
                    }
                }
                == 3 {
                    GotoMapSpecial(D_80248188_DAD3C8, 2, 1);
                }
            }
        }
        == 3 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_802481A0_DAD3E0, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80248198_DAD3D8, 2, 1);
                    } else {
                        GotoMapSpecial(D_802481A0_DAD3E0, 2, 1);
                    }
                }
                == 2 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80248190_DAD3D0, 1, 1);
                    } else {
                        GotoMapSpecial(D_802481A0_DAD3E0, 2, 1);
                    }
                }
            }
        }
    }
    sleep 100;
});

Script N(script_802454DC) = SCRIPT({
10:
    sleep 1;
    func_80240538_DA5778();
    if (SI_VAR(0) != 1) {
        goto 10;
    }
    if (SI_AREA_FLAG(2) == 0) {
        await N(script_80245178);
    } else {
        await N(script_80245238);
    }
});

Script N(script_8024556C) = SCRIPT({
    SetTexPanner(142, 2);
    EnableTexPanning(142, 1);
    SI_MAP_VAR(9) = 0x8000;
    spawn {
        loop {
            SetTexPanOffset(2, 0, SI_MAP_VAR(9), 0);
            sleep 1;
        }
    }
    SI_VAR(5) = 0;
0:
    SI_VAR(5) += 2;
    if (SI_VAR(5) > 360) {
        SI_VAR(5) -= 360;
    }
    RotateModel(142, SI_VAR(5), 0, 0, -1);
    sleep 1;
    if (SI_MAP_FLAG(1) == 1) {
        goto 10;
    }
    goto 0;
10:
    if (SI_AREA_FLAG(2) == 0) {
        SI_VAR(2) = 270;
        EnableTexPanning(153, 0);
        EnableTexPanning(147, 1);
    } else {
        SI_VAR(2) = 90;
        EnableTexPanning(147, 0);
        EnableTexPanning(153, 1);
    }
    if (SI_VAR(2) < SI_VAR(5)) {
        SI_VAR(2) += 360;
    }
    SI_VAR(6) = SI_AREA_FLAG(2);
    MakeLerp(SI_VAR(5), SI_VAR(2), 60, 8);
    UpdateLerp();
    SI_VAR(4) = -1;
11:
    UpdateLerp();
    if (SI_VAR(2) < SI_VAR(0)) {
        SI_VAR(3) = 0;
    } else {
        SI_VAR(3) = 1;
    }
    if (SI_VAR(4) != -1) {
        if (SI_VAR(3) != SI_VAR(4)) {
            PlaySound(505);
        }
    }
    SI_VAR(4) = SI_VAR(3);
    RotateModel(142, SI_VAR(0), 0, 0, -1);
    sleep 1;
    if (SI_AREA_FLAG(2) != SI_VAR(6)) {
        goto 21;
    }
    if (SI_VAR(1) == 1) {
        goto 11;
    }
    PlaySound(506);
    if (SI_AREA_FLAG(2) == 0) {
        SI_MAP_VAR(9) = 0x4000;
    } else {
        SI_MAP_VAR(9) = 0xC000;
    }
20:
    sleep 1;
    if (SI_AREA_FLAG(2) == SI_VAR(6)) {
        goto 20;
    }
21:
    SI_VAR(5) = SI_VAR(0);
    goto 10;
});

Script N(script_8024598C) = SCRIPT({
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 4) {
            return;
        }
    }
    if (SI_MAP_FLAG(1) == 1) {
        if (SI_AREA_FLAG(2) == 0) {
            return;
        }
    }
    SI_MAP_FLAG(1) = 1;
    SI_AREA_FLAG(2) = 0;
    MakeLerp(0, 0xFFFFFFEE, 15, 0);
0:
    UpdateLerp();
    TranslateModel(146, 0, SI_VAR(0), 0);
    TranslateModel(147, 0, SI_VAR(0), 0);
    UpdateColliderTransform(55);
    UpdateColliderTransform(56);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(146, 0, SI_VAR(0), 0);
    TranslateModel(147, 0, SI_VAR(0), 0);
    UpdateColliderTransform(55);
    UpdateColliderTransform(56);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_80245BC4) = SCRIPT({
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 4) {
            return;
        }
    }
    if (SI_MAP_FLAG(1) == 1) {
        if (SI_AREA_FLAG(2) == 1) {
            return;
        }
    }
    SI_MAP_FLAG(1) = 1;
    SI_AREA_FLAG(2) = 1;
    MakeLerp(0, 0xFFFFFFEE, 15, 0);
0:
    UpdateLerp();
    TranslateModel(152, 0, SI_VAR(0), 0);
    TranslateModel(153, 0, SI_VAR(0), 0);
    UpdateColliderTransform(61);
    UpdateColliderTransform(62);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(152, 0, SI_VAR(0), 0);
    TranslateModel(153, 0, SI_VAR(0), 0);
    UpdateColliderTransform(61);
    UpdateColliderTransform(62);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_UpdateTexturePan_80245DFC) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_8024057C_DA57BC();
                    return;
                }
            }
        }
    }
    func_802406A0_DA58E0();
});

Script N(script_80245E98) = SCRIPT({
    SI_MAP_FLAG(1) = 0;
    SI_MAP_FLAG(10) = 0;
    spawn N(script_8024556C);
    ParentColliderToModel(55, 146);
    ParentColliderToModel(56, 147);
    ParentColliderToModel(61, 152);
    ParentColliderToModel(62, 153);
    bind N(script_8024598C) to TriggerFlag_FLOOR_TOUCH 55;
    bind N(script_8024598C) to TriggerFlag_WALL_HAMMER 56;
    bind N(script_80245BC4) to TriggerFlag_FLOOR_TOUCH 61;
    bind N(script_80245BC4) to TriggerFlag_WALL_HAMMER 62;
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFBB4;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80245DFC);
    }
});

s32 N(unk_80246080)[] = {
    0x000000AA, 0xFFFFFF8D,
};

s32 N(unk_80246088)[] = {
    0xFFFFFE81, 0xFFFFFF10,
};

s32 N(unk_80246090)[] = {
    0xFFFFFE98, 0xFFFFFF3D, 0xFFFFFEB1, 0xFFFFFF29,
};

s32 N(unk_802460A0)[] = {
    0xF245CEC8, 0xF245F806, 0xF24CAA80, 0xF2466080, 0xF246A528, 0xF24A7A80, 0xF247BE80, 0xF24D2210,
    0xF247088B, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_802460D0)[] = {
    0xF245CEC8, 0xF245F806, 0xF24CAA80, 0xF2466080, 0xF246A528, 0xF24A7A80, 0xF247BE80, 0xF24E9480,
    0xF246A528, 0xF251F729, 0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80246108) = SCRIPT({
    if (SI_SAVE_FLAG(1101) == 0) {
        DisablePlayerInput(1);
        SpeakToPlayer(0, 0x8C0006, 0x8C0002, 0, 0xF0014);
        DisablePlayerInput(0);
        return;
    } else {
        DisablePlayerInput(1);
        DisablePlayerPhysics(1);
        DisablePartnerAI(0);
        spawn {
            SetNpcFlagBits(0, 256, 1);
            SetNpcJumpscale(0, 1.0);
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            loop 2 {
                NpcJump1(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
            }
            SetNpcFlagBits(0, 256, 0);
        }
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0015);
        ModifyColliderFlags(0, 68, 0x7FFFFE00);
        ModifyColliderFlags(0, 69, 0x7FFFFE00);
        SI_VAR(11) = spawn N(script_80244244);
        SI_VAR(0) = N(unk_802460A0);
        SI_VAR(9) = N(unk_80246090);
        await N(script_8024475C);
        if (SI_AREA_VAR(6) == 0) {
            SI_MAP_VAR(0) = 0;
            SI_MAP_VAR(1) = N(unk_802460A0);
            SI_MAP_VAR(2) = 3;
            SI_MAP_FLAG(0) = 1;
        20:
            if (SI_MAP_FLAG(0) == 1) {
                sleep 1;
                goto 20;
            }
            sleep 20;
            kill SI_VAR(11);
            spawn N(script_80244180);
            func_80240020_DA5260();
            SI_VAR(9) = N(unk_80246080);
            await N(script_80244BE4);
            SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF000E);
            ModifyColliderFlags(1, 68, 0x7FFFFE00);
            ModifyColliderFlags(1, 69, 0x7FFFFE00);
            DisablePlayerPhysics(0);
            EnablePartnerAI();
            DisablePlayerInput(0);
        } else {
            SI_MAP_VAR(0) = 0;
            SI_MAP_VAR(1) = N(unk_802460D0);
            SI_MAP_VAR(2) = 1;
            SI_MAP_FLAG(0) = 1;
            sleep 1;
            spawn N(script_802454DC);
        30:
            if (SI_MAP_VAR(11) < 350) {
                sleep 1;
                goto 30;
            }
            GotoMap(D_802481A8_DAD3E8, 0);
            SI_SAVE_VAR(215) = 0;
            sleep 100;
        }
    }
    unbind;
});

s32 N(unk_80246510)[] = {
    0xF24C8781, 0xF24731D4, 0xF24BA67D, 0xF24E9480, 0xF246A528, 0xF251F729, 0xF2429C51, 0xFFFFFFFF,
    0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80246538) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    ModifyColliderFlags(0, 69, 0x7FFFFE00);
    spawn N(script_80244244);
    SI_AREA_VAR(5) = 0;
    SI_VAR(0) = N(unk_80246510);
    await N(script_8024435C);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_80246510);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) < 350) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_802481A8_DAD3E8, 0);
    SI_SAVE_VAR(215) = 0;
    sleep 100;
});

s32 N(unk_802466C0)[] = {
    0xF24C8781, 0xF24731D4, 0xF24E767D, 0xF24A7A80, 0xF247BE80, 0xF2466080, 0xF246A528, 0xF244F4D4,
    0xF244F3C0, 0xF242FDD8, 0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_802466F8) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    ModifyColliderFlags(0, 69, 0x7FFFFE00);
    spawn N(script_80244244);
    SI_AREA_VAR(5) = 0;
    SI_VAR(0) = N(unk_802466C0);
    await N(script_8024435C);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_802466C0);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) > 0xFFFFFEA2) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_802481A8_DAD3E8, 1);
    SI_SAVE_VAR(215) = 3;
    sleep 100;
});

s32 N(unk_80246880)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA2E, 0xF25000B7, 0xF244F44A, 0xF24E9480, 0xF246A528, 0xF24BECF1,
    0xF2475C8B, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_802468B0)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA2E, 0xF25000B7, 0xF244F44A, 0xF24E9480, 0xF246A528, 0xF24A7A80,
    0xF247BE80, 0xF2466080, 0xF246A528, 0xF244F4D4, 0xF244F3C0, 0xF242FDD8, 0xF2429C51, 0xFFFFFFFF,
    0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_802468F8) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    ModifyColliderFlags(0, 69, 0x7FFFFE00);
    if (SI_AREA_VAR(6) == 0) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80246880);
        SI_MAP_VAR(2) = 2;
        spawn N(script_80242F50);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        SI_VAR(11) = spawn N(script_80244118);
    10:
        if (SI_MAP_FLAG(0) == 1) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        kill SI_VAR(11);
        spawn N(script_80244180);
        func_80240020_DA5260();
        SI_VAR(9) = N(unk_80246080);
        await N(script_80244BE4);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF000E);
        ModifyColliderFlags(1, 68, 0x7FFFFE00);
        ModifyColliderFlags(1, 69, 0x7FFFFE00);
        DisablePlayerPhysics(0);
        EnablePartnerAI();
        DisablePlayerInput(0);
    } else {
        spawn N(script_80244118);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_802468B0);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80242F50);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        spawn N(script_802454DC);
    20:
        if (SI_MAP_VAR(11) > 0xFFFFFEA2) {
            sleep 1;
            goto 20;
        }
        GotoMap(D_802481A8_DAD3E8, 1);
        SI_SAVE_VAR(215) = 3;
        sleep 100;
    }
});

s32 N(unk_80246BE0)[] = {
    0xF243FEF6, 0xF243CEBC, 0xF24CAACD, 0xF244F4D4, 0xF244F3C0, 0xF2466080, 0xF246A528, 0xF24A7A80,
    0xF247BE80, 0xF24D2210, 0xF247088B, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80246C18)[] = {
    0xF243FEF6, 0xF243CEBC, 0xF24CAACD, 0xF244F4D4, 0xF244F3C0, 0xF2463580, 0xF24672B4, 0xFFFFFFFF,
    0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80246C40)[] = {
    0xF243FEF6, 0xF243CEBC, 0xF24CAACD, 0xF244F4D4, 0xF244F3C0, 0xF2466080, 0xF246A528, 0xF24A7A80,
    0xF247BE80, 0xF24E9480, 0xF246A528, 0xF251F729, 0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80246C80) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    ModifyColliderFlags(0, 68, 0x7FFFFE00);
    ModifyColliderFlags(0, 69, 0x7FFFFE00);
    if (SI_SAVE_FLAG(1101) == 0) {
        SI_MAP_VAR(1) = N(unk_80246C18);
    } else {
        if (SI_AREA_VAR(6) == 0) {
            SI_MAP_VAR(1) = N(unk_80246BE0);
        } else {
            goto 15;
        }
    }
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(2) = 2;
    spawn N(script_80242F50);
    SI_MAP_FLAG(0) = 1;
    sleep 1;
    SI_VAR(11) = spawn N(script_80244118);
10:
    if (SI_MAP_FLAG(0) == 1) {
        sleep 1;
        goto 10;
    }
    sleep 20;
    kill SI_VAR(11);
    spawn N(script_80244180);
    func_80240020_DA5260();
    if (SI_SAVE_FLAG(1101) == 1) {
        SI_VAR(9) = N(unk_80246080);
        await N(script_80244BE4);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF000E);
    } else {
        SI_VAR(9) = N(unk_80246088);
        await N(script_80244EE0);
        SpeakToPlayer(0, 0x8C0006, 0x8C0002, 0, 0xF0013);
    }
    ModifyColliderFlags(1, 68, 0x7FFFFE00);
    ModifyColliderFlags(1, 69, 0x7FFFFE00);
    SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    DisablePlayerPhysics(0);
    EnablePartnerAI();
    DisablePlayerInput(0);
    return;
15:
    spawn N(script_80244118);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_80246C40);
    SI_MAP_VAR(2) = 0;
    spawn N(script_80242F50);
    SI_MAP_FLAG(0) = 1;
    sleep 1;
    spawn N(script_802454DC);
20:
    if (SI_MAP_VAR(11) < 350) {
        sleep 1;
        goto 20;
    }
    GotoMap(D_802481A8_DAD3E8, 0);
    SI_SAVE_VAR(215) = 0;
    sleep 100;
});

s32 N(intTable_80247044)[] = {
    0x00000003, 0x00000002, 0x00000001,
};

s32 N(intTable_80247050)[] = {
    0x00000001, 0x00000002, 0x00000003,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024705C) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(1), 0),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0006),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(2), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1101), 0),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0006, 0x8C0002, 5, 0xF0012),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
                SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E003A),
                SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                    SI_CMD(ScriptOpcode_CALL, CloseMessage),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80247044)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802466F8)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
            SI_CMD(ScriptOpcode_MATCH, SI_SAVE_VAR(0)),
                SI_CMD(ScriptOpcode_CASE_LT, -1),
                    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0037),
                    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_CALL, CloseMessage),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80247050)),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                        SI_CMD(ScriptOpcode_END_LOOP),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80246538)),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CASE_LT, 0),
                    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0038),
                    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 2),
                        SI_CMD(ScriptOpcode_CALL, CloseMessage),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80247050)),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                        SI_CMD(ScriptOpcode_END_LOOP),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80246538)),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_CASE_GE, 0),
                    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0039),
                    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                        SI_CMD(ScriptOpcode_CALL, CloseMessage),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80247050)),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                        SI_CMD(ScriptOpcode_END_LOOP),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80246538)),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                    SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_MATCH),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80247454)[] = {
    0xF24C8781, 0xF24731D4, 0xF24BA67D, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_8024746C) = SCRIPT({
    await N(script_80245E98);
    EnableGroup(172, 0);
    if (SI_SAVE_VAR(0) < 0xFFFFFFFB) {
        EnableGroup(141, 0);
    } else {
        ModifyColliderFlags(0, 8, 0x7FFFFE00);
    }
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80247454);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80242F50);
        SI_MAP_FLAG(0) = 1;
    } else {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
            == 2 {
                spawn N(script_80246C80);
            }
            == 3 {
                spawn N(script_802468F8);
            }
            == 6 {
                EnableGroup(141, 0);
                EnableGroup(172, 1);
            }
            else {
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(1) = N(unk_80247454);
                SI_MAP_VAR(2) = 0;
                spawn N(script_80242F50);
                SI_MAP_FLAG(0) = 1;
            }
        }
    }
});

s32 N(vectorList_80247640)[] = {
    0xC32A0000, 0x43C80000, 0xC3440000, 0xC2C80000, 0x43610000, 0xC3440000, 0xC28C0000, 0x42340000,
    0xC3410000,
};

s32 N(vectorList_80247664)[] = {
    0xC28C0000, 0x00000000, 0xC3410000, 0xC0E00000, 0x42C80000, 0xC33F0000, 0x42580000, 0x41A00000,
    0xC33D0000,
};

s32 N(vectorList_80247688)[] = {
    0x42580000, 0x00000000, 0xC33D0000, 0x42B80000, 0x425C0000, 0xC3470000, 0x43030000, 0x00000000,
    0xC3520000,
};

Script N(script_802476AC) = SCRIPT({
    DisablePlayerInput(1);
    SetCamProperties(0, 90.0, 82, 24, 12, 580, 16.5, -8.5);
    TranslateGroup(172, 0xFFFFFF56, 400, 0xFFFFFF3C);
    SI_MAP_VAR(10) = 30;
    sleep 45;
    spawn {
        MakeLerp(SI_MAP_VAR(10), 40, 29, 0);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    LoadPath(30, N(vectorList_80247640), 3, 0);
    loop {
        GetNextPathPos();
        TranslateGroup(172, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        RotateGroup(172, SI_MAP_VAR(10), 0, 0, 1);
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    PlaySoundAtModel(171, 161, 0);
    spawn {
        ShakeCam(0, 0, 5, 3.0);
    }
    spawn {
        SetNpcAnimation(0, 0x8C0001);
        SetNpcJumpscale(0, 3.0);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 12);
    }
    spawn {
        SetNpcAnimation(1, 0x8C0201);
        SetNpcJumpscale(1, 3.0);
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    }
    spawn {
        MakeLerp(SI_MAP_VAR(10), 18, 19, 0);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    LoadPath(20, N(vectorList_80247664), 3, 0);
    loop {
        GetNextPathPos();
        TranslateGroup(172, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        RotateGroup(172, SI_MAP_VAR(10), 0, 0, 1);
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    PlaySoundAtModel(171, 161, 0);
    spawn {
        ShakeCam(0, 0, 8, 2.0);
    }
    spawn {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    }
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    }
    spawn {
        MakeLerp(SI_MAP_VAR(10), 0, 14, 0);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    LoadPath(15, N(vectorList_80247688), 3, 0);
    loop {
        GetNextPathPos();
        TranslateGroup(172, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        RotateGroup(172, SI_MAP_VAR(10), 0, 0, 1);
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    PlaySoundAtModel(171, 161, 0);
    spawn {
        ShakeCam(0, 0, 10, 1.0);
    }
    spawn {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    }
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 5);
        loop {
            InterpNpcYaw(1, 270, 0);
            sleep 25;
            InterpNpcYaw(1, 90, 0);
            sleep 25;
        }
    }
    SI_SAVE_VAR(0) = 0xFFFFFFFB;
    sleep 75;
    GotoMap(D_802481B0_DAD3F0, 3);
    sleep 100;
});

s32 N(vectorList_80247E30)[] = {
    0xC2C80000, 0x43480000, 0x43020000, 0xC28C0000, 0x42700000, 0x430C0000, 0xC2200000, 0x41C80000,
    0x43160000, 0xC1200000, 0x41700000, 0x43200000,
};

Script N(script_80247E60) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 13;
    PlayEffect(115, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0.900390625, 5, 0, 0, 0, 0, 0, 0, 0);
    UseSettingsFrom(0, 50, 0, 160);
    SetPanTarget(0, 50, 0, 160);
    SetCamDistance(0, 350);
    SetCamPitch(0, 16.0, -7.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(4, 0x3B0011);
    SetNpcAnimation(5, 0x3B0011);
    SetNpcAnimation(6, 0x3B0011);
    sleep 60;
    SetNpcAnimation(3, 0x60004);
    SetNpcAnimation(5, 0x3B0001);
    SetNpcAnimation(6, 0x3B0001);
    SetNpcAnimation(2, 0x40002);
    LoadPath(60, N(vectorList_80247E30), 4, 0);
0:
    GetNextPathPos();
    SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SetNpcAnimation(2, 0x40001);
    SetNpcAnimation(4, 0x3B0001);
    SetNpcAnimation(3, 0x60001);
    NpcFaceNpc(3, 2, 0);
    sleep 10;
    SetNpcAnimation(2, 0x40006);
    sleep 60;
    FadeOutMusic(0, 1000);
    GotoMap(D_802481B8_DAD3F8, 3);
    sleep 100;
});

s32 pad_00816C[] = {
    0x00000000,
};

// rodata: D_80248170_DAD3B0

// rodata: D_80248178_DAD3B8

// rodata: D_80248180_DAD3C0

// rodata: D_80248188_DAD3C8

// rodata: D_80248190_DAD3D0

// rodata: D_80248198_DAD3D8

// rodata: D_802481A0_DAD3E0

// rodata: D_802481A8_DAD3E8

// rodata: D_802481B0_DAD3F0

// rodata: D_802481B8_DAD3F8
