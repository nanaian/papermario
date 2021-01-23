#include "kzn_01.h"

s32 pad_00030C[1];
Script N(script_UpdateTexturePan_80240370);
Script N(script_8024040C);
Script N(script_80240528);
Script N(script_ExitWalk_80240644);
Script N(script_ExitWalk_802406A0);
Script N(script_802406FC);
Script N(main);
s32 unk_missing_802408AC[11];
Script N(script_Idle_802408D8);
Script N(script_Init_80240B00);
StaticNpc N(npcGroup_80240B54)[1];
NpcGroupList N(npcGroupList_80240D44);
s32 pad_000D5C[1];
const char D_80240D60_C5A730[8]; // "jan_22"
const char D_80240D68_C5A738[8]; // "kzn_02"

// text: func_80240000_C599D0

// text: func_80240124_C59AF4

s32 pad_00030C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -445.0f, 0.0f, 0.0f, 90.0f },
    { 425.0f, -255.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190103,
};

Script N(script_UpdateTexturePan_80240370) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C599D0();
                    return;
                }
            }
        }
    }
    func_80240124_C59AF4();
});

Script N(script_8024040C) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 3);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 600;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240370);
    }
});

Script N(script_80240528) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 4);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 500;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240370);
    }
});

Script N(script_ExitWalk_80240644) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240D60_C5A730, 2);
    sleep 100;
});

Script N(script_ExitWalk_802406A0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240D68_C5A738, 0);
    sleep 100;
});

Script N(script_802406FC) = SCRIPT({
    bind N(script_ExitWalk_80240644) to 0x80000 6;
    bind N(script_ExitWalk_802406A0) to 0x80000 9;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1983) = 1;
    if (SI_SAVE_VAR(0) < 25) {
        SI_SAVE_VAR(0) = 25;
    }
    MakeNpcs(1, N(npcGroupList_80240D44));
    SI_VAR(0) = N(script_802406FC);
    spawn EnterWalk;
    sleep 1;
    SetMusicTrack(0, 41, 0, 8);
    ClearAmbientSounds(250);
    SI_VAR(0) = 21;
    spawn N(script_8024040C);
});

NpcSettings N(npcSettings_80240880) = {
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

s32 unk_missing_802408AC[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Idle_802408D8) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 225) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, 270, 0xFFFFFF38, 0);
    SetCamDistance(0, 400);
    SetCamSpeed(0, 2.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SetNpcPos(-1, 320, 0xFFFFFF24, 0);
    PlaySoundAtNpc(-1, 801, 0);
    SetNpcAnimation(-1, 0x360017);
    sleep 30;
    SetNpcAnimation(-1, 0x360001);
    SpeakToPlayer(-1, 0x360004, 0x360001, 0, 0x1000ED);
    sleep 10;
    PlaySoundAtNpc(-1, 802, 0);
    SetNpcAnimation(-1, 0x360018);
    sleep 25;
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    ResetCam(0, 3.0);
    SI_SAVE_FLAG(1309) = 1;
    DisablePlayerInput(0);
});

Script N(script_Init_80240B00) = SCRIPT({
    if (SI_SAVE_FLAG(1309) == 0) {
        BindNpcIdle(-1, N(script_Idle_802408D8));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80240B54)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240880),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200004,
        .init = N(script_Init_80240B00),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

NpcGroupList N(npcGroupList_80240D44) = {
    NPC_GROUP(N(npcGroup_80240B54), 0x00000000),
    {},
};

s32 pad_000D5C[] = {
    0x00000000,
};

// rodata: D_80240D60_C5A730

// rodata: D_80240D68_C5A738

