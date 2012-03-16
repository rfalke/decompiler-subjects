/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fbranch/ia32_elf_by_boomerang/subject.exe'
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
/*	Procedure: 0x080482E0 - 0x08048303
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

/*	Procedure: 0x08048304 - 0x08048325
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L0804830e();
    (restore)ebx;
    eax = *(ebx + 5038 + 28);
    if(eax != 0) {
        eax = *eax();
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

/*	Procedure: 0x08048328 - 0x08048361
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

/*	Procedure: 0x08048362 - 0x08048363
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048362()
{



}

/*	Procedure: 0x08048364 - 0x0804838D
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

/*	Procedure: 0x0804838E - 0x0804838F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804838E()
{



}

/*	Procedure: 0x08048390 - 0x080484D3
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - 8;
    (save) & Vfffffffc;
    (save)0x8048580;
    (save)scanf();
    *esp = Vfffffffc;
    (save)1075052544;
    (save)0;
    (save)0x8048583;
    eax = printf();
    (fsave)Vfffffffc;
    asm("fxch");
    asm("fucom st1");
    asm("fnstsw ax");
    st1 = -5.71614e+47;
    ah = ah & 69;
    ah = ah ^ 64;
    if(!(esp = esp + 32)) {
L080483e2:
        (fsave)-8.88881e+201;
        asm("fucomp st1");
        asm("fnstsw ax");
        ah = ah & 69;
        if(ah == 64) {
L080483f8:
            (fsave)-8.88881e+201;
            asm("fucomp st1");
            asm("fnstsw ax");
            if(!(ah & 69)) {
L08048407:
                asm("fxch");
                asm("fucom st1");
                asm("fnstsw ax");
                st1 = -5.71614e+47;
                if(!(ah & 1)) {
L0804841a:
                    (fsave)-8.88881e+201;
                    asm("fucomp st1");
                    asm("fnstsw ax");
                    if(!(ah & 1)) {
L08048429:
                        (fsave)-5.71614e+47;
                        asm("fxch");
                        asm("fucompp");
                        asm("fnstsw ax");
                        if(!(ah & 69)) {
L0804843a:
                            return;
                        }
                        esp = esp - 12;
                        (save)0x8048595;
                        eax = puts();
                        esp = esp + 16;
                        goto L0804843a;
                    }
                    st0 = (frestore);
                    esp = esp - 12;
                    (save)0x804859a;
                    eax = puts();
                    esp = esp + 16;
                    goto L08048429;
                }
                st0 = Vfffffffc;
                esp = esp - 12;
                (save)0x80485ab;
                eax = puts();
                esp = esp + 16;
                goto L0804841a;
            }
            st0 = Vfffffffc;
            esp = esp - 12;
            (save)0x80485b9;
            eax = puts();
            esp = esp + 16;
            goto L08048407;
        }
        st0 = Vfffffffc;
        esp = esp - 12;
        (save)0x80485c1;
        eax = puts();
        esp = esp + 16;
        goto L080483f8;
    }
    st0 = Vfffffffc;
    esp = esp - 12;
    (save)0x80485a5;
    eax = puts();
    esp = esp + 16;
    (fsave)Vfffffffc;
    goto L080483e2;
}

/*	Procedure: 0x080484D4 - 0x08048503
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

/* DEST BLOCK NOT FOUND: 08048521 -> 0804855c */
/*	Procedure: 0x08048504 - 0x08048537
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
L0804851d:
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
    goto L0804851d;
}

/*	Procedure: 0x08048538 - 0x0804855B
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

/*	Procedure: 0x0804855C - 0x08048576
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L08048566();
    (restore)ebx;
    ebx = ebx + 4438;
    return(__do_global_dtors_aux());
}

extern /* addr: 08048577 */  /*	Procedure: 0x08048577 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048577()
/* address  size  */
/* 0x08048278      40 */ /* unknown */ void 	_init;
/* 0x080482a0      16 */ /* unknown */ void 	puts;
/* 0x080482b0      16 */ /* unknown */ void 	scanf;
/* 0x080482c0      16 */ /* unknown */ void 	__libc_start_main;
/* 0x080482d0      16 */ /* unknown */ void 	printf;
/* 0x080482e0      36 */ /* unknown */ void 	_start;
/* 0x08048304      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048328      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048364      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048390     324 */ /* unknown */ void 	main;
/* 0x080484d4      48 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048504      52 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048538      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804855c       0 */ /* unknown */ void 	_fini;
/* 0x08048578       4 */ /* unknown */ void 	_fp_hw;
/* 0x0804857c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080485d0       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x080485d0       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x080495d4       0 */ /* unknown */ void 	data_start;
/* 0x080495d4       0 */ /* unknown */ void 	__data_start;
/* 0x080495d8       0 */ /* unknown */ void 	__dso_handle;
/* 0x080495dc       0 */ /* unknown */ void 	p.0;
/* 0x080495e0       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x080496a8       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080496ac       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080496b0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080496b4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080496b8       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080496b8       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080496bc       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x080496dc       1 */ /* unknown */ void 	completed.1;
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
