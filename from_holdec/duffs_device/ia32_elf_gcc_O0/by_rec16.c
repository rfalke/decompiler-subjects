/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe'
 */

/*	Procedure: 0x080482B4 - 0x080482E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080482c0();
    (restore)ebx;
    if(*(ebx + 6036 + -4) != 0) {
        L08048304();
    }
    frame_dummy();
    __do_global_ctors_aux();
    (restore)eax;
}

/*	Procedure: 0x080482E4 - 0x080482F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482E4()
{



    (save) *L08049A58;
    goto ( *L08049a5c);
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 080482ff -> 080482e4 */
/*	Procedure: 0x080482F4 - 0x08048303
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482F4()
{



    goto ( *L08049a60);
    (save)0;
    goto L080482E4;
}

/* DEST BLOCK NOT FOUND: 0804830f -> 080482e4 */
/*	Procedure: 0x08048304 - 0x08048313
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048304()
{



    goto ( *L08049a64);
    (save)8;
    goto L080482E4;
}

/* DEST BLOCK NOT FOUND: 0804831f -> 080482e4 */
/*	Procedure: 0x08048314 - 0x08048323
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048314()
{



    goto ( *L08049a68);
    (save)16;
    goto L080482E4;
}

/* DEST BLOCK NOT FOUND: 0804832f -> 080482e4 */
/*	Procedure: 0x08048324 - 0x08048333
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048324()
{



    goto ( *L08049a6c);
    (save)24;
    goto L080482E4;
}

/*	Procedure: 0x08048340 - 0x0804836F
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
    L08048314();
    asm("hlt");
}

/*	Procedure: 0x08048370 - 0x080483C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;



    if(completed.5978 == 0) {
        eax = dtor_idx.5980;
        ebx = (__DTOR_END__ - __DTOR_LIST__ >> 2) - 1;
        do {
            eax = eax + 1;
            dtor_idx.5980 = eax;
            *(dtor_idx.5980 * 4 + __DTOR_LIST__)();
            eax = dtor_idx.5980;
        } while(dtor_idx.5980 < ebx);
        completed.5978 = 1;
    }
}

/*	Procedure: 0x080483C5 - 0x080483CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483C5()
{



}

/*	Procedure: 0x080483D0 - 0x080483F2
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

/*	Procedure: 0x080483F3 - 0x080483F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483F3()
{



}

/*	Procedure: 0x080483F4 - 0x08048497
 *	Argument size: -4
 *	Local size: 16
 *	Save regs size: 0
 */

copy1_four_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  Vfffffffc;



    eax = A10 + 3;
    edx = eax + 3;
    eax :: 0;
    asm("cmovs eax,edx");
    Vfffffffc = eax >> 2;
    eax = A10;
    edx = eax >> 31 >> 30;
    eax = (eax + edx & 3) - edx;
    if(eax != 1) {
        if(eax <= 1) {
            if(eax == 0) {
                goto L0804843c;
            }
            goto L08048496;
        }
        if(eax != 2) {
            if(eax != 3) {
                goto L08048496;
L0804843c:
                edx = *Ac & 65535;
                *A8 = dx;
                A8 = A8 + 2;
                Ac = Ac + 2;
            }
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
        }
        edx = *Ac & 65535;
        *A8 = dx;
        A8 = A8 + 2;
        Ac = Ac + 2;
    }
    edx = *Ac & 65535;
    eax = A8;
    *eax = dx;
    A8 = A8 + 2;
    Ac = Ac + 2;
    Vfffffffc = Vfffffffc - 1;
    if(Vfffffffc > 0) {
        goto L0804843c;
    }
L08048496:
}

/*	Procedure: 0x08048498 - 0x08048585
 *	Argument size: -4
 *	Local size: 16
 *	Save regs size: 0
 */

copy1_eight_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  Vfffffffc;



    eax = A10 + 7;
    edx = eax + 7;
    eax :: 0;
    asm("cmovs eax,edx");
    eax = eax >> 3;
    Vfffffffc = eax;
    eax = A10;
    edx = eax >> 31 >> 29;
    eax = (eax + edx & 7) - edx;
    if(eax <= 7) {
        goto *(eax * 4 + 0x8048894)[L080484d6, L08048562, L0804854e, L0804853a, L08048526, L08048512, L080484fe, L080484ea, ]goto ( *(eax * 4 + 0x8048894));
        do {
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            *A8 = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            Vfffffffc = Vfffffffc - 1;
        } while(Vfffffffc > 0);
    }
}

/*	Procedure: 0x08048586 - 0x08048611
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

copy2_four_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{



    if(A10 > 0) {
        while(A10 != 0) {
            eax = 4 - A10;
            if(eax == 2) {
            } else {
                if(eax == 3) {
                    goto L080485f1;
                }
                if(eax == 1) {
                } else {
                    eax = Ac;
                    edx = *eax & 65535;
                    eax = A8;
                    *eax = dx;
                    A8 = A8 + 2;
                    Ac = Ac + 2;
                }
                eax = Ac;
                edx = *eax & 65535;
                eax = A8;
                *eax = dx;
                A8 = A8 + 2;
                Ac = Ac + 2;
            }
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
L080485f1:
            edx = *Ac & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            A10 = A10 - 4;
        }
    }
}

/*	Procedure: 0x08048612 - 0x08048703
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

copy2_eight_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{



    if(A10 > 0) {
        while(1) {
            if(A10 == 0) {
                goto L08048701;
            }
            eax = 8 - A10;
            if(eax <= 7) {
                goto *(eax * 4 + 0x80488b4)[L0804863f, L08048655, L0804866c, L08048683, L0804869a, L080486b1, L080486c8, L080486df, ]goto ( *(eax * 4 + 0x80488b4));
            }
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
L08048656:
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            eax = Ac;
            edx = *eax & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            edx = *Ac & 65535;
            eax = A8;
            *eax = dx;
            A8 = A8 + 2;
            Ac = Ac + 2;
            A10 = A10 - 8;
        }
        goto L08048656;
    }
L08048701:
}

/*	Procedure: 0x08048704 - 0x080487C2
 *	Argument size: 28
 *	Local size: 0
 *	Save regs size: 0
 */

main(A4, A8, A14, A18, A1c)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  A14;
/* unknown */ void  A18;
/* unknown */ void  A1c;
{



    esp = esp & -16;
    esp = esp - 32;
    A14 = 200;
    *esp = A14;
    A18 = L08048324();
    *esp = A14;
    A1c = L08048324();
    A8 = 100;
    A4 = A18;
    *esp = A1c;
    copy1_four_times();
    A8 = 100;
    A4 = A18;
    *esp = A1c;
    copy1_eight_times();
    A8 = 100;
    A4 = A18;
    *esp = A1c;
    copy2_four_times();
    A8 = 100;
    A4 = A18;
    *esp = A1c;
    copy2_eight_times();
    A8 = A14;
    A4 = A1c;
    *esp = A18;
    return(L080482F4());
}

/*	Procedure: 0x080487C3 - 0x080487CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080487C3()
{



}

/*	Procedure: 0x080487D0 - 0x080487D4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x080487D5 - 0x080487DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080487D5()
{



}

/*	Procedure: 0x080487E0 - 0x08048839
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
    ebx = ebx + 4713;
    esp = esp - 28;
    _init();
    edi = ebx + -224;
    eax = ebx + -224;
    edi = edi - eax >> 2;
    if(edi != 0) {
        esi = 0;
        do {
            Vffffffe8 = A10;
            Vffffffe4 = Ac;
            *esp = A8;
            eax = *(ebx + esi * 4 + -224)();
            esi = esi + 1;
        } while(esi < edi);
    }
    esp = esp + 28;
}

/*	Procedure: 0x0804883A - 0x0804883D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x0804883E - 0x0804883F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804883E()
{



}

/*	Procedure: 0x08048840 - 0x08048869
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

/*	Procedure: 0x0804886A - 0x0804886B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804886A()
{



}

/*	Procedure: 0x0804886C - 0x08048887
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L08048878();
    (restore)ebx;
    ebx = ebx + 4572;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x08048888 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fp_hw()
{



}

/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	memcmp;
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513332 */ /* unknown */ void 	malloc;
/* 0x080482b4     140 */ /* unknown */ void 	_init;
/* 0x08048340      48 */ /* unknown */ void 	_start;
/* 0x08048370      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080483d0      36 */ /* unknown */ void 	frame_dummy;
/* 0x080483f4     164 */ /* unknown */ void 	copy1_four_times;
/* 0x08048498     238 */ /* unknown */ void 	copy1_eight_times;
/* 0x08048586     140 */ /* unknown */ void 	copy2_four_times;
/* 0x08048612     242 */ /* unknown */ void 	copy2_eight_times;
/* 0x08048704     204 */ /* unknown */ void 	main;
/* 0x080487d0      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080487e0      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804883a       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08048840      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804886c       0 */ /* unknown */ void 	_fini;
/* 0x08048888       4 */ /* unknown */ void 	_fp_hw;
/* 0x0804888c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048890       0 */ /* unknown */ void 	__dso_handle;
/* 0x08048970       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049974       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049974       0 */ /* unknown */ void 	__init_array_end;
/* 0x08049974       0 */ /* unknown */ void 	__init_array_start;
/* 0x08049978       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804997c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049980       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049984       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049984       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049988       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049a54       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049a70       0 */ /* unknown */ void 	data_start;
/* 0x08049a70       0 */ /* unknown */ void 	__data_start;
/* 0x08049a74       1 */ /* unknown */ void 	completed.5978;
/* 0x08049a78       4 */ /* unknown */ void 	dtor_idx.5980;
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
