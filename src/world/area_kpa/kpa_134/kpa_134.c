#include "kpa_134.h"

s32 pad_00030C[1];
s32 pad_000504[3];
s32 pad_0006FC[1];
Script N(script_80240780);
s32 pad_0007E8[2];
Script N(script_UpdateTexturePan_802407F0);
Script N(script_ExitWalk_8024088C);
Script N(script_ExitDoubleDoor_802408E8);
Script N(script_ExitWalk_8024098C);
Script N(script_ExitWalk_802409E8);
Script N(script_80240A44);
Script N(script_EnterWalk_80240AA8);
Script N(main);
s32 pad_0010B4[3];
Script N(script_802410C0);
s32 N(intTable_80241314)[20];
Script N(script_80241364);
Script N(script_80241570);
Script N(script_80241968);
Script N(script_80242090);
Script N(script_8024229C);
Script N(script_80242624);
s32 unk_missing_80242CFC[11];
Script N(script_Init_80242D28);
StaticNpc N(npcGroup_80242D50)[1];
NpcGroupList N(npcGroupList_80242F40);
s32 pad_002F58[2];
s32 N(intTable_80242F60)[57];
Script N(script_80243044);
Script N(script_802430E4);
Script N(script_80243190);
s32 pad_003404[3];
Script N(script_80243410);
s32 N(itemList_80243598)[2];
Script N(script_802435A0);
Script N(script_MakeEntities);
const char D_80243880_AAC820[9]; // "kpa_133"
const char D_80243888_AAC828[9]; // "kpa_130"

// text: func_80240000_AA8FA0

// text: func_80240124_AA90C4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_AA92B0

// text: func_8024033C_AA92DC

// text: func_80240408_AA93A8

// text: func_80240434_AA93D4

s32 pad_000504[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240510_AA94B0

// text: func_80240564_AA9504

// text: func_80240628_AA95C8

// text: func_8024065C_AA95FC

s32 pad_0006FC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -370.0f, 0.0f, 115.0f, 90.0f },
    { 730.0f, 0.0f, 115.0f, 270.0f },
    { -370.0f, 100.0f, 128.0f, 90.0f },
    { -365.0f, 240.0f, -22.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19016F,
};

Script N(script_80240780) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(6);
    }
});

s32 pad_0007E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_802407F0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_AA8FA0();
                    return;
                }
            }
        }
    }
    func_80240124_AA90C4();
});

Script N(script_ExitWalk_8024088C) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80243880_AAC820, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802408E8) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 39;
    SI_VAR(2) = 98;
    SI_VAR(3) = 100;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80243888_AAC828, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024098C) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80243880_AAC820, 2);
    sleep 100;
});

Script N(script_ExitWalk_802409E8) = SCRIPT({
    group 27;
    UseExitHeading(40, 3);
    spawn ExitWalk;
    GotoMap(D_80243880_AAC820, 3);
    sleep 100;
});

Script N(script_80240A44) = SCRIPT({
    bind N(script_ExitWalk_8024088C) to 0x80000 32;
    bind N(script_ExitWalk_8024098C) to 0x80000 33;
    bind N(script_ExitWalk_802409E8) to 0x80000 47;
});

Script N(script_EnterWalk_80240AA8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_80240A44);
            spawn EnterWalk;
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 98;
            SI_VAR(3) = 100;
            spawn EnterDoubleDoor;
            spawn N(script_80240A44);
        }
        == 2 {
            SI_VAR(0) = N(script_80240A44);
            spawn EnterWalk;
        }
        == 3 {
            SI_VAR(0) = N(script_80240A44);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242F40));
    await N(script_MakeEntities);
    spawn N(script_802410C0);
    if (SI_SAVE_FLAG(1590) == 0) {
        bind N(script_80243190) to TriggerFlag_AREA_FLAG_SET SI_AREA_FLAG(9);
    } else {
        ModifyColliderFlags(0, 21, 0x7FFFFE00);
        ModifyColliderFlags(0, 23, 0x7FFFFE00);
        ModifyColliderFlags(0, 25, 0x7FFFFE00);
        ModifyColliderFlags(0, 27, 0x7FFFFE00);
        EnableModel(81, 0);
        EnableModel(79, 0);
        EnableModel(77, 0);
        EnableModel(75, 0);
        EnableModel(73, 0);
        EnableModel(71, 0);
        EnableModel(69, 0);
        EnableModel(67, 0);
        EnableModel(65, 0);
        EnableModel(63, 0);
        EnableModel(61, 0);
        EnableModel(59, 0);
        EnableModel(57, 0);
        EnableModel(55, 0);
    }
    if (SI_SAVE_FLAG(1585) == 1) {
        EnableModel(89, 0);
        EnableModel(91, 0);
        ModifyColliderFlags(0, 48, 0x7FFFFE00);
    } else {
        EnableModel(90, 0);
    }
    EnableTexPanning(104, 1);
    EnableTexPanning(106, 1);
    EnableTexPanning(108, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 100;
        SI_VAR(3) = 70;
        SI_VAR(4) = 0xFFFFFFBA;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802407F0);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 200;
        SI_VAR(2) = 0xFFFFFF9C;
        SI_VAR(3) = 20;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802407F0);
    }
    spawn N(script_80240780);
    spawn N(script_EnterWalk_80240AA8);
    sleep 1;
});

s32 pad_0010B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802410C0) = SCRIPT({
    SetRenderMode(106, 22);
    SetRenderMode(108, 22);
    EnableModel(111, 0);
    EnableModel(113, 0);
    TranslateModel(115, 0, 30, 0);
    TranslateModel(117, 0, 0, 0);
    match SI_SAVE_VAR(297) {
        == 0 {
            SetGroupEnabled(110, 0);
            ModifyColliderFlags(0, 52, 0x7FFFFE00);
            ModifyColliderFlags(0, 43, 0x7FFFFE00);
            ModifyColliderFlags(0, 35, 0x7FFFFE00);
            ModifyColliderFlags(0, 54, 0x7FFFFE00);
        }
        == 1 {
            EnableModel(106, 0);
            TranslateGroup(105, 0, 120, 0);
            TranslateModel(108, 0, 120, 0);
            ModifyColliderFlags(0, 35, 0x7FFFFE00);
            ModifyColliderFlags(3, 43, 4);
            ModifyColliderFlags(0, 43, 0x80000);
        }
        == 2 {
            ModifyColliderFlags(0, 52, 0x7FFFFE00);
            EnableModel(108, 0);
            TranslateGroup(105, 0, 220, 0);
            TranslateModel(106, 0, 220, 0);
        }
    }
    spawn N(script_80241364);
    spawn N(script_80242090);
});

s32 N(intTable_80241314)[] = {
    0xFFFFFFFE, 0xFFFFFFFD, 0xFFFFFFFE, 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000001, 0x00000001,
    0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
    0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFF,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241364) = {
    SI_CMD(ScriptOpcode_CALL, func_80240310_AA92B0),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, func_8024033C_AA92DC),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtPlayer, 553, 0),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x8000D),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 150),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 30),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241314)),
        SI_CMD(ScriptOpcode_LOOP, 20),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, SetPlayerPos, 50, SI_VAR(0), 0xFFFFFFDE),
            SI_CMD(ScriptOpcode_CALL, TranslateModel, 115, 0, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(297), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241968)),
        SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(297), 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241570)),
        SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(297), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 115),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241570) = SCRIPT({
    sleep 20;
    spawn {
        ShakeCam(0, 0, 120, 1.0);
    }
    spawn {
        0x802CA988(0, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7));
        MakeLerp(SI_VAR(6), 600, 20, 0);
10:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(7));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
        SI_VAR(2) = SI_VAR(0);
        sleep 5;
        MakeLerp(SI_VAR(7), 0xFFFFFFEC, 20, 0);
15:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(2), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 15;
        }
    }
    SetGroupEnabled(105, 1);
    EnableModel(108, 1);
    PlaySound(0x80000053);
    MakeLerp(120, 20, 120, 0);
30:
    UpdateLerp();
    TranslateGroup(105, 0, SI_VAR(0), 0);
    TranslateModel(108, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 30;
    }
    PlaySound(1579);
    0x802D62E4(555);
    SetGroupEnabled(105, 0);
    EnableModel(106, 0);
    EnableModel(108, 0);
    ModifyColliderFlags(0, 52, 0x7FFFFE00);
    ModifyColliderFlags(0, 54, 0x7FFFFE00);
    ModifyColliderFlags(0, 43, 0x7FFFFE00);
    sleep 10;
    SetCamPerspective(0, 3, 25, 16, 4096);
    ResetCam(0, 90.0);
    PanToTarget(0, 0, 0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    spawn {
        SI_VAR(0) = 17;
        loop 13 {
            SI_VAR(0) += 1;
            TranslateModel(115, 0, SI_VAR(0), 0);
            sleep 1;
        }
    }
});

Script N(script_80241968) = SCRIPT({
    sleep 20;
    spawn {
        ShakeCam(0, 0, 220, 1.0);
    }
    spawn {
        sleep 60;
        0x802CA988(0, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7));
        MakeLerp(SI_VAR(6), 600, 20, 0);
10:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(7));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
        SI_VAR(2) = SI_VAR(0);
        sleep 5;
        MakeLerp(SI_VAR(7), 0xFFFFFFEC, 20, 0);
15:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(2), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 15;
        }
    }
    PlaySoundAt(0x80000052, 0, 118, 115, 0xFFFFFFF5);
    sleep 20;
    spawn {
        SetTexPanner(111, 2);
        SetTexPanner(113, 3);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        loop 1000 {
            SetTexPanOffset(2, 0, SI_VAR(0), SI_VAR(1));
            SetTexPanOffset(3, 0, 0, SI_VAR(2));
            SI_VAR(0) += 1000;
            SI_VAR(1) += 4000;
            SI_VAR(2) += 0xFFFFFA24;
            sleep 1;
        }
    }
    spawn {
        EnableModel(111, 1);
        MakeLerp(400, 0, 20, 0);
20:
        UpdateLerp();
        TranslateModel(111, 0xFFFFFF9C, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 20;
        }
        SetGroupEnabled(105, 1);
        EnableModel(108, 1);
        EnableModel(113, 1);
        MakeLerp(20, 120, 180, 0);
30:
        UpdateLerp();
        TranslateGroup(105, 0, SI_VAR(0), 0);
        TranslateModel(108, 0, SI_VAR(0), 0);
        TranslateModel(113, 0xFFFFFF9C, SI_VAR(0), 0);
        TranslateModel(111, 0xFFFFFF9C, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 30;
        }
        MakeLerp(100, 1, 20, 0);
40:
        UpdateLerp();
        SI_VAR(2) = f SI_VAR(0);
        SI_VAR(2) /= 100;
        TranslateModel(113, 0xFFFFFF9C, 120, 0);
        TranslateModel(111, 0xFFFFFF9C, 120, 0);
        ScaleModel(113, SI_VAR(2), 1.0, SI_VAR(2));
        ScaleModel(111, SI_VAR(2), 1.0, SI_VAR(2));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 40;
        }
        PlaySound(1578);
        0x802D62E4(554);
        EnableModel(113, 0);
        EnableModel(111, 0);
    }
    sleep 230;
    SetCamPerspective(0, 3, 25, 16, 4096);
    ResetCam(0, 90.0);
    PanToTarget(0, 0, 0);
    ModifyColliderFlags(1, 52, 0x7FFFFE00);
    ModifyColliderFlags(1, 54, 0x7FFFFE00);
    ModifyColliderFlags(1, 43, 0x7FFFFE00);
    ModifyColliderFlags(0, 43, 0x8000);
    ModifyColliderFlags(3, 43, 4);
    ModifyColliderFlags(0, 43, 0x80000);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    spawn {
        SI_VAR(0) = 17;
        loop 13 {
            SI_VAR(0) += 1;
            TranslateModel(115, 0, SI_VAR(0), 0);
            sleep 1;
        }
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80242090) = {
    SI_CMD(ScriptOpcode_CALL, func_80240408_AA93A8),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, func_80240434_AA93D4),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtPlayer, 553, 0),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x8000D),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 275),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241314)),
        SI_CMD(ScriptOpcode_LOOP, 20),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, SetPlayerPos, 680, SI_VAR(0), 0xFFFFFFDD),
            SI_CMD(ScriptOpcode_CALL, TranslateModel, 117, 0, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(297), 1),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80242624)),
        SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(297), 2),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024229C)),
        SI_CMD(ScriptOpcode_SET, SI_SAVE_VAR(297), 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 240),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_8024229C) = SCRIPT({
    sleep 20;
    spawn {
        ShakeCam(0, 0, 120, 1.0);
    }
    EnableModel(106, 0);
    EnableModel(108, 1);
    spawn {
        0x802CA988(0, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7));
        MakeLerp(SI_VAR(6), 600, 20, 0);
10:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(7));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
        SI_VAR(2) = SI_VAR(0);
        sleep 5;
        MakeLerp(SI_VAR(7), 0xFFFFFFEC, 20, 0);
15:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(2), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 15;
        }
    }
    SetGroupEnabled(105, 1);
    PlaySound(0x80000053);
    MakeLerp(220, 120, 120, 0);
30:
    UpdateLerp();
    TranslateGroup(105, 0, SI_VAR(0), 0);
    TranslateModel(108, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 30;
    }
    PlaySound(1579);
    0x802D62E4(555);
    sleep 10;
    SetCamPerspective(0, 3, 25, 16, 4096);
    ResetCam(0, 90.0);
    PanToTarget(0, 0, 0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    spawn {
        SI_VAR(0) = 0xFFFFFFF3;
        loop 13 {
            SI_VAR(0) += 1;
            TranslateModel(117, 0, SI_VAR(0), 0);
            sleep 1;
        }
    }
});

Script N(script_80242624) = SCRIPT({
    sleep 20;
    spawn {
        ShakeCam(0, 0, 220, 1.0);
    }
    EnableModel(106, 1);
    EnableModel(108, 0);
    spawn {
        sleep 60;
        0x802CA988(0, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7));
        MakeLerp(SI_VAR(6), 600, 20, 0);
10:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(7));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
        SI_VAR(2) = SI_VAR(0);
        sleep 5;
        MakeLerp(SI_VAR(7), 0xFFFFFFEC, 20, 0);
15:
        UpdateLerp();
        0x802CABE8(0, SI_VAR(4), SI_VAR(5), SI_VAR(2), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 15;
        }
    }
    PlaySoundAt(0x80000052, 0, 500, 240, 0xFFFFFFE7);
    sleep 20;
    spawn {
        SetTexPanner(111, 2);
        SetTexPanner(113, 3);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        loop 1000 {
            SetTexPanOffset(2, 0, SI_VAR(0), SI_VAR(1));
            SetTexPanOffset(3, 0, 0, SI_VAR(2));
            SI_VAR(0) += 1000;
            SI_VAR(1) += 4000;
            SI_VAR(2) += 0xFFFFFA24;
            sleep 1;
        }
    }
    spawn {
        EnableModel(111, 1);
        MakeLerp(400, 0, 20, 0);
20:
        UpdateLerp();
        TranslateModel(111, 300, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 20;
        }
        SetGroupEnabled(105, 1);
        EnableModel(113, 1);
        MakeLerp(120, 220, 180, 0);
30:
        UpdateLerp();
        TranslateGroup(105, 0, SI_VAR(0), 0);
        TranslateModel(106, 0, SI_VAR(0), 0);
        TranslateModel(111, 300, SI_VAR(0), 0);
        TranslateModel(113, 300, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 30;
        }
        MakeLerp(100, 1, 20, 0);
40:
        UpdateLerp();
        SI_VAR(2) = f SI_VAR(0);
        SI_VAR(2) /= 100;
        TranslateModel(113, 300, 220, 0);
        TranslateModel(111, 300, 220, 0);
        ScaleModel(113, SI_VAR(2), 1.0, SI_VAR(2));
        ScaleModel(111, SI_VAR(2), 1.0, SI_VAR(2));
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 40;
        }
        PlaySound(1578);
        0x802D62E4(554);
        EnableModel(113, 0);
        EnableModel(111, 0);
    }
    sleep 230;
    SetCamPerspective(0, 3, 25, 16, 4096);
    ResetCam(0, 90.0);
    PanToTarget(0, 0, 0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    spawn {
        SI_VAR(0) = 0xFFFFFFF3;
        loop 13 {
            SI_VAR(0) += 1;
            TranslateModel(117, 0, SI_VAR(0), 0);
            sleep 1;
        }
    }
});

NpcSettings N(npcSettings_80242CD0) = {
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

s32 unk_missing_80242CFC[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Init_80242D28) = SCRIPT({
    SetNpcFlagBits(-1, 16, 0);
});

StaticNpc N(npcGroup_80242D50)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242CD0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00206D01,
        .init = N(script_Init_80242D28),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
    },
};

NpcGroupList N(npcGroupList_80242F40) = {
    NPC_GROUP(N(npcGroup_80242D50), 0x00000000),
    {},
};

s32 pad_002F58[] = {
    0x00000000, 0x00000000,
};

s32 N(intTable_80242F60)[] = {
    0x00000037, 0xFFFFFF1A, 0x00000110, 0xFFFFFF9C, 0x00000039, 0xFFFFFF60, 0x00000110, 0xFFFFFF9C,
    0x0000003B, 0xFFFFFF99, 0x00000110, 0xFFFFFF9C, 0x0000003D, 0xFFFFFFD2, 0x00000110, 0xFFFFFF9C,
    0x0000003F, 0x0000000A, 0x00000110, 0xFFFFFF9C, 0x00000041, 0x00000043, 0x00000110, 0xFFFFFF9C,
    0x00000043, 0x00000087, 0x00000110, 0xFFFFFF9C, 0x00000045, 0x000000F5, 0x00000110, 0xFFFFFF9C,
    0x00000047, 0x0000013E, 0x00000110, 0xFFFFFF9C, 0x00000049, 0x00000177, 0x00000110, 0xFFFFFF9C,
    0x0000004B, 0x000001B0, 0x00000110, 0xFFFFFF9C, 0x0000004D, 0x000001EA, 0x00000110, 0xFFFFFF9C,
    0x0000004F, 0x00000223, 0x00000110, 0xFFFFFF9C, 0x00000051, 0x00000267, 0x00000110, 0xFFFFFF9C,
    0xFFFFFFFF,
};

Script N(script_80243044) = SCRIPT({
    UseSettingsFrom(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    SetCamSpeed(0, 0.5);
    SetCamDistance(0, 450.0);
    SetCamPitch(0, 15.5, -8.0);
    SetPanTarget(0, SI_VAR(6), SI_VAR(7), SI_VAR(8));
    PanToTarget(0, 0, 1);
});

Script N(script_802430E4) = SCRIPT({
    MakeLerp(0, 450, 15, 0);
    loop {
        UpdateLerp();
        RotateModel(SI_VAR(5), SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableModel(SI_VAR(5), 0);
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80243190) = {
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, GetPlayerActionState, SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 21, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 23, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 25, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 27, 0x7FFFFE00),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80242F60)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(6), 615),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243044)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(5), -1),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 8256, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
        SI_CMD(ScriptOpcode_SPAWN, N(script_802430E4)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 50),
    SI_CMD(ScriptOpcode_CALL, StopSound, 8256),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1590), 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_003404[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243410) = SCRIPT({
    if (SI_SAVE_FLAG(1590) == 1) {
        return;
    }
    DisablePlayerInput(1);
    SI_VAR(5) = 0xFFFFFF20;
    MakeLerp(355, 370, 4, 4);
    loop {
        UpdateLerp();
        func_80240564_AA9504(SI_MAP_VAR(0), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) -= 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(SI_VAR(0), 240, 16, 1);
    loop {
        UpdateLerp();
        func_80240564_AA9504(SI_MAP_VAR(0), SI_VAR(5), SI_VAR(0), 0);
        sleep 1;
        SI_VAR(5) -= 2;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerInput(0);
});

s32 N(itemList_80243598)[] = {
    0x0000001A, 0x00000000,
};

Script N(script_802435A0) = SCRIPT({
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        return;
    }
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(1589) = 1;
    func_8024065C_AA95FC(SI_MAP_VAR(1), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(1);
    func_80240628_AA95C8();
    SI_VAR(1) = 0;
    sleep 5;
    0x802D6954();
    unbind;
    bind N(script_ExitDoubleDoor_802408E8) to TriggerFlag_WALL_INTERACT 39;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1589), 0),
        SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 743, 10, 115, 270, 0x80000000),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(1), SI_VAR(0)),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802435A0), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80243598), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_802408E8), TriggerFlag_WALL_INTERACT, 39, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1590), 0),
        SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802E9BD4, 0xFFFFFF20, 355, 0xFFFFFFE7, 0, 0x80000000),
        SI_CMD(ScriptOpcode_CALL, AssignAreaFlag, 9),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802EA0C4, 0xFFFFFF20, 330, 0xFFFFFFE7, 0, 0x80000000),
    SI_CMD(ScriptOpcode_CALL, AssignScript, N(script_80243410)),
    SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802EAA54, 475, 0, 0xFFFFFFEC, 90, 60, 0x80000000),
    SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802EA588, 195, 300, 0xFFFFFFB5, 0, 163, 0x80000000),
    SI_CMD(ScriptOpcode_CALL, AssignBlockFlag, SI_SAVE_FLAG(1591)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// rodata: D_80243880_AAC820

// rodata: D_80243888_AAC828
