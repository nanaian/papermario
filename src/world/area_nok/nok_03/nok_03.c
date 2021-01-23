#include "nok_03.h"

s32 pad_000E14[3];
Script N(script_80240E80);
s32 pad_000F08[2];
Script N(script_ExitWalk_80240F10);
Script N(script_ExitWalk_80240F60);
Script N(script_80240FB0);
Script N(script_80240FF8);
Script N(script_802410AC);
Script N(main);
Script N(script_802413A0);
s32 pad_0013D4[3];
Script N(script_NpcAI_80241410);
Script N(script_Idle_802414D0);
Script N(script_Idle_802416C4);
Script N(script_Idle_8024192C);
Script N(script_Init_80241A24);
Script N(script_Init_80241A60);
Script N(script_Init_80241A9C);
Script N(script_Init_80241B70);
StaticNpc N(npcGroup_80241BA8)[1];
StaticNpc N(npcGroup_80241D98)[1];
StaticNpc N(npcGroup_80241F88)[2];
NpcGroupList N(npcGroupList_80242368);
s32 pad_002398[2];
const char D_802423A0_9EDB90[8]; // "nok_02"
const char D_802423A8_9EDB98[8]; // "nok_04"
s32 pad_0023F4[3];

// text: func_80240000_9EB7F0

// text: func_80240230_9EBA20

// text: N(UnkNpcAIFunc1)

// text: func_80240628_9EBE18

// text: func_802407CC_9EBFBC

// text: func_802408AC_9EC09C

// text: N(UnkDurationCheck)

// text: func_80240BF0_9EC3E0

s32 pad_000E14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -654.0f, 0.0f, 6.0f, 90.0f },
    { 1046.0f, 0.0f, -31.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19004A,
};

Script N(script_80240E80) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFA4) {
        SetMusicTrack(0, 18, 0, 8);
    } else {
        SetMusicTrack(0, 19, 0, 8);
    }
    PlaySoundAt(0x8000005B, 0, 887, 0, 0xFFFFFFD7);
});

s32 pad_000F08[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240F10) = SCRIPT({
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802423A0_9EDB90, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240F60) = SCRIPT({
    UseExitHeading(123, 1);
    spawn ExitWalk;
    GotoMap(D_802423A8_9EDB98, 0);
    sleep 100;
});

Script N(script_80240FB0) = SCRIPT({
    bind N(script_ExitWalk_80240F10) to 0x80000 6;
    bind N(script_ExitWalk_80240F60) to 0x80000 8;
});

Script N(script_80240FF8) = SCRIPT({
    SetTexPanner(52, 0);
10:
    loop 12 {
        SetTexPanOffset(0, 0, 0, 0);
        sleep 1;
    }
    loop 12 {
        SetTexPanOffset(0, 0, 0x4000, 0);
        sleep 1;
    }
    goto 10;
});

Script N(script_802410AC) = SCRIPT({
    spawn {
        SetTexPanner(54, 1);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
    10:
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        SetTexPanOffset(1, 1, SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 100;
        SI_VAR(1) -= 400;
        SI_VAR(1) += 1000;
        sleep 1;
        goto 10;
    }
    SetTexPanner(53, 2);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
20:
    SetTexPanOffset(2, 0, SI_VAR(0), 0);
    SetTexPanOffset(2, 1, SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 100;
    SI_VAR(1) += 800;
    SI_VAR(1) -= 400;
    sleep 1;
    goto 20;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 33;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFA4) {
        MakeNpcs(0, N(npcGroupList_80242368));
    }
    await N(script_802413A0);
    spawn N(script_80240FF8);
    spawn N(script_802410AC);
    spawn N(script_80240E80);
    ModifyColliderFlags(0, 7, 0x7FFFFE00);
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    SI_VAR(0) = N(script_80240FB0);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_802413A0) = SCRIPT({
    MakeItemEntity(308, 218, 64, 0xFFFFFF9C, 17, SI_SAVE_FLAG(578));
});

s32 pad_0013D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_802413E0) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x46,
    .unk_20 = 0xA,
    .chaseRadius = 200.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241410) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240BF0_9EC3E0(N(aISettings_802413E0), 0);
});

NpcSettings N(npcSettings_8024144C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241410),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241478) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802414A4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
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
    .unk_2A = 0x10,
};

Script N(script_Idle_802414D0) = SCRIPT({
    spawn {
    0:
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 2;
        SetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        goto 0;
    }
1:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(4, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(6) = SI_VAR(3);
    SI_VAR(6) -= SI_VAR(0);
    if (SI_VAR(6) < 100) {
        SI_VAR(3) += 100;
        PlaySoundAtNpc(4, 0xB0000017, 0);
        NpcJump0(4, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10);
        SI_SAVE_VAR(0) = 0xFFFFFFA2;
    }
    if (SI_VAR(3) > 1200) {
        SetNpcPos(4, 0, 0xFFFFFC18, 0);
        SetNpcPos(5, 0, 0xFFFFFC18, 0);
        EnableNpcShadow(4, 0);
        EnableNpcShadow(5, 0);
        return;
    }
    sleep 1;
    goto 1;
});

Script N(script_Idle_802416C4) = SCRIPT({
    sleep 5;
10:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFFE70) {
        sleep 1;
        goto 10;
    }
    PlaySoundAtNpc(-1, 0xB0000017, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) = 0;
    SetNpcJumpscale(-1, 3.0);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 6);
    SetNpcJumpscale(-1, 1.2001953125);
    SI_VAR(0) += 20;
    PlaySoundAtNpc(-1, 0xB0000017, 0);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    SI_VAR(0) -= 15;
    SI_VAR(2) += 20;
    PlaySoundAtNpc(-1, 0xB0000017, 0);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SI_VAR(0) += 20;
    SI_VAR(2) += 20;
    PlaySoundAtNpc(-1, 0xB0000017, 0);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    PlaySoundAtNpc(-1, 0xB0000017, 0);
    SetNpcJumpscale(-1, 1.80078125);
    NpcJump0(-1, 0xFFFFFEAB, 0, 23, 15);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80241410));
});

Script N(script_Idle_8024192C) = SCRIPT({
    sleep 5;
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFFF74) {
        sleep 1;
        goto 0;
    }
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) = 0;
    SetNpcJumpscale(-1, 3.0);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 6);
    SetSelfEnemyFlagBits(0x40000000, 1);
    BindNpcAI(-1, N(script_NpcAI_80241410));
});

Script N(script_Init_80241A24) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802416C4));
    SetNpcFlagBits(-1, 64, 1);
});

Script N(script_Init_80241A60) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024192C));
    SetNpcFlagBits(-1, 64, 1);
});

Script N(script_Init_80241A9C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA2) {
        SetNpcFlagBits(4, 512, 0);
        SetNpcFlagBits(5, 512, 0);
        SetNpcPos(4, 0, 0xFFFFFC18, 0);
        SetNpcPos(5, 0, 0xFFFFFC18, 0);
        EnableNpcShadow(4, 0);
        EnableNpcShadow(5, 0);
        return;
    }
    BindNpcIdle(-1, N(script_Idle_802414D0));
});

Script N(script_Init_80241B70) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x20012);
});

StaticNpc N(npcGroup_80241BA8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_8024144C),
        .pos = { -388.0, 100.0, -107.0 },
        .flags = 0x00400400,
        .init = N(script_Init_80241A24),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFE7C, 0x00000064, 0xFFFFFF95, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE7C, 0x00000000, 0xFFFFFF95, 0x0000012C },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
};

StaticNpc N(npcGroup_80241D98)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024144C),
        .pos = { -76.0, 118.0, -43.0 },
        .flags = 0x00400400,
        .init = N(script_Init_80241A60),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFFB4, 0x00000076, 0xFFFFFFD5, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFB4, 0x00000076, 0xFFFFFFD5, 0x0000012C },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
};

StaticNpc N(npcGroup_80241F88)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80241478),
        .pos = { -540.0, 0.0, 0.0 },
        .flags = 0x00400B09,
        .init = N(script_Init_80241A9C),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802414A4),
        .pos = { 0.0, 0.0, 0.0 },
        .flags = 0x00400B09,
        .init = N(script_Init_80241B70),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
};

NpcGroupList N(npcGroupList_80242368) = {
    NPC_GROUP(N(npcGroup_80241BA8), 0x05160002),
    NPC_GROUP(N(npcGroup_80241D98), 0x05160002),
    NPC_GROUP(N(npcGroup_80241F88), 0x00000000),
    {},
};

s32 pad_002398[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802423A0_9EDB90

// rodata: D_802423A8_9EDB98

// rodata: D_802423B0_9EDBA0

// rodata: jtbl_802423B8_9EDBA8

s32 pad_0023F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
