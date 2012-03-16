/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/param1/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048280 - 0x08048296
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

extern /* addr: 08048297 */  /*	Procedure: 0x08048297 - 0x080482A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048297()
/* DEST BLOCK NOT FOUND: 080482b3 -> 08048298 */
/*	Procedure: 0x080482A8 - 0x080482B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482A8()
{



    goto ( *L08049580);
    (save)0;
    goto L08048298;
}

/* DEST BLOCK NOT FOUND: 080482c3 -> 08048298 */
/*	Procedure: 0x080482B8 - 0x080482C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B8()
{



    goto ( *L08049584);
    (save)8;
    goto L08048298;
}

/* DEST BLOCK NOT FOUND: 080482d3 -> 08048298 */
/*	Procedure: 0x080482C8 - 0x080482D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482C8()
{



    goto ( *L08049588);
    (save)16;
    goto L08048298;
}

/*	Procedure: 0x080482D8 - 0x080482FB
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
    L080482A8();
    asm("hlt");
}

/*	Procedure: 0x080482FC - 0x0804831F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)ecx;
    L08048306();
    (restore)ebx;
    if(*(ebx + 4718 + -4) != 0) {
        L080482C8();
    }
    (restore)eax;
}

/*	Procedure: 0x08048320 - 0x08048351
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

/*	Procedure: 0x08048352 - 0x08048353
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048352()
{



}

/*	Procedure: 0x08048354 - 0x0804837A
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

/*	Procedure: 0x0804837B - 0x0804837B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804837B()
{



}

/*	Procedure: 0x0804837C - 0x08048393
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

cparam(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    if(A8 < 0) {
        Ac = 0;
    }
    return(Ac + A8);
}

/*	Procedure: 0x08048394 - 0x080483D8
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

main(A8)
/* unknown */ void  A8;
{



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    esp = esp - 8;
    (save)cparam(A8 - 3, 2);
    (save)0x8048480;
    L080482B8();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x080483D9 - 0x080483DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483D9()
{



}

/*	Procedure: 0x080483DC - 0x0804842A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080483ea();
    (restore)ebx;
    ebx = ebx + 4490;
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

/*	Procedure: 0x0804842B - 0x0804842B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804842B()
{



}

/*	Procedure: 0x0804842C - 0x08048430
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x08048431 - 0x08048433
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048431()
{



}

/*	Procedure: 0x08048434 - 0x08048458
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

/*	Procedure: 0x08048459 - 0x0804845B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048459()
{



}

/*	Procedure: 0x0804845C - 0x08048475
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

_fini()
{
	/* unknown */ void  eax;
	/* unknown */ void  ebx;



    L08048466();
    (restore)ebx;
    ebx = ebx + 4366;
    return(__do_global_dtors_aux());
}

extern /* addr: 08048476 */  /*	Procedure: 0x08048476 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048476()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513280 */ /* unknown */ void 	printf;
/* 0x08048280      88 */ /* unknown */ void 	_init;
/* 0x080482d8      36 */ /* unknown */ void 	_start;
/* 0x080482fc      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048320      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048354      40 */ /* unknown */ void 	frame_dummy;
/* 0x0804837c      24 */ /* unknown */ void 	cparam;
/* 0x08048394      72 */ /* unknown */ void 	main;
/* 0x080483dc      80 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804842c       8 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048434      40 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804845c       0 */ /* unknown */ void 	_fini;
/* 0x08048478       4 */ /* unknown */ void 	_fp_hw;
/* 0x0804847c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048490       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049494       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049498       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804949c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080494a0       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080494a4       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080494a4       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080494a8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049574       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804958c       0 */ /* unknown */ void 	data_start;
/* 0x0804958c       0 */ /* unknown */ void 	__data_start;
/* 0x08049590       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049594       0 */ /* unknown */ void 	p.4582;
/* 0x08049598       1 */ /* unknown */ void 	completed.4583;
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
