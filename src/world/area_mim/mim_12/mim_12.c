#include "mim_12.h"

Script N(script_80240640);
Script N(script_802406C0);
Script N(script_80240768);
Script N(script_MakeEntities);
s32 pad_000808[2];
Script N(script_ExitWalk_80240810);
Script N(script_ExitWalk_8024086C);
Script N(script_802408C8);
Script N(script_EnterWalk_80240910);
Script N(main);
s32 pad_000AD8[2];
Script N(script_Init_80240B0C);
Script N(script_Init_80240B1C);
StaticNpc N(npcGroup_80240B2C)[2];
NpcGroupList N(npcGroupList_80240F0C);
s32 pad_000F24[3];
Script N(script_80240F30);
Script N(script_80240FC8);
Script N(script_80241060);
Script N(script_80241164);
Script N(script_80241268);
Script N(script_802412FC);
Script N(script_80241390);
Script N(script_802413D8);
Script N(script_80241478);
Script N(script_8024150C);
Script N(script_80241634);
Script N(script_8024175C);
Script N(script_80241C94);
s32 pad_001E08[2];
const char D_80241E10_BBD190[8]; // "mim_11"
const char D_80241E18_BBD198[8]; // "arn_07"

// text: func_80240000_BBB380

// text: func_80240064_BBB3E4

// text: func_802400CC_BBB44C

// text: func_8024019C_BBB51C

// text: func_8024025C_BBB5DC

// text: func_802404A8_BBB828

EntryList N(entryList) = {
    { -380.0f, 0.0f, 10.0f, 90.0f },
    { 380.0f, 0.0f, 10.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900B1,
};

Script N(script_80240640) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFD0 {
            SetMusicTrack(0, 27, 1, 8);
        }
        else {
            SetMusicTrack(0, 26, 0, 8);
        }
    }
    ClearAmbientSounds(250);
});

Script N(script_802406C0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 29, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
    PlayAmbientSounds(1);
});

Script N(script_80240768) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        await N(script_80240640);
    } else {
        await N(script_802406C0);
    }
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 100, 0, 0xFFFFFFD8, 0, 4, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(933));
});

s32 pad_000808[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240810) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241E10_BBD190, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024086C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241E18_BBD198, 2);
    sleep 100;
});

Script N(script_802408C8) = SCRIPT({
    bind N(script_ExitWalk_80240810) to 0x80000 1;
    bind N(script_ExitWalk_8024086C) to 0x80000 5;
});

Script N(script_EnterWalk_80240910) = SCRIPT({
    SI_VAR(0) = N(script_802408C8);
    spawn EnterWalk;
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    SI_VAR(0) = 240.0;
    loop 20 {
        SI_VAR(0) -= 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    sleep 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 12;
    SetSpriteShading(0x7000A);
    SetCamPerspective(0, 3, 25, 16, 1024);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80240F0C));
    await N(script_MakeEntities);
    spawn N(script_80240768);
    spawn N(script_80241C94);
    spawn N(script_EnterWalk_80240910);
    sleep 1;
});

s32 pad_000AD8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240AE0) = {
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

Script N(script_Init_80240B0C) = SCRIPT({

});

Script N(script_Init_80240B1C) = SCRIPT({

});

StaticNpc N(npcGroup_80240B2C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240AE0),
        .pos = { -68.0, 65.0, -56.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80240B0C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240AE0),
        .pos = { -125.0, 65.0, 60.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80240B1C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

NpcGroupList N(npcGroupList_80240F0C) = {
    NPC_GROUP(N(npcGroup_80240B2C), 0x00000000),
    {},
};

s32 pad_000F24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240F30) = SCRIPT({
    func_80240000_BBB380();
    spawn {
        func_802400CC_BBB44C(990, 980, 1000, -1);
    }
    spawn {
        func_8024019C_BBB51C(0, 232, 20);
    }
    spawn {
        func_8024025C_BBB5DC(160, 160, 255);
    }
});

Script N(script_80240FC8) = SCRIPT({
    func_80240000_BBB380();
    spawn {
        func_802400CC_BBB44C(980, 990, 1000, 1);
    }
    spawn {
        func_8024019C_BBB51C(232, 0, 0xFFFFFFEC);
    }
    spawn {
        func_8024025C_BBB5DC(255, 255, 255);
    }
});

Script N(script_80241060) = SCRIPT({
    PlaySoundAtCollider(15, 457, 0);
    SI_VAR(3) = 0;
    SI_VAR(3) -= SI_VAR(2);
    ModifyColliderFlags(0, 15, 0x7FFFFE00);
    MakeLerp(0, 80, 30, 0);
10:
    UpdateLerp();
    RotateModel(41, SI_VAR(0), 0, SI_VAR(2), 0);
    RotateModel(39, SI_VAR(0), 0, SI_VAR(3), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 10;
    }
});

Script N(script_80241164) = SCRIPT({
    SI_VAR(3) = 0;
    SI_VAR(3) -= SI_VAR(2);
    MakeLerp(80, 0, 30, 0);
10:
    UpdateLerp();
    RotateModel(41, SI_VAR(0), 0, SI_VAR(2), 0);
    RotateModel(39, SI_VAR(0), 0, SI_VAR(3), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 10;
    }
    PlaySoundAtCollider(15, 458, 0);
    ModifyColliderFlags(1, 15, 0x7FFFFE00);
});

Script N(script_80241268) = SCRIPT({
    spawn N(script_80240F30);
    SI_VAR(2) = -1;
    spawn N(script_80241060);
    sleep 20;
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFF47, 0, 0);
    SI_VAR(2) = -1;
    spawn N(script_80241164);
    await N(script_80240640);
});

Script N(script_802412FC) = SCRIPT({
    spawn N(script_80240FC8);
    SI_VAR(2) = 1;
    spawn N(script_80241060);
    sleep 20;
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFFEC, 0, 0);
    SI_VAR(2) = 1;
    spawn N(script_80241164);
    await N(script_802406C0);
});

Script N(script_80241390) = SCRIPT({
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D00D9, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_802413D8) = SCRIPT({
    DisablePlayerInput(1);
    0x802D2B6C();
    if (SI_AREA_FLAG(3) == 0) {
        await N(script_802412FC);
        SI_AREA_FLAG(3) = 1;
    } else {
        await N(script_80241268);
        SI_AREA_FLAG(3) = 0;
    }
    sleep 20;
    DisablePlayerInput(0);
});

Script N(script_80241478) = SCRIPT({
    spawn {
        SetNpcJumpscale(1, 0.0);
        NpcJump1(1, 0xFFFFFFBE, 13, 0xFFFFFFF1, 20);
    }
    SetNpcJumpscale(0, 0.0);
    NpcJump1(0, 0xFFFFFFA7, 14, 28, 20);
    sleep 15;
});

Script N(script_8024150C) = SCRIPT({
    spawn {
        SetNpcFlagBits(1, 256, 1);
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFBE;
        SI_VAR(2) = 0xFFFFFFBE;
        SI_VAR(3) = 80;
        SI_VAR(4) = 0;
        SI_VAR(5) = 30;
        func_802404A8_BBB828();
    }
    SetNpcFlagBits(0, 256, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0xFFFFFF79;
    SI_VAR(2) = 59;
    SI_VAR(3) = 40;
    SI_VAR(4) = 120;
    SI_VAR(5) = 30;
    func_802404A8_BBB828();
});

Script N(script_80241634) = SCRIPT({
    spawn {
        SetNpcFlagBits(1, 256, 1);
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFBE;
        SI_VAR(2) = 0xFFFFFFBE;
        SI_VAR(3) = 0;
        SI_VAR(4) = 80;
        SI_VAR(5) = 30;
        func_802404A8_BBB828();
    }
    SetNpcFlagBits(0, 256, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0xFFFFFF79;
    SI_VAR(2) = 59;
    SI_VAR(3) = 120;
    SI_VAR(4) = 40;
    SI_VAR(5) = 30;
    func_802404A8_BBB828();
});

Script N(script_8024175C) = SCRIPT({
    DisablePlayerInput(1);
    sleep 20;
    GetCurrentPartnerID(SI_VAR(6));
    BringPartnerOut(9);
    if (SI_VAR(6) != 9) {
        SetNpcAnimation(0xFFFFFFFC, 0x50002);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        loop 10 {
            SI_VAR(1) += 2;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 10;
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x50004, 0x50001, 4, 0xE006C);
    EnablePartnerAI();
    SetNpcPos(0, 0xFFFFFF99, 65, 64);
    SetNpcPos(1, 0xFFFFFFD3, 65, 0xFFFFFFBE);
    PlaySoundAtNpc(0, 193, 0);
    SI_VAR(0) = 0.0;
    loop 20 {
        SI_VAR(0) += 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    sleep 10;
    await N(script_80241478);
    spawn N(script_80240FC8);
    SI_VAR(2) = 1;
    spawn N(script_80241060);
    await N(script_8024150C);
    sleep 10;
    spawn {
        PlayerMoveTo(25, 0, 60);
    }
    sleep 3;
    GetCurrentPartnerID(SI_VAR(6));
    if (SI_VAR(6) != 9) {
        NpcMoveTo(0xFFFFFFFC, 0xFFFFFFDA, 23, 60);
    } else {
        sleep 60;
    }
    SI_VAR(2) = 1;
    spawn N(script_80241164);
    await N(script_802406C0);
    await N(script_80241634);
    sleep 10;
    PlaySoundAtNpc(0, 195, 0);
    SI_VAR(0) = 240.0;
    loop 20 {
        SI_VAR(0) -= 12.0;
        0x802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        0x802CFD30(1, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    sleep 10;
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x50004, 0x50001, 0, 0xE006D);
    EnablePartnerAI();
    sleep 5;
    DisablePlayerPhysics(1);
    SetPlayerAnimation(0x10007);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerJumpscale(1.5);
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(2), 14);
    SetPlayerAnimation(0x10009);
    DisablePlayerPhysics(0);
    sleep 10;
    SI_SAVE_VAR(0) = 0xFFFFFFDD;
    PutPartnerAway();
    DisablePlayerInput(0);
    SI_AREA_FLAG(3) = 1;
    bind N(script_802413D8) to TriggerFlag_WALL_INTERACT 15;
});

Script N(script_80241C94) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFDC {
            func_80240064_BBB3E4();
            bind N(script_80241390) to TriggerFlag_WALL_INTERACT 15;
        }
        < 0xFFFFFFDD {
            func_80240064_BBB3E4();
            loop {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(0) >= 0xFFFFFF38) {
                    break;
                }
                sleep 1;
            }
            await N(script_8024175C);
        }
        >= 0xFFFFFFDD {
            GetEntryID(SI_VAR(0));
            if (SI_VAR(0) == 0) {
                SI_AREA_FLAG(3) = 0;
                func_80240064_BBB3E4();
            } else {
                SI_AREA_FLAG(3) = 1;
                func_80240000_BBB380();
                EnableSpriteShading(0);
            }
            bind N(script_802413D8) to TriggerFlag_WALL_INTERACT 15;
        }
    }
});

s32 pad_001E08[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241E10_BBD190

// rodata: D_80241E18_BBD198
