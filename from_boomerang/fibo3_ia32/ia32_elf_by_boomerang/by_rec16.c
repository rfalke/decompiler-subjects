/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fibo3_ia32/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x080482A4 - 0x080482BA
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

extern /* addr: 080482BB */  /*	Procedure: 0x080482BB - 0x080482CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482BB()
/* DEST BLOCK NOT FOUND: 080482d7 -> 080482bc */
/*	Procedure: 0x080482CC - 0x080482DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482CC()
{



    goto ( *L08049620);
    (save)0;
    goto L080482bc;
}

/* DEST BLOCK NOT FOUND: 080482e7 -> 080482bc */
/*	Procedure: 0x080482DC - 0x080482EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482DC()
{



    goto ( *L08049624);
    (save)8;
    goto L080482bc;
}

/* DEST BLOCK NOT FOUND: 080482f7 -> 080482bc */
/*	Procedure: 0x080482EC - 0x080482FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482EC()
{



    goto ( *L08049628);
    (save)16;
    goto L080482bc;
}

/* DEST BLOCK NOT FOUND: 08048307 -> 080482bc */
/*	Procedure: 0x080482FC - 0x0804830B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482FC()
{



    goto ( *L0804962c);
    (save)24;
    goto L080482bc;
}

/*	Procedure: 0x0804830C - 0x0804832F
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
    L080482DC();
    asm("hlt");
}

/*	Procedure: 0x08048330 - 0x08048353
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)ecx;
    L0804833a();
    (restore)ebx;
    if(*(ebx + 4826 + -4) != 0) {
        L080482FC();
    }
    (restore)eax;
}

/*	Procedure: 0x08048354 - 0x08048385
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

/*	Procedure: 0x08048386 - 0x08048387
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048386()
{



}

/*	Procedure: 0x08048388 - 0x080483AE
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

/*	Procedure: 0x080483AF - 0x080483AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483AF()
{



}

/*	Procedure: 0x080483B0 - 0x080483F5
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 4
 */

fib(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    if(A8 > 1) {
        esp = esp - 12;
        (save)A8 - 1;
        esp = esp + 16;
        (save)edx;
        (save)edx;
        (save)fib();
        (restore)edx;
        esp = esp + 8;
        *(ebp - 8) = ecx + fib(A8 - 2);
    } else {
        *(ebp - 8) = A8;
    }
    return(*(ebp - 8));
}

/*	Procedure: 0x080483F6 - 0x08048462
 *	Argument size: -24
 *	Local size: 24
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    esp = esp - 12;
    (save)0x8048508;
    L080482EC();
    esp = esp + 16;
    esp = esp - 8;
    (save) & Vfffffff8;
    (save)0x8048517;
    L080482CC();
    esp = esp + 16;
    Vfffffffc = fib(Vfffffff8);
    esp = esp - 4;
    (save)Vfffffffc;
    (save)Vfffffff8;
    (save)0x804851a;
    L080482EC();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x08048463 - 0x08048463
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048463()
{



}

/*	Procedure: 0x08048464 - 0x080484B2
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
    ebx = ebx + 4514;
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

/*	Procedure: 0x080484B3 - 0x080484B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484B3()
{



}

/*	Procedure: 0x080484B4 - 0x080484B8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x080484B9 - 0x080484BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484B9()
{



}

/*	Procedure: 0x080484BC - 0x080484E0
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

/*	Procedure: 0x080484E1 - 0x080484E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484E1()
{



}

/*	Procedure: 0x080484E4 - 0x080484FD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

_fini()
{
	/* unknown */ void  eax;
	/* unknown */ void  ebx;



    L080484ee();
    (restore)ebx;
    ebx = ebx + 4390;
    return(__do_global_dtors_aux());
}

extern /* addr: 080484FE */  /*	Procedure: 0x080484FE - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484FE()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	scanf;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513316 */ /* unknown */ void 	printf;
/* 0x080482a4     104 */ /* unknown */ void 	_init;
/* 0x0804830c      36 */ /* unknown */ void 	_start;
/* 0x08048330      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048354      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048388      40 */ /* unknown */ void 	frame_dummy;
/* 0x080483b0      70 */ /* unknown */ void 	fib;
/* 0x080483f6     110 */ /* unknown */ void 	main;
/* 0x08048464      80 */ /* unknown */ void 	__libc_csu_init;
/* 0x080484b4       8 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080484bc      40 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080484e4       0 */ /* unknown */ void 	_fini;
/* 0x08048500       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048504       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048530       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049534       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049538       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804953c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049540       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049544       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049544       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049548       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049614       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049630       0 */ /* unknown */ void 	data_start;
/* 0x08049630       0 */ /* unknown */ void 	__data_start;
/* 0x08049634       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049638       0 */ /* unknown */ void 	p.4582;
/* 0x0804963c       1 */ /* unknown */ void 	completed.4583;
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
