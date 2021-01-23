#include "arn_08.h"

s32 pad_0000BC[1];
s32 pad_00028C[1];
Script N(script_80240300);
s32 pad_0003A8[2];
Script N(script_802403B0);
Script N(script_80240470);
Script N(script_8024049C);
Script N(main);
s32 pad_000A6C[1];
Script N(script_80240A70);
Script N(script_80240B50);
s32 pad_000B98[2];
Script N(script_80240BA0);
s32 pad_000CB4[3];
Script N(script_80240CC0);
Script N(script_802410AC);
Script N(script_8024116C);
s32 N(unk_80241188)[1];
Script N(script_8024118C);
s32 pad_0011FC[1];
Script N(script_80241200);
Script N(script_80241210);
Script N(script_Idle_80241278);
Script N(script_Init_80241288);
Script N(script_Interact_802412E8);
Script N(script_Init_802413E8);
StaticNpc N(npcGroup_80241448)[1];
StaticNpc N(npcGroup_80241638)[1];
NpcGroupList N(npcGroupList_80241828);
s32 pad_00184C[1];
Script N(script_MakeEntities);
s32 pad_00189C[1];
const char D_802418A0_BF6040[8]; // "arn_07"
const char D_802418A8_BF6048[8]; // "arn_09"
const char D_802418B0_BF6050[8]; // "arn_08"
s32 pad_0018B8[2];

// text: func_80240000_BF47A0

// text: func_8024008C_BF482C

s32 pad_0000BC[] = {
    0x00000000,
};

// text: func_802400C0_BF4860

// text: func_802400D4_BF4874

// text: func_802400F4_BF4894

// text: func_8024019C_BF493C

s32 pad_00028C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -80.0f, 0.0f, 108.0f, 45.0f },
    { 0.0f, 0.0f, 0.0f, 0.0f },
    { -85.0f, 0.0f, 55.0f, 45.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900D3,
};

Script N(script_80240300) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFEA {
            SetMusicTrack(0, 31, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 85, 0, 8);
        } else {
            SetMusicTrack(0, 29, 0, 8);
        }
    }
    ClearAmbientSounds(250);
});

s32 pad_0003A8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802403B0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    ClearDefeatedEnemies();
    SI_VAR(0) = 0;
    SI_VAR(1) = 6;
    SI_VAR(2) = 0;
    SI_VAR(4) = 1;
    SI_VAR(3) = -1;
    spawn 0x80285DFC;
    sleep 17;
    GotoMap(D_802418A0_BF6040, 0);
    sleep 100;
});

Script N(script_80240470) = SCRIPT({
    bind N(script_802403B0) to TriggerFlag_WALL_INTERACT 6;
});

Script N(script_8024049C) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240470);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(4) = 1;
            SI_VAR(2) = 0;
            SI_VAR(3) = -1;
            await 0x80285E24;
            SI_AREA_FLAG(1) = 0;
            spawn N(script_80240470);
        }
        == 1 {
            DisablePlayerInput(1);
            DisablePlayerPhysics(1);
            if (SI_SAVE_VAR(0) == 0xFFFFFFEE) {
                SetPlayerPos(1000, 1000, 0);
                SetNpcPos(0xFFFFFFFC, 1000, 1000, 0);
                RotateModel(0, 80, 0, -1, 0);
                RotateModel(1, 80, 0, -1, 0);
                SetNpcAnimation(0, 0x6C0006);
                SetNpcJumpscale(0, 2.5);
                PlaySoundAtNpc(0, 8392, 0);
                NpcJump0(0, 0xFFFFFFCE, 0, 50, 10);
                SetNpcAnimation(0, 0x6C0007);
                sleep 1;
                SetNpcAnimation(0, 0x6C0006);
                PlaySoundAtNpc(0, 8392, 0);
                NpcJump0(0, 0xFFFFFF92, 0, 110, 10);
                SetNpcAnimation(0, 0x6C0007);
                sleep 1;
                SetNpcAnimation(0, 0x6C0006);
                PlaySoundAtNpc(0, 8392, 0);
                NpcJump0(0, 0xFFFFFF4C, 0, 180, 10);
                SetNpcAnimation(0, 0x6C0007);
                sleep 1;
                MakeLerp(80, 0, 10, 0);
                loop {
                    UpdateLerp();
                    RotateModel(0, SI_VAR(0), 0, -1, 0);
                    RotateModel(1, SI_VAR(0), 0, -1, 0);
                    sleep 1;
                    if (SI_VAR(1) == 0) {
                        break;
                    }
                }
                PlaySoundAtCollider(6, 450, 0);
                sleep 20;
                SetPlayerPos(0, 0, 0);
                SetNpcPos(0xFFFFFFFC, 0, 0, 0);
                SI_SAVE_VAR(0) = 0xFFFFFFEF;
            }
            DisablePlayerPhysics(0);
            SetPlayerJumpscale(2.0);
            PlayerJump(0xFFFFFFF6, 0, 75, 18);
            DisablePlayerInput(0);
            spawn N(script_80240470);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 35;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1979) = 1;
    if (SI_SAVE_VAR(0) >= 0xFFFFFFF4) {
        SI_SAVE_FLAG(1016) = 0;
        SI_SAVE_FLAG(1017) = 0;
        SI_SAVE_FLAG(1018) = 0;
    }
    MakeNpcs(0, N(npcGroupList_80241828));
    await N(script_MakeEntities);
    spawn N(script_80240BA0);
    GetDemoState(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        await N(script_8024118C);
        return;
    }
    spawn N(script_8024049C);
    spawn N(script_80240B50);
    spawn N(script_80240300);
});

s32 pad_000A6C[] = {
    0x00000000,
};

Script N(script_80240A70) = SCRIPT({
    loop {
        if (SI_SAVE_VAR(0) != 0xFFFFFFEE) {
            break;
        }
        sleep 1;
    }
    func_8024008C_BF482C();
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    func_80240000_BF47A0();
    SI_AREA_FLAG(1) = 1;
    if (SI_SAVE_VAR(0) < 0xFFFFFFE9) {
        SI_SAVE_VAR(0) = 0xFFFFFFE9;
    }
    GotoMap(D_802418A8_BF6048, 1);
    sleep 100;
});

Script N(script_80240B50) = SCRIPT({
    SetCamProperties(0, 90.0, 0, 0, 0, 470.0, 17.0, -7.0);
    spawn N(script_80240A70);
});

s32 pad_000B98[] = {
    0x00000000, 0x00000000,
};

Script N(script_80240BA0) = SCRIPT({
    PlaySound(0x8000004B);
    spawn {
        SI_VAR(0) = 0;
10:
        RotateModel(9, SI_VAR(0), 0, 0, 1);
        RotateModel(15, SI_VAR(0), 0, 0, 1);
        RotateModel(11, SI_VAR(0), 0, 0, 1);
        RotateModel(13, SI_VAR(0), 0, 0, -1);
        RotateModel(17, SI_VAR(0), 0, 0, -1);
        SI_VAR(0) += 1;
        sleep 1;
        goto 10;
    }
});

s32 pad_000CB4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240CC0) = SCRIPT({
    func_802400C0_BF4860();
    DemoJoystickXY(2, 0);
    sleep 1;
    DemoJoystickXY(12, 4);
    sleep 1;
    DemoJoystickXY(28, 11);
    sleep 1;
    DemoJoystickXY(47, 22);
    sleep 1;
    DemoJoystickXY(68, 38);
    sleep 1;
    DemoJoystickXY(67, 48);
    sleep 1;
    DemoJoystickXY(64, 59);
    sleep 1;
    DemoJoystickXY(64, 62);
    sleep 4;
    DemoSetButtons(0x8000);
    sleep 10;
    DemoJoystickXY(64, 58);
    DemoSetButtons(0);
    sleep 1;
    DemoJoystickXY(70, 34);
    sleep 1;
    DemoJoystickXY(77, 0xFFFFFFFE);
    sleep 1;
    DemoJoystickXY(74, 0xFFFFFFE9);
    sleep 1;
    DemoJoystickXY(71, 0xFFFFFFDC);
    sleep 1;
    DemoJoystickXY(69, 0xFFFFFFD4);
    sleep 1;
    DemoJoystickXY(67, 0xFFFFFFCF);
    sleep 1;
    DemoJoystickXY(30, 0xFFFFFFE2);
    sleep 1;
    DemoJoystickXY(0, 0);
    sleep 1;
    DemoJoystickXY(0, -1);
    sleep 8;
    DemoSetButtons(0x8000);
    sleep 2;
    DemoJoystickXY(0, 0xFFFFFFFE);
    sleep 2;
    DemoJoystickXY(0, -1);
    sleep 2;
    DemoJoystickXY(0, 0);
    sleep 1;
    DemoSetButtons(0);
    sleep 1;
    DemoJoystickXY(1, 0);
    sleep 1;
    DemoJoystickXY(0, 0);
    func_802400D4_BF4874();
    DemoSetButtons(0x8000);
    sleep 12;
    DemoSetButtons(0);
    sleep 20;
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802418B0_BF6050, 2, 2);
    sleep 100;
});

Script N(script_802410AC) = SCRIPT({
    sleep 10;
    loop {
        GetDemoState(SI_VAR(0));
        if (SI_VAR(0) == 2) {
            break;
        }
        sleep 1;
    }
    if (SI_SAVE_FLAG(9) == 1) {
        return;
    }
    SI_SAVE_FLAG(9) = 1;
    GotoMapSpecial(D_802418B0_BF6050, 2, 3);
    sleep 35;
});

Script N(script_8024116C) = SCRIPT({
    func_802400F4_BF4894();
});

s32 N(unk_80241188)[] = {
    0x00000000,
};

Script N(script_8024118C) = SCRIPT({
    SetCamProperties(0, 90.0, 0, 0, 0, 470.0, 17.0, -7.0);
    func_8024019C_BF493C();
    SI_SAVE_FLAG(9) = 0;
    spawn N(script_802410AC);
    spawn N(script_80240CC0);
});

s32 pad_0011FC[] = {
    0x00000000,
};

Script N(script_80241200) = SCRIPT({

});

Script N(script_80241210) = SCRIPT({

});

NpcSettings N(npcSettings_80241220) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = &N(script_80241200),
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = &N(script_80241210),
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0xD,
    .unk_2A = 0,
};

NpcSettings N(npcSettings_8024124C) = {
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
    .level = 0xD,
    .unk_2A = 0,
};

Script N(script_Idle_80241278) = SCRIPT({

});

Script N(script_Init_80241288) = SCRIPT({
    if (SI_SAVE_VAR(0) != 0xFFFFFFEE) {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    } else {
        BindNpcIdle(-1, N(script_Idle_80241278));
    }
});

Script N(script_Interact_802412E8) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 8 {
            SpeakToPlayer(-1, 0xC00002, 0xC00001, 0, 0xE00BA);
        }
        < 42 {
            SpeakToPlayer(-1, 0xC00002, 0xC00001, 0, 0xE00BB);
        }
        < 61 {
            SpeakToPlayer(-1, 0xC00002, 0xC00001, 0, 0xE00BC);
        }
        < 90 {
            SpeakToPlayer(-1, 0xC00002, 0xC00001, 0, 0xE00BD);
        }
        >= 90 {
            SpeakToPlayer(-1, 0xC00002, 0xC00001, 0, 0xE00BE);
        }
    }
});

Script N(script_Init_802413E8) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF4) {
        SetNpcPos(-1, 0, 0xFFFFFC18, 0);
    } else {
        BindNpcInteract(-1, N(script_Interact_802412E8));
    }
});

StaticNpc N(npcGroup_80241448)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80241220),
        .pos = { -23.0, 75.0, 31.0 },
        .flags = 0x00000D05,
        .init = N(script_Init_80241288),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001, 0x006C0001,
        },
    },
};

StaticNpc N(npcGroup_80241638)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_8024124C),
        .pos = { 38.0, 0.0, 97.0 },
        .flags = 0x00000801,
        .init = N(script_Init_802413E8),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001, 0x00C00001,
        },
        .tattle = 0x1A00B4,
    },
};

NpcGroupList N(npcGroupList_80241828) = {
    NPC_GROUP(N(npcGroup_80241448), 0x00000000),
    NPC_GROUP(N(npcGroup_80241638), 0x00000000),
    {},
};

s32 pad_00184C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFE9) {
        MakeEntity(0x802BCE84, 0, 30, 0, 0, 0x80000000);
    }
});

s32 pad_00189C[] = {
    0x00000000,
};

// rodata: D_802418A0_BF6040

// rodata: D_802418A8_BF6048

// rodata: D_802418B0_BF6050

s32 pad_0018B8[] = {
    0x00000000, 0x00000000,
};
