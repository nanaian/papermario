#include "end_01.h"

s32 pad_000008[2];
s32 pad_00002C[1];
s32 unk_missing_8024289C[9];
s32 pad_002CE4[3];
s32 pad_002FE8[2];
Script N(main);
s32 pad_003108[2];
s32 N(unk_80243110)[26];
s32 N(unk_80243178)[34];
s32 N(unk_80243200)[4];
s32 N(unk_80243210)[1];
s32 N(unk_80243214)[196];
s32 N(unk_80243524)[532];
Script N(script_80243D74);
Script N(script_80243D90);
Script N(script_80243DB0);
Script N(script_80243DD0);
Script N(script_80243E44);
Script N(script_80243ED8);
Script N(script_80244180);
s32 N(unk_802441A0)[2];
s32 N(unk_802441A8)[2];
s32 N(unk_802441B0)[2];
s32 N(unk_802441B8)[2];
s32 N(unk_802441C0)[2];
s32 N(unk_802441C8)[2];
s32 N(unk_802441D0)[2];
s32 N(unk_802441D8)[2];
s32 N(unk_802441E0)[4];
s32 N(unk_802441F0)[408];
Script N(script_80244850);
Script N(script_802451B8);
Script N(script_802451F8);
Script N(script_80245740);
Script N(script_80245820);
Script N(script_80245978);
Script N(script_80245AA4);
Script N(script_80245BD0);
Script N(script_80245C74);
s32 N(unk_80245D34)[1];
Script N(script_80245D38);
Script N(script_80245DF0);
Script N(script_80245E70);
Script N(script_80245FF0);
s32 pad_006284[3];
Script N(script_80246290);
Script N(script_80246310);
Script N(script_802463A4);
Script N(script_802464F8);
Script N(script_80246628);
Script N(script_802467E0);
Script N(script_80246A60);
s32 pad_006D58[2];
Script N(script_80246D60);
Script N(script_80246E18);
s32 N(unk_80246EAC)[8];
Script N(script_80246ECC);
Script N(script_80247098);
Script N(script_80247164);
Script N(script_8024729C);
Script N(script_80247450);
Script N(script_80247620);
Script N(script_80247854);
Script N(script_80247BB0);
Script N(script_80247D68);
s32 pad_0081A8[2];
Script N(script_802481B0);
Script N(script_80248364);
Script N(script_80248420);
Script N(script_802484A0);
Script N(script_80248520);
Script N(script_802485A0);
s32 N(vectorList_80248620)[42];
Script N(script_802486C8);
Script N(script_80248838);
Script N(script_80248A88);
Script N(script_80248D1C);
Script N(script_80248D8C);
Script N(script_80248FC8);
Script N(script_80249034);
Script N(script_802492B0);
s32 pad_00939C[1];
s32 N(unk_802493A0)[16];
const char D_80249438_E0E798[8]; // "kmr_30"

// text: func_Init_E05360

s32 pad_000008[] = {
    0x00000000, 0x00000000,
};

// text: func_80240010_E05370

s32 pad_00002C[] = {
    0x00000000,
};

// text: func_80240030_E05390

// text: func_80240280_E055E0

// text: func_80240550_E058B0

// text: func_8024082C_E05B8C

// text: func_80240AF8_E05E58

// text: func_80240EC0_E06220

// text: func_80240FFC_E0635C

// text: func_802411DC_E0653C

// text: func_802412A4_E06604

// text: func_802414DC_E0683C

// text: func_80241778_E06AD8

// text: func_80241A08_E06D68

// text: func_80241B44_E06EA4

// text: func_802421E8_E07548

// text: func_80242368_E076C8

// text: func_80242510_E07870

// text: func_80242568_E078C8

// text: func_80242590_E078F0

// text: func_80242690_E079F0

// text: func_80242754_E07AB4

// text: func_802427B4_E07B14

// text: func_802427E8_E07B48

// text: func_80242840_E07BA0

s32 unk_missing_8024289C[] = {
    0x3C028007, 0x8C42419C, 0x8C420010, 0x30429000, 0x0002102B, 0x03E00008, 0x00021040, 0x00000000,
    0x00000000,
};

// text: func_802428C0_E07C20

// text: func_80242900_E07C60

// text: func_80242978_E07CD8

// text: func_80242A68_E07DC8

// text: func_80242B68_E07EC8

// text: func_80242C68_E07FC8

// text: func_80242C94_E07FF4

s32 pad_002CE4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80242CF0_E08050

// text: func_80242E14_E08174

s32 pad_002FE8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(main) = SCRIPT({
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamViewport(0, 15, 28, 290, 128);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    func_80240010_E05370();
    EnableStatusMenu(0);
    spawn N(script_802451F8);
    sleep 1;
});

s32 pad_003108[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80243110)[] = {
    0x02070001, 0x020A0001, 0x03040001, 0x070D0001, 0x09040001, 0x0C040001, 0x0C0C0001, 0x0C140001,
    0x0D030001, 0x0D040001, 0x0D0A0001, 0x0D140001, 0x0E0D0001, 0x0E110001, 0x11040001, 0x110F0001,
    0x14020001, 0x140D0001, 0x140F0001, 0x14120001, 0x12020001, 0x12070001, 0x120F0001, 0x15040001,
    0x16110001, 0x00000000,
};

s32 N(unk_80243178)[] = {
    0x00020001, 0x00060001, 0x000E0001, 0x00030001, 0x00080001, 0x000A0001, 0x000D0001, 0x00130001,
    0x00140001, 0x07000001, 0x07060001, 0x07080001, 0x08020001, 0x08040001, 0x08060001, 0x080A0001,
    0x080D0001, 0x080E0001, 0x08130001, 0x08180001, 0x09080001, 0x0C0E0001, 0x0C080001, 0x0D060001,
    0x0D080001, 0x0D0E0001, 0x0D130001, 0x12040001, 0x12080001, 0x13040001, 0x14020001, 0x14080001,
    0x140A0001, 0x00000000,
};

s32 N(unk_80243200)[] = {
    0x028001E0, 0x01FF0000, 0x028001E0, 0x01FF0000,
};

s32 N(unk_80243210)[] = {
    0x00000000,
};

s32 N(unk_80243214)[] = {
    0x002E0019, 0x000000A0, 0x000000A6, 0x00000000, 0x00000004, 0x00000028, 0x00000002, 0x00000000,
    0x000008DE, 0x00000000, 0x0000001E, 0x00000000, 0x00000924, 0x00010000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x0000003C, 0x00000000, 0x002E001A, 0x000000A0, 0x000000AA, 0x00000000,
    0x00000004, 0x00000028, 0x00000002, 0x00000000, 0x000000C8, 0x00000000, 0x0000001E, 0x00000000,
    0x0000010E, 0x00010000, 0x002E001B, 0x000000A0, 0x000000AA, 0x00000000, 0x00000004, 0x00000028,
    0x00000002, 0x00000000, 0x000001AE, 0x00000000, 0x0000001E, 0x00000000, 0x000001F4, 0x00010000,
    0x002E001D, 0x000000A0, 0x000000AA, 0x00000000, 0x00000004, 0x00000028, 0x00000002, 0x00000000,
    0x000000C8, 0x00000000, 0x0000001E, 0x00000000, 0x0000010E, 0x00010000, 0x002E001C, 0x000000A0,
    0x000000AA, 0x00000000, 0x00000004, 0x00000028, 0x00000002, 0x00000000, 0x000001AE, 0x00000000,
    0x0000001E, 0x00000000, 0x000001F4, 0x00010000, 0x002E001E, 0x000000A0, 0x000000AA, 0x00000000,
    0x00000004, 0x00000028, 0x00000002, 0x00000000, 0x000000C8, 0x00000000, 0x0000001E, 0x00000000,
    0x0000010E, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000004, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003C, 0x00000000,
    0x002E0007, 0x00000083, 0x000000B6, 0x00000000, 0x00000000, 0x0000003C, 0x00000000, 0x00000000,
    0x000000A0, 0x00000000, 0x00000032, 0x00000000, 0x00000000, 0x00010000, 0x002E0008, 0x000000BD,
    0x000000B6, 0x00000001, 0x00000000, 0x0000003C, 0x00000000, 0x00000000, 0x000000A0, 0x00000000,
    0x00000032, 0x00000000, 0x0000010E, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x0000001E, 0x00000000, 0x002E0005, 0x000000A0, 0x000000AC, 0x00000000, 0x00000000, 0x0000003C,
    0x00000000, 0x00000000, 0x000000A0, 0x00000000, 0x00000032, 0x00000000, 0x00000000, 0x00010000,
    0x002E0006, 0x000000A0, 0x000000BC, 0x00000001, 0x00000000, 0x0000003C, 0x00000000, 0x00000000,
    0x000000A0, 0x00000000, 0x00000032, 0x00000000, 0x0000010E, 0x00010000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000,
};

s32 N(unk_80243524)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000028, 0x00000000, 0x002E0071, 0x000000A0,
    0x000000BA, 0x00000001, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0x000000AE, 0x00000000,
    0x0000001E, 0x00000001, 0x00000000, 0x00010000, 0x002E0072, 0x000000A0, 0x000000CB, 0x00000001,
    0x00000000, 0x00000028, 0x00000000, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001,
    0x000000E6, 0x00010000, 0x002E0066, 0x000000A0, 0x000000BA, 0x00000001, 0x00000000, 0x00000028,
    0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x00000000, 0x00010000,
    0x002E0065, 0x000000A0, 0x000000CB, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000,
    0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x000000E6, 0x00010000, 0x002E0075, 0x000000A0,
    0x000000BA, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000,
    0x0000001E, 0x00000001, 0x00000000, 0x00010000, 0x002E0073, 0x000000A0, 0x000000CB, 0x00000001,
    0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001,
    0x000000E6, 0x00010000, 0x002E0055, 0x000000A0, 0x000000BA, 0x00000001, 0x00000000, 0x00000028,
    0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x00000000, 0x00010000,
    0x002E0051, 0x000000A0, 0x000000CB, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000,
    0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x000000E6, 0x00010000, 0x002E0059, 0x000000A0,
    0x000000BA, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000,
    0x0000001E, 0x00000001, 0x00000000, 0x00010000, 0x002E005A, 0x000000A0, 0x000000CB, 0x00000001,
    0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001,
    0x000000E6, 0x00010000, 0x002E0053, 0x000000A0, 0x000000B6, 0x00000001, 0x00000000, 0x00000028,
    0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x00000000, 0x00010000,
    0x002E005B, 0x000000A0, 0x000000C3, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000,
    0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x00000000, 0x00010000, 0x002E005C, 0x000000A0,
    0x000000D0, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000,
    0x0000001E, 0x00000001, 0x000000E6, 0x00010000, 0x002E005D, 0x000000A0, 0x000000BA, 0x00000001,
    0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001,
    0x00000000, 0x00010000, 0x002E005E, 0x000000A0, 0x000000CB, 0x00000001, 0x00000000, 0x00000028,
    0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x000000E6, 0x00010000,
    0x002E005F, 0x000000A0, 0x000000B6, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000,
    0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x00000000, 0x00010000, 0x002E0060, 0x000000A0,
    0x000000C3, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000,
    0x0000001E, 0x00000001, 0x00000000, 0x00010000, 0x002E0061, 0x000000A0, 0x000000D0, 0x00000001,
    0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001,
    0x000000E6, 0x00010000, 0x002E0068, 0x000000A0, 0x000000BF, 0x00000001, 0x00000000, 0x00000028,
    0x00000001, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x000000E6, 0x00010000,
    0x002E0085, 0x000000A0, 0x000000B6, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000,
    0x000000A0, 0x00000000, 0x0000001E, 0x00000000, 0x00000000, 0x00010000, 0x002E0086, 0x000000A0,
    0x000000C3, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000A0, 0x00000000,
    0x0000001E, 0x00000000, 0x00000000, 0x00010000, 0x002E0087, 0x000000A0, 0x000000D0, 0x00000001,
    0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000A0, 0x00000000, 0x0000001E, 0x00000000,
    0x000000E6, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000004, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003C, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000028, 0x00000000, 0x002E0052, 0x000000A0,
    0x000000BF, 0x00000001, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0x000000A0, 0x00000000,
    0x0000001E, 0x00000000, 0x000000E6, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000028, 0x00000000, 0x002E006A, 0x000000A0, 0x000000BF, 0x00000001, 0x00000000, 0x00000028,
    0x00000000, 0x00000000, 0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x000000E6, 0x00010000,
    0x002E0054, 0x000000A0, 0x000000BF, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000,
    0x000000A0, 0x00000000, 0x0000001E, 0x00000000, 0x000000E6, 0x00010000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000028, 0x00000000, 0x002E006D, 0x000000A0, 0x000000BF, 0x00000001,
    0x00000000, 0x00000028, 0x00000000, 0x00000000, 0x000000A0, 0x00000000, 0x0000001E, 0x00000000,
    0x000000E6, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000028, 0x00000000,
    0x002E006C, 0x000000A0, 0x000000BF, 0x00000001, 0x00000000, 0x00000028, 0x00000000, 0x00000000,
    0x000000AE, 0x00000000, 0x0000001E, 0x00000001, 0x000000E6, 0x00010000, 0x002E006B, 0x000000A0,
    0x000000BF, 0x00000001, 0x00000000, 0x00000028, 0x00000001, 0x00000000, 0x000000A0, 0x00000000,
    0x0000001E, 0x00000000, 0x000000E6, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000028, 0x00000000, 0x002E006E, 0x000000A0, 0x000000BF, 0x00000001, 0x00000000, 0x00000028,
    0x00000000, 0x00000000, 0x000000A0, 0x00000000, 0x0000001E, 0x00000000, 0x000000E6, 0x00010000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003C, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000,
};

Script N(script_80243D74) = SCRIPT({
    func_80242568_E078C8();
});

Script N(script_80243D90) = SCRIPT({
    func_80242590_E078F0(N(unk_80243214));
});

Script N(script_80243DB0) = SCRIPT({
    func_80242590_E078F0(N(unk_80243524));
});

Script N(script_80243DD0) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFF3C1, 0, 0);
    SetPanTarget(0, 0xFFFFF3C1, 0, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
});

Script N(script_80243E44) = SCRIPT({
    SetPanTarget(0, -3135.0, 0, 0);
    SI_VAR(1) = 0.0;
    loop {
        func_802427E8_E07B48();
        TranslateGroup(3, SI_VAR(1), 0, 0);
        SI_VAR(1) += 0.6669921875;
        sleep 1;
    }
});

Script N(script_80243ED8) = SCRIPT({
    EnableTexPanning(4, 1);
    EnableTexPanning(5, 1);
    EnableTexPanning(6, 1);
    EnableTexPanning(8, 1);
    EnableTexPanning(9, 1);
    EnableTexPanning(10, 1);
    EnableTexPanning(11, 1);
    EnableTexPanning(12, 1);
    EnableTexPanning(14, 1);
    EnableTexPanning(15, 1);
    EnableTexPanning(16, 1);
    EnableTexPanning(17, 1);
    EnableTexPanning(19, 1);
    EnableTexPanning(20, 1);
    EnableTexPanning(21, 1);
    EnableTexPanning(22, 1);
    EnableTexPanning(23, 1);
    EnableTexPanning(25, 1);
    EnableTexPanning(26, 1);
    EnableTexPanning(27, 1);
    EnableTexPanning(28, 1);
    EnableTexPanning(30, 1);
    EnableTexPanning(31, 1);
    EnableTexPanning(32, 1);
    EnableTexPanning(33, 1);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        loop {
            SI_VAR(0) += 150;
            if (SI_VAR(0) > 0x20000) {
                SI_VAR(0) += 0xFFFE0000;
            }
            SetTexPanOffset(1, 0, SI_VAR(0), 0);
            sleep 1;
        }
    }
});

Script N(script_80244180) = SCRIPT({
    func_80242840_E07BA0(SI_VAR(0));
});

s32 N(unk_802441A0)[] = {
    0x00190001, 0xFFFFFFFF,
};

s32 N(unk_802441A8)[] = {
    0x001A0001, 0xFFFFFFFF,
};

s32 N(unk_802441B0)[] = {
    0x001B0001, 0xFFFFFFFF,
};

s32 N(unk_802441B8)[] = {
    0x001C0001, 0xFFFFFFFF,
};

s32 N(unk_802441C0)[] = {
    0x001D0000, 0xFFFFFFFF,
};

s32 N(unk_802441C8)[] = {
    0x001E0001, 0xFFFFFFFF,
};

s32 N(unk_802441D0)[] = {
    0x001F0001, 0xFFFFFFFF,
};

s32 N(unk_802441D8)[] = {
    0x003E0003, 0xFFFFFFFF,
};

s32 N(unk_802441E0)[] = {
    0x003B0004, 0x003B0010, 0x003B0001, 0xFFFFFFFF,
};

s32 N(unk_802441F0)[] = {
    0x00190001, N(unk_802441A0), 0xC543F000, 0x43520000, 0xC2F00000, 0x43870000, 0x001A0001, N(unk_802441A8),
    0xC547B000, 0x43480000, 0xC2F00000, 0x43870000, 0x001B0001, N(unk_802441B0), 0xC5403000, 0x43430000,
    0xC2F00000, 0x43870000, 0x001C0001, N(unk_802441B8), 0xC53E5000, 0x43140000, 0xC2D00000, 0x43870000,
    0x001D0000, N(unk_802441C0), 0xC5421000, 0x431E0000, 0xC2D00000, 0x43870000, 0x001E0001, N(unk_802441C8),
    0xC545D000, 0x431E0000, 0xC2D00000, 0x43870000, 0x001F0001, N(unk_802441D0), 0xC5499000, 0x43140000,
    0xC2D00000, 0x43870000, 0x00DE0004, 0x00000000, 0xC528C000, 0x00000000, 0xC2140000, 0x43870000,
    0x00DE0004, 0x00000000, 0xC528C000, 0x00000000, 0x42140000, 0x43870000, 0x00DE0010, 0x00000000,
    0xC525A000, 0x00000000, 0xC29A0000, 0x43870000, 0x00DE0013, 0x00000000, 0xC5232000, 0x00000000,
    0xC29A0000, 0x43870000, 0x00DE0002, 0x00000000, 0xC51FB000, 0x40A00000, 0x41F00000, 0x43870000,
    0x00DE0003, 0x00000000, 0xC51DF000, 0x40A00000, 0x420C0000, 0x43870000, 0x00DE0002, 0x00000000,
    0xC51BF000, 0x40A00000, 0x41F00000, 0x42B40000, 0x008E0207, 0x00000000, 0xC5240000, 0x41A00000,
    0x00000000, 0x42B40000, 0x00DE000C, 0x00000000, 0xC51E1000, 0x00000000, 0x00000000, 0x43870000,
    0x00480102, 0x00000000, 0xC50A2000, 0x00000000, 0xC1A00000, 0x43870000, 0x00480102, 0x00000000,
    0xC50A2000, 0x00000000, 0x41A00000, 0x43870000, 0x00E50000, 0x00000000, 0xC4FD2000, 0x41A00000,
    0x41E00000, 0x43870000, 0x00E50002, 0x00000000, 0xC4F96000, 0x41A00000, 0x41A00000, 0x43870000,
    0x00E50004, 0x00000000, 0xC5007000, 0x41A00000, 0x420C0000, 0x43870000, 0x00E50006, 0x00000000,
    0xC5025000, 0x41A00000, 0x41E00000, 0x43870000, 0x00E50008, 0x00000000, 0xC503E000, 0x41A00000,
    0x41A00000, 0x43870000, 0x00E5000A, 0x00000000, 0xC4F78000, 0x42700000, 0x41A00000, 0x43870000,
    0x00CB0007, 0x00000000, 0x00000000, 0xC3FA0000, 0x00000000, 0x42B40000, 0x00CB0008, 0x00000000,
    0x00000000, 0xC3FA0000, 0x00000000, 0x42B40000, 0x0099000B, 0x00000000, 0xC4E74000, 0x00000000,
    0xC1A00000, 0x43870000, 0x0099000B, 0x00000000, 0xC4E74000, 0x00000000, 0x41A00000, 0x43870000,
    0x00E7000A, 0x00000000, 0xC4C18000, 0x00000000, 0x00000000, 0x43870000, 0x00E7000E, 0x00000000,
    0xC4B50000, 0x42640000, 0xC1C80000, 0x43870000, 0x00E70007, 0x00000000, 0xC4B96000, 0x41C00000,
    0xC2200000, 0x42B40000, 0x00E70007, 0x00000000, 0xC4B0A000, 0x41C00000, 0xC2200000, 0x43870000,
    0x00E70002, 0x00000000, 0xC4B78000, 0x41C00000, 0xC0A00000, 0x43870000, 0x00E70002, 0x00000000,
    0xC4B64000, 0x41C00000, 0xC0A00000, 0x43870000, 0x00E70002, 0x00000000, 0xC4B3C000, 0x41C00000,
    0xC0A00000, 0x42B40000, 0x00E70002, 0x00000000, 0xC4B28000, 0x41C00000, 0xC0A00000, 0x42B40000,
    0x003E0003, N(unk_802441D8), 0x00000000, 0xC3FA0000, 0x00000000, 0x42B40000, 0x003E0003, N(unk_802441D8),
    0x00000000, 0xC3FA0000, 0x00000000, 0x43870000, 0x00E7000F, 0x00000000, 0xC4830000, 0x00000000,
    0xC1F00000, 0x43870000, 0x00E7000F, 0x00000000, 0xC4830000, 0x00000000, 0x00000000, 0x43870000,
    0x00E7000F, 0x00000000, 0xC4830000, 0x00000000, 0x41F00000, 0x43870000, 0x00E7000F, 0x00000000,
    0xC47E8000, 0x00000000, 0xC1F00000, 0x43870000, 0x00E7000F, 0x00000000, 0xC47E8000, 0x00000000,
    0x00000000, 0x43870000, 0x00E7000F, 0x00000000, 0xC47E8000, 0x00000000, 0x41F00000, 0x43870000,
    0x00E7000F, 0x00000000, 0xC4770000, 0x00000000, 0xC1F00000, 0x43870000, 0x00E7000F, 0x00000000,
    0xC4770000, 0x00000000, 0x00000000, 0x43870000, 0x00E7000F, 0x00000000, 0xC4770000, 0x00000000,
    0x41F00000, 0x43870000, 0x00E7000F, 0x00000000, 0xC46F8000, 0x00000000, 0xC1F00000, 0x43870000,
    0x00E7000F, 0x00000000, 0xC46F8000, 0x00000000, 0x00000000, 0x43870000, 0x00E7000F, 0x00000000,
    0xC46F8000, 0x00000000, 0x41F00000, 0x43870000, 0x003B0004, N(unk_802441E0), 0xC4450000, 0x00000000,
    0x00000000, 0x43870000, 0x00E30002, 0x00000000, 0xC42C4000, 0x00000000, 0xC1A00000, 0x43870000,
    0x00E30002, 0x00000000, 0xC42C4000, 0x00000000, 0x41A00000, 0x43870000, 0x00E10002, 0x00000000,
    0xC41FC000, 0x00000000, 0xC1A00000, 0x43870000, 0x00E10002, 0x00000000, 0xC41FC000, 0x00000000,
    0x41A00000, 0x43870000, 0x00E20002, 0x00000000, 0xC4134000, 0x00000000, 0xC1A00000, 0x43870000,
    0x00E20002, 0x00000000, 0xC4134000, 0x00000000, 0x41A00000, 0x43870000, 0x00E60005, 0x00000000,
    0xC3A48000, 0x42140000, 0x00000000, 0x43870000, 0x00D60014, 0x00000000, 0xC3908000, 0x42140000,
    0x00000000, 0x43870000, 0x00E80001, 0x00000000, 0xC3C28000, 0x42F00000, 0x00000000, 0x42B40000,
    0x00E00002, 0x00000000, 0xC2DA0000, 0x00000000, 0x00000000, 0x43870000, 0x00E00002, 0x00000000,
    0xC28A0000, 0x00000000, 0x00000000, 0x43870000, 0x00E00002, 0x00000000, 0xC1E80000, 0x00000000,
    0x00000000, 0x43870000, 0x00E00006, 0x00000000, 0x00000000, 0xC3FA0000, 0x00000000, 0x43870000,
    0x00E00006, 0x00000000, 0x00000000, 0xC3FA0000, 0x00000000, 0x43870000, 0x00E00006, 0x00000000,
    0x00000000, 0xC3FA0000, 0x00000000, 0x43870000, 0x00E20002, 0x00000000, 0x42240000, 0x00000000,
    0xC1A00000, 0x43870000, 0x00E20002, 0x00000000, 0x42240000, 0x00000000, 0x41A00000, 0x43870000,
};

Script N(script_80244850) = SCRIPT({
    func_80242690_E079F0(0);
    func_80242690_E079F0(1);
    func_80242690_E079F0(2);
    func_80242690_E079F0(3);
    func_80242690_E079F0(4);
    func_80242690_E079F0(5);
    func_80242690_E079F0(6);
    func_80242690_E079F0(9);
    func_80242690_E079F0(10);
    func_80242690_E079F0(7);
    func_80242690_E079F0(8);
    func_80242690_E079F0(11);
    func_80242690_E079F0(12);
    func_80242690_E079F0(13);
    func_80242690_E079F0(14);
    func_80242690_E079F0(15);
    func_80242754_E07AB4(0x13400, SI_VAR(0));
    func_80242690_E079F0(16);
    func_80242690_E079F0(17);
    func_802427B4_E07B14(SI_VAR(0));
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF6D2) {
            break;
        }
    }
    DeleteNpc(0);
    DeleteNpc(1);
    DeleteNpc(2);
    DeleteNpc(3);
    DeleteNpc(4);
    DeleteNpc(5);
    DeleteNpc(6);
    DeleteNpc(9);
    DeleteNpc(10);
    DeleteNpc(7);
    DeleteNpc(8);
    DeleteNpc(11);
    DeleteNpc(12);
    DeleteNpc(13);
    DeleteNpc(14);
    DeleteNpc(15);
    sleep 1;
    func_80242690_E079F0(18);
    func_80242690_E079F0(19);
    func_80242690_E079F0(20);
    func_80242690_E079F0(21);
    func_80242690_E079F0(22);
    func_80242690_E079F0(23);
    func_80242690_E079F0(24);
    func_80242690_E079F0(25);
    func_80242690_E079F0(26);
    func_80242690_E079F0(27);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF90E) {
            break;
        }
    }
    DeleteNpc(16);
    DeleteNpc(17);
    sleep 1;
    func_80242754_E07AB4(0x4700, SI_VAR(0));
    func_80242690_E079F0(36);
    func_80242690_E079F0(37);
    func_80242690_E079F0(50);
    func_80242690_E079F0(28);
    func_80242690_E079F0(29);
    func_80242690_E079F0(30);
    func_80242690_E079F0(31);
    func_80242690_E079F0(32);
    func_80242690_E079F0(33);
    func_80242690_E079F0(34);
    func_80242690_E079F0(35);
    func_80242690_E079F0(38);
    func_80242690_E079F0(39);
    func_80242690_E079F0(40);
    func_80242690_E079F0(41);
    func_80242690_E079F0(42);
    func_80242690_E079F0(43);
    func_80242690_E079F0(44);
    func_80242690_E079F0(45);
    func_80242690_E079F0(46);
    func_80242690_E079F0(47);
    func_80242690_E079F0(48);
    func_80242690_E079F0(49);
    func_802427B4_E07B14(SI_VAR(0));
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFC87) {
            break;
        }
    }
    DeleteNpc(18);
    DeleteNpc(19);
    DeleteNpc(20);
    DeleteNpc(21);
    DeleteNpc(22);
    DeleteNpc(23);
    DeleteNpc(24);
    DeleteNpc(25);
    DeleteNpc(26);
    DeleteNpc(27);
    sleep 1;
    func_80242690_E079F0(51);
    func_80242690_E079F0(52);
    func_80242690_E079F0(53);
    func_80242690_E079F0(54);
    func_80242690_E079F0(55);
    func_80242690_E079F0(56);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFD4F) {
            break;
        }
    }
    DeleteNpc(36);
    DeleteNpc(37);
    DeleteNpc(50);
    DeleteNpc(28);
    DeleteNpc(29);
    DeleteNpc(30);
    DeleteNpc(31);
    DeleteNpc(32);
    DeleteNpc(33);
    DeleteNpc(34);
    DeleteNpc(35);
    DeleteNpc(38);
    DeleteNpc(39);
    DeleteNpc(40);
    DeleteNpc(41);
    DeleteNpc(42);
    DeleteNpc(43);
    DeleteNpc(44);
    DeleteNpc(45);
    DeleteNpc(46);
    DeleteNpc(47);
    DeleteNpc(48);
    DeleteNpc(49);
    sleep 1;
    func_80242690_E079F0(57);
    func_80242690_E079F0(58);
    func_80242690_E079F0(59);
    func_80242690_E079F0(60);
    func_80242690_E079F0(61);
    func_80242690_E079F0(62);
    func_80242690_E079F0(63);
    func_80242690_E079F0(64);
    func_80242690_E079F0(65);
    func_80242690_E079F0(66);
    func_80242690_E079F0(67);
});

Script N(script_802451B8) = SCRIPT({
    sleep 60;
    spawn N(script_80243D74);
    spawn N(script_80243D90);
    spawn N(script_80243DB0);
});

// Unable to use DSL: DSL does not support script opcode 0x55
// *INDENT-OFF*
Script N(script_802451F8) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 145, 0, 8),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243DD0)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80244850)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80245820), SI_VAR(10)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_VAR(10), SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802451B8)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80243E44), SI_VAR(10)),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80243ED8), SI_VAR(11)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFF448),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80245BD0)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFF47A),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80245C74)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFF47F),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80245FF0)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFF66E),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80246A60)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFF90E),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80247620)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFFB20),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80247D68)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFFC87),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802481B0)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFFD4F),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80248D1C), SI_VAR(12)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetCamPosition, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_IF_GT, SI_VAR(0), 0xFFFFFEB6),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(10)),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(11)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_VAR(12), SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80249034)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 150),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802492B0)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 200),
    SI_CMD(ScriptOpcode_CALL, GotoMap, D_80249438_E0E798, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 100),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80245740) = SCRIPT({
    SetNpcFlagBits(7, 0x40000, 1);
    GetNpcPos(SI_VAR(10), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(3) -= 120;
    SI_VAR(5) = SI_VAR(3);
    SI_VAR(5) += 15;
    PlayEffect(17, 0, SI_VAR(2), SI_VAR(5), SI_VAR(4), 30, 0, 0, 0, 0, 0, 0, 0, 0);
    SetNpcPos(SI_VAR(10), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    func_80242978_E07CD8();
});

Script N(script_80245820) = SCRIPT({
    func_802428C0_E07C20();
    sleep 20;
    SI_VAR(10) = 0;
    spawn N(script_80245740);
    sleep 2;
    SI_VAR(10) = 1;
    spawn N(script_80245740);
    sleep 2;
    SI_VAR(10) = 2;
    spawn N(script_80245740);
    sleep 3;
    SI_VAR(10) = 4;
    spawn N(script_80245740);
    sleep 5;
    SI_VAR(10) = 5;
    spawn N(script_80245740);
    sleep 3;
    SI_VAR(10) = 3;
    spawn N(script_80245740);
    sleep 7;
    SI_VAR(10) = 6;
    spawn N(script_80245740);
    sleep 30;
    func_80242900_E07C60();
    sleep 60;
});

Script N(script_80245978) = SCRIPT({
    SetNpcFlagBits(7, 0x40000, 1);
    parallel {
        loop {
            SetNpcAnimation(7, 0xDE0006);
            sleep 30;
            SetNpcAnimation(7, 0xDE0007);
            sleep 30;
        }
    }
    GetNpcPos(7, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF4C;
    NpcMoveTo(7, SI_VAR(0), SI_VAR(2), 120);
    func_80242A68_E07DC8(7);
    GetNpcPos(7, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF4C;
    NpcMoveTo(7, SI_VAR(0), SI_VAR(2), 120);
});

Script N(script_80245AA4) = SCRIPT({
    SetNpcFlagBits(8, 0x40000, 1);
    parallel {
        loop {
            SetNpcAnimation(8, 0xDE0006);
            sleep 30;
            SetNpcAnimation(8, 0xDE0007);
            sleep 30;
        }
    }
    GetNpcPos(8, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF2E;
    NpcMoveTo(8, SI_VAR(0), SI_VAR(2), 140);
    func_80242B68_E07EC8(8);
    GetNpcPos(8, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF4C;
    NpcMoveTo(8, SI_VAR(0), SI_VAR(2), 120);
});

Script N(script_80245BD0) = SCRIPT({
    SI_VAR(10) = spawn N(script_80245978);
    SI_VAR(11) = spawn N(script_80245AA4);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF510) {
            break;
        }
    }
    kill SI_VAR(10);
    kill SI_VAR(11);
});

Script N(script_80245C74) = SCRIPT({
    spawn {
        GetNpcPos(9, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFED4;
        NpcMoveTo(9, SI_VAR(0), SI_VAR(2), 500);
    }
    spawn {
        GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFED4;
        NpcMoveTo(10, SI_VAR(0), SI_VAR(2), 500);
    }
});

s32 N(unk_80245D34)[] = {
    0x00000000,
};

Script N(script_80245D38) = SCRIPT({
    EnableTexPanning(39, 1);
    EnableTexPanning(41, 1);
    EnableTexPanning(42, 1);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 8192;
        SetTexPanOffset(14, 0, SI_VAR(0), 0);
        sleep SI_VAR(1);
    }
});

Script N(script_80245DF0) = SCRIPT({
    EnableTexPanning(40, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 8192;
        SetTexPanOffset(12, 0, SI_VAR(0), 0);
        sleep 16;
    }
});

Script N(script_80245E70) = SCRIPT({
    EnableModel(43, 1);
    EnableModel(44, 1);
    EnableTexPanning(44, 1);
    func_802C90FC(43, 1, -1);
    func_802C94A0(1, func_80242C94_E07FF4, 0);
    parallel {
        MakeLerp(0, 255, 90, 0);
        loop {
            UpdateLerp();
            func_80242C68_E07FC8(SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    loop {
        SI_VAR(0) += 4096;
        SI_VAR(1) += 1024;
        SetTexPanOffset(15, 0, SI_VAR(0), SI_VAR(1));
        sleep 4;
    }
});

Script N(script_80245FF0) = SCRIPT({
    EnableModel(43, 0);
    EnableModel(44, 0);
    SI_VAR(0) = 8;
    SI_VAR(10) = spawn N(script_80245D38);
    SI_VAR(11) = spawn N(script_80245DF0);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF5CE) {
            break;
        }
    }
    kill SI_VAR(10);
    SI_VAR(0) = 1;
    SI_VAR(10) = spawn N(script_80245D38);
    SI_VAR(12) = spawn N(script_80245E70);
    SetNpcFlagBits(15, 8, 1);
    MakeLerp(0, 55, 90, 0);
    loop {
        UpdateLerp();
        TranslateModel(36, 0, SI_VAR(0), 0);
        SI_VAR(0) += 0xFFFFFFED;
        SetNpcPos(15, 0xFFFFF61F, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    kill SI_VAR(10);
    SI_VAR(0) = 8;
    SI_VAR(10) = spawn N(script_80245D38);
    sleep 10;
    SetNpcAnimation(15, 0xDE000D);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF6D7) {
            break;
        }
    }
    kill SI_VAR(10);
    kill SI_VAR(11);
    kill SI_VAR(12);
});

s32 pad_006284[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80246290) = SCRIPT({
    EnableTexPanning(49, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 8192;
        SetTexPanOffset(14, 0, SI_VAR(0), 0);
        sleep 8;
    }
});

Script N(script_80246310) = SCRIPT({
    EnableTexPanning(50, 1);
    EnableTexPanning(52, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 1024;
        SetTexPanOffset(10, 1, SI_VAR(0), SI_VAR(0));
        sleep 4;
    }
});

Script N(script_802463A4) = SCRIPT({
    EnableTexPanning(51, 1);
    SetTexPanOffset(11, 0, 0x8000, 0);
    loop {
        RandInt(30, SI_VAR(0));
        SI_VAR(0) += 10;
        sleep SI_VAR(0);
        RandInt(1, SI_VAR(0));
        SI_VAR(0) += 1;
        loop SI_VAR(0) {
            SetTexPanOffset(11, 0, 0, 0);
            RandInt(5, SI_VAR(1));
            SI_VAR(1) += 2;
            sleep SI_VAR(1);
            SetTexPanOffset(11, 0, 0x8000, 0);
            RandInt(5, SI_VAR(1));
            SI_VAR(1) += 2;
            sleep SI_VAR(1);
        }
    }
});

Script N(script_802464F8) = SCRIPT({
    GetNpcPos(16, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 30;
    SI_VAR(2) -= 2;
    GetNpcPos(17, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(4) += 30;
    SI_VAR(5) -= 2;
    loop {
        PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 15;
    }
});

Script N(script_80246628) = SCRIPT({
    spawn {
        SetNpcPos(24, 0xFFFFF777, 130, 0xFFFFFFE2);
        NpcFlyTo(24, 0xFFFFF777, 50, 0xFFFFFFE2, 10, 0, 0);
        NpcFlyTo(24, 0xFFFFF803, 50, 0xFFFFFFE2, 70, 0, 0);
        SetNpcAnimation(24, 0xCB000B);
        NpcFlyTo(24, 0xFFFFF993, 50, 0xFFFFFFE2, 200, 0, 0);
        SetNpcPos(24, 0, 0xFFFFFE0C, 0);
    }
    spawn {
        SetNpcPos(25, 0xFFFFF777, 130, 0xFFFFFFE2);
        NpcFlyTo(25, 0xFFFFF777, 50, 0xFFFFFFE2, 10, 0, 0);
        NpcFlyTo(25, 0xFFFFF803, 50, 0xFFFFFFE2, 70, 0, 0);
        SetNpcAnimation(25, 0xCB000C);
        NpcFlyTo(25, 0xFFFFF993, 50, 0xFFFFFFE2, 200, 0, 0);
        SetNpcPos(25, 0, 0xFFFFFE0C, 0);
    }
});

Script N(script_802467E0) = SCRIPT({
    GetNpcPos(26, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 0xFFFFFF88;
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > SI_VAR(3)) {
            break;
        }
    }
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(26, 0, SI_VAR(0), 0);
        SetNpcRotation(27, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    GetNpcPos(26, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 100;
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > SI_VAR(3)) {
            break;
        }
    }
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(26, 0, SI_VAR(0), 0);
        SetNpcRotation(27, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80246A60) = SCRIPT({
    SI_VAR(13) = spawn N(script_802464F8);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF6D2) {
            break;
        }
    }
    sleep 1;
    SI_VAR(10) = spawn N(script_80246290);
    spawn N(script_802467E0);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF7DB) {
            break;
        }
    }
    SetNpcAnimation(18, 0xE50001);
    SetNpcAnimation(19, 0xE50003);
    SetNpcAnimation(20, 0xE50005);
    SetNpcAnimation(21, 0xE50007);
    SetNpcAnimation(22, 0xE50009);
    SetNpcAnimation(23, 0xE5000B);
    GetNpcPos(20, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlayEffect(82, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 20, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    spawn N(script_80246628);
    SI_VAR(11) = spawn N(script_80246310);
    SI_VAR(12) = spawn N(script_802463A4);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF90E) {
            break;
        }
    }
    kill SI_VAR(13);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFF8C6) {
            break;
        }
    }
    kill SI_VAR(10);
    kill SI_VAR(11);
    kill SI_VAR(12);
});

s32 pad_006D58[] = {
    0x00000000, 0x00000000,
};

Script N(script_80246D60) = SCRIPT({
    EnableTexPanning(66, 1);
    EnableTexPanning(70, 1);
    EnableTexPanning(55, 1);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 4096;
        SetTexPanOffset(9, 1, SI_VAR(0), SI_VAR(0));
        sleep SI_VAR(1);
    }
});

Script N(script_80246E18) = SCRIPT({
    EnableTexPanning(57, 1);
    EnableTexPanning(62, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x4000;
        SetTexPanOffset(8, 0, SI_VAR(0), SI_VAR(0));
        sleep 6;
    }
});

s32 N(unk_80246EAC)[] = {
    0x00000038, 0x0000003A, 0x0000003B, 0x0000003C, 0x0000003D, 0x0000003E, 0x0000003F, 0x0000FFFF,
};

Script N(script_80246ECC) = SCRIPT({
    spawn {
        MakeLerp(0, 0xFFFFFFA6, 30, 0);
        loop {
            UpdateLerp();
            RotateGroup(69, SI_VAR(0), 1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        MakeLerp(0, 90, 30, 0);
        loop {
            UpdateLerp();
            RotateGroup(72, SI_VAR(0), 1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    func_80242CF0_E08050(0, N(unk_80246EAC), 3);
    func_80242E14_E08174(3, 255, 255, 255, 120, 120, 80, 0, 0, 0);
    sleep 30;
    func_80242E14_E08174(3, 255, 255, 255, 0, 0, 0, 0, 0, 0);
});

Script N(script_80247098) = SCRIPT({
    SI_VAR(0) = 270;
    loop {
        if (SI_VAR(0) == 270) {
            SI_VAR(0) = 90;
        } else {
            SI_VAR(0) = 270;
        }
        SetNpcAnimation(29, 0xE7000D);
        InterpNpcYaw(29, SI_VAR(0), 0);
        sleep 10;
        SetNpcAnimation(29, 0xE7000E);
        sleep 20;
    }
});

Script N(script_80247164) = SCRIPT({
    SI_VAR(2) = SI_VAR(0);
    loop {
        loop 3 {
            SetNpcAnimation(SI_VAR(2), 0xE70008);
            sleep 10;
            SetNpcAnimation(SI_VAR(2), 0xE70007);
            sleep 10;
        }
        SetNpcAnimation(SI_VAR(2), 0xE70006);
        sleep 10;
        MakeLerp(0, 360, 10, 0);
        loop {
            UpdateLerp();
            SetNpcRotation(SI_VAR(2), 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 10;
    }
});

Script N(script_8024729C) = SCRIPT({
    sleep 30;
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(3) = SI_VAR(1);
    SetNpcJumpscale(SI_VAR(2), 0.5);
    NpcJump0(SI_VAR(2), SI_VAR(3), 10, 20, 20);
    sleep 10;
    loop {
        loop 2 {
            SetNpcAnimation(SI_VAR(2), 0xE70001);
            sleep 5;
            SetNpcAnimation(SI_VAR(2), 0xE70002);
            sleep 5;
            SetNpcAnimation(SI_VAR(2), 0xE70003);
            sleep 5;
            SetNpcAnimation(SI_VAR(2), 0xE70002);
            sleep 5;
        }
        MakeLerp(0, 360, 10, 0);
        loop {
            UpdateLerp();
            SetNpcRotation(SI_VAR(2), 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 10;
    }
});

Script N(script_80247450) = SCRIPT({
    SI_VAR(7) = spawn N(script_80247098);
    SI_VAR(0) = 30;
    SI_VAR(8) = spawn N(script_80247164);
    SI_VAR(0) = 31;
    SI_VAR(9) = spawn N(script_80247164);
    SI_VAR(0) = 32;
    SI_VAR(1) = 0xFFFFFA1C;
    SI_VAR(10) = spawn N(script_8024729C);
    SI_VAR(0) = 33;
    SI_VAR(1) = 0xFFFFFA44;
    SI_VAR(11) = spawn N(script_8024729C);
    SI_VAR(0) = 34;
    SI_VAR(1) = 0xFFFFFA6C;
    SI_VAR(12) = spawn N(script_8024729C);
    SI_VAR(0) = 35;
    SI_VAR(1) = 0xFFFFFA94;
    SI_VAR(13) = spawn N(script_8024729C);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFB66) {
            break;
        }
    }
    kill SI_VAR(7);
    kill SI_VAR(8);
    kill SI_VAR(9);
    kill SI_VAR(10);
    kill SI_VAR(11);
    kill SI_VAR(12);
    kill SI_VAR(13);
});

Script N(script_80247620) = SCRIPT({
    SI_VAR(0) = 4;
    SI_VAR(10) = spawn N(script_80246D60);
    SI_VAR(11) = spawn N(script_80246E18);
    sleep 10;
    NpcMoveTo(28, 0xFFFFF990, 0, 50);
    SetNpcAnimation(28, 0xE70009);
    InterpNpcYaw(28, 90, 0);
    sleep 10;
    SetNpcAnimation(28, 0xE7000B);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFA12) {
            break;
        }
    }
    spawn {
        SetNpcAnimation(28, 0xE7000A);
        NpcMoveTo(28, 0xFFFFF92C, 0, 50);
    }
    spawn N(script_80247450);
    kill SI_VAR(10);
    SI_VAR(0) = 2;
    SI_VAR(10) = spawn N(script_80246D60);
    await N(script_80246ECC);
    kill SI_VAR(10);
    SI_VAR(0) = 4;
    SI_VAR(10) = spawn N(script_80246D60);
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFB66) {
            break;
        }
    }
    kill SI_VAR(10);
    kill SI_VAR(11);
});

Script N(script_80247854) = SCRIPT({
    GetNpcPos(38, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) =f SI_VAR(0);
    SI_VAR(1) =f SI_VAR(0);
    SI_VAR(1) += 30;
    SI_VAR(2) =f SI_VAR(0);
    SI_VAR(2) += 60;
    SI_VAR(3) =f SI_VAR(0);
    SI_VAR(3) += 90;
    SetNpcPos(38, SI_VAR(0), 0, 0xFFFFFFE2);
    SetNpcPos(39, SI_VAR(0), 0, 0);
    SetNpcPos(40, SI_VAR(0), 0, 30);
    SetNpcPos(41, SI_VAR(1), 0, 0xFFFFFFE2);
    SetNpcPos(42, SI_VAR(1), 0, 0);
    SetNpcPos(43, SI_VAR(1), 0, 30);
    SetNpcPos(44, SI_VAR(2), 0, 0xFFFFFFE2);
    SetNpcPos(45, SI_VAR(2), 0, 0);
    SetNpcPos(46, SI_VAR(2), 0, 30);
    SetNpcPos(47, SI_VAR(3), 0, 0xFFFFFFE2);
    SetNpcPos(48, SI_VAR(3), 0, 0);
    SetNpcPos(49, SI_VAR(3), 0, 30);
    parallel {
        func_80242840_E07BA0(39);
    }
    parallel {
        func_80242840_E07BA0(40);
    }
    parallel {
        func_80242840_E07BA0(41);
    }
    parallel {
        func_80242840_E07BA0(42);
    }
    parallel {
        func_80242840_E07BA0(43);
    }
    parallel {
        func_80242840_E07BA0(44);
    }
    parallel {
        func_80242840_E07BA0(45);
    }
    parallel {
        func_80242840_E07BA0(46);
    }
    parallel {
        func_80242840_E07BA0(47);
    }
    parallel {
        func_80242840_E07BA0(48);
    }
    parallel {
        func_80242840_E07BA0(49);
    }
    func_80242840_E07BA0(38);
});

Script N(script_80247BB0) = SCRIPT({
    GetNpcPos(SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(2) += 0xFFFFFF4C;
    NpcMoveTo(SI_VAR(0), SI_VAR(2), SI_VAR(4), 90);
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(3) = 28;
    SI_VAR(3) -= SI_VAR(1);
    SI_VAR(1) += 10;
    SetNpcAnimation(SI_VAR(2), 0xE70010);
    sleep SI_VAR(1);
    SetNpcAnimation(SI_VAR(2), 0xE70011);
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(SI_VAR(2), 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep SI_VAR(3);
    SetNpcAnimation(SI_VAR(2), 0xE7000F);
    GetNpcPos(SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(3) += 0xFFFFFF4C;
    NpcMoveTo(SI_VAR(2), SI_VAR(3), SI_VAR(5), 90);
});

Script N(script_80247D68) = SCRIPT({
    SI_VAR(1) = 0;
    SI_VAR(0) = 38;
    spawn N(script_80247BB0);
    SI_VAR(0) = 39;
    spawn N(script_80247BB0);
    SI_VAR(0) = 40;
    spawn N(script_80247BB0);
    SI_VAR(1) = 8;
    SI_VAR(0) = 41;
    spawn N(script_80247BB0);
    SI_VAR(0) = 42;
    spawn N(script_80247BB0);
    SI_VAR(0) = 43;
    spawn N(script_80247BB0);
    SI_VAR(1) = 10;
    SI_VAR(0) = 44;
    spawn N(script_80247BB0);
    SI_VAR(0) = 45;
    spawn N(script_80247BB0);
    SI_VAR(0) = 46;
    spawn N(script_80247BB0);
    SI_VAR(1) = 18;
    SI_VAR(0) = 47;
    spawn N(script_80247BB0);
    SI_VAR(0) = 48;
    spawn N(script_80247BB0);
    SI_VAR(0) = 49;
    spawn N(script_80247BB0);
    sleep 90;
    SI_VAR(10) = spawn N(script_80247854);
    sleep 48;
    kill SI_VAR(10);
    sleep 130;
    GetNpcPos(50, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF4C;
    NpcMoveTo(50, SI_VAR(0), SI_VAR(2), 45);
    func_802CDE68(50, 10);
    spawn {
        SI_VAR(0) = 0;
        loop 10 {
            SI_VAR(0) += 9;
            SetNpcRotation(50, 0, 0, SI_VAR(0));
            sleep 1;
        }
        SetNpcRotation(50, 0, 0, 0);
        SetNpcAnimation(50, 0x3B0010);
    }
    SetNpcJumpscale(50, 1.0);
    GetNpcPos(50, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFD3;
    NpcJump0(50, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SI_VAR(0) = 50;
    SI_VAR(10) = spawn N(script_80244180);
    sleep 80;
    func_802CDE68(50, 0);
    kill SI_VAR(10);
    SetNpcAnimation(50, 0x3B0001);
    GetNpcPos(50, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFFB;
    NpcJump0(50, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetNpcAnimation(50, 0x3B0004);
    GetNpcPos(50, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF4C;
    NpcMoveTo(50, SI_VAR(0), SI_VAR(2), 90);
});

s32 pad_0081A8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802481B0) = SCRIPT({
    sleep 10;
    func_802CFE80(51, 3);
    func_802CFE80(52, 3);
    func_802CFE80(53, 3);
    func_802CFE80(54, 3);
    func_802CFE80(55, 4);
    func_802CFE80(56, 4);
    func_802CFFC0(51, 1, 2, 10, 5, 10, 5, 0, 0);
    func_802CFFC0(52, 1, 2, 10, 5, 10, 5, 0, 0);
    func_802CFFC0(53, 1, 2, 10, 5, 10, 5, 0, 0);
    func_802CFFC0(54, 1, 2, 10, 5, 10, 5, 0, 0);
    func_802CFFC0(55, 1, 2, 10, 5, 10, 5, 4, 5);
    func_802CFFC0(56, 1, 2, 10, 5, 10, 5, 4, 5);
});

Script N(script_80248364) = SCRIPT({
    EnableTexPanning(74, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    loop {
        SI_VAR(0) += 1024;
        SetTexPanOffset(7, 0, SI_VAR(0), 0);
        SI_VAR(1) += 0x4400;
        SetTexPanOffset(7, 1, SI_VAR(0), 0);
        sleep 12;
    }
});

Script N(script_80248420) = SCRIPT({
    EnableTexPanning(75, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 8192;
        SetTexPanOffset(14, 0, SI_VAR(0), 0);
        sleep 8;
    }
});

Script N(script_802484A0) = SCRIPT({
    EnableTexPanning(76, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 4096;
        SetTexPanOffset(6, 1, SI_VAR(0), 0);
        sleep 6;
    }
});

Script N(script_80248520) = SCRIPT({
    EnableTexPanning(77, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 4096;
        SetTexPanOffset(5, 0, 0, SI_VAR(0));
        sleep 5;
    }
});

Script N(script_802485A0) = SCRIPT({
    EnableTexPanning(79, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x3000;
        SetTexPanOffset(13, 0, SI_VAR(0), 0);
        sleep 8;
    }
});

s32 N(vectorList_80248620)[] = {
    0xC3C28000, 0x42F00000, 0x00000000, 0xC3BD8000, 0x42B40000, 0x00000000, 0xC3AE8000, 0x42A00000,
    0x00000000, 0xC3A98000, 0x42B40000, 0x00000000, 0xC3AE8000, 0x42C80000, 0x00000000, 0xC3B38000,
    0x42B40000, 0x00000000, 0xC3AE8000, 0x42A00000, 0x00000000, 0xC3A98000, 0x42A00000, 0x40000000,
    0xC3A48000, 0x42A00000, 0x40000000, 0xC39F8000, 0x42B40000, 0x40000000, 0xC3A48000, 0x42C80000,
    0x40000000, 0xC3A98000, 0x42B40000, 0x40000000, 0xC3A48000, 0x42A00000, 0x40000000, 0xC3868000,
    0x42B40000, 0x40000000,
};

Script N(script_802486C8) = SCRIPT({
    loop {
        sleep 1;
        GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFEB6) {
            break;
        }
    }
    sleep 30;
    LoadPath(60, N(vectorList_80248620), 14, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(59, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
    InterpNpcYaw(59, 270, 0);
    sleep 70;
    NpcFlyTo(59, 0xFFFFFF07, 120, 0, 10, 0xFFFFFFF6, 0);
    SetNpcPos(59, 0, 0xFFFFFE0C, 0);
});

Script N(script_80248838) = SCRIPT({
    loop 5 {
        InterpNpcYaw(57, 90, 7);
        sleep 45;
        InterpNpcYaw(57, 270, 7);
        sleep 45;
    }
    sleep 40;
    SetNpcAnimation(57, 0xE6000A);
    sleep 10;
    SetNpcAnimation(57, 0xE60006);
    sleep 30;
    InterpNpcYaw(57, 90, 0);
    sleep 70;
    SetNpcAnimation(57, 0xE60008);
    sleep 60;
    SetNpcAnimation(57, 0xE60006);
    sleep 60;
    SetNpcAnimation(57, 0xE60002);
    sleep 40;
    SetNpcAnimation(57, 0xE60009);
    sleep 30;
    SetNpcAnimation(57, 0xE60002);
    sleep 30;
    SetNpcAnimation(57, 0xE60004);
    GetNpcPos(57, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 5;
    SI_VAR(2) += 0xFFFFFFE2;
    NpcMoveTo(57, SI_VAR(0), SI_VAR(2), 20);
    loop 7 {
        SI_VAR(1) += 0xFFFFFFFB;
        SetNpcPos(57, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 5;
    }
    SetNpcPos(57, SI_VAR(0), 0, SI_VAR(2));
});

Script N(script_80248A88) = SCRIPT({
    loop 5 {
        InterpNpcYaw(58, 90, 7);
        sleep 45;
        InterpNpcYaw(58, 270, 7);
        sleep 45;
    }
    sleep 40;
    SetNpcAnimation(58, 0xD60011);
    sleep 60;
    InterpNpcYaw(58, 90, 0);
    sleep 40;
    SetNpcAnimation(58, 0xD60015);
    sleep 60;
    SetNpcAnimation(58, 0xD6000D);
    sleep 60;
    InterpNpcYaw(58, 270, 0);
    sleep 10;
    SetNpcAnimation(58, 0xD60011);
    sleep 10;
    SetNpcAnimation(58, 0xD60012);
    sleep 20;
    SetNpcAnimation(58, 0xD60013);
    sleep 10;
    SetNpcAnimation(58, 0xD6000D);
    sleep 20;
    SetNpcAnimation(58, 0xD60016);
    sleep 40;
    SetNpcAnimation(58, 0xD60010);
    GetNpcPos(58, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFFFB;
    SI_VAR(2) += 0xFFFFFFE2;
    NpcMoveTo(58, SI_VAR(0), SI_VAR(2), 20);
    loop 7 {
        SI_VAR(1) += 0xFFFFFFFB;
        SetNpcPos(58, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 5;
    }
    SetNpcPos(58, SI_VAR(0), 0, SI_VAR(2));
});

Script N(script_80248D1C) = SCRIPT({
    spawn N(script_80248364);
    spawn N(script_80248420);
    spawn N(script_802484A0);
    spawn N(script_80248520);
    spawn N(script_802485A0);
    spawn N(script_80248A88);
    spawn N(script_802486C8);
    await N(script_80248838);
});

Script N(script_80248D8C) = SCRIPT({
    parallel {
        EnableNpcShadow(SI_VAR(1), 0);
        SetNpcJumpscale(SI_VAR(1), 0.5);
        loop {
            sleep 30;
            GetNpcPos(SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(4));
            SI_VAR(2) += 0xFFFFFFF9;
            SetNpcPos(SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4));
            SI_VAR(2) += 0xFFFFFFE7;
            NpcJump0(SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), 40);
            SetNpcPos(SI_VAR(1), 0, 0xFFFFFE0C, 0);
        }
    }
    parallel {
        loop {
            SetNpcAnimation(SI_VAR(0), 0xE00002);
            sleep 30;
            SetNpcAnimation(SI_VAR(0), 0xE00003);
            sleep 5;
            SetNpcAnimation(SI_VAR(0), 0xE00005);
            sleep 5;
            SetNpcAnimation(SI_VAR(0), 0xE00004);
            sleep 21;
            SetNpcAnimation(SI_VAR(0), 0xE00003);
            sleep 5;
            SetNpcAnimation(SI_VAR(0), 0xE00005);
            sleep 5;
        }
    }
    SetNpcSpeed(SI_VAR(0), 0.6669921875);
    GetNpcPos(SI_VAR(0), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    SI_VAR(2) += 0xFFFFFDA8;
    NpcMoveTo(SI_VAR(0), SI_VAR(2), SI_VAR(4), 0);
});

Script N(script_80248FC8) = SCRIPT({
    SetNpcSpeed(SI_VAR(0), 0.6669921875);
    GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(1) += 0xFFFFFDA8;
    NpcMoveTo(SI_VAR(0), SI_VAR(1), SI_VAR(2), 0);
});

Script N(script_80249034) = SCRIPT({
    func_802CFE80(60, 4);
    func_802CFE80(61, 4);
    func_802CFE80(62, 4);
    func_802CFE80(66, 4);
    func_802CFE80(67, 4);
    func_802CFFC0(60, 1, 2, 10, 5, 10, 5, 4, 5);
    func_802CFFC0(61, 1, 2, 10, 5, 10, 5, 4, 5);
    func_802CFFC0(62, 1, 2, 10, 5, 10, 5, 4, 5);
    func_802CFFC0(66, 1, 2, 10, 5, 10, 5, 4, 5);
    func_802CFFC0(67, 1, 2, 10, 5, 10, 5, 4, 5);
    SI_VAR(0) = 60;
    SI_VAR(1) = 63;
    spawn N(script_80248D8C);
    SI_VAR(0) = 61;
    SI_VAR(1) = 64;
    spawn N(script_80248D8C);
    SI_VAR(0) = 62;
    SI_VAR(1) = 65;
    spawn N(script_80248D8C);
    SI_VAR(0) = 66;
    spawn N(script_80248FC8);
    SI_VAR(0) = 67;
    spawn N(script_80248FC8);
    SI_VAR(0) = 0;
    loop 500 {
        SI_VAR(0) -= 0.6669921875;
        TranslateGroup(82, SI_VAR(0), 0, 0);
        sleep 1;
    }
});

Script N(script_802492B0) = SCRIPT({
    spawn {
        NpcMoveTo(57, 0xFFFFFEFD, 0xFFFFFF6A, 240);
    }
    spawn {
        NpcMoveTo(58, 0xFFFFFF1B, 0xFFFFFF6A, 240);
    }
    sleep 60;
    GetCamPosition(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) = 0.0;
    loop {
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 0.333984375;
        sleep 1;
    }
});

s32 pad_00939C[] = {
    0x00000000,
};

s32 N(unk_802493A0)[] = {
    N(script_80241C24), N(vectorList_80241C54), N(vectorList_80241C54), D_80241C18_C9DF18, D_80241C18_C9DF18, D_80241C18_C9DF18, N(vectorList_80241C54), N(vectorList_80241C54),
    N(vectorList_80241C54), N(vectorList_80241C54), N(vectorList_80241C54), N(vectorList_80241C54), N(vectorList_80241C54), N(script_80241C24), N(vectorList_80241C54), N(script_80241C2C),
};

// rodata: jtbl_802493E0_E0E740

// rodata: jtbl_80249420_E0E780

// rodata: D_80249438_E0E798
