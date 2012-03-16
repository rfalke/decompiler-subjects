/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/branch/ia32_elf_by_boomerang_linux/subject.exe'
 */

/*	Procedure: 0x0804829C - 0x080482B3
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

/*	Procedure: 0x080482B4 - 0x080482C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482B4()
{



    (save) *L0804983C;
    goto ( *L08049840);
    *eax = *eax + al;
    *eax = *eax + al;
}

/*	Procedure: 0x08048324 - 0x08048345
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L0804832e();
    (restore)ebx;
    eax = *(ebx + 5386 + 24);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x08048346 - 0x0804834F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048346()
{



}

/*	Procedure: 0x08048350 - 0x080483A2
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
        eax = 0;
        if(0 != 0) {
            *esp = __EH_FRAME_BEGIN__;
            eax = L00000000();
        }
        completed.1 = 1;
    }
}

/*	Procedure: 0x080483A3 - 0x080483AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483A3()
{



}

/*	Procedure: 0x080483B0 - 0x0804840C
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 4
 */

frame_dummy(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  ebp;



    eax = 0;
    eax = L080483bd();
    (restore)edx;
    edx = edx + 5243;
    esp = esp - 24;
    if(eax != 0) {
        A10 = edx;
        Ac = 0;
        A8 = object.2;
        *esp = __EH_FRAME_BEGIN__;
        L00000000();
    }
    eax = __JCR_LIST__;
    if(__JCR_LIST__ != 0) {
        eax = 0;
        if(0 != 0) {
            *esp = __JCR_LIST__;
            eax = L00000000();
        }
    }
}

/*	Procedure: 0x0804840D - 0x0804840F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804840D()
{



}

/*	Procedure: 0x08048410 - 0x0804865F
 *	Argument size: 8
 *	Local size: 4
 *	Save regs size: 4
 */

main(Ac, A10, A14)
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
{
	/* unknown */ void  ebx;



    esp = esp - 36;
    edx = ebp - 8;
    esp = esp & -16;
    ebx = 5;
    Ac = edx;
    *esp = 0x80486b8;
    scanf();
    Ac = ebp - 12;
    *esp = 0x80486b8;
    scanf();
    if(ebx != *(ebp - 8)) {
L0804844e:
        A10 = 10;
        Ac = 1;
        *esp = 0x80486bb;
        A14 = stdout;
        fwrite();
        eax = *(ebp - 8);
L08048476:
        if(ebx > eax) {
            A10 = 8;
            Ac = 1;
            *esp = 0x80486c6;
            A14 = stdout;
            fwrite();
            if(ebx > *(ebp - 8)) {
                goto L080484ce;
            }
        }
        A10 = 14;
        Ac = 1;
        *esp = 0x80486cf;
        A14 = stdout;
        fwrite();
        if(ebx >= *(ebp - 8)) {
L080484ce:
            A10 = 17;
            Ac = 1;
            *esp = 0x80486de;
            A14 = stdout;
            fwrite();
            if(ebx >= *(ebp - 8)) {
                goto L0804851d;
            }
        }
        A10 = 5;
        Ac = 1;
        *esp = 0x80486f0;
        A14 = stdout;
        fwrite();
L0804851d:
        if(ebx > *(ebp - 12)) {
            A10 = 17;
            Ac = 1;
            *esp = 0x80486f6;
            A14 = stdout;
            fwrite();
            if(ebx > *(ebp - 12)) {
                goto L08048576;
            }
        }
        A10 = 23;
        Ac = 1;
        *esp = 0x8048708;
        A14 = stdout;
        fwrite();
        if(ebx >= *(ebp - 12)) {
L08048576:
            A10 = 12;
            Ac = 1;
            *esp = 0x8048720;
            A14 = stdout;
            fwrite();
            if(ebx >= *(ebp - 12)) {
                goto L080485c5;
            }
        }
        A10 = 10;
        Ac = 1;
        *esp = 0x804872d;
        A14 = stdout;
        fwrite();
L080485c5:
        eax = *(ebp - 8);
        if(ebx < eax) {
            A10 = 6;
            Ac = 1;
            *esp = 0x8048738;
            A14 = stdout;
            fwrite();
            eax = *(ebp - 8);
        }
        if(ebx < eax) {
L080485f8:
            return;
        }
        A10 = 5;
        Ac = 1;
        *esp = 0x804873f;
        A14 = stdout;
        eax = fwrite();
        goto L080485f8;
    }
    A10 = 6;
    Ac = 1;
    *esp = 0x8048745;
    A14 = stdout;
    fwrite();
    eax = *(ebp - 8);
    if(ebx != eax) {
        goto L0804844e;
    }
    goto L08048476;
}

/*	Procedure: 0x08048660 - 0x0804868F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
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

/*	Procedure: 0x08048690 - 0x080486AD
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L0804869a();
    (restore)ebx;
    ebx = ebx + 4510;
    return(__do_global_dtors_aux());
}

extern /* addr: 080486AE */  /*	Procedure: 0x080486AE - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486AE()
/* address  size  */
/* 0x00000000       0 */ int	IO_stdin_used;
/* 0x0804829c      40 */ /* unknown */ void 	_init;
/* 0x080482c4      16 */ /* unknown */ void 	scanf;
/* 0x080482d4      16 */ /* unknown */ void 	__libc_start_main;
/* 0x080482e4       1 */ /* unknown */ void 	fwrite;
/* 0x08048300       0 */ /* unknown */ void 	_start;
/* 0x08048324       0 */ /* unknown */ void 	/usr/src/bs/BUILD/glibc-2.2.2/csu/init.c;
/* 0x08048324      44 */ /* unknown */ void 	call_gmon_start;
/* 0x08048350      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080483b0      96 */ /* unknown */ void 	frame_dummy;
/* 0x08048410     592 */ /* unknown */ void 	main;
/* 0x08048660      48 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048690       0 */ /* unknown */ void 	_fini;
/* 0x080486b0       4 */ /* unknown */ void 	_fp_hw;
/* 0x080486b4       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x0804974c       0 */ /* unknown */ void 	data_start;
/* 0x0804974c       0 */ /* unknown */ void 	__data_start;
/* 0x08049750       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049754       0 */ /* unknown */ void 	p.0;
/* 0x08049758       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x08049758       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804975c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049824       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049828       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804982c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049830       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049834       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049834       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049838       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049854       4 */ /* unknown */ void 	stdout;
/* 0x08049858       1 */ /* unknown */ void 	completed.1;
/* 0x0804985c      24 */ /* unknown */ void 	object.2;
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
