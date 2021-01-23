#include "nok_04.h"

s32 pad_000E84[3];
s32 pad_000F24[3];
Script N(script_80240F80);
Script N(script_80240FE8);
Script N(script_8024100C);
s32 pad_001048[2];
Script N(script_ExitWalk_80241050);
Script N(script_802410A0);
Script N(main);
s32 pad_0012B4[3];
Script N(script_802412C0);
Script N(script_80241328);
s32 N(unk_802413F8)[16];
s32 N(unk_80241438)[1];
s32 N(unk_8024143C)[1];
s32 N(intTable_80241440)[12];
Script N(script_80241470);
Script N(script_8024161C);
Script N(script_80241710);
s32 pad_001744[1];
s32 N(unk_80241748)[8];
s32 N(unk_80241768)[18];
Script N(script_802417B0);
Script N(script_802417F8);
Script N(script_80242500);
Script N(script_Idle_8024274C);
Script N(script_Idle_80242C5C);
Script N(script_80242CF4);
Script N(script_Defeat_80242E68);
Script N(script_80242F9C);
Script N(script_8024303C);
Script N(script_NpcAI_802430DC);
Script N(script_NpcAI_80243110);
Script N(script_Defeat_8024317C);
s32 N(unk_80243254)[1];
Script N(script_80243258);
s32 N(itemList_80243374)[2];
Script N(script_8024337C);
Script N(script_802433B8);
Script N(script_80244D0C);
Script N(script_80245858);
Script N(script_80245BD8);
Script N(script_Interact_80245CF8);
Script N(script_Init_80245D08);
Script N(script_Init_80245F18);
Script N(script_Init_80245F50);
Script N(script_Init_80245F88);
Script N(script_Init_80245FAC);
StaticNpc N(npcGroup_80246050)[6];
StaticNpc N(npcGroup_80246BF0)[1];
NpcGroupList N(npcGroupList_80246DE0);
s32 pad_006E04[3];
const char D_80246E10_9F4A00[8]; // "nok_03"
s32 pad_006E18[2];
s32 pad_006E38[2];
s32 N(unk_80246E40)[4];

// text: func_80240000_9EDBF0

// text: func_80240184_9EDD74

// text: func_80240314_9EDF04

// text: func_802403C0_9EDFB0

// text: func_802404D0_9EE0C0

// text: func_8024051C_9EE10C

// text: func_80240548_9EE138

// text: func_80240574_9EE164

// text: func_80240630_9EE220

// text: func_802406C4_9EE2B4

// text: func_80240814_9EE404

// text: func_80240E4C_9EEA3C

// text: func_80240E70_9EEA60

s32 pad_000E84[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240E90_9EEA80

s32 pad_000F24[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -336.0f, 0.0f, 356.0f, 45.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19004B,
};

Script N(script_80240F80) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFA4) {
        SetMusicTrack(0, 18, 0, 8);
    } else {
        SetMusicTrack(0, 19, 0, 8);
    }
});

Script N(script_80240FE8) = SCRIPT({
    func_802D5FF8(130, 0);
});

Script N(script_8024100C) = SCRIPT({
    FadeOutMusic(0, 500);
    sleep 15;
    func_802D5FD8();
});

s32 pad_001048[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80241050) = SCRIPT({
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80246E10_9F4A00, 1);
    sleep 100;
});

Script N(script_802410A0) = SCRIPT({
    bind N(script_ExitWalk_80241050) to 0x80000 12;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 33;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_FLAG(3) = 0;
    SI_AREA_FLAG(4) = 0;
    ModifyColliderFlags(0, 20, 0x7FFFFE00);
    MakeNpcs(0, N(npcGroupList_80246DE0));
    await N(script_802412C0);
    SI_VAR(0) = 0;
    bind N(script_80245BD8) to TriggerFlag_WALL_HAMMER 5;
    SI_VAR(0) = 1;
    bind N(script_80245BD8) to TriggerFlag_WALL_HAMMER 6;
    SI_VAR(0) = 2;
    bind N(script_80245BD8) to TriggerFlag_WALL_HAMMER 7;
    SI_VAR(0) = 3;
    bind N(script_80245BD8) to TriggerFlag_WALL_HAMMER 8;
    spawn N(script_80240F80);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    SI_VAR(0) = N(script_802410A0);
    spawn EnterWalk;
    sleep 1;
});

s32 pad_0012B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802412C0) = SCRIPT({

});

NpcSettings N(npcSettings_802412D0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x6,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802412FC) = {
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

Script N(script_80241328) = SCRIPT({
    GetNpcYaw(SI_VAR(4), SI_VAR(1));
    SI_VAR(2) = 30;
    if (SI_VAR(1) > 151) {
        if (SI_VAR(1) <= 331) {
            SI_VAR(2) = 0xFFFFFFE2;
        }
    }
    SI_VAR(0) = 0;
    loop 15 {
        SI_VAR(0) += SI_VAR(2);
        SetNpcRotation(SI_VAR(3), 0, 0, SI_VAR(0));
        sleep 1;
    }
});

s32 N(unk_802413F8)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80241438)[] = {
    0x00000000,
};

s32 N(unk_8024143C)[] = {
    0x00000000,
};

s32 N(intTable_80241440)[] = {
    0xFFFFFFAE, 0x00000065, 0x00000082, 0x00000026, 0x000000A4, 0x00000082, 0x0000009E, 0x00000087,
    0x0000009D, 0x00000119, 0x0000009C, 0x000000CA,
};

Script N(script_80241470) = SCRIPT({
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(3) = SI_VAR(1);
    SI_VAR(4) = 600;
    SI_VAR(4) /= 100;
    SI_VAR(4) += 27;
    RandInt(1, SI_VAR(5));
    SI_VAR(5) *= 20;
    SI_VAR(5) -= 10;
    SI_VAR(6) = 0;
    SI_VAR(8) = 5.0;
    MakeLerp(SI_VAR(5), 0, SI_VAR(4), 8);
0:
    UpdateLerp();
    SI_VAR(0) *= 0.40625;
    SI_VAR(6) += 1;
    SI_VAR(9) =f SI_VAR(8);
    SI_VAR(9) *= -1.0;
    func_80240184_9EDD74(SI_VAR(6), SI_VAR(7), SI_VAR(9), SI_VAR(8), 3, 0, 0);
    SI_VAR(8) *= 0.90625;
    TranslateModel(SI_VAR(2), SI_VAR(7), SI_VAR(0), 0);
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 0;
    }
});

Script N(script_8024161C) = SCRIPT({
    SI_VAR(2) = SI_VAR(0);
    SI_VAR(3) = SI_VAR(1);
    SI_VAR(4) = 600;
    SI_VAR(4) /= 100;
    SI_VAR(4) += 27;
    SI_VAR(0) = 5;
    loop SI_VAR(0) {
        TranslateModel(SI_VAR(2), SI_VAR(0), 0, 0);
        sleep 1;
        SI_VAR(1) = SI_VAR(0);
        SI_VAR(1) *= -1;
        TranslateModel(SI_VAR(2), SI_VAR(1), 0, 0);
        sleep 1;
    }
});

Script N(script_80241710) = SCRIPT({
    func_802CB008(0, 1, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_VAR(13));
});

s32 pad_001744[] = {
    0x00000000,
};

s32 N(unk_80241748)[] = {
    0xFFFE0000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00010000, 0x00000000, 0x02000000, 0xFFFFFFFF,
};

s32 N(unk_80241768)[] = {
    0xD7000000, 0xFFFFFFFF, 0xE7000000, 0x00000000, 0xE3000A01, 0x00000000, 0xFCFFFFFF, 0xFFFE793C,
    0xE3001201, 0x00000000, 0xE200001C, 0x00552078, 0xD9C0F9FB, 0x00000000, 0xD9FFFFFF, 0x00200005,
    0xDF000000, 0x00000000,
};

Script N(script_802417B0) = SCRIPT({
    PlaySoundAtNpc(0, 0xB0000017, 0);
    NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_VAR(13));
});

Script N(script_802417F8) = SCRIPT({
    PlayerFaceNpc(0, 0);
    ShowMessageAtScreenPos(0xC00BE, 160, 40);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamType(0, 1, 0);
    SetCamDistance(0, 0xFFFFFDAB);
    SetCamPitch(0, 10, 0xFFFFFFF5);
    SetCamPosA(0, 0, 707);
    SetCamPosB(0, 0, 0);
    SetCamPosC(0, 0, 0);
    SetPanTarget(0, 90, 0, 228);
    SetCamSpeed(0, 3);
    PanToTarget(0, 0, 1);
    sleep 60;
    SetPlayerAnimation(0x1002A);
    SetNpcJumpscale(0, 3);
    SetNpcJumpscale(1, 3);
    SetNpcJumpscale(3, 3);
    SetNpcJumpscale(4, 3);
    SetNpcJumpscale(5, 3);
    match SI_MAP_VAR(0) {
        == 0 {
            SI_VAR(14) = 10;
        }
        == 1 {
            SI_VAR(14) = 9;
        }
        == 2 {
            SI_VAR(14) = 8;
        }
    }
    RandInt(3, SI_VAR(0));
    SI_VAR(14) += SI_VAR(0);
    SI_VAR(6) = 0;
    SI_VAR(7) = 0;
    SI_VAR(8) = 0;
    SI_VAR(9) = 0;
    SI_VAR(15) = SI_MAP_VAR(1);
    loop SI_VAR(14) {
        SI_VAR(10) = SI_MAP_VAR(1);
        func_80240630_9EE220(SI_VAR(15), SI_MAP_VAR(1));
        match SI_VAR(15) {
            == 0 {
                SI_VAR(11) = 2;
                SI_VAR(12) = 3;
            }
            == 1 {
                if (SI_VAR(10) == 2) {
                    SI_VAR(11) = 0;
                    SI_VAR(12) = 3;
                } else {
                    SI_VAR(11) = 2;
                    SI_VAR(12) = 3;
                }
            }
            == 2 {
                if (SI_VAR(10) == 3) {
                    SI_VAR(11) = 0;
                    SI_VAR(12) = 1;
                } else {
                    SI_VAR(11) = 0;
                    SI_VAR(12) = 3;
                }
            }
            == 3 {
                SI_VAR(11) = 0;
                SI_VAR(12) = 1;
            }
            == 4 {
                if (SI_VAR(10) == 1) {
                    SI_VAR(11) = 0;
                    SI_VAR(12) = 3;
                } else {
                    SI_VAR(11) = 0;
                    SI_VAR(12) = 1;
                }
            }
            == 5 {
                if (SI_VAR(10) == 0) {
                    SI_VAR(11) = 2;
                    SI_VAR(12) = 3;
                } else {
                    SI_VAR(11) = 0;
                    SI_VAR(12) = 3;
                }
            }
        }
        RandInt(1, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SI_VAR(15) += -1;
        } else {
            SI_VAR(15) += 1;
        }
        if (SI_VAR(15) >= 6) {
            SI_VAR(15) = 0;
        }
        if (SI_VAR(15) < 0) {
            SI_VAR(15) = 5;
        }
        match SI_MAP_VAR(0) {
            == 0 {
                SI_VAR(13) = 15;
            }
            == 1 {
                SI_VAR(13) = 10;
            }
            == 2 {
                SI_VAR(13) = 6;
            }
        }
        SI_VAR(0) = 0x2B0005;
        RandInt(2, SI_VAR(1));
        SI_VAR(0) += SI_VAR(1);
        SetNpcAnimation(0, SI_VAR(0));
        SetNpcAnimation(3, SI_VAR(0));
        SetNpcAnimation(4, SI_VAR(0));
        SetNpcAnimation(5, SI_VAR(0));
        PlaySound(0xB0000017);
        spawn {
            func_80240574_9EE164(SI_MAP_VAR(1), SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
        }
        if (SI_MAP_VAR(1) != SI_VAR(10)) {
            spawn {
                func_80240574_9EE164(SI_MAP_VAR(1), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                func_80240574_9EE164(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                NpcJump0(3, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
            }
            SI_FLAG(0) = 0;
            if (SI_VAR(11) == 0) {
                if (SI_VAR(12) == 3) {
                    SI_FLAG(0) = 1;
                }
            }
            if (SI_FLAG(0) == 0) {
                spawn {
                    func_80240574_9EE164(SI_VAR(11), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    func_80240574_9EE164(SI_VAR(12), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    NpcJump0(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
                }
                spawn {
                    func_80240574_9EE164(SI_VAR(12), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    func_80240574_9EE164(SI_VAR(11), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    NpcJump0(5, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
                }
            } else {
                spawn {
                    func_80240574_9EE164(SI_VAR(11), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    func_80240574_9EE164(SI_VAR(11), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    NpcJump0(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
                }
                spawn {
                    func_80240574_9EE164(SI_VAR(12), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    SetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    func_80240574_9EE164(SI_VAR(12), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    NpcJump0(5, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
                }
            }
        } else {
            spawn {
                SI_VAR(10) += 1;
                SI_VAR(10) %= 4;
                func_80240574_9EE164(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                NpcJump0(3, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
            }
            spawn {
                SI_VAR(10) += 2;
                SI_VAR(10) %= 4;
                func_80240574_9EE164(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                NpcJump0(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
            }
            spawn {
                SI_VAR(10) += 3;
                SI_VAR(10) %= 4;
                func_80240574_9EE164(SI_VAR(10), SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                NpcJump0(5, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
            }
        }
        sleep 2;
        func_80240574_9EE164(SI_MAP_VAR(1), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(2) += 2;
        NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(13));
        SetNpcAnimation(0, 0x2B0000);
        SetNpcAnimation(3, 0x2B0000);
        SetNpcAnimation(4, 0x2B0000);
        SetNpcAnimation(5, 0x2B0000);
        func_802406C4_9EE2B4(0, 0);
        func_802406C4_9EE2B4(1, 0);
        func_802406C4_9EE2B4(2, 0);
        func_802406C4_9EE2B4(3, 0);
        PlaySound(358);
    }
    SetPlayerAnimation(0x10002);
    sleep 30;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 3);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80242500) = SCRIPT({
    SI_AREA_FLAG(3) = 1;
    if (SI_FLAG(0) == 0) {
        DisablePlayerInput(1);
        spawn {
            sleep 20;
            DisablePlayerPhysics(1);
        }
    }
    func_802406C4_9EE2B4(2, 0);
    PlaySound(358);
    SetNpcAnimation(0, 0x2B000B);
    func_80240574_9EE164(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240314_9EDF04(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_802403C0_9EDFB0(50, 0, 0);
    GetNpcPointer(0, SI_VAR(0));
    GetNpcPointer(1, SI_VAR(1));
    func_80240548_9EE138(SI_VAR(0));
    func_8024051C_9EE10C(SI_VAR(1));
    SetModelFlags(76, 16, 1);
    if (SI_SAVE_VAR(0) < 0xFFFFFFA3) {
        SI_VAR(0) = 0xC00BC;
        SI_SAVE_VAR(0) = 0xFFFFFFA3;
    } else {
        SI_VAR(0) = 0xC00BD;
    }
    SpeakToPlayer(0, 0x2B000C, 0x2B0001, 5, SI_VAR(0));
    SetMusicTrack(0, 133, 0, 8);
    func_802403C0_9EDFB0(0, 0, 30);
    sleep 30;
    SetModelFlags(76, 16, 0);
    func_8024051C_9EE10C(0);
    func_80240548_9EE138(0);
    spawn N(script_802417F8);
});

Script N(script_Idle_8024274C) = SCRIPT({
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFA3 {
        0:
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) < 60) {
                sleep 1;
                goto 0;
            }
            SI_FLAG(0) = 0;
            spawn N(script_80242500);
            return;
        }
        >= 0xFFFFFFA4 {
            SetNpcPos(0, 0, 0xFFFFFC18, 0);
            SetNpcPos(1, 0, 0xFFFFFC18, 0);
            return;
        }
    }
    DisablePlayerInput(1);
    spawn {
        sleep 17;
        DisablePlayerPhysics(1);
        SetPlayerSpeed(4);
        PlayerMoveTo(0xFFFFFED4, 325, 0);
    }
    sleep 5;
    SetNpcJumpscale(0, 0.703125);
    SetNpcJumpscale(1, 0.703125);
    spawn {
        sleep 20;
        SI_VAR(10) = 58;
        SI_VAR(11) = 0;
        SI_VAR(12) = 227;
        SI_VAR(13) = 80;
        spawn N(script_80241710);
    }
    SI_VAR(10) = 0xFFFFFEFC;
    SI_VAR(11) = 0;
    SI_VAR(12) = 290;
    SI_VAR(13) = 20;
    spawn N(script_802417B0);
    sleep 1;
    NpcJump0(1, SI_VAR(10), 0, 293, SI_VAR(13));
    SI_VAR(10) = 0xFFFFFF4C;
    SI_VAR(11) = 0;
    SI_VAR(12) = 245;
    SI_VAR(13) = 15;
    spawn N(script_802417B0);
    sleep 1;
    NpcJump0(1, SI_VAR(10), SI_VAR(11), 248, SI_VAR(13));
    SI_VAR(10) = 0xFFFFFF9C;
    SI_VAR(11) = 0;
    SI_VAR(12) = 235;
    SI_VAR(13) = 15;
    spawn N(script_802417B0);
    sleep 1;
    NpcJump0(1, SI_VAR(10), SI_VAR(11), 238, SI_VAR(13));
    SI_VAR(10) = 85;
    SI_VAR(11) = 0;
    SI_VAR(12) = 217;
    SI_VAR(13) = 30;
    spawn N(script_802417B0);
    sleep 1;
    NpcJump0(1, SI_VAR(10), SI_VAR(11), 220, SI_VAR(13));
    func_80240574_9EE164(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(3);
    SI_VAR(13) = 30;
    spawn N(script_802417B0);
    sleep 1;
    SI_VAR(12) += 3;
    NpcJump0(1, SI_VAR(10), SI_VAR(11), SI_VAR(12), SI_VAR(13));
    EnableNpcShadow(0, 0);
    EnableNpcShadow(1, 0);
    func_802406C4_9EE2B4(2, 0);
    PlaySound(358);
    SetPlayerPos(0xFFFFFF68, 0, 235);
    PlayerMoveTo(58, 227, 60);
    SI_FLAG(0) = 1;
    spawn N(script_80242500);
});

Script N(script_Idle_80242C5C) = SCRIPT({
0:
    if (SI_MAP_VAR(2) == 1) {
        StartBossBattle(3);
    1:
        if (SI_MAP_VAR(2) == 1) {
            sleep 1;
            goto 1;
        }
    }
    sleep 1;
    goto 0;
});

Script N(script_80242CF4) = SCRIPT({
    RandInt(399, SI_VAR(4));
    SI_VAR(4) /= 100;
0:
    RandInt(300, SI_VAR(5));
    match SI_VAR(5) {
        < 100 {
            SI_VAR(4) -= 1;
        }
        < 200 {
            SI_VAR(4) += 1;
        }
    }
    if (SI_VAR(4) < 0) {
        SI_VAR(4) = 1;
    }
    if (SI_VAR(4) > 3) {
        SI_VAR(4) = 2;
    }
    func_80240574_9EE164(SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    RandInt(10, SI_VAR(3));
    SI_VAR(3) += 20;
    PlaySoundAtNpc(-1, 0xB0000017, 0);
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    goto 0;
});

Script N(script_Defeat_80242E68) = SCRIPT({
    func_802404D0_9EE0C0();
    SetNpcAnimation(2, 0x2B000B);
    func_80240574_9EE164(SI_MAP_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240314_9EDF04(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 50;
    GetNpcPointer(2, SI_VAR(3));
    func_8024051C_9EE10C(SI_VAR(3));
    func_80240548_9EE138(0);
    func_802403C0_9EDFB0(SI_VAR(1), 0, -1);
    SetModelFlags(76, 16, 1);
    func_802403C0_9EDFB0(0, 0, 30);
    sleep 30;
    func_8024051C_9EE10C(0);
    SetModelFlags(76, 16, 0);
    SI_MAP_VAR(2) = 0;
});

Script N(script_80242F9C) = SCRIPT({
    SI_VAR(3) = SI_VAR(0);
    MakeLerp(SI_VAR(11), SI_VAR(13), 30, 3);
0:
    UpdateLerp();
    SetNpcPos(1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 0;
    }
});

Script N(script_8024303C) = SCRIPT({
    SI_VAR(3) = SI_VAR(0);
    MakeLerp(SI_VAR(11), SI_VAR(13), 30, 3);
0:
    UpdateLerp();
    SetNpcPos(1, SI_VAR(3), SI_VAR(0), SI_VAR(2));
    if (SI_VAR(1) == 1) {
        sleep 1;
        goto 0;
    }
});

Script N(script_NpcAI_802430DC) = SCRIPT({
10:
    sleep 1;
    goto 10;
});

Script N(script_NpcAI_80243110) = SCRIPT({
    if (SI_AREA_FLAG(4) == 0) {
        StartBossBattle(3);
        SI_AREA_FLAG(4) = 1;
    }
10:
    sleep 1;
    goto 10;
});

Script N(script_Defeat_8024317C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_AREA_FLAG(5) = 1;
            SI_AREA_FLAG(8) = 0;
        10:
            if (SI_AREA_FLAG(8) == 0) {
                sleep 1;
                goto 10;
            }
            BindNpcAI(0, N(script_NpcAI_802430DC));
        }
        == 1 {}
        == 2 {
            DisablePlayerInput(0);
        }
    }
});

s32 N(unk_80243254)[] = {
    0x00000000,
};

Script N(script_80243258) = SCRIPT({
    SI_FLAG(10) = 0;
    DisablePlayerInput(1);
0:
    func_802D6420();
    func_802D6954();
    if (SI_VAR(0) != 25) {
        if (SI_FLAG(10) == 0) {
            SI_FLAG(10) = 1;
            SpeakToPlayer(6, 0x110009, 0x110003, 0, 0xC00C5);
        } else {
            SpeakToPlayer(6, 0x110009, 0x110003, 0, 0xC00C6);
        }
        goto 0;
    }
    RemoveKeyItemAt(SI_VAR(1));
    func_80240E70_9EEA60();
    DisablePlayerInput(0);
    unbind;
});

s32 N(itemList_80243374)[] = {
    0x00000019, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024337C) = {
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80243258), 0x10, 0, N(itemList_80243374), 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_80240E4C_9EEA3C),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802433B8) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 0xFFFFFF98;
    SI_VAR(2) -= 241;
    SI_VAR(0) *= 0xFFFFFF9B;
    SI_VAR(2) *= 35;
    SI_VAR(0) += SI_VAR(2);
    if (SI_VAR(0) <= 0) {
        sleep 1;
        goto 0;
    }
    DisablePlayerInput(1);
    SetNpcPos(6, 0xFFFFFEA2, 0, 350);
    UseSettingsFrom(0, 0xFFFFFF24, 0, 270);
    SetPanTarget(0, 0xFFFFFF24, 0, 270);
    GetCamDistance(0, SI_VAR(10));
    SI_VAR(10) *= 0.703125;
    SetCamDistance(0, SI_VAR(10));
    SetCamSpeed(0, 3);
    PanToTarget(0, 0, 1);
    spawn {
        sleep 20;
        PlayerMoveTo(0xFFFFFF33, 267, 40);
        PlayerFaceNpc(6, 0);
    }
    SetNpcAnimation(6, 0x110008);
    NpcMoveTo(6, 0xFFFFFF0A, 290, 30);
    SetNpcAnimation(6, 0x110004);
    sleep 20;
    SpeakToPlayer(6, 0x11000A, 0x110004, 0, 0xC00C3);
    DisablePartnerAI(0);
    NpcFaceNpc(0xFFFFFFFC, 6, 0);
    SpeakToNpc(0xFFFFFFFC, 0x10008, 0x10001, 0, 6, 0xC00C4);
    SetNpcAnimation(6, 0x110003);
    await N(script_8024337C);
    PlayerMoveTo(0xFFFFFF31, 268, 7);
    PlayerFaceNpc(6, 0);
    SetPlayerAnimation(0x60005);
    SetNpcJumpscale(1, 1);
    spawn {
        loop 30 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 0xFFFFFFF1;
            SI_VAR(1) += 8;
            SI_VAR(2) += 12;
            SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    SetNpcAnimation(6, 0x110003);
    sleep 20;
    SpeakToPlayer(6, 0x110009, 0x110003, 0, 0xC00C7);
    sleep 10;
    SetNpcAnimation(6, 0x11000D);
    sleep 15;
    SetNpcAnimation(6, 0x110003);
    EndSpeech(6, 0x110009, 0x110003, 0);
    PlayerFaceNpc(6, 0);
    NpcFacePlayer(6, 0);
    sleep 10;
    SetPlayerAnimation(0x10002);
    SetNpcAnimation(6, 0x110000);
    EnableNpcBlur(1, 1);
    GetNpcPos(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 1;
    SI_VAR(2) += 1;
    SI_VAR(1) += 20;
    SI_VAR(3) = 1;
    SI_VAR(4) = 6;
    spawn N(script_80241328);
    InterpNpcYaw(SI_VAR(3), 60, 0);
    NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    func_802CF208(6, 0x20003);
    SetNpcFlagBits(6, 256, 0);
    func_802CF208(6, 0x20000);
    sleep 4;
    EnableNpcBlur(1, 1);
    SetNpcAnimation(6, 0x20003);
    func_802CF208(6, 0x20010);
    sleep 30;
    SetNpcAnimation(6, 0x20003);
    SpeakToNpc(0xFFFFFFFC, 0x10008, 0x10001, 0, 6, 0xC00C8);
    sleep 20;
    SpeakToPlayer(6, 0x2000D, 0x20003, 0, 0xC00C9);
    sleep 10;
    PlaySoundAtPlayer(611, 0);
    ShowEmote(0, 2, 0xFFFFFFD3, 50, 0, 0, 0, 0, 0);
    sleep 10;
    SetPlayerAnimation(0x10021);
    sleep 40;
    SetPlayerAnimation(0x10002);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x10008, 0x10001, 0, 0xC00CA);
    SpeakToPlayer(6, 0x2000D, 0x20003, 0, 0xC00CB);
    sleep 10;
    SpeakToNpc(0xFFFFFFFC, 0x10008, 0x10001, 0, 6, 0xC00CC);
    EnablePartnerAI();
    PlayerFaceNpc(6, 0);
10:
    SetPlayerAnimation(0x10021);
    ShowChoice(0x1E000F);
    SetPlayerAnimation(0x10002);
    if (SI_VAR(0) == 1) {
        EndSpeech(6, 0x2000D, 0x20003, 0);
        SpeakToPlayer(6, 0x2000D, 0x20003, 0, 0xC00CD);
        goto 10;
    } else {
        EndSpeech(6, 0x2000D, 0x20003, 0);
        SpeakToPlayer(6, 0x2000D, 0x20003, 0, 0xC00CE);
        SetNpcAnimation(6, 0x20010);
        sleep 30;
        SetNpcAnimation(6, 0x20003);
        EndSpeech(6, 0x2000D, 0x20003, 0);
        SI_SAVE_VAR(0) = 0xFFFFFFA4;
    }
    func_80240000_9EDBF0(6, 2);
    func_80240E90_9EEA80();
    spawn N(script_80240FE8);
    sleep 15;
    ShowMessageAtScreenPos(0x1D018A, 160, 40);
    spawn N(script_8024100C);
    sleep 10;
    EnablePartnerAI();
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 3);
    DisablePlayerInput(0);
    AwaitPlayerApproach(0xFFFFFE70, 400, 100);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0xC00CF, 160, 40);
    UseSettingsFrom(0, 0xFFFFFF9C, 0, 225);
    SetPanTarget(0, 0xFFFFFF9C, 0, 225);
    SetCamDistance(0, 0xFFFFFF06);
    SetCamSpeed(0, 3);
    PanToTarget(0, 0, 1);
    sleep 20;
    SetNpcAnimation(0, 0x2B0002);
    SetNpcPos(0, 63, 0, 212);
    EnableNpcShadow(0, 1);
    SetNpcJumpscale(0, 2.0);
    PlaySoundAtNpc(0, 0xB0000017, 0);
    NpcJump0(0, 0xFFFFFF9C, 0, 225, 20);
    SI_AREA_FLAG(6) = 0;
    SI_AREA_FLAG(7) = 0;
    SI_AREA_FLAG(5) = 0;
    spawn {
        ShowMessageAtScreenPos(0xC00D0, 160, 40);
        SI_AREA_FLAG(6) = 1;
    }
    GetNpcPos(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
30:
    SetNpcJumpscale(0, 2.0);
    PlaySoundAtNpc(0, 0xB0000017, 0);
    NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 12);
    if (SI_AREA_FLAG(6) == 0) {
        goto 30;
    }
    spawn {
        sleep 27;
        BindNpcDefeat(0, N(script_Defeat_8024317C));
        BindNpcAI(0, N(script_NpcAI_80243110));
    }
    spawn {
        PlaySoundAtNpc(0, 0xB0000017, 0);
        NpcJump0(0, 0xFFFFFF2C, 0, 237, 15);
        GetPlayerPos(SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SI_VAR(11) += 37;
        PlaySoundAtNpc(0, 0xB0000017, 0);
        NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 20);
        sleep 2;
        SetPlayerAnimation(0x80012);
        PlaySoundAtNpc(0, 0xB0000017, 0);
        NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 15);
        SetPlayerAnimation(0x10002);
    21:
        if (SI_AREA_FLAG(5) == 0) {
            sleep 1;
            goto 21;
        }
        SetNpcPos(0, 0xFFFFFF01, 0, 287);
        GetNpcPos(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    31:
        SetNpcJumpscale(0, 2.0);
        PlaySoundAtNpc(0, 0xB0000017, 0);
        NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 15);
        if (SI_AREA_FLAG(7) == 0) {
            goto 31;
        }
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(0, 0xB0000017, 0);
        NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 15);
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(0, 0xB0000017, 0);
        NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 20);
        EnableNpcShadow(0, 0);
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
    }
    UseSettingsFrom(0, 0xFFFFFEFC, 0, 284);
    SetPanTarget(0, 0xFFFFFEFC, 0, 284);
    PanToTarget(0, 0, 1);
    SetCamSpeed(0, 2);
    spawn {
        sleep 5;
        SetNpcPos(3, 63, 0, 212);
        EnableNpcShadow(3, 1);
        SetNpcJumpscale(3, 2.0);
        PlaySoundAtNpc(3, 0xB0000017, 0);
        NpcJump0(3, 0xFFFFFF9C, 0, 225, 10);
        PlaySoundAtNpc(3, 0xB0000017, 0);
        NpcJump0(3, 0xFFFFFF3B, 0, 227, 20);
        PlaySoundAtNpc(3, 0xB0000017, 0);
        NpcJump0(3, 0xFFFFFF17, 0, 285, 10);
    22:
        if (SI_AREA_FLAG(5) == 0) {
            sleep 1;
            goto 22;
        }
        SetNpcPos(3, 0xFFFFFF2E, 0, 244);
        GetNpcPos(3, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    32:
        SetNpcJumpscale(3, 2.0);
        PlaySoundAtNpc(3, 0xB0000017, 0);
        NpcJump0(3, SI_VAR(10), SI_VAR(11), SI_VAR(12), 12);
        if (SI_AREA_FLAG(7) == 0) {
            goto 32;
        }
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(3, 0xB0000017, 0);
        NpcJump0(3, SI_VAR(10), SI_VAR(11), SI_VAR(12), 10);
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(3, 0xB0000017, 0);
        NpcJump0(3, SI_VAR(10), SI_VAR(11), SI_VAR(12), 20);
        EnableNpcShadow(3, 0);
        SetNpcPos(3, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 7;
        SetNpcPos(4, 63, 0, 212);
        EnableNpcShadow(4, 1);
        SetNpcJumpscale(4, 2.0);
        PlaySoundAtNpc(4, 0xB0000017, 0);
        NpcJump0(4, 0xFFFFFF86, 0, 219, 20);
        PlaySoundAtNpc(4, 0xB0000017, 0);
        NpcJump0(4, 0xFFFFFF4F, 0, 242, 10);
        PlaySoundAtNpc(4, 0xB0000017, 0);
        NpcJump0(4, 0xFFFFFF2B, 0, 300, 15);
    23:
        if (SI_AREA_FLAG(5) == 0) {
            sleep 1;
            goto 23;
        }
        SetNpcPos(4, 0xFFFFFF2E, 0, 266);
        GetNpcPos(4, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        sleep 2;
    33:
        SetNpcJumpscale(4, 2.0);
        PlaySoundAtNpc(4, 0xB0000017, 0);
        NpcJump0(4, SI_VAR(10), SI_VAR(11), SI_VAR(12), 12);
        if (SI_AREA_FLAG(7) == 0) {
            goto 33;
        }
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(4, 0xB0000017, 0);
        NpcJump0(4, SI_VAR(10), SI_VAR(11), SI_VAR(12), 20);
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(4, 0xB0000017, 0);
        NpcJump0(4, SI_VAR(10), SI_VAR(11), SI_VAR(12), 15);
        EnableNpcShadow(4, 0);
        SetNpcPos(4, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 8;
        SetNpcPos(5, 63, 0, 212);
        EnableNpcShadow(5, 1);
        SetNpcJumpscale(5, 2.0);
        PlaySoundAtNpc(5, 0xB0000017, 0);
        NpcJump0(5, 0xFFFFFF9C, 0, 269, 20);
        PlaySoundAtNpc(5, 0xB0000017, 0);
        NpcJump0(5, 0xFFFFFF27, 0, 212, 10);
        PlaySoundAtNpc(5, 0xB0000017, 0);
        NpcJump0(5, 0xFFFFFF03, 0, 270, 10);
    24:
        if (SI_AREA_FLAG(5) == 0) {
            sleep 1;
            goto 24;
        }
        SetNpcPos(5, 0xFFFFFF49, 0, 257);
        GetNpcPos(5, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        sleep 5;
    34:
        SetNpcJumpscale(5, 2.0);
        PlaySoundAtNpc(5, 0xB0000017, 0);
        NpcJump0(5, SI_VAR(10), SI_VAR(11), SI_VAR(12), 12);
        if (SI_AREA_FLAG(7) == 0) {
            goto 34;
        }
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(5, 0xB0000017, 0);
        NpcJump0(5, SI_VAR(10), SI_VAR(11), SI_VAR(12), 15);
        SI_VAR(10) += 70;
        SI_VAR(12) += 0xFFFFFFE2;
        PlaySoundAtNpc(5, 0xB0000017, 0);
        NpcJump0(5, SI_VAR(10), SI_VAR(11), SI_VAR(12), 20);
        EnableNpcShadow(5, 0);
        SetNpcPos(5, 0, 0xFFFFFC18, 0);
    }
40:
    if (SI_AREA_FLAG(5) == 0) {
        sleep 1;
        goto 40;
    }
    SetPlayerPos(0xFFFFFECF, 0, 329);
    InterpPlayerYaw(50, 0);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFEB1, 0, 355);
    InterpNpcYaw(0xFFFFFFFC, 50, 0);
    ShowMessageAtScreenPos(0xC00D1, 160, 40);
    SI_AREA_FLAG(7) = 1;
    UseSettingsFrom(0, 0xFFFFFEFC, 0, 284);
    SetPanTarget(0, 0xFFFFFEFC, 0, 284);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 15;
    PanToTarget(0, 0, 0);
    SI_AREA_FLAG(8) = 1;
    sleep 30;
    DisablePlayerInput(0);
});

Script N(script_80244D0C) = SCRIPT({
    spawn {
        func_80240574_9EE164(SI_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetPlayerPos(SI_VAR(10), SI_VAR(11), SI_VAR(12));
        UseSettingsFrom(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SI_VAR(10) += SI_VAR(0);
        SI_VAR(12) += SI_VAR(2);
        SI_VAR(10) /= 2;
        SI_VAR(12) /= 2;
        SetPanTarget(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SetCamPitch(0, 15, 0xFFFFFFF5);
        SetCamSpeed(0, 3);
        PanToTarget(0, 0, 1);
    }
    func_80240574_9EE164(SI_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPointer(0, SI_VAR(14));
    GetNpcPointer(1, SI_VAR(15));
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    match SI_MAP_VAR(0) {
        == 0 {
            SI_VAR(4) = SI_VAR(12);
            SI_VAR(4) -= 4;
            func_80240314_9EDF04(SI_VAR(10), SI_VAR(11), SI_VAR(4));
            SetModelFlags(76, 16, 1);
            SI_VAR(3) = SI_VAR(11);
            SI_VAR(3) /= 2;
            SI_VAR(13) = SI_VAR(11);
            SI_VAR(13) -= SI_VAR(3);
            spawn N(script_8024303C);
            sleep 1;
            sleep 30;
            func_8024051C_9EE10C(0);
            func_80240548_9EE138(0);
            func_802403C0_9EDFB0(0, 0, -1);
            func_802403C0_9EDFB0(SI_VAR(3), 0, -1);
            sleep 1;
            func_8024051C_9EE10C(SI_VAR(15));
            sleep 20;
            SetNpcAnimation(0, 0x2B0008);
            PlayerFaceNpc(0, 0);
            SetNpcJumpscale(0, 0);
            PlaySoundAtNpc(0, 0xB0000017, 0);
            NpcJump0(0, SI_VAR(10), SI_VAR(13), SI_VAR(12), 30);
            SetNpcAnimation(0, 0x2B0009);
            SI_VAR(9) = SI_VAR(12);
            SpeakToPlayer(0, 0x2B000C, 0x2B0001, 5, 0xC00BF);
            func_802403C0_9EDFB0(0, 0, 30);
            SetNpcAnimation(0, 0x2B000B);
            SI_VAR(12) = SI_VAR(9);
            PlaySoundAtNpc(0, 0xB0000017, 0);
            NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 30);
            func_8024051C_9EE10C(0);
            SetModelFlags(76, 16, 0);
            SI_MAP_VAR(0) += 1;
            spawn N(script_802417F8);
            return;
        }
        == 1 {
            SI_VAR(4) = SI_VAR(12);
            SI_VAR(4) -= 4;
            func_80240314_9EDF04(SI_VAR(10), SI_VAR(11), SI_VAR(4));
            SetModelFlags(76, 16, 1);
            SI_VAR(3) = SI_VAR(11);
            SI_VAR(3) *= 2;
            SI_VAR(3) /= 3;
            SI_VAR(13) = SI_VAR(11);
            SI_VAR(13) -= SI_VAR(3);
            spawn N(script_80242F9C);
            sleep 1;
            sleep 30;
            func_8024051C_9EE10C(0);
            func_80240548_9EE138(0);
            func_802403C0_9EDFB0(0, 0, -1);
            func_802403C0_9EDFB0(SI_VAR(3), 0, -1);
            sleep 1;
            func_8024051C_9EE10C(SI_VAR(15));
            sleep 20;
            SetNpcAnimation(0, 0x2B0008);
            PlayerFaceNpc(0, 0);
            SetNpcJumpscale(0, 0);
            PlaySoundAtNpc(0, 0xB0000017, 0);
            NpcJump0(0, SI_VAR(10), SI_VAR(13), SI_VAR(12), 30);
            SetNpcAnimation(0, 0x2B0009);
            SI_VAR(9) = SI_VAR(12);
            SpeakToPlayer(0, 0x2B000C, 0x2B0001, 5, 0xC00C0);
            func_802403C0_9EDFB0(0, 0, 30);
            SetNpcAnimation(0, 0x2B000B);
            SI_VAR(12) = SI_VAR(9);
            PlaySoundAtNpc(0, 0xB0000017, 0);
            NpcJump0(0, SI_VAR(10), SI_VAR(11), SI_VAR(12), 30);
            func_8024051C_9EE10C(0);
            SetModelFlags(76, 16, 0);
            SI_MAP_VAR(0) += 1;
            spawn N(script_802417F8);
            return;
        }
        == 2 {
            SetNpcAnimation(0, 0x2B0008);
            PlayerFaceNpc(0, 0);
            func_80240314_9EDF04(SI_VAR(10), SI_VAR(11), SI_VAR(12));
            func_802403C0_9EDFB0(0, 0, -1);
            SI_VAR(0) = SI_VAR(11);
            SI_VAR(0) -= 50;
            func_802403C0_9EDFB0(SI_VAR(0), 0, 0);
            func_8024051C_9EE10C(SI_VAR(15));
            func_80240548_9EE138(SI_VAR(14));
            SetModelFlags(76, 16, 1);
            sleep 20;
            SetNpcAnimation(0, 0x2B0009);
            SpeakToPlayer(0, 0x2B000C, 0x2B0001, 5, 0xC00C1);
            sleep 10;
            func_8024051C_9EE10C(0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 40;
            SetNpcJumpscale(1, 0.6005859375);
            NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
            SetPlayerAnimation(0x10024);
            spawn {
                sleep 4;
                GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
                SI_VAR(4) += 50;
                SI_VAR(5) += 2;
                SI_VAR(3) += 8;
                PlayEffect(17, 3, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20, 0, 0, 0, 0, 0, 0, 0, 0);
                SI_VAR(3) += 0xFFFFFFF0;
                PlayEffect(17, 3, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            }
            PlaySound(210);
            ShowMessageAtScreenPos(0x1D0006, 160, 40);
            SetNpcPos(1, 0, 0xFFFFFC18, 0);
            SetPlayerAnimation(0x10002);
            AddKeyItem(25);
            sleep 10;
            SpeakToPlayer(0, 0x2B000C, 0x2B0001, 5, 0xC00C2);
            SetNpcAnimation(0, 0x2B000B);
            func_802403C0_9EDFB0(0, 0, 20);
            sleep 20;
            SetModelFlags(76, 16, 0);
            func_80240548_9EE138(0);
            SetNpcPos(0, 0, 0xFFFFFC18, 0);
            SetNpcPos(1, 0, 0xFFFFFC18, 0);
            SetMusicTrack(0, 19, 0, 8);
            DisablePlayerPhysics(0);
            DisablePlayerInput(0);
            SI_AREA_FLAG(3) = 0;
            spawn N(script_802433B8);
        }
    }
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 3);
});

Script N(script_80245858) = SCRIPT({
    spawn {
        func_80240574_9EE164(SI_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetPlayerPos(SI_VAR(10), SI_VAR(11), SI_VAR(12));
        UseSettingsFrom(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SI_VAR(10) += SI_VAR(0);
        SI_VAR(12) += SI_VAR(2);
        SI_VAR(10) /= 2;
        SI_VAR(12) /= 2;
        SetPanTarget(0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
        SetCamPitch(0, 15, 0xFFFFFFF5);
        SetCamSpeed(0, 3);
        PanToTarget(0, 0, 1);
    }
    sleep 15;
    SI_MAP_VAR(3) = SI_VAR(0);
    func_80240574_9EE164(SI_MAP_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPointer(1, SI_VAR(15));
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(12) = SI_VAR(2);
    RandInt(999, SI_VAR(0));
    match SI_VAR(0) {
        < 200 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            MakeItemEntity(342, SI_VAR(0), 200, SI_VAR(2), 12, 0);
            sleep 30;
        }
        < 400 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            MakeItemEntity(343, SI_VAR(0), 200, SI_VAR(2), 12, 0);
            sleep 30;
        }
        < 1000 {
            SetNpcAnimation(2, 0x2B0006);
            SetNpcJumpscale(2, 1);
            SetNpcPos(2, SI_VAR(10), SI_VAR(11), SI_VAR(12));
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) += 10;
            SI_VAR(1) += 10;
            PlaySoundAtNpc(2, 0xB0000017, 0);
            NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
            SI_MAP_VAR(2) = 1;
        }
    }
0:
    if (SI_MAP_VAR(2) == 1) {
        sleep 1;
        goto 0;
    }
    sleep 20;
    spawn N(script_802417F8);
});

Script N(script_80245BD8) = SCRIPT({
    func_802406C4_9EE2B4(SI_VAR(0), 1);
    PlaySound(358);
    if (SI_AREA_FLAG(3) == 0) {
        return;
    }
    DisablePlayerInput(1);
    spawn {
        sleep 20;
        DisablePlayerPhysics(1);
    }
    if (SI_VAR(0) == SI_MAP_VAR(1)) {
        spawn {
            sleep 15;
            PlaySound(540);
        }
        await N(script_80244D0C);
    } else {
        spawn {
            sleep 15;
            PlaySound(541);
        }
        await N(script_80245858);
    }
});

Script N(script_Interact_80245CF8) = SCRIPT({

});

Script N(script_Init_80245D08) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_8024274C));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA4) {
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        return;
    }
    SI_MAP_VAR(0) = 0;
    SI_MAP_VAR(1) = 2;
    SI_MAP_VAR(4) = 2;
    func_802404D0_9EE0C0();
    func_802C94A0(0, 0, func_80240814_9EE404);
    SetNpcPos(0, 0xFFFFFEDB, 0, 319);
    SetNpcPos(1, 0xFFFFFEDB, 0, 322);
    EnableNpcShadow(2, 0);
    EnableNpcShadow(3, 0);
    EnableNpcShadow(4, 0);
    EnableNpcShadow(5, 0);
    SetModelFlags(76, 512, 0);
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA3) {
        func_80240574_9EE164(SI_VAR(4), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        EnableNpcShadow(0, 0);
        EnableNpcShadow(1, 0);
    }
    sleep 1;
});

Script N(script_Init_80245F18) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetNpcAnimation(-1, 0x20012);
});

Script N(script_Init_80245F50) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80242C5C));
    BindNpcDefeat(-1, N(script_Defeat_80242E68));
});

Script N(script_Init_80245F88) = SCRIPT({
    BindNpcIdle(-1, 0);
});

Script N(script_Init_80245FAC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80245CF8));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA4) {
        if (SI_SAVE_VAR(0) < 0xFFFFFFA4) {
            InterpNpcYaw(6, 225, 0);
            SetNpcPos(6, 0xFFFFFEED, 0, 305);
            return;
        }
    }
    func_802CF208(6, 0x110004);
});

StaticNpc N(npcGroup_80246050)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802412FC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40B09,
        .init = N(script_Init_80245F18),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802412D0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40B0D,
        .init = N(script_Init_80245F50),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802412D0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40B09,
        .init = N(script_Init_80245F88),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802412D0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40B09,
        .init = N(script_Init_80245F88),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802412D0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40B09,
        .init = N(script_Init_80245F88),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_802412FC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00C40B09,
        .init = N(script_Init_80245FAC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00020003, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020004, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000, 0x00020000,
        },
    },
};

StaticNpc N(npcGroup_80246BF0)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802412D0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400B0D,
        .init = N(script_Init_80245D08),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001 },
        .animations = {
            0x002B0002, 0x002B0002, 0x002B0003, 0x002B0003, 0x002B0001, 0x002B0001, 0x002B0008, 0x002B0008, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003, 0x002B0003,
        },
    },
};

NpcGroupList N(npcGroupList_80246DE0) = {
    NPC_GROUP(N(npcGroup_80246050), 0x05160004),
    NPC_GROUP(N(npcGroup_80246BF0), 0x05170004),
    {},
};

s32 pad_006E04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80246E10_9F4A00

s32 pad_006E18[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80246E20_9F4A10

// rodata: D_80246E28_9F4A18

// rodata: D_80246E30_9F4A20

s32 pad_006E38[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80246E40)[] = {
    0x70617274, 0x795F6B61, 0x6D656B69, 0x00000000,
};
