#include "kpa_117.h"

Script N(script_802400C0) = SCRIPT({

});

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap("kpa_116", 1);
    sleep 100;
});

Script N(script_8024012C) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 11;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 22;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_802400C0);
    SI_VAR(0) = N(script_8024012C);
    spawn EnterWalk;
    sleep 1;
    spawn N(script_80240050);
});
