
void** __gccmain(void** r0);

int32_t g11160 = 0x13028;

void puts(int32_t r0, void** r1);

int32_t g11164 = 0x13040;

void printf(int32_t r0);

int32_t g11168 = 0x1304c;

void scanf(int32_t r0, void** r1);

/* .text */
void text(void** r0, void** r1);

int32_t main(void** r0, void** r1) {
    void* r11_3;
    int32_t r0_4;
    int32_t r0_5;
    int32_t r0_6;
    void** r1_7;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __gccmain(r0);
    r0_4 = g11160;
    puts(r0_4, r1);
    r0_5 = g11164;
    printf(r0_5);
    r0_6 = g11168;
    r1_7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_3) - 0x70);
    scanf(r0_6, r1_7);
    text(reinterpret_cast<int32_t>(r11_3) - 0x70, r1_7);
    return 0;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0* g111a4 = reinterpret_cast<struct s0*>(0x1305c);

struct s0* g111a8 = reinterpret_cast<struct s0*>(0x1305c);

int32_t g111ac = 0x10000;

/* .text */
void text() {
    struct s0* r0_1;
    struct s0* lr2;
    int32_t r12_3;

    r0_1 = g111a4;
    lr2 = g111a8;
    if (reinterpret_cast<uint32_t>(r0_1) < reinterpret_cast<uint32_t>(lr2)) {
        return;
    } else {
        r12_3 = g111ac;
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

void*** g112a0 = reinterpret_cast<void***>(0x14000);

void**** g112a4 = reinterpret_cast<void****>(0x14004);

void** __dllonexit(void** r0, void*** r1, void**** r2);

void** atexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;
    int1_t z5;

    r1_2 = g112a0;
    r2_3 = g112a4;
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

struct s1** g11318 = reinterpret_cast<struct s1**>(0x14000);

void** g1131c = reinterpret_cast<void**>(0x14004);

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

    r3_1 = g11318;
    if (*r3_1) {
        r3_2 = g1131c;
        if (reinterpret_cast<uint32_t>(*r3_1) > reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*r3_2) - 4)) {
            goto addr_112fc_5;
        } else {
            r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(*r3_2) - 8);
            r6_4 = g11318;
            while (1) {
                r5_5 = r4_3;
                z6 = r4_3->f4 == 0;
                if (!z6) {
                }
                if (!z6) 
                    goto label_10;
                r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(r4_3) - 4);
                if (reinterpret_cast<uint32_t>(*r6_4) > reinterpret_cast<uint32_t>(r5_5)) 
                    goto addr_112fc_5;
            }
        }
    }
    addr_1130c_13:
    fflush(0);
    return;
    addr_112fc_5:
    free();
    r3_7 = g11318;
    *r3_7 = reinterpret_cast<struct s1*>(0);
    goto addr_1130c_13;
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

struct s2* g11428 = reinterpret_cast<struct s2*>(0x11788);

void** g1142c = reinterpret_cast<void**>(0x84);

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

    r3_1 = g11428;
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
        r3_5 = g11428;
        r5_6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_5) + (r2_2 << 2));
        r4_7 = r2_2;
        while (--r5_6, *r5_6(), --r4_7, !!r4_7) {
        }
    }
    r0_8 = g1142c;
    r0_9 = atexit(r0_8);
    return r0_9;
}

int32_t* g11454 = reinterpret_cast<int32_t*>(0x14008);

void** __gccmain(void** r0) {
    int32_t* r2_2;
    void** r0_3;

    r2_2 = g11454;
    if (*r2_2) {
        return r0;
    } else {
        *r2_2 = *r2_2 + 1;
        r0_3 = __do_global_ctors();
        return r0_3;
    }
}

void** g1169c = reinterpret_cast<void**>(0);

int32_t GetModuleFileNameW();

void** wcslen(void** r0, void** r1, void** r2);

void** malloc(uint32_t r0, void** r1, void** r2);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void** a8, void* a9);

void** g116a0 = reinterpret_cast<void**>(16);

void wcstombs(void** r0, void** r1, void** r2);

void** g116a4 = reinterpret_cast<void**>(12);

void* strlen(void** r0, void** r1, void** r2);

int32_t g116a8 = 0x13050;

void* strspn(void** r0, int32_t r1, void** r2);

void** g116ac = reinterpret_cast<void**>(88);

void* strcspn(void* r0, int32_t r1);

void** realloc(void** r0, void* r1);

void** strchr(void* r0, int32_t r1);

/* .text */
int32_t text(int32_t r0, int32_t r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void** a8, void* a9) {
    void** sp10;
    void** r3_11;
    int32_t r0_12;
    int1_t z13;
    void** r6_14;
    void** r0_15;
    void** r0_16;
    void** r5_17;
    void** v18;
    int32_t v19;
    int32_t v20;
    void** v21;
    void* v22;
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
    void** v54;
    int32_t v55;
    int32_t v56;
    void** v57;
    void* v58;
    void** v59;
    int32_t v60;
    int32_t v61;
    void** v62;
    void* v63;

    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 0x400);
    r3_11 = g1169c;
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
    r3_24 = g116a0;
    *reinterpret_cast<void***>(r3_24) = r0_23;
    if (!r0_23) 
        goto addr_114d8_11;
    *reinterpret_cast<void***>(r0_23) = r5_17;
    r0_25 = wcslen(sp10, sp10, 0x200);
    wcstombs(r5_17, sp10, r0_25 + 1);
    r2_26 = g116a4;
    *reinterpret_cast<void***>(r2_26) = *reinterpret_cast<void***>(r2_26) + 1;
    if (reinterpret_cast<signed char>(r6_14) > reinterpret_cast<signed char>(0)) 
        goto addr_11520_14;
    addr_11670_16:
    r0_27 = g116a4;
    r1_28 = g116a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_28)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_27)) << 2) = 0;
    r0_29 = main(*reinterpret_cast<void***>(r0_27), *reinterpret_cast<void***>(r1_28));
    return r0_29;
    addr_11520_14:
    r3_30 = g116a0;
    r0_31 = strlen(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_30)), sp10, r2_26);
    r4_32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_30))) + reinterpret_cast<uint32_t>(r0_31) + 1);
    r2_33 = r6_14 + 1;
    wcstombs(r4_32, r2, r2_33);
    r0_34 = strlen(r4_32, r2, r2_33);
    r8_35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_34));
    if (!r4_32) {
        r3_36 = g116a4;
        *reinterpret_cast<void***>(r3_36) = reinterpret_cast<void**>(1);
        goto addr_11670_16;
    } else {
        r10_37 = reinterpret_cast<void**>(1);
        while (r1_38 = g116a8, r0_39 = strspn(r4_32, r1_38, r2_33), r6_40 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_39)), r0_41 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_39)), !!r0_41) {
            r2_33 = g116ac;
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
                    goto addr_115a0_29;
            }
            addr_115e4_30:
            r1_45 = g116a8;
            r0_46 = strcspn(r6_40, r1_45);
            r4_32 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r6_40) + reinterpret_cast<uint32_t>(r0_46));
            addr_115f4_31:
            *reinterpret_cast<void***>(r4_32) = reinterpret_cast<void**>(0);
            ++r10_37;
            r7_47 = g116a0;
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
                goto addr_11634_36;
            continue;
            label_28:
            do {
                r3_51 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_33 + 1));
                if (!r3_51) 
                    break;
                ++r2_33;
            } while (r12_44 != reinterpret_cast<int32_t>(r3_51 << 24) >> 24);
            goto label_41;
            goto addr_115e4_30;
            label_41:
            addr_115c4_43:
            r6_40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_40) + 1);
            r0_52 = strchr(r6_40, reinterpret_cast<int32_t>(r0_41 << 24) >> 24);
            r4_32 = r0_52;
            if (!r4_32) {
                r4_32 = r8_35;
            }
            goto addr_115f4_31;
            addr_115a0_29:
            goto addr_115c4_43;
        }
    }
    addr_11634_36:
    r3_53 = g116a4;
    *reinterpret_cast<void***>(r3_53) = r10_37;
    if (reinterpret_cast<signed char>(r10_37) >= reinterpret_cast<signed char>(0)) {
        goto addr_11670_16;
    } else {
        addr_11644_48:
        TerminateProcess(66, -1, r2_33, r3_53, v54, v55, v56, v57, v58);
    }
    while (1) {
    }
    label_32:
    r2_33 = reinterpret_cast<void**>(0xffffffff);
    r3_53 = g116a4;
    *reinterpret_cast<void***>(r3_53) = reinterpret_cast<void**>(0xffffffff);
    goto addr_11644_48;
    addr_114d8_11:
    TerminateProcess(r0_23 + 66, -1, 0x200, r3_24, v59, v60, v61, v62, v63);
    while (1) {
    }
}

int32_t* g116b8 = reinterpret_cast<int32_t*>(0x15088);

void _fpreset() {
    int32_t* r12_1;

    r12_1 = g116b8;
    goto *r12_1;
}

int32_t* g116c4 = reinterpret_cast<int32_t*>(0x15080);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void** a8, void* a9) {
    int32_t* r12_10;

    r12_10 = g116c4;
    goto *r12_10;
}

int32_t* g116d0 = reinterpret_cast<int32_t*>(0x150a4);

void scanf(int32_t r0, void** r1) {
    int32_t* r12_3;

    r12_3 = g116d0;
    goto *r12_3;
}

int32_t* g116dc = reinterpret_cast<int32_t*>(0x1509c);

void puts(int32_t r0, void** r1) {
    int32_t* r12_3;

    r12_3 = g116dc;
    goto *r12_3;
}

int32_t* g116e8 = reinterpret_cast<int32_t*>(0x15098);

void printf(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g116e8;
    goto *r12_2;
}

int32_t* g116f4 = reinterpret_cast<int32_t*>(0x150a8);

void sscanf(void* r0, void** r1, void* r2) {
    int32_t* r12_4;

    r12_4 = g116f4;
    goto *r12_4;
}

int32_t* g11700 = reinterpret_cast<int32_t*>(0x150b4);

void* strlen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11700;
    goto *r12_4;
}

int32_t* g1170c = reinterpret_cast<int32_t*>(0x15094);

void** malloc(uint32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g1170c;
    goto *r12_4;
}

int32_t* g11718 = reinterpret_cast<int32_t*>(0x15090);

void free() {
    int32_t* r12_1;

    r12_1 = g11718;
    goto *r12_1;
}

int32_t* g11724 = reinterpret_cast<int32_t*>(0x1508c);

void fflush(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11724;
    goto *r12_2;
}

int32_t* g11730 = reinterpret_cast<int32_t*>(0x150a0);

void** realloc(void** r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g11730;
    goto *r12_3;
}

int32_t* g1173c = reinterpret_cast<int32_t*>(0x15084);

void _fcloseall() {
    int32_t* r12_1;

    r12_1 = g1173c;
    goto *r12_1;
}

int32_t* g11748 = reinterpret_cast<int32_t*>(0x150b8);

void* strspn(void** r0, int32_t r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11748;
    goto *r12_4;
}

int32_t* g11754 = reinterpret_cast<int32_t*>(0x150ac);

void** strchr(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g11754;
    goto *r12_3;
}

int32_t* g11760 = reinterpret_cast<int32_t*>(0x150b0);

void* strcspn(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g11760;
    goto *r12_3;
}

int32_t* g1176c = reinterpret_cast<int32_t*>(0x1507c);

int32_t GetModuleFileNameW() {
    int32_t* r12_1;

    r12_1 = g1176c;
    goto *r12_1;
}

int32_t* g11778 = reinterpret_cast<int32_t*>(0x150bc);

void** wcslen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11778;
    goto *r12_4;
}

int32_t* g11784 = reinterpret_cast<int32_t*>(0x150c0);

void wcstombs(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11784;
    goto *r12_4;
}

void*** g1137c = reinterpret_cast<void***>(0x14000);

void*** g11380 = reinterpret_cast<void***>(0x14004);

void** __atexit_init() {
    void** r1_1;
    void** r2_2;
    void** r0_3;
    void*** r3_4;
    void*** r3_5;

    r0_3 = malloc(0x80, r1_1, r2_2);
    r3_4 = g1137c;
    *r3_4 = r0_3;
    if (!r0_3) {
        return r0_3;
    } else {
        *reinterpret_cast<void***>(r0_3) = reinterpret_cast<void**>(0);
        r3_5 = g11380;
        *r3_5 = r0_3;
        return 1;
    }
}

void** g11104 = reinterpret_cast<void**>(0);

int32_t g11108 = 0x13004;

void exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void** a8, void* a9);

int32_t g1110c = 0x13014;

/* .text */
void text(void** r0, void** r1) {
    void* r11_3;
    void** v4;
    void** v5;
    void* v6;
    void** r2_7;
    void* r0_8;
    int32_t v9;
    void** v10;
    int32_t r0_11;
    int32_t v12;
    int32_t r0_13;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = r0;
    v5 = reinterpret_cast<void**>(0);
    v6 = reinterpret_cast<void*>(0);
    while (r0_8 = strlen(v4, r1, r2_7), reinterpret_cast<uint32_t>(v6) >= reinterpret_cast<uint32_t>(r0_8)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v9) + 3) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(v6) + reinterpret_cast<unsigned char>(v4))));
        r1 = g11104;
        sscanf(reinterpret_cast<int32_t>(r11_3) - 29, r1, reinterpret_cast<int32_t>(r11_3) - 28);
        r2_7 = v10;
        v5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v5) + reinterpret_cast<unsigned char>(r2_7));
        if (reinterpret_cast<int1_t>(v5 == 15)) {
            r0_11 = g11108;
            puts(r0_11, r1);
            exit(0, r1, r2_7, v5, v4, v9, v12, v5, v6);
        }
        v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v6) + 1);
    }
    r0_13 = g1110c;
    puts(r0_13, r1);
    return;
}

void exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void** a8, void* a9) {
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
            goto addr_11214_7;
    }
    addr_11258_8:
    r4_4 = reinterpret_cast<void**>(0);
    addr_1125c_9:
    return r4_4;
    label_6:
    goto addr_11258_8;
    addr_11214_7:
    if (!*r2) {
        goto addr_11258_8;
    } else {
        r3_7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*r2) - reinterpret_cast<unsigned char>(*r6_5)) >> 2);
        r1_8 = reinterpret_cast<void*>(r3_7 + 1);
        if (reinterpret_cast<int32_t>(r1_8) <= reinterpret_cast<int32_t>(0)) {
            goto addr_11258_8;
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
                goto addr_11258_8;
        }
    }
    goto addr_1125c_9;
}

void ___crt_xt_end__(int32_t r0, int32_t r1, void** r2, void** r3) {
    void** r0_5;
    void** r4_6;
    int32_t r5_7;
    int32_t r6_8;
    void** r7_9;
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

void fun_116a0(int32_t r0, int32_t r1) {
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

void fun_1178c(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_11794(int32_t r0) {
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

void fun_11104(int32_t r0, int32_t r1) {
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

void fun_11160(int32_t r0, int32_t r1) {
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

int32_t* g111bc = reinterpret_cast<int32_t*>(0x14000);

int32_t fun_111a4(int32_t r0, int32_t r1) {
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
    r3_6 = g111bc;
    return *r3_6;
}

void fun_111bc(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void _exit(int32_t r0) {
    void** r2_2;
    void** r3_3;
    void** v4;
    int32_t v5;
    int32_t v6;
    void** v7;
    void* v8;

    closeall_streams();
    TerminateProcess(66, r0, r2_2, r3_3, v4, v5, v6, v7, v8);
    while (1) {
    }
}

void*** g11278 = reinterpret_cast<void***>(0x14000);

void**** g1127c = reinterpret_cast<void****>(0x14004);

void** _onexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;

    r1_2 = g11278;
    r2_3 = g1127c;
    r0_4 = __dllonexit(r0, r1_2, r2_3);
    return r0_4;
}

void fun_112a0(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s3** g113c4 = reinterpret_cast<struct s3**>(0x12000);

void fun_1137c(int32_t r0, int32_t r1) {
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
    r3_5 = g113c4;
    r3_6 = (*r3_5)->f0;
    if (!r3_6) {
        return;
    } else {
        r4_7 = g113c4;
        while (r3_6(), r2_8 = *r4_7, *r4_7 = reinterpret_cast<struct s3*>(&r2_8->f4), r3_6 = r2_8->f4, !!r3_6) {
        }
        return;
    }
}

void fun_113c4(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11428() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

void fun_11454() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_116b8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_116c4(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_116d0() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_116dc(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_116e8(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_116f4() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11700() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_1170c(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11718(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11724() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11730(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_1173c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11748() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_11754() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11760(int32_t r0, int16_t* r1) {
    int1_t z3;
    int32_t r5_4;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r5_4);
}

void fun_1176c(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11778() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_11784(int32_t r0, int32_t r1) {
    int1_t z3;

    if (z3) {
    }
}

void _c_exit() {
    closeall_streams();
    return;
}

void fun_11278(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_11318(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}
