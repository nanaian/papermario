#include "kpa_113.h"

s32 pad_000034[3];
s32 pad_000A98[2];
Script N(script_80240B10);
s32 pad_000B78[2];
Script N(script_ExitWalk_80240B80);
Script N(script_ExitWalk_80240BDC);
Script N(script_80240C38);
Script N(script_EnterWalk_80240C80);
Script N(main);
s32 pad_000E2C[1];
s32 N(itemList_80240E30)[2];
Script N(script_ExitDoubleDoor_80240E38);
Script N(script_80240EDC);
Script N(script_MakeEntities);
s32 pad_0010C4[3];
Script N(script_802410D0);
Script N(script_80241470);
Script N(script_80241564);
Script N(script_80241658);
s32 N(unk_80241740)[12];
Script N(script_80241770);
s32 N(unk_802417E0)[12];
Script N(script_80241810);
Script N(script_NpcAI_802418B0);
Script N(script_80241920);
s32 unk_missing_80241A14[33];
StaticNpc N(npcGroup_80241AC4)[1];
NpcGroupList N(npcGroupList_80241CB4);
s32 pad_001CCC[1];
const char D_80241CD0_A9E900[9]; // "kpa_112"
const char D_80241CD8_A9E908[9]; // "kpa_114"
const char D_80241CE0_A9E910[8]; // "kpa_82"
s32 pad_001CE8[2];
s32 pad_001D4C[1];

// text: func_80240000_A9CC30

s32 pad_000034[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240040_A9CC70

// text: func_802400FC_A9CD2C

// text: N(set_script_owner_npc_anim)

// text: func_8024022C_A9CE5C

// text: N(UnkNpcAIFunc12)

// text: N(set_script_owner_npc_col_height)

// text: func_80240544_A9D174

// text: func_80240984_A9D5B4

// text: func_802409CC_A9D5FC

// text: func_80240A24_A9D654

s32 pad_000A98[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -208.0f, 0.0f, 100.0f, 90.0f },
    { 408.0f, 0.0f, 100.0f, 270.0f },
    { -102.0f, 0.0f, 20.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190181,
};

Script N(script_80240B10) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(6);
    }
});

s32 pad_000B78[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240B80) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80241CD0_A9E900, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240BDC) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80241CD8_A9E908, 0);
    sleep 100;
});

Script N(script_80240C38) = SCRIPT({
    bind N(script_ExitWalk_80240B80) to 0x80000 30;
    bind N(script_ExitWalk_80240BDC) to 0x80000 33;
});

Script N(script_EnterWalk_80240C80) = SCRIPT({
    GetLoadType(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240C38);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SI_VAR(2) = 51;
        SI_VAR(3) = 53;
        await EnterDoubleDoor;
        spawn N(script_80240C38);
    } else {
        SI_VAR(0) = N(script_80240C38);
        spawn EnterWalk;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241CB4));
    await N(script_MakeEntities);
    spawn N(script_80241658);
    spawn N(script_80240B10);
    spawn N(script_EnterWalk_80240C80);
    sleep 1;
});

s32 pad_000E2C[] = {
    0x00000000,
};

s32 N(itemList_80240E30)[] = {
    0x0000001A, 0x00000000,
};

Script N(script_ExitDoubleDoor_80240E38) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 38;
    SI_VAR(2) = 51;
    SI_VAR(3) = 53;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80241CE0_A9E910, 0);
    sleep 100;
});

Script N(script_80240EDC) = SCRIPT({
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
    PlaySound(617);
    RemoveKeyItemAt(SI_VAR(1));
    SI_SAVE_FLAG(1583) = 1;
    SI_VAR(0) = SI_MAP_VAR(1);
    func_80240000_A9CC30();
    SI_VAR(1) = 0;
    sleep 5;
    0x802D6954();
    unbind;
    bind N(script_ExitDoubleDoor_80240E38) to TriggerFlag_WALL_INTERACT 38;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
// *INDENT-OFF*
Script N(script_MakeEntities) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1583), 0),
        SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802BCD68, 418, 10, 100, 280, 0x80000000),
        SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(1), SI_VAR(0)),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80240EDC), TriggerFlag_WALL_INTERACT, 0x4000, N(itemList_80240E30), 0, 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_ExitDoubleDoor_80240E38), TriggerFlag_WALL_INTERACT, 38, 1, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, MakeEntity, 0x802E9A18, 375, 60, 50, 0, 0x80000000),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 pad_0010C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802410D0) = SCRIPT({
    group 0;
    loop 20 {
        GetCurrentPartner(SI_VAR(10));
        if (SI_VAR(10) != 0) {
            SI_VAR(8) = -1;
            return;
        }
        func_80240040_A9CC70(SI_VAR(9));
        if (SI_VAR(0) == 0) {
            SI_VAR(8) = -1;
            return;
        } else {
            SetPlayerActionState(20);
        }
        sleep 1;
    }
    GetCurrentPartner(SI_VAR(10));
    if (SI_VAR(10) != 0) {
        SI_VAR(8) = -1;
        return;
    }
    DisablePlayerInput(1);
    SetPlayerActionState(20);
    spawn {
        ShakeCam(0, 0, 100, 0.6005859375);
    }
    spawn {
        if (SI_VAR(6) >= SI_VAR(7)) {
            InterpPlayerYaw(270, 0);
        } else {
            InterpPlayerYaw(90, 0);
        }
        SetPlayerActionState(20);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(2) = SI_VAR(7);
        SI_VAR(2) -= SI_VAR(6);
        SI_VAR(1) += SI_VAR(2);
        MakeLerp(SI_VAR(0), SI_VAR(1), 100, 0);
        loop {
            SetPlayerActionState(20);
            UpdateLerp();
            func_802400FC_A9CD2C();
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetPlayerActionState(0);
        DisablePlayerInput(0);
    }
    MakeLerp(SI_VAR(6), SI_VAR(7), 100, 0);
    PlaySoundAtCollider(SI_VAR(9), 0x80000010, 0);
    loop {
        UpdateLerp();
        TranslateGroup(35, SI_VAR(0), 0, 0);
        UpdateColliderTransform(19);
        UpdateColliderTransform(17);
        UpdateColliderTransform(18);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(0x80000010);
});

Script N(script_80241470) = SCRIPT({
    if (SI_SAVE_VAR(302) == 2) {
        return;
    }
    if (SI_SAVE_VAR(302) == 0) {
        SI_VAR(6) = 0;
        SI_VAR(7) = 50;
        SI_VAR(8) = 2;
    } else {
        SI_VAR(6) = 0xFFFFFFCE;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
    }
    SI_VAR(9) = 17;
    await N(script_802410D0);
    if (SI_VAR(8) != -1) {
        SI_SAVE_VAR(302) = SI_VAR(8);
    }
});

Script N(script_80241564) = SCRIPT({
    if (SI_SAVE_VAR(302) == 1) {
        return;
    }
    if (SI_SAVE_VAR(302) == 0) {
        SI_VAR(6) = 0;
        SI_VAR(7) = 0xFFFFFFCE;
        SI_VAR(8) = 1;
    } else {
        SI_VAR(6) = 50;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
    }
    SI_VAR(9) = 18;
    await N(script_802410D0);
    if (SI_VAR(8) != -1) {
        SI_SAVE_VAR(302) = SI_VAR(8);
    }
});

Script N(script_80241658) = SCRIPT({
    match SI_SAVE_VAR(302) {
        == 1 {
            TranslateGroup(35, 0xFFFFFFCE, 0, 0);
        }
        == 2 {
            TranslateGroup(35, 50, 0, 0);
        }
    }
    ParentColliderToModel(19, 34);
    ParentColliderToModel(17, 34);
    ParentColliderToModel(18, 34);
    bind N(script_80241470) to TriggerFlag_WALL_PUSH 17;
    bind N(script_80241564) to TriggerFlag_WALL_PUSH 18;
});

s32 N(unk_80241740)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40900000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80241770) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80240544_A9D174(N(unk_80241740));
});

s32 N(unk_802417E0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40E00000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80241810) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_80240544_A9D174(N(unk_802417E0));
});

NpcAISettings N(aISettings_80241880) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x14,
    .waitTime = 0x5,
    .alertRadius = 120.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 6.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802418B0) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_80240544_A9D174(N(aISettings_80241880));
});

Script N(script_80241920) = SCRIPT({
    func_80240984_A9D5B4();
    SetNpcAnimation(-1, 0x33000F);
    func_802409CC_A9D5FC();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_80240A24_A9D654();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80240544_A9D174(N(unk_80241740));
});

s32 unk_missing_80241A14[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80241770), 0x80077F70, 0x00000000, 0x8007809C,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80241920),
    0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016,
    0x00000000, 0x00000000, N(script_80241810), 0x80077F70, 0x00000000, 0x8007809C, 0x00000000, 0x00000000,
    0x00110000,
};

NpcSettings N(npcSettings_80241A98) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802418B0),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x19,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_80241AC4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241A98),
        .pos = { 100.0, 0.0, 83.0 },
        .flags = 0x00002C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000064, 0x00000000, 0x00000053, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000041, 0x00000000, 0x00000064, 0x00000104, 0x00000064, 0x00000001, 0x00000001 },
        .animations = {
            0x00550004, 0x0055000C, 0x0055000E, 0x0055000E, 0x00550004, 0x00550004, 0x00550018, 0x00550018, 0x00550010, 0x00550016, 0x00550012, 0x00550004, 0x00550004, 0x00550004, 0x00550004, 0x00550004,
        },
    },
};

NpcGroupList N(npcGroupList_80241CB4) = {
    NPC_GROUP(N(npcGroup_80241AC4), 0x2206000D),
    {},
};

s32 pad_001CCC[] = {
    0x00000000,
};

// rodata: D_80241CD0_A9E900

// rodata: D_80241CD8_A9E908

// rodata: D_80241CE0_A9E910

s32 pad_001CE8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241CF0_A9E920

// rodata: jtbl_80241CF8_A9E928

s32 pad_001D4C[] = {
    0x00000000,
};
