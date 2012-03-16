/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/frontier/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x0804820C - 0x08048222
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

extern /* addr: 08048223 */  /*	Procedure: 0x08048223 - 0x08048233
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048223()
/*	Procedure: 0x08048244 - 0x08048267
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

/*	Procedure: 0x08048268 - 0x08048289
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L08048272();
    (restore)ebx;
    eax = *(ebx + 4846 + 16);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x0804828A - 0x0804828B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804828A()
{



}

/*	Procedure: 0x0804828C - 0x080482C5
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

/*	Procedure: 0x080482C6 - 0x080482C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482C6()
{



}

/*	Procedure: 0x080482C8 - 0x080482F1
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

/*	Procedure: 0x080482F2 - 0x080482F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482F2()
{



}

/*	Procedure: 0x080482F4 - 0x080483C4
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

main(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp;
    Vfffffffc = 1;
    Vfffffff8 = A8;
    if(Vfffffff8 != 5) {
        if(Vfffffff8 <= 5) {
            if(Vfffffff8 == 2) {
                goto L08048333;
            }
        } else {
            if(Vfffffff8 == 9) {
                goto L08048395;
            }
            goto L080483b9;
L08048333:
            Vfffffffc = 2;
            do {
                Vfffffffc = 3;
            } while(A8 > 0);
L08048347:
            Vfffffffc = 4;
        }
    } else {
        do {
            Vfffffffc = 5;
            eax = A8;
            A8 = A8 - 1;
            if(eax <= 1) {
                Vfffffffc = 7;
                if(A8 != 12) {
                    goto L08048386;
                } else {
                    goto L080483b2;
                }
            }
            Vfffffffc = 6;
            eax = A8;
            A8 = A8 - 1;
            if(eax > 2) {
                goto L08048347;
            }
L08048386:
            Vfffffffc = 8;
        } while(A8 > 0);
        goto L080483b9;
L08048395:
        Vfffffffc = 9;
        Vfffffffc = A8 == 10 ? 10 : 11;
L080483b2:
        Vfffffffc = 12;
    }
L080483b9:
    Vfffffffc = 13;
    return(Vfffffffc);
}

/*	Procedure: 0x080483C5 - 0x080483C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483C5()
{



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
    ebx = ebx + 4358;
    return(__do_global_dtors_aux());
}

extern /* addr: 0804846B */  /*	Procedure: 0x0804846B - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804846B()
/* address  size  */
/* 0x0804820c      40 */ /* unknown */ void 	_init;
/* 0x08048234      16 */ /* unknown */ void 	__libc_start_main;
/* 0x08048244      36 */ /* unknown */ void 	_start;
/* 0x08048268      36 */ /* unknown */ void 	call_gmon_start;
/* 0x0804828c      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080482c8      44 */ /* unknown */ void 	frame_dummy;
/* 0x080482f4     212 */ /* unknown */ void 	main;
/* 0x080483c8      48 */ /* unknown */ void 	__libc_csu_init;
/* 0x080483f8      52 */ /* unknown */ void 	__libc_csu_fini;
/* 0x0804842c      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048450       0 */ /* unknown */ void 	_fini;
/* 0x0804846c       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048470       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048474       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x08048474       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049478       0 */ /* unknown */ void 	data_start;
/* 0x08049478       0 */ /* unknown */ void 	__data_start;
/* 0x0804947c       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049480       0 */ /* unknown */ void 	p.0;
/* 0x08049484       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804954c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049550       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049554       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049558       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804955c       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0804955c       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049560       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049574       1 */ /* unknown */ void 	completed.1;
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
