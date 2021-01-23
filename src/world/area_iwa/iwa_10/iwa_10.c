#include "iwa_10.h"

s32 pad_00003C[1];
s32 pad_000158[2];
s32 pad_001028[2];
s32 pad_001508[2];
s32 pad_0015A4[3];
s32 pad_0017EC[1];
Script N(script_80241850);
Script N(script_8024187C);
Script N(script_802418B0);
s32 pad_00190C[1];
Script N(script_ExitWalk_80241910);
Script N(script_8024196C);
Script N(script_EnterWalk_80241998);
Script N(main);
s32 pad_001D04[3];
Script N(script_80241D10);
s32 unk_missing_80241D78[11];
s32 N(unk_80241DD0)[1];
Script N(script_80241DD4);
Script N(script_80241E04);
Script N(script_Interact_80241E34);
Script N(script_Init_80241F0C);
Script N(script_Init_80241F30);
Script N(script_Interact_80241FEC);
Script N(script_Init_8024201C);
Script N(script_Interact_80242068);
Script N(script_Init_802420D8);
Script N(script_Interact_80242154);
Script N(script_Init_80242238);
Script N(script_Interact_8024225C);
Script N(script_Init_802422CC);
StaticNpc N(npcGroup_802422F0)[2];
StaticNpc N(npcGroup_802426D0)[1];
StaticNpc N(npcGroup_802428C0)[3];
StaticNpc N(npcGroup_80242E90)[2];
NpcGroupList N(npcGroupList_80243270);
s32 pad_0032B8[2];
Script N(script_802432C0);
Script N(script_80243438);
Script N(script_8024354C);
Script N(script_80243660);
Script N(script_80244848);
Script N(script_80244A24);
Script N(script_80244B5C);
Script N(script_802451E8);
Script N(script_8024587C);
s32 pad_005A58[2];
s32 N(unk_80245A60)[2];
s32 N(unk_80245A68)[4];
s32 N(unk_80245A78)[16];
s32 N(unk_80245AB8)[3];
Script N(script_80245AC4);
Script N(script_80245C28);
Script N(script_802460A8);
Script N(script_MakeEntities);
s32 pad_006238[2];
s32 N(unk_8024626C)[1];
s32 N(unk_80246270)[1];
Script N(script_80246274);
Script N(script_802463B8);
Script N(script_80246408);
s32 N(unk_80246E80)[4];
Script N(script_Interact_80246E90);
Script N(script_Idle_802474F8);
Script N(script_Init_80247688);
StaticNpc N(npcGroup_80247720)[1];
Script N(script_SearchBush_80247910);
Script N(script_ShakeTree_80247C70);
s32 N(treeDropList_Bush1)[8];
s32 N(searchBushEvent_Bush1)[4];
s32 N(treeDropList_Bush2)[8];
s32 N(searchBushEvent_Bush2)[4];
s32 N(treeDropList_Bush3)[8];
s32 N(searchBushEvent_Bush3)[4];
s32 N(treeDropList_Bush4)[8];
s32 N(searchBushEvent_Bush4)[4];
Script N(script_80248394);
s32 pad_008454[3];
const char D_80248460_9269D0[8]; // "iwa_00"
const char D_80248468_9269D8[8]; // "iwa_11"
const char D_80248470_9269E0[14]; // "party_pareta"

// text: func_80240000_91E570

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_91E5B0

// text: func_802400F4_91E664

s32 pad_000158[] = {
    0x00000000, 0x00000000,
};

// text: func_80240160_91E6D0

// text: func_802402F0_91E860

// text: func_8024030C_91E87C

// text: func_8024032C_91E89C

// text: func_80240358_91E8C8

// text: func_802403C4_91E934

// text: func_80240410_91E980

// text: func_802404BC_91EA2C

// text: func_8024070C_91EC7C

// text: func_80240738_91ECA8

// text: func_80240770_91ECE0

// text: func_80240800_91ED70

// text: func_80240834_91EDA4

// text: func_80240898_91EE08

// text: func_802408F0_91EE60

// text: func_80240E28_91F398

// text: func_80240F68_91F4D8

// text: func_80240FB0_91F520

// text: func_80240FF8_91F568

s32 pad_001028[] = {
    0x00000000, 0x00000000,
};

// text: func_80241030_91F5A0

// text: func_802411B4_91F724

// text: func_80241210_91F780

// text: func_802413E0_91F950

// text: func_80241434_91F9A4

// text: func_8024146C_91F9DC

s32 pad_001508[] = {
    0x00000000, 0x00000000,
};

// text: func_80241510_91FA80

s32 pad_0015A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802415B0_91FB20

// text: func_80241620_91FB90

s32 pad_0017EC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -1250.0f, 30.0f, 0.0f, 90.0f },
    { -445.0f, 215.0f, -500.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190059,
};

Script N(script_80241850) = SCRIPT({
    SetMusicTrack(0, 22, 0, 8);
});

Script N(script_8024187C) = SCRIPT({
    StopSound(0x80000009);
    func_802D5FF8(130, 0);
});

Script N(script_802418B0) = SCRIPT({
    FadeOutMusic(0, 500);
    sleep 15;
    func_802D5FD8();
    PlaySoundAtF(0x80000009, 1, 0xFFFFFDD0, 0, 0xFFFFFF17);
});

s32 pad_00190C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241910) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80248460_9269D0, 0);
    sleep 100;
});

Script N(script_8024196C) = SCRIPT({
    bind N(script_ExitWalk_80241910) to 0x80000 87;
});

Script N(script_EnterWalk_80241998) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_8024196C);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SI_VAR(0) = N(script_8024196C);
        spawn EnterWalk;
    } else {
        spawn N(script_80244B5C);
        spawn N(script_8024196C);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 8;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1971) = 1;
    MakeNpcs(1, N(npcGroupList_80243270));
    ClearDefeatedEnemies();
    await N(script_MakeEntities);
    await N(script_8024587C);
    spawn N(script_EnterWalk_80241998);
    sleep 1;
    spawn N(script_80241850);
    spawn N(script_80248394);
    PlaySoundAtF(0x80000009, 1, 0xFFFFFDD0, 0, 0xFFFFFF17);
    spawn {
        SI_VAR(15) = 0;
    10:
        SI_VAR(15) += 1;
        func_80240000_91E570();
        RotateModel(91, SI_VAR(0), 0, 0, -1);
        RotateModel(93, SI_VAR(1), 0, 0, -1);
        sleep 10;
        goto 10;
    }
    spawn {
        SetTexPanner(106, 2);
        SetTexPanner(104, 2);
        EnableTexPanning(106, 1);
        EnableTexPanning(104, 1);
        SI_VAR(0) = 0;
    20:
        SI_VAR(0) -= 3000;
        SetTexPanOffset(2, 0, 0, SI_VAR(0));
        sleep 1;
        goto 20;
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFB9) {
        spawn N(script_80246408);
    }
});

s32 pad_001D04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241D10) = SCRIPT({

});

NpcSettings N(npcSettings_80241D20) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = &N(script_80241D10),
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

NpcSettings N(npcSettings_80241D4C) = {
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

s32 unk_missing_80241D78[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80241DA4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1A,
    .radius = 0x17,
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

s32 N(unk_80241DD0)[] = {
    0x00000000,
};

Script N(script_80241DD4) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80241E04) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_Interact_80241E34) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SpeakToPlayer(-1, 0x8C0504, 0x8C0501, 0, 0xD0001);
    } else {
        SpeakToPlayer(-1, 0x8C0504, 0x8C0501, 0, 0xD0002);
        ShowChoice(0x1E000C);
        EndSpeech(-1, 0x8C0504, 0x8C0501, 0);
        if (SI_VAR(0) == 0) {
            spawn N(script_802451E8);
        } else {
        }
    }
});

Script N(script_Init_80241F0C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241E34));
});

Script N(script_Init_80241F30) = SCRIPT({
    EnableNpcShadow(-1, 0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SetNpcPos(-1, 0xFFFFFE57, 70, 0xFFFFFFEC);
        InterpNpcYaw(-1, 90, 0);
    } else {
        SetNpcPos(-1, 0xFFFFFE57, 70, 0xFFFFFFEC);
        InterpNpcYaw(-1, 270, 0);
    }
});

Script N(script_Interact_80241FEC) = SCRIPT({
    SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0xD0004);
});

Script N(script_Init_8024201C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80241FEC));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFBC) {
        RemoveNpc(-1);
    }
});

Script N(script_Interact_80242068) = SCRIPT({
    SpeakToPlayer(6, 0x840104, 0x840101, 0, 0xD000B);
    SpeakToPlayer(7, 0x840104, 0x840101, 0, 0xD000C);
    SpeakToPlayer(8, 0x840104, 0x840101, 0, 0xD000D);
});

Script N(script_Init_802420D8) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242068));
    if (SI_SAVE_VAR(0) < 0xFFFFFFBC) {
        RemoveNpc(-1);
        return;
    }
    if (SI_SAVE_VAR(0) >= 0xFFFFFFCB) {
        RemoveNpc(-1);
    }
});

Script N(script_Interact_80242154) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFCB {
            if (SI_AREA_FLAG(2) == 0) {
                SI_VAR(0) = 0xD0005;
                SI_AREA_FLAG(2) = 1;
            } else {
                SI_VAR(0) = 0xD0006;
                SI_AREA_FLAG(2) = 1;
            }
        }
        < 39 {
            SI_VAR(0) = 0xD0007;
        }
        else {
            SI_VAR(0) = 0xD0008;
        }
    }
    SpeakToPlayer(-1, 0x930004, 0x930001, 0, SI_VAR(0));
});

Script N(script_Init_80242238) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242154));
});

Script N(script_Interact_8024225C) = SCRIPT({
    if (SI_SAVE_VAR(123) < 8) {
        SI_VAR(0) = 0xD0009;
    } else {
        SI_VAR(0) = 0xD000A;
    }
    SpeakToPlayer(-1, 0x840204, 0x840201, 0, SI_VAR(0));
});

Script N(script_Init_802422CC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024225C));
});

StaticNpc N(npcGroup_802422F0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241D20),
        .pos = { -440.0, 20.0, 110.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80241F0C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501, 0x008C0501,
        },
        .tattle = 0x1A0083,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241D20),
        .pos = { -425.0, 70.0, -20.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80241F30),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x008C0001, 0x008C0003, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001,
        },
    },
};

StaticNpc N(npcGroup_802426D0)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80241D4C),
        .pos = { -254.0, 20.0, 165.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_8024201C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A0085,
    },
};

StaticNpc N(npcGroup_802428C0)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80241D4C),
        .pos = { -562.0, 0.0, 384.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_802420D8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00840101, 0x00840102, 0x00840103, 0x00840103, 0x00840101, 0x00840101, 0x00840106, 0x00840106, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103,
        },
        .tattle = 0x1A0003,
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80241D4C),
        .pos = { -582.0, 0.0, 406.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_802420D8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00840101, 0x00840102, 0x00840103, 0x00840103, 0x00840101, 0x00840101, 0x00840106, 0x00840106, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103,
        },
        .tattle = 0x1A0004,
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80241D4C),
        .pos = { -524.0, 0.0, 411.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_802420D8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00840101, 0x00840102, 0x00840103, 0x00840103, 0x00840101, 0x00840101, 0x00840106, 0x00840106, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103, 0x00840103,
        },
        .tattle = 0x1A0005,
    },
};

StaticNpc N(npcGroup_80242E90)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241DA4),
        .pos = { -344.0, 0.0, 379.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_80242238),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00930001, 0x00930002, 0x00930003, 0x00930003, 0x00930001, 0x00930001, 0x00930000, 0x00930000, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001, 0x00930001,
        },
        .tattle = 0x1A0086,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241D4C),
        .pos = { -760.0, 0.0, 160.0 },
        .flags = 0x00402D09,
        .init = N(script_Init_802422CC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00840201, 0x00840202, 0x00840203, 0x00840203, 0x00840201, 0x00840201, 0x00840206, 0x00840206, 0x00840203, 0x00840203, 0x00840203, 0x00840203, 0x00840203, 0x00840203, 0x00840203, 0x00840203,
        },
        .tattle = 0x1A008A,
    },
};

NpcGroupList N(npcGroupList_80243270) = {
    NPC_GROUP(N(npcGroup_802422F0), 0x00000000),
    NPC_GROUP(N(npcGroup_802426D0), 0x00000000),
    NPC_GROUP(N(npcGroup_802428C0), 0x00000000),
    NPC_GROUP(N(npcGroup_80242E90), 0x00000000),
    NPC_GROUP(N(npcGroup_80247720), 0x00000000),
    {},
};

s32 pad_0032B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802432C0) = SCRIPT({
    PlaySoundAtModel(59, 0xB000001A, 0);
    SI_VAR(0) =f SI_MAP_VAR(0);
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(0) +=f 0xFFFFFECA;
    } else {
        SI_VAR(0) +=f 0xFFFFFE3E;
    }
    SI_VAR(1) = 140;
    SI_VAR(2) = 0;
    SI_VAR(3) = 1.0;
    SI_VAR(4) = 3.0;
    SI_VAR(11) += 10000;
    EnableModel(SI_VAR(11), 1);
    loop 20 {
        TranslateModel(SI_VAR(11), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        ScaleModel(SI_VAR(11), SI_VAR(3), SI_VAR(3), 1);
        SI_VAR(1) +=f SI_VAR(4);
        SI_VAR(3) += 0.046875;
        SI_VAR(4) *= 0.90625;
        sleep 1;
    }
    EnableModel(SI_VAR(11), 0);
});

Script N(script_80243438) = SCRIPT({
    MakeLerp(0, 105, 30, 10);
0:
    UpdateLerp();
    RotateGroup(85, SI_VAR(0), 0, 1, 0);
    RotateGroup(89, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    ModifyColliderFlags(0, 78, 0x7FFFFE00);
    ModifyColliderFlags(0, 79, 0x7FFFFE00);
    ModifyColliderFlags(1, 80, 0x7FFFFE00);
    ModifyColliderFlags(1, 81, 0x7FFFFE00);
});

Script N(script_8024354C) = SCRIPT({
    MakeLerp(105, 0, 30, 10);
0:
    UpdateLerp();
    RotateGroup(85, SI_VAR(0), 0, 1, 0);
    RotateGroup(89, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    ModifyColliderFlags(1, 78, 0x7FFFFE00);
    ModifyColliderFlags(1, 79, 0x7FFFFE00);
    ModifyColliderFlags(0, 80, 0x7FFFFE00);
    ModifyColliderFlags(0, 81, 0x7FFFFE00);
});

Script N(script_80243660) = SCRIPT({
0:
    SI_VAR(0) = SI_MAP_VAR(0);
    TranslateModel(58, SI_VAR(0), 0, 0);
    TranslateModel(59, SI_VAR(0), 0, 0);
    TranslateModel(63, SI_VAR(0), 0, 0);
    TranslateModel(65, SI_VAR(0), 0, 0);
    TranslateModel(67, SI_VAR(0), 0, 0);
    TranslateModel(69, SI_VAR(0), 0, 0);
    TranslateModel(61, SI_VAR(0), 0, 0);
    TranslateModel(45, SI_VAR(0), 0, 0);
    TranslateModel(46, SI_VAR(0), 0, 0);
    TranslateModel(47, SI_VAR(0), 0, 0);
    TranslateModel(48, SI_VAR(0), 0, 0);
    TranslateModel(49, SI_VAR(0), 0, 0);
    TranslateModel(50, SI_VAR(0), 0, 0);
    TranslateModel(52, SI_VAR(0), 0, 0);
    TranslateModel(53, SI_VAR(0), 0, 0);
    TranslateModel(55, SI_VAR(0), 0, 0);
    TranslateModel(56, SI_VAR(0), 0, 0);
    TranslateModel(72, SI_VAR(0), 0, 0);
    TranslateModel(74, SI_VAR(0), 0, 0);
    TranslateModel(76, SI_VAR(0), 0, 0);
    if (SI_MAP_FLAG(5) == 1) {
        SI_VAR(0) = 180;
        TranslateModel(58, 0xFFFFFFBB, 0xFFFFFFCE, 0);
        TranslateModel(59, 0xFFFFFFBB, 0xFFFFFFCE, 0);
        TranslateModel(63, 75, 25, 2);
        TranslateModel(65, 30, 30, 2);
        TranslateModel(67, 0xFFFFFFF6, 30, 2);
        TranslateModel(69, 0xFFFFFFCE, 30, 2);
        TranslateModel(61, -1, 0xFFFFFFC6, 0);
        TranslateModel(52, 82, 0xFFFFFFED, 0xFFFFFFDD);
        TranslateModel(53, 82, 0xFFFFFFED, 0xFFFFFFDD);
        TranslateModel(55, 82, 0xFFFFFFED, 35);
        TranslateModel(56, 82, 0xFFFFFFED, 35);
        TranslateModel(72, 0xFFFFFFEB, 30, 0);
        TranslateModel(74, 0xFFFFFFE7, 30, 0);
        TranslateModel(76, 0xFFFFFFC1, 15, 0);
        RotateModel(58, SI_VAR(0), 0, 1, 0);
        RotateModel(59, SI_VAR(0), 0, 1, 0);
        RotateModel(63, SI_VAR(0), 0, 1, 0);
        RotateModel(65, SI_VAR(0), 0, 1, 0);
        RotateModel(67, SI_VAR(0), 0, 1, 0);
        RotateModel(69, SI_VAR(0), 0, 1, 0);
        RotateModel(61, SI_VAR(0), 0, 1, 0);
        RotateModel(45, SI_VAR(0), 0, 1, 0);
        RotateModel(46, SI_VAR(0), 0, 1, 0);
        RotateModel(47, SI_VAR(0), 0, 1, 0);
        RotateModel(48, SI_VAR(0), 0, 1, 0);
        RotateModel(49, SI_VAR(0), 0, 1, 0);
        RotateModel(50, SI_VAR(0), 0, 1, 0);
        RotateModel(52, SI_VAR(0), 0, 1, 0);
        RotateModel(53, SI_VAR(0), 0, 1, 0);
        RotateModel(55, SI_VAR(0), 0, 1, 0);
        RotateModel(56, SI_VAR(0), 0, 1, 0);
        RotateModel(72, SI_VAR(0), 0, 1, 0);
        RotateModel(74, SI_VAR(0), 0, 1, 0);
        RotateModel(76, SI_VAR(0), 0, 1, 0);
        TranslateModel(58, 69, 50, 0);
        TranslateModel(59, 69, 50, 0);
        TranslateModel(63, 0xFFFFFFB5, 0xFFFFFFE7, 0xFFFFFFFE);
        TranslateModel(65, 0xFFFFFFE2, 0xFFFFFFE2, 0xFFFFFFFE);
        TranslateModel(67, 10, 0xFFFFFFE2, 0xFFFFFFFE);
        TranslateModel(69, 50, 0xFFFFFFE2, 0xFFFFFFFE);
        TranslateModel(61, 1, 58, 0);
        TranslateModel(52, 0xFFFFFFAE, 19, 35);
        TranslateModel(53, 0xFFFFFFAE, 19, 35);
        TranslateModel(55, 0xFFFFFFAE, 19, 0xFFFFFFDD);
        TranslateModel(56, 0xFFFFFFAE, 19, 0xFFFFFFDD);
        TranslateModel(72, 21, 0xFFFFFFE2, 0);
        TranslateModel(74, 25, 0xFFFFFFE2, 0);
        TranslateModel(76, 63, 0xFFFFFFF1, 0);
    }
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(2) = SI_MAP_VAR(0);
    } else {
        SI_VAR(2) = 1000;
        SI_VAR(2) -= SI_MAP_VAR(0);
    }
    SI_VAR(0) =f SI_VAR(2);
    SI_VAR(0) *= -2.40625;
    RotateModel(65, SI_VAR(0), 0, 0, 1);
    RotateModel(67, SI_VAR(0), 0, 0, 1);
    RotateModel(69, SI_VAR(0), 0, 0, 1);
    SI_VAR(0) *= 0.6005859375;
    RotateModel(63, SI_VAR(0), 0, 0, 1);
    func_80240160_91E6D0(SI_VAR(2), SI_VAR(0), 0, 0xFFFFFFEC, 75, 0, 0);
    func_80240160_91E6D0(SI_VAR(2), SI_VAR(1), 0xFFFFFFF6, 10, 75, 0, 0xFFFFFFA6);
    TranslateModel(72, SI_VAR(0), SI_VAR(1), 0);
    func_80240160_91E6D0(SI_VAR(2), SI_VAR(0), 0, 0xFFFFFFEC, 75, 0, 0);
    SI_VAR(0) += 5;
    TranslateModel(76, SI_VAR(0), 0xFFFFFFF2, 0);
    func_80240160_91E6D0(SI_VAR(2), SI_VAR(0), 0, 0xFFFFFFEC, 75, 0, 0);
    func_80240160_91E6D0(SI_VAR(2), SI_VAR(1), 0xFFFFFFF6, 10, 75, 0, 0xFFFFFFA6);
    TranslateModel(74, SI_VAR(0), SI_VAR(1), 0);
    func_80240160_91E6D0(SI_VAR(2), SI_VAR(0), 0xFFFFFFD8, 40, 75, 0, 90);
    RotateModel(74, SI_VAR(0), 0, 0, 1);
    func_80240160_91E6D0(SI_VAR(12), SI_VAR(0), 0xFFFFFFE2, 30, 10, 0, 0);
    RotateModel(61, SI_VAR(0), 0, 0, 1);
    if (SI_MAP_VAR(1) != 0) {
        if (SI_VAR(13) == 0) {
            spawn {
                sleep 18;
                spawn N(script_802432C0);
            }
        }
    }
    if (SI_VAR(13) <= 20) {
        func_80240160_91E6D0(SI_VAR(13), SI_VAR(0), 0.703125, 1.0, 10, 0, 180);
        func_80240160_91E6D0(SI_VAR(13), SI_VAR(2), 0.0, 0.296875, 10, 0, 180);
        SI_VAR(1) = 0.296875;
        SI_VAR(1) -=f SI_VAR(2);
        SI_VAR(1) += 1.0;
        ScaleModel(59, SI_VAR(1), SI_VAR(0), SI_VAR(1));
        ScaleModel(58, SI_VAR(1), SI_VAR(0), SI_VAR(1));
    } else {
        SI_VAR(0) = 1.0;
        SI_VAR(2) = 0.296875;
        SI_VAR(1) = 0.296875;
        SI_VAR(1) -=f SI_VAR(2);
        SI_VAR(1) += 1.0;
        ScaleModel(59, SI_VAR(1), SI_VAR(0), SI_VAR(1));
        ScaleModel(58, SI_VAR(1), SI_VAR(0), SI_VAR(1));
    }
    if (SI_MAP_FLAG(0) == 1) {
        PlaySoundAt(8357, 0, 0xFFFFFE4D, 84, 37);
        SI_VAR(8) = 10;
        SI_FLAG(1) = 1;
        SI_MAP_FLAG(0) = 0;
    }
    if (SI_MAP_FLAG(1) == 1) {
        SI_VAR(8) = 0xFFFFFFF6;
        SI_FLAG(1) = 1;
        SI_MAP_FLAG(1) = 0;
    }
    if (SI_MAP_FLAG(2) == 1) {
        PlaySoundAt(8357, 0, 0xFFFFFE63, 84, 38);
        SI_VAR(8) = 10;
        SI_FLAG(2) = 1;
        SI_MAP_FLAG(2) = 0;
    }
    if (SI_MAP_FLAG(3) == 1) {
        SI_VAR(8) = 0xFFFFFFF6;
        SI_FLAG(2) = 1;
        SI_MAP_FLAG(3) = 0;
    }
    if (SI_FLAG(1) == 1) {
        SI_VAR(9) += SI_VAR(8);
        if (SI_VAR(9) >= 90) {
            SI_VAR(9) = 90;
            SI_FLAG(1) = 0;
        }
        if (SI_VAR(9) <= 0) {
            SI_VAR(9) = 0;
            SI_FLAG(1) = 0;
            PlaySoundAt(8358, 0, 0xFFFFFE4D, 84, 37);
        }
    }
    if (SI_FLAG(2) == 1) {
        SI_VAR(10) += SI_VAR(8);
        if (SI_VAR(10) >= 90) {
            SI_VAR(10) = 90;
            SI_FLAG(2) = 0;
        }
        if (SI_VAR(10) <= 0) {
            SI_VAR(10) = 0;
            SI_FLAG(2) = 0;
            PlaySoundAt(8358, 0, 0xFFFFFE63, 84, 38);
        }
    }
    RotateModel(53, SI_VAR(9), 0, -1, 0);
    RotateModel(52, SI_VAR(9), 0, -1, 0);
    RotateModel(56, SI_VAR(10), 0, 1, 0);
    RotateModel(55, SI_VAR(10), 0, 1, 0);
    if (SI_MAP_FLAG(4) == 1) {
        if (SI_MAP_FLAG(5) == 0) {
            SI_VAR(0) = SI_MAP_VAR(0);
            SI_VAR(0) += 0xFFFFFE57;
            SI_VAR(1) += 75;
            SI_VAR(2) += 20;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        } else {
            SI_VAR(0) = SI_MAP_VAR(0);
            SI_VAR(0) += 0xFFFFFEB1;
            SI_VAR(1) += 75;
            SI_VAR(2) += 20;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
    }
    SI_MAP_VAR(0) += SI_MAP_VAR(1);
    SI_VAR(0) = SI_MAP_VAR(0);
    SI_VAR(0) /= 75;
    if (SI_VAR(0) != SI_VAR(14)) {
        SI_VAR(14) = SI_VAR(0);
        SI_VAR(13) = -1;
        SI_VAR(11) += 1;
        if (SI_VAR(11) == 10) {
            SI_VAR(11) = 0;
        }
    }
    SI_VAR(13) += 1;
    if (SI_VAR(13) > 1000) {
        SI_VAR(13) = 1000;
    }
    SI_VAR(12) += 1;
    if (SI_VAR(12) > 1000) {
        SI_VAR(12) = 0;
    }
    sleep 1;
    goto 0;
});

Script N(script_80244848) = SCRIPT({
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = SI_MAP_VAR(0);
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(0) += 0xFFFFFE57;
    } else {
        SI_VAR(0) += 0xFFFFFEB1;
    }
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(5) = SI_VAR(2);
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(3) += 0xFFFFFFC7;
    } else {
        SI_VAR(3) += 57;
    }
    SI_VAR(4) += 0xFFFFFFE1;
    SI_VAR(5) += 0;
    SetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_MAP_FLAG(5) == 0) {
        SI_VAR(0) += 0;
    } else {
        SI_VAR(0) += 0;
    }
    SI_VAR(1) += 0xFFFFFFFA;
    SI_VAR(2) += 0xFFFFFFD8;
    SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80244A24) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_MAP_FLAG(5) == 0) {
        if (SI_VAR(0) < 0xFFFFFBB4) {
            SI_VAR(0) = 0xFFFFFBB4;
        }
        SI_VAR(0) += 40;
        SI_VAR(1) = 30;
        SI_VAR(2) += 40;
    } else {
        if (SI_VAR(0) < 0xFFFFFBB4) {
            SI_VAR(0) = 0xFFFFFBB4;
        }
        SI_VAR(0) += 0xFFFFFFD8;
        SI_VAR(1) = 30;
        SI_VAR(2) += 40;
    }
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80244B5C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SetPlayerActionState(0);
    InterpPlayerYaw(90, 0);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    EnableNpcShadow(0xFFFFFFFC, 0);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, 75, 0x7FFFFE00);
    ModifyColliderFlags(0, 76, 0x7FFFFE00);
    ModifyColliderFlags(0, 80, 0x7FFFFE00);
    ModifyColliderFlags(0, 81, 0x7FFFFE00);
    ModifyColliderFlags(0, 52, 0x7FFFFE00);
    SI_VAR(9) = spawn N(script_80244A24);
    SI_VAR(14) = spawn N(script_80244848);
    SI_MAP_FLAG(4) = 1;
    SI_MAP_VAR(0) = 0xFFFFFB50;
    SI_MAP_VAR(1) = 0;
    SI_MAP_FLAG(5) = 0;
    sleep 60;
    spawn N(script_8024354C);
    SI_MAP_VAR(0) = 0xFFFFFB50;
    SI_MAP_VAR(1) = 0xFFFFFFF6;
    SI_MAP_FLAG(5) = 0;
0:
    SI_MAP_VAR(1) = 0;
    SI_MAP_VAR(1) -=f SI_MAP_VAR(0);
    SI_MAP_VAR(1) += 10.0;
    SI_MAP_VAR(1) /= 10.0;
    if (SI_MAP_VAR(1) > 10) {
        SI_MAP_VAR(1) = 10;
    }
    if (SI_MAP_VAR(0) >= 0) {
        goto 1;
    }
    sleep 1;
    goto 0;
1:
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = 0;
    PlaySound(509);
    kill SI_VAR(14);
    SI_MAP_FLAG(4) = 0;
    SetPlayerJumpscale(1.0);
    SI_VAR(0) = 0xFFFFFE57;
    SI_VAR(1) = 45;
    SI_VAR(2) = 20;
    SetPlayerActionState(3);
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    SetPlayerActionState(0);
    SetNpcFlagBits(0xFFFFFFFC, 320, 1);
    SetNpcSpeed(0xFFFFFFFC, 3.0);
    SetNpcAnimation(0xFFFFFFFC, 258);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) = 0xFFFFFE48;
    SI_VAR(1) = 45;
    SI_VAR(2) = 20;
    NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    kill SI_VAR(9);
    EnableNpcShadow(0xFFFFFFFC, 1);
    HidePlayerShadow(0);
    SI_MAP_FLAG(0) = 1;
    sleep 20;
    UseSettingsFrom(0, 0xFFFFFE5C, 20, 97);
    SetPanTarget(0, 0xFFFFFE5C, 20, 97);
    PanToTarget(0, 0, 1);
    ModifyColliderFlags(0, 75, 0x7FFFFE00);
    SetPlayerJumpscale(1.0);
    SetPlayerActionState(3);
    PlayerJump(0xFFFFFE5C, 20, 97, 15);
    SetPlayerActionState(0);
    SetNpcJumpscale(0xFFFFFFFC, 1.0);
    NpcJump0(0xFFFFFFFC, 0xFFFFFE64, 20, 76, 15);
    ModifyColliderFlags(1, 75, 0x7FFFFE00);
    WaitForCam(0, 1.0);
    DisablePlayerPhysics(0);
    EnablePartnerAI();
    spawn N(script_80243438);
    ModifyColliderFlags(1, 75, 0x7FFFFE00);
    ModifyColliderFlags(1, 76, 0x7FFFFE00);
    ModifyColliderFlags(1, 80, 0x7FFFFE00);
    ModifyColliderFlags(1, 81, 0x7FFFFE00);
    ModifyColliderFlags(1, 52, 0x7FFFFE00);
    SI_MAP_FLAG(1) = 1;
    sleep 20;
    SpeakToPlayer(0, 0x8C0504, 0x8C0501, 0, 0xD0000);
    SetNpcFlagBits(0xFFFFFFFC, 64, 0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

Script N(script_802451E8) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SI_MAP_VAR(0) = 0xFFFFFFA6;
    SI_MAP_VAR(1) = 0;
    SI_MAP_FLAG(5) = 1;
    SI_MAP_FLAG(2) = 1;
    sleep 20;
    ModifyColliderFlags(0, 75, 0x7FFFFE00);
    ModifyColliderFlags(0, 76, 0x7FFFFE00);
    ModifyColliderFlags(0, 80, 0x7FFFFE00);
    ModifyColliderFlags(0, 81, 0x7FFFFE00);
    ModifyColliderFlags(0, 52, 0x7FFFFE00);
    SetPlayerSpeed(3.0);
    PlayerMoveTo(0xFFFFFE57, 70, 0);
    SetPlayerJumpscale(1.0);
    SI_VAR(0) = 0xFFFFFE57;
    SI_VAR(1) = 45;
    SI_VAR(2) = 20;
    SetPlayerActionState(3);
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    SetPlayerActionState(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcFlagBits(0xFFFFFFFC, 64, 1);
    SetNpcSpeed(0xFFFFFFFC, 3.0);
    SetNpcAnimation(0xFFFFFFFC, 258);
    NpcMoveTo(0xFFFFFFFC, 0xFFFFFE57, 70, 0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    SetNpcJumpscale(0xFFFFFFFC, 1.0);
    SI_VAR(0) = 0xFFFFFE57;
    SI_VAR(1) = 45;
    SI_VAR(2) = 20;
    NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SI_MAP_FLAG(3) = 1;
    sleep 20;
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) += 0xFFFFFFCE;
    SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    EnableNpcShadow(0xFFFFFFFC, 0);
    HidePlayerShadow(1);
    SetPlayerJumpscale(1.0);
    SI_VAR(0) = 0xFFFFFE57;
    SI_VAR(1) = 75;
    SI_VAR(2) = 20;
    SetPlayerActionState(3);
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    SetPlayerActionState(0);
    InterpPlayerYaw(270, 0);
    SI_MAP_FLAG(4) = 1;
    SetNpcSpeed(0xFFFFFFFC, 3.0);
    SetNpcAnimation(0xFFFFFFFC, 258);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 57;
    SI_VAR(1) += 0xFFFFFFE1;
    SI_VAR(2) += 0;
    NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    spawn N(script_80244848);
    spawn N(script_8024354C);
    UseSettingsFrom(0, 0xFFFFFC18, 0, 0);
    SetCamDistance(0, 245.0);
    SetCamPosA(0, -538.5, -60.0);
    SetCamPitch(0, 0.0, -10.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    SI_VAR(0) -= 150;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(1, 0x8C0004, 0x8C0000, 5, 0xD0003);
    PlaySound(130);
    spawn {
        loop 1000 {
            SI_MAP_VAR(1) -= 0.03125;
            if (SI_MAP_VAR(1) < 0xFFFFFFF6) {
                SI_MAP_VAR(1) = -10.0;
            }
            sleep 1;
        }
    }
    sleep 90;
    PanToTarget(0, 0, 0);
    SI_VAR(9) = spawn N(script_80244A24);
    sleep 130;
    sleep 100;
    GotoMap(D_80248468_9269D8, 1);
    sleep 100;
});

Script N(script_8024587C) = SCRIPT({
    EnableModel(80, 0);
    SetModelFlags(80, 256, 1);
    CloneModel(80, 10000);
    CloneModel(80, 0x2711);
    CloneModel(80, 0x2712);
    CloneModel(80, 0x2713);
    CloneModel(80, 0x2714);
    CloneModel(80, 0x2715);
    CloneModel(80, 0x2716);
    CloneModel(80, 0x2717);
    CloneModel(80, 0x2718);
    CloneModel(80, 0x2719);
    SI_MAP_FLAG(5) = 1;
    SI_MAP_VAR(0) = 0xFFFFFFA6;
    spawn N(script_80243660);
    sleep 1;
    RotateGroup(85, 105, 0, 1, 0);
    RotateGroup(89, 105, 0, 1, 0);
    ModifyColliderFlags(0, 78, 0x7FFFFE00);
    ModifyColliderFlags(0, 79, 0x7FFFFE00);
    ModifyColliderFlags(1, 80, 0x7FFFFE00);
    ModifyColliderFlags(1, 81, 0x7FFFFE00);
});

s32 pad_005A58[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80245A60)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80245A68)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80245A78)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80245AB8)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80245AC4) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240834_91EDA4(SI_MAP_VAR(11));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240E28_91F398(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240E28_91F398(50, 50);
    }
    spawn {
        sleep 3;
        func_8024032C_91E89C(SI_MAP_VAR(11));
    }
    spawn {
        sleep 47;
        func_80240898_91EE08();
        func_80240F68_91F4D8();
        sleep 5;
        func_80240FB0_91F520();
        sleep 5;
        func_80240F68_91F4D8();
    }
    sleep 3;
    func_802408F0_91EE60(SI_MAP_VAR(11));
    sleep 30;
});

Script N(script_80245C28) = SCRIPT({
    if (SI_SAVE_FLAG(721) == 1) {
        return;
    }
    func_800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240FF8_91F568();
    if (SI_VAR(0) == 1) {
        return;
    }
    func_802D585C(1, 0x200000);
    func_802402F0_91E860();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240770_91ECE0(SI_MAP_VAR(11), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240410_91E980();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240800_91ED70(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        func_802D585C(0, 0x200000);
        func_8024030C_91E87C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802404BC_91EA2C();
    if (SI_VAR(0) == -1) {
        func_80240800_91ED70(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        func_802D585C(0, 0x200000);
        func_8024030C_91E87C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_8024070C_91EC7C(SI_VAR(11));
    } else {
        func_802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240800_91ED70(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        func_802D585C(0, 0x200000);
        func_8024030C_91E87C();
        return;
    }
    await N(script_80245AC4);
    func_80240358_91E8C8(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(721) = 1;
    func_80240800_91ED70(SI_VAR(9));
    func_80240738_91ECA8();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    func_802D585C(0, 0x200000);
    func_8024030C_91E87C();
});

Script N(script_802460A8) = SCRIPT({
    SI_SAVE_FLAG(720) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(720) == 0) {
        MakeEntity(D_802EA1E4, 0xFFFFFBF0, 160, 0xFFFFFE57, 0, 0x80000000);
        AssignScript(N(script_802460A8));
    }
    MakeEntity(D_802EA910, 0xFFFFFABA, 220, 0xFFFFFF2E, 0, 0x80000000);
    SI_MAP_VAR(11) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(721));
    AssignScript(N(script_80245C28));
    MakeEntity(D_802BCD9C, 0xFFFFFCF4, 0, 0xFFFFFF1D, 0xFFFFFFF1, 270, 0x80000000);
    MakeEntity(D_802BCD9C, 0xFFFFFB7B, 70, 0xFFFFFEE6, 40, 120, 0x80000000);
    MakeEntity(D_802BCD9C, 0xFFFFFC7B, 185, 0xFFFFFDD5, 0, 120, 0x80000000);
    MakeEntity(D_802E9A18, 0xFFFFFDF3, 80, 115, 0, 0x80000000);
    MakeEntity(D_802EA7E0, 0xFFFFFD26, 275, 0xFFFFFE02, 0, 0x80000000);
});

s32 pad_006238[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80246240) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x23,
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

s32 N(unk_8024626C)[] = {
    0x00000000,
};

s32 N(unk_80246270)[] = {
    0x00000000,
};

Script N(script_80246274) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80241210_91F780(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241434_91F9A4(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802463B8) = {
    SI_CMD(ScriptOpcode_CALL, func_8024146C_91F9DC, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80246274), 0x10, 0, D_80248480, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802413E0_91F950, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80246408) = SCRIPT({
0:
    sleep 1;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) < 215) {
        goto 0;
    }
    if (SI_VAR(0) < 0xFFFFFDA8) {
        goto 0;
    }
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0xD000E, 320, 150);
    spawn {
        SetPlayerAnimation(0x1002A);
        PlaySoundAtPlayer(611, 0);
        ShowEmote(0, 2, 0, 20, 0, 0, 0, 0, 0);
    }
    AdjustCam(0, 3.0, 30, 300, 15.0, -9.5);
    spawn {
        SetPlayerAnimation(0x80022);
        sleep 20;
        InterpPlayerYaw(270, 0);
        sleep 55;
        InterpPlayerYaw(90, 0);
    }
    sleep 20;
    SetNpcPos(4, 0xFFFFFE70, 215, 0xFFFFFE02);
    SetNpcFlagBits(4, 64, 1);
    spawn {
        SetNpcRotation(4, 0, 0, 15);
        InterpNpcYaw(4, 270, 0);
        sleep 20;
        SetNpcRotation(4, 0, 0, 0);
        InterpNpcYaw(4, 90, 0);
        sleep 5;
        SetNpcRotation(4, 0, 0, 0xFFFFFFF1);
        sleep 30;
        InterpNpcYaw(4, 270, 0);
        SetNpcRotation(4, 0, 0, 0);
    }
    SI_MAP_VAR(10) = 0xFFFFFE02;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        MakeLerp(0xFFFFFE02, SI_VAR(2), 60, 0);
        loop {
            UpdateLerp();
            SI_MAP_VAR(10) = SI_VAR(0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    SI_VAR(0) += 25;
    MakeLerp(0xFFFFFE70, SI_VAR(0), 55, 0);
    loop {
        UpdateLerp();
        SetNpcPos(4, SI_VAR(0), 220, SI_MAP_VAR(10));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SetPlayerAnimation(0x10017);
    SetNpcAnimation(4, 0x40004);
    spawn {
        ShakeCam(0, 0, 5, 2.0);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(4, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(0) += SI_VAR(3);
    SI_VAR(0) /= 2;
    SI_VAR(2) += SI_VAR(5);
    SI_VAR(2) /= 2;
    PlaySoundAt(225, 0, SI_VAR(0), 230, SI_VAR(2));
    PlayEffect(24, 3, SI_VAR(0), 230, SI_VAR(2), 0, -1, 0, 2, 0, 0, 0, 0, 0);
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = 230;
    SI_VAR(12) = SI_VAR(2);
    DisablePlayerPhysics(1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(2) > 0xFFFFFE84) {
        SI_VAR(2) = 0xFFFFFE84;
    }
    spawn {
        SetNpcJumpscale(4, 1.0);
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(3));
        SI_VAR(0) += 30;
        NpcJump1(4, SI_VAR(0), 215, SI_VAR(2), 15);
        SI_VAR(0) += 15;
        SetNpcAnimation(4, 0x40005);
        NpcJump1(4, SI_VAR(0), 215, SI_VAR(2), 8);
    }
    SetPlayerJumpscale(1.0);
    SI_VAR(0) -= 30;
    PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 15);
    SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PlaySoundAt(354, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    spawn {
        ShakeCam(0, 0, 5, 1.0);
    }
    SI_VAR(0) -= 15;
    SetPlayerFlagBits(0x200000, 1);
    InterpPlayerYaw(270, 0);
    sleep 1;
    SetPlayerAnimation(0x1000F);
    PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        ShakeCam(0, 0, 3, 1.0);
    }
    sleep 20;
    NpcFaceNpc(0xFFFFFFFC, 4, 0);
    SetPlayerAnimation(0x10030);
    sleep 10;
    SetNpcAnimation(4, 0x40001);
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    NpcJump1(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    SetPlayerFlagBits(0x200000, 0);
    InterpPlayerYaw(90, 0);
    SetPlayerAnimation(0x10002);
    sleep 30;
    AdjustCam(0, 3.0, 35, 255, 17.5, -11.5);
    SetNpcAnimation(4, 0x40002);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 60;
    SetNpcSpeed(4, 3.0);
    NpcMoveTo(4, SI_VAR(0), SI_VAR(2), 0);
    sleep 10;
    SetNpcAnimation(4, 0x40001);
    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD000F);
    sleep 10;
    GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0010);
    SetPlayerAnimation(0x80007);
    sleep 20;
    SetPlayerAnimation(0x10002);
    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0011);
    SI_SAVE_VAR(0) = 0xFFFFFFB9;
    ResetCam(0, 3.0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    BindNpcAI(4, N(script_Idle_802474F8));
});

s32 N(unk_80246E80)[] = {
    0x00000036, 0x00000054, 0x00000040, 0x00000000,
};

Script N(script_Interact_80246E90) = SCRIPT({
    SI_FLAG(0) = 0;
    if (SI_SAVE_VAR(122) == 2) {
        SI_VAR(0) = 0;
        if (SI_SAVE_FLAG(705) == 1) {
            SI_VAR(0) += 1;
        }
        if (SI_SAVE_FLAG(706) == 1) {
            SI_VAR(0) += 1;
        }
        if (SI_SAVE_FLAG(707) == 1) {
            SI_VAR(0) += 1;
        }
        if (SI_VAR(0) == 3) {
            GetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
            GetNpcPos(4, SI_VAR(4), SI_VAR(5), SI_VAR(6));
            if (SI_VAR(1) < SI_VAR(4)) {
                SI_VAR(4) += 0xFFFFFFE2;
            } else {
                SI_VAR(4) += 30;
            }
            PlayerMoveTo(SI_VAR(4), SI_VAR(6), 20);
            PlayerFaceNpc(4, 0);
            sleep 10;
            func_802CF56C(2);
            AdjustCam(0, 4.0, 0.0, 300.0, 17.5, -10.0);
        }
    }
    SI_VAR(0) = N(unk_80246E80);
    SI_VAR(1) = 4;
    await N(script_802463B8);
    match SI_VAR(0) {
        == 0 {
            match SI_SAVE_VAR(122) {
                == 0 {
                    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0012);
                }
                == 1 {
                    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0015);
                }
                == 2 {
                    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0017);
                }
                == 3 {
                    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD001C);
                    ShowChoice(0x1E000F);
                    if (SI_VAR(0) != 0) {
                        ContinueSpeech(4, 0x40006, 0x40001, 0, 0xD001B);
                        ResetCam(0, 4.0);
                        return;
                    }
                    SI_FLAG(0) = 1;
                }
            }
        }
        == -1 {
            SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0013);
        }
        else {
            RemoveKeyItemAt(SI_VAR(0));
            SI_SAVE_VAR(122) += 1;
            match SI_SAVE_VAR(122) {
                == 1 {
                    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0014);
                }
                == 2 {
                    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0016);
                }
                == 3 {
                    SpeakToPlayer(4, 0x40007, 0x40001, 0, 0xD0018);
                    SetPlayerAnimation(0x10028);
                    sleep 30;
                    SetPlayerAnimation(0x10002);
                    SpeakToPlayer(4, 0x40006, 0x40001, 0, 0xD0019);
                    ShowChoice(0x1E000F);
                    if (SI_VAR(0) != 0) {
                        ContinueSpeech(4, 0x40006, 0x40001, 0, 0xD001A);
                        ShowChoice(0x1E000F);
                        if (SI_VAR(0) != 0) {
                            ContinueSpeech(4, 0x40006, 0x40001, 0, 0xD001B);
                            ResetCam(0, 4.0);
                            return;
                        }
                    }
                    SI_FLAG(0) = 1;
                }
            }
        }
    }
    if (SI_FLAG(0) == 1) {
        DisablePartnerAI(0);
        ContinueSpeech(4, 0x40006, 0x40001, 0, 0xD001D);
        func_80241030_91F5A0(4, 4);
        SI_SAVE_VAR(0) = 0xFFFFFFBA;
        func_80241510_91FA80();
        spawn N(script_8024187C);
        sleep 15;
        ShowMessageAtScreenPos(0x1D018C, 160, 40);
        spawn N(script_802418B0);
        sleep 10;
        SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 0, 0xD001E);
        AddKeyItem(54);
        AddKeyItem(84);
        AddKeyItem(64);
    }
    ResetCam(0, 4.0);
    EnablePartnerAI();
    return;
});

Script N(script_Idle_802474F8) = SCRIPT({
    SetNpcSpeed(-1, 1.0);
    SI_VAR(0) += 0xFFFFFD62;
    SI_VAR(2) += 0xFFFFFE1B;
    loop {
        SetNpcAnimation(-1, 0x40002);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x40001);
        InterpNpcYaw(-1, 90, 7);
        sleep 10;
        InterpNpcYaw(-1, 270, 7);
        sleep 30;
        SI_VAR(0) += 120;
        SetNpcAnimation(-1, 0x40002);
        NpcMoveTo(-1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(-1, 0x40001);
        InterpNpcYaw(-1, 270, 7);
        sleep 10;
        InterpNpcYaw(-1, 90, 7);
        sleep 30;
        SI_VAR(0) += 0xFFFFFF88;
    }
});

Script N(script_Init_80247688) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80246E90));
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFB9 {
            SetNpcPos(4, 0, 0xFFFFFC18, 0);
        }
        < 0xFFFFFFBA {
            BindNpcIdle(-1, N(script_Idle_802474F8));
        }
        else {
            RemoveNpc(-1);
        }
    }
});

StaticNpc N(npcGroup_80247720)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80246240),
        .pos = { -610.0, 230.0, -485.0 },
        .flags = 0x00200D09,
        .init = N(script_Init_80247688),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00040001, 0x00040002, 0x00040003, 0x00040003, 0x00040001, 0x00040001, 0x00040000, 0x00040000, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001, 0x00040001,
        },
        .tattle = 0x1A0084,
    },
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80247910) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241620_91FB90, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241620_91FB90, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80247C70) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241620_91FB90, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80241620_91FB90, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241620_91FB90, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80241620_91FB90, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x10 },
};

s32 N(treeDropList_Bush1)[] = {
    0x00000001, 0x00000157, 0xFFFFFCB9, 0x0000000F, 0x00000209, 0x00000006, 0xF8405E45, 0xFAA2B58A,
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { nanf, 2.1e-44f, 7.3e-43f } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), N(treeDropList_Bush1), N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x11 },
};

s32 N(treeDropList_Bush2)[] = {
    0x00000001, 0x00000157, 0xFFFFFD4D, 0x00000016, 0x00000180, 0x00000006, 0xF8405E46, 0xFAA2B58B,
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, 5.38e-43f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), N(treeDropList_Bush2), N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x12 },
};

s32 N(treeDropList_Bush3)[] = {
    0x00000001, 0x00000157, 0xFFFFFC5C, 0x00000015, 0x00000195, 0x00000006, 0xF8405E47, 0xFAA2B58C,
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { nanf, 3e-44.0f, 5.68e-43f } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), N(treeDropList_Bush3), N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x13 },
};

s32 N(treeDropList_Bush4)[] = {
    0x00000001, 0x000000AB, 0xFFFFFCE0, 0x00000017, 0x00000118, 0x00000006, 0x00000000, 0xFAA2B58D,
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nanf, 3.2e-44f, 3.92e-43f } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), N(treeDropList_Bush4), N(treeEffectVectors_Bush4), 0x00000000,
};

Script N(script_80248394) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80247910) to TriggerFlag_WALL_INTERACT 95;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80247910) to TriggerFlag_WALL_INTERACT 96;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80247910) to TriggerFlag_WALL_INTERACT 97;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80247910) to TriggerFlag_WALL_INTERACT 98;
});

s32 pad_008454[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80248460_9269D0

// rodata: D_80248468_9269D8

// rodata: D_80248470_9269E0
