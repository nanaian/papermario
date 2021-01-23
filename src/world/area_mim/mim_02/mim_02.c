#include "mim_02.h"

s32 pad_000068[2];
s32 pad_0011D8[2];
Script N(script_80241260);
s32 pad_00129C[1];
Script N(script_ExitWalk_802412A0);
Script N(script_ExitWalk_802412FC);
Script N(script_ExitWalk_80241358);
Script N(script_ExitWalk_802413B4);
Script N(script_80241410);
Script N(main);
s32 unk_missing_802415C4[7];
Script N(script_NpcAI_8024163C);
s32 unk_missing_802416A4[2];
s32 N(unk_802416AC)[1];
s32 N(unk_802416B0)[1];
Script N(script_802416B4);
Script N(script_802417F8);
Script N(script_Interact_80241848);
Script N(script_Idle_80241DE0);
Script N(script_Init_80242110);
StaticNpc N(npcGroup_80242184)[1];
StaticNpc N(npcGroup_80242374)[1];
StaticNpc N(npcGroup_80242564)[1];
NpcGroupList N(npcGroupList_80242754);
s32 pad_002784[3];
Script N(script_80242790);
Script N(script_80242A24);
Script N(script_80242B44);
Script N(script_80242C14);
Script N(script_80243240);
Script N(script_802432BC);
Script N(script_80243338);
Script N(script_802433B4);
Script N(script_80243430);
Script N(script_80243620);
s32 pad_00364C[1];
Script N(script_80243650);
const char D_80243820_B9B420[8]; // "mim_03"
const char D_80243828_B9B428[8]; // "mim_01"
s32 pad_003874[3];

// text: func_80240000_B97C00

s32 pad_000068[] = {
    0x00000000, 0x00000000,
};

// text: func_80240070_B97C70

// text: func_802402A0_B97EA0

// text: N(UnkNpcAIFunc1)

// text: func_80240698_B98298

// text: func_8024083C_B9843C

// text: func_8024091C_B9851C

// text: N(UnkDurationCheck)

// text: func_80240C60_B98860

// text: func_80240E84_B98A84

// text: func_80240EE0_B98AE0

// text: func_802410B0_B98CB0

// text: func_80241104_B98D04

// text: func_8024113C_B98D3C

s32 pad_0011D8[] = {
    0x00000000, 0x00000000,
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
    .tattle = 0x1900A8,
};

Script N(script_80241260) = SCRIPT({
    SetMusicTrack(0, 26, 0, 8);
    PlayAmbientSounds(0);
});

s32 pad_00129C[] = {
    0x00000000,
};

Script N(script_ExitWalk_802412A0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243820_B9B420, 2);
    sleep 100;
});

Script N(script_ExitWalk_802412FC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243828_B9B428, 3);
    sleep 100;
});

Script N(script_ExitWalk_80241358) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80243828_B9B428, 1);
    sleep 100;
});

Script N(script_ExitWalk_802413B4) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80243828_B9B428, 1);
    sleep 100;
});

Script N(script_80241410) = SCRIPT({
    bind N(script_ExitWalk_802412A0) to 0x80000 4;
    bind N(script_ExitWalk_802412FC) to 0x80000 19;
    bind N(script_ExitWalk_80241358) to 0x80000 14;
    bind N(script_ExitWalk_802413B4) to 0x80000 9;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x70001);
    SetCamPerspective(0, 3, 25, 16, 650);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_VAR(2) = SI_SAVE_VAR(171);
    GetMapID(SI_SAVE_VAR(171));
    await N(script_80243430);
    MakeNpcs(1, N(npcGroupList_80242754));
    SI_VAR(0) = N(script_80241410);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80241260);
    spawn N(script_80243650);
    func_80240000_B97C00();
    SetCamSpeed(0, 3.0);
});

s32 unk_missing_802415C4[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

NpcSettings N(npcSettings_802415E0) = {
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

NpcAISettings N(aISettings_8024160C) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x1E,
    .waitTime = 0xA,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x5A,
    .unk_20 = 0x5,
    .chaseRadius = 160.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_8024163C) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240C60_B98860(N(aISettings_8024160C), 1);
});

NpcSettings N(npcSettings_80241678) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_8024163C),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

s32 unk_missing_802416A4[] = {
    0x0000001B, 0x00000000,
};

s32 N(unk_802416AC)[] = {
    0x00000000,
};

s32 N(unk_802416B0)[] = {
    0x00000000,
};

Script N(script_802416B4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240EE0_B98AE0(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241104_B98D04(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802417F8) = {
    SI_CMD(ScriptOpcode_CALL, func_8024113C_B98D3C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802416B4), 0x10, 0, D_80243880_B7D8D0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802410B0_B98CB0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_Interact_80241848) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFCE) {
        SpeakToPlayer(0, 0xBE0002, 0xBE0001, 0, 0xE0006);
        return;
    }
    SpeakToPlayer(0, 0xBE0002, 0xBE0001, 0, 0xE0007);
    SetNpcFlagBits(0, 256, 1);
    sleep 5;
    spawn {
        SetNpcAnimation(0, 0xBE0003);
        sleep 15;
        SetNpcAnimation(0, 0xBE0004);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, 0xFFFFFE56, 58, 0xFFFFFFBA);
        SetCamPitch(0, 6.0, -6.0);
        SetCamDistance(0, 250);
        SetCamSpeed(0, 3.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    PlaySoundAtNpc(0, 812, 0);
    SetNpcJumpscale(0, 1.0);
    NpcJump0(0, 0xFFFFFE56, 58, 0xFFFFFFBA, 20);
    SetNpcAnimation(0, 0xBE0005);
    sleep 5;
    SetNpcAnimation(0, 0xBE0001);
    SpeakToPlayer(0, 0xBE0002, 0xBE0001, 0, 0xE0008);
    sleep 5;
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        SetCamSpeed(0, 3.0);
    }
    spawn {
        SetNpcAnimation(0, 0xBE0003);
        sleep 15;
        SetNpcAnimation(0, 0xBE0004);
    }
    PlaySoundAtNpc(0, 812, 0);
    NpcJump0(0, 0xFFFFFEB3, 0, 0xFFFFFFAF, 20);
    SetNpcAnimation(0, 0xBE0005);
    sleep 5;
    spawn {
        SetNpcAnimation(0, 0xBE0003);
        sleep 15;
        SetNpcAnimation(0, 0xBE0004);
    }
    PlaySoundAtNpc(0, 812, 0);
    NpcJump0(0, 0xFFFFFED4, 0, 0xFFFFFF56, 15);
    SetNpcAnimation(0, 0xBE0005);
    sleep 5;
    spawn {
        SetNpcAnimation(0, 0xBE0003);
        sleep 15;
        SetNpcAnimation(0, 0xBE0004);
    }
    PlaySoundAtNpc(0, 812, 0);
    NpcJump0(0, 0xFFFFFF1E, 0, 0xFFFFFF0B, 15);
    SetNpcAnimation(0, 0xBE0005);
    sleep 5;
    spawn {
        SetNpcAnimation(0, 0xBE0003);
        sleep 15;
        SetNpcAnimation(0, 0xBE0004);
    }
    PlaySoundAtNpc(0, 812, 0);
    NpcJump0(0, 0xFFFFFF60, 0, 0xFFFFFED8, 15);
    SetNpcAnimation(0, 0xBE0005);
    sleep 5;
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFCF;
    await N(script_80243620);
});

Script N(script_Idle_80241DE0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFCF {
            DisablePlayerInput(1);
            sleep 25;
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamPitch(0, 6.0, -6.0);
            SetCamDistance(0, 300);
            SetCamSpeed(0, 3.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SpeakToPlayer(0, 0xBE0002, 0xBE0001, 0, 0xE0003);
            sleep 10;
            spawn {
                SetNpcAnimation(0, 0xBE0003);
                sleep 5;
                SetNpcAnimation(0, 0xBE0004);
            }
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                WaitForCam(0, 1.0);
                PanToTarget(0, 0, 0);
                SetCamSpeed(0, 3.0);
            }
            PlaySoundAtNpc(0, 812, 0);
            SetNpcJumpscale(-1, 1.0);
            NpcJump0(-1, 0xFFFFFE39, 0, 0, 20);
            SetNpcAnimation(0, 0xBE0005);
            sleep 5;
            SetNpcAnimation(0, 0xBE0001);
            sleep 15;
            if (SI_SAVE_VAR(0) < 0xFFFFFFB7) {
                SpeakToPlayer(0, 0xBE0002, 0xBE0001, 0, 0xE0004);
            } else {
                SpeakToPlayer(0, 0xBE0002, 0xBE0001, 0, 0xE0005);
            }
            DisablePlayerInput(0);
        }
    }
});

Script N(script_Init_80242110) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241848));
    BindNpcIdle(-1, N(script_Idle_80241DE0));
    match SI_SAVE_VAR(0) {
        >= 0xFFFFFFCF {
            SetNpcPos(0, 0, 0xFFFFFC18, 0);
        }
    }
});

StaticNpc N(npcGroup_80242184)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802415E0),
        .pos = { -426.0, 58.0, -70.0 },
        .flags = 0x00400901,
        .init = N(script_Init_80242110),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001, 0x00BE0001,
        },
        .tattle = 0x1A00A1,
    },
};

StaticNpc N(npcGroup_80242374)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241678),
        .pos = { 300.0, 0.0, 130.0 },
        .flags = 0x00000000,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_THUNDER_BOLT, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0102, 0x002B0102, 0x002B0103, 0x002B0103, 0x002B0101, 0x002B0101, 0x002B0108, 0x002B0108, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103,
        },
    },
};

StaticNpc N(npcGroup_80242564)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241678),
        .pos = { -100.0, 0.0, -320.0 },
        .flags = 0x00000000,
        .yaw = 0,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_THUNDER_BOLT, 10 } },
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000190, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0102, 0x002B0102, 0x002B0103, 0x002B0103, 0x002B0101, 0x002B0101, 0x002B0108, 0x002B0108, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103, 0x002B0103,
        },
    },
};

NpcGroupList N(npcGroupList_80242754) = {
    NPC_GROUP(N(npcGroup_80242184), 0x00000000),
    NPC_GROUP(N(npcGroup_80242374), 0x0D000001),
    NPC_GROUP(N(npcGroup_80242564), 0x0D010001),
    {},
};

s32 pad_002784[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242790) = SCRIPT({
    match SI_VAR(1) {
        == 0 {
            SetZoneEnabled(10, 1);
            SetZoneEnabled(8, 1);
            SetZoneEnabled(9, 1);
            SetZoneEnabled(7, 1);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 0;
        }
        == 1 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 0);
            SetZoneEnabled(3, 0);
            SetZoneEnabled(4, 0);
            SetZoneEnabled(5, 0);
            SetZoneEnabled(0, 1);
            SI_VAR(1) = 1;
        }
        == 2 {
            SetZoneEnabled(10, 0);
            SetZoneEnabled(8, 0);
            SetZoneEnabled(9, 0);
            SetZoneEnabled(7, 0);
            SetZoneEnabled(2, 1);
            SetZoneEnabled(3, 1);
            SetZoneEnabled(4, 1);
            SetZoneEnabled(5, 1);
            SetZoneEnabled(0, 0);
            SI_VAR(1) = 2;
        }
    }
});

Script N(script_80242A24) = SCRIPT({
    ParentColliderToModel(27, 149);
    RotateGroup(151, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(27);
    ParentColliderToModel(31, 155);
    RotateGroup(157, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(31);
    ParentColliderToModel(29, 152);
    RotateGroup(154, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(29);
    ParentColliderToModel(33, 158);
    RotateGroup(160, SI_VAR(2), 0, 1, 0);
    UpdateColliderTransform(33);
});

Script N(script_80242B44) = SCRIPT({
    RotateGroup(151, 0, 0, 1, 0);
    UpdateColliderTransform(27);
    RotateGroup(157, 0, 0, 1, 0);
    UpdateColliderTransform(31);
    RotateGroup(154, 0, 0, 1, 0);
    UpdateColliderTransform(29);
    RotateGroup(160, 0, 0, 1, 0);
    UpdateColliderTransform(33);
});

Script N(script_80242C14) = SCRIPT({
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
            spawn N(script_80242790);
            MakeLerp(90, 360, 30, 0);
        20:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 20;
            }
            spawn N(script_80242B44);
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
            spawn N(script_80242790);
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
            spawn N(script_80242790);
            MakeLerp(90, 360, 30, 0);
        60:
            UpdateLerp();
            RotateGroup(SI_VAR(10), SI_VAR(0), 0, 1, 0);
            UpdateColliderTransform(SI_VAR(9));
            sleep 1;
            if (SI_VAR(1) == 1) {
                goto 60;
            }
            spawn N(script_80242B44);
            SI_AREA_VAR(1) = 1;
        }
    }
});

Script N(script_80243240) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 70;
    SI_VAR(9) = 27;
    SI_VAR(10) = 151;
    await N(script_80242C14);
    DisablePlayerInput(0);
});

Script N(script_802432BC) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0;
    SI_VAR(8) = 0xFFFFFFBA;
    SI_VAR(9) = 31;
    SI_VAR(10) = 157;
    await N(script_80242C14);
    DisablePlayerInput(0);
});

Script N(script_80243338) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 0xFFFFFFBA;
    SI_VAR(8) = 0;
    SI_VAR(9) = 29;
    SI_VAR(10) = 154;
    await N(script_80242C14);
    DisablePlayerInput(0);
});

Script N(script_802433B4) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(7) = 70;
    SI_VAR(8) = 0;
    SI_VAR(9) = 33;
    SI_VAR(10) = 160;
    await N(script_80242C14);
    DisablePlayerInput(0);
});

Script N(script_80243430) = SCRIPT({
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
    await N(script_80242790);
    spawn N(script_80242A24);
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    sleep 1;
    PanToTarget(0, 0, 0);
    bind N(script_80243240) to TriggerFlag_WALL_INTERACT 27;
    bind N(script_802432BC) to TriggerFlag_WALL_INTERACT 31;
    bind N(script_80243338) to TriggerFlag_WALL_INTERACT 29;
    if (SI_SAVE_VAR(0) >= 0xFFFFFFCF) {
        bind N(script_802433B4) to TriggerFlag_WALL_INTERACT 33;
    }
});

Script N(script_80243620) = SCRIPT({
    bind N(script_802433B4) to TriggerFlag_WALL_INTERACT 33;
});

s32 pad_00364C[] = {
    0x00000000,
};

Script N(script_80243650) = SCRIPT({
    group 0;
    SI_VAR(0) = 0;
    EnableModel(120, 1);
    EnableModel(119, 0);
10:
    AwaitPlayerApproach(20, 0xFFFFFEAC, 50);
    RandInt(1, SI_VAR(2));
    SI_VAR(2) += 1;
    EnableModel(120, 0);
    EnableModel(119, 1);
    PlaySoundAt(8288, 0, 10, 110, 0xFFFFFF38);
    loop SI_VAR(2) {
        EnableModel(120, 1);
        EnableModel(119, 0);
        sleep 2;
        EnableModel(120, 0);
        EnableModel(119, 1);
        RandInt(5, SI_VAR(3));
        SI_VAR(3) += 2;
        sleep SI_VAR(3);
    }
    sleep 20;
    EnableModel(120, 1);
    EnableModel(119, 0);
    sleep 60;
    goto 10;
});

// rodata: D_80243820_B9B420

// rodata: D_80243828_B9B428

// rodata: D_80243830_B9B430

// rodata: jtbl_80243838_B9B438

s32 pad_003874[] = {
    0x00000000, 0x00000000, 0x00000000,
};
