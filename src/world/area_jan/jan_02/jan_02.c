#include "jan_02.h"

s32 pad_000024[3];
s32 pad_00042C[1];
s32 pad_0026D4[3];
s32 pad_00291C[1];
Script N(script_80242980);
s32 pad_002A2C[1];
Script N(script_UpdateTexturePan_80242A30);
Script N(script_ExitWalk_80242ACC);
Script N(script_ExitWalk_80242B34);
Script N(script_80242B90);
s32 N(unk_80242BD8)[1];
Script N(main);
s32 pad_002F94[3];
Script N(script_NpcAI_80242FFC);
s32 N(unk_80243048)[1];
s32 N(unk_8024304C)[1];
Script N(script_80243050);
Script N(script_80243194);
s32 N(unk_802431E4)[1];
Script N(script_802431E8);
Script N(script_80243218);
s32 N(quizAnswers)[16];
s32 N(quizRequirements)[20];
Script N(script_802432D8);
Script N(script_80243388);
Script N(script_80243524);
Script N(script_80243620);
Script N(script_8024365C);
Script N(script_8024380C);
Script N(script_80243944);
Script N(script_80243AB0);
Script N(script_80243AE4);
Script N(script_80243B24);
Script N(script_80243B60);
Script N(script_802446A8);
Script N(script_802446E8);
Script N(script_802447C4);
Script N(script_80244874);
Script N(script_80244924);
Script N(script_80245654);
Script N(script_802456C8);
Script N(script_80245748);
Script N(script_80245794);
s32 unk_missing_802457E0[11];
Script N(script_8024580C);
Script N(script_8024587C);
Script N(script_Interact_80245ECC);
Script N(script_Init_802460E4);
Script N(script_Interact_80246264);
Script N(script_Init_80246464);
Script N(script_Interact_80246510);
Script N(script_Idle_80246704);
Script N(script_Init_80246760);
Script N(script_Interact_802467F0);
Script N(script_Idle_802469E4);
Script N(script_Init_80246A40);
Script N(script_Interact_80246AD0);
Script N(script_Idle_80246CC4);
Script N(script_Init_80246D20);
s32 N(extraAnimationList_80246DB0)[5];
StaticNpc N(npcGroup_80246DC4)[5];
StaticNpc N(npcGroup_80247774)[1];
NpcGroupList N(npcGroupList_80247964);
s32 pad_007988[2];
Script N(script_MakeEntities);
s32 pad_0079D8[2];
Script N(script_SearchBush_802479E0);
Script N(script_ShakeTree_80247D40);
s32 N(treeDropList_Tree2)[8];
s32 N(treeDropList_Tree3)[8];
Script N(script_8024845C);
s32 pad_0085AC[1];
const char D_802485B0_B34A20[8]; // "jan_01"
const char D_802485B8_B34A28[8]; // "jan_03"

// text: func_80240000_B2C470

s32 pad_000024[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240030_B2C4A0

// text: func_80240154_B2C5C4

// text: func_8024033C_B2C7AC

// text: func_80240360_B2C7D0

// text: func_802403F8_B2C868

s32 pad_00042C[] = {
    0x00000000,
};

// text: func_80240430_B2C8A0

// text: func_80240588_B2C9F8

// text: N(UnkNpcAIFunc1)

// text: func_802408F0_B2CD60

// text: func_80240AAC_B2CF1C

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_80240C4C_B2D0BC

// text: func_80240D7C_B2D1EC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240F04_B2D374

// text: func_80240FC4_B2D434

// text: func_802412C0_B2D730

// text: func_8024131C_B2D78C

// text: func_802414EC_B2D95C

// text: func_80241540_B2D9B0

// text: func_80241578_B2D9E8

// text: func_80241614_B2DA84

// text: func_802416C8_B2DB38

// text: func_8024172C_B2DB9C

// text: func_80241740_B2DBB0

// text: func_80241750_B2DBC0

// text: func_80241974_B2DDE4

// text: func_802419C0_B2DE30

// text: func_802419E0_B2DE50

// text: func_80241A40_B2DEB0

// text: func_80241B8C_B2DFFC

// text: func_80241D00_B2E170

// text: func_80241D84_B2E1F4

// text: func_80241F9C_B2E40C

// text: func_80242050_B2E4C0

// text: func_80242084_B2E4F4

// text: func_80242104_B2E574

// text: func_8024211C_B2E58C

// text: func_80242138_B2E5A8

// text: func_80242150_B2E5C0

// text: func_80242180_B2E5F0

// text: func_802421F4_B2E664

// text: func_80242294_B2E704

// text: func_80242430_B2E8A0

// text: func_80242494_B2E904

// text: func_80242524_B2E994

// text: func_8024260C_B2EA7C

// text: func_80242678_B2EAE8

// text: func_802426A8_B2EB18

s32 pad_0026D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802426E0_B2EB50

// text: func_80242750_B2EBC0

s32 pad_00291C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -450.0f, 0.0f, -450.0f, 135.0f },
    { 640.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900ED,
};

Script N(script_80242980) = SCRIPT({
    match SI_SAVE_VAR(0) {
        14..15
        SetMusicTrack(0, 39, 0, 8);
        else {
            SetMusicTrack(0, 38, 0, 8);
            spawn {
                sleep 3;
                func_80240000_B2C470();
            }
        }
    }
    ClearAmbientSounds(250);
});

s32 pad_002A2C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80242A30) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240030_B2C4A0();
                    return;
                }
            }
        }
    }
    func_80240154_B2C5C4();
});

Script N(script_ExitWalk_80242ACC) = SCRIPT({
    group 27;
    func_8024033C_B2C7AC();
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802485B0_B34A20, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242B34) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802485B8_B34A28, 0);
    sleep 100;
});

Script N(script_80242B90) = SCRIPT({
    bind N(script_ExitWalk_80242ACC) to 0x80000 0;
    bind N(script_ExitWalk_80242B34) to 0x80000 4;
});

s32 N(unk_80242BD8)[] = {
    0x00000001,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 37;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_SAVE_FLAG(1982) = 1;
    SI_AREA_FLAG(4) = 0;
    SI_AREA_FLAG(5) = 0;
    MakeNpcs(0, N(npcGroupList_80247964));
    await N(script_MakeEntities);
    spawn N(script_8024845C);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_80242B90);
    spawn EnterWalk;
    spawn N(script_80242980);
    PlaySound(0x80000017);
    EnableTexPanning(62, 1);
    EnableTexPanning(61, 1);
    EnableTexPanning(63, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 400;
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
        spawn N(script_UpdateTexturePan_80242A30);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 200;
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
        spawn N(script_UpdateTexturePan_80242A30);
    }
    spawn {
        func_80240360_B2C7D0();
    }
    ModifyColliderFlags(3, 24, 1);
    ModifyColliderFlags(3, 25, 1);
});

s32 pad_002F94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242FA0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x30,
    .radius = 0x20,
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

NpcAISettings N(aISettings_80242FCC) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 0.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242FFC) = SCRIPT({
    func_80240FC4_B2D434(N(aISettings_80242FCC));
});

NpcSettings N(npcSettings_8024301C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x30,
    .radius = 0x20,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242FFC),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 N(unk_80243048)[] = {
    0x00000000,
};

s32 N(unk_8024304C)[] = {
    0x00000000,
};

Script N(script_80243050) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024131C_B2D78C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |= c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241540_B2D9B0(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80243194) = {
    SI_CMD(ScriptOpcode_CALL, func_80241578_B2D9E8, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243050), 0x10, 0, 0x80248760, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802414EC_B2D95C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(unk_802431E4)[] = {
    0x00000000,
};

Script N(script_802431E8) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80243218) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(quizAnswers)[] = {
    0x02010102, 0x02000200, 0x02010002, 0x01010002, 0x00020100, 0x00020100, 0x02010102, 0x02010101,
    0x00020202, 0x02000101, 0x02010201, 0x02000001, 0x01000102, 0x01000202, 0x01020002, 0x02010101,
};

s32 N(quizRequirements)[] = {
    0xFFFFFF94, 0x00000000, 0xFFFFFFB4, 0x0000000A, 0xFFFFFFCA, 0x00000014, 0xFFFFFFF2, 0x0000001E,
    0x00000006, 0x00000025, 0x00000027, 0x0000002C, 0x0000003A, 0x00000034, 0x00000058, 0x0000003C,
    0x00000060, 0x00000040, 0x00000000, 0x00000040,
};

Script N(script_802432D8) = SCRIPT({
    func_80242150_B2E5C0();
    if (SI_VAR(0) <= 1) {
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 300;
        SetNpcJumpscale(-1, 1);
        SetNpcAnimation(-1, 0xAF000C);
        sleep 40;
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

Script N(script_80243388) = SCRIPT({
    func_802421F4_B2E664(0, SI_ARRAY(0));
    func_80242180_B2E5F0(0, 25);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetCamType(0, SI_VAR(1), SI_VAR(2));
    SetCamType(0, SI_VAR(1), 0);
    GetCamDistance(0, SI_VAR(0));
    if (SI_VAR(0) > 0) {
        SI_VAR(0) = 370;
    } else {
        SI_VAR(0) = f 0xFFFFFE8E;
    }
    SetCamDistance(0, SI_VAR(0));
    GetCamPitch(0, SI_VAR(0), SI_VAR(1));
    SI_VAR(0) = 13.0;
    SI_VAR(1) = -10.0;
    SetCamPitch(0, SI_VAR(0), SI_VAR(1));
    PanToTarget(0, 0, 1);
    SetCamLeadPlayer(0, 0);
});

Script N(script_80243524) = SCRIPT({
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 30;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetCamDistance(0, SI_VAR(0));
    if (SI_VAR(0) > 0) {
        SI_VAR(0) = 17;
    } else {
        SI_VAR(0) = f 0xFFFFFFEF;
    }
    SetCamDistance(0, SI_VAR(0));
    SetCamSpeed(0, 90.0);
    WaitForCam(0, 1.0);
    SetCamSpeed(0, 1);
});

Script N(script_80243620) = SCRIPT({
    func_80242180_B2E5F0(0, SI_ARRAY(0));
    PanToTarget(0, 0, 0);
});

Script N(script_8024365C) = SCRIPT({
    sleep 20;
    func_80242294_B2E704(SI_ARRAY(1), SI_ARRAY(3), 83, SI_VAR(0), SI_VAR(1));
    spawn {
        SI_VAR(2) = 0;
        loop 60 {
            SI_VAR(3) = f SI_VAR(0);
            SI_VAR(4) = f SI_VAR(1);
            SI_VAR(3) *= f SI_VAR(2);
            SI_VAR(4) *= f SI_VAR(2);
            SI_VAR(3) /= 60;
            SI_VAR(4) /= 60;
            SI_VAR(3) += f SI_ARRAY(1);
            SI_VAR(4) += f SI_ARRAY(3);
            SetPlayerPos(SI_VAR(3), SI_ARRAY(2), SI_VAR(4));
            SI_VAR(2) += 1;
            sleep 1;
        }
        SI_VAR(3) = f SI_VAR(0);
        SI_VAR(4) = f SI_VAR(1);
        SI_VAR(3) += f SI_ARRAY(1);
        SI_VAR(4) += f SI_ARRAY(3);
        SetPlayerPos(SI_VAR(3), SI_ARRAY(2), SI_VAR(4));
    }
    func_80242430_B2E8A0();
    0x802D2884(SI_ARRAY(1), SI_ARRAY(3), 0);
    SetPlayerAnimation(0x10002);
});

Script N(script_8024380C) = SCRIPT({
    GetNpcPos(0xFFFFFFFC, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    func_80242294_B2E704(SI_VAR(10), SI_VAR(12), 108, SI_VAR(0), SI_VAR(1));
    SI_VAR(5) = f SI_ARRAY(2);
    SI_VAR(5) -= f SI_VAR(11);
    spawn {
        func_80242524_B2E994();
        SI_VAR(3) = f SI_VAR(0);
        SI_VAR(4) = f SI_VAR(1);
        SI_VAR(6) = f SI_VAR(5);
        SI_VAR(3) += f SI_VAR(10);
        SI_VAR(4) += f SI_VAR(12);
        SI_VAR(6) += f SI_VAR(11);
        SetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(6), SI_VAR(4));
    }
    func_80242494_B2E904();
    NpcFacePlayer(0xFFFFFFFC, 0);
    SetNpcAnimation(0xFFFFFFFC, 262);
});

Script N(script_80243944) = SCRIPT({
    GetNpcPos(5, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    func_80242294_B2E704(SI_VAR(10), SI_VAR(12), 0xFFFFFFBA, SI_VAR(0), SI_VAR(1));
    spawn {
        SI_VAR(2) = 0;
        loop 60 {
            SI_VAR(3) = f SI_VAR(0);
            SI_VAR(4) = f SI_VAR(1);
            SI_VAR(3) *= f SI_VAR(2);
            SI_VAR(4) *= f SI_VAR(2);
            SI_VAR(3) /= 60;
            SI_VAR(4) /= 60;
            SI_VAR(3) += f SI_VAR(10);
            SI_VAR(4) += f SI_VAR(12);
            SetNpcPos(5, SI_VAR(3), SI_ARRAY(2), SI_VAR(4));
            SI_VAR(2) += 1;
            sleep 1;
        }
    }
    sleep 60;
    NpcFacePlayer(5, 0);
    SetNpcAnimation(5, 0xAF0001);
});

Script N(script_80243AB0) = SCRIPT({
    spawn N(script_8024365C);
    spawn N(script_8024380C);
    await N(script_80243944);
});

Script N(script_80243AE4) = SCRIPT({
    loop {
        SetPlayerAnimation(0x10028);
        sleep 20;
    }
});

Script N(script_80243B24) = SCRIPT({
    SetPlayerAnimation(0x10016);
    sleep 15;
    SetPlayerAnimation(0x10002);
});

Script N(script_80243B60) = SCRIPT({
    loop {
        SetPlayerAnimation(0x10002);
        sleep 1;
        SetPlayerAnimation(0x10006);
        sleep 2;
        SetPlayerAnimation(0x10007);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 3;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 2;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SetPlayerAnimation(0x10008);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0xFFFFFFFE;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0xFFFFFFFD;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SetPlayerAnimation(0x10009);
        sleep 2;
        sleep 1;
        SetPlayerAnimation(0x10006);
        sleep 2;
        SetPlayerAnimation(0x10007);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 3;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 2;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SetPlayerAnimation(0x10008);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0xFFFFFFFE;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0xFFFFFFFD;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SetPlayerAnimation(0x10009);
        sleep 2;
        sleep 1;
        SetPlayerAnimation(0x10006);
        sleep 2;
        SetPlayerAnimation(0x10007);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 3;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 2;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SetPlayerAnimation(0x10008);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0xFFFFFFFE;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(1) += 0xFFFFFFFD;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SetPlayerAnimation(0x10009);
        sleep 2;
    }
    SetPlayerAnimation(0x10002);
    SetPlayerPos(SI_VAR(0), SI_ARRAY(2), SI_VAR(2));
    sleep 1;
});

Script N(script_802446A8) = SCRIPT({
    SetPlayerAnimation(0x10023);
    loop {
        sleep 1;
    }
});

Script N(script_802446E8) = SCRIPT({
    spawn {
        func_80242294_B2E704(SI_ARRAY(1), SI_ARRAY(3), 25, SI_VAR(0), SI_VAR(1));
        SI_VAR(2) = f SI_ARRAY(1);
        SI_VAR(2) += f SI_VAR(0);
        SI_VAR(3) = f SI_ARRAY(3);
        SI_VAR(3) += f SI_VAR(1);
        SetNpcAnimation(0xFFFFFFFC, 258);
        NpcMoveTo(0xFFFFFFFC, SI_VAR(2), SI_VAR(3), 40);
        SetNpcAnimation(0xFFFFFFFC, 262);
    }
    PlayerMoveTo(SI_ARRAY(1), SI_ARRAY(3), 40);
});

Script N(script_802447C4) = SCRIPT({
    SI_VAR(1) = spawn N(script_80243B60);
    sleep 60;
    kill SI_VAR(1);
    loop 5 {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 2;
    }
    sleep 20;
    await N(script_802446E8);
});

Script N(script_80244874) = SCRIPT({
    SI_VAR(1) = spawn N(script_802446A8);
    sleep 60;
    loop 5 {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) += -1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 2;
    }
    sleep 20;
    kill SI_VAR(1);
    await N(script_802446E8);
});

// Unable to use DSL: DSL does not support script opcode 0x55
// *INDENT-OFF*
Script N(script_80244924) = {
    SI_CMD(ScriptOpcode_IF_GT, SI_SAVE_VAR(352), 63),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
    SI_CMD(ScriptOpcode_CALL, NpcFacePlayer, -1, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(352), 63),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0xAF0004, 0xAF0001, 0, 0x8000A),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1767), 1),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0xAF0004, 0xAF0001, 0, 0x80009),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0xAF0004, 0xAF0001, 0, 0x80008),
            SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1767), 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E000D),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, -1, 0xAF0004, 0xAF0001, 0, 0x8000C),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802432D8)),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1793), 1),
    SI_CMD(ScriptOpcode_CALL, func_8024172C_B2DB9C),
    SI_CMD(ScriptOpcode_CALL, func_80241A40_B2DEB0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243388)),
    SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 512, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 5, 512, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 328, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 5, 256, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80243AB0), SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, ContinueSpeech, -1, 0xAF0004, 0xAF0001, 0, 0x8000B),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 137),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_VAR(1), SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, func_80241D84_B2E1F4),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 2),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0x2C0000),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), SI_SAVE_VAR(352)),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0xAF0005, 0xAF0006, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10028),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0x2D0000),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), SI_SAVE_VAR(352)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 142),
    SI_CMD(ScriptOpcode_CALL, ShowChoice, SI_VAR(0)),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(1)),
    SI_CMD(ScriptOpcode_CALL, StopSound, 142),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243B24)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 141),
    SI_CMD(ScriptOpcode_CALL, func_80242084_B2E4F4, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 0),
    SI_CMD(ScriptOpcode_CALL, func_80242678_B2EAE8),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 40),
    SI_CMD(ScriptOpcode_CALL, func_80241D00_B2E170),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 110),
        SI_CMD(ScriptOpcode_CALL, CloseChoice),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0xAF0007),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 1),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_CALL, func_80242050_B2E4C0, 1),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
            SI_CMD(ScriptOpcode_CALL, func_80242050_B2E4C0, 2),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_CALL, PlaySound, 540),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
            SI_CMD(ScriptOpcode_CALL, PlaySound, 540),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
            SI_CMD(ScriptOpcode_CALL, PlaySound, 540),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 6),
            SI_CMD(ScriptOpcode_CALL, PlaySound, 540),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 138),
        SI_CMD(ScriptOpcode_CALL, func_8024211C_B2E58C),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
            SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 50),
            SI_CMD(ScriptOpcode_CALL, func_80242294_B2E704, 0, 0, 83, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 68, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 60, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 0xFFFFFFFD),
            SI_CMD(ScriptOpcode_CALL, func_80242294_B2E704, 0, 0, 58, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 68, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 60, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 30),
            SI_CMD(ScriptOpcode_CALL, func_80242294_B2E704, 0, 0, 93, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 7, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_CALL, PlayEffect, 68, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 60, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
        SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_802447C4), SI_VAR(1)),
        SI_CMD(ScriptOpcode_ADD, SI_SAVE_VAR(352), 1),
        SI_CMD(ScriptOpcode_IF_GT, SI_SAVE_VAR(352), 63),
            SI_CMD(ScriptOpcode_CALL, ContinueSpeech, -1, -1, -1, 0, 0x80010),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0xAF0006),
            SI_CMD(ScriptOpcode_LOOP, 0),
                SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                    SI_CMD(ScriptOpcode_BREAK_LOOP),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0xAF0005),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 348),
            SI_CMD(ScriptOpcode_SET, SI_VAR(1), 3),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802431E8)),
            SI_CMD(ScriptOpcode_CALL, AddStarPieces, 1),
            SI_CMD(ScriptOpcode_CALL, func_80242050_B2E4C0, 15),
            SI_CMD(ScriptOpcode_CALL, func_80242104_B2E574),
            SI_CMD(ScriptOpcode_CALL, SetMessageValue, SI_SAVE_VAR(352), 0),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0xAF0004, 0xAF0001, 0, 0x80011),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_CALL, ContinueSpeech, -1, -1, -1, 0, 0x8000E),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0xAF0006),
            SI_CMD(ScriptOpcode_LOOP, 0),
                SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                    SI_CMD(ScriptOpcode_BREAK_LOOP),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0xAF0005),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 348),
            SI_CMD(ScriptOpcode_SET, SI_VAR(1), 1),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802431E8)),
            SI_CMD(ScriptOpcode_CALL, AddStarPieces, 1),
            SI_CMD(ScriptOpcode_CALL, func_80242050_B2E4C0, 15),
            SI_CMD(ScriptOpcode_CALL, func_80242104_B2E574),
            SI_CMD(ScriptOpcode_CALL, SetMessageValue, SI_SAVE_VAR(352), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_VAR(352), 1),
                SI_CMD(ScriptOpcode_CALL, SetMessageString, 0x8014C294, 1),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, SetMessageString, 0x8014C290, 1),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, -1, 0xAF0004, 0xAF0001, 0, 0x8000F),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0xAF0009),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 2),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 541),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 139),
        SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80244874), SI_VAR(1)),
        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_CALL, PlayEffect, 43, 0, SI_VAR(2), SI_VAR(3), SI_VAR(4), 0, 0, 0, 0, 0, 0, 0, 0, 0),
        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, -1, -1, -1, 0, 0x8000D),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 5, 0xAF000A),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_SCRIPT_EXISTS, SI_VAR(1), SI_VAR(0)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 0),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_80242084_B2E4F4, -1),
    SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 143),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 45),
        SI_CMD(ScriptOpcode_CALL, StopSound, 137),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, func_80242138_B2E5A8),
    SI_CMD(ScriptOpcode_CALL, func_80241F9C_B2E40C),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802432D8)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243620)),
    SI_CMD(ScriptOpcode_CALL, func_80241B8C_B2DFFC),
    SI_CMD(ScriptOpcode_CALL, func_80241740_B2DBB0),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1793), 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80245654) = SCRIPT({
    func_80241750_B2DBC0();
    if (SI_VAR(0) == 0) {
        return;
    }
    SetNpcFlagBits(-1, 0x1000000, 0);
    0x802CF208(-1, 0xAF0001);
    func_80241974_B2DDE4();
});

// Unable to use DSL: DSL does not support script opcode 0x3C
Script N(script_802456C8) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, 0x80248928),
    SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1769), 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerFlagBits, 0x400000, 1),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80244924)),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, SetPlayerFlagBits, 0x400000, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80245748) = SCRIPT({
    func_802419C0_B2DE30();
});

NpcAISettings N(aISettings_80245764) = {
    .moveSpeed = 0.7f,
    .moveTime = 0x1E,
    .waitTime = 0x14,
    .alertRadius = 0.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xFFFFFFFF,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_80245794) = SCRIPT({
    DoBasicAI(N(aISettings_80245764));
});

NpcSettings N(npcSettings_802457B4) = {
    .unk_00 = { 0, 0xAF, 0, 0x1 },
    .height = 0x23,
    .radius = 0x1C,
    .otherAI = &N(script_80245654),
    .onInteract = &N(script_802456C8),
    .ai = NULL,
    .onHit = NULL,
    .aux = &N(script_80245748),
    .onDefeat = NULL,
    .flags = 0xD01,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 unk_missing_802457E0[] = {
    0x00AF0001, 0x0023001C, N(script_80245654), N(script_802456C8), N(script_80245794), 0x00000000, N(script_80245748), 0x00000000,
    0x00000C01, 0x00000000, 0x00630010,
};

Script N(script_8024580C) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(0) += SI_SAVE_FLAG(1230);
    SI_VAR(0) += SI_SAVE_FLAG(1231);
    SI_VAR(0) += SI_SAVE_FLAG(1232);
    SI_VAR(0) += SI_SAVE_FLAG(1233);
    SI_VAR(0) += SI_SAVE_FLAG(1234);
});

Script N(script_8024587C) = SCRIPT({
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    if (SI_SAVE_FLAG(1223) == 1) {
        SpeakToPlayer(-1, 0xC20009, 0xC20003, 0, 0x100023);
    } else {
        SpeakToPlayer(-1, 0xC20009, 0xC20003, 0, 0x100024);
    }
    sleep 5;
    SetNpcFlagBits(-1, 256, 1);
    SetNpcAnimation(-1, 0xC20006);
    NpcMoveTo(-1, 8, 0xFFFFFF74, 25);
    SetNpcFlagBits(-1, 256, 0);
    SetNpcAnimation(-1, 0xC20003);
    sleep 5;
    UseSettingsFrom(0, 25, 15, 0xFFFFFF6A);
    SetPanTarget(0, 25, 15, 0xFFFFFF6A);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 16.0, -8.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    sleep 5;
    PlayerMoveTo(58, 0xFFFFFF74, 25);
    PlayerFaceNpc(-1, 0);
    0x802D2C14(1);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    sleep 30;
    SetNpcAnimation(-1, 0xC2000E);
    sleep 30;
    SpeakToPlayer(-1, 0xC2000E, 0xC2000E, 5, 0x100025);
    sleep 60;
    SetNpcAnimation(-1, 0xC20003);
    SpeakToPlayer(-1, 0xC20009, 0xC20003, 0, 0x100026);
    SI_VAR(0) = 42;
    SI_VAR(1) = 1;
    await N(script_802431E8);
    AddKeyItem(42);
    SpeakToPlayer(-1, 0xC20009, 0xC20003, 0, 0x100027);
    SI_SAVE_VAR(0) = 17;
    sleep 15;
    GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(3) += 25;
    SetPanTarget(0, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SetCamSpeed(0, 2.5);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetNpcFlagBits(0xFFFFFFFC, 64, 0);
    0x802D2C14(0);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) == 7) {
        spawn {
            sleep 15;
            PlayerFaceNpc(0xFFFFFFFC, 0);
        }
        DisablePartnerAI(0);
        SpeakToPlayer(0xFFFFFFFC, 0x70004, 0x70001, 2, 0x100028);
    } else {
        func_802426A8_B2EB18(7);
        SpeakToPlayer(0xFFFFFFFC, -1, -1, 5, 0x100029);
        SetNpcFlagBits(0xFFFFFFFC, 256, 1);
        sleep 15;
        GetNpcPos(0xFFFFFFFC, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        MakeLerp(SI_VAR(2), 85, 10, 0);
        loop {
            UpdateLerp();
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(3), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        sleep 10;
        spawn {
            sleep 10;
            PlayerFaceNpc(0xFFFFFFFC, 0);
        }
        DisablePartnerAI(0);
        ContinueSpeech(0xFFFFFFFC, 0x70004, 0x70001, 5, 0x10002A);
        sleep 10;
    }
    ContinueSpeech(0xFFFFFFFC, 0x70004, 0x70001, 5, 0x10002B);
    SetPlayerAnimation(0x80007);
    sleep 30;
    SpeakToPlayer(0xFFFFFFFC, 0x70004, 0x70001, 5, 0x10002C);
    sleep 10;
    EnablePartnerAI();
    ResetCam(0, 2.0);
});

Script N(script_Interact_80245ECC) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {
            if (SI_SAVE_FLAG(1223) == 0) {
                SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x100021);
                SI_SAVE_FLAG(1223) = 1;
            } else {
                SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x100022);
            }
        }
        < 16 {}
        < 17 {
            await N(script_8024587C);
        }
        < 21 {
            SpeakToPlayer(-1, 0xC20009, 0xC20003, 0, 0x10002D);
        }
        < 24 {
            if (SI_AREA_FLAG(4) == 0) {
                SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x10002E);
                SI_AREA_FLAG(4) = 1;
            } else {
                SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x10002F);
            }
        }
        < 25 {
            SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x100030);
        }
        < 39 {
            SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x100031);
        }
        < 42 {
            SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x100032);
        } else {
            SpeakToPlayer(-1, 0xC2000B, 0xC20005, 0, 0x100033);
        }
    }
});

Script N(script_Init_802460E4) = SCRIPT({
    BindNpcIdle(-1, 0);
    SetNpcAnimation(-1, 0xC20005);
    match SI_SAVE_VAR(0) {
        < 14 {
            BindNpcInteract(-1, N(script_Interact_80245ECC));
        }
        < 16 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
        < 17 {
            SetNpcAnimation(-1, 0xC20003);
            InterpNpcYaw(-1, 90, 1);
            SetNpcPos(-1, 0, 15, 0xFFFFFFCE);
            BindNpcInteract(-1, N(script_Interact_80245ECC));
        }
        < 21 {
            SetNpcAnimation(-1, 0xC20003);
            InterpNpcYaw(-1, 90, 1);
            SetNpcPos(-1, 30, 15, 0xFFFFFFE2);
            BindNpcInteract(-1, N(script_Interact_80245ECC));
        } else {
            BindNpcInteract(-1, N(script_Interact_80245ECC));
        }
    }
});

Script N(script_Interact_80246264) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {
            if (SI_AREA_FLAG(5) == 0) {
                SpeakToPlayer(-1, 0xC3000A, 0xC30009, 0, 0x100034);
                EndSpeech(-1, 0xC3000A, 0xC30009, 0);
                SI_AREA_FLAG(5) = 1;
            } else {
                SpeakToPlayer(-1, 0xC3000A, 0xC30009, 0, 0x100035);
            }
        }
        < 16 {
            if (SI_SAVE_FLAG(1224) == 0) {
                SpeakToPlayer(-1, 0xC3000C, 0xC3000B, 0, 0x100036);
            } else {
                SpeakToPlayer(-1, 0xC3000C, 0xC3000B, 0, 0x100037);
            }
        }
        < 17 {
            SpeakToPlayer(-1, 0xC3000A, 0xC30009, 0, 0x100038);
        }
        < 25 {
            SpeakToPlayer(-1, 0xC3000A, 0xC30009, 0, 0x100039);
        }
        < 39 {
            SpeakToPlayer(-1, 0xC3000A, 0xC30009, 0, 0x10003A);
        }
        < 42 {
            SpeakToPlayer(-1, 0xC3000A, 0xC30009, 0, 0x10003B);
        } else {
            SpeakToPlayer(-1, 0xC3000A, 0xC30009, 0, 0x10003C);
        }
    }
});

Script N(script_Init_80246464) = SCRIPT({
    SetNpcAnimation(-1, 0xC30009);
    SetNpcCollisionSize(-1, 40, 32);
    match SI_SAVE_VAR(0) {
        < 14 {}
        < 16 {
            SetNpcAnimation(-1, 0xC3000B);
        }
    }
}
BindNpcIdle(-1, 0);
BindNpcInteract(-1, N(script_Interact_80246264));
});

Script N(script_Interact_80246510) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {
            SpeakToPlayer(-1, 0x960404, 0x960401, 0, 0x10003D);
        }
        < 16 {
            await N(script_8024580C);
            if (SI_VAR(0) == 0) {
                if (SI_SAVE_FLAG(1224) == 0) {
                    SpeakToPlayer(-1, 0x960409, 0x960408, 0, 0x10003E);
                } else {
                    SpeakToPlayer(-1, 0x960409, 0x960408, 0, 0x10003F);
                }
            } else {
                if (SI_SAVE_FLAG(1232) == 0) {
                    SpeakToPlayer(-1, 0x960409, 0x960408, 0, 0x100040);
                } else {
                    SpeakToPlayer(-1, 0x960404, 0x960401, 0, 0x100041);
                }
            }
        }
        <= 16 {
            SpeakToPlayer(-1, 0x960404, 0x960401, 0, 0x100042);
        }
        < 39 {
            SpeakToPlayer(-1, 0x960404, 0x960401, 0, 0x100043);
        }
        < 42 {
            SpeakToPlayer(-1, 0x960404, 0x960401, 0, 0x100044);
        } else {
            SpeakToPlayer(-1, 0x960404, 0x960401, 0, 0x100045);
        }
    }
});

Script N(script_Idle_80246704) = SCRIPT({
    loop {
        NpcMoveTo(-1, 0xFFFFFDF8, 0xFFFFFEF2, 50);
        NpcMoveTo(-1, 0xFFFFFE5C, 0xFFFFFEF2, 50);
    }
});

Script N(script_Init_80246760) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {}
        < 16 {
            if (SI_SAVE_FLAG(1232) == 0) {
                SetNpcAnimation(-1, 0x960407);
                BindNpcIdle(-1, N(script_Idle_80246704));
            }
        }
    }
    BindNpcInteract(-1, N(script_Interact_80246510));
});

Script N(script_Interact_802467F0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {
            SpeakToPlayer(-1, 0x960104, 0x960101, 0, 0x100046);
        }
        < 16 {
            await N(script_8024580C);
            if (SI_VAR(0) == 0) {
                if (SI_SAVE_FLAG(1224) == 0) {
                    SpeakToPlayer(-1, 0x960109, 0x960108, 0, 0x100047);
                } else {
                    SpeakToPlayer(-1, 0x960109, 0x960108, 0, 0x100048);
                }
            } else {
                if (SI_SAVE_FLAG(1233) == 0) {
                    SpeakToPlayer(-1, 0x960109, 0x960108, 0, 0x100049);
                } else {
                    SpeakToPlayer(-1, 0x960104, 0x960101, 0, 0x10004A);
                }
            }
        }
        <= 16 {
            SpeakToPlayer(-1, 0x960104, 0x960101, 0, 0x10004B);
        }
        < 39 {
            SpeakToPlayer(-1, 0x960104, 0x960101, 0, 0x10004C);
        }
        < 42 {
            SpeakToPlayer(-1, 0x960104, 0x960101, 0, 0x10004D);
        } else {
            SpeakToPlayer(-1, 0x960104, 0x960101, 0, 0x10004E);
        }
    }
});

Script N(script_Idle_802469E4) = SCRIPT({
    loop {
        NpcMoveTo(-1, 180, 0xFFFFFDF8, 50);
        NpcMoveTo(-1, 80, 0xFFFFFDF8, 50);
    }
});

Script N(script_Init_80246A40) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {}
        < 16 {
            if (SI_SAVE_FLAG(1233) == 0) {
                SetNpcAnimation(-1, 0x960107);
                BindNpcIdle(-1, N(script_Idle_802469E4));
            }
        }
    }
    BindNpcInteract(-1, N(script_Interact_802467F0));
});

Script N(script_Interact_80246AD0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {
            SpeakToPlayer(-1, 0x960204, 0x960201, 0, 0x10004F);
        }
        < 16 {
            await N(script_8024580C);
            if (SI_VAR(0) == 0) {
                if (SI_SAVE_FLAG(1224) == 0) {
                    SpeakToPlayer(-1, 0x960209, 0x960208, 0, 0x100050);
                } else {
                    SpeakToPlayer(-1, 0x960209, 0x960208, 0, 0x100051);
                }
            } else {
                if (SI_SAVE_FLAG(1230) == 0) {
                    SpeakToPlayer(-1, 0x960209, 0x960208, 0, 0x100052);
                } else {
                    SpeakToPlayer(-1, 0x960204, 0x960201, 0, 0x100053);
                }
            }
        }
        <= 16 {
            SpeakToPlayer(-1, 0x960204, 0x960201, 0, 0x100054);
        }
        < 39 {
            SpeakToPlayer(-1, 0x960204, 0x960201, 0, 0x100055);
        }
        < 42 {
            SpeakToPlayer(-1, 0x960204, 0x960201, 0, 0x100056);
        } else {
            SpeakToPlayer(-1, 0x960204, 0x960201, 0, 0x100057);
        }
    }
});

Script N(script_Idle_80246CC4) = SCRIPT({
    loop {
        NpcMoveTo(-1, 600, 0xFFFFFF6A, 50);
        NpcMoveTo(-1, 500, 0xFFFFFF6A, 50);
    }
});

Script N(script_Init_80246D20) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 14 {}
        < 16 {
            if (SI_SAVE_FLAG(1230) == 0) {
                SetNpcAnimation(-1, 0x960207);
                BindNpcIdle(-1, N(script_Idle_80246CC4));
            }
        }
    }
    BindNpcInteract(-1, N(script_Interact_80246AD0));
});

s32 N(extraAnimationList_80246DB0)[] = {
    0x00C3000A, 0x00C3000C, 0x00C30009, 0x00C3000B, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80246DC4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242FA0),
        .pos = { 323.0, 30.0, 412.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_802460E4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003, 0x00C20003,
        },
        .tattle = 0x1A00BC,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80242FA0),
        .pos = { 172.0, 30.0, 418.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80246464),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001, 0x00C30001,
        },
        .extraAnimations = N(extraAnimationList_80246DB0),
        .tattle = 0x1A00BD,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024301C),
        .pos = { -520.0, 0.0, -270.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80246760),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0xFFFFFDF8, 0x00000000, 0xFFFFFEF2, 0xFFFFFE5C, 0x00000000, 0xFFFFFEF2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0xFFFFFDF8, 0x00000000, 0xFFFFFEF2, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00960401, 0x00960402, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401, 0x00960401,
        },
        .tattle = 0x1A00C0,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_8024301C),
        .pos = { 180.0, 0.0, -520.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80246A40),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000003, 0x000000B4, 0x00000000, 0xFFFFFDF8, 0x0000000A, 0x00000000, 0xFFFFFDF8, 0x00000064, 0x00000000, 0xFFFFFDA8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000005, 0x00000000, 0xFFFFFDD6, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00960101, 0x00960102, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101, 0x00960101,
        },
        .tattle = 0x1A00BE,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_8024301C),
        .pos = { 600.0, 0.0, -150.0 },
        .flags = 0x00002D09,
        .init = N(script_Init_80246D20),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x00000258, 0x00000000, 0xFFFFFF6A, 0x000001E5, 0x00000000, 0xFFFFFF24, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x00000258, 0x00000000, 0xFFFFFF6A, 0x00000064, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00960201, 0x00960202, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201, 0x00960201,
        },
        .tattle = 0x1A00BF,
    },
};

StaticNpc N(npcGroup_80247774)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802457B4),
        .pos = { -150.0, 15.0, 300.0 },
        .flags = 0x00002D09,
        .unk_1C = 0x00000001,
        .unk_20 = 0x00040200,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00AF0001, 0x00AF0002, 0x00AF0003, 0x00AF0003, 0x00AF0001, 0x00AF0001, 0x00AF0000, 0x00AF0000, 0x00AF0003, 0x00AF0003, 0x00AF0003, 0x00AF0003, 0x00AF0003, 0x00AF0003, 0x00AF0003, 0x00AF0003,
        },
        .tattle = 0x1A0002,
    },
};

NpcGroupList N(npcGroupList_80247964) = {
    NPC_GROUP(N(npcGroup_80246DC4), 0x00000000),
    NPC_GROUP(N(npcGroup_80247774), 0x00000000),
    {},
};

s32 pad_007988[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAB04, 25, 15, 0xFFFFFFC4, 0, 26, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1269));
});

s32 pad_0079D8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802479E0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80242750_B2EBC0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242750_B2EBC0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80247D40) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80242750_B2EBC0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242750_B2EBC0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242750_B2EBC0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80242750_B2EBC0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .count = 0x1,
    .modelIDs = { 0x8 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x7 },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80248368) =  { -220.0f, 15.0f, 292.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x46, 0x47 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x45 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x000000AC, 0xFFFFFDAC, 0x0000004B, 0xFFFFFF42, 0x0000000F, 0x00000000, 0xF9718894,
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802483C0) =  { -586.0f, 0.0f, -215.0f, 0.0f };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x42, 0x43 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x41 },
};

s32 N(treeDropList_Tree3)[] = {
    0x00000001, 0x000000AC, 0x0000024F, 0x0000004B, 0xFFFFFF24, 0x0000000F, 0x00000000, 0xF9718895,
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = &N(treeDropList_Tree3),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80248418) =  { 581.0f, 0.0f, -240.0f, 0.0f };

ModelIdList N(treeModelList_Tree4_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x6B },
};

ModelIdList N(treeModelList_Tree4_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x6A },
};

ShakeTree N(shakeTreeEvent_Tree4) = {
    .leaves = &N(treeModelList_Tree4_Leaves),
    .trunk = &N(treeModelList_Tree4_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_8024844C) =  { -636.0f, 0.0f, -235.0f, 0.0f };

Script N(script_8024845C) = SCRIPT({
    SI_AREA_FLAG(20) = 0;
    SI_AREA_FLAG(21) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80247D40) to TriggerFlag_WALL_HAMMER 29;
    bind N(script_ShakeTree_80247D40) to TriggerFlag_BOMB N(triggerCoord_80248368);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80247D40) to TriggerFlag_WALL_HAMMER 50;
    bind N(script_ShakeTree_80247D40) to TriggerFlag_BOMB N(triggerCoord_802483C0);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80247D40) to TriggerFlag_WALL_HAMMER 51;
    bind N(script_ShakeTree_80247D40) to TriggerFlag_BOMB N(triggerCoord_80248418);
    SI_VAR(0) = N(shakeTreeEvent_Tree4);
    bind N(script_ShakeTree_80247D40) to TriggerFlag_WALL_HAMMER 53;
    bind N(script_ShakeTree_80247D40) to TriggerFlag_BOMB N(triggerCoord_8024844C);
});

s32 pad_0085AC[] = {
    0x00000000,
};

// rodata: D_802485B0_B34A20

// rodata: D_802485B8_B34A28

// rodata: D_802485C0_B34A30

// rodata: D_802485C8_B34A38

// rodata: jtbl_802485D0_B34A40
