#include "obk_03.h"

s32 pad_000164[3];
s32 pad_0008C8[2];
s32 pad_000FE4[3];
Script N(script_80241060);
s32 pad_0010C8[2];
Script N(script_802410D0);
Script N(script_80241184);
Script N(script_80241238);
Script N(script_802412FC);
Script N(main);
s32 pad_0014E8[2];
s32 N(intTable_802414F0)[23];
s32 N(shopInventory_8024154C)[21];
s32 N(shopPriceList_802415A0)[18];
s32 N(shopItemPositions_802415E8)[6];
Script N(script_80241600);
s32 N(shopOwnerNPC_80241654)[7];
Script N(script_80241670);
s32 pad_001774[3];
Script N(script_80241780);
Script N(script_802418F0);
Script N(script_80241A60);
Script N(script_80241B9C);
Script N(script_80241CD8);
Script N(script_80241DB4);
Script N(script_80241E90);
Script N(script_MakeEntities);
s32 pad_001FC8[2];
Script N(script_80241FD0);
Script N(script_80242060);
Script N(script_802421E4);
Script N(script_80242268);
Script N(script_80242320);
Script N(script_80242C8C);
s32 pad_002E98[2];
s32 N(unk_80242ECC)[1];
Script N(script_80242ED0);
Script N(script_80242F00);
s32 N(unk_80242F30)[1];
s32 N(unk_80242F34)[1];
Script N(script_80242F38);
Script N(script_8024307C);
Script N(script_802430CC);
Script N(script_8024314C);
Script N(script_80243470);
Script N(script_802434E0);
s32 N(unk_802437D8)[2];
Script N(script_802437E0);
Script N(script_80243830);
Script N(script_Interact_80243894);
Script N(script_Init_80243928);
StaticNpc N(npcGroup_8024394C)[1];
NpcGroupList N(npcGroupList_80243B3C);
s32 pad_003B54[3];
Script N(script_80243B60);
s32 pad_003BB8[2];
const char D_80243BC0_BC7E40[8]; // "obk_02"
const char D_80243BC8_BC7E48[8]; // "obk_04"

// text: func_80240000_BC4280

// text: func_802400C4_BC4344

s32 pad_000164[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240170_BC43F0

// text: func_80240224_BC44A4

// text: func_80240288_BC4508

// text: func_802402E4_BC4564

// text: func_802404B4_BC4734

// text: func_80240508_BC4788

// text: func_80240540_BC47C0

// text: func_802405DC_BC485C

// text: func_802406CC_BC494C

// text: func_80240858_BC4AD8

// text: func_8024089C_BC4B1C

s32 pad_0008C8[] = {
    0x00000000, 0x00000000,
};

// text: func_802408D0_BC4B50

s32 pad_000FE4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -20.0f, 0.0f, -235.0f, 180.0f },
    { 240.0f, 0.0f, 0.0f, 270.0f },
    { 660.0f, 0.0f, 0.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900B4,
};

Script N(script_80241060) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

s32 pad_0010C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_802410D0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 6;
    SI_VAR(2) = 90;
    SI_VAR(4) = 91;
    SI_VAR(3) = -1;
    spawn 0x80285DFC;
    sleep 17;
    GotoMap(D_80243BC0_BC7E40, 1);
    sleep 100;
});

Script N(script_80241184) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 5;
    SI_VAR(2) = 87;
    SI_VAR(4) = 88;
    SI_VAR(3) = 1;
    spawn 0x80285DFC;
    sleep 17;
    GotoMap(D_80243BC8_BC7E48, 0);
    sleep 100;
});

Script N(script_80241238) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 90;
            SI_VAR(4) = 91;
            SI_VAR(3) = -1;
            await 0x80285E24;
        }
        == 1 {
            SI_VAR(2) = 87;
            SI_VAR(4) = 88;
            SI_VAR(3) = 1;
            await 0x80285E24;
        }
    }
});

Script N(script_802412FC) = SCRIPT({
    SetTexPanner(99, 0);
    SetTexPanner(100, 0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
20:
    SI_VAR(0) += 300;
    SI_VAR(1) += 100;
    SetTexPanOffset(0, 0, SI_VAR(0), SI_VAR(1));
    sleep 1;
    goto 20;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_80243B3C));
    await N(script_MakeEntities);
    spawn N(script_80242C8C);
    spawn N(script_80243B60);
    await N(script_80241670);
    spawn N(script_802412FC);
    spawn N(script_80241060);
    bind N(script_80241184) to TriggerFlag_WALL_INTERACT 5;
    bind N(script_802410D0) to TriggerFlag_WALL_INTERACT 6;
    spawn N(script_80241238);
});

s32 pad_0014E8[] = {
    0x00000000, 0x00000000,
};

s32 N(intTable_802414F0)[] = {
    0x00270060, 0x00270061, 0x00270062, 0x00270063, 0x00270064, 0x00270065, 0x00270066, 0x00270067,
    0x00270068, 0x00270069, 0x0027006A, 0x0027006B, 0x0027006C, 0x0027006D, 0x0027006E, 0x0027006F,
    0x00270070, 0x00270071, 0x00270072, 0x00270073, 0x00270074, 0x00270075, 0x00270076,
};

s32 N(shopInventory_8024154C)[] = {
    0x00000096, 0x00000001, 0x0024002B, 0x00000092, 0x00000019, 0x00240028, 0x00000081, 0x0000000F,
    0x00240001, 0x000000A3, 0x00000019, 0x00240017, 0x00000095, 0x00000032, 0x0024000C, 0x0000008C,
    0x0000000D, 0x0024000A, 0x00000000, 0x00000000, 0x00000000,
};

s32 N(shopPriceList_802415A0)[] = {
    0x00000086, 0x00000004, 0x00000000, 0x0000008D, 0x00000003, 0x00000000, 0x000000C2, 0x00000005,
    0x00000000, 0x000000B4, 0x000000C8, 0x00000000, 0x000000AE, 0x00000005, 0x00000000, 0x00000000,
    0x00000000, 0x00000000,
};

s32 N(shopItemPositions_802415E8)[] = {
    0x002A002A, 0x002B002B, 0x002C002C, 0x002D002D, 0x002E002E, 0x002F002F,
};

Script N(script_80241600) = SCRIPT({
    match SI_VAR(0) {
        == 3 {}
        == 4 {}
        == 1 {}
        == 2 {
        }
    }
});

s32 N(shopOwnerNPC_80241654)[] = {
    0x00000000, 0x00950001, 0x00950004, N(script_80241600), 0x00000000, 0x00000000, N(intTable_802414F0),
};

Script N(script_80241670) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFDC) {
        ModifyColliderFlags(0, 48, 0x7FFFFE00);
    } else {
        ModifyColliderFlags(0, 42, 0x7FFFFE00);
        ModifyColliderFlags(0, 43, 0x7FFFFE00);
        ModifyColliderFlags(0, 44, 0x7FFFFE00);
        ModifyColliderFlags(0, 45, 0x7FFFFE00);
        ModifyColliderFlags(0, 46, 0x7FFFFE00);
        ModifyColliderFlags(0, 47, 0x7FFFFE00);
    }
    MakeShop(N(shopItemPositions_802415E8), N(shopInventory_8024154C), N(shopPriceList_802415A0), 0);
    MakeShopOwner(N(shopOwnerNPC_80241654));
});

s32 pad_001774[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80241780) = SCRIPT({
    DisablePlayerInput(1);
    spawn {
        sleep 10;
        func_802400C4_BC4344(SI_VAR(7), SI_VAR(10), SI_VAR(11), SI_VAR(12));
        PlaySoundAt(769, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    }
    MakeLerp(SI_VAR(3), SI_VAR(5), SI_VAR(6), 1);
    loop {
        UpdateLerp();
        func_80240000_BC4280(SI_VAR(7), SI_VAR(2), SI_VAR(0), SI_VAR(4));
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    func_802400C4_BC4344(SI_VAR(7), SI_VAR(10), SI_VAR(11), SI_VAR(12));
    PlaySoundAt(72, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    ShakeCam(0, 0, SI_VAR(8), 1.0);
    sleep 10;
    DisablePlayerInput(0);
});

Script N(script_802418F0) = SCRIPT({
    DisablePlayerInput(1);
    spawn {
        sleep 10;
        func_802400C4_BC4344(SI_VAR(7), SI_VAR(10), SI_VAR(11), SI_VAR(12));
        PlaySoundAt(771, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    }
    MakeLerp(SI_VAR(3), SI_VAR(5), SI_VAR(6), 1);
    loop {
        UpdateLerp();
        func_80240000_BC4280(SI_VAR(7), SI_VAR(2), SI_VAR(0), SI_VAR(4));
        if (SI_VAR(1) == 0) {
            break;
        }
        sleep 1;
    }
    func_802400C4_BC4344(SI_VAR(7), SI_VAR(10), SI_VAR(11), SI_VAR(12));
    PlaySoundAt(221, 0, SI_VAR(10), SI_VAR(11), SI_VAR(12));
    ShakeCam(0, 0, SI_VAR(8), 1.0);
    sleep 10;
    DisablePlayerInput(0);
});

Script N(script_80241A60) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) <= 340) {
        return;
    }
    if (SI_VAR(0) >= 372) {
        return;
    }
    if (SI_VAR(2) <= 0xFFFFFF8D) {
        return;
    }
    if (SI_VAR(2) >= 0xFFFFFFAB) {
        return;
    }
    SetPlayerAnimation(0x8001F);
    sleep 8;
    InterpPlayerYaw(90, 0);
    sleep 2;
    SetPlayerJumpscale(2.0);
    SetPlayerAnimation(0x1002B);
    PlayerJump1(330, 0xFFFFFF2E, 0xFFFFFFCF, 10);
    SetPlayerAnimation(0x10002);
    sleep 5;
});

Script N(script_80241B9C) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    if (SI_VAR(0) <= 394) {
        return;
    }
    if (SI_VAR(0) >= 470) {
        return;
    }
    if (SI_VAR(2) <= 0xFFFFFF79) {
        return;
    }
    if (SI_VAR(2) >= 0xFFFFFFC2) {
        return;
    }
    SetPlayerAnimation(0x8001F);
    sleep 8;
    InterpPlayerYaw(90, 0);
    sleep 2;
    SetPlayerJumpscale(2.0);
    SetPlayerAnimation(0x1002B);
    PlayerJump1(352, 0xFFFFFF2E, 0xFFFFFFFB, 10);
    SetPlayerAnimation(0x10002);
    sleep 5;
});

Script N(script_80241CD8) = SCRIPT({
    MakeEntity(0x802E9BD4, 360, 0xFFFFFF2E, 0xFFFFFF9C, 0, 0x80000000);
    AssignAreaFlag(6);
    AssignScript(N(script_80241DB4));
    spawn N(script_80241A60);
    SI_VAR(2) = 360;
    SI_VAR(3) = 0;
    SI_VAR(4) = 0xFFFFFF9C;
    SI_VAR(5) = 0xFFFFFF2E;
    SI_VAR(6) = 20;
    SI_VAR(7) = SI_VAR(0);
    SI_VAR(8) = 5;
    await N(script_80241780);
});

Script N(script_80241DB4) = SCRIPT({
    MakeEntity(0x802E9BF8, 440, 0xFFFFFF2E, 0xFFFFFF9C, 0, 0x80000000);
    AssignAreaFlag(7);
    AssignScript(N(script_80241E90));
    spawn N(script_80241B9C);
    SI_VAR(2) = 440;
    SI_VAR(3) = 0;
    SI_VAR(4) = 0xFFFFFF9C;
    SI_VAR(5) = 0xFFFFFF2E;
    SI_VAR(6) = 20;
    SI_VAR(7) = SI_VAR(0);
    SI_VAR(8) = 30;
    await N(script_802418F0);
});

Script N(script_80241E90) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFD9) {
        spawn N(script_80242320);
        SI_SAVE_VAR(0) = 0xFFFFFFD9;
    }
});

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFD9) {
        MakeEntity(0x802E9BD4, 300, 0xFFFFFF2E, 0xFFFFFF9C, 0, 0x80000000);
        AssignAreaFlag(5);
        AssignScript(N(script_80241CD8));
    }
    MakeEntity(0x802EAED4, 0xFFFFFF7E, 0, 0xFFFFFFCE, 0, 140, 0x80000000);
    AssignCrateFlag(SI_SAVE_FLAG(965));
    MakeEntity(0x802EAED4, 155, 0, 0xFFFFFF9C, 0, -1, 0x80000000);
    MakeEntity(0x802EAED4, 0xFFFFFF5B, 0, 0xFFFFFFCE, 0, -1, 0x80000000);
});

s32 pad_001FC8[] = {
    0x00000000, 0x00000000,
};

Script N(script_80241FD0) = SCRIPT({
    MakeLerp(SI_VAR(0), 0, SI_VAR(1), 8);
10:
    UpdateLerp();
    TranslateModel(SI_VAR(2), 0, SI_VAR(0), 0);
    sleep 1;
    if (SI_VAR(1) != 0) {
        goto 10;
    }
});

Script N(script_80242060) = SCRIPT({
    PlaySoundAt(8253, 0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    sleep SI_VAR(10);
    SI_VAR(3) = SI_VAR(0);
    SI_VAR(4) = SI_VAR(1);
    SI_VAR(5) = SI_VAR(2);
    SI_VAR(3) += 0;
    SI_VAR(4) += 0xFFFFFFF8;
    SI_VAR(5) += 0xFFFFFFBA;
    PlayEffect(6, 1, SI_VAR(3), SI_VAR(4), SI_VAR(5), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    SI_VAR(6) = SI_VAR(0);
    SI_VAR(7) = SI_VAR(1);
    SI_VAR(8) = SI_VAR(2);
    SI_VAR(6) += 0;
    SI_VAR(7) += 0xFFFFFFF8;
    SI_VAR(8) += 70;
    PlayEffect(6, 1, SI_VAR(6), SI_VAR(7), SI_VAR(8), 0, 0, 0, 0, 0, 0, 0, 0, 0);
});

Script N(script_802421E4) = SCRIPT({
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) -= 15;
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 3.0);
    PanToTarget(0, 0, 1);
});

Script N(script_80242268) = SCRIPT({
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
});

Script N(script_80242320) = SCRIPT({
    DisablePlayerInput(1);
    EnableModel(67, 0);
    ModifyColliderFlags(0, 7, 0x7FFFFE00);
    EnableModel(70, 1);
    EnableModel(72, 1);
    EnableModel(74, 1);
    EnableModel(76, 1);
    EnableModel(78, 1);
    EnableModel(80, 1);
    EnableModel(82, 1);
    EnableModel(84, 1);
    TranslateModel(70, 0, 180, 0);
    TranslateModel(72, 0, 155, 0);
    TranslateModel(74, 0, 130, 0);
    TranslateModel(76, 0, 105, 0);
    TranslateModel(78, 0, 80, 0);
    TranslateModel(80, 0, 55, 0);
    TranslateModel(82, 0, 30, 0);
    TranslateModel(84, 0, 5, 0);
    SI_VAR(0) = 275;
    SI_VAR(1) = 0xFFFFFF47;
    SI_VAR(2) = 188;
    await N(script_802421E4);
    ShakeCam(0, 0, 30, 3.0);
    SI_VAR(0) = 275;
    SI_VAR(1) = 0xFFFFFF47;
    SI_VAR(2) = 188;
    SI_VAR(10) = 28;
    spawn N(script_80242060);
    SI_VAR(0) = 175;
    SI_VAR(1) = 5;
    SI_VAR(2) = 70;
    spawn N(script_80241FD0);
    sleep 5;
    SI_VAR(0) = 225;
    SI_VAR(1) = 0xFFFFFF60;
    SI_VAR(2) = 188;
    spawn N(script_802421E4);
    SI_VAR(0) = 225;
    SI_VAR(1) = 0xFFFFFF60;
    SI_VAR(2) = 188;
    SI_VAR(10) = 28;
    spawn N(script_80242060);
    SI_VAR(0) = 150;
    SI_VAR(1) = 5;
    SI_VAR(2) = 72;
    spawn N(script_80241FD0);
    sleep 5;
    SI_VAR(0) = 175;
    SI_VAR(1) = 0xFFFFFF79;
    SI_VAR(2) = 188;
    await N(script_802421E4);
    SI_VAR(0) = 175;
    SI_VAR(1) = 0xFFFFFF79;
    SI_VAR(2) = 188;
    SI_VAR(10) = 28;
    spawn N(script_80242060);
    SI_VAR(0) = 125;
    SI_VAR(1) = 5;
    SI_VAR(2) = 74;
    spawn N(script_80241FD0);
    sleep 5;
    SI_VAR(0) = 125;
    SI_VAR(1) = 0xFFFFFF92;
    SI_VAR(2) = 188;
    await N(script_802421E4);
    SI_VAR(0) = 125;
    SI_VAR(1) = 0xFFFFFF92;
    SI_VAR(2) = 188;
    SI_VAR(10) = 26;
    spawn N(script_80242060);
    SI_VAR(0) = 100;
    SI_VAR(1) = 5;
    SI_VAR(2) = 76;
    spawn N(script_80241FD0);
    sleep 5;
    SI_VAR(0) = 75;
    SI_VAR(1) = 0xFFFFFFAB;
    SI_VAR(2) = 188;
    await N(script_802421E4);
    SI_VAR(0) = 75;
    SI_VAR(1) = 0xFFFFFFAB;
    SI_VAR(2) = 188;
    SI_VAR(10) = 25;
    spawn N(script_80242060);
    SI_VAR(0) = 75;
    SI_VAR(1) = 5;
    SI_VAR(2) = 78;
    spawn N(script_80241FD0);
    sleep 5;
    SI_VAR(0) = 25;
    SI_VAR(1) = 0xFFFFFFC4;
    SI_VAR(2) = 188;
    await N(script_802421E4);
    SI_VAR(0) = 25;
    SI_VAR(1) = 0xFFFFFFC4;
    SI_VAR(2) = 188;
    SI_VAR(10) = 14;
    spawn N(script_80242060);
    SI_VAR(0) = 50;
    SI_VAR(1) = 5;
    SI_VAR(2) = 80;
    spawn N(script_80241FD0);
    sleep 5;
    SI_VAR(0) = 0xFFFFFFE7;
    SI_VAR(1) = 0xFFFFFFDD;
    SI_VAR(2) = 188;
    await N(script_802421E4);
    SI_VAR(0) = 0xFFFFFFE7;
    SI_VAR(1) = 0xFFFFFFDD;
    SI_VAR(2) = 188;
    SI_VAR(10) = 9;
    spawn N(script_80242060);
    SI_VAR(0) = 25;
    SI_VAR(1) = 5;
    SI_VAR(2) = 82;
    spawn N(script_80241FD0);
    sleep 5;
    SI_VAR(0) = 0xFFFFFFB5;
    SI_VAR(1) = 0xFFFFFFF6;
    SI_VAR(2) = 188;
    await N(script_802421E4);
    SI_VAR(0) = 0xFFFFFFB5;
    SI_VAR(1) = 0xFFFFFFF6;
    SI_VAR(2) = 188;
    SI_VAR(10) = 4;
    spawn N(script_80242060);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 84;
    await N(script_80241FD0);
    EnableModel(30, 1);
    EnableModel(31, 0);
    sleep 30;
    ModifyColliderFlags(1, 9, 0x7FFFFE00);
    ModifyColliderFlags(1, 11, 0x7FFFFE00);
    ModifyColliderFlags(1, 13, 0x7FFFFE00);
    ModifyColliderFlags(1, 15, 0x7FFFFE00);
    ModifyColliderFlags(1, 17, 0x7FFFFE00);
    ModifyColliderFlags(1, 19, 0x7FFFFE00);
    ModifyColliderFlags(1, 21, 0x7FFFFE00);
    ModifyColliderFlags(1, 25, 0x7FFFFE00);
    await N(script_80242268);
    DisablePlayerInput(0);
});

Script N(script_80242C8C) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFD9) {
        EnableModel(70, 0);
        EnableModel(72, 0);
        EnableModel(74, 0);
        EnableModel(76, 0);
        EnableModel(78, 0);
        EnableModel(80, 0);
        EnableModel(82, 0);
        EnableModel(84, 0);
        EnableModel(30, 0);
        EnableModel(31, 1);
        ModifyColliderFlags(0, 9, 0x7FFFFE00);
        ModifyColliderFlags(0, 11, 0x7FFFFE00);
        ModifyColliderFlags(0, 13, 0x7FFFFE00);
        ModifyColliderFlags(0, 15, 0x7FFFFE00);
        ModifyColliderFlags(0, 17, 0x7FFFFE00);
        ModifyColliderFlags(0, 19, 0x7FFFFE00);
        ModifyColliderFlags(0, 21, 0x7FFFFE00);
        ModifyColliderFlags(0, 25, 0x7FFFFE00);
    } else {
        EnableModel(67, 0);
        EnableModel(30, 1);
        EnableModel(31, 0);
        ModifyColliderFlags(0, 7, 0x7FFFFE00);
    }
});

s32 pad_002E98[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_80242EA0) = {
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

s32 N(unk_80242ECC)[] = {
    0x00000000,
};

Script N(script_80242ED0) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80242F00) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

s32 N(unk_80242F30)[] = {
    0x00000000,
};

s32 N(unk_80242F34)[] = {
    0x00000000,
};

Script N(script_80242F38) = SCRIPT({
    SI_VAR(9) = SI_VAR(1);
    0x802D6420();
    SI_VAR(10) = SI_VAR(0);
    match SI_VAR(0) {
        == 0 {}
        == -1 {}
        else {
            RemoveKeyItemAt(SI_VAR(1));
            GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            func_802402E4_BC4564(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SetPlayerAnimation(0x60005);
            sleep 30;
            SetPlayerAnimation(0x10002);
            RemoveItemEntity(SI_VAR(0));
        }
    }
    func_80240508_BC4788(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_8024307C) = {
    SI_CMD(ScriptOpcode_CALL, func_80240540_BC47C0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_80242F38), 0x10, 0, 0x80243BE0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802404B4_BC4734, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802430CC) = SCRIPT({
    loop {
        GetNpcPos(0xFFFFFFFC, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        func_802406CC_BC494C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SetItemPos(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5));
        sleep 1;
    }
});

Script N(script_8024314C) = SCRIPT({
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
            func_802406CC_BC494C(SI_VAR(3), SI_VAR(4), SI_VAR(5));
            SI_VAR(0) |=c 50000;
            MakeItemEntity(SI_VAR(0), SI_VAR(3), SI_VAR(4), SI_VAR(5), 1, 0);
            SI_VAR(10) = spawn N(script_802430CC);
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
    func_80240508_BC4788(SI_VAR(10));
    0x802D6954();
    unbind;
});

// Unable to use DSL: DSL does not support script opcode 0x4E
Script N(script_80243470) = {
    SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_VAR(11)),
    SI_CMD(ScriptOpcode_SET, SI_VAR(1), SI_VAR(2)),
    SI_CMD(ScriptOpcode_CALL, func_80240540_BC47C0, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BIND_TRIGGER, N(script_8024314C), 0x10, 0, 0x80243BE0, 0, 1),
    SI_CMD(ScriptOpcode_CALL, func_802404B4_BC4734, SI_VAR(0)),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};

Script N(script_802434E0) = SCRIPT({
    SI_VAR(12) = 0;
    if (SI_SAVE_VAR(0) < 0xFFFFFFBA) {
        return;
    }
    func_80240858_BC4AD8();
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
            await N(script_80243470);
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
                        await N(script_80242ED0);
                        AddKeyItem(SI_VAR(6));
                    }
                    SI_VAR(12) = 2;
                }
            }
        }
    }
    func_8024089C_BC4B1C();
});

s32 N(unk_802437D8)[] = {
    0x00000041, 0x00000000,
};

Script N(script_802437E0) = SCRIPT({
    func_802405DC_BC485C(0, 0x950004, 0x950001, 65, 0, 0xE005D, 0xE005E, 0xE005F, 0xE0060, N(unk_802437D8));
    await N(script_802434E0);
});

Script N(script_80243830) = SCRIPT({
    if (SI_VAR(12) == 2) {
        SI_VAR(0) = 348;
        SI_VAR(1) = 3;
        await N(script_80242ED0);
        AddStarPieces(1);
    }
});

Script N(script_Interact_80243894) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 0xFFFFFFDC) {
        await 0x80284054;
    } else {
        SpeakToPlayer(-1, 0x950004, 0x950001, 0, 0xE005C);
    }
    await N(script_802437E0);
    await N(script_80243830);
    if (SI_VAR(12) != 0) {
        return;
    }
});

Script N(script_Init_80243928) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80243894));
});

StaticNpc N(npcGroup_8024394C)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_80242EA0),
        .pos = { 43.0, -200.0, -9.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80243928),
        .yaw = 90,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .tattle = 0x1A00A5,
    },
};

NpcGroupList N(npcGroupList_80243B3C) = {
    NPC_GROUP(N(npcGroup_8024394C), 0x00000000),
    {},
};

s32 pad_003B54[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80243B60) = SCRIPT({
    ParentColliderToModel(58, 127);
    ParentColliderToModel(59, 129);
    ParentColliderToModel(60, 129);
    func_802408D0_BC4B50();
});

s32 pad_003BB8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80243BC0_BC7E40

// rodata: D_80243BC8_BC7E48

// rodata: D_80243BD0_BC7E50

// rodata: D_80243BD8_BC7E58

