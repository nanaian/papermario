#include "arn_03.h"

s32 pad_00171C[1];
Script N(script_80241780);
s32 pad_001828[2];
Script N(script_ExitWalk_80241830);
Script N(script_ExitWalk_8024188C);
Script N(script_802418E8);
Script N(script_EnterWalk_80241930);
Script N(main);
s32 pad_001BB8[2];
Script N(script_NpcAI_80241BF0);
s32 N(unk_80241C68)[1];
Script N(script_80241C6C);
Script N(script_80241C9C);
s32 N(unk_80241CCC)[1];
s32 N(unk_80241CD0)[1];
Script N(script_80241CD4);
Script N(script_80241E18);
Script N(script_80241E68);
Script N(script_Interact_80241EB0);
Script N(script_Idle_80242064);
Script N(script_Init_802424E0);
Script N(script_Interact_8024254C);
Script N(script_Init_802428A8);
Script N(script_802428CC);
Script N(script_802429D4);
Script N(script_80242B0C);
Script N(script_80242C60);
Script N(script_Interact_80242DC4);
Script N(script_Init_802431A4);
Script N(script_Interact_802431C8);
Script N(script_Init_80243328);
Script N(script_Init_8024334C);
StaticNpc N(npcGroup_80243378)[1];
StaticNpc N(npcGroup_80243568)[1];
StaticNpc N(npcGroup_80243758)[1];
StaticNpc N(npcGroup_80243948)[1];
StaticNpc N(npcGroup_80243B38)[1];
Script N(script_Idle_80243D28);
Script N(script_Init_80243E90);
Script N(script_Init_80243ECC);
Script N(script_Init_80243F08);
Script N(script_Init_80243F44);
StaticNpc N(npcGroup_80243F80)[4];
NpcGroupList N(npcGroupList_80244740);
NpcGroupList N(npcGroupList_80244788);
s32 pad_0047DC[1];
Script N(script_MakeEntities);
s32 pad_00484C[1];
const char D_80244850_BE35E0[8]; // "arn_07"
const char D_80244858_BE35E8[8]; // "arn_05"
s32 pad_004A14[3];

// text: func_80240000_BDED90

// text: func_80240158_BDEEE8

// text: N(UnkNpcAIFunc1)

// text: func_802404C0_BDF250

// text: func_8024067C_BDF40C

// text: N(NpcJumpFunc2)

// text: N(NpcJumpFunc)

// text: func_8024081C_BDF5AC

// text: func_8024094C_BDF6DC

// text: N(UnkNpcDurationFlagFunc)

// text: func_80240AD4_BDF864

// text: func_80240B94_BDF924

// text: func_80240E90_BDFC20

// text: func_80241068_BDFDF8

// text: func_8024113C_BDFECC

// text: func_802412B0_BE0040

// text: func_80241364_BE00F4

// text: func_802413C8_BE0158

// text: func_80241424_BE01B4

// text: func_802415F4_BE0384

// text: func_80241648_BE03D8

// text: func_80241680_BE0410

s32 pad_00171C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -76.0f, 165.0f, 150.0f, 90.0f },
    { 576.0f, 225.0f, 150.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900BC,
};

Script N(script_80241780) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 29, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
    PlayAmbientSounds(1);
});

s32 pad_001828[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_80241830) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80244850_BE35E0, 1);
    sleep 100;
});

Script N(script_ExitWalk_8024188C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80244858_BE35E8, 0);
    sleep 100;
});

Script N(script_802418E8) = SCRIPT({
    bind N(script_ExitWalk_80241830) to 0x80000 1;
    bind N(script_ExitWalk_8024188C) to 0x80000 5;
});

Script N(script_EnterWalk_80241930) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_802418E8);
        return;
    }
    if (SI_SAVE_VAR(0) < 0xFFFFFFDE) {
        SetPlayerPos(0xFFFFFF51, 165, 160);
        InterpPlayerYaw(90, 0);
        SetNpcPos(0xFFFFFFFC, 0xFFFFFF51, 165, 160);
        InterpNpcYaw(0xFFFFFFFC, 90, 0);
        SetPlayerSpeed(4);
        PlayerMoveTo(0xFFFFFFC9, 160, 0);
        spawn N(script_802418E8);
        return;
    }
    SI_VAR(0) = N(script_802418E8);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 34;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SI_AREA_FLAG(3) = 0;
    SI_AREA_FLAG(4) = 0;
    SI_AREA_FLAG(5) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        MakeNpcs(0, N(npcGroupList_80244740));
    } else {
        MakeNpcs(0, N(npcGroupList_80244788));
    }
    if (SI_SAVE_FLAG(1020) == 1) {
        SI_MAP_VAR(0) = 450;
        SI_MAP_VAR(1) = 450;
    }
    await N(script_MakeEntities);
    spawn N(script_80241780);
    spawn N(script_EnterWalk_80241930);
    sleep 1;
});

s32 pad_001BB8[] = {
    0x00000000, 0x00000000,
};

NpcAISettings N(aISettings_80241BC0) = {
    .moveSpeed = 1.0,
    .moveTime = 0x19,
    .waitTime = 0x1E,
    .alertRadius = 50.0,
    .unk_10 = 50.0,
    .unk_14 = 0xA,
    .chaseSpeed = 0.0,
    .unk_1C = 0,
    .unk_20 = 0,
    .chaseRadius = 100.0,
    .unk_28 = 80.0,
    .unk_2C = 0x1,
};

Script N(script_NpcAI_80241BF0) = SCRIPT({
    func_8024113C_BDFECC(N(aISettings_80241BC0));
});

NpcSettings N(npcSettings_80241C10) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = &N(script_NpcAI_80241BF0),
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_80241C3C) = {
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

s32 N(unk_80241C68)[] = {
    0x00000000,
};

Script N(script_80241C6C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80241C9C) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80241CCC)[] = {
    0x00000000,
};

s32 N(unk_80241CD0)[] = {
    0x00000000,
};

Script N(script_80241CD4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80241424_BE01B4(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80241648_BE03D8(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241E18) = {
    SI_CMD(ScriptOpcode_CALL, func_80241680_BE0410, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241CD4), 0x10, 0, 0x80244A20, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802415F4_BE0384, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80241E68) = SCRIPT({
    SetPlayerAnimation(0x10002);
    sleep 1;
    SetPlayerAnimation(0x80007);
    sleep 20;
});

Script N(script_Interact_80241EB0) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            if (SI_AREA_FLAG(2) == 0) {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0073);
                SI_AREA_FLAG(2) = 1;
            } else {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0074);
                SI_AREA_FLAG(2) = 0;
            }
        }
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0075);
        }
        < 0xFFFFFFF2 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0076);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0077);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0078);
            SetPlayerAnimation(0x10002);
            sleep 10;
            SetPlayerAnimation(0x80007);
            sleep 20;
            EndSpeech(-1, 0x950104, 0x950101, 0);
        }
    }
});

Script N(script_Idle_80242064) = SCRIPT({
    DisablePlayerInput(1);
    sleep 25;
    spawn {
        sleep 50;
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamDistance(0, 325);
        SetCamSpeed(0, 4.0);
        SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        PanToTarget(0, 0, 1);
    }
    spawn {
        sleep 20;
        GetCurrentPartnerID(SI_VAR(6));
        if (SI_VAR(6) != 9) {
            BringPartnerOut(9);
            DisablePartnerAI(0);
            sleep 1;
            NpcFaceNpc(0xFFFFFFFC, -1, 0);
            sleep 5;
            SetNpcJumpscale(0xFFFFFFFC, 0);
            if (SI_VAR(6) == 4) {
                NpcJump0(0xFFFFFFFC, 0xFFFFFFAF, 176, 171, 20);
            } else {
                NpcJump0(0xFFFFFFFC, 0xFFFFFFAF, 186, 171, 20);
            }
            EnablePartnerAI();
        }
    }
    SetNpcJumpscale(-1, 0);
    NpcJump0(-1, 0xFFFFFFF8, 186, 159, 60);
    sleep 15;
    DisablePartnerAI(0);
    InterpNpcYaw(-1, 0xFFFFFFFC, 0);
    SpeakToPlayer(-1, 0x950104, 0x950101, 5, 0xE006E);
    InterpNpcYaw(0xFFFFFFFC, -1, 0);
    SpeakToPlayer(0xFFFFFFFC, 0x50004, 0x50001, 5, 0xE006F);
    SpeakToPlayer(-1, 0x950104, 0x950101, 5, 0xE0070);
    InterpNpcYaw(0xFFFFFFFC, -1, 0);
    SpeakToPlayer(0xFFFFFFFC, 0x50004, 0x50001, 5, 0xE0071);
    SpeakToPlayer(-1, 0x950104, 0x950101, 5, 0xE0072);
    EnablePartnerAI();
    sleep 10;
    GetCurrentPartnerID(SI_VAR(6));
    if (SI_VAR(6) != 9) {
        PutPartnerAway();
    }
    spawn {
        NpcMoveTo(-1, 30, 125, 30);
        InterpNpcYaw(-1, 270, 0);
    }
    0x802CF56C(2);
    sleep 15;
    SI_SAVE_VAR(0) = 0xFFFFFFDE;
    DisablePlayerInput(0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 3);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
});

Script N(script_Init_802424E0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFDE) {
        SetNpcPos(-1, 175, 240, 145);
        BindNpcIdle(-1, N(script_Idle_80242064));
    }
    BindNpcInteract(-1, N(script_Interact_80241EB0));
});

Script N(script_Interact_8024254C) = SCRIPT({
    if (SI_MAP_VAR(0) != 0) {
        if (SI_MAP_VAR(0) >= SI_MAP_VAR(1)) {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0081);
            SI_VAR(0) = 118;
            SI_VAR(1) = 1;
            await N(script_80241C6C);
            AddKeyItem(118);
            SI_MAP_VAR(0) = 0;
            SI_SAVE_FLAG(1015) = 1;
            SI_SAVE_FLAG(1020) = 0;
            return;
        } else {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0080);
            return;
        }
    }
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            if (SI_AREA_FLAG(3) == 0) {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0079);
                SI_AREA_FLAG(3) = 1;
            } else {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE007A);
                SI_AREA_FLAG(3) = 0;
            }
        }
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE007B);
        }
        < 0xFFFFFFF2 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE007C);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE007D);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE007E);
        }
    }
    if (SI_SAVE_FLAG(1015) == 0) {
        if (SI_SAVE_VAR(348) == 18) {
            await N(script_80241E68);
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE007F);
            EndSpeech(-1, 0x950104, 0x950101, 0);
            SI_MAP_VAR(0) = 0;
            SI_MAP_VAR(1) = 450;
            SI_SAVE_FLAG(1020) = 1;
            spawn {
                loop {
                    SI_MAP_VAR(0) += 1;
                    sleep 1;
                    if (SI_MAP_VAR(0) >= SI_MAP_VAR(1)) {
                        break;
                    }
                }
            }
        }
    }
});

Script N(script_Init_802428A8) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_8024254C));
});

Script N(script_802428CC) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(0) > SI_VAR(3)) {
        SI_VAR(0) += 60;
        SetNpcYaw(4, 90);
    } else {
        SI_VAR(0) -= 60;
        SetNpcYaw(4, 270);
    }
    SI_VAR(1) += 20;
    SetNpcPos(4, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    0x802CFD30(4, 7, 0, 0, 0, 0);
    sleep 1;
});

Script N(script_802429D4) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(0) > SI_VAR(3)) {
        SI_VAR(0) += 30;
    } else {
        SI_VAR(0) -= 30;
    }
    spawn {
        MakeLerp(0, 255, 40, 0);
    10:
        UpdateLerp();
        0x802CFD30(4, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    NpcMoveTo(4, SI_VAR(0), SI_VAR(2), 40);
});

Script N(script_80242B0C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    GetNpcPos(-1, SI_VAR(3), SI_VAR(4), SI_VAR(5));
    if (SI_VAR(0) > SI_VAR(3)) {
        SI_VAR(0) += 60;
    } else {
        SI_VAR(0) -= 60;
    }
    spawn {
        MakeLerp(255, 0, 40, 0);
    10:
        UpdateLerp();
        0x802CFD30(4, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 1) {
            goto 10;
        }
    }
    NpcMoveTo(4, SI_VAR(0), SI_VAR(2), 40);
    SetNpcPos(4, 0, 0xFFFFFC18, 0);
});

Script N(script_80242C60) = SCRIPT({
    await N(script_802429D4);
    SI_MAP_VAR(2) = 0;
    SI_MAP_VAR(3) = 0;
    spawn {
        sleep 25;
        SetPlayerAnimation(0x80017);
        SetNpcAnimation(-1, 0x950109);
        loop {
            if (SI_MAP_VAR(2) == 1) {
                break;
            }
            sleep 1;
        }
        SetPlayerAnimation(0x10002);
        SetNpcAnimation(-1, 0x950101);
    }
    SetNpcAnimation(4, 0x950108);
    EndSpeech(4, 0x950108, 0x950108, 5);
    sleep 30;
    SetNpcAnimation(4, 0x950101);
    sleep 10;
    await N(script_80242B0C);
    SI_MAP_VAR(2) = 1;
    sleep 15;
});

Script N(script_Interact_80242DC4) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            if (SI_AREA_FLAG(4) == 0) {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0082);
                SI_AREA_FLAG(4) = 1;
            } else {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0083);
                SI_AREA_FLAG(4) = 0;
            }
        }
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0084);
        }
        < 0xFFFFFFF2 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0085);
        }
        < 39 {
            DisablePartnerAI(0);
            DisablePlayerPhysics(1);
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(2) += 0xFFFFFFEC;
                SetNpcSpeed(0xFFFFFFFC, 2.0);
                NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 0);
                NpcFaceNpc(0xFFFFFFFC, -1, 1);
            }
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0086);
            await N(script_802428CC);
            PlayerFaceNpc(4, 1);
            NpcFaceNpc(0xFFFFFFFC, 4, 1);
            SpeakToPlayer(4, 0x950104, 0x950101, 5, 0xE0087);
            await N(script_80242C60);
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0088);
            DisablePlayerPhysics(0);
            EnablePartnerAI();
        }
        >= 39 {
            DisablePartnerAI(0);
            DisablePlayerPhysics(1);
            spawn {
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SI_VAR(2) += 0xFFFFFFEC;
                SetNpcSpeed(0xFFFFFFFC, 2.0);
                NpcMoveTo(0xFFFFFFFC, SI_VAR(0), SI_VAR(2), 0);
                NpcFaceNpc(0xFFFFFFFC, -1, 1);
            }
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0089);
            await N(script_802428CC);
            PlayerFaceNpc(4, 1);
            NpcFaceNpc(0xFFFFFFFC, 4, 1);
            SpeakToPlayer(4, 0x950104, 0x950101, 5, 0xE008A);
            await N(script_80242C60);
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE008B);
            DisablePlayerPhysics(0);
            EnablePartnerAI();
        }
    }
});

Script N(script_Init_802431A4) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242DC4));
});

Script N(script_Interact_802431C8) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE6 {
            if (SI_AREA_FLAG(5) == 0) {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE008C);
                SI_AREA_FLAG(5) = 1;
            } else {
                SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE008D);
                SI_AREA_FLAG(5) = 0;
            }
        }
        < 0xFFFFFFF0 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE008E);
        }
        < 0xFFFFFFF2 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE008F);
        }
        < 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0090);
        }
        >= 39 {
            SpeakToPlayer(-1, 0x950104, 0x950101, 0, 0xE0091);
        }
    }
});

Script N(script_Init_80243328) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_802431C8));
});

Script N(script_Init_8024334C) = SCRIPT({
    SetNpcPos(-1, 0, 0xFFFFFC18, 0);
});

StaticNpc N(npcGroup_80243378)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241C10),
        .pos = { 36.0, 185.0, 140.0 },
        .flags = 0x00000505,
        .init = N(script_Init_802424E0),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x00000024, 0x0000000A, 0x000000B9, 0x00000038, 0x0000000A, 0x000000B9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x000001DF, 0x000000D7, 0x000000C6, 0x00000096 },
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00AA,
    },
};

StaticNpc N(npcGroup_80243568)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_80241C3C),
        .pos = { 209.0, 185.0, 217.0 },
        .flags = 0x00000505,
        .init = N(script_Init_802428A8),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00AB,
    },
};

StaticNpc N(npcGroup_80243758)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_80241C10),
        .pos = { 379.0, 186.0, 186.0 },
        .flags = 0x00000505,
        .init = N(script_Init_802431A4),
        .yaw = 90,
        .dropFlags = 0x80,
        .movement = { 0x00000002, 0x0000017B, 0x0000000A, 0x000000BA, 0x0000018F, 0x0000000A, 0x000000BA, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFF8001, 0x000001DF, 0x000000D7, 0x000000C6, 0x00000096 },
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00AC,
    },
};

StaticNpc N(npcGroup_80243948)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_80241C3C),
        .pos = { 544.0, 235.0, 128.0 },
        .flags = 0x00000505,
        .init = N(script_Init_80243328),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
        .tattle = 0x1A00AD,
    },
};

StaticNpc N(npcGroup_80243B38)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_80241C3C),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000505,
        .init = N(script_Init_8024334C),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
};

Script N(script_Idle_80243D28) = SCRIPT({
    GetNpcPos(-1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(3) += 0xFFFFFFC4;
    SI_VAR(4) = SI_VAR(0);
    SI_VAR(4) += 60;
    loop {
        RandInt(5, SI_VAR(5));
        SI_VAR(6) =f SI_VAR(5);
        SI_VAR(6) *= 0.1005859375;
        SI_VAR(6) += 0.80078125;
        SetNpcSpeed(-1, SI_VAR(6));
        NpcMoveTo(-1, SI_VAR(3), SI_VAR(2), 0);
        RandInt(5, SI_VAR(5));
        SI_VAR(6) =f SI_VAR(5);
        SI_VAR(6) *= 0.1005859375;
        SI_VAR(6) += 0.80078125;
        SetNpcSpeed(-1, SI_VAR(6));
        NpcMoveTo(-1, SI_VAR(4), SI_VAR(2), 0);
    }
});

Script N(script_Init_80243E90) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80243D28));
    SetNpcFlagBits(-1, 16, 0);
});

Script N(script_Init_80243ECC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80243D28));
    SetNpcFlagBits(-1, 16, 0);
});

Script N(script_Init_80243F08) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80243D28));
    SetNpcFlagBits(-1, 16, 0);
});

Script N(script_Init_80243F44) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80243D28));
    SetNpcFlagBits(-1, 16, 0);
});

StaticNpc N(npcGroup_80243F80)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_80241C3C),
        .pos = { 36.0, 277.0, 140.0 },
        .flags = 0x00402705,
        .init = N(script_Init_80243E90),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
    {
        .id = 6,
        .settings = &N(npcSettings_80241C3C),
        .pos = { 180.0, 285.0, 182.0 },
        .flags = 0x00402705,
        .init = N(script_Init_80243ECC),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
    {
        .id = 7,
        .settings = &N(npcSettings_80241C3C),
        .pos = { 349.0, 286.0, 152.0 },
        .flags = 0x00402705,
        .init = N(script_Init_80243F08),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
    {
        .id = 8,
        .settings = &N(npcSettings_80241C3C),
        .pos = { 490.0, 324.0, 128.0 },
        .flags = 0x00402705,
        .init = N(script_Init_80243F44),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950101, 0x00950102, 0x00950103, 0x00950103, 0x00950101, 0x00950101, 0x00950100, 0x00950100, 0x0095010A, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103, 0x00950103,
        },
    },
};

NpcGroupList N(npcGroupList_80244740) = {
    NPC_GROUP(N(npcGroup_80243378), 0x00000000),
    NPC_GROUP(N(npcGroup_80243568), 0x00000000),
    NPC_GROUP(N(npcGroup_80243758), 0x00000000),
    NPC_GROUP(N(npcGroup_80243948), 0x00000000),
    NPC_GROUP(N(npcGroup_80243B38), 0x00000000),
    {},
};

NpcGroupList N(npcGroupList_80244788) = {
    NPC_GROUP(N(npcGroup_80243378), 0x00000000),
    NPC_GROUP(N(npcGroup_80243568), 0x00000000),
    NPC_GROUP(N(npcGroup_80243758), 0x00000000),
    NPC_GROUP(N(npcGroup_80243948), 0x00000000),
    NPC_GROUP(N(npcGroup_80243B38), 0x00000000),
    NPC_GROUP(N(npcGroup_80243F80), 0x00000000),
    {},
};

s32 pad_0047DC[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA564, 300, 237, 60, 0, 343, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1007));
    MakeEntity(0x802E9A18, 250, 237, 125, 0, 0x80000000);
});

s32 pad_00484C[] = {
    0x00000000,
};

// rodata: D_80244850_BE35E0

// rodata: D_80244858_BE35E8

// rodata: D_80244860_BE35F0

// rodata: D_80244868_BE35F8

// rodata: jtbl_80244870_BE3600

// rodata: jtbl_80244A00_BE3790

s32 pad_004A14[] = {
    0x00000000, 0x00000000, 0x00000000,
};

