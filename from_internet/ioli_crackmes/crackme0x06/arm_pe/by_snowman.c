
void** g11190 = reinterpret_cast<void**>(8);

void sscanf(void** r0, void** r1, void** r2);

/* .text */
int32_t text(int32_t r0, void** r1, void** r2);

int32_t g11194 = 0x1300c;

void puts(int32_t r0, void** r1, void** r2, ...);

void exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, int32_t a9);

void parell(void** r0, void** r1) {
    int32_t v3;
    int32_t r11_4;
    void** v5;
    void** v6;
    void** r1_7;
    void** r2_8;
    void** r1_9;
    int32_t v10;
    int32_t r0_11;
    int32_t v12;
    void** r3_13;
    uint32_t v14;
    int32_t r0_15;
    int32_t v16;

    v3 = r11_4;
    v5 = r0;
    v6 = r1;
    r1_7 = g11190;
    r2_8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 20);
    sscanf(v5, r1_7, r2_8);
    r1_9 = v6;
    r0_11 = text(v10, r1_9, r2_8);
    if (r0_11) {
        v12 = 0;
        while (v12 <= 9) {
            r3_13 = reinterpret_cast<void**>(v14 & 1);
            if (!r3_13) {
                r0_15 = g11194;
                puts(r0_15, r1_9, r2_8);
                exit(0, r1_9, r2_8, r3_13, v6, v5, v16, v12, v3);
            }
            ++v12;
        }
    }
    return;
}

void* strlen(void** r0, void** r1, void** r2);

void** g1124c = reinterpret_cast<void**>(8);

int32_t g11250 = 0x1301c;

void check(void** r0, void** r1) {
    void* r11_3;
    void** v4;
    void** v5;
    uint32_t v6;
    void* v7;
    void** r2_8;
    void* r0_9;
    void** v10;
    int32_t r0_11;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = r0;
    v5 = r1;
    v6 = 0;
    v7 = reinterpret_cast<void*>(0);
    while (r0_9 = strlen(v4, r1, r2_8), reinterpret_cast<uint32_t>(v7) >= reinterpret_cast<uint32_t>(r0_9)) {
        r1 = g1124c;
        sscanf(reinterpret_cast<int32_t>(r11_3) - 29, r1, reinterpret_cast<int32_t>(r11_3) - 28);
        r2_8 = v10;
        v6 = v6 + reinterpret_cast<unsigned char>(r2_8);
        if (v6 == 16) {
            r1 = v5;
            parell(v4, r1);
        }
        v7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v7) + 1);
    }
    r0_11 = g11250;
    puts(r0_11, r1, r2_8);
    return;
}

void** __gccmain(void** r0);

int32_t g112b4 = 0x13030;

int32_t g112b8 = 0x13048;

void printf(int32_t r0);

int32_t g112bc = 0x13054;

void scanf(int32_t r0, void* r1);

int32_t main(void** r0, void** r1, void** r2) {
    void* r11_4;
    int32_t r0_5;
    int32_t r0_6;
    int32_t r0_7;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __gccmain(r0);
    r0_5 = g112b4;
    puts(r0_5, r1, r2, r0_5, r1, r2);
    r0_6 = g112b8;
    printf(r0_6);
    r0_7 = g112bc;
    scanf(r0_7, reinterpret_cast<int32_t>(r11_4) - 0x70);
    check(reinterpret_cast<int32_t>(r11_4) - 0x70, r2);
    return 0;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0* g112f8 = reinterpret_cast<struct s0*>(0x13064);

struct s0* g112fc = reinterpret_cast<struct s0*>(0x13064);

int32_t g11300 = 0x10000;

/* .text */
void text() {
    struct s0* r0_1;
    struct s0* lr2;
    int32_t r12_3;

    r0_1 = g112f8;
    lr2 = g112fc;
    if (reinterpret_cast<uint32_t>(r0_1) < reinterpret_cast<uint32_t>(lr2)) {
        return;
    } else {
        r12_3 = g11300;
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

void*** g113f4 = reinterpret_cast<void***>(0x14000);

void**** g113f8 = reinterpret_cast<void****>(0x14004);

void** __dllonexit(void** r0, void*** r1, void**** r2);

void** atexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;
    int1_t z5;

    r1_2 = g113f4;
    r2_3 = g113f8;
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

struct s1** g1146c = reinterpret_cast<struct s1**>(0x14000);

void** g11470 = reinterpret_cast<void**>(0x14004);

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

    r3_1 = g1146c;
    if (*r3_1) {
        r3_2 = g11470;
        if (reinterpret_cast<uint32_t>(*r3_1) > reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*r3_2) - 4)) {
            goto addr_11450_5;
        } else {
            r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(*r3_2) - 8);
            r6_4 = g1146c;
            while (1) {
                r5_5 = r4_3;
                z6 = r4_3->f4 == 0;
                if (!z6) {
                }
                if (!z6) 
                    goto label_10;
                r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(r4_3) - 4);
                if (reinterpret_cast<uint32_t>(*r6_4) > reinterpret_cast<uint32_t>(r5_5)) 
                    goto addr_11450_5;
            }
        }
    }
    addr_11460_13:
    fflush(0);
    return;
    addr_11450_5:
    free();
    r3_7 = g1146c;
    *r3_7 = reinterpret_cast<struct s1*>(0);
    goto addr_11460_13;
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

struct s2* g1157c = reinterpret_cast<struct s2*>(0x118e8);

void** g11580 = reinterpret_cast<void**>(0xd8);

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

    r3_1 = g1157c;
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
        r3_5 = g1157c;
        r5_6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_5) + (r2_2 << 2));
        r4_7 = r2_2;
        while (--r5_6, *r5_6(), --r4_7, !!r4_7) {
        }
    }
    r0_8 = g11580;
    r0_9 = atexit(r0_8);
    return r0_9;
}

int32_t* g115a8 = reinterpret_cast<int32_t*>(0x14008);

void** __gccmain(void** r0) {
    int32_t* r2_2;
    void** r0_3;

    r2_2 = g115a8;
    if (*r2_2) {
        return r0;
    } else {
        *r2_2 = *r2_2 + 1;
        r0_3 = __do_global_ctors();
        return r0_3;
    }
}

void** g117f0 = reinterpret_cast<void**>(0);

int32_t GetModuleFileNameW();

void** wcslen(void** r0, void** r1, void** r2);

void** malloc(uint32_t r0, void** r1, void** r2);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, int32_t a9);

void** g117f4 = reinterpret_cast<void**>(16);

void wcstombs(void** r0, void** r1, void** r2);

void** g117f8 = reinterpret_cast<void**>(12);

int32_t g117fc = 0x13058;

void* strspn(void** r0, int32_t r1, void** r2);

void** g11800 = reinterpret_cast<void**>(96);

void* strcspn(void* r0, int32_t r1);

void** realloc(void** r0, void* r1);

void** strchr(void* r0, int32_t r1);

/* .text */
int32_t text(int32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, int32_t a9) {
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
    int32_t v22;
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
    int32_t v59;
    void** v60;
    void** v61;
    int32_t v62;
    int32_t v63;
    int32_t v64;

    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 0x400);
    r3_11 = g117f0;
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
    r3_24 = g117f4;
    *reinterpret_cast<void***>(r3_24) = r0_23;
    if (!r0_23) 
        goto addr_1162c_11;
    *reinterpret_cast<void***>(r0_23) = r5_17;
    r0_25 = wcslen(sp10, sp10, 0x200);
    wcstombs(r5_17, sp10, r0_25 + 1);
    r2_26 = g117f8;
    *reinterpret_cast<void***>(r2_26) = *reinterpret_cast<void***>(r2_26) + 1;
    if (reinterpret_cast<signed char>(r6_14) > reinterpret_cast<signed char>(0)) 
        goto addr_11674_14;
    addr_117c4_16:
    r0_27 = g117f8;
    r1_28 = g117f4;
    r2_29 = *reinterpret_cast<void***>(r1_28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r2_29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_27)) << 2) = 0;
    r0_30 = main(*reinterpret_cast<void***>(r0_27), *reinterpret_cast<void***>(r1_28), r2_29);
    return r0_30;
    addr_11674_14:
    r3_31 = g117f4;
    r0_32 = strlen(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31)), sp10, r2_26);
    r4_33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31))) + reinterpret_cast<uint32_t>(r0_32) + 1);
    r2_34 = r6_14 + 1;
    wcstombs(r4_33, r2, r2_34);
    r0_35 = strlen(r4_33, r2, r2_34);
    r8_36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_35));
    if (!r4_33) {
        r3_37 = g117f8;
        *reinterpret_cast<void***>(r3_37) = reinterpret_cast<void**>(1);
        goto addr_117c4_16;
    } else {
        r10_38 = reinterpret_cast<void**>(1);
        while (r1_39 = g117fc, r0_40 = strspn(r4_33, r1_39, r2_34), r6_41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), r0_42 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), !!r0_42) {
            r2_34 = g11800;
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
                    goto addr_116f4_29;
            }
            addr_11738_30:
            r1_46 = g117fc;
            r0_47 = strcspn(r6_41, r1_46);
            r4_33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r6_41) + reinterpret_cast<uint32_t>(r0_47));
            addr_11748_31:
            *reinterpret_cast<void***>(r4_33) = reinterpret_cast<void**>(0);
            ++r10_38;
            r7_48 = g117f4;
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
                goto addr_11788_36;
            continue;
            label_28:
            do {
                r3_52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_34 + 1));
                if (!r3_52) 
                    break;
                ++r2_34;
            } while (r12_45 != reinterpret_cast<int32_t>(r3_52 << 24) >> 24);
            goto label_41;
            goto addr_11738_30;
            label_41:
            addr_11718_43:
            r6_41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_41) + 1);
            r0_53 = strchr(r6_41, reinterpret_cast<int32_t>(r0_42 << 24) >> 24);
            r4_33 = r0_53;
            if (!r4_33) {
                r4_33 = r8_36;
            }
            goto addr_11748_31;
            addr_116f4_29:
            goto addr_11718_43;
        }
    }
    addr_11788_36:
    r3_54 = g117f8;
    *reinterpret_cast<void***>(r3_54) = r10_38;
    if (reinterpret_cast<signed char>(r10_38) >= reinterpret_cast<signed char>(0)) {
        goto addr_117c4_16;
    } else {
        addr_11798_48:
        TerminateProcess(66, -1, r2_34, r3_54, v55, v56, v57, v58, v59);
    }
    while (1) {
    }
    label_32:
    r2_34 = reinterpret_cast<void**>(0xffffffff);
    r3_54 = g117f8;
    *reinterpret_cast<void***>(r3_54) = reinterpret_cast<void**>(0xffffffff);
    goto addr_11798_48;
    addr_1162c_11:
    TerminateProcess(r0_23 + 66, -1, 0x200, r3_24, v60, v61, v62, v63, v64);
    while (1) {
    }
}

int32_t* g1180c = reinterpret_cast<int32_t*>(0x1508c);

void _fpreset() {
    int32_t* r12_1;

    r12_1 = g1180c;
    goto *r12_1;
}

int32_t* g11818 = reinterpret_cast<int32_t*>(0x15084);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, int32_t a9) {
    int32_t* r12_10;

    r12_10 = g11818;
    goto *r12_10;
}

int32_t* g11824 = reinterpret_cast<int32_t*>(0x150a8);

void scanf(int32_t r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g11824;
    goto *r12_3;
}

int32_t* g11830 = reinterpret_cast<int32_t*>(0x150b8);

void* strlen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11830;
    goto *r12_4;
}

int32_t* g1183c = reinterpret_cast<int32_t*>(0x150a0);

void puts(int32_t r0, void** r1, void** r2, ...) {
    int32_t* r12_4;

    r12_4 = g1183c;
    goto *r12_4;
}

int32_t* g11848 = reinterpret_cast<int32_t*>(0x1509c);

void printf(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11848;
    goto *r12_2;
}

int32_t* g11854 = reinterpret_cast<int32_t*>(0x150ac);

void sscanf(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11854;
    goto *r12_4;
}

int32_t* g11860 = reinterpret_cast<int32_t*>(0x150bc);

int32_t strncmp(void** r0, int32_t r1, int32_t r2) {
    int32_t* r12_4;

    r12_4 = g11860;
    goto *r12_4;
}

int32_t* g1186c = reinterpret_cast<int32_t*>(0x15098);

void** malloc(uint32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g1186c;
    goto *r12_4;
}

int32_t* g11878 = reinterpret_cast<int32_t*>(0x15094);

void free() {
    int32_t* r12_1;

    r12_1 = g11878;
    goto *r12_1;
}

int32_t* g11884 = reinterpret_cast<int32_t*>(0x15090);

void fflush(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11884;
    goto *r12_2;
}

int32_t* g11890 = reinterpret_cast<int32_t*>(0x150a4);

void** realloc(void** r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g11890;
    goto *r12_3;
}

int32_t* g1189c = reinterpret_cast<int32_t*>(0x15088);

void _fcloseall() {
    int32_t* r12_1;

    r12_1 = g1189c;
    goto *r12_1;
}

int32_t* g118a8 = reinterpret_cast<int32_t*>(0x150c0);

void* strspn(void** r0, int32_t r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g118a8;
    goto *r12_4;
}

int32_t* g118b4 = reinterpret_cast<int32_t*>(0x150b0);

void** strchr(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g118b4;
    goto *r12_3;
}

int32_t* g118c0 = reinterpret_cast<int32_t*>(0x150b4);

void* strcspn(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g118c0;
    goto *r12_3;
}

int32_t* g118cc = reinterpret_cast<int32_t*>(0x15080);

int32_t GetModuleFileNameW() {
    int32_t* r12_1;

    r12_1 = g118cc;
    goto *r12_1;
}

int32_t* g118d8 = reinterpret_cast<int32_t*>(0x150c4);

void** wcslen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g118d8;
    goto *r12_4;
}

int32_t* g118e4 = reinterpret_cast<int32_t*>(0x150c8);

void wcstombs(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g118e4;
    goto *r12_4;
}

void*** g114d0 = reinterpret_cast<void***>(0x14000);

void*** g114d4 = reinterpret_cast<void***>(0x14004);

void** __atexit_init() {
    void** r1_1;
    void** r2_2;
    void** r0_3;
    void*** r3_4;
    void*** r3_5;

    r0_3 = malloc(0x80, r1_1, r2_2);
    r3_4 = g114d0;
    *r3_4 = r0_3;
    if (!r0_3) {
        return r0_3;
    } else {
        *reinterpret_cast<void***>(r0_3) = reinterpret_cast<void**>(0);
        r3_5 = g114d4;
        *r3_5 = r0_3;
        return 1;
    }
}

int32_t g110f8 = 0x13000;

/* .text */
int32_t text(int32_t r0, void** r1, void** r2) {
    void** v4;
    int32_t v5;
    void** r2_6;
    int32_t r1_7;
    int32_t r0_8;
    int32_t v9;

    v4 = r1;
    v5 = 0;
    while (*reinterpret_cast<void***>((v5 << 2) + reinterpret_cast<unsigned char>(v4))) {
        r2_6 = *reinterpret_cast<void***>((v5 << 2) + reinterpret_cast<unsigned char>(v4));
        ++v5;
        r1_7 = g110f8;
        r0_8 = strncmp(r2_6, r1_7, 3);
        if (!r0_8) 
            goto addr_110b4_5;
    }
    v9 = 0;
    addr_110e8_8:
    return v9;
    addr_110b4_5:
    v9 = 1;
    goto addr_110e8_8;
}

void exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, int32_t a7, int32_t a8, int32_t a9) {
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
            goto addr_11368_7;
    }
    addr_113ac_8:
    r4_4 = reinterpret_cast<void**>(0);
    addr_113b0_9:
    return r4_4;
    label_6:
    goto addr_113ac_8;
    addr_11368_7:
    if (!*r2) {
        goto addr_113ac_8;
    } else {
        r3_7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*r2) - reinterpret_cast<unsigned char>(*r6_5)) >> 2);
        r1_8 = reinterpret_cast<void*>(r3_7 + 1);
        if (reinterpret_cast<int32_t>(r1_8) <= reinterpret_cast<int32_t>(0)) {
            goto addr_113ac_8;
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
                goto addr_113ac_8;
        }
    }
    goto addr_113b0_9;
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

void fun_117f4(int32_t r0, int32_t r1) {
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

void fun_118ec(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_118f4(int32_t r0) {
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
    int1_t z29;
    int1_t z30;
    int1_t z31;
    int1_t z32;
    int1_t z33;
    int1_t z34;
    int1_t z35;
    int1_t z36;
    int1_t z37;
    int1_t z38;
    int1_t z39;
    int1_t z40;
    int1_t z41;
    int1_t z42;
    int1_t z43;
    int1_t z44;
    int1_t z45;
    int1_t z46;
    int1_t z47;
    int1_t z48;
    int1_t z49;
    int1_t z50;
    int1_t z51;
    int1_t z52;
    int1_t z53;
    int1_t z54;
    int1_t z55;
    int1_t z56;
    int1_t z57;
    int1_t z58;
    int1_t z59;
    int1_t z60;
    int1_t z61;
    int1_t z62;
    int1_t z63;
    int1_t z64;
    int1_t z65;
    int1_t z66;
    int1_t z67;
    int1_t z68;

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
    if (z29) {
    }
    if (z30) {
    }
    if (z31) {
    }
    if (z32) {
    }
    if (z33) {
    }
    if (z34) {
    }
    if (z35) {
    }
    if (z36) {
    }
    if (z37) {
    }
    if (z38) {
    }
    if (z39) {
    }
    if (z40) {
    }
    if (z41) {
    }
    if (z42) {
    }
    if (z43) {
    }
    if (z44) {
    }
    if (z45) {
    }
    if (z46) {
    }
    if (z47) {
    }
    if (z48) {
    }
    if (z49) {
    }
    if (z50) {
    }
    if (z51) {
    }
    if (z52) {
    }
    if (z53) {
    }
    if (z54) {
    }
    if (z55) {
    }
    if (z56) {
    }
    if (z57) {
    }
    if (z58) {
    }
    if (z59) {
    }
    if (z60) {
    }
    if (z61) {
    }
    if (z62) {
    }
    if (z63) {
    }
    if (z64) {
    }
    if (z65) {
    }
    if (z66) {
    }
    if (z67) {
    }
    if (z68) {
    }
}

void fun_11190() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

void fun_1124c(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_112b4(int32_t r0, int32_t r1) {
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

int32_t* g11310 = reinterpret_cast<int32_t*>(0x14000);

int32_t fun_112f8(int32_t r0, int32_t r1) {
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
    r3_6 = g11310;
    return *r3_6;
}

void fun_11310(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void _exit(int32_t r0) {
    void** r2_2;
    void** r3_3;
    void** v4;
    void** v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;

    closeall_streams();
    TerminateProcess(66, r0, r2_2, r3_3, v4, v5, v6, v7, v8);
    while (1) {
    }
}

void*** g113cc = reinterpret_cast<void***>(0x14000);

void**** g113d0 = reinterpret_cast<void****>(0x14004);

void** _onexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;

    r1_2 = g113cc;
    r2_3 = g113d0;
    r0_4 = __dllonexit(r0, r1_2, r2_3);
    return r0_4;
}

void fun_113f4(int32_t r0, int32_t r1) {
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

struct s3** g11518 = reinterpret_cast<struct s3**>(0x12000);

void fun_114d0(int32_t r0, int32_t r1) {
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
    r3_5 = g11518;
    r3_6 = (*r3_5)->f0;
    if (!r3_6) {
        return;
    } else {
        r4_7 = g11518;
        while (r3_6(), r2_8 = *r4_7, *r4_7 = reinterpret_cast<struct s3*>(&r2_8->f4), r3_6 = r2_8->f4, !!r3_6) {
        }
        return;
    }
}

void fun_11518(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_1157c() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
    __asm__("ldrdeq r1, r2, [r1], -r8");
}

void fun_115a8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1180c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11818() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11824() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11830() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_1183c(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11848(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11854() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11860() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_1186c(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11878(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11884(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11890() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1189c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118a8(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_118b4(int32_t r0, int16_t* r1) {
    int1_t z3;
    int32_t r5_4;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r5_4);
}

void fun_118c0() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_118cc(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_118d8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_118e4() {
    int1_t z1;

    if (z1) {
    }
}

void fun_110f8(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void _c_exit() {
    closeall_streams();
    return;
}

void fun_113cc(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_1146c(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}
