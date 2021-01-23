#include "jan_16.h"

s32 pad_0002F8[2];
s32 pad_00053C[1];
Script N(script_802405D0);
Script N(script_ExitWalk_802406C0);
Script N(script_ExitWalk_8024071C);
Script N(script_ExitWalk_80240778);
Script N(script_802407D4);
Script N(script_80240838);
Script N(script_802409F8);
Script N(script_80240B3C);
Script N(main);
Script N(script_80241250);
Script N(script_802412D4);
Script N(script_Interact_80241540);
Script N(script_Init_80241570);
Script N(script_Interact_802416C4);
Script N(script_Init_80241FBC);
StaticNpc N(npcGroup_802420B0)[6];
NpcGroupList N(npcGroupList_80242C50);
s32 pad_002C68[2];
Script N(script_MakeEntities);
s32 pad_002CC8[2];
Script N(script_SearchBush_80242CD0);
Script N(script_ShakeTree_80243030);
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
Script N(script_802436D4);
s32 pad_003794[3];
const char D_802437A0_B837A0[8]; // "jan_15"
const char D_802437A8_B837A8[8]; // "jan_22"
const char D_802437B0_B837B0[8]; // "jan_17"
s32 pad_0037B8[2];

// text: func_80240000_B80000

// text: func_80240124_B80124

s32 pad_0002F8[] = {
    0x00000000, 0x00000000,
};

// text: func_80240300_B80300

// text: func_80240370_B80370

s32 pad_00053C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -480.0f, 0.0f, 0.0f, 90.0f },
    { 480.0f, 0.0f, 0.0f, 270.0f },
    { -247.0f, 0.0f, 0.0f, 225.0f },
    { -390.0f, 0.0f, 20.0f, 100.0f },
    { 35.0f, 600.0f, 330.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900FE,
};

Script N(script_802405D0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetMusicTrack(0, 40, 0, 8);
            SI_AREA_FLAG(3) = 0;
        }
        == 3 {
            SetMusicTrack(0, 40, 1, 8);
            SI_AREA_FLAG(3) = 1;
        }
        else {
            if (SI_AREA_FLAG(3) == 0) {
                SetMusicTrack(0, 40, 0, 8);
            }
        }
    }
    PlayAmbientSounds(3);
});

Script N(script_ExitWalk_802406C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802437A0_B837A0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024071C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802437A8_B837A8, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240778) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802437B0_B837B0, 0);
    sleep 100;
});

Script N(script_802407D4) = SCRIPT({
    bind N(script_ExitWalk_802406C0) to 0x80000 0;
    bind N(script_ExitWalk_8024071C) to 0x80000 4;
    bind N(script_ExitWalk_80240778) to 0x80000 9;
});

Script N(script_80240838) = SCRIPT({
    if (SI_SAVE_VAR(0) != 21) {
        PlayEffect(85, 5, 0xFFFFFECA, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(85, 5, 0xFFFFFF2E, 10, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(85, 5, 330, 10, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    PlayEffect(85, 5, 0xFFFFFED4, 10, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(85, 5, 0xFFFFFFB0, 10, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(85, 5, 430, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
});

Script N(script_802409F8) = SCRIPT({
    SI_VAR(15) = 0;
    loop {
        SI_VAR(0) =f SI_MAP_VAR(10);
        SI_VAR(1) =f SI_MAP_VAR(10);
        SI_VAR(0) *= -0.01953125;
        SI_VAR(1) *= 0.0400390625;
        SI_VAR(0) += 1;
        SI_VAR(1) += 1;
        ScaleGroup(21, SI_VAR(0), SI_VAR(1), 1);
        SI_VAR(15) += 1;
        if (SI_VAR(15) >= 600) {
            SI_VAR(15) = 0;
        }
        SI_VAR(0) =f SI_VAR(10);
        SI_VAR(0) *= -0.046875;
        SI_MAP_VAR(10) +=f SI_VAR(0);
        SI_MAP_VAR(10) *= 0.84375;
        SI_VAR(10) +=f SI_MAP_VAR(10);
        sleep 1;
    }
});

Script N(script_80240B3C) = SCRIPT({
    spawn N(script_802409F8);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    UseSettingsFrom(0, 35, 100, 330);
    SetPanTarget(0, 35, 100, 330);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        func_802D2B6C();
    }
    sleep 15;
    spawn {
        sleep 30;
        SetPanTarget(0, 35, 0, 330);
        SetCamSpeed(0, 0.80078125);
        PanToTarget(0, 0, 1);
    }
    DisablePlayerPhysics(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    SetPlayerPos(35, 600, 340);
    MakeLerp(600, 130, 15, 0);
    loop {
        UpdateLerp();
        SetPlayerPos(35, SI_VAR(0), 340);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlayEffect(20, 0, 35, 120, 340, 100, 0, 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(20, 0, 55, 120, 330, 100, 0, 0, 0, 0, 0, 0, 0, 0);
    SI_MAP_VAR(10) += -7.5;
    SetPanTarget(0, 0, 190, 350);
    SetCamSpeed(0, 1.2001953125);
    PanToTarget(0, 0, 1);
    spawn {
        SetPlayerJumpscale(2.0);
        PlaySoundAtPlayer(358, 0);
        PlayerJump(0xFFFFFFDD, 0, 385, 30);
        SetPlayerActionState(10);
    }
    SetNpcJumpscale(0xFFFFFFFC, 0);
    NpcJump0(0xFFFFFFFC, 35, 130, 330, 15);
    spawn {
        loop 3 {
            PlayEffect(20, 0, 35, 120, 340, 100, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(20, 0, 55, 120, 340, 100, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 5;
        }
    }
    SI_MAP_VAR(10) += -7.5;
    SetPanTarget(0, 0xFFFFFFDD, 0, 385);
    SetCamSpeed(0, 1.80078125);
    PanToTarget(0, 0, 1);
    SetNpcJumpscale(0xFFFFFFFC, 2.0);
    NpcJump0(0xFFFFFFFC, 0xFFFFFFF6, 0, 395, 20);
    EnablePartnerAI();
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80242C50));
    await N(script_MakeEntities);
    spawn N(script_802412D4);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 4) {
        spawn N(script_80240B3C);
        spawn N(script_802407D4);
    } else {
        SI_VAR(0) = N(script_802407D4);
        spawn EnterWalk;
    }
    await N(script_802405D0);
    spawn N(script_802436D4);
    spawn N(script_80240838);
    func_80240000_B80000(0, -1, 3);
    func_80240000_B80000(2, 0, 3);
    func_80240124_B80124(3, 255, 255, 255, 0, 0, 25, 0, 0, 0);
});

Script N(script_80241250) = SCRIPT({
    SetNpcScale(-1, 1.5, 1.5, 1.5);
});

NpcSettings N(npcSettings_8024127C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x62,
    .radius = 0x50,
    .otherAI = &N(script_80241250),
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

NpcSettings N(npcSettings_802412A8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
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

Script N(script_802412D4) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_SAVE_VAR(0) < 20) {
        EnableGroup(22, 0);
        EnableGroup(44, 0);
        PanToTarget(0, 0, 0);
        SetCamType(0, 1, 0);
        UseSettingsFrom(0, 0xFFFFFEF3, 94, 0xFFFFFFF8);
        SetPanTarget(0, 0xFFFFFEF3, 94, 0xFFFFFFF8);
        SetCamDistance(0, 1000);
        SetCamPitch(0, 20, 0);
        SetCamPosA(0, 0xFFFFFE66, 0xFFFFFFAB);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 10;
        SetCamDistance(0, 400);
        SetCamPitch(0, 0xFFFFFFF3, 1);
        SetCamSpeed(0, 0.4501953125);
        SetCamPosA(0, 0xFFFFFF31, 0xFFFFFFAB);
        PanToTarget(0, 0.80078125, 1);
        WaitForCam(0, 1.0);
        sleep 30;
        ResetCam(0, 90.0);
        SI_SAVE_VAR(0) = 20;
    }
    EnableGroup(22, 1);
    EnableGroup(44, 1);
    EnableGroup(26, 0);
    EnableGroup(53, 0);
    DisablePlayerInput(0);
});

Script N(script_Interact_80241540) = SCRIPT({
    SpeakToPlayer(-1, 0x980005, 0x980001, 0, 0x1000E3);
});

Script N(script_Init_80241570) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 21 {
            goto 20;
        }
    21..22
        BindNpcInteract(-1, N(script_Interact_80241540));
        GetSelfNpcID(SI_VAR(0));
        if (SI_VAR(0) == 1) {
            SetNpcPos(1, 0xFFFFFE3E, 0, 26);
            SetNpcPos(2, 0xFFFFFE52, 0, 4);
            SetNpcPos(3, 0xFFFFFE66, 0, 0xFFFFFFEE);
            SetNpcPos(4, 0xFFFFFE7A, 0, 0xFFFFFFD8);
            SetNpcPos(5, 0xFFFFFE65, 93, 0xFFFFFFF0);
        }
        > 22 {
        20:
            ModifyColliderFlags(0, 32, 0x7FFFFE00);
            RemoveNpc(-1);
        }
    }
});

Script N(script_Interact_802416C4) = SCRIPT({
    DisablePlayerInput(1);
    ModifyColliderFlags(0, 33, 0x7FFFFE00);
    SetNpcFlagBits(-1, 320, 1);
    SetNpcAnimation(-1, 0xC40002);
    NpcFacePlayer(-1, 4);
    sleep 5;
    PlayerFaceNpc(-1, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamProperties(0, 4.5, SI_VAR(0), SI_VAR(1), SI_VAR(2), 450, 20.0, -9.5);
    InterpNpcYaw(-1, 90, 0);
    sleep 10;
    InterpPlayerYaw(90, 0);
    sleep 20;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        SetNpcAnimation(-1, 0xC4000C);
        sleep 8;
        SetNpcAnimation(-1, 0xC4000D);
        sleep 15;
        SetNpcAnimation(-1, 0xC40008);
        sleep 10;
        SpeakToPlayer(-1, 0xC40008, 0xC40008, 5, 0x1000E1);
        SetNpcAnimation(-1, 0xC40003);
        sleep 10;
        SetNpcAnimation(-1, 0xC40002);
    }
    SetNpcJumpscale(-1, 2);
    NpcJump1(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30);
    PlaySoundAtNpc(-1, 394, 0);
    spawn {
        ShakeCam(0, 0, 50, 1.0);
        SetPlayerAnimation(0x10002);
    }
    SetPlayerAnimation(0x1002B);
    spawn {
        sleep 20;
        loop 10 {
            PlayEffect(6, 1, 115, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(6, 1, 205, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
            PlayEffect(6, 1, 190, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
            PlayEffect(6, 1, 140, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(6, 1, 170, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
        }
    }
    loop 15 {
        ScaleGroup(84, 1, 1.05078125, 1);
        sleep 2;
        ScaleGroup(84, 1, 0.9501953125, 1);
        sleep 2;
    }
    spawn {
        sleep 15;
        MakeLerp(0, 100, 100, 1);
        loop {
            UpdateLerp();
            TranslateGroup(84, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        SI_VAR(0) = 1;
        loop 6 {
            match SI_VAR(0) {
            1..4
                PlaySoundAtCollider(30, 396, 0);
                == 5 {
                    PlaySoundAtCollider(30, 397, 0);
                }
                == 6 {
                    PlaySoundAtCollider(30, 398, 0);
                }
            }
            SI_VAR(0) += 1;
            sleep 20;
        }
    }
    SI_VAR(2) = 1.0;
    SI_VAR(3) = 0.25;
    loop 5 {
        loop 10 {
            SI_VAR(2) +=f SI_VAR(3);
            ScaleGroup(84, 1, SI_VAR(2), 1);
            sleep 1;
        }
        PlayEffect(6, 1, 123, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(6, 1, 193, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        loop 10 {
            SI_VAR(2) -=f SI_VAR(3);
            ScaleGroup(84, 1, SI_VAR(2), 1);
            sleep 1;
        }
        PlayEffect(6, 1, 115, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(6, 1, 205, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        SI_VAR(3) -= 0.05078125;
    }
    ModifyColliderFlags(0, 30, 0x7FFFFE00);
    sleep 10;
    SpeakToPlayer(-1, 0xC40009, 0xC40002, 0, 0x1000E2);
    SetNpcAnimation(-1, 0xC40004);
    SetNpcSpeed(0, 4.0);
    NpcMoveTo(-1, 340, 270, 0);
    SetNpcFlagBits(-1, 512, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    ResetCam(0, 5);
    SI_SAVE_VAR(0) = 22;
    DisablePlayerInput(0);
});

Script N(script_Init_80241FBC) = SCRIPT({
    if (SI_SAVE_VAR(0) == 21) {
        SetNpcFlagBits(-1, 256, 0);
        SetNpcPos(-1, 85, 0, 410);
        BindNpcInteract(-1, N(script_Interact_802416C4));
        return;
    } else {
        ModifyColliderFlags(0, 33, 0x7FFFFE00);
        if (SI_SAVE_VAR(0) >= 22) {
            ModifyColliderFlags(0, 30, 0x7FFFFE00);
            TranslateGroup(84, 0, 100, 0);
        }
    }
    RemoveNpc(-1);
});

StaticNpc N(npcGroup_802420B0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024127C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00401505,
        .init = N(script_Init_80241FBC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002,
        },
        .tattle = 0x1A00D0,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802412A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .init = N(script_Init_80241570),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00C9,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802412A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .init = N(script_Init_80241570),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CA,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802412A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .init = N(script_Init_80241570),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CB,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802412A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .init = N(script_Init_80241570),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CC,
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802412A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .init = N(script_Init_80241570),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CD,
    },
};

NpcGroupList N(npcGroupList_80242C50) = {
    NPC_GROUP(N(npcGroup_802420B0), 0x00000000),
    {},
};

s32 pad_002C68[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802BC7AC, 0xFFFFFF90, 0, 210, 0, 0x80000000);
    MakeEntity(D_802BC7AC, 0xFFFFFE3B, 0, 188, 170, 0x80000000);
});

s32 pad_002CC8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80242CD0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240370_B80370, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240370_B80370, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80243030) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240370_B80370, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240370_B80370, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240370_B80370, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240370_B80370, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x48 },
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { nanf, 2.4e-44f, 5.47e-43f } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), 0x00000000, N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4A },
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { 2.54e-43f, 2.2e-44f, 3.11e-43f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4C },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { 4.32e-43f, 2.4e-44f, 3.12e-43f } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4E },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { 6.46e-43f, 2.7e-44f, nanf } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

Script N(script_802436D4) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80242CD0) to TriggerFlag_WALL_INTERACT 39;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80242CD0) to TriggerFlag_WALL_INTERACT 40;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80242CD0) to TriggerFlag_WALL_INTERACT 41;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80242CD0) to TriggerFlag_WALL_INTERACT 42;
});

s32 pad_003794[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802437A0_B837A0

// rodata: D_802437A8_B837A8

// rodata: D_802437B0_B837B0

s32 pad_0037B8[] = {
    0x00000000, 0x00000000,
};
