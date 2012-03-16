/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fbranch2/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x080482C8 - 0x080482DE
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

extern /* addr: 080482DF */  /*	Procedure: 0x080482DF - 0x080482EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482DF()
/* DEST BLOCK NOT FOUND: 080482fb -> 080482e0 */
/*	Procedure: 0x080482F0 - 0x080482FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482F0()
{



    goto ( *L08049704);
    (save)0;
    goto L080482e0;
}

/* DEST BLOCK NOT FOUND: 0804830b -> 080482e0 */
/*	Procedure: 0x08048300 - 0x0804830F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048300()
{



    goto ( *L08049708);
    (save)8;
    goto L080482e0;
}

/* DEST BLOCK NOT FOUND: 0804831b -> 080482e0 */
/*	Procedure: 0x08048310 - 0x0804831F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048310()
{



    goto ( *L0804970c);
    (save)16;
    goto L080482e0;
}

/* DEST BLOCK NOT FOUND: 0804832b -> 080482e0 */
/*	Procedure: 0x08048320 - 0x0804832F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048320()
{



    goto ( *L08049710);
    (save)24;
    goto L080482e0;
}

/* DEST BLOCK NOT FOUND: 0804833b -> 080482e0 */
/*	Procedure: 0x08048330 - 0x0804833F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048330()
{



    goto ( *L08049714);
    (save)32;
    goto L080482e0;
}

/*	Procedure: 0x08048340 - 0x08048363
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
    L08048310();
    asm("hlt");
}

/*	Procedure: 0x08048364 - 0x08048387
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)ecx;
    L0804836e();
    (restore)ebx;
    if(*(ebx + 5002 + -4) != 0) {
        L08048330();
    }
    (restore)eax;
}

/*	Procedure: 0x08048388 - 0x080483B9
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.4577 == 0) {
        while(1) {
            eax = p.4576;
            edx = *p.4576;
            if(edx == 0) {
                break;
            }
            p.4576 = eax + 4;
            *edx();
        }
        completed.4577 = 1;
    }
}

/*	Procedure: 0x080483BA - 0x080483BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483BA()
{



}

/*	Procedure: 0x080483BC - 0x080483E2
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

/*	Procedure: 0x080483E3 - 0x080483E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483E3()
{



}

/*	Procedure: 0x080483E4 - 0x08048518
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
    Vfffffffc = 1084227584;
    esp = esp - 8;
    (save) & Vfffffff8;
    (save)0x80485c0;
    L08048300();
    esp = esp + 16;
    asm("fxch");
    esp = esp - 12;
    esp = esp - 8;
    *esp = Vfffffffc;
    esp = esp - 8;
    *esp = Vfffffff8;
    (save)0x80485c3;
    L08048320();
    esp = esp + 32;
    (fsave)Vfffffff8;
    (fsave)Vfffffffc;
    asm("fucompp");
    asm("fnstsw ax");
    ah = ah & 69;
    if(ah != 64) {
    } else {
        esp = esp - 12;
        (save)0x80485d5;
        L080482F0();
    }
    (fsave)Vfffffff8;
    (fsave)Vfffffffc;
    asm("fucompp");
    asm("fnstsw ax");
    ah = ah & 69 ^ 64;
    if(!(esp = esp + 16)) {
    } else {
        esp = esp - 12;
        (save)0x80485db;
        L080482F0();
        esp = esp + 16;
    }
    (fsave)Vfffffff8;
    (fsave)Vfffffffc;
    asm("fucompp");
    asm("fnstsw ax");
    if(!(ah & 69)) {
    } else {
        esp = esp - 12;
        (save)0x80485e5;
        L080482F0();
        esp = esp + 16;
    }
    (fsave)Vfffffff8;
    (fsave)Vfffffffc;
    asm("fxch");
    asm("fucompp");
    asm("fnstsw ax");
    if(!(ah & 5)) {
    } else {
        esp = esp - 12;
        (save)0x80485ed;
        L080482F0();
        esp = esp + 16;
    }
    (fsave)Vfffffff8;
    (fsave)Vfffffffc;
    asm("fucompp");
    asm("fnstsw ax");
    if(!(ah & 5)) {
    } else {
        esp = esp - 12;
        (save)0x80485fb;
        L080482F0();
        esp = esp + 16;
    }
    (fsave)Vfffffff8;
    (fsave)Vfffffffc;
    asm("fxch");
    asm("fucompp");
    asm("fnstsw ax");
    if(!(ah & 69)) {
    } else {
        esp = esp - 12;
        (save)0x804860c;
        L080482F0();
        esp = esp + 16;
    }
    return(0);
}

/*	Procedure: 0x08048519 - 0x0804851B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048519()
{



}

/*	Procedure: 0x0804851C - 0x0804856A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L0804852a();
    (restore)ebx;
    ebx = ebx + 4558;
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

/*	Procedure: 0x0804856B - 0x0804856B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804856B()
{



}

/*	Procedure: 0x0804856C - 0x08048570
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x08048571 - 0x08048573
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048571()
{



}

/*	Procedure: 0x08048574 - 0x08048598
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

/*	Procedure: 0x08048599 - 0x0804859B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048599()
{



}

/*	Procedure: 0x0804859C - 0x080485B5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

_fini()
{
	/* unknown */ void  eax;
	/* unknown */ void  ebx;



    L080485a6();
    (restore)ebx;
    ebx = ebx + 4434;
    return(__do_global_dtors_aux());
}

extern /* addr: 080485B6 */  /*	Procedure: 0x080485B6 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485B6()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	puts;
/* 0x00000000       0 */ /* unknown */ void 	scanf;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513352 */ /* unknown */ void 	printf;
/* 0x080482c8     120 */ /* unknown */ void 	_init;
/* 0x08048340      36 */ /* unknown */ void 	_start;
/* 0x08048364      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048388      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080483bc      40 */ /* unknown */ void 	frame_dummy;
/* 0x080483e4     312 */ /* unknown */ void 	main;
/* 0x0804851c      80 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804856c       8 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048574      40 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804859c       0 */ /* unknown */ void 	_fini;
/* 0x080485b8       4 */ /* unknown */ void 	_fp_hw;
/* 0x080485bc       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048614       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049618       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804961c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049620       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049624       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049628       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049628       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0804962c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x080496f8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049718       0 */ /* unknown */ void 	data_start;
/* 0x08049718       0 */ /* unknown */ void 	__data_start;
/* 0x0804971c       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049720       0 */ /* unknown */ void 	p.4576;
/* 0x08049724       1 */ /* unknown */ void 	completed.4577;
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
