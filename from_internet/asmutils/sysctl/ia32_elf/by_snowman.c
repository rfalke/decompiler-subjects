
struct s0 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s1 {
    unsigned char f0;
    signed char[111] pad112;
    unsigned char f70;
};

signed char g1;

signed char fun_8048144() {
    struct s0* v1;
    struct s0* eax2;
    struct s1* edi3;
    struct s0* esi4;
    struct s1* ecx5;
    struct s0* v6;
    int32_t eax7;
    struct s1* ecx8;
    signed char* eax9;
    unsigned char tmp8_10;
    int1_t cf11;
    int1_t zf12;
    signed char tmp8_13;
    uint1_t zf14;

    while (1) {
        v1 = reinterpret_cast<struct s0*>(__return_address());
        __asm__("lodsb ");
        if (*reinterpret_cast<unsigned char*>(&eax2) == 46) {
            *reinterpret_cast<unsigned char*>(&eax2) = 47;
            edi3->f0 = 47;
            edi3 = reinterpret_cast<struct s1*>(&edi3->pad112);
            continue;
        }
        if (!0 && *reinterpret_cast<signed char*>(&eax2) > reinterpret_cast<signed char>(32)) {
            edi3->f0 = *reinterpret_cast<unsigned char*>(&eax2);
            edi3 = reinterpret_cast<struct s1*>(&edi3->pad112);
            if (*reinterpret_cast<unsigned char*>(&eax2)) 
                continue;
            goto addr_8048086_12;
        }
        eax2 = reinterpret_cast<struct s0*>(0);
        edi3->f0 = 0;
        edi3 = reinterpret_cast<struct s1*>(&edi3->pad112);
        do {
            __asm__("lodsb ");
            if (1) 
                break;
        } while (1);
        goto addr_8048171_18;
        addr_80481bc_19:
        esi4 = v1;
        if (!esi4) 
            break;
        ecx5 = reinterpret_cast<struct s1*>(0);
        __asm__("lodsb ");
        if (1) 
            goto addr_80481c1_22;
        __asm__("lodsb ");
        if (0) {
            addr_80480af_24:
        } else {
            if (0) {
                addr_8048136_26:
                esi4 = v6;
                if (!esi4) 
                    break; else 
                    goto addr_804813f_27;
            } else {
                if (0) {
                    addr_80480b2_29:
                    esi4 = reinterpret_cast<struct s0*>(1);
                    if (0) {
                        __asm__("int 0x80");
                        goto addr_80480ce_31;
                    } else {
                        __asm__("int 0x80");
                        goto addr_80480ce_31;
                    }
                } else {
                    addr_8048086_12:
                    ecx5 = reinterpret_cast<struct s1*>(0x80480a0);
                    __asm__("int 0x80");
                    __asm__("int 0x80");
                    __asm__("outsb ");
                    __asm__("outsb ");
                    edi3->f70 = 0;
                    if (!edi3->f70) 
                        goto addr_8048115_33; else 
                        goto addr_80480ac_34;
                }
            }
        }
        edi3 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(edi3) + 4);
        goto addr_80480b2_29;
        addr_804813f_27:
        edi3 = reinterpret_cast<struct s1*>(0x8048256);
        continue;
        addr_80480ce_31:
        ecx5 = reinterpret_cast<struct s1*>(0);
        __asm__("int 0x80");
        if (__intrinsic()) 
            goto addr_804820e_37;
        edi3 = reinterpret_cast<struct s1*>(5);
        esi4 = reinterpret_cast<struct s0*>(2);
        ecx5 = reinterpret_cast<struct s1*>(19);
        *reinterpret_cast<signed char*>(&eax7) = -64;
        __asm__("int 0x80");
        if (__intrinsic()) 
            goto addr_804820e_37;
        while (1) {
            __asm__("lodsb ");
            if (*reinterpret_cast<signed char*>(&eax7) == 59 || *reinterpret_cast<signed char*>(&eax7) == 35) {
                do {
                    __asm__("lodsb ");
                    if (!*reinterpret_cast<signed char*>(&eax7)) 
                        break;
                } while (*reinterpret_cast<signed char*>(&eax7) != 10);
                goto addr_8048120_43;
            } else {
                if (!*reinterpret_cast<signed char*>(&eax7)) 
                    break;
                if (*reinterpret_cast<signed char*>(&eax7) <= 32) 
                    continue;
                addr_8048115_33:
            }
            edi3 = reinterpret_cast<struct s1*>(0x8048256);
            *reinterpret_cast<signed char*>(&eax7) = fun_8048144();
            continue;
            addr_8048120_43:
        }
        eax2 = reinterpret_cast<struct s0*>(1);
        __asm__("int 0x80");
        goto addr_8048136_26;
        addr_80480ac_34:
        __asm__("outsd ");
        __asm__("outsb ");
        goto addr_80480af_24;
        do {
            addr_8048171_18:
            __asm__("lodsb ");
        } while (1);
        ecx8 = edi3;
        while (!1 && (!0 && !0)) {
            edi3->f0 = 0;
            edi3 = reinterpret_cast<struct s1*>(&edi3->pad112);
        }
        edi3->f0 = 0;
        edi3 = reinterpret_cast<struct s1*>(&edi3->pad112);
        __asm__("int 0x80");
        if (__intrinsic()) {
            __asm__("int 0x80");
        }
        ecx5 = ecx8;
        eax2 = reinterpret_cast<struct s0*>(4);
        __asm__("int 0x80");
        goto addr_80481bc_19;
    }
    addr_8048216_60:
    eax9 = reinterpret_cast<signed char*>(1);
    __asm__("int 0x80");
    __asm__("das ");
    if (!0) {
        __asm__("outsd ");
        __asm__("arpl [edi], bp");
        if (!1) {
            if (!1) {
                tmp8_10 = reinterpret_cast<unsigned char>(edi3->f0 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx5) + 1));
                cf11 = tmp8_10 < edi3->f0;
                edi3->f0 = tmp8_10;
                zf12 = edi3->f0 == 0;
                if (!zf12) {
                    __asm__("das ");
                    if (cf11) {
                        if (cf11) {
                            if (!zf12) {
                                __asm__("arpl [cs:edi+0x6e], bp");
                                tmp8_13 = reinterpret_cast<signed char>(g1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax9) + 1));
                                g1 = tmp8_13;
                                __asm__("insb ");
                                esi4->f6f = 0;
                                zf14 = reinterpret_cast<uint1_t>(esi4->f6f == 0);
                                if (!zf14) {
                                    if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf14))) {
                                        if (!__undefined()) {
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    addr_80481c1_22:
    esi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi4) - 1);
    edi3 = reinterpret_cast<struct s1*>(0x8048256);
    while (1) {
        __asm__("lodsb ");
        if (*reinterpret_cast<unsigned char*>(&eax2) == 46) {
            *reinterpret_cast<unsigned char*>(&eax2) = 47;
            edi3->f0 = 47;
            edi3 = reinterpret_cast<struct s1*>(&edi3->pad112);
            esi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi4) + 1);
        } else {
            edi3->f0 = *reinterpret_cast<unsigned char*>(&eax2);
            edi3 = reinterpret_cast<struct s1*>(&edi3->pad112);
            esi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi4) + 1);
            if (!*reinterpret_cast<unsigned char*>(&eax2)) 
                break;
        }
    }
    ecx5 = reinterpret_cast<struct s1*>(0);
    __asm__("int 0x80");
    if (!__intrinsic()) {
        __asm__("int 0x80");
        ecx5 = reinterpret_cast<struct s1*>(0x8048256);
        __asm__("int 0x80");
        __asm__("int 0x80");
    }
    addr_804820e_37:
    __asm__("int 0x80");
    goto addr_8048216_60;
}

struct s2 {
    int32_t f0;
    signed char[69] pad73;
    signed char f49;
};

void fun_8048000(struct s2* ecx) {
    int1_t less_or_equal2;
    int32_t esi3;
    int32_t esi4;
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
    void** eax24;
    signed char dh25;
    signed char dl26;
    void* tmp8_27;
    uint1_t cf28;
    signed char bl29;

    if (less_or_equal2) {
        esi3 = esi4 + 1;
        ecx->f0 = ecx->f0 + eax5;
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
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
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + reinterpret_cast<unsigned char>(*eax24));
        *reinterpret_cast<signed char*>(esi3 - 14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi3 - 14) + dl26);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax24));
    *eax24 = tmp8_27;
    *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))) + cf28);
    ecx->f49 = reinterpret_cast<signed char>(ecx->f49 + bl29);
    if (!ecx->f49) 
        goto 0x8048216;
    __asm__("int 0x80");
}
