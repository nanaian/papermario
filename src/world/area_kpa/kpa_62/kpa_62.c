#include "kpa_62.h"

s32 pad_0000D4[3];
s32 pad_0003EC[1];
Script N(script_80240470);
s32 pad_000518[2];
s32 N(itemList_80240520)[2];
Script N(script_80240528);
Script N(script_MakeEntities);
Script N(script_UpdateTexturePan_80240750);
Script N(script_802407EC);
Script N(script_80240930);
Script N(script_ExitDoubleDoor_80240A74);
Script N(script_ExitWalk_80240B28);
Script N(script_ExitWalk_80240BB8);
Script N(script_ExitWalk_80240C48);
Script N(script_80240CCC);
Script N(script_80240E2C);
Script N(script_80240E90);
Script N(script_EnterWalk_80240EE8);
Script N(script_80241050);
s32 N(lavaResetList_80241160)[16];
Script N(main);
const char D_80241370_A73590[8]; // "kpa_70"
const char D_80241378_A73598[8]; // "kpa_10"
const char D_80241380_A735A0[8]; // "kpa_11"
const char D_80241388_A735A8[8]; // "kpa_63"

// text: func_80240000_A72220

// text: func_80240034_A72254

s32 pad_0000D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802400E0_A72300

// text: func_80240204_A72424

s32 pad_0003EC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -191.0f, 0.0f, -135.0f, 180.0f },
    { 276.0f, 0.0f, -305.0f, 180.0f },
    { 386.0f, -45.0f, -231.0f, 180.0f },
    { 75.0f, 21.0f, 600.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190157,
};

Script N(script_80240470) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    if (SI_SAVE_FLAG(1556) == 0) {
        PlayAmbientSounds(10);
    } else {
        ClearAmbientSounds(250);
    }
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(4);
    }
});

s32 pad_000518[] = {
    0x00000000, 0x00000000,
};

s32 N(itemList_80240520)[] = {
    0x0000001A, 0x00000000,
};

Script N(script_80240528) = SCRIPT({
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
    func_80240034_A72254(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(617, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    func_80240000_A72220();
    SI_VAR(1) = 0;
    sleep 5;
    0x802D6954();
    unbind;
    bind N(script_ExitDoubleDoor_80240A74) to TriggerFlag_WALL_INTERACT 36;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1564), 0),
        SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 0xFFFFFF38, 10, 0xFFFFFF31, 0, 0x80000000),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), SI_VAR(0)),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80240528), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80240520), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80240A74), TriggerFlag_WALL_INTERACT, 36, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802EA5AC, 0xFFFFFDEC, 145, 0xFFFFFFC5, 0, 307, 0x80000000),
    SI_CMD(ScriptOpcode_CALL, AssignBlockFlag, SI_SAVE_FLAG(1565)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_UpdateTexturePan_80240750) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802400E0_A72300();
                    return;
                }
            }
        }
    }
    func_80240204_A72424();
});

Script N(script_802407EC) = SCRIPT({
    PlaySoundAtCollider(32, 479, 0);
    EnableModel(38, 0);
    MakeLerp(0, 0xFFFFFFF6, 20, 2);
    loop {
        UpdateLerp();
        TranslateModel(40, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(0, 45, 25, 2);
    loop {
        UpdateLerp();
        TranslateModel(40, 0xFFFFFFF6, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80240930) = SCRIPT({
    PlaySoundAtCollider(32, 480, 0);
    MakeLerp(45, 0, 25, 2);
    loop {
        UpdateLerp();
        TranslateModel(40, 0xFFFFFFF6, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    MakeLerp(0xFFFFFFF6, 0, 20, 2);
    loop {
        UpdateLerp();
        TranslateModel(40, SI_VAR(0), 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableModel(38, 1);
});

Script N(script_ExitDoubleDoor_80240A74) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 36;
    SI_VAR(2) = 2;
    SI_VAR(3) = 0;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80241370_A73590, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240B28) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        GotoMap(D_80241380_A735A0, 0);
    } else {
        GotoMap(D_80241378_A73598, 0);
    }
    sleep 100;
});

Script N(script_ExitWalk_80240BB8) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        GotoMap(D_80241380_A735A0, 3);
    } else {
        GotoMap(D_80241378_A73598, 3);
    }
    sleep 100;
});

Script N(script_ExitWalk_80240C48) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    await N(script_802407EC);
    sleep 15;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80241388_A735A8, 0);
    sleep 100;
});

Script N(script_80240CCC) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetPlayerPos(0xFFFFFFE2, 21, 590);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFE2, 21, 590);
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    EnableModel(38, 0);
    TranslateModel(40, 0xFFFFFFF6, 0, 45);
    spawn {
        SetPlayerSpeed(3.0);
        PlayerMoveTo(75, 580, 0);
    }
    sleep 15;
    SetNpcSpeed(0xFFFFFFFC, 3.0);
    NpcMoveTo(0xFFFFFFFC, 65, 600, 0);
    await N(script_80240930);
    SetNpcFlagBits(0xFFFFFFFC, 64, 0);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_80240E2C) = SCRIPT({
    bind N(script_ExitWalk_80240B28) to 0x80000 38;
    bind N(script_ExitWalk_80240BB8) to 0x80000 41;
    bind N(script_ExitWalk_80240C48) to TriggerFlag_WALL_INTERACT 32;
});

Script N(script_80240E90) = SCRIPT({
    ModifyColliderFlags(0, 16, 0x7FFFFE00);
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    ModifyColliderFlags(0, 10, 0x7FFFFE00);
});

Script N(script_EnterWalk_80240EE8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            await N(script_80240E90);
            SI_VAR(2) = 2;
            SI_VAR(3) = 0;
            await EnterDoubleDoor;
            spawn N(script_80240E2C);
        }
        == 1 {
            await N(script_80240E90);
            SI_VAR(0) = N(script_80240E2C);
            spawn EnterWalk;
            sleep 1;
        }
        == 2 {
            SI_VAR(0) = N(script_80240E2C);
            spawn EnterWalk;
            sleep 1;
        }
        == 3 {
            await N(script_80240E90);
            spawn {
                await N(script_80240CCC);
                spawn N(script_80240E2C);
            }
        } else {
            SI_VAR(0) = N(script_80240E2C);
            spawn EnterWalk;
            sleep 1;
        }
    }
});

Script N(script_80241050) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80240750);
    }
    SetTexPanner(50, 0);
});

s32 N(lavaResetList_80241160)[] = {
    0x00000012, 0xC3E38000, 0xC1700000, 0x420C0000, 0x00000013, 0xC4084000, 0x41200000, 0x41700000,
    0x00000018, 0xC3D50000, 0xC20C0000, 0x428C0000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
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
    spawn N(script_EnterWalk_80240EE8);
    spawn N(script_80240470);
    if (SI_SAVE_FLAG(1556) == 0) {
        EnableGroup(116, 0);
        spawn N(script_80241050);
    } else {
        EnableGroup(82, 0);
    }
    if (SI_SAVE_FLAG(1556) == 0) {
        spawn {
            sleep 3;
            ModifyColliderFlags(3, 9, 3);
            ModifyColliderFlags(3, 41, 3);
            ModifyColliderFlags(3, 10, 3);
            ModifyColliderFlags(3, 11, 3);
            spawn {
                ResetFromLava(N(lavaResetList_80241160));
            }
        }
    }
});

// rodata: D_80241370_A73590

// rodata: D_80241378_A73598

// rodata: D_80241380_A735A0

// rodata: D_80241388_A735A8
