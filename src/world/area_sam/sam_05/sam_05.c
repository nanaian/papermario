#include "sam_05.h"

s32 unk_missing_80241D20[8];
Script N(script_80241DA0);
s32 pad_001DCC[1];
Script N(script_ExitWalk_80241DD0);
Script N(script_ExitWalk_80241E2C);
Script N(script_80241E88);
Script N(main);
s32 pad_0020AC[1];
Script N(script_MakeEntities);
s32 pad_00211C[1];
Script N(script_80242178);
Script N(script_NpcAI_80242264);
Script N(script_NpcAI_80242300);
s32 N(extraAnimationList_802423D4)[2];
s32 N(extraAnimationList_802423DC)[7];
Script N(script_NpcAI_80242428);
Script N(script_NpcAI_80242528);
Script N(script_802425A8);
s32 N(extraAnimationList_80242660)[2];
s32 N(extraAnimationList_80242668)[8];
Script N(script_NpcAI_80242688);
Script N(script_Defeat_802426F8);
s32 N(unk_80242770)[512];
s32 N(unk_80242F70)[8];
s32 N(unk_80242F90)[6];
Script N(script_80242FA8);
Script N(script_Init_80242FC4);
Script N(script_Init_80243094);
s32 N(extraAnimationList_802430CC)[9];
StaticNpc N(npcGroup_802430F0)[1];
s32 N(extraAnimationList_802432E0)[5];
StaticNpc N(npcGroup_802432F4)[16];
StaticNpc N(npcGroup_802451F4)[2];
StaticNpc N(npcGroup_802455D4)[2];
StaticNpc N(npcGroup_802459B4)[2];
NpcGroupList N(npcGroupList_80245D94);
NpcGroupList N(npcGroupList_80245DD0);
Script N(script_80245E00);
s32 N(intTable_8024655C)[65];
s32 N(vectorList_80246660)[21];
Script N(script_802466B4);
Script N(script_80246740);
Script N(script_802468C4);
Script N(script_80246A38);
Script N(script_80246CDC);
s32 pad_006F94[3];
s32 N(unk_80246FA0)[68];
s32 N(unk_802470B0)[32];
s32 N(unk_80247130)[12];
s32 N(unk_80247160)[16];
s32 N(unk_802471A0)[16];
s32 N(unk_802471E0)[52];
s32 N(unk_802472B0)[12];
s32 N(unk_802472E0)[64];
s32 N(unk_802473E0)[12];
s32 N(unk_80247410)[12];
s32 N(unk_80247440)[12];
s32 N(unk_80247470)[12];
s32 N(unk_802474A0)[12];
const char D_802474D0_D1FCB0[8]; // "sam_04"
const char D_802474D8_D1FCB8[8]; // "sam_06"
s32 pad_0076A8[2];

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80240208_D189E8

// text: func_802403BC_D18B9C

// text: func_8024061C_D18DFC

// text: func_802408D0_D190B0

// text: func_8024093C_D1911C

// text: func_80240A38_D19218

// text: func_80241478_D19C58

// text: func_80241508_D19CE8

// text: func_80241608_D19DE8

// text: func_80241668_D19E48

// text: func_80241754_D19F34

// text: func_802419A4_D1A184

s32 unk_missing_80241D20[] = {
    0x3C028007, 0x8C42419C, 0x90420012, 0x000211C2, 0x03E00008, 0x00021040, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -730.0f, 0.0f, -45.0f, 90.0f },
    { 735.0f, 95.0f, -50.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19012F,
};

Script N(script_80241DA0) = SCRIPT({
    SetMusicTrack(0, 58, 0, 8);
});

s32 pad_001DCC[] = {
    0x00000000,
};

Script N(script_ExitWalk_80241DD0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802474D0_D1FCB0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241E2C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802474D8_D1FCB8, 0);
    sleep 100;
});

Script N(script_80241E88) = SCRIPT({
    bind N(script_ExitWalk_80241DD0) to 0x80000 20;
    bind N(script_ExitWalk_80241E2C) to 0x80000 25;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 41;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    if (SI_SAVE_VAR(0) < 69) {
        MakeNpcs(0, N(npcGroupList_80245D94));
    } else {
        MakeNpcs(0, N(npcGroupList_80245DD0));
    }
    await N(script_MakeEntities);
    await N(script_80241DA0);
    PlayEffect(69, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    ModifyColliderFlags(3, 0, 8);
    ModifyColliderFlags(3, 9, 8);
    ModifyColliderFlags(3, 1, 8);
    ModifyColliderFlags(3, 2, 8);
    ModifyColliderFlags(3, 25, 8);
    ModifyColliderFlags(3, 20, 8);
    SI_VAR(0) = N(script_80241E88);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_0020AC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(59, 100, 0, 0xFFFFFF9C, 17, SI_SAVE_FLAG(1449));
    MakeEntity(0x802EA588, 490, 140, 0xFFFFFFB5, 0, 146, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1450));
});

s32 pad_00211C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80242120) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x96,
    .radius = 0x96,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024214C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x14,
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

Script N(script_80242178) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80242234) = {
    .moveSpeed = 0.5f,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 100.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0xA,
    .chaseSpeed = 3.5f,
    .unk_1C = 0xB4,
    .unk_20 = 0x14,
    .chaseRadius = 150.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80242264) = SCRIPT({
    SetSelfVar(0, 0);
    SetSelfVar(1, 5);
    SetSelfVar(2, 13);
    SetSelfVar(3, 30);
    func_8024061C_D18DFC(N(aISettings_80242234));
});

NpcSettings N(npcSettings_802422D4) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x30,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242264),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

Script N(script_NpcAI_80242300) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 6);
    SetSelfVar(1, 28);
    SetSelfVar(2, 55);
    SetSelfVar(3, 32);
    SetSelfVar(4, 10);
    SetSelfVar(15, 0);
    func_802403BC_D18B9C();
});

NpcSettings N(npcSettings_802423A8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242300),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80242178),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0x8,
};

s32 N(extraAnimationList_802423D4)[] = {
    0x00520000, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802423DC)[] = {
    0x00520000, 0x00520001, 0x0052000B, 0x00520004, 0x00520002, 0x00520003, 0xFFFFFFFF,
};

NpcAISettings N(aISettings_802423F8) = {
    .moveSpeed = 0.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80242428) = SCRIPT({
    SetSelfVar(7, 1);
    SetSelfVar(8, 10);
    SetSelfVar(9, 9);
    SetSelfVar(10, 12);
    SetSelfVar(11, 7);
    SetSelfVar(12, 30);
    SetSelfVar(13, 15);
    SetSelfVar(14, 18);
    SetSelfVar(15, 15);
    func_80241754_D19F34(N(aISettings_802423F8));
});

NpcSettings N(npcSettings_802424FC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x32,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242428),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

Script N(script_NpcAI_80242528) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 14);
    SetSelfVar(1, 28);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_802403BC_D18B9C();
});

Script N(script_802425A8) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

NpcSettings N(npcSettings_80242634) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80242528),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80242178),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x16,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80242660)[] = {
    0x00360100, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80242668)[] = {
    0x00360100, 0x00360101, 0x0036010E, 0x00360105, 0x00360106, 0x00360118, 0x00360117, 0xFFFFFFFF,
};

Script N(script_NpcAI_80242688) = SCRIPT({
0:
    GetSelfVar(0, SI_VAR(0));
    sleep 1;
    if (SI_VAR(0) == 0) {
        goto 0;
    }
    StartBossBattle(3);
});

Script N(script_Defeat_802426F8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetNpcAux(-1, N(script_80242FA8));
            await N(script_80246CDC);
        }
        == 2 {
        }
    }
    ClearDefeatedEnemies();
});

s32 N(unk_80242770)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000011, 0x00000000, 0x00000000, 0x00000000,
    0x00000133, 0x10000000, 0x00000000, 0x00000000, 0x00000133, 0x10000000, 0x00000000, 0x14100000,
    0x00000011, 0x00000000, 0x00000001, 0x55510000, 0x00000000, 0x00000000, 0x00000001, 0x25210000,
    0x00000000, 0x00000000, 0x00000001, 0x42410000, 0x00000000, 0x0000000B, 0xEB000000, 0x11100000,
    0x00000000, 0x000000BF, 0xFFB00000, 0x00000000, 0x00000000, 0x000000BC, 0xFCB00000, 0x00000000,
    0x06A00000, 0x000000BF, 0xCFB00000, 0x00000000, 0x6AAA6000, 0x0000000B, 0xBB000000, 0x00000000,
    0x67A76000, 0x00000000, 0x00000000, 0x00000000, 0x6A7A6000, 0x00000000, 0x00000000, 0x06660000,
    0x06660000, 0x00000000, 0x00000000, 0x66966000, 0x00000000, 0x00000000, 0x00000006, 0x67A76600,
    0x00000000, 0x00001100, 0x00000007, 0xAAAAA700, 0x00000000, 0x00015510, 0x00000006, 0x79A97600,
    0x00000000, 0x00015510, 0x00000006, 0x8A8A8600, 0x00000000, 0x00001100, 0x00000006, 0x98689600,
    0x00000000, 0x00000000, 0x00000000, 0x66666000, 0x0000BEB0, 0x00000000, 0x00000000, 0x00000000,
    0x000BEFEB, 0x00000000, 0x00000000, 0x00000000, 0x000BCECB, 0x00000000, 0x00000000, 0x00000000,
    0x000BECEB, 0x00000000, 0x00000000, 0x00000000, 0x0000BBB0, 0x00000000, 0x00000000, 0x00000066,
    0x60000000, 0x00000000, 0x12100000, 0x000006AA, 0x60000000, 0x00000001, 0x15110000, 0x000006AA,
    0x00000000, 0x00000002, 0x55520000, 0x00000066, 0x00000000, 0x00000001, 0x25210000, 0x00000000,
    0x00000000, 0x00000002, 0x51520000, 0x00000000, 0x00000000, 0x00000000, 0x11100000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80242F70)[] = {
    0x11142A55, 0x43D75517, 0x6E9987D9, 0x4119715D, 0x9963C9A7, 0xF9AB1A1D, 0x22E52BEF, 0x34B73DBF,
};

s32 N(unk_80242F90)[] = {
    N(unk_80242770), N(unk_80242F70), 0x00200020, 0xFFFFFFFE, 0x00000000, N(unk_80246FA0),
};

Script N(script_80242FA8) = SCRIPT({
    func_802419A4_D1A184();
});

Script N(script_Init_80242FC4) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    SetNpcVar(6, 3, 255);
    BindNpcAux(-1, N(script_80242FA8));
    if (SI_SAVE_VAR(0) >= 69) {
        RemoveNpc(-1);
    } else {
        spawn N(script_80245E00);
        BindNpcDefeat(-1, N(script_Defeat_802426F8));
        BindNpcAI(-1, N(script_NpcAI_80242688));
    }
});

Script N(script_Init_80243094) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x20000C);
});

s32 N(extraAnimationList_802430CC)[] = {
    0x007E0000, 0x007E0001, 0x007E0008, 0x007E0009, 0x007E000B, 0x007E000C, 0x007E000D, 0x007E000E,
    0xFFFFFFFF,
};

StaticNpc N(npcGroup_802430F0)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_80242120),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00040F01,
        .init = N(script_Init_80242FC4),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001, 0x007E0001,
        },
        .extraAnimations = N(extraAnimationList_802430CC),
    },
};

s32 N(extraAnimationList_802432E0)[] = {
    0x00200001, 0x00200005, 0x00200008, 0x0020000C, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802432F4)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 8,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 9,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 10,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 11,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 12,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 13,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 14,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 15,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 16,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 17,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 18,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 19,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 20,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 21,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
    {
        .id = 22,
        .settings = &N(npcSettings_8024214C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80243094),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00200001, 0x00200005, 0x00200008, 0x00200008, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001, 0x00200001,
        },
        .extraAnimations = N(extraAnimationList_802432E0),
    },
};

StaticNpc N(npcGroup_802451F4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802422D4),
        .pos = { -75.0, 0.0, 0.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_PEBBLE, 2 }, { ItemId_SUPER_SHROOM, 8 } },
        .movement = { 0xFFFFFFB5, 0x00000000, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFB5, 0x00000000, 0x00000000, 0x000000C8 },
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
        .extraAnimations = N(extraAnimationList_802423DC),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802423A8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00520001, 0x00520002, 0x00520003, 0x00520003, 0x00520001, 0x00520001, 0x0052000B, 0x0052000B, 0x00520004, 0x00520004, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001, 0x00520001,
        },
        .extraAnimations = N(extraAnimationList_802423D4),
    },
};

StaticNpc N(npcGroup_802455D4)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802424FC),
        .pos = { 100.0, 0.0, 50.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0x00000064, 0x00000000, 0x00000032, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000064, 0x00000000, 0x00000032, 0x000000C8 },
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
        .extraAnimations = N(extraAnimationList_80242668),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80242634),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
        .extraAnimations = N(extraAnimationList_80242660),
    },
};

StaticNpc N(npcGroup_802459B4)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802424FC),
        .pos = { -400.0, 0.0, 0.0 },
        .flags = 0x00000400,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_FIRE_FLOWER, 10 } },
        .movement = { 0xFFFFFE70, 0x00000000, 0x00000000, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFE70, 0x00000000, 0x00000000, 0x000000C8 },
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
        .extraAnimations = N(extraAnimationList_80242668),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80242634),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360101, 0x00360102, 0x00360103, 0x00360103, 0x00360101, 0x00360101, 0x0036010E, 0x0036010E, 0x00360118, 0x00360117, 0x00360105, 0x00360106, 0x00360112, 0x00360113, 0x00360114, 0x00360101,
        },
        .extraAnimations = N(extraAnimationList_80242660),
    },
};

NpcGroupList N(npcGroupList_80245D94) = {
    NPC_GROUP(N(npcGroup_802430F0), 0x1E000006),
    NPC_GROUP(N(npcGroup_802432F4), 0x1E000006),
    NPC_GROUP(N(npcGroup_802455D4), 0x1D060006),
    NPC_GROUP(N(npcGroup_802459B4), 0x1D0A0006),
    {},
};

NpcGroupList N(npcGroupList_80245DD0) = {
    NPC_GROUP(N(npcGroup_802455D4), 0x1D060006),
    NPC_GROUP(N(npcGroup_802459B4), 0x1D0A0006),
    NPC_GROUP(N(npcGroup_802451F4), 0x1D010006),
    {},
};

Script N(script_80245E00) = SCRIPT({
    SI_FLAG(0) = 0;
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 450) {
        goto 0;
    }
    DisablePlayerInput(1);
    0x802D2B6C();
    SetMusicTrack(0, 92, 0, 8);
    ShowMessageAtScreenPos(0x1200E0, 160, 40);
    SetNpcAnimation(-1, 0x7E0001);
    SetNpcPos(6, 635, 85, 0);
    NpcMoveTo(6, 615, 0, 10);
2:
    GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 15.0, -15.0);
    SetCamSpeed(0, 2.0);
    SI_VAR(0) += 0xFFFFFFE7;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    if (SI_FLAG(0) == 0) {
        SetNpcPos(6, 615, 85, 0);
        sleep 1;
        SI_FLAG(0) = 1;
    }
    SpeakToPlayer(6, 0x7E0009, 0x7E0001, 256, 50, 100, 0x1200E1);
    SetPlayerPos(495, 80, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(6, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(0) +=f SI_VAR(3);
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(0) /= 2.0;
    SI_VAR(1) /= 2.0;
    SI_VAR(2) /= 2.0;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 425.0);
    SetCamPitch(0, 15.0, -9.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 5;
    SpeakToPlayer(6, 0x7E0009, 0x7E0001, 256, 0, 100, 0x1200E2);
    ShowChoice(0x1E0015);
    if (SI_VAR(0) == 0) {
        ContinueSpeech(6, 0x7E000B, 0x7E000B, 256, 0, 100, 0x1200E3);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 450.0);
        SetCamPitch(0, 15.0, -5.0);
        SetCamSpeed(0, 2.0);
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcAnimation(-1, 0x7E0001);
        spawn N(script_80241DA0);
        DisablePlayerInput(0);
    4:
        GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
        if (SI_VAR(3) > SI_VAR(0)) {
            DisablePlayerInput(1);
            0x802D2B6C();
            SetMusicTrack(0, 92, 0, 8);
            goto 2;
        }
        if (SI_VAR(3) > 420) {
            goto 4;
        }
        SetNpcPos(6, 0, 0xFFFFFC18, 0);
        SI_FLAG(0) = 0;
        goto 0;
    } else {
        CloseMessage();
        SetNpcAnimation(-1, 0x7E000E);
        GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFDD;
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 300.0);
        SetCamPitch(0, 15.0, -12.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SpeakToPlayer(6, 0x7E000E, 0x7E000E, 256, 0, 200, 0x1200E4);
        SetNpcVar(6, 0, 1);
    }
});

s32 N(intTable_8024655C)[] = {
    0x00000007, 0x00000267, 0x00000081, 0x00000000, 0x00000008, 0x00000264, 0x0000009D, 0x00000002,
    0x00000009, 0x0000025E, 0x00000092, 0x00000004, 0x0000000A, 0x00000289, 0x0000008C, 0x00000006,
    0x0000000B, 0x00000271, 0x00000091, 0x00000000, 0x0000000C, 0x00000244, 0x00000083, 0x00000004,
    0x0000000D, 0x00000276, 0x00000058, 0x00000006, 0x0000000E, 0x0000027B, 0x00000086, 0x00000000,
    0x0000000F, 0x00000271, 0x00000079, 0x00000002, 0x00000010, 0x0000024E, 0x0000007A, 0x00000004,
    0x00000011, 0x00000253, 0x0000006C, 0x00000006, 0x00000012, 0x00000258, 0x00000084, 0x00000000,
    0x00000013, 0x0000025C, 0x00000063, 0x00000002, 0x00000014, 0x00000262, 0x00000072, 0x00000004,
    0x00000015, 0x0000027B, 0x00000070, 0x00000006, 0x00000016, 0x0000026C, 0x00000060, 0x00000000,
    0xFFFFFFFF,
};

s32 N(vectorList_80246660)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x42200000, 0x41200000, 0x00000000, 0x42480000, 0x41700000,
    0x00000000, 0x428C0000, 0x41C80000, 0x00000000, 0x42A00000, 0x41F00000, 0x00000000, 0x42C80000,
    0x420C0000, 0x00000000, 0x43480000, 0x42340000, 0x00000000,
};

Script N(script_802466B4) = SCRIPT({
    RandInt(4, SI_VAR(0));
    sleep SI_VAR(0);
    loop {
        InterpNpcYaw(SI_VAR(10), 90, 0);
        sleep 7;
        InterpNpcYaw(SI_VAR(10), 270, 0);
        sleep 7;
    }
});

Script N(script_80246740) = SCRIPT({
    if (SI_VAR(10) == 7) {
        SI_VAR(11) += 40;
    }
    SI_VAR(9) = spawn N(script_802466B4);
    SI_VAR(11) += 20;
    sleep SI_VAR(11);
    kill SI_VAR(9);
    PlaySoundAtNpc(SI_VAR(10), 318, 0);
    GetNpcPos(SI_VAR(10), SI_VAR(7), SI_VAR(8), SI_VAR(9));
    LoadPath(60, N(vectorList_80246660), 7, 0);
0:
    GetNextPathPos();
    SI_VAR(1) += SI_VAR(7);
    SI_VAR(2) += SI_VAR(8);
    SI_VAR(3) += SI_VAR(9);
    SetNpcPos(SI_VAR(10), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    SetNpcPos(SI_VAR(10), 0, 0xFFFFFC18, 0);
    EnableNpcShadow(SI_VAR(0), 0);
});

Script N(script_802468C4) = SCRIPT({
    loop 20 {
        RandInt(80, SI_VAR(0));
        RandInt(80, SI_VAR(1));
        SI_VAR(0) += 575;
        SI_VAR(1) += 89;
        SI_VAR(2) += 0;
        PlayEffect(17, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 7, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 2;
        RandInt(80, SI_VAR(0));
        RandInt(80, SI_VAR(1));
        SI_VAR(0) += 575;
        SI_VAR(1) += 89;
        SI_VAR(2) += 0;
        PlayEffect(17, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 7, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 3;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80246A38) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024655C)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), -1),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, SetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_CALL, PlaySoundAtNpc, 6, 317, 0),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 6, 615, 0xFFFFFFFB, 10),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802468C4)),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 220, 0, 90, 10),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, SetNpcVar, 6, 3, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(2), 255),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(2), SI_VAR(0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024655C)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(10), SI_VAR(9), SI_VAR(9), SI_VAR(9)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), -1),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, 0x802CFD30, SI_VAR(10), 7, SI_VAR(2), 0, 0, 0),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 6, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_8024655C)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(11), 0),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(10), SI_VAR(9), SI_VAR(9), SI_VAR(9)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), -1),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SPAWN, N(script_80246740)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(11), 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 100),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80246CDC) = SCRIPT({
    ClearDefeatedEnemies();
    SetNpcFlagBits(6, 512, 0);
    SetNpcPos(6, 615, 87, 0xFFFFFFFC);
    SetNpcAnimation(-1, 0x7E000C);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(6, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    SI_VAR(0) +=f SI_VAR(3);
    SI_VAR(1) +=f SI_VAR(4);
    SI_VAR(2) +=f SI_VAR(5);
    SI_VAR(0) /= 2.0;
    SI_VAR(1) /= 2.0;
    SI_VAR(2) /= 2.0;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 375.0);
    SetCamPitch(0, 15.0, -9.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(6, 0x7E000C, 0x7E000C, 256, 170, 150, 0x1200E8);
    await N(script_80246A38);
    SI_SAVE_VAR(0) = 69;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 450.0);
    SetCamPitch(0, 15.0, -5.0);
    SetCamSpeed(0, 2.0);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    spawn N(script_80241DA0);
    DisablePlayerInput(0);
});

s32 pad_006F94[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80246FA0)[] = {
    0x01020040, N(unk_802470B0), 0x06000204, 0x00000406, 0x06080A0C, 0x00080C0E, 0x06101214, 0x00101416,
    0x06181A1C, 0x00181C1E, 0x06202224, 0x00202426, 0x06282A2C, 0x00282C2E, 0x06303234, 0x00303436,
    0x06383A3C, 0x00383C3E, 0x01020040, N(unk_802472B0), 0x06001012, 0x00001214, 0x06021618, 0x0002181A,
    0x06041C1E, 0x00041E20, 0x06062224, 0x00062426, 0x0608282A, 0x00082A2C, 0x060A2E30, 0x000A3032,
    0x060C3436, 0x000C3638, 0x060E3A3C, 0x000E3C3E, 0x01001002, N(unk_80247130), 0x01002006, N(unk_80247160),
    0x0100200A, N(unk_802471A0), 0x0100100C, N(unk_802471E0), 0x01005016, N(unk_802472E0), 0x01001018, N(unk_802473E0),
    0x0100101A, N(unk_80247410), 0x0100101C, N(unk_80247440), 0x0100101E, N(unk_80247470), 0x01003024, N(unk_802474A0),
    0x06022000, 0x00062004, 0x060A2008, 0x0016200C, 0x0618220E, 0x001A2010, 0x061C2012, 0x001E2014,
    0xDF000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802470B0)[] = {
    0xFFD30045, 0x00000000, 0x0E66FA09, 0xFFFFFFFF, 0xFFCE0047, 0x00000000, 0x1000F95F, 0xFFFFFF00,
    0xFFCE001D, 0x00000000, 0x100006A1, 0xFFFFFF00, 0xFFD3001F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
    0xFFD3001F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF, 0xFFCE001D, 0x00000000, 0x1000F95F, 0xFFFFFF00,
    0xFFEB0000, 0x00000000, 0x100006A1, 0xFFFFFF00, 0xFFED0005, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_80247130)[] = {
    0xFFFB0030, 0x00000000, 0x019AFF56, 0xFFFFFF1E, 0xFFD3001F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0xFFED0005, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_80247160)[] = {
    0xFFFE002D, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0xFFFB0034, 0x00000000, 0x019AFF56, 0xFFFFFF1E,
    0xFFD30045, 0x00000000, 0x0E66FA09, 0xFFFFFFFF, 0xFFD3001F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_802471A0)[] = {
    0xFFFB0030, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0xFFFE0037, 0x00000000, 0x019AFF56, 0xFFFFFF1E,
    0xFFED005F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF, 0xFFD30045, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_802471E0)[] = {
    0xFFFB0034, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0xFFED005F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0xFFEB0064, 0x00000000, 0x1000F95F, 0xFFFFFF00, 0xFFCE0047, 0x00000000, 0x100006A1, 0xFFFFFF00,
    0xFFD30045, 0x00000000, 0x0E6605F7, 0xFFFFFFFF, 0x00130005, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0x00150000, 0x00000000, 0x1000F95F, 0xFFFFFF00, 0x0032001D, 0x00000000, 0x100006A1, 0xFFFFFF00,
    0x002D001F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF, 0xFFED0005, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0xFFEB0000, 0x00000000, 0x1000F95F, 0xFFFFFF00, 0x00150000, 0x00000000, 0x100006A1, 0xFFFFFF00,
    0x00130005, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_802472B0)[] = {
    0x0013005F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF, 0x002D0045, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0x002D001F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
};

s32 N(unk_802472E0)[] = {
    0x00020037, 0x00000000, 0x019AFF56, 0xFFFFFF1E, 0x00050030, 0x00000000, 0x019AFF56, 0xFFFFFF1E,
    0xFFFE002D, 0x00000000, 0x019AFF56, 0xFFFFFF1E, 0x0002002D, 0x00000000, 0x019AFF56, 0xFFFFFF1E,
    0x00050034, 0x00000000, 0x019AFF56, 0xFFFFFF1E, 0x00150064, 0x00000000, 0x1000F95F, 0xFFFFFF00,
    0xFFEB0064, 0x00000000, 0x100006A1, 0xFFFFFF00, 0xFFED005F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
    0x00320047, 0x00000000, 0x1000F95F, 0xFFFFFF00, 0x00150064, 0x00000000, 0x100006A1, 0xFFFFFF00,
    0x0013005F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF, 0x0032001D, 0x00000000, 0x1000F95F, 0xFFFFFF00,
    0x00320047, 0x00000000, 0x100006A1, 0xFFFFFF00, 0x002D0045, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
    0x0013005F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF, 0xFFED005F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_802473E0)[] = {
    0xFFFE0037, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0x002D001F, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0x002D0045, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_80247410)[] = {
    0x00050034, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0xFFED0005, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0x00130005, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_80247440)[] = {
    0x0002002D, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0x00130005, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0x002D001F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_80247470)[] = {
    0x00050030, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0x002D0045, 0x00000000, 0x0E66FA09, 0xFFFFFFFF,
    0x0013005F, 0x00000000, 0x0E6605F7, 0xFFFFFFFF,
};

s32 N(unk_802474A0)[] = {
    0x00020037, 0x00000000, 0x019A00AA, 0xFFFFFF1E, 0x00000032, 0x00000000, 0x00000000, 0xFFFFFF00,
    0x00000032, 0x00000000, 0x00000000, 0xFFFFFF00,
};

// rodata: D_802474D0_D1FCB0

// rodata: D_802474D8_D1FCB8

// rodata: D_802474E0_D1FCC0

// rodata: jtbl_802474E8_D1FCC8

// rodata: D_80247678_D1FE58

// rodata: D_80247680_D1FE60

// rodata: D_80247688_D1FE68

// rodata: D_80247690_D1FE70

// rodata: D_80247698_D1FE78

// rodata: D_802476A0_D1FE80

s32 pad_0076A8[] = {
    0x00000000, 0x00000000,
};
