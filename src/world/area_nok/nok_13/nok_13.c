#include "nok_13.h"

s32 pad_000E14[3];
Script N(script_80241500);
s32 pad_00153C[1];
Script N(script_ExitWalk_80241540);
Script N(script_ExitWalk_80241590);
Script N(script_ExitWalk_802415E0);
Script N(script_80241630);
Script N(script_8024170C);
Script N(script_802418CC);
Script N(main);
s32 pad_001A3C[1];
Script N(script_80241A40);
Script N(script_80241A78);
Script N(script_80241AB0);
Script N(script_80241B94);
Script N(script_MakeEntities);
s32 pad_001E18[2];
s32 N(unk_80241E20)[12];
Script N(script_80241E50);
s32 N(unk_80241E8C)[135];
NpcGroupList N(npcGroupList_802420A8);
s32 pad_0020B4[3];
Script N(script_802420C0);
Script N(script_80242134);
s32 N(unk_80242160)[6];
Script N(script_80242178);
s32 pad_0021A4[3];
const char D_802421B0_A027B0[8]; // "nok_12"
const char D_802421B8_A027B8[8]; // "nok_01"
const char D_802421C0_A027C0[8]; // "nok_14"
s32 pad_0021C8[2];
s32 pad_002214[3];
s32 pad_002234[3];

// text: func_80240000_A00600

// text: func_80240230_A00830

// text: N(UnkNpcAIFunc1)

// text: func_80240628_A00C28

// text: func_802407CC_A00DCC

// text: func_802408AC_A00EAC

// text: N(UnkDurationCheck)

// text: func_80240BF0_A011F0

s32 pad_000E14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240E20_A01420

// text: func_80241360_A01960

// text: func_802413CC_A019CC

EntryList N(entryList) = {
    { -488.0f, 150.0f, 0.0f, 90.0f },
    { 165.0f, 0.0f, -483.0f, 180.0f },
    { 277.0f, 150.0f, 210.0f, 315.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190047,
};

Script N(script_80241500) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
    PlaySound(0x8000005B);
});

s32 pad_00153C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241540) = SCRIPT({
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802421B0_A027B0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241590) = SCRIPT({
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802421B8_A027B8, 0);
    sleep 100;
});

Script N(script_ExitWalk_802415E0) = SCRIPT({
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802421C0_A027C0, 0);
    sleep 100;
});

Script N(script_80241630) = SCRIPT({
    SetTexPanner(113, 0);
    SetTexPanner(114, 0);
    SetTexPanner(115, 0);
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

Script N(script_8024170C) = SCRIPT({
    spawn {
        SetTexPanner(146, 1);
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
    SetTexPanner(148, 2);
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

Script N(script_802418CC) = SCRIPT({
    bind N(script_ExitWalk_80241540) to 0x80000 10;
    bind N(script_ExitWalk_80241590) to 0x80000 7;
    bind N(script_ExitWalk_802415E0) to 0x80000 20;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 32;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802420A8));
    await N(script_MakeEntities);
    spawn N(script_80241630);
    spawn N(script_8024170C);
    spawn N(script_80241500);
    spawn N(script_80242178);
    SI_VAR(0) = N(script_802418CC);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_001A3C[] = {
    0x00000000,
};

Script N(script_80241A40) = SCRIPT({
    if (SI_AREA_VAR(1) == 0) {
        SI_AREA_VAR(1) = 1;
    }
});

Script N(script_80241A78) = SCRIPT({
    if (SI_AREA_VAR(1) == 1) {
        SI_AREA_VAR(1) = 2;
    }
});

Script N(script_80241AB0) = SCRIPT({
    if (SI_AREA_VAR(1) == 2) {
        PlaySound(11);
        PlaySoundAt(8456, 0, 40, 60, 0xFFFFFEE3);
        SI_AREA_VAR(1) = 3;
        PlayEffect(17, 0, 40, 73, 0xFFFFFEE3, 10, 0, 0, 0, 0, 0, 0, 0, 0);
        MakeEntity(D_802EA5AC, 40, 60, 0xFFFFFEE3, 90, 326, 0x80000000);
        AssignBlockFlag(SI_SAVE_FLAG(598));
    }
});

Script N(script_80241B94) = SCRIPT({
    group 0;
    func_802D5830(1);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x1D0178, 160, 40);
    DisablePlayerInput(0);
    func_802D5830(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802EAFDC, 0xFFFFFE52, 150, 0xFFFFFFB5, 0, 0x80000000);
    AssignScript(N(script_80241B94));
    if (SI_SAVE_FLAG(598) == 0) {
        SI_AREA_VAR(1) = 0;
        MakeEntity(D_802EA0C4, 70, 0, 0xFFFFFF06, 90, 0x80000000);
        AssignScript(N(script_80241A40));
        MakeEntity(D_802EA0C4, 70, 0, 0xFFFFFEC0, 90, 0x80000000);
        AssignScript(N(script_80241A78));
        MakeEntity(D_802EA0C4, 0xFFFFFFF6, 0, 0xFFFFFEE3, 90, 0x80000000);
        AssignScript(N(script_80241AB0));
    } else {
        MakeEntity(D_802EA0C4, 70, 0, 0xFFFFFF06, 90, 0x80000000);
        MakeEntity(D_802EA0C4, 70, 0, 0xFFFFFEC0, 90, 0x80000000);
        MakeEntity(D_802EA0C4, 0xFFFFFFF6, 0, 0xFFFFFEE3, 90, 0x80000000);
        MakeEntity(D_802EA5AC, 40, 60, 0xFFFFFEE3, 90, 326, 0x80000000);
        AssignBlockFlag(SI_SAVE_FLAG(598));
    }
    MakeEntity(D_802EAB04, 0xFFFFFF01, 150, 0xFFFFFF9C, 90, 104, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(608));
    MakeItemEntity(164, 0xFFFFFF65, 150, 0xFFFFFF7E, 17, SI_SAVE_FLAG(616));
});

s32 pad_001E18[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80241E20)[] = {
    0x40000000, 0x0000001E, 0x0000001E, 0x42C80000, 0x00000000, 0x0000000A, 0x40900000, 0x00000046,
    0x0000000A, 0x43480000, 0x00000000, 0x00000001,
};

Script N(script_80241E50) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240BF0_A011F0(N(unk_80241E20), 0);
});

s32 N(unk_80241E8C)[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80241E50), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x00060000, 0x00000001, N(unk_80241E8C), 0x432F0000, 0x00000000, 0xC3870000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000B4, 0x80000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00001999, 0x59980002, 0x3FFF2666, 0x4CCC0002, 0x3FFF3FFF, 0x3FFF0002, 0x33326665,
    0x33320002, 0x33327FFF, 0x26660002, 0x26660000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00001999, 0x33320002, 0x33322666, 0x33320002, 0x33323FFF, 0x33320002, 0x33326665,
    0x33320002, 0x33327FFF, 0x26660002, 0x33320000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00010000, 0x000000AF, 0x00000000, 0xFFFFFEF2, 0x00000046, 0x00000000,
    0xFFFF8001, 0x00000000, 0x000000AF, 0x00000000, 0xFFFFFEF2, 0x000000C8, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001,
    0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
    0x002B0003, 0x002B0003, 0x002B0003, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

NpcGroupList N(npcGroupList_802420A8) = {
    {},
};

s32 pad_0020B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802420C0) = SCRIPT({
0:
    func_80241360_A01960(SI_VAR(0));
    SI_VAR(0) += 180;
    RotateModel(122, SI_VAR(0), 0, -1, 0);
    sleep 1;
    goto 0;
});

Script N(script_80242134) = SCRIPT({
    SetMusicTrack(0, SI_VAR(0), 0, 8);
});

s32 N(unk_80242160)[] = {
    0xFFFFFE94, 0x000000BE, 0xFFFFFF79, 0x00000032, 0x00000064, func_802413CC_A019CC,
};

Script N(script_80242178) = SCRIPT({
    spawn N(script_802420C0);
    func_80240E20_A01420(N(unk_80242160));
});

s32 pad_0021A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802421B0_A027B0

// rodata: D_802421B8_A027B8

// rodata: D_802421C0_A027C0

s32 pad_0021C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802421D0_A027D0

// rodata: jtbl_802421D8_A027D8

s32 pad_002214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: jtbl_80242220_A02820

s32 pad_002234[] = {
    0x00000000, 0x00000000, 0x00000000,
};
