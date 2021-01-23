#include "kkj_28.h"

Script N(script_ExitSingleDoor_80240050);
Script N(script_EnterSingleDoor_802400F4);
Script N(main);

EntryList N(entryList) = {
    { 325.0f, 0.0f, -30.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
};

Script N(script_ExitSingleDoor_80240050) = SCRIPT({
    group 27;
    DisablePlayerInput(1);
    SI_VAR(0) = 0;
    SI_VAR(1) = 2;
    SI_VAR(2) = 149;
    SI_VAR(3) = -1;
    spawn ExitSingleDoor;
    sleep 17;
    GotoMap("kkj_10", 2);
    sleep 100;
});

Script N(script_EnterSingleDoor_802400F4) = SCRIPT({
    SI_VAR(2) = 149;
    SI_VAR(3) = -1;
    await EnterSingleDoor;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 26;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    EnableGroup(168, 0);
    UseDoorSounds(0);
    bind N(script_ExitSingleDoor_80240050) to TriggerFlag_WALL_INTERACT 2;
    spawn N(script_EnterSingleDoor_802400F4);
});
