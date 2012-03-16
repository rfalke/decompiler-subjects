/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/banner/ia32_elf_by_boomerang/subject.exe'
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
/*	Procedure: 0x080482E0 - 0x08048303
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
    __libc_start_main();
    asm("hlt");
}

/*	Procedure: 0x08048304 - 0x08048325
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L0804830e();
    (restore)ebx;
    eax = *(ebx + 10846 + 28);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x08048326 - 0x08048327
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048326()
{



}

/*	Procedure: 0x08048328 - 0x08048361
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
        completed.1 = 1;
    }
}

/*	Procedure: 0x08048362 - 0x08048363
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048362()
{



}

/*	Procedure: 0x08048364 - 0x0804838D
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
            eax = L00000000();
            esp = esp + 16;
        }
    }
}

/*	Procedure: 0x0804838E - 0x0804838F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804838E()
{



}

/*	Procedure: 0x08048390 - 0x0804856B
 *	Argument size: -152
 *	Local size: 152
 *	Save regs size: 0
 */

main()
{
	/* unknown */ void  Vffffff74;
	/* unknown */ void  Vffffff78;
	/* unknown */ void  Vffffff7c;
	/* unknown */ void  Vffffff80;
	/* unknown */ void  Vffffff84;
	/* unknown */ void  Vffffff88;
	/* unknown */ void  Vffffffdc;
	/* unknown */ void  Vffffffe0;
	/* unknown */ void  Vffffffe4;
	/* unknown */ void  Vffffffe8;
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;



    esp = esp & -16;
    esp = esp;
    esp = esp - 12;
    (save)12;
    esp = esp + 16;
    Vfffffff0 = malloc();
    *(Vfffffff0 + 4) = 0x8049af9;
    Vfffffff4 = 2;
    for(*( & Vfffffff0) = *( & Vfffffff0) + 4; 1; *( & Vfffffff0) = *( & Vfffffff0) + 4) {
        *( & Vfffffff4) = *( & Vfffffff4) - 1;
        if(Vfffffff4 == 0) {
            break;
        }
        esp = esp - 12;
        (save) *Vfffffff0;
        esp = esp + 16;
        Vffffffe0 = strlen();
        if(Vffffffe0 > 10) {
            Vffffffe0 = 10;
        }
        for(Vffffffec = 0; Vffffffec <= 6; *( & Vffffffec) = *( & Vffffffec) + 1) {
            for(Vffffffe8 = 0; Vffffffe8 < Vffffffe0; *( & Vffffffe8) = *( & Vffffffe8) + 1) {
                Vffffffdc = *(Vffffffe8 + *Vfffffff0) - 32;
                if(Vffffffdc < 0) {
                    Vffffffdc = 0;
                }
                for(Vffffffe4 = 0; Vffffffe4 <= 6; *( & Vffffffe4) = *( & Vffffffe4) + 1) {
                    Vffffff84 = (Vffffffe8 << 3) + & Vfffffff8 + Vffffffe4 - 112;
                    Vffffff80 = Vffffffdc;
                    if(Vffffff80 < 0) {
                        Vffffff80 = Vffffff80 + 7;
                    }
                    edx = Vffffff80 >> 3;
                    eax = (edx << 3) - edx;
                    Vffffff7c = Vffffffec + eax;
                    Vffffff78 = Vffffffdc;
                    Vffffff74 = Vffffff78;
                    if(Vffffff74 < 0) {
                        Vffffff74 = Vffffff74 + 7;
                    }
                    edx = Vffffff78 - (Vffffff74 >> 3 << 3);
                    eax = (edx << 3) - edx + Vffffffe4;
                    al = *(eax + *(Vffffff7c * 4 + glyphs));
                    *Vffffff84 = al;
                }
                *(ebp + Vffffffe8 * 8 - 113) = 32;
            }
            for(Vffffffe8 = (Vffffffe0 << 3) - 1; Vffffffe8 >= 0 && *( & Vffffff88 + Vffffffe8) == 32; *( & Vffffffe8) = *( & Vffffffe8) - 1) {
                *( & Vffffff88 + Vffffffe8) = 0;
            }
            esp = esp - 12;
            (save) & Vffffff88;
            puts();
            esp = esp + 16;
        }
        esp = esp - 12;
        (save)0x8049b04;
        puts();
        esp = esp + 16;
    }
    return(0);
}

/*	Procedure: 0x0804856C - 0x0804859B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__libc_csu_init()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    _init();
    eax = 0 >> 2;
    ebx = 0;
    if(0 < eax) {
        esi = eax;
        do {
            eax = *(ebx * 4 + 134523660)();
            ebx = ebx + 1;
        } while(ebx < esi);
    }
}

/* DEST BLOCK NOT FOUND: 080485b9 -> 080485f4 */
/*	Procedure: 0x0804859C - 0x080485CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



    (save)ebp;
    ebp = esp;
    (save)ebx;
    (save)eax;
    eax = 0 >> 2;
    eax :: 0;
    if(!(ebx = eax - 1)) {
L080485b5:
        ebx = *(ebp - 4);
        esp = ebp;
        (restore)ebp;
        goto _fini;
    }
    do {
        *(ebx * 4 + 134523660)();
        edx = ebx;
        ebx = ebx - 1;
    } while(edx != 0);
    goto L080485b5;
}

/*	Procedure: 0x080485D0 - 0x080485F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    (save)edx;
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

/*	Procedure: 0x080485F4 - 0x0804860E
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L080485fe();
    (restore)ebx;
    ebx = ebx + 10094;
    return(__do_global_dtors_aux());
}

extern /* addr: 0804860F */  /*	Procedure: 0x0804860F - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804860F()
/* address  size  */
/* 0x08048278      40 */ /* unknown */ void 	_init;
/* 0x080482a0      16 */ /* unknown */ void 	puts;
/* 0x080482b0      16 */ /* unknown */ void 	malloc;
/* 0x080482c0      16 */ /* unknown */ void 	strlen;
/* 0x080482d0      16 */ /* unknown */ void 	__libc_start_main;
/* 0x080482e0      36 */ /* unknown */ void 	_start;
/* 0x08048304      36 */ /* unknown */ void 	call_gmon_start;
/* 0x08048328      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048364      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048390     476 */ /* unknown */ void 	main;
/* 0x0804856c      48 */ /* unknown */ void 	__libc_csu_init;
/* 0x0804859c      52 */ /* unknown */ void 	__libc_csu_fini;
/* 0x080485d0      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080485f4       0 */ /* unknown */ void 	_fini;
/* 0x08048620       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048624       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08049b08       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x08049b08       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804ab20       0 */ /* unknown */ void 	data_start;
/* 0x0804ab20       0 */ /* unknown */ void 	__data_start;
/* 0x0804ab24       0 */ /* unknown */ void 	__dso_handle;
/* 0x0804ab28       0 */ /* unknown */ void 	p.0;
/* 0x0804ab40     336 */ /* unknown */ void 	glyphs;
/* 0x0804ac90       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804ad58       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804ad5c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804ad60       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804ad64       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804ad68       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0804ad68       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0804ad6c       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804ad8c       1 */ /* unknown */ void 	completed.1;
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
