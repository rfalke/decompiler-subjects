/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/phi/ia32_elf_by_boomerang/subject.exe'
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
    eax = *(ebx + 4882 + 24);
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

/*	Procedure: 0x0804835C - 0x080483DF
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

main()
{
	/* unknown */ void  ebx;



    (save)eax;
    esp = esp & -16;
    esp = esp - 12;
    printf(0x80484d8);
    (restore)ebx;
    (save)ebp - 8;
    (save)0x80484e7;
    scanf();
    ebx = *(ebp - 8);
    esp = esp + 16;
    if(ebx <= 1) {
        eax = 1;
        if(ebx != 1) {
L08048396:
            eax = ebx;
        }
        printf(0x80484ea, *(ebp - 8), eax, edx);
        return(0);
    }
    esp = esp - 12;
    (save)ebx - 1;
    eax = fib();
    ecx = eax - 1;
    ebx = eax;
    *esp = ecx;
    (restore)ecx;
    (restore)edx;
    (save)fib() + ebx;
    (save)0x80484e7;
    printf();
    esp = esp + 16;
    goto L08048396;
}

/*	Procedure: 0x080483E0 - 0x0804842B
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 4
 */

fib(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;



    (save)ebx;
    ebx = A8;
    if(ebx <= 1) {
        eax = 1;
        if(ebx != 1) {
L080483f7:
            eax = ebx;
        }
        return;
    }
    esp = esp - 12;
    (save)ebx - 1;
    eax = fib();
    edx = eax - 1;
    ebx = eax;
    *esp = edx;
    (restore)edx;
    (restore)ecx;
    (save)fib() + ebx;
    (save)0x80484e7;
    printf();
    goto L080483f7;
}

/*	Procedure: 0x0804842C - 0x0804845B
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

/* DEST BLOCK NOT FOUND: 08048479 -> 080484b4 */
/*	Procedure: 0x0804845C - 0x0804848F
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
L08048475:
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
    goto L08048475;
}

/*	Procedure: 0x08048490 - 0x080484B3
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

/*	Procedure: 0x080484B4 - 0x080484CE
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L080484be();
    (restore)ebx;
    ebx = ebx + 4398;
    return(__do_global_dtors_aux());
}

extern /* addr: 080484CF */  /*	Procedure: 0x080484CF - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484CF()
/* address  size  */
/* 0x08048254      40 */ /* unknown */ void 	_init;
/* 0x0804827c      16 */ /* unknown */ void 	scanf;
/* 0x0804828c      16 */ /* unknown */ void 	__libc_start_main;
/* 0x0804829c      16 */ /* unknown */ void 	printf;
/* 0x080482ac      36 */ /* unknown */ void 	_start;
/* 0x080482d0      36 */ /* unknown */ void 	call_gmon_start;
/* 0x080482f4      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048330      44 */ /* unknown */ void 	frame_dummy;
/* 0x0804835c     132 */ /* unknown */ void 	main;
/* 0x080483e0      76 */ /* unknown */ void 	fib;
/* 0x0804842c      48 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804845c      52 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048490      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080484b4       0 */ /* unknown */ void 	_fini;
/* 0x080484d0       4 */ /* unknown */ void 	_fp_hw;
/* 0x080484d4       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048500       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x08048500       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049504       0 */ /* unknown */ void 	data_start;
/* 0x08049504       0 */ /* unknown */ void 	__data_start;
/* 0x08049508       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804950c       0 */ /* unknown */ void 	p.0;
/* 0x08049510       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x080495d8       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080495dc       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080495e0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080495e4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080495e8       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080495e8       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080495ec       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049608       1 */ /* unknown */ void 	completed.1;
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
