.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_802485FC
/* 176EDC 802485FC 3C02802A */  lui       $v0, 0x802a
/* 176EE0 80248600 8C42F254 */  lw        $v0, -0xdac($v0)
/* 176EE4 80248604 27BDFFE8 */  addiu     $sp, $sp, -0x18
/* 176EE8 80248608 10400012 */  beqz      $v0, .L80248654
/* 176EEC 8024860C AFBF0010 */   sw       $ra, 0x10($sp)
/* 176EF0 80248610 3C038028 */  lui       $v1, 0x8028
/* 176EF4 80248614 24630A30 */  addiu     $v1, $v1, 0xa30
/* 176EF8 80248618 8C620000 */  lw        $v0, ($v1)
/* 176EFC 8024861C 14400004 */  bnez      $v0, .L80248630
/* 176F00 80248620 2442FFEC */   addiu    $v0, $v0, -0x14
/* 176F04 80248624 3C05BF80 */  lui       $a1, 0xbf80
/* 176F08 80248628 08092193 */  j         .L8024864C
/* 176F0C 8024862C 240400FF */   addiu    $a0, $zero, 0xff
.L80248630:
/* 176F10 80248630 04410002 */  bgez      $v0, .L8024863C
/* 176F14 80248634 AC620000 */   sw       $v0, ($v1)
/* 176F18 80248638 AC600000 */  sw        $zero, ($v1)
.L8024863C:
/* 176F1C 8024863C C4600000 */  lwc1      $f0, ($v1)
/* 176F20 80248640 46800020 */  cvt.s.w   $f0, $f0
/* 176F24 80248644 44050000 */  mfc1      $a1, $f0
/* 176F28 80248648 0000202D */  daddu     $a0, $zero, $zero
.L8024864C:
/* 176F2C 8024864C 0C04DF62 */  jal       func_80137D88
/* 176F30 80248650 00000000 */   nop      
.L80248654:
/* 176F34 80248654 8FBF0010 */  lw        $ra, 0x10($sp)
/* 176F38 80248658 03E00008 */  jr        $ra
/* 176F3C 8024865C 27BD0018 */   addiu    $sp, $sp, 0x18
