/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe'
 */

/*	Procedure: 0x080486DC - 0x0804874A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    (save)0;
    (save)0;
    ebp = esp;
    (save)edx;
    if(_cleanup != 0) {
        atexit(_cleanup);
    }
    if(_DYNAMIC != 0) {
        atexit();
    }
    (save)_fini;
    atexit();
    eax = *(ebp + 8);
    edx = ebp + eax * 4 + 16;
    _environ = edx;
    (save)_environ;
    (save)ebp + 12;
    (save)eax;
    _init();
    __fpstart();
    esp = esp + 12;
    (save)main();
    exit();
    (save)0;
    eax = 1;
    L00000007();
    asm("hlt");
}

/*	Procedure: 0x0804874B - 0x0804874B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_mcount()
{



}

/*	Procedure: 0x0804874C - 0x0804877E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    L08048756();
    (restore)ebx;
    eax = ebx + 4490 + 196;
    esi = eax + 4;
    if(*(eax + 4) != 0) {
        do {
            eax = *( *esi)();
            esi = esi + 4;
        } while(*esi != 0);
    }
}

/*	Procedure: 0x0804877F - 0x0804877F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804877F()
{



}

/*	Procedure: 0x08048780 - 0x08048794
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

fini_dummy()
{
	/* unknown */ void  ebx;



    eax = L08048789();
    (restore)ebx;
    ebx = ebx + 4439;
}

/*	Procedure: 0x08048795 - 0x08048797
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048795()
{



    *eax = *eax + al;
    *(ebp - 119) = *(ebp - 119) + dl;
}

/*	Procedure: 0x08048798 - 0x080487C8
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

fib(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  esi;



    if(A8 > 1) {
        (save)A8 - 1;
        esi = fib();
        eax = fib(A8 - 2) + esi;
    } else {
        eax = A8;
    }
}

/*	Procedure: 0x080487C9 - 0x080487CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080487C9()
{



}

/*	Procedure: 0x080487CC - 0x0804882C
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 8
 */

main()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  Vfffffffc;



    (save)0x80488b8;
    printf();
    (save) & Vfffffffc;
    (save)0x80488c7;
    scanf();
    ebx = Vfffffffc;
    esp = esp + 12;
    if(ebx > 1) {
        esi = fib(ebx - 1);
        eax = fib(ebx - 2) + esi;
    } else {
        eax = ebx;
    }
    printf(0x80488ca, Vfffffffc, eax);
    esp = ebp - 12;
    return(0);
}

/*	Procedure: 0x0804882D - 0x0804882F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804882D()
{



    *eax = *eax + al;
    *(ebp - 117) = *(ebp - 117) + dl;
}

/*	Procedure: 0x08048830 - 0x08048862
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    L0804883a();
    (restore)ebx;
    eax = ebx + 4262 + 192;
    esi = eax - 4;
    if(*(eax - 4) != -1) {
        do {
            eax = *( *esi)();
            esi = esi + -4;
        } while(*esi != -1);
    }
}

/*	Procedure: 0x08048863 - 0x08048863
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048863()
{



}

/*	Procedure: 0x08048864 - 0x08048878
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

init_dummy()
{
	/* unknown */ void  ebx;



    eax = L0804886d();
    (restore)ebx;
    ebx = ebx + 4211;
}

extern /* addr: 08048879 */  /*	Procedure: 0x08048879 - 0x0804887F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048879()
/*	Procedure: 0x08048880 - 0x08048892
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    return(__do_global_ctors_aux());
}

extern /* addr: 08048893 */  /*	Procedure: 0x08048893 - 0x0804889F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048893()
/*	Procedure: 0x080488A0 - 0x080488B2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    return(__do_global_dtors_aux());
}

extern /* addr: 080488B3 */  /*	Procedure: 0x080488B3 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080488B3()
/* address  size  */
/* 0x08048000       0 */ /* unknown */ void 	_START_;
/* 0x0804866c       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x0804868c      16 */ /* unknown */ void 	atexit;
/* 0x0804869c      16 */ /* unknown */ void 	__fpstart;
/* 0x080486ac      16 */ /* unknown */ void 	exit;
/* 0x080486bc      16 */ /* unknown */ void 	printf;
/* 0x080486cc      16 */ /* unknown */ void 	scanf;
/* 0x080486dc     111 */ /* unknown */ void 	_start;
/* 0x0804874b       1 */ /* unknown */ void 	_mcount;
/* 0x0804874c      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048780      24 */ /* unknown */ void 	fini_dummy;
/* 0x08048798      52 */ /* unknown */ void 	fib;
/* 0x080487cc     100 */ /* unknown */ void 	main;
/* 0x08048830      52 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048864      28 */ /* unknown */ void 	init_dummy;
/* 0x08048880      32 */ /* unknown */ void 	_init;
/* 0x080488a0       1 */ /* unknown */ void 	_fini;
/* 0x080488b4       4 */ /* unknown */ void 	_lib_version;
/* 0x080488de       0 */ /* unknown */ void 	_etext;
/* 0x080498e0       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049904       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804999c       0 */ /* unknown */ void 	force_to_data;
/* 0x0804999c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080499a0       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080499a4       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080499a8       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080499ac       4 */ /* unknown */ void 	_environ;
/* 0x080499ac       0 */ /* unknown */ void 	environ;
/* 0x080499ac       0 */ /* unknown */ void 	_edata;
/* 0x080499b0       0 */ /* unknown */ void 	_end;
/* 0x080499b0       0 */ /* unknown */ void 	_END_;
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
