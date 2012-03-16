/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fibo4_ia32/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x080482A4 - 0x080482BA
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

extern /* addr: 080482BB */  /*	Procedure: 0x080482BB - 0x080482CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482BB()
/* DEST BLOCK NOT FOUND: 080482d7 -> 080482bc */
/*	Procedure: 0x080482CC - 0x080482DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482CC()
{



    goto ( *L08049604);
    (save)0;
    goto L080482bc;
}

/* DEST BLOCK NOT FOUND: 080482e7 -> 080482bc */
/*	Procedure: 0x080482DC - 0x080482EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482DC()
{



    goto ( *L08049608);
    (save)8;
    goto L080482bc;
}

/* DEST BLOCK NOT FOUND: 080482f7 -> 080482bc */
/*	Procedure: 0x080482EC - 0x080482FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482EC()
{



    goto ( *L0804960c);
    (save)16;
    goto L080482bc;
}

/* DEST BLOCK NOT FOUND: 08048307 -> 080482bc */
/*	Procedure: 0x080482FC - 0x0804830B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482FC()
{



    goto ( *L08049610);
    (save)24;
    goto L080482bc;
}

/*	Procedure: 0x0804830C - 0x0804832F
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
    L080482DC();
    asm("hlt");
}

/*	Procedure: 0x08048330 - 0x08048353
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)ecx;
    L0804833a();
    (restore)ebx;
    if(*(ebx + 4798 + -4) != 0) {
        L080482FC();
    }
    (restore)eax;
}

/*	Procedure: 0x08048354 - 0x08048385
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.4583 == 0) {
        while(1) {
            eax = p.4582;
            edx = *p.4582;
            if(edx == 0) {
                break;
            }
            p.4582 = eax + 4;
            *edx();
        }
        completed.4583 = 1;
    }
}

/*	Procedure: 0x08048386 - 0x08048387
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048386()
{



}

/*	Procedure: 0x08048388 - 0x080483AE
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
            eax = *L00000000();
            esp = esp + 16;
        }
    }
}

/*	Procedure: 0x080483AF - 0x080483AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483AF()
{



}

/*	Procedure: 0x080483B0 - 0x080483DE
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 8
 */

fib()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    if(esi > 1) {
        esi = esi - 1;
        (restore)esi;
        (save)esi;
        esi = esi - 2;
        *(ebp - 8) = ecx + fib(fib());
    } else {
        *(ebp - 8) = esi;
    }
    return(*(ebp - 8));
}

/*	Procedure: 0x080483DF - 0x08048447
 *	Argument size: -24
 *	Local size: 24
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    esp = esp - 12;
    (save)0x80484ec;
    L080482EC();
    esp = esp + 16;
    esp = esp - 8;
    (save) & Vfffffff8;
    (save)0x80484fb;
    L080482CC();
    esp = esp + 16;
    esi = Vfffffff8;
    Vfffffffc = fib();
    esp = esp - 4;
    (save)Vfffffffc;
    (save)Vfffffff8;
    (save)0x80484fe;
    L080482EC();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x08048448 - 0x08048496
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L08048456();
    (restore)ebx;
    ebx = ebx + 4514;
    _init();
    eax = ebx + -224;
    eax = eax - edx >> 2;
    *(ebp - 16) = eax;
    if(!(edx = ebx + -224)) {
        return;
    }
    edi = 0;
    esi = edx;
    do {
        eax = *esi();
        edi = edi + 1;
        esi = esi + 4;
    } while(edi < *(ebp - 16));
    esp = esp + 12;
    esp = ebp;
}

/*	Procedure: 0x08048497 - 0x08048497
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048497()
{



}

/*	Procedure: 0x08048498 - 0x0804849C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x0804849D - 0x0804849F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804849D()
{



}

/*	Procedure: 0x080484A0 - 0x080484C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    (save)edx;
    eax = __CTOR_LIST__;
    if(__CTOR_LIST__ != -1) {
        ebx = __CTOR_LIST__;
        do {
            *eax();
            eax = *(ebx - 4);
            ebx = ebx - 4;
        } while(eax != -1);
    }
    (restore)eax;
}

/*	Procedure: 0x080484C5 - 0x080484C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484C5()
{



}

/*	Procedure: 0x080484C8 - 0x080484E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

_fini()
{
	/* unknown */ void  eax;
	/* unknown */ void  ebx;



    L080484d2();
    (restore)ebx;
    ebx = ebx + 4390;
    return(__do_global_dtors_aux());
}

extern /* addr: 080484E2 */  /*	Procedure: 0x080484E2 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484E2()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	scanf;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513316 */ /* unknown */ void 	printf;
/* 0x080482a4     104 */ /* unknown */ void 	_init;
/* 0x0804830c      36 */ /* unknown */ void 	_start;
/* 0x08048330      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048354      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048388      40 */ /* unknown */ void 	frame_dummy;
/* 0x080483b0      47 */ /* unknown */ void 	fib;
/* 0x080483df     105 */ /* unknown */ void 	main;
/* 0x08048448      80 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048498       8 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080484a0      40 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080484c8       0 */ /* unknown */ void 	_fini;
/* 0x080484e4       4 */ /* unknown */ void 	_fp_hw;
/* 0x080484e8       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048514       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049518       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804951c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049520       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049524       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049528       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049528       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0804952c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x080495f8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049614       0 */ /* unknown */ void 	data_start;
/* 0x08049614       0 */ /* unknown */ void 	__data_start;
/* 0x08049618       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804961c       0 */ /* unknown */ void 	p.4582;
/* 0x08049620       1 */ /* unknown */ void 	completed.4583;
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
