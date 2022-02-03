
unsigned char fun_804804c() {
    unsigned char al1;
    signed char al2;
    unsigned char al3;
    signed char ah4;

    __asm__("les ebp, [eax+eax*4+0x127230ec]");
    al1 = reinterpret_cast<unsigned char>(al2 - 48);
    if (al3 >= 48) {
        if (!(ah4 > 9 || reinterpret_cast<signed char>(al1) > reinterpret_cast<signed char>(9))) {
            __asm__("aad 0xa");
            return al1;
        }
    }
    return al1;
}

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    signed char* esi3;
    struct s0* esi4;
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
    void* al26;
    unsigned char* edi27;
    signed char* edi28;
    void* tmp8_29;
    uint1_t cf30;

    if (less_or_equal2) {
        esi3 = &esi4->f1;
        *ecx = *ecx + eax5;
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        __asm__("insb ");
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
        al26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + reinterpret_cast<unsigned char>(*eax24));
        *esi3 = reinterpret_cast<signed char>(*esi3 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(al26)));
        *edi27 = reinterpret_cast<unsigned char>(*edi28 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    }
    tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(*eax24));
    *eax24 = tmp8_29;
    *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))) + cf30);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx) - 0x77e68b40) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx) - 0x77e68b40) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
}

struct s1 {
    unsigned char f0;
    signed char[4] pad5;
    int16_t f5;
};

signed char g8048c2d;

signed char g8048c2c;

int16_t g8048c2a;

unsigned char g8048c29;

unsigned char g1;

struct s2 {
    signed char[47] pad47;
    unsigned char f2f;
};

void fun_804806c(int32_t a1) {
    int32_t eax2;
    struct s1* esi3;
    struct s1* v4;
    uint1_t zf5;
    unsigned char al6;
    int32_t edx7;
    struct s1* eax8;
    int1_t zf9;
    int1_t less10;
    int1_t less_or_equal11;
    int1_t zf12;
    struct s1* eax13;
    struct s1* v14;
    unsigned char al15;
    int1_t less16;
    uint32_t eax17;
    uint32_t eax18;
    unsigned char al19;
    int1_t less20;
    int1_t zf21;
    int16_t ax22;
    int16_t ax23;
    unsigned char* eax24;
    unsigned char tmp8_25;
    uint1_t cf26;
    uint1_t zf27;
    struct s2* ebx28;
    struct s2* v29;

    eax2 = a1;
    while (esi3 = v4, !!esi3) {
        __asm__("lodsb ");
        if (*reinterpret_cast<unsigned char*>(&eax2) == 45) {
            __asm__("lodsb ");
            if (*reinterpret_cast<unsigned char*>(&eax2) == 0x73) {
                __asm__("lodsb ");
                if (*reinterpret_cast<unsigned char*>(&eax2)) 
                    goto addr_804829b_6;
                g8048c2d = reinterpret_cast<signed char>(g8048c2d + 1);
            } else {
                if (*reinterpret_cast<unsigned char*>(&eax2) != 0x74) 
                    goto addr_804808f_9;
                g8048c2c = reinterpret_cast<signed char>(g8048c2c + 1);
                zf5 = reinterpret_cast<uint1_t>(g8048c2c == 0);
                al6 = fun_804804c();
                if (reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax2) < 0x74) | zf5) 
                    goto addr_804829b_6;
                *reinterpret_cast<unsigned char*>(&edx7) = al6;
                __asm__("lodsb ");
                if (al6 != 45) 
                    goto addr_804829b_6;
                *reinterpret_cast<unsigned char*>(&eax2) = fun_804804c();
                if (al6 <= 45) 
                    goto addr_804829b_6;
                if (*reinterpret_cast<signed char*>(&edx7) > *reinterpret_cast<signed char*>(&eax2)) 
                    goto addr_80482ab_14;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx7) + 1) = *reinterpret_cast<unsigned char*>(&eax2);
                g8048c2a = *reinterpret_cast<int16_t*>(&edx7);
                __asm__("lodsb ");
                if (*reinterpret_cast<unsigned char*>(&eax2)) 
                    goto addr_804829b_6;
            }
        } else {
            if (*reinterpret_cast<unsigned char*>(&eax2) != 47) 
                goto addr_8048081_18;
        }
    }
    __asm__("int 0x80");
    if (__intrinsic()) 
        goto addr_80482ab_14;
    while (!0) {
        if (!0) 
            goto addr_804811b_24;
        __asm__("int 0x80");
        if (__intrinsic()) 
            break;
    }
    goto addr_80482ab_14;
    addr_804811b_24:
    if (0) 
        goto addr_80482ab_14;
    __asm__("int 0x80");
    if (__intrinsic()) 
        goto addr_80482ab_14;
    eax8 = reinterpret_cast<struct s1*>(0);
    zf9 = g8048c2c == 0;
    if (zf9) {
        *reinterpret_cast<unsigned char*>(&g8048c2a) = 0;
        goto addr_8048171_31;
    }
    less10 = *reinterpret_cast<signed char*>(&g8048c2a) < reinterpret_cast<signed char>(0);
    if (less10) {
        addr_80482ab_14:
        __asm__("int 0x80");
    } else {
        less_or_equal11 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g8048c2a) + 1) <= *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1);
        if (!less_or_equal11) {
            addr_8048171_31:
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048c2a) + 1) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1);
        }
        g8048c29 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1);
        esi3 = reinterpret_cast<struct s1*>("track00.raw");
        zf12 = g8048c2d == 0;
        if (!zf12) 
            goto addr_8048182_36;
        while (!__intrinsic()) {
            do {
                eax13 = reinterpret_cast<struct s1*>(0x20000);
                *reinterpret_cast<unsigned char*>(&eax13) = *reinterpret_cast<unsigned char*>(&g8048c2a);
                __asm__("int 0x80");
                if (__intrinsic()) 
                    goto addr_80482ab_14;
                eax8 = eax13;
                v14 = eax8;
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1) & 64)) {
                    al15 = *reinterpret_cast<unsigned char*>(&g8048c2a);
                    less16 = reinterpret_cast<signed char>(g8048c29) < reinterpret_cast<signed char>(al15 + 1);
                    if (less16) {
                    }
                    __asm__("int 0x80");
                    if (__intrinsic()) 
                        goto addr_80482ab_14;
                    do {
                        __asm__("int 0x80");
                        if (__intrinsic()) 
                            goto addr_80482ab_14;
                        __asm__("int 0x80");
                        if (__intrinsic()) 
                            goto addr_80482ab_14;
                        eax17 = (reinterpret_cast<uint32_t>(v14) >> 8 & 0xff00 | reinterpret_cast<uint32_t>(v14) << 8 & 0xff0000 | reinterpret_cast<uint32_t>(v14) << 24) >> 8;
                        *reinterpret_cast<signed char*>(&eax17) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax17) + 1);
                        if (*reinterpret_cast<signed char*>(&eax17) >= 75 && (*reinterpret_cast<signed char*>(&eax17) = 0, *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax17) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax17) + 1) + 1), *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax17) + 1) >= 60)) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax17) + 1) = 0;
                            eax17 = eax17 + 0x10000;
                        }
                        eax18 = eax17 << 8;
                        eax8 = reinterpret_cast<struct s1*>(eax18 >> 24 | eax18 >> 8 & 0xff00 | eax18 << 8 & 0xff0000);
                    } while (eax8);
                }
                al19 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g8048c2a) + 1);
                *reinterpret_cast<unsigned char*>(&g8048c2a) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&g8048c2a) + 1);
                less20 = reinterpret_cast<signed char>(al19) < *reinterpret_cast<signed char*>(&g8048c2a);
                if (less20) 
                    goto addr_80482b3_51;
                zf21 = g8048c2d == 0;
            } while (zf21);
            addr_8048182_36:
            *reinterpret_cast<unsigned char*>(&eax8) = *reinterpret_cast<unsigned char*>(&g8048c2a);
            __asm__("aam 0xa");
            ax22 = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax8) + 0x3030);
            *reinterpret_cast<signed char*>(&ax23) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax22) + 1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax23) + 1) = *reinterpret_cast<signed char*>(&ax22);
            esi3->f5 = ax23;
            esi3 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(esi3) + 2);
        }
        goto addr_80482ab_14;
    }
    addr_80482b3_51:
    eax24 = reinterpret_cast<unsigned char*>(1);
    __asm__("int 0x80");
    __asm__("das ");
    if (1) {
        addr_80482ee_56:
    } else {
        __asm__("arpl [edx+esi*2+0x6f], sp");
        __asm__("insd ");
        tmp8_25 = reinterpret_cast<unsigned char>(g1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax24) + 1));
        cf26 = reinterpret_cast<uint1_t>(tmp8_25 < g1);
        g1 = tmp8_25;
        zf27 = reinterpret_cast<uint1_t>(g1 == 0);
        __asm__("arpl [ecx+0x32], sp");
        if (cf26) {
        }
        if (reinterpret_cast<uint1_t>(cf26 | zf27)) 
            goto addr_80482cf_60;
    }
    __asm__("arpl [ebx+0x30], bp");
    esi3->f0 = reinterpret_cast<unsigned char>(esi3->f0 ^ 8);
    if (0) {
    }
    addr_80482cf_60:
    ebx28 = v29;
    if (!1) {
        ebx28->f2f = reinterpret_cast<unsigned char>(ebx28->f2f & *reinterpret_cast<unsigned char*>(&ebx28));
        if (ebx28->f2f) {
            __asm__("arpl [edx+esi*2+0x6f], sp");
            __asm__("insd ");
            goto addr_80482ee_56;
        }
    }
    addr_804829b_6:
    __asm__("int 0x80");
    goto addr_80482ab_14;
    addr_804808f_9:
    goto addr_804829b_6;
    addr_8048081_18:
    goto addr_804829b_6;
}
