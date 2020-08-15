#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include "ultra64.h"
#include "common_structs.h"
#include "types.h"

extern ui_status gUIStatus;
extern player_data gPlayerData;
extern player_status gPlayerStatus;
extern game_status* gGameStatusPtr[1];
extern item_table_entry gItemTable[364];

extern script_context* gWorldScriptList[128];
extern script_context* gBattleScriptList[128];
extern script_context** gCurrentScriptListPtr[128];

extern f32 gGlobalTimeSpace;

extern s8 D_800A0900;
extern s16* D_80151328;
extern s16 D_8010CD10;
extern s16 D_8010CD12;
extern s32 D_801595A0;
extern char gCloudyFlowerFieldsBg[]; // "fla_bg"
extern char gSunnyFlowerFieldsBg[]; // "flb_bg"
extern bg_header gBackgroundImage;
extern s8 D_8014F12F;

// Triggers
/* 0x80151334 */ extern s16 gTriggerCount;
/* 0x80159190 */ extern trigger gTriggerList1[64];
/* 0x80159290 */ extern trigger gTriggerList2[64];
/* 0x80159390 */ extern trigger** gCurrentTriggerListPtr[64];

extern u16 gMapTransitionAlpha;
extern u16 D_800A0942;
extern s16 D_800A0944;

extern s16 D_80151308;

extern s32 D_8009A650[1];

extern s16 gCurrentDoorSoundsSet;

extern UNK_TYPE D_800E92D8;
extern UNK_TYPE D_80147474;
extern UNK_TYPE D_80147574;
extern UNK_TYPE D_80109270;
extern UNK_TYPE D_80108558;
extern u16 D_800A0940;
extern u16 D_800A0942;
extern s16 D_800A0944;

#endif
