/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/stattest/sparc_elf_from_boomerang/subject.exe'
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
    eax = eax + 1;
    esp = ebp;
    (restore)ebp;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    asm("%f inc eax");
    do {
        *(eax - 59) = *(eax - 59) + al;
        *eax = *eax + eax;
        *eax = *eax + al;
        eax = eax + 1;
        *eax = *eax + al;
        (restore) *ecx;
        *eax = *eax + al;
        *(eax + -1844445168) = *(eax + -1844445168) + dl;
        asm("adc [eax],al");
        asm("adc [ebp+0x9402202c],edx");
        ah = ah + *(eax + 1074041860);
        dl = dl | *edi;
        asm("Unknown opcode 0x82");
        asm("xchg eax,esi");
        asm("adc ah,cl");
    } while(*eax = *eax + al);
    al :: 0;
    *eax = *eax + al;
    *(ebp + 1) = *(ebp + 1) + bl;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    edx = 1;
    eax = eax + 1;
    *(eax - 69) = *(eax - 69) + al;
    *eax = *eax + eax;
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
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345006306;
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
    *(eax - 105) = *(eax - 105) + al;
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
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    do {
        asm("scasb");
        eax = eax + 311599329;
        asm("pusha");
        *((al & dl) + 1378752) = *((al & dl) + 1378752) + (al & dl) + 1378752;
        (restore)ss;
        *eax = *eax + al;
        *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
        *eax = *eax & al;
        al = al + *(eax + 311821568);
        asm("loopne 0x10650");
        asm("rol byte [0x400ac0],1");
    } while(eax = eax + 1);
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
    *(eax + 1 + 116) = *(eax + 1 + 116) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
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
/*	Procedure: 0x000106A8 - 0x000106E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x1066a");
    *ebx = *ebx | al;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("xchg eax,edx");
    (restore)es;
    edi = 1073758312;
    16 = *(eax + -1333763312) * edx;
    *eax = *eax + cl;
    eax = eax + *eax;
    *(ecx - 44) = *(ecx - 44) + al;
    (restore)es;
    edi = 1662029976;
    asm("cwde");
    eax = eax + 1;
    *(eax + 104) = *(eax + 104) + al;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    asm("sbb [ecx],al");
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = Lc38206e2();
    asm("loopne 0x106ec");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 000106e9 -> 000106aa */
/*	Procedure: 0x000106E8 - 0x00010737
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106aa");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311479520;
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

/* DEST BLOCK NOT FOUND: 00010739 -> 000106fa */
/*	Procedure: 0x00010738 - 0x00010747
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106fa");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010749 -> 0001070a */
/*	Procedure: 0x00010748 - 0x00010763
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1070a");
    al = *LB2FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010765 -> 00010726 */
/*	Procedure: 0x00010764 - 0x00010777
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10726");
    al = *L7BFFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020818 - 0x00020823
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

/*	Procedure: 0x00020824 - 0x0002082F
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

/*	Procedure: 0x00020830 - 0x0002085F
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

/*	Procedure: 0x00020860 - 0x0002086B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

stat()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
}

/*	Procedure: 0x0002086C - 0x0002087B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    eax = eax + *eax;
    *(eax + esi + 31391679) = *(eax + esi + 31391679) + al;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x000104d8     124 */ /* unknown */ void 	_start;
/* 0x00010554     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010604      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010614     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010698      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106a8      64 */ /* unknown */ void 	main;
/* 0x000106e8      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010738      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010748      28 */ /* unknown */ void 	_init;
/* 0x00010764       1 */ /* unknown */ void 	_fini;
/* 0x00010778       4 */ /* unknown */ void 	_lib_version;
/* 0x000107bd       0 */ /* unknown */ void 	_etext;
/* 0x000207c0       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000207e8       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020818      12 */ /* unknown */ void 	atexit;
/* 0x00020824      12 */ /* unknown */ void 	exit;
/* 0x00020830      48 */ /* unknown */ void 	_exit;
/* 0x00020860      12 */ /* unknown */ void 	stat;
/* 0x0002086c       1 */ /* unknown */ void 	printf;
/* 0x0002087c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020938       0 */ /* unknown */ void 	__dso_handle;
/* 0x0002093c       0 */ /* unknown */ void 	force_to_data;
/* 0x00020940       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020944       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020948       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0002094c       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020950       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020950       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020954       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020954       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020958       0 */ /* unknown */ void 	p.0;
/* 0x0002095c       0 */ /* unknown */ void 	_edata;
/* 0x0002095c       1 */ /* unknown */ void 	completed.1;
/* 0x00020960      24 */ /* unknown */ void 	object.2;
/* 0x00020978       4 */ /* unknown */ void 	_environ;
/* 0x00020978       4 */ /* unknown */ void 	environ;
/* 0x0002097c       0 */ /* unknown */ void 	_end;
/* 0x0002097c       0 */ /* unknown */ void 	_END_;
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
