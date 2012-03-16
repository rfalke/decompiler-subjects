/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fibo2/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048254 - 0x0804826A
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

extern /* addr: 0804826B */  /*	Procedure: 0x0804826B - 0x0804827B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804826B()
/*	Procedure: 0x080482AC - 0x080482CF
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
    __libc_start_main();
    asm("hlt");
}

/*	Procedure: 0x080482D0 - 0x080482F1
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L080482da();
    (restore)ebx;
    eax = *(ebx + 4810 + 24);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x080482F2 - 0x080482F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482F2()
{



}

/*	Procedure: 0x080482F4 - 0x0804832D
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.1 == 0) {
        eax = p.0;
        edx = *p.0;
        do {
            p.0 = eax + 4;
            *edx();
            eax = p.0;
            edx = *p.0;
        } while(edx != 0);
        completed.1 = 1;
    }
}

/*	Procedure: 0x0804832E - 0x0804832F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804832E()
{



}

/*	Procedure: 0x08048330 - 0x08048359
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
            eax = L00000000();
            esp = esp + 16;
        }
    }
}

/*	Procedure: 0x0804835A - 0x0804835B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804835A()
{



}

/* DEST BLOCK NOT FOUND: 08048360 -> 08048368 */
/*	Procedure: 0x0804835C - 0x08048367
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fib1()
{



    (save)ebp;
    esp = esp;
    (restore)ebp;
    goto fib2;
}

/*	Procedure: 0x08048368 - 0x0804839F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

fib2(A8)
/* unknown */ void  A8;
{



    (save)ebx;
    if(A8 <= 1) {
        eax = A8;
L08048377:
        esp = ebp - 8;
        (restore)ebx;
        return;
    }
    esp = esp - 12;
    (save)A8 - 1;
    edx = A8 - 2;
    ebx = fib1();
    *esp = edx;
    eax = fib1() + ebx;
    goto L08048377;
}

/*	Procedure: 0x080483A0 - 0x080483E3
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - 12;
    printf(0x8048490);
    (restore)edx;
    (save) & Vfffffffc;
    (save)0x804849f;
    scanf();
    (restore)eax;
    (save)Vfffffffc;
    esp = esp + 12;
    printf(0x80484a2, Vfffffffc, fib1());
    return(0);
}

/*	Procedure: 0x080483E4 - 0x08048413
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    _init();
    eax = 0 >> 2;
    ebx = 0;
    if(0 < eax) {
        esi = eax;
        do {
            eax = *(ebx * 4 + data_start)();
            ebx = ebx + 1;
        } while(ebx < esi);
    }
}

/* DEST BLOCK NOT FOUND: 08048431 -> 0804846c */
/*	Procedure: 0x08048414 - 0x08048447
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



    (save)ebp;
    ebp = esp;
    (save)ebx;
    (save)eax;
    eax = 0 >> 2;
    eax :: 0;
    if(!(ebx = eax - 1)) {
L0804842d:
        ebx = *(ebp - 4);
        esp = ebp;
        (restore)ebp;
        goto _fini;
    }
    do {
        *(ebx * 4 + data_start)();
        edx = ebx;
        ebx = ebx - 1;
    } while(edx != 0);
    goto L0804842d;
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
    eax = __CTOR_LIST__;
    ebx = __CTOR_LIST__;
    if(__CTOR_LIST__ != -1) {
        do {
            ebx = ebx - 4;
            *eax();
            eax = *ebx;
        } while(eax != -1);
    }
    (restore)eax;
}

/*	Procedure: 0x0804846C - 0x08048486
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L08048476();
    (restore)ebx;
    ebx = ebx + 4398;
    return(__do_global_dtors_aux());
}

extern /* addr: 08048487 */  /*	Procedure: 0x08048487 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048487()
/* address  size  */
/* 0x08048254      40 */ /* unknown */ void 	_init;
/* 0x0804827c      16 */ /* unknown */ void 	scanf;
/* 0x0804828c      16 */ /* unknown */ void 	__libc_start_main;
/* 0x0804829c      16 */ /* unknown */ void 	printf;
/* 0x080482ac      36 */ /* unknown */ void 	_start;
/* 0x080482d0      36 */ /* unknown */ void 	call_gmon_start;
/* 0x080482f4      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048330      44 */ /* unknown */ void 	frame_dummy;
/* 0x0804835c      12 */ /* unknown */ void 	fib1;
/* 0x08048368      56 */ /* unknown */ void 	fib2;
/* 0x080483a0      68 */ /* unknown */ void 	main;
/* 0x080483e4      48 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048414      52 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048448      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804846c       0 */ /* unknown */ void 	_fini;
/* 0x08048488       4 */ /* unknown */ void 	_fp_hw;
/* 0x0804848c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080484b8       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x080484b8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x080494bc       0 */ /* unknown */ void 	data_start;
/* 0x080494bc       0 */ /* unknown */ void 	__data_start;
/* 0x080494c0       0 */ /* unknown */ void 	__dso_handle;
/* 0x080494c4       0 */ /* unknown */ void 	p.0;
/* 0x080494c8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049590       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049594       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049598       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804959c       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080495a0       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080495a0       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080495a4       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x080495c0       1 */ /* unknown */ void 	completed.1;
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
