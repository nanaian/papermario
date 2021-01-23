#include "kkj_12.h"

s32 pad_00006C[1];
Script N(script_ExitDoubleDoor_80240910);
Script N(script_ExitDoubleDoor_802409B4);
Script N(script_80240A58);
Script N(script_EnterDoubleDoor_80240AD8);
Script N(main);
s32 N(extraAnimationList_80240D18)[13];
s32 N(extraAnimationList_80240D4C)[10];
Script N(script_Interact_80240D74);
Script N(script_Interact_80240E90);
Script N(script_NpcAI_802411C0);
Script N(script_Idle_802413D4);
Script N(script_Idle_802415C8);
Script N(script_Init_802416EC);
Script N(script_Init_80241754);
StaticNpc N(npcGroup_80241820)[3];
NpcGroupList N(npcGroupList_80241DF0);
s32 pad_001E08[2];
const char D_80241E10_AD5EA0[8]; // "kkj_11"
const char D_80241E18_AD5EA8[8]; // "kkj_13"
const char D_80241E38_AD5EC8[8]; // "kkj_14"

// text: func_80240000_AD4090

// text: func_80240034_AD40C4

s32 pad_00006C[] = {
    0x00000000,
};

// text: func_80240070_AD4100

// text: func_80240280_AD4310

// text: func_8024032C_AD43BC

// text: func_80240604_AD4694

// text: func_802406E8_AD4778

// text: func_80240714_AD47A4

// text: func_80240730_AD47C0

// text: func_8024089C_AD492C

EntryList N(entryList) = {
    { -75.0f, 0.0f, 0.0f, 90.0f },
    { 1175.0f, 110.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19000D,
};

Script N(script_ExitDoubleDoor_80240910) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 1;
    SI_VAR(2) = 5;
    SI_VAR(3) = 7;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80241E10_AD5EA0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802409B4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 4;
    SI_VAR(2) = 25;
    SI_VAR(3) = 23;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80241E18_AD5EA8, 0);
    sleep 100;
});

Script N(script_80240A58) = SCRIPT({
    bind N(script_ExitDoubleDoor_80240910) to TriggerFlag_WALL_INTERACT 1;
    if (SI_SAVE_VAR(0) == 58) {
        if (SI_SAVE_FLAG(503) == 0) {
            return;
        }
    }
    bind N(script_ExitDoubleDoor_802409B4) to TriggerFlag_WALL_INTERACT 4;
});

Script N(script_EnterDoubleDoor_80240AD8) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 5;
            SI_VAR(3) = 7;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 25;
            SI_VAR(3) = 23;
            await EnterDoubleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50002);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) == 58) {
        func_80240034_AD40C4(1);
        MakeNpcs(0, N(npcGroupList_80241DF0));
    } else {
        EnableModel(124, 0);
        EnableModel(125, 0);
    }
    if (SI_SAVE_VAR(0) >= 94) {
        func_80240000_AD4090();
    }
    UseDoorSounds(2);
    spawn N(script_80240A58);
    spawn N(script_EnterDoubleDoor_80240AD8);
    sleep 1;
});

NpcSettings N(npcSettings_80240CC0) = {
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
    .level = 0x19,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80240CEC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
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

s32 N(extraAnimationList_80240D18)[] = {
    0x00580000, 0x00580001, 0x00580002, 0x00580004, 0x00580005, 0x00580006, 0x00580007, 0x00580008,
    0x00580009, 0x00580012, 0x00580014, 0x0058001B, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80240D4C)[] = {
    0x00390000, 0x00390002, 0x00390003, 0x00390004, 0x00390005, 0x00390008, 0x00390007, 0x00390013,
    0x00390014, 0xFFFFFFFF,
};

Script N(script_Interact_80240D74) = SCRIPT({
    DisablePlayerInput(1);
    func_802406E8_AD4778(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140143);
    } else {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140141);
            SetSelfVar(0, 1);
        } else {
            SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140142);
            SetSelfVar(0, 0);
        }
    }
    DisablePlayerInput(0);
});

Script N(script_Interact_80240E90) = SCRIPT({
    DisablePlayerInput(1);
    func_802406E8_AD4778(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        AdjustCam(0, 5.0, 0, 350.0, 15.0, -7.0);
        SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140147);
        spawn {
            loop {
                PlayerFaceNpc(1, 0);
                sleep 1;
                if (SI_SAVE_FLAG(503) == 1) {
                    break;
                }
            }
        }
        SetNpcFlagBits(-1, 256, 1);
        SetNpcAnimation(-1, 0x580005);
        SetNpcSpeed(-1, 2.0);
        NpcMoveTo(-1, 1050, 0, 0);
        SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140148);
        NpcMoveTo(-1, 900, 0, 0);
        SetNpcPos(-1, 0, 0xFFFFFE0C, 0);
        SI_SAVE_FLAG(503) = 1;
        bind N(script_ExitDoubleDoor_802409B4) to TriggerFlag_WALL_INTERACT 4;
        ResetCam(0, 4.0);
        DisablePlayerInput(0);
        return;
    }
    if (SI_SAVE_FLAG(501) == 0) {
        AdjustCam(0, 5.0, 0, 350.0, 15.0, -7.0);
        SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140144);
        sleep 10;
        SI_VAR(0) = 106;
        ShowGotItem(SI_VAR(0), 1, 0);
        AddKeyItem(SI_VAR(0));
        SI_SAVE_FLAG(501) = 1;
        SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140145);
        InterpNpcYaw(-1, 270, 0);
        ResetCam(0, 5.0);
    } else {
        SpeakToPlayer(-1, 0x580009, 0x580002, 16, 0x140146);
    }
    DisablePlayerInput(0);
});

Script N(script_NpcAI_802411C0) = SCRIPT({
    DisablePlayerInput(1);
    func_80240714_AD47A4();
    group 0;
    0x802D5830(1);
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    NpcFacePlayer(-1, 5);
    sleep 20;
    PlayerFaceNpc(-1, 0);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(-1, 0x580002);
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140174);
    func_80240730_AD47C0(-1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(3) != 0) {
        SetNpcAnimation(-1, 0x580007);
        SetNpcSpeed(-1, 5.0);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x580002);
    }
    SpeakToPlayer(-1, 0x580009, 0x580002, 0, 0x140175);
    SetPlayerAnimation(0xC0017);
    sleep 20;
    GotoMapSpecial(D_80241E38_AD5EC8, 11, 13);
    sleep 100;
    DisablePlayerInput(0);
    0x802D5830(0);
});

Script N(script_Idle_802413D4) = SCRIPT({
    spawn {
        SI_VAR(2) = 0;
        loop {
            func_8024032C_AD43BC(SI_VAR(0), 100, 90, 0, 40, 124, 0);
            if (SI_VAR(2) == 0) {
                func_802406E8_AD4778(SI_VAR(1));
                if (SI_VAR(1) == 0) {
                    SetSelfEnemyFlagBits(0x8000000, 1);
                    if (SI_VAR(0) != 0) {
                        BindNpcAI(-1, N(script_NpcAI_802411C0));
                        SI_VAR(2) = 1;
                    }
                } else {
                    SetSelfEnemyFlagBits(0x8000000, 0);
                }
            }
            sleep 1;
        }
    }
    SetNpcSpeed(-1, 2.0);
    loop {
        NpcMoveTo(-1, 900, 0, 0);
        func_80240604_AD4694(SI_VAR(0), 900, 0, 800, 0);
        InterpNpcYaw(-1, SI_VAR(0), 15);
        NpcMoveTo(-1, 800, 0, 0);
        func_80240604_AD4694(SI_VAR(0), 800, 0, 900, 0);
        InterpNpcYaw(-1, SI_VAR(0), 15);
    }
});

Script N(script_Idle_802415C8) = SCRIPT({
    spawn {
        SI_VAR(2) = 0;
        loop {
            func_8024032C_AD43BC(SI_VAR(0), 100, 90, 0, 40, 125, 1);
            if (SI_VAR(2) == 0) {
                func_802406E8_AD4778(SI_VAR(1));
                if (SI_VAR(1) == 0) {
                    SetSelfEnemyFlagBits(0x8000000, 1);
                    if (SI_VAR(0) != 0) {
                        BindNpcAI(-1, N(script_NpcAI_802411C0));
                        SI_VAR(2) = 1;
                    }
                } else {
                    SetSelfEnemyFlagBits(0x8000000, 0);
                }
            }
            sleep 1;
        }
    }
});

Script N(script_Init_802416EC) = SCRIPT({
    SetNpcAnimation(-1, 0x580005);
    SetNpcPos(-1, 800, 110, 0);
    BindNpcIdle(-1, N(script_Idle_802413D4));
    BindNpcInteract(-1, N(script_Interact_80240D74));
});

Script N(script_Init_80241754) = SCRIPT({
    if (SI_SAVE_FLAG(503) != 0) {
        EnableModel(125, 0);
        func_8024089C_AD492C();
        RemoveNpc(-1);
        return;
    }
    SetNpcAnimation(-1, 0x580002);
    SetNpcPos(-1, 1170, 110, 0);
    SetNpcYaw(-1, 270);
    BindNpcIdle(-1, N(script_Idle_802415C8));
    BindNpcInteract(-1, N(script_Interact_80240E90));
});

StaticNpc N(npcGroup_80241820)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240CC0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .init = N(script_Init_802416EC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80240D18),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240CC0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00400D0D,
        .init = N(script_Init_80241754),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80240D18),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80240CEC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00390002, 0x00390003, 0x00390004, 0x00390004, 0x00390002, 0x00390002, 0x0039000C, 0x0039000C, 0x00390011, 0x00390012, 0x00390007, 0x00390008, 0x00390001, 0x00390002, 0x00390002, 0x00390002,
        },
        .extraAnimations = N(extraAnimationList_80240D4C),
    },
};

NpcGroupList N(npcGroupList_80241DF0) = {
    NPC_GROUP(N(npcGroup_80241820), 0x00000000),
    {},
};

s32 pad_001E08[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241E10_AD5EA0

// rodata: D_80241E18_AD5EA8

// rodata: D_80241E20_AD5EB0

// rodata: D_80241E28_AD5EB8

// rodata: D_80241E30_AD5EC0

// rodata: D_80241E38_AD5EC8
