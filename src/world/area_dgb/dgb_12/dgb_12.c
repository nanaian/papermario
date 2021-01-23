#include "dgb_12.h"

s32 pad_0002BC[1];
Script N(script_80240310);
s32 pad_0003A8[2];
Script N(script_ExitSingleDoor_802403B0);
Script N(script_EnterSingleDoor_80240464);
Script N(main);
s32 N(lavaResetList_802405C0)[8];
Script N(script_802405E0);
s32 pad_000868[2];
s32 N(unk_80240870)[1];
Script N(script_80240874);
Script N(script_802408DC);
Script N(script_802409BC);
Script N(script_MakeEntities);
const char D_80240A60_C4E950[8]; // "dgb_09"
s32 pad_000A68[2];

// text: func_80240000_C4DEF0

// text: func_802400B4_C4DFA4

// text: func_80240118_C4E008

// text: func_80240268_C4E158

s32 pad_0002BC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -500.0f, 0.0f, -40.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900CC,
};

Script N(script_80240310) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        } else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_0003A8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitSingleDoor_802403B0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    UseDoorSounds(0);
    SI_VAR(0) = 0;
    SI_VAR(1) = 8;
    SI_VAR(2) = 14;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap(D_80240A60_C4E950, 2);
    sleep 100;
});

Script N(script_EnterSingleDoor_80240464) = SCRIPT({
    UseDoorSounds(0);
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 14;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_802405E0);
    spawn N(script_80240310);
    bind N(script_ExitSingleDoor_802403B0) to TriggerFlag_WALL_INTERACT 8;
    spawn N(script_EnterSingleDoor_80240464);
});

s32 N(lavaResetList_802405C0)[] = {
    0x00000005, 0xC3FB8000, 0x00000000, 0xC27C0000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000,
};

Script N(script_802405E0) = SCRIPT({
    group 239;
    ModifyColliderFlags(3, 12, 2);
    ModifyColliderFlags(3, 0, 2);
    ModifyColliderFlags(3, 14, 2);
    spawn {
        ResetFromLava(N(lavaResetList_802405C0));
    }
    sleep 50;
    TranslateModel(19, 0, 0, 0);
    ParentColliderToModel(12, 19);
    loop {
        spawn {
            sleep 2;
            ModifyColliderFlags(0, 0, 0x7FFFFE00);
        }
        MakeLerp(0, 0xFFFFFFDD, 15, 0);
        loop {
            UpdateLerp();
            TranslateModel(19, 0, SI_VAR(0), 0);
            UpdateColliderTransform(12);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 60;
        PlaySoundAtCollider(0, 8339, 0);
        spawn {
            ModifyColliderFlags(1, 0, 0x7FFFFE00);
        }
        MakeLerp(0xFFFFFFDD, 0, 4, 0);
        loop {
            UpdateLerp();
            TranslateModel(19, 0, SI_VAR(0), 0);
            UpdateColliderTransform(12);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        sleep 35;
    }
});

s32 pad_000868[] = {
    0x00000000, 0x00000000,
};

s32 N(unk_80240870)[] = {
    0x00000000,
};

Script N(script_80240874) = SCRIPT({
    group 0;
    0x802D5830(2);
    sleep 40;
    ShowGotItem(SI_VAR(0), 0, 0);
    0x802D5830(0);
    return;
});

Script N(script_802408DC) = SCRIPT({
    DisablePlayerInput(1);
    SI_VAR(0) = SI_VAR(10);
    if (SI_VAR(10) != 0) {
        await N(script_80240874);
    }
    match SI_VAR(11) {
        == 0 {
            AddItem(SI_VAR(10), SI_VAR(0));
        }
        == 1 {
            AddKeyItem(SI_VAR(10));
        }
        == 2 {
            AddBadge(SI_VAR(10), SI_VAR(0));
        }
    }
    sleep 15;
    DisablePlayerInput(0);
});

Script N(script_802409BC) = SCRIPT({
    SI_VAR(10) = 19;
    SI_VAR(11) = 1;
    SI_SAVE_FLAG(1057) = 1;
    await N(script_802408DC);
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE30, 0xFFFFFF1F, 0, 0xFFFFFF0B, 0, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(1057));
    AssignScript(N(script_802409BC));
});

// rodata: D_80240A60_C4E950

s32 pad_000A68[] = {
    0x00000000, 0x00000000,
};
