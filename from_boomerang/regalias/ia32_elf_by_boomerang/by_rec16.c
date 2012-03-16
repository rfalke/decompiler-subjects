/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/regalias/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048250 - 0x08048266
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

extern /* addr: 08048267 */  /*	Procedure: 0x08048267 - 0x08048277
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048267()
/*	Procedure: 0x080482A0 - 0x080482C3
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

/*	Procedure: 0x080482C4 - 0x080482E5
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    eax = L080482cd();
    (restore)ebx;
    (save)eax;
    eax = *(ebx + 4827 + 20);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x080482E6 - 0x080482EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482E6()
{



}

/*	Procedure: 0x080482F0 - 0x0804832D
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

/*	Procedure: 0x08048330 - 0x08048363
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
            *esp = __JCR_LIST__;
            L00000000();
        }
    }
}

/*	Procedure: 0x08048364 - 0x08048394
 *	Argument size: -20
 *	Local size: 24
 *	Save regs size: 0
 */

main(A1c)
/* unknown */ void  A1c;
{
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp;
    eax = -2023406815;
    al = 18;
    Vfffffffc = 52;
    A1c = Vfffffffc;
    *esp = 0x80484b4;
    return(printf());
}

/*	Procedure: 0x08048395 - 0x0804839F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048395()
{



}

/*	Procedure: 0x080483A0 - 0x080483F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    esi = 0;
    __i686.get_pc_thunk.bx();
    ebx = ebx + 4600;
    _init();
    edx = ebx + -236;
    eax = ebx + -236;
    if(esi < edx - eax >> 2) {
        edi = edx;
        do {
            eax = *(ebx + esi * 4 + -236)();
            esi = esi + 1;
        } while(esi < edi);
    }
}

/*	Procedure: 0x080483F4 - 0x080483FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483F4()
{



}

/*	Procedure: 0x08048400 - 0x0804844F
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

__libc_csu_fini(Ac)
/* unknown */ void  Ac;
{



    *esp = ebx;
    __i686.get_pc_thunk.bx();
    ebx = ebx + 4506;
    Ac = esi;
    eax = ebx + -236;
    eax = eax - ebx + -236 >> 2;
    eax :: 0;
    if(!(esi = eax - 1)) {
L08048430:
        ebx = *esp;
        esi = Ac;
        return(_fini());
    }
    do {
        *(ebx + esi * 4 + -236)();
        eax = esi;
        esi = esi - 1;
    } while(eax != 0);
    goto L08048430;
}

/*	Procedure: 0x08048450 - 0x08048453
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x08048454 - 0x0804845F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048454()
{



}

/*	Procedure: 0x08048460 - 0x0804848F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    ebx = __CTOR_LIST__;
    eax = __CTOR_LIST__;
    if(__CTOR_LIST__ != -1) {
        do {
            ebx = ebx - 4;
            *eax();
            eax = *ebx;
        } while(eax != -1);
    }
    (restore)eax;
}

/*	Procedure: 0x08048490 - 0x080484AA
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    L08048499();
    (restore)ebx;
    ebx = ebx + 4367;
    return(__do_global_dtors_aux(edx));
}

extern /* addr: 080484AB */  /*	Procedure: 0x080484AB - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484AB()
/* address  size  */
/* 0x08048250      40 */ /* unknown */ void 	_init;
/* 0x08048278      16 */ /* unknown */ void 	__libc_start_main;
/* 0x08048288      24 */ /* unknown */ void 	printf;
/* 0x080482a0      36 */ /* unknown */ void 	_start;
/* 0x080482c4      44 */ /* unknown */ void 	call_gmon_start;
/* 0x080482f0      64 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048330      52 */ /* unknown */ void 	frame_dummy;
/* 0x08048364      60 */ /* unknown */ void 	main;
/* 0x080483a0      96 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048400      80 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048450      16 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08048460      48 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048490       0 */ /* unknown */ void 	_fini;
/* 0x080484ac       4 */ /* unknown */ void 	_fp_hw;
/* 0x080484b0       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080494bc       0 */ /* unknown */ void 	data_start;
/* 0x080494bc       0 */ /* unknown */ void 	__data_start;
/* 0x080494c0       0 */ /* unknown */ void 	__dso_handle;
/* 0x080494c4       0 */ /* unknown */ void 	p.0;
/* 0x080494c8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x080494cc       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049594       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049598       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804959c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080495a0       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080495a4       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080495a4       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080495a8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
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
