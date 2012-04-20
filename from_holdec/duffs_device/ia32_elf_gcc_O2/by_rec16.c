/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe'
 */

/*	Procedure: 0x08048294 - 0x080482C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080482a0();
    (restore)ebx;
    if(*(ebx + 5844 + -4) != 0) {
        L080482D4();
    }
    frame_dummy();
    __do_global_ctors_aux();
    (restore)eax;
}

/*	Procedure: 0x080482C4 - 0x080482D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482C4()
{



    (save) *L08049978;
    goto ( *L0804997c);
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 080482df -> 080482c4 */
/*	Procedure: 0x080482D4 - 0x080482E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482D4()
{



    goto ( *L08049980);
    (save)0;
    goto L080482C4;
}

/* DEST BLOCK NOT FOUND: 080482ef -> 080482c4 */
/*	Procedure: 0x080482E4 - 0x080482F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482E4()
{



    goto ( *L08049984);
    (save)8;
    goto L080482C4;
}

/* DEST BLOCK NOT FOUND: 080482ff -> 080482c4 */
/*	Procedure: 0x080482F4 - 0x08048303
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482F4()
{



    goto ( *L08049988);
    (save)16;
    goto L080482C4;
}

/*	Procedure: 0x08048310 - 0x0804833F
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
    L080482E4();
    asm("hlt");
}

/*	Procedure: 0x08048340 - 0x08048394
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

/*	Procedure: 0x08048395 - 0x0804839F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048395()
{



}

/*	Procedure: 0x080483A0 - 0x080483C2
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

/*	Procedure: 0x080483C3 - 0x080483CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483C3()
{



}

/*	Procedure: 0x080483D0 - 0x0804846F
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

copy1_four_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{



    eax = A10;
    (save)esi;
    ecx = A8;
    (save)ebx;
    edx = Ac;
    ebx = eax + 3;
    esi = eax + 6;
    asm("cmovs ebx,esi");
    esi = eax >> 31 >> 30;
    eax = (eax + esi & 3) - esi;
    ebx = ebx >> 2;
    if(eax != 1) {
        <= ? L08048460 : ;
        if(eax != 2) {
            if(eax != 3) {
L0804840c:
                (restore)ebx;
                (restore)esi;
                return;
            }
            eax = *edx & 65535;
            edx = edx + 2;
            *ecx = ax;
            ecx = ecx + 2;
        }
L08048424:
        eax = *edx & 65535;
        edx = edx + 2;
        *ecx = ax;
        ecx = ecx + 2;
    }
    eax = *edx & 65535;
    ebx = ebx - 1;
    *ecx = ax;
    if(ebx <= 0) {
        goto L0804840c;
    }
    ecx = ecx + 2;
    edx = edx + 2;
L08048443:
    eax = *edx & 65535;
    edx = edx + 2;
    *ecx = ax;
    eax = *edx & 65535;
    ecx = ecx + 2;
    edx = edx + 2;
    *ecx = ax;
    ecx = ecx + 2;
    goto L08048424;
    if(eax == 0) {
        goto L08048443;
    }
    goto L0804840c;
}

/*	Procedure: 0x08048470 - 0x0804851F
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

copy1_eight_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{



    ecx = A10;
    (save)esi;
    edx = A8;
    (save)ebx;
    eax = Ac;
    ebx = ecx + 7;
    esi = ecx + 14;
    asm("cmovs ebx,esi");
    esi = ecx >> 31 >> 29;
    ecx = (ecx + esi & 7) - esi;
    ebx = ebx >> 3;
    if(ecx > 7) {
L080484a0:
        (restore)ebx;
        (restore)esi;
        return;
    }
    for(goto *(ecx * 4 + 0x80487b4)[L0804850b, L080484f8, L080484ec, L080484e0, L080484d4, L080484c8, L080484bc, L080484b0, ]goto ( *(ecx * 4 + 0x80487b4)); 1; edx = edx + 2) {
        ecx = *eax & 65535;
        eax = eax + 2;
        *edx = cx;
        edx = edx + 2;
        ecx = *eax & 65535;
        eax = eax + 2;
        *edx = cx;
        edx = edx + 2;
        ecx = *eax & 65535;
        eax = eax + 2;
        *edx = cx;
        edx = edx + 2;
        ecx = *eax & 65535;
        eax = eax + 2;
        *edx = cx;
        edx = edx + 2;
        ecx = *eax & 65535;
        eax = eax + 2;
        *edx = cx;
        edx = edx + 2;
        ecx = *eax & 65535;
        eax = eax + 2;
        *edx = cx;
        edx = edx + 2;
        ecx = *eax & 65535;
        ebx = ebx - 1;
        *edx = cx;
        if(ebx <= 0) {
            goto L080484a0;
        }
        edx = edx + 2;
        eax = eax + 2;
        ecx = *eax & 65535;
        eax = eax + 2;
        *edx = cx;
    }
    goto L080484b1;
}

/*	Procedure: 0x08048520 - 0x08048599
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 4
 */

copy2_four_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  esi;



    eax = A8;
    (save)ebx;
    ebx = A10;
    edx = Ac;
    if(ebx > 0) {
        esi = 8 - ebx;
        ecx = 4 - ebx;
        for(esi = esi + (ebx - 4 & -4); 1; edx = edx + 2) {
            if(ecx != 2) {
                if(ecx == 3) {
                    goto L08048589;
                }
                if(ecx != 1) {
                    ebx = *edx & 65535;
                    edx = edx + 2;
                    *eax = bx;
                    eax = eax + 2;
                }
                ebx = *edx & 65535;
                edx = edx + 2;
                *eax = bx;
                eax = eax + 2;
            }
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
L08048589:
            ebx = *edx & 65535;
            ecx = ecx + 4;
            *eax = bx;
            if(ecx == esi) {
                break;
            }
            eax = eax + 2;
        }
    }
    (restore)ebx;
}

/*	Procedure: 0x0804859A - 0x0804859F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804859A()
{



}

/*	Procedure: 0x080485A0 - 0x0804864B
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 4
 */

copy2_eight_times(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  esi;



    eax = A8;
    (save)ebx;
    ebx = A10;
    edx = Ac;
    if(ebx > 0) {
        esi = 16 - ebx;
        ecx = 8 - ebx;
        esi = esi + (ebx - 8 & -8);
        goto L08048637;
        asm("o16 nop");
        goto L080485d0;
L08048637:
        while(ecx > 7) {
L080485d0:
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
            ebx = *edx & 65535;
            edx = edx + 2;
            *eax = bx;
            eax = eax + 2;
            ebx = *edx & 65535;
            ecx = ecx + 8;
            *eax = bx;
            if(ecx == esi) {
                goto L08048648;
            }
            eax = eax + 2;
            edx = edx + 2;
        }
        goto *(ecx * 4 + 0x80487d4)[L080485d0, L080485dc, L080485e8, L080485f4, L08048600, L0804860c, L08048618, L08048624, ]goto ( *(ecx * 4 + 0x80487d4));
    }
L08048648:
    (restore)ebx;
}

/*	Procedure: 0x0804864C - 0x0804864F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804864C()
{



}

/*	Procedure: 0x08048650 - 0x080486E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vffffffe0;
	/* unknown */ void  Vffffffe4;



    esp = esp & -16;
    (save)edi;
    (save)esi;
    *esp = 200;
    *esp = 200;
    esi = L080482F4();
    eax = L080482F4();
    Vffffffe0 = esi;
    Vffffffe4 = 100;
    edi = eax;
    *esp = eax;
    copy1_four_times();
    Vffffffe0 = esi;
    *esp = edi;
    Vffffffe4 = 100;
    copy1_eight_times();
    Vffffffe0 = esi;
    *esp = edi;
    Vffffffe4 = 100;
    copy2_four_times();
    Vffffffe0 = esi;
    *esp = edi;
    Vffffffe4 = 100;
    copy2_eight_times();
    ecx = 200;
    asm("repe cmpsb");
    al = (esp = esp - 24) > 0;
    asm("setc dl");
    al = al - dl;
    esp = esp + 24;
    eax = al;
    (restore)esi;
    (restore)edi;
}

/*	Procedure: 0x080486E2 - 0x080486EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486E2()
{



}

/*	Procedure: 0x080486F0 - 0x080486F4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x080486F5 - 0x080486FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486F5()
{



}

/*	Procedure: 0x08048700 - 0x08048759
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

/*	Procedure: 0x0804875A - 0x0804875D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x0804875E - 0x0804875F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804875E()
{



}

/*	Procedure: 0x08048760 - 0x08048789
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

/*	Procedure: 0x0804878A - 0x0804878B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804878A()
{



}

/*	Procedure: 0x0804878C - 0x080487A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L08048798();
    (restore)ebx;
    ebx = ebx + 4572;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x080487A8 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fp_hw()
{



}

/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513300 */ /* unknown */ void 	malloc;
/* 0x08048294     124 */ /* unknown */ void 	_init;
/* 0x08048310      48 */ /* unknown */ void 	_start;
/* 0x08048340      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080483a0      48 */ /* unknown */ void 	frame_dummy;
/* 0x080483d0     160 */ /* unknown */ void 	copy1_four_times;
/* 0x08048470     176 */ /* unknown */ void 	copy1_eight_times;
/* 0x08048520     128 */ /* unknown */ void 	copy2_four_times;
/* 0x080485a0     176 */ /* unknown */ void 	copy2_eight_times;
/* 0x08048650     160 */ /* unknown */ void 	main;
/* 0x080486f0      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048700      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804875a       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08048760      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804878c       0 */ /* unknown */ void 	_fini;
/* 0x080487a8       4 */ /* unknown */ void 	_fp_hw;
/* 0x080487ac       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080487b0       0 */ /* unknown */ void 	__dso_handle;
/* 0x08048890       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049894       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049894       0 */ /* unknown */ void 	__init_array_end;
/* 0x08049894       0 */ /* unknown */ void 	__init_array_start;
/* 0x08049898       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804989c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080498a0       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080498a4       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080498a4       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080498a8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049974       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804998c       0 */ /* unknown */ void 	data_start;
/* 0x0804998c       0 */ /* unknown */ void 	__data_start;
/* 0x08049990       1 */ /* unknown */ void 	completed.5978;
/* 0x08049994       4 */ /* unknown */ void 	dtor_idx.5980;
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
