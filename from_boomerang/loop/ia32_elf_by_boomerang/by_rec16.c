/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/loop/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048230 - 0x08048247
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

/*	Procedure: 0x08048248 - 0x08048257
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048248()
{



    (save) *L0804951C;
    goto ( *L08049520);
    *eax = *eax + al;
    *eax = *eax + al;
}

/*	Procedure: 0x080482A4 - 0x080482C5
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    (save)eax;
    L080482ae();
    (restore)ebx;
    eax = *(ebx + 4714 + 20);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x080482C6 - 0x080482CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482C6()
{



}

/*	Procedure: 0x080482D0 - 0x08048322
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

/*	Procedure: 0x08048323 - 0x0804832F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048323()
{



}

/*	Procedure: 0x08048330 - 0x0804838C
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
    eax = L0804833d();
    (restore)edx;
    edx = edx + 4571;
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

/*	Procedure: 0x0804838D - 0x0804838F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804838D()
{



}

/*	Procedure: 0x08048390 - 0x080483CF
 *	Argument size: -20
 *	Local size: 24
 *	Save regs size: 0
 */

main(A1c)
/* unknown */ void  A1c;
{
	/* unknown */ void  Vfffffffc;



    esp = esp & -16;
    esp = esp;
    for(Vfffffffc = 0; Vfffffffc <= 9; *( & Vfffffffc) = *( & Vfffffffc) + 1) {
    }
    A1c = Vfffffffc;
    *esp = 0x8048428;
    printf();
    return(0);
}

/*	Procedure: 0x080483D0 - 0x080483FF
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

/*	Procedure: 0x08048400 - 0x0804841D
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    (save)edx;
    L0804840a();
    (restore)ebx;
    ebx = ebx + 4366;
    return(__do_global_dtors_aux());
}

extern /* addr: 0804841E */  /*	Procedure: 0x0804841E - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804841E()
/* address  size  */
/* 0x00000000       0 */ int	IO_stdin_used;
/* 0x08048230      40 */ /* unknown */ void 	_init;
/* 0x08048258      16 */ /* unknown */ void 	__libc_start_main;
/* 0x08048268       1 */ /* unknown */ void 	printf;
/* 0x08048280       0 */ /* unknown */ void 	_start;
/* 0x080482a4       0 */ /* unknown */ void 	/usr/src/bs/BUILD/glibc-2.2.2/csu/init.c;
/* 0x080482a4      44 */ /* unknown */ void 	call_gmon_start;
/* 0x080482d0      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048330      96 */ /* unknown */ void 	frame_dummy;
/* 0x08048390      64 */ /* unknown */ void 	main;
/* 0x080483d0      48 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048400       0 */ /* unknown */ void 	_fini;
/* 0x08048420       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048424       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x0804942c       0 */ /* unknown */ void 	data_start;
/* 0x0804942c       0 */ /* unknown */ void 	__data_start;
/* 0x08049430       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049434       0 */ /* unknown */ void 	p.0;
/* 0x08049438       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x08049438       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804943c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049504       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x08049508       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804950c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x08049510       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x08049514       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x08049514       0 */ /* unknown */ void 	__JCR_END__;
/* 0x08049518       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049530       1 */ /* unknown */ void 	completed.1;
/* 0x08049534      24 */ /* unknown */ void 	object.2;
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
