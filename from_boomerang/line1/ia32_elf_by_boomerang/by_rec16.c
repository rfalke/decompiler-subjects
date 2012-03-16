/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/line1/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x080482FC - 0x08048312
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

extern /* addr: 08048313 */  /*	Procedure: 0x08048313 - 0x08048323
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048313()
/*	Procedure: 0x08048390 - 0x080483B3
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

/*	Procedure: 0x080483B4 - 0x080483D5
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    eax = L080483bd();
    (restore)ebx;
    (save)eax;
    eax = *(ebx + 5003 + 36);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x080483D6 - 0x080483DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483D6()
{



}

/*	Procedure: 0x080483E0 - 0x0804841D
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

/*	Procedure: 0x0804841E - 0x0804841F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804841E()
{



}

/*	Procedure: 0x08048420 - 0x08048453
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

/*	Procedure: 0x08048454 - 0x080484A2
 *	Argument size: 4
 *	Local size: 24
 *	Save regs size: 0
 */

chomp(A8, Ac, A10, A1c, A20)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A1c;
/* unknown */ void  A20;
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    A20 = A10;
    A1c = Ac;
    *esp = A8;
    Vfffffffc = fgets();
    if(Vfffffffc != 0) {
        A1c = 10;
        *esp = Vfffffffc;
        Vfffffff8 = strchr();
        if(Vfffffff8 != 0) {
            *Vfffffff8 = 0;
        }
    }
    return(Vfffffffc);
}

/*	Procedure: 0x080484A3 - 0x0804853E
 *	Argument size: 4
 *	Local size: 1080
 *	Save regs size: 0
 */

main(A8, Ac, A43c, A440)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A43c;
/* unknown */ void  A440;
{
	/* unknown */ void  Vfffffbe4;
	/* unknown */ void  Vfffffbe8;
	/* unknown */ void  Vfffffff4;



    esp = esp & -16;
    esp = esp;
    if(A8 <= 1) {
        Vfffffbe4 = 1;
    } else {
        A43c = 0x8048654;
        *esp = *(Ac + 4);
        Vfffffff4 = fopen();
        if(Vfffffff4 == 0) {
            Vfffffbe4 = 1;
        } else {
            A440 = Vfffffff4;
            A43c = 1024;
            *esp = & Vfffffbe8;
            if(chomp() != 0) {
                A43c = & Vfffffbe8;
                *esp = 0x8048656;
                printf();
            }
            *esp = Vfffffff4;
            fclose();
        }
    }
    return(Vfffffbe4);
}

/*	Procedure: 0x0804853F - 0x0804853F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804853F()
{



}

/*	Procedure: 0x08048540 - 0x08048593
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

/*	Procedure: 0x08048594 - 0x0804859F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048594()
{



}

/*	Procedure: 0x080485A0 - 0x080485EF
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
L080485d0:
        ebx = *esp;
        esi = Ac;
        return(_fini());
    }
    do {
        *(ebx + esi * 4 + -236)();
        eax = esi;
        esi = esi - 1;
    } while(eax != 0);
    goto L080485d0;
}

/*	Procedure: 0x080485F0 - 0x080485F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x080485F4 - 0x080485FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485F4()
{



}

/*	Procedure: 0x08048600 - 0x0804862F
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

/*	Procedure: 0x08048630 - 0x0804864A
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    L08048639();
    (restore)ebx;
    ebx = ebx + 4367;
    return(__do_global_dtors_aux(edx));
}

extern /* addr: 0804864B */  /*	Procedure: 0x0804864B - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804864B()
/* address  size  */
/* 0x080482fc      40 */ /* unknown */ void 	_init;
/* 0x08048324      16 */ /* unknown */ void 	strchr;
/* 0x08048334      16 */ /* unknown */ void 	fgets;
/* 0x08048344      16 */ /* unknown */ void 	__libc_start_main;
/* 0x08048354      16 */ /* unknown */ void 	printf;
/* 0x08048364      16 */ /* unknown */ void 	fclose;
/* 0x08048374      28 */ /* unknown */ void 	fopen;
/* 0x08048390      36 */ /* unknown */ void 	_start;
/* 0x080483b4      44 */ /* unknown */ void 	call_gmon_start;
/* 0x080483e0      64 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048420      52 */ /* unknown */ void 	frame_dummy;
/* 0x08048454      79 */ /* unknown */ void 	chomp;
/* 0x080484a3     157 */ /* unknown */ void 	main;
/* 0x08048540      96 */ /* unknown */ void 	__libc_csu_init;
/* 0x080485a0      80 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080485f0      16 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08048600      48 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048630       0 */ /* unknown */ void 	_fini;
/* 0x0804864c       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048650       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x0804965c       0 */ /* unknown */ void 	data_start;
/* 0x0804965c       0 */ /* unknown */ void 	__data_start;
/* 0x08049660       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049664       0 */ /* unknown */ void 	p.0;
/* 0x08049668       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804966c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049734       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049738       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804973c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049740       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049744       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049744       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049748       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049770       1 */ /* unknown */ void 	completed.1;
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
