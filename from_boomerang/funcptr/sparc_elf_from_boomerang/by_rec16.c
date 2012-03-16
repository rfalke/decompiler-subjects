/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/funcptr/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104D0 - 0x0001054B
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
    eax = eax + 1;
    asm("rol dword [ecx],1");
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[ebx]");
    al = *esi;
    esi = esi + 1;
    eax = eax + 1;
    *(eax - 51) = *(eax - 51) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    *L00000001 = eax;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,cl");
    ah & dl;
    al :: 0;
    *eax = *eax + al;
    *(ebp + 1) = *(ebp + 1) + ch;
    *eax = *eax + al;
    *eax = *eax + al;
    return(eax + 1);
    *eax = *eax + al;
    eax = eax + 1;
    *(eax - 61) = *(eax - 61) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 0001054d -> 0001050e */
/*	Procedure: 0x0001054C - 0x000105A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1050e");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345014498;
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

/*	Procedure: 0x000105A4 - 0x000105FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105A4()
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
    *(eax - 97) = *(eax - 97) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e05fe();
}

/*	Procedure: 0x000105FC - 0x0001060B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105be");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0001060C - 0x0001068F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105ce");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311607521;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10648");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    asm("xchg edx,edx");
    *(eax + 1117120) = *(eax + 1117120) + eax + 1117120;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -803446766) = *(edx + -803446766) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 + 124) = *(eax + 1 + 124) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010691 -> 00010652 */
/*	Procedure: 0x00010690 - 0x0001069F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10652");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106a1 -> 00010662 */
/*	Procedure: 0x000106A0 - 0x000106BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

hello()
{



    asm("popf");
    asm("jecxz 0x10662");
    asm("adc [eax],eax");
    asm("adc ah,[ebx]");
    asm("enter 0x40,0x40");
    if(!( *(ecx - 112) = *(ecx - 112) + al)) {
        *eax = *eax + al;
    }
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e06c2();
}

/*	Procedure: 0x000106C0 - 0x000106DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

world()
{



    asm("popf");
    asm("jecxz 0x10682");
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    asm("rol byte [eax+0x0],1");
    eax = eax + 1;
    0 = *ecx * eax;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106e1 -> 000106a2 */
/*	Procedure: 0x000106E0 - 0x0001072F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x106a2");
    *ecx = dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[edx]");
    al = *LECBF27D0;
    asm("rol byte [edi],1");
    edi = 12754924;
    *ecx = *ecx + al;
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[edx]");
    asm("rcl al,0x27");
    edi = -1090006804;
    asm("in al,dx");
    asm("lahf");
    return;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = Lc382072a();
    asm("loopne 0x10734");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010731 -> 000106f2 */
/*	Procedure: 0x00010730 - 0x0001077F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106f2");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311467232;
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

/* DEST BLOCK NOT FOUND: 00010781 -> 00010742 */
/*	Procedure: 0x00010780 - 0x0001078F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10742");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010791 -> 00010752 */
/*	Procedure: 0x00010790 - 0x000107AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10752");
    al = *L9EFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107ad -> 0001076e */
/*	Procedure: 0x000107AC - 0x000107BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1076e");
    al = *L67FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020830 - 0x0002083B
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

/*	Procedure: 0x0002083C - 0x00020847
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

/*	Procedure: 0x00020848 - 0x00020877
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

/*	Procedure: 0x00020878 - 0x00020887
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
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
/* 0x000104d0     124 */ /* unknown */ void 	_start;
/* 0x0001054c     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105fc      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x0001060c     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010690      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106a0      32 */ /* unknown */ void 	hello;
/* 0x000106c0      32 */ /* unknown */ void 	world;
/* 0x000106e0      80 */ /* unknown */ void 	main;
/* 0x00010730      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010780      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010790      28 */ /* unknown */ void 	_init;
/* 0x000107ac       1 */ /* unknown */ void 	_fini;
/* 0x000107c0       4 */ /* unknown */ void 	_lib_version;
/* 0x000107d8       0 */ /* unknown */ void 	_etext;
/* 0x000207d8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020800       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020830      12 */ /* unknown */ void 	atexit;
/* 0x0002083c      12 */ /* unknown */ void 	exit;
/* 0x00020848      48 */ /* unknown */ void 	_exit;
/* 0x00020878       1 */ /* unknown */ void 	printf;
/* 0x00020888       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020944       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020948       0 */ /* unknown */ void 	force_to_data;
/* 0x0002094c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020950       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020954       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020958       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0002095c       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x0002095c       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020960       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020960       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020964       0 */ /* unknown */ void 	p.0;
/* 0x00020968       0 */ /* unknown */ void 	_edata;
/* 0x00020968       1 */ /* unknown */ void 	completed.1;
/* 0x0002096c      24 */ /* unknown */ void 	object.2;
/* 0x00020984       4 */ /* unknown */ void 	_environ;
/* 0x00020984       4 */ /* unknown */ void 	environ;
/* 0x00020988       0 */ /* unknown */ void 	_end;
/* 0x00020988       0 */ /* unknown */ void 	_END_;
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
