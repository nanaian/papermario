#include "kzn_23.h"

s32 pad_00030C[1];
s32 pad_00061C[1];
Script N(script_80240670);
s32 pad_0006AC[1];
Script N(script_UpdateTexturePan_802406B0);
Script N(script_8024074C);
Script N(script_80240868);
s32 N(intTable_80240984)[12];
Script N(script_802409B4);
Script N(script_80240A20);
Script N(main);
s32 pad_000D18[2];
s32 unk_missing_80240D78[22];
Script N(script_Idle_80240DD0);
Script N(script_Init_80240E0C);
Script N(script_80240E98);
s32 N(vectorList_80240F40)[12];
s32 N(vectorList_80240F70)[9];
s32 N(vectorList_80240F94)[15];
s32 N(vectorList_80240FD0)[18];
s32 N(intTable_80241018)[4];
Script N(script_80241028);
Script N(script_802410F4);
Script N(script_Idle_80241418);
Script N(script_Init_802417AC);
StaticNpc N(npcGroup_80241800)[1];
StaticNpc N(npcGroup_802419F0)[1];
NpcGroupList N(npcGroupList_80241BE0);
s32 pad_001C04[3];
const char D_80241C18_C9DF18[8]; // "jan_04"

// text: func_80240000_C9C300

// text: func_80240124_C9C424

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_C9C610

// text: func_802403D8_C9C6D8

// text: func_80240478_C9C778

// text: func_80240504_C9C804

// text: func_80240520_C9C820

s32 pad_00061C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 100.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x0,
};

Script N(script_80240670) = SCRIPT({
    SetMusicTrack(0, 42, 0, 8);
    PlayAmbientSounds(9);
});

s32 pad_0006AC[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_802406B0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C9C300();
                    return;
                }
            }
        }
    }
    func_80240124_C9C424();
});

Script N(script_8024074C) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 3);
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 0xFFFFFF38;
        SI_VAR(2) = 0;
        SI_VAR(3) = 600;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802406B0);
    }
});

Script N(script_80240868) = SCRIPT({
    group 0;
    SetTexPanner(SI_VAR(0), 4);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 500;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0xFFFFFE70;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802406B0);
    }
});

s32 N(intTable_80240984)[] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000003, 0x00000002, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFE,
    0xFFFFFFFD, 0xFFFFFFFD, 0xFFFFFFFE, 0xFFFFFFFF,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_802409B4) = {
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240984)),
        SI_CMD(ScriptOpcode_LOOP, 12),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
            SI_CMD(ScriptOpcode_ADD, SI_MAP_VAR(10), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80240A20) = SCRIPT({
    spawn N(script_802409B4);
    group 0;
    SetTexPanner(19, 0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 0;
    SI_VAR(3) = 0;
    SI_MAP_VAR(10) = 0xFFFFFF97;
    SI_VAR(5) = 40;
    TranslateModel(19, 0, SI_MAP_VAR(10), 0);
    sleep 6;
10:
    SetTexPanOffset(0, 0, SI_VAR(0), SI_VAR(1));
    SetTexPanOffset(0, 1, SI_VAR(2), SI_VAR(3));
    SI_VAR(0) -= 700;
    SI_VAR(1) += 700;
    SI_VAR(2) += 200;
    SI_VAR(3) -= 300;
    if (SI_VAR(5) == 40) {
        if (SI_MAP_VAR(10) < 2700) {
            SI_MAP_VAR(10) += 20;
        } else {
            SI_VAR(5) -= 1;
        }
    } else {
        if (SI_VAR(5) != 0) {
            SI_VAR(5) -= 1;
            SI_MAP_VAR(10) -= 1;
        }
    }
    TranslateModel(19, 0, SI_MAP_VAR(10), 0);
    sleep 1;
    goto 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0010);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241BE0));
    spawn N(script_80240670);
    spawn N(script_80240A20);
    SI_VAR(0) = 16;
    spawn N(script_8024074C);
    SI_VAR(0) = 17;
    spawn N(script_80240868);
});

s32 pad_000D18[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240D20) = {
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
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80240D4C) = {
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

s32 unk_missing_80240D78[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Idle_80240DD0) = SCRIPT({
    sleep 30;
    SpeakToPlayer(-1, 0xB60009, 0xB60007, 5, 0x100117);
});

Script N(script_Init_80240E0C) = SCRIPT({
    InterpNpcYaw(-1, 90, 1);
    sleep 1;
    0x802CDE68(-1, 10);
    SetNpcRotation(-1, 0, 0, 180);
    SetNpcAnimation(-1, 0xB60007);
    BindNpcIdle(-1, N(script_Idle_80240DD0));
});

Script N(script_80240E98) = SCRIPT({
0:
    SetCamSpeed(0, 90.0);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 60;
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 2740) {
        sleep 1;
        goto 0;
    }
});

s32 N(vectorList_80240F40)[] = {
    0x42480000, 0x4525A000, 0xC1A00000, 0x43160000, 0x45322000, 0xC2340000, 0x436B0000, 0x45386000,
    0xC2700000, 0x43A78000, 0x453B8000, 0xC2960000,
};

s32 N(vectorList_80240F70)[] = {
    0xC1A00000, 0x4525A000, 0xC1A00000, 0xC2F00000, 0x45322000, 0xC2200000, 0xC35C0000, 0x453B8000,
    0xC2200000,
};

s32 N(vectorList_80240F94)[] = {
    0x41200000, 0x4525A000, 0xC1A00000, 0x41A00000, 0x452F0000, 0xC2700000, 0x41F00000, 0x45340000,
    0xC2C80000, 0x42200000, 0x45368000, 0xC3160000, 0x42480000, 0x4537C000, 0xC35C0000,
};

s32 N(vectorList_80240FD0)[] = {
    0xC20C0000, 0x4525A000, 0xC1A00000, 0xC2820000, 0x452DC000, 0xC1F00000, 0xC2BE0000, 0x45322000,
    0xC2200000, 0xC2FA0000, 0x45340000, 0xC2480000, 0xC31B0000, 0x45354000, 0xC2700000, 0xC3390000,
    0x45363000, 0xC28C0000,
};

s32 N(intTable_80241018)[] = {
    0x00000082, 0xFFFFFF6A, 0x00000082, 0xFFFFFF6A,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80241028) = {
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80241018)),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(17), 0),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 429, 0, SI_VAR(1), 2800, 0),
        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(17), 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, PlaySoundAt, 430, 0, SI_VAR(1), 2800, 0),
        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(17), 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802410F4) = SCRIPT({
    loop {
        spawn {
            RandInt(3, SI_VAR(0));
            spawn N(script_80241028);
            match SI_VAR(0) {
                == 0 {
                    PlayEffect(101, 2, 50, 2650, 0xFFFFFFEC, 1, 0, 0, 0, 0, 0, 0, 0, 0);
                    SI_VAR(14) = SI_VAR(15);
                    LoadPath(15, N(vectorList_80240F40), 4, 4);
                }
                == 1 {
                    PlayEffect(101, 2, 0xFFFFFFEC, 2650, 0xFFFFFFEC, 1, 0, 0, 0, 0, 0, 0, 0, 0);
                    SI_VAR(14) = SI_VAR(15);
                    LoadPath(10, N(vectorList_80240F70), 3, 4);
                }
                == 2 {
                    PlayEffect(101, 2, 10, 2650, 0xFFFFFFEC, 1, 0, 0, 0, 0, 0, 0, 0, 0);
                    SI_VAR(14) = SI_VAR(15);
                    LoadPath(15, N(vectorList_80240F94), 5, 4);
                }
                == 3 {
                    PlayEffect(101, 2, 0xFFFFFFCE, 2650, 0xFFFFFFEC, 1, 0, 0, 0, 0, 0, 0, 0, 0);
                    SI_VAR(14) = SI_VAR(15);
                    LoadPath(20, N(vectorList_80240FD0), 6, 4);
                }
            }
            RandInt(1, SI_VAR(4));
            if (SI_VAR(4) == 0) {
                SI_VAR(4) = -1;
            }
            loop {
                GetNextPathPos();
                SI_VAR(1) *= SI_VAR(4);
                func_80240478_C9C778(SI_VAR(1), SI_VAR(2), SI_VAR(3));
                sleep 1;
                if (SI_VAR(0) == 0) {
                    break;
                }
            }
            0x802D7B10(SI_VAR(14));
        }
        sleep 8;
    }
});

Script N(script_Idle_80241418) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    func_80240504_C9C804();
    spawn N(script_80240E98);
    SetSelfVar(0, 0);
    spawn {
        sleep 1;
        SetPlayerAnimation(0x80000);
    }
    spawn {
        MakeLerp(0, 3090, 160, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) -= 100;
            SetNpcPos(-1, 0, SI_VAR(0), 0);
            SetNpcPos(0, 10, SI_VAR(0), 0xFFFFFFFB);
            SetPlayerPos(0xFFFFFFF6, SI_VAR(0), 5);
            SI_VAR(0) += 20;
            SetNpcPos(0xFFFFFFFC, 0xFFFFFFF6, SI_VAR(0), 0);
            if (SI_VAR(0) > 2840) {
                SetSelfVar(0, 1);
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        sleep 1;
        goto 0;
    }
    spawn N(script_802410F4);
    sleep 35;
    MakeEntity(0x802EAE30, 0, 2650, 0, 148, 0x80000000);
    SI_VAR(10) = SI_VAR(0);
    spawn {
        func_80240520_C9C820();
    }
    SI_VAR(9) = SI_VAR(10);
    func_802403D8_C9C6D8(SI_VAR(9), SI_VAR(2), SI_VAR(3), SI_VAR(4));
    MakeLerp(SI_VAR(3), 3000, 10, 1);
    loop {
        UpdateLerp();
        func_80240310_C9C610(SI_VAR(9), SI_VAR(2), SI_VAR(0), SI_VAR(4));
        SI_VAR(2) += -1;
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 45;
    GotoMap(D_80241C18_C9DF18, 1);
    sleep 100;
});

Script N(script_Init_802417AC) = SCRIPT({
    SetNpcPos(-1, 0, 0xFFFFFF9C, 0);
    SetNpcAnimation(-1, 0x160008);
    BindNpcIdle(-1, N(script_Idle_80241418));
});

StaticNpc N(npcGroup_80241800)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240D20),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00110709,
        .init = N(script_Init_80240E0C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_802419F0)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80240D4C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x19100004,
        .init = N(script_Init_802417AC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
    },
};

NpcGroupList N(npcGroupList_80241BE0) = {
    NPC_GROUP(N(npcGroup_80241800), 0x00000000),
    NPC_GROUP(N(npcGroup_802419F0), 0x00000000),
    {},
};

s32 pad_001C04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241C10_C9DF10

// rodata: D_80241C18_C9DF18

