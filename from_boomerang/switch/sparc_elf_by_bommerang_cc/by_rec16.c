/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe'
 */

/* DEST BLOCK NOT FOUND: 00010826 -> 000107c8 */
/*	Procedure: 0x00010800 - 0x0001090B
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
    *(edx + -1000135966) = *(edx + -1000135966) + al;
    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
    eax = al - 32 + *(esp + eax + 77857952) + 1;
    asm("adc ah,[edi]");
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("in al,0x24");
    asm("jecxz 0x107c8");
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
    asm("loopne 0x10866");
    *eax = *eax - eax;
    *(edx + -1138551384) = *(edx + -1138551384) + al;
    *L05EC0000 = *L05EC0000 >> 0;
    *edi = *edi + ch;
    goto ( *(esi + -1392516331));
    eax = al | 15 | 363599744;
    asm("adc byte [0x25ec],0xc1");
    eax = eax | 2818048;
    *eax = *eax + al;
    *edi = al;
    edi = edi + 1;
    asm("adc eax,0xdaa0060");
    asm("pusha");
    asm("aas");
    *(ebp + -2146290336) = 0;
    (save)es;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax - *eax;
    *(edx + -1067248214) = *(edx + -1067248214) + al;
    al & 16;
    *ecx = *ecx & al;
    eax = L9c0148c6();
    esp = esp & *(eax + 9469984);
    *edx = *edx + eax;
    *eax = *eax + 4;
    asm("adc [eax],al");
    *eax = *eax + eax;
    if(!(eax = eax + 1)) {
        *eax = *eax + al;
    }
    *ecx = *ecx + dl;
    *eax = *eax + al;
    edx = edx + 1;
    *(eax + 1 + 122) = *(eax + 1 + 122) + eax + 1;
    asm("adc ah,[ecx]");
    asm("clc");
    *(eax + 1) = *(eax + 1) + eax + 1;
    asm("aas");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x94110010],dl");
    asm("adc [eax],al");
    asm("adc dl,[esi+0x40130010]");
    *eax = *eax + al;
    *(al | 1) = *(al | 1) + (al | 1);
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
        *eax = *eax + al;
    }
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
        *eax = *eax + al;
    }
    *eax = *eax + al;
    *eax = *eax + al;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *(eax + eax) = *(eax + eax) + dl;
    *eax = *eax + ch;
    if(!( *eax = *eax + al)) {
    }
    *eax = *eax + al;
    *eax = *eax + al;
    *(ebp + ebx * 4 + -1834958877) = *(ebp + ebx * 4 + -1834958877) + ah;
}

/*	Procedure: 0x0001090C - 0x000109BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x108ce");
    al = *L02202692;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    ah = ah + *eax;
    asm("hlt");
    *(edx + -2145909408) = 0;
    edx = edx & *(ebx + -771596246);
    al = al + *(eax + 8);
    *eax = *eax + al;
    *eax = *eax & eax;
    *(edx + 0x10840 + 64) = *(edx + 0x10840 + 64) + al;
    *(eax + 100) = *(eax + 100) + al;
    *(ecx + -1861689145) :: al + 34;
    eax = L0022096a();
    *(edx + 64) = *(edx + 64) + al;
    *(eax + 95) = *(eax + 95) + al;
    eax = al + 34 + 1;
    edi = edi + -393148192;
    *eax = *eax & al;
    *eax = *eax & eax;
    *(edx + 64) = *(edx + 64) + al;
    *(eax + 90) = *(eax + 90) + al;
    eax = al + 34 - 1;
    edi = edi + -393148192;
    *eax = *eax & al;
    *eax = *eax & eax;
    *(edx + 64) = *(edx + 64) + al;
    *(eax + 85) = *(eax + 85) + al;
    al = al + 34;
    (save)eax;
    edi = edi + -393148192;
    *eax = *eax & al;
    *eax = *eax & eax;
    *(edx + 64) = *(edx + 64) + al;
    *(eax + 80) = *(eax + 80) + al;
    al = al + 34;
    (restore)eax;
    edi = edi + -393148192;
    *eax = *eax & al;
    *eax = *eax & eax;
    *(edx + 64) = *(edx + 64) + al;
    *(eax + 75) = *(eax + 75) + al;
    al = al + 34;
    asm("pusha");
    edi = edi + -393148192;
    *eax = *eax & al;
    *eax = *eax & eax;
    *(edx + 64) = *(edx + 64) + al;
    *(eax + 70) = *(eax + 70) + al;
    al = al + 34;
    (save)148948865;
    asm("xchg eax,ecx");
    L080109e2();
}

/* DEST BLOCK NOT FOUND: 000109c1 -> 00010982 */
/*	Procedure: 0x000109C0 - 0x000109F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10982");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    esp = esp + eax;
    asm("rol byte [ebx],1");
    asm("loopne 0x109dc");
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
    L08e109fa();
}

/* DEST BLOCK NOT FOUND: 000109f9 -> 000109ba */
/*	Procedure: 0x000109F8 - 0x00010A2F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x109ba");
    al = *L03000040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *(eax + edx * 8 + -1878466557) = *(eax + edx * 8 + -1878466557) + ecx;
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
    L08e10a32();
}

/*	Procedure: 0x00020AA4 - 0x00020AAF
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

/*	Procedure: 0x00020AB0 - 0x00020ABB
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

/*	Procedure: 0x00020ABC - 0x00020AC7
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

/*	Procedure: 0x00020AC8 - 0x00020AD7
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
/* 0x00010800       0 */ /* unknown */ void 	_start;
/* 0x00010800       0 */ /* unknown */ void 	_ex_text0;
/* 0x0001090c     180 */ /* unknown */ void 	main;
/* 0x000109c0       0 */ /* unknown */ void 	_init;
/* 0x000109c0       0 */ /* unknown */ void 	_ex_text1;
/* 0x000109f8       1 */ /* unknown */ void 	_fini;
/* 0x00010a30       0 */ /* unknown */ void 	_ex_range0;
/* 0x00010a30       0 */ /* unknown */ void 	_ex_range1;
/* 0x00010a34       4 */ /* unknown */ void 	_lib_version;
/* 0x00010a70       0 */ /* unknown */ void 	_etext;
/* 0x00020a70       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020a74       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020aa4      12 */ /* unknown */ void 	atexit;
/* 0x00020ab0      12 */ /* unknown */ void 	exit;
/* 0x00020abc      12 */ /* unknown */ void 	_exit;
/* 0x00020ac8       1 */ /* unknown */ void 	printf;
/* 0x00020ad8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020b88       0 */ /* unknown */ void 	_ex_shared0;
/* 0x00020b98       0 */ /* unknown */ void 	_ex_shared1;
/* 0x00020ba0       0 */ /* unknown */ void 	_environ;
/* 0x00020ba0       4 */ /* unknown */ void 	environ;
/* 0x00020ba4      24 */ /* unknown */ void 	__environ_lock;
/* 0x00020bbc       0 */ /* unknown */ void 	__crt_scratch;
/* 0x00020bc0       0 */ /* unknown */ void 	__cg89_used;
/* 0x00020bc0       0 */ /* unknown */ void 	__cg92_used;
/* 0x00020bc0       4 */ /* unknown */ void 	__fnonstd_used;
/* 0x00020bc4       4 */ /* unknown */ void 	___Argv;
/* 0x00020bc8       0 */ /* unknown */ void 	_end;
/* 0x00020bc8       0 */ /* unknown */ void 	_edata;
/* 0x00020bc8       0 */ /* unknown */ void 	_END_;
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
