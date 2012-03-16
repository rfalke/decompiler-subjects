/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/regalias2/ia32_elf_by_boomerang/subject.exe'
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



    goto ( *L08049570);
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



    goto ( *L08049574);
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

/*	Procedure: 0x080482E4 - 0x08048305
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    eax = L080482ed();
    (restore)ebx;
    (save)eax;
    eax = *(ebx + 4727 + -4);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x08048306 - 0x08048307
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048306()
{



}

/*	Procedure: 0x08048308 - 0x08048341
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

/*	Procedure: 0x08048342 - 0x08048343
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048342()
{



}

/*	Procedure: 0x08048344 - 0x0804836D
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

/*	Procedure: 0x0804836E - 0x0804836F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804836E()
{



}

/*	Procedure: 0x08048370 - 0x080483A2
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp;
    edx = -2023406815;
    dl = 18;
    Vfffffffc = 52;
    esp = esp - 8;
    (save)Vfffffffc;
    (save)0x8048478;
    esp = esp + 16;
    return(L080482B0());
}

/*	Procedure: 0x080483A3 - 0x080483A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483A3()
{



}

/*	Procedure: 0x080483A4 - 0x080483EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080483b2();
    (restore)ebx;
    ebx = ebx + 4530;
    eax = _init();
    edx = ebx + -224;
    edx = edx - ebx + -224;
    esi = 0;
    if(0 < edx >> 2) {
        edi = edx;
        do {
            eax = *(ebx + esi * 4 + -224)();
            esi = esi + 1;
        } while(esi < edi);
    }
}

/*	Procedure: 0x080483EC - 0x0804842F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    L080483f6();
    (restore)ebx;
    ebx = ebx + 4462;
    ecx = ebx + -224;
    ecx = ecx - ebx + -224 >> 2;
    ecx :: 0;
    if(!(esi = ecx - 1)) {
        return(_fini());
    }
    do {
        *(ebx + esi * 4 + -224)();
        edx = esi;
        esi = esi - 1;
    } while(edx != 0);
    return(_fini());
}

/*	Procedure: 0x08048430 - 0x08048453
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

/*	Procedure: 0x08048454 - 0x0804846E
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    L0804845d();
    (restore)ebx;
    ebx = ebx + 4359;
    return(__do_global_dtors_aux(edx));
}

extern /* addr: 0804846F */  /*	Procedure: 0x0804846F - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804846F()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513272 */ /* unknown */ void 	printf;
/* 0x08048278      72 */ /* unknown */ void 	_init;
/* 0x080482c0      36 */ /* unknown */ void 	_start;
/* 0x080482e4      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048308      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048344      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048370      52 */ /* unknown */ void 	main;
/* 0x080483a4      72 */ /* unknown */ void 	__libc_csu_init;
/* 0x080483ec      68 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048430      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048454       0 */ /* unknown */ void 	_fini;
/* 0x08048470       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048474       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048480       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049484       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049488       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804948c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049490       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049494       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049494       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049498       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049564       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049578       0 */ /* unknown */ void 	data_start;
/* 0x08049578       0 */ /* unknown */ void 	__data_start;
/* 0x0804957c       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049580       0 */ /* unknown */ void 	p.0;
/* 0x08049584       1 */ /* unknown */ void 	completed.1;
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
