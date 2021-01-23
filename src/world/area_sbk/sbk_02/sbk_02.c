#include "sbk_02.h"

s32 pad_0006EC[1];
Script N(script_80240CC0);
s32 pad_000D38[2];
Script N(script_ExitWalk_80240D40);
Script N(script_ExitWalk_80240D9C);
Script N(script_ExitWalk_80240DF8);
Script N(script_ExitWalk_80240E54);
Script N(script_80240EB0);
Script N(script_EnterWalk_80240F30);
Script N(main);
s32 pad_001248[2];
s32 N(itemList_80241250)[2];
Script N(script_80241258);
s32 N(unk_80241418)[3];
s32 N(unk_80241424)[3];
Script N(script_80241430);
Script N(script_802414FC);
Script N(script_80241678);
Script N(script_80241790);
Script N(script_802418B4);
Script N(script_802419F0);
Script N(script_80241B38);
Script N(script_80241C90);
Script N(script_80241DE0);
Script N(script_802422F0);
Script N(script_802427F4);
Script N(script_802428A4);
Script N(script_80242928);
Script N(script_802431C0);
Script N(script_80243268);
Script N(script_80243310);
Script N(script_8024358C);
Script N(script_80243A00);
Script N(script_80243B38);
s32 pad_003F68[2];
s32 unk_missing_80243F9C[22];
s32 unk_missing_80244020[11];
s32 N(unk_8024404C)[1];
s32 N(unk_80244050)[1];
Script N(script_80244054);
Script N(script_80244188);
s32 N(unk_802441D8)[1];
Script N(script_802441DC);
Script N(script_8024420C);
Script N(script_Idle_8024423C);
Script N(script_80244330);
Script N(script_Init_80244D38);
Script N(script_Interact_80244DA8);
Script N(script_Init_80245124);
StaticNpc N(npcGroup_80245178)[1];
StaticNpc N(npcGroup_80245368)[1];
NpcGroupList N(npcGroupList_80245558);
s32 pad_00557C[1];
Script N(script_MakeEntities);
const char D_802455D0_92F880[8]; // "sbk_01"
const char D_802455D8_92F888[8]; // "sbk_03"
const char D_802455E0_92F890[8]; // "sbk_12"
const char D_802455E8_92F898[8]; // "isk_01"
const char D_802455F0_92F8A0[8]; // "sbk_30"
s32 pad_0055F8[2];

// text: func_GetTattle_92A2B0

// text: func_80240040_92A2F0

// text: func_80240164_92A414

// text: func_80240338_92A5E8

// text: func_80240364_92A614

s32 pad_0006EC[] = {
    0x00000000,
};

// text: func_802406F0_92A9A0

// text: func_8024074C_92A9FC

// text: func_8024091C_92ABCC

// text: func_80240970_92AC20

// text: func_802409A8_92AC58

// text: func_80240A44_92ACF4

// text: func_80240AF8_92ADA8

// text: func_80240B5C_92AE0C

// text: func_80240B98_92AE48

// text: func_80240BD4_92AE84

EntryList N(entryList) = {
    { -475.0f, 0.0f, 0.0f, 90.0f },
    { 475.0f, 0.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -475.0f, 180.0f },
    { 0.0f, 0.0f, 475.0f, 0.0f },
    { 0.0f, 80.0f, -195.0f, 180.0f },
    { 20.0f, 0.0f, 110.0f, 270.0f },
    { -80.0f, 0.0f, 80.0f, 180.0f },
    { 80.0f, 0.0f, 80.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x80240000,
};

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_80240CC0) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 7),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 23, 0, 8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_000D38[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240D40) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802455D0_92F880, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240D9C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802455D8_92F888, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240DF8) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802455E0_92F890, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240E54) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_802455E8_92F898, 0);
    sleep 100;
});

Script N(script_80240EB0) = SCRIPT({
    bind N(script_ExitWalk_80240D40) to 0x80000 3;
    bind N(script_ExitWalk_80240D9C) to 0x80000 7;
    bind N(script_ExitWalk_80240DF8) to 0x80000 5;
    bind N(script_ExitWalk_80240E54) to 0x80000 9;
});

Script N(script_EnterWalk_80240F30) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 5 {
            spawn N(script_80240EB0);
        }
        6, 7 {
            spawn N(script_80240EB0);
        }
        else {
            SI_VAR(0) = N(script_80240EB0);
            spawn EnterWalk;
        }
    }
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(main) = {
    SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(425), 10),
    SI_CMD(ScriptOpcode_CALL, SetSpriteShading, -1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(0), 0xFFFFFFC1),
        SI_CMD(ScriptOpcode_CALL, DisablePulseStone, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetCamPerspective, 0, 3, 25, 16, 4096),
    SI_CMD(ScriptOpcode_CALL, SetCamBGColor, 0, 0, 0, 0),
    SI_CMD(ScriptOpcode_CALL, SetCamEnabled, 0, 1),
    SI_CMD(ScriptOpcode_CALL, SetCamLeadPlayer, 0, 0),
    SI_CMD(ScriptOpcode_CALL, MakeNpcs, 0, N(npcGroupList_80245558)),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_MakeEntities)),
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFC2),
        SI_CMD(ScriptOpcode_CALL, PlayEffect, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(15)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(0), 0xFFFFFFCA),
        SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 120, 1, 8),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80240CC0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 7),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243A00)),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_SPAWN, N(script_EnterWalk_80240F30)),
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 5),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 65),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 6),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 7),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80243B38)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_001248[] = {
    0x00000000, 0x00000000,
};

s32 N(itemList_80241250)[] = {
    0x00000012, 0x00000000,
};

Script N(script_80241258) = SCRIPT({
    PlayEffect(29, 0, 0, 0, 0, 20, 10, 0, 60, 0, 0, 0, 0, 0);
    PlayEffect(21, 2, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0);
    PlaySoundAtCollider(13, 95, 0);
    SI_VAR(2) = 0;
    MakeLerp(0, 0xFFFFFFCE, 50, 0);
    loop {
        UpdateLerp();
        RotateModel(130, SI_VAR(2), 0, 1, 0);
        TranslateModel(130, 0, SI_VAR(0), 0);
        SI_VAR(2) -= 10;
        SI_VAR(3) += 0.2001953125;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    EnableModel(130, 0);
    PlaySound(0x8000005F);
});

s32 N(unk_80241418)[] = {
    0x00000072, 0x0000007D, 0x0000FFFF,
};

s32 N(unk_80241424)[] = {
    0x0000007E, 0x00000080, 0x0000FFFF,
};

Script N(script_80241430) = SCRIPT({
    func_80240040_92A2F0(2, 0, 3);
    func_80240040_92A2F0(1, -1, 3);
    func_80240040_92A2F0(1, N(unk_80241418), 0);
    func_80240040_92A2F0(0, N(unk_80241424), 0);
    func_80240364_92A614(255, 255, 255, 0, 0, 0, 0);
    sleep 1;
    func_80240364_92A614(44, 32, 177, 0, 0, 0, 60);
});

Script N(script_802414FC) = SCRIPT({
    SetRenderMode(128, 22);
    EnableTexPanning(128, 1);
    EnableTexPanning(10000, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    loop {
        SetTexPanOffset(3, 0, SI_VAR(0), 0);
        SetTexPanOffset(3, 1, SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 6000;
        SI_VAR(1) += 5000;
        SI_VAR(2) += 4000;
        if (SI_VAR(0) > 0x20000) {
            SI_VAR(0) -= 0x20000;
        }
        if (SI_VAR(1) > 0x20000) {
            SI_VAR(1) -= 0x20000;
        }
        if (SI_VAR(2) > 0x20000) {
            SI_VAR(2) -= 0x20000;
        }
        sleep 1;
    }
});

Script N(script_80241678) = SCRIPT({
    EnableModel(128, 1);
    SI_VAR(2) = 0;
    SI_VAR(0) = 0xFFFFFF9C;
    loop 100 {
        SI_VAR(3) = SI_VAR(2);
        SI_VAR(3) /= 80;
        ScaleModel(128, SI_VAR(3), 1.0, SI_VAR(3));
        TranslateModel(128, 0, SI_VAR(0), 0);
        SI_VAR(0) += 1;
        SI_VAR(2) += 1;
        sleep 1;
    }
    loop {
        ScaleModel(128, SI_VAR(3), 1.0, SI_VAR(3));
        sleep 1;
    }
});

Script N(script_80241790) = SCRIPT({
    sleep 10;
    EnableModel(10000, 1);
    SI_VAR(2) = 0;
    SI_VAR(0) = 0xFFFFFF9C;
    loop 100 {
        SI_VAR(3) = SI_VAR(2);
        SI_VAR(3) /= 110;
        ScaleModel(10000, SI_VAR(3), 1.0, SI_VAR(3));
        TranslateModel(10000, 0, SI_VAR(0), 0);
        SI_VAR(0) += 1;
        SI_VAR(2) += 1;
        sleep 1;
    }
    loop {
        ScaleModel(10000, SI_VAR(3), 1.0, SI_VAR(3));
        sleep 1;
    }
});

Script N(script_802418B4) = SCRIPT({
    EnableModel(128, 1);
    SI_VAR(0) = 0;
    SI_VAR(2) = 100;
    SI_VAR(3) = 1.25;
    loop 20 {
        ScaleModel(128, SI_VAR(3), 1.0, SI_VAR(3));
        sleep 1;
    }
    loop 70 {
        SI_VAR(3) = SI_VAR(2);
        SI_VAR(3) /= 80;
        ScaleModel(128, SI_VAR(3), SI_VAR(3), SI_VAR(3));
        TranslateModel(128, 0, SI_VAR(0), 0);
        SI_VAR(0) -= 2;
        SI_VAR(2) += 5;
        sleep 1;
    }
    EnableModel(128, 0);
});

Script N(script_802419F0) = SCRIPT({
    sleep 10;
    EnableModel(10000, 1);
    SI_VAR(0) = 0;
    SI_VAR(2) = 100;
    SI_VAR(3) = 0.9091796875;
    loop 20 {
        ScaleModel(10000, SI_VAR(3), 1.0, SI_VAR(3));
        sleep 1;
    }
    loop 70 {
        SI_VAR(3) = SI_VAR(2);
        SI_VAR(3) /= 110;
        ScaleModel(10000, SI_VAR(3), SI_VAR(3), SI_VAR(3));
        TranslateModel(10000, 0, SI_VAR(0), 0);
        SI_VAR(0) -= 2;
        SI_VAR(2) += 5;
        sleep 1;
    }
    EnableModel(10000, 0);
});

Script N(script_80241B38) = SCRIPT({
    parallel {
        EnableTexPanning(126, 1);
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(1, 0, SI_VAR(0), 0);
            SI_VAR(0) += 2500;
            if (SI_VAR(0) > 0x8000) {
                SI_VAR(0) -= 0x8000;
            }
            sleep 1;
        }
    }
    EnableModel(126, 1);
    SI_VAR(0) = 0xFFFFFF38;
    SI_VAR(1) = 0;
    loop 200 {
        TranslateModel(126, 0, SI_VAR(0), 0);
        SI_VAR(0) += 1;
        sleep 1;
    }
    loop {
        sleep 1;
    }
});

Script N(script_80241C90) = SCRIPT({
    parallel {
        EnableTexPanning(126, 1);
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(1, 0, SI_VAR(0), 0);
            SI_VAR(0) += 2500;
            if (SI_VAR(0) > 0x8000) {
                SI_VAR(0) -= 0x8000;
            }
            sleep 1;
        }
    }
    EnableModel(126, 1);
    SI_VAR(0) = 0;
    TranslateModel(126, 0, SI_VAR(0), 0);
    sleep 10;
    loop 100 {
        TranslateModel(126, 0, SI_VAR(0), 0);
        SI_VAR(0) -= 2;
        sleep 1;
    }
});

Script N(script_80241DE0) = SCRIPT({
    0x802C971C(114);
    EnableGroup(114, 1);
    spawn {
        EnableTexPanning(113, 1);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        loop 600 {
            SetTexPanOffset(2, 0, 0, SI_VAR(0));
            SetTexPanOffset(2, 1, SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 200;
            SI_VAR(1) += 0xFFFFFF38;
            SI_VAR(2) += 700;
            sleep 1;
        }
        EnableModel(113, 0);
    }
    spawn {
        sleep 20;
        loop 30 {
            RandInt(290, SI_VAR(0));
            SI_VAR(0) += 0xFFFFFF92;
            PlayEffect(29, 0, SI_VAR(0), 0, 0xFFFFFFDD, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, SI_VAR(0), 0, 0xFFFFFFDD, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 10;
        }
    }
    spawn {
        sleep 20;
        loop 15 {
            RandInt(180, SI_VAR(0));
            SI_VAR(0) += 170;
            PlayEffect(29, 0, SI_VAR(0), 0, 0xFFFFFED4, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, SI_VAR(0), 0, 0xFFFFFED4, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 20;
        }
    }
    spawn {
        sleep 100;
        loop 5 {
            PlayEffect(29, 0, 0xFFFFFF4C, 0, 260, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, 0xFFFFFF4C, 0, 260, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 40;
        }
    }
    spawn {
        sleep 110;
        loop 4 {
            PlayEffect(29, 0, 180, 0, 260, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, 180, 0, 260, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 50;
        }
    }
    PlaySound(0x8000005E);
    MakeLerp(0xFFFFFECA, 0, 310, 0);
    loop {
        UpdateLerp();
        TranslateGroup(114, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802422F0) = SCRIPT({
    0x802C971C(114);
    EnableGroup(114, 1);
    spawn {
        EnableTexPanning(113, 1);
        SI_VAR(0) = 0xEA60;
        SI_VAR(1) = 0xFFFF15A0;
        SI_VAR(2) = 0x33450;
        loop 300 {
            SetTexPanOffset(2, 0, 0, SI_VAR(0));
            SetTexPanOffset(2, 1, SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 200;
            SI_VAR(1) += 0xFFFFFF38;
            SI_VAR(2) += 700;
            sleep 1;
        }
        EnableModel(113, 0);
    }
    spawn {
        loop 10 {
            RandInt(290, SI_VAR(0));
            SI_VAR(0) += 0xFFFFFF92;
            PlayEffect(29, 0, SI_VAR(0), 0, 0xFFFFFFDD, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, SI_VAR(0), 0, 0xFFFFFFDD, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 10;
        }
    }
    spawn {
        sleep 10;
        loop 5 {
            RandInt(180, SI_VAR(0));
            SI_VAR(0) += 170;
            PlayEffect(29, 0, SI_VAR(0), 0, 0xFFFFFED4, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, SI_VAR(0), 0, 0xFFFFFED4, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 20;
        }
    }
    spawn {
        loop 3 {
            PlayEffect(29, 0, 0xFFFFFF4C, 0, 260, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, 0xFFFFFF4C, 0, 260, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 40;
        }
    }
    spawn {
        sleep 10;
        loop 2 {
            PlayEffect(29, 0, 180, 0, 260, 20, 10, 0, 60, 0, 0, 0, 0, 0);
            PlayEffect(21, 2, 180, 0, 260, 60, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 50;
        }
    }
    MakeLerp(0xFFFFFFEC, 0, 20, 0);
    loop {
        UpdateLerp();
        TranslateGroup(114, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    ShakeCam(0, 0, 10, 1.0);
});

Script N(script_802427F4) = SCRIPT({
    RotateGroup(61, SI_VAR(0), 0, 1, 0);
    RotateGroup(78, SI_VAR(0), 0, 1, 0);
    SI_VAR(2) = 0;
    SI_VAR(2) -= SI_VAR(0);
    RotateGroup(27, SI_VAR(2), 0, 1, 0);
    RotateGroup(44, SI_VAR(2), 0, 1, 0);
});

Script N(script_802428A4) = SCRIPT({
    MakeLerp(180, 0, 60, 4);
    loop {
        UpdateLerp();
        await N(script_802427F4);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80242928) = SCRIPT({
    MakeLerp(0, 60, 180, 1);
10:
    UpdateLerp();
    RotateModel(33, SI_VAR(0), 0, 1, 0);
    RotateModel(34, SI_VAR(0), 0, 1, 0);
    TranslateModel(36, 0xFFFFFFEC, 0, 0);
    TranslateModel(37, 0xFFFFFFEC, 0, 0);
    RotateModel(36, SI_VAR(0), 0, 1, 0);
    RotateModel(37, SI_VAR(0), 0, 1, 0);
    TranslateModel(36, 20, 0, 0);
    TranslateModel(37, 20, 0, 0);
    RotateModel(50, SI_VAR(0), 0, 1, 0);
    RotateModel(51, SI_VAR(0), 0, 1, 0);
    TranslateModel(53, 0xFFFFFFEC, 0, 0);
    TranslateModel(54, 0xFFFFFFEC, 0, 0);
    RotateModel(53, SI_VAR(0), 0, 1, 0);
    RotateModel(54, SI_VAR(0), 0, 1, 0);
    TranslateModel(53, 20, 0, 0);
    TranslateModel(54, 20, 0, 0);
    SI_VAR(2) = 0;
    SI_VAR(2) -= SI_VAR(0);
    RotateModel(67, SI_VAR(2), 0, 1, 0);
    RotateModel(68, SI_VAR(2), 0, 1, 0);
    TranslateModel(70, 20, 0, 0);
    TranslateModel(71, 20, 0, 0);
    RotateModel(70, SI_VAR(2), 0, 1, 0);
    RotateModel(71, SI_VAR(2), 0, 1, 0);
    TranslateModel(70, 0xFFFFFFEC, 0, 0);
    TranslateModel(71, 0xFFFFFFEC, 0, 0);
    RotateModel(84, SI_VAR(2), 0, 1, 0);
    RotateModel(85, SI_VAR(2), 0, 1, 0);
    TranslateModel(87, 20, 0, 0);
    TranslateModel(88, 20, 0, 0);
    RotateModel(87, SI_VAR(2), 0, 1, 0);
    RotateModel(88, SI_VAR(2), 0, 1, 0);
    TranslateModel(87, 0xFFFFFFEC, 0, 0);
    TranslateModel(88, 0xFFFFFFEC, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    MakeLerp(0, 60, 180, 4);
20:
    UpdateLerp();
    TranslateModel(36, 0xFFFFFFEC, 0, 0);
    TranslateModel(37, 0xFFFFFFEC, 0, 0);
    RotateModel(36, 60, 0, 1, 0);
    RotateModel(37, 60, 0, 1, 0);
    TranslateModel(36, 20, 0, 0);
    TranslateModel(37, 20, 0, 0);
    RotateModel(36, SI_VAR(0), 0, 1, 0);
    RotateModel(37, SI_VAR(0), 0, 1, 0);
    TranslateModel(53, 0xFFFFFFEC, 0, 0);
    TranslateModel(54, 0xFFFFFFEC, 0, 0);
    RotateModel(53, 60, 0, 1, 0);
    RotateModel(54, 60, 0, 1, 0);
    TranslateModel(53, 20, 0, 0);
    TranslateModel(54, 20, 0, 0);
    RotateModel(53, SI_VAR(0), 0, 1, 0);
    RotateModel(54, SI_VAR(0), 0, 1, 0);
    SI_VAR(2) = 0;
    SI_VAR(2) -= SI_VAR(0);
    TranslateModel(70, 20, 0, 0);
    TranslateModel(71, 20, 0, 0);
    RotateModel(70, 0xFFFFFFC4, 0, 1, 0);
    RotateModel(71, 0xFFFFFFC4, 0, 1, 0);
    TranslateModel(70, 0xFFFFFFEC, 0, 0);
    TranslateModel(71, 0xFFFFFFEC, 0, 0);
    RotateModel(70, SI_VAR(2), 0, 1, 0);
    RotateModel(71, SI_VAR(2), 0, 1, 0);
    TranslateModel(87, 20, 0, 0);
    TranslateModel(88, 20, 0, 0);
    RotateModel(87, 0xFFFFFFC4, 0, 1, 0);
    RotateModel(88, 0xFFFFFFC4, 0, 1, 0);
    TranslateModel(87, 0xFFFFFFEC, 0, 0);
    TranslateModel(88, 0xFFFFFFEC, 0, 0);
    RotateModel(87, SI_VAR(2), 0, 1, 0);
    RotateModel(88, SI_VAR(2), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
});

Script N(script_802431C0) = SCRIPT({
    EnableGroup(125, 1);
    MakeLerp(0xFFFFFECA, 0, 310, 0);
    loop {
        UpdateLerp();
        TranslateGroup(125, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80243268) = SCRIPT({
    EnableGroup(125, 1);
    MakeLerp(0xFFFFFFEC, 0, 20, 0);
    loop {
        UpdateLerp();
        TranslateGroup(125, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80243310) = SCRIPT({
    PlaySoundAt(94, 0, 0, 39, 0xFFFFFFB0);
    spawn {
        ShakeCam(0, 0, 5, 0.2001953125);
    }
    MakeLerp(0, 0xFFFFFF4C, 180, 4);
    loop {
        UpdateLerp();
        RotateModel(120, SI_VAR(0), 1, 0, 0);
        RotateModel(121, SI_VAR(0), 1, 0, 0);
        RotateModel(122, SI_VAR(0), 1, 0, 0);
        RotateModel(123, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlayEffect(29, 0, 61, 2, 0xFFFFFFAD, 20, 10, 0, 60, 0, 0, 0, 0, 0);
    PlayEffect(21, 2, 61, 2, 0xFFFFFFAD, 60, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 3;
    PlayEffect(29, 0, 0xFFFFFFC3, 2, 0xFFFFFFAD, 20, 10, 0, 60, 0, 0, 0, 0, 0);
    PlayEffect(21, 2, 0xFFFFFFC3, 2, 0xFFFFFFAD, 60, 0, 0, 0, 0, 0, 0, 0, 0);
    ShakeCam(0, 0, 5, 1.0);
});

Script N(script_8024358C) = SCRIPT({
    DisablePulseStone(1);
    0x802D6420();
    if (SI_VAR(0) <= 0) {
        0x802D6954();
        DisablePulseStone(0);
        return;
    }
    DisablePlayerInput(1);
    0x802CF56C(1);
    RemoveKeyItemAt(SI_VAR(1));
    0x802D6954();
    SI_SAVE_VAR(0) = 0xFFFFFFC2;
    func_80240338_92A5E8();
    SetMusicTrack(0, 131, 1, 8);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 210, 0, 137);
    SetCamPosA(0, 150.0, 500.0);
    SetCamPosB(0, -450.0, -500.0);
    SetCamPitch(0, 15.0, -7.0);
    SetCamDistance(0, 500.0);
    SetCamSpeed(0, 0.2001953125);
    PanToTarget(0, 0, 1);
    sleep 10;
    SI_VAR(0) = 180;
    await N(script_802427F4);
    spawn {
        ShakeCam(0, 0, 120, 0.2001953125);
        ShakeCam(0, 0, 300, 0.5);
        ShakeCam(0, 0, 300, 0.2001953125);
    }
    spawn N(script_80241258);
    sleep 30;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0) {
        SI_VAR(0) = 0xFFFFFFB0;
        SI_FLAG(0) = 0;
    } else {
        SI_VAR(0) = 80;
        SI_FLAG(0) = 1;
    }
    spawn {
        sleep 10;
        SetPlayerSpeed(3.0);
        PlayerMoveTo(SI_VAR(0), 80, 0);
        0x802D2884(0, 0, 0);
    }
    spawn N(script_80241430);
    sleep 30;
    CloneModel(128, 10000);
    spawn N(script_802414FC);
    spawn N(script_80241678);
    spawn N(script_80241790);
    sleep 100;
    spawn N(script_80241B38);
    sleep 150;
    spawn N(script_80241DE0);
    spawn N(script_802431C0);
    sleep 100;
    SetCamPitch(0, 8.0, -9.0);
    SetCamSpeed(0, 0.2001953125);
    PanToTarget(0, 0, 1);
    sleep 80;
    spawn N(script_802428A4);
    sleep 60;
    sleep 50;
    if (SI_FLAG(0) == 0) {
        GotoMap(D_802455F0_92F8A0, 4);
    } else {
        GotoMap(D_802455F0_92F8A0, 5);
    }
    sleep 100;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80243A00) = {
    SI_CMD(ScriptOpcode_MATCH, SI_SAVE_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_LT, 0xFFFFFFC1),
            SI_CMD(ScriptOpcode_CALL, EnableGroup, 22, 0),
            SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 22, 0x7FFFFE00),
        SI_CMD(ScriptOpcode_CASE_LT, 0xFFFFFFC2),
            SI_CMD(ScriptOpcode_CALL, EnableGroup, 22, 0),
            SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 22, 0x7FFFFE00),
            SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024358C), TriggerFlag_WALL_INTERACT, 13, N(itemList_80241250), 0, 1),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, EnableModel, 130, 0),
            SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 15, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, EnableGroup, 114, 0),
    SI_CMD(ScriptOpcode_CALL, EnableGroup, 125, 0),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 126, 0),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 128, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80243B38) = SCRIPT({
    PlaySound(92);
    DisablePlayerInput(1);
    0x802CF56C(1);
    0x802D2884(0, 0, 0);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    EnableModel(130, 0);
    EnableGroup(22, 0);
    spawn {
        ShakeCam(0, 0, 400, 0.2001953125);
    }
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 210, 0, 137);
    SetCamPosA(0, 150.0, 500.0);
    SetCamPosB(0, -450.0, -500.0);
    SetCamPitch(0, 8.0, -9.0);
    SetCamDistance(0, 500.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    func_80240040_92A2F0(2, 0, 3);
    func_80240040_92A2F0(1, -1, 3);
    func_80240040_92A2F0(1, N(unk_80241418), 0);
    func_80240040_92A2F0(0, N(unk_80241424), 0);
    func_80240364_92A614(44, 32, 177, 0, 0, 0, 0);
    spawn N(script_802422F0);
    spawn N(script_80243268);
    CloneModel(128, 10000);
    spawn N(script_802414FC);
    spawn N(script_802418B4);
    spawn N(script_802419F0);
    sleep 20;
    spawn N(script_80241C90);
    WaitForCam(0, 1.0);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamPitch(0, 4.0, -6.5);
    SetCamDistance(0, 790.0);
    SetCamSpeed(0, 0.2001953125);
    PanToTarget(0, 0, 1);
    sleep 100;
    spawn N(script_80242928);
    sleep 100;
    await N(script_80243310);
    ModifyColliderFlags(1, 22, 0x7FFFFE00);
    WaitForCam(0, 1.0);
    sleep 60;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    0x802CF56C(0);
    DisablePlayerInput(0);
});

s32 pad_003F68[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80243F70) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
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

s32 unk_missing_80243F9C[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80243FF4) = {
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

s32 unk_missing_80244020[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

s32 N(unk_8024404C)[] = {
    0x00000000,
};

s32 N(unk_80244050)[] = {
    0x00000000,
};

Script N(script_80244054) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024074C_92A9FC(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240970_92AC20(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244188) = {
    SI_CMD(ScriptOpcode_CALL, func_802409A8_92AC58, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244054), 0x10, 0, N(script_80245630), 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024091C_92ABCC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(unk_802441D8)[] = {
    0x00000000,
};

Script N(script_802441DC) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_8024420C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_Idle_8024423C) = SCRIPT({
    loop {
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) -= 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
});

Script N(script_80244330) = SCRIPT({
    DisablePartnerAI(0);
    0x802CF56C(2);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 0xFFFFFFCE;
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(4) += 26;
    SetNpcPos(1, SI_VAR(3), SI_VAR(4), SI_VAR(2));
    PlayerFaceNpc(1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, 0, SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 600);
    SetCamPitch(0, 18.0, -9.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    0x802D2508();
    DisablePlayerInput(1);
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 1.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(1, 0x130002, 0x130001, 512, 0xD00EB);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 18, 0xFFFFFFF7);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableNpcAI(1, 0);
    SetNpcAnimation(1, 0x130003);
    sleep 20;
    SetPlayerAnimation(0x1001F);
    PlaySoundAtPlayer(313, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(1);
    SI_VAR(1) += 50;
    SI_VAR(2) += 10;
    SI_VAR(3) += 30;
    loop 5 {
        PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
        PlayEffect(17, 1, SI_VAR(0), SI_VAR(3), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
    }
    sleep 20;
    PlaySoundAtPlayer(392, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    PlayEffect(82, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 30, 0, 0, 0, 0, 0, 0, 0);
    sleep 30;
    SetPlayerAnimation(0x10002);
    SetNpcAnimation(1, 0x130001);
    EnableNpcAI(1, 1);
    func_80240B5C_92AE0C();
    ShowMessageAtScreenPos(0x1D0192, 160, 40);
    sleep 10;
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(1, 0x130002, 0x130001, 512, 0xD00EC);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(1, 0x130002, 0x130001, 512, 0xD00ED);
    SetNpcFlagBits(1, 0x40000, 1);
    spawn {
        loop 25 {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 4;
        }
    }
    spawn {
        SI_VAR(2) = 0;
        SI_VAR(3) = 1800;
        MakeLerp(SI_VAR(2), SI_VAR(3), 100, 2);
        loop {
            UpdateLerp();
            SetNpcRotation(1, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        GetNpcPos(1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = SI_VAR(3);
        SI_VAR(5) += 180;
        MakeLerp(SI_VAR(3), SI_VAR(5), 100, 2);
        loop {
            UpdateLerp();
            SetNpcPos(1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 15;
        PlaySoundAtNpc(1, 8261, 0);
    }
    sleep 10;
    SetPlayerAnimation(0x1002A);
    sleep 90;
    PanToTarget(0, 0, 0);
    sleep 20;
    SetPlayerAnimation(0x10002);
    SI_SAVE_VAR(0) = 0xFFFFFFCB;
    spawn N(script_80240CC0);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Init_80244D38) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 5) {
        BindNpcIdle(-1, N(script_Idle_8024423C));
        spawn N(script_80244330);
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_Interact_80244DA8) = SCRIPT({
    SI_VAR(0) = 5;
    func_80240B98_92AE48();
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x830404, 0x830401, 0, 0xD00EE);
        sleep 10;
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlaySoundAtNpc(-1, 717, 0);
        PlayEffect(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 1, 1, 1, 0, 0, 0, 0, 0, 0);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        SI_SAVE_FLAG(1788) = 0;
        return;
    }
    func_80240BD4_92AE84();
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x830404, 0x830401, 0, 0xD00EF);
        return;
    }
    SpeakToPlayer(-1, 0x830404, 0x830401, 0, 0xD00F0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    await N(script_80244188);
    match SI_VAR(0) {
        == -1 {
            SpeakToPlayer(-1, 0x830404, 0x830401, 0, 0xD00F4);
            return;
        }
        == 214 {
            SpeakToPlayer(-1, 0x830404, 0x830401, 0, 0xD00F1);
            SI_VAR(0) = 197;
            SI_VAR(1) = 0;
            await N(script_802441DC);
            AddItem(SI_VAR(0), SI_VAR(1));
            sleep 10;
            SpeakToPlayer(-1, 0x830404, 0x830401, 0, 0xD00F2);
            sleep 10;
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlaySoundAtNpc(-1, 717, 0);
            PlayEffect(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 1, 1, 1, 0, 0, 0, 0, 0, 0);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            SI_SAVE_FLAG(1788) = 0;
            SI_SAVE_VAR(354) += 1;
        }
        else {
            SpeakToPlayer(-1, 0x830404, 0x830401, 0, 0xD00F3);
        }
    }
});

Script N(script_Init_80245124) = SCRIPT({
    if (SI_SAVE_FLAG(1788) != 0) {
        BindNpcInteract(-1, N(script_Interact_80244DA8));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80245178)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243F70),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80244D38),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130000, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001, 0x00130001,
        },
    },
};

StaticNpc N(npcGroup_80245368)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243FF4),
        .pos = { 0.0, 2.0, 150.0 },
        .flags = 0x00112D09,
        .init = N(script_Init_80245124),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00830401, 0x00830402, 0x00830403, 0x00830403, 0x00830401, 0x00830401, 0x00830401, 0x00830406, 0x00830403, 0x00830403, 0x00830403, 0x00830403, 0x00830403, 0x00830403, 0x00830403, 0x00830403,
        },
        .tattle = 0x1A0007,
    },
};

NpcGroupList N(npcGroupList_80245558) = {
    NPC_GROUP(N(npcGroup_80245178), 0x00000000),
    NPC_GROUP(N(npcGroup_80245368), 0x00000000),
    {},
};

s32 pad_00557C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFC2) {
        MakeEntity(0x802EA7E0, 0xFFFFFF10, 60, 0xFFFFFF38, 0, 6, 0x80000000);
    }
});

// rodata: D_802455D0_92F880

// rodata: D_802455D8_92F888

// rodata: D_802455E0_92F890

// rodata: D_802455E8_92F898

// rodata: D_802455F0_92F8A0

s32 pad_0055F8[] = {
    0x00000000, 0x00000000,
};
