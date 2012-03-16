/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/minmax/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x080487E4 - 0x08048847
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

/*	Procedure: 0x08048848 - 0x08048848
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_mcount()
{



}

/*	Procedure: 0x08048849 - 0x0804884B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048849()
{



}

/*	Procedure: 0x0804884C - 0x080488EE
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
L080488a0:
            edx = (ecx & 384) << 1;
            *esp = *esp | dx;
            *esp = *esp | (ecx & 512) >> 8;
            asm("fldcw [esp+0x0]");
        } else {
            asm("btc edx,0xb");
            *esp = *esp | dx;
            goto L080488a0;
        }
        asm("fldcw [esp+0x0]");
        if(0 == 53) {
            __fnonstd_used = 1;
        }
    }
}

/*	Procedure: 0x080488EF - 0x080488EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080488EF()
{



    *(ebp - 117) = *(ebp - 117) + dl;
}

/*	Procedure: 0x080488F0 - 0x08048921
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

main(A8)
/* unknown */ void  A8;
{



    eax = A8;
    if(eax < -2) {
        eax = -2;
    } else {
        if(eax > 3) {
            eax = 3;
        }
    }
    printf(0x8049ad4, eax);
    return(0);
}

/*	Procedure: 0x08048922 - 0x08048923
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048922()
{



}

stack space not deallocated on return
/*	Procedure: 0x08048924 - 0x0804894A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    eax = L0804892a();
    (restore)ebx;
    ecx = *(ebx + 4178 + 28);
    edx = ecx - 8;
    if(*edx != 0) {
        eax = *edx(ecx);
    }
}

extern /* addr: 0804894B */  /*	Procedure: 0x0804894B - 0x0804894B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804894B()
stack space not deallocated on return
/*	Procedure: 0x0804894C - 0x08048975
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    eax = L08048952();
    (restore)ebx;
    ecx = *(ebx + 4138 + 32) - 16;
    edx = ecx - 4;
    if(*edx != 0) {
        eax = *edx(ecx);
    }
}

extern /* addr: 08048976 */  /*	Procedure: 0x08048976 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048976()
/* address  size  */
/* 0x08048000       0 */ /* unknown */ void 	_START_;
/* 0x08048794       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x080487a4      16 */ /* unknown */ void 	atexit;
/* 0x080487b4      16 */ /* unknown */ void 	__fpstart;
/* 0x080487c4      16 */ /* unknown */ void 	exit;
/* 0x080487d4      16 */ /* unknown */ void 	printf;
/* 0x080487e4       0 */ /* unknown */ void 	_start;
/* 0x080487e4       0 */ /* unknown */ void 	_ex_text0;
/* 0x08048848       1 */ /* unknown */ void 	_mcount;
/* 0x0804884c       0 */ /* unknown */ void 	__fsr;
/* 0x080488f0      52 */ /* unknown */ void 	main;
/* 0x08048924       0 */ /* unknown */ void 	_init;
/* 0x08048924       0 */ /* unknown */ void 	_ex_text1;
/* 0x0804894c       1 */ /* unknown */ void 	_fini;
/* 0x08048978       4 */ /* unknown */ void 	_lib_version;
/* 0x0804897c       0 */ /* unknown */ void 	_etext;
/* 0x0804997c       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x080499a0       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049a68       0 */ /* unknown */ void 	_ex_range0;
/* 0x08049a68       0 */ /* unknown */ void 	_ex_range1;
/* 0x08049a74       0 */ /* unknown */ void 	_ex_shared0;
/* 0x08049a84       0 */ /* unknown */ void 	_ex_shared1;
/* 0x08049a8c       0 */ /* unknown */ void 	_environ;
/* 0x08049a8c       4 */ /* unknown */ void 	environ;
/* 0x08049a90      24 */ /* unknown */ void 	__environ_lock;
/* 0x08049aa8       4 */ /* unknown */ void 	___Argv;
/* 0x08049aac       4 */ /* unknown */ void 	__longdouble_used;
/* 0x08049ab0       0 */ /* unknown */ void 	__fnonstd_used;
/* 0x08049ab4      32 */ /* unknown */ void 	trap_table;
/* 0x08049b02       0 */ /* unknown */ void 	_end;
/* 0x08049b02       0 */ /* unknown */ void 	_edata;
/* 0x08049b02       0 */ /* unknown */ void 	_END_;
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
