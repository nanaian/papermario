#include "tik_19.h"

s32 pad_0005EC[1];
s32 pad_001328[2];
Script N(script_80241380);
s32 pad_0013AC[1];
Script N(script_802413B0);
Script N(script_80241704);
Script N(script_80241AF4);
Script N(script_80241BD0);
Script N(script_80241DAC);
Script N(script_UpdateTexturePan_802420E0);
Script N(script_8024217C);
Script N(script_802421AC);
Script N(script_80242204);
Script N(main);
s32 pad_0026A8[2];
s32 N(unk_802426B0)[2];
s32 N(unk_802426B8)[4];
s32 N(unk_802426C8)[16];
s32 N(unk_80242708)[3];
Script N(script_80242714);
Script N(script_80242878);
Script N(script_MakeEntities);
s32 pad_002D5C[1];
const char D_80242D60_89A340[8]; // "mac_00"
s32 pad_002D68[2];

// text: func_80240000_8975E0

// text: func_80240020_897600

// text: func_80240034_897614

// text: func_802400F0_8976D0

// text: func_802401D0_8977B0

// text: func_8024023C_89781C

// text: func_802402E0_8978C0

// text: func_80240404_8979E4

s32 pad_0005EC[] = {
    0x00000000,
};

// text: func_802405F0_897BD0

// text: func_8024060C_897BEC

// text: func_8024062C_897C0C

// text: func_80240658_897C38

// text: func_802406C4_897CA4

// text: func_80240710_897CF0

// text: func_802407BC_897D9C

// text: func_80240A0C_897FEC

// text: func_80240A38_898018

// text: func_80240A70_898050

// text: func_80240B00_8980E0

// text: func_80240B34_898114

// text: func_80240B98_898178

// text: func_80240BF0_8981D0

// text: func_80241128_898708

// text: func_80241268_898848

// text: func_802412B0_898890

// text: func_802412F8_8988D8

s32 pad_001328[] = {
    0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -170.0f, -10.0f, -90.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190032,
};

Script N(script_80241380) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
});

s32 pad_0013AC[] = {
    0x00000000,
};

Script N(script_802413B0) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    DisablePartnerAI(0);
    HidePlayerShadow(1);
    SetPlayerAnimation(0x10000);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
    }
    GetEntryID(SI_VAR(0));
    func_802400F0_8976D0();
    SI_VAR(2) -= 40;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    PlaySound(355);
    0x802D286C(256);
    0x802D2520(0x10000, 5, 2, 1, 1, 0);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    loop 40 {
        SI_VAR(1) += 1;
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    sleep 3;
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            DisablePartnerAI(0);
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetNpcFlagBits(0xFFFFFFFC, 2, 0);
            EnablePartnerAI();
            EnableNpcShadow(0xFFFFFFFC, 1);
        }
    }
    sleep 2;
    0x802D2520(0x10000, 0, 0, 0, 0, 0);
    sleep 1;
    SetPlayerAnimation(0x10002);
    DisablePlayerPhysics(0);
    DisablePlayerInput(0);
    HidePlayerShadow(0);
0:
    func_80240020_897600();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241704) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_802400F0_8976D0();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(2) += 2;
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    InterpPlayerYaw(SI_VAR(4), 0);
    if (SI_VAR(4) == 90) {
        SI_VAR(5) += 40;
    } else {
        SI_VAR(5) -= 40;
    }
    UseSettingsFrom(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetPanTarget(0, SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SetCamSpeed(0, 90.0);
    PanToTarget(0, 0, 1);
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        DisablePartnerAI(0);
        EnableNpcShadow(0xFFFFFFFC, 0);
        SetNpcPos(0xFFFFFFFC, 0, 0xFFFFFC18, 0);
        InterpNpcYaw(0xFFFFFFFC, SI_VAR(0), 0);
    }
    sleep 1;
    PlaySound(355);
    spawn {
        sleep 25;
        HidePlayerShadow(0);
    }
    0x802D286C(2304);
    0x802D2520(0x10002, 5, 3, 1, 1, 0);
    loop 40 {
        func_8024023C_89781C(1.0);
        SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        spawn {
            GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SI_VAR(2) -= 3;
            SetNpcPos(0xFFFFFFFC, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            EnableNpcShadow(0xFFFFFFFC, 1);
            EnablePartnerAI();
        }
    }
    sleep 5;
    0x802D2520(0x10002, 0, 0, 0, 0, 0);
    ModifyColliderFlags(1, SI_VAR(11), 0x7FFFFE00);
    DisablePlayerInput(0);
    DisablePlayerPhysics(0);
    PanToTarget(0, 0, 0);
    spawn 0xFE363C8A;
});

Script N(script_80241AF4) = SCRIPT({
    func_80240034_897614();
    if (SI_VAR(0) == 0) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    await N(script_80241BD0);
});

Script N(script_80241BD0) = SCRIPT({
    func_80240000_8975E0();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8976D0();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8976D0();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_802401D0_8977B0();
    InterpPlayerYaw(SI_VAR(0), 0);
    sleep 2;
    SetPlayerFlagBits(0x200000, 0);
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    spawn {
        sleep 4;
        loop 40 {
            SI_VAR(1) -= 1;
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    0x802D286C(2048);
    0x802D2520(0x10002, 5, 2, 1, 1, 0);
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_80241DAC) = SCRIPT({
    0x802D249C(SI_VAR(0));
    if (SI_VAR(0) == 0) {
        return;
    }
    GetPlayerActionState(SI_VAR(0));
    if (SI_VAR(0) == 26) {
        return;
    }
    GetCurrentPartner(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        GetCurrentPartnerID(SI_VAR(1));
        if (SI_VAR(1) != 6) {
            return;
        } else {
            0x802D2B6C();
            DisablePlayerInput(1);
        }
    } else {
        DisablePlayerInput(1);
    }
    group 27;
    func_80240000_8975E0();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_802400F0_8976D0();
    SI_VAR(5) = SI_VAR(1);
    SI_VAR(6) = SI_VAR(2);
    SI_VAR(6) += 2;
    SI_VAR(7) = SI_VAR(3);
    SI_VAR(8) = SI_VAR(4);
    SI_VAR(8) += 180;
    if (SI_VAR(4) >= 360) {
        SI_VAR(4) -= 360;
    }
    InterpPlayerYaw(SI_VAR(8), 1);
    sleep 1;
    PlaySound(355);
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerPos(SI_VAR(0), SI_VAR(6), SI_VAR(7));
    SetPlayerAnimation(0x10000);
    0x802D286C(2048);
    0x802D2520(0x10000, 5, 3, 1, 1, 0);
    spawn {
        sleep 8;
        HidePlayerShadow(1);
    }
    spawn {
        sleep 3;
        loop 40 {
            func_8024023C_89781C(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_802420E0) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_802402E0_8978C0();
                    return;
                }
            }
        }
    }
    func_80240404_8979E4();
});

Script N(script_8024217C) = SCRIPT({
    GotoMap(D_80242D60_89A340, 3);
    sleep 100;
});

Script N(script_802421AC) = SCRIPT({
    group 27;
    SI_VAR(10) = 0;
    SI_VAR(11) = 5;
    SI_VAR(12) = N(script_8024217C);
    await N(script_80241DAC);
});

Script N(script_80242204) = SCRIPT({
    ModifyColliderFlags(1, 5, 0x7FFFFE00);
    bind N(script_802421AC) to TriggerFlag_WALL_PUSH 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    spawn N(script_80241380);
    PlaySound(0x80000044);
    PlaySoundAtF(0x80000045, 1, 0, 0xFFFFFFEC, 30);
    PlaySoundAtF(0x80000046, 1, 270, 0xFFFFFFEC, 30);
    EnableTexPanning(8, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 70;
        SI_VAR(2) = 100;
        SI_VAR(3) = 100;
        SI_VAR(4) = 130;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802420E0);
    }
    EnableTexPanning(10, 1);
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 0xFFFFFFCE;
        SI_VAR(2) = 0xFFFFFC7C;
        SI_VAR(3) = 0xFFFFFFBA;
        SI_VAR(4) = 0xFFFFFB50;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802420E0);
    }
    EnableTexPanning(11, 1);
    spawn {
        SI_VAR(0) = 5;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0xFFFFFA88;
        SI_VAR(3) = 0xFFFFF5D8;
        SI_VAR(4) = 0xFFFFFFC4;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_802420E0);
    }
    SetRenderMode(8, 22);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(10) = N(script_80242204);
    SI_VAR(11) = 5;
    spawn N(script_80241704);
    sleep 1;
});

s32 pad_0026A8[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_802426B0)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_802426B8)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_802426C8)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80242708)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80242714) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240B34_898114(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80241128_898708(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80241128_898708(50, 50);
    }
    spawn {
        sleep 3;
        func_8024062C_897C0C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_80240B98_898178();
        func_80241268_898848();
        sleep 5;
        func_802412B0_898890();
        sleep 5;
        func_80241268_898848();
    }
    sleep 3;
    func_80240BF0_8981D0(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_80242878) = SCRIPT({
    if (SI_SAVE_FLAG(437) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_802412F8_8988D8();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_802405F0_897BD0();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_80240A70_898050(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240710_897CF0();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240B00_8980E0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024060C_897BEC();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802407BC_897D9C();
    if (SI_VAR(0) == -1) {
        func_80240B00_8980E0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024060C_897BEC();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_80240A0C_897FEC(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240B00_8980E0(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024060C_897BEC();
        return;
    }
    await N(script_80242714);
    func_80240658_897C38(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(437) = 1;
    func_80240B00_8980E0(SI_VAR(9));
    func_80240A38_898018();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024060C_897BEC();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 760, 75, 0xFFFFFFF6, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(437));
    AssignScript(N(script_80242878));
});

s32 pad_002D5C[] = {
    0x00000000,
};

// rodata: D_80242D60_89A340

s32 pad_002D68[] = {
    0x00000000, 0x00000000,
};

