#include "isk_08.h"

s32 pad_0008E8[2];
Script N(script_ExitWalk_80240970);
Script N(script_ExitWalk_802409CC);
Script N(script_ExitWalk_80240A28);
Script N(script_ExitWalk_80240A84);
Script N(script_80240AE0);
Script N(main);
s32 pad_000CC8[2];
Script N(script_NpcAI_80240D00);
s32 N(unk_80240D70)[12];
Script N(script_80240DA0);
s32 N(unk_80240E10)[12];
Script N(script_80240E40);
Script N(script_80240EB0);
s32 unk_missing_80240FD0[33];
StaticNpc N(npcGroup_80241054)[1];
NpcGroupList N(npcGroupList_80241244);
s32 pad_00125C[1];
Script N(script_80241260);
Script N(script_80241390);
Script N(script_80241468);
Script N(script_8024154C);
s32 pad_001628[2];
const char D_80241630_986460[8]; // "isk_09"
const char D_80241638_986468[8]; // "isk_10"
const char D_80241640_986470[8]; // "isk_07"
const char D_80241648_986478[8]; // "isk_11"
s32 pad_0016AC[1];

// text: N(set_script_owner_npc_anim)

// text: func_8024007C_984EAC

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240394_9851C4

// text: func_802407D4_985604

// text: func_8024081C_98564C

// text: func_80240874_9856A4

s32 pad_0008E8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -510.0f, -390.0f, 207.0f, 150.0f },
    { -557.0f, -520.0f, 224.0f, 150.0f },
    { -401.0f, -390.0f, 447.0f, 320.0f },
    { -401.0f, -520.0f, 447.0f, 320.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19009C,
};

Script N(script_ExitWalk_80240970) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80241630_986460, 0);
    sleep 100;
});

Script N(script_ExitWalk_802409CC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80241638_986468, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240A28) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80241640_986470, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240A84) = SCRIPT({
    group 27;
    UseExitHeading(40, 3);
    spawn ExitWalk;
    GotoMap(D_80241648_986478, 0);
    sleep 100;
});

Script N(script_80240AE0) = SCRIPT({
    bind N(script_ExitWalk_80240970) to 0x80000 0;
    bind N(script_ExitWalk_802409CC) to 0x80000 4;
    bind N(script_ExitWalk_80240A28) to 0x80000 9;
    bind N(script_ExitWalk_80240A84) to 0x80000 13;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20005);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80241244));
    await N(script_80241260);
    await N(script_8024154C);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
    SI_VAR(0) = N(script_80240AE0);
    spawn EnterWalk;
});

s32 pad_000CC8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80240CD0) = {
    .moveSpeed = 1.0,
    .moveTime = 0x3C,
    .waitTime = 0x3C,
    .alertRadius = 90.0,
    .unk_10 = 40.0,
    .unk_14 = 0x1,
    .chaseSpeed = 4.5,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0,
    .unk_28 = 40.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80240D00) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80240394_9851C4(N(aISettings_80240CD0));
});

s32 N(unk_80240D70)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40E00000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80240DA0) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_80240394_9851C4(N(unk_80240D70));
});

s32 N(unk_80240E10)[] = {
    0x3F800000, 0x00000014, 0x00000005, 0x42F00000, 0x00000000, 0x00000003, 0x40C00000, 0x00000000,
    0x00000000, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_80240E40) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_80240394_9851C4(N(unk_80240E10));
});

Script N(script_80240EB0) = SCRIPT({
    func_802407D4_985604();
    SetNpcAnimation(-1, 0x33000F);
    func_8024081C_98564C();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_80240874_9856A4();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80240394_9851C4(N(aISettings_80240CD0));
});

NpcSettings N(npcSettings_80240FA4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80240D00),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xA,
    .unk_2A = 0,
};

s32 unk_missing_80240FD0[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80240EB0), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80240DA0),
    0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000, 0x00110000, 0x00000000, 0x00180018,
    0x00000000, 0x00000000, N(script_80240E40), 0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000,
    0x00190000,
};

StaticNpc N(npcGroup_80241054)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240FA4),
        .pos = { -415.0, -520.0, 355.0 },
        .flags = 0x00000C00,
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFE50, 0xFFFFFDF8, 0x00000186, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE3E, 0xFFFFFDF8, 0x00000182, 0x0000003C, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00330001, 0x00330003, 0x00330004, 0x00330004, 0x00330000, 0x00330000, 0x00330007, 0x00330007, 0x0033000C, 0x00330005, 0x0033000D, 0x00330000, 0x00330000, 0x00330000, 0x00330000, 0x00330000,
        },
    },
};

NpcGroupList N(npcGroupList_80241244) = {
    NPC_GROUP(N(npcGroup_80241054), 0x0B0A0004),
    {},
};

s32 pad_00125C[] = {
    0x00000000,
};

Script N(script_80241260) = SCRIPT({
    PlayEffect(32, 1, 0xFFFFFE9A, 0xFFFFFEBD, 358, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE35, 0xFFFFFEBD, 214, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE9A, 0xFFFFFE3B, 358, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE35, 0xFFFFFE3B, 214, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

Vec4f N(triggerCoord_80241380) =  { -569.0, -520.0, 207.0, 0.0 };

Script N(script_80241390) = SCRIPT({
    PlayEffect(66, 0, 36, 12, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(36, 1);
        sleep 1;
        EnableModel(36, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
    SI_SAVE_FLAG(878) = 1;
    unbind;
});

Script N(script_80241468) = SCRIPT({
    EnableModel(40, 0);
    EnableModel(41, 0);
    EnableModel(42, 0);
    EnableModel(43, 0);
    EnableModel(44, 0);
    EnableModel(45, 0);
    EnableModel(46, 0);
    ModifyColliderFlags(0, 30, 0x7FFFFE00);
    ModifyColliderFlags(0, 31, 0x7FFFFE00);
    ModifyColliderFlags(0, 32, 0x7FFFFE00);
});

Script N(script_8024154C) = SCRIPT({
    if (SI_SAVE_FLAG(878) == 0) {
        if (SI_SAVE_FLAG(880) == 0) {
            bind N(script_80241390) to TriggerFlag_BOMB N(triggerCoord_80241380);
            await N(script_80241468);
        } else {
            EnableModel(36, 0);
            ModifyColliderFlags(0, 6, 0x7FFFFE00);
        }
    } else {
        EnableModel(36, 0);
        ModifyColliderFlags(0, 6, 0x7FFFFE00);
        await N(script_80241468);
    }
});

s32 pad_001628[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241630_986460

// rodata: D_80241638_986468

// rodata: D_80241640_986470

// rodata: D_80241648_986478

// rodata: D_80241650_986480

// rodata: jtbl_80241658_986488

s32 pad_0016AC[] = {
    0x00000000,
};

