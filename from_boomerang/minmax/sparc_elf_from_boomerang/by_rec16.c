/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x00010534 - 0x00010603
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
    *(edx + -1939856670) = *(edx + -1939856670) + al;
    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
    eax = al - 32 + *(esp + eax + 77857952) + 1;
    asm("adc ah,[edi]");
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("in al,0x24");
    asm("loopne 0x104dc");
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
    *(ecx + eax * 8 + -335544275) = *(ecx + eax * 8 + -335544275) & al;
    eax = eax + 548274176;
    *edi = *edi + dl;
    asm("scasd");
    eax :: 766451680;
    asm("loopne 0x105be");
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
    *%gs:eax] = *%gs:eax] + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx + 64) = *(ecx + 64) + al;
    *(eax + 98) = *(eax + 98) + al;
    asm("adc ah,[edx]");
    asm("pushf");
    eax = eax + 1;
    *eax = *eax + al;
    (save)ds;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x94110010],dl");
    asm("adc [eax],al");
    asm("adc dl,[esi+0x40130010]");
    *eax = *eax + al;
    (save)es;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *(eax + 91) = *(eax + 91) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *(eax + 92) = *(eax + 92) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010605 -> 000105c6 */
/*	Procedure: 0x00010604 - 0x0001064B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x105c6");
    al = *LFE3F1084;
    *eax = dl;
    asm("aas");
    *(edi + -1877008322) = *(edi + -1877008322) + 1;
    al = *L61861880;
    *ebx = *ebx + al;
    asm("xchg cl,[edx]");
    *ebx = *ebx + al;
    asm("adc eax,[eax]");
    *(ecx - 124) = *(ecx - 124) + al;
    *(eax + 1644335107) = *(eax + 1644335107) & al;
    asm("hlt");
    asm("xchg edi,[eax]");
    *(eax + 1073758211) = *(eax + 1073758211) | *LA0A0841F + *(esi + -2080317344);
    edi = edi - 1;
    asm("xchg eax,edx");
    *(eax + -523796221) = *(eax + -523796221) + ah;
    *(ecx + -536862488) = *(ecx + -536862488) | dl;
}

/* DEST BLOCK NOT FOUND: 0001064d -> 0001060e */
/*	Procedure: 0x0001064C - 0x0001069B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1060e");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    al = al + *eax;
    asm("rol byte [ebx],1");
    asm("loopne 0x10668");
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("clc");
    asm("loop 0x1066c");
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

/* DEST BLOCK NOT FOUND: 0001069d -> 0001065e */
/*	Procedure: 0x0001069C - 0x000106EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1065e");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *(eax + 148898768) = *(eax + 148898768) + esi;
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("cld");
    asm("loop 0x106bc");
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

/*	Procedure: 0x00020754 - 0x0002075F
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

/*	Procedure: 0x00020760 - 0x0002076B
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

/*	Procedure: 0x0002076C - 0x00020777
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

/*	Procedure: 0x00020778 - 0x00020787
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
/* 0x00010534       0 */ /* unknown */ void 	_start;
/* 0x00010534       0 */ /* unknown */ void 	_ex_text0;
/* 0x00010604      72 */ /* unknown */ void 	main;
/* 0x0001064c       0 */ /* unknown */ void 	_init;
/* 0x0001064c       0 */ /* unknown */ void 	_ex_text1;
/* 0x0001069c       1 */ /* unknown */ void 	_fini;
/* 0x000106ec       0 */ /* unknown */ void 	_ex_range0;
/* 0x000106ec       0 */ /* unknown */ void 	_ex_range1;
/* 0x000106f0       4 */ /* unknown */ void 	_lib_version;
/* 0x0001071f       0 */ /* unknown */ void 	_etext;
/* 0x00020720       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020724       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020754      12 */ /* unknown */ void 	atexit;
/* 0x00020760      12 */ /* unknown */ void 	exit;
/* 0x0002076c      12 */ /* unknown */ void 	_exit;
/* 0x00020778       1 */ /* unknown */ void 	printf;
/* 0x00020788       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020850       0 */ /* unknown */ void 	_ex_shared0;
/* 0x00020860       0 */ /* unknown */ void 	_ex_shared1;
/* 0x00020868      24 */ /* unknown */ void 	__environ_lock;
/* 0x00020880       0 */ /* unknown */ void 	environ;
/* 0x00020880       4 */ /* unknown */ void 	_environ;
/* 0x00020884       4 */ /* unknown */ void 	__crt_scratch;
/* 0x00020888       4 */ /* unknown */ void 	__cg92_used;
/* 0x0002088c       4 */ /* unknown */ void 	___Argv;
/* 0x00020890       0 */ /* unknown */ void 	_edata;
/* 0x00020890       0 */ /* unknown */ void 	_end;
/* 0x00020890       0 */ /* unknown */ void 	_END_;
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
