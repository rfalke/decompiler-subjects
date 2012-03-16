/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x00401082
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401000(A4)
/* unknown */ void  A4;
{



    eax = A4 + -2;
    if(eax <= 5) {
        goto *(eax * 4 + 0x401084)[L00401013, L00401023, L00401033, L00401043, L00401053, L00401063, ]goto ( *(eax * 4 + 0x401084));
        L004010A0("Two!\n");
        return(0);
        L004010A0("Three!\n");
        return(0);
        L004010A0("Four!\n");
        return(0);
        L004010A0("Five!\n");
        return(0);
        L004010A0("Six!\n");
        return(0);
        L004010A0("Seven!\n");
        return(0);
    }
    L004010A0("Other!\n");
    return(0);
}

/*	Procedure: 0x00401083 - 0x0040109F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401083()
{



}

/*	Procedure: 0x004010A0 - 0x004010DC
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 8
 */

L004010A0(Ac, A10)
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    esi = L00401230(0x406098);
    edi = L00401330(0x406098, Ac, & A10);
    L004012D0(esi, 0x406098);
    return(edi);
}

/*	Procedure: 0x004010DD - 0x004010DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004010DD()
{



}

stack space not deallocated on return
/*	Procedure: 0x004010E0 - 0x004011FC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    (save)ebp;
    ebp = esp;
    (save)-1;
    (save)4214784;
    (save)0x402cb8;
    (save) *%fs:0x0];
    *%fs:0x0] = esp;
    esp = esp + -16;
    (save)ebx;
    (save)esi;
    (save)edi;
    *(ebp - 24) = esp;
    edx = *__imp__GetVersion() & 255;
    *L0040892C = edx;
    ecx = eax & 255;
    *L00408928 = ecx;
    *L00408924 = ( *L00408928 << 8) + *L0040892C;
    *L00408920 = eax >> 16;
    if(L00402B80() == 0) {
        L00401200(28);
    }
    *(ebp - 4) = 0;
    L00402980();
    L00402970();
    *L00409D04 = *__imp__GetCommandLineA();
    eax = L00402540();
    *L004088F8 = eax;
    if(*L004088F8 == 0 || *L00409D04 == 0) {
        L00401F00(-1);
    }
    L00402290();
    L004021A0();
    L00401ED0();
    eax = *L0040893C;
    *L00408940 = eax;
    (save) *L00408940;
    (save) *L00408934;
    eax = L00401000( *L00408930);
    *(ebp - 28) = eax;
    (save) *(ebp - 28);
    eax = L00401F00();
    goto L004011e2;
    eax = *(ebp - 20);
    ecx = *( *eax);
    *(ebp - 32) = ecx;
    return(L00402010( *(ebp - 32), eax));
    esp = *(ebp - 24);
    eax = L00401F20( *(ebp - 32));
L004011e2:
    *(ebp - 4) = -1;
    *%fs:0x0] = *(ebp - 16);
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    esp = ebp;
    (restore)ebp;
}

/*	Procedure: 0x004011FD - 0x004011FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004011FD()
{



}

/*	Procedure: 0x00401200 - 0x00401229
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401200(A4)
/* unknown */ void  A4;
{



    if(*L00408900 != 2) {
        L00402D90();
    }
    L00402DD0(A4);
    return(*L00406068(255));
}

/*	Procedure: 0x0040122A - 0x0040122F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040122A()
{



}

/*	Procedure: 0x00401230 - 0x004012CE
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00401230(A8)
/* unknown */ void  A8;
{



    (save)edi;
    if(L00403060( *(A8 + 16)) != 0) {
        if(A8 == 0x406098) {
            edi = 0;
            goto L00401263;
        }
        if(A8 == 0x4060b8) {
            edi = 1;
L00401263:
            *L00408910 = *L00408910 + 1;
            if(!( *(A8 + 12) & 268)) {
                if(*(edi * 4 + 0x408908) != 0) {
                    goto L0040129d;
                }
                eax = L00402FB0(4096);
                *(edi * 4 + 0x408908) = eax;
                if(*(edi * 4 + 0x408908) != 0) {
L0040129d:
                    eax = *(edi * 4 + 0x408908);
                    *(A8 + 24) = 4096;
                    *(A8 + 8) = eax;
                    *A8 = *(A8 + 8);
                    *(A8 + 4) = 4096;
                    *(A8 + 12) = *(A8 + 12) | 4354;
                    (restore)edi;
                    return(1);
                }
            }
        }
    }
    (restore)edi;
    return(0);
}

/*	Procedure: 0x004012CF - 0x004012CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004012CF()
{



}

/*	Procedure: 0x004012D0 - 0x00401323
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L004012D0(A4, A8)
/* unknown */ void  A4;
/* unknown */ void  A8;
{



    (save)esi;
    if(A4 != 0) {
        esi = A8;
        if(*(esi + 12) & 16) {
            goto L00401322;
        }
        L004030E0(esi);
        ah = *(esi + 12) & 238;
        *(esi + 24) = 0;
        *(esi + 12) = eax;
        *esi = 0;
        *(esi + 8) = 0;
        (restore)esi;
        return;
    }
    eax = A8;
    if(!( *(eax + 12) & 16)) {
        eax = L004030E0(eax);
    }
L00401322:
    (restore)esi;
}

/*	Procedure: 0x00401324 - 0x0040132F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401324()
{



}

/*	Procedure: 0x00401330 - 0x00401CBF
 *	Argument size: 618
 *	Local size: 588
 *	Save regs size: 16
 */

L00401330(A25e, A260, A264, A268, A26c, A270, A274, A278, A27e, A27f, A280, A284, A288, A28c, A290, A294, A298, A29c, A2a0, A2a4, A2a8, A2ac, A2b4, A2b8, A2b9, A497, A49c, A4b7, A4bc, A4c0, A4c4)
/* unknown */ void  A25e;
/* unknown */ void  A260;
/* unknown */ void  A264;
/* unknown */ void  A268;
/* unknown */ void  A26c;
/* unknown */ void  A270;
/* unknown */ void  A274;
/* unknown */ void  A278;
/* unknown */ void  A27e;
/* unknown */ void  A27f;
/* unknown */ void  A280;
/* unknown */ void  A284;
/* unknown */ void  A288;
/* unknown */ void  A28c;
/* unknown */ void  A290;
/* unknown */ void  A294;
/* unknown */ void  A298;
/* unknown */ void  A29c;
/* unknown */ void  A2a0;
/* unknown */ void  A2a4;
/* unknown */ void  A2a8;
/* unknown */ void  A2ac;
/* unknown */ void  A2b4;
/* unknown */ void  A2b8;
/* unknown */ void  A2b9;
/* unknown */ void  A497;
/* unknown */ void  A49c;
/* unknown */ void  A4b7;
/* unknown */ void  A4bc;
/* unknown */ void  A4c0;
/* unknown */ void  A4c4;
{
	/* unknown */ void  ebx;
	/* unknown */ void  ebp;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  V1c;
	/* unknown */ void  V28;
	/* unknown */ void  V3c;
	/* unknown */ void  V40;
	/* unknown */ void  V24c;
	/* unknown */ void  V250;
	/* unknown */ void  V254;
	/* unknown */ void  V258;



    edi = A264;
    ecx = 0;
    ebp = 0;
    V1c = 0;
    bl = *edi;
    bl :: 0;
    V40 = bl;
    if(!(A264 = edi + 1)) {
        esi = V28;
        goto L0040136d;
L00401365:
        esi = A284;
        ecx = A298;
L0040136d:
        if(V1c >= 0) {
            if(bl >= 32) {
                if(bl > 120) {
                    goto L00401393;
                }
                eax = bl;
                eax = *(eax + 4214768) & 15;
            } else {
L00401393:
                eax = 0;
            }
            eax = *(ecx + eax * 8 + 4214800) >> 4;
            V3c = eax;
            if(eax <= 7) {
                goto *(eax * 4 + 0x401bac)[L00401530, L004013b4, L004013d9, L00401442, L0040148c, L00401495, L004014da, L004015aa, ]goto ( *(eax * 4 + 0x401bac));
                A2a0 = edx;
                A290 = edx;
                A284 = edx;
                A280 = edx;
                A26c = edx;
                A274 = -1;
                A288 = edx;
                goto L00401b6a;
                eax = bl + -32;
                if(eax <= 16) {
                    goto *(( *(eax + 0x401be4) & 255) * 4 + 0x401bcc)[L00401415, L00401424, L00401406, L004013f7, L00401433, L00401b6a, ]goto ( *(( *(eax + 0x401be4) & 255) * 4 + 0x401bcc));
                    A26c = A26c | 4;
                    goto L00401b6a;
                    A26c = A26c | 1;
                    goto L00401b6a;
                    A26c = A26c | 2;
                    goto L00401b6a;
                    A26c = A26c | 128;
                    goto L00401b6a;
                    A26c = A26c | 8;
                    goto L00401b6a;
                    if(bl != 42) {
                        goto L00401479;
                    }
                    eax = L00401d90( & A4c4);
                    A284 = eax;
                    if(eax < 0) {
                        A26c = A26c | 4;
                        A284 = ~eax;
                        goto L00401b6a;
                        ecx = bl;
                        edx = ecx + (esi + esi * 4) * 2 - 48;
                        A284 = edx;
                        goto L00401b6a;
                        A274 = edx;
                        goto L00401b6a;
                        if(bl != 42) {
                            goto L004014c3;
                        }
                        eax = L00401d90( & A4c4);
                        A274 = eax;
                        if(A274 < 0) {
                            A274 = -1;
                            goto L00401b6a;
                            edx = bl;
                            A274 = edx + (A274 + A274 * 4) * 2 - 48;
                            goto L00401b6a;
                            eax = bl + -73;
                            if(eax <= 46) {
                                goto ( *(( *(eax + 0x401c0c) & 255) * 4 + 0x401bf8));
                                A26c = A26c | 16;
                                goto L00401b6a;
                                if(*edi != 54 || *(edi + 1) != 52) {
                                    goto L0040152c;
                                }
                                edi = edi + 2;
                                A4c0 = edi;
                                A26c = A26c | 128;
                                goto L00401b6a;
                                A298 = edx;
                                A288 = edx;
                                if(*( *L00406540 + (A29c & 255) * 2 + 1) & 128) {
                                    goto L0040156d;
                                }
                                L00401CC0(bl, A4bc, & A278);
                                bl = *edi;
                                A4c0 = edi + 1;
                                L00401CC0(bl, A4bc, & A278);
                                goto L00401b6a;
                                A26c = A26c | 32;
                                goto L00401b6a;
                                A26c = A26c | 8;
                                goto L00401b6a;
                                eax = bl + -67;
                                if(eax > 53) {
                                    goto L00401a50;
                                }
                                goto ( *(( *(eax + 0x401c80) & 255) * 4 + 0x401c3c));
                                eax = A26c;
                                if(eax & 2096) {
                                    goto L004015da;
                                }
                                A26c = ah | 8;
                                if(A26c & 2064) {
                                    goto L0040161d;
                                }
                                if(L004031e0( & A2b8, L00401dd0( & A4c4)) >= 0) {
                                    goto L00401636;
                                }
                                A290 = 1;
                                A270 = & A2b8;
                                goto L00401a50;
                                L00401d90( & A4c4);
                                A2b8 = al;
                                ebp = 1;
                                A270 = & A2b8;
                                goto L00401a50;
                                eax = L00401d90( & A4c4);
                                if(eax == 0) {
                                    goto L00401691;
                                }
                                ecx = *(eax + 4);
                                if(ecx == 0) {
                                    goto L00401691;
                                }
                                if(A26c & 8) {
                                    goto L0040167d;
                                }
                                A270 = ecx;
                                A288 = 1;
                                ebp = *eax >> 1;
                                goto L00401a50;
                                ebp = *eax;
                                A288 = 0;
                                A270 = ecx;
                                goto L00401a50;
                                ecx = ecx | -1;
                                eax = 0;
                                A270 = *L00406070;
                                asm("repne scasb");
                                ebp = !ecx - 1;
                                goto L00401a50;
                                eax = A26c;
                                if(eax & 2096) {
                                    goto L004016be;
                                }
                                A26c = ah | 8;
                                eax = A274;
                                esi = 2147483647;
                                if(eax == -1) {
                                    goto L004016ce;
                                }
                                esi = eax;
                                ecx = L00401d90( & A4c4);
                                A270 = ecx;
                                if(A26c & 2064) {
                                    goto L00401729;
                                }
                                if(ecx != 0) {
                                    goto L004016fd;
                                }
                                ecx = *L00406074;
                                A270 = ecx;
                                edx = esi;
                                esi = esi - 1;
                                A288 = 1;
                                eax = ecx;
                                if(edx == 0) {
                                    goto L0040171e;
                                }
L0040170e:
                                if(*eax == 0) {
                                    goto L0040171e;
                                }
                                eax = eax + 2;
                                edx = esi;
                                esi = esi - 1;
                                if(edx != 0) {
                                    goto L0040170e;
                                }
                                ebp = eax - ecx >> 1;
                                goto L00401a50;
                                if(ecx != 0) {
                                    goto L00401737;
                                }
                                ecx = *L00406070;
                                A270 = ecx;
                                edx = esi;
                                esi = esi - 1;
                                eax = ecx;
                                if(edx == 0) {
                                    goto L0040174d;
                                }
L00401740:
                                if(*eax == 0) {
                                    goto L0040174d;
                                }
                                eax = eax + 1;
                                edx = esi;
                                esi = esi - 1;
                                if(edx != 0) {
                                    goto L00401740;
                                }
                                ebp = eax - ecx;
                                goto L00401a50;
                                eax = L00401d90( & A4c4);
                                if(A26c & 32) {
                                    goto L00401784;
                                }
                                A290 = 1;
                                *eax = A278;
                                goto L00401a50;
                                A290 = 1;
                                *eax = A278;
                                goto L00401a50;
                                A2a0 = 1;
                                bl = bl + 32;
                                A270 = & A2b8;
                                A274 :: 0;
                                if(A26c = A26c | 64) {
                                    goto L004017c7;
                                }
                                A274 = 6;
                                goto L004017d6;
                                != ? 0x4017d6 : ;
                                if(bl != 103) {
                                    goto L004017d6;
                                }
                                A274 = 1;
                                edi = A274;
                                eax = A4c4 + 8;
                                A4c4 = eax;
                                A2a8 = *(eax - 8);
                                edx = *(eax - 4);
                                A2ac = edx;
                                ecx = bl;
                                *L00406528( & A2a8, & A2b8, ecx, edi, A2a0);
                                if((esi = A26c & 128) || edi != 0) {
                                    goto L00401834;
                                }
                                *L00406534( & A2b8);
                                if(bl != 103 || esi != 0) {
                                    goto L0040184b;
                                }
                                *L0040652c( & A2b8);
                                if(A2b8 != 45) {
                                    goto L00401865;
                                }
                                A26c = A26c | 1;
                                A270 = & A2b9;
                                edi = A270;
                                ecx = ecx | -1;
                                eax = 0;
                                asm("repne scasb");
                                ebp = !ecx - 1;
                                goto L00401a50;
                                A28c = 10;
                                A26c = A26c | 64;
                                goto L004018f7;
                                A28c = 10;
                                goto L004018f7;
                                A274 = 8;
                                A294 = 7;
                                goto L004018b2;
                                A294 = 39;
                                A28c = 16;
                                if(A26c & 128) {
                                    goto L004018f7;
                                }
                                A27e = 48;
                                A280 = 2;
                                A27f = A294 + 81;
                                goto L004018f7;
                                A28c = 8;
                                if(A26c & 128) {
                                    goto L004018f7;
                                }
                                A26c = A26c | 2;
                                ebx = A26c;
                                if(bh & 128) {
                                    goto L00401912;
                                }
                                L00401db0( & A4c4);
                                goto L00401974;
                                if(bl & 32) {
                                    goto L0040194a;
                                }
                                if(bl & 64) {
                                    goto L00401932;
                                }
                                L00401d90( & A4c4);
                                eax = ax;
                                asm("cdq");
                                goto L00401974;
                                eax = L00401d90( & A4c4) & 65535;
                                asm("cdq");
                                goto L00401974;
                                if(bl & 64) {
                                    goto L00401962;
                                }
                                L00401d90( & A4c4);
                                asm("cdq");
                                goto L00401974;
                                eax = L00401d90( & A4c4);
                                edx = 0;
                                if(bl & 64 || 0 > 0) {
                                    goto L00401997;
                                }
                                < ? L00401983 : ;
                                if(eax >= 0) {
                                    goto L00401997;
                                }
                                eax = ~eax;
                                asm("adc edx,+0x0");
                                esi = eax;
                                edx = ~edx;
                                bh = bh | 1;
                                edi = edx;
                                A26c = ebx;
                                goto L0040199b;
                                esi = eax;
                                edi = edx;
                                if(bh & 128) {
                                    goto L004019a3;
                                }
                                edi = 0;
                                if(A274 >= 0) {
                                    goto L004019b2;
                                }
                                ecx = 1;
                                goto L004019b9;
                                A26c = ebx & -9;
                                if(edx = esi | edi) {
                                    goto L004019c7;
                                }
                                A280 = 0;
                                A270 = & A4b7;
                                edx = ecx;
                                edx :: 0;
                                if(!(A274 = ecx - 1) && (ecx = esi | edi)) {
                                    goto L00401a27;
                                }
                                eax = A28c;
                                asm("cdq");
                                ebp = eax;
                                (save)edx;
                                (save)ebp;
                                (save)edi;
                                (save)esi;
                                A2b4 = edx;
                                (save)A2a4;
                                (save)ebp;
                                (save)edi;
                                (save)esi;
                                ebx = L004032d0() + 48;
                                esi = L00403260();
                                edi = edx;
                                if(ebx <= 57) {
                                    goto L00401a16;
                                }
                                ebx = ebx + A274;
                                eax = V250;
                                ecx = V254;
                                *eax = bl;
                                eax = eax - 1;
                                V250 = eax;
                                goto L004019d2;
                                ebp = & A497 - eax;
                                eax = eax + 1;
                                V250 = eax;
                                if(V24c & 2 || *eax == 48 && ebp != 0) {
                                    goto L00401a50;
                                }
                                eax = eax - 1;
                                ebp = ebp + 1;
                                V250 = eax;
                                *eax = 48;
                                if(A270 == 0) {
                                    ebx = V24c;
                                    if(bl & 64) {
                                        goto L00401a8f;
                                    }
                                    if(bh & 1) {
                                        goto L00401a71;
                                    }
                                    A25e = 45;
                                    goto L00401a87;
                                    if(bl & 1) {
                                        goto L00401a7d;
                                    }
                                    A25e = 43;
                                    goto L00401a87;
                                    if(bl & 2) {
                                        goto L00401a8f;
                                    }
                                    A25e = 32;
                                    A260 = 1;
                                    edi = A264 - A260 - ebp;
                                    if(bl & 12) {
                                        goto L00401aba;
                                    }
                                    L00401d10(32, edi, A49c, & V258);
                                    goto L00401ac1;
                                    esi = A49c;
                                    L00401d50( & A25e, A260, esi, & V258);
                                    if(bl & 8 || bl & 4) {
                                        goto L00401af4;
                                    }
                                    L00401d10(48, edi, esi, & V258);
                                    eax = A268;
                                    if(eax == 0 || ebp <= 0) {
                                        goto L00401b96;
                                    }
                                    esi = V250;
                                    ebx = ebp - 1;
                                    ax = *esi;
                                    esi = esi + 2;
                                    eax = L004031e0( & A284, eax);
                                    if(eax <= 0) {
                                        goto L00401b49;
                                    }
                                    L00401d50( & A284, eax, A49c, & V258);
                                    ecx = ebx;
                                    ebx = ebx - 1;
                                    if(ecx != 0) {
                                        goto L00401b0f;
                                    }
L00401b4d:
                                    if(!(V24c & 4)) {
                                        L00401d10(32, edi, A49c, & V258);
                                    }
                                }
                            }
                        }
                    }
                }
            }
L00401b6a:
            edi = A264;
            bl = *edi;
            bl :: 0;
            V40 = bl;
            if(A264 = edi + 1) {
                goto L00401365;
            }
        }
    }
    return(V1c);
    L00401d50(A270, ebp, esi, & A278);
    goto L00401b4d;
    *L05050105 = *L05050105 + al;
    al = eax + 84215045 + *L04050503;
    (restore)es;
    asm("adc eax,0x158b0040");
    al = eax + 1 + bh;
    asm("adc al,0x40");
    *(edx + 1778401301) = *(edx + 1778401301) + bl;
    asm("sbb eax,[eax+0x0]");
    *(esp + eax) = *(esp + eax) + al;
    *(esp + al + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4) = *(esp + al + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4) + al + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4;
    edx = edx + *(al + 2 + 4 + 4 + 4 + 4 + 4 + 0x4015c8);
    asm("xchg eax,edi");
    (restore)ss;
    *(edi + -1409269737) = *(edi + -1409269737) + dl;
    (save)ss;
    *(eax + 1 + 1 + 1124089880) = *(eax + 1 + 1 + 1124089880) + eax + 1 + 1;
    (save)ss;
    eax = eax + 1;
    dl = dl + bl;
    asm("adc eax,0x187a0040");
    *(edx + 2046836759) = *(edx + 2046836759) + eax + 1;
    asm("sbb [eax+0x0],al");
    ss = esi;
    ah = eax + 1 + bl;
    asm("sbb [eax+0x0],al");
    asm("cwde");
    asm("sbb [eax+0x0],al");
    esi = -1912586218;
    asm("sbb [eax+0x0],al");
    *edi = al;
    edi = edi + 1;
    asm("sbb [eax+0x0],al");
    (save)eax;
    asm("sbb al,[eax+0x0]");
    *eax = *eax + dl;
    *eax = *eax + edx;
    dl = dl + *eax;
    asm("adc [eax],dl");
    asm("adc [eax],dl");
    asm("adc [eax],dl");
    asm("adc [eax],dl");
    asm("adc [eax],dl");
    edx = edx + *eax;
    asm("adc [eax],dl");
    asm("adc [eax+edx],al");
    eax = eax + 269488144;
    asm("adc [eax],dl");
    asm("adc [eax],dl");
    es = es;
    *eax = *eax | cl;
    *eax = *eax | dl;
    *eax = *eax | edx;
    asm("adc [eax],dl");
    asm("adc [edx],cl");
    ecx = ecx | *(eax + edx);
    asm("adc [0x10100e10],cl");
    asm("Unknown opcode 0x0f");
}

/*	Procedure: 0x00401CC0 - 0x00401D01
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00401CC0(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    if(!( *(A8 + 4) = *(A8 + 4) - 1)) {
        edx = *A8;
        *edx = A4;
        edx = *A8;
        Ac = Ac & 255;
        *A8 = edx + 1;
    } else {
        Ac = L00403350(A4, A8);
    }
    if(Ac == -1) {
        *Ac = Ac;
        return;
    }
    *Ac = *Ac + 1;
}

/*	Procedure: 0x00401D02 - 0x00401D48
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 8
 */

L00401D02(Ac, A10, A14, A18)
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
{
	/* unknown */ void  ebp;



    ebp = A10;
    (save)A18;
    eax = ebp;
    ebp = ebp - 1;
    (save)A14;
    if(eax > 0) {
        do {
            L00401CC0(Ac, A14, A18);
            eax = *A18;
            if(eax == -1) {
                break;
            }
            ecx = ebp;
            ebp = ebp - 1;
        } while(ecx > 0);
    }
    (restore)A14;
    (restore)A18;
}

/*	Procedure: 0x00401D49 - 0x00401D8C
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 8
 */

L00401D49(Ac, A10, A14, A18)
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
{
	/* unknown */ void  ebp;



    ebp = A10;
    (save)esi;
    eax = ebp;
    ebp = ebp - 1;
    (save)A18;
    if(eax > 0) {
        esi = Ac;
        do {
            esi = esi + 1;
            L00401CC0( *esi, A14, A18);
            eax = *A18;
            if(eax == -1) {
                break;
            }
            ecx = ebp;
            ebp = ebp - 1;
        } while(ecx > 0);
    }
    (restore)A18;
    (restore)esi;
}

/*	Procedure: 0x00401D8D - 0x00401DA0
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401D8D(A4)
/* unknown */ void  A4;
{



    ecx = *A4 + 4;
    *A4 = ecx;
    return(*( *A4 - 4));
}

/*	Procedure: 0x00401DA1 - 0x00401DC1
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401DA1(A4)
/* unknown */ void  A4;
{



    eax = A4;
    ecx = *eax + 8;
    *eax = ecx;
    eax = *(ecx - 8);
    edx = *(ecx - 4);
}

/*	Procedure: 0x00401DC2 - 0x00401DE1
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401DC2(A4)
/* unknown */ void  A4;
{



    eax = A4;
    ecx = *eax + 4;
    *eax = ecx;
    eax = *eax;
    return(*(eax - 4));
}

/*	Procedure: 0x00401DE2 - 0x00401EA8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401DE2()
{



    eax = *L00409D00;
    (save)esi;
    if(eax == 0) {
        eax = 512;
    } else {
        if(eax >= 20) {
            goto L00401e10;
        }
        eax = 20;
    }
    *L00409D00 = eax;
L00401e10:
    eax = L00403480(eax, 4);
    *L00408CF0 = eax;
    if(eax == 0) {
        *L00409D00 = 20;
        eax = L00403480(20, 4);
        *L00408CF0 = eax;
        if(eax == 0) {
            L00401200(26);
            eax = *L00408CF0;
        }
    }
    edx = 0;
    for(ecx = 0x406078; 1; eax = *L00408CF0) {
        *(eax + edx) = ecx;
        ecx = ecx + 32;
        edx = edx + 4;
        if(ecx >= 0x4062f8) {
            break;
        }
    }
    eax = 0;
    edx = 0x406088;
    do {
        ecx = eax;
        esi = eax;
        ecx = ecx >> 5;
        esi = esi & 31;
        ecx = *( *(ecx * 4 + 4230112) + esi * 8);
        if(ecx == -1 || ecx == 0) {
            *edx = -1;
        }
        edx = edx + 32;
        eax = eax + 1;
    } while(edx < 0x4060e8);
    (restore)esi;
}

/* DEST BLOCK NOT FOUND: 00401ebe -> 00403520 */
/*	Procedure: 0x00401EA9 - 0x00401ECF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401EA9()
{



    eax = L00403150();
    al = *L00408954;
    if(al != 0) {
        goto L00403520;
    }
}

/*	Procedure: 0x00401ED0 - 0x00401EFF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401ED0()
{



    eax = *L00408CEC;
    if(eax != 0) {
        *eax();
    }
    L00401FF0(0x406008, 0x406010);
    return(L00401FF0(0x406000, 0x406004));
}

/*	Procedure: 0x00401F00 - 0x00401F1F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401F00(A4)
/* unknown */ void  A4;
{



    return(L00401F40(A4, 0, 0));
}

/*	Procedure: 0x00401F20 - 0x00401F3F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401F20(A4)
/* unknown */ void  A4;
{



    return(L00401F40(A4, 1, 0));
}

/*	Procedure: 0x00401F40 - 0x00401FEF
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00401F40(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    (save)ebx;
    (save)A4;
    (save)esi;
    if(*L0040895C == 1) {
        (save)A4;
        (save) *__imp__GetCurrentProcess();
        *__imp__TerminateProcess();
    }
    *L00408958 = 1;
    *L00408954 = Ac;
    if(A8 == 0) {
        ecx = *L00408CE8;
        if(ecx != 0) {
            esi = *L00408CE4 - 4;
            do {
                eax = *esi;
                if(eax != 0) {
                    *eax();
                    ecx = *L00408CE8;
                }
                esi = esi - 4;
            } while(esi >= ecx);
        }
        L00401FF0(0x406014, 0x40601c);
    }
    eax = L00401FF0(0x406020, 0x406024);
    if(ebx == 0) {
        *L0040895C = 1;
        eax = *__imp__ExitProcess(A4);
    }
    (restore)esi;
    (restore)A4;
    (restore)ebx;
}

/*	Procedure: 0x00401FF0 - 0x0040200F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 4
 */

L00401FF0(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  esi;



    esi = A8;
    (save)Ac;
    do {
        eax = *esi;
        if(eax != 0) {
            eax = *eax();
        }
        esi = esi + 4;
    } while(esi < Ac);
    (restore)Ac;
}

stack space not deallocated on return
/*	Procedure: 0x00402010 - 0x0040214F
 *	Argument size: 20
 *	Local size: 0
 *	Save regs size: 0
 */

L00402010(A4, A14)
/* unknown */ void  A4;
/* unknown */ void  A14;
{



    (save)ebx;
    (save)ebp;
    (save)esi;
    eax = L00402150(A4);
    if(eax != 0) {
        ebx = *(eax + 8);
        if(ebx != 0) {
            if(ebx == 5) {
                *(eax + 8) = 0;
                (restore)esi;
                (restore)ebp;
                (restore)ebx;
                return(1);
            }
            if(ebx == 1) {
                eax = eax | -1;
                (restore)esi;
                (restore)ebp;
                (restore)ebx;
                return;
            }
            ebp = *L00408960;
            *L00408960 = A14;
            ecx = *(eax + 4);
            if(ecx == 8) {
                esi = *L00406370;
                edx = *L00406374 + esi;
                if(esi < edx) {
                    ecx = esi + esi * 2;
                    edx = edx - esi;
                    ecx = ecx * 4 + 0x406300;
                    do {
                        *ecx = 0;
                        ecx = ecx + 12;
                    } while(edx = edx - 1);
                }
                eax = *eax;
                ecx = *L0040637C;
                esi = ecx;
                if(eax == -1073741682) {
                    ecx = 131;
                } else {
                    if(eax == -1073741680) {
                        ecx = 129;
                    } else {
                        if(eax == -1073741679) {
                            ecx = 132;
                        } else {
                            if(eax == -1073741677) {
                                ecx = 133;
                            } else {
                                if(eax == -1073741683) {
                                    ecx = 130;
                                } else {
                                    if(eax == -1073741681) {
                                        ecx = 134;
                                    } else {
                                        if(eax != -1073741678) {
                                            goto L0040210a;
                                        }
                                        ecx = 138;
                                    }
                                }
                            }
                        }
                    }
                }
                *L0040637C = ecx;
L0040210a:
                *L0040637C = esi;
                *L00408960 = ebp;
                eax = *ebx(8, ecx) | -1;
                (restore)esi;
                (restore)ebp;
                (restore)ebx;
                return;
            }
            *(eax + 8) = 0;
            *L00408960 = ebp;
            eax = *ebx(ecx) | -1;
            (restore)esi;
            (restore)ebp;
            (restore)ebx;
            return;
        }
    }
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return(*__imp__UnhandledExceptionFilter(A14));
}

/*	Procedure: 0x00402150 - 0x0040219F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00402150(A4)
/* unknown */ void  A4;
{



    (save)esi;
    esi = *L00406378;
    eax = 0x4062f8;
    if(*L004062F8 != A4) {
        ecx = (esi + esi * 2) * 4 + 0x4062f8;
        do {
            eax = eax + 12;
            if(eax >= ecx) {
                break;
            }
        } while(*eax != A4);
    }
    if(eax >= (esi + esi * 2) * 4 + 0x4062f8 || *eax != A4) {
        eax = 0;
    }
    (restore)esi;
}

/*	Procedure: 0x004021A0 - 0x0040228F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L004021A0()
{
	/* unknown */ void  V0;
	/* unknown */ void  ecx;



    edx = *L004088F8;
    (save)ebx;
    (save)ebp;
    (save)esi;
    al = *edx;
    esi = 0;
    (save)edi;
    do {
        if(al != 61) {
            esi = esi + 1;
        }
        edi = edx;
        ecx = ecx | -1;
        eax = 0;
        asm("repne scasb");
        ecx = !ecx - 1;
        al = *(edx + ecx + 1);
        edx = edx + ecx + 1;
    } while(al != 0);
    esi = L00402FB0(esi * 4 + 4);
    V0 = esi;
    *L0040893C = esi;
    if(esi == 0) {
        L00401200(9);
    }
    ebp = *L004088F8;
    dl = *ebp;
    do {
        edi = ebp;
        ecx = ecx | -1;
        eax = 0;
        asm("repne scasb");
        ecx = !ecx - 1;
        ebx = ecx + 1;
        if(dl != 61) {
            eax = L00402FB0(ebx);
            *esi = eax;
            if(*esi == 0) {
                L00401200(9);
            }
            edi = ebp;
            ecx = ecx | -1;
            eax = 0;
            asm("repne scasb");
            eax = V0;
            ecx = !ecx;
            edi = edi - ecx;
            edx = ecx;
            esi = edi;
            edi = *eax;
            ecx = ecx >> 2;
            asm("rep movsd");
            ecx = edx & 3;
            eax = eax + 4;
            asm("rep movsb");
            V0 = eax;
            esi = eax;
        }
        dl = *(ebp + ebx);
        ebp = ebp + ebx;
    } while(dl != 0);
    *L004088F8 = 0;
    *esi = 0;
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return(L00403590( *L004088F8));
}

stack space not deallocated on return
/*	Procedure: 0x00402290 - 0x0040232F
 *	Argument size: 28
 *	Local size: 8
 *	Save regs size: 4
 */

L00402290(A14, A18, A28, A2c)
/* unknown */ void  A14;
/* unknown */ void  A18;
/* unknown */ void  A28;
/* unknown */ void  A2c;
{
	/* unknown */ void  esi;



    (save)edi;
    (save)260;
    (save)0x408968;
    (save)0;
    *__imp__GetModuleFileNameA();
    edi = *L00409D04;
    *L0040894C = 0x408968;
    if(*edi == 0) {
        edi = 0x408968;
    }
    L00402330(edi, 0, 0, & A14, & A18);
    esi = L00402FB0(A2c + A28 * 4);
    if(esi == 0) {
        L00401200(8);
    }
    L00402330(edi, esi, esi + A14 * 4, & A18, & A18);
    eax = A28 - 1;
    *L00408934 = esi;
    (restore)edi;
    *L00408930 = eax;
    return(*L00408930);
}

/*	Procedure: 0x00402330 - 0x0040253F
 *	Argument size: 20
 *	Local size: 0
 *	Save regs size: 0
 */

L00402330(A4, A8, Ac, A10, A14)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
{



    (save)ebx;
    (save)ebp;
    ebp = A8;
    (save)esi;
    esi = Ac;
    (save)edi;
    edi = A14;
    *edi = 0;
    *A10 = 1;
    eax = A4;
    ebx = 4;
    if(ebp != 0) {
        *ebp = esi;
        ebp = ebp + 4;
        A8 = ebp;
    }
    if(*eax == 34) {
        cl = *(eax + 1);
        eax = eax + 1;
        do {
            if(cl == 0) {
                break;
            }
            ecx = ecx & 255;
            if(!( *(ecx + 4229753) & bl)) {
                esi :: 0;
                if(!( *edi = *edi + 1)) {
                    *esi = *eax;
                    esi = esi + 1;
                    eax = eax + 1;
                }
            }
            esi :: 0;
            if(!( *edi = *edi + 1)) {
                *esi = *eax;
                esi = esi + 1;
            }
            cl = *(eax + 1);
            eax = eax + 1;
        } while(cl != 34);
        esi :: 0;
        if(!( *edi = *edi + 1)) {
            *esi = 0;
            esi = esi + 1;
        }
        if(*eax == 34) {
            eax = eax + 1;
        }
    } else {
        do {
            esi :: 0;
            if(!( *edi = *edi + 1)) {
                *esi = *eax;
                esi = esi + 1;
            }
            cl = *eax;
            eax = eax + 1;
            A14 = cl;
            if(!( *((A14 & 255) + 4229753) & bl)) {
                esi :: 0;
                if(!( *edi = *edi + 1)) {
                    *esi = *eax;
                    esi = esi + 1;
                }
                eax = eax + 1;
            }
            if(cl == 32) {
                break;
            }
            if(cl == 0) {
                goto L00402409;
            }
        } while(cl != 9);
        if(cl == 0) {
L00402409:
            eax = eax - 1;
        } else {
            if(esi != 0) {
                *(esi - 1) = 0;
            }
        }
    }
    edx = 0;
    for(A14 = 0; *eax != 0; *edi = ecx) {
        while(1) {
            cl = *eax;
            if(cl != 32 && cl != 9) {
                break;
            }
            eax = eax + 1;
        }
        if(*eax == 0) {
            break;
        }
        if(ebp != 0) {
            *ebp = esi;
            A8 = ebp + ebx;
        }
        *A10 = *A10 + 1;
        while(1) {
            bl = *eax;
            ecx = 0;
            ebp = 1;
            do {
                bl = *(eax + 1);
                eax = eax + 1;
                ecx = ecx + 1;
            } while(bl == 92);
            if(*eax == 34) {
                if(!(cl & 1)) {
                    if(edx == 0 || *(eax + 1) != 34) {
                        ebp = 0;
                    } else {
                        eax = eax + 1;
                    }
                    edx = 0 & 255;
                    A14 = edx;
                }
                ecx = ecx >> 1;
            }
            ebx = ecx;
            ecx = ecx - 1;
            if(ebx != 0) {
                ecx = ecx + 1;
                do {
                    if(esi != 0) {
                        *esi = 92;
                        esi = esi + 1;
                    }
                    ebx = *edi + 1;
                    *edi = ebx;
                } while(ecx = ecx - 1);
            }
            cl = *eax;
            if(cl == 0 || edx == 0 && (cl == 32 || cl == 9)) {
                break;
            }
            if(ebp != 0) {
                if(esi != 0) {
                    goto L004024cc;
                }
                if(!( *((ecx & 255) + 4229753) & 4)) {
                    ecx = *edi;
                    eax = eax + 1;
                    *edi = ecx + 1;
                }
                *edi = *edi + 1;
            }
            eax = eax + 1;
            continue;
L004024cc:
            if(!( *((ecx & 255) + 4229753) & 4)) {
                *esi = cl;
                ecx = *edi;
                esi = esi + 1;
                eax = eax + 1;
                *edi = ecx + 1;
            }
            cl = *eax;
            *esi = cl;
            ecx = *edi;
            esi = esi + 1;
            *edi = ecx + 1;
            eax = eax + 1;
        }
        if(esi != 0) {
            *esi = 0;
            esi = esi + 1;
        }
        ecx = *edi;
        ebp = A8;
        ecx = ecx + 1;
        ebx = 4;
    }
    if(ebp != 0) {
        *ebp = 0;
    }
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    *A10 = *A10 + 1;
    return(A10);
}

stack space not deallocated on return
/*	Procedure: 0x00402540 - 0x0040269F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402540()
{



    eax = *L00408A70;
    (save)ebx;
    (save)ebp;
    ebp = __imp__GetEnvironmentStrings;
    (save)esi;
    esi = 0;
    ebx = 0;
    (save)edi;
    edi = __imp__GetEnvironmentStringsW;
    if(eax == 0) {
        esi = *__imp__GetEnvironmentStringsW();
        if(esi != 0) {
            eax = 1;
        } else {
            ebx = *ebp();
            if(ebx == 0) {
                goto L0040268f;
            }
            eax = 2;
        }
        *L00408A70 = eax;
    }
    if(eax == 1) {
        if(esi == 0) {
            esi = *edi();
            if(esi == 0) {
                goto L0040268f;
            }
        }
        eax = esi;
        if(*esi != 0) {
L004025a3:
            do {
                eax = eax + 2;
                if(*eax != 0) {
                    goto L004025a3;
                }
                eax = eax + 2;
            } while(*eax != 0);
        }
        (save)0;
        (save)0;
        ebp = (eax - esi >> 1) + 1;
        (save)0;
        (save)0;
        (save)ebp;
        (save)esi;
        (save)0;
        (save)0;
        edi = *__imp__WideCharToMultiByte();
        if(edi != 0) {
            ebx = L00402FB0(edi);
            if(ebx != 0) {
                (save)0;
                (save)0;
                (save)edi;
                (save)ebx;
                (save)ebp;
                (save)esi;
                (save)0;
                (save)0;
                if(*__imp__WideCharToMultiByte() == 0) {
                    L00403590(ebx);
                    ebx = 0;
                }
                *__imp__FreeEnvironmentStringsW(esi);
                eax = ebx;
                (restore)edi;
                (restore)esi;
                (restore)ebp;
                (restore)ebx;
                return;
            }
        }
        *__imp__FreeEnvironmentStringsW(esi);
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        return(0);
    }
    if(eax == 2) {
        if(ebx != 0) {
            goto L00402633;
        }
        ebx = *ebp();
        if(ebx != 0) {
L00402633:
            cl = *ebx;
            eax = ebx;
            if(cl != 0) {
L0040263b:
                do {
                    cl = *(eax + 1);
                    eax = eax + 1;
                    if(cl != 0) {
                        goto L0040263b;
                    }
                    cl = *(eax + 1);
                    eax = eax + 1;
                } while(cl != 0);
            }
            esi = eax - ebx + 1;
            ebp = L00402FB0(esi);
            if(ebp == 0) {
                *__imp__FreeEnvironmentStringsA(ebx);
                (restore)edi;
                (restore)esi;
                (restore)ebp;
                (restore)ebx;
                return(0);
            }
            ecx = esi;
            esi = ebx;
            eax = ecx;
            edi = ebp;
            ecx = ecx >> 2;
            asm("rep movsd");
            (save)ebx;
            ecx = eax & 3;
            asm("rep movsb");
            *__imp__FreeEnvironmentStringsA();
            eax = ebp;
            (restore)edi;
            (restore)esi;
            (restore)ebp;
            (restore)ebx;
            return;
        }
    }
L0040268f:
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x004026A0 - 0x0040288F
 *	Argument size: 40
 *	Local size: 0
 *	Save regs size: 0
 */

L004026A0(A4, A10, A16, A17, A28)
/* unknown */ void  A4;
/* unknown */ void  A10;
/* unknown */ void  A16;
/* unknown */ void  A17;
/* unknown */ void  A28;
{



    esp = esp - 20;
    (save)ebx;
    (save)ebp;
    (save)esi;
    (save)edi;
    ebp = L00402890(A4);
    A28 = ebp;
    if(ebp == *L00408B7C) {
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        esp = esp + 20;
        return(0);
    }
    esi = 0;
    if(ebp == 0) {
        L00402940();
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        esp = esp + 20;
        return(0);
    }
    edx = 0;
    eax = 0x406388;
    do {
        if(*eax == ebp) {
            goto L004027e4;
        }
        eax = eax + 48;
        edx = edx + 1;
    } while(eax < 0x406478);
    (save) & A10;
    (save)ebp;
    eax = *__imp__GetCPInfo();
    if(eax == 1) {
        ecx = 64;
        eax = 0;
        edi = 4229752;
        asm("rep stosd");
        *edi = al;
        edi = edi + 1;
        if(A10 > 1) {
            if(A16 != 0) {
                edx = & A17;
                do {
                    if(*edx == 0) {
                        break;
                    }
                    ecx = ecx & 255;
                    eax = *(edx - 1) & 255;
                    do {
                        *(eax + 4229753) = *(eax + 4229753) | 4;
                        eax = eax + 1;
                    } while(eax <= ecx);
                    al = *(edx + 1);
                    edx = edx + 2;
                } while(al != 0);
            }
            eax = 1;
            do {
                *(eax + 4229753) = *(eax + 4229753) | 8;
                eax = eax + 1;
            } while(eax < 255);
            *L00408B7C = ebp;
            *L00408B80 = L004028E0(ebp);
        } else {
            *L00408B7C = esi;
            *L00408B80 = esi;
        }
        edx = 0;
        *L00408B88 = 0;
        *L00408B8C = 0;
        *L00408B90 = 0;
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        esp = esp + 20;
        return(0);
    }
    if(*L00408B94 != esi) {
        L00402940();
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        esp = esp + 20;
        return(0);
    }
    eax = eax | -1;
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    esp = esp + 20;
    return;
L004027e4:
    ecx = 64;
    eax = 0;
    edi = 4229752;
    ebx = edx + edx * 2;
    asm("rep stosd");
    *edi = al;
    edi = edi + 1;
    edi = 0;
    ebx = ebx << 4;
    ebp = ebx + 0x406398;
    do {
        al = *ebp;
        esi = ebp;
        do {
            if(*(esi + 1) == 0) {
                break;
            }
            ecx = ecx & 255;
            eax = *esi & 255;
            if(eax <= ecx) {
                dl = *(edi + 0x406380);
                do {
                    *(eax + 4229753) = *(eax + 4229753) | dl;
                    eax = eax + 1;
                } while(eax <= ecx);
            }
            al = *(esi + 2);
            esi = esi + 2;
        } while(al != 0);
        edi = edi + 1;
        ebp = ebp + 8;
    } while(edi < 4);
    eax = A28;
    *L00408B7C = eax;
    eax = L004028E0(eax);
    ecx = *(ebx + 0x40638c);
    edx = *(ebx + 0x406390);
    *L00408B80 = eax;
    *L00408B88 = ecx;
    eax = *(ebx + 0x40638c + 8);
    *L00408B8C = edx;
    (restore)edi;
    (restore)esi;
    *L00408B90 = eax;
    (restore)ebp;
    (restore)ebx;
    esp = esp + 20;
    return(0);
}

/* DEST BLOCK NOT FOUND: 004028a1 -> 004028b3 */
/* DEST BLOCK NOT FOUND: 004028ad -> 004028b3 */
/*	Procedure: 0x00402890 - 0x004028AC
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00402890(A4)
/* unknown */ void  A4;
{



    *L00408B94 = 0;
    if(A4 != -2) {
        goto L004028b3;
    }
    *L00408B94 = 1;
}

/* DEST BLOCK NOT FOUND: 004028b6 -> 004028c8 */
/* DEST BLOCK NOT FOUND: 004028c2 -> 004028c8 */
/*	Procedure: 0x004028AD - 0x004028C1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetOEMCP()
{



    goto ( *__imp__GetOEMCP);
    if(eax != -3) {
        goto L004028c8;
    }
    *L00408B94 = 1;
}

/*	Procedure: 0x004028C2 - 0x004028DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetACP()
{



    goto ( *__imp__GetACP);
    if(eax == -4) {
        eax = *L00408BB8;
        *L00408B94 = 1;
    }
}

/*	Procedure: 0x004028E0 - 0x0040293F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004028E0(A4)
/* unknown */ void  A4;
{



    eax = A4 + -932;
    if(eax <= 18) {
        goto *(( *(eax + 0x40292c) & 255) * 4 + 0x402918)[L004028fd, L00402903, L00402909, L0040290f, L00402915, ]goto ( *(( *(eax + 0x40292c) & 255) * 4 + 0x402918));
        return(1041);
        return(2052);
        return(1042);
        return(1028);
    }
    return(0);
    *(esp + eax) = *(esp + eax) + al;
    al = al + 1 + 4 + 4 + 4 + 4 + 4 + 4 + *ebx;
}

/*	Procedure: 0x00402940 - 0x0040296F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402940()
{



    (save)edi;
    ecx = 64;
    eax = 0;
    edi = 4229752;
    asm("rep stosd");
    *edi = al;
    edi = edi + 1;
    (restore)edi;
    *L00408B7C = 0;
    *L00408B80 = 0;
    *L00408B88 = 0;
    *L00408B8C = 0;
    *L00408B90 = 0;
    return(0);
}

/*	Procedure: 0x00402970 - 0x0040297F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402970()
{



    return(L004026A0(-3));
}

stack space not deallocated on return
/*	Procedure: 0x00402980 - 0x00402B7F
 *	Argument size: 60
 *	Local size: 72
 *	Save regs size: 16
 */

L00402980(A68, A6c, A9e, Aa0)
/* unknown */ void  A68;
/* unknown */ void  A6c;
/* unknown */ void  A9e;
/* unknown */ void  Aa0;
{
	/* unknown */ void  ebx;
	/* unknown */ void  ebp;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    esi = L00402FB0(256);
    if(esi == 0) {
        L00401200(27);
    }
    *L00408BE0 = esi;
    *L00408CE0 = 32;
    bl = 10;
    if(esi < esi + 256) {
        do {
            *(esi + 4) = 0;
            *esi = -1;
            *(esi + 5) = bl;
            esi = esi + 8;
        } while(esi < *L00408BE0 + 256);
    }
    (save) & A6c;
    *__imp__GetStartupInfoA();
    if(A9e != 0) {
        eax = Aa0;
        if(eax != 0) {
            ecx = *eax;
            edi = eax + 4;
            ecx :: 2048;
            A68 = ecx;
            if(!(ebp = edi + ecx)) {
                A68 = 2048;
            }
            if(*L00408CE0 < A68) {
                esi = 4230116;
                do {
                    eax = L00402FB0(256);
                    if(eax == 0) {
                        goto L00402a8c;
                    }
                    *esi = eax;
                    *L00408CE0 = *L00408CE0 + 32;
                    if(eax < eax + 256) {
                        do {
                            *(eax + 4) = 0;
                            *eax = -1;
                            *(eax + 5) = bl;
                            edx = *esi;
                            eax = eax + 8;
                        } while(eax < edx + 256);
                    }
                    esi = esi + 4;
                } while(*L00408CE0 < A68);
                goto L00402a96;
L00402a8c:
                A68 = *L00408CE0;
            }
L00402a96:
            esi = 0;
            if(A68 > 0) {
                do {
                    ecx = *ebp;
                    if(ecx != -1) {
                        al = *edi;
                        if(!(al & 1)) {
                            if(al & 8) {
                                goto L00402abd;
                            }
                            (save)ecx;
                            if(*__imp__GetFileType() != 0) {
L00402abd:
                                edx = esi;
                                eax = esi;
                                edx = edx >> 5;
                                eax = eax & 31;
                                ecx = *(edx * 4 + 4230112);
                                *(ecx + eax * 8) = *ebp;
                                eax = ecx + eax * 8;
                                *(eax + 4) = *edi;
                            }
                        }
                    }
                    esi = esi + 1;
                    edi = edi + 1;
                    ebp = ebp + 4;
                } while(esi < A68);
            }
        }
    }
    ebp = __imp__GetStdHandle;
    ebx = 0;
    do {
        edx = *L00408BE0;
        eax = *(edx + ebx * 8);
        esi = edx + ebx * 8;
        if(eax != -1) {
            al = *(esi + 4) | 128;
        } else {
            *(esi + 4) = 129;
            if(ebx != 0) {
                eax = ~(ebx - 1);
                asm("sbb eax,eax");
                eax = eax + -11;
            } else {
                eax = -10;
            }
            (save)eax;
            edi = *ebp();
            if(edi != -1) {
                (save)edi;
                eax = *__imp__GetFileType();
                if(eax != 0) {
                    goto L00402b30;
                }
            }
            al = *(esi + 4) | 64;
            goto L00402b5b;
L00402b30:
            eax = eax & 255;
            *esi = edi;
            if(eax != 2) {
                if(eax != 3) {
                    goto L00402b5e;
                }
                al = *(esi + 4) | 8;
            } else {
                al = *(esi + 4) | 64;
            }
        }
L00402b5b:
        *(esi + 4) = al;
L00402b5e:
        ebx = ebx + 1;
    } while(ebx < 3);
    return(*__imp__SetHandleCount( *L00408CE0));
}

stack space not deallocated on return
/*	Procedure: 0x00402B80 - 0x00402BBF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402B80()
{



    eax = *__imp__HeapCreate(1, 4096, 0);
    *L00408BD4 = eax;
    if(eax == 0) {
        return;
    }
    if(L004035E0() == 0) {
        *__imp__HeapDestroy( *L00408BD4);
        return(0);
    }
    return(1);
}

/* DEST BLOCK NOT FOUND: 00402bf0 -> 00402c01 */
stack space not deallocated on return
/*	Procedure: 0x00402BC0 - 0x00402C01
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

L00402BC0(A4, A8, A10)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  A10;
{



    ebp = esp;
    eax = RtlUnwind( *(ebp + 8), 0x402bd8, 0, 0, ebp, edi, esi, ebx, ebp);
    (restore)ebp;
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    (restore)ebp;
    return;
    eax = 1;
    if(!( *(A4 + 4) & 6)) {
        *A10 = A8;
        eax = 3;
    }
}

/* DEST BLOCK NOT FOUND: 00402c94 -> 00402ca0 */
/*	Procedure: 0x00402C02 - 0x00402C95
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00402C02(A4, A8)
/* unknown */ void  A4;
/* unknown */ void  A8;
{
	/* unknown */ void  Vffffffec;



    (save)ebx;
    (save)esi;
    (save)edi;
    (save)A4;
    (save)-2;
    (save)0x402be0;
    (save) *%fs:0x0];
    *%fs:0x0] = esp;
L00402c1f:
    eax = A4;
    ebx = *(eax + 8);
    esi = *(eax + 12);
    if(esi != -1 && esi != A8) {
        esi = esi + esi * 2;
        ecx = *(ebx + esi * 4);
        Vffffffec = ecx;
        *(eax + 12) = Vffffffec;
        if(*(ebx + esi * 4 + 4) == 0) {
            eax = *(ebx + esi * 4 + 8);
            L00402C96(257);
            *(ebx + esi * 4 + 8)();
        }
        goto L00402c1f;
    }
    (restore) *%fs:0x0];
    esp = esp + 12;
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    return;
    eax = 0;
    ecx = *%fs:0x0];
    if(*(ecx + 4) == 0x402be0 && *(ecx + 8) == *( *(ecx + 12) + 12)) {
        eax = 1;
    }
    return;
    (save)ebx;
    (save)ecx;
    ebx = 0x406484;
    goto L00402ca0;
}

stack space not deallocated on return
/*	Procedure: 0x00402C96 - 0x00402D8F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00402C96(A8)
/* unknown */ void  A8;
{



    (save)ebx;
    (save)A8;
    ebx = 0x406484;
    A8 = *(ebp + 8);
    *(ebx + 8) = A8;
    *(ebx + 4) = eax;
    *(ebx + 12) = ebp;
    (restore)A8;
    (restore)ebx;
    return;
    asm("int3");
    asm("int3");
    (save)esi;
    ebx = ebx + 1;
    dh = dh ^ *eax;
    (restore)eax;
    ebx = ebx + 1;
    *eax = *eax ^ dh;
    (save)ebp;
    ebp = esp;
    esp = esp - 8;
    (save)ebx;
    (save)esi;
    (save)edi;
    (save)ebp;
    asm("cld");
    ebx = *(ebp + 12);
    eax = *(ebp + 8);
    if(!( *(eax + 4) & 6)) {
        *(ebp - 8) = eax;
        *(ebp - 4) = *(ebp + 16);
        *(ebx - 4) = ebp - 8;
        esi = *(ebx + 12);
        edi = *(ebx + 8);
L00402ceb:
        if(esi != -1) {
            A8 = esi + esi * 2;
            if(*(edi + A8 * 4 + 4) != 0) {
                (save)esi;
                (save)ebp;
                ebp = ebx + 16;
                eax = *(edi + A8 * 4 + 4)();
                (restore)ebp;
                (restore)esi;
                ebx = *(ebp + 12);
                if(eax != 0) {
                    >= ? 0x402d4a : ;
                    edi = *(ebx + 8);
                    L00402BC0(ebx);
                    ebp = ebx + 16;
                    L00402C02(ebx, esi);
                    eax = *(edi + (esi + esi * 2) * 4 + 8);
                    L00402C96(1);
                    *(ebx + 12) = *(edi + A8 * 4);
                    *(edi + A8 * 4 + 8)();
                }
            }
            edi = *(ebx + 8);
            esi = *(edi + (esi + esi * 2) * 4);
            goto L00402ceb;
            eax = 0;
        } else {
            eax = 1;
        }
    } else {
        (save)ebp;
        ebp = ebx + 16;
        L00402C02(ebx, -1);
        (restore)ebp;
        eax = 1;
    }
    (restore)ebp;
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    esp = ebp;
    (restore)ebp;
    return;
    (save)ebp;
    ebp = *A8;
    eax = L00402C02( *(A8 + 24), *(A8 + 28));
    (restore)ebp;
}

/*	Procedure: 0x00402D90 - 0x00402DCF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402D90()
{



    eax = *L00408900;
    if(eax == 1 || eax == 0 && *L0040606C == 1) {
        L00402DD0(252);
        eax = *L00408B98;
        if(eax != 0) {
            *eax();
        }
        eax = L00402DD0(255);
    }
}

stack space not deallocated on return
/*	Procedure: 0x00402DD0 - 0x00402FAF
 *	Argument size: 184
 *	Local size: 0
 *	Save regs size: 0
 */

L00402DD0(A4, A10, A14, A1c, Ab4, Ab8)
/* unknown */ void  A4;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A1c;
/* unknown */ void  Ab4;
/* unknown */ void  Ab8;
{



    ecx = A4;
    esp = esp - 424;
    eax = 0x406498;
    (save)ebx;
    (save)ebp;
    (save)esi;
    (save)edi;
    ebp = 0;
    do {
        if(ecx == *eax) {
            break;
        }
        eax = eax + 8;
        ebp = ebp + 1;
    } while(eax < 0x406528);
    if(ecx == *(ebp * 8 + 0x406498)) {
        eax = *L00408900;
        if(eax == 1 || eax == 0 && *L0040606C == 1) {
            goto L00402f5d;
        }
        if(ecx != 252) {
            (save)260;
            (save) & Ab4;
            (save)0;
            if(*__imp__GetModuleFileNameA() == 0) {
                ecx = 5;
                esi = 4215644;
                edi = & Ab4;
                asm("rep movsd");
                *edi = *esi;
                edi = edi + 4;
                esi = esi + 4;
                *edi = *esi;
                edi = edi + 1;
                esi = esi + 1;
            }
            edi = & Ab4;
            ecx = ecx | -1;
            eax = 0;
            ebx = & Ab4;
            asm("repne scasb");
            ecx = !ecx;
            if(ecx > 60) {
                edi = & Ab4;
                ecx = ecx | -1;
                asm("repne scasb");
                ebx = !ecx - 1;
                ebx = ebx + & Ab8 - 59;
                L00403D90(ebx, 4215640, 3);
            }
            ecx = 6;
            esi = 4215612;
            edi = & A14;
            eax = 0;
            asm("rep movsd");
            *edi = *esi;
            edi = edi + 4;
            esi = esi + 4;
            ecx = ecx | -1;
            edi = ebx;
            asm("repne scasb");
            ecx = !ecx;
            edi = edi - ecx;
            ebx = ecx;
            esi = edi;
            ecx = ecx | -1;
            edi = & A14;
            asm("repne scasb");
            ecx = ebx;
            edi = edi - 1;
            ecx = ecx >> 2;
            asm("rep movsd");
            ecx = ebx;
            edx = & A14;
            ecx = ecx & 3;
            (save)73744;
            asm("rep movsb");
            edi = 4215608;
            ecx = ecx | -1;
            asm("repne scasb");
            ecx = !ecx;
            (save)4215568;
            esi = edi - ecx;
            ebx = ecx;
            edi = edx;
            ecx = ecx | -1;
            asm("repne scasb");
            ecx = ebx;
            edi = edi - 1;
            ecx = ecx >> 2;
            asm("rep movsd");
            ecx = ebx;
            edx = & A1c;
            ecx = ecx & 3;
            asm("rep movsb");
            edi = *(ebp * 8 + 0x40649c);
            ecx = ecx | -1;
            asm("repne scasb");
            ecx = !ecx;
            esi = edi - ecx;
            ebx = ecx;
            edi = edx;
            ecx = ecx | -1;
            asm("repne scasb");
            ecx = ebx;
            edi = edi - 1;
            ecx = ecx >> 2;
            asm("rep movsd");
            ecx = ebx;
            ecx = ecx & 3;
            (save) & A1c;
            asm("rep movsb");
            esp = esp + 12;
            (restore)edi;
            (restore)esi;
            (restore)ebp;
            (restore)ebx;
            esp = esp + 424;
            return(L00403D00());
L00402f5d:
            eax = *L00408BE0;
            if(eax != 0) {
                esi = *(eax + 16);
                if(esi != -1) {
                    goto L00402f78;
                }
            }
            (save)-12;
            esi = *__imp__GetStdHandle();
L00402f78:
            edx = *(ebp * 8 + 0x40649c);
            ecx = & A10;
            (save)0;
            (save)ecx;
            edi = edx;
            ecx = ecx | -1;
            eax = 0;
            asm("repne scasb");
            (save) !ecx - 1;
            (save)edx;
            (save)esi;
            eax = *__imp__WriteFile();
        }
    }
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    esp = esp + 424;
}

/*	Procedure: 0x00402FB0 - 0x00402FCF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00402FB0(A4)
/* unknown */ void  A4;
{



    return(L00402FD0(A4, *L00408BCC));
}

/*	Procedure: 0x00402FD0 - 0x0040301F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 4
 */

L00402FD0(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  esi;



    esi = A8;
    (save)Ac;
    if(esi <= -32) {
        if(esi == 0) {
            esi = 1;
        }
        do {
            eax = esi > -32 ? 0 : L00403020(esi);
            if(eax != 0 || Ac == 0) {
                goto L00403011;
            }
        } while(L00403E90(esi) != 0);
    }
    eax = 0;
L00403011:
    (restore)Ac;
}

/*	Procedure: 0x00403020 - 0x0040305F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00403020(A4)
/* unknown */ void  A4;
{



    (save)esi;
    esi = A4 + 15 & -16;
    if(esi <= *L00408774) {
        eax = L00403940(esi >> 4);
        if(eax != 0) {
            goto L00403056;
        }
    }
    eax = *__imp__HeapAlloc( *L00408BD4, 0, esi);
L00403056:
    (restore)esi;
}

/*	Procedure: 0x00403060 - 0x0040308F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00403060(A4)
/* unknown */ void  A4;
{



    eax = A4;
    if(eax >= *L00408CE0) {
        return(0);
    }
    ecx = eax;
    eax = eax & 31;
    return(*( *((ecx >> 5) * 4 + 4230112) + eax * 8 + 4) & 64);
}

stack space not deallocated on return
/*	Procedure: 0x00403090 - 0x004030DF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00403090(Ac)
/* unknown */ void  Ac;
{



    if(Ac == 0) {
        (save)Ac;
        esp = esp + 4;
        return(L00403160());
    }
    eax = L004030E0(Ac);
    if(eax != 0) {
        return(eax | -1);
    }
    if(!( *(Ac + 12) & 64)) {
        eax = ~(L00403EB0( *(Ac + 16)));
        asm("sbb eax,eax");
        return;
    }
    return(0);
}

/*	Procedure: 0x004030E0 - 0x0040314F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L004030E0(Ac)
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;



    ebx = 0;
    (save)edi;
    eax = *(Ac + 12);
    if((eax & 3) == 2 && !(eax & 264)) {
        eax = *(Ac + 8);
        edi = *Ac - eax;
        if(edi > 0) {
            eax = *(Ac + 12);
            if(L00403F10( *(Ac + 16), eax, edi) != edi) {
                goto L00403134;
            }
            if(!(al & 128)) {
                *(Ac + 4) = ebx;
                *(Ac + 12) = al & 253;
                *Ac = *(Ac + 8);
                eax = ebx;
                (restore)edi;
                return;
L00403134:
                al = al | 32;
                ebx = ebx | -1;
                *(Ac + 12) = eax;
            }
        }
    }
    *(Ac + 4) = 0;
    *Ac = *(Ac + 8);
    (restore)edi;
    return(ebx);
}

stack space not deallocated on return
/*	Procedure: 0x00403150 - 0x0040315F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403150()
{



    (save)1;
    esp = esp + 4;
    return(L00403160());
}

stack space not deallocated on return
/*	Procedure: 0x00403160 - 0x0040334F
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

L00403160(A4, A8, Ac, A10, A14, A18, A24)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
/* unknown */ void  A24;
{



    eax = *L00409D00;
    (save)ebx;
    ebx = A8;
    (save)ebp;
    (save)esi;
    (save)edi;
    ebp = 0;
    edi = 0;
    esi = 0;
    if(eax > 0) {
        do {
            eax = *( *L00408CF0 + esi * 4);
            if(eax != 0) {
                ecx = *(eax + 12);
                if(!(cl & 131)) {
                    if(ebx == 1) {
                        goto L00403191;
                    }
                    if(ebx == 0 && !(cl & 2)) {
                        eax = L00403090(eax);
                        if(eax == -1) {
                            edi = edi | eax;
                            goto L004031ba;
L00403191:
                            eax = L00403090(eax);
                            if(eax != -1) {
                                ebp = ebp + 1;
                            }
                        }
                    }
                }
            }
L004031ba:
            eax = *L00409D00;
            esi = esi + 1;
        } while(esi < eax);
    }
    eax = ebp;
    if(ebx != 1) {
        eax = edi;
    }
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return;
    eax = A4;
    if(eax == 0) {
        return;
    }
    ecx = *L00408BA8;
    if(ecx == 0) {
        if(A8 > 255) {
            goto L00403243;
        }
        *eax = cl;
        return(1);
    }
    ecx = & A4;
    eax = & A18;
    A24 = 0;
    eax = *__imp__WideCharToMultiByte( *L00408BB8, 544, eax, 1, eax, *L00408780, 0, ecx);
    if(eax == 0 || A4 != 0) {
L00403243:
        *L00408914 = 42;
        eax = eax | -1;
    }
    return;
    (save)ebx;
    (save)esi;
    eax = A18;
    if(eax == 0) {
        edx = 0;
        ecx = A14 / A14;
        edx = ecx % ecx;
        eax = Ac;
        edx = ecx / ecx % ecx / ecx;
        edx = A10;
    } else {
        ecx = eax;
        ebx = A14;
        edx = A10;
        eax = Ac;
L00403290:
        ecx = ecx >> 1;
        asm("rcr ebx,1");
        edx = edx >> 1;
        asm("rcr eax,1");
        if(ecx != 0) {
            goto L00403290;
        }
        edx = ebx / ebx % ebx / ebx;
        esi = eax;
        asm("mul dword [esp+0x18]");
        ecx = eax;
        eax = A14;
        asm("mul esi");
        if(!(edx = edx + ecx) && edx <= A10) {
            < ? L004032bf : ;
            if(eax <= Ac) {
                goto L004032bf;
            }
        }
        esi = esi - 1;
L004032bf:
        edx = 0;
        eax = esi;
    }
    (restore)esi;
    (restore)ebx;
    return;
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    (save)ebx;
    eax = A14;
    if(eax == 0) {
        eax = Ac;
        edx = 0;
        ecx = A10 / A10;
        edx = ecx % ecx;
        eax = A8;
        eax = ecx / ecx % ecx / ecx;
        edx = 0;
    } else {
        ecx = eax;
        ebx = A10;
        edx = Ac;
        eax = A8;
L004032ff:
        ecx = ecx >> 1;
        asm("rcr ebx,1");
        edx = edx >> 1;
        asm("rcr eax,1");
        if(ecx != 0) {
            goto L004032ff;
        }
        edx = ebx / ebx % ebx / ebx;
        ecx = eax;
        asm("mul dword [esp+0x14]");
        asm("xchg eax,ecx");
        asm("mul dword [esp+0x10]");
        if(!(edx = edx + ecx) && edx <= Ac) {
            < ? L00403332 : ;
            if(eax <= A8) {
                goto L00403332;
            }
        }
        eax = eax - A10;
        asm("sbb edx,[esp+0x14]");
L00403332:
        eax = eax - A8;
        asm("sbb edx,[esp+0xc]");
        edx = ~edx;
        eax = ~eax;
        asm("sbb edx,+0x0");
    }
    (restore)ebx;
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
}

/*	Procedure: 0x00403350 - 0x0040347F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 12
 */

L00403350(A10, A14)
/* unknown */ void  A10;
/* unknown */ void  A14;
{
	/* unknown */ void  ebx;
	/* unknown */ void  ebp;



    (save)edi;
    eax = *(A14 + 12);
    ebp = *(A14 + 16);
    if(!(al & 130) && !(al & 64)) {
        ebx = 0;
        if(al & 1) {
            goto L00403389;
        }
        *(A14 + 4) = 0;
        if(!(al & 16)) {
            ecx = *(A14 + 8);
            *A14 = ecx;
            *(A14 + 12) = al & 254;
L00403389:
            *(A14 + 4) = ebx;
            al = *(A14 + 12) & 239 | 2;
            *(A14 + 12) = eax;
            if(!(eax & 268)) {
                if(A14 != 0x406098 && A14 != 0x4060b8) {
                    goto L004033ba;
                }
                if(L00403060(ebp) == 0) {
L004033ba:
                    L00404200(A14);
                }
            }
            if(!( *(A14 + 12) & 264)) {
                eax = *(A14 + 8);
                edi = *A14;
                ecx = *(A14 + 24);
                edi = edi - eax;
                edx = eax + 1;
                edi :: ebx;
                *A14 = edx;
                if(!( *(A14 + 4) = ecx - 1)) {
                    eax = L00403F10(ebp, eax, edi);
                    edx = *(A14 + 8);
                    ebx = eax;
                    al = A10;
                    *edx = al;
                } else {
                    if(ebp != -1) {
                        edx = ebp;
                        eax = ebp;
                        edx = edx >> 5;
                        eax = eax & 31;
                        eax = *(edx * 4 + 4230112) + eax * 8;
                    } else {
                        eax = 0x406478;
                    }
                    if(!( *(eax + 4) & 32)) {
                        L00404140(ebp, ebx, 2);
                    }
                    edx = *(A14 + 8);
                    al = A10;
                    *edx = al;
                }
            } else {
                edi = 1;
                ebx = L00403F10(ebp, & A10, 1);
            }
            if(ebx != edi) {
                al = *(A14 + 12) | 32;
                *(A14 + 12) = eax;
                eax = *(A14 + 12) | -1;
                (restore)edi;
                return;
            }
            (restore)edi;
            return(A10 & 255);
        }
    }
    al = al | 32;
    (restore)edi;
    *(A14 + 12) = eax;
    return(eax | -1);
}

/*	Procedure: 0x00403480 - 0x00403587
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00403480(A4, A8)
/* unknown */ void  A4;
/* unknown */ void  A8;
{



    (save)ebx;
    (save)ebp;
    (save)esi;
    esi = A8;
    A4 = A4 * esi;
    (save)edi;
    if(esi <= -32) {
        esi = esi > 0 ? esi + 15 & -16 : 16;
    }
    ebx = __imp__HeapAlloc;
    do {
        edx = 0;
        if(esi <= -32) {
            if(esi <= *L00408774) {
                edx = L00403940(esi >> 4);
                if(edx == 0) {
                    goto L004034e4;
                }
                ecx = esi;
                eax = 0;
                ebp = ecx;
                edi = edx;
                ecx = ecx >> 2;
                asm("rep stosd");
                ecx = ebp & 3;
                asm("rep stosb");
            }
            if(edx != 0) {
                goto L00403511;
            }
L004034e4:
            (save)esi;
            (save)8;
            (save) *L00408BD4;
            edx = *ebx();
        }
        if(edx != 0 || *L00408BCC == 0) {
            goto L00403511;
        }
        eax = L00403E90(esi);
    } while(eax != 0);
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return;
L00403511:
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    eax = edx;
    (restore)ebx;
    return;
    (save)esi;
    (save)edi;
    esi = 3;
    edi = 0;
    if(*L00409D00 > 3) {
        (save)ebx;
        bl = 131;
L00403535:
        eax = *( *L00408CF0 + esi * 4);
        if(eax != 0) {
            if(!( *(eax + 12) & bl) && L00404260(eax) != -1) {
                edi = edi + 1;
            }
            if(esi >= 20) {
                L00403590( *( *L00408CF0 + esi * 4));
                *( *L00408CF0 + esi * 4) = 0;
            }
        }
        esi = esi + 1;
        if(esi < *L00409D00) {
            goto L00403535;
        }
        (restore)ebx;
    }
    eax = edi;
    (restore)edi;
    (restore)esi;
}

/*	Procedure: 0x00403588 - 0x0040358F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403588()
{



}

/*	Procedure: 0x00403590 - 0x004035DF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00403590(Ac)
/* unknown */ void  Ac;
{
	/* unknown */ void  V4;
	/* unknown */ void  ecx;
	/* unknown */ void  esi;



    esi = Ac;
    if(esi != 0) {
        eax = L00403880(esi, & V4, & Ac);
        if(eax != 0) {
            return(L004038E0(V4, Ac, eax));
        }
        eax = *__imp__HeapFree( *L00408BD4, 0, esi);
    }
}

stack space not deallocated on return
/*	Procedure: 0x004035E0 - 0x0040374F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004035E0()
{



    (save)ebp;
    (save)esi;
    (save)edi;
    if(*L00406760 == -1) {
        ebp = 0x406750;
    } else {
        (save)8224;
        (save)0;
        (save) *L00408BD4;
        ebp = *__imp__HeapAlloc();
        if(ebp == 0) {
            goto L0040373c;
        }
    }
    edi = __imp__VirtualAlloc;
    (save)4;
    (save)8192;
    (save)4194304;
    (save)0;
    esi = *__imp__VirtualAlloc();
    if(esi != 0) {
        if(*edi(esi, 65536, 4096, 4) != 0) {
            if(ebp == 0x406750) {
                if(*L00406750 == 0) {
                    *L00406750 = 0x406750;
                }
                if(*L00406754 == 0) {
                    *L00406754 = 0x406750;
                }
            } else {
                *ebp = 0x406750;
                *(ebp + 4) = *L00406754;
                *L00406754 = ebp;
                *( *(ebp + 4)) = ebp;
            }
            eax = esi + 4194304;
            ecx = ebp + 24;
            *(ebp + 20) = eax;
            *(ebp + 16) = esi;
            *(ebp + 8) = ecx;
            *(ebp + 12) = ebp + 152;
            eax = 0;
            edi = 241;
            do {
                edx = 0;
                eax :: 16;
                asm("setnl dl");
                edx = edx - 1;
                ecx = ecx + 8;
                edx = (edx & edi) - 1;
                eax = eax + 1;
                *(ecx - 8) = edx;
                *(ecx - 4) = edi;
            } while(eax < 1024);
            ecx = 16384;
            eax = 0;
            edi = esi;
            asm("rep stosd");
            if(esi < *(ebp + 16) + 65536) {
                ecx = 240;
                al = 255;
                do {
                    *(esi + 4) = ecx;
                    *esi = esi + 8;
                    *(esi + 248) = al;
                    edx = *(ebp + 16);
                    esi = esi + 4096;
                } while(esi < edx + 65536);
            }
            eax = ebp;
            (restore)edi;
            (restore)esi;
            (restore)ebp;
            return;
        }
        (save)32768;
        (save)0;
        (save)esi;
        *__imp__VirtualFree();
    }
    if(ebp != 0x406750) {
        *__imp__HeapFree( *L00408BD4, 0, ebp);
    }
L0040373c:
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x00403750 - 0x004037AF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00403750(Ac)
/* unknown */ void  Ac;
{



    (save)32768;
    (save)0;
    (save) *(Ac + 16);
    eax = *__imp__VirtualFree();
    if(*L00408770 == Ac) {
        *L00408770 = *(Ac + 4);
    }
    if(Ac != 0x406750) {
        edx = *(Ac + 4);
        *edx = *Ac;
        ecx = *Ac;
        *(ecx + 4) = *(Ac + 4);
        return(*__imp__HeapFree( *L00408BD4, 0, Ac));
    }
    *L00406760 = -1;
}

/*	Procedure: 0x004037B0 - 0x0040387F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 16
 */

L004037B0(A14)
/* unknown */ void  A14;
{
	/* unknown */ void  V8;
	/* unknown */ void  ebx;
	/* unknown */ void  ebp;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    edi = *L00406754;
    do {
        if(*(edi + 16) != -1) {
            ebp = 0;
            esi = edi + 8208;
            ebx = 4190208;
            do {
                if(*esi == 240) {
                    (save)16384;
                    (save)4096;
                    (save) *(edi + 16) + ebx;
                    A14 = *__imp__VirtualFree();
                    if(A14 != 0) {
                        *esi = -1;
                        *L00408BBC = *L00408BBC - 1;
                        A14 = *(edi + 12);
                        if(A14 == 0 || A14 > esi) {
                            *(edi + 12) = esi;
                        }
                        ebp = ebp + 1;
                        V8 = A14;
                        if(A14 = V8 - 1) {
                            break;
                        }
                    }
                }
                ebx = ebx - 4096;
                esi = esi - 8;
            } while(ebx >= 0);
            edx = edi;
            edi = *(edi + 4);
            if(ebp != 0 && *(edx + 24) == -1) {
                A14 = 1;
                ecx = edx + 32;
                do {
                    if(*ecx != -1) {
                        break;
                    }
                    A14 = A14 + 1;
                    ecx = ecx + 8;
                } while(A14 < 1024);
                if(A14 == 1024) {
                    A14 = L00403750(edx);
                }
            }
        }
    } while(edi != *L00406754 && A14 > 0);
}

/*	Procedure: 0x00403880 - 0x004038DF
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00403880(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    eax = 0x406750;
    while(A4 <= *(eax + 16) || A4 >= *(eax + 20)) {
        eax = *eax;
        if(eax == 0x406750) {
            goto L004038d6;
        }
    }
    if(!(cl & 15) && (A4 & 4095) >= 256) {
        *A8 = eax;
        eax = A4 & -4096;
        *Ac = eax;
        return((A4 - eax - 256 >> 4) + eax + 8);
    }
L004038d6:
    return(0);
}

/*	Procedure: 0x004038E0 - 0x0040393F
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L004038E0(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    eax = A4;
    (save)esi;
    Ac = A8 - *(eax + 16) >> 12;
    esi = *(eax + Ac * 8 + 24);
    eax = eax + Ac * 8 + 24;
    *eax = esi + ( *Ac & 255);
    *Ac = 0;
    *(eax + 4) = 241;
    if(*eax == 240) {
        eax = *L00408BBC + 1;
        *L00408BBC = eax;
        if(eax == 32) {
            eax = L004037B0(16);
        }
    }
    (restore)esi;
}

stack space not deallocated on return
/*	Procedure: 0x00403940 - 0x00403B7F
 *	Argument size: 24
 *	Local size: 0
 *	Save regs size: 4
 */

L00403940(A10, A14, A1c, A24)
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A1c;
/* unknown */ void  A24;
{
	/* unknown */ void  ecx;



    ecx = *L00408770;
    (save)ebx;
    ebx = A10;
    (save)ebp;
    (save)esi;
    (save)edi;
    A14 = ecx;
    while(1) {
        eax = *(ecx + 16);
        if(eax != -1) {
            edi = *(ecx + 8);
            ebp = ecx + 8216;
            esi = (edi - ecx - 24 >> 3 << 12) + eax;
            do {
                eax = *edi;
                if(eax >= ebx && *(edi + 4) > ebx) {
                    eax = L00403B80(esi, eax, ebx);
                    if(eax != 0) {
                        goto L004039f8;
                    }
                    ecx = A14;
                    *(edi + 4) = ebx;
                }
                edi = edi + 8;
                esi = esi + 4096;
            } while(edi < ebp);
            ebp = *(ecx + 8);
            edi = *(ecx + 16);
            esi = ecx + 24;
            do {
                eax = *esi;
                if(eax >= ebx && *(esi + 4) > ebx) {
                    eax = L00403B80(edi, eax, ebx);
                    if(eax != 0) {
                        goto L00403a11;
                    }
                    ecx = A14;
                    *(esi + 4) = ebx;
                }
                esi = esi + 8;
                edi = edi + 4096;
            } while(esi < ebp);
        }
        ecx = *ecx;
        A14 = ecx;
        if(ecx == *L00408770) {
            goto L00403a2a;
        }
    }
L004039f8:
    ecx = A14;
    *L00408770 = ecx;
    *edi = *edi - ebx;
    *( *L00408770 + 8) = edi;
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return;
L00403a11:
    ecx = A14;
    *L00408770 = ecx;
    *esi = *esi - ebx;
    *(ecx + 8) = esi;
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return;
L00403a2a:
    ebp = 0x406750;
    ecx = ecx | -1;
    while(*(ebp + 16) == ecx || *(ebp + 12) == 0) {
        ebp = *ebp;
        if(ebp == 0x406750) {
            goto L00403b2d;
        }
    }
    eax = *(ebp + 12);
    esi = *(ebp + 16);
    A1c = eax;
    edi = eax - ebp;
    edx = *eax;
    edi = (edi - 24 >> 3 << 12) + esi;
    esi = 0;
    do {
        if(esi >= 16) {
            break;
        }
        edx = *(eax + 8);
        eax = eax + 8;
        esi = esi + 1;
    } while(edx == ecx);
    eax = esi << 12;
    A24 = eax;
    if(*__imp__VirtualAlloc(edi, eax, 4096, 4) == edi) {
        edx = A1c;
        eax = A14;
        ecx = 0;
        ecx = edx;
        if(esi > 0) {
            eax = edi + 4;
            do {
                *eax = 240;
                *(eax - 4) = eax + 4;
                *(eax + 244) = 255;
                *ecx = 240;
                *(ecx + 4) = 241;
                eax = eax + 4096;
                ecx = ecx + 8;
            } while(esi = esi - 1);
            edx = A1c;
        }
        eax = ebp + 8216;
        *L00408770 = ebp;
        if(ecx < eax) {
            do {
                if(*ecx == -1) {
                    break;
                }
                ecx = ecx + 8;
            } while(ecx < eax);
            ecx :: eax;
        }
        asm("sbb eax,eax");
        *(ebp + 12) = eax & ecx;
        *(edi + 8) = bl;
        *(ebp + 8) = edx;
        *edx = *edx - ebx;
        eax = *(edi + 4) - ebx;
        *(edi + 4) = eax;
        *edi = edi + ebx + 8;
        eax = edi + 256;
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        return;
L00403b2d:
        eax = L004035E0();
        if(eax != 0) {
            ecx = *(eax + 16);
            *(ecx + 8) = bl;
            *L00408770 = eax;
            *ecx = ecx + ebx + 8;
            edx = 240 - ebx;
            ebx = ebx & 255;
            *(ecx + 4) = edx;
            *(eax + 24) = *(eax + 24) - ebx;
            eax = ecx + 256;
            (restore)edi;
            (restore)esi;
            (restore)ebp;
            (restore)ebx;
            return;
        }
    }
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return(0);
}

/*	Procedure: 0x00403B80 - 0x00403CFF
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00403B80(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    edx = Ac;
    (save)ebx;
    (save)ebp;
    (save)esi;
    (save)edi;
    edi = A4;
    eax = *(edi + 4);
    ecx = *edi;
    eax :: edx;
    A4 = ecx;
    esi = ecx;
    if(!(ebx = edi + 248)) {
        *ecx = dl;
        if(ecx + edx < ebx) {
            esi = *edi;
            eax = *(edi + 4);
            esi = esi + edx;
            *edi = esi;
            *(edi + 4) = eax - edx;
        } else {
            *(edi + 4) = 0;
            *edi = edi + 8;
        }
        edx = edi + edi * 2 + (edi + edi * 2) * 4;
        eax = (ecx + 8 << 4) - edx;
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        return;
    }
    eax = eax + ecx;
    if(*eax != 0) {
        esi = eax;
    }
    eax = esi + edx;
    ebx = A8;
    if(eax < ebx) {
        do {
            if(*esi != 0) {
                esi = esi + (eax & 255);
            } else {
                *(esi + 1) :: 0;
                ecx = 1;
                if(!(eax = esi + 1)) {
                    do {
                        eax = eax + 1;
                        ecx = ecx + 1;
                    } while(*eax == 0);
                }
                if(ecx >= edx) {
                    goto L00403c47;
                }
                ebp = A4;
                if(esi != ebp) {
                    ebx = ebx - ecx;
                    if(ebx < edx) {
                        goto L00403ceb;
                    }
                    ecx = A4;
                    esi = eax;
                } else {
                    *(edi + 4) = ecx;
                    esi = eax;
                    ecx = ebp;
                }
            }
            ebp = esi + edx;
            eax = edi + 248;
        } while(ebp < eax);
        goto L00403c64;
L00403c47:
        eax = esi + edx;
        if(eax < edi + 248) {
            *edi = eax;
            *(edi + 4) = ecx - edx;
            goto L00403cd6;
        }
        *edi = edi + 8;
    } else {
L00403c64:
        ebp = edi + 8;
        esi = ebp;
        if(esi >= ecx) {
            goto L00403ceb;
        }
        do {
            ecx = esi + edx;
            eax = edi + 248;
            if(ecx >= eax) {
                goto L00403ceb;
            }
            if(*esi != 0) {
                esi = esi + (eax & 255);
            } else {
                *(esi + 1) :: 0;
                ecx = 1;
                if(!(eax = esi + 1)) {
                    do {
                        eax = eax + 1;
                        ecx = ecx + 1;
                    } while(*eax == 0);
                }
                if(ecx >= edx) {
                    goto L00403cb7;
                }
                ebx = ebx - ecx;
                if(ebx < edx) {
                    goto L00403ceb;
                }
                esi = eax;
            }
        } while(esi < A4);
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        return(0);
L00403cb7:
        eax = esi + edx;
        if(eax < edi + 248) {
            *edi = eax;
            *(edi + 4) = ecx - edx;
            goto L00403cd6;
        }
        *edi = ebp;
    }
    *(edi + 4) = 0;
L00403cd6:
    *esi = dl;
    edx = edi + edi * 2 + (edi + edi * 2) * 4;
    eax = (esi + 8 << 4) - edx;
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return;
L00403ceb:
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x00403D00 - 0x00403D8F
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00403D00(A10, A14, A18)
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
{



    (save)ebx;
    ebx = 0;
    (save)esi;
    (save)edi;
    if(*L00408BC0 == 0) {
        (save)4215716;
        esi = *__imp__LoadLibraryA();
        if(esi == 0) {
            goto L00403d89;
        }
        edi = __imp__GetProcAddress;
        (save)4215704;
        (save)esi;
        eax = *__imp__GetProcAddress();
        *L00408BC0 = eax;
        if(eax == 0) {
            goto L00403d89;
        }
        (save)4215688;
        (save)esi;
        (save)4215668;
        (save)esi;
        *L00408BC4 = *edi();
        *L00408BC8 = *edi();
    }
    eax = *L00408BC4;
    if(eax != 0) {
        ebx = *eax();
    }
    if(ebx != 0) {
        eax = *L00408BC8;
        if(eax != 0) {
            (save)ebx;
            ebx = *eax();
        }
    }
    eax = *L00408bc0(ebx, A10, A14, A18);
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    return;
L00403d89:
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    return(0);
}

/*	Procedure: 0x00403D90 - 0x00403E8F
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00403D90(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    ecx = Ac;
    (save)edi;
    if(ecx != 0) {
        (save)esi;
        (save)ebx;
        ebx = ecx;
        esi = A8;
        edi = A4;
        if(!(esi & 3)) {
            ecx = ecx >> 2;
            != ? 0x403e21 : ;
        } else {
            do {
                al = *esi;
                esi = esi + 1;
                *edi = al;
                edi = edi + 1;
                if(ecx = ecx - 1) {
                    goto L00403de2;
                }
                if(al == 0) {
                    goto L00403dea;
                }
            } while(esi & 3);
            ebx = ecx;
            ecx = ecx >> 2;
            != ? 0x403e21 : ;
L00403dd0:
            if(ebx = ebx & 3) {
                goto L00403de2;
            }
        }
        do {
            al = *esi;
            esi = esi + 1;
            *edi = al;
            edi = edi + 1;
            if(al == 0) {
                goto L00403e0e;
            }
        } while(ebx = ebx - 1);
L00403de2:
        (restore)ebx;
        (restore)esi;
        (restore)edi;
        return(A4);
L00403dea:
        if(!(edi & 3)) {
            do {
                *edi = al;
                edi = edi + 1;
                if(ecx = ecx - 1) {
                    goto L00403e86;
                }
            } while(edi & 3);
        }
        ebx = ecx;
        ecx = ecx >> 2;
        != ? 0x403e77 : ;
L00403e0b:
        *edi = al;
        edi = edi + 1;
L00403e0e:
        if(ebx = ebx - 1) {
            goto L00403e0b;
        }
        (restore)ebx;
        (restore)esi;
    }
    (restore)edi;
    return(A4);
L00403e19:
    *edi = edx;
    edi = edi + 4;
    if(ecx = ecx - 1) {
        goto L00403dd0;
    }
    eax = *esi;
    edx = 2130640639 + eax;
    eax = eax ^ -1 ^ edx;
    edx = *esi;
    esi = esi + 4;
    if(eax & -2130640640) {
        goto L00403e19;
    }
    if(dl != 0) {
        if(dh != 0) {
            if(!(edx & 16711680)) {
                if(edx & -16777216) {
                    goto L00403e19;
                }
                *edi = edx;
            } else {
                edx = edx & 65535;
                *edi = edx;
            }
        } else {
            edx = edx & 255;
            *edi = edx;
        }
    } else {
        edx = 0;
        *edi = 0;
    }
    edi = edi + 4;
    eax = 0;
    if(!(ecx = ecx - 1)) {
        eax = 0;
L00403e79:
        *edi = eax;
        edi = edi + 4;
        if(ecx = ecx - 1) {
            goto L00403e79;
        }
    }
    if(ebx = ebx & 3) {
        goto L00403e0b;
    }
L00403e86:
    (restore)ebx;
    (restore)esi;
    (restore)edi;
    return(A4);
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00403E90 - 0x00403EAF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00403E90(A4)
/* unknown */ void  A4;
{



    eax = *L00408BD0;
    if(eax != 0 && *eax(A4) != 0) {
        return(1);
    }
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x00403EB0 - 0x00403F0F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00403EB0(A4)
/* unknown */ void  A4;
{



    eax = A4;
    if(eax < *L00408CE0) {
        ecx = eax;
        edx = eax;
        ecx = ecx >> 5;
        edx = edx & 31;
        if(!( *( *(ecx * 4 + 4230112) + edx * 8 + 4) & 1)) {
            (save)L00404380(eax);
            eax = *__imp__FlushFileBuffers() == 0 ? *__imp__GetLastError() : 0;
            if(eax == 0) {
                goto L00403f0a;
            }
            *L00408918 = eax;
        }
    }
    *L00408914 = 9;
    eax = eax | -1;
L00403f0a:
}

/*	Procedure: 0x00403F10 - 0x0040413F
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00403F10(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  Vfffffbd0;
	/* unknown */ void  Vfffffbd4;
	/* unknown */ void  Vfffffbd8;
	/* unknown */ void  Vfffffbdc;
	/* unknown */ void  Vfffffbe4;
	/* unknown */ void  Vfffffbe8;
	/* unknown */ void  Vfffffbec;
	/* unknown */ void  Vfffffbf0;
	/* unknown */ void  Vfffffbf4;
	/* unknown */ void  Vfffffbf8;
	/* unknown */ void  Vfffffbfc;



    eax = A4;
    ecx = *L00408CE0;
    esp = esp - 1052;
    (save)Ac;
    (save)ebp;
    (save)esi;
    (save)edi;
    if(eax < ecx) {
        ecx = eax;
        esi = eax;
        ecx = ecx >> 5;
        esi = esi & 31;
        edx = *(ecx * 4 + 4230112);
        edi = ecx * 4 + 4230112;
        esi = esi << 3;
        Vfffffbf8 = edi;
        Vfffffbe8 = esi;
        cl = *(esi + edx + 4);
        if(!(cl & 1)) {
            ebp = 0;
            Vfffffbe4 = 0;
            Vfffffbf4 = 0;
            if(Ac == 0) {
                (restore)edi;
                (restore)esi;
                (restore)ebp;
                (restore)Ac;
                esp = esp + 1052;
                return(0);
            }
            if(!(cl & 32)) {
                eax = L00404140(eax, ebp, 2);
            }
            eax = *edi + esi;
            if(*(eax + 4) & 128) {
                goto L004040ee;
            }
            ebp = A8;
            Vfffffbec = 0;
            edi = ebp;
            if(Ac > 0) {
                do {
                    eax = & Vfffffbfc;
                    do {
                        ecx = edi - ebp;
                        if(ecx >= Ac) {
                            break;
                        }
                        cl = *edi;
                        edi = edi + 1;
                        if(cl == 10) {
                            *eax = 13;
                            esi = Vfffffbf4 + 1;
                            eax = eax + 1;
                            Vfffffbf4 = esi;
                        }
                        *eax = cl;
                        eax = eax + 1;
                        edx = eax;
                        ecx = & Vfffffbfc;
                        edx = edx - ecx;
                    } while(edx < 1024);
                    esi = eax;
                    edx = & Vfffffbfc;
                    eax = & Vfffffbf0;
                    esi = esi - edx;
                    edx = Vfffffbf8;
                    (save)0;
                    (save)eax;
                    ecx = & Vfffffbfc;
                    eax = *edx;
                    (save)esi;
                    (save)ecx;
                    (save) *(Vfffffbe8 + eax);
                    eax = *__imp__WriteFile();
                    if(eax == 0) {
                        goto L004040df;
                    }
                    eax = Vfffffbdc;
                    eax :: esi;
                    if(Vfffffbd0 = Vfffffbd0 + eax) {
                        break;
                    }
                    eax = edi - ebp;
                } while(eax < Ac);
L00404035:
                esi = Vfffffbd4;
            }
L00404039:
            eax = Vfffffbe4;
            if(eax == 0) {
                eax = Vfffffbec;
                if(eax != 0) {
                    if(eax == 5) {
                        *L00408918 = eax;
                        *L00408914 = 9;
                        eax = eax | -1;
                        (restore)edi;
                        (restore)esi;
                        (restore)ebp;
                        (restore)Ac;
                        esp = esp + 1052;
                        return;
                    }
                    eax = L004043D0(eax) | -1;
                    (restore)edi;
                    (restore)esi;
                    (restore)ebp;
                    (restore)Ac;
                    esp = esp + 1052;
                    return;
                }
                if(!( *(esi + *Vfffffbf8 + 4) & 64) && *ebp == 26) {
                    (restore)edi;
                    (restore)esi;
                    (restore)ebp;
                    (restore)Ac;
                    esp = esp + 1052;
                    return(0);
                }
                *L00408914 = 28;
                goto L004040c7;
            }
            eax = eax - Vfffffbf4;
            (restore)edi;
            (restore)esi;
            (restore)ebp;
            (restore)Ac;
            esp = esp + 1052;
            return;
        }
    }
    *L00408914 = 9;
L004040c7:
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    *L00408918 = 0;
    eax = eax | -1;
    (restore)Ac;
    esp = esp + 1052;
    return;
L004040df:
    eax = *__imp__GetLastError();
    Vfffffbd8 = eax;
    goto L00404035;
L004040ee:
    edx = *eax;
    (save)ebp;
    ebp = A8;
    (save) & Vfffffbf0;
    (save)Ac;
    (save)ebp;
    (save)edx;
    eax = *__imp__WriteFile();
    if(eax != 0) {
        eax = Vfffffbdc;
        Vfffffbd8 = 0;
        Vfffffbd0 = eax;
        goto L00404039;
    }
    *__imp__GetLastError();
    Vfffffbd8 = eax;
    goto L00404039;
    return(L00401200(2));
}

stack space not deallocated on return
/*	Procedure: 0x00404140 - 0x004041FF
 *	Argument size: 24
 *	Local size: 0
 *	Save regs size: 0
 */

L00404140(A4, A14, A18)
/* unknown */ void  A4;
/* unknown */ void  A14;
/* unknown */ void  A18;
{



    eax = A4;
    (save)ebx;
    (save)esi;
    (save)edi;
    if(eax < *L00408CE0) {
        ecx = eax;
        esi = eax;
        ecx = ecx >> 5;
        esi = esi & 31;
        edx = *(ecx * 4 + 4230112);
        ebx = ecx * 4 + 4230112;
        esi = esi << 3;
        if(!( *(edx + esi + 4) & 1)) {
            eax = L00404380(eax);
            if(eax == -1) {
                *L00408914 = 9;
                eax :: 0;
                (restore)edi;
                (restore)esi;
                (restore)ebx;
                return;
            }
            (save)A18;
            (save)0;
            (save)A14;
            (save)eax;
            edi = *__imp__SetFilePointer();
            eax = edi == -1 ? *__imp__GetLastError() : 0;
            if(eax != 0) {
                eax = L004043D0(eax) | -1;
                (restore)edi;
                (restore)esi;
                (restore)ebx;
                return;
            }
            eax = *ebx;
            cl = *(eax + esi + 4);
            eax = eax + esi + 4;
            *eax = cl & 253;
            eax = edi;
            (restore)edi;
            (restore)esi;
            (restore)ebx;
            return;
        }
    }
    (restore)edi;
    (restore)esi;
    *L00408914 = 9;
    *L00408918 = 0;
    eax = eax | -1;
    (restore)ebx;
}

/*	Procedure: 0x00404200 - 0x0040425F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00404200(A4)
/* unknown */ void  A4;
{



    *L00408910 = *L00408910 + 1;
    eax = L00402FB0(4096);
    *(A4 + 8) = eax;
    eax = *(A4 + 12);
    if(eax != 0) {
        edx = *(A4 + 8);
        al = al | 8;
        *(A4 + 12) = eax;
        *(A4 + 24) = 4096;
        *A4 = edx;
        *(A4 + 4) = 0;
        return(*(A4 + 12));
    }
    *(A4 + 24) = 2;
    *(A4 + 12) = al | 4;
    eax = A4 + 20;
    *(A4 + 8) = eax;
    *A4 = eax;
    *(A4 + 4) = 0;
}

/*	Procedure: 0x00404260 - 0x004042DF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00404260(A8)
/* unknown */ void  A8;
{



    (save)edi;
    edi = edi | -1;
    eax = *(A8 + 12);
    if(!(al & 64)) {
        *(A8 + 12) = 0;
        eax = eax | -1;
        (restore)edi;
        return;
    }
    if(!(al & 131)) {
        edi = L004030E0(A8);
        L00404520(A8);
        if(L00404440( *(A8 + 16)) < 0) {
            *(A8 + 12) = 0;
            eax = edi | -1;
            (restore)edi;
            return;
        }
        eax = *(A8 + 28);
        if(eax != 0) {
            L00403590(eax);
            *(A8 + 28) = 0;
        }
    }
    eax = edi;
    *(A8 + 12) = 0;
    (restore)edi;
}

/*	Procedure: 0x004042E0 - 0x0040437F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004042E0(A4)
/* unknown */ void  A4;
{



    eax = A4;
    ecx = *L00408CE0;
    (save)ebx;
    (save)esi;
    (save)edi;
    if(eax < ecx) {
        ecx = eax;
        esi = eax;
        ecx = ecx >> 5;
        esi = esi & 31;
        edx = *(ecx * 4 + 4230112);
        edi = ecx * 4 + 4230112;
        esi = esi << 3;
        bl = *(edx + esi + 4);
        ecx = edx + esi;
        edx = 1;
        if(!(1 & bl) && *ecx != -1) {
            if(*L0040606C == 1) {
                == ? L00404340 : ;
                if(eax = eax - 1) {
                    goto L0040433a;
                }
                if(!(eax = eax - 1)) {
                    (save)0;
                    (save)-12;
                    goto L00404344;
L0040433a:
                    (save)0;
                    (save)-11;
                    goto L00404344;
                    (save)0;
                    (save)-10;
L00404344:
                    *__imp__SetStdHandle();
                }
            }
            *( *edi + esi) = -1;
            (restore)edi;
            (restore)esi;
            (restore)ebx;
            return(0);
        }
    }
    (restore)edi;
    (restore)esi;
    *L00408914 = 9;
    *L00408918 = 0;
    eax = eax | -1;
    (restore)ebx;
}

/*	Procedure: 0x00404380 - 0x004043CF
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00404380(A4)
/* unknown */ void  A4;
{



    eax = A4;
    if(eax < *L00408CE0) {
        ecx = eax;
        eax = eax & 31;
        edx = *((ecx >> 5) * 4 + 4230112);
        *(edx + eax * 8 + 4) & 1;
        if(!(eax = edx + eax * 8)) {
            return(*eax);
        }
    }
    *L00408914 = 9;
    *L00408918 = 0;
    return(eax | -1);
}

/*	Procedure: 0x004043D0 - 0x0040443F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004043D0(A4)
/* unknown */ void  A4;
{



    *L00408918 = A4;
    ecx = 0;
    eax = 0x408790;
    do {
        if(A4 == *eax) {
            goto L0040442a;
        }
        eax = eax + 8;
        ecx = ecx + 1;
    } while(eax < 0x4088f8);
    if(A4 >= 19 && A4 <= 36) {
        *L00408914 = 13;
        return;
    }
    if(A4 >= 188) {
        *L00408914 = 8;
        if(A4 <= 202) {
            goto L00404429;
        }
    }
    *L00408914 = 22;
L00404429:
    return;
L0040442a:
    eax = *(ecx * 8 + 0x408794);
    *L00408914 = eax;
    return(*L00408914);
}

stack space not deallocated on return
/*	Procedure: 0x00404440 - 0x0040451F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00404440(A10)
/* unknown */ void  A10;
{



    eax = *L00408CE0;
    (save)ebx;
    (save)ebp;
    (save)A10;
    (save)edi;
    if(A10 < eax) {
        eax = A10;
        edi = A10;
        eax = eax >> 5;
        edi = edi & 31;
        ecx = *(eax * 4 + 4230112);
        ebp = eax * 4 + 4230112;
        edi = edi << 3;
        if(!( *(ecx + edi + 4) & 1)) {
            if(L00404380(A10) != -1) {
                if(A10 == 1 || A10 == 2) {
                    ebx = L00404380(2);
                    if(L00404380(1) == ebx) {
                        goto L004044c7;
                    }
                }
                (save)L00404380(A10);
                if(*__imp__CloseHandle() != 0) {
                    goto L004044c7;
                }
                ebx = *__imp__GetLastError();
            } else {
L004044c7:
                ebx = 0;
            }
            L004042E0(A10);
            *( *ebp + edi + 4) = 0;
            if(ebx != 0) {
                eax = L004043D0(ebx) | -1;
                (restore)edi;
                (restore)A10;
                (restore)ebp;
                (restore)ebx;
                return;
            }
            (restore)edi;
            (restore)A10;
            (restore)ebp;
            (restore)ebx;
            return(0);
        }
    }
    (restore)edi;
    (restore)A10;
    (restore)ebp;
    *L00408914 = 9;
    *L00408918 = 0;
    eax = eax | -1;
    (restore)ebx;
}

/*	Procedure: 0x00404520 - 0x0040455F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00404520(A8)
/* unknown */ void  A8;
{



    eax = *(A8 + 12);
    if(!(al & 131) && !(al & 8)) {
        L00403590( *(A8 + 8));
        *(A8 + 12) = *(A8 + 12) & -1033;
        eax = 0;
        *A8 = 0;
        *(A8 + 8) = 0;
        *(A8 + 4) = 0;
    }
}

/* DEST BLOCK NOT FOUND: 00404560 -> 00403590 */
/*	Procedure: 0x00404560 - 0x00404564
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

RtlUnwind()
{



    goto ( *L4040a10c);
}

/* address  size  */
/* 0x004010e0       0 */ /* unknown */ void 	__entry_point__;
/* 0x004028ad       0 */ /* unknown */ void 	GetOEMCP;
/* 0x004028c2       0 */ /* unknown */ void 	GetACP;
/* 0x00404560       0 */ /* unknown */ void 	RtlUnwind;
/* 0x0040a0b4       0 */ /* unknown */ void 	__imp__GetFileType;
/* 0x0040a0b8       0 */ /* unknown */ void 	__imp__GetVersion;
/* 0x0040a0bc       0 */ /* unknown */ void 	__imp__ExitProcess;
/* 0x0040a0c0       0 */ /* unknown */ void 	__imp__TerminateProcess;
/* 0x0040a0c4       0 */ /* unknown */ void 	__imp__GetCurrentProcess;
/* 0x0040a0c8       0 */ /* unknown */ void 	__imp__UnhandledExceptionFilter;
/* 0x0040a0cc       0 */ /* unknown */ void 	__imp__GetModuleFileNameA;
/* 0x0040a0d0       0 */ /* unknown */ void 	__imp__FreeEnvironmentStringsA;
/* 0x0040a0d4       0 */ /* unknown */ void 	__imp__FreeEnvironmentStringsW;
/* 0x0040a0d8       0 */ /* unknown */ void 	__imp__GetEnvironmentStrings;
/* 0x0040a0dc       0 */ /* unknown */ void 	__imp__GetEnvironmentStringsW;
/* 0x0040a0e0       0 */ /* unknown */ void 	__imp__WideCharToMultiByte;
/* 0x0040a0e4       0 */ /* unknown */ void 	__imp__GetCPInfo;
/* 0x0040a0e8       0 */ /* unknown */ void 	__imp__GetACP;
/* 0x0040a0ec       0 */ /* unknown */ void 	__imp__GetOEMCP;
/* 0x0040a0f0       0 */ /* unknown */ void 	__imp__SetHandleCount;
/* 0x0040a0f4       0 */ /* unknown */ void 	__imp__GetStdHandle;
/* 0x0040a0f8       0 */ /* unknown */ void 	__imp__GetCommandLineA;
/* 0x0040a0fc       0 */ /* unknown */ void 	__imp__GetStartupInfoA;
/* 0x0040a100       0 */ /* unknown */ void 	__imp__HeapDestroy;
/* 0x0040a104       0 */ /* unknown */ void 	__imp__HeapCreate;
/* 0x0040a108       0 */ /* unknown */ void 	__imp__VirtualFree;
/* 0x0040a10c       0 */ /* unknown */ void 	__imp__RtlUnwind;
/* 0x0040a110       0 */ /* unknown */ void 	__imp__WriteFile;
/* 0x0040a114       0 */ /* unknown */ void 	__imp__HeapAlloc;
/* 0x0040a118       0 */ /* unknown */ void 	__imp__HeapFree;
/* 0x0040a11c       0 */ /* unknown */ void 	__imp__VirtualAlloc;
/* 0x0040a120       0 */ /* unknown */ void 	__imp__GetProcAddress;
/* 0x0040a124       0 */ /* unknown */ void 	__imp__LoadLibraryA;
/* 0x0040a128       0 */ /* unknown */ void 	__imp__GetLastError;
/* 0x0040a12c       0 */ /* unknown */ void 	__imp__FlushFileBuffers;
/* 0x0040a130       0 */ /* unknown */ void 	__imp__SetFilePointer;
/* 0x0040a134       0 */ /* unknown */ void 	__imp__SetStdHandle;
/* 0x0040a138       0 */ /* unknown */ void 	__imp__CloseHandle;
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
