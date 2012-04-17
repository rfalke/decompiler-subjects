/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_385/ia32_elf/subject.exe'
 */

/*	Procedure: 0x080487FC - 0x08048812
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

extern /* addr: 08048813 */  /*	Procedure: 0x08048813 - 0x08048823
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048813()
/*	Procedure: 0x080489A4 - 0x080489C7
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
    (save)_fini;
    (save)_init;
    (save)ecx;
    (save)esi;
    (save)main;
    __libc_start_main();
    asm("hlt");
}

/*	Procedure: 0x080489C8 - 0x080489EB
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

call_gmon_start()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080489d4();
    (restore)ebx;
    eax = *(ebx + 6788 + 108);
    if(eax != 0) {
        eax = *eax();
    }
}

/*	Procedure: 0x080489EC - 0x08048A25
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

/*	Procedure: 0x08048A26 - 0x08048A27
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A26()
{



}

/*	Procedure: 0x08048A28 - 0x08048A51
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

/*	Procedure: 0x08048A52 - 0x08048A53
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A52()
{



}

/*	Procedure: 0x08048A54 - 0x08048A95
 *	Argument size: -4
 *	Local size: 8
 *	Save regs size: 0
 */

FontInit(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    Vfffffff8 = A8;
    esp = esp - 8;
    (save)Vfffffff8;
    (save)dis;
    esp = esp + 16;
    Vfffffffc = XLoadQueryFont();
    esp = esp - 4;
    (save) *(Vfffffffc + 4);
    (save)green_gc;
    (save)dis;
    esp = esp + 16;
    return(XSetFont());
}

/*	Procedure: 0x08048A96 - 0x08048A97
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A96()
{



}

/*	Procedure: 0x08048A98 - 0x08048B13
 *	Argument size: -4
 *	Local size: 24
 *	Save regs size: 0
 */

XPrint(A8, Ac, A10, A14, A18)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
{
	/* unknown */ void  Vffffffe8;
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vffffffee;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    Vfffffff8 = A8;
    Vfffffffc = Ac;
    Vfffffff0 = A10;
    Vfffffff4 = A14;
    esp = esp - 4;
    esp = esp - 8;
    (save)A18;
    esp = esp + 12;
    (save)strlen();
    (save)A18;
    asm("fnstcw [ebp-0x12]");
    ax = Vffffffee;
    Vffffffec = 12;
    asm("fldcw [ebp-0x14]");
    Vffffffe8 = Vfffffff0;
    asm("fldcw [ebp-0x12]");
    (save)Vffffffe8;
    asm("fldcw [ebp-0x14]");
    Vffffffe8 = Vfffffff8;
    asm("fldcw [ebp-0x12]");
    (save)Vffffffe8;
    (save)green_gc;
    (save)win;
    (save)dis;
    esp = esp + 32;
    return(XDrawString());
}

/*	Procedure: 0x08048B14 - 0x08048C0B
 *	Argument size: 0
 *	Local size: 8
 *	Save regs size: 0
 */

init(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    esp = esp - 12;
    (save)0;
    esp = esp + 16;
    dis = XOpenDisplay();
    esp = esp - 12;
    (save) *( *(dis + 140) + 56);
    (save)0;
    (save)0;
    (save)Ac;
    (save)A8;
    (save)0;
    (save)0;
    (save) *( *(dis + 140) + 8);
    (save)dis;
    esp = esp + 48;
    win = XCreateSimpleWindow();
    esp = esp - 8;
    (save)win;
    (save)dis;
    XMapWindow();
    esp = esp + 16;
    colormap = *( *(dis + 140) + 48);
    green_gc = XCreateGC(dis, win, 0, 0);
    XParseColor(dis, colormap, color, green_col);
    esp = esp - 4;
    (save)green_col;
    (save)colormap;
    (save)dis;
    XAllocColor();
    esp = esp + 16;
    esp = esp - 4;
    (save)green_col;
    (save)green_gc;
    (save)dis;
    esp = esp + 16;
    return(XSetForeground());
}

/*	Procedure: 0x08048C0C - 0x08048CBD
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

MikmodInit()
{
	/* unknown */ void  Vfffffffc;



    MikMod_RegisterAllDrivers();
    MikMod_RegisterAllLoaders();
    esp = esp - 12;
    (save)0x8048e10;
    esp = esp + 16;
    if(MikMod_Init() != 0) {
        esp = esp - 4;
        esp = esp - 8;
        (save)MikMod_errno;
        esp = esp + 12;
        (save)MikMod_strerror();
        (save)0x8048e11;
        (save)stderr;
        fprintf();
        esp = esp + 16;
        esp = esp - 12;
        (save)1;
        exit();
    }
    esp = esp - 4;
    (save)0;
    (save)128;
    (save)0x8048e1d;
    esp = esp + 16;
    Vfffffffc = Player_Load();
    if(Vfffffffc == 0) {
        esp = esp - 8;
        esp = esp - 4;
        (save)MikMod_errno;
        esp = esp + 8;
        (save)MikMod_strerror();
        (save)0x8048e26;
        printf();
        esp = esp + 16;
        esp = esp - 12;
        (save)1;
        exit();
    }
    esp = esp - 12;
    (save)Vfffffffc;
    esp = esp + 16;
    return(Player_Start());
}

/*	Procedure: 0x08048CBE - 0x08048DC3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    (save)ebp;
    ebp = esp;
    esp = esp - 8;
    esp = esp & -16;
    esp = esp;
    esp = esp - 8;
    (save)100;
    (save)300;
    init();
    esp = esp + 16;
    esp = esp - 12;
    (save)0x8048e38;
    FontInit();
    esp = esp + 16;
    for(MikmodInit(); 1; MikMod_Update()) {
        esp = esp - 12;
        (save)dude;
        esp = esp - 8;
        (fsave)rut;
        asm("fdivp st1,st0");
        esp = esp - 8;
        *esp = 5.60223e-315;
        sin();
        esp = esp + 16;
        (fsave)20;
        asm("fmulp st1");
        asm("faddp st1");
        esp = esp - 8;
        *esp = 60;
        (fsave)rut;
        (fsave)3.45877e+18;
        asm("fdivp st1,st0");
        asm("fsubrp st1");
        esp = esp - 8;
        *esp = -2.35344e-185;
        XPrint();
        esp = esp + 32;
        (fsave)rut;
        asm("faddp st1");
        rut = 0.1;
        (fsave)tim;
        asm("faddp st1");
        tim = 1;
        (fsave)tim;
        (fsave)-5.71614e+47;
        asm("fxch");
        asm("fucompp");
        asm("fnstsw ax");
        if(ah & 69) {
            esp = esp - 8;
            (save)win;
            (save)dis;
            XClearWindow();
            esp = esp + 16;
            tim = 0;
        }
    }
    goto L08048cf6;
}

/*	Procedure: 0x08048DC4 - 0x08048DE7
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

/*	Procedure: 0x08048DE8 - 0x08048E04
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L08048df4();
    (restore)ebx;
    ebx = ebx + 5732;
    return(__do_global_dtors_aux());
}

extern /* addr: 08048E05 */  /*	Procedure: 0x08048E05 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048E05()
/* address  size  */
/* 0x080487fc      40 */ /* unknown */ void 	_init;
/* 0x08048824      16 */ /* unknown */ void 	XDrawString;
/* 0x08048834      16 */ /* unknown */ void 	XMapWindow;
/* 0x08048844      16 */ /* unknown */ void 	MikMod_RegisterAllLoaders;
/* 0x08048854      16 */ /* unknown */ void 	fprintf;
/* 0x08048864      16 */ /* unknown */ void 	XCreateSimpleWindow;
/* 0x08048874      16 */ /* unknown */ void 	XSetForeground;
/* 0x08048884      16 */ /* unknown */ void 	MikMod_strerror;
/* 0x08048894      16 */ /* unknown */ void 	strlen;
/* 0x080488a4      16 */ /* unknown */ void 	XParseColor;
/* 0x080488b4      16 */ /* unknown */ void 	__libc_start_main;
/* 0x080488c4      16 */ /* unknown */ void 	XLoadQueryFont;
/* 0x080488d4      16 */ /* unknown */ void 	printf;
/* 0x080488e4      16 */ /* unknown */ void 	MikMod_RegisterAllDrivers;
/* 0x080488f4      16 */ /* unknown */ void 	MikMod_Init;
/* 0x08048904      16 */ /* unknown */ void 	XAllocColor;
/* 0x08048914      16 */ /* unknown */ void 	XSetFont;
/* 0x08048924      16 */ /* unknown */ void 	exit;
/* 0x08048934      16 */ /* unknown */ void 	MikMod_Update;
/* 0x08048944      16 */ /* unknown */ void 	Player_Start;
/* 0x08048954      16 */ /* unknown */ void 	XClearWindow;
/* 0x08048964      16 */ /* unknown */ void 	Player_Load;
/* 0x08048974      16 */ /* unknown */ void 	sin;
/* 0x08048984      16 */ /* unknown */ void 	XCreateGC;
/* 0x08048994      16 */ /* unknown */ void 	XOpenDisplay;
/* 0x080489a4      36 */ /* unknown */ void 	_start;
/* 0x080489c8      36 */ /* unknown */ void 	call_gmon_start;
/* 0x080489ec      60 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048a28      44 */ /* unknown */ void 	frame_dummy;
/* 0x08048a54      68 */ /* unknown */ void 	FontInit;
/* 0x08048a98     124 */ /* unknown */ void 	XPrint;
/* 0x08048b14     248 */ /* unknown */ void 	init;
/* 0x08048c0c     178 */ /* unknown */ void 	MikmodInit;
/* 0x08048cbe     262 */ /* unknown */ void 	main;
/* 0x08048dc4      36 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x08048de8       1 */ /* unknown */ void 	_fini;
/* 0x08048e08       4 */ /* unknown */ void 	_fp_hw;
/* 0x08048e0c       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08049000       0 */ /* unknown */ void 	data_start;
/* 0x08049000       0 */ /* unknown */ void 	__data_start;
/* 0x08049004       0 */ /* unknown */ void 	__dso_handle;
/* 0x08049008       0 */ /* unknown */ void 	p.0;
/* 0x08049020    4920 */ /* unknown */ void 	dude;
/* 0x0804a358       8 */ /* unknown */ void 	color;
/* 0x0804a360       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804a364       1 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804a444       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804a448       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804a44c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804a450       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804a454       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0804a454       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0804a458       1 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804a4c8       0 */ /* unknown */ void 	__bss_start;
/* 0x0804a4c8       1 */ /* unknown */ void 	_edata;
/* 0x0804a4e0       4 */ /* unknown */ void 	stderr;
/* 0x0804a4e4       4 */ /* unknown */ void 	MikMod_errno;
/* 0x0804a4e8       1 */ /* unknown */ void 	completed.1;
/* 0x0804a500       4 */ /* unknown */ void 	green_gc;
/* 0x0804a504       4 */ /* unknown */ void 	colormap;
/* 0x0804a508      12 */ /* unknown */ void 	green_col;
/* 0x0804a514       4 */ /* unknown */ void 	win;
/* 0x0804a520      96 */ /* unknown */ void 	report;
/* 0x0804a580       4 */ /* unknown */ void 	dis;
/* 0x0804a584       4 */ /* unknown */ void 	tim;
/* 0x0804a588       4 */ /* unknown */ void 	rut;
/* 0x0804a58c       1 */ /* unknown */ void 	_end;
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
