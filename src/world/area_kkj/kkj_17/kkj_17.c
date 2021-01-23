#include "kkj_17.h"

s32 pad_000594[3];
Script N(script_ExitSingleDoor_802405F0);
Script N(script_EnterSingleDoor_80240694);
Script N(main);
s32 pad_0007DC[1];
Script N(script_802407E0);
Script N(script_8024084C);
s32 pad_0008BC[1];
s32 N(unk_802408C0)[1];
Script N(script_802408C4);
s32 N(intTable_8024092C)[5];
Script N(script_80240940);
Script N(script_802409F0);
Script N(script_80240AA0);
Script N(script_80240BD4);
Script N(script_80240D9C);
Script N(script_80240F38);
Script N(script_80240FF8);
s32 pad_001024[3];
const char D_80241030_AF2C90[8]; // "kkj_11"
s32 pad_001038[2];

// text: func_80240000_AF1C60

// text: func_802400B4_AF1D14

// text: func_80240118_AF1D78

// text: func_80240268_AF1EC8

// text: func_802402BC_AF1F1C

// text: func_80240500_AF2160

// text: func_80240568_AF21C8

s32 pad_000594[] = {
    0x00000000, 0x00000000, 0x00000000,
};

EntryList N(entryList) = {
    { -187.0f, 0.0f, -35.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190012,
};

Script N(script_ExitSingleDoor_802405F0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 2;
    SI_VAR(3) = 1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80241030_AF2C90, 5);
    sleep 100;
});

Script N(script_EnterSingleDoor_80240694) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 2;
            SI_VAR(3) = 1;
            await EnterSingleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50004);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    await N(script_8024084C);
    spawn N(script_80240FF8);
    UseDoorSounds(0);
    bind N(script_ExitSingleDoor_802405F0) to TriggerFlag_WALL_INTERACT 2;
    spawn N(script_EnterSingleDoor_80240694);
    sleep 1;
});

s32 pad_0007DC[] = {
    0x00000000,
};

Script N(script_802407E0) = SCRIPT({
    loop {
        if (SI_SAVE_FLAG(486) == 1) {
            break;
        }
        sleep 1;
    }
    sleep 10;
    RemoveBadge(297);
});

Script N(script_8024084C) = SCRIPT({
    MakeItemEntity(297, 100, 0, 0xFFFFFFE2, 17, SI_SAVE_FLAG(486));
    if (SI_SAVE_VAR(0) < 95) {
        if (SI_SAVE_FLAG(486) == 0) {
            spawn N(script_802407E0);
        }
    }
});

s32 pad_0008BC[] = {
    0x00000000,
};

s32 N(unk_802408C0)[] = {
    0x00000000,
};

Script N(script_802408C4) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

s32 N(intTable_8024092C)[] = {
    0x0000010D, 0x00000083, 0x00000129, 0x00000111, 0x000000A2,
};

Script N(script_80240940) = SCRIPT({
    PlaySoundAtCollider(10, 8266, 0);
    MakeLerp(0, 80, 20, 4);
    loop {
        UpdateLerp();
        RotateGroup(23, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802409F0) = SCRIPT({
    MakeLerp(80, 0, 20, 4);
    loop {
        UpdateLerp();
        RotateGroup(23, SI_VAR(0), -1, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    PlaySoundAtCollider(10, 8267, 0);
});

Script N(script_80240AA0) = SCRIPT({
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x14018E);
    SetPlayerAnimation(0xC0000);
    sleep 10;
    SetPlayerAnimation(0xC0026);
    SpeakToNpc(0xFFFFFFFE, 0xC0001, 0xC0026, 0, 0xFFFFFFFC, 0x14018F);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140190);
    SpeakToNpc(0xFFFFFFFE, 0xC0001, 0xC0026, 0, 0xFFFFFFFC, 0x140191);
    SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140192);
    SpeakToNpc(0xFFFFFFFE, 0xC0001, 0xC0026, 0, 0xFFFFFFFC, 0x140193);
    SetPlayerAnimation(0xC0002);
    sleep 10;
    SetPlayerAnimation(0xA0001);
});

Script N(script_80240BD4) = SCRIPT({
    SI_VAR(0) = 0;
    func_802402BC_AF1F1C();
    match SI_VAR(0) {
        == -1 {}
        == 0 {
            sleep 10;
            SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140194);
            SetPlayerAnimation(0xC0000);
            sleep 10;
            SetPlayerAnimation(0xC0026);
            SpeakToNpc(0xFFFFFFFE, 0xC0001, 0xC0026, 0, 0xFFFFFFFC, 0x140195);
            SpeakToPlayer(0xFFFFFFFC, 0x200009, 0x200001, 0, 0x140196);
            SpeakToNpc(0xFFFFFFFE, 0xC0001, 0xC0026, 0, 0xFFFFFFFC, 0x140197);
            SetPlayerAnimation(0xC0002);
            sleep 10;
            SetPlayerAnimation(0xA0001);
        }
        else {
            sleep 10;
            SI_VAR(9) = SI_VAR(0);
            await N(script_80240940);
            func_802400B4_AF1D14(SI_VAR(9));
            SetMessageString(SI_VAR(9), 0);
            ShowMessageAtScreenPos(0x140198, 160, 40);
            sleep 10;
            await N(script_802409F0);
        }
    }
});

Script N(script_80240D9C) = SCRIPT({
    await N(script_80240940);
    SI_VAR(0) = 1;
    func_802402BC_AF1F1C();
    match SI_VAR(0) {
        == -1 {}
        == 0 {
            ShowMessageAtScreenPos(0x1D00D4, 160, 40);
        }
        269, 297, 273 {
            group 0;
            0x802D5830(2);
            ShowGotItem(SI_VAR(0), 0, 0);
            0x802D5830(0);
            AddBadge(SI_VAR(0), SI_VAR(1));
            func_80240500_AF2160();
        }
        else {
            func_80240568_AF21C8();
            if (SI_VAR(1) <= 0) {
                ShowMessageAtScreenPos(0x1D00D5, 160, 40);
            } else {
                ShowGotItem(SI_VAR(0), 0, 2);
                AddItem(SI_VAR(0), SI_VAR(1));
                func_80240500_AF2160();
            }
        }
    }
    await N(script_802409F0);
});

Script N(script_80240F38) = SCRIPT({
    DisablePlayerInput(1);
    DisablePartnerAI(1);
    if (SI_SAVE_VAR(0) < 95) {
        if (SI_SAVE_FLAG(483) == 0) {
            await N(script_80240AA0);
            SI_SAVE_FLAG(483) = 1;
        } else {
            await N(script_80240BD4);
        }
    } else {
        await N(script_80240D9C);
    }
    EnablePartnerAI();
    DisablePlayerInput(0);
});

Script N(script_80240FF8) = SCRIPT({
    bind N(script_80240F38) to TriggerFlag_WALL_INTERACT 10;
});

s32 pad_001024[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80241030_AF2C90

s32 pad_001038[] = {
    0x00000000, 0x00000000,
};

