#include "sam_09.h"

s32 pad_0003F4[3];
Script N(script_80240460);
s32 pad_00048C[1];
Script N(script_ExitWalk_80240490);
Script N(script_ExitWalk_802404EC);
Script N(script_80240548);
Script N(main);
s32 pad_0006A4[3];
Script N(script_802406B0);
s32 N(unk_802406C0)[1];
Script N(script_802406C4);
Script N(script_802406F4);
Script N(script_80240724);
Script N(script_802407DC);
Script N(script_802409E4);
Script N(script_80240C80);
Script N(script_80240F1C);
Script N(script_802411B8);
Script N(script_802412B0);
const char D_80241500_D377F0[8]; // "sam_08"
const char D_80241508_D377F8[8]; // "sam_10"

// text: func_80240000_D362F0

// text: func_802400B4_D363A4

// text: func_80240118_D36408

// text: func_80240158_D36448

// text: func_80240264_D36554

// text: func_802403A0_D36690

s32 pad_0003F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -565.0f, 0.0f, 0.0f, 90.0f },
    { 580.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190133,
};

Script N(script_80240460) = SCRIPT({
    SetMusicTrack(0, 59, 0, 8);
});

s32 pad_00048C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240490) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241500_D377F0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802404EC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80241508_D377F8, 0);
    sleep 100;
});

Script N(script_80240548) = SCRIPT({
    bind N(script_ExitWalk_80240490) to 0x80000 8;
    bind N(script_ExitWalk_802404EC) to 0x80000 13;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 43;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_802406B0);
    await N(script_80240460);
    ModifyColliderFlags(3, 0, 8);
    ModifyColliderFlags(3, 8, 8);
    ModifyColliderFlags(3, 13, 8);
    await N(script_802412B0);
    SI_VAR(0) = N(script_80240548);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_0006A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802406B0) = SCRIPT({

});

s32 N(unk_802406C0)[] = {
    0x00000000,
};

Script N(script_802406C4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802406F4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_80240724) = SCRIPT({
    PlaySoundAtCollider(SI_VAR(4), 477, 0);
    MakeLerp(0, 130, 30, 0);
0:
    UpdateLerp();
    TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
});

Script N(script_802407DC) = SCRIPT({
    PlaySoundAtCollider(SI_VAR(4), 478, 0);
    MakeLerp(130, 0, 30, 2);
0:
    UpdateLerp();
    TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
    UpdateColliderTransform(SI_VAR(4));
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    PlaySoundAtCollider(SI_VAR(4), 490, 0);
    GetModelCenter(SI_VAR(2));
    SI_VAR(3) = SI_VAR(2);
    SI_VAR(4) = SI_VAR(2);
    SI_VAR(3) += 30;
    SI_VAR(4) -= 30;
    PlayEffect(6, 3, SI_VAR(0), 0, SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(6, 3, SI_VAR(0), 0, SI_VAR(3), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(6, 3, SI_VAR(0), 0, SI_VAR(4), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    ShakeCam(0, 0, 10, 1.0);
});

Script N(script_802409E4) = SCRIPT({
    if (SI_MAP_VAR(0) == -1) {
        func_802D663C();
        func_802D6954();
        if (SI_VAR(0) == 0) {
            ShowMessageAtScreenPos(0x1D015E, 160, 40);
            return;
        }
        if (SI_VAR(0) == -1) {
            return;
        }
        SI_MAP_VAR(0) = SI_VAR(0);
        func_80240158_D36448();
        RemoveItem(SI_VAR(0), SI_VAR(2));
        MakeItemEntity(SI_VAR(0), 0xFFFFFE7F, 30, 0xFFFFFFCE, 1, 0);
        SI_MAP_VAR(3) = SI_VAR(0);
        SI_VAR(2) = 19;
        SI_VAR(4) = 17;
        await N(script_80240724);
        return;
    } else {
        SI_VAR(0) = SI_MAP_VAR(3);
        func_80240118_D36408(SI_VAR(0));
        func_802400B4_D363A4(SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D015F, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            AddItem(SI_MAP_VAR(0), SI_VAR(0));
            if (SI_VAR(0) == -1) {
                ShowMessageAtScreenPos(0x1D0160, 160, 40);
                return;
            }
            func_80240118_D36408(SI_MAP_VAR(3));
            RemoveItemEntity(SI_MAP_VAR(3));
            SI_MAP_VAR(0) = -1;
            func_80240158_D36448();
            ShowGotItem(SI_VAR(0), 0, 64);
            SI_VAR(2) = 19;
            SI_VAR(4) = 17;
            await N(script_802407DC);
            return;
        }
    }
});

Script N(script_80240C80) = SCRIPT({
    if (SI_MAP_VAR(1) == -1) {
        func_802D663C();
        func_802D6954();
        if (SI_VAR(0) == 0) {
            ShowMessageAtScreenPos(0x1D015E, 160, 40);
            return;
        }
        if (SI_VAR(0) == -1) {
            return;
        }
        SI_MAP_VAR(1) = SI_VAR(0);
        func_80240158_D36448();
        RemoveItem(SI_VAR(0), SI_VAR(2));
        MakeItemEntity(SI_VAR(0), 0xFFFFFFDD, 30, 0xFFFFFFCE, 1, 0);
        SI_MAP_VAR(4) = SI_VAR(0);
        SI_VAR(2) = 21;
        SI_VAR(4) = 19;
        await N(script_80240724);
        return;
    } else {
        SI_VAR(0) = SI_MAP_VAR(4);
        func_80240118_D36408(SI_VAR(0));
        func_802400B4_D363A4(SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D015F, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            AddItem(SI_MAP_VAR(1), SI_VAR(0));
            if (SI_VAR(0) == -1) {
                ShowMessageAtScreenPos(0x1D0160, 160, 40);
                return;
            }
            func_80240118_D36408(SI_MAP_VAR(4));
            RemoveItemEntity(SI_MAP_VAR(4));
            SI_MAP_VAR(1) = -1;
            func_80240158_D36448();
            ShowGotItem(SI_VAR(0), 0, 64);
            SI_VAR(2) = 21;
            SI_VAR(4) = 19;
            await N(script_802407DC);
            return;
        }
    }
});

Script N(script_80240F1C) = SCRIPT({
    if (SI_MAP_VAR(2) == -1) {
        func_802D663C();
        func_802D6954();
        if (SI_VAR(0) == 0) {
            ShowMessageAtScreenPos(0x1D015E, 160, 40);
            return;
        }
        if (SI_VAR(0) == -1) {
            return;
        }
        SI_MAP_VAR(2) = SI_VAR(0);
        func_80240158_D36448();
        RemoveItem(SI_VAR(0), SI_VAR(2));
        MakeItemEntity(SI_VAR(0), 265, 30, 0xFFFFFFCE, 1, 0);
        SI_MAP_VAR(5) = SI_VAR(0);
        SI_VAR(2) = 23;
        SI_VAR(4) = 21;
        await N(script_80240724);
        return;
    } else {
        SI_VAR(0) = SI_MAP_VAR(5);
        func_80240118_D36408(SI_VAR(0));
        func_802400B4_D363A4(SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D015F, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            AddItem(SI_MAP_VAR(2), SI_VAR(0));
            if (SI_VAR(0) == -1) {
                ShowMessageAtScreenPos(0x1D0160, 160, 40);
                return;
            }
            func_80240118_D36408(SI_MAP_VAR(5));
            RemoveItemEntity(SI_MAP_VAR(5));
            SI_MAP_VAR(2) = -1;
            func_80240158_D36448();
            ShowGotItem(SI_VAR(0), 0, 64);
            SI_VAR(2) = 23;
            SI_VAR(4) = 21;
            await N(script_802407DC);
            return;
        }
    }
});

Script N(script_802411B8) = SCRIPT({
    DisablePlayerInput(1);
0:
    GetPlayerActionState(SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) != 0) {
        goto 0;
    }
    GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    if (SI_VAR(1) < 0xFFFFFF6A) {
        await N(script_802409E4);
    } else {
        if (SI_VAR(1) < 100) {
            await N(script_80240C80);
        } else {
            await N(script_80240F1C);
        }
    }
    DisablePlayerInput(0);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_802412B0) = {
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 17, 19),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 19, 21),
    SI_CMD(ScriptOpcode_CALL, ParentColliderToModel, 21, 23),
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1460), 0),
        SI_CMD(ScriptOpcode_SET, SI_SAVE_FLAG(1460), 1),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 131),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(1), 129),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(2), 130),
        SI_CMD(ScriptOpcode_CALL, func_80240158_D36448),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_80240264_D36554),
    SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(0), -1),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 19, 0, 130, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 17),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_MAP_VAR(0), 0xFFFFFE7F, 30, 0xFFFFFFCE, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(3), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(1), -1),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 21, 0, 130, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 19),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_MAP_VAR(1), 0xFFFFFFDD, 30, 0xFFFFFFCE, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(4), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(2), -1),
        SI_CMD(ScriptOpcode_CALL, TranslateModel, 23, 0, 130, 0),
        SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, 21),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_MAP_VAR(2), 265, 30, 0xFFFFFFCE, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(5), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_802403A0_D36690),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802411B8), TriggerFlag_WALL_INTERACT, 4, SI_VAR(0), 0, 1),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// rodata: D_80241500_D377F0

// rodata: D_80241508_D377F8
