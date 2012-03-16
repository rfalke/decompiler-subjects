/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/stattest/ia32_elf_by_boomerang/subject.exe'
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
    eax = *(ebx + 4762 + 24);
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

/*	Procedure: 0x0804835C - 0x08048390
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

main()
{
	/* unknown */ void  ebx;



    esp = esp - 100;
    esp = esp & -16;
    eax = __xstat(3, 0x8048448, ebp - 104);
    ebx = eax;
    printf(0x8048460, eax, *(ebp - 60), edx);
    return(ebx);
}

/*	Procedure: 0x08048391 - 0x08048393
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048391()
{



}

/*	Procedure: 0x08048394 - 0x080483C3
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

/* DEST BLOCK NOT FOUND: 080483e1 -> 0804841c */
/*	Procedure: 0x080483C4 - 0x080483F7
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
L080483dd:
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
    goto L080483dd;
}

/*	Procedure: 0x080483F8 - 0x0804841B
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

/*	Procedure: 0x0804841C - 0x08048436
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L08048426();
    (restore)ebx;
    ebx = ebx + 4430;
    return(__do_global_dtors_aux());
}

extern /* addr: 08048437 */  /*	Procedure: 0x08048437 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048437()
/* address  size  */
/* 0x08048254      40 */ /* unknown */ void 	_init;
/* 0x0804827c      16 */ /* unknown */ void 	__xstat;
/* 0x0804828c      16 */ /* unknown */ void 	__libc_start_main;
/* 0x0804829c      16 */ /* unknown */ void 	printf;
/* 0x080482ac      36 */ /* unknown */ void 	_start;
/* 0x080482d0      36 */ /* unknown */ void 	call_gmon_start;
/* 0x080482f4      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048330      44 */ /* unknown */ void 	frame_dummy;
/* 0x0804835c      56 */ /* unknown */ void 	main;
/* 0x08048394      48 */ /* unknown */ void 	__libc_csu_init;
/* 0x080483c4      52 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080483f8      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804841c       0 */ /* unknown */ void 	_fini;
/* 0x08048440       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048444       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048488       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x08048488       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804948c       0 */ /* unknown */ void 	data_start;
/* 0x0804948c       0 */ /* unknown */ void 	__data_start;
/* 0x08049490       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049494       0 */ /* unknown */ void 	p.0;
/* 0x08049498       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049560       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049564       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049568       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804956c       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049570       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049570       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049574       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049590       1 */ /* unknown */ void 	completed.1;
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
