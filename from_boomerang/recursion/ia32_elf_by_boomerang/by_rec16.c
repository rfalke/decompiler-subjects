/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/recursion/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048280 - 0x08048296
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

extern /* addr: 08048297 */  /*	Procedure: 0x08048297 - 0x080482A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048297()
/* DEST BLOCK NOT FOUND: 080482b3 -> 08048298 */
/*	Procedure: 0x080482A8 - 0x080482B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482A8()
{



    goto ( *L08049810);
    (save)0;
    goto L08048298;
}

/* DEST BLOCK NOT FOUND: 080482c3 -> 08048298 */
/*	Procedure: 0x080482B8 - 0x080482C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B8()
{



    goto ( *L08049814);
    (save)8;
    goto L08048298;
}

/* DEST BLOCK NOT FOUND: 080482d3 -> 08048298 */
/*	Procedure: 0x080482C8 - 0x080482D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482C8()
{



    goto ( *L08049818);
    (save)16;
    goto L08048298;
}

/*	Procedure: 0x080482D8 - 0x080482FB
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
    L080482A8();
    asm("hlt");
}

/*	Procedure: 0x080482FC - 0x0804831F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)ecx;
    L08048306();
    (restore)ebx;
    if(*(ebx + 5374 + -4) != 0) {
        L080482C8();
    }
    (restore)eax;
}

/*	Procedure: 0x08048320 - 0x08048351
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    if(completed.4583 == 0) {
        while(1) {
            eax = p.4582;
            edx = *p.4582;
            if(edx == 0) {
                break;
            }
            p.4582 = eax + 4;
            *edx();
        }
        completed.4583 = 1;
    }
}

/*	Procedure: 0x08048352 - 0x08048353
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048352()
{



}

/*	Procedure: 0x08048354 - 0x0804837A
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

/*	Procedure: 0x0804837B - 0x0804837B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804837B()
{



}

/*	Procedure: 0x0804837C - 0x080483C6
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

main(A8)
/* unknown */ void  A8;
{



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    esp = esp - 8;
    (save)A8;
    (save)0x80486ac;
    L080482B8();
    esp = esp + 16;
    eax = (A8 << 1) + A8;
    esp = esp - 12;
    (save)eax;
    b();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x080483C7 - 0x080483F1
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

b(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x80486b3;
    L080482B8();
    esp = esp + 16;
    esp = esp - 12;
    (save)A8 - 1;
    esp = esp + 16;
    return(c());
}

/*	Procedure: 0x080483F2 - 0x08048469
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

c(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x80486ba;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 <= 6) {
        eax = A8 << 2;
        goto *(eax + 0x80486c4)[L08048468, L08048468, L0804841f, L0804842e, L0804843d, L0804844c, L0804845b, ]goto ( *(eax + 0x80486c4));
        esp = esp - 12;
        (save)2;
        eax = d();
        esp = esp + 16;
        goto L08048468;
        esp = esp - 12;
        (save)3;
        eax = f();
        esp = esp + 16;
        goto L08048468;
        esp = esp - 12;
        (save)4;
        eax = h();
        esp = esp + 16;
        goto L08048468;
        esp = esp - 12;
        (save)5;
        eax = j();
        esp = esp + 16;
        goto L08048468;
        esp = esp - 12;
        (save)6;
        eax = l();
        esp = esp + 16;
    }
L08048468:
}

/*	Procedure: 0x0804846A - 0x0804849A
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

d(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x80486e0;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 > 1) {
        esp = esp - 12;
        (save)A8 - 1;
        eax = e();
        esp = esp + 16;
    }
}

/*	Procedure: 0x0804849B - 0x080484C6
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

e(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x80486e7;
    L080482B8();
    esp = esp + 16;
    esp = esp - 12;
    (save)A8 >> 1;
    esp = esp + 16;
    return(c());
}

/*	Procedure: 0x080484C7 - 0x080484F7
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

f(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x80486ee;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 > 1) {
        esp = esp - 12;
        (save)A8 - 1;
        eax = g();
        esp = esp + 16;
    }
}

/*	Procedure: 0x080484F8 - 0x08048528
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

g(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x80486f5;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 > 1) {
        esp = esp - 12;
        (save)A8 - 1;
        eax = f();
        esp = esp + 16;
    }
}

/*	Procedure: 0x08048529 - 0x08048559
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

h(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x80486fc;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 > 0) {
        esp = esp - 12;
        (save)A8 - 1;
        eax = i();
        esp = esp + 16;
    }
}

/*	Procedure: 0x0804855A - 0x08048574
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

i(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x8048703;
    esp = esp + 16;
    return(L080482B8());
}

/*	Procedure: 0x08048575 - 0x080485A3
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

j(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x804870a;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 > 1) {
        esp = esp - 12;
        (save)A8;
        eax = k();
        esp = esp + 16;
    }
}

/*	Procedure: 0x080485A4 - 0x080485D4
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

k(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x8048711;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 > 1) {
        esp = esp - 12;
        (save)A8 - 1;
        eax = e();
        esp = esp + 16;
    }
}

/*	Procedure: 0x080485D5 - 0x08048607
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

l(A8)
/* unknown */ void  A8;
{



    esp = esp - 8;
    (save)A8;
    (save)0x8048718;
    eax = L080482B8();
    esp = esp + 16;
    if(A8 > 1) {
        esp = esp - 12;
        (save)A8 + 2;
        eax = b();
        esp = esp + 16;
    }
}

/*	Procedure: 0x08048608 - 0x08048656
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L08048616();
    (restore)ebx;
    ebx = ebx + 4590;
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

/*	Procedure: 0x08048657 - 0x08048657
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048657()
{



}

/*	Procedure: 0x08048658 - 0x0804865C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x0804865D - 0x0804865F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804865D()
{



}

/*	Procedure: 0x08048660 - 0x08048684
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

/*	Procedure: 0x08048685 - 0x08048687
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048685()
{



}

/*	Procedure: 0x08048688 - 0x080486A1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

_fini()
{
	/* unknown */ void  eax;
	/* unknown */ void  ebx;



    L08048692();
    (restore)ebx;
    ebx = ebx + 4466;
    return(__do_global_dtors_aux());
}

extern /* addr: 080486A2 */  /*	Procedure: 0x080486A2 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486A2()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513280 */ /* unknown */ void 	printf;
/* 0x08048280      88 */ /* unknown */ void 	_init;
/* 0x080482d8      36 */ /* unknown */ void 	_start;
/* 0x080482fc      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048320      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048354      40 */ /* unknown */ void 	frame_dummy;
/* 0x0804837c      75 */ /* unknown */ void 	main;
/* 0x080483c7      43 */ /* unknown */ void 	b;
/* 0x080483f2     120 */ /* unknown */ void 	c;
/* 0x0804846a      49 */ /* unknown */ void 	d;
/* 0x0804849b      44 */ /* unknown */ void 	e;
/* 0x080484c7      49 */ /* unknown */ void 	f;
/* 0x080484f8      49 */ /* unknown */ void 	g;
/* 0x08048529      49 */ /* unknown */ void 	h;
/* 0x0804855a      27 */ /* unknown */ void 	i;
/* 0x08048575      47 */ /* unknown */ void 	j;
/* 0x080485a4      49 */ /* unknown */ void 	k;
/* 0x080485d5      51 */ /* unknown */ void 	l;
/* 0x08048608      80 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048658       8 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048660      40 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048688       0 */ /* unknown */ void 	_fini;
/* 0x080486a4       4 */ /* unknown */ void 	_fp_hw;
/* 0x080486a8       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048720       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x08049724       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049728       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804972c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049730       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049734       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049734       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049738       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049804       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804981c       0 */ /* unknown */ void 	data_start;
/* 0x0804981c       0 */ /* unknown */ void 	__data_start;
/* 0x08049820       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049824       0 */ /* unknown */ void 	p.4582;
/* 0x08049828       1 */ /* unknown */ void 	completed.4583;
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
