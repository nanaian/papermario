#ifndef _CODE_1370_LEN_7D0_H_
#define _CODE_1370_LEN_7D0_H_

#include "common.h"
#include "nu/nusys.h"

extern s32 D_80073E00;
extern u16* gCurrentFramebufferPtr;
extern u16 D_80073E08;
extern u16 D_80073E0A; // Bool; inverted each time gfxRetrace_Callback is called
extern u16* gFramebufferList[];

void boot_main(void);
void gfxRetrace_Callback(s32 pendingGfx);
void func_80026164(void);
void gfxPreNMI_Callback(void);


#endif
