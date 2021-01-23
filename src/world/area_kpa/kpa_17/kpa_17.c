#include "kpa_17.h"

Script N(script_80240060);
s32 pad_0000D8[2];
Script N(script_MakeEntities);
s32 pad_0001AC[1];
Script N(script_ExitWalk_802401B0);
Script N(script_80240240);
Script N(script_EnterWalk_8024026C);
Script N(main);
s32 pad_000464[3];
s32 unk_missing_8024049C[11];
Script N(script_802404C8);
Script N(script_80240854);
Script N(script_Interact_80240978);
Script N(script_Interact_80240A60);
Script N(script_Interact_80240B48);
Script N(script_Interact_80240C30);
Script N(script_Init_80240D54);
Script N(script_Init_80240DAC);
Script N(script_Init_80240E04);
Script N(script_Init_80240E5C);
StaticNpc N(npcGroup_80240EB4)[4];
NpcGroupList N(npcGroupList_80241674);
s32 pad_00168C[1];
const char D_80241690_A5E0B0[8]; // "kpa_10"
const char D_80241698_A5E0B8[8]; // "kpa_11"

EntryList N(entryList) = {
    { 1042.0f, 250.0f, -496.0f, 90.0f },
    { 1168.0f, 30.0f, -560.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19015F,
};

Script N(script_80240060) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    ClearAmbientSounds(250);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(5);
    }
});

s32 pad_0000D8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA7E0, 1000, 90, 0xFFFFFDC1, 0, 0x80000000);
    MakeEntity(0x802EAED4, 820, 60, 0xFFFFFDCB, 0, -1, 0x80000000);
    MakeEntity(0x802EAED4, 820, 30, 0xFFFFFDCB, 0, 137, 0x80000000);
    AssignCrateFlag(SI_SAVE_FLAG(1559));
    MakeEntity(0x802EAED4, 855, 30, 0xFFFFFDCB, 0, 149, 0x80000000);
    AssignCrateFlag(SI_SAVE_FLAG(1560));
});

s32 pad_0001AC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802401B0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    if (SI_SAVE_FLAG(1556) == 0) {
        GotoMap(D_80241698_A5E0B8, 2);
    } else {
        GotoMap(D_80241690_A5E0B0, 2);
    }
    sleep 100;
});

Script N(script_80240240) = SCRIPT({
    bind N(script_ExitWalk_802401B0) to 0x80000 14;
});

Script N(script_EnterWalk_8024026C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        spawn N(script_80240240);
        spawn N(script_802404C8);
    } else {
        SI_VAR(0) = N(script_80240240);
        spawn EnterWalk;
    }
});

Vec4f N(triggerCoord_802402E0) =  { 1186.0f, 30.0f, -562.0f, 0.0f };

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SI_AREA_VAR(1) = 0;
    SI_AREA_VAR(2) = 0;
    SI_AREA_VAR(3) = 0;
    SI_AREA_VAR(4) = 0;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_80241674));
    await N(script_MakeEntities);
    if (SI_SAVE_FLAG(1558) == 0) {
        bind N(script_80240854) to TriggerFlag_BOMB N(triggerCoord_802402E0);
    } else {
        SetGroupEnabled(8, 0);
        ModifyColliderFlags(0, 16, 0x7FFFFE00);
    }
    spawn N(script_80240060);
    spawn N(script_EnterWalk_8024026C);
});

s32 pad_000464[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240470) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
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

s32 unk_missing_8024049C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

Script N(script_802404C8) = SCRIPT({
    UseSettingsFrom(0, 1042, 30, 0xFFFFFE10);
    SetPanTarget(0, 1042, 30, 0xFFFFFE10);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    InterpPlayerYaw(270, 0);
    sleep 60;
    PartnerIsFlying(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        SetNpcFlagBits(0xFFFFFFFC, 512, 1);
    } else {
        0x802CF56C(1);
    }
    PlaySoundAtPlayer(353, 0);
    SetPlayerAnimation(0x80018);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop {
        SI_VAR(1) -= 16;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
        if (SI_VAR(1) <= 30) {
            SetPlayerPos(SI_VAR(0), 30, SI_VAR(2));
            PlaySoundAtPlayer(1019, 0);
            break;
        }
    }
    SetPlayerAnimation(0x80018);
    spawn {
        ShakeCam(0, 0, 20, 0.6005859375);
    }
    SetPlayerJumpscale(1.0);
    PlayerJump1(1030, 30, 0xFFFFFE10, 10);
    SetPlayerAnimation(0x10002);
    sleep 1;
    DisablePlayerPhysics(0);
    sleep 1;
    InterpPlayerYaw(90, 0);
    sleep 5;
    DisablePlayerPhysics(1);
    sleep 1;
    SetPlayerAnimation(0x1002A);
    sleep 1;
    ShowMessageAtScreenPos(0x130007, 1000, 0);
    SetPlayerAnimation(0x10002);
    sleep 10;
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
    ClearPartnerMoveHistory(0xFFFFFFFC);
    0x802CF56C(0);
});

Script N(script_80240854) = SCRIPT({
    PlayEffect(66, 0, 8, 8, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(8, 0);
    ModifyColliderFlags(0, 16, 0x7FFFFE00);
    SI_SAVE_FLAG(1558) = 1;
    0x802D2508();
    DisablePlayerInput(1);
    sleep 80;
    DisablePartnerAI(0);
    sleep 5;
    SpeakToPlayer(0xFFFFFFFC, 0x3000E, 0x30003, 0, 0x130016);
    EnablePartnerAI();
    sleep 10;
    DisablePlayerInput(0);
    unbind;
});

Script N(script_Interact_80240978) = SCRIPT({
    match SI_SAVE_FLAG(1558) {
        == 0 {
            match SI_AREA_VAR(1) {
                == 0 {
                    SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x130009);
                    SI_AREA_VAR(1) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x13000A);
                    SI_AREA_VAR(1) = 0;
                }
            }
        }
        == 1 {
            SpeakToPlayer(-1, 0x830004, 0x830001, 0, 0x13000B);
        }
    }
});

Script N(script_Interact_80240A60) = SCRIPT({
    match SI_SAVE_FLAG(1558) {
        == 0 {
            match SI_AREA_VAR(2) {
                == 0 {
                    SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x13000C);
                    SI_AREA_VAR(2) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x13000D);
                    SI_AREA_VAR(2) = 0;
                }
            }
        }
        == 1 {
            SpeakToPlayer(-1, 0x830204, 0x830201, 0, 0x13000E);
        }
    }
});

Script N(script_Interact_80240B48) = SCRIPT({
    match SI_SAVE_FLAG(1558) {
        == 0 {
            match SI_AREA_VAR(3) {
                == 0 {
                    SpeakToPlayer(-1, 0x830304, 0x830301, 0, 0x13000F);
                    SI_AREA_VAR(3) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x830304, 0x830301, 0, 0x130010);
                    SI_AREA_VAR(3) = 0;
                }
            }
        }
        == 1 {
            SpeakToPlayer(-1, 0x830304, 0x830301, 0, 0x130011);
        }
    }
});

Script N(script_Interact_80240C30) = SCRIPT({
    match SI_SAVE_FLAG(1558) {
        == 0 {
            match SI_AREA_VAR(4) {
                == 0 {
                    SpeakToPlayer(-1, 0x890004, 0x890001, 0, 0x130012);
                    SI_AREA_VAR(4) = 1;
                }
                == 1 {
                    SpeakToPlayer(-1, 0x890004, 0x890001, 0, 0x130013);
                    SI_AREA_VAR(4) = 2;
                }
                == 2 {
                    SpeakToPlayer(-1, 0x890004, 0x890001, 0, 0x130014);
                    SI_AREA_VAR(4) = 1;
                }
            }
        }
        == 1 {
            SpeakToPlayer(-1, 0x890004, 0x890001, 0, 0x130015);
        }
    }
});

Script N(script_Init_80240D54) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80240978));
    SetNpcPos(-1, 813, 30, 0xFFFFFE76);
    InterpNpcYaw(-1, 270, 0);
});

Script N(script_Init_80240DAC) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80240A60));
    SetNpcPos(-1, 870, 30, 0xFFFFFE2F);
    InterpNpcYaw(-1, 90, 0);
});

Script N(script_Init_80240E04) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80240B48));
    SetNpcPos(-1, 930, 30, 0xFFFFFE70);
    InterpNpcYaw(-1, 90, 0);
});

Script N(script_Init_80240E5C) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80240C30));
    SetNpcPos(-1, 1100, 30, 0xFFFFFE3E);
    InterpNpcYaw(-1, 270, 0);
});

StaticNpc N(npcGroup_80240EB4)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240470),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80240D54),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A0113,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80240470),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80240DAC),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00830201, 0x00830202, 0x00830203, 0x00830203, 0x00830201, 0x00830201, 0x00830206, 0x00830206, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203, 0x00830203,
        },
        .tattle = 0x1A0114,
    },
    {
        .id = 2,
        .settings = &N(npcSettings_80240470),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80240E04),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301, 0x00870301,
        },
        .tattle = 0x1A0115,
    },
    {
        .id = 3,
        .settings = &N(npcSettings_80240470),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80240E5C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001, 0x00890001,
        },
        .tattle = 0x1A0116,
    },
};

NpcGroupList N(npcGroupList_80241674) = {
    NPC_GROUP(N(npcGroup_80240EB4), 0x00000000),
    {},
};

s32 pad_00168C[] = {
    0x00000000,
};

// rodata: D_80241690_A5E0B0

// rodata: D_80241698_A5E0B8
