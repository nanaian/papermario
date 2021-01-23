#include "jan_14.h"

s32 pad_0004BC[1];
s32 pad_0012D4[3];
Script N(script_ExitWalk_80241340);
Script N(script_ExitWalk_8024139C);
Script N(script_802413F8);
Script N(main);
s32 pad_001564[3];
Script N(script_80241570);
Script N(script_80241E10);
Script N(script_80241FD8);
Script N(script_802420A8);
Script N(script_80242270);
s32 pad_0025DC[1];
Script N(script_SearchBush_802425E0);
Script N(script_ShakeTree_80242940);
Script N(script_802430F4);
s32 pad_00326C[1];
Script N(script_NpcAI_802432A0);
s32 unk_missing_802432DC[11];
Script N(script_Idle_80243334);
Script N(script_802433BC);
Script N(script_Init_80243430);
StaticNpc N(npcGroup_80243454)[1];
StaticNpc N(npcGroup_80243644)[1];
NpcGroupList N(npcGroupList_80243834);
s32 pad_003858[2];
const char D_80243860_B7D8B0[8]; // "jan_15"
const char D_80243868_B7D8B8[8]; // "jan_13"
s32 pad_003878[2];
s32 pad_0038C4[3];

// text: func_80240000_B7A050

// text: func_802400F8_B7A148

// text: func_80240170_B7A1C0

// text: func_802401CC_B7A21C

// text: func_80240280_B7A2D0

// text: func_802402F0_B7A340

s32 pad_0004BC[] = {
    0x00000000,
};

// text: func_802404C0_B7A510

// text: func_802406F0_B7A740

// text: N(UnkNpcAIFunc1)

// text: func_80240AE8_B7AB38

// text: func_80240C8C_B7ACDC

// text: func_80240D6C_B7ADBC

// text: N(UnkDurationCheck)

// text: func_802410B0_B7B100

s32 pad_0012D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -250.0f, 0.0f, 120.0f, 0.0f },
    { 250.0f, 0.0f, -120.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900FC,
};

Script N(script_ExitWalk_80241340) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243860_B7D8B0, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024139C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243868_B7D8B8, 1);
    sleep 100;
});

Script N(script_802413F8) = SCRIPT({
    bind N(script_ExitWalk_8024139C) to 0x80000 0;
    bind N(script_ExitWalk_80241340) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80243834));
    spawn N(script_80242270);
    spawn N(script_802430F4);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_802413F8);
    spawn EnterWalk;
    SetMusicTrack(0, 37, 0, 8);
    PlayAmbientSounds(3);
});

s32 pad_001564[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241570) = SCRIPT({
    GetModelCenter(SI_VAR(14));
    SI_VAR(6) = SI_VAR(0);
    SI_VAR(7) = SI_VAR(1);
    SI_VAR(8) = SI_VAR(2);
    SI_VAR(7) += 0xFFFFFFEC;
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240000_B7A050(SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
    GetPlayerActionState(SI_VAR(1));
    if (SI_VAR(1) != 3) {
        SI_VAR(0) = 0;
    }
    if (SI_VAR(0) == 1) {
        DisablePlayerInput(1);
        DisablePlayerPhysics(1);
        GetModelCenter(SI_VAR(13));
        PlaySoundAt(8329, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) = 0.0;
        SI_VAR(1) = 0.0;
        spawn {
            loop 3 {
                if (SI_VAR(9) != 0) {
                    TranslateModel(SI_VAR(9), 0xFFFFFFFE, 0, 0);
                }
                if (SI_VAR(10) != 0) {
                    TranslateModel(SI_VAR(10), -1, 0, 0);
                }
                if (SI_VAR(11) != 0) {
                    TranslateModel(SI_VAR(11), 2, 0, 0);
                }
                sleep 1;
                if (SI_VAR(9) != 0) {
                    TranslateModel(SI_VAR(9), 2, 0, 0);
                }
                if (SI_VAR(10) != 0) {
                    TranslateModel(SI_VAR(10), 1, 0, 0);
                }
                if (SI_VAR(11) != 0) {
                    TranslateModel(SI_VAR(11), 0xFFFFFFFE, 0, 0);
                }
                sleep 1;
            }
            if (SI_VAR(9) != 0) {
                TranslateModel(SI_VAR(9), 0, 0, 0);
            }
            if (SI_VAR(10) != 0) {
                TranslateModel(SI_VAR(10), 0, 0, 0);
            }
            if (SI_VAR(11) != 0) {
                TranslateModel(SI_VAR(11), 0, 0, 0);
            }
        }
        if (SI_VAR(5) == 0) {
            spawn 0xFD050F8A;
        } else {
            spawn {
                sleep SI_VAR(5);
                spawn 0xFD050F8A;
            }
        }
        SetPlayerActionState(10);
        sleep 1;
        SetPlayerAnimation(0x8000D);
        loop 50 {
            func_802400F8_B7A148(SI_VAR(0), -15.0, SI_VAR(2));
            SI_VAR(1) +=f SI_VAR(2);
            SI_VAR(1) *= 0.9306640625;
            SI_VAR(0) +=f SI_VAR(1);
            TranslateModel(SI_VAR(13), 0, SI_VAR(0), 0);
            TranslateModel(SI_VAR(14), 0, SI_VAR(0), 0);
            SI_VAR(3) = SI_VAR(7);
            SI_VAR(3) += SI_VAR(0);
            SI_VAR(4) = SI_VAR(8);
            SI_VAR(4) += 2;
            SI_VAR(3) += 5;
            SetPlayerPos(SI_VAR(6), SI_VAR(3), SI_VAR(4));
            sleep 1;
        }
        GetModelCenter(SI_VAR(15));
        SetPlayerJumpscale(1);
        PlayerJump(SI_VAR(6), SI_VAR(1), SI_VAR(4), 10);
        SetPlayerActionState(0);
        GetModelCenter(SI_VAR(13));
        PlaySoundAt(8329, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        spawn {
            sleep 10;
            loop 5 {
                if (SI_VAR(9) != 0) {
                    TranslateModel(SI_VAR(9), 0xFFFFFFFE, 0, 0);
                }
                if (SI_VAR(10) != 0) {
                    TranslateModel(SI_VAR(10), -1, 0, 0);
                }
                if (SI_VAR(11) != 0) {
                    TranslateModel(SI_VAR(11), 2, 0, 0);
                }
                sleep 1;
                if (SI_VAR(9) != 0) {
                    TranslateModel(SI_VAR(9), 2, 0, 0);
                }
                if (SI_VAR(10) != 0) {
                    TranslateModel(SI_VAR(10), 1, 0, 0);
                }
                if (SI_VAR(11) != 0) {
                    TranslateModel(SI_VAR(11), 0xFFFFFFFE, 0, 0);
                }
                sleep 1;
            }
            if (SI_VAR(9) != 0) {
                TranslateModel(SI_VAR(9), 0, 0, 0);
            }
            if (SI_VAR(10) != 0) {
                TranslateModel(SI_VAR(10), 0, 0, 0);
            }
            if (SI_VAR(11) != 0) {
                TranslateModel(SI_VAR(11), 0, 0, 0);
            }
        }
        spawn {
            SI_VAR(0) = -15.0;
            SI_VAR(1) = 0.0;
            loop 100 {
                func_802400F8_B7A148(SI_VAR(0), 20.0, SI_VAR(2));
                SI_VAR(1) +=f SI_VAR(2);
                SI_VAR(1) *= 0.9306640625;
                SI_VAR(0) +=f SI_VAR(1);
                TranslateModel(SI_VAR(13), 0, SI_VAR(0), 0);
                TranslateModel(SI_VAR(14), 0, SI_VAR(0), 0);
                sleep 1;
            }
        }
        DisablePlayerPhysics(0);
        DisablePlayerInput(0);
        return;
    }
    sleep 1;
    goto 0;
});

Script N(script_80241E10) = SCRIPT({
    PlaySoundAtCollider(14, 8351, 0);
    SI_VAR(0) = SI_MAP_VAR(0);
    SI_VAR(1) = SI_MAP_VAR(1);
    SI_VAR(6) = 0;
    SI_VAR(7) = 0;
    loop 60 {
        SI_VAR(2) =f SI_MAP_VAR(0);
        SI_VAR(3) =f SI_MAP_VAR(1);
        SI_VAR(2) -=f SI_VAR(0);
        SI_VAR(3) -=f SI_VAR(1);
        SI_VAR(4) =f SI_VAR(2);
        SI_VAR(5) =f SI_VAR(3);
        SI_VAR(4) *= 0.09375;
        SI_VAR(5) *= 0.09375;
        SI_VAR(6) *= 0.80078125;
        SI_VAR(7) *= 0.80078125;
        SI_VAR(6) +=f SI_VAR(4);
        SI_VAR(7) +=f SI_VAR(5);
        SI_VAR(0) +=f SI_VAR(6);
        SI_VAR(1) +=f SI_VAR(7);
        TranslateModel(55, SI_MAP_VAR(0), 0, 0);
        TranslateModel(57, SI_MAP_VAR(1), 0, 0);
        func_802401CC_B7A21C(55, SI_VAR(6));
        func_802401CC_B7A21C(57, SI_VAR(7));
        sleep 1;
    }
});

Script N(script_80241FD8) = SCRIPT({
    ModifyColliderFlags(0, 14, 0x7FFFFE00);
    MakeLerp(0, 45, 30, 5);
    loop {
        UpdateLerp();
        SI_MAP_VAR(1) =f SI_VAR(0);
        SI_MAP_VAR(0) =f SI_MAP_VAR(1);
        SI_MAP_VAR(1) *= 1.5;
        SI_MAP_VAR(0) *= -1;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802420A8) = SCRIPT({
    match SI_VAR(12) {
        == 1 {
            spawn N(script_80241E10);
            spawn N(script_80241FD8);
        }
        == 2 {
            GetModelCenter(SI_VAR(9));
            SI_VAR(0) += 0xFFFFFFEC;
            SI_VAR(2) += 15;
            SetNpcPos(0, SI_VAR(0), 100, SI_VAR(2));
            SetNpcFlagBits(0, 0x8200, 1);
        }
        == 3 {
            GetModelCenter(SI_VAR(9));
            SI_VAR(2) += 15;
            MakeItemEntity(128, SI_VAR(0), 100, SI_VAR(2), 14, SI_SAVE_FLAG(1243));
        }
        == 4 {
            GetModelCenter(SI_VAR(9));
            SI_VAR(0) += 0xFFFFFFEC;
            SI_VAR(2) += 15;
            SetNpcPos(1, SI_VAR(0), 100, SI_VAR(2));
            SetNpcFlagBits(1, 0x8200, 1);
        }
        == 5 {
            GetModelCenter(SI_VAR(9));
            SI_VAR(2) += 15;
            MakeItemEntity(138, SI_VAR(0), 100, SI_VAR(2), 14, SI_SAVE_FLAG(1244));
        }
    }
});

Script N(script_80242270) = SCRIPT({
    ModifyColliderFlags(0, 31, 0x7FFFFE00);
    ModifyColliderFlags(0, 28, 0x7FFFFE00);
    ModifyColliderFlags(0, 29, 0x7FFFFE00);
    ModifyColliderFlags(0, 30, 0x7FFFFE00);
    ModifyColliderFlags(0, 32, 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 1) {
        SI_VAR(12) = 1;
    } else {
        SI_VAR(12) = 0;
        spawn N(script_80241E10);
        spawn N(script_80241FD8);
    }
    SI_VAR(15) = 7;
    SI_MAP_VAR(10) = N(script_802420A8);
    SI_VAR(13) = 69;
    SI_VAR(14) = 70;
    SI_VAR(9) = 25;
    SI_VAR(10) = 26;
    SI_VAR(11) = 27;
    SI_VAR(5) = 0;
    spawn N(script_80241570);
    SI_VAR(12) = 2;
    SI_VAR(13) = 60;
    SI_VAR(14) = 61;
    SI_VAR(9) = 11;
    SI_VAR(10) = 12;
    SI_VAR(11) = 13;
    SI_VAR(5) = 15;
    spawn N(script_80241570);
    SI_VAR(12) = 3;
    SI_VAR(13) = 63;
    SI_VAR(14) = 64;
    SI_VAR(9) = 16;
    SI_VAR(10) = 17;
    SI_VAR(11) = 0;
    SI_VAR(5) = 15;
    spawn N(script_80241570);
    SI_VAR(12) = 4;
    SI_VAR(13) = 66;
    SI_VAR(14) = 67;
    SI_VAR(9) = 20;
    SI_VAR(10) = 21;
    SI_VAR(11) = 22;
    SI_VAR(5) = 15;
    spawn N(script_80241570);
    SI_VAR(12) = 5;
    SI_VAR(13) = 72;
    SI_VAR(14) = 73;
    SI_VAR(9) = 31;
    SI_VAR(10) = 30;
    SI_VAR(11) = 0;
    SI_VAR(5) = 15;
    spawn N(script_80241570);
});

s32 pad_0025DC[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802425E0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B7A340, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B7A340, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80242940) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B7A340, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B7A340, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B7A340, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B7A340, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0xB, 0xC, 0xD },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0xA },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, nanf }, { nanf, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_80242F8C) =  { -348.0f, 0.0f, -107.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x10, 0x11 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0xF },
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, 2.7e-44f }, { nanf, 1.6e-43f, 1.3e-44f } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_80242FE0) =  { -194.0f, 0.0f, -11.0f, 0.0f };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x14, 0x15, 0x16 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x13 },
};

TreeEffectVectorList N(treeEffectVectors_Tree3) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, nanf }, { 4.3e-44f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree3),
    .callback = NULL,
};

Vec4f N(triggerCoord_80243038) =  { 14.0f, 0.0f, -91.0f, 0.0f };

ModelIdList N(treeModelList_Tree4_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x19, 0x1A, 0x1B },
};

ModelIdList N(treeModelList_Tree4_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x18 },
};

TreeEffectVectorList N(treeEffectVectors_Tree4) = {
    .count = 0x2,
    .vectors = { { 5.1e-43f, 1.6e-43f, nanf }, { 6.29e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree4) = {
    .leaves = &N(treeModelList_Tree4_Leaves),
    .trunk = &N(treeModelList_Tree4_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree4),
    .callback = NULL,
};

Vec4f N(triggerCoord_80243090) =  { 404.0f, 0.0f, -91.0f, 0.0f };

ModelIdList N(treeModelList_Tree5_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x1E, 0x1F },
};

ModelIdList N(treeModelList_Tree5_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1D },
};

TreeEffectVectorList N(treeEffectVectors_Tree5) = {
    .count = 0x2,
    .vectors = { { 6.6e-43f, 1.6e-43f, 3.2e-44f }, { 7.79e-43f, 1.6e-43f, 1.8e-44f } },
};

ShakeTree N(shakeTreeEvent_Tree5) = {
    .leaves = &N(treeModelList_Tree5_Leaves),
    .trunk = &N(treeModelList_Tree5_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree5),
    .callback = NULL,
};

Vec4f N(triggerCoord_802430E4) =  { 511.0f, 0.0f, -7.0f, 0.0f };

Script N(script_802430F4) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80242940) to TriggerFlag_WALL_HAMMER 18;
    bind N(script_ShakeTree_80242940) to TriggerFlag_BOMB N(triggerCoord_80242F8C);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80242940) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_ShakeTree_80242940) to TriggerFlag_BOMB N(triggerCoord_80242FE0);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80242940) to TriggerFlag_WALL_HAMMER 20;
    bind N(script_ShakeTree_80242940) to TriggerFlag_BOMB N(triggerCoord_80243038);
    SI_VAR(0) = N(shakeTreeEvent_Tree4);
    bind N(script_ShakeTree_80242940) to TriggerFlag_WALL_HAMMER 21;
    bind N(script_ShakeTree_80242940) to TriggerFlag_BOMB N(triggerCoord_80243090);
    SI_VAR(0) = N(shakeTreeEvent_Tree5);
    bind N(script_ShakeTree_80242940) to TriggerFlag_WALL_HAMMER 22;
    bind N(script_ShakeTree_80242940) to TriggerFlag_BOMB N(triggerCoord_802430E4);
});

s32 pad_00326C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80243270) = {
    .moveSpeed = 2.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 4.5f,
    .unk_1C = 0x46,
    .unk_20 = 0xA,
    .chaseRadius = 200.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802432A0) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_802410B0_B7B100(N(aISettings_80243270), 0);
});

s32 unk_missing_802432DC[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_NpcAI_802432A0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x00060000,
};

NpcSettings N(npcSettings_80243308) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

Script N(script_Idle_80243334) = SCRIPT({
0:
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) > 40) {
        sleep 1;
        goto 0;
    }
    sleep 45;
    BindNpcAI(-1, N(script_NpcAI_802432A0));
});

Script N(script_802433BC) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80243430) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80243334));
});

StaticNpc N(npcGroup_80243454)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80243308),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D00,
        .init = N(script_Init_80243430),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
    },
};

StaticNpc N(npcGroup_80243644)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80243308),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D00,
        .init = N(script_Init_80243430),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
    },
};

NpcGroupList N(npcGroupList_80243834) = {
    NPC_GROUP(N(npcGroup_80243454), 0x140A0005),
    NPC_GROUP(N(npcGroup_80243644), 0x140B0005),
    {},
};

s32 pad_003858[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243860_B7D8B0

// rodata: D_80243868_B7D8B8

// rodata: D_80243870_B7D8C0

s32 pad_003878[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243880_B7D8D0

// rodata: jtbl_80243888_B7D8D8

s32 pad_0038C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};
