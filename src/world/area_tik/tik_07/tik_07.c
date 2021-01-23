#include "tik_07.h"

s32 pad_001018[2];
s32 pad_0028E8[2];
Script N(script_80242960);
s32 pad_00298C[1];
Script N(script_80242990);
Script N(script_80242CE4);
Script N(script_802430D4);
Script N(script_802431B0);
Script N(script_8024338C);
Script N(script_ExitWalk_802436C0);
Script N(script_8024371C);
Script N(script_8024374C);
Script N(script_8024377C);
Script N(script_802437D4);
Script N(script_8024382C);
Script N(main);
s32 pad_0039E8[2];
s32 N(unk_802439F0)[2];
s32 N(unk_802439F8)[4];
s32 N(unk_80243A08)[16];
s32 N(unk_80243A48)[3];
Script N(script_80243A54);
Script N(script_80243BB8);
Script N(script_MakeEntities);
Script N(script_802440C0);
Script N(script_80244590);
Script N(script_80244768);
s32 N(unk_80244914)[25];
Script N(script_80244978);
s32 pad_0049A4[3];
s32 N(unk_802449B0)[4];
Script N(script_802449C0);
Script N(script_80244B24);
Script N(script_80244B70);
Script N(script_80244BBC);
Script N(script_80244C08);
Script N(script_80244C54);
s32 pad_004CAC[1];
f32 N(floatTable_80244CB0)[6];
Script N(script_NpcAI_80244CF8);
StaticNpc N(npcGroup_80244D94)[1];
StaticNpc N(npcGroup_80244F84)[1];
NpcGroupList N(npcGroupList_80245174);
s32 pad_005198[2];
const char D_802451A0_87ED80[8]; // "tik_04"
const char D_802451A8_87ED88[8]; // "tik_07"
s32 pad_005204[3];

// text: func_80240000_879BE0

// text: func_80240020_879C00

// text: func_80240034_879C14

// text: func_802400F0_879CD0

// text: func_802401D0_879DB0

// text: func_8024023C_879E1C

// text: func_802402E0_879EC0

// text: func_802402FC_879EDC

// text: func_8024031C_879EFC

// text: func_80240348_879F28

// text: func_802403B4_879F94

// text: func_80240400_879FE0

// text: func_802404AC_87A08C

// text: func_802406FC_87A2DC

// text: func_80240728_87A308

// text: func_80240760_87A340

// text: func_802407F0_87A3D0

// text: func_80240824_87A404

// text: func_80240888_87A468

// text: func_802408E0_87A4C0

// text: func_80240E18_87A9F8

// text: func_80240F58_87AB38

// text: func_80240FA0_87AB80

// text: func_80240FE8_87ABC8

s32 pad_001018[] = {
    0x00000000, 0x00000000,
};

// text: func_80241020_87AC00

// text: func_80241390_87AF70

// text: func_802413F0_87AFD0

// text: func_802415A0_87B180

// text: N(UnkNpcAIFunc1)

// text: func_80241C88_87B868

// text: N(UnkNpcAIFunc2)

// text: func_80242044_87BC24

// text: func_802420B0_87BC90

// text: N(UnkNpcAIFunc3)

// text: func_80242248_87BE28

// text: func_802425D8_87C1B8

// text: func_802426FC_87C2DC

s32 pad_0028E8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -270.0f, -10.0f, 0.0f, 90.0f },
    { -275.0f, 90.0f, -110.0f, 180.0f },
    { 525.0f, 25.0f, -100.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190029,
};

Script N(script_80242960) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_00298C[] = {
    0x00000000,
};

Script N(script_80242990) = SCRIPT({
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
    func_802400F0_879CD0();
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
    func_80240020_879C00();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80242CE4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_879CD0();
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
        func_8024023C_879E1C(1.0);
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

Script N(script_802430D4) = SCRIPT({
    func_80240034_879C14();
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
    await N(script_802431B0);
});

Script N(script_802431B0) = SCRIPT({
    func_80240000_879BE0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_879CD0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_879CD0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_879DB0();
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

Script N(script_8024338C) = SCRIPT({
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
    func_80240000_879BE0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_879CD0();
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
            func_8024023C_879E1C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_ExitWalk_802436C0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802451A0_87ED80, 1);
    sleep 100;
});

Script N(script_8024371C) = SCRIPT({
    GotoMap(D_802451A8_87ED88, 2);
    sleep 100;
});

Script N(script_8024374C) = SCRIPT({
    GotoMap(D_802451A8_87ED88, 1);
    sleep 100;
});

Script N(script_8024377C) = SCRIPT({
    group 27;
    SI_VAR(10) = 1;
    SI_VAR(11) = 14;
    SI_VAR(12) = N(script_8024371C);
    await N(script_802430D4);
});

Script N(script_802437D4) = SCRIPT({
    group 27;
    SI_VAR(10) = 2;
    SI_VAR(11) = 22;
    SI_VAR(12) = N(script_8024374C);
    await N(script_802430D4);
});

Script N(script_8024382C) = SCRIPT({
    bind N(script_ExitWalk_802436C0) to 0x80000 25;
    bind N(script_8024377C) to TriggerFlag_FLOOR_TOUCH 14;
    bind N(script_802437D4) to TriggerFlag_FLOOR_TOUCH 22;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(6);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(1, N(npcGroupList_80245174));
    await N(script_MakeEntities);
    spawn N(script_80242960);
    spawn N(script_80244978);
    spawn N(script_80244C54);
    sleep 1;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_VAR(0) = N(script_8024382C);
        spawn EnterWalk;
    } else {
        SI_VAR(10) = N(script_8024382C);
        spawn N(script_80242990);
    }
    sleep 1;
});

s32 pad_0039E8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802439F0)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_802439F8)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80243A08)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80243A48)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80243A54) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240824_87A404(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240E18_87A9F8(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240E18_87A9F8(50, 50);
    }
    spawn {
        sleep 3;
        func_8024031C_879EFC(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_80240888_87A468();
        func_80240F58_87AB38();
        sleep 5;
        func_80240FA0_87AB80();
        sleep 5;
        func_80240F58_87AB38();
    }
    sleep 3;
    func_802408E0_87A4C0(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_80243BB8) = SCRIPT({
    if (SI_SAVE_FLAG(433) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240FE8_87ABC8();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_802402E0_879EC0();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240760_87A340(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240400_879FE0();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_802407F0_87A3D0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802402FC_879EDC();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802404AC_87A08C();
    if (SI_VAR(0) == -1) {
        func_802407F0_87A3D0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802402FC_879EDC();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_802406FC_87A2DC(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_802407F0_87A3D0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802402FC_879EDC();
        return;
    }
    await N(script_80243A54);
    func_80240348_879F28(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(433) = 1;
    func_802407F0_87A3D0(SI_VAR(9));
    func_80240728_87A308();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_802402FC_879EDC();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(348, 306, 90, 0xFFFFFF98, 17, SI_SAVE_FLAG(404));
    MakeEntity(0x802EA910, 820, 70, 0xFFFFFFFB, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(433));
    AssignScript(N(script_80243BB8));
});

Script N(script_802440C0) = SCRIPT({
    SI_VAR(1) = SI_ARRAY(5);
    SI_VAR(1) += 1;
    SI_VAR(2) = SI_ARRAY(0);
    SI_VAR(3) = SI_ARRAY(1);
    SI_VAR(4) = SI_ARRAY(5);
    SI_VAR(4) += 2;
    SI_VAR(5) = SI_ARRAY(0);
    SI_VAR(6) = SI_ARRAY(1);
    SI_VAR(7) = SI_ARRAY(5);
    SI_VAR(7) += 3;
    SI_VAR(8) = SI_ARRAY(0);
    SI_VAR(9) = SI_ARRAY(1);
    SI_VAR(10) = SI_ARRAY(5);
    SI_VAR(10) += 4;
    SI_VAR(11) = SI_ARRAY(0);
    SI_VAR(12) = SI_ARRAY(1);
    EnableModel(SI_VAR(1), 1);
    EnableModel(SI_VAR(4), 1);
    EnableModel(SI_VAR(7), 1);
    EnableModel(SI_VAR(10), 1);
    loop 5 {
        SI_VAR(0) += 1;
        SI_VAR(2) += 1;
        SI_VAR(3) += 1;
        TranslateModel(SI_VAR(1), SI_VAR(2), SI_VAR(0), SI_VAR(3));
        ScaleModel(SI_VAR(1), 0.5, 0.5, 0.5);
        SI_VAR(5) += -1;
        SI_VAR(6) += 1;
        TranslateModel(SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(6));
        ScaleModel(SI_VAR(4), 0.5, 0.5, 0.5);
        SI_VAR(8) += 1;
        SI_VAR(9) += -1;
        TranslateModel(SI_VAR(7), SI_VAR(8), SI_VAR(0), SI_VAR(9));
        ScaleModel(SI_VAR(7), 0.5, 0.5, 0.5);
        SI_VAR(11) += -1;
        SI_VAR(12) += -1;
        TranslateModel(SI_VAR(10), SI_VAR(11), SI_VAR(0), SI_VAR(12));
        ScaleModel(SI_VAR(10), 0.5, 0.5, 0.5);
        sleep 1;
    }
    loop 5 {
        SI_VAR(0) += -1;
        SI_VAR(2) += 1;
        SI_VAR(3) += 1;
        TranslateModel(SI_VAR(1), SI_VAR(2), SI_VAR(0), SI_VAR(3));
        ScaleModel(SI_VAR(1), 0.5, 0.5, 0.5);
        SI_VAR(5) += -1;
        SI_VAR(6) += 1;
        TranslateModel(SI_VAR(4), SI_VAR(5), SI_VAR(0), SI_VAR(6));
        ScaleModel(SI_VAR(4), 0.5, 0.5, 0.5);
        SI_VAR(8) += 1;
        SI_VAR(9) += -1;
        TranslateModel(SI_VAR(7), SI_VAR(8), SI_VAR(0), SI_VAR(9));
        ScaleModel(SI_VAR(7), 0.5, 0.5, 0.5);
        SI_VAR(11) += -1;
        SI_VAR(12) += -1;
        TranslateModel(SI_VAR(10), SI_VAR(11), SI_VAR(0), SI_VAR(12));
        ScaleModel(SI_VAR(10), 0.5, 0.5, 0.5);
        sleep 1;
    }
    EnableModel(SI_VAR(1), 0);
    EnableModel(SI_VAR(4), 0);
    EnableModel(SI_VAR(7), 0);
    EnableModel(SI_VAR(10), 0);
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80244590) = {
    SI_CMD(ScriptOpcode_SET_GROUP, 0),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(5), SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, CloneModel, 16, SI_VAR(5)),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(5), SI_ARRAY(0), SI_ARRAY(2), SI_ARRAY(1)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(5), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, RandInt, 200, SI_VAR(0)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 50),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 1),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_ARRAY(2), SI_ARRAY(3), SI_ARRAY(4), 1),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(5), SI_ARRAY(0), SI_VAR(0), SI_ARRAY(1)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80241020_87AC00, SI_ARRAY(5)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, EnableModel, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 1014),
    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_802440C0)),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80244768) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(15), 10000),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(1)),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(9)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(9)),
            SI_CMD(ScriptOpcode_USE_FLAGS, 6),
            SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(10)),
            SI_CMD(ScriptOpcode_CALL, RandInt, SI_VAR(4), SI_VAR(11)),
            SI_CMD(ScriptOpcode_CALL, RandInt, SI_VAR(5), SI_VAR(12)),
            SI_CMD(ScriptOpcode_SET, SI_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET, SI_VAR(14), SI_VAR(3)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(13), SI_VAR(11)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(14), SI_VAR(12)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), SI_VAR(13)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), SI_VAR(14)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), SI_VAR(6)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), SI_VAR(7)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), SI_VAR(8)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), SI_VAR(15)),
            SI_CMD(ScriptOpcode_SPAWN, N(script_80244590)),
            SI_CMD(ScriptOpcode_ADD, SI_VAR(15), 5),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, EnableModel, 16, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80244914)[] = {
    0x00000003, 0xFFFFFEF8, 0xFFFFFFC3, 0x00000096, 0x000000BC, 0x000000E6, 0xFFFFFFF6, 0x0000003C,
    0x00000002, 0x0000001F, 0xFFFFFFEC, 0x00000129, 0x0000009C, 0x000000E6, 0xFFFFFFF6, 0x0000003C,
    0x00000002, 0x0000006C, 0xFFFFFF8B, 0x00000038, 0x0000002B, 0x000000E6, 0x0000005A, 0x00000028,
    0x00000001,
};

Script N(script_80244978) = SCRIPT({
    SI_VAR(0) = N(unk_80244914);
    spawn N(script_80244768);
});

s32 pad_0049A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802449B0)[] = {
    0x00000010, 0x00000011, 0x00000012, 0x00000013,
};

Script N(script_802449C0) = SCRIPT({
    group 239;
    ParentColliderToModel(SI_VAR(11), SI_VAR(10));
    SI_VAR(0) = 0.0;
    SI_VAR(13) = -90.0;
    SI_VAR(13) -=f SI_VAR(12);
0:
    SI_VAR(1) =f SI_VAR(12);
1:
    func_80241390_87AF70();
    SI_VAR(0) += 1.5;
    SI_VAR(1) += 1.5;
    TranslateModel(SI_VAR(10), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(11));
    sleep 1;
    if (SI_VAR(1) < 310.0) {
        goto 1;
    }
    TranslateModel(SI_VAR(10), 0, SI_VAR(13), 0);
    SI_VAR(0) =f SI_VAR(13);
    SI_VAR(12) = -90.0;
    sleep 1;
    goto 0;
});

Script N(script_80244B24) = SCRIPT({
    SI_VAR(10) = 19;
    SI_VAR(11) = 17;
    SI_VAR(12) = 110;
    await N(script_802449C0);
});

Script N(script_80244B70) = SCRIPT({
    SI_VAR(10) = 18;
    SI_VAR(11) = 16;
    SI_VAR(12) = 10;
    await N(script_802449C0);
});

Script N(script_80244BBC) = SCRIPT({
    SI_VAR(10) = 20;
    SI_VAR(11) = 18;
    SI_VAR(12) = 0xFFFFFFA6;
    await N(script_802449C0);
});

Script N(script_80244C08) = SCRIPT({
    SI_VAR(10) = 21;
    SI_VAR(11) = 19;
    SI_VAR(12) = 0xFFFFFF42;
    await N(script_802449C0);
});

Script N(script_80244C54) = SCRIPT({
    ModifyColliderFlags(0, 20, 0x7FFFFE00);
    spawn N(script_80244B24);
    spawn N(script_80244B70);
    spawn N(script_80244BBC);
    spawn N(script_80244C08);
});

s32 pad_004CAC[] = {
    0x00000000,
};

f32 N(floatTable_80244CB0)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80244CC8) = {
    .moveSpeed = 2.0f,
    .moveTime = 0,
    .waitTime = 0,
    .alertRadius = 80.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x5,
    .chaseSpeed = 3.0f,
    .unk_1C = 0xA,
    .unk_20 = 0x2,
    .chaseRadius = 100.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244CF8) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0xFFFFFCAE);
    SetSelfVar(6, 60);
    SetSelfVar(1, 600);
    func_802426FC_87C2DC(N(aISettings_80244CC8));
});

NpcSettings N(npcSettings_80244D68) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x15,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244CF8),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xB,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80244D94)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244D68),
        .pos = { 230.0, 50.0, 50.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0x000000E6, 0x00000032, 0x00000032, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000E6, 0x00000032, 0x00000032, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00280301, 0x00280303, 0x00280304, 0x00280304, 0x00280301, 0x00280301, 0x00280306, 0x00280306, 0x00280305, 0x00280304, 0x00280300, 0x00280300, 0x00280300, 0x00280300, 0x00280300, 0x00280300,
        },
    },
};

StaticNpc N(npcGroup_80244F84)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80244D68),
        .pos = { 535.0, 50.0, 20.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 20,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_SLEEPY_SHEEP, 5 } },
        .movement = { 0x00000217, 0x00000032, 0x00000014, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000217, 0x00000032, 0x00000014, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00280301, 0x00280303, 0x00280304, 0x00280304, 0x00280301, 0x00280301, 0x00280306, 0x00280306, 0x00280305, 0x00280304, 0x00280300, 0x00280300, 0x00280300, 0x00280300, 0x00280300, 0x00280300,
        },
    },
};

NpcGroupList N(npcGroupList_80245174) = {
    NPC_GROUP(N(npcGroup_80244D94), 0x1A0C0002),
    NPC_GROUP(N(npcGroup_80244F84), 0x1A0D0002),
    {},
};

s32 pad_005198[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802451A0_87ED80

// rodata: D_802451A8_87ED88

// rodata: D_802451B0_87ED90

// rodata: D_802451B8_87ED98

// rodata: D_802451C0_87EDA0

// rodata: jtbl_802451C8_87EDA8

s32 pad_005204[] = {
    0x00000000, 0x00000000, 0x00000000,
};
