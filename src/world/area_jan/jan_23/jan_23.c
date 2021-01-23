#include "jan_23.h"

Script N(script_80240050);
Script N(script_ExitWalk_80240070);
Script N(script_802400CC);
Script N(script_802405A8);
Script N(main);
s32 pad_0006C8[2];
Script N(script_802406D0);
Script N(script_80240754);
Script N(script_80240984);
Script N(script_80240AC4);
Script N(script_80240C04);
Script N(script_80240D44);
Script N(script_80240E84);
Script N(script_80240FC4);
Script N(script_80241050);
Script N(script_802410DC);
Script N(script_80241168);
Script N(script_802411F4);
Script N(script_80241258);
Script N(script_Interact_8024130C);
Script N(script_Interact_80242A8C);
Script N(script_Init_80242ABC);
Script N(script_Init_80242B4C);
Script N(script_Init_80242B5C);
Script N(script_Init_80242B6C);
Script N(script_Init_80242B7C);
Script N(script_Init_80242B8C);
StaticNpc N(npcGroup_80242B9C)[6];
NpcGroupList N(npcGroupList_8024373C);
s32 pad_003754[3];
const char D_80243760_B93430[8]; // "jan_19"
const char D_80243768_B93438[8]; // "jan_16"

EntryList N(entryList) = {
    { 230.0f, 160.0f, 106.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190102,
};

Script N(script_80240050) = SCRIPT({
    PlayAmbientSounds(3);
});

Script N(script_ExitWalk_80240070) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243760_B93430, 1);
    sleep 100;
});

Script N(script_802400CC) = SCRIPT({
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(1) < 110) {
            break;
        }
    }
    DisablePlayerInput(1);
    SI_MAP_VAR(5) = 0;
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 8) {
        spawn {
            DisablePartnerAI(0);
            SetNpcFlagBits(0xFFFFFFFC, 512, 0);
            if (SI_VAR(0) == 0) {
                GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
                SetNpcJumpscale(0xFFFFFFFC, 3.0);
                NpcJump0(0xFFFFFFFC, SI_VAR(2), SI_VAR(3), SI_VAR(4), 15);
            } else {
                sleep 10;
            }
            GetNpcPos(0xFFFFFFFC, SI_VAR(2), SI_VAR(3), SI_VAR(4));
            MakeLerp(SI_VAR(3), 0xFFFFFE0C, 15, 0);
            loop {
                UpdateLerp();
                SI_VAR(4) += 2;
                SetNpcPos(0xFFFFFFFC, SI_VAR(2), SI_VAR(0), SI_VAR(4));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
        }
        spawn {
            GetPlayerActionState(SI_VAR(0));
            match SI_VAR(0) {
                == 13 {
                    goto 11;
                }
                == 15 {
                11:
                    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                    UseSettingsFrom(0, SI_VAR(0), 250, 100);
                    SetPanTarget(0, SI_VAR(0), 0xFFFFFF9C, SI_VAR(2));
                    SetCamSpeed(0, 90.0);
                    PanToTarget(0, 0, 1);
                    SI_MAP_VAR(5) = -1;
                }
                else {
                    sleep 10;
                }
            }
            DisablePlayerPhysics(1);
            GetPlayerPos(SI_VAR(2), SI_VAR(3), SI_VAR(4));
            MakeLerp(SI_VAR(3), 0xFFFFFE0C, 15, 0);
            loop {
                UpdateLerp();
                SI_VAR(4) += 2;
                SetPlayerPos(SI_VAR(2), SI_VAR(0), SI_VAR(4));
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            SetPlayerActionState(10);
        }
    }
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(1) < 0xFFFFFF9C) {
            break;
        }
    }
    if (SI_MAP_VAR(5) == 0) {
        UseSettingsFrom(0, SI_VAR(0), 250, 100);
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
    }
    sleep 30;
    GotoMap(D_80243768_B93438, 4);
    sleep 100;
});

Script N(script_802405A8) = SCRIPT({
    bind N(script_ExitWalk_80240070) to 0x80000 0;
    spawn N(script_802400CC);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_8024373C));
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    SI_VAR(0) = N(script_802405A8);
    spawn EnterWalk;
    await N(script_80240050);
});

s32 pad_0006C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802406D0) = SCRIPT({
    SetNpcScale(-1, 1.5, 1.5, 1.5);
});

NpcSettings N(npcSettings_802406FC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x62,
    .radius = 0x50,
    .otherAI = &N(script_802406D0),
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

NpcSettings N(npcSettings_80240728) = {
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

Script N(script_80240754) = SCRIPT({
    loop 4 {
        SetNpcAnimation(0, 0xC40006);
        InterpNpcYaw(1, 90, 1);
        InterpNpcYaw(2, 270, 1);
        InterpNpcYaw(3, 0, 4);
        InterpNpcYaw(4, 90, 1);
        InterpNpcYaw(5, 270, 1);
        sleep 20;
        SetNpcAnimation(0, 0xC40003);
        InterpNpcYaw(1, 270, 2);
        InterpNpcYaw(2, 90, 1);
        InterpNpcYaw(3, 0, 1);
        InterpNpcYaw(4, 270, 4);
        InterpNpcYaw(5, 90, 1);
        sleep 20;
    }
    SetNpcAnimation(1, 0x980001);
    SetNpcAnimation(2, 0x980001);
    SetNpcAnimation(3, 0x980001);
    SetNpcAnimation(4, 0x980001);
    SetNpcAnimation(5, 0x980001);
    InterpNpcYaw(1, 0, 1);
    InterpNpcYaw(2, 0, 1);
    InterpNpcYaw(3, 0, 1);
    InterpNpcYaw(4, 0, 1);
    InterpNpcYaw(5, 0, 1);
});

Script N(script_80240984) = SCRIPT({
    0x802CDE68(1, 50);
    loop 2 {
        SI_VAR(3) = 0xFFFFFFE2;
        loop 20 {
            SetNpcRotation(1, 0, 0, SI_VAR(3));
            SI_VAR(3) += 3;
            sleep 1;
        }
        loop 20 {
            SetNpcRotation(1, 0, 0, SI_VAR(3));
            SI_VAR(3) += 0xFFFFFFFD;
            sleep 1;
        }
    }
    loop 10 {
        SetNpcRotation(1, 0, 0, SI_VAR(3));
        SI_VAR(3) += 3;
        sleep 1;
    }
    0x802CDE68(1, 0);
});

Script N(script_80240AC4) = SCRIPT({
    0x802CDE68(2, 60);
    loop 2 {
        SI_VAR(3) = 0xFFFFFFE2;
        loop 20 {
            SetNpcRotation(2, 0, 0, SI_VAR(3));
            SI_VAR(3) += 3;
            sleep 1;
        }
        loop 20 {
            SetNpcRotation(2, 0, 0, SI_VAR(3));
            SI_VAR(3) += 0xFFFFFFFD;
            sleep 1;
        }
    }
    loop 10 {
        SetNpcRotation(2, 0, 0, SI_VAR(3));
        SI_VAR(3) += 3;
        sleep 1;
    }
    0x802CDE68(2, 0);
});

Script N(script_80240C04) = SCRIPT({
    0x802CDE68(3, 50);
    loop 2 {
        SI_VAR(3) = 0xFFFFFFE2;
        loop 20 {
            SetNpcRotation(3, 0, 0, SI_VAR(3));
            SI_VAR(3) += 3;
            sleep 1;
        }
        loop 20 {
            SetNpcRotation(3, 0, 0, SI_VAR(3));
            SI_VAR(3) += 0xFFFFFFFD;
            sleep 1;
        }
    }
    loop 10 {
        SetNpcRotation(3, 0, 0, SI_VAR(3));
        SI_VAR(3) += 3;
        sleep 1;
    }
    0x802CDE68(3, 0);
});

Script N(script_80240D44) = SCRIPT({
    0x802CDE68(4, 60);
    loop 2 {
        SI_VAR(3) = 0xFFFFFFE2;
        loop 20 {
            SetNpcRotation(4, 0, 0, SI_VAR(3));
            SI_VAR(3) += 3;
            sleep 1;
        }
        loop 20 {
            SetNpcRotation(4, 0, 0, SI_VAR(3));
            SI_VAR(3) += 0xFFFFFFFD;
            sleep 1;
        }
    }
    loop 10 {
        SetNpcRotation(4, 0, 0, SI_VAR(3));
        SI_VAR(3) += 3;
        sleep 1;
    }
    0x802CDE68(4, 0);
});

Script N(script_80240E84) = SCRIPT({
    0x802CDE68(5, 50);
    loop 2 {
        SI_VAR(3) = 0xFFFFFFE2;
        loop 20 {
            SetNpcRotation(5, 0, 0, SI_VAR(3));
            SI_VAR(3) += 3;
            sleep 1;
        }
        loop 20 {
            SetNpcRotation(5, 0, 0, SI_VAR(3));
            SI_VAR(3) += 0xFFFFFFFD;
            sleep 1;
        }
    }
    loop 10 {
        SetNpcRotation(5, 0, 0, SI_VAR(3));
        SI_VAR(3) += 3;
        sleep 1;
    }
    0x802CDE68(5, 0);
});

Script N(script_80240FC4) = SCRIPT({
    sleep 10;
    SetNpcAnimation(1, 0x980003);
    SetNpcSpeed(1, 3.0);
    NpcMoveTo(1, 540, 85, 0);
    SetNpcAnimation(1, 0x980001);
    InterpNpcYaw(1, 0, 1);
});

Script N(script_80241050) = SCRIPT({
    sleep 10;
    SetNpcAnimation(2, 0x980003);
    SetNpcSpeed(2, 3.0);
    NpcMoveTo(2, 560, 132, 0);
    SetNpcAnimation(2, 0x980001);
    InterpNpcYaw(2, 0, 1);
});

Script N(script_802410DC) = SCRIPT({
    sleep 10;
    SetNpcAnimation(3, 0x980003);
    SetNpcSpeed(3, 3.0);
    NpcMoveTo(3, 590, 105, 0);
    SetNpcAnimation(3, 0x980001);
    InterpNpcYaw(3, 0, 1);
});

Script N(script_80241168) = SCRIPT({
    sleep 10;
    SetNpcAnimation(4, 0x980003);
    SetNpcSpeed(4, 3.0);
    NpcMoveTo(4, 615, 122, 0);
    SetNpcAnimation(4, 0x980001);
    InterpNpcYaw(4, 0, 1);
});

Script N(script_802411F4) = SCRIPT({
0:
    0x802D7E08(5, 1, 0xFFFFFFD3, 1, 0, 0, 0, 0, 20);
    sleep 8;
    goto 0;
});

Script N(script_80241258) = SCRIPT({
    sleep 10;
    SI_VAR(9) = spawn N(script_802411F4);
    SetNpcAnimation(5, 0x980003);
    SetNpcSpeed(5, 4.0);
    NpcMoveTo(5, 645, 78, 0);
    SetNpcAnimation(5, 0x980001);
    InterpNpcYaw(5, 0, 1);
    sleep 15;
    kill SI_VAR(9);
});

Script N(script_Interact_8024130C) = SCRIPT({
    DisablePlayerInput(1);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 460);
    SetCamPitch(0, 16.0, -9.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(-1, 0xC40006, 0xC40003, 0, 0x1000DA);
    SetPlayerAnimation(0x10002);
    sleep 5;
    SetPlayerAnimation(0x80007);
    sleep 35;
    SpeakToPlayer(-1, 0xC40006, 0xC40003, 5, 0x1000DB);
    sleep 20;
    spawn {
        SI_MAP_FLAG(0) = 0;
        SpeakToPlayer(-1, 0xC40008, 0xC40008, 5, 0x1000DC);
        SI_MAP_FLAG(0) = 1;
    }
    0x802D7CF8(0, 0, 0, 320, 240, 128, 10);
    SetNpcAnimation(-1, 0xC40008);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 12.0);
    loop 5 {
        PlaySoundAtNpc(-1, 902, 0);
        SetCamDistance(0, 310);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PlaySoundAtNpc(-1, 903, 0);
        SetCamDistance(0, 460);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
    }
    0x802D7CF8(0, 0, 0, 320, 240, 0, 10);
2:
    if (SI_MAP_FLAG(0) == 0) {
        sleep 1;
        goto 2;
    }
    SetNpcAnimation(-1, 0xC40003);
    sleep 15;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 30;
    SI_VAR(1) += 0;
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 580);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    InterpNpcYaw(-1, 90, 1);
    SetNpcAnimation(1, 0x980006);
    SetNpcAnimation(2, 0x980006);
    SetNpcAnimation(3, 0x980006);
    SetNpcAnimation(4, 0x980006);
    SetNpcAnimation(5, 0x980006);
    SetNpcPos(1, 800, 450, 0xFFFFFFEC);
    SetNpcPos(2, 820, 452, 0);
    SetNpcPos(3, 840, 452, 27);
    SetNpcPos(4, 830, 452, 56);
    SetNpcPos(5, 795, 455, 20);
    EnableNpcShadow(1, 0);
    EnableNpcShadow(2, 0);
    EnableNpcShadow(3, 0);
    EnableNpcShadow(4, 0);
    EnableNpcShadow(5, 0);
    spawn {
        spawn N(script_80240984);
        SetNpcJumpscale(1, 0);
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF88;
        SI_VAR(1) += 0xFFFFFF06;
        SI_VAR(2) += 63;
        PlaySoundAtNpc(1, 524, 0);
        NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 100);
        SetNpcAnimation(1, 0x980001);
        EnableNpcShadow(1, 1);
        await N(script_80240FC4);
    }
    sleep 20;
    spawn {
        spawn N(script_80240AC4);
        SetNpcJumpscale(2, 0);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF88;
        SI_VAR(1) += 0xFFFFFF06;
        SI_VAR(2) += 63;
        PlaySoundAtNpc(2, 525, 0);
        NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 100);
        SetNpcAnimation(2, 0x980001);
        EnableNpcShadow(2, 1);
        await N(script_80241050);
    }
    sleep 20;
    spawn {
        InterpPlayerYaw(90, 1);
        sleep 20;
        SI_VAR(3) = 625;
        SI_VAR(5) = 220;
        PlayerMoveTo(SI_VAR(3), SI_VAR(5), 30);
        InterpPlayerYaw(10, 4);
    }
    spawn {
        spawn N(script_80240C04);
        SetNpcJumpscale(3, 0);
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF9C;
        SI_VAR(1) += 0xFFFFFF06;
        SI_VAR(2) += 50;
        PlaySoundAtNpc(3, 526, 0);
        NpcJump0(3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 90);
        SetNpcAnimation(3, 0x980001);
        EnableNpcShadow(3, 1);
        await N(script_802410DC);
    }
    sleep 40;
    spawn {
        spawn N(script_80240D44);
        SetNpcJumpscale(4, 0);
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF9C;
        SI_VAR(1) += 0xFFFFFF06;
        SI_VAR(2) += 60;
        PlaySoundAtNpc(4, 524, 0);
        NpcJump0(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 100);
        SetNpcAnimation(4, 0x980001);
        EnableNpcShadow(4, 1);
        await N(script_80241168);
    }
    sleep 20;
    spawn N(script_80240E84);
    SetNpcJumpscale(5, 0);
    PlaySoundAtNpc(5, 525, 0);
    NpcJump0(5, 737, 200, 65, 100);
    SetNpcAnimation(5, 0x980001);
    EnableNpcShadow(5, 1);
    await N(script_80241258);
    sleep 20;
    InterpPlayerYaw(350, 4);
    SpeakToPlayer(-1, 0xC40006, 0xC40003, 5, 0x1000DD);
    SpeakToPlayer(-1, 0xC40006, 0xC40003, 5, 0x1000DE);
    await N(script_80240754);
    SpeakToPlayer(-1, 0xC40006, 0xC40003, 5, 0x1000DF);
    SetCamSpeed(0, 4.0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, 535, 200, 215);
    SetCamSpeed(0, 1.5);
    PanToTarget(0, 0, 1);
    sleep 20;
    spawn {
        sleep 20;
        ShakeCam(0, 0, 5, 1.0);
        sleep 15;
        PlaySoundAtNpc(-1, 524, 0);
    }
    spawn {
        SetNpcFlagBits(-1, 512, 1);
        SetNpcJumpscale(-1, 1.0);
        SetNpcAnimation(-1, 0xC40004);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFBA;
        SI_VAR(1) += 0xFFFFFFF9;
        SI_VAR(2) += 175;
        NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20);
        SetNpcAnimation(-1, 0xC40002);
        SetNpcJumpscale(-1, 1.5);
        SetNpcAnimation(-1, 0xC40004);
        GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF9C;
        SI_VAR(1) += 0xFFFFFED4;
        SI_VAR(2) += 175;
        NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30);
        SetNpcAnimation(-1, 0xC40002);
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(-1, 512, 0);
    }
    sleep 40;
    spawn {
        sleep 35;
        PlaySoundAtNpc(1, 525, 0);
    }
    spawn {
        SetNpcFlagBits(1, 512, 1);
        SetNpcAnimation(1, 0x980003);
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFD8;
        SI_VAR(2) += 154;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 20);
        SetNpcAnimation(1, 0x980001);
        SetNpcJumpscale(1, 1.5);
        SetNpcAnimation(1, 0x980003);
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFEC;
        SI_VAR(1) += 0xFFFFFED4;
        SI_VAR(2) += 154;
        NpcJump0(1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30);
        SetNpcAnimation(1, 0x980001);
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(1, 512, 0);
    }
    sleep 20;
    spawn {
        sleep 35;
        PlaySoundAtNpc(2, 526, 0);
    }
    spawn {
        SetNpcFlagBits(2, 512, 1);
        SetNpcAnimation(2, 0x980003);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFC9;
        SI_VAR(2) += 110;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 20);
        SetNpcAnimation(2, 0x980001);
        SetNpcJumpscale(2, 1.5);
        SetNpcAnimation(2, 0x980003);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFD8;
        SI_VAR(1) += 0xFFFFFED4;
        SI_VAR(2) += 110;
        NpcJump0(2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30);
        SetNpcAnimation(2, 0x980001);
        SetNpcPos(2, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(2, 512, 0);
    }
    sleep 20;
    spawn {
        sleep 35;
        PlaySoundAtNpc(3, 524, 0);
    }
    spawn {
        SetNpcFlagBits(3, 512, 1);
        SetNpcAnimation(3, 0x980003);
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFB5;
        SI_VAR(2) += 134;
        NpcMoveTo(3, SI_VAR(0), SI_VAR(2), 20);
        SetNpcAnimation(3, 0x980001);
        SetNpcJumpscale(3, 1.5);
        SetNpcAnimation(3, 0x980003);
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFBA;
        SI_VAR(1) += 0xFFFFFED4;
        SI_VAR(2) += 134;
        NpcJump0(3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30);
        SetNpcAnimation(3, 0x980001);
        SetNpcPos(3, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(3, 512, 0);
    }
    sleep 20;
    spawn {
        sleep 35;
        PlaySoundAtNpc(4, 525, 0);
    }
    spawn {
        SetNpcFlagBits(4, 512, 1);
        SetNpcAnimation(4, 0x980003);
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF92;
        SI_VAR(2) += 115;
        NpcMoveTo(4, SI_VAR(0), SI_VAR(2), 20);
        SetNpcAnimation(4, 0x980001);
        SetNpcJumpscale(4, 1.5);
        SetNpcAnimation(4, 0x980003);
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFF92;
        SI_VAR(1) += 0xFFFFFED4;
        SI_VAR(2) += 115;
        NpcJump0(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30);
        SetNpcAnimation(4, 0x980001);
        SetNpcPos(4, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(4, 512, 0);
    }
    sleep 10;
    spawn {
        sleep 45;
        PlaySoundAtNpc(5, 526, 0);
    }
    SetNpcFlagBits(5, 512, 1);
    SetNpcAnimation(5, 0x980003);
    GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 0xFFFFFF9C;
    SI_VAR(2) += 161;
    NpcMoveTo(5, SI_VAR(0), SI_VAR(2), 30);
    spawn {
        SetNpcAnimation(5, 0x980001);
        SetNpcJumpscale(5, 1.5);
        SetNpcAnimation(5, 0x980003);
        GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 0xFFFFFFBA;
        SI_VAR(1) += 0xFFFFFE0C;
        SI_VAR(2) += 161;
        NpcJump0(5, SI_VAR(0), SI_VAR(1), SI_VAR(2), 35);
        SetNpcAnimation(5, 0x980001);
        SetNpcPos(5, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(5, 512, 0);
    }
    SetPanTarget(0, 550, 0xFFFFFF6A, 400);
    SetCamDistance(0, 580);
    SetCamPitch(0, 16.0, -4.0);
    SetCamSpeed(0, 1.80078125);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 15;
    ResetCam(0, 2.0);
    SI_SAVE_VAR(0) = 21;
    DisablePlayerInput(0);
});

Script N(script_Interact_80242A8C) = SCRIPT({
    SpeakToPlayer(-1, 0xC40006, 0xC40003, 0, 0x1000E0);
});

Script N(script_Init_80242ABC) = SCRIPT({
    SetNpcAnimation(-1, 0xC40003);
    match SI_SAVE_VAR(0) {
        < 21 {
            BindNpcInteract(-1, N(script_Interact_8024130C));
        }
        >= 24 {
            BindNpcInteract(-1, N(script_Interact_80242A8C));
        }
        else {
            RemoveNpc(-1);
        }
    }
});

Script N(script_Init_80242B4C) = SCRIPT({

});

Script N(script_Init_80242B5C) = SCRIPT({

});

Script N(script_Init_80242B6C) = SCRIPT({

});

Script N(script_Init_80242B7C) = SCRIPT({

});

Script N(script_Init_80242B8C) = SCRIPT({

});

StaticNpc N(npcGroup_80242B9C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802406FC),
        .pos = { 590.0, 210.0, 0.0 },
        .flags = 0x0000150D,
        .init = N(script_Init_80242ABC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002, 0x00C40002,
        },
        .tattle = 0x1A00D0,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240728),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x0000050D,
        .init = N(script_Init_80242B4C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00C9,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80240728),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x0000050D,
        .init = N(script_Init_80242B5C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80240728),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x0000050D,
        .init = N(script_Init_80242B6C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CB,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80240728),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x0000050D,
        .init = N(script_Init_80242B7C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CC,
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80240728),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x0000050D,
        .init = N(script_Init_80242B8C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001, 0x00980001,
        },
        .tattle = 0x1A00CD,
    },
};

NpcGroupList N(npcGroupList_8024373C) = {
    NPC_GROUP(N(npcGroup_80242B9C), 0x00000000),
    {},
};

s32 pad_003754[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80243760_B93430

// rodata: D_80243768_B93438
