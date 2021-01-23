#include "flo_12.h"

s32 pad_000034[3];
s32 pad_0006E8[2];
Script N(script_80240750);
Script N(script_8024080C);
Script N(script_80240830);
s32 pad_00086C[1];
Script N(script_80240870);
Script N(script_ExitWalk_80240B1C);
Script N(script_80240B78);
Script N(main);
s32 pad_000E28[2];
Script N(script_SearchBush_80240E88);
Script N(script_ShakeTree_802411E8);
s32 N(unk_802417EC)[1];
Script N(script_802417F0);
Script N(script_80241820);
s32 N(unk_80241850)[1];
s32 N(unk_80241854)[1];
Script N(script_80241858);
Script N(script_8024199C);
s32 N(unk_802419EC)[2];
Script N(script_802419F4);
Script N(script_80241B6C);
Script N(script_80241BE4);
Script N(script_Interact_80241C8C);
Script N(script_Init_802423D0);
StaticNpc N(npcGroup_802425D8)[2];
NpcGroupList N(npcGroupList_802429B8);
const char D_802429D0_CC3800[8]; // "flo_11"
const char D_802429D8_CC3808[8]; // "flo_03"

// text: func_80240000_CC0E30

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_CC0E70

// text: func_802400B0_CC0EE0

// text: func_8024027C_CC10AC

// text: func_80240330_CC1160

// text: func_80240394_CC11C4

// text: func_802403F0_CC1220

// text: func_802405C0_CC13F0

// text: func_80240614_CC1444

// text: func_8024064C_CC147C

s32 pad_0006E8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 280.0f, 0.0f, 0.0f, 270.0f },
    { 280.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19011C,
};

Script N(script_80240750) = SCRIPT({
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
});

Script N(script_8024080C) = SCRIPT({
    0x802D5FF8(137, 3);
});

Script N(script_80240830) = SCRIPT({
    FadeOutMusic(0, 250);
    sleep 10;
    0x802D5FD8();
});

s32 pad_00086C[] = {
    0x00000000,
};

Script N(script_80240870) = SCRIPT({
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

Script N(script_ExitWalk_80240B1C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802429D0_CC3800, 1);
    sleep 100;
});

Script N(script_80240B78) = SCRIPT({
    bind N(script_ExitWalk_80240B1C) to 0x80000 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 38;
    SetSpriteShading(-1);
    SetCamLeadPlayer(0, 0);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_AREA_FLAG(22) = 0;
    MakeNpcs(0, N(npcGroupList_802429B8));
    ModifyColliderFlags(3, 11, 6);
    SI_VAR(0) = 0xFFFFFFBF;
    SI_VAR(1) = 0xFFFFFF2E;
    SI_VAR(2) = 90;
    SI_VAR(3) = 0xFFFFFF92;
    SI_VAR(4) = 0;
    spawn N(script_80240870);
    SI_VAR(0) = 0xFFFFFF38;
    SI_VAR(1) = 130;
    SI_VAR(2) = 0xFFFFFFB0;
    SI_VAR(3) = 170;
    SI_VAR(4) = 0;
    spawn N(script_80240870);
    SI_VAR(0) = 0xFFFFFEF2;
    SI_VAR(1) = 0xFFFFFFB0;
    SI_VAR(2) = 0xFFFFFF1F;
    SI_VAR(3) = 125;
    SI_VAR(4) = 0;
    spawn N(script_80240870);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn N(script_802419F4);
    } else {
        ModifyColliderFlags(0, 1, 0x7FFFFE00);
        SI_VAR(0) = N(script_80240B78);
        spawn EnterWalk;
    }
    await N(script_80240750);
    if (SI_SAVE_VAR(0) >= 53) {
        func_80240000_CC0E30();
    }
});

s32 pad_000E28[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240E30) = {
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

NpcSettings N(npcSettings_80240E5C) = {
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

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80240E88) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CC0EE0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CC0EE0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802411E8) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CC0EE0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CC0EE0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CC0EE0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400B0_CC0EE0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

s32 N(unk_802417EC)[] = {
    0x00000000,
};

Script N(script_802417F0) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80241820) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80241850)[] = {
    0x00000000,
};

s32 N(unk_80241854)[] = {
    0x00000000,
};

Script N(script_80241858) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_802403F0_CC1220(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240614_CC1444(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024199C) = {
    SI_CMD(ScriptOpcode_CALL, func_8024064C_CC147C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241858), 0x10, 0, D_802429E0_BDD190, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802405C0_CC13F0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(unk_802419EC)[] = {
    0x0000001E, 0x00000000,
};

Script N(script_802419F4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350);
    SetCamPitch(0, 17.0, -9.5);
    SetCamPosA(0, 0, 0);
    SetCamPosB(0, 0, 0xFFFFFFCE);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    SpeakToPlayer(0, 0xCA0004, 0xCA0002, 5, 0x1100C7);
    sleep 10;
    GotoMap(D_802429D8_CC3808, 2);
    sleep 100;
});

Script N(script_80241B6C) = SCRIPT({
    sleep 10;
    SetNpcFlagBits(0, 256, 1);
    PlayerMoveTo(0xFFFFFFFB, 20, 20);
    SetNpcFlagBits(0, 256, 0);
    PlayerFaceNpc(0, 1);
});

Script N(script_80241BE4) = SCRIPT({
    sleep 10;
    SetNpcFlagBits(0, 256, 1);
    SetNpcFlagBits(1, 256, 1);
    PlayerMoveTo(0xFFFFFFFB, 20, 20);
    SetNpcFlagBits(0, 256, 0);
    SetNpcFlagBits(1, 256, 0);
    PlayerFaceNpc(0, 1);
});

Script N(script_Interact_80241C8C) = SCRIPT({
    await N(script_8024080C);
    match SI_SAVE_VAR(0) {
        < 47 {
            match SI_SAVE_FLAG(1378) {
                == 0 {
                    spawn N(script_80241B6C);
                    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SI_VAR(0) += 30;
                    SetCamProperties(0, 4.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 325, 19.0, -9.5);
                    SpeakToPlayer(-1, 0xCA0003, 0xCA0001, 5, 0x11008C);
                    ShowChoice(0x1E0011);
                    sleep 10;
                    match SI_VAR(0) {
                        == 0 {
                            ContinueSpeech(-1, 0xCA0003, 0xCA0001, 5, 0x11008D);
                        }
                        == 1 {
                            ContinueSpeech(-1, 0xCA0003, 0xCA0001, 5, 0x11008E);
                        }
                    }
                    SetNpcFlagBits(1, 256, 0);
                    SetNpcAnimation(-1, 0xCA0005);
                    sleep 10;
                    SetNpcAnimation(-1, 0xCA0002);
                    MakeItemEntity(87, 0xFFFFFFDF, 14, 19, 1, 1380);
                    sleep 10;
                    match SI_SAVE_FLAG(1375) {
                        == 0 {
                            SpeakToPlayer(-1, 0xCA0004, 0xCA0004, 5, 0x11008F);
                        }
                        == 1 {
                            SetPlayerAnimation(0x60002);
                            SpeakToPlayer(-1, 0xCA0004, 0xCA0004, 5, 0x11008F);
                            SetPlayerAnimation(0x60005);
                            SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110091);
                            SetPlayerAnimation(0x1002C);
                            sleep 40;
                            SetPlayerAnimation(0x10002);
                            SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110092);
                            SI_SAVE_FLAG(1379) = 1;
                        }
                    }
                    SI_SAVE_FLAG(1378) = 1;
                }
                == 1 {
                    match SI_SAVE_FLAG(1379) {
                        == 0 {
                            if (SI_SAVE_FLAG(1375) == 1) {
                                spawn N(script_80241BE4);
                                SpeakToPlayer(-1, 0xCA0004, 0xCA0004, 5, 0x110090);
                                SetPlayerAnimation(0x60005);
                                SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110091);
                                SetPlayerAnimation(0x1002C);
                                sleep 40;
                                SetPlayerAnimation(0x10002);
                                SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110092);
                                SI_SAVE_FLAG(1379) = 1;
                            } else {
                                SpeakToPlayer(-1, 0xCA0004, 0xCA0004, 5, 0x110090);
                            }
                        }
                        == 1 {
                            SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110093);
                        }
                    }
                }
            }
        }
        < 48 {
            FindKeyItem(30, SI_VAR(0));
            if (SI_VAR(0) != -1) {
                spawn N(script_80241BE4);
                GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(0) += 30;
                SetCamProperties(0, 4.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 325, 19.0, -9.5);
            }
            SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110094);
            SI_VAR(0) = N(unk_802419EC);
            SI_VAR(1) = 0;
            await N(script_8024199C);
            match SI_VAR(0) {
                <= 0 {
                    SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110093);
                }
                else {
                    SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110095);
                    RemoveItemEntity(SI_VAR(7));
                    MakeItemEntity(30, 0xFFFFFFDF, 14, 19, 1, 1380);
                    SI_VAR(0) = 87;
                    SI_VAR(1) = 1;
                    await N(script_802417F0);
                    AddKeyItem(87);
                    sleep 10;
                    SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110096);
                    SI_AREA_FLAG(22) = 1;
                    SI_SAVE_VAR(0) = 48;
                }
            }
        }
        < 53 {
            match SI_AREA_FLAG(22) {
                == 0 {
                    SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110097);
                }
                == 1 {
                    SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110096);
                }
            }
        }
        < 60 {
            SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110098);
        }
        else {
            SpeakToPlayer(-1, 0xCA0004, 0xCA0002, 5, 0x110099);
        }
    }
    ResetCam(0, 4.0);
    await N(script_80240830);
});

Script N(script_Init_802423D0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241C8C));
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 35;
    SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcFlagBits(1, 2, 1);
    SetNpcFlagBits(1, 16, 1);
    match SI_SAVE_VAR(0) {
        < 47 {
            if (SI_SAVE_FLAG(1378) == 1) {
                SetNpcFlagBits(1, 256, 0);
                SetNpcAnimation(-1, 0xCA0002);
                MakeItemEntity(87, 0xFFFFFFDF, 14, 19, 1, 1380);
                SI_VAR(10) = SI_VAR(0);
            }
        }
        < 48 {
            SetNpcFlagBits(1, 256, 0);
            SetNpcAnimation(-1, 0xCA0002);
            MakeItemEntity(87, 0xFFFFFFDF, 14, 19, 1, 1380);
            SI_VAR(10) = SI_VAR(0);
        }
        else {
            SetNpcFlagBits(1, 256, 0);
            SetNpcAnimation(-1, 0xCA0002);
            MakeItemEntity(30, 0xFFFFFFDF, 14, 19, 1, 1380);
            SI_VAR(10) = SI_VAR(0);
        }
    }
});

StaticNpc N(npcGroup_802425D8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240E30),
        .pos = { -70.0, 0.0, 20.0 },
        .flags = 0x00400D01,
        .init = N(script_Init_802423D0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001,
        },
        .tattle = 0x1A00E0,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240E5C),
        .pos = { -70.0, 0.0, 20.0 },
        .flags = 0x00000201,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001, 0x00CA0001,
        },
    },
};

NpcGroupList N(npcGroupList_802429B8) = {
    NPC_GROUP(N(npcGroup_802425D8), 0x00000000),
    {},
};

// rodata: D_802429D0_CC3800

// rodata: D_802429D8_CC3808
