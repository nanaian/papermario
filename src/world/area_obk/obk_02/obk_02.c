#include "obk_02.h"

s32 pad_00023C[1];
s32 pad_0002AC[1];
Script N(script_80240320);
s32 pad_000388[2];
Script N(script_ExitSingleDoor_80240390);
Script N(script_ExitSingleDoor_80240434);
Script N(script_ExitWalk_802404D8);
Script N(script_80240534);
Script N(script_EnterWalk_80240598);
Script N(script_8024067C);
Script N(script_8024081C);
Script N(script_8024083C);
Script N(script_8024085C);
Script N(script_8024087C);
Script N(script_80240924);
Script N(script_80240984);
Script N(script_802409D0);
Script N(script_80240A1C);
Script N(main);
s32 pad_000C88[2];
s32 N(shortTable_80240CBC)[2];
Script N(script_Idle_80240CC4);
Script N(script_Init_80240D70);
Script N(script_Init_80240D94);
StaticNpc N(npcGroup_80240DB8)[2];
NpcGroupList N(npcGroupList_80241198);
Script N(script_802411C0);
Script N(script_802412C0);
s32 pad_00134C[1];
Script N(script_80241350);
Script N(script_80241360);
s32 pad_0014C8[2];
Script N(script_802414D0);
Script N(script_802416FC);
Script N(script_MakeEntities);
s32 pad_0017C8[2];
const char D_802417D0_BC4260[8]; // "obk_01"
const char D_802417D8_BC4268[8]; // "obk_03"
const char D_802417E0_BC4270[8]; // "obk_06"
s32 pad_0017E8[2];

// text: func_80240000_BC2A90

// text: func_8024000C_BC2A9C

// text: func_80240194_BC2C24

s32 pad_00023C[] = {
    0x00000000,
};

// text: func_80240240_BC2CD0

s32 pad_0002AC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 67.0f, 0.0f, 235.0f, 0.0f },
    { 0.0f, -210.0f, 235.0f, 0.0f },
    { 220.0f, -210.0f, 65.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900B3,
};

Script N(script_80240320) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

s32 pad_000388[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80240390) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 23;
    SI_VAR(2) = 75;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802417D0_BC4260, 1);
    sleep 100;
});

Script N(script_ExitSingleDoor_80240434) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 24;
    SI_VAR(2) = 77;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_802417D8_BC4268, 0);
    sleep 100;
});

Script N(script_ExitWalk_802404D8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802417E0_BC4270, 1);
    sleep 100;
});

Script N(script_80240534) = SCRIPT({
    bind N(script_ExitSingleDoor_80240390) to TriggerFlag_WALL_INTERACT 23;
    bind N(script_ExitSingleDoor_80240434) to TriggerFlag_WALL_INTERACT 24;
    bind N(script_ExitWalk_802404D8) to 0x80000 20;
});

Script N(script_EnterWalk_80240598) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 75;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
            await N(script_80240534);
        }
        == 1 {
            SI_VAR(2) = 77;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
            await N(script_80240534);
        }
        == 2 {
            SI_VAR(0) = N(script_80240534);
            spawn EnterWalk;
        }
    }
});

Script N(script_8024067C) = SCRIPT({
    spawn {
        SetTexPanner(41, 1);
        SetTexPanner(42, 1);
        SetTexPanner(43, 1);
        SetTexPanner(44, 1);
        SetTexPanner(45, 1);
        SetTexPanner(46, 1);
        loop {
            SetTexPanOffset(1, 0, 0, 0);
            sleep 2;
            SetTexPanOffset(1, 0, 0x8000, 0);
            sleep 2;
        }
    }
    SetTexPanner(92, 0);
    SetTexPanner(93, 0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    loop {
        SI_VAR(0) += 300;
        SI_VAR(1) += 100;
        SetTexPanOffset(0, 0, SI_VAR(0), SI_VAR(1));
        sleep 1;
    }
});

Script N(script_8024081C) = SCRIPT({
    SI_MAP_VAR(0) = 0;
});

Script N(script_8024083C) = SCRIPT({
    SI_MAP_VAR(0) = 1;
});

Script N(script_8024085C) = SCRIPT({
    SI_MAP_VAR(0) = 2;
});

Script N(script_8024087C) = SCRIPT({
    EnableGroup(12, 1);
    EnableGroup(37, 1);
    EnableGroup(62, 1);
    EnableGroup(78, 1);
    if (SI_SAVE_FLAG(974) == 0) {
        EnableModel(35, 0);
    } else {
        EnableModel(33, 0);
    }
});

Script N(script_80240924) = SCRIPT({
    EnableGroup(12, 0);
    EnableGroup(37, 0);
    EnableGroup(62, 0);
    EnableGroup(78, 0);
});

Script N(script_80240984) = SCRIPT({
    EnableGroup(32, 1);
    EnableGroup(50, 1);
    EnableGroup(76, 1);
});

Script N(script_802409D0) = SCRIPT({
    EnableGroup(32, 0);
    EnableGroup(50, 0);
    EnableGroup(76, 0);
});

Script N(script_80240A1C) = SCRIPT({
    bind N(script_8024081C) to TriggerFlag_FLOOR_TOUCH 8;
    bind N(script_8024083C) to TriggerFlag_FLOOR_TOUCH 2;
    bind N(script_8024085C) to TriggerFlag_FLOOR_TOUCH 11;
    SI_MAP_VAR(0) = -1;
    SI_MAP_VAR(1) = 0xFFFFFFFE;
    loop {
        if (SI_MAP_VAR(0) != SI_MAP_VAR(1)) {
            match SI_MAP_VAR(0) {
                == 0 {
                    await N(script_80240924);
                    await N(script_80240984);
                }
                == 1 {
                    await N(script_8024087C);
                    await N(script_80240984);
                }
                == 2 {
                    await N(script_8024087C);
                    await N(script_802409D0);
                }
            }
        }
        SI_MAP_VAR(1) = SI_MAP_VAR(0);
        sleep 1;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80241198));
    await N(script_MakeEntities);
    spawn N(script_8024067C);
    spawn N(script_802412C0);
    spawn N(script_80241350);
    spawn N(script_80241360);
    spawn N(script_80240320);
    spawn N(script_EnterWalk_80240598);
    spawn N(script_80240A1C);
    ModifyColliderFlags(0, 27, 0x7FFFFE00);
});

s32 pad_000C88[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240C90) = {
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

s32 N(shortTable_80240CBC)[] = {
    0x0032003C, 0x00C800F0,
};

Script N(script_Idle_80240CC4) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    func_80240000_BC2A90();
    loop {
        func_8024000C_BC2A9C();
        func_80240194_BC2C24();
        0x802CFD30(-1, 7, SI_VAR(0), 0, 0, 0);
        0x802D0244(-1, 17);
        sleep 1;
    }
});

Script N(script_Init_80240D70) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240CC4));
});

Script N(script_Init_80240D94) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80240CC4));
});

StaticNpc N(npcGroup_80240DB8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240C90),
        .pos = { 523.0, -139.0, 193.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80240D70),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240C90),
        .pos = { 473.0, -122.0, 247.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80240D94),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

NpcGroupList N(npcGroupList_80241198) = {
    NPC_GROUP(N(npcGroup_80240DB8), 0x00000000),
    {},
};

Vec4f N(triggerCoord_802411B0) =  { 237.0, -210.0, 53.0, 0.0 };

Script N(script_802411C0) = SCRIPT({
    PlayEffect(66, 1, 33, 33, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(35, 0);
        EnableModel(33, 1);
        sleep 1;
        EnableModel(35, 1);
        EnableModel(33, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 25, 0x7FFFFE00);
    SI_SAVE_FLAG(974) = 1;
    unbind;
});

Script N(script_802412C0) = SCRIPT({
    if (SI_SAVE_FLAG(974) == 0) {
        bind N(script_802411C0) to TriggerFlag_BOMB N(triggerCoord_802411B0);
        EnableModel(35, 0);
    } else {
        EnableModel(33, 0);
        ModifyColliderFlags(0, 25, 0x7FFFFE00);
    }
});

s32 pad_00134C[] = {
    0x00000000,
};

Script N(script_80241350) = SCRIPT({

});

Script N(script_80241360) = SCRIPT({
    spawn {
        SI_VAR(0) = 0;
    10:
        RotateModel(51, SI_VAR(0), 0, 0, 1);
        SI_VAR(0) += 0xFFFFFFFA;
        sleep 30;
        goto 10;
    }
    spawn {
        SI_VAR(0) = 0;
    20:
        RotateModel(53, SI_VAR(0), 0, 0, 1);
        SI_VAR(0) += -1;
        sleep 60;
        goto 20;
    }
    spawn {
        SI_VAR(1) = 0;
    30:
        func_80240240_BC2CD0();
        RotateModel(55, SI_VAR(0), 0, 0, 1);
        sleep 1;
        goto 30;
    }
});

s32 pad_0014C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802414D0) = SCRIPT({
    sleep 15;
    spawn {
        PlaySoundAt(8490, 0, 4, 26, 0xFFFFFFF4);
        MakeLerp(0, 0xFFFFFFB0, 10, 1);
        loop {
            UpdateLerp();
            TranslateGroup(50, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAt(8491, 0, 4, 26, 0xFFFFFFF4);
        ShakeCam(0, 0, 10, 1.5);
        sleep 40;
        PlaySoundAt(8492, 0, 4, 26, 0xFFFFFFF4);
        MakeLerp(0xFFFFFFB0, 0, 20, 0);
        loop {
            UpdateLerp();
            TranslateGroup(50, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 2;
    SetPlayerAnimation(0x8001F);
    sleep 48;
    SetPlayerAnimation(0x10002);
    sleep 20;
    SetPlayerAnimation(0x10002);
    SI_SAVE_FLAG(962) = 1;
    sleep 5;
});

Script N(script_802416FC) = SCRIPT({
    DisablePlayerInput(1);
    await N(script_802414D0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 0, 0, 0, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(963));
    AssignScript(N(script_802416FC));
    MakeEntity(0x802EAB04, 100, 0xFFFFFF2E, 0, 0, 6, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(964));
});

s32 pad_0017C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802417D0_BC4260

// rodata: D_802417D8_BC4268

// rodata: D_802417E0_BC4270

s32 pad_0017E8[] = {
    0x00000000, 0x00000000,
};

