#include "tst_04.h"

s32 N(unk_80240360)[108];
s32 N(unk_802405B0)[9];
s32 pad_000658[2];
s32 pad_00068C[1];
Script N(script_80240780);
Script N(script_802407B0);
Script N(script_802408F8);
Script N(script_80240A60);
Script N(main);
s32 pad_000C6C[1];
Script N(script_MakeEntities);
s32 pad_000CA4[3];
Script N(script_80240CB0);
s32 pad_000CF4[3];
Script N(script_80240D00);
Script N(script_80240D34);
Script N(script_NpcAI_80240D44);
Script N(script_80240D54);
Script N(script_80240D64);
Script N(script_80240D74);
s8 N(npcGroup_80240DB0)[314];
s8 pad_000EEA[182];
NpcGroupList N(npcGroupList_80240FA0);
s32 pad_000FB8[2];
const char D_80240FC0_B1C530[8]; // "tst_03"
s32 pad_000FC8[2];

// text: func_80240000_B1B570

// text: func_802400FC_B1B66C

// text: func_80240260_B1B7D0

// text: func_8024029C_B1B80C

s32 N(unk_80240360)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x3C013F36, 0x3421DB6E, 0x44810000, 0x27B000D8, 0x44050000, 0x0200202D, 0x00A0302D, 0x0C019DF0,
    0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0x8E250028, 0xC6200030,
    0x8E26002C, 0x46000007, 0x44070000, 0x0C019E40, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80,
    0x0080302D, 0x8E2500A4, 0x4406C000, 0x0C0B76A3, 0x24040001, 0x24040001, 0x0000282D, 0x00A0302D,
    0x00A0382D, 0x27A20018, 0x0C0B7710, 0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138,
    0xD7B60130, 0xD7B40128, 0x03E00008, 0x27BD0140,
};

// text: func_80240510_B1BA80

// text: func_80240574_B1BAE4

s32 N(unk_802405B0)[] = {
    0x3C048024, 0x8C840FD0, 0x27BDFFE8, 0xAFBF0010, 0x0C047A2F, 0x00000000, 0x8FBF0010, 0x03E00008,
    0x27BD0018,
};

// text: func_802405D4_B1BB44

// text: func_80240628_B1BB98

s32 pad_000658[] = {
    0x00000000, 0x00000000,
};

// text: func_80240660_B1BBD0

s32 pad_00068C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -484.0f, 0.0f, 0.0f, 0.0f },
    { 484.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 354.0f, 0.0f, 294.0f, 117.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_80240780) = SCRIPT({
    GotoMap(D_80240FC0_B1C530, 1);
    sleep 100;
});

Script N(script_802407B0) = SCRIPT({
0:
    MakeLerp(0, 100, 50, 10);
10:
    UpdateLerp();
    TranslateModel(8, 0, SI_VAR(0), 0);
    UpdateColliderTransform(8);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    MakeLerp(100, 0, 50, 10);
20:
    UpdateLerp();
    TranslateModel(8, 0, SI_VAR(0), 0);
    UpdateColliderTransform(8);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    goto 0;
});

Script N(script_802408F8) = SCRIPT({
0:
    MakeLerp(0, 360, 360, 0);
10:
    UpdateLerp();
    RotateModel(5, SI_VAR(0), 0, 1, 0);
    UpdateColliderTransform(5);
    func_80240000_B1B570();
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    goto 0;
    MakeLerp(20, 0xFFFFFFEC, 40, 10);
20:
    UpdateLerp();
    RotateModel(5, SI_VAR(0), 0, 0, 1);
    UpdateColliderTransform(5);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 20;
    }
    goto 0;
});

Script N(script_80240A60) = SCRIPT({
0:
    MakeLerp(0, 360, 360, 0);
10:
    UpdateLerp();
    RotateModel(0, SI_VAR(0), 0, 1, 0);
    UpdateColliderTransform(0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    goto 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 23;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80240FA0));
    await N(script_MakeEntities);
    bind N(script_80240780) to TriggerFlag_WALL_PUSH 12;
    ParentColliderToModel(8, 8);
    ParentColliderToModel(5, 5);
    ParentColliderToModel(0, 0);
    ParentColliderToModel(1, 1);
    ParentColliderToModel(2, 2);
    spawn N(script_802407B0);
    spawn N(script_802408F8);
    spawn N(script_80240A60);
    spawn N(script_80240CB0);
});

s32 pad_000C6C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9BB0, 0, 0, 300, 0, 0x80000000);
});

s32 pad_000CA4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_80240CB0) = {
    SI_CMD(ScriptOpcode_CALL, func_80240628_B1BB98),
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_CALL, func_80240260_B1B7D0),
    SI_CMD(ScriptOpcode_CALL, func_80240510_B1BA80),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

s32 pad_000CF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240D00) = SCRIPT({
    func_80240660_B1BBD0();
    SetNpcFlagBits(-1, 0x40000, 1);
});

Script N(script_80240D34) = SCRIPT({

});

Script N(script_NpcAI_80240D44) = SCRIPT({

});

Script N(script_80240D54) = SCRIPT({

});

Script N(script_80240D64) = SCRIPT({

});

Script N(script_80240D74) = SCRIPT({

});

NpcSettings N(npcSettings_80240D84) = {
    .unk_00 = { 0, 0x9D, 0, 0x8 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_80240D00),
    .onInteract = &N(script_80240D64),
    .ai = &N(script_NpcAI_80240D44),
    .onHit = &N(script_80240D54),
    .aux = &N(script_80240D34),
    .onDefeat = &N(script_80240D74),
    .flags = 0x5,
    .unk_24 = { 0, 0, 0, 0xC8 },
    .level = 0,
    .unk_2A = 0,
};

s8 N(npcGroup_80240DB0)[] = {
    0x00, 0x00, 0x00, 0x00, 0x80, 0x24, 0x0D, 0x84, 0x42, 0xA0, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
    0xC2, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

s8 pad_000EEA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

NpcGroupList N(npcGroupList_80240FA0) = {
    NPC_GROUP(N(npcGroup_80240DB0), 0x00000000),
    {},
};

s32 pad_000FB8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80240FC0_B1C530

s32 pad_000FC8[] = {
    0x00000000, 0x00000000,
};
