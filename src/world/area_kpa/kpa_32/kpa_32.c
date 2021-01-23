#include "kpa_32.h"

s32 pad_00030C[1];
Script N(script_80240390);
s32 pad_0003F8[2];
Script N(script_MakeEntities);
s32 pad_000434[3];
Script N(script_UpdateTexturePan_80240440);
Script N(script_ExitDoubleDoor_802404DC);
Script N(script_ExitWalk_80240580);
Script N(script_ExitDoubleDoor_802405DC);
Script N(script_ExitDoubleDoor_80240680);
Script N(script_80240724);
Script N(script_EnterDoubleDoor_802407A4);
Script N(main);
const char D_80240FA0_A5F060[8]; // "kpa_81"
const char D_80240FA8_A5F068[8]; // "kpa_90"
const char D_80240FB0_A5F070[8]; // "kpa_51"
const char D_80240FB8_A5F078[8]; // "kpa_96"

// text: func_80240000_A5E0C0

// text: func_80240124_A5E1E4

s32 pad_00030C[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -575.0f, -50.0f, -5.0f, 90.0f },
    { 545.0f, -50.0f, -5.0f, 270.0f },
    { 535.0f, 140.0f, 0.0f, 270.0f },
    { -535.0f, 140.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x19016B,
};

Script N(script_80240390) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(6);
    }
});

s32 pad_0003F8[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0, 10, 0, 0, 0x80000000);
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
                    func_80240000_A5E0C0();
                    return;
                }
            }
        }
    }
    func_80240124_A5E1E4();
});

Script N(script_ExitDoubleDoor_802404DC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 21;
    SI_VAR(2) = 127;
    SI_VAR(3) = 129;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240FA0_A5F060, 2);
    sleep 100;
});

Script N(script_ExitWalk_80240580) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240FA8_A5F068, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_802405DC) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 2;
    SI_VAR(1) = 26;
    SI_VAR(2) = 110;
    SI_VAR(3) = 108;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240FB0_A5F070, 0);
    sleep 100;
});

Script N(script_ExitDoubleDoor_80240680) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 3;
    SI_VAR(1) = 35;
    SI_VAR(2) = 115;
    SI_VAR(3) = 117;
    spawn ExitDoubleDoor;
    sleep 17;
    GotoMap(D_80240FB8_A5F078, 0);
    sleep 100;
});

Script N(script_80240724) = SCRIPT({
    bind N(script_ExitDoubleDoor_802404DC) to TriggerFlag_WALL_INTERACT 21;
    bind N(script_ExitWalk_80240580) to 0x80000 30;
    bind N(script_ExitDoubleDoor_802405DC) to TriggerFlag_WALL_INTERACT 26;
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
            SI_VAR(0) = 0;
            SI_VAR(2) = 129;
            SI_VAR(3) = 127;
            spawn EnterDoubleDoor;
            spawn N(script_80240724);
        }
        == 1 {
            SI_VAR(0) = N(script_80240724);
            spawn EnterWalk;
        }
        == 2 {
            SI_VAR(0) = 2;
            SI_VAR(2) = 110;
            SI_VAR(3) = 108;
            spawn EnterDoubleDoor;
            spawn N(script_80240724);
        }
        == 3 {
            SI_VAR(0) = 3;
            SI_VAR(2) = 115;
            SI_VAR(3) = 117;
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
    EnableTexPanning(68, 1);
    EnableTexPanning(71, 1);
    EnableTexPanning(74, 1);
    EnableTexPanning(77, 1);
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
            ScaleModel(68, 1.0205078125, 1, 1.0205078125);
            ScaleModel(71, 1.0205078125, 1, 1.0205078125);
            ScaleModel(74, 1.0205078125, 1, 1.0205078125);
            ScaleModel(77, 1.0205078125, 1, 1.0205078125);
            sleep 10;
            ScaleModel(68, 1.0, 1, 1.0);
            ScaleModel(71, 1.0, 1, 1.0);
            ScaleModel(74, 1.0, 1, 1.0);
            ScaleModel(77, 1.0, 1, 1.0);
            sleep 10;
            ScaleModel(68, 0.98046875, 1, 0.98046875);
            ScaleModel(71, 0.98046875, 1, 0.98046875);
            ScaleModel(74, 0.98046875, 1, 0.98046875);
            ScaleModel(77, 0.98046875, 1, 0.98046875);
            sleep 10;
        }
    }
});

// rodata: D_80240FA0_A5F060

// rodata: D_80240FA8_A5F068

// rodata: D_80240FB0_A5F070

// rodata: D_80240FB8_A5F078
