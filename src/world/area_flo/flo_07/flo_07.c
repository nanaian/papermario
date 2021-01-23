#include "flo_07.h"

s32 pad_0003D8[2];
s32 pad_000734[3];
Script N(script_802407A0);
Script N(script_8024086C);
Script N(script_80240890);
s32 pad_0008CC[1];
Script N(script_UpdateTexturePan_802408D0);
Script N(script_8024096C);
Script N(script_ExitWalk_80240C18);
Script N(script_80240C74);
Script N(main);
s32 pad_001214[3];
Script N(script_SearchBush_8024124C);
Script N(script_ShakeTree_802415AC);
s32 N(unk_80241BB0)[1];
Script N(script_80241BB4);
Script N(script_80241BE4);
Script N(script_80241C14);
Script N(script_80241D6C);
Script N(script_80241DBC);
Script N(script_Interact_80242044);
Script N(script_Init_80242428);
Script N(script_802424F4);
Script N(script_Tree1_Callback);
Script N(script_802428C4);
StaticNpc N(npcGroup_8024291C)[1];
NpcGroupList N(npcGroupList_80242B0C);
s32 pad_002B24[3];
const char D_80242B30_CAED20[8]; // "flo_25"
const char D_80242B38_CAED28[8]; // "flo_10"
const char D_80242B40_CAED30[8]; // "flo_25"
s32 pad_002B48[2];

// text: func_80240000_CAC1F0

// text: func_80240124_CAC314

// text: func_8024030C_CAC4FC

// text: func_80240344_CAC534

s32 pad_0003D8[] = {
    0x00000000, 0x00000000,
};

// text: func_802403E0_CAC5D0

// text: func_80240450_CAC640

// text: func_8024061C_CAC80C

// text: func_802406D0_CAC8C0

s32 pad_000734[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 375.0f, 0.0f, 0.0f, 270.0f },
    { 325.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190116,
};

Script N(script_802407A0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetMusicTrack(0, 127, 0, 8);
    } else {
        match SI_SAVE_VAR(0) {
            < 53 {
                SetMusicTrack(0, 48, 0, 8);
            }
            else {
                SetMusicTrack(0, 49, 0, 8);
            }
        }
    }
    PlaySound(0x80000021);
});

Script N(script_8024086C) = SCRIPT({
    func_802D5FF8(137, 1);
});

Script N(script_80240890) = SCRIPT({
    FadeOutMusic(0, 250);
    sleep 10;
    func_802D5FD8();
});

s32 pad_0008CC[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802408D0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_CAC1F0();
                    return;
                }
            }
        }
    }
    func_80240124_CAC314();
});

Script N(script_8024096C) = SCRIPT({
    group 11;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    SI_VAR(13) = SI_VAR(3);
    SI_VAR(14) = SI_VAR(4);
    SI_VAR(12) -= SI_VAR(0);
    SI_VAR(13) -= SI_VAR(1);
    SI_VAR(0) =f SI_VAR(12);
    SI_VAR(0) /= 100.0;
    SI_VAR(15) = 100.0;
    SI_VAR(15) /=f SI_VAR(0);
    SI_VAR(15) += 11;
    SI_VAR(5) = 200;
    SI_VAR(5) /= SI_VAR(15);
    SI_VAR(5) += 1;
    loop SI_VAR(5) {
        RandInt(SI_VAR(12), SI_VAR(0));
        RandInt(SI_VAR(13), SI_VAR(1));
        RandInt(199, SI_VAR(2));
        SI_VAR(3) = 210;
        SI_VAR(3) -= SI_VAR(2);
        SI_VAR(0) += SI_VAR(10);
        SI_VAR(1) += SI_VAR(11);
        SI_VAR(2) += SI_VAR(14);
        PlayEffect(13, SI_VAR(0), SI_VAR(2), SI_VAR(1), SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    sleep SI_VAR(15);
0:
    RandInt(SI_VAR(12), SI_VAR(0));
    RandInt(SI_VAR(13), SI_VAR(1));
    SI_VAR(0) += SI_VAR(10);
    SI_VAR(1) += SI_VAR(11);
    PlayEffect(13, SI_VAR(0), SI_VAR(14), SI_VAR(1), 200, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep SI_VAR(15);
    goto 0;
});

Script N(script_ExitWalk_80240C18) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242B30_CAED20, 1);
    sleep 100;
});

Script N(script_80240C74) = SCRIPT({
    bind N(script_ExitWalk_80240C18) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_AREA_FLAG(6) = 0;
    MakeNpcs(0, N(npcGroupList_80242B0C));
    await N(script_802428C4);
    ModifyColliderFlags(3, 6, 6);
    SI_VAR(0) = 297;
    SI_VAR(1) = 0xFFFFFFA1;
    SI_VAR(2) = 383;
    SI_VAR(3) = 0xFFFFFFBF;
    SI_VAR(4) = 0;
    spawn N(script_8024096C);
    SI_VAR(0) = 293;
    SI_VAR(1) = 71;
    SI_VAR(2) = 378;
    SI_VAR(3) = 113;
    SI_VAR(4) = 0;
    spawn N(script_8024096C);
    SI_VAR(0) = 21;
    SI_VAR(1) = 0xFFFFFEA6;
    SI_VAR(2) = 147;
    SI_VAR(3) = 0xFFFFFF0E;
    SI_VAR(4) = 20;
    spawn N(script_8024096C);
    SI_VAR(0) = 0xFFFFFEA2;
    SI_VAR(1) = 0xFFFFFF42;
    SI_VAR(2) = 0xFFFFFFAF;
    SI_VAR(3) = 0xFFFFFF96;
    SI_VAR(4) = 0;
    spawn N(script_8024096C);
    SI_VAR(0) = 0xFFFFFE84;
    SI_VAR(1) = 85;
    SI_VAR(2) = 0xFFFFFFA1;
    SI_VAR(3) = 150;
    SI_VAR(4) = 0;
    spawn N(script_8024096C);
    EnableTexPanning(51, 1);
    EnableTexPanning(49, 1);
    EnableTexPanning(50, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 100;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802408D0);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFB50;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802408D0);
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn N(script_80241C14);
    } else {
        ModifyColliderFlags(0, 1, 0x7FFFFE00);
        SI_VAR(0) = N(script_80240C74);
        spawn EnterWalk;
        spawn N(script_802424F4);
    }
    await N(script_802407A0);
    if (SI_SAVE_VAR(0) >= 53) {
        func_8024030C_CAC4FC();
    }
    func_80240344_CAC534();
});

s32 pad_001214[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241220) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x38,
    .radius = 0x28,
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

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_8024124C) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240450_CAC640, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240450_CAC640, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_802415AC) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240450_CAC640, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240450_CAC640, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240450_CAC640, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240450_CAC640, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80241BB0)[] = {
    0x00000000,
};

Script N(script_80241BB4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80241BE4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_80241C14) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 30;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 300);
    SetCamPitch(0, 11.0, -11.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SpeakToPlayer(0, 0xC80002, 0xC80001, 0, 0x1100C5);
    sleep 10;
    GotoMap(D_80242B38_CAED28, 1);
    sleep 100;
});

Script N(script_80241D6C) = SCRIPT({
0:
    ShakeCam(0, 0, 1, 1.0);
    sleep 1;
    goto 0;
});

Script N(script_80241DBC) = SCRIPT({
    if (SI_AREA_FLAG(6) == 1) {
        return;
    }
    SpeakToPlayer(0, 0xC80002, 0xC80001, 0, 0x110068);
    spawn {
        SetCamDistance(0, 300);
        SetCamPitch(0, 18.0, -7.5);
        SetCamSpeed(0, 0.5);
        PanToTarget(0, 0, 1);
    }
    PlaySound(0x8000006B);
    SI_MAP_VAR(0) = spawn N(script_80241D6C);
    SpeakToPlayer(0, 0xC80006, 0xC80006, 0, 0x110069);
    kill SI_MAP_VAR(0);
    SetCamDistance(0, 350);
    SetCamPitch(0, 18.0, -7.5);
    SetCamSpeed(0, 8.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= SI_VAR(2);
    if (SI_VAR(0) < 0xFFFFFF06) {
        MakeItemEntity(30, 0xFFFFFF1F, 100, 0xFFFFFFE7, 13, SI_SAVE_FLAG(1374));
    } else {
        MakeItemEntity(30, 0xFFFFFEF7, 100, 54, 13, SI_SAVE_FLAG(1374));
        SI_SAVE_FLAG(1396) = 1;
    }
    PlaySound(1980);
    func_802D62E4(956);
    SI_AREA_FLAG(6) = 1;
    sleep 20;
    SpeakToPlayer(0, 0xC80002, 0xC80001, 0, 0x11006A);
    SI_SAVE_VAR(0) = 47;
});

Script N(script_Interact_80242044) = SCRIPT({
    await N(script_8024086C);
    NpcFacePlayer(-1, 1);
    match SI_SAVE_VAR(0) {
        < 45 {
            if (SI_AREA_FLAG(5) == 0) {
                SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110070);
                SI_AREA_FLAG(5) = 1;
            } else {
                SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110071);
            }
        }
        < 46 {
            AdjustCam(0, 4.0, 0, 350.0, 18.0, -7.5);
            SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110065);
            SetNpcAnimation(-1, 0xC80005);
            sleep 20;
            SetNpcAnimation(-1, 0xC80000);
            SI_VAR(0) = 89;
            SI_VAR(1) = 1;
            await N(script_80241BB4);
            AddKeyItem(89);
            SI_SAVE_VAR(0) = 46;
            SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110066);
            if (SI_SAVE_FLAG(1379) == 1) {
                await N(script_80241DBC);
            }
            ResetCam(0, 4.0);
        }
        < 47 {
            if (SI_SAVE_FLAG(1379) == 1) {
                if (SI_AREA_FLAG(6) == 0) {
                    AdjustCam(0, 4.0, 0, 350.0, 18.0, -7.5);
                    await N(script_80241DBC);
                    ResetCam(0, 4.0);
                } else {
                    SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110072);
                }
            } else {
                SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110072);
            }
        }
        < 53 {
            if (SI_SAVE_FLAG(1374) == 0) {
                SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110072);
            } else {
                if (SI_SAVE_VAR(0) < 48) {
                    SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110073);
                } else {
                    SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110074);
                }
                ContinueSpeech(-1, 0xC80002, 0xC80001, 0, 0x110075);
            }
        }
        < 60 {
            SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110076);
        }
        else {
            SpeakToPlayer(-1, 0xC80002, 0xC80001, 0, 0x110077);
        }
    }
    await N(script_80240890);
});

Script N(script_Init_80242428) = SCRIPT({
    if (SI_SAVE_VAR(0) == 47) {
        if (SI_SAVE_FLAG(1374) == 0) {
            if (SI_SAVE_FLAG(1396) == 0) {
                MakeItemEntity(30, 0xFFFFFF1F, 0, 0xFFFFFFE7, 17, SI_SAVE_FLAG(1374));
            } else {
                MakeItemEntity(30, 0xFFFFFEF7, 0, 54, 17, SI_SAVE_FLAG(1374));
            }
        }
    }
    SI_AREA_FLAG(5) = 0;
    BindNpcInteract(-1, N(script_Interact_80242044));
});

Script N(script_802424F4) = SCRIPT({
    if (SI_AREA_VAR(3) != 0) {
        DisablePlayerInput(1);
        sleep 10;
        if (SI_AREA_VAR(3) < 5) {
            SpeakToPlayer(0, 0xC80002, 0xC80001, 0, 0x11006E);
            GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
            PlayerMoveTo(410, SI_VAR(3), 10);
            SI_AREA_VAR(3) += 1;
        } else {
            SpeakToPlayer(0, 0xC80002, 0xC80001, 0, 0x11006F);
            SI_AREA_VAR(3) = 0;
        }
        DisablePlayerInput(0);
    }
});

Script N(script_Tree1_Callback) = SCRIPT({
    DisablePlayerInput(1);
    if (SI_SAVE_VAR(0) < 47) {
        NpcFacePlayer(0, 1);
        sleep 10;
        SpeakToPlayer(0, 0xC80004, 0xC80001, 0, 0x110067);
        if (SI_SAVE_VAR(0) == 46) {
            if (SI_SAVE_FLAG(1379) == 1) {
                UseSettingsFrom(0, 0xFFFFFF06, 0, 0);
                SetPanTarget(0, 0xFFFFFF06, 0, 0);
                SetCamDistance(0, 350);
                PanToTarget(0, 0, 1);
                await N(script_80241DBC);
                ResetCam(0, 4.0);
            }
        }
    } else {
        if (SI_SAVE_FLAG(1374) == 0) {
            NpcFacePlayer(0, 1);
            sleep 10;
            SpeakToPlayer(0, 0xC80004, 0xC80001, 0, 0x110067);
        } else {
            SI_AREA_VAR(2) += 1;
            match SI_AREA_VAR(2) {
                < 2 {
                    SpeakToPlayer(0, 0xC80003, 0xC80001, 0, 0x11006B);
                }
                < 5 {
                    SpeakToPlayer(0, 0xC80003, 0xC80001, 0, 0x11006C);
                }
                >= 5 {
                    SpeakToPlayer(0, 0xC80003, 0xC80001, 0, 0x11006D);
                    SI_AREA_VAR(3) = 1;
                    GotoMap(D_80242B40_CAED30, 1);
                    sleep 100;
                }
            }
        }
    }
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
});

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x13, 0x14, 0x15 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x12 },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = &N(script_Tree1_Callback),
};

Vec4f N(triggerCoord_802428B4) =  { -309.0f, 0.0f, 31.0f, 0.0f };

Script N(script_802428C4) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802415AC) to TriggerFlag_WALL_HAMMER 4;
    bind N(script_ShakeTree_802415AC) to TriggerFlag_BOMB N(triggerCoord_802428B4);
});

StaticNpc N(npcGroup_8024291C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241220),
        .pos = { -260.0, 0.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80242428),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001, 0x00C80001,
        },
        .tattle = 0x1A00DE,
    },
};

NpcGroupList N(npcGroupList_80242B0C) = {
    NPC_GROUP(N(npcGroup_8024291C), 0x00000000),
    {},
};

s32 pad_002B24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242B30_CAED20

// rodata: D_80242B38_CAED28

// rodata: D_80242B40_CAED30

s32 pad_002B48[] = {
    0x00000000, 0x00000000,
};
