#include "jan_04.h"

s32 pad_00003C[1];
s32 pad_00034C[1];
s32 pad_00060C[1];
s32 pad_000794[3];
s32 pad_0009DC[1];
s32 pad_000A74[3];
s32 pad_000FBC[1];
Script N(script_80241180);
Script N(script_80241244);
Script N(script_80241268);
s32 pad_0012A4[3];
Script N(script_UpdateTexturePan_802412B0);
Script N(script_ExitWalk_8024134C);
Script N(script_802413E0);
Script N(script_EnterWalk_8024140C);
Script N(main);
s32 N(unk_80241800)[1];
Script N(script_80241804);
Script N(script_8024186C);
Script N(script_8024194C);
Script N(script_MakeEntities);
s32 pad_001A38[2];
Script N(script_80241A6C);
Script N(script_80241AD4);
Script N(script_80241E58);
Script N(script_80241FD8);
Script N(script_Idle_802421EC);
Script N(script_Init_80242570);
Script N(script_Interact_80242714);
Script N(script_Init_802428E4);
StaticNpc N(npcGroup_80242978)[2];
StaticNpc N(npcGroup_80242D58)[5];
NpcGroupList N(npcGroupList_80243708);
NpcGroupList N(npcGroupList_80243720);
s32 pad_003744[3];
Script N(script_80243750);
Script N(script_80243798);
Script N(script_8024385C);
s32 pad_00386C[1];
Script N(script_SearchBush_80243870);
Script N(script_ShakeTree_80243BD0);
s32 N(treeDropList_Tree2)[8];
Script N(script_80244314);
s32 pad_0043FC[1];
s32 N(vectorList_80244400)[21];
Script N(script_80244454);
s32 pad_004944[3];
s32 N(vectorList_80244950)[18];
s32 N(vectorList_80244998)[9];
s32 N(vectorList_802449BC)[9];
Script N(script_802449E0);
s32 pad_005074[3];
Script N(script_SearchBush_80245080);
Script N(script_ShakeTree_802453E0);
s32 N(searchBushEvent_Bush1)[4];
s32 N(searchBushEvent_Bush2)[4];
s32 N(searchBushEvent_Bush3)[4];
s32 N(searchBushEvent_Bush4)[4];
s32 N(searchBushEvent_Bush5)[4];
s32 N(searchBushEvent_Bush6)[4];
s32 N(searchBushEvent_Bush7)[4];
s32 N(searchBushEvent_Bush8)[4];
s32 N(searchBushEvent_Bush9)[4];
s32 N(searchBushEvent_Bush10)[4];
Script N(script_80245B74);
s32 pad_005D3C[1];
Script N(script_80245D40);
Script N(script_8024619C);
s32 N(unk_8024625C)[1];
Script N(script_80246260);
s32 pad_0062A4[3];
const char D_802462B0_B4AA20[8]; // "kmr_24"
const char D_802462B8_B4AA28[8]; // "jan_05"
const char D_802462C0_B4AA30[13]; // "party_opuku"
const char D_802462CC_B4AA3C[8]; // "flo_00"
s32 pad_0062D4[3];
const char D_802462E8_B4AA58[8]; // "jan_04"
const char D_802462F0_B4AA60[8]; // "jan_04"
s32 pad_0062F8[2];

// text: func_GetTattle_B44770

s32 pad_00003C[] = {
    0x00000000,
};

// text: func_80240040_B447B0

// text: func_80240164_B448D4

s32 pad_00034C[] = {
    0x00000000,
};

// text: func_80240350_B44AC0

// text: func_80240404_B44B74

// text: func_80240468_B44BD8

// text: func_802405B8_B44D28

s32 pad_00060C[] = {
    0x00000000,
};

// text: func_80240610_B44D80

s32 pad_000794[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_802407A0_B44F10

// text: func_80240810_B44F80

s32 pad_0009DC[] = {
    0x00000000,
};

// text: func_802409E0_B45150

s32 pad_000A74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240A80_B451F0

// text: func_80240B48_B452B8

// text: func_80240BE8_B45358

// text: func_80240D0C_B4547C

// text: func_80240D80_B454F0

// text: func_80240DF0_B45560

s32 pad_000FBC[] = {
    0x00000000,
};

// text: func_80240FC0_B45730

EntryList N(entryList) = {
    { -483.0f, 0.0f, 0.0f, 90.0f },
    { 0.0f, -100.0f, 0.0f, 90.0f },
    { 0.0f, -100.0f, 0.0f, 90.0f },
    { 0.0f, -100.0f, 0.0f, 90.0f },
    { -110.0f, -15.0f, 204.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x80240000,
};

Script N(script_80241180) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
    1..2
        SetMusicTrack(0, 42, 0, 8);
        == 3 {
            FadeInMusic(0, 36, 0, 3000, 0, 127);
        }
        else {
            SetMusicTrack(0, 36, 0, 8);
        }
    }
    ClearAmbientSounds(250);
});

Script N(script_80241244) = SCRIPT({
    func_802D5FF8(130, 0);
});

Script N(script_80241268) = SCRIPT({
    FadeOutMusic(0, 500);
    sleep 15;
    func_802D5FD8();
});

s32 pad_0012A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_802412B0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240040_B447B0();
                    return;
                }
            }
        }
    }
    func_80240164_B448D4();
});

Script N(script_ExitWalk_8024134C) = SCRIPT({
    FadeOutMusic(0, 1500);
    GotoMapSpecial(D_802462B0_B4AA20, 0, 9);
    sleep 100;
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802462B8_B4AA28, 2);
    sleep 100;
});

Script N(script_802413E0) = SCRIPT({
    bind N(npcSettings_80241384) to 0x80000 0;
});

Script N(script_EnterWalk_8024140C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            ModifyColliderFlags(0, 1, 0x7FFFFE00);
            SI_VAR(0) = N(script_802413E0);
            spawn EnterWalk;
        }
    1..2
        spawn N(script_802449E0);
        == 3 {
            spawn N(script_80244454);
        }
        == 4 {
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            MakeNpcs(0, N(npcGroupList_80243708));
        }
        == 3 {
            MakeNpcs(0, N(npcGroupList_80243720));
        }
    }
    spawn N(script_MakeEntities);
    spawn N(script_80244314);
    spawn N(script_80245B74);
    spawn N(script_8024385C);
    ModifyColliderFlags(3, 34, 4);
    ModifyColliderFlags(3, 37, 4);
    ModifyColliderFlags(3, 40, 4);
    ModifyColliderFlags(0, 34, 0x80000);
    ModifyColliderFlags(0, 37, 0x80000);
    ModifyColliderFlags(0, 40, 0x80000);
    ModifyColliderFlags(3, 4, 1);
    func_802C971C(89);
    EnableTexPanning(88, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFFB0;
        SI_VAR(2) = 140;
        SI_VAR(3) = 80;
        SI_VAR(4) = 0xFFFFFF9C;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802412B0);
    }
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        await N(script_80246260);
        return;
    }
    spawn N(script_EnterWalk_8024140C);
    sleep 1;
    spawn N(script_80241180);
});

s32 N(unk_80241800)[] = {
    0x00000000,
};

Script N(script_80241804) = SCRIPT({
    group 0;
    func_802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    func_802D5830(0);
    return;
});

Script N(script_8024186C) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80241804);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_8024194C) = SCRIPT({
    SI_VAR(10) = 91;
    SI_VAR(11) = 1;
    SI_SAVE_FLAG(1228) = 1;
    await N(script_8024186C);
});

Script N(script_MakeEntities) = SCRIPT({
    match SI_SAVE_VAR(0) {
    38..95
        MakeEntity(D_802EAE30, 0, 0, 0, 0, 0, 0x80000000);
        AssignFlag(SI_SAVE_FLAG(1228));
        AssignScript(N(script_8024194C));
    }
    MakeItemEntity(348, 300, 0, 0xFFFFFF1F, 17, SI_SAVE_FLAG(1229));
});

s32 pad_001A38[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241A40) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x17,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xE,
    .unk_2A = 0x1,
};

Script N(script_80241A6C) = SCRIPT({

});

NpcSettings N(npcSettings_80241A7C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x2A,
    .radius = 0x1A,
    .otherAI = &N(script_80241A6C),
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

NpcSettings N(npcSettings_80241AA8) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1C,
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

Script N(script_80241AD4) = SCRIPT({
    GetNpcVar(0, 0, SI_VAR(0));
    if (SI_VAR(0) == 2) {
        return;
    }
    if (SI_AREA_FLAG(8) == 1) {
        return;
    }
    DisablePlayerInput(1);
    SI_AREA_FLAG(8) = 1;
    SetNpcFlagBits(0, 0x8000, 1);
    if (SI_SAVE_FLAG(1226) == 0) {
        if (SI_SAVE_FLAG(1225) == 0) {
            SetNpcJumpscale(0, 1.0);
            PlaySoundAtNpc(0, 672, 0);
            NpcJump0(0, 90, 140, 0xFFFFFFAB, 20);
            UseSettingsFrom(0, 90, 140, 0xFFFFFFAB);
            SetPanTarget(0, 90, 140, 0xFFFFFFAB);
            SetCamDistance(0, 280);
            SetCamPitch(0, 16, -6.0);
            SetCamSpeed(0, 3);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            SpeakToPlayer(0, 0x70004, 0x70001, 0, 0x1000A1);
            ResetCam(0, 90.0);
            SI_SAVE_FLAG(1225) = 1;
            sleep 10;
            SI_AREA_FLAG(8) = 0;
        } else {
            SetNpcJumpscale(0, 1.0);
            PlaySoundAtNpc(0, 672, 0);
            NpcJump0(0, 0xFFFFFFF6, 112, 0xFFFFFFB0, 15);
            SI_SAVE_FLAG(1225) = 0;
            SI_SAVE_FLAG(1226) = 1;
            sleep 10;
            SI_AREA_FLAG(8) = 0;
        }
    } else {
        SetNpcJumpscale(0, 1.0);
        PlaySoundAtNpc(0, 672, 0);
        NpcJump0(0, 50, 0, 0, 20);
        SI_SAVE_FLAG(1225) = 1;
        EnableNpcShadow(0, 1);
        SetNpcAnimation(0, 0x70008);
        SetNpcVar(0, 0, 10);
        unbind;
    }
    SetNpcFlagBits(0, 0x8000, 0);
    DisablePlayerInput(0);
});

Script N(script_80241E58) = SCRIPT({
1:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            AwaitPlayerLeave(0, 0, 170);
            DisablePlayerInput(1);
            SetSelfVar(0, 2);
            SI_VAR(0) = SI_SAVE_FLAG(1225);
            SI_VAR(1) = SI_SAVE_FLAG(1226);
            SI_VAR(0) += SI_VAR(1);
            if (SI_VAR(0) == 0) {
                ShowMessageAtScreenPos(0x1000A2, 160, 40);
            } else {
                ShowMessageAtScreenPos(0x1000A3, 160, 40);
            }
            DisablePlayerInput(0);
            SetSelfVar(0, 1);
        }
        == 1 {
            AwaitPlayerApproach(0, 0, 130);
            SetSelfVar(0, 0);
        }
    }
    sleep 1;
    goto 1;
});

Script N(script_80241FD8) = SCRIPT({
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x10009E, 320, 60);
    DisablePlayerInput(0);
    AwaitPlayerApproach(0, 0, 130);
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x10009F, 160, 40);
    SetPlayerAnimation(0x80022);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SetPanTarget(0, 30, 140, 0xFFFFFFC4);
    SetCamDistance(0, 300);
    SetCamPitch(0, 16, -6.0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(-1, 0x70008, 0x70001, 0, 0x1000A0);
    ResetCam(0, 3);
    SetPlayerAnimation(0x10002);
    DisablePlayerInput(0);
});

Vec4f N(triggerCoord_802421DC) =  { 30.0f, 0.0f, -110.0f, 0.0f };

Script N(script_Idle_802421EC) = SCRIPT({
    SI_VAR(0) = SI_SAVE_FLAG(1225);
    SI_VAR(1) = SI_SAVE_FLAG(1226);
    SI_VAR(0) += SI_VAR(1);
    if (SI_VAR(0) == 0) {
        await N(script_80241FD8);
    } else {
        SetSelfVar(0, 1);
    }
    SI_AREA_FLAG(8) = 0;
    bind N(script_80241AD4) to TriggerFlag_WALL_HAMMER 43;
    bind N(script_80241AD4) to TriggerFlag_BOMB N(triggerCoord_802421DC);
    SI_VAR(9) = spawn N(script_80241E58);
0:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) != 10) {
        sleep 1;
        goto 0;
    }
    kill SI_VAR(9);
    DisablePlayerInput(1);
    SetPlayerSpeed(4.0);
    PlayerMoveTo(10, 0, 0);
    PlayerFaceNpc(-1, 0);
    SetNpcAnimation(-1, 0x70001);
    AdjustCam(0, 5.0, 20, 301, 17.0, -7.0);
    sleep 10;
    SpeakToPlayer(-1, 0x70004, 0x70001, 0, 0x1000A4);
    SetPlayerAnimation(0x80007);
    sleep 40;
    SetPlayerAnimation(0x10002);
    SpeakToPlayer(-1, 0x70004, 0x70001, 0, 0x1000A5);
    SetNpcAnimation(-1, 0x70007);
    sleep 30;
    SetNpcAnimation(-1, 0x70001);
    SpeakToPlayer(-1, 0x70004, 0x70001, 0, 0x1000A6);
    SetPlayerAnimation(0x80007);
    sleep 40;
    SetPlayerAnimation(0x10002);
    SpeakToPlayer(-1, 0x70004, 0x70001, 0, 0x1000A7);
    CloseMessage();
    func_80240610_B44D80(0, 7);
    func_802409E0_B45150();
    spawn N(script_80241244);
    sleep 15;
    ShowMessageAtScreenPos(0x1D018F, 160, 40);
    spawn N(script_80241268);
    sleep 10;
    ResetCam(0, 5.0);
    SI_SAVE_VAR(0) = 15;
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Init_80242570) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        return;
    }
    if (SI_SAVE_VAR(0) == 14) {
        EnableNpcShadow(-1, 0);
        SetNpcAnimation(-1, 0x70007);
        SetNpcYaw(-1, 270);
        if (SI_SAVE_FLAG(1226) == 0) {
            if (SI_SAVE_FLAG(1225) == 0) {
                SetNpcPos(-1, 55, 150, 0xFFFFFFA1);
            } else {
                SetNpcPos(-1, 90, 140, 0xFFFFFFAB);
            }
        } else {
            if (SI_SAVE_FLAG(1225) == 0) {
                SetNpcPos(-1, 0xFFFFFFF6, 112, 0xFFFFFFB0);
            } else {
                SetNpcPos(-1, 50, 0, 0);
                EnableNpcShadow(-1, 1);
            }
        }
        BindNpcIdle(-1, N(script_Idle_802421EC));
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_Interact_80242714) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 21 {
            if (SI_SAVE_FLAG(1276) == 0) {
                sleep 30;
                SetNpcAnimation(-1, 0x990305);
                sleep 10;
                PlaySoundAtNpc(-1, 801, 0);
                PlaySoundAtNpc(-1, 803, 0);
                sleep 35;
                SetNpcAnimation(-1, 0x990302);
                SetNpcCollisionSize(-1, 45, 26);
                SpeakToPlayer(1, 0x990303, 0x990302, 0, 0x1000A8);
                SI_SAVE_FLAG(1276) = 1;
                SetTattleString(1, 0x1A00D2);
                return;
            } else {
                SpeakToPlayer(1, 0x990303, 0x990302, 0, 0x1000A9);
            }
        }
        < 40 {
            SpeakToPlayer(1, 0x990303, 0x990302, 0, 0x1000AA);
        }
        < 42 {
            SpeakToPlayer(1, 0x990303, 0x990302, 0, 0x1000AB);
        }
        else {
            SpeakToPlayer(1, 0x990303, 0x990302, 0, 0x1000AC);
        }
    }
});

Script N(script_Init_802428E4) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242714));
    if (SI_SAVE_VAR(0) < 21) {
        if (SI_SAVE_FLAG(1276) == 0) {
            SetNpcCollisionSize(-1, 25, 25);
            SetNpcAnimation(-1, 0x990307);
            SetTattleString(1, 0x1A003B);
        }
    }
});

StaticNpc N(npcGroup_80242978)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241A40),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400F09,
        .init = N(script_Init_80242570),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001, 0x00070001,
        },
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80241A7C),
        .pos = { -230.0, 0.0, -320.0 },
        .flags = 0x00400D09,
        .init = N(script_Init_802428E4),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00990302, 0x0099030E, 0x0099030E, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302, 0x00990302,
        },
        .tattle = 0x1A00D2,
    },
};

StaticNpc N(npcGroup_80242D58)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241AA8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000005,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00970001, 0x00970002, 0x00970003, 0x00970003, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001, 0x00970001,
        },
        .tattle = 0x1A00C3,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80241AA8),
        .pos = { 45.0, 0.0, -70.0 },
        .flags = 0x00000005,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00970401, 0x00970402, 0x00970403, 0x00970403, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401, 0x00970401,
        },
        .tattle = 0x1A00C7,
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80241AA8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000005,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00970101, 0x00970102, 0x00970103, 0x00970103, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101, 0x00970101,
        },
        .tattle = 0x1A00C4,
    },
    {
        .id = 5,
        .settings = &N(npcSettings_80241AA8),
        .pos = { 20.0, 0.0, -70.0 },
        .flags = 0x00000005,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00970301, 0x00970302, 0x00970303, 0x00970303, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301, 0x00970301,
        },
        .tattle = 0x1A00C6,
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80241AA8),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000005,
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00970201, 0x00970202, 0x00970203, 0x00970203, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201, 0x00970201,
        },
        .tattle = 0x1A00C5,
    },
};

NpcGroupList N(npcGroupList_80243708) = {
    NPC_GROUP(N(npcGroup_80242978), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_80243720) = {
    NPC_GROUP(N(npcGroup_80242978), 0x00000000),
    NPC_GROUP(N(npcGroup_80242D58), 0x00000000),
    {},
};

s32 pad_003744[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243750) = SCRIPT({
    if (SI_MAP_VAR(0) == 0) {
        SI_MAP_VAR(1) = 6;
    }
    SI_MAP_VAR(1) += 2;
});

Script N(script_80243798) = SCRIPT({
0:
    SI_MAP_VAR(1) -= 1;
    SI_MAP_VAR(0) += SI_MAP_VAR(1);
    if (SI_MAP_VAR(0) < 0) {
        SI_MAP_VAR(1) = 0;
        SI_MAP_VAR(0) = 0;
    }
    if (SI_MAP_VAR(0) > 90) {
        SI_MAP_VAR(1) = 0;
        SI_MAP_VAR(0) = 90;
    }
    sleep 1;
    goto 0;
});

Script N(script_8024385C) = SCRIPT({

});

s32 pad_00386C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243870) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240810_B44F80, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240810_B44F80, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80243BD0) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240810_B44F80, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240810_B44F80, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240810_B44F80, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240810_B44F80, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x2A, 0x2B, 0x2C, 0x2D, 0x2E },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x29 },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, nanf }, { nanf, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_80244224) =  { -447.0f, 0.0f, -145.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x31, 0x32, 0x33, 0x34, 0x35 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x30 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000039, 0x00000137, 0x0000005C, 0xFFFFFF23, 0x0000000D, 0xF840604B, 0xFAA2B58A,
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { 4.58e-43f, 1.6e-43f, nanf }, { 5.77e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_802442A4) =  { 367.0f, 0.0f, -260.0f, 0.0f };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x5,
    .modelIDs = { 0x23, 0x24, 0x25, 0x26, 0x27 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x22 },
};

TreeEffectVectorList N(treeEffectVectors_Tree3) = {
    .count = 0x2,
    .vectors = { { nanf, 1.6e-43f, nanf }, { 1.05e-43f, 1.6e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree3),
    .callback = NULL,
};

Vec4f N(triggerCoord_80244304) =  { 30.0f, 0.0f, -110.0f, 0.0f };

Script N(script_80244314) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80243BD0) to TriggerFlag_WALL_HAMMER 63;
    bind N(script_ShakeTree_80243BD0) to TriggerFlag_BOMB N(triggerCoord_80244224);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80243BD0) to TriggerFlag_WALL_HAMMER 62;
    bind N(script_ShakeTree_80243BD0) to TriggerFlag_BOMB N(triggerCoord_802442A4);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_80243BD0) to TriggerFlag_WALL_HAMMER 43;
    bind N(script_ShakeTree_80243BD0) to TriggerFlag_BOMB N(triggerCoord_80244304);
});

s32 pad_0043FC[] = {
    0x00000000,
};

s32 N(vectorList_80244400)[] = {
    0xC3AF0000, 0x00000000, 0x41700000, 0xC35C0000, 0x41C80000, 0x41700000, 0xC2DC0000, 0x00000000,
    0x41F00000, 0xC2480000, 0x00000000, 0x43020000, 0x42480000, 0x00000000, 0x42DC0000, 0x43200000,
    0x41C80000, 0x43200000, 0x437F0000, 0x00000000, 0x438E8000,
};

Script N(script_80244454) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    SetNpcPos(0, 0xFFFFFFD8, 0, 15);
    SetNpcYaw(0, 270);
    SetNpcAnimation(0, 0x7000D);
    SetNpcAnimation(5, 0x970307);
    SetNpcAnimation(3, 0x970407);
    UseSettingsFrom(0, 0xFFFFFFEC, 0, 0);
    SetPanTarget(0, 0xFFFFFFEC, 0, 0);
    SetCamDistance(0, 350);
    SetCamPitch(0, 16.0, -7.5);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 90;
    spawn {
        SetNpcPos(2, 0xFFFFFEA2, 0, 15);
        SetNpcAnimation(2, 0x970003);
        LoadPath(90, N(vectorList_80244400), 7, 0);
    10:
        GetNextPathPos();
        SetNpcPos(2, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 10;
        }
    }
    spawn {
        sleep 15;
        SetNpcPos(6, 0xFFFFFEA2, 0, 15);
        SetNpcAnimation(6, 0x970203);
        LoadPath(90, N(vectorList_80244400), 7, 0);
    11:
        GetNextPathPos();
        SetNpcPos(6, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        sleep 1;
        if (SI_VAR(0) == 1) {
            goto 11;
        }
    }
    sleep 60;
    InterpNpcYaw(0, 90, 0);
    SetNpcAnimation(0, 0x70004);
    SetNpcJumpscale(0, 2.0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetNpcAnimation(2, 0x970004);
    SetNpcFlagBits(4, 512, 1);
    SetNpcPos(4, 0xFFFFFEA2, 0, 15);
    SetNpcAnimation(4, 0x970103);
    SetNpcSpeed(4, 5.0);
    NpcMoveTo(4, 0xFFFFFF9C, 0, 0);
    SetNpcAnimation(4, 0x970101);
    parallel {
        sleep 20;
        SetNpcJumpscale(4, 2.0);
        loop 10 {
            SetNpcAnimation(4, 0x970108);
            GetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            NpcJump0(4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
            SetNpcAnimation(4, 0x970109);
            sleep 8;
        }
    }
    sleep 90;
    FadeOutMusic(0, 1000);
    GotoMap(D_802462CC_B4AA3C, 11);
    sleep 100;
});

s32 pad_004944[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(vectorList_80244950)[] = {
    0xC2200000, 0x43A50000, 0xC4610000, 0xC2EA0000, 0x43D20000, 0xC4160000, 0xC3430000, 0x43E88000,
    0xC3960000, 0xC3880000, 0x43E88000, 0x00000000, 0xC3AF0000, 0x43A28000, 0x43960000, 0xC3AF0000,
    0x437A0000, 0x43960000,
};

s32 N(vectorList_80244998)[] = {
    0x41200000, 0x43020000, 0xC1A00000, 0x40A00000, 0x42960000, 0xC1A00000, 0x00000000, 0x00000000,
    0xC1A00000,
};

s32 N(vectorList_802449BC)[] = {
    0x00000000, 0x00000000, 0xC1A00000, 0x00000000, 0x41F00000, 0xC1000000, 0x00000000, 0x00000000,
    0x00000000,
};

Script N(script_802449E0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        PlaySound(770);
        UseSettingsFrom(0, 0xFFFFFEA2, 300, 0);
        SetPanTarget(0, 0xFFFFFEA2, 300, 0);
        SetCamPitch(0, 10, -7.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        MakeEntity(D_802EAE30, 0, 2650, 0, 148, 0x80000000);
        SI_VAR(10) = SI_VAR(0);
        spawn {
            func_80240BE8_B45358();
        }
        spawn {
            SI_VAR(9) = SI_VAR(10);
            LoadPath(70, N(vectorList_80244950), 6, 4);
            loop {
                GetNextPathPos();
                func_80240A80_B451F0(SI_VAR(9), SI_VAR(1), SI_VAR(2), SI_VAR(3));
                sleep 1;
                if (SI_VAR(0) == 0) {
                    break;
                }
            }
        }
        sleep 50;
        GotoMap(D_802462E8_B4AA58, 2);
        sleep 100;
    } else {
        UseSettingsFrom(0, 0, 0, 0);
        SetPanTarget(0, 0, 170, 0);
        SetCamDistance(0, 350);
        SetCamPitch(0, 16, -6.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 20;
        SetPanTarget(0, 0, 0, 0);
        SetCamSpeed(0, 1.2001953125);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        MakeEntity(D_802EAE30, 0, 2650, 0, 0, 0x80000000);
        SI_VAR(10) = SI_VAR(0);
        spawn {
            func_80240D0C_B4547C();
        }
        SI_VAR(9) = SI_VAR(10);
        LoadPath(12, N(vectorList_80244998), 3, 0);
        loop {
            GetNextPathPos();
            func_80240A80_B451F0(SI_VAR(9), SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        PlaySoundAt(431, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        spawn {
            PlayEffect(7, 2, 0xFFFFFFF1, 0, 0, 10, 10, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(7, 2, 15, 0, 0, 350, 350, 0, 0, 0, 0, 0, 0, 0);
            ShakeCam(0, 0, 30, 1.0);
        }
        LoadPath(10, N(vectorList_802449BC), 3, 0);
        loop {
            GetNextPathPos();
            func_80240A80_B451F0(SI_VAR(9), SI_VAR(1), SI_VAR(2), SI_VAR(3));
            sleep 1;
            if (SI_VAR(0) == 0) {
                break;
            }
        }
        PlaySoundAt(431, 0, SI_VAR(1), SI_VAR(2), SI_VAR(3));
        PlayEffect(7, 2, 0xFFFFFFF6, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        PlayEffect(7, 2, 0xFFFFFFF6, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 60;
        spawn N(script_ExitWalk_8024134C);
    }
});

s32 pad_005074[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80245080) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240DF0_B45560, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240DF0_B45560, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_802453E0) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240DF0_B45560, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240DF0_B45560, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240DF0_B45560, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240DF0_B45560, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x42 },
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), 0x00000000, N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x44 },
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), 0x00000000, N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x46 },
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), 0x00000000, N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x48 },
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), 0x00000000, N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4A },
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { nanf, 3.1e-44f, nanf } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), 0x00000000, N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4C },
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { 3.62e-43f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), 0x00000000, N(treeEffectVectors_Bush6), 0x00000000,
};

ModelIdList N(treeModelList_Bush7_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x4E },
};

TreeEffectVectorList N(treeEffectVectors_Bush7) = {
    .count = 0x1,
    .vectors = { { 4.41e-43f, 2.8e-44f, nanf } },
};

s32 N(searchBushEvent_Bush7)[] = {
    N(treeModelList_Bush7_Bush), 0x00000000, N(treeEffectVectors_Bush7), 0x00000000,
};

ModelIdList N(treeModelList_Bush8_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x50 },
};

TreeEffectVectorList N(treeEffectVectors_Bush8) = {
    .count = 0x1,
    .vectors = { { 3.98e-43f, 2.8e-44f, 2.54e-43f } },
};

s32 N(searchBushEvent_Bush8)[] = {
    N(treeModelList_Bush8_Bush), 0x00000000, N(treeEffectVectors_Bush8), 0x00000000,
};

ModelIdList N(treeModelList_Bush9_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x52 },
};

TreeEffectVectorList N(treeEffectVectors_Bush9) = {
    .count = 0x1,
    .vectors = { { 5.3e-43f, 3.1e-44f, 2.59e-43f } },
};

s32 N(searchBushEvent_Bush9)[] = {
    N(treeModelList_Bush9_Bush), 0x00000000, N(treeEffectVectors_Bush9), 0x00000000,
};

ModelIdList N(treeModelList_Bush10_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x54 },
};

TreeEffectVectorList N(treeEffectVectors_Bush10) = {
    .count = 0x1,
    .vectors = { { 6.1e-43f, 2.8e-44f, 2.87e-43f } },
};

s32 N(searchBushEvent_Bush10)[] = {
    N(treeModelList_Bush10_Bush), 0x00000000, N(treeEffectVectors_Bush10), 0x00000000,
};

Script N(script_80245B74) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 51;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 52;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 53;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 54;
    SI_VAR(0) = N(searchBushEvent_Bush5);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 55;
    SI_VAR(0) = N(searchBushEvent_Bush6);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 56;
    SI_VAR(0) = N(searchBushEvent_Bush7);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 57;
    SI_VAR(0) = N(searchBushEvent_Bush8);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 58;
    SI_VAR(0) = N(searchBushEvent_Bush9);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 59;
    SI_VAR(0) = N(searchBushEvent_Bush10);
    bind N(script_SearchBush_80245080) to TriggerFlag_WALL_INTERACT 60;
});

s32 pad_005D3C[] = {
    0x00000000,
};

Script N(script_80245D40) = SCRIPT({
    DemoJoystickXY(0xFFFFFFD8, 30);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBD, 50);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBD, 53);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBD, 60);
    sleep 1;
    DemoJoystickXY(0xFFFFFFBD, 65);
    sleep 48;
    DemoJoystickXY(0xFFFFFFBF, 66);
    sleep 1;
    DemoJoystickXY(0xFFFFFFC1, 66);
    sleep 1;
    DemoJoystickXY(0xFFFFFFC6, 68);
    sleep 1;
    DemoJoystickXY(0xFFFFFFCB, 70);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD2, 72);
    sleep 1;
    DemoJoystickXY(0xFFFFFFD7, 73);
    sleep 1;
    DemoJoystickXY(0xFFFFFFDC, 74);
    sleep 1;
    DemoJoystickXY(0xFFFFFFDE, 74);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE2, 75);
    sleep 1;
    DemoJoystickXY(0xFFFFFFE5, 76);
    sleep 1;
    DemoJoystickXY(0xFFFFFFEC, 77);
    sleep 1;
    DemoJoystickXY(0xFFFFFFF2, 78);
    sleep 1;
    DemoJoystickXY(0xFFFFFFF6, 79);
    sleep 1;
    DemoJoystickXY(0xFFFFFFFC, 79);
    sleep 2;
    DemoSetButtons(4);
    sleep 28;
    DemoSetButtons(0);
    sleep 25;
    DemoJoystickXY(4, 80);
    sleep 2;
    DemoJoystickXY(5, 80);
    sleep 1;
    DemoJoystickXY(7, 81);
    sleep 1;
    DemoJoystickXY(11, 81);
    sleep 1;
    DemoJoystickXY(16, 80);
    sleep 1;
    DemoJoystickXY(21, 79);
    sleep 1;
    DemoJoystickXY(31, 77);
    sleep 1;
    DemoJoystickXY(40, 75);
    sleep 1;
    DemoJoystickXY(50, 72);
    sleep 1;
    DemoJoystickXY(60, 70);
    sleep 1;
    DemoJoystickXY(64, 69);
    sleep 30;
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802462F0_B4AA60, 2, 2);
    sleep 110;
});

Script N(script_8024619C) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802462F0_B4AA60, 2, 3);
    sleep 100;
});

s32 N(unk_8024625C)[] = {
    0x00000000,
};

Script N(script_80246260) = SCRIPT({
    func_80240FC0_B45730();
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_8024619C);
    spawn N(script_80245D40);
});

s32 pad_0062A4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802462B0_B4AA20

// rodata: D_802462B8_B4AA28

// rodata: D_802462C0_B4AA30

// rodata: D_802462CC_B4AA3C

s32 pad_0062D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802462E0_B4AA50

// rodata: D_802462E8_B4AA58

// rodata: D_802462F0_B4AA60

s32 pad_0062F8[] = {
    0x00000000, 0x00000000,
};
