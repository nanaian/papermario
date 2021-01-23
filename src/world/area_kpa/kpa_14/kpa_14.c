#include "kpa_14.h"

s32 pad_00003C[1];
s32 pad_000378[2];
s32 pad_000864[3];
Script N(script_802408E0);
s32 pad_000988[2];
Script N(script_UpdateTexturePan_80240990);
Script N(script_ExitWalk_80240A2C);
Script N(script_ExitSingleDoor_80240A88);
Script N(script_ExitWalk_80240B5C);
Script N(script_80240BB8);
Script N(script_EnterWalk_80240C00);
Script N(script_80240D00);
s32 N(lavaResetList_80240F60)[36];
Script N(script_80240FF0);
Script N(script_80241010);
Script N(script_80241030);
Script N(script_802410BC);
Script N(main);
s32 pad_0018F4[3];
s32 N(unk_80241900)[1];
Script N(script_80241904);
s32 N(itemList_8024196C)[2];
Script N(script_80241974);
Script N(script_MakeEntities);
s32 pad_001BAC[1];
Script N(script_80241BB0);
s32 pad_001EBC[1];
const char D_80241EC0_A59370[8]; // "kpa_13"
const char D_80241EC8_A59378[8]; // "kpa_01"
const char D_80241ED0_A59380[8]; // "kpa_16"
s32 pad_001ED8[2];

// text: func_GetTattle_A574B0

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_A574F0

// text: func_80240164_A57614

// text: func_8024034C_A577FC

s32 pad_000378[] = {
    0x00000000, 0x00000000,
};

// text: func_80240380_A57830

// text: func_80240434_A578E4

// text: func_80240498_A57948

// text: func_802405E8_A57A98

// text: func_8024063C_A57AEC

// text: func_80240670_A57B20

// text: func_80240710_A57BC0

// text: func_8024073C_A57BEC

// text: func_80240840_A57CF0

s32 pad_000864[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 30.0f, 30.0f, -150.0f, 90.0f },
    { 1990.0f, 30.0f, -150.0f, 270.0f },
    { 1776.0f, 0.0f, -187.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x80240000,
};

Script N(script_802408E0) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    if (SI_SAVE_FLAG(1556) == 0) {
        PlayAmbientSounds(4);
    } else {
        ClearAmbientSounds(250);
    }
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

s32 pad_000988[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240990) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240040_A574F0();
                    return;
                }
            }
        }
    }
    func_80240164_A57614();
});

Script N(script_ExitWalk_80240A2C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241EC0_A59370, 1);
    sleep 100;
});

Script N(script_ExitSingleDoor_80240A88) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 88;
    if (SI_SAVE_FLAG(1556) == 0) {
        SI_VAR(2) = 106;
    } else {
        SI_VAR(2) = 203;
    }
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80241EC8_A59378, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240B5C) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80241ED0_A59380, 0);
    sleep 100;
});

Script N(script_80240BB8) = SCRIPT({
    bind N(script_ExitWalk_80240A2C) to 0x80000 83;
    bind N(script_ExitWalk_80240B5C) to 0x80000 90;
});

Script N(script_EnterWalk_80240C00) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_80240BB8);
            spawn EnterWalk;
            sleep 1;
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(1) = 88;
            SI_VAR(2) = 106;
            SI_VAR(3) = 1;
            spawn EnterSingleDoor;
            spawn N(script_80240BB8);
        }
        == 2 {
            SI_VAR(0) = N(script_80240BB8);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

Script N(script_80240D00) = SCRIPT({
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0xFFFFFC18;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFF830;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240990);
    }
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFE70;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0xFFFFFCE0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240990);
    }
    SetTexPanner(95, 1);
    SetTexPanner(96, 1);
    SetTexPanner(97, 1);
    SetTexPanner(98, 1);
    SetTexPanner(99, 1);
    SetTexPanner(100, 1);
});

s32 N(lavaResetList_80240F60)[] = {
    0x00000010, 0x42DC0000, 0x41F00000, 0xC3070000, 0x0000000F, 0x43AC8000, 0x41F00000, 0xC3070000,
    0x0000000A, 0x44098000, 0x41F00000, 0xC3070000, 0x0000000B, 0x44480000, 0x41F00000, 0xC3070000,
    0x00000009, 0x4482A000, 0x41F00000, 0xC3070000, 0x0000000C, 0x44AF0000, 0x41F00000, 0xC3070000,
    0x0000000E, 0x44C6C000, 0x41F00000, 0xC2B40000, 0x0000000D, 0x44F28000, 0x41F00000, 0xC3070000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240FF0) = SCRIPT({
    SI_MAP_VAR(10) = 9;
});

Script N(script_80241010) = SCRIPT({
    SI_MAP_VAR(10) = 12;
});

Script N(script_80241030) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(39, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 10, 0, 0, 0, 0, 0, 0, 0);
        sleep 1;
    }
});

Script N(script_802410BC) = SCRIPT({
    group 11;
    loop {
        ModifyColliderFlags(0, 96, 0x7FFFFE00);
        func_8024034C_A577FC();
        match SI_VAR(9) {
            == 8 {
                ModifyColliderFlags(1, 96, 0x7FFFFE00);
            }
            == 9 {}
            else {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(1) < 120) {
                    match SI_VAR(0) {
                        1200..1245
                        DisablePlayerInput(1);
                        DisablePlayerPhysics(1);
                        SI_MAP_VAR(11) = 1;
                        SetPlayerActionState(10);
                        SI_VAR(9) = spawn N(script_80241030);
                        if (SI_MAP_VAR(10) == 9) {
                            SI_VAR(5) = 1045;
                        } else {
                            SI_VAR(5) = 1400;
                        }
                        sleep 1;
                        0x802D2B6C();
                        SetPlayerActionState(23);
                        sleep 10;
                        UseSettingsFrom(0, SI_VAR(5), 30, 0xFFFFFF79);
                        SetPanTarget(0, SI_VAR(5), 30, 0xFFFFFF79);
                        SetCamSpeed(0, 1.0);
                        PanToTarget(0, 0, 1);
                        MakeLerp(SI_VAR(0), SI_VAR(5), 30, 0);
                        loop {
                            UpdateLerp();
                            SetPlayerPos(SI_VAR(0), 250, 0xFFFFFF79);
                            sleep 1;
                            if (SI_VAR(1) == 0) {
                                break;
                            }
                        }
                        MakeLerp(250, 30, 20, 1);
                        loop {
                            UpdateLerp();
                            SetPlayerPos(SI_VAR(5), SI_VAR(0), 0xFFFFFF79);
                            sleep 1;
                            if (SI_VAR(1) == 0) {
                                break;
                            }
                        }
                        SetPlayerAnimation(0x8001A);
                        MakeLerp(30, 60, 5, 1);
                        loop {
                            UpdateLerp();
                            SetPlayerPos(SI_VAR(5), SI_VAR(0), 0xFFFFFF79);
                            sleep 1;
                            if (SI_VAR(1) == 0) {
                                break;
                            }
                        }
                        kill SI_VAR(9);
                        MakeLerp(60, 30, 5, 1);
                        loop {
                            UpdateLerp();
                            SetPlayerPos(SI_VAR(5), SI_VAR(0), 0xFFFFFF79);
                            sleep 1;
                            if (SI_VAR(1) == 0) {
                                break;
                            }
                        }
                        sleep 5;
                        SetPlayerAnimation(0x10002);
                        DisablePlayerPhysics(0);
                        PanToTarget(0, 0, 0);
                        DisablePlayerInput(0);
                        sleep 1;
                        SI_MAP_VAR(11) = 0;
                    }
                }
            }
        }
        sleep 1;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(1556) == 0) {
        EnableGroup(205, 0);
        spawn N(script_80240D00);
    } else {
        EnableGroup(108, 0);
    }
    spawn N(script_EnterWalk_80240C00);
    spawn N(script_802408E0);
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn N(script_80241BB0);
    }
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 2;
            ModifyColliderFlags(3, 18, 3);
            ModifyColliderFlags(3, 19, 3);
            ModifyColliderFlags(3, 20, 3);
            ModifyColliderFlags(3, 21, 3);
            ModifyColliderFlags(3, 22, 3);
            ModifyColliderFlags(3, 23, 3);
            ModifyColliderFlags(3, 24, 3);
            ModifyColliderFlags(3, 25, 3);
            ModifyColliderFlags(3, 26, 3);
            ModifyColliderFlags(3, 27, 3);
            ModifyColliderFlags(3, 28, 3);
            ModifyColliderFlags(3, 29, 3);
            ModifyColliderFlags(3, 30, 3);
            ModifyColliderFlags(3, 31, 3);
            ModifyColliderFlags(3, 32, 3);
            ModifyColliderFlags(3, 100, 3);
            ModifyColliderFlags(3, 101, 3);
            ModifyColliderFlags(3, 90, 3);
            spawn {
                ResetFromLava(N(lavaResetList_80240F60));
            }
            bind N(script_80240FF0) to TriggerFlag_FLOOR_TOUCH 9;
            bind N(script_80241010) to TriggerFlag_FLOOR_TOUCH 12;
            spawn N(script_802410BC);
        }
    } else {
        ModifyColliderFlags(0, 96, 0x7FFFFE00);
    }
});

s32 pad_0018F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80241900)[] = {
    0x00000000,
};

Script N(script_80241904) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

s32 N(itemList_8024196C)[] = {
    0x0000001A, 0x00000000,
};

Script N(script_80241974) = SCRIPT({
    0x802D6420();
    if (SI_VAR(0) == 0) {
        ShowMessageAtScreenPos(0x1D00D8, 160, 40);
        0x802D6954();
        return;
    }
    if (SI_VAR(0) == -1) {
        0x802D6954();
        return;
    }
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(1552) = 1;
    func_80240670_A57B20(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_8024063C_A57AEC();
    SI_VAR(1) = 0;
    sleep 5;
    0x802D6954();
    unbind;
    bind N(script_ExitSingleDoor_80240A88) to TriggerFlag_WALL_INTERACT 88;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1552), 0),
        SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 1995, 40, 0xFFFFFF5E, 270, 0x80000000),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(0)),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241974), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_8024196C), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitSingleDoor_80240A88), TriggerFlag_WALL_INTERACT, 88, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, MakeItemEntity, 150, 350, 30, 0xFFFFFF6A, 17, SI_SAVE_FLAG(1553)),
    SI_CMD(ScriptOpcode_CALL, MakeItemEntity, 130, 800, 30, 0xFFFFFF6A, 17, SI_SAVE_FLAG(1554)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_001BAC[] = {
    0x00000000,
};

Script N(script_80241BB0) = SCRIPT({
    group 11;
    ParentColliderToModel(94, 103);
    SI_VAR(0) = 0;
    SI_VAR(3) = 0;
    loop {
        MakeLerp(SI_VAR(0), 175, 175, 0);
        loop {
            UpdateLerp();
            TranslateGroup(105, SI_VAR(0), 0, 0);
            UpdateColliderTransform(94);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_8024073C_A57BEC(SI_VAR(4), 94, SI_MAP_VAR(11));
            if (SI_VAR(0) > 145) {
                func_80240840_A57CF0();
                if (SI_VAR(9) == 1) {
                    func_80240710_A57BC0(SI_VAR(2));
                    if (SI_VAR(2) == 101) {
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
        MakeLerp(SI_VAR(0), 0, 175, 0);
        loop {
            UpdateLerp();
            TranslateGroup(105, SI_VAR(0), 0, 0);
            UpdateColliderTransform(94);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_8024073C_A57BEC(SI_VAR(4), 94, SI_MAP_VAR(11));
            if (SI_VAR(0) < 30) {
                func_80240840_A57CF0();
                if (SI_VAR(9) == 1) {
                    func_80240710_A57BC0(SI_VAR(2));
                    if (SI_VAR(2) == 100) {
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

s32 pad_001EBC[] = {
    0x00000000,
};

// rodata: D_80241EC0_A59370

// rodata: D_80241EC8_A59378

// rodata: D_80241ED0_A59380

s32 pad_001ED8[] = {
    0x00000000, 0x00000000,
};
