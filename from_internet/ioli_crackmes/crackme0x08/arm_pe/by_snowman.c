
int32_t g11128 = 0x13008;

void puts(int32_t r0, void** r1, void** r2, ...);

void** exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, void* a9);

void** g111d0 = reinterpret_cast<void**>(28);

void sscanf(void** r0, void** r1, void** r2);

/* .text */
void** text(int32_t r0, void** r1, void** r2);

void*** g111d4 = reinterpret_cast<void***>(0x14000);

int32_t g111d8 = 0x13020;

void** che() {
    int32_t r0_1;
    void** r1_2;
    void** r2_3;
    int32_t r1_4;
    int32_t r2_5;
    void** r1_6;
    void** r2_7;
    void** r3_8;
    void** r11_9;
    void* v10;
    void** r0_11;
    int1_t z12;
    void* v13;
    void** v14;
    void** v15;
    void** r1_16;
    void** r1_17;
    void** r2_18;
    void** r1_19;
    int32_t v20;
    void** r0_21;
    int32_t v22;
    uint32_t v23;
    void*** r3_24;
    int32_t r0_25;
    int32_t v26;

    r0_1 = g11128;
    puts(r0_1, r1_2, r2_3, r0_1, r1_4, r2_5);
    r0_11 = exit(0, r1_6, r2_7, r3_8, r11_9, __zero_stack_offset(), __return_address(), 0x11118, v10);
    if (z12) {
    }
    v13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(__zero_stack_offset()) - 4);
    v14 = r0_11;
    v15 = r1_16;
    r1_17 = g111d0;
    r2_18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__zero_stack_offset()) - 16 - 4 - 20);
    sscanf(v14, r1_17, r2_18);
    r1_19 = v15;
    r0_21 = text(v20, r1_19, r2_18);
    if (r0_21) {
        v22 = 0;
        while (v22 <= 9) {
            if (!(v23 & 1)) {
                r3_24 = g111d4;
                if (reinterpret_cast<int1_t>(*r3_24 == 1)) {
                    r0_25 = g111d8;
                    puts(r0_25, r1_19, r2_18);
                }
                r0_21 = exit(0, r1_19, r2_18, *r3_24, v15, v14, v26, v22, v13);
            }
            ++v22;
        }
    }
    return r0_21;
}

void** parell(void** r0, void** r1) {
    void* v3;
    void* r11_4;
    void** v5;
    void** v6;
    void** r1_7;
    void** r2_8;
    void** r1_9;
    int32_t v10;
    void** r0_11;
    int32_t v12;
    uint32_t v13;
    void*** r3_14;
    int32_t r0_15;
    int32_t v16;

    v3 = r11_4;
    v5 = r0;
    v6 = r1;
    r1_7 = g111d0;
    r2_8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20);
    sscanf(v5, r1_7, r2_8);
    r1_9 = v6;
    r0_11 = text(v10, r1_9, r2_8);
    if (r0_11) {
        v12 = 0;
        while (v12 <= 9) {
            if (!(v13 & 1)) {
                r3_14 = g111d4;
                if (reinterpret_cast<int1_t>(*r3_14 == 1)) {
                    r0_15 = g111d8;
                    puts(r0_15, r1_9, r2_8);
                }
                r0_11 = exit(0, r1_9, r2_8, *r3_14, v6, v5, v16, v12, v3);
            }
            ++v12;
        }
    }
    return r0_11;
}

void* strlen(void** r0, void** r1, void** r2);

void** g112ec = reinterpret_cast<void**>(28);

int32_t g112f0 = 0x13030;

void** check(void** r0, void** r1) {
    void* r11_3;
    void** v4;
    void** v5;
    void* v6;
    void* v7;
    void** r2_8;
    void* r0_9;
    int32_t v10;
    void** v11;
    void** r1_12;
    int32_t v13;
    void** r0_14;
    int32_t v15;
    void** r3_16;
    uint32_t v17;
    int32_t r0_18;
    int32_t v19;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = r0;
    v5 = r1;
    v6 = reinterpret_cast<void*>(0);
    v7 = reinterpret_cast<void*>(0);
    while (r0_9 = strlen(v4, r1, r2_8), reinterpret_cast<uint32_t>(v7) >= reinterpret_cast<uint32_t>(r0_9)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 3) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v7) + reinterpret_cast<unsigned char>(v4))));
        r1 = g112ec;
        sscanf(reinterpret_cast<int32_t>(r11_3) - 29, r1, reinterpret_cast<int32_t>(r11_3) - 28);
        r2_8 = v11;
        v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v6) + reinterpret_cast<unsigned char>(r2_8));
        if (reinterpret_cast<int1_t>(v6 == 16)) {
            r1 = v5;
            parell(v4, r1);
        }
        v7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v7) + 1);
    }
    che();
    r1_12 = v5;
    r0_14 = text(v13, r1_12, r2_8);
    if (r0_14) {
        v15 = 0;
        while (v15 <= 9) {
            r3_16 = reinterpret_cast<void**>(v17 & 1);
            if (!r3_16) {
                r0_18 = g112f0;
                puts(r0_18, r1_12, r2_8);
                r0_14 = exit(0, r1_12, r2_8, r3_16, v5, v4, v10, v19, v6);
            }
            ++v15;
        }
    }
    return r0_14;
}

void** __gccmain(void** r0);

int32_t g11354 = 0x13038;

int32_t g11358 = 0x13050;

void printf(int32_t r0);

int32_t g1135c = 0x1305c;

void scanf(int32_t r0, void* r1);

int32_t main(void** r0, void** r1, void** r2) {
    void* r11_4;
    int32_t r0_5;
    int32_t r0_6;
    int32_t r0_7;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __gccmain(r0);
    r0_5 = g11354;
    puts(r0_5, r1, r2, r0_5, r1, r2);
    r0_6 = g11358;
    printf(r0_6);
    r0_7 = g1135c;
    scanf(r0_7, reinterpret_cast<int32_t>(r11_4) - 0x70);
    check(reinterpret_cast<int32_t>(r11_4) - 0x70, r2);
    return 0;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0* g11398 = reinterpret_cast<struct s0*>(0x1306c);

struct s0* g1139c = reinterpret_cast<struct s0*>(0x1306c);

int32_t g113a0 = 0x10000;

/* .text */
void text() {
    struct s0* r0_1;
    struct s0* lr2;
    int32_t r12_3;

    r0_1 = g11398;
    lr2 = g1139c;
    if (reinterpret_cast<uint32_t>(r0_1) < reinterpret_cast<uint32_t>(lr2)) {
        return;
    } else {
        r12_3 = g113a0;
        while (++r0_1, *reinterpret_cast<int32_t*>(r0_1->f4 + r12_3) = *reinterpret_cast<int32_t*>(r0_1->f4 + r12_3) + r0_1->f0, reinterpret_cast<uint32_t>(r0_1) >= reinterpret_cast<uint32_t>(lr2)) {
        }
        return;
    }
}

void _fcloseall();

void closeall_streams() {
    _fcloseall();
    return;
}

void*** g11494 = reinterpret_cast<void***>(0x14004);

void**** g11498 = reinterpret_cast<void****>(0x14008);

void** __dllonexit(void** r0, void*** r1, void**** r2);

void** atexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;
    int1_t z5;

    r1_2 = g11494;
    r2_3 = g11498;
    r0_4 = __dllonexit(r0, r1_2, r2_3);
    z5 = r0_4 == 0;
    if (!z5) {
        r0_4 = reinterpret_cast<void**>(0);
    }
    if (z5) {
        r0_4 = reinterpret_cast<void**>(0xffffffff);
    }
    return r0_4;
}

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1** g1150c = reinterpret_cast<struct s1**>(0x14004);

void** g11510 = reinterpret_cast<void**>(0x14008);

void fflush(int32_t r0);

void free();

void __dll_exit() {
    struct s1** r3_1;
    void** r3_2;
    struct s1* r4_3;
    struct s1** r6_4;
    struct s1* r5_5;
    int1_t z6;
    struct s1** r3_7;

    r3_1 = g1150c;
    if (*r3_1) {
        r3_2 = g11510;
        if (reinterpret_cast<uint32_t>(*r3_1) > reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*r3_2) - 4)) {
            goto addr_114f0_5;
        } else {
            r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(*r3_2) - 8);
            r6_4 = g1150c;
            while (1) {
                r5_5 = r4_3;
                z6 = r4_3->f4 == 0;
                if (!z6) {
                }
                if (!z6) 
                    goto label_10;
                r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(r4_3) - 4);
                if (reinterpret_cast<uint32_t>(*r6_4) > reinterpret_cast<uint32_t>(r5_5)) 
                    goto addr_114f0_5;
            }
        }
    }
    addr_11500_13:
    fflush(0);
    return;
    addr_114f0_5:
    free();
    r3_7 = g1150c;
    *r3_7 = reinterpret_cast<struct s1*>(0);
    goto addr_11500_13;
    label_10:
    goto r4_3->f4;
}

void _cexit() {
    __dll_exit();
    closeall_streams();
    return;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s2* g1161c = reinterpret_cast<struct s2*>(0x11988);

void** g11620 = reinterpret_cast<void**>(0x78);

void** __do_global_ctors() {
    struct s2* r3_1;
    int32_t r2_2;
    struct s2* r0_3;
    int1_t z4;
    struct s2* r3_5;
    int32_t* r5_6;
    int32_t r4_7;
    void** r0_8;
    void** r0_9;

    r3_1 = g1161c;
    r2_2 = r3_1->f0;
    if (r2_2 == -1) {
        r0_3 = r3_1;
        ++r2_2;
        while (1) {
            r0_3 = reinterpret_cast<struct s2*>(&r0_3->f4);
            z4 = r0_3->f4 == 0;
            if (!z4) {
                ++r2_2;
            }
            if (z4) 
                break;
        }
    }
    if (r2_2) {
        r3_5 = g1161c;
        r5_6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_5) + (r2_2 << 2));
        r4_7 = r2_2;
        while (--r5_6, *r5_6(), --r4_7, !!r4_7) {
        }
    }
    r0_8 = g11620;
    r0_9 = atexit(r0_8);
    return r0_9;
}

int32_t* g11648 = reinterpret_cast<int32_t*>(0x1400c);

void** __gccmain(void** r0) {
    int32_t* r2_2;
    void** r0_3;

    r2_2 = g11648;
    if (*r2_2) {
        return r0;
    } else {
        *r2_2 = *r2_2 + 1;
        r0_3 = __do_global_ctors();
        return r0_3;
    }
}

void** g11890 = reinterpret_cast<void**>(0);

int32_t GetModuleFileNameW();

void** wcslen(void** r0, void** r1, void** r2);

void** malloc(uint32_t r0, void** r1, void** r2);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, void* a9);

void** g11894 = reinterpret_cast<void**>(20);

void wcstombs(void** r0, void** r1, void** r2);

void** g11898 = reinterpret_cast<void**>(16);

int32_t g1189c = 0x13060;

void* strspn(void** r0, int32_t r1, void** r2);

void** g118a0 = reinterpret_cast<void**>(0x68);

void* strcspn(void* r0, int32_t r1);

void** realloc(void** r0, void* r1);

void** strchr(void* r0, int32_t r1);

/* .text */
int32_t text(int32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, void* a9) {
    void** sp10;
    void** r3_11;
    int32_t r0_12;
    int1_t z13;
    void** r6_14;
    void** r0_15;
    void** r0_16;
    void** r5_17;
    void** v18;
    void** v19;
    int32_t v20;
    int32_t v21;
    void* v22;
    void** r0_23;
    void** r3_24;
    void** r0_25;
    void** r2_26;
    void** r0_27;
    void** r1_28;
    void** r2_29;
    int32_t r0_30;
    void** r3_31;
    void* r0_32;
    void** r4_33;
    void** r2_34;
    void* r0_35;
    void** r8_36;
    void** r3_37;
    void** r10_38;
    int32_t r1_39;
    void* r0_40;
    void* r6_41;
    uint32_t r0_42;
    uint32_t r3_43;
    int1_t z44;
    int32_t r12_45;
    int32_t r1_46;
    void* r0_47;
    void** r7_48;
    void* r5_49;
    void** r0_50;
    int1_t z51;
    uint32_t r3_52;
    void** r0_53;
    void** r3_54;
    void** v55;
    void** v56;
    int32_t v57;
    int32_t v58;
    void* v59;
    void** v60;
    void** v61;
    int32_t v62;
    int32_t v63;
    void* v64;

    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 0x400);
    r3_11 = g11890;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(sp10 + 0x400) - reinterpret_cast<unsigned char>(r3_11)) = 0;
    r0_12 = GetModuleFileNameW();
    z13 = r2 == 0;
    if (z13) {
        r6_14 = r2;
    }
    if (!z13) {
        r0_15 = wcslen(r2, sp10, 0x200);
        r6_14 = r0_15;
    }
    r0_16 = malloc(r0_12 + reinterpret_cast<uint32_t>(r6_14 + 2), sp10, 0x200);
    r5_17 = r0_16;
    if (!r5_17) {
        TerminateProcess(r0_16 + 66, -1, 0x200, r3_11, v18, v19, v20, v21, v22);
        while (1) {
        }
    }
    r0_23 = malloc(4, sp10, 0x200);
    r3_24 = g11894;
    *reinterpret_cast<void***>(r3_24) = r0_23;
    if (!r0_23) 
        goto addr_116cc_11;
    *reinterpret_cast<void***>(r0_23) = r5_17;
    r0_25 = wcslen(sp10, sp10, 0x200);
    wcstombs(r5_17, sp10, r0_25 + 1);
    r2_26 = g11898;
    *reinterpret_cast<void***>(r2_26) = *reinterpret_cast<void***>(r2_26) + 1;
    if (reinterpret_cast<signed char>(r6_14) > reinterpret_cast<signed char>(0)) 
        goto addr_11714_14;
    addr_11864_16:
    r0_27 = g11898;
    r1_28 = g11894;
    r2_29 = *reinterpret_cast<void***>(r1_28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r2_29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_27)) << 2) = 0;
    r0_30 = main(*reinterpret_cast<void***>(r0_27), *reinterpret_cast<void***>(r1_28), r2_29);
    return r0_30;
    addr_11714_14:
    r3_31 = g11894;
    r0_32 = strlen(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31)), sp10, r2_26);
    r4_33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31))) + reinterpret_cast<uint32_t>(r0_32) + 1);
    r2_34 = r6_14 + 1;
    wcstombs(r4_33, r2, r2_34);
    r0_35 = strlen(r4_33, r2, r2_34);
    r8_36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_35));
    if (!r4_33) {
        r3_37 = g11898;
        *reinterpret_cast<void***>(r3_37) = reinterpret_cast<void**>(1);
        goto addr_11864_16;
    } else {
        r10_38 = reinterpret_cast<void**>(1);
        while (r1_39 = g1189c, r0_40 = strspn(r4_33, r1_39, r2_34), r6_41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), r0_42 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), !!r0_42) {
            r2_34 = g118a0;
            r3_43 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_34));
            if (r3_43) {
                z44 = r0_42 == r3_43;
                if (!z44) {
                    r3_43 = r0_42 << 24;
                }
                if (!z44) {
                    r12_45 = reinterpret_cast<int32_t>(r3_43) >> 24;
                }
                if (!z44) 
                    goto label_28; else 
                    goto addr_11794_29;
            }
            addr_117d8_30:
            r1_46 = g1189c;
            r0_47 = strcspn(r6_41, r1_46);
            r4_33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r6_41) + reinterpret_cast<uint32_t>(r0_47));
            addr_117e8_31:
            *reinterpret_cast<void***>(r4_33) = reinterpret_cast<void**>(0);
            ++r10_38;
            r7_48 = g11894;
            r5_49 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r10_38) << 2);
            r0_50 = realloc(*reinterpret_cast<void***>(r7_48), r5_49);
            if (!r0_50) 
                goto label_32;
            *reinterpret_cast<void***>(r7_48) = r0_50;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r5_49) + reinterpret_cast<unsigned char>(r0_50) + 0xfffffffc) = r6_41;
            z51 = r4_33 == r8_36;
            if (!z51) {
                ++r4_33;
            }
            if (z51) 
                goto addr_11828_36;
            continue;
            label_28:
            do {
                r3_52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_34 + 1));
                if (!r3_52) 
                    break;
                ++r2_34;
            } while (r12_45 != reinterpret_cast<int32_t>(r3_52 << 24) >> 24);
            goto label_41;
            goto addr_117d8_30;
            label_41:
            addr_117b8_43:
            r6_41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_41) + 1);
            r0_53 = strchr(r6_41, reinterpret_cast<int32_t>(r0_42 << 24) >> 24);
            r4_33 = r0_53;
            if (!r4_33) {
                r4_33 = r8_36;
            }
            goto addr_117e8_31;
            addr_11794_29:
            goto addr_117b8_43;
        }
    }
    addr_11828_36:
    r3_54 = g11898;
    *reinterpret_cast<void***>(r3_54) = r10_38;
    if (reinterpret_cast<signed char>(r10_38) >= reinterpret_cast<signed char>(0)) {
        goto addr_11864_16;
    } else {
        addr_11838_48:
        TerminateProcess(66, -1, r2_34, r3_54, v55, v56, v57, v58, v59);
    }
    while (1) {
    }
    label_32:
    r2_34 = reinterpret_cast<void**>(0xffffffff);
    r3_54 = g11898;
    *reinterpret_cast<void***>(r3_54) = reinterpret_cast<void**>(0xffffffff);
    goto addr_11838_48;
    addr_116cc_11:
    TerminateProcess(r0_23 + 66, -1, 0x200, r3_24, v60, v61, v62, v63, v64);
    while (1) {
    }
}

int32_t* g118ac = reinterpret_cast<int32_t*>(0x1508c);

void _fpreset() {
    int32_t* r12_1;

    r12_1 = g118ac;
    goto *r12_1;
}

int32_t* g118b8 = reinterpret_cast<int32_t*>(0x15084);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, void* a9) {
    int32_t* r12_10;

    r12_10 = g118b8;
    goto *r12_10;
}

int32_t* g118c4 = reinterpret_cast<int32_t*>(0x150a8);

void scanf(int32_t r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g118c4;
    goto *r12_3;
}

int32_t* g118d0 = reinterpret_cast<int32_t*>(0x150b8);

void* strlen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g118d0;
    goto *r12_4;
}

int32_t* g118dc = reinterpret_cast<int32_t*>(0x150ac);

void sscanf(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g118dc;
    goto *r12_4;
}

int32_t* g118e8 = reinterpret_cast<int32_t*>(0x150a0);

void puts(int32_t r0, void** r1, void** r2, ...) {
    int32_t* r12_4;

    r12_4 = g118e8;
    goto *r12_4;
}

int32_t* g118f4 = reinterpret_cast<int32_t*>(0x1509c);

void printf(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g118f4;
    goto *r12_2;
}

int32_t* g11900 = reinterpret_cast<int32_t*>(0x150bc);

int32_t strncmp(void** r0, int32_t r1, int32_t r2) {
    int32_t* r12_4;

    r12_4 = g11900;
    goto *r12_4;
}

int32_t* g1190c = reinterpret_cast<int32_t*>(0x15098);

void** malloc(uint32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g1190c;
    goto *r12_4;
}

int32_t* g11918 = reinterpret_cast<int32_t*>(0x15094);

void free() {
    int32_t* r12_1;

    r12_1 = g11918;
    goto *r12_1;
}

int32_t* g11924 = reinterpret_cast<int32_t*>(0x15090);

void fflush(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11924;
    goto *r12_2;
}

int32_t* g11930 = reinterpret_cast<int32_t*>(0x150a4);

void** realloc(void** r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g11930;
    goto *r12_3;
}

int32_t* g1193c = reinterpret_cast<int32_t*>(0x15088);

void _fcloseall() {
    int32_t* r12_1;

    r12_1 = g1193c;
    goto *r12_1;
}

int32_t* g11948 = reinterpret_cast<int32_t*>(0x150c0);

void* strspn(void** r0, int32_t r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11948;
    goto *r12_4;
}

int32_t* g11954 = reinterpret_cast<int32_t*>(0x150b0);

void** strchr(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g11954;
    goto *r12_3;
}

int32_t* g11960 = reinterpret_cast<int32_t*>(0x150b4);

void* strcspn(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g11960;
    goto *r12_3;
}

int32_t* g1196c = reinterpret_cast<int32_t*>(0x15080);

int32_t GetModuleFileNameW() {
    int32_t* r12_1;

    r12_1 = g1196c;
    goto *r12_1;
}

int32_t* g11978 = reinterpret_cast<int32_t*>(0x150c4);

void** wcslen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11978;
    goto *r12_4;
}

int32_t* g11984 = reinterpret_cast<int32_t*>(0x150c8);

void wcstombs(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11984;
    goto *r12_4;
}

void*** g11570 = reinterpret_cast<void***>(0x14004);

void*** g11574 = reinterpret_cast<void***>(0x14008);

void** __atexit_init() {
    void** r1_1;
    void** r2_2;
    void** r0_3;
    void*** r3_4;
    void*** r3_5;

    r0_3 = malloc(0x80, r1_1, r2_2);
    r3_4 = g11570;
    *r3_4 = r0_3;
    if (!r0_3) {
        return r0_3;
    } else {
        *reinterpret_cast<void***>(r0_3) = reinterpret_cast<void**>(0);
        r3_5 = g11574;
        *r3_5 = r0_3;
        return 1;
    }
}

int32_t g11104 = 0x13000;

int32_t* g11108 = reinterpret_cast<int32_t*>(0x14000);

/* .text */
void** text(int32_t r0, void** r1, void** r2) {
    void** v4;
    int32_t v5;
    void** r2_6;
    int32_t r1_7;
    int32_t r0_8;
    void** v9;
    int32_t* r2_10;

    v4 = r1;
    v5 = 0;
    while (*reinterpret_cast<void***>((v5 << 2) + reinterpret_cast<unsigned char>(v4))) {
        r2_6 = *reinterpret_cast<void***>((v5 << 2) + reinterpret_cast<unsigned char>(v4));
        ++v5;
        r1_7 = g11104;
        r0_8 = strncmp(r2_6, r1_7, 3);
        if (!r0_8) 
            goto addr_110b4_5;
    }
    v9 = reinterpret_cast<void**>(0);
    addr_110f4_8:
    return v9;
    addr_110b4_5:
    r2_10 = g11108;
    *r2_10 = 1;
    v9 = reinterpret_cast<void**>(1);
    goto addr_110f4_8;
}

void** exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, void* a9) {
    _cexit();
    TerminateProcess(66, r0, r2, r3, a5, a6, a7, a8, a9);
    while (1) {
    }
}

void** __dllonexit(void** r0, void*** r1, void**** r2) {
    void** r4_4;
    void*** r6_5;
    int1_t z6;
    void*** r3_7;
    void* r1_8;
    void* r7_9;
    void** r0_10;
    int1_t z11;

    r4_4 = r0;
    r6_5 = r1;
    if (r6_5) {
        z6 = r2 == 0;
        if (!z6) {
            z6 = *r6_5 == 0;
        }
        if (z6) 
            goto label_6; else 
            goto addr_11408_7;
    }
    addr_1144c_8:
    r4_4 = reinterpret_cast<void**>(0);
    addr_11450_9:
    return r4_4;
    label_6:
    goto addr_1144c_8;
    addr_11408_7:
    if (!*r2) {
        goto addr_1144c_8;
    } else {
        r3_7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*r2) - reinterpret_cast<unsigned char>(*r6_5)) >> 2);
        r1_8 = reinterpret_cast<void*>(r3_7 + 1);
        if (reinterpret_cast<int32_t>(r1_8) <= reinterpret_cast<int32_t>(0)) {
            goto addr_1144c_8;
        } else {
            r7_9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1_8) << 2);
            r0_10 = realloc(*r6_5, r7_9);
            z11 = r0_10 == 0;
            if (!z11) {
                *r6_5 = r0_10;
            }
            if (!z11) {
                r3_7 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r0_10) + reinterpret_cast<uint32_t>(r7_9));
            }
            if (!z11) {
                *r2 = r3_7;
            }
            if (!z11) {
                r3_7[0xfffffffc] = r4_4;
            }
            if (z11) 
                goto addr_1144c_8;
        }
    }
    goto addr_11450_9;
}

void ___crt_xt_end__(int32_t r0, int32_t r1, void** r2, void** r3) {
    void** r0_5;
    void** r4_6;
    void** r5_7;
    int32_t r6_8;
    int32_t r7_9;
    int32_t r0_10;

    _fpreset();
    text();
    r0_5 = __atexit_init();
    __gccmain(r0_5);
    r0_10 = text(r0, r1, r2, r3, r4_6, r5_7, r6_8, r7_9, __return_address());
    _cexit();
    TerminateProcess(66, r0_10, r2, r3, r4_6, r5_7, r6_8, r7_9, __return_address());
    while (1) {
    }
}

void fun_11894(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}

void fun_1198c(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_11994(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    int1_t z10;
    int1_t z11;
    int1_t z12;
    int1_t z13;
    int1_t z14;
    int1_t z15;
    int1_t z16;
    int1_t z17;
    int1_t z18;
    int1_t z19;
    int1_t z20;
    int1_t z21;
    int1_t z22;
    int1_t z23;
    int1_t z24;
    int1_t z25;
    int1_t z26;
    int1_t z27;
    int1_t z28;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (z8) {
    }
    if (z9) {
    }
    if (z10) {
    }
    if (z11) {
    }
    if (z12) {
    }
    if (z13) {
    }
    if (z14) {
    }
    if (z15) {
    }
    if (z16) {
    }
    if (z17) {
    }
    if (z18) {
    }
    if (z19) {
    }
    if (z20) {
    }
    if (z21) {
    }
    if (z22) {
    }
    if (z23) {
    }
    if (z24) {
    }
    if (z25) {
    }
    if (z26) {
    }
    if (z27) {
    }
    if (z28) {
    }
}

void fun_111d0(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;

    if (z3) {
    }
    if (z4) {
    }
    if (!z5) 
        goto "???";
}

void fun_112ec(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_11354(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;

    if (z3) {
    }
    if (z4) {
    }
    if (!z5) 
        goto "???";
}

int32_t* g113b0 = reinterpret_cast<int32_t*>(0x14004);

int32_t fun_11398(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int32_t* r3_6;

    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    r3_6 = g113b0;
    return *r3_6;
}

void fun_113b0() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void _exit(int32_t r0) {
    void** r2_2;
    void** r3_3;
    void** v4;
    void** v5;
    int32_t v6;
    int32_t v7;
    void* v8;

    closeall_streams();
    TerminateProcess(66, r0, r2_2, r3_3, v4, v5, v6, v7, v8);
    while (1) {
    }
}

void*** g1146c = reinterpret_cast<void***>(0x14004);

void**** g11470 = reinterpret_cast<void****>(0x14008);

void** _onexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;

    r1_2 = g1146c;
    r2_3 = g11470;
    r0_4 = __dllonexit(r0, r1_2, r2_3);
    return r0_4;
}

void fun_11494() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s3** g115b8 = reinterpret_cast<struct s3**>(0x12000);

void fun_11570() {
    int1_t z1;
    int1_t z2;
    struct s3** r3_3;
    int32_t r3_4;
    struct s3** r4_5;
    struct s3* r2_6;

    if (z1) {
    }
    if (z2) {
    }
    r3_3 = g115b8;
    r3_4 = (*r3_3)->f0;
    if (!r3_4) {
        return;
    } else {
        r4_5 = g115b8;
        while (r3_4(), r2_6 = *r4_5, *r4_5 = reinterpret_cast<struct s3*>(&r2_6->f4), r3_4 = r2_6->f4, !!r3_4) {
        }
        return;
    }
}

void fun_115b8(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_1161c() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

void fun_11648() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118ac() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118b8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118c4() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118d0() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_118dc() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118e8(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_118f4(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11900() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_1190c(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11918(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11924(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11930() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1193c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11948(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11954(int32_t r0, int16_t* r1) {
    int1_t z3;
    int32_t r5_4;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r5_4);
}

void fun_11960() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_1196c(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11978() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11984() {
    int1_t z1;

    if (z1) {
    }
}

void fun_11104(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void _c_exit() {
    closeall_streams();
    return;
}

void fun_1146c() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

void fun_1150c() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}
