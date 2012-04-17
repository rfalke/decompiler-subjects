/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_holdec/fibo_return_on_stack/ia32_elf/subject.exe'
 */

/*	Procedure: 0x080482D8 - 0x08048307
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080482e4();
    (restore)ebx;
    if(*(ebx + 5292 + -4) != 0) {
        L08048318();
    }
    frame_dummy();
    __do_global_ctors_aux();
    (restore)eax;
}

/*	Procedure: 0x08048308 - 0x08048317
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048308()
{



    (save) *L08049794;
    goto ( *L08049798);
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 08048323 -> 08048308 */
/*	Procedure: 0x08048318 - 0x08048327
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048318()
{



    goto ( *L0804979c);
    (save)0;
    goto L08048308;
}

/* DEST BLOCK NOT FOUND: 08048333 -> 08048308 */
/*	Procedure: 0x08048328 - 0x08048337
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048328()
{



    goto ( *L080497a0);
    (save)8;
    goto L08048308;
}

/* DEST BLOCK NOT FOUND: 08048343 -> 08048308 */
/*	Procedure: 0x08048338 - 0x08048347
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048338()
{



    goto ( *L080497a4);
    (save)16;
    goto L08048308;
}

/* DEST BLOCK NOT FOUND: 08048353 -> 08048308 */
/*	Procedure: 0x08048348 - 0x08048357
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048348()
{



    goto ( *L080497a8);
    (save)24;
    goto L08048308;
}

/*	Procedure: 0x08048360 - 0x0804838F
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
    L08048328();
    asm("hlt");
}

/*	Procedure: 0x08048390 - 0x080483E4
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

/*	Procedure: 0x080483E5 - 0x080483EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483E5()
{



}

/*	Procedure: 0x080483F0 - 0x08048412
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

/*	Procedure: 0x08048413 - 0x08048413
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048413()
{



}

/*	Procedure: 0x08048414 - 0x0804844C
 *	Argument size: 4
 *	Local size: 24
 *	Save regs size: 4
 */

fibo_normal(A20)
/* unknown */ void  A20;
{
	/* unknown */ void  ebx;



    if(A20 > 1) {
        *esp = A20 - 1;
        ebx = fibo_normal();
        *esp = A20 - 2;
        A20 = ebx + fibo_normal();
    }
}

/*	Procedure: 0x0804844D - 0x08048487
 *	Argument size: 4
 *	Local size: 24
 *	Save regs size: 4
 */

fibo_return_on_stack(A20)
/* unknown */ void  A20;
{
	/* unknown */ void  ebx;



    if(A20 > 1) {
        *esp = A20 - 1;
        fibo_return_on_stack();
        ebx = *esp;
        *esp = A20 - 2;
        fibo_return_on_stack();
        eax = ebx + *esp;
        A20 = eax;
    }
}

/*	Procedure: 0x08048488 - 0x0804849D
 *	Argument size: 4
 *	Local size: 28
 *	Save regs size: 0
 */

fibo_wrapper_return_on_stack(A20)
/* unknown */ void  A20;
{



    *esp = A20;
    fibo_return_on_stack();
    return(*esp);
}

/*	Procedure: 0x0804849E - 0x08048514
 *	Argument size: 28
 *	Local size: 0
 *	Save regs size: 0
 */

main(A4, A8, Ac, A14, A18, A1c)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A14;
/* unknown */ void  A18;
/* unknown */ void  A1c;
{



    esp = esp & -16;
    esp = esp - 32;
    *esp = 0x80485e4;
    L08048338();
    A4 = & A14;
    *esp = 0x80485f3;
    L08048348();
    *esp = A14;
    A18 = fibo_normal();
    *esp = A14;
    A1c = fibo_return_on_stack();
    Ac = A1c;
    A8 = A18;
    A4 = A14;
    *esp = 0x80485f6;
    L08048338();
    return(0);
}

/*	Procedure: 0x08048515 - 0x0804851F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048515()
{



}

/*	Procedure: 0x08048520 - 0x08048524
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x08048525 - 0x0804852F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048525()
{



}

/*	Procedure: 0x08048530 - 0x08048589
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
    ebx = ebx + 4693;
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

/*	Procedure: 0x0804858A - 0x0804858D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x0804858E - 0x0804858F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804858E()
{



}

/*	Procedure: 0x08048590 - 0x080485B9
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

/*	Procedure: 0x080485BA - 0x080485BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485BA()
{



}

/*	Procedure: 0x080485BC - 0x080485D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080485c8();
    (restore)ebx;
    ebx = ebx + 4552;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x080485D8 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fp_hw()
{



}

/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000       0 */ /* unknown */ void 	printf;
/* 0x00000000 134513368 */ /* unknown */ void 	__isoc99_scanf;
/* 0x080482d8     136 */ /* unknown */ void 	_init;
/* 0x08048360      48 */ /* unknown */ void 	_start;
/* 0x08048390      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080483f0      36 */ /* unknown */ void 	frame_dummy;
/* 0x08048414      57 */ /* unknown */ void 	fibo_normal;
/* 0x0804844d      59 */ /* unknown */ void 	fibo_return_on_stack;
/* 0x08048488      22 */ /* unknown */ void 	fibo_wrapper_return_on_stack;
/* 0x0804849e     130 */ /* unknown */ void 	main;
/* 0x08048520      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048530      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804858a       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x08048590      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080485bc       0 */ /* unknown */ void 	_fini;
/* 0x080485d8       4 */ /* unknown */ void 	_fp_hw;
/* 0x080485dc       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x080485e0       0 */ /* unknown */ void 	__dso_handle;
/* 0x080486ac       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x080496b0       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080496b0       0 */ /* unknown */ void 	__init_array_end;
/* 0x080496b0       0 */ /* unknown */ void 	__init_array_start;
/* 0x080496b4       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080496b8       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080496bc       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x080496c0       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x080496c0       0 */ /* unknown */ void 	__JCR_END__;
/* 0x080496c4       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049790       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x080497ac       0 */ /* unknown */ void 	data_start;
/* 0x080497ac       0 */ /* unknown */ void 	__data_start;
/* 0x080497b0       1 */ /* unknown */ void 	completed.5978;
/* 0x080497b4       4 */ /* unknown */ void 	dtor_idx.5980;
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
