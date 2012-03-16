/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x00010538 - 0x00010617
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    esp = -536862704;
    esp = esp + *(eax + -1610374592);
    esp = esp + 1;
    asm("adc eax,[eax]");
    *(edx + 1415586530) = *(edx + 1415586530) + al;
    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
    eax = al - 32 + *(esp + eax + 77857952) + 1;
    asm("adc ah,[edi]");
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("in al,0x24");
    asm("loopne 0x105a8");
    eax = eax - *eax;
    *eax = *eax + al;
    *edi = al;
    edi = edi + 1;
    asm("adc eax,0x90800060");
    *L12008002 = *L12008002 + dl;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lodsd");
    eax = eax - 229507680;
    *L600DAC00 = eax;
    asm("aas");
    al = *esi;
    esi = esi + 1;
    asm("adc eax,0x2dab1780");
    al = *L00002916;
    asm("Unknown opcode 0x82");
    al & 21;
    *(ecx + eax * 8 + 45) = *(ecx + eax * 8 + 45) & cl;
    *eax = *eax + al;
    asm("in al,dx");
    eax = eax + 548274176;
    *edi = *edi + dl;
    asm("scasd");
    eax :: 766451680;
    asm("loopne 0x105c2");
    al = *esi;
    esi = esi + 1;
    eax = eax - 363599744;
    asm("adc byte [0x25ec],0xc1");
    eax = eax | 597426176;
    al = *L00908020;
    *edx = *edx + eax;
    *eax = *eax + 4;
    asm("adc [eax],al");
    *eax = *eax + eax;
    eax = eax + 1;
    (save)esi;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx + 64) = *(ecx + 64) + al;
    *(eax + 83) = *(eax + 83) + al;
    asm("adc ah,[edx]");
    eax = eax + 1;
    *eax = *eax + al;
    asm("sbb al,[ecx]");
    *eax = *eax + al;
    *(eax + -1844445168) = *(eax + -1844445168) + dl;
    asm("adc [eax],al");
    asm("adc [eax+edx+0x10961200],edx");
    *ebx = *ebx + dl;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *(al | 1) = *(al | 1) + (al | 1);
    *eax = *eax + al;
    eax = eax + 1;
    esp = esp - 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 + 77) = *(eax + 1 + 77) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/*	Procedure: 0x00010618 - 0x0001061F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

proc1()
{



    ebx = ebx + 579864800;
    *ecx = *ecx + cl;
}

/* DEST BLOCK NOT FOUND: 00010621 -> 000105e2 */
/*	Procedure: 0x00010620 - 0x0001063F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x105e2");
    al = *L0B201090;
    > ? L00010629 : ;
    asm("Unknown opcode 0xff");
    asm("cld");
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    al = al + 178;
    asm("adc [eax],al");
    *L40820000 = *L40820000 | al;
    *(eax + 66) = *(eax + 66) + al;
    asm("xchg eax,ecx");
    Le8595ee2();
}

/* DEST BLOCK NOT FOUND: 00010641 -> 00010602 */
/*	Procedure: 0x00010640 - 0x0001068F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10602");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    esp = esp + edx;
    asm("rol byte [ebx],1");
    asm("loopne 0x1065c");
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("clc");
    asm("loop 0x10660");
    asm("aas");
    asm("lock and byte [eax+eax+0x800200],0x4");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lahf");
    asm("les eax,[eax]");
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(eax + 33570980) = *(eax + 33570980) + al;
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lahf");
    asm("les eax,[eax+0x0]");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010691 -> 00010652 */
/*	Procedure: 0x00010690 - 0x000106DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10652");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *(eax + edx * 8 + -1878466557) = *(eax + edx * 8 + -1878466557) + eax;
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("cld");
    asm("loop 0x106b0");
    asm("aas");
    asm("hlt");
    *(eax + eax + 8389120) = *(eax + eax + 8389120) & 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lahf");
    asm("les eax,[eax]");
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(eax + 33570980) = *(eax + 33570980) + al;
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lahf");
    asm("les eax,[eax+0x0]");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0002071C - 0x00020727
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

atexit()
{



    *eax = *eax + dh;
    *(edi + 127999) = *(edi + 127999) ^ bh;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x00020728 - 0x00020733
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

exit()
{



    eax = eax + *eax;
    *(eax + esi) = *(eax + esi) + bh;
    edi = 127231;
    *eax = *eax + al;
}

/*	Procedure: 0x00020734 - 0x0002073F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_exit()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + cl;
    edi = 126463;
    *eax = *eax + al;
}

/*	Procedure: 0x00020740 - 0x0002074F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    eax = eax + *eax;
    *(eax + esi - 65) = *(eax + esi - 65) + dl;
    asm("Unknown opcode 0xff");
    goto L00000001;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x00010538       0 */ /* unknown */ void 	_start;
/* 0x00010538       0 */ /* unknown */ void 	_ex_text0;
/* 0x00010618       8 */ /* unknown */ void 	proc1;
/* 0x00010620      32 */ /* unknown */ void 	main;
/* 0x00010640       0 */ /* unknown */ void 	_init;
/* 0x00010640       0 */ /* unknown */ void 	_ex_text1;
/* 0x00010690       1 */ /* unknown */ void 	_fini;
/* 0x000106e0       0 */ /* unknown */ void 	_ex_range0;
/* 0x000106e0       0 */ /* unknown */ void 	_ex_range1;
/* 0x000106e4       4 */ /* unknown */ void 	_lib_version;
/* 0x000106e8       0 */ /* unknown */ void 	_etext;
/* 0x000206e8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000206ec       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x0002071c      12 */ /* unknown */ void 	atexit;
/* 0x00020728      12 */ /* unknown */ void 	exit;
/* 0x00020734      12 */ /* unknown */ void 	_exit;
/* 0x00020740       1 */ /* unknown */ void 	printf;
/* 0x00020750       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020818       0 */ /* unknown */ void 	_ex_shared0;
/* 0x00020828       0 */ /* unknown */ void 	_ex_shared1;
/* 0x00020830      24 */ /* unknown */ void 	__environ_lock;
/* 0x00020848       0 */ /* unknown */ void 	environ;
/* 0x00020848       4 */ /* unknown */ void 	_environ;
/* 0x0002084c       4 */ /* unknown */ void 	__crt_scratch;
/* 0x00020850       4 */ /* unknown */ void 	__cg92_used;
/* 0x00020854       4 */ /* unknown */ void 	___Argv;
/* 0x0002085c       0 */ /* unknown */ void 	_edata;
/* 0x0002085c       0 */ /* unknown */ void 	_end;
/* 0x0002085c       0 */ /* unknown */ void 	_END_;
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
