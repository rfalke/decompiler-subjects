/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/condcodexform/sparc_elf_from_boomerang_gcc/subject.exe'
 */

/*	Procedure: 0x00010A6C - 0x00010ADF
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
    ebx = ebx + 1;
    eax = *L00000001;
    asm("adc [eax],eax");
    asm("adc ah,[eax]");
    if(!( *(esi - 112) = *(esi - 112) + al)) {
        *(ebx - 99) = *(ebx - 99) + al;
        *eax = *eax + eax;
        *eax = *eax + al;
        eax = eax + 1;
        if(!( *ebx = *ebx + al)) {
            *eax = *eax + al;
        }
        *(eax + -1844445168) = *(eax + -1844445168) + dl;
        asm("adc [eax],al");
        asm("adc [ebp+0x9402202c],edx");
        ah = ah + *(eax + 1074041860);
        dl = dl | *edi;
        *eax = *eax + al;
        asm("xchg dl,[esi+0xd4cce312]");
        al :: 0;
        *eax = *eax + al;
        *ecx = *ecx + bh;
        *eax = *eax + eax;
        *eax = *eax + al;
        *(ebx - 110) = *(ebx - 110) + eax + 1;
        *(eax + 1) = *(eax + 1) + eax + 1;
        *eax = *eax + al;
        eax = eax + 1;
    }
    *(ebx - 109) = *(ebx - 109) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010ae1 -> 00010aa2 */
/*	Procedure: 0x00010AE0 - 0x00010B29
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10aa2");
    eax = eax + 1;
    *eax = *eax + al;
    ch = ch + *edi;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("scasb");
    asm("adc eax,0x5aed8e1");
    asm("ror byte [edi],0x11");
    *eax = *eax + al;
    *(eax + -771481582) = *(eax + -771481582) + dl;
    al = eax + 47188160 + 1 + dl + *eax;
    *(eax + 33562786) = *(eax + 33562786) + al;
    *eax = *eax + 15;
    asm("adc [eax],eax");
    *eax = *eax + al;
    al = *LD0090010;
    *(eax + -805036030) = *(eax + -805036030) + dl;
    eax = dl & 255;
    bh = bh + *edi;
    asm("cld");
    asm("lahf");
}

/*	Procedure: 0x00010B2A - 0x00010B5B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010B2A()
{



    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [eax+eax],1");
    al = al + dl + *eax;
    *(eax + 838869154) = *(eax + 838869154) + al;
    edi = 80804095;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    *eax = *eax | al;
    al = al + bl;
    asm("rol byte [0xc78108c0],1");
    asm("loopne 0x10b60");
    eax = eax - -476250112;
}

/*	Procedure: 0x00010B5C - 0x00010B67
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fini_dummy()
{



    asm("popf");
    asm("jecxz 0x10b1e");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010b69 -> 00010b2a */
/*	Procedure: 0x00010B68 - 0x00010BAB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10b2a");
    *(eax + 1) = *(eax + 1) + eax + 1;
    ch = ch + *edi;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("scasb");
    asm("adc eax,0x5ae50e1");
    asm("ror byte [edi],0x11");
    *eax = *eax + al;
    *(eax + 319299602) = *(eax + 319299602) + dl;
    *eax = *eax + al;
    eax = al + dl + 311560384;
    asm("pusha");
    *edx = *edx + (al | 64);
    ss = edx;
    eax = (al | 64) + -947844672;
    asm("loopne 0x10ba4");
    eax = eax - -476250112;
    edi = -523796080;
    *(ecx + -1660944152) = *(ecx + -1660944152) | al;
}

/* DEST BLOCK NOT FOUND: 00010bad -> 00010b6e */
/*	Procedure: 0x00010BAC - 0x00010D03
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10b6e");
    *(esi + -2144075488) = 0;
    edx = edx + *(edx + -1845420016);
    asm("adc [eax],ah");
    *(eax + 33579170) = *(eax + 33579170) + al;
    *eax = *eax + 4;
    asm("adc [eax],eax");
    *(ebx + 16) = *(ebx + 16) + al;
    *eax = *eax + 5;
    asm("xchg eax,esp");
    asm("adc ah,[ecx]");
    al = al + 17;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("xchg eax,esp");
    asm("adc ah,[ecx]");
    al = al | 128;
    *L80020060 = al;
    *(ecx + edx) = *(ecx + edx) + al;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("adc [eax+0x12960400],al");
    *(ecx + edx) = *(ecx + edx) & edx;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("xchg eax,esi");
    asm("adc ah,[ecx]");
    asm("sbb al,0x80");
    *L80020060 = al;
    *(ecx + edx) = *(ecx + edx) + al;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("adc [eax+0x12980500],al");
    *(ecx + edx) = *(ecx + edx) & esp;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("cwde");
    asm("adc ah,[ecx]");
    al = al - 128;
    *L80020060 = al;
    *(ecx + edx) = *(ecx + edx) + al;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("adc [eax+0x129a0400],al");
    *(ecx + edx) = *(ecx + edx) & esi;
    *eax = *eax + al;
    ebx = ebx + 1;
    eax = L000060a2();
    *edx = *edx + al;
    *eax = *eax + 19;
    asm("adc [eax],eax");
    *(ebx - 112) = *(ebx - 112) + al;
    asm("adc ah,[ecx]");
    *L80120880 = al + 128;
    *ebx = *ebx + ah;
    al = 16;
    *L00000010 = *L00000010 & 16;
    asm("adc [eax],eax");
    *(ebx - 112) = *(ebx - 112) + al;
    asm("adc ah,[ecx]");
    asm("adc al,0x80");
    *L801208C0 = al;
    *edi = *edi + bl;
    *(esi + 1114144) = 0;
    ebx = ebx + 1;
    asm("adc ah,[ecx]");
    al = al & 128;
    *L80120800 = eax;
    *edx = *edx + bl;
    *(esi + 1114144) = 0;
    ebx = ebx + 1;
    asm("adc [eax+0x12901300],al");
    *(ecx + edx) = *(ecx + edx) & esi;
    *eax = *eax + al;
    ebx = ebx + 1;
    asm("adc ah,[ecx]");
    *L80120880 = al | 128;
    *ecx = *ecx + dl;
    al = 16;
    *L00000010 = *L00000010 & 16;
    asm("adc [eax],eax");
    *(ebx - 112) = *(ebx - 112) + al;
    asm("adc ah,[ecx]");
    asm("sbb al,0x80");
    *L801208C0 = al;
    *L0020A680 = *L0020A680 + cl;
    asm("adc [eax],eax");
    *(ebx - 112) = *(ebx - 112) + al;
    asm("adc ah,[ecx]");
    al = al - 128;
    *L80120800 = eax;
    *eax = *eax + cl;
    *(esi + 1114144) = 0;
    ebx = ebx + 1;
    asm("adc ah,[ecx]");
    al :: 144;
    asm("sbb eax,[eax+0x8]");
    *(eax + 1622149120) = *(eax + 1622149120) & 63;
    *(eax + 33562790) = *(eax + 33562790) + 1;
    *eax = *eax + 4;
    asm("adc [eax],eax");
    *(esi + 16) = *(esi + 16) + al;
    *eax = *eax + 4;
    asm("adc ah,[eax]");
    asm("cwde");
    asm("adc [eax],eax");
    *(esi - 112) = *(esi - 112) + al;
    asm("adc ah,[eax]");
    *( *L11430040) = *( *L11430040) + *L11430040;
    *eax = *eax + al;
    *(eax + 1622153216) = *(eax + 1622153216) & 63;
    *(ecx + -2130124601) = *(ecx + -2130124601) + 1;
    Lc3820d06();
}

/*	Procedure: 0x00010D04 - 0x00010D0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func1()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010D0C - 0x00010D13
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func2()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010D14 - 0x00010D1B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func3()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010D1C - 0x00010D23
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func4()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010D24 - 0x00010D2B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func5()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010D2C - 0x00010D33
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func6()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010D34 - 0x00010D3B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func7()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010D3C - 0x00010D43
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

func8()
{



    ebx = ebx + 67808;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010d57 -> 00010cde */
/*
 *	/u0/udon/src/temp/gcc-2.8.1/./frame.c
 */

#include "tconfig.h"
#include "config/sparc/xm-sol2.h"
#include "config/sparc/xm-sysv4.h"
#include "tm.h"
#include "config/sparc/sol2-sld.h"
#include "config/sparc/sol2.h"
#include "config/sparc/sysv4.h"
#include "config/sparc/sparc.h"
#include "config/svr4.h"
#include "config/xm-svr4.h"
#include "defaults.h"
#include "gansidecl.h"
#include "dwarf2.h"
#include "include/stddef.h"
#include "frame.h"

/*	Procedure: 0x00010D44 - 0x00010D77
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

decode_uleb128()
{



    asm("xchg eax,esp");
    asm("adc [eax],ah");
    *(esi + -972423152) = *(esi + -972423152) + dl;
    *((al | *eax) + -2080301054) = *((al | *eax) + -2080301054) + dl;
    if(al = al | ah) {
        goto L00010cde;
    }
    *(eax + -527925238) = *(eax + -527925238) - al;
    *edx = *edx + 128;
    *(esi + edx * 4) = *(esi + edx * 4) + al;
    asm("adc al,al");
    dl = dl + *eax;
    edi = 43317759;
    dh = dh | dl;
    al = *LE0C38107 & *( *LE0C38107);
}

/* DEST BLOCK NOT FOUND: 00010d8b -> 00010d12 */
/*	Procedure: 0x00010D78 - 0x00010DC3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

decode_sleb128()
{



    asm("xchg dl,[eax]");
    *eax = *eax & al;
    asm("xchg eax,esp");
    asm("adc [eax],al");
    edx = edx + esi;
    *((al | *eax) + -2080301054) = *((al | *eax) + -2080301054) + dl;
    if(ah = ah | al) {
        goto L00010d12;
    }
    *(eax + -2146266109) = *(eax + -2146266109) - al;
    al = al + *(eax + 310435978);
    edi = 8846079;
    asm("loopne 0x10da7");
    *(eax + -2145902624) = 0;
    (save)es;
    al = al + 132;
    asm("adc [edi],bh");
    *(ebp + -1811709912) = *(ebp + -1811709912) + 1;
    asm("adc al,[eax+0xe0c38102]");
    al = (ah | dl) & *(ah | dl);
}

/*	Procedure: 0x00010DC4 - 0x00010E0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fde_insert()
{



    *edx & ebp;
    asm("pusha");
    al = al + *(eax + 33579170);
    *eax = *eax + 14;
    asm("aam 0x22");
    *edx = *edx + al;
    *(eax + 185864) = *(eax + 185864) + al;
    ah = ah + dl;
    bh = bh + *edi;
    asm("cld");
    *edx = 224;
    ah = (ah | al) + *(eax + -1063223288);
    bl = bl + *(eax + eax * 4);
    asm("xchg eax,edx");
    asm("Unknown opcode 0x82");
    if(!( *esi = *esi + al)) {
    }
    asm("aam 0x22");
    *eax = *eax + al;
    asm("salc");
    bh = bh & *edi;
    asm("cld");
    asm("adc bh,[edi+0x290f7ff]");
    asm("aas");
    asm("cld");
    ebx = ebx + 67808;
    *eax = *eax + al;
}

/*	Procedure: 0x00010E0C - 0x00010E5F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

count_fdes()
{



    asm("les eax,[edx]");
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    *(eax + 34177184) = *(eax + 34177184) + al;
    *eax = *eax + 16;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("les eax,[edx]");
    *(eax + eax * 4) = *(eax + eax * 4) & al;
    al = *L802200A0;
    *edi = *edi + al;
    asm("les eax,[edx]");
    *eax = *eax + al;
    asm("les eax,[edx]");
    *eax = *eax & cl;
    *(eax + -2144206688) = 0;
    dl = dl + *(edx + -1006542846);
    *(edx + eax + 12976640) = *(edx + eax + 12976640) + al + *eax;
    al = *LE0A08004;
    *edx = *edx + dl;
    edi = 9499903;
    *( *LE0C38104 + -1660354544) = *( *LE0C38104 + -1660354544) | dl;
}

/* DEST BLOCK NOT FOUND: 00010e61 -> 00010e22 */
/*	Procedure: 0x00010E60 - 0x00010EFB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add_fdes()
{



    asm("popf");
    asm("jecxz 0x10e22");
    asm("loopne 0x10e6c");
    *eax = *eax + 228;
    (save)es;
    asm("rol byte [eax],0xd0");
    (save)es;
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    asm("sbb eax,0x7e2");
    asm("rol byte [esi],1");
    *(eax + eax * 4) = *(eax + eax * 4) & al;
    *L80220020 = al;
    *(eax + edx * 8) = *(eax + edx * 8) + dl;
    (save)es;
    *eax = *eax + al;
    asm("rol byte [esi],1");
    *eax = *eax & cl;
    *(edx + -2147352544) = 0;
    asm("Unknown opcode 0x0f");
    asm("xchg eax,edx");
    asm("adc [eax],al");
    asm("adc [eax+0x7f190010],dl");
    asm("Unknown opcode 0xff");
    ecx = ecx - 1;
    asm("xchg eax,esp");
    asm("adc [eax],al");
    asm("sbb dl,dl");
    (save)es;
    *eax = *eax & cl;
    *(edx + -2145775040) = 0;
    esp = esp + *(eax + -1543430140);
    asm("adc [eax],al");
    eax = eax | edx;
    (save)es;
    *(eax + edx * 4) = *(eax + edx * 4) & cl;
    *(edx + -2143809280) = 0;
    ah = al + *(eax + 8) + *(edx + -804782064);
    (save)es;
    *eax = *eax + al;
    (save)es;
    *eax = *eax + cl;
    asm("rol byte [edx],cl");
    *(eax + eax * 4) = *(eax + eax * 4) & al;
    *LBF120060 = al;
    goto ( *edi);
    al = 2;
    *L00000002 = *L00000002 & 2;
    *%es:eax] = *%es:eax] + 228;
    asm("rol byte [%es:eax],0xe2");
    asm("daa");
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010efd -> 00010ebe */
/*	Procedure: 0x00010EFC - 0x0001100B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_init()
{



    asm("popf");
    asm("jecxz 0x10ebe");
    asm("adc al,0x6");
    *(eax + eax * 4) = *(eax + eax * 4) & cl;
    *L80020020 = al;
    *ebx = *ebx + dl;
    al = *LC0080010;
    asm("daa");
    edi = 315628;
    *(eax + 33562786) = *(eax + 33562786) + al;
    *eax = *eax + 18;
    asm("rol byte [edi],1");
    edi = -32788;
    edx = 1232;
    asm("rol byte [edi],cl");
    al = al + 146 + *(eax + 8);
    *L2004A0EC = *L2004A0EC << cl;
    edi = 315628;
    *(eax + 301998242) = *(eax + 301998242) + al;
    edi = 131135743;
    edi = 8392940;
    (restore)es;
    *esi = *esi << 1;
    if(!( *eax = *eax & dl)) {
    }
    goto ( *(esi + 136316624));
    *edi = *edi << 1;
    edi = -1090006804;
    asm("in al,dx");
    *esi = *esi << 1;
    *eax = *eax & dl;
    eax = eax + 1;
    *(edx + 117) = *(edx + 117) + al;
    asm("xchg eax,ecx");
    ah = ah - *eax;
    dl = dl + *(edx + -755024112);
    asm("daa");
    edi = -1087913752;
    asm("in al,0xc0");
    asm("daa");
    edi = 537318124;
    al = al | 128;
    *L80020060 = al;
    *edx = *edx + dl;
    asm("adc [eax],al");
    *(eax + -804716528) = *(eax + -804716528) | ah;
    *(eax + 33562786) = *(eax + 33562786) + al;
    *eax = *eax + 22;
    asm("rol byte [edi],cl");
    edi = 1086184;
    asm("adc [edi+eax+0x796ecbf],edx");
    *L0004D0E7 = *L0004D0E7 + bh;
    goto ( *(ebx + -457242728));
    *( *LD0042004 + 301998242) = *( *LD0042004 + 301998242) + *LD0042004;
    edi = 278067455;
    *ecx = *ecx + dl;
    asm("adc [eax+0x7d20900],al");
    edi = 537317608;
    *(edx + -1810825200) = *(edx + -1810825200) | dl;
    (restore)es;
    edi = -1090021652;
    L9f010f6b();
    asm("cwde");
    (restore)es;
    edi = -1090006300;
    eax = L0c2136da();
    asm("rol byte [edi],1");
    edi = 2544356;
    *%es:ecx+eax*4] = *%es:ecx+eax*4] & al + dl;
    asm("Unknown opcode 0xc7");
    asm("loopne 0x11010");
    eax = eax - -476250112;
}

/*	Procedure: 0x0001100C - 0x000110F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

find_fde()
{



    asm("popf");
    asm("jecxz 0x10fce");
    eax = eax + 1;
    *eax = *eax + al;
    ch = ch + *edi;
    *eax = *eax + al;
    edx = edx + 1;
    asm("scasb");
    asm("adc eax,0x5aeace0");
    asm("ror byte [edi],0x11");
    *eax = *eax + al;
    *(eax + -803725294) = *(eax + -803725294) + dl;
    eax = eax + 48236736;
    *eax = *eax + al;
    *(eax + 8389120) = *(eax + 8389120) & 21;
    *LD0180010 = al;
    *(eax + 301998242) = *(eax + 301998242) + al;
    *eax = *eax + 6;
    *(eax + eax * 2 + -33016) = *(eax + eax * 2 + -33016) & 172;
    asm("adc [eax],al");
    asm("adc al,dl");
    *(eax + 705183908) = *(eax + 705183908) + al;
    *eax = *eax + 7;
    asm("loopne 0x11066");
    *(eax + edx * 8) = *(eax + edx * 8) & dl;
    al = al + 32 + 128;
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    eax = eax + 1;
    *edx = *edx | cl;
    *eax = *eax + 7;
    *(eax + 537190400) = *(eax + 537190400) & 20;
    *(eax + -4247040) = *(eax + -4247040) & 241;
    asm("rol byte [eax+eax],1");
    *(eax + 33562788) = *(eax + 33562788) + al;
    *eax = *eax + 25;
    al = 16;
    *L00000010 = *L00000010 & 16;
    (fsave)(frestore) + *eax;
    asm("adc [esi+0x80002010],dl");
    *L801A0CC0 = al;
    *(eax + edx * 4) = *(eax + edx * 4) + dl;
    *(ecx + -268263382) = *(ecx + -268263382) + edx;
    eax = (((al + al | 218) + 32 | 149) ^ *eax) + *((((al + al | 218) + 32 | 149) ^ *eax) + 8);
    asm("rol byte [esi],cl");
    *eax = *eax & cl;
    *(eax + eax * 2 + 8403465) = *(eax + eax * 2 + 8403465) & 4;
    asm("rol byte [esi],1");
    *(eax + edx) = *(eax + edx) & cl;
    *eax = *eax + 6;
    asm("cwde");
    asm("adc [eax],al");
    dl = dl | *(eax + -2146942974);
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    eax = eax + 1;
    *eax = *eax | cl;
    *eax = *eax + 6;
    asm("xchg eax,esi");
    al = ah + *(eax + -1063092223) | 10;
    edi = 43053823;
    asm("ror byte [eax+esi*4],0x10");
    *eax = *eax & al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000110f5 -> 000110b6 */
/*	Procedure: 0x000110F4 - 0x0001121B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

extract_cie_info()
{



    asm("popf");
    asm("jecxz 0x110b6");
    *eax = al;
    *edx = *edx + al;
    asm("das");
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("scasb");
    asm("adc eax,0x5aec4e3");
    asm("ror byte [edi],0x11");
    *eax = *eax + al;
    *(eax + -770695150) = *(eax + -770695150) + dl;
    eax = eax + 277874880;
    *eax = *eax + bl;
    asm("aam 0x2");
    *(eax + edx * 4) = *(eax + edx * 4) & al;
    al = al & *eax;
    dl = dl | *(eax + 1074601986);
    *(edx + 9) = *(edx + 9) + al;
    *esi = *esi << 1;
    eax = eax + 1;
    *(eax + 33562786) = *(eax + 33562786) + al;
    *eax = *eax + 14;
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("rol byte [esi],1");
    eax = eax + 1;
    *(edx + 1075077138) = *(edx + 1075077138) + dl;
    *(edx + 2) = *(edx + 2) + al;
    asm("rol byte [0xa28009c0],cl");
    *eax = *eax & al;
    al = al + *(eax + 67328);
    *eax = *eax + al;
    asm("rol byte [esi],1");
    al = eax + 1 + dl;
    edx = edx - 1;
    *eax = *eax + al;
    *(edx + -2146272736) = 0;
    eax = eax - 2101424 + 1;
    *(ecx - 5) = *(ecx - 5) + al;
    asm("rol byte [esi],1");
    *ebx = *ebx + dl;
    *eax = *eax + al;
    (save)es;
    *(edx + -770416622) = *(edx + -770416622) + dl;
    *eax = *eax | 176;
    al = eax + 1 + dl + 1 + 44042688 + 32;
    *eax = *eax + eax;
    ecx = ecx + 1;
    asm("lock nop");
    asm("adc [eax],al");
    *eax = *eax + 14;
    *esi = *esi << 96;
    al = (al | *(eax + 838869154)) + 208 | 32;
    esp = esp + edx;
    (save)cs;
    *ecx = *ecx & al;
    asm("ror byte [esi],cl");
    *edx = *edx & al;
    asm("xchg eax,ecx");
    ah = ah - *eax;
    asm("sbb [ebp+0x9410a02a],dl");
    asm("adc al,[eax+0x602a9308]");
    al = al | dl;
    (save)cs;
    *ebx = *ebx & al;
    asm("xchg eax,edx");
    asm("adc al,[eax+0xa]");
    asm("adc al,[eax]");
    eax = eax | edx;
    asm("%e pusha");
    if(!(eax = al + 176 + 32 + 402657424)) {
    }
    asm("Unknown opcode 0xfe");
    asm("fst qword [edx+0x7f086006]");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xfe");
    eax = L0c611872();
    al = 16;
    *L00000010 = *L00000010 + cl;
    asm("ror byte [esi],1");
    *eax = *eax + al;
    asm("rol byte [esi],cl");
    al = eax + 1 + dl;
    asm("%e pusha");
    asm("adc al,dl");
    edx = edx - 1;
    *(eax + 309993634) = *(eax + 309993634) + eax + 1;
    *eax = *eax + 7;
    *ecx = *ecx & 6;
    asm("adc [eax],al");
    asm("sbb [edi-0x1],bh");
    asm("Unknown opcode 0xfe");
    asm("rcl byte [edx+0xd2ecbf07],1");
    (restore)es;
    edi = 176364;
    *(ecx + -2130124601) = *(ecx + -2130124601) | eax;
    Le39e121e();
}

/*	Procedure: 0x0001121C - 0x00011237
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

execute_cfa_insn()
{



    asm("popf");
    asm("jecxz 0x111de");
    asm("adc ah,0xe");
    *eax = *eax + al;
    *(eax + -771678202) = *(eax + -771678202) | esi;
    (save)es;
    al = *L41004008;
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 000115a3 -> ecc01d3a */
/*	Procedure: 0x00011238 - 0x000115C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00011238()
{



    ah = ah | *(eax + -1073294785);
    *(edx + 268976130) = *(edx + 268976130) + dl;
    *eax = *eax + 223;
    *esi = *esi << cl;
    asm("rol byte [eax],0x80");
    eax = *(eax + 8389248) + 1067453072;
    *edi = *edi << 1;
    edi = 8392936;
    -118 = *(eax + -2145910768) * edx;
    al = *L008002C0;
    (save)es;
    *(edx + 667954848) = *(edx + 667954848) & 191;
    eax = L08411908();
    asm("adc [eax+0x2ac0d200],al");
    *(eax + ebx + -1815216000) = *(eax + ebx + -1815216000) & ebp;
    ah = ah - *(eax + 16386);
    dl = dl + *(eax + -803938301);
    al = al + *eax;
    *(ecx + 17350851) = *(ecx + 17350851) | eax;
    *eax = *eax + al;
    *eax = *eax + al;
    *ebx = *ebx + al;
    *eax :: al;
    *eax = *eax + al;
    asm("rol byte [eax],1");
    *eax = *eax + al;
    asm("cld");
    *eax = *eax + al;
    *(eax + eax) = *(eax + eax) + edx;
    *ecx = *ecx + al;
    *eax :: al;
    if(!( *ecx = *ecx + al)) {
    }
    *ecx = *ecx + al;
    asm("les eax,[eax]");
    *ebx = *ebx + al;
    *eax :: al;
    *ebx = *ebx + al;
    *eax :: al;
    *ecx = *ecx + al;
    asm("in al,0x0");
    *edx = *edx + al;
    *eax = *eax + al;
    *eax = *eax + al;
    dh = dh + *(eax + 604110848) + *(eax + eax) + *(eax + eax);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    esi = esi + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax + *eax;
    *eax = *eax + al;
    *eax = *eax + al;
    edx = dl + al + *(eax + (dl + al) * 8);
    (save)cs;
    *eax = *eax + al;
    asm("aam 0xe");
    *ecx = *ecx & al;
    asm("ror byte [esi],cl");
    *edx = *edx & al;
    asm("xchg eax,ecx");
    ah = ah - *eax;
    asm("sbb [ebp+0x9410a02a],dl");
    asm("adc al,[eax+0x602a9308]");
    al = al | dl;
    (save)cs;
    *ebx = *ebx & al;
    asm("xchg eax,edx");
    asm("adc al,[eax+0xa]");
    asm("adc [eax+0x12901d00],al");
    *ecx = *ecx + cl;
    asm("ror byte [esi],cl");
    *eax = *eax + al;
    asm("rol byte [esi],1");
    asm("rol byte [eax],0x90");
    eax = al + *eax | edx;
    asm("rol byte [%es:eax],0x10");
    *eax = *eax + 139;
    al = 6;
    *ecx = *ecx & 6;
    asm("ror byte [esi],1");
    *eax = *eax + al;
    asm("aam 0xe");
    *ecx = *ecx & al;
    asm("rol byte [esi],cl");
    asm("rol byte [eax],0x91");
    *(edx + edx + 43124864) = *(edx + edx + 43124864) | dl;
    eax = ah - *eax + 1;
    dl :: 0;
    asm("rol byte [%es:eax],0x10");
    *eax = *eax + 130;
    al = 6;
    *edx = *edx & 6;
    asm("aam 0xe");
    *eax = *eax + al;
    asm("ror byte [esi],1");
    *ecx = *ecx & al;
    asm("ror byte [esi],cl");
    *edx = *edx & al;
    asm("xchg eax,ebp");
    ah = ah - *(eax + 539660568);
    asm("adc [eax+0x930a0012],dl");
    ah = ah - *(eax + 8);
    asm("aam 0xe");
    *ebx = *ebx & al;
    asm("xchg eax,edx");
    asm("adc al,[eax+0x8]");
    asm("rol byte [esi],1");
    asm("rol byte [eax],0x94");
    asm("adc al,[eax+0x29009]");
    dl = dl | al;
    asm("rol byte [%es:eax],0x10");
    *eax = *eax + 115;
    *(6 + edx * 4) = *(6 + edx * 4) & 6;
    asm("adc [eax],al");
    asm("sbb [edi-0x1],bh");
    asm("Unknown opcode 0xfe");
    (save)ecx;
    asm("xchg eax,edx");
    (restore)es;
    edi = -16810009;
    asm("xchg eax,edx");
    (restore)es;
    edi = -1090005780;
    asm("in al,dx");
    *L00000010 = *L00000010 + cl;
    asm("rol byte [esi],cl");
    al = *L4100400C;
    (save)ecx;
    asm("adc [eax],al");
    dl = dl | al;
    asm("daa");
    edi = -1090006292;
    eax = L012124c0();
    asm("xchg eax,edx");
    (save)es;
    ah = (eax + 1 | edx) - *(ecx - 84);
    asm("rcr byte [edi],1");
    edi = 539660776;
    dl = dl + *(eax + 268976134);
    *eax = *eax + 95;
    *edx = *edx << cl;
    *eax = *eax & dl;
    asm("adc [eax],al");
    asm("sbb [edi-0x1],bh");
    asm("Unknown opcode 0xfe");
    eax :: -390133870;
    asm("rol byte [edi],cl");
    edi = 1093864;
    *(edx + 269041670) = *(edx + 269041670) | dl;
    *eax = *eax + 87;
    *edx = *edx >> 97;
    al = *esi;
    asm("adc [eax],al");
    asm("sbb [edi-0x1],bh");
    asm("Unknown opcode 0xfe");
    eax = eax ^ -390133870;
    if(!(esi = esi + 1)) {
    }
    asm("Unknown opcode 0xfe");
    edx = edx ^ *(edx + -756760825);
    (restore)es;
    edi = 537957608;
    dl = dl + *(edx + -737591290);
    ah = ah - *(ecx - 84);
    asm("rol byte [edi],cl");
    edi = 1093864;
    al = al | dl;
    (restore)es;
    edi = 1613403108;
    dl = dl + *(edx + 269041670);
    *eax = *eax + 71;
    *edx = *edx << 1;
    asm("pusha");
    asm("adc [eax+0xa0180010],dl");
    (restore)es;
    edi = -16810008;
    al = al & 146;
    asm("adc [eax],al");
    asm("adc [edi-0x1],bh");
    asm("Unknown opcode 0xfe");
    dl = dl & *(edx + -756236537);
    asm("adc al,0x20");
    dh = dh + *(eax + -804782064);
    (restore)es;
    edi = 1630982892;
    al & 16;
    *eax = *eax + 59;
    *esi = *esi << 1;
    asm("pusha");
    *(eax + -1609039856) = *(eax + -1609039856) | dl;
    (restore)es;
    edi = -16810008;
    asm("sbb [edx+0xd2100010],dl");
    asm("adc al,0x20");
    dh = dh + *(eax + 268959760);
    *eax = *eax + 51;
    asm("Unknown opcode 0xd2");
    asm("%s popa");
    al & 144;
    asm("adc [eax],al");
    asm("sbb [edi-0x1],bh");
    asm("Unknown opcode 0xfe");
    asm("adc [edx+0xd2ecbf07],edx");
    (restore)es;
    edi = 1093868;
    *eax = *eax | dl;
    *eax = *eax + 44;
    *esi = *esi << cl;
    asm("pusha");
    *eax = *eax | al;
    ecx = ecx + 1;
    *(eax + -1609031152) = *(eax + -1609031152) | edx;
    asm("adc [eax],al");
    *(edx + 1075380240) = *(edx + 1075380240) | dl;
    *(ecx + 17) = *(ecx + 17) + al;
    asm("xchg eax,esp");
    asm("adc [edx],ah");
    asm("sbb [eax],dl");
    *eax = *eax + 36;
    asm("loopne 0x1155c");
    asm("bound edx,[eax+edx*4]");
    asm("adc [eax],al");
    asm("sbb eax,esp");
    ah = ah + *edx;
    asm("adc al,0x94");
    asm("adc [edx],ah");
    asm("sbb [eax+0x0],al");
    ecx = ecx + 1;
    dl = dl | *(edx + 1074790416);
    *(ecx + 11) = *(ecx + 11) + al;
    asm("adc [eax],al");
    asm("adc [eax],dh");
    *eax = *eax + 27;
    asm("adc [eax],ah");
    asm("adc al,dl");
    asm("daa");
    edi = 537958120;
    eax = eax + edx;
    (restore)es;
    edi = 1074172136;
    dh = dh | dl;
    ah = ah - *ecx;
    al = *esi;
    esi = esi + 1;
    asm("aam 0x7");
    edi = -1607822360;
    dl = dl + *(edx + -1878441978);
    bh = bh + *LC05525D8;
    dl = dl + al;
    ah = ah & *(eax + 16);
    asm("xchg eax,esp");
    ah = ah + *(eax + -1599963135);
    (restore)ds;
    *(edi + 668268031) = *(edi + 668268031) | bh;
    edi = 8401128;
    dl = dl | *(eax + 2132279312);
    asm("Unknown opcode 0xff");
    asm("std");
    goto Lecc01d3a;
    asm("rol byte [edi],cl");
    edi = 1093868;
    *eax = *eax | dl;
    *eax = *eax + 4;
    *esi = *esi << cl;
    asm("pusha");
    al = al | 64;
    *(eax - 13) = *(eax - 13) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000115c9 -> 0001158a */
/*	Procedure: 0x000115C8 - 0x0001160F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__register_frame_info()
{



    asm("popf");
    asm("jecxz 0x1158a");
    eax = eax + 1;
    *eax = *eax + al;
    ch = ch + *edi;
    *eax = *eax + al;
    eax = eax + 1;
    asm("scasb");
    asm("adc eax,0x5aef0e2");
    asm("ror byte [edi],0xf0");
    asm("%e pusha");
    al :: 0;
    asm("%e pusha");
    al = al + 192;
    asm("%e inc eax");
    *ecx = *ecx + dl;
    *eax = *eax + al;
    *(eax + -770170862) = *(eax + -770170862) + dl;
    eax = eax + 650119360;
    asm("pusha");
    al = (al | 208) + *(al | 208);
    *esi = *esi << 96;
    asm("adc al,dl");
    asm("%e pusha");
    asm("adc al,0xf2");
    al = al & *eax;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00011611 -> 000115d2 */
/*	Procedure: 0x00011610 - 0x00011657
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__register_frame_info_table()
{



    asm("popf");
    asm("jecxz 0x115d2");
    eax = eax + 1;
    *eax = *eax + al;
    ch = ch + *edi;
    *eax = *eax + al;
    eax = eax + 1;
    asm("scasb");
    asm("adc eax,0x5aea8e2");
    asm("ror byte [edi],0xf0");
    asm("%e pusha");
    al = al | dh;
    asm("%e pusha");
    al = al | 192;
    asm("%e pusha");
    *(al + 17) = *(al + 17) + al + 17;
    *(eax + -770170862) = *(eax + -770170862) + dl;
    al = eax + 650119360 + 1 + dl + *(eax + 650119360 + 1 + dl);
    *esi = *esi << 96;
    asm("adc al,dl");
    asm("%e pusha");
    asm("adc al,0xf2");
    al = al & *eax;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00011659 -> 0001161a */
/*	Procedure: 0x00011658 - 0x000116D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__deregister_frame_info()
{



    asm("popf");
    asm("jecxz 0x1161a");
    eax = eax + 1;
    *eax = *eax + al;
    ch = ch + *edi;
    *eax = *eax + al;
    eax = eax + 1;
    asm("scasb");
    asm("adc eax,0x5ae60e2");
    asm("ror byte [edi],0x11");
    *eax = *eax + al;
    *(eax + -736616430) = *(eax + -736616430) + dl;
    eax = eax + 47188160;
    *eax = *eax + 128;
    *L80020020 = al;
    *edx = *edx + dl;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edx],cl");
    *eax = *eax + 208;
    *(edx + -2146297856) = 0;
    dl = dl | ah + *(eax + 8);
    *edx = *edx << 1;
    *(ah + *(eax + 20)) = *(ah + *(eax + 20)) + 208;
    *(edx + -2147352544) = 0;
    *(al + *eax | *ecx) = *(al + *eax | *ecx) + (al + *eax | *ecx);
    *eax = *eax + al;
    eax = eax + 1;
    dl = 208;
    *(ah + *(eax + 12) + -1568668160) = *(ah + *(eax + 12) + -1568668160) ^ ah + *(eax + 12);
    *eax = *eax & al;
    asm("adc bh,[edi+0x294f2ff]");
    asm("pusha");
    asm("adc al,0x40");
    *(eax - 81) = *(eax - 81) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000116d9 -> 00011698 */
/*	Procedure: 0x000116D8 - 0x000117FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__frame_state_for()
{



    asm("popf");
    asm("jecxz 0x11698");
    (restore)eax;
    > ? L000116dd : ;
    *(eax + edx * 4 + 16) = *(eax + edx * 4 + 16) - 1;
    *eax = *eax + bl;
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    asm("xchg eax,edx");
    *eax = *eax & al;
    al = al + *(eax + 277874432);
    if(!( *edx = *edx + dl)) {
    }
    *(ecx + -658569326) = *(ecx + -658569326) + 1;
    al = *L12002092;
    *eax = *eax + 4;
    (restore)es;
    ebp = 8392896;
    eax :: 2101424;
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    *eax = *eax + al;
    eax = eax + 1;
    al = *L18221094;
    asm("rcl byte [edi],1");
    edi = -1090006294;
    asm("Unknown opcode 0xdc");
    asm("Unknown opcode 0xd0");
    asm("aaa");
    edi = -1121463702;
    asm("Unknown opcode 0xc4");
    asm("rol byte [eax],1");
    al = al + 144;
    bh = bh + *edi;
    asm("cld");
    dl :: 0;
    *(eax + -1576468478) = *(eax + -1576468478) + dl;
    al = (al & 128) + *eax + *eax + 128;
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    *ecx = *ecx + dl;
    asm("sbb al,[eax+0x7d00c00]");
    edi = 1085656;
    asm("adc [edx+0x94c0bd07],dl");
    (restore)es;
    edi = -16810024;
    cl = 150;
    asm("adc [eax],ah");
    *(eax + -2146959344) = *(eax + -2146959344) + ah;
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    *ecx = *ecx + dl;
    bh = bh | *(edi + 277936895);
    *eax = *eax + dl;
    asm("rol byte [edi],1");
    edi = 4903128;
    *(eax + 309993634) = *(eax + 309993634) + al;
    *eax = *eax + 7;
    al = *L9010A004;
    asm("adc [eax],al");
    asm("adc [edi-0x1],bh");
    asm("std");
    asm("outsd");
    asm("xchg eax,edx");
    (restore)es;
    ebp = -1123560772;
    esp = 150995616;
    asm("rol byte [eax+eax*4],1");
    dl = dl + dl;
    *(eax + -1576501244) = *(eax + -1576501244) | dl;
    al = al + 160 + *eax + 128;
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    *ecx = *ecx + dl;
    asm("sbb al,[eax+0x27d20e00]");
    ebp = -1123561288;
    eax = 402694784;
    asm("sbb [eax+0x10900a00],al");
    *eax = *eax + dl;
    asm("xchg eax,edx");
    (restore)es;
    ebp = -1090022208;
    asm("fdivr dword [edi-0x1]");
    asm("Unknown opcode 0xfe");
    asm("xchg eax,esp");
    asm("xchg eax,esi");
    (restore)es;
    ebp = 1089720;
    *(eax + 168886436) = *(eax + 168886436) | al;
    edi = 131135487;
    ebp = 1085624;
    asm("sbb [edx+0x40c0bd07],edx");
    *(eax + 96) = *(eax + 96) + al;
    asm("xchg eax,esp");
    asm("adc [edx],ah");
    asm("adc al,0xb0");
    asm("adc [eax],al");
    asm("sbb [ecx+0x8108e0c7],eax");
    Le39e1802();
}

/*	Procedure: 0x00011800 - 0x00011853
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x117c2");
    eax = eax + 1;
    *eax = *eax + al;
    ch = ch + *edi;
    *eax = *eax + al;
    eax = eax + 1;
    asm("scasb");
    asm("adc eax,0x5aeb8e0");
    asm("ror byte [edi],0x11");
    *eax = *eax + al;
    *(eax + -803463150) = *(eax + -803463150) + dl;
    eax = eax + 47319232;
    asm("aas");
    asm("cld");
    *(edx + -2147287169) = 0;
    *(eax + -788775166) = *(eax + -788775166) | esp;
    *(edi + -1610612542) = *(edi + -1610612542) + bl;
    al = al + 63;
    asm("cld");
    asm("rol byte [eax+eax],1");
    *(eax + 318717858) = *(eax + 318717858) + al;
    *eax = *eax + al;
    edi = -394066721;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00011855 -> 00011816 */
/*	Procedure: 0x00011854 - 0x0001185F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

init_dummy()
{



    asm("popf");
    asm("jecxz 0x11816");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00011861 -> 00011822 */
/*	Procedure: 0x00011860 - 0x0001187B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x11822");
    al = *LC1FCFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001187d -> 0001183e */
/*	Procedure: 0x0001187C - 0x0001188F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1183e");
    al = *L98FCFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0002190C - 0x00021917
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

/*	Procedure: 0x00021918 - 0x00021923
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

/*	Procedure: 0x00021924 - 0x0002192F
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

/*	Procedure: 0x00021930 - 0x0002193B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    *(eax + *eax + esi - 65) = *(eax + *eax + esi - 65) + dl;
    asm("Unknown opcode 0xff");
    goto L00000003;
}

/*	Procedure: 0x0002193C - 0x00021947
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

malloc()
{



    *(eax + 48) = *(eax + 48) + eax + *eax;
    edi = 124927;
    *eax = *eax + al;
}

/*	Procedure: 0x00021948 - 0x00021953
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

strcmp()
{



    *(eax + esi - 65) = *(eax + esi - 65) + ch;
    goto ( *esp);
    *eax = *eax + eax;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x00021954 - 0x0002196B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

strlen()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
    eax = eax + *eax;
    *(eax + esi + 31391679) = *(eax + esi + 31391679) + al;
    *eax = *eax + al;
    *ebx = *ebx + al;
}

/*	Procedure: 0x0002196C - 0x00021977
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

memcpy()
{



    *(eax + -603996368) = *(eax + -603996368) + dl;
    *eax = *eax + eax;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x00021978 - 0x00021983
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

free()
{



    eax = eax + *eax;
    *(eax + esi + 30998463) = *(eax + esi + 30998463) + bl;
    *eax = *eax + al;
    *ebx = *ebx + al;
}

/*	Procedure: 0x00021984 - 0x0002198F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

abort()
{



    *(eax + -704659664) = *(eax + -704659664) + ch;
    *eax = *eax + eax;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x00021990 - 0x0002199F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

memset()
{



    eax = eax + *eax;
    *(eax + esi + 30605247) = *(eax + esi + 30605247) + dh;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x00010a6c     116 */ /* unknown */ void 	_start;
/* 0x00010ae0     124 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010b5c      12 */ /* unknown */ void 	fini_dummy;
/* 0x00010b68      68 */ /* unknown */ void 	frame_dummy;
/* 0x00010bac     344 */ /* unknown */ void 	main;
/* 0x00010d04       8 */ /* unknown */ void 	func1;
/* 0x00010d0c       8 */ /* unknown */ void 	func2;
/* 0x00010d14       8 */ /* unknown */ void 	func3;
/* 0x00010d1c       8 */ /* unknown */ void 	func4;
/* 0x00010d24       8 */ /* unknown */ void 	func5;
/* 0x00010d2c       8 */ /* unknown */ void 	func6;
/* 0x00010d34       8 */ /* unknown */ void 	func7;
/* 0x00010d3c       8 */ /* unknown */ void 	func8;
/* 0x00010d44    2748 */ /* unknown */ void 	/u0/udon/src/temp/gcc-2.8.1/./frame.c;
/* 0x00010d44      52 */ void  *	decode_uleb128();
/* 0x00010d78      76 */ void  *	decode_sleb128();
/* 0x00010dc4      72 */ void 	fde_insert();
/* 0x00010e0c      84 */ size_t	count_fdes();
/* 0x00010e60     156 */ void 	add_fdes();
/* 0x00010efc     272 */ void 	frame_init();
/* 0x0001100c     232 */ /* unknown */ void 	find_fde();
/* 0x000110f4     296 */ void  *	extract_cie_info();
/* 0x0001121c     940 */ void  *	execute_cfa_insn();
/* 0x000115c8      72 */ void 	__register_frame_info();
/* 0x00011610      72 */ void 	__register_frame_info_table();
/* 0x00011658     128 */ void 	__deregister_frame_info();
/* 0x000116d8     296 */ struct frame_state *	__frame_state_for();
/* 0x00011800      84 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00011854      12 */ /* unknown */ void 	init_dummy;
/* 0x00011860      28 */ /* unknown */ void 	_init;
/* 0x0001187c       1 */ /* unknown */ void 	_fini;
/* 0x00011890       4 */ /* unknown */ void 	_lib_version;
/* 0x000118bb       0 */ /* unknown */ void 	_etext;
/* 0x000218bc       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000218dc       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x0002190c      12 */ /* unknown */ void 	atexit;
/* 0x00021918      12 */ /* unknown */ void 	exit;
/* 0x00021924      12 */ /* unknown */ void 	_exit;
/* 0x00021930      12 */ /* unknown */ void 	printf;
/* 0x0002193c      12 */ /* unknown */ void 	malloc;
/* 0x00021948      12 */ /* unknown */ void 	strcmp;
/* 0x00021954      24 */ /* unknown */ void 	strlen;
/* 0x0002196c      12 */ /* unknown */ void 	memcpy;
/* 0x00021978      12 */ /* unknown */ void 	free;
/* 0x00021984      12 */ /* unknown */ void 	abort;
/* 0x00021990       1 */ /* unknown */ void 	memset;
/* 0x000219a0       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00021a48       0 */ /* unknown */ void 	p.2;
/* 0x00021a4c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00021a4c       0 */ /* unknown */ void 	force_to_data;
/* 0x00021a50       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00021a54       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00021a58       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00021a5c       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00021a5c       0 */ /* unknown */ void 	__FRAME_BEGIN__;
/* 0x00021bac       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00021bb0       0 */ /* unknown */ void 	_edata;
/* 0x00021bb0      24 */ /* unknown */ void 	object.7;
/* 0x00021bc8       4 */ /* unknown */ void 	objects;
/* 0x00021bcc       4 */ /* unknown */ void 	_environ;
/* 0x00021bcc       4 */ /* unknown */ void 	environ;
/* 0x00021bd0       0 */ /* unknown */ void 	_end;
/* 0x00021bd0       0 */ /* unknown */ void 	_END_;
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
