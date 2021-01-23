#include "isk_19.h"

Script N(script_80240060);
s32 pad_00021C[1];
Script N(script_ExitWalk_80240220);
Script N(script_ExitWalk_8024027C);
Script N(script_802402D8);
Script N(script_EnterWalk_80240320);
Script N(main);
s32 pad_000458[2];
Script N(script_MakeEntities);
s32 pad_00051C[1];
const char D_80240520_999C60[8]; // "isk_11"
const char D_80240528_999C68[8]; // "isk_16"

EntryList N(entryList) = {
    { 548.0f, -910.0f, 182.0f, 21.0f },
    { 573.0f, -910.0f, 21.0f, 186.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900A5,
};

Script N(script_80240060) = SCRIPT({
    if (SI_SAVE_FLAG(893) == 0) {
        spawn {
            FadeInMusic(1, 83, 0, 2000, 0, 127);
            FadeOutMusic(0, 2000);
            DisablePlayerInput(1);
            sleep 20;
            group 0;
            func_802D5830(1);
            ShowMessageAtScreenPos(0xD00E1, 160, 40);
            SI_SAVE_FLAG(893) = 1;
            DisablePlayerInput(0);
            func_802D5830(0);
            FadeInMusic(0, 25, 0, 2000, 0, 127);
            FadeOutMusic(1, 2000);
        }
        return;
    }
    match SI_SAVE_VAR(0) {
        < 0xFFFFFFC7 {
            SetMusicTrack(0, 24, 0, 8);
        }
        < 0xFFFFFFC8 {
            SetMusicTrack(0, 25, 0, 8);
        }
        >= 0xFFFFFFC8 {
            SetMusicTrack(0, 24, 0, 8);
        }
    }
});

s32 pad_00021C[] = {
    0x00000000,
};

Script N(script_ExitWalk_80240220) = SCRIPT({
    group 27;
    UseExitHeading(40, 0);
    spawn ExitWalk;
    GotoMap(D_80240520_999C60, 3);
    sleep 100;
});

Script N(script_ExitWalk_8024027C) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_80240528_999C68, 0);
    sleep 100;
});

Script N(script_802402D8) = SCRIPT({
    bind N(script_ExitWalk_80240220) to 0x80000 0;
    bind N(script_ExitWalk_8024027C) to 0x80000 4;
});

Script N(script_EnterWalk_80240320) = SCRIPT({
    GetLoadType(SI_VAR(1));
    if (SI_VAR(1) == 1) {
        spawn EnterSavePoint;
        spawn N(script_802402D8);
        return;
    }
    SI_VAR(0) = N(script_802402D8);
    spawn EnterWalk;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 11;
    SetSpriteShading(0x2000F);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    await N(script_MakeEntities);
    spawn N(script_80240060);
    spawn N(script_EnterWalk_80240320);
    sleep 1;
});

s32 pad_000458[] = {
    0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    PlayEffect(32, 1, 486, 0xFFFFFCB3, 130, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(32, 1, 499, 0xFFFFFCB3, 42, 0.30078125, SI_VAR(0), 0, 0, 0, 0, 0, 0, 0);
    MakeEntity(D_802E9A18, 560, 0xFFFFFCAE, 100, 0xFFFFFFF6, 0x80000000);
});

s32 pad_00051C[] = {
    0x00000000,
};

// rodata: D_80240520_999C60

// rodata: D_80240528_999C68
