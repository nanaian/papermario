.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel is_actor_hp_bar_visible
/* 182500 80253C20 27BDFFE8 */  addiu     $sp, $sp, -0x18
/* 182504 80253C24 AFB00010 */  sw        $s0, 0x10($sp)
/* 182508 80253C28 0080802D */  daddu     $s0, $a0, $zero
/* 18250C 80253C2C AFBF0014 */  sw        $ra, 0x14($sp)
/* 182510 80253C30 0C03A752 */  jal       is_ability_active
/* 182514 80253C34 24040036 */   addiu    $a0, $zero, 0x36
/* 182518 80253C38 14400014 */  bnez      $v0, .L80253C8C
/* 18251C 80253C3C 24020001 */   addiu    $v0, $zero, 1
/* 182520 80253C40 92040136 */  lbu       $a0, 0x136($s0)
/* 182524 80253C44 000420C2 */  srl       $a0, $a0, 3
/* 182528 80253C48 0C05154E */  jal       get_global_byte
/* 18252C 80253C4C 2484016D */   addiu    $a0, $a0, 0x16d
/* 182530 80253C50 8E030000 */  lw        $v1, ($s0)
/* 182534 80253C54 30631000 */  andi      $v1, $v1, 0x1000
/* 182538 80253C58 10600008 */  beqz      $v1, .L80253C7C
/* 18253C 80253C5C 0040202D */   daddu    $a0, $v0, $zero
/* 182540 80253C60 92020136 */  lbu       $v0, 0x136($s0)
/* 182544 80253C64 3C03800E */  lui       $v1, %hi(gBattleStatus)
/* 182548 80253C68 2463C070 */  addiu     $v1, $v1, %lo(gBattleStatus)
/* 18254C 80253C6C 000210C2 */  srl       $v0, $v0, 3
/* 182550 80253C70 00431021 */  addu      $v0, $v0, $v1
/* 182554 80253C74 90420440 */  lbu       $v0, 0x440($v0)
/* 182558 80253C78 00822025 */  or        $a0, $a0, $v0
.L80253C7C:
/* 18255C 80253C7C 92020136 */  lbu       $v0, 0x136($s0)
/* 182560 80253C80 30420007 */  andi      $v0, $v0, 7
/* 182564 80253C84 00441007 */  srav      $v0, $a0, $v0
/* 182568 80253C88 30420001 */  andi      $v0, $v0, 1
.L80253C8C:
/* 18256C 80253C8C 8FBF0014 */  lw        $ra, 0x14($sp)
/* 182570 80253C90 8FB00010 */  lw        $s0, 0x10($sp)
/* 182574 80253C94 03E00008 */  jr        $ra
/* 182578 80253C98 27BD0018 */   addiu    $sp, $sp, 0x18
