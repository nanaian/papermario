#include "kkj_18.h"

s32 pad_000334[3];
s32 pad_000814[3];
Script N(script_80240870);
s32 pad_0008B4[3];
Script N(script_UpdateTexturePan_802408C0);
s32 pad_00095C[1];
s32 N(displayList_80240960)[32];
Script N(script_802409E0);
Script N(script_ExitSingleDoor_80240B64);
Script N(script_EnterSingleDoor_80240C3C);
Script N(main);
s32 pad_00100C[1];
Script N(script_Idle_802410C0);
Script N(script_Interact_802410E8);
Script N(script_Interact_80241118);
Script N(script_Init_80241148);
s32 N(extraAnimationList_802412F0)[13];
s32 N(extraAnimationList_80241324)[5];
s32 N(extraAnimationList_80241338)[6];
StaticNpc N(npcGroup_80241350)[6];
NpcGroupList N(npcGroupList_80241EF0);
s32 pad_001F08[2];
s32 N(unk_80241F10)[1];
s32 N(unk_80241F14)[1];
Script N(script_80241F18);
Script N(script_8024205C);
Script N(script_802420AC);
Script N(script_802421E0);
s32 N(vectorList_80242230)[15];
Script N(script_8024226C);
Script N(script_80242598);
Script N(script_802427BC);
Script N(script_80242A5C);
Script N(script_80242C08);
Script N(script_80242D50);
Script N(script_80242EB4);
Script N(script_802432A4);
Script N(script_802435FC);
Script N(script_80243A88);
Script N(script_80243B50);
Script N(script_80243E50);
Script N(script_80244C08);
s32 pad_004C74[3];
const char D_80244C80_AF7920[8]; // "mac_04"
const char D_80244C88_AF7928[8]; // "kkj_19"
const char D_80244C90_AF7930[8]; // "kkj_11"
s32 pad_004C98[2];
s32 pad_004CA8[2];

// text: func_80240000_AF2CA0

// text: func_80240124_AF2DC4

// text: func_8024030C_AF2FAC

s32 pad_000334[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240340_AF2FE0

// text: func_8024039C_AF303C

// text: func_8024056C_AF320C

// text: func_802405C0_AF3260

// text: func_802405F8_AF3298

// text: func_80240694_AF3334

// text: func_80240730_AF33D0

// text: func_80240774_AF3414

s32 pad_000814[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -187.0f, 0.0f, -35.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190013,
};

Script N(script_80240870) = SCRIPT({
    if (SI_SAVE_VAR(0) == 6) {
        SetMusicTrack(0, 116, 0, 8);
    }
});

s32 pad_0008B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_802408C0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_AF2CA0();
                    return;
                }
            }
        }
    }
    func_80240124_AF2DC4();
});

s32 pad_00095C[] = {
    0x00000000,
};

s32 N(displayList_80240960)[] = {
    0xE7000000, 0x00000000, 0xD7000002, 0xFFFFFFFF, 0xE3000A01, 0x00100000, 0xE3000C00, 0x00080000,
    0xE3000D01, 0x00000000, 0xE3000F00, 0x00000000, 0xE3001001, 0x00000000, 0xE3001201, 0x00002000,
    0xE3001402, 0x00000C00, 0xFA000000, 0x4B1F13FF, 0xFB000000, 0xFF764D00, 0xFC10E5E0, 0x230B1D52,
    0xE200001C, 0x0C184B50, 0xD9FDFFFF, 0x00000000, 0xD9FFFFFF, 0x00200404, 0xDF000000, 0x00000000,
};

Script N(script_802409E0) = SCRIPT({
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_8024030C_AF2FAC();
    PlaySound(220);
    GotoMapSpecial(D_80244C80_AF7920, 5, 12);
    sleep 100;
    loop {
        MakeLerp(0xFFFFFFF8, 8, 30, 0);
        loop {
            UpdateLerp();
            RotateGroup(44, SI_VAR(0), 0, 0, 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(8, 0xFFFFFFF8, 30, 0);
        loop {
            UpdateLerp();
            RotateGroup(44, SI_VAR(0), 0, 0, 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(script_ExitSingleDoor_80240B64) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 2;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    if (SI_AREA_VAR(1) == 0) {
        GotoMap(D_80244C90_AF7930, 6);
    } else {
        GotoMap(D_80244C88_AF7928, 0);
    }
    sleep 100;
});

Script N(script_EnterSingleDoor_80240C3C) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_AREA_FLAG(17) != 0) {
        SetPlayerPos(0xFFFFFF1D, 0, 0xFFFFFFDD);
        SetNpcPos(0xFFFFFFFC, 0xFFFFFF1D, 0, 0xFFFFFFDD);
        sleep 30;
        PlaySoundAtCollider(2, 449, 0);
        MakeLerp(0, 80, 10, 0);
        loop {
            UpdateLerp();
            RotateModel(2, SI_VAR(0), 0, -1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetPlayerPos(0xFFFFFF45, 0, 0xFFFFFFDD);
        SetNpcPos(0xFFFFFFFC, 0xFFFFFF45, 0, 0xFFFFFFDD);
    }
    SI_VAR(0) = 0;
    SI_VAR(2) = 2;
    SI_VAR(3) = 1;
    await EnterSingleDoor;
    DisablePlayerInput(0);
    bind N(script_ExitSingleDoor_80240B64) to TriggerFlag_WALL_INTERACT 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) == 6) {
        MakeNpcs(0, N(npcGroupList_80241EF0));
    }
    spawn N(script_EnterSingleDoor_80240A30);
    SetTexPanner(23, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 40;
        SI_VAR(4) = 900;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802408C0);
    }
    func_802C90FC(23, 0, -1);
    func_802C9428(0, N(displayList_80240960), 0);
    spawn N(script_80240870);
    UseDoorSounds(0);
    spawn N(script_EnterSingleDoor_80240C3C);
    sleep 1;
});

s32 pad_00100C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80241010) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x44,
    .radius = 0x3C,
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

NpcSettings N(npcSettings_8024103C) = {
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

NpcSettings N(npcSettings_80241068) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241094) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

Script N(script_Idle_802410C0) = SCRIPT({
    func_802D2508();
    spawn N(script_80244C08);
});

Script N(script_Interact_802410E8) = SCRIPT({
    SpeakToPlayer(3, 0xC10004, 0xC10001, 0, 0x1400A1);
});

Script N(script_Interact_80241118) = SCRIPT({
    SpeakToPlayer(3, 0xC10004, 0xC10001, 0, 0x1400A6);
});

Script N(script_Init_80241148) = SCRIPT({
    EnableGroup(30, 0);
    ModifyColliderFlags(0, 17, 0x7FFFFE00);
    SetNpcPos(-1, 120, 0, 0xFFFFFFEC);
    SetNpcYaw(-1, 270);
    if (SI_AREA_FLAG(17) == 0) {
        BindNpcInteract(-1, N(script_Interact_802410E8));
    } else {
        BindNpcInteract(-1, N(script_Interact_80241118));
    }
    BindNpcIdle(-1, N(script_Idle_802410C0));
    SetNpcAnimation(4, 0xC10009);
    SetNpcFlagBits(4, 2, 1);
    EnableNpcShadow(4, 0);
    SetNpcPos(4, 60, 40, 0xFFFFFFF1);
    SetNpcYaw(4, 270);
    SetNpcAnimation(5, 0xC1000A);
    SetNpcFlagBits(5, 2, 1);
    EnableNpcShadow(5, 0);
    SetNpcPos(5, 125, 40, 0xFFFFFFF1);
    SetNpcYaw(5, 270);
});

s32 N(extraAnimationList_802412F0)[] = {
    0x00C10001, 0x00C10002, 0x00C10003, 0x00C10004, 0x00C10005, 0x00C10006, 0x00C10007, 0x00C10008,
    0x00C1000B, 0x00C1000C, 0x00C10009, 0x00C1000A, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241324)[] = {
    0x00600001, 0x00600002, 0x00600004, 0x00600005, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241338)[] = {
    0x00580001, 0x00580006, 0x00580008, 0x00580012, 0x00580014, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80241350)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241068),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80241324),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241094),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241338),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80241094),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241338),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241010),
        .pos = { -250.0, 10.0, 85.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_80241148),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001,
        },
        .extraAnimations = N(extraAnimationList_802412F0),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_8024103C),
        .pos = { -250.0, 10.0, 85.0 },
        .flags = 0x00000F0D,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001,
        },
        .extraAnimations = N(extraAnimationList_802412F0),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_8024103C),
        .pos = { -250.0, 10.0, 85.0 },
        .flags = 0x00000F0D,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001, 0x00C10001,
        },
        .extraAnimations = N(extraAnimationList_802412F0),
    },
};

NpcGroupList N(npcGroupList_80241EF0) = {
    NPC_GROUP(N(npcGroup_80241350), 0x00000000),
    {},
};

s32 pad_001F08[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80241F10)[] = {
    0x00000000,
};

s32 N(unk_80241F14)[] = {
    0x00000000,
};

Script N(script_80241F18) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024039C_AF303C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802405C0_AF3260(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024205C) = {
    SI_CMD(ScriptOpcode_CALL, func_802405F8_AF3298, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241F18), 0x10, 0, D_80244CB0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024056C_AF320C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802420AC) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024039C_AF303C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802405C0_AF3260(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802421E0) = {
    SI_CMD(ScriptOpcode_CALL, func_80240694_AF3334, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802420AC), 0x10, 0, D_80244E78_A1B098, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024056C_AF320C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(vectorList_80242230)[] = {
    0xC1B80000, 0x41F00000, 0x42100000, 0x41800000, 0x42780000, 0xC1200000, 0x42800000, 0x425C0000,
    0x40A00000, 0x42E00000, 0x42380000, 0x41A00000, 0x43200000, 0x42700000, 0xC1C80000,
};

Script N(script_8024226C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 16;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    SetNpcVar(1, 0, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 26;
        SI_VAR(2) += 2;
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 5.0);
        sleep 10;
        NpcMoveTo(1, 0xFFFFFF7E, 0xFFFFFFE2, 0);
        NpcMoveTo(1, 0xFFFFFF7E, 30, 0);
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(1, 0x580001);
        NpcFacePlayer(1, 5);
        SetNpcVar(1, 0, 0);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 26;
        SI_VAR(2) -= 2;
        SetNpcAnimation(2, 0x580006);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, 0xFFFFFF7E, 0xFFFFFFE2, 0);
        NpcMoveTo(2, 0xFFFFFF7E, 30, 0);
        NpcMoveTo(2, 0xFFFFFF9C, 30, 0);
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(2, 0x580001);
        NpcFacePlayer(2, 5);
    }
    InterpPlayerYaw(270, 0);
    loop {
        sleep 1;
        GetNpcVar(1, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
});

Script N(script_80242598) = SCRIPT({
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(1, 0x580012);
        SI_VAR(0) += 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
    }
    spawn {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(2, 0x580012);
        SI_VAR(0) -= 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerAnimation(0xC0005);
    sleep 1;
    loop 4 {
        SI_VAR(1) += 2;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    SetPlayerAnimation(0xC0018);
    SI_VAR(0) += 10;
    loop 5 {
        SI_VAR(1) += 4;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_802427BC) = SCRIPT({
    InterpNpcYaw(1, 270, 3);
    sleep 10;
    spawn {
        loop {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 22;
            SI_VAR(2) -= 2;
            SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
            sleep 1;
        }
    }
    SetNpcVar(1, 0, 1);
    spawn {
        SetNpcAnimation(1, 0x580014);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, 0xFFFFFF78, 32, 0);
        NpcMoveTo(1, 0xFFFFFF78, 0xFFFFFFE4, 0);
        NpcMoveTo(1, 0xFFFFFEF6, 0xFFFFFFE4, 0);
        SetNpcVar(1, 0, 0);
    }
    spawn {
        SetNpcAnimation(2, 0x580014);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, 0xFFFFFF98, 28, 0);
        NpcMoveTo(2, 0xFFFFFF98, 0xFFFFFFE0, 0);
        NpcMoveTo(2, 0xFFFFFF16, 0xFFFFFFE0, 0);
    }
    SetCamSpeed(0, 90.0);
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
        GetNpcVar(1, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_80242A5C) = SCRIPT({
    PlaySoundAt(459, 0, 190, 78, 0xFFFFFFEC);
    MakeLerp(0, 80, 14, 4);
    loop {
        UpdateLerp();
        RotateGroup(48, SI_VAR(0), 0, -1, 0);
        RotateGroup(51, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 20;
    MakeLerp(80, 0, 14, 4);
    loop {
        UpdateLerp();
        RotateGroup(48, SI_VAR(0), 0, -1, 0);
        RotateGroup(51, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAt(460, 0, 190, 78, 0xFFFFFFEC);
});

Script N(script_80242C08) = SCRIPT({
    SetNpcFlagBits(5, 2, 0);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcJumpscale(5, 0.05078125);
    NpcJump0(5, SI_VAR(0), 0xFFFFFFF8, SI_VAR(2), 8);
    func_802CDE68(5, 15);
    SI_VAR(3) = 0;
    loop 5 {
        SI_VAR(3) += 50;
        SetNpcRotation(5, 0, 0, SI_VAR(3));
        sleep 1;
    }
    SI_VAR(2) += 20;
    SetNpcJumpscale(5, 0.2001953125);
    NpcJump0(5, SI_VAR(0), 0xFFFFFFEC, SI_VAR(2), 8);
    sleep 10;
    RemoveNpc(5);
});

Script N(script_80242D50) = SCRIPT({
    SetNpcFlagBits(4, 2, 0);
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcRotation(4, 0, 0, 0xFFFFFFE7);
    SetNpcJumpscale(4, 0.05078125);
    NpcJump0(4, SI_VAR(0), 0xFFFFFFF8, SI_VAR(2), 8);
    func_802CDE68(4, 15);
    SI_VAR(3) = 0;
    loop 5 {
        SI_VAR(3) -= 50;
        SetNpcRotation(4, 0, 0, SI_VAR(3));
        sleep 1;
    }
    SI_VAR(2) += 20;
    SetNpcJumpscale(4, 0.2001953125);
    NpcJump0(4, SI_VAR(0), 0xFFFFFFEC, SI_VAR(2), 0xFFFFFF9C);
    sleep 10;
    RemoveNpc(4);
});

Script N(script_80242EB4) = SCRIPT({
    spawn {
        ShowMessageAtScreenPos(0x1400AB, 160, 40);
    }
    spawn N(script_80242C08);
    spawn N(script_80242D50);
    SetNpcAnimation(3, 0xC10007);
    sleep 1;
    UseSettingsFrom(0, 90, 65, 10);
    SetPanTarget(0, 90, 65, 10);
    SetCamDistance(0, 170);
    SetCamPitch(0, 12, -2.5);
    SetCamPosB(0, 110.0, 45.5);
    SetCamSpeed(0, 20.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlaySoundAtNpc(3, 897, 0);
    sleep 33;
    SetCamDistance(0, 65.0);
    SetCamPitch(0, 7.5, -1.2998046875);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlaySoundAtNpc(3, 898, 0);
    sleep 33;
    SetCamDistance(0, 1.0);
    SetCamPitch(0, 3.5, 0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlaySoundAtNpc(3, 899, 0);
    sleep 18;
    SetMusicTrack(0, 114, 0, 8);
    sleep 30;
    func_802D7CF8(0, 0, 0, 320, 240, 128, 10);
    SetCamSpeed(0, 12.0);
    loop 7 {
        SetCamDistance(0, 65);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SetCamDistance(0, 1);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    func_80240774_AF3414();
    func_80240774_AF3414();
    func_80240774_AF3414();
    func_802D7CF8(0, 0, 0, 320, 240, 0, 10);
    UseSettingsFrom(0, 120, 0, 10);
    SetPanTarget(0, 120, 0, 10);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
});

Script N(script_802432A4) = SCRIPT({
    PlaySoundAtNpc(3, 900, 0);
    SetNpcAnimation(3, 0xC1000B);
    SetNpcJumpscale(3, 0.001953125);
    GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(3, SI_VAR(0), 200, SI_VAR(2), 15);
    SetNpcAnimation(3, 0xC10003);
    SetNpcFlagBits(3, 256, 1);
    SetNpcSpeed(3, 20.0);
    PlaySoundAtNpc(3, 900, 0);
    SetNpcRotation(3, 0, 0, 0xFFFFFFD3);
    SetNpcYaw(3, 90);
    MakeLerp(0, 100, 30, 0);
    loop {
        UpdateLerp();
        SI_VAR(2) = 3.30078125;
        SI_VAR(3) = -2.2998046875;
        SI_VAR(2) *=f SI_VAR(0);
        SI_VAR(3) *=f SI_VAR(0);
        SI_VAR(2) += -100.0;
        SI_VAR(3) += 150.0;
        SI_VAR(4) = 100.0;
        SetNpcPos(3, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 20;
    SetNpcRotation(3, 0, 0, 0);
    PlaySoundAtNpc(3, 900, 0);
    SetNpcFlagBits(3, 128, 1);
    SetNpcYaw(3, 270);
    SetNpcPos(3, 250, 160, 50);
    NpcMoveTo(3, 0xFFFFFF9C, 50, 0);
    SetNpcFlagBits(3, 128, 0);
    sleep 20;
    PlaySoundAtNpc(3, 900, 0);
    SetNpcYaw(3, 90);
    SetNpcPos(3, 0xFFFFFF9C, 0, 70);
    NpcMoveTo(3, 140, 70, 0);
    sleep 20;
    SetNpcVar(3, 0, 0);
});

Script N(script_802435FC) = SCRIPT({
    PlaySoundAtNpc(3, 8342, 0);
    SetNpcAnimation(3, 0xC10006);
    MakeItemEntity(SI_MAP_VAR(0), 105, 30, 20, 1, 0);
    MakeLerp(0, 100, 4, 0);
    loop {
        UpdateLerp();
        SI_VAR(2) = 0.2001953125;
        SI_VAR(3) = -0.2998046875;
        SI_VAR(4) = 0.5;
        SI_VAR(2) *=f SI_VAR(0);
        SI_VAR(3) *=f SI_VAR(0);
        SI_VAR(4) *=f SI_VAR(0);
        SI_VAR(2) += 105.0;
        SI_VAR(3) += 30.0;
        SI_VAR(4) += 20.0;
        SetItemPos(SI_VAR(10), SI_VAR(2), SI_VAR(3), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(0, 100, 4, 0);
    loop {
        UpdateLerp();
        SI_VAR(2) = 0.2001953125;
        SI_VAR(3) = 0.30078125;
        SI_VAR(4) = 0.5;
        SI_VAR(2) *=f SI_VAR(0);
        SI_VAR(3) *=f SI_VAR(0);
        SI_VAR(4) *=f SI_VAR(0);
        SI_VAR(2) += 125.0;
        SI_VAR(3) += 0.0;
        SI_VAR(4) += 70.0;
        SetItemPos(SI_VAR(10), SI_VAR(2), SI_VAR(3), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    RemoveItemEntity(SI_VAR(10));
    SetNpcAnimation(3, 0xC10001);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400A5);
    UseSettingsFrom(0, 120, 0, 10);
    SetPanTarget(0, 120, 0, 10);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    match SI_AREA_VAR(1) {
        == 5 {
            SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400AA);
        }
        == 4 {
            SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400A9);
        }
        == 2 {
            SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400A8);
        }
        1, 3 {
            SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400A7);
        }
    }
    SetNpcAnimation(3, 0xC10002);
    SetNpcJumpscale(3, 0);
    NpcJump1(3, 120, 0, 0xFFFFFFEC, 15);
    SetNpcAnimation(3, 0xC10001);
    ResetCam(0, 1.0);
});

Script N(script_80243A88) = SCRIPT({
    SetPlayerAnimation(0xC0005);
    sleep 10;
    InterpPlayerYaw(90, 5);
    SetPlayerAnimation(0xA0001);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 35;
    loop {
        func_802D7E08(0, 1, 0xFFFFFFD3, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 13, 20);
        sleep 20;
    }
});

Script N(script_80243B50) = SCRIPT({
    DisablePlayerInput(1);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 0, 0x14009A);
    sleep 10;
    SetPlayerSpeed(4.0);
    PlayerMoveTo(0xFFFFFF83, 40, 0);
    PlayerMoveTo(50, 40, 0);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x14009B);
    AdjustCam(0, 4.0, 35, 300, 17.0, -11.0);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x14009C);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14009D);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x14009E);
    SetNpcAnimation(3, 0xC10002);
    NpcMoveTo(3, 100, 0xFFFFFFEC, 10);
    SetNpcAnimation(3, 0xC10001);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x14009F);
    SetNpcAnimation(3, 0xC1000C);
    sleep 30;
    SI_VAR(0) = 106;
    ShowGotItem(SI_VAR(0), 1, 0);
    AddKeyItem(SI_VAR(0));
    SI_SAVE_FLAG(499) = 1;
    SetNpcAnimation(3, 0xC10002);
    SetNpcJumpscale(3, 0);
    NpcJump1(3, 120, 0, 0xFFFFFFEC, 10);
    SetNpcAnimation(3, 0xC10001);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400A0);
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
});

Script N(script_80243E50) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_AREA_FLAG(16) == 0) {
        SI_MAP_VAR(0) = 356;
        SI_VAR(0) = 0xD0002;
        SI_VAR(1) = 0xA0027;
    } else {
        if (SI_AREA_FLAG(15) == 0) {
            SI_MAP_VAR(0) = 357;
            SI_VAR(0) = 0xD0003;
            SI_VAR(1) = 0xA0029;
        } else {
            SI_MAP_VAR(0) = 350;
            SI_VAR(0) = 0xD0000;
            SI_VAR(1) = 0xA0017;
        }
    }
    SpeakToPlayer(0xFFFFFFFE, SI_VAR(0), SI_VAR(1), 5, 0x1400A2);
    UseSettingsFrom(0, 120, 0, 10);
    SetPanTarget(0, 120, 0, 10);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400A3);
    ResetCam(0, 90.0);
    SetPlayerSpeed(2.0);
    PlayerMoveTo(0xFFFFFF83, 40, 0);
    PlayerMoveTo(15, 40, 0);
    sleep 10;
    MakeItemEntity(SI_MAP_VAR(0), 25, 25, 0xFFFFFFEC, 1, 0);
    SetNpcVar(3, 7, SI_VAR(0));
    SI_AREA_FLAG(17) = 0;
    func_80240730_AF33D0(0);
    spawn {
        DisablePartnerAI(0);
        NpcFlyTo(0xFFFFFFFC, 0xFFFFFFE9, 30, 36, 5, 0, 0);
        InterpNpcYaw(0xFFFFFFFC, 90, 5);
    }
    PlayerMoveTo(17, 36, 5);
    InterpPlayerYaw(90, 5);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 5, 0x1400A4);
    SetNpcAnimation(3, 0xC10002);
    NpcMoveTo(3, 90, 0xFFFFFFEC, 20);
    SetNpcAnimation(3, 0xC10001);
    UseSettingsFrom(0, 90, 0, 10);
    SetPanTarget(0, 90, 0, 10);
    SetCamDistance(0, 250);
    SetCamPitch(0, 17, 0xFFFFFFF2);
    SetCamPosB(0, 110.0, 45.5);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    GetNpcVar(3, 7, SI_VAR(10));
    RemoveItemEntity(SI_VAR(10));
    SetNpcAnimation(3, 0xC10005);
    loop 6 {
        sleep 10;
        PlaySoundAtNpc(3, 8341, 0);
    }
    if (SI_AREA_VAR(1) != 6) {
        await N(script_802435FC);
        EnablePartnerAI();
        DisablePlayerPhysics(0);
        DisablePlayerInput(0);
        return;
    }
    SetEnemyFlagBits(3, 0x8000000, 1);
    await N(script_80242EB4);
    SetNpcVar(3, 0, 1);
    spawn N(script_802432A4);
    loop {
        PlayerFaceNpc(3, 0);
        NpcFaceNpc(0xFFFFFFFC, 3, 0);
        sleep 1;
        GetNpcVar(3, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    spawn N(script_80240870);
    SetNpcAnimation(3, 0xC10001);
    InterpNpcYaw(3, 270, 5);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 0, 0x1400AC);
    SetNpcAnimation(3, 0xC10002);
    SetNpcSpeed(3, 2.0);
    NpcMoveTo(3, 80, 70, 0);
    SetNpcAnimation(3, 0xC10001);
    SpeakToPlayer(3, 0xC10004, 0xC10001, 0, 0x1400AD);
    spawn {
        loop 100 {
            PlayerFaceNpc(3, 0);
            NpcFaceNpc(0xFFFFFFFC, 3, 0);
            sleep 1;
        }
    }
    SetNpcAnimation(3, 0xC10002);
    NpcMoveTo(3, 0xFFFFFF06, 70, 0);
    AdjustCam(0, 2.0, 0xFFFFFFEC, 300, 17.0, -10.0);
    InterpPlayerYaw(270, 5);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x1400AE);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400AF);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x1400B0);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400B1);
    UseSettingsFrom(0, 120, 0, 10);
    SetPanTarget(0, 150, 0, 10);
    SetCamDistance(0, 400);
    SetCamSpeed(0, 1.2001953125);
    LoadPath(60, N(vectorList_80242230), 5, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 16, 0x1400B2);
    spawn N(script_80242A5C);
    sleep 14;
    NpcFlyTo(0xFFFFFFFC, 250, 70, 0xFFFFFFE7, 30, 0, 0);
    sleep 30;
    SetNpcPos(1, 0xFFFFFF06, 0, 0xFFFFFFE2);
    SetNpcPos(2, 0xFFFFFF06, 0, 0xFFFFFFE2);
    SetNpcPos(0, 0xFFFFFF06, 0, 0xFFFFFFE2);
    SpeakToPlayer(0, 0x600004, 0x600001, 0, 0x1400B3);
    SetMusicTrack(0, 70, 0, 8);
    UseSettingsFrom(0, 0xFFFFFF4C, 0, 0xFFFFFFE2);
    SetPanTarget(0, 0xFFFFFF4C, 0, 0xFFFFFFE2);
    SetCamDistance(0, 300.0);
    SetCamPosA(0, -110.0, 45.5);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 0xFFFFFF88, 14, 4);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        sleep 60;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFE2;
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 400);
        SetCamSpeed(0, 1.0);
    }
    SetNpcAnimation(0, 0x600002);
    SetNpcSpeed(0, 2.0);
    NpcMoveTo(0, 0xFFFFFF7E, 0xFFFFFFE2, 0);
    NpcMoveTo(0, 0xFFFFFF88, 80, 0);
    NpcMoveTo(0, 0xFFFFFFBA, 80, 0);
    SetNpcAnimation(0, 0x600001);
    SI_VAR(10) = spawn N(script_80243A88);
    SpeakToPlayer(0, 0x600004, 0x600001, 0, 0x1400B4);
    EndSpeech(0, 0x600005, 0x600005, 5);
    SpeakToNpc(0, 0x600005, 0x600001, 0, 1, 0x1400B5);
    kill SI_VAR(10);
    DisablePlayerPhysics(1);
    await N(script_8024226C);
    await N(script_80242598);
    SpeakToPlayer(0xFFFFFFFE, 0xC0018, 0xC0018, 5, 0x1400B6);
    spawn {
        sleep 30;
        InterpNpcYaw(0, 270, 5);
    }
    await N(script_802427BC);
    FadeOutMusic(0, 1000);
    await N(script_802409E0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80244C08) = SCRIPT({
    SetCamLeadPlayer(0, 0);
    if (SI_SAVE_FLAG(499) == 0) {
        await N(script_80243B50);
    }
    if (SI_AREA_FLAG(17) == 1) {
        await N(script_80243E50);
    }
});

s32 pad_004C74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244C80_AF7920

// rodata: D_80244C88_AF7928

// rodata: D_80244C90_AF7930

s32 pad_004C98[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80244CA0_AF7940

s32 pad_004CA8[] = {
    0x00000000, 0x00000000,
};
