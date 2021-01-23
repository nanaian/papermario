#include "mgm_01.h"

s32 pad_0001CC[1];
s32 pad_0017A8[2];
Script N(script_80241800);
Script N(script_8024189C);
Script N(main);
s32 pad_001A64[3];
s32 unk_missing_80241A9C[11];
s32 N(byteTable_80241AC8)[3];
s32 N(byteTable_80241AD4)[3];
s32 N(byteTable_80241AE0)[3];
f32 N(floatTable_80241AEC)[11];
f32 N(floatTable_80241B18)[11];
s32 N(unk_80241B44)[11];
s32 N(unk_80241B70)[11];
s32 N(unk_80241B9C)[44];
Script N(script_80241C4C);
Script N(script_80242310);
Script N(script_80242330);
Script N(script_80242350);
Script N(script_80242370);
Script N(script_80242390);
Script N(script_802423B0);
Script N(script_802423D0);
Script N(script_802423F0);
Script N(script_80242410);
Script N(script_80242430);
Script N(script_80242450);
Script N(script_80242470);
Script N(script_802424A4);
Script N(script_802424D8);
Script N(script_Interact_802424F4);
Script N(script_Init_80242998);
StaticNpc N(npcGroup_80242A38)[1];
NpcGroupList N(npcGroupList_80242C28);
Script N(script_80242C40);
Script N(script_MakeEntities);
s32 pad_002CD8[2];
s32 N(unk_80242CE0)[128];
s32 N(unk_80242EE0)[8];
s32 N(unk_80242F00)[128];
s32 N(unk_80243100)[8];
s32 N(unk_80243120)[128];
s32 N(unk_80243320)[8];
s32 N(unk_80243340)[128];
s32 N(unk_80243540)[8];
s32 N(unk_80243560)[20];
s32 N(unk_802435E8)[11];
const char D_80243614_E15D74[8]; // "mgm_00"
s32 pad_00361C[1];

// text: func_80240000_E12760

s32 pad_0001CC[] = {
    0x00000000,
};

// text: func_SyncDisplayedScore_E12930

// text: func_802403C4_E12B24

// text: func_802403FC_E12B5C

// text: func_80240438_E12B98

// text: func_8024045C_E12BBC

// text: func_8024050C_E12C6C

// text: func_8024058C_E12CEC

// text: func_802406C4_E12E24

// text: func_802407E4_E12F44

// text: func_8024084C_E12FAC

// text: func_802408EC_E1304C

// text: func_80240AAC_E1320C

// text: func_80240BF4_E13354

// text: func_CalculateScore_E133B4

// text: func_80240CD0_E13430

// text: func_80240D84_E134E4

// text: func_80240DB8_E13518

// text: func_80240ECC_E1362C

// text: func_80240F90_E136F0

// text: func_80241090_E137F0

// text: func_80241234_E13994

// text: func_MonitorGame_E13C70

// text: func_80241574_E13CD4

// text: func_802415EC_E13D4C

// text: func_80241690_E13DF0

// text: func_802416CC_E13E2C

// text: func_802416F8_E13E58

// text: func_80241760_E13EC0

// text: func_80241780_E13EE0

s32 pad_0017A8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 200.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190007,
};

Script N(script_80241800) = SCRIPT({
0:
    func_80240000_E12760();
    TranslateModel(0, SI_VAR(0), 0, SI_VAR(1));
    RotateModel(2, SI_VAR(2), 1, 0, 0);
    RotateModel(2, SI_VAR(3), 0, 0, 1);
    sleep 1;
    goto 0;
});

Script N(script_8024189C) = SCRIPT({
    EnableModel(19, 0);
    EnableModel(17, 0);
    EnableModel(15, 0);
    EnableModel(13, 0);
    EnableModel(22, 0);
    EnableModel(24, 0);
    EnableModel(26, 0);
    EnableModel(29, 0);
    EnableModel(31, 0);
    EnableModel(34, 0);
    EnableModel(36, 0);
});

Script N(main) = SCRIPT({
    SetSpriteShading(0x80000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SetRenderMode(0, 21);
    MakeNpcs(0, N(npcGroupList_80242C28));
    await N(script_MakeEntities);
    spawn N(script_80241800);
    spawn N(script_8024189C);
    spawn N(script_802424A4);
});

s32 pad_001A64[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241A70) = {
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

s32 unk_missing_80241A9C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

s32 N(byteTable_80241AC8)[] = {
    0x839CB5CE, 0xE7001932, 0x4B647D00,
};

s32 N(byteTable_80241AD4)[] = {
    0x383C383C, 0x383C383C, 0x383C3800,
};

s32 N(byteTable_80241AE0)[] = {
    0x1EE21EE2, 0x1EE21EE2, 0x1EE21E00,
};

f32 N(floatTable_80241AEC)[] = {
    -105.0f, -80.0f, -55.0f, -30.0f, -5.0f, -105.0f, -80.0f, -55.0f,
    -30.0f, -5.0f, 20.0f,
};

f32 N(floatTable_80241B18)[] = {
    157.0f, 157.0f, 157.0f, 157.0f, 157.0f, 133.0f, 133.0f, 133.0f,
    133.0f, 133.0f, 133.0f,
};

s32 N(unk_80241B44)[] = {
    0x00000013, 0x00000011, 0x0000000F, 0x0000000D, 0x00000016, 0x00000018, 0x0000001A, 0x0000001D,
    0x0000001F, 0x00000022, 0x00000024,
};

s32 N(unk_80241B70)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000002,
    0x00000002, 0x00000003, 0x00000003,
};

s32 N(unk_80241B9C)[] = {
    0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000003, 0x00000001, 0x00000000, 0x00000001,
    0x00000000, 0x00000003, 0x00000002, 0x00000003, 0x00000000, 0x00000001, 0x00000002, 0x00000000,
    0x00000002, 0x00000000, 0x00000001, 0x00000001, 0x00000003, 0x00000000, 0x00000001, 0x00000003,
    0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000000, 0x00000001, 0x00000002,
    0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001, 0x00000003, 0x00000003, 0x00000001,
    0x00000001, 0x00000002, 0x00000000, 0x00000000,
};

Script N(script_80241C4C) = SCRIPT({
0:
    SI_VAR(10) = 0;
    SI_VAR(11) = 0;
    GetNpcVar(0, 4, SI_VAR(12));
    loop 11 {
        func_8024045C_E12BBC(SI_VAR(10));
        match SI_VAR(0) {
            == 0 {
                EnableModel(SI_VAR(1), 0);
                func_8024050C_E12C6C(SI_VAR(10), 1);
            }
            == 2 {
                DisablePlayerInput(1);
                func_8024058C_E12CEC(SI_VAR(10));
                EnableModel(SI_VAR(1), 1);
                func_8024050C_E12C6C(SI_VAR(10), 3);
            }
            == 4 {
                if (SI_VAR(2) != 3) {
                    if (SI_VAR(3) < SI_VAR(12)) {
                        DisablePlayerInput(0);
                    }
                }
                func_802407E4_E12F44(SI_VAR(10));
                func_8024050C_E12C6C(SI_VAR(10), 5);
            }
            == 6 {
                func_802408EC_E1304C(SI_VAR(10));
                func_8024050C_E12C6C(SI_VAR(10), 7);
            }
            == 8 {
                func_80240BF4_E13354(SI_VAR(10));
                func_8024050C_E12C6C(SI_VAR(10), 9);
            }
        }
        match SI_VAR(0) {
            == 3 {
                func_802406C4_E12E24(SI_VAR(10));
                if (SI_VAR(3) == 1) {
                    func_8024050C_E12C6C(SI_VAR(10), 4);
                }
            }
            == 5 {
                func_8024084C_E12FAC(SI_VAR(10));
                if (SI_VAR(3) == 1) {
                    func_8024050C_E12C6C(SI_VAR(10), 6);
                }
            }
            == 7 {
                func_80240AAC_E1320C(SI_VAR(10));
                if (SI_VAR(3) == 1) {
                    func_8024050C_E12C6C(SI_VAR(10), 8);
                }
            }
            == 9 {
                if (SI_VAR(2) == 3) {
                    SI_VAR(11) = 1;
                } else {
                    if (SI_VAR(3) == SI_VAR(12)) {
                        SI_VAR(11) = 2;
                    }
                }
            }
        }
        if (SI_VAR(0) >= 2) {
            func_80240ECC_E1362C(SI_VAR(10));
            TranslateModel(SI_VAR(1), SI_VAR(5), SI_VAR(6), SI_VAR(7));
            RotateModel(SI_VAR(1), SI_VAR(8), 0.0, 1.0, 0.0);
            ScaleModel(SI_VAR(1), SI_VAR(9), SI_VAR(9), 1.0);
        }
        SI_VAR(10) += 1;
    }
    if (SI_VAR(11) != 0) {
        goto 99;
    }
    sleep 1;
    goto 0;
99:
    func_80240438_E12B98();
    spawn {
        sleep 15;
        0x802D5FD8();
    }
    match SI_VAR(11) {
        == 1 {
            0x802D617C(8215, 0);
            sleep 10;
            0x802D617C(8215, 0);
            sleep 10;
            func_80240DB8_E13518();
            TranslateModel(SI_VAR(1), SI_VAR(5), SI_VAR(6), SI_VAR(7));
            sleep 15;
            SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x80034);
        }
        == 2 {
            match SI_VAR(12) {
                == 4 {
                    func_CalculateScore_E133B4();
                    SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x80035);
                }
                == 6 {
                    func_CalculateScore_E133B4();
                    SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x80036);
                }
                == 8 {
                    SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x80037);
                    func_80240D84_E134E4();
                    0x802D617C(1020, 0);
                    sleep 30;
                    func_CalculateScore_E133B4();
                    SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x80038);
                }
            }
            ShowCoinCounter(1);
            sleep 10;
            func_80240CD0_E13430();
            sleep 15;
            ShowCoinCounter(0);
            sleep 5;
            SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x8003A);
        }
    }
    sleep 10;
    func_80240F90_E136F0();
    spawn N(script_80242470);
    sleep 1;
    DisablePlayerInput(0);
    goto 0;
});

Script N(script_80242310) = SCRIPT({
    func_80241090_E137F0(0);
});

Script N(script_80242330) = SCRIPT({
    func_80241090_E137F0(1);
});

Script N(script_80242350) = SCRIPT({
    func_80241090_E137F0(2);
});

Script N(script_80242370) = SCRIPT({
    func_80241090_E137F0(3);
});

Script N(script_80242390) = SCRIPT({
    func_80241090_E137F0(4);
});

Script N(script_802423B0) = SCRIPT({
    func_80241090_E137F0(5);
});

Script N(script_802423D0) = SCRIPT({
    func_80241090_E137F0(6);
});

Script N(script_802423F0) = SCRIPT({
    func_80241090_E137F0(7);
});

Script N(script_80242410) = SCRIPT({
    func_80241090_E137F0(8);
});

Script N(script_80242430) = SCRIPT({
    func_80241090_E137F0(9);
});

Script N(script_80242450) = SCRIPT({
    func_80241090_E137F0(10);
});

Script N(script_80242470) = SCRIPT({
    SetNpcVar(0, 2, -1);
    func_80241574_E13CD4();
});

Script N(script_802424A4) = SCRIPT({
    func_802415EC_E13D4C();
    spawn N(script_80242470);
    spawn N(script_80241C4C);
});

Script N(script_802424D8) = SCRIPT({
    func_80241690_E13DF0();
});

Script N(script_Interact_802424F4) = SCRIPT({
    GetSelfVar(1, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetSelfVar(1, 1);
    }
    GetSelfVar(2, SI_VAR(0));
    if (SI_VAR(0) == -1) {
        if (SI_SAVE_FLAG(365) == 0) {
            func_80241780_E13EE0();
            SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x8002D);
            SI_SAVE_FLAG(365) = 1;
        } else {
            SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x8002E);
        }
        ShowCoinCounter(1);
        func_802416CC_E13E2C();
        if (SI_VAR(10) < 10) {
            ContinueSpeech(0, 0x830004, 0x830001, 0, 0x80039);
            func_80241760_E13EC0();
            sleep 12;
            spawn N(script_802424D8);
            GotoMap(D_80243614_E15D74, 1);
            sleep 100;
            return;
        }
        ShowChoice(0x1E004E);
        if (SI_VAR(0) == 3) {
            func_80241760_E13EC0();
            sleep 5;
            ContinueSpeech(0, 0x830004, 0x830001, 0, 0x80032);
            spawn N(script_802424D8);
            GotoMap(D_80243614_E15D74, 1);
            sleep 100;
            return;
        }
        GetSelfVar(6, SI_VAR(1));
        if (SI_VAR(1) < 100) {
            SI_VAR(1) += 1;
            SetSelfVar(6, SI_VAR(1));
        }
        spawn {
            func_MonitorGame_E13C70();
        }
        match SI_VAR(0) {
            == 0 {
                SetNpcVar(0, 4, 4);
                ContinueSpeech(0, 0x830004, 0x830001, 0, 0x8002F);
            }
            == 1 {
                SetNpcVar(0, 4, 6);
                ContinueSpeech(0, 0x830004, 0x830001, 0, 0x80030);
            }
            == 2 {
                SetNpcVar(0, 4, 8);
                ContinueSpeech(0, 0x830004, 0x830001, 0, 0x80031);
            }
            == 3 {
            }
        }
        func_80241760_E13EC0();
        EndSpeech(0, 0x830004, 0x830001, 5);
        sleep 5;
        func_80241234_E13994();
        sleep 10;
        EndSpeech(0, 0x830004, 0x830001, 5);
        0x802D5FF8(133, 0);
        sleep 10;
        EndSpeech(0, 0x830004, 0x830001, 5);
        func_802403FC_E12B5C();
        SetNpcVar(0, 3, -1);
        SetNpcVar(0, 2, 0);
        sleep 1;
    } else {
        func_802416F8_E13E58();
        SpeakToPlayer(0, 0x830004, 0x830001, 0, 0x80033);
    }
});

Script N(script_Init_80242998) = SCRIPT({
    SetNpcPos(-1, 75, -1, 100);
    InterpNpcYaw(-1, 270, 0);
    SetNpcVar(0, 2, -1);
    SetNpcVar(0, 1, 0);
    SetNpcVar(0, 6, 0);
    BindNpcInteract(-1, N(script_Interact_802424F4));
});

StaticNpc N(npcGroup_80242A38)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241A70),
        .pos = { 0.0, 0.0, -20.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_80242998),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A0061,
    },
};

NpcGroupList N(npcGroupList_80242C28) = {
    NPC_GROUP(N(npcGroup_80242A38), 0x00000000),
    {},
};

Script N(script_80242C40) = SCRIPT({
    DisablePlayerInput(1);
    func_80241780_E13EE0();
    ShowMessageAtScreenPos(0x8003B, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAFDC, 0xFFFFFFC9, 0xFFFFFFFE, 0xFFFFFFB0, 0, 0x80000000);
    AssignScript(N(script_80242C40));
});

s32 pad_002CD8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80242CE0)[] = {
    0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEEE6, 0xEBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBEB6,
    0xEB666666, 0x66666666, 0x66666666, 0x66666EB6, 0xEB633333, 0x33333333, 0x33333332, 0x24403EB6,
    0xEB633333, 0x33333333, 0x33333330, 0x4FF43EB6, 0xEB633333, 0x33333333, 0x33333204, 0xFFF73EB6,
    0xEB633333, 0x33333333, 0x33333347, 0xFFF73EB6, 0xEB633333, 0x33333333, 0x33333307, 0x7FF43EB6,
    0xEB633333, 0x33333333, 0x33333310, 0x4FF03EB6, 0xEB633333, 0x33333333, 0x33333320, 0x7F703EB6,
    0xEB633333, 0x33399963, 0x33333224, 0xFF713EB6, 0xEB633333, 0x3CCDCB86, 0x63333317, 0xFF413EB6,
    0xEB633333, 0xCDDDDDDB, 0x86333307, 0xFF423EB6, 0xEB63333C, 0xDDD58ADD, 0xC6633334, 0x77023EB6,
    0xEB63333E, 0xEEE6EFEE, 0xE8633333, 0x33333EB6, 0xEB63339E, 0xEEE8EFEE, 0xED663333, 0x33333EB6,
    0xEB6333AD, 0xDDD8DFDD, 0xDD663333, 0x33333EB6, 0xEB6333AD, 0xCDD8DFDC, 0xDD663333, 0x33333EB6,
    0xEB6333AB, 0xCCC8CFCC, 0xCC663333, 0x33333EB6, 0xEB6333AC, 0xBBC8CFCB, 0xCC663333, 0x33333EB6,
    0xEB6333AA, 0xCAC8CFAC, 0xA8663333, 0x33333EB6, 0xEB63333A, 0xACA8AFCA, 0xA8633333, 0x33333EB6,
    0xEB633339, 0xAAAAFFAA, 0x86633333, 0x33333EB6, 0xEB633333, 0x9AAAAAA8, 0x66333333, 0x33333EB6,
    0xEB633333, 0x388AAA86, 0x63333333, 0x33333EB6, 0xEB633333, 0x33388663, 0x33333333, 0x33333EB6,
    0xEB633333, 0x33333333, 0x33333333, 0x33333EB6, 0xEB633333, 0x33333333, 0x33333333, 0x33333EB6,
    0xEC633333, 0x33333333, 0x33333333, 0x33333EB6, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEEB6,
    0xEBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBB6, 0x66666666, 0x66666666, 0x66666666, 0x66666666,
};

s32 N(unk_80242EE0)[] = {
    0x005B0065, 0x006B006D, 0x29538AC7, 0x93838C65, 0xBC09BC8B, 0xD549E58B, 0xE58DE64F, 0xF691F7BD,
};

s32 N(unk_80242F00)[] = {
    0xCDDDDDDD, 0xDDDDDDDD, 0xDDDDDDDD, 0xDDDDDDD5, 0xDAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAADA5,
    0xDA555555, 0x55555555, 0x55555555, 0x55555DA5, 0xDA633333, 0x33333333, 0x33333311, 0x11112DA5,
    0xDA633333, 0x33333333, 0x3333227F, 0xFFF70DA5, 0xDA6333CC, 0x9633333C, 0xC96321FF, 0xFFF70DA5,
    0xDA633CCC, 0xC96333CC, 0xCC9607FF, 0x11110DA5, 0xDA633C99, 0xC99633C9, 0x9C991FF7, 0x7F703DA5,
    0xDA63CCAC, 0xEB960CCA, 0xCEB97FFF, 0xFFF70DA5, 0xDA63CCBC, 0xEEB60CCB, 0xCEEB1FF7, 0x11FF1DA5,
    0xDA63CCBF, 0xEEFE96CB, 0xFEEB4171, 0x17FF1DA5, 0xDA63CEBF, 0xEFFEC96B, 0xFEEB6117, 0xFFF12DA5,
    0xDA63CEBF, 0xEF99C996, 0xFEE9617F, 0xFF123DA5, 0xDA633CEE, 0xFFACCB96, 0x8EB96017, 0x71233DA5,
    0xDA633CCC, 0xFEBDCEB6, 0x8B960033, 0x33333DA5, 0xDA6333A9, 0xFCBFCEB6, 0x49600333, 0x33333DA5,
    0xDA633330, 0xECBFEEB6, 0x00003333, 0x33333DA5, 0xDA6333CC, 0xCCBFEE96, 0x89633333, 0x33333DA5,
    0xDA633CCC, 0xCCEEEB96, 0x8C9633B3, 0x33333DA5, 0xDA633C99, 0xCEEEB964, 0x4C9963E3, 0x33333DA5,
    0xDA63CCAC, 0xEBA99686, 0xCEB96BFB, 0x33333DA5, 0xDA63CCBC, 0xEEB4088B, 0xCEEB60E3, 0x33333DA5,
    0xDA63CCBF, 0xEEB60CCB, 0xFEEB60B3, 0x33333DA5, 0xDA63CEBF, 0xEEB60CEB, 0xFEEB6023, 0x33333DA5,
    0xDA63CEBF, 0xEE960CEB, 0xFEE96023, 0x33333DA5, 0xDA633CEE, 0xEB9603CE, 0xEEB96023, 0x33333DA5,
    0xDA633CCC, 0xB96003CC, 0xCB960033, 0x33333DA5, 0xDA6333A9, 0x9600333A, 0x99600333, 0x33333DA5,
    0xDA533330, 0x00033333, 0x00003333, 0x33333DA5, 0xCDDDDDDD, 0xDDDDDDDD, 0xDDDDDDDD, 0xDDDDDDA5,
    0xDAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAA5, 0x55555555, 0x55555555, 0x55555555, 0x55555555,
};

s32 N(unk_80243100)[] = {
    0x78014109, 0x9001A001, 0x828393C1, 0xA3477BDF, 0xAC03BC8B, 0xE58BE64F, 0xEED5F691, 0xE725FFFF,
};

s32 N(unk_80243120)[] = {
    0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEEE9, 0xE9999999, 0x99999999, 0x99999999, 0x99999E99,
    0xE9999999, 0x99999999, 0x99999999, 0x99999E99, 0xE9966666, 0x66666666, 0x66666666, 0x66666E99,
    0xE9966666, 0x66666666, 0x66666666, 0x66666E99, 0xE9966666, 0x66666666, 0x66666666, 0x66666E99,
    0xE9966666, 0x66666666, 0x66666666, 0x66666E99, 0xE9966666, 0x66666666, 0x66666666, 0x66646E99,
    0xE9966666, 0x66666666, 0x66400000, 0x00166E99, 0xE9966646, 0x66666646, 0x66122222, 0x22066E99,
    0xE9966461, 0x36663164, 0x64088888, 0x88246E99, 0xE9964615, 0x04640016, 0x61788888, 0x88236E99,
    0xE996615F, 0xB061BF53, 0x40888222, 0x22036E99, 0xE99610FF, 0xF505FFF5, 0x07CC7000, 0x01446E99,
    0xE99661BF, 0xFF5FFFF5, 0x2CCC2277, 0x70366E99, 0xE996661B, 0xFFFFFF50, 0x7CCC7CCC, 0xC7046E99,
    0xE9966660, 0xBFFFB031, 0x7CCCCC77, 0xCC706E99, 0xE9966640, 0xBFFFB061, 0x7CCC7000, 0x7CC23E99,
    0xE996640B, 0xFFFFF504, 0x12720107, 0xADA04E99, 0xE99630BF, 0xFFBFFFB0, 0x630102AD, 0xDA036E99,
    0xE99615FF, 0xF50BFFF5, 0x3302ADDD, 0xD2346E99, 0xE99645FF, 0x5140FFB0, 0x402DDDDD, 0x21666E99,
    0xE99660B5, 0x34635B04, 0x6307DDD2, 0x16666E99, 0xE9964301, 0x66660034, 0x66402721, 0x66666E99,
    0xE9966666, 0x66666666, 0x66666666, 0x66666E99, 0xE9966666, 0x66666666, 0x66666666, 0x66666E99,
    0xE9966666, 0x66666666, 0x66666666, 0x66666E99, 0xE9966666, 0x66666666, 0x66666666, 0x66666E99,
    0xE9966666, 0x66666666, 0x66666666, 0x66666E99, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEEEEE99,
    0xE9999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x99999999,
};

s32 N(unk_80243320)[] = {
    0x08C10181, 0x40C10241, 0x02C139CF, 0x03418A03, 0xE14793C1, 0xC3838C63, 0xF345F501, 0xF691FFFF,
};

s32 N(unk_80243340)[] = {
    0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAA3, 0xA3333333, 0x33333333, 0x33333333, 0x33333A33,
    0xA3333333, 0x33333333, 0x33333333, 0x33333A33, 0xA3322222, 0x22222288, 0x66622222, 0x22222A33,
    0xA3322222, 0x22222866, 0x66466222, 0x22222A33, 0xA33222E2, 0x22228666, 0x66662222, 0x2E222A33,
    0xA33222E2, 0x22226666, 0x66664422, 0x2E222A33, 0xA33222EE, 0x66627777, 0x77774666, 0xEE222A33,
    0xA33222BE, 0x66667777, 0x77776666, 0xEB222A33, 0xA332222B, 0xE4466757, 0x7576644E, 0xB2222A33,
    0xA3322222, 0xB7DF6457, 0x7546FD7B, 0x22222A33, 0xA3322222, 0x77FF0655, 0x5560FF77, 0x22222A33,
    0xA3322222, 0x77FF00DD, 0xDD00FF77, 0x22222A33, 0xA33B22BE, 0xD5DF0DEE, 0xEED0FD5D, 0xEB22BA33,
    0xA33EBBEE, 0xEEEEEEBE, 0xEBEEEEEE, 0xEEBBEA33, 0xA33E7EEE, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEE7EA33,
    0xA3375EEE, 0xEEEEEEEE, 0xEEEEEEEE, 0xEEE57A33, 0xA3355BEE, 0xE4EEEEEE, 0xEEEEEE4E, 0xEEB55A33,
    0xA335FFBE, 0xE4BEEEB4, 0x4BEEEB4E, 0xEBFF5A33, 0xA33FFFFB, 0xEB4BF444, 0x444FB4BE, 0xBFFFFA33,
    0xA33FFFFF, 0xEE44F444, 0x444F44EE, 0xFFFFFA33, 0xA33FFF99, 0xEE444444, 0x444444EE, 0x99FFFA33,
    0xA33F9999, 0xBEB44888, 0x88844BEB, 0x9999FA33, 0xA33999F9, 0x9EE88888, 0x88888EE9, 0x9F999A33,
    0xA33F9999, 0x1EE8F888, 0x888F8EE1, 0x9999FA33, 0xA3399111, 0x9BEBFF88, 0x88FFBEB9, 0x11199A33,
    0xA3311CCC, 0x98EEEEEE, 0xEEEEEE89, 0xCCC11A33, 0xA33CCCCC, 0x99EEEEEE, 0xEEEEEE99, 0xCCCCCA33,
    0xA33CCC99, 0x99FBEEB9, 0x9BEEBF99, 0x99CCCA33, 0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAA33,
    0xA3333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333,
};

s32 N(unk_80243540)[] = {
    0x00011007, 0x310948A1, 0x59852B01, 0xC9854403, 0xAA876B5B, 0xA2B9ACCF, 0xD4C7AD8F, 0xE697E739,
};

s32 N(unk_80243560)[] = {
    N(unk_80242CE0), N(unk_80242EE0), 0x00200020, 0x00000002, 0x00000000, N(unk_80242F00), N(unk_80243100), 0x00200020,
    0x00000002, 0x00000000, N(unk_80243120), N(unk_80243320), 0x00200020, 0x00000002, 0x00000000, N(unk_80243340),
    N(unk_80243540), 0x00200020, 0x00000002, 0x00000000,
};

// rodata: D_802435B0_E15D10

// rodata: D_802435B8_E15D18

// rodata: D_802435C0_E15D20

// rodata: D_802435C8_E15D28

// rodata: D_802435D0_E15D30

// rodata: D_802435D8_E15D38

// rodata: D_802435E0_E15D40

s32 N(unk_802435E8)[] = {
    N(script_80242310), N(script_80242330), N(script_80242350), N(script_80242370), N(script_80242390), N(script_802423B0), N(script_802423D0), N(script_802423F0),
    N(script_80242410), N(script_80242430), N(script_80242450),
};

// rodata: D_80243614_E15D74

s32 pad_00361C[] = {
    0x00000000,
};
