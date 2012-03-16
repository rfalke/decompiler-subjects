/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048258 - 0x0804826F
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

/*	Procedure: 0x08048270 - 0x0804827F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048270()
{



    (save) *L0804980C;
    goto ( *L08049810);
    *eax = *eax + al;
    *eax = *eax + al;
}

/*	Procedure: 0x080482A0 - 0x080482C3
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
    (save)_fini;
    (save)_init;
    (save)ecx;
    (save)esi;
    (save)main;
    __libc_start_main();
    asm("hlt");
}

/*	Procedure: 0x080482C4 - 0x080482E5
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L080482ce();
    (restore)ebx;
    eax = *(ebx + 5434 + 20);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x080482E6 - 0x080482E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482E6()
{



}

/*	Procedure: 0x080482E8 - 0x08048321
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

/*	Procedure: 0x08048322 - 0x08048323
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048322()
{



}

/*	Procedure: 0x08048324 - 0x0804834D
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

/*	Procedure: 0x0804834E - 0x0804834F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804834E()
{



}

/*	Procedure: 0x08048350 - 0x080484CB
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 12
 */

main(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  ebx;



    esp = esp - 12;
    ebx = A8;
    esp = esp & -16;
    if(ebx > 1) {
        if(ebx > 2) {
L08048373:
            if(ebx >= Ac) {
L08048377:
                if(main(-94, ebx - 27, A10, eax) == 0 || ebx != 2) {
                    ebx = 16;
L08048395:
                    esp = ebp - 12;
                    return(ebx);
                }
                if(Ac > 12) {
                    ebx = 9;
                    goto L08048395;
                }
                (save)eax;
                (save)0x8048528;
                (save)Ac + 1;
L080483b8:
                (save)2;
L080483ba:
                eax = main();
L080483bf:
                esp = esp + 16;
                ebx = eax;
                goto L08048395;
            }
            eax = main(ebx + 1, Ac, A10, eax);
            goto L08048377;
        }
        (save)eax;
        (save)main(-87, 1 - Ac, main(-86, 0, A10 + 1) + A10) + A10;
        (save)-13;
        (save)-79;
        eax = main();
        esp = esp + 16;
        goto L08048373;
    }
    if(ebx < 0) {
        if(ebx > 0) {
            (save)edx;
            (save)0x8048532;
            (save)2;
            goto L080483b8;
        }
        dl = *A10;
        ebx = 0;
        if(dl != 47) {
            (save)eax;
            (save)A10 + 1;
            esp = esp - 12;
            (save)0x8048540;
            (save)dl;
            (save)-61;
            esp = esp + 24;
            (save)main();
            (save)0;
            esp = esp + 16;
            if(main() == 0) {
                goto L08048395;
            }
        }
        ebx = 1;
        goto L08048395;
    }
    if(ebx >= -72) {
        if(ebx < -50) {
            if(Ac != *A10) {
                (save)ebx;
                (save)A10 + 1;
                (save)Ac;
                (save)-65;
                goto L080483ba;
            }
            esp = esp - 8;
            (save)stdout;
            (save) *(A10 + 31);
            eax = _IO_putc();
            goto L080483bf;
        }
        (save)ecx;
        (save)A10 + 1;
        (save)Ac;
        eax = ebx;
        if(*A10 != 47) {
L080484b3:
            (save)eax;
            goto L080483ba;
        }
        eax = ebx + 1;
        goto L080484b3;
    }
    (save)A10;
    (save)0x8048580;
    (save)ebx;
    (save)Ac;
    goto L080483ba;
}

/*	Procedure: 0x080484CC - 0x080484EF
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

/*	Procedure: 0x080484F0 - 0x0804850B
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L080484fa();
    (restore)ebx;
    ebx = ebx + 4878;
    return(__do_global_dtors_aux());
}

extern /* addr: 0804850C */  /*	Procedure: 0x0804850C - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804850C()
/* address  size  */
/* 0x08048258      40 */ /* unknown */ void 	_init;
/* 0x08048280      16 */ /* unknown */ void 	__libc_start_main;
/* 0x08048290      16 */ /* unknown */ void 	_IO_putc;
/* 0x080482a0      36 */ /* unknown */ void 	_start;
/* 0x080482c4      36 */ /* unknown */ void 	call_gmon_start;
/* 0x080482e8      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048324      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048350     380 */ /* unknown */ void 	main;
/* 0x080484cc      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080484f0       0 */ /* unknown */ void 	_fini;
/* 0x08048520       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048524       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x0804971c       0 */ /* unknown */ void 	data_start;
/* 0x0804971c       0 */ /* unknown */ void 	__data_start;
/* 0x08049720       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049724       0 */ /* unknown */ void 	p.0;
/* 0x08049728       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x08049728       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804972c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x080497f4       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080497f8       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080497fc       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049800       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049804       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049804       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049808       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049820       4 */ /* unknown */ void 	stdout;
/* 0x08049824       1 */ /* unknown */ void 	completed.1;
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
