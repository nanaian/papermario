#include "mim_04.h"

s32 pad_000068[2];
s32 pad_0001FC[1];
s32 pad_00112C[1];
Script N(script_802411B0);
s32 pad_0011EC[1];
Script N(script_ExitWalk_802411F0);
Script N(script_ExitWalk_8024124C);
Script N(script_ExitWalk_802412A8);
Script N(script_ExitWalk_80241304);
Script N(script_80241360);
Script N(main);
s32 unk_missing_80241514[7];
s32 N(unk_80241530)[1];
s32 N(unk_80241534)[1];
s32 N(unk_80241538)[1];
Script N(script_8024153C);
Script N(script_802415C0);
s32 pad_0016BC[1];
Script N(script_802416C0);
Script N(script_80241954);
Script N(script_80241A74);
Script N(script_80241B44);
Script N(script_80242170);
Script N(script_802421EC);
Script N(script_80242268);
Script N(script_802422E4);
Script N(script_80242360);
s32 pad_002538[2];
Script N(script_NpcAI_80242570);
Script N(script_802425D8);
s32 N(unk_80242614)[1];
Script N(script_80242618);
Script N(script_80242648);
Script N(script_Interact_80242678);
Script N(script_Init_802428D8);
StaticNpc N(npcGroup_80242954)[1];
StaticNpc N(npcGroup_80242B44)[1];
NpcGroupList N(npcGroupList_80242D34);
s32 pad_002D58[2];
const char D_80242D60_BA06C0[8]; // "mim_05"
const char D_80242D68_BA06C8[8]; // "mim_01"
const char D_80242D70_BA06D0[8]; // "mim_03"
s32 pad_002D78[2];
s32 pad_002DC4[3];

// text: func_80240000_B9D960

s32 pad_000068[] = {
    0x00000000, 0x00000000,
};

// text: func_80240070_B9D9D0

// text: func_802401DC_B9DB3C

s32 pad_0001FC[] = {
    0x00000000,
};

// text: func_80240200_B9DB60

// text: func_80240430_B9DD90

// text: N(UnkNpcAIFunc1)

// text: func_80240828_B9E188

// text: func_802409CC_B9E32C

// text: func_80240AAC_B9E40C

// text: N(UnkDurationCheck)

// text: func_80240DF0_B9E750

// text: func_80241014_B9E974

// text: func_802410C8_B9EA28

s32 pad_00112C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, -530.0f, 180.0f },
    { -530.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, 0.0f, 530.0f, 0.0f },
    { 530.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900AA,
};

Script N(script_802411B0) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_0011EC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802411F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242D60_BA06C0, 2);
    sleep 100;
});

Script N(script_ExitWalk_8024124C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242D68_BA06C8, 1);
    sleep 100;
});

Script N(script_ExitWalk_802412A8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80242D68_BA06C8, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241304) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80242D70_BA06D0, 1);
    sleep 100;
});

Script N(script_80241360) = SCRIPT({
    bind N(script_ExitWalk_802411F0) to 0x80000 5;
    bind N(script_ExitWalk_8024124C) to 0x80000 20;
    bind N(script_ExitWalk_802412A8) to 0x80000 15;
    bind N(script_ExitWalk_80241304) to 0x80000 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70003);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_80242360);
    MakeNpcs(1, N(npcGroupList_80242D34));
    SI_VAR(0) = N(script_80241360);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_802411B0);
    spawn N(script_802415C0);
    func_80240000_B9D960();
    SetCamSpeed(0, 3.0);
});

s32 unk_missing_80241514[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

s32 N(unk_80241530)[] = {
    0x00000000,
};

s32 N(unk_80241534)[] = {
    0x00000000,
};

s32 N(unk_80241538)[] = {
    0x00000000,
};

Script N(script_8024153C) = SCRIPT({
0:
    AwaitPlayerApproach(0, 0xFFFFFEAC, 50);
    AwaitPlayerLeave(0, 0xFFFFFEAC, 50);
    func_802401DC_B9DB3C();
    PlaySoundAt(8287, 0, 55, 96, 0xFFFFFF02);
    goto 0;
});

Script N(script_802415C0) = SCRIPT({
    0x802C94A0(1, func_80240070_B9D9D0, 0);
    0x802C90FC(38, 1, -1);
    SetModelFlags(38, 16, 1);
    sleep 20;
    spawn N(script_8024153C);
    spawn {
        SetTexPanner(38, 0);
    0:
        SetTexPanOffset(0, 0, 0, 0xFFFF8000);
        sleep 2;
        SetTexPanOffset(0, 0, 0, 0);
        sleep 3;
        goto 0;
    }
});

s32 pad_0016BC[] = {
    0x00000000,
};

Script N(script_802416C0) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(11, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(6, 0);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 0;
        }
        == 1 {
            SetZoneEnabled(11, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(6, 0);
            SetZoneEnabled(0, 1);
            SI_VAR(1) = 1;
        }
        == 2 {
            SetZoneEnabled(11, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(3, 1);
            SetZoneEnabled(4, 1);
            SetZoneEnabled(5, 1);
            SetZoneEnabled(6, 1);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 2;
        }
    }
});

Script N(script_80241954) = SCRIPT({
    ParentColliderToModel(28, 111);
    RotateGroup(113, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(28);
    ParentColliderToModel(32, 117);
    RotateGroup(119, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(32);
    ParentColliderToModel(30, 114);
    RotateGroup(116, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(30);
    ParentColliderToModel(34, 120);
    RotateGroup(122, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(34);
});

Script N(script_80241A74) = SCRIPT({
    RotateGroup(113, 0, 0, 1, 0);
    UpdateColliderTransform(28);
    RotateGroup(119, 0, 0, 1, 0);
    UpdateColliderTransform(32);
    RotateGroup(116, 0, 0, 1, 0);
    UpdateColliderTransform(30);
    RotateGroup(122, 0, 0, 1, 0);
    UpdateColliderTransform(34);
});

Script N(script_80241B44) = SCRIPT({
    spawn {
        PlaySoundAtCollider(SI_VAR(9), 468, 0);
        sleep 19;
        PlaySoundAtCollider(SI_VAR(9), 469, 0);
    }
    match SI_AREA_VAR(1) {
        == 0 {
            spawn {
                MakeLerp(10, 90, 10, 1);
            10:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 10;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_802416C0);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_80241A74);
            SI_AREA_VAR(1) = 1;
            SI_SAVE_FLAG(924) = 1;
        }
        == 1 {
            spawn {
                MakeLerp(360, 270, 10, 1);
            30:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 30;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) -= SI_VAR(7);
                SI_VAR(2) -= SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 2;
            spawn N(script_802416C0);
            MakeLerp(270, 0xFFFFFFF6, 30, 0);
        40:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 40;
            }
            SI_AREA_VAR(1) = 2;
        }
        == 2 {
            spawn {
                MakeLerp(0xFFFFFFF6, 90, 10, 1);
            50:
                UpdateLerp();
                RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
                UpdateColliderTransform(SI_VAR(9));
                sleep 1;
                if (SI_VAR(1) == 1) {
                    goto 50;
                }
            }
            sleep 15;
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += SI_VAR(7);
                SI_VAR(2) += SI_VAR(8);
                PlayerMoveTo(SI_VAR(0), SI_VAR(2), 15);
            }
            SI_VAR(1) = 1;
            spawn N(script_802416C0);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_80241A74);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_80242170) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 28;
    SI_VAR(10) = 113;
    await N(script_80241B44);
    DisablePlayerInput(0);
});

Script N(script_802421EC) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 32;
    SI_VAR(10) = 119;
    await N(script_80241B44);
    DisablePlayerInput(0);
});

Script N(script_80242268) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 30;
    SI_VAR(10) = 116;
    await N(script_80241B44);
    DisablePlayerInput(0);
});

Script N(script_802422E4) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 34;
    SI_VAR(10) = 122;
    await N(script_80241B44);
    DisablePlayerInput(0);
});

Script N(script_80242360) = SCRIPT({
    if (SI_SAVE_FLAG(924) == 0) {
        SI_SAVE_FLAG(924) = 1;
        SI_AREA_VAR(1) = 2;
        SI_VAR(1) = 2;
        SI_VAR(2) = 0xFFFFFFF6;
    } else {
        SI_SAVE_FLAG(924) = 0;
        SI_AREA_VAR(1) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 10;
    }
    await N(script_802416C0);
    spawn N(script_80241954);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_80242170) to TriggerFlag_WALL_INTERACT 28;
    bind N(script_802421EC) to TriggerFlag_WALL_INTERACT 32;
    bind N(script_802422E4) to TriggerFlag_WALL_INTERACT 34;
    bind N(script_80242268) to TriggerFlag_WALL_INTERACT 30;
});

s32 pad_002538[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242540) = {
    .moveSpeed = 1.0,
    .moveTime = 0x1E,
    .waitTime = 0xA,
    .alertRadius = 120.0,
    .unk_10 = 0.0,
    .unk_14 = 0x5,
    .chaseSpeed = 4.5,
    .unk_1C = 0x5A,
    .unk_20 = 0x5,
    .chaseRadius = 160.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242570) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240DF0_B9E750(N(aISettings_80242540), 1);
});

NpcSettings N(npcSettings_802425AC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242570),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

Script N(script_802425D8) = SCRIPT({

});

NpcSettings N(npcSettings_802425E8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x2A,
    .radius = 0x1A,
    .otherAI = &N(script_802425D8),
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

s32 N(unk_80242614)[] = {
    0x00000000,
};

Script N(script_80242618) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80242648) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_Interact_80242678) = SCRIPT({
    if (SI_SAVE_FLAG(930) == 0) {
        PlaySoundAtNpc(-1, 801, 0);
        PlaySoundAtNpc(-1, 803, 0);
        SetNpcAnimation(-1, 0x990205);
        sleep 45;
        SetNpcAnimation(-1, 0x990202);
        SetNpcCollisionSize(-1, 45, 26);
        SpeakToPlayer(-1, 0x990203, 0x990202, 0, 0xE000F);
        SI_VAR(0) = 45;
        SI_VAR(1) = 1;
        await N(script_80242618);
        AddKeyItem(45);
        SpeakToPlayer(-1, 0x990203, 0x990202, 0, 0xE0010);
        SI_SAVE_FLAG(930) = 1;
        SetTattleString(0, 0x1A00A3);
    } else {
        match SI_SAVE_VAR(0) {
            < 0xFFFFFFF1 {
                SI_VAR(0) = 0xE0011;
                SI_VAR(1) = 0xE0012;
            }
            < 39 {
                SI_VAR(0) = 0xE0013;
                SI_VAR(1) = 0xE0014;
            }
            else {
                SI_VAR(0) = 0xE0015;
                SI_VAR(1) = 0xE0016;
            }
        }
        if (SI_AREA_FLAG(4) == 0) {
            SpeakToPlayer(0, 0x990203, 0x990202, 0, SI_VAR(0));
            SI_AREA_FLAG(4) = 1;
        } else {
            SpeakToPlayer(0, 0x990203, 0x990202, 0, SI_VAR(1));
            SI_AREA_FLAG(4) = 0;
        }
    }
});

Script N(script_Init_802428D8) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242678));
    if (SI_SAVE_FLAG(930) == 0) {
        SetNpcCollisionSize(-1, 25, 25);
        SetNpcAnimation(-1, 0x990207);
        SetTattleString(0, 0x1A00A2);
    }
});

StaticNpc N(npcGroup_80242954)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802425AC),
        .pos = { 240.0, 0.0, -240.0 },
        .flags = 0x00400400,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_THUNDER_BOLT, 10 } },
        .movement = { 0x000000F0, 0x00000000, 0xFFFFFF10, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000F0, 0x00000000, 0xFFFFFF10, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0102, 0x002B0102, 0x002B0103, 0x002B0103, 0x002B0101, 0x002B0101, 0x002B0108, 0x002B0108, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103,
        },
    },
};

StaticNpc N(npcGroup_80242B44)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802425E8),
        .pos = { 0.0, 32.0, 0.0 },
        .flags = 0x00000801,
        .init = N(script_Init_802428D8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00990202, 0x0099020E, 0x0099020E, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202, 0x00990202,
        },
        .tattle = 0x1A00A3,
    },
};

NpcGroupList N(npcGroupList_80242D34) = {
    NPC_GROUP(N(npcGroup_80242954), 0x0D040001),
    NPC_GROUP(N(npcGroup_80242B44), 0x00000000),
    {},
};

s32 pad_002D58[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242D60_BA06C0

// rodata: D_80242D68_BA06C8

// rodata: D_80242D70_BA06D0

s32 pad_002D78[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242D80_BA06E0

// rodata: jtbl_80242D88_BA06E8

s32 pad_002DC4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

