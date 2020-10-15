#include "code_1370_len_7d0.h"

#ifdef NON_MATCHING
// Control flow issue w/ PANIC
void boot_main(void) {
    OSViMode* viMode;
    if (osTvType == OS_TV_NTSC) {
        viMode = &osViModeTable[56];
    } else if (osTvType == OS_TV_MPAL) {
        viMode = &osViModeTable[57];
    } else {
        PANIC();
    }
    osViSetMode(viMode);

    osViSetSpecialFeatures(OS_VI_GAMMA_OFF | OS_VI_GAMMA_DITHER_OFF | OS_VI_DIVOT_ON | OS_VI_DITHER_FILTER_ON);
    nuGfxDisplayOff();
    crash_create_monitor();
    func_80025C60();
    nuGfxInit();
    GAME_STATUS->contBitPattern = nuContInit();
    func_8002D160();
    func_802B2000();
    func_802B203C();
    nuGfxFuncSet(gfxRetrace_Callback);
    nuGfxPreNMIFuncSet(gfxPreNMI_Callback);
    {
        // Required to match
        s32* randSeed = &gRandSeed;
        (*randSeed) += osGetCount();
    }
    nuGfxDisplayOn();

    while (TRUE) {}
}
#else
INCLUDE_ASM(void, "code_1370_len_7d0", boot_main, void);
#endif

void gfxRetrace_Callback(s32 pendingGfx) {
    s32* d80073E00 = &D_80073E00;

    // Should probably be a switch
    if (*d80073E00 != 0) {
        if (*d80073E00 == 1) {
            nuGfxTaskAllEndWait();
            // Perform display process if no RCP task is being processed
            if (pendingGfx == 0) {
                gCurrentFramebufferPtr = gFramebufferList[0] = gFramebufferList[1] = gFramebufferList[2] = osViGetCurrentFramebuffer();
                nuGfxSetCfb(gFramebufferList, 3);
                osViSwapBuffer(gFramebufferList[0]);
                *d80073E00 = 2;
            }
        }
        if (D_80073E00 == 2) {
            func_80026164();
        }
    } else {
        // Step game loop every other call
        u16* d80073E0A = &D_80073E0A;
        u16 tick = *d80073E0A = *d80073E0A ^ 1; // Invert LSB
        if (tick == 0) {
            u16* skippedDraw;

            step_game_loop();

            // Draw if not lagging
            skippedDraw = &D_80073E08;
            *skippedDraw = TRUE;
            if (pendingGfx < 3) {
                *skippedDraw = FALSE;
                func_800269EC();
                gfx_draw_frame();
            }

        }
    }
}

INCLUDE_ASM(void, "code_1370_len_7d0", func_80026164, void);

INCLUDE_ASM(void, "code_1370_len_7d0", gfxPreNMI_Callback, void);
