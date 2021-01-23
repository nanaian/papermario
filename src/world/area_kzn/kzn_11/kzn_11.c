#include "kzn_11.h"

s32 pad_00030C[1];
s32 pad_000458[2];
s32 pad_00265C[1];
Script N(script_UpdateTexturePan_802426C0);
Script N(script_8024275C);
Script N(script_80242878);
Script N(script_ExitWalk_80242994);
Script N(script_ExitWalk_802429F0);
Script N(script_80242A4C);
Script N(script_80242A94);
s32 N(lavaResetList_80242D30)[20];
Script N(main);
s32 pad_002FD4[3];
Script N(script_80242FE0);
Script N(script_80243354);
s32 pad_0036C8[2];
f32 N(floatTable_802436D0)[6];
Script N(script_NpcAI_80243718);
s32 N(intTable_802437B4)[11];
Script N(script_802437E0);
s32 N(aISettings_80243B74)[7];
s32 N(aISettings_80243B90)[7];
s32 N(aISettings_80243BAC)[7];
Script N(script_NpcAI_80243BC8);
Script N(script_NpcAI_80243BE8);
Script N(script_NpcAI_80243C08);
s32 N(unk_80243CAC)[11];
s32 N(npcGroup_80243CD8)[314];
s32 unk_missing_802441C0[182];
s32 N(npcGroup_80244498)[314];
s32 unk_missing_80244980[182];
s32 N(npcGroup_80244C58)[314];
s32 unk_missing_80245140[182];
StaticNpc N(npcGroup_80245418)[1];
StaticNpc N(npcGroup_80245608)[1];
NpcGroupList N(npcGroupList_802457F8);
const char D_80245840_C859E0[8]; // "kzn_10"
const char D_80245848_C859E8[8]; // "kzn_17"
s32 pad_0058A4[1];
s32 pad_005904[3];

// text: func_80240000_C801A0

// text: func_80240124_C802C4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_C804B0

// text: func_80240408_C805A8

// text: func_80240434_C805D4

s32 pad_000458[] = {
    0x00000000, 0x00000000,
};

// text: func_80240460_C80600

// text: func_80240610_C807B0

// text: N(UnkNpcAIFunc1)

// text: func_80240CF8_C80E98

// text: N(UnkNpcAIFunc2)

// text: func_802410B4_C81254

// text: func_80241120_C812C0

// text: N(UnkNpcAIFunc3)

// text: func_802412B8_C81458

// text: func_80241648_C817E8

// text: func_8024176C_C8190C

// text: func_80241958_C81AF8

// text: func_80241A88_C81C28

// text: func_80241D08_C81EA8

// text: func_80241D64_C81F04

// text: func_80241F4C_C820EC

// text: func_80242540_C826E0

s32 pad_00265C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -810.0f, 20.0f, 0.0f, 90.0f },
    { 810.0f, 20.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19010D,
};

Script N(script_UpdateTexturePan_802426C0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C801A0();
                    return;
                }
            }
        }
    }
    func_80240124_C802C4();
});

Script N(script_8024275C) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_802426C0);
    }
});

Script N(script_80242878) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_802426C0);
    }
});

Script N(script_ExitWalk_80242994) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80245840_C859E0, 1);
    sleep 100;
});

Script N(script_ExitWalk_802429F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80245848_C859E8, 0);
    sleep 100;
});

Script N(script_80242A4C) = SCRIPT({
    bind N(script_ExitWalk_80242994) to 0x80000 9;
    bind N(script_ExitWalk_802429F0) to 0x80000 19;
});

Script N(script_80242A94) = SCRIPT({
    group 0;
    SetTexPanner(0, 2);
    EnableTexPanning(38, 1);
    EnableTexPanning(39, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 200;
        SI_VAR(2) = 0;
        SI_VAR(3) = 400;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 0;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802426C0);
    }
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 300;
        SI_VAR(2) = 0xFFFFFE0C;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802426C0);
    }
    spawn {
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(13, 0, SI_VAR(0), 0);
            SI_VAR(0) += 0x8000;
            sleep 6;
        }
    }
});

s32 N(lavaResetList_80242D30)[] = {
    0x00000008, 0xC43E0000, 0x41A00000, 0x00000000, 0x0000002F, 0xC3C80000, 0x41A00000, 0x00000000,
    0x00000030, 0x43660000, 0x41A00000, 0x00000000, 0x00000012, 0x44458000, 0x41A00000, 0x00000000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA000A);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802457F8));
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    SI_VAR(0) = N(script_80242A4C);
    spawn EnterWalk;
    sleep 1;
    ModifyColliderFlags(3, 32, 3);
    ModifyColliderFlags(3, 33, 3);
    ModifyColliderFlags(3, 34, 3);
    ModifyColliderFlags(3, 35, 3);
    ModifyColliderFlags(3, 36, 3);
    ModifyColliderFlags(3, 37, 3);
    ModifyColliderFlags(3, 38, 3);
    ModifyColliderFlags(3, 39, 3);
    ModifyColliderFlags(3, 62, 3);
    ModifyColliderFlags(3, 63, 3);
    spawn {
        ResetFromLava(N(lavaResetList_80242D30));
    }
    spawn N(script_80242A94);
    SI_VAR(0) = 41;
    spawn N(script_8024275C);
    SI_VAR(0) = 42;
    spawn N(script_80242878);
    spawn N(script_80242FE0);
    spawn N(script_80243354);
});

s32 pad_002FD4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80242FE0) = SCRIPT({
    group 11;
    ParentColliderToModel(26, 25);
    ParentColliderToModel(25, 23);
    ParentColliderToModel(24, 24);
    SI_VAR(0) = 60;
    SI_VAR(3) = 0;
    loop {
        MakeLerp(SI_VAR(0), 0xFFFFFFC4, 120, 0);
        loop {
            UpdateLerp();
            TranslateGroup(26, SI_VAR(0), 0, 0);
            UpdateColliderTransform(26);
            UpdateColliderTransform(25);
            UpdateColliderTransform(24);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_80240310_C804B0(SI_VAR(4), 26, 25);
            if (SI_VAR(0) < 0xFFFFFFD3) {
                func_80240434_C805D4();
                if (SI_VAR(9) == 1) {
                    func_80240408_C805A8(SI_VAR(2));
                    if (SI_VAR(2) == 62) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
        MakeLerp(SI_VAR(0), 60, 120, 0);
        loop {
            UpdateLerp();
            TranslateGroup(26, SI_VAR(0), 0, 0);
            UpdateColliderTransform(26);
            UpdateColliderTransform(25);
            UpdateColliderTransform(24);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_80240310_C804B0(SI_VAR(4), 26, 25);
            if (SI_VAR(0) > 45) {
                func_80240434_C805D4();
                if (SI_VAR(9) == 1) {
                    func_80240408_C805A8(SI_VAR(2));
                    if (SI_VAR(2) == 63) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
    }
});

Script N(script_80243354) = SCRIPT({
    group 11;
    ParentColliderToModel(30, 32);
    ParentColliderToModel(29, 30);
    ParentColliderToModel(28, 31);
    SI_VAR(0) = 135;
    SI_VAR(3) = 0;
    loop {
        MakeLerp(SI_VAR(0), 0xFFFFFFC4, 195, 0);
        loop {
            UpdateLerp();
            TranslateGroup(33, SI_VAR(0), 0, 0);
            UpdateColliderTransform(30);
            UpdateColliderTransform(29);
            UpdateColliderTransform(28);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_80240310_C804B0(SI_VAR(4), 30, 29);
            if (SI_VAR(0) < 0xFFFFFFD3) {
                func_80240434_C805D4();
                if (SI_VAR(9) == 1) {
                    func_80240408_C805A8(SI_VAR(2));
                    if (SI_VAR(2) == 62) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
        MakeLerp(SI_VAR(0), 135, 195, 0);
        loop {
            UpdateLerp();
            TranslateGroup(33, SI_VAR(0), 0, 0);
            UpdateColliderTransform(30);
            UpdateColliderTransform(29);
            UpdateColliderTransform(28);
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(4) -= SI_VAR(3);
            SI_VAR(3) = SI_VAR(0);
            func_80240310_C804B0(SI_VAR(4), 30, 29);
            if (SI_VAR(0) > 120) {
                func_80240434_C805D4();
                if (SI_VAR(9) == 1) {
                    func_80240408_C805A8(SI_VAR(2));
                    if (SI_VAR(2) == 63) {
                        break;
                    }
                }
            }
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 20;
    }
});

s32 pad_0036C8[] = {
    0x00000000, 0x00000000,
};

f32 N(floatTable_802436D0)[] = {
    4.500000f, 3.500000f, 2.600000f, 2.000000f, 1.500000f, 20.000000f,
};

NpcAISettings N(aISettings_802436E8) = {
    .moveSpeed = 0.800000011920929,
    .moveTime = 0x64,
    .waitTime = 0,
    .alertRadius = 90.0,
    .unk_10 = 0.0,
    .unk_14 = 0x4,
    .chaseSpeed = 3.200000047683716,
    .unk_1C = 0xA,
    .unk_20 = 0x1,
    .chaseRadius = 100.0,
    .unk_28 = 0.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80243718) = SCRIPT({
    SetSelfVar(0, 1);
    SetSelfVar(5, 0);
    SetSelfVar(6, 0);
    SetSelfVar(1, 150);
    func_80241D64_C81F04(N(aISettings_802436E8));
});

NpcSettings N(npcSettings_80243788) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243718),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

s32 N(intTable_802437B4)[] = {
    0xB0000000, 0xB0000001, 0xB0000002, 0xB0000003, 0xB0000004, 0xB0000005, 0xB0000006, 0xB0000007,
    0xB0000008, 0xB0000009, 0xB0000009,
};

Script N(script_802437E0) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    loop 15 {
        loop SI_VAR(1) {
            SetNpcFlagBits(SI_VAR(0), 2, 1);
            SI_VAR(0) += 1;
        }
        sleep 1;
        SI_VAR(0) = SI_VAR(10);
        SI_VAR(1) = SI_VAR(11);
        loop SI_VAR(1) {
            SetNpcFlagBits(SI_VAR(0), 2, 0);
            SI_VAR(0) += 1;
        }
        sleep 1;
        SI_VAR(0) = SI_VAR(10);
        SI_VAR(1) = SI_VAR(11);
    }
    GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    PlaySoundAt(0xB000000A, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    loop 10 {
        GetNpcPos(SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
        RandInt(50, SI_VAR(4));
        SI_VAR(4) -= 25;
        RandInt(30, SI_VAR(5));
        SI_VAR(1) += SI_VAR(4);
        SI_VAR(2) += SI_VAR(5);
        PlayEffect(0, SI_VAR(1), SI_VAR(2), SI_VAR(3), 1, 20, 3, 2, 0, 0, 0, 0, 0, 0);
    }
    if (SI_VAR(10) == 0) {
        if (SI_AREA_FLAG(21) == 0) {
            SI_AREA_FLAG(21) = 1;
            loop 10 {
                MakeItemEntity(343, SI_VAR(1), SI_VAR(2), SI_VAR(3), 3, 0);
            }
        }
    }
    if (SI_VAR(10) == 5) {
        if (SI_AREA_FLAG(22) == 0) {
            SI_AREA_FLAG(22) = 1;
            loop 10 {
                MakeItemEntity(343, SI_VAR(1), SI_VAR(2), SI_VAR(3), 3, 0);
            }
        }
    }
    if (SI_VAR(10) == 10) {
        if (SI_AREA_FLAG(23) == 0) {
            SI_AREA_FLAG(23) = 1;
            loop 10 {
                MakeItemEntity(343, SI_VAR(1), SI_VAR(2), SI_VAR(3), 3, 0);
            }
        }
    }
    RemoveEncounter(SI_VAR(10));
});

s32 N(aISettings_80243B74)[] = {
    0xFFFFFED4, 0x00000014, 0x0000000F, 0x00000008, 0x00000000, 0x00000004, func_80242540_C826E0,
};

s32 N(aISettings_80243B90)[] = {
    0x00000000, 0x00000014, 0x0000000F, 0xFFFFFFF8, 0x00000005, 0x00000004, func_80242540_C826E0,
};

s32 N(aISettings_80243BAC)[] = {
    0x00000145, 0x00000014, 0x0000000F, 0xFFFFFFF8, 0x0000000A, 0x00000004, func_80242540_C826E0,
};

Script N(script_NpcAI_80243BC8) = SCRIPT({
    func_80241F4C_C820EC(N(aISettings_80243B74));
});

Script N(script_NpcAI_80243BE8) = SCRIPT({
    func_80241F4C_C820EC(N(aISettings_80243B90));
});

Script N(script_NpcAI_80243C08) = SCRIPT({
    func_80241F4C_C820EC(N(aISettings_80243BAC));
});

NpcSettings N(npcSettings_80243C28) = {
    .unk_00 = { 0, 0xD4, 0, 0x1 },
    .height = 0xC,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243BC8),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80243C54) = {
    .unk_00 = { 0, 0xD4, 0, 0x1 },
    .height = 0xC,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243BE8),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80243C80) = {
    .unk_00 = { 0, 0xD4, 0, 0x1 },
    .height = 0xC,
    .radius = 0x14,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80243C08),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0xF00,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

s32 N(unk_80243CAC)[] = {
    0x00D40001, 0x000C0014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000F00, 0x00000000, 0x00000000,
};

s32 N(npcGroup_80243CD8)[] = {
    0x00000000, N(npcSettings_80243C28), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00004003, 0x00000000,
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
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, N(unk_80243CAC), 0x00000000, 0x00000000,
    0x00000000, 0x00000001, 0x00004003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
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
    0x00000002, N(unk_80243CAC), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00004003, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000,
};

s32 unk_missing_802441C0[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000003, N(unk_80243CAC), 0x00000000, 0x00000000, 0x00000000, 0x00000001,
    0x00004003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
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
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(npcGroup_80244498)[] = {
    0x00000005, N(npcSettings_80243C54), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00004003, 0x00000000,
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
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000006, N(unk_80243CAC), 0x00000000, 0x00000000,
    0x00000000, 0x00000001, 0x00004003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
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
    0x00000007, N(unk_80243CAC), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00004003, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000,
};

s32 unk_missing_80244980[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000008, N(unk_80243CAC), 0x00000000, 0x00000000, 0x00000000, 0x00000001,
    0x00004003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
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
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(npcGroup_80244C58)[] = {
    0x0000000A, N(npcSettings_80243C80), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00004003, 0x00000000,
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
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000000B, N(unk_80243CAC), 0x00000000, 0x00000000,
    0x00000000, 0x00000001, 0x00004003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
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
    0x0000000C, N(unk_80243CAC), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00004003, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000,
};

s32 unk_missing_80245140[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x0000000D, N(unk_80243CAC), 0x00000000, 0x00000000, 0x00000000, 0x00000001,
    0x00004003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
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
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

StaticNpc N(npcGroup_80245418)[] = {
    {
        .id = 100,
        .settings = &N(npcSettings_80243788),
        .pos = { -150.0, 50.0, 10.0 },
        .flags = 0x00000C00,
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0xFFFFFF6A, 0x00000032, 0x0000000A, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF6A, 0x00000032, 0x0000000A, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00460001, 0x00460002, 0x00460003, 0x00460003, 0x00460001, 0x00460001, 0x00460007, 0x00460007, 0x00460004, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001,
        },
    },
};

StaticNpc N(npcGroup_80245608)[] = {
    {
        .id = 101,
        .settings = &N(npcSettings_80243788),
        .pos = { 150.0, 50.0, 10.0 },
        .flags = 0x00000C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x00000096, 0x00000032, 0x0000000A, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000096, 0x00000032, 0x0000000A, 0x00000096, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00460001, 0x00460002, 0x00460003, 0x00460003, 0x00460001, 0x00460001, 0x00460007, 0x00460007, 0x00460004, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001, 0x00460001,
        },
    },
};

NpcGroupList N(npcGroupList_802457F8) = {
    NPC_GROUP(N(npcGroup_80243CD8), 0x00000000),
    NPC_GROUP(N(npcGroup_80244498), 0x00000000),
    NPC_GROUP(N(npcGroup_80244C58), 0x00000000),
    NPC_GROUP(N(npcGroup_80245418), 0x16000003),
    NPC_GROUP(N(npcGroup_80245608), 0x16070003),
    {},
};

// rodata: D_80245840_C859E0

// rodata: D_80245848_C859E8

// rodata: D_80245850_C859F0

// rodata: D_80245858_C859F8

// rodata: D_80245860_C85A00

// rodata: jtbl_80245868_C85A08

s32 pad_0058A4[] = {
    0x00000000,
};

// rodata: D_802458A8_C85A48

// rodata: jtbl_802458B0_C85A50

s32 pad_005904[] = {
    0x00000000, 0x00000000, 0x00000000,
};
