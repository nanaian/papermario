.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_8027CC10
/* 1AB4F0 8027CC10 27BDFFD8 */  addiu     $sp, $sp, -0x28
/* 1AB4F4 8027CC14 AFB3001C */  sw        $s3, 0x1c($sp)
/* 1AB4F8 8027CC18 0080982D */  daddu     $s3, $a0, $zero
/* 1AB4FC 8027CC1C AFBF0020 */  sw        $ra, 0x20($sp)
/* 1AB500 8027CC20 AFB20018 */  sw        $s2, 0x18($sp)
/* 1AB504 8027CC24 AFB10014 */  sw        $s1, 0x14($sp)
/* 1AB508 8027CC28 AFB00010 */  sw        $s0, 0x10($sp)
/* 1AB50C 8027CC2C 8E71000C */  lw        $s1, 0xc($s3)
/* 1AB510 8027CC30 8E250000 */  lw        $a1, ($s1)
/* 1AB514 8027CC34 0C0B1EAF */  jal       get_variable
/* 1AB518 8027CC38 26310004 */   addiu    $s1, $s1, 4
/* 1AB51C 8027CC3C 0040902D */  daddu     $s2, $v0, $zero
/* 1AB520 8027CC40 2402FF81 */  addiu     $v0, $zero, -0x7f
/* 1AB524 8027CC44 16420002 */  bne       $s2, $v0, .L8027CC50
/* 1AB528 8027CC48 00000000 */   nop      
/* 1AB52C 8027CC4C 8E720148 */  lw        $s2, 0x148($s3)
.L8027CC50:
/* 1AB530 8027CC50 8E250000 */  lw        $a1, ($s1)
/* 1AB534 8027CC54 26310004 */  addiu     $s1, $s1, 4
/* 1AB538 8027CC58 0C0B1EAF */  jal       get_variable
/* 1AB53C 8027CC5C 0260202D */   daddu    $a0, $s3, $zero
/* 1AB540 8027CC60 8E250000 */  lw        $a1, ($s1)
/* 1AB544 8027CC64 26310004 */  addiu     $s1, $s1, 4
/* 1AB548 8027CC68 0260202D */  daddu     $a0, $s3, $zero
/* 1AB54C 8027CC6C 0C0B1EAF */  jal       get_variable
/* 1AB550 8027CC70 0040802D */   daddu    $s0, $v0, $zero
/* 1AB554 8027CC74 8E250000 */  lw        $a1, ($s1)
/* 1AB558 8027CC78 0C0B1EAF */  jal       get_variable
/* 1AB55C 8027CC7C 0260202D */   daddu    $a0, $s3, $zero
/* 1AB560 8027CC80 0C09A75B */  jal       get_actor
/* 1AB564 8027CC84 0240202D */   daddu    $a0, $s2, $zero
/* 1AB568 8027CC88 0040202D */  daddu     $a0, $v0, $zero
/* 1AB56C 8027CC8C 0C099117 */  jal       get_actor_part
/* 1AB570 8027CC90 0200282D */   daddu    $a1, $s0, $zero
/* 1AB574 8027CC94 8FBF0020 */  lw        $ra, 0x20($sp)
/* 1AB578 8027CC98 8FB3001C */  lw        $s3, 0x1c($sp)
/* 1AB57C 8027CC9C 8FB20018 */  lw        $s2, 0x18($sp)
/* 1AB580 8027CCA0 8FB10014 */  lw        $s1, 0x14($sp)
/* 1AB584 8027CCA4 8FB00010 */  lw        $s0, 0x10($sp)
/* 1AB588 8027CCA8 24020002 */  addiu     $v0, $zero, 2
/* 1AB58C 8027CCAC 03E00008 */  jr        $ra
/* 1AB590 8027CCB0 27BD0028 */   addiu    $sp, $sp, 0x28
