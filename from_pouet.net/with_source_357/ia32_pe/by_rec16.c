/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_357/ia32_pe/subject.exe'
 */

/* DEST BLOCK NOT FOUND: 00407198 -> 004011cb */
stack space not deallocated on return
/*	Procedure: 0x00407000 - 0x0040735F
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__(A8, A10)
/* unknown */ void  A8;
/* unknown */ void  A10;
{



    asm("pusha");
    eax = L00407006();
    ebp = ebp | -1;
    ebx = 0;
    (restore)esi;
    edi = esi + -24582;
    (save)edi;
    esi = esi + 435;
    goto L0040702e;
L00407028:
    al = *esi;
    esi = esi + 1;
    *edi = al;
    edi = edi + 1;
L0040702e:
    if(!(ebx = ebx + ebx)) {
        ebx = *esi;
        asm("adc ebx,ebx");
    }
    if(esi = esi - -4) {
        goto L00407028;
    }
    eax = 1;
L00407040:
    if(!(ebx = ebx + ebx)) {
        ebx = *esi;
        esi = esi - -4;
        asm("adc ebx,ebx");
    }
    asm("adc eax,eax");
    if(ebx = ebx + ebx) {
        goto L00407040;
    }
    != ? 0x40705c : ;
    ebx = *esi;
    asm("adc ebx,ebx");
    if(esi = esi - -4) {
        goto L00407040;
    }
    ecx = 0;
    if(!(eax = eax - 3)) {
        eax = eax << 8;
        al = *esi;
        eax = eax ^ -1;
        if(esi = esi + 1) {
            goto L004070e6;
        }
        ebp = eax;
L00407070:
        if(!(ebx = ebx + ebx)) {
            ebx = *esi;
            esi = esi - -4;
            asm("adc ebx,ebx");
        }
        asm("adc ecx,ecx");
        if(!(ebx = ebx + ebx)) {
            ebx = *esi;
            asm("adc ebx,ebx");
        }
        asm("adc ecx,ecx");
        if(!(esi = esi - -4)) {
            ecx = ecx + 1;
L0040708d:
            if(!(ebx = ebx + ebx)) {
                ebx = *esi;
                esi = esi - -4;
                asm("adc ebx,ebx");
            }
            asm("adc ecx,ecx");
            if(ebx = ebx + ebx) {
                goto L0040708d;
            }
            != ? 0x4070a9 : ;
            ebx = *esi;
            asm("adc ebx,ebx");
            if(esi = esi - -4) {
                goto L0040708d;
            }
            ecx = ecx + 2;
        }
        eax :: -3328;
        asm("adc ecx,+0x1");
        edx = edi + eax;
        if(eax <= -4) {
            goto L004070d0;
        }
L004070bc:
        al = *edx;
        edx = edx + 1;
        *edi = al;
        edi = edi + 1;
        if(ecx = ecx - 1) {
            goto L004070bc;
        }
        goto L0040702e;
    }
    eax = ebp;
    goto L00407070;
L004070d0:
    eax = *edx;
    edx = edx + 4;
    *edi = eax;
    edi = edi + 4;
    if(ecx = ecx - 4) {
        goto L004070d0;
    }
    edi = edi + ecx;
    goto L0040702e;
L004070e6:
    (restore)esi;
    edi = edi - *(edi - 4);
    (save)edi;
    edi = esi;
    ecx = 41;
L004070f6:
    al = *edi;
    edi = edi + 1;
    if(al - 232 > 1 || *edi != 1) {
        goto L004070f6;
    }
    eax = *edi;
    bl = *(edi + 4);
    ax = ax >> 8;
    asm("rol eax,0x10");
    asm("xchg al,ah");
    eax = eax - edi;
    bl = bl - 232;
    *edi = eax + esi;
    edi = edi + 5;
    eax = ebx;
    asm("loop 0x4070fb");
    (restore)edi;
L00407123:
    eax = *edi;
    if(eax != 0) {
        ebx = *(edi + 4);
        eax = eax + esi + 20480;
        ebx = ebx + esi;
        (save)eax;
        edi = edi + 8;
        eax = *(esi + 20580)();
        asm("xchg eax,edx");
L00407140:
        al = *edi;
        edi = edi + 1;
        if(al == 0) {
            goto L00407123;
        }
        (save)edx;
        ecx = edi;
        >= ? 0x407153 : ;
        eax = *edi & 65535;
        (save)eax;
        edi = edi + 1 + 1;
        ecx = -1359853481;
        eax = *(esi + 20584)(edx);
        (restore)edx;
        *ebx = eax;
        ebx = ebx + 4;
        goto L00407140;
    }
    ebx = esi - 4;
    edi = edi + 4;
L0040716c:
    eax = *edi & 255;
    edi = edi + 1;
    if(eax != 0) {
        if(al <= 239) {
L00407179:
            ebx = ebx + eax;
            eax = *ebx;
            asm("xchg al,ah");
            asm("rol eax,0x10");
            asm("xchg al,ah");
            eax = eax + esi;
            *ebx = eax;
            goto L0040716c;
        }
        eax = (al & 15) << 16;
        ax = *edi;
        edi = edi + 2;
        goto L00407179;
    }
    asm("popa");
    goto L004011cb;
    (save)ebp;
    eax = eax;
    *ecx = *ecx & ecx;
    *edx = *edx | eax;
    asm("xchg edi,esp");
    (restore)es;
    al & 159;
    asm("xchg eax,edi");
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    (restore)eax;
    asm("Unknown opcode 0x82");
    eax = eax - -167772095 + *(eax - -167772095);
    *edi = *edi + bh;
    *eax :: eax;
    (save)dh + bh;
    (save) *ecx;
    asm("rol byte [eax-0x75],0x4c");
    al = al & 4;
    *(ecx + 4) & 259260422;
L004071c9:
    *A10 = A8;
    eax = 2013247747;
    asm("out dx,eax");
    asm("adc bl,al");
    (save)ebx;
    (save)esi;
    (save)edi;
    asm("adc dl,[eax]");
    (save)eax;
    (save)-2;
    (save)4198400;
    (save) *%fs:0xdddbff15];
    ecx = 421890310;
    *(ebx + 208678744) = *(ebx + 208678744) & 421890310;
    if(esi != -1) {
        esi :: *(edi + edi * 2 - 39);
        (fsave)(frestore) / st7;
        if(al = al & 36) {
            goto L00407225;
        }
        esi = esi + esi * 2;
        ecx = *(ebx + esi * 4);
        ss = esp;
        if(eax = eax - 1) {
            goto L004071c9;
        }
        != ? 0x4071f1 : ;
        > ? L0040721b : ;
        edi = -1286275073;
    }
    bl = bl | ch;
    *(edi + ecx * 4 + 5) = *(edi + ecx * 4 + 5) << 1;
L00407225:
    eax = eax ^ 1594672259;
    (restore)esi;
    (restore)ebx;
    return;
    (save)ebp;
    ebp = esp;
    (restore)esp;
    (save)ebp;
    (save)0;
    esi = 24047611;
    (save)1979669138;
    *eax = *eax + eax;
    al = (al | ch) + 4;
    (restore)ebp;
    asm("sbb al,0x89");
    asm("in al,dx");
    (restore)ebp;
    return;
    asm("cld");
    asm("jpo 0x40724a");
    asm("Unknown opcode 0xff");
    asm("out dx,al");
    *(ebx + -1960638228) = *(ebx + -1960638228) & al;
    (restore)ebp;
    al = al | 139;
    ebp = ebp + 1;
    *(ebx + -1994051544) = *(ebx + -1994051544) | ah;
    asm("sbb eax,0x6dbb052c");
    asm("aas");
    dh = 247;
    asm("scasb");
    if(!(eax = eax + 1)) {
        *(ebp - 8) = eax;
L00407270:
        asm("sbb [eax],edx");
L00407275:
        while(eax = eax + -82402308) {
        }
        asm("in eax,dx");
        ecx = -1946401911;
        >= ? L004072af : ;
        asm("jpo 0x40728c");
        asm("xchg eax,ecx");
        asm("bound ecx,[ebp+0x6e81760c]");
        asm("Unknown opcode 0xdb");
        asm("Unknown opcode 0xfe");
        <= ? L0040721e : ;
        al = al + 215;
        dl :: *(esi + 85);
        ebp = ebx + 16;
        asm("xchg cl,[edi+0xba4d5e5e]");
        asm("insd");
        asm("xlatb");
        asm("std");
        if(eax != 0) {
            >= ? 0x4072d7 : ;
            eax = eax & 1979740755;
            asm("xchg eax,ecx");
            (save)esi;
            if(al = al + 29) {
                goto L00407270;
            }
            (restore)ebx;
            asm("Unknown opcode 0xc6");
            al = al | 28;
            *esi = *esi | dh;
            eax = *(edi + ecx * 4);
            eax = *(ebx + 12);
            *eax = *eax ^ cl;
            *(ebx + 254136304) = *(ebx + 254136304) / *(ebx + 254136304);
            edx = *(ebx + 254136304) % *(ebx + 254136304);
            al = al ^ 143;
            goto L00407275;
            if(al = al - 235) {
                goto L00407314;
            }
        }
        (save)-1;
        ch = ch - *(edi - 41);
        ebp = -943977443;
        eax = eax + -1911850488;
        (save)11;
        *(ecx + 14) = *(ecx + 14) >> 187;
    }
    *L755F4088 = *L755F4088 & ebx;
    *eax = *eax | cl;
    asm("loope 0x4072e3");
    asm("out dx,al");
    *edi = *edi + eax;
    669716993 :: -95;
    dl = dl - *L27EB1251;
    (restore)esi;
    esp = esp & -145189776;
    *edi = *edi - cl;
    *L3E001A24 :: -16;
L00407314:
    if(!( *(ebp + 245491835) = (frestore) - *(ebp - 61))) {
    }
    asm("loopne 0x407373");
    asm("adc bh,dl");
    (restore)ebp;
    eax = *%fs:0xe19bb42c] ^ 454322334;
    eax = L0000aa50(ebp);
    asm("adc [ecx+0xd768e865],cl");
    (save)es;
    asm("sti");
    esi = 68950560;
    asm("sbb [edx+0x28],ch");
    if(!(ecx = ecx - 1)) {
        bl = 237;
        ebp = ebp + 1;
        dh = 5;
        asm("sbb al,0x16");
        al = al ^ 12;
        asm("sbb al,0x35");
        asm("cld");
        asm("std");
        (fsave) *edx;
        asm("insb");
        asm("xchg ebx,[eax]");
        ecx = 0;
    }
    *(ebp - 4) = ecx;
    (save)eax;
    return(al - *(eax - 55));
}

/* DEST BLOCK NOT FOUND: 004073e5 -> 0db57031 */
/*	Procedure: 0x00407360 - 0x00407408
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00407360()
{



    asm("std");
    *LEDBBD8CD = eax;
    (save)ecx;
    *(edi + 17) = *(edi + 17) | dl;
    esi = esi + *(eax + -1542994039);
    (save)-1334936080;
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    (save)ecx;
    asm("%f retf 0xec14");
    al = al | 28;
    asm("in eax,dx");
    ebp = cs;
    al = *esi;
    esi = esi + 1;
    *edx = *edx | edi;
    asm("rcr byte [edi-0xb],1");
    bh = *(ecx + -1025826812);
    (fsave) *(eax + 73);
    *(esp + ecx * 4) = -134587814;
    *eax = *eax / *eax;
    edx = *eax % *eax;
    asm("xchg eax,ebp");
    *(esi - 8) = !( *(esi - 8));
    asm("fdivr qword [esp+0x38]");
    asm("clc");
    asm("sbb al,0xe9");
L004073a2:
    asm("sbb al,0x68");
    asm("insb");
    edi = edi - 1;
    asm("jpo 0x407367");
    (restore)ebp;
    asm("xchg eax,edi");
    if(eax = al + 74 & -1281030724) {
        goto L004073a2;
    }
    *eax :: bl;
    asm("adc al,ah");
    (save)516897633;
    bh = bh ^ al;
    ecx = ecx + eax;
    esp = esp & *edi;
    ebp = ebp + *(eax + 82);
    asm("sbb [eax+edx],al");
    dl = 132;
    asm("std");
    al = al - 240;
    *(eax + 51) = *(eax + 51) & ebp;
    asm("o16 mov dh,0xb9");
    asm("out 0x33,eax");
    ebp = 202106984;
    al = 88;
    goto L0db57031;
    esp = ebp;
    (restore)ebp;
    asm("cld");
    asm("sti");
    dh = 223;
    if(!(eax = (al ^ 48) - -1821153573)) {
        esp = esp - 1;
        al = al & 235;
        ch = ch + bl;
        asm("retf 0x16a");
        asm("adc al,bh");
        esi = esi - 1;
        asm("aam 0x20");
        esi = esi + 1;
        asm("insb");
        *(esp + esi * 8 + 66) = *(esp + esi * 8 + 66) - 204;
    }
    dh = *(ebx - 75);
    asm("retf");
}

/*	Procedure: 0x00407409 - 0x0040740B
 *	Argument size: 24515
 *	Local size: 0
 *	Save regs size: 0
 */

L00407409()
{



}

/* DEST BLOCK NOT FOUND: 0040759d -> 00407608 */
/*	Procedure: 0x0040740C - 0x004075AE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040740C()
{



    >= ? L0040740d : ;
    ecx = ecx + 1;
    *edx = *edx | esi;
    *ebx = *ebx & al;
    asm("repne or edx,[eax]");
    asm("adc al,0x18");
    esi = esi + *edx;
    *ebx = *ebx & al;
    asm("sbb al,0x20");
    al = al & 32;
    esi = esi + *edx;
    *eax = *eax & ch;
    al = al ^ 50;
    *ebx = *ebx & al;
    bh = bh ^ *eax;
    esp = esp + 1;
    eax = eax - 1;
    esi = esi + *edx;
    *ebx = *ebx & al;
    esp = esp - 1;
    (save)eax;
    (save)esp;
    *ebx = *ebx & al;
    ah = ah ^ *eax;
    (restore)eax;
    (restore)esp;
    ah = ah ^ *eax;
    esi = esi + *edx;
    asm("pusha");
    asm("%f push dword 0x6c8a2883");
    bh = bh + bh;
    asm("daa");
    edx = edx + 1;
    *edi = al;
    (save)ebp;
    asm("outsb");
    asm("popa");
    asm("bound ebp,[ebp+0x20]");
    asm("Unknown opcode 0xdf");
    asm("std");
    bh = 255;
    if(!(edi = edi + 1)) {
        *(ebp + 120) = *(ebp + 120) & ah;
        asm("arpl [%gs:ebp+0x74],si");
        ah = ah | *(ebx + 114);
        asm("outsb");
        (restore)edi;
        asm("arpl [ebp+0x6e],bp");
        asm("Unknown opcode 0x2e");
        asm("Unknown opcode 0x0f");
        al = al | *eax;
        asm("%c pop esp");
        ch :: 63;
        *eax = *eax & al;
        asm("arpl [ecx+0x64],sp");
        asm("insd");
        946698286 = *(ebp + 109) * esi;
        asm("Unknown opcode 0xdb");
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xdb");
        goto ( *(ecx + 110));
        226126188 = *(ecx + ebp * 2 + 97) * esi;
        ebp = ebp - 1;
        ecx = ecx - 1;
        esp = esp + 1;
        ecx = ecx + 1;
        (save)ebx;
        if(*(ebx + 111) = *(ebx + 111) & dh) {
            goto L0040750a;
        }
        asm("%f add eax,0xdc93ec79");
        dh = 115;
        ebp = ebp - 1;
        asm("insd");
        asm("arpl [edx],di");
        asm("insd");
        if(edx = edx + 1) {
            goto L00407517;
        }
        *edx = *edx + ah;
        asm("cmc");
        goto ( *(ebp + 114));
        if(al = al + 89) {
            goto L00407525;
        }
        < ? L004074f2 : ;
        *L081E0A73 = *L081E0A73 & ah;
        eax = ah - *(eax + edx * 2) + 1;
        asm("salc");
        asm("Unknown opcode 0x82");
        (save)cs;
        eax = eax + 1;
        *ebx & -1329877882;
        *(ecx + edx) = *(ecx + edx) + dl;
    }
    asm("adc al,0x15");
    *(edx + 42) = *(edx + 42) - al;
    esi = esi + edx;
    edi = edi << ebp;
    *(edx + eax * 4 - 96) & dl;
    asm("xchg eax,esp");
    *(ebp + 51) = *(ebp + 51) << 81;
    asm("pushf");
    al = al | 49;
    *(edi - 5) = *(edi - 5) + ebx;
    asm("%e loopne 0x40753a");
    asm("%g a16 jz 0x407535");
    asm("a16 dec ebp");
    asm("%g jnc 0x407568");
    asm("popa");
    (fsave) *ebx;
    if(!(al = al | 236)) {
        al = al ^ 24;
        asm("popa");
        if(!(esp = esp - 1)) {
            eax = eax + 1;
            *L301332FF = *L301332FF ^ dl;
            asm("Unknown opcode 0xc7");
L0040750a:
            eax = eax | 1684107116;
            asm("outsd");
            bl = bl ^ al;
            (restore)es;
            asm("in al,dx");
            asm("%f jnz 0x407584");
L00407517:
            asm("aaa");
            if(ebp = ebp - 1) {
                goto L00407587;
            }
            asm("popa");
            >= ? 0x407531 : ;
        }
        asm("loopne 0x4075a1");
        asm("sbb eax,[esi+0x61]");
L00407525:
        if(*esi < ah) {
            goto L0040759b;
        }
        asm("popa");
        asm("arpl [ebx+0x67],bp");
        if(edx = edx + 1) {
            goto L00407525;
        }
        dl = 109;
        asm("xchg eax,edi");
        ecx = 1664098896;
        if(ebp = ebp + 1) {
            goto L00407564;
        }
        bh = 0;
        == ? L004074f8 : ;
    }
    asm("adc esi,[ebp+0x70]");
    asm("adc [eax],al");
    al = al ^ 82;
    if(al & 170) {
        goto L004075b4;
    }
    (save)ebp;
    asm("outsb");
    eax = eax - 2010831712;
    1157977866 = *ecx * edi;
    ch & bl;
    asm("%c salc");
    asm("insd");
    asm("adc al,0xb6");
    asm("sbb al,0x44");
    asm("Unknown opcode 0xc7");
    eax & 1594320995;
L00407564:
    asm("fdivr qword [edx+0x847b76f]");
    ebp = ebp - 1;
    asm("popa");
    (restore)ds;
    if(ecx = ecx + 1) {
        goto L004075d7;
    }
    >= ? L00407580 : ;
    >= ? L004074f5 : ;
    asm("%g jo 0x407566");
    asm("bound ebx,[ebx-0x45]");
    asm("%g js 0x40752e");
    if(eax = eax + 1862755686) {
        goto L004075e9;
    }
    asm("outsb");
    edi = 107929014;
L00407587:
    >= ? 4224510 : ;
    asm("%e jz 0x4075f5");
    (restore)es;
    < ? L004075c0 : ;
    asm("adc eax,0x60e56572");
    asm("cld");
    asm("out dx,al");
    asm("insd");
    asm("outsd");
L0040759b:
    <= ? L004075a4 : ;
    >= ? L00407608 : ;
    asm("a16 outsb");
    asm("popa");
    asm("insb");
    <= ? L004075d2 : ;
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + al;
    *(eax + eax) = *(eax + eax) + 255;
}

/* address  size  */
/* 0x00406064       0 */ /* unknown */ void 	__imp__LoadLibraryA;
/* 0x00406068       0 */ /* unknown */ void 	__imp__GetProcAddress;
/* 0x00407000       0 */ /* unknown */ void 	__entry_point__;
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
option: -usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
