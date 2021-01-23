#include "kkj_27.h"

s32 pad_00030C[1];
Script N(script_80240500);
s32 pad_0005CC[1];
Script N(script_UpdateTexturePan_802405D0);
s32 pad_00066C[1];
s32 N(displayList_80240670)[32];
Script N(script_ExitWalk_802406F0);
Script N(script_8024074C);
Script N(script_EnterWalk_80240778);
Script N(main);
s32 N(unk_80240B00)[1];
Script N(script_80240B04);
Script N(script_80240D40);
Script N(script_80240E48);
Script N(script_80241018);
s32 pad_00111C[1];
const char D_80241120_B14E90[8]; // "kkj_14"
const char D_80241128_B14E98[8]; // "kkj_15"

// text: func_80240000_B13D70

// text: func_80240124_B13E94

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_B14080

// text: func_8024041C_B1418C

// text: func_80240448_B141B8

EntryList N(entryList) = {
    { 425.0f, 0.0f, 40.0f, 0.0f },
    { -250.0f, 10.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_80240500) = SCRIPT({
    match SI_SAVE_VAR(0) {
        0xFFFFFF97, 0xFFFFFFB4, 0xFFFFFFF2, 88 {
            SetMusicTrack(0, 115, 0, 6);
        }
        0xFFFFFFCA, 6, 38, 58 {
            SetMusicTrack(0, 116, 0, 6);
        }
    }
});

s32 pad_0005CC[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802405D0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_B13D70();
                    return;
                }
            }
        }
    }
    func_80240124_B13E94();
});

s32 pad_00066C[] = {
    0x00000000,
};

s32 N(displayList_80240670)[] = {
    0xE7000000, 0x00000000, 0xD7000002, 0xFFFFFFFF, 0xE3000A01, 0x00100000, 0xE3000C00, 0x00080000,
    0xE3000D01, 0x00000000, 0xE3000F00, 0x00000000, 0xE3001001, 0x00000000, 0xE3001201, 0x00002000,
    0xE3001402, 0x00000C00, 0xFA000000, 0x4B1F13FF, 0xFB000000, 0xFF764D00, 0xFC10E5E0, 0x230B1D52,
    0xE200001C, 0x0C184B50, 0xD9FDFFFF, 0x00000000, 0xD9FFFFFF, 0x00200404, 0xDF000000, 0x00000000,
};

Script N(script_ExitWalk_802406F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241120_B14E90, 2);
    sleep 100;
});

Script N(script_8024074C) = SCRIPT({
    bind N(script_ExitWalk_802406F0) to 0x80000 0;
});

Script N(script_EnterWalk_80240778) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_8024074C);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x5000B);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    spawn N(script_80241018);
    spawn N(script_80240500);
    spawn N(script_EnterWalk_80240778);
    SetTexPanner(32, 0);
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
        spawn N(script_UpdateTexturePan_802405D0);
    }
    0x802C90FC(32, 0, -1);
    0x802C9428(0, N(displayList_80240670), 0);
    SetTexPanner(37, 0);
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
        spawn N(script_UpdateTexturePan_802405D0);
    }
    0x802C90FC(37, 0, -1);
    0x802C9428(0, N(displayList_80240670), 0);
    SetCamSpeed(0, 3.0);
});

s32 N(unk_80240B00)[] = {
    0x00000000,
};

Script N(script_80240B04) = SCRIPT({
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
    ModifyColliderFlags(1, 8, 0x7FFFFE00);
    spawn {
        PlaySoundAt(147, 0, 0xFFFFFF06, 5, 0);
        GetPlayerPos(SI_VAR(9), SI_VAR(0), SI_VAR(10));
        MakeLerp(0, 0xFFFFFE3E, 120, 0);
        loop {
            UpdateLerp();
            SI_VAR(2) =f SI_VAR(0);
            SI_VAR(2) /= 10;
            RotateGroup(53, SI_VAR(2), 0, 1, 0);
            func_80240310_B14080();
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        EnableModel(6, 1);
        EnableModel(9, 1);
        EnableModel(11, 1);
        MakeLerp(8, 255, 40, 0);
        loop {
            UpdateLerp();
            func_8024041C_B1418C(SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 80;
    SI_SAVE_FLAG(481) = 1;
    GotoMap(D_80241128_B14E98, 1);
    sleep 100;
});

Script N(script_80240D40) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    PlayerMoveTo(0xFFFFFF33, 0xFFFFFFF6, 15);
    InterpPlayerYaw(270, 5);
    sleep 10;
    SetPlayerAnimation(0xD0013);
    sleep 10;
    PlaySoundAtCollider(7, 250, 0);
    SetPlayerAnimation(0xD0014);
    sleep 10;
    SetPlayerAnimation(0xD0015);
    sleep 10;
    ShakeCam(0, 0, 10, 1.0);
    await N(script_80240B04);
    DisablePlayerInput(0);
});

Script N(script_80240E48) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    0x802D2884(0xFFFFFF22, 0, 5);
    sleep 10;
    SetPlayerAnimation(0xD0013);
    sleep 10;
    PlaySoundAtCollider(7, 250, 0);
    SetPlayerAnimation(0xD0014);
    sleep 10;
    SetPlayerAnimation(0xD0015);
    sleep 10;
    spawn {
        DisablePartnerAI(0);
        SetNpcAnimation(0xFFFFFFFC, 0x20000E);
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        EnablePartnerAI();
    }
    spawn {
        InterpPlayerYaw(270, 0);
        sleep 10;
        SetPlayerAnimation(0xC0011);
        SpeakToPlayer(0xFFFFFFFE, 0xC0005, 0xC0006, 5, 0x140048);
    }
    ShakeCam(0, 0, 5, 1.0);
    await N(script_80240B04);
    DisablePlayerInput(0);
});

Script N(script_80241018) = SCRIPT({
    EnableModel(6, 0);
    EnableModel(9, 0);
    EnableModel(11, 0);
    0x802C90FC(6, 1, -1);
    0x802C90FC(9, 1, -1);
    0x802C90FC(11, 1, -1);
    0x802C94A0(1, func_80240448_B141B8, 0);
    if (SI_SAVE_VAR(0) == 0xFFFFFFB4) {
        bind N(script_80240E48) to TriggerFlag_WALL_INTERACT 7;
    } else {
        bind N(script_80240D40) to TriggerFlag_WALL_INTERACT 7;
    }
});

s32 pad_00111C[] = {
    0x00000000,
};

// rodata: D_80241120_B14E90

// rodata: D_80241128_B14E98

