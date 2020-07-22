
struct s0 {
    int32_t 0x0;
    int32_t 0x4;
};

struct s0* g11104 = reinterpret_cast<struct s0*>(0x13058);

struct s0* g11108 = reinterpret_cast<struct s0*>(0x13058);

int32_t g1110c = 0x10000;

/* .text */
void text() {
    struct s0* r0_1;
    struct s0* lr2;
    int32_t r12_3;

    r0_1 = g11104;
    lr2 = g11108;
    if (reinterpret_cast<uint32_t>(r0_1) < reinterpret_cast<uint32_t>(lr2)) {
        return;
    } else {
        r12_3 = g1110c;
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

void*** g11200 = reinterpret_cast<void***>(0x14000);

void**** g11204 = reinterpret_cast<void****>(0x14004);

void** __dllonexit(void** r0, void*** r1, void**** r2);

void** atexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;
    int1_t z5;

    r1_2 = g11200;
    r2_3 = g11204;
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

struct s1** g11278 = reinterpret_cast<struct s1**>(0x14000);

void** g1127c = reinterpret_cast<void**>(0x14004);

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

    r3_1 = g11278;
    if (*r3_1) {
        r3_2 = g1127c;
        if (reinterpret_cast<uint32_t>(*r3_1) > reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*r3_2) - 4)) {
            goto addr_1125c_5;
        } else {
            r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(*r3_2) - 8);
            r6_4 = g11278;
            while (1) {
                r5_5 = r4_3;
                z6 = r4_3->0x4 == 0;
                if (!z6) {
                }
                if (!z6) 
                    goto label_10;
                r4_3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(r4_3) - 4);
                if (reinterpret_cast<uint32_t>(*r6_4) > reinterpret_cast<uint32_t>(r5_5)) 
                    goto addr_1125c_5;
            }
        }
    }
    addr_1126c_13:
    fflush(0);
    return;
    addr_1125c_5:
    free();
    r3_7 = g11278;
    *r3_7 = reinterpret_cast<struct s1*>(0);
    goto addr_1126c_13;
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

struct s2* g11388 = reinterpret_cast<struct s2*>(0x116dc);

void** g1138c = reinterpret_cast<void**>(0xe4);

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

    r3_1 = g11388;
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
        r3_5 = g11388;
        r5_6 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_5) + (r2_2 << 2));
        r4_7 = r2_2;
        while (--r5_6, *r5_6(), --r4_7, !!r4_7) {
        }
    }
    r0_8 = g1138c;
    r0_9 = atexit(r0_8);
    return r0_9;
}

int32_t* g113b4 = reinterpret_cast<int32_t*>(0x14008);

void** __gccmain(void** r0) {
    int32_t* r2_2;
    void** r0_3;

    r2_2 = g113b4;
    if (*r2_2) {
        return r0;
    } else {
        *r2_2 = *r2_2 + 1;
        r0_3 = __do_global_ctors();
        return r0_3;
    }
}

void** g115fc = reinterpret_cast<void**>(0);

int32_t GetModuleFileNameW();

void** wcslen(void** r0, void** r1, void** r2);

void** malloc(uint32_t r0, void** r1, void** r2);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);

void** g11600 = reinterpret_cast<void**>(16);

void wcstombs(void** r0, void** r1, void** r2);

void** g11604 = reinterpret_cast<void**>(12);

/* .text */
int32_t text(void** r0, void** r1);

void* strlen(void** r0, void** r1, void** r2);

int32_t g11608 = 0x1304c;

void* strspn(void** r0, int32_t r1, void** r2);

void** g1160c = reinterpret_cast<void**>(84);

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
    r3_11 = g115fc;
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
    r3_24 = g11600;
    *reinterpret_cast<void***>(r3_24) = r0_23;
    if (!r0_23) 
        goto addr_11438_11;
    *reinterpret_cast<void***>(r0_23) = r5_17;
    r0_25 = wcslen(sp10, sp10, 0x200);
    wcstombs(r5_17, sp10, r0_25 + 1);
    r2_26 = g11604;
    *reinterpret_cast<void***>(r2_26) = *reinterpret_cast<void***>(r2_26) + 1;
    if (reinterpret_cast<signed char>(r6_14) > reinterpret_cast<signed char>(0)) 
        goto addr_11480_14;
    addr_115d0_16:
    r0_27 = g11604;
    r1_28 = g11600;
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_28)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_27)) << 2) = 0;
    r0_29 = text(*reinterpret_cast<void***>(r0_27), *reinterpret_cast<void***>(r1_28));
    return r0_29;
    addr_11480_14:
    r3_30 = g11600;
    r0_31 = strlen(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_30)), sp10, r2_26);
    r4_32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_30))) + reinterpret_cast<uint32_t>(r0_31) + 1);
    r2_33 = r6_14 + 1;
    wcstombs(r4_32, r2, r2_33);
    r0_34 = strlen(r4_32, r2, r2_33);
    r8_35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_34));
    if (!r4_32) {
        r3_36 = g11604;
        *reinterpret_cast<void***>(r3_36) = reinterpret_cast<void**>(1);
        goto addr_115d0_16;
    } else {
        r10_37 = reinterpret_cast<void**>(1);
        while (r1_38 = g11608, r0_39 = strspn(r4_32, r1_38, r2_33), r6_40 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_39)), r0_41 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_32) + reinterpret_cast<uint32_t>(r0_39)), !!r0_41) {
            r2_33 = g1160c;
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
                    goto addr_11500_29;
            }
            addr_11544_30:
            r1_45 = g11608;
            r0_46 = strcspn(r6_40, r1_45);
            r4_32 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r6_40) + reinterpret_cast<uint32_t>(r0_46));
            addr_11554_31:
            *reinterpret_cast<void***>(r4_32) = reinterpret_cast<void**>(0);
            ++r10_37;
            r7_47 = g11600;
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
                goto addr_11594_36;
            continue;
            label_28:
            do {
                r3_51 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_33 + 1));
                if (!r3_51) 
                    break;
                ++r2_33;
            } while (r12_44 != reinterpret_cast<int32_t>(r3_51 << 24) >> 24);
            goto label_41;
            goto addr_11544_30;
            label_41:
            addr_11524_43:
            r6_40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_40) + 1);
            r0_52 = strchr(r6_40, reinterpret_cast<int32_t>(r0_41 << 24) >> 24);
            r4_32 = r0_52;
            if (!r4_32) {
                r4_32 = r8_35;
            }
            goto addr_11554_31;
            addr_11500_29:
            goto addr_11524_43;
        }
    }
    addr_11594_36:
    r3_53 = g11604;
    *reinterpret_cast<void***>(r3_53) = r10_37;
    if (reinterpret_cast<signed char>(r10_37) >= reinterpret_cast<signed char>(0)) {
        goto addr_115d0_16;
    } else {
        addr_115a4_48:
        TerminateProcess(66, -1, r2_33, r3_53, v54, v55, v56, v57, v58);
    }
    while (1) {
    }
    label_32:
    r2_33 = reinterpret_cast<void**>(0xffffffff);
    r3_53 = g11604;
    *reinterpret_cast<void***>(r3_53) = reinterpret_cast<void**>(0xffffffff);
    goto addr_115a4_48;
    addr_11438_11:
    TerminateProcess(r0_23 + 66, -1, 0x200, r3_24, v59, v60, v61, v62, v63);
    while (1) {
    }
}

int32_t* g11618 = reinterpret_cast<int32_t*>(0x15084);

void _fpreset() {
    int32_t* r12_1;

    r12_1 = g11618;
    goto *r12_1;
}

int32_t* g11624 = reinterpret_cast<int32_t*>(0x1507c);

void TerminateProcess(uint32_t r0, int32_t r1, void** r2, void** r3, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    int32_t* r12_10;

    r12_10 = g11624;
    goto *r12_10;
}

int32_t* g11630 = reinterpret_cast<int32_t*>(0x15098);

void puts(int32_t r0, void** r1) {
    int32_t* r12_3;

    r12_3 = g11630;
    goto *r12_3;
}

int32_t* g1163c = reinterpret_cast<int32_t*>(0x150a0);

void scanf(int32_t r0, void** r1) {
    int32_t* r12_3;

    r12_3 = g1163c;
    goto *r12_3;
}

int32_t* g11648 = reinterpret_cast<int32_t*>(0x15094);

void printf(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g11648;
    goto *r12_2;
}

int32_t* g11654 = reinterpret_cast<int32_t*>(0x15090);

void** malloc(uint32_t r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11654;
    goto *r12_4;
}

int32_t* g11660 = reinterpret_cast<int32_t*>(0x1508c);

void free() {
    int32_t* r12_1;

    r12_1 = g11660;
    goto *r12_1;
}

int32_t* g1166c = reinterpret_cast<int32_t*>(0x15088);

void fflush(int32_t r0) {
    int32_t* r12_2;

    r12_2 = g1166c;
    goto *r12_2;
}

int32_t* g11678 = reinterpret_cast<int32_t*>(0x1509c);

void** realloc(void** r0, void* r1) {
    int32_t* r12_3;

    r12_3 = g11678;
    goto *r12_3;
}

int32_t* g11684 = reinterpret_cast<int32_t*>(0x15080);

void _fcloseall() {
    int32_t* r12_1;

    r12_1 = g11684;
    goto *r12_1;
}

int32_t* g11690 = reinterpret_cast<int32_t*>(0x150b0);

void* strspn(void** r0, int32_t r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g11690;
    goto *r12_4;
}

int32_t* g1169c = reinterpret_cast<int32_t*>(0x150a4);

void** strchr(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g1169c;
    goto *r12_3;
}

int32_t* g116a8 = reinterpret_cast<int32_t*>(0x150a8);

void* strcspn(void* r0, int32_t r1) {
    int32_t* r12_3;

    r12_3 = g116a8;
    goto *r12_3;
}

int32_t* g116b4 = reinterpret_cast<int32_t*>(0x15078);

int32_t GetModuleFileNameW() {
    int32_t* r12_1;

    r12_1 = g116b4;
    goto *r12_1;
}

int32_t* g116c0 = reinterpret_cast<int32_t*>(0x150b4);

void** wcslen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g116c0;
    goto *r12_4;
}

int32_t* g116cc = reinterpret_cast<int32_t*>(0x150ac);

void* strlen(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g116cc;
    goto *r12_4;
}

int32_t* g116d8 = reinterpret_cast<int32_t*>(0x150b8);

void wcstombs(void** r0, void** r1, void** r2) {
    int32_t* r12_4;

    r12_4 = g116d8;
    goto *r12_4;
}

void*** g112dc = reinterpret_cast<void***>(0x14000);

void*** g112e0 = reinterpret_cast<void***>(0x14004);

void** __atexit_init() {
    void** r1_1;
    void** r2_2;
    void** r0_3;
    void*** r3_4;
    void*** r3_5;

    r0_3 = malloc(0x80, r1_1, r2_2);
    r3_4 = g112dc;
    *r3_4 = r0_3;
    if (!r0_3) {
        return r0_3;
    } else {
        *reinterpret_cast<void***>(r0_3) = reinterpret_cast<void**>(0);
        r3_5 = g112e0;
        *r3_5 = r0_3;
        return 1;
    }
}

int32_t g110b4 = 0x13000;

int32_t g110b8 = 0x13018;

int32_t g110bc = 0x13024;

int32_t g110c0 = 0x149a;

int32_t g110c8 = 0x1303c;

int32_t g110c4 = 0x13028;

/* .text */
int32_t text(void** r0, void** r1) {
    int32_t r0_3;
    int32_t r0_4;
    int32_t r0_5;
    void** r1_6;
    int32_t r3_7;
    int32_t v8;
    int32_t r0_9;
    int32_t r0_10;

    __gccmain(r0);
    r0_3 = g110b4;
    puts(r0_3, r1);
    r0_4 = g110b8;
    printf(r0_4);
    r0_5 = g110bc;
    r1_6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 16);
    scanf(r0_5, r1_6);
    r3_7 = g110c0;
    if (v8 == r3_7) {
        r0_9 = g110c8;
        puts(r0_9, r1_6);
    } else {
        r0_10 = g110c4;
        puts(r0_10, r1_6);
    }
    return 0;
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
            goto addr_11174_7;
    }
    addr_111b8_8:
    r4_4 = reinterpret_cast<void**>(0);
    addr_111bc_9:
    return r4_4;
    label_6:
    goto addr_111b8_8;
    addr_11174_7:
    if (!*r2) {
        goto addr_111b8_8;
    } else {
        r3_7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*r2) - reinterpret_cast<unsigned char>(*r6_5)) >> 2);
        r1_8 = reinterpret_cast<void*>(r3_7 + 1);
        if (reinterpret_cast<int32_t>(r1_8) <= reinterpret_cast<int32_t>(0)) {
            goto addr_111b8_8;
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
                goto addr_111b8_8;
        }
    }
    goto addr_111bc_9;
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

void fun_11600(int32_t r0, int32_t r1) {
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

void fun_116e0(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_116e8(int32_t r0) {
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
    int1_t z69;
    int1_t z70;
    int1_t z71;

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
    if (z69) {
    }
    if (z70) {
    }
    if (z71) {
    }
}

int32_t* g1111c = reinterpret_cast<int32_t*>(0x14000);

int32_t fun_11104(int32_t r0, int32_t r1) {
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
    r3_6 = g1111c;
    return *r3_6;
}

void fun_1111c(int32_t r0, int32_t r1) {
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

void*** g111d8 = reinterpret_cast<void***>(0x14000);

void**** g111dc = reinterpret_cast<void****>(0x14004);

void** _onexit(void** r0) {
    void*** r1_2;
    void**** r2_3;
    void** r0_4;

    r1_2 = g111d8;
    r2_3 = g111dc;
    r0_4 = __dllonexit(r0, r1_2, r2_3);
    return r0_4;
}

void fun_11200(int32_t r0, int32_t r1) {
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
    int32_t 0x0;
    int32_t 0x4;
};

struct s3** g11324 = reinterpret_cast<struct s3**>(0x12000);

void fun_112dc(int32_t r0, int32_t r1) {
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
    r3_5 = g11324;
    r3_6 = (*r3_5)->0x0;
    if (!r3_6) {
        return;
    } else {
        r4_7 = g11324;
        while (r3_6(), r2_8 = *r4_7, *r4_7 = reinterpret_cast<struct s3*>(&r2_8->0x4), r3_6 = r2_8->0x4, !!r3_6) {
        }
        return;
    }
}

void fun_11324(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11388() {
    int1_t z1;
    int1_t z2;

    if (z1) {
        __asm__("ldrdeq r1, r2, [r1], -ip");
    }
    if (!z2) 
        goto "???";
}

void fun_113b4() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11618() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11624(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11630(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_1163c(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11648(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11654(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11660() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1166c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_11678(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_11684(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_11690(int32_t r0, int16_t* r1) {
    int1_t z3;
    int32_t r5_4;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r5_4);
}

void fun_1169c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_116a8() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_116b4(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_116c0() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (!z1) 
        goto "???";
    *r1_2 = static_cast<int16_t>(r5_3);
}

void fun_116cc() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_116d8() {
    int1_t z1;
    int16_t* r1_2;
    int32_t r5_3;

    if (z1) {
        *r1_2 = static_cast<int16_t>(r5_3);
    }
}

void fun_110b4(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;

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
    if (!z8) 
        goto "???";
}

void _c_exit() {
    closeall_streams();
    return;
}

void fun_111d8(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_11278(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}
