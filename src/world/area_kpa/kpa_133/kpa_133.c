#include "kpa_133.h"

s32 pad_00030C[1];
Script N(script_802404F0);
s32 pad_000558[2];
Script N(script_UpdateTexturePan_80240560);
Script N(script_ExitDoubleDoor_802405FC);
Script N(script_ExitWalk_802406A0);
Script N(script_ExitWalk_802406FC);
Script N(script_ExitWalk_80240758);
Script N(script_802407B4);
Script N(script_EnterWalk_80240834);
Script N(script_80240944);
Script N(main);
s32 pad_000E0C[1];
Script N(script_MakeEntities);
Script N(script_80240F44);
Script N(script_80241540);
s32 unk_missing_8024158C[11];
Script N(script_Init_802415B8);
StaticNpc N(npcGroup_802415E0)[1];
NpcGroupList N(npcGroupList_802417D0);
s32 pad_0017E8[2];
Script N(script_802417F0);
s32 pad_001A84[3];
Script N(script_80241A90);
s32 pad_001B0C[1];
const char D_80241B10_AA8F90[8]; // "kpa_51"
const char D_80241B18_AA8F98[9]; // "kpa_134"

// text: func_80240000_AA7480

// text: func_80240124_AA75A4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_AA7790

// text: func_802403C0_AA7840

EntryList N(entryList) = {
    { -387.0f, 0.0f, 115.0f, 90.0f },
    { 370.0f, 0.0f, 120.0f, 270.0f },
    { 370.0f, 100.0f, 120.0f, 270.0f },
    { 365.0f, 240.0f, -20.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19016E,
};

Script N(script_802404F0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(6);
    }
});

s32 pad_000558[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240560) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_AA7480();
                    return;
                }
            }
        }
    }
    func_80240124_AA75A4();
});

Script N(script_ExitDoubleDoor_802405FC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 24;
    SI_VAR(2) = 50;
    SI_VAR(3) = 48;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80241B10_AA8F90, 1);
    sleep 100;
});

Script N(script_ExitWalk_802406A0) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80241B18_AA8F98, 0);
    sleep 100;
});

Script N(script_ExitWalk_802406FC) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80241B18_AA8F98, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240758) = SCRIPT({
    group 27;
    UseExitHeading(40, 3);
    spawn ExitWalk;
    GotoMap(D_80241B18_AA8F98, 3);
    sleep 100;
});

Script N(script_802407B4) = SCRIPT({
    bind N(script_ExitDoubleDoor_802405FC) to TriggerFlag_WALL_INTERACT 24;
    bind N(script_ExitWalk_802406A0) to 0x80000 27;
    bind N(script_ExitWalk_802406FC) to 0x80000 28;
    bind N(script_ExitWalk_80240758) to 0x80000 33;
});

Script N(script_EnterWalk_80240834) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = 0;
            SI_VAR(2) = 50;
            SI_VAR(3) = 48;
            spawn EnterDoubleDoor;
            spawn N(script_802407B4);
        }
        == 1 {
            SI_VAR(0) = N(script_802407B4);
            spawn EnterWalk;
        }
        == 2 {
            SI_VAR(0) = N(script_802407B4);
            spawn EnterWalk;
        }
        == 3 {
            SI_VAR(0) = N(script_802407B4);
            spawn EnterWalk;
        }
    }
});

Vec4f N(triggerCoord_80240934) =  { 388.0f, 240.0f, -25.0f, 0.0f };

Script N(script_80240944) = SCRIPT({
    PlayEffect(66, 0, 56, 56, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    group 0;
    suspend group 1;
    EnableModel(57, 1);
    loop 10 {
        EnableModel(56, 1);
        EnableModel(58, 1);
        sleep 1;
        EnableModel(56, 0);
        EnableModel(58, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 35, 0x7FFFFE00);
    SI_SAVE_FLAG(1585) = 1;
    resume group 1;
    unbind;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802417D0));
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(1585) == 0) {
        EnableModel(57, 0);
        bind N(script_80240944) to TriggerFlag_BOMB N(triggerCoord_80240934);
    } else {
        EnableModel(56, 0);
        EnableModel(58, 0);
        ModifyColliderFlags(0, 35, 0x7FFFFE00);
    }
    spawn N(script_802417F0);
    bind N(script_80241A90) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(8);
    EnableTexPanning(61, 1);
    EnableTexPanning(63, 1);
    EnableTexPanning(65, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 100;
        SI_VAR(3) = 70;
        SI_VAR(4) = 0xFFFFFFBA;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240560);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 200;
        SI_VAR(2) = 0xFFFFFF9C;
        SI_VAR(3) = 20;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240560);
    }
    spawn N(script_802404F0);
    spawn N(script_EnterWalk_80240834);
    sleep 1;
});

s32 pad_000E0C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(1587) == 0) {
        MakeEntity(D_802E9BD4, 60, 115, 10, 0, 0x80000000);
        AssignAreaFlag(8);
        AssignScript(N(script_80241540));
    }
    if (SI_SAVE_FLAG(1587) == 1) {
        MakeEntity(D_802EAA54, 150, 115, 0, 90, 60, 0x80000000);
    } else {
        MakeEntity(D_802EAA54, 150, 150, 0xFFFFFF97, 90, 60, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
        func_80240310_AA7790(0xFFFFFFA6, 0, 0);
        spawn N(script_80240F44);
    }
    MakeItemEntity(26, 0xFFFFFEA2, 215, 0xFFFFFFCE, 0, SI_SAVE_FLAG(1586));
});

Script N(script_80240F44) = SCRIPT({
    loop {
        sleep 1;
        if (SI_MAP_VAR(1) == 1) {
            break;
        }
    }
    DisablePlayerInput(1);
    SI_SAVE_FLAG(1587) = 1;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) >= 115) {
        if (SI_VAR(0) <= 180) {
            SI_VAR(3) = SI_VAR(0);
            if (SI_VAR(0) < 150) {
                SI_VAR(3) += 0xFFFFFFD8;
                SI_VAR(4) = 90;
            } else {
                SI_VAR(3) += 40;
                SI_VAR(4) = 270;
            }
            spawn {
                sleep 2;
                InterpPlayerYaw(SI_VAR(4), 0);
                sleep 2;
                SetPlayerJumpscale(2.0);
                SetPlayerAnimation(0x1002B);
                PlayerJump1(SI_VAR(3), SI_VAR(1), SI_VAR(2), 10);
                SetPlayerAnimation(0x10002);
                sleep 5;
            }
        }
    }
    spawn {
        MakeLerp(0, 80, 15, 1);
        loop {
            UpdateLerp();
            RotateModel(69, SI_VAR(0), 1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlayEffect(6, 1, 135, 115, 0xFFFFFFBA, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(6, 1, 180, 115, 0xFFFFFFBA, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(6, 1, 135, 115, 0xFFFFFFC9, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(6, 1, 180, 115, 0xFFFFFFC9, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(6, 1, 135, 115, 0xFFFFFFD8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(6, 1, 180, 115, 0xFFFFFFD8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 20;
        EnableModel(69, 0);
        ModifyColliderFlags(0, 41, 0x7FFFFE00);
    }
    spawn {
        sleep 18;
        PlaySoundAtNpc(0, 495, 0);
    }
    spawn {
        MakeLerp(0xFFFFFFA6, 0, 15, 1);
        loop {
            UpdateLerp();
            func_80240310_AA7790(SI_VAR(0), 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        loop 23 {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            func_802403C0_AA7840(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
    }
    sleep 3;
    SetNpcPos(0, 150, 150, 0xFFFFFF97);
    SetNpcJumpscale(0, 1.0);
    NpcJump0(0, 150, 115, 0, 17);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 20;
    DisablePlayerInput(0);
});

Script N(script_80241540) = SCRIPT({
    SI_MAP_VAR(1) = 1;
});

NpcSettings N(npcSettings_80241560) = {
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

s32 unk_missing_8024158C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Init_802415B8) = SCRIPT({
    SetNpcFlagBits(-1, 16, 0);
});

StaticNpc N(npcGroup_802415E0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241560),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00206F01,
        .init = N(script_Init_802415B8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
    },
};

NpcGroupList N(npcGroupList_802417D0) = {
    NPC_GROUP(N(npcGroup_802415E0), 0x00000000),
    {},
};

s32 pad_0017E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802417F0) = SCRIPT({
    SetRenderMode(63, 22);
    SetRenderMode(65, 22);
    match SI_SAVE_VAR(297) {
        == 0 {
            SetGroupEnabled(67, 0);
            ModifyColliderFlags(0, 38, 0x7FFFFE00);
            ModifyColliderFlags(0, 39, 0x7FFFFE00);
            ModifyColliderFlags(0, 10, 0x7FFFFE00);
            ModifyColliderFlags(0, 14, 0x7FFFFE00);
            ModifyColliderFlags(0, 30, 0x7FFFFE00);
            ModifyColliderFlags(0, 44, 0x7FFFFE00);
        }
        == 1 {
            TranslateGroup(67, 0, 120, 0);
            EnableModel(63, 0);
            ModifyColliderFlags(0, 39, 0x7FFFFE00);
            ModifyColliderFlags(0, 14, 0x7FFFFE00);
            ModifyColliderFlags(0, 30, 0x7FFFFE00);
            ModifyColliderFlags(3, 10, 4);
            ModifyColliderFlags(0, 10, 0x80000);
        }
        == 2 {
            TranslateGroup(67, 0, 220, 0);
            EnableModel(65, 0);
            ModifyColliderFlags(0, 38, 0x7FFFFE00);
            ModifyColliderFlags(0, 10, 0x7FFFFE00);
            ModifyColliderFlags(0, 4, 0x7FFFFE00);
            ModifyColliderFlags(3, 14, 4);
            ModifyColliderFlags(3, 18, 4);
            ModifyColliderFlags(0, 14, 0x80000);
            ModifyColliderFlags(0, 18, 0x80000);
        }
    }
});

s32 pad_001A84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241A90) = SCRIPT({
    MakeLerp(0, 90, 45, 8);
10:
    UpdateLerp();
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    unbind;
});

s32 pad_001B0C[] = {
    0x00000000,
};

// rodata: D_80241B10_AA8F90

// rodata: D_80241B18_AA8F98
