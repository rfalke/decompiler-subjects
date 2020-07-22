
void* strlen(void** r0, void** r1, void** r2);

void** g11154 = reinterpret_cast<void**>(0);

void sscanf(void** r0, void** r1, void** r2);

/* .text */
void text(void** r0, void** r1);

int32_t g11158 = 0x13014;

void puts(int32_t r0, void** r1, void** r2);

void check(void** r0, void** r1) {
    void* r11_3;
    void** v4;
    uint32_t v5;
    void* v6;
    void** r2_7;
    void* r0_8;
    void** v9;
    int32_t r0_10;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = r0;
    v5 = 0;
    v6 = reinterpret_cast<void*>(0);
    while (r0_8 = strlen(v4, r1, r2_7), reinterpret_cast<uint32_t>(v6) >= reinterpret_cast<uint32_t>(r0_8)) {
        r1 = g11154;
        sscanf(reinterpret_cast<int32_t>(r11_3) - 29, r1, reinterpret_cast<int32_t>(r11_3) - 28);
        r2_7 = v9;
        v5 = v5 + reinterpret_cast<unsigned char>(r2_7);
        if (v5 == 16) {
            text(v4, r1);
        }
        v6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v6) + 1);
    }
    r0_10 = g11158;
    puts(r0_10, r1, r2_7);
    return;
}

void** __gccmain(void** r0);

int32_t g111ac = 0x13028;

int32_t g111b0 = 0x13040;

void printf(int32_t r0);

int32_t g111b4 = 0x1304c;

void scanf(int32_t r0, void** r1);

int32_t main(void** r0, void** r1, void** r2) {
    void* r11_4;
    int32_t r0_5;
    int32_t r0_6;
    int32_t r0_7;
    void** r1_8;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __gccmain(r0);
    r0_5 = g111ac;
    puts(r0_5, r1, r2);
    r0_6 = g111b0;
    printf(r0_6);
    r0_7 = g111b4;
    r1_8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_4) - 0x70);
    scanf(r0_7, r1_8);
    check(reinterpret_cast<int32_t>(r11_4) - 0x70, r1_8);
    return 0;
}

struct s0 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s0* g111f0 = reinterpret_cast<struct s0*>(0x1305c);

struct s0* g111f4 = reinterpret_cast<struct s0*>(0x1305c);

int32_t g111f8 = 0x10000;

/* .text */
void text() {
    struct s0* r0_1;
    struct s0* lr2;
    int32_t r12_3;

    r0_1 = g111f0;
    lr2 = g111f4;
    if (reinterpret_cast<uint32_t>(r0_1) < reinterpret_cast<uint32_t>(lr2)) {
        return;
    } else {
        r12_3 = g111f8;
        while (++r0_1, *reinterpret_cast<int32_t*>(r0_1->0x4 + r12_3) = *reinterpret_cast<int32_t*>(r0_1->0x4 + r12_3) + r0_1->0x0, reinterpret_cast<uint32_t>(r0_1) >= reinterpret_cast<uint32_t>(lr2)) {
        }
        return;
    }
}

void _fcloseall();

void closeall_streams() {
    _fcloseall();
    return;
}

void*** g112ec = reinterpret_cast<void***>(0x14000);

void**** g112f0 = reinterpret_cast<void****>(0x14004);

void** __dllonexit(void** r0, void*** r1, void**** r2);

void** atexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;
    int1_t z5;

    r1_2 = g112ec;
    r2_3 = g112f0;
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
    int32_t 0x4;
};

struct s1** g11364 = reinterpret_cast<struct s1**>(0x14000);

void** g11368 = reinterpret_cast<void**>(0x14004);

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

    r3_1 = g11364;
    if (*r3_1) {
        r3_2 = g11368;
        if (reinterpret_cast<uint32_t>(*r3_1) > reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*r3_2) - 4)) {
            goto addr_11348_5;
        } else {
            r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(*r3_2) - 8);
            r6_4 = g11364;
            while (1) {
                r5_5 = r4_3;
                z6 = r4_3->0x4 == 0;
                if (!z6) {
                }
                if (!z6) 
                    goto label_10;
                r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(r4_3) - 4);
                if (reinterpret_cast<uint32_t>(*r6_4) > reinterpret_cast<uint32_t>(r5_5)) 
                    goto addr_11348_5;
            }
        }
    }
    addr_11358_13:
    fflush(0);
    return;
    addr_11348_5:
    free();
    r3_7 = g11364;
    *r3_7 = reinterpret_cast<struct s1*>(0);
    goto addr_11358_13;
    label_10:
    goto r4_3->0x4;
}

void _cexit() {
    __dll_exit();
    closeall_streams();
    return;
}

struct s2 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s2* g11474 = reinterpret_cast<struct s2*>(0x117d4);

void** g11478 = reinterpret_cast<void**>(0xd0);

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

    r3_1 = g11474;
    r2_2 = r3_1->0x0;
    if (r2_2 == -1) {
        r0_3 = r3_1;
        ++r2_2;
        while (1) {
            r0_3 = reinterpret_cast<struct s2*>(&r0_3->0x4);
            z4 = r0_3->0x4 == 0;
            if (!z4) {
                ++r2_2;
            }
            if (z4) 
                break;
        }
    }
    if (r2_2) {
        r3_5 = g11474;
        r5_6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_5) + (r2_2 << 2));
        r4_7 = r2_2;
        while (--r5_6, *r5_6(), --r4_7, !!r4_7) {
        }
    }
    r0_8 = g11478;
    r0_9 = atexit(r0_8);
    return r0_9;
}

int32_t* g114a0 = reinterpret_cast<int32_t*>(0x14008);

void** __gccmain(void** r0) {
    int32_t* r2_2;
    void** r0_3;

    r2_2 = g114a0;
    if (*r2_2) {
        return r0;
    } else {
        *r2_2 = *r2_2 + 1;
        r0_3 = __do_global_ctors();
        return r0_3;
    }
}

void** g116e8 = reinterpret_cast<void**>(0);

int32_t GetModuleFileNameW();

void** wcslen(void** r0, void** r1, void** r2);

void** malloc(uint32_t r0, void** r1, void** r2);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void* a8, int32_t a9);

void** g116ec = reinterpret_cast<void**>(16);

void wcstombs(void** r0, void** r1, void** r2);

void** g116f0 = reinterpret_cast<void**>(12);

int32_t g116f4 = 0x13050;

void* strspn(void** r0, int32_t r1, void** r2);

void** g116f8 = reinterpret_cast<void**>(88);

void* strcspn(void* r0, int32_t r1);

void** realloc(void** r0, void* r1);

void** strchr(void* r0, int32_t r1);

/* .text */
int32_t text(int32_t r0, int32_t r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void* a8, int32_t a9) {
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
    void* v21;
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
    int32_t v56;
    int32_t v57;
    void* v58;
    int32_t v59;
    void** v60;
    int32_t v61;
    int32_t v62;
    void* v63;
    int32_t v64;

    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 0x400);
    r3_11 = g116e8;
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
    r3_24 = g116ec;
    *reinterpret_cast<void***>(r3_24) = r0_23;
    if (!r0_23) 
        goto addr_11524_11;
    *reinterpret_cast<void***>(r0_23) = r5_17;
    r0_25 = wcslen(sp10, sp10, 0x200);
    wcstombs(r5_17, sp10, r0_25 + 1);
    r2_26 = g116f0;
    *reinterpret_cast<void***>(r2_26) = *reinterpret_cast<void***>(r2_26) + 1;
    if (reinterpret_cast<signed char>(r6_14) > reinterpret_cast<signed char>(0)) 
        goto addr_1156c_14;
    addr_116bc_16:
    r0_27 = g116f0;
    r1_28 = g116ec;
    r2_29 = *reinterpret_cast<void***>(r1_28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r2_29) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_27)) << 2) = 0;
    r0_30 = main(*reinterpret_cast<void***>(r0_27), *reinterpret_cast<void***>(r1_28), r2_29);
    return r0_30;
    addr_1156c_14:
    r3_31 = g116ec;
    r0_32 = strlen(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31)), sp10, r2_26);
    r4_33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_31))) + reinterpret_cast<uint32_t>(r0_32) + 1);
    r2_34 = r6_14 + 1;
    wcstombs(r4_33, r2, r2_34);
    r0_35 = strlen(r4_33, r2, r2_34);
    r8_36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_35));
    if (!r4_33) {
        r3_37 = g116f0;
        *reinterpret_cast<void***>(r3_37) = reinterpret_cast<void**>(1);
        goto addr_116bc_16;
    } else {
        r10_38 = reinterpret_cast<void**>(1);
        while (r1_39 = g116f4, r0_40 = strspn(r4_33, r1_39, r2_34), r6_41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), r0_42 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<uint32_t>(r0_40)), !!r0_42) {
            r2_34 = g116f8;
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
                    goto addr_115ec_29;
            }
            addr_11630_30:
            r1_46 = g116f4;
            r0_47 = strcspn(r6_41, r1_46);
            r4_33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r6_41) + reinterpret_cast<uint32_t>(r0_47));
            addr_11640_31:
            *reinterpret_cast<void***>(r4_33) = reinterpret_cast<void**>(0);
            ++r10_38;
            r7_48 = g116ec;
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
                goto addr_11680_36;
            continue;
            label_28:
            do {
                r3_52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_34 + 1));
                if (!r3_52) 
                    break;
                ++r2_34;
            } while (r12_45 != reinterpret_cast<int32_t>(r3_52 << 24) >> 24);
            goto label_41;
            goto addr_11630_30;
            label_41:
            addr_11610_43:
            r6_41 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_41) + 1);
            r0_53 = strchr(r6_41, reinterpret_cast<int32_t>(r0_42 << 24) >> 24);
            r4_33 = r0_53;
            if (!r4_33) {
                r4_33 = r8_36;
            }
            goto addr_11640_31;
            addr_115ec_29:
            goto addr_11610_43;
        }
    }
    addr_11680_36:
    r3_54 = g116f0;
    *reinterpret_cast<void***>(r3_54) = r10_38;
    if (reinterpret_cast<signed char>(r10_38) >= reinterpret_cast<signed char>(0)) {
        goto addr_116bc_16;
    } else {
        addr_11690_48:
        TerminateProcess(66, -1, r2_34, r3_54, v55, v56, v57, v58, v59);
    }
    while (1) {
    }
    label_32:
    r2_34 = reinterpret_cast<void**>(0xffffffff);
    r3_54 = g116f0;
    *reinterpret_cast<void***>(r3_54) = reinterpret_cast<void**>(0xffffffff);
    goto addr_11690_48;
    addr_11524_11:
    TerminateProcess(r0_23 + 66, -1, 0x200, r3_24, v60, v61, v62, v63, v64);
    while (1) {
    }
}

int32_t* g11704 = reinterpret_cast<int32_t*>(0x15088);

void _fpreset() {
    int32_t* r12_1;

    r12_1 = g11704;
    goto *r12_1;
}

int32_t* g11710 = reinterpret_cast<int32_t*>(0x15080);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void* a8, int32_t a9) {
    int32_t* r12_10;

    r12_10 = g11710;
    goto *r12_10;
}

int32_t* g1171c = reinterpret_cast<int32_t*>(0x150a4);

void scanf(int32_t r0, void** r1) {
    int32_t* r12_3;

    r12_3 = g1171c;
    goto *r12_3;
}

int32_t* g11728 = reinterpret_cast<int32_t*>(0x150b4);

void* strlen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11728;
    goto *r12_4;
}

int32_t* g11734 = reinterpret_cast<int32_t*>(0x1509c);

void puts(int32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11734;
    goto *r12_4;
}

int32_t* g11740 = reinterpret_cast<int32_t*>(0x15098);

void printf(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11740;
    goto *r12_2;
}

int32_t* g1174c = reinterpret_cast<int32_t*>(0x150a8);

void sscanf(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g1174c;
    goto *r12_4;
}

int32_t* g11758 = reinterpret_cast<int32_t*>(0x15094);

void** malloc(uint32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11758;
    goto *r12_4;
}

int32_t* g11764 = reinterpret_cast<int32_t*>(0x15090);

void free() {
    int32_t* r12_1;

    r12_1 = g11764;
    goto *r12_1;
}

int32_t* g11770 = reinterpret_cast<int32_t*>(0x1508c);

void fflush(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11770;
    goto *r12_2;
}

int32_t* g1177c = reinterpret_cast<int32_t*>(0x150a0);

void** realloc(void** r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g1177c;
    goto *r12_3;
}

int32_t* g11788 = reinterpret_cast<int32_t*>(0x15084);

void _fcloseall() {
    int32_t* r12_1;

    r12_1 = g11788;
    goto *r12_1;
}

int32_t* g11794 = reinterpret_cast<int32_t*>(0x150b8);

void* strspn(void** r0, int32_t r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11794;
    goto *r12_4;
}

int32_t* g117a0 = reinterpret_cast<int32_t*>(0x150ac);

void** strchr(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g117a0;
    goto *r12_3;
}

int32_t* g117ac = reinterpret_cast<int32_t*>(0x150b0);

void* strcspn(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g117ac;
    goto *r12_3;
}

int32_t* g117b8 = reinterpret_cast<int32_t*>(0x1507c);

int32_t GetModuleFileNameW() {
    int32_t* r12_1;

    r12_1 = g117b8;
    goto *r12_1;
}

int32_t* g117c4 = reinterpret_cast<int32_t*>(0x150bc);

void** wcslen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g117c4;
    goto *r12_4;
}

int32_t* g117d0 = reinterpret_cast<int32_t*>(0x150c0);

void wcstombs(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g117d0;
    goto *r12_4;
}

void*** g113c8 = reinterpret_cast<void***>(0x14000);

void*** g113cc = reinterpret_cast<void***>(0x14004);

void** __atexit_init() {
    void** r1_1;
    void** r2_2;
    void** r0_3;
    void*** r3_4;
    void*** r3_5;

    r0_3 = malloc(0x80, r1_1, r2_2);
    r3_4 = g113c8;
    *r3_4 = r0_3;
    if (!r0_3) {
        return r0_3;
    } else {
        *reinterpret_cast<void***>(r0_3) = reinterpret_cast<void**>(0);
        r3_5 = g113cc;
        *r3_5 = r0_3;
        return 1;
    }
}

void** g110a0 = reinterpret_cast<void**>(0);

int32_t g110a4 = 0x13004;

void exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void* a8, int32_t a9, int32_t a10);

/* .text */
void text(void** r0, void** r1) {
    void** r1_3;
    void** r2_4;
    void** r3_5;
    uint32_t v6;
    int32_t r0_7;
    int32_t v8;
    int32_t r11_9;

    r1_3 = g110a0;
    r2_4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    sscanf(r0, r1_3, r2_4);
    r3_5 = reinterpret_cast<void**>(v6 & 1);
    if (!r3_5) {
        r0_7 = g110a4;
        puts(r0_7, r1_3, r2_4);
        exit(0, r1_3, r2_4, r3_5, r0, v8, r11_9, __zero_stack_offset(), __return_address(), 0x1105c);
    }
    return;
}

void exit(int32_t r0, void** r1, void** r2, void** r3, void** a5, int32_t a6, int32_t a7, void* a8, int32_t a9, int32_t a10) {
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
            goto addr_11260_7;
    }
    addr_112a4_8:
    r4_4 = reinterpret_cast<void**>(0);
    addr_112a8_9:
    return r4_4;
    label_6:
    goto addr_112a4_8;
    addr_11260_7:
    if (!*r2) {
        goto addr_112a4_8;
    } else {
        r3_7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*r2) - reinterpret_cast<unsigned char>(*r6_5)) >> 2);
        r1_8 = reinterpret_cast<void*>(r3_7 + 1);
        if (reinterpret_cast<int32_t>(r1_8) <= reinterpret_cast<int32_t>(0)) {
            goto addr_112a4_8;
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
                goto addr_112a4_8;
        }
    }
    goto addr_112a8_9;
}

void ___crt_xt_end__(int32_t r0, int32_t r1, void** r2, void** r3) {
    void** r0_5;
    void** r4_6;
    int32_t r5_7;
    int32_t r6_8;
    void* r7_9;
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

void fun_116ec(int32_t r0, int32_t r1) {
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

void fun_117d8(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_117e0(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;

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
}

void fun_110a0(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_11154(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_111ac(int32_t r0, int32_t r1) {
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

int32_t* g11208 = reinterpret_cast<int32_t*>(0x14000);

int32_t fun_111f0(int32_t r0, int32_t r1) {
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
    r3_6 = g11208;
    return *r3_6;
}

void fun_11208(int32_t r0, int32_t r1) {
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
    void* v7;
    int32_t v8;

    closeall_streams();
    TerminateProcess(66, r0, r2_2, r3_3, v4, v5, v6, v7, v8);
    while (1) {
    }
}

void*** g112c4 = reinterpret_cast<void***>(0x14000);

void**** g112c8 = reinterpret_cast<void****>(0x14004);

void** _onexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;

    r1_2 = g112c4;
    r2_3 = g112c8;
    r0_4 = __dllonexit(r0, r1_2, r2_3);
    return r0_4;
}

void fun_112ec(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

struct s3 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s3** g11410 = reinterpret_cast<struct s3**>(0x12000);

void fun_113c8(int32_t r0, int32_t r1) {
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
    r3_5 = g11410;
    r3_6 = (*r3_5)->0x0;
    if (!r3_6) {
        return;
    } else {
        r4_7 = g11410;
        while (r3_6(), r2_8 = *r4_7, *r4_7 = reinterpret_cast<struct s3*>(&r2_8->0x4), r3_6 = r2_8->0x4, !!r3_6) {
        }
        return;
    }
}

void fun_11410(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11474() {
    int1_t z1;
    int1_t z2;

    if (z1) {
        __asm__("ldrdeq r1, r2, [r1], -r4");
    }
    if (!z2) 
        goto "???";
    __asm__("ldrdeq r1, r2, [r1], -r0");
}

void fun_114a0() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11704() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11710(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_1171c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11728() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_11734(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11740(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_1174c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11758(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11764(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11770() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1177c(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11788() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11794() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_117a0() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_117ac(int32_t r0, int16_t* r1) {
    int1_t z3;
    int32_t r5_4;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r5_4);
}

void fun_117b8(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_117c4() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_117d0(int32_t r0, int32_t r1) {
    int1_t z3;

    if (z3) {
    }
}

void _c_exit() {
    closeall_streams();
    return;
}

void fun_112c4(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_11364(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}
