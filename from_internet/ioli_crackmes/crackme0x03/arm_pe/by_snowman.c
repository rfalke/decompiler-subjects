
void** __gccmain(void** r0);

void* g111d4 = reinterpret_cast<void*>(0x13028);

void puts(void* r0);

int32_t g111d8 = 0x13040;

void printf(int32_t r0);

int32_t g111dc = 0x1304c;

void scanf(int32_t r0, void* r1);

void test(int32_t r0, int32_t r1);

int32_t main(void** r0, void** r1) {
    void* r0_3;
    int32_t r0_4;
    int32_t r0_5;
    int32_t v6;

    __gccmain(r0);
    r0_3 = g111d4;
    puts(r0_3);
    r0_4 = g111d8;
    printf(r0_4);
    r0_5 = g111dc;
    scanf(r0_5, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24);
    test(v6, 0x52b24);
    return 0;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0* g11218 = reinterpret_cast<struct s0*>(0x1305c);

struct s0* g1121c = reinterpret_cast<struct s0*>(0x1305c);

int32_t g11220 = 0x10000;

/* .text */
void text() {
    struct s0* r0_1;
    struct s0* lr2;
    int32_t r12_3;

    r0_1 = g11218;
    lr2 = g1121c;
    if (reinterpret_cast<uint32_t>(r0_1) < reinterpret_cast<uint32_t>(lr2)) {
        return;
    } else {
        r12_3 = g11220;
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

void*** g11314 = reinterpret_cast<void***>(0x14000);

void**** g11318 = reinterpret_cast<void****>(0x14004);

void** __dllonexit(void** r0, void*** r1, void**** r2);

void** atexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;
    int1_t z5;

    r1_2 = g11314;
    r2_3 = g11318;
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

struct s1** g1138c = reinterpret_cast<struct s1**>(0x14000);

void** g11390 = reinterpret_cast<void**>(0x14004);

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

    r3_1 = g1138c;
    if (*r3_1) {
        r3_2 = g11390;
        if (reinterpret_cast<uint32_t>(*r3_1) > reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*r3_2) - 4)) {
            goto addr_11370_5;
        } else {
            r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(*r3_2) - 8);
            r6_4 = g1138c;
            while (1) {
                r5_5 = r4_3;
                z6 = r4_3->f4 == 0;
                if (!z6) {
                }
                if (!z6) 
                    goto label_10;
                r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(r4_3) - 4);
                if (reinterpret_cast<uint32_t>(*r6_4) > reinterpret_cast<uint32_t>(r5_5)) 
                    goto addr_11370_5;
            }
        }
    }
    addr_11380_13:
    fflush(0);
    return;
    addr_11370_5:
    free();
    r3_7 = g1138c;
    *r3_7 = reinterpret_cast<struct s1*>(0);
    goto addr_11380_13;
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

struct s2* g1149c = reinterpret_cast<struct s2*>(0x117f0);

void** g114a0 = reinterpret_cast<void**>(0xf8);

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

    r3_1 = g1149c;
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
        r3_5 = g1149c;
        r5_6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_5) + (r2_2 << 2));
        r4_7 = r2_2;
        while (--r5_6, *r5_6(), --r4_7, !!r4_7) {
        }
    }
    r0_8 = g114a0;
    r0_9 = atexit(r0_8);
    return r0_9;
}

int32_t* g114c8 = reinterpret_cast<int32_t*>(0x14008);

void** __gccmain(void** r0) {
    int32_t* r2_2;
    void** r0_3;

    r2_2 = g114c8;
    if (*r2_2) {
        return r0;
    } else {
        *r2_2 = *r2_2 + 1;
        r0_3 = __do_global_ctors();
        return r0_3;
    }
}

void** g11710 = reinterpret_cast<void**>(0);

int32_t GetModuleFileNameW();

void** wcslen(void** r0, void** r1, void** r2);

void** malloc(uint32_t r0, void** r1, void** r2);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);

void** g11714 = reinterpret_cast<void**>(16);

void wcstombs(void** r0, void** r1, void** r2);

void** g11718 = reinterpret_cast<void**>(12);

void* strlen(void** r0, void** r1, void** r2);

int32_t g1171c = 0x13050;

void* strspn(void** r0, int32_t r1, void** r2);

void** g11720 = reinterpret_cast<void**>(88);

void* strcspn(void* r0, int32_t r1);

void** realloc(void** r0, void* r1);

void** strchr(void* r0, int32_t r1);

/* .text */
int32_t text(int32_t r0, int32_t r1, void** r2, void** r3, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    void** sp10;
    void** r3_11;
    int32_t r0_12;
    int1_t z13;
    void** r6_14;
    void** r0_15;
    void** r0_16;
    void** r5_17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    void** r0_23;
    void** r3_24;
    void** r0_25;
    void** r2_26;
    void** r0_27;
    void** r1_28;
    int32_t r0_29;
    void** r3_30;
    void* r0_31;
    void** r4_32;
    void** r2_33;
    void* r0_34;
    void** r8_35;
    void** r3_36;
    void** r10_37;
    int32_t r1_38;
    void* r0_39;
    void* r6_40;
    uint32_t r0_41;
    uint32_t r3_42;
    int1_t z43;
    int32_t r12_44;
    int32_t r1_45;
    void* r0_46;
    void** r7_47;
    void* r5_48;
    void** r0_49;
    int1_t z50;
    uint32_t r3_51;
    void** r0_52;
    void** r3_53;
    int32_t v54;
    int32_t v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    int32_t v60;
    int32_t v61;
    int32_t v62;
    int32_t v63;

    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 0x400);
    r3_11 = g11710;
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
    r3_24 = g11714;
    *reinterpret_cast<void***>(r3_24) = r0_23;
    if (!r0_23) 
        goto addr_1154c_11;
    *reinterpret_cast<void***>(r0_23) = r5_17;
    r0_25 = wcslen(sp10, sp10, 0x200);
    wcstombs(r5_17, sp10, r0_25 + 1);
    r2_26 = g11718;
    *reinterpret_cast<void***>(r2_26) = *reinterpret_cast<void***>(r2_26) + 1;
    if (reinterpret_cast<signed char>(r6_14) > reinterpret_cast<signed char>(0)) 
        goto addr_11594_14;
    addr_116e4_16:
    r0_27 = g11718;
    r1_28 = g11714;
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_28)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_27)) << 2) = 0;
    r0_29 = main(*reinterpret_cast<void***>(r0_27), *reinterpret_cast<void***>(r1_28));
    return r0_29;
    addr_11594_14:
    r3_30 = g11714;
    r0_31 = strlen(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_30)), sp10, r2_26);
    r4_32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_30))) + reinterpret_cast<uint32_t>(r0_31) + 1);
    r2_33 = r6_14 + 1;
    wcstombs(r4_32, r2, r2_33);
    r0_34 = strlen(r4_32, r2, r2_33);
    r8_35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_34));
    if (!r4_32) {
        r3_36 = g11718;
        *reinterpret_cast<void***>(r3_36) = reinterpret_cast<void**>(1);
        goto addr_116e4_16;
    } else {
        r10_37 = reinterpret_cast<void**>(1);
        while (r1_38 = g1171c, r0_39 = strspn(r4_32, r1_38, r2_33), r6_40 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_39)), r0_41 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_39)), !!r0_41) {
            r2_33 = g11720;
            r3_42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_33));
            if (r3_42) {
                z43 = r0_41 == r3_42;
                if (!z43) {
                    r3_42 = r0_41 << 24;
                }
                if (!z43) {
                    r12_44 = reinterpret_cast<int32_t>(r3_42) >> 24;
                }
                if (!z43) 
                    goto label_28; else 
                    goto addr_11614_29;
            }
            addr_11658_30:
            r1_45 = g1171c;
            r0_46 = strcspn(r6_40, r1_45);
            r4_32 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r6_40) + reinterpret_cast<uint32_t>(r0_46));
            addr_11668_31:
            *reinterpret_cast<void***>(r4_32) = reinterpret_cast<void**>(0);
            ++r10_37;
            r7_47 = g11714;
            r5_48 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r10_37) << 2);
            r0_49 = realloc(*reinterpret_cast<void***>(r7_47), r5_48);
            if (!r0_49) 
                goto label_32;
            *reinterpret_cast<void***>(r7_47) = r0_49;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r5_48) + reinterpret_cast<unsigned char>(r0_49) + 0xfffffffc) = r6_40;
            z50 = r4_32 == r8_35;
            if (!z50) {
                ++r4_32;
            }
            if (z50) 
                goto addr_116a8_36;
            continue;
            label_28:
            do {
                r3_51 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_33 + 1));
                if (!r3_51) 
                    break;
                ++r2_33;
            } while (r12_44 != reinterpret_cast<int32_t>(r3_51 << 24) >> 24);
            goto label_41;
            goto addr_11658_30;
            label_41:
            addr_11638_43:
            r6_40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_40) + 1);
            r0_52 = strchr(r6_40, reinterpret_cast<int32_t>(r0_41 << 24) >> 24);
            r4_32 = r0_52;
            if (!r4_32) {
                r4_32 = r8_35;
            }
            goto addr_11668_31;
            addr_11614_29:
            goto addr_11638_43;
        }
    }
    addr_116a8_36:
    r3_53 = g11718;
    *reinterpret_cast<void***>(r3_53) = r10_37;
    if (reinterpret_cast<signed char>(r10_37) >= reinterpret_cast<signed char>(0)) {
        goto addr_116e4_16;
    } else {
        addr_116b8_48:
        TerminateProcess(66, -1, r2_33, r3_53, v54, v55, v56, v57, v58);
    }
    while (1) {
    }
    label_32:
    r2_33 = reinterpret_cast<void**>(0xffffffff);
    r3_53 = g11718;
    *reinterpret_cast<void***>(r3_53) = reinterpret_cast<void**>(0xffffffff);
    goto addr_116b8_48;
    addr_1154c_11:
    TerminateProcess(r0_23 + 66, -1, 0x200, r3_24, v59, v60, v61, v62, v63);
    while (1) {
    }
}

int32_t* g1172c = reinterpret_cast<int32_t*>(0x15084);

void _fpreset() {
    int32_t* r12_1;

    r12_1 = g1172c;
    goto *r12_1;
}

int32_t* g11738 = reinterpret_cast<int32_t*>(0x1507c);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    int32_t* r12_10;

    r12_10 = g11738;
    goto *r12_10;
}

int32_t* g11744 = reinterpret_cast<int32_t*>(0x150a0);

void scanf(int32_t r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g11744;
    goto *r12_3;
}

int32_t* g11750 = reinterpret_cast<int32_t*>(0x15098);

void puts(void* r0) {
    int32_t* r12_2;

    r12_2 = g11750;
    goto *r12_2;
}

int32_t* g1175c = reinterpret_cast<int32_t*>(0x15094);

void printf(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g1175c;
    goto *r12_2;
}

int32_t* g11768 = reinterpret_cast<int32_t*>(0x150ac);

void* strlen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11768;
    goto *r12_4;
}

int32_t* g11774 = reinterpret_cast<int32_t*>(0x15090);

void** malloc(uint32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11774;
    goto *r12_4;
}

int32_t* g11780 = reinterpret_cast<int32_t*>(0x1508c);

void free() {
    int32_t* r12_1;

    r12_1 = g11780;
    goto *r12_1;
}

int32_t* g1178c = reinterpret_cast<int32_t*>(0x15088);

void fflush(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g1178c;
    goto *r12_2;
}

int32_t* g11798 = reinterpret_cast<int32_t*>(0x1509c);

void** realloc(void** r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g11798;
    goto *r12_3;
}

int32_t* g117a4 = reinterpret_cast<int32_t*>(0x15080);

void _fcloseall() {
    int32_t* r12_1;

    r12_1 = g117a4;
    goto *r12_1;
}

int32_t* g117b0 = reinterpret_cast<int32_t*>(0x150b0);

void* strspn(void** r0, int32_t r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g117b0;
    goto *r12_4;
}

int32_t* g117bc = reinterpret_cast<int32_t*>(0x150a4);

void** strchr(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g117bc;
    goto *r12_3;
}

int32_t* g117c8 = reinterpret_cast<int32_t*>(0x150a8);

void* strcspn(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g117c8;
    goto *r12_3;
}

int32_t* g117d4 = reinterpret_cast<int32_t*>(0x15078);

int32_t GetModuleFileNameW() {
    int32_t* r12_1;

    r12_1 = g117d4;
    goto *r12_1;
}

int32_t* g117e0 = reinterpret_cast<int32_t*>(0x150b4);

void** wcslen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g117e0;
    goto *r12_4;
}

int32_t* g117ec = reinterpret_cast<int32_t*>(0x150b8);

void wcstombs(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g117ec;
    goto *r12_4;
}

void*** g113f0 = reinterpret_cast<void***>(0x14000);

void*** g113f4 = reinterpret_cast<void***>(0x14004);

void** __atexit_init() {
    void** r1_1;
    void** r2_2;
    void** r0_3;
    void*** r3_4;
    void*** r3_5;

    r0_3 = malloc(0x80, r1_1, r2_2);
    r3_4 = g113f0;
    *r3_4 = r0_3;
    if (!r0_3) {
        return r0_3;
    } else {
        *reinterpret_cast<void***>(r0_3) = reinterpret_cast<void**>(0);
        r3_5 = g113f4;
        *r3_5 = r0_3;
        return 1;
    }
}

/* .text */
void text(void** r0) {
    void* r11_2;
    void** v3;
    void* v4;
    void** r1_5;
    void** r2_6;
    void* r0_7;

    r11_2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = r0;
    v4 = reinterpret_cast<void*>(0);
    while (r0_7 = strlen(v3, r1_5, r2_6), reinterpret_cast<uint32_t>(v4) >= reinterpret_cast<uint32_t>(r0_7)) {
        r1_5 = reinterpret_cast<void**>((static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v4) + reinterpret_cast<unsigned char>(v3))) & 0xff) - 3 & 0xff);
        r2_6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_2) - 16 + reinterpret_cast<uint32_t>(v4) + 0xffffff98);
        *reinterpret_cast<void***>(r2_6) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r1_5)));
        v4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v4) + 1);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r11_2) - 16 + reinterpret_cast<uint32_t>(v4) - 0x68) = 0;
    puts(reinterpret_cast<int32_t>(r11_2) - 0x78);
    return;
}

void** g1114c = reinterpret_cast<void**>(20);

void** g11148 = reinterpret_cast<void**>(0);

void test(int32_t r0, int32_t r1) {
    void** r0_3;
    void** r0_4;

    if (r0 == r1) {
        r0_3 = g1114c;
        text(r0_3);
    } else {
        r0_4 = g11148;
        text(r0_4);
    }
    return;
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
            goto addr_11288_7;
    }
    addr_112cc_8:
    r4_4 = reinterpret_cast<void**>(0);
    addr_112d0_9:
    return r4_4;
    label_6:
    goto addr_112cc_8;
    addr_11288_7:
    if (!*r2) {
        goto addr_112cc_8;
    } else {
        r3_7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*r2) - reinterpret_cast<unsigned char>(*r6_5)) >> 2);
        r1_8 = reinterpret_cast<void*>(r3_7 + 1);
        if (reinterpret_cast<int32_t>(r1_8) <= reinterpret_cast<int32_t>(0)) {
            goto addr_112cc_8;
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
                goto addr_112cc_8;
        }
    }
    goto addr_112d0_9;
}

void ___crt_xt_end__(int32_t r0, int32_t r1, void** r2, void** r3) {
    void** r0_5;
    int32_t r4_6;
    int32_t r5_7;
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

void fun_11714(int32_t r0, int32_t r1) {
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

void fun_117f4(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_117fc(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_111d4(int32_t r0, int32_t r1) {
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

int32_t* g11230 = reinterpret_cast<int32_t*>(0x14000);

int32_t fun_11218(int32_t r0, int32_t r1) {
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
    r3_6 = g11230;
    return *r3_6;
}

void fun_11230(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void _exit(int32_t r0) {
    void** r2_2;
    void** r3_3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;

    closeall_streams();
    TerminateProcess(66, r0, r2_2, r3_3, v4, v5, v6, v7, v8);
    while (1) {
    }
}

void*** g112ec = reinterpret_cast<void***>(0x14000);

void**** g112f0 = reinterpret_cast<void****>(0x14004);

void** _onexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;

    r1_2 = g112ec;
    r2_3 = g112f0;
    r0_4 = __dllonexit(r0, r1_2, r2_3);
    return r0_4;
}

void fun_11314(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void exit(int32_t r0) {
    void** r2_2;
    void** r3_3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;

    _cexit();
    TerminateProcess(66, r0, r2_2, r3_3, v4, v5, v6, v7, v8);
    while (1) {
    }
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s3** g11438 = reinterpret_cast<struct s3**>(0x12000);

void fun_113f0(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    struct s3** r3_5;
    int32_t r3_6;
    struct s3** r4_7;
    struct s3* r2_8;

    if (z3) {
    }
    if (z4) {
    }
    r3_5 = g11438;
    r3_6 = (*r3_5)->f0;
    if (!r3_6) {
        return;
    } else {
        r4_7 = g11438;
        while (r3_6(), r2_8 = *r4_7, *r4_7 = reinterpret_cast<struct s3*>(&r2_8->f4), r3_6 = r2_8->f4, !!r3_6) {
        }
        return;
    }
}

void fun_11438(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_1149c(int32_t r0, int64_t* r1) {
    int64_t v2;
    int1_t z3;
    int1_t z4;

    *reinterpret_cast<int64_t**>(&v2) = r1;
    if (z3) {
        **reinterpret_cast<int64_t**>(&v2) = v2;
        *reinterpret_cast<int64_t**>(&v2) = reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int64_t**>(&v2)) - r0);
    }
    if (!z4) 
        goto "???";
    **reinterpret_cast<int64_t**>(&v2) = v2;
}

void fun_114c8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1172c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11738(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11744(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11750(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_1175c(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11768() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11774(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11780() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1178c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11798(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_117a4(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_117b0(int32_t r0, int16_t* r1) {
    int1_t z3;
    int32_t r5_4;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r5_4);
}

void fun_117bc() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_117c8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_117d4(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_117e0() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_117ec() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (z1) {
        *r1_2 = static_cast<int16_t>(r5_3);
    }
}

void fun_11148(int32_t r0, int32_t r1) {
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

void fun_112ec(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_1138c(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}
