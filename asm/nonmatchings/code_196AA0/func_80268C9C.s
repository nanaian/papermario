.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_80268C9C
/* 19757C 80268C9C 27BDFFE8 */  addiu     $sp, $sp, -0x18
/* 197580 80268CA0 AFB00010 */  sw        $s0, 0x10($sp)
/* 197584 80268CA4 3C10802A */  lui       $s0, 0x802a
/* 197588 80268CA8 2610FBE0 */  addiu     $s0, $s0, -0x420
/* 19758C 80268CAC AFBF0014 */  sw        $ra, 0x14($sp)
/* 197590 80268CB0 8603004A */  lh        $v1, 0x4a($s0)
/* 197594 80268CB4 2C620018 */  sltiu     $v0, $v1, 0x18
/* 197598 80268CB8 10400060 */  beqz      $v0, .L80268E3C
/* 19759C 80268CBC 00031080 */   sll      $v0, $v1, 2
/* 1975A0 80268CC0 3C01802A */  lui       $at, 0x802a
/* 1975A4 80268CC4 00220821 */  addu      $at, $at, $v0
/* 1975A8 80268CC8 8C22D760 */  lw        $v0, -0x28a0($at)
/* 1975AC 80268CCC 00400008 */  jr        $v0
/* 1975B0 80268CD0 00000000 */   nop      
/* 1975B4 80268CD4 0C0AA564 */  jal       func_802A9590
/* 1975B8 80268CD8 00000000 */   nop      
/* 1975BC 80268CDC 0809A390 */  j         .L80268E40
/* 1975C0 80268CE0 3C05FFFF */   lui      $a1, 0xffff
/* 1975C4 80268CE4 0C0AA68C */  jal       func_802A9A30
/* 1975C8 80268CE8 00000000 */   nop      
/* 1975CC 80268CEC 0809A390 */  j         .L80268E40
/* 1975D0 80268CF0 3C05FFFF */   lui      $a1, 0xffff
/* 1975D4 80268CF4 0C0AA625 */  jal       func_802A9894
/* 1975D8 80268CF8 00000000 */   nop      
/* 1975DC 80268CFC 0809A390 */  j         .L80268E40
/* 1975E0 80268D00 3C05FFFF */   lui      $a1, 0xffff
/* 1975E4 80268D04 0C0AA5FF */  jal       func_802A97FC
/* 1975E8 80268D08 00000000 */   nop      
/* 1975EC 80268D0C 0809A390 */  j         .L80268E40
/* 1975F0 80268D10 3C05FFFF */   lui      $a1, 0xffff
/* 1975F4 80268D14 0C0AA626 */  jal       func_802A9898
/* 1975F8 80268D18 00000000 */   nop      
/* 1975FC 80268D1C 0809A390 */  j         .L80268E40
/* 197600 80268D20 3C05FFFF */   lui      $a1, 0xffff
/* 197604 80268D24 0C0AA551 */  jal       func_802A9544
/* 197608 80268D28 00000000 */   nop      
/* 19760C 80268D2C 0809A390 */  j         .L80268E40
/* 197610 80268D30 3C05FFFF */   lui      $a1, 0xffff
/* 197614 80268D34 0C0AA567 */  jal       func_802A959C
/* 197618 80268D38 00000000 */   nop      
/* 19761C 80268D3C 0809A390 */  j         .L80268E40
/* 197620 80268D40 3C05FFFF */   lui      $a1, 0xffff
/* 197624 80268D44 0C0AA5EF */  jal       func_802A97BC
/* 197628 80268D48 00000000 */   nop      
/* 19762C 80268D4C 0809A390 */  j         .L80268E40
/* 197630 80268D50 3C05FFFF */   lui      $a1, 0xffff
/* 197634 80268D54 0C0AA645 */  jal       func_802A9914
/* 197638 80268D58 00000000 */   nop      
/* 19763C 80268D5C 0809A390 */  j         .L80268E40
/* 197640 80268D60 3C05FFFF */   lui      $a1, 0xffff
/* 197644 80268D64 0C0AA58F */  jal       func_802A963C
/* 197648 80268D68 00000000 */   nop      
/* 19764C 80268D6C 0809A390 */  j         .L80268E40
/* 197650 80268D70 3C05FFFF */   lui      $a1, 0xffff
/* 197654 80268D74 0C0AA5F3 */  jal       func_802A97CC
/* 197658 80268D78 00000000 */   nop      
/* 19765C 80268D7C 0809A390 */  j         .L80268E40
/* 197660 80268D80 3C05FFFF */   lui      $a1, 0xffff
/* 197664 80268D84 0C0AA5C2 */  jal       func_802A9708
/* 197668 80268D88 00000000 */   nop      
/* 19766C 80268D8C 0809A390 */  j         .L80268E40
/* 197670 80268D90 3C05FFFF */   lui      $a1, 0xffff
/* 197674 80268D94 0C0AA604 */  jal       func_802A9810
/* 197678 80268D98 00000000 */   nop      
/* 19767C 80268D9C 0809A390 */  j         .L80268E40
/* 197680 80268DA0 3C05FFFF */   lui      $a1, 0xffff
/* 197684 80268DA4 0C0AA64B */  jal       func_802A992C
/* 197688 80268DA8 00000000 */   nop      
/* 19768C 80268DAC 0809A390 */  j         .L80268E40
/* 197690 80268DB0 3C05FFFF */   lui      $a1, 0xffff
/* 197694 80268DB4 0C0AA5C8 */  jal       func_802A9720
/* 197698 80268DB8 00000000 */   nop      
/* 19769C 80268DBC 0809A390 */  j         .L80268E40
/* 1976A0 80268DC0 3C05FFFF */   lui      $a1, 0xffff
/* 1976A4 80268DC4 0C0AA695 */  jal       func_802A9A54
/* 1976A8 80268DC8 00000000 */   nop      
/* 1976AC 80268DCC 0809A390 */  j         .L80268E40
/* 1976B0 80268DD0 3C05FFFF */   lui      $a1, 0xffff
/* 1976B4 80268DD4 0C0AA638 */  jal       func_802A98E0
/* 1976B8 80268DD8 00000000 */   nop      
/* 1976BC 80268DDC 0809A390 */  j         .L80268E40
/* 1976C0 80268DE0 3C05FFFF */   lui      $a1, 0xffff
/* 1976C4 80268DE4 0C0AA664 */  jal       func_802A9990
/* 1976C8 80268DE8 00000000 */   nop      
/* 1976CC 80268DEC 0809A390 */  j         .L80268E40
/* 1976D0 80268DF0 3C05FFFF */   lui      $a1, 0xffff
/* 1976D4 80268DF4 0C0AA607 */  jal       func_802A981C
/* 1976D8 80268DF8 00000000 */   nop      
/* 1976DC 80268DFC 0809A390 */  j         .L80268E40
/* 1976E0 80268E00 3C05FFFF */   lui      $a1, 0xffff
/* 1976E4 80268E04 0C0AA625 */  jal       func_802A9894
/* 1976E8 80268E08 00000000 */   nop      
/* 1976EC 80268E0C 0809A390 */  j         .L80268E40
/* 1976F0 80268E10 3C05FFFF */   lui      $a1, 0xffff
/* 1976F4 80268E14 0C0AA637 */  jal       func_802A98DC
/* 1976F8 80268E18 00000000 */   nop      
/* 1976FC 80268E1C 0809A390 */  j         .L80268E40
/* 197700 80268E20 3C05FFFF */   lui      $a1, 0xffff
/* 197704 80268E24 0C0AA836 */  jal       func_802AA0D8
/* 197708 80268E28 00000000 */   nop      
/* 19770C 80268E2C 0809A390 */  j         .L80268E40
/* 197710 80268E30 3C05FFFF */   lui      $a1, 0xffff
/* 197714 80268E34 0C0AA5D9 */  jal       func_802A9764
/* 197718 80268E38 00000000 */   nop      
.L80268E3C:
/* 19771C 80268E3C 3C05FFFF */  lui       $a1, 0xffff
.L80268E40:
/* 197720 80268E40 34A57FFF */  ori       $a1, $a1, 0x7fff
/* 197724 80268E44 3C04800E */  lui       $a0, %hi(gBattleStatus)
/* 197728 80268E48 2484C070 */  addiu     $a0, $a0, %lo(gBattleStatus)
/* 19772C 80268E4C A600004A */  sh        $zero, 0x4a($s0)
/* 197730 80268E50 8C820000 */  lw        $v0, ($a0)
/* 197734 80268E54 2403DFFF */  addiu     $v1, $zero, -0x2001
/* 197738 80268E58 00431024 */  and       $v0, $v0, $v1
/* 19773C 80268E5C 00451024 */  and       $v0, $v0, $a1
/* 197740 80268E60 2403BFFF */  addiu     $v1, $zero, -0x4001
/* 197744 80268E64 00431024 */  and       $v0, $v0, $v1
/* 197748 80268E68 0C093EC3 */  jal       close_action_command_instruction_popup
/* 19774C 80268E6C AC820000 */   sw       $v0, ($a0)
/* 197750 80268E70 0C093EB1 */  jal       set_popup_duration
/* 197754 80268E74 0000202D */   daddu    $a0, $zero, $zero
/* 197758 80268E78 8FBF0014 */  lw        $ra, 0x14($sp)
/* 19775C 80268E7C 8FB00010 */  lw        $s0, 0x10($sp)
/* 197760 80268E80 03E00008 */  jr        $ra
/* 197764 80268E84 27BD0018 */   addiu    $sp, $sp, 0x18
