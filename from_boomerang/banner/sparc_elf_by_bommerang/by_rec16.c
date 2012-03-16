/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/banner/sparc_elf_by_bommerang/subject.exe'
 */

/*	Procedure: 0x00010534 - 0x000105AF
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
    esi = esi + 1;
    eax = ecx;
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[edx]");
    al :: 64;
    *(esi - 119) = *(esi - 119) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *ecx = *ecx + al;
    *%cs:eax] = *%cs:eax] + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    *eax = *eax + al;
    *(esi + -733945326) = dl | *edi;
    al :: 0;
    *eax = *eax + al;
    *(ebp + 1) = *(ebp + 1) + bl;
    *eax = *eax + al;
    *eax = *eax + al;
    if(!(esi = esi + 1)) {
        *eax = *eax + al;
    }
    *eax = *eax + al;
    if(!(esi = esi + 1)) {
        *eax = *eax + al;
    }
    *(ecx + -1375149885) = *(ecx + -1375149885) + al;
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 000105b1 -> 00010572 */
/*	Procedure: 0x000105B0 - 0x00010607
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10572");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(esi = esi + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345010401;
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

/*	Procedure: 0x00010608 - 0x0001065F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010608()
{



    *(eax + eax) = *(eax + eax) << 1;
    al = al + dl;
    dl = dl + dl;
    al = al + *eax;
    *(eax + 302014626) = *(eax + 302014626) + al;
    edi = 43056127;
    *(ecx + edx) = *(ecx + edx) & al;
    *eax = *eax + al;
    *(eax + -769908718) = *(eax + -769908718) + dl;
    eax = eax + -1568667456;
    asm("pusha");
    *edx = *edx + al;
    *eax = *eax + 5;
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc ah,[eax+0x4]");
    eax = eax + 1;
    *(esi + 91) = *(esi + 91) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e0662();
}

/*	Procedure: 0x00010660 - 0x0001066F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10622");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010670 - 0x000106F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10632");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(esi = esi + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311603424;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x106ac");
    asm("rol byte [0x400ac0],1");
    esi = esi + 1;
    ebx = ebx + 1;
    asm("rol byte [0x110bc0],cl");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -802922478) = *(edx + -802922478) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(esi + 56) = *(esi + 56) + eax + 1;
    *(eax + 1 - _START_) = *(eax + 1 - _START_) + eax + 1 - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106f5 -> 000106b6 */
/*	Procedure: 0x000106F4 - 0x00010703
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x106b6");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010705 -> 000106c6 */
/*	Procedure: 0x00010704 - 0x00010960
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x106c6");
    *(eax + 1074536464) = *(eax + 1074536464) & dl;
    *(esi + 48) = *(esi + 48) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    *edi = *edi << 1;
    edi = 537957096;
    al = al + 208;
    (restore)es;
    *ecx = *ecx | dl;
    *eax = *eax + al;
    edi = 1073910505;
    asm("adc ah,[ebx]");
    asm("sbb al,dl");
    al = al & *eax;
    asm("adc [eax],ah");
    dl = dl + al;
    asm("daa");
    edi = -1090006804;
    L042109d0();
    *edi = *edi << 1;
    edi = -1090006808;
    asm("in al,dx");
    bh = bh + *edi;
    *eax();
    asm("daa");
    edi = 547520748;
    *edx = *edx + dl;
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x19200],al");
    *eax = *eax + al;
    asm("rol byte [edi],1");
    edi = 184552;
    *eax = *eax + al;
    esi = esi + 1;
    asm("sbb eax,[ecx]");
    *eax = *eax + al;
    al = al + dl;
    asm("daa");
    edi = -1090006824;
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    dl = dl | al;
    asm("daa");
    edi = -1087913768;
    asm("in al,0xd0");
    (restore)es;
    (save)es;
    *(ecx + al + 128) = *(ecx + al + 128) + al + 128;
    *eax = *eax + al;
    *eax = *eax + dl;
    *eax = *eax + 119;
    *eax = *eax + eax;
    *eax = *eax + al;
    *L20A280E4 = *L20A280E4 << 191;
    asm("loopne 0x10783");
    (restore)es;
    edi = -1090006816;
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x14900],al");
    *eax = *eax + al;
    asm("rol byte [edi],1");
    edi = 185064;
    al = al + dl;
    (restore)es;
    edi = 1073909984;
    *(ecx + -1860689878) = *(ecx + -1860689878) + dl;
    (al | dl | *(al | dl)) :: *(al | dl | *(al | dl));
    asm("sbb [eax+0xd0e03f02],dl");
    asm("daa");
    *esi = *esi + dl;
    *eax = *eax + 3;
    *eax = *eax + eax;
    *eax = *eax + al;
    *L20A280D4 = *L20A280D4 << 191;
    asm("aam 0xc0");
    asm("daa");
    edi = -1090006820;
    (fsave)(frestore) + *(eax + 67772578) + *(eax + 101204130) + *(eax + 67510434);
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x12a00],al");
    *eax = *eax + al;
    asm("rol byte [edi],1");
    edi = 539661280;
    edx = edx + *(eax + -1829716217);
    al = al + *(eax + 8);
    asm("rol byte [edi],1");
    edi = 1073911516;
    *ecx = *ecx | dl;
    *eax = *eax + al;
    *(eax + -759947246) = bl;
    (restore)es;
    edi = 1614451156;
    (restore)ds;
    asm("xchg eax,ecx");
    ah = ah ^ *eax;
    asm("sbb eax,0x8400290");
    asm("xchg eax,ebx");
    ah :: *eax;
    edx = edx + *(eax + -1861681136);
    edx = edx + *(ah - *eax + -771162078);
    (restore)es;
    edi = 168164;
    *(ebp + -771612630) = *(ebp + -771612630) | edx;
    (restore)es;
    edi = 1614451156;
    (restore)ds;
    asm("xchg eax,ecx");
    ah = ah ^ *eax;
    asm("sbb eax,0x8400290");
    asm("xchg eax,ecx");
    ah :: *eax;
    edx = edx + *(ecx + -1845288918);
    al = al & *(eax + 8);
    asm("adc [eax],al");
    *(ecx + -1878843350) = *(ecx + -1878843350) | edx;
    al = al & *eax;
    edx :: 0;
    (restore)es;
    edi = 168668;
    dl = dl | *((eax | edx) + *(eax | edx) + -804765694);
    al = (al | *eax) + dl;
    bh = 0;
    asm("rol byte [edi],1");
    edi = 537039068;
    eax = eax + edx;
    asm("daa");
    edi = -4255524;
    asm("aam 0x1");
    *eax = *eax + al;
    al = al + dl;
    (restore)es;
    edi = 539661280;
    edx = edx + *(eax + -1829716217);
    al = al + *(eax + 8);
    asm("adc [eax],ah");
    al = al & dl;
    bh = bh - *(edi - 105);
    asm("rol byte [edi],1");
    edi = 537039072;
    eax = eax + edx;
    asm("daa");
    edi = -4255520;
    *L00000001 = *L00000001 + 1;
    al = al + dl;
    (restore)es;
    edi = 539660760;
    edx = edx + *(eax + -788578558);
    asm("daa");
    edi = -1090006816;
    asm("loopne 0x1087d");
    *L80160020 = al;
    *(ecx + eax) = *(ecx + eax) + al;
    *eax = *eax + al;
    *eax = *eax + dl;
    *eax = *eax + 22;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edi],cl");
    edi = -1090023200;
    asm("lock nop");
    eax = al + *eax | edx;
    bh = bh | *edi;
    asm("xchg eax,ecx");
    ah = ah - *eax;
    asm("sbb [ecx+0x8018203a],dl");
    *L80022020 = al;
    *(ecx + eax) = *(ecx + eax) + al;
    *eax = *eax + al;
    *eax = *eax + dl;
    *eax = *eax + 11;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edi],cl");
    edi = -1090023200;
    asm("lock nop");
    al + *eax :: 0;
    bh = bh - *edi;
    asm("rol byte [edi],1");
    edi = 1057132768;
    *eax();
    asm("daa");
    edi = -4255520;
    L00010961();
}

/*	Procedure: 0x00010961 - 0x000109BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010961()
{



    (restore)es;
    edi = 1157644416;
    al = *L00000001;
    asm("rol byte [edi],1");
    edi = 537039076;
    eax = eax + edx;
    asm("daa");
    edi = -4255516;
    asm("xchg eax,[ecx]");
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    edi = edi + 1;
    asm("adc ah,[ebx]");
    *eax = *eax - al;
    ebp = ebp + 1;
    asm("xchg eax,edi");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edi],1");
    edi = 537039080;
    al = al + 208;
    asm("daa");
    edi = -4255512;
    (save)1;
    *eax = *eax + al;
    *(eax + -1342169072) = *(eax + -1342169072) + dl;
    asm("adc [eax],al");
    *ecx = *ecx | al;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Lc38209ba();
    asm("loopne 0x109c4");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 000109c1 -> 00010982 */
/*	Procedure: 0x000109C0 - 0x00010A0F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10982");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(ebp = ebp + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311451873;
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

/* DEST BLOCK NOT FOUND: 00010a11 -> 000109d2 */
/*	Procedure: 0x00010A10 - 0x00010A1F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x109d2");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010a21 -> 000109e2 */
/*	Procedure: 0x00010A20 - 0x00010A3B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x109e2");
    al = *L13FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010a3d -> 000109fe */
/*	Procedure: 0x00010A3C - 0x00010A4F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x109fe");
    al = *LDCFEFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00021F84 - 0x00021F8F
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

/*	Procedure: 0x00021F90 - 0x00021F9B
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

/*	Procedure: 0x00021F9C - 0x00021FCB
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

/*	Procedure: 0x00021FCC - 0x00021FD7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

malloc()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
}

/*	Procedure: 0x00021FD8 - 0x00021FE3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

strlen()
{



    eax = eax + *eax;
    *(eax + esi + 31391679) = *(eax + esi + 31391679) + al;
    *eax = *eax + al;
    *ebx = *ebx + al;
}

/*	Procedure: 0x00021FE4 - 0x00021FF3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

puts()
{



    eax = eax + *eax;
    *(eax + -603996368) = *(eax + -603996368) + dl;
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x00010534     124 */ /* unknown */ void 	_start;
/* 0x000105b0     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010660      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010670     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106f4      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x00010704     700 */ /* unknown */ void 	main;
/* 0x000109c0      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010a10      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010a20      28 */ /* unknown */ void 	_init;
/* 0x00010a3c       1 */ /* unknown */ void 	_fini;
/* 0x00010a50       4 */ /* unknown */ void 	_lib_version;
/* 0x00011f29       0 */ /* unknown */ void 	_etext;
/* 0x00021f2c       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00021f54       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00021f84      12 */ /* unknown */ void 	atexit;
/* 0x00021f90      12 */ /* unknown */ void 	exit;
/* 0x00021f9c      48 */ /* unknown */ void 	_exit;
/* 0x00021fcc      12 */ /* unknown */ void 	malloc;
/* 0x00021fd8      12 */ /* unknown */ void 	strlen;
/* 0x00021fe4       1 */ /* unknown */ void 	puts;
/* 0x00021ff4       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000220b0       0 */ /* unknown */ void 	__dso_handle;
/* 0x000220b4     336 */ /* unknown */ void 	glyphs;
/* 0x00022204       0 */ /* unknown */ void 	force_to_data;
/* 0x00022208       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0002220c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00022210       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00022214       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00022218       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00022218       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0002221c       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0002221c       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00022220       0 */ /* unknown */ void 	p.0;
/* 0x00022224       0 */ /* unknown */ void 	_edata;
/* 0x00022224       1 */ /* unknown */ void 	completed.1;
/* 0x00022228      24 */ /* unknown */ void 	object.2;
/* 0x00022240       4 */ /* unknown */ void 	environ;
/* 0x00022240       4 */ /* unknown */ void 	_environ;
/* 0x00022244       0 */ /* unknown */ void 	_end;
/* 0x00022244       0 */ /* unknown */ void 	_END_;
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
