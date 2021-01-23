#include "kpa_15.h"

s32 pad_00030C[1];
s32 pad_0005CC[1];
Script N(script_80240620);
Script N(script_UpdateTexturePan_802406B0);
Script N(script_ExitWalk_8024074C);
Script N(script_802407A8);
Script N(script_EnterWalk_802407D4);
Script N(script_80240800);
Script N(main);
s32 pad_000A94[3];
s32 N(unk_80240AA0)[1];
Script N(script_80240AA4);
Script N(script_80240B0C);
Script N(script_80240BEC);
Script N(script_MakeEntities);
const char D_80240C90_A5A020[8]; // "kpa_13"
s32 pad_000C98[2];

// text: func_80240000_A59390

// text: func_80240124_A594B4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_A596A0

// text: func_802403C4_A59754

// text: func_80240428_A597B8

// text: func_80240578_A59908

s32 pad_0005CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 12.0f, 0.0f, -97.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190166,
};

Script N(script_80240620) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    if (SI_SAVE_FLAG(1556) == 0) {
        PlayAmbientSounds(4);
    }
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

Script N(script_UpdateTexturePan_802406B0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A59390();
                    return;
                }
            }
        }
    }
    func_80240124_A594B4();
});

Script N(script_ExitWalk_8024074C) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80240C90_A5A020, 2);
    sleep 100;
});

Script N(script_802407A8) = SCRIPT({
    bind N(script_ExitWalk_8024074C) to 0x80000 20;
});

Script N(script_EnterWalk_802407D4) = SCRIPT({
    SI_VAR(0) = N(script_802407A8);
    spawn EnterWalk;
});

Script N(script_80240800) = SCRIPT({
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0xFFFFFE70;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFCE0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802406B0);
    }
    SetTexPanner(0, 0);
    SetTexPanner(1, 0);
    SetTexPanner(2, 0);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(1556) == 0) {
        EnableGroup(66, 0);
        spawn N(script_80240800);
    } else {
        EnableGroup(33, 0);
    }
    spawn N(script_EnterWalk_802407D4);
    spawn N(script_80240620);
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 2;
            ModifyColliderFlags(3, 4, 3);
            ModifyColliderFlags(3, 20, 3);
        }
    }
});

s32 pad_000A94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80240AA0)[] = {
    0x00000000,
};

Script N(script_80240AA4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_80240B0C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80240AA4);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_80240BEC) = SCRIPT({
    SI_VAR(10) = 26;
    SI_VAR(11) = 1;
    SI_SAVE_FLAG(1555) = 1;
    await N(script_80240B0C);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 220, 30, 0xFFFFFF9C, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1555));
    AssignScript(N(script_80240BEC));
});

// rodata: D_80240C90_A5A020

s32 pad_000C98[] = {
    0x00000000, 0x00000000,
};
