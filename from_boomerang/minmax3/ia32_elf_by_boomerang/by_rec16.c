/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/minmax3/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048230 - 0x08048246
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

extern /* addr: 08048247 */  /*	Procedure: 0x08048247 - 0x08048257
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048247()
/*	Procedure: 0x08048278 - 0x0804829B
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

/*	Procedure: 0x0804829C - 0x080482BD
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L080482a6();
    (restore)ebx;
    eax = *(ebx + 4814 + 20);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x080482BE - 0x080482BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482BE()
{



}

/*	Procedure: 0x080482C0 - 0x080482F9
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

/*	Procedure: 0x080482FA - 0x080482FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482FA()
{



}

/*	Procedure: 0x080482FC - 0x08048325
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

/*	Procedure: 0x08048326 - 0x08048327
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048326()
{



}

/*	Procedure: 0x08048328 - 0x0804836E
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

test(A8)
/* unknown */ void  A8;
{



    eax = A8 >> 31;
    ebx = -2 - A8;
    ecx = -1;
    asm("sbb ecx,eax");
    ebx = ebx & ecx;
    edx = -2 - ebx;
    ebx = edx >> 31;
    edx = edx - 3;
    asm("sbb ebx,+0x0");
    edx = (edx & ebx) + 3;
    esp = esp - 8;
    (save)edx;
    (save)0x8048474;
    esp = esp + 16;
    return(printf());
}

/*	Procedure: 0x0804836F - 0x080483C7
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

main(A8)
/* unknown */ void  A8;
{



    esp = esp & -16;
    esp = esp;
    esp = esp - 12;
    (save)-5;
    test();
    esp = esp + 16;
    esp = esp - 12;
    (save)-2;
    test();
    esp = esp + 16;
    esp = esp - 12;
    (save)0;
    test();
    esp = esp + 16;
    esp = esp - 12;
    (save)A8;
    test();
    esp = esp + 16;
    esp = esp - 12;
    (save)5;
    test();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x080483C8 - 0x080483F7
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

/* DEST BLOCK NOT FOUND: 08048415 -> 08048450 */
/*	Procedure: 0x080483F8 - 0x0804842B
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
L08048411:
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
    goto L08048411;
}

/*	Procedure: 0x0804842C - 0x0804844F
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

/*	Procedure: 0x08048450 - 0x0804846A
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L0804845a();
    (restore)ebx;
    ebx = ebx + 4378;
    return(__do_global_dtors_aux());
}

extern /* addr: 0804846B */  /*	Procedure: 0x0804846B - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804846B()
/* address  size  */
/* 0x08048230      40 */ /* unknown */ void 	_init;
/* 0x08048258      16 */ /* unknown */ void 	__libc_start_main;
/* 0x08048268      16 */ /* unknown */ void 	printf;
/* 0x08048278      36 */ /* unknown */ void 	_start;
/* 0x0804829c      36 */ /* unknown */ void 	call_gmon_start;
/* 0x080482c0      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080482fc      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048328      71 */ /* unknown */ void 	test;
/* 0x0804836f      89 */ /* unknown */ void 	main;
/* 0x080483c8      48 */ /* unknown */ void 	__libc_csu_init;
/* 0x080483f8      52 */ /* unknown */ void 	__libc_csu_fini;
/* 0x0804842c      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048450       0 */ /* unknown */ void 	_fini;
/* 0x0804846c       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048470       4 */ /* unknown */ void 	_IO_stdin_used;
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
/* 0x0804958c       1 */ /* unknown */ void 	completed.1;
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
