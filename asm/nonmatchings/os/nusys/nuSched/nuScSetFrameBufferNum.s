.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel nuScSetFrameBufferNum
/* 3A390 8005EF90 3C01800E */  lui       $at, 0x800e
/* 3A394 8005EF94 03E00008 */  jr        $ra
/* 3A398 8005EF98 A024AABD */   sb       $a0, -0x5543($at)
