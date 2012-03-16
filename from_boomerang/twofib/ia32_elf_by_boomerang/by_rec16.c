/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/twofib/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x0804829C - 0x080482B2
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

extern /* addr: 080482B3 */  /*	Procedure: 0x080482B3 - 0x080482C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B3()
/* DEST BLOCK NOT FOUND: 080482cf -> 080482b4 */
/*	Procedure: 0x080482C4 - 0x080482D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482C4()
{



    goto ( *L08049660);
    (save)0;
    goto L080482b4;
}

/* DEST BLOCK NOT FOUND: 080482df -> 080482b4 */
/*	Procedure: 0x080482D4 - 0x080482E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482D4()
{



    goto ( *L08049664);
    (save)8;
    goto L080482b4;
}

/* DEST BLOCK NOT FOUND: 080482ef -> 080482b4 */
/*	Procedure: 0x080482E4 - 0x080482F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482E4()
{



    goto ( *L08049668);
    (save)16;
    goto L080482b4;
}

/*	Procedure: 0x080482F4 - 0x08048317
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
    L080482D4();
    asm("hlt");
}

/*	Procedure: 0x08048318 - 0x08048338
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    L08048321();
    (restore)ebx;
    (save)edx;
    eax = *(ebx + 4915 + -4);
    if(eax != 0) {
        *eax();
    }
    (restore)eax;
}

/*	Procedure: 0x08048339 - 0x0804833B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048339()
{



}

/*	Procedure: 0x0804833C - 0x0804836D
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

/*	Procedure: 0x0804836E - 0x0804836F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804836E()
{



}

/*	Procedure: 0x08048370 - 0x08048399
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

/*	Procedure: 0x0804839A - 0x0804839B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804839A()
{



}

/*	Procedure: 0x0804839C - 0x080483F4
 *	Argument size: -8
 *	Local size: 16
 *	Save regs size: 0
 */

twofib(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    if(Ac == 0) {
        Vfffffff8 = 0;
        Vfffffffc = 1;
    } else {
        esp = esp - 8;
        (save)Ac - 1;
        (save) & Vfffffff8;
        twofib();
        esp = esp + 12;
        Vfffffff4 = Vfffffff8;
        Vfffffff8 = Vfffffffc;
        *( & Vfffffffc) = *( & Vfffffffc) + Vfffffff4;
    }
    *A8 = Vfffffff8;
    *(A8 + 4) = Vfffffffc;
    return(A8);
}

/*	Procedure: 0x080483F5 - 0x08048463
 *	Argument size: -24
 *	Local size: 24
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    esp = esp - 12;
    (save)0x8048544;
    L080482E4();
    esp = esp + 16;
    esp = esp - 8;
    (save) & Vfffffffc;
    (save)0x8048553;
    L080482C4();
    esp = esp + 16;
    esp = esp - 4;
    esp = esp - 4;
    twofib( & Vfffffff0, Vfffffffc);
    (save)Vfffffff0;
    (save)Vfffffffc;
    (save)0x8048556;
    L080482E4();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x08048464 - 0x080484B5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L08048472();
    (restore)ebx;
    ebx = ebx + 4578;
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

/*	Procedure: 0x080484B6 - 0x080484B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484B6()
{



}

/*	Procedure: 0x080484B8 - 0x080484F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080484c3();
    (restore)ebx;
    ebx = ebx + 4497;
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

/*	Procedure: 0x080484FA - 0x080484FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484FA()
{



}

/*	Procedure: 0x080484FC - 0x0804851F
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

/*	Procedure: 0x08048520 - 0x08048539
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    eax = L08048529();
    (restore)ebx;
    ebx = ebx + 4395;
    return(__do_global_dtors_aux(eax));
}

extern /* addr: 0804853A */  /*	Procedure: 0x0804853A - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804853A()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	scanf;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513308 */ /* unknown */ void 	printf;
/* 0x0804829c      88 */ /* unknown */ void 	_init;
/* 0x080482f4      36 */ /* unknown */ void 	_start;
/* 0x08048318      36 */ /* unknown */ void 	call_gmon_start;
/* 0x0804833c      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048370      44 */ /* unknown */ void 	frame_dummy;
/* 0x0804839c      89 */ /* unknown */ void 	twofib;
/* 0x080483f5     111 */ /* unknown */ void 	main;
/* 0x08048464      84 */ /* unknown */ void 	__libc_csu_init;
/* 0x080484b8      68 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080484fc      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048520       0 */ /* unknown */ void 	_fini;
/* 0x0804853c       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048540       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048570       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049574       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049578       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804957c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049580       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049584       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049584       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049588       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049654       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804966c       0 */ /* unknown */ void 	data_start;
/* 0x0804966c       0 */ /* unknown */ void 	__data_start;
/* 0x08049670       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049674       0 */ /* unknown */ void 	p.0;
/* 0x08049678       1 */ /* unknown */ void 	completed.1;
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
