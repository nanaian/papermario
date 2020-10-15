.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel LoadMoveScript
/* 196A10 80268130 27BDFFE0 */  addiu     $sp, $sp, -0x20
/* 196A14 80268134 AFB20018 */  sw        $s2, 0x18($sp)
/* 196A18 80268138 0080902D */  daddu     $s2, $a0, $zero
/* 196A1C 8026813C AFB10014 */  sw        $s1, 0x14($sp)
/* 196A20 80268140 3C11800E */  lui       $s1, %hi(gBattleStatus)
/* 196A24 80268144 2631C070 */  addiu     $s1, $s1, %lo(gBattleStatus)
/* 196A28 80268148 AFBF001C */  sw        $ra, 0x1c($sp)
/* 196A2C 8026814C AFB00010 */  sw        $s0, 0x10($sp)
/* 196A30 80268150 8630017C */  lh        $s0, 0x17c($s1)
/* 196A34 80268154 3C028029 */  lui       $v0, 0x8029
/* 196A38 80268158 24423E80 */  addiu     $v0, $v0, 0x3e80
/* 196A3C 8026815C 00108100 */  sll       $s0, $s0, 4
/* 196A40 80268160 02028021 */  addu      $s0, $s0, $v0
/* 196A44 80268164 8E040000 */  lw        $a0, ($s0)
/* 196A48 80268168 8E050004 */  lw        $a1, 4($s0)
/* 196A4C 8026816C 0C00A5CF */  jal       dma_copy
/* 196A50 80268170 8E060008 */   lw       $a2, 8($s0)
/* 196A54 80268174 8E02000C */  lw        $v0, 0xc($s0)
/* 196A58 80268178 0C098EF2 */  jal       deduct_current_move_fp
/* 196A5C 8026817C AE420084 */   sw       $v0, 0x84($s2)
/* 196A60 80268180 8E220004 */  lw        $v0, 4($s1)
/* 196A64 80268184 3C030800 */  lui       $v1, 0x800
/* 196A68 80268188 00431024 */  and       $v0, $v0, $v1
/* 196A6C 8026818C 10400003 */  beqz      $v0, .L8026819C
/* 196A70 80268190 00000000 */   nop      
/* 196A74 80268194 0C0951B5 */  jal       enable_player_blur
/* 196A78 80268198 00000000 */   nop      
.L8026819C:
/* 196A7C 8026819C 8FBF001C */  lw        $ra, 0x1c($sp)
/* 196A80 802681A0 8FB20018 */  lw        $s2, 0x18($sp)
/* 196A84 802681A4 8FB10014 */  lw        $s1, 0x14($sp)
/* 196A88 802681A8 8FB00010 */  lw        $s0, 0x10($sp)
/* 196A8C 802681AC 24020002 */  addiu     $v0, $zero, 2
/* 196A90 802681B0 03E00008 */  jr        $ra
/* 196A94 802681B4 27BD0020 */   addiu    $sp, $sp, 0x20
/* 196A98 802681B8 00000000 */  nop       
/* 196A9C 802681BC 00000000 */  nop       
