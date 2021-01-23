#include "obk_06.h"

Script N(script_80240060);
s32 pad_0000C8[2];
Script N(script_ExitWalk_802400D0);
Script N(script_8024012C);
Script N(script_EnterWalk_80240158);
Script N(main);
Script N(script_802402B0);
Script N(script_802403B0);
s32 pad_00043C[1];
Script N(script_MakeEntities);
s32 pad_00054C[1];
const char D_80240550_BCEBE0[8]; // "obk_02"
s32 pad_000558[2];

EntryList N(entryList) = {
    { 0.0f, 200.0f, 0.0f, 0.0f },
    { -220.0f, 0.0f, 50.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900B7,
};

Script N(script_80240060) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

s32 pad_0000C8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802400D0) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80240550_BCEBE0, 2);
    sleep 100;
});

Script N(script_8024012C) = SCRIPT({
    bind N(script_ExitWalk_802400D0) to 0x80000 0;
});

Script N(script_EnterWalk_80240158) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            bind N(script_ExitWalk_802400D0) to TriggerFlag_FLOOR_TOUCH 0;
        }
        == 1 {
            SI_VAR(0) = N(script_8024012C);
            spawn EnterWalk;
        }
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    spawn N(script_802403B0);
    spawn N(script_80240060);
    spawn N(script_EnterWalk_80240158);
});

Vec4f N(triggerCoord_802402A0) =  { -237.0f, 0.0f, 50.0f, 0.0f };

Script N(script_802402B0) = SCRIPT({
    PlayEffect(66, 1, 23, 26, 1, 10, 30, 0, 0, 0, 0, 0, 0, 0);
    loop 10 {
        EnableModel(24, 0);
        EnableModel(23, 1);
        sleep 1;
        EnableModel(24, 1);
        EnableModel(23, 0);
        sleep 1;
    }
    ModifyColliderFlags(0, 19, 0x7FFFFE00);
    SI_SAVE_FLAG(974) = 1;
    unbind;
});

Script N(script_802403B0) = SCRIPT({
    if (SI_SAVE_FLAG(974) == 0) {
        bind N(script_802402B0) to TriggerFlag_BOMB N(triggerCoord_802402A0);
        EnableModel(24, 0);
    } else {
        EnableModel(23, 0);
        ModifyColliderFlags(0, 19, 0x7FFFFE00);
    }
});

s32 pad_00043C[] = {
    0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    if (SI_SAVE_FLAG(975) == 0) {
        MakeItemEntity(29, 230, 125, 0xFFFFFF29, 17, SI_SAVE_FLAG(975));
        spawn {
            loop {
                if (SI_SAVE_FLAG(975) != 0) {
                    SI_SAVE_VAR(0) = 0xFFFFFFDA;
                    break;
                }
                sleep 1;
            }
        }
    }
    MakeEntity(0x802EAED4, 0xFFFFFF92, 30, 50, 0, -1, 0x80000000);
    MakeEntity(0x802EAED4, 0xFFFFFF92, 0, 50, 0, 348, 0x80000000);
    AssignCrateFlag(SI_SAVE_FLAG(976));
});

s32 pad_00054C[] = {
    0x00000000,
};

// rodata: D_80240550_BCEBE0

s32 pad_000558[] = {
    0x00000000, 0x00000000,
};
