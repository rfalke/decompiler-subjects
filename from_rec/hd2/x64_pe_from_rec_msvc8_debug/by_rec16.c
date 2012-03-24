/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_rec/hd2/ia64_pe_from_rec_msvc8_debug/subject.exe'
 */

/* DEST BLOCK NOT FOUND: 00001006 -> 00001481 */
/*	Procedure: 0x00001006 - 0x0000100A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001006()
{



    goto L00001481;
}

/* DEST BLOCK NOT FOUND: 0000100b -> 00001031 */
/* DEST BLOCK NOT FOUND: 00001010 -> 000012e1 */
/*	Procedure: 0x0000100B - 0x0000100F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000100B()
{



    goto L00001031;
}

/* DEST BLOCK NOT FOUND: 00001010 -> 000012e1 */
/*	Procedure: 0x00001010 - 0x00001014
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001010()
{



    goto L000012e1;
}

/*	Procedure: 0x00001431 - 0x0000146E
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

L00001431(A8, Ac, A10, A14)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
{



    A10 = A14;
    A8 = ecx;
    (save)edi;
    eax = eax - 1 - 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    edi = esp;
    eax = eax - 1;
    ecx = 8;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = -858993460;
    asm("rep stosd");
    eax = eax - 1;
    ecx = Ac;
    eax = eax - 1;
    eax = eax - 1;
    ecx = Ac;
    esp = esp + 32;
    (restore)edi;
    return(*L0000a100() - 1);
}

/*	Procedure: 0x000014FB - 0x00001630
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000014FB()
{



}

stack space not deallocated on return
/*	Procedure: 0x00001631 - 0x0000166A
 *	Argument size: 68
 *	Local size: 0
 *	Save regs size: 0
 */

L00001631(A8, A10, A18, A20, A38, A48)
/* unknown */ void  A8;
/* unknown */ void  A10;
/* unknown */ void  A18;
/* unknown */ void  A20;
/* unknown */ void  A38;
/* unknown */ void  A48;
{



    esp = esp - 1;
    A20 = A38;
    esp = esp - 1;
    A18 = eax;
    A10 = edx;
    A8 = A38;
    eax = eax - 1 - 1 - 1;
    esp = esp - 40;
    esp = esp - 1;
    ebp = ebp - 1;
    edx = A48;
    eax = *(A48 + 56) - 1 - 1;
    L00001671();
    esp = esp + 40;
    return(0);
}

/*	Procedure: 0x0000166B - 0x00001670
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000166B()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00001671 - 0x00001763
 *	Argument size: 108
 *	Local size: 0
 *	Save regs size: 0
 */

L00001671(A8, A10, A18, A20, A28, A30, A38, A40, A60, A68, A70)
/* unknown */ void  A8;
/* unknown */ void  A10;
/* unknown */ void  A18;
/* unknown */ void  A20;
/* unknown */ void  A28;
/* unknown */ void  A30;
/* unknown */ void  A38;
/* unknown */ void  A40;
/* unknown */ void  A60;
/* unknown */ void  A68;
/* unknown */ void  A70;
{



    esp = esp - 1;
    A18 = eax;
    A10 = edx;
    A8 = A20;
    eax = eax - 1 - 1 - 1;
    esp = esp - 88;
    eax = eax - 1;
    eax = *A70 & -8;
    A38 = eax;
    eax = A38 - 1;
    eax = A60 - 1;
    A40 = eax;
    eax = A40 - 1;
    eax = *A70 >> 2 & 1;
    if(eax != 0) {
        eax = eax - 1;
        eax = A70 - 1;
        asm("arpl [eax+0x4],ax");
        eax = eax - 1;
        eax = eax - 1;
        edx = A60 + eax;
        eax = eax - 1;
        eax = ~( *(A70 + 8)) - 1;
        asm("arpl ax,cx");
        eax = eax - 1;
        eax = (edx - 1 & A20) - 1;
        A40 = eax;
    }
    eax = eax - 1;
    asm("arpl [esp+0x38],cx");
    eax = eax - 1;
    eax = *(A40 - 1 + A20) - 1;
    A20 = eax;
    eax = A20 - 1;
    A20 = A68;
    eax = *( *(A68 - 1 + 16) + 8) - 1 - 1 + *(A20 + 8) - 1;
    A30 = eax;
    eax = A30 - 1;
    eax = A60 - 1;
    A28 = eax;
    eax = A28 - 1;
    al = *(A30 + 3) & 255 & 15;
    eax = al & 255;
    if(eax != 0) {
        eax = eax - 1;
        eax = ( *(A30 + 3) & 255) >> 4 & 15 & 255;
        16 = eax * eax;
        eax = eax - 1;
        asm("arpl ax,cx");
        eax = eax - 1;
        eax = A28 - 1 + A20 - 1;
        A28 = eax;
    }
    eax = eax - 1;
    eax = eax - 1;
    eax = (A20 - 1 ^ A28) - 1;
    A20 = eax;
    eax = A20 - 1;
    esp = esp + 88;
    return(L000017A1() - 1);
}

/* DEST BLOCK NOT FOUND: 00001765 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000176b -> 000017a1 */
/*	Procedure: 0x00001764 - 0x0000176A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001764()
{



    asm("int3");
    goto ( *L00009e4e);
}

/* DEST BLOCK NOT FOUND: 0000176b -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00001771 -> 000017a1 */
/*	Procedure: 0x0000176B - 0x00001770
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000176B()
{



    goto ( *L00009e38);
}

/* DEST BLOCK NOT FOUND: 00001771 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00001777 -> 000017a1 */
/*	Procedure: 0x00001771 - 0x00001776
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001771()
{



    goto ( *L00009e2a);
}

/* DEST BLOCK NOT FOUND: 00001777 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000177d -> 000017a1 */
/*	Procedure: 0x00001777 - 0x00001782
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001777()
{



    goto ( *L00009e1c);
    goto ( *L00009e0e);
}

/* DEST BLOCK NOT FOUND: 000017bb -> 00001e81 */
/*	Procedure: 0x000017A1 - 0x000017C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000017A1()
{



    eax = eax - 1;
    if(ecx == *L00007859) {
        eax = eax - 1;
        asm("rol ecx,0x10");
        if(!(cx & 65535)) {
            asm("rep ret");
        }
        eax = eax - 1;
        asm("ror ecx,0x10");
    }
    goto L00001e81;
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x000017C1 - 0x000019A3
 *	Argument size: 76
 *	Local size: 0
 *	Save regs size: 0
 */

L000017C1(A8, A10, A18, A20, A28, A30, A38, A40, A48, A50)
/* unknown */ void  A8;
/* unknown */ void  A10;
/* unknown */ void  A18;
/* unknown */ void  A20;
/* unknown */ void  A28;
/* unknown */ void  A30;
/* unknown */ void  A38;
/* unknown */ void  A40;
/* unknown */ void  A48;
/* unknown */ void  A50;
{



    A10 = A20;
    A18 = A48;
    (save)edi;
    eax = eax - 1 - 1 - 1;
    esp = esp - 32;
    edi = 0;
    eax = eax - 1;
    A48 = edx;
    eax = eax - 1;
    A20 = ecx;
    if(*edx > 0) {
        A30 = ebx;
        eax = eax - 1 - 1;
        ebx = 0;
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x0f");
        (restore)ds;
        *eax & al;
        *eax = *eax + al;
        *eax = *eax + al;
        do {
            eax = eax - 1;
            eax = *(A48 + 8) - 1;
            asm("arpl [eax+ebx],cx");
            if(*(ecx + A20 - 4) == -858993460) {
                eax = eax - 1;
                asm("arpl [eax+ebx+0x4],ax");
                eax = eax - 1 + ecx;
                if(*(eax + A20) == -858993460) {
                    goto L00001827;
                }
            }
            eax = eax - 1;
            edx = *(A48 + 8);
            eax = eax - 1;
            ecx = A28;
            eax = eax - 1;
            edx = *(edx + ebx + 8);
            eax = L00002361();
L00001827:
            edi = edi + 1;
            eax = eax - 1;
            ebx = ebx + 16;
        } while(edi < *A48);
        eax = eax - 1;
        ebx = A30;
    }
    eax = eax - 1;
    A20 = A38;
    eax = eax - 1;
    A48 = A40;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
    return;
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
    eax = eax - 1;
    esp = esp - 8;
    esp = esp - 1;
    eax = eax - 1;
    if(ecx != 0) {
        eax = eax - 1;
        if(edx != 0) {
            A20 = A20 - 1;
            if(eax != 0) {
                *esp = edi;
                eax = eax - 1 - 1;
                edi = ecx;
                eax = 203;
                ecx = edx;
                asm("rep stosb");
                ecx = ecx - 1;
                eax = *eax - 1;
                edi = *esp;
                ecx = ecx - 1;
                *(ecx + 4) = eax;
                ecx = ecx - 1;
                *(ecx + 12) = edx;
                A20 = A20 - 1;
                *eax = ecx;
            }
        }
    }
    eax = eax - 1;
    esp = esp + 8;
    return;
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    (save)ebx;
    (save)edi;
    eax = eax + 1 - 1;
    esp = esp - 40;
    esp = esp - 1;
    A50 = esp;
    edi = 0;
    esp = esp - 1;
    A20 = A20;
    esp = esp - 1;
    A20 = ecx;
    ecx = ecx - 1;
    ebx = eax;
    esp = esp - 1;
    esp = edx;
    eax = eax - 1;
    if(edx != 0) {
        *edx :: 0;
        A40 = A20;
        A20 = 0;
        if(!(eax = eax - 1)) {
            A48 = A48;
            eax = eax - 1 - 1;
            A48 = 0;
L000018c5:
            ecx = ecx - 1;
            eax = A8 - 1;
            asm("arpl [esi+eax],cx");
            edx = edx + 1;
            if(*(ecx + A20 - 4) == -858993460) {
                eax = eax - 1;
                asm("arpl [esi+eax+0x4],ax");
                eax = eax - 1 + ecx;
                edx = edx + 1;
                if(*(eax + A20) == -858993460) {
                    goto L000018ff;
                }
            }
            ecx = ecx - 1;
            eax = eax - 1;
            ecx = A38;
            eax = eax - 1;
            edx = *(A48 + A8 + 8);
            eax = L00002361();
L000018ff:
            A20 = A20 + 1;
            eax = eax - 1;
            A48 = A48 + 16;
            ecx = ecx + 1;
            if(A20 < *esp) {
                goto L000018c5;
            }
            eax = eax - 1;
        }
        eax = eax - 1;
        A20 = A40;
    }
    esp = esp - 1;
    esp = esp - 1;
    esp = *(esp + 80);
    eax = eax - 1;
    eax = ebx - 1;
    if(ebx != 0) {
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x0f");
        (restore)ds;
        *eax & al;
        *eax = *eax + al;
        *eax = *eax + al;
L00001931:
        eax = *(eax - 1 + 4);
        edi = edi + 1;
        eax = eax - 1;
        if(eax != 0) {
            goto L00001931;
        }
    }
    eax = eax - 1;
    if(ebx != 0) {
L00001941:
        if(*ebx != -858993460 || *(ebx + 20) != -858993460 || *(ebx + 24) != -858993460 || *(ebx + 28) != -858993460) {
            eax = eax - 1;
            ecx = A38;
            esp = esp + 1;
            eax = edi - 1;
            edx = ebx;
            eax = L00002471();
        }
        eax = eax - 1;
        eax = *(ebx + 12);
        if(*(eax + ebx - 4) != -858993460) {
            eax = eax - 1;
            ecx = A38;
            esp = esp + 1;
            eax = edi - 1;
            edx = ebx;
            eax = L00002471();
        }
        eax = eax - 1;
        ebx = *(ebx + 4);
        edi = edi - 1;
        eax = eax - 1;
        if(ebx != 0) {
            goto L00001941;
        }
    }
    eax = eax - 1;
    esp = esp + 40;
    (restore)edi;
    (restore)ebx;
}

/*	Procedure: 0x00001B51 - 0x00001B63
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    eax = eax - 1;
    esp = esp - 40;
    L00002AE1();
    esp = esp + 40;
    return(L00001B71() - 1);
}

/*	Procedure: 0x00001B71 - 0x00001D70
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00001B71(A48)
/* unknown */ void  A48;
{
	/* unknown */ void  Vffffffb8;
	/* unknown */ void  Vffffffc8;
	/* unknown */ void  Vffffffd0;
	/* unknown */ void  Vffffffd8;



    eax = eax - 1;
    esp = esp - 104;
    eax = eax - 1;
    Vffffffd8 = 0;
    eax = *(L00001D71() - 1 + 8) - 1;
    Vffffffd0 = eax;
    for(Vffffffc8 = 0; 1; eax = *L0000983c()) {
        eax = eax - 1;
        edx = Vffffffd0;
        eax = eax - 1;
        ecx = 31641;
        eax = 0;
        asm("lock dec eax");
        asm("cmpxchg [ecx],edx");
        eax = eax - 1;
        Vffffffd8 = eax;
        eax = Vffffffd8 - 1;
        if(Vffffffd8 == 0) {
            goto L00001bd7;
        }
        eax = eax - 1;
        if(Vffffffd8 == Vffffffd0 - 1) {
            break;
        }
        ecx = 1000;
    }
    Vffffffc8 = 1;
L00001bd7:
    if(*L00007B4C == 1) {
        ecx = 31;
        L00002AD1();
    } else {
        eax = *L00007B35;
        if(eax == 0) {
            *L00007B27 = 1;
            eax = eax - 1;
            edx = 0x4a58;
            eax = eax - 1;
            ecx = 0x4721;
            if(L00002DD9() != 0) {
                eax = 255;
                goto L00001d68;
            }
        } else {
            *L0000754E = 1;
        }
    }
    eax = *L00007AF4;
    if(eax == 1) {
        eax = eax - 1;
        edx = 0x45e0;
        eax = eax - 1;
        ecx = 0x43b9;
        L00002DD3();
        *L00007AD2 = 2;
    }
    eax = *L00007ACC;
    if(eax != 2) {
        eax = eax - 1;
        Vffffffb8 = 0x4cf7;
        ebp = ebp + 1;
        ecx = 1;
        eax = 499;
        edx = 0x4c73;
        ecx = 2;
        eax = *L00009858();
        if(eax == 1) {
            asm("int3");
            eax = 0;
        }
    }
    if(Vffffffc8 == 0) {
        ecx = 0;
        eax = eax - 1;
        eax = 31383;
        asm("xchg ecx,[eax]");
    }
    eax = eax - 1;
    if(*L00007AB5 != 0) {
        eax = eax - 1;
        ecx = 31404;
        if(L00002D41() != 0) {
            ebp = ebp + 1;
            eax = 0;
            edx = 2;
            ecx = 0;
            *L00007a93();
        }
    }
    ecx = 1;
    esp = esp - 1;
    eax = *L00009810() - 1;
    ecx = ecx - 1;
    *( *L00009811) = *L0000747A;
    esp = esp - 1;
    eax = *L00007470 - 1;
    edx = *L00007471;
    ecx = *L0000745B;
    *L00007470 = L00001006();
    if(*L0000744D == 0) {
        ecx = *L00007461;
        *L000097db();
    }
    if(*L00007458 == 0) {
        *L000097d4();
    }
    goto L00001d62;
    A48 = eax;
    *L0000743C = A48;
    if(*L00007419 == 0) {
        ecx = *L0000742D;
        *L000097b7();
    }
    if(*L00007424 == 0) {
        *L000097a0();
    }
L00001d62:
    eax = *L00007411;
L00001d68:
    eax = eax - 1;
    esp = esp + 104;
    return;
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00001D71 - 0x00001D80
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D71()
{



    asm("%g dec eax");
    return(*L00000030);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00001D81 - 0x00002000
 *	Argument size: 140
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D81(A8, A10, A18, A20, A24, A28, A30, A38, A40, A48, A50, A58, A60, A68, A70, A88, A90)
/* unknown */ void  A8;
/* unknown */ void  A10;
/* unknown */ void  A18;
/* unknown */ void  A20;
/* unknown */ void  A24;
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
    esp = esp - 56;
    eax = eax - 1;
    *esp = -7564;
    eax = -7565;
    eax = *( *esp) & 65535;
    if(eax != 0x5a4d) {
        eax = 0;
    } else {
        eax = eax - 1;
        eax = *esp - 1;
        asm("arpl [eax+0x3c],cx");
        eax = eax - 1;
        eax = *esp - 1 + ecx - 1;
        A8 = eax;
        eax = A8 - 1;
        eax = A8;
        if(*eax != 0x4550) {
            eax = 0;
        } else {
            eax = eax - 1;
            eax = A8 - 1 + 24 - 1;
            A10 = eax;
            eax = A10 - 1;
            eax = *A10 & 65535;
            A20 = eax;
            if(A20 != 267) {
                if(A20 == 523) {
                    goto L00001e32;
                }
            } else {
                eax = eax - 1;
                eax = A10;
                if(*(eax + 92) <= 14) {
                    eax = 0;
                    goto L00001e73;
                }
                eax = eax - 1;
                A24 = *(A10 + 208) != 0 ? 1 : 0;
                eax = A24;
                goto L00001e73;
L00001e32:
                eax = eax - 1;
                eax = A10 - 1;
                A18 = eax;
                eax = A18 - 1;
                eax = A18;
                if(*(eax + 108) <= 14) {
                    eax = 0;
                    goto L00001e73;
                }
                eax = eax - 1;
                A28 = *(A18 + 224) != 0 ? 1 : 0;
                eax = A28;
                goto L00001e73;
            }
            eax = 0;
        }
    }
L00001e73:
    eax = eax - 1;
    esp = esp + 56;
    return;
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    A8 = ecx;
    eax = eax - 1 - 1;
    esp = esp - 136;
    eax = eax - 1;
    ecx = 29581;
    *L00009537();
    esp = esp - 1;
    esp = esp - 1;
    A58 = *L00007478;
    ebp = ebp + 1;
    edx = & A60;
    eax = -2;
    ecx = A58;
    eax = L00003467() - 1;
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
        A20 = 29495;
        esp = esp - 1;
        ecx = A50;
        esp = esp - 1;
        eax = A58 - 1;
        edx = A60;
        ecx = 0;
        eax = L00003461();
    } else {
        eax = eax - 1;
        eax = A88 - 1;
        *L00007404 = eax;
        eax = *L00007404 - 1;
        eax = & A88 - 1 + 8 - 1;
        *L00007391 = eax;
    }
    eax = eax - 1;
    eax = *L000073EA - 1;
    *L0000725B = eax;
    eax = *L0000725B - 1;
    eax = A90 - 1;
    *L0000735C = eax;
    *L00007232 = -1073740791;
    *L0000722C = 1;
    eax = *L0000735C - 1;
    eax = *L000070A1 - 1;
    A68 = eax;
    eax = A68 - 1;
    A70 = *L0000709D - 1;
    *L0000729C = *L00009472();
    ecx = 1;
    L00002DDF();
    ecx = 0;
    eax = *L00009462() - 1;
    ecx = 0x4a1b;
    *L0000945d();
    if(*L00007276 == 0) {
        ecx = 1;
        L00002DDF();
    }
    edx = -1073740791;
    ecx = *L0000944c() - 1;
    esp = esp + 136;
    return(*L00009446() - 1);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    eax = eax - 1;
    esp = esp - 40;
    if(*L0000940e() != 0) {
        ecx = 0x1004;
        if(L00002001() != 0) {
            esp = esp + 40;
            return(0);
        }
    }
    esp = esp + 40;
    return(-1);
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00002001 - 0x00002041
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00002001(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vffffffc7;
	/* unknown */ void  Vffffffc8;
	/* unknown */ void  Vffffffd0;
	/* unknown */ void  Vffffffd8;



    eax = eax - 1;
    esp = esp - 88;
    A8 = 0;
    Vffffffc8 = 0x1001;
    Vffffffd0 = ecx;
    eax = eax - 1;
    Vffffffd8 = & A8 - 1;
    esp = esp - 1;
    ecx = & Vffffffc7;
    esp = esp + 1;
    eax = 10;
    ecx = 1080890248;
    *L00009393();
    esp = esp + 88;
    return((A8 & 255) - 1);
}

stack space not deallocated on return
/*	Procedure: 0x000020B1 - 0x00002310
 *	Argument size: 3724
 *	Local size: 0
 *	Save regs size: 0
 */

L000020B1(A20, A28, A30, A38, A40, A50, A260, A470, A780, Aa90, Ae90, Aea8)
/* unknown */ void  A20;
/* unknown */ void  A28;
/* unknown */ void  A30;
/* unknown */ void  A38;
/* unknown */ void  A40;
/* unknown */ void  A50;
/* unknown */ void  A260;
/* unknown */ void  A470;
/* unknown */ void  A780;
/* unknown */ void  Aa90;
/* unknown */ void  Ae90;
/* unknown */ void  Aea8;
{



    eax = eax + 1;
    (save)ebx;
    (save)ebp;
    (save)edi;
    (save)esp;
    (save)ebp;
    (save)Aea8;
    ecx = ecx + 1 + 1 + 1 + 1;
    (save)edi;
    eax = eax - 1;
    esp = esp - 3760;
    eax = eax - 1;
    eax = ( *L00006F36 - 1 ^ esp) - 1;
    Ae90 = eax;
    ebp = ebp + 1;
    edi = 0;
    ebp = ebp - 1;
    ebp = ecx;
    ecx = ecx - 1;
    asm("arpl ax,bp");
    esp = esp + 1;
    Aea8 = edx;
    eax = eax - 1;
    edi = ecx;
    ebp = ebp - 1;
    esp = edi;
    eax = L00002871() - 1;
    ebx = eax;
    eax = eax - 1;
    if(eax == 0) {
        eax = eax - 1;
        ecx = edi;
        esp = esp - 1;
        esp = L00002861();
    }
    ecx = ecx + 1 | -1;
    ebp = ebp - 1;
    eax = ebp;
    edx = 0;
    ecx = 65001;
    esp = esp + 1;
    A28 = edi;
    eax = eax - 1;
    Aea8 = Aea8;
    esp = esp - 1;
    A20 = edi;
    eax = *L0000928b();
    if(eax < 512) {
        A28 = eax;
        eax = eax - 1;
        eax = & Aa90;
        ecx = ecx + 1 | -1;
        ebp = ebp - 1;
        eax = ebp;
        edx = 0;
        ecx = 65001;
        A20 = eax - 1;
        eax = *L0000925f();
        if(eax == 0) {
            goto L00002160;
        }
        eax = eax - 1;
        Aea8 = & Aa90;
    } else {
L00002160:
        eax = eax - 1;
        Aea8 = 0x4c5a;
    }
    ecx = 0x1002;
    eax = L00002001();
    if(eax != 0) {
        eax = eax - 1;
        ecx = 0x4b25;
        esp = esp - 1;
        ecx = Aea8;
        esp = esp - 1;
        eax = edi;
        edx = *(ecx + ebp * 4);
        ecx = ebp;
        eax = L00002311();
        if(eax != 0) {
            goto L000022e4;
        }
    } else {
        al = 1;
    }
    ebp = ebp - 1;
    if(esp == 0) {
        eax = eax - 1;
        if(ebx == 0) {
            goto L000022de;
        }
    }
    if(al != 0) {
        eax = *L00009239();
        if(eax != 0) {
            goto L000022de;
        }
    }
    eax = eax - 1;
    ecx = edi - 5;
    esp = esp - 1;
    eax = & A50 - 1 - 1;
    edx = & A260;
    ecx = & A40 + 1;
    A28 = 260;
    A20 = 259;
    eax = L00002DF1() - 1;
    if(ebx != 0) {
        esp = esp + 1;
        eax = A40 - 1;
        A30 = Aea8;
        esp = esp - 1;
        edx = & A260;
        ecx = & A50 + 1;
        ecx = Aea8;
        A28 = ebp;
        A20 = 0x4b87;
        eax = *ebx();
        eax :: 1;
    } else {
        esp = esp - 1;
        A38 = edi;
        eax = eax - 1;
        eax = & A470;
        esp = esp - 1;
        A30 = edi;
        esp = esp - 1;
        ecx = ecx + 1 | -1;
        edx = 0;
        ecx = 65001;
        A28 = 778;
        edi = 0x4b16;
        A20 = & A260 - 1 - 1;
        eax = *L0000915b();
        esp = esp - 1;
        A38 = edi;
        eax :: 0;
        eax = eax - 1;
        esp = esp - 1;
        A30 = edi;
        eax = & A780 - 1;
        ebx = & A470;
        esp = esp - 1;
        ecx = 65001;
        eax = & A50 - 1;
        asm("cmovz ebx,edi");
        ecx = ecx + 1 | -1;
        edx = 0;
        A28 = 778;
        eax = eax - 1;
        A20 = eax;
        eax = A20 - 1;
        edi = 0x4aaf;
        *L00009111();
        esp = esp + 1;
        eax = A40;
        esp = esp - 1;
        A30 = ebp;
        eax :: 0;
        eax = eax - 1;
        esp = esp - 1;
        eax = 0x4a75;
        edx = ebx;
        ecx = & A780 + 1;
        ecx = Aea8;
        esp = esp - 1;
        asm("cmovz ecx,edi");
        A28 = ebp;
        A20 = eax - 1;
        ecx = ecx + 1;
        eax = *esp();
    }
    if(eax == 1) {
L000022de:
        eax = *L000090dd();
    }
L000022e4:
    eax = eax - 1;
    eax = eax - 1;
    eax = eax - 1;
    ecx = Ae90 ^ esp;
    esp = esp + 3760;
    ecx = ecx + 1;
    (restore)edi;
    ecx = ecx + 1;
    (restore)Aea8;
    ecx = ecx + 1;
    (restore)ebp;
    ecx = ecx + 1;
    (restore)esp;
    (restore)edi;
    (restore)ebp;
    (restore)ebx;
    return(L000017A1() - 1);
    asm("int3");
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00002311 - 0x00002360
 *	Argument size: 68
 *	Local size: 0
 *	Save regs size: 0
 */

L00002311(A20, A28, A2c, A30, A38, A40, A60)
/* unknown */ void  A20;
/* unknown */ void  A28;
/* unknown */ void  A2c;
/* unknown */ void  A30;
/* unknown */ void  A38;
/* unknown */ void  A40;
/* unknown */ void  A60;
{



    eax = eax - 1;
    esp = esp - 88;
    A60 = 0;
    A20 = 0x1002;
    A28 = ecx;
    A2c = edx;
    esp = esp - 1;
    A30 = eax;
    eax = eax - 1;
    A38 = & A60 - 1;
    esp = esp - 1;
    A40 = ecx;
    esp = esp - 1;
    ecx = & A20;
    esp = esp + 1;
    eax = 10;
    ecx = 1080890248;
    *L00009075();
    esp = esp + 88;
    return((A60 & 255) - 1);
    asm("int3");
}

/*	Procedure: 0x00002361 - 0x00002470
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002361()
{
	/* unknown */ void  Vfffffbe7;
	/* unknown */ void  Vfffffbeb;
	/* unknown */ void  Vffffffe8;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vffffffff;



    eax = eax - 1;
    esp = esp - 1080;
    eax = eax - 1;
    eax = ( *L00006C92 - 1 ^ esp) - 1;
    Vffffffe8 = eax;
    esp = esp + 1;
    edx = *L00006C98;
    esp = esp - 1;
    ebx = ecx;
    ecx = ecx + 1;
    if(edx != -1) {
        *edx :: 0;
        Vfffffff8 = edi;
        if(!(eax = eax - 1)) {
            eax = eax - 1;
            ecx = ecx | -1;
            eax = -1;
            edi = edx;
            asm("repne scasb");
            eax = eax - 1;
            ecx = !ecx;
            eax = eax - 1;
            ecx = ecx + 44;
            eax = eax - 1;
            if(ecx > 1024) {
                goto L00002432;
            }
            esp = esp - 1;
            ecx = & Vfffffbe7;
            ecx = 0;
            eax = eax - 1;
            edi = 0x48f1;
            asm("Unknown opcode 0x66");
            asm("Unknown opcode 0x0f");
            (restore)ds;
            *eax & al;
            *eax = *eax + al;
            *eax = *eax + al;
            do {
                eax = ( *(ecx + edi) & 255) - 1;
                ecx = ecx + 1;
                *(esp + ecx + 31) = al;
            } while(al != 0);
            ecx = ecx | -1;
            eax = -2;
            edi = & Vfffffbeb;
            asm("repne scasb");
            ecx = 0;
            asm("o16 nop");
            do {
                eax = ( *(edx + ecx) & 255) - 1;
                ecx = ecx + 1;
                *(edi + ecx - 2) = al;
            } while(al != 0);
            ecx = ecx | -1;
            eax = -2;
            edi = & Vfffffbeb;
            asm("repne scasb");
            ecx = 0;
            eax = eax - 1;
            edx = 0x48c3;
            asm("Unknown opcode 0x66");
            asm("Unknown opcode 0x66");
            asm("Unknown opcode 0x66");
            asm("Unknown opcode 0x0f");
            (restore)ds;
            *eax & al;
            *eax = *eax + al;
            *eax = *eax + al;
            do {
                eax = ( *(edx + ecx) & 255) - 1;
                ecx = ecx + 1;
                *(edi + ecx - 2) = al;
            } while(al != 0);
        } else {
L00002432:
            esp = esp - 1;
            ecx = 0x49f8;
        }
        ecx = ecx + 1;
        eax = 2;
        ecx = ecx + 1 - 1;
        ecx = ebx;
        eax = L000020B1() - 1;
        edi = Vffffffff;
    }
    eax = eax - 1;
    eax = eax - 1;
    ecx = Vffffffe8 ^ esp;
    esp = esp + 1080;
    return(L000017A1() - 1);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00002471 - 0x00002610
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002471()
{
	/* unknown */ void  Vfffffe42;
	/* unknown */ void  Vfffffe47;
	/* unknown */ void  Vfffffe4b;
	/* unknown */ void  Vfffffe50;
	/* unknown */ void  Vfffffe58;
	/* unknown */ void  Vfffffe60;
	/* unknown */ void  Vfffffe69;
	/* unknown */ void  Vfffffe70;
	/* unknown */ void  Vfffffe72;
	/* unknown */ void  Vfffffe76;
	/* unknown */ void  Vfffffe8b;
	/* unknown */ void  Vfffffe8e;
	/* unknown */ void  Vfffffec1;
	/* unknown */ void  Vfffffec5;
	/* unknown */ void  Vfffffec7;
	/* unknown */ void  Vffffffd8;
	/* unknown */ void  Vffffffe1;
	/* unknown */ void  Vffffffe8;



    eax = eax + 1;
    (save)ebp;
    (save)esi;
    (save)edi;
    ecx = ecx + 1;
    (save)esp;
    eax = eax - 1;
    esp = esp - 456;
    eax = eax - 1;
    eax = ( *L00006B7C - 1 ^ esp) - 1;
    Vffffffd8 = eax;
    edi = *L00006B8B;
    ebp = ebp + 1;
    esp = eax;
    eax = eax - 1;
    esi = edx;
    eax = eax - 1;
    ebp = ecx;
    if(edi != -1) {
        eax = eax - 1;
        ecx = 0x4ae2;
        eax = *L00008ee4() - 1;
        if(eax != 0) {
            eax = eax - 1;
            edx = 0x4abc;
            ecx = eax - 1;
            eax = *L00008ed3() - 1;
            *L0000721C = eax;
            eax = *L0000721C - 1;
            if(esi == 0) {
                goto L000025d1;
            }
            eax = eax - 1;
            if(eax == 0) {
                goto L000025d1;
            }
            eax = eax - 1;
            ecx = *(esi + 12);
            eax = eax - 1;
            Vffffffe8 = ebx;
            Vfffffe70 = 0x4a7f;
            eax = eax - 1 - 1 - 1;
            ecx = ecx - 36;
            esp = esp + 1;
            Vfffffe69 = esp;
            eax = eax - 1;
            eax = eax - 1;
            ebx = esi + 32;
            esp = esp - 1;
            Vfffffe60 = 0x4a32;
            Vfffffe58 = 0x4a17;
            eax = eax - 1 - 1 - 1;
            eax = eax - 1;
            Vfffffe50 = 0x49fe;
            esp = esp - 1;
            edx = 0x4983;
            ecx = & Vfffffec7;
            Vfffffe47 = ebx;
            esp = esp - 1;
            ecx = *(esi + 12);
            edx = & Vfffffe8e;
            eax = *L000049A7() - 1 - 1;
            esp = esp - 1;
            eax = ebx;
            ecx = & Vfffffe76 - 1 - 36;
            eax = L00002611() - 1;
            ecx = & Vfffffec5;
            esp = esp - 1;
            ecx = 0x4941;
            eax = *L00008e34() - 1;
            edx = 0x492e;
            esp = esp - 1;
            asm("arpl ax,ax");
            eax = eax - 1;
            Vfffffe4b = 0x491f;
            eax = 0x491e;
            edx = edx - 1;
            ecx = esp + & Vfffffe8b + 160;
            esp = esp - 1;
            Vfffffe42 = & Vfffffe72 - 1;
            *L00007142();
            esp = esp - 1;
            ecx = & Vfffffec1 + 1;
            edx = edi;
            eax = 3;
            ecx = ebp;
            eax = L000020B1() - 1;
            ebx = Vffffffe1;
        } else {
L000025d1:
            esp = esp - 1;
            ecx = 0x488a;
            edx = edi;
            eax = 3;
            ecx = ebp;
            eax = L000020B1();
        }
    }
    eax = eax - 1;
    eax = eax - 1;
    ecx = Vffffffd8 ^ esp;
    esp = esp + 456;
    ecx = ecx + 1;
    (restore)esp;
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    return(L000017A1() - 1);
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
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00002611 - 0x000026B1
 *	Argument size: 20
 *	Local size: 0
 *	Save regs size: 0
 */

L00002611(A50, A58, A60)
/* unknown */ void  A50;
/* unknown */ void  A58;
/* unknown */ void  A60;
{



    eax = eax + 1;
    (save)ebp;
    (save)edi;
    (save)ebp;
    (save)A58;
    ecx = ecx + 1 + 1 + 1;
    (save)edi;
    eax = eax - 1;
    esp = esp - 32;
    edi = 0;
    ebp = 15;
    ebp = eax;
    esp = esp - 1;
    ecx :: ebp;
    esp = esp - 1;
    edi = edx;
    esp = esp - 1;
    A58 = ecx;
    ecx = ecx - 1;
    asm("cmovc ebp,ecx");
    eax = eax - 1;
    if(ebp != 0) {
        A50 = A50;
        eax = eax - 1 - 1;
        A58 = A58;
        esp = esp - 1;
        A60 = esp;
        esp = esp - 1;
        esp = edx;
        eax = eax - 1;
        A58 = ecx;
        esp = esp - 1;
        ebp = ebp - ecx;
        eax = eax - 1;
        edi = ebp;
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x66");
        asm("Unknown opcode 0x0f");
        (restore)ds;
        *eax & al;
        *eax = *eax + al;
        *eax = *eax + al;
        do {
            ecx = ecx + 1;
            A50 = *(ebp + A58) & 255;
            eax = eax - 1;
            edx = 0x492f;
            ecx = ecx - 1;
            ecx = esp;
            esp = esp + 1;
            eax = A50;
            *A58 = bl;
            A58 = A58 + 1;
            ecx = ecx - 1;
            esp = esp + 3;
            eax = *L00007077() - 1 - 1;
        } while(ebp = ebp - 1);
        esp = esp - 1;
        esp = *(esp + 96);
        eax = eax - 1;
        eax = eax - 1;
    }
    ecx = ecx - 1;
    eax = edi + edi * 2;
    edx = edx + 1;
    *(edi + A58) = 0;
    *(edi + eax) = 0;
    eax = eax - 1;
    esp = esp + 32;
    ecx = ecx + 1;
    (restore)edi;
    ecx = ecx + 1;
    (restore)A58;
    ecx = ecx + 1;
    (restore)ebp;
    (restore)edi;
    (restore)ebp;
}

/*	Procedure: 0x00002841 - 0x00002860
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002841()
{



    eax = eax - 1;
    *L00006EA6 = 0;
    *L00006EA7 = ecx;
    return(*L00006EB9 - 1 - 1);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00002861 - 0x00002870
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002861()
{



    eax = eax - 1;
    return(*L00006E91);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00002871 - 0x00002878
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002871()
{



    eax = eax - 1;
    return(*L00006E89);
}

/* DEST BLOCK NOT FOUND: 00002879 -> 00002819 */
/*	Procedure: 0x00002879 - 0x00002940
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00002879(A8)
/* unknown */ void  A8;
{



    goto ( *L00008ce2);
    asm("int3");
    asm("int3");
    A8 = ecx;
    eax = eax - 1 - 1;
    esp = esp - 40;
    eax = eax - 1;
    eax = *(A8 - 1);
    if(*eax == -529697949) {
        eax = eax - 1;
        eax = *(A8 - 1);
        if(*(eax + 24) != 4) {
            goto L000028f8;
        }
        eax = eax - 1;
        eax = *(A8 - 1);
        if(*(eax + 32) != 429065504) {
            eax = eax - 1;
            eax = *(A8 - 1);
            if(*(eax + 32) != 429065505) {
                eax = eax - 1;
                eax = *(A8 - 1);
                if(*(eax + 32) != 429065506) {
                    eax = eax - 1;
                    if(*( *(A8 - 1) + 32) != 26820608) {
                        goto L000028f8;
                    }
                }
            }
        }
        L0000341F();
        eax = 1;
    } else {
L000028f8:
        eax = 0;
    }
    eax = eax - 1;
    esp = esp + 40;
    return;
    asm("int3");
    asm("int3");
    eax = eax - 1;
    esp = esp - 40;
    eax = eax - 1;
    ecx = -139;
    *L00008adf();
    esp = esp + 40;
    return(-1);
    goto ( *L00008c3a);
    goto ( *L00008c2c);
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
    asm("int3");
    eax = eax - 1;
    A8 = ecx;
    return(0);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00002941 - 0x00002943
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002941()
{



    return(0);
}

/*	Procedure: 0x00002951 - 0x000029D0
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00002951(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    A8 = ebx;
    (save)edi;
    eax = eax - 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebx = 0x4c5f;
    eax = eax - 1;
    edi = 0x4e70;
    eax = eax - 1;
    if(0x4c5f < 0x4e70) {
        asm("Unknown opcode 0x0f");
        (restore)ds;
        *(eax - 117) = *(eax - 117) + cl;
        do {
            asm("Unknown opcode 0xc0");
            if(!(ecx = ecx + *(eax - 123))) {
                eax = *eax();
            }
            eax = eax - 1;
            ebx = ebx + 8;
            eax = eax - 1;
        } while(ebx < edi);
    }
    eax = eax - 1;
    ebx = Ac;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
    return;
    asm("int3");
    asm("int3");
    A8 = ebx;
    (save)edi;
    eax = eax - 1 - 1;
    esp = esp - 32;
    eax = eax - 1;
    ebx = 0x4f4f;
    eax = eax - 1;
    edi = 0x5160;
    eax = eax - 1;
    if(0x4f4f < 0x5160) {
        asm("Unknown opcode 0x0f");
        (restore)ds;
        *(eax - 117) = *(eax - 117) + cl;
L000029b1:
        asm("Unknown opcode 0xc0");
        if(!(ecx = ecx + *(eax - 123))) {
            eax = *eax();
        }
        eax = eax - 1;
        ebx = ebx + 8;
        eax = eax - 1;
        if(ebx < edi) {
            goto L000029b1;
        }
    }
    eax = eax - 1;
    ebx = Ac;
    eax = eax - 1;
    esp = esp + 32;
    (restore)edi;
    return;
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x000029D1 - 0x00002A90
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000029D1(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vffffffd7;
	/* unknown */ void  Vffffffd8;
	/* unknown */ void  Vffffffdf;
	/* unknown */ void  Vffffffe7;
	/* unknown */ void  Vffffffe8;



    A8 = ecx;
    eax = eax - 1 - 1;
    esp = esp - 72;
    eax = eax - 1;
    ecx = *L00006D78;
    eax = *L00008af2() - 1;
    Vffffffd8 = eax;
    eax = Vffffffd8 - 1;
    if(Vffffffd8 == -1) {
        eax = eax - 1;
        ecx = A8;
        eax = *L00008ad2();
    } else {
        ecx = 8;
        eax = L00003431() - 1;
        ecx = *L00006D43;
        eax = *L00008abd() - 1;
        Vffffffd8 = eax;
        eax = Vffffffd8 - 1;
        ecx = *L00006D19;
        eax = *L00008aab() - 1;
        Vffffffe8 = eax;
        eax = Vffffffe8 - 1;
        ecx = A8;
        *L00008afb();
        esp = esp - 1;
        edx = & Vffffffd7;
        ecx = & Vffffffe7 - 1 - 1;
        eax = L0000342B() - 1;
        Vffffffdf = eax;
        eax = Vffffffdf - 1;
        ecx = Vffffffd7;
        eax = *L00008ad9() - 1;
        *L00006CF2 = eax;
        eax = *L00006CF2 - 1;
        ecx = Vffffffe7;
        *L00006CC8 = *L00008ac7() - 1;
        ecx = 8;
        eax = L00003425() - 1;
        eax = Vffffffdf;
    }
    eax = eax - 1;
    esp = esp + 72;
    return;
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00002A91 - 0x00002AD0
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00002A91(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vffffffe8;



    A8 = A8;
    eax = eax - 1 - 1;
    esp = esp - 56;
    eax = eax - 1;
    Vffffffe8 = L000029D1() - 1 == 0 ? -1 : 0;
    esp = esp + 56;
    return(Vffffffe8 - 1);
    asm("int3");
    goto ( *L00008a6e);
    goto ( *L00008a60);
}

/* DEST BLOCK NOT FOUND: 00002ad1 -> 00002abb */
/* DEST BLOCK NOT FOUND: 00002ad7 -> 00002abb */
/*	Procedure: 0x00002AD1 - 0x00002AE0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002AD1()
{



    goto ( *L00008a52);
    goto ( *L00008a44);
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00002AE1 - 0x00002BE4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002AE1()
{
	/* unknown */ void  Vffffffd7;
	/* unknown */ void  Vffffffd8;
	/* unknown */ void  Vffffffdd;
	/* unknown */ void  Vffffffde;
	/* unknown */ void  Vffffffdf;
	/* unknown */ void  Vffffffe5;
	/* unknown */ void  Vffffffe6;



    eax = eax - 1;
    esp = esp - 72;
    Vffffffd8 = 0;
    eax = eax - 1 - 1;
    eax = 769630770;
    asm("cdq");
    eax = eax - *eax;
    *(eax + 57) = *(eax + 57) + cl;
    if(!(eax = eax + 25858)) {
        eax = eax - 1;
        eax = !( *L000064F9 - 1) - 1;
        *L000064F7 = eax;
    } else {
        eax = eax - 1;
        ecx = & Vffffffd8;
        *L0000884f();
        esp = esp - 1;
        esp = esp - 1;
        Vffffffde = Vffffffd7;
        eax = *L00008847();
        ecx = eax;
        eax = eax - 1;
        Vffffffde = (Vffffffde - 1 ^ ecx) - 1;
        eax = *L0000883a();
        ecx = eax;
        eax = eax - 1;
        Vffffffde = (Vffffffde - 1 ^ ecx) - 1;
        eax = *L0000882d();
        ecx = eax;
        eax = eax - 1;
        eax = (Vffffffde - 1 ^ ecx) - 1;
        Vffffffde = eax;
        eax = Vffffffde - 1;
        ecx = & Vffffffe6;
        esp = esp - 1;
        eax = *L0000881b() - 1;
        ecx = ecx - 1;
        eax = (Vffffffdd ^ Vffffffe5) - 1;
        Vffffffdd = eax;
        eax = Vffffffdd - 1;
        ecx = -1;
        asm("Unknown opcode 0xff");
        *eax = *eax + 1;
        *(eax - 117) = *(eax - 117) + cl;
        esp = esp + 1;
        eax = ((al & 40) - 1 & ecx) - 1;
        Vffffffde = eax;
        eax = Vffffffde - 1;
        eax = 769630770;
        asm("cdq");
        eax = eax - *eax;
        *(eax + 57) = *(eax + 57) + cl;
        esp = esp + 1;
        if(!(al = al & 40)) {
            eax = eax - 1;
            eax = 769630771;
            asm("cdq");
            eax = eax - *eax;
            *(eax - 119) = *(eax - 119) + cl;
            esp = esp + 1;
            al = al & 40;
        }
        eax = eax - 1;
        eax = Vffffffdf - 1;
        *L00006436 = eax;
        eax = *L00006436 - 1;
        eax = !(Vffffffdf - 1) - 1;
        *L0000642F = eax;
    }
    eax = eax - 1;
    esp = esp + 72;
    return;
    goto ( *L00008934);
}

/* DEST BLOCK NOT FOUND: 00002be5 -> 00002bbf */
/* DEST BLOCK NOT FOUND: 00002beb -> 00002bbf */
/* DEST BLOCK NOT FOUND: 00002bf1 -> 00002bbf */
/* DEST BLOCK NOT FOUND: 00002bf7 -> 00002bbf */
/* DEST BLOCK NOT FOUND: 00002bfd -> 00002bbf */
/*	Procedure: 0x00002BE5 - 0x00002C02
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002BE5()
{



    goto ( *L00008926);
    goto ( *L00008918);
    goto ( *L0000890a);
    goto ( *L000088fc);
    goto ( *L000088e6);
}

/*	Procedure: 0x00002C11 - 0x00002C90
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00002C11(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vffffffe0;
	/* unknown */ void  Vffffffe8;



    A8 = ecx;
    eax = eax - 1 - 1;
    esp = esp - 40;
    eax = eax - 1;
    eax = A8 - 1;
    Vffffffe0 = eax;
    eax = Vffffffe0 - 1;
    eax = *Vffffffe0 & 65535;
    if(eax != 0x5a4d) {
        eax = 0;
    } else {
        eax = eax - 1;
        eax = Vffffffe0 - 1;
        asm("arpl [eax+0x3c],cx");
        eax = eax - 1;
        eax = Vffffffe0 - 1 + ecx - 1;
        Vffffffe8 = eax;
        eax = Vffffffe8 - 1;
        eax = Vffffffe8;
        if(*eax != 0x4550) {
            eax = 0;
        } else {
            eax = eax - 1;
            eax = Vffffffe8 - 1 + 24 - 1;
            *esp = eax;
            eax = *esp - 1;
            eax = ( *( *esp) & 65535) != 523 ? 0 : 1;
        }
    }
    eax = eax - 1;
    esp = esp + 40;
    return;
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

/*	Procedure: 0x00002C91 - 0x00002D32
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00002C91(A8, A10)
/* unknown */ void  A8;
/* unknown */ void  A10;
{
	/* unknown */ void  Vffffffe0;
	/* unknown */ void  Vffffffe8;



    A10 = edx;
    A8 = ecx;
    eax = eax - 1 - 1 - 1;
    esp = esp - 40;
    eax = eax - 1;
    eax = A8 - 1;
    asm("arpl [eax+0x3c],cx");
    eax = eax - 1;
    eax = A8 - 1 + ecx - 1;
    *esp = eax;
    Vffffffe0 = 0;
    eax = *esp - 1;
    eax = *esp;
    ecx = *(eax + 20) & 65535;
    eax = eax - 1;
    eax = *esp - 1 + ecx + 24 - 1;
    for(Vffffffe8 = eax; 1; Vffffffe8 = eax) {
        eax = eax - 1;
        eax = *( *esp + 6) & 65535;
        if(Vffffffe0 >= eax) {
            goto L00002d2c;
        }
        eax = eax - 1;
        eax = *(Vffffffe8 + 12) - 1;
        if(A10 >= eax) {
            eax = eax - 1;
            eax = *(Vffffffe8 + 12) - 1 + *(Vffffffe8 + 8) - 1;
            if(A10 < eax) {
                break;
            }
        }
        eax = Vffffffe0 + 1;
        Vffffffe0 = eax;
        eax = Vffffffe0 - 1;
        eax = Vffffffe8 - 1 + 40 - 1;
    }
    eax = eax - 1;
    eax = Vffffffe8;
    goto L00002d2e;
L00002d2c:
    eax = 0;
L00002d2e:
    eax = eax - 1;
    esp = esp + 40;
}

/*	Procedure: 0x00002D41 - 0x00002DD2
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00002D41(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vffffffc8;
	/* unknown */ void  Vffffffd0;
	/* unknown */ void  Vffffffd8;
	/* unknown */ void  Vffffffec;



    A8 = ecx;
    eax = eax - 1 - 1;
    esp = esp - 88;
    eax = eax - 1;
    Vffffffc8 = -11601;
    eax = -11602;
    ecx = Vffffffc8;
    eax = L00002C11();
    if(eax == 0) {
        eax = 0;
    } else {
        eax = eax - 1;
        eax = eax - 1;
        eax = A8 - 1 - Vffffffc8 - 1;
        Vffffffd8 = eax;
        edx = Vffffffd8;
        eax = Vffffffd8 - 1 - 1;
        ecx = Vffffffc8;
        eax = L00002C91() - 1;
        Vffffffd0 = eax;
        eax = Vffffffd0 - 1;
        if(Vffffffd0 == 0) {
            eax = 0;
        } else {
            eax = eax - 1;
            Vffffffec = ( *(Vffffffd0 + 36) & -2147483648) == 0 ? 1 : 0;
            eax = Vffffffec;
            goto L00002dc7;
            eax = 0;
        }
    }
L00002dc7:
    eax = eax - 1;
    esp = esp + 88;
    return;
    asm("int3");
    goto ( *L0000870e);
}

/* DEST BLOCK NOT FOUND: 00002dd3 -> 00002dc7 */
/*	Procedure: 0x00002DD3 - 0x00002DD8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002DD3()
{



    goto ( *L000086e0);
}

/* DEST BLOCK NOT FOUND: 00002dd9 -> 00002dc7 */
/*	Procedure: 0x00002DD9 - 0x00002DDE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002DD9()
{



    goto ( *L000086c2);
}

/* DEST BLOCK NOT FOUND: 00002ddf -> 00002dc7 */
/*	Procedure: 0x00002DDF - 0x00002DF0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002DDF()
{



    goto ( *L000086c4);
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
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00002DF1 - 0x000031C3
 *	Argument size: 260
 *	Local size: 0
 *	Save regs size: 0
 */

L00002DF1(A18, A20, A28, A30, A38, A40, A48, A50, A58, A60, A68, A70, A78, A80, Ab8, Ac0, Af0, Af8, A100, A108, A110, A118)
/* unknown */ void  A18;
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
/* unknown */ void  A78;
/* unknown */ void  A80;
/* unknown */ void  Ab8;
/* unknown */ void  Ac0;
/* unknown */ void  Af0;
/* unknown */ void  Af8;
/* unknown */ void  A100;
/* unknown */ void  A108;
/* unknown */ void  A110;
/* unknown */ void  A118;
{



    esp = esp + 1;
    A18 = eax;
    (save)ebp;
    (save)esi;
    (save)ebp;
    ecx = ecx + 1 + 1;
    (save)esi;
    eax = eax - 1;
    esp = esp - 200;
    eax = eax - 1;
    esi = ecx - 1;
    esp = esp - 1;
    esi = edx;
    *(ecx + 1) = 0;
    *edx = 0;
    eax = eax - 1;
    edx = & A78;
    esp = esp + 1;
    eax = 47;
    ecx = esi;
    ebp = -1;
    ebp = ecx;
    if(*L00008522() - 1 == 0) {
L00002e2c:
        esp = esp + 200;
        ecx = ecx + 1;
        (restore)esi;
        ecx = ecx + 1;
        (restore)ebp;
        (restore)esi;
        (restore)ebp;
        return(-1);
    }
    esp = esp + 1;
    edx = A110;
    eax = A118 - 1 - 1;
    ecx = A80;
    if(*L000084f7() == 0) {
        goto L00002e2c;
    }
    esp = esp - 1;
    eax = 0x5a4d;
    cx = A80 + 1;
    if(*ecx != 0x5a4d) {
        goto L00002e2c;
    }
    ecx = ecx - 1;
    asm("arpl [ecx+0x3c],ax");
    if(eax <= 0) {
        goto L00002e2c;
    }
    ecx = ecx + 1;
    *(ecx + eax) :: 0x4550;
    if(ecx = ecx - 1 + eax) {
        goto L00002e2c;
    }
    esp = esp + 1;
    eax = *(ecx + 6) & 65535;
    eax = ( *(ecx + 20) & 65535) - 1;
    Ac0 = Ac0;
    ecx = ecx + 1;
    esi = esi - ecx;
    eax = eax - 1;
    Ab8 = Ab8;
    Ac0 = ebp;
    eax = eax - 1;
    edx = eax + ecx + 24;
    Ab8 = ebp;
    ebp = ebp + 1;
    if(eax != 0) {
        do {
            ecx = Ac0 - 1 + (Ac0 - 1) * 4;
            eax = *(edx + ecx * 8 + 12);
            if(esi >= eax) {
                Ab8 = esi - eax;
                if(esi < *(edx + ecx * 8 + 8)) {
                    break;
                }
            }
            Ac0 = Ac0 + 1;
            ecx = ecx + 1;
        } while(Ac0 < eax);
    }
    ecx = ecx + 1;
    if(Ac0 != eax) {
        Ac0 = Ac0 + 1;
        eax = eax + 1;
        if(*L00006843 != ch) {
            goto L00002f03;
        }
        eax = eax - 1;
        if(*L00006832 == ebp) {
            eax = L000031D1() - 1;
            *L00006824 = eax;
            eax = *L00006824 - 1;
            if(eax != 0) {
                *L00006820 = 1;
                goto L00002f0a;
L00002f03:
                eax = eax - 1;
                eax = *L0000680F;
L00002f0a:
                eax = eax - 1;
                edx = 0x41d8;
                ecx = eax - 1;
                eax = *L00008487() - 1;
                if(eax != 0) {
                    eax = eax - 1;
                    ecx = & A58;
                    ebp = ebp + 1;
                    ebp = ebp + 1;
                    A38 = 0;
                    A30 = ebp;
                    A28 = ebp;
                    A20 = & A70;
                    ecx = A110;
                    edx = 0;
                    eax = *LFFFFFFFA();
                    if(eax != 0) {
                        goto L00002f5a;
                    }
                }
            }
        }
    }
    eax = 0;
    goto L000031a6;
L00002f5a:
    eax = eax - 1;
    eax = eax - 1;
    eax = *( *A58)();
    if(eax == 20030901) {
        eax = eax - 1;
        ecx = A58;
        esp = esp - 1;
        esp = esp - 1;
        eax = 0x4164;
        edx = 0;
        eax = *( *( & A68) + 56)();
        if(eax != 0) {
            eax = eax - 1;
            ecx = A68;
            eax = eax - 1;
            A30 = ebp;
            esp = esp - 1;
            eax = eax - 1;
            eax = *( & A48);
            esp = esp + 1;
            eax = Ab8;
            edx = bx & 65535;
            A28 = ebp;
            A20 = ebp;
            eax = *(eax - 1 - 1 + 64)();
            if(eax != 0) {
                eax = eax - 1;
                A40 = ebp;
                eax = eax - 1 - 1;
                edx = & A40;
                eax = eax - 1;
                if(*( *A48 + 208)() != 0) {
                    eax = eax - 1;
                    ecx = A40;
                    eax = eax - 1;
                    if(ecx != 0) {
                        eax = eax - 1;
                        eax = *ecx - 1;
                        esi = ebp;
                        eax = *(eax + 16)();
                        if(eax != 0) {
                            asm("Unknown opcode 0x0f");
                            (restore)ds;
                            esp = esp + 1;
                            *eax = *eax + al;
                            do {
                                eax = eax - 1;
                                eax = eax - 1;
                                A30 = ebp;
                                eax = eax - 1 - 1;
                                A28 = & Af8;
                                eax = *A40 - 1 - 1 - 1;
                                A20 = & A60;
                                esp = esp - 1;
                                ecx = & Af0;
                                esp = esp - 1;
                                edx = 0;
                                if(*( & A108 + 24)() == 0) {
                                    goto L00003176;
                                }
                                eax = Af0 & 65535;
                                if(eax == Ac0) {
                                    ecx = A108;
                                    if(ecx <= Ab8) {
                                        eax = A60;
                                        if(Ab8 < ecx + eax) {
                                            goto L00003077;
                                        }
                                    }
                                }
                                eax = eax - 1;
                                eax = eax - 1;
                                eax = *( *A40 + 16)();
                            } while(eax != 0);
                            goto L00003162;
L00003077:
                            eax = Af8;
                            if(eax == 0) {
                                goto L00003176;
                            }
                            eax = eax - 1;
                            Ac0 = eax;
                            eax = eax - 1;
                            eax = -1;
                            asm("Unknown opcode 0xff");
                            asm("Unknown opcode 0xff");
                            eax = *Ab8() - 1;
                            if(Ac0 >= eax) {
                                goto L00003176;
                            }
                            eax = eax - 1;
                            Ac0 = Ac0 << 3;
                            *L000082b3();
                            esp = esp - 1;
                            ecx = Ac0 - 1;
                            edx = 0;
                            eax = *L000082ad() - 1;
                            esi = eax;
                            eax = eax - 1;
                            if(eax == 0) {
                                goto L00003176;
                            }
                            eax = eax - 1;
                            eax = eax - 1;
                            A30 = eax;
                            eax = A30 - 1;
                            esp = esp - 1;
                            edx = *A40;
                            eax = & Af8 - 1;
                            A28 = eax;
                            eax = A28 - 1;
                            ebp = ebp + 1;
                            ebp = ebp + 1;
                            eax = -1;
                            A20 = ebp;
                            ecx = 1;
                            if(*( & A50 + 24)() != 0) {
                                Ab8 = Ab8 - A108;
                                if(Ab8 >= *esi) {
                                    edx = Af8;
                                    ecx = 1;
                                    if(edx > 1) {
                                        eax = eax - 1;
                                        eax = esi + 8;
                                        do {
                                            if(Ab8 < *eax) {
                                                break;
                                            }
                                            ecx = ecx + 1;
                                            eax = eax - 1 + 8;
                                        } while(ecx < edx);
                                    }
                                    edx = A50;
                                    eax = ecx - 1 - 1;
                                    ecx = A48;
                                    eax = *(esi + eax * 8 + 4) - 1;
                                    A30 = ebp;
                                    esp = esp - 1;
                                    eax = eax & 16777215;
                                    ebp = ebp - 1;
                                    eax = esi - 1;
                                    A28 = ebp;
                                    *ebp = eax;
                                    eax = eax - 1;
                                    A20 = ebp;
                                    *( *( & A100 + 1) - 1 + 224)();
                                    al :: 0;
                                    asm("cmovnz ebp,ebx");
                                }
                            }
                        }
L00003162:
                        *L000081f1();
                        esp = esp - 1;
                        eax = esi;
                        edx = 0;
                        ecx = eax - 1;
                        eax = *L000081f3();
L00003176:
                        eax = eax - 1;
                        eax = eax - 1;
                        eax = *( *A40)();
                    }
                }
                eax = eax - 1;
                eax = eax - 1;
                eax = *( *A48 + 128)();
            }
            eax = eax - 1;
            eax = eax - 1;
            eax = *( *A68 + 112)();
        }
    }
    eax = eax - 1;
    eax = eax - 1;
    *( *A58 + 80)();
    eax = ebp;
L000031a6:
    eax = eax - 1;
    eax = eax - 1;
    eax = eax - 1;
    esp = esp + 200;
    ecx = ecx + 1;
    (restore)esi;
    ecx = ecx + 1;
    (restore)ebp;
    (restore)esi;
    (restore)ebp;
}

/*	Procedure: 0x000031D1 - 0x0000341E
 *	Argument size: 28
 *	Local size: 0
 *	Save regs size: 0
 */

L000031D1(A8, A10, A18, A1e, A20)
/* unknown */ void  A8;
/* unknown */ void  A10;
/* unknown */ void  A18;
/* unknown */ void  A1e;
/* unknown */ void  A20;
{
	/* unknown */ void  Vfffffeb4;
	/* unknown */ void  Vfffffeb5;
	/* unknown */ void  Vfffffeb6;
	/* unknown */ void  Vfffffebc;
	/* unknown */ void  Vfffffebe;
	/* unknown */ void  Vfffffec4;
	/* unknown */ void  Vfffffec5;
	/* unknown */ void  Vfffffec6;
	/* unknown */ void  Vfffffec8;
	/* unknown */ void  Vfffffec9;
	/* unknown */ void  Vfffffecc;
	/* unknown */ void  Vfffffecd;
	/* unknown */ void  Vfffffece;
	/* unknown */ void  Vfffffed4;
	/* unknown */ void  Vfffffed8;
	/* unknown */ void  Vffffffe8;
	/* unknown */ void  Vfffffff7;



    eax = eax - 1;
    esp = esp - 360;
    eax = eax - 1;
    eax = ( *L00005E22 - 1 ^ esp) - 1;
    Vffffffe8 = eax;
    if(*L00006534 != 0) {
        eax = -2;
        ecx = Vffffffe8 ^ esp;
        esp = esp + 360;
        return(L000017A1() - 1);
    }
    eax = eax - 1;
    ecx = *L00005E25;
    *L00006507 = 1;
    eax = *L00008175() - 1;
    if(eax == 0) {
        eax = eax - 1;
        ecx = 0x3f4d;
        eax = eax - 1;
        A18 = A18;
        eax = *L00008157() - 1;
        A18 = eax;
        eax = eax - 1;
        if(eax != 0) {
            eax = eax - 1;
            edx = 0x3f1c;
            eax = eax - 1;
            ecx = eax;
            eax = eax - 1;
            A8 = A8;
            eax = *L0000813b() - 1;
            A8 = eax;
            eax = eax - 1;
            if(eax != 0) {
                eax = eax - 1;
                edx = 0x3ee0;
                eax = eax - 1;
                ecx = A18;
                eax = eax - 1;
                A10 = A10;
                eax = *L00008117() - 1;
                A10 = eax;
                eax = eax - 1;
                if(eax != 0) {
                    eax = eax - 1;
                    edx = 0x3eac;
                    eax = eax - 1;
                    ecx = A18;
                    esp = esp - 1;
                    Vfffffff7 = esp;
                    eax = *L000080f3();
                    esp = esp - 1;
                    esp = eax;
                    eax = eax - 1;
                    if(eax != 0) {
                        eax = eax - 1;
                        eax = & Vfffffece - 1;
                        edx = 0x3e57;
                        ecx = ecx + 1;
                        ecx = 1;
                        A10 = A10 + 1;
                        ecx = -2147483646;
                        Vfffffeb6 = -2;
                        eax = *A8();
                        if(eax == 0) {
                            goto L000032ed;
                        }
                        eax = eax - 1;
                        ecx = A18;
                        *L00008133();
                    }
                    eax = 0;
                    goto L000033e7;
L000032ed:
                    eax = eax - 1;
                    ecx = Vfffffece;
                    eax = eax - 1;
                    A1e = A20;
                    eax = & Vfffffec6 - 1 - 1;
                    Vfffffebe = eax;
                    esp = esp - 1;
                    ecx = & Vfffffec9;
                    eax = Vfffffebe - 1;
                    edx = 0x3df1;
                    A20 = 0;
                    A10 = A10 + 1;
                    eax = -1;
                    Vfffffeb5 = 0;
                    eax = *A10();
                    if(eax == 0) {
                        ecx = Vfffffec5;
                        eax = 2147483647 - ecx;
                        if(eax < 13) {
                            goto L000033d4;
                        }
                        eax = ecx + 13;
                        if(eax >= 260) {
                            goto L000033d4;
                        }
                        eax = eax - 1;
                        ecx = Vfffffecd;
                        eax = eax - 1;
                        esp = esp - 1;
                        ecx = & Vfffffec8;
                        eax = & Vfffffec5 - 1;
                        Vfffffebc = eax;
                        eax = Vfffffebc - 1;
                        eax = & Vfffffed4 - 1;
                        edx = 0x3d9b;
                        A10 = A10 + 1;
                        Vfffffeb4 = -1;
                        eax = *A10() - 1;
                        A8 = eax;
                        ecx = Vfffffecc + 1;
                        eax = *esp() - 1;
                        ecx = A18;
                        *L00008096();
                        if(A8 != 0) {
                            goto L000033dd;
                        }
                        edx = Vfffffec4;
                        if(*(esp + edx - 2 + 64) != 92) {
                            *(esp + edx - 1 + 64) = 92;
                        } else {
                            edx = edx - 1;
                            Vfffffec4 = edx;
                        }
                        esp = esp - 1;
                        eax = *L00005C8D;
                        asm("Unknown opcode 0x0f");
                        (restore)ds;
                        esp = esp + 1;
                        *eax = *eax + al;
                        do {
                            edx = edx + 1;
                            eax = *(A20 + eax) & 255;
                            ecx = edx;
                            eax = eax - 1;
                            A20 = A20 + 1;
                            edx = edx + 1;
                            eax = eax - 1;
                            *(esp + ecx + 64) = al;
                        } while(A20 <= 11);
                        eax = eax - 1;
                        ecx = & Vfffffed8;
                        eax = *L00007fc7();
                    } else {
L000033d4:
                        eax = eax - 1;
                        ecx = A18;
                        *L0000803c();
L000033dd:
                        eax = 0;
                    }
                    eax = eax - 1;
L000033e7:
                    esp = esp - 1;
                    esp = *(esp + 352);
                }
                eax = eax - 1;
            }
            eax = eax - 1;
        }
        eax = eax - 1;
    }
    eax = eax - 1;
    eax = eax - 1;
    ecx = Vffffffe8 ^ esp;
    esp = esp + 360;
    return(L000017A1() - 1);
}

/* DEST BLOCK NOT FOUND: 0000341f -> 000017a1 */
/*	Procedure: 0x0000341F - 0x00003424
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000341F()
{



    goto ( *L0000808c);
}

/* DEST BLOCK NOT FOUND: 00003425 -> 000017a1 */
/*	Procedure: 0x00003425 - 0x0000342A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003425()
{



    goto ( *L00008186);
}

/* DEST BLOCK NOT FOUND: 0000342b -> 000017a1 */
/*	Procedure: 0x0000342B - 0x00003430
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000342B()
{



    goto ( *L00008090);
}

/* DEST BLOCK NOT FOUND: 00003431 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003437 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000343d -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003443 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003449 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000344f -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003455 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000345b -> 000017a1 */
/*	Procedure: 0x00003431 - 0x00003460
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003431()
{



    goto ( *L00008092);
    goto ( *L0000809c);
    goto ( *L00007fce);
    goto ( *L00007fc0);
    goto ( *L00007fb2);
    goto ( *L00007fa4);
    goto ( *L00007f96);
    goto ( *L00007f88);
}

/* DEST BLOCK NOT FOUND: 00003461 -> 000017a1 */
/*	Procedure: 0x00003461 - 0x00003466
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003461()
{



    goto ( *L00007f7a);
}

/* DEST BLOCK NOT FOUND: 00003467 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000346d -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003473 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003479 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000347f -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003485 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000348b -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003491 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 00003497 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 0000349d -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034a3 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034a9 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034af -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034b5 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034bb -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034c1 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034c7 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034cd -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034d3 -> 000017a1 */
/* DEST BLOCK NOT FOUND: 000034d9 -> 000017a1 */
/*	Procedure: 0x00003467 - 0x000034DE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003467()
{



    goto ( *L00007f6c);
    goto ( *L00007f5e);
    goto ( *L00007f50);
    goto ( *L00007f42);
    goto ( *L00007f34);
    goto ( *L00007f26);
    goto ( *L00007f18);
    goto ( *L00007f0a);
    goto ( *L00007efc);
    goto ( *L00007eee);
    goto ( *L00007ee0);
    goto ( *L00007ed2);
    goto ( *L00007ec4);
    goto ( *L00007eb6);
    goto ( *L00007ea8);
    goto ( *L00007e9a);
    goto ( *L00007e8c);
    goto ( *L00007e7e);
    goto ( *L00007e70);
    goto ( *L00007f3a);
}

/*	Procedure: 0x00004C91 - 0x00004CBB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004C91()
{



    (save)ebp;
    eax = eax + 1 - 1;
    esp = esp - 48;
    eax = eax - 1;
    ebp = edx;
    *(ebp + 80) = ecx;
    eax = eax - 1 - 1;
    eax = *( *( *(ebp + 80) - 1));
    *(ebp + 72) = eax;
    eax = *(ebp + 72) - 1;
    edx = *(ebp + 80);
    ecx = *(ebp + 72);
    esp = esp + 48;
    (restore)ebp;
    return(L00002BE5() - 1);
}

/*	Procedure: 0x00004CBC - 0x00004CD9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004CBC()
{



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
    ecx = 8;
    esp = esp + 32;
    (restore)ebp;
    return(L00003425() - 1);
}

/*	Procedure: 0x00004CDA - 0x00004D1C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004CDA()
{



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
    *(ebp + 56) = ecx;
    eax = eax - 1 - 1;
    *(ebp + 64) = *( *( *(ebp + 56) - 1));
    *(ebp + 72) = *(ebp + 64) == -1073741819 ? 1 : 0;
    eax = *(ebp + 72) - 1;
    esp = esp + 32;
    (restore)ebp;
}

/*	Procedure: 0x00004D1D - 0x00005D3F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004D1D()
{



}

/*	Procedure: 0x00005D40 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005D40()
{



}

/* address  size  */
/* 0x00001b51       0 */ /* unknown */ void 	__entry_point__;
/* 0x0000b349       0 */ /* unknown */ void 	__imp__VirtualQuery;
/* 0x0000b4a1       0 */ /* unknown */ void 	__imp___initterm_e;
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
