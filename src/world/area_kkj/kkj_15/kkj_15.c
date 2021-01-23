#include "kkj_15.h"

s32 pad_000334[3];
s32 pad_0004FC[1];
s32 pad_0005C8[2];
s32 pad_000608[2];
Script N(script_80240680);
s32 pad_00074C[1];
Script N(script_UpdateTexturePan_80240750);
s32 pad_0007EC[1];
s32 N(displayList_802407F0)[32];
Script N(script_ExitSingleDoor_80240870);
Script N(script_80240A04);
Script N(script_EnterSingleDoor_80240A30);
Script N(main);
s32 pad_001008[2];
Script N(script_80241010);
Script N(script_802411DC);
Script N(script_8024135C);
Script N(script_80241408);
Script N(script_80241550);
s32 pad_00165C[1];
Script N(script_80241660);
Script N(script_80241708);
Script N(script_802417BC);
Script N(script_80241870);
Script N(script_80241910);
Script N(script_802419C0);
Script N(script_80241A70);
s32 pad_0034B8[2];
s32 N(vectorList_802434C0)[33];
s32 N(vectorList_80243544)[9];
Script N(script_80243568);
Script N(script_802437CC);
Script N(script_802439F0);
Script N(script_80243C20);
Script N(script_80243C8C);
Script N(script_80244AF4);
s32 pad_004B3C[1];
Script N(script_ExitSingleDoor_80244B40);
Script N(script_80244C70);
s32 pad_004C9C[1];
s32 N(vectorList_80244CA0)[9];
s32 N(vectorList_80244CC4)[21];
s32 N(vectorList_80244D18)[9];
Script N(script_80244D3C);
Script N(script_80244FA0);
Script N(script_802451C4);
Script N(script_802453F4);
s32 pad_006284[3];
s32 N(extraAnimationList_80246314)[7];
s32 N(extraAnimationList_80246330)[4];
s32 N(extraAnimationList_80246340)[10];
StaticNpc N(npcGroup_80246368)[6];
NpcGroupList N(npcGroupList_80246F08);
s32 N(extraAnimationList_80246F78)[7];
s32 N(extraAnimationList_80246F94)[6];
StaticNpc N(npcGroup_80246FAC)[3];
NpcGroupList N(npcGroupList_8024757C);
s32 pad_007594[3];
s32 N(extraAnimationList_80247624)[9];
s32 N(extraAnimationList_80247648)[5];
s32 N(extraAnimationList_8024765C)[6];
StaticNpc N(npcGroup_80247674)[4];
NpcGroupList N(npcGroupList_80247E34);
s32 pad_007E4C[1];
const char D_80247E50_AED3E0[8]; // "kmr_10"
const char D_80247E58_AED3E8[8]; // "trd_00"
const char D_80247E60_AED3F0[8]; // "arn_07"
const char D_80247E68_AED3F8[8]; // "kkj_11"
const char D_80247E70_AED400[8]; // "kkj_11"
s32 pad_007E78[2];

// text: func_80240000_AE5590

// text: func_80240124_AE56B4

// text: func_8024030C_AE589C

s32 pad_000334[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240340_AE58D0

s32 pad_0004FC[] = {
    0x00000000,
};

// text: func_80240500_AE5A90

s32 pad_0005C8[] = {
    0x00000000, 0x00000000,
};

// text: func_802405D0_AE5B60

// text: func_802405EC_AE5B7C

s32 pad_000608[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 225.0f, 0.0f, -80.0f, 270.0f },
    { 50.0f, 10.0f, -150.0f, 270.0f },
    { -237.0f, 0.0f, -5.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190010,
};

Script N(script_80240680) = SCRIPT({
    match SI_SAVE_VAR(0) {
        0xFFFFFF97, 0xFFFFFFB4, 0xFFFFFFF2, 88 {
            SetMusicTrack(0, 115, 0, 8);
        }
        0xFFFFFFCA, 6, 38, 58 {
            SetMusicTrack(0, 116, 0, 8);
        }
    }
});

s32 pad_00074C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80240750) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_AE5590();
                    return;
                }
            }
        }
    }
    func_80240124_AE56B4();
});

s32 pad_0007EC[] = {
    0x00000000,
};

s32 N(displayList_802407F0)[] = {
    0xE7000000, 0x00000000, 0xD7000002, 0xFFFFFFFF, 0xE3000A01, 0x00100000, 0xE3000C00, 0x00080000,
    0xE3000D01, 0x00000000, 0xE3000F00, 0x00000000, 0xE3001001, 0x00000000, 0xE3001201, 0x00002000,
    0xE3001402, 0x00000C00, 0xFA000000, 0x4B1F13FF, 0xFB000000, 0xFF764D00, 0xFC10E5E0, 0x230B1D52,
    0xE200001C, 0x0C184B50, 0xD9FDFFFF, 0x00000000, 0xD9FFFFFF, 0x00200404, 0xDF000000, 0x00000000,
};

Script N(script_ExitSingleDoor_80240870) = SCRIPT({
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_8024030C_AE589C();
    PlaySound(220);
    GotoMapSpecial(D_80247E50_AED3E0, 0, 12);
    sleep 100;
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_8024030C_AE589C();
    PlaySound(220);
    GotoMapSpecial(D_80247E58_AED3E8, 5, 12);
    sleep 100;
    SI_VAR(0) = SI_SAVE_VAR(78);
    func_8024030C_AE589C();
    PlaySound(220);
    GotoMapSpecial(D_80247E60_AED3F0, 3, 12);
    sleep 100;
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 2;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80247E68_AED3F8, 3);
    sleep 100;
});

Script N(script_80240A04) = SCRIPT({
    bind 0x80240960 to TriggerFlag_WALL_INTERACT 2;
});

Script N(script_EnterSingleDoor_80240A30) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 2;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
            spawn N(script_80240A04);
        }
        == 1 {
            match SI_SAVE_VAR(0) {
                == 0xFFFFFFB4 {
                    spawn N(script_80241550);
                    spawn N(script_80244AF4);
                }
                == 0xFFFFFFCA {
                    spawn N(script_80241550);
                    spawn N(script_80244C70);
                }
                == 0xFFFFFFF2 {
                    spawn N(script_802453F4);
                } else {
                    spawn N(script_80241550);
                    spawn N(script_80240A04);
                }
            }
        }
        == 2 {
            spawn N(script_80241A70);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 2 {
            SI_SAVE_VAR(0) = 0xFFFFFF94;
        }
    }
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF94 {
            MakeNpcs(0, N(npcGroupList_80246F08));
        }
        == 0xFFFFFFB4 {
            MakeNpcs(0, N(npcGroupList_8024757C));
        }
        == 0xFFFFFFF2 {
            MakeNpcs(0, N(npcGroupList_80247E34));
        }
    }
    if (SI_SAVE_VAR(0) != 0xFFFFFFB4) {
        EnableModel(19, 0);
        ModifyColliderFlags(0, 10, 0x7FFFFE00);
    }
    ModifyColliderFlags(0, 32, 0x7FFFFE00);
    SetTexPanner(74, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 40;
        SI_VAR(4) = 900;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240750);
    }
    0x802C90FC(74, 0, -1);
    0x802C9428(0, N(displayList_802407F0), 0);
    SetTexPanner(78, 0);
    spawn {
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 40;
        SI_VAR(4) = 900;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240750);
    }
    0x802C90FC(78, 0, -1);
    0x802C9428(0, N(displayList_802407F0), 0);
    UseDoorSounds(0);
    spawn N(script_80240680);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        if (SI_SAVE_VAR(0) == 0xFFFFFFF2) {
            StopSound(147);
        } else {
            PlaySoundAt(147, 0, 50, 5, 0xFFFFFF38);
        }
        sleep 10;
    }
    spawn N(script_EnterSingleDoor_80240A30);
    sleep 1;
});

s32 pad_001008[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241010) = SCRIPT({
    ModifyColliderFlags(0, 26, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    ModifyColliderFlags(1, 28, 0x7FFFFE00);
    GetPlayerPos(SI_VAR(7), SI_VAR(0), SI_VAR(8));
    GetNpcPos(0xFFFFFFFC, SI_VAR(9), SI_VAR(0), SI_VAR(10));
    spawn {
        sleep 180;
        SetPlayerAnimation(0xC0011);
    }
    PlaySoundAt(147, 0, 50, 5, 0xFFFFFF38);
    MakeLerp(0, 0xFFFFF8F8, 360, 0);
    loop {
        UpdateLerp();
        SI_VAR(2) = f SI_VAR(0);
        SI_VAR(2) /= 10;
        RotateGroup(95, SI_VAR(2), 0, 1, 0);
        func_80240340_AE58D0();
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(147);
    ModifyColliderFlags(1, 32, 0x7FFFFE00);
    ModifyColliderFlags(1, 5, 0x7FFFFE00);
});

Script N(script_802411DC) = SCRIPT({
    ModifyColliderFlags(0, 26, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    ModifyColliderFlags(1, 28, 0x7FFFFE00);
    GetPlayerPos(SI_VAR(7), SI_VAR(0), SI_VAR(8));
    GetNpcPos(0xFFFFFFFC, SI_VAR(9), SI_VAR(0), SI_VAR(10));
    MakeLerp(0xFFFFFABA, 0xFFFFF8F8, 90, 0);
    loop {
        UpdateLerp();
        SI_VAR(2) = f SI_VAR(0);
        SI_VAR(2) /= 10;
        RotateGroup(95, SI_VAR(2), 0, 1, 0);
        func_80240340_AE58D0();
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    StopSound(147);
    ModifyColliderFlags(1, 32, 0x7FFFFE00);
    ModifyColliderFlags(1, 5, 0x7FFFFE00);
});

Script N(script_8024135C) = SCRIPT({
    UseSettingsFrom(0, 50, 10, 0xFFFFFFDD);
    SetCamSpeed(0, 90.0);
    SetCamDistance(0, 400);
    SetPanTarget(0, 50, 10, 0xFFFFFFDD);
    PanToTarget(0, 0, 1);
    await N(script_802411DC);
    PanToTarget(0, 0, 0);
});

Script N(script_80241408) = SCRIPT({
    UseSettingsFrom(0, 50, 10, 0xFFFFFFDD);
    SetPanTarget(0, 50, 35, 0xFFFFFFDD);
    SetCamDistance(0, 200);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        SetPanTarget(0, 50, 10, 0xFFFFFFDD);
        SetCamDistance(0, 400);
        SetCamSpeed(0, 0.80078125);
        WaitForCam(0, 1.0);
    }
    await N(script_802411DC);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140049);
    PanToTarget(0, 0, 0);
});

Script N(script_80241550) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetPlayerPos(50, 10, 0xFFFFFF06);
    SetNpcPos(0xFFFFFFFC, 10, 30, 0xFFFFFF06);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    InterpPlayerYaw(270, 0);
    match SI_SAVE_VAR(0) {
        == 0xFFFFFFB4 {
            await N(script_80241408);
        } else {
            await N(script_8024135C);
        }
    }
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_00165C[] = {
    0x00000000,
};

Script N(script_80241660) = SCRIPT({
    loop {
        PlaySoundAt(85, 0, 100, 0, 0xFFFFFFD8);
        sleep 30;
        PlaySoundAt(854, 0, 100, 0, 0xFFFFFFD8);
        sleep 60;
        PlaySoundAt(892, 0, 100, 0, 0xFFFFFFD8);
        sleep 30;
    }
});

Script N(script_80241708) = SCRIPT({
    UseSettingsFrom(0, 30, 0, 0);
    SetPanTarget(0, 30, 0, 0);
    SetCamDistance(0, 400.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_802417BC) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFFCE, 0, 0);
    SetPanTarget(0, 0xFFFFFFCE, 0, 0);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 17.0, -13.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
});

Script N(script_80241870) = SCRIPT({
    UseSettingsFrom(0, 115, 0, 0);
    SetPanTarget(0, 115, 0, 0);
    SetCamDistance(0, 240.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
});

Script N(script_80241910) = SCRIPT({
    PlaySoundAtCollider(2, 449, 0);
    MakeLerp(0, 120, 14, 4);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802419C0) = SCRIPT({
    MakeLerp(120, 0, 8, 4);
    loop {
        UpdateLerp();
        RotateModel(2, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(2, 450, 0);
});

Script N(script_80241A70) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetMusicTrack(0, 102, 0, 8);
    SetNpcPos(0, 0xFFFFFFBA, 0, 0xFFFFFFC9);
    InterpNpcYaw(0, 90, 0);
    SetNpcAnimation(0, 0x800002);
    UseSettingsFrom(0, 237, 0, 0xFFFFFFB6);
    SetPanTarget(0, 237, 0, 0xFFFFFFB6);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 30;
    spawn N(script_80241910);
    sleep 10;
    SetNpcPos(1, 270, 0, 0xFFFFFFB2);
    SetNpcAnimation(1, 0x600002);
    SetNpcSpeed(1, 3.0);
    NpcMoveTo(1, 180, 0xFFFFFFC9, 0);
    SetNpcAnimation(1, 0x600001);
    await N(script_802419C0);
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140000);
    spawn {
        SetNpcAnimation(1, 0x600002);
        SetNpcSpeed(1, 3.0);
        NpcMoveTo(1, 0, 0xFFFFFFC9, 0);
        SetNpcAnimation(1, 0x600001);
    }
    sleep 20;
    await N(script_802417BC);
    sleep 20;
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140001);
    SetPanTarget(0, 0xFFFFFFEC, 0, 0);
    SetCamDistance(0, 225.0);
    SetCamPitch(0, 17.0, -13.0);
    SetCamSpeed(0, 5.0);
    sleep 10;
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140002);
    SetPanTarget(0, 0xFFFFFFCE, 0, 0);
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 17.0, -17.0);
    SetCamSpeed(0, 2.0);
    sleep 10;
    SetNpcAnimation(0, 0x800010);
    sleep 10;
    SpeakToNpc(0, 0x800009, 0x800003, 0, 1, 0x140003);
    SetNpcAnimation(0, 0x800002);
    sleep 15;
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140004);
    await N(script_802417BC);
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140005);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140006);
    FadeOutMusic(0, 2000);
    ShowMessageAtScreenPos(0x140007, 300, 20);
    sleep 5;
    PlaySoundAtNpc(0, 610, 0);
    ShowEmote(0, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    PlaySoundAtNpc(1, 610, 0);
    ShowEmote(1, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    sleep 20;
    spawn {
        loop 2 {
            InterpNpcYaw(1, 90, 7);
            sleep 5;
            InterpNpcYaw(1, 270, 7);
            sleep 5;
        }
        InterpNpcYaw(1, 90, 7);
    }
    sleep 5;
    spawn {
        loop 2 {
            InterpNpcYaw(0, 270, 7);
            sleep 5;
            InterpNpcYaw(0, 90, 7);
            sleep 5;
        }
    }
    sleep 50;
    await N(script_80241708);
    sleep 20;
    SetMusicTrack(0, 82, 0, 8);
    ShowMessageAtScreenPos(0x140008, 300, 20);
    sleep 20;
    spawn {
        SetNpcPos(3, 300, 180, 0xFFFFFFC4);
        SetNpcAnimation(3, 0x660112);
        EnableNpcBlur(3, 1);
        SetNpcJumpscale(3, 0.5);
        SetNpcFlagBits(3, 512, 1);
        SetNpcFlagBits(3, 8, 0);
        NpcMoveTo(3, 100, 0xFFFFFFD8, 18);
        PlaySoundAtNpc(3, 1001, 0x10000);
        PlayEffect(6, 1, 100, 0, 0xFFFFFFD8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        EnableNpcBlur(3, 0);
        SetNpcAnimation(3, 0x660105);
    }
    spawn {
        sleep 5;
        SetNpcPos(2, 328, 180, 0xFFFFFFF1);
        SetNpcAnimation(2, 0x660012);
        EnableNpcBlur(2, 1);
        SetNpcJumpscale(2, 0.5);
        SetNpcFlagBits(2, 512, 1);
        SetNpcFlagBits(2, 8, 0);
        NpcMoveTo(2, 128, 0xFFFFFFF1, 18);
        PlaySoundAtNpc(2, 1001, 0x10000);
        PlayEffect(6, 1, 128, 0, 0xFFFFFFF1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        EnableNpcBlur(2, 0);
        SetNpcAnimation(2, 0x660005);
    }
    spawn {
        sleep 10;
        SetNpcPos(4, 340, 180, 0xFFFFFFA6);
        SetNpcAnimation(4, 0x660212);
        EnableNpcBlur(4, 1);
        SetNpcJumpscale(4, 0.5);
        SetNpcFlagBits(4, 512, 1);
        SetNpcFlagBits(4, 8, 0);
        NpcMoveTo(4, 140, 0xFFFFFFA6, 18);
        PlaySoundAtNpc(4, 1001, 0x10000);
        PlayEffect(6, 1, 140, 0, 0xFFFFFFA6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        EnableNpcBlur(4, 0);
        SetNpcAnimation(4, 0x660205);
    }
    spawn {
        sleep 15;
        SetNpcPos(5, 368, 180, 0xFFFFFFD3);
        SetNpcAnimation(5, 0x660312);
        EnableNpcBlur(5, 1);
        SetNpcJumpscale(5, 0.5);
        SetNpcFlagBits(5, 512, 1);
        SetNpcFlagBits(5, 8, 0);
        NpcMoveTo(5, 168, 0xFFFFFFD3, 18);
        PlaySoundAtNpc(5, 1001, 0x10000);
        PlayEffect(6, 1, 168, 0, 0xFFFFFFD3, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        EnableNpcBlur(5, 0);
        SetNpcAnimation(5, 0x660305);
    }
    sleep 50;
    UseSettingsFrom(0, 128, 0, 0xFFFFFFF1);
    SetPanTarget(0, 128, 0, 0xFFFFFFF1);
    SetCamDistance(0, 240.0);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 15;
    spawn {
        PlaySoundAtNpc(3, 8435, 0);
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        SI_VAR(1) += 30;
        PlayEffect(26, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
        SetNpcAnimation(3, 0x66011A);
    }
    spawn {
        sleep 5;
        PlaySoundAtNpc(2, 8435, 0);
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        SI_VAR(1) += 30;
        PlayEffect(26, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
        SetNpcAnimation(2, 0x66001A);
    }
    spawn {
        sleep 10;
        PlaySoundAtNpc(4, 8435, 0);
        GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        SI_VAR(1) += 30;
        PlayEffect(26, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
        SetNpcAnimation(4, 0x66021A);
    }
    spawn {
        sleep 15;
        PlaySoundAtNpc(5, 8435, 0);
        GetNpcPos(5, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        SI_VAR(1) += 30;
        PlayEffect(26, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 40, 0, 0, 0, 0, 0, 0, 0, 0);
        SetNpcAnimation(5, 0x66031A);
    }
    sleep 45;
    SpeakToNpc(3, 0x66011A, 0x66011A, 0, 0, 0x140009);
    sleep 10;
    await N(script_802417BC);
    sleep 15;
    InterpNpcYaw(1, 270, 0);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x14000A);
    SetNpcAnimation(3, 0x660104);
    SetNpcAnimation(2, 0x660004);
    SetNpcAnimation(4, 0x660204);
    SetNpcAnimation(5, 0x660304);
    await N(script_80241870);
    sleep 10;
    SetNpcAnimation(3, 0x660102);
    NpcMoveTo(3, 80, 0xFFFFFFD8, 10);
    SetNpcAnimation(3, 0x660104);
    SpeakToNpc(3, 0x660114, 0x660104, 0, 0, 0x14000B);
    await N(script_80241708);
    SetNpcPos(3, 80, 0, 0xFFFFFFD8);
    InterpNpcYaw(1, 90, 5);
    SpeakToNpc(1, 0x600004, 0x600001, 0, 2, 0x14000C);
    SpeakToNpc(3, 0x660114, 0x660104, 0, 0, 0x14000D);
    InterpNpcYaw(3, 90, 5);
    sleep 10;
    SpeakToPlayer(3, 0x660114, 0x660104, 5, 0x14000E);
    UseSettingsFrom(0, 0xFFFFFFCE, 0, 0);
    SetPanTarget(0, 0xFFFFFFCE, 0, 0);
    SetCamDistance(0, 200.0);
    SetCamPitch(0, 17.0, -18.0);
    SetCamSpeed(0, 1.2001953125);
    PanToTarget(0, 0, 1);
    sleep 40;
    SI_VAR(11) = spawn N(script_80241660);
    func_80240500_AE5A90(100, 0, 0xFFFFFFD8);
    EnableSpriteShading(1);
    PlayEffect(53, 3, 100, 0, 0xFFFFFFD8, 1, SI_VAR(10), 0, 0, 0, 0, 0, 0, 0);
    WaitForCam(0, 1.0);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 2, 0x14000F);
    sleep 20;
    kill SI_VAR(11);
    0x802D7B10(SI_VAR(10));
    EnableSpriteShading(0);
    sleep 30;
    await N(script_80241870);
    sleep 10;
    SpeakToNpc(3, 0x660114, 0x660104, 0, 0, 0x140010);
    await N(script_80241708);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 2, 0x140011);
    SpeakToNpc(3, 0x660114, 0x660104, 0, 0, 0x140012);
    SetPanTarget(0, 0xFFFFFFCE, 0, 0);
    SetCamDistance(0, 250.0);
    SetCamPitch(0, 17.0, -17.0);
    SetCamSpeed(0, 90.0);
    sleep 10;
    SpeakToNpc(0, 0x800006, 0x800002, 0, 2, 0x140013);
    await N(script_80241870);
    sleep 10;
    FadeOutMusic(0, 500);
    PlaySoundAtNpc(4, 610, 0);
    ShowEmote(4, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    PlaySoundAtNpc(3, 610, 0);
    ShowEmote(3, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    PlaySoundAtNpc(5, 610, 0);
    ShowEmote(5, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    PlaySoundAtNpc(2, 610, 0);
    ShowEmote(2, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
    sleep 30;
    SpeakToNpc(3, 0x660114, 0x660104, 0, 0, 0x140014);
    SetPanTarget(0, 30, 0, 0);
    SetCamDistance(0, 400);
    SetCamPitch(0, 17.0, -11.0);
    SetCamSpeed(0, 5.0);
    spawn {
        SetNpcAnimation(3, 0x66010A);
        NpcJump0(3, 80, 0, 0xFFFFFFD8, 10);
        SetNpcAnimation(3, 0x660104);
    }
    spawn {
        SetNpcAnimation(2, 0x66000A);
        NpcJump0(2, 128, 0, 0xFFFFFFF1, 10);
        SetNpcAnimation(2, 0x660004);
    }
    spawn {
        SetNpcAnimation(4, 0x66020A);
        NpcJump0(4, 140, 0, 0xFFFFFFA6, 10);
        SetNpcAnimation(4, 0x660204);
    }
    spawn {
        SetNpcAnimation(5, 0x66030A);
        NpcJump0(5, 168, 0, 0xFFFFFFD3, 10);
        SetNpcAnimation(5, 0x660304);
    }
    spawn {
        ShakeCam(0, 0, 30, 1.0);
    }
    SpeakToNpc(0, 0x800006, 0x800002, 0, 3, 0x140015);
    spawn {
        PlaySoundAtNpc(3, 371, 0);
        InterpNpcYaw(3, 90, 0);
        EnableNpcBlur(3, 1);
        SetNpcAnimation(3, 0x660103);
        sleep 30;
        PlaySoundAtNpc(3, 372, 0);
        NpcMoveTo(3, 200, 0xFFFFFFC4, 10);
    }
    spawn {
        InterpNpcYaw(2, 90, 0);
        EnableNpcBlur(2, 1);
        SetNpcAnimation(2, 0x660003);
        sleep 30;
        EnableNpcBlur(2, 1);
        NpcMoveTo(2, 200, 0xFFFFFFC4, 10);
    }
    spawn {
        InterpNpcYaw(4, 90, 0);
        EnableNpcBlur(4, 1);
        SetNpcAnimation(4, 0x660203);
        sleep 30;
        EnableNpcBlur(4, 1);
        NpcMoveTo(4, 200, 0xFFFFFFC4, 10);
    }
    spawn {
        InterpNpcYaw(5, 90, 0);
        EnableNpcBlur(5, 1);
        SetNpcAnimation(5, 0x660303);
        sleep 30;
        EnableNpcBlur(5, 1);
        NpcMoveTo(5, 200, 0xFFFFFFC4, 10);
    }
    sleep 30;
    await N(script_ExitSingleDoor_80240870);
    PanToTarget(0, 0, 0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_0034B8[] = {
    0x00000000, 0x00000000,
};

s32 N(vectorList_802434C0)[] = {
    0xC28C0000, 0x42F00000, 0xC28C0000, 0xC2200000, 0x42DC0000, 0xC28C0000, 0xC1200000, 0x42F00000,
    0xC28C0000, 0x41A00000, 0x42DC0000, 0xC28C0000, 0x42480000, 0x42F00000, 0xC28C0000, 0x42A00000,
    0x42DC0000, 0xC28C0000, 0x42DC0000, 0x42F00000, 0xC28C0000, 0x430C0000, 0x42DC0000, 0xC28C0000,
    0x432A0000, 0x42F00000, 0xC28C0000, 0x43480000, 0x42DC0000, 0xC28C0000, 0x43660000, 0x42F00000,
    0xC28C0000,
};

s32 N(vectorList_80243544)[] = {
    0x43660000, 0x42F00000, 0xC28C0000, 0x435C0000, 0x42700000, 0xC28C0000, 0x437A0000, 0x42200000,
    0xC28C0000,
};

Script N(script_80243568) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 10;
    SetCamSpeed(0, 1.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcVar(1, 0, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 26;
        SI_VAR(2) -= 2;
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(1, 0x580001);
        NpcFacePlayer(1, 5);
        SetNpcVar(1, 0, 0);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 26;
        SI_VAR(2) += 2;
        SetNpcAnimation(2, 0x580006);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(2, 0x580001);
        NpcFacePlayer(2, 5);
    }
    loop {
        sleep 1;
        GetNpcVar(1, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
});

Script N(script_802437CC) = SCRIPT({
    spawn {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(1, 0x580012);
        SI_VAR(0) += 5;
        NpcMoveTo(1, SI_VAR(0), SI_VAR(2), 5);
    }
    spawn {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(2, 0x580012);
        SI_VAR(0) -= 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
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
    SI_VAR(0) -= 10;
    loop 5 {
        SI_VAR(1) += 4;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_802439F0) = SCRIPT({
    InterpNpcYaw(2, 90, 3);
    sleep 10;
    spawn {
        loop {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 10;
            SI_VAR(2) += 2;
            SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
            sleep 1;
        }
    }
    SetNpcVar(1, 0, 1);
    spawn {
        SetNpcAnimation(1, 0x580014);
        SetNpcSpeed(1, 7.5);
        NpcMoveTo(1, 249, 0xFFFFFFB8, 0);
        SetNpcVar(1, 0, 0);
    }
    spawn {
        SetNpcAnimation(2, 0x580014);
        SetNpcSpeed(2, 7.5);
        NpcMoveTo(2, 281, 0xFFFFFFBC, 0);
    }
    SetCamSpeed(0, 90.0);
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
        GetNpcVar(1, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_80243C20) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14004A);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_80243C8C) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetCamLeadPlayer(0, 0);
    spawn {
        UseSettingsFrom(0, 50, 0, 37);
        SetPanTarget(0, 0xFFFFFF13, 0, 37);
        SetCamDistance(0, 300);
        SetCamPosA(0, 0xFFFFFF4C, 0xFFFFFFEC);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
    }
    SetPlayerFlagBits(0x200000, 1);
    SetPlayerPos(0xFFFFFF5C, 0, 0xFFFFFFCB);
    InterpPlayerYaw(225, 0);
    SetPlayerFlagBits(0x200000, 0);
    DisablePartnerAI(0);
    NpcJump0(0xFFFFFFFC, 0xFFFFFF1F, 50, 0xFFFFFFB0, 20);
    NpcFacePlayer(0xFFFFFFFC, 0);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x14004B);
    SetPlayerAnimation(0xC000C);
    ShowChoice(0x1E0022);
    SetPlayerAnimation(0xA0001);
    ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 5, 0x14004C);
    NpcFlyTo(0xFFFFFFFC, 0xFFFFFF2E, 40, 0xFFFFFFBA, 20, 0, 0);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14004D);
    SetPlayerAnimation(0xC000C);
    ShowChoice(0x1E0023);
    SetPlayerAnimation(0xA0001);
    ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14004E);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(0xFFFFFFFC, 0x20000E);
    NpcJump0(0xFFFFFFFC, 0xFFFFFF2E, 40, 0xFFFFFFBA, 10);
    SetNpcAnimation(0xFFFFFFFC, 0x200001);
    SpeakToPlayer(0xFFFFFFFC, 0x20000C, 0x20000C, 0, 0x14004F);
    SetPlayerAnimation(0xA0001);
    ShowChoice(0x1E0024);
    if (SI_VAR(0) == 1) {
        ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140050);
        ShowChoice(0x1E0025);
    }
    ContinueSpeech(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140051);
    SetPlayerAnimation(0xC0005);
    SetNpcAnimation(0xFFFFFFFC, 0x20000E);
    NpcJump0(0xFFFFFFFC, 0xFFFFFF2E, 40, 0xFFFFFFBA, 10);
    NpcJump0(0xFFFFFFFC, 0xFFFFFF2E, 40, 0xFFFFFFBA, 10);
    SpeakToPlayer(0xFFFFFFFC, 0x20000C, 0x20000C, 0, 0x140052);
    SetPlayerAnimation(0xA0001);
    SpeakToPlayer(0xFFFFFFFE, 0xC0007, 0xC0008, 5, 0x140053);
    SpeakToPlayer(0xFFFFFFFC, 0x20000C, 0x20000C, 0, 0x140054);
    InterpPlayerYaw(90, 0);
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    NpcFlyTo(0xFFFFFFFC, 0xFFFFFF4C, 40, 0xFFFFFF9C, 10, 0, 0);
    sleep 10;
    SetMusicTrack(0, 102, 0, 8);
    SetPanTarget(0, 237, 0, 37);
    SetCamPitch(0, 17.0, -12.0);
    SetCamPosB(0, 170, 0xFFFFFFEC);
    SetCamSpeed(0, 90.0);
    sleep 30;
    spawn {
        PlaySoundAtCollider(2, 449, 0);
        MakeLerp(0, 120, 20, 8);
        loop {
            UpdateLerp();
            RotateModel(2, SI_VAR(0), 0, 1, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    sleep 10;
    SetNpcPos(0, 280, 0, 0xFFFFFFBA);
    SetNpcAnimation(0, 0x800004);
    SetNpcSpeed(0, 3.0);
    NpcMoveTo(0, 170, 0xFFFFFFD8, 0);
    SetNpcAnimation(0, 0x800002);
    SpeakToPlayer(0, 0x800006, 0x800002, 5, 0x140055);
    spawn {
        SetPlayerAnimation(0xC0011);
        sleep 10;
        SetPanTarget(0, 0xFFFFFF92, 0, 0xFFFFFFD8);
        SetCamDistance(0, 300.0);
        SetCamSpeed(0, 90.0);
        sleep 10;
        SetNpcAnimation(0xFFFFFFFC, 0x20000E);
        NpcJump0(0xFFFFFFFC, 0xFFFFFF58, 38, 0xFFFFFF90, 10);
        sleep 30;
        SetPlayerAnimation(0xC000E);
    }
    SetNpcAnimation(0, 0x800004);
    NpcMoveTo(0, 0xFFFFFFBA, 0xFFFFFFD8, 80);
    SetNpcAnimation(0, 0x800002);
    sleep 10;
    SetNpcAnimation(0, 0x80000D);
    NpcJump0(0, 0xFFFFFFBA, 0, 0xFFFFFFD8, 10);
    SpeakToPlayer(0, 0x800008, 0x800002, 0, 0x140056);
    NpcJump0(0, 0xFFFFFFBA, 0, 0xFFFFFFD8, 10);
    SetNpcAnimation(0, 0x800002);
    sleep 10;
    SpeakToPlayer(0, 0x800008, 0x800002, 0, 0x140057);
    sleep 10;
    UseSettingsFrom(0, 240, 0, 37);
    SetPanTarget(0, 240, 0, 37);
    SetCamDistance(0, 400.0);
    SetCamPosB(0, 134, 0xFFFFFFEC);
    PanToTarget(0, 0, 1);
    sleep 5;
    SetNpcPos(0, 0xFFFFFF9C, 0, 0xFFFFFFBA);
    SetNpcYaw(0, 90);
    SetNpcPos(1, 280, 0, 0xFFFFFFBA);
    SetNpcPos(2, 310, 0, 0xFFFFFFBA);
    SetPlayerPos(0xFFFFFF78, 0, 0xFFFFFFEC);
    spawn {
        loop {
            NpcFaceNpc(0, 2, 0);
            sleep 1;
        }
    }
    SetNpcVar(1, 0, 1);
    spawn {
        SetNpcAnimation(1, 0x580006);
        SetNpcSpeed(1, 5.0);
        NpcMoveTo(1, 0xFFFFFFCE, 0xFFFFFFE2, 0);
        SetNpcAnimation(1, 0x580001);
        SetNpcVar(1, 0, 0);
    }
    spawn {
        SetNpcAnimation(2, 0x580006);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, 0xFFFFFFEC, 0xFFFFFFE2, 0);
        SetNpcAnimation(2, 0x580001);
    }
    loop {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 40;
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        GetNpcVar(1, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SpeakToNpc(1, 0x580008, 0x580001, 5, 0, 0x140058);
    SpeakToNpc(0, 0x800006, 0x800002, 5, 1, 0x140059);
    SpeakToNpc(1, 0x580008, 0x580001, 5, 0, 0x14005A);
    await N(script_80243568);
    await N(script_802437CC);
    SpeakToPlayer(0xFFFFFFFE, 0xC0018, 0xC0018, 5, 0x14005B);
    await N(script_802439F0);
    sleep 10;
    SetNpcPos(0xFFFFFFFC, 0xFFFFFFBA, 120, 0xFFFFFFBA);
    LoadPath(80, N(vectorList_802434C0), 11, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcAnimation(0xFFFFFFFC, 0x200010);
    loop 2 {
        InterpNpcYaw(0xFFFFFFFC, 270, 7);
        sleep 5;
        InterpNpcYaw(0xFFFFFFFC, 90, 7);
        sleep 5;
    }
    InterpNpcYaw(0xFFFFFFFC, 270, 7);
    sleep 15;
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    InterpNpcYaw(0xFFFFFFFC, 90, 7);
    LoadPath(15, N(vectorList_80243544), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 30;
    FadeOutMusic(0, 1000);
    await 0x802408C0;
    PanToTarget(0, 0, 0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_80244AF4) = SCRIPT({
    bind N(script_80243C8C) to TriggerFlag_WALL_INTERACT 8;
    bind N(script_80243C20) to TriggerFlag_WALL_INTERACT 2;
});

s32 pad_004B3C[] = {
    0x00000000,
};

Script N(script_ExitSingleDoor_80244B40) = SCRIPT({
    if (SI_AREA_FLAG(6) == 0) {
        DisablePlayerInput(1);
        DisablePartnerAI(1);
        SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14006B);
        EnablePartnerAI();
        DisablePlayerInput(0);
    }
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 2;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    if (SI_AREA_FLAG(6) == 0) {
        GotoMap(D_80247E70_AED400, 7);
    } else {
        GotoMap(D_80247E70_AED400, 3);
    }
    sleep 100;
});

Script N(script_80244C70) = SCRIPT({
    bind N(script_ExitSingleDoor_80244B40) to TriggerFlag_WALL_INTERACT 2;
});

s32 pad_004C9C[] = {
    0x00000000,
};

s32 N(vectorList_80244CA0)[] = {
    0x42C80000, 0x42480000, 0xC3200000, 0x41F00000, 0x42F00000, 0xC2F00000, 0x42480000, 0x43480000,
    0xC2A00000,
};

s32 N(vectorList_80244CC4)[] = {
    0x42480000, 0x43480000, 0xC28C0000, 0x42A00000, 0x42DC0000, 0xC28C0000, 0x42DC0000, 0x42F00000,
    0xC28C0000, 0x430C0000, 0x42DC0000, 0xC28C0000, 0x432A0000, 0x42F00000, 0xC28C0000, 0x43480000,
    0x42DC0000, 0xC28C0000, 0x43660000, 0x42F00000, 0xC28C0000,
};

s32 N(vectorList_80244D18)[] = {
    0x43660000, 0x42F00000, 0xC28C0000, 0x435C0000, 0x42700000, 0xC28C0000, 0x437A0000, 0x42200000,
    0xC28C0000,
};

Script N(script_80244D3C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) -= 10;
    SetCamSpeed(0, 1.0);
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetNpcVar(2, 0, 1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 26;
        SI_VAR(2) -= 2;
        SetNpcAnimation(2, 0x580006);
        SetNpcSpeed(2, 5.0);
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(2, 0x580001);
        NpcFacePlayer(2, 5);
        SetNpcVar(2, 0, 0);
    }
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 26;
        SI_VAR(2) += 2;
        SetNpcAnimation(3, 0x580006);
        SetNpcSpeed(3, 5.0);
        NpcMoveTo(3, SI_VAR(0), SI_VAR(2), 0);
        SetNpcAnimation(3, 0x580001);
        NpcFacePlayer(3, 5);
    }
    loop {
        sleep 1;
        GetNpcVar(2, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 10;
});

Script N(script_80244FA0) = SCRIPT({
    spawn {
        GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) += 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(2, 0x580012);
        SI_VAR(0) += 5;
        NpcMoveTo(2, SI_VAR(0), SI_VAR(2), 5);
    }
    spawn {
        GetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SI_VAR(0) -= 5;
        NpcMoveTo(3, SI_VAR(0), SI_VAR(2), 5);
        SetNpcAnimation(3, 0x580012);
        SI_VAR(0) -= 5;
        NpcMoveTo(3, SI_VAR(0), SI_VAR(2), 5);
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
    SI_VAR(0) -= 10;
    loop 5 {
        SI_VAR(1) += 4;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_802451C4) = SCRIPT({
    InterpNpcYaw(3, 90, 3);
    sleep 10;
    spawn {
        loop {
            GetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 10;
            SI_VAR(2) += 2;
            SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
            sleep 1;
        }
    }
    SetNpcVar(2, 0, 1);
    spawn {
        SetNpcAnimation(2, 0x580014);
        SetNpcSpeed(2, 7.5);
        NpcMoveTo(2, 249, 0xFFFFFFB8, 0);
        SetNpcVar(2, 0, 0);
    }
    spawn {
        SetNpcAnimation(3, 0x580014);
        SetNpcSpeed(3, 7.5);
        NpcMoveTo(3, 281, 0xFFFFFFBC, 0);
    }
    SetCamSpeed(0, 90.0);
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), 0, SI_VAR(2));
        GetNpcVar(2, 0, SI_VAR(0));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
});

Script N(script_802453F4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    SetMusicTrack(0, 102, 0, 8);
    InterpPlayerYaw(270, 0);
    SetPlayerPos(50, 10, 0xFFFFFF06);
    SetNpcPos(0xFFFFFFFC, 10, 50, 0xFFFFFF06);
    SetNpcPos(0, 0xFFFFFFCE, 0, 0xFFFFFFEC);
    SetNpcPos(1, 0xFFFFFF7E, 0, 0xFFFFFFEC);
    SetNpcYaw(0, 270);
    SetNpcYaw(1, 90);
    UseSettingsFrom(0, 0xFFFFFFCE, 0, 0xFFFFFFEC);
    SetPanTarget(0, 0xFFFFFFCE, 0, 0xFFFFFFEC);
    SetCamDistance(0, 300);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 30;
    SpeakToNpc(0, 0x800008, 0x800002, 0, 1, 0x140082);
    SetCamSpeed(0, 5.0);
    SetCamDistance(0, 400);
    SetPanTarget(0, 0xFFFFFFCE, 0, 0xFFFFFFEC);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140083);
    spawn {
        await N(script_80241010);
        SetPlayerAnimation(0xC0005);
        PlaySoundAtPlayer(610, 0);
        ShowEmote(0, 0, 0, 30, 0, 0, 0, 0, 0);
        sleep 30;
        SetPlayerAnimation(0xC0011);
    }
    spawn {
        sleep 360;
        SetNpcPos(0xFFFFFFFC, 100, 50, 0xFFFFFF60);
        LoadPath(30, N(vectorList_80244CA0), 3, 0);
        loop {
            GetNextPathPos();
            SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        EnableNpcShadow(0xFFFFFFFC, 0);
    }
    SpeakToNpc(0, 0x800008, 0x800002, 0, 1, 0x140084);
    SetNpcAnimation(0, 0x80000F);
    sleep 60;
    SetNpcAnimation(0, 0x80000C);
    sleep 30;
    SetNpcAnimation(0, 0x800002);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140085);
    SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140086);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 1, 0x140087);
    SetNpcAnimation(0, 0x80000C);
    sleep 30;
    InterpNpcYaw(0, 90, 7);
    sleep 30;
    InterpNpcYaw(0, 270, 7);
    sleep 30;
    InterpNpcYaw(0, 90, 7);
    sleep 30;
    SetNpcAnimation(0, 0x800002);
    SpeakToNpc(0, 0x800006, 0x800002, 0, 0, 0x140088);
    SetPlayerAnimation(0xC0009);
    sleep 1;
    PlaySoundAtNpc(0, 610, 0);
    ShowEmote(0, 0, 0xFFFFFFD3, 30, 1, 0, 0, 0, 0);
    PlaySoundAtNpc(1, 610, 0);
    ShowEmote(1, 0, 0xFFFFFFD3, 30, 1, 0, 0, 0, 0);
    sleep 30;
    SetNpcVar(0, 0, 1);
    spawn {
        SetNpcAnimation(0, 0x80000D);
        NpcJump0(0, 0xFFFFFFCE, 0, 0xFFFFFFEC, 10);
    }
    spawn {
        SetNpcAnimation(1, 0x600005);
        NpcJump0(1, 0xFFFFFF7E, 0, 0xFFFFFFEC, 10);
    }
    spawn {
        SetPlayerAnimation(0xC0005);
        sleep 30;
        SetPlayerAnimation(0xC0011);
        sleep 60;
        DisablePlayerPhysics(0);
        func_802405D0_AE5B60();
        SetPlayerAnimation(0xC000E);
        0x802D1270(30, 0xFFFFFFF6, 2.0);
        DisablePlayerPhysics(1);
        func_802405EC_AE5B7C();
        SetNpcVar(0, 0, 0);
    }
    SpeakToPlayer(0, 0x80000D, 0x80000D, 0, 0x140089);
    sleep 20;
    SetNpcAnimation(0, 0x800002);
    SetNpcAnimation(1, 0x600001);
    ContinueSpeech(0, 0x800008, 0x800002, 0, 0x14008A);
    loop {
        sleep 1;
        GetNpcVar(0, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcAnimation(0, 0x80000C);
    sleep 30;
    SetNpcAnimation(0, 0x800002);
    SpeakToPlayer(0, 0x800006, 0x800002, 0, 0x14008B);
    ShowChoice(0x1E0026);
    SI_SAVE_VAR(216) = SI_VAR(0);
    if (SI_VAR(0) != 2) {
        SI_AREA_FLAG(8) = 1;
    }
    ContinueSpeech(0, 0x800006, 0x800002, 0, 0x14008C);
    ShowChoice(0x1E0027);
    SI_SAVE_VAR(217) = SI_VAR(0);
    if (SI_VAR(0) != 2) {
        SI_AREA_FLAG(8) = 1;
    }
    ContinueSpeech(0, 0x800006, 0x800002, 0, 0x14008D);
    ShowChoice(0x1E0028);
    SI_SAVE_VAR(218) = SI_VAR(0);
    if (SI_VAR(0) != 2) {
        SI_AREA_FLAG(8) = 1;
    }
    ContinueSpeech(0, 0x800007, 0x800002, 0, 0x14008E);
    InterpNpcYaw(0, 270, 7);
    sleep 10;
    SpeakToPlayer(0, 0x800006, 0x800002, 5, 0x14008F);
    if (SI_AREA_FLAG(8) == 0) {
        SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140090);
    } else {
        SpeakToNpc(1, 0x600004, 0x600001, 0, 0, 0x140091);
    }
    SpeakToNpc(0, 0x800007, 0x800002, 0, 1, 0x140092);
    SetNpcAnimation(0, 0x800002);
    InterpNpcYaw(0, 90, 7);
    sleep 10;
    ContinueSpeech(0, 0x800006, 0x800002, 5, 0x140093);
    SetNpcAnimation(0, 0x800002);
    InterpNpcYaw(0, 90, 7);
    sleep 10;
    SpeakToPlayer(1, 0x600004, 0x600001, 5, 0x140094);
    RotateModel(2, 120, 0, 1, 0);
    SetNpcPos(2, 249, 0, 0xFFFFFFBA);
    SetNpcPos(3, 281, 0, 0xFFFFFFBA);
    SpeakToNpc(2, 0x580008, 0x580001, 0, 0, 0x140095);
    InterpPlayerYaw(90, 0);
    SetPlayerAnimation(0xA0001);
    await N(script_80244D3C);
    await N(script_80244FA0);
    SpeakToPlayer(0xFFFFFFFE, 0xC0018, 0xC0018, 5, 0x140096);
    await N(script_802451C4);
    InterpNpcYaw(0xFFFFFFFC, 90, 0);
    SetNpcAnimation(0xFFFFFFFC, 0x20000E);
    EnableNpcShadow(0xFFFFFFFC, 1);
    LoadPath(80, N(vectorList_80244CC4), 7, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    SetNpcAnimation(0xFFFFFFFC, 0x200010);
    loop 2 {
        InterpNpcYaw(0xFFFFFFFC, 270, 7);
        sleep 5;
        InterpNpcYaw(0xFFFFFFFC, 90, 7);
        sleep 5;
    }
    InterpNpcYaw(0xFFFFFFFC, 270, 7);
    sleep 15;
    SetNpcAnimation(0xFFFFFFFC, 0x200005);
    InterpNpcYaw(0xFFFFFFFC, 90, 7);
    LoadPath(15, N(vectorList_80244D18), 3, 0);
    loop {
        GetNextPathPos();
        SetNpcPos(0xFFFFFFFC, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    sleep 30;
    FadeOutMusic(0, 1000);
    await 0x80240910;
    PanToTarget(0, 0, 0);
    EnablePartnerAI();
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_006284[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80246290) = {
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

NpcSettings N(npcSettings_802462BC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802462E8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x22,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

s32 N(extraAnimationList_80246314)[] = {
    0x00800000, 0x00800002, 0x00800003, 0x00800006, 0x00800009, 0x00800010, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80246330)[] = {
    0x00600001, 0x00600002, 0x00600004, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80246340)[] = {
    0x00660002, 0x00660003, 0x00660004, 0x00660005, 0x0066000A, 0x00660011, 0x00660012, 0x00660014,
    0x0066001A, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80246368)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80246290),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80246314),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802462BC),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80246330),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802462E8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00660004, 0x00660002, 0x00660003, 0x00660003, 0x00660004, 0x00660004, 0x0066000A, 0x0066000A, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003, 0x00660003,
        },
        .extraAnimations = N(extraAnimationList_80246340),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802462E8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00660104, 0x00660102, 0x00660103, 0x00660103, 0x00660104, 0x00660104, 0x0066010A, 0x0066010A, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103, 0x00660103,
        },
        .extraAnimations = N(extraAnimationList_80246340),
    },
    {
        .id = 4,
        .settings = &N(npcSettings_802462E8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00660204, 0x00660202, 0x00660203, 0x00660203, 0x00660204, 0x00660204, 0x0066020A, 0x0066020A, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203, 0x00660203,
        },
        .extraAnimations = N(extraAnimationList_80246340),
    },
    {
        .id = 5,
        .settings = &N(npcSettings_802462E8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00660304, 0x00660302, 0x00660303, 0x00660303, 0x00660304, 0x00660304, 0x0066030A, 0x0066030A, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303,
        },
        .extraAnimations = N(extraAnimationList_80246340),
    },
};

NpcGroupList N(npcGroupList_80246F08) = {
    NPC_GROUP(N(npcGroup_80246368), 0x00000000),
    {},
};

NpcSettings N(npcSettings_80246F20) = {
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

NpcSettings N(npcSettings_80246F4C) = {
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

s32 N(extraAnimationList_80246F78)[] = {
    0x00800000, 0x00800002, 0x00800004, 0x00800006, 0x0080000D, 0x00800008, 0xFFFFFFFF,
};

s32 N(extraAnimationList_80246F94)[] = {
    0x00580001, 0x00580006, 0x00580008, 0x00580012, 0x00580014, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80246FAC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80246F20),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80246F78),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80246F4C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80246F94),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80246F4C),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_80246F94),
    },
};

NpcGroupList N(npcGroupList_8024757C) = {
    NPC_GROUP(N(npcGroup_80246FAC), 0x00000000),
    {},
};

s32 pad_007594[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802475A0) = {
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

NpcSettings N(npcSettings_802475CC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x28,
    .radius = 0x1E,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = 0x80077F70,
    .aux = NULL,
    .onDefeat = 0x8007809C,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x1A,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_802475F8) = {
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

s32 N(extraAnimationList_80247624)[] = {
    0x00800000, 0x00800002, 0x00800006, 0x00800007, 0x00800008, 0x0080000F, 0x0080000C, 0x0080000D,
    0xFFFFFFFF,
};

s32 N(extraAnimationList_80247648)[] = {
    0x00600001, 0x00600002, 0x00600004, 0x00600005, 0xFFFFFFFF,
};

s32 N(extraAnimationList_8024765C)[] = {
    0x00580001, 0x00580006, 0x00580008, 0x00580012, 0x00580014, 0xFFFFFFFF,
};

StaticNpc N(npcGroup_80247674)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802475A0),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002, 0x00800002,
        },
        .extraAnimations = N(extraAnimationList_80247624),
    },
    {
        .id = 1,
        .settings = &N(npcSettings_802475CC),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000D0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00600001, 0x00600002, 0x00600003, 0x00600003, 0x00600001, 0x00600001, 0x00600000, 0x00600000, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003, 0x00600003,
        },
        .extraAnimations = N(extraAnimationList_80247648),
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802475F8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_8024765C),
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802475F8),
        .pos = { 0.0, -500.0, 0.0 },
        .flags = 0x00000F0D,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00580001, 0x00580004, 0x00580006, 0x00580006, 0x00580001, 0x00580001, 0x00580010, 0x00580010, 0x0058000C, 0x0058000B, 0x0058000D, 0x00580001, 0x00580001, 0x00580001, 0x00580001, 0x00580001,
        },
        .extraAnimations = N(extraAnimationList_8024765C),
    },
};

NpcGroupList N(npcGroupList_80247E34) = {
    NPC_GROUP(N(npcGroup_80247674), 0x00000000),
    {},
};

s32 pad_007E4C[] = {
    0x00000000,
};

// rodata: D_80247E50_AED3E0

// rodata: D_80247E58_AED3E8

// rodata: D_80247E60_AED3F0

// rodata: D_80247E68_AED3F8

// rodata: D_80247E70_AED400

s32 pad_007E78[] = {
    0x00000000, 0x00000000,
};
