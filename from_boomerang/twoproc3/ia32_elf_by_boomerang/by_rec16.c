/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/twoproc3/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x0804835C - 0x08048372
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

extern /* addr: 08048373 */  /*	Procedure: 0x08048373 - 0x08048383
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048373()
/* DEST BLOCK NOT FOUND: 0804838f -> 08048374 */
/*	Procedure: 0x08048384 - 0x08048393
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048384()
{



    goto ( *L080496f4);
    (save)0;
    goto L08048374;
}

/* DEST BLOCK NOT FOUND: 0804839f -> 08048374 */
/*	Procedure: 0x08048394 - 0x080483A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048394()
{



    goto ( *L080496f8);
    (save)8;
    goto L08048374;
}

/* DEST BLOCK NOT FOUND: 080483af -> 08048374 */
/*	Procedure: 0x080483A4 - 0x080483B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483A4()
{



    goto ( *L080496fc);
    (save)16;
    goto L08048374;
}

/* DEST BLOCK NOT FOUND: 080483bf -> 08048374 */
/*	Procedure: 0x080483B4 - 0x080483C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483B4()
{



    goto ( *L08049700);
    (save)24;
    goto L08048374;
}

/*	Procedure: 0x080483D0 - 0x080483F3
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
    L08048394();
    asm("hlt");
}

/*	Procedure: 0x080483F4 - 0x08048417
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)ecx;
    L080483fe();
    (restore)ebx;
    if(*(ebx + 4842 + -4) != 0) {
        L080483B4();
    }
    (restore)eax;
}

/*	Procedure: 0x08048418 - 0x0804841F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048418()
{



}

/*	Procedure: 0x08048420 - 0x0804844E
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.4463 != 0) {
    } else {
        while(1) {
            eax = p.4462;
            edx = *p.4462;
            if(edx == 0) {
                break;
            }
            p.4462 = eax + 4;
            *edx();
        }
        completed.4463 = 1;
    }
}

/*	Procedure: 0x0804844F - 0x0804844F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804844F()
{



}

/*	Procedure: 0x08048450 - 0x08048472
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
            *esp = __JCR_LIST__;
            eax = *L00000000();
        }
    }
}

/*	Procedure: 0x08048473 - 0x08048473
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048473()
{



}

/*	Procedure: 0x08048474 - 0x0804847E
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

getDevice(A8)
/* unknown */ void  A8;
{



    return(*(A8 + 24));
}

/*	Procedure: 0x0804847F - 0x080484C6
 *	Argument size: -20
 *	Local size: 24
 *	Save regs size: 0
 */

main(A1c)
/* unknown */ void  A1c;
{
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    Vfffffffc = L08048384();
    *esp = *Vfffffffc;
    A1c = getDevice();
    *esp = 0x80485f8;
    L080483A4();
    return(0);
}

/*	Procedure: 0x080484C7 - 0x080484CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484C7()
{



}

/*	Procedure: 0x080484D0 - 0x08048532
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L080484de();
    (restore)ebx;
    ebx = ebx + 4618;
    _init();
    eax = eax - ebx + -232 >> 2;
    *(ebp - 16) = eax;
    if(!(eax = ebx + -232)) {
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
}

/*	Procedure: 0x08048533 - 0x0804853F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048533()
{



}

/*	Procedure: 0x08048540 - 0x08048597
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L0804854e();
    (restore)ebx;
    ebx = ebx + 4506;
    eax = ebx + -232;
    eax = eax - ebx + -232 >> 2;
    *(ebp - 16) = eax;
    if(*(ebp - 16) - 1 != -1) {
        esi = edx + eax * 4;
        edi = 0;
        do {
            *esi();
            edi = edi + 1;
            esi = esi - 4;
        } while(*(ebp - 16) != edi);
    }
    return(_fini());
}

/*	Procedure: 0x08048598 - 0x0804859F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048598()
{



}

/*	Procedure: 0x080485A0 - 0x080485D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
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

/*	Procedure: 0x080485D1 - 0x080485D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485D1()
{



}

/*	Procedure: 0x080485D4 - 0x080485ED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

_fini()
{
	/* unknown */ void  eax;
	/* unknown */ void  ebx;



    L080485de();
    (restore)ebx;
    ebx = ebx + 4362;
    return(__do_global_dtors_aux());
}

extern /* addr: 080485EE */  /*	Procedure: 0x080485EE - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485EE()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	xf86GetPciVideoInfo;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513500 */ /* unknown */ void 	printf;
/* 0x0804835c     116 */ /* unknown */ void 	_init;
/* 0x080483d0      36 */ /* unknown */ void 	_start;
/* 0x080483f4      44 */ /* unknown */ void 	call_gmon_start;
/* 0x08048420      48 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048450      36 */ /* unknown */ void 	frame_dummy;
/* 0x08048474      11 */ /* unknown */ void 	getDevice;
/* 0x0804847f      81 */ /* unknown */ void 	main;
/* 0x080484d0     112 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048540      96 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080485a0      52 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080485d4       1 */ /* unknown */ void 	_fini;
/* 0x080485f0       4 */ /* unknown */ void 	_fp_hw;
/* 0x080485f4       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080485fc       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049600       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049604       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049608       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804960c       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049610       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049610       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049614       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x080496e8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049704       0 */ /* unknown */ void 	data_start;
/* 0x08049704       0 */ /* unknown */ void 	__data_start;
/* 0x08049708       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804970c       0 */ /* unknown */ void 	p.4462;
/* 0x08049710       0 */ /* unknown */ void 	__bss_start;
/* 0x08049710       1 */ /* unknown */ void 	_edata;
/* 0x08049710       1 */ /* unknown */ void 	completed.4463;
/* 0x08049714       1 */ /* unknown */ void 	_end;
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
