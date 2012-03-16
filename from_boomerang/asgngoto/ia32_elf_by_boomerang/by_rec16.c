/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/asgngoto/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x0804853C - 0x08048552
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

_init()
{



    call_gmon_start();
    frame_dummy();
    return(__do_global_ctors_aux());
}

extern /* addr: 08048553 */  /*	Procedure: 0x08048553 - 0x08048563
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048553()
/* DEST BLOCK NOT FOUND: 0804856f -> 08048554 */
/*	Procedure: 0x08048564 - 0x08048573
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048564()
{



    goto ( *L08049ac0);
    (save)0;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 0804857f -> 08048554 */
/*	Procedure: 0x08048574 - 0x08048583
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048574()
{



    goto ( *L08049ac4);
    (save)8;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 0804859f -> 08048554 */
/*	Procedure: 0x08048594 - 0x080485A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048594()
{



    goto ( *L08049acc);
    (save)24;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 080485af -> 08048554 */
/*	Procedure: 0x080485A4 - 0x080485B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485A4()
{



    goto ( *L08049ad0);
    (save)32;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 080485bf -> 08048554 */
/*	Procedure: 0x080485B4 - 0x080485C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485B4()
{



    goto ( *L08049ad4);
    (save)40;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 080485cf -> 08048554 */
/*	Procedure: 0x080485C4 - 0x080485D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485C4()
{



    goto ( *L08049ad8);
    (save)48;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 080485df -> 08048554 */
/*	Procedure: 0x080485D4 - 0x080485E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485D4()
{



    goto ( *L08049adc);
    (save)56;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 080485ef -> 08048554 */
/*	Procedure: 0x080485E4 - 0x080485F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485E4()
{



    goto ( *L08049ae0);
    (save)64;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 080485ff -> 08048554 */
/*	Procedure: 0x080485F4 - 0x08048603
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485F4()
{



    goto ( *L08049ae4);
    (save)72;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 0804860f -> 08048554 */
/*	Procedure: 0x08048604 - 0x08048613
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048604()
{



    goto ( *L08049ae8);
    (save)80;
    goto L08048554;
}

/* DEST BLOCK NOT FOUND: 0804861f -> 08048554 */
/*	Procedure: 0x08048614 - 0x08048623
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048614()
{



    goto ( *L08049aec);
    (save)88;
    goto L08048554;
}

/*	Procedure: 0x08048624 - 0x08048647
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    ebp = 0;
    (restore)esi;
    ecx = esp;
    esp = esp & -16;
    (save)eax;
    (save)esp;
    (save)edx;
    (save)__libc_csu_fini;
    (save)__libc_csu_init;
    (save)ecx;
    (save)esi;
    (save)main;
    L080485C4();
    asm("hlt");
}

/*	Procedure: 0x08048648 - 0x08048668
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    L08048651();
    (restore)ebx;
    (save)edx;
    eax = *(ebx + 5219 + -4);
    if(eax != 0) {
        *eax();
    }
    (restore)eax;
}

/*	Procedure: 0x08048669 - 0x0804866B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048669()
{



}

/*	Procedure: 0x0804866C - 0x0804869D
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.1 == 0) {
        while(1) {
            eax = p.0;
            edx = *p.0;
            if(edx == 0) {
                break;
            }
            p.0 = eax + 4;
            *edx();
        }
        completed.1 = 1;
    }
}

/*	Procedure: 0x0804869E - 0x0804869F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804869E()
{



}

/*	Procedure: 0x080486A0 - 0x080486C9
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

frame_dummy()
{



    eax = __JCR_LIST__;
    if(__JCR_LIST__ != 0) {
        eax = 0;
        if(0 != 0) {
            esp = esp - 12;
            (save)__JCR_LIST__;
            *L00000000();
            esp = esp + 16;
        }
    }
}

/*	Procedure: 0x080486CA - 0x080486CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486CA()
{



}

/*	Procedure: 0x080486CC - 0x08048822
 *	Argument size: -24
 *	Local size: 24
 *	Save regs size: 0
 */

MAIN__()
{
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffffc;



    esp = esp - 12;
    (save)__g77_cilist_0.0;
    L08048614();
    esp = esp + 16;
    L08048564(0x80489ac, 0x80489a8, 0x804897c, 10);
    L08048574();
    esp = esp - 12;
    (save)__g77_cilist_1.1;
    eax = L08048594();
    esp = esp + 16;
    L08048564(0x80489b0, 0x80489a8, & Vfffffffc, 4);
    L080485B4();
    Vfffffff4 = 0x8048760;
    if(Vfffffffc == 2) {
        Vfffffff4 = 0x8048793;
    }
    if(Vfffffffc == 3) {
        Vfffffff4 = 0x80487c3;
    }
    if(Vfffffffc == 4) {
        Vfffffff4 = 0x80487f3;
    }
    goto Vfffffff4;
    esp = esp - 12;
    (save)__g77_cilist_2.2;
    L08048614();
    esp = esp + 16;
    L08048564(0x80489ac, 0x80489a8, 0x8048986, 18);
    eax = L08048574();
    goto L08048821;
    esp = esp - 12;
    (save)__g77_cilist_3.3;
    L08048614();
    esp = esp + 16;
    L08048564(0x80489ac, 0x80489a8, 0x8048998, 4);
    eax = L08048574();
    goto L08048821;
    esp = esp - 12;
    (save)__g77_cilist_4.4;
    L08048614();
    esp = esp + 16;
    L08048564(0x80489ac, 0x80489a8, 0x804899c, 6);
    eax = L08048574();
    goto L08048821;
    esp = esp - 12;
    (save)__g77_cilist_5.5;
    L08048614();
    esp = esp + 16;
    L08048564(0x80489ac, 0x80489a8, 0x80489a2, 5);
    eax = L08048574();
L08048821:
}

/*	Procedure: 0x08048823 - 0x08048823
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048823()
{



}

/*	Procedure: 0x08048824 - 0x0804886B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vffffffe8;



    (save)ebp;
    ebp = esp;
    esp = esp - 8;
    esp = esp & -16;
    eax = *(ebp + 12);
    esp = esp - 16;
    Vffffffe8 = eax;
    *esp = *(ebp + 8);
    L08048604();
    L080485E4();
    L080485D4();
    *esp = f_exit;
    atexit();
    MAIN__();
    *esp = 0;
    L080485F4();
}

/*	Procedure: 0x0804886C - 0x080488BD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L0804887a();
    (restore)ebx;
    ebx = ebx + 4666;
    _init();
    eax = ebx + -252;
    edx = ebx + -252;
    *(ebp - 16) = eax;
    eax = eax - edx;
    esi = 0;
    eax = eax >> 2;
    if(0 < eax) {
        edi = edx;
        do {
            eax = *(edx + esi * 4)();
            ecx = *(ebp - 16) - edi;
            esi = esi + 1;
            edx = edi;
        } while(esi < ecx >> 2);
    }
}

/*	Procedure: 0x080488BE - 0x080488BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080488BE()
{



}

/*	Procedure: 0x080488C0 - 0x08048901
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080488cb();
    (restore)ebx;
    ebx = ebx + 4585;
    eax = ebx + -252;
    edi = ebx + -252;
    eax = eax - edi >> 2;
    esp = esp - 12;
    for(esi = eax - 1; esi != -1; esi = esi - 1) {
        *(edi + esi * 4)();
    }
    esp = esp + 12;
    return(_fini());
}

/*	Procedure: 0x08048902 - 0x08048903
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048902()
{



}

/*	Procedure: 0x08048904 - 0x08048931
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 4
 */

atexit(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;



    L0804890d();
    (restore)ebx;
    edx = *(ebx + 4519 + -8);
    eax = 0;
    if(edx != 0) {
        eax = *edx;
    }
    return(L080485A4(A8, 0, eax));
}

/*	Procedure: 0x08048932 - 0x08048933
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048932()
{



}

/*	Procedure: 0x08048934 - 0x08048957
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    (save)edx;
    ebx = __CTOR_LIST__;
    for(eax = __CTOR_LIST__; eax != -1; eax = *ebx) {
        ebx = ebx - 4;
        *eax();
    }
    (restore)eax;
}

/*	Procedure: 0x08048958 - 0x08048971
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    eax = L08048961();
    (restore)ebx;
    ebx = ebx + 4435;
    return(__do_global_dtors_aux(eax));
}

extern /* addr: 08048972 */  /*	Procedure: 0x08048972 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048972()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	do_lio;
/* 0x00000000       0 */ /* unknown */ void 	e_wsle;
/* 0x00000000       0 */ /* unknown */ void 	s_rsle;
/* 0x00000000       0 */ /* unknown */ void 	__cxa_atexit;
/* 0x00000000       0 */ /* unknown */ void 	e_rsle;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000       0 */ /* unknown */ void 	f_init;
/* 0x00000000       0 */ /* unknown */ void 	f_setsig;
/* 0x00000000       0 */ /* unknown */ void 	exit;
/* 0x00000000       0 */ /* unknown */ void 	f_setarg;
/* 0x00000000 134513980 */ /* unknown */ void 	s_wsle;
/* 0x0804853c      72 */ /* unknown */ void 	_init;
/* 0x08048584     160 */ /* unknown */ void 	f_exit;
/* 0x08048624      36 */ /* unknown */ void 	_start;
/* 0x08048648      36 */ /* unknown */ void 	call_gmon_start;
/* 0x0804866c      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080486a0      44 */ /* unknown */ void 	frame_dummy;
/* 0x080486cc     344 */ /* unknown */ void 	MAIN__;
/* 0x08048824      72 */ /* unknown */ void 	main;
/* 0x0804886c      84 */ /* unknown */ void 	__libc_csu_init;
/* 0x080488c0      68 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048904      48 */ /* unknown */ void 	atexit;
/* 0x08048934      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048958       1 */ /* unknown */ void 	_fini;
/* 0x08048974       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048978       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080489b4       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x080499b8       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080499bc       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080499c0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080499c4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080499c8       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080499c8       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080499cc       1 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049ab4       1 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049af0       0 */ /* unknown */ void 	data_start;
/* 0x08049af0       0 */ /* unknown */ void 	__data_start;
/* 0x08049af4       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049af8       0 */ /* unknown */ void 	p.0;
/* 0x08049afc      20 */ /* unknown */ void 	__g77_cilist_0.0;
/* 0x08049b10      20 */ /* unknown */ void 	__g77_cilist_1.1;
/* 0x08049b24      20 */ /* unknown */ void 	__g77_cilist_2.2;
/* 0x08049b38      20 */ /* unknown */ void 	__g77_cilist_3.3;
/* 0x08049b4c      20 */ /* unknown */ void 	__g77_cilist_4.4;
/* 0x08049b60      20 */ /* unknown */ void 	__g77_cilist_5.5;
/* 0x08049b74       0 */ /* unknown */ void 	__bss_start;
/* 0x08049b74       1 */ /* unknown */ void 	_edata;
/* 0x08049b74       1 */ /* unknown */ void 	completed.1;
/* 0x08049b78       1 */ /* unknown */ void 	_end;
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
