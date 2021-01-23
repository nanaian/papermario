#include "kmr_04.h"

s32 pad_00005C[1];
s32 pad_00046C[1];
Script N(script_80240560);
Script N(script_8024058C);
Script N(script_802405B8);
s32 pad_0005F4[3];
Script N(script_ExitWalk_80240600);
Script N(script_8024065C);
Script N(script_EnterWalk_80240688);
Script N(main);
s32 pad_00085C[1];
Script N(script_8024088C);
Script N(script_802408FC);
Script N(script_NpcAI_8024090C);
Script N(script_80240FC4);
Script N(script_80240FD4);
Script N(script_Idle_80240FE4);
Script N(script_Defeat_80241334);
Script N(script_Init_80241614);
StaticNpc N(npcGroup_8024167C)[1];
s8 N(npcGroup_8024186C)[314];
s8 pad_0019A6[182];
NpcGroupList N(npcGroupList_80241A5C);
Script N(script_80241A80);
Script N(script_MakeEntities);
s32 pad_001BE4[3];
s32 N(unk_80241BF0)[288];
s32 N(unk_80242070)[8];
Script N(script_SearchBush_80242090);
Script N(script_ShakeTree_802423F0);
s32 N(unk_802429F4)[1];
Script N(script_802429F8);
Script N(script_80242A28);
Script N(script_80242A58);
Script N(script_80242CE4);
Script N(script_Bush7_Callback);
Script N(script_Bush8_Callback);
s32 N(treeDropList_Bush1)[8];
s32 N(searchBushEvent_Bush1)[4];
s32 N(treeDropList_Bush2)[8];
s32 N(searchBushEvent_Bush2)[4];
s32 N(treeDropList_Bush3)[15];
s32 N(searchBushEvent_Bush3)[4];
s32 N(treeDropList_Bush4)[8];
s32 N(searchBushEvent_Bush4)[4];
s32 N(treeDropList_Bush5)[8];
s32 N(searchBushEvent_Bush5)[4];
s32 N(searchBushEvent_Bush7)[4];
s32 N(searchBushEvent_Bush8)[4];
s32 N(searchBushEvent_Bush6)[4];
s32 N(searchBushEvent_Bush9)[4];
s32 N(treeDropList_Tree1)[8];
s32 N(treeDropList_Tree2)[8];
Script N(script_Tree3_Callback);
Script N(script_8024349C);
s32 pad_00375C[1];
const char D_80243760_8CE060[8]; // "kmr_03"
s32 pad_003768[2];

// text: func_80240000_8CA900

// text: func_8024002C_8CA92C

s32 pad_00005C[] = {
    0x00000000,
};

// text: func_80240060_8CA960

// text: func_802400D0_8CA9D0

// text: func_8024029C_8CAB9C

// text: func_802402C8_8CABC8

// text: func_8024037C_8CAC7C

// text: func_802403E0_8CACE0

// text: func_80240434_8CAD34

// text: func_80240444_8CAD44

s32 pad_00046C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 485.0f, 0.0f, 9.0f, 270.0f },
    { 198.0f, 100.0f, -25.0f, 270.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { 43.0f, 0.0f, -376.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19003C,
};

Script N(script_80240560) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

Script N(script_8024058C) = SCRIPT({
    SetMusicTrack(0, 71, 0, 8);
});

Script N(script_802405B8) = SCRIPT({
    func_802D5FF8(66, 0);
    sleep 130;
    func_802D5FD8();
});

s32 pad_0005F4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80240600) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243760_8CE060, 0);
    sleep 100;
});

Script N(script_8024065C) = SCRIPT({
    bind N(script_ExitWalk_80240600) to 0x80000 0;
});

Script N(script_EnterWalk_80240688) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_8024065C);
        return;
    }
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 10) {
        SI_VAR(0) = N(script_8024065C);
        spawn EnterWalk;
    } else {
        spawn func_80285C50;
        spawn N(script_8024065C);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 30;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_FLAG(9) = 0;
    MakeNpcs(0, N(npcGroupList_80241A5C));
    ClearDefeatedEnemies();
    await N(script_MakeEntities);
    await N(script_8024349C);
    spawn N(script_80240560);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    spawn N(script_EnterWalk_80240688);
    sleep 1;
});

s32 pad_00085C[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240860) = {
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

Script N(script_8024088C) = SCRIPT({
    SetNpcFlagBits(-1, 512, 0);
    SetNpcFlagBits(-1, 72, 1);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    EnableNpcShadow(-1, 0);
});

Script N(script_802408FC) = SCRIPT({

});

Script N(script_NpcAI_8024090C) = SCRIPT({
1:
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF87 {
            loop {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                sleep 1;
                if (SI_VAR(0) <= 370) {
                    break;
                }
            }
            DisablePlayerInput(1);
            func_802CF56C(0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(0) += 30;
            SetNpcSpeed(0xFFFFFFFC, 2.0);
            NpcMoveTo(SI_VAR(0), SI_VAR(1), SI_VAR(2), 0);
            sleep 5;
            DisablePartnerAI(0);
            SpeakToPlayer(0xFFFFFFFC, 0x9D0008, 0x9D0001, 0, 0xB00A9);
            SetNpcAnimation(0xFFFFFFFC, 0x9D0001);
            EnablePartnerAI();
            sleep 10;
            DisablePlayerInput(0);
            SI_SAVE_VAR(0) = 0xFFFFFF88;
        }
        == 0xFFFFFF89 {
            if (SI_AREA_VAR(0) == 0) {
            10:
                sleep 1;
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                if (SI_VAR(0) < 360) {
                    goto 10;
                }
                if (SI_VAR(0) > 400) {
                    goto 10;
                }
                if (SI_VAR(2) < 0xFFFFFFDC) {
                    goto 10;
                }
                if (SI_VAR(2) > 85) {
                    goto 10;
                }
                DisablePlayerInput(1);
                func_80240000_8CA900();
                DisablePartnerAI(0);
                SetNpcFlagBits(0xFFFFFFFC, 64, 1);
                SetNpcAnimation(0xFFFFFFFC, 0x9D0002);
                SetNpcSpeed(0xFFFFFFFC, 3.0);
                NpcMoveTo(0xFFFFFFFC, 420, 6, 0);
                spawn {
                    sleep 3;
                    PlayerFaceNpc(0xFFFFFFFC, 3);
                }
                SpeakToPlayer(0xFFFFFFFC, 0x9D0008, 0x9D0001, 0, 0xB00AC);
                SetNpcAnimation(0xFFFFFFFC, 0x9D0001);
                sleep 10;
                spawn {
                    SetPlayerSpeed(3.0);
                    PlayerMoveTo(395, 0, 0);
                    InterpPlayerYaw(90, 0);
                }
                SetNpcFlagBits(0xFFFFFFFC, 8, 1);
                SetNpcSpeed(0xFFFFFFFC, 6.0);
                SetNpcAnimation(0xFFFFFFFC, 0x9D0003);
                NpcMoveTo(0xFFFFFFFC, 582, 6, 0);
                SetNpcAnimation(0xFFFFFFFC, 0x9D0001);
                SetNpcFlagBits(0xFFFFFFFC, 8, 0);
                PlaySoundAtNpc(0xFFFFFFFC, 97, 0);
                SpeakToPlayer(0xFFFFFFFC, 0x9D0008, 0x9D0001, 0, 0xB00AD);
                sleep 10;
                spawn {
                    SI_VAR(0) = 0;
                    func_802CDE68(0xFFFFFFFC, 10);
                    loop 60 {
                        SI_VAR(0) += 53;
                        SetNpcRotation(0xFFFFFFFC, 0, 0, SI_VAR(0));
                        PlayerFaceNpc(0xFFFFFFFC, 0);
                        sleep 1;
                    }
                    func_802CDE68(0xFFFFFFFC, 0);
                    SetNpcRotation(0xFFFFFFFC, 0, 0, 0);
                }
                spawn {
                    ShakeCam(0, 0, 15, 1.0);
                }
                PlayEffect(24, 1, 495, 15, 9, 460, 15, 9, 6, 0, 0, 0, 0, 0);
                SetNpcAnimation(0xFFFFFFFC, 0x9D0007);
                NpcMoveTo(0xFFFFFFFC, 250, 6, 60);
                SetNpcAnimation(0xFFFFFFFC, 0x9D0007);
                SetNpcRotation(0xFFFFFFFC, 0, 0, 0);
                spawn {
                    loop 20 {
                        SetNpcPos(0xFFFFFFFC, 250, 0, 6);
                        sleep 3;
                        SetNpcPos(0xFFFFFFFC, 250, 0, 0);
                        sleep 3;
                    }
                }
                SI_AREA_VAR(0) = 1;
            }
        }
    }
    sleep 1;
    goto 1;
});

Script N(script_80240FC4) = SCRIPT({

});

Script N(script_80240FD4) = SCRIPT({

});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Idle_80240FE4) = {
    SI_CMD(ScriptOpcode_CALL, func_800445D4, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 100),
            SI_CMD(ScriptOpcode_LABEL, 0),
            SI_CMD(ScriptOpcode_MATCH, SI_AREA_VAR(0)),
                SI_CMD(ScriptOpcode_CASE_EQ, 1),
                    SI_CMD(ScriptOpcode_SPAWN, N(script_8024058C)),
                    SI_CMD(ScriptOpcode_SPAWN_THREAD),
                        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
                        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 430, SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, SetCamDistance, 0, SI_FIXED(275.0)),
                        SI_CMD(ScriptOpcode_CALL, SetCamPitch, 0, SI_FIXED(17.5), SI_FIXED(-7.5)),
                        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(2.0)),
                        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
                        SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
                    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
                    SI_CMD(ScriptOpcode_CALL, SetNpcPos, 0, 630, 0, 0),
                    SI_CMD(ScriptOpcode_CALL, EnableNpcShadow, -1, 1),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                    SI_CMD(ScriptOpcode_CALL, PlayerFaceNpc, 0, 3),
                    SI_CMD(ScriptOpcode_CALL, SetNpcSpeed, 0, SI_FIXED(3.0)),
                    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x210009),
                    SI_CMD(ScriptOpcode_CALL, NpcMoveTo, 0, 465, 0, 0),
                    SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0, 0x210006),
                    SI_CMD(ScriptOpcode_CALL, PlayerFaceNpc, 0, 3),
                    SI_CMD(ScriptOpcode_CALL, SpeakToPlayer, 0, 0x21001A, 0x210006, 0, 0xB00AE),
                    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
                    SI_CMD(ScriptOpcode_SPAWN_THREAD),
                        SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, UseSettingsFrom, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, SetPanTarget, 0, 430, SI_VAR(1), SI_VAR(2)),
                        SI_CMD(ScriptOpcode_CALL, SetCamSpeed, 0, SI_FIXED(4.0)),
                        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 1),
                        SI_CMD(ScriptOpcode_CALL, WaitForCam, 0, SI_FIXED(1.0)),
                        SI_CMD(ScriptOpcode_CALL, PanToTarget, 0, 0, 0),
                    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
                    SI_CMD(ScriptOpcode_CALL, StartBossBattle, 4),
            SI_CMD(ScriptOpcode_END_MATCH),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_GOTO, 0),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 101),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 102),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 3),
        SI_CMD(ScriptOpcode_CASE_MULTI_OR_EQ, 103),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Defeat_80241334) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, 400, SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 275.0);
            SetCamPitch(0, 15.0, -7.5);
            SetCamSpeed(0, 90.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            PlayerFaceNpc(-1, 0);
            SetNpcAnimation(-1, 0x210011);
            SpeakToPlayer(-1, 0x210011, 0x210011, 0, 0xB00B5);
            SetNpcSpeed(-1, 6.0);
            SetNpcAnimation(-1, 0x210009);
            NpcMoveTo(-1, 564, 10, 0);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            sleep 60;
            SetNpcPos(-1, 564, 0, 10);
            NpcMoveTo(-1, 435, 10, 0);
            SpeakToPlayer(-1, 0x21001A, 0x210006, 0, 0xB00B6);
            NpcMoveTo(-1, 564, 10, 0);
            SetNpcAnimation(-1, 0x210003);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            spawn {
                ResetCam(0, 4);
            }
            spawn N(script_80240560);
            SI_AREA_VAR(0) = 0;
            SI_SAVE_VAR(0) = 0xFFFFFF8A;
            DisablePlayerInput(0);
        }
    }
});

NpcSettings N(npcSettings_802415E8) = {
    .unk_00 = { 0, 0x9D, 0, 0x1 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_8024088C),
    .onInteract = &N(script_80240FC4),
    .ai = &N(script_NpcAI_8024090C),
    .onHit = NULL,
    .aux = &N(script_802408FC),
    .onDefeat = &N(script_80240FD4),
    .flags = 0x105,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0,
    .unk_2A = 0,
};

Script N(script_Init_80241614) = SCRIPT({
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    EnableNpcShadow(-1, 0);
    BindNpcIdle(-1, N(script_Idle_80240FE4));
    BindNpcDefeat(-1, N(script_Defeat_80241334));
});

StaticNpc N(npcGroup_8024167C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240860),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00A40D00,
        .init = N(script_Init_80241614),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00210003, 0x00210007, 0x00210007, 0x00210007, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003, 0x00210003,
        },
    },
};

s8 N(npcGroup_8024186C)[] = {
    0x00, 0x00, 0x00, 0x01, 0x80, 0x24, 0x15, 0xE8, 0xC2, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x02, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

s8 pad_0019A6[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

NpcGroupList N(npcGroupList_80241A5C) = {
    NPC_GROUP(N(npcGroup_8024167C), 0x02020000),
    NPC_GROUP(N(npcGroup_8024186C), 0x00000000),
    {},
};

Script N(script_80241A80) = SCRIPT({
    SI_SAVE_FLAG(71) = 1;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(71) == 0) {
        MakeEntity(D_802EA10C, 0xFFFFFFB0, 0, 400, 0, 0x80000000);
        AssignScript(N(script_80241A80));
    }
    MakeEntity(D_802EA0C4, 0xFFFFFF1A, 60, 0xFFFFFF74, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 0xFFFFFE48, 60, 20, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 60, 0, 370, 0, 0x80000000);
    MakeEntity(D_802EA0C4, 85, 0, 395, 0, 0x80000000);
    MakeEntity(D_802EA0E8, 100, 0, 0xFFFFFFBA, 0, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(70));
    MakeEntity(D_802E9A18, 0, 60, 0, 0, 0x80000000);
});

s32 pad_001BE4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80241BF0)[] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000066,
    0x66666666, 0x66666600, 0x00000000, 0x00000000, 0x00003388, 0x99888888, 0x89999999, 0x99999988,
    0x88888888, 0x88830000, 0x0005A999, 0x99999999, 0x99999999, 0x99888888, 0x88787777, 0x77773000,
    0x005AAAAA, 0xAAA99999, 0x99999999, 0x99999877, 0x77777777, 0x77788300, 0x05ADFFFE, 0xEEDDDDDD,
    0xDBAAAAAA, 0xAAAA9977, 0x77888888, 0x88888800, 0x07AFFEEE, 0xEEEEEEEE, 0xEEEEEEEE, 0xFFFF9978,
    0x88888888, 0x88888800, 0x07AFEDCC, 0xDDDDDDDD, 0xEEEEEEEE, 0xEEEFD978, 0x88888888, 0x88888800,
    0x07AFDCCC, 0xCCCCCCCC, 0xCCCCCCDD, 0xDDEFF978, 0x88888888, 0x88888800, 0x07AFDCCC, 0xCCCCCCCC,
    0xCCCCCCCC, 0xCCDFE978, 0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCCED978,
    0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCCED978, 0x88888888, 0x88888800,
    0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCCED978, 0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC,
    0xCCCCCCCC, 0xCCDED978, 0x88888888, 0x88888800, 0x07AEDCCC, 0xCBBCCCCC, 0xCCCCCCCC, 0xCCDED978,
    0x88888888, 0x87888800, 0x07AEDCCC, 0xCA79BCCC, 0xCBAABCCC, 0xCCDED978, 0x88877888, 0x65888800,
    0x07AEDCCC, 0xCA56ACCC, 0xCB958BCC, 0xCCDED978, 0x88854888, 0x65888800, 0x07AEDCCC, 0xCA57ACCC,
    0xCB948BCC, 0xCCDED978, 0x88854888, 0x65888800, 0x07AEDCCC, 0xCA57ACCC, 0xCB948BCC, 0xCCDED978,
    0x88854888, 0x55888800, 0x07AEDCCC, 0xCA57ACCC, 0xCB948BCC, 0xCCDED978, 0x88854888, 0x55888800,
    0x07AEDCCC, 0xCA57ACCC, 0xCB948BCC, 0xCCDED978, 0x88854888, 0x66888800, 0x07AEDCCC, 0xCBA9ACCC,
    0xCC958BCC, 0xCCDED978, 0x88856888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC, 0xCCCAABCC, 0xCCDED978,
    0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDED978, 0x88888888, 0x88888800,
    0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDED978, 0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC,
    0xCCCCCCCC, 0xCCDED978, 0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDEA978,
    0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDEA978, 0x88888888, 0x88888800,
    0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDEA978, 0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC,
    0xCCCCCCCC, 0xCCDEA978, 0x88888888, 0x88888800, 0x07AEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDEA978,
    0x88888888, 0x88888800, 0x07BEDCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDEA978, 0x88888888, 0x88888300,
    0x008EBCCC, 0xCCCCCCCC, 0xCCCCCCCC, 0xCCDEA978, 0x88888888, 0x88883000, 0x0008BCCC, 0xCCBCCCCC,
    0xCCCCCCCC, 0xCCDEA978, 0x88888888, 0x88730000, 0x000089AA, 0xAAAAACCC, 0xBBBCCCCC, 0xCCDEA978,
    0x88888777, 0x55000000, 0x00000088, 0x88999AAA, 0xAAAAAACB, 0xBBBEB978, 0x88777322, 0x00000000,
    0x00000000, 0x00000888, 0x999999AA, 0xAAAAA877, 0x75510000, 0x00000000, 0x00000000, 0x00000000,
    0x00000288, 0x88999752, 0x10000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80242070)[] = {
    0x00000841, 0x08431083, 0x184128C3, 0x31434985, 0x5A078307, 0xA3CBB44B, 0xB44BBC8D, 0xC4CFC511,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80242090) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400D0_8CA9D0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400D0_8CA9D0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802423F0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_802400D0_8CA9D0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400D0_8CA9D0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400D0_8CA9D0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_802400D0_8CA9D0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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

s32 N(unk_802429F4)[] = {
    0x00000000,
};

Script N(script_802429F8) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80242A28) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_80242A58) = SCRIPT({
    SetPlayerAnimation(0x6000C);
    GetPlayerPos(SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SI_VAR(6) += 40;
    MakeItemEntity(4, SI_VAR(5), SI_VAR(6), SI_VAR(7), 1, 0);
    SI_VAR(12) = SI_VAR(0);
    SI_VAR(6) += 16;
    PlayEffect(27, 0, SI_VAR(5), SI_VAR(6), SI_VAR(7), 1.0, SI_VAR(8), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(51, 9, SI_VAR(5), SI_VAR(6), SI_VAR(7), 1.0, 100, 0, 0, 0, 0, 0, 0, 0);
    spawn N(script_802405B8);
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
    loop {
        sleep 1;
        if (SI_MAP_FLAG(18) == 1) {
            break;
        }
    }
    func_802D7B44(SI_VAR(8));
    RemoveItemEntity(SI_VAR(12));
    SetPlayerAnimation(0x10002);
});

Script N(script_80242CE4) = SCRIPT({
    AdjustCam(0, 8.0, 0, 300.0, 19.0, -9.0);
    SI_MAP_FLAG(18) = 0;
    spawn N(script_80242A58);
    func_80240434_8CAD34();
    sleep 30;
    func_802403E0_8CACE0();
    ShowMessageAtScreenPos(0x1D0164, 160, 40);
    SI_MAP_FLAG(18) = 1;
    DisablePartnerAI(0);
    sleep 10;
    SpeakToPlayer(0xFFFFFFFC, 0x9D0008, 0x9D0001, 0, 0xB00AA);
    SetNpcAnimation(0xFFFFFFFC, 0x9D0001);
    SI_SAVE_VAR(0) = 0xFFFFFF89;
    ClearPartnerMoveHistory(0xFFFFFFFC);
    EnablePartnerAI();
    spawn {
        ResetCam(0, 3);
    }
});

Script N(script_Bush7_Callback) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFF89) {
        return;
    }
    DisablePlayerInput(1);
    await N(script_80242CE4);
    DisablePlayerInput(0);
});

Script N(script_Bush8_Callback) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFF89) {
        return;
    }
    DisablePlayerInput(1);
    MakeLerp(0, 85, 20, 10);
0:
    UpdateLerp();
    RotateModel(48, SI_VAR(0), 1, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    await N(script_80242CE4);
    MakeLerp(85, 0, 20, 10);
10:
    UpdateLerp();
    RotateModel(48, SI_VAR(0), 1, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 10;
    }
    DisablePlayerInput(0);
});

ModelIdList N(treeModelList_Bush1_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x34 },
};

s32 N(treeDropList_Bush1)[] = {
    0x00000001, 0x00000157, 0x000000F8, 0x00000011, 0x00000061, 0x00000007, 0xF8405BBE, 0xFAA2B58A,
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { 3.48e-43f, 2.4e-44f, 1.36e-43f } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), N(treeDropList_Bush1), N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Bush2_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x36 },
};

s32 N(treeDropList_Bush2)[] = {
    0x00000001, 0x00000157, 0x00000063, 0x00000011, 0x000000ED, 0x00000006, 0xF8405BBF, 0xFAA2B58B,
};

TreeEffectVectorList N(treeEffectVectors_Bush2) = {
    .count = 0x1,
    .vectors = { { 1.4e-43f, 2.7e-44f, 3.45e-43f } },
};

s32 N(searchBushEvent_Bush2)[] = {
    N(treeModelList_Bush2_Bush), N(treeDropList_Bush2), N(treeEffectVectors_Bush2), 0x00000000,
};

ModelIdList N(treeModelList_Bush3_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x32 },
};

s32 N(treeDropList_Bush3)[] = {
    0x00000002, 0x00000157, 0x00000032, 0x00000012, 0xFFFFFF38, 0x00000007, 0xF8405BC0, 0xFAA2B58C,
    0x00000157, 0x00000032, 0x00000012, 0xFFFFFF38, 0x00000007, 0xF8405BC1, 0xFAA2B58D,
};

TreeEffectVectorList N(treeEffectVectors_Bush3) = {
    .count = 0x1,
    .vectors = { { 7e-44.0f, 2.5e-44f, nanf } },
};

s32 N(searchBushEvent_Bush3)[] = {
    N(treeModelList_Bush3_Bush), N(treeDropList_Bush3), N(treeEffectVectors_Bush3), 0x00000000,
};

ModelIdList N(treeModelList_Bush4_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x35 },
};

s32 N(treeDropList_Bush4)[] = {
    0x00000001, 0x00000157, 0xFFFFFFCF, 0x00000014, 0x00000092, 0x00000007, 0xF8405BC2, 0xFAA2B58E,
};

TreeEffectVectorList N(treeEffectVectors_Bush4) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 2.05e-43f } },
};

s32 N(searchBushEvent_Bush4)[] = {
    N(treeModelList_Bush4_Bush), N(treeDropList_Bush4), N(treeEffectVectors_Bush4), 0x00000000,
};

ModelIdList N(treeModelList_Bush5_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x33 },
};

s32 N(treeDropList_Bush5)[] = {
    0x00000001, 0x00000157, 0xFFFFFF6C, 0x00000010, 0xFFFFFF6A, 0x00000007, 0xF8405BC3, 0xFAA2B58F,
};

TreeEffectVectorList N(treeEffectVectors_Bush5) = {
    .count = 0x1,
    .vectors = { { nanf, 2.2e-44f, nanf } },
};

s32 N(searchBushEvent_Bush5)[] = {
    N(treeModelList_Bush5_Bush), N(treeDropList_Bush5), N(treeEffectVectors_Bush5), 0x00000000,
};

ModelIdList N(treeModelList_Bush8_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x30 },
};

TreeEffectVectorList N(treeEffectVectors_Bush8) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 1.35e-43f } },
};

s32 N(searchBushEvent_Bush7)[] = {
    N(treeModelList_Bush8_Bush), 0x00000000, N(treeEffectVectors_Bush8), N(script_Bush7_Callback),
};

s32 N(searchBushEvent_Bush8)[] = {
    N(treeModelList_Bush8_Bush), 0x00000000, N(treeEffectVectors_Bush8), N(script_Bush8_Callback),
};

ModelIdList N(treeModelList_Bush6_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x30 },
};

TreeEffectVectorList N(treeEffectVectors_Bush6) = {
    .count = 0x1,
    .vectors = { { nanf, 2.8e-44f, 1.35e-43f } },
};

s32 N(searchBushEvent_Bush6)[] = {
    N(treeModelList_Bush6_Bush), 0x00000000, N(treeEffectVectors_Bush6), 0x00000000,
};

ModelIdList N(treeModelList_Bush9_Bush) = {
    .count = 0x1,
    .modelIDs = { 0x37 },
};

TreeEffectVectorList N(treeEffectVectors_Bush9) = {
    .count = 0x1,
    .vectors = { { nanf, 2.7e-44f, 4.15e-43f } },
};

s32 N(searchBushEvent_Bush9)[] = {
    N(treeModelList_Bush9_Bush), 0x00000000, N(treeEffectVectors_Bush9), 0x00000000,
};

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x14 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x13 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x00000157, 0xFFFFFED2, 0x00000080, 0x00000002, 0x0000000F, 0xF8405BBC, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nanf, 2.1e-43f, 2.8e-44f }, { nanf, 2.1e-43f, 3.1e-44f } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_8024324C) =  { -352.0f, 0.0f, 10.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x17 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x16 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x00000157, 0xFFFFFFA0, 0x00000084, 0xFFFFFF01, 0x00000007, 0xF8405BBD, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { nanf, 2.1e-43f, nanf }, { nanf, 2.1e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_802432BC) =  { -92.0f, 0.0f, -295.0f, 0.0f };

Script N(script_Tree3_Callback) = SCRIPT({
    if (SI_SAVE_FLAG(30) == 1) {
        return;
    }
    if (SI_AREA_FLAG(9) == 1) {
        return;
    }
    sleep 15;
    MakeItemEntity(86, 250, 132, 0xFFFFFF9C, 13, SI_SAVE_FLAG(30));
    SI_AREA_FLAG(9) = 1;
    spawn {
    10:
        if (SI_SAVE_FLAG(30) == 0) {
            sleep 1;
            goto 10;
        }
        GetCurrentPartnerID(SI_VAR(0));
        if (SI_VAR(0) == 5) {
            DisablePlayerInput(1);
            sleep 5;
            DisablePartnerAI(0);
            SpeakToPlayer(0xFFFFFFFC, 0x9D0008, 0x9D0001, 0, 0xB00AB);
            SetNpcAnimation(0xFFFFFFFC, 0x9D0001);
            EnablePartnerAI();
            DisablePlayerInput(0);
        }
    }
});

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x1A },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x19 },
};

TreeEffectVectorList N(treeEffectVectors_Tree3) = {
    .count = 0x2,
    .vectors = { { 2.66e-43f, 2.1e-43f, nanf }, { 4.13e-43f, 2.1e-43f, nanf } },
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree3),
    .callback = &N(script_Tree3_Callback),
};

Vec4f N(triggerCoord_8024348C) =  { 248.0f, 0.0f, -122.0f, 0.0f };

Script N(script_8024349C) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 45;
    SI_VAR(0) = N(searchBushEvent_Bush2);
    bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 53;
    SI_VAR(0) = N(searchBushEvent_Bush3);
    bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 47;
    SI_VAR(0) = N(searchBushEvent_Bush4);
    bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 51;
    SI_VAR(0) = N(searchBushEvent_Bush5);
    bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 44;
    if (SI_SAVE_VAR(0) >= 0xFFFFFF89) {
        SI_VAR(0) = N(searchBushEvent_Bush6);
        bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 48;
        SI_VAR(0) = N(searchBushEvent_Bush6);
        bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 49;
    } else {
        SI_VAR(0) = N(searchBushEvent_Bush7);
        bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 48;
        SI_VAR(0) = N(searchBushEvent_Bush8);
        bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 49;
    }
    SI_VAR(0) = N(searchBushEvent_Bush9);
    bind N(script_SearchBush_80242090) to TriggerFlag_WALL_INTERACT 52;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802423F0) to TriggerFlag_WALL_HAMMER 9;
    bind N(script_ShakeTree_802423F0) to TriggerFlag_BOMB N(triggerCoord_8024324C);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_802423F0) to TriggerFlag_WALL_HAMMER 22;
    bind N(script_ShakeTree_802423F0) to TriggerFlag_BOMB N(triggerCoord_802432BC);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_802423F0) to TriggerFlag_WALL_HAMMER 32;
    bind N(script_ShakeTree_802423F0) to TriggerFlag_BOMB N(triggerCoord_8024348C);
});

s32 pad_00375C[] = {
    0x00000000,
};

// rodata: D_80243760_8CE060

s32 pad_003768[] = {
    0x00000000, 0x00000000,
};
