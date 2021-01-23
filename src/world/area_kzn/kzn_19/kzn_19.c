#include "kzn_19.h"

s32 pad_001D24[3];
Script N(script_80241DB0);
s32 pad_001E84[3];
Script N(script_UpdateTexturePan_80241E90);
Script N(script_80241F2C);
Script N(script_80242048);
Script N(script_80242164);
Script N(script_ExitWalk_8024263C);
Script N(script_ExitWalk_80242698);
Script N(script_ExitWalk_802426F4);
Script N(script_80242750);
Script N(script_802427B4);
Script N(script_80242AD0);
Script N(main);
s32 pad_002F5C[1];
s32 unk_missing_80242FB8[22];
s32 pad_00303C[1];
s32 N(unk_80243040)[11];
s32 N(unk_8024306C)[11];
s32 N(unk_80243098)[11];
s32 N(unk_802430C4)[11];
s32 N(unk_802430F0)[11];
s32 N(unk_8024311C)[11];
s32 N(unk_80243148)[11];
s32 N(unk_80243174)[11];
s32 N(unk_802431A0)[11];
s32 N(unk_802431CC)[11];
s32 N(unk_802431F8)[12];
s32 N(unk_80243228)[11];
s32 N(unk_80243254)[11];
s32 N(unk_80243280)[11];
s32 N(unk_802432AC)[11];
s32 N(unk_802432D8)[11];
s32 N(unk_80243304)[11];
s32 N(unk_80243330)[11];
s32 N(unk_8024335C)[11];
s32 N(unk_80243388)[10];
s32 N(unk_802433B0)[11];
s32 N(unk_802433DC)[11];
s32 N(unk_80243408)[11];
s32 N(unk_80243434)[11];
s32 N(unk_80243460)[11];
s32 N(unk_8024348C)[11];
s32 N(unk_802434B8)[8];
s32 N(intTable_802434D8)[256];
s32 N(intTable_802438D8)[128];
s32 N(displayList_80243AD8)[56];
s32 N(unk_80243BB8)[111];
s32 N(unk_80243D74)[1];
Script N(script_80243D78);
Script N(script_80243DA8);
s32 N(unk_80243DD8)[1];
s32 N(unk_80243DDC)[1];
Script N(script_80243DE0);
Script N(script_80243F24);
Script N(script_80243F74);
Script N(script_80243FF4);
Script N(script_80244318);
Script N(script_80244388);
s32 N(unk_80244680)[2];
Script N(script_80244688);
Script N(script_802446D8);
Script N(script_Idle_8024473C);
Script N(script_Idle_802448BC);
Script N(script_Interact_80244B1C);
Script N(script_Init_80244B78);
s32 N(vectorList_80244C3C)[15];
Script N(script_80244C78);
Script N(script_80245010);
Script N(script_8024522C);
Script N(script_802452E8);
Script N(script_80245320);
Script N(script_Idle_802453D0);
Script N(script_80245BDC);
Script N(script_Defeat_80246FC8);
Script N(script_Init_802471F0);
Script N(script_Defeat_8024733C);
Script N(script_Init_80247394);
StaticNpc N(npcGroup_802473F4)[1];
StaticNpc N(npcGroup_802475E4)[1];
s32 N(extraAnimationList_802477D4)[3];
s32 N(extraAnimationList_802477E0)[2];
StaticNpc N(npcGroup_802477E8)[3];
NpcGroupList N(npcGroupList_80247DB8);
NpcGroupList N(npcGroupList_80247DDC);
s32 pad_007DF4[3];
Script N(script_80247E00);
Script N(script_80247FDC);
Script N(script_80248068);
s32 pad_0082B8[2];
Script N(script_MakeEntities);
const char D_80248354_C95F04[8]; // "kmr_23"
const char D_8024835C_C95F0C[8]; // "kzn_18"
const char D_80248364_C95F14[8]; // "kzn_20"
s32 pad_00836C[1];
s32 pad_008378[2];

// text: func_80240000_C8DBB0

// text: func_80240124_C8DCD4

// text: func_8024030C_C8DEBC

// text: func_80240358_C8DF08

// text: func_802404B8_C8E068

// text: func_802408C8_C8E478

// text: func_80240908_C8E4B8

// text: func_80240A14_C8E5C4

// text: func_80240B00_C8E6B0

// text: func_80240BD4_C8E784

// text: func_80240CD8_C8E888

// text: func_80240DA4_C8E954

// text: func_80240E2C_C8E9DC

// text: func_802413C0_C8EF70

// text: func_802413FC_C8EFAC

// text: func_8024140C_C8EFBC

// text: func_80241468_C8F018

// text: func_8024151C_C8F0CC

// text: func_80241580_C8F130

// text: func_802415DC_C8F18C

// text: func_802417AC_C8F35C

// text: func_80241800_C8F3B0

// text: func_80241838_C8F3E8

// text: func_802418D4_C8F484

// text: func_802419C4_C8F574

// text: func_80241B50_C8F700

// text: func_80241B94_C8F744

// text: func_80241BC0_C8F770

s32 pad_001D24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -435.0f, 250.0f, -350.0f, 90.0f },
    { -490.0f, 25.0f, -30.0f, 90.0f },
    { 440.0f, 25.0f, -50.0f, 270.0f },
    { 440.0f, 25.0f, -50.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190111,
};

Script N(script_80241DB0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 35 {
            GetEntryID(SI_VAR(0));
            if (SI_VAR(0) == 1) {
                FadeOutMusic(0, 500);
                PlayAmbientSounds(4);
                return;
            }
        }
    }
    >= 36 {
        PlaySound(0x8000006B);
    }
}
SetMusicTrack(0, 41, 0, 8);
PlayAmbientSounds(4);
});

s32 pad_001E84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80241E90) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_C8DBB0();
                    return;
                }
            }
        }
    }
    func_80240124_C8DCD4();
});

Script N(script_80241F2C) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80241E90);
    }
});

Script N(script_80242048) = SCRIPT({
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
        spawn N(script_UpdateTexturePan_80241E90);
    }
});

Script N(script_80242164) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 34 {
            SI_VAR(0) = 0;
            if (SI_MAP_VAR(10) == 0) {
                return;
            }
            SI_SAVE_VAR(0) = 35;
        }
        == 35 {
            GetEntryID(SI_VAR(0));
            if (SI_VAR(0) == 3) {
                return;
            }
            SI_VAR(0) = 1;
        }
        else {
            return;
        }
    }
    if (SI_VAR(0) == 0) {
        DisablePlayerInput(1);
        UseSettingsFrom(0, 185, 110, 0xFFFFFFE2);
        SetCamSpeed(0, 0.4404296875);
        SetPanTarget(0, 185, 55, 0xFFFFFFE2);
        GetCamDistance(0, SI_VAR(1));
        SI_VAR(1) -= 100;
        SetCamDistance(0, SI_VAR(1));
        if (10000 != 10000) {
            GetCamPitch(0, SI_VAR(2), SI_VAR(3));
            SetCamPitch(0, SI_VAR(2), 10000);
        }
        PanToTarget(0, 0, 1);
        func_80240358_C8DF08(4, 180, 304, 15, 0xFFFFFFCA, 185, 110, 0xFFFFFFE2, 55, 25);
        spawn {
            func_802404B8_C8E068();
        }
        spawn {
            sleep 1;
            PlaySound(0x80000067);
            func_8024030C_C8DEBC();
            StopSound(0x80000067);
            PlaySoundAt(178, 0, 185, 110, 0xFFFFFFE2);
        }
        spawn {
            sleep 45;
            SetPlayerAnimation(0x1002A);
        }
        spawn {
            sleep 180;
            sleep 115;
            PlaySoundAt(311, 0, 185, 110, 0xFFFFFFE2);
        }
        func_802408C8_C8E478(1);
        spawn {
            sleep 80;
            SetPlayerAnimation(0x10002);
        }
        SI_VAR(1) += 100;
        SetCamDistance(0, SI_VAR(1));
        SetPanTarget(0, 185, 25, 0xFFFFFFE2);
        func_802408C8_C8E478(2);
        GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
        UseSettingsFrom(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SetCamSpeed(0, 1.0);
        SetPanTarget(0, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
    } else {
        func_80240908_C8E4B8(4, 185, 55, 0xFFFFFFE2, 25);
        spawn {
            func_80240A14_C8E5C4();
        }
        sleep 1;
    }
    func_802408C8_C8E478(3);
    PlaySoundAtPlayer(312, 0);
    DisablePlayerInput(1);
    GotoMapSpecial(D_80248354_C95F04, 4, 14);
    sleep 100;
});

Script N(script_ExitWalk_8024263C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_8024835C_C95F0C, 1);
    sleep 100;
});

Script N(script_ExitWalk_80242698) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_8024835C_C95F0C, 2);
    sleep 100;
});

Script N(script_ExitWalk_802426F4) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80248364_C95F14, 0);
    sleep 100;
});

Script N(script_80242750) = SCRIPT({
    bind N(script_ExitWalk_8024263C) to 0x80000 6;
    bind N(script_ExitWalk_80242698) to 0x80000 0;
    bind N(script_ExitWalk_802426F4) to 0x80000 3;
});

Script N(script_802427B4) = SCRIPT({
    group 0;
    SetTexPanner(50, 2);
    EnableTexPanning(37, 1);
    EnableTexPanning(26, 1);
    SetTexPanner(38, 14);
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
        spawn N(script_UpdateTexturePan_80241E90);
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
        spawn N(script_UpdateTexturePan_80241E90);
    }
    spawn {
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(13, 0, SI_VAR(0), 0);
            SI_VAR(0) += 0x8000;
            sleep 6;
        }
    }
    spawn {
        SI_VAR(0) = 0;
        loop {
            SetTexPanOffset(14, 0, SI_VAR(0), 0);
            SI_VAR(0) += 0x8000;
            sleep 4;
        }
    }
});

Script N(script_80242AD0) = SCRIPT({
    group 0;
    loop {
        MakeLerp(0, 180, 40, 12);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100.0;
            SI_VAR(0) -= 0.900390625;
            ScaleModel(50, 1, SI_VAR(0), 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        MakeLerp(180, 0, 40, 11);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100.0;
            SI_VAR(0) -= 0.900390625;
            ScaleModel(50, 1, SI_VAR(0), 1);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA000D);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        MakeNpcs(1, N(npcGroupList_80247DDC));
    } else {
        MakeNpcs(1, N(npcGroupList_80247DB8));
    }
    await N(script_MakeEntities);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        spawn {
            await N(script_80244C78);
            spawn N(script_80242750);
        }
    } else {
        SI_VAR(0) = N(script_80242750);
        spawn EnterWalk;
        sleep 1;
    }
    match SI_SAVE_VAR(0) {
        < 35 {
            EnableGroup(46, 0);
            EnableGroup(48, 0);
            EnableGroup(64, 0);
            ModifyColliderFlags(0, 44, 0x7FFFFE00);
            ModifyColliderFlags(0, 46, 0x7FFFFE00);
        }
        == 35 {
            EnableGroup(43, 0);
            EnableGroup(64, 0);
            ModifyColliderFlags(0, 41, 0x7FFFFE00);
            ModifyColliderFlags(0, 46, 0x7FFFFE00);
        }
        > 35 {
            EnableGroup(43, 0);
            EnableGroup(48, 0);
            ModifyColliderFlags(0, 41, 0x7FFFFE00);
        }
    }
    spawn N(script_802427B4);
    SI_VAR(0) = 34;
    spawn N(script_80241F2C);
    SI_VAR(0) = 35;
    spawn N(script_80242048);
    spawn N(script_80241DB0);
    spawn N(script_80242AD0);
    spawn N(script_80248068);
    spawn N(script_80242164);
});

s32 pad_002F5C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80242F60) = {
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

NpcSettings N(npcSettings_80242F8C) = {
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

s32 unk_missing_80242FB8[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

NpcSettings N(npcSettings_80243010) = {
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

s32 pad_00303C[] = {
    0x00000000,
};

s32 N(unk_80243040)[] = {
    N(unk_80243040), 0x00000000, 0x10460000, 0x42CC0000, 0x42C60000, 0xC1200000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_8024306C)[] = {
    N(unk_80243040), 0x00000000, 0x2B020000, 0x43090000, 0x42BC0000, 0xC1200000, N(unk_80243040), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243098)[] = {
    N(unk_80243040), 0x00000000, 0xEAD80000, 0x42FE0000, 0x42600000, 0xC1200000, N(unk_8024306C), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802430C4)[] = {
    N(unk_80243040), 0x00000000, 0xF1C80000, 0x42D40000, 0x41B80000, 0xC1200000, N(unk_80243098), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802430F0)[] = {
    N(unk_80243040), 0x00000000, 0x15550000, 0x42F40000, 0xC1500000, 0xC1200000, N(unk_802430C4), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_8024311C)[] = {
    N(unk_80243040), 0x00000000, 0x52350000, 0x42F00000, 0x42D80000, 0xC1300000, N(unk_802430F0), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243148)[] = {
    N(unk_80243040), 0x00000000, 0x0AEC0000, 0x430C0000, 0x42920000, 0xC1300000, N(unk_8024311C), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243174)[] = {
    N(unk_80243040), 0x00000000, 0xE0170000, 0x42E00000, 0x42280000, 0xC1300000, N(unk_80243148), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802431A0)[] = {
    N(unk_80243040), 0x00000000, 0x038E0000, 0x42DC0000, 0x40400000, 0xC1300000, N(unk_80243174), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802431CC)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, N(unk_802431A0),
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802431F8)[] = {
    N(unk_802431CC), N(unk_802431A0), N(unk_80243174), N(unk_80243148), N(unk_8024311C), N(unk_802430F0), N(unk_802430C4), N(unk_80243098),
    N(unk_8024306C), N(unk_80243040), 0x00000000, 0x00000000,
};

s32 N(unk_80243228)[] = {
    N(unk_80243228), 0x00000000, 0x32DC0000, 0x42780000, 0x42540000, 0xC1A00000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243254)[] = {
    N(unk_80243228), 0x00000000, 0x330B0000, 0x42C20000, 0x424C0000, 0xC1A00000, N(unk_80243228), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243280)[] = {
    N(unk_80243228), 0x00000000, 0xD8720000, 0x42960000, 0x41980000, 0xC1A00000, N(unk_80243254), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802432AC)[] = {
    N(unk_80243228), 0x00000000, 0x007A0000, 0x428A0000, 0xC1980000, 0xC1A00000, N(unk_80243280), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802432D8)[] = {
    N(unk_80243228), 0x00000000, 0x60570000, 0x42980000, 0x42780000, 0xC1A80000, N(unk_802432AC), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243304)[] = {
    N(unk_80243228), 0x00000000, 0x05BE0000, 0x42C00000, 0x41E00000, 0xC1A80000, N(unk_802432D8), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243330)[] = {
    N(unk_80243228), 0x00000000, 0xEB250000, 0x42860000, 0x00000000, 0xC1A80000, N(unk_80243304), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_8024335C)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, N(unk_80243330),
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243388)[] = {
    N(unk_8024335C), N(unk_80243330), N(unk_80243304), N(unk_802432D8), N(unk_802432AC), N(unk_80243280), N(unk_80243254), N(unk_80243228),
    0x00000000, 0x00000000,
};

s32 N(unk_802433B0)[] = {
    N(unk_802433B0), 0x00000000, 0x75710000, 0x43040000, 0xC0A00000, 0xC0A00000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802433DC)[] = {
    N(unk_802433B0), 0x00000000, 0xC7070000, 0x42C40000, 0x40800000, 0xC0A00000, N(unk_802433B0), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243408)[] = {
    N(unk_802433B0), 0x00000000, 0x59000000, 0x43010000, 0xC1D00000, 0xC0C00000, N(unk_802433DC), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243434)[] = {
    N(unk_802433B0), 0x00000000, 0x91CB0000, 0x42F00000, 0x41400000, 0xC0C00000, N(unk_80243408), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80243460)[] = {
    N(unk_802433B0), 0x00000000, 0xE3BC0000, 0x42AE0000, 0xC1500000, 0xC0C00000, N(unk_80243434), 0x00000000,
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_8024348C)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, N(unk_80243460),
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802434B8)[] = {
    N(unk_8024348C), N(unk_80243460), N(unk_80243434), N(unk_80243408), N(unk_802433DC), N(unk_802433B0), 0x00000000, 0x00000000,
};

s32 N(intTable_802434D8)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000001, 0x11000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000011, 0x21100000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000012, 0x22100000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000112, 0x22110000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000122, 0x22210000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00001122, 0x22211000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00001222, 0x22221000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x33333333, 0x33311222, 0x22221133, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333,
    0x33333333, 0x33312222, 0x22222133, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333,
    0x33333333, 0x33112222, 0x22222113, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444, 0x44444444,
    0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x31122222, 0x22222113, 0x33333333,
    0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33122222, 0x22222133, 0x33333333,
    0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0x33112222, 0x22221133, 0x33333333,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00012222, 0x22221000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00011222, 0x22211000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001222, 0x22210000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001122, 0x22110000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000122, 0x22100000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000112, 0x21100000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000011, 0x11000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(intTable_802438D8)[] = {
    0x014041C1, 0xE7390241, 0x044F0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
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

s32 N(displayList_80243AD8)[] = {
    0xE7000000, 0x00000000, 0xD7000002, 0xFFFFFFFF, 0xE3000A01, 0x00000000, 0xE3000C00, 0x00080000,
    0xE3000D01, 0x00000000, 0xE3000F00, 0x00000000, 0xE3001201, 0x00002000, 0xE3001402, 0x00000C00,
    0xE200001C, 0x00551238, 0xFC30FE61, 0xFFFFF3F9, 0xFA000000, 0xFFA0A000, 0xE3001001, 0x00008000,
    0xFD100000, N(intTable_802438D8), 0xE8000000, 0x00000000, 0xF5000100, 0x07000000, 0xE6000000, 0x00000000,
    0xF0000000, 0x0703C000, 0xE7000000, 0x00000000, 0xFD48001F, N(intTable_802434D8), 0xF5480800, 0x07094060,
    0xE6000000, 0x00000000, 0xF4000000, 0x0707E07C, 0xE7000000, 0x00000000, 0xF5400800, 0x00094060,
    0xF2000000, 0x000FC07C, 0xD9000000, 0x00000000, 0xD9FFFFFF, 0x00000005, 0xDF000000, 0x00000000,
};

s32 N(unk_80243BB8)[] = {
    0x007B6690, 0x007B70E0, 0x80234000, 0x007B5960, 0x007B6690, 0x80234000, 0x007C4F50, 0x007C7410,
    0x80234000, 0x007C7410, 0x007C7E50, 0x80234000, 0x007B70E0, 0x007B8030, 0x80234000, 0x007B8030,
    0x007B8D30, 0x80234000, 0x007B8D30, 0x007B97E0, 0x80234000, 0x007B97E0, 0x007BA280, 0x80234000,
    0x007BA280, 0x007BB050, 0x80234000, 0x007BB050, 0x007BBD80, 0x80234000, 0x007BBD80, 0x007BEDD0,
    0x80234000, 0x007BEDD0, 0x007C16C0, 0x80234000, 0x007C16C0, 0x007C3A00, 0x80234000, 0x007C3A00,
    0x007C44D0, 0x80234000, 0x007C44D0, 0x007C4F50, 0x80234000, 0x007C7E50, 0x007CA850, 0x80234000,
    0x007CA850, 0x007CD5F0, 0x80234000, 0x007CD5F0, 0x007CDB30, 0x80234000, 0x007CDB30, 0x007CEFF0,
    0x80234000, 0x007CEFF0, 0x007CFCC0, 0x80234000, 0x007CFCC0, 0x007D0860, 0x80234000, 0x007D0860,
    0x007D14E0, 0x80234000, 0x007D14E0, 0x007D2080, 0x80234000, 0x007D2080, 0x007D2960, 0x80234000,
    0x007D2960, 0x007D3260, 0x80234000, 0x007D3260, 0x007D5570, 0x80234000, 0x007D5570, 0x007D6F80,
    0x80234000, 0x007D6F80, 0x007D76B0, 0x80234000, 0x007D76B0, 0x007D8FF0, 0x80234000, 0x007D8FF0,
    0x007D96E0, 0x80234000, 0x007D96E0, 0x007D98E0, 0x80234000, 0x007D98E0, 0x007DA140, 0x80234000,
    0x007DA140, 0x007DC180, 0x80234000, 0x007DC180, 0x007DE970, 0x80234000, 0x007DE970, 0x007DF2B0,
    0x80234000, 0x007DF2B0, 0x007E03B0, 0x80234000, 0x007E03B0, 0x007E0E80, 0x80234000,
};

s32 N(unk_80243D74)[] = {
    0x00000000,
};

Script N(script_80243D78) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80243DA8) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80243DD8)[] = {
    0x00000000,
};

s32 N(unk_80243DDC)[] = {
    0x00000000,
};

Script N(script_80243DE0) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_802415DC_C8F18C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241800_C8F3B0(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80243F24) = {
    SI_CMD(ScriptOpcode_CALL, func_80241838_C8F3E8, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243DE0), 0x10, 0, 0x80248388, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802417AC_C8F35C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80243F74) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_802419C4_C8F574(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80243FF4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_802419C4_C8F574(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_80243F74);
            SetNpcAnimation(0xFFFFFFFC, 0x40002);
            GetAngleBetweenNPCs(SI_VAR(9), 0xFFFFFFFC, SI_VAR(11));
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            GetNpcPos(SI_VAR(9), SI_VAR(6), SI_VAR(7), SI_VAR(8));
            SetNpcFlagBits(0xFFFFFFFC, 256, 1);
            if (SI_VAR(11) <= 180) {
                SI_VAR(6) += 20;
            } else {
                SI_VAR(6) += 0xFFFFFFEC;
            }
            SI_VAR(7) += 10;
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            NpcJump1(0xFFFFFFFC, SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
            kill SI_VAR(10);
            RemoveItemEntity(SI_VAR(0));
            sleep 20;
            GetNpcYaw(0xFFFFFFFC, SI_VAR(10));
            SI_VAR(10) += 180;
            InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
            sleep 5;
            NpcJump1(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20);
            SetNpcAnimation(0xFFFFFFFC, 0x40001);
            NpcFaceNpc(0xFFFFFFFC, SI_VAR(9), 0);
            sleep 5;
            SetNpcFlagBits(0xFFFFFFFC, 256, 0);
            EnablePartnerAI();
            sleep 5;
        }
    }
    func_80241800_C8F3B0(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80244318) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80241838_C8F3E8, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243FF4), 0x10, 0, 0x80248388, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802417AC_C8F35C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80244388) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80241B50_C8F700();
    GetCurrentPartnerID(SI_VAR(0));
    FindKeyItem(SI_VAR(5), SI_VAR(1));
    if (SI_VAR(0) == 4) {
        if (SI_VAR(1) != -1) {
            DisablePartnerAI(0);
            PlayerFaceNpc(SI_VAR(2), 0);
            sleep 1;
            GetNpcPos(SI_VAR(2), SI_VAR(13), SI_VAR(0), SI_VAR(14));
            GetNpcPos(0xFFFFFFFC, SI_VAR(13), SI_VAR(14), SI_VAR(15));
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            SI_VAR(0) += 10;
            NpcJump1(0xFFFFFFFC, SI_VAR(13), SI_VAR(0), SI_VAR(15), 10);
            SpeakToNpc(0xFFFFFFFC, 0x40006, 0x40001, 0, SI_VAR(2), SI_VAR(7));
            EnablePartnerAI();
            await N(script_80244318);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                }
                else {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(9));
                    if (SI_VAR(10) != 0) {
                        SpeakToPlayer(SI_VAR(2), SI_VAR(3), SI_VAR(4), 0, SI_VAR(10));
                    }
                    EnablePartnerAI();
                    if (SI_VAR(6) != 0) {
                        SI_VAR(0) = SI_VAR(6);
                        SI_VAR(1) = 1;
                        await N(script_80243D78);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80241B94_C8F744();
});

s32 N(unk_80244680)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80244688) = SCRIPT({
    func_802418D4_C8F484(0, 0xB60008, 0xB60001, 84, 0, 0x1000E4, 0x1000E5, 0x1000E6, 0x1000E7, N(unk_80244680));
    await N(script_80244388);
});

Script N(script_802446D8) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80243D78);
        AddStarPieces(1);
    }
});

Script N(script_Idle_8024473C) = SCRIPT({
    if (SI_SAVE_FLAG(1327) == 0) {
    0:
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) < 300) {
            sleep 1;
            goto 0;
        }
        DisablePlayerInput(1);
        NpcFacePlayer(-1, 4);
        SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x100100);
        SI_SAVE_FLAG(1327) = 1;
        DisablePlayerInput(0);
        SetSelfVar(0, 0);
    5:
        InterpNpcYaw(-1, 90, 0);
        sleep 30;
        InterpNpcYaw(-1, 270, 0);
        sleep 30;
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            goto 5;
        }
    }
});

Script N(script_Idle_802448BC) = SCRIPT({
0:
    if (SI_MAP_VAR(10) == 0) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    sleep 60;
    SetNpcFlagBits(-1, 256, 1);
    SetNpcPos(-1, 70, 25, 60);
    SetNpcAnimation(-1, 0xB60007);
    SetNpcSpeed(-1, 4.0);
    NpcMoveTo(-1, 170, 0, 0);
    NpcMoveTo(-1, 280, 70, 0);
    SpeakToPlayer(-1, 0xB60007, 0xB60002, 0, 0x100107);
    UseSettingsFrom(0, 450, 25, 0xFFFFFFEC);
    SetPanTarget(0, 450, 25, 0xFFFFFFEC);
    SetCamSpeed(0, 1.5);
    PanToTarget(0, 0, 1);
    NpcMoveTo(-1, 535, 0xFFFFFFC4, 0);
    sleep 20;
    SetPanTarget(0, 304, 25, 0xFFFFFFDD);
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetNpcAux(2, 0);
    sleep 10;
    FadeOutMusic(0, 1500);
    spawn N(script_80242164);
    sleep 30;
    DisablePlayerInput(0);
});

Script N(script_Interact_80244B1C) = SCRIPT({
    SpeakToPlayer(-1, 0xB6000A, 0xB60003, 0, 0x100101);
    SetSelfVar(0, 1);
    await N(script_80244688);
    await N(script_802446D8);
});

Script N(script_Init_80244B78) = SCRIPT({
    if (SI_SAVE_VAR(0) < 35) {
        GetEntryID(SI_VAR(0));
        match SI_VAR(0) {
            == 0 {
                BindNpcIdle(-1, N(script_Idle_8024473C));
                BindNpcInteract(-1, N(script_Interact_80244B1C));
            }
            == 1 {
                BindNpcIdle(-1, N(script_Idle_802448BC));
            }
        }
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

s32 N(vectorList_80244C3C)[] = {
    0x437A0000, 0x42200000, 0xC20C0000, 0x43CD0000, 0x41F00000, 0x00000000, 0x43E60000, 0x42200000,
    0xC1F00000, 0x43FF0000, 0x42480000, 0xC2900000, 0x44070000, 0x42700000, 0xC2E60000,
};

Script N(script_80244C78) = SCRIPT({
    DisablePlayerInput(1);
    SetPlayerPos(185, 25, 0xFFFFFFDD);
    SetNpcPos(0xFFFFFFFC, 155, 25, 0xFFFFFFDD);
    SetNpcPos(1, 250, 40, 0xFFFFFFDD);
    UseSettingsFrom(0, 217, 25, 0xFFFFFFDD);
    SetPanTarget(0, 217, 25, 0xFFFFFFDD);
    SetCamDistance(0, 380);
    SetCamPitch(0, 12.0, -7.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 30;
    SI_AREA_FLAG(8) = 1;
    PlaySound(0x8000006B);
    loop {
        sleep 1;
        if (SI_AREA_FLAG(8) != 1) {
            break;
        }
    }
    SetPlayerAnimation(0x10002);
    InterpPlayerYaw(90, 0);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
    sleep 10;
    SpeakToPlayer(1, 0x160002, 0x160001, 0, 0x100109);
    sleep 10;
    SetPanTarget(0, 370, 25, 70);
    SetCamSpeed(0, 0.80078125);
    PanToTarget(0, 0, 1);
    InterpNpcYaw(1, 90, 0);
    LoadPath(45, N(vectorList_80244C3C), 5, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(1, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    sleep 15;
    ResetCam(0, 3.0);
    SI_SAVE_VAR(0) = 36;
    DisablePlayerInput(0);
});

Script N(script_80245010) = SCRIPT({
    spawn {
        func_80241BC0_C8F770(0, 15);
        PlayModelAnimation(0, gBackgroundImage);
        SetAnimModelPosition(0, 220, 20, 0xFFFFFFD8);
        func_80241BC0_C8F770(3, 36);
        PlayModelAnimation(3, 0x8020A000);
        SetAnimModelPosition(3, 220, 20, 0xFFFFFFD8);
        sleep 59;
        func_80241BC0_C8F770(0, 0);
        PlayModelAnimation(0, gBackgroundImage);
        func_80241BC0_C8F770(3, 34);
        PlayModelAnimation(3, 0x8020A000);
    }
    sleep 5;
    spawn {
        func_80241BC0_C8F770(1, 32);
        PlayModelAnimation(1, 0x80204000);
        SetAnimModelPosition(1, 220, 20, 0xFFFFFFD8);
        sleep 59;
        func_80241BC0_C8F770(1, 31);
        PlayModelAnimation(1, 0x80204000);
    }
    sleep 7;
    func_80241BC0_C8F770(2, 32);
    PlayModelAnimation(2, 0x80207000);
    SetAnimModelPosition(2, 270, 34, 0xFFFFFFEC);
    sleep 62;
    func_80241BC0_C8F770(2, 31);
    PlayModelAnimation(2, 0x80207000);
});

Script N(script_8024522C) = SCRIPT({
    func_80241BC0_C8F770(0, 0);
    PlayModelAnimation(0, gBackgroundImage);
    func_80241BC0_C8F770(1, 31);
    PlayModelAnimation(1, 0x80204000);
    func_80241BC0_C8F770(3, 34);
    PlayModelAnimation(3, 0x8020A000);
    sleep 10;
    func_80241BC0_C8F770(2, 31);
    PlayModelAnimation(2, 0x80207000);
});

Script N(script_802452E8) = SCRIPT({
    func_80241BC0_C8F770(0, 17);
    PlayModelAnimation(0, gBackgroundImage);
});

Script N(script_80245320) = SCRIPT({
    func_80241BC0_C8F770(0, 16);
    PlayModelAnimation(0, gBackgroundImage);
    func_80241BC0_C8F770(1, 33);
    PlayModelAnimation(1, 0x80204000);
    func_80241BC0_C8F770(2, 33);
    PlayModelAnimation(2, 0x80207000);
    func_80241BC0_C8F770(3, 35);
    PlayModelAnimation(3, 0x8020A000);
});

Script N(script_Idle_802453D0) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        if (SI_VAR(0) > 150) {
            break;
        }
    }
    DisablePlayerInput(1);
    SetMusicTrack(0, 87, 0, 8);
    LoadModelAnimation(0, N(unk_802431F8));
    func_80241BC0_C8F770(0, 0);
    PlayModelAnimation(0, gBackgroundImage);
    SetAnimModelPosition(0, 220, 0xFFFFFF9C, 0xFFFFFFD8);
    0x802CD418(0, 128, 1);
    LoadModelAnimation(1, N(unk_80243388));
    func_80241BC0_C8F770(1, 31);
    PlayModelAnimation(1, 0x80204000);
    SetAnimModelPosition(1, 220, 0xFFFFFF9C, 0xFFFFFFD8);
    0x802CD418(1, 128, 1);
    LoadModelAnimation(2, N(unk_80243388));
    func_80241BC0_C8F770(2, 31);
    PlayModelAnimation(2, 0x80207000);
    SetAnimModelPosition(2, 270, 0xFFFFFF9C, 0xFFFFFFEC);
    0x802CD418(2, 128, 1);
    LoadModelAnimation(3, N(unk_802434B8));
    func_80241BC0_C8F770(3, 34);
    PlayModelAnimation(3, 0x8020A000);
    SetAnimModelPosition(3, 220, 0xFFFFFF9C, 0xFFFFFFD8);
    0x802CD418(3, 128, 1);
    func_8024140C_C8EFBC();
    SetSelfVar(1, 1);
    InterpPlayerYaw(90, 0);
    spawn {
        sleep 15;
        UseSettingsFrom(0, 300, 25, 0xFFFFFFEC);
        SetPanTarget(0, 300, 25, 0xFFFFFFEC);
        SetCamDistance(0, 350.0);
        SetCamPitch(0, 15.0, -9.5);
        SetCamSpeed(0, 2.0);
        PanToTarget(0, 0, 1);
    }
    MakeLerp(0, 40, 80, 4);
    loop {
        UpdateLerp();
        TranslateModel(26, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    spawn {
        0x802D2B6C();
        SetPlayerSpeed(3.0);
        PlayerMoveTo(200, 0xFFFFFFE2, 0);
        InterpPlayerYaw(90, 0);
    }
    PlaySoundAt(965, 0, 330, 25, 0xFFFFFFCE);
    spawn N(script_80245010);
    sleep 59;
    spawn {
        MakeLerp(40, 0, 80, 4);
        loop {
            UpdateLerp();
            TranslateModel(26, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 40;
    UseSettingsFrom(0, 235, 25, 0xFFFFFFEC);
    SetPanTarget(0, 235, 25, 0xFFFFFFEC);
    SetCamDistance(0, 420.0);
    SetCamPitch(0, 10.0, -10.69921875);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn N(script_802452E8);
    SpeakToPlayer(-1, 0x79000E, 0x790003, 768, 0xFFFFFFE2, 30, 0x100102);
    spawn N(script_8024522C);
    sleep 10;
    EndSpeech(-1, 0x79000E, 0x790003, 256, 0xFFFFFFE2, 30);
    spawn N(script_802452E8);
    sleep 30;
    SpeakToPlayer(-1, 0x79000E, 0x790003, 768, 0xFFFFFFE2, 30, 0x100103);
    spawn N(script_8024522C);
    sleep 10;
    EndSpeech(-1, 0x79000E, 0x790003, 768, 0xFFFFFFE2, 30);
    spawn N(script_802452E8);
    sleep 10;
    EndSpeech(-1, 0x79000E, 0x790003, 768, 0xFFFFFFE2, 30);
    spawn N(script_8024522C);
    sleep 10;
    EndSpeech(-1, 0x79000E, 0x790003, 768, 0xFFFFFFE2, 30);
    parallel {
        SI_VAR(0) = 20;
        loop 3 {
            SetCamDistance(0, 250.0);
            SetCamSpeed(0, SI_VAR(0));
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SI_VAR(0) -= 2;
            SetCamDistance(0, 440.0);
            SetCamSpeed(0, SI_VAR(0));
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SI_VAR(0) -= 2;
        }
    }
    DisablePlayerInput(0);
    StartBossBattle(13);
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80245BDC) = {
    SI_CMD(ScriptOpcode_CALL, GetSelfVar, 0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_LOOP, 0),
        SI_CMD(ScriptOpcode_CALL, GetSelfVar, 1, SI_VAR(0)),
        SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_BREAK_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 10, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 10, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcRotation, 2, SI_VAR(0), 0, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_802413FC_C8EFAC),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 10, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 10, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(2), 90),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 0, SI_VAR(0), 0, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 0, 1, 1, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 1, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 9, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 9, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 2, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 3, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 4, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 5, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 6, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 7, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 0, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 0, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 0, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 0, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 0, 8, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcRotation, 3, SI_VAR(0), 0, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 1, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(2), 90),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 1, 0, SI_VAR(0), 0, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 1, 0, 1, 1, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(2), 2),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 1, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 1, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 1, 1, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 1, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 1, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 1, 2, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 1, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 1, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 1, 3, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 1, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 1, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 1, 4, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 1, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 1, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 1, 5, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 1, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 1, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 1, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 1, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 1, 6, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, SetNpcRotation, 4, SI_VAR(0), 0, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 2, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 8, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(2), 90),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 2, 0, SI_VAR(0), 0, SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 2, 0, 1, 1, 1),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_SUB, SI_VAR(2), 2),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 2, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 2, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 2, 1, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 2, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 7, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 2, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 2, 2, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 2, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 2, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 2, 3, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 2, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 2, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 2, 4, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 2, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 2, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 2, 5, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 2, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 2, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 2, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 2, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 2, 6, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 3, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 3, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 3, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 3, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 3, 0, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 3, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 3, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 3, 6, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 3, 1, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 3, 1, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 3, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 3, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 3, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 3, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 3, 2, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 3, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 3, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 3, 5, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 3, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 3, 3, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD7D8, 3, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240BD4_C8E784, 3, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, 0x802CD8F8, 3, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240CD8_C8E888, 3, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240DA4_C8E954, 3, 4, SI_FIXED(0.71484375), SI_FIXED(0.71484375), SI_FIXED(1.0)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Defeat_80246FC8) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SetEncounterStatusFlags(2, 1);
            SetMusicTrack(0, 41, 0, 8);
            SetPlayerPos(125, 25, 0xFFFFFFDD);
            SetNpcPos(0xFFFFFFFC, 100, 25, 0xFFFFFFDD);
            SetCamLeadPlayer(0, 0);
            UseSettingsFrom(0, 125, 25, 0xFFFFFFDD);
            SetPanTarget(0, 205, 25, 0xFFFFFFDD);
            SetCamDistance(0, 470);
            SetCamPitch(0, 16.0, -8.0);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            EnableGroup(46, 1);
            EnableGroup(48, 1);
            EnableGroup(43, 0);
            ModifyColliderFlags(1, 44, 0x7FFFFE00);
            ModifyColliderFlags(0, 41, 0x7FFFFE00);
            PlaySoundAt(966, 0, 330, 25, 0xFFFFFFCE);
            spawn N(script_80245320);
            sleep 1;
            SetNpcAux(-1, N(script_80245BDC));
            SI_MAP_VAR(10) = 1;
        }
        == 1 {}
        == 2 {
        }
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_Init_802471F0) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 35),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 2, 0x790003),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 3, 0x7B0003),
            SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 4, 0x7B0003),
            SI_CMD(ScriptOpcode_USE_FLAGS, 64),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 0, SI_VAR(0)),
            SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, SetSelfVar, 1, 0),
            SI_CMD(ScriptOpcode_CALL, BindNpcAux, -1, N(script_80245BDC)),
            SI_CMD(ScriptOpcode_CALL, BindNpcIdle, -1, N(script_Idle_802453D0)),
            SI_CMD(ScriptOpcode_CALL, BindNpcDefeat, -1, N(script_Defeat_80246FC8)),
            SI_CMD(ScriptOpcode_RETURN),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 5, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 0, 0xFFFFFC18, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Defeat_8024733C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {}
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80247394) = SCRIPT({
    if (SI_SAVE_VAR(0) < 35) {
        BindNpcDefeat(-1, N(script_Defeat_8024733C));
    } else {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    }
});

StaticNpc N(npcGroup_802473F4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242F60),
        .pos = { 380.0, 250.0, -330.0 },
        .flags = 0x00510509,
        .init = N(script_Init_80244B78),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_802475E4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80242F8C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400001,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160000, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001, 0x00160001,
        },
        .tattle = 0x1A000B,
    },
};

s32 N(extraAnimationList_802477D4)[] = {
    0x00790003, 0x0079000E, 0xFFFFFFFF,
};

s32 N(extraAnimationList_802477E0)[] = {
    0x007B0003, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802477E8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80243010),
        .pos = { 400.0, 25.0, -30.0 },
        .flags = 0x00040804,
        .init = N(script_Init_802471F0),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .animations = {
            0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003, 0x00790003,
        },
        .extraAnimations = N(extraAnimationList_802477D4),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80243010),
        .pos = { 400.0, 25.0, -30.0 },
        .flags = 0x00040005,
        .init = N(script_Init_80247394),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .animations = {
            0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003,
        },
        .extraAnimations = N(extraAnimationList_802477E0),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80243010),
        .pos = { 400.0, 25.0, -30.0 },
        .flags = 0x00040005,
        .init = N(script_Init_80247394),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .animations = {
            0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003, 0x007B0003,
        },
        .extraAnimations = N(extraAnimationList_802477E0),
    },
};

NpcGroupList N(npcGroupList_80247DB8) = {
    NPC_GROUP(N(npcGroup_802473F4), 0x00000000),
    NPC_GROUP(N(npcGroup_802477E8), 0x17000007),
    {},
};

NpcGroupList N(npcGroupList_80247DDC) = {
    NPC_GROUP(N(npcGroup_802475E4), 0x00000000),
    {},
};

s32 pad_007DF4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80247E00) = SCRIPT({
    EnableGroup(48, 0);
    EnableGroup(64, 1);
    ModifyColliderFlags(1, 46, 0x7FFFFE00);
    SI_VAR(0) = 0;
    spawn {
        loop 60 {
            SI_VAR(0) += 0.333984375;
            RotateModel(54, SI_VAR(0), 0, 0, -1);
            sleep 1;
        }
    }
    spawn {
        loop 60 {
            SI_VAR(0) += 0.5;
            RotateModel(56, SI_VAR(0), 0, 0, -1);
            sleep 1;
        }
    }
    spawn {
        loop 60 {
            SI_VAR(0) += 0.25;
            RotateModel(58, SI_VAR(0), 0, 0, -1);
            sleep 1;
        }
    }
    loop 120 {
        SI_VAR(0) -= 0.25;
        TranslateModel(62, 0, SI_VAR(0), 0);
        sleep 1;
    }
    SI_AREA_FLAG(8) = 0;
});

Script N(script_80247FDC) = SCRIPT({
    RotateModel(54, 20, 0, 0, -1);
    RotateModel(56, 30, 0, 0, -1);
    RotateModel(58, 15, 0, 0, -1);
    TranslateModel(62, 0, 0xFFFFFFE2, 0);
});

Script N(script_80248068) = SCRIPT({
    SI_AREA_FLAG(8) = 0;
    if (SI_SAVE_VAR(0) >= 39) {
        return;
    }
    if (SI_SAVE_VAR(0) < 36) {
        loop {
            sleep 1;
            if (SI_AREA_FLAG(8) != 0) {
                break;
            }
        }
        ShakeCam(0, 0, 5, 2.0);
        SetPanTarget(0, 170, 25, 0);
        SetCamSpeed(0, 0.5);
        PanToTarget(0, 0, 1);
        ShakeCam(0, 0, 25, 2.0);
        InterpPlayerYaw(270, 0);
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        SetPlayerAnimation(0x1002B);
        spawn N(script_80247E00);
        MakeLerp(200, 50, 75, 0);
        loop {
            UpdateLerp();
            SI_VAR(0) /= 100.0;
            ShakeCam(0, 0, 1, SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    } else {
        spawn N(script_80247FDC);
    }
    ModifyColliderFlags(0, 47, 0x7FFFFE00);
    loop {
        ShakeCam(0, 0, 5, 0.5);
    }
});

s32 pad_0082B8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 0xFFFFFF56, 310, 0xFFFFFEAC, 0, 140, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1336));
    MakeEntity(0x802EA564, 0xFFFFFFBA, 310, 0xFFFFFEAC, 0, 163, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1337));
});

// rodata: jtbl_80248340_C95EF0

// rodata: D_80248354_C95F04

// rodata: D_8024835C_C95F0C

// rodata: D_80248364_C95F14

s32 pad_00836C[] = {
    0x00000000,
};

// rodata: D_80248370_C95F20

s32 pad_008378[] = {
    0x00000000, 0x00000000,
};
