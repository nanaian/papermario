#include "kmr_03.h"

s32 unk_missing_80240318[62];
s32 pad_00064C[1];
Script N(script_802406C0);
s32 pad_0006EC[1];
Script N(script_ExitWalk_802406F0);
Script N(script_ExitWalk_8024074C);
Script N(script_802407A8);
Script N(main);
s32 pad_000948[2];
Script N(script_8024097C);
Script N(script_NpcAI_80240B50);
Script N(script_Hit_80240F64);
Script N(script_Init_802411A8);
StaticNpc N(npcGroup_80241260)[1];
NpcGroupList N(npcGroupList_80241450);
s32 pad_001468[2];
Script N(script_80241470);
Script N(script_802414A8);
Script N(script_802414C8);
Script N(script_MakeEntities);
s32 pad_0017E8[2];
Script N(script_SearchBush_802417F0);
Script N(script_ShakeTree_80241B50);
s32 N(searchBushEvent_Bush1)[4];
Script N(script_Tree1_Callback);
Script N(script_802422B8);
s32 pad_00233C[1];
Script N(script_80242340);
s32 pad_002958[2];
const char D_80242960_8CA8F0[8]; // "kmr_04"
const char D_80242968_8CA8F8[8]; // "kmr_05"

// text: func_80240000_8C7F90

// text: func_80240184_8C8114

// text: func_802401B0_8C8140

// text: func_80240218_8C81A8

s32 unk_missing_80240318[] = {
    0x00000000, 0x00000000, 0x3C03800B, 0x24631D80, 0x94620002, 0x3042FFFE, 0xA4620002, 0x03E00008,
    0x24020002, 0x3C03800B, 0x24631D80, 0x94620002, 0x34420001, 0xA4620002, 0x03E00008, 0x24020002,
    0x27BDFFD0, 0xAFB00010, 0x3C108011, 0x2610EFC8, 0xAFBF0018, 0xAFB10014, 0xF7B60028, 0xF7B40020,
    0xC60C0080, 0x0C00A8BB, 0x0080882D, 0xC6140054, 0x3C0140A0, 0x4481B000, 0x00000000, 0x4616A502,
    0x00000000, 0xC60C0080, 0x4600A502, 0x0C00A8D4, 0x00000000, 0xC6040054, 0x46162102, 0x00000000,
    0xC6020028, 0x46141080, 0x46000007, 0x46002102, 0x00000000, 0x4600118D, 0xE6260084, 0xC6000030,
    0x46040000, 0x4600018D, 0xE6260088, 0x8FBF0018, 0x8FB10014, 0x8FB00010, 0xD7B60028, 0xD7B40020,
    0x24020002, 0x03E00008, 0x27BD0030, 0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240410_8C83A0

// text: func_80240480_8C8410

s32 pad_00064C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -340.0f, 0.0f, 348.0f, 48.0f },
    { 480.0f, 0.0f, 0.0f, 270.0f },
    { -310.0f, 20.0f, -80.0f, 135.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19003B,
};

Script N(script_802406C0) = SCRIPT({
    SetMusicTrack(0, 17, 0, 8);
});

s32 pad_0006EC[] = {
    0x00000000,
};

Script N(script_ExitWalk_802406F0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242960_8CA8F0, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024074C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242968_8CA8F8, 0);
    sleep 100;
});

Script N(script_802407A8) = SCRIPT({
    bind N(script_ExitWalk_802406F0) to 0x80000 3;
    bind N(script_ExitWalk_8024074C) to 0x80000 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 30;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_FLAG(8) = 0;
    MakeNpcs(0, N(npcGroupList_80241450));
    ClearDefeatedEnemies();
    await N(script_MakeEntities);
    await N(script_802422B8);
    spawn N(script_802406C0);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 2) {
        SI_VAR(0) = N(script_802407A8);
        spawn EnterWalk;
    } else {
        spawn N(script_802407A8);
        spawn N(script_80242340);
    }
    sleep 1;
});

s32 pad_000948[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80240950) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x16,
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

Script N(script_8024097C) = SCRIPT({
1:
    if (SI_AREA_FLAG(8) == 1) {
    100:
        AwaitPlayerLeave(294, 123, 170);
        EnableNpcAI(0, 0);
        DisablePlayerInput(1);
        SetNpcSpeed(0, 4.0);
        SetNpcAnimation(0, 0x9D0003);
        func_802401B0_8C8140();
        GetAngleToPlayer(0, SI_VAR(2));
        loop SI_VAR(1) {
            GetNpcPos(0, SI_VAR(7), SI_VAR(8), SI_VAR(9));
            AddVectorPolar(SI_VAR(7), SI_VAR(9), 4.0, SI_VAR(2));
            SetNpcPos(0, SI_VAR(7), SI_VAR(8), SI_VAR(9));
            sleep 1;
        }
        PlayerFaceNpc(0, 3);
        SetPlayerSpeed(3.0);
        PlayerMoveTo(243, 243, 0);
        SetNpcVar(0, 0, 1);
        EnableNpcAI(0, 1);
        DisablePlayerInput(0);
        goto 100;
    }
    sleep 1;
    goto 1;
});

Script N(script_NpcAI_80240B50) = SCRIPT({
1:
    match SI_SAVE_VAR(0) {
        == 0xFFFFFF86 {
        89:
            func_80240218_8C81A8(0xFFFFFF8A, 86, 0xFFFFFFBA, 0xFFFFFFF1);
            sleep 1;
            if (SI_VAR(0) == 0) {
                goto 89;
            }
            DisablePlayerInput(1);
            SetNpcAux(0, 0);
            PlaySoundAtNpc(0, 610, 0);
            ShowEmote(0, 0, 45, 15, 1, 0, 0, 0, 0);
            sleep 15;
            NpcFacePlayer(-1, 5);
            sleep 10;
            SpeakToPlayer(0, 0x9D0008, 0x9D0001, 0, 0xB00A6);
            UseSettingsFrom(0, 0xFFFFFF24, 20, 0xFFFFFFB8);
            SetPanTarget(0, 0xFFFFFFEC, 0, 68);
            SetCamPitch(0, 15.0, -8.5);
            SetCamDistance(0, 275);
            SetCamSpeed(0, 1.5);
            PanToTarget(0, 0, 1);
            spawn {
                sleep 20;
                SetPlayerSpeed(2.0);
                PlayerMoveTo(0xFFFFFFDA, 68, 0);
            }
            GetNpcPos(0, SI_VAR(7), SI_VAR(8), SI_VAR(9));
            SetNpcSpeed(0, 4.0);
            SetNpcAnimation(0, 0x9D0003);
            NpcMoveTo(0, 0, 70, 0);
            SetNpcAnimation(0, 0x9D0001);
            InterpNpcYaw(0, 276, 20);
            sleep 30;
            SpeakToPlayer(0, 0x9D0008, 0x9D0001, 0, 0xB00A7);
            sleep 5;
            SetPlayerAnimation(0x80007);
            sleep 30;
            SpeakToPlayer(0, 0x9D0008, 0x9D0001, 0, 0xB00A8);
            func_80240000_8C7F90(0, 5);
            SI_SAVE_VAR(0) = 0xFFFFFF87;
            UseSettingsFrom(0, 0xFFFFFF24, 20, 0xFFFFFFB8);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamSpeed(0, 3.0);
            PanToTarget(0, 0, 1);
            WaitForCam(0, 1.0);
            PanToTarget(0, 0, 0);
            EnablePartnerAI();
            DisablePlayerInput(0);
            sleep 1;
        }
    }
});

Script N(script_Hit_80240F64) = SCRIPT({
    SetNpcAnimation(-1, 0x9D0007);
    sleep 10;
    SetNpcAnimation(-1, 0x9D0001);
    SI_MAP_VAR(0) += 1;
    if (SI_MAP_VAR(0) < 3) {
        GetOwnerEncounterTrigger(SI_VAR(0));
        match SI_VAR(0) {
            == 2 {
                SetNpcVar(0, 0, 1);
                if (SI_AREA_FLAG(6) == 1) {
                } else {
                    SI_AREA_FLAG(6) = 1;
                    SI_AREA_FLAG(7) = 0;
                }
            }
            == 4 {
                SetNpcVar(0, 0, 1);
                if (SI_AREA_FLAG(7) == 1) {
                } else {
                    SI_AREA_FLAG(6) = 0;
                    SI_AREA_FLAG(7) = 1;
                }
            }
        }
        sleep 10;
        SetNpcAnimation(-1, 0x9D0003);
    } else {
        sleep 10;
        GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcFlagBits(0xFFFFFFFC, 512, 1);
        SetNpcPos(0, 0, 0xFFFFFC18, 0);
        SetNpcFlagBits(0, 256, 0);
        EnablePartnerAI();
        SetNpcAux(-1, N(script_8024097C));
        BindNpcAI(-1, N(script_NpcAI_80240B50));
    }
});

Script N(script_Init_802411A8) = SCRIPT({
    BindNpcIdle(-1, N(script_NpcAI_80240B50));
    BindNpcAux(-1, N(script_8024097C));
    BindNpcHit(-1, N(script_Hit_80240F64));
    match SI_SAVE_VAR(0) {
        >= 0xFFFFFF87 {
            SetNpcFlagBits(-1, 512, 0);
            SetNpcFlagBits(-1, 8, 1);
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
        }
    }
});

StaticNpc N(npcGroup_80241260)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240950),
        .pos = { -50.0, 0.0, 80.0 },
        .flags = 0x00400105,
        .init = N(script_Init_802411A8),
        .yaw = 45,
        .dropFlags = 0x80,
        .animations = {
            0x009D0001, 0x009D0002, 0x009D0003, 0x009D0003, 0x009D0001, 0x009D0001, 0x009D0000, 0x009D0000, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003, 0x009D0003,
        },
        .tattle = 0x1A0063,
    },
};

NpcGroupList N(npcGroupList_80241450) = {
    NPC_GROUP(N(npcGroup_80241260), 0x00020000),
    {},
};

s32 pad_001468[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241470) = SCRIPT({
    ModifyColliderFlags(0, 9, 0x7FFFFE00);
    SI_SAVE_VAR(0) = 0xFFFFFF8B;
});

Script N(script_802414A8) = SCRIPT({
    SI_SAVE_FLAG(54) = 1;
});

Script N(script_802414C8) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFF8B) {
        MakeEntity(0x802EA10C, 45, 0, 70, 15, 0x80000000);
        AssignScript(N(script_80241470));
    } else {
        ModifyColliderFlags(0, 9, 0x7FFFFE00);
    }
    if (SI_SAVE_FLAG(54) == 0) {
        MakeEntity(0x802EA19C, 230, 0, 310, 15, 0x80000000);
        AssignScript(N(script_802414A8));
    }
    MakeEntity(0x802EA588, 230, 60, 310, 15, 151, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(52));
    MakeEntity(0x802EA0C4, 230, 50, 0xFFFFFF60, 15, 0x80000000);
    MakeEntity(0x802EA0C4, 165, 0, 380, 20, 0x80000000);
    MakeEntity(0x802EA564, 0xFFFFFF56, 0, 370, 43, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(50));
    MakeEntity(0x802EAA54, 345, 75, 0xFFFFFF06, 0, 100, 0x80000000);
    MakeItemEntity(343, 345, 205, 0xFFFFFF06, 17, SI_SAVE_FLAG(56));
    MakeItemEntity(343, 345, 230, 0xFFFFFF06, 17, SI_SAVE_FLAG(57));
    MakeItemEntity(343, 345, 255, 0xFFFFFF06, 17, SI_SAVE_FLAG(58));
    MakeItemEntity(343, 345, 280, 0xFFFFFF06, 17, SI_SAVE_FLAG(59));
    MakeItemEntity(128, 229, 250, 0xFFFFFF64, 17, SI_SAVE_FLAG(49));
    MakeEntity(0x802EAB04, 300, 0, 150, 0, 18, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(88));
    MakeEntity(0x802EA7E0, 130, 60, 0, 0, 0x80000000);
});

s32 pad_0017E8[] = {
    0x00000000, 0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_802417F0) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240480_8C8410, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240480_8C8410, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
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
Script N(script_ShakeTree_80241B50) = {
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
                    SI_CMD(ScriptOpcode_CALL, func_80240480_8C8410, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240480_8C8410, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240480_8C8410, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
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
                    SI_CMD(ScriptOpcode_CALL, func_80240480_8C8410, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
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
    .modelIDs = { 0x40 },
};

TreeEffectVectorList N(treeEffectVectors_Bush1) = {
    .count = 0x1,
    .vectors = { { 2.0038568039844884e-43, 2.2420775429197073e-44, 6.473998905180655e-43 } },
};

s32 N(searchBushEvent_Bush1)[] = {
    N(treeModelList_Bush1_Bush), 0x00000000, N(treeEffectVectors_Bush1), 0x00000000,
};

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x1,
    .modelIDs = { 0x3E },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x3D },
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nan, 1.821688003622262e-43, 2.5223372357846707e-44 }, { 3.923635700109488e-44, 1.821688003622262e-43, 5.465064010866787e-44 } },
};

Script N(script_Tree1_Callback) = SCRIPT({
    if (SI_SAVE_FLAG(53) == 1) {
        return;
    }
    if (SI_MAP_FLAG(10) == 1) {
        return;
    }
    sleep 10;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) < 0xFFFFFFE2) {
        MakeItemEntity(138, 0xFFFFFFE9, 100, 35, 13, SI_SAVE_FLAG(53));
    } else {
        MakeItemEntity(138, 0xFFFFFFAB, 100, 16, 13, SI_SAVE_FLAG(53));
    }
    SI_MAP_FLAG(10) = 1;
});

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = &N(script_Tree1_Callback),
};

Vec4f N(triggerCoord_802422A8) =  { -42.0, 0.0, -13.0, 0.0 };

Script N(script_802422B8) = SCRIPT({
    SI_VAR(0) = N(searchBushEvent_Bush1);
    bind N(script_SearchBush_802417F0) to TriggerFlag_WALL_INTERACT 53;
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80241B50) to TriggerFlag_WALL_HAMMER 52;
    bind N(script_ShakeTree_80241B50) to TriggerFlag_BOMB N(triggerCoord_802422A8);
});

s32 pad_00233C[] = {
    0x00000000,
};

Script N(script_80242340) = SCRIPT({
    UseSettingsFrom(0, 0xFFFFFEF2, 20, 0xFFFFFFB0);
    SetPanTarget(0, 0xFFFFFEF2, 20, 0xFFFFFFB0);
    SetCamDistance(0, 700.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    if (SI_SAVE_VAR(0) >= 0xFFFFFF89) {
        SetPlayerPos(0, 0xFFFFFC18, 0);
        DisablePlayerInput(1);
        SetPlayerPos(0xFFFFFF20, 20, 0xFFFFFFB0);
        SetNpcPos(0xFFFFFFFC, 0xFFFFFF20, 20, 0xFFFFFFB0);
        sleep 20;
        SetCamSpeed(0, 3.0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
        DisablePlayerInput(0);
        return;
    }
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(0), 0xFFFFFC18, SI_VAR(2));
    sleep 30;
    SetCamDistance(0, 220);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        sleep 18;
        PlaySoundAtPlayer(373, 0);
        sleep 30;
        PlaySoundAtPlayer(374, 0);
        sleep 28;
        PlaySoundAtPlayer(373, 0);
    }
    HidePlayerShadow(1);
    SetPlayerAnimation(0x10002);
    SetPlayerPos(0xFFFFFF20, 120, 0xFFFFFFB0);
    InterpPlayerYaw(90, 0);
0:
    sleep 1;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 0xFFFFFFFE;
    SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(1) > 86) {
        goto 0;
    }
    SetPlayerPos(0xFFFFFECA, 20, 0xFFFFFFB0);
    spawn {
        sleep 20;
        SetPanTarget(0, 0xFFFFFECA, 20, 0xFFFFFFB0);
        SetCamSpeed(0, 0.2001953125);
        PanToTarget(0, 0, 1);
    }
    0x802D286C(0x2800);
    0x802D2520(0x10002, 5, 5, 1, 1, 0);
    sleep 100;
    WaitForCam(0, 1.0);
    0x802D2520(0x10002, 0, 0, 0, 0, 0);
    HidePlayerShadow(0);
    SetPlayerAnimation(0x10006);
    sleep 10;
    SetPlayerAnimation(0x10007);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerJumpscale(1.0);
    PlayerJump(SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    SetPlayerAnimation(0x10002);
    spawn {
        SetCamSpeed(0, 3.0);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PanToTarget(0, 0, 1);
        WaitForCam(0, 1.0);
        PanToTarget(0, 0, 0);
    }
    sleep 30;
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

s32 pad_002958[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242960_8CA8F0

// rodata: D_80242968_8CA8F8

