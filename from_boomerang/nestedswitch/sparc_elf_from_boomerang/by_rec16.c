/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104A8 - 0x00010523
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
    asm("in eax,dx");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    asm("rol byte [eax+0x0],1");
    eax = eax + 1;
    goto L000104dd;
    eax = eax + 1;
L000104dd:
    *eax = *eax + al;
    *eax = *eax + al;
    *(eax + -1844445168) = *(eax + -1844445168) + 1;
    asm("adc [eax],al");
    asm("adc [ebp+0x9402202c],edx");
    ah = ah + *(eax + 1074041860);
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,cl");
    asm("Unknown opcode 0xdc");
    asm("aam 0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    (save)1;
    *(eax + 1 - 34) = *(eax + 1 - 34) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 33) = *(eax + 1 - 33) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010525 -> 000104e6 */
/*	Procedure: 0x00010524 - 0x00010556
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x104e6");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 344125666;
    asm("pusha");
    asm("adc dl,bl");
    eax = eax + 198705600 + 1;
    *(eax + 301998243) = *(eax + 301998243) + al;
    *eax = *eax + 32;
    *eax = *eax + eax + *eax;
    asm("Unknown opcode 0x82");
    asm("adc [eax+0xc],ah");
}

/*	Procedure: 0x00010557 - 0x00010579
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010557()
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

/*	Procedure: 0x0001057A - 0x000105CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001057A()
{



}

/* DEST BLOCK NOT FOUND: 000105d1 -> 00010592 */
/*	Procedure: 0x000105D0 - 0x000105DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10592");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000105dd -> 0001059e */
/*	Procedure: 0x000105DC - 0x0001065F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1059e");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebp = ebp - 1;
    asm("scasb");
    eax = eax + 276969698;
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
    edi = edi + 4;
    esi = esi + 4;
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
    *(eax - 102) = *(eax - 102) + al;
    eax = eax - _START_;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010661 -> 00010622 */
/*	Procedure: 0x00010660 - 0x000106A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10622");
    edi = edi + -394196768;
    *eax = *eax + al;
    *ecx = *ecx + al;
    (save)es;
    (fsave)(frestore) + *eax;
    *edi = *edi + eax;
    *edi = *edi + eax;
    *eax = *eax + al;
    *edi = *edi + eax;
    al :: 0;
    *esi = *esi + eax;
    asm("hlt");
    *ecx = *ecx + al;
    (save)es;
    *ecx = *ecx + Ld0070788();
    (save)es;
    asm("rol byte [eax],1");
    *esi = *esi + eax;
    eax = Lf4070794();
    *ecx = *ecx + al;
    (restore)es;
    asm("sbb [eax],al");
    *edi = *edi + eax;
    *eax = *eax + al;
    *edi = *edi + eax;
    *esi = *esi + eax;
    asm("fcomp qword [ebp+0x8290bfe3]");
}

/*	Procedure: 0x000106A4 - 0x0001075B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10666");
    asm("Unknown opcode 0x82");
    asm("adc [eax],ah");
    al = al | *(eax + 403120294);
    *eax = *eax + 8;
    asm("xchg eax,esi");
    *(eax + 24) = *(eax + 24) & al;
    asm("adc eax,[eax]");
    *(ecx - 111) = *(ecx - 111) + al;
    *%cs:edx] = *%cs:edx] & al;
    eax = L00004003();
    *(ecx + 16777411) = *(ecx + 16777411) | al;
    *eax = *eax + al;
    *edi = *edi + dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc [eax+0x12901c00],al");
    asm("jecxz 0x106c4");
    asm("adc eax,0x10410000");
    *eax = *eax + 25;
    asm("adc ah,[ebx+0x3f0]");
    ecx = ecx + 1;
    asm("adc [eax+0x10901600],al");
    asm("arpl ax,di");
    asm("sbb [eax],eax");
    *(edx + 16) = *(edx + 16) + al;
    *eax = *eax + 19;
    asm("adc esp,[eax]");
    *ebx = *ebx + bl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc [eax+0x13901000],al");
    asm("pusha");
    *ebx = *ebx | dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc [eax+0x12900d00],al");
    asm("pusha");
    asm("adc [edx+0x80fdff02],al");
    al = *LBF180560;
    asm("Unknown opcode 0xff");
    asm("in al,dx");
    *eax = *eax ^ eax;
    *(ecx - 105) = *(ecx - 105) + al;
    *(eax + 2) = *(eax + 2) - ah;
    asm("sahf");
    (save)ss;
    ch = ch & *(esp + edx * 8 + 3);
    asm("ror byte [ebx],0x81");
    return;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    asm("sbb [eax+0x0],al");
    eax = eax + 1;
    (restore)edi;
    al = 16;
    *L00000010 = *L00000010 & 16;
    edi = edi + -394196768;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 0001075d -> 0001071e */
/*	Procedure: 0x0001075C - 0x000107A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1071e");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 277002464;
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

/* DEST BLOCK NOT FOUND: 000107a9 -> 0001076a */
/*	Procedure: 0x000107A8 - 0x000107B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1076a");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107b5 -> 00010776 */
/*	Procedure: 0x000107B4 - 0x000107CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10776");
    al = *L89FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107d1 -> 00010792 */
/*	Procedure: 0x000107D0 - 0x000107E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10792");
    al = *L54FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020878 - 0x00020883
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

/*	Procedure: 0x00020884 - 0x0002088F
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

/*	Procedure: 0x00020890 - 0x000208BF
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

/*	Procedure: 0x000208C0 - 0x000208CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

puts()
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
/* 0x000104a8     124 */ /* unknown */ void 	_start;
/* 0x00010524     172 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105d0      12 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x000105dc     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010660      68 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106a4     184 */ /* unknown */ void 	main;
/* 0x0001075c      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x000107a8      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000107b4      28 */ /* unknown */ void 	_init;
/* 0x000107d0       1 */ /* unknown */ void 	_fini;
/* 0x000107e4       0 */ /* unknown */ void 	_lib_version;
/* 0x000107e4       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x00010820       0 */ /* unknown */ void 	_etext;
/* 0x00020820       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020848       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020878      12 */ /* unknown */ void 	atexit;
/* 0x00020884      12 */ /* unknown */ void 	exit;
/* 0x00020890      48 */ /* unknown */ void 	_exit;
/* 0x000208c0       1 */ /* unknown */ void 	puts;
/* 0x000208d0       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020998       0 */ /* unknown */ void 	Ddata.data;
/* 0x0002099c       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209a0       0 */ /* unknown */ void 	force_to_data;
/* 0x000209a4       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209a8       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209ac       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209b0       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209b4       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209b4       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209b8       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209b8       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209bc       0 */ /* unknown */ void 	p.0;
/* 0x000209c0       0 */ /* unknown */ void 	_edata;
/* 0x000209c0       0 */ /* unknown */ void 	Bbss.bss;
/* 0x000209c0       1 */ /* unknown */ void 	completed.1;
/* 0x000209c4      24 */ /* unknown */ void 	object.2;
/* 0x000209dc       4 */ /* unknown */ void 	_environ;
/* 0x000209dc       4 */ /* unknown */ void 	environ;
/* 0x000209e0       0 */ /* unknown */ void 	_end;
/* 0x000209e0       0 */ /* unknown */ void 	_END_;
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
