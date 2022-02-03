
signed char g804833b;

uint32_t fun_804829f() {
    signed char* edi1;
    uint32_t eax2;
    uint32_t eax3;
    uint32_t eax4;

    g804833b = 9;
    edi1 = reinterpret_cast<signed char*>(0x804833a);
    eax2 = eax3;
    do {
        eax4 = eax2 % 10;
        *reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) + 48);
        *edi1 = *reinterpret_cast<signed char*>(&eax4);
        --edi1;
        eax2 = eax2 / 10;
    } while (eax2);
    return eax2;
}

unsigned char g80482e9;

int32_t g8048301;

int32_t g8048309;

uint32_t g8048305;

signed char g80482e8;

unsigned char g80482e7;

uint32_t g80482f5;

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

int32_t fun_804825f();

struct s1 {
    signed char f0;
    signed char[7] pad8;
    uint16_t f8;
    signed char fa;
};

struct s2 {
    signed char f0;
    signed char[1] pad2;
    signed char f2;
};

signed char g80482e5;

signed char g80482e6;

signed char fun_80482c1(struct s1* ecx);

void* fun_8048298(void* ecx);

unsigned char* fun_8048102() {
    unsigned char* eax1;
    int1_t zf2;
    int32_t eax3;
    int32_t eax4;
    uint32_t ebx5;
    int1_t zf6;
    uint32_t ebx7;
    int1_t zf8;
    uint32_t eax9;
    int1_t cf10;
    uint32_t ebx11;
    unsigned char* ebp12;
    signed char* v13;
    signed char* edi14;
    signed char* edi15;
    signed char* edi16;
    struct s0* edi17;
    struct s1* ecx18;
    void* eax19;
    void* v20;
    struct s1* v21;
    signed char* v22;
    struct s2* esi23;
    void* edx24;
    unsigned char* eax25;
    int1_t zf26;
    int1_t zf27;
    void* eax28;

    eax1 = reinterpret_cast<unsigned char*>(0x6b);
    __asm__("int 0x80");
    if (!__intrinsic()) {
        zf2 = (g80482e9 & 1) == 0;
        if (zf2 || (eax3 = g8048301, eax1 = reinterpret_cast<unsigned char*>((eax3 + 0x1ff) / reinterpret_cast<uint32_t>(0x200)), !1)) {
            eax4 = g8048309;
            ebx5 = g8048305;
            eax1 = reinterpret_cast<unsigned char*>(eax4 * 0x200 / (ebx5 >> 2));
        }
        zf6 = g80482e8 == 0;
        if (!zf6 && eax1) {
            ebx7 = 0x800;
            zf8 = (g80482e9 & 1) == 0;
            if (zf8) {
                ebx7 = g8048305;
            }
            eax9 = reinterpret_cast<uint32_t>(eax1) * ebx7;
            eax1 = reinterpret_cast<unsigned char*>(eax9 / 0x1000);
            if (eax9 % 0x1000) {
                ++eax1;
            }
        }
        cf10 = g80482e7 < 2;
        if (cf10 && (ebx11 = g80482f5, (ebx11 & 0xf000) == 0x4000)) {
            ebp12 = eax1;
            __asm__("int 0x80");
            eax1 = ebp12;
            if (!__intrinsic()) {
                v13 = edi14;
                *edi15 = 47;
                edi16 = &edi17->f1;
                fun_804825f();
                while ((ecx18 = reinterpret_cast<struct s1*>(0), eax19 = reinterpret_cast<void*>(0), *reinterpret_cast<signed char*>(&eax19) = 0x8d, !__intrinsic()) && !0) {
                    while (1) {
                        v20 = eax19;
                        v21 = ecx18;
                        v22 = edi16;
                        esi23 = reinterpret_cast<struct s2*>(&ecx18->fa);
                        if (!esi23->f0 || (esi23->f0 == 46 || esi23->f0 == 0x2e2e && !esi23->f2)) {
                            addr_8048235_14:
                            edi16 = v22;
                            edx24 = reinterpret_cast<void*>(static_cast<uint32_t>(v21->f8));
                            if (!edx24) 
                                break;
                            ecx18 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(v21) + reinterpret_cast<uint32_t>(edx24));
                            eax19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v20) - reinterpret_cast<uint32_t>(edx24));
                            if (reinterpret_cast<uint32_t>(v20) >= reinterpret_cast<uint32_t>(edx24)) 
                                continue; else 
                                break;
                        } else {
                            do {
                                __asm__("lodsb ");
                                *edi16 = *reinterpret_cast<signed char*>(&eax19);
                                ++edi16;
                            } while (*reinterpret_cast<signed char*>(&eax19));
                            eax25 = fun_8048102();
                            if (reinterpret_cast<int32_t>(edi16 - 1) < 0) 
                                goto addr_8048235_14;
                            ebp12 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<uint32_t>(eax25));
                            zf26 = g80482e5 == 0;
                            if (!zf26) 
                                goto addr_8048235_14;
                            zf27 = g80482e6 == 0;
                            if (!zf27) 
                                goto addr_804822b_23;
                            if (__intrinsic()) 
                                goto addr_8048235_14;
                            if (1) 
                                goto addr_8048235_14;
                        }
                        addr_804822b_23:
                        fun_804829f();
                        fun_80482c1(ecx18);
                        goto addr_8048235_14;
                    }
                }
                __asm__("int 0x80");
                eax28 = fun_8048298(0);
                *v13 = 0;
                eax1 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax28) + reinterpret_cast<uint32_t>(ebp12));
            }
        }
    }
    return eax1;
}

signed char fun_80482c1(struct s1* ecx) {
    struct s1* edi2;
    signed char* edi3;

    edi2 = ecx;
    do {
        edi2 = reinterpret_cast<struct s1*>(&edi2->pad8);
    } while (edi2->f0);
    edi3 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi2) - 1);
    *edi3 = 10;
    __asm__("int 0x80");
    *edi3 = 0;
    return 4;
}

void* g80482dd = reinterpret_cast<void*>(0x8048b40);

void* g80482e1 = reinterpret_cast<void*>(0x8048b40);

int32_t fun_804825f() {
    void* ecx1;
    void* ecx2;
    void* edx3;
    int1_t below_or_equal4;
    int32_t ebx5;
    void** ecx6;
    int32_t edx7;

    ecx1 = g80482dd;
    ecx2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx1) + reinterpret_cast<int32_t>(edx3));
    below_or_equal4 = reinterpret_cast<uint32_t>(ecx2) <= reinterpret_cast<uint32_t>(g80482e1);
    if (!below_or_equal4) {
        __asm__("int 0x80");
        if (__intrinsic()) {
            __asm__("int 0x80");
            g80482dd = ecx2;
            goto ebx5;
        } else {
            g80482e1 = ecx2;
        }
    }
    g80482dd = ecx2;
    *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx2) - 4) = ecx2;
    ecx6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx2) - edx7);
    *reinterpret_cast<void***>(ecx6) = ecx6;
    return 45;
}

void* fun_8048298(void* ecx) {
    void* eax2;

    g80482dd = ecx;
    return eax2;
}

struct s3 {
    signed char[94] pad94;
    signed char f5e;
};

struct s4 {
    void* f0;
    uint32_t f1;
};

void fun_8048000(struct s1* ecx) {
    int1_t less_or_equal2;
    struct s3* esi3;
    void* esi4;
    int32_t eax5;
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
    struct s4* eax24;
    signed char dh25;
    uint32_t* eax26;
    unsigned char* eax27;
    signed char* edi28;
    signed char* edi29;
    unsigned char tmp8_30;
    uint1_t cf31;
    signed char bl32;
    int32_t v33;
    int1_t zf34;
    int32_t v35;
    signed char* edi36;
    int1_t zf37;

    if (less_or_equal2) {
        esi3 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esi4) + 1);
        ecx->f0 = reinterpret_cast<signed char>(ecx->f0 + eax5);
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<uint32_t>(ecx)) + 44);
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh25);
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<int32_t>(eax24));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        __asm__("in eax, 0x2");
        eax24->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax24->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        eax26 = &eax24->f1;
        eax27 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) | *eax26);
        *edi28 = reinterpret_cast<signed char>(*edi29 + *reinterpret_cast<signed char*>(&eax27));
        *eax27 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    }
    tmp8_30 = reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27));
    cf31 = reinterpret_cast<uint1_t>(tmp8_30 < *eax27);
    *eax27 = tmp8_30;
    *eax27 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27 + *reinterpret_cast<signed char*>(&eax27)) + cf31);
    esi3->f5e = reinterpret_cast<signed char>(esi3->f5e + bl32);
    while (v33) {
        __asm__("lodsb ");
        if (*reinterpret_cast<signed char*>(&eax27) != 45) 
            goto addr_80480cf_6;
        while (1) {
            __asm__("lodsb ");
            if (*reinterpret_cast<signed char*>(&eax27) == 97) {
                g80482e6 = reinterpret_cast<signed char>(g80482e6 + 1);
            } else {
                if (*reinterpret_cast<signed char*>(&eax27) == 0x73) {
                    g80482e7 = reinterpret_cast<unsigned char>(g80482e7 + 1);
                } else {
                    if (*reinterpret_cast<signed char*>(&eax27) == 0x74) {
                        g80482e5 = reinterpret_cast<signed char>(g80482e5 + 1);
                    } else {
                        if (*reinterpret_cast<signed char*>(&eax27) == 0x6b) {
                            g80482e8 = reinterpret_cast<signed char>(g80482e8 + 1);
                        } else {
                            if (*reinterpret_cast<signed char*>(&eax27) == 100) {
                                g80482e9 = reinterpret_cast<unsigned char>(g80482e9 + 1);
                            } else {
                                if (*reinterpret_cast<signed char*>(&eax27) == 45) 
                                    goto addr_80480d3_18;
                                if (!*reinterpret_cast<signed char*>(&eax27)) 
                                    break;
                            }
                        }
                    }
                }
            }
        }
    }
    while (1) {
        zf34 = g80482e5 == 0;
        if (!zf34) {
            fun_804829f();
            fun_804829f();
            g804833b = 10;
            __asm__("int 0x80");
        }
        eax27 = reinterpret_cast<unsigned char*>(1);
        __asm__("int 0x80");
        addr_80480cf_6:
        addr_80480d3_18:
        while (v35) {
            edi36 = reinterpret_cast<signed char*>(0x804833c);
            do {
                __asm__("lodsb ");
                *edi36 = *reinterpret_cast<signed char*>(&eax27);
                ++edi36;
            } while (*reinterpret_cast<signed char*>(&eax27));
            eax27 = fun_8048102();
            if (reinterpret_cast<int32_t>(edi36 - 1) < 0) 
                continue;
            zf37 = g80482e5 == 0;
            if (!zf37) 
                continue;
            fun_804829f();
            *reinterpret_cast<signed char*>(&eax27) = fun_80482c1(ecx);
        }
    }
}

void fun_80482dd(int32_t ecx) {
}
