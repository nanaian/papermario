#include "kkj_19.h"

s32 pad_0002AC[1];
s32 pad_000D0C[1];
Script N(script_80240D60);
s32 N(intTable_80240E10)[30];
s32 N(unk_80240E88)[1];
s32 N(unk_80240E8C)[1];
s32 N(unk_80240E90)[1];
Script N(script_80240E94);
s32 pad_000EB4[1];
s32 N(unk_80240EB8)[14];
s32 N(unk_80240EF0)[18];
Script N(script_ExitSingleDoor_80240F38);
Script N(script_80241010);
Script N(script_EnterSingleDoor_8024103C);
Script N(main);
s32 pad_0011EC[1];
s32 unk_missing_8024121C[11];
Script N(script_Interact_80241248);
Script N(script_Interact_80241278);
Script N(script_Init_802412A8);
Script N(script_Init_802412E0);
StaticNpc N(npcGroup_80241304)[2];
NpcGroupList N(npcGroupList_802416E4);
s32 pad_0016FC[1];
s32 unk_missing_8024172C[22];
Script N(script_Interact_80241784);
Script N(script_Idle_802417A8);
Script N(script_Init_80241850);
StaticNpc N(npcGroup_80241904)[1];
NpcGroupList N(npcGroupList_80241AF4);
s32 pad_001B0C[1];
s32 N(unk_80241B10)[1];
s32 N(unk_80241B14)[1];
Script N(script_80241B18);
Script N(script_80241C5C);
Script N(script_80241CAC);
Script N(script_80241DE0);
s32 N(itemList_80241E30)[10];
Script N(script_80241E58);
Script N(script_80242134);
Script N(script_802422C4);
Script N(script_80242340);
Script N(script_80242A18);
Script N(script_80242EC4);
Script N(script_8024300C);
Script N(script_802430A4);
Script N(script_8024313C);
Script N(script_80243204);
s32 N(vectorList_80243230)[15];
Script N(script_8024326C);
Script N(script_8024333C);
Script N(script_8024344C);
Script N(script_80243500);
Script N(script_8024359C);
Script N(script_8024369C);
Script N(script_ExitSingleDoor_80243700);
Script N(script_EnterSingleDoor_80243828);
Script N(script_80243DA4);
Script N(script_80243F14);
const char D_802461A0_AFDAF0[8]; // "kkj_10"
const char D_802461A8_AFDAF8[8]; // "kkj_00"
const char D_802461E4_AFDB34[8]; // "kkj_18"
s32 pad_0061EC[1];

// text: func_80240000_AF7950

// text: func_80240068_AF79B8

// text: func_802400E4_AF7A34

// text: func_80240178_AF7AC8

// text: func_802401FC_AF7B4C

s32 pad_0002AC[] = {
    0x00000000,
};

// text: func_802402B0_AF7C00

// text: func_8024030C_AF7C5C

// text: func_802404DC_AF7E2C

// text: func_80240530_AF7E80

// text: func_80240568_AF7EB8

// text: func_80240604_AF7F54

// text: func_802406A0_AF7FF0

// text: func_802406C4_AF8014

// text: func_80240B4C_AF849C

// text: func_80240B8C_AF84DC

// text: func_80240BE4_AF8534

// text: func_80240C10_AF8560

// text: func_80240C4C_AF859C

// text: func_80240CB4_AF8604

s32 pad_000D0C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 485.0f, 0.0f, 25.0f, 330.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190014,
};

Script N(script_80240D60) = SCRIPT({
    if (SI_SAVE_VAR(0) == 0xFFFFFF80) {
        SetMusicTrack(0, 63, 1, 7);
        sleep 3;
        SetMusicTrack(0, 63, 1, 6);
        return;
    }
    if (SI_SAVE_VAR(0) == 6) {
        SetMusicTrack(0, 116, 0, 8);
        return;
    }
});

s32 N(intTable_80240E10)[] = {
    0x0000005D, 0x00000011, 0x00000000, 0x0000005E, 0x00000012, 0x00000000, 0x0000005F, 0x00000013,
    0x00000000, 0x00000061, 0x00000015, 0x00000000, 0x00000060, 0x00000016, 0x00000000, 0x00000062,
    0x00000017, 0x00000000, 0x00000063, 0x00000018, 0x00000000, 0x00000064, 0x00000019, 0x00000000,
    0x00000065, 0x00000010, 0x00000000, 0x00000066, 0x00000014, 0x00000000,
};

s32 N(unk_80240E88)[] = {
    0x00000000,
};

s32 N(unk_80240E8C)[] = {
    0x00000000,
};

s32 N(unk_80240E90)[] = {
    0x00000000,
};

Script N(script_80240E94) = SCRIPT({
    func_80240000_AF7950(SI_VAR(0));
});

s32 pad_000EB4[] = {
    0x00000000,
};

s32 N(unk_80240EB8)[] = {
    0x00000000, 0x00000000, 0x00000000, D_8010B160, 0x31100810, 0x08100810, 0x08000000, 0x00000000,
    0xFC617E60, 0xF5FFF578, 0xFC612660, 0xF5FFFF78, 0xFFB7B5FF, 0x7A593FFF,
};

s32 N(unk_80240EF0)[] = {
    0x0A000064, 0x00420078, 0x001C0000, func_802400E4_AF7A34, 0x00000000, 0xFF000000, 0x00000002, 0x00000000,
    N(unk_80240EB8), 0x0B000020, 0x00B80100, 0x00200000, func_80240178_AF7AC8, 0x00000000, 0xFF000000, 0x00000002,
    0x00000000, 0xFFFFFFFF,
};

Script N(script_ExitSingleDoor_80240F38) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 2;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    if (SI_SAVE_VAR(0) == 0xFFFFFF80) {
        GotoMap(D_802461A8_AFDAF8, 3);
    } else {
        GotoMap(D_802461A0_AFDAF0, 3);
    }
    sleep 100;
});

Script N(script_80241010) = SCRIPT({
    bind N(script_ExitSingleDoor_80240F38) to TriggerFlag_WALL_INTERACT 2;
});

Script N(script_EnterSingleDoor_8024103C) = SCRIPT({
    if (SI_SAVE_VAR(0) == 6) {
        spawn N(script_80243F14);
    } else {
        SI_VAR(0) = 0;
        SI_VAR(2) = 2;
        SI_VAR(3) = -1;
        await EnterSingleDoor;
        spawn N(script_80241010);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF80 {
            MakeNpcs(0, N(npcGroupList_802416E4));
        }
        == 6 {
            MakeNpcs(0, N(npcGroupList_80241AF4));
        }
    }
    spawn N(script_80240D60);
    UseDoorSounds(0);
    spawn N(script_EnterSingleDoor_8024103C);
    sleep 1;
    if (SI_SAVE_VAR(0) == 6) {
        func_802401FC_AF7B4C();
    }
});

s32 pad_0011EC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_802411F0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
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

s32 unk_missing_8024121C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Interact_80241248) = SCRIPT({
    SpeakToPlayer(-1, 0xAA0004, 0xAA0001, 0, 49);
});

Script N(script_Interact_80241278) = SCRIPT({
    SpeakToPlayer(-1, 0x830004, 0x830001, 0, 50);
});

Script N(script_Init_802412A8) = SCRIPT({
    SetNpcAnimation(-1, 0xAA0001);
    BindNpcInteract(-1, N(script_Interact_80241248));
});

Script N(script_Init_802412E0) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241278));
});

StaticNpc N(npcGroup_80241304)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802411F0),
        .pos = { 400.0, 0.0, -70.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_802412A8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00AA0001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802411F0),
        .pos = { 250.0, 0.0, -110.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_802412E0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
    },
};

NpcGroupList N(npcGroupList_802416E4) = {
    NPC_GROUP(N(npcGroup_80241304), 0x00000000),
    {},
};

s32 pad_0016FC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80241700) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
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

s32 unk_missing_8024172C[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Interact_80241784) = SCRIPT({
    SetSelfVar(0, 0);
});

Script N(script_Idle_802417A8) = SCRIPT({
    loop {
        sleep 1;
        GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetSelfVar(1, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            NpcFacePlayer(0xFFFFFFFC, 0);
        }
    }
});

Script N(script_Init_80241850) = SCRIPT({
    SetNpcFlagBits(-1, 2, 1);
    EnableNpcShadow(-1, 0);
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcCollisionSize(-1, 20, 20);
    BindNpcInteract(-1, N(script_Interact_80241784));
    BindNpcIdle(-1, N(script_Idle_802417A8));
});

StaticNpc N(npcGroup_80241904)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241700),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x08000F05,
        .init = N(script_Init_80241850),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
    },
};

NpcGroupList N(npcGroupList_80241AF4) = {
    NPC_GROUP(N(npcGroup_80241904), 0x00000000),
    {},
};

s32 pad_001B0C[] = {
    0x00000000,
};

s32 N(unk_80241B10)[] = {
    0x00000000,
};

s32 N(unk_80241B14)[] = {
    0x00000000,
};

Script N(script_80241B18) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024030C_AF7C5C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240530_AF7E80(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241C5C) = {
    SI_CMD(ScriptOpcode_CALL, func_80240568_AF7EB8, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241B18), 0x10, 0, D_802461F0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802404DC_AF7E2C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80241CAC) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_8024030C_AF7C5C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240530_AF7E80(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241DE0) = {
    SI_CMD(ScriptOpcode_CALL, func_80240604_AF7F54, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241CAC), 0x10, 0, N(script_802463B8), 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802404DC_AF7E2C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 N(itemList_80241E30)[] = {
    0x0000005D, 0x0000005E, 0x0000005F, 0x00000061, 0x00000060, 0x00000062, 0x00000063, 0x00000064,
    0x00000065, 0x00000066,
};

Script N(script_80241E58) = SCRIPT({
    match SI_AREA_VAR(1) {
        == 0 {
            MakeItemEntity(354, 287, 16, 0xFFFFFFD8, 1, 0);
            SI_AREA_VAR(4) = SI_VAR(0);
            MakeItemEntity(352, 230, 16, 0, 1, 0);
            SI_AREA_VAR(5) = SI_VAR(0);
        }
        == 1 {
            MakeItemEntity(354, 287, 16, 0xFFFFFFD8, 1, 0);
            SI_AREA_VAR(4) = SI_VAR(0);
            MakeItemEntity(352, 230, 16, 0, 1, 0);
            SI_AREA_VAR(5) = SI_VAR(0);
        }
        == 2 {
            MakeItemEntity(355, 287, 16, 0xFFFFFFD8, 1, 0);
            SI_AREA_VAR(4) = SI_VAR(0);
            MakeItemEntity(352, 230, 16, 0, 1, 0);
            SI_AREA_VAR(5) = SI_VAR(0);
        }
        == 3 {
            MakeItemEntity(355, 287, 16, 0xFFFFFFD8, 1, 0);
            SI_AREA_VAR(4) = SI_VAR(0);
            MakeItemEntity(352, 230, 16, 0, 1, 0);
            SI_AREA_VAR(5) = SI_VAR(0);
        }
        == 4 {
            MakeItemEntity(355, 287, 16, 0xFFFFFFD8, 1, 0);
            SI_AREA_VAR(4) = SI_VAR(0);
            MakeItemEntity(352, 230, 16, 0, 1, 0);
            SI_AREA_VAR(5) = SI_VAR(0);
        }
        == 5 {
            MakeItemEntity(351, 287, 20, 0xFFFFFFE2, 1, 0);
            SI_AREA_VAR(5) = SI_VAR(0);
            MakeItemEntity(354, 230, 16, 0, 1, 0);
            SI_AREA_VAR(4) = SI_VAR(0);
        }
    }
});

Script N(script_80242134) = SCRIPT({
    SetPlayerAnimation(0xC0020);
    SI_VAR(0) = 0;
    loop {
        match SI_AREA_VAR(3) {
            == 2 {
                SI_VAR(1) = 0;
            }
            == 3 {
                if (SI_VAR(1) == 0) {
                    match SI_VAR(0) {
                        == 0 {
                            SetPlayerAnimation(0xC0020);
                            SI_VAR(0) = 1;
                        }
                        == 1 {
                            SetPlayerAnimation(0xC0021);
                            SI_VAR(0) = 2;
                        }
                        == 2 {
                            SetPlayerAnimation(0xC0022);
                            SI_VAR(0) = 3;
                        }
                        == 3 {
                            SetPlayerAnimation(0xC0023);
                            SI_VAR(0) = 0;
                        }
                    }
                    SI_VAR(1) = 1;
                } else {
                    SI_VAR(1) = 0;
                }
            }
        }
        sleep 1;
    }
});

Script N(script_802422C4) = SCRIPT({
    if (SI_AREA_VAR(2) != 0) {
        FindKeyItem(SI_AREA_VAR(2), SI_VAR(0));
        RemoveKeyItemAt(SI_VAR(0));
        SI_AREA_VAR(2) = 0;
        func_80240C10_AF8560(0);
        SetPlayerActionState(0);
    }
});

Script N(script_80242340) = SCRIPT({
    if (SI_AREA_VAR(0) == 6) {
        return;
    }
    func_80240BE4_AF8534(SI_VAR(0));
    match SI_VAR(0) {
        == 17 {
            SI_VAR(0) = 93;
        }
        == 18 {
            SI_VAR(0) = 94;
        }
        == 19 {
            SI_VAR(0) = 95;
        }
        == 21 {
            SI_VAR(0) = 97;
        }
        == 22 {
            SI_VAR(0) = 96;
        }
        == 23 {
            SI_VAR(0) = 98;
        }
        == 24 {
            SI_VAR(0) = 99;
        }
        == 25 {
            SI_VAR(0) = 100;
        }
        == 16 {
            SI_VAR(0) = 101;
        }
        == 20 {
            SI_VAR(0) = 102;
        }
        else {
            return;
        }
    }
    DisablePlayerInput(1);
    SI_AREA_FLAG(18) = 0;
    sleep 5;
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(0);
    if (SI_AREA_VAR(2) == 0) {
        func_80240B8C_AF84DC(SI_VAR(10));
        SetMessageString(SI_VAR(10), 0);
        func_80240BE4_AF8534(SI_VAR(0));
        match SI_VAR(0) {
            == 17 {
                SI_VAR(0) = 16;
            }
            == 18 {
                SI_VAR(0) = 15;
            }
            == 19 {
                SI_VAR(0) = 8;
            }
            == 21 {
                SI_VAR(0) = 2;
            }
            == 22 {
                SI_VAR(0) = 1;
            }
            == 23 {
                SI_VAR(0) = 3;
            }
            == 24 {
                SI_VAR(0) = 4;
            }
            == 25 {
                SI_VAR(0) = 5;
            }
            == 16 {
                SI_VAR(0) = 7;
            }
            == 20 {
                SI_VAR(0) = 6;
            }
        }
        func_80240C10_AF8560(SI_VAR(0));
        SetPlayerActionState(0);
        SI_AREA_VAR(2) = SI_VAR(11);
        AddKeyItem(SI_VAR(11));
        ShowMessageAtScreenPos(0x1400E7, 160, 40);
    } else {
        FindKeyItem(SI_VAR(0), SI_VAR(1));
        if (SI_VAR(1) == -1) {
            SI_VAR(9) = SI_AREA_VAR(2);
            func_80240B8C_AF84DC(SI_VAR(9));
            func_80240B8C_AF84DC(SI_VAR(10));
            SetMessageString(SI_VAR(9), 0);
            SetMessageString(SI_VAR(10), 1);
            ShowMessageAtScreenPos(0x1400E9, 160, 40);
            ShowChoice(0x1E002B);
            if (SI_VAR(0) == 0) {
                await N(script_802422C4);
                func_80240BE4_AF8534(SI_VAR(0));
                match SI_VAR(0) {
                    == 17 {
                        SI_VAR(0) = 16;
                    }
                    == 18 {
                        SI_VAR(0) = 15;
                    }
                    == 19 {
                        SI_VAR(0) = 8;
                    }
                    == 21 {
                        SI_VAR(0) = 2;
                    }
                    == 22 {
                        SI_VAR(0) = 1;
                    }
                    == 23 {
                        SI_VAR(0) = 3;
                    }
                    == 24 {
                        SI_VAR(0) = 4;
                    }
                    == 25 {
                        SI_VAR(0) = 5;
                    }
                    == 16 {
                        SI_VAR(0) = 7;
                    }
                    == 20 {
                        SI_VAR(0) = 6;
                    }
                }
                func_80240C10_AF8560(SI_VAR(0));
                SetPlayerActionState(0);
                SI_AREA_VAR(2) = SI_VAR(11);
                AddKeyItem(SI_VAR(11));
                SwitchMessage(0x1400EA);
            } else {
                CloseMessage();
            }
        } else {
            func_80240B8C_AF84DC(SI_VAR(10));
            SetMessageString(SI_VAR(10), 0);
            ShowMessageAtScreenPos(0x1400E6, 160, 40);
            ShowChoice(0x1E002B);
            if (SI_VAR(0) == 0) {
                await N(script_802422C4);
                SwitchMessage(0x1400E8);
            } else {
                CloseMessage();
            }
        }
    }
    SI_AREA_FLAG(18) = 1;
    sleep 5;
    DisablePlayerInput(0);
});

Script N(script_80242A18) = SCRIPT({
    if (SI_AREA_VAR(0) == 6) {
        return;
    }
    group 0;
    func_802D5830(1);
    func_802D6420();
    SI_VAR(2) = SI_VAR(0);
    match SI_VAR(2) {
        == 0 {
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
    RemoveKeyItemAt(SI_VAR(1));
    SI_AREA_VAR(2) = 0;
    func_80240C10_AF8560(0);
    SetPlayerActionState(0);
    match SI_AREA_VAR(0) {
        == 1 {
            match SI_VAR(0) {
                == 93 {
                    SI_AREA_FLAG(11) = 1;
                }
                == 95 {
                    SI_AREA_FLAG(10) = 1;
                }
                else {
                    SI_AREA_FLAG(14) = 0;
                }
            }
            if (SI_AREA_VAR(3) == 0) {
                RemoveItemEntity(SI_AREA_VAR(4));
                MakeItemEntity(355, 287, 16, 0xFFFFFFD8, 1, 0);
                SI_AREA_VAR(4) = SI_VAR(0);
            }
            if (SI_AREA_VAR(3) > 1) {
                SI_AREA_FLAG(14) = 0;
            }
        }
        == 3 {
            match SI_VAR(0) {
                == 101 {
                    SI_AREA_FLAG(12) = 1;
                }
                == 98 {
                    SI_AREA_FLAG(13) = 1;
                }
                else {
                    SI_AREA_FLAG(14) = 0;
                }
            }
            if (SI_AREA_VAR(3) > 1) {
                SI_AREA_FLAG(14) = 0;
            }
        }
        == 5 {
            match SI_AREA_VAR(3) {
                == 0 {
                    if (SI_VAR(0) != 96) {
                        SI_AREA_FLAG(9) = 1;
                    }
                }
                == 1 {
                    if (SI_VAR(0) != 97) {
                        SI_AREA_FLAG(9) = 1;
                    }
                }
                else {
                    SI_AREA_FLAG(9) = 1;
                }
            }
            RemoveItemEntity(SI_AREA_VAR(5));
            match SI_VAR(0) {
                == 97 {
                    if (SI_AREA_FLAG(15) == 0) {
                        MakeItemEntity(357, 287, 20, 0xFFFFFFE2, 1, 0);
                        SI_AREA_VAR(5) = SI_VAR(0);
                    } else {
                        MakeItemEntity(350, 287, 20, 0xFFFFFFE2, 1, 0);
                        SI_AREA_VAR(5) = SI_VAR(0);
                    }
                    SI_AREA_FLAG(16) = 1;
                }
                else {
                    MakeItemEntity(356, 287, 20, 0xFFFFFFE2, 1, 0);
                    SI_AREA_VAR(5) = SI_VAR(0);
                    SI_AREA_FLAG(15) = 1;
                    SI_AREA_FLAG(16) = 0;
                }
            }
        }
    }
    SI_AREA_VAR(3) += 1;
    func_802D6954();
    func_802D5830(0);
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242EC4) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242A18), TriggerFlag_FLOOR_INTERACT, 7, N(itemList_80241E30), 0, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 17, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 18, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 19, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 21, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 22, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 23, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 24, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 25, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 16, 1, 0),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242340), TriggerFlag_FLOOR_INTERACT, 20, 1, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_8024300C) = SCRIPT({
    MakeLerp(0, 90, 10, 0);
    loop {
        UpdateLerp();
        RotateGroup(23, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802430A4) = SCRIPT({
    MakeLerp(90, 0, 10, 0);
    loop {
        UpdateLerp();
        RotateGroup(23, SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_8024313C) = SCRIPT({
    if (SI_AREA_FLAG(16) == 0) {
        SI_VAR(0) = 17;
    } else {
        if (SI_AREA_FLAG(15) == 0) {
            SI_VAR(0) = 18;
        } else {
            SI_VAR(0) = 9;
        }
    }
    RemoveItemEntity(SI_AREA_VAR(5));
    func_80240C10_AF8560(SI_VAR(0));
    SetPlayerActionState(0);
    SI_AREA_FLAG(17) = 1;
    unbind;
});

Script N(script_80243204) = SCRIPT({
    bind N(script_8024313C) to TriggerFlag_WALL_INTERACT 13;
});

s32 N(vectorList_80243230)[] = {
    0x43DC0000, 0x41C80000, 0xC1F00000, 0x43F00000, 0x42700000, 0xC2700000, 0x44098000, 0x42480000,
    0xC2B40000, 0x44138000, 0x42200000, 0xC2DC0000, 0x441D8000, 0x42C80000, 0xC2F80000,
};

Script N(script_8024326C) = SCRIPT({
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 200);
    SetCamPitch(0, 17.0, -4.5);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_8024333C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    SI_VAR(1) += SI_VAR(4);
    SI_VAR(1) /= 2;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 275);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_8024344C) = SCRIPT({
    UseSettingsFrom(0, 130, 0, 0xFFFFFF9C);
    SetPanTarget(0, 130, 0, 0xFFFFFF9C);
    SetCamDistance(0, 250);
    SetCamPitch(0, 17.0, -13.0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_80243500) = SCRIPT({
    UseSettingsFrom(0, 330, 0, 0xFFFFFFB0);
    SetPanTarget(0, 330, 0, 0xFFFFFFB0);
    SetCamDistance(0, 300.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_8024359C) = SCRIPT({
    SetEnemyFlagBits(0, 0x8000000, 1);
    SetNpcVar(0, 1, 0);
    GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(1), SI_VAR(2));
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < SI_VAR(3)) {
        SI_VAR(0) += 40;
    } else {
        SI_VAR(0) -= 40;
    }
    SI_VAR(1) += 30;
    NpcFlyTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 15, 0xFFFFFFFB, 0);
    NpcFacePlayer(0xFFFFFFFC, 5);
});

Script N(script_8024369C) = SCRIPT({
    SetNpcSpeed(0xFFFFFFFC, 2.0);
    NpcFlyTo(0xFFFFFFFC, 390, 50, 0xFFFFFFBA, 0, 0xFFFFFFFB, 0);
    InterpNpcYaw(0xFFFFFFFC, 270, 5);
});

Script N(script_ExitSingleDoor_80243700) = SCRIPT({
    if (SI_AREA_FLAG(17) == 0) {
        DisablePlayerInput(1);
        if (SI_AREA_VAR(0) == 6) {
            SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400C1);
        } else {
            SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400BE);
        }
        DisablePlayerInput(0);
    } else {
        SI_VAR(0) = 0;
        SI_VAR(1) = 2;
        SI_VAR(2) = 2;
        SI_VAR(3) = -1;
        spawn ExitSingleDoor;
        sleep 17;
        GotoMap(D_802461E4_AFDB34, 0);
        sleep 100;
    }
});

Script N(script_EnterSingleDoor_80243828) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(2) = 2;
    SI_VAR(3) = -1;
    await EnterSingleDoor;
    spawn {
        SetNpcSpeed(0xFFFFFFFC, 2.0);
        NpcFlyTo(0xFFFFFFFC, 440, 25, 0xFFFFFFE2, 0, 0xFFFFFFFB, 0);
        NpcFacePlayer(0xFFFFFFFC, 5);
    }
    SetPlayerSpeed(2.0);
    PlayerMoveTo(400, 0xFFFFFFE2, 0);
    sleep 1;
    SetPlayerAnimation(0xC0011);
    sleep 60;
    SetPlayerAnimation(0xA0001);
    InterpPlayerYaw(90, 5);
    AdjustCam(0, 4.0, 0, 300.0, 17.0, -7.0);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x1400B9);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    spawn {
        sleep 30;
        SetPanTarget(0, 630, 85, 0xFFFFFF74);
        SetCamDistance(0, 200);
        SetCamPosA(0, 112, 0xFFFFFF38);
        SetCamPosB(0, 610, 0xFFFFFFC4);
        SetCamSpeed(0, 90.0);
        WaitForCam(0, 1.0);
    }
    InterpNpcYaw(0xFFFFFFFC, 90, 5);
    sleep 10;
    LoadPath(60, N(vectorList_80243230), 5, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    InterpNpcYaw(0xFFFFFFFC, 270, 5);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400BA);
    EnableModel(86, 0);
    SetNpcAnimation(0xFFFFFFFC, 0x20001C);
    sleep 30;
    spawn {
        sleep 10;
        AdjustCam(0, 90.0, 0, 300, 17.0, -7.0);
    }
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    SetNpcSpeed(0xFFFFFFFC, 3.0);
    NpcFlyTo(0xFFFFFFFC, 440, 25, 0xFFFFFFE2, 0, 0xFFFFFFFB, 0);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x20001D);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200004);
    sleep 20;
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x1400BB);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400BC);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToPlayer(0xFFFFFFFE, 0xC0001, 0xC0026, 5, 0x1400BD);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
    SI_AREA_VAR(1) = 1;
});

Script N(script_80243DA4) = SCRIPT({
    EnableModel(86, 0);
    SetPlayerAnimation(0xC0012);
    SetPlayerPos(400, 0, 0xFFFFFFE2);
    InterpPlayerYaw(90, 0);
    SetNpcPos(0xFFFFFFFC, 440, 25, 0xFFFFFFE2);
    SetNpcYaw(0xFFFFFFFC, 270);
    AdjustCam(0, 90.0, 0, 300, 17.0, -7.0);
    sleep 30;
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400C2);
    SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x1400C3);
    SetPlayerAnimation(0xA0001);
    ContinueSpeech(0xFFFFFFFE, 0xD0004, 0xA0001, 0, 0x1400C4);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x20001D);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200004);
});

Script N(script_80243F14) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetCamLeadPlayer(0, 0);
    EnableModel(53, 0);
    EnableModel(54, 0);
    await N(script_80241E58);
    bind N(script_ExitSingleDoor_80243700) to TriggerFlag_WALL_INTERACT 2;
    spawn N(script_80242EC4);
    if (SI_AREA_VAR(1) == 0) {
        await N(script_EnterSingleDoor_80243828);
    } else {
        await N(script_80243DA4);
    }
0:
    SI_AREA_FLAG(17) = 0;
    SI_AREA_FLAG(9) = 0;
    SI_AREA_VAR(2) = 0;
    SetEnemyFlagBits(0, 0x8000000, 1);
    SetNpcVar(0, 1, 0);
    if (SI_AREA_VAR(1) == 2) {
        await N(script_8024326C);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400C5);
        await N(script_80243500);
        InterpPlayerYaw(270, 5);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 5, 0x1400C6);
        ResetCam(0, 90.0);
        SetNpcAnimation(0xFFFFFFFC, 0x20001F);
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 0x200005);
        sleep 20;
        spawn N(script_8024369C);
        goto 21;
    }
    if (SI_AREA_VAR(1) == 3) {
        await N(script_8024326C);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400C7);
        await N(script_80243500);
        InterpPlayerYaw(270, 5);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 5, 0x1400C8);
        ResetCam(0, 90.0);
        SetNpcAnimation(0xFFFFFFFC, 0x20001F);
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 0x200005);
        sleep 20;
        goto 61;
    }
    if (SI_AREA_VAR(1) == 4) {
        await N(script_8024326C);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400C9);
        await N(script_80243500);
        InterpPlayerYaw(270, 5);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 5, 0x1400CA);
        ResetCam(0, 90.0);
        SetNpcAnimation(0xFFFFFFFC, 0x20001F);
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 0x200005);
        sleep 20;
        spawn N(script_8024369C);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        func_802D1270(SI_VAR(0), 0xFFFFFFB6, 2.0);
        func_802D1270(287, 0xFFFFFFB6, 2.0);
        goto 31;
    }
    if (SI_AREA_VAR(1) == 5) {
        await N(script_8024326C);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400CB);
        await N(script_80243500);
        InterpPlayerYaw(270, 5);
        SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 5, 0x1400CC);
        ResetCam(0, 90.0);
        SetNpcAnimation(0xFFFFFFFC, 0x20001F);
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 0x200005);
        sleep 20;
        spawn {
            await N(script_8024369C);
            SetEnemyFlagBits(0, 0x8000000, 0);
            SetNpcVar(0, 1, 1);
        }
        SI_VAR(10) = 1;
        goto 41;
    }
10:
    SI_AREA_VAR(0) = 1;
    SI_AREA_VAR(3) = 0;
    SI_AREA_FLAG(18) = 1;
    SI_AREA_FLAG(11) = 0;
    SI_AREA_FLAG(10) = 0;
    SI_AREA_FLAG(14) = 1;
    await N(script_8024326C);
    SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400D1);
    SetNpcAnimation(0xFFFFFFFC, 0x20001F);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    SI_VAR(10) = 1;
    spawn {
        await N(script_8024369C);
        SetEnemyFlagBits(0, 0x8000000, 0);
        SetNpcVar(0, 1, 1);
    }
15:
    ResetCam(0, 4.0);
    if (SI_VAR(10) == 0) {
        SetEnemyFlagBits(0, 0x8000000, 0);
        SetNpcVar(0, 1, 1);
    }
    DisablePlayerInput(0);
    SetNpcVar(0, 0, 1);
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    DisablePlayerInput(1);
    await N(script_8024359C);
    await N(script_8024333C);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400D2);
    ShowChoice(0x1E0029);
    if (SI_VAR(0) == 0) {
        if (SI_AREA_VAR(3) == 0) {
            ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400BF);
            NpcFlyTo(0xFFFFFFFC, 390, 50, 0xFFFFFFBA, 15, 0xFFFFFFFB, 0);
            SI_VAR(10) = 0;
            goto 15;
        }
    }
    if (SI_VAR(0) == 1) {
        ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400D3);
        NpcFlyTo(0xFFFFFFFC, 390, 50, 0xFFFFFFBA, 15, 0xFFFFFFFB, 0);
        SI_VAR(10) = 0;
        goto 15;
    }
    if (SI_VAR(0) == 2) {
        goto 99;
    }
    await N(script_802422C4);
    SI_VAR(0) = 0;
    SI_VAR(0) += SI_AREA_FLAG(11);
    SI_VAR(0) += SI_AREA_FLAG(10);
    SI_VAR(0) += SI_AREA_FLAG(14);
    if (SI_VAR(0) != 3) {
        SI_AREA_FLAG(9) = 1;
    }
    if (SI_AREA_FLAG(9) == 0) {
        SI_AREA_VAR(1) = 2;
    }
20:
    await N(script_8024326C);
    SetNpcAnimation(0xFFFFFFFC, 0x20001D);
    sleep 10;
    ContinueSpeech(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400D4);
    SetNpcAnimation(0xFFFFFFFC, 0x20001F);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    ResetCam(0, 2.0);
    spawn N(script_8024369C);
21:
    SI_AREA_VAR(0) = 2;
    SI_AREA_VAR(3) = 0;
    SI_AREA_FLAG(18) = 0;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerSpeed(2.0);
    PlayerMoveTo(SI_VAR(0), 0xFFFFFFB6, 0);
    PlayerMoveTo(287, 0xFFFFFFB6, 0);
    SetPlayerAnimation(0xC0014);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x1400D5);
    RemoveItemEntity(SI_AREA_VAR(4));
    SI_VAR(10) = spawn N(script_80242134);
    sleep 10;
    SetMusicTrack(0, 113, 0, 8);
    PlaySound(917);
    spawn {
        AdjustCam(0, 0.2001953125, 0, 250, 17.0, -7.0);
    }
    func_802406C4_AF8014(300);
    PlaySound(917);
    FadeOutMusic(0, 500);
    kill SI_VAR(10);
    if (SI_VAR(0) < 27) {
        SI_AREA_FLAG(9) = 1;
    }
    sleep 10;
    spawn {
        ResetCam(0, 5.0);
    }
    NpcFlyTo(0xFFFFFFFC, 337, 35, 0xFFFFFFB6, 30, 0xFFFFFFFB, 0);
    sleep 10;
    spawn N(script_80240D60);
    await N(script_8024333C);
    spawn {
        SetPlayerAnimation(0xC0014);
        MakeItemEntity(355, 287, 16, 0xFFFFFFD8, 1, 0);
        SI_AREA_VAR(4) = SI_VAR(0);
    }
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x1400D6);
    ShowChoice(0x1E002B);
    if (SI_VAR(0) == 0) {
        EndSpeech(0xFFFFFFFC, 0x200009, 0x200001, 5);
    } else {
        ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x1400D7);
        ShowChoice(0x1E002A);
        if (SI_VAR(0) == 0) {
            EndSpeech(0xFFFFFFFC, 0x200009, 0x200001, 5);
        } else {
            goto 99;
        }
    }
    if (SI_AREA_FLAG(9) == 0) {
        SI_AREA_VAR(1) = 3;
    }
60:
    await N(script_8024326C);
    SetNpcAnimation(0xFFFFFFFC, 0x20001D);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 5, 0x1400D8);
    SetNpcAnimation(0xFFFFFFFC, 0x20001F);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
61:
    SI_AREA_VAR(0) = 3;
    SI_AREA_VAR(3) = 0;
    SI_AREA_FLAG(18) = 1;
    SI_AREA_FLAG(12) = 0;
    SI_AREA_FLAG(13) = 0;
    SI_AREA_FLAG(14) = 1;
    SI_VAR(10) = 1;
    spawn {
        await N(script_8024369C);
        SetEnemyFlagBits(0, 0x8000000, 0);
        SetNpcVar(0, 1, 1);
    }
65:
    ResetCam(0, 4.0);
    if (SI_VAR(10) == 0) {
        SetEnemyFlagBits(0, 0x8000000, 0);
        SetNpcVar(0, 1, 1);
    }
    DisablePlayerInput(0);
    SetNpcVar(0, 0, 1);
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    DisablePlayerInput(1);
    await N(script_8024359C);
    await N(script_8024333C);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400D9);
    ShowChoice(0x1E0029);
    if (SI_VAR(0) == 0) {
        if (SI_AREA_VAR(3) == 0) {
            ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400BF);
            NpcFlyTo(0xFFFFFFFC, 390, 50, 0xFFFFFFBA, 15, 0xFFFFFFFB, 0);
            SI_VAR(10) = 0;
            goto 65;
        } else {
            EndSpeech(0xFFFFFFFC, 0x200009, 0x200001, 5);
        }
    }
    if (SI_VAR(0) == 1) {
        ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400DA);
        NpcFlyTo(0xFFFFFFFC, 390, 50, 0xFFFFFFBA, 15, 0xFFFFFFFB, 0);
        SI_VAR(10) = 0;
        goto 65;
    }
    if (SI_VAR(0) == 2) {
        goto 99;
    }
    await N(script_802422C4);
    SI_VAR(0) = 0;
    SI_VAR(0) += SI_AREA_FLAG(12);
    SI_VAR(0) += SI_AREA_FLAG(13);
    SI_VAR(0) += SI_AREA_FLAG(14);
    if (SI_VAR(0) != 3) {
        SI_AREA_FLAG(9) = 1;
    }
    if (SI_AREA_FLAG(9) == 0) {
        SI_AREA_VAR(1) = 4;
    }
30:
    await N(script_8024326C);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x1400DB);
    ResetCam(0, 2.0);
    spawn N(script_8024369C);
31:
    SI_AREA_VAR(0) = 4;
    SI_AREA_FLAG(18) = 0;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerSpeed(2.0);
    PlayerMoveTo(SI_VAR(0), 0xFFFFFFB6, 0);
    PlayerMoveTo(287, 0xFFFFFFB6, 0);
    SetPlayerAnimation(0xC0014);
    sleep 10;
    RemoveItemEntity(SI_AREA_VAR(4));
    SetPlayerAnimation(0xC001F);
    sleep 40;
    func_80240C10_AF8560(11);
    SetPlayerActionState(0);
    sleep 10;
    spawn {
        SetNpcSpeed(0xFFFFFFFC, 2.0);
        NpcFlyTo(0xFFFFFFFC, 337, 35, 0xFFFFFFB6, 0, 0xFFFFFFFB, 0);
    }
    SetPlayerSpeed(2.0);
    PlayerMoveTo(190, 0xFFFFFFBA, 0);
    InterpPlayerYaw(90, 1);
    PlayerMoveTo(190, 35, 0);
    PlayerMoveTo(240, 35, 0);
    InterpPlayerYaw(350, 5);
    sleep 10;
    SetPlayerAnimation(0xD000C);
    sleep 20;
    RemoveItemEntity(SI_AREA_VAR(5));
    MakeItemEntity(353, 230, 16, 0, 1, 0);
    SI_AREA_VAR(5) = SI_VAR(0);
    sleep 10;
    func_80240C10_AF8560(0);
    SetPlayerActionState(0);
    MakeItemEntity(354, 250, 16, 0, 1, 0);
    SI_AREA_VAR(4) = SI_VAR(0);
    sleep 40;
    await N(script_8024326C);
    SetNpcAnimation(0xFFFFFFFC, 0x20001D);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400DC);
    SetNpcAnimation(0xFFFFFFFC, 0x20001F);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    ResetCam(0, 2.0);
    InterpPlayerYaw(315, 0);
    sleep 10;
    RemoveItemEntity(SI_AREA_VAR(5));
    func_80240C10_AF8560(13);
    SetPlayerActionState(0);
    sleep 10;
    spawn N(script_8024344C);
    spawn {
        NpcFlyTo(0xFFFFFFFC, 190, 60, 0xFFFFFF9C, 50, 0xFFFFFFFB, 0);
    }
    SetPlayerSpeed(2.0);
    PlayerMoveTo(190, 30, 0);
    PlayerMoveTo(190, 0xFFFFFF9C, 0);
    PlayerMoveTo(125, 0xFFFFFF9C, 0);
    sleep 30;
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400DD);
    InterpPlayerYaw(315, 5);
    sleep 10;
    func_80240B4C_AF849C();
    await N(script_8024300C);
    func_80240C10_AF8560(0);
    SetPlayerActionState(0);
    MakeItemEntity(353, 100, 5, 0xFFFFFF79, 1, 0);
    SI_AREA_VAR(5) = SI_VAR(0);
    SI_VAR(0) = 0xFFFFFF79;
    loop 30 {
        SI_VAR(0) -= 1;
        SetItemPos(SI_AREA_VAR(5), 100, 5, SI_VAR(0));
        sleep 1;
    }
    await N(script_802430A4);
    sleep 10;
    PlaySoundAt(255, 0, 100, 22, 0xFFFFFF4E);
    sleep 20;
    FadeOutMusic(0, 500);
    PlaySoundAt(916, 0, 100, 22, 0xFFFFFF4E);
    func_80240B4C_AF849C();
    StopSound(916);
    PlaySoundAt(1011, 0, 100, 22, 0xFFFFFF4E);
    sleep 10;
    if (SI_VAR(0) < 690) {
        SI_AREA_FLAG(9) = 1;
    }
    if (SI_VAR(0) > 1080) {
        SI_AREA_FLAG(9) = 1;
    }
    spawn N(script_80240D60);
    await N(script_8024300C);
    SI_VAR(0) = 0xFFFFFF5B;
    loop 30 {
        sleep 1;
        SI_VAR(0) += 1;
        SetItemPos(SI_AREA_VAR(5), 100, 5, SI_VAR(0));
    }
    RemoveItemEntity(SI_AREA_VAR(5));
    func_80240C10_AF8560(13);
    SetPlayerActionState(0);
    await N(script_802430A4);
    sleep 10;
    InterpPlayerYaw(90, 5);
    await N(script_8024333C);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400DE);
    ShowChoice(0x1E002B);
    if (SI_VAR(0) != 0) {
        ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400DF);
        ShowChoice(0x1E002A);
        if (SI_VAR(0) != 0) {
            goto 99;
        }
    }
    ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400E0);
    UseSettingsFrom(0, 287, 0, 0xFFFFFFB6);
    SetPanTarget(0, 287, 0, 0xFFFFFFB6);
    SetCamSpeed(0, 1.0);
    spawn N(script_8024369C);
    PlayerMoveTo(287, 0xFFFFFFB6, 100);
    func_80240C10_AF8560(0);
    SetPlayerActionState(0);
    MakeItemEntity(353, 287, 16, 0xFFFFFFD8, 1, 0);
    sleep 30;
    RemoveItemEntity(SI_VAR(0));
    MakeItemEntity(351, 287, 20, 0xFFFFFFE2, 1, 0);
    SI_AREA_VAR(5) = SI_VAR(0);
    sleep 10;
    if (SI_AREA_FLAG(9) == 0) {
        SI_AREA_VAR(1) = 5;
    }
40:
    await N(script_8024326C);
    SetNpcAnimation(0xFFFFFFFC, 0x20001D);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x20001E, 0x200004, 0, 0x1400E1);
    SetNpcAnimation(0xFFFFFFFC, 0x20001F);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    SI_VAR(10) = 0;
41:
    SI_AREA_VAR(0) = 5;
    SI_AREA_VAR(3) = 0;
    SI_AREA_FLAG(18) = 1;
    SI_AREA_FLAG(15) = 0;
    SI_AREA_FLAG(16) = 0;
45:
    ResetCam(0, 4.0);
    if (SI_VAR(10) == 0) {
        SetEnemyFlagBits(0, 0x8000000, 0);
        SetNpcVar(0, 1, 1);
    }
    DisablePlayerInput(0);
    SetNpcVar(0, 0, 1);
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    DisablePlayerInput(1);
    await N(script_8024359C);
    await N(script_8024333C);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400E2);
    ShowChoice(0x1E0029);
    if (SI_VAR(0) == 0) {
        if (SI_AREA_VAR(3) == 0) {
            ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400C0);
            NpcFlyTo(0xFFFFFFFC, 390, 50, 0xFFFFFFBA, 15, 0xFFFFFFFB, 0);
            SI_VAR(10) = 0;
            goto 45;
        }
    }
    if (SI_VAR(0) == 1) {
        ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400E3);
        NpcFlyTo(0xFFFFFFFC, 390, 50, 0xFFFFFFBA, 15, 0xFFFFFFFB, 0);
        SI_VAR(10) = 0;
        goto 45;
    }
    if (SI_VAR(0) == 2) {
        goto 99;
    }
    await N(script_802422C4);
    if (SI_AREA_FLAG(16) == 0) {
        SI_AREA_FLAG(9) = 1;
    }
    if (SI_AREA_FLAG(9) == 0) {
        SI_AREA_VAR(1) = 6;
    }
    SetPlayerAnimation(0xC0009);
    ContinueSpeech(0xFFFFFFFC, 0x20000F, 0x20000F, 0, 0x1400E4);
    SetPlayerAnimation(0xA0001);
50:
    SI_AREA_VAR(0) = 6;
    SI_AREA_FLAG(18) = 0;
    ResetCam(0, 5.0);
    spawn N(script_80243204);
    EnablePartnerAI();
    DisablePlayerInput(0);
    return;
99:
    ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x1400CD);
    func_80240C4C_AF859C();
    await N(script_802422C4);
    func_80240C10_AF8560(0);
    SetPlayerActionState(0);
    RemoveItemEntity(SI_AREA_VAR(4));
    if (SI_AREA_VAR(0) != 4) {
        RemoveItemEntity(SI_AREA_VAR(5));
    }
    await N(script_80241E58);
    SetNpcPos(0xFFFFFFFC, 440, 25, 0xFFFFFFE2);
    SetNpcYaw(0xFFFFFFFC, 270);
    SetPlayerAnimation(0xA0001);
    SetPlayerPos(400, 0, 0xFFFFFFE2);
    InterpPlayerYaw(90, 0);
    AdjustCam(0, 90.0, 0, 350, 17.0, -7.0);
    sleep 10;
    func_80240CB4_AF8604();
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x1400CE);
    SpeakToPlayer(0xFFFFFFFE, 0xC0013, 0xC0012, 5, 0x1400CF);
    SetPlayerAnimation(0xA0001);
    ContinueSpeech(0xFFFFFFFE, 0xD0004, 0xA0001, 0, 0x1400D0);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x20001D);
    sleep 10;
    SetNpcAnimation(0xFFFFFFFC, 0x200004);
    goto 0;
    break;
});

// rodata: D_802461A0_AFDAF0

// rodata: D_802461A8_AFDAF8

// rodata: jtbl_802461B0_AFDB00

// rodata: D_802461E4_AFDB34

s32 pad_0061EC[] = {
    0x00000000,
};
