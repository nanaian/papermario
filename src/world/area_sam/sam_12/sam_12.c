#include "sam_12.h"

s32 pad_000088[2];
Script N(script_802403F0);
s32 pad_00041C[1];
Script N(script_ExitWalk_80240420);
Script N(script_80240470);
Script N(main);
s32 pad_0005BC[1];
Script N(script_802405C0);
Script N(script_Aux_802405FC);
Script N(script_Idle_8024060C);
Script N(script_Init_80240628);
StaticNpc N(npcGroup_80240674)[1];
NpcGroupList N(npcGroupList_80240864);
s32 pad_00087C[1];
s32 N(intTable_80240880)[5];
Script N(script_80240894);
Script N(script_802409E0);
Script N(script_80240A78);
Script N(script_80240B30);
Script N(script_80240B84);
s32 pad_001568[2];
Script N(script_80241570);
s32 pad_001604[3];
const char D_80241610_D4D030[8]; // "sam_10"
s32 pad_001618[2];

// text: func_80240000_D4BA20

s32 pad_000088[] = {
    0x00000000, 0x00000000,
};

// text: func_80240090_D4BAB0

// text: func_802400C0_D4BAE0

// text: func_80240194_D4BBB4

// text: func_80240238_D4BC58

EntryList N(entryList) = {
    { -372.0f, 15.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190135,
};

Script N(script_802403F0) = SCRIPT({
    SetMusicTrack(0, 61, 0, 8);
});

s32 pad_00041C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240420) = SCRIPT({
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80241610_D4D030, 2);
    sleep 100;
});

Script N(script_80240470) = SCRIPT({
    bind N(script_ExitWalk_80240420) to 0x80000 13;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 43;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(0, N(npcGroupList_80240864));
    await N(script_80241570);
    await N(script_802403F0);
    if (SI_SAVE_VAR(0) < 76) {
        spawn N(script_80240B84);
    }
    SI_VAR(0) = N(script_80240470);
    spawn EnterWalk;
    sleep 1;
    SetCamSpeed(0, 4.0);
});

s32 pad_0005BC[] = {
    0x00000000,
};

Script N(script_802405C0) = SCRIPT({

});

NpcSettings N(npcSettings_802405D0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x3C,
    .radius = 0x3C,
    .otherAI = &N(script_802405C0),
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

Script N(script_Aux_802405FC) = SCRIPT({

});

Script N(script_Idle_8024060C) = SCRIPT({
    func_80240000_D4BA20();
});

Script N(script_Init_80240628) = SCRIPT({
    BindNpcAux(-1, N(script_Aux_802405FC));
    BindNpcIdle(-1, N(script_Idle_8024060C));
    EnableNpcShadow(-1, 0);
});

StaticNpc N(npcGroup_80240674)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802405D0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00400F09,
        .init = N(script_Init_80240628),
        .yaw = 180,
        .dropFlags = 0x80,
        .animations = {
            0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001, 0x00B10001,
        },
    },
};

NpcGroupList N(npcGroupList_80240864) = {
    NPC_GROUP(N(npcGroup_80240674), 0x00000001),
    {},
};

s32 pad_00087C[] = {
    0x00000000,
};

s32 N(intTable_80240880)[] = {
    0xF24B4280, 0xF24BBA80, 0xF24B9280, 0xF24B6A80, 0xF24B4280,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80240894) = {
    SI_CMD(ScriptOpcode_LABEL, 0),
    SI_CMD(ScriptOpcode_CALL, RandInt, 90, SI_VAR(0)),
    SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 30),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, RandInt, 100, SI_VAR(1)),
    SI_CMD(ScriptOpcode_IF_LT, SI_VAR(1), 80),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 1),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_SET, SI_VAR(1), 2),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_LOOP, SI_VAR(1)),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240880)),
        SI_CMD(ScriptOpcode_LOOP, 5),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CALL, func_802CFD30, 0, 13, SI_FIXED(0.0), SI_VAR(0), SI_FIXED(200.0), SI_FIXED(100.0)),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, func_802CFD30, 0, 13, SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(0.0), SI_FIXED(100.0)),
        SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
    SI_CMD(ScriptOpcode_END_LOOP),
    SI_CMD(ScriptOpcode_GOTO, 0),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_802409E0) = SCRIPT({
    PlaySoundAt(8261, 0, 230, 30, 0);
0:
    PlayEffect(17, 2, 230, 30, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0);
    sleep 20;
    goto 0;
});

Script N(script_80240A78) = SCRIPT({
    PlaySoundAtNpc(0, 177, 0);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 30;
    loop 8 {
        PlayEffect(17, 2, SI_VAR(0), SI_VAR(1), SI_VAR(2), 30, 0, 0, 0, 0, 0, 0, 0, 0);
        sleep 10;
    }
});

Script N(script_80240B30) = SCRIPT({
    SetPlayerAnimation(0x8001D);
    loop {
        PlaySoundAtPlayer(815, 0);
        sleep 60;
    }
});

Script N(script_80240B84) = SCRIPT({
1:
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep 1;
    if (SI_VAR(0) < 0) {
        goto 1;
    }
    DisablePlayerInput(1);
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        func_802D2B6C();
        sleep 20;
    }
    UseSettingsFrom(0, 160, 0, 0);
    SetPanTarget(0, 160, 0, 0);
    PanToTarget(0, 0, 1);
    SetPlayerSpeed(3.0);
    PlayerMoveTo(90, 0, 0);
    WaitForCam(0, 1.0);
    sleep 20;
    SI_VAR(9) = spawn N(script_802409E0);
    sleep 100;
    SetNpcPos(0, 200, 50, 0);
    spawn N(script_80240A78);
    PlaySoundAtNpc(0, 313, 0);
    SI_VAR(0) = 0.0;
    loop 100 {
        SI_VAR(0) += 1.0;
        func_802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    SI_VAR(8) = spawn N(script_80240894);
    sleep 30;
    SpeakToPlayer(0, 0xB10002, 0xB10001, 0, 0x120133);
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 225.0);
    SetCamPitch(0, 15.0, -7.5);
    SetCamPosB(0, 500.0, 60.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0xB10002, 0xB10001, 0, 0x120134);
    SetPanTarget(0, 160, 0, 0);
    SetCamDistance(0, 400.0);
    SetCamPitch(0, 15.0, -10.0);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0xB10002, 0xB10001, 0, 0x120135);
    SI_VAR(10) = spawn N(script_80240B30);
    EndSpeech(0, 0xB10002, 0xB10001, 0);
    SI_VAR(0) = 0.0;
    loop 50 {
        SI_VAR(0) += 5.1005859375;
        func_80240090_D4BAB0(SI_VAR(0));
        sleep 1;
    }
    func_80240238_D4BC58(0xFFFFFFA6, 6, 0xFFFFFFFB, 2, 0, SI_VAR(7));
    spawn {
        SI_MAP_FLAG(0) = 0;
        SI_VAR(0) = 255.0;
        loop 100 {
            SI_VAR(0) += -2.5498046875;
            func_80240090_D4BAB0(SI_VAR(0));
            sleep 1;
        }
        SI_MAP_FLAG(0) = 1;
    }
    ContinueSpeech(0, 0xB10002, 0xB10001, 0, 0x120136);
6:
    if (SI_MAP_FLAG(0) == 0) {
        sleep 1;
        goto 6;
    }
    sleep 30;
    RemoveEffect(SI_VAR(7));
    kill SI_VAR(10);
    PlaySoundAtPlayer(753, 0);
    SetPlayerAnimation(0x8001E);
    sleep 30;
    SetPlayerAnimation(0x10029);
    sleep 20;
    SetPlayerAnimation(0x80007);
    sleep 30;
    GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 225.0);
    SetCamPitch(0, 15.0, -7.5);
    SetCamPosB(0, 500.0, 60.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0xB10002, 0xB10001, 0, 0x120137);
    sleep 30;
    SetPanTarget(0, 230, 0, 0);
    SetCamPosB(0, 230.0, 60.0);
    SetCamSpeed(0, 1.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    spawn {
        loop 5 {
            func_80240194_D4BBB4(232, 31, 0);
            sleep 10;
        }
    }
    sleep 10;
    SI_VAR(0) = 0.0;
    loop 50 {
        SI_VAR(0) += 0.6201171875;
        func_802400C0_D4BAE0(SI_MAP_VAR(0), 230.0, SI_VAR(0), 0.0);
        sleep 1;
    }
    SetPanTarget(0, 160, 0, 0);
    SetCamDistance(0, 400.0);
    SetCamPitch(0, 15.0, -10.0);
    SetCamSpeed(0, 90.0);
    WaitForCam(0, 1.0);
    SpeakToPlayer(0, 0xB10002, 0xB10001, 0, 0x120138);
    kill SI_VAR(8);
    kill SI_VAR(9);
    spawn {
        SI_VAR(0) = 30;
        loop 5 {
            SI_VAR(0) -= 5;
            PlayEffect(17, 2, 230, 30, 0, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 20;
        }
    }
    SI_VAR(0) = 100.0;
    loop 100 {
        SI_VAR(0) += -1.0;
        func_802CFD30(0, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
    }
    SetNpcPos(0, 0, 0xFFFFFC18, 0);
    SI_SAVE_VAR(0) = 76;
    PanToTarget(0, 0, 0);
    DisablePlayerInput(0);
});

s32 pad_001568[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241570) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 76 {
            MakeItemEntity(108, 230, 0, 0, 17, SI_SAVE_FLAG(1433));
            SI_MAP_VAR(0) = SI_VAR(0);
        }
        >= 76 {
            MakeItemEntity(108, 230, 31, 0, 17, SI_SAVE_FLAG(1433));
        }
    }
});

s32 pad_001604[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241610_D4D030

s32 pad_001618[] = {
    0x00000000, 0x00000000,
};
