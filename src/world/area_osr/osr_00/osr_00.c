#include "osr_00.h"

s32 pad_00037C[1];
s32 pad_000788[2];
Script N(script_80240820);
Script N(script_UpdateTexturePan_802408F0);
Script N(script_ExitWalk_8024098C);
Script N(script_ExitDoubleDoor_802409E8);
Script N(script_80240A8C);
Script N(script_EnterWalk_80240AD4);
Script N(script_80240BA0);
Script N(main);
s32 pad_000F5C[1];
StaticNpc N(npcGroup_80240F8C)[1];
NpcGroupList N(npcGroupList_8024117C);
s32 unk_missing_80241194[14];
s32 unk_missing_8024127C[11];
Script N(script_Interact_80241300);
Script N(script_Init_80241330);
Script N(script_Interact_80241354);
Script N(script_Init_80241384);
Script N(script_Interact_802413A8);
Script N(script_Init_802413D8);
Script N(script_Interact_802413FC);
Script N(script_Init_8024142C);
Script N(script_Interact_80241450);
Script N(script_Init_80241480);
Script N(script_Interact_802414A4);
Script N(script_Init_802414D4);
Script N(script_Interact_802414F8);
Script N(script_Init_80241528);
Script N(script_Interact_8024154C);
Script N(script_Init_8024157C);
Script N(script_Interact_802415A0);
Script N(script_Init_802415D0);
Script N(script_Interact_802415F4);
Script N(script_Init_80241624);
Script N(script_Interact_80241648);
Script N(script_Init_80241678);
Script N(script_Interact_8024169C);
Script N(script_Init_802416CC);
Script N(script_Interact_802416F0);
Script N(script_Init_80241720);
Script N(script_80241744);
Script N(script_Interact_802417E8);
Script N(script_Init_80241818);
s32 N(extraAnimationList_80241858)[4];
s32 N(extraAnimationList_80241868)[4];
s32 N(extraAnimationList_80241878)[4];
StaticNpc N(npcGroup_80241888)[3];
s32 N(extraAnimationList_80241E58)[4];
s32 N(extraAnimationList_80241E68)[4];
s32 N(extraAnimationList_80241E78)[4];
StaticNpc N(npcGroup_80241E88)[4];
s32 N(extraAnimationList_80242648)[4];
s32 N(extraAnimationList_80242658)[4];
StaticNpc N(npcGroup_80242668)[2];
s32 N(extraAnimationList_80242A48)[4];
StaticNpc N(npcGroup_80242A58)[2];
s32 N(extraAnimationList_80242E38)[4];
s32 N(extraAnimationList_80242E48)[4];
StaticNpc N(npcGroup_80242E58)[3];
NpcGroupList N(npcGroupList_80243428);
Script N(script_80243470);
Script N(script_802435F8);
s32 pad_003794[3];
const char D_802437A0_AAFFD0[8]; // "mac_01"
const char D_802437A8_AAFFD8[8]; // "kkj_00"
const char D_802437B0_AAFFE0[8]; // "kmr_20"
const char D_802437B8_AAFFE8[8]; // "kkj_00"

// text: func_80240000_AAC830

// text: func_80240124_AAC954

// text: func_8024030C_AACB3C

// text: func_80240344_AACB74

s32 pad_00037C[] = {
    0x00000000,
};

// text: func_80240380_AACBB0

// text: func_802404A4_AACCD4

// text: func_80240678_AACEA8

// text: func_802406E0_AACF10

s32 pad_000788[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 604.0f, 0.0f },
    { 612.0f, 0.0f, 111.0f, 270.0f },
    { 0.0f, 0.0f, -260.0f, 180.0f },
    { 500.0f, 20.0f, 100.0f, 270.0f },
    { 0.0f, 0.0f, 300.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x0,
};

Script N(script_80240820) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF80 {
            SetMusicTrack(0, 63, 1, 8);
        }
        == 96 {
            SetMusicTrack(0, 63, 0, 8);
        } else {
            SetMusicTrack(0, 0, 0, 8);
        }
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        ClearAmbientSounds(250);
    }
});

Script N(script_UpdateTexturePan_802408F0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_AAC830();
                    return;
                }
            }
        }
    }
    func_80240124_AAC954();
});

Script N(script_ExitWalk_8024098C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802437A0_AAFFD0, 2);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802409E8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 6;
    SI_VAR(2) = 82;
    SI_VAR(3) = 80;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802437A8_AAFFD8, 6);
    sleep 100;
});

Script N(script_80240A8C) = SCRIPT({
    bind N(script_ExitWalk_8024098C) to 0x80000 0;
    bind N(script_ExitDoubleDoor_802409E8) to TriggerFlag_WALL_INTERACT 6;
});

Script N(script_EnterWalk_80240AD4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 2 {
            SI_VAR(2) = 82;
            SI_VAR(3) = 80;
            await EnterDoubleDoor;
            spawn N(script_80240A8C);
        }
        == 3 {
            spawn N(script_80243470);
        }
        == 4 {
            spawn N(script_802435F8);
        } else {
            SI_VAR(0) = N(script_80240A8C);
            spawn EnterWalk;
        }
    }
});

Script N(script_80240BA0) = SCRIPT({
    group 0;
    SetTexPanner(21, 1);
    SetTexPanner(22, 2);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFF38;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802408F0);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 300;
        SI_VAR(5) = 0;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802408F0);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 25;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF80 {
            func_8024030C_AACB3C();
            MakeNpcs(0, N(npcGroupList_8024117C));
        }
        >= 96 {
            func_80240344_AACB74();
            MakeNpcs(0, N(npcGroupList_80243428));
        }
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 3) {
        spawn N(script_80240820);
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 3) {
        spawn N(script_80240BA0);
        PlaySoundAtF(0x80000059, 1, 300, 0, 400);
    }
    spawn N(script_EnterWalk_80240AD4);
    sleep 1;
});

s32 pad_000F5C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240F60) = {
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

StaticNpc N(npcGroup_80240F8C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240F60),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
    },
};

NpcGroupList N(npcGroupList_8024117C) = {
    NPC_GROUP(N(npcGroup_80240F8C), 0x00000000),
    {},
};

s32 unk_missing_80241194[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00180018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_802411CC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x30,
    .radius = 0x20,
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

NpcSettings N(npcSettings_802411F8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
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

NpcSettings N(npcSettings_80241224) = {
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

NpcSettings N(npcSettings_80241250) = {
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

s32 unk_missing_8024127C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_802412A8) = {
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

NpcSettings N(npcSettings_802412D4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x16,
    .radius = 0x19,
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

Script N(script_Interact_80241300) = SCRIPT({
    SpeakToPlayer(-1, 0xC20009, 0xC20003, 0, 0x10055);
});

Script N(script_Init_80241330) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241300));
});

Script N(script_Interact_80241354) = SCRIPT({
    SpeakToPlayer(-1, 0x960004, 0x960001, 0, 0x10060);
});

Script N(script_Init_80241384) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241354));
});

Script N(script_Interact_802413A8) = SCRIPT({
    SpeakToPlayer(-1, 0x970004, 0x970001, 0, 0x10061);
});

Script N(script_Init_802413D8) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802413A8));
});

Script N(script_Interact_802413FC) = SCRIPT({
    SpeakToPlayer(-1, 0xCE0004, 0xCE0001, 0, 0x10056);
});

Script N(script_Init_8024142C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802413FC));
});

Script N(script_Interact_80241450) = SCRIPT({
    SpeakToPlayer(-1, 0xCF0005, 0xCF0001, 0, 0x10057);
});

Script N(script_Init_80241480) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241450));
});

Script N(script_Interact_802414A4) = SCRIPT({
    SpeakToPlayer(-1, 0x9A0004, 0x9A0001, 0, 0x10062);
});

Script N(script_Init_802414D4) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802414A4));
});

Script N(script_Interact_802414F8) = SCRIPT({
    SpeakToPlayer(-1, 0x9A0004, 0x9A0001, 0, 0x10063);
});

Script N(script_Init_80241528) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802414F8));
});

Script N(script_Interact_8024154C) = SCRIPT({
    SpeakToPlayer(-1, 0xBD0005, 0xBD0001, 0, 0x10058);
});

Script N(script_Init_8024157C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024154C));
});

Script N(script_Interact_802415A0) = SCRIPT({
    SpeakToPlayer(-1, 0x940105, 0x940101, 0, 0x1005E);
});

Script N(script_Init_802415D0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802415A0));
});

Script N(script_Interact_802415F4) = SCRIPT({
    SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0x1005D);
});

Script N(script_Init_80241624) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802415F4));
});

Script N(script_Interact_80241648) = SCRIPT({
    SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0x1005F);
});

Script N(script_Init_80241678) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241648));
});

Script N(script_Interact_8024169C) = SCRIPT({
    SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x10059);
});

Script N(script_Init_802416CC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024169C));
});

Script N(script_Interact_802416F0) = SCRIPT({
    SpeakToPlayer(-1, 0x870004, 0x870001, 0, 0x1005A);
});

Script N(script_Init_80241720) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802416F0));
});

Script N(script_80241744) = SCRIPT({
    DisablePlayerInput(1);
    NpcFacePlayer(14, 0);
    sleep 5;
    SpeakToPlayer(14, 0x870304, 0x870301, 0, 0x1005C);
    sleep 10;
    SetPlayerSpeed(4.0);
    PlayerMoveTo(610, 110, 0);
    DisablePlayerInput(0);
});

Script N(script_Interact_802417E8) = SCRIPT({
    SpeakToPlayer(-1, 0x870304, 0x870301, 0, 0x1005B);
});

Script N(script_Init_80241818) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802417E8));
    bind N(script_80241744) to TriggerFlag_FLOOR_TOUCH 2;
});

s32 N(extraAnimationList_80241858)[] = {
    0x00C20000, 0x00C20003, 0x00C20009, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241868)[] = {
    0x00960000, 0x00960001, 0x00960004, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241878)[] = {
    0x00970000, 0x00970001, 0x00970004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80241888)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802411CC),
        .pos = { 70.0, 0.0, -30.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80241330),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003,
        },
        .extraAnimations = N(extraAnimationList_80241858),
        .tattle = 0x1A00BC,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802411CC),
        .pos = { 70.0, 0.0, 400.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80241384),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00960001, 0x00960002, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001, 0x00960001,
        },
        .extraAnimations = N(extraAnimationList_80241868),
        .tattle = 0x1A00C1,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802411F8),
        .pos = { 160.0, 0.0, 540.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_802413D8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00970001, 0x00970002, 0x00970003, 0x00970003, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001,
        },
        .extraAnimations = N(extraAnimationList_80241878),
        .tattle = 0x1A00C3,
    },
};

s32 N(extraAnimationList_80241E58)[] = {
    0x00CE0000, 0x00CE0001, 0x00CE0004, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241E68)[] = {
    0x00CF0000, 0x00CF0001, 0x00CF0005, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241E78)[] = {
    0x009A0000, 0x009A0001, 0x009A0004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80241E88)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80241224),
        .pos = { 150.0, 0.0, 105.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_8024142C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00CE0001, 0x00CE0002, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001, 0x00CE0001,
        },
        .extraAnimations = N(extraAnimationList_80241E58),
        .tattle = 0x1A00E6,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80241224),
        .pos = { 200.0, 0.0, 105.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80241480),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00CF0001, 0x00CF0002, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001, 0x00CF0001,
        },
        .extraAnimations = N(extraAnimationList_80241E68),
        .tattle = 0x1A00E5,
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80241224),
        .pos = { 115.0, 0.0, 540.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_802414D4),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .extraAnimations = N(extraAnimationList_80241E78),
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80241224),
        .pos = { 208.0, 0.0, 540.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_80241528),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x009A0001, 0x009A0002, 0x009A0003, 0x009A0003, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001, 0x009A0001,
        },
        .extraAnimations = N(extraAnimationList_80241E78),
    },
};

s32 N(extraAnimationList_80242648)[] = {
    0x00BD0000, 0x00BD0001, 0x00BD0005, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242658)[] = {
    0x00940000, 0x00940001, 0x00940005, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242668)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_802412D4),
        .pos = { -60.0, 0.0, -20.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_8024157C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00BD0001, 0x00BD0001, 0x00BD0004, 0x00BD0004, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001, 0x00BD0001,
        },
        .extraAnimations = N(extraAnimationList_80242648),
        .tattle = 0x1A0099,
    },
    {
        .id = 8,
        .settings = &N(npcSettings_802412D4),
        .pos = { -100.0, 0.0, -50.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_802415D0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00940101, 0x00940104, 0x00940104, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101, 0x00940101,
        },
        .extraAnimations = N(extraAnimationList_80242658),
    },
};

s32 N(extraAnimationList_80242A48)[] = {
    0x00950000, 0x00950001, 0x00950004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242A58)[] = {
    {
        .id = 9,
        .settings = &N(npcSettings_802412A8),
        .pos = { 270.0, 20.0, 175.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80241624),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .extraAnimations = N(extraAnimationList_80242A48),
    },
    {
        .id = 10,
        .settings = &N(npcSettings_802412A8),
        .pos = { 320.0, 20.0, 200.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80241678),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .extraAnimations = N(extraAnimationList_80242A48),
    },
};

s32 N(extraAnimationList_80242E38)[] = {
    0x00830000, 0x00830001, 0x00830004, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242E48)[] = {
    0x00870000, 0x00870001, 0x00870004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80242E58)[] = {
    {
        .id = 12,
        .settings = &N(npcSettings_80241250),
        .pos = { -25.0, 0.0, 200.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_802416CC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00830201, 0x00830202, 0x00830203, 0x00830203, 0x00830201, 0x00830201, 0x00830206, 0x00830206, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203,
        },
        .extraAnimations = N(extraAnimationList_80242E38),
    },
    {
        .id = 13,
        .settings = &N(npcSettings_80241250),
        .pos = { -50.0, 0.0, -200.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80241720),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001, 0x00870001,
        },
        .extraAnimations = N(extraAnimationList_80242E48),
    },
    {
        .id = 14,
        .settings = &N(npcSettings_80241250),
        .pos = { 560.0, 20.0, 100.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80241818),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301,
        },
        .extraAnimations = N(extraAnimationList_80242E48),
    },
};

NpcGroupList N(npcGroupList_80243428) = {
    NPC_GROUP(N(npcGroup_80241888), 0x00000000),
    NPC_GROUP(N(npcGroup_80241E88), 0x00000000),
    NPC_GROUP(N(npcGroup_80242668), 0x00000000),
    NPC_GROUP(N(npcGroup_80242A58), 0x00000000),
    NPC_GROUP(N(npcGroup_80242E58), 0x00000000),
    {},
};

Script N(script_80243470) = SCRIPT({
    DisablePlayerInput(1);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamSpeed(0, 90.0);
    SetCamDistance(0, 775);
    SetCamPitch(0, 20, 0xFFFFFFED);
    PanToTarget(0, 0, 1);
    func_80240380_AACBB0(2, 0, 3);
    func_80240380_AACBB0(1, -1, 3);
    func_80240678_AACEA8(200, 200, 200, 40, 40, 40);
    func_802406E0_AACF10();
    sleep 15;
    ShowMessageAtScreenPos(34, 160, 40);
    sleep 12;
    ShowMessageAtScreenPos(35, 160, 40);
    sleep 3;
    GotoMapSpecial(D_802437B0_AAFFE0, 1, 7);
    sleep 40;
});

Script N(script_802435F8) = SCRIPT({
    DisablePlayerInput(1);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamDistance(0, 675.0);
    SetCamPitch(0, 3.5, -6.0);
    SetCamPosA(0, 60.0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        PlayerMoveTo(0, 0xFFFFFF06, 150);
    }
    spawn {
        SetNpcAnimation(0, 0x82001E);
        SetNpcPos(0, 0, 0, 350);
        NpcMoveTo(0, 0, 0xFFFFFF38, 150);
        SetNpcAnimation(0, 0x82001C);
    }
    sleep 100;
    GotoMap(D_802437B8_AAFFE8, 5);
    sleep 100;
    DisablePlayerInput(0);
});

s32 pad_003794[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802437A0_AAFFD0

// rodata: D_802437A8_AAFFD8

// rodata: D_802437B0_AAFFE0

// rodata: D_802437B8_AAFFE8
