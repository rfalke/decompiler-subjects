/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/testarray2/ia32_elf_by_boomerang/subject.exe'
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



    goto ( *L08049640);
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



    goto ( *L08049644);
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
    eax = *(ebx + 4935 + -4);
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

/*	Procedure: 0x08048368 - 0x08048389
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

mid(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save) *(A8 + 2);
    (save)0x8048518;
    esp = esp + 16;
    return(L080482B0());
}

/*	Procedure: 0x0804838A - 0x080483AB
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

fst(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save) *(A8 + 10);
    (save)0x804852d;
    esp = esp + 16;
    return(L080482B0());
}

/*	Procedure: 0x080483AC - 0x08048437
 *	Argument size: -24
 *	Local size: 24
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    Vfffffff8 = 0;
    esp = esp - 12;
    (save)gca;
    mid();
    esp = esp + 16;
    esp = esp - 12;
    (save)gca - 10;
    fst();
    esp = esp + 16;
    Vfffffff4 = gca;
    for(Vfffffffc = 0; Vfffffffc <= 4; *( & Vfffffffc) = *( & Vfffffffc) + 1) {
        *( & Vfffffff8) = *( & Vfffffff8) + *Vfffffff4;
        *( & Vfffffff4) = *( & Vfffffff4) + 1;
    }
    esp = esp - 8;
    (save)Vfffffff8;
    (save)0x8048542;
    L080482B0();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x08048438 - 0x08048489
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L08048446();
    (restore)ebx;
    ebx = ebx + 4590;
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

/*	Procedure: 0x0804848A - 0x0804848B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804848A()
{



}

/*	Procedure: 0x0804848C - 0x080484CD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_fini()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L08048497();
    (restore)ebx;
    ebx = ebx + 4509;
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

/*	Procedure: 0x080484CE - 0x080484CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484CE()
{



}

/*	Procedure: 0x080484D0 - 0x080484F3
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

/*	Procedure: 0x080484F4 - 0x0804850D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    eax = L080484fd();
    (restore)ebx;
    ebx = ebx + 4407;
    return(__do_global_dtors_aux(eax));
}

extern /* addr: 0804850E */  /*	Procedure: 0x0804850E - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804850E()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513272 */ /* unknown */ void 	printf;
/* 0x08048278      72 */ /* unknown */ void 	_init;
/* 0x080482c0      36 */ /* unknown */ void 	_start;
/* 0x080482e4      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048308      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x0804833c      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048368      34 */ /* unknown */ void 	mid;
/* 0x0804838a      34 */ /* unknown */ void 	fst;
/* 0x080483ac     140 */ /* unknown */ void 	main;
/* 0x08048438      84 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804848c      68 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080484d0      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080484f4       0 */ /* unknown */ void 	_fini;
/* 0x08048510       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048514       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048550       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049554       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049558       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804955c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049560       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049564       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049564       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049568       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049634       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049648       0 */ /* unknown */ void 	data_start;
/* 0x08049648       0 */ /* unknown */ void 	__data_start;
/* 0x0804964c       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049650       0 */ /* unknown */ void 	p.0;
/* 0x08049654       5 */ /* unknown */ void 	gca;
/* 0x0804965c       1 */ /* unknown */ void 	completed.1;
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
