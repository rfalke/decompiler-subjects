/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe'
 */

/*	Procedure: 0x08048468 - 0x08048497
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L08048474();
    (restore)ebx;
    if(*(ebx + 7040 + -4) != 0) {
        L080484C8();
    }
    frame_dummy();
    __do_global_ctors_aux();
    (restore)eax;
}

/*	Procedure: 0x08048498 - 0x080484A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048498()
{



    (save) *L08049FF8;
    goto ( *L08049ffc);
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 080484b3 -> 08048498 */
/*	Procedure: 0x080484A8 - 0x080484B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484A8()
{



    goto ( *L0804a000);
    (save)0;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 080484c3 -> 08048498 */
/*	Procedure: 0x080484B8 - 0x080484C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484B8()
{



    goto ( *L0804a004);
    (save)8;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 080484d3 -> 08048498 */
/*	Procedure: 0x080484C8 - 0x080484D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484C8()
{



    goto ( *L0804a008);
    (save)16;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 080484e3 -> 08048498 */
/*	Procedure: 0x080484D8 - 0x080484E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484D8()
{



    goto ( *L0804a00c);
    (save)24;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 080484f3 -> 08048498 */
/*	Procedure: 0x080484E8 - 0x080484F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484E8()
{



    goto ( *L0804a010);
    (save)32;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048503 -> 08048498 */
/*	Procedure: 0x080484F8 - 0x08048507
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484F8()
{



    goto ( *L0804a014);
    (save)40;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048513 -> 08048498 */
/*	Procedure: 0x08048508 - 0x08048517
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048508()
{



    goto ( *L0804a018);
    (save)48;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048523 -> 08048498 */
/*	Procedure: 0x08048518 - 0x08048527
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048518()
{



    goto ( *L0804a01c);
    (save)56;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048533 -> 08048498 */
/*	Procedure: 0x08048528 - 0x08048537
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048528()
{



    goto ( *L0804a020);
    (save)64;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048543 -> 08048498 */
/*	Procedure: 0x08048538 - 0x08048547
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048538()
{



    goto ( *L0804a024);
    (save)72;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048553 -> 08048498 */
/*	Procedure: 0x08048548 - 0x08048557
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048548()
{



    goto ( *L0804a028);
    (save)80;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048563 -> 08048498 */
/*	Procedure: 0x08048558 - 0x08048567
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048558()
{



    goto ( *L0804a02c);
    (save)88;
    goto L08048498;
}

/* DEST BLOCK NOT FOUND: 08048573 -> 08048498 */
/*	Procedure: 0x08048568 - 0x08048577
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048568()
{



    goto ( *L0804a030);
    (save)96;
    goto L08048498;
}

/*	Procedure: 0x08048580 - 0x080485AF
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
    L080484D8();
    asm("hlt");
}

/*	Procedure: 0x080485B0 - 0x08048604
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;



    if(completed.7021 == 0) {
        eax = dtor_idx.7023;
        ebx = (__DTOR_END__ - __DTOR_LIST__ >> 2) - 1;
        do {
            eax = eax + 1;
            dtor_idx.7023 = eax;
            *(dtor_idx.7023 * 4 + __DTOR_LIST__)();
            eax = dtor_idx.7023;
        } while(dtor_idx.7023 < ebx);
        completed.7021 = 1;
    }
}

/*	Procedure: 0x08048605 - 0x0804860F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048605()
{



}

/*	Procedure: 0x08048610 - 0x08048632
 *	Argument size: -24
 *	Local size: 24
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

/*	Procedure: 0x08048633 - 0x08048633
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048633()
{



}

/*	Procedure: 0x08048634 - 0x080487C5
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 132
 */

dumpline(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  V0;
	/* unknown */ void  ebx;
	/* unknown */ void  Vfffffffc;



    *(ebp - 108) = A8;
    *(ebp - 12) = *%gs:0x14];
    eax = 0;
    V0 = Ac;
    Vfffffffc = 0x8048a20;
    *esp = ebp - 92;
    L080484A8();
    if(A10 > 16) {
        A10 = 16;
    }
    for(*(ebp - 96) = 0; *(ebp - 96) < A10; *(ebp - 96) = *(ebp - 96) + 1) {
        ebx = *( *(ebp - 96) + *(ebp - 108)) & 255 & 255;
        edx = *(ebp - 96);
        edx = edx + edx + edx + 9;
        V0 = ebx;
        Vfffffffc = 0x8048a27;
        *esp = ebp - 92 + edx;
        L080484A8();
    }
    while(1) {
        *(ebp - 96) :: 15;
        asm("setng al");
        *(ebp - 96) = *(ebp - 96) + 1;
        if(al == 0) {
            break;
        }
        Vfffffffc = 0x8048a2e;
        *esp = ebp - 92;
        L08048548();
    }
    *esp = ebp - 92;
    *(ebp - 100) = L08048518();
    ecx = *(ebp - 100);
    V0 = 4;
    Vfffffffc = 0x8048a32;
    *esp = ebp - 92 + ecx;
    L08048508();
    *(ebp - 100) = *(ebp - 100) + 3;
    for(*(ebp - 96) = 0; *(ebp - 96) < A10; *(ebp - 96) = *(ebp - 96) + 1) {
        eax = *(ebp - 96);
        edx = *(ebp - 100) + eax;
        eax = *( *(ebp - 96) + *(ebp - 108)) & 255;
        if(al > 31) {
            eax = *( *(ebp - 96) + *(ebp - 108)) & 255;
            if(al <= 126) {
                goto L08048747;
            }
        }
        eax = 46;
        goto L08048751;
L08048747:
        eax = *( *(ebp - 96) + *(ebp - 108)) & 255;
L08048751:
        *(ebp + edx - 92) = al;
    }
    while(*(ebp - 96) <= 15) {
        eax = *(ebp - 100);
        *(ebp + *(ebp - 96) + eax - 92) = 32;
        *(ebp - 96) = *(ebp - 96) + 1;
    }
    ecx = *(ebp - 100);
    ecx = ecx + *(ebp - 96);
    V0 = 2;
    Vfffffffc = 0x8048a36;
    *esp = ebp - 92 + ecx;
    L08048508();
    L08048558();
    eax = *(ebp - 12) ^ *%gs:0x14];
    if(!( *esp = ebp - 92)) {
        eax = L08048538();
    }
}

/*	Procedure: 0x080487C6 - 0x080488C9
 *	Argument size: 8
 *	Local size: 168
 *	Save regs size: 0
 */

hexdump(A8, Aac, Ab0, Ab4)
/* unknown */ void  A8;
/* unknown */ void  Aac;
/* unknown */ void  Ab0;
/* unknown */ void  Ab4;
{
	/* unknown */ void  Vffffff74;
	/* unknown */ void  Vffffff80;
	/* unknown */ void  Vffffffac;
	/* unknown */ void  Vffffffd8;
	/* unknown */ void  Vffffffdc;
	/* unknown */ void  Vffffffe0;
	/* unknown */ void  Vffffffe4;
	/* unknown */ void  Vfffffff4;



    Vffffff74 = A8;
    Vfffffff4 = *%gs:0x14];
    eax = 0;
    Aac = & Vffffff80;
    *esp = Vffffff74;
    if(__stat() != 0) {
        *esp = Vffffff74;
        L080484E8();
        eax = 1;
    } else {
        Aac = 0x8048a38;
        *esp = Vffffff74;
        Vffffffdc = L08048528();
        if(Vffffffdc == 0) {
            *esp = Vffffff74;
            L080484E8();
            eax = 1;
        } else {
            for(Vffffffe0 = 0; Vffffffac > Vffffffe0; Vffffffe0 = Vffffffe0 + Vffffffd8) {
                Ab4 = Vffffffdc;
                Ab0 = 16;
                Aac = 1;
                *esp = & Vffffffe4;
                Vffffffd8 = L08048568();
                if(Vffffffd8 == 0) {
                    break;
                }
                Ab0 = Vffffffd8;
                Aac = Vffffffe0;
                *esp = & Vffffffe4;
                dumpline();
            }
            *esp = Vffffffdc;
            L080484F8();
            eax = 0;
        }
    }
    edx = Vfffffff4 ^ *%gs:0x14];
    == ? L080488c8 : ;
    eax = L08048538();
}

/*	Procedure: 0x080488CA - 0x08048910
 *	Argument size: 24
 *	Local size: 0
 *	Save regs size: 0
 */

main(A8, Ac, A18, A1c)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A18;
/* unknown */ void  A1c;
{



    esp = esp & -16;
    esp = esp - 32;
    A18 = 0;
    for(A1c = 1; A1c < A8; A1c = A1c + 1) {
        *esp = *((A1c << 2) + Ac);
        A18 = A18 + hexdump();
    }
    return(A18);
}

/*	Procedure: 0x08048911 - 0x0804891F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048911()
{



}

/*	Procedure: 0x08048920 - 0x08048924
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x08048925 - 0x0804892F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048925()
{



}

/*	Procedure: 0x08048930 - 0x08048989
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vffffffe4;
	/* unknown */ void  Vffffffe8;



    __i686.get_pc_thunk.bx();
    ebx = ebx + 5817;
    esp = esp - 28;
    _init();
    edi = ebx + -232;
    eax = ebx + -232;
    edi = edi - eax >> 2;
    if(edi != 0) {
        esi = 0;
        do {
            Vffffffe8 = A10;
            Vffffffe4 = Ac;
            *esp = A8;
            eax = *(ebx + esi * 4 + -232)();
            esi = esi + 1;
        } while(esi < edi);
    }
    esp = esp + 28;
}

/*	Procedure: 0x0804898A - 0x0804898D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x0804898E - 0x0804898F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804898E()
{



}

/*	Procedure: 0x08048990 - 0x0804898F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__stat()
{



}

/*	Procedure: 0x08048990 - 0x080489C1
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 12
 */

stat(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  V0;
	/* unknown */ void  ebx;
	/* unknown */ void  Vfffffffc;



    ebx = ebx + 5717;
    *esp = 3;
    V0 = __i686.get_pc_thunk.bx();
    Vfffffffc = A8;
    return(L080484B8());
}

/*	Procedure: 0x080489C2 - 0x080489CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489C2()
{



}

/*	Procedure: 0x080489D0 - 0x080489F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    eax = __CTOR_LIST__;
    if(__CTOR_LIST__ != -1) {
        ebx = __CTOR_LIST__;
        asm("o16 nop");
        do {
            ebx = ebx - 4;
            *eax();
            eax = *ebx;
        } while(eax != -1);
    }
}

/*	Procedure: 0x080489FA - 0x080489FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489FA()
{



}

/*	Procedure: 0x080489FC - 0x08048A17
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L08048a08();
    (restore)ebx;
    ebx = ebx + 5612;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x08048A18 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fp_hw()
{



}

/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	sprintf;
/* 0x00000000       0 */ /* unknown */ void 	__xstat;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000       0 */ /* unknown */ void 	perror;
/* 0x00000000       0 */ /* unknown */ void 	fclose;
/* 0x00000000       0 */ /* unknown */ void 	memcpy;
/* 0x00000000       0 */ /* unknown */ void 	strlen;
/* 0x00000000       0 */ /* unknown */ void 	fopen;
/* 0x00000000       0 */ /* unknown */ void 	__stack_chk_fail;
/* 0x00000000       0 */ /* unknown */ void 	strcat;
/* 0x00000000       0 */ /* unknown */ void 	puts;
/* 0x00000000 134513768 */ /* unknown */ void 	fread;
/* 0x08048468     280 */ /* unknown */ void 	_init;
/* 0x08048580      48 */ /* unknown */ void 	_start;
/* 0x080485b0      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048610      36 */ /* unknown */ void 	frame_dummy;
/* 0x08048634     402 */ /* unknown */ void 	dumpline;
/* 0x080487c6     260 */ /* unknown */ void 	hexdump;
/* 0x080488ca      86 */ /* unknown */ void 	main;
/* 0x08048920      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048930      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804898a       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08048990       0 */ /* unknown */ void 	__stat;
/* 0x08048990      64 */ /* unknown */ void 	stat;
/* 0x080489d0      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080489fc       0 */ /* unknown */ void 	_fini;
/* 0x08048a18       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048a1c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048a3c       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049f0c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049f0c       0 */ /* unknown */ void 	__init_array_end;
/* 0x08049f0c       0 */ /* unknown */ void 	__init_array_start;
/* 0x08049f10       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049f14       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049f18       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049f1c       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049f1c       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049f20       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049ff4       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804a034       0 */ /* unknown */ void 	data_start;
/* 0x0804a034       0 */ /* unknown */ void 	__data_start;
/* 0x0804a038       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804a03c       1 */ /* unknown */ void 	completed.7021;
/* 0x0804a040       4 */ /* unknown */ void 	dtor_idx.7023;
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
