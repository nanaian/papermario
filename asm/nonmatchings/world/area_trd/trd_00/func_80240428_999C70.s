.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_80240428_99A098
/* 99A098 80240428 27BDFFE0 */  addiu     $sp, $sp, -0x20
/* 99A09C 8024042C AFB10014 */  sw        $s1, 0x14($sp)
/* 99A0A0 80240430 0080882D */  daddu     $s1, $a0, $zero
/* 99A0A4 80240434 AFBF001C */  sw        $ra, 0x1c($sp)
/* 99A0A8 80240438 AFB20018 */  sw        $s2, 0x18($sp)
/* 99A0AC 8024043C AFB00010 */  sw        $s0, 0x10($sp)
/* 99A0B0 80240440 8E240084 */  lw        $a0, 0x84($s1)
/* 99A0B4 80240444 0C04C3D6 */  jal       get_item_entity
/* 99A0B8 80240448 00A0802D */   daddu    $s0, $a1, $zero
/* 99A0BC 8024044C 12000005 */  beqz      $s0, .L80240464
/* 99A0C0 80240450 0040902D */   daddu    $s2, $v0, $zero
/* 99A0C4 80240454 C640000C */  lwc1      $f0, 0xc($s2)
/* 99A0C8 80240458 AE200074 */  sw        $zero, 0x74($s1)
/* 99A0CC 8024045C AE20007C */  sw        $zero, 0x7c($s1)
/* 99A0D0 80240460 E6200078 */  swc1      $f0, 0x78($s1)
.L80240464:
/* 99A0D4 80240464 8E230074 */  lw        $v1, 0x74($s1)
/* 99A0D8 80240468 10600005 */  beqz      $v1, .L80240480
/* 99A0DC 8024046C 24020001 */   addiu    $v0, $zero, 1
/* 99A0E0 80240470 10620024 */  beq       $v1, $v0, .L80240504
/* 99A0E4 80240474 00000000 */   nop      
/* 99A0E8 80240478 08090157 */  j         .L8024055C
/* 99A0EC 8024047C 00000000 */   nop      
.L80240480:
/* 99A0F0 80240480 3C013FC9 */  lui       $at, 0x3fc9
/* 99A0F4 80240484 34210FD8 */  ori       $at, $at, 0xfd8
/* 99A0F8 80240488 44810000 */  mtc1      $at, $f0
/* 99A0FC 8024048C C62C007C */  lwc1      $f12, 0x7c($s1)
/* 99A100 80240490 46806320 */  cvt.s.w   $f12, $f12
/* 99A104 80240494 46006302 */  mul.s     $f12, $f12, $f0
/* 99A108 80240498 00000000 */  nop       
/* 99A10C 8024049C 3C0141F0 */  lui       $at, 0x41f0
/* 99A110 802404A0 44810000 */  mtc1      $at, $f0
/* 99A114 802404A4 0C00A874 */  jal       cos_rad
/* 99A118 802404A8 46006303 */   div.s    $f12, $f12, $f0
/* 99A11C 802404AC 3C013F80 */  lui       $at, 0x3f80
/* 99A120 802404B0 44811000 */  mtc1      $at, $f2
/* 99A124 802404B4 00000000 */  nop       
/* 99A128 802404B8 46001081 */  sub.s     $f2, $f2, $f0
/* 99A12C 802404BC 3C0141A0 */  lui       $at, 0x41a0
/* 99A130 802404C0 44810000 */  mtc1      $at, $f0
/* 99A134 802404C4 00000000 */  nop       
/* 99A138 802404C8 46001082 */  mul.s     $f2, $f2, $f0
/* 99A13C 802404CC 00000000 */  nop       
/* 99A140 802404D0 C6200078 */  lwc1      $f0, 0x78($s1)
/* 99A144 802404D4 46020000 */  add.s     $f0, $f0, $f2
/* 99A148 802404D8 E640000C */  swc1      $f0, 0xc($s2)
/* 99A14C 802404DC 8E23007C */  lw        $v1, 0x7c($s1)
/* 99A150 802404E0 2402001E */  addiu     $v0, $zero, 0x1e
/* 99A154 802404E4 14620005 */  bne       $v1, $v0, .L802404FC
/* 99A158 802404E8 24620001 */   addiu    $v0, $v1, 1
/* 99A15C 802404EC 24020001 */  addiu     $v0, $zero, 1
/* 99A160 802404F0 AE220074 */  sw        $v0, 0x74($s1)
/* 99A164 802404F4 08090157 */  j         .L8024055C
/* 99A168 802404F8 AE20007C */   sw       $zero, 0x7c($s1)
.L802404FC:
/* 99A16C 802404FC 08090157 */  j         .L8024055C
/* 99A170 80240500 AE22007C */   sw       $v0, 0x7c($s1)
.L80240504:
/* 99A174 80240504 C62C007C */  lwc1      $f12, 0x7c($s1)
/* 99A178 80240508 0C00A8D4 */  jal       cos_deg
/* 99A17C 8024050C 46806320 */   cvt.s.w  $f12, $f12
/* 99A180 80240510 3C014040 */  lui       $at, 0x4040
/* 99A184 80240514 44811000 */  mtc1      $at, $f2
/* 99A188 80240518 00000000 */  nop       
/* 99A18C 8024051C 46020002 */  mul.s     $f0, $f0, $f2
/* 99A190 80240520 00000000 */  nop       
/* 99A194 80240524 3C014188 */  lui       $at, 0x4188
/* 99A198 80240528 44812000 */  mtc1      $at, $f4
/* 99A19C 8024052C C6220078 */  lwc1      $f2, 0x78($s1)
/* 99A1A0 80240530 46041080 */  add.s     $f2, $f2, $f4
/* 99A1A4 80240534 46001080 */  add.s     $f2, $f2, $f0
/* 99A1A8 80240538 E642000C */  swc1      $f2, 0xc($s2)
/* 99A1AC 8024053C 8E22007C */  lw        $v0, 0x7c($s1)
/* 99A1B0 80240540 24420009 */  addiu     $v0, $v0, 9
/* 99A1B4 80240544 44826000 */  mtc1      $v0, $f12
/* 99A1B8 80240548 00000000 */  nop       
/* 99A1BC 8024054C 0C00A6C9 */  jal       clamp_angle
/* 99A1C0 80240550 46806320 */   cvt.s.w  $f12, $f12
/* 99A1C4 80240554 4600018D */  trunc.w.s $f6, $f0
/* 99A1C8 80240558 E626007C */  swc1      $f6, 0x7c($s1)
.L8024055C:
/* 99A1CC 8024055C 8FBF001C */  lw        $ra, 0x1c($sp)
/* 99A1D0 80240560 8FB20018 */  lw        $s2, 0x18($sp)
/* 99A1D4 80240564 8FB10014 */  lw        $s1, 0x14($sp)
/* 99A1D8 80240568 8FB00010 */  lw        $s0, 0x10($sp)
/* 99A1DC 8024056C 0000102D */  daddu     $v0, $zero, $zero
/* 99A1E0 80240570 03E00008 */  jr        $ra
/* 99A1E4 80240574 27BD0020 */   addiu    $sp, $sp, 0x20