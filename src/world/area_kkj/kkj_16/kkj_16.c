#include "kkj_16.h"

s32 pad_000844[3];
s32 pad_00107C[1];
Script N(script_ExitSingleDoor_802410D0);
Script N(script_EnterSingleDoor_802411C4);
Script N(main);
s32 pad_0013DC[1];
Script N(script_NpcAI_80241438);
Script N(script_Idle_80241630);
Script N(script_Idle_802417CC);
Script N(script_Idle_80241978);
Script N(script_Init_80241B14);
Script N(script_Init_80241B88);
Script N(script_Init_80241BFC);
Script N(script_Init_80241C3C);
Script N(script_Init_80241CAC);
s32 N(extraAnimationList_80241CEC)[7];
s32 N(extraAnimationList_80241D08)[8];
StaticNpc N(npcGroup_80241D28)[5];
NpcGroupList N(npcGroupList_802426D8);
s32 N(extraAnimationList_8024271C)[11];
Script N(script_Interact_80242748);
Script N(script_Interact_802427E0);
Script N(script_Interact_802428AC);
Script N(script_NpcAI_80242978);
Script N(script_80242B7C);
Script N(script_Idle_80242C54);
Script N(script_Idle_80242C70);
Script N(script_Idle_80242D98);
Script N(script_Init_80242EC0);
Script N(script_Init_80242F28);
Script N(script_Init_80242F7C);
StaticNpc N(npcGroup_80242FD0)[3];
NpcGroupList N(npcGroupList_802435A0);
s32 pad_0035B8[2];
s32 N(vectorList_802435C0)[9];
s32 N(vectorList_802435E4)[9];
s32 N(vectorList_80243608)[9];
Script N(script_8024362C);
Script N(script_80243890);
Script N(script_80243AB4);
Script N(script_80243CD4);
s32 pad_0046F8[2];
Script N(script_80244700);
Script N(script_8024476C);
const char D_80244800_AF1C10[8]; // "sbk_02"
const char D_80244808_AF1C18[8]; // "kkj_11"
const char D_80244828_AF1C38[8]; // "kkj_14"
const char D_80244848_AF1C58[8]; // "kkj_14"

// text: func_80240000_AED410

// text: func_80240028_AED438

// text: func_80240060_AED470

// text: func_80240270_AED680

// text: func_8024031C_AED72C

// text: func_802405F4_AEDA04

// text: func_802406D8_AEDAE8

s32 pad_000844[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240850_AEDC60

// text: func_80240A60_AEDE70

// text: func_80240B0C_AEDF1C

// text: func_80240DE4_AEE1F4

// text: func_80240EC8_AEE2D8

// text: func_80240EF4_AEE304

// text: func_80240F10_AEE320

s32 pad_00107C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 435.0f, 0.0f, -25.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190011,
};

Script N(script_ExitSingleDoor_802410D0) = SCRIPT({
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_80240000_AED410();
    PlaySound(220);
    GotoMapSpecial(D_80244800_AF1C10, 5, 12);
    sleep 100;
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 2;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80244808_AF1C18, 2);
    sleep 100;
});

Script N(script_EnterSingleDoor_802411C4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 2;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
    }
    if (SI_SAVE_VAR(0) == 0xFFFFFFCA) {
        spawn N(script_80243CD4);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    match SI_SAVE_VAR(0) {
        0xFFFFFFCA, 6, 38 {
            MakeNpcs(0, N(npcGroupList_802426D8));
        }
        == 58 {
            func_80240028_AED438(2);
            MakeNpcs(0, N(npcGroupList_802435A0));
        }
    }
    await N(script_8024476C);
    if (SI_SAVE_VAR(0) < 95) {
        SetMusicTrack(0, 117, 0, 8);
    }
    UseDoorSounds(0);
    bind N(header) to TriggerFlag_WALL_INTERACT 2;
    spawn N(script_EnterSingleDoor_802411C4);
    sleep 1;
});

s32 pad_0013DC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_802413E0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024140C) = {
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

Script N(script_NpcAI_80241438) = SCRIPT({
    DisablePlayerInput(1);
    group 0;
    0x802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 0);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x580001);
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140174);
    func_802406D8_AEDAE8(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x580006);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x580001);
    }
    SpeakToPlayer(-1, 0x580008, 0x580001, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80244828_AF1C38, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
});

Script N(script_Idle_80241630) = SCRIPT({
    SetNpcAnimation(-1, 0x580004);
    spawn {
        loop {
            func_80240060_AED470(SI_VAR(0), 85, 60, 38);
            if (SI_VAR(0) == 1) {
                BindNpcAI(-1, N(script_NpcAI_80241438));
                return;
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 1.7001953125);
    loop {
        SetNpcAnimation(-1, 0x580001);
        sleep 20;
        InterpNpcYaw(-1, 90, 15);
        SetNpcAnimation(-1, 0x580004);
        NpcMoveTo(-1, 280, 50, 0);
        SetNpcAnimation(-1, 0x580001);
        sleep 20;
        InterpNpcYaw(-1, 270, 15);
        SetNpcAnimation(-1, 0x580004);
        NpcMoveTo(-1, 80, 50, 0);
    }
});

Script N(script_Idle_802417CC) = SCRIPT({
    SetNpcAnimation(-1, 0x580004);
    spawn {
        loop {
            func_80240060_AED470(SI_VAR(0), 85, 60, 38);
            if (SI_VAR(0) == 1) {
                BindNpcAI(-1, N(script_NpcAI_80241438));
                return;
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 0xFFFFFF08, 0xFFFFFFB0, 0);
        NpcMoveTo(-1, 0xFFFFFFAC, 0xFFFFFFB0, 0);
        NpcMoveTo(-1, 0xFFFFFFAC, 0xFFFFFFF1, 0);
        NpcMoveTo(-1, 0xFFFFFFA8, 0xFFFFFFF1, 0);
        NpcMoveTo(-1, 0xFFFFFFA8, 50, 0);
        NpcMoveTo(-1, 0xFFFFFF04, 50, 0);
        NpcMoveTo(-1, 0xFFFFFF04, 0xFFFFFFF1, 0);
        NpcMoveTo(-1, 0xFFFFFF08, 0xFFFFFFF1, 0);
    }
});

Script N(script_Idle_80241978) = SCRIPT({
    SetNpcAnimation(-1, 0x580004);
    spawn {
        loop {
            func_80240060_AED470(SI_VAR(0), 85, 60, 38);
            if (SI_VAR(0) == 1) {
                BindNpcAI(-1, N(script_NpcAI_80241438));
                return;
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 1.7001953125);
    loop {
        SetNpcAnimation(-1, 0x580001);
        sleep 30;
        InterpNpcYaw(-1, 270, 15);
        SetNpcAnimation(-1, 0x580004);
        NpcMoveTo(-1, 0xFFFFFDA8, 50, 0);
        SetNpcAnimation(-1, 0x580001);
        sleep 30;
        InterpNpcYaw(-1, 90, 15);
        SetNpcAnimation(-1, 0x580004);
        NpcMoveTo(-1, 0xFFFFFE5C, 50, 0);
    }
});

Script N(script_Init_80241B14) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFCA) {
        RemoveNpc(-1);
        return;
    }
    SetNpcPos(-1, 0xFFFFFD44, 0, 50);
    InterpNpcYaw(-1, 270, 1);
});

Script N(script_Init_80241B88) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFCA) {
        RemoveNpc(-1);
        return;
    }
    SetNpcPos(-1, 0xFFFFFD1C, 0, 50);
    InterpNpcYaw(-1, 90, 1);
});

Script N(script_Init_80241BFC) = SCRIPT({
    SetNpcPos(-1, 180, 0, 50);
    BindNpcIdle(-1, N(script_Idle_80241630));
});

Script N(script_Init_80241C3C) = SCRIPT({
    SetNpcFlagBits(-1, 8, 0);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcPos(-1, 0xFFFFFF06, 0, 0xFFFFFFF1);
    BindNpcIdle(-1, N(script_Idle_802417CC));
});

Script N(script_Init_80241CAC) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFE02, 0, 50);
    BindNpcIdle(-1, N(script_Idle_80241978));
});

s32 N(extraAnimationList_80241CEC)[] = {
    0x005A0000, 0x005A0002, 0x005A0004, 0x005A0008, 0x005A000A, 0x005A0013, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80241D08)[] = {
    0x00580000, 0x00580001, 0x00580004, 0x00580006, 0x00580008, 0x00580012, 0x00580014, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80241D28)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802413E0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80241B14),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
        .extraAnimations = N(extraAnimationList_80241CEC),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_8024140C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80241B88),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241D08),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024140C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80241BFC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241D08),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_8024140C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80241C3C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241D08),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_8024140C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .init = N(script_Init_80241CAC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80241D08),
    },
};

NpcGroupList N(npcGroupList_802426D8) = {
    NPC_GROUP(N(npcGroup_80241D28), 0x00000000),
    {},
};

NpcSettings N(npcSettings_802426F0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

s32 N(extraAnimationList_8024271C)[] = {
    0x005A0000, 0x005A0002, 0x005A0003, 0x005A0004, 0x005A0006, 0x005A0007, 0x005A0009, 0x005A000A,
    0x005A000B, 0x005A001A, 0xFFFFFFFF,
};

Script N(script_Interact_80242748) = SCRIPT({
    if (SI_SAVE_FLAG(485) == 0) {
        SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 16, 0x14013A);
        ShowGotItem(131, 1, 2);
        SI_SAVE_FLAG(485) = 1;
    } else {
        SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 16, 0x14013B);
    }
});

Script N(script_Interact_802427E0) = SCRIPT({
    DisablePlayerInput(1);
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 0, 0x140136);
        SetSelfVar(0, 1);
    } else {
        SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 0, 0x140137);
        SetSelfVar(0, 0);
    }
    DisablePlayerInput(0);
});

Script N(script_Interact_802428AC) = SCRIPT({
    DisablePlayerInput(1);
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 0, 0x140138);
        SetSelfVar(0, 1);
    } else {
        SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 0, 0x140139);
        SetSelfVar(0, 0);
    }
    DisablePlayerInput(0);
});

Script N(script_NpcAI_80242978) = SCRIPT({
    DisablePlayerInput(1);
    func_80240EF4_AEE304();
    group 0;
    0x802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 0);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x5A0002);
    SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 0, 0x140174);
    func_80240F10_AEE320(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x5A0007);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x5A0002);
    }
    SpeakToPlayer(-1, 0x5A000A, 0x5A0002, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80244848_AF1C58, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
});

Script N(script_80242B7C) = SCRIPT({
    loop {
        func_80240EC8_AEE2D8(SI_VAR(1));
        if (SI_VAR(1) == 0) {
            SetSelfEnemyFlagBits(0x8000000, 1);
            func_80240850_AEDC60(SI_VAR(0), 85, 60, 38);
            if (SI_VAR(0) != 0) {
                BindNpcAI(-1, N(script_NpcAI_80242978));
                return;
            }
        } else {
            SetSelfEnemyFlagBits(0x8000000, 0);
        }
        sleep 1;
    }
});

Script N(script_Idle_80242C54) = SCRIPT({
    spawn N(script_80242B7C);
});

Script N(script_Idle_80242C70) = SCRIPT({
    spawn N(script_80242B7C);
    SetNpcAnimation(-1, 0x5A0004);
    SetNpcSpeed(-1, 1.7001953125);
    loop {
        SetNpcAnimation(-1, 0x5A0002);
        sleep 20;
        InterpNpcYaw(-1, 90, 15);
        SetNpcAnimation(-1, 0x5A0004);
        NpcMoveTo(-1, 280, 50, 0);
        SetNpcAnimation(-1, 0x5A0002);
        sleep 20;
        InterpNpcYaw(-1, 270, 15);
        SetNpcAnimation(-1, 0x5A0004);
        NpcMoveTo(-1, 80, 50, 0);
    }
});

Script N(script_Idle_80242D98) = SCRIPT({
    spawn N(script_80242B7C);
    SetNpcAnimation(-1, 0x5A0004);
    SetNpcSpeed(-1, 1.7001953125);
    loop {
        SetNpcAnimation(-1, 0x5A0002);
        sleep 30;
        InterpNpcYaw(-1, 270, 15);
        SetNpcAnimation(-1, 0x5A0004);
        NpcMoveTo(-1, 0xFFFFFDA8, 50, 0);
        SetNpcAnimation(-1, 0x5A0002);
        sleep 30;
        InterpNpcYaw(-1, 90, 15);
        SetNpcAnimation(-1, 0x5A0004);
        NpcMoveTo(-1, 0xFFFFFE5C, 50, 0);
    }
});

Script N(script_Init_80242EC0) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFD44, 0, 50);
    SetNpcYaw(-1, 90);
    BindNpcIdle(-1, N(script_Idle_80242C54));
    BindNpcInteract(-1, N(script_Interact_80242748));
});

Script N(script_Init_80242F28) = SCRIPT({
    SetNpcPos(-1, 180, 0, 50);
    BindNpcIdle(-1, N(script_Idle_80242C70));
    BindNpcInteract(-1, N(script_Interact_802427E0));
});

Script N(script_Init_80242F7C) = SCRIPT({
    SetNpcPos(-1, 0xFFFFFE02, 0, 50);
    BindNpcIdle(-1, N(script_Idle_80242D98));
    BindNpcInteract(-1, N(script_Interact_802428AC));
});

StaticNpc N(npcGroup_80242FD0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802426F0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_80242EC0),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
        .extraAnimations = N(extraAnimationList_8024271C),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802426F0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_80242F28),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
        .extraAnimations = N(extraAnimationList_8024271C),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802426F0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_80242F7C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
        .extraAnimations = N(extraAnimationList_8024271C),
    },
};

NpcGroupList N(npcGroupList_802435A0) = {
    NPC_GROUP(N(npcGroup_80242FD0), 0x00000000),
    {},
};

s32 pad_0035B8[] = {
    0x00000000, 0x00000000,
};

s32 N(vectorList_802435C0)[] = {
    0xC43C0000, 0x42700000, 0xC25C0000, 0xC43CC000, 0x42F00000, 0xC2700000, 0xC4408000, 0x430C0000,
    0xC3020000,
};

s32 N(vectorList_802435E4)[] = {
    0xC4408000, 0x430C0000, 0xC3020000, 0xC43CC000, 0x43070000, 0xC2B40000, 0xC4278000, 0x42DC0000,
    0xC2A00000,
};

s32 N(vectorList_80243608)[] = {
    0xC4278000, 0x42DC0000, 0xC2A00000, 0xC41D8000, 0x42C80000, 0xC2A00000, 0xC3EB0000, 0x42B40000,
    0xC2A00000,
};

Script N(script_8024362C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 10;
    SetCamSpeed(0, 1.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcVar(0, 0, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 26;
        SI_VAR(2) -= 2;
        SetNpcAnimation(0, 0x5A0007);
        SetNpcSpeed(0, 5.0);
        NpcMoveTo(0, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(0, 0x5A0002);
        NpcFacePlayer(0, 5);
        SetNpcVar(0, 0, 0);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 26;
        SI_VAR(2) += 2;
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(1, 0x580001);
        NpcFacePlayer(1, 5);
    }
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
});

Script N(script_80243890) = SCRIPT({
    spawn {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        NpcMoveTo(0, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(0, 0x5A0013);
        SI_VAR(0) += 5;
        NpcMoveTo(0, SI_VAR(0), SI_VAR(2), 5);
    }
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(1, 0x580012);
        SI_VAR(0) -= 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
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

Script N(script_80243AB4) = SCRIPT({
    InterpNpcYaw(1, 90, 3);
    sleep 10;
    spawn {
        loop {
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 32;
            SI_VAR(2) += 2;
            SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
            sleep 1;
        }
    }
    SetNpcVar(0, 0, 1);
    spawn {
        SetNpcAnimation(0, 0x5A0008);
        SetNpcSpeed(0, 5.0);
        NpcMoveTo(0, 0xFFFFFDA2, 0xFFFFFFC7, 0);
        SetNpcPos(0, 354, 0, 0);
        SetNpcVar(0, 0, 0);
    }
    spawn {
        SetNpcAnimation(1, 0x580014);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, 0xFFFFFDC2, 0xFFFFFFCB, 0);
        SetNpcPos(1, 386, 0, 0);
    }
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_80243CD4) = SCRIPT({
    if (SI_AREA_FLAG(7) == 0) {
        DisablePlayerInput(1);
        DisablePartnerAI(1);
        SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14006C);
        SI_AREA_FLAG(7) = 1;
        EnablePartnerAI();
        DisablePlayerInput(0);
    }
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) <= 0xFFFFFCFE) {
            break;
        }
    }
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    spawn {
        SetMusicTrack(0, 117, 0, 8);
        sleep 3;
        SetMusicTrack(0, 117, 0, 7);
        sleep 3;
        SetMusicTrack(0, 117, 0, 6);
        sleep 3;
        SetMusicTrack(0, 117, 0, 5);
        sleep 3;
        SetMusicTrack(0, 117, 0, 4);
    }
    SetPlayerAnimation(0xC000D);
    PlaySoundAtPlayer(610, 0);
    ShowEmote(0, 0, 0, 30, 0, 0, 0, 0, 0);
    sleep 30;
    SetPlayerAnimation(0xA0001);
    spawn {
        NpcFlyTo(0xFFFFFFFC, 0xFFFFFCF8, 50, 0xFFFFFFBF, 10, 0, 0);
    }
    spawn {
        PlayerMoveTo(0xFFFFFCF6, 0xFFFFFFC9, 10);
        InterpPlayerYaw(185, 0);
    }
    SpeakToNpc(0, 0x5A000A, 0x5A0002, 0, 1, 0x14006E);
    SpeakToNpc(1, 0x580008, 0x580001, 0, 0, 0x14006F);
    SpeakToNpc(0, 0x5A000A, 0x5A0002, 0, 1, 0x140070);
    SpeakToNpc(1, 0x580008, 0x580001, 0, 0, 0x140071);
    SpeakToNpc(0, 0x5A000A, 0x5A0002, 0, 1, 0x140072);
    SpeakToNpc(1, 0x580008, 0x580001, 0, 0, 0x140073);
    SpeakToNpc(0, 0x5A000A, 0x5A0002, 0, 1, 0x140074);
    SpeakToNpc(1, 0x580008, 0x580001, 0, 0, 0x140075);
    SpeakToNpc(0, 0x5A000A, 0x5A0002, 0, 1, 0x140076);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamPitch(0, 15.0, -10.5);
    SetCamPosA(0, 0xFFFFFCF9, 0xFFFFFFCE);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140077);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x140078);
    ResetCam(0, 90.0);
    SpeakToNpc(0, 0x5A000A, 0x5A0002, 0, 1, 0x140079);
    SpeakToNpc(1, 0x580008, 0x580001, 0, 0, 0x14007A);
    spawn {
        SetNpcAnimation(0, 0x5A0007);
        NpcMoveTo(0, 0xFFFFFCCC, 50, 30);
        SetNpcAnimation(0, 0x5A0002);
        NpcFacePlayer(0, 0);
    }
    spawn {
        SetNpcAnimation(1, 0x580006);
        NpcMoveTo(1, 0xFFFFFCB8, 10, 30);
        SetNpcAnimation(1, 0x580001);
        NpcFacePlayer(1, 0);
    }
    spawn {
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 0x20000E);
        LoadPath(20, N(vectorList_802435C0), 3, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        NpcFacePlayer(0xFFFFFFFC, 0);
    }
    spawn {
        sleep 10;
        SetPlayerAnimation(0xC0005);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPlayerJumpscale(1.0);
        PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    }
    sleep 30;
    SpeakToPlayer(0, 0x5A000A, 0x5A0002, 0, 0x14007B);
    SpeakToPlayer(1, 0x580008, 0x580001, 0, 0x14007C);
    await N(script_8024362C);
    await N(script_80243890);
    await N(script_80243AB4);
    SpeakToPlayer(0xFFFFFFFE, 0xC0018, 0xC0018, 5, 0x14007D);
    sleep 10;
    LoadPath(40, N(vectorList_802435E4), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcAnimation(0xFFFFFFFC, 0x200010);
    loop 2 {
        InterpNpcYaw(0xFFFFFFFC, 270, 7);
        sleep 5;
        InterpNpcYaw(0xFFFFFFFC, 90, 7);
        sleep 5;
    }
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    spawn {
        LoadPath(30, N(vectorList_80243608), 3, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
    }
    sleep 15;
    FadeOutMusic(0, 1000);
    await N(script_ExitSingleDoor_802410D0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_0046F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80244700) = SCRIPT({
    loop {
        if (SI_SAVE_FLAG(484) == 1) {
            break;
        }
        sleep 1;
    }
    sleep 10;
    RemoveBadge(269);
});

Script N(script_8024476C) = SCRIPT({
    MakeItemEntity(149, 0xFFFFFCB8, 110, 10, 17, SI_SAVE_FLAG(504));
    MakeItemEntity(269, 0xFFFFFDDA, 0, 0xFFFFFF88, 17, SI_SAVE_FLAG(484));
    if (SI_SAVE_VAR(0) < 95) {
        if (SI_SAVE_FLAG(484) == 0) {
            spawn N(script_80244700);
        }
    }
});

// rodata: D_80244800_AF1C10

// rodata: D_80244808_AF1C18

// rodata: D_80244810_AF1C20

// rodata: D_80244818_AF1C28

// rodata: D_80244820_AF1C30

// rodata: D_80244828_AF1C38

// rodata: D_80244830_AF1C40

// rodata: D_80244838_AF1C48

// rodata: D_80244840_AF1C50

// rodata: D_80244848_AF1C58
