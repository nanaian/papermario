#include "kkj_29.h"

s32 pad_000028[2];
s32 pad_00006C[1];
Script N(script_ExitSingleDoor_802400C0);
Script N(script_EnterSingleDoor_802401B4);
Script N(main);
s32 pad_00035C[1];
Script N(script_Init_802403E4);
Script N(script_Init_80240424);
Script N(script_Init_80240464);
s32 N(extraAnimationList_802404A4)[9];
s32 N(extraAnimationList_802404C8)[8];
s32 N(extraAnimationList_802404E8)[11];
StaticNpc N(npcGroup_80240514)[4];
NpcGroupList N(npcGroupList_80240CD4);
s32 pad_000CEC[1];
Script N(script_80240CF0);
Script N(script_80240DD0);
Script N(script_80240E58);
Script N(script_80240FA8);
Script N(script_DoRound);
Script N(script_802414E8);
Script N(script_80241590);
Script N(script_80241674);
Script N(script_80241758);
Script N(script_8024183C);
Script N(script_80241920);
Script N(script_80241A04);
Script N(script_80241E20);
Script N(script_80241FA8);
Script N(script_802422B8);
Script N(script_8024243C);
Script N(script_80242524);
Script N(script_8024268C);
Script N(script_80242A48);
Script N(script_80242C84);
s32 N(vectorList_80243274)[12];
s32 N(vectorList_802432A4)[12];
s32 N(vectorList_802432D4)[18];
s32 N(vectorList_8024331C)[12];
Script N(script_8024334C);
Script N(script_802433C4);
Script N(script_802435D0);
Script N(script_802437F4);
Script N(script_80243984);
Script N(script_80243A34);
Script N(script_80243AE4);
Script N(script_80243B80);
Script N(script_80243BE0);
Script N(script_80243C40);
s32 pad_005838[2];
const char D_80245840_B1A8F0[8]; // "jan_22"
const char D_80245848_B1A8F8[8]; // "kkj_10"

// text: func_80240000_B150B0

s32 pad_000028[] = {
    0x00000000, 0x00000000,
};

// text: func_MonitorA_B150E0

s32 pad_00006C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 325.0f, 0.0f, -30.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_ExitSingleDoor_802400C0) = SCRIPT({
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_80240000_B150B0();
    PlaySound(220);
    GotoMapSpecial(D_80245840_B1A8F0, 3, 12);
    sleep 100;
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 3;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80245848_B1A8F8, 2);
    sleep 100;
});

Script N(script_EnterSingleDoor_802401B4) = SCRIPT({
    if (SI_SAVE_VAR(0) == 38) {
        spawn N(script_80243C40);
    } else {
        SI_VAR(0) = 0;
        SI_VAR(2) = 3;
        SI_VAR(3) = -1;
        await EnterSingleDoor;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    if (SI_SAVE_VAR(0) == 38) {
        MakeNpcs(0, N(npcGroupList_80240CD4));
    }
    spawn N(script_80242A48);
    if (SI_SAVE_VAR(0) < 95) {
        FadeOutMusic(0, 500);
    }
    UseDoorSounds(0);
    bind N(entryList) to TriggerFlag_WALL_INTERACT 2;
    spawn N(script_EnterSingleDoor_802401B4);
});

s32 pad_00035C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240360) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x4B,
    .radius = 0x48,
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

NpcSettings N(npcSettings_8024038C) = {
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

NpcSettings N(npcSettings_802403B8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x24,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1B,
    .unk_2A = 0,
};

Script N(script_Init_802403E4) = SCRIPT({
    SetNpcPos(-1, 0, 0, 0xFFFFFFE7);
    SetNpcYaw(-1, 90);
});

Script N(script_Init_80240424) = SCRIPT({
    SetNpcPos(-1, 175, 0, 0xFFFFFFE7);
    SetNpcYaw(-1, 270);
});

Script N(script_Init_80240464) = SCRIPT({
    SetNpcAnimation(-1, 0x580003);
    SetNpcPos(-1, 0xFFFFFF74, 30, 0xFFFFFF74);
});

s32 N(extraAnimationList_802404A4)[] = {
    0x00800000, 0x00800002, 0x00800004, 0x00800006, 0x00800007, 0x00800008, 0x0080000D, 0x0080000B,
    0xFFFFFFFF,
};

s32 N(extraAnimationList_802404C8)[] = {
    0x005A0001, 0x005A0003, 0x005A0006, 0x005A0008, 0x005A0009, 0x005A000B, 0x005A0013, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802404E8)[] = {
    0x00580000, 0x00580001, 0x00580003, 0x00580004, 0x00580008, 0x00580017, 0x00580019, 0x0058001A,
    0x00580012, 0x00580014, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80240514)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240360),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_802404A4),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_8024038C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x0000070D,
        .init = N(script_Init_80240424),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802404E8),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_8024038C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x0000070D,
        .init = N(script_Init_80240464),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_802404E8),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802403B8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x0000070D,
        .init = N(script_Init_802403E4),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x005A0002, 0x005A0004, 0x005A0007, 0x005A0007, 0x005A0002, 0x005A0002, 0x005A000E, 0x005A000E, 0x005A0018, 0x005A0019, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002, 0x005A0002,
        },
        .extraAnimations = N(extraAnimationList_802404C8),
    },
};

NpcGroupList N(npcGroupList_80240CD4) = {
    NPC_GROUP(N(npcGroup_80240514), 0x00000000),
    {},
};

s32 pad_000CEC[] = {
    0x00000000,
};

Script N(script_80240CF0) = SCRIPT({
    SetNpcAnimation(SI_VAR(1), 0x58001B);
    SI_VAR(10) = SI_VAR(0);
    GetNpcPos(SI_VAR(1), SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SI_VAR(6) += 40;
    MakeItemEntity(SI_VAR(10), SI_VAR(5), SI_VAR(6), SI_VAR(7), 1, 0);
    SI_VAR(11) = SI_VAR(0);
    PlaySound(210);
    ShowMessageAtScreenPos(SI_VAR(2), 160, 40);
    RemoveItemEntity(SI_VAR(11));
    SetNpcAnimation(SI_VAR(1), 0x580003);
});

Script N(script_80240DD0) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFEF7, 0, 0xFFFFFF74);
    SetPanTarget(0, 0xFFFFFEF7, 0, 0xFFFFFF74);
    SetCamDistance(0, 400.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
});

Script N(script_80240E58) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            if (SI_AREA_VAR(7) == 2) {
                SI_AREA_VAR(8) += 1;
            } else {
                if (SI_AREA_VAR(8) > 0) {
                    SI_AREA_VAR(8) -= 1;
                }
            }
        }
        == 1 {
            if (SI_AREA_VAR(7) == 2) {
                SI_AREA_VAR(9) += 1;
            } else {
                if (SI_AREA_VAR(9) > 0) {
                    SI_AREA_VAR(9) -= 1;
                }
            }
        }
        == 2 {
            if (SI_AREA_VAR(7) == 2) {
                SI_AREA_VAR(10) += 1;
            } else {
                if (SI_AREA_VAR(10) > 0) {
                    SI_AREA_VAR(10) -= 1;
                }
            }
        }
    }
});

Script N(script_80240FA8) = SCRIPT({
    PlaySound(142);
    func_MonitorA_B150E0();
    if (SI_VAR(0) == 0) {
        if (SI_AREA_VAR(8) <= SI_AREA_VAR(9)) {
            SI_AREA_VAR(6) = 0;
        } else {
            SI_VAR(0) = SI_AREA_VAR(8);
            SI_VAR(0) -= 1;
            if (SI_AREA_VAR(10) < SI_VAR(0)) {
                SI_AREA_VAR(6) = 2;
            } else {
                SI_AREA_VAR(6) = 0;
            }
        }
    } else {
        SI_AREA_VAR(6) = 1;
    }
    StopSound(142);
    SI_AREA_VAR(7) = 1;
    match SI_AREA_VAR(6) {
        == 0 {
            PlaySoundAtNpc(1, 141, 0);
            EndSpeech(3, 0x5A000B, 0x5A0003, 5);
            SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x1400FA);
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
        == 1 {
            PlaySoundAtPlayer(141, 0);
            EndSpeech(3, 0x5A000B, 0x5A0003, 5);
            SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x1400F9);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
        == 2 {
            PlaySoundAtNpc(2, 141, 0);
            EndSpeech(3, 0x5A000B, 0x5A0003, 5);
            SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x1400FB);
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        }
    }
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 17.0, -12.0);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_DoRound) = SCRIPT({
    PlaySound(140);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, SI_VAR(1));
    SI_VAR(0) = SI_VAR(2);
    await N(script_80240FA8);
    match SI_AREA_VAR(6) {
        == 0 {
            SpeakToPlayer(1, 0x580003, 0x580003, 5, SI_VAR(3));
            SI_VAR(0) = SI_VAR(5);
        }
        == 1 {
            ShowChoice(SI_VAR(4));
        }
        == 2 {
            SpeakToPlayer(2, 0x580003, 0x580003, 5, SI_VAR(3));
            SI_VAR(0) = SI_VAR(5);
        }
    }
    if (SI_VAR(0) == SI_VAR(5)) {
        PlaySound(540);
        PlaySound(138);
        SI_AREA_VAR(7) = 2;
        await N(script_80240E58);
        SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x140110);
    } else {
        PlaySound(541);
        PlaySound(139);
        SI_AREA_VAR(7) = 3;
        await N(script_80240E58);
        SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, SI_VAR(6));
    }
    sleep 30;
    SI_AREA_VAR(7) = 0;
    sleep 10;
    await N(script_80240DD0);
});

Script N(script_802414E8) = SCRIPT({
    SetTexPanner(13, 1);
    SetTexPanner(46, 1);
    SetTexPanner(79, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x8000;
        SetTexPanOffset(1, 0, SI_VAR(0), 0);
        sleep 3;
    }
});

Script N(script_80241590) = SCRIPT({
    SetTexPanner(14, 2);
    EnableTexPanning(14, 0);
    SetTexPanner(47, 2);
    EnableTexPanning(47, 0);
    SetTexPanner(80, 2);
    EnableTexPanning(80, 0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x8000;
        SetTexPanOffset(2, 0, SI_VAR(0), 0);
        sleep 3;
    }
});

Script N(script_80241674) = SCRIPT({
    SetTexPanner(15, 3);
    EnableTexPanning(15, 0);
    SetTexPanner(48, 3);
    EnableTexPanning(48, 0);
    SetTexPanner(81, 3);
    EnableTexPanning(81, 0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x4000;
        SetTexPanOffset(3, 0, SI_VAR(0), 0);
        sleep 4;
    }
});

Script N(script_80241758) = SCRIPT({
    SetTexPanner(16, 4);
    EnableTexPanning(16, 0);
    SetTexPanner(49, 4);
    EnableTexPanning(49, 0);
    SetTexPanner(82, 4);
    EnableTexPanning(82, 0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x4000;
        SetTexPanOffset(4, 0, SI_VAR(0), 0);
        sleep 2;
    }
});

Script N(script_8024183C) = SCRIPT({
    SetTexPanner(21, 5);
    EnableTexPanning(21, 0);
    SetTexPanner(54, 5);
    EnableTexPanning(54, 0);
    SetTexPanner(87, 5);
    EnableTexPanning(87, 0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0x8000;
        SetTexPanOffset(5, 0, SI_VAR(0), 0);
        sleep 4;
    }
});

Script N(script_80241920) = SCRIPT({
    SetTexPanner(18, 6);
    EnableTexPanning(18, 0);
    SetTexPanner(51, 6);
    EnableTexPanning(51, 0);
    SetTexPanner(84, 6);
    EnableTexPanning(84, 0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0xFFFFB800;
        SetTexPanOffset(6, 0, SI_VAR(0), 0);
        sleep 3;
    }
});

Script N(script_80241A04) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            SetNpcAnimation(1, 0x580003);
            EnableTexPanning(16, 0);
            EnableTexPanning(21, 0);
            EnableModel(21, 0);
            EnableModel(20, 1);
            EnableTexPanning(18, 0);
            EnableModel(18, 0);
            EnableModel(17, 1);
            EnableTexPanning(14, 0);
            EnableTexPanning(15, 0);
            EnableModel(27, 0);
            EnableModel(28, 0);
            EnableModel(26, 1);
            SI_VAR(2) = 25;
        }
        == 1 {
            SetNpcAnimation(0xFFFFFFFC, 0x200001);
            SetPlayerAnimation(0xC0014);
            EnableTexPanning(49, 0);
            EnableTexPanning(54, 0);
            EnableModel(54, 0);
            EnableModel(53, 1);
            EnableTexPanning(51, 0);
            EnableModel(51, 0);
            EnableModel(50, 1);
            EnableTexPanning(47, 0);
            EnableTexPanning(48, 0);
            EnableModel(61, 0);
            EnableModel(60, 0);
            EnableModel(59, 1);
            SI_VAR(2) = 58;
        }
        == 2 {
            SetNpcAnimation(2, 0x580003);
            EnableTexPanning(82, 0);
            EnableTexPanning(87, 0);
            EnableModel(87, 0);
            EnableModel(86, 1);
            EnableTexPanning(84, 0);
            EnableModel(84, 0);
            EnableModel(83, 1);
            EnableTexPanning(80, 0);
            EnableTexPanning(81, 0);
            EnableModel(93, 0);
            EnableModel(94, 0);
            EnableModel(92, 1);
            SI_VAR(2) = 91;
        }
    }
    MakeLerp(90, 0, 4, 0);
    loop {
        UpdateLerp();
        RotateGroup(SI_VAR(2), SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80241E20) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            SI_VAR(0) = 14;
            SI_VAR(1) = 15;
            SI_VAR(2) = 25;
        }
        == 1 {
            SI_VAR(0) = 47;
            SI_VAR(1) = 48;
            SI_VAR(2) = 58;
        }
        == 2 {
            SI_VAR(0) = 80;
            SI_VAR(1) = 81;
            SI_VAR(2) = 91;
        }
    }
    EnableTexPanning(SI_VAR(0), 1);
    EnableTexPanning(SI_VAR(1), 1);
    MakeLerp(0, 90, 4, 0);
    loop {
        UpdateLerp();
        RotateGroup(SI_VAR(2), SI_VAR(0), 1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80241FA8) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            EnableTexPanning(16, 1);
            EnableModel(20, 0);
            EnableModel(21, 1);
            EnableTexPanning(21, 1);
            EnableModel(17, 0);
            EnableModel(18, 1);
            EnableTexPanning(18, 1);
            EnableModel(26, 0);
            EnableModel(27, 1);
            SetNpcAnimation(1, 0x580019);
        }
        == 1 {
            EnableTexPanning(49, 1);
            EnableModel(53, 0);
            EnableModel(54, 1);
            EnableTexPanning(54, 1);
            EnableModel(50, 0);
            EnableModel(51, 1);
            EnableTexPanning(51, 1);
            EnableModel(59, 0);
            EnableModel(61, 1);
            spawn {
                SetNpcAnimation(0xFFFFFFFC, 0x20000F);
                GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                loop 3 {
                    NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
                }
            }
            SetPlayerAnimation(0xC0016);
        }
        == 2 {
            EnableTexPanning(82, 1);
            EnableModel(86, 0);
            EnableModel(87, 1);
            EnableTexPanning(87, 1);
            EnableModel(83, 0);
            EnableModel(84, 1);
            EnableTexPanning(84, 1);
            EnableModel(92, 0);
            EnableModel(93, 1);
            SetNpcAnimation(2, 0x580019);
        }
    }
});

Script N(script_802422B8) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            EnableTexPanning(14, 0);
            EnableTexPanning(15, 0);
            EnableModel(26, 0);
            EnableModel(28, 1);
            SetNpcAnimation(1, 0x58001A);
        }
        == 1 {
            EnableTexPanning(47, 0);
            EnableTexPanning(48, 0);
            EnableModel(59, 0);
            EnableModel(60, 1);
            SetPlayerAnimation(0xC0017);
            SetNpcAnimation(0xFFFFFFFC, 0x200010);
        }
        == 2 {
            EnableTexPanning(80, 0);
            EnableTexPanning(81, 0);
            EnableModel(92, 0);
            EnableModel(94, 1);
            SetNpcAnimation(2, 0x58001A);
        }
    }
});

Script N(script_8024243C) = SCRIPT({
    SI_VAR(0) = 31;
    loop 10 {
        0x802C91A4(SI_VAR(0), 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 64;
    loop 10 {
        0x802C91A4(SI_VAR(0), 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 97;
    loop 10 {
        0x802C91A4(SI_VAR(0), 2);
        SI_VAR(0) += 1;
    }
});

Script N(script_80242524) = SCRIPT({
    match SI_AREA_VAR(6) {
        == 0 {
            SI_VAR(0) = 31;
            SI_VAR(1) = SI_AREA_VAR(8);
        }
        == 1 {
            SI_VAR(0) = 64;
            SI_VAR(1) = SI_AREA_VAR(9);
        }
        == 2 {
            SI_VAR(0) = 97;
            SI_VAR(1) = SI_AREA_VAR(10);
        }
    }
    SI_VAR(2) = 10;
    SI_VAR(2) -= SI_VAR(1);
    if (SI_VAR(1) != 0) {
        loop SI_VAR(1) {
            0x802C91A4(SI_VAR(0), 0);
            SI_VAR(0) += 1;
        }
    }
    if (SI_VAR(2) != 0) {
        loop SI_VAR(2) {
            0x802C91A4(SI_VAR(0), 2);
            SI_VAR(0) += 1;
        }
    }
});

Script N(script_8024268C) = SCRIPT({
    SI_VAR(0) = 0;
    SI_VAR(1) = 1;
    SI_VAR(2) = 2;
    SI_VAR(3) = 1;
    SI_VAR(4) = 0;
    loop {
        match SI_AREA_VAR(6) {
            == 0 {
                0x802C91A4(40, SI_VAR(4));
                0x802C91A4(39, SI_VAR(3));
                0x802C91A4(38, SI_VAR(2));
                0x802C91A4(37, SI_VAR(1));
                0x802C91A4(36, SI_VAR(0));
                0x802C91A4(35, SI_VAR(4));
                0x802C91A4(34, SI_VAR(3));
                0x802C91A4(33, SI_VAR(2));
                0x802C91A4(32, SI_VAR(1));
                0x802C91A4(31, SI_VAR(0));
            }
            == 1 {
                0x802C91A4(73, SI_VAR(4));
                0x802C91A4(72, SI_VAR(3));
                0x802C91A4(71, SI_VAR(2));
                0x802C91A4(70, SI_VAR(1));
                0x802C91A4(69, SI_VAR(0));
                0x802C91A4(68, SI_VAR(4));
                0x802C91A4(67, SI_VAR(3));
                0x802C91A4(66, SI_VAR(2));
                0x802C91A4(65, SI_VAR(1));
                0x802C91A4(64, SI_VAR(0));
            }
            == 2 {
                0x802C91A4(106, SI_VAR(4));
                0x802C91A4(105, SI_VAR(3));
                0x802C91A4(104, SI_VAR(2));
                0x802C91A4(103, SI_VAR(1));
                0x802C91A4(102, SI_VAR(0));
                0x802C91A4(101, SI_VAR(4));
                0x802C91A4(100, SI_VAR(3));
                0x802C91A4(99, SI_VAR(2));
                0x802C91A4(98, SI_VAR(1));
                0x802C91A4(97, SI_VAR(0));
            }
        }
        sleep 1;
        if (SI_AREA_VAR(7) == 0) {
            break;
        }
        if (SI_AREA_VAR(7) == 3) {
            break;
        }
        SI_VAR(5) = SI_VAR(4);
        SI_VAR(4) = SI_VAR(3);
        SI_VAR(3) = SI_VAR(2);
        SI_VAR(2) = SI_VAR(1);
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(0) = SI_VAR(5);
    }
    spawn N(script_80242524);
});

Script N(script_80242A48) = SCRIPT({
    spawn N(script_802414E8);
    spawn N(script_80241590);
    spawn N(script_80241674);
    spawn N(script_80241758);
    spawn N(script_8024183C);
    spawn N(script_80241920);
    EnableModel(18, 0);
    EnableModel(21, 0);
    EnableModel(27, 0);
    EnableModel(28, 0);
    EnableModel(51, 0);
    EnableModel(54, 0);
    EnableModel(60, 0);
    EnableModel(61, 0);
    EnableModel(84, 0);
    EnableModel(87, 0);
    EnableModel(93, 0);
    EnableModel(94, 0);
    spawn N(script_8024243C);
0:
    SI_VAR(0) = SI_AREA_VAR(7);
    loop {
        sleep 1;
        if (SI_VAR(0) != SI_AREA_VAR(7)) {
            break;
        }
    }
    match SI_AREA_VAR(7) {
        == 0 {
            await N(script_80241A04);
        }
        == 1 {
            spawn N(script_8024268C);
            await N(script_80241E20);
        }
        == 2 {
            await N(script_80241FA8);
        }
        == 3 {
            await N(script_802422B8);
        }
    }
    goto 0;
});

Script N(script_80242C84) = SCRIPT({
    SI_VAR(0) = 1;
    SI_VAR(1) = SI_AREA_VAR(8);
    match SI_AREA_VAR(9) {
        > SI_VAR(1) {
            SI_VAR(0) = 0xFFFFFFFE;
            SI_VAR(1) = SI_AREA_VAR(9);
        }
        == SI_VAR(1) {
            SI_VAR(0) = 3;
        }
    }
    match SI_AREA_VAR(10) {
        > SI_VAR(1) {
            SI_VAR(0) = 2;
        }
        == SI_VAR(1) {
            SI_VAR(0) = 3;
        }
    }
    match SI_VAR(0) {
        == 1 {
            SI_VAR(1) = 0xFFFFFEE8;
            SI_VAR(2) = 0xFFFFFEC0;
        }
        == 0xFFFFFFFE {
            SI_VAR(1) = 0xFFFFFEF2;
            SI_VAR(2) = 0xFFFFFF1A;
        }
        == 2 {
            SI_VAR(1) = 0xFFFFFF4C;
            SI_VAR(2) = 0xFFFFFF74;
        }
        == 3 {
            SI_VAR(1) = 0xFFFFFEF2;
            SI_VAR(2) = 0xFFFFFF1A;
        }
    }
    SetNpcAnimation(3, 0x5A0006);
    SetNpcFlagBits(3, 512, 1);
    SetNpcSpeed(3, 3.0);
    NpcMoveTo(3, 0xFFFFFE70, 0, 0);
    NpcMoveTo(3, SI_VAR(1), 0, 0);
    if (SI_VAR(0) == 1) {
        NpcFaceNpc(3, SI_VAR(0), 7);
    }
    if (SI_VAR(0) != 3) {
        NpcMoveTo(3, SI_VAR(1), 0xFFFFFFC4, 0);
    }
    SetNpcAnimation(3, 0x5A0003);
    SetNpcFlagBits(3, 512, 0);
    UseSettingsFrom(0, SI_VAR(2), 30, 0xFFFFFF74);
    SetPanTarget(0, SI_VAR(2), 30, 0xFFFFFF74);
    SetCamDistance(0, 250.0);
    SetCamSpeed(0, 5.0);
    WaitForCam(0, 1.0);
    match SI_VAR(0) {
        == 1 {
            SpeakToNpc(3, 0x5A000B, 0x5A0003, 0, 1, 0x14011B);
            PlaySound(138);
            SetNpcAnimation(1, 0x580019);
            ContinueSpeech(3, 0x5A000B, 0x5A0003, 5, 0x14011C);
            sleep 10;
            SI_VAR(0) = 162;
            SI_VAR(1) = 1;
            SI_VAR(2) = 0x14011D;
            await N(script_80240CF0);
            sleep 10;
        }
        == 0xFFFFFFFE {
            SpeakToPlayer(3, 0x5A000B, 0x5A0003, 0, 0x140121);
            PlaySound(138);
            SetPlayerAnimation(0xC0009);
            sleep 1;
            ContinueSpeech(3, 0x5A000B, 0x5A0003, 0, 0x140122);
            sleep 10;
            ShowGotItem(162, 1, 2);
            SI_SAVE_FLAG(488) = 1;
            sleep 10;
        }
        == 2 {
            SpeakToNpc(3, 0x5A000B, 0x5A0003, 0, 2, 0x14011E);
            PlaySound(138);
            SetNpcAnimation(2, 0x580019);
            ContinueSpeech(3, 0x5A000B, 0x5A0003, 5, 0x14011F);
            sleep 10;
            SI_VAR(0) = 162;
            SI_VAR(1) = 2;
            SI_VAR(2) = 0x140120;
            await N(script_80240CF0);
            sleep 10;
        }
        == 3 {
            if (SI_AREA_VAR(9) == 0) {
                SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x140124);
            } else {
                SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x140123);
            }
            PlaySound(139);
        }
    }
});

s32 N(vectorList_80243274)[] = {
    0x43910000, 0x41C80000, 0xC1F00000, 0x439B0000, 0x428C0000, 0xC28C0000, 0x43960000, 0x420C0000,
    0xC2DC0000, 0x43910000, 0x42040000, 0xC2DC0000,
};

s32 N(vectorList_802432A4)[] = {
    0x43910000, 0x42040000, 0xC2DC0000, 0x43960000, 0x420C0000, 0xC2DC0000, 0x439B0000, 0x41200000,
    0xC28C0000, 0x43700000, 0x41C80000, 0xC1F00000,
};

s32 N(vectorList_802432D4)[] = {
    0x43700000, 0x41C80000, 0xC1F00000, 0x43660000, 0x41A00000, 0xC1F00000, 0x42200000, 0x42A00000,
    0xC2700000, 0xC30C0000, 0x43160000, 0xC2C80000, 0xC3340000, 0x43020000, 0xC2C80000, 0xC3430000,
    0x42A00000, 0xC2C80000,
};

s32 N(vectorList_8024331C)[] = {
    0xC32F0000, 0x42700000, 0xC2C80000, 0xC3200000, 0x43020000, 0xC2C80000, 0xC2F00000, 0x43160000,
    0xC2C80000, 0xC28C0000, 0x43480000, 0xC2C80000,
};

Script N(script_8024334C) = SCRIPT({
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_802433C4) = SCRIPT({
    SetNpcVar(3, 0, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 26;
        SI_VAR(2) -= 2;
        SetNpcAnimation(3, 0x5A0009);
        SetNpcSpeed(3, 5.0);
        NpcMoveTo(3, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(3, 0x5A0003);
        NpcFacePlayer(3, 5);
        SetNpcVar(3, 0, 0);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 26;
        SI_VAR(2) += 2;
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(1, 0x580001);
        NpcFacePlayer(1, 5);
    }
    loop {
        sleep 1;
        GetNpcVar(3, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
});

Script N(script_802435D0) = SCRIPT({
    spawn {
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        NpcMoveTo(3, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(3, 0x5A0013);
        SI_VAR(0) += 5;
        NpcMoveTo(3, SI_VAR(0), SI_VAR(2), 5);
    }
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(1, 0x580012);
        SI_VAR(0) -= 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
    }
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerAnimation(0xC0005);
    sleep 1;
    loop 4 {
        SI_VAR(1) += 2;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    SetPlayerAnimation(0xC0018);
    SI_VAR(0) += 10;
    loop 5 {
        SI_VAR(1) += 4;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_802437F4) = SCRIPT({
    InterpNpcYaw(1, 90, 3);
    sleep 10;
    spawn {
        loop {
            GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 32;
            SI_VAR(2) += 2;
            SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
            sleep 1;
        }
    }
    SetNpcVar(3, 0, 1);
    spawn {
        SetNpcAnimation(3, 0x5A0008);
        SetNpcSpeed(3, 5.0);
        NpcMoveTo(3, 404, 0xFFFFFFE6, 0);
        SetNpcVar(3, 0, 0);
    }
    spawn {
        SetNpcAnimation(1, 0x580014);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, 436, 0xFFFFFFEA, 0);
    }
});

Script N(script_80243984) = SCRIPT({
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 120, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(3, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80243A34) = SCRIPT({
    MakeLerp(120, 0, 10, 0);
    loop {
        UpdateLerp();
        RotateModel(3, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 450, 0);
});

Script N(script_80243AE4) = SCRIPT({
    SetNpcAnimation(0xFFFFFFFC, 0x20000E);
    GetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    LoadPath(20, N(vectorList_80243274), 4, 0);
    await N(script_8024334C);
    SetNpcAnimation(0xFFFFFFFC, 0x200002);
});

Script N(script_80243B80) = SCRIPT({
    loop {
        0x802D7E08(0, 1, 0xFFFFFFD3, 0, 0, 0, 0, 0, 20);
        sleep 20;
    }
});

Script N(script_80243BE0) = SCRIPT({
    loop {
        0x802D7E08(0xFFFFFFFC, 1, 0xFFFFFFD3, 1, 0, 0, 0, 0, 20);
        sleep 20;
    }
});

Script N(script_80243C40) = SCRIPT({
    SetCamLeadPlayer(0, 0);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    RotateModel(3, 120, 0, 1, 0);
    0x802D1270(250, 0xFFFFFFE2, 2.0);
    await N(script_80243A34);
    DisablePartnerAI(0);
    spawn N(script_80243AE4);
    spawn {
        SetPlayerAnimation(0xC0005);
        sleep 60;
        SetPlayerAnimation(0xA0001);
    }
    sleep 20;
    PlaySoundAtNpc(1, 611, 0);
    ShowEmote(1, 2, 0xFFFFFFD3, 15, 1, 0, 0, 0, 0);
    sleep 20;
    InterpNpcYaw(1, 90, 5);
    sleep 10;
    SetNpcAnimation(1, 0x580017);
    NpcJump0(1, 175, 0, 0xFFFFFFE7, 10);
    SetNpcAnimation(1, 0x580001);
    SpeakToPlayer(1, 0x580008, 0x580001, 0, 0x1400EF);
    SetNpcAnimation(3, 0x5A0009);
    SetNpcSpeed(3, 5.0);
    NpcMoveTo(3, 130, 0xFFFFFFE7, 0);
    SetNpcAnimation(3, 0x5A0003);
    UseSettingsFrom(0, 190, 0, 0xFFFFFFE7);
    SetPanTarget(0, 190, 0, 0xFFFFFFE7);
    SetCamDistance(0, 275.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 5.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToNpc(3, 0x5A000B, 0x5A0003, 0, 1, 0x1400F0);
    InterpNpcYaw(1, 270, 0);
    SpeakToNpc(1, 0x580008, 0x580001, 0, 3, 0x1400F1);
    SetNpcAnimation(3, 0x5A0006);
    SetNpcSpeed(3, 2.0);
    NpcMoveTo(3, 130, 0, 0);
    SetNpcAnimation(3, 0x5A0003);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 0, 0x1400F2);
    InterpNpcYaw(1, 90, 5);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 40;
    SetNpcAnimation(1, 0x580004);
    SetNpcSpeed(1, 2.0);
    NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 0);
    SpeakToPlayer(1, 0x580008, 0x580001, 0, 0x1400F3);
    spawn {
        0x802D1270(0, 0xFFFFFFE7, 2.0);
        SetPlayerAnimation(0xC0014);
        SetPlayerPos(0xFFFFFF1A, 23, 0xFFFFFF74);
    }
    spawn {
        NpcMoveTo(1, 0, 0xFFFFFFE7, 0);
        SetNpcAnimation(1, 0x580003);
        SetNpcPos(1, 0xFFFFFEC0, 30, 0xFFFFFF74);
        SetNpcYaw(1, 90);
    }
    spawn {
        SetNpcAnimation(3, 0x5A0006);
        NpcMoveTo(3, 0, 0xFFFFFFE7, 0);
        SetNpcAnimation(3, 0x5A0003);
        SetNpcPos(3, 0xFFFFFF1A, 0, 0);
        SetNpcYaw(3, 90);
    }
    sleep 60;
    LoadPath(50, N(vectorList_802432A4), 4, 0);
    await N(script_8024334C);
    SI_VAR(10) = spawn N(script_80243BE0);
    SpeakToPlayer(0xFFFFFFFC, 0x20000C, 0x20000C, 5, 0x1400F4);
    kill SI_VAR(10);
    UseSettingsFrom(0, 0xFFFFFF1A, 0, 0xFFFFFF74);
    SetPanTarget(0, 0xFFFFFF1A, 0, 0xFFFFFF74);
    SetCamSpeed(0, 0.80078125);
    PanToTarget(0, 0, 1);
    SetNpcAnimation(0xFFFFFFFC, 0x200008);
    LoadPath(100, N(vectorList_802432D4), 6, 0);
    await N(script_8024334C);
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    sleep 30;
    SetMusicTrack(0, 119, 0, 8);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x1400F5);
    PlaySound(138);
    sleep 10;
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x1400F6);
    PlaySound(138);
    SetPlayerAnimation(0xC0011);
    PlaySoundAtPlayer(611, 0);
    ShowEmote(0, 2, 45, 13, 0, 0, 0, 0, 0);
    sleep 13;
    PlaySoundAtPlayer(611, 0);
    ShowEmote(0, 2, 0xFFFFFFD3, 13, 0, 0, 0, 0, 0);
    sleep 13;
    PlaySoundAtPlayer(611, 0);
    ShowEmote(0, 2, 45, 13, 0, 0, 0, 0, 0);
    sleep 10;
    SetPlayerAnimation(0xC0014);
    SetNpcAnimation(3, 0x5A0006);
    SetNpcFlagBits(3, 512, 1);
    NpcMoveTo(3, 0xFFFFFE75, 0, 0);
    InterpNpcYaw(3, 90, 7);
    NpcMoveTo(3, 0xFFFFFE75, 0xFFFFFFE2, 0);
    SetNpcFlagBits(3, 512, 0);
    SetNpcAnimation(3, 0x5A0003);
    sleep 10;
    UseSettingsFrom(0, 0xFFFFFE75, 10, 0xFFFFFFD8);
    SetPanTarget(0, 0xFFFFFE75, 10, 0xFFFFFFD8);
    SetCamDistance(0, 275.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamPosA(0, -370.0, 40.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetMusicTrack(0, 119, 1, 8);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x1400F8);
    await N(script_80240DD0);
    SI_AREA_VAR(8) = 0;
    SI_AREA_VAR(9) = 0;
    SI_AREA_VAR(10) = 0;
    SI_VAR(1) = 0x1400FC;
    SI_VAR(2) = 40;
    SI_VAR(3) = 0x1400FD;
    SI_VAR(4) = 0x1E002C;
    SI_VAR(5) = 1;
    SI_VAR(6) = 0x140111;
    await N(script_DoRound);
    SI_VAR(1) = 0x1400FE;
    SI_VAR(2) = 10;
    SI_VAR(3) = 0x1400FF;
    SI_VAR(4) = 0x1E002D;
    SI_VAR(5) = 0;
    SI_VAR(6) = 0x140112;
    await N(script_DoRound);
    SI_VAR(1) = 0x140100;
    SI_VAR(2) = 60;
    SI_VAR(3) = 0x140101;
    SI_VAR(4) = 0x1E002E;
    SI_VAR(5) = 2;
    SI_VAR(6) = 0x140113;
    await N(script_DoRound);
    SI_VAR(1) = 0x140102;
    SI_VAR(2) = 10;
    SI_VAR(3) = 0x140103;
    SI_VAR(4) = 0x1E002F;
    SI_VAR(5) = 0;
    SI_VAR(6) = 0x140114;
    await N(script_DoRound);
    SI_VAR(1) = 0x140104;
    SI_VAR(2) = 30;
    SI_VAR(3) = 0x140105;
    SI_VAR(4) = 0x1E0030;
    SI_VAR(5) = 2;
    SI_VAR(6) = 0x140115;
    await N(script_DoRound);
    SI_VAR(1) = 0x140106;
    SI_VAR(2) = 20;
    SI_VAR(3) = 0x140107;
    SI_VAR(4) = 0x1E0031;
    SI_VAR(5) = 0;
    SI_VAR(6) = 0x140116;
    await N(script_DoRound);
    SI_VAR(1) = 0x140108;
    SI_VAR(2) = 30;
    SI_VAR(3) = 0x140109;
    SI_VAR(4) = 0x1E0032;
    SI_VAR(5) = 1;
    SI_VAR(6) = 0x140117;
    await N(script_DoRound);
    SI_VAR(1) = 0x14010A;
    SI_VAR(2) = 60;
    SI_VAR(3) = 0x14010B;
    SI_VAR(4) = 0x1E0033;
    SI_VAR(5) = 1;
    SI_VAR(6) = 0x140118;
    await N(script_DoRound);
    SI_VAR(1) = 0x14010C;
    SI_VAR(2) = 60;
    SI_VAR(3) = 0x14010D;
    SI_VAR(4) = 0x1E0034;
    SI_VAR(5) = 0;
    SI_VAR(6) = 0x140119;
    await N(script_DoRound);
    SI_VAR(1) = 0x14010E;
    SI_VAR(2) = 30;
    SI_VAR(3) = 0x14010F;
    SI_VAR(4) = 0x1E0035;
    SI_VAR(5) = 0;
    SI_VAR(6) = 0x14011A;
    await N(script_DoRound);
    SetMusicTrack(0, 116, 0, 8);
    await N(script_80242C84);
    SetPanTarget(0, 0xFFFFFF1A, 0, 0);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -13.0);
    SetCamSpeed(0, 0.5);
    SetNpcAnimation(3, 0x5A0006);
    NpcMoveTo(3, 0xFFFFFF1A, 0, 0);
    InterpNpcYaw(3, 90, 0);
    SetNpcAnimation(3, 0x5A0003);
    SetMusicTrack(0, 119, 2, 8);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 0, 0x140125);
    SetNpcVar(3, 0, 1);
    spawn {
        sleep 20;
        DisablePlayerPhysics(0);
        PlayerMoveTo(0xFFFFFF47, 0xFFFFFF74, 20);
        PlayerMoveTo(0xFFFFFF47, 0, 70);
        DisablePlayerPhysics(1);
        SetNpcVar(3, 0, 0);
    }
    spawn {
        sleep 20;
        NpcFlyTo(0xFFFFFFFC, 0xFFFFFF60, 50, 0, 90, 0, 0);
    }
    spawn {
        sleep 15;
        SetNpcAnimation(1, 0x580004);
        SetNpcFlagBits(1, 512, 1);
        SetNpcSpeed(2, 2.0);
        NpcMoveTo(1, 0xFFFFFE70, 0xFFFFFF74, 0);
        SetNpcFlagBits(1, 512, 0);
        SetNpcAnimation(1, 0x580001);
    }
    spawn {
        sleep 10;
        SetNpcAnimation(2, 0x580004);
        SetNpcFlagBits(2, 512, 1);
        SetNpcSpeed(2, 2.0);
        NpcMoveTo(2, 0, 0xFFFFFF74, 0);
        SetNpcFlagBits(2, 512, 0);
        SetNpcPos(2, 0, 0xFFFFFC18, 0);
    }
    loop {
        sleep 1;
        GetNpcVar(3, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetPanTarget(0, 0xFFFFFF42, 0, 70);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    InterpPlayerYaw(270, 0);
    InterpNpcYaw(0xFFFFFFFC, 270, 0);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 0, 0x140126);
    ShowGotItem(109, 1, 0);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 0, 0x140127);
    sleep 10;
    SetMusicTrack(0, 102, 0, 8);
    UseSettingsFrom(0, 330, 0, 0);
    SetPanTarget(0, 330, 0, 0);
    SetCamDistance(0, 350.0);
    SetCamPitch(0, 17.0, -13.0);
    SetCamPosB(0, 250.0, 40.0);
    SetCamSpeed(0, 90.0);
    sleep 20;
    SetNpcPos(3, 0xFFFFFEA2, 0, 0);
    SetNpcPos(1, 0xFFFFFEBB, 0, 0xFFFFFFE2);
    SetNpcYaw(1, 90);
    spawn N(script_80243984);
    SetNpcPos(0, 410, 0, 0xFFFFFFE7);
    SetNpcSpeed(0, 2.0);
    SetNpcAnimation(0, 0x800004);
    NpcMoveTo(0, 250, 0xFFFFFFE7, 0);
    SetNpcAnimation(0, 0x800002);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 3, 0x140128);
    ContinueSpeech(0, 0x800007, 0x800002, 0, 0x140129);
    SetNpcVar(0, 1, 1);
    spawn {
        SetPlayerPos(0xFFFFFF47, 0, 0xFFFFFF9C);
        InterpPlayerYaw(90, 0);
        loop {
            sleep 1;
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 0xFFFFFFEC) {
                break;
            }
        }
        InterpPlayerYaw(270, 0);
        SI_VAR(10) = spawn N(script_80243B80);
        loop {
            sleep 1;
            GetNpcVar(0, 1, SI_VAR(0));
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        kill SI_VAR(10);
        sleep 10;
        InterpPlayerYaw(90, 7);
        0x802D1270(0xFFFFFF4C, 0xFFFFFFE8, 2.0);
        0x802D1270(0xFFFFFF88, 0xFFFFFFE8, 2.0);
    }
    spawn {
        SetNpcPos(0xFFFFFFFC, 0xFFFFFF51, 60, 0xFFFFFF9C);
        SetNpcYaw(0xFFFFFFFC, 90);
        loop {
            sleep 1;
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 0xFFFFFFF6) {
                break;
            }
        }
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        SI_VAR(10) = spawn N(script_80243BE0);
        loop {
            sleep 1;
            GetNpcVar(0, 1, SI_VAR(0));
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        kill SI_VAR(10);
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 0x200005);
        InterpNpcYaw(0xFFFFFFFC, 90, 5);
        LoadPath(50, N(vectorList_8024331C), 4, 0);
        await N(script_8024334C);
        SetNpcAnimation(0xFFFFFFFC, 0x200001);
    }
    spawn {
        sleep 10;
        SetPanTarget(0, 0xFFFFFED4, 0, 0);
        SetCamDistance(0, 300.0);
    }
    SetNpcSpeed(0, 3.75);
    SetNpcAnimation(0, 0x800004);
    NpcMoveTo(0, 0xFFFFFEFC, 0, 0);
    SetNpcAnimation(0, 0x800002);
    SetNpcVar(0, 0, 0);
    SetNpcVar(0, 1, 0);
    sleep 10;
    loop 2 {
        SetNpcAnimation(0, 0x800006);
        sleep 10;
        SetNpcAnimation(0, 0x800002);
        sleep 3;
        SetNpcAnimation(3, 0x5A000B);
        sleep 10;
        SetNpcAnimation(3, 0x5A0003);
        sleep 3;
    }
    sleep 10;
    SpeakToNpc(0, 0x800006, 0x800002, 0, 3, 0x14012A);
    InterpNpcYaw(0, 90, 5);
    SetPanTarget(0, 0xFFFFFF42, 0, 0);
    SetCamSpeed(0, 3.0);
    WaitForCam(0, 1.0);
    sleep 10;
    spawn {
        sleep 10;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPlayerJumpscale(1.0);
        PlayerJump1(SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
        InterpPlayerYaw(270, 5);
    }
    spawn {
        SetNpcAnimation(0, 0x80000D);
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    }
    SpeakToPlayer(0, 0x80000D, 0x80000D, 5, 0x14012B);
    SetNpcAnimation(0, 0x800002);
    EndSpeech(0, 0x800006, 0x800002, 5);
    SpeakToPlayer(1, 0x580008, 0x580001, 5, 0x14012C);
    await N(script_802433C4);
    SpeakToPlayer(3, 0x5A000B, 0x5A0003, 5, 0x14012D);
    await N(script_802435D0);
    SpeakToPlayer(0xFFFFFFFE, 0xC0018, 0xC0018, 5, 0x14012E);
    await N(script_802437F4);
    sleep 30;
    FadeOutMusic(0, 1000);
    await N(script_ExitSingleDoor_802400C0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_005838[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80245840_B1A8F0

// rodata: D_80245848_B1A8F8
