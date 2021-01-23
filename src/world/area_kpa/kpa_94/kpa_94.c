#include "kpa_94.h"

EntryList N(entryList) = {
    { -270.0f, -240.0f, 100.0f, 90.0f },
    { 470.0f, 0.0f, 100.0f, 270.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190179,
};

Script N(script_80240060) = SCRIPT({
    SetMusicTrack(0, 100, 0, 8);
    UseDoorSounds(1);
    spawn {
        sleep 30;
        0x802D5FA4(7);
    }
});
