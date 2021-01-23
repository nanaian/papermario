#include "trd_00.h"

s32 pad_00030C[1];
s32 pad_0005CC[1];
s32 pad_00062C[1];
Script N(script_802406D0);
s32 pad_000798[2];
Script N(script_UpdateTexturePan_802407A0);
Script N(script_ExitWalk_8024083C);
Script N(script_ExitDoubleDoor_80240898);
Script N(script_ExitDoubleDoor_8024093C);
Script N(script_ExitWalk_802409E0);
Script N(script_ExitWalk_80240A3C);
Script N(script_80240A98);
Script N(script_80240B34);
Script N(script_EnterWalk_80240D8C);
Script N(script_80240F8C);
Script N(main);
s32 pad_00133C[1];
s32 N(unk_80241340)[1];
Script N(script_80241344);
Script N(script_802413AC);
Script N(script_8024148C);
Script N(script_802414D8);
Script N(script_MakeEntities);
s32 pad_00160C[1];
s32 unk_missing_80241668[22];
Script N(script_Idle_802416C0);
Script N(script_Init_80241C40);
Script N(script_Idle_80241C8C);
Script N(script_Defeat_80241D80);
Script N(script_80241DA4);
Script N(script_Init_80242830);
StaticNpc N(npcGroup_802428F4)[1];
StaticNpc N(npcGroup_80242AE4)[1];
NpcGroupList N(npcGroupList_80242CD4);
s32 pad_002CF8[2];
const char D_80242D00_99C970[8]; // "nok_15"
const char D_80242D08_99C978[8]; // "trd_01"
const char D_80242D10_99C980[8]; // "trd_05"
s32 pad_002D18[2];

// text: func_80240000_999C70

// text: func_80240124_999D94

s32 pad_00030C[] = {
    0x00000000,
};

// text: func_80240310_999F80

// text: func_802403C4_99A034

// text: func_80240428_99A098

// text: func_80240578_99A1E8

s32 pad_0005CC[] = {
    0x00000000,
};

// text: func_802405D0_99A240

// text: func_8024060C_99A27C

s32 pad_00062C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -973.0f, 0.0f, 204.0f, 90.0f },
    { -525.0f, 0.0f, 130.0f, 240.0f },
    { 400.0f, 0.0f, 185.0f, 180.0f },
    { 587.0f, 0.0f, 6.0f, 90.0f },
    { -955.0f, 200.0f, -101.0f, 90.0f },
    { -518.0f, 0.0f, 212.0f, 240.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19004E,
};

Script N(script_802406D0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFA6 {
            SetMusicTrack(0, 20, 1, 8);
            PlaySound(0x8000005C);
        }
        == 0xFFFFFFB4 {
            SetMusicTrack(0, 120, 1, 8);
        } else {
            SetMusicTrack(0, 17, 0, 8);
            PlaySound(0x8000005C);
        }
    }
    UseDoorSounds(1);
});

s32 pad_000798[] = {
    0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_802407A0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_999C70();
                    return;
                }
            }
        }
    }
    func_80240124_999D94();
});

Script N(script_ExitWalk_8024083C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242D00_99C970, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240898) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 6;
    SI_VAR(2) = 67;
    SI_VAR(3) = 65;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80242D08_99C978, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_8024093C) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 11;
    SI_VAR(2) = 71;
    SI_VAR(3) = 69;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80242D10_99C980, 1);
    sleep 100;
});

Script N(script_ExitWalk_802409E0) = SCRIPT({
    group 27;
    UseExitHeading(60, 3);
    spawn ExitWalk;
    GotoMap(D_80242D10_99C980, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240A3C) = SCRIPT({
    group 27;
    UseExitHeading(60, 4);
    spawn ExitWalk;
    GotoMap(D_80242D00_99C970, 2);
    sleep 100;
});

Script N(script_80240A98) = SCRIPT({
    bind N(script_ExitWalk_8024083C) to 0x80000 1;
    bind N(script_ExitDoubleDoor_80240898) to TriggerFlag_WALL_INTERACT 6;
    bind N(script_ExitDoubleDoor_8024093C) to TriggerFlag_WALL_INTERACT 11;
    bind N(script_ExitWalk_802409E0) to 0x80000 19;
    bind N(script_ExitWalk_80240A3C) to 0x80000 15;
});

Script N(script_80240B34) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerPos(0, 0xFFFFFC18, 0);
    SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
    spawn {
        UseSettingsFrom(0, 0xFFFFFD26, 0, 400);
        SetPanTarget(0, 20, 0, 400);
        SetCamDistance(0, 0xFFFFFC18);
        SetCamPitch(0, 18, -20.0);
        SetCamSpeed(0, 90.0);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        SetPanTarget(0, 0xFFFFFE20, 0, 400);
        SetCamDistance(0, 0xFFFFFAEC);
        SetCamPitch(0, 18, -11.5);
        SetCamSpeed(0, 0.80078125);
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        sleep 5;
        ResetCam(0, 4.0);
    }
    sleep 82;
    SetPlayerPos(0xFFFFFBEF, 0, 204);
    SetPlayerAnimation(0x10004);
    SetNpcPos(0xFFFFFFFC, 0xFFFFFBEF, 0, 204);
    DisablePlayerPhysics(0);
    PlayerMoveTo(0xFFFFFC7C, 200, 30);
    SetPlayerAnimation(0x10002);
    DisablePlayerInput(0);
});

Script N(script_EnterWalk_80240D8C) = SCRIPT({
    group 0;
    suspend group 1;
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240A98);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            if (SI_SAVE_VAR(0) < 0xFFFFFFA6) {
                SI_SAVE_VAR(0) = 0xFFFFFFA6;
                await N(script_80240B34);
                spawn N(script_80240A98);
            } else {
                SI_VAR(0) = N(script_80240A98);
                spawn EnterWalk;
            }
        }
        == 1 {
            SI_VAR(2) = 67;
            SI_VAR(3) = 65;
            await EnterDoubleDoor;
            spawn N(script_80240A98);
        }
        == 2 {
            SI_VAR(2) = 71;
            SI_VAR(3) = 69;
            await EnterDoubleDoor;
            spawn N(script_80240A98);
        }
        == 3 {
            SI_VAR(0) = N(script_80240A98);
            spawn EnterWalk;
        }
        == 4 {
            SI_VAR(0) = N(script_80240A98);
            spawn EnterWalk;
        }
        == 5 {
            spawn N(script_80240A98);
        }
    }
    resume group 1;
});

Script N(script_80240F8C) = SCRIPT({
    group 0;
    SetTexPanner(2, 1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
10:
    SetTexPanOffset(1, 0, SI_VAR(0), 0);
    SetTexPanOffset(1, 1, SI_VAR(1), 0);
    SI_VAR(0) += 100;
    SI_VAR(1) -= 100;
    sleep 1;
    goto 10;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 7;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_SAVE_FLAG(1970) = 1;
    MakeNpcs(1, N(npcGroupList_80242CD4));
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0, 1, 4 {
        }
    }
    await N(script_MakeEntities);
    spawn N(script_80240F8C);
    spawn N(script_802406D0);
    sleep 1;
    if (SI_SAVE_FLAG(658) == 0) {
        SetGroupEnabled(80, 0);
    } else {
        ModifyColliderFlags(0, 20, 0x7FFFFE00);
        SetGroupEnabled(77, 0);
    }
    spawn N(script_EnterWalk_80240D8C);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 5) {
        sleep 65;
    } else {
        sleep 1;
    }
    EnableTexPanning(4, 1);
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0;
        SI_VAR(2) = 90;
        SI_VAR(3) = 0xFFFFFFC4;
        SI_VAR(4) = 0xFFFFFFBA;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802407A0);
    }
});

s32 pad_00133C[] = {
    0x00000000,
};

s32 N(unk_80241340)[] = {
    0x00000000,
};

Script N(script_80241344) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_802413AC) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80241344);
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

Script N(script_8024148C) = SCRIPT({
    SI_VAR(10) = 260;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(641) = 1;
    await N(script_802413AC);
});

Script N(script_802414D8) = SCRIPT({
    SI_VAR(10) = 309;
    SI_VAR(11) = 2;
    SI_SAVE_FLAG(642) = 1;
    await N(script_802413AC);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 810, 0, 0xFFFFFFCE, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(641));
    AssignScript(N(script_8024148C));
    MakeEntity(0x802EAE30, 0xFFFFFD12, 200, 0xFFFFFF83, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(642));
    AssignScript(N(script_802414D8));
    MakeEntity(0x802E9A18, 0xFFFFFC68, 60, 80, 0, 0x80000000);
    MakeEntity(0x802E9A18, 325, 60, 220, 0, 0x80000000);
});

s32 pad_00160C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80241610) = {
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

NpcSettings N(npcSettings_8024163C) = {
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

s32 unk_missing_80241668[] = {
    0x00000000, 0x00140014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000, 0x00000000, 0x00160018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00630000,
};

Script N(script_Idle_802416C0) = SCRIPT({
    SetNpcFlagBits(-1, 2, 1);
    AwaitPlayerApproach(0xFFFFFDBC, 276, 50);
    SetNpcFlagBits(-1, 2, 0);
    spawn {
        PlaySoundAtCollider(6, 451, 0);
        MakeLerp(0, 100, 10, 10);
0:
        UpdateLerp();
        RotateModel(67, SI_VAR(0), 0, -1, 0);
        RotateModel(65, SI_VAR(0), 0, 1, 0);
        sleep 1;
        if (SI_VAR(1) != 0) {
            goto 0;
        }
    }
    DisablePlayerInput(1);
    spawn {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 350);
        SetPanTarget(0, 0xFFFFFDC6, 0, 173);
        SetCamSpeed(0, 3.0);
        PanToTarget(0, 0, 1);
    }
    SetNpcAnimation(-1, 0x660003);
    SetNpcFlagBits(-1, 64, 1);
    SetNpcSpeed(-1, 4.5);
    NpcMoveTo(-1, 0xFFFFFDD4, 180, 0);
    WaitForCam(0, 1.0);
    0x802CFD30(-1, 5, 4, 2, 1, 0);
    SetNpcAnimation(-1, 0x66001E);
    sleep 12;
    0x802CFD30(-1, 0, 0, 0, 0, 0);
    SetNpcAnimation(-1, 0x660004);
    sleep 10;
    SpeakToPlayer(-1, 0x660014, 0x660004, 0, 0xC00D2);
    SetNpcAnimation(-1, 0x660002);
    InterpNpcYaw(-1, 45, 2);
    PlaySoundAtNpc(-1, 371, 0);
    SetNpcAnimation(-1, 0x660003);
    SetNpcJumpscale(-1, 0.80078125);
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    NpcJump0(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2), 8);
    sleep 8;
    sleep 12;
    spawn {
        PlaySoundAtNpc(-1, 372, 0);
        SetNpcSpeed(-1, 8.0);
        NpcMoveTo(-1, 0xFFFFFE10, 101, 0);
    }
    sleep 10;
    spawn {
        sleep 8;
        ShakeCam(0, 0, 5, 1.0);
    }
    MakeLerp(100, 0, 10, 10);
1:
    UpdateLerp();
    RotateModel(67, SI_VAR(0), 0, -1, 0);
    RotateModel(65, SI_VAR(0), 0, 1, 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 1;
    }
    PlaySoundAtCollider(6, 452, 0);
    sleep 10;
    PanToTarget(0, 0, 0);
    SetCamSpeed(0, 3.5);
    WaitForCam(0, 1.0);
    DisablePlayerInput(0);
    SI_SAVE_VAR(0) = 0xFFFFFFA7;
    RemoveNpc(-1);
});

Script N(script_Init_80241C40) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802416C0));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFA7) {
        RemoveNpc(-1);
    }
});

Script N(script_Idle_80241C8C) = SCRIPT({
    loop {
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) -= 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
        loop 10 {
            GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(1) += 1;
            SetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
});

Script N(script_Defeat_80241D80) = SCRIPT({
    SetSelfVar(0, 1);
});

Script N(script_80241DA4) = SCRIPT({
    DisablePartnerAI(0);
    0x802CF56C(2);
    SetNpcPos(1, 0xFFFFFDC9, 26, 236);
    PlayerFaceNpc(1, 0);
    NpcFaceNpc(0xFFFFFFFC, 1, 0);
    UseSettingsFrom(0, 0xFFFFFDF1, 0, 216);
    SetPanTarget(0, 0xFFFFFDF1, 0, 216);
    SetCamDistance(0, 475.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    sleep 1;
    0x802D2508();
    DisablePlayerInput(1);
    sleep 40;
    SpeakToPlayer(1, 0x120002, 0x120001, 512, 0xC010D);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 18.0, -9.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    MakeLerp(0, 360, 10, 0);
    loop {
        UpdateLerp();
        SetNpcRotation(1, 0, SI_VAR(0), 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    EnableNpcAI(1, 0);
    SetNpcAnimation(1, 0x120003);
    sleep 20;
    PlaySoundAtPlayer(313, 0);
    SetPlayerAnimation(0x1001F);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(1);
    SI_VAR(0) += 5;
    SI_VAR(1) += 50;
    SI_VAR(2) += 10;
    SI_VAR(3) += 30;
    loop 6 {
        PlayEffect(17, 3, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
        PlayEffect(17, 1, SI_VAR(0), SI_VAR(3), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 6;
    }
    sleep 20;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    PlaySoundAtPlayer(392, 0);
    PlayEffect(82, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 1, 30, 0, 0, 0, 0, 0, 0, 0);
    sleep 40;
    SetPlayerAnimation(0x10002);
    SetNpcAnimation(1, 0x120001);
    EnableNpcAI(1, 1);
    func_802405D0_99A240();
    ShowMessageAtScreenPos(0x1D0191, 160, 40);
    sleep 10;
    SpeakToPlayer(1, 0x120002, 0x120001, 512, 0xC010E);
    ShowChoice(0x1E0013);
    if (SI_VAR(0) == 1) {
        ContinueSpeech(1, 0x120002, 0x120001, 512, 0xC010F);
        ShowChoice(0x1E0013);
        if (SI_VAR(0) == 1) {
            ContinueSpeech(1, 0x120002, 0x120001, 512, 0xC0110);
            goto 10;
        }
    }
    ContinueSpeech(1, 0x120002, 0x120001, 512, 0xC0111);
    SetSelfVar(0, 0);
    StartBattle();
    loop {
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            break;
        }
        sleep 1;
    }
    FullyRestoreSP();
    func_8024060C_99A27C();
10:
    sleep 30;
    GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 250.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(1, 0x120002, 0x120001, 512, 0xC0112);
    sleep 10;
    SetPanTarget(0, 0xFFFFFDF1, 0, 216);
    SetCamDistance(0, 300.0);
    SetCamPitch(0, 18.0, -9.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 10;
    SpeakToPlayer(1, 0x120002, 0x120001, 512, 0xC0113);
    SetNpcFlagBits(1, 0x40000, 1);
    spawn {
        loop 25 {
            GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            PlayEffect(17, 4, SI_VAR(0), SI_VAR(1), SI_VAR(2), 20, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 4;
        }
    }
    spawn {
        SI_VAR(2) = 0;
        SI_VAR(3) = 1800;
        MakeLerp(SI_VAR(2), SI_VAR(3), 100, 2);
        loop {
            UpdateLerp();
            SetNpcRotation(1, 0, SI_VAR(0), 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    spawn {
        GetNpcPos(1, SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = SI_VAR(3);
        SI_VAR(5) += 180;
        MakeLerp(SI_VAR(3), SI_VAR(5), 100, 2);
        loop {
            UpdateLerp();
            SetNpcPos(1, SI_VAR(2), SI_VAR(0), SI_VAR(4));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SetNpcPos(1, 0, 0xFFFFFC18, 0);
    }
    spawn {
        sleep 15;
        PlaySoundAtNpc(1, 8261, 0);
    }
    sleep 10;
    SetPlayerAnimation(0x1002A);
    sleep 90;
    ResetCam(0, 3);
    sleep 20;
    SetPlayerAnimation(0x10002);
    SI_SAVE_VAR(0) = 0xFFFFFFB5;
    spawn N(script_802406D0);
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_Init_80242830) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 5) {
        GetLoadType(SI_VAR(1));
        if (SI_VAR(1) == 1) {
            RemoveNpc(-1);
        } else {
            BindNpcIdle(-1, N(script_Idle_80241C8C));
            BindNpcDefeat(-1, N(script_Defeat_80241D80));
            spawn N(script_80241DA4);
        }
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802428F4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241610),
        .pos = { -469.0, 0.0, 101.0 },
        .flags = 0x00000801,
        .init = N(script_Init_80241C40),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00660304, 0x00660302, 0x00660303, 0x00660303, 0x00660304, 0x00660304, 0x0066030A, 0x0066030A, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303, 0x00660303,
        },
    },
};

StaticNpc N(npcGroup_80242AE4)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024163C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000805,
        .init = N(script_Init_80242830),
        .yaw = 0,
        .dropFlags = 0x80,
        .movement = { 0x00000000, 0xFFFFFC18, 0x00000000, 0x00000064, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFC18, 0x00000000, 0x000001F4, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120000, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001, 0x00120001,
        },
    },
};

NpcGroupList N(npcGroupList_80242CD4) = {
    NPC_GROUP(N(npcGroup_802428F4), 0x00000000),
    NPC_GROUP(N(npcGroup_80242AE4), 0x08000000),
    {},
};

s32 pad_002CF8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242D00_99C970

// rodata: D_80242D08_99C978

// rodata: D_80242D10_99C980

s32 pad_002D18[] = {
    0x00000000, 0x00000000,
};
