#include "omo_11.h"

s32 pad_000788[2];
s32 pad_0014C8[2];
Script N(script_80241530);
s32 pad_00155C[1];
Script N(script_ExitWalk_80241560);
Script N(script_ExitWalk_802415BC);
Script N(script_80241618);
Script N(main);
s32 N(unk_80241740)[8];
s32 N(intTable_80241760)[6];
s32 N(unk_80241778)[6];
s32 N(unk_80241790)[4];
s32 N(unk_802417A0)[4];
s32 N(unk_802417B0)[4];
s32 N(unk_802417C0)[4];
s32 N(unk_802417D0)[4];
Script N(script_802417E0);
Script N(script_802419DC);
Script N(script_80241BF8);
s32 N(unk_80241E40)[2];
s32 N(unk_80241E48)[4];
s32 N(unk_80241E58)[16];
s32 N(unk_80241E98)[3];
Script N(script_80241EA4);
Script N(script_80242008);
Script N(script_MakeEntities);
s32 pad_002648[2];
Script N(script_NpcAI_80242680);
StaticNpc N(npcGroup_802426CC)[1];
StaticNpc N(npcGroup_802428BC)[1];
NpcGroupList N(npcGroupList_80242AAC);
const char D_80242AD0_DDF300[8]; // "omo_12"
const char D_80242AD8_DDF308[8]; // "omo_10"

// text: func_80240000_DDC830

// text: func_802401A0_DDC9D0

s32 pad_000788[] = {
    0x00000000, 0x00000000,
};

// text: func_80240790_DDCFC0

// text: func_802407AC_DDCFDC

// text: func_802407CC_DDCFFC

// text: func_802407F8_DDD028

// text: func_80240864_DDD094

// text: func_802408B0_DDD0E0

// text: func_8024095C_DDD18C

// text: func_80240BAC_DDD3DC

// text: func_80240BD8_DDD408

// text: func_80240C10_DDD440

// text: func_80240CA0_DDD4D0

// text: func_80240CD4_DDD504

// text: func_80240D38_DDD568

// text: func_80240D90_DDD5C0

// text: func_802412C8_DDDAF8

// text: func_80241408_DDDC38

// text: func_80241450_DDDC80

// text: func_80241498_DDDCC8

s32 pad_0014C8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -640.0f, 0.0f, 20.0f, 90.0f },
    { 730.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900E3,
};

Script N(script_80241530) = SCRIPT({
    SetMusicTrack(0, 32, 0, 8);
});

s32 pad_00155C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241560) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242AD0_DDF300, 0);
    sleep 100;
});

Script N(script_ExitWalk_802415BC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242AD8_DDF308, 0);
    sleep 100;
});

Script N(script_80241618) = SCRIPT({
    bind N(script_ExitWalk_80241560) to 0x80000 0;
    bind N(script_ExitWalk_802415BC) to 0x80000 2;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80242AAC));
    await N(script_MakeEntities);
    await N(script_80241530);
    await N(script_80241BF8);
    SI_VAR(0) = N(script_80241618);
    spawn EnterWalk;
    sleep 1;
});

s32 N(unk_80241740)[] = {
    0x00000041, 0x00000044, 0x00000047, 0x0000004D, 0x00000050, 0x00000053, 0x00000056, 0x00000059,
};

s32 N(intTable_80241760)[] = {
    0x00000041, 0x00000042, 0x00000044, 0x00000045, 0x00000047, 0x00000048,
};

s32 N(unk_80241778)[] = {
    0x00000029, 0x0000002A, 0x0000002C, 0x0000002D, 0x0000002F, 0x00000030,
};

s32 N(unk_80241790)[] = {
    0x0000004D, 0x00000035, 0x0000004E, 0x00000036,
};

s32 N(unk_802417A0)[] = {
    0x00000050, 0x00000038, 0x00000051, 0x00000039,
};

s32 N(unk_802417B0)[] = {
    0x00000053, 0x0000003B, 0x00000054, 0x0000003C,
};

s32 N(unk_802417C0)[] = {
    0x00000056, 0x0000003E, 0x00000057, 0x0000003F,
};

s32 N(unk_802417D0)[] = {
    0x00000059, 0x00000041, 0x0000005A, 0x00000042,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802417E0) = {
    SI_CMD(ScriptOpcode_CALL, RandInt, 20, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(10)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 0xFFFFFFAE, 60, 10),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(6), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(8), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(9)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0xFFFFFFAE, 0, 60, 10),
    SI_CMD(ScriptOpcode_LABEL, 2),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(6), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(8), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(9)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802419DC) = {
    SI_CMD(ScriptOpcode_CALL, RandInt, 20, SI_VAR(10)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(10)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 133),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 70, 51, 10),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(6), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(8), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(9)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 135),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 70, 0, 51, 10),
    SI_CMD(ScriptOpcode_LABEL, 2),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(6), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(8), 0, SI_VAR(0), 0),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, UpdateColliderTransform, SI_VAR(9)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241BF8) = SCRIPT({
    group 11;
    ParentColliderToModel(39, 63);
    ParentColliderToModel(50, 74);
    ParentColliderToModel(41, 65);
    ParentColliderToModel(42, 66);
    ParentColliderToModel(44, 68);
    ParentColliderToModel(45, 69);
    ParentColliderToModel(47, 71);
    ParentColliderToModel(48, 72);
    spawn {
        func_802401A0_DDC9D0();
    }
    ParentColliderToModel(53, 77);
    ParentColliderToModel(54, 78);
    ParentColliderToModel(56, 80);
    ParentColliderToModel(57, 81);
    ParentColliderToModel(59, 83);
    ParentColliderToModel(60, 84);
    ParentColliderToModel(62, 86);
    ParentColliderToModel(63, 87);
    ParentColliderToModel(65, 89);
    ParentColliderToModel(66, 90);
    SI_VAR(0) = N(unk_80241790);
    spawn N(script_802417E0);
    SI_VAR(0) = N(unk_802417A0);
    spawn N(script_802417E0);
    SI_VAR(0) = N(unk_802417B0);
    spawn N(script_802417E0);
    SI_VAR(0) = N(unk_802417C0);
    spawn N(script_802419DC);
    SI_VAR(0) = N(unk_802417D0);
    spawn N(script_802417E0);
    spawn {
        func_80240000_DDC830();
    }
});

s32 N(unk_80241E40)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80241E48)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80241E58)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80241E98)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80241EA4) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240CD4_DDD504(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_802412C8_DDDAF8(70, 70);
        sleep 27;
        PlaySound(8334);
        func_802412C8_DDDAF8(50, 50);
    }
    spawn {
        sleep 3;
        func_802407CC_DDCFFC(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_80240D38_DDD568();
        func_80241408_DDDC38();
        sleep 5;
        func_80241450_DDDC80();
        sleep 5;
        func_80241408_DDDC38();
    }
    sleep 3;
    func_80240D90_DDD5C0(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_80242008) = SCRIPT({
    if (SI_SAVE_FLAG(1194) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80241498_DDDCC8();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240790_DDCFC0();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240C10_DDD440(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_802408B0_DDD0E0();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240CA0_DDD4D0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802407AC_DDCFDC();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_8024095C_DDD18C();
    if (SI_VAR(0) == -1) {
        func_80240CA0_DDD4D0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802407AC_DDCFDC();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_80240BAC_DDD3DC(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240CA0_DDD4D0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_802407AC_DDCFDC();
        return;
    }
    await N(script_80241EA4);
    func_802407F8_DDD028(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(1194) = 1;
    func_80240CA0_DDD4D0(SI_VAR(9));
    func_80240BD8_DDD408();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_802407AC_DDCFDC();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 0xFFFFFF8D, 270, 0xFFFFFF88, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(1194));
    AssignScript(N(script_80242008));
    MakeEntity(0x802EA0E8, 315, 270, 0xFFFFFF9C, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1177));
    0x80111F2C(1);
    MakeEntity(0x802EA588, 685, 60, 0xFFFFFF9C, 0, 139, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1181));
    MakeEntity(0x802EA588, 0xFFFFFDA8, 60, 0xFFFFFFCE, 0, 129, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1182));
    MakeEntity(0x802EA564, 0xFFFFFF9C, 60, 0xFFFFFFD3, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1180));
    MakeEntity(0x802EA5D0, 0xFFFFFF6A, 60, 0xFFFFFFD3, 0, 306, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1178));
    MakeEntity(0x802EA564, 0xFFFFFF38, 60, 0xFFFFFFD3, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1179));
});

s32 pad_002648[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80242650) = {
    .moveSpeed = 3.0,
    .moveTime = 0x1E,
    .waitTime = 0x3C,
    .alertRadius = 100.0,
    .unk_10 = 30.0,
    .unk_14 = 0x4,
    .chaseSpeed = 5.0,
    .unk_1C = 0x8,
    .unk_20 = 0x1,
    .chaseRadius = 140.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242680) = SCRIPT({
    DoBasicAI(N(aISettings_80242650));
});

NpcSettings N(npcSettings_802426A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242680),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xF,
    .unk_2A = 0,
};

StaticNpc N(npcGroup_802426CC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802426A0),
        .pos = { -180.0, 0.0, 70.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0xFFFFFF4C, 0x00000000, 0x00000046, 0x0000001E, 0x0000000A, 0xFFFF8001, 0x00000001, 0xFFFFFF4C, 0x00000000, 0x00000046, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003E0001, 0x003E0002, 0x003E0003, 0x003E0002, 0x003E0001, 0x003E0001, 0x003E0006, 0x003E0006, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001,
        },
    },
};

StaticNpc N(npcGroup_802428BC)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802426A0),
        .pos = { 330.0, 0.0, 83.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x0000014A, 0x00000000, 0x00000053, 0x0000001E, 0x0000000A, 0xFFFF8001, 0x00000001, 0x0000014A, 0x00000000, 0x00000053, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003E0001, 0x003E0002, 0x003E0003, 0x003E0002, 0x003E0001, 0x003E0001, 0x003E0006, 0x003E0006, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001, 0x003E0001,
        },
    },
};

NpcGroupList N(npcGroupList_80242AAC) = {
    NPC_GROUP(N(npcGroup_802426CC), 0x10220008),
    NPC_GROUP(N(npcGroup_802428BC), 0x10240008),
    {},
};

// rodata: D_80242AD0_DDF300

// rodata: D_80242AD8_DDF308

