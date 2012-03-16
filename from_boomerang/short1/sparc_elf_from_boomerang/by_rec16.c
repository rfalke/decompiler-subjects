/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/short1/sparc_elf_from_boomerang/subject.exe'
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
    ecx = ecx + 1;
    *ecx = *ecx | al;
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    *eax = *eax - al;
    ecx = ecx + 1;
    al = al + 1;
    *eax = *eax + al;
    *eax = *eax + al;
    ch = ch + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,dl");
    asm("%f aam 0x22");
    asm("rol byte [eax],0x40");
    if(!( *eax = *eax + al)) {
        *eax = *eax + al;
    }
    *eax = *eax + al;
    eax = eax + 1;
    asm("stc");
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 6) = *(eax + 1 - 6) + eax + 1;
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
    eax = eax + 344087779;
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
    asm("scasb");
    eax = eax + 276997346;
    asm("pusha");
    *ecx = *ecx & bl;
    *eax = *eax + al;
    *edi = *edi + dl;
    *eax = *eax + al;
    dl = dl + bl;
    eax = eax + 328729024;
    *(eax + eax * 4) = *(eax + eax * 4) & al;
    *L80020060 = eax;
    *L14E01296 = *L14E01296 + al;
    asm("rol byte [0x400cc0],1");
    eax = eax + 1;
    asm("rcl dl,0x5");
    asm("ror byte [ebx],0x3");
    *eax = *eax + al;
    *(edx + -267886576) = *(edx + -267886576) + al;
    *(eax + 1769920) = *(eax + 1769920) + eax + 1769920;
    return;
    *(eax + 33579168) = *(eax + 33579168) + al;
    *eax = *eax + 8;
    al = (L0000c005() | 6332544) + *(eax + 66560);
    *eax = *eax + al;
    eax = eax + 1;
    *(eax - 75) = *(eax - 75) + al;
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

/* DEST BLOCK NOT FOUND: 00010689 -> 0001064a */
stack space not deallocated on return
/*	Procedure: 0x00010688 - 0x0001069E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test()
{



    asm("popf");
    asm("jecxz 0x1064a");
    al = dh;
    asm("daa");
    eax = *LA027F244 - 1;
    asm("hlt");
    asm("daa");
    esp = esp + 1;
    return(*LA007FA4C);
}

/*	Procedure: 0x0001069F - 0x000106E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001069F()
{



    *(edi + -2147090112) = 0;
    *ecx = *ecx | eax;
    *eax = *eax + eax - 1;
    dl = dl + bh;
    (restore)es;
    esp = esp - 1;
    *(edi + -2147090112) = 0;
    *( *LA007C248 + 1) = *( *LA007C248 + 1) + *LA007C248 + 1;
    *eax = *eax + dl;
    *eax = *eax + 6;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax],ah");
    edx = edx + eax;
    asm("daa");
    edi = 8392940;
    *(eax + *ecx) = *(eax + *ecx) + eax + *ecx;
    al = al + al;
    asm("daa");
    edi = -1089998612;
    asm("in al,dx");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106e9 -> 000106aa */
/*	Procedure: 0x000106E8 - 0x000107B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x106aa");
    asm("adc [eax],ah");
    al = al + 146;
    asm("adc [eax],ah");
    if(!(eax = eax + 102764692)) {
    }
    goto ( *esp);
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = L00000000();
    edx = edx + 1;
    asm("adc [eax+0x48],ah");
    asm("xchg eax,edx");
    asm("adc [eax],al");
    eax = eax | -1908408256;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    (save)es;
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    if(!(eax = eax + 69210260)) {
    }
    asm("Unknown opcode 0xff");
    (fsave) *ecx;
    *eax = *eax + al;
    *(edx + 50855952) = *(edx + 50855952) + bl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc [eax+0x60],ah");
    asm("xchg eax,edx");
    asm("adc [eax],al");
    eax = eax | -2092957632;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    al = al + 146;
    asm("adc [eax],ah");
    (save)es;
    asm("xchg eax,esp");
    asm("adc [eax],ah");
    *eax = *eax + eax;
    *eax = *eax + eax + -822083713;
    eax = L00000000();
    edx = edx + 1;
    asm("adc [eax+0x78],ah");
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *eax = *eax + eax;
    *eax = *eax + (eax | 2017460288);
    asm("adc [eax],ah");
    (save)es;
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    al = al + 148;
    asm("adc [eax],ah");
    *(eax + -1006633089) = *(eax + -1006633089) + eax + -1006633089;
    *eax = *eax + al;
    L00000000();
    edx = edx + 1;
    asm("adc [eax-0x70],ah");
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *(eax | 1832910912) = *(eax | 1832910912) + (eax | 1832910912);
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax],ah");
    *(eax + -2130640880) = *(eax + -2130640880) + dh;
    asm("Unknown opcode 0xc7");
    asm("loopne 0x107b0");
    eax = eax - -1014956032;
    asm("loopne 0x107b8");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 000107b5 -> 00010776 */
/*	Procedure: 0x000107B4 - 0x000107FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10776");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 277014752;
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

/* DEST BLOCK NOT FOUND: 00010801 -> 000107c2 */
/*	Procedure: 0x00010800 - 0x0001080B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x107c2");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001080d -> 000107ce */
/*	Procedure: 0x0001080C - 0x00010827
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x107ce");
    al = *L7AFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010829 -> 000107ea */
/*	Procedure: 0x00010828 - 0x0001083B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x107ea");
    al = *L45FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020900 - 0x0002090B
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

/*	Procedure: 0x0002090C - 0x00020917
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

/*	Procedure: 0x00020918 - 0x00020947
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

/*	Procedure: 0x00020948 - 0x00020957
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
/* 0x00010688      96 */ /* unknown */ void 	test;
/* 0x000106e8     204 */ /* unknown */ void 	main;
/* 0x000107b4      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010800      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x0001080c      28 */ /* unknown */ void 	_init;
/* 0x00010828       1 */ /* unknown */ void 	_fini;
/* 0x00010840       0 */ /* unknown */ void 	_lib_version;
/* 0x00010840       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x000108a8       0 */ /* unknown */ void 	_etext;
/* 0x000208a8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000208d0       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020900      12 */ /* unknown */ void 	atexit;
/* 0x0002090c      12 */ /* unknown */ void 	exit;
/* 0x00020918      48 */ /* unknown */ void 	_exit;
/* 0x00020948       1 */ /* unknown */ void 	printf;
/* 0x00020958       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020a20       0 */ /* unknown */ void 	Ddata.data;
/* 0x00020a24       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020a28       0 */ /* unknown */ void 	force_to_data;
/* 0x00020a2c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020a30       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020a34       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020a38       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020a3c       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020a3c       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020a40       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020a40       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020a44       0 */ /* unknown */ void 	p.0;
/* 0x00020a48       0 */ /* unknown */ void 	_edata;
/* 0x00020a48       0 */ /* unknown */ void 	Bbss.bss;
/* 0x00020a48       1 */ /* unknown */ void 	completed.1;
/* 0x00020a4c      24 */ /* unknown */ void 	object.2;
/* 0x00020a64       4 */ /* unknown */ void 	_environ;
/* 0x00020a64       4 */ /* unknown */ void 	environ;
/* 0x00020a68       0 */ /* unknown */ void 	_end;
/* 0x00020a68       0 */ /* unknown */ void 	_END_;
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
