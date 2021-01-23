#include "mgm_02.h"

s32 pad_0023C4[3];
s32 pad_0023F8[2];
Script N(script_80242450);
Script N(main);
s32 pad_002644[3];
Script N(script_80242650);
s32 unk_missing_8024268C[11];
s32 N(unk_8024273C)[105];
s32 N(unk_802428E0)[35];
s32 N(unk_8024296C)[35];
s32 N(intTable_802429F8)[10];
Script N(script_80242A20);
Script N(script_80242A3C);
Script N(script_80242A90);
Script N(script_80242AE8);
Script N(script_80242B7C);
Script N(script_80242BD4);
Script N(script_80242C60);
Script N(script_80243274);
Script N(script_80243888);
Script N(script_80243E9C);
Script N(script_80243F74);
Script N(script_802441E4);
Script N(script_80244A28);
Script N(script_80244A44);
Script N(script_80244A60);
Script N(script_80244FD4);
Script N(script_8024502C);
Script N(script_Interact_80245048);
Script N(script_Init_802454E0);
StaticNpc N(npcGroup_80245548)[1];
Script N(script_Init_80245738);
Script N(script_Init_802458D8);
Script N(script_Init_80245A58);
StaticNpc N(npcGroup_80245B38)[1];
StaticNpc N(npcGroup_80245D28)[1];
StaticNpc N(npcGroup_80245F18)[1];
StaticNpc N(npcGroup_80246108)[1];
StaticNpc N(npcGroup_802462F8)[1];
StaticNpc N(npcGroup_802464E8)[1];
StaticNpc N(npcGroup_802466D8)[1];
StaticNpc N(npcGroup_802468C8)[1];
StaticNpc N(npcGroup_80246AB8)[1];
StaticNpc N(npcGroup_80246CA8)[1];
StaticNpc N(npcGroup_80246E98)[10];
NpcGroupList N(npcGroupList_802481F8);
s32 pad_008294[3];
s32 N(unk_802482A0)[128];
s32 N(unk_802484A0)[8];
s32 N(unk_802484C0)[8];
const char D_802485F0_E1E370[8]; // "mgm_00"
s32 pad_0085F8[2];

// text: func_80240000_E15D80

// text: func_80240430_E161B0

// text: func_80240468_E161E8

// text: func_80240544_E162C4

// text: func_80240580_E16300

// text: func_802405A4_E16324

// text: func_802405D0_E16350

// text: func_80240644_E163C4

// text: func_80240790_E16510

// text: func_80240BB0_E16930

// text: func_CalculateScore_E17B4C

// text: func_80241F38_E17CB8

// text: func_80241FE4_E17D64

// text: func_80242274_E17FF4

// text: func_802422D0_E18050

// text: func_80242314_E18094

// text: func_MonitorGame_E180C0

// text: func_802423A4_E18124

s32 pad_0023C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802423D0_E18150

s32 pad_0023F8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -300.0f, 200.0f, 200.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190008,
};

Script N(script_80242450) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFED4, 0xFFFFFFEC, 200);
    SetPanTarget(0, 250, 0xFFFFFFEC, 220);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    DisablePlayerInput(1);
    SetPlayerPos(250, 200, 220);
    SetNpcPos(0xFFFFFFFC, 250, 200, 220);
    InterpPlayerYaw(90, 0);
10:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) != 0xFFFFFFEC) {
        sleep 1;
        goto 10;
    }
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(main) = SCRIPT({
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    spawn N(script_80242450);
    MakeNpcs(0, N(npcGroupList_802481F8));
    await N(script_80242650);
    await N(script_80244FD4);
});

s32 pad_002644[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242650) = SCRIPT({

});

NpcSettings N(npcSettings_80242660) = {
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

s32 unk_missing_8024268C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_802426B8) = {
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

NpcSettings N(npcSettings_802426E4) = {
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

NpcSettings N(npcSettings_80242710) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x14,
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

s32 N(unk_8024273C)[] = {
    0x00000002, 0x00000000, 0x00000002, 0x00000000, 0x00000002, 0x00000003, 0x00000003, 0x00000003,
    0x00000003, 0x00000003, 0x00000002, 0x00000003, 0x00000002, 0x00000001, 0x00000003, 0x00000003,
    0x00000002, 0x00000003, 0x00000000, 0x00000003, 0x00000003, 0x00000002, 0x00000003, 0x00000003,
    0x00000001, 0x00000002, 0x00000003, 0x00000003, 0x00000002, 0x00000003, 0x00000003, 0x00000001,
    0x00000003, 0x00000003, 0x00000002, 0x00000002, 0x00000000, 0x00000002, 0x00000001, 0x00000002,
    0x00000003, 0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000003, 0x00000001, 0x00000003,
    0x00000002, 0x00000003, 0x00000000, 0x00000003, 0x00000003, 0x00000003, 0x00000003, 0x00000003,
    0x00000002, 0x00000003, 0x00000002, 0x00000003, 0x00000003, 0x00000001, 0x00000000, 0x00000003,
    0x00000002, 0x00000003, 0x00000003, 0x00000002, 0x00000003, 0x00000002, 0x00000003, 0x00000003,
    0x00000000, 0x00000003, 0x00000003, 0x00000001, 0x00000000, 0x00000001, 0x00000002, 0x00000003,
    0x00000003, 0x00000003, 0x00000002, 0x00000003, 0x00000000, 0x00000003, 0x00000002, 0x00000002,
    0x00000002, 0x00000003, 0x00000002, 0x00000003, 0x00000002, 0x00000003, 0x00000002, 0x00000003,
    0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000002, 0x00000003, 0x00000001, 0x00000003,
    0x00000003,
};

s32 N(unk_802428E0)[] = {
    0x00000009, 0x0000000F, 0x00000015, 0x0000001B, 0x00000021, 0x00000027, 0x0000002D, 0x0000000A,
    0x00000010, 0x00000016, 0x0000001C, 0x00000022, 0x00000028, 0x0000002E, 0x0000000B, 0x00000011,
    0x00000017, 0x0000001D, 0x00000023, 0x00000029, 0x0000002F, 0x0000000C, 0x00000012, 0x00000018,
    0x0000001E, 0x00000024, 0x0000002A, 0x00000030, 0x0000000D, 0x00000013, 0x00000019, 0x0000001F,
    0x00000025, 0x0000002B, 0x00000031,
};

s32 N(unk_8024296C)[] = {
    0x00000009, 0x0000000F, 0x00000015, 0x0000001B, 0x00000021, 0x00000027, 0x0000002D, 0x0000000A,
    0x00000010, 0x00000016, 0x0000001C, 0x00000022, 0x00000028, 0x0000002E, 0x0000000B, 0x00000011,
    0x00000017, 0x0000001D, 0x00000023, 0x00000029, 0x0000002F, 0x0000000C, 0x00000012, 0x00000018,
    0x0000001E, 0x00000024, 0x0000002A, 0x00000030, 0x0000000D, 0x00000013, 0x00000019, 0x0000001F,
    0x00000025, 0x0000002B, 0x00000031,
};

s32 N(intTable_802429F8)[] = {
    0x00000034, 0x00000036, 0x00000038, 0x0000003A, 0x0000003C, 0x0000003E, 0x00000040, 0x00000042,
    0x00000044, 0x00000046,
};

Script N(script_80242A20) = SCRIPT({
    func_80240468_E161E8();
});

Script N(script_80242A3C) = SCRIPT({
    DisablePlayerInput(1);
    func_802423D0_E18150();
    ShowMessageAtScreenPos(0x80046, 160, 40);
    DisablePlayerInput(0);
});

Script N(script_80242A90) = SCRIPT({
    EnableModel(SI_VAR(0), 1);
    ModifyColliderFlags(1, SI_VAR(1), 0x7FFFFE00);
    TranslateModel(SI_VAR(0), 0, 0, 0);
});

Script N(script_80242AE8) = SCRIPT({
    spawn N(script_80242A90);
    SI_VAR(10) = 0xFFFFFFE7;
    loop 13 {
        SI_VAR(10) += 2;
        TranslateModel(SI_VAR(0), 0, SI_VAR(10), 0);
        sleep 1;
    }
    TranslateModel(SI_VAR(0), 0, 0, 0);
});

Script N(script_80242B7C) = SCRIPT({
    TranslateModel(SI_VAR(0), 0, 0, 0);
    EnableModel(SI_VAR(0), 0);
    ModifyColliderFlags(0, SI_VAR(1), 0x7FFFFE00);
});

Script N(script_80242BD4) = SCRIPT({
    spawn N(script_80242B7C);
    sleep 1;
    GetColliderCenter(SI_VAR(1));
    SI_VAR(1) -= 5;
    PlayEffect(7, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
});

Script N(script_80242C60) = SCRIPT({
    SI_VAR(0) = 9;
    SI_VAR(1) = 9;
    spawn N(script_80242B7C);
    SI_VAR(0) = 10;
    SI_VAR(1) = 10;
    spawn N(script_80242B7C);
    SI_VAR(0) = 11;
    SI_VAR(1) = 11;
    spawn N(script_80242B7C);
    SI_VAR(0) = 12;
    SI_VAR(1) = 12;
    spawn N(script_80242B7C);
    SI_VAR(0) = 13;
    SI_VAR(1) = 13;
    spawn N(script_80242B7C);
    SI_VAR(0) = 15;
    SI_VAR(1) = 15;
    spawn N(script_80242B7C);
    SI_VAR(0) = 16;
    SI_VAR(1) = 16;
    spawn N(script_80242B7C);
    SI_VAR(0) = 17;
    SI_VAR(1) = 17;
    spawn N(script_80242B7C);
    SI_VAR(0) = 18;
    SI_VAR(1) = 18;
    spawn N(script_80242B7C);
    SI_VAR(0) = 19;
    SI_VAR(1) = 19;
    spawn N(script_80242B7C);
    SI_VAR(0) = 21;
    SI_VAR(1) = 21;
    spawn N(script_80242B7C);
    SI_VAR(0) = 22;
    SI_VAR(1) = 22;
    spawn N(script_80242B7C);
    SI_VAR(0) = 23;
    SI_VAR(1) = 23;
    spawn N(script_80242B7C);
    SI_VAR(0) = 24;
    SI_VAR(1) = 24;
    spawn N(script_80242B7C);
    SI_VAR(0) = 25;
    SI_VAR(1) = 25;
    spawn N(script_80242B7C);
    SI_VAR(0) = 27;
    SI_VAR(1) = 27;
    spawn N(script_80242B7C);
    SI_VAR(0) = 28;
    SI_VAR(1) = 28;
    spawn N(script_80242B7C);
    SI_VAR(0) = 29;
    SI_VAR(1) = 29;
    spawn N(script_80242B7C);
    SI_VAR(0) = 30;
    SI_VAR(1) = 30;
    spawn N(script_80242B7C);
    SI_VAR(0) = 31;
    SI_VAR(1) = 31;
    spawn N(script_80242B7C);
    SI_VAR(0) = 33;
    SI_VAR(1) = 33;
    spawn N(script_80242B7C);
    SI_VAR(0) = 34;
    SI_VAR(1) = 34;
    spawn N(script_80242B7C);
    SI_VAR(0) = 35;
    SI_VAR(1) = 35;
    spawn N(script_80242B7C);
    SI_VAR(0) = 36;
    SI_VAR(1) = 36;
    spawn N(script_80242B7C);
    SI_VAR(0) = 37;
    SI_VAR(1) = 37;
    spawn N(script_80242B7C);
    SI_VAR(0) = 39;
    SI_VAR(1) = 39;
    spawn N(script_80242B7C);
    SI_VAR(0) = 40;
    SI_VAR(1) = 40;
    spawn N(script_80242B7C);
    SI_VAR(0) = 41;
    SI_VAR(1) = 41;
    spawn N(script_80242B7C);
    SI_VAR(0) = 42;
    SI_VAR(1) = 42;
    spawn N(script_80242B7C);
    SI_VAR(0) = 43;
    SI_VAR(1) = 43;
    spawn N(script_80242B7C);
    SI_VAR(0) = 45;
    SI_VAR(1) = 45;
    spawn N(script_80242B7C);
    SI_VAR(0) = 46;
    SI_VAR(1) = 46;
    spawn N(script_80242B7C);
    SI_VAR(0) = 47;
    SI_VAR(1) = 47;
    spawn N(script_80242B7C);
    SI_VAR(0) = 48;
    SI_VAR(1) = 48;
    spawn N(script_80242B7C);
    SI_VAR(0) = 49;
    SI_VAR(1) = 49;
    spawn N(script_80242B7C);
});

Script N(script_80243274) = SCRIPT({
    SI_VAR(0) = 9;
    SI_VAR(1) = 9;
    spawn N(script_80242BD4);
    SI_VAR(0) = 10;
    SI_VAR(1) = 10;
    spawn N(script_80242BD4);
    SI_VAR(0) = 11;
    SI_VAR(1) = 11;
    spawn N(script_80242BD4);
    SI_VAR(0) = 12;
    SI_VAR(1) = 12;
    spawn N(script_80242BD4);
    SI_VAR(0) = 13;
    SI_VAR(1) = 13;
    spawn N(script_80242BD4);
    SI_VAR(0) = 15;
    SI_VAR(1) = 15;
    spawn N(script_80242BD4);
    SI_VAR(0) = 16;
    SI_VAR(1) = 16;
    spawn N(script_80242BD4);
    SI_VAR(0) = 17;
    SI_VAR(1) = 17;
    spawn N(script_80242BD4);
    SI_VAR(0) = 18;
    SI_VAR(1) = 18;
    spawn N(script_80242BD4);
    SI_VAR(0) = 19;
    SI_VAR(1) = 19;
    spawn N(script_80242BD4);
    SI_VAR(0) = 21;
    SI_VAR(1) = 21;
    spawn N(script_80242BD4);
    SI_VAR(0) = 22;
    SI_VAR(1) = 22;
    spawn N(script_80242BD4);
    SI_VAR(0) = 23;
    SI_VAR(1) = 23;
    spawn N(script_80242BD4);
    SI_VAR(0) = 24;
    SI_VAR(1) = 24;
    spawn N(script_80242BD4);
    SI_VAR(0) = 25;
    SI_VAR(1) = 25;
    spawn N(script_80242BD4);
    SI_VAR(0) = 27;
    SI_VAR(1) = 27;
    spawn N(script_80242BD4);
    SI_VAR(0) = 28;
    SI_VAR(1) = 28;
    spawn N(script_80242BD4);
    SI_VAR(0) = 29;
    SI_VAR(1) = 29;
    spawn N(script_80242BD4);
    SI_VAR(0) = 30;
    SI_VAR(1) = 30;
    spawn N(script_80242BD4);
    SI_VAR(0) = 31;
    SI_VAR(1) = 31;
    spawn N(script_80242BD4);
    SI_VAR(0) = 33;
    SI_VAR(1) = 33;
    spawn N(script_80242BD4);
    SI_VAR(0) = 34;
    SI_VAR(1) = 34;
    spawn N(script_80242BD4);
    SI_VAR(0) = 35;
    SI_VAR(1) = 35;
    spawn N(script_80242BD4);
    SI_VAR(0) = 36;
    SI_VAR(1) = 36;
    spawn N(script_80242BD4);
    SI_VAR(0) = 37;
    SI_VAR(1) = 37;
    spawn N(script_80242BD4);
    SI_VAR(0) = 39;
    SI_VAR(1) = 39;
    spawn N(script_80242BD4);
    SI_VAR(0) = 40;
    SI_VAR(1) = 40;
    spawn N(script_80242BD4);
    SI_VAR(0) = 41;
    SI_VAR(1) = 41;
    spawn N(script_80242BD4);
    SI_VAR(0) = 42;
    SI_VAR(1) = 42;
    spawn N(script_80242BD4);
    SI_VAR(0) = 43;
    SI_VAR(1) = 43;
    spawn N(script_80242BD4);
    SI_VAR(0) = 45;
    SI_VAR(1) = 45;
    spawn N(script_80242BD4);
    SI_VAR(0) = 46;
    SI_VAR(1) = 46;
    spawn N(script_80242BD4);
    SI_VAR(0) = 47;
    SI_VAR(1) = 47;
    spawn N(script_80242BD4);
    SI_VAR(0) = 48;
    SI_VAR(1) = 48;
    spawn N(script_80242BD4);
    SI_VAR(0) = 49;
    SI_VAR(1) = 49;
    spawn N(script_80242BD4);
});

Script N(script_80243888) = SCRIPT({
    SI_VAR(0) = 9;
    SI_VAR(1) = 9;
    spawn N(script_80242AE8);
    SI_VAR(0) = 10;
    SI_VAR(1) = 10;
    spawn N(script_80242AE8);
    SI_VAR(0) = 11;
    SI_VAR(1) = 11;
    spawn N(script_80242AE8);
    SI_VAR(0) = 12;
    SI_VAR(1) = 12;
    spawn N(script_80242AE8);
    SI_VAR(0) = 13;
    SI_VAR(1) = 13;
    spawn N(script_80242AE8);
    SI_VAR(0) = 15;
    SI_VAR(1) = 15;
    spawn N(script_80242AE8);
    SI_VAR(0) = 16;
    SI_VAR(1) = 16;
    spawn N(script_80242AE8);
    SI_VAR(0) = 17;
    SI_VAR(1) = 17;
    spawn N(script_80242AE8);
    SI_VAR(0) = 18;
    SI_VAR(1) = 18;
    spawn N(script_80242AE8);
    SI_VAR(0) = 19;
    SI_VAR(1) = 19;
    spawn N(script_80242AE8);
    SI_VAR(0) = 21;
    SI_VAR(1) = 21;
    spawn N(script_80242AE8);
    SI_VAR(0) = 22;
    SI_VAR(1) = 22;
    spawn N(script_80242AE8);
    SI_VAR(0) = 23;
    SI_VAR(1) = 23;
    spawn N(script_80242AE8);
    SI_VAR(0) = 24;
    SI_VAR(1) = 24;
    spawn N(script_80242AE8);
    SI_VAR(0) = 25;
    SI_VAR(1) = 25;
    spawn N(script_80242AE8);
    SI_VAR(0) = 27;
    SI_VAR(1) = 27;
    spawn N(script_80242AE8);
    SI_VAR(0) = 28;
    SI_VAR(1) = 28;
    spawn N(script_80242AE8);
    SI_VAR(0) = 29;
    SI_VAR(1) = 29;
    spawn N(script_80242AE8);
    SI_VAR(0) = 30;
    SI_VAR(1) = 30;
    spawn N(script_80242AE8);
    SI_VAR(0) = 31;
    SI_VAR(1) = 31;
    spawn N(script_80242AE8);
    SI_VAR(0) = 33;
    SI_VAR(1) = 33;
    spawn N(script_80242AE8);
    SI_VAR(0) = 34;
    SI_VAR(1) = 34;
    spawn N(script_80242AE8);
    SI_VAR(0) = 35;
    SI_VAR(1) = 35;
    spawn N(script_80242AE8);
    SI_VAR(0) = 36;
    SI_VAR(1) = 36;
    spawn N(script_80242AE8);
    SI_VAR(0) = 37;
    SI_VAR(1) = 37;
    spawn N(script_80242AE8);
    SI_VAR(0) = 39;
    SI_VAR(1) = 39;
    spawn N(script_80242AE8);
    SI_VAR(0) = 40;
    SI_VAR(1) = 40;
    spawn N(script_80242AE8);
    SI_VAR(0) = 41;
    SI_VAR(1) = 41;
    spawn N(script_80242AE8);
    SI_VAR(0) = 42;
    SI_VAR(1) = 42;
    spawn N(script_80242AE8);
    SI_VAR(0) = 43;
    SI_VAR(1) = 43;
    spawn N(script_80242AE8);
    SI_VAR(0) = 45;
    SI_VAR(1) = 45;
    spawn N(script_80242AE8);
    SI_VAR(0) = 46;
    SI_VAR(1) = 46;
    spawn N(script_80242AE8);
    SI_VAR(0) = 47;
    SI_VAR(1) = 47;
    spawn N(script_80242AE8);
    SI_VAR(0) = 48;
    SI_VAR(1) = 48;
    spawn N(script_80242AE8);
    SI_VAR(0) = 49;
    SI_VAR(1) = 49;
    spawn N(script_80242AE8);
});

Script N(script_80243E9C) = SCRIPT({
    EnableModel(52, 0);
    EnableModel(54, 0);
    EnableModel(56, 0);
    EnableModel(58, 0);
    EnableModel(60, 0);
    EnableModel(62, 0);
    EnableModel(64, 0);
    EnableModel(66, 0);
    EnableModel(68, 0);
    EnableModel(70, 0);
});

Script N(script_80243F74) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    func_80240644_E163C4();
    GetColliderCenter(SI_VAR(11));
    match SI_VAR(12) {
        == 2 {
            SI_VAR(1) += 2;
            PlayEffect(17, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 25, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        == 3 {
            TranslateModel(SI_VAR(10), 0, 0xFFFFFFF7, 0);
            sleep 1;
            TranslateModel(SI_VAR(10), 0, 0xFFFFFFF1, 0);
            sleep 1;
            TranslateModel(SI_VAR(10), 0, 0xFFFFFFEB, 0);
            sleep 1;
            EnableModel(SI_VAR(10), 0);
            ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
            sleep 4;
            SI_VAR(1) -= 5;
            PlayEffect(7, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        0, 1 {
            SI_VAR(1) -= 5;
            PlayEffect(7, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
    }
    EnableModel(SI_VAR(10), 0);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
});

Script N(script_802441E4) = SCRIPT({
    SI_VAR(0) = 9;
    SI_VAR(1) = 9;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 10;
    SI_VAR(1) = 10;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 11;
    SI_VAR(1) = 11;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 12;
    SI_VAR(1) = 12;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 13;
    SI_VAR(1) = 13;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 15;
    SI_VAR(1) = 15;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 16;
    SI_VAR(1) = 16;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 17;
    SI_VAR(1) = 17;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 18;
    SI_VAR(1) = 18;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 19;
    SI_VAR(1) = 19;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 21;
    SI_VAR(1) = 21;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 22;
    SI_VAR(1) = 22;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 23;
    SI_VAR(1) = 23;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 24;
    SI_VAR(1) = 24;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 25;
    SI_VAR(1) = 25;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 27;
    SI_VAR(1) = 27;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 28;
    SI_VAR(1) = 28;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 29;
    SI_VAR(1) = 29;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 30;
    SI_VAR(1) = 30;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 31;
    SI_VAR(1) = 31;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 33;
    SI_VAR(1) = 33;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 34;
    SI_VAR(1) = 34;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 35;
    SI_VAR(1) = 35;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 36;
    SI_VAR(1) = 36;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 37;
    SI_VAR(1) = 37;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 39;
    SI_VAR(1) = 39;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 40;
    SI_VAR(1) = 40;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 41;
    SI_VAR(1) = 41;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 42;
    SI_VAR(1) = 42;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 43;
    SI_VAR(1) = 43;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 45;
    SI_VAR(1) = 45;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 46;
    SI_VAR(1) = 46;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 47;
    SI_VAR(1) = 47;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 48;
    SI_VAR(1) = 48;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
    SI_VAR(0) = 49;
    SI_VAR(1) = 49;
    bind N(script_80243F74) to TriggerFlag_WALL_HAMMER SI_VAR(1);
});

Script N(script_80244A28) = SCRIPT({
    func_80240790_E16510();
});

Script N(script_80244A44) = SCRIPT({
    func_80241FE4_E17D64();
});

Script N(script_80244A60) = SCRIPT({
    func_80240544_E162C4();
    func_80240BB0_E16930();
    func_80240580_E16300();
    DisablePlayerInput(1);
    SetSelfVar(3, 3);
    0x802D5FD8();
    spawn N(script_80244A44);
    ShowMessageAtScreenPos(0x80041, 160, 40);
    sleep 5;
    SetSelfVar(3, 4);
    spawn N(script_80243E9C);
    spawn N(script_80243274);
    sleep 15;
    spawn {
        UseSettingsFrom(0, 358, 0xFFFFFFEC, 185);
        SetPanTarget(0, 358, 0xFFFFFFEC, 185);
        SetCamDistance(0, 400.0);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    SetNpcFlagBits(0, 256, 1);
    func_802405D0_E16350();
    PlayEffect(7, 1, 355, 45, 0xFFFFFF51, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    spawn {
        SetNpcPos(0, 358, 0xFFFFFFEC, 185);
        EnableNpcShadow(0, 1);
        PlayEffect(7, 1, 358, 5, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        SetSelfEnemyFlagBits(0x19000000, 0);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    GetDist2D(SI_VAR(10), SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(5));
    SI_VAR(10) /= 8;
    if (SI_VAR(10) < 3) {
        SI_VAR(10) = 3;
    }
    PlayerMoveTo(330, 185, SI_VAR(10));
    0x802D24F4();
    SetNpcFlagBits(0, 256, 0);
    sleep 5;
    SetSelfVar(3, 5);
    func_CalculateScore_E17B4C();
    match SI_VAR(0) {
        == -1 {
            SetSelfVar(3, 0);
            SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80043);
        }
        == 0 {
            SetSelfVar(3, 0);
            SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80044);
        }
        else {
            SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x80042);
            ShowCoinCounter(1);
            sleep 10;
            func_80241F38_E17CB8();
            sleep 15;
            ShowCoinCounter(0);
            SetSelfVar(3, 0);
            sleep 5;
            ContinueSpeech(0, 0x830004, 0x830001, 0, 0x80045);
        }
    }
    sleep 5;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 450.0);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_80244FD4) = SCRIPT({
    func_80242274_E17FF4();
    spawn N(script_80242C60);
    func_802405D0_E16350();
    spawn N(script_80242A20);
    spawn N(script_802441E4);
    spawn N(script_80243E9C);
});

Script N(script_8024502C) = SCRIPT({
    func_802422D0_E18050();
});

Script N(script_Interact_80245048) = SCRIPT({
    if (SI_SAVE_FLAG(367) == 0) {
        func_802423D0_E18150();
        SI_SAVE_FLAG(367) = 1;
        SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x8003C);
    } else {
        SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x8003D);
    }
    ShowCoinCounter(1);
    func_80242314_E18094();
    if (SI_VAR(10) < 10) {
        ContinueSpeech(0, 0x830004, 0x830001, 0, 0x8003E);
        func_802423A4_E18124();
        sleep 12;
        spawn N(script_8024502C);
        GotoMap(D_802485F0_E1E370, 2);
        sleep 100;
        return;
    }
    ShowChoice(0x1E004F);
    match SI_VAR(0) {
        == 0 {
            GetSelfVar(4, SI_VAR(1));
            if (SI_VAR(1) < 100) {
                SI_VAR(1) += 1;
                SetSelfVar(4, SI_VAR(1));
            }
            spawn {
                func_MonitorGame_E180C0();
            }
            ContinueSpeech(0, 0x830004, 0x830001, 0, 0x8003F);
            func_802423A4_E18124();
        }
        else {
            func_802423A4_E18124();
            sleep 5;
            ContinueSpeech(0, 0x830004, 0x830001, 0, 0x80040);
            spawn N(script_8024502C);
            GotoMap(D_802485F0_E1E370, 2);
            sleep 100;
            return;
        }
    }
    spawn {
        DisablePartnerAI(0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) -= 3;
        NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 10);
    }
    EndSpeech(0, 0x830004, 0x830001, 5);
    SetSelfVar(3, 1);
    0x802D617C(8456, 80);
    spawn N(script_80243888);
    spawn N(script_80244A28);
    sleep 25;
    spawn {
        sleep 12;
        PlayEffect(7, 1, 358, 0xFFFFFFF6, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        SetNpcPos(0, 358, 500, 185);
        EnableNpcShadow(0, 0);
        func_802405A4_E16324();
        PlayEffect(7, 1, 355, 30, 0xFFFFFF4C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    EndSpeech(0, 0x830004, 0x830001, 5);
    0x802D5FF8(133, 0);
    sleep 8;
    EndSpeech(0, 0x830004, 0x830001, 5);
    EnablePartnerAI();
    SetSelfVar(3, 2);
    spawn N(script_80244A60);
});

Script N(script_Init_802454E0) = SCRIPT({
    SetNpcPos(0, 358, 0xFFFFFFEC, 185);
    SetSelfVar(4, 0);
    SetSelfVar(3, 0);
    BindNpcInteract(-1, N(script_Interact_80245048));
});

StaticNpc N(npcGroup_80245548)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242660),
        .pos = { 353.0, -20.0, 185.0 },
        .flags = 0x00002D01,
        .init = N(script_Init_802454E0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A0062,
    },
};

Script N(script_Init_80245738) = SCRIPT({
    SetNpcAnimation(-1, 0x2B0003);
    SetSelfVar(0, 0);
    GetSelfNpcID(SI_VAR(0));
    match SI_VAR(0) {
        == 10 {
            SetSelfVar(8, 817);
        }
        == 11 {
            SetSelfVar(8, 818);
        }
        == 12 {
            SetSelfVar(8, 819);
        }
        == 13 {
            SetSelfVar(8, 817);
        }
        else {
            SetSelfVar(8, 818);
        }
    }
    SetNpcFlagBits(-1, 2056, 1);
    SetNpcFlagBits(-1, 512, 0);
    EnableNpcShadow(-1, 0);
    RandInt(100, SI_VAR(0));
    if (SI_VAR(0) < 50) {
        InterpNpcYaw(-1, 90, 0);
    } else {
        InterpNpcYaw(-1, 270, 0);
    }
});

Script N(script_Init_802458D8) = SCRIPT({
    SetNpcAnimation(-1, 0x2C000B);
    SetSelfVar(0, 0);
    SetNpcFlagBits(-1, 2056, 1);
    SetNpcFlagBits(-1, 512, 0);
    EnableNpcShadow(-1, 0);
    GetSelfNpcID(SI_VAR(0));
    match SI_VAR(0) {
        == 30 {
            SetSelfVar(8, 812);
        }
        == 31 {
            SetSelfVar(8, 813);
        }
        == 32 {
            SetSelfVar(8, 812);
        }
        else {
            SetSelfVar(8, 813);
        }
    }
    RandInt(100, SI_VAR(0));
    if (SI_VAR(0) < 50) {
        InterpNpcYaw(-1, 90, 0);
    } else {
        InterpNpcYaw(-1, 270, 0);
    }
});

Script N(script_Init_80245A58) = SCRIPT({
    SetNpcAnimation(-1, 0x82000D);
    SetSelfVar(0, 0);
    SetNpcFlagBits(-1, 2056, 1);
    SetNpcFlagBits(-1, 512, 0);
    EnableNpcShadow(-1, 0);
    RandInt(100, SI_VAR(0));
    if (SI_VAR(0) < 50) {
        InterpNpcYaw(-1, 90, 0);
    } else {
        InterpNpcYaw(-1, 270, 0);
    }
});

StaticNpc N(npcGroup_80245B38)[] = {
    {
        .id = 10,
        .settings = &N(npcSettings_802426E4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_80245738),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_80245D28)[] = {
    {
        .id = 11,
        .settings = &N(npcSettings_802426E4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_80245738),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_80245F18)[] = {
    {
        .id = 12,
        .settings = &N(npcSettings_802426E4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_80245738),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_80246108)[] = {
    {
        .id = 13,
        .settings = &N(npcSettings_802426E4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_80245738),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_802462F8)[] = {
    {
        .id = 14,
        .settings = &N(npcSettings_802426E4),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_80245738),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_802464E8)[] = {
    {
        .id = 30,
        .settings = &N(npcSettings_80242710),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_802458D8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_802466D8)[] = {
    {
        .id = 31,
        .settings = &N(npcSettings_80242710),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_802458D8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_802468C8)[] = {
    {
        .id = 32,
        .settings = &N(npcSettings_80242710),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_802458D8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_80246AB8)[] = {
    {
        .id = 33,
        .settings = &N(npcSettings_80242710),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_802458D8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_80246CA8)[] = {
    {
        .id = 34,
        .settings = &N(npcSettings_80242710),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F01,
        .init = N(script_Init_802458D8),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x002C0002, 0x002C0004, 0x002C0006, 0x002C0006, 0x002C0002, 0x002C0002, 0x002C000E, 0x002C000E, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006, 0x002C0006,
        },
        .tattle = 0x1A0062,
    },
};

StaticNpc N(npcGroup_80246E98)[] = {
    {
        .id = 100,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 101,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 102,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 103,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 104,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 105,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 106,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 107,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 108,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
    {
        .id = 109,
        .settings = &N(npcSettings_802426B8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x3F200F09,
        .init = N(script_Init_80245A58),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000, 0x00820000,
        },
        .tattle = 0x1A0062,
    },
};

NpcGroupList N(npcGroupList_802481F8) = {
    NPC_GROUP(N(npcGroup_80245548), 0x00000000),
    NPC_GROUP(N(npcGroup_80245B38), 0x00000000),
    NPC_GROUP(N(npcGroup_80245D28), 0x00000000),
    NPC_GROUP(N(npcGroup_80245F18), 0x00000000),
    NPC_GROUP(N(npcGroup_80246108), 0x00000000),
    NPC_GROUP(N(npcGroup_802462F8), 0x00000000),
    NPC_GROUP(N(npcGroup_802464E8), 0x00000000),
    NPC_GROUP(N(npcGroup_802466D8), 0x00000000),
    NPC_GROUP(N(npcGroup_802468C8), 0x00000000),
    NPC_GROUP(N(npcGroup_80246AB8), 0x00000000),
    NPC_GROUP(N(npcGroup_80246CA8), 0x00000000),
    NPC_GROUP(N(npcGroup_80246E98), 0x00000000),
    {},
};

s32 pad_008294[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802482A0)[] = {
    0xCCCCCCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCCCCCC3, 0xC3333333, 0x33333333, 0x33333333, 0x33333C33,
    0xC3333333, 0x3333030A, 0xA0303333, 0x33333C33, 0xC3311111, 0x111060AA, 0xAA060111, 0x11111C33,
    0xC3311111, 0x11106AA8, 0x4AA60111, 0x11111C33, 0xC3311111, 0x111006A4, 0x4A600111, 0x11111C33,
    0xC3311111, 0x100660AA, 0xAA066001, 0x11111C33, 0xC3311111, 0x06699666, 0x66699660, 0x11111C33,
    0xC3310010, 0x66999996, 0x69999966, 0x01001C33, 0xC3306606, 0x69999999, 0x99999996, 0x60660C33,
    0xC3306666, 0x69666999, 0x99966696, 0x66660C33, 0xC3306699, 0x96666699, 0x99666669, 0x99660C33,
    0xC3310669, 0x96606669, 0x96660669, 0x96601C33, 0xC3311066, 0x620B0066, 0x6600B026, 0x66011C33,
    0xC3300666, 0x20BEEB06, 0x60BEEB02, 0x66600C33, 0xC3306002, 0x60EEEEB0, 0x0BEEEE06, 0x20060C33,
    0xC33100E0, 0x90EE50EE, 0xEE05EE09, 0x0E001C33, 0xC33110E0, 0x90EE5BEE, 0xEE0BEE09, 0x0E011C33,
    0xC33110E0, 0x60BE50EE, 0xEE05EB06, 0x0E011C33, 0xC3310600, 0x00B99EEE, 0xEEE99B00, 0x00601C33,
    0xC331066F, 0x12077EEE, 0xEEE7702F, 0x16601C33, 0xC3310661, 0x120EEE0E, 0xE0EEE021, 0x16601C33,
    0xC3306000, 0x0240BEE0, 0x0EEB0420, 0x00060C33, 0xC3360888, 0x80440BEE, 0xEEB04408, 0x88806C33,
    0xC3304888, 0x84844006, 0x60044848, 0x88840C33, 0xC3308888, 0x84888844, 0x44448848, 0x88880C33,
    0xC3308888, 0x888888DD, 0xDD888888, 0x88880C33, 0xC3308888, 0x84888DF1, 0x1FD88848, 0x88880C33,
    0xC3300444, 0x48888DF1, 0x1FD88884, 0x44400C33, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCCCCC33,
    0xC3333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333,
};

s32 N(unk_802484A0)[] = {
    0x7A8B63ED, 0x934593C1, 0xB2CB9B93, 0xD509DC93, 0xD419DDD1, 0xD649D615, 0xF691ED61, 0xEF27E731,
};

s32 N(unk_802484C0)[] = {
    N(unk_802482A0), N(unk_802484A0), 0x00200020, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802484E0_E1E260

// rodata: jtbl_802484E8_E1E268

// rodata: D_802485F0_E1E370

s32 pad_0085F8[] = {
    0x00000000, 0x00000000,
};

