#include "isk_10.h"

s32 pad_000DAC[1];
Script N(script_ExitWalk_80240E20);
Script N(script_ExitWalk_80240E7C);
Script N(script_ExitWalk_80240ED8);
Script N(script_80240F34);
Script N(main);
s32 N(unk_80241100)[2];
s32 N(unk_80241108)[4];
s32 N(unk_80241118)[16];
s32 N(unk_80241158)[3];
Script N(script_80241164);
Script N(script_802412C8);
Script N(script_80241748);
Script N(script_MakeEntities);
s32 pad_001A1C[1];
Script N(script_80241A40);
Script N(script_80241B18);
Script N(script_80241BF0);
Script N(script_80241CD4);
const char D_80241E80_98A9E0[8]; // "isk_08"
const char D_80241E88_98A9E8[8]; // "isk_14"
const char D_80241E90_98A9F0[8]; // "isk_18"
s32 pad_001E98[2];

// text: func_80240000_988B60

// text: func_8024001C_988B7C

// text: func_8024003C_988B9C

// text: func_80240068_988BC8

// text: func_802400D4_988C34

// text: func_80240120_988C80

// text: func_802401CC_988D2C

// text: func_8024041C_988F7C

// text: func_80240448_988FA8

// text: func_80240480_988FE0

// text: func_80240510_989070

// text: func_80240544_9890A4

// text: func_802405A8_989108

// text: func_80240600_989160

// text: func_80240B38_989698

// text: func_80240C78_9897D8

// text: func_80240CC0_989820

// text: func_80240D08_989868

// text: func_80240D38_989898

s32 pad_000DAC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -594.0f, -520.0f, 84.0f, 0.0f },
    { -575.0f, -780.0f, -81.0f, 180.0f },
    { -577.0f, -780.0f, 81.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x19009E,
};

Script N(script_ExitWalk_80240E20) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80241E80_98A9E0, 1);
    sleep 100;
});

Script N(script_ExitWalk_80240E7C) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80241E88_98A9E8, 0);
    sleep 100;
});

Script N(script_ExitWalk_80240ED8) = SCRIPT({
    group 27;
    UseExitHeading(40, 2);
    spawn ExitWalk;
    GotoMap(D_80241E90_98A9F0, 0);
    sleep 100;
});

Script N(script_80240F34) = SCRIPT({
    bind N(script_ExitWalk_80240E20) to 0x80000 10;
    bind N(script_ExitWalk_80240E7C) to 0x80000 1;
    bind N(script_ExitWalk_80240ED8) to 0x80000 6;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x20007);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    SetCamSpeed(0, 2.80078125);
    await N(script_MakeEntities);
    await N(script_80241CD4);
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
    SI_VAR(0) = N(script_80240F34);
    spawn EnterWalk;
});

s32 N(unk_80241100)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80241108)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80241118)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80241158)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80241164) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240544_9890A4(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240B38_989698(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240B38_989698(50, 50);
    }
    spawn {
        sleep 3;
        func_8024003C_988B9C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_802405A8_989108();
        func_80240C78_9897D8();
        sleep 5;
        func_80240CC0_989820();
        sleep 5;
        func_80240C78_9897D8();
    }
    sleep 3;
    func_80240600_989160(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_802412C8) = SCRIPT({
    if (SI_SAVE_FLAG(903) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240D08_989868();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240000_988B60();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240480_988FE0(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240120_988C80();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240510_989070(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_988B7C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802401CC_988D2C();
    if (SI_VAR(0) == -1) {
        func_80240510_989070(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_988B7C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_8024041C_988F7C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240510_989070(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024001C_988B7C();
        return;
    }
    await N(script_80241164);
    func_80240068_988BC8(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(903) = 1;
    func_80240510_989070(SI_VAR(9));
    func_80240448_988FA8();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024001C_988B7C();
});

Script N(script_80241748) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    SetPlayerActionState(3);
    sleep 1;
    if (SI_MAP_VAR(9) == 0) {
        SetPlayerJumpscale(1.400390625);
        PlayerJump(0xFFFFFDBF, 0xFFFFFCF4, 0xFFFFFFB5, 15);
    } else {
        SetCamSpeed(0, 2.80078125);
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetCamPosC(0, 0, 0xFFFFFDF8);
        PanToTarget(0, 0, 1);
        SetPlayerJumpscale(1.400390625);
        PlayerJump(0xFFFFFDCF, 0xFFFFFDF8, 23, 30);
        PanToTarget(0, 0, 0);
        SetCamSpeed(0, 2.80078125);
    }
    SetPlayerActionState(0);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 0xFFFFFDDA, 0xFFFFFD30, 0, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(903));
    AssignScript(N(script_802412C8));
    spawn {
        func_80240D38_989898();
    }
    MakeEntity(0x802EAA30, 0xFFFFFDFC, 0xFFFFFCF4, 0xFFFFFFB9, 0, 0x80000000);
    AssignScript(N(script_80241748));
    PlayEffect(32, 1, 0xFFFFFE02, 0xFFFFFE3B, 43, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 0xFFFFFE02, 0xFFFFFD37, 43, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
});

s32 pad_001A1C[] = {
    0x00000000,
};

Vec4f N(triggerCoord_80241A20) =  { -593.0, -520.0, 104.0, 0.0 };

Vec4f N(triggerCoord_80241A30) =  { -569.0, -780.0, -99.0, 0.0 };

Script N(script_80241A40) = SCRIPT({
    PlayEffect(66, 0, 30, 14, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(30, 1);
        sleep 1;
        EnableModel(30, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 12, 0x7FFFFE00);
    SI_SAVE_FLAG(880) = 1;
    unbind;
});

Script N(script_80241B18) = SCRIPT({
    PlayEffect(66, 0, 27, 19, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(27, 1);
        sleep 1;
        EnableModel(27, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 3, 0x7FFFFE00);
    SI_SAVE_FLAG(879) = 1;
    unbind;
});

Script N(script_80241BF0) = SCRIPT({
    EnableModel(35, 0);
    EnableModel(36, 0);
    EnableModel(37, 0);
    EnableModel(38, 0);
    EnableModel(39, 0);
    EnableModel(40, 0);
    EnableModel(41, 0);
    ModifyColliderFlags(0, 21, 0x7FFFFE00);
    ModifyColliderFlags(0, 22, 0x7FFFFE00);
    ModifyColliderFlags(0, 23, 0x7FFFFE00);
});

Script N(script_80241CD4) = SCRIPT({
    if (SI_SAVE_FLAG(878) == 0) {
        bind N(script_80241A40) to TriggerFlag_BOMB N(triggerCoord_80241A20);
    } else {
        EnableModel(30, 0);
        ModifyColliderFlags(0, 12, 0x7FFFFE00);
    }
    if (SI_SAVE_FLAG(880) == 0) {
        if (SI_SAVE_FLAG(878) == 0) {
            bind N(script_80241A40) to TriggerFlag_BOMB N(triggerCoord_80241A20);
            await N(script_80241BF0);
        } else {
            EnableModel(30, 0);
            ModifyColliderFlags(0, 12, 0x7FFFFE00);
        }
    } else {
        EnableModel(30, 0);
        ModifyColliderFlags(0, 12, 0x7FFFFE00);
        await N(script_80241BF0);
    }
    if (SI_SAVE_FLAG(879) == 0) {
        bind N(script_80241B18) to TriggerFlag_BOMB N(triggerCoord_80241A30);
    } else {
        EnableModel(27, 0);
        ModifyColliderFlags(0, 3, 0x7FFFFE00);
    }
});

// rodata: D_80241E80_98A9E0

// rodata: D_80241E88_98A9E8

// rodata: D_80241E90_98A9F0

s32 pad_001E98[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80241EA0_98AA00

// rodata: D_80241EA8_98AA08

