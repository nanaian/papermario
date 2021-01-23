#include "kpa_60.h"

s32 pad_0000D4[3];
s32 pad_0003EC[1];
Script N(script_80240490);
s32 N(itemList_80240510)[2];
Script N(script_80240518);
Script N(script_MakeEntities);
Script N(script_UpdateTexturePan_80240740);
Script N(script_802407DC);
Script N(script_80240920);
Script N(script_ExitDoubleDoor_80240A64);
Script N(script_ExitWalk_80240B18);
Script N(script_ExitWalk_80240BA8);
Script N(script_ExitWalk_80240C38);
Script N(script_80240CBC);
Script N(script_80240E1C);
Script N(script_80240E80);
Script N(script_EnterWalk_80240ECC);
Script N(script_80240FFC);
s32 N(lavaResetList_8024110C)[12];
Script N(main);
Script N(script_802412D0);
s32 N(vectorList_802413A0)[9];
Script N(script_802413C4);
s32 N(vectorList_80241640)[12];
Script N(script_80241670);
const char D_802418A0_A6E3A0[8]; // "kpa_70"
const char D_802418A8_A6E3A8[8]; // "kpa_10"
const char D_802418B0_A6E3B0[8]; // "kpa_11"
const char D_802418B8_A6E3B8[8]; // "kpa_63"
const char D_802418C0_A6E3C0[8]; // "kpa_63"
const char D_802418C8_A6E3C8[8]; // "kmr_22"
const char D_802418D0_A6E3D0[8]; // "hos_20"
s32 pad_0018D8[2];

// text: func_80240000_A6CB00

// text: func_80240034_A6CB34

s32 pad_0000D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400E0_A6CBE0

// text: func_80240204_A6CD04

s32 pad_0003EC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -191.0f, 0.0f, -135.0f, 180.0f },
    { 276.0f, 0.0f, -305.0f, 180.0f },
    { 386.0f, -25.0f, -231.0f, 180.0f },
    { 75.0f, 21.0f, 600.0f, 90.0f },
    { 0.0f, -1000.0f, 0.0f, 0.0f },
    { 0.0f, -1000.0f, 0.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190157,
};

Script N(script_80240490) = SCRIPT({
    if (SI_SAVE_VAR(0) != 92) {
        SetMusicTrack(0, 100, 0, 8);
        spawn {
            sleep 30;
            0x802D5FA4(4);
        }
    }
    UseDoorSounds(1);
});

s32 N(itemList_80240510)[] = {
    0x0000001A, 0x00000000,
};

Script N(script_80240518) = SCRIPT({
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
    SI_SAVE_FLAG(1564) = 1;
    func_80240034_A6CB34(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240000_A6CB00();
    SI_VAR(1) = 0;
    sleep 5;
    0x802D6954();
    unbind;
    bind N(script_ExitDoubleDoor_80240A64) to TriggerFlag_WALL_INTERACT 31;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1564), 0),
        SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 0xFFFFFF38, 10, 0xFFFFFF31, 0, 0x80000000),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(0)),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80240518), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80240510), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80240A64), TriggerFlag_WALL_INTERACT, 31, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802EA5AC, 0xFFFFFDEC, 145, 0xFFFFFFC5, 0, 307, 0x80000000),
    SI_CMD(ScriptOpcode_CALL, AssignBlockFlag, SI_SAVE_FLAG(1565)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_UpdateTexturePan_80240740) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802400E0_A6CBE0();
                    return;
                }
            }
        }
    }
    func_80240204_A6CD04();
});

Script N(script_802407DC) = SCRIPT({
    PlaySoundAtCollider(27, 479, 0);
    EnableModel(62, 0);
    MakeLerp(0, 0xFFFFFFF6, 20, 2);
    loop {
        UpdateLerp();
        TranslateModel(64, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(0, 45, 25, 2);
    loop {
        UpdateLerp();
        TranslateModel(64, 0xFFFFFFF6, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80240920) = SCRIPT({
    MakeLerp(45, 0, 25, 2);
    loop {
        UpdateLerp();
        TranslateModel(64, 0xFFFFFFF6, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(0xFFFFFFF6, 0, 20, 2);
    loop {
        UpdateLerp();
        TranslateModel(64, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableModel(62, 1);
    PlaySoundAtCollider(27, 480, 0);
});

Script N(script_ExitDoubleDoor_80240A64) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 31;
    SI_VAR(2) = 13;
    SI_VAR(3) = 11;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802418A0_A6E3A0, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240B18) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        GotoMap(D_802418B0_A6E3B0, 0);
    } else {
        GotoMap(D_802418A8_A6E3A8, 0);
    }
    sleep 100;
});

Script N(script_ExitWalk_80240BA8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        GotoMap(D_802418B0_A6E3B0, 3);
    } else {
        GotoMap(D_802418A8_A6E3A8, 3);
    }
    sleep 100;
});

Script N(script_ExitWalk_80240C38) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    await N(script_802407DC);
    sleep 15;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_802418B8_A6E3B8, 0);
    sleep 100;
});

Script N(script_80240CBC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetPlayerPos(0xFFFFFFE2, 21, 590);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFE2, 21, 590);
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    EnableModel(62, 0);
    TranslateModel(64, 0xFFFFFFF6, 0, 45);
    spawn {
        SetPlayerSpeed(3.0);
        PlayerMoveTo(75, 580, 0);
    }
    sleep 15;
    SetNpcSpeed(0xFFFFFFFC, 3.0);
    NpcMoveTo(0xFFFFFFFC, 65, 600, 0);
    await N(script_80240920);
    SetNpcFlagBits(0xFFFFFFFC, 64, 0);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_80240E1C) = SCRIPT({
    bind N(script_ExitWalk_80240B18) to 0x80000 33;
    bind N(script_ExitWalk_80240BA8) to 0x80000 36;
    bind N(script_ExitWalk_80240C38) to TriggerFlag_WALL_INTERACT 27;
});

Script N(script_80240E80) = SCRIPT({
    EnableGroup(7, 0);
    EnableGroup(10, 0);
    EnableGroup(34, 0);
});

Script N(script_EnterWalk_80240ECC) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            await N(script_80240E80);
            SI_VAR(2) = 13;
            SI_VAR(3) = 11;
            await EnterDoubleDoor;
            spawn N(script_80240E1C);
        }
        == 3 {
            await N(script_80240E80);
            spawn {
                await N(script_80240CBC);
                spawn N(script_80240E1C);
            }
        }
        == 4 {
            spawn N(script_802413C4);
        }
        == 5 {
            spawn N(script_80241670);
        }
        else {
            await N(script_80240E80);
            SI_VAR(0) = N(script_80240E1C);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

Script N(script_80240FFC) = SCRIPT({
    spawn {
        SI_VAR(0) = 0;
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
        spawn N(script_UpdateTexturePan_80240740);
    }
    SetTexPanner(74, 0);
});

s32 N(lavaResetList_8024110C)[] = {
    0x0000000D, 0xC3E38000, 0xC1700000, 0x420C0000, 0x0000000E, 0xC4084000, 0x41200000, 0x41700000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1993) = 1;
    await N(script_MakeEntities);
    spawn N(script_EnterWalk_80240ECC);
    if (SI_SAVE_FLAG(1556) == 0) {
        EnableGroup(140, 0);
        spawn N(script_80240FFC);
    } else {
        EnableGroup(106, 0);
    }
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 3;
            ModifyColliderFlags(3, 9, 3);
            ModifyColliderFlags(3, 36, 3);
            spawn {
                ResetFromLava(N(lavaResetList_8024110C));
            }
        }
    }
});

Script N(script_802412D0) = SCRIPT({
    loop {
        TranslateGroup(146, SI_MAP_VAR(10), SI_MAP_VAR(11), SI_MAP_VAR(12));
        RotateGroup(146, SI_MAP_VAR(13), 0, 1, 0);
        GetModelCenter(143);
        SI_VAR(0) -= 10;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 20;
        SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

s32 N(vectorList_802413A0)[] = {
    0xC2680000, 0xC3260000, 0xC4084000, 0xC2E80000, 0xC2480000, 0xC43DC000, 0xC2F00000, 0x43200000,
    0xC4728000,
};

Script N(script_802413C4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SI_MAP_VAR(13) = 0;
    SI_MAP_VAR(10) = 0;
    SI_MAP_VAR(11) = 0;
    SI_MAP_VAR(12) = 0;
    spawn N(script_802412D0);
    SetCamPerspective(0, 3, 30, 16, 4096);
    UseSettingsFrom(0, 0, 0xFFFFFFBA, 0);
    SetPanTarget(0, 0, 0xFFFFFFBA, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    PlaySound(386);
    LoadPath(45, N(vectorList_802413A0), 3, 0);
90:
    GetNextPathPos();
    SI_MAP_VAR(10) = SI_VAR(1);
    SI_MAP_VAR(11) = SI_VAR(2);
    SI_MAP_VAR(12) = SI_VAR(3);
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 90;
    }
    sleep 20;
    if (SI_SAVE_FLAG(8) == 0) {
        sleep 15;
        SI_SAVE_FLAG(8) = 1;
        FadeOutMusic(0, 1500);
        GotoMapSpecial(D_802418C8_A6E3C8, 8, 6);
        sleep 100;
        return;
    }
    GotoMap(D_802418C0_A6E3C0, 1);
    sleep 100;
});

s32 N(vectorList_80241640)[] = {
    0xC2F00000, 0x43200000, 0xC4728000, 0xC2E80000, 0xC2480000, 0xC43DC000, 0xC2680000, 0xC3260000,
    0xC4084000, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241670) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    InterpPlayerYaw(180, 1);
    SetNpcYaw(0xFFFFFFFC, 270);
    SI_MAP_VAR(13) = 180;
    SI_MAP_VAR(10) = 0xFFFFFF88;
    SI_MAP_VAR(11) = 160;
    SI_MAP_VAR(12) = 0xFFFFFC36;
    spawn N(script_802412D0);
    SetCamPerspective(0, 3, 30, 16, 4096);
    UseSettingsFrom(0, 0, 0xFFFFFFBA, 0);
    SetPanTarget(0, 0, 0xFFFFFFBA, 0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        PlaySound(387);
        LoadPath(45, N(vectorList_80241640), 4, 0);
    90:
        GetNextPathPos();
        SI_MAP_VAR(10) = SI_VAR(1);
        SI_MAP_VAR(11) = SI_VAR(2);
        SI_MAP_VAR(12) = SI_VAR(3);
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 90;
        }
    }
    sleep 40;
    GotoMap(D_802418D0_A6E3D0, 2);
    sleep 100;
});

// rodata: D_802418A0_A6E3A0

// rodata: D_802418A8_A6E3A8

// rodata: D_802418B0_A6E3B0

// rodata: D_802418B8_A6E3B8

// rodata: D_802418C0_A6E3C0

// rodata: D_802418C8_A6E3C8

// rodata: D_802418D0_A6E3D0

s32 pad_0018D8[] = {
    0x00000000, 0x00000000,
};
