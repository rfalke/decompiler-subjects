/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe'
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
    ecx = ecx + 1;
    eax = eax - 1;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    al = *esi;
    esi = esi + 1;
    eax = eax + 1;
    *(ecx + 41) = *(ecx + 41) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    asm("jecxz 0x1050a");
    *eax = *eax + al;
    *(eax + -1844445168) = *(eax + -1844445168) + dl;
    asm("adc [eax],al");
    asm("adc [ebp+0x9402202c],edx");
    ah = ah + *(eax + 1074041860);
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,bl");
    asm("adc ah,dl");
    al :: 0;
    *eax = *eax + al;
    *(edx + 1) = *(edx + 1) + bl;
    *eax = *eax + al;
    *eax = *eax + al;
    ecx = ecx + 1;
    (save)ds;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(ecx + 31) = *(ecx + 31) + eax + 1;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 0001054d -> 0001050e */
/*	Procedure: 0x0001054C - 0x0001057E
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
    eax = eax + 344125667;
    asm("pusha");
    asm("adc dl,bl");
    eax = eax + 198705600 + 1;
    *(eax + 301998243) = *(eax + 301998243) + al;
    *eax = *eax + 32;
    *eax = *eax + eax + *eax;
    asm("Unknown opcode 0x82");
    asm("adc [eax+0xc],ah");
}

/*	Procedure: 0x0001057F - 0x000105A1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001057F()
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

/*	Procedure: 0x000105A2 - 0x000105F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105A2()
{



}

/* DEST BLOCK NOT FOUND: 000105f9 -> 000105ba */
/*	Procedure: 0x000105F8 - 0x00010603
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105ba");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010605 -> 000105c6 */
/*	Procedure: 0x00010604 - 0x00010687
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105c6");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebp = ebp - 1;
    asm("scasb");
    eax = eax + 276969699;
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
    asm("in eax,0xd2");
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
    *(eax - 38) = *(eax - 38) + al;
    eax = eax - _START_;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010689 -> 0001064a */
/*	Procedure: 0x00010688 - 0x00010693
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1064a");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010695 -> 00010656 */
/*	Procedure: 0x00010694 - 0x00010837
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10656");
    *ebx = al;
    *eax = *eax + al;
    edx = edx + 1;
    asm("Unknown opcode 0x82");
    asm("adc [ecx+0x40],ah");
    asm("rol dword [eax],1");
    eax = eax + 1;
    cl = cl + dl;
    asm("daa");
    edi = -1090020628;
    eax = L420106b3();
    asm("adc [eax-0x38],ah");
    asm("xchg eax,edx");
    asm("adc [eax],al");
    eax = eax | -868220864;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol dword [edi],1");
    edi = 429954540;
    cl = cl - dl;
    (restore)es;
    edi = 429953512;
    *ebx = *ebx - al;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc [eax-0x30],ah");
    asm("aad 0x3f");
    edi = -1088431888;
    asm("lock xchg eax,edx");
    asm("adc [eax],al");
    al = al | 148;
    asm("adc [eax],al");
    eax = eax | -255901743;
    asm("loopne 0x1070d");
    edi = 1087216;
    asm("adc [eax+0x40110010],bl");
    *(eax - 65) = *(eax - 65) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol dword [edi],cl");
    edi = -1090006548;
    eax = L284bb18d();
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc eax,[eax+0x10400]");
    *eax = *eax + al;
    asm("adc [eax+0x10600],al");
    *eax = *eax + al;
    eax = eax + *eax;
    *(edx - 112) = *(edx - 112) + al;
    asm("adc [eax-0x18],ah");
    eax = eax + 1;
    *(eax - 77) = *(eax - 77) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol dword [edi],cl");
    edi = -1090006548;
    eax = L284bb1bd();
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + *(eax + 66560);
    *eax = *eax + al;
    asm("adc [eax+0x10600],al");
    *eax = *eax + al;
    eax = eax + *eax;
    *(edx - 112) = *(edx - 112) + al;
    asm("adc [eax-0x10],ah");
    eax = eax + 1;
    *(eax - 89) = *(eax - 89) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol dword [edi],cl");
    edi = -1090006548;
    eax = La84bb1ed();
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax | 17039488;
    *eax = *eax + al;
    *eax = *eax + dl;
    *eax = *eax + 6;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + *eax;
    *(edx - 112) = *(edx - 112) + al;
    asm("adc [ecx+0x0],ah");
    eax = eax + 1;
    *(eax - 101) = *(eax - 101) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol dword [edi],cl");
    edi = -1090006548;
    eax = La84bb21d();
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("sbb eax,[eax+0x10400]");
    *eax = *eax + al;
    asm("adc [eax+0x10600],al");
    *eax = *eax + al;
    eax = eax + *eax;
    *(edx - 112) = *(edx - 112) + al;
    asm("adc [ecx+0x10],ah");
    eax = eax + 1;
    *(eax - 113) = *(eax - 113) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol dword [edi],cl");
    edi = -1090006548;
    eax = La84bb24d();
    *eax = *eax + eax;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x10600],al");
    *eax = *eax + al;
    eax = eax + *eax;
    *(edx - 112) = *(edx - 112) + al;
    asm("adc [ecx+0x20],ah");
    eax = eax + 1;
    *(eax - 125) = *(eax - 125) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol dword [edi],cl");
    edi = -1090006548;
    La84bb27d();
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 66560) = *(eax + 66560) | eax;
    *eax = *eax + al;
    asm("adc [eax+0x10600],al");
    *eax = *eax + al;
    *(edx - 112) = *(edx - 112) + eax + *eax;
    asm("adc [ecx+0x38],ah");
    *(eax + 1 + 119) = *(eax + 1 + 119) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax],ah");
    *(eax + -2130640880) = *(eax + -2130640880) + dh;
    asm("Unknown opcode 0xc7");
    asm("loopne 0x10834");
    eax = eax - -1014956032;
    asm("loopne 0x1083c");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010839 -> 000107fa */
/*	Procedure: 0x00010838 - 0x00010883
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x107fa");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 276956385;
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

/* DEST BLOCK NOT FOUND: 00010885 -> 00010846 */
/*	Procedure: 0x00010884 - 0x0001088F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10846");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010891 -> 00010852 */
/*	Procedure: 0x00010890 - 0x000108AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10852");
    al = *L5CFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000108ad -> 0001086e */
/*	Procedure: 0x000108AC - 0x000108BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1086e");
    al = *L27FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000209A0 - 0x000209AB
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

/*	Procedure: 0x000209AC - 0x000209B7
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

/*	Procedure: 0x000209B8 - 0x000209E7
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

/*	Procedure: 0x000209E8 - 0x000209F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

scanf()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
}

/*	Procedure: 0x000209F4 - 0x00020A03
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
/* 0x000104d0     124 */ /* unknown */ void 	_start;
/* 0x0001054c     172 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105f8      12 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010604     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010688      12 */ /* unknown */ void 	call_frame_dummy;
/* 0x00010694     420 */ /* unknown */ void 	main;
/* 0x00010838      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010884      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010890      28 */ /* unknown */ void 	_init;
/* 0x000108ac       1 */ /* unknown */ void 	_fini;
/* 0x000108c0       0 */ /* unknown */ void 	_lib_version;
/* 0x000108c0       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x00010948       0 */ /* unknown */ void 	_etext;
/* 0x00020948       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020970       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x000209a0      12 */ /* unknown */ void 	atexit;
/* 0x000209ac      12 */ /* unknown */ void 	exit;
/* 0x000209b8      48 */ /* unknown */ void 	_exit;
/* 0x000209e8      12 */ /* unknown */ void 	scanf;
/* 0x000209f4       1 */ /* unknown */ void 	printf;
/* 0x00020a04       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020acc       0 */ /* unknown */ void 	Ddata.data;
/* 0x00020ad0       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020ad4       0 */ /* unknown */ void 	force_to_data;
/* 0x00020ad8       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020adc       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020ae0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020ae4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020ae8       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020ae8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020aec       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020aec       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020af0       0 */ /* unknown */ void 	p.0;
/* 0x00020af4       0 */ /* unknown */ void 	_edata;
/* 0x00020af4       0 */ /* unknown */ void 	Bbss.bss;
/* 0x00020af4       1 */ /* unknown */ void 	completed.1;
/* 0x00020af8      24 */ /* unknown */ void 	object.2;
/* 0x00020b10       4 */ /* unknown */ void 	_environ;
/* 0x00020b10       4 */ /* unknown */ void 	environ;
/* 0x00020b14       0 */ /* unknown */ void 	_end;
/* 0x00020b14       0 */ /* unknown */ void 	_END_;
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
