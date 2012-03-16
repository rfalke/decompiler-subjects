/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/twoproc/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048278 - 0x0804828E
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

extern /* addr: 0804828F */  /*	Procedure: 0x0804828F - 0x0804829F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804828F()
/* DEST BLOCK NOT FOUND: 080482ab -> 08048290 */
/*	Procedure: 0x080482A0 - 0x080482AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482A0()
{



    goto ( *L08049584);
    (save)0;
    goto L08048290;
}

/* DEST BLOCK NOT FOUND: 080482bb -> 08048290 */
/*	Procedure: 0x080482B0 - 0x080482BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B0()
{



    goto ( *L08049588);
    (save)8;
    goto L08048290;
}

/*	Procedure: 0x080482C0 - 0x080482E3
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
    L080482A0();
    asm("hlt");
}

/*	Procedure: 0x080482E4 - 0x08048304
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    L080482ed();
    (restore)ebx;
    (save)edx;
    eax = *(ebx + 4747 + -4);
    if(eax != 0) {
        *eax();
    }
    (restore)eax;
}

/*	Procedure: 0x08048305 - 0x08048307
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048305()
{



}

/*	Procedure: 0x08048308 - 0x08048339
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

/*	Procedure: 0x0804833A - 0x0804833B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804833A()
{



}

/*	Procedure: 0x0804833C - 0x08048365
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

/*	Procedure: 0x08048366 - 0x08048367
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048366()
{



}

/*	Procedure: 0x08048368 - 0x08048374
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

proc1(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    return(A8 - Ac);
}

/*	Procedure: 0x08048375 - 0x080483AF
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

main()
{



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    esp = esp - 8;
    (save)proc1(11, 4);
    (save)0x8048490;
    esp = esp + 16;
    return(L080482B0());
}

/*	Procedure: 0x080483B0 - 0x08048401
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080483be();
    (restore)ebx;
    ebx = ebx + 4538;
    _init();
    eax = ebx + -224;
    edx = ebx + -224;
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

/*	Procedure: 0x08048402 - 0x08048403
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048402()
{



}

/*	Procedure: 0x08048404 - 0x08048445
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L0804840f();
    (restore)ebx;
    ebx = ebx + 4457;
    eax = ebx + -224;
    edi = ebx + -224;
    eax = eax - edi >> 2;
    esp = esp - 12;
    for(esi = eax - 1; esi != -1; esi = esi - 1) {
        *(edi + esi * 4)();
    }
    esp = esp + 12;
    return(_fini());
}

/*	Procedure: 0x08048446 - 0x08048447
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048446()
{



}

/*	Procedure: 0x08048448 - 0x0804846B
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

/*	Procedure: 0x0804846C - 0x08048485
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    eax = L08048475();
    (restore)ebx;
    ebx = ebx + 4355;
    return(__do_global_dtors_aux(eax));
}

extern /* addr: 08048486 */  /*	Procedure: 0x08048486 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048486()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513272 */ /* unknown */ void 	printf;
/* 0x08048278      72 */ /* unknown */ void 	_init;
/* 0x080482c0      36 */ /* unknown */ void 	_start;
/* 0x080482e4      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048308      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x0804833c      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048368      13 */ /* unknown */ void 	proc1;
/* 0x08048375      59 */ /* unknown */ void 	main;
/* 0x080483b0      84 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048404      68 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048448      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804846c       0 */ /* unknown */ void 	_fini;
/* 0x08048488       4 */ /* unknown */ void 	_fp_hw;
/* 0x0804848c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048494       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049498       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804949c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080494a0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080494a4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080494a8       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080494a8       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080494ac       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049578       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804958c       0 */ /* unknown */ void 	data_start;
/* 0x0804958c       0 */ /* unknown */ void 	__data_start;
/* 0x08049590       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049594       0 */ /* unknown */ void 	p.0;
/* 0x08049598       1 */ /* unknown */ void 	completed.1;
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
