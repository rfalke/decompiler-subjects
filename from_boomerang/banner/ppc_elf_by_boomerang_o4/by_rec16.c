/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/banner/ppc_elf_by_boomerang_o4/subject.exe'
 */

stack space not deallocated on return
/*	Procedure: 0x100002E8 - 0x1000030F
 *	Argument size: 0
 *	Local size: 32
 *	Save regs size: 32
 */

_init()
{



    call_gmon_start();
    frame_dummy();
    return(__do_global_ctors_aux());
}

/* DEST BLOCK NOT FOUND: 10000330 -> 10011fcc */
/* DEST BLOCK NOT FOUND: 10000330 -> 10011fcc */
/*	Procedure: 0x10000310 - 0x10000333
 *	Argument size: -16
 *	Local size: 16
 *	Save regs size: 0
 */

_start()
{



    asm("rlwinm r1,r1,0,0,27");
    lr = 0;
    *r1 = 0;
    r8 = 268435456;
    asm("lwzu r13,0x97c(r8)");
    goto __libc_start_main;
}

stack space not deallocated on return
/*	Procedure: 0x10000334 - 0x10000373
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

call_gmon_start(R3)
/* unknown */ void  R3;
{



    r3 = L10011F58(R3);
    r0 = *(lr + 12);
    if(r0 != 0) {
        lr = r0;
        asm("bllr ");
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000374 - 0x100003EB
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__do_global_dtors_aux(R3)
/* unknown */ void  R3;
{



    r30 = 268500992;
    r0 = *completed.1;
    if(r0 == 0) {
        r31 = 268500992;
        r11 = *p.0;
        r9 = *r11;
        do {
            r0 = r11 + 4;
            lr = r9;
            *(r31 + 7684) = r0;
            asm("bllr ");
            r11 = *(r31 + 7684);
            r9 = *r11;
        } while(r9 != 0);
        *(r30 + 8164) = 1;
    }
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x100003EC - 0x10000407
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_dtors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000408 - 0x1000044B
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

frame_dummy()
{



    r3 = __JCR_LIST__;
    0 :: 0;
    if(*__JCR_LIST__ != 0) {
        == ? L1000043c : ;
        r3 = L10000000();
    }
    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x1000044C - 0x10000467
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call_frame_dummy()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x10000468 - 0x100005F3
 *	Argument size: 17
 *	Local size: -4
 *	Save regs size: -4
 */

main(R3, A8, A10)
/* unknown */ void  R3;
/* unknown */ void  A8;
/* unknown */ void  A10;
{



    r3 = R3;
    r25 = 268435456;
    r26 = 1;
    r3 = 12;
    r27 = & A10;
    asm("crxor cr1:eq,cr1:eq,cr1:eq");
    r0 = 0x10000990;
    r30 = malloc();
    10 :: ;
    r31 = strlen( *r30, 268435456);
    asm("bc le,0x100004d0");
    r31 = 10;
    r29 = 0;
    asm("rlwinm r28,r31,3,0,28");
    r5 = 0;
    if(0 < r31) {
        r3 = 32;
        r12 = glyphs;
        r4 = & A8;
        do {
            r0 = *r30;
            r10 = 0;
            r6 = r4;
            r9 = *(r5 + r0) + -32;
            asm("nor r8,r9,r9");
            r8 = r9 & r31 >> 31;
            r7 = r3 >> 3;
            asm("addze r7,r7");
            asm("mulli r0,r7,7");
            asm("rlwinm r9,r7,3,0,28");
            r11 = r8 - r9;
            r7 = r0 + r29;
            lr = 7;
            asm("rlwinm r8,r7,2,0,29");
            r7 = *(r8 + r12);
            asm("mulli r8,r11,7");
            r11 = *(r7 + r8 + r10);
            r9 = r6 + r10;
            r10 = r10 + 1;
            *(r9 + 8) = r11;
            asm("bdnz 0x10000540");
            r5 = r5 + 1;
            *(r6 + 15) = r3;
            r5 :: r31;
        } while(r4 = r4 + 8);
    }
    asm("addic. r9,r28,-1");
    asm("bc lt,0x10000598");
    r10 = 0;
    r11 = & A8 + r9;
    asm("addic. r9,r9,-1");
    if(*(r11 + 8) == 32) {
        *(r11 + 8) = r10;
        asm("bc ge,0x1000057c");
    }
    r29 = r29 + 1;
    puts(r27);
    6 :: ;
    asm("bc le,0x100004d8");
    r30 = r30 + 4;
    puts(r25 + 6296);
    asm("addic. r26,r26,-1");
    asm("bc ne,0x100004b8");
    r1 = r1 + 128;
    return(0);
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x100005F4 - 0x10000683
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__libc_csu_fini(A24)
/* unknown */ void  A24;
{
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;



    r6 = lr;
    L10000600();
    V18 = r30;
    r30 = lr;
    V1c = r31;
    V14 = r29;
    A24 = r6;
    r30 = *(r30 + -16) + r30;
    r0 = *(r30 + -32768) - *(r30 + -32764);
    0 :: ;
    r31 = (r2 >> 2) + -1;
    asm("bc ne,0x10000640");
    goto L10000660;
    r11 = *(r30 + -32764);
    asm("rlwinm r8,r31,2,0,29");
    r29 = r31;
    r31 = r31 + -1;
    lr = *(r8 + r11);
    asm("blctr ");
    0 :: ;
    asm("bc ne,0x1000063c");
L10000660:
    r29 = V14;
    r30 = V18;
    r31 = V1c;
    lr = A24;
    return(_fini());
    asm("?");
}

stack space not deallocated on return
/*	Procedure: 0x10000684 - 0x1000070F
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__libc_csu_init(A24)
/* unknown */ void  A24;
{
	/* unknown */ void  V10;
	/* unknown */ void  V14;
	/* unknown */ void  V18;
	/* unknown */ void  V1c;



    r6 = lr;
    L10000690();
    V18 = r30;
    r30 = lr;
    V10 = r28;
    V1c = r31;
    V14 = r29;
    A24 = r6;
    r30 = *(r30 + -16) + r30;
    _init();
    r28 = *(r30 + -32756);
    r31 = 0;
    r3 = *(r30 + -32760) - r28;
    r0 = r2 >> 2;
    r0 :: ;
    asm("bc ge,0x100006f0");
    r29 = r0;
    asm("rlwinm r7,r31,2,0,29");
    r31 = r31 + 1;
    lr = *(r7 + r28);
    asm("blctr ");
    r29 :: ;
    asm("bc lt,0x100006d4");
    r28 = V10;
    r29 = V14;
    r30 = V18;
    lr = A24;
    r31 = V1c;
    return(r3);
}

/*	Procedure: 0x10000710 - 0x10000713
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_14()
{



    asm("stfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000714 - 0x10000717
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_15()
{



    asm("stfd fr15,-0x88(r11)");
}

/*	Procedure: 0x10000718 - 0x1000071B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_16()
{



    asm("stfd fr16,-0x80(r11)");
}

/*	Procedure: 0x1000071C - 0x1000071F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_17()
{



    asm("stfd fr17,-0x78(r11)");
}

/*	Procedure: 0x10000720 - 0x10000723
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_18()
{



    asm("stfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000724 - 0x10000727
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_19()
{



    asm("stfd fr19,-0x68(r11)");
}

/*	Procedure: 0x10000728 - 0x1000072B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_20()
{



    asm("stfd fr20,-0x60(r11)");
}

/*	Procedure: 0x1000072C - 0x1000072F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_21()
{



    asm("stfd fr21,-0x58(r11)");
}

/*	Procedure: 0x10000730 - 0x10000733
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_22()
{



    asm("stfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000734 - 0x10000737
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_23()
{



    asm("stfd fr23,-0x48(r11)");
}

/*	Procedure: 0x10000738 - 0x1000073B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_24()
{



    asm("stfd fr24,-0x40(r11)");
}

/*	Procedure: 0x1000073C - 0x1000073F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_25()
{



    asm("stfd fr25,-0x38(r11)");
}

/*	Procedure: 0x10000740 - 0x10000743
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_26()
{



    asm("stfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000744 - 0x10000747
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_27()
{



    asm("stfd fr27,-0x28(r11)");
}

/*	Procedure: 0x10000748 - 0x1000074B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_28()
{



    asm("stfd fr28,-0x20(r11)");
}

/*	Procedure: 0x1000074C - 0x1000074F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_29()
{



    asm("stfd fr29,-0x18(r11)");
}

/*	Procedure: 0x10000750 - 0x10000753
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_30()
{



    asm("stfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000754 - 0x1000075B
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_savefpr_31(R3)
/* unknown */ void  R3;
{



    asm("stfd fr31,-8(r11)");
    return(R3);
}

/*	Procedure: 0x1000075C - 0x1000075F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_14()
{



    *(r11 + -72) = r14;
}

/*	Procedure: 0x10000760 - 0x10000763
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_15()
{



    *(r11 + -68) = r15;
}

/*	Procedure: 0x10000764 - 0x10000767
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_16()
{



    *(r11 + -64) = r16;
}

/*	Procedure: 0x10000768 - 0x1000076B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_17()
{



    *(r11 + -60) = r17;
}

/*	Procedure: 0x1000076C - 0x1000076F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_18()
{



    *(r11 + -56) = r18;
}

/*	Procedure: 0x10000770 - 0x10000773
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_19()
{



    *(r11 + -52) = r19;
}

/*	Procedure: 0x10000774 - 0x10000777
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_20()
{



    *(r11 + -48) = r20;
}

/*	Procedure: 0x10000778 - 0x1000077B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_21()
{



    *(r11 + -44) = r21;
}

/*	Procedure: 0x1000077C - 0x1000077F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_22()
{



    *(r11 + -40) = r22;
}

/*	Procedure: 0x10000780 - 0x10000783
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_23()
{



    *(r11 + -36) = r23;
}

/*	Procedure: 0x10000784 - 0x10000787
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_24()
{



    *(r11 + -32) = r24;
}

/*	Procedure: 0x10000788 - 0x1000078B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_25()
{



    *(r11 + -28) = r25;
}

/*	Procedure: 0x1000078C - 0x1000078F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_26()
{



    *(r11 + -24) = r26;
}

/*	Procedure: 0x10000790 - 0x10000793
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_27()
{



    *(r11 + -20) = r27;
}

/*	Procedure: 0x10000794 - 0x10000797
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_28()
{



    *(r11 + -16) = r28;
}

/*	Procedure: 0x10000798 - 0x1000079B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_29()
{



    *(r11 + -12) = r29;
}

/*	Procedure: 0x1000079C - 0x1000079F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_30()
{



    *(r11 + -8) = r30;
}

/*	Procedure: 0x100007A0 - 0x100007A7
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_savegpr_31(R3)
/* unknown */ void  R3;
{



    *(r11 + -4) = r31;
    return(R3);
}

/*	Procedure: 0x100007A8 - 0x100007AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x100007AC - 0x100007AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x100007B0 - 0x100007B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x100007B4 - 0x100007B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x100007B8 - 0x100007BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x100007BC - 0x100007BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x100007C0 - 0x100007C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x100007C4 - 0x100007C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x100007C8 - 0x100007CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x100007CC - 0x100007CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x100007D0 - 0x100007D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x100007D4 - 0x100007D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x100007D8 - 0x100007DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x100007DC - 0x100007DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x100007E0 - 0x100007E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x100007E4 - 0x100007E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x100007E8 - 0x100007EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x100007EC - 0x100007F3
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_31(R3)
/* unknown */ void  R3;
{



    asm("lfd fr31,-8(r11)");
    return(R3);
}

/*	Procedure: 0x100007F4 - 0x100007F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x100007F8 - 0x100007FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x100007FC - 0x100007FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x10000800 - 0x10000803
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x10000804 - 0x10000807
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x10000808 - 0x1000080B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x1000080C - 0x1000080F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x10000810 - 0x10000813
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x10000814 - 0x10000817
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x10000818 - 0x1000081B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x1000081C - 0x1000081F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x10000820 - 0x10000823
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x10000824 - 0x10000827
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x10000828 - 0x1000082B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x1000082C - 0x1000082F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x10000830 - 0x10000833
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x10000834 - 0x10000837
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x10000838 - 0x1000083F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_31(R3)
/* unknown */ void  R3;
{



    r31 = *(r11 + -4);
    return(R3);
}

/*	Procedure: 0x10000840 - 0x10000843
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_14_x()
{



    asm("lfd fr14,-0x90(r11)");
}

/*	Procedure: 0x10000844 - 0x10000847
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_15_x()
{



    asm("lfd fr15,-0x88(r11)");
}

/*	Procedure: 0x10000848 - 0x1000084B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_16_x()
{



    asm("lfd fr16,-0x80(r11)");
}

/*	Procedure: 0x1000084C - 0x1000084F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_17_x()
{



    asm("lfd fr17,-0x78(r11)");
}

/*	Procedure: 0x10000850 - 0x10000853
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_18_x()
{



    asm("lfd fr18,-0x70(r11)");
}

/*	Procedure: 0x10000854 - 0x10000857
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_19_x()
{



    asm("lfd fr19,-0x68(r11)");
}

/*	Procedure: 0x10000858 - 0x1000085B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_20_x()
{



    asm("lfd fr20,-0x60(r11)");
}

/*	Procedure: 0x1000085C - 0x1000085F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_21_x()
{



    asm("lfd fr21,-0x58(r11)");
}

/*	Procedure: 0x10000860 - 0x10000863
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_22_x()
{



    asm("lfd fr22,-0x50(r11)");
}

/*	Procedure: 0x10000864 - 0x10000867
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_23_x()
{



    asm("lfd fr23,-0x48(r11)");
}

/*	Procedure: 0x10000868 - 0x1000086B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_24_x()
{



    asm("lfd fr24,-0x40(r11)");
}

/*	Procedure: 0x1000086C - 0x1000086F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_25_x()
{



    asm("lfd fr25,-0x38(r11)");
}

/*	Procedure: 0x10000870 - 0x10000873
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_26_x()
{



    asm("lfd fr26,-0x30(r11)");
}

/*	Procedure: 0x10000874 - 0x10000877
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_27_x()
{



    asm("lfd fr27,-0x28(r11)");
}

/*	Procedure: 0x10000878 - 0x1000087B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_28_x()
{



    asm("lfd fr28,-0x20(r11)");
}

/*	Procedure: 0x1000087C - 0x1000087F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_29_x()
{



    asm("lfd fr29,-0x18(r11)");
}

/*	Procedure: 0x10000880 - 0x10000883
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_30_x()
{



    asm("lfd fr30,-0x10(r11)");
}

/*	Procedure: 0x10000884 - 0x10000897
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restfpr_31_x(R3)
/* unknown */ void  R3;
{



    r0 = *(r11 + 4);
    asm("lfd fr31,-8(r11)");
    lr = r0;
    r1 = r11;
    return(R3);
}

/*	Procedure: 0x10000898 - 0x1000089B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_14_x()
{



    r14 = *(r11 + -72);
}

/*	Procedure: 0x1000089C - 0x1000089F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_15_x()
{



    r15 = *(r11 + -68);
}

/*	Procedure: 0x100008A0 - 0x100008A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_16_x()
{



    r16 = *(r11 + -64);
}

/*	Procedure: 0x100008A4 - 0x100008A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_17_x()
{



    r17 = *(r11 + -60);
}

/*	Procedure: 0x100008A8 - 0x100008AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_18_x()
{



    r18 = *(r11 + -56);
}

/*	Procedure: 0x100008AC - 0x100008AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_19_x()
{



    r19 = *(r11 + -52);
}

/*	Procedure: 0x100008B0 - 0x100008B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_20_x()
{



    r20 = *(r11 + -48);
}

/*	Procedure: 0x100008B4 - 0x100008B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_21_x()
{



    r21 = *(r11 + -44);
}

/*	Procedure: 0x100008B8 - 0x100008BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_22_x()
{



    r22 = *(r11 + -40);
}

/*	Procedure: 0x100008BC - 0x100008BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_23_x()
{



    r23 = *(r11 + -36);
}

/*	Procedure: 0x100008C0 - 0x100008C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_24_x()
{



    r24 = *(r11 + -32);
}

/*	Procedure: 0x100008C4 - 0x100008C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_25_x()
{



    r25 = *(r11 + -28);
}

/*	Procedure: 0x100008C8 - 0x100008CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_26_x()
{



    r26 = *(r11 + -24);
}

/*	Procedure: 0x100008CC - 0x100008CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_27_x()
{



    r27 = *(r11 + -20);
}

/*	Procedure: 0x100008D0 - 0x100008D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_28_x()
{



    r28 = *(r11 + -16);
}

/*	Procedure: 0x100008D4 - 0x100008D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_29_x()
{



    r29 = *(r11 + -12);
}

/*	Procedure: 0x100008D8 - 0x100008DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_30_x()
{



    r30 = *(r11 + -8);
}

/*	Procedure: 0x100008DC - 0x100008EF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

_restgpr_31_x(R3)
/* unknown */ void  R3;
{



    r31 = *(r11 + -4);
    lr = *(r11 + 4);
    r1 = r11;
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x100008F0 - 0x1000093F
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

__do_global_ctors_aux(R3)
/* unknown */ void  R3;
{



    r31 = __CTOR_END__ + -4;
    r0 = *(__CTOR_END__ + -4);
    do {
        lr = r0;
        asm("bllr ");
        asm("lwzu r0,-4(r31)");
    } while(r0 != -1);
    return(R3);
}

stack space not deallocated on return
/*	Procedure: 0x10000940 - 0x1000095B
 *	Argument size: 0
 *	Local size: 16
 *	Save regs size: 16
 */

call___do_global_ctors_aux()
{



    return(r3);
}

stack space not deallocated on return
/*	Procedure: 0x1000095C - 0x1000097B
 *	Argument size: 4
 *	Local size: 32
 *	Save regs size: 32
 */

_fini(R3)
/* unknown */ void  R3;
{



    return(__do_global_dtors_aux());
}

/*	Procedure: 0x10011F58 - 0x10011F6B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L10011F58()
{



    asm("bllr ");
    asm("?");
    asm("?");
    asm("?");
    asm("?");
}

/*	Procedure: 0x10011FB4 - 0x10011FBB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

puts()
{



    asm("?");
    asm("andis. r15,r3,0x6f200000");
}

/*	Procedure: 0x10011FBC - 0x10011FC3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

malloc()
{



    asm("?");
    asm("rldimi r0,r1,13,25");
}

/*	Procedure: 0x10011FC4 - 0x10011FCB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

strlen()
{



    r25 = r14 + 13151;
    asm("andi. r18,r3,0x6532");
}

/*	Procedure: 0x10011FCC - 0x10011FE3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_start_main()
{



    r1 = r16 + 13360;
    asm("addic. r1,r16,0x382d");
    asm("andi. r17,r17,0x2900");
    asm("?");
    r17 = 10311;
    asm("?");
}

/* address  size  */
/* 0x100002e8      40 */ /* unknown */ void 	_init;
/* 0x10000310      36 */ /* unknown */ void 	_start;
/* 0x10000334      64 */ /* unknown */ void 	call_gmon_start;
/* 0x10000374     120 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x100003ec      28 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x10000408      68 */ /* unknown */ void 	frame_dummy;
/* 0x1000044c      28 */ /* unknown */ void 	call_frame_dummy;
/* 0x10000468     396 */ /* unknown */ void 	main;
/* 0x100005f4     144 */ /* unknown */ void 	__libc_csu_fini;
/* 0x10000684     140 */ /* unknown */ void 	__libc_csu_init;
/* 0x10000710       4 */ /* unknown */ void 	_savefpr_14;
/* 0x10000714       4 */ /* unknown */ void 	_savefpr_15;
/* 0x10000718       4 */ /* unknown */ void 	_savefpr_16;
/* 0x1000071c       4 */ /* unknown */ void 	_savefpr_17;
/* 0x10000720       4 */ /* unknown */ void 	_savefpr_18;
/* 0x10000724       4 */ /* unknown */ void 	_savefpr_19;
/* 0x10000728       4 */ /* unknown */ void 	_savefpr_20;
/* 0x1000072c       4 */ /* unknown */ void 	_savefpr_21;
/* 0x10000730       4 */ /* unknown */ void 	_savefpr_22;
/* 0x10000734       4 */ /* unknown */ void 	_savefpr_23;
/* 0x10000738       4 */ /* unknown */ void 	_savefpr_24;
/* 0x1000073c       4 */ /* unknown */ void 	_savefpr_25;
/* 0x10000740       4 */ /* unknown */ void 	_savefpr_26;
/* 0x10000744       4 */ /* unknown */ void 	_savefpr_27;
/* 0x10000748       4 */ /* unknown */ void 	_savefpr_28;
/* 0x1000074c       4 */ /* unknown */ void 	_savefpr_29;
/* 0x10000750       4 */ /* unknown */ void 	_savefpr_30;
/* 0x10000754       8 */ /* unknown */ void 	_savefpr_31;
/* 0x1000075c       4 */ /* unknown */ void 	_savegpr_14;
/* 0x10000760       4 */ /* unknown */ void 	_savegpr_15;
/* 0x10000764       4 */ /* unknown */ void 	_savegpr_16;
/* 0x10000768       4 */ /* unknown */ void 	_savegpr_17;
/* 0x1000076c       4 */ /* unknown */ void 	_savegpr_18;
/* 0x10000770       4 */ /* unknown */ void 	_savegpr_19;
/* 0x10000774       4 */ /* unknown */ void 	_savegpr_20;
/* 0x10000778       4 */ /* unknown */ void 	_savegpr_21;
/* 0x1000077c       4 */ /* unknown */ void 	_savegpr_22;
/* 0x10000780       4 */ /* unknown */ void 	_savegpr_23;
/* 0x10000784       4 */ /* unknown */ void 	_savegpr_24;
/* 0x10000788       4 */ /* unknown */ void 	_savegpr_25;
/* 0x1000078c       4 */ /* unknown */ void 	_savegpr_26;
/* 0x10000790       4 */ /* unknown */ void 	_savegpr_27;
/* 0x10000794       4 */ /* unknown */ void 	_savegpr_28;
/* 0x10000798       4 */ /* unknown */ void 	_savegpr_29;
/* 0x1000079c       4 */ /* unknown */ void 	_savegpr_30;
/* 0x100007a0       8 */ /* unknown */ void 	_savegpr_31;
/* 0x100007a8       4 */ /* unknown */ void 	_restfpr_14;
/* 0x100007ac       4 */ /* unknown */ void 	_restfpr_15;
/* 0x100007b0       4 */ /* unknown */ void 	_restfpr_16;
/* 0x100007b4       4 */ /* unknown */ void 	_restfpr_17;
/* 0x100007b8       4 */ /* unknown */ void 	_restfpr_18;
/* 0x100007bc       4 */ /* unknown */ void 	_restfpr_19;
/* 0x100007c0       4 */ /* unknown */ void 	_restfpr_20;
/* 0x100007c4       4 */ /* unknown */ void 	_restfpr_21;
/* 0x100007c8       4 */ /* unknown */ void 	_restfpr_22;
/* 0x100007cc       4 */ /* unknown */ void 	_restfpr_23;
/* 0x100007d0       4 */ /* unknown */ void 	_restfpr_24;
/* 0x100007d4       4 */ /* unknown */ void 	_restfpr_25;
/* 0x100007d8       4 */ /* unknown */ void 	_restfpr_26;
/* 0x100007dc       4 */ /* unknown */ void 	_restfpr_27;
/* 0x100007e0       4 */ /* unknown */ void 	_restfpr_28;
/* 0x100007e4       4 */ /* unknown */ void 	_restfpr_29;
/* 0x100007e8       4 */ /* unknown */ void 	_restfpr_30;
/* 0x100007ec       8 */ /* unknown */ void 	_restfpr_31;
/* 0x100007f4       4 */ /* unknown */ void 	_restgpr_14;
/* 0x100007f8       4 */ /* unknown */ void 	_restgpr_15;
/* 0x100007fc       4 */ /* unknown */ void 	_restgpr_16;
/* 0x10000800       4 */ /* unknown */ void 	_restgpr_17;
/* 0x10000804       4 */ /* unknown */ void 	_restgpr_18;
/* 0x10000808       4 */ /* unknown */ void 	_restgpr_19;
/* 0x1000080c       4 */ /* unknown */ void 	_restgpr_20;
/* 0x10000810       4 */ /* unknown */ void 	_restgpr_21;
/* 0x10000814       4 */ /* unknown */ void 	_restgpr_22;
/* 0x10000818       4 */ /* unknown */ void 	_restgpr_23;
/* 0x1000081c       4 */ /* unknown */ void 	_restgpr_24;
/* 0x10000820       4 */ /* unknown */ void 	_restgpr_25;
/* 0x10000824       4 */ /* unknown */ void 	_restgpr_26;
/* 0x10000828       4 */ /* unknown */ void 	_restgpr_27;
/* 0x1000082c       4 */ /* unknown */ void 	_restgpr_28;
/* 0x10000830       4 */ /* unknown */ void 	_restgpr_29;
/* 0x10000834       4 */ /* unknown */ void 	_restgpr_30;
/* 0x10000838       8 */ /* unknown */ void 	_restgpr_31;
/* 0x10000840       4 */ /* unknown */ void 	_restfpr_14_x;
/* 0x10000844       4 */ /* unknown */ void 	_restfpr_15_x;
/* 0x10000848       4 */ /* unknown */ void 	_restfpr_16_x;
/* 0x1000084c       4 */ /* unknown */ void 	_restfpr_17_x;
/* 0x10000850       4 */ /* unknown */ void 	_restfpr_18_x;
/* 0x10000854       4 */ /* unknown */ void 	_restfpr_19_x;
/* 0x10000858       4 */ /* unknown */ void 	_restfpr_20_x;
/* 0x1000085c       4 */ /* unknown */ void 	_restfpr_21_x;
/* 0x10000860       4 */ /* unknown */ void 	_restfpr_22_x;
/* 0x10000864       4 */ /* unknown */ void 	_restfpr_23_x;
/* 0x10000868       4 */ /* unknown */ void 	_restfpr_24_x;
/* 0x1000086c       4 */ /* unknown */ void 	_restfpr_25_x;
/* 0x10000870       4 */ /* unknown */ void 	_restfpr_26_x;
/* 0x10000874       4 */ /* unknown */ void 	_restfpr_27_x;
/* 0x10000878       4 */ /* unknown */ void 	_restfpr_28_x;
/* 0x1000087c       4 */ /* unknown */ void 	_restfpr_29_x;
/* 0x10000880       4 */ /* unknown */ void 	_restfpr_30_x;
/* 0x10000884      20 */ /* unknown */ void 	_restfpr_31_x;
/* 0x10000898       4 */ /* unknown */ void 	_restgpr_14_x;
/* 0x1000089c       4 */ /* unknown */ void 	_restgpr_15_x;
/* 0x100008a0       4 */ /* unknown */ void 	_restgpr_16_x;
/* 0x100008a4       4 */ /* unknown */ void 	_restgpr_17_x;
/* 0x100008a8       4 */ /* unknown */ void 	_restgpr_18_x;
/* 0x100008ac       4 */ /* unknown */ void 	_restgpr_19_x;
/* 0x100008b0       4 */ /* unknown */ void 	_restgpr_20_x;
/* 0x100008b4       4 */ /* unknown */ void 	_restgpr_21_x;
/* 0x100008b8       4 */ /* unknown */ void 	_restgpr_22_x;
/* 0x100008bc       4 */ /* unknown */ void 	_restgpr_23_x;
/* 0x100008c0       4 */ /* unknown */ void 	_restgpr_24_x;
/* 0x100008c4       4 */ /* unknown */ void 	_restgpr_25_x;
/* 0x100008c8       4 */ /* unknown */ void 	_restgpr_26_x;
/* 0x100008cc       4 */ /* unknown */ void 	_restgpr_27_x;
/* 0x100008d0       4 */ /* unknown */ void 	_restgpr_28_x;
/* 0x100008d4       4 */ /* unknown */ void 	_restgpr_29_x;
/* 0x100008d8       4 */ /* unknown */ void 	_restgpr_30_x;
/* 0x100008dc      20 */ /* unknown */ void 	_restgpr_31_x;
/* 0x100008f0      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x10000940      28 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x1000095c       0 */ /* unknown */ void 	_fini;
/* 0x1000098c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x10001d10       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x10009d10       0 */ /* unknown */ void 	_SDA2_BASE_;
/* 0x10011d14       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x10011d18       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x10011d1c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x10011d20       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x10011d24       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x10011d24       0 */ /* unknown */ void 	__JCR_END__;
/* 0x10011d38       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x10011e00       0 */ /* unknown */ void 	__dso_handle;
/* 0x10011e00       0 */ /* unknown */ void 	data_start;
/* 0x10011e00       0 */ /* unknown */ void 	__data_start;
/* 0x10011e04       0 */ /* unknown */ void 	p.0;
/* 0x10011e08     336 */ /* unknown */ void 	glyphs;
/* 0x10011f5c       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x10011fb4       8 */ /* unknown */ void 	puts;
/* 0x10011fbc       8 */ /* unknown */ void 	malloc;
/* 0x10011fc4       8 */ /* unknown */ void 	strlen;
/* 0x10011fcc       1 */ /* unknown */ void 	__libc_start_main;
/* 0x10011fe4       1 */ /* unknown */ void 	completed.1;
/* 0x10019f6c       0 */ /* unknown */ void 	_SDA_BASE_;
#if 0 /* auxiliary information */
# Current option values:
option: +asmflush
option: -compactcalls
option: +compactexprs
option: +compactifs
option: +compset
option: -dfoproc
option: -disasmonly
option: -displaylabels
option: +doblocks
option: +docase
option: +dofor
option: +doifs
option: +dointrinsics
option: +doloops
option: +donullgotos
option: +dopackloops
option: +dopackstmt
option: +doremlabs
option: +dosimplify
option: -dosort
option: +dostmts
option: +doswitch
option: +dowhile
option: -dumpaddrs
option: -dumpcall
option: -dumpcomments
option: -dumpdfo
option: +dumpdoms
option: -dumpsblocks
option: -dumpsets
option: -dumpsizes
option: -dumpstmtid
option: +fatcase
option: -flag16
option: +fullscreen
option: -genpattern
option: -help
option: -hexconst
option: -html
option: +insertlabels
option: -int16
option: +int32
option: -interactive
option: -isvb5
option: +locals
option: -nohtmltabs
option: -nostackoffs
option: -objdump
option: -okclone
option: -outprocs
option: -outrefs
option: -overrule
option: +rdonly
option: -showblocks
option: -showjump
option: -showlabel
option: -showprotosym
option: -showreg
option: -showstring
option: -silent
option: +simplifyexprs
option: -stackalign16
option: -stackalign4
option: -stackalign8
option: -strallregions
option: -traceall
option: -tracesets
option: +types
option: +usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
