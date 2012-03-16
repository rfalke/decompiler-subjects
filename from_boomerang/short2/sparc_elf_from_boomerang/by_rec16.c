/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/short2/sparc_elf_from_boomerang/subject.exe'
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
    asm("in al,dx");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    esp = -398458816;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    *edi = al;
    edi = edi + 1;
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
    asm("adc ah,cl");
    asm("hlt");
    asm("aam 0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    *%gs:eax] = *%gs:eax] + eax;
    *eax = *eax + al;
    *(eax + 1 - 35) = *(eax + 1 - 35) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 34) = *(eax + 1 - 34) + eax + 1;
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
    eax = eax + 344124642;
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
    eax = eax + 276968674;
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
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    asm("rol byte [0x30bc0],cl");
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
    *(eax - 103) = *(eax - 103) + al;
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

/*	Procedure: 0x00010688 - 0x000106B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test()
{



    *(edx + 276957440) = *(edx + 276957440) & 32;
    *esi = *esi + eax;
    *eax = *eax + 3;
    asm("adc [eax],ah");
    *(eax + -2147475440) = *(eax + -2147475440) + edx;
    *L80060A40 = al;
    *ebx = *ebx + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax],ah");
    *(ecx + -1878466365) = *(ecx + -1878466365) + al;
    al = al | *eax;
    *(ebp + -1802453021) = *(ebp + -1802453021) + ebx;
}

/* DEST BLOCK NOT FOUND: 00010713 -> 000106a5 */
/*	Procedure: 0x000106B4 - 0x00010747
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10676");
    asm("xchg eax,esp");
    asm("adc [eax],ah");
    (save)es;
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    eax = eax + -218103937;
    asm("adc [eax],ah");
    al = al + 23;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *eax = *eax | al;
    eax = eax + 1;
    asm("Unknown opcode 0x82");
    asm("adc ah,bl");
    asm("fcom dword [eax+edx+0x10920420]");
    *LEAFFFF7F = *LEAFFFF7F & al;
    asm("adc [eax],ah");
    (save)es;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *L40410000 = *L40410000 | dl;
    *(eax + 122) = *(eax + 122) + al;
    asm("adc ah,[ebx+0x201094f0]");
    if(!(eax = eax + 102764690)) {
    }
    goto ( *edx);
    asm("adc [eax],ah");
    *(al + 3) = *(al + 3) + al + 3;
    edx = edx + 1;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *eax = *eax | al;
    if(eax = eax + 1) {
        goto L000106a5;
    }
    asm("adc [eax+0x8],ah");
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    al = al + 148;
    asm("adc [eax],ah");
    eax = eax + -620757121;
    asm("adc [eax],ah");
    (save)es;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *ecx = *ecx | dl;
    *eax = *eax + al;
    edx = edx + 1;
    *(eax + 1 + 106) = *(eax + 1 + 106) + al;
    asm("adc ah,[eax]");
    *(ecx + -1861689145) = *(ecx + -1861689145) & al;
    eax = Lc3820762();
    asm("loopne 0x1074c");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010749 -> 0001070a */
/*	Procedure: 0x00010748 - 0x00010793
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1070a");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 277013728;
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

/* DEST BLOCK NOT FOUND: 00010795 -> 00010756 */
/*	Procedure: 0x00010794 - 0x0001079F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10756");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107a1 -> 00010762 */
/*	Procedure: 0x000107A0 - 0x000107BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10762");
    al = *L95FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107bd -> 0001077e */
/*	Procedure: 0x000107BC - 0x000107CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1077e");
    al = *L60FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020890 - 0x0002089B
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

/*	Procedure: 0x0002089C - 0x000208A7
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

/*	Procedure: 0x000208A8 - 0x000208D7
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

/*	Procedure: 0x000208D8 - 0x000208E7
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
/* 0x00010688      44 */ /* unknown */ void 	test;
/* 0x000106b4     148 */ /* unknown */ void 	main;
/* 0x00010748      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010794      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000107a0      28 */ /* unknown */ void 	_init;
/* 0x000107bc       1 */ /* unknown */ void 	_fini;
/* 0x000107d0       0 */ /* unknown */ void 	_lib_version;
/* 0x000107d0       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x00010838       0 */ /* unknown */ void 	_etext;
/* 0x00020838       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020860       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020890      12 */ /* unknown */ void 	atexit;
/* 0x0002089c      12 */ /* unknown */ void 	exit;
/* 0x000208a8      48 */ /* unknown */ void 	_exit;
/* 0x000208d8       1 */ /* unknown */ void 	printf;
/* 0x000208e8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000209b0       0 */ /* unknown */ void 	Ddata.data;
/* 0x000209b4       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209b8       0 */ /* unknown */ void 	force_to_data;
/* 0x000209bc       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209c0       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209c4       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209c8       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209cc       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209cc       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209d0       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209d0       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209d4       0 */ /* unknown */ void 	p.0;
/* 0x000209d8       0 */ /* unknown */ void 	_edata;
/* 0x000209d8       0 */ /* unknown */ void 	Bbss.bss;
/* 0x000209d8       1 */ /* unknown */ void 	completed.1;
/* 0x000209dc      24 */ /* unknown */ void 	object.2;
/* 0x000209f4       4 */ /* unknown */ void 	_environ;
/* 0x000209f4       4 */ /* unknown */ void 	environ;
/* 0x000209f8       0 */ /* unknown */ void 	_end;
/* 0x000209f8       0 */ /* unknown */ void 	_END_;
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
