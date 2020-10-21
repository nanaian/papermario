.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_80240D30
/* 823FF0 80240D30 27BDFFD8 */  addiu     $sp, $sp, -0x28
/* 823FF4 80240D34 AFB3001C */  sw        $s3, 0x1c($sp)
/* 823FF8 80240D38 0080982D */  daddu     $s3, $a0, $zero
/* 823FFC 80240D3C AFBF0020 */  sw        $ra, 0x20($sp)
/* 824000 80240D40 AFB20018 */  sw        $s2, 0x18($sp)
/* 824004 80240D44 AFB10014 */  sw        $s1, 0x14($sp)
/* 824008 80240D48 AFB00010 */  sw        $s0, 0x10($sp)
/* 82400C 80240D4C 8E720148 */  lw        $s2, 0x148($s3)
/* 824010 80240D50 86440008 */  lh        $a0, 8($s2)
/* 824014 80240D54 0C00EABB */  jal       get_npc_unsafe
/* 824018 80240D58 00A0882D */   daddu    $s1, $a1, $zero
/* 82401C 80240D5C 8E240008 */  lw        $a0, 8($s1)
/* 824020 80240D60 0040802D */  daddu     $s0, $v0, $zero
/* 824024 80240D64 00041FC2 */  srl       $v1, $a0, 0x1f
/* 824028 80240D68 00832021 */  addu      $a0, $a0, $v1
/* 82402C 80240D6C 00042043 */  sra       $a0, $a0, 1
/* 824030 80240D70 0C00A67F */  jal       rand_int
/* 824034 80240D74 24840001 */   addiu    $a0, $a0, 1
/* 824038 80240D78 8E230008 */  lw        $v1, 8($s1)
/* 82403C 80240D7C 240400B4 */  addiu     $a0, $zero, 0xb4
/* 824040 80240D80 00032FC2 */  srl       $a1, $v1, 0x1f
/* 824044 80240D84 00651821 */  addu      $v1, $v1, $a1
/* 824048 80240D88 00031843 */  sra       $v1, $v1, 1
/* 82404C 80240D8C 00621821 */  addu      $v1, $v1, $v0
/* 824050 80240D90 0C00A67F */  jal       rand_int
/* 824054 80240D94 A603008E */   sh       $v1, 0x8e($s0)
/* 824058 80240D98 C60C000C */  lwc1      $f12, 0xc($s0)
/* 82405C 80240D9C 44820000 */  mtc1      $v0, $f0
/* 824060 80240DA0 00000000 */  nop       
/* 824064 80240DA4 46800020 */  cvt.s.w   $f0, $f0
/* 824068 80240DA8 46006300 */  add.s     $f12, $f12, $f0
/* 82406C 80240DAC 3C0142B4 */  lui       $at, 0x42b4
/* 824070 80240DB0 44810000 */  mtc1      $at, $f0
/* 824074 80240DB4 0C00A6C9 */  jal       clamp_angle
/* 824078 80240DB8 46006301 */   sub.s    $f12, $f12, $f0
/* 82407C 80240DBC E600000C */  swc1      $f0, 0xc($s0)
/* 824080 80240DC0 8E4200CC */  lw        $v0, 0xcc($s2)
/* 824084 80240DC4 8C420000 */  lw        $v0, ($v0)
/* 824088 80240DC8 AE020028 */  sw        $v0, 0x28($s0)
/* 82408C 80240DCC 24020003 */  addiu     $v0, $zero, 3
/* 824090 80240DD0 AE620070 */  sw        $v0, 0x70($s3)
/* 824094 80240DD4 8FBF0020 */  lw        $ra, 0x20($sp)
/* 824098 80240DD8 8FB3001C */  lw        $s3, 0x1c($sp)
/* 82409C 80240DDC 8FB20018 */  lw        $s2, 0x18($sp)
/* 8240A0 80240DE0 8FB10014 */  lw        $s1, 0x14($sp)
/* 8240A4 80240DE4 8FB00010 */  lw        $s0, 0x10($sp)
/* 8240A8 80240DE8 03E00008 */  jr        $ra
/* 8240AC 80240DEC 27BD0028 */   addiu    $sp, $sp, 0x28