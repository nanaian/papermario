#include "tst_20.h"

Script N(main);

EntryList N(entryList) = {
    { 0.0f, 0.0f, 100.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
};

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 23;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
});
