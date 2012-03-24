/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_rec/hd2/ia64_pe_from_rec_msvc8_release/subject.exe'
 */

stack space not deallocated on return
/*	Procedure: 0x00001001 - 0x0000118D
 *	Argument size: 108
 *	Local size: 0
 *	Save regs size: 0
 */

L00001001(A18, A20, A70, A80)
/* unknown */ void  A18;
/* unknown */ void  A20;
/* unknown */ void  A70;
/* unknown */ void  A80;
{



    A18 = ebx;
    eax = eax - 1 - 1;
    A20 = ebp;
    (save)esi;
    (save)edi;
    (save)esp;
    (save)ebp;
    ecx = ecx + 1 + 1 + 1;
    eax = eax - 1;
    esp = esp - 128;
    eax = eax - 1;
    eax = ( *L00001FE0 - 1 ^ esp) - 1;
    A70 = eax;
    ecx = ecx + 1;
    edi = eax;
    eax = eax - 1;
    ebp = ecx;
    esp = esp + 1;
    eax = edx - 1;
    edx = 0x11a8;
    eax = eax - 1;
    ecx = & A20;
    eax = *L0000111d(esi);
    ecx = ecx + 1;
    esi = 16;
    edi :: 16;
    ecx = ecx + 1 + 1;
    asm("cmovg edi,esi");
    ebp = ebp + 1;
    esp = 0;
    ebp = ebp + 1;
    ebp = esp;
    ecx = ecx - 1;
    ebx = esp;
    eax = eax - 1;
    asm("arpl di,si");
    if(edi > 0) {
        ecx = ecx + 1;
        edi = esp;
        ebp = esi;
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x0f");
        (restore)ds;
        *eax & al;
        *eax = *eax + al;
        *eax = *eax + al;
        do {
            esp = esp + 1;
            eax = ( *(ebx + ebp) & 255) - 1;
            asm("arpl di,ax");
            eax = eax - 1;
            edx = 0x1169;
            ecx = esp + eax - 1 + 41;
            ebx = ebx + 1;
            edi = edi + 3;
            eax = *L000010d6() - 1 - 1;
        } while(ebx < esi);
        ecx = ecx + 1;
        if(esi >= esi) {
            goto L000010c7;
        }
    }
    edx = *L00001150;
    ebp = ebp + 1;
    eax = esi;
    ebp = ebp + 1;
    eax = eax - ebp;
    asm("Unknown opcode 0x66");
    asm("Unknown opcode 0x66");
    asm("Unknown opcode 0x0f");
    (restore)ds;
    *eax & al;
    *eax = *eax + al;
    *eax = *eax + al;
    do {
        ecx = ecx | -1;
        eax = -2;
        edi = & A20;
        asm("repne scasb");
        ecx = ecx - 1;
        *(edi - 1) = edx;
    } while(eax = eax - 1);
L000010c7:
    eax = eax - 1;
    ecx = ecx | -1;
    eax = -1;
    edi = & A20;
    asm("repne scasb");
    eax = eax - 1;
    ecx = !ecx;
    eax = eax - 1;
    ecx = ecx - 1;
    eax = eax - 1;
    asm("arpl cx,ax");
    *(esp + eax + 32) = 8134688;
    ecx = ecx + 3 - 1;
    eax = esp - 1;
    asm("arpl cx,bx");
    eax = eax - 1;
    if(esi > 0) {
        eax = eax - 1;
        edi = esp + ebx + 32;
        esp = esp + 1;
        esp = esi;
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x0f");
        (restore)ds;
        esp = esp + 1;
        *eax = *eax + al;
        do {
            ecx = *(eax + ebp) & 255;
            if(cl >= 32) {
                edx = cl & 255;
                if(cl <= 126) {
                    goto L00001117;
                }
            }
            edx = 46;
L00001117:
            *(edi + eax) = dl;
            eax = eax - 1 + 1 - 1;
        } while(eax < esi);
    }
    ecx = ecx - 1;
    asm("arpl sp,dx");
    ecx = ecx - 1;
    if(edx < esi) {
        eax = eax - 1;
        eax = edx + ebx;
        esp = esp - 1;
        esi = esi - edx;
        dl = 32;
        ecx = esp + eax - 1 + 32;
        ebp = ebp - 1;
        eax = esi;
        eax = L00001B37();
        ebp = ebp + 1;
        esp = esp + esi;
    }
    ecx = 123;
    asm("arpl sp,ax");
    eax = eax - 1;
    edx = & A20;
    eax = eax - 1 + ebx;
    *(esp + eax + 32) = cx;
    eax = eax - 1;
    ecx = 0x1096;
    eax = *L00000fe4() - 1 - 1;
    ecx = A70 ^ esp;
    esp = esp - 1;
    ecx = ecx - 1;
    ebx = *( & A80 + 64);
    ecx = ecx - 1;
    ebp = *(ebx + 72);
    ecx = ecx - 1;
    esp = ebx;
    ecx = ecx + 1;
    (restore)esi;
    ecx = ecx + 1;
    (restore)ebp;
    ecx = ecx + 1;
    (restore)esp;
    (restore)edi;
    (restore)esi;
    return(L00001301());
}

/*	Procedure: 0x0000118E - 0x00001190
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000118E()
{



    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00001191 - 0x00001283
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

L00001191(A14, A1c, A20)
/* unknown */ void  A14;
/* unknown */ void  A1c;
/* unknown */ void  A20;
{
	/* unknown */ void  Vffffffac;
	/* unknown */ void  Vffffffc0;
	/* unknown */ void  Vffffffc5;
	/* unknown */ void  Vffffffe0;
	/* unknown */ void  Vffffffec;



    (save)ebx;
    eax = eax + 1 - 1;
    esp = esp - 112;
    eax = eax - 1;
    eax = ( *L00001E63 - 1 ^ esp) - 1;
    Vffffffec = eax;
    edx = & Vffffffac;
    eax = Vffffffec - 1 - 1;
    ebx = ecx;
    eax = *L00000f75();
    if(eax != 0) {
        eax = eax - 1;
        ecx = ebx;
        *L00000f90();
        eax = -1;
        ecx = Vffffffec ^ esp;
        esp = esp + 112;
        (restore)ebx;
        return(L00001301() - 1);
    }
    eax = eax - 1;
    edx = 0x1019;
    eax = eax - 1;
    ecx = ebx;
    eax = eax - 1;
    A14 = A14;
    eax = *L00000f50() - 1;
    A14 = eax;
    eax = eax - 1;
    if(eax == 0) {
        eax = eax - 1;
        ecx = ebx;
        *L00000f4f();
        eax = A14 + 1;
    } else {
        ebx = 0;
        if(Vffffffc0 > 0) {
            eax = eax - 1;
            A1c = A20;
            asm("Unknown opcode 0x66");
            asm("Unknown opcode 0x66");
            asm("Unknown opcode 0x0f");
            (restore)ds;
            *eax & al;
            *eax = *eax + al;
            *eax = *eax + al;
            do {
                eax = eax - 1;
                ecx = & Vffffffe0;
                esp = esp - 1;
                ecx = A14;
                esp = esp + 1;
                eax = 16;
                eax = *L00000f01() - 1;
                A20 = eax;
                if(eax == 0) {
                    break;
                }
                eax = eax - 1;
                ecx = & Vffffffe0;
                esp = esp + 1;
                edx = ebx;
                eax = L00001001();
                ebx = ebx + A20;
            } while(ebx < Vffffffc5);
            eax = eax - 1;
        }
        eax = eax - 1;
        ecx = A14;
        *L00000eca();
        eax = 0;
    }
    eax = eax - 1;
    eax = eax - 1;
    eax = eax - 1;
    ecx = Vffffffec ^ esp;
    esp = esp + 112;
    (restore)ebx;
    return(L00001301() - 1);
}

/*	Procedure: 0x00001284 - 0x00001290
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001284()
{



}

/*	Procedure: 0x00001291 - 0x000012E1
 *	Argument size: 24
 *	Local size: 0
 *	Save regs size: 0
 */

L00001291(A8, Ac, A10, A14, A18, A1c)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
/* unknown */ void  A1c;
{



    A8 = Ac;
    A10 = A14;
    A18 = A1c;
    (save)edi;
    eax = eax - 1 - 1 - 1 - 1;
    esp = esp - 32;
    edi = 1;
    eax = eax - 1;
    asm("arpl cx,si");
    Ac = 0;
    edi :: A1c;
    A14 = edx;
    if(!(eax = eax - 1 - 1)) {
        do {
            eax = eax - 1;
            ecx = *(A14 + edi * 8);
            eax = L00001191() - 1;
            edi = edi + 1;
            Ac = Ac + eax;
            eax = eax - 1;
        } while(edi < A1c);
    }
    eax = eax - 1;
    eax = eax - 1;
    eax = Ac - 1;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
}

/*	Procedure: 0x000012E2 - 0x000012F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000012E2()
{



}

/* DEST BLOCK NOT FOUND: 0000131b -> 00001605 */
stack space not deallocated on return
/*	Procedure: 0x00001301 - 0x000015F0
 *	Argument size: 44
 *	Local size: 0
 *	Save regs size: 0
 */

L00001301(A8, A20, A30)
/* unknown */ void  A8;
/* unknown */ void  A20;
/* unknown */ void  A30;
{



    eax = eax - 1;
    if(ecx == *L00001CF9) {
        eax = eax - 1;
        asm("rol ecx,0x10");
        if(!(cx & 65535)) {
            asm("rep ret");
        }
        eax = eax - 1;
        asm("ror ecx,0x10");
    }
    goto L00001605;
    asm("int3");
    eax = eax - 1;
    esp = esp - 56;
    eax = eax - 1;
    ecx = 1417;
    esp = esp + 1;
    esp = esp + 1;
    ecx = *L00002282;
    eax = L00001865() - 1;
    eax = 7415;
    esp = esp - 1;
    edx = 7389;
    ecx = 7366;
    esp = esp + 1;
    *L00001CDB = *L0000228D;
    A20 = 7385;
    eax = *L00000dac();
    *L00001CC6 = eax;
    if(eax < 0) {
        ecx = 8;
        eax = L000017AD();
    }
    eax = eax - 1;
    esp = esp + 56;
    return;
    asm("int3");
    asm("int3");
    asm("int3");
    A8 = A30;
    (save)edi;
    eax = eax - 1 - 1;
    asm("%g dec eax");
    edi = *( *L00000030 - 1 + 8);
    A30 = 0;
L000013a2:
    eax = 0;
    asm("lock dec eax");
    asm("cmpxchg [0x222c],edi");
    if(!(esp = esp - 32)) {
        if(eax - 1 == edi) {
            edi = 1;
            A30 = 1;
            goto L000013cf;
        }
        ecx = 1000;
        *L00000c99();
        goto L000013a2;
    }
    edi = 1;
L000013cf:
    if(*L000021FC == edi) {
        ecx = 31;
        L000017AD();
    } else {
        eax = *L000021E6;
        if(eax != 0) {
            goto L00001416;
        }
        *L000021DC = edi;
        eax = eax - 1;
        edx = 3501;
        eax = eax - 1;
        ecx = 3470;
        if(L000019C9() != 0) {
            eax = 255;
            goto L000014fe;
L00001416:
            *L00001C29 = edi;
        }
    }
    eax = *L000021AF;
    if(eax == edi) {
        eax = eax - 1;
        edx = 3420;
        eax = eax - 1;
        ecx = 3397;
        eax = L000019C3();
        *L0000218E = 2;
    }
    if(A30 == 0) {
        eax = -1;
        asm("xchg eax,[0x2189]");
    }
    eax = eax - 1;
    if(*L00002199 != 0) {
        eax = eax - 1;
        ecx = 8592;
        eax = L00001981();
        if(eax != 0) {
            ebp = ebp + 1;
            ecx = ecx + 1;
            edx = 2;
            ecx = 0;
            eax = *L00002178();
        }
    }
    eax = eax - 1;
    eax = eax - 1;
    *( *L00000C31) = *L00001BA2 - 1;
    esp = esp - 1;
    eax = *L00001B98 - 1;
    edx = *L00001B99;
    ecx = *L00001B83;
    eax = L00001291();
    *L00001B98 = eax;
    if(*L00001B75 == 0) {
        ecx = eax;
        eax = *L00000c37();
    }
    if(*L00001B84 == 0) {
        *L00000c30();
        eax = *L00001B72;
    }
    goto L000014fe;
    *L00001B6A = eax;
    if(*L00001B47 == 0) {
        ecx = eax;
        eax = *L00000c19();
        asm("int3");
    }
    if(*L00001B55 == 0) {
        *L00000c01();
        eax = *L00001B43;
    }
L000014fe:
    eax = eax - 1;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
    return;
    eax = eax - 1;
    esp = esp - 40;
    if(*LFFFFEAE8 != 23117) {
L0000151b:
        eax = 0;
    } else {
        eax = eax - 1;
        asm("arpl [0xffffeb17],cx");
        eax = eax - 1;
        ecx = ecx + -5421;
        if(*ecx != 17744) {
            goto L0000151b;
        }
        eax = *(ecx + 24) & 65535;
        if(eax == 267) {
            goto L0000155d;
        }
        if(eax != 523) {
            goto L0000151b;
        }
        eax = 0;
        if(*(ecx + 132) > 14) {
            *(ecx + 248) :: 0;
            goto L0000156b;
L0000155d:
            eax = 0;
            if(*(ecx + 116) > 14) {
L0000156b:
                al = 0;
            }
        }
    }
    ecx = 1;
    *L00001AAC = eax;
    eax = *L00000bda() - 1;
    ecx = ecx | -1;
    eax = *L00000b20() - 1 - 1;
    *L0000204A = eax;
    *L0000204B = *L0000204A - 1;
    eax = *L00002029;
    *( *L00000B11) = eax;
    eax = *( *L00000B11) - 1;
    *( *L00000AEC) = *L00002016;
    L0000187D();
    eax = L000019D1();
    if(*L00001A57 == 0) {
        eax = eax - 1;
        ecx = 1026;
        *L00000abc();
    }
    if(*L00001A3D == -1) {
        ecx = ecx | -1;
        *L00000aa2();
    }
    esp = esp + 40;
    return(-1);
    asm("int3");
    asm("int3");
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 000015fe -> 00001389 */
stack space not deallocated on return
/*	Procedure: 0x000015F1 - 0x000017AC
 *	Argument size: 140
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__(A8, A20, A28, A30, A38, A40, A48, A50, A58, A60, A68, A70, A88, A90)
/* unknown */ void  A8;
/* unknown */ void  A20;
/* unknown */ void  A28;
/* unknown */ void  A30;
/* unknown */ void  A38;
/* unknown */ void  A40;
/* unknown */ void  A48;
/* unknown */ void  A50;
/* unknown */ void  A58;
/* unknown */ void  A60;
/* unknown */ void  A68;
/* unknown */ void  A70;
/* unknown */ void  A88;
/* unknown */ void  A90;
{



    eax = eax - 1;
    esp = esp - 40;
    eax = L000019D5() - 1;
    esp = esp + 40;
    goto L00001389;
    asm("int3");
    asm("int3");
    A8 = ecx;
    eax = eax - 1 - 1;
    esp = esp - 136;
    eax = eax - 1;
    ecx = 0x1ad9;
    *L00000a03();
    esp = esp - 1;
    esp = esp - 1;
    A58 = *L00001BC4;
    ebp = ebp + 1;
    edx = & A60;
    eax = -2;
    ecx = A58;
    eax = L00001AAD() - 1;
    A50 = eax;
    eax = A50 - 1;
    if(A50 != 0) {
        A38 = 0;
        eax = eax - 1 - 1;
        eax = & A48 - 1;
        A30 = eax;
        eax = A30 - 1;
        eax = & A40 - 1;
        A28 = eax;
        eax = A28 - 1;
        A20 = 0x1a83;
        esp = esp - 1;
        ecx = A50;
        esp = esp - 1;
        eax = A58 - 1;
        edx = A60;
        ecx = 0;
        eax = L00001AA7();
    } else {
        eax = eax - 1;
        eax = A88 - 1;
        *L00001B50 = eax;
        eax = *L00001B50 - 1;
        eax = & A88 - 1 + 8 - 1;
        *L00001ADD = eax;
    }
    eax = eax - 1;
    eax = *L00001B36 - 1;
    *L000019A7 = eax;
    eax = *L000019A7 - 1;
    eax = A90 - 1;
    *L00001AA8 = eax;
    *L0000197E = -1073740791;
    *L00001978 = 1;
    eax = *L00001AA8 - 1;
    eax = *L0000191D - 1;
    A68 = eax;
    eax = A68 - 1;
    A70 = *L00001919 - 1;
    *L000019E8 = *L0000093e();
    ecx = 1;
    L00001A89();
    ecx = 0;
    eax = *L0000092e() - 1;
    ecx = 2743;
    *L00000929();
    if(*L000019C2 == 0) {
        ecx = 1;
        L00001A89();
    }
    edx = -1073740791;
    ecx = *L00000918() - 1;
    esp = esp + 136;
    return(*L00000912() - 1);
    asm("int3");
    asm("int3");
    eax = eax - 1;
    esp = esp - 40;
    eax = eax - 1;
    eax = *ecx;
    if(*eax == -529697949 && *(eax + 24) == 4) {
        eax = *(eax + 32);
        if(eax == 429065504 || eax == 429065505 || eax == 429065506) {
            goto L00001785;
        }
        if(eax == 26820608) {
L00001785:
            L00001A8F();
            asm("int3");
        }
    }
    esp = esp + 40;
    return(-1);
    asm("int3");
    asm("int3");
    asm("int3");
    eax = eax - 1;
    esp = esp - 40;
    eax = eax - 1;
    ecx = -79;
    *L0000089b();
    esp = esp + 40;
    return(-1);
}

/* DEST BLOCK NOT FOUND: 000017ad -> 00001a8f */
/*	Procedure: 0x000017AD - 0x000017B4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000017AD()
{



    goto ( *L0000096e);
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x000017B5 - 0x00001864
 *	Argument size: 13
 *	Local size: 0
 *	Save regs size: 0
 */

L000017B5(A13, A14, A1b, A1c)
/* unknown */ void  A13;
/* unknown */ void  A14;
/* unknown */ void  A1b;
/* unknown */ void  A1c;
{



    (save)ebx;
    eax = eax + 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebx = ecx;
    eax = eax - 1;
    ecx = *L00001E24;
    eax = *L0000091e() - 1;
    A14 = eax;
    eax = A14 - 1;
    if(eax == -1) {
        eax = eax - 1;
        ecx = ebx;
        eax = *L00000902();
    } else {
        ecx = 8;
        eax = L00001AA1() - 1;
        ecx = *L00001DF6;
        eax = *L000008f0() - 1;
        A14 = eax;
        eax = A14 - 1;
        ecx = *L00001DDC;
        eax = *L000008de() - 1;
        A1c = eax;
        eax = A1c - 1;
        ecx = ebx;
        ecx = *L00000890() - 1;
        esp = esp - 1;
        eax = & A1b - 1;
        edx = & A13;
        eax = L00001A9B() - 1;
        ebx = eax;
        eax = eax - 1;
        ecx = A13;
        eax = *L00000870() - 1;
        *L00001DA9 = eax;
        eax = *L00001DA9 - 1;
        ecx = A1b;
        *L00001D8F = *L0000085e() - 1;
        ecx = 8;
        eax = L00001A95() - 1;
        eax = ebx;
    }
    eax = eax - 1;
    esp = esp + 32;
    (restore)ebx;
}

/*	Procedure: 0x00001865 - 0x0000187C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001865()
{



    eax = eax - 1;
    esp = esp - 40;
    eax = ~(L000017B5() - 1);
    asm("sbb eax,eax");
    eax = ~eax - 1 - 1;
    esp = esp + 40;
    return;
    asm("int3");
}

/*	Procedure: 0x0000187D - 0x000018F2
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L0000187D(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    A8 = ebx;
    (save)edi;
    eax = eax - 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebx = 2515;
    eax = eax - 1;
    for(edi = 2508; 1; ebx = ebx + 8) {
        eax = eax - 1;
        if(ebx >= edi) {
            break;
        }
        eax = eax - 1;
        eax = *ebx - 1;
        if(eax != 0) {
            eax = *eax();
        }
        eax = eax - 1;
    }
    eax = eax - 1;
    ebx = Ac;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
    return;
    A8 = ebx;
    (save)edi;
    eax = eax - 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebx = 2475;
    eax = eax - 1;
    edi = 2468;
    goto L000018dd;
L000018cf:
    eax = eax - 1;
    eax = *ebx - 1;
    if(eax != 0) {
        eax = *eax();
    }
    eax = eax - 1;
    ebx = ebx + 8;
L000018dd:
    eax = eax - 1;
    if(ebx < edi) {
        goto L000018cf;
    }
    eax = eax - 1;
    ebx = Ac;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
    return;
    goto ( *L0000081e);
}

/* DEST BLOCK NOT FOUND: 000018f3 -> 000018cf */
/*	Procedure: 0x000018F3 - 0x00001900
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000018F3()
{



    goto ( *L00000810);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00001901 - 0x00001930
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001901()
{



    eax = eax - 1;
    eax = ecx;
    if(*eax != 23117) {
        return(0);
    }
    eax = eax - 1;
    asm("arpl [eax+0x3c],cx");
    ecx = ecx + eax - 1;
    eax = 0;
    if(*ecx == 17744) {
        eax = 0 & 255;
    }
    asm("rep ret");
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00001931 - 0x00001980
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001931()
{



    esp = esp - 1;
    asm("arpl [ecx+0x3c],ax");
    ebp = ebp + 1;
    esp = esp - 1;
    esp = esp - 1;
    eax = eax;
    ecx = 1;
    eax = *(eax + 20) & 65535;
    ebp = ebp + 1;
    ebx = *(eax + 6) & 65535;
    edx = edx - 1;
    ecx = eax + eax + 24;
    ebp = ebp + 1;
    if(ebx != 0) {
        do {
            edx = *(ecx + 12);
            esp = esp - 1;
            if(edx >= edx) {
                eax = *(ecx + 8) + edx;
                esp = esp - 1;
                if(edx < eax) {
                    goto L00001973;
                }
            }
            ecx = ecx + 1 + 1;
            eax = eax - 1;
            ecx = ecx + 40;
            ebp = ebp + 1;
        } while(ecx < ebx);
    }
    return(0);
L00001973:
    eax = eax - 1;
    return(ecx);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00001981 - 0x000019C2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001981()
{



    eax = eax - 1;
    esp = esp - 40;
    esp = esp - 1;
    eax = ecx;
    esp = esp - 1;
    ecx = -6543;
    eax = L00001901();
    if(eax != 0) {
        ebp = ebp - 1;
        eax = eax - ecx;
        ecx = ecx - 1;
        edx = eax;
        ecx = ecx - 1;
        eax = L00001931() - 1;
        if(eax != 0) {
            eax = !( *(eax + 36) >> 31) & 1;
            goto L000019bd;
            eax = 0;
        }
    }
L000019bd:
    eax = eax - 1;
    esp = esp + 40;
    return;
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 000019c3 -> 000019bd */
/*	Procedure: 0x000019C3 - 0x000019C8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000019C3()
{



    goto ( *L000006b0);
}

/* DEST BLOCK NOT FOUND: 000019c9 -> 000019bd */
/*	Procedure: 0x000019C9 - 0x000019D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000019C9()
{



    goto ( *L000006b2);
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x000019D1 - 0x000019D4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000019D1()
{



    return(0);
    asm("int3");
}

/*	Procedure: 0x000019D5 - 0x00001A88
 *	Argument size: 20
 *	Local size: 0
 *	Save regs size: 0
 */

L000019D5(Ac, A16, A18, A1c)
/* unknown */ void  Ac;
/* unknown */ void  A16;
/* unknown */ void  A18;
/* unknown */ void  A1c;
{



    A18 = A1c;
    (save)edi;
    eax = eax - 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    Ac = 0;
    eax = *L0000161B - 1 - 1;
    edi = 769630770;
    asm("cdq");
    eax = eax - *eax;
    asm("Unknown opcode 0xc7");
    if(!( *(eax + 59) = *(eax + 59) + cl)) {
        eax = !(eax - 1) - 1;
        *L00001604 = eax;
    } else {
        eax = eax - 1;
        ecx = & Ac;
        eax = *L00000657() - 1;
        A1c = Ac;
        esp = esp + 1;
        A1c = *L000005e4();
        ecx = ecx - 1;
        A1c = 0;
        esp = esp + 1;
        A1c = *L000005e0();
        ecx = ecx - 1;
        A1c = 0;
        esp = esp + 1;
        A1c = *L000005dc() - 1;
        ecx = & A16 - 1;
        A1c = 0;
        esp = esp - 1;
        A1c = A16;
        esp = esp - 1;
        A1c = 0;
        eax = *L000005d3() - 1;
        eax = -1;
        asm("Unknown opcode 0xff");
        *eax = *eax + 1;
        *(A1c - 40) = *(A1c - 40) + cl;
        eax = eax - 1;
        eax = 769630771;
        asm("cdq");
        eax = eax - *eax;
        *(A1c + edi - 33) = *(A1c + edi - 33) + cl;
        esp = esp - 1;
        asm("cmovz ebx,eax");
        esp = esp - 1;
        *L0000158E = A1c;
        ecx = ecx - 1;
        A1c = !A1c;
        esp = esp - 1;
        *L0000158C = A1c;
    }
    eax = eax - 1;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
    return;
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 00001a89 -> 00001a7d */
/*	Procedure: 0x00001A89 - 0x00001A8E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001A89()
{



    goto ( *L0000062a);
}

/* DEST BLOCK NOT FOUND: 00001a8f -> 00001a7d */
/*	Procedure: 0x00001A8F - 0x00001A94
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001A8F()
{



    goto ( *L0000062c);
}

/* DEST BLOCK NOT FOUND: 00001a95 -> 00001a7d */
/*	Procedure: 0x00001A95 - 0x00001A9A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001A95()
{



    goto ( *L0000062e);
}

/* DEST BLOCK NOT FOUND: 00001a9b -> 00001a7d */
/*	Procedure: 0x00001A9B - 0x00001AA0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001A9B()
{



    goto ( *L00000630);
}

/* DEST BLOCK NOT FOUND: 00001aa1 -> 00001a7d */
/*	Procedure: 0x00001AA1 - 0x00001AA6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AA1()
{



    goto ( *L00000632);
}

/* DEST BLOCK NOT FOUND: 00001aa7 -> 00001a7d */
/*	Procedure: 0x00001AA7 - 0x00001AAC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AA7()
{



    goto ( *L00000584);
}

/* DEST BLOCK NOT FOUND: 00001aad -> 00001a7d */
/*	Procedure: 0x00001AAD - 0x00001AB4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AAD()
{



    goto ( *L00000576);
    asm("int3");
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 00001b13 -> 00001301 */
/*	Procedure: 0x00001AB5 - 0x00001B36
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AB5()
{



    (save)ebx;
    eax = eax + 1 - 1;
    esp = esp - 32;
    ebp = ebp + 1;
    ebx = *eax;
    eax = eax - 1;
    ebx = edx;
    esp = esp - 1;
    ecx = ecx + 1;
    ebx = ebx & -8;
    ecx = ecx + 1;
    *eax & 4;
    edx = ecx;
    if(!(esp = esp - 1)) {
        ecx = ecx + 1;
        eax = *(eax + 8);
        ebp = ebp - 1;
        asm("arpl [eax+0x4],dx");
        eax = ~eax;
        esp = esp - 1;
        edx = edx + ecx;
        eax = eax - 1;
        asm("arpl ax,cx");
        esp = esp - 1;
        edx = edx & ecx;
    }
    ecx = ecx - 1;
    asm("arpl bx,ax");
    edx = *(eax + edx - 1);
    eax = eax - 1;
    eax = *(ebx + 16);
    ecx = *(eax + 8);
    eax = eax - 1;
    ecx = ecx + *(ebx + 8);
    if(!( *(ecx + 3) & 15)) {
        eax = ( *(ecx + 3) & 255 & -16) - 1;
        asm("cwde");
        esp = esp - 1;
        ecx = ecx + eax;
    }
    esp = esp - 1;
    ecx = (ecx ^ edx) - 1;
    eax = eax - 1;
    esp = esp + 32;
    (restore)ebx;
    goto L00001301;
    asm("int3");
    eax = eax - 1;
    esp = esp - 40;
    ebp = ebp - 1;
    eax = *(ecx + 56) - 1;
    edx = edx - 1;
    L00001AB5();
    esp = esp + 40;
    return(0);
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 00001b37 -> 00001ab5 */
/*	Procedure: 0x00001B37 - 0x00001B5C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001B37()
{



    goto ( *L0000062c);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    (save)ebp;
    eax = eax + 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebp = edx;
    eax = eax - 1;
    eax = *ecx - 1;
    edx = ecx;
    ecx = *eax;
    esp = esp + 32;
    (restore)ebp;
    return(L000018F3() - 1);
}

/*	Procedure: 0x00001B5D - 0x00001B75
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001B5D()
{



    (save)ebp;
    eax = eax + 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebp = edx;
    ecx = 8;
    esp = esp + 32;
    (restore)ebp;
    return(L00001A95() - 1);
}

/*	Procedure: 0x00001B76 - 0x00001BA1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001B76()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    (save)ebp;
    eax = eax + 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebp = edx;
    eax = eax - 1;
    eax = *ecx;
    ecx = 0 & 255;
    eax = ecx;
    eax = ecx - 1;
    esp = esp + 32;
    (restore)ebp;
}

/*	Procedure: 0x00001BA2 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001BA2()
{



}

/* address  size  */
/* 0x000015f1       0 */ /* unknown */ void 	__entry_point__;
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
