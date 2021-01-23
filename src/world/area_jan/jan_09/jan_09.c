#include "jan_09.h"

s32 pad_0005EC[1];
s32 pad_00093C[1];
s32 pad_0016D8[2];
s32 pad_00191C[1];
Script N(script_802419A0);
Script N(script_80241CF4);
Script N(script_802420E4);
Script N(script_802421C0);
Script N(script_8024239C);
Script N(script_UpdateTexturePan_802426D0);
Script N(script_ExitWalk_8024276C);
Script N(script_ExitWalk_802427C8);
Script N(script_ExitWalk_80242824);
Script N(script_80242880);
Script N(script_802428BC);
Script N(script_80242914);
Script N(main);
s32 pad_002D14[3];
Script N(script_SearchBush_80242D20);
Script N(script_ShakeTree_80243080);
Script N(script_80243684);
Script N(script_8024384C);
Script N(script_80243954);
Script N(script_80243B1C);
Script N(script_80243C08);
Script N(script_80243CD4);
Script N(script_80243DC0);
Script N(script_80243EC0);
Script N(script_80243FC4);
Script N(script_802440C0);
s32 N(treeDropList_Bush1)[8];
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
s32 N(searchBushEvent_Bush5)[4];
s32 N(treeDropList_Bush6)[8];
s32 N(searchBushEvent_Bush6)[4];
s32 N(searchBushEvent_Bush7)[4];
s32 N(searchBushEvent_Bush8)[4];
s32 N(searchBushEvent_Bush9)[4];
s32 N(searchBushEvent_Bush10)[4];
s32 N(searchBushEvent_Bush11)[4];
s32 N(searchBushEvent_Bush12)[4];
s32 N(searchBushEvent_Bush13)[4];
s32 N(searchBushEvent_Bush14)[4];
s32 N(searchBushEvent_Bush15)[4];
s32 N(searchBushEvent_Bush16)[4];
s32 N(searchBushEvent_Bush17)[4];
s32 N(searchBushEvent_Bush18)[4];
Script N(script_802445E4);
Script N(script_NpcAI_802449A0);
Script N(script_80244D50);
s32 unk_missing_80244ECC[10];
s32 N(extraAnimationList_80244EF4)[2];
Script N(script_80244EFC);
Script N(script_NpcAI_80244FE8);
Script N(script_NpcAI_80245084);
StaticNpc N(npcGroup_80245158)[2];
StaticNpc N(npcGroup_80245538)[1];
StaticNpc N(npcGroup_80245728)[1];
NpcGroupList N(npcGroupList_80245918);
s32 pad_005948[2];
Script N(script_SearchBush_80245950);
Script N(script_ShakeTree_80245CB0);
s32 N(treeDropList_Tree2)[8];
s32 N(treeDropList_Tree3)[8];
Script N(script_80246414);
s32 pad_0064FC[1];
Script N(script_MakeEntities);
s32 pad_006564[3];
const char D_80246570_B6C020[8]; // "jan_10"
const char D_80246578_B6C028[8]; // "jan_08"
const char D_80246580_B6C030[8]; // "jan_06"
const char D_80246588_B6C038[8]; // "jan_11"
s32 pad_006598[2];

// text: func_80240000_B65AB0

// text: func_80240020_B65AD0

// text: func_80240034_B65AE4

// text: func_802400F0_B65BA0

// text: func_802401D0_B65C80

// text: func_8024023C_B65CEC

// text: func_802402E0_B65D90

// text: func_80240404_B65EB4

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_B660A0

// text: func_80240660_B66110

// text: func_8024082C_B662DC

// text: func_80240888_B66338

s32 pad_00093C[] = {
    0x00000000,
};

// text: N(UnkNpcAIFunc4)

// text: func_80240990_B66440

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240D5C_B6680C

// text: func_80240F10_B669C0

// text: func_80241170_B66C20

// text: func_80241424_B66ED4

s32 pad_0016D8[] = {
    0x00000000, 0x00000000,
};

// text: func_802416E0_B67190

// text: func_80241750_B67200

s32 pad_00191C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 480.0f, 0.0f },
    { 480.0f, 0.0f, 0.0f, 270.0f },
    { -480.0f, -20.0f, 0.0f, 90.0f },
    { -177.0f, 125.0f, -435.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900F5,
};

Script N(script_802419A0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    HidePlayerShadow(1);
    SetPlayerAnimation(0x10000);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
    }
    GetEntryID(SI_VAR(0));
    func_802400F0_B65BA0();
    SI_VAR(2) -= 40;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    PlaySound(355);
    0x802D286C(256);
    0x802D2520(0x10000, 5, 2, 1, 1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop 40 {
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    sleep 3;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            DisablePartnerAI(0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcFlagBits(0xFFFFFFFC, 2, 0);
            EnablePartnerAI();
            EnableNpcShadow(0xFFFFFFFC, 1);
        }
    }
    sleep 2;
    0x802D2520(0x10000, 0, 0, 0, 0, 0);
    sleep 1;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    HidePlayerShadow(0);
0:
    func_80240020_B65AD0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241CF4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_B65BA0();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(2) += 2;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    if (SI_VAR(4) == 90) {
        SI_VAR(5) += 40;
    } else {
        SI_VAR(5) -= 40;
    }
    UseSettingsFrom(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetPanTarget(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        DisablePartnerAI(0);
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
        InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
    }
    sleep 1;
    PlaySound(355);
    spawn {
        sleep 25;
        HidePlayerShadow(0);
    }
    0x802D286C(2304);
    0x802D2520(0x10002, 5, 3, 1, 1, 0);
    loop 40 {
        func_8024023C_B65CEC(1.0);
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            EnableNpcShadow(0xFFFFFFFC, 1);
            EnablePartnerAI();
        }
    }
    sleep 5;
    0x802D2520(0x10002, 0, 0, 0, 0, 0);
    ModifyColliderFlags(1, SI_VAR(11), 0x7FFFFE00);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    spawn 0xFE363C8A;
});

Script N(script_802420E4) = SCRIPT({
    func_80240034_B65AE4();
    if (SI_VAR(0) == 0) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    await N(script_802421C0);
});

Script N(script_802421C0) = SCRIPT({
    func_80240000_B65AB0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_B65BA0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_B65BA0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_B65C80();
    InterpPlayerYaw(SI_VAR(0), 0);
    sleep 2;
    SetPlayerFlagBits(0x200000, 0);
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        sleep 4;
        loop 40 {
            SI_VAR(1) -= 1;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    0x802D286C(2048);
    0x802D2520(0x10002, 5, 2, 1, 1, 0);
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_8024239C) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) == 26) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    group 27;
    func_80240000_B65AB0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_B65BA0();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(6) += 2;
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(8) = SI_VAR(4);
    SI_VAR(8) += 180;
    if (SI_VAR(4) >= 360) {
        SI_VAR(4) -= 360;
    }
    InterpPlayerYaw(SI_VAR(8), 1);
    sleep 1;
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(0), SI_VAR(6), SI_VAR(7));
    SetPlayerAnimation(0x10000);
    0x802D286C(2048);
    0x802D2520(0x10000, 5, 3, 1, 1, 0);
    spawn {
        sleep 8;
        HidePlayerShadow(1);
    }
    spawn {
        sleep 3;
        loop 40 {
            func_8024023C_B65CEC(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_802426D0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_B65D90();
                    return;
                }
            }
        }
    }
    func_80240404_B65EB4();
});

Script N(script_ExitWalk_8024276C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80246570_B6C020, 0);
    sleep 100;
});

Script N(script_ExitWalk_802427C8) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246578_B6C028, 2);
    sleep 100;
});

Script N(script_ExitWalk_80242824) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80246580_B6C030, 3);
    sleep 100;
});

Script N(script_80242880) = SCRIPT({
    group 27;
    GotoMap(D_80246588_B6C038, 0);
    sleep 100;
});

Script N(script_802428BC) = SCRIPT({
    group 27;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    await N(script_802420E4);
});

Script N(script_80242914) = SCRIPT({
    bind N(script_ExitWalk_8024276C) to 0x80000 3;
    bind N(script_ExitWalk_802427C8) to 0x80000 5;
    bind N(script_ExitWalk_80242824) to 0x80000 9;
    SI_VAR(0) = 3;
    SI_VAR(1) = 35;
    SI_VAR(2) = N(script_80242880);
    bind N(script_802428BC) to TriggerFlag_FLOOR_TOUCH SI_VAR(1);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SetZoneEnabled(3, 0);
    MakeNpcs(0, N(npcGroupList_80245918));
    await N(script_MakeEntities);
    spawn N(script_802445E4);
    ModifyColliderFlags(3, 31, 4);
    ModifyColliderFlags(3, 33, 4);
    ModifyColliderFlags(0, 31, 0x80000);
    ModifyColliderFlags(0, 33, 0x80000);
    ModifyColliderFlags(3, 74, 1);
    spawn N(script_80246414);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
    ModifyColliderFlags(0, 10, 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 3) {
        SI_VAR(0) = N(script_80242914);
        spawn EnterWalk;
    } else {
        SI_VAR(10) = N(script_80242914);
        spawn N(script_802419A0);
        sleep 1;
    }
    SetMusicTrack(0, 36, 0, 8);
    ClearAmbientSounds(250);
    0x802C971C(119);
    EnableTexPanning(118, 1);
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
        spawn N(script_UpdateTexturePan_802426D0);
    }
});

s32 pad_002D14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80242D20) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240660_B66110, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240660_B66110, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80243080) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240660_B66110, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240660_B66110, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240660_B66110, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240660_B66110, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

Script N(script_80243684) = SCRIPT({
    PlaySoundAtCollider(70, 8351, 0);
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
        TranslateModel(95, SI_MAP_VAR(0), 0, 0);
        TranslateModel(97, SI_MAP_VAR(1), 0, 0);
        func_80240888_B66338(95, SI_VAR(6));
        func_80240888_B66338(97, SI_VAR(7));
        sleep 1;
    }
});

Script N(script_8024384C) = SCRIPT({
    PlaySoundAtCollider(71, 8351, 0);
    SI_VAR(0) = SI_MAP_VAR(2);
    SI_VAR(6) = 0;
    loop 60 {
        SI_VAR(2) =f SI_MAP_VAR(2);
        SI_VAR(2) -=f SI_VAR(0);
        SI_VAR(4) =f SI_VAR(2);
        SI_VAR(4) *= 0.09375;
        SI_VAR(6) *= 0.80078125;
        SI_VAR(6) +=f SI_VAR(4);
        SI_VAR(0) +=f SI_VAR(6);
        TranslateModel(99, SI_MAP_VAR(2), 0, 0);
        func_80240888_B66338(99, SI_VAR(6));
        sleep 1;
    }
});

Script N(script_80243954) = SCRIPT({
    PlaySoundAtCollider(72, 8351, 0);
    SI_VAR(0) = SI_MAP_VAR(3);
    SI_VAR(1) = SI_MAP_VAR(4);
    SI_VAR(6) = 0;
    SI_VAR(7) = 0;
    loop 60 {
        SI_VAR(2) =f SI_MAP_VAR(3);
        SI_VAR(3) =f SI_MAP_VAR(4);
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
        TranslateModel(101, SI_MAP_VAR(3), 0, 0);
        TranslateModel(103, SI_MAP_VAR(4), 0, 0);
        func_80240888_B66338(101, SI_VAR(6));
        func_80240888_B66338(103, SI_VAR(7));
        sleep 1;
    }
});

Script N(script_80243B1C) = SCRIPT({
    ModifyColliderFlags(0, 70, 0x7FFFFE00);
    spawn N(script_80243684);
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

Script N(script_80243C08) = SCRIPT({
    ModifyColliderFlags(0, 71, 0x7FFFFE00);
    spawn N(script_8024384C);
    DisablePlayerInput(1);
    MakeLerp(0, 45, 30, 5);
    loop {
        UpdateLerp();
        SI_MAP_VAR(2) =f SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerInput(0);
});

Script N(script_80243CD4) = SCRIPT({
    ModifyColliderFlags(0, 72, 0x7FFFFE00);
    spawn N(script_80243954);
    DisablePlayerInput(1);
    MakeLerp(0, 45, 30, 5);
    loop {
        UpdateLerp();
        SI_MAP_VAR(4) =f SI_VAR(0);
        SI_MAP_VAR(3) =f SI_MAP_VAR(4);
        SI_MAP_VAR(3) *= -1;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    DisablePlayerInput(0);
});

Script N(script_80243DC0) = SCRIPT({
    ModifyColliderFlags(0, 71, 0x7FFFFE00);
    ModifyColliderFlags(0, 72, 0x7FFFFE00);
    spawn N(script_8024384C);
    spawn N(script_80243954);
    MakeLerp(0, 45, 30, 5);
    loop {
        UpdateLerp();
        SI_MAP_VAR(2) =f SI_VAR(0);
        SI_MAP_VAR(4) =f SI_VAR(0);
        SI_MAP_VAR(3) =f SI_MAP_VAR(4);
        SI_MAP_VAR(3) *= -1;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80243EC0) = SCRIPT({
    DisablePlayerInput(1);
    loop 3 {
        func_80240888_B66338(SI_VAR(1), 1);
        sleep 1;
        func_80240888_B66338(SI_VAR(1), 0);
        sleep 1;
        func_80240888_B66338(SI_VAR(1), -1);
        sleep 1;
    }
    TranslateModel(SI_VAR(1), 0, 0, 0);
    SI_VAR(10) = SI_VAR(2);
    GetModelCenter(SI_VAR(1));
    DropItemEntity(343, SI_VAR(0), SI_VAR(1), SI_VAR(2), 7, SI_VAR(10));
    DisablePlayerInput(0);
});

Script N(script_80243FC4) = SCRIPT({
10:
0:
    if (SI_MAP_VAR(5) == 0) {
        sleep 1;
        goto 0;
    }
    SI_VAR(3) = SI_MAP_VAR(5);
    MakeLerp(0, SI_MAP_VAR(5), 120, 10);
    loop {
        UpdateLerp();
        SI_MAP_VAR(5) = SI_VAR(3);
        SI_MAP_VAR(5) -= SI_VAR(0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    goto 10;
});

Script N(script_802440C0) = SCRIPT({
    DisablePlayerInput(1);
    sleep 20;
    DisablePlayerPhysics(1);
    SetPlayerActionState(0);
    SI_MAP_VAR(5) = 3600;
    loop 60 {
        InterpPlayerYaw(SI_MAP_VAR(5), 0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 6.0;
        SI_VAR(1) += 3.0;
        SI_VAR(2) += -29.0;
        SI_VAR(0) /= 1.09375;
        SI_VAR(1) /= 1.09375;
        SI_VAR(2) /= 1.09375;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    UseSettingsFrom(0, 0xFFFFFFE7, 90, 0xFFFFFEB6);
    SetPanTarget(0, 0xFFFFFFE7, 90, 0xFFFFFEB6);
    PanToTarget(0, 0, 1);
    SetPlayerJumpscale(0.296875);
    PlayerJump(0xFFFFFFE7, 90, 0xFFFFFEB6, 60);
    SetPlayerPos(0xFFFFFFE7, 90, 0xFFFFFEB6);
    SetCamTarget(0, 0xFFFFFFE7, 90, 0xFFFFFEB6);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    PanToTarget(0, 0, 0);
    sleep 100;
});

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5D },
};

s32 N(treeDropList_Bush1)[] = {
    0x00000001, 0x00000157, 0x00000192, 0x00000014, 0x000000A1, 0x00000007, 0xF8406073, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { 5.633219826585765e-43, 2.802596928649634e-44, 2.2560905275629555e-43 } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), N(treeDropList_Bush1), N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x3E },
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nan, 2.802596928649634e-44, 6.656167705542881e-43 } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x40 },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { 2.059908742557481e-43, 2.802596928649634e-44, 6.8523494905483555e-43 } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x42 },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { 2.704506036146897e-43, 2.802596928649634e-44, 6.628141736256385e-43 } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x44 },
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { nan, 2.802596928649634e-44, 4.049752561898721e-43 } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), 0x00000000, N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x46 },
};

s32 N(treeDropList_Bush6)[] = {
    0x00000001, 0x00000157, 0xFFFFFFDE, 0x00000016, 0x0000013D, 0x00000007, 0xF8406074, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { nan, 3.0828566215145976e-44, 4.44211613190967e-43 } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), N(treeDropList_Bush6), N(treeEffectVectors_Bush6), 0x00000000,
};

ModelIdList N(treeModelList_Bush7_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x48 },
};

TreeEffectVectorList N(treeEffectVectors_Bush7) = {
    .count = 0x1,
    .vectors = { { 4.764414778704378e-44, 2.802596928649634e-44, 2.3401684354224445e-43 } },
};

s32 N(searchBushEvent_Bush7)[] = {
    N(treeModelList_Bush7_Bush), 0x00000000, N(treeEffectVectors_Bush7), 0x00000000,
};

ModelIdList N(treeModelList_Bush8_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4A },
};

TreeEffectVectorList N(treeEffectVectors_Bush8) = {
    .count = 0x1,
    .vectors = { { 1.3312335411085762e-43, 2.802596928649634e-44, 2.5783891743576634e-43 } },
};

s32 N(searchBushEvent_Bush8)[] = {
    N(treeModelList_Bush8_Bush), 0x00000000, N(treeEffectVectors_Bush8), 0x00000000,
};

ModelIdList N(treeModelList_Bush9_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4C },
};

TreeEffectVectorList N(treeEffectVectors_Bush9) = {
    .count = 0x1,
    .vectors = { { 4.680336870844889e-43, 2.802596928649634e-44, 4.021726592612225e-43 } },
};

s32 N(searchBushEvent_Bush9)[] = {
    N(treeModelList_Bush9_Bush), 0x00000000, N(treeEffectVectors_Bush9), 0x00000000,
};

ModelIdList N(treeModelList_Bush10_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4E },
};

TreeEffectVectorList N(treeEffectVectors_Bush10) = {
    .count = 0x1,
    .vectors = { { 5.43703804158029e-43, 2.802596928649634e-44, 3.90962271546624e-43 } },
};

s32 N(searchBushEvent_Bush10)[] = {
    N(treeModelList_Bush10_Bush), 0x00000000, N(treeEffectVectors_Bush10), 0x00000000,
};

ModelIdList N(treeModelList_Bush11_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x50 },
};

TreeEffectVectorList N(treeEffectVectors_Bush11) = {
    .count = 0x1,
    .vectors = { { 6.3618950280346695e-43, 2.802596928649634e-44, 2.0739217272007293e-43 } },
};

s32 N(searchBushEvent_Bush11)[] = {
    N(treeModelList_Bush11_Bush), 0x00000000, N(treeEffectVectors_Bush11), 0x00000000,
};

ModelIdList N(treeModelList_Bush12_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x52 },
};

TreeEffectVectorList N(treeEffectVectors_Bush12) = {
    .count = 0x1,
    .vectors = { { 5.030661486926093e-43, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush12)[] = {
    N(treeModelList_Bush12_Bush), 0x00000000, N(treeEffectVectors_Bush12), 0x00000000,
};

ModelIdList N(treeModelList_Bush13_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x54 },
};

TreeEffectVectorList N(treeEffectVectors_Bush13) = {
    .count = 0x1,
    .vectors = { { nan, 1.5414283107572988e-43, nan } },
};

s32 N(searchBushEvent_Bush13)[] = {
    N(treeModelList_Bush13_Bush), 0x00000000, N(treeEffectVectors_Bush13), 0x00000000,
};

ModelIdList N(treeModelList_Bush14_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x55 },
};

TreeEffectVectorList N(treeEffectVectors_Bush14) = {
    .count = 0x1,
    .vectors = { { nan, 1.5694542800437951e-43, nan } },
};

s32 N(searchBushEvent_Bush14)[] = {
    N(treeModelList_Bush14_Bush), 0x00000000, N(treeEffectVectors_Bush14), 0x00000000,
};

ModelIdList N(treeModelList_Bush15_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x56 },
};

TreeEffectVectorList N(treeEffectVectors_Bush15) = {
    .count = 0x1,
    .vectors = { { nan, 1.5414283107572988e-43, nan } },
};

s32 N(searchBushEvent_Bush15)[] = {
    N(treeModelList_Bush15_Bush), 0x00000000, N(treeEffectVectors_Bush15), 0x00000000,
};

ModelIdList N(treeModelList_Bush16_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x57 },
};

TreeEffectVectorList N(treeEffectVectors_Bush16) = {
    .count = 0x1,
    .vectors = { { nan, 1.5414283107572988e-43, nan } },
};

s32 N(searchBushEvent_Bush16)[] = {
    N(treeModelList_Bush16_Bush), 0x00000000, N(treeEffectVectors_Bush16), 0x00000000,
};

ModelIdList N(treeModelList_Bush17_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x58 },
};

TreeEffectVectorList N(treeEffectVectors_Bush17) = {
    .count = 0x1,
    .vectors = { { 1.5274153261140506e-43, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush17)[] = {
    N(treeModelList_Bush17_Bush), 0x00000000, N(treeEffectVectors_Bush17), 0x00000000,
};

ModelIdList N(treeModelList_Bush18_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x5A },
};

TreeEffectVectorList N(treeEffectVectors_Bush18) = {
    .count = 0x1,
    .vectors = { { 2.228064558276459e-43, 2.802596928649634e-44, nan } },
};

s32 N(searchBushEvent_Bush18)[] = {
    N(treeModelList_Bush18_Bush), 0x00000000, N(treeEffectVectors_Bush18), 0x00000000,
};

Script N(script_802445E4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        spawn N(script_80243DC0);
    }
    bind N(script_80243B1C) to TriggerFlag_WALL_INTERACT 70;
    bind N(script_80243C08) to TriggerFlag_WALL_INTERACT 71;
    bind N(script_80243CD4) to TriggerFlag_WALL_INTERACT 72;
    spawn N(script_80243FC4);
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 69;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 38;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 39;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 40;
    SI_VAR(0) = N(searchBushEvent_Bush5);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 41;
    SI_VAR(0) = N(searchBushEvent_Bush6);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 42;
    SI_VAR(0) = N(searchBushEvent_Bush7);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 43;
    SI_VAR(0) = N(searchBushEvent_Bush8);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 44;
    SI_VAR(0) = N(searchBushEvent_Bush9);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 45;
    SI_VAR(0) = N(searchBushEvent_Bush10);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 46;
    SI_VAR(0) = N(searchBushEvent_Bush11);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 47;
    SI_VAR(0) = N(searchBushEvent_Bush12);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 48;
    SI_VAR(0) = N(searchBushEvent_Bush13);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 49;
    SI_VAR(0) = N(searchBushEvent_Bush14);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 50;
    SI_VAR(0) = N(searchBushEvent_Bush15);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 51;
    SI_VAR(0) = N(searchBushEvent_Bush16);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 52;
    SI_VAR(0) = N(searchBushEvent_Bush17);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 53;
    SI_VAR(0) = N(searchBushEvent_Bush18);
    bind N(script_SearchBush_80242D20) to TriggerFlag_WALL_INTERACT 54;
});

Script N(script_NpcAI_802449A0) = SCRIPT({
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

Script N(script_80244D50) = SCRIPT({
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
            BindNpcAI(-1, N(script_NpcAI_802449A0));
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcSettings N(npcSettings_80244EA0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = 0x80244D2C,
    .ai = &N(script_NpcAI_802449A0),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244D50),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

s32 unk_missing_80244ECC[] = {
    0x00420000, 0x00420003, 0x00420005, 0x00420006, 0x00420007, 0x0042000F, 0x00420010, 0x0042001A,
    0x0042001B, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80244EF4)[] = {
    0x00420000, 0xFFFFFFFF,
};

Script N(script_80244EFC) = SCRIPT({
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

NpcAISettings N(aISettings_80244FB8) = {
    .moveSpeed = 1.7000000476837158,
    .moveTime = 0x64,
    .waitTime = 0x1,
    .alertRadius = 100.0,
    .unk_10 = 30.0,
    .unk_14 = 0x1,
    .chaseSpeed = 3.5,
    .unk_1C = 0x14,
    .unk_20 = 0x1,
    .chaseRadius = 120.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244FE8) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 12);
    SetSelfVar(3, 9);
    func_80241424_B66ED4(N(aISettings_80244FB8));
});

NpcSettings N(npcSettings_80245058) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244FE8),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

Script N(script_NpcAI_80245084) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 4);
    SetSelfVar(1, 22);
    SetSelfVar(2, 40);
    SetSelfVar(3, 28);
    SetSelfVar(4, 1);
    SetSelfVar(15, 0);
    func_80240F10_B669C0();
});

NpcSettings N(npcSettings_8024512C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x8,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80245084),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244EFC),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0x8,
};

StaticNpc N(npcGroup_80245158)[] = {
    {
        .id = 30,
        .settings = &N(npcSettings_80245058),
        .pos = { -200.0, 90.0, -330.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SLEEPY_SHEEP, 10 } },
        .movement = { 0xFFFFFF38, 0x0000005A, 0xFFFFFEB6, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF4A, 0x0000005A, 0xFFFFFED2, 0x000000D4, 0x00000064, 0x00000001, 0x00000001 },
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
    },
    {
        .id = 31,
        .settings = &N(npcSettings_8024512C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00420003, 0x00420005, 0x00420006, 0x00420006, 0x00420003, 0x00420003, 0x00420007, 0x00420007, 0x0042001A, 0x0042001B, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003, 0x00420003,
        },
        .extraAnimations = N(extraAnimationList_80244EF4),
    },
};

StaticNpc N(npcGroup_80245538)[] = {
    {
        .id = 70,
        .settings = &N(npcSettings_80244EA0),
        .pos = { 335.0, 0.0, -40.0 },
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

StaticNpc N(npcGroup_80245728)[] = {
    {
        .id = 80,
        .settings = &N(npcSettings_80244EA0),
        .pos = { 415.0, 0.0, -65.0 },
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

NpcGroupList N(npcGroupList_80245918) = {
    NPC_GROUP(N(npcGroup_80245158), 0x14030003),
    NPC_GROUP(N(npcGroup_80245538), 0x140E0003),
    NPC_GROUP(N(npcGroup_80245728), 0x140E0003),
    {},
};

s32 pad_005948[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80245950) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241750_B67200, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241750_B67200, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80245CB0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241750_B67200, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241750_B67200, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241750_B67200, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241750_B67200, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .modelIDs = { 0x1D, 0x1E, 0x1F, 0x20, 0x21 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x1C },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nan, 1.5974802493302915e-43, nan }, { nan, 1.5974802493302915e-43, nan } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_80246304) =  { -421.0, 0.0, -234.0, 0.0 };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x24, 0x25, 0x26, 0x27, 0x28 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x23 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000157, 0x00000032, 0x000000BE, 0xFFFFFE5C, 0x0000000F, 0xF840606A, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { nan, 2.858648867222627e-43, nan }, { 8.267660939516421e-44, 2.858648867222627e-43, nan } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_80246384) =  { 14.0, 90.0, -459.0, 0.0 };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x2B, 0x2C, 0x2D, 0x2E, 0x2F },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2A },
};

s32 N(treeDropList_Tree3)[] = {
    0x00000001, 0x00000098, 0x00000186, 0x00000064, 0xFFFFFF92, 0x0000000F, 0xF840606B, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree3) = {
    .count = 0x2,
    .vectors = { { 5.815388626947991e-43, 1.5974802493302915e-43, nan }, { 7.006492321624085e-43, 1.5974802493302915e-43, nan } },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = &N(treeDropList_Tree3),
    .effectVectors = &N(treeEffectVectors_Tree3),
    .callback = NULL,
};

Vec4f N(triggerCoord_80246404) =  { 455.0, 0.0, -150.0, 0.0 };

Script N(script_80246414) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80245CB0) to TriggerFlag_WALL_HAMMER 56;
    bind N(script_ShakeTree_80245CB0) to TriggerFlag_BOMB N(triggerCoord_80246304);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80245CB0) to TriggerFlag_WALL_HAMMER 57;
    bind N(script_ShakeTree_80245CB0) to TriggerFlag_BOMB N(triggerCoord_80246384);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80245CB0) to TriggerFlag_WALL_HAMMER 58;
    bind N(script_ShakeTree_80245CB0) to TriggerFlag_BOMB N(triggerCoord_80246404);
});

s32 pad_0064FC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BC7F4, 30, 0, 0xFFFFFF06, 0, 0xFFFFFFDF, 90, 0xFFFFFEA5, 0x80000000);
    MakeEntity(0x802BCC20, 271, 0, 336, 0, 0x80000000);
});

s32 pad_006564[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80246570_B6C020

// rodata: D_80246578_B6C028

// rodata: D_80246580_B6C030

// rodata: D_80246588_B6C038

// rodata: D_80246590_B6C040

s32 pad_006598[] = {
    0x00000000, 0x00000000,
};

// rodata: jtbl_802465A0_B6C050

// rodata: D_802465B8_B6C068

// rodata: jtbl_802465C0_B6C070

// rodata: jtbl_80246750_B6C200

