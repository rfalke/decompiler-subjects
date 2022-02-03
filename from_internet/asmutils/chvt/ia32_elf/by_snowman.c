
int32_t fun_804804c(int32_t ecx);

signed char fun_8048068() {
    int32_t ecx1;
    int1_t zf2;
    signed char al3;
    int32_t edi4;
    int32_t v5;
    int32_t esi6;
    int32_t v7;
    int32_t v8;
    int32_t v9;

    ecx1 = 0;
    __asm__("int 0x80");
    zf2 = 0;
    if (0) {
        do {
            addr_8048086_2:
            __asm__("int 0x80");
            al3 = fun_8048068();
            if (!zf2) {
                al3 = fun_8048068();
                if (!zf2) 
                    goto addr_8048086_2;
            }
            edi4 = v5;
            esi6 = v7;
            do {
                __asm__("lodsb ");
            } while (al3);
            if (*reinterpret_cast<int32_t*>(esi6 - 5) != 0x74766863) 
                goto addr_80480e6_7;
            zf2 = edi4 == 2;
        } while (!zf2);
        if (!v8) 
            goto addr_80480df_10;
        fun_804804c(0);
        __asm__("int 0x80");
        ecx1 = 0x5607;
        __asm__("int 0x80");
        goto addr_80480df_10;
    } else {
        __asm__("int 0x80");
        return 54;
    }
    while (1) {
        addr_80480f5_13:
        ecx1 = 0x5608;
        __asm__("int 0x80");
        while (!v9) {
            addr_80480df_10:
            __asm__("int 0x80");
            addr_80480e6_7:
            --edi4;
            if (!edi4) 
                goto addr_80480f5_13;
        }
        fun_804804c(ecx1);
    }
}

struct s0 {
    signed char[10] pad10;
    unsigned char fa;
};

struct s1 {
    signed char[10] pad10;
    unsigned char fa;
};

int32_t fun_804804c(int32_t ecx) {
    struct s0* edx2;
    struct s1* edx3;
    int32_t ecx4;
    unsigned char* esi5;
    int32_t eax6;
    int16_t bx7;

    edx2->fa = reinterpret_cast<unsigned char>(edx3->fa >> 91);
    ecx4 = 0;
    while ((*reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<unsigned char>(*esi5 - 48), *esi5 >= 48) && *reinterpret_cast<unsigned char*>(&ecx4) <= 9) {
        *reinterpret_cast<int16_t*>(&eax6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax6) * bx7);
        eax6 = eax6 + ecx4;
        ++esi5;
    }
    return eax6;
}

void fun_8048000(signed char* ecx) {
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
    void** eax22;
    void* tmp8_23;
    void* tmp8_24;
    uint1_t cf25;
    void** tmp32_26;
    uint1_t cf27;
    void** eax28;
    signed char dh29;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        tmp8_23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_23) - reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)))))));
        tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
        *eax22 = tmp8_24;
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) - reinterpret_cast<unsigned char>(1 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) < reinterpret_cast<unsigned char>(1 + cf25))));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        tmp32_26 = eax22;
        cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_26) < reinterpret_cast<uint32_t>(eax22));
        eax28 = tmp32_26;
    }
    *eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax28) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax28))) + cf27);
    *ecx = reinterpret_cast<signed char>(*ecx + dh29);
}

void fun_8048105() {
    int1_t below_or_equal1;
    int1_t zf2;
    int1_t sf3;
    unsigned char tmp8_4;
    signed char* edi5;
    signed char ch6;
    uint1_t cf7;
    unsigned char* edi8;
    unsigned char* edi9;
    signed char* edi10;

    __asm__("das ");
    if (!below_or_equal1) {
        if (!zf2) {
            if (sf3) {
                tmp8_4 = reinterpret_cast<unsigned char>(*edi5 + ch6);
                cf7 = reinterpret_cast<uint1_t>(tmp8_4 < *edi8);
                *edi9 = tmp8_4;
                if (!(cf7 | reinterpret_cast<uint1_t>(*edi10 == 0))) {
                    __asm__("arpl [edi+0x6e], bp");
                    if (cf7) {
                        __asm__("insb ");
                    }
                }
            }
        }
    }
}
