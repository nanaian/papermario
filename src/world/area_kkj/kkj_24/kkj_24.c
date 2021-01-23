#include "kkj_24.h"

Script N(script_80240080);
s32 pad_0000C4[3];
Script N(script_ExitDoubleDoor_802400D0);
Script N(script_ExitDoubleDoor_80240174);
Script N(script_80240218);
Script N(script_EnterDoubleDoor_80240260);
Script N(main);
s32 pad_000438[2];
Script N(script_MakeEntities);
s32 pad_000474[3];
const char D_80240480_B069F0[8]; // "kkj_23"
const char D_80240488_B069F8[8]; // "kkj_25"

// text: func_80240000_B06570

EntryList N(entryList) = {
    { 145.0f, 0.0f, -10.0f, 270.0f },
    { 145.0f, 420.0f, -20.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190019,
};

Script N(script_80240080) = SCRIPT({
    if (SI_SAVE_VAR(0) >= 95) {
        SetMusicTrack(0, 102, 0, 8);
    }
});

s32 pad_0000C4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_ExitDoubleDoor_802400D0) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 15;
    SI_VAR(3) = 13;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240480_B069F0, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240174) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 7;
    SI_VAR(2) = 24;
    SI_VAR(3) = 22;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240488_B069F8, 0);
    sleep 100;
});

Script N(script_80240218) = SCRIPT({
    bind N(script_ExitDoubleDoor_802400D0) to TriggerFlag_WALL_INTERACT 2;
    bind N(script_ExitDoubleDoor_80240174) to TriggerFlag_WALL_INTERACT 7;
});

Script N(script_EnterDoubleDoor_80240260) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240218);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(2) = 15;
            SI_VAR(3) = 13;
            await EnterDoubleDoor;
        }
        == 1 {
            SI_VAR(2) = 24;
            SI_VAR(3) = 22;
            await EnterDoubleDoor;
        }
    }
    spawn N(script_80240218);
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(0x50008);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    func_80240000_B06570();
    spawn N(script_80240080);
    UseDoorSounds(2);
    spawn N(script_EnterDoubleDoor_80240260);
    sleep 1;
});

s32 pad_000438[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0xFFFFFFE7, 60, 0xFFFFFFCE, 0, 0x80000000);
});

s32 pad_000474[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_80240480_B069F0

// rodata: D_80240488_B069F8

