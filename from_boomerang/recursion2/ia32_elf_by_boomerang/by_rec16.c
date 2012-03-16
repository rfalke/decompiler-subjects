/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/recursion2/ia32_elf_by_boomerang/subject.exe'
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



    goto ( *L080497f8);
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



    goto ( *L080497fc);
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



    goto ( *L08049800);
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
    if(*(ebx + 5350 + -4) != 0) {
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

/*	Procedure: 0x0804837C - 0x080483D5
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

main()
{



    esp = esp & -16;
    esp = esp - (30 >> 4 << 4);
    ecx = 55;
    edx = 99;
    b();
    esp = esp - 4;
    (save)ecx;
    (save)edx;
    (save)0x80486e4;
    L080482B8();
    esp = esp + 16;
    esp = esp - 8;
    (save)res;
    (save)0x80486fa;
    L080482B8();
    esp = esp + 16;
    return(0);
}

/*	Procedure: 0x080483D6 - 0x08048407
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

b()
{



    b_c = b_c - 1;
    if(b_c < 0) {
        asm("xchg ecx,edx");
        c();
        asm("xchg ecx,edx");
    }
    eax = res + 2;
    res = eax;
    return(res);
}

/*	Procedure: 0x08048408 - 0x080484A5
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

c()
{



    c_d = c_d - 1;
    if(c_d < 0) {
        asm("xchg ecx,edx");
        d();
        asm("xchg ecx,edx");
    }
    c_f = c_f - 1;
    if(c_f < 0) {
        f();
    }
    c_h = c_h - 1;
    if(c_h < 0) {
        h();
    }
    c_j = c_j - 1;
    if(c_j < 0) {
        asm("xchg ecx,edx");
        j();
        asm("xchg ecx,edx");
    }
    c_l = c_l - 1;
    if(c_l < 0) {
        asm("xchg ecx,edx");
        l();
        asm("xchg ecx,edx");
    }
    eax = res + 3;
    res = eax;
    return(res);
}

/*	Procedure: 0x080484A6 - 0x080484D7
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

d()
{



    d_e = d_e - 1;
    if(d_e < 0) {
        asm("xchg ecx,edx");
        e();
        asm("xchg ecx,edx");
    }
    eax = res + 5;
    res = eax;
    return(res);
}

/*	Procedure: 0x080484D8 - 0x08048509
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

e()
{



    e_c = e_c - 1;
    if(e_c < 0) {
        asm("xchg ecx,edx");
        c();
        asm("xchg ecx,edx");
    }
    eax = res + 7;
    res = eax;
    return(res);
}

/*	Procedure: 0x0804850A - 0x08048537
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

f()
{



    f_g = f_g - 1;
    if(f_g < 0) {
        g();
    }
    eax = res + 11;
    res = eax;
    return(res);
}

/*	Procedure: 0x08048538 - 0x08048565
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

g()
{



    g_f = g_f - 1;
    if(g_f < 0) {
        f();
    }
    eax = res + 13;
    res = eax;
    return(res);
}

/*	Procedure: 0x08048566 - 0x08048593
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

h()
{



    h_i = h_i - 1;
    if(h_i < 0) {
        i();
    }
    eax = res + 17;
    res = eax;
    return(res);
}

/*	Procedure: 0x08048594 - 0x080485A5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

i()
{



    eax = res + 19;
    res = eax;
    return(res);
}

/*	Procedure: 0x080485A6 - 0x080485D7
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

j()
{



    j_k = j_k - 1;
    if(j_k < 0) {
        asm("xchg ecx,edx");
        k();
        asm("xchg ecx,edx");
    }
    eax = res + 23;
    res = eax;
    return(res);
}

/*	Procedure: 0x080485D8 - 0x0804860A
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

k()
{



    k_e = k_e - 1;
    if(k_e < 0) {
        asm("xchg ecx,edx");
        e();
        asm("xchg ecx,edx");
        edx = edx - 1;
    }
    eax = res + 27;
    res = eax;
    return(res);
}

/*	Procedure: 0x0804860B - 0x0804863C
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

l()
{



    l_b = l_b - 1;
    if(l_b < 0) {
        asm("xchg ecx,edx");
        b();
        asm("xchg ecx,edx");
    }
    eax = res + 29;
    res = eax;
    return(res);
}

/*	Procedure: 0x0804863D - 0x0804863F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804863D()
{



}

/*	Procedure: 0x08048640 - 0x0804868E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    L0804864e();
    (restore)ebx;
    ebx = ebx + 4510;
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

/*	Procedure: 0x0804868F - 0x0804868F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804868F()
{



}

/*	Procedure: 0x08048690 - 0x08048694
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x08048695 - 0x08048697
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048695()
{



}

/*	Procedure: 0x08048698 - 0x080486BC
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

/*	Procedure: 0x080486BD - 0x080486BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486BD()
{



}

/*	Procedure: 0x080486C0 - 0x080486D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

_fini()
{
	/* unknown */ void  eax;
	/* unknown */ void  ebx;



    L080486ca();
    (restore)ebx;
    ebx = ebx + 4386;
    return(__do_global_dtors_aux());
}

extern /* addr: 080486DA */  /*	Procedure: 0x080486DA - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486DA()
/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513280 */ /* unknown */ void 	printf;
/* 0x08048280      88 */ /* unknown */ void 	_init;
/* 0x080482d8      36 */ /* unknown */ void 	_start;
/* 0x080482fc      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048320      52 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048354      40 */ /* unknown */ void 	frame_dummy;
/* 0x0804837c      90 */ /* unknown */ void 	main;
/* 0x080483d6      50 */ /* unknown */ void 	b;
/* 0x08048408     158 */ /* unknown */ void 	c;
/* 0x080484a6      50 */ /* unknown */ void 	d;
/* 0x080484d8      50 */ /* unknown */ void 	e;
/* 0x0804850a      46 */ /* unknown */ void 	f;
/* 0x08048538      46 */ /* unknown */ void 	g;
/* 0x08048566      46 */ /* unknown */ void 	h;
/* 0x08048594      18 */ /* unknown */ void 	i;
/* 0x080485a6      50 */ /* unknown */ void 	j;
/* 0x080485d8      51 */ /* unknown */ void 	k;
/* 0x0804860b      53 */ /* unknown */ void 	l;
/* 0x08048640      80 */ /* unknown */ void 	__libc_csu_init;
/* 0x08048690       8 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08048698      40 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080486c0       0 */ /* unknown */ void 	_fini;
/* 0x080486dc       4 */ /* unknown */ void 	_fp_hw;
/* 0x080486e0       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08048708       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804970c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049710       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x08049714       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049718       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804971c       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0804971c       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049720       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x080497ec       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049804       0 */ /* unknown */ void 	data_start;
/* 0x08049804       0 */ /* unknown */ void 	__data_start;
/* 0x08049808       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804980c       0 */ /* unknown */ void 	p.4582;
/* 0x08049810       4 */ /* unknown */ void 	b_c;
/* 0x08049814       4 */ /* unknown */ void 	c_d;
/* 0x08049818       4 */ /* unknown */ void 	d_e;
/* 0x0804981c       4 */ /* unknown */ void 	e_c;
/* 0x08049820       4 */ /* unknown */ void 	c_f;
/* 0x08049824       4 */ /* unknown */ void 	f_g;
/* 0x08049828       4 */ /* unknown */ void 	g_f;
/* 0x0804982c       4 */ /* unknown */ void 	c_h;
/* 0x08049830       4 */ /* unknown */ void 	h_i;
/* 0x08049834       4 */ /* unknown */ void 	c_j;
/* 0x08049838       4 */ /* unknown */ void 	j_k;
/* 0x0804983c       4 */ /* unknown */ void 	k_e;
/* 0x08049840       4 */ /* unknown */ void 	c_l;
/* 0x08049844       4 */ /* unknown */ void 	l_b;
/* 0x08049848       1 */ /* unknown */ void 	completed.4583;
/* 0x0804984c       4 */ /* unknown */ void 	res;
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
