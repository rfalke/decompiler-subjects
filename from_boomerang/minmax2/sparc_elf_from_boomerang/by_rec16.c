/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x0001054C - 0x0001061B
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
    *(edx + -866114846) = *(edx + -866114846) + al;
    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
    eax = al - 32 + *(esp + eax + 77857952) + 1;
    asm("adc ah,[edi]");
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("in al,0x24");
    asm("loopne 0x10534");
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
    ah = ah & al;
    *L05EC0000 = *L05EC0000 >> 0;
    *(esi + -1357447136) = *(esi + -1357447136) + ch;
    eax :: 766451680;
    asm("loopne 0x105d6");
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
    asm("outsd");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx + 64) = *(ecx + 64) + al;
    *(eax + 108) = *(eax + 108) + al;
    asm("adc ah,[edx]");
    asm("hlt");
    eax = eax + 1;
    *eax = *eax + al;
    *%cs:eax] = *%cs:eax] + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x94110010],dl");
    asm("adc [eax],al");
    asm("adc dl,[esi+0x40130010]");
    *eax = *eax + al;
    asm("sbb eax,[ecx]");
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    *%gs:eax] = *%gs:eax] + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *(eax + 102) = *(eax + 102) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/*	Procedure: 0x0001061C - 0x0001066F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test()
{



    asm("Unknown opcode 0x82");
    asm("adc [edi],bh");
    *(eax + -1677770992) = *(eax + -1677770992) - 1;
    ah :: *eax;
    (restore)ds;
    *(eax + 1636304960) & ah;
    *L04800884 = *L04800884 + cl;
    (restore)es;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("Unknown opcode 0x82");
    *(eax + 2) = *(eax + 2) & al;
    bl = bl + ah;
    esp = esp - 1;
    *eax & edi;
    asm("pusha");
    (restore)ds;
    asm("Unknown opcode 0x82");
    al = *L60840360;
    al = *L40088200;
    dl = dl + *(edx + -2113708032);
    asm("adc [eax],al");
    asm("cmovo eax,[eax]");
    eax = eax + 1;
    (restore)eax;
    asm("sahf");
    asm("adc [eax],al");
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *(ebp + 2141241315) = *(ebp + 2141241315) + bl;
}

/*	Procedure: 0x00010670 - 0x000106A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10632");
    al = *LEAFFFF7F;
    asm("adc [edi],bh");
    asm("sti");
    > ? L0001067d : ;
    asm("Unknown opcode 0xff");
    eax = Lfe401714();
    > ? L00010685 : ;
    goto ( *esi);
    asm("adc [eax],ah");
    *(edi - 1) = *(edi - 1) + bh;
    goto ( *esp);
    asm("adc [eax],al");
    asm("sbb [edi-0x1],bh");
    goto ( *edx);
    asm("adc [eax],ah");
    eax = eax + 148948865;
    asm("xchg eax,ecx");
    L080106c6();
}

/* DEST BLOCK NOT FOUND: 000106a5 -> 00010666 */
/*	Procedure: 0x000106A4 - 0x000106F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10666");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    eax = eax + ebp;
    asm("rol byte [ebx],1");
    asm("loopne 0x106c0");
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("clc");
    asm("loop 0x106c4");
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

/* DEST BLOCK NOT FOUND: 000106f5 -> 000106b6 */
/*	Procedure: 0x000106F4 - 0x00010743
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x106b6");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *(eax + 148898768) = *(eax + 148898768) + ebx;
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("cld");
    asm("loop 0x10714");
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

/*	Procedure: 0x00020794 - 0x0002079F
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

/*	Procedure: 0x000207A0 - 0x000207AB
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

/*	Procedure: 0x000207AC - 0x000207B7
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

/*	Procedure: 0x000207B8 - 0x000207C7
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
/* 0x0001054c       0 */ /* unknown */ void 	_start;
/* 0x0001054c       0 */ /* unknown */ void 	_ex_text0;
/* 0x0001061c      84 */ /* unknown */ void 	test;
/* 0x00010670      52 */ /* unknown */ void 	main;
/* 0x000106a4       0 */ /* unknown */ void 	_init;
/* 0x000106a4       0 */ /* unknown */ void 	_ex_text1;
/* 0x000106f4       1 */ /* unknown */ void 	_fini;
/* 0x00010744       0 */ /* unknown */ void 	_ex_range0;
/* 0x00010744       0 */ /* unknown */ void 	_ex_range1;
/* 0x00010748       4 */ /* unknown */ void 	_lib_version;
/* 0x0001075e       0 */ /* unknown */ void 	_etext;
/* 0x00020760       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020764       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020794      12 */ /* unknown */ void 	atexit;
/* 0x000207a0      12 */ /* unknown */ void 	exit;
/* 0x000207ac      12 */ /* unknown */ void 	_exit;
/* 0x000207b8       1 */ /* unknown */ void 	printf;
/* 0x000207c8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020890       0 */ /* unknown */ void 	_ex_shared0;
/* 0x000208a0       0 */ /* unknown */ void 	_ex_shared1;
/* 0x000208a8      24 */ /* unknown */ void 	__environ_lock;
/* 0x000208c0       0 */ /* unknown */ void 	environ;
/* 0x000208c0       4 */ /* unknown */ void 	_environ;
/* 0x000208c4       4 */ /* unknown */ void 	__crt_scratch;
/* 0x000208c8       4 */ /* unknown */ void 	__cg92_used;
/* 0x000208cc       4 */ /* unknown */ void 	___Argv;
/* 0x000208d0       0 */ /* unknown */ void 	_edata;
/* 0x000208d0       0 */ /* unknown */ void 	_end;
/* 0x000208d0       0 */ /* unknown */ void 	_END_;
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
