#include "osr_01.h"

s32 pad_000044[3];
s32 pad_00035C[1];
s32 pad_000AB8[2];
Script N(script_80240B40);
Script N(script_80240BB4);
s32 pad_000C1C[1];
Script N(script_UpdateTexturePan_80240C20);
Script N(script_ExitWalk_80240CBC);
Script N(script_ExitWalk_80240D18);
Script N(script_80240D74);
Script N(script_80240DBC);
Script N(main);
s32 pad_001158[2];
s32 unk_missing_8024118C[11];
s32 N(unk_802411B8)[1];
Script N(script_802411BC);
Script N(script_802411EC);
s32 N(unk_8024121C)[1];
s32 N(unk_80241220)[1];
Script N(script_80241224);
Script N(script_80241368);
Script N(script_802413B8);
Script N(script_80241438);
Script N(script_8024175C);
Script N(script_802417CC);
Script N(script_80241AC4);
s32 N(unk_80241C18)[2];
Script N(script_Interact_80241C20);
Script N(script_Init_80241EC0);
StaticNpc N(npcGroup_80241F4C)[1];
NpcGroupList N(npcGroupList_8024213C);
s32 pad_002154[3];
const char D_80242160_AB2150[8]; // "hos_bg"
const char D_80242168_AB2158[8]; // "mac_01"
const char D_80242170_AB2160[8]; // "hos_00"
const char D_80242178_AB2168[8]; // "mac_04"

// text: func_Init_AAFFF0

s32 pad_000044[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240050_AB0040

// text: func_80240174_AB0164

s32 pad_00035C[] = {
    0x00000000,
};

// text: func_80240360_AB0350

// text: func_80240414_AB0404

// text: func_80240478_AB0468

// text: func_802404D4_AB04C4

// text: func_802406A4_AB0694

// text: func_802406F8_AB06E8

// text: func_80240730_AB0720

// text: func_802407CC_AB07BC

// text: func_802408BC_AB08AC

// text: func_80240A48_AB0A38

// text: func_80240A8C_AB0A7C

s32 pad_000AB8[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 0.0f, 0.0f, 604.0f, 0.0f },
    { 612.0f, 0.0f, 111.0f, 270.0f },
    { 0.0f, 0.0f, -290.0f, 180.0f },
    { 0.0f, -1000.0f, 0.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190009,
};

Script N(script_80240B40) = SCRIPT({
    match SI_SAVE_VAR(0) {
        0xFFFFFFF3..5
        SetMusicTrack(0, 74, 0, 6);
        else {
            SetMusicTrack(0, 0, 0, 6);
        }
    }
});

Script N(script_80240BB4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 3) {
        SetMusicTrack(0, 98, 0, 8);
    } else {
        spawn N(script_80240B40);
    }
});

s32 pad_000C1C[] = {
    0x00000000,
};

Script N(script_UpdateTexturePan_80240C20) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240050_AB0040();
                    return;
                }
            }
        }
    }
    func_80240174_AB0164();
});

Script N(script_ExitWalk_80240CBC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80242168_AB2158, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240D18) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80242170_AB2160, 0);
    sleep 100;
});

Script N(script_80240D74) = SCRIPT({
    bind N(script_ExitWalk_80240CBC) to 0x80000 0;
    bind N(script_ExitWalk_80240D18) to 0x80000 2;
});

Script N(script_80240DBC) = SCRIPT({
    group 0;
    SetTexPanner(14, 1);
    SetTexPanner(15, 2);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFF38;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 0;
        SI_VAR(6) = 1;
        SI_VAR(7) = 0;
        SI_VAR(8) = 0;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240C20);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 300;
        SI_VAR(5) = 0;
        SI_VAR(6) = 0;
        SI_VAR(7) = 0;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240C20);
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 25;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SI_AREA_FLAG(1) = 0;
    SI_SAVE_FLAG(1963) = 1;
    MakeNpcs(0, N(npcGroupList_8024213C));
    await N(script_80240BB4);
    spawn N(script_80240DBC);
    PlaySoundAtF(0x8000005A, 1, 300, 2, 399);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 3 {
            EnableModel(40, 0);
            spawn N(script_80241AC4);
        } else {
            SI_VAR(0) = N(script_80240D74);
            spawn EnterWalk;
        }
    }
    sleep 1;
});

s32 pad_001158[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80241160) = {
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

s32 unk_missing_8024118C[] = {
    0x00000000, 0x00170013, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00630000,
};

s32 N(unk_802411B8)[] = {
    0x00000000,
};

Script N(script_802411BC) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_802411EC) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_8024121C)[] = {
    0x00000000,
};

s32 N(unk_80241220)[] = {
    0x00000000,
};

Script N(script_80241224) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_802404D4_AB04C4(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |= c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802406F8_AB06E8(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80241368) = {
    SI_CMD(ScriptOpcode_CALL, func_80240730_AB0720, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241224), 0x10, 0, 0x80242180, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802406A4_AB0694, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802413B8) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_802408BC_AB08AC(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_80241438) = SCRIPT({
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
            func_802408BC_AB08AC(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |= c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_802413B8);
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
    func_802406F8_AB06E8(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024175C) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240730_AB0720, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80241438), 0x10, 0, 0x80242180, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802406A4_AB0694, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802417CC) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80240A48_AB0A38();
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
            await N(script_8024175C);
            match SI_VAR(0) {
                == -1 {
                    DisablePartnerAI(0);
                    sleep 1;
                    SpeakToPlayer(0xFFFFFFFC, 0x40006, 0x40001, 5, SI_VAR(8));
                    EnablePartnerAI();
                    SI_VAR(12) = 1;
                } else {
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
                        await N(script_802411BC);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_80240A8C_AB0A7C();
});

Script N(script_80241AC4) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(10);
    SetNpcFlagBits(0xFFFFFFFC, 512, 0);
    UseSettingsFrom(0, 0, 0, 400);
    SetPanTarget(0, 0, 0, 400);
    SetCamDistance(0, 400.0);
    SetCamPitch(0, 3.0, -10.0);
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 30;
    SpeakToPlayer(0, 0x830004, 0x830001, 0, 0xA006F);
    sleep 10;
    GotoMap(D_80242178_AB2168, 4);
    sleep 100;
});

s32 N(unk_80241C18)[] = {
    0x00000046, 0x00000000,
};

Script N(script_Interact_80241C20) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFF96 {
            SI_VAR(0) = 0x90000;
        }
        < 0xFFFFFF9A {
            SI_VAR(0) = 0x90001;
        }
        < 0xFFFFFFB5 {
            SI_VAR(0) = 0x90002;
        }
        < 0xFFFFFFCB {
            if (SI_SAVE_FLAG(284) == 0) {
                SI_VAR(0) = 0x90003;
            } else {
                SI_VAR(0) = 0x90004;
            }
        }
        < 0xFFFFFFF1 {
            SI_VAR(0) = 0x90005;
        }
        < 7 {
            if (SI_SAVE_FLAG(269) == 0) {
                SI_VAR(0) = 0x90006;
            } else {
                if (SI_SAVE_FLAG(266) == 0) {
                    SI_VAR(0) = 0x90007;
                } else {
                    SI_VAR(0) = 0x90008;
                }
            }
        }
        < 10 {
            SI_VAR(0) = 0x90009;
        }
        < 39 {
            SI_VAR(0) = 0x9000A;
        }
        < 43 {
            SI_VAR(0) = 0x9000B;
        }
        < 57 {
            SI_VAR(0) = 0x9000C;
        }
        < 61 {
            SI_VAR(0) = 0x9000D;
        }
        < 89 {
            SI_VAR(0) = 0x9000E;
        }
        < 96 {
            SI_VAR(0) = 0x9000F;
        }
    }
    SpeakToPlayer(-1, 0x830004, 0x830001, 0, SI_VAR(0));
    func_802407CC_AB07BC(0, 0x830004, 0x830001, 70, 71, 0x90010, 0x90011, 0x90012, 0x90013, N(unk_80241C18));
    await N(script_802417CC);
    if (SI_VAR(12) == 1) {
        return;
    }
});

Script N(script_Init_80241EC0) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 3 {
            SetNpcPos(-1, 0, 0, 400);
            SetNpcYaw(-1, 90);
        } else {
            BindNpcInteract(-1, N(script_Interact_80241C20));
        }
    }
});

StaticNpc N(npcGroup_80241F4C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241160),
        .pos = { 25.0, 0.0, 130.0 },
        .flags = 0x00112D09,
        .init = N(script_Init_80241EC0),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00830001, 0x00830002, 0x00830003, 0x00830003, 0x00830001, 0x00830001, 0x00830006, 0x00830006, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003, 0x00830003,
        },
        .tattle = 0x1A000C,
    },
};

NpcGroupList N(npcGroupList_8024213C) = {
    NPC_GROUP(N(npcGroup_80241F4C), 0x00000000),
    {},
};

s32 pad_002154[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80242160_AB2150

// rodata: D_80242168_AB2158

// rodata: D_80242170_AB2160

// rodata: D_80242178_AB2168
