.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_8025595C
/* 18423C 8025595C 27BDFFE8 */  addiu     $sp, $sp, -0x18
/* 184240 80255960 0080282D */  daddu     $a1, $a0, $zero
/* 184244 80255964 AFBF0010 */  sw        $ra, 0x10($sp)
/* 184248 80255968 0C0954BB */  jal       func_802552EC
/* 18424C 8025596C 0000202D */   daddu    $a0, $zero, $zero
/* 184250 80255970 8FBF0010 */  lw        $ra, 0x10($sp)
/* 184254 80255974 03E00008 */  jr        $ra
/* 184258 80255978 27BD0018 */   addiu    $sp, $sp, 0x18
