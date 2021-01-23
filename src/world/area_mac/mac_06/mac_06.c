#include "mac_06.h"

s32 pad_0004B4[3];
s32 pad_000E78[2];
s32 pad_00168C[1];
Script N(script_UpdateTexturePan_802416E0);
Script N(script_8024177C);
Script N(main);
s32 pad_001B54[3];
s32 N(unk_80241B60)[1];
s32 N(unk_80241B64)[1];
s32 N(unk_80241B68)[1];
Script N(script_80241B6C);
Script N(script_80241BE4);
Script N(script_80241E20);
s32 N(unk_8024206C)[4];
Script N(script_8024207C);
s32 N(unk_802421D4)[4];
Script N(script_802421E4);
Script N(script_8024230C);
Script N(script_80242474);
Script N(script_802425B4);
Script N(script_8024271C);
Script N(script_80242794);
Script N(script_80242A14);
Script N(script_80243380);
s32 pad_0033A4[3];
s32 N(unk_80243434)[1];
s32 N(unk_80243438)[1];
s32 N(unk_8024343C)[1];
s32 N(unk_80243440)[1];
Script N(script_Idle_80243444);
Script N(script_Init_802436D0);
Script N(script_Init_80243A34);
s32 N(vectorList_80243A44)[42];
Script N(script_80243AEC);
Script N(script_80243CAC);
Script N(script_Idle_80244114);
Script N(script_Init_8024428C);
StaticNpc N(npcGroup_802442F8)[1];
StaticNpc N(npcGroup_802444E8)[1];
s32 N(extraAnimationList_802446D8)[4];
StaticNpc N(npcGroup_802446E8)[1];
NpcGroupList N(npcGroupList_802448D8);
s32 pad_004908[2];
s32 pad_004944[3];
const char D_80244950_869490[8]; // "mac_05"
const char D_80244958_869498[8]; // "jan_00"
const char D_80244960_8694A0[8]; // "kmr_22"

// text: func_80240000_864B40

// text: func_80240124_864C64

// text: func_8024030C_864E4C

// text: func_8024047C_864FBC

s32 pad_0004B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802404C0_865000

// text: func_8024050C_86504C

// text: func_80240658_865198

// text: func_802408D0_865410

// text: func_80240974_8654B4

// text: func_80240A18_865558

// text: func_80240B88_8656C8

// text: func_80240C74_8657B4

// text: func_80240DA4_8658E4

// text: func_80240E48_865988

s32 pad_000E78[] = {
    0x00000000, 0x00000000,
};

// text: func_80240E80_8659C0

// text: func_80241098_865BD8

// text: func_80241290_865DD0

// text: func_802412AC_865DEC

// text: func_80241388_865EC8

// text: func_802415FC_86613C

s32 pad_00168C[] = {
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

Script N(script_UpdateTexturePan_802416E0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_864B40();
                    return;
                }
            }
        }
    }
    func_80240124_864C64();
});

Script N(script_8024177C) = SCRIPT({
    group 0;
    SI_VAR(12) = 0;
0:
    if (SI_VAR(12) >= 60) {
        SI_VAR(12) = 0;
    }
    func_8024030C_864E4C(SI_VAR(12), SI_VAR(0), -1.0, 1.0, 30, 0, 0);
    ScaleGroup(20, 1, SI_VAR(0), 1);
    SI_VAR(12) += 1;
    sleep 1;
    goto 0;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 1;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802448D8));
    spawn N(script_80243AEC);
    spawn N(script_80242A14);
    SetMusicTrack(0, 129, 0, 8);
    PlayAmbientSounds(2);
    spawn N(script_8024177C);
    SetTexPanner(19, 1);
    func_8024047C_864FBC();
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        spawn {
            SI_VAR(0) = 1;
            SI_VAR(1) = 400;
            SI_VAR(2) = 150;
            SI_VAR(3) = 200;
            SI_VAR(4) = 0xFFFFFFC4;
            SI_VAR(5) = 1;
            SI_VAR(6) = 1;
            SI_VAR(7) = 1;
            SI_VAR(8) = 1;
            SI_VAR(9) = 0;
            SI_VAR(10) = 0;
            SI_VAR(11) = 0;
            SI_VAR(12) = 0;
            spawn N(script_UpdateTexturePan_802416E0);
        }
    } else {
        spawn {
            SI_VAR(0) = 1;
            SI_VAR(1) = 0xFFFFFE70;
            SI_VAR(2) = 0xFFFFFF6A;
            SI_VAR(3) = 0xFFFFFF38;
            SI_VAR(4) = 60;
            SI_VAR(5) = 1;
            SI_VAR(6) = 1;
            SI_VAR(7) = 1;
            SI_VAR(8) = 1;
            SI_VAR(9) = 0;
            SI_VAR(10) = 0;
            SI_VAR(11) = 0;
            SI_VAR(12) = 0;
            spawn N(script_UpdateTexturePan_802416E0);
        }
    }
});

s32 pad_001B54[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80241B60)[] = {
    0x00000000,
};

s32 N(unk_80241B64)[] = {
    0xFFFFFFFF,
};

s32 N(unk_80241B68)[] = {
    0xFFFFFFFF,
};

Script N(script_80241B6C) = SCRIPT({
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 30, 60, 30, 0, 0);
    RotateModel(6, SI_VAR(0), 1, 0, 0);
    RotateModel(4, SI_VAR(0), -1, 0, 0);
});

Script N(script_80241BE4) = SCRIPT({
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 0, 30, 30, 1, 0);
    SI_VAR(1) = f SI_VAR(0);
    SI_VAR(1) /= 3.0;
    RotateModel(8, SI_VAR(0), 0, 0, 1);
    RotateGroup(13, SI_VAR(1), 0, 0, -1);
    TranslateModel(0, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(2, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(6, 60, 29, 0xFFFFFFCD);
    TranslateModel(4, 60, 29, 51);
    RotateModel(0, SI_VAR(1), 0, 0, -1);
    RotateModel(2, SI_VAR(1), 0, 0, -1);
    RotateModel(6, SI_VAR(1), 0, 0, -1);
    RotateModel(4, SI_VAR(1), 0, 0, -1);
    TranslateModel(0, 5, 68, 0);
    TranslateModel(2, 5, 68, 0);
    TranslateModel(6, 0xFFFFFFC4, 0xFFFFFFE3, 51);
    TranslateModel(4, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 0, 0xFFFFFFD8, 30, 1, 0);
    TranslateModel(14, SI_VAR(0), 0, 0);
});

Script N(script_80241E20) = SCRIPT({
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 0, 0xFFFFFFE2, 8, 1, 0);
    SI_VAR(0) += 30.0;
    SI_VAR(1) = f SI_VAR(0);
    SI_VAR(1) /= 3.0;
    RotateModel(8, SI_VAR(0), 0, 0, 1);
    RotateGroup(13, SI_VAR(1), 0, 0, -1);
    TranslateModel(0, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(2, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(6, 60, 29, 0xFFFFFFCD);
    TranslateModel(4, 60, 29, 51);
    RotateModel(0, SI_VAR(1), 0, 0, -1);
    RotateModel(2, SI_VAR(1), 0, 0, -1);
    RotateModel(6, SI_VAR(1), 0, 0, -1);
    RotateModel(4, SI_VAR(1), 0, 0, -1);
    TranslateModel(0, 5, 68, 0);
    TranslateModel(2, 5, 68, 0);
    TranslateModel(6, 0xFFFFFFC4, 0xFFFFFFE3, 51);
    TranslateModel(4, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 0, 0xFFFFFFD8, 120, 1, 0);
    TranslateModel(14, SI_VAR(0), 0, 0);
});

s32 N(unk_8024206C)[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_8024207C) = SCRIPT({
    GetNpcVar(0, 0, SI_VAR(3));
    if (SI_VAR(3) == 0) {
        func_80240B88_8656C8();
        PlaySoundAt(0x8000004F, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        func_80240C74_8657B4(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 0, -1, 0, 30);
        SetNpcVar(0, 0, SI_VAR(0));
    }
    GetNpcVar(0, 0, SI_VAR(3));
    func_80240B88_8656C8();
    func_80240DA4_8658E4(SI_VAR(3), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 30, 60, 25, 0, 0);
    RotateModel(6, SI_VAR(0), 1, 0, 0);
    RotateModel(4, SI_VAR(0), -1, 0, 0);
});

s32 N(unk_802421D4)[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_802421E4) = SCRIPT({
    if (SI_VAR(12) >= 0) {
        if (SI_VAR(12) <= 2) {
            EnableModel(0, 0);
            EnableModel(2, 1);
            return;
        }
    }
    if (SI_VAR(12) == 15) {
        EnableModel(0, 0);
        EnableModel(2, 1);
        return;
    }
    if (SI_VAR(12) == 22) {
        EnableModel(0, 0);
        EnableModel(2, 1);
        return;
    }
    EnableModel(0, 1);
    EnableModel(2, 0);
});

Script N(script_8024230C) = SCRIPT({
    SI_VAR(0) = SI_VAR(12);
    SI_VAR(0) /= 20;
    SI_VAR(0) %= 2;
    if (SI_VAR(0) == 0) {
        return;
    }
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), -1.0, 1.0, 3, 0, 0);
    TranslateModel(8, SI_VAR(0), 0, 0);
    TranslateGroup(13, SI_VAR(0), 0, 0);
    TranslateModel(0, SI_VAR(0), 0, 0);
    TranslateModel(2, SI_VAR(0), 0, 0);
    TranslateModel(6, SI_VAR(0), 0, 0);
    TranslateModel(4, SI_VAR(0), 0, 0);
    TranslateModel(6, SI_VAR(0), 0, 0);
    TranslateModel(4, SI_VAR(0), 0, 0);
});

Script N(script_80242474) = SCRIPT({
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), -6.0, 6.0, 3, 0, 0);
    func_80240A18_865558(SI_VAR(12), SI_VAR(1), 6.0, -6.0, 2, 0, 0);
    TranslateModel(8, SI_VAR(0), SI_VAR(1), 0);
    TranslateGroup(13, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(0, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(2, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(6, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(4, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(6, SI_VAR(0), SI_VAR(1), 0);
    TranslateModel(4, SI_VAR(0), SI_VAR(1), 0);
});

Script N(script_802425B4) = SCRIPT({
    SI_VAR(0) = SI_VAR(12);
    SI_VAR(0) /= 20;
    SI_VAR(0) %= 2;
    if (SI_VAR(0) == 0) {
        return;
    }
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), -1.0, 1.0, 3, 0, 0);
    TranslateModel(8, SI_VAR(0), 0, 0);
    TranslateGroup(13, SI_VAR(0), 0, 0);
    TranslateModel(0, SI_VAR(0), 0, 0);
    TranslateModel(2, SI_VAR(0), 0, 0);
    TranslateModel(6, SI_VAR(0), 0, 0);
    TranslateModel(4, SI_VAR(0), 0, 0);
    TranslateModel(6, SI_VAR(0), 0, 0);
    TranslateModel(4, SI_VAR(0), 0, 0);
});

Script N(script_8024271C) = SCRIPT({
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 30, 60, 30, 0, 0);
    RotateModel(6, SI_VAR(0), 1, 0, 0);
    RotateModel(4, SI_VAR(0), -1, 0, 0);
});

Script N(script_80242794) = SCRIPT({
    func_80240A18_865558(SI_VAR(12), SI_VAR(0), 0, 30, 3, 0, 0);
    SI_VAR(1) = SI_VAR(0);
    SI_VAR(1) /= 3;
    RotateModel(8, SI_VAR(0), 0, 0, 1);
    RotateGroup(13, SI_VAR(1), 0, 0, -1);
    TranslateModel(0, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(2, 0xFFFFFFFB, 0xFFFFFFBC, 0);
    TranslateModel(6, 60, 29, 0xFFFFFFCD);
    TranslateModel(4, 60, 29, 51);
    RotateModel(0, SI_VAR(1), 0, 0, -1);
    RotateModel(2, SI_VAR(1), 0, 0, -1);
    RotateModel(6, SI_VAR(1), 0, 0, -1);
    RotateModel(4, SI_VAR(1), 0, 0, -1);
    TranslateModel(0, 5, 68, 0);
    TranslateModel(2, 5, 68, 0);
    TranslateModel(6, 0xFFFFFFC4, 0xFFFFFFE3, 51);
    TranslateModel(4, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
    SI_VAR(0) = SI_VAR(12);
    SI_VAR(0) *= 2;
    func_80240A18_865558(SI_VAR(0), SI_VAR(0), 30, 60, 3, 0, 0);
    RotateModel(6, SI_VAR(0), 1, 0, 0);
    RotateModel(4, SI_VAR(0), -1, 0, 0);
});

Script N(script_80242A14) = SCRIPT({
    group 0;
    0x802C9C70(1, 10, 1);
    0x802C94A0(1, func_802408D0_865410, 0);
    0x802C90FC(10, 1, -1);
    0x802C9C70(2, 11, 1);
    0x802C94A0(2, func_80240974_8654B4, 0);
    0x802C90FC(11, 2, -1);
    SetNpcVar(0, 0, 0);
    spawn {
0:
        func_8024050C_86504C(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= f 0xFFFFFFB0;
        SI_VAR(1) -= f 0xFFFFFFEE;
        SI_VAR(2) -= 420;
        SI_VAR(0) += 130;
        SI_VAR(1) += f 0xFFFFFFEC;
        SI_VAR(2) += 0;
        TranslateModel(14, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(8, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(6, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateModel(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        TranslateGroup(13, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcYaw(0, SI_VAR(0));
        SI_VAR(0) *= -1;
        SI_VAR(0) += f 0xFFFFFFA6;
        TranslateModel(14, 0xFFFFFF9C, 0, 0);
        TranslateModel(0, 0xFFFFFF9C, 0, 0);
        TranslateModel(2, 0xFFFFFF9C, 0, 0);
        TranslateModel(8, 0xFFFFFF9C, 0, 0);
        TranslateModel(6, 0xFFFFFF9C, 0, 0);
        TranslateModel(4, 0xFFFFFF9C, 0, 0);
        TranslateGroup(13, 0xFFFFFF9C, 0, 0);
        TranslateModel(14, 100, -1, 0);
        TranslateModel(0, 0xFFFFFFFB, 0xFFFFFFBC, 0);
        TranslateModel(2, 0xFFFFFFFB, 0xFFFFFFBC, 0);
        TranslateModel(8, 102, 4, 0);
        TranslateModel(6, 60, 29, 0xFFFFFFCD);
        TranslateModel(4, 60, 29, 51);
        RotateModel(14, SI_VAR(0), 0, 1, 0);
        RotateModel(0, SI_VAR(0), 0, 1, 0);
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        RotateModel(8, SI_VAR(0), 0, 1, 0);
        RotateModel(6, SI_VAR(0), 0, 1, 0);
        RotateModel(4, SI_VAR(0), 0, 1, 0);
        RotateGroup(13, SI_VAR(0), 0, 1, 0);
        TranslateModel(14, 0xFFFFFF9C, 1, 0);
        TranslateModel(0, 5, 68, 0);
        TranslateModel(2, 5, 68, 0);
        TranslateModel(8, 0xFFFFFF9A, 0xFFFFFFFC, 0);
        TranslateModel(6, 0xFFFFFFC4, 0xFFFFFFE3, 51);
        TranslateModel(4, 0xFFFFFFC4, 0xFFFFFFE3, 0xFFFFFFCD);
        TranslateModel(14, 100, 0, 0);
        TranslateModel(0, 100, 0, 0);
        TranslateModel(2, 100, 0, 0);
        TranslateModel(8, 100, 0, 0);
        TranslateModel(6, 100, 0, 0);
        TranslateModel(4, 100, 0, 0);
        TranslateGroup(13, 100, 0, 0);
        GetNpcAnimation(0, SI_VAR(0));
        if (SI_VAR(0) != SI_VAR(11)) {
            SI_VAR(11) = SI_VAR(0);
            SI_VAR(12) = 0;
            EnableModel(0, 1);
            EnableModel(2, 0);
            if (SI_VAR(11) != 0xB60009) {
                GetNpcVar(0, 0, SI_VAR(0));
                if (SI_VAR(0) != 0) {
                    PlaySound(1091);
                    0x802D62E4(67);
                    func_80240E48_865988(SI_VAR(0));
                    SetNpcVar(0, 0, 0);
                }
            }
            match SI_VAR(11) {
                == 0xB60003 {
                    PlaySoundAtNpc(0, 8247, 0);
                    SI_VAR(13) = N(script_80241E20);
                }
                == 0xB60000 {
                    SI_VAR(13) = N(script_80241B6C);
                }
                == 0xB60002 {
                    PlaySoundAtNpc(0, 8246, 0);
                    SI_VAR(13) = N(script_80241BE4);
                }
                == 0xB60001 {
                    SI_VAR(13) = N(script_8024271C);
                }
                == 0xB60004 {
                    SI_VAR(13) = N(script_80242794);
                }
                == 0xB60005 {
                    SI_VAR(13) = N(unk_8024206C);
                    EnableModel(0, 0);
                    EnableModel(2, 0);
                }
                == 0xB60006 {
                    SI_VAR(13) = N(script_8024230C);
                    EnableModel(0, 0);
                    EnableModel(2, 0);
                }
                == 0xB60007 {
                    SI_VAR(13) = N(script_80242474);
                    EnableModel(0, 0);
                    EnableModel(2, 0);
                }
                == 0xB60008 {
                    SI_VAR(13) = N(script_802425B4);
                }
                == 0xB60009 {
                    SI_VAR(13) = N(script_8024207C);
                }
                == 0xB6000A {
                    SI_VAR(13) = N(unk_802421D4);
                }
                == 0xB6000C {
                    SI_VAR(13) = N(script_802421E4);
                }
            }
        }
        await 0xFE363C8D;
        SI_VAR(12) += 1;
        if (SI_VAR(12) > 1000) {
            SI_VAR(12) = 0;
        }
        goto 0;
    }
});

Script N(script_80243380) = SCRIPT({
    SetNpcAnimation(0, 0xB60003);
});

s32 pad_0033A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802433B0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x30,
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

NpcSettings N(npcSettings_802433DC) = {
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

NpcSettings N(npcSettings_80243408) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x20,
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

s32 N(unk_80243434)[] = {
    0x00000000,
};

s32 N(unk_80243438)[] = {
    0x00000000,
};

s32 N(unk_8024343C)[] = {
    0x00000000,
};

s32 N(unk_80243440)[] = {
    0x00000000,
};

Script N(script_Idle_80243444) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        NpcFlyTo(0, 50, SI_VAR(1), 500, 120, 0, 11);
        spawn {
            func_80241098_865BD8();
        }
        sleep 150;
        SetNpcAnimation(0, 0xB60001);
        NpcFlyTo(0, 500, SI_VAR(1), 500, 120, 0, 12);
        if (SI_SAVE_FLAG(5) == 0) {
            SI_SAVE_FLAG(5) = 1;
            FadeOutMusic(0, 1500);
            GotoMapSpecial(D_80244960_8694A0, 5, 6);
        } else {
            GotoMap(D_80244958_869498, 0);
        }
    } else {
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_SAVE_VAR(0) >= 15) {
            if (SI_SAVE_FLAG(1218) == 0) {
                NpcFlyTo(0, 0xFFFFFDDA, SI_VAR(1), 500, 240, 0, 0);
                SetNpcVar(3, 0, 1);
                return;
            }
        }
        NpcFlyTo(0, 0xFFFFFFBA, SI_VAR(1), 500, 120, 0, 11);
        spawn {
            func_80241098_865BD8();
        }
        sleep 150;
        SetNpcAnimation(0, 0xB60001);
        NpcFlyTo(0, 0xFFFFFE0C, SI_VAR(1), 500, 120, 0, 12);
        GotoMap(D_80244950_869490, 1);
    }
});

Script N(script_Init_802436D0) = SCRIPT({
    SetNpcFlagBits(-1, 0x1000000, 1);
    SetNpcFlagBits(-1, 16, 0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        InterpPlayerYaw(90, 0);
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
        InterpNpcYaw(2, 90, 0);
        InterpNpcYaw(-1, 90, 0);
        SetNpcPos(-1, 0xFFFFFED4, 0, 500);
    } else {
        InterpPlayerYaw(270, 0);
        InterpNpcYaw(0xFFFFFFFC, 270, 0);
        InterpNpcYaw(2, 270, 0);
        InterpNpcYaw(-1, 270, 0);
        SetNpcPos(-1, 300, 0, 500);
    }
    BindNpcIdle(-1, N(script_Idle_80243444));
    SetNpcAnimation(-1, 0xB60001);
    DisablePlayerPhysics(1);
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 0x8048, 1);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcAnimation(0xFFFFFFFC, 262);
    spawn {
        func_80240E80_8659C0(0);
    }
    spawn {
        func_80240E80_8659C0(1);
    }
    spawn {
        match SI_SAVE_VAR(0) {
            < 11 {
                func_80240E80_8659C0(2);
            }
            == 40 {
                func_80240E80_8659C0(2);
            }
        }
    }
    if (SI_SAVE_VAR(0) < 11) {
        return;
    }
    if (SI_SAVE_VAR(0) >= 15) {
        if (SI_SAVE_FLAG(1218) == 0) {
            return;
        }
    }
    spawn {
        func_80241290_865DD0();
        GetEntryID(SI_VAR(0));
        if (SI_VAR(0) == 0) {
            GotoMap(D_80244958_869498, 0);
        } else {
            GotoMap(D_80244950_869490, 1);
        }
    }
});

Script N(script_Init_80243A34) = SCRIPT({

});

s32 N(vectorList_80243A44)[] = {
    0xC3A60000, 0x42480000, 0x42F00000, 0xC3200000, 0x428C0000, 0x43960000, 0xC28E0000, 0x42A00000,
    0x43020000, 0x42D20000, 0x42B40000, 0x43830000, 0x435D0000, 0x42C80000, 0x42F00000, 0x43CA0000,
    0x42AA0000, 0x43160000, 0x436E0000, 0x428C0000, 0xC2640000, 0x427C0000, 0x428C0000, 0xC2280000,
    0xC3030000, 0x42700000, 0x43100000, 0xC2960000, 0x42C80000, 0xC2700000, 0x43480000, 0x42700000,
    0xC3960000, 0x41A00000, 0x42700000, 0xC38C0000, 0x428C0000, 0x42700000, 0x42A00000, 0xC3A60000,
    0x42480000, 0x42F00000,
};

Script N(script_80243AEC) = SCRIPT({
    group 0;
    CloneModel(22, 0x2AF8);
    SI_FLAG(0) = 1;
    SI_FLAG(1) = 0;
    SI_VAR(7) = 0;
10:
    LoadPath(500, N(vectorList_80243A44), 14, 0);
0:
    GetNextPathPos();
    TranslateModel(22, SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SI_VAR(8) = f SI_VAR(2);
    SI_VAR(8) *= -1;
    TranslateModel(0x2AF8, SI_VAR(1), SI_VAR(8), SI_VAR(3));
    func_80241388_865EC8();
    RotateModel(22, SI_VAR(7), 0, 1, 0);
    RotateModel(0x2AF8, SI_VAR(7), 0, 1, 0);
    RotateModel(0x2AF8, 180, 0, 0, 1);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(5) = SI_VAR(3);
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    goto 10;
});

Script N(script_80243CAC) = SCRIPT({
    CloneModel(22, SI_VAR(0));
    SI_VAR(15) = SI_VAR(0);
    SI_FLAG(0) = 1;
    SI_FLAG(1) = 0;
    SI_VAR(7) = 0;
    SI_VAR(8) = 0;
    SI_VAR(9) = 0;
    SI_VAR(10) = 0;
    RandInt(200, SI_VAR(1));
    SI_VAR(0) += 0xFFFFFF9C;
    RandInt(50, SI_VAR(2));
    SI_VAR(0) += 50;
    RandInt(200, SI_VAR(3));
    SI_VAR(0) += 0xFFFFFF9C;
10:
0:
    SI_VAR(14) = SI_VAR(15);
    if (SI_VAR(14) == 10000) {
        SI_VAR(14) = 22;
    } else {
        SI_VAR(14) += -1;
    }
    func_802412AC_865DEC(SI_VAR(14), SI_MAP_VAR(0), SI_MAP_VAR(1), SI_MAP_VAR(2));
    SI_VAR(0) = f SI_MAP_VAR(0);
    SI_VAR(0) -= f SI_VAR(1);
    if (SI_VAR(0) < 0) {
        SI_VAR(8) += -1;
    } else {
        SI_VAR(8) += 1;
    }
    if (SI_VAR(8) <= 0xFFFFFFF6) {
        SI_VAR(8) = f 0xFFFFFFF6;
    }
    if (SI_VAR(8) >= 10) {
        SI_VAR(8) = 10;
    }
    SI_VAR(1) += f SI_VAR(8);
    SI_VAR(0) = f SI_MAP_VAR(1);
    SI_VAR(0) -= f SI_VAR(2);
    if (SI_VAR(0) < 0) {
        SI_VAR(9) += -1;
    } else {
        SI_VAR(9) += 1;
    }
    if (SI_VAR(9) <= 0xFFFFFFF6) {
        SI_VAR(9) = f 0xFFFFFFF6;
    }
    if (SI_VAR(9) >= 10) {
        SI_VAR(9) = 10;
    }
    SI_VAR(2) += f SI_VAR(9);
    SI_VAR(0) = f SI_MAP_VAR(2);
    SI_VAR(0) -= f SI_VAR(3);
    if (SI_VAR(0) < 0) {
        SI_VAR(10) += -1;
    } else {
        SI_VAR(10) += 1;
    }
    if (SI_VAR(10) <= 0xFFFFFFF6) {
        SI_VAR(10) = f 0xFFFFFFF6;
    }
    if (SI_VAR(10) >= 10) {
        SI_VAR(10) = 10;
    }
    SI_VAR(3) += f SI_VAR(10);
    TranslateModel(SI_VAR(15), SI_VAR(1), SI_VAR(2), SI_VAR(3));
    func_80241388_865EC8();
    RotateModel(SI_VAR(15), SI_VAR(7), 0, 1, 0);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(5) = SI_VAR(3);
    sleep 1;
    if (SI_VAR(0) == 1) {
        goto 0;
    }
    goto 10;
});

Script N(script_Idle_80244114) = SCRIPT({
    SetSelfVar(0, 0);
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 0) {
            break;
        }
        sleep 1;
    }
    sleep 60;
    SetMusicTrack(0, 71, 0, 8);
    PlaySound(0x80000055);
    SetNpcAnimation(-1, 0x21000C);
    SetNpcPos(-1, 250, 0xFFFFFFE2, 500);
    sleep 5;
    parallel {
        loop {
            func_802415FC_86613C();
            sleep 5;
        }
    }
    SetNpcSpeed(-1, 2.0);
    NpcMoveTo(-1, 0xFFFFFED4, 500, 0);
    GotoMap(D_80244950_869490, 1);
    sleep 100;
});

Script N(script_Init_8024428C) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 15) {
        if (SI_SAVE_FLAG(1218) == 0) {
            BindNpcIdle(-1, N(script_Idle_80244114));
            return;
        }
    }
    RemoveNpc(-1);
});

StaticNpc N(npcGroup_802442F8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802433B0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F09,
        .init = N(script_Init_802436D0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
    },
};

StaticNpc N(npcGroup_802444E8)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802433DC),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D09,
        .init = N(script_Init_80243A34),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
    },
};

s32 N(extraAnimationList_802446D8)[] = {
    0x00210000, 0x00210003, 0x0021000C, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_802446E8)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80243408),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00440D0D,
        .init = N(script_Init_8024428C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
        .extraAnimations = N(extraAnimationList_802446D8),
        .tattle = 0x1A0006,
    },
};

NpcGroupList N(npcGroupList_802448D8) = {
    NPC_GROUP(N(npcGroup_802446E8), 0x00000000),
    NPC_GROUP(N(npcGroup_802442F8), 0x00000000),
    NPC_GROUP(N(npcGroup_802444E8), 0x00000000),
    {},
};

s32 pad_004908[] = {
    0x00000000, 0x00000000,
};

// rodata: jtbl_80244910_869450

s32 pad_004944[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80244950_869490

// rodata: D_80244958_869498

// rodata: D_80244960_8694A0

// rodata: D_80244968_8694A8
