#include "kzn_02.h"

s32 pad_00030C[1];
s32 pad_0004D4[3];
s32 pad_002724[3];
Script N(script_UpdateTexturePan_80242890);
Script N(script_8024292C);
Script N(script_80242A48);
Script N(script_ExitWalk_80242B64);
Script N(script_ExitWalk_80242BC0);
Script N(script_80242C1C);
Script N(script_EnterWalk_80242C64);
Script N(script_80242CCC);
s32 N(lavaResetList_80242F7C)[36];
Script N(main);
s32 pad_003268[2];
Script N(script_80243270);
Script N(script_80243430);
Script N(script_80243834);
Script N(script_80243914);
Script N(script_802439F4);
Script N(script_80243AD4);
Script N(script_80243BB4);
Script N(script_80243C94);
Script N(script_80243D74);
Script N(script_80243F18);
Script N(script_80243F70);
Script N(script_80243FC8);
Script N(script_80244020);
Script N(script_80244078);
Script N(script_802440D0);
Script N(script_80244128);
Script N(script_802444A4);
f32 N(floatTable_80244900)[6];
Script N(script_NpcAI_80244948);
s32 N(unk_80244A10)[1];
Script N(script_80244A14);
Script N(script_80244A44);
s32 N(unk_80244A74)[1];
s32 N(unk_80244A78)[1];
Script N(script_80244A7C);
Script N(script_80244BC0);
Script N(script_80244C10);
Script N(script_80244C90);
Script N(script_80244FB4);
Script N(script_80245024);
s32 N(unk_8024531C)[2];
Script N(script_80245324);
Script N(script_80245374);
Script N(script_Idle_802453D8);
Script N(script_Interact_80245C9C);
Script N(script_Init_80245D80);
StaticNpc N(npcGroup_80245E74)[1];
StaticNpc N(npcGroup_80246064)[1];
NpcGroupList N(npcGroupList_80246254);
s32 pad_006278[2];
Script N(script_80246280);
Script N(script_802463E4);
s32 N(unk_802464A4)[1];
Script N(script_802464A8);
s32 pad_0064EC[1];
const char D_802464F0_C60C30[8]; // "kzn_01"
const char D_802464F8_C60C38[8]; // "kzn_03"
s32 pad_006554[1];
s32 pad_0065B4[3];
const char D_802465C0_C60D00[8]; // "kzn_02"
s32 pad_0065C8[2];

// text: func_80240000_C5A740

// text: func_80240124_C5A864

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_C5AA50

// text: func_80240384_C5AAC4

// text: func_802403B0_C5AAF0

// text: func_802403DC_C5AB1C

s32 pad_0004D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802404E0_C5AC20

// text: func_80240690_C5ADD0

// text: N(UnkNpcAIFunc1)

// text: func_80240D78_C5B4B8

// text: N(UnkNpcAIFunc2)

// text: func_80241134_C5B874

// text: func_802411A0_C5B8E0

// text: N(UnkNpcAIFunc3)

// text: func_80241338_C5BA78

// text: func_802416C8_C5BE08

// text: func_802417EC_C5BF2C

// text: func_802419D8_C5C118

// text: func_80241B08_C5C248

// text: func_80241D88_C5C4C8

// text: func_80241DE4_C5C524

// text: func_80241FCC_C5C70C

// text: func_80242080_C5C7C0

// text: func_802420E4_C5C824

// text: func_80242140_C5C880

// text: func_80242310_C5CA50

// text: func_80242364_C5CAA4

// text: func_8024239C_C5CADC

// text: func_80242438_C5CB78

// text: func_80242528_C5CC68

// text: func_802426B4_C5CDF4

// text: func_802426F8_C5CE38

s32 pad_002724[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80242730_C5CE70

EntryList N(entryList) = {
    { -810.0f, 20.0f, -10.0f, 90.0f },
    { 810.0f, 20.0f, -10.0f, 270.0f },
    { -810.0f, 20.0f, -10.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190104,
};

Script N(script_UpdateTexturePan_80242890) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C5A740();
                    return;
                }
            }
        }
    }
    func_80240124_C5A864();
});

Script N(script_8024292C) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 3);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 600;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242890);
    }
});

Script N(script_80242A48) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 4);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 500;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242890);
    }
});

Script N(script_ExitWalk_80242B64) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802464F0_C60C30, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242BC0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802464F8_C60C38, 0);
    sleep 100;
});

Script N(script_80242C1C) = SCRIPT({
    bind N(script_ExitWalk_80242B64) to 0x80000 9;
    bind N(script_ExitWalk_80242BC0) to 0x80000 13;
});

Script N(script_EnterWalk_80242C64) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 2) {
        SI_VAR(0) = N(script_80242C1C);
        spawn EnterWalk;
        sleep 1;
    } else {
    }
});

Script N(script_80242CCC) = SCRIPT({
    group 0;
    EnableTexPanning(66, 1);
    EnableTexPanning(68, 1);
    EnableTexPanning(63, 1);
    EnableTexPanning(64, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 200;
        SI_VAR(2) = 0;
        SI_VAR(3) = 400;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242890);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 300;
        SI_VAR(2) = 0xFFFFFE0C;
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
        spawn N(script_UpdateTexturePan_80242890);
    }
    spawn {
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(13, 0, SI_VAR(0), 0);
            SI_VAR(0) += 0x8000;
            sleep 6;
        }
    }
});

s32 N(lavaResetList_80242F7C)[] = {
    0x00000018, 0xC4458000, 0x41A00000, 0x00000000, 0x00000019, 0xC4458000, 0x41A00000, 0x00000000,
    0x00000010, 0xC37A0000, 0x41A00000, 0x00000000, 0x00000011, 0xC37A0000, 0x41A00000, 0x00000000,
    0x00000014, 0x437A0000, 0x41A00000, 0x41700000, 0x00000015, 0x437A0000, 0x41A00000, 0x41700000,
    0x0000001C, 0x44458000, 0x41A00000, 0x00000000, 0x0000001D, 0x44458000, 0x41A00000, 0x00000000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0001);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80246254));
    ModifyColliderFlags(3, 0, 3);
    ModifyColliderFlags(3, 1, 3);
    ModifyColliderFlags(3, 2, 3);
    ModifyColliderFlags(3, 3, 3);
    ModifyColliderFlags(3, 4, 3);
    ModifyColliderFlags(3, 5, 3);
    ModifyColliderFlags(3, 6, 3);
    ModifyColliderFlags(3, 85, 3);
    ModifyColliderFlags(3, 86, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80242F7C));
    }
    spawn N(script_80242CCC);
    SI_VAR(0) = 73;
    spawn N(script_8024292C);
    SI_VAR(0) = 74;
    spawn N(script_80242A48);
    await N(script_802444A4);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        await N(script_802464A8);
        return;
    }
    spawn N(script_EnterWalk_80242C64);
    sleep 1;
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
});

s32 pad_003268[] = {
    0x00000000, 0x00000000,
};

Script N(script_80243270) = SCRIPT({
    SI_VAR(0) = 0.0;
0:
    TranslateModel(9, 0, SI_VAR(0), 0);
    TranslateModel(11, 0, SI_VAR(0), 0);
    TranslateModel(10, 0, SI_VAR(0), 0);
    UpdateColliderTransform(31);
    UpdateColliderTransform(32);
    UpdateColliderTransform(33);
    sleep 1;
    SI_VAR(0) -= 0.7001953125;
    if (SI_VAR(0) >= 0xFFFFFFEA) {
        goto 0;
    }
1:
    SI_VAR(0) += 1.1005859375;
    TranslateModel(9, 0, SI_VAR(0), 0);
    TranslateModel(11, 0, SI_VAR(0), 0);
    TranslateModel(10, 0, SI_VAR(0), 0);
    UpdateColliderTransform(31);
    UpdateColliderTransform(32);
    UpdateColliderTransform(33);
    sleep 1;
    if (SI_VAR(0) < 0) {
        goto 1;
    }
});

Script N(script_80243430) = SCRIPT({
    group 11;
    func_80240384_C5AAC4(SI_VAR(10));
    SI_VAR(0) = 0.0;
0:
    TranslateModel(SI_VAR(1), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(3), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(4));
    UpdateColliderTransform(SI_VAR(5));
    UpdateColliderTransform(SI_VAR(6));
    SI_VAR(0) -= 0.6005859375;
    if (SI_VAR(0) < 0xFFFFFFE2) {
        SI_VAR(0) = 0xFFFFFFE2;
    }
    sleep 1;
    func_80240384_C5AAC4(SI_VAR(11));
    GetPlayerActionState(SI_VAR(12));
    if (SI_VAR(11) == SI_VAR(4)) {
        if (SI_VAR(12) != 3) {
            goto 0;
        }
    }
    if (SI_VAR(11) == SI_VAR(5)) {
        if (SI_VAR(12) != 3) {
            goto 0;
        }
    }
1:
    if (SI_VAR(0) <= 0xFFFFFFEC) {
        IsPlayerWithin(SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(13));
        if (SI_VAR(13) == 0) {
            SI_VAR(0) += 1.1005859375;
        }
    } else {
        SI_VAR(0) += 1.1005859375;
    }
    TranslateModel(SI_VAR(1), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(3), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(4));
    UpdateColliderTransform(SI_VAR(5));
    UpdateColliderTransform(SI_VAR(6));
    sleep 1;
    func_80240384_C5AAC4(SI_VAR(11));
    GetPlayerActionState(SI_VAR(12));
    func_802403B0_C5AAF0(SI_VAR(13));
    if (SI_VAR(13) == 8) {
        IsPlayerWithin(SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(13));
        if (SI_VAR(13) == 1) {
            goto 0;
        } else {
            goto 15;
        }
    } else {
    15:
        if (SI_VAR(11) == SI_VAR(4)) {
            if (SI_VAR(12) != 3) {
                goto 0;
            }
        }
        if (SI_VAR(11) == SI_VAR(5)) {
            if (SI_VAR(12) != 3) {
                goto 0;
            }
        }
    }
    if (SI_VAR(0) < 0) {
        goto 1;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80243834) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(1), 0),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 9),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 11),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 10),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 31),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 32),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 33),
        SI_CMD(ScriptOpcode_CALL, func_80240310_C5AA50, 11),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 50),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243430)),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80243914) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(2), 0),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 13),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 15),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 14),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 35),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 36),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 37),
        SI_CMD(ScriptOpcode_CALL, func_80240310_C5AA50, 15),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 60),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243430)),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_802439F4) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(3), 0),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 17),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 19),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 18),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 39),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 40),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 41),
        SI_CMD(ScriptOpcode_CALL, func_80240310_C5AA50, 19),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 50),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243430)),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80243AD4) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(4), 0),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 30),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 29),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 31),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 47),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 48),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 49),
        SI_CMD(ScriptOpcode_CALL, func_80240310_C5AA50, 29),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 50),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243430)),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80243BB4) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(5), 0),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 26),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 25),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 27),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 51),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 52),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 53),
        SI_CMD(ScriptOpcode_CALL, func_80240310_C5AA50, 25),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 60),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243430)),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80243C94) = {
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(6), 0),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 22),
        SI_CMD(ScriptOpcode_SET, SI_VAR(2), 21),
        SI_CMD(ScriptOpcode_SET, SI_VAR(3), 23),
        SI_CMD(ScriptOpcode_SET, SI_VAR(4), 55),
        SI_CMD(ScriptOpcode_SET, SI_VAR(5), 56),
        SI_CMD(ScriptOpcode_SET, SI_VAR(6), 57),
        SI_CMD(ScriptOpcode_CALL, func_80240310_C5AA50, 21),
        SI_CMD(ScriptOpcode_SET, SI_VAR(9), 50),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80243430)),
        SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80243D74) = SCRIPT({
    group 11;
0:
    MakeLerp(0, 0xFFFFFFFD, 30, 0);
1:
    UpdateLerp();
    TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(3), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(4), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 1;
    }
    MakeLerp(0xFFFFFFFD, 0, 30, 0);
2:
    UpdateLerp();
    TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(3), 0, SI_VAR(0), 0);
    TranslateModel(SI_VAR(4), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 2;
    }
    goto 0;
});

Script N(script_80243F18) = SCRIPT({
    sleep 5;
    SI_VAR(2) = 9;
    SI_VAR(3) = 11;
    SI_VAR(4) = 10;
    await N(script_80243D74);
});

Script N(script_80243F70) = SCRIPT({
    sleep 10;
    SI_VAR(2) = 13;
    SI_VAR(3) = 15;
    SI_VAR(4) = 14;
    await N(script_80243D74);
});

Script N(script_80243FC8) = SCRIPT({
    sleep 5;
    SI_VAR(2) = 17;
    SI_VAR(3) = 19;
    SI_VAR(4) = 18;
    await N(script_80243D74);
});

Script N(script_80244020) = SCRIPT({
    sleep 10;
    SI_VAR(2) = 30;
    SI_VAR(3) = 29;
    SI_VAR(4) = 31;
    await N(script_80243D74);
});

Script N(script_80244078) = SCRIPT({
    sleep 5;
    SI_VAR(2) = 26;
    SI_VAR(3) = 25;
    SI_VAR(4) = 27;
    await N(script_80243D74);
});

Script N(script_802440D0) = SCRIPT({
    sleep 10;
    SI_VAR(2) = 22;
    SI_VAR(3) = 21;
    SI_VAR(4) = 23;
    await N(script_80243D74);
});

Script N(script_80244128) = SCRIPT({
    group 11;
    ParentColliderToModel(43, 34);
    ParentColliderToModel(44, 33);
    ParentColliderToModel(45, 35);
    SI_VAR(0) = 0xFFFFFF97;
    SI_VAR(3) = 0;
    loop {
        MakeLerp(SI_VAR(0), 110, 215, 0);
        loop {
            UpdateLerp();
            TranslateGroup(36, SI_VAR(0), 0, 0);
            UpdateColliderTransform(43);
            UpdateColliderTransform(44);
            UpdateColliderTransform(45);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_802403DC_C5AB1C(SI_VAR(4), 43, 44);
            if (SI_VAR(0) > 95) {
                func_802403B0_C5AAF0(SI_VAR(9));
                if (SI_VAR(9) == 8) {
                    func_80240384_C5AAC4(SI_VAR(2));
                    if (SI_VAR(2) == 86) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
        MakeLerp(SI_VAR(0), 0xFFFFFF97, 215, 0);
        loop {
            UpdateLerp();
            TranslateGroup(36, SI_VAR(0), 0, 0);
            UpdateColliderTransform(43);
            UpdateColliderTransform(44);
            UpdateColliderTransform(45);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_802403DC_C5AB1C(SI_VAR(4), 43, 44);
            if (SI_VAR(0) < 0xFFFFFFA6) {
                func_802403B0_C5AAF0(SI_VAR(9));
                if (SI_VAR(9) == 8) {
                    func_80240384_C5AAC4(SI_VAR(2));
                    if (SI_VAR(2) == 85) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_802444A4) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 6),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 0),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 31, 9),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 32, 11),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 33, 10),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243834), TriggerFlag_FLOOR_TOUCH, 31, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243834), TriggerFlag_FLOOR_TOUCH, 32, 1, 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 35, 13),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 36, 15),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 37, 14),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243914), TriggerFlag_FLOOR_TOUCH, 35, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243914), TriggerFlag_FLOOR_TOUCH, 36, 1, 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 39, 17),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 40, 19),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 41, 18),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802439F4), TriggerFlag_FLOOR_TOUCH, 39, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802439F4), TriggerFlag_FLOOR_TOUCH, 40, 1, 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 47, 30),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 48, 29),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 49, 31),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243AD4), TriggerFlag_FLOOR_TOUCH, 47, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243AD4), TriggerFlag_FLOOR_TOUCH, 48, 1, 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 51, 26),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 52, 25),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 53, 27),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243BB4), TriggerFlag_FLOOR_TOUCH, 51, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243BB4), TriggerFlag_FLOOR_TOUCH, 52, 1, 0),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 55, 22),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 56, 21),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 57, 23),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243C94), TriggerFlag_FLOOR_TOUCH, 55, 1, 0),
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(10)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243C94), TriggerFlag_FLOOR_TOUCH, 56, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243F18)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243F70)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80243FC8)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80244020)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80244078)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802440D0)),
    SI_CMD(ScriptOpcode_SPAWN, N(script_80244128)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

f32 N(floatTable_80244900)[] = {
    4.5f, 3.5f, 2.6f, 2.0f, 1.5f, 20.0f,
};

NpcAISettings N(aISettings_80244918) = {
    .moveSpeed = 0.8f,
    .moveTime = 0x64,
    .waitTime = 0,
    .alertRadius = 90.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x4,
    .chaseSpeed = 3.2f,
    .unk_1C = 0xA,
    .unk_20 = 0x1,
    .chaseRadius = 100.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244948) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0);
    SetSelfVar(6, 0);
    SetSelfVar(1, 150);
    func_80241DE4_C5C524(N(aISettings_80244918));
});

NpcSettings N(npcSettings_802449B8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244948),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802449E4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
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

s32 N(unk_80244A10)[] = {
    0x00000000,
};

Script N(script_80244A14) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80244A44) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80244A74)[] = {
    0x00000000,
};

s32 N(unk_80244A78)[] = {
    0x00000000,
};

Script N(script_80244A7C) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80242140_C5C880(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80242364_C5CAA4(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244BC0) = {
    SI_CMD(ScriptOpcode_CALL, func_8024239C_C5CADC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244A7C), 0x10, 0, D_802465D0_915C80, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80242310_C5CA50, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80244C10) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_80242528_C5CC68(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80244C90) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80242528_C5CC68(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_80244C10);
            SetNpcAnimation(0xFFFFFFFC, 0x40002);
            GetAngleBetweenNPCs(SI_VAR(9), 0xFFFFFFFC, SI_VAR(11));
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            GetNpcPos(SI_VAR(9), SI_VAR(6), SI_VAR(7), SI_VAR(8));
            SetNpcFlagBits(0xFFFFFFFC, 256, 1);
            if (SI_VAR(11) <= 180) {
                SI_VAR(6) += 20;
            } else {
                SI_VAR(6) += 0xFFFFFFEC;
            }
            SI_VAR(7) += 10;
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            NpcJump1(0xFFFFFFFC, SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
            kill SI_VAR(10);
            RemoveItemEntity(SI_VAR(0));
            sleep 20;
            GetNpcYaw(0xFFFFFFFC, SI_VAR(10));
            SI_VAR(10) += 180;
            InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
            sleep 5;
            NpcJump1(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20);
            SetNpcAnimation(0xFFFFFFFC, 0x40001);
            NpcFaceNpc(0xFFFFFFFC, SI_VAR(9), 0);
            sleep 5;
            SetNpcFlagBits(0xFFFFFFFC, 256, 0);
            EnablePartnerAI();
            sleep 5;
        }
    }
    func_80242364_C5CAA4(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244FB4) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_8024239C_C5CADC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244C90), 0x10, 0, D_802465D0_915C80, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80242310_C5CA50, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80245024) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_802426B4_C5CDF4();
    GetCurrentPartnerID(SI_VAR(0));
    FindKeyItem(SI_VAR(5), SI_VAR(1));
    if (SI_VAR(0) == 4) {
        if (SI_VAR(1) != -1) {
            DisablePartnerAI(0);
            PlayerFaceNpc(SI_VAR(2), 0);
            sleep 1;
            GetNpcPos(SI_VAR(2), SI_VAR(13), SI_VAR(0), SI_VAR(14));
            GetNpcPos(0xFFFFFFFC, SI_VAR(13), SI_VAR(14), SI_VAR(15));
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            SI_VAR(0) += 10;
            NpcJump1(0xFFFFFFFC, SI_VAR(13), SI_VAR(0), SI_VAR(15), 10);
            SpeakToNpc(0xFFFFFFFC, 0x40006, 0x40001, 0, SI_VAR(2), SI_VAR(7));
            EnablePartnerAI();
            await N(script_80244FB4);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                }
                else {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(9));
                    if (SI_VAR(10) != 0) {
                        SpeakToPlayer(SI_VAR(2), SI_VAR(3), SI_VAR(4), 0, SI_VAR(10));
                    }
                    EnablePartnerAI();
                    if (SI_VAR(6) != 0) {
                        SI_VAR(0) = SI_VAR(6);
                        SI_VAR(1) = 1;
                        await N(script_80244A14);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_802426F8_C5CE38();
});

s32 N(unk_8024531C)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80245324) = SCRIPT({
    func_80242438_C5CB78(0, 0xB60008, 0xB60001, 84, 0, 0x1000E4, 0x1000E5, 0x1000E6, 0x1000E7, N(unk_8024531C));
    await N(script_80245024);
});

Script N(script_80245374) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80244A14);
        AddStarPieces(1);
    }
});

Script N(script_Idle_802453D8) = SCRIPT({
    DisablePlayerInput(1);
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFCC7) {
            break;
        }
    }
    sleep 30;
    AdjustCam(0, 5.0, 100, 350, 15.0, -7.0);
    InterpNpcYaw(-1, 270, 0);
    sleep 10;
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000EE);
    InterpNpcYaw(-1, 90, 0);
    SetNpcAnimation(-1, 0xB60004);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop 30 {
        SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        SI_VAR(0) -= 1;
    }
    SetNpcSpeed(-1, 3.0);
    NpcMoveTo(-1, 0xFFFFFD1C, 0, 0);
    SetPanTarget(0, 0xFFFFFD76, 20, 0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(-1, 0xB6000E);
    SetNpcJumpscale(-1, 1.0);
    PlaySoundAtNpc(-1, 812, 0);
    NpcJump0(-1, 0xFFFFFD71, 20, 0, 20);
    SetNpcAnimation(-1, 0xB60002);
    NpcJump0(-1, 0xFFFFFD7B, 20, 0, 5);
    NpcJump0(-1, 0xFFFFFD85, 20, 0, 5);
    SetNpcAnimation(-1, 0xB60001);
    sleep 15;
    InterpNpcYaw(-1, 270, 1);
    sleep 5;
    InterpNpcYaw(-1, 90, 1);
    sleep 10;
    spawn N(script_80243270);
    SI_VAR(0) = 2;
    loop 3 {
        SetNpcAnimation(-1, 0xB60007);
        0x802D7E08(0, 1, 45, 1, 0, 0, 0, 0, 20);
        InterpNpcYaw(-1, 270, 1);
        NpcMoveTo(-1, 0xFFFFFD71, 0, SI_VAR(0));
        0x802D7E08(0, 1, 0xFFFFFFD3, 1, 0, 0, 0, 0, 20);
        InterpNpcYaw(-1, 90, 1);
        NpcMoveTo(-1, 0xFFFFFD85, 0, SI_VAR(0));
        SI_VAR(0) *= 2;
    }
    0x802D7E08(0, 0, 45, 1, 0, 0, 0, 0, 20);
    InterpNpcYaw(-1, 270, 2);
    0x802D7E08(0, 0, 0xFFFFFFD3, 1, 0, 0, 0, 0, 20);
    InterpNpcYaw(-1, 90, 2);
    SetNpcAnimation(-1, 0xB6000D);
    0x802D7E08(0, 0, 0xFFFFFFD3, 1, 0, 0, 0, 0, 20);
    SetSelfVar(0, 1);
    spawn {
    15:
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 10, 0, 0, 0, 0, 0, 0, 0);
        GetSelfVar(0, SI_VAR(3));
        if (SI_VAR(3) == 1) {
            sleep 1;
            goto 15;
        }
    }
    PlaySoundAtNpc(-1, 232, 0);
    NpcJump0(-1, 0xFFFFFD44, 150, 0, 35);
    spawn {
        ResetCam(0, 5.0);
    }
    SetNpcAnimation(-1, 0xB60001);
    NpcJump0(-1, 0xFFFFFCF9, 20, 0xFFFFFFD8, 40);
    SetSelfVar(0, 0);
    SetNpcAnimation(-1, 0xB6000B);
    InterpNpcYaw(-1, 270, 2);
    SetNpcFlagBits(-1, 512, 0);
    PlaySoundAtNpc(-1, 812, 0);
    NpcJump0(-1, 0xFFFFFD08, 50, 0xFFFFFFD8, 10);
    SetNpcAnimation(-1, 0xB60007);
    sleep 4;
    SetNpcFlagBits(-1, 512, 1);
    sleep 8;
    SetNpcAnimation(-1, 0xB6000B);
    InterpNpcYaw(-1, 90, 2);
    SetNpcFlagBits(-1, 512, 0);
    PlaySoundAtNpc(-1, 812, 0);
    NpcJump0(-1, 0xFFFFFD08, 40, 0xFFFFFFD8, 10);
    SetNpcAnimation(-1, 0xB60007);
    sleep 4;
    SetNpcFlagBits(-1, 512, 1);
    sleep 8;
    SetNpcAnimation(-1, 0xB6000B);
    SetNpcFlagBits(-1, 512, 0);
    sleep 5;
    SetNpcAnimation(-1, 0xB60001);
    InterpNpcYaw(-1, 90, 4);
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 5, 0x1000EF);
    sleep 5;
    InterpNpcYaw(-1, 270, 4);
    SI_SAVE_VAR(0) = 26;
    DisablePlayerInput(0);
});

Script N(script_Interact_80245C9C) = SCRIPT({
    spawn {
        sleep 20;
        SetPlayerAnimation(0x10002);
    }
    SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x1000F0);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcAnimation(-1, 0xB60007);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 7);
    SetNpcAnimation(-1, 0xB60001);
    CloseMessage();
    await N(script_80245324);
    await N(script_80245374);
});

Script N(script_Init_80245D80) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 26 {
            BindNpcIdle(-1, N(script_Idle_802453D8));
            BindNpcInteract(-1, N(script_Interact_80245C9C));
        }
        < 27 {
            if (SI_SAVE_FLAG(1311) == 0) {
                SetNpcPos(-1, 0xFFFFFD08, 20, 0xFFFFFFD8);
                BindNpcInteract(-1, N(script_Interact_80245C9C));
            } else {
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            }
        }
        else {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

StaticNpc N(npcGroup_80245E74)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802449E4),
        .pos = { -740.0, 20.0, 0.0 },
        .flags = 0x00110509,
        .init = N(script_Init_80245D80),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_80246064)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802449B8),
        .pos = { 250.0, 50.0, 0.0 },
        .flags = 0x00000D00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000FA, 0x00000032, 0x00000000, 0x00000014, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000FA, 0x00000032, 0x00000000, 0x00000046, 0x000000C8, 0x00000001, 0x00000001 },
        .animations = {
            0x00460001, 0x00460002, 0x00460003, 0x00460003, 0x00460001, 0x00460001, 0x00460007, 0x00460007, 0x00460004, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001,
        },
    },
};

NpcGroupList N(npcGroupList_80246254) = {
    NPC_GROUP(N(npcGroup_80245E74), 0x00000000),
    NPC_GROUP(N(npcGroup_80246064), 0x16000003),
    {},
};

s32 pad_006278[] = {
    0x00000000, 0x00000000,
};

Script N(script_80246280) = SCRIPT({
    DemoJoystickXY(87, 0);
    sleep 17;
    DemoSetButtons(0x8000);
    sleep 5;
    DemoSetButtons(0);
    sleep 20;
    DemoSetButtons(0x8000);
    sleep 7;
    DemoSetButtons(0);
    sleep 26;
    DemoSetButtons(0x8000);
    sleep 6;
    DemoSetButtons(0);
    sleep 20;
    DemoSetButtons(0x8000);
    sleep 5;
    DemoSetButtons(0);
    sleep 20;
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802465C0_C60D00, 2, 2);
    sleep 110;
});

Script N(script_802463E4) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802465C0_C60D00, 2, 3);
    sleep 10;
});

s32 N(unk_802464A4)[] = {
    0x00000000,
};

Script N(script_802464A8) = SCRIPT({
    func_80242730_C5CE70();
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_802463E4);
    spawn N(script_80246280);
});

s32 pad_0064EC[] = {
    0x00000000,
};

// rodata: D_802464F0_C60C30

// rodata: D_802464F8_C60C38

// rodata: D_80246500_C60C40

// rodata: D_80246508_C60C48

// rodata: D_80246510_C60C50

// rodata: jtbl_80246518_C60C58

s32 pad_006554[] = {
    0x00000000,
};

// rodata: D_80246558_C60C98

// rodata: jtbl_80246560_C60CA0

s32 pad_0065B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802465C0_C60D00

s32 pad_0065C8[] = {
    0x00000000, 0x00000000,
};
