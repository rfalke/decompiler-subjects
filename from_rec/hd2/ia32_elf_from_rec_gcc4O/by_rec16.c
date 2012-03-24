/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe'
 */

/*	Procedure: 0x08048450 - 0x0804847F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L0804845c();
    (restore)ebx;
    if(*(ebx + 7064 + -4) != 0) {
        L080484A0();
    }
    frame_dummy();
    __do_global_ctors_aux();
    (restore)eax;
}

/*	Procedure: 0x08048480 - 0x0804848F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048480()
{



    (save) *L08049FF8;
    goto ( *L08049ffc);
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0804849b -> 08048480 */
/*	Procedure: 0x08048490 - 0x0804849F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048490()
{



    goto ( *L0804a000);
    (save)0;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 080484ab -> 08048480 */
/*	Procedure: 0x080484A0 - 0x080484AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484A0()
{



    goto ( *L0804a004);
    (save)8;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 080484bb -> 08048480 */
/*	Procedure: 0x080484B0 - 0x080484BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484B0()
{



    goto ( *L0804a008);
    (save)16;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 080484cb -> 08048480 */
/*	Procedure: 0x080484C0 - 0x080484CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484C0()
{



    goto ( *L0804a00c);
    (save)24;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 080484db -> 08048480 */
/*	Procedure: 0x080484D0 - 0x080484DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484D0()
{



    goto ( *L0804a010);
    (save)32;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 080484eb -> 08048480 */
/*	Procedure: 0x080484E0 - 0x080484EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484E0()
{



    goto ( *L0804a014);
    (save)40;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 080484fb -> 08048480 */
/*	Procedure: 0x080484F0 - 0x080484FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484F0()
{



    goto ( *L0804a018);
    (save)48;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 0804850b -> 08048480 */
/*	Procedure: 0x08048500 - 0x0804850F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048500()
{



    goto ( *L0804a01c);
    (save)56;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 0804851b -> 08048480 */
/*	Procedure: 0x08048510 - 0x0804851F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048510()
{



    goto ( *L0804a020);
    (save)64;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 0804852b -> 08048480 */
/*	Procedure: 0x08048520 - 0x0804852F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048520()
{



    goto ( *L0804a024);
    (save)72;
    goto L08048480;
}

/* DEST BLOCK NOT FOUND: 0804853b -> 08048480 */
/*	Procedure: 0x08048530 - 0x0804853F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048530()
{



    goto ( *L0804a028);
    (save)80;
    goto L08048480;
}

/*	Procedure: 0x08048540 - 0x0804856F
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
    L080484C0();
    asm("hlt");
}

/*	Procedure: 0x08048570 - 0x080485C4
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

/*	Procedure: 0x080485C5 - 0x080485CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485C5()
{



}

/*	Procedure: 0x080485D0 - 0x080485F2
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

/*	Procedure: 0x080485F3 - 0x080485FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485F3()
{



}

/*	Procedure: 0x08048600 - 0x080487AE
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 156
 */

dumpline(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  V0;
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    ebx = A8;
    *(ebp - 28) = *%gs:0x14];
    eax = 0;
    V0 = Ac;
    Vfffffffc = 0x80489a0;
    Vfffffff8 = 80;
    Vfffffff4 = 1;
    *esp = ebp - 108;
    L08048520();
    esi = A10;
    if(esi > 16) {
        esi = 16;
    }
    edi = 1;
    if(esi > 0) {
        eax = ebp - 99;
        di = 0;
        *(ebp - 124) = esi;
        esi = ebx;
        ebx = eax;
        do {
            V0 = *(esi + edi) & 255;
            Vfffffffc = 0x80489a7;
            Vfffffff8 = -1;
            Vfffffff4 = 1;
            *esp = ebx;
            L08048520();
            edi = edi + 1;
            ebx = ebx + 3;
        } while(edi < *(ebp - 124));
        ebx = esi;
        esi = *(ebp - 124);
        if(esi > 15) {
            goto L08048779;
        }
        edi = esi + 1;
    }
    do {
        Vfffffff8 = 80;
        Vfffffff4 = 0x80489ae;
        *esp = ebp - 108;
        L080484E0();
        edi = edi + 1;
    } while(edi - 1 <= 15);
    edx = ebp - 108;
    edi = edx;
    eax = 0;
    ecx = -1;
    asm("repne scasb");
    ecx = !ecx;
    *(edx + ecx - 1) = 8134688;
    *(ebp - 124) = ecx + 2;
    if(esi <= 0) {
        esi = 0;
L080486fc:
        eax = ebp + *(ebp - 124) + esi - 108;
    } else {
L08048707:
        edx = ebp + *(ebp - 124) - 108;
        eax = 0;
        edi = ebx;
        do {
            ebx = ( *(edi + eax) & 255) - 32;
            if(bl > 94) {
                ecx = 46;
            }
            *edx = cl;
            eax = eax + 1;
            edx = edx + 1;
        } while(eax != esi);
        if(esi <= 15) {
            goto L080486fc;
        }
        goto L08048747;
    }
    do {
        *eax = 32;
        esi = esi + 1;
        eax = eax + 1;
    } while(esi <= 15);
L08048747:
    *(eax + esi + *(ebp - 124)) = 124;
    Vfffffff8 = eax;
    Vfffffff4 = 0x80489b2;
    *esp = 1;
    L080484B0();
    eax = *(ebp - 28) ^ *%gs:0x14];
    if(!(eax = ebp - 108)) {
        goto L0804879f;
L08048779:
        edx = ebp - 108;
        edi = edx;
        eax = 0;
        ecx = -1;
        asm("repne scasb");
        ecx = !ecx;
        *(edx + ecx - 1) = 8134688;
        *(ebp - 124) = ecx + 2;
        goto L08048707;
L0804879f:
        eax = L08048510();
    }
}

/*	Procedure: 0x080487AF - 0x0804889F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 156
 */

hexdump(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    ebx = A8;
    *(ebp - 28) = *%gs:0x14];
    eax = 0;
    Vfffffff8 = ebp + -132;
    Vfffffff4 = ebx;
    *esp = 3;
    if(L08048490() != 0) {
        *esp = ebx;
        L080484D0();
        eax = 1;
    } else {
        Vfffffff4 = 0x80489b6;
        *esp = ebx;
        eax = L08048500();
        *(ebp + -140) = eax;
        if(*(ebp + -140) != 0) {
            esi = 0;
            edi = ebp - 44;
            if(*(ebp - 88) != 0) {
                goto L08048832;
            }
        } else {
            *esp = ebx;
            L080484D0();
            eax = 1;
            goto L08048884;
L08048832:
            do {
                Vfffffffc = *(ebp + -140);
                Vfffffff8 = 16;
                Vfffffff4 = 1;
                *esp = edi;
                eax = L08048530();
                ebx = eax;
                if(ebx == 0) {
                    break;
                }
                Vfffffff8 = eax;
                Vfffffff4 = esi;
                *esp = edi;
                dumpline();
                esi = esi + ebx;
            } while(*(ebp - 88) > esi);
        }
        *esp = *(ebp + -140);
        L080484F0();
        eax = 0;
    }
L08048884:
    edx = *(ebp - 28) ^ *%gs:0x14];
    == ? L08048895 : ;
    eax = L08048510();
}

/*	Procedure: 0x080488A0 - 0x080488DF
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

main(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    esp = esp & -16;
    (save)edi;
    (save)Ac;
    (save)ebx;
    esp = esp - 20;
    ebx = 1;
    edi = 0;
    if(A8 > 1) {
        do {
            *esp = *(Ac + ebx * 4);
            edi = edi + hexdump();
            ebx = ebx + 1;
        } while(A8 > ebx);
    }
    eax = edi;
    esp = esp + 20;
    (restore)ebx;
    (restore)Ac;
    (restore)edi;
}

/*	Procedure: 0x080488E0 - 0x080488E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x080488E5 - 0x080488EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080488E5()
{



}

/*	Procedure: 0x080488F0 - 0x08048949
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
    ebx = ebx + 5881;
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

/*	Procedure: 0x0804894A - 0x0804894D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x0804894E - 0x0804894F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804894E()
{



}

/*	Procedure: 0x08048950 - 0x08048979
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

/*	Procedure: 0x0804897A - 0x0804897B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804897A()
{



}

/*	Procedure: 0x0804897C - 0x08048997
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L08048988();
    (restore)ebx;
    ebx = ebx + 5740;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x08048998 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fp_hw()
{



}

/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__xstat;
/* 0x00000000       0 */ /* unknown */ void 	__printf_chk;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000       0 */ /* unknown */ void 	perror;
/* 0x00000000       0 */ /* unknown */ void 	__strcat_chk;
/* 0x00000000       0 */ /* unknown */ void 	fclose;
/* 0x00000000       0 */ /* unknown */ void 	fopen;
/* 0x00000000       0 */ /* unknown */ void 	__stack_chk_fail;
/* 0x00000000       0 */ /* unknown */ void 	__sprintf_chk;
/* 0x00000000 134513744 */ /* unknown */ void 	fread;
/* 0x08048450     240 */ /* unknown */ void 	_init;
/* 0x08048540      48 */ /* unknown */ void 	_start;
/* 0x08048570      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080485d0      48 */ /* unknown */ void 	frame_dummy;
/* 0x08048600     431 */ /* unknown */ void 	dumpline;
/* 0x080487af     241 */ /* unknown */ void 	hexdump;
/* 0x080488a0      64 */ /* unknown */ void 	main;
/* 0x080488e0      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080488f0      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804894a       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08048950      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804897c       0 */ /* unknown */ void 	_fini;
/* 0x08048998       4 */ /* unknown */ void 	_fp_hw;
/* 0x0804899c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080489bc       0 */ /* unknown */ void 	__FRAME_END__;
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
/* 0x0804a02c       0 */ /* unknown */ void 	data_start;
/* 0x0804a02c       0 */ /* unknown */ void 	__data_start;
/* 0x0804a030       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804a034       1 */ /* unknown */ void 	completed.7021;
/* 0x0804a038       4 */ /* unknown */ void 	dtor_idx.7023;
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
