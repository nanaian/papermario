#include "kkj_14.h"

s32 pad_000048[2];
s32 pad_0004B8[2];
Script N(script_802405C0);
Script N(script_UpdateTexturePan_80240680);
s32 pad_00071C[1];
s32 N(displayList_80240720)[32];
Script N(script_ExitSingleDoor_802407A0);
Script N(script_802408E8);
Script N(script_ExitWalk_802409CC);
Script N(script_80240A6C);
Script N(script_80240AB4);
Script N(script_EnterWalk_80240B54);
Script N(main);
s32 pad_00124C[1];
Script N(script_80241250);
Script N(script_8024143C);
Script N(script_80241608);
Script N(script_802417D4);
Script N(script_802419A0);
Script N(script_80241B6C);
s32 N(unk_80241D38)[1];
Script N(script_80241D3C);
Script N(script_80241E4C);
Script N(script_80241F80);
Script N(script_80242228);
Script N(script_802423F4);
Script N(script_80242744);
s32 pad_0029C4[3];
s32 N(vectorList_802429D0)[9];
s32 N(vectorList_802429F4)[12];
s32 N(vectorList_80242A24)[15];
Script N(script_80242A60);
s32 N(extraAnimationList_802435BC)[6];
StaticNpc N(npcGroup_802435D4)[2];
NpcGroupList N(npcGroupList_802439B4);
s32 pad_0039CC[1];
s32 N(extraAnimationList_80243A28)[9];
s32 N(extraAnimationList_80243A4C)[4];
StaticNpc N(npcGroup_80243A5C)[2];
NpcGroupList N(npcGroupList_80243E3C);
s32 pad_003E54[3];
s32 N(extraAnimationList_80243EB8)[9];
s32 N(extraAnimationList_80243EDC)[5];
StaticNpc N(npcGroup_80243EF0)[2];
NpcGroupList N(npcGroupList_802442D0);
s32 pad_0042E8[2];
s32 N(extraAnimationList_80244374)[10];
s32 N(extraAnimationList_8024439C)[6];
s32 N(extraAnimationList_802443B4)[8];
StaticNpc N(npcGroup_802443D4)[4];
NpcGroupList N(npcGroupList_80244B94);
s32 pad_004BAC[1];
s32 N(vectorList_80244BB0)[15];
s32 N(vectorList_80244BEC)[15];
Script N(script_80244C28);
Script N(script_80244CD8);
Script N(script_80244D88);
Script N(script_80244E54);
s32 pad_006C8C[1];
Script N(script_80246C90);
s32 pad_006FDC[1];
s32 N(vectorList_80246FE0)[18];
Script N(script_80247028);
Script N(script_80247184);
Script N(script_80247234);
Script N(script_802472E4);
Script N(script_8024739C);
s32 N(vectorList_80247F10)[9];
s32 N(vectorList_80247F34)[9];
s32 N(vectorList_80247F58)[9];
Script N(script_80247F7C);
s32 pad_0082B4[3];
Script N(script_802482C0);
s32 pad_00842C[1];
Script N(script_80248430);
s32 pad_008764[3];
Script N(script_80248770);
s32 pad_0089A4[3];
s32 N(vectorList_802489B0)[15];
s32 N(vectorList_802489EC)[9];
Script N(script_80248A10);
Script N(script_80248C9C);
Script N(script_802490EC);
Script N(script_80249298);
Script N(script_80249440);
Script N(script_8024959C);
Script N(script_8024964C);
Script N(script_80249718);
Script N(script_802497B4);
s32 pad_00A6A4[3];
const char D_8024A6B0_AE5550[8]; // "nok_bg"
const char D_8024A6B8_AE5558[8]; // "pra_01"
const char D_8024A6C0_AE5560[8]; // "kkj_11"
const char D_8024A6C8_AE5568[8]; // "kkj_01"
const char D_8024A6D0_AE5570[8]; // "kkj_26"
const char D_8024A6D8_AE5578[8]; // "kkj_15"
const char D_8024A6E0_AE5580[8]; // "kkj_27"
const char D_8024A6E8_AE5588[8]; // "kkj_26"

// text: func_Init_ADAEA0

s32 pad_000048[] = {
    0x00000000, 0x00000000,
};

// text: func_80240050_ADAEF0

// text: func_80240174_ADB014

// text: func_8024035C_ADB1FC

// text: func_80240384_ADB224

// text: func_802403A0_ADB240

// text: func_802403CC_ADB26C

// text: func_802403F8_ADB298

// text: func_80240480_ADB320

// text: func_8024049C_ADB33C

s32 pad_0004B8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -375.0f, 0.0f, -30.0f, 90.0f },
    { 435.0f, 30.0f, -33.0f, 270.0f },
    { -122.0f, 10.0f, -82.0f, 180.0f },
    { -20.0f, 0.0f, 30.0f, 270.0f },
    { -140.0f, 0.0f, 0.0f, 270.0f },
    { 40.0f, 0.0f, 30.0f, 180.0f },
    { -20.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, 30.0f, 180.0f },
    { -130.0f, 0.0f, 0.0f, 180.0f },
    { -60.0f, 0.0f, 0.0f, 270.0f },
    { 380.0f, 30.0f, 10.0f, 270.0f },
    { 150.0f, 0.0f, -30.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19000F,
};

Script N(script_802405C0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        0xFFFFFF97, 0xFFFFFFB4, 0xFFFFFFF2 {
            SetMusicTrack(0, 115, 0, 8);
        }
        0xFFFFFFCA, 6, 38, 58 {
            SetMusicTrack(0, 116, 0, 8);
        }
    }
});

Script N(script_UpdateTexturePan_80240680) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240050_ADAEF0();
                    return;
                }
            }
        }
    }
    func_80240174_ADB014();
});

s32 pad_00071C[] = {
    0x00000000,
};

s32 N(displayList_80240720)[] = {
    0xE7000000, 0x00000000, 0xD7000002, 0xFFFFFFFF, 0xE3000A01, 0x00100000, 0xE3000C00, 0x00080000,
    0xE3000D01, 0x00000000, 0xE3000F00, 0x00000000, 0xE3001001, 0x00000000, 0xE3001201, 0x00002000,
    0xE3001402, 0x00000C00, 0xFA000000, 0x4B1F13FF, 0xFB000000, 0xFF764D00, 0xFC10E5E0, 0x230B1D52,
    0xE200001C, 0x0C184B50, 0xD9FDFFFF, 0x00000000, 0xD9FFFFFF, 0x00200404, 0xDF000000, 0x00000000,
};

Script N(script_ExitSingleDoor_802407A0) = SCRIPT({
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_8024035C_ADB1FC();
    PlaySound(220);
    GotoMapSpecial(D_8024A6B8_AE5558, 4, 12);
    sleep 100;
    group 27;
    DisablePlayerInput(1);
    SI_AREA_FLAG(19) = 1;
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 2;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    if (SI_SAVE_VAR(0) == 0xFFFFFF80) {
        GotoMap(D_8024A6C8_AE5568, 4);
    } else {
        GotoMap(D_8024A6C0_AE5560, 4);
    }
    sleep 100;
});

Script N(script_802408E8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_AREA_FLAG(19) = 0;
    UseDoorSounds(5);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 125;
    SI_VAR(3) = 128;
    SI_VAR(4) = 124;
    SI_VAR(5) = 127;
    spawn 0x80285E9C;
    sleep 17;
    GotoMap(D_8024A6D0_AE5570, 0);
    sleep 100;
});

Script N(script_ExitWalk_802409CC) = SCRIPT({
    group 27;
    SI_AREA_FLAG(19) = 0;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(481) == 0) {
        GotoMap(D_8024A6E0_AE5580, 0);
    } else {
        GotoMap(D_8024A6D8_AE5578, 1);
    }
    sleep 100;
});

Script N(script_80240A6C) = SCRIPT({
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0163, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_80240AB4) = SCRIPT({
    if (SI_SAVE_VAR(0) == 0xFFFFFF80) {
        bind N(script_80240A6C) to TriggerFlag_WALL_INTERACT 7;
    } else {
        bind N(script_802408E8) to TriggerFlag_WALL_INTERACT 7;
        bind N(script_ExitWalk_802409CC) to 0x80000 26;
    }
    bind 0x802407F0 to TriggerFlag_WALL_INTERACT 2;
});

Script N(script_EnterWalk_80240B54) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(0);
            SI_VAR(2) = 2;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
            spawn N(script_80240AB4);
        }
        == 1 {
            UseDoorSounds(5);
            SI_VAR(2) = 125;
            SI_VAR(3) = 128;
            SI_VAR(4) = 124;
            SI_VAR(5) = 127;
            await 0x80285EC4;
            spawn N(script_80240AB4);
        }
        == 2 {
            SI_VAR(0) = N(script_80240AB4);
            spawn EnterWalk;
        }
        == 3 {
            spawn N(script_80244E54);
        }
        == 4 {
            spawn N(script_80246C90);
            spawn N(script_80240AB4);
        }
        == 5 {
            spawn N(script_8024739C);
            spawn N(script_80240AB4);
        }
        == 6 {
            spawn N(script_80247F7C);
            spawn N(script_80240AB4);
        }
        == 7 {
            spawn N(script_802482C0);
            spawn N(script_80240AB4);
        }
        == 8 {
            spawn N(script_80248430);
            spawn N(script_80240AB4);
        }
        == 9 {
            spawn N(script_80248770);
            spawn N(script_80240AB4);
        }
        == 10 {
            spawn N(script_802497B4);
        }
        == 11 {
            spawn N(script_80242A60);
            spawn N(script_80240AB4);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) >= 3) {
        if (SI_VAR(0) != 11) {
            SI_SAVE_FLAG(480) = 0;
            SI_SAVE_FLAG(479) = 0;
        }
        match SI_VAR(0) {
            == 3 {
                SI_SAVE_VAR(0) = 0xFFFFFF97;
                SI_SAVE_VAR(79) = 0;
                SI_SAVE_FLAG(481) = 0;
                MakeNpcs(0, N(npcGroupList_80243E3C));
            }
            == 4 {
                SI_SAVE_VAR(0) = 0xFFFFFFB4;
                SI_SAVE_VAR(79) = 0;
                SI_SAVE_FLAG(481) = 0;
            }
            == 5 {
                SI_SAVE_VAR(0) = 0xFFFFFFCA;
                SI_SAVE_VAR(79) = 0;
                SI_SAVE_FLAG(481) = 0;
                SI_AREA_FLAG(6) = 0;
                MakeNpcs(0, N(npcGroupList_802442D0));
            }
            == 6 {
                SI_SAVE_VAR(0) = 0xFFFFFFF2;
                SI_SAVE_VAR(79) = 0;
                SI_SAVE_FLAG(481) = 0;
            }
            == 7 {
                SI_SAVE_VAR(0) = 6;
                SI_SAVE_VAR(79) = 0;
                SI_SAVE_FLAG(481) = 1;
            }
            == 8 {
                SI_SAVE_VAR(0) = 38;
                SI_SAVE_VAR(79) = 0;
                SI_SAVE_FLAG(481) = 1;
            }
            == 9 {
                func_80240384_ADB224();
                SI_SAVE_VAR(0) = 58;
                SI_SAVE_VAR(79) = 0;
                SI_SAVE_FLAG(481) = 1;
            }
            == 10 {
                MakeNpcs(0, N(npcGroupList_80244B94));
            }
            == 11 {
                SI_SAVE_VAR(79) += 1;
                MakeNpcs(0, N(npcGroupList_802439B4));
            }
        }
    }
    spawn N(script_80242744);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 5) {
        spawn N(script_802405C0);
    }
    spawn N(script_EnterWalk_80240B54);
    SetTexPanner(54, 0);
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
        spawn N(script_UpdateTexturePan_80240680);
    }
    0x802C90FC(54, 0, -1);
    0x802C9428(0, N(displayList_80240720), 0);
});

s32 pad_00124C[] = {
    0x00000000,
};

Script N(script_80241250) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFB4 {
            if (SI_SAVE_FLAG(480) == 0) {
                if (SI_AREA_FLAG(20) == 0) {
                    DisablePartnerAI(0);
                    SetPlayerAnimation(0xC0000);
                    sleep 10;
                    SetPlayerAnimation(0xC0026);
                    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140039);
                    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14003A);
                    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14003B);
                    SetPlayerAnimation(0xC0002);
                    sleep 10;
                    SetPlayerAnimation(0xA0001);
                    SI_AREA_FLAG(20) = 1;
                    EnablePartnerAI();
                } else {
                    ShowMessageAtScreenPos(0x14017B, 160, 40);
                }
            } else {
                ShowMessageAtScreenPos(0x14017B, 160, 40);
            }
        }
        0xFFFFFFCA..88
        ShowMessageAtScreenPos(0x14017B, 160, 40);
        else {
            ShowMessageAtScreenPos(67, 160, 40);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_8024143C) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFB4 {
            if (SI_SAVE_FLAG(480) == 0) {
                if (SI_AREA_FLAG(21) == 0) {
                    DisablePartnerAI(0);
                    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14003C);
                    SetPlayerAnimation(0xC0000);
                    sleep 10;
                    SetPlayerAnimation(0xC0026);
                    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14003D);
                    SetPlayerAnimation(0xC0002);
                    sleep 10;
                    SetPlayerAnimation(0xA0001);
                    SI_AREA_FLAG(21) = 1;
                    EnablePartnerAI();
                } else {
                    ShowMessageAtScreenPos(0x14017C, 160, 40);
                }
            } else {
                ShowMessageAtScreenPos(0x14017C, 160, 40);
            }
        }
        0xFFFFFFCA..88
        ShowMessageAtScreenPos(0x14017C, 160, 40);
        else {
            ShowMessageAtScreenPos(68, 160, 40);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_80241608) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        0xFFFFFFB4..88
        func_802403A0_ADB240(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            InterpPlayerYaw(45, 10);
            sleep 10;
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 5;
            SI_VAR(1) += 35;
            SI_VAR(2) += 0xFFFFFFF6;
            loop 6 {
                PlayEffect(6, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
                sleep 15;
            }
        } else {
            DisablePartnerAI(0);
            SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140044);
            SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140045);
            EnablePartnerAI();
        } else {
            ShowMessageAtScreenPos(69, 160, 40);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_802417D4) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFB4 {
            if (SI_SAVE_FLAG(480) == 0) {
                if (SI_AREA_FLAG(23) == 0) {
                    DisablePartnerAI(0);
                    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14003E);
                    SetPlayerAnimation(0xC0000);
                    sleep 10;
                    SetPlayerAnimation(0xC0026);
                    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14003F);
                    SetPlayerAnimation(0xC0002);
                    sleep 10;
                    SetPlayerAnimation(0xA0001);
                    SI_AREA_FLAG(23) = 1;
                    EnablePartnerAI();
                } else {
                    ShowMessageAtScreenPos(0x14017D, 160, 40);
                }
            } else {
                ShowMessageAtScreenPos(0x14017D, 160, 40);
            }
        }
        0xFFFFFFCA..88
        ShowMessageAtScreenPos(0x14017D, 160, 40);
        else {
            ShowMessageAtScreenPos(70, 160, 40);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_802419A0) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFB4 {
            if (SI_SAVE_FLAG(480) == 0) {
                if (SI_AREA_FLAG(24) == 0) {
                    DisablePartnerAI(0);
                    SetPlayerAnimation(0xC0000);
                    sleep 10;
                    SetPlayerAnimation(0xC0026);
                    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140040);
                    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140041);
                    SetPlayerAnimation(0xC0002);
                    sleep 10;
                    SetPlayerAnimation(0xA0001);
                    SI_AREA_FLAG(24) = 1;
                    EnablePartnerAI();
                } else {
                    ShowMessageAtScreenPos(0x14017E, 160, 40);
                }
            } else {
                ShowMessageAtScreenPos(0x14017E, 160, 40);
            }
        }
        0xFFFFFFCA..88
        ShowMessageAtScreenPos(0x14017E, 160, 40);
        else {
            ShowMessageAtScreenPos(71, 160, 40);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_80241B6C) = SCRIPT({
    DisablePlayerInput(1);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFB4 {
            if (SI_SAVE_FLAG(480) == 0) {
                if (SI_AREA_FLAG(25) == 0) {
                    DisablePartnerAI(0);
                    SetPlayerAnimation(0xC0000);
                    sleep 10;
                    SetPlayerAnimation(0xC0026);
                    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140042);
                    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140043);
                    SetPlayerAnimation(0xC0002);
                    sleep 10;
                    SetPlayerAnimation(0xA0001);
                    SI_AREA_FLAG(25) = 1;
                    EnablePartnerAI();
                } else {
                    ShowMessageAtScreenPos(0x14017F, 160, 40);
                }
            } else {
                ShowMessageAtScreenPos(0x14017F, 160, 40);
            }
        }
        0xFFFFFFCA..88
        ShowMessageAtScreenPos(0x14017F, 160, 40);
        else {
            ShowMessageAtScreenPos(72, 160, 40);
        }
    }
    DisablePlayerInput(0);
});

s32 N(unk_80241D38)[] = {
    0x000000FF,
};

Script N(script_80241D3C) = SCRIPT({
    EnableTexPanning(79, 1);
    EnableTexPanning(80, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    loop {
        SI_VAR(0) += 0xFFFFFF92;
        SI_VAR(1) += 50;
        SetTexPanOffset(5, 0, SI_VAR(0), SI_VAR(1));
        SI_VAR(2) += 40;
        SI_VAR(3) += 130;
        SetTexPanOffset(10, 1, SI_VAR(2), SI_VAR(3));
        sleep 1;
    }
});

Script N(script_80241E4C) = SCRIPT({
    PlaySoundAtCollider(24, 249, 0);
    MakeLerp(0, 180, 15, 0);
    UpdateLerp();
    RotateGroup(70, SI_VAR(0), 1, 0, 0);
    sleep 1;
    EnableModel(73, 1);
    loop {
        UpdateLerp();
        RotateGroup(70, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableModel(71, 0);
    EnableModel(72, 0);
    SI_SAVE_FLAG(480) = 1;
});

Script N(script_80241F80) = SCRIPT({
    EnableModel(78, 0);
    EnableModel(79, 0);
    EnableGroup(77, 1);
    if (SI_SAVE_VAR(0) == 0xFFFFFFB4) {
        SI_VAR(0) = 120;
    } else {
        SI_VAR(0) = 60;
    }
    PlaySoundAtCollider(37, 252, 0);
    MakeLerp(255, 0, SI_VAR(0), 0);
    loop {
        UpdateLerp();
        func_802403CC_ADB26C(SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableModel(80, 0);
    SetModelFlags(80, 16, 0);
    sleep 10;
    spawn {
        sleep 20;
        PlaySoundAt(251, 0, 0xFFFFFF83, 10, 0xFFFFFF88);
        PlayEffect(39, 0, 0xFFFFFF83, 10, 0xFFFFFF88, 2.0, 30, 0, 0, 0, 0, 0, 0, 0);
    }
    MakeLerp(0, 0xFFFFFF4C, 30, 1);
    loop {
        UpdateLerp();
        RotateModel(65, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 10;
    ModifyColliderFlags(0, 37, 0x7FFFFE00);
    ModifyColliderFlags(0, 25, 0x7FFFFE00);
    SI_SAVE_FLAG(479) = 1;
});

Script N(script_80242228) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    if (SI_SAVE_FLAG(480) == 0) {
        await N(script_80241E4C);
    } else {
        0x802D2884(0xFFFFFFE3, 0xFFFFFF6C, 5);
        sleep 10;
        SetPlayerAnimation(0xD0010);
        sleep 10;
        SetPlayerAnimation(0xD0011);
        spawn {
            sleep 5;
            PlaySoundAtCollider(24, 250, 0);
        }
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPlayerJumpscale(1.0);
        PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        SetPlayerAnimation(0xD0012);
        sleep 20;
        SetPlayerAnimation(0xA0001);
        InterpPlayerYaw(225, 0);
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        await N(script_80241F80);
        unbind;
    }
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_802423F4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    if (SI_SAVE_FLAG(480) == 0) {
        if (SI_AREA_FLAG(4) == 0) {
            NpcFacePlayer(0xFFFFFFFC, 0);
            SpeakToPlayer(0xFFFFFFFC, 0x20000C, 0x20000C, 5, 0x140046);
            SI_AREA_FLAG(4) = 1;
        }
        await N(script_80241E4C);
    } else {
        0x802D2884(0xFFFFFFE3, 0xFFFFFF6C, 5);
        sleep 10;
        SetPlayerAnimation(0xD0010);
        sleep 10;
        SetPlayerAnimation(0xD0011);
        spawn {
            sleep 5;
            PlaySoundAtCollider(24, 250, 0);
        }
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPlayerJumpscale(1.0);
        PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        SetPlayerAnimation(0xD0012);
        sleep 20;
        SetPlayerAnimation(0xA0001);
        InterpPlayerYaw(225, 0);
        InterpNpcYaw(0xFFFFFFFC, 225, 0);
        if (SI_AREA_FLAG(5) == 0) {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, 0xFFFFFF88, 25, 0);
            SetCamSpeed(0, 3.0);
            SetCamDistance(0, 300);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
        }
        await N(script_80241F80);
        if (SI_AREA_FLAG(5) == 0) {
            ResetCam(0, 3.0);
            SetPlayerAnimation(0xC0009);
            SpeakToPlayer(0xFFFFFFFC, 0x20000F, 0x20000F, 5, 0x140047);
            SI_AREA_FLAG(5) = 1;
        }
        unbind;
    }
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80242744) = SCRIPT({
    if (SI_SAVE_FLAG(480) == 0) {
        EnableModel(73, 0);
    } else {
        EnableModel(71, 0);
        EnableModel(72, 0);
        RotateGroup(70, 180, 1, 0, 0);
    }
    if (SI_SAVE_FLAG(479) == 0) {
        EnableGroup(77, 0);
        spawn N(script_80241D3C);
        0x802C90FC(80, 1, -1);
        0x802C94A0(1, func_802403F8_ADB298, 0);
        match SI_SAVE_VAR(0) {
            < 0xFFFFFF81 {}
            < 0xFFFFFFCA {
                bind N(script_802423F4) to TriggerFlag_WALL_INTERACT 24;
            }
            < 95 {
                bind N(script_80242228) to TriggerFlag_WALL_INTERACT 24;
            } else {
            }
        }
    } else {
        ModifyColliderFlags(0, 37, 0x7FFFFE00);
        ModifyColliderFlags(0, 25, 0x7FFFFE00);
        RotateModel(65, 0xFFFFFF4C, 1, 0, 0);
        EnableGroup(81, 0);
    }
    bind N(script_80241250) to TriggerFlag_WALL_INTERACT 37;
    bind N(script_8024143C) to TriggerFlag_WALL_INTERACT 38;
    bind N(script_80241608) to TriggerFlag_WALL_INTERACT 39;
    bind N(script_802417D4) to TriggerFlag_WALL_INTERACT 40;
    bind N(script_802419A0) to TriggerFlag_WALL_INTERACT 41;
    bind N(script_80241B6C) to TriggerFlag_WALL_INTERACT 42;
});

s32 pad_0029C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(vectorList_802429D0)[] = {
    0xC3998000, 0x41F00000, 0xC1F00000, 0xC3910000, 0x420C0000, 0xC1F00000, 0xC37A0000, 0x00000000,
    0xC1F00000,
};

s32 N(vectorList_802429F4)[] = {
    0xC3F00000, 0x41F00000, 0xC1F00000, 0xC3B40000, 0x42700000, 0xC1F00000, 0xC3AA0000, 0x42F00000,
    0xC28C0000, 0xC3BE0000, 0x42200000, 0xC2C80000,
};

s32 N(vectorList_80242A24)[] = {
    0xC3BE0000, 0x42200000, 0xC2C80000, 0xC3B40000, 0x42340000, 0xC2A40000, 0xC3AA0000, 0x42200000,
    0xC2820000, 0xC3A00000, 0x42000000, 0xC2500000, 0xC3910000, 0x41C80000, 0xC1F00000,
};

Script N(script_80242A60) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetMusicTrack(0, 118, 0, 8);
    SetPlayerPos(0xFFFFFE20, 30, 0xFFFFFFE2);
    SetPlayerAnimation(0xC0018);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFE20, 30, 0xFFFFFFE2);
    SetNpcPos(0, 0xFFFFFE14, 0, 0xFFFFFFE2);
    SetNpcPos(1, 0xFFFFFE34, 0, 0xFFFFFFE2);
    SetNpcYaw(0, 90);
    SetNpcYaw(1, 90);
    UseSettingsFrom(0, 0xFFFFFED4, 0, 0xFFFFFFE2);
    SetPanTarget(0, 0xFFFFFED4, 0, 0xFFFFFFE2);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 30;
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    ModifyColliderFlags(0, 3, 0x7FFFFE00);
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 80, 14, 4);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        sleep 10;
        LoadPath(50, N(vectorList_802429F4), 4, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
    }
    SetNpcVar(0, 0, 1);
    spawn {
        SetNpcAnimation(0, 0x580014);
        SetNpcSpeed(0, 5.0);
        NpcMoveTo(0, 0xFFFFFEC4, 0xFFFFFFE0, 0);
        SetNpcVar(0, 0, 0);
    }
    spawn {
        SetNpcAnimation(1, 0x580014);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, 0xFFFFFEE4, 0xFFFFFFE4, 0);
    }
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 10;
        SI_VAR(2) += 2;
        SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcAnimation(0, 0x580012);
    SetNpcAnimation(1, 0x580012);
    sleep 20;
    SetPlayerAnimation(0xC0019);
    SetNpcAnimation(0, 0x580015);
    SetNpcAnimation(1, 0x580015);
    LoadPath(15, N(vectorList_802429D0), 3, 0);
    loop {
        GetNextPathPos();
        SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    PlaySoundAtPlayer(354, 0);
    SetPlayerAnimation(0xC001A);
    spawn {
        SI_VAR(1) += 10;
        PlayEffect(6, 1, SI_VAR(1), SI_VAR(2), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 47;
        SI_VAR(1) += 0xFFFFFFFB;
        SI_VAR(2) += 10;
        SI_VAR(3) += 5;
        loop 4 {
            PlayEffect(7, 1, SI_VAR(1), SI_VAR(2), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 10;
        }
    }
    spawn {
        SetNpcAnimation(0, 0x580001);
        sleep 20;
        SetNpcAnimation(0, 0x580006);
        NpcMoveTo(0, 0xFFFFFE32, 0xFFFFFFE2, 0);
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
    }
    spawn {
        SetNpcAnimation(1, 0x580001);
        sleep 20;
        SetNpcAnimation(1, 0x580006);
        NpcMoveTo(1, 0xFFFFFE52, 0xFFFFFFE2, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        MakeLerp(120, 0, 8, 0);
        loop {
            UpdateLerp();
            RotateModel(2, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        ModifyColliderFlags(1, 3, 0x7FFFFE00);
        ModifyColliderFlags(1, 2, 0x7FFFFE00);
        PlaySoundAtCollider(2, 450, 0);
    }
    sleep 60;
    LoadPath(50, N(vectorList_80242A24), 5, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    SetPlayerAnimation(0xA0001);
    if (SI_SAVE_VAR(0) == 58) {
        SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140159);
        SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x14015A);
        if (SI_SAVE_VAR(79) < 3) {
            if (SI_AREA_FLAG(19) == 0) {
                SI_VAR(0) = 0x14015B;
            } else {
                SI_VAR(0) = 0x14015D;
            }
        } else {
            SI_VAR(0) = 0x14015C;
        }
        SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, SI_VAR(0));
    } else {
        SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140176);
        SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x140177);
        if (SI_SAVE_VAR(79) < 3) {
            if (SI_AREA_FLAG(19) == 0) {
                SI_VAR(0) = 0x140178;
            } else {
                SI_VAR(0) = 0x14017A;
            }
        } else {
            SI_VAR(0) = 0x140179;
        }
        SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, SI_VAR(0));
    }
    spawn N(script_802405C0);
    ResetCam(0, 1.0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

NpcSettings N(npcSettings_80243590) = {
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

s32 N(extraAnimationList_802435BC)[] = {
    0x00580001, 0x00580006, 0x00580012, 0x00580014, 0x00580015, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802435D4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243590),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802435BC),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80243590),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802435BC),
    },
};

NpcGroupList N(npcGroupList_802439B4) = {
    NPC_GROUP(N(npcGroup_802435D4), 0x00000000),
    {},
};

s32 pad_0039CC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_802439D0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x4B,
    .radius = 0x48,
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

NpcSettings N(npcSettings_802439FC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80243A28)[] = {
    0x00800000, 0x00800002, 0x00800003, 0x00800004, 0x00800006, 0x00800007, 0x00800009, 0x00800010,
    0xFFFFFFFF,
};

s32 N(extraAnimationList_80243A4C)[] = {
    0x00600001, 0x00600002, 0x00600004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80243A5C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802439D0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80243A28),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802439FC),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80243A4C),
    },
};

NpcGroupList N(npcGroupList_80243E3C) = {
    NPC_GROUP(N(npcGroup_80243A5C), 0x00000000),
    {},
};

s32 pad_003E54[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80243E60) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x4B,
    .radius = 0x48,
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

NpcSettings N(npcSettings_80243E8C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80243EB8)[] = {
    0x00800000, 0x00800002, 0x00800004, 0x00800005, 0x00800006, 0x00800007, 0x0080000C, 0x0080000D,
    0xFFFFFFFF,
};

s32 N(extraAnimationList_80243EDC)[] = {
    0x00600001, 0x00600002, 0x00600003, 0x00600004, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80243EF0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243E60),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80243EB8),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80243E8C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80243EDC),
    },
};

NpcGroupList N(npcGroupList_802442D0) = {
    NPC_GROUP(N(npcGroup_80243EF0), 0x00000000),
    {},
};

s32 pad_0042E8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802442F0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x4B,
    .radius = 0x48,
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

NpcSettings N(npcSettings_8024431C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80244348) = {
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

s32 N(extraAnimationList_80244374)[] = {
    0x00800000, 0x00800002, 0x00800004, 0x00800005, 0x00800006, 0x00800007, 0x00800008, 0x0080000D,
    0x00800016, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024439C)[] = {
    0x00600000, 0x00600001, 0x00600002, 0x00600003, 0x00600004, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802443B4)[] = {
    0x00580000, 0x00580001, 0x00580004, 0x00580006, 0x00580012, 0x00580014, 0x00580018, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802443D4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802442F0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x0000050D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80244374),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80244348),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x0000070D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802443B4),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80244348),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x0000070D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802443B4),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_8024431C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x0000050D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_8024439C),
    },
};

NpcGroupList N(npcGroupList_80244B94) = {
    NPC_GROUP(N(npcGroup_802443D4), 0x00000000),
    {},
};

s32 pad_004BAC[] = {
    0x00000000,
};

s32 N(vectorList_80244BB0)[] = {
    0x44020000, 0x428C0000, 0xC2780000, 0x43C80000, 0x42640000, 0x423C0000, 0x43960000, 0x42480000,
    0x42200000, 0x43960000, 0x42480000, 0xC1200000, 0x43A00000, 0x42820000, 0x00000000,
};

s32 N(vectorList_80244BEC)[] = {
    0x43B00000, 0x42480000, 0xC0000000, 0x43960000, 0x42AA0000, 0x00000000, 0x43AF0000, 0x42F00000,
    0x00000000, 0x43C80000, 0x42D20000, 0xC0E00000, 0x43D70000, 0x42B40000, 0xC1700000,
};

Script N(script_80244C28) = SCRIPT({
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 120, 14, 8);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80244CD8) = SCRIPT({
    MakeLerp(120, 0, 8, 8);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 450, 0);
});

Script N(script_80244D88) = SCRIPT({
    loop {
        NpcFlyTo(0xFFFFFFFC, 520, 70, 0xFFFFFFC4, 30, 0xFFFFFFF6, 0);
        NpcFlyTo(0xFFFFFFFC, 520, 70, 0xFFFFFFC3, 10, 0xFFFFFFFB, 0);
        PlaySoundAtNpc(0xFFFFFFFC, 472, 0);
        NpcFlyTo(0xFFFFFFFC, 520, 70, 0xFFFFFFC2, 10, 0xFFFFFFFB, 0);
        PlaySoundAtNpc(0xFFFFFFFC, 472, 0);
    }
});

Script N(script_80244E54) = SCRIPT({
    DisablePlayerInput(1);
    func_80240480_ADB320();
    SetPlayerAnimation(0xC000E);
    InterpPlayerYaw(270, 0);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 520, 60, 0xFFFFFFDD);
    SetNpcPos(0, 0xFFFFFE3E, 0, 0xFFFFFFEC);
    SetNpcPos(1, 0xFFFFFE02, 0, 0xFFFFFFEC);
    SetNpcYaw(0, 90);
    SetNpcYaw(1, 90);
    AdjustCam(0, 90.0, 20, 250, 17.0, -11.0);
    sleep 30;
    SpeakToPlayer(0xFFFFFFFE, 0xC000F, 0xC000E, 5, 0x140016);
    sleep 5;
    InterpPlayerYaw(90, 5);
    PlayerMoveTo(20, 30, 30);
    SpeakToPlayer(0xFFFFFFFE, 0xC000F, 0xC000E, 5, 0x140017);
    sleep 5;
    InterpPlayerYaw(270, 5);
    PlayerMoveTo(0xFFFFFFEC, 30, 30);
    SpeakToPlayer(0xFFFFFFFE, 0xC000F, 0xC000E, 5, 0x140018);
    sleep 5;
    InterpPlayerYaw(90, 5);
    PlayerMoveTo(20, 30, 30);
    SpeakToPlayer(0xFFFFFFFE, 0xC000F, 0xC000E, 5, 0x140019);
    sleep 30;
    func_8024049C_ADB33C();
    SetPlayerAnimation(0xA0001);
    PlaySoundAtPlayer(610, 0);
    ShowEmote(0, 0, 0xFFFFFFD3, 30, 0, 0, 0, 0, 0);
    sleep 10;
    InterpPlayerYaw(270, 3);
    sleep 15;
    SetMusicTrack(0, 102, 0, 8);
    SetCamSpeed(0, 2.0);
    SetPanTarget(0, 0xFFFFFEB6, 0, 0);
    SetCamPosA(0, 0xFFFFFEB6, 32);
    WaitForCam(0, 1.0);
    sleep 3;
    spawn N(script_80244C28);
    sleep 10;
    SetNpcVar(0, 0, 1);
    spawn {
        SetNpcAnimation(0, 0x800004);
        SetNpcSpeed(0, 3.0);
        NpcMoveTo(0, 0xFFFFFED4, 0xFFFFFFEC, 0);
        NpcMoveTo(0, 0xFFFFFFCE, 30, 0);
        SetNpcAnimation(0, 0x800002);
        SetNpcVar(0, 0, 0);
    }
    spawn {
        SetNpcAnimation(1, 0x600002);
        SetNpcSpeed(1, 3.0);
        NpcMoveTo(1, 0xFFFFFF92, 30, 0);
        SetNpcAnimation(1, 0x600001);
    }
    SetCamSpeed(0, 90.0);
    spawn {
        sleep 40;
        MakeLerp(250, 300, 80, 0);
        loop {
            UpdateLerp();
            SetCamDistance(0, SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 10;
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 20;
    SpeakToPlayer(0, 0x800007, 0x800007, 0, 0x14001A);
    SetNpcAnimation(0, 0x800002);
    sleep 1;
    EndSpeech(0, 0x800006, 0x800002, 0);
    SpeakToPlayer(1, 0x600004, 0x600001, 0, 0x14001B);
    SetNpcAnimation(0, 0x800010);
    sleep 10;
    SpeakToPlayer(0, 0x800009, 0x800003, 0, 0x14001C);
    SetPlayerAnimation(0xC000D);
    SetNpcAnimation(0, 0x800002);
    EndSpeech(0, 0x800009, 0x800003, 0);
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(1, 0x600004, 0x600001, 0, 0x14001D);
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x14001E);
    SpeakToPlayer(1, 0x600004, 0x600001, 0, 0x14001F);
    sleep 15;
    spawn {
        SetNpcAnimation(0, 0x800004);
        NpcMoveTo(0, 0xFFFFFE3E, 30, 0);
    }
    spawn {
        InterpNpcYaw(1, 270, 5);
        sleep 60;
        SetNpcAnimation(1, 0x600002);
        NpcMoveTo(1, 0xFFFFFE02, 30, 0);
        SetNpcAnimation(1, 0x600001);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 0.5);
    WaitForCam(0, 1.0);
    FadeOutMusic(0, 2000);
    sleep 60;
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140020);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    sleep 20;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 150;
    PlaySoundAt(472, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 10;
    PlaySoundAt(472, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 10;
    PlaySoundAtPlayer(611, 0);
    ShowEmote(0, 2, 0xFFFFFFD3, 20, 0, 0, 0, 0, 0);
    sleep 20;
    InterpPlayerYaw(135, 5);
    sleep 10;
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140021);
    SI_AREA_FLAG(3) = 0;
    SI_VAR(10) = spawn N(script_80244D88);
    spawn {
        UseSettingsFrom(0, 413, 0, 0xFFFFFFBE);
        SetCamType(0, 4, 0);
        SetCamPosA(0, 338, 44);
        SetCamPosB(0, 413, 0xFFFFFFBE);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    sleep 10;
    SetPlayerSpeed(3.0);
    PlayerMoveTo(179, 0xFFFFFFFC, 0);
    PlayerMoveTo(439, 0xFFFFFFF0, 0);
    SI_AREA_FLAG(3) = 1;
    kill SI_VAR(10);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    sleep 15;
    SetPlayerAnimation(0xC000B);
    PlaySoundAtCollider(7, 459, 0);
    MakeLerp(0, 80, 14, 4);
    loop {
        UpdateLerp();
        RotateModel(125, SI_VAR(0), 0, 1, 0);
        RotateModel(128, SI_VAR(0), 0, -1, 0);
        RotateModel(124, SI_VAR(0), 0, 1, 0);
        RotateModel(127, SI_VAR(0), 0, -1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetMusicTrack(0, 112, 0, 8);
    spawn {
        LoadPath(100, N(vectorList_80244BB0), 5, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        SI_AREA_FLAG(3) = 0;
    }
    spawn {
        loop {
            GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 310) {
                break;
            }
            sleep 1;
        }
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
    }
    loop {
        sleep 1;
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 430) {
            break;
        }
    }
    InterpPlayerYaw(220, 5);
    SetPlayerAnimation(0xA0001);
    spawn {
        sleep 40;
        0x802D1270(420, 0, 2.0);
    }
    sleep 10;
    PanToTarget(0, 0, 0);
    sleep 30;
    UseSettingsFrom(0, 370, 30, 0);
    SetPanTarget(0, 370, 30, 0);
    SetCamDistance(0, 300.0);
    SetCamPosB(0, 370.0, 32.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    loop {
        sleep 1;
        if (SI_AREA_FLAG(3) == 0) {
            break;
        }
    }
    SetPanTarget(0, 320, 30, 17);
    SetCamDistance(0, 200.0);
    SetCamPitch(0, 17.0, -16.0);
    SetCamSpeed(0, 2.0);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140022);
    SetPanTarget(0, 370, 30, 17);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -10.0);
    SetCamSpeed(0, 90.0);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140023);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140024);
    SetCamSpeed(0, 0.400390625);
    SetPanTarget(0, 350, 30, 17);
    PlayerMoveTo(380, 0, 30);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140025);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140026);
    SetCamSpeed(0, 4.0);
    SetCamDistance(0, 200);
    SetCamPitch(0, 17, 0xFFFFFFF2);
    SetPanTarget(0, 380, 30, 17);
    WaitForCam(0, 1.0);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140027);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SetNpcAnimation(0xFFFFFFFC, 0x200010);
    SetCamSpeed(0, 1.0);
    SetCamPitch(0, 17, 0xFFFFFFF0);
    SetPanTarget(0, 320, 30, 17);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0xFFFFFFFC, 0x200010, 0x200010, 0, 0x140028);
    SetCamSpeed(0, 90.0);
    SetCamDistance(0, 300);
    SetCamPitch(0, 17, 0xFFFFFFF6);
    SetPanTarget(0, 350, 30, 17);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140029);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x200010, 0x200010, 0, 0x14002A);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14002B);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    sleep 30;
    SetPlayerAnimation(0xC000D);
    PlaySoundAtPlayer(610, 0);
    ShowEmote(0, 0, 0xFFFFFFD3, 30, 0, 0, 0, 0, 0);
    sleep 30;
    SetPlayerAnimation(0xA0001);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14002C);
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    EndSpeech(0xFFFFFFFE, 0xC0001, 0xC0026, 5);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xC000A);
    sleep 12;
    GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(2) -= 10;
    SI_VAR(3) += 20;
    SI_VAR(4) += 2;
    MakeItemEntity(7, SI_VAR(2), SI_VAR(3), SI_VAR(4), 1, 0);
    SI_VAR(9) = SI_VAR(0);
    sleep 10;
    SetCamSpeed(0, 5.0);
    SetCamDistance(0, 200.0);
    SetCamPitch(0, 17.0, -12.5);
    SetPanTarget(0, 365, 30, 17);
    PanToTarget(0, 0, 1);
    spawn {
        NpcFlyTo(0xFFFFFFFC, 350, 50, 0xFFFFFFFE, 30, 0xFFFFFFFB, 0);
    }
    sleep 40;
    SetNpcAnimation(0xFFFFFFFC, 0x200017);
    MakeLerp(50, 70, 10, 4);
    loop {
        SI_VAR(2) += 0xFFFFFFFE;
        UpdateLerp();
        SetItemPos(SI_VAR(9), SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200018);
    SpeakToPlayer(0xFFFFFFFC, 0x200018, 0x200018, 0, 0x14002D);
    SI_VAR(3) = SI_VAR(0);
    loop 10 {
        SI_VAR(3) += -1;
        SetItemPos(SI_VAR(9), SI_VAR(2), SI_VAR(3), SI_VAR(4));
        sleep 1;
    }
    SetNpcAnimation(0xFFFFFFFC, 0x200019);
    RemoveItemEntity(SI_VAR(9));
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    sleep 20;
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    sleep 10;
    SetCamDistance(0, 400);
    SetCamPitch(0, 17, 0xFFFFFFF6);
    SetPanTarget(0, 355, 30, 17);
    spawn {
        loop {
            sleep 1;
            GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) > 380) {
                break;
            }
        }
        InterpPlayerYaw(90, 5);
        SetPlayerAnimation(0xC0000);
        sleep 10;
        SetPlayerAnimation(0xC0026);
        SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14002E);
        SI_AREA_FLAG(3) = 1;
    }
    spawn {
        loop {
            GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 310) {
                break;
            }
            sleep 1;
        }
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
    }
    LoadPath(60, N(vectorList_80244BEC), 5, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    loop {
        sleep 1;
        if (SI_AREA_FLAG(3) == 1) {
            break;
        }
    }
    SetCamDistance(0, 250);
    SetCamPitch(0, 17, 0xFFFFFFF3);
    SetPanTarget(0, 405, 30, 17);
    SetCamPosB(0, 400.0, 32.0);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14002F);
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    NpcFlyTo(0xFFFFFFFC, 420, 60, 0, 20, 0, 0);
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140030);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    spawn {
        MakeLerp(0, 360, 10, 0);
        loop {
            UpdateLerp();
            SetNpcRotation(0xFFFFFFFC, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140031);
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    InterpNpcYaw(0xFFFFFFFC, 90, 5);
    sleep 10;
    FadeOutMusic(0, 2000);
    NpcFlyTo(0xFFFFFFFC, 600, 100, 0xFFFFFFB0, 40, 0, 0);
    sleep 30;
    GotoMap(D_8024A6E8_AE5588, 2);
    sleep 100;
    DisablePlayerInput(0);
});

s32 pad_006C8C[] = {
    0x00000000,
};

Script N(script_80246C90) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    spawn {
        AdjustCam(0, 0.5, 20, 300, 17.0, -11.0);
    }
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFF38, 93, 0xFFFFFFEF);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    spawn {
        sleep 120;
        NpcFlyTo(0xFFFFFFFC, 0xFFFFFF9C, 40, 0, 60, 40, 0);
        sleep 5;
        InterpNpcYaw(0xFFFFFFFC, 270, 5);
    }
    loop 3 {
        PlayerMoveTo(0xFFFFFF92, 0, 30);
        PlayerMoveTo(0xFFFFFF74, 0, 30);
    }
    sleep 5;
    InterpPlayerYaw(90, 5);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140033);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140034);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140035);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140036);
    SetPlayerAnimation(0xC000D);
    PlaySoundAtPlayer(610, 0);
    ShowEmote(0, 0, 0, 30, 0, 0, 0, 0, 0);
    sleep 30;
    SetPlayerAnimation(0xA0001);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140037);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140038);
    PanToTarget(0, 0, 0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_006FDC[] = {
    0x00000000,
};

s32 N(vectorList_80246FE0)[] = {
    0x42DC0000, 0x00000000, 0xC33E0000, 0x43200000, 0x428C0000, 0xC3160000, 0x42C80000, 0x42200000,
    0xC2700000, 0x41A00000, 0x428C0000, 0xC2C80000, 0xC2700000, 0x42200000, 0xC1A00000, 0x00000000,
    0x41A00000, 0x41F00000,
};

Script N(script_80247028) = SCRIPT({
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 120, 14, 0);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 40;
    MakeLerp(120, 0, 8, 0);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 450, 0);
});

Script N(script_80247184) = SCRIPT({
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 120, 14, 8);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80247234) = SCRIPT({
    MakeLerp(120, 0, 8, 8);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 450, 0);
});

Script N(script_802472E4) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFEB6, 0, 0xFFFFFFE2);
    SetPanTarget(0, 0xFFFFFEB6, 0, 0xFFFFFFE2);
    SetCamDistance(0, 325.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamPosA(0, -310.0, 32.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
});

Script N(script_8024739C) = SCRIPT({
    DisablePlayerInput(1);
    SetMusicTrack(0, 102, 0, 8);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 110, 0, 0xFFFFFF42);
    SetNpcYaw(0xFFFFFFFC, 270);
    InterpPlayerYaw(270, 0);
    await N(script_802472E4);
    spawn N(script_80247028);
    sleep 10;
    SetNpcPos(0, 0xFFFFFE2A, 0, 0xFFFFFFE2);
    SetNpcVar(0, 0, 1);
    spawn {
        SetNpcAnimation(0, 0x800004);
        SetNpcSpeed(0, 3.0);
        NpcMoveTo(0, 0xFFFFFFE2, 30, 0);
        SetNpcAnimation(0, 0x800002);
        SetNpcVar(0, 0, 0);
    }
    SetCamSpeed(0, 90.0);
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 30;
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcVar(0, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SpeakToPlayer(0, 0x800007, 0x800007, 0, 0x14005C);
    SetNpcAnimation(0, 0x800002);
    sleep 1;
    EndSpeech(0, 0x800006, 0x800002, 0);
    SetPlayerAnimation(0xC0012);
    InterpPlayerYaw(90, 3);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x14005D);
    SpeakToPlayer(0, 0x800007, 0x800007, 5, 0x14005E);
    SetNpcAnimation(0, 0x800002);
    EndSpeech(0, 0x800006, 0x800002, 5);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    InterpPlayerYaw(270, 0);
    InterpNpcYaw(0, 270, 0);
    await N(script_802472E4);
    sleep 5;
    spawn N(script_80247184);
    SetMusicTrack(0, 70, 0, 8);
    SetNpcPos(1, 0xFFFFFE2A, 0, 0xFFFFFFE2);
    SetNpcAnimation(1, 0x600003);
    SetNpcSpeed(1, 5.0);
    NpcMoveTo(1, 0xFFFFFEAC, 0xFFFFFFE2, 0);
    SetNpcAnimation(1, 0x600001);
    sleep 10;
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x14005F);
    SetCamDistance(0, 350);
    SetPanTarget(0, 0xFFFFFFE2, 0, 0xFFFFFFE2);
    SetCamPosA(0, 0xFFFFFEE1, 32);
    sleep 5;
    SetNpcAnimation(1, 0x600003);
    SetNpcSpeed(1, 5.0);
    NpcMoveTo(1, 0xFFFFFF92, 30, 0);
    SetNpcAnimation(1, 0x600001);
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140060);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140061);
    SetNpcAnimation(1, 0x600002);
    NpcMoveTo(1, 0xFFFFFFA6, 40, 10);
    SetNpcAnimation(1, 0x600001);
    sleep 10;
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140062);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(0, 0x80000D);
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetNpcAnimation(0, 0x800002);
    sleep 10;
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140063);
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140064);
    SetNpcAnimation(0, 0x80000C);
    sleep 50;
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140065);
    spawn {
        SetNpcAnimation(0, 0x800004);
        SetNpcSpeed(0, 3.0);
        NpcMoveTo(0, 0xFFFFFE2A, 0xFFFFFFE2, 0);
    }
    SetNpcVar(1, 0, 1);
    spawn {
        sleep 40;
        SetNpcAnimation(1, 0x600002);
        SetNpcSpeed(1, 3.0);
        NpcMoveTo(1, 0xFFFFFE2A, 0xFFFFFFE2, 0);
        SetNpcVar(1, 0, 0);
    }
    spawn {
        MakeLerp(350, 400, 100, 0);
        loop {
            UpdateLerp();
            SetCamDistance(0, SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    loop {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcVar(1, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    spawn N(script_80247234);
    sleep 30;
    SetMusicTrack(0, 115, 0, 8);
    SetCamSpeed(0, 90.0);
    SetCamDistance(0, 300);
    SetPanTarget(0, 20, 0, 30);
    sleep 3;
    spawn {
        loop {
            GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 0xFFFFFFC6) {
                break;
            }
            sleep 1;
        }
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
    }
    LoadPath(80, N(vectorList_80246FE0), 6, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x140066);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140067);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140068);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140069);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x14006A);
    spawn N(script_802405C0);
    ResetCam(0, 4.0);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

s32 N(vectorList_80247F10)[] = {
    0xC2200000, 0x42B40000, 0x00000000, 0xC1200000, 0x42820000, 0xC1A00000, 0x41A00000, 0x428C0000,
    0xC1200000,
};

s32 N(vectorList_80247F34)[] = {
    0x41A00000, 0x428C0000, 0xC1200000, 0xC1F00000, 0x42340000, 0xC1A00000, 0xC2A00000, 0x42480000,
    0xC1200000,
};

s32 N(vectorList_80247F58)[] = {
    0xC2A00000, 0x42480000, 0xC1200000, 0xC28C0000, 0x420C0000, 0xC0A00000, 0xC2700000, 0x41F00000,
    0x00000000,
};

Script N(script_80247F7C) = SCRIPT({
    DisablePlayerInput(1);
    InterpPlayerYaw(270, 0);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFD8, 90, 0);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    AdjustCam(0, 90.0, 0xFFFFFFEC, 250, 17.0, -11.0);
    LoadPath(24, N(vectorList_80247F10), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    NpcFacePlayer(0xFFFFFFFC, 5);
    sleep 20;
    LoadPath(30, N(vectorList_80247F34), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    NpcFacePlayer(0xFFFFFFFC, 5);
    sleep 20;
    LoadPath(10, N(vectorList_80247F58), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    NpcFacePlayer(0xFFFFFFFC, 5);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14007E);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x14007F);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140080);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140081);
    ResetCam(0, 2.0);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

s32 pad_0082B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802482C0) = SCRIPT({
    DisablePlayerInput(1);
    InterpPlayerYaw(270, 0);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFC4, 30, 0);
    SetNpcYaw(0xFFFFFFFC, 90);
    AdjustCam(0, 90.0, 0xFFFFFFEC, 250, 17.0, -11.0);
    sleep 30;
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140097);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140098);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x140099);
    spawn {
        NpcFlyTo(0xFFFFFFFC, 0xFFFFFFE2, 55, 30, 30, 0xFFFFFFFB, 0);
        EnablePartnerAI();
    }
    ResetCam(0, 2.0);
    DisablePlayerInput(0);
});

s32 pad_00842C[] = {
    0x00000000,
};

Script N(script_80248430) = SCRIPT({
    DisablePlayerInput(1);
    InterpPlayerYaw(270, 0);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFF56, 40, 0xFFFFFFFB);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    UseSettingsFrom(0, 0xFFFFFF74, 0, 0);
    SetPanTarget(0, 0xFFFFFF74, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        SetCamDistance(0, 275.0);
        SetCamPitch(0, 17.0, -11.0);
        SetCamSpeed(0, 0.6005859375);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    loop 2 {
        PlayerMoveTo(0xFFFFFF92, 0, 25);
        sleep 5;
        PlayerMoveTo(0xFFFFFF7E, 0, 25);
        sleep 5;
    }
    PlayerMoveTo(0xFFFFFF92, 0, 25);
    InterpPlayerYaw(270, 5);
    SpeakToPlayer(0xFFFFFFFE, 0xD0004, 0xA0001, 5, 0x1400EB);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400EC);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x1400ED);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400EE);
    spawn {
        NpcFlyTo(0xFFFFFFFC, 0xFFFFFF74, 55, 0, 30, 0xFFFFFFFB, 0);
        EnablePartnerAI();
    }
    ResetCam(0, 2.0);
    DisablePlayerInput(0);
});

s32 pad_008764[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80248770) = SCRIPT({
    DisablePlayerInput(1);
    InterpPlayerYaw(270, 0);
    DisablePartnerAI(0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFF74, 25, 0);
    SetNpcYaw(0xFFFFFFFC, 90);
    UseSettingsFrom(0, 0xFFFFFF9C, 0, 0);
    SetPanTarget(0, 0xFFFFFF9C, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetCamDistance(0, 250.0);
    SetCamSpeed(0, 2.0);
    WaitForCam(0, 1.0);
    sleep 30;
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x14012F);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140130);
    spawn {
        NpcFlyTo(0xFFFFFFFC, 0xFFFFFFA6, 55, 0, 30, 0xFFFFFFFB, 0);
        EnablePartnerAI();
    }
    ResetCam(0, 2.0);
    DisablePlayerInput(0);
});

s32 pad_0089A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(vectorList_802489B0)[] = {
    0x43DC0000, 0x42820000, 0x00000000, 0x43D20000, 0x42F00000, 0xC1A00000, 0x43C80000, 0x42A00000,
    0xC20C0000, 0x43BB8000, 0x42A00000, 0xC2480000, 0x43BB8000, 0x42C80000, 0xC2480000,
};

s32 N(vectorList_802489EC)[] = {
    0x43BB8000, 0x42C80000, 0xC2480000, 0x43BB8000, 0x42A00000, 0xC2480000, 0x43C30000, 0x42B40000,
    0x41200000,
};

Script N(script_80248A10) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 1.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 26;
        SI_VAR(2) -= 2;
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, SI_VAR(0), 70, 0);
        NpcFacePlayer(1, 5);
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(1, 0x580001);
    }
    SetNpcVar(2, 0, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 26;
        SI_VAR(2) += 2;
        SetNpcAnimation(2, 0x580006);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, SI_VAR(0), 70, 0);
        NpcFacePlayer(2, 5);
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(2, 0x580001);
        SetNpcVar(2, 0, 0);
    }
    loop {
        sleep 1;
        GetNpcVar(2, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
});

Script N(script_80248C9C) = SCRIPT({
    spawn {
        SetNpcAnimation(1, 0x580018);
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        loop 5 {
            loop 5 {
                SI_VAR(0) += 2;
                SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                sleep 1;
            }
            loop 5 {
                SI_VAR(0) -= 2;
                SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                sleep 1;
            }
        }
        SetNpcAnimation(1, 0x580001);
    }
    spawn {
        SetNpcAnimation(2, 0x580018);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        loop 5 {
            loop 5 {
                SI_VAR(0) -= 2;
                SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                sleep 1;
            }
            loop 5 {
                SI_VAR(0) += 2;
                SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                sleep 1;
            }
        }
        SetNpcAnimation(2, 0x580001);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 16;
        loop 50 {
            RandInt(32, SI_VAR(3));
            RandInt(50, SI_VAR(4));
            SI_VAR(3) += SI_VAR(0);
            SI_VAR(4) += SI_VAR(1);
            PlayEffect(7, 1, SI_VAR(3), SI_VAR(4), SI_VAR(2), 1, 1, 0, 0, 0, 0, 0, 0, 0);
            sleep 1;
        }
    }
    SetPlayerAnimation(0xC0005);
    sleep 10;
    spawn {
        SetPlayerAnimation(0xC0006);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ShowMessageAtWorldPos(0x14016D, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    }
    SI_VAR(0) = 0;
    SI_VAR(1) = 45;
    loop 20 {
        InterpPlayerYaw(SI_VAR(0), 0);
        SI_VAR(0) += SI_VAR(1);
        SI_VAR(1) += 2;
        sleep 1;
    }
    SetPlayerAnimation(0xC001E);
    loop 20 {
        InterpPlayerYaw(SI_VAR(0), 0);
        SI_VAR(0) += SI_VAR(1);
        SI_VAR(1) -= 2;
        sleep 1;
    }
    InterpPlayerYaw(270, 0);
});

Script N(script_802490EC) = SCRIPT({
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcAnimation(1, 0x580012);
        SI_VAR(0) += 10;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 10);
    }
    spawn {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcAnimation(2, 0x580012);
        SI_VAR(0) -= 10;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 10);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    loop 4 {
        SI_VAR(1) += 2;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    SetPlayerAnimation(0xD0008);
    loop 5 {
        SI_VAR(1) += 4;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80249298) = SCRIPT({
    InterpNpcYaw(1, 270, 3);
    sleep 10;
    spawn {
        loop {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) -= 22;
            SI_VAR(1) += 30;
            SI_VAR(2) += 2;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    spawn {
        SetNpcAnimation(1, 0x580014);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, 364, 68, 0);
        NpcMoveTo(1, 84, 68, 0);
    }
    spawn {
        SetNpcAnimation(2, 0x580014);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, 396, 72, 0);
        NpcMoveTo(2, 116, 72, 0);
    }
});

Script N(script_80249440) = SCRIPT({
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 120, 14, 0);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 40;
    MakeLerp(120, 0, 8, 0);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 450, 0);
});

Script N(script_8024959C) = SCRIPT({
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 120, 14, 8);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_8024964C) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFEAC, 0, 0xFFFFFFE2);
    SetPanTarget(0, 0xFFFFFEAC, 0, 0xFFFFFFE2);
    SetCamDistance(0, 275.0);
    SetCamPitch(0, 17.0, -13.0);
    SetCamPosA(0, -310.0, 32.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_80249718) = SCRIPT({
    UseSettingsFrom(0, 380, 30, 10);
    SetPanTarget(0, 380, 30, 10);
    SetCamDistance(0, 350.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_802497B4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetMusicTrack(0, 102, 0, 8);
    SetNpcPos(0xFFFFFFFC, 440, 65, 0);
    SetNpcYaw(0xFFFFFFFC, 270);
    RotateModel(125, 80, 0, -1, 0);
    RotateModel(128, 80, 0, 1, 0);
    RotateModel(124, 80, 0, -1, 0);
    RotateModel(127, 80, 0, 1, 0);
    await N(script_8024964C);
    sleep 30;
    spawn N(script_80249440);
    SetNpcAnimation(0, 0x800004);
    SetNpcPos(0, 0xFFFFFE2A, 0, 0xFFFFFFE2);
    SetNpcSpeed(0, 3.0);
    NpcMoveTo(0, 0xFFFFFEDE, 0xFFFFFFE2, 0);
    SetNpcAnimation(0, 0x800002);
    sleep 10;
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x140161);
    sleep 10;
    await N(script_80249718);
    LoadPath(30, N(vectorList_802489B0), 5, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcAnimation(0xFFFFFFFC, 0x200002);
    SetNpcPos(0, 100, 0, 20);
    SetNpcFlagBits(0, 512, 1);
    SetNpcAnimation(0, 0x800004);
    NpcMoveTo(0, 300, 20, 0);
    SetNpcAnimation(0, 0x800002);
    sleep 10;
    SetCamDistance(0, 325.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x140162);
    InterpPlayerYaw(90, 5);
    SetPlayerAnimation(0xC0012);
    SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x140163);
    SpeakToPlayer(0, 0x800006, 0x800002, 5, 0x140164);
    InterpPlayerYaw(270, 5);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x140165);
    SpeakToPlayer(0, 0x800007, 0x800007, 5, 0x140166);
    SetNpcAnimation(0, 0x800002);
    EndSpeech(0, 0x800006, 0x800002, 5);
    SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x140167);
    sleep 30;
    SetPlayerAnimation(0xA0001);
    await N(script_8024964C);
    spawn N(script_8024959C);
    SetNpcAnimation(3, 0x600003);
    SetNpcPos(3, 0xFFFFFE2A, 0, 0xFFFFFFE2);
    SetNpcSpeed(0, 5.0);
    NpcMoveTo(3, 0xFFFFFEAC, 0xFFFFFFE2, 0);
    SetNpcAnimation(3, 0x600001);
    sleep 10;
    SpeakToNpc(3, 0x600004, 0x600001, 0, 0, 0x140168);
    SetNpcAnimation(0, 0x800002);
    SetNpcYaw(0, 270);
    SetNpcYaw(0xFFFFFFFC, 270);
    UseSettingsFrom(0, 250, 30, 10);
    SetPanTarget(0, 250, 30, 10);
    SetCamDistance(0, 325.0);
    SetCamPitch(0, 17.0, -11.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    SetNpcPos(3, 50, 0, 0xFFFFFFF6);
    SetNpcAnimation(3, 0x600003);
    NpcMoveTo(3, 180, 0xFFFFFFF6, 0);
    SetNpcAnimation(3, 0x600001);
    sleep 10;
    SpeakToNpc(0, 0x800006, 0x800002, 0, 3, 0x140169);
    SpeakToNpc(3, 0x600004, 0x600001, 0, 0, 0x14016A);
    SetNpcAnimation(0, 0x80000D);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetNpcAnimation(0, 0x800002);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 3, 0x14016B);
    sleep 10;
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamSpeed(0, 4.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    InterpNpcYaw(0, 270, 10);
    sleep 10;
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x14016C);
    sleep 10;
    SetNpcPos(1, 48, 0, 70);
    SetNpcPos(2, 100, 0, 70);
    SetNpcFlagBits(1, 512, 1);
    SetNpcFlagBits(2, 512, 1);
    sleep 10;
    await N(script_80248A10);
    await N(script_80248C9C);
    SetNpcAnimation(0xFFFFFFFC, 0x200008);
    LoadPath(15, N(vectorList_802489EC), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SpeakToPlayer(0xFFFFFFFC, 0x20000A, 0x200002, 5, 0x14016E);
    SetNpcVar(0, 0, 0);
    spawn {
        NpcFlyTo(0xFFFFFFFC, 410, 80, 10, 7, 0, 0);
        loop 2 {
            NpcFlyTo(0xFFFFFFFC, 400, 70, 10, 5, 0, 0);
            PlayEffect(6, 0, 400, 70, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            NpcFlyTo(0xFFFFFFFC, 410, 80, 10, 5, 0, 0);
        }
        NpcFlyTo(0xFFFFFFFC, 360, 80, 10, 7, 0, 0);
        loop {
            NpcFlyTo(0xFFFFFFFC, 360, 70, 10, 5, 0, 0);
            PlayEffect(6, 0, 360, 70, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            NpcFlyTo(0xFFFFFFFC, 350, 80, 10, 5, 0, 0);
            GetNpcVar(0, 0, SI_VAR(0));
            if (SI_VAR(0) == 1) {
                break;
            }
        }
        SetNpcVar(0, 0, 2);
    }
    SpeakToPlayer(0, 0x800006, 0x800002, 5, 0x14016F);
    sleep 20;
    SpeakToPlayer(0, 0x800008, 0x800002, 5, 0x140170);
    SetNpcVar(0, 0, 1);
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
    }
    SetNpcAnimation(0, 0x800004);
    NpcMoveTo(0, 310, 20, 5);
    SetNpcAnimation(0, 0x800016);
    sleep 3;
    InterpPlayerYaw(90, 0);
    PlaySoundAt(225, 0, 350, 80, 10);
    PlayEffect(67, 0, 350, 80, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0);
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    SetNpcSpeed(0xFFFFFFFC, 7.5);
    NpcFlyTo(0xFFFFFFFC, 500, 130, 10, 0, 0, 0);
    SpeakToPlayer(0xFFFFFFFE, 0xC001E, 0xC001E, 5, 0x140171);
    sleep 10;
    SetNpcAnimation(0, 0x800002);
    SpeakToPlayer(0, 0x800006, 0x800002, 5, 0x140172);
    sleep 10;
    parallel {
        loop {
            NpcFacePlayer(0, 0);
            sleep 1;
        }
    }
    await N(script_802490EC);
    SpeakToPlayer(0xFFFFFFFE, 0xD0008, 0xD0008, 5, 0x140173);
    await N(script_80249298);
    sleep 30;
    await N(script_ExitSingleDoor_802407A0);
    PanToTarget(0, 0, 0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_00A6A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_8024A6B0_AE5550

// rodata: D_8024A6B8_AE5558

// rodata: D_8024A6C0_AE5560

// rodata: D_8024A6C8_AE5568

// rodata: D_8024A6D0_AE5570

// rodata: D_8024A6D8_AE5578

// rodata: D_8024A6E0_AE5580

// rodata: D_8024A6E8_AE5588
