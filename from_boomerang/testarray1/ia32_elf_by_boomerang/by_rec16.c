/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/testarray1/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048278 - 0x0804828E
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

extern /* addr: 0804828F */  /*	Procedure: 0x0804828F - 0x0804829F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804828F()
/* DEST BLOCK NOT FOUND: 080482ab -> 08048290 */
/*	Procedure: 0x080482A0 - 0x080482AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482A0()
{



    goto ( *L080495a8);
    (save)0;
    goto L08048290;
}

/* DEST BLOCK NOT FOUND: 080482bb -> 08048290 */
/*	Procedure: 0x080482B0 - 0x080482BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B0()
{



    goto ( *L080495ac);
    (save)8;
    goto L08048290;
}

/*	Procedure: 0x080482C0 - 0x080482E3
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
    L080482A0();
    asm("hlt");
}

/*	Procedure: 0x080482E4 - 0x08048304
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    L080482ed();
    (restore)ebx;
    (save)edx;
    eax = *(ebx + 4783 + -4);
    if(eax != 0) {
        *eax();
    }
    (restore)eax;
}

/*	Procedure: 0x08048305 - 0x08048307
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048305()
{



}

/*	Procedure: 0x08048308 - 0x08048339
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.1 == 0) {
        while(1) {
            eax = p.0;
            edx = *p.0;
            if(edx == 0) {
                break;
            }
            p.0 = eax + 4;
            *edx();
        }
        completed.1 = 1;
    }
}

/*	Procedure: 0x0804833A - 0x0804833B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804833A()
{



}

/*	Procedure: 0x0804833C - 0x08048365
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
            *L00000000();
            esp = esp + 16;
        }
    }
}

/*	Procedure: 0x08048366 - 0x08048367
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048366()
{



}

/*	Procedure: 0x08048368 - 0x080483C8
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    Vfffffff8 = 0;
    for(Vfffffffc = 0; Vfffffffc <= 4; *( & Vfffffffc) = *( & Vfffffffc) + 1) {
        *( & Vfffffff8) = *( & Vfffffff8) + *(Vfffffffc + gca);
    }
    esp = esp - 8;
    (save)Vfffffff8;
    (save)0x80484ac;
    L080482B0();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x080483C9 - 0x080483CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483C9()
{



}

/*	Procedure: 0x080483CC - 0x0804841D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080483da();
    (restore)ebx;
    ebx = ebx + 4546;
    _init();
    eax = ebx + -224;
    edx = ebx + -224;
    *(ebp - 16) = eax;
    eax = eax - edx;
    esi = 0;
    eax = eax >> 2;
    if(0 < eax) {
        edi = edx;
        do {
            eax = *(edx + esi * 4)();
            ecx = *(ebp - 16) - edi;
            esi = esi + 1;
            edx = edi;
        } while(esi < ecx >> 2);
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

/*	Procedure: 0x08048420 - 0x08048461
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L0804842b();
    (restore)ebx;
    ebx = ebx + 4465;
    eax = ebx + -224;
    edi = ebx + -224;
    eax = eax - edi >> 2;
    esp = esp - 12;
    for(esi = eax - 1; esi != -1; esi = esi - 1) {
        *(edi + esi * 4)();
    }
    esp = esp + 12;
    return(_fini());
}

/*	Procedure: 0x08048462 - 0x08048463
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048462()
{



}

/*	Procedure: 0x08048464 - 0x08048487
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    (save)edx;
    ebx = __CTOR_LIST__;
    for(eax = __CTOR_LIST__; eax != -1; eax = *ebx) {
        ebx = ebx - 4;
        *eax();
    }
    (restore)eax;
}

/*	Procedure: 0x08048488 - 0x080484A1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    eax = L08048491();
    (restore)ebx;
    ebx = ebx + 4363;
    return(__do_global_dtors_aux(eax));
}

extern /* addr: 080484A2 */  /*	Procedure: 0x080484A2 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484A2()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513272 */ /* unknown */ void 	printf;
/* 0x08048278      72 */ /* unknown */ void 	_init;
/* 0x080482c0      36 */ /* unknown */ void 	_start;
/* 0x080482e4      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048308      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x0804833c      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048368     100 */ /* unknown */ void 	main;
/* 0x080483cc      84 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048420      68 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048464      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048488       0 */ /* unknown */ void 	_fini;
/* 0x080484a4       4 */ /* unknown */ void 	_fp_hw;
/* 0x080484a8       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080484b8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x080494bc       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080494c0       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080494c4       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080494c8       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080494cc       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080494cc       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080494d0       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804959c       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x080495b0       0 */ /* unknown */ void 	data_start;
/* 0x080495b0       0 */ /* unknown */ void 	__data_start;
/* 0x080495b4       0 */ /* unknown */ void 	__dso_handle;
/* 0x080495b8       0 */ /* unknown */ void 	p.0;
/* 0x080495bc       5 */ /* unknown */ void 	gca;
/* 0x080495c4       1 */ /* unknown */ void 	completed.1;
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
