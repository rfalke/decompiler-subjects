/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x00010840 - 0x00010933
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
    *(edx + 1550000866) = *(edx + 1550000866) + al;
    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
    eax = al - 32 + *(esp + eax + 77857952) + 1;
    asm("adc ah,[edi]");
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("in al,0x24");
    asm("jecxz 0x108a0");
    eax = eax - *eax;
    *eax = *eax + al;
    *edi = al;
    edi = edi + 1;
    asm("adc eax,0x90800060");
    *L1B008002 = *L1B008002 + dl;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lodsd");
    eax = eax - 229507680;
    *L600DAC00 = eax;
    asm("aas");
    asm("scasb");
    asm("adc eax,0x2dab1780");
    asm("loopne 0x108a6");
    *eax = *eax - eax;
    *(edx + 1411585448) = *(edx + 1411585448) + al;
    *L05EC0000 = *L05EC0000 >> 0;
    *edi = *edi + ch;
    goto ( *(esi + -1392516331));
    eax = al | 15 | 363599744;
    asm("adc byte [0x25ec],0xc1");
    *(eax | 2818048) = *(eax | 2818048) + (eax | 2818048);
    *edi = al;
    edi = edi + 1;
    asm("adc eax,0xdaa0060");
    asm("pusha");
    asm("aas");
    *(ebp + -2146290336) = 0;
    (save)es;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(edx + 1482888618) = *(edx + 1482888618) + eax - *eax;
    eax - *eax & 16;
    *ecx = *ecx & eax - *eax;
    L9c014906();
    esp = esp & *(eax + 9469984);
    *edx = *edx + eax;
    *eax = *eax + 4;
    asm("adc [eax],al");
    *eax = *eax + eax;
    (save)ebx;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx + 64) = *(edx + 64) + al;
    *(eax + 80) = *(eax + 80) + al;
    asm("adc ah,[ecx]");
    asm("enter 0x40,0x0");
    *(eax & *ecx) = *(eax & *ecx) + (eax & *ecx);
    *(eax + -1844445168) = *(eax + -1844445168) + dl;
    asm("adc [eax],al");
    asm("adc [eax+edx+0x10961200],edx");
    *ebx = *ebx + dl;
    *(eax + 1) = *(eax + 1) + eax + 1;
    asm("adc [ecx],eax");
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    ecx = ecx - 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 + 74) = *(eax + 1 + 74) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/*	Procedure: 0x00010934 - 0x0001093D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

addem()
{



    asm("Unknown opcode 0x82");
    al = al + *eax;
    *(edx + -2130034688) = *(edx + -2130034688) | eax;
}

/*	Procedure: 0x0001093E - 0x00010942
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001093E()
{



    asm("loopne 0x10948");
}

/*	Procedure: 0x00010943 - 0x00010953
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010943()
{



    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *(edx + 2131689488) = *(edx + 2131689488) + al;
}

/*	Procedure: 0x00010954 - 0x0001095F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

passem()
{



    asm("Unknown opcode 0x82");
    asm("adc [eax],al");
    asm("movq mm7,mm7");
    (save)edi;
    asm("sahf");
    asm("adc [eax],al");
    *(ebp + -1768374301) = *(ebp + -1768374301) + ebx;
}

/*	Procedure: 0x00010960 - 0x0001098F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10922");
    asm("cwde");
    asm("xchg eax,esi");
    (restore)es;
    edi = 537956604;
    if(!(eax = eax + 169873554)) {
    }
    asm("Unknown opcode 0xff");
    asm("stc");
    asm("xchg eax,esp");
    asm("adc [eax],ah");
    *ebx = *ebx - al;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    *(ebx + 96) = *(ebx + 96) + ah;
    *(eax + 1 + 56) = *(eax + 1 + 56) + eax + 1;
    asm("rol byte [edi],cl");
    edi = -523795972;
    *(ecx + 134226152) = *(ecx + 134226152) | dl;
}

/* DEST BLOCK NOT FOUND: 00010991 -> 00010952 */
/*	Procedure: 0x00010990 - 0x000109C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10952");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *(eax + edx * 8 + -1878466557) = *(eax + edx * 8 + -1878466557) + ecx;
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("clc");
    *(eax + eax + 8389120) = *(eax + eax + 8389120) & 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lahf");
    asm("les eax,[eax]");
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    L08e109ca();
}

/* DEST BLOCK NOT FOUND: 000109c9 -> 0001098a */
/*	Procedure: 0x000109C8 - 0x000109FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1098a");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *(eax + edx * 8 + 3) = *(eax + edx * 8 + 3) + edx;
    asm("loopne 0x109e4");
    al = eax + eax | eax + eax;
    bh = bh + *edi;
    asm("cld");
    *(eax + eax + 8389120) = *(eax + eax + 8389120) & 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("lahf");
    asm("les eax,[eax]");
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    L08e10a02();
}

/*	Procedure: 0x00020A3C - 0x00020A47
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

/*	Procedure: 0x00020A48 - 0x00020A53
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

/*	Procedure: 0x00020A54 - 0x00020A5F
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

/*	Procedure: 0x00020A60 - 0x00020A6F
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
/* 0x00010840       0 */ /* unknown */ void 	_start;
/* 0x00010840       0 */ /* unknown */ void 	_ex_text0;
/* 0x00010934      32 */ /* unknown */ void 	addem;
/* 0x00010954      12 */ /* unknown */ void 	passem;
/* 0x00010960      48 */ /* unknown */ void 	main;
/* 0x00010990       0 */ /* unknown */ void 	_init;
/* 0x00010990       0 */ /* unknown */ void 	_ex_text1;
/* 0x000109c8       1 */ /* unknown */ void 	_fini;
/* 0x00010a00       0 */ /* unknown */ void 	_ex_range0;
/* 0x00010a00       0 */ /* unknown */ void 	_ex_range1;
/* 0x00010a04       4 */ /* unknown */ void 	_lib_version;
/* 0x00010a08       0 */ /* unknown */ void 	_etext;
/* 0x00020a08       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020a0c       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020a3c      12 */ /* unknown */ void 	atexit;
/* 0x00020a48      12 */ /* unknown */ void 	exit;
/* 0x00020a54      12 */ /* unknown */ void 	_exit;
/* 0x00020a60       1 */ /* unknown */ void 	printf;
/* 0x00020a70       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020b20       0 */ /* unknown */ void 	_ex_shared0;
/* 0x00020b30       0 */ /* unknown */ void 	_ex_shared1;
/* 0x00020b38       0 */ /* unknown */ void 	_environ;
/* 0x00020b38       4 */ /* unknown */ void 	environ;
/* 0x00020b3c      24 */ /* unknown */ void 	__environ_lock;
/* 0x00020b54       0 */ /* unknown */ void 	__crt_scratch;
/* 0x00020b58       0 */ /* unknown */ void 	__cg89_used;
/* 0x00020b58       0 */ /* unknown */ void 	__cg92_used;
/* 0x00020b58       4 */ /* unknown */ void 	__fnonstd_used;
/* 0x00020b5c       4 */ /* unknown */ void 	___Argv;
/* 0x00020b72       0 */ /* unknown */ void 	_end;
/* 0x00020b72       0 */ /* unknown */ void 	_edata;
/* 0x00020b72       0 */ /* unknown */ void 	_END_;
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
