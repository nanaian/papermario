#include "jan_01.h"

s32 pad_00118C[1];
s32 pad_0013CC[1];
Script N(script_80241430);
s32 pad_00146C[1];
Script N(script_UpdateTexturePan_80241470);
Script N(script_ExitWalk_8024150C);
Script N(script_ExitWalk_80241568);
Script N(script_802415C4);
Script N(main);
s32 pad_00197C[1];
Script N(script_NpcAI_802419B0);
Script N(script_80241A70);
Script N(script_80241AB4);
Script N(script_Idle_80241BCC);
Script N(script_Hit_80242114);
Script N(script_Init_80242258);
Script N(script_Idle_802422D8);
Script N(script_Defeat_80242634);
Script N(script_Init_80242938);
StaticNpc N(npcGroup_802429C8)[1];
StaticNpc N(npcGroup_80242BB8)[1];
Script N(script_Init_80242DA8);
StaticNpc N(npcGroup_80242DE0)[1];
StaticNpc N(npcGroup_80242FD0)[1];
StaticNpc N(npcGroup_802431C0)[1];
NpcGroupList N(npcGroupList_802433B0);
s32 pad_0033F8[2];
Script N(script_MakeEntities);
s32 pad_003558[2];
Script N(script_SearchBush_80243560);
Script N(script_ShakeTree_802438C0);
s32 N(treeDropList_Tree2)[8];
s32 N(treeDropList_Tree3)[8];
s32 N(treeDropList_Tree4)[8];
s32 N(treeDropList_Tree5)[8];
s32 N(treeDropList_Tree6)[8];
s32 N(unk_802440B0)[3];
s32 N(unk_802440BC)[2];
s32 N(unk_802440C4)[8];
s32 N(unk_802440E4)[8];
s32 N(unk_80244104)[5];
s32 N(unk_80244118)[5];
Script N(script_8024413C);
s32 pad_0043D4[3];
const char D_802443E0_B2C410[8]; // "jan_00"
const char D_802443E8_B2C418[8]; // "jan_02"
s32 pad_004434[3];

// text: func_80240000_B28030

// text: func_80240124_B28154

// text: func_8024030C_B2833C

// text: func_80240340_B28370

// text: func_80240570_B285A0

// text: N(UnkNpcAIFunc1)

// text: func_80240968_B28998

// text: func_80240B0C_B28B3C

// text: func_80240BEC_B28C1C

// text: N(UnkDurationCheck)

// text: func_80240F30_B28F60

// text: func_80241154_B29184

// text: func_80241170_B291A0

s32 pad_00118C[] = {
    0x00000000,
};

// text: func_80241190_B291C0

// text: func_80241200_B29230

s32 pad_0013CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -663.0f, -14.0f, 53.0f, 90.0f },
    { 663.0f, -16.0f, 40.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900EC,
};

Script N(script_80241430) = SCRIPT({
    SetMusicTrack(0, 38, 0, 8);
    ClearAmbientSounds(250);
});

s32 pad_00146C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80241470) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_B28030();
                    return;
                }
            }
        }
    }
    func_80240124_B28154();
});

Script N(script_ExitWalk_8024150C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_802443E0_B2C410, 1);
    sleep 100;
});

Script N(script_ExitWalk_80241568) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_802443E8_B2C418, 0);
    sleep 100;
});

Script N(script_802415C4) = SCRIPT({
    bind N(script_ExitWalk_8024150C) to 0x80000 0;
    bind N(script_ExitWalk_80241568) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_802433B0));
    await N(script_MakeEntities);
    spawn N(script_8024413C);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_802415C4);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80241430);
    PlaySound(0x80000017);
    EnableTexPanning(13, 1);
    EnableTexPanning(15, 1);
    EnableTexPanning(14, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFF9C;
        SI_VAR(2) = 350;
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
        spawn N(script_UpdateTexturePan_80241470);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 100;
        SI_VAR(2) = 200;
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
        spawn N(script_UpdateTexturePan_80241470);
    }
    ModifyColliderFlags(3, 29, 1);
    ModifyColliderFlags(3, 30, 1);
    func_8024030C_B2833C();
});

s32 pad_00197C[] = {
    0x00000000,
};

NpcAISettings N(aISettings_80241980) = {
    .moveSpeed = 1.5f,
    .moveTime = 0x1E,
    .waitTime = 0xA,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x3,
    .chaseSpeed = 5.0f,
    .unk_1C = 0x46,
    .unk_20 = 0x5,
    .chaseRadius = 200.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_802419B0) = SCRIPT({
    SetNpcFlagBits(-1, 64, 1);
    func_80240F30_B28F60(N(aISettings_80241980), 2);
});

NpcSettings N(npcSettings_802419EC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_802419B0),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x10,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241A18) = {
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

NpcSettings N(npcSettings_80241A44) = {
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

Script N(script_80241A70) = SCRIPT({
    loop {
        PlayerFaceNpc(-1, 0);
        sleep 1;
    }
});

Script N(script_80241AB4) = SCRIPT({
    SI_VAR(9) = spawn N(script_80241A70);
    SetNpcFlagBits(-1, 320, 1);
    SetNpcAnimation(-1, 0xB60006);
    SetNpcSpeed(-1, 4.5);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(0) += 150;
    NpcMoveTo(-1, SI_VAR(0), 60, 0);
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    SetNpcFlagBits(-1, 512, 0);
    kill SI_VAR(9);
    func_80241170_B291A0();
    ResetCam(0, 5.0);
    SetSelfVar(0, 3);
});

Script N(script_Idle_80241BCC) = SCRIPT({
    SetNpcAnimation(-1, 0xB6000B);
    SetNpcFlagBits(-1, 512, 1);
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) > 0xFFFFFDA8) {
            break;
        }
    }
    DisablePlayerInput(1);
    ShowMessageAtScreenPos(0x10000D, 320, 60);
    PlaySoundAtPlayer(610, 0);
    ShowEmote(0, 0, 0, 25, 0, 0, 0, 0, 0);
    PlaySoundAtNpc(0xFFFFFFFC, 610, 0);
    ShowEmote(0xFFFFFFFC, 0, 0, 25, 1, 0, 0, 0, 0);
    sleep 25;
    DisablePlayerInput(0);
0:
    GetSelfVar(0, SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            if (SI_VAR(0) > 430) {
                GetCurrentPartner(SI_VAR(0));
                if (SI_VAR(0) != 0) {
                    func_802D2B6C();
                }
                DisablePlayerInput(1);
                RemoveNpc(1);
                ShowMessageAtScreenPos(0x100010, 0, 60);
                InterpPlayerYaw(270, 4);
                SetNpcAnimation(-1, 0xB60007);
                NpcMoveTo(-1, 250, 90, 5);
                func_802CF56C(2);
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(3) = SI_VAR(0);
                SI_VAR(3) += 0xFFFFFFCE;
                SetNpcSpeed(-1, 5.0);
                NpcMoveTo(-1, SI_VAR(3), SI_VAR(2), 0);
                SI_VAR(0) += SI_VAR(3);
                SI_VAR(0) /= 2;
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetCamDistance(0, 300);
                SetCamPitch(0, 17.0, -7.0);
                SetCamSpeed(0, 5.0);
                PanToTarget(0, 0, 1);
                func_80241154_B29184();
                WaitForCam(0, 1.0);
                sleep 10;
                SpeakToPlayer(-1, 0xB60008, 0xB60001, 0, 0x100011);
                SI_SAVE_VAR(0) = 12;
                await N(script_80241AB4);
                DisablePlayerInput(0);
            }
        }
        == 1 {
            group 0;
            func_802D5830(1);
            func_802D2C14(1);
            sleep 10;
            SpeakToPlayer(-1, 0xB60009, 0xB60001, 0, 0x10000F);
            SI_SAVE_FLAG(1220) = 1;
            SetSelfVar(0, 2);
            SI_SAVE_VAR(0) = 12;
            await N(script_80241AB4);
            func_802D2C14(0);
            func_802D5830(0);
            group 11;
            DisablePlayerInput(0);
        }
    }
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) != 3) {
        sleep 1;
        goto 0;
    }
});

Script N(script_Hit_80242114) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 4 {
            SI_VAR(1) = 1;
        }
        == 2 {
            SI_VAR(1) = 1;
        }
        == 6 {
            SI_VAR(1) = 1;
        }
        else {
            SI_VAR(1) = 0;
        }
    }
    if (SI_VAR(1) != 0) {
        DisablePlayerInput(1);
        sleep 5;
        SI_AREA_FLAG(9) = 1;
        sleep 10;
        NpcFacePlayer(-1, 0);
        SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x10000E);
        SI_AREA_FLAG(9) = 0;
        DisablePlayerInput(0);
    }
});

Script N(script_Init_80242258) = SCRIPT({
    if (SI_SAVE_VAR(0) < 12) {
        SetNpcFlagBits(-1, 256, 0);
        BindNpcIdle(-1, N(script_Idle_80241BCC));
        BindNpcHit(-1, N(script_Hit_80242114));
    } else {
        RemoveNpc(-1);
    }
});

Script N(script_Idle_802422D8) = SCRIPT({
    parallel {
        GetNpcPos(0, SI_VAR(3), SI_VAR(1), SI_VAR(2));
        SI_VAR(4) = SI_VAR(3);
        SI_VAR(3) += 0xFFFFFF38;
        SI_VAR(4) += 200;
        loop {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            match SI_VAR(0) {
            SI_VAR(3)..SI_VAR(4)
                SetSelfEnemyFlagBits(0x1000000, 0);
                SetSelfEnemyFlagBits(0x10000000, 0);
                else {
                    SetSelfEnemyFlagBits(0x1000000, 1);
                    SetSelfEnemyFlagBits(0x10000000, 1);
                }
            }
            sleep 1;
        }
    }
    SI_AREA_FLAG(9) = 0;
    GetNpcPos(0, SI_VAR(7), SI_VAR(8), SI_VAR(9));
    SI_VAR(8) += 20;
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(2) += 5;
    SetNpcJumpscale(-1, 4.0);
    SI_VAR(4) = 40;
    SI_VAR(5) = 90;
    SI_VAR(6) = 45;
    loop {
        SI_VAR(4) *= -1;
        SI_VAR(5) *= -1;
        SI_VAR(6) *= -1;
        SI_VAR(0) += SI_VAR(4);
        NpcJump0(-1, SI_VAR(0), 18, SI_VAR(2), 15);
        PlaySoundAtNpc(0, 225, 0);
        if (SI_AREA_FLAG(9) != 1) {
            parallel {
                InterpNpcYaw(0, SI_VAR(5), 2);
                PlayEffect(24, 3, SI_VAR(7), SI_VAR(8), SI_VAR(9), 0, -1, 0, 3, 0, 0, 0, 0, 0);
            }
        }
        SI_VAR(0) += SI_VAR(4);
        SetNpcJumpscale(-1, 1.0);
        NpcJump0(-1, SI_VAR(0), 0xFFFFFFF4, SI_VAR(2), 15);
    1:
        sleep 1;
        if (SI_AREA_FLAG(9) == 1) {
            goto 1;
        }
    }
});

Script N(script_Defeat_80242634) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            DisablePlayerInput(1);
            SetNpcAnimation(0, 0xB60001);
            GetCurrentPartner(SI_VAR(0));
            if (SI_VAR(0) != 0) {
                func_802D2B6C();
            }
            SetNpcFlagBits(0xFFFFFFFC, 256, 1);
            spawn {
                sleep 30;
                GetNpcPos(0, SI_VAR(3), SI_VAR(1), SI_VAR(2));
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(4) = SI_VAR(0);
                if (SI_VAR(3) < SI_VAR(0)) {
                    InterpPlayerYaw(270, 0);
                    SI_VAR(4) += 0xFFFFFFE2;
                } else {
                    InterpPlayerYaw(90, 0);
                    SI_VAR(4) += 30;
                }
                SI_VAR(0) += SI_VAR(4);
                SI_VAR(0) /= 2;
                UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetCamDistance(0, 300);
                SetCamSpeed(0, 3.0);
                func_80241154_B29184();
                PanToTarget(0, 0, 1);
                SetNpcFlagBits(0, 320, 1);
                SetNpcAnimation(0, 0xB60006);
                SetNpcSpeed(0, 3.0);
                if (SI_VAR(2) < 0xFFFFFFD3) {
                    SI_VAR(2) = 0xFFFFFFD3;
                }
                NpcMoveTo(0, SI_VAR(4), SI_VAR(2), 0);
                SetNpcAnimation(0, 0xB60001);
                NpcFacePlayer(0, 0);
                SetNpcVar(0, 0, 1);
            }
            DoNpcDefeat();
        }
        == 1 {}
        == 2 {
        }
    }
});

Script N(script_Init_80242938) = SCRIPT({
    if (SI_SAVE_VAR(0) < 12) {
        SetSelfVar(0, 0);
        SetNpcAnimation(-1, 0x2B0304);
        BindNpcIdle(-1, N(script_Idle_802422D8));
        BindNpcDefeat(-1, N(script_Defeat_80242634));
    } else {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_802429C8)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241A44),
        .pos = { -70.0, -9.0, 90.0 },
        .flags = 0x21300500,
        .init = N(script_Init_80242258),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_80242BB8)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241A18),
        .pos = { -30.0, 0.0, 90.0 },
        .flags = 0x00E40500,
        .init = N(script_Init_80242938),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
    },
};

Script N(script_Init_80242DA8) = SCRIPT({
    if (SI_SAVE_VAR(0) < 12) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80242DE0)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802419EC),
        .pos = { -350.0, 3.0, 40.0 },
        .flags = 0x00400400,
        .init = N(script_Init_80242DA8),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .movement = { 0xFFFFFEA2, 0x00000003, 0x00000028, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFEA2, 0x00000003, 0x00000028, 0x000000C8 },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
    },
};

StaticNpc N(npcGroup_80242FD0)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802419EC),
        .pos = { 0.0, -10.0, 110.0 },
        .flags = 0x00400400,
        .init = N(script_Init_80242DA8),
        .yaw = 90,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .movement = { 0x00000000, 0xFFFFFFF6, 0x0000006E, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x00000000, 0xFFFFFFF6, 0x0000006E, 0x000000C8 },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
    },
};

StaticNpc N(npcGroup_802431C0)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802419EC),
        .pos = { 350.0, 3.0, 40.0 },
        .flags = 0x00400400,
        .init = N(script_Init_80242DA8),
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 10,
        .itemDrops = { { ItemId_DIZZY_DIAL, 5 }, { ItemId_VOLT_SHROOM, 5 } },
        .movement = { 0x0000015E, 0x00000003, 0x00000028, 0x00000032, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000015E, 0x00000003, 0x0000004B, 0x000000C8, 0x0000007D, 0x00000001 },
        .animations = {
            0x002B0302, 0x002B0302, 0x002B0303, 0x002B0303, 0x002B0301, 0x002B0301, 0x002B0308, 0x002B0308, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303, 0x002B0303,
        },
    },
};

NpcGroupList N(npcGroupList_802433B0) = {
    NPC_GROUP(N(npcGroup_802429C8), 0x00000000),
    NPC_GROUP(N(npcGroup_80242BB8), 0x140A0001),
    NPC_GROUP(N(npcGroup_80242DE0), 0x140A0001),
    NPC_GROUP(N(npcGroup_80242FD0), 0x140B0001),
    NPC_GROUP(N(npcGroup_802431C0), 0x140A0001),
    {},
};

s32 pad_0033F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeItemEntity(65, 0xFFFFFF92, 90, 0xFFFFFF1A, 17, SI_SAVE_FLAG(1222));
    MakeEntity(D_802BCBD8, 0xFFFFFE89, 0xFFFFFFFD, 0xFFFFFFB5, 0, 0x80000000);
    MakeEntity(D_802EA588, 0xFFFFFEB1, 57, 0xFFFFFFC9, 0, 151, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1246));
    MakeEntity(D_802BCBD8, 180, 0xFFFFFFFD, 0xFFFFFF8D, 0, 0x80000000);
    MakeEntity(D_802EA588, 140, 57, 0xFFFFFFAB, 0, 150, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1247));
    MakeItemEntity(343, 340, 100, 0xFFFFFFA6, 17, SI_SAVE_FLAG(1221));
    MakeItemEntity(343, 340, 125, 0xFFFFFFA6, 17, SI_SAVE_FLAG(1277));
    MakeEntity(D_802BC7F4, 340, 0, 0xFFFFFFA6, 0, 0x80000000);
});

s32 pad_003558[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80243560) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241200_B29230, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241200_B29230, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_802438C0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80241200_B29230, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241200_B29230, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241200_B29230, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80241200_B29230, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .count = 0x1,
    .modelIDs = { 0x5C },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x5B },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80243EE8) =  { 160.0f, 0.0f, -287.0f, 0.0f };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x23, 0x24 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x22 },
};

s32 N(treeDropList_Tree2)[] = {
    0x00000001, 0x000000AC, 0xFFFFFD96, 0x0000005F, 0xFFFFFFB5, 0x0000000F, 0x00000000, 0xF971888E,
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = &N(treeDropList_Tree2),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80243F40) =  { -628.0f, 0.0f, -95.0f, 0.0f };

ModelIdList N(treeModelList_Tree3_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x27, 0x28 },
};

ModelIdList N(treeModelList_Tree3_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x26 },
};

s32 N(treeDropList_Tree3)[] = {
    0x00000001, 0x000000AC, 0xFFFFFE6F, 0x00000069, 0xFFFFFF8D, 0x0000000F, 0x00000000, 0xF971888F,
};

ShakeTree N(shakeTreeEvent_Tree3) = {
    .leaves = &N(treeModelList_Tree3_Leaves),
    .trunk = &N(treeModelList_Tree3_Trunk),
    .drops = &N(treeDropList_Tree3),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80243F98) =  { -391.0f, 0.0f, -135.0f, 0.0f };

ModelIdList N(treeModelList_Tree4_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x2B, 0x2C },
};

ModelIdList N(treeModelList_Tree4_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2A },
};

s32 N(treeDropList_Tree4)[] = {
    0x00000001, 0x000000AC, 0xFFFFFEA1, 0x0000004B, 0xFFFFFFA1, 0x0000000F, 0x00000000, 0xF9718890,
};

ShakeTree N(shakeTreeEvent_Tree4) = {
    .leaves = &N(treeModelList_Tree4_Leaves),
    .trunk = &N(treeModelList_Tree4_Trunk),
    .drops = &N(treeDropList_Tree4),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80243FF0) =  { -341.0f, 0.0f, -115.0f, 0.0f };

ModelIdList N(treeModelList_Tree5_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x2F, 0x30 },
};

ModelIdList N(treeModelList_Tree5_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x2E },
};

s32 N(treeDropList_Tree5)[] = {
    0x00000001, 0x000000AC, 0x0000003A, 0x0000005F, 0xFFFFFF79, 0x0000000F, 0x00000000, 0xF9718891,
};

ShakeTree N(shakeTreeEvent_Tree5) = {
    .leaves = &N(treeModelList_Tree5_Leaves),
    .trunk = &N(treeModelList_Tree5_Trunk),
    .drops = &N(treeDropList_Tree5),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_80244048) =  { 68.0f, 0.0f, -155.0f, 0.0f };

ModelIdList N(treeModelList_Tree6_Leaves) = {
    .count = 0x2,
    .modelIDs = { 0x3B, 0x3C },
};

ModelIdList N(treeModelList_Tree6_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x3A },
};

s32 N(treeDropList_Tree6)[] = {
    0x00000001, 0x000000AC, 0x00000105, 0x0000004B, 0xFFFFFF8D, 0x0000000F, 0x00000000, 0xF9718892,
};

ShakeTree N(shakeTreeEvent_Tree6) = {
    .leaves = &N(treeModelList_Tree6_Leaves),
    .trunk = &N(treeModelList_Tree6_Trunk),
    .drops = &N(treeDropList_Tree6),
    .effectVectors = NULL,
    .callback = NULL,
};

Vec4f N(triggerCoord_802440A0) =  { 251.0f, 0.0f, -135.0f, 0.0f };

s32 N(unk_802440B0)[] = {
    0x00000002, 0x00000047, 0x00000048,
};

s32 N(unk_802440BC)[] = {
    0x00000001, 0x00000046,
};

s32 N(unk_802440C4)[] = {
    0x00000001, 0x0000015C, 0x000001B9, 0x0000004B, 0xFFFFFF79, 0x0000000D, 0xF8406064, 0xFAA2B58A,
};

s32 N(unk_802440E4)[] = {
    0x00000001, 0x000000AC, 0x000001B9, 0x0000004B, 0xFFFFFF79, 0x0000000F, 0x00000000, 0xF9718893,
};

s32 N(unk_80244104)[] = {
    N(unk_802440B0), N(unk_802440BC), N(unk_802440C4), 0x00000000, 0x00000000,
};

s32 N(unk_80244118)[] = {
    N(unk_802440B0), N(unk_802440BC), N(unk_802440E4), 0x00000000, 0x00000000,
};

Vec4f N(triggerCoord_8024412C) =  { 431.0f, 0.0f, -155.0f, 0.0f };

Script N(script_8024413C) = SCRIPT({
    SI_AREA_FLAG(14) = 0;
    SI_AREA_FLAG(15) = 0;
    SI_AREA_FLAG(16) = 0;
    SI_AREA_FLAG(17) = 0;
    SI_AREA_FLAG(18) = 0;
    SI_AREA_FLAG(19) = 0;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_802438C0) to TriggerFlag_WALL_HAMMER 18;
    bind N(script_ShakeTree_802438C0) to TriggerFlag_BOMB N(triggerCoord_80243EE8);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_802438C0) to TriggerFlag_WALL_HAMMER 14;
    bind N(script_ShakeTree_802438C0) to TriggerFlag_BOMB N(triggerCoord_80243F40);
    SI_VAR(0) = N(shakeTreeEvent_Tree3);
    bind N(script_ShakeTree_802438C0) to TriggerFlag_WALL_HAMMER 15;
    bind N(script_ShakeTree_802438C0) to TriggerFlag_BOMB N(triggerCoord_80243F98);
    SI_VAR(0) = N(shakeTreeEvent_Tree4);
    bind N(script_ShakeTree_802438C0) to TriggerFlag_WALL_HAMMER 16;
    bind N(script_ShakeTree_802438C0) to TriggerFlag_BOMB N(triggerCoord_80243FF0);
    SI_VAR(0) = N(shakeTreeEvent_Tree5);
    bind N(script_ShakeTree_802438C0) to TriggerFlag_WALL_HAMMER 17;
    bind N(script_ShakeTree_802438C0) to TriggerFlag_BOMB N(triggerCoord_80244048);
    SI_VAR(0) = N(shakeTreeEvent_Tree6);
    bind N(script_ShakeTree_802438C0) to TriggerFlag_WALL_HAMMER 19;
    bind N(script_ShakeTree_802438C0) to TriggerFlag_BOMB N(triggerCoord_802440A0);
    if (SI_SAVE_FLAG(1252) == 0) {
        SI_VAR(0) = N(unk_80244104);
    } else {
        SI_VAR(0) = N(unk_80244118);
    }
    bind N(script_ShakeTree_802438C0) to TriggerFlag_WALL_HAMMER 20;
    bind N(script_ShakeTree_802438C0) to TriggerFlag_BOMB N(triggerCoord_8024412C);
});

s32 pad_0043D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802443E0_B2C410

// rodata: D_802443E8_B2C418

// rodata: D_802443F0_B2C420

// rodata: jtbl_802443F8_B2C428

s32 pad_004434[] = {
    0x00000000, 0x00000000, 0x00000000,
};
