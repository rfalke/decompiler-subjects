
void** fun_804823d(void** ecx, void** a2);

void** fun_8048e1c(void** ecx) {
    __asm__("pushad ");
    fun_804823d(ecx, __return_address());
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

struct s0 {
    signed char[134518170] pad134518170;
    void** f804959a;
    signed char[4095] pad134522266;
    signed char f804a59a;
};

struct s0* g805d674;

struct s0* g805d668;

struct s0* g805d66c;

struct s0* g805d678;

struct s0* g805d670;

void** g805d90f;

struct s1 {
    signed char f0;
    signed char f1;
};

struct s2 {
    signed char f0;
    signed char f1;
};

void** fun_804824a(void** ecx);

signed char g805da0d;

signed char fun_8048af2();

struct s3 {
    signed char[1] pad1;
    signed char f1;
};

int32_t fun_80488d8();

void** g805d688;

void** g805d680;

signed char g805db22;

signed char* fun_8048b8c(void** ecx, void** a2);

void** g805d684;

void** g805d67c;

int32_t fun_804874f(void** a1) {
    signed char* v2;
    void*** tmp32_3;
    void*** esi4;
    struct s0* ebx5;
    void** ecx6;
    void** eax7;
    struct s0* edx8;
    struct s0* ebp9;
    signed char* tmp32_10;
    signed char* edi11;
    int32_t v12;
    struct s0* v13;
    struct s1* edi14;
    void** v15;
    void*** v16;
    signed char* v17;
    signed char* esi18;
    signed char* edi19;
    struct s2* edi20;
    void* esi21;
    void** v22;
    void** eax23;
    void* edx24;
    void** ecx25;
    void** eax26;
    void** v27;
    void** eax28;
    int1_t zf29;
    signed char al30;
    int32_t v31;
    struct s3* esi32;
    signed char* esi33;
    signed char* edi34;
    void* ecx35;
    struct s0* ebp36;
    int1_t zf37;
    uint32_t ecx38;
    signed char* esi39;
    signed char* edi40;
    signed char* v41;
    void** v42;
    struct s0* v43;
    void*** v44;
    void*** edi45;
    void** ecx46;
    void** edx47;
    void*** v48;
    void** esi49;
    void** eax50;
    void** eax51;

    while (1) {
        v2 = reinterpret_cast<signed char*>(__return_address());
        tmp32_3 = &g805d674->f804959a;
        esi4 = tmp32_3;
        ebx5 = g805d668;
        ecx6 = eax7;
        edx8 = g805d66c;
        ebp9 = g805d678;
        tmp32_10 = &g805d670->f804a59a;
        edi11 = tmp32_10;
        while (*reinterpret_cast<signed char*>(&eax7)) {
            if (reinterpret_cast<uint32_t>(ebx5) & 1) {
                addr_80487fa_4:
                if (*reinterpret_cast<signed char*>(&eax7) != 34) {
                    if (reinterpret_cast<uint32_t>(ebx5) & 2) {
                        addr_8048850_6:
                    } else {
                        if (*reinterpret_cast<signed char*>(&eax7) == 9) {
                            addr_804884b_8:
                            eax7 = reinterpret_cast<void**>(0);
                            ebx5 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx5) & 0xfffffffe);
                            goto addr_8048850_6;
                        } else {
                            if (*reinterpret_cast<signed char*>(&eax7) == 10) 
                                break;
                            v12 = 0x804884b;
                            if (*reinterpret_cast<signed char*>(&eax7) == 62) 
                                goto addr_804887d_11;
                            if (*reinterpret_cast<signed char*>(&eax7) == 60) 
                                goto addr_8048879_13;
                            if (*reinterpret_cast<signed char*>(&eax7) == 63) 
                                goto addr_80489b6_15;
                            if (*reinterpret_cast<signed char*>(&eax7) == 42) 
                                goto addr_80489b6_15; else 
                                goto addr_8048834_17;
                        }
                    }
                } else {
                    ebx5 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx5) ^ 2);
                    goto addr_8048851_19;
                }
            } else {
                if (*reinterpret_cast<signed char*>(&eax7) == 35) 
                    break;
                if (*reinterpret_cast<signed char*>(&eax7) == 36) 
                    goto addr_8048924_22; else 
                    goto addr_804879a_23;
            }
            *edi11 = *reinterpret_cast<signed char*>(&eax7);
            ++edi11;
            ++esi4;
            goto addr_8048851_19;
            addr_80489b6_15:
            g805d90f = reinterpret_cast<void**>(0);
            if (!(reinterpret_cast<uint32_t>(ebx5) & 1)) {
                __asm__("pushad ");
                v13 = ebp9;
                edi14 = reinterpret_cast<struct s1*>(0x805da0e);
            } else {
                v15 = eax7;
                v16 = esi4;
                v17 = edi11;
                esi18 = edi11;
                edi19 = *reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(ebp9) * 4 + 0x805b59c);
                do {
                    if (esi18 == edi19) 
                        goto addr_80489f3_29;
                    __asm__("lodsb ");
                } while (*reinterpret_cast<signed char*>(&eax7) != 47);
                goto addr_80489df_31;
            }
            addr_8048a43_32:
            edi14->f0 = *reinterpret_cast<signed char*>(&eax7);
            edi20 = reinterpret_cast<struct s2*>(&edi14->f1);
            esi21 = reinterpret_cast<void*>(esi4 + 1);
            v22 = eax7;
            while (*reinterpret_cast<signed char*>(&eax7) != 10 && (*reinterpret_cast<signed char*>(&eax7) != 9 && *reinterpret_cast<signed char*>(&eax7) != 32)) {
                edi20->f0 = *reinterpret_cast<signed char*>(&eax7);
                edi20 = reinterpret_cast<struct s2*>(&edi20->f1);
                esi21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi21) + 1);
            }
            edi20->f0 = 0;
            edi11 = &edi20->f1;
            esi4 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esi21) - 1 + 1);
            ecx6 = reinterpret_cast<void**>(0x10000);
            __asm__("int 0x80");
            ebx5 = reinterpret_cast<struct s0*>(5);
            if (!__intrinsic()) {
                while (edx8 = reinterpret_cast<struct s0*>(0), *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx8) + 1) = 2, ecx6 = reinterpret_cast<void**>(0x805d70a), !0) {
                    eax23 = reinterpret_cast<void**>(0x805d797);
                    edx24 = reinterpret_cast<void*>(0);
                    while (ecx25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx6) + reinterpret_cast<uint32_t>(edx24)), esi4 = reinterpret_cast<void***>(0x805da0e), reinterpret_cast<unsigned char>(eax23) > reinterpret_cast<unsigned char>(ecx25)) {
                        eax26 = fun_804824a(ecx25);
                        edi11 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx25 + 10) - 1);
                        ecx6 = ecx25;
                        v27 = eax26;
                        eax28 = v22;
                        zf29 = g805da0d == *reinterpret_cast<signed char*>(&eax28);
                        if (zf29 && (al30 = fun_8048af2(), zf29)) {
                            edi11 = v2;
                            *reinterpret_cast<signed char**>(v31 * 4 + 0x805b5a0) = edi11;
                            ++v31;
                            do {
                                __asm__("lodsb ");
                                *edi11 = al30;
                                ++edi11;
                            } while (al30);
                            v2 = edi11;
                        }
                        edx24 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ecx6 + 8)));
                        eax23 = v27;
                    }
                }
                eax7 = reinterpret_cast<void**>(6);
                __asm__("int 0x80");
                ebp9 = v13;
                __asm__("popad ");
                continue;
            } else {
                eax7 = v22;
                ebp9 = v13;
                __asm__("popad ");
                continue;
            }
            addr_80489f3_29:
            esi32 = reinterpret_cast<struct s3*>(esi18 - 1);
            addr_80489f4_58:
            esi33 = &esi32->f1;
            edi34 = reinterpret_cast<signed char*>(0x805da0e);
            ecx35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v17) - reinterpret_cast<uint32_t>(esi33));
            while (ecx35) {
                ecx35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx35) - 1);
                *edi34 = *esi33;
                ++edi34;
                ++esi33;
            }
            *reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(ebp9) * 4 + 0x805b5a0) = edi34;
            *edi34 = 0;
            esi4 = v16;
            eax7 = v15;
            edx8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(edx8) - 1);
            ebp36 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp9) - 1);
            __asm__("pushad ");
            v13 = ebp36;
            edi14 = *reinterpret_cast<struct s1**>(reinterpret_cast<uint32_t>(ebp36) * 4 + 0x805b5a4);
            zf37 = g805d90f == 0;
            if (zf37) {
                goto addr_8048a43_32;
            }
            addr_80489df_31:
            ecx38 = reinterpret_cast<uint32_t>(esi18) - reinterpret_cast<uint32_t>(edi19) + 1;
            esi39 = edi19;
            edi40 = reinterpret_cast<signed char*>(0x805d90f);
            while (ecx38) {
                --ecx38;
                *edi40 = *esi39;
                ++edi40;
                ++esi39;
            }
            *edi40 = 0;
            esi32 = reinterpret_cast<struct s3*>(esi39 + 1);
            goto addr_80489f4_58;
            addr_8048834_17:
            if (*reinterpret_cast<signed char*>(&eax7) != 0x7c) 
                goto addr_8048847_72;
            if (*esi4 == 0x7c) 
                goto addr_8048847_72;
            if (*reinterpret_cast<signed char*>(esi4 - 2) != 0x7c) 
                goto addr_804896f_75;
            addr_8048847_72:
            if (*reinterpret_cast<signed char*>(&eax7) != 32) 
                goto addr_8048850_6; else 
                goto addr_804884b_8;
            addr_8048924_22:
            v41 = edi11;
            v42 = ecx6;
            v43 = edx8;
            v44 = esi4;
            edi45 = esi4;
            ecx46 = *edi45;
            edx47 = ecx46;
            while (eax7) {
                if (*reinterpret_cast<void***>(eax7) != edx47) 
                    continue;
                v48 = edi45;
                esi49 = eax7;
                do {
                    if (!ecx46) 
                        break;
                    --ecx46;
                    ++edi45;
                    ++esi49;
                } while (*reinterpret_cast<void***>(esi49) == *edi45);
                if (*reinterpret_cast<unsigned char*>(edi45 - 1) <= 32) 
                    goto addr_804894c_82;
                edi45 = v48;
            }
            esi4 = v44;
            do {
                __asm__("lodsb ");
                if (!*reinterpret_cast<signed char*>(&eax7)) 
                    break;
            } while (*reinterpret_cast<signed char*>(&eax7) > 32);
            edx8 = v43;
            addr_8048968_88:
            ecx6 = v42;
            edi11 = v41;
            continue;
            addr_804894c_82:
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp9) * 4 + 0x805b5a0) = esi49;
            ebp9 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp9) + 1);
            esi4 = edi45;
            edx8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(v43) + 1);
            goto addr_8048968_88;
            addr_804879a_23:
            if (*reinterpret_cast<signed char*>(&eax7) == 9) {
                addr_8048851_19:
                --ecx6;
                if (ecx6) 
                    continue; else 
                    break;
            } else {
                if (*reinterpret_cast<signed char*>(&eax7) == 10) 
                    break;
                if (*reinterpret_cast<signed char*>(&eax7) == 32) 
                    goto addr_8048851_19;
            }
            v12 = 0x8048851;
            if (*reinterpret_cast<signed char*>(&eax7) == 62) 
                goto addr_804887d_11;
            if (*reinterpret_cast<signed char*>(&eax7) == 60) 
                goto addr_8048879_13;
            if (*reinterpret_cast<signed char*>(&eax7) == 63) 
                goto addr_80489b6_15;
            if (*reinterpret_cast<signed char*>(&eax7) == 42) 
                goto addr_80489b6_15;
            if (*reinterpret_cast<signed char*>(&eax7) != 0x7c) 
                goto addr_80487ee_96;
            if (*esi4 == 0x7c) 
                goto addr_80487ee_96;
            if (*reinterpret_cast<signed char*>(esi4 - 2) != 0x7c) 
                goto addr_804896f_75;
            addr_80487ee_96:
            *reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(ebp9) * 4 + 0x805b5a0) = edi11;
            ebp9 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp9) + 1);
            edx8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(edx8) + 1);
            ebx5 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebx5) | 1);
            goto addr_80487fa_4;
        }
        break;
        addr_804896f_75:
        *edi11 = 0;
        fun_80488d8();
        g805d674 = reinterpret_cast<struct s0*>(esi4 + 1 - 0x804959a);
        __asm__("int 0x80");
        eax50 = g805d688;
        g805d680 = eax50;
        g805db22 = 1;
        fun_8048b8c(ecx6, ecx6);
        eax51 = g805d684;
        g805d67c = eax51;
        eax7 = ecx6;
    }
    if (reinterpret_cast<uint32_t>(ebx5) & 2) {
        g805d674 = reinterpret_cast<struct s0*>(0);
        g805d668 = ebx5;
        g805d66c = edx8;
        g805d670 = reinterpret_cast<struct s0*>(edi11 - 0x804a59a);
        g805d678 = ebp9;
        goto v2;
    }
    *edi11 = 0;
    if (!(reinterpret_cast<uint32_t>(ebx5) & 16)) 
        goto addr_804886f_108;
    ebp9 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp9) - 1);
    if (!(reinterpret_cast<uint32_t>(ebx5) & 32)) {
    }
    __asm__("int 0x80");
    g805d680 = reinterpret_cast<void**>(5);
    addr_80488d8_113:
    *reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(ebp9) * 4 + 0x805b5a0) = reinterpret_cast<struct s0*>(0);
    g805d668 = reinterpret_cast<struct s0*>(0);
    g805d66c = reinterpret_cast<struct s0*>(0);
    g805d670 = reinterpret_cast<struct s0*>(0);
    g805d674 = reinterpret_cast<struct s0*>(0);
    g805d678 = reinterpret_cast<struct s0*>(0);
    goto v2;
    addr_804886f_108:
    if (reinterpret_cast<uint32_t>(ebx5) & 8) {
        ebp9 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp9) - 1);
        __asm__("int 0x80");
        g805d67c = reinterpret_cast<void**>(5);
        goto addr_80488d8_113;
    } else {
        goto addr_80488d8_113;
    }
    addr_804887d_11:
    if (reinterpret_cast<int1_t>(ebx5 == (reinterpret_cast<uint32_t>(ebx5) | 16))) {
    }
    goto v12;
    addr_8048879_13:
    goto v12;
}

struct s4 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

signed char* g805b5a0;

int32_t fun_80482ab(void** ecx);

signed char g805db23;

int32_t g805db58;

int32_t g804950e;

struct s5 {
    signed char f0;
    signed char f1;
};

int32_t g805db24;

signed char fun_8048dd5(void** ecx);

signed char fun_8048b38(void** ecx);

int32_t g805db50;

uint32_t g805db0e;

void** fun_8048df5(void** ecx);

void** fun_8048e06(void** ecx, void** a2);

int32_t g805db54;

int32_t g805d6fe;

uint32_t g805d6d8;

signed char* fun_8048b8c(void** ecx, void** a2) {
    void** v3;
    struct s4* ebx4;
    signed char* edi5;
    int32_t eax6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    int32_t eax10;
    int32_t ebp11;
    signed char* edi12;
    struct s5* edi13;
    void** ebx14;
    void** ecx15;
    int1_t zf16;
    signed char eax17;
    int1_t zf18;
    int1_t zf19;
    int1_t zf20;
    uint32_t eax21;
    int16_t ax22;
    int1_t zf23;
    int1_t zf24;
    uint32_t eax25;

    v3 = reinterpret_cast<void**>(__return_address());
    ebx4 = reinterpret_cast<struct s4*>(0x8049394);
    while (edi5 = g805b5a0, !!ebx4->f0) {
        fun_804824a(ecx);
        if (!ecx) 
            goto addr_8048bab_4;
        ++ebx4;
    }
    fun_80482ab(ecx);
    eax6 = 2;
    __asm__("int 0x80");
    if (!1) {
        zf7 = g805db23 == 0;
        if (!zf7) {
            __asm__("int 0x80");
            g805db58 = 20;
            __asm__("int 0x80");
            __asm__("int 0x80");
            g804950e = 0;
            ecx = reinterpret_cast<void**>(0x804950e);
            __asm__("int 0x80");
            __asm__("int 0x80");
        }
        zf8 = 0 == g805d680;
        if (!zf8) {
            ecx = reinterpret_cast<void**>(1);
            __asm__("int 0x80");
            __asm__("int 0x80");
        }
        zf9 = 0 == g805d67c;
        if (!zf9) {
            ecx = reinterpret_cast<void**>(0);
            __asm__("int 0x80");
            __asm__("int 0x80");
        }
        fun_804823d(ecx, v3);
        edi5 = g805b5a0;
        *reinterpret_cast<signed char*>(&eax10) = 47;
        do {
            if (!ecx) 
                break;
            --ecx;
            ++edi5;
        } while (*edi5 != 47);
        if (!ecx) {
            ebp11 = 5;
            do {
                edi12 = reinterpret_cast<signed char*>(0x805a59a);
                do {
                    __asm__("lodsb ");
                    *edi12 = *reinterpret_cast<signed char*>(&eax10);
                    ++edi12;
                } while (1);
                edi13 = reinterpret_cast<struct s5*>(edi12 - 1);
                edi13->f0 = 47;
                edi5 = &edi13->f1;
                do {
                    __asm__("lodsb ");
                    *edi5 = 47;
                    ++edi5;
                } while (1);
                eax10 = 11;
                __asm__("int 0x80");
                --ebp11;
            } while (ebp11);
        } else {
            __asm__("int 0x80");
        }
        fun_8048e1c(0x805b5a0);
        fun_8048e1c(0x805b5a0);
        eax6 = 1;
        __asm__("int 0x80");
    }
    g805db24 = eax6;
    ebx14 = g805d67c;
    ecx15 = g805d680;
    if (ebx14) {
        __asm__("int 0x80");
    }
    if (ecx15 != 1 && ecx15) {
        __asm__("int 0x80");
    }
    g805d67c = reinterpret_cast<void**>(0);
    g805d680 = reinterpret_cast<void**>(0);
    zf16 = g805db22 == 0;
    if (!zf16) {
        addr_8048d5b_39:
        eax17 = fun_8048dd5(ecx15);
        if (!edi5) {
        }
    } else {
        while (1) {
            ecx15 = reinterpret_cast<void**>(0x805db50);
            __asm__("int 0x80");
            if (0) 
                continue;
            zf18 = g805db24 == 0x72;
            if (zf18) 
                break;
            fun_8048b38(0x805db50);
        }
        g805db24 = 0;
        zf19 = g805db23 == 0;
        if (zf19) 
            goto addr_8048d9f_45;
        zf20 = *reinterpret_cast<signed char*>(&g805db50) == 0x7f;
        if (!zf20) 
            goto addr_8048d9f_45; else 
            goto addr_8048d5b_39;
    }
    *edi5 = eax17;
    eax21 = reinterpret_cast<uint32_t>(edi5 - 0x805db28) >> 2;
    *reinterpret_cast<signed char*>(&ax22) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax21) + 48);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax22) + 1) = 10;
    *reinterpret_cast<int16_t*>(&g805db0e) = ax22;
    zf23 = g805db22 == 0;
    if (zf23) {
        fun_8048df5(ecx15);
        ecx15 = reinterpret_cast<void**>(2);
        fun_8048e06(2, v3);
    }
    addr_8048d9f_45:
    fun_80482ab(ecx15);
    __asm__("int 0x80");
    g805db58 = 20;
    __asm__("int 0x80");
    __asm__("int 0x80");
    g805db22 = 0;
    zf24 = g805db54 == 0;
    if (zf24) {
        g805d6fe = 0x20082008;
        __asm__("int 0x80");
        eax25 = g805d6d8;
        g805d6d8 = eax25 & 0xfffffff5;
        __asm__("int 0x80");
        g805d6d8 = eax25;
    }
    return 54;
    addr_8048bab_4:
    if (ebx4->f8) {
        goto ebx4->f4;
    }
}

int32_t g805d5a0;

int32_t g805d706;

int32_t g2d;

int32_t g31;

struct s6 {
    signed char f0;
    signed char f1;
};

void fun_80481c8(void** ecx) {
    signed char* edi2;
    struct s6* edi3;

    __asm__("int 0x80");
    g805d5a0 = 45;
    g805d706 = 1;
    fun_804823d(ecx, __return_address());
    __asm__("int 0x80");
    g2d = 0x4c454853;
    g31 = 0x20223d4c;
    edi2 = reinterpret_cast<signed char*>(52);
    do {
        __asm__("lodsb ");
        *edi2 = 45;
        ++edi2;
    } while (1);
    edi3 = reinterpret_cast<struct s6*>(edi2 - 1);
    edi3->f0 = 34;
    edi3->f1 = 0;
    return;
}

void fun_8048212() {
    int32_t ebp1;
    int32_t v2;
    int32_t v3;
    int32_t edx4;
    int32_t edx5;

    if (ebp1) {
        do {
        } while (v2);
    }
    do {
        if (!v3) 
            break;
        edx4 = g805d706;
        *reinterpret_cast<int32_t*>(edx4 * 4 + 0x805d5a0) = v3;
        edx5 = edx4 + 1;
        g805d706 = edx5;
    } while (edx5 != 50);
    return;
}

void** fun_804823d(void** ecx, void** a2) {
    void** v3;
    void** eax4;
    int32_t ecx5;
    signed char* edi6;

    v3 = eax4;
    ecx5 = -1;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        ++edi6;
    } while (*edi6);
    return v3;
}

void** fun_804824a(void** ecx) {
    void** edi2;
    void** eax3;
    void** edi4;
    void*** esi5;

    fun_804823d(ecx, edi2);
    eax3 = fun_804823d(ecx, edi2);
    if (reinterpret_cast<unsigned char>(ecx) < reinterpret_cast<unsigned char>(ecx)) {
        ecx = ecx;
    }
    edi4 = edi2;
    do {
        if (!ecx) 
            break;
        --ecx;
        ++edi4;
        ++esi5;
    } while (*esi5 == *reinterpret_cast<void***>(edi4));
    return eax3;
}

int32_t fun_8048266(void** ecx) {
    int1_t zf2;
    uint32_t eax3;

    zf2 = g805db54 == 0;
    if (zf2) {
        g805d6fe = 0x20082008;
        __asm__("int 0x80");
        eax3 = g805d6d8;
        g805d6d8 = eax3 & 0xfffffff5;
        __asm__("int 0x80");
        g805d6d8 = eax3;
    }
    return 54;
}

int32_t fun_80482ab(void** ecx) {
    int1_t zf2;

    zf2 = g805db54 == 0;
    if (zf2) {
        __asm__("int 0x80");
    }
    return 54;
}

void** g805d6f3;

void** fun_80482c6(void** ecx) {
    void** al2;
    void** eax3;

    __asm__("int 0x80");
    if (!0 && !0) {
        al2 = g805d6f3;
        return al2;
    }
    fun_80482ab(0x805d6f3);
    fun_8048df5(0x805d6f3);
    __asm__("int 0x80");
    eax3 = reinterpret_cast<void**>(12);
    __asm__("int 0x80");
    if (!1) 
        goto addr_8048f0d_6;
    addr_8048f17_7:
    return eax3;
    addr_8048f0d_6:
    eax3 = fun_8048e1c(0x805d6f3);
    goto addr_8048f17_7;
}

void** g804959a;

signed char g805db0d;

void** g805d90a;

void** g805d6f4;

void** g805d6f6;

uint16_t g805d694;

void** g805da0e;

void*** g805d6fa;

void** fun_804911e(void** ecx);

void** fun_80482ea(void** ecx) {
    void* esp2;
    void** edi3;
    void** al4;
    void** v5;
    void** esi6;
    void** edi7;
    void** eax8;
    void* esp9;
    void** ebx10;
    void** edx11;
    int1_t zf12;
    void** v13;
    void** v14;
    int1_t zf15;
    void** v16;
    int1_t zf17;
    int1_t zf18;
    int1_t zf19;
    void** v20;
    void*** esp21;
    void** v22;
    void** al23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    void** edx28;
    void** edx29;
    uint32_t eax30;
    void*** esp31;
    uint32_t eax32;
    void** tmp8_33;
    uint32_t ebp34;
    uint32_t eax35;
    void** edi36;
    void** ecx37;
    void** eax38;
    int1_t zf39;
    int1_t zf40;
    int1_t zf41;
    void*** esp42;
    void** v43;
    void* edx44;
    void* esp45;
    void** esi46;
    int1_t zf47;
    int32_t v48;
    int1_t zf49;
    int1_t zf50;
    int1_t zf51;
    void** esi52;
    void** ebx53;
    void** ecx54;
    void*** edi55;
    void** edx56;
    void** ebx57;
    void** ebx58;
    void*** edi59;
    int1_t zf60;
    void** v61;
    void** eax62;
    void* esp63;
    void** edi64;
    void** v65;
    uint32_t eax66;
    void** edi67;
    void*** ebx68;
    void** ecx69;
    void** ecx70;
    void** v71;
    void* esp72;
    void*** edi73;
    void** ecx74;
    void** ebp75;
    void** v76;
    void** v77;
    void*** esp78;
    void** v79;
    void** tmp8_80;
    void** v81;
    void** v82;
    void** v83;
    void** eax84;
    void*** esp85;
    void** eax86;
    void*** ecx87;
    void** v88;
    signed char* edi89;
    void* esp90;
    signed char* esi91;
    int32_t eax92;
    void** eax93;

    esp2 = __zero_stack_offset();
    edi3 = reinterpret_cast<void**>(0x804959a);
    g804959a = reinterpret_cast<void**>(0);
    while (1) {
        al4 = fun_80482c6(ecx);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
        if (al4 == 9) {
            v5 = edi3;
            esi6 = edi3;
            edi7 = reinterpret_cast<void**>(0x804959a);
            g805d90f = reinterpret_cast<void**>(0);
            g805db0d = 0;
            g805d90a = reinterpret_cast<void**>(0x804959a);
            eax8 = fun_804823d(ecx, v5);
            esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 + 4);
            ebx10 = reinterpret_cast<void**>(0x805d702);
            edx11 = reinterpret_cast<void**>(0);
            do {
                --edi7;
                if (edi7 == eax8) 
                    break;
                if (*reinterpret_cast<void***>(edi7) == 47 && !edx11) {
                    edx11 = edi7;
                }
            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi7) == 32));
            goto addr_8048517_8;
        } else {
            if (al4 == 27) {
                ecx = reinterpret_cast<void**>(0x805d6f4);
                esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
                __asm__("int 0x80");
                zf12 = reinterpret_cast<int1_t>(g805d6f4 == 0x445b);
                if (zf12) {
                    if (edi3 == 0x804959a) {
                        addr_8048458_12:
                        ecx = reinterpret_cast<void**>(1);
                        fun_8048e06(1, v13);
                        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
                        goto addr_804847d_13;
                    } else {
                        --edi3;
                        ecx = reinterpret_cast<void**>(1);
                        fun_8048e06(1, v14);
                        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
                        goto addr_804847d_13;
                    }
                } else {
                    zf15 = reinterpret_cast<int1_t>(g805d6f4 == 0x435b);
                    if (zf15) {
                        if (!*reinterpret_cast<void***>(edi3)) 
                            goto addr_8048458_12;
                        ecx = reinterpret_cast<void**>(1);
                        fun_8048e06(1, v16);
                        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
                        ++edi3;
                        goto addr_80483e4_18;
                    } else {
                        zf17 = reinterpret_cast<int1_t>(g805d6f4 == 0x415b);
                        if (zf17) {
                            zf18 = g805d6f6 == 0;
                            if (zf18) 
                                goto addr_8048458_12;
                            --g805d6f6;
                            goto addr_8048482_22;
                        } else {
                            zf19 = reinterpret_cast<int1_t>(g805d6f4 == 0x425b);
                            if (zf19) {
                                ++g805d6f6;
                                goto addr_8048482_22;
                            } else {
                                goto addr_80483e4_18;
                            }
                        }
                    }
                }
            } else {
                if (al4 == 8 || al4 == 0x7f) {
                    if (edi3 == 0x804959a) 
                        goto addr_8048458_12;
                    if (!*reinterpret_cast<void***>(edi3)) {
                        --edi3;
                        *reinterpret_cast<void***>(edi3) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&g805d6fe) + 1) = reinterpret_cast<void**>(32);
                        ecx = reinterpret_cast<void**>(3);
                        fun_8048e06(3, v20);
                        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
                        goto addr_80483e4_18;
                    } else {
                        esp21 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 4);
                        v22 = edi3;
                        do {
                            al23 = *reinterpret_cast<void***>(edi3);
                            ++edi3;
                            *reinterpret_cast<void***>(edi3 - 2) = al23;
                        } while (al23);
                        fun_8048e06(5, v24);
                        edi3 = v22 - 1;
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&g805d6fe) + 1) = *reinterpret_cast<void***>(edi3);
                        ecx = reinterpret_cast<void**>(2);
                        fun_8048e06(2, v25);
                        esp2 = reinterpret_cast<void*>(esp21 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
                        goto addr_80483e4_18;
                    }
                } else {
                    if (al4 == 4) 
                        break;
                    if (al4 == 12) 
                        goto addr_804839b_35;
                    ecx = reinterpret_cast<void**>(1);
                    fun_8048e06(1, v26);
                    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
                    eax27 = g805d6f3;
                    if (eax27 == 10) 
                        goto addr_8048380_37;
                    (&eax27)[1] = reinterpret_cast<void**>(0);
                    if (!*reinterpret_cast<void***>(edi3)) 
                        goto addr_804837a_39; else 
                        goto addr_8048345_40;
                }
            }
        }
        addr_804851e_41:
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax8) == 47)) {
            if (!edx11) {
                edx11 = eax8;
            }
            ebx10 = eax8;
            goto addr_8048546_45;
        }
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax8) == 46) || !edx11) {
            ebx10 = reinterpret_cast<void**>(0x805d702);
            edx28 = reinterpret_cast<void**>(0x805d703);
            g805d90a = edi7;
        } else {
            addr_8048546_45:
            edx29 = edx11 + 1;
            g805d90a = edx29;
            edx28 = edx29 - 1;
        }
        eax30 = 0x6a;
        esp31 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp9) - 4 + 4);
        __asm__("int 0x80");
        if (!0 && (eax32 = g805d694, eax30 = eax32 & 0x4000, !eax30)) {
            ecx = reinterpret_cast<void**>(1);
            fun_8048e06(1, v5);
            edi3 = v5;
            esp2 = reinterpret_cast<void*>(esp31 - 4 + 4 - 4 + 4 + 4);
            continue;
        }
        tmp8_33 = *reinterpret_cast<void***>(edx28);
        *reinterpret_cast<void***>(edx28) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(&eax30) = tmp8_33;
        ebp34 = eax30;
        while (1) {
            if (ebx10 == edx28) {
            }
            esp31 = esp31 - 4 + 4;
            __asm__("int 0x80");
            if (!__intrinsic()) 
                break;
            ebx10 = reinterpret_cast<void**>(0x805d702);
        }
        eax35 = ebp34;
        *reinterpret_cast<void***>(edx28) = *reinterpret_cast<void***>(&eax35);
        edi36 = esi6;
        while (1) {
            ecx37 = reinterpret_cast<void**>(0x805d70a);
            eax38 = reinterpret_cast<void**>(0x8d);
            __asm__("int 0x80");
            if (0) {
                zf39 = g805d90f == 0;
                if (zf39) 
                    goto addr_8048696_58;
                zf40 = g805db0d == 0;
                if (zf40) 
                    goto addr_804861f_60;
                addr_8048696_58:
                zf41 = g805d90f == 0;
                if (zf41) 
                    break;
                esp42 = esp31 - 4 - 4;
                v43 = reinterpret_cast<void**>(0x805d90f);
            } else {
                eax38 = reinterpret_cast<void**>(0x805d797);
                edx44 = reinterpret_cast<void*>(0);
                esp45 = reinterpret_cast<void*>(esp31 - 4);
                while (ecx37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx37) + reinterpret_cast<uint32_t>(edx44)), esi46 = g805d90a, reinterpret_cast<unsigned char>(eax38) > reinterpret_cast<unsigned char>(ecx37)) {
                    eax38 = fun_804824a(ecx37);
                    ecx37 = ecx37;
                    esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4 - 4 + 4 + 4);
                    zf47 = edi36 == esi46 - 1;
                    edi36 = edi36;
                    if (!zf47) {
                        esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) + 4);
                    }
                    edx44 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(ecx37 + 8)));
                }
                esp31 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp45) + 4);
                if (1) 
                    continue;
                esp42 = esp31 - 4;
                if (v48) 
                    goto addr_80486e3_69;
                zf49 = g805d90f == 0;
                if (zf49) 
                    goto addr_804860c_71;
            }
            addr_80486e3_69:
            zf50 = g805db0d == 0;
            if (zf50) {
                eax38 = reinterpret_cast<void**>(0x805d90f);
                zf51 = g805d90f == 0;
                if (!zf51) {
                    esp42 = esp42 - 4;
                }
                esi52 = v43;
                ebx53 = edi36;
                ecx54 = esi52;
                edi55 = reinterpret_cast<void***>(0x805da0e);
                do {
                    __asm__("lodsb ");
                    *edi55 = reinterpret_cast<void**>(15);
                    ++edi55;
                    ++esi52;
                } while (1);
                ecx37 = esi52;
                edi36 = ebx53;
                *reinterpret_cast<void***>(ecx54 - 1) = reinterpret_cast<void**>(10);
            }
            g805db0d = reinterpret_cast<signed char>(g805db0d + 1);
            while (edx56 = v43, esp31 = esp42 + 4, !!edx56) {
                ebx57 = edx56;
                if (*reinterpret_cast<void***>(ebx57) != 10) {
                    --ebx57;
                }
                do {
                    ++ebx57;
                    __asm__("lodsb ");
                } while (eax38 == *reinterpret_cast<void***>(ebx57));
                g805da0d = 0;
                fun_804823d(ecx37, 0);
                --ecx37;
                *reinterpret_cast<void***>(edx56 - 1) = reinterpret_cast<void**>(10);
                edi36 = edi36;
                eax38 = fun_8048e06(ecx37, 0);
                esp42 = esp31 - 4 + 4 - 4 + 4;
            }
            g805d90f = reinterpret_cast<void**>(0);
            continue;
            addr_804860c_71:
            ebx58 = edi36;
            edi59 = reinterpret_cast<void***>(0x805d90f);
            do {
                __asm__("lodsb ");
                *edi59 = eax38;
                ++edi59;
            } while (eax38);
            edi36 = ebx58;
            esp31 = esp42 + 4 + 4;
        }
        zf60 = g805da0e == 0;
        if (!zf60) {
            addr_804861f_60:
            eax62 = fun_8048e06(5, v61);
            esp63 = reinterpret_cast<void*>(esp31 - 4 + 4 - 4 + 4);
            edi64 = g805d90a;
        } else {
            addr_80486a9_93:
            ecx = reinterpret_cast<void**>(5);
            fun_8048e06(5, v65);
            fun_8048df5(5);
            fun_8048df5(5);
            __asm__("int 0x80");
            edi3 = v65;
            esp2 = reinterpret_cast<void*>(esp31 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4);
            continue;
        }
        do {
            __asm__("lodsb ");
            *reinterpret_cast<void***>(edi64) = eax62;
            ++edi64;
        } while (eax62);
        esi6 = edi64;
        do {
            __asm__("lodsb ");
            if (esi6 == 0x804959a) 
                break;
        } while (!reinterpret_cast<int1_t>(eax62 == 32));
        goto addr_8048648_101;
        addr_804864a_102:
        __asm__("int 0x80");
        if (!0 && (eax66 = g805d694, (eax66 & 0x4000) == 0x4000)) {
            edi67 = edi64 - 1;
            *reinterpret_cast<void***>(edi67) = reinterpret_cast<void**>(47);
            edi64 = edi67 + 1 + 1;
        }
        esp31 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp63) - 4 + 4 + 4 - 4);
        v65 = edi64 - 1;
        goto addr_80486a9_93;
        addr_8048648_101:
        goto addr_804864a_102;
        addr_8048517_8:
        ++edi7;
        ebx10 = edi7;
        if (edx11) 
            goto addr_8048546_45; else 
            goto addr_804851e_41;
        addr_804847d_13:
        continue;
        addr_80483e4_18:
        continue;
        addr_8048482_22:
        ebx68 = g805d6fa;
        if (!ebx68) 
            goto addr_8048458_12;
        ecx69 = g805d6f6;
        if (reinterpret_cast<unsigned char>(ecx69) < reinterpret_cast<unsigned char>(*ebx68)) {
            ecx70 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx69 + 1) << 2);
            esi6 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ebx68) - reinterpret_cast<unsigned char>(ecx70));
            fun_804823d(ecx70, v71);
            esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
            edi73 = reinterpret_cast<void***>(0x804959a);
            ecx74 = ecx70 - 1;
            ebp75 = ecx74 - 1;
            while (ecx74) {
                --ecx74;
                *edi73 = *reinterpret_cast<void***>(esi6);
                ++edi73;
                ++esi6;
            }
            edi3 = reinterpret_cast<void**>(edi73 - 1);
            fun_8048e06(5, v76);
            fun_8048df5(5);
            ecx = ebp75;
            fun_8048e06(ecx, v77);
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp72) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
            goto addr_804847d_13;
        } else {
            --g805d6f6;
            goto addr_8048458_12;
        }
        addr_804837a_39:
        *reinterpret_cast<void***>(edi3) = eax27;
        ++edi3;
        addr_8048375_111:
        continue;
        addr_8048345_40:
        esp78 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 4);
        v79 = edi3;
        do {
            tmp8_80 = *reinterpret_cast<void***>(edi3);
            *reinterpret_cast<void***>(edi3) = eax27;
            eax27 = tmp8_80;
            ++edi3;
        } while (eax27);
        *reinterpret_cast<void***>(edi3) = reinterpret_cast<void**>(0);
        edi3 = v79 + 1;
        fun_8048e06(4, v81);
        fun_8048e06(1, v82);
        ecx = reinterpret_cast<void**>(1);
        fun_8048e06(1, v83);
        esp2 = reinterpret_cast<void*>(esp78 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
        goto addr_8048375_111;
    }
    fun_80482ab(ecx);
    fun_8048df5(ecx);
    __asm__("int 0x80");
    eax84 = reinterpret_cast<void**>(12);
    __asm__("int 0x80");
    if (!1) {
        eax84 = fun_8048e1c(ecx);
    }
    return eax84;
    addr_804839b_35:
    fun_804911e(ecx);
    esp85 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
    while (1) {
        while (fun_8048df5(ecx), eax86 = fun_80482ea(ecx), esp85 = esp85 - 4 + 4 - 4 + 4, !!eax86) {
            ecx87 = g805d6fa;
            if (!ecx87) {
                esp85 = esp85 - 4;
                g805d6fa = esp85;
            }
            g805d6f6 = v88 + 1;
            __asm__("int 0x80");
            edi89 = reinterpret_cast<signed char*>(45);
            esp90 = reinterpret_cast<void*>(esp85 - 4 + 4 - 4 - 4 + 4);
            __asm__("int 0x80");
            esi91 = reinterpret_cast<signed char*>(0x804959a);
            ecx = eax86;
            while (ecx) {
                --ecx;
                *edi89 = *esi91;
                ++edi89;
                ++esi91;
            }
            *(edi89 - 1) = 0;
            eax92 = fun_804874f(45);
            esp85 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp90) - 4 + 4);
            if (!eax92) 
                break;
            if (eax92 >= 0) 
                goto addr_80481c1_128;
        }
        continue;
        addr_80481c1_128:
        fun_8048b8c(ecx, 45);
        esp85 = esp85 - 4 + 4;
    }
    addr_8048380_37:
    while (*reinterpret_cast<void***>(edi3)) {
        ++edi3;
    }
    *reinterpret_cast<void***>(edi3) = reinterpret_cast<void**>(10);
    eax93 = edi3 - 0x8049599;
    if (!(eax93 - 1)) {
        eax93 = reinterpret_cast<void**>(0);
    }
    return eax93;
}

void** fun_8048e06(void** ecx, void** a2) {
    int1_t zf3;

    zf3 = g805db23 == 0;
    if (!zf3) {
        __asm__("int 0x80");
    }
    return 4;
}

void** fun_8048df5(void** ecx) {
    void** eax2;

    __asm__("pushad ");
    fun_804823d(ecx, __return_address());
    eax2 = fun_8048e06(ecx - 1 - 1, __return_address());
    __asm__("popad ");
    return eax2;
}

int32_t fun_80488d8() {
    int32_t ebp1;
    int32_t edx2;

    *reinterpret_cast<struct s0**>(ebp1 * 4 + 0x805b5a0) = reinterpret_cast<struct s0*>(0);
    g805d668 = reinterpret_cast<struct s0*>(0);
    g805d66c = reinterpret_cast<struct s0*>(0);
    g805d670 = reinterpret_cast<struct s0*>(0);
    g805d674 = reinterpret_cast<struct s0*>(0);
    g805d678 = reinterpret_cast<struct s0*>(0);
    return edx2;
}

int32_t fun_8048b1b(int32_t a1, int32_t a2, int32_t a3);

signed char fun_8048af2() {
    int32_t v1;
    int32_t v2;
    int32_t eax3;
    int32_t v4;
    int32_t edx5;
    int1_t zf6;
    int32_t eax7;
    signed char* edi8;
    int32_t eax9;

    v1 = reinterpret_cast<int32_t>(__return_address());
    v2 = eax3;
    v4 = edx5;
    while (1) {
        zf6 = *reinterpret_cast<signed char*>(&eax7) == 42;
        if (!zf6) {
            if (*reinterpret_cast<signed char*>(&eax7) != 63) {
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax7) + 1) = *edi8;
                if (!eax7) 
                    break;
                if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax7) + 1) != *reinterpret_cast<signed char*>(&eax7)) 
                    break;
            } else {
                ++edi8;
                __asm__("lodsb ");
                continue;
            }
        } else {
            eax7 = fun_8048b1b(v4, v2, v1);
            if (!zf6) 
                goto addr_8048b00_8;
        }
        __asm__("lodsb ");
        ++edi8;
    }
    addr_8048b14_10:
    eax9 = v2;
    return *reinterpret_cast<signed char*>(&eax9);
    addr_8048b00_8:
    goto addr_8048b14_10;
}

int32_t fun_8048b1b(int32_t a1, int32_t a2, int32_t a3) {
    signed char al4;
    signed char al5;
    int32_t eax6;
    signed char* edi7;
    signed char al8;

    do {
        __asm__("lodsb ");
        if (!al4) 
            break;
    } while (al5 == 42);
    goto addr_8048b24_3;
    addr_8048b34_4:
    goto a3;
    addr_8048b24_3:
    while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1) = *edi7, al8 != *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1)) {
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax6) + 1)) 
            goto addr_8048b32_6;
        ++edi7;
    }
    return eax6;
    addr_8048b32_6:
    goto addr_8048b34_4;
}

signed char fun_8048dd5(void** ecx) {
    signed char v2;
    signed char eax3;
    int32_t eax4;
    int32_t ebx5;

    v2 = eax3;
    do {
        if (0) 
            break;
        __asm__("lodsd ");
    } while (eax4 != ebx5);
    goto addr_8048de9_4;
    addr_8048dee_6:
    return v2;
    addr_8048de9_4:
    goto addr_8048dee_6;
}

signed char fun_8048b38(void** ecx) {
    int1_t zf2;
    signed char eax3;
    int32_t edi4;
    signed char* edi5;
    signed char* edi6;
    void* edi7;
    uint32_t eax8;
    int16_t ax9;
    signed char eax10;

    zf2 = *reinterpret_cast<signed char*>(&g805db50) == 0x7f;
    if (zf2) {
        eax3 = fun_8048dd5(ecx);
        if (!edi4) {
        }
        *edi5 = eax3;
        edi6 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi7) - 0x805db28);
        eax8 = reinterpret_cast<uint32_t>(edi6) >> 2;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax9) + 1) = 10;
        *reinterpret_cast<signed char*>(&ax9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax8) + 48);
        *reinterpret_cast<int16_t*>(&g805db0e) = ax9;
        fun_8048df5(ecx);
        ecx = reinterpret_cast<void**>(2);
        fun_8048e06(2, __return_address());
    }
    eax10 = fun_8048dd5(ecx);
    if (edi6) {
        eax10 = reinterpret_cast<signed char>(0);
        *edi6 = reinterpret_cast<signed char>(0);
    }
    return eax10;
}

void** fun_8048fea(void** ecx, int32_t a2) {
    void** eax3;

    eax3 = fun_8048df5(ecx);
    return eax3;
}

void** fun_804911e(void** ecx) {
    void** eax2;

    eax2 = fun_8048df5(ecx);
    return eax2;
}

struct s7 {
    unsigned char f0;
    signed char[134600449] pad134600450;
    signed char f805d702;
};

void** fun_80490e2(void** ecx);

void** fun_8049100(void** ecx);

int32_t g805b59c;

void fun_8048000(void** ecx, int32_t a2, int32_t a3) {
    int1_t less_or_equal4;
    void* eax5;
    int32_t* ebx6;
    int32_t* ebx7;
    int32_t eax8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    void** eax21;
    signed char al22;
    signed char* eax23;
    void** eax24;
    signed char dh25;
    void* tmp8_26;
    uint1_t cf27;
    struct s7* eax28;
    unsigned char tmp8_29;
    uint1_t cf30;
    signed char* eax31;
    int32_t ebx32;
    int32_t eax33;

    if (less_or_equal4) {
        *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx)) + reinterpret_cast<int32_t>(eax5));
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<unsigned char>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<unsigned char>(ecx)) + 44);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh25);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = tmp8_26;
        eax28 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(eax24 + 0x5b5c0000) + cf27);
        *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx)) + reinterpret_cast<uint32_t>(eax28));
        eax28->f0 = reinterpret_cast<unsigned char>(eax28->f0 + *reinterpret_cast<signed char*>(&eax28));
    }
    tmp8_29 = reinterpret_cast<unsigned char>(eax28->f0 + *reinterpret_cast<signed char*>(&eax28));
    cf30 = reinterpret_cast<uint1_t>(tmp8_29 < eax28->f0);
    eax28->f0 = tmp8_29;
    eax28->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax28->f0 + *reinterpret_cast<signed char*>(&eax28)) + cf30);
    eax31 = &eax28->f805d702;
    __asm__("das ");
    *eax31 = reinterpret_cast<signed char>(*eax31 + *reinterpret_cast<signed char*>(&eax31));
    fun_80481c8(ecx);
    fun_8048212();
    if (!a3) {
        g805db23 = 1;
        fun_8048df5(ecx);
        g805db54 = a3;
        fun_8048266(ecx);
        g804950e = 1;
        __asm__("int 0x80");
        g804950e = 1;
        __asm__("int 0x80");
        g804950e = reinterpret_cast<int32_t>(fun_80490e2);
        __asm__("int 0x80");
        g804950e = reinterpret_cast<int32_t>(fun_8049100);
        __asm__("int 0x80");
        __asm__("int 0x80");
        g805db58 = 20;
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        ebx32 = reinterpret_cast<int32_t>("$ ");
        if (!1) {
            ebx32 = reinterpret_cast<int32_t>("# ");
        }
        g805b59c = ebx32;
    } else {
        eax33 = 5;
        __asm__("int 0x80");
        if (!1) {
            fun_8048e1c(0);
            eax33 = 1;
            __asm__("int 0x80");
        }
        g805db54 = eax33;
        g805b59c = reinterpret_cast<int32_t>("+ ");
    }
    g805d668 = reinterpret_cast<struct s0*>(0);
    g805d66c = reinterpret_cast<struct s0*>(0);
    g805d670 = reinterpret_cast<struct s0*>(0);
    g805d674 = reinterpret_cast<struct s0*>(0);
    g805d678 = reinterpret_cast<struct s0*>(0);
}

struct s8 {
    void* f0;
    signed char[67587] pad67588;
    unsigned char f10804;
};

struct s9 {
    signed char[4] pad4;
    signed char f4;
};

struct s10 {
    signed char f0;
    signed char[554173587] pad554173588;
    signed char f21080494;
};

struct s11 {
    signed char[4] pad4;
    signed char f4;
};

struct s12 {
    signed char f0;
    signed char[3] pad4;
    signed char f4;
};

struct s12* g18080494;

struct s13 {
    void* f0;
    signed char[6] pad7;
    uint32_t f7;
};

struct s14 {
    signed char[103] pad103;
    signed char f67;
};

struct s15 {
    signed char[100] pad100;
    signed char f64;
};

struct s16 {
    signed char[100] pad100;
    signed char f64;
};

void fun_80493e7(struct s8* ecx) {
    int32_t edx2;
    unsigned char* eax3;
    signed char* eax4;
    signed char* edi5;
    struct s9* edi6;
    struct s10* esi7;
    struct s11* esi8;
    signed char v9;
    signed char v10;
    unsigned char* eax11;
    unsigned char tmp8_12;
    int1_t cf13;
    unsigned char tmp8_14;
    uint1_t cf15;
    unsigned char tmp8_16;
    uint1_t cf17;
    int32_t edx18;
    unsigned char* edx19;
    signed char* eax20;
    signed char* edx21;
    struct s12* eax22;
    struct s13* eax23;
    unsigned char* edi24;
    struct s14* esi25;
    signed char* eax26;
    struct s13* eax27;
    signed char* esp28;
    signed char ds29;
    struct s8* eax30;
    uint32_t edx31;
    void* ecx32;
    struct s13* eax33;
    void* v34;
    void* v35;
    void* v36;
    signed char bh37;
    int1_t cf38;
    int1_t zf39;
    unsigned char tmp8_40;
    unsigned char* ebx41;
    unsigned char* ebx42;
    unsigned char bl43;
    struct s15* ebx44;
    struct s16* ebx45;
    signed char v46;
    signed char dh47;
    unsigned char v48;
    signed char v49;
    signed char dh50;
    unsigned char v51;
    unsigned char tmp8_52;
    int32_t ebp53;
    int1_t cf54;
    int32_t ebp55;
    int32_t ebp56;
    int32_t ebp57;
    unsigned char tmp8_58;
    int1_t cf59;
    unsigned char tmp8_60;
    int1_t cf61;
    unsigned char tmp8_62;
    int1_t cf63;

    eax3 = reinterpret_cast<unsigned char*>(*reinterpret_cast<int32_t*>(edx2 + 0x34080494)(__return_address()));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + reinterpret_cast<int32_t>(eax3));
    *eax3 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<signed char*>(&eax3));
    __asm__("insb ");
    eax4 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4);
    *reinterpret_cast<void**>(&eax4) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax4)) + 8);
    edi5 = &edi6->f4;
    esi7 = reinterpret_cast<struct s10*>(&esi8->f4);
    v9 = reinterpret_cast<signed char>(v10 + reinterpret_cast<int32_t>(eax4));
    v9 = reinterpret_cast<signed char>(v9 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax4)));
    __asm__("outsd ");
    eax11 = eax3;
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) + 8);
    __asm__("ror byte [esi+0x10804], cl");
    tmp8_12 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<unsigned char*>(&eax11));
    cf13 = tmp8_12 < *eax11;
    *eax11 = tmp8_12;
    if (cf13) {
        __asm__("in al, 0x8e");
        *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) + 8) + 8);
        *eax11 = reinterpret_cast<unsigned char>(*eax11 + reinterpret_cast<int32_t>(eax11));
        tmp8_14 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<unsigned char*>(&eax11));
        cf15 = reinterpret_cast<uint1_t>(tmp8_14 < *eax11);
        *eax11 = tmp8_14;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax4) + reinterpret_cast<int32_t>(eax11) + 0x48efe08) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax4) + reinterpret_cast<int32_t>(eax11) + 0x48efe08) + 8) + cf15);
        *eax11 = reinterpret_cast<unsigned char>(*eax11 + reinterpret_cast<int32_t>(eax11));
        tmp8_16 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<unsigned char*>(&eax11));
        cf17 = reinterpret_cast<uint1_t>(tmp8_16 < *eax11);
        *eax11 = tmp8_16;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(eax4) + reinterpret_cast<int32_t>(eax11) + 0x491cc08) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax4) + reinterpret_cast<int32_t>(eax11) + 0x491cc08) + 8 + cf17;
        *eax11 = reinterpret_cast<unsigned char>(*eax11 + reinterpret_cast<int32_t>(eax11));
        *eax11 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<unsigned char*>(&eax11));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax4) + reinterpret_cast<int32_t>(eax11) + 0x4920308) = edx18;
        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) | *reinterpret_cast<unsigned char*>(&eax11));
        *eax11 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<unsigned char*>(&eax11));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi7) + 0x21080494) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi7) + 0x21080494) + *reinterpret_cast<signed char*>(&ecx));
        edx19 = eax11;
        eax20 = edx21;
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax20) + 8);
        *eax20 = reinterpret_cast<signed char>(*eax20 + reinterpret_cast<int32_t>(eax20));
        *eax20 = reinterpret_cast<signed char>(*eax20 + *reinterpret_cast<signed char*>(&eax20));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) - 0xf7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx) - 0xf7fc) ^ *reinterpret_cast<unsigned char*>(&edx19));
    }
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) + 8);
    __asm__("fmul qword [esi+0x10804]");
    *eax11 = reinterpret_cast<unsigned char>(*eax11 + *reinterpret_cast<unsigned char*>(&eax11));
    eax22 = g18080494;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<uint32_t>(ecx)) = v9;
    eax22->f0 = reinterpret_cast<signed char>(eax22->f0 + reinterpret_cast<int32_t>(eax22));
    eax22->f0 = reinterpret_cast<signed char>(eax22->f0 + *reinterpret_cast<signed char*>(&eax22));
    *edi5 = esi7->f0;
    eax23 = reinterpret_cast<struct s13*>(eax4 + 4);
    *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax23)) + 8);
    __asm__("int1 ");
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(ecx)) = eax22->f0;
    edi24 = reinterpret_cast<unsigned char*>(edi5 + 1 + 4);
    esi25 = reinterpret_cast<struct s14*>(&esi7->pad554173588 + 1);
    eax26 = &eax22->f4;
    *reinterpret_cast<signed char*>(&eax26) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax26) + 8) + 8);
    *eax26 = reinterpret_cast<signed char>(*eax26 + reinterpret_cast<int32_t>(eax26));
    *eax26 = reinterpret_cast<signed char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    __asm__("lodsb ");
    eax27 = eax23;
    *reinterpret_cast<void**>(&eax27) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax27)) + 8);
    esp28 = eax26 - 2;
    *esp28 = ds29;
    eax30 = ecx;
    *reinterpret_cast<void**>(&eax30) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax30)) + 8);
    eax30->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax30->f0) + reinterpret_cast<uint32_t>(eax30));
    eax30->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax30->f0) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax30)));
    *reinterpret_cast<void**>(&eax30) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax30)) + 8);
    *reinterpret_cast<unsigned char*>(&edx31) = reinterpret_cast<unsigned char>(0x94 ^ eax30->f10804);
    eax30->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax30->f0) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax30)));
    ecx32 = reinterpret_cast<void*>(0x85080494);
    eax33 = eax27;
    *reinterpret_cast<void**>(&eax33) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)) + 8);
    v34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v35) + reinterpret_cast<uint32_t>(eax33));
    v36 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(v34) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)));
    esp28[reinterpret_cast<int32_t>(edi24) * 2] = reinterpret_cast<signed char>(esp28[reinterpret_cast<int32_t>(edi24) * 2] + bh37);
    cf38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)) < reinterpret_cast<unsigned char>(v36);
    zf39 = *reinterpret_cast<void**>(&eax33) == v36;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax33)) >= reinterpret_cast<signed char>(v36)) 
        goto addr_8049477_18;
    addr_80494e0_19:
    __asm__("insb ");
    __asm__("outsd ");
    __asm__("arpl [ecx+0x6c], sp");
    __asm__("das ");
    tmp8_40 = reinterpret_cast<unsigned char>(*edi24 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx32) + 1));
    cf38 = tmp8_40 < *edi24;
    *edi24 = tmp8_40;
    if (!*edi24) {
        if (cf38) {
        }
    }
    addr_8049477_18:
    __asm__("insb ");
    __asm__("outsd ");
    __asm__("a16 outsd ");
    if (!zf39) {
        addr_80494f3_24:
        __asm__("das ");
        if (cf38) {
            eax33 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(eax33) | 0x40315b1b);
            *ebx41 = reinterpret_cast<unsigned char>(*ebx42 | bl43);
        }
    } else {
        ebx44->f64 = reinterpret_cast<signed char>(ebx45->f64 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax33) + 1)));
        cf38 = reinterpret_cast<unsigned char>(v46 + dh47) < v48;
        if (!cf38) {
            __asm__("insb ");
            __asm__("outsd ");
            goto addr_80494f1_29;
        } else {
            cf38 = reinterpret_cast<unsigned char>(v49 + dh50) < v51;
            if (__intrinsic()) {
                addr_80494f1_29:
                __asm__("arpl [ecx+0x6c], sp");
                goto addr_80494f3_24;
            } else {
                tmp8_52 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(0x7af7fb6c - ebp53 * 2 + 0x72) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax33) + 1)));
                cf54 = tmp8_52 < *reinterpret_cast<unsigned char*>(0x7af7fb6c - ebp55 * 2 + 0x72);
                *reinterpret_cast<unsigned char*>(0x7af7fb6c - ebp56 * 2 + 0x72) = tmp8_52;
                __asm__("outsb ");
                __asm__("popad ");
                if (*reinterpret_cast<signed char*>(0x7af7fb6c - ebp57 * 2 + 0x72) < 0) {
                    addr_804950d_33:
                } else {
                    __asm__("outsd ");
                    if (cf54) {
                    }
                    esi25->f67 = reinterpret_cast<signed char>(esi25->f67 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax33) + 1)));
                    *reinterpret_cast<signed char*>(edx31 + 0x67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx31 + 0x67) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax33) + 1)));
                    tmp8_58 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx31 + 0x6f) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx32) + 1));
                    cf59 = tmp8_58 < *reinterpret_cast<unsigned char*>(edx31 + 0x6f);
                    *reinterpret_cast<unsigned char*>(edx31 + 0x6f) = tmp8_58;
                    __asm__("arpl [ebp+0x61], bp");
                    if (*reinterpret_cast<unsigned char*>(edx31 + 0x6f)) {
                    }
                    __asm__("popad ");
                    if (!cf59) {
                    }
                    __asm__("insb ");
                    __asm__("das ");
                    tmp8_60 = reinterpret_cast<unsigned char>(*edi24 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx32) + 1));
                    cf61 = tmp8_60 < *edi24;
                    *edi24 = tmp8_60;
                    if (!cf61) {
                    }
                    __asm__("das ");
                    tmp8_62 = reinterpret_cast<unsigned char>(*edi24 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx32) + 1));
                    cf63 = tmp8_62 < *edi24;
                    *edi24 = tmp8_62;
                    if (*edi24) {
                    }
                    if (!cf63) 
                        goto addr_80494d6_47;
                }
            }
        }
    }
    eax33->f7 = eax33->f7 ^ edx31;
    eax33->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax33->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)));
    eax33->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax33->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax33)));
    goto addr_804950d_33;
    addr_80494d6_47:
    if (cf63) {
        __asm__("das ");
        goto addr_80494e0_19;
    }
}

signed char* g805b5a4;

signed char* fun_8048ea7(void** ecx) {
    void** v2;
    int1_t zf3;
    int32_t* esi4;
    int32_t* edi5;
    signed char* eax6;
    int1_t zf7;
    int32_t eax8;

    v2 = reinterpret_cast<void**>(__return_address());
    zf3 = g805db50 == 0;
    if (zf3 && (esi4 = reinterpret_cast<int32_t*>(0x805b5a0), edi5 = reinterpret_cast<int32_t*>(0x805b5a0), eax6 = reinterpret_cast<signed char*>(0), zf7 = g805b5a4 == 0, !zf7)) {
        do {
            ++edi5;
            eax8 = *edi5;
            *esi4 = eax8;
            ++esi4;
        } while (eax8);
        eax6 = fun_8048b8c(ecx, v2);
    }
    return eax6;
}

void fun_8048edc() {
    g805db50 = 0;
    return;
}

void fun_8048f18() {
    signed char* eax1;
    void** ecx2;
    int32_t tmp32_3;
    int1_t zf4;

    eax1 = g805b5a4;
    ecx2 = reinterpret_cast<void**>(0);
    if (!(eax1 && (*reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(*eax1 - 48), *reinterpret_cast<unsigned char*>(&ecx2) >= 11) || (tmp32_3 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx2) * 4 + 0x805db28), *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx2) * 4 + 0x805db28) = 0, tmp32_3 == 0))) {
        fun_80482ab(ecx2);
        g805db24 = tmp32_3;
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        if (1) {
            while (1) {
                __asm__("int 0x80");
                if (0) 
                    continue;
                zf4 = g805db24 == 0x72;
                if (zf4) 
                    break;
                fun_8048b38(0x805db50);
            }
            fun_8048b38(0x805db50);
        } else {
            fun_8048fea(18, __return_address());
        }
        __asm__("int 0x80");
        g805db58 = 20;
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_8048266(0x5410);
        g805db24 = 0;
        return;
    }
}

void fun_8049090() {
    int32_t esi1;
    void** eax2;
    int32_t esi3;
    signed char* edi4;
    int32_t ecx5;
    void** eax6;
    int32_t v7;
    void** v8;

    esi1 = 0x805db28;
    while (esi1 != 0x805db50) {
        __asm__("lodsd ");
        if (!eax2) 
            continue;
        g805db0e = (reinterpret_cast<uint32_t>(esi1 - 0x805db2c) >> 2) + 0x203a30;
        esi3 = esi1 + 4;
        edi4 = reinterpret_cast<signed char*>(0x805db11);
        ecx5 = 0;
        eax6 = eax2;
        do {
            eax6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax6) / 10);
            ++ecx5;
        } while (eax6);
        do {
            *edi4 = 17;
            ++edi4;
            ++esi3;
            --ecx5;
        } while (ecx5);
        *edi4 = 10;
        esi1 = esi3 + 1;
        eax2 = fun_8048e06(reinterpret_cast<int32_t>(edi4 + 1) - (v7 - 1 - 1 - 1), v8);
    }
    return;
}

void** fun_80490e2(void** ecx) {
    int32_t ebx2;
    void** eax3;

    ebx2 = g805db24;
    if (ebx2) {
        __asm__("int 0x80");
        return 37;
    } else {
        eax3 = fun_8048df5(ecx);
        return eax3;
    }
}

struct s17 {
    void* f0;
    signed char[31] pad32;
    unsigned char f20;
    signed char[6] pad39;
    unsigned char f27;
    signed char[60] pad100;
    unsigned char f64;
    signed char[9] pad110;
    unsigned char f6e;
    signed char[4] pad115;
    unsigned char f73;
    signed char[134517760] pad134517876;
    unsigned char f8049474;
};

struct s18 {
    struct s17* f0;
    signed char[28] pad32;
    int32_t f20;
};

struct s19 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s20 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s21 {
    signed char[105] pad105;
    signed char f69;
};

struct s22 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s23 {
    signed char[111] pad111;
    signed char f6f;
};

struct s24 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s25 {
    signed char[104] pad104;
    signed char f68;
};

struct s26 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s27 {
    signed char[105] pad105;
    int32_t f69;
};

struct s28 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s29 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s30 {
    signed char[97] pad97;
    signed char f61;
};

struct s31 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s32 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s33 {
    signed char[97] pad97;
    signed char f61;
};

struct s34 {
    signed char[97] pad97;
    signed char f61;
};

struct s35 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s36 {
    signed char[111] pad111;
    signed char f6f;
};

struct s37 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s38 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s39 {
    signed char[108] pad108;
    int32_t f6c;
};

struct s40 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s41 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s42 {
    signed char[101] pad101;
    int32_t f65;
};

struct s43 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s44 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s45 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s46 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s47 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s48 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s49 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s50 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s51 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_8049254(int16_t cx) {
    struct s17* ecx1;
    struct s18* esp2;
    int1_t cf3;
    struct s19* si4;
    struct s20* si5;
    unsigned char ah6;
    int1_t cf7;
    int1_t zf8;
    struct s21* si9;
    int1_t sf10;
    int1_t of11;
    int1_t zf12;
    void* edi13;
    int32_t ebp14;
    int1_t zf15;
    void* ebx16;
    int32_t esi17;
    struct s17* eax18;
    unsigned char al19;
    unsigned char* eax20;
    signed char* ebx21;
    signed char* ebx22;
    signed char ah23;
    signed char* esi24;
    signed char* esi25;
    signed char bh26;
    struct s22* esi27;
    struct s23* esi28;
    struct s24* ebx29;
    struct s25* ebx30;
    int32_t* esp31;
    int32_t ebx32;
    void** esp33;
    void* edi34;
    unsigned char ah35;
    unsigned char* edx36;
    unsigned char dl37;
    struct s26* ebx38;
    struct s27* ebx39;
    struct s28* ebx40;
    struct s29* ebx41;
    unsigned char dh42;
    unsigned char tmp8_43;
    struct s30* ebx44;
    signed char ah45;
    struct s31* ebx46;
    struct s32* ebx47;
    struct s33* ebx48;
    struct s34* ebx49;
    struct s35* esi50;
    struct s36* esi51;
    struct s37* ebx52;
    struct s38* ebx53;
    unsigned char dh54;
    struct s39* esi55;
    unsigned char tmp8_56;
    struct s40* ebx57;
    struct s41* ebx58;
    unsigned char dh59;
    struct s17* ebx60;
    unsigned char ah61;
    struct s42* esi62;
    unsigned char dh63;
    struct s43* esi64;
    int1_t zf65;
    void* tmp8_66;
    struct s44* ebx67;
    struct s45* ebx68;
    unsigned char ah69;
    unsigned char ah70;
    void* ah71;
    struct s46* ebx72;
    struct s47* ebx73;
    unsigned char dh74;
    unsigned char tmp8_75;
    int1_t cf76;
    struct s48* ebx77;
    struct s49* ebx78;
    unsigned char dh79;
    struct s50* ebx80;
    struct s51* ebx81;
    unsigned char ah82;

    *reinterpret_cast<int16_t*>(&ecx1) = cx;
    esp2 = reinterpret_cast<struct s18*>(__zero_stack_offset());
    __asm__("popad ");
    if (!cf3) {
        addr_80492c4_2:
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&si4->f69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&si5->f69) & ah6);
        cf7 = 0;
        zf8 = *reinterpret_cast<signed char*>(&si9->f69) == 0;
        sf10 = __intrinsic();
        of11 = 0;
        goto addr_80492c6_3;
    } else {
        if (!zf12) {
            addr_80492cd_5:
            if (!sf10) {
                addr_80492dc_6:
                __asm__("daa ");
                if (zf8) {
                    addr_8049301_7:
                    esp2 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esp2) - 4);
                    esp2->f0 = reinterpret_cast<struct s17*>(0x6f);
                    goto addr_8049305_8;
                } else {
                    addr_80492e1_9:
                    __asm__("outsd ");
                    if (of11) 
                        goto addr_8049349_10;
                }
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi13) + ebp14 * 2 + 0x67) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi13) + ebp14 * 2 + 0x67) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
                zf15 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi13) + ebp14 * 2 + 0x67) == 0;
                sf10 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi13) + ebp14 * 2 + 0x67) < 0;
                goto addr_80492d5_12;
            }
        } else {
            ebp14 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx16) + esi17 * 2 + 32) * 0x6c656873;
            __asm__("insb ");
            *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al19 | *eax20) & 32);
            *ebx21 = reinterpret_cast<signed char>(*ebx22 + ah23);
            eax18->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax18->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)));
            esp2 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esp2) - reinterpret_cast<unsigned char>(eax18->f0));
            *esi24 = reinterpret_cast<signed char>(*esi25 + bh26);
            eax18->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax18->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)));
            __asm__("arpl [edi+0x6d], bp");
            __asm__("insd ");
            __asm__("popad ");
            __asm__("outsb ");
            esi27->f6f = 0;
            cf7 = 0;
            zf8 = esi28->f6f == 0;
            sf10 = __intrinsic();
            of11 = 0;
            if (zf8) {
                addr_804929e_14:
                ecx1 = esp2->f0;
                esp2 = reinterpret_cast<struct s18*>(&esp2->pad32);
                __asm__("outsd ");
                if (!zf8) {
                    addr_80492c2_15:
                    goto addr_80492c4_2;
                } else {
                    if (!cf7) {
                        addr_8049305_8:
                        ebx29->f68 = reinterpret_cast<unsigned char>(ebx30->f68 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)));
                        ebp14 = esp2->f20 * 0x30207369;
                        if (__undefined()) 
                            goto addr_8049358_17; else 
                            goto addr_8049314_18;
                    } else {
                        if (!sf10) {
                            addr_80492c6_3:
                            if (cf7) {
                                addr_8049331_20:
                                __asm__("insd ");
                                __asm__("insd ");
                                __asm__("popad ");
                                __asm__("outsb ");
                                goto addr_8049336_21;
                            } else {
                                __asm__("arpl [edi+ebp*2+0x72], si");
                                goto addr_80492cd_5;
                            }
                        } else {
                            esp31 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp2) - 4);
                            *esp31 = ebx32;
                            esp33 = reinterpret_cast<void**>(esp31 - 1);
                            *reinterpret_cast<void***>(esp33) = esp33;
                            edi13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi34) - 1);
                            esp2 = reinterpret_cast<struct s18*>(esp33 - 1);
                            esp2->f0 = eax18;
                            ecx1->f6e = reinterpret_cast<unsigned char>(ecx1->f6e & ah35);
                            ecx1->f20 = reinterpret_cast<unsigned char>(ecx1->f20 & *reinterpret_cast<unsigned char*>(&ecx1));
                            cf7 = 0;
                            zf15 = ecx1->f20 == 0;
                            sf10 = __intrinsic();
                            goto addr_80492b1_24;
                        }
                    }
                }
            } else {
                __asm__("outsw ");
                if (!zf8) {
                    goto addr_80492f1_27;
                } else {
                    *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)) | reinterpret_cast<unsigned char>(eax18->f0));
                    *reinterpret_cast<unsigned char*>(&edx36) = reinterpret_cast<unsigned char>(dl37 | ebx38->f75);
                    esp2 = reinterpret_cast<struct s18*>(ebx39->f69 * 0x69206564);
                    cf7 = __intrinsic();
                    sf10 = __undefined();
                    zf15 = __undefined();
                    if (!cf7) {
                        addr_80492b1_24:
                        if (!cf7) {
                            addr_8049314_18:
                            ++ebp14;
                            ecx1 = reinterpret_cast<struct s17*>(&ecx1->pad32);
                            esp2 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esp2) + 1);
                            ecx1->f27 = reinterpret_cast<unsigned char>(ecx1->f27 & *reinterpret_cast<unsigned char*>(&ecx1));
                            __asm__("insd ");
                            ebx40->f6f = reinterpret_cast<unsigned char>(ebx41->f6f & dh42);
                            if (0) 
                                goto addr_8049393_29; else 
                                goto addr_8049321_30;
                        } else {
                            if (!sf10) {
                                addr_80492d5_12:
                                __asm__("outsd ");
                                if (!zf15) 
                                    goto addr_804934d_32; else 
                                    goto addr_80492d9_33;
                            } else {
                                __asm__("a16 outsd ");
                                tmp8_43 = reinterpret_cast<unsigned char>(ebx44->f61 + ah45);
                                cf7 = tmp8_43 < ebx46->f61;
                                ebx47->f61 = tmp8_43;
                                sf10 = ebx48->f61 < 0;
                                of11 = __intrinsic();
                                __asm__("outsb ");
                                __asm__("daa ");
                                if (!ebx49->f61) 
                                    goto addr_80492e1_9;
                                __asm__("arpl [eax+0x61], bp");
                                goto addr_80492c2_15;
                            }
                        }
                    } else {
                        if (__intrinsic()) {
                            addr_80492f4_37:
                            esi50->f6f = reinterpret_cast<unsigned char>(esi51->f6f + *reinterpret_cast<unsigned char*>(&ecx1));
                            ebx52->f75 = reinterpret_cast<unsigned char>(ebx53->f75 & dh54);
                            __asm__("arpl [eax+0x20], bp");
                            goto addr_8049301_7;
                        } else {
                            ebp14 = esi55->f6c * 0x2e737365;
                            tmp8_56 = reinterpret_cast<unsigned char>(*edx36 + *reinterpret_cast<unsigned char*>(&ecx1));
                            cf7 = tmp8_56 < *edx36;
                            *edx36 = tmp8_56;
                            zf8 = *edx36 == 0;
                            sf10 = reinterpret_cast<signed char>(*edx36) < reinterpret_cast<signed char>(0);
                            of11 = __intrinsic();
                            goto addr_804929e_14;
                        }
                    }
                }
            }
        }
    }
    __asm__("outsb ");
    ebx57->f63 = reinterpret_cast<unsigned char>(ebx58->f63 & dh59);
    if (0) 
        goto addr_8049353_40;
    if (0) 
        goto addr_8049360_42;
    *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)) | reinterpret_cast<unsigned char>(eax18->f0));
    esp2 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(esp2) - 4);
    esp2->f0 = ebx60;
    if (!*reinterpret_cast<void**>(&eax18)) 
        goto addr_8049360_42;
    addr_80492f1_27:
    if (0) 
        goto addr_8049363_44;
    ecx1->f64 = 0;
    goto addr_80492f4_37;
    while (1) {
        addr_8049336_21:
        if (!cf7) {
            addr_8049359_46:
            eax18->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax18->f0) - reinterpret_cast<uint32_t>(esp2));
            sf10 = reinterpret_cast<signed char>(eax18->f0) < reinterpret_cast<signed char>(0);
        } else {
            __asm__("popad ");
            if (cf7) 
                break;
            *reinterpret_cast<unsigned char*>(ebp14 + 0x66) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp14 + 0x66) & ah61);
            ebp14 = esi62->f65 * 0x6e692064;
            cf7 = __intrinsic();
            sf10 = __undefined();
            if (__undefined()) 
                goto 0x80493ae;
            addr_8049349_10:
            if (cf7) 
                goto 0x80493b9;
            __asm__("popad ");
            __asm__("insb ");
            addr_804934d_32:
            __asm__("insb ");
            if (sf10) 
                goto addr_8049350_50;
        }
        __asm__("outsb ");
        if (sf10) 
            goto 0x80493d3;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi13) + ebp14 * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi13) + ebp14 * 2 + 32) & dh63);
        addr_8049360_42:
        addr_8049363_44:
        __asm__("popad ");
        esi64->f61 = 0;
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(ebp14 + 0x65) = 0;
        zf65 = *reinterpret_cast<unsigned char*>(ebp14 + 0x65) == 0;
        __asm__("popad ");
        __asm__("outsb ");
        if (1) {
            addr_8049390_53:
            *edx36 = reinterpret_cast<unsigned char>(*edx36 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>("exit")) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax18) + reinterpret_cast<uint32_t>("exit")) + *reinterpret_cast<unsigned char*>(&edx36));
        } else {
            if (zf65) 
                goto 0x80493da;
            __asm__("popad ");
            if (zf65) 
                goto addr_8049395_56; else 
                goto addr_8049375_57;
        }
        addr_8049393_29:
        addr_8049395_56:
        __asm__("in al, 0x8e");
        *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)) + 8);
        eax18->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax18->f0) + reinterpret_cast<uint32_t>(eax18));
        tmp8_66 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax18->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)));
        cf7 = reinterpret_cast<unsigned char>(tmp8_66) < reinterpret_cast<unsigned char>(eax18->f0);
        eax18->f0 = tmp8_66;
        if (reinterpret_cast<signed char>(eax18->f0) >= reinterpret_cast<signed char>(0)) 
            continue; else 
            goto "???";
        addr_8049375_57:
        if (zf65) 
            goto 0x80493df;
        addr_8049377_58:
        ebx67->f6f = reinterpret_cast<unsigned char>(ebx68->f6f & ah69);
        __asm__("insd ");
        __asm__("insd ");
        __asm__("popad ");
        __asm__("outsb ");
        ecx1->f73 = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx1) + ebp14 * 2 + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx1) + ebp14 * 2 + 0x73) & ah70);
        __asm__("popad ");
        *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) | *edx36);
        addr_804938e_59:
        eax18->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax18->f0) + reinterpret_cast<unsigned char>(ah71));
        goto addr_8049390_53;
        addr_8049350_50:
        ecx1 = reinterpret_cast<struct s17*>(&ecx1->pad32);
        ebx72->f74 = reinterpret_cast<unsigned char>(ebx73->f74 & dh74);
        addr_8049353_40:
        __asm__("popad ");
        if (0) 
            goto addr_8049377_58;
        *edx36 = reinterpret_cast<unsigned char>(*edx36 - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
        addr_8049358_17:
        goto addr_8049359_46;
    }
    addr_8049321_30:
    if (__intrinsic()) {
        tmp8_75 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax18) + ebp14 * 2 + 0x65) + *reinterpret_cast<unsigned char*>(&edx36));
        cf76 = tmp8_75 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax18) + ebp14 * 2 + 0x65);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax18) + ebp14 * 2 + 0x65) = tmp8_75;
        if (!cf76) 
            goto addr_804938e_59;
        ebx77->f68 = reinterpret_cast<unsigned char>(ebx78->f68 & dh79);
        __asm__("insb ");
    }
    __asm__("insb ");
    ebx80->f6f = reinterpret_cast<unsigned char>(ebx81->f6f & ah82);
    cf7 = 0;
    goto addr_8049331_20;
    addr_80492d9_33:
    *reinterpret_cast<void**>(&eax18) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax18)) | reinterpret_cast<unsigned char>(eax18->f0));
    cf7 = 0;
    zf8 = *reinterpret_cast<void**>(&eax18) == 0;
    sf10 = __intrinsic();
    of11 = 0;
    __asm__("arpl [ecx+0x6e], sp");
    goto addr_80492dc_6;
}

struct s52 {
    signed char[1] pad1;
    void** f1;
};

void fun_8048e34(void** ecx) {
    void** v2;
    int32_t edx3;
    signed char* edi4;
    int32_t ebp5;
    void* esi6;
    struct s52* ecx7;
    void** eax8;
    signed char* esi9;
    signed char* edi10;
    int32_t edx11;

    v2 = reinterpret_cast<void**>(__return_address());
    edx3 = g805d706;
    edi4 = g805b5a4;
    if (!edi4) {
        ebp5 = -1;
        while (++ebp5, esi6 = *reinterpret_cast<void**>(ebp5 * 4 + 0x805d5a0), !!esi6) {
            ecx7 = reinterpret_cast<struct s52*>(-1);
            do {
                ecx7 = reinterpret_cast<struct s52*>(&ecx7->f1);
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax8));
            esi9 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi6) - 1);
            *esi9 = 10;
            eax8 = fun_8048e06(&ecx7->f1, v2);
            *esi9 = 0;
        }
    } else {
        fun_804823d(ecx, v2);
        __asm__("int 0x80");
        __asm__("int 0x80");
        edi10 = reinterpret_cast<signed char*>(45);
        *reinterpret_cast<signed char**>(edx3 * 4 + 0x805d5a0) = reinterpret_cast<signed char*>(45);
        edx11 = edx3 + 1;
        g805d706 = edx11;
        if (edx11 == 50) {
        }
        do {
            __asm__("lodsb ");
            *edi10 = 45;
            ++edi10;
        } while (1);
    }
    return;
}

void fun_8048ed2() {
    int1_t zf1;

    zf1 = g805db50 == 0;
    if (!zf1) 
        goto 0x8048eb0;
    return;
}

void fun_8048ff1() {
    signed char* eax1;
    int32_t ecx2;
    int32_t* edi3;

    eax1 = g805b5a4;
    ecx2 = 0;
    if (eax1) {
        *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<unsigned char>(*eax1 - 48);
        if (*reinterpret_cast<unsigned char*>(&ecx2) >= 11) 
            goto 0x8048fdf;
    }
    edi3 = reinterpret_cast<int32_t*>(ecx2 * 4 + 0x805db28);
    if (!*edi3) 
        goto 0x8048fdf;
    __asm__("int 0x80");
    __asm__("int 0x80");
    if (1) 
        goto 0x8049031;
    *edi3 = 0;
    fun_8048fea(18, __return_address());
}

int32_t fun_8049032() {
    signed char* esi1;
    signed char* edi2;
    uint32_t eax3;
    int32_t ecx4;
    int32_t ecx5;
    int32_t eax6;
    int32_t v7;
    int32_t v8;
    void** v9;
    int32_t v10;
    int32_t eax11;

    esi1 = g805b5a4;
    if (!esi1) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        edi2 = reinterpret_cast<signed char*>(0x805db0e);
        eax3 = 60;
        ecx4 = 0;
        do {
            eax3 = eax3 / 8;
            ++ecx4;
        } while (eax3);
        ecx5 = ecx4 + 1;
        do {
            eax6 = v7;
            *edi2 = *reinterpret_cast<signed char*>(&eax6);
            ++edi2;
            --ecx5;
        } while (ecx5);
        *edi2 = 10;
        fun_8048e06(reinterpret_cast<int32_t>(edi2 + 1) - v8, v9);
        goto v10;
    }
    eax11 = 0;
    while (*reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) - 48), *reinterpret_cast<signed char*>(&eax11) >= reinterpret_cast<signed char>(0)) {
        if (*reinterpret_cast<unsigned char*>(&eax11) > 8) 
            goto addr_8049055_16;
    }
    eax11 = 60;
    __asm__("int 0x80");
    addr_8049055_16:
    return eax11;
}

void** fun_8049100(void** ecx) {
    int32_t ebx2;
    void** eax3;

    ebx2 = g805db24;
    if (ebx2) {
        __asm__("int 0x80");
        return 37;
    } else {
        eax3 = fun_8048df5(ecx);
        return eax3;
    }
}

void** g804950a = reinterpret_cast<void**>(0);

void fun_8049203() {
    void** eax1;

    eax1 = g804950a;
    if (!eax1) {
        return;
    } else {
        g804950a = eax1 - 1;
        goto 0x8048f04;
    }
}

void** fun_8049221() {
    void** eax1;
    void** ecx2;
    int1_t cf3;

    eax1 = g804950a;
    if (eax1) {
        ecx2 = reinterpret_cast<void**>(0);
        do {
            fun_8048df5(ecx2);
            eax1 = fun_8048df5(ecx2);
            ++ecx2;
            cf3 = reinterpret_cast<unsigned char>(ecx2) < reinterpret_cast<unsigned char>(g804950a);
        } while (cf3);
    }
    return eax1;
}

struct s53 {
    signed char[72] pad72;
    int32_t f48;
};

struct s54 {
    signed char[74] pad74;
    int32_t f4a;
};

struct s55 {
    signed char[72] pad72;
    int32_t f48;
};

struct s56 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
};

void fun_8049129(void** ecx) {
    uint1_t cf2;
    uint32_t ebx3;
    struct s53* ebx4;
    uint1_t cf5;
    struct s54* ebx6;
    void* ebx7;
    struct s55* ebx8;
    uint32_t ebx9;
    unsigned char dh10;
    int32_t esi11;
    int32_t eax12;
    int32_t eax13;
    struct s56* edx14;

    cf2 = reinterpret_cast<uint1_t>(ebx3 < ebx4->f48 + cf5);
    ebx6 = reinterpret_cast<struct s54*>(reinterpret_cast<int32_t>(ebx7) - (ebx8->f48 + cf2));
    ebx9 = reinterpret_cast<uint32_t>(ebx6) - (ebx6->f4a + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ebx6) < ebx6->f4a + cf2));
    *reinterpret_cast<signed char*>(ebx9 + 0x5b5a41d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx9 + 0x5b5a41d) + *reinterpret_cast<signed char*>(&ecx));
    *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx)) | dh10);
    *reinterpret_cast<signed char*>(esi11 - 0x7f) = 0;
    eax12 = eax13 - 0x660f746e + 1;
    edx14 = reinterpret_cast<struct s56*>(0x8049394);
    while (edx14->f0) {
        if (edx14->f8 != -1 && (!ebx9 || (fun_804824a(ecx), eax12 = eax12, !ecx))) {
            edx14->f8 = eax12;
        }
        ++edx14;
    }
    return;
}

struct s57 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
};

void** fun_8049185(void** ecx) {
    struct s57* ebx2;
    void** eax3;

    fun_8048df5(ecx);
    ebx2 = reinterpret_cast<struct s57*>(0x8049394);
    while (ebx2->f0) {
        if (!ebx2->f8) {
            fun_8048df5(ecx);
        }
        fun_8048df5(ecx);
        fun_8048df5(ecx);
        ++ebx2;
    }
    eax3 = fun_8048df5(ecx);
    return eax3;
}

void** fun_80491cc() {
    void** eax1;
    signed char* ebx2;

    eax1 = g804950a;
    ebx2 = g805b5a4;
    if (reinterpret_cast<unsigned char>(eax1) >= reinterpret_cast<unsigned char>(0xfff) || (eax1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax1) << 12), ebx2 == 0)) {
        return eax1;
    } else {
        __asm__("int 0x80");
        ++g804950a;
        goto 0x8048efe;
    }
}

void fun_8049149() {
    goto 0x8049156;
}

void fun_804914e() {
    goto 0x8049156;
}
