#include "mgm_03.h"

Script N(main);
s32 pad_0000D4[3];

EntryList N(entryList) = {
    { 0.0f, 200.0f, 0.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x190007,
};

Script N(main) = SCRIPT({
    SetSpriteShading(0x80000);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
});

s32 pad_0000D4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

