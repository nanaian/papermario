#include "mim_10.h"

Script N(script_802401F0);
Script N(script_80240264);
s32 pad_0004C8[2];
Script N(script_MakeEntities);
s32 pad_000504[3];
Script N(script_ExitWalk_80240510);
Script N(script_ExitWalk_8024056C);
Script N(script_80240648);
Script N(script_EnterWalk_80240690);
Script N(main);
s32 pad_0007E4[3];
Script N(script_80240848);
Script N(script_80240980);
Script N(script_80240FC0);
Script N(script_Init_80241020);
Script N(script_Idle_80241098);
Script N(script_Init_802411DC);
StaticNpc N(npcGroup_80241260)[1];
StaticNpc N(npcGroup_80241450)[1];
NpcGroupList N(npcGroupList_80241640);
s32 pad_001664[3];
const char D_80241670_BB7050[8]; // "mac_02"
const char D_80241678_BB7058[8]; // "mim_01"
const char D_80241680_BB7060[8]; // "kmr_22"
s32 pad_001688[2];

// text: func_80240000_BB59E0

// text: func_80240030_BB5A10

// text: func_80240080_BB5A60

// text: func_802400EC_BB5ACC

// text: func_80240148_BB5B28

EntryList N(entryList) = {
    { -385.0f, 20.0f, 10.0f, 90.0f },
    { 385.0f, 0.0f, 10.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900A6,
};

Script N(script_802401F0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        0xFFFFFFF3..5
        SetMusicTrack(0, 74, 0, 8);
        else {
            SetMusicTrack(0, 0, 0, 8);
        }
    }
});

Script N(script_80240264) = SCRIPT({
    if (SI_SAVE_VAR(0) == 0xFFFFFFCD) {
        spawn N(script_802401F0);
        return;
    }
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn N(script_802401F0);
        return;
    }
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(1) < 0) {
        spawn N(script_802401F0);
        sleep 30;
    } else {
        SetMusicTrack(0, 26, 0, 8);
        sleep 15;
        ClearAmbientSounds(250);
        sleep 15;
        goto 20;
    }
10:
    sleep 1;
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(1) >= 100) {
        FadeOutMusic(0, 1000);
        sleep 15;
        sleep 15;
        SetMusicTrack(0, 26, 0, 8);
        sleep 30;
        goto 20;
    }
    goto 10;
20:
    sleep 1;
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(1) < 0) {
        FadeOutMusic(0, 1000);
        sleep 30;
        spawn N(script_802401F0);
        sleep 30;
        goto 10;
    }
    goto 20;
});

s32 pad_0004C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0xFFFFFF51, 60, 0xFFFFFFCE, 0, 0x80000000);
});

s32 pad_000504[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240510) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241670_BB7050, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024056C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    if (SI_SAVE_VAR(0) == 0xFFFFFFCE) {
        if (SI_SAVE_FLAG(3) == 0) {
            SI_SAVE_FLAG(3) = 1;
            FadeOutMusic(0, 1500);
            GotoMapSpecial(D_80241680_BB7060, 3, 6);
            sleep 100;
            return;
        }
    }
    GotoMap(D_80241678_BB7058, 1);
    sleep 100;
});

Script N(script_80240648) = SCRIPT({
    bind N(script_ExitWalk_80240510) to 0x80000 5;
    bind N(script_ExitWalk_8024056C) to 0x80000 1;
});

Script N(script_EnterWalk_80240690) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240648);
        return;
    }
    SI_VAR(0) = N(script_80240648);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 1;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241640));
    spawn N(script_80240FC0);
    await N(script_MakeEntities);
    spawn N(script_80240264);
    spawn N(script_EnterWalk_80240690);
    sleep 1;
    SI_SAVE_FLAG(263) = 0;
});

s32 pad_0007E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802407F0) = {
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

NpcSettings N(npcSettings_8024081C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
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

Script N(script_80240848) = SCRIPT({
    parallel {
        GetPlayerPos(SI_VAR(10), SI_VAR(11), SI_VAR(12));
        UseSettingsFrom(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SetCamSpeed(0, 90.0);
        loop {
            SetCamDistance(0, 400);
            PanToTarget(0, 0, 1);
            sleep 1;
            SetCamDistance(0, 450);
            PanToTarget(0, 0, 1);
            sleep 1;
        }
    }
    SetPlayerAnimation(0x1002B);
    sleep 5;
    SpeakToPlayer(0, 0xBF0009, 0xBF0009, 0, 0xE0002);
    SetPlayerAnimation(0x10002);
});

Script N(script_80240980) = SCRIPT({
    func_80240000_BB59E0();
    SetCamPerspective(0, 3, 25, 16, 650);
    func_80240030_BB5A10();
    spawn {
        func_802400EC_BB5ACC();
    }
    spawn {
        func_80240148_BB5B28();
    }
    DisablePlayerInput(1);
    SetNpcPos(0, 200, 44, 0);
    0x802CFD30(0, 7, 0, 0, 0, 0);
    SI_MAP_VAR(0) = 1;
    SetMusicTrack(0, 27, 0, 8);
    sleep 20;
    SetPlayerAnimation(0x1002A);
    sleep 10;
    SetPlayerAnimation(0x80022);
    sleep 30;
    SetPlayerAnimation(0x1002A);
    sleep 10;
    InterpPlayerYaw(270, 0);
    sleep 20;
    InterpPlayerYaw(90, 0);
    sleep 20;
    PlaySoundAtNpc(0, 193, 0);
    SI_VAR(0) = 0.0;
    loop 20 {
        SI_VAR(0) += 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    sleep 20;
    GetNpcPos(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    UseSettingsFrom(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    SetPanTarget(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    SetCamDistance(0, 270);
    SetCamSpeed(0, 90.0);
    SetCamLeadPlayer(0, 0);
    PanToTarget(0, 0, 1);
    sleep 10;
    SpeakToPlayer(0, 0xBF0004, 0xBF0001, 0, 0xE0000);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamLeadPlayer(0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    sleep 30;
    SpeakToPlayer(0, 0xBF0004, 0xBF0001, 0, 0xE0001);
    PlaySoundAtNpc(0, 195, 0);
    SI_VAR(0) = 240.0;
    loop 20 {
        SI_VAR(0) -= 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    sleep 25;
    SetNpcAnimation(0, 0xBF0009);
    spawn {
        GetNpcPos(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SI_VAR(11) -= 40;
        SetNpcPos(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SetNpcScale(0, 3.0, 3.0, 3.0);
        SI_VAR(0) = 0.0;
        loop 20 {
            SI_VAR(0) += 12.0;
            0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
            sleep 1;
        }
    }
    PlaySoundAtNpc(0, 658, 0);
    await N(script_80240848);
    SetCamDistance(0, 450);
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    SI_VAR(0) = 240.0;
    loop 20 {
        SI_VAR(0) -= 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    SI_SAVE_VAR(0) = 0xFFFFFFCE;
    spawn N(script_80240264);
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    DisablePlayerInput(0);
});

Script N(script_80240FC0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFCD {
            return;
        }
        < 0xFFFFFFCE {
            spawn N(script_80240980);
        }
        0xFFFFFFCE..0xFFFFFFF1
    }
});

Script N(script_Init_80241020) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFCD {
            RemoveNpc(-1);
        }
        < 0xFFFFFFCE {
            SI_SAVE_FLAG(98) = 1;
        }
        >= 0xFFFFFFCE {
            RemoveNpc(-1);
        }
    }
});

Script N(script_Idle_80241098) = SCRIPT({
    0x802D2508();
    DisablePlayerInput(1);
    SI_MAP_VAR(0) = 1;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamProperties(0, 3.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 300, 15, 0xFFFFFFF9);
    SpeakToPlayer(-1, 0x210016, 0x210003, 5, 0xE0023);
    sleep 15;
    SetNpcAnimation(-1, 0x21000B);
    SI_VAR(0) -= 200;
    NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 25);
    ResetCam(0, 90.0);
    SI_SAVE_FLAG(929) = 1;
    SI_MAP_VAR(0) = 0;
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Init_802411DC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241098));
    if (SI_SAVE_FLAG(929) == 1) {
        RemoveNpc(-1);
        return;
    }
    if (SI_SAVE_FLAG(927) == 0) {
        RemoveNpc(-1);
        return;
    }
});

StaticNpc N(npcGroup_80241260)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802407F0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80241020),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00BF0001, 0x00BF0002, 0x00BF0003, 0x00BF0003, 0x00BF0001, 0x00BF0001, 0x00BF0000, 0x00BF0000, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008, 0x00BF0005, 0x00BF0006, 0x00BF0007, 0x00BF0008,
        },
    },
};

StaticNpc N(npcGroup_80241450)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024081C),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00200D04,
        .init = N(script_Init_802411DC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
    },
};

NpcGroupList N(npcGroupList_80241640) = {
    NPC_GROUP(N(npcGroup_80241260), 0x00000000),
    NPC_GROUP(N(npcGroup_80241450), 0x00000000),
    {},
};

s32 pad_001664[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241670_BB7050

// rodata: D_80241678_BB7058

// rodata: D_80241680_BB7060

s32 pad_001688[] = {
    0x00000000, 0x00000000,
};
