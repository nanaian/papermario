#include "isk_01.h"

Script N(script_80240060);
s32 pad_00021C[1];
Script N(script_ExitWalk_80240220);
Script N(script_ExitWalk_8024027C);
Script N(script_802402D8);
Script N(script_EnterWalk_80240320);
Script N(main);
s32 pad_000474[3];
s32 N(displayList_80240480)[4];
Script N(script_80240490);
Script N(script_MakeEntities);
s32 pad_0005B4[3];
const char D_802405C0_978700[8]; // "sbk_02"
const char D_802405C8_978708[8]; // "isk_02"

EntryList N(entryList) = {
    { -576.0f, 0.0f, -71.0f, 179.0f },
    { -555.0f, 0.0f, 170.0f, 350.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x190095,
};

Script N(script_80240060) = SCRIPT({
    if (SI_SAVE_FLAG(889) == 0) {
        spawn {
            FadeInMusic(1, 83, 0, 2000, 0, 127);
            FadeOutMusic(0, 2000);
            DisablePlayerInput(1);
            sleep 20;
            group 0;
            0x802D5830(1);
            ShowMessageAtScreenPos(0xD00DD, 160, 40);
            SI_SAVE_FLAG(889) = 1;
            DisablePlayerInput(0);
            0x802D5830(0);
            FadeInMusic(0, 24, 0, 2000, 0, 127);
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
    GotoMap(D_802405C0_978700, 4);
    sleep 100;
});

Script N(script_ExitWalk_8024027C) = SCRIPT({
    group 27;
    UseExitHeading(40, 1);
    spawn ExitWalk;
    GotoMap(D_802405C8_978708, 0);
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
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamLeadPlayer(0, 0);
    SetCamEnabled(0, 1);
    SI_SAVE_FLAG(1974) = 1;
    await N(script_MakeEntities);
    spawn N(script_80240060);
    spawn N(script_80240490);
    spawn N(script_EnterWalk_80240320);
    sleep 1;
});

s32 pad_000474[] = {
    0x00000000, 0x00000000, 0x00000000,
};

s32 N(displayList_80240480)[] = {
    0xE3001A01, 0x00000020, 0xDF000000, 0x00000000,
};

Script N(script_80240490) = SCRIPT({
    SetTexPanner(26, 2);
    EnableTexPanning(26, 1);
    SI_VAR(0) = 0;
    0x802C9428(0, N(displayList_80240480), 0);
    SetModelFlags(26, 16, 1);
0:
    SI_VAR(0) += 70;
    SetTexPanOffset(2, 0, SI_VAR(0), 0);
    if (SI_VAR(0) > 0x4000) {
        SI_VAR(0) += 0xFFFFC000;
    }
    sleep 1;
    goto 0;
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802E9A18, 0xFFFFFDEE, 60, 43, 0, 0x80000000);
});

s32 pad_0005B4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// rodata: D_802405C0_978700

// rodata: D_802405C8_978708
