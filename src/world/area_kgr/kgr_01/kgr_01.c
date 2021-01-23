#include "kgr_01.h"

s32 pad_000158[2];
s32 pad_00051C[1];
Script N(script_80240580);
Script N(script_ExitWalk_802405AC);
Script N(script_ExitWalk_80240608);
Script N(script_80240664);
Script N(main);
s32 pad_0007B4[3];
s32 N(unk_802407C0)[1];
Script N(script_802407C4);
Script N(script_80240848);
s32 pad_0008F8[2];
Script N(script_80240900);
s32 pad_000A14[3];
const char D_80240A20_8AA430[8]; // "kgr_02"
const char D_80240A28_8AA438[8]; // "mac_05"

// text: func_80240000_8A9A10

s32 pad_000158[] = {
    0x00000000, 0x00000000,
};

// text: func_80240160_8A9B70

// text: func_80240354_8A9D64

// text: func_802403E0_8A9DF0

// text: func_80240500_8A9F10

s32 pad_00051C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -4.0f, 8.0f, 0.0f, 90.0f },
    { 80.0f, 0.0f, 10.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900E9,
};

Script N(script_80240580) = SCRIPT({
    spawn {
        func_80240000_8A9A10();
    }
});

Script N(script_ExitWalk_802405AC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240A20_8AA430, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240608) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240A28_8AA438, 3);
    sleep 100;
});

Script N(script_80240664) = SCRIPT({
    bind N(script_ExitWalk_802405AC) to 0x80000 7;
    bind N(script_ExitWalk_80240608) to TriggerFlag_WALL_PUSH 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 1;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    HidePlayerShadow(1);
    EnableNpcShadow(0xFFFFFFFC, 0);
    spawn N(script_80240848);
    GetEntryID(SI_VAR(0));
    SI_VAR(0) = N(script_80240664);
    spawn EnterWalk;
    spawn N(script_80240580);
    spawn N(script_80240900);
});

s32 pad_0007B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802407C0)[] = {
    0x00000000,
};

Script N(script_802407C4) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_802403E0_8A9DF0();
    TranslateModel(10000, 0, SI_VAR(0), 0);
    UpdateColliderTransform(1);
    sleep 1;
    goto 0;
});

Script N(script_80240848) = SCRIPT({
    CloneModel(4, 10000);
    ParentColliderToModel(1, 10000);
    EnableModel(10000, 0);
    spawn N(script_802407C4);
    func_802C9C70(1, 4, 1);
    func_802C94A0(1, func_80240354_8A9D64, 0);
    func_802C90FC(4, 1, -1);
    HidePlayerShadow(1);
});

s32 pad_0008F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240900) = SCRIPT({
    SI_VAR(1) = 0;
    loop {
        GetPlayerActionState(SI_VAR(0));
        match SI_VAR(0) {
            == 18 {
                sleep 10;
                SI_VAR(1) = 1;
            }
            == 14 {
                SI_VAR(1) = 1;
            }
        }
        func_80240500_8A9F10();
        if (SI_VAR(1) != 0) {
            DisablePlayerInput(1);
            ShowMessageAtScreenPos(0x70099, 160, 40);
            SI_VAR(1) = 0;
            DisablePlayerInput(0);
        }
        sleep 1;
    }
});

s32 pad_000A14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240A20_8AA430

// rodata: D_80240A28_8AA438

// rodata: D_80240A30_8AA440

// rodata: D_80240A38_8AA448
