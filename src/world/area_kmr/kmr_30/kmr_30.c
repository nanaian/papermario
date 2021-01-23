#include "kmr_30.h"

s32 pad_00030C[1];
s32 pad_0004D8[2];
Script N(script_80240530);
Script N(main);
s32 pad_0006DC[1];
StaticNpc N(npcGroup_8024070C)[1];
NpcGroupList N(npcGroupList_802408FC);
s32 pad_000914[3];
Script N(script_80240920);
s32 N(unk_80240C0C)[1];
Script N(script_80240C10);

// text: func_80240000_90B6D0

// text: func_80240124_90B7F4

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_90B9E0

// text: func_8024045C_90BB2C

// text: func_80240488_90BB58

s32 pad_0004D8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x0,
};

Script N(script_80240530) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_90B6D0();
                    return;
                }
            }
        }
    }
    func_80240124_90B7F4();
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 44;
    SetSpriteShading(0x10000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_802408FC));
    EnableStatusMenu(0);
    spawn {
        FadeOutMusic(0, 5000);
        sleep 390;
        SetMusicTrack(0, 110, 0, 8);
    }
    spawn N(script_80240C10);
});

s32 pad_0006DC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_802406E0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x2E,
    .radius = 0x24,
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

StaticNpc N(npcGroup_8024070C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802406E0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004, 0x00D60004,
        },
    },
};

NpcGroupList N(npcGroupList_802408FC) = {
    NPC_GROUP(N(npcGroup_8024070C), 0x00000000),
    {},
};

s32 pad_000914[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240920) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    RandInt(400, SI_VAR(0));
    SI_VAR(1) = 0xFFFFFFD1;
    SI_VAR(1) += SI_VAR(0);
    RandInt(250, SI_VAR(0));
    SI_VAR(2) = 220;
    SI_VAR(2) += SI_VAR(0);
    RandInt(200, SI_VAR(0));
    SI_VAR(3) = 0xFFFFFE3E;
    SI_VAR(3) += SI_VAR(0);
    RandInt(2, SI_VAR(0));
    SI_VAR(4) = -1;
    SI_VAR(4) += SI_VAR(0);
    RandInt(4, SI_VAR(0));
    SI_VAR(5) = 2;
    SI_VAR(5) += SI_VAR(0);
    RandInt(2, SI_VAR(0));
    SI_VAR(6) = -1;
    SI_VAR(6) += SI_VAR(0);
    RandInt(5, SI_VAR(0));
    SI_VAR(7) = 1.0;
    SI_VAR(0) *= 0.1005859375;
    SI_VAR(7) += f SI_VAR(0);
    PlayEffect(119, SI_VAR(10), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), 70, 0, 0, 0, 0);
    func_80240310_90B9E0(SI_VAR(15));
    if (SI_VAR(10) != 2) {
        RandInt(100, SI_VAR(8));
        if (SI_VAR(8) < 50) {
            if (SI_VAR(10) == 0) {
                PlayEffect(119, 1, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), 70, 0, 0, 0, 0);
            } else {
                PlayEffect(119, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), 70, 0, 0, 0, 0);
            }
            func_80240310_90B9E0(SI_VAR(15));
        }
    }
});

s32 N(unk_80240C0C)[] = {
    0x00000000,
};

Script N(script_80240C10) = SCRIPT({
    DisablePlayerInput(1);
    InterpPlayerYaw(270, 0);
    SetPlayerPos(520, 0, 0xFFFFFF4C);
    SetNpcAnimation(0, 0xD6000D);
    SetNpcYaw(0, 270);
    SetNpcPos(0, 560, 0, 0xFFFFFF4C);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFE0C, 0);
    EnableGroup(84, 0);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamPitch(0, 8.0, -11.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        SetNpcSpeed(0, 2.0);
        SetNpcFlagBits(0, 512, 1);
        SetNpcFlagBits(0, 8, 0);
        SetNpcAnimation(0, 0xD6000F);
        NpcMoveTo(0, 450, 0xFFFFFFC4, 0);
        SetNpcAnimation(0, 0xD60010);
        NpcMoveTo(0, 350, 0xFFFFFFA6, 0);
        NpcMoveTo(0, 330, 0xFFFFFF7E, 0);
        SetNpcAnimation(0, 0xD6000E);
    }
    SetPlayerSpeed(2.0);
    PlayerMoveTo(450, 0xFFFFFFC4, 0);
    PlayerMoveTo(320, 0xFFFFFFB0, 0);
    PlayerMoveTo(300, 0xFFFFFF88, 0);
    sleep 30;
    PlayEffect(119, 0, 153, 370, 0xFFFFFEA2, -1, 4, -1, 1.6005859375, 70, 0, 0, 0, 0);
    func_80240310_90B9E0(SI_VAR(15));
    sleep 30;
    PlayEffect(119, 1, 333, 420, 0xFFFFFEF2, -1, 4, -1, 1.6005859375, 70, 0, 0, 0, 0);
    func_80240310_90B9E0(SI_VAR(15));
    sleep 30;
    PlayEffect(119, 0, 0xFFFFFFE5, 320, 0xFFFFFE52, -1, 4, -1, 1.6005859375, 70, 0, 0, 0, 0);
    func_80240310_90B9E0(SI_VAR(15));
    sleep 80;
    PlayEffect(119, 2, 153, 370, 0xFFFFFEA2, -1, 4, -1, 1.6005859375, 70, 0, 0, 0, 0);
    func_80240310_90B9E0(SI_VAR(15));
    sleep 30;
    spawn {
        sleep 150;
        loop {
            RandInt(60, SI_VAR(1));
            SI_VAR(1) += 5;
            RandInt(5, SI_VAR(2));
            SI_VAR(2) += 1;
            loop SI_VAR(2) {
                SI_VAR(0) = 0;
                spawn N(script_80240920);
                sleep SI_VAR(1);
            }
            RandInt(60, SI_VAR(0));
            SI_VAR(0) += 60;
            sleep SI_VAR(0);
            SI_VAR(0) = 2;
            spawn N(script_80240920);
            RandInt(60, SI_VAR(0));
            SI_VAR(0) += 60;
            sleep SI_VAR(0);
        }
    }
    spawn {
        sleep 240;
        loop {
            RandInt(60, SI_VAR(1));
            SI_VAR(1) += 5;
            RandInt(5, SI_VAR(2));
            SI_VAR(2) += 1;
            loop SI_VAR(2) {
                SI_VAR(0) = 1;
                spawn N(script_80240920);
                sleep SI_VAR(1);
            }
            RandInt(60, SI_VAR(0));
            SI_VAR(0) += 60;
            sleep SI_VAR(0);
            SI_VAR(0) = 2;
            spawn N(script_80240920);
            RandInt(60, SI_VAR(0));
            SI_VAR(0) += 60;
            sleep SI_VAR(0);
        }
    }
    sleep 30;
    EnableGroup(84, 1);
    0x802C90FC(79, 1, -1);
    0x802C90FC(80, 1, -1);
    0x802C90FC(81, 1, -1);
    0x802C90FC(82, 1, -1);
    0x802C90FC(83, 1, -1);
    0x802C94A0(1, func_80240488_90BB58, 0);
    MakeLerp(0, 255, 90, 0);
    loop {
        UpdateLerp();
        func_8024045C_90BB2C(SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    sleep 600;
    spawn {
        PlayEffect(119, 0, 310, 280, 0xFFFFFF06, -1, 6, -1, 1.6005859375, 70, 0, 0, 0, 0);
        func_80240310_90B9E0(SI_VAR(15));
    }
    sleep 20;
    MakeLerp(0, 100, 30, 0);
    loop {
        UpdateLerp();
        SI_VAR(2) = 3.6005859375;
        SI_VAR(3) = -6.0;
        SI_VAR(4) = 0.6005859375;
        SI_VAR(5) = -0.0048828125;
        SI_VAR(2) *= f SI_VAR(0);
        SI_VAR(3) *= f SI_VAR(0);
        SI_VAR(4) *= f SI_VAR(0);
        SI_VAR(5) *= f SI_VAR(0);
        SI_VAR(5) += 1.0;
        ScaleGroup(84, SI_VAR(5), SI_VAR(5), SI_VAR(5));
        TranslateGroup(84, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});
