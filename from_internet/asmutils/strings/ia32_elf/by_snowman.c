
int32_t fun_8048106() {
    int32_t eax1;
    int32_t ebx2;

    eax1 = 0;
    ebx2 = 0;
    while (*reinterpret_cast<signed char*>(&eax1)) {
        *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax1) - 48);
        ebx2 = ebx2 * 10 + eax1;
    }
    return ebx2;
}

struct s0 {
    void* f0;
    signed char[71] pad72;
    signed char f48;
};

int32_t g804811b = 4;

int32_t g804811f;

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    int32_t eax3;
    int32_t* ebx4;
    int32_t* ebx5;
    int32_t eax6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    void** eax19;
    signed char al20;
    signed char* eax21;
    struct s0* eax22;
    signed char dh23;
    unsigned char tmp8_24;
    signed char* ebx25;
    uint1_t cf26;
    unsigned char* ebx27;
    unsigned char* ebx28;
    unsigned char* edi29;
    signed char* edi30;
    void* tmp8_31;
    uint1_t cf32;
    signed char bl33;
    int32_t ecx34;
    int32_t edx35;
    int32_t eax36;
    int1_t less37;
    int16_t* v38;
    int32_t eax39;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        tmp8_24 = reinterpret_cast<unsigned char>(*ebx25 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax22) + 1));
        cf26 = reinterpret_cast<uint1_t>(tmp8_24 < *ebx27);
        *ebx28 = tmp8_24;
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22) + cf26);
        *edi29 = reinterpret_cast<unsigned char>(*edi30 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_31 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf32 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_31) < reinterpret_cast<unsigned char>(eax22->f0));
    eax22->f0 = tmp8_31;
    eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf32);
    eax22->f48 = reinterpret_cast<signed char>(eax22->f48 + bl33);
    if (eax22->f48) {
        goto addr_8048051_5;
    }
    do {
        while (!0) {
            if (0) 
                goto addr_8048051_5;
            ecx34 = 3;
            edx35 = 0;
            eax36 = 0;
            while (1) {
                __asm__("lodsb ");
                if (1) {
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax36) + 1)) {
                        less37 = edx35 < g804811b;
                        if (!less37) {
                            __asm__("int 0x80");
                            __asm__("int 0x80");
                            ecx34 = ecx34;
                        }
                        eax36 = 0;
                        edx35 = 0;
                    }
                    --ecx34;
                    if (!ecx34) 
                        break;
                } else {
                    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax36) + 1)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax36) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax36) + 1) + 1);
                        g804811f = 0x8048123;
                    }
                    ++edx35;
                    --ecx34;
                    if (!ecx34) 
                        goto addr_80480ba_19;
                }
            }
            continue;
            addr_80480ba_19:
        }
        break;
        addr_8048051_5:
        while (v38) {
            if (*v38 != 0x6e2d) 
                goto addr_804806e_22;
            eax39 = fun_8048106();
            g804811b = eax39;
        }
        goto addr_80480ff_24;
        addr_804806e_22:
        __asm__("int 0x80");
    } while (!0);
    addr_8048101_26:
    __asm__("int 0x80");
    addr_80480ff_24:
    goto addr_8048101_26;
}

void fun_804811a() {
    unsigned char* eax1;
    unsigned char al2;
    int32_t eax3;
    int32_t eax4;

    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(al2 | *reinterpret_cast<unsigned char*>(eax3 + eax4));
    *eax1 = reinterpret_cast<unsigned char>(*eax1 + *reinterpret_cast<unsigned char*>(&eax1));
}
