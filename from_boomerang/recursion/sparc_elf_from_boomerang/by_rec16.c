/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000105CC - 0x00010647
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
    asm("scasb");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[ebx]");
    asm("int3");
    eax = eax + 1;
    *(ecx - 86) = *(ecx - 86) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *ecx = *ecx + al;
    asm("insb");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("adc dword [esi+0xd404e212],+0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    asm("popa");
    *eax = *eax + eax;
    *eax = *eax + al;
    *(ecx - 97) = *(ecx - 97) + eax + 1;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *eax = *eax + al;
    *(ecx - 96) = *(ecx - 96) + eax + 1;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010649 -> 0001060a */
/*	Procedure: 0x00010648 - 0x0001067A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1060a");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(ecx = ecx + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 344126689;
    asm("pusha");
    asm("adc dl,bl");
    eax = eax + 198705600 + 1;
    *(eax + 301998243) = *(eax + 301998243) + al;
    *eax = *eax + 32;
    *eax = *eax + eax + *eax;
    asm("Unknown opcode 0x82");
    asm("adc [eax+0xc],ah");
}

/*	Procedure: 0x0001067B - 0x0001069D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001067B()
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

/*	Procedure: 0x0001069E - 0x000106F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001069E()
{



}

/* DEST BLOCK NOT FOUND: 000106f5 -> 000106b6 */
/*	Procedure: 0x000106F4 - 0x000106FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x106b6");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010701 -> 000106c2 */
/*	Procedure: 0x00010700 - 0x00010783
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x106c2");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(ecx = ecx + 1)) {
    }
    ebp = ebp - 1;
    asm("scasb");
    eax = eax + 276970721;
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
    ecx = ecx + 1;
    asm("o16 rol byte [0x30bc0],cl");
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
    *(ecx + 91) = *(ecx + 91) + al;
    eax = eax + 1 - _START_;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010785 -> 00010746 */
/*	Procedure: 0x00010784 - 0x000107AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10746");
    edi = edi + -394196768;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *ecx = *ecx + al;
    *ecx = *ecx + (ah | dl | dl);
    *eax = *eax | bh;
    *eax = *eax + ecx;
    *eax = es;
    *eax = *eax + ecx;
    al = *LB4080100;
    *ecx = *ecx + al;
    al = al | cl;
}

/* DEST BLOCK NOT FOUND: 000107ad -> 0001076e */
/*	Procedure: 0x000107AC - 0x000107F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x1076e");
    asm("lock daa");
    al = *L00000344;
    edx = edx + 1;
    asm("adc [ebx-0x18],ah");
    asm("rol byte [edi],cl");
    edx = edx - 1;
    *eax = *eax + eax;
    *eax = *eax + *L41004044;
    (fsave)(frestore) + *edi;
    eax = *L00108244 | 20971650;
    asm("Unknown opcode 0x82");
    *(eax + 13) = *(eax + 13) + al;
    asm("adc [eax],al");
    *eax = *eax + eax;
    *esi = *esi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax],ah");
    *(eax + -2130640880) = *(eax + -2130640880) + dh;
    asm("Unknown opcode 0xc7");
    asm("loopne 0x107f8");
    eax = eax - -476250112;
}

/*	Procedure: 0x000107F4 - 0x0001082F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

b()
{



    asm("popf");
    asm("jecxz 0x107b6");
    asm("lock daa");
    al = *L00000344;
    edx = edx + 1;
    asm("adc [ebx-0x10],ah");
    asm("rol byte [edi],cl");
    al = *L41004044;
    *ecx :: al;
    *eax = *eax + al;
    dl = dl + al;
    (restore)es;
    eax = *( *L7F008244 + 1073807376)();
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010831 -> 000107f2 */
/*	Procedure: 0x00010830 - 0x0001085E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

c()
{



    asm("popf");
    asm("jecxz 0x107f2");
    asm("lock daa");
    al = *L00000344;
    edx = edx + 1;
    asm("adc [ebx-0x8],ah");
    asm("rol byte [edi],cl");
    al = *L41004044;
    *ecx = *ecx - eax;
    *eax = *eax + al;
    dl = dl + al;
    (restore)es;
    al = *L60A08044;
    (save)es;
    asm("sbb [eax+0x12000],al");
    *eax = *eax + al;
}

stack space not deallocated on return
/*	Procedure: 0x0001085F - 0x0001086E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001085F()
{



    esp = esp + 1;
    asm("wait");
    *(eax + 2) = *(eax + 2) - ah;
    *(ecx - 126) = *(ecx - 126) + eax + *eax;
    asm("adc [ebx-0x70],ah");
}

/*	Procedure: 0x0001086F - 0x000108DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001086F()
{



    *(ecx + 16793792) = *(ecx + 16793792) + eax;
    *eax = *eax + al;
    *(eax + 1073881104) = *(eax + 1073881104) + dl;
    *eax = *eax + al;
    asm("sbb [ecx],eax");
    *eax = *eax + al;
    *eax = *eax + dl;
    *eax = *eax + 20;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    eax = eax + *eax;
    *esi = *esi + dh;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x10f00],al");
    *eax = *eax + al;
    asm("adc [eax],ah");
    al = al + 64;
    *eax = *eax + al;
    (save)edi;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x10a00],al");
    *eax = *eax + al;
    asm("adc [eax],ah");
    eax = eax + 1862271040;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x10500],al");
    *eax = *eax + al;
    asm("adc [eax],ah");
    (save)es;
    eax = eax + 1;
    *eax = *eax + al;
    es = *ecx;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e08e2();
}

stack space not deallocated on return
/*	Procedure: 0x000108E0 - 0x0001092B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

d()
{



    asm("popf");
    asm("jecxz 0x108a2");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x0],ah");
    asm("rol byte [edi],cl");
    al = *L40004044;
    asm("std");
    *eax = *eax + eax;
    *eax = *eax + al;
    return;
    esp = esp + 1;
    *(eax + -2147221152) = 0;
    (restore)es;
    *eax = *eax + eax;
    *eax = *eax + al;
    return;
    esp = esp + 1;
    asm("Unknown opcode 0x82");
    *(edi - 1) = *(edi - 1) + bh;
    asm("adc [eax],al");
    *eax = *eax + eax;
    *L00000001 = *L00000001 + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001092d -> 000108ee */
/*	Procedure: 0x0001092C - 0x00010967
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

e()
{



    asm("popf");
    asm("jecxz 0x108ee");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x8],ah");
    asm("rol byte [edi],cl");
    al = *L40004044;
    goto L000007c2;
    al = *L60388344;
    *(eax + 2130771984) = *(eax + 2130771984) + edx;
    asm("Unknown opcode 0xff");
    (save) *(edi + 1);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010969 -> 0001092a */
/*	Procedure: 0x00010968 - 0x000109B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

f()
{



    asm("popf");
    asm("jecxz 0x1092a");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x10],ah");
    asm("rol byte [edi],cl");
    (fsave) *ecx;
    *( *L40004044) = *( *L40004044) + *L40004044;
    dl = dl + al;
    (restore)es;
    *( *L60A08044 + *L60A08044 * 4) = *( *L60A08044 + *L60A08044 * 4) + *L60A08044;
    *edi = *edi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    return;
    esp = esp + 1;
    asm("Unknown opcode 0x82");
    *(edi - 1) = *(edi - 1) + bh;
    asm("adc [eax],al");
    *eax = *eax + eax;
    *L00000001 = *L00000001 + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000109b5 -> 00010976 */
stack space not deallocated on return
/*	Procedure: 0x000109B4 - 0x000109E2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

g()
{



    asm("popf");
    asm("jecxz 0x10976");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x18],ah");
    asm("rol byte [edi],cl");
    al = *L40004044;
    asm("enter 0x1,0x0");
    dl = dl + al;
    (restore)es;
    al = *L60A08044;
    *(eax + eax * 4) = *(eax + eax * 4) + eax;
    *edi = *edi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/*	Procedure: 0x000109E3 - 0x000109FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000109E3()
{



    esp = esp + 1;
    asm("Unknown opcode 0x82");
    *(edi - 1) = *(edi - 1) + bh;
    asm("adc [eax],al");
    *(edi - 1) = *(edi - 1) + edi;
    asm("Unknown opcode 0xff");
    (fsave) *ecx;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e0a02();
}

/*	Procedure: 0x00010A00 - 0x00010A4B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

h()
{



    asm("popf");
    asm("jecxz 0x109c2");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x20],ah");
    asm("rol byte [edi],cl");
    ch = 1;
    *( *L40004044) = *( *L40004044) + *L40004044;
    dl = dl + al;
    (restore)es;
    *( *L60A08044 + *L60A08044 * 4) = *( *L60A08044 + *L60A08044 * 4) + *L60A08044;
    *edi = *edi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    return;
    esp = esp + 1;
    asm("Unknown opcode 0x82");
    *(edi - 1) = *(edi - 1) + bh;
    asm("adc [eax],al");
    *eax = *eax + eax;
    *L00000001 = *L00000001 + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010a4d -> 00010a0e */
/*	Procedure: 0x00010A4C - 0x00010A73
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

i()
{



    asm("popf");
    asm("jecxz 0x10a0e");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x28],ah");
    asm("rol byte [edi],cl");
    al = *L40004044;
    *L00000001 = al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010a75 -> 00010a36 */
/*	Procedure: 0x00010A74 - 0x00010AB7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

j()
{



    asm("popf");
    asm("jecxz 0x10a36");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x30],ah");
    asm("rol byte [edi],cl");
    al = *L40004044;
    asm("cwde");
    *eax = *eax + eax;
    *eax = *eax + al;
    return;
    esp = esp + 1;
    *(eax + -2147221152) = 0;
    eax = eax + 1;
    asm("rol byte [edi],1");
    eax = *L00004044 + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010ab9 -> 00010a7a */
/*	Procedure: 0x00010AB8 - 0x00010B03
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

k()
{



    asm("popf");
    asm("jecxz 0x10a7a");
    asm("lock daa");
    al = *L00000344;
    ebx = ebx + 1;
    asm("adc [eax+0x38],ah");
    asm("rol byte [edi],cl");
    al = *L40004044;
    asm("xchg eax,[ecx]");
    *eax = *eax + al;
    dl = dl + al;
    (restore)es;
    *( *L60A08044 + *L60A08044 * 4) = *( *L60A08044 + *L60A08044 * 4) + *L60A08044;
    *edi = *edi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    return;
    esp = esp + 1;
    asm("Unknown opcode 0x82");
    *(edi - 1) = *(edi - 1) + bh;
    asm("adc [eax],al");
    *(edi - 1) = *(edi - 1) + edi;
    *(edi + 1) = *(edi + 1) - 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010b05 -> 00010ac6 */
/*	Procedure: 0x00010B04 - 0x00010B57
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

l()
{



    asm("popf");
    asm("jecxz 0x10ac6");
    asm("lock daa");
    al = *L00000344;
    asm("adc [eax+0x40],ah");
    asm("rol byte [edi],cl");
    al = *L40004044;
    if(!(ebx = ebx + 1)) {
        *eax = *eax + al;
    }
    dl = dl + al;
    (restore)es;
    *( *L60A08044 + *L60A08044 * 4) = *( *L60A08044 + *L60A08044 * 4) + *L60A08044;
    *edi = *edi + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    return;
    esp = esp + 1;
    asm("Unknown opcode 0x82");
    *(eax + 2) = *(eax + 2) + ah;
    asm("adc [eax],al");
    *(edi - 1) = *(edi - 1) + edi;
    goto ( *esi);
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010b59 -> 00010b1a */
/*	Procedure: 0x00010B58 - 0x00010BA3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10b1a");
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

/* DEST BLOCK NOT FOUND: 00010ba5 -> 00010b66 */
/*	Procedure: 0x00010BA4 - 0x00010BAF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10b66");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010bb1 -> 00010b72 */
/*	Procedure: 0x00010BB0 - 0x00010BCB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10b72");
    al = *LD3FEFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010bcd -> 00010b8e */
/*	Procedure: 0x00010BCC - 0x00010BDF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10b8e");
    al = *L9EFEFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020CA0 - 0x00020CAB
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

/*	Procedure: 0x00020CAC - 0x00020CB7
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

/*	Procedure: 0x00020CB8 - 0x00020CE7
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

/*	Procedure: 0x00020CE8 - 0x00020CF7
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
/* 0x000105cc     124 */ /* unknown */ void 	_start;
/* 0x00010648     172 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000106f4      12 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010700     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010784      40 */ /* unknown */ void 	call_frame_dummy;
/* 0x000107ac      72 */ /* unknown */ void 	main;
/* 0x000107f4      60 */ /* unknown */ void 	b;
/* 0x00010830     176 */ /* unknown */ void 	c;
/* 0x000108e0      76 */ /* unknown */ void 	d;
/* 0x0001092c      60 */ /* unknown */ void 	e;
/* 0x00010968      76 */ /* unknown */ void 	f;
/* 0x000109b4      76 */ /* unknown */ void 	g;
/* 0x00010a00      76 */ /* unknown */ void 	h;
/* 0x00010a4c      40 */ /* unknown */ void 	i;
/* 0x00010a74      68 */ /* unknown */ void 	j;
/* 0x00010ab8      76 */ /* unknown */ void 	k;
/* 0x00010b04      84 */ /* unknown */ void 	l;
/* 0x00010b58      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010ba4      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010bb0      28 */ /* unknown */ void 	_init;
/* 0x00010bcc       1 */ /* unknown */ void 	_fini;
/* 0x00010be0       0 */ /* unknown */ void 	_lib_version;
/* 0x00010be0       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x00010c48       0 */ /* unknown */ void 	_etext;
/* 0x00020c48       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020c70       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020ca0      12 */ /* unknown */ void 	atexit;
/* 0x00020cac      12 */ /* unknown */ void 	exit;
/* 0x00020cb8      48 */ /* unknown */ void 	_exit;
/* 0x00020ce8       1 */ /* unknown */ void 	printf;
/* 0x00020cf8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020dc0       0 */ /* unknown */ void 	Ddata.data;
/* 0x00020dc4       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020dc8       0 */ /* unknown */ void 	force_to_data;
/* 0x00020dcc       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020dd0       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020dd4       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020dd8       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020ddc       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020ddc       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020de0       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020de0       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020de4       0 */ /* unknown */ void 	p.0;
/* 0x00020de8       0 */ /* unknown */ void 	_edata;
/* 0x00020de8       0 */ /* unknown */ void 	Bbss.bss;
/* 0x00020de8       1 */ /* unknown */ void 	completed.1;
/* 0x00020dec      24 */ /* unknown */ void 	object.2;
/* 0x00020e04       4 */ /* unknown */ void 	_environ;
/* 0x00020e04       4 */ /* unknown */ void 	environ;
/* 0x00020e08       0 */ /* unknown */ void 	_end;
/* 0x00020e08       0 */ /* unknown */ void 	_END_;
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
