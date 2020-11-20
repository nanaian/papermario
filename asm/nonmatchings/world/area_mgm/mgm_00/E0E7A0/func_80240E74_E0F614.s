.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel func_80240E74_E0F614
/* E0F614 80240E74 27BDFF98 */  addiu     $sp, $sp, -0x68
/* E0F618 80240E78 AFB40058 */  sw        $s4, 0x58($sp)
/* E0F61C 80240E7C 0080A02D */  daddu     $s4, $a0, $zero
/* E0F620 80240E80 AFBF0060 */  sw        $ra, 0x60($sp)
/* E0F624 80240E84 AFB5005C */  sw        $s5, 0x5c($sp)
/* E0F628 80240E88 AFB30054 */  sw        $s3, 0x54($sp)
/* E0F62C 80240E8C AFB20050 */  sw        $s2, 0x50($sp)
/* E0F630 80240E90 AFB1004C */  sw        $s1, 0x4c($sp)
/* E0F634 80240E94 AFB00048 */  sw        $s0, 0x48($sp)
/* E0F638 80240E98 8E910148 */  lw        $s1, 0x148($s4)
/* E0F63C 80240E9C 86240008 */  lh        $a0, 8($s1)
/* E0F640 80240EA0 0C00EABB */  jal       get_npc_unsafe
/* E0F644 80240EA4 00A0802D */   daddu    $s0, $a1, $zero
/* E0F648 80240EA8 8E83000C */  lw        $v1, 0xc($s4)
/* E0F64C 80240EAC 0280202D */  daddu     $a0, $s4, $zero
/* E0F650 80240EB0 8C650000 */  lw        $a1, ($v1)
/* E0F654 80240EB4 0C0B1EAF */  jal       get_variable
/* E0F658 80240EB8 0040902D */   daddu    $s2, $v0, $zero
/* E0F65C 80240EBC AFA00018 */  sw        $zero, 0x18($sp)
/* E0F660 80240EC0 8E2300D0 */  lw        $v1, 0xd0($s1)
/* E0F664 80240EC4 8C630094 */  lw        $v1, 0x94($v1)
/* E0F668 80240EC8 AFA3001C */  sw        $v1, 0x1c($sp)
/* E0F66C 80240ECC 8E2300D0 */  lw        $v1, 0xd0($s1)
/* E0F670 80240ED0 8C630080 */  lw        $v1, 0x80($v1)
/* E0F674 80240ED4 AFA30020 */  sw        $v1, 0x20($sp)
/* E0F678 80240ED8 8E2300D0 */  lw        $v1, 0xd0($s1)
/* E0F67C 80240EDC 8C630088 */  lw        $v1, 0x88($v1)
/* E0F680 80240EE0 AFA30024 */  sw        $v1, 0x24($sp)
/* E0F684 80240EE4 8E2300D0 */  lw        $v1, 0xd0($s1)
/* E0F688 80240EE8 8C63008C */  lw        $v1, 0x8c($v1)
/* E0F68C 80240EEC 27B50018 */  addiu     $s5, $sp, 0x18
/* E0F690 80240EF0 AFA30028 */  sw        $v1, 0x28($sp)
/* E0F694 80240EF4 8E2300D0 */  lw        $v1, 0xd0($s1)
/* E0F698 80240EF8 3C014282 */  lui       $at, 0x4282
/* E0F69C 80240EFC 44810000 */  mtc1      $at, $f0
/* E0F6A0 80240F00 8C630090 */  lw        $v1, 0x90($v1)
/* E0F6A4 80240F04 0040982D */  daddu     $s3, $v0, $zero
/* E0F6A8 80240F08 E7A00030 */  swc1      $f0, 0x30($sp)
/* E0F6AC 80240F0C A7A00034 */  sh        $zero, 0x34($sp)
/* E0F6B0 80240F10 16000005 */  bnez      $s0, .L80240F28
/* E0F6B4 80240F14 AFA3002C */   sw       $v1, 0x2c($sp)
/* E0F6B8 80240F18 8E2200B0 */  lw        $v0, 0xb0($s1)
/* E0F6BC 80240F1C 30420004 */  andi      $v0, $v0, 4
/* E0F6C0 80240F20 10400044 */  beqz      $v0, .L80241034
/* E0F6C4 80240F24 00000000 */   nop      
.L80240F28:
/* E0F6C8 80240F28 2404F7FF */  addiu     $a0, $zero, -0x801
/* E0F6CC 80240F2C AE800070 */  sw        $zero, 0x70($s4)
/* E0F6D0 80240F30 A640008E */  sh        $zero, 0x8e($s2)
/* E0F6D4 80240F34 8E2200CC */  lw        $v0, 0xcc($s1)
/* E0F6D8 80240F38 8E430000 */  lw        $v1, ($s2)
/* E0F6DC 80240F3C 8C420000 */  lw        $v0, ($v0)
/* E0F6E0 80240F40 00641824 */  and       $v1, $v1, $a0
/* E0F6E4 80240F44 AE430000 */  sw        $v1, ($s2)
/* E0F6E8 80240F48 AE420028 */  sw        $v0, 0x28($s2)
/* E0F6EC 80240F4C 8E2200D0 */  lw        $v0, 0xd0($s1)
/* E0F6F0 80240F50 8C420098 */  lw        $v0, 0x98($v0)
/* E0F6F4 80240F54 54400005 */  bnel      $v0, $zero, .L80240F6C
/* E0F6F8 80240F58 2402FDFF */   addiu    $v0, $zero, -0x201
/* E0F6FC 80240F5C 34620200 */  ori       $v0, $v1, 0x200
/* E0F700 80240F60 2403FFF7 */  addiu     $v1, $zero, -9
/* E0F704 80240F64 080903DD */  j         .L80240F74
/* E0F708 80240F68 00431024 */   and      $v0, $v0, $v1
.L80240F6C:
/* E0F70C 80240F6C 00621024 */  and       $v0, $v1, $v0
/* E0F710 80240F70 34420008 */  ori       $v0, $v0, 8
.L80240F74:
/* E0F714 80240F74 AE420000 */  sw        $v0, ($s2)
/* E0F718 80240F78 8E2200B0 */  lw        $v0, 0xb0($s1)
/* E0F71C 80240F7C 30420004 */  andi      $v0, $v0, 4
/* E0F720 80240F80 10400008 */  beqz      $v0, .L80240FA4
/* E0F724 80240F84 24020063 */   addiu    $v0, $zero, 0x63
/* E0F728 80240F88 AE820070 */  sw        $v0, 0x70($s4)
/* E0F72C 80240F8C AE800074 */  sw        $zero, 0x74($s4)
/* E0F730 80240F90 8E2200B0 */  lw        $v0, 0xb0($s1)
/* E0F734 80240F94 2403FFFB */  addiu     $v1, $zero, -5
/* E0F738 80240F98 00431024 */  and       $v0, $v0, $v1
/* E0F73C 80240F9C 080903F4 */  j         .L80240FD0
/* E0F740 80240FA0 AE2200B0 */   sw       $v0, 0xb0($s1)
.L80240FA4:
/* E0F744 80240FA4 8E220000 */  lw        $v0, ($s1)
/* E0F748 80240FA8 3C034000 */  lui       $v1, 0x4000
/* E0F74C 80240FAC 00431024 */  and       $v0, $v0, $v1
/* E0F750 80240FB0 10400007 */  beqz      $v0, .L80240FD0
/* E0F754 80240FB4 3C03BFFF */   lui      $v1, 0xbfff
/* E0F758 80240FB8 2402000C */  addiu     $v0, $zero, 0xc
/* E0F75C 80240FBC AE820070 */  sw        $v0, 0x70($s4)
/* E0F760 80240FC0 8E220000 */  lw        $v0, ($s1)
/* E0F764 80240FC4 3463FFFF */  ori       $v1, $v1, 0xffff
/* E0F768 80240FC8 00431024 */  and       $v0, $v0, $v1
/* E0F76C 80240FCC AE220000 */  sw        $v0, ($s1)
.L80240FD0:
/* E0F770 80240FD0 27A50038 */  addiu     $a1, $sp, 0x38
/* E0F774 80240FD4 27A6003C */  addiu     $a2, $sp, 0x3c
/* E0F778 80240FD8 C6400038 */  lwc1      $f0, 0x38($s2)
/* E0F77C 80240FDC 864200A8 */  lh        $v0, 0xa8($s2)
/* E0F780 80240FE0 3C0142C8 */  lui       $at, 0x42c8
/* E0F784 80240FE4 44812000 */  mtc1      $at, $f4
/* E0F788 80240FE8 44823000 */  mtc1      $v0, $f6
/* E0F78C 80240FEC 00000000 */  nop       
/* E0F790 80240FF0 468031A0 */  cvt.s.w   $f6, $f6
/* E0F794 80240FF4 27A20044 */  addiu     $v0, $sp, 0x44
/* E0F798 80240FF8 E7A00038 */  swc1      $f0, 0x38($sp)
/* E0F79C 80240FFC C640003C */  lwc1      $f0, 0x3c($s2)
/* E0F7A0 80241000 C6420040 */  lwc1      $f2, 0x40($s2)
/* E0F7A4 80241004 46060000 */  add.s     $f0, $f0, $f6
/* E0F7A8 80241008 E7A40044 */  swc1      $f4, 0x44($sp)
/* E0F7AC 8024100C E7A20040 */  swc1      $f2, 0x40($sp)
/* E0F7B0 80241010 E7A0003C */  swc1      $f0, 0x3c($sp)
/* E0F7B4 80241014 AFA20010 */  sw        $v0, 0x10($sp)
/* E0F7B8 80241018 8E440080 */  lw        $a0, 0x80($s2)
/* E0F7BC 8024101C 0C0372DF */  jal       func_800DCB7C
/* E0F7C0 80241020 27A70040 */   addiu    $a3, $sp, 0x40
/* E0F7C4 80241024 10400003 */  beqz      $v0, .L80241034
/* E0F7C8 80241028 00000000 */   nop      
/* E0F7CC 8024102C C7A0003C */  lwc1      $f0, 0x3c($sp)
/* E0F7D0 80241030 E640003C */  swc1      $f0, 0x3c($s2)
.L80241034:
/* E0F7D4 80241034 8E830070 */  lw        $v1, 0x70($s4)
/* E0F7D8 80241038 2C620064 */  sltiu     $v0, $v1, 0x64
/* E0F7DC 8024103C 10400042 */  beqz      $v0, .L80241148
/* E0F7E0 80241040 00031080 */   sll      $v0, $v1, 2
/* E0F7E4 80241044 3C018024 */  lui       $at, 0x8024
/* E0F7E8 80241048 00220821 */  addu      $at, $at, $v0
/* E0F7EC 8024104C 8C223E00 */  lw        $v0, 0x3e00($at)
/* E0F7F0 80241050 00400008 */  jr        $v0
/* E0F7F4 80241054 00000000 */   nop      
/* E0F7F8 80241058 0280202D */  daddu     $a0, $s4, $zero
/* E0F7FC 8024105C 0260282D */  daddu     $a1, $s3, $zero
/* E0F800 80241060 0C0900B8 */  jal       func_802402E0_E0EA80
/* E0F804 80241064 02A0302D */   daddu    $a2, $s5, $zero
/* E0F808 80241068 0280202D */  daddu     $a0, $s4, $zero
/* E0F80C 8024106C 0260282D */  daddu     $a1, $s3, $zero
/* E0F810 80241070 0C09010E */  jal       func_80240438_E0EBD8
/* E0F814 80241074 02A0302D */   daddu    $a2, $s5, $zero
/* E0F818 80241078 08090452 */  j         .L80241148
/* E0F81C 8024107C 00000000 */   nop      
/* E0F820 80241080 0280202D */  daddu     $a0, $s4, $zero
/* E0F824 80241084 0260282D */  daddu     $a1, $s3, $zero
/* E0F828 80241088 0C0901B8 */  jal       UnkNpcAIFunc1
/* E0F82C 8024108C 02A0302D */   daddu    $a2, $s5, $zero
/* E0F830 80241090 0280202D */  daddu     $a0, $s4, $zero
/* E0F834 80241094 0260282D */  daddu     $a1, $s3, $zero
/* E0F838 80241098 0C0901E8 */  jal       func_802407A0_E0EF40
/* E0F83C 8024109C 02A0302D */   daddu    $a2, $s5, $zero
/* E0F840 802410A0 08090452 */  j         .L80241148
/* E0F844 802410A4 00000000 */   nop      
/* E0F848 802410A8 0280202D */  daddu     $a0, $s4, $zero
/* E0F84C 802410AC 0260282D */  daddu     $a1, $s3, $zero
/* E0F850 802410B0 0C090257 */  jal       func_8024095C_E0F0FC
/* E0F854 802410B4 02A0302D */   daddu    $a2, $s5, $zero
/* E0F858 802410B8 08090452 */  j         .L80241148
/* E0F85C 802410BC 00000000 */   nop      
/* E0F860 802410C0 0280202D */  daddu     $a0, $s4, $zero
/* E0F864 802410C4 0260282D */  daddu     $a1, $s3, $zero
/* E0F868 802410C8 0C090284 */  jal       func_80240A10_E0F1B0
/* E0F86C 802410CC 02A0302D */   daddu    $a2, $s5, $zero
/* E0F870 802410D0 0280202D */  daddu     $a0, $s4, $zero
/* E0F874 802410D4 0260282D */  daddu     $a1, $s3, $zero
/* E0F878 802410D8 0C0902A1 */  jal       func_80240A84_E0F224
/* E0F87C 802410DC 02A0302D */   daddu    $a2, $s5, $zero
/* E0F880 802410E0 08090452 */  j         .L80241148
/* E0F884 802410E4 00000000 */   nop      
/* E0F888 802410E8 0280202D */  daddu     $a0, $s4, $zero
/* E0F88C 802410EC 0260282D */  daddu     $a1, $s3, $zero
/* E0F890 802410F0 0C0902BF */  jal       func_80240AFC_E0F29C
/* E0F894 802410F4 02A0302D */   daddu    $a2, $s5, $zero
/* E0F898 802410F8 0280202D */  daddu     $a0, $s4, $zero
/* E0F89C 802410FC 0260282D */  daddu     $a1, $s3, $zero
/* E0F8A0 80241100 0C09030B */  jal       func_80240C2C_E0F3CC
/* E0F8A4 80241104 02A0302D */   daddu    $a2, $s5, $zero
/* E0F8A8 80241108 08090452 */  j         .L80241148
/* E0F8AC 8024110C 00000000 */   nop      
/* E0F8B0 80241110 0280202D */  daddu     $a0, $s4, $zero
/* E0F8B4 80241114 0260282D */  daddu     $a1, $s3, $zero
/* E0F8B8 80241118 0C090353 */  jal       func_80240D4C_E0F4EC
/* E0F8BC 8024111C 02A0302D */   daddu    $a2, $s5, $zero
/* E0F8C0 80241120 08090452 */  j         .L80241148
/* E0F8C4 80241124 00000000 */   nop      
/* E0F8C8 80241128 0280202D */  daddu     $a0, $s4, $zero
/* E0F8CC 8024112C 0260282D */  daddu     $a1, $s3, $zero
/* E0F8D0 80241130 0C09036D */  jal       func_80240DB4_E0F554
/* E0F8D4 80241134 02A0302D */   daddu    $a2, $s5, $zero
/* E0F8D8 80241138 08090452 */  j         .L80241148
/* E0F8DC 8024113C 00000000 */   nop      
/* E0F8E0 80241140 0C0129CF */  jal       func_8004A73C
/* E0F8E4 80241144 0280202D */   daddu    $a0, $s4, $zero
.L80241148:
/* E0F8E8 80241148 8FBF0060 */  lw        $ra, 0x60($sp)
/* E0F8EC 8024114C 8FB5005C */  lw        $s5, 0x5c($sp)
/* E0F8F0 80241150 8FB40058 */  lw        $s4, 0x58($sp)
/* E0F8F4 80241154 8FB30054 */  lw        $s3, 0x54($sp)
/* E0F8F8 80241158 8FB20050 */  lw        $s2, 0x50($sp)
/* E0F8FC 8024115C 8FB1004C */  lw        $s1, 0x4c($sp)
/* E0F900 80241160 8FB00048 */  lw        $s0, 0x48($sp)
/* E0F904 80241164 0000102D */  daddu     $v0, $zero, $zero
/* E0F908 80241168 03E00008 */  jr        $ra
/* E0F90C 8024116C 27BD0068 */   addiu    $sp, $sp, 0x68
