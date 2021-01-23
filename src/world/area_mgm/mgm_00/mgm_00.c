#include "mgm_00.h"

s32 pad_0011DC[1];
s32 pad_0017B4[3];
Script N(script_80241850);
Script N(script_80241860);
Script N(script_80241BB4);
Script N(script_80241FA4);
Script N(script_80242080);
Script N(script_8024225C);
Script N(script_80242590);
Script N(script_802425C0);
Script N(script_80242618);
Script N(script_80242648);
Script N(script_802426A0);
Script N(script_802426D0);
Script N(script_80242728);
Script N(script_802427BC);
Script N(main);
s32 pad_0029F4[3];
Script N(script_NpcAI_80242A30);
s32 unk_missing_80242A7C[11];
s32 unk_missing_80242AD4[11];
Script N(script_80242B00);
Script N(script_80242CA0);
Script N(script_80242E40);
Script N(script_Interact_80242F18);
Script N(script_Init_80243368);
StaticNpc N(npcGroup_802433A4)[1];
Script N(script_Interact_80243594);
Script N(script_Init_802436C0);
StaticNpc N(npcGroup_802436F8)[1];
Script N(script_Interact_802438E8);
Script N(script_Init_802439CC);
StaticNpc N(npcGroup_80243A18)[1];
NpcGroupList N(npcGroupList_80243C08);
s32 pad_003C38[2];
Script N(script_80243C40);
s32 N(unk_80243C50)[28];
Script N(script_80243CC0);
Script N(script_80243D20);
Script N(script_80243D80);
s32 pad_003DC8[2];
const char D_80243DD0_E12570[8]; // "mac_03"
const char D_80243DD8_E12578[8]; // "mgm_01"
const char D_80243DE0_E12580[8]; // "mgm_02"
s32 pad_003DE8[2];
s32 pad_003FB4[3];

// text: func_80240000_E0E7A0

// text: func_80240020_E0E7C0

// text: func_80240034_E0E7D4

// text: func_802400F0_E0E890

// text: func_802401D0_E0E970

// text: func_8024023C_E0E9DC

// text: func_802402E0_E0EA80

// text: func_80240438_E0EBD8

// text: N(UnkNpcAIFunc1)

// text: func_802407A0_E0EF40

// text: func_8024095C_E0F0FC

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_80240AFC_E0F29C

// text: func_80240C2C_E0F3CC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240DB4_E0F554

// text: func_80240E74_E0F614

// text: func_80241170_E0F910

s32 pad_0011DC[] = {
    0x00000000,
};

// text: func_802411E0_E0F980

// text: func_80241540_E0FCE0

// text: func_802416C0_E0FE60

// text: func_802416F8_E0FE98

s32 pad_0017B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -152.0f, 0.0f, -218.0f, 90.0f },
    { -25.0f, 30.0f, -168.0f, 90.0f },
    { 95.0f, 30.0f, -168.0f, 90.0f },
    { 237.0f, 0.0f, -53.0f, 270.0f },
    { 20.0f, 0.0f, -80.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190006,
};

Script N(script_80241850) = SCRIPT({

});

Script N(script_80241860) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    HidePlayerShadow(1);
    SetPlayerAnimation(0x10000);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
    }
    GetEntryID(SI_VAR(0));
    func_802400F0_E0E890();
    SI_VAR(2) -= 40;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    PlaySound(355);
    0x802D286C(256);
    0x802D2520(0x10000, 5, 2, 1, 1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop 40 {
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    sleep 3;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            DisablePartnerAI(0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcFlagBits(0xFFFFFFFC, 2, 0);
            EnablePartnerAI();
            EnableNpcShadow(0xFFFFFFFC, 1);
        }
    }
    sleep 2;
    0x802D2520(0x10000, 0, 0, 0, 0, 0);
    sleep 1;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    HidePlayerShadow(0);
0:
    func_80240020_E0E7C0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241BB4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_E0E890();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(2) += 2;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    if (SI_VAR(4) == 90) {
        SI_VAR(5) += 40;
    } else {
        SI_VAR(5) -= 40;
    }
    UseSettingsFrom(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetPanTarget(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        DisablePartnerAI(0);
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
        InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
    }
    sleep 1;
    PlaySound(355);
    spawn {
        sleep 25;
        HidePlayerShadow(0);
    }
    0x802D286C(2304);
    0x802D2520(0x10002, 5, 3, 1, 1, 0);
    loop 40 {
        func_8024023C_E0E9DC(1.0);
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            EnableNpcShadow(0xFFFFFFFC, 1);
            EnablePartnerAI();
        }
    }
    sleep 5;
    0x802D2520(0x10002, 0, 0, 0, 0, 0);
    ModifyColliderFlags(1, SI_VAR(11), 0x7FFFFE00);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    spawn 0xFE363C8A;
});

Script N(script_80241FA4) = SCRIPT({
    func_80240034_E0E7D4();
    if (SI_VAR(0) == 0) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    await N(script_80242080);
});

Script N(script_80242080) = SCRIPT({
    func_80240000_E0E7A0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_E0E890();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_E0E890();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_E0E970();
    InterpPlayerYaw(SI_VAR(0), 0);
    sleep 2;
    SetPlayerFlagBits(0x200000, 0);
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        sleep 4;
        loop 40 {
            SI_VAR(1) -= 1;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    0x802D286C(2048);
    0x802D2520(0x10002, 5, 2, 1, 1, 0);
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_8024225C) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) == 26) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    group 27;
    func_80240000_E0E7A0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_E0E890();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(6) += 2;
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(8) = SI_VAR(4);
    SI_VAR(8) += 180;
    if (SI_VAR(4) >= 360) {
        SI_VAR(4) -= 360;
    }
    InterpPlayerYaw(SI_VAR(8), 1);
    sleep 1;
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(0), SI_VAR(6), SI_VAR(7));
    SetPlayerAnimation(0x10000);
    0x802D286C(2048);
    0x802D2520(0x10000, 5, 3, 1, 1, 0);
    spawn {
        sleep 8;
        HidePlayerShadow(1);
    }
    spawn {
        sleep 3;
        loop 40 {
            func_8024023C_E0E9DC(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_80242590) = SCRIPT({
    GotoMap(D_80243DD0_E12570, 2);
    sleep 100;
});

Script N(script_802425C0) = SCRIPT({
    group 27;
    SI_VAR(10) = 0;
    SI_VAR(11) = 1;
    SI_VAR(12) = N(script_80242590);
    await N(script_8024225C);
});

Script N(script_80242618) = SCRIPT({
    GotoMap(D_80243DD8_E12578, 0);
    sleep 100;
});

Script N(script_80242648) = SCRIPT({
    group 27;
    SI_VAR(10) = 1;
    SI_VAR(11) = 2;
    SI_VAR(12) = N(script_80242618);
    await N(script_80241FA4);
});

Script N(script_802426A0) = SCRIPT({
    GotoMap(D_80243DE0_E12580, 0);
    sleep 100;
});

Script N(script_802426D0) = SCRIPT({
    group 27;
    SI_VAR(10) = 2;
    SI_VAR(11) = 3;
    SI_VAR(12) = N(script_802426A0);
    await N(script_80241FA4);
});

Script N(script_80242728) = SCRIPT({
    bind N(script_802425C0) to TriggerFlag_WALL_PUSH 1;
    if (SI_SAVE_FLAG(364) == 1) {
        bind N(script_80242648) to TriggerFlag_FLOOR_TOUCH 2;
    }
    if (SI_SAVE_FLAG(366) == 1) {
        bind N(script_802426D0) to TriggerFlag_FLOOR_TOUCH 3;
    }
});

Script N(script_802427BC) = SCRIPT({
    if (SI_SAVE_FLAG(364) == 0) {
        ModifyColliderFlags(0, 11, 0x7FFFFE00);
        ModifyColliderFlags(0, 2, 0x7FFFFE00);
        EnableModel(5, 0);
    }
    if (SI_SAVE_FLAG(366) == 0) {
        ModifyColliderFlags(0, 12, 0x7FFFFE00);
        ModifyColliderFlags(0, 3, 0x7FFFFE00);
        EnableModel(7, 0);
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(10) = N(script_80242728);
            SI_VAR(11) = 1;
            spawn N(script_80241BB4);
        }
        == 1 {
            SI_VAR(10) = N(script_80242728);
            spawn N(script_80241860);
        }
        == 2 {
            SI_VAR(10) = N(script_80242728);
            spawn N(script_80241860);
        }
    }
});

Script N(main) = SCRIPT({
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_80243C40);
    MakeNpcs(0, N(npcGroupList_80243C08));
    await N(script_80241850);
    spawn N(script_80243D80);
    spawn N(script_802427BC);
    sleep 1;
});

s32 pad_0029F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242A00) = {
    .moveSpeed = 1.5,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 0.0,
    .unk_10 = 0.0,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242A30) = SCRIPT({
    func_80240E74_E0F614(N(aISettings_80242A00));
});

NpcSettings N(npcSettings_80242A50) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242A30),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0x10,
};

s32 unk_missing_80242A7C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, N(script_NpcAI_80242A30), 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630010,
};

NpcSettings N(npcSettings_80242AA8) = {
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

s32 unk_missing_80242AD4[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_80242B00) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFFE7, 0, 0xFFFFFF65);
    SetPanTarget(0, 0xFFFFFFE7, 0, 0xFFFFFF65);
    SetCamDistance(0, 400.0);
    SetCamSpeed(0, 3.2001953125);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 5;
    0x802D617C(8334, 0);
    EnableModel(5, 1);
    SI_VAR(0) = 0xFFFFFFE2;
    loop 30 {
        SI_VAR(0) += 1;
        TranslateModel(5, 0, SI_VAR(0), 0);
        sleep 1;
    }
    TranslateModel(5, 0, 0, 0);
    ModifyColliderFlags(1, 11, 0x7FFFFE00);
    ModifyColliderFlags(1, 2, 0x7FFFFE00);
    bind N(script_80242648) to TriggerFlag_FLOOR_TOUCH 2;
    sleep 1;
});

Script N(script_80242CA0) = SCRIPT({
    UseSettingsFrom(0, 95, 0, 0xFFFFFF65);
    SetPanTarget(0, 95, 0, 0xFFFFFF65);
    SetCamDistance(0, 400.0);
    SetCamSpeed(0, 3.2001953125);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 5;
    0x802D617C(8334, 0);
    EnableModel(7, 1);
    SI_VAR(0) = 0xFFFFFFE2;
    loop 30 {
        SI_VAR(0) += 1;
        TranslateModel(7, 0, SI_VAR(0), 0);
        sleep 1;
    }
    TranslateModel(7, 0, 0, 0);
    ModifyColliderFlags(1, 12, 0x7FFFFE00);
    ModifyColliderFlags(1, 3, 0x7FFFFE00);
    bind N(script_802426D0) to TriggerFlag_FLOOR_TOUCH 3;
    sleep 1;
});

Script N(script_80242E40) = SCRIPT({
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
    SetCamDistance(0, 450.0);
    SetCamSpeed(0, 3.2001953125);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
});

Script N(script_Interact_80242F18) = SCRIPT({
    func_80241170_E0F910();
    SI_VAR(6) = 0;
    SI_VAR(7) = 0;
    if (SI_SAVE_FLAG(364) == 0) {
        match SI_VAR(5) {
            == 0 {}
            == 1 {
                SI_VAR(6) = 1;
                SI_VAR(7) = 1;
            }
            == 2 {
                SI_VAR(6) = 1;
                SI_VAR(7) = 3;
            }
        }
    } else {
        if (SI_SAVE_FLAG(366) == 0) {
            if (SI_VAR(5) <= 1) {
                SI_VAR(6) = 2;
            } else {
                SI_VAR(6) = 3;
                SI_VAR(7) = 2;
            }
        } else {
            SI_VAR(6) = 4;
        }
    }
    if (SI_SAVE_FLAG(363) == 0) {
        SI_SAVE_FLAG(363) = 1;
        SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80012);
    } else {
        match SI_VAR(6) {
            == 0 {
                SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80013);
                return;
            }
            == 1 {
                SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80014);
            }
            == 2 {
                SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80015);
                return;
            }
            == 3 {
                SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80016);
            }
            == 4 {
                SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80017);
                return;
            }
        }
    }
    match SI_VAR(7) {
        == 0 {
            EndSpeech(-1, 0x830004, 0x830001, 5);
        }
        == 1 {
            ContinueSpeech(-1, 0x830004, 0x830001, 0, 0x80018);
        }
        == 2 {
            ContinueSpeech(-1, 0x830004, 0x830001, 0, 0x80019);
        }
        == 3 {
            ContinueSpeech(-1, 0x830004, 0x830001, 0, 0x8001A);
        }
    }
    match SI_VAR(7) {
        == 0 {}
        == 1 {
            SI_SAVE_FLAG(364) = 1;
            await N(script_80242B00);
            await N(script_80242E40);
        }
        == 2 {
            SI_SAVE_FLAG(366) = 1;
            await N(script_80242CA0);
            await N(script_80242E40);
        }
        == 3 {
            SI_SAVE_FLAG(364) = 1;
            SI_SAVE_FLAG(366) = 1;
            await N(script_80242B00);
            sleep 10;
            await N(script_80242CA0);
            await N(script_80242E40);
        }
    }
});

Script N(script_Init_80243368) = SCRIPT({
    SetNpcCollisionSize(-1, 32, 75);
    BindNpcInteract(-1, N(script_Interact_80242F18));
});

StaticNpc N(npcGroup_802433A4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242AA8),
        .pos = { -213.0, 12.0, -180.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_80243368),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A005E,
    },
};

Script N(script_Interact_80243594) = SCRIPT({
    func_80241170_E0F910();
    match SI_VAR(5) {
        == 0 {
            SpeakToPlayer(-1, 0x830104, 0x830101, 0, 0x80025);
        }
        == 1 {
            SpeakToPlayer(-1, 0x830104, 0x830101, 0, 0x80026);
        }
        else {
            GetSelfVar(0, SI_VAR(0));
            if (SI_VAR(0) == 0) {
                SpeakToPlayer(-1, 0x830104, 0x830101, 0, 0x80027);
                SetSelfVar(0, 1);
            } else {
                SpeakToPlayer(-1, 0x830104, 0x830101, 0, 0x80028);
                SetSelfVar(0, 0);
            }
        }
    }
});

Script N(script_Init_802436C0) = SCRIPT({
    SetSelfVar(0, 0);
    BindNpcInteract(-1, N(script_Interact_80243594));
});

StaticNpc N(npcGroup_802436F8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242A50),
        .pos = { -88.0, 0.0, -95.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_802436C0),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0xFFFFFF9C, 0x00000000, 0xFFFFFFA1, 0xFFFFFFBA, 0x00000000, 0xFFFFFFA1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00830101, 0x00830102, 0x00830103, 0x00830103, 0x00830101, 0x00830101, 0x00830106, 0x00830106, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103, 0x00830103,
        },
        .tattle = 0x1A005F,
    },
};

Script N(script_Interact_802438E8) = SCRIPT({
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        < 25 {
            SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x80029);
        }
        < 50 {
            SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x8002A);
        }
        < 75 {
            SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x8002B);
        }
        else {
            SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x8002C);
        }
    }
});

Script N(script_Init_802439CC) = SCRIPT({
    RandInt(100, SI_VAR(0));
    SetSelfVar(0, SI_VAR(0));
    BindNpcInteract(-1, N(script_Interact_802438E8));
});

StaticNpc N(npcGroup_80243A18)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80242A50),
        .pos = { 46.0, 0.0, -205.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_802439CC),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x00000019, 0x00000000, 0xFFFFFF33, 0x0000004B, 0x00000000, 0xFFFFFF33, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00830201, 0x00830202, 0x00830203, 0x00830203, 0x00830201, 0x00830201, 0x00830206, 0x00830206, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203,
        },
        .tattle = 0x1A0060,
    },
};

NpcGroupList N(npcGroupList_80243C08) = {
    NPC_GROUP(N(npcGroup_802433A4), 0x00000000),
    NPC_GROUP(N(npcGroup_802436F8), 0x00000000),
    NPC_GROUP(N(npcGroup_80243A18), 0x00000000),
    {},
};

s32 pad_003C38[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243C40) = SCRIPT({

});

s32 N(unk_80243C50)[] = {
    0xE3000A01, 0x00000000, 0xE200001C, 0x00504240, 0xFCFFFFFF, 0xFFFDF6FB, 0xE3001801, 0x000000C0,
    0xE3001A01, 0x00000030, 0xE3001700, 0x00000000, 0xE2001E01, 0x00000000, 0x00000000, 0x00000000,
    0xFA000000, 0xFF000000, 0xF64500CC, 0x000B00C4, 0xF60B8214, 0x000B00C4, 0xF6450214, 0x0044C0C4,
    0xF6450214, 0x000B0210, 0xDF000000, 0x00000000,
};

Script N(script_80243CC0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    func_802416F8_E0FE98(1);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
});

Script N(script_80243D20) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    func_802416F8_E0FE98(2);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
});

Script N(script_80243D80) = SCRIPT({
    bind N(script_80243CC0) to TriggerFlag_WALL_INTERACT 5;
    bind N(script_80243D20) to TriggerFlag_WALL_INTERACT 6;
});

s32 pad_003DC8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243DD0_E12570

// rodata: D_80243DD8_E12578

// rodata: D_80243DE0_E12580

s32 pad_003DE8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243DF0_E12590

// rodata: D_80243DF8_E12598

// rodata: jtbl_80243E00_E125A0

// rodata: D_80243F90_E12730

// rodata: D_80243F98_E12738

// rodata: jtbl_80243FA0_E12740

s32 pad_003FB4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

