/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/param1/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104C4 - 0x0001053F
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
    edx = 1;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    esp = esp + 1;
    eax = eax + 1;
    *(eax - 74) = *(eax - 74) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    *ecx = es;
    *eax = *eax + al;
    *(eax + -1844445168) = *(eax + -1844445168) + dl;
    asm("adc [eax],al");
    asm("adc [ebp+0x9402202c],edx");
    ah = ah + *(eax + 1074041860);
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,cl");
    al - 212 :: 0;
    *(al - 212) = *(al - 212) + al - 212;
    *(eax + 1) = *(eax + 1) + ah;
    *eax = *eax + al;
    *eax = *eax + al;
    *edi = eax + 1;
    edi = edi + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 84) = *(eax + 1 - 84) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010541 -> 00010502 */
/*	Procedure: 0x00010540 - 0x00010572
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10502");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 344073442;
    asm("pusha");
    asm("adc dl,bl");
    eax = eax + 198705600 + 1;
    *(eax + 301998243) = *(eax + 301998243) + al;
    *eax = *eax + 32;
    *eax = *eax + eax + *eax;
    asm("Unknown opcode 0x82");
    asm("adc [eax+0xc],ah");
}

/*	Procedure: 0x00010573 - 0x00010595
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010573()
{



    edx = edx + ebx;
    *eax = *eax + al;
    (fsave)(frestore) + *ebx;
    eax = eax + 1;
    *(eax + 570450083) = *(eax + 570450083) + al;
    *eax = *eax + 13;
    *eax = *eax + eax + *eax;
    *(edx + -1627103232) = *(edx + -1627103232) + *LC2010010;
    return(*LC2010010);
}

/*	Procedure: 0x00010596 - 0x000105EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010596()
{



}

/* DEST BLOCK NOT FOUND: 000105ed -> 000105ae */
/*	Procedure: 0x000105EC - 0x000105F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105ae");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000105f9 -> 000105ba */
/*	Procedure: 0x000105F8 - 0x0001067B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105ba");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebp = ebp - 1;
    do {
        asm("scasb");
        eax = eax + 276983009;
        asm("pusha");
        *ecx = *ecx & bl;
        *eax = *eax + al;
        *edi = *edi + dl;
        *eax = *eax + al;
        dl = dl + bl;
        *(eax + 328729024 + (eax + 328729024) * 4) = *(eax + 328729024 + (eax + 328729024) * 4) & eax + 328729024;
        *L80020060 = eax;
        *L14E01296 = *L14E01296 + al;
        asm("rol byte [0x400cc0],1");
    } while(eax = eax + 1);
    eax = eax + 199616;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax+0x8],ah");
    asm("lock add eax,0x1b01c0");
    *eax = *eax + al;
    return;
    *(eax + 33579168) = *(eax + 33579168) + al;
    *eax = *eax + 8;
    al = (L0000c005() | 6332544) + *(eax + 66560);
    *eax = *eax + al;
    eax = eax + 1;
    *(eax + 103) = *(eax + 103) + al;
    eax = eax - _START_;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001067d -> 0001063e */
/*	Procedure: 0x0001067C - 0x00010687
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1063e");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010688 - 0x0001069F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cparam()
{



    *(edx + -2146041824) = 0;
    eax = eax + *ecx;
    *eax = *eax + al;
    *(edx + -2130698224) = *(edx + -2130698224) + dl;
    return;
    asm("loopne 0x106a4");
    al = al + *eax;
    *(ebp + -1869561885) = *(ebp + -1869561885) | ebx;
}

/*	Procedure: 0x000106A0 - 0x000106CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10662");
    (save)es;
    asm("aas");
    asm("std");
    > ? L000106a9 : ;
    asm("Unknown opcode 0xff");
    asm("clc");
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    dl = dl + *(edx + 285736976);
    *eax = *eax + al;
    ecx = ecx + 1;
    eax = eax + 1;
    *(eax + 86) = *(eax + 86) + al;
    asm("adc ah,[ebx]");
    asm("pusha");
    edi = edi + -393148192;
    *eax = *eax & al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 000106d1 -> 00010692 */
/*	Procedure: 0x000106D0 - 0x0001071B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10692");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 276993248;
    asm("pusha");
    asm("sbb dl,bl");
    do {
    } while(eax = eax + 63046080);
    *(eax + -2147287169) = 0;
    *(eax + -1610842365) = *(eax + -1610842365) | ah;
    asm("rol byte [eax+0x0],0xa0");
    al = al + 63;
    asm("cld");
    return;
    *(eax + 318734240) = *(eax + 318734240) + al;
    *eax = *eax + al;
    edi = -394066465;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001071d -> 000106de */
/*	Procedure: 0x0001071C - 0x00010727
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106de");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010729 -> 000106ea */
/*	Procedure: 0x00010728 - 0x00010743
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x106ea");
    al = *LB3FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010745 -> 00010706 */
/*	Procedure: 0x00010744 - 0x00010757
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10706");
    al = *L7EFFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000207C8 - 0x000207D3
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

/*	Procedure: 0x000207D4 - 0x000207DF
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

/*	Procedure: 0x000207E0 - 0x0002080F
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

/*	Procedure: 0x00020810 - 0x0002081F
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
/* 0x000104c4     124 */ /* unknown */ void 	_start;
/* 0x00010540     172 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105ec      12 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x000105f8     132 */ /* unknown */ void 	frame_dummy;
/* 0x0001067c      12 */ /* unknown */ void 	call_frame_dummy;
/* 0x00010688      24 */ /* unknown */ void 	cparam;
/* 0x000106a0      48 */ /* unknown */ void 	main;
/* 0x000106d0      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0001071c      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010728      28 */ /* unknown */ void 	_init;
/* 0x00010744       1 */ /* unknown */ void 	_fini;
/* 0x00010758       0 */ /* unknown */ void 	_lib_version;
/* 0x00010758       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x00010770       0 */ /* unknown */ void 	_etext;
/* 0x00020770       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020798       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x000207c8      12 */ /* unknown */ void 	atexit;
/* 0x000207d4      12 */ /* unknown */ void 	exit;
/* 0x000207e0      48 */ /* unknown */ void 	_exit;
/* 0x00020810       1 */ /* unknown */ void 	printf;
/* 0x00020820       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000208e8       0 */ /* unknown */ void 	Ddata.data;
/* 0x000208ec       0 */ /* unknown */ void 	__dso_handle;
/* 0x000208f0       0 */ /* unknown */ void 	force_to_data;
/* 0x000208f4       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000208f8       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000208fc       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020900       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020904       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020904       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020908       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020908       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0002090c       0 */ /* unknown */ void 	p.0;
/* 0x00020910       0 */ /* unknown */ void 	_edata;
/* 0x00020910       0 */ /* unknown */ void 	Bbss.bss;
/* 0x00020910       1 */ /* unknown */ void 	completed.1;
/* 0x00020914      24 */ /* unknown */ void 	object.2;
/* 0x0002092c       4 */ /* unknown */ void 	_environ;
/* 0x0002092c       4 */ /* unknown */ void 	environ;
/* 0x00020930       0 */ /* unknown */ void 	_end;
/* 0x00020930       0 */ /* unknown */ void 	_END_;
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
