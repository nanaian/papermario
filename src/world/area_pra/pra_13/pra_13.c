#include "pra_13.h"

s32 pad_000018[2];
s32 N(unk_802402F0)[107];
s32 N(unk_8024068C)[121];
s32 pad_0015D4[3];
Script N(script_80241660);
s32 pad_00168C[1];
Script N(script_80241690);
Script N(script_802417A0);
Script N(script_80241848);
s32 N(unk_8024194C)[3];
s32 N(unk_80241958)[3];
s32 N(unk_80241964)[3];
s32 N(unk_80241970)[3];
s32 N(unk_8024197C)[5];
s32 N(unk_80241990)[5];
Script N(script_802419A4);
Script N(script_ExitWalk_80241A98);
s32 unk_missing_80241AF4[4];
Script N(script_ExitWalk_80241B04);
s32 unk_missing_80241B60[4];
Script N(script_80241B70);
Script N(script_80241C64);
Script N(script_EnterWalk_80241CE4);
Script N(script_80241EB0);
Script N(script_80241F80);
Script N(main);
s32 pad_002294[3];
s32 N(unk_802422CC)[1];
s32 N(unk_802422D0)[1];
Script N(script_802422D4);
Script N(script_80242418);
Script N(script_80242468);
Script N(script_8024259C);
Script N(script_802425EC);
Script N(script_Idle_8024267C);
Script N(script_Defeat_80242A70);
Script N(script_Init_80242CA0);
Script N(script_Init_80242DA4);
Script N(script_Init_80242EDC);
Script N(script_Init_80242F04);
StaticNpc N(npcGroup_80242F2C)[1];
StaticNpc N(npcGroup_8024311C)[3];
NpcGroupList N(npcGroupList_802436EC);
const char D_80243710_D67CF0[8]; // "pra_02"
const char D_80243718_D67CF8[8]; // "pra_14"

// text: func_Init_D645E0

s32 pad_000018[] = {
    0x00000000, 0x00000000,
};

// text: N(UnkFunc2)

// text: func_80240054_D64634

// text: func_802400EC_D646CC

// text: func_80240128_D64708

s32 N(unk_802402F0)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x3C013F36, 0x3421DB6E, 0x44810000, 0x27B000D8, 0x44050000, 0x0200202D, 0x00A0302D, 0x0C019DF0,
    0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0xC6200030, 0x3C014040,
    0x44811000, 0x46000007, 0x46020001, 0x8E250028, 0x8E26002C, 0x44070000, 0x0C019E40, 0x0200202D,
    0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x24040002, 0x0000282D, 0x00A0302D, 0x00A0382D,
    0x27A20018, 0x0C0B7710, 0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130,
    0xD7B40128, 0x03E00008, 0x27BD0140,
};

// text: func_8024049C_D64A7C

// text: func_80240500_D64AE0

s32 N(unk_8024068C)[] = {
    0x3C03800A, 0x8463A634, 0x3C07BF80, 0x27BDFEC0, 0xF7B40128, 0x4480A000, 0xAFB1011C, 0x0080882D,
    0xAFB00118, 0x27B00098, 0xAFBF0120, 0xF7B80138, 0xF7B60130, 0x00031080, 0x00431021, 0x00021080,
    0x00431023, 0x000218C0, 0x00431021, 0x000210C0, 0x3C01800B, 0x00220821, 0xC4361DEC, 0x4406A000,
    0x4600B587, 0x4405B000, 0x0200202D, 0x0C019EC8, 0xE7B40010, 0xC62C008C, 0x0C00A6C9, 0x00000000,
    0x44050000, 0x4406A000, 0x4407A000, 0x3C013F80, 0x4481C000, 0x27A40018, 0x0C019EC8, 0xE7B80010,
    0x0200202D, 0x27A50018, 0x0C019D80, 0x00A0302D, 0x4405B000, 0x4406A000, 0x4407C000, 0x0200202D,
    0x0C019EC8, 0xE7B40010, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0xE7B40010, 0x8E2500A8,
    0x4406A000, 0x4407C000, 0x0C019EC8, 0x0200202D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D,
    0x27B000D8, 0x3C013F36, 0x3421DB6E, 0x44810000, 0x0200202D, 0x44050000, 0x3C06BF36, 0x34C6DB6E,
    0x0C019DF0, 0x00A0382D, 0x27A40018, 0x0200282D, 0x0C019D80, 0x0080302D, 0x27B00058, 0x8E250028,
    0xC620002C, 0x8E270030, 0x46000007, 0x44060000, 0x0C019E40, 0x0200202D, 0x27A40018, 0x0200282D,
    0x0C019D80, 0x0080302D, 0xC62200A8, 0x3C0142B4, 0x44810000, 0x00000000, 0x4602003E, 0x00000000,
    0x4500000A, 0x24040001, 0x3C014387, 0x44810000, 0x00000000, 0x4600103C, 0x00000000, 0x45000004,
    0x27A20018, 0x3C041000, 0x34840001, 0x27A20018, 0x0000282D, 0x00A0302D, 0x00A0382D, 0x0C0B7710,
    0xAFA20010, 0x8FBF0120, 0x8FB1011C, 0x8FB00118, 0xD7B80138, 0xD7B60130, 0xD7B40128, 0x03E00008,
    0x27BD0140,
};

// text: func_80240870_D64E50

// text: func_80240D3C_D6531C

// text: N(SetPartnerFlagsA0000)

// text: N(SetPartnerFlags80000)

// text: N(SetPartnerFlags20000)

// text: func_80240F20_D65500

// text: func_80240F7C_D6555C

// text: func_8024114C_D6572C

// text: func_802411A0_D65780

// text: func_802411D8_D657B8

// text: func_80241274_D65854

// text: func_80241310_D658F0

// text: func_802413A4_D65984

// text: func_802413D0_D659B0

// text: func_8024140C_D659EC

// text: func_802414BC_D65A9C

s32 pad_0015D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { 13.0f, 0.0f, 70.0f, 90.0f },
    { 487.0f, 0.0f, 70.0f, 270.0f },
    { 487.0f, 0.0f, -70.0f, 270.0f },
    { 13.0f, 0.0f, -70.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190140,
};

Script N(script_80241660) = SCRIPT({
    SetMusicTrack(0, 55, 0, 8);
});

s32 pad_00168C[] = {
    0x00000000,
};

Script N(script_80241690) = SCRIPT({
    GetEntryID(SI_VAR(10));
    if (SI_VAR(10) == SI_VAR(1)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(2)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(3)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(4)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(5)) {
        SI_VAR(0) = 2;
    }
    if (SI_VAR(10) == SI_VAR(6)) {
        SI_VAR(0) = 2;
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_802417A0) = {
    SI_CMD(ScriptOpcode_USE_FLAGS, 16),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(1), 0),
        SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
            SI_CMD(ScriptOpcode_CASE_EQ, 0),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D646CC),
            SI_CMD(ScriptOpcode_CASE_EQ, 1),
            SI_CMD(ScriptOpcode_CASE_EQ, 2),
                SI_CMD(ScriptOpcode_CALL, func_802400EC_D646CC),
        SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_CALL, func_8024049C_D64A7C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_CALL, func_80240D3C_D6531C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241848) = SCRIPT({
    SetTexPanner(SI_VAR(0), SI_VAR(2));
    SetTexPanner(SI_VAR(1), SI_VAR(2));
    loop {
        EnableModel(SI_VAR(0), 1);
        EnableModel(SI_VAR(1), 1);
        SI_VAR(10) = 0;
        loop 20 {
            SetTexPanOffset(SI_VAR(2), 0, SI_VAR(10), 0);
            SI_VAR(10) += 3000;
            sleep 1;
        }
        EnableModel(SI_VAR(0), 0);
        EnableModel(SI_VAR(1), 0);
        sleep 160;
    }
});

s32 N(unk_8024194C)[] = {
    0x0000001D, 0x0000001E, 0xFFFFFFFF,
};

s32 N(unk_80241958)[] = {
    0x0000001A, 0x0000001B, 0xFFFFFFFF,
};

s32 N(unk_80241964)[] = {
    0x00000051, 0x00000052, 0xFFFFFFFF,
};

s32 N(unk_80241970)[] = {
    0x00000054, 0x00000055, 0xFFFFFFFF,
};

s32 N(unk_8024197C)[] = {
    0x0000001D, 0x0000001E, 0x00000051, 0x00000052, 0xFFFFFFFF,
};

s32 N(unk_80241990)[] = {
    0x0000001A, 0x0000001B, 0x00000054, 0x00000055, 0xFFFFFFFF,
};

Script N(script_802419A4) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 0;
    SI_VAR(1) = 20;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_8024197C);
        SI_VAR(3) = N(unk_80241990);
    } else {
        SI_VAR(2) = N(unk_8024194C);
        SI_VAR(3) = N(unk_80241958);
    }
    spawn func_80285EEC;
    sleep 17;
    GotoMap(D_80243710_D67CF0, 2);
    sleep 100;
});

Script N(script_ExitWalk_80241A98) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243718_D67CF8, 0);
    sleep 100;
});

s32 unk_missing_80241AF4[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_ExitWalk_80241B04) = SCRIPT({
    group 27;
    UseExitHeading(60, 2);
    spawn ExitWalk;
    GotoMap(D_80243718_D67CF8, 1);
    sleep 100;
});

s32 unk_missing_80241B60[] = {
    0x00000002, 0x00000000, 0x00000001, 0x00000000,
};

Script N(script_80241B70) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(3);
    SI_VAR(0) = 3;
    SI_VAR(1) = 24;
    if (SI_SAVE_FLAG(1490) == 0) {
        SI_VAR(2) = N(unk_8024197C);
        SI_VAR(3) = N(unk_80241990);
    } else {
        SI_VAR(2) = N(unk_80241964);
        SI_VAR(3) = N(unk_80241970);
    }
    spawn func_80285EEC;
    sleep 17;
    GotoMap(D_80243710_D67CF0, 3);
    sleep 100;
});

Script N(script_80241C64) = SCRIPT({
    bind N(script_802419A4) to TriggerFlag_WALL_INTERACT 20;
    bind N(script_ExitWalk_80241A98) to 0x80000 26;
    bind N(script_ExitWalk_80241B04) to 0x80000 28;
    bind N(script_80241B70) to TriggerFlag_WALL_INTERACT 24;
});

Script N(script_EnterWalk_80241CE4) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            UseDoorSounds(3);
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_8024197C);
                SI_VAR(3) = N(unk_80241990);
            } else {
                SI_VAR(2) = N(unk_8024194C);
                SI_VAR(3) = N(unk_80241958);
            }
            await func_802861B0;
            spawn N(script_80241C64);
        }
        == 1 {
            SI_VAR(0) = N(script_80241C64);
            spawn EnterWalk;
        }
        == 2 {
            SI_VAR(0) = N(script_80241C64);
            spawn EnterWalk;
        }
        == 3 {
            UseDoorSounds(3);
            if (SI_SAVE_FLAG(1490) == 0) {
                SI_VAR(2) = N(unk_8024197C);
                SI_VAR(3) = N(unk_80241990);
            } else {
                SI_VAR(2) = N(unk_80241964);
                SI_VAR(3) = N(unk_80241970);
            }
            await func_802861B0;
            spawn N(script_80241C64);
        }
    }
});

Vec4f N(triggerCoord_80241E90) =  { 487.0f, 0.0f, 80.0f, 0.0f };

Vec4f N(triggerCoord_80241EA0) =  { 487.0f, 0.0f, -80.0f, 0.0f };

Script N(script_80241EB0) = SCRIPT({
    PlayEffect(66, 0, 50, 34, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(50, 0);
    EnableModel(53, 0);
    EnableModel(55, 1);
    ModifyColliderFlags(0, 37, 0x7FFFFE00);
    SI_SAVE_FLAG(1502) = 1;
    SI_SAVE_FLAG(1490) = 1;
    unbind;
});

Script N(script_80241F80) = SCRIPT({
    PlayEffect(66, 0, 65, 34, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    EnableModel(65, 0);
    EnableModel(68, 0);
    EnableModel(70, 1);
    ModifyColliderFlags(0, 39, 0x7FFFFE00);
    SI_SAVE_FLAG(1503) = 1;
    unbind;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 21;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 24, 24, 40);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    MakeNpcs(1, N(npcGroupList_802436EC));
    SI_VAR(0) = 88;
    SI_VAR(1) = 89;
    SI_VAR(2) = 0;
    spawn N(script_80241848);
    SI_VAR(0) = 0;
    SI_VAR(1) = SI_SAVE_FLAG(1490);
    spawn N(script_802417A0);
    spawn N(script_EnterWalk_80241CE4);
    sleep 1;
    spawn N(script_80241660);
    if (SI_SAVE_FLAG(1502) == 0) {
        bind N(script_80241EB0) to TriggerFlag_BOMB N(triggerCoord_80241E90);
        EnableModel(55, 0);
    } else {
        EnableModel(50, 0);
        EnableModel(53, 0);
        ModifyColliderFlags(0, 37, 0x7FFFFE00);
    }
    if (SI_SAVE_FLAG(1503) == 0) {
        bind N(script_80241F80) to TriggerFlag_BOMB N(triggerCoord_80241EA0);
        EnableModel(70, 0);
    } else {
        EnableModel(65, 0);
        EnableModel(68, 0);
        ModifyColliderFlags(0, 39, 0x7FFFFE00);
    }
});

s32 pad_002294[] = {
    0x00000000, 0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802422A0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x1E,
    .radius = 0x2D,
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

s32 N(unk_802422CC)[] = {
    0x00000000,
};

s32 N(unk_802422D0)[] = {
    0x00000000,
};

Script N(script_802422D4) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F7C_D6555C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802411A0_D65780(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80242418) = {
    SI_CMD(ScriptOpcode_CALL, func_802411D8_D657B8, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_802422D4), 0x10, 0, N(shakeTreeEvent_Tree2), 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024114C_D6572C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_80242468) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    func_802D663C();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_80240F7C_D6555C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_802411A0_D65780(SI_VAR(10));
    func_802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024259C) = {
    SI_CMD(ScriptOpcode_CALL, func_80241274_D65854, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242468), 0x10, 0, D_802438E8_C59828, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_8024114C_D6572C, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802425EC) = SCRIPT({
    MakeLerp(0, 2880, 40, 4);
1:
    UpdateLerp();
    SetNpcRotation(SI_VAR(4), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 1;
    }
});

Script N(script_Idle_8024267C) = SCRIPT({
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        if (SI_SAVE_VAR(0) < 79) {
            DisablePlayerInput(1);
            sleep 10;
            SetNpcYaw(0, 90);
            spawn {
                SetPlayerSpeed(2.0);
                PlayerMoveTo(440, 0xFFFFFFBA, 0);
            }
            sleep 15;
            GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamProperties(0, 5.0, SI_VAR(0), SI_VAR(1), SI_VAR(2), 350.0, 12.0, -7.0);
            SpeakToPlayer(0, 0x1002B, 0x1002B, 0, 0x120139);
            SpeakToPlayer(1, 0x3000E, 0x30003, 0, 0x12013A);
            ResetCam(0, 6.0);
            PanToTarget(0, 0, 0);
            spawn {
                GetNpcPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(0, 0, 0xFFFFFC18, 0);
                func_80241310_D658F0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(2, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                PlaySoundAtNpc(2, 717, 0);
                SetNpcFlagBits(2, 256, 1);
                SI_VAR(4) = 2;
                SetNpcYaw(2, 90);
                await N(script_802425EC);
                SetNpcAnimation(2, 0x4E0004);
                SetNpcFlagBits(2, 256, 1);
                NpcMoveTo(2, 430, 0xFFFFFFBA, 15);
            }
            spawn {
                GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                func_80241310_D658F0(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetNpcPos(1, 389, 0, 0xFFFFFFC3);
                SetNpcPos(3, SI_VAR(0), SI_VAR(1), SI_VAR(2));
                PlaySoundAtNpc(3, 717, 0);
                SetNpcFlagBits(1, 0x1000100, 1);
                SetNpcFlagBits(3, 256, 1);
                SI_VAR(4) = 3;
                SetNpcYaw(3, 90);
                await N(script_802425EC);
                SetNpcAnimation(3, 0x4E0004);
                SetNpcFlagBits(3, 256, 1);
                NpcMoveTo(3, 420, 0xFFFFFFBA, 15);
            }
            sleep 35;
            StartBossBattle(3);
        }
    }
});

Script N(script_Defeat_80242A70) = SCRIPT({
    SetNpcPos(2, 400, 0, 0xFFFFFFBA);
    SetNpcPos(3, 370, 0, 0xFFFFFFBA);
    SetNpcAnimation(2, 0x4E0002);
    SetNpcAnimation(3, 0x4E0002);
    group 0;
    func_802D5830(1);
    SetNpcPos(1, 0, 0xFFFFFC18, 0);
    sleep 10;
    SpeakToPlayer(2, 0x4E0005, 0x4E0002, 0, 0x12013B);
    sleep 10;
    InterpNpcYaw(2, 270, 0);
    InterpNpcYaw(3, 270, 0);
    sleep 15;
    spawn {
        PlaySoundAtNpc(2, 715, 0);
        SetNpcAnimation(2, 0x4E0004);
        NpcMoveTo(2, 0, 0xFFFFFFBA, 45);
        SetNpcPos(2, 0, 0xFFFFFC18, 0);
    }
    PlaySoundAtNpc(3, 715, 0);
    SetNpcAnimation(3, 0x4E0004);
    NpcMoveTo(3, 0xFFFFFFE2, 0xFFFFFFBA, 45);
    SetNpcPos(3, 0xFFFFFFE2, 0xFFFFFC18, 0);
    SI_SAVE_VAR(0) = 79;
    func_802D5830(0);
    group 11;
    DisablePlayerInput(0);
});

Script N(script_Init_80242CA0) = SCRIPT({
    SetNpcFlagBits(-1, 0x10000000, 1);
    SetNpcAnimation(-1, 0x10002);
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) == 2) {
        if (SI_SAVE_VAR(0) < 79) {
            SetNpcPos(-1, 375, 0, 0xFFFFFFC5);
        }
    } else {
        if (SI_SAVE_FLAG(1490) == 1) {
            if (SI_SAVE_VAR(0) < 79) {
                SetNpcPos(-1, 465, 0, 0xFFFFFFC5);
                InterpNpcYaw(-1, 270, 0);
            }
        }
    }
});

// Unable to use DSL: DSL does not support script opcode 0x3E
// *INDENT-OFF*
Script N(script_Init_80242DA4) = {
    SI_CMD(ScriptOpcode_CALL, BindNpcIdle, -1, N(script_Idle_8024267C)),
    SI_CMD(ScriptOpcode_CALL, BindNpcDefeat, -1, N(script_Defeat_80242A70)),
    SI_CMD(ScriptOpcode_CALL, SetNpcFlagBits, -1, 0x10000000, 1),
    SI_CMD(ScriptOpcode_CALL, GetEntryID, SI_VAR(0)),
    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(0), 2),
        SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 79),
            SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 345, 0, 0xFFFFFFC5),
            SI_CMD(ScriptOpcode_USE_FLAGS, 16),
            SI_CMD(ScriptOpcode_CALL, func_802413D0_D659B0),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_ELSE),
        SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1490), 1),
            SI_CMD(ScriptOpcode_IF_LT, SI_SAVE_VAR(0), 79),
                SI_CMD(ScriptOpcode_CALL, SetNpcPos, -1, 435, 0, 0xFFFFFFC5),
                SI_CMD(ScriptOpcode_USE_FLAGS, 16),
                SI_CMD(ScriptOpcode_CALL, func_802413D0_D659B0),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_80242EDC) = SCRIPT({
    SetNpcFlagBits(-1, 0x10000000, 1);
});

Script N(script_Init_80242F04) = SCRIPT({
    SetNpcFlagBits(-1, 0x10000000, 1);
});

StaticNpc N(npcGroup_80242F2C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802422A0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00604D0D,
        .init = N(script_Init_80242CA0),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
};

StaticNpc N(npcGroup_8024311C)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802422A0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00E40D0C,
        .init = N(script_Init_80242DA4),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00030003, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030005, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000, 0x00030000,
        },
    },
    {
        .id = 2,
        .settings = &N(npcSettings_802422A0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00E40D09,
        .init = N(script_Init_80242EDC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
    {
        .id = 3,
        .settings = &N(npcSettings_802422A0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00E40D09,
        .init = N(script_Init_80242F04),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x004E0002, 0x004E0003, 0x004E0004, 0x004E0004, 0x004E0002, 0x004E0002, 0x004E000A, 0x004E000A, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002, 0x004E0002,
        },
    },
};

NpcGroupList N(npcGroupList_802436EC) = {
    NPC_GROUP(N(npcGroup_80242F2C), 0x21020001),
    NPC_GROUP(N(npcGroup_8024311C), 0x21020001),
    {},
};

// rodata: D_80243710_D67CF0

// rodata: D_80243718_D67CF8
