.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel pause_items_update
/* 13DF94 8024AC54 27BDFFE8 */  addiu     $sp, $sp, -0x18
/* 13DF98 8024AC58 3C038027 */  lui       $v1, 0x8027
/* 13DF9C 8024AC5C 8C6304C8 */  lw        $v1, 0x4c8($v1)
/* 13DFA0 8024AC60 3C048027 */  lui       $a0, 0x8027
/* 13DFA4 8024AC64 248404D0 */  addiu     $a0, $a0, 0x4d0
/* 13DFA8 8024AC68 AFBF0014 */  sw        $ra, 0x14($sp)
/* 13DFAC 8024AC6C AFB00010 */  sw        $s0, 0x10($sp)
/* 13DFB0 8024AC70 00031040 */  sll       $v0, $v1, 1
/* 13DFB4 8024AC74 00431021 */  addu      $v0, $v0, $v1
/* 13DFB8 8024AC78 00021080 */  sll       $v0, $v0, 2
/* 13DFBC 8024AC7C 00443021 */  addu      $a2, $v0, $a0
/* 13DFC0 8024AC80 90C30002 */  lbu       $v1, 2($a2)
/* 13DFC4 8024AC84 3C028027 */  lui       $v0, 0x8027
/* 13DFC8 8024AC88 8C4205C0 */  lw        $v0, 0x5c0($v0)
/* 13DFCC 8024AC8C 14600002 */  bnez      $v1, .L8024AC98
/* 13DFD0 8024AC90 0043001A */   div      $zero, $v0, $v1
/* 13DFD4 8024AC94 0007000D */  break     7
.L8024AC98:
/* 13DFD8 8024AC98 2401FFFF */   addiu    $at, $zero, -1
/* 13DFDC 8024AC9C 14610004 */  bne       $v1, $at, .L8024ACB0
/* 13DFE0 8024ACA0 3C018000 */   lui      $at, 0x8000
/* 13DFE4 8024ACA4 14410002 */  bne       $v0, $at, .L8024ACB0
/* 13DFE8 8024ACA8 00000000 */   nop      
/* 13DFEC 8024ACAC 0006000D */  break     6
.L8024ACB0:
/* 13DFF0 8024ACB0 00001012 */   mflo     $v0
/* 13DFF4 8024ACB4 90C30001 */  lbu       $v1, 1($a2)
/* 13DFF8 8024ACB8 00432023 */  subu      $a0, $v0, $v1
/* 13DFFC 8024ACBC 28820002 */  slti      $v0, $a0, 2
/* 13E000 8024ACC0 14400005 */  bnez      $v0, .L8024ACD8
/* 13E004 8024ACC4 00000000 */   nop      
/* 13E008 8024ACC8 90C20003 */  lbu       $v0, 3($a2)
/* 13E00C 8024ACCC 2C420009 */  sltiu     $v0, $v0, 9
/* 13E010 8024ACD0 10400005 */  beqz      $v0, .L8024ACE8
/* 13E014 8024ACD4 00000000 */   nop      
.L8024ACD8:
/* 13E018 8024ACD8 3C018027 */  lui       $at, 0x8027
/* 13E01C 8024ACDC AC2005DC */  sw        $zero, 0x5dc($at)
/* 13E020 8024ACE0 08092B4D */  j         .L8024AD34
/* 13E024 8024ACE4 00000000 */   nop      
.L8024ACE8:
/* 13E028 8024ACE8 90C30003 */  lbu       $v1, 3($a2)
/* 13E02C 8024ACEC 2462FFFE */  addiu     $v0, $v1, -2
/* 13E030 8024ACF0 0082102A */  slt       $v0, $a0, $v0
/* 13E034 8024ACF4 14400005 */  bnez      $v0, .L8024AD0C
/* 13E038 8024ACF8 2462FFF8 */   addiu    $v0, $v1, -8
/* 13E03C 8024ACFC 3C018027 */  lui       $at, 0x8027
/* 13E040 8024AD00 AC2205DC */  sw        $v0, 0x5dc($at)
/* 13E044 8024AD04 08092B4D */  j         .L8024AD34
/* 13E048 8024AD08 00000000 */   nop      
.L8024AD0C:
/* 13E04C 8024AD0C 3C058027 */  lui       $a1, 0x8027
/* 13E050 8024AD10 24A505DC */  addiu     $a1, $a1, 0x5dc
/* 13E054 8024AD14 8CA20000 */  lw        $v0, ($a1)
/* 13E058 8024AD18 00821823 */  subu      $v1, $a0, $v0
/* 13E05C 8024AD1C 28620007 */  slti      $v0, $v1, 7
/* 13E060 8024AD20 10400003 */  beqz      $v0, .L8024AD30
/* 13E064 8024AD24 2482FFFA */   addiu    $v0, $a0, -6
/* 13E068 8024AD28 1C600002 */  bgtz      $v1, .L8024AD34
/* 13E06C 8024AD2C 2482FFFF */   addiu    $v0, $a0, -1
.L8024AD30:
/* 13E070 8024AD30 ACA20000 */  sw        $v0, ($a1)
.L8024AD34:
/* 13E074 8024AD34 90C20002 */  lbu       $v0, 2($a2)
/* 13E078 8024AD38 3C058027 */  lui       $a1, 0x8027
/* 13E07C 8024AD3C 8CA505DC */  lw        $a1, 0x5dc($a1)
/* 13E080 8024AD40 00A20018 */  mult      $a1, $v0
/* 13E084 8024AD44 3C048027 */  lui       $a0, 0x8027
/* 13E088 8024AD48 8C8404C8 */  lw        $a0, 0x4c8($a0)
/* 13E08C 8024AD4C 00002812 */  mflo      $a1
/* 13E090 8024AD50 0C09260A */  jal       pause_items_get_pos_y
/* 13E094 8024AD54 00000000 */   nop      
/* 13E098 8024AD58 3C108027 */  lui       $s0, 0x8027
/* 13E09C 8024AD5C 261005D4 */  addiu     $s0, $s0, 0x5d4
/* 13E0A0 8024AD60 8E040000 */  lw        $a0, ($s0)
/* 13E0A4 8024AD64 3C018027 */  lui       $at, 0x8027
/* 13E0A8 8024AD68 AC2205D8 */  sw        $v0, 0x5d8($at)
/* 13E0AC 8024AD6C 0C090D1B */  jal       pause_interp_vertical_scroll
/* 13E0B0 8024AD70 00442023 */   subu     $a0, $v0, $a0
/* 13E0B4 8024AD74 8E030000 */  lw        $v1, ($s0)
/* 13E0B8 8024AD78 00621821 */  addu      $v1, $v1, $v0
/* 13E0BC 8024AD7C AE030000 */  sw        $v1, ($s0)
/* 13E0C0 8024AD80 8FBF0014 */  lw        $ra, 0x14($sp)
/* 13E0C4 8024AD84 8FB00010 */  lw        $s0, 0x10($sp)
/* 13E0C8 8024AD88 03E00008 */  jr        $ra
/* 13E0CC 8024AD8C 27BD0018 */   addiu    $sp, $sp, 0x18
