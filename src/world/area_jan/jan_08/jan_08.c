#include "jan_08.h"

s32 pad_00030C[1];
s32 pad_00065C[1];
s32 pad_001398[2];
s32 pad_0021EC[1];
s32 pad_00242C[1];
Script N(script_802424A0);
s32 pad_0024DC[1];
Script N(script_UpdateTexturePan_802424E0);
Script N(script_ExitWalk_8024257C);
Script N(script_ExitWalk_802425D8);
Script N(script_ExitWalk_80242634);
Script N(script_80242690);
Script N(main);
Script N(script_SearchBush_802429D0);
Script N(script_ShakeTree_80242D30);
Script N(script_80243334);
Script N(script_802434FC);
Script N(script_802435E8);
s32 N(treeDropList_Bush1)[8];
s32 N(searchBushEvent_Bush1)[4];
s32 N(treeDropList_Bush2)[8];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
s32 N(searchBushEvent_Bush5)[4];
s32 N(searchBushEvent_Bush6)[4];
s32 N(searchBushEvent_Bush7)[4];
s32 N(searchBushEvent_Bush8)[4];
s32 N(searchBushEvent_Bush9)[4];
s32 N(searchBushEvent_Bush10)[4];
s32 N(searchBushEvent_Bush11)[4];
s32 N(searchBushEvent_Bush12)[4];
Script N(script_80243B90);
s32 pad_003DFC[1];
s32 N(unk_80243E00)[2];
s32 N(unk_80243E08)[4];
s32 N(unk_80243E18)[16];
s32 N(unk_80243E58)[3];
Script N(script_80243E64);
Script N(script_80243FC8);
Script N(script_MakeEntities);
s32 pad_004598[2];
Script N(script_NpcAI_802445CC);
Script N(script_8024497C);
Script N(script_80244AF8);
Script N(script_80244B44);
Script N(script_Interact_80244B74);
Script N(script_NpcAI_80244CAC);
Script N(script_80244E28);
Script N(script_80244E4C);
s32 N(extraAnimationList_80244F18)[5];
s32 N(extraAnimationList_80244F2C)[10];
s32 N(extraAnimationList_80244F54)[2];
Script N(script_80244F5C);
Script N(script_NpcAI_80245048);
Script N(script_NpcAI_802450E4);
Script N(script_802451B8);
Script N(script_Idle_80245230);
Script N(script_Init_80245694);
Script N(script_Defeat_80245770);
Script N(script_Init_802458C0);
StaticNpc N(npcGroup_802458FC)[2];
StaticNpc N(npcGroup_80245CDC)[1];
StaticNpc N(npcGroup_80245ECC)[1];
StaticNpc N(npcGroup_802460BC)[1];
StaticNpc N(npcGroup_802462AC)[1];
StaticNpc N(npcGroup_8024649C)[1];
StaticNpc N(npcGroup_8024668C)[1];
NpcGroupList N(npcGroupList_8024687C);
s32 pad_0068DC[1];
Script N(script_SearchBush_802468E0);
Script N(script_ShakeTree_80246C40);
s32 N(treeDropList_Tree2)[8];
s32 N(treeDropList_Tree3)[8];
Script N(script_802473A4);
s32 pad_00748C[1];
const char D_80247490_B65740[8]; // "jan_00"
const char D_80247498_B65748[8]; // "jan_05"
const char D_802474A0_B65750[8]; // "jan_09"
s32 pad_0074A8[2];
s32 pad_0074B8[2];

// text: func_80240000_B5E2B0

// text: func_80240124_B5E3D4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_B5E5C0

// text: func_80240380_B5E630

// text: func_8024054C_B5E7FC

// text: func_802405A8_B5E858

s32 pad_00065C[] = {
    0x00000000,
};

// text: func_80240660_B5E910

// text: func_8024067C_B5E92C

// text: func_8024069C_B5E94C

// text: func_802406C8_B5E978

// text: func_80240734_B5E9E4

// text: func_80240780_B5EA30

// text: func_8024082C_B5EADC

// text: func_80240A7C_B5ED2C

// text: func_80240AA8_B5ED58

// text: func_80240AE0_B5ED90

// text: func_80240B70_B5EE20

// text: func_80240BA4_B5EE54

// text: func_80240C08_B5EEB8

// text: func_80240C60_B5EF10

// text: func_80241198_B5F448

// text: func_802412D8_B5F588

// text: func_80241320_B5F5D0

// text: func_80241368_B5F618

s32 pad_001398[] = {
    0x00000000, 0x00000000,
};

// text: func_802413A0_B5F650

// text: N(UnkNpcAIFunc4)

// text: func_802414A4_B5F754

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80241870_B5FB20

// text: func_80241A24_B5FCD4

// text: func_80241C84_B5FF34

// text: func_80241F38_B601E8

s32 pad_0021EC[] = {
    0x00000000,
};

// text: func_802421F0_B604A0

// text: func_80242260_B60510

s32 pad_00242C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -330.0f, 0.0f, 330.0f, 45.0f },
    { 500.0f, -20.0f, 0.0f, 270.0f },
    { 0.0f, 0.0f, -450.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900F4,
};

Script N(script_802424A0) = SCRIPT({
    SetMusicTrack(0, 36, 0, 8);
    ClearAmbientSounds(250);
});

s32 pad_0024DC[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802424E0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_B5E2B0();
                    return;
                }
            }
        }
    }
    func_80240124_B5E3D4();
});

Script N(script_ExitWalk_8024257C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80247490_B65740, 2);
    sleep 100;
});

Script N(script_ExitWalk_802425D8) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80247498_B65748, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242634) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_802474A0_B65750, 0);
    sleep 100;
});

Script N(script_80242690) = SCRIPT({
    bind N(script_ExitWalk_8024257C) to 0x80000 0;
    bind N(script_ExitWalk_802425D8) to 0x80000 11;
    bind N(script_ExitWalk_80242634) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_8024687C));
    await N(script_MakeEntities);
    ModifyColliderFlags(3, 53, 4);
    ModifyColliderFlags(3, 55, 4);
    ModifyColliderFlags(0, 53, 0x80000);
    ModifyColliderFlags(0, 55, 0x80000);
    ModifyColliderFlags(3, 86, 1);
    ModifyColliderFlags(3, 8, 1);
    spawn N(script_80243B90);
    spawn N(script_802473A4);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    SI_VAR(0) = N(script_80242690);
    spawn EnterWalk;
    spawn N(script_802424A0);
    0x802C971C(109);
    EnableTexPanning(108, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFB0;
        SI_VAR(2) = 140;
        SI_VAR(3) = 80;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802424E0);
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802429D0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240380_B5E630, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240380_B5E630, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80242D30) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240380_B5E630, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240380_B5E630, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240380_B5E630, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240380_B5E630, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_80243334) = SCRIPT({
    PlaySoundAtCollider(84, 8351, 0);
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
        TranslateModel(102, SI_MAP_VAR(0), 0, 0);
        TranslateModel(104, SI_MAP_VAR(1), 0, 0);
        func_802405A8_B5E858(102, SI_VAR(6));
        func_802405A8_B5E858(104, SI_VAR(7));
        sleep 1;
    }
});

Script N(script_802434FC) = SCRIPT({
    ModifyColliderFlags(0, 84, 0x7FFFFE00);
    spawn N(script_80243334);
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

Script N(script_802435E8) = SCRIPT({
    DisablePlayerInput(1);
    PlaySoundAtCollider(83, 339, 0);
    loop 3 {
        func_802405A8_B5E858(SI_VAR(1), 1);
        sleep 1;
        func_802405A8_B5E858(SI_VAR(1), 0);
        sleep 1;
        func_802405A8_B5E858(SI_VAR(1), -1);
        sleep 1;
    }
    TranslateModel(SI_VAR(1), 0, 0, 0);
    if (SI_SAVE_VAR(0) == 15) {
        if (SI_SAVE_FLAG(1232) == 0) {
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            spawn {
                DisablePartnerAI(0);
                SetNpcFlagBits(0xFFFFFFFC, 0x8140, 1);
                NpcMoveTo(0xFFFFFFFC, 0xFFFFFEC5, SI_VAR(5), 20);
                NpcFaceNpc(0xFFFFFFFC, 7, 0);
                SetNpcFlagBits(0xFFFFFFFC, 0x8140, 0);
                EnablePartnerAI();
            }
            PlayerMoveTo(0xFFFFFEAC, SI_VAR(5), 20);
            PlayerFaceNpc(7, 0);
            sleep 10;
            PlaySoundAtCollider(83, 8351, 0);
            SI_VAR(3) = 0;
            loop 10 {
                SI_VAR(3) += 9;
                RotateModel(SI_VAR(1), SI_VAR(3), 0, 1, 0);
                sleep 1;
            }
            SI_VAR(4) = 270;
            SetNpcRotation(7, 0, SI_VAR(4), 0);
            SetNpcPos(7, 0xFFFFFE79, 0, 0xFFFFFF70);
            SetNpcFlagBits(7, 258, 0);
            loop 10 {
                SI_VAR(3) += 9;
                RotateModel(SI_VAR(1), SI_VAR(3), 0, 1, 0);
                SI_VAR(4) += 9;
                SetNpcRotation(7, 0, SI_VAR(4), 0);
                sleep 1;
            }
            EnableNpcShadow(7, 1);
            PlayerFaceNpc(7, 0);
            sleep 20;
            SetNpcVar(7, 0, 1);
        }
    }
    DisablePlayerInput(0);
});

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x62 },
};

s32 N(treeDropList_Bush1)[] = {
    0x00000001, 0x00000157, 0x00000075, 0x00000014, 0xFFFFFE58, 0x00000007, 0xF8406071, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { 1.64e-43f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), N(treeDropList_Bush1), N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4B },
};

s32 N(treeDropList_Bush2)[] = {
    0x00000001, 0x00000157, 0xFFFFFF36, 0x00000014, 0x000000A7, 0x00000007, 0xF8406072, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 2.34e-43f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), N(treeDropList_Bush2), N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4D },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 1.77e-43f } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4F },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x51 },
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), 0x00000000, N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x53 },
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), 0x00000000, N(treeEffectVectors_Bush6), 0x00000000,
};

ModelIdList N(treeModelList_Bush7_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x55 },
};

TreeEffectVectorList N(treeEffectVectors_Bush7) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush7)[] = {
    N(treeModelList_Bush7_Bush), 0x00000000, N(treeEffectVectors_Bush7), 0x00000000,
};

ModelIdList N(treeModelList_Bush8_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x57 },
};

TreeEffectVectorList N(treeEffectVectors_Bush8) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush8)[] = {
    N(treeModelList_Bush8_Bush), 0x00000000, N(treeEffectVectors_Bush8), 0x00000000,
};

ModelIdList N(treeModelList_Bush9_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x59 },
};

TreeEffectVectorList N(treeEffectVectors_Bush9) = {
    .count = 0x1,
    .vectors = { { 1.25e-43f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush9)[] = {
    N(treeModelList_Bush9_Bush), 0x00000000, N(treeEffectVectors_Bush9), 0x00000000,
};

ModelIdList N(treeModelList_Bush10_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5B },
};

TreeEffectVectorList N(treeEffectVectors_Bush10) = {
    .count = 0x1,
    .vectors = { { 2.13e-43f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush10)[] = {
    N(treeModelList_Bush10_Bush), 0x00000000, N(treeEffectVectors_Bush10), 0x00000000,
};

ModelIdList N(treeModelList_Bush11_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5D },
};

TreeEffectVectorList N(treeEffectVectors_Bush11) = {
    .count = 0x1,
    .vectors = { { 5.52e-43f, 2.8e-44f, 2.47e-43f } },
};

s32 N(searchBushEvent_Bush11)[] = {
    N(treeModelList_Bush11_Bush), 0x00000000, N(treeEffectVectors_Bush11), 0x00000000,
};

ModelIdList N(treeModelList_Bush12_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5F },
};

TreeEffectVectorList N(treeEffectVectors_Bush12) = {
    .count = 0x1,
    .vectors = { { 3.35e-43f, 3.1e-44f, 6.03e-43f } },
};

s32 N(searchBushEvent_Bush12)[] = {
    N(treeModelList_Bush12_Bush), 0x00000000, N(treeEffectVectors_Bush12), 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80243B90) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802434FC), TriggerFlag_WALL_INTERACT, 84, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), 100),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802435E8), TriggerFlag_WALL_INTERACT, 83, 0, 0, 1),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush1)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 82, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush2)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 61, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush3)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 62, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush4)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 63, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush5)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 64, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush6)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 65, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush7)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 66, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush8)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 67, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush9)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 68, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 69, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush11)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 70, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), N(searchBushEvent_Bush12)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_SearchBush_802429D0), TriggerFlag_WALL_INTERACT, 71, 1, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 pad_003DFC[] = {
    0x00000000,
};

s32 N(unk_80243E00)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80243E08)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80243E18)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80243E58)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80243E64) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240BA4_B5EE54(SI_MAP_VAR(2));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80241198_B5F448(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80241198_B5F448(50, 50);
    }
    spawn {
        sleep 3;
        func_8024069C_B5E94C(SI_MAP_VAR(2));
    }
    spawn {
        sleep 47;
        func_80240C08_B5EEB8();
        func_802412D8_B5F588();
        sleep 5;
        func_80241320_B5F5D0();
        sleep 5;
        func_802412D8_B5F588();
    }
    sleep 3;
    func_80240C60_B5EF10(SI_MAP_VAR(2));
    sleep 30;
});

Script N(script_80243FC8) = SCRIPT({
    if (SI_SAVE_FLAG(1278) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80241368_B5F618();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240660_B5E910();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240AE0_B5ED90(SI_MAP_VAR(2), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240780_B5EA30();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240B70_B5EE20(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024067C_B5E92C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_8024082C_B5EADC();
    if (SI_VAR(0) == -1) {
        func_80240B70_B5EE20(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024067C_B5E92C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_80240A7C_B5ED2C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240B70_B5EE20(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024067C_B5E92C();
        return;
    }
    await N(script_80243E64);
    func_802406C8_B5E978(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(1278) = 1;
    func_80240B70_B5EE20(SI_VAR(9));
    func_80240AA8_B5ED58();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024067C_B5E92C();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 250, 60, 300, 0, 0x80000000);
    SI_MAP_VAR(2) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(1278));
    AssignScript(N(script_80243FC8));
    MakeItemEntity(343, 75, 0xFFFFFFC4, 90, 17, SI_SAVE_FLAG(1279));
    MakeItemEntity(343, 100, 0xFFFFFFC4, 90, 17, SI_SAVE_FLAG(1280));
    MakeItemEntity(343, 125, 0xFFFFFFC4, 90, 17, SI_SAVE_FLAG(1281));
    MakeEntity(0x802BCBD8, 54, 0, 0xFFFFFE84, 35, 0x80000000);
    MakeEntity(0x802EA588, 24, 60, 0xFFFFFE66, 0, 130, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1249));
    MakeEntity(0x802BCBFC, 0xFFFFFE3E, 0, 166, 170, 0x80000000);
});

s32 pad_004598[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802445A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
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

Script N(script_NpcAI_802445CC) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x450000);
    SetSelfVar(0, 0);
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    PlaySoundAtNpc(-1, 339, 0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetSelfVar(10, SI_VAR(0));
    SetSelfVar(11, SI_VAR(1));
    SetSelfVar(12, SI_VAR(2));
    SI_VAR(0) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) -= 3;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) -= 3;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    SI_VAR(0) += 2;
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    spawn {
        sleep 10;
        SetNpcAnimation(-1, 0x450003);
    }
    spawn {
        sleep 6;
        InterpPlayerYaw(90, 0);
    }
    SetNpcFlagBits(-1, 256, 1);
    EnableNpcShadow(-1, 1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 25;
    SI_VAR(2) -= 5;
    NpcJump1(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    sleep 4;
    SetNpcAnimation(-1, 0x450007);
    sleep 2;
    SetPlayerAnimation(0x1002B);
    0x802D5830(0);
    DisablePlayerInput(0);
    StartBattle();
    SetSelfVar(0, 1);
});

Script N(script_8024497C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            SetNpcAnimation(-1, 0x450005);
            GetSelfVar(10, SI_VAR(0));
            GetSelfVar(11, SI_VAR(1));
            GetSelfVar(12, SI_VAR(2));
            NpcJump1(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
            EnableNpcShadow(-1, 0);
            SetNpcAnimation(-1, 0x450000);
            SetNpcFlagBits(-1, 256, 0);
            BindNpcAI(-1, N(script_NpcAI_802445CC));
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_80244ACC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = 0x80244958,
    .ai = &N(script_NpcAI_802445CC),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_8024497C),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_80244AF8) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
});

Script N(script_80244B44) = SCRIPT({
    sleep 45;
    BindNpcInteract(-1, N(script_Interact_80244B74));
});

Script N(script_Interact_80244B74) = SCRIPT({
    GetSelfVar(1, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetSelfVar(1, 1);
        PlaySoundAtNpc(-1, 8345, 0);
        SetNpcAnimation(-1, 0x430000);
        sleep 1;
        func_802413A0_B5F650();
        SetNpcAnimation(-1, 0x430001);
        spawn {
            BindNpcInteract(-1, 0);
            spawn N(script_80244B44);
            sleep 45;
            SetSelfVar(1, 0);
            SetNpcAnimation(-1, 0x430000);
        }
    }
});

NpcSettings N(npcSettings_80244C80) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = &N(script_80244AF8),
    .onInteract = &N(script_Interact_80244B74),
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244CAC) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x440001);
    SetSelfVar(0, 0);
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    group 0;
    0x802D5830(1);
    DisablePlayerInput(1);
    NpcFacePlayer(-1, 0);
    SetNpcAnimation(-1, 0x440008);
    sleep 15;
    PlaySoundAtNpc(-1, 8346, 0);
    sleep 10;
    SetPlayerAnimation(0x1002B);
    sleep 5;
    SetNpcAnimation(-1, 0x440002);
    DisablePlayerInput(0);
    0x802D5830(0);
    StartBattle();
});

Script N(script_80244E28) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_80244E4C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            BindNpcAI(-1, N(script_NpcAI_80244CAC));
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_80244EEC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = &N(script_80244E28),
    .ai = &N(script_NpcAI_80244CAC),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244E4C),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80244F18)[] = {
    0x00440000, 0x00440001, 0x00440002, 0x00440008, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80244F2C)[] = {
    0x00420000, 0x00420003, 0x00420005, 0x00420006, 0x00420007, 0x0042000F, 0x00420010, 0x0042001A,
    0x0042001B, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80244F54)[] = {
    0x00420000, 0xFFFFFFFF,
};

Script N(script_80244F5C) = SCRIPT({
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

NpcAISettings N(aISettings_80245018) = {
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

Script N(script_NpcAI_80245048) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 12);
    SetSelfVar(3, 9);
    func_80241F38_B601E8(N(aISettings_80245018));
});

NpcSettings N(npcSettings_802450B8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80245048),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_NpcAI_802450E4) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 22);
    SetSelfVar(2, 40);
    SetSelfVar(3, 28);
    SetSelfVar(4, 1);
    SetSelfVar(15, 0);
    func_80241A24_B5FCD4();
});

NpcSettings N(npcSettings_8024518C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x8,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802450E4),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244F5C),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0x8,
};

Script N(script_802451B8) = SCRIPT({
    SI_AREA_FLAG(2) = 0;
    loop {
        PlaySoundAtNpc(7, 496, 0);
        sleep 20;
        if (SI_AREA_FLAG(2) == 1) {
            break;
        }
    }
});

Script N(script_Idle_80245230) = SCRIPT({
    SetSelfVar(0, 0);
0:
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(1) <= 0xFFFFFFA6) {
        if (SI_VAR(3) > 280) {
            GetEntryID(SI_VAR(0));
            if (SI_VAR(0) == 0) {
                sleep 18;
            }
            DisablePlayerInput(1);
            ShowMessageAtScreenPos(0x1000AF, 160, 40);
            spawn N(script_802451B8);
            DisablePlayerInput(0);
            SI_VAR(0) = 1;
        }
    }
    if (SI_VAR(0) != 1) {
        sleep 1;
        goto 0;
    }
10:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 10;
    }
    DisablePlayerInput(1);
    AdjustCam(0, 4.0, 0xFFFFFFE9, 350, 17.0, -7.0);
    NpcFacePlayer(-1, 0);
    GetCurrentPartnerID(SI_VAR(0));
    SI_AREA_FLAG(2) = 1;
    sleep 15;
    if (SI_VAR(0) == 7) {
        SpeakToPlayer(-1, 0x97040B, 0x97040A, 0, 0x1000B0);
    } else {
        SpeakToPlayer(-1, 0x97040B, 0x97040A, 0, 0x1000B1);
    }
    EndSpeech(-1, 0x970404, 0x970401, 0);
    spawn {
        SetNpcFlagBits(-1, 256, 1);
        SetNpcAnimation(-1, 0x970403);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, 0xFFFFFE5E, 0xFFFFFFC4, 0);
        NpcMoveTo(-1, 0xFFFFFED4, 80, 0);
        NpcMoveTo(-1, 0xFFFFFEC0, 115, 0);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
    SI_SAVE_FLAG(1232) = 1;
    SI_VAR(0) = 0;
    SI_VAR(0) += SI_SAVE_FLAG(1230);
    SI_VAR(0) += SI_SAVE_FLAG(1231);
    SI_VAR(0) += SI_SAVE_FLAG(1232);
    SI_VAR(0) += SI_SAVE_FLAG(1233);
    SI_VAR(0) += SI_SAVE_FLAG(1234);
    if (SI_VAR(0) == 5) {
        SetMusicTrack(0, 78, 0, 8);
        SI_SAVE_VAR(0) = 16;
        SetPlayerAnimation(0x10032);
        sleep 120;
        spawn N(script_802424A0);
        SetPlayerAnimation(0x10002);
    } else {
        sleep 40;
    }
    ResetCam(0, 4.0);
    DisablePlayerInput(0);
    RemoveNpc(-1);
});

Script N(script_Init_80245694) = SCRIPT({
    if (SI_SAVE_VAR(0) == 15) {
        if (SI_SAVE_FLAG(1232) == 0) {
            SetNpcFlagBits(-1, 258, 1);
            EnableNpcShadow(-1, 0);
            SetNpcAnimation(-1, 0x970406);
            SetNpcYaw(-1, 90);
            SetNpcPos(-1, 0xFFFFFE79, 0, 0xFFFFFF5C);
            BindNpcIdle(-1, N(script_Idle_80245230));
            return;
        }
    }
    RemoveNpc(-1);
});

Script N(script_Defeat_80245770) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DoNpcDefeat();
        }
        == 2 {
            SetNpcAnimation(-1, 0x450005);
            GetSelfVar(10, SI_VAR(0));
            GetSelfVar(11, SI_VAR(1));
            GetSelfVar(12, SI_VAR(2));
            NpcJump1(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
            EnableNpcShadow(-1, 0);
            SetNpcAnimation(-1, 0x450000);
            SetNpcFlagBits(-1, 256, 0);
            BindNpcAI(-1, N(script_NpcAI_802445CC));
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

Script N(script_Init_802458C0) = SCRIPT({
    SetNpcCollisionSize(-1, 60, 30);
    BindNpcDefeat(-1, N(script_Defeat_80245770));
});

StaticNpc N(npcGroup_802458FC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802450B8),
        .pos = { 255.0, 15.0, -65.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SLEEPY_SHEEP, 10 } },
        .movement = { 0x000000FF, 0x00000000, 0xFFFFFFBF, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000FF, 0x00000000, 0xFFFFFFBF, 0x00000096 },
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_80244F2C),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_8024518C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_80244F54),
    },
};

StaticNpc N(npcGroup_80245CDC)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80244EEC),
        .pos = { 400.0, 0.0, 235.0 },
        .flags = 0x00408D01,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_TASTY_TONIC, 5 }, { ItemId_SUPER_SODA, 5 } },
        .animations = {
            0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x0044000E, 0x0044000E, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001, 0x00440001,
        },
        .extraAnimations = N(extraAnimationList_80244F18),
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_80245ECC)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244ACC),
        .pos = { -407.0, 0.0, -42.0 },
        .flags = 0x00408D01,
        .init = N(script_Init_802458C0),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_TASTY_TONIC, 5 }, { ItemId_SUPER_SODA, 5 } },
        .animations = {
            0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450007, 0x00450007, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002,
        },
        .tattle = 0x1A00D4,
    },
};

StaticNpc N(npcGroup_802460BC)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80244ACC),
        .pos = { -120.0, 0.0, -395.0 },
        .flags = 0x00408D01,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_TASTY_TONIC, 5 }, { ItemId_SUPER_SODA, 5 } },
        .animations = {
            0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450007, 0x00450007, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002, 0x00450002,
        },
        .tattle = 0x1A00D4,
    },
};

StaticNpc N(npcGroup_802462AC)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80244C80),
        .pos = { -219.0, 0.0, 420.0 },
        .flags = 0x00408D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_8024649C)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80244C80),
        .pos = { -157.0, 0.0, 452.0 },
        .flags = 0x00408D05,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000, 0x00430000,
        },
        .tattle = 0x1A00D3,
    },
};

StaticNpc N(npcGroup_8024668C)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_802445A0),
        .pos = { -450.0, 0.0, -290.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_80245694),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00970401, 0x00970402, 0x00970403, 0x00970403, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401,
        },
        .tattle = 0x1A00C7,
    },
};

NpcGroupList N(npcGroupList_8024687C) = {
    NPC_GROUP(N(npcGroup_802458FC), 0x14010002),
    NPC_GROUP(N(npcGroup_80245CDC), 0x14080002),
    NPC_GROUP(N(npcGroup_80245ECC), 0x14100002),
    NPC_GROUP(N(npcGroup_802460BC), 0x140E0002),
    NPC_GROUP(N(npcGroup_802462AC), 0x00000000),
    NPC_GROUP(N(npcGroup_8024649C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024668C), 0x00000000),
    {},
};

s32 pad_0068DC[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802468E0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80242260_B60510, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242260_B60510, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80246C40) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80242260_B60510, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242260_B60510, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242260_B60510, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242260_B60510, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .count = 0x5,
    .modelIDs = { 0x2F, 0x30, 0x31, 0x32, 0x33 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2E },
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

Vec4f N(triggerCoord_80247294) =  { -357.0f, 0.0f, -270.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x28, 0x29, 0x2A, 0x2B, 0x2C },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x27 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000157, 0xFFFFFFB7, 0x0000004C, 0xFFFFFE26, 0x0000000F, 0xF8406068, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, nanf }, { nanf, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_80247314) =  { -145.0f, 0.0f, -460.0f, 0.0f };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x36, 0x37, 0x38, 0x39, 0x3A },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x35 },
};

s32 N(treeDropList_Tree3)[] = {
    0x00000001, 0x00000157, 0x0000017C, 0x00000064, 0xFFFFFFA1, 0x0000000F, 0xF8406069, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree3) = {
    .count = 0x2,
    .vectors = { { 4.22e-43f, 1.6e-43f, nanf }, { 5.41e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = &N(treeDropList_Tree3),
    .effectVectors = &N(treeEffectVectors_Tree3),
    .callback = NULL,
};

Vec4f N(triggerCoord_80247394) =  { 341.0f, 0.0f, -124.0f, 0.0f };

Script N(script_802473A4) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80246C40) to TriggerFlag_WALL_HAMMER 73;
    bind N(script_ShakeTree_80246C40) to TriggerFlag_BOMB N(triggerCoord_80247294);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80246C40) to TriggerFlag_WALL_HAMMER 74;
    bind N(script_ShakeTree_80246C40) to TriggerFlag_BOMB N(triggerCoord_80247314);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80246C40) to TriggerFlag_WALL_HAMMER 75;
    bind N(script_ShakeTree_80246C40) to TriggerFlag_BOMB N(triggerCoord_80247394);
});

s32 pad_00748C[] = {
    0x00000000,
};

// rodata: D_80247490_B65740

// rodata: D_80247498_B65748

// rodata: D_802474A0_B65750

s32 pad_0074A8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802474B0_B65760

s32 pad_0074B8[] = {
    0x00000000, 0x00000000,
};

// rodata: jtbl_802474C0_B65770

// rodata: D_802474D8_B65788

// rodata: jtbl_802474E0_B65790

// rodata: jtbl_80247670_B65920
