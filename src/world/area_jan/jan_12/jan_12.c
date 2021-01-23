#include "jan_12.h"

s32 pad_0004BC[1];
s32 pad_001258[2];
Script N(script_ExitWalk_802412C0);
Script N(script_ExitWalk_8024131C);
Script N(script_80241378);
Script N(main);
Script N(script_802414F0);
Script N(script_80241D90);
Script N(script_80241F58);
Script N(script_80242044);
Script N(script_80242098);
s32 pad_002194[3];
Script N(script_SearchBush_802421A0);
Script N(script_ShakeTree_80242500);
s32 N(treeDropList_Tree1)[8];
Script N(script_80242BD4);
s32 pad_002C74[3];
Script N(script_MakeEntities);
s32 unk_missing_80242D10[10];
s32 N(extraAnimationList_80242D38)[2];
Script N(script_80242D40);
Script N(script_NpcAI_80242E2C);
Script N(script_NpcAI_80242EC8);
StaticNpc N(npcGroup_80242F9C)[2];
NpcGroupList N(npcGroupList_8024337C);
s32 pad_003394[3];
const char D_802433A0_B76450[8]; // "jan_13"
const char D_802433A8_B76458[8]; // "jan_06"
s32 pad_0033B8[2];

// text: func_80240000_B730B0

// text: func_802400F8_B731A8

// text: func_80240170_B73220

// text: func_802401CC_B7327C

// text: func_80240280_B73330

// text: func_802402F0_B733A0

s32 pad_0004BC[] = {
    0x00000000,
};

// text: N(UnkNpcAIFunc4)

// text: func_80240510_B735C0

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_802408DC_B7398C

// text: func_80240A90_B73B40

// text: func_80240CF0_B73DA0

// text: func_80240FA4_B74054

s32 pad_001258[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -300.0f, 0.0f, 120.0f, 0.0f },
    { 250.0f, 0.0f, -120.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900FA,
};

Script N(script_ExitWalk_802412C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802433A0_B76450, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024131C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802433A8_B76458, 2);
    sleep 100;
});

Script N(script_80241378) = SCRIPT({
    bind N(script_ExitWalk_8024131C) to 0x80000 0;
    bind N(script_ExitWalk_802412C0) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_8024337C));
    await N(script_MakeEntities);
    spawn N(script_80242098);
    spawn N(script_80242BD4);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80241378);
    spawn EnterWalk;
    SetMusicTrack(0, 37, 0, 8);
    PlayAmbientSounds(3);
});

Script N(script_802414F0) = SCRIPT({
    GetModelCenter(SI_VAR(14));
    SI_VAR(6) = SI_VAR(0);
    SI_VAR(7) = SI_VAR(1);
    SI_VAR(8) = SI_VAR(2);
    SI_VAR(7) += 0xFFFFFFEC;
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240000_B730B0(SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
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
            func_802400F8_B731A8(SI_VAR(0), -15.0, SI_VAR(2));
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
                func_802400F8_B731A8(SI_VAR(0), 20.0, SI_VAR(2));
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

Script N(script_80241D90) = SCRIPT({
    PlaySoundAtCollider(17, 8351, 0);
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
        TranslateModel(28, SI_MAP_VAR(0), 0, 0);
        TranslateModel(30, SI_MAP_VAR(1), 0, 0);
        func_802401CC_B7327C(28, SI_VAR(6));
        func_802401CC_B7327C(30, SI_VAR(7));
        sleep 1;
    }
});

Script N(script_80241F58) = SCRIPT({
    ModifyColliderFlags(0, 17, 0x7FFFFE00);
    spawn N(script_80241D90);
    DisablePlayerInput(1);
    MakeLerp(0, 45, 30, 5);
    loop {
        UpdateLerp();
        SI_MAP_VAR(1) =f SI_VAR(0);
        SI_MAP_VAR(0) =f SI_MAP_VAR(1);
        SI_MAP_VAR(0) *= -1;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerInput(0);
});

Script N(script_80242044) = SCRIPT({
    GetModelCenter(SI_VAR(9));
    SI_VAR(2) += 10;
    MakeItemEntity(171, SI_VAR(0), 100, SI_VAR(2), 14, SI_SAVE_FLAG(1242));
});

Script N(script_80242098) = SCRIPT({
    bind N(script_80241F58) to TriggerFlag_WALL_INTERACT 17;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn N(script_80241F58);
    }
    SI_MAP_VAR(10) = N(script_80242044);
    SI_VAR(15) = 10;
    SI_VAR(12) = 0;
    SI_VAR(13) = 23;
    SI_VAR(14) = 24;
    SI_VAR(9) = 13;
    SI_VAR(10) = 14;
    SI_VAR(11) = 15;
    SI_VAR(5) = 15;
    spawn N(script_802414F0);
});

s32 pad_002194[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802421A0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B733A0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B733A0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80242500) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B733A0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B733A0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B733A0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802402F0_B733A0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .modelIDs = { 0xD, 0xE, 0xF },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0xC },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x00000157, 0xFFFFFF0B, 0x00000064, 0xFFFFFFAB, 0x0000000F, 0xF840606C, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nanf, 2.02e-43f, nanf }, { nanf, 2.02e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_80242B6C) =  { -214.0f, 30.0f, -111.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x12, 0x13, 0x14 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x11 },
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { 4.48e-43f, 1.6e-43f, nanf }, { 5.68e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_80242BC4) =  { 360.0f, 0.0f, -95.0f, 0.0f };

Script N(script_80242BD4) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80242500) to TriggerFlag_WALL_HAMMER 18;
    bind N(script_ShakeTree_80242500) to TriggerFlag_BOMB N(triggerCoord_80242B6C);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80242500) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_ShakeTree_80242500) to TriggerFlag_BOMB N(triggerCoord_80242BC4);
});

s32 pad_002C74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BC7AC, 130, 0, 0xFFFFFF92, 170, 0x80000000);
    MakeEntity(0x802BCBD8, 0xFFFFFEA2, 30, 0xFFFFFFC9, 25, 0x80000000);
    MakeEntity(0x802EA588, 0xFFFFFECA, 90, 0xFFFFFFE7, 0, 136, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1250));
});

s32 unk_missing_80242D10[] = {
    0x00420000, 0x00420003, 0x00420005, 0x00420006, 0x00420007, 0x0042000F, 0x00420010, 0x0042001A,
    0x0042001B, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242D38)[] = {
    0x00420000, 0xFFFFFFFF,
};

Script N(script_80242D40) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80242DFC) = {
    .moveSpeed = 1.7f,
    .moveTime = 0x64,
    .waitTime = 0x1,
    .alertRadius = 100.0f,
    .unk_10 = 30.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 3.5f,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 120.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242E2C) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 12);
    SetSelfVar(3, 9);
    func_80240FA4_B74054(N(aISettings_80242DFC));
});

NpcSettings N(npcSettings_80242E9C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242E2C),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_NpcAI_80242EC8) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 22);
    SetSelfVar(2, 40);
    SetSelfVar(3, 28);
    SetSelfVar(4, 1);
    SetSelfVar(15, 0);
    func_80240A90_B73B40();
});

NpcSettings N(npcSettings_80242F70) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x8,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242EC8),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80242D40),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80242F9C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242E9C),
        .pos = { 165.0, 0.0, 15.0 },
        .flags = 0x00400D00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SLEEPY_SHEEP, 10 } },
        .movement = { 0x000000A5, 0x00000000, 0x0000000F, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000A5, 0x00000000, 0x0000000F, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242F70),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_80242D38),
    },
};

NpcGroupList N(npcGroupList_8024337C) = {
    NPC_GROUP(N(npcGroup_80242F9C), 0x14060007),
    {},
};

s32 pad_003394[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802433A0_B76450

// rodata: D_802433A8_B76458

// rodata: D_802433B0_B76460

s32 pad_0033B8[] = {
    0x00000000, 0x00000000,
};

// rodata: jtbl_802433C0_B76470

// rodata: D_802433D8_B76488

// rodata: jtbl_802433E0_B76490

// rodata: jtbl_80243570_B76620
