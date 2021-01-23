#include "kzn_09.h"

s32 pad_000D38[2];
s32 pad_00101C[1];
s32 pad_003A04[3];
Script N(script_ExitWalk_80243A80);
Script N(script_ExitWalk_80243ADC);
Script N(script_ExitWalk_80243B38);
Script N(script_80243B94);
Script N(main);
s32 pad_003CF8[2];
s32 N(unk_80243D00)[2];
s32 N(unk_80243D08)[4];
s32 N(unk_80243D18)[16];
s32 N(unk_80243D58)[3];
Script N(script_80243D64);
Script N(script_80243EC8);
Script N(script_MakeEntities);
s32 pad_0043E4[3];
s32 N(unk_802443F0)[6];
Script N(script_80244408);
Script N(script_80244470);
Script N(script_80244A8C);
Script N(script_80244B7C);
Script N(script_NpcAI_80244C68);
Script N(script_NpcAI_80244D68);
Script N(script_80244DE8);
s32 N(unk_80244EA0)[12];
Script N(script_80244ED0);
Script N(script_NpcAI_80244F70);
s32 N(unk_80244FE0)[12];
Script N(script_80245010);
Script N(script_80245080);
s32 unk_missing_80245174[22];
s32 unk_missing_802451F8[11];
s32 N(unk_80245250)[1];
Script N(script_80245254);
Script N(script_80245284);
s32 N(unk_802452B4)[1];
s32 N(unk_802452B8)[1];
Script N(script_802452BC);
Script N(script_80245400);
Script N(script_80245450);
Script N(script_802454D0);
Script N(script_802457F4);
Script N(script_80245864);
s32 N(unk_80245B5C)[2];
Script N(script_80245B64);
Script N(script_80245BB4);
Script N(script_Idle_80245C18);
Script N(script_Interact_802466CC);
Script N(script_Init_80246714);
Script N(script_802467DC);
Script N(script_Init_80246838);
StaticNpc N(npcGroup_8024687C)[2];
StaticNpc N(npcGroup_80246C5C)[1];
StaticNpc N(npcGroup_80246E4C)[2];
NpcGroupList N(npcGroupList_8024722C);
s32 pad_00725C[1];
const char D_80247260_C7DF40[8]; // "kzn_03"
const char D_80247268_C7DF48[8]; // "kzn_10"
s32 pad_007494[3];

// text: func_80240000_C76CE0

// text: func_8024001C_C76CFC

// text: func_8024003C_C76D1C

// text: func_80240068_C76D48

// text: func_802400D4_C76DB4

// text: func_80240120_C76E00

// text: func_802401CC_C76EAC

// text: func_8024041C_C770FC

// text: func_80240448_C77128

// text: func_80240480_C77160

// text: func_80240510_C771F0

// text: func_80240544_C77224

// text: func_802405A8_C77288

// text: func_80240600_C772E0

// text: func_80240B38_C77818

// text: func_80240C78_C77958

// text: func_80240CC0_C779A0

// text: func_80240D08_C779E8

s32 pad_000D38[] = {
    0x00000000, 0x00000000,
};

// text: func_80240D40_C77A20

// text: func_80240DE4_C77AC4

// text: func_80240E88_C77B68

// text: func_80241000_C77CE0

s32 pad_00101C[] = {
    0x00000000,
};

// text: N(UnkNpcAIFunc6)

// text: N(UnkNpcAIFunc7)

// text: N(UnkNpcAIFunc8)

// text: N(UnkNpcAIFunc5)

// text: func_80241228_C77F08

// text: func_802413DC_C780BC

// text: func_8024163C_C7831C

// text: func_802418F0_C785D0

// text: func_8024195C_C7863C

// text: func_80241A58_C78738

// text: func_80242498_C79178

// text: func_80242528_C79208

// text: func_80242628_C79308

// text: func_80242688_C79368

// text: func_80242774_C79454

// text: N(set_script_owner_npc_anim)

// text: func_80242A40_C79720

// text: N(UnkNpcAIFunc12)

// text: func_80242CD8_C799B8

// text: func_80242D58_C79A38

// text: func_80243198_C79E78

// text: func_802431E0_C79EC0

// text: func_80243238_C79F18

// text: func_802432AC_C79F8C

// text: func_80243360_C7A040

// text: func_802433C4_C7A0A4

// text: func_80243420_C7A100

// text: func_802435F0_C7A2D0

// text: func_80243644_C7A324

// text: func_8024367C_C7A35C

// text: func_80243718_C7A3F8

// text: func_80243808_C7A4E8

// text: func_80243994_C7A674

// text: func_802439D8_C7A6B8

s32 pad_003A04[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -445.0f, 870.0f, -40.0f, 90.0f },
    { 435.0f, 719.0f, 10.0f, 270.0f },
    { -445.0f, 400.0f, 95.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19010B,
};

Script N(script_ExitWalk_80243A80) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80247260_C7DF40, 2);
    sleep 100;
});

Script N(script_ExitWalk_80243ADC) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80247268_C7DF48, 0);
    sleep 100;
});

Script N(script_ExitWalk_80243B38) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80247260_C7DF40, 4);
    sleep 100;
});

Script N(script_80243B94) = SCRIPT({
    bind N(script_ExitWalk_80243A80) to 0x80000 0;
    bind N(script_ExitWalk_80243ADC) to 0x80000 2;
    bind N(script_ExitWalk_80243B38) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 18;
    SetSpriteShading(0xA0008);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_8024722C));
    await N(script_MakeEntities);
    SetMusicTrack(0, 41, 0, 8);
    PlayAmbientSounds(4);
    SI_VAR(0) = N(script_80243B94);
    spawn EnterWalk;
    sleep 1;
    await N(script_80244A8C);
});

s32 pad_003CF8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80243D00)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80243D08)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80243D18)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80243D58)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80243D64) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240544_C77224(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240B38_C77818(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240B38_C77818(50, 50);
    }
    spawn {
        sleep 3;
        func_8024003C_C76D1C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_802405A8_C77288();
        func_80240C78_C77958();
        sleep 5;
        func_80240CC0_C779A0();
        sleep 5;
        func_80240C78_C77958();
    }
    sleep 3;
    func_80240600_C772E0(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_80243EC8) = SCRIPT({
    if (SI_SAVE_FLAG(1329) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240D08_C779E8();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240000_C76CE0();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240480_C77160(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240120_C76E00();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240510_C771F0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_C76CFC();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802401CC_C76EAC();
    if (SI_VAR(0) == -1) {
        func_80240510_C771F0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_C76CFC();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_8024041C_C770FC(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240510_C771F0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_C76CFC();
        return;
    }
    await N(script_80243D64);
    func_80240068_C76D48(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(1329) = 1;
    func_80240510_C771F0(SI_VAR(9));
    func_80240448_C77128();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024001C_C76CFC();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 130, 480, 0xFFFFFFB5, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(1329));
    AssignScript(N(script_80243EC8));
    MakeEntity(0x802EAB04, 350, 350, 55, 0, 35, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(1338));
});

s32 pad_0043E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_802443F0)[] = {
    0xC3A64000, 0x447C3000, 0xC25C0000, 0x43B3D99A, 0x445D8000, 0xC25C0000,
};

Script N(script_80244408) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    goto 0;
});

// Unable to use DSL: DSL does not support script opcode 0x3C
// *INDENT-OFF*
Script N(script_80244470) = {
    SI_CMD(ScriptOpcode_CALL, GetCurrentPartner, SI_VAR(9)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 2),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(9), 3),
        SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 1),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 3),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_SPAWN_GET_ID, N(script_80244408), SI_VAR(9)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 7),
        SI_CMD(ScriptOpcode_CALL, DisablePartnerAI, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 512, 0),
        SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 320, 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(4)),
        SI_CMD(ScriptOpcode_SUB, SI_VAR(0), 10),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_ARRAY(5)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(1), 0xFFFFFFFB),
        SI_CMD(ScriptOpcode_CALL, SetNpcJumpscale, 0xFFFFFFFC, SI_FIXED(0.5)),
        SI_CMD(ScriptOpcode_CALL, NpcJump0, 0xFFFFFFFC, SI_ARRAY(3), SI_VAR(0), SI_VAR(1), 8),
        SI_CMD(ScriptOpcode_CALL, SetNpcAnimation, 0xFFFFFFFC, 262),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_CALL, SetPlayerJumpscale, SI_FIXED(0.2001953125)),
    SI_CMD(ScriptOpcode_CALL, PlayerJump, SI_ARRAY(3), SI_ARRAY(4), SI_ARRAY(5), 5),
    SI_CMD(ScriptOpcode_CALL, SetPlayerActionState, 10),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, SetPlayerAnimation, 0x8000D),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 10),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x80000019),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, func_80240D40_C77A20, SI_MAP_FLAG(10), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_NE, SI_AREA_VAR(0), SI_VAR(0)),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, 0, 1000, 70, 1),
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, func_80240E88_C77B68, 0),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(1), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(2), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_CALL, func_80241000_C77CE0),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(8), 0x8000),
        SI_CMD(ScriptOpcode_GOTO, 10),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 8327),
    SI_CMD(ScriptOpcode_LABEL, 10),
    SI_CMD(ScriptOpcode_CALL, SetPlayerFlagBits, 0x800000, 1),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 0),
    SI_CMD(ScriptOpcode_CALL, StopSound, 0x80000019),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, 0xFFFFFFFC, 64, 0),
    SI_CMD(ScriptOpcode_CALL, EnablePartnerAI),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerPhysics, 0),
    SI_CMD(ScriptOpcode_CALL, DisablePlayerInput, 0),
    SI_CMD(ScriptOpcode_KILL_SCRIPT, SI_VAR(9)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 20),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 0x8000001A),
    SI_CMD(ScriptOpcode_PARALLEL_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(11), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(1), SI_ARRAY(6)),
        SI_CMD(ScriptOpcode_LOOP, 0),
            SI_CMD(ScriptOpcode_CALL, GetNpcPos, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_CALL, func_80240DE4_C77AC4, SI_MAP_FLAG(11), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
            SI_CMD(ScriptOpcode_IF_NE, SI_AREA_VAR(1), SI_VAR(0)),
                SI_CMD(ScriptOpcode_BREAK_LOOP),
            SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_END_PARALLEL_THREAD),
    SI_CMD(ScriptOpcode_SET, SI_VAR(2), SI_VAR(0)),
    SI_CMD(ScriptOpcode_DIV, SI_VAR(2), 10),
    SI_CMD(ScriptOpcode_CALL, MakeLerp, SI_VAR(0), 0, SI_VAR(2), 0),
    SI_CMD(ScriptOpcode_LABEL, 1),
    SI_CMD(ScriptOpcode_CALL, UpdateLerp),
    SI_CMD(ScriptOpcode_CALL, func_80240E88_C77B68, 1),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(1), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_ARRAY(2), SI_VAR(5), SI_VAR(6), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 1),
        SI_CMD(ScriptOpcode_GOTO, 1),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(11), 0),
    SI_CMD(ScriptOpcode_CALL, StopSound, 0x8000001A),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x3E
Script N(script_80244A8C) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 7),
    SI_CMD(ScriptOpcode_USE_ARRAY, SI_VAR(0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(0), N(unk_802443F0)),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(1), 12),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(2), 14),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(3), 0xFFFFFEB4),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(4), 895),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(5), 0xFFFFFFD3),
    SI_CMD(ScriptOpcode_SET, SI_ARRAY(6), 1),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80244470), TriggerFlag_FLOOR_INTERACT, 7, 1, 0),
    SI_CMD(ScriptOpcode_SPAWN, N(script_802467DC)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

NpcSettings N(npcSettings_80244B50) = {
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

Script N(script_80244B7C) = SCRIPT({
    GetBattleOutcome(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            RemoveNpc(-1);
        }
        == 2 {
            SetNpcPos(-1, 0, 0xFFFFFC18, 0);
            0x80045900(1);
        }
        == 3 {
            SetEnemyFlagBits(-1, 16, 1);
            RemoveNpc(-1);
        }
    }
});

NpcAISettings N(aISettings_80244C38) = {
    .moveSpeed = 0.0f,
    .moveTime = 0x1E,
    .waitTime = 0x1E,
    .alertRadius = 150.0f,
    .unk_10 = 0.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 0.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 0.0f,
    .unk_28 = 0.0f,
    .unk_2C = 0,
};

Script N(script_NpcAI_80244C68) = SCRIPT({
    SetSelfVar(7, 1);
    SetSelfVar(8, 10);
    SetSelfVar(9, 9);
    SetSelfVar(10, 12);
    SetSelfVar(11, 7);
    SetSelfVar(12, 30);
    SetSelfVar(13, 15);
    SetSelfVar(14, 18);
    SetSelfVar(15, 15);
    func_80242774_C79454(N(aISettings_80244C38));
});

NpcSettings N(npcSettings_80244D3C) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x32,
    .radius = 0x24,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244C68),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

Script N(script_NpcAI_80244D68) = SCRIPT({
    EnableNpcShadow(-1, 0);
    SetSelfVar(0, 14);
    SetSelfVar(1, 28);
    SetSelfVar(4, 3);
    SetSelfVar(15, 8414);
    func_802413DC_C780BC();
});

Script N(script_80244DE8) = SCRIPT({
    GetOwnerEncounterTrigger(SI_VAR(0));
    match SI_VAR(0) {
        == 1, 2, 4, 6 {
            GetSelfAnimationFromTable(7, SI_VAR(0));
            await 0x800936DC;
        }
    }
});

NpcSettings N(npcSettings_80244E74) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x1C,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244D68),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80244B7C),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

s32 N(unk_80244EA0)[] = {
    0x3F800000, 0x0000003C, 0x0000003C, 0x42B40000, 0x42200000, 0x00000001, 0x40900000, 0x00000000,
    0x00000000, 0x42C80000, 0x42200000, 0x00000001,
};

Script N(script_80244ED0) = SCRIPT({
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80242D58_C79A38(N(unk_80244EA0));
});

NpcAISettings N(aISettings_80244F40) = {
    .moveSpeed = 1.0f,
    .moveTime = 0x3C,
    .waitTime = 0x3C,
    .alertRadius = 90.0f,
    .unk_10 = 40.0f,
    .unk_14 = 0x1,
    .chaseSpeed = 7.0f,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0f,
    .unk_28 = 40.0f,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80244F70) = SCRIPT({
    SetSelfVar(2, 4);
    SetSelfVar(3, 10);
    SetSelfVar(5, 4);
    SetSelfVar(7, 3);
    func_80242D58_C79A38(N(aISettings_80244F40));
});

s32 N(unk_80244FE0)[] = {
    0x3F800000, 0x00000014, 0x00000005, 0x42F00000, 0x00000000, 0x00000003, 0x40C00000, 0x00000000,
    0x00000000, 0x43160000, 0x00000000, 0x00000001,
};

Script N(script_80245010) = SCRIPT({
    SetSelfVar(2, 3);
    SetSelfVar(3, 8);
    SetSelfVar(5, 6);
    SetSelfVar(7, 6);
    func_80242D58_C79A38(N(unk_80244FE0));
});

Script N(script_80245080) = SCRIPT({
    func_80243198_C79E78();
    SetNpcAnimation(-1, 0x33000F);
    func_802431E0_C79EC0();
    0x80045580(1);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcAnimation(-1, 0x330000);
    func_80243238_C79F18();
    0x80045580(0);
    SetSelfVar(2, 5);
    SetSelfVar(3, 2);
    SetSelfVar(5, 5);
    SetSelfVar(7, 2);
    func_80242D58_C79A38(N(unk_80244EA0));
});

s32 unk_missing_80245174[] = {
    0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80244ED0), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x000A0000, 0x00000000, 0x00140016, 0x00000000, 0x00000000, N(script_80245080),
    EnemyNpcHit, 0x00000000, EnemyNpcDefeat, 0x00000000, 0x00000000, 0x000A0000,
};

NpcSettings N(npcSettings_802451CC) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x14,
    .radius = 0x16,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80244F70),
    .onHit = &EnemyNpcHit,
    .aux = NULL,
    .onDefeat = &EnemyNpcDefeat,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x11,
    .unk_2A = 0,
};

s32 unk_missing_802451F8[] = {
    0x00000000, 0x00180018, 0x00000000, 0x00000000, N(script_80245010), EnemyNpcHit, 0x00000000, EnemyNpcDefeat,
    0x00000000, 0x00000000, 0x00190000,
};

NpcSettings N(npcSettings_80245224) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
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

s32 N(unk_80245250)[] = {
    0x00000000,
};

Script N(script_80245254) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80245284) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_802452B4)[] = {
    0x00000000,
};

s32 N(unk_802452B8)[] = {
    0x00000000,
};

Script N(script_802452BC) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80243420_C7A100(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80243644_C7A324(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80245400) = {
    SI_CMD(ScriptOpcode_CALL, func_8024367C_C7A35C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802452BC), 0x10, 0, D_802474A0_B65750, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802435F0_C7A2D0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80245450) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_80243808_C7A4E8(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_802454D0) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            DisablePartnerAI(0);
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80243808_C7A4E8(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_80245450);
            SetNpcAnimation(0xFFFFFFFC, 0x40002);
            GetAngleBetweenNPCs(SI_VAR(9), 0xFFFFFFFC, SI_VAR(11));
            GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
            GetNpcPos(SI_VAR(9), SI_VAR(6), SI_VAR(7), SI_VAR(8));
            SetNpcFlagBits(0xFFFFFFFC, 256, 1);
            if (SI_VAR(11) <= 180) {
                SI_VAR(6) += 20;
            } else {
                SI_VAR(6) += 0xFFFFFFEC;
            }
            SI_VAR(7) += 10;
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            NpcJump1(0xFFFFFFFC, SI_VAR(6), SI_VAR(7), SI_VAR(8), 20);
            kill SI_VAR(10);
            RemoveItemEntity(SI_VAR(0));
            sleep 20;
            GetNpcYaw(0xFFFFFFFC, SI_VAR(10));
            SI_VAR(10) += 180;
            InterpNpcYaw(0xFFFFFFFC, SI_VAR(10), 0);
            sleep 5;
            NpcJump1(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20);
            SetNpcAnimation(0xFFFFFFFC, 0x40001);
            NpcFaceNpc(0xFFFFFFFC, SI_VAR(9), 0);
            sleep 5;
            SetNpcFlagBits(0xFFFFFFFC, 256, 0);
            EnablePartnerAI();
            sleep 5;
        }
    }
    func_80243644_C7A324(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_802457F4) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_8024367C_C7A35C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802454D0), 0x10, 0, D_802474A0_B65750, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802435F0_C7A2D0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80245864) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80243994_C7A674();
    GetCurrentPartnerID(SI_VAR(0));
    FindKeyItem(SI_VAR(5), SI_VAR(1));
    if (SI_VAR(0) == 4) {
        if (SI_VAR(1) != -1) {
            DisablePartnerAI(0);
            PlayerFaceNpc(SI_VAR(2), 0);
            sleep 1;
            GetNpcPos(SI_VAR(2), SI_VAR(13), SI_VAR(0), SI_VAR(14));
            GetNpcPos(0xFFFFFFFC, SI_VAR(13), SI_VAR(14), SI_VAR(15));
            SetNpcJumpscale(0xFFFFFFFC, 0.0);
            SI_VAR(0) += 10;
            NpcJump1(0xFFFFFFFC, SI_VAR(13), SI_VAR(0), SI_VAR(15), 10);
            SpeakToNpc(0xFFFFFFFC, 0x40006, 0x40001, 0, SI_VAR(2), SI_VAR(7));
            EnablePartnerAI();
            await N(script_802457F4);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                }
                else {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(9));
                    if (SI_VAR(10) != 0) {
                        SpeakToPlayer(SI_VAR(2), SI_VAR(3), SI_VAR(4), 0, SI_VAR(10));
                    }
                    EnablePartnerAI();
                    if (SI_VAR(6) != 0) {
                        SI_VAR(0) = SI_VAR(6);
                        SI_VAR(1) = 1;
                        await N(script_80245254);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_802439D8_C7A6B8();
});

s32 N(unk_80245B5C)[] = {
    0x00000054, 0x00000000,
};

Script N(script_80245B64) = SCRIPT({
    func_80243718_C7A3F8(0, 0xB6000B, 0xB6000B, 84, 0, 0x1000E8, 0x1000E9, 0x1000EA, 0x1000EB, N(unk_80245B5C));
    await N(script_80245864);
});

Script N(script_80245BB4) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80245254);
        AddStarPieces(1);
    }
});

Script N(script_Idle_80245C18) = SCRIPT({
0:
    GetPlayerPos(SI_VAR(6), SI_VAR(7), SI_VAR(8));
    if (SI_VAR(7) < 800) {
        return;
    }
    AwaitPlayerLeave(0xFFFFFE39, 0xFFFFFFC4, 85);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        0x802D2B6C();
    }
    DisablePlayerInput(1);
    SetNpcFlagBits(0, 256, 1);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    AdjustCam(0, 3.0, 0, 400, 15.0, -7.0);
    SetSelfVar(1, 1);
    spawn {
        sleep 10;
        loop {
            sleep 1;
            PlayerFaceNpc(-1, 0);
            NpcFaceNpc(0xFFFFFFFC, -1, 0);
            GetSelfVar(1, SI_VAR(0));
            if (SI_VAR(0) != 1) {
                break;
            }
        }
    }
    spawn {
        DisablePartnerAI(0);
        sleep 30;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcSpeed(0xFFFFFFFC, 2.0);
        SI_VAR(0) += 20;
        SetNpcFlagBits(0xFFFFFFFC, 256, 0);
        NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 0);
        NpcFacePlayer(0xFFFFFFFC, 0);
        EnablePartnerAI();
    }
    SetNpcPos(-1, 0xFFFFFE0C, 870, 0xFFFFFFF1);
    sleep 1;
    SetNpcAnimation(-1, 0xB60007);
    SetNpcSpeed(-1, 4.0);
    NpcMoveTo(-1, 0xFFFFFE57, 0xFFFFFFF1, 0);
    InterpNpcYaw(-1, 270, 3);
    sleep 5;
    InterpNpcYaw(-1, 90, 3);
    sleep 5;
    PlaySoundAtNpc(-1, 610, 0);
    ShowEmote(-1, 0, 0, 20, 1, 0, 0, 0, 0);
    sleep 25;
    SetSelfVar(0, 2);
    spawn {
        SetNpcJumpscale(-1, 2.5);
    1:
        PlaySoundAtNpc(-1, 812, 0);
        NpcJump0(-1, 0xFFFFFE66, 870, 0xFFFFFFF1, 10);
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) != 1) {
            sleep 15;
            goto 1;
        }
        SetSelfVar(0, 0);
    }
    sleep 10;
    SpeakToPlayer(-1, 0xB60009, 0xB60002, 0, 0x1000F4);
    SetSelfVar(0, 1);
2:
    GetSelfVar(0, SI_VAR(0));
    if (SI_VAR(0) != 0) {
        sleep 1;
        goto 2;
    }
    UseSettingsFrom(0, 0xFFFFFECA, 870, 0xFFFFFFF1);
    SetPanTarget(0, 0xFFFFFECA, 870, 0xFFFFFFF1);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    SetNpcSpeed(-1, 4.0);
    NpcMoveTo(-1, 0xFFFFFE7A, 0xFFFFFFF1, 0);
    SetNpcJumpscale(-1, 1.5);
    SI_VAR(3) = 0xFFFFFEA2;
    SI_VAR(4) = 870;
    SI_VAR(5) = 0xFFFFFFF1;
    PlaySoundAtNpc(-1, 812, 0);
    NpcJump0(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10);
    SI_VAR(3) += 90;
    SetNpcAnimation(-1, 0xB6000E);
    PlaySoundAtNpc(-1, 812, 0);
    NpcJump0(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 10);
    InterpNpcYaw(-1, 270, 0);
    SetSelfVar(0, 1);
    spawn {
    3:
        0x802D7E08(-1, 1, 0xFFFFFFD3, 1, 0, 0, 0, 0, 20);
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            sleep 25;
            goto 3;
        }
    }
    sleep 10;
    SetNpcAnimation(-1, 0xB60004);
    sleep 10;
    SetNpcAnimation(-1, 0xB60006);
    sleep 10;
    SetNpcAnimation(-1, 0xB60007);
    loop 10 {
        SetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(4) -= 1;
        sleep 1;
    }
    loop 20 {
        SetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(3) -= 0.6005859375;
        SI_VAR(4) += 1.5;
        sleep 1;
    }
    loop 10 {
        SetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(3) -= 1.0;
        SI_VAR(4) -= 2;
        sleep 1;
    }
    SetNpcAnimation(-1, 0xB6000B);
    SetNpcJumpscale(-1, 3.0);
    NpcJump0(-1, SI_VAR(3), 700, SI_VAR(5), 5);
    PlaySoundAtNpc(-1, 353, 0);
    SetNpcFlagBits(-1, 512, 1);
    SetNpcFlagBits(-1, 256, 0);
    SetSelfVar(0, 0);
    SetSelfVar(1, 0);
    sleep 5;
    SetSelfVar(0, 1);
    spawn {
        SetPlayerAnimation(0x10023);
        sleep 10;
        SetPlayerAnimation(0x10005);
        SetPlayerSpeed(4.0);
        PlayerMoveTo(0xFFFFFE98, 0, 0);
        SetPlayerAnimation(0x1000C);
    5:
        GetSelfVar(0, SI_VAR(0));
        if (SI_VAR(0) == 1) {
            sleep 1;
            goto 5;
        }
        SetPlayerAnimation(0x10002);
    }
    ShowMessageAtScreenPos(0x1000F5, 160, 40);
    PlaySoundAtNpc(-1, 354, 0);
    ShakeCam(0, 0, 10, 7.0);
    sleep 10;
    SetSelfVar(0, 0);
    ResetCam(0, 2.0);
    SI_SAVE_VAR(0) = 30;
    DisablePlayerInput(0);
});

Script N(script_Interact_802466CC) = SCRIPT({
    SpeakToPlayer(-1, 0xB6000B, 0xB6000B, 0, 0x1000F6);
    await N(script_80245B64);
    await N(script_80245BB4);
});

Script N(script_Init_80246714) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 30 {
            BindNpcIdle(-1, N(script_Idle_80245C18));
            BindNpcInteract(-1, N(script_Interact_802466CC));
            return;
        }
        < 31 {
            SetNpcPos(-1, 0xFFFFFEF2, 375, 0xFFFFFFF1);
            SetNpcAnimation(-1, 0xB6000B);
            BindNpcInteract(-1, N(script_Interact_802466CC));
            return;
        }
    }
    RemoveNpc(-1);
});

Script N(script_802467DC) = SCRIPT({
    loop {
        GetModelCenter(12);
        SetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_Init_80246838) = SCRIPT({
    SetNpcFlagBits(-1, 2, 1);
    SetNpcScale(-1, 0.30078125, 1, 0.30078125);
});

StaticNpc N(npcGroup_8024687C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80244B50),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00510709,
        .init = N(script_Init_80246714),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
    {
        .id = 1,
        .settings = &N(npcSettings_80245224),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00200F01,
        .init = N(script_Init_80246838),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00B60001, 0x00B60004, 0x00B60006, 0x00B60006, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001, 0x00B60001,
        },
        .tattle = 0x1A0000,
    },
};

StaticNpc N(npcGroup_80246C5C)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802451CC),
        .pos = { -100.0, 350.0, 50.0 },
        .flags = 0x00002C00,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SODA, 10 } },
        .movement = { 0xFFFFFF9C, 0x0000015E, 0x00000032, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0xFFFFFF9C, 0x0000015E, 0x00000032, 0x000000C8, 0x00000000, 0x00000000, 0x00000001 },
        .animations = {
            0x004D0003, 0x004D0006, 0x004D0008, 0x004D0008, 0x004D0003, 0x004D0003, 0x004D0013, 0x004D0013, 0x004D000B, 0x004D000A, 0x004D000C, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003, 0x004D0003,
        },
    },
};

StaticNpc N(npcGroup_80246E4C)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80244D3C),
        .pos = { 200.0, 350.0, 100.0 },
        .flags = 0x00000400,
        .yaw = 270,
        .dropFlags = 0x80,
        .itemDropChance = 5,
        .itemDrops = { { ItemId_SUPER_SHROOM, 10 } },
        .movement = { 0x000000C8, 0x0000015E, 0x00000064, 0x0000001E, 0x00000000, 0xFFFF8001, 0x00000000, 0x0000000A, 0x0000015E, 0x00000019, 0x000000DC, 0x000000A5, 0x00000001, 0x00000001 },
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
    {
        .id = 4,
        .settings = &N(npcSettings_80244E74),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00800D00,
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00360001, 0x00360002, 0x00360003, 0x00360003, 0x00360001, 0x00360001, 0x0036000E, 0x0036000E, 0x00360018, 0x00360017, 0x00360005, 0x00360006, 0x00360007, 0x00360001, 0x00360001, 0x00360001,
        },
    },
};

NpcGroupList N(npcGroupList_8024722C) = {
    NPC_GROUP(N(npcGroup_8024687C), 0x00000000),
    NPC_GROUP(N(npcGroup_80246C5C), 0x160B0002),
    NPC_GROUP(N(npcGroup_80246E4C), 0x160F0002),
    {},
};

s32 pad_00725C[] = {
    0x00000000,
};

// rodata: D_80247260_C7DF40

// rodata: D_80247268_C7DF48

// rodata: D_80247270_C7DF50

// rodata: jtbl_80247278_C7DF58

// rodata: D_80247408_C7E0E8

// rodata: D_80247410_C7E0F0

// rodata: D_80247418_C7E0F8

// rodata: D_80247420_C7E100

// rodata: D_80247428_C7E108

// rodata: D_80247430_C7E110

// rodata: D_80247438_C7E118

// rodata: jtbl_80247440_C7E120

s32 pad_007494[] = {
    0x00000000, 0x00000000, 0x00000000,
};
