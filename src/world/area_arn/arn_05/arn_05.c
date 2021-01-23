#include "arn_05.h"

s32 pad_0012F4[3];
Script N(script_80241360);
Script N(script_ExitWalk_80241430);
Script N(script_ExitWalk_8024148C);
Script N(script_802414E8);
Script N(script_EnterWalk_80241530);
Script N(main);
s32 pad_0016A8[2];
Script N(script_NpcAI_8024170C);
Script N(script_Idle_80241784);
Script N(script_Interact_80241794);
Script N(script_Interact_802418F4);
Script N(script_Interact_80241924);
Script N(script_Interact_80241A84);
Script N(script_Interact_80241AB4);
Script N(script_Interact_80241D88);
Script N(script_Interact_80241E28);
Script N(script_Interact_80241F88);
Script N(script_Init_80241FB8);
Script N(script_Init_80242008);
Script N(script_Init_8024202C);
Script N(script_Init_8024212C);
Script N(script_Init_802421EC);
StaticNpc N(npcGroup_8024223C)[5];
Script N(script_80242BEC);
Script N(script_80242C50);
Script N(script_802441FC);
Script N(script_Init_80244358);
s32 N(extraAnimationList_80244390)[7];
StaticNpc N(npcGroup_802443AC)[1];
Script N(script_Idle_8024459C);
Script N(script_Init_80244704);
Script N(script_Init_8024473C);
Script N(script_Init_80244774);
Script N(script_Init_802447AC);
StaticNpc N(npcGroup_802447E4)[4];
NpcGroupList N(npcGroupList_80244FA4);
NpcGroupList N(npcGroupList_80244FC8);
s32 pad_004FF8[2];
Script N(script_MakeEntities);
s32 pad_005034[3];
const char D_80245040_BECC20[8]; // "arn_03"
const char D_80245048_BECC28[8]; // "arn_02"
s32 pad_005204[3];

// text: func_80240000_BE7BE0

// text: func_80240158_BE7D38

// text: N(UnkNpcAIFunc1)

// text: func_802404C0_BE80A0

// text: func_8024067C_BE825C

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024081C_BE83FC

// text: func_8024094C_BE852C

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240AD4_BE86B4

// text: func_80240B94_BE8774

// text: func_80240E90_BE8A70

// text: func_80241068_BE8C48

// text: func_8024113C_BE8D1C

// text: func_802412B0_BE8E90

// text: func_802412C8_BE8EA8

s32 pad_0012F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -77.0f, 135.0f, 150.0f, 90.0f },
    { 577.0f, 200.0f, 150.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900BD,
};

Script N(script_80241360) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFDF {
            SetMusicTrack(0, 29, 0, 8);
        }
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 29, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
    PlayAmbientSounds(1);
});

Script N(script_ExitWalk_80241430) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245040_BECC20, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024148C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245048_BECC28, 0);
    sleep 100;
});

Script N(script_802414E8) = SCRIPT({
    bind N(script_ExitWalk_80241430) to 0x80000 1;
    bind N(script_ExitWalk_8024148C) to 0x80000 5;
});

Script N(script_EnterWalk_80241530) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_802414E8);
        return;
    }
    SI_VAR(0) = N(script_802414E8);
    spawn EnterWalk;
    sleep 1;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 34;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        MakeNpcs(0, N(npcGroupList_80244FA4));
    } else {
        MakeNpcs(0, N(npcGroupList_80244FC8));
    }
    await N(script_MakeEntities);
    spawn N(script_802441FC);
    spawn N(script_80241360);
    spawn N(script_EnterWalk_80241530);
});

s32 pad_0016A8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802416B0) = {
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

NpcAISettings N(aISettings_802416DC) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x19,
    .waitTime = 0x1E,
    .alertRadius = 50.0f,
    .unk_10 = 50.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 80.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024170C) = SCRIPT({
    func_8024113C_BE8D1C(N(aISettings_802416DC));
});

NpcSettings N(npcSettings_8024172C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024170C),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241758) = {
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

Script N(script_Idle_80241784) = SCRIPT({

});

Script N(script_Interact_80241794) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            if (SI_AREA_FLAG(6) == 0) {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0092);
                SI_AREA_FLAG(6) = 1;
            } else {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0093);
                SI_AREA_FLAG(6) = 0;
            }
        }
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0095);
        }
        < 0xFFFFFFF2 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0096);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0097);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0098);
        }
    }
});

Script N(script_Interact_802418F4) = SCRIPT({
    SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0094);
});

Script N(script_Interact_80241924) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            if (SI_AREA_FLAG(7) == 0) {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0099);
                SI_AREA_FLAG(7) = 1;
            } else {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE009A);
                SI_AREA_FLAG(7) = 0;
            }
        }
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE009C);
        }
        < 0xFFFFFFF2 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE009D);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE009E);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE009F);
        }
    }
});

Script N(script_Interact_80241A84) = SCRIPT({
    SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE009B);
});

Script N(script_Interact_80241AB4) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {}
        < 0xFFFFFFF0 {}
        < 0xFFFFFFF2 {}
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00A9);
        }
        >= 39 {
            if (SI_SAVE_FLAG(1014) == 1) {
                if (SI_AREA_FLAG(9) == 1) {
                    SpeakToPlayer(-1, 0x950105, 0x950101, 0, 0xE00AE);
                } else {
                    SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B0);
                }
            } else {
                SetNpcAnimation(-1, 0x950107);
                SpeakToPlayer(-1, 0x950107, 0x950101, 0, 0xE00AA);
                SetNpcAnimation(-1, 0x950109);
                ContinueSpeech(-1, 0x950109, 0x950101, 0, 0xE00AB);
                SetNpcAnimation(-1, 0x95010A);
                ContinueSpeech(-1, 0x95010A, 0x950101, 0, 0xE00AC);
                ShowChoice(0x1E001E);
                match SI_VAR(0) {
                    == 0 {
                        SetNpcAnimation(-1, 0x950105);
                        ContinueSpeech(-1, 0x950105, 0x950101, 0, 0xE00AD);
                        SetNpcAnimation(-1, 0x950101);
                        SI_SAVE_FLAG(1014) = 1;
                        SI_AREA_FLAG(9) = 1;
                    }
                    == 1 {
                        SetNpcAnimation(-1, 0x950105);
                        ContinueSpeech(-1, 0x950105, 0x950101, 0, 0xE00AD);
                        SetNpcAnimation(-1, 0x950101);
                        SI_SAVE_FLAG(1014) = 1;
                        SI_AREA_FLAG(9) = 1;
                    }
                    == 2 {
                        ContinueSpeech(-1, 0x950104, 0x950101, 0, 0xE00AF);
                    }
                }
            }
        }
    }
});

Script N(script_Interact_80241D88) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {}
        < 0xFFFFFFF0 {}
        < 0xFFFFFFF2 {}
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B1);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B2);
        }
    }
});

Script N(script_Interact_80241E28) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            if (SI_AREA_FLAG(8) == 0) {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B3);
                SI_AREA_FLAG(8) = 1;
            } else {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B4);
                SI_AREA_FLAG(8) = 0;
            }
        }
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B6);
        }
        < 0xFFFFFFF2 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B7);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B8);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B9);
        }
    }
});

Script N(script_Interact_80241F88) = SCRIPT({
    SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE00B5);
});

Script N(script_Init_80241FB8) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFDF) {
        BindNpcIdle(-1, N(script_Idle_80241784));
    }
    BindNpcInteract(-1, N(script_Interact_80241794));
});

Script N(script_Init_80242008) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241924));
});

Script N(script_Init_8024202C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241AB4));
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFDF {
            SetNpcFlagBits(-1, 256, 1);
        }
        < 0xFFFFFFE6 {
            RemoveNpc(-1);
        }
        < 0xFFFFFFF0 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            RemoveNpc(-1);
        }
        < 0xFFFFFFF2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            RemoveNpc(-1);
        }
        < 39 {}
        >= 39 {
        }
    }
});

Script N(script_Init_8024212C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241D88));
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFDF {
            RemoveNpc(-1);
        }
        < 0xFFFFFFE6 {
            RemoveNpc(-1);
        }
        < 0xFFFFFFF0 {
            RemoveNpc(-1);
        }
        < 0xFFFFFFF2 {
            RemoveNpc(-1);
        }
        < 39 {}
        >= 39 {
        }
    }
});

Script N(script_Init_802421EC) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFDF) {
        BindNpcIdle(-1, N(script_Idle_80241784));
    }
    BindNpcInteract(-1, N(script_Interact_80241E28));
});

StaticNpc N(npcGroup_8024223C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024172C),
        .pos = { 55.0, 195.0, 160.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80241FB8),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x00000037, 0x0000000A, 0x000000A0, 0x0000004B, 0x0000000A, 0x000000A0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000037, 0x000000C3, 0x000000A0, 0x00000032 },
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00AE,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241758),
        .pos = { 160.0, 191.0, 250.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80242008),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00AF,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241758),
        .pos = { 390.0, 190.0, 255.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_8024202C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00B0,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241758),
        .pos = { 503.0, 206.0, 210.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_8024212C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00B1,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_8024172C),
        .pos = { 350.0, 185.0, 197.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_802421EC),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x0000015E, 0x0000000A, 0x000000C5, 0x0000014A, 0x0000000A, 0x000000C5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x0000015E, 0x000000B9, 0x000000C5, 0x00000032 },
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00B2,
    },
};

Script N(script_80242BEC) = SCRIPT({
    loop SI_VAR(0) {
        PlaySoundAtNpc(5, 8438, 0);
        ShakeCam(0, 0, 10, 0.5);
        sleep 5;
    }
});

Script N(script_80242C50) = SCRIPT({
    DisablePlayerInput(1);
    NpcFacePlayer(2, 1);
    PlaySoundAtNpc(2, 610, 0);
    ShowEmote(2, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    sleep 20;
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(0) -= SI_VAR(3);
    SI_VAR(0) -= 50;
    SI_VAR(1) -= SI_VAR(4);
    SI_VAR(2) -= SI_VAR(5);
    GetNpcPos(2, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(3) -= SI_VAR(0);
    SI_VAR(4) -= SI_VAR(1);
    SI_VAR(5) -= SI_VAR(2);
    NpcMoveTo(2, SI_VAR(3), SI_VAR(5), 30);
    SetCamType(0, 6, 1);
    SetCamSpeed(0, 5.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(2, 0x950104, 0x950101, 0, 0xE00A0);
    PlaySoundAt(8438, 0, 450, 200, 160);
    ShakeCam(0, 0, 20, 0.80078125);
    PlaySoundAtNpc(0, 610, 0);
    PlaySoundAtNpc(1, 610, 0);
    PlaySoundAtNpc(2, 610, 0);
    PlaySoundAtNpc(4, 610, 0);
    ShowEmote(0, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    ShowEmote(1, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    ShowEmote(2, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    ShowEmote(4, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    FadeOutMusic(0, 500);
    ClearAmbientSounds(250);
    sleep 20;
    InterpNpcYaw(2, 90, 1);
    InterpNpcYaw(4, 90, 1);
    sleep 20;
    PlaySound(195);
    SI_VAR(0) = 240.0;
    loop 20 {
        SI_VAR(0) -= 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(4, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    SetNpcPos(0, 420, 300, 220);
    SetNpcPos(1, 460, 250, 210);
    SetNpcPos(4, 0, 0xFFFFFC18, 0);
    EnableNpcShadow(0, 0);
    EnableNpcShadow(1, 0);
    EnableNpcShadow(4, 0);
    PlaySound(193);
    SI_VAR(0) = 0.0;
    loop 20 {
        SI_VAR(0) += 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    SpeakToPlayer(2, 0x950106, 0x950106, 0, 0xE00A1);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 9) {
        func_802412C8_BE8EA8(9);
        spawn {
            SI_MAP_VAR(0) = 0;
            ShowMessageAtScreenPos(0xE00A2, 160, 40);
            SI_MAP_VAR(0) = 1;
        }
        sleep 50;
        DisablePartnerAI(0);
        SetNpcYaw(0xFFFFFFFC, 90);
        EnablePartnerAI();
        loop {
            sleep 1;
            if (SI_MAP_VAR(0) == 1) {
                break;
            }
        }
    }
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x50004, 0x50001, 0, 0xE00A3);
    EnablePartnerAI();
    InterpPlayerYaw(90, 0);
    sleep 5;
    func_802412B0_BE8E90();
    CloseMessage();
    0x802D2B50();
    sleep 60;
    SetMusicTrack(0, 30, 1, 8);
    SetCamType(0, 6, 1);
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 17.0, -11.5);
    SetCamDistance(0, 450);
    SetCamPosA(0, 0xFFFFFFD8, 206);
    SetCamPosB(0, 530, 206);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 426, 190, 194);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetNpcFlagBits(5, 512, 1);
    SetNpcSpeed(5, 2.5);
    SetNpcPos(5, 675, 200, 180);
    NpcFaceNpc(0, 5, 1);
    NpcFaceNpc(1, 5, 1);
    SetNpcPos(2, 272, 190, 214);
    PlaySoundAtNpc(0, 610, 0);
    PlaySoundAtNpc(1, 610, 0);
    ShowEmote(0, 0, 45, 20, 1, 0, 0, 0, 0);
    ShowEmote(1, 0, 45, 20, 1, 0, 0, 0, 0);
    spawn {
        PlaySound(195);
        sleep 20;
        SI_VAR(0) = 240.0;
        loop 20 {
            SI_VAR(0) -= 12.0;
            0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
            0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
            sleep 1;
        }
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        sleep 10;
    }
    SI_VAR(0) = 4;
    spawn N(script_80242BEC);
    SetNpcAnimation(5, 0x6A0009);
    NpcMoveTo(5, 550, 196, 0);
    SetNpcAnimation(5, 0x6A0006);
    SetCamSpeed(0, 4.0);
    SetCamPitch(0, 17.0, -11.5);
    SetCamDistance(0, 375);
    SetCamPosA(0, 0xFFFFFFD8, 206);
    SetCamPosB(0, 530, 206);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 426, 190, 194);
    PanToTarget(0, 0, 1);
    sleep 30;
    SI_MAP_VAR(1) = 0;
    spawn {
        SI_VAR(0) = 7;
        spawn N(script_80242BEC);
        SetNpcAnimation(5, 0x6A0009);
        NpcMoveTo(5, 370, 220, 0);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcMoveTo(5, 330, SI_VAR(2), 0);
        SetNpcAnimation(5, 0x6A0006);
        SI_MAP_VAR(1) = 1;
    }
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 17.0, -11.5);
    SetCamDistance(0, 375);
    SetCamPosA(0, 0xFFFFFFD8, 206);
    SetCamPosB(0, 530, 206);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 240, 169, 206);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(2, 0x950106, 0x950106, 0, 0xE00A4);
    sleep 15;
    loop {
        sleep 1;
        if (SI_MAP_VAR(1) == 1) {
            break;
        }
    }
    NpcFaceNpc(2, 5, 1);
    sleep 30;
    SpeakToPlayer(2, 0x950104, 0x950101, 5, 0xE00A5);
    SetNpcAnimation(2, 0x950109);
    SetNpcAnimation(5, 0x6A001E);
    SetNpcJumpscale(2, 0.0);
    NpcJump1(2, 265, 206, 212, 3);
    sleep 20;
    SpeakToPlayer(5, 0x6A001E, 0x6A001E, 5, 0xE00A6);
    SetNpcPos(2, 303, 237, 228);
    SetNpcAnimation(2, 0x950106);
    EnableNpcShadow(2, 0);
    SetNpcAnimation(5, 0x6A001F);
    SetCamSpeed(0, 5.0);
    SetCamPitch(0, 17.0, -17.0);
    SetCamDistance(0, 250);
    SetCamPosA(0, 0xFFFFFFD8, 206);
    SetCamPosB(0, 530, 206);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 280, 169, 206);
    PanToTarget(0, 0, 1);
    spawn {
        sleep 50;
        PlaySoundAtNpc(5, 789, 0);
    }
    sleep 40;
    SetNpcPos(2, 0, 0xFFFFFC18, 0);
    SetNpcAnimation(5, 0x6A0020);
    sleep 80;
    SetCamSpeed(0, 90.0);
    SetCamPitch(0, 17.0, -11.5);
    SetCamDistance(0, 375);
    SetCamPosA(0, 0xFFFFFFD8, 206);
    SetCamPosB(0, 530, 206);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 240, 169, 206);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetNpcAnimation(5, 0x6A0006);
    sleep 15;
    SpeakToPlayer(5, 0x6A0021, 0x6A0006, 5, 0xE00A7);
    SetNpcAnimation(5, 0x6A0021);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFCE;
    SI_VAR(1) += 50;
    SI_VAR(2) += 10;
    PlayEffect(6, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 20;
    SetNpcAnimation(5, 0x6A0006);
    InterpNpcYaw(5, 90, 1);
    sleep 30;
    SI_VAR(0) = 7;
    spawn N(script_80242BEC);
    SetNpcAnimation(5, 0x6A0009);
    NpcMoveTo(5, 370, 220, 0);
    NpcMoveTo(5, 550, 196, 0);
    SetNpcAnimation(5, 0x6A0006);
    SetNpcPos(5, 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(5, 512, 0);
    NpcFacePlayer(0, 3);
    SetNpcPos(0, 55, 195, 160);
    SetNpcPos(1, 160, 191, 250);
    SetNpcPos(4, 350, 185, 197);
    EnableNpcShadow(0, 1);
    EnableNpcShadow(1, 1);
    EnableNpcShadow(4, 1);
    PlaySound(193);
    SI_VAR(0) = 0.0;
    loop 20 {
        SI_VAR(0) += 12.5;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(4, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    0x802CFD30(0, 0, 0, 0, 0, 0);
    0x802CFD30(1, 0, 0, 0, 0, 0);
    0x802CFD30(4, 0, 0, 0, 0, 0);
    sleep 10;
    SetCamType(0, 4, 0);
    SetCamSpeed(0, 3.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    SpeakToPlayer(4, 0x950104, 0x950101, 5, 0xE00A8);
    DisablePlayerInput(0);
});

Script N(script_802441FC) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFDF) {
        SetNpcPos(2, 330, 184, 240);
        loop {
            SI_VAR(10) = 0;
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(2) >= 110) {
                if (SI_VAR(0) >= 220) {
                    SI_VAR(10) = 1;
                }
            }
            if (SI_VAR(10) == 1) {
                break;
            }
            sleep 1;
        }
        0x802D2B6C();
        await N(script_80242C50);
        BindNpcInteract(0, N(script_Interact_802418F4));
        BindNpcInteract(1, N(script_Interact_80241A84));
        BindNpcInteract(4, N(script_Interact_80241F88));
        SI_SAVE_VAR(0) = 0xFFFFFFDF;
        spawn N(script_80241360);
    }
});

Script N(script_Init_80244358) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFDF) {
        RemoveNpc(-1);
    }
});

s32 N(extraAnimationList_80244390)[] = {
    0x006A0006, 0x006A0009, 0x006A001E, 0x006A001F, 0x006A0020, 0x006A0021, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802443AC)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802416B0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000B01,
        .init = N(script_Init_80244358),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006A0006, 0x006A0009, 0x006A000C, 0x006A000C, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000, 0x006A0000,
        },
        .extraAnimations = N(extraAnimationList_80244390),
    },
};

Script N(script_Idle_8024459C) = SCRIPT({
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 0xFFFFFFC4;
    SI_VAR(4) = SI_VAR(0);
    SI_VAR(4) += 60;
    loop {
        RandInt(5, SI_VAR(5));
        SI_VAR(6) =f SI_VAR(5);
        SI_VAR(6) *= 0.1005859375;
        SI_VAR(6) += 0.80078125;
        SetNpcSpeed(-1, SI_VAR(6));
        NpcMoveTo(-1, SI_VAR(3), SI_VAR(2), 0);
        RandInt(5, SI_VAR(5));
        SI_VAR(6) =f SI_VAR(5);
        SI_VAR(6) *= 0.1005859375;
        SI_VAR(6) += 0.80078125;
        SetNpcSpeed(-1, SI_VAR(6));
        NpcMoveTo(-1, SI_VAR(4), SI_VAR(2), 0);
    }
});

Script N(script_Init_80244704) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024459C));
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_8024473C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024459C));
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_80244774) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024459C));
    EnableNpcShadow(-1, 0);
});

Script N(script_Init_802447AC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024459C));
    EnableNpcShadow(-1, 0);
});

StaticNpc N(npcGroup_802447E4)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80241758),
        .pos = { 36.0, 277.0, 140.0 },
        .flags = 0x00402705,
        .init = N(script_Init_80244704),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80241758),
        .pos = { 200.0, 275.0, 182.0 },
        .flags = 0x00402705,
        .init = N(script_Init_8024473C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80241758),
        .pos = { 379.0, 300.0, 192.0 },
        .flags = 0x00402705,
        .init = N(script_Init_80244774),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
    {
        .id = 9,
        .settings = &N(npcSettings_80241758),
        .pos = { 525.0, 286.0, 178.0 },
        .flags = 0x00402705,
        .init = N(script_Init_802447AC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
};

NpcGroupList N(npcGroupList_80244FA4) = {
    NPC_GROUP(N(npcGroup_802443AC), 0x00000000),
    NPC_GROUP(N(npcGroup_8024223C), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_80244FC8) = {
    NPC_GROUP(N(npcGroup_802443AC), 0x00000000),
    NPC_GROUP(N(npcGroup_8024223C), 0x00000000),
    NPC_GROUP(N(npcGroup_802447E4), 0x00000000),
    {},
};

s32 pad_004FF8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA7E0, 17, 238, 80, 0, 0x80000000);
});

s32 pad_005034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80245040_BECC20

// rodata: D_80245048_BECC28

// rodata: D_80245050_BECC30

// rodata: D_80245058_BECC38

// rodata: jtbl_80245060_BECC40

// rodata: jtbl_802451F0_BECDD0

s32 pad_005204[] = {
    0x00000000, 0x00000000, 0x00000000,
};
