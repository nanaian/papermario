#include "tik_17.h"

s32 pad_000024[3];
s32 pad_000D68[2];
s32 pad_00135C[1];
Script N(script_802413C0);
s32 pad_001414[3];
s32 N(unk_80241420)[2];
s32 N(unk_80241428)[4];
s32 N(unk_80241438)[16];
s32 N(unk_80241478)[3];
Script N(script_80241484);
Script N(script_802415E8);
Script N(script_MakeEntities);
s32 pad_001ACC[1];
Script N(script_80241AD0);
Script N(script_80241E24);
Script N(script_80242214);
Script N(script_802422F0);
Script N(script_802424CC);
Script N(script_UpdateTexturePan_80242800);
Script N(script_8024289C);
Script N(script_80242934);
Script N(script_8024298C);
Script N(script_802429BC);
Script N(script_80242A14);
Script N(main);
s32 pad_002C98[2];
const char D_80242CA0_8956C0[8]; // "sam_02"
const char D_80242CA8_8956C8[8]; // "kmr_22"
const char D_80242CB0_8956D0[8]; // "tik_22"
s32 pad_002CB8[2];

// text: func_80240000_892A20

s32 pad_000024[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240030_892A50

// text: func_8024004C_892A6C

// text: func_8024006C_892A8C

// text: func_80240098_892AB8

// text: func_80240104_892B24

// text: func_80240150_892B70

// text: func_802401FC_892C1C

// text: func_8024044C_892E6C

// text: func_80240478_892E98

// text: func_802404B0_892ED0

// text: func_80240540_892F60

// text: func_80240574_892F94

// text: func_802405D8_892FF8

// text: func_80240630_893050

// text: func_80240B68_893588

// text: func_80240CA8_8936C8

// text: func_80240CF0_893710

// text: func_80240D38_893758

s32 pad_000D68[] = {
    0x00000000, 0x00000000,
};

// text: func_80240D70_893790

// text: func_80240D90_8937B0

// text: func_80240DA4_8937C4

// text: func_80240E60_893880

// text: func_80240F40_893960

// text: func_80240FAC_8939CC

// text: func_80241050_893A70

// text: func_80241174_893B94

s32 pad_00135C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { 400.0f, 20.0f, 10.0f, 180.0f },
    { 720.0f, 65.0f, 5.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190030,
};

Script N(script_802413C0) = SCRIPT({
    SetMusicTrack(0, 75, 0, 8);
    spawn {
        sleep 30;
        func_80240000_892A20();
    }
});

s32 pad_001414[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(unk_80241420)[] = {
    0x001D00F0, 0x001D00F1,
};

s32 N(unk_80241428)[] = {
    0x00010002, 0x00030004, 0x00090006, 0x00070008,
};

s32 N(unk_80241438)[] = {
    0x001D00E0, 0x001D00E1, 0x001D00E2, 0x001D00E3, 0x001D00E4, 0x001D00E5, 0x001D00E6, 0x001D00E7,
    0x001D00E8, 0x001D00E9, 0x001D00EA, 0x001D00EB, 0x001D00EC, 0x001D00ED, 0x001D00EE, 0x001D00EF,
};

s32 N(unk_80241478)[] = {
    0x430C0000, 0x43340000, 0x435C0000,
};

Script N(script_80241484) = SCRIPT({
    sleep 10;
    PlaySound(8493);
    func_80240574_892F94(SI_MAP_VAR(0));
    sleep 85;
    spawn {
        PlaySound(8494);
        func_80240B68_893588(70, 70);
        sleep 27;
        PlaySound(8334);
        func_80240B68_893588(50, 50);
    }
    spawn {
        sleep 3;
        func_8024006C_892A8C(SI_MAP_VAR(0));
    }
    spawn {
        sleep 47;
        func_802405D8_892FF8();
        func_80240CA8_8936C8();
        sleep 5;
        func_80240CF0_893710();
        sleep 5;
        func_80240CA8_8936C8();
    }
    sleep 3;
    func_80240630_893050(SI_MAP_VAR(0));
    sleep 30;
});

Script N(script_802415E8) = SCRIPT({
    if (SI_SAVE_FLAG(436) == 1) {
        return;
    }
    0x800441F0(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        return;
    }
    func_80240D38_893758();
    if (SI_VAR(0) == 1) {
        return;
    }
    0x802D585C(1, 0x200000);
    func_80240030_892A50();
    DisablePlayerInput(1);
    DisablePartnerAI(0);
    SetNpcFlagBits(0xFFFFFFFC, 256, 1);
    func_802404B0_892ED0(SI_MAP_VAR(0), SI_VAR(9));
    FindKeyItem(15, SI_VAR(12));
    func_80240150_892B70();
    if (SI_VAR(0) == -1) {
        ShowMessageAtScreenPos(0x1D00DC, 160, 40);
        sleep 10;
        func_80240540_892F60(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024004C_892A6C();
        return;
    }
    if (SI_SAVE_FLAG(438) == 0) {
        SI_SAVE_FLAG(438) = 1;
        ShowMessageAtScreenPos(0x1D00DA, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DB, 160, 40);
    }
    func_802401FC_892C1C();
    if (SI_VAR(0) == -1) {
        func_80240540_892F60(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024004C_892A6C();
        return;
    }
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    EnablePartnerAI();
    GetCurrentPartnerID(SI_VAR(0));
    if (SI_VAR(0) != SI_VAR(11)) {
        func_8024044C_892E6C(SI_VAR(11));
    } else {
        0x802CF56C(2);
    }
    sleep 10;
    ShowMessageAtScreenPos(0x1D00DF, 160, 40);
    ShowChoice(0x1E000D);
    CloseMessage();
    if (SI_VAR(0) != 0) {
        func_80240540_892F60(SI_VAR(9));
        DisablePlayerInput(0);
        EnablePartnerAI();
        0x802D585C(0, 0x200000);
        func_8024004C_892A6C();
        return;
    }
    await N(script_80241484);
    func_80240098_892AB8(SI_VAR(11), SI_VAR(13));
    SI_SAVE_FLAG(436) = 1;
    func_80240540_892F60(SI_VAR(9));
    func_80240478_892E98();
    if (SI_VAR(13) == 1) {
        ShowMessageAtScreenPos(0x1D00DD, 160, 40);
    } else {
        ShowMessageAtScreenPos(0x1D00DE, 160, 40);
    }
    DisablePlayerInput(0);
    EnablePartnerAI();
    0x802D585C(0, 0x200000);
    func_8024004C_892A6C();
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EA910, 0xFFFFFF7E, 50, 0, 0, 0x80000000);
    SI_MAP_VAR(0) = SI_VAR(0);
    AssignBlockFlag(SI_SAVE_FLAG(436));
    AssignScript(N(script_802415E8));
});

s32 pad_001ACC[] = {
    0x00000000,
};

Script N(script_80241AD0) = SCRIPT({
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
    func_80240E60_893880();
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
    func_80240D90_8937B0();
    sleep 1;
    if (SI_VAR(0) != -1) {
        goto 0;
    }
    spawn 0xFE363C8A;
});

Script N(script_80241E24) = SCRIPT({
    DisablePlayerInput(1);
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    GetEntryID(SI_VAR(0));
    func_80240E60_893880();
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
        func_80240FAC_8939CC(1.0);
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

Script N(script_80242214) = SCRIPT({
    func_80240DA4_8937C4();
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
    await N(script_802422F0);
});

Script N(script_802422F0) = SCRIPT({
    func_80240D70_893790();
    group 27;
    DisablePlayerPhysics(1);
    HidePlayerShadow(1);
    SI_VAR(0) = SI_VAR(10);
    func_80240E60_893880();
    PlayerMoveTo(SI_VAR(1), SI_VAR(3), 3);
    SI_VAR(0) = SI_VAR(10);
    func_80240E60_893880();
    SetPlayerPos(SI_VAR(1), SI_VAR(2), SI_VAR(3));
    SetPlayerFlagBits(0x200000, 1);
    func_80240F40_893960();
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

Script N(script_802424CC) = SCRIPT({
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
    func_80240D70_893790();
    DisablePlayerPhysics(1);
    ModifyColliderFlags(0, SI_VAR(11), 0x7FFFFE00);
    SI_VAR(0) = SI_VAR(10);
    func_80240E60_893880();
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
            func_80240FAC_8939CC(1.0);
            SetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
            sleep 1;
        }
    }
    sleep 25;
    await 0xFE363C8C;
});

Script N(script_UpdateTexturePan_80242800) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80241050_893A70();
                    return;
                }
            }
        }
    }
    func_80241174_893B94();
});

Script N(script_8024289C) = SCRIPT({
    if (SI_SAVE_FLAG(7) == 0) {
        SI_SAVE_FLAG(7) = 1;
        FadeOutMusic(0, 1500);
        GotoMapSpecial(D_80242CA8_8956C8, 7, 6);
        sleep 100;
        return;
    }
    GotoMap(D_80242CA0_8956C0, 2);
    sleep 100;
});

Script N(script_80242934) = SCRIPT({
    group 27;
    SI_VAR(10) = 1;
    SI_VAR(11) = 8;
    SI_VAR(12) = N(script_8024289C);
    await N(script_802424CC);
});

Script N(script_8024298C) = SCRIPT({
    GotoMap(D_80242CB0_8956D0, 1);
    sleep 100;
});

Script N(script_802429BC) = SCRIPT({
    group 27;
    SI_VAR(10) = 0;
    SI_VAR(11) = 5;
    SI_VAR(12) = N(script_8024298C);
    await N(script_80242214);
});

Script N(script_80242A14) = SCRIPT({
    bind N(script_80242934) to TriggerFlag_WALL_PUSH 8;
    bind N(script_802429BC) to TriggerFlag_FLOOR_TOUCH 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 2;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    spawn N(script_802413C0);
    sleep 1;
    GetEntryID(SI_VAR(0));
    if (SI_VAR(0) != 0) {
        SI_VAR(10) = N(script_80242A14);
        SI_VAR(11) = 8;
        spawn N(script_80241E24);
    } else {
        SI_VAR(10) = N(script_80242A14);
        spawn N(script_80241AD0);
    }
    sleep 1;
    SetTexPanner(23, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 0xFFFFFED4;
        SI_VAR(2) = 0;
        SI_VAR(3) = 0;
        SI_VAR(4) = 0;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80242800);
    }
});

s32 pad_002C98[] = {
    0x00000000, 0x00000000,
};

// rodata: D_80242CA0_8956C0

// rodata: D_80242CA8_8956C8

// rodata: D_80242CB0_8956D0

s32 pad_002CB8[] = {
    0x00000000, 0x00000000,
};

