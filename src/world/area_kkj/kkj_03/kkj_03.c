#include "kkj_03.h"

s32 pad_000018[2];
s32 pad_00032C[1];
Script N(script_802403A0);
Script N(script_UpdateTexturePan_80240450);
s32 pad_0004EC[1];
s32 N(displayList_802404F0)[32];
Script N(script_ExitDoubleDoor_80240570);
Script N(script_80240614);
Script N(script_EnterDoubleDoor_80240640);
Script N(main);
s32 pad_0008FC[1];
StaticNpc N(npcGroup_8024092C)[1];
NpcGroupList N(npcGroupList_80240B1C);
s32 pad_000B34[3];
Script N(script_80240B40);
Script N(script_80241054);
Script N(script_802410D4);
Script N(script_80241140);
s32 pad_0013E4[3];
const char D_802413F0_ACAB00[8]; // "kkj_02"
const char D_802413F8_ACAB08[8]; // "osr_04"
const char D_80241400_ACAB10[8]; // "osr_03"
s32 pad_001408[2];

// text: func_Init_AC9710

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: func_80240020_AC9730

// text: func_80240144_AC9854

s32 pad_00032C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -95.0f, 0.0f, 0.0f, 90.0f },
    { 630.0f, 0.0f, 0.0f, 90.0f },
    { 630.0f, 0.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x0,
};

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_802403A0) = {
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 0),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 63, 1, 5),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 3),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 63, 1, 4),
        SI_CMD(ScriptOpcode_CASE_ELSE),
            SI_CMD(ScriptOpcode_CALL, SetMusicTrack, 0, 107, 0, 8),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_UpdateTexturePan_80240450) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240020_AC9730();
                    return;
                }
            }
        }
    }
    func_80240144_AC9854();
});

s32 pad_0004EC[] = {
    0x00000000,
};

s32 N(displayList_802404F0)[] = {
    0xE7000000, 0x00000000, 0xD7000002, 0xFFFFFFFF, 0xE3000A01, 0x00100000, 0xE3000C00, 0x00080000,
    0xE3000D01, 0x00000000, 0xE3000F00, 0x00000000, 0xE3001001, 0x00000000, 0xE3001201, 0x00002000,
    0xE3001402, 0x00000C00, 0xFA000000, 0x4B1F13FF, 0xFB000000, 0xFF764D00, 0xFC10E5E0, 0x230B1D52,
    0xE200001C, 0x0C184B50, 0xD9FDFFFF, 0x00000000, 0xD9FFFFFF, 0x00200404, 0xDF000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_80240570) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    SI_VAR(2) = 71;
    SI_VAR(3) = 73;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_802413F0_ACAB00, 1);
    sleep 100;
});

Script N(script_80240614) = SCRIPT({
    bind N(script_ExitDoubleDoor_80240570) to TriggerFlag_WALL_INTERACT 0;
});

Script N(script_EnterDoubleDoor_80240640) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 71;
            SI_VAR(3) = 73;
            await EnterDoubleDoor;
            spawn N(script_80240B40);
        }
        == 1 {
            spawn N(script_80241140);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 25;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80240B1C));
    EnableGroup(165, 0);
    SetTexPanner(147, 0);
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
        spawn N(script_UpdateTexturePan_80240450);
    }
    0x802C90FC(147, 0, -1);
    0x802C9428(0, N(displayList_802404F0), 0);
    spawn N(script_802403A0);
    UseDoorSounds(2);
    spawn N(script_80240614);
    spawn N(script_EnterDoubleDoor_80240640);
    sleep 1;
});

s32 pad_0008FC[] = {
    0x00000000,
};

NpcSettings N(npcSettings_80240900) = {
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

StaticNpc N(npcGroup_8024092C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80240900),
        .pos = { 670.0, 0.0, -12.0 },
        .flags = 0x00020F0D,
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000, 0x000A0000,
        },
    },
};

NpcGroupList N(npcGroupList_80240B1C) = {
    NPC_GROUP(N(npcGroup_8024092C), 0x00000000),
    {},
};

s32 pad_000B34[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240B40) = SCRIPT({
    loop {
        sleep 1;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        if (SI_VAR(0) >= 525) {
            break;
        }
    }
    DisablePlayerInput(1);
    FadeOutMusic(0, 666);
    sleep 20;
    SetMusicTrack(0, 115, 0, 8);
    PlayerFaceNpc(0, 0);
    SetNpcAnimation(0, 0xA0002);
    SetNpcSpeed(0, 2.0);
    NpcMoveTo(0, 625, 0, 0);
    SetNpcAnimation(0, 0xA0001);
    sleep 10;
    SetNpcAnimation(0, 0xC0000);
    sleep 10;
    SetNpcAnimation(0, 0xC0026);
    SpeakToPlayer(0, 0xC0001, 0xC0026, 0, 75);
    SetNpcAnimation(0, 0xC0002);
    sleep 10;
    SetNpcAnimation(0, 0xA0001);
    spawn {
        SetCamProperties(0, 5.0, 600, 0, 0xFFFFFFF4, 325.0, 17.0, -9.0);
    }
    PlayerMoveTo(575, 0, 20);
    sleep 10;
    SetNpcAnimation(0, 0xC0000);
    sleep 10;
    SetNpcAnimation(0, 0xC0026);
    SpeakToPlayer(0, 0xC0001, 0xC0026, 0, 76);
    SetPlayerAnimation(0x10029);
    sleep 20;
    SetPlayerAnimation(0x10002);
    sleep 10;
    SpeakToPlayer(0, 0xC0001, 0xC0026, 0, 77);
    SetNpcAnimation(0, 0xC0002);
    sleep 10;
    SetNpcAnimation(0, 0xA0001);
    sleep 10;
    FadeOutMusic(0, 1000);
    spawn {
        sleep 10;
        PlayerMoveTo(590, 0, 10);
        sleep 5;
        PlaySoundAtPlayer(610, 0);
        ShowEmote(0, 0, 0xFFFFFFD3, 20, 0, 0, 0, 0, 0);
    }
    spawn {
        InterpNpcYaw(0, 90, 7);
        SetNpcAnimation(0, 0xA0002);
        NpcMoveTo(0, 640, 0, 10);
        SetNpcAnimation(0, 0xA0001);
        PlaySoundAtNpc(0, 610, 0);
        ShowEmote(0, 0, 0xFFFFFFD3, 20, 1, 0, 0, 0, 0);
        sleep 20;
        SetNpcAnimation(0, 0xC0011);
        sleep 60;
        InterpNpcYaw(0, 270, 7);
    }
    sleep 17;
    spawn {
        PlaySound(0x80000056);
        ShakeCam(0, 0, 200, 1.0);
    }
    sleep 60;
    GotoMap(D_802413F8_ACAB08, 0);
    sleep 100;
    DisablePlayerInput(0);
});

Script N(script_80241054) = SCRIPT({
    EnableTexPanning(160, 1);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) += 0xFFFFFF38;
        SetTexPanOffset(2, 0, SI_VAR(0), 0);
        sleep 1;
    }
});

Script N(script_802410D4) = SCRIPT({
    SI_VAR(0) = 0;
    loop {
        TranslateGroup(164, 0, SI_VAR(0), 0);
        SI_VAR(0) += 0xFFFFFFFE;
        sleep 1;
    }
});

Script N(script_80241140) = SCRIPT({
    DisablePlayerInput(1);
    SetNpcPos(0, 680, 0, 0xFFFFFFF1);
    EnableGroup(165, 1);
    spawn N(script_80241054);
    spawn N(script_802410D4);
    UseSettingsFrom(0, 600, 0, 0xFFFFFFF1);
    SetPanTarget(0, 600, 0, 0xFFFFFFF1);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    spawn {
        SetPlayerJumpscale(0);
        loop {
            InterpPlayerYaw(270, 0);
            PlayerJump1(550, 0, 0, 20);
            InterpPlayerYaw(90, 0);
            PlayerJump1(630, 0, 0, 20);
        }
    }
    spawn {
        loop {
            SetPlayerAnimation(0x10005);
            sleep 15;
            SetPlayerAnimation(0x60003);
            sleep 15;
        }
    }
    spawn {
        SetNpcAnimation(0, 0xA0004);
        loop {
            NpcMoveTo(0, 600, 0, 20);
            NpcMoveTo(0, 680, 0, 20);
        }
    }
    spawn {
        PlaySound(0x80000056);
        ShakeCam(0, 0, 200, 1.0);
    }
    sleep 100;
    GotoMap(D_80241400_ACAB10, 1);
    sleep 100;
    DisablePlayerInput(0);
});

s32 pad_0013E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802413F0_ACAB00

// rodata: D_802413F8_ACAB08

// rodata: D_80241400_ACAB10

s32 pad_001408[] = {
    0x00000000, 0x00000000,
};

