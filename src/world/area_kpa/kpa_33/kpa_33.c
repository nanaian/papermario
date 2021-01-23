#include "kpa_33.h"

s32 pad_00030C[1];
Script N(script_80240390);
s32 pad_0003F8[2];
Script N(script_MakeEntities);
s32 pad_000434[3];
Script N(script_UpdateTexturePan_80240440);
Script N(script_ExitWalk_802404DC);
Script N(script_ExitDoubleDoor_80240538);
Script N(script_ExitDoubleDoor_802405DC);
Script N(script_ExitDoubleDoor_80240680);
Script N(script_80240724);
Script N(script_EnterDoubleDoor_802407A4);
Script N(main);
const char D_80240FA0_A60020[8]; // "kpa_94"
const char D_80240FA8_A60028[8]; // "kpa_61"
const char D_80240FB0_A60030[8]; // "kpa_52"
const char D_80240FB8_A60038[8]; // "kpa_09"

// text: func_80240000_A5F080

// text: func_80240124_A5F1A4

s32 pad_00030C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -547.0f, -50.0f, -5.0f, 90.0f },
    { 547.0f, -50.0f, -5.0f, 270.0f },
    { 550.0f, 140.0f, 0.0f, 270.0f },
    { -550.0f, 140.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190178,
};

Script N(script_80240390) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        func_802D5FA4(7);
    }
});

s32 pad_0003F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(D_802E9A18, 0, 10, 0, 0, 0x80000000);
});

s32 pad_000434[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_UpdateTexturePan_80240440) = SCRIPT({
    group 0;
    if (SI_VAR(5) == 1) {
        if (SI_VAR(6) == 1) {
            if (SI_VAR(7) == 1) {
                if (SI_VAR(8) == 1) {
                    func_80240000_A5F080();
                    return;
                }
            }
        }
    }
    func_80240124_A5F1A4();
});

Script N(script_ExitWalk_802404DC) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80240FA0_A60020, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240538) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 1;
    SI_VAR(1) = 30;
    SI_VAR(2) = 124;
    SI_VAR(3) = 122;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240FA8_A60028, 1);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802405DC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 25;
    SI_VAR(2) = 107;
    SI_VAR(3) = 109;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240FB0_A60030, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240680) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 35;
    SI_VAR(2) = 112;
    SI_VAR(3) = 114;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240FB8_A60038, 1);
    sleep 100;
});

Script N(script_80240724) = SCRIPT({
    bind N(script_ExitWalk_802404DC) to 0x80000 20;
    bind N(script_ExitDoubleDoor_80240538) to TriggerFlag_WALL_INTERACT 30;
    bind N(script_ExitDoubleDoor_802405DC) to TriggerFlag_WALL_INTERACT 25;
    bind N(script_ExitDoubleDoor_80240680) to TriggerFlag_WALL_INTERACT 35;
});

Script N(script_EnterDoubleDoor_802407A4) = SCRIPT({
    GetLoadType(SI_VAR(0));
    if (SI_VAR(0) == 1) {
        spawn EnterSavePoint;
        spawn N(script_80240724);
        return;
    }
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            SI_VAR(0) = N(script_80240724);
            spawn EnterWalk;
        }
        == 1 {
            SI_VAR(0) = 1;
            SI_VAR(2) = 124;
            SI_VAR(3) = 122;
            spawn EnterDoubleDoor;
            spawn N(script_80240724);
        }
        == 2 {
            SI_VAR(0) = 2;
            SI_VAR(2) = 107;
            SI_VAR(3) = 109;
            spawn EnterDoubleDoor;
            spawn N(script_80240724);
        }
        == 3 {
            SI_VAR(0) = 3;
            SI_VAR(2) = 112;
            SI_VAR(3) = 114;
            spawn EnterDoubleDoor;
            spawn N(script_80240724);
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_MakeEntities);
    spawn N(script_EnterDoubleDoor_802407A4);
    sleep 1;
    spawn N(script_80240390);
    EnableTexPanning(69, 1);
    EnableTexPanning(72, 1);
    EnableTexPanning(75, 1);
    EnableTexPanning(78, 1);
    spawn {
        SI_VAR(0) = 1;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240440);
    }
    spawn {
        SI_VAR(0) = 2;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240440);
    }
    spawn {
        SI_VAR(0) = 3;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240440);
    }
    spawn {
        SI_VAR(0) = 4;
        SI_VAR(1) = 20;
        SI_VAR(2) = 20;
        SI_VAR(3) = 0xFFFFFFEC;
        SI_VAR(4) = 0xFFFFFFEC;
        SI_VAR(5) = 1;
        SI_VAR(6) = 1;
        SI_VAR(7) = 1;
        SI_VAR(8) = 1;
        SI_VAR(9) = 0;
        SI_VAR(10) = 0;
        SI_VAR(11) = 0;
        SI_VAR(12) = 0;
        spawn N(script_UpdateTexturePan_80240440);
    }
    spawn {
        loop {
            ScaleModel(69, 1.0205078125, 1, 1.0205078125);
            ScaleModel(72, 1.0205078125, 1, 1.0205078125);
            ScaleModel(75, 1.0205078125, 1, 1.0205078125);
            ScaleModel(78, 1.0205078125, 1, 1.0205078125);
            sleep 10;
            ScaleModel(69, 1.0, 1, 1.0);
            ScaleModel(72, 1.0, 1, 1.0);
            ScaleModel(75, 1.0, 1, 1.0);
            ScaleModel(78, 1.0, 1, 1.0);
            sleep 10;
            ScaleModel(69, 0.98046875, 1, 0.98046875);
            ScaleModel(72, 0.98046875, 1, 0.98046875);
            ScaleModel(75, 0.98046875, 1, 0.98046875);
            ScaleModel(78, 0.98046875, 1, 0.98046875);
            sleep 10;
        }
    }
});

// rodata: D_80240FA0_A60020

// rodata: D_80240FA8_A60028

// rodata: D_80240FB0_A60030

// rodata: D_80240FB8_A60038
