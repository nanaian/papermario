#include "isk_11.h"

s32 pad_0000A4[3];
s32 pad_000114[3];
s32 pad_000154[3];
Script N(script_802401E0);
s32 pad_00039C[1];
Script N(script_ExitWalk_802403A0);
Script N(script_ExitWalk_802403FC);
Script N(script_ExitWalk_80240458);
Script N(script_ExitWalk_802404B4);
Script N(script_80240510);
Script N(main);
s32 pad_00091C[1];
Script N(script_MakeEntities);
s32 pad_000C04[3];
Script N(script_80240C10);
Script N(script_80241104);
s32 N(itemList_80241920)[4];
Script N(script_80241930);
Script N(script_80241BC4);
Script N(script_80241E8C);
Script N(script_80242154);
Script N(script_8024241C);
Script N(script_802426E4);
s32 pad_0029AC[1];
s32 N(itemList_802429B0)[2];
Script N(script_802429B8);
Script N(script_80242B80);
s32 pad_002C0C[1];
const char D_80242C10_98D620[8]; // "isk_08"
const char D_80242C18_98D628[8]; // "isk_12"
const char D_80242C20_98D630[8]; // "isk_19"
s32 pad_002C28[2];

// text: func_80240000_98AA10

s32 pad_0000A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400B0_98AAC0

s32 pad_000114[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240120_98AB30

s32 pad_000154[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -277.0f, -520.0f, 529.0f, 105.0f },
    { 338.0f, -470.0f, 434.0f, 240.0f },
    { 370.0f, -600.0f, 472.0f, 240.0f },
    { 180.0f, -910.0f, 552.0f, 260.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19009F,
};

Script N(script_802401E0) = SCRIPT({
    if (SI_SAVE_FLAG(892) == 0) {
        spawn {
            FadeInMusic(1, 83, 0, 2000, 0, 127);
            FadeOutMusic(0, 2000);
            DisablePlayerInput(1);
            sleep 20;
            group 0;
            func_802D5830(1);
            ShowMessageAtScreenPos(0xD00E0, 160, 40);
            SI_SAVE_FLAG(892) = 1;
            DisablePlayerInput(0);
            func_802D5830(0);
            FadeInMusic(0, 24, 0, 2000, 0, 127);
            FadeOutMusic(1, 2000);
        }
        return;
    }
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
});

s32 pad_00039C[] = {
    0x00000000,
};

Script N(script_ExitWalk_802403A0) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80242C10_98D620, 3);
    sleep 100;
});

Script N(script_ExitWalk_802403FC) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80242C18_98D628, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240458) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80242C18_98D628, 1);
    sleep 100;
});

Script N(script_ExitWalk_802404B4) = SCRIPT({
    group 27;
    UseExitHeading(40, 3);
    spawn ExitWalk;
    GotoMap(D_80242C20_98D630, 0);
    sleep 100;
});

Script N(script_80240510) = SCRIPT({
    bind N(script_ExitWalk_802403A0) to 0x80000 0;
    bind N(script_ExitWalk_802403FC) to 0x80000 4;
    bind N(script_ExitWalk_80240458) to 0x80000 9;
    bind N(script_ExitWalk_802404B4) to 0x80000 13;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20008);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SetCamSpeed(0, 2.80078125);
    await N(script_MakeEntities);
    spawn N(script_802401E0);
    await N(script_80241930);
    await N(script_80242B80);
    if (SI_SAVE_VAR(0) < 0xFFFFFFC7) {
        spawn N(script_80241104);
        EnableGroup(150, 0);
        ModifyColliderFlags(0, 45, 0x7FFFFE00);
        ModifyColliderFlags(0, 47, 0x7FFFFE00);
        ModifyColliderFlags(0, 49, 0x7FFFFE00);
        ModifyColliderFlags(0, 51, 0x7FFFFE00);
        ModifyColliderFlags(0, 53, 0x7FFFFE00);
        ModifyColliderFlags(0, 53, 0x7FFFFE00);
        ModifyColliderFlags(0, 55, 0x7FFFFE00);
    } else {
        EnableGroup(98, 0);
        EnableModel(16, 0);
        ModifyColliderFlags(0, 36, 0x7FFFFE00);
        ModifyColliderFlags(0, 38, 0x7FFFFE00);
        ModifyColliderFlags(0, 40, 0x7FFFFE00);
        ModifyColliderFlags(0, 42, 0x7FFFFE00);
        ModifyColliderFlags(0, 34, 0x7FFFFE00);
        ModifyColliderFlags(0, 32, 0x7FFFFE00);
        ModifyColliderFlags(0, 22, 0x7FFFFE00);
        TranslateModel(135, 0, 0xFFFFFFE2, 0);
        TranslateModel(134, 0, 0xFFFFFFE2, 0);
        TranslateModel(137, 0, 0xFFFFFFC9, 0);
        TranslateModel(138, 0, 0xFFFFFFC9, 0);
        TranslateModel(140, 0, 0xFFFFFFB0, 0);
        TranslateModel(141, 0, 0xFFFFFFB0, 0);
        TranslateModel(143, 0, 0xFFFFFF97, 0);
        TranslateModel(144, 0, 0xFFFFFF97, 0);
    }
    SI_VAR(0) = N(script_80240510);
    spawn EnterWalk;
});

s32 pad_00091C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(888) == 0) {
        MakeEntity(D_802BCD68, 355, 0xFFFFFE34, 430, 0xFFFFFFD8, 0x80000000);
        SI_MAP_VAR(0) = SI_VAR(0);
    }
    PlayEffect(32, 1, 0xFFFFFF7D, 0xFFFFFE3B, 489, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 131, 0xFFFFFE3B, 489, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 291, 0xFFFFFE3B, 415, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFFD4, 0xFFFFFDB9, 505, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 131, 0xFFFFFDB9, 489, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFFD4, 0xFFFFFD37, 505, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 131, 0xFFFFFD37, 489, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFFD4, 0xFFFFFCB5, 505, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 131, 0xFFFFFCB5, 489, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    MakeEntity(D_802EA7E0, 0xFFFFFFB5, 0xFFFFFD30, 625, 0, 0x80000000);
});

s32 pad_000C04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240C10) = SCRIPT({
    MakeLerp(0, 0xFFFFFED4, 30, 0);
10:
    UpdateLerp();
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) /= 10;
    TranslateModel(135, 0, SI_VAR(2), 0);
    TranslateModel(134, 0, SI_VAR(2), 0);
    TranslateModel(137, 0, SI_VAR(2), 0);
    TranslateModel(138, 0, SI_VAR(2), 0);
    TranslateModel(140, 0, SI_VAR(2), 0);
    TranslateModel(141, 0, SI_VAR(2), 0);
    TranslateModel(143, 0, SI_VAR(2), 0);
    TranslateModel(144, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    PlaySoundAt(87, 0, 16, 0xFFFFFDCE, 621);
    MakeLerp(SI_VAR(0), 0xFFFFFDDA, 25, 0);
    UpdateLerp();
20:
    UpdateLerp();
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) /= 10;
    TranslateModel(137, 0, SI_VAR(2), 0);
    TranslateModel(138, 0, SI_VAR(2), 0);
    TranslateModel(140, 0, SI_VAR(2), 0);
    TranslateModel(141, 0, SI_VAR(2), 0);
    TranslateModel(143, 0, SI_VAR(2), 0);
    TranslateModel(144, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    PlaySoundAt(87, 0, 41, 0xFFFFFDB5, 618);
    MakeLerp(SI_VAR(0), 0xFFFFFCE0, 25, 0);
    UpdateLerp();
30:
    UpdateLerp();
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) /= 10;
    TranslateModel(140, 0, SI_VAR(2), 0);
    TranslateModel(141, 0, SI_VAR(2), 0);
    TranslateModel(143, 0, SI_VAR(2), 0);
    TranslateModel(144, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 30;
    }
    PlaySoundAt(87, 0, 66, 0xFFFFFD9C, 616);
    MakeLerp(SI_VAR(0), 0xFFFFFBE6, 25, 0);
    UpdateLerp();
40:
    UpdateLerp();
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(2) /= 10;
    TranslateModel(143, 0, SI_VAR(2), 0);
    TranslateModel(144, 0, SI_VAR(2), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 40;
    }
    PlaySoundAt(87, 0, 95, 0xFFFFFD83, 614);
});

Script N(script_80241104) = SCRIPT({
    sleep 1;
10:
    sleep 1;
    if (SI_SAVE_VAR(156) != 22) {
        goto 10;
    }
    if (SI_SAVE_VAR(158) != 23) {
        goto 10;
    }
    if (SI_SAVE_VAR(160) != 21) {
        goto 10;
    }
    ModifyColliderFlags(0, 36, 0x7FFFFE00);
    ModifyColliderFlags(0, 38, 0x7FFFFE00);
    ModifyColliderFlags(0, 40, 0x7FFFFE00);
    ModifyColliderFlags(0, 42, 0x7FFFFE00);
    ModifyColliderFlags(0, 34, 0x7FFFFE00);
    ModifyColliderFlags(0, 32, 0x7FFFFE00);
    ModifyColliderFlags(1, 45, 0x7FFFFE00);
    ModifyColliderFlags(1, 47, 0x7FFFFE00);
    ModifyColliderFlags(1, 49, 0x7FFFFE00);
    ModifyColliderFlags(1, 51, 0x7FFFFE00);
    ModifyColliderFlags(1, 53, 0x7FFFFE00);
    ModifyColliderFlags(1, 53, 0x7FFFFE00);
    ModifyColliderFlags(1, 55, 0x7FFFFE00);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    sleep 10;
    spawn {
        PlaySoundAtCollider(32, 85, 0);
        func_80240000_98AA10(0xFFFFFFF0, 0xFFFFFE4A, 510, 240);
        func_80240000_98AA10(16, 0xFFFFFE4A, 510, 240);
        sleep 5;
        func_80240000_98AA10(0xFFFFFFE5, 0xFFFFFE4A, 508, 240);
        func_80240000_98AA10(0xFFFFFFC0, 0xFFFFFE4A, 505, 240);
        func_80240000_98AA10(27, 0xFFFFFE4A, 508, 240);
        func_80240000_98AA10(64, 0xFFFFFE4A, 505, 240);
        sleep 5;
        func_80240000_98AA10(0xFFFFFFB6, 0xFFFFFE4A, 504, 240);
        func_80240000_98AA10(0xFFFFFF98, 0xFFFFFE4A, 499, 240);
        func_80240000_98AA10(74, 0xFFFFFE4A, 504, 240);
        func_80240000_98AA10(104, 0xFFFFFE4A, 499, 240);
    }
    sleep 30;
    spawn {
        PlaySound(0x80000003);
        ShakeCam(0, 0, 330, 0.5);
        StopSound(0x80000003);
    }
    spawn {
        loop 12 {
            PlayEffect(21, 0, 0, 0xFFFFFE7A, 550, 30, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 20;
        }
    }
    sleep 10;
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = 0;
    spawn {
        sleep 20;
    20:
        SetPlayerAnimation(0x60002);
        sleep 8;
        SetPlayerAnimation(0x60003);
        sleep 8;
        if (SI_MAP_VAR(1) == 0) {
            goto 20;
        }
        SetPlayerAnimation(0x10002);
    }
    spawn {
        sleep 20;
        SetPlayerSpeed(4);
    30:
        PlayerMoveTo(66, 555, 0);
        PlayerMoveTo(0xFFFFFFBE, 555, 0);
        if (SI_MAP_VAR(0) == 0) {
            goto 30;
        }
        PlayerMoveTo(0, 555, 0);
        SI_MAP_VAR(1) = 1;
    }
    sleep 40;
    SetCamSpeed(0, 90.0);
    UseSettingsFrom(0, 0, 0xFFFFFDF8, 530);
    SetCamDistance(0, 140);
    SetCamPitch(0, 22.7001953125, -22.69921875);
    SetPanTarget(0, 0, 0xFFFFFDF8, 530);
    PanToTarget(0, 0, 1);
    EnableGroup(150, 1);
    EnableGroup(98, 0);
    EnableModel(16, 0);
    sleep 60;
    SetCamSpeed(0, 1.0);
    UseSettingsFrom(0, 0, 0xFFFFFDF8, 530);
    SetPanTarget(0, 0, 0xFFFFFDF8, 530);
    sleep 10;
    SetCamPitch(0, 10.0, 12.0);
    sleep 90;
    spawn N(script_80240C10);
    sleep 60;
    SI_MAP_VAR(0) = 1;
    sleep 100;
    SetCamSpeed(0, 90.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    PanToTarget(0, 0, 0);
    SI_SAVE_VAR(0) = 0xFFFFFFC7;
    SetMusicTrack(0, 25, 0, 8);
    ModifyColliderFlags(0, 22, 0x7FFFFE00);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 N(itemList_80241920)[] = {
    0x00000015, 0x00000016, 0x00000017, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80241930) = {
    SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 0xFFFFFFC7),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241BC4), TriggerFlag_WALL_INTERACT, 36, N(itemList_80241920), 0, 1),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241E8C), TriggerFlag_WALL_INTERACT, 34, N(itemList_80241920), 0, 1),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242154), TriggerFlag_WALL_INTERACT, 42, N(itemList_80241920), 0, 1),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024241C), TriggerFlag_WALL_INTERACT, 40, N(itemList_80241920), 0, 1),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802426E4), TriggerFlag_WALL_INTERACT, 38, N(itemList_80241920), 0, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(10), -1),
    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(11), -1),
    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(12), -1),
    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(13), -1),
    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(14), -1),
    SI_CMD(ScriptOpcode_IF_NE, SI_SAVE_VAR(156), 0),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_SAVE_VAR(156), 0xFFFFFFA8, 0xFFFFFE04, 502, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(10), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_NE, SI_SAVE_VAR(157), 0),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_SAVE_VAR(157), 0xFFFFFFD4, 0xFFFFFE04, 508, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(11), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_NE, SI_SAVE_VAR(158), 0),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_SAVE_VAR(158), 0, 0xFFFFFE04, 510, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(12), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_NE, SI_SAVE_VAR(159), 0),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_SAVE_VAR(159), 44, 0xFFFFFE04, 508, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(13), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_NE, SI_SAVE_VAR(160), 0),
        SI_CMD(ScriptOpcode_CALL, MakeItemEntity, SI_SAVE_VAR(160), 88, 0xFFFFFE04, 502, 1, 0),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(14), SI_VAR(0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241BC4) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFC7) {
        unbind;
        return;
    }
    group 0;
    func_802D5830(1);
    if (SI_SAVE_VAR(156) != 0) {
        DisablePlayerInput(1);
        func_802400B0_98AAC0(SI_SAVE_VAR(156), SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D0162, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            PlaySoundAtCollider(36, 609, 0);
            AddKeyItem(SI_SAVE_VAR(156));
            SI_VAR(0) = SI_SAVE_VAR(156);
            SI_SAVE_VAR(156) = 0;
            RemoveItemEntity(SI_MAP_VAR(10));
            SI_MAP_VAR(10) = -1;
            ShowGotItem(SI_VAR(0), 0, 1);
        }
        DisablePlayerInput(0);
        func_802D5830(0);
        return;
    }
    func_802D6420();
    SI_VAR(2) = SI_VAR(0);
    match SI_VAR(2) {
        == 0 {
            ShowMessageAtScreenPos(0x1D0159, 160, 40);
            func_802D6954();
            func_802D5830(0);
            return;
        }
        == -1 {
            func_802D6954();
            func_802D5830(0);
            return;
        }
    }
    SI_SAVE_VAR(156) = SI_VAR(2);
    RemoveKeyItemAt(SI_VAR(1));
    MakeItemEntity(SI_SAVE_VAR(156), 0xFFFFFFA8, 0xFFFFFE04, 502, 1, 0);
    SI_MAP_VAR(10) = SI_VAR(0);
    func_802D6954();
    PlaySoundAtCollider(36, 609, 0);
    func_802D5830(0);
});

Script N(script_80241E8C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFC7) {
        unbind;
        return;
    }
    group 0;
    func_802D5830(1);
    if (SI_SAVE_VAR(157) != 0) {
        DisablePlayerInput(1);
        func_802400B0_98AAC0(SI_SAVE_VAR(157), SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D0162, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            PlaySoundAtCollider(34, 609, 0);
            AddKeyItem(SI_SAVE_VAR(157));
            SI_VAR(0) = SI_SAVE_VAR(157);
            SI_SAVE_VAR(157) = 0;
            RemoveItemEntity(SI_MAP_VAR(11));
            SI_MAP_VAR(11) = -1;
            ShowGotItem(SI_VAR(0), 0, 1);
        }
        DisablePlayerInput(0);
        func_802D5830(0);
        return;
    }
    func_802D6420();
    SI_VAR(2) = SI_VAR(0);
    match SI_VAR(2) {
        == 0 {
            ShowMessageAtScreenPos(0x1D0159, 160, 40);
            func_802D6954();
            func_802D5830(0);
            return;
        }
        == -1 {
            func_802D6954();
            func_802D5830(0);
            return;
        }
    }
    SI_SAVE_VAR(157) = SI_VAR(2);
    RemoveKeyItemAt(SI_VAR(1));
    MakeItemEntity(SI_SAVE_VAR(157), 0xFFFFFFD4, 0xFFFFFE04, 508, 1, 0);
    SI_MAP_VAR(11) = SI_VAR(0);
    func_802D6954();
    func_802D5830(0);
    PlaySoundAtCollider(34, 609, 0);
});

Script N(script_80242154) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFC7) {
        unbind;
        return;
    }
    group 0;
    func_802D5830(1);
    if (SI_SAVE_VAR(158) != 0) {
        DisablePlayerInput(1);
        func_802400B0_98AAC0(SI_SAVE_VAR(158), SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D0162, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            PlaySoundAtCollider(42, 609, 0);
            AddKeyItem(SI_SAVE_VAR(158));
            SI_VAR(0) = SI_SAVE_VAR(158);
            SI_SAVE_VAR(158) = 0;
            RemoveItemEntity(SI_MAP_VAR(12));
            SI_MAP_VAR(12) = -1;
            ShowGotItem(SI_VAR(0), 0, 1);
        }
        DisablePlayerInput(0);
        func_802D5830(0);
        return;
    }
    func_802D6420();
    SI_VAR(2) = SI_VAR(0);
    match SI_VAR(2) {
        == 0 {
            ShowMessageAtScreenPos(0x1D0159, 160, 40);
            func_802D6954();
            func_802D5830(0);
            return;
        }
        == -1 {
            func_802D6954();
            func_802D5830(0);
            return;
        }
    }
    SI_SAVE_VAR(158) = SI_VAR(2);
    RemoveKeyItemAt(SI_VAR(1));
    MakeItemEntity(SI_SAVE_VAR(158), 0, 0xFFFFFE04, 510, 1, 0);
    SI_MAP_VAR(12) = SI_VAR(0);
    func_802D6954();
    func_802D5830(0);
    PlaySoundAtCollider(42, 609, 0);
});

Script N(script_8024241C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFC7) {
        unbind;
        return;
    }
    group 0;
    func_802D5830(1);
    if (SI_SAVE_VAR(159) != 0) {
        DisablePlayerInput(1);
        func_802400B0_98AAC0(SI_SAVE_VAR(159), SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D0162, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            PlaySoundAtCollider(40, 609, 0);
            AddKeyItem(SI_SAVE_VAR(159));
            SI_VAR(0) = SI_SAVE_VAR(159);
            SI_SAVE_VAR(159) = 0;
            RemoveItemEntity(SI_MAP_VAR(13));
            SI_MAP_VAR(13) = -1;
            ShowGotItem(SI_VAR(0), 0, 1);
        }
        DisablePlayerInput(0);
        func_802D5830(0);
        return;
    }
    func_802D6420();
    SI_VAR(2) = SI_VAR(0);
    match SI_VAR(2) {
        == 0 {
            ShowMessageAtScreenPos(0x1D0159, 160, 40);
            func_802D6954();
            func_802D5830(0);
            return;
        }
        == -1 {
            func_802D6954();
            func_802D5830(0);
            return;
        }
    }
    SI_SAVE_VAR(159) = SI_VAR(2);
    RemoveKeyItemAt(SI_VAR(1));
    MakeItemEntity(SI_SAVE_VAR(159), 44, 0xFFFFFE04, 508, 1, 0);
    SI_MAP_VAR(13) = SI_VAR(0);
    func_802D6954();
    func_802D5830(0);
    PlaySoundAtCollider(40, 609, 0);
});

Script N(script_802426E4) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFC7) {
        unbind;
        return;
    }
    group 0;
    func_802D5830(1);
    if (SI_SAVE_VAR(160) != 0) {
        DisablePlayerInput(1);
        func_802400B0_98AAC0(SI_SAVE_VAR(160), SI_VAR(0));
        SetMessageString(SI_VAR(0), 0);
        ShowMessageAtScreenPos(0x1D0162, 160, 40);
        ShowChoice(0x1E000D);
        CloseMessage();
        if (SI_VAR(0) == 0) {
            PlaySoundAtCollider(38, 609, 0);
            AddKeyItem(SI_SAVE_VAR(160));
            SI_VAR(0) = SI_SAVE_VAR(160);
            SI_SAVE_VAR(160) = 0;
            RemoveItemEntity(SI_MAP_VAR(14));
            SI_MAP_VAR(14) = -1;
            ShowGotItem(SI_VAR(0), 0, 1);
        }
        DisablePlayerInput(0);
        func_802D5830(0);
        return;
    }
    func_802D6420();
    SI_VAR(2) = SI_VAR(0);
    match SI_VAR(2) {
        == 0 {
            ShowMessageAtScreenPos(0x1D0159, 160, 40);
            func_802D6954();
            func_802D5830(0);
            return;
        }
        == -1 {
            func_802D6954();
            func_802D5830(0);
            return;
        }
    }
    SI_SAVE_VAR(160) = SI_VAR(2);
    RemoveKeyItemAt(SI_VAR(1));
    MakeItemEntity(SI_SAVE_VAR(160), 88, 0xFFFFFE04, 502, 1, 0);
    SI_MAP_VAR(14) = SI_VAR(0);
    func_802D6954();
    func_802D5830(0);
    PlaySoundAtCollider(38, 609, 0);
});

s32 pad_0029AC[] = {
    0x00000000,
};

s32 N(itemList_802429B0)[] = {
    0x00000011, 0x00000000,
};

Script N(script_802429B8) = SCRIPT({
    func_802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        func_802D6954();
        return;
    }
    if (SI_VAR(0) == -1) {
        func_802D6954();
        return;
    }
    PlaySoundAt(617, 0, 355, 0xFFFFFE34, 430);
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(888) = 1;
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240120_98AB30();
    SI_VAR(1) = 0;
    sleep 5;
    PlaySoundAtCollider(6, 613, 0);
    MakeLerp(0, 65, 65, 0);
10:
    UpdateLerp();
    TranslateGroup(80, 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_80242B80) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(888), 0),
        SI_CMD(ScriptOpcode_CALL, func_802C971C, 80),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802429B8), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_802429B0), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, EnableGroup, 80, 0),
        SI_CMD(ScriptOpcode_CALL, ModifyColliderFlags, 0, 6, 0x7FFDFFFF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_002C0C[] = {
    0x00000000,
};

// rodata: D_80242C10_98D620

// rodata: D_80242C18_98D628

// rodata: D_80242C20_98D630

s32 pad_002C28[] = {
    0x00000000, 0x00000000,
};
