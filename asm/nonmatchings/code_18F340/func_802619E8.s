.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_802619E8
/* 1902C8 802619E8 27BDFFC0 */  addiu     $sp, $sp, -0x40
/* 1902CC 802619EC AFB20038 */  sw        $s2, 0x38($sp)
/* 1902D0 802619F0 0080902D */  daddu     $s2, $a0, $zero
/* 1902D4 802619F4 AFBF003C */  sw        $ra, 0x3c($sp)
/* 1902D8 802619F8 AFB10034 */  sw        $s1, 0x34($sp)
/* 1902DC 802619FC AFB00030 */  sw        $s0, 0x30($sp)
/* 1902E0 80261A00 8E50000C */  lw        $s0, 0xc($s2)
/* 1902E4 80261A04 8E050000 */  lw        $a1, ($s0)
/* 1902E8 80261A08 0C0B1EAF */  jal       get_variable
/* 1902EC 80261A0C 26100004 */   addiu    $s0, $s0, 4
/* 1902F0 80261A10 8E050000 */  lw        $a1, ($s0)
/* 1902F4 80261A14 26100004 */  addiu     $s0, $s0, 4
/* 1902F8 80261A18 0240202D */  daddu     $a0, $s2, $zero
/* 1902FC 80261A1C 0C0B1EAF */  jal       get_variable
/* 190300 80261A20 0040882D */   daddu    $s1, $v0, $zero
/* 190304 80261A24 0240202D */  daddu     $a0, $s2, $zero
/* 190308 80261A28 8E050000 */  lw        $a1, ($s0)
/* 19030C 80261A2C 0C0B1EAF */  jal       get_variable
/* 190310 80261A30 0040802D */   daddu    $s0, $v0, $zero
/* 190314 80261A34 44910000 */  mtc1      $s1, $f0
/* 190318 80261A38 00000000 */  nop       
/* 19031C 80261A3C 46800020 */  cvt.s.w   $f0, $f0
/* 190320 80261A40 44050000 */  mfc1      $a1, $f0
/* 190324 80261A44 44900000 */  mtc1      $s0, $f0
/* 190328 80261A48 00000000 */  nop       
/* 19032C 80261A4C 46800020 */  cvt.s.w   $f0, $f0
/* 190330 80261A50 44060000 */  mfc1      $a2, $f0
/* 190334 80261A54 44820000 */  mtc1      $v0, $f0
/* 190338 80261A58 00000000 */  nop       
/* 19033C 80261A5C 46800020 */  cvt.s.w   $f0, $f0
/* 190340 80261A60 3C048007 */  lui       $a0, %hi(gCurrentCameraID)
/* 190344 80261A64 8C847410 */  lw        $a0, %lo(gCurrentCameraID)($a0)
/* 190348 80261A68 44070000 */  mfc1      $a3, $f0
/* 19034C 80261A6C 27A30020 */  addiu     $v1, $sp, 0x20
/* 190350 80261A70 AFA30010 */  sw        $v1, 0x10($sp)
/* 190354 80261A74 27A30024 */  addiu     $v1, $sp, 0x24
/* 190358 80261A78 AFA30014 */  sw        $v1, 0x14($sp)
/* 19035C 80261A7C 27A30028 */  addiu     $v1, $sp, 0x28
/* 190360 80261A80 0C00B94E */  jal       get_screen_coords
/* 190364 80261A84 AFA30018 */   sw       $v1, 0x18($sp)
/* 190368 80261A88 8FA20020 */  lw        $v0, 0x20($sp)
/* 19036C 80261A8C 2442001E */  addiu     $v0, $v0, 0x1e
/* 190370 80261A90 AFA20020 */  sw        $v0, 0x20($sp)
/* 190374 80261A94 8FA20024 */  lw        $v0, 0x24($sp)
/* 190378 80261A98 8E4300AC */  lw        $v1, 0xac($s2)
/* 19037C 80261A9C 2442FFED */  addiu     $v0, $v0, -0x13
/* 190380 80261AA0 1860000F */  blez      $v1, .L80261AE0
/* 190384 80261AA4 AFA20024 */   sw       $v0, 0x24($sp)
/* 190388 80261AA8 3C048011 */  lui       $a0, 0x8011
/* 19038C 80261AAC 24848AD4 */  addiu     $a0, $a0, -0x752c
/* 190390 80261AB0 0C050529 */  jal       create_icon
/* 190394 80261AB4 00000000 */   nop      
/* 190398 80261AB8 8FA50020 */  lw        $a1, 0x20($sp)
/* 19039C 80261ABC 8FA60024 */  lw        $a2, 0x24($sp)
/* 1903A0 80261AC0 0040202D */  daddu     $a0, $v0, $zero
/* 1903A4 80261AC4 3C01802A */  lui       $at, 0x802a
/* 1903A8 80261AC8 AC24FBAC */  sw        $a0, -0x454($at)
/* 1903AC 80261ACC 0C051261 */  jal       set_icon_render_pos
/* 1903B0 80261AD0 00000000 */   nop      
/* 1903B4 80261AD4 8FA20024 */  lw        $v0, 0x24($sp)
/* 1903B8 80261AD8 24420009 */  addiu     $v0, $v0, 9
/* 1903BC 80261ADC AFA20024 */  sw        $v0, 0x24($sp)
.L80261AE0:
/* 1903C0 80261AE0 8E4200B0 */  lw        $v0, 0xb0($s2)
/* 1903C4 80261AE4 1C400004 */  bgtz      $v0, .L80261AF8
/* 1903C8 80261AE8 00000000 */   nop      
/* 1903CC 80261AEC 8E4200B4 */  lw        $v0, 0xb4($s2)
/* 1903D0 80261AF0 1840000C */  blez      $v0, .L80261B24
/* 1903D4 80261AF4 00000000 */   nop      
.L80261AF8:
/* 1903D8 80261AF8 3C048011 */  lui       $a0, 0x8011
/* 1903DC 80261AFC 24848AAC */  addiu     $a0, $a0, -0x7554
/* 1903E0 80261B00 0C050529 */  jal       create_icon
/* 1903E4 80261B04 00000000 */   nop      
/* 1903E8 80261B08 8FA50020 */  lw        $a1, 0x20($sp)
/* 1903EC 80261B0C 8FA60024 */  lw        $a2, 0x24($sp)
/* 1903F0 80261B10 0040202D */  daddu     $a0, $v0, $zero
/* 1903F4 80261B14 3C01802A */  lui       $at, 0x802a
/* 1903F8 80261B18 AC24FBA8 */  sw        $a0, -0x458($at)
/* 1903FC 80261B1C 0C051261 */  jal       set_icon_render_pos
/* 190400 80261B20 00000000 */   nop      
.L80261B24:
/* 190404 80261B24 8FBF003C */  lw        $ra, 0x3c($sp)
/* 190408 80261B28 8FB20038 */  lw        $s2, 0x38($sp)
/* 19040C 80261B2C 8FB10034 */  lw        $s1, 0x34($sp)
/* 190410 80261B30 8FB00030 */  lw        $s0, 0x30($sp)
/* 190414 80261B34 24020002 */  addiu     $v0, $zero, 2
/* 190418 80261B38 03E00008 */  jr        $ra
/* 19041C 80261B3C 27BD0040 */   addiu    $sp, $sp, 0x40
