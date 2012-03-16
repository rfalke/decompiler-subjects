/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/paramchain/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048818 - 0x0804887B
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
    if(_DYNAMIC != 0) {
        atexit();
    }
    (save)_fini;
    atexit();
    eax = *(ebp + 8);
    edx = ebp + eax * 4 + 16;
    _environ = edx;
    (save)_environ;
    edx = ebp + 12;
    ___Argv = edx;
    (save)___Argv;
    (save)eax;
    __fpstart();
    __fsr();
    _init();
    esp = esp + 12;
    (save)main();
    exit();
    (save)0;
    eax = 1;
    L00000007();
    asm("hlt");
}

/*	Procedure: 0x0804887C - 0x0804887C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_mcount()
{



}

/*	Procedure: 0x0804887D - 0x0804887F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804887D()
{



}

/*	Procedure: 0x08048880 - 0x08048922
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__fsr()
{
	/* unknown */ void  ecx;
	/* unknown */ void  edx;



    edx = 0;
    if(0 != 0) {
        asm("fstcw [esp+0x0]");
        *esp = *esp & 61632;
        edx = edx >> 1 ^ 927;
        ecx = edx;
        edx = edx & 31;
        edx = (ecx & 96) << 5;
        asm("bt edx,0xa");
        if(!( *esp = *esp | *(edx + trap_table) & 255)) {
            *esp = *esp | dx;
L080488d4:
            edx = (ecx & 384) << 1;
            *esp = *esp | dx;
            *esp = *esp | (ecx & 512) >> 8;
            asm("fldcw [esp+0x0]");
        } else {
            asm("btc edx,0xb");
            *esp = *esp | dx;
            goto L080488d4;
        }
        asm("fldcw [esp+0x0]");
        if(0 == 53) {
            __fnonstd_used = 1;
        }
    }
}

/*	Procedure: 0x08048923 - 0x08048923
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048923()
{



    *(ebp - 117) = *(ebp - 117) + dl;
}

/*	Procedure: 0x08048924 - 0x08048936
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

addem(A8, Ac, A10, A14)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
{



    eax = A8 + Ac + A10;
    *A14 = eax;
    return(*A14);
}

/*	Procedure: 0x08048937 - 0x08048937
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048937()
{



}

/*	Procedure: 0x08048938 - 0x0804894D
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

passem(A8, Ac, A10, A14)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
{



    return(addem(A8, Ac, A10, A14));
}

/*	Procedure: 0x0804894E - 0x0804894F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804894E()
{



}

/*	Procedure: 0x08048950 - 0x08048978
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffffc;



    passem(5, 10, 40, & Vfffffffc);
    (save)Vfffffffc;
    (save)0x8049b2c;
    printf();
    esp = esp + 24;
    return(0);
}

/*	Procedure: 0x08048979 - 0x0804897B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048979()
{



}

stack space not deallocated on return
/*	Procedure: 0x0804897C - 0x080489A2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    eax = L08048982();
    (restore)ebx;
    ecx = *(ebx + 4178 + 28);
    edx = ecx - 8;
    if(*edx != 0) {
        eax = *edx(ecx);
    }
}

extern /* addr: 080489A3 */  /*	Procedure: 0x080489A3 - 0x080489A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489A3()
stack space not deallocated on return
/*	Procedure: 0x080489A4 - 0x080489CD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    eax = L080489aa();
    (restore)ebx;
    ecx = *(ebx + 4138 + 32) - 16;
    edx = ecx - 4;
    if(*edx != 0) {
        eax = *edx(ecx);
    }
}

extern /* addr: 080489CE */  /*	Procedure: 0x080489CE - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489CE()
/* address  size  */
/* 0x08048000       0 */ /* unknown */ void 	_START_;
/* 0x080487c8       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x080487d8      16 */ /* unknown */ void 	atexit;
/* 0x080487e8      16 */ /* unknown */ void 	__fpstart;
/* 0x080487f8      16 */ /* unknown */ void 	exit;
/* 0x08048808      16 */ /* unknown */ void 	printf;
/* 0x08048818       0 */ /* unknown */ void 	_start;
/* 0x08048818       0 */ /* unknown */ void 	_ex_text0;
/* 0x0804887c       1 */ /* unknown */ void 	_mcount;
/* 0x08048880       0 */ /* unknown */ void 	__fsr;
/* 0x08048924      20 */ /* unknown */ void 	addem;
/* 0x08048938      24 */ /* unknown */ void 	passem;
/* 0x08048950      44 */ /* unknown */ void 	main;
/* 0x0804897c       0 */ /* unknown */ void 	_init;
/* 0x0804897c       0 */ /* unknown */ void 	_ex_text1;
/* 0x080489a4       1 */ /* unknown */ void 	_fini;
/* 0x080489d0       4 */ /* unknown */ void 	_lib_version;
/* 0x080489d4       0 */ /* unknown */ void 	_etext;
/* 0x080499d4       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x080499f8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049ac0       0 */ /* unknown */ void 	_ex_range0;
/* 0x08049ac0       0 */ /* unknown */ void 	_ex_range1;
/* 0x08049acc       0 */ /* unknown */ void 	_ex_shared0;
/* 0x08049adc       0 */ /* unknown */ void 	_ex_shared1;
/* 0x08049ae4       0 */ /* unknown */ void 	_environ;
/* 0x08049ae4       4 */ /* unknown */ void 	environ;
/* 0x08049ae8      24 */ /* unknown */ void 	__environ_lock;
/* 0x08049b00       4 */ /* unknown */ void 	___Argv;
/* 0x08049b04       4 */ /* unknown */ void 	__longdouble_used;
/* 0x08049b08       0 */ /* unknown */ void 	__fnonstd_used;
/* 0x08049b0c      32 */ /* unknown */ void 	trap_table;
/* 0x08049b41       0 */ /* unknown */ void 	_end;
/* 0x08049b41       0 */ /* unknown */ void 	_edata;
/* 0x08049b41       0 */ /* unknown */ void 	_END_;
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
