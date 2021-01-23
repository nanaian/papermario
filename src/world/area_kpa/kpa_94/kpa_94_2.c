#include "kpa_94.h"

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap("kpa_95", 0);
    sleep 100;
});

Script N(script_ExitWalk_8024012C) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap("kpa_33", 0);
    sleep 100;
});

Script N(script_80240188) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 15;
    bind N(script_ExitWalk_8024012C) to 0x80000 11;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    ModifyColliderFlags(0, 13, 0x7FFFFE00);
    EnableModel(41, 0);
    SI_VAR(0) = N(script_80240188);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80240060);
});
