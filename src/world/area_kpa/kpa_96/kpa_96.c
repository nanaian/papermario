#include "kpa_96.h"

s32 pad_000024[3];
Script N(script_80240080);
s32 pad_0000E8[2];
Script N(script_ExitDoubleDoor_802400F0);
Script N(script_80240194);
Script N(script_EnterDoubleDoor_802401C0);
Script N(main);
s32 N(intTable_802402F0)[23];
s32 N(shopInventory_8024034C)[21];
s32 N(shopPriceList_802403A0)[27];
Script N(script_8024040C);
s32 N(shopItemPositions_80240460)[6];
s32 N(shopOwnerNPC_80240478)[7];
Script N(script_80240494);
Script N(script_Interact_8024058C);
Script N(script_Init_8024075C);
StaticNpc N(npcGroup_80240780)[1];
NpcGroupList N(npcGroupList_80240970);
s32 pad_000988[2];
const char D_80240990_A93150[8]; // "kpa_32"
s32 pad_000998[2];

// text: func_80240000_A927C0

s32 pad_000024[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 210.0f, 0.0f, 100.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19016C,
};

Script N(script_80240080) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(6);
    }
});

s32 pad_0000E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_802400F0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 30;
    SI_VAR(2) = 50;
    SI_VAR(3) = 52;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240990_A93150, 3);
    sleep 100;
});

Script N(script_80240194) = SCRIPT({
    bind N(script_ExitDoubleDoor_802400F0) to TriggerFlag_WALL_INTERACT 30;
});

Script N(script_EnterDoubleDoor_802401C0) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(2) = 50;
    SI_VAR(3) = 52;
    spawn EnterDoubleDoor;
    spawn N(script_80240194);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80240970));
    spawn N(script_80240494);
    spawn N(script_EnterDoubleDoor_802401C0);
    sleep 1;
    spawn N(script_80240080);
});

s32 N(intTable_802402F0)[] = {
    0x002700BC, 0x002700BD, 0x002700BE, 0x002700BF, 0x002700C0, 0x002700C1, 0x002700C2, 0x002700C3,
    0x002700C4, 0x002700C5, 0x002700C6, 0x002700C7, 0x002700C8, 0x002700C9, 0x002700CA, 0x002700CB,
    0x002700CC, 0x002700CD, 0x002700CE, 0x002700CF, 0x002700D0, 0x002700D1, 0x002700D2,
};

s32 N(shopInventory_8024034C)[] = {
    0x00000096, 0x00000005, 0x0024002B, 0x0000009A, 0x00000019, 0x00240029, 0x00000090, 0x0000000F,
    0x00240027, 0x00000082, 0x0000001E, 0x00240002, 0x000000A3, 0x0000001E, 0x00240017, 0x0000008C,
    0x0000001E, 0x0024000A, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(shopPriceList_802403A0)[] = {
    0x00000098, 0x0000000F, 0x00000000, 0x000000C8, 0x0000001E, 0x00000000, 0x00000085, 0x00000014,
    0x00000000, 0x000000C2, 0x00000014, 0x00000000, 0x00000095, 0x00000019, 0x00000000, 0x00000083,
    0x00000014, 0x00000000, 0x0000009B, 0x0000000A, 0x00000000, 0x00000092, 0x00000014, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_8024040C) = SCRIPT({
    match SI_VAR(0) {
        == 3 {}
        == 4 {}
        == 1 {}
        == 1 {
        }
    }
});

s32 N(shopItemPositions_80240460)[] = {
    0x00290005, 0x002A0004, 0x002B0003, 0x002C0002, 0x002D0001, 0x002E0000,
};

s32 N(shopOwnerNPC_80240478)[] = {
    0x00000000, 0x00270001, 0x00270002, N(script_8024040C), 0x00000000, 0x00000000, N(intTable_802402F0),
};

Script N(script_80240494) = SCRIPT({
    ModifyColliderFlags(0, 0, 0x7FFFFE00);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 2, 0x7FFFFE00);
    ModifyColliderFlags(0, 3, 0x7FFFFE00);
    ModifyColliderFlags(0, 4, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    MakeShop(N(shopItemPositions_80240460), N(shopInventory_8024034C), N(shopPriceList_802403A0), 0);
    MakeShopOwner(N(shopOwnerNPC_80240478));
});

NpcSettings N(npcSettings_80240560) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x16,
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
    .unk_2A = 0x10,
};

Script N(script_Interact_8024058C) = SCRIPT({
    if (SI_MAP_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x270002, 0x270001, 0, 0x13004F);
        ShowChoice(0x1E0013);
        if (SI_VAR(0) == 0) {
            func_80240000_A927C0();
            if (SI_VAR(0) == 0) {
                ContinueSpeech(-1, 0x270002, 0x270001, 0, 0x130051);
                ModifyColliderFlags(1, 0, 0x7FFFFE00);
                ModifyColliderFlags(1, 1, 0x7FFFFE00);
                ModifyColliderFlags(1, 2, 0x7FFFFE00);
                ModifyColliderFlags(1, 3, 0x7FFFFE00);
                ModifyColliderFlags(1, 4, 0x7FFFFE00);
                ModifyColliderFlags(1, 5, 0x7FFFFE00);
                ModifyColliderFlags(0, 7, 0x7FFFFE00);
                SI_MAP_VAR(0) = 1;
            } else {
                ContinueSpeech(-1, 0x270002, 0x270001, 0, 0x130052);
            }
        } else {
            ContinueSpeech(-1, 0x270002, 0x270001, 0, 0x130050);
        }
    } else {
        await 0x80284054;
    }
});

Script N(script_Init_8024075C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024058C));
});

StaticNpc N(npcGroup_80240780)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240560),
        .pos = { -122.0, 0.0, 163.0 },
        .flags = 0x00512D09,
        .init = N(script_Init_8024075C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00270001, 0x00270002, 0x00270003, 0x00270003, 0x00270001, 0x00270001, 0x00270005, 0x00270005, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003, 0x00270003,
        },
        .tattle = 0x1A011F,
    },
};

NpcGroupList N(npcGroupList_80240970) = {
    NPC_GROUP(N(npcGroup_80240780), 0x00000000),
    {},
};

s32 pad_000988[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240990_A93150

s32 pad_000998[] = {
    0x00000000, 0x00000000,
};

