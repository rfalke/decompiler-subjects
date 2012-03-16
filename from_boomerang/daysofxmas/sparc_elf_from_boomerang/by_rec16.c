/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104D8 - 0x00010553
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    esp = -536862704;
    esp = esp + *(eax + -1610374592);
    esp = esp + 1;
    asm("pushf");
    esp = esp & *(eax + 9469984);
    *edx = *edx + eax;
    *eax = *eax + 4;
    asm("adc [eax],al");
    *eax = *eax + eax;
    ecx = ecx + 1;
    *L00000001 = al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[ecx]");
    asm("adc al,0x40");
    *(ecx - 98) = *(ecx - 98) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    asm("sti");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("adc dword [esi+0xd4d8e012],+0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    (restore)ebp;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(ecx - 109) = *(ecx - 109) + eax + 1;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *eax = *eax + al;
    *(ecx - 108) = *(ecx - 108) + eax + 1;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010555 -> 00010516 */
/*	Procedure: 0x00010554 - 0x000105AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10516");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(ecx = ecx + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345031905;
    asm("pusha");
    eax = (al | 210) + 181668032 + 1;
    *(eax + 302031010) = *(eax + 302031010) + al;
    *eax = *eax + 32;
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,dl");
    eax = eax + 47319232;
    *eax = *eax + al;
    asm("rol byte [edx],cl");
    eax = eax + 1;
    *(eax + 570450082) = *(eax + 570450082) + al;
    *eax = *eax + 13;
    asm("adc [eax],eax");
    *eax = *eax + al;
    al = *LD0080010;
    *(eax + -1627119614) = *(eax + -1627119614) + dl;
}

/*	Procedure: 0x000105AC - 0x00010603
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105AC()
{



    *(eax + eax) = *(eax + eax) << 1;
    al = al + dl;
    dl = dl + dl;
    al = al + *eax;
    *(eax + 302014626) = *(eax + 302014626) + al;
    edi = 43056127;
    *(ecx + edx) = *(ecx + edx) & al;
    *eax = *eax + al;
    *(eax + -769384430) = *(eax + -769384430) + dl;
    eax = eax + -1568667456;
    asm("pusha");
    *edx = *edx + al;
    *eax = *eax + 5;
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc ah,[eax+0x4]");
    eax = eax + 1;
    *(ecx + 112) = *(ecx + 112) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e0606();
}

/*	Procedure: 0x00010604 - 0x00010613
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105c6");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010614 - 0x00010697
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105d6");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(ecx = ecx + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311559393;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10650");
    asm("rol byte [0x400ac0],1");
    ecx = ecx + 1;
    (restore)eax;
    asm("rol byte [0x110bc0],cl");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -803446766) = *(edx + -803446766) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(ecx + 77) = *(ecx + 77) + eax + 1;
    *(eax + 1 - _START_) = *(eax + 1 - _START_) + eax + 1 - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010699 -> 0001065a */
/*	Procedure: 0x00010698 - 0x000106A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1065a");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106a9 -> 0001066a */
/*	Procedure: 0x000106A8 - 0x00010897
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x1066a");
    *(esi + -2147221216) = 0;
    eax = eax ^ *(eax + -2147475290);
    asm("cmpsb");
    *edx = *edx & al;
    *eax = *eax + al + 128;
    asm("xchg eax,esp");
    (save)es;
    al = *L00A68001;
    asm("sbb [esi],eax");
    *eax = *eax + 24;
    (save)es;
    *ecx = *ecx & al;
    asm("xchg eax,edx");
    (save)es;
    asm("aas");
    asm("in eax,0x94");
    asm("adc [eax],al");
    asm("sbb bh,[edi-0x1]");
    (save)esp;
    asm("adc [edi],bh");
    *L0020A280 = al;
    al = al & *(eax + 279996416);
    *eax = *eax & dl;
    *(esi + -2146303456) = 0;
    asm("%g mov al,0x10");
    *eax = *eax & dl;
    *(esi + -2147218336) = 0;
    al = al + 21;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc [eax+0x10b06000],al");
    *ecx = *ecx & cl;
    asm("xchg eax,edx");
    (save)es;
    asm("pusha");
    *(edx + edx + 277885089) = *(edx + edx + 277885089) + edx;
    if(!( *edx = *edx & al)) {
    }
    goto ( *esp);
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x10b05900],al");
    *eax = *eax + cl;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    asm("sbb [edi-0x1],edi");
    asm("Unknown opcode 0xff");
    asm("fist word [eax+edx+0xbf101a00]");
    asm("Unknown opcode 0xff");
    eax = Le5400dce();
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    *(edi - 1) = *(edi - 1) + bh;
    asm("Unknown opcode 0xff");
    asm("ficom dword [eax+0x90aa3f10]");
    (save)es;
    *eax = *eax | 148;
    asm("adc [eax],al");
    *(edx + -1845420016) = *(edx + -1845420016) | dl;
    if(!(al = al & *(eax + 25))) {
    }
    eax = *esp();
    asm("adc [edi],bh");
    eax & 142608016;
    asm("xchg eax,esp");
    asm("adc [eax],al");
    *(eax + 2142322448) = *(eax + 2142322448) | dl;
    asm("Unknown opcode 0xff");
    edi = edi - 1;
    asm("xchg eax,edx");
    asm("adc [edi],bh");
    asm("rep adc [edi+0xa680d5ff],bh");
    *ecx = *ecx + bl;
    (save)es;
    *eax = *eax + 25;
    *(esi + -2147221472) = 0;
    (save)es;
    asm("adc eax,0x94420000");
    asm("adc ah,[ecx+0x20109040]");
    dl = dl + *eax;
    edi = 278061567;
    *edx = *edx & al;
    asm("ror byte [esi-0x80],cl");
    *(eax + 36659362) = *(eax + 36659362) + al;
    *eax = *eax + 13;
    al = 16;
    *L00000010 = *L00000010 & 16;
    asm("adc eax,0x94420000");
    asm("adc ah,[ecx+0xffff7f48]");
    ebp = -1019277168;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *(esi + eax + -8453728) = *(esi + eax + -8453728) | dl;
    asm("Unknown opcode 0xff");
    ecx = 2101392;
    *(edx + -2147352544) = 0;
    eax = eax - 1;
    asm("adc [eax+0x10b02b00],al");
    *ecx = *ecx & al;
    *(esi + -2147043265) = 0;
    eax = eax & *(eax + 382615462);
    *eax = *eax + 27;
    asm("ror byte [esi-0x80],1");
    *(eax + 34095270) = *(eax + 34095270) + al;
    *eax = *eax + 5;
    asm("xchg eax,esp");
    (save)es;
    al = *L00109201;
    asm("sbb [eax],edx");
    edi = 277923327;
    asm("aas");
    edi = -2097151981;
    asm("rol byte [edx],1");
    asm("pusha");
    asm("lock xchg eax,esi");
    asm("adc ah,[eax-0x10]");
    bh = bh + *edi;
    *(eax + 100671650) = *(eax + 100671650) + 1;
    *eax = *eax + 9;
    *edx = *edx << 1;
    asm("pusha");
    asm("lock ror byte [esi],cl");
    al = *LE002D01F + 176;
    asm("adc [eax],al");
    edx :: 0;
    al = al - *eax;
    *(eax + 268509186) = *(eax + 268509186) + dl;
    *eax = *eax + 18;
    *edx = *edx << 1;
    asm("loopne 0x10848");
    asm("ror byte [esi-0x60],1");
    (restore)ds;
    *(eax - 33) = *(eax - 33) + eax + 1;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    edx = edx | *eax;
    *eax = *eax + 13;
    al = 16;
    *L00000010 = *L00000010 + cl;
    asm("xchg eax,esp");
    (save)es;
    al = *L201A9001;
    asm("das");
    *(eax + 1720715264) = *(eax + 1720715264) & 63;
    *eax();
    edi = 278047999;
    *ecx = *ecx + bl;
    asm("adc eax,0x90420000");
    asm("adc [eax],al");
    asm("sbb [edx+0x10180010],edx");
    edi = 311732223;
    *(ecx + -2130124601) = *(ecx + -2130124601) + *L00000188;
    eax = Lc3820892();
    asm("loopne 0x1089c");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010899 -> 0001085a */
/*	Procedure: 0x00010898 - 0x000108E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1085a");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311460066;
    asm("rol byte [0x2d008c0],cl");
    do {
    } while(*eax = *eax & bl);
    *(edx + -2147287233) = 0;
    *(eax + -1610842366) = *(eax + -1610842366) | ah;
    return;
    *( *LD0FC3F04 + 318717858) = *( *LD0FC3F04 + 318717858) + al;
    edi = 130303;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000108e9 -> 000108aa */
/*	Procedure: 0x000108E8 - 0x000108F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x108aa");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000108f9 -> 000108ba */
/*	Procedure: 0x000108F8 - 0x00010913
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x108ba");
    al = *L46FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010915 -> 000108d6 */
/*	Procedure: 0x00010914 - 0x00010927
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x108d6");
    al = *L0FFFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020B7C - 0x00020B87
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

/*	Procedure: 0x00020B88 - 0x00020B93
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

/*	Procedure: 0x00020B94 - 0x00020BC3
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
    eax = eax + *eax;
    *(eax + esi - 65) = *(eax + esi - 65) + dl;
    asm("Unknown opcode 0xff");
    goto L00000003;
    *(eax + 48) = *(eax + 48) + ah;
    edi = 124927;
    *eax = *eax + al;
    *(eax + esi - 65) = *(eax + esi - 65) + ch;
    goto ( *esp);
    *eax = *eax + eax;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x00020BC4 - 0x00020BD3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__flsbuf()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x000104d8     124 */ /* unknown */ void 	_start;
/* 0x00010554     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010604      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010614     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010698      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106a8     496 */ /* unknown */ void 	main;
/* 0x00010898      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x000108e8      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000108f8      28 */ /* unknown */ void 	_init;
/* 0x00010914       1 */ /* unknown */ void 	_fini;
/* 0x00010928       4 */ /* unknown */ void 	_lib_version;
/* 0x00010b21       0 */ /* unknown */ void 	_etext;
/* 0x00020b24       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020b4c       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020b7c      12 */ /* unknown */ void 	atexit;
/* 0x00020b88      12 */ /* unknown */ void 	exit;
/* 0x00020b94      48 */ /* unknown */ void 	_exit;
/* 0x00020bc4       1 */ /* unknown */ void 	__flsbuf;
/* 0x00020bd4       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020c90       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020c94       0 */ /* unknown */ void 	force_to_data;
/* 0x00020c98       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020c9c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020ca0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020ca4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020ca8       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020ca8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020cac       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020cac       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020cb0       0 */ /* unknown */ void 	p.0;
/* 0x00020cb4       0 */ /* unknown */ void 	_edata;
/* 0x00020cb8       1 */ /* unknown */ void 	completed.1;
/* 0x00020cbc      24 */ /* unknown */ void 	object.2;
/* 0x00020cd8       4 */ /* unknown */ void 	_environ;
/* 0x00020cd8       4 */ /* unknown */ void 	environ;
/* 0x00020ce0     320 */ /* unknown */ void 	_iob;
/* 0x00020ce0     320 */ /* unknown */ void 	__iob;
/* 0x00020e20       0 */ /* unknown */ void 	_end;
/* 0x00020e20       0 */ /* unknown */ void 	_END_;
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
