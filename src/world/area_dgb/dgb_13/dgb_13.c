#include "dgb_13.h"

Script N(script_80240050);
s32 pad_0000E8[2];
Script N(script_ExitWalk_802400F0);
Script N(script_8024014C);
Script N(main);
Script N(script_80240270);
s32 pad_00037C[1];
Script N(script_80240380);
Script N(script_80240424);
Script N(script_802404C8);
Script N(script_8024056C);
Script N(script_80240610);
Script N(script_80240680);
const char D_802406C0_C4F020[8]; // "dgb_03"
s32 pad_0006C8[2];

EntryList N(entryList) = {
    { -450.0f, 0.0f, -40.0f, 0.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900CD,
};

Script N(script_80240050) = SCRIPT({
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFE3 {
            SetMusicTrack(0, 30, 0, 8);
        }
        < 0xFFFFFFF0 {
            SetMusicTrack(0, 31, 0, 8);
        }
        else {
            SetMusicTrack(0, 30, 0, 8);
        }
    }
});

s32 pad_0000E8[] = {
    0x00000000, 0x00000000,
};

Script N(script_ExitWalk_802400F0) = SCRIPT({
    group 27;
    UseExitHeading(26, 0);
    spawn ExitWalk;
    GotoMap(D_802406C0_C4F020, 5);
    sleep 100;
});

Script N(script_8024014C) = SCRIPT({
    bind N(script_ExitWalk_802400F0) to 0x80000 5;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 15;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    await N(script_80240270);
    ModifyColliderFlags(0, 6, 0x7FFFFE00);
    await N(script_80240680);
    spawn N(script_80240050);
    SI_VAR(0) = N(script_8024014C);
    spawn EnterWalk;
    sleep 1;
});

Script N(script_80240270) = SCRIPT({
    MakeItemEntity(249, 0xFFFFFC72, 50, 0xFFFFFF32, 17, SI_SAVE_FLAG(1058));
    MakeItemEntity(343, 0xFFFFFDEE, 55, 0xFFFFFF42, 17, SI_SAVE_FLAG(1059));
    MakeItemEntity(343, 0xFFFFFE02, 55, 0xFFFFFF51, 17, SI_SAVE_FLAG(1060));
    MakeItemEntity(343, 0xFFFFFE02, 55, 0xFFFFFF33, 17, SI_SAVE_FLAG(1061));
    MakeItemEntity(343, 0xFFFFFE16, 55, 0xFFFFFF60, 17, SI_SAVE_FLAG(1062));
    MakeItemEntity(343, 0xFFFFFE16, 55, 0xFFFFFF42, 17, SI_SAVE_FLAG(1063));
    MakeItemEntity(343, 0xFFFFFE16, 55, 0xFFFFFF24, 17, SI_SAVE_FLAG(1064));
});

s32 pad_00037C[] = {
    0x00000000,
};

Script N(script_80240380) = SCRIPT({
    MakeLerp(0, 30, 15, 0);
    loop {
        UpdateLerp();
        TranslateGroup(47, 0, 0, SI_VAR(0));
        UpdateColliderTransform(13);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80240424) = SCRIPT({
    MakeLerp(30, 0, 15, 0);
    loop {
        UpdateLerp();
        TranslateGroup(47, 0, 0, SI_VAR(0));
        UpdateColliderTransform(13);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_802404C8) = SCRIPT({
    MakeLerp(0, 30, 15, 0);
    loop {
        UpdateLerp();
        TranslateGroup(53, 0, 0, SI_VAR(0));
        UpdateColliderTransform(17);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_8024056C) = SCRIPT({
    MakeLerp(30, 0, 15, 0);
    loop {
        UpdateLerp();
        TranslateGroup(53, 0, 0, SI_VAR(0));
        UpdateColliderTransform(17);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
});

Script N(script_80240610) = SCRIPT({
    if (SI_MAP_VAR(0) == 0) {
        await N(script_80240380);
        SI_MAP_VAR(0) = 1;
    } else {
        await N(script_80240424);
        SI_MAP_VAR(0) = 0;
    }
    unbind;
});

Script N(script_80240680) = SCRIPT({
    ParentColliderToModel(13, 44);
    bind N(script_80240610) to TriggerFlag_WALL_INTERACT 13;
});

// rodata: D_802406C0_C4F020

s32 pad_0006C8[] = {
    0x00000000, 0x00000000,
};

