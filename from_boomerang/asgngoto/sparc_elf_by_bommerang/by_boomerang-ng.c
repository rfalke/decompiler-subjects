union { __size32; char *; } f__w_mode[4];
union { void *; unsigned int; } f__buf;
int f__buflen = 400;
int xx.6;
int global_0x0002afac;
__size32 global_0x0002afb0;// 4 bytes
__size32 L_len;// 4 bytes
unsigned int f__cf;
__size32 errno;// 4 bytes
__size32 l_eof;// 4 bytes
__size32 f__lioproc;// 4 bytes
__size32 f__doend;// 4 bytes
__size32 f__elist;// 4 bytes
__size32 f__lquit;// 4 bytes
__size32 f__scale;// 4 bytes
unsigned int f__units;
__size32 global_0x0002c750;// 4 bytes
__size32 global_0x0002c754;// 4 bytes
__size32 global_0x0002c764;// 4 bytes
__size32 global_0x0002c82c;// 4 bytes
__size32 global_0x0002c840;// 4 bytes
__size32 global_0x0002c844;// 4 bytes
__size32 global_0x0002c854;// 4 bytes
__size32 global_0x0002c85c;// 4 bytes
__size32 global_0x0002c870;// 4 bytes
__size32 global_0x0002c874;// 4 bytes
__size32 global_0x0002c884;// 4 bytes
__size32 f__xargc;// 4 bytes
__size32 f__xargv;// 4 bytes
union { char[] *; __size32; } f__fmtbuf;
int f__fmtlen;
__size32 f__donewrec;// 4 bytes
__size32 f__lcount;// 4 bytes
int f__recpos;
__size32 l_ungetc;// 4 bytes
__size32 l_getc;// 4 bytes
__size32 f__sequential;// 4 bytes
__size32 f__reading;// 4 bytes
unsigned int f__curunit;
int f__init;
__size32 f__putn;// 4 bytes
int f__hiwater;
int f__external;
__size32 f__formatted;// 4 bytes
int main(int argc, union { __size32; char *[] *; } argv);
__size32 f_setarg(__size32 param1, __size32 param2);
void f_setsig();
__size32 f_init(__size32 param1);
void MAIN__(__size32 param1, __size32 param2, __size32 param3);
__size32 f__fatal();
__size32 f__canseek(union { FILE *; unsigned int; } param1, int param2, int param3, struct stat param4);
void s_wsle();
__size32 do_lio(union { __size32; __size32 *; } param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6, __size32 param7);
__size32 e_wsle();
void s_rsle();
void e_rsle();
void sig_die();
void c_le(__size32 param1, __size32 param2);
void f__nowwriting();
__size32 f__putbuf(int param1);
void f__nowreading();
void t_getc();
void f_exit();
__size32 fk_open(int param1, __size32 param2, int param3, char param4);
__size32 Letext(int param1, unsigned int param2);
void f_clos();
void f_open();
void t_runc();
void g_char();
void f__inode(union { __size32; char *; } param1, union { __size32; union { __size32; struct stat; } *; } param2, struct stat param3);
void opn_err(__size32 param1);
__size32 copy(union { __size32; FILE *; } param1, int param2, union { __size32; FILE *; } param3, char param4);

/** address: 0x00014a04 */
int main(int argc, union { __size32; char *[] *; } argv)
{
    __size32 fp; 		// r30
    __size32 fp_1; 		// r30{5}
    __size32 g0; 		// r0
    __size32 g2; 		// r2
    __size32 g3; 		// r3
    __size32 i0; 		// r24
    __size32 i0_1; 		// r24{5}
    __size32 i1; 		// r25
    __size32 i1_1; 		// r25{5}
    __size32 i2; 		// r26
    __size32 i2_1; 		// r26{5}
    __size32 i3; 		// r27
    __size32 i3_1; 		// r27{5}
    __size32 i4; 		// r28
    __size32 i4_1; 		// r28{5}
    __size32 i5; 		// r29
    __size32 i5_1; 		// r29{5}
    __size32 i7; 		// r31
    __size32 i7_1; 		// r31{5}
    __size32 l0; 		// r16
    __size32 l1; 		// r17
    __size32 l1_1; 		// r17{5}
    __size32 l2; 		// r18
    __size32 l2_1; 		// r18{5}
    __size32 l3; 		// r19
    __size32 l3_1; 		// r19{5}
    __size32 l4; 		// r20
    __size32 l4_1; 		// r20{5}
    __size32 l5; 		// r21
    __size32 l5_1; 		// r21{5}
    __size32 l6; 		// r22
    __size32 l6_1; 		// r22{5}
    __size32 l7; 		// r23
    __size32 l7_1; 		// r23{5}
    int o0; 		// r8
    int o1; 		// r9
    int o2; 		// r10
    int o3; 		// r11
    int o4; 		// r12
    int o5; 		// r13
    int o7; 		// r15

    g2 = f_setarg(argc, argv); /* Warning: also results in g3 */
    f_setsig();
    g0 = f_init(g2); /* Warning: also results in g2, l0, l1_1, l2_1, l3_1, l4_1, l5_1, l6_1, l7_1, i0_1, i1_1, i2_1, i3_1, i4_1, i5_1, fp_1, i7_1 */
    o0 = atexit(0x14cac); /* Warning: also results in o1, o2, o3, o4, o5, o7 */
    MAIN__(g0, g2, g3, o0, o1, o2, o3, o4, o5, o7, l0, l1_1, l2_1, l3_1, l4_1, l5_1, l6_1, l7_1, i0_1, i1_1, i2_1, i3_1, i4_1, i5_1, fp_1, i7_1, l1, l2, l3, l4, l5, l6, l7, i0, i1, i2, i3, i4, i5, fp, i7);
}

/** address: 0x00014a40 */
__size32 f_setarg(__size32 param1, __size32 param2)
{
    f__xargc = param1;
    f__xargv = param2;
    return 0x2d800; /* WARNING: Also returning: g3 := 0x2d800 */
}

/** address: 0x00014afc */
void f_setsig()
{
    int o0; 		// r8

    signal(8, 0x14a54);
    signal(6, 0x14a70);
    signal(5, 0x14ae0);
    o0 = signal(3, 0x14a8c);
    if (o0 == 1) {
        signal(3, 1);
    }
    o0 = signal(2, 0x14aa8);
    if (o0 == 1) {
        signal(2, 1);
    }
    signal(15, 0x14ac4);
    return;
}

/** address: 0x000153f4 */
__size32 f_init(__size32 param1)
{
    __size32 fp; 		// r30
    union { __size32; __size32 *; } fp_1; 		// r30{11}
    __size32 g2; 		// r2
    __size32 i0; 		// r24
    __size32 i1; 		// r25
    __size32 i2; 		// r26
    __size32 i3; 		// r27
    __size32 i4; 		// r28
    __size32 i5; 		// r29
    __size32 i7; 		// r31
    __size32 l0; 		// r16
    __size32 l1; 		// r17
    __size32 l2; 		// r18
    __size32 l3; 		// r19
    __size32 l4; 		// r20
    __size32 l5; 		// r21
    __size32 l6; 		// r22
    __size32 l7; 		// r23
    __size32 local0; 		// param1{8}
    union { unsigned int; FILE *; } o0; 		// r8
    __size32 o6; 		// r14

    fp = o6;
    o6 = (o6 - 112);
    l3 = 0x2d800;
    local0 = param1;
    if ((f__init & 0x2) != 0) {
        g2 = f__fatal(); /* Warning: also results in o6, l3, fp */
        local0 = g2;
    }
    param1 = local0;
    fp_1 = fp;
    f__units = 0x2c3b8;
    *(__size32*)(l3 + 668) = 1;
    o0 = f__canseek(0x2c3b8, *(o6 - 128), *(o6 - 132), *(o6 - 152));
    global_0x0002c750 = o0;
    global_0x0002c754 = 1;
    global_0x0002c764 = 1;
    global_0x0002c82c = 0x2c398;
    o0 = f__canseek(0x2c398, *(o6 - 128), *(o6 - 132), *(o6 - 152));
    global_0x0002c840 = o0;
    global_0x0002c844 = 1;
    global_0x0002c854 = 0;
    global_0x0002c85c = 0x2c3a8;
    o0 = f__canseek(0x2c3a8, *(o6 - 128), *(o6 - 132), *(o6 - 152));
    global_0x0002c884 = 1;
    global_0x0002c870 = o0;
    global_0x0002c874 = 1;
    l0 = *fp_1;
    l1 = *(fp_1 + 4);
    l2 = *(fp_1 + 8);
    l3 = *(fp_1 + 12);
    l4 = *(fp_1 + 16);
    l5 = *(fp_1 + 20);
    l6 = *(fp_1 + 24);
    l7 = *(fp_1 + 28);
    i0 = *(fp_1 + 32);
    i1 = *(fp_1 + 36);
    i2 = *(fp_1 + 40);
    i3 = *(fp_1 + 44);
    i4 = *(fp_1 + 48);
    i5 = *(fp_1 + 52);
    fp = *(fp_1 + 56);
    i7 = *(fp_1 + 60);
    return 0; /* WARNING: Also returning: g2 := param1, l0 := l0, l1 := l1, l2 := l2, l3 := l3, l4 := l4, l5 := l5, l6 := l6, l7 := l7, i0 := i0, i1 := i1, i2 := i2, i3 := i3, i4 := i4, i5 := i5, fp := fp, i7 := i7 */
}

/** address: 0x00011a40 */
void MAIN__(__size32 param1, __size32 param2, __size32 param3)
{
    __size32 fp; 		// r30
    union { __size32 *; __size32; } o0; 		// r8
    __size32 o4; 		// r12
    __size32 o5; 		// r13
    __size32 o7; 		// r15

    s_wsle();
    do_lio(0x19fd8, 0x19fdc, 0x19f98, 10, param1, param2, param3);
    o4 = e_wsle(); /* Warning: also results in o5, o7, fp */
    s_rsle();
    fp = do_lio(0x19fe0, 0x19fdc, fp - 20, 4, o4, o5, o7);
    e_rsle();
    *(__size32*)(fp - 24) = 0x11b24;
    o0 = *(fp - 20);
    if (o0 != 2) {
bb0x11ae0:
        o0 = *(fp - 20);
        if (o0 != 3) {
bb0x11afc:
            o0 = *(fp - 20);
            if (o0 != 4) {
bb0x11b18:
/* goto m[fp - 24] */
            }
            *(__size32*)(fp - 24) = 0x11bf0;
            goto bb0x11b18;
        }
        *(__size32*)(fp - 24) = 0x11bac;
        goto bb0x11afc;
    }
    *(__size32*)(fp - 24) = 0x11b68;
    goto bb0x11ae0;
}

/** address: 0x0001516c */
__size32 f__fatal()
{
    union { __size32; __size32 *; } fp; 		// r30
    __size32 g2; 		// r2
    __size32 i0; 		// r24
    __size32 i1; 		// r25
    __size32 l0; 		// r16
    __size32 l1; 		// r17
    __size32 l3; 		// r19
    int o0; 		// r8
    int o2; 		// r10
    int o3; 		// r11
    int o4; 		// r12
    int o5; 		// r13

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    if (flags) {
        if (flags) {
            if (flags) {
                fprintf(%o0, %o1);
            }
            else {
                fprintf(%o0, %o1);
            }
        }
        else {
            fprintf(%o0, %o1);
        }
    }
    else {
        perror(%o0);
    }
    if ( ~flags) {
        fprintf(%o0, %o1);
        abort();
    }
    *(__size32*)(o3 + 436) = 1;
    if ((f__init & 0x1) != 0) {
        if (f__curunit == 0) {
            fprintf(0x2c3b8, "apparent state: internal I/O\n");
        }
        else {
            o2 = (f__curunit - 0x2c73c) * 4 + f__curunit - 0x2c73c;
            o2 += (o2 << 4) + (o2 + (o2 << 4) << 8);
            fprintf(0x2c3b8, "apparent state: unit %d ", 0 - o2 + (o2 << 16) >> 4);
            o0 = *(f__curunit + 4);
            if (o0 == 0) {
                o3 = 0x1a630;
            }
            else {
                o3 = 0x1a620;
            }
            fprintf(0x2c3b8, o3);
        }
        if (f__fmtbuf != 0) {
            fprintf(0x2c3b8, "last format: %.*s\n", f__fmtlen, f__fmtbuf);
        }
        g2 = 0x1a678;
        if (f__reading == 0) {
            o2 = 0x1a698;
        }
        else {
            o2 = 0x1a690;
        }
        if (f__sequential == 0) {
            o3 = 0x1a6b0;
        }
        else {
            o3 = 0x1a6a0;
        }
        if (f__formatted == 0) {
            o4 = 0x1a6c8;
        }
        else {
            o4 = 0x1a6b8;
        }
        if (f__external == 0) {
            o5 = 0x1a6e8;
        }
        else {
            o5 = 0x1a6d8;
        }
        fprintf(0x2c3b8, "lately %s %s %s %s", o2, o3, o4, o5);
    }
    f__init = f__init & ~0x2;
    sig_die();
    l0 = *fp;
    l1 = *(fp + 4);
    l3 = *(fp + 12);
    i0 = *(fp + 32);
    i1 = *(fp + 36);
    fp = *(fp + 56);
    return g2; /* WARNING: Also returning: l0 := l0, l1 := l1, l3 := l3, i0 := i0, i1 := i1, fp := fp */
}

/** address: 0x000150bc */
__size32 f__canseek(union { FILE *; unsigned int; } param1, int param2, int param3, struct stat param4)
{
    unsigned int i0; 		// r24
    int o0; 		// r8
    int o0_1; 		// r8
    int o0_2; 		// r8{6}

    o0_2 = fileno(param1);
    o0_1 = fstat(o0_2, &param4);
    if (o0_1 < 0) {
bb0x15160:
        i0 = 0;
    }
    else {
        if ((param3 & 0xf000) == 0x4000) {
bb0x15130:
            i0 = (param2 != 0);
        }
        else {
            if ((unsigned int)(param3 & 0xf000) > 0x4000) {
                if ((param3 & 0xf000) == 0x6000) {
                    i0 = 1;
                }
                else {
                    i0 = 0;
                    if ((param3 & 0xf000) == 0x8000) {
                        goto bb0x15130;
                    }
                }
            }
            else {
                if ((param3 & 0xf000) == 0x2000) {
                    o0_1 = fileno(param1);
                    o0 = isatty(o0_1);
                    i0 = 1 - (o0 != 0);
                }
                else {
                    goto bb0x15160;
                }
            }
        }
    }
    return i0;
}

/** address: 0x000148f0 */
void s_wsle()
{
    union { __size32; int *; } i0; 		// r24
    int l3; 		// r19
    __size32 o0; 		// r8

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    c_le(%o0, %g2);
    if (flags) {
        l3 = *(f__curunit + 40);
        f__formatted = 1;
        f__putn = 0x13a1c;
        f__lioproc = 0x17090;
        L_len = 80;
        f__donewrec = 0x192d4;
        f__reading = 0;
        f__external = 1;
        if (l3 != 1) {
            f__nowwriting();
            if (f__curunit != 0) {
                o0 = *i0;
                if (o0 == 0) {
                    f__fatal();
                }
                else {
                    f__init = f__init & ~0x2;
                }
            }
        }
    }
    else {
    }
    return;
}

/** address: 0x00011c3c */
__size32 do_lio(union { __size32; __size32 *; } param1, __size32 param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6, __size32 param7)
{
    __size32 fp; 		// r30
    __size32 i0; 		// r24
    __size32 i1; 		// r25
    __size32 i2; 		// r26
    __size32 i3; 		// r27
    __size32 i4; 		// r28
    __size32 i5; 		// r29
    __size32 i7; 		// r31
    __size32 l0; 		// r16
    __size32 l1; 		// r17
    __size32 l2; 		// r18
    __size32 l3; 		// r19
    __size32 l4; 		// r20
    __size32 l5; 		// r21
    __size32 l6; 		// r22
    __size32 l7; 		// r23
    __size32 o3; 		// r11
    __size32 o6; 		// r14

    o3 = *param1;
    (*f__lioproc)(param2, param3, param4, o3, f__lioproc, param1, param2, param3, param4, param5, param6, o6, param7, param6, param7, l0, l1, l2, l3, l4, l5, l6, l7, l1, l2, l3, l4, l5, l6, l7, i0, i1, i2, i3, i4, i5, fp, i7);
    fp = *(fp + 56);
    return fp;
}

/** address: 0x000149dc */
__size32 e_wsle()
{
    __size32 fp; 		// r30
    __size32 i4; 		// r28
    __size32 i5; 		// r29
    __size32 i7; 		// r31

    f__init = 1;
    i4 = f__putbuf(10); /* Warning: also results in i5, fp, i7 */
    f__recpos = 0;
    fp = *(fp + 56);
    return i4; /* WARNING: Also returning: o5 := i5, o7 := i7, fp := fp */
}

/** address: 0x00013708 */
void s_rsle()
{
    union { __size32; __size32 *; } i0; 		// r24
    __size32 o0; 		// r8
    __size32 o1; 		// r9
    __size32 o2; 		// r10
    __size32 o5; 		// r13

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    *(__size32*)(%o0 + 696) = %o1;
    *(__size32*)(%o2 + 648) = %o1;
    *(__size32*)(%o3 + 692) = %o1;
    c_le(%o0, %g2);
    if (flags) {
        o5 = *(f__curunit + 40);
        f__lioproc = 0x131d0;
        f__lquit = 0;
        f__lcount = 0;
        l_eof = 0;
        if (o5 == 0) {
bb0x137dc:
            o1 = *(f__curunit + 36);
            if (o1 == 0) {
                l_getc = 0x11c64;
                l_ungetc = 0x2a9cc;
                f__doend = 0x1428c;
            }
            else {
                o2 = *(f__elist + 8);
                if (o2 == 0) {
                    f__fatal();
                }
                else {
                    f__init = f__init & ~0x2;
                    errno = -1;
                }
            }
        }
        else {
            f__nowreading();
            if (f__curunit == 0) {
                goto bb0x137dc;
            }
            else {
                o0 = *i0;
                if (o0 == 0) {
                    f__fatal();
                }
                else {
                    f__init = f__init & ~0x2;
                }
            }
        }
    }
    else {
    }
    return;
}

/** address: 0x00011cf8 */
void e_rsle()
{
    __size32 i0; 		// r24
    __size32 l0; 		// r16
    __size32 l2; 		// r18
    unsigned int o0; 		// r8
    __size32 o0_1; 		// r8{26}
    unsigned int o0_4; 		// r8{2}
    unsigned int o1; 		// r9

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    *(__size32*)(%o2 + 668) = %o0;
    if ( ~flags) {
        do {
            t_getc();
            if (flags) {
                o0_1 = *(l0 + 216);
            }
            return;
        } while (o0_4 != -1);
        o1 = *(unsigned char*)(o0_1 + 12);
        o0 = *(l2 + 656);
        if ((o1 & 0x10) != 0) {
            *(__size32*)(l1 + 252) = i0;
            *(__size32*)(o0 + 36) = i0;
        }
    }
    return;
}

/** address: 0x000195bc */
void sig_die()
{
    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    fprintf(%o0, %o1);
    if ( ~flags) {
        fflush(%o0);
        f_exit();
        fflush(%o0);
        signal(%o0, %o1);
        abort();
    }
    exit(%o0);
}

/** address: 0x00013034 */
void c_le(__size32 param1, __size32 param2)
{
    __size32 i0; 		// r24
    __size32 l0; 		// r16
    __size32 o0; 		// r8
    __size32 o0_1; 		// r8{34}
    __size32 o0_2; 		// r8{47}
    __size32 o1; 		// r9
    int o2; 		// r10
    __size32 o3; 		// r11
    unsigned int o5; 		// r13
    __size32 o6; 		// r14

    i0 = param1;
    o6 = (o6 - 112);
    l0 = 0x2d800;
    if (f__init != 1) {
        o6 = f_init(param2); /* Warning: also results in l0, i0 */
    }
    o5 = *(i0 + 4);
    f__fmtbuf = 0x1a0d0;
    f__fmtlen = 7;
    *(__size32*)(l0 + 668) = 3;
    f__curunit = (o5 * 3 << 4) + 0x2c73c;
    if (o5 <= 99) {
        o0 = *0x2da90;
        o3 = *o0;
        f__recpos = 0;
        f__scale = 0;
        f__elist = i0;
        if (o3 != 0) {
bb0x1316c:
            o0 = *0x2da90;
            o1 = *(o0 + 24);
            o2 = *o0;
            f__cf = o2;
            if (o1 == 0) {
                o0_2 = *i0;
                o0 = *(l0 + 668);
                if (o0_2 == 0) {
                    f__fatal();
                }
                else {
                    *(int*)(l0 + 668) = o0 & ~0x2;
                    errno = 103;
                }
            }
        }
        else {
            o2 = *(i0 + 4);
            o0 = fk_open(3, 5, o2, *(o6 - 32));
            if (o0 == 0) {
                goto bb0x1316c;
            }
            else {
                o0_1 = *i0;
                o0 = *(l0 + 668);
                if (o0_1 == 0) {
                    f__fatal();
                }
                else {
                    *(int*)(l0 + 668) = o0 & ~0x2;
                    errno = 102;
                }
            }
        }
    }
    else {
        o0 = *i0;
        if (o0 == 0) {
            f__fatal();
        }
        else {
            *(__size32*)(l0 + 668) = 1;
            errno = 101;
        }
    }
    return;
}

/** address: 0x00015564 */
void f__nowwriting()
{
    union { __size32; union { FILE *; unsigned int; } *; } i0; 		// r24
    int l0; 		// r16
    int o0; 		// r8
    int o0_1; 		// r8{31}
    union { __size32; char *; } o0_4; 		// r8{32}
    unsigned int o0_5; 		// r8{34}
    int o2; 		// r10

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    if (flags) {
bb0x1565c:
        *(__size32*)(%i0 + 40) = %o0;
    }
    else {
        if (flags) {
bb0x15630:
            *(__size32*)(%o1 + 248) = %o0;
        }
        else {
            if (flags) {
            }
            if (flags) {
                o0 = *i0;
                o0_1 = ftell(o0);
                o0_4 = *(i0 + 4);
                o2 = *i0;
                o0_5 = freopen(o0_4, f__w_mode[(l0 | 2)], o2);
                *(unsigned int*)i0 = o0_5;
                f__cf = o0_5;
                if (o0_5 != 0) {
                    *(__size32*)(i0 + 28) = 3;
                    fseek(o0_5, o0_1, 0);
                    goto bb0x1565c;
                }
                else {
                    *(__size32*)i0 = 0;
                    goto bb0x15630;
                }
            }
            else {
                freopen(%o0, %o1, %o2);
                *(__size32*)%i0 = %o0;
                *(__size32*)(%l0 + 216) = %o0;
                if (flags) {
                    goto bb0x15630;
                }
                else {
                    *(__size32*)(%i0 + 28) = %o0;
                    goto bb0x1565c;
                }
            }
        }
    }
    return;
}

/** address: 0x0001393c */
__size32 f__putbuf(int param1)
{
    __size32 fp; 		// r30
    union { __size32; __size32 *; } fp_1; 		// r30{12}
    int i0; 		// r24
    __size32 i4; 		// r28
    __size32 i5; 		// r29
    __size32 i7; 		// r31
    __size32 l0; 		// r16
    __size32 l1; 		// r17
    int o0; 		// r8
    union { char *; __size32; } o0_2; 		// r8{36}
    int o0_5; 		// r8{22}
    int o1; 		// r9
    int o2; 		// r10
    int o6; 		// r14

    i0 = param1;
    fp = o6;
    l1 = 0x2d800;
    if (f__hiwater > f__recpos) {
        f__recpos = f__hiwater;
    }
    if (f__recpos + 1 >= f__buflen) {
        l1 = Letext(f__recpos + 1, f__recpos); /* Warning: also results in i0, fp */
    }
    fp_1 = fp;
    l0 = f__buf;
    o0 = *(l1 + 540);
    l1 = f__buf + o0;
    if (i0 != 0) {
        *(__size8*)(f__buf + o0) = (char) i0;
        l1 = f__buf + o0 + 1;
    }
    *(__size8*)l1 = 0;
    for(;;) {
bb0x139f0:
        o1 = *0x2c4d8;
        fputs(l0, o1);
        o0_2 = strlen(l0);
        o2 = *0x2c4d8;
        if (l0 + o0_2 < l1) {
            o0_5 = *o2;
            *(int*)o2 = o0_5 - 1;
            if (o0_5 < 1) {
                l0 = l0 + o0_2 + 1;
                __flsbuf();
                goto bb0x139f0;
            }
            o1 = *(o2 + 4);
            o0 = *(unsigned char*)(l0 + o0_2);
            *(__size8*)o1 = (char) o0;
            *(__size32*)(o2 + 4) = o1 + 1;
            l0 = l0 + o0_2 + 1;
        }
    }
    i4 = *(fp_1 + 48);
    i5 = *(fp_1 + 52);
    fp = *(fp_1 + 56);
    i7 = *(fp_1 + 60);
    return i4; /* WARNING: Also returning: i5 := i5, fp := fp, i7 := i7 */
}

/** address: 0x00015490 */
void f__nowreading()
{
    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    if (flags) {
bb0x15554:
        *(__size32*)(%i0 + 40) = 0;
    }
    else {
        if (flags) {
bb0x15534:
            *(__size32*)(%o1 + 248) = %o0;
        }
        else {
            if (flags) {
            }
            ftell(%o0);
            freopen(%o0, %o1, %o2);
            if (flags) {
bb0x15544:
                fseek(%o0, %o1, %o2);
                *(__size32*)(%i0 + 28) = %l2;
                goto bb0x15554;
            }
            else {
                freopen(%o0, %o1, %o2);
                if (flags) {
                    goto bb0x15544;
                }
                else {
                    goto bb0x15534;
                }
            }
        }
    }
    return;
}

/** address: 0x00011c64 */
void t_getc()
{
    unsigned int i0; 		// r24
    unsigned int o0; 		// r8
    int o1; 		// r9
    int o2; 		// r10

    o2 = *(f__curunit + 36);
    if (o2 == 0) {
        o1 = *0x2c4d8;
        o0 = *o1;
        *(int*)o1 = o0 - 1;
        if (o0 >= 1) {
            o0 = *(o1 + 4);
            i0 = *(unsigned char*)o0;
            *(__size32*)(o1 + 4) = o0 + 1;
        }
        else {
            o0 = __filbuf();
            i0 = o0;
        }
        if (i0 == -1) {
            o1 = *(unsigned char*)(f__cf + 12);
            if ((o1 & 0x10) != 0) {
                l_eof = 1;
                *(__size32*)(f__curunit + 36) = 1;
            }
        }
    }
    return;
}

/** address: 0x00014cac */
void f_exit()
{
    int l0; 		// r16
    int l0_1; 		// r16{7}

    if ((f__init & 0x1) != 0) {
        f__init = f__init & ~0x2;
        if (xx.6 == 0) {
            xx.6 = 1;
            global_0x0002afb0 = 0;
            l0 = 0;
            do {
                l0_1 = l0;
                global_0x0002afac = l0_1;
                f_clos();
                l0 = l0_1 + 1;
            } while (l0_1 + 1 <= 99);
        }
    }
    return;
}

/** address: 0x000141d4 */
__size32 fk_open(int param1, __size32 param2, int param3, char param4)
{
    int o6; 		// r14

    sprintf(&param4, "fort.%ld", param3);
    strlen(&param4);
    if (param1 == 3) {
    }
    if (param2 == 5) {
    }
    f__init = f__init & ~0x2;
    f_open();
    f__init = f__init | 1;
    return (o6 - 72);
}

/** address: 0x00013870 */
__size32 Letext(int param1, unsigned int param2)
{
    __size32 fp; 		// r30
    unsigned int i0; 		// r24
    unsigned int i1; 		// r25
    __size32 l0; 		// r16
    int l1; 		// r17
    int local0; 		// o0_5{12}
    union { unsigned char *; unsigned int; } local1; 		// o1_2{30}
    int o0; 		// r8
    int o0_2; 		// r8{10}
    int o0_5; 		// r8{12}
    int o0_6; 		// r8{13}
    int o1; 		// r9
    unsigned int o1_1; 		// r9{22}
    union { unsigned int; unsigned char *; } o1_2; 		// r9{30}
    unsigned int o1_3; 		// r9{33}
    int o2; 		// r10
    int o6; 		// r14

    i1 = param2;
    fp = o6;
    l1 = 0x2ac00;
    l0 = 0x2ac00;
    if (f__buf == 0x2ae18) {
        f__buflen = 1024;
    }
    o0_2 = f__buflen;
    local0 = o0_2;
    if (f__buflen <= param1) {
        do {
            o0_5 = local0;
            o0_6 = o0_5 * 2;
            local0 = o0_6;
        } while ((int)(o0_5 * 2) <= param1);
        f__buflen = o0_5 * 2;
    }
    o0 = malloc(f__buflen);
    i0 = o0;
    o1 = f__buf;
    if (o0 == 0) {
        l0 = f__fatal(); /* Warning: also results in l1, i0, i1, fp */
        o1 = *(l0 + 296);
    }
    o1_1 = o1;
    o2 = i0;
    local1 = o1_1;
    if (o1_1 < o1_1 + i1) {
        do {
            o1_2 = local1;
            o0 = *(unsigned char*)o1_2;
            o1_3 = o1_2 + 1;
            *(__size8*)o2 = (char) o0;
            o2++;
            local1 = o1_3;
        } while (o1_2 + 1 < o1_1 + i1);
    }
    o2 = *(l0 + 296);
    if (o2 != (l1 | 536)) {
        free(o2);
    }
    *(unsigned int*)(l0 + 296) = i0;
    l1 = *(fp + 4);
    i0 = *(fp + 32);
    fp = *(fp + 56);
    return l1; /* WARNING: Also returning: i0 := i0, fp := fp */
}

/** address: 0x00014b98 */
void f_clos()
{
    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    if ( ~flags) {
        f__fatal();
    }
    if ( ~flags) {
        if ( ~flags) {
            if (flags) {
bb0x14c70:
                fclose(%o0);
                if ( ~flags) {
                    unlink(%o0);
                    free(%o0);
                }
            }
            else {
                if (flags) {
bb0x14c30:
                    if ( ~flags) {
                        t_runc();
                    }
                    if ( ~flags) {
                        fclose(%o0);
                        free(%o0);
                    }
                }
                else {
                    if (flags) {
                    }
                    if (flags) {
                        goto bb0x14c70;
                    }
                    else {
                        goto bb0x14c30;
                    }
                }
            }
            *(__size32*)%l0 = 0;
        }
        *(__size32*)(%l0 + 4) = 0;
        *(__size32*)(%l0 + 36) = 0;
    }
    return;
}

/** address: 0x00013acc */
void f_open()
{
    int o1; 		// r9

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    if ( ~flags) {
        f_init(%g2);
    }
    *(__size32*)(%o1 + 692) = %o0;
    if (flags) {
        *(__size32*)(%o1 + 656) = %l1;
        if (flags) {
bb0x13c24:
            *(__size32*)(%l1 + 16) = %o0;
            if ( ~flags) {
                if (flags) {
                }
                else {
                    if (flags) {
                    }
                }
            }
            *(__size32*)(%l1 + 32) = %o1;
            if (flags) {
                if (flags) {
bb0x13c98:
                    *(__size32*)(%l1 + 24) = %o0;
                }
                else {
                    if (flags) {
                        *(__size32*)(%l1 + 24) = 0;
                    }
                    else {
                        goto bb0x13c98;
                    }
                }
            }
            else {
                if (flags) {
                    *(__size32*)(%l1 + 24) = 0;
                }
                else {
                    goto bb0x13c98;
                }
            }
            if (flags) {
                sprintf(%o0, %o1);
bb0x13d30:
                *(__size32*)(%l1 + 28) = %o0;
                *(__size32*)(%l1 + 44) = 0;
                *(__size32*)(%l1 + 36) = 0;
                *(__size32*)(%l1 + 40) = 0;
                *(__size32*)%l1 = 0;
                if (flags) {
                }
                if ( ~flags) {
/* goto r10 */
                }
                strlen(%o0);
                malloc(%o0);
                *(__size32*)(%l1 + 4) = %o0;
                if (flags) {
                    strcpy(%o0, %o1);
                    if ( ~flags) {
                        if (flags) {
                        }
                    }
                    fopen(%o0, %o1);
                    if (flags) {
bb0x14010:
                        *(__size32*)%l1 = %o2;
                        f__canseek(%o0, *(%o6 - 128), *(%o6 - 132), *(%o6 - 152));
                        *(__size32*)(%l1 + 20) = %o0;
                        f__inode(%o0, %o1, *(%o6 - 152));
                        *(__size32*)(%l1 + 8) = %o0;
                        if (flags) {
                            if ( ~flags) {
                                if (flags) {
                                    if ( ~flags) {
                                        if (flags) {
bb0x140d0:
                                            fseek(%o0, %o1, %o2);
                                            if ( ~flags) {
                                                if (flags) {
                                                    opn_err(%o2);
                                                }
                                                else {
                                                    *(__size32*)(%l2 + 668) = %o0;
                                                    *(__size32*)(%o2 + 248) = %o1;
                                                }
                                            }
                                        }
                                        else {
                                            if ( ~flags) {
                                                goto bb0x140d0;
                                            }
                                        }
                                    }
                                }
                                else {
                                    rewind(%o0);
                                }
                            }
                        }
                        else {
                            if (flags) {
                                opn_err(%o2);
                            }
                            else {
                                *(__size32*)(%l2 + 668) = %o0;
                                *(__size32*)(%o2 + 248) = %o1;
                            }
                        }
                    }
                    else {
                        fopen(%o0, %o1);
                        if (flags) {
                            fopen(%o0, %o1);
                            if (flags) {
                                if (flags) {
                                    f__fatal();
                                }
                                else {
                                    *(__size32*)(%l2 + 668) = %o1;
                                }
                            }
                            else {
                                *(__size32*)(%l1 + 40) = %o0;
                                *(__size32*)(%l1 + 28) = %o1;
                                goto bb0x14010;
                            }
                        }
                        else {
                            *(__size32*)(%l1 + 28) = %o0;
                            goto bb0x14010;
                        }
                    }
                }
                else {
                    if (flags) {
                        opn_err(%o2);
                    }
                    else {
                        *(__size32*)(%l2 + 668) = %o0;
                        *(__size32*)(%o2 + 248) = %o1;
                    }
                }
            }
            else {
                g_char();
                if (flags) {
                    goto bb0x13d30;
                }
                else {
                    if (flags) {
                        opn_err(%o2);
                    }
                    else {
                        *(__size32*)(%l2 + 668) = %o0;
                        *(__size32*)(%o2 + 248) = %o1;
                    }
                }
            }
        }
        else {
            if (flags) {
                g_char();
                f__inode(%o0, %o1, *(%o6 - 152));
                if ( ~flags && flags) {
bb0x13b84:
                    if ( ~flags) {
                        if ( ~flags && flags) {
                            *(__size32*)(l1 + 32) = o1;
                        }
                        else {
                            *(__size32*)(%l1 + 32) = %o1;
                        }
                    }
                }
                else {
                    *(__size32*)(%fp - 280) = 0;
                    *(__size32*)(%fp - 288) = %o0;
                    *(__size32*)(%fp - 284) = %o1;
                    f_clos();
                    if (flags) {
                        goto bb0x13c24;
                    }
                    else {
                    }
                }
            }
            else {
                goto bb0x13b84;
            }
        }
    }
    else {
        if (flags) {
            f__fatal();
        }
        else {
            *(__size32*)(%l2 + 668) = %o0;
            *(__size32*)(%o2 + 248) = %o1;
        }
    }
    return;
}

/** address: 0x00014edc */
void t_runc()
{
    __size32 l1; 		// r17
    int l3; 		// r19
    char local0; 		// m[o6 - 0x410]
    int o0; 		// r8
    union { __size32; char *; } o0_12; 		// r8{48}
    __size32 o0_13; 		// r8{52}
    union { FILE *; __size32; } o0_2; 		// r8{39}
    union { FILE *; __size32; } o0_5; 		// r8{41}
    __size32 o0_8; 		// r8{44}
    union { FILE *; __size32; } o0_9; 		// r8{49}
    int o1; 		// r9

    *(__size32*)%o6 = %l0;
    *(__size32*)(%o6 + 4) = %l1;
    *(__size32*)(%o6 + 8) = %l2;
    *(__size32*)(%o6 + 12) = %l3;
    *(__size32*)(%o6 + 16) = %l4;
    *(__size32*)(%o6 + 20) = %l5;
    *(__size32*)(%o6 + 24) = %l6;
    *(__size32*)(%o6 + 28) = %l7;
    *(__size32*)(%o6 + 32) = %i0;
    *(__size32*)(%o6 + 36) = %i1;
    *(__size32*)(%o6 + 40) = %i2;
    *(__size32*)(%o6 + 44) = %i3;
    *(__size32*)(%o6 + 48) = %i4;
    *(__size32*)(%o6 + 52) = %i5;
    *(__size32*)(%o6 + 56) = %fp;
    *(__size32*)(%o6 + 60) = %i7;
    if ( ~flags) {
        ftell(%o0);
        fseek(%o0, %o1, %o2);
        ftell(%o0);
        if ( ~flags) {
            fclose(%o0);
            if (flags) {
                o1 = *0x2ad10;
                o0 = *(l1 + 4);
                o0_2 = fopen(o0, o1);
                if (o0_2 == 0) {
                }
                else {
                    o0_5 = tmpfile();
                    if (o0_5 != 0) {
                        o0_8 = copy(o0_2, l3, o0_5, local0);
                        if (o0_8 == 0) {
                            o1 = *0x2ad18;
                            o0_12 = *(l1 + 4);
                            o0_9 = freopen(o0_12, o1, o0_2);
                            if (o0_9 == 0) {
                            }
                            else {
                                rewind(o0_5);
                                o0_13 = copy(o0_5, l3, o0_9, local0);
                                if (o0_13 != 0) {
                                }
                                else {
                                    *(__size32*)(l1 + 28) = 2;
                                }
                            }
                        }
                        else {
                        }
                        fclose(o0_5);
                    }
                    else {
                    }
                }
            }
            else {
                fopen(%o0, %o1);
                if (flags) {
                }
                if ( ~flags) {
                    *(__size32*)(%l1 + 40) = %o0;
                }
            }
            *(__size32*)(%o0 + 216) = %l0;
            *(__size32*)%l1 = %l0;
            if ( ~flags) {
                if (flags) {
                    f__fatal();
                }
                else {
                    *(__size32*)(%o2 + 668) = %o0;
                    *(__size32*)(%o3 + 248) = %o1;
                }
            }
        }
    }
    return;
}

/** address: 0x00014808 */
void g_char()
{
    while (flags) {
        if ( ~flags) {
            *(__size8*)%o3 = 0;
            do {
                *(__size8*)%o3 = (char) %g2;
            } while (flags);
            return;
        }
    }
    *(__size8*)%o2 = 0;
    return;
}

/** address: 0x000148bc */
void f__inode(union { __size32; char *; } param1, union { __size32; union { __size32; struct stat; } *; } param2, struct stat param3)
{
    int o0_1; 		// r8

    o0_1 = stat(param1, &param3);
    if (o0_1 >= 0) {
        *(union { struct stat; __size32; }*)param2 = param3;
    }
    return;
}

/** address: 0x00013a64 */
void opn_err(__size32 param1)
{
    int o0; 		// r8

    o0 = *(param1 + 8);
    if (o0 != 0) {
        o0 = *(param1 + 12);
        if (o0 >= f__buflen) {
            Letext(o0, 0);
        }
        *(__size32*)(f__curunit + 4) = f__buf;
        g_char();
    }
    f__fatal();
    return;
}

/** address: 0x00014e68 */
__size32 copy(union { __size32; FILE *; } param1, int param2, union { __size32; FILE *; } param3, char param4)
{
    __size32 i0; 		// r24
    int i1; 		// r25
    int i1_1; 		// r25{7}
    int i1_2; 		// r25{15}
    int l0; 		// r16
    int local0; 		// i1_1{7}
    int o0; 		// r8
    int o0_1; 		// r8{12}

    i1 = param2;
    local0 = i1;
    do {
        i1_1 = local0;
        l0 = i1_1;
        if (i1_1 > 1024) {
            l0 = 1024;
        }
        o0_1 = fread(&param4, l0, 1, param1);
        if (o0_1 != 0) {
            o0 = fwrite(&param4, l0, 1, param3);
            i1_2 = i1_1 - l0;
            local0 = i1_2;
            if (o0 == 0) {
                i0 = 1;
                return i0;
            }
        }
    } while (i1_1 > l0);
    i0 = 0;
    return i0;
}

