#include "omo_08.h"

s32 pad_000868[2];
s32 pad_000DDC[1];
Script N(script_80240E50);
s32 pad_000F14[3];
Script N(script_ExitWalk_80240F20);
Script N(script_80240F7C);
Script N(script_EnterWalk_80240FA8);
Script N(main);
s32 N(unk_80241160)[5];
s32 N(unk_80241174)[5];
s32 N(unk_80241188)[5];
s32 N(unk_8024119C)[5];
Script N(script_802411B0);
Script N(script_80241210);
Script N(script_80241270);
Script N(script_802412D0);
Script N(script_80241330);
Script N(script_80241390);
Script N(script_802413F0);
Script N(script_80241450);
Script N(script_802414B0);
Script N(script_80241A30);
Script N(script_8024205C);
Script N(script_80242E6C);
Script N(script_80243648);
Script N(script_80243A68);
s32 pad_003D2C[1];
Script N(script_80243D30);
Script N(script_80244EF8);
Script N(script_80244F60);
Script N(script_80245024);
Script N(script_8024513C);
Script N(script_8024553C);
Script N(script_80245838);
Script N(script_802458F8);
Script N(script_80245B9C);
Script N(script_80245C2C);
Script N(script_8024604C);
Script N(script_80246284);
Script N(script_UpdateTexturePan_802464BC);
Script N(script_80246558);
s32 N(unk_80246740)[2];
s32 N(unk_80246748)[12];
Script N(script_80246778);
s32 N(unk_802468E8)[12];
Script N(script_80246918);
s32 N(unk_80246A88)[14];
s32 N(unk_80246AC0)[18];
Script N(script_80246B08);
s32 N(unk_80246DC0)[12];
s32 N(unk_80246DF0)[16];
Script N(script_80246E30);
s32 N(intTable_802470E8)[3];
s32 N(intTable_802470F4)[3];
Script N(script_80247100);
s32 N(unk_80247438)[6];
Script N(script_80247450);
Script N(script_MakeEntities);
s32 pad_007634[3];
Script N(script_80247640);
Script N(script_NpcAI_802476AC);
Script N(script_Interact_802476F8);
Script N(script_Init_80247734);
Script N(script_Interact_80247758);
Script N(script_Init_802478FC);
Script N(script_NpcAI_80247920);
Script N(script_Defeat_80247A78);
Script N(script_Init_80247B04);
StaticNpc N(npcGroup_80247B3C)[2];
StaticNpc N(npcGroup_80247F1C)[1];
StaticNpc N(npcGroup_8024810C)[1];
StaticNpc N(npcGroup_802482FC)[1];
StaticNpc N(npcGroup_802484EC)[1];
NpcGroupList N(npcGroupList_802486DC);
s32 pad_008724[3];
const char D_80248730_DCCB00[8]; // "omo_09"
const char D_80248738_DCCB08[8]; // "omo_10"
const char D_80248740_DCCB10[8]; // "omo_08"
const char D_80248748_DCCB18[8]; // "omo_06"
const char D_80248750_DCCB20[8]; // "omo_03"
const char D_80248758_DCCB28[8]; // "omo_16"

// text: func_80240000_DC43D0

// text: func_8024001C_DC43EC

// text: func_802400E4_DC44B4

// text: func_80240168_DC4538

// text: func_802401EC_DC45BC

// text: func_80240290_DC4660

// text: func_80240388_DC4758

// text: func_80240518_DC48E8

// text: func_8024055C_DC492C

// text: func_80240680_DC4A50

s32 pad_000868[] = {
    0x00000000, 0x00000000,
};

// text: func_80240870_DC4C40

// text: func_802408E0_DC4CB0

// text: func_802409B0_DC4D80

// text: func_80240A48_DC4E18

// text: func_80240AA8_DC4E78

s32 pad_000DDC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 333.0f, 0.0f, 333.0f, 315.0f },
    { -335.0f, 10.0f, -335.0f, 135.0f },
    { 340.0f, 10.0f, -340.0f, 225.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900E0,
};

Script N(script_80240E50) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SetMusicTrack(0, 32, 0, 8);
    } else {
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SetMusicTrack(0, 32, 0, 8);
        } else {
            SetMusicTrack(0, 33, 0, 8);
        }
    }
});

s32 pad_000F14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240F20) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80248730_DCCB00, 0);
    sleep 100;
});

Script N(script_80240F7C) = SCRIPT({
    bind N(script_ExitWalk_80240F20) to 0x80000 4;
});

Script N(script_EnterWalk_80240FA8) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240F7C);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_VAR(0) = N(script_80240F7C);
        spawn EnterWalk;
        sleep 1;
    } else {
        spawn N(script_80240F7C);
        sleep 3;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 16;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802486DC));
    await N(script_MakeEntities);
    await N(script_80240E50);
    await N(script_80247450);
    await N(script_80243A68);
    spawn N(script_EnterWalk_80240FA8);
    sleep 1;
});

s32 N(unk_80241160)[] = {
    0x00000000, 0x0000005D, 0x0000005A, 0x0000005C, 0x00000059,
};

s32 N(unk_80241174)[] = {
    0x00000001, 0x00000064, 0x00000061, 0x00000063, 0x00000060,
};

s32 N(unk_80241188)[] = {
    0x00000002, 0x0000006B, 0x00000068, 0x0000006A, 0x00000067,
};

s32 N(unk_8024119C)[] = {
    0x00000003, 0x00000072, 0x0000006F, 0x00000071, 0x0000006E,
};

Script N(script_802411B0) = SCRIPT({
    EnableModel(92, 1);
    EnableModel(89, 1);
    EnableModel(93, 0);
    EnableModel(90, 0);
});

Script N(script_80241210) = SCRIPT({
    EnableModel(99, 1);
    EnableModel(96, 1);
    EnableModel(100, 0);
    EnableModel(97, 0);
});

Script N(script_80241270) = SCRIPT({
    EnableModel(106, 1);
    EnableModel(103, 1);
    EnableModel(107, 0);
    EnableModel(104, 0);
});

Script N(script_802412D0) = SCRIPT({
    EnableModel(113, 1);
    EnableModel(110, 1);
    EnableModel(114, 0);
    EnableModel(111, 0);
});

Script N(script_80241330) = SCRIPT({
    EnableModel(92, 0);
    EnableModel(89, 0);
    EnableModel(93, 1);
    EnableModel(90, 1);
});

Script N(script_80241390) = SCRIPT({
    EnableModel(99, 0);
    EnableModel(96, 0);
    EnableModel(100, 1);
    EnableModel(97, 1);
});

Script N(script_802413F0) = SCRIPT({
    EnableModel(106, 0);
    EnableModel(103, 0);
    EnableModel(107, 1);
    EnableModel(104, 1);
});

Script N(script_80241450) = SCRIPT({
    EnableModel(113, 0);
    EnableModel(110, 0);
    EnableModel(114, 1);
    EnableModel(111, 1);
});

Script N(script_802414B0) = SCRIPT({
0:
    GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(3, SI_VAR(0), SI_VAR(2), SI_VAR(3));
    GetNpcPos(4, SI_VAR(0), SI_VAR(3), SI_VAR(4));
    GetNpcPos(5, SI_VAR(0), SI_VAR(4), SI_VAR(5));
    SI_VAR(1) += SI_VAR(2);
    SI_VAR(1) += SI_VAR(3);
    SI_VAR(1) += SI_VAR(4);
    if (SI_VAR(1) != 0xFFFFF060) {
        sleep 1;
        goto 0;
    }
    spawn {
        spawn N(script_802411B0);
        MakeLerp(90, 0, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(93, SI_VAR(0), -1, 0, 0);
            RotateModel(92, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 2;
    spawn {
        spawn N(script_80241210);
        MakeLerp(90, 0, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(100, SI_VAR(0), -1, 0, 0);
            RotateModel(99, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 3;
    spawn {
        spawn N(script_80241270);
        MakeLerp(90, 0, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(107, SI_VAR(0), -1, 0, 0);
            RotateModel(106, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 3;
    spawn N(script_802412D0);
    MakeLerp(90, 0, 10, 10);
    loop {
        UpdateLerp();
        RotateModel(114, SI_VAR(0), -1, 0, 0);
        RotateModel(113, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SI_MAP_VAR(15) = 0;
    SI_MAP_VAR(14) = 0;
    EnableModel(93, 0);
    EnableModel(90, 0);
    SI_VAR(0) = N(unk_80241160);
    bind N(script_80243648) to TriggerFlag_WALL_HAMMER 41;
    EnableModel(100, 0);
    EnableModel(97, 0);
    SI_VAR(0) = N(unk_80241174);
    bind N(script_80243648) to TriggerFlag_WALL_HAMMER 43;
    EnableModel(107, 0);
    EnableModel(104, 0);
    SI_VAR(0) = N(unk_80241188);
    bind N(script_80243648) to TriggerFlag_WALL_HAMMER 45;
    EnableModel(114, 0);
    EnableModel(111, 0);
    SI_VAR(0) = N(unk_8024119C);
    bind N(script_80243648) to TriggerFlag_WALL_HAMMER 47;
});

Script N(script_80241A30) = SCRIPT({
    SI_VAR(0) = 4;
    loop 3 {
        spawn N(script_802411B0);
        sleep SI_VAR(0);
        spawn N(script_80241210);
        sleep SI_VAR(0);
        spawn N(script_80241270);
        sleep SI_VAR(0);
        spawn N(script_802412D0);
        sleep SI_VAR(0);
        PlaySoundAtCollider(41, 422, 0);
        spawn N(script_80241330);
        sleep SI_VAR(0);
        PlaySoundAtCollider(43, 421, 0);
        spawn N(script_80241390);
        sleep SI_VAR(0);
        PlaySoundAtCollider(45, 423, 0);
        spawn N(script_802413F0);
        sleep SI_VAR(0);
        PlaySoundAtCollider(47, 424, 0);
        spawn N(script_80241450);
        sleep SI_VAR(0);
        SI_VAR(0) -= 1;
    }
    sleep 4;
    SI_VAR(0) = 4;
    loop 3 {
        spawn N(script_802411B0);
        spawn N(script_80241210);
        spawn N(script_80241270);
        spawn N(script_802412D0);
        sleep SI_VAR(0);
        PlaySound(425);
        spawn N(script_80241330);
        spawn N(script_80241390);
        spawn N(script_802413F0);
        spawn N(script_80241450);
        sleep SI_VAR(0);
        SI_VAR(0) -= 1;
    }
    sleep 2;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(93, SI_VAR(0), -1, 0, 0);
            RotateModel(92, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(89);
        MakeItemEntity(343, SI_VAR(0), 40, SI_VAR(2), 4, 0);
    }
    sleep 3;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(100, SI_VAR(0), -1, 0, 0);
            RotateModel(99, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(96);
        MakeItemEntity(343, SI_VAR(0), 40, SI_VAR(2), 4, 0);
    }
    sleep 3;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(107, SI_VAR(0), -1, 0, 0);
            RotateModel(106, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(103);
        MakeItemEntity(343, SI_VAR(0), 40, SI_VAR(2), 4, 0);
    }
    sleep 3;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(114, SI_VAR(0), -1, 0, 0);
            RotateModel(113, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(110);
        MakeItemEntity(343, SI_VAR(0), 40, SI_VAR(2), 4, 0);
        sleep 20;
        ResetCam(0, 2);
    }
});

Script N(script_8024205C) = SCRIPT({
    DisablePlayerInput(1);
    loop 4 {
        spawn N(script_802411B0);
        sleep 3;
        spawn N(script_80241210);
        sleep 3;
        spawn N(script_80241270);
        sleep 3;
        spawn N(script_802412D0);
        sleep 3;
        PlaySoundAtCollider(41, 422, 0);
        spawn N(script_80241330);
        sleep 3;
        PlaySoundAtCollider(43, 421, 0);
        spawn N(script_80241390);
        sleep 3;
        PlaySoundAtCollider(45, 423, 0);
        spawn N(script_802413F0);
        sleep 3;
        PlaySoundAtCollider(47, 424, 0);
        spawn N(script_80241450);
        sleep 3;
    }
    UseSettingsFrom(0, 160, 10, 0xFFFFFF38);
    SetPanTarget(0, 160, 10, 0xFFFFFF38);
    SetCamDistance(0, 700);
    SetCamPitch(0, 40, -4.5);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    sleep 30;
    spawn {
        MakeLerp(0, 90, 40, 2);
        loop {
            UpdateLerp();
            RotateGroup(72, SI_VAR(0), 1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(68);
        PlaySoundAt(499, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(6, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        ShakeCam(0, 0, 3, 0.80078125);
    }
    sleep 10;
    spawn {
        MakeLerp(0, 90, 40, 2);
        loop {
            UpdateLerp();
            RotateGroup(77, SI_VAR(0), 1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(73);
        PlaySoundAt(499, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(6, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        ShakeCam(0, 0, 3, 0.80078125);
    }
    sleep 10;
    spawn {
        MakeLerp(0, 90, 40, 2);
        loop {
            UpdateLerp();
            RotateGroup(82, SI_VAR(0), 1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(78);
        PlaySoundAt(499, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(6, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        ShakeCam(0, 0, 3, 0.80078125);
    }
    sleep 10;
    spawn {
        MakeLerp(0, 90, 40, 2);
        loop {
            UpdateLerp();
            RotateGroup(87, SI_VAR(0), 1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        GetModelCenter(83);
        PlaySoundAt(499, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PlayEffect(6, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, 0, 0, 0, 0, 0, 0, 0, 0);
        ShakeCam(0, 0, 3, 0.80078125);
    }
    sleep 100;
    UseSettingsFrom(0, 100, 0, 370);
    SetPanTarget(0, 100, 0, 370);
    SetCamDistance(0, 0xFFFFFE3E);
    SetCamPitch(0, 16, -6.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    spawn {
        GetModelCenter(89);
        SetGroupEnabled(95, 0);
        PlaySoundAtCollider(41, 8344, 0);
        loop 4 {
            SI_VAR(3) = 20;
            RandInt(40, SI_VAR(6));
            SI_VAR(3) -= SI_VAR(6);
            SI_VAR(3) += SI_VAR(0);
            SI_VAR(4) = 20;
            RandInt(40, SI_VAR(7));
            SI_VAR(4) -= SI_VAR(7);
            SI_VAR(4) += SI_VAR(1);
            SI_VAR(5) = 20;
            RandInt(40, SI_VAR(8));
            SI_VAR(5) -= SI_VAR(8);
            SI_VAR(5) += SI_VAR(2);
            PlayEffect(25, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
        }
    }
    sleep 30;
    spawn {
        GetModelCenter(96);
        SetGroupEnabled(102, 0);
        PlaySoundAtCollider(43, 8344, 0);
        loop 4 {
            SI_VAR(3) = 20;
            RandInt(40, SI_VAR(6));
            SI_VAR(3) -= SI_VAR(6);
            SI_VAR(3) += SI_VAR(0);
            SI_VAR(4) = 20;
            RandInt(40, SI_VAR(7));
            SI_VAR(4) -= SI_VAR(7);
            SI_VAR(4) += SI_VAR(1);
            SI_VAR(5) = 20;
            RandInt(40, SI_VAR(8));
            SI_VAR(5) -= SI_VAR(8);
            SI_VAR(5) += SI_VAR(2);
            PlayEffect(25, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
        }
    }
    sleep 30;
    spawn {
        GetModelCenter(103);
        SetGroupEnabled(109, 0);
        PlaySoundAtCollider(45, 8344, 0);
        loop 4 {
            SI_VAR(3) = 20;
            RandInt(40, SI_VAR(6));
            SI_VAR(3) -= SI_VAR(6);
            SI_VAR(3) += SI_VAR(0);
            SI_VAR(4) = 20;
            RandInt(40, SI_VAR(7));
            SI_VAR(4) -= SI_VAR(7);
            SI_VAR(4) += SI_VAR(1);
            SI_VAR(5) = 20;
            RandInt(40, SI_VAR(8));
            SI_VAR(5) -= SI_VAR(8);
            SI_VAR(5) += SI_VAR(2);
            PlayEffect(25, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
        }
    }
    sleep 30;
    spawn {
        GetModelCenter(110);
        SetGroupEnabled(116, 0);
        PlaySoundAtCollider(47, 8344, 0);
        loop 4 {
            SI_VAR(3) = 20;
            RandInt(40, SI_VAR(6));
            SI_VAR(3) -= SI_VAR(6);
            SI_VAR(3) += SI_VAR(0);
            SI_VAR(4) = 20;
            RandInt(40, SI_VAR(7));
            SI_VAR(4) -= SI_VAR(7);
            SI_VAR(4) += SI_VAR(1);
            SI_VAR(5) = 20;
            RandInt(40, SI_VAR(8));
            SI_VAR(5) -= SI_VAR(8);
            SI_VAR(5) += SI_VAR(2);
            PlayEffect(25, 0, SI_VAR(3), SI_VAR(4), SI_VAR(5), 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 2;
        }
    }
    ModifyColliderFlags(0, 41, 0x7FFFFE00);
    ModifyColliderFlags(0, 43, 0x7FFFFE00);
    ModifyColliderFlags(0, 45, 0x7FFFFE00);
    ModifyColliderFlags(0, 47, 0x7FFFFE00);
    sleep 20;
    ResetCam(0, 2);
    SI_SAVE_VAR(0) = 0;
    DisablePlayerInput(0);
});

Script N(script_80242E6C) = SCRIPT({
    SI_VAR(0) = 4;
    loop 3 {
        spawn N(script_802411B0);
        sleep SI_VAR(0);
        spawn N(script_80241210);
        sleep SI_VAR(0);
        spawn N(script_80241270);
        sleep SI_VAR(0);
        spawn N(script_802412D0);
        sleep SI_VAR(0);
        PlaySoundAtCollider(41, 422, 0);
        spawn N(script_80241450);
        sleep SI_VAR(0);
        PlaySoundAtCollider(43, 421, 0);
        spawn N(script_802413F0);
        sleep SI_VAR(0);
        PlaySoundAtCollider(45, 423, 0);
        spawn N(script_80241390);
        sleep SI_VAR(0);
        PlaySoundAtCollider(47, 424, 0);
        spawn N(script_80241330);
        sleep SI_VAR(0);
        SI_VAR(0) -= 1;
    }
    sleep 4;
    SI_VAR(0) = 4;
    loop 3 {
        spawn N(script_802411B0);
        spawn N(script_80241210);
        spawn N(script_80241270);
        spawn N(script_802412D0);
        sleep SI_VAR(0);
        PlaySound(425);
        spawn N(script_80241330);
        spawn N(script_80241390);
        spawn N(script_802413F0);
        spawn N(script_80241450);
        sleep SI_VAR(0);
        SI_VAR(0) -= 1;
    }
    sleep 2;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(93, SI_VAR(0), -1, 0, 0);
            RotateModel(92, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(41, 812, 0);
        GetModelCenter(89);
        SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcJumpscale(2, 1.0);
        SI_VAR(2) += 60;
        NpcJump0(2, SI_VAR(0), 0, SI_VAR(2), 20);
        SetNpcFlagBits(2, 64, 0);
    }
    sleep 3;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(100, SI_VAR(0), -1, 0, 0);
            RotateModel(99, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(43, 812, 0);
        GetModelCenter(96);
        SetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcJumpscale(3, 1.0);
        SI_VAR(2) += 60;
        NpcJump0(3, SI_VAR(0), 0, SI_VAR(2), 20);
        SetNpcFlagBits(3, 64, 0);
    }
    sleep 3;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(107, SI_VAR(0), -1, 0, 0);
            RotateModel(106, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(45, 812, 0);
        GetModelCenter(103);
        SetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcJumpscale(4, 1.0);
        SI_VAR(2) += 60;
        NpcJump0(4, SI_VAR(0), 0, SI_VAR(2), 20);
        SetNpcFlagBits(4, 64, 0);
    }
    sleep 3;
    spawn {
        MakeLerp(0, 90, 10, 10);
        loop {
            UpdateLerp();
            RotateModel(114, SI_VAR(0), -1, 0, 0);
            RotateModel(113, SI_VAR(0), -1, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        PlaySoundAtCollider(47, 812, 0);
        GetModelCenter(110);
        SetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcJumpscale(5, 1.0);
        SI_VAR(2) += 60;
        NpcJump0(5, SI_VAR(0), 0, SI_VAR(2), 20);
        SetNpcFlagBits(5, 64, 0);
        ResetCam(0, 1);
        spawn N(script_802414B0);
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80243648) = {
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, N(unk_80241160)),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 41, 418, 0),
        SI_CMD(ScriptOpcode_CASE_EQ, N(unk_80241174)),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 43, 417, 0),
        SI_CMD(ScriptOpcode_CASE_EQ, N(unk_80241188)),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 45, 419, 0),
        SI_CMD(ScriptOpcode_CASE_EQ, N(unk_8024119C)),
            SI_CMD(ScriptOpcode_CALL, PlaySoundAtCollider, 47, 420, 0),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5)),
    SI_CMD(ScriptOpcode_LOOP, 5),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(3), 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(4), 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(5), 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(2), 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(3), 1),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_MUL, SI_MAP_VAR(15), 4),
    SI_CMD(ScriptOpcode_AND_CONST, SI_MAP_VAR(15), 0xFE363C81)
    SI_CMD(ScriptOpcode_ADD, SI_MAP_VAR(14), 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(14), 4),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, 100, 0, 370),
        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 100, 0, 370),
        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, 0xFFFFFE3E),
        SI_CMD(ScriptOpcode_CALL, SetCamPitch, 0, 16, SI_FIXED(-6.0)),
        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, 1),
        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 30),
        SI_CMD(ScriptOpcode_MATCH, SI_MAP_VAR(15)),
            SI_CMD(ScriptOpcode_CASE_EQ, 27),
                SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80241A30)),
            SI_CMD(ScriptOpcode_CASE_EQ, 75),
                SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024205C)),
            SI_CMD(ScriptOpcode_CASE_ELSE),
                SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80242E6C)),
        SI_CMD(ScriptOpcode_END_MATCH),
        SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SPAWN_THREAD),
            SI_CMD(ScriptOpcode_LABEL, 10),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(4), 1),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(5), 1),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(2), 1),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(3), 1),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_CALL, EnableModel, SI_VAR(5), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
            SI_CMD(ScriptOpcode_IF_NE, SI_MAP_VAR(14), 4),
                SI_CMD(ScriptOpcode_GOTO, 10),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_UNBIND),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80243A68) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0) {
        SI_MAP_VAR(15) = 0;
        SI_MAP_VAR(14) = 0;
        EnableModel(93, 0);
        EnableModel(90, 0);
        SI_VAR(0) = N(unk_80241160);
        bind N(script_80243648) to TriggerFlag_WALL_HAMMER 41;
        EnableModel(100, 0);
        EnableModel(97, 0);
        SI_VAR(0) = N(unk_80241174);
        bind N(script_80243648) to TriggerFlag_WALL_HAMMER 43;
        EnableModel(107, 0);
        EnableModel(104, 0);
        SI_VAR(0) = N(unk_80241188);
        bind N(script_80243648) to TriggerFlag_WALL_HAMMER 45;
        EnableModel(114, 0);
        EnableModel(111, 0);
        SI_VAR(0) = N(unk_8024119C);
        bind N(script_80243648) to TriggerFlag_WALL_HAMMER 47;
    } else {
        SetGroupEnabled(117, 0);
        ModifyColliderFlags(0, 41, 0x7FFFFE00);
        ModifyColliderFlags(0, 43, 0x7FFFFE00);
        ModifyColliderFlags(0, 45, 0x7FFFFE00);
        ModifyColliderFlags(0, 47, 0x7FFFFE00);
        ModifyColliderFlags(0, 6, 0x7FFFFE00);
        ModifyColliderFlags(0, 7, 0x7FFFFE00);
        RotateGroup(72, 90, 1, 0, 0);
        RotateGroup(77, 90, 1, 0, 0);
        RotateGroup(82, 90, 1, 0, 0);
        RotateGroup(87, 90, 1, 0, 0);
    }
});

s32 pad_003D2C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_80243D30) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 20),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(2), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(3), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(7), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(8), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(14), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(16), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 0),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_MATCH, SI_MAP_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_VAR(1)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_FIXED(40.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(3), SI_VAR(2)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(40.0), SI_VAR(3)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_ARRAY(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_ARRAY(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(17), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_LABEL, 11),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), -1),
                SI_CMD(ScriptOpcode_GOTO, 12),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(17), SI_VAR(4)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_VAR(3)),
            SI_CMD(ScriptOpcode_GOTO, 11),
            SI_CMD(ScriptOpcode_LABEL, 12),
            SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(17), SI_FIXED(40.0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(10), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(13), SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_SET, SI_ARRAY(18), 0),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(0), 1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 1),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
            SI_CMD(ScriptOpcode_CALL, func_80240168_DC4538, 3, 0, 0),
            SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(0), SI_VAR(1)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), -1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(2), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(3), SI_VAR(1)),
                SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(7), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(8), SI_VAR(1)),
                SI_CMD(ScriptOpcode_SET, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 10),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CASE_EQ, 10),
            SI_CMD(ScriptOpcode_MATCH, SI_MAP_VAR(2)),
                SI_CMD(ScriptOpcode_CASE_EQ, 0),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(10), SI_FIXED(10.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 1),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DC4758, SI_ARRAY(18), SI_ARRAY(10), SI_FIXED(0.0), SI_FIXED(10.0), 100, 1, SI_FIXED(0.0)),
                    SI_CMD(ScriptOpcode_ADD, SI_ARRAY(18), 1),
                SI_CMD(ScriptOpcode_CASE_EQ, 2),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DC4758, SI_VAR(0), SI_ARRAY(10), SI_FIXED(10.0), SI_FIXED(2.0), SI_VAR(1), 0, SI_FIXED(0.0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 3),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(13)),
                    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(17)),
                    SI_CMD(ScriptOpcode_DIV, SI_VAR(1), 2),
                    SI_CMD(ScriptOpcode_CALL, func_80240388_DC4758, SI_VAR(0), SI_ARRAY(10), SI_FIXED(1.0), SI_FIXED(10.0), SI_VAR(1), 0, SI_FIXED(0.0)),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DC44B4, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DC43EC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(2)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DC4538, 3, 2, SI_ARRAY(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(2), SI_ARRAY(3)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(4), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(2), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 1),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DC43EC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(2), SI_ARRAY(3)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
            SI_CMD(ScriptOpcode_CALL, func_802400E4_DC44B4, SI_VAR(0), SI_ARRAY(10), SI_VAR(2)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(2), 1),
                SI_CMD(ScriptOpcode_CALL, func_8024001C_DC43EC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(10), SI_VAR(0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(7)),
                SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_MAP_VAR(1)),
                SI_CMD(ScriptOpcode_CALL, func_80240168_DC4538, 3, 2, SI_ARRAY(9)),
                SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_ARRAY(7), SI_ARRAY(8)),
                SI_CMD(ScriptOpcode_ADD, SI_ARRAY(9), 1),
                SI_CMD(ScriptOpcode_IF_EQ, SI_ARRAY(7), -1),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_VAR(0), 100),
                    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(1), 0),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DC43EC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(7), SI_ARRAY(8)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 100),
                SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(1), 1),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DC43EC, SI_VAR(0), SI_ARRAY(0), SI_ARRAY(1), SI_ARRAY(5), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(5), SI_ARRAY(0)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(6), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(5), SI_ARRAY(6), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, func_8024001C_DC43EC, SI_VAR(0), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(0), SI_ARRAY(5)),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(1), SI_ARRAY(6)),
                    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_ARRAY(0), SI_ARRAY(1), SI_FIXED(80.0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_ARRAY(1)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(0), SI_ARRAY(5)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(1), SI_ARRAY(6)),
            SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(2.0)),
            SI_CMD(ScriptOpcode_DIV_F, SI_VAR(1), SI_FIXED(2.0)),
            SI_CMD(ScriptOpcode_CALL, func_8024001C_DC43EC, SI_VAR(2), SI_ARRAY(5), SI_ARRAY(6), SI_ARRAY(0), SI_ARRAY(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(11), SI_VAR(0)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(12), SI_VAR(1)),
            SI_CMD(ScriptOpcode_SET_F, SI_MAP_VAR(13), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, GetDist2D, SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_ARRAY(11), SI_ARRAY(12)),
            SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(13), SI_VAR(3)),
            SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(14), SI_ARRAY(13)),
            SI_CMD(ScriptOpcode_MUL_F, SI_ARRAY(14), SI_FIXED(1.4326171875)),
            SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(15), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_LT, SI_ARRAY(15), 0xFFFFFFF6),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(-10.0)),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(3), 0),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 511),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 132),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
                SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
                SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_DIV_F, SI_VAR(0), SI_FIXED(3.0)),
                SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(15), SI_VAR(0)),
                SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(15), 10),
                    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(15), SI_FIXED(10.0)),
                    SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(3), 0),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 510),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 1),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, PlaySound, 510),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_FLAG(3), 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_802401EC_DC45BC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(180.0)),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(15.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DC4660, 0xFFFFFFFC, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
            SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
            SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
                SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
            SI_CMD(ScriptOpcode_CALL, func_80240290_DC4660, 0, SI_VAR(0), 50, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_CASE_EQ, 100),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 132, SI_FIXED(79.1005859375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 135, SI_FIXED(-35.099609375), SI_FIXED(-27.9296875), SI_FIXED(-29.529296875)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 132, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 135, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 139, SI_FIXED(40.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 141, SI_FIXED(-39.5), SI_FIXED(-20.0), SI_FIXED(-0.3994140625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 142, SI_MAP_VAR(11), SI_FIXED(10.0), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 142, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(13)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(180.0)),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(1), SI_FIXED(90.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 142, SI_VAR(1), SI_FIXED(0.0), SI_FIXED(-1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 132, SI_FIXED(45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 135, SI_FIXED(-45.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 132, SI_FIXED(-79.099609375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 135, SI_FIXED(35.1005859375), SI_FIXED(27.9306640625), SI_FIXED(29.5302734375)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 139, SI_FIXED(-40.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 141, SI_FIXED(39.5), SI_FIXED(20.0), SI_FIXED(0.400390625)),
    SI_CMD(ScriptOpcode_IF_LT, SI_MAP_VAR(13), 180),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 139, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 141, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 139, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, RotateGroup, 141, SI_ARRAY(14), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 132, SI_FIXED(0.0), SI_ARRAY(15), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(15)),
    SI_CMD(ScriptOpcode_MUL_F, SI_VAR(0), SI_FIXED(-1.0)),
    SI_CMD(ScriptOpcode_CALL, TranslateGroup, 135, SI_FIXED(0.0), SI_VAR(0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_ARRAY(10)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ADD_F, SI_ARRAY(16), SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_GT, SI_ARRAY(16), 360),
        SI_CMD(ScriptOpcode_SUB_F, SI_ARRAY(16), SI_FIXED(360.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, RotateGroup, 137, SI_ARRAY(16), SI_FIXED(0.0), SI_FIXED(1.0), SI_FIXED(0.0)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(11), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_ARRAY(12), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80244EF8) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_80244F60) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(0, SI_VAR(1), 45, 0);
    loop {
        UpdateLerp();
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamTarget(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80245024) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    MakeLerp(SI_VAR(1), 0, 40, 0);
    loop {
        UpdateLerp();
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamTarget(0, SI_VAR(2), SI_VAR(0), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamTarget(0, SI_VAR(0), 0, SI_VAR(2));
        sleep 1;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024513C) = {
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
        SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(4.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(0.7001953125)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(1), SI_VAR(2), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerPos, SI_VAR(1), 50, SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
        SI_CMD(ScriptOpcode_CALL, InterpPlayerYaw, SI_VAR(3), 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(180.0)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(15.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0xFFFFFFFC, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0xFFFFFFFC, SI_VAR(1), 50, SI_VAR(2), 10),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(0.5)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0xFFFFFFFC, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 5),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(10), SI_VAR(3)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(3), 180),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(3), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(3), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(4), SI_VAR(1)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(5), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(6), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(1), SI_VAR(2), SI_FIXED(100.0), SI_VAR(3)),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(3.0)),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(1), SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0001),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(4), SI_VAR(5), SI_FIXED(20.0), SI_VAR(6)),
    SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(0.7001953125)),
    SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(4), 50, SI_VAR(5), 10),
    SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, SI_VAR(10), 0),
    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 5, 0xF0009),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 33, 0, 8),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_8024553C) = {
    SI_CMD(ScriptOpcode_CALL, StopSound, 131),
    SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 32, 0, 8),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 1),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(0), SI_MAP_VAR(11)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(1), SI_MAP_VAR(12)),
    SI_CMD(ScriptOpcode_SET_F, SI_VAR(2), SI_MAP_VAR(13)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(2), 180),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SUB_F, SI_VAR(2), SI_FIXED(90.0)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(100.0), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0, SI_FIXED(1.0)),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0, SI_VAR(0), 50, SI_VAR(1), 10),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0003),
        SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(2.0)),
        SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(9)),
        SI_CMD(ScriptOpcode_BUFFER_READ_2, SI_VAR(3), SI_VAR(4)),
        SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, SI_VAR(3), SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x8C0001),
        SI_CMD(ScriptOpcode_CALL, InterpNpcYaw, 0, 270, 15),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0, 320, 0),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_ADD_F, SI_VAR(2), SI_FIXED(60.0)),
        SI_CMD(ScriptOpcode_CALL, AddVectorPolar, SI_VAR(0), SI_VAR(1), SI_FIXED(20.0), SI_VAR(2)),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10004),
        SI_CMD(ScriptOpcode_CALL, SetPlayerSpeed, SI_FIXED(3.0)),
        SI_CMD(ScriptOpcode_CALL, PlayerMoveTo, SI_VAR(0), SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x10002),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(1), 30),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 258),
    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0xFFFFFFFC, SI_FIXED(2.5)),
    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0xFFFFFFFC, SI_VAR(0), SI_VAR(1), 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80245838) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            GotoMapSpecial(D_80248750_DCCB20, 3, 1);
        }
        == 1 {
            GotoMapSpecial(D_80248748_DCCB18, 3, 1);
        }
        == 2 {
            GotoMapSpecial(D_80248740_DCCB10, 2, 1);
        }
        == 3 {
            GotoMapSpecial(D_80248738_DCCB08, 3, 1);
        }
    }
    sleep 100;
});

Script N(script_802458F8) = SCRIPT({
    match SI_AREA_VAR(5) {
    0..1
        match SI_AREA_VAR(6) {
            == 0 {
                GotoMapSpecial(D_80248750_DCCB20, 2, 1);
            }
            == 1 {
                GotoMapSpecial(D_80248748_DCCB18, 2, 1);
            }
            == 2 {
                GotoMapSpecial(D_80248740_DCCB10, 1, 1);
            }
            == 3 {
                GotoMapSpecial(D_80248738_DCCB08, 2, 1);
            }
        }
        == 2 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80248750_DCCB20, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80248748_DCCB18, 2, 1);
                    } else {
                        GotoMapSpecial(D_80248750_DCCB20, 2, 1);
                    }
                }
                == 3 {
                    GotoMapSpecial(D_80248738_DCCB08, 2, 1);
                }
            }
        }
        == 3 {
            match SI_AREA_VAR(6) {
                == 0 {
                    GotoMapSpecial(D_80248750_DCCB20, 2, 1);
                }
                == 1 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80248748_DCCB18, 2, 1);
                    } else {
                        GotoMapSpecial(D_80248750_DCCB20, 2, 1);
                    }
                }
                == 2 {
                    if (SI_SAVE_FLAG(1101) == 1) {
                        GotoMapSpecial(D_80248740_DCCB10, 1, 1);
                    } else {
                        GotoMapSpecial(D_80248750_DCCB20, 2, 1);
                    }
                }
            }
        }
    }
    sleep 100;
});

Script N(script_80245B9C) = SCRIPT({
10:
    sleep 1;
    func_80240518_DC48E8();
    if (SI_VAR(0) != 1) {
        goto 10;
    }
    if (SI_AREA_FLAG(2) == 0) {
        await N(script_80245838);
    } else {
        await N(script_802458F8);
    }
});

Script N(script_80245C2C) = SCRIPT({
    SetTexPanner(143, 2);
    EnableTexPanning(143, 1);
    SI_MAP_VAR(9) = 0x8000;
    spawn {
        loop {
            SetTexPanOffset(2, 0, SI_MAP_VAR(9), 0);
            sleep 1;
        }
    }
    SI_VAR(5) = 0;
0:
    SI_VAR(5) += 2;
    if (SI_VAR(5) > 360) {
        SI_VAR(5) -= 360;
    }
    RotateModel(143, SI_VAR(5), 0, 0, -1);
    sleep 1;
    if (SI_MAP_FLAG(1) == 1) {
        goto 10;
    }
    goto 0;
10:
    if (SI_AREA_FLAG(2) == 0) {
        SI_VAR(2) = 270;
        EnableTexPanning(154, 0);
        EnableTexPanning(148, 1);
    } else {
        SI_VAR(2) = 90;
        EnableTexPanning(148, 0);
        EnableTexPanning(154, 1);
    }
    if (SI_VAR(2) < SI_VAR(5)) {
        SI_VAR(2) += 360;
    }
    SI_VAR(6) = SI_AREA_FLAG(2);
    MakeLerp(SI_VAR(5), SI_VAR(2), 60, 8);
    UpdateLerp();
    SI_VAR(4) = -1;
11:
    UpdateLerp();
    if (SI_VAR(2) < SI_VAR(0)) {
        SI_VAR(3) = 0;
    } else {
        SI_VAR(3) = 1;
    }
    if (SI_VAR(4) != -1) {
        if (SI_VAR(3) != SI_VAR(4)) {
            PlaySound(505);
        }
    }
    SI_VAR(4) = SI_VAR(3);
    RotateModel(143, SI_VAR(0), 0, 0, -1);
    sleep 1;
    if (SI_AREA_FLAG(2) != SI_VAR(6)) {
        goto 21;
    }
    if (SI_VAR(1) == 1) {
        goto 11;
    }
    PlaySound(506);
    if (SI_AREA_FLAG(2) == 0) {
        SI_MAP_VAR(9) = 0x4000;
    } else {
        SI_MAP_VAR(9) = 0xC000;
    }
20:
    sleep 1;
    if (SI_AREA_FLAG(2) == SI_VAR(6)) {
        goto 20;
    }
21:
    SI_VAR(5) = SI_VAR(0);
    goto 10;
});

Script N(script_8024604C) = SCRIPT({
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 4) {
            return;
        }
    }
    if (SI_MAP_FLAG(1) == 1) {
        if (SI_AREA_FLAG(2) == 0) {
            return;
        }
    }
    SI_MAP_FLAG(1) = 1;
    SI_AREA_FLAG(2) = 0;
    MakeLerp(0, 0xFFFFFFEE, 15, 0);
0:
    UpdateLerp();
    TranslateModel(147, 0, SI_VAR(0), 0);
    TranslateModel(148, 0, SI_VAR(0), 0);
    UpdateColliderTransform(52);
    UpdateColliderTransform(53);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(147, 0, SI_VAR(0), 0);
    TranslateModel(148, 0, SI_VAR(0), 0);
    UpdateColliderTransform(52);
    UpdateColliderTransform(53);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_80246284) = SCRIPT({
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 4) {
            return;
        }
    }
    if (SI_MAP_FLAG(1) == 1) {
        if (SI_AREA_FLAG(2) == 1) {
            return;
        }
    }
    SI_MAP_FLAG(1) = 1;
    SI_AREA_FLAG(2) = 1;
    MakeLerp(0, 0xFFFFFFEE, 15, 0);
0:
    UpdateLerp();
    TranslateModel(153, 0, SI_VAR(0), 0);
    TranslateModel(154, 0, SI_VAR(0), 0);
    UpdateColliderTransform(59);
    UpdateColliderTransform(58);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    MakeLerp(0xFFFFFFEE, 0, 15, 0);
1:
    UpdateLerp();
    TranslateModel(153, 0, SI_VAR(0), 0);
    TranslateModel(154, 0, SI_VAR(0), 0);
    UpdateColliderTransform(59);
    UpdateColliderTransform(58);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_UpdateTexturePan_802464BC) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_8024055C_DC492C();
                    return;
                }
            }
        }
    }
    func_80240680_DC4A50();
});

Script N(script_80246558) = SCRIPT({
    SI_MAP_FLAG(1) = 0;
    SI_MAP_FLAG(10) = 0;
    spawn N(script_80245C2C);
    ParentColliderToModel(52, 147);
    ParentColliderToModel(53, 148);
    ParentColliderToModel(59, 153);
    ParentColliderToModel(58, 154);
    bind N(script_8024604C) to TriggerFlag_FLOOR_TOUCH 52;
    bind N(script_8024604C) to TriggerFlag_WALL_HAMMER 53;
    bind N(script_80246284) to TriggerFlag_FLOOR_TOUCH 59;
    bind N(script_80246284) to TriggerFlag_WALL_HAMMER 58;
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFBB4;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802464BC);
    }
});

s32 N(unk_80246740)[] = {
    0xFFFFFF6F, 0xFFFFFF92,
};

s32 N(unk_80246748)[] = {
    0xF2486D98, 0xF247316B, 0xF24C1E84, 0xF24A7A80, 0xF247BE80, 0xF24E9480, 0xF246A528, 0xF251F729,
    0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80246778) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    spawn N(script_80245024);
    SI_AREA_VAR(5) = 2;
    SI_VAR(0) = N(unk_80246748);
    await N(script_8024513C);
    ModifyColliderFlags(0, 63, 0x7FFFFE00);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_80246748);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) < 350) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_80248758_DCCB28, 0);
    SI_SAVE_VAR(215) = 2;
    sleep 100;
});

s32 N(unk_802468E8)[] = {
    0xF2486D98, 0xF247316B, 0xF24EEE84, 0xF2466080, 0xF246A528, 0xF244F4D4, 0xF244F3C0, 0xF242FDD8,
    0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80246918) = SCRIPT({
    FadeOutMusic(0, 3000);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    sleep 10;
    DisablePlayerPhysics(1);
    spawn N(script_80245024);
    SI_AREA_VAR(5) = 2;
    SI_VAR(0) = N(unk_802468E8);
    await N(script_8024513C);
    ModifyColliderFlags(0, 63, 0x7FFFFE00);
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = N(unk_802468E8);
    SI_MAP_VAR(2) = 1;
    SI_MAP_FLAG(0) = 1;
10:
    if (SI_MAP_VAR(11) > 0xFFFFFEA2) {
        sleep 1;
        goto 10;
    }
    GotoMap(D_80248758_DCCB28, 1);
    SI_SAVE_VAR(215) = 1;
    sleep 100;
});

s32 N(unk_80246A88)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA2E, 0xF25000B7, 0xF244F44A, 0xF24E9480, 0xF246A528, 0xF24A7A80,
    0xF247BE80, 0xF247D306, 0xF2470824, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80246AC0)[] = {
    0xF250F60B, 0xF243CEBC, 0xF24DEA2E, 0xF25000B7, 0xF244F44A, 0xF24E9480, 0xF246A528, 0xF24A7A80,
    0xF247BE80, 0xF2466080, 0xF246A528, 0xF244F4D4, 0xF244F3C0, 0xF242FDD8, 0xF2429C51, 0xFFFFFFFF,
    0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80246B08) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    ModifyColliderFlags(0, 63, 0x7FFFFE00);
    if (SI_AREA_VAR(6) == 2) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80246A88);
        SI_MAP_VAR(2) = 2;
        spawn N(script_80243D30);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        SI_VAR(11) = spawn N(script_80244EF8);
    10:
        if (SI_MAP_FLAG(0) == 1) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        kill SI_VAR(11);
        spawn N(script_80244F60);
        func_80240000_DC43D0();
        SI_VAR(9) = N(unk_80246740);
        await N(script_8024553C);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0010);
        ModifyColliderFlags(1, 63, 0x7FFFFE00);
        DisablePlayerPhysics(0);
        EnablePartnerAI();
        DisablePlayerInput(0);
    } else {
        spawn N(script_80244EF8);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80246AC0);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80243D30);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        spawn N(script_80245B9C);
    20:
        if (SI_MAP_VAR(11) > 0xFFFFFEA2) {
            sleep 1;
            goto 20;
        }
        GotoMap(D_80248758_DCCB28, 1);
        SI_SAVE_VAR(215) = 1;
        sleep 100;
    }
});

s32 N(unk_80246DC0)[] = {
    0xF243FEF6, 0xF243CEBC, 0xF24CAACD, 0xF244F4D4, 0xF244F3C0, 0xF2466080, 0xF246A528, 0xF249082F,
    0xF2475AB4, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

s32 N(unk_80246DF0)[] = {
    0xF243FEF6, 0xF243CEBC, 0xF24CAACD, 0xF244F4D4, 0xF244F3C0, 0xF2466080, 0xF246A528, 0xF24A7A80,
    0xF247BE80, 0xF24E9480, 0xF246A528, 0xF251F729, 0xF2429C51, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80246E30) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    DisablePartnerAI(0);
    ModifyColliderFlags(0, 63, 0x7FFFFE00);
    if (SI_AREA_VAR(6) == 2) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80246DC0);
        SI_MAP_VAR(2) = 2;
        spawn N(script_80243D30);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        SI_VAR(11) = spawn N(script_80244EF8);
    10:
        if (SI_MAP_FLAG(0) == 1) {
            sleep 1;
            goto 10;
        }
        sleep 20;
        kill SI_VAR(11);
        spawn N(script_80244F60);
        func_80240000_DC43D0();
        SI_VAR(9) = N(unk_80246740);
        await N(script_8024553C);
        SpeakToPlayer(0, 0x8C0004, 0x8C0001, 0, 0xF0010);
        ModifyColliderFlags(1, 63, 0x7FFFFE00);
        DisablePlayerPhysics(0);
        EnablePartnerAI();
        DisablePlayerInput(0);
    } else {
        spawn N(script_80244EF8);
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80246DF0);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80243D30);
        SI_MAP_FLAG(0) = 1;
        sleep 1;
        spawn N(script_80245B9C);
    20:
        if (SI_MAP_VAR(11) < 350) {
            sleep 1;
            goto 20;
        }
        GotoMap(D_80248758_DCCB28, 0);
        SI_SAVE_VAR(215) = 2;
        sleep 100;
    }
});

s32 N(intTable_802470E8)[] = {
    0x00000001, 0x00000000, 0x00000003,
};

s32 N(intTable_802470F4)[] = {
    0x00000003, 0x00000000, 0x00000001,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80247100) = {
    SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_FLAG(1), 0),
        SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0006),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_IF_EQ, SI_AREA_FLAG(2), 0),
            SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
            SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1101), 0),
                SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0040),
                SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 2),
                    SI_CMD(ScriptOpcode_CALL, CloseMessage),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802470E8)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80246918)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_ELSE),
                SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E0041),
                SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                    SI_CMD(ScriptOpcode_CALL, CloseMessage),
                    SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802470E8)),
                    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                    SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                        SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                    SI_CMD(ScriptOpcode_END_LOOP),
                    SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                    SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80246918)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_MATCH, SI_SAVE_VAR(0)),
                SI_CMD(ScriptOpcode_CASE_LT, 0),
                    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0006, 0x8C0002, 0, 0xF0016),
                SI_CMD(ScriptOpcode_CASE_GE, 0),
                    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x8C0004, 0x8C0001, 0, 0xF0007),
                    SI_CMD(ScriptOpcode_CALL, ShowChoice, 0x1E003F),
                    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(0), 3),
                        SI_CMD(ScriptOpcode_CALL, CloseMessage),
                        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_802470F4)),
                        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
                        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
                            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(1)),
                        SI_CMD(ScriptOpcode_END_LOOP),
                        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(6), SI_VAR(1)),
                        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_80246778)),
                    SI_CMD(ScriptOpcode_ELSE),
                        SI_CMD(ScriptOpcode_CALL, ContinueSpeech, 0, 0x8C0004, 0x8C0001, 0, 0xF0008),
                    SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_MATCH),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

s32 N(unk_80247438)[] = {
    0xF2486D98, 0xF247316B, 0xF24C1E84, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
};

Script N(script_80247450) = SCRIPT({
    await N(script_80246558);
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        SI_MAP_VAR(0) = 0;
        SI_MAP_VAR(1) = N(unk_80247438);
        SI_MAP_VAR(2) = 0;
        spawn N(script_80243D30);
        SI_MAP_FLAG(0) = 1;
    } else {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
            == 1 {
                spawn N(script_80246E30);
            }
            == 2 {
                spawn N(script_80246B08);
            }
            else {
                SI_MAP_VAR(0) = 0;
                SI_MAP_VAR(1) = N(unk_80247438);
                SI_MAP_VAR(2) = 0;
                spawn N(script_80243D30);
                SI_MAP_FLAG(0) = 1;
            }
        }
    }
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0xFFFFFEA2, 60, 50, 0, 0x80000000);
    MakeEntity(0x802EA588, 350, 60, 60, 0, 128, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1145));
    MakeEntity(0x802EAB04, 0xFFFFFF38, 0, 200, 0, 20, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1192));
});

s32 pad_007634[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80247640) = SCRIPT({

});

NpcSettings N(npcSettings_80247650) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
    .radius = 0x18,
    .otherAI = &N(script_80247640),
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

NpcAISettings N(aISettings_8024767C) = {
    .moveSpeed = 2.0,
    .moveTime = 0x3C,
    .waitTime = 0xF,
    .alertRadius = 100.0,
    .unk_10 = 30.0,
    .unk_14 = 0x4,
    .chaseSpeed = 4.0,
    .unk_1C = 0x6,
    .unk_20 = 0x1,
    .chaseRadius = 140.0,
    .unk_28 = 30.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802476AC) = SCRIPT({
    func_80240AA8_DC4E78(N(aISettings_8024767C));
});

NpcSettings N(npcSettings_802476CC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802476AC),
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

Script N(script_Interact_802476F8) = SCRIPT({
    DisablePlayerInput(1);
    await N(script_80247100);
    DisablePlayerInput(0);
});

Script N(script_Init_80247734) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802476F8));
});

Script N(script_Interact_80247758) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0 {
            FindKeyItem(37, SI_VAR(0));
            if (SI_VAR(0) == -1) {
                if (SI_SAVE_FLAG(1146) == 0) {
                    SpeakToPlayer(-1, 0x8C0304, 0x8C0301, 0, 0xF002B);
                } else {
                    if (SI_SAVE_FLAG(1147) == 0) {
                        SpeakToPlayer(-1, 0x8C0304, 0x8C0301, 0, 0xF002C);
                    } else {
                        SpeakToPlayer(-1, 0x8C0304, 0x8C0301, 0, 0xF002F);
                    }
                }
            } else {
                SpeakToPlayer(-1, 0x8C0304, 0x8C0301, 0, 0xF002D);
            }
        }
        < 2 {
            SpeakToPlayer(-1, 0x8C0304, 0x8C0301, 0, 0xF002E);
        }
        < 4 {
            SpeakToPlayer(-1, 0x8C0304, 0x8C0301, 0, 0xF002F);
        }
        else {
            SpeakToPlayer(-1, 0x8C0304, 0x8C0301, 0, 0xF0030);
        }
    }
});

Script N(script_Init_802478FC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80247758));
});

Script N(script_NpcAI_80247920) = SCRIPT({
    loop {
        GetSelfVar(0, SI_VAR(0));
        match SI_VAR(0) {
            == 0 {
                GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(1) == 0) {
                    SetSelfVar(0, 1);
                    BindNpcAI(-1, N(script_NpcAI_802476AC));
                }
            }
            == 2 {
                DisablePlayerInput(1);
                sleep 25;
                SetNpcPos(-1, 0, 0xFFFFFC18, 0);
                SetNpcFlagBits(-1, 2, 0);
                SetNpcFlagBits(-1, 64, 1);
                SetSelfVar(0, 0);
                DisablePlayerInput(0);
            }
        }
        sleep 1;
    }
});

Script N(script_Defeat_80247A78) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetSelfVar(0, 2);
            BindNpcAI(-1, N(script_NpcAI_80247920));
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80247B04) = SCRIPT({
    BindNpcIdle(-1, N(script_NpcAI_80247920));
    BindNpcDefeat(-1, N(script_Defeat_80247A78));
});

StaticNpc N(npcGroup_80247B3C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80247650),
        .pos = { -145.0, 50.0, -110.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_80247734),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x008C0001, 0x008C0003, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001, 0x008C0001,
        },
        .tattle = 0x1A00B8,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80247650),
        .pos = { -250.0, 0.0, 50.0 },
        .flags = 0x00400D05,
        .init = N(script_Init_802478FC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301, 0x008C0301,
        },
        .tattle = 0x1A00B8,
    },
};

StaticNpc N(npcGroup_80247F1C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802476CC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_80247B04),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0xFFFFFFF1, 0x00000000, 0x0000016D, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFFF1, 0x00000000, 0x0000016D, 0x00000078, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_8024810C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802476CC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_80247B04),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000040, 0x00000000, 0x00000113, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000040, 0x00000000, 0x00000113, 0x00000078, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_802482FC)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802476CC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_80247B04),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x00000091, 0x00000000, 0x0000016D, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000091, 0x00000000, 0x0000016D, 0x00000078, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

StaticNpc N(npcGroup_802484EC)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802476CC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F04,
        .init = N(script_Init_80247B04),
        .yaw = 270,
        .dropFlags = 0x80,
        .movement = { 0x000000E0, 0x00000000, 0x00000113, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x000000E0, 0x00000000, 0x00000113, 0x00000078, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x003B0001, 0x003B0002, 0x003B0003, 0x003B0003, 0x003B0001, 0x003B0001, 0x003B000C, 0x003B000C, 0x003B0015, 0x003B0012, 0x003B0011, 0x003B0010, 0x003B0005, 0x003B0001, 0x003B0001, 0x003B0001,
        },
    },
};

NpcGroupList N(npcGroupList_802486DC) = {
    NPC_GROUP(N(npcGroup_80247B3C), 0x00000000),
    NPC_GROUP(N(npcGroup_80247F1C), 0x120A0007),
    NPC_GROUP(N(npcGroup_8024810C), 0x120A0007),
    NPC_GROUP(N(npcGroup_802482FC), 0x120A0007),
    NPC_GROUP(N(npcGroup_802484EC), 0x120A0007),
    {},
};

s32 pad_008724[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80248730_DCCB00

// rodata: D_80248738_DCCB08

// rodata: D_80248740_DCCB10

// rodata: D_80248748_DCCB18

// rodata: D_80248750_DCCB20

// rodata: D_80248758_DCCB28

// rodata: D_80248760_DCCB30

// rodata: D_80248768_DCCB38

// rodata: jtbl_80248770_DCCB40

