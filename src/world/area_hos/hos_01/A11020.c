#include "hos_01.h"

extern u8 D_80241C2F;
extern u8 D_80241C33;

#include "world/common/UnkTexturePanFuncs.inc.c"

INCLUDE_ASM(s32, "world/area_hos/hos_01/A11020", func_80240AAC_A1132C);

INCLUDE_ASM(s32, "world/area_hos/hos_01/A11020", func_80240B10_A11390);

INCLUDE_ASM(s32, "world/area_hos/hos_01/A11020", func_80240B64_A113E4);

void func_80240BB8_A11438(void) {
    gDPSetCombineLERP(gMasterGfxPos++, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0,
                      PRIMITIVE, 0);
    gDPSetPrimColor(gMasterGfxPos++, 0, 0, 0, 0, 0, D_80241C2F);
}

INCLUDE_ASM(s32, "world/area_hos/hos_01/A11020", func_80240C08_A11488);

void func_80240C34_A114B4(void) {
    gDPSetCombineLERP(gMasterGfxPos++, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0,
                      PRIMITIVE, 0);
    gDPSetPrimColor(gMasterGfxPos++, 0, 0, 0, 0, 0, D_80241C33);
}

INCLUDE_ASM(s32, "world/area_hos/hos_01/A11020", func_80240C84_A11504);

INCLUDE_ASM(s32, "world/area_hos/hos_01/A11020", func_80240CB0_A11530);

INCLUDE_ASM(s32, "world/area_hos/hos_01/A11020", func_80240CDC_A1155C);
