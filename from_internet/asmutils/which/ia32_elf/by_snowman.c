
void fun_80481da(uint32_t ecx);

signed char g80483f4;

uint48_t g8048803;

int32_t g80481e1;

int16_t g8048809;

int16_t g804880b;

uint32_t g80481e5;

int32_t g80481e9;

int32_t g80487f5;

uint32_t fun_80480e3(uint32_t ecx) {
    signed char** ebp2;
    signed char al3;
    signed char al4;
    uint32_t eax5;
    signed char* edi6;
    int1_t zf7;
    uint32_t ecx8;
    uint32_t eax9;
    int32_t ebx10;
    int1_t zf11;
    int1_t zf12;
    int32_t edx13;
    int16_t* ebx14;

    ebp2 = reinterpret_cast<signed char**>(0x80482ed);
    do {
        __asm__("lodsb ");
        if (!al3) 
            break;
    } while (al4 != 47);
    goto addr_80480f7_4;
    while (*ebp2 && (*reinterpret_cast<signed char*>(&eax5) = **ebp2, !!*reinterpret_cast<signed char*>(&eax5))) {
        fun_80481da(ecx);
        edi6 = reinterpret_cast<signed char*>(0x80483f4);
        zf7 = g80483f4 == 47;
        if (!zf7) {
            g80483f4 = 47;
            edi6 = reinterpret_cast<signed char*>(0x80483f5);
        }
        addr_804812a_10:
        fun_80481da(ecx);
        ecx = 0x80487fd;
        __asm__("int 0x80");
        eax5 = reinterpret_cast<uint32_t>(-0x6a);
        if (1 || ((ecx8 = *reinterpret_cast<uint32_t*>(&g8048803), ecx = ecx8 >> 28 & 0xfffffffb, ecx == 0) || (eax9 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&g8048803) + 2), eax5 = eax9 & 73, eax5 == 0))) {
            addr_80481d2_11:
            ++ebp2;
            continue;
        } else {
            ebx10 = g80481e1;
            if (!ebx10) 
                goto addr_8048172_13;
            zf11 = *reinterpret_cast<int16_t*>(&ebx10) == g8048809;
            if (zf11) 
                goto addr_804819b_15;
        }
        *reinterpret_cast<int16_t*>(&ecx) = g804880b;
        zf12 = ecx == g80481e5;
        if (zf12) {
            addr_80481cd_17:
            eax5 = eax5 & 10;
            if (eax5) 
                goto addr_8048172_13; else 
                goto addr_80481d2_11;
        } else {
            edx13 = g80481e9;
            ebx14 = reinterpret_cast<int16_t*>(0x80481ed);
            do {
                if (*reinterpret_cast<int16_t*>(&ecx) == *ebx14) 
                    goto addr_80481cd_17;
                ebx14 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebx14) + 1 + 1);
                --edx13;
            } while (edx13);
        }
        eax5 = eax5 & 1;
        if (eax5) 
            goto addr_8048172_13;
        goto addr_80481d2_11;
        addr_804819b_15:
        eax5 = eax5 & 64;
        if (eax5) 
            goto addr_8048172_13;
        goto addr_80481d2_11;
    }
    addr_8048191_24:
    return eax5;
    addr_8048172_13:
    g80487f5 = 0;
    *edi6 = 10;
    eax5 = 4;
    __asm__("int 0x80");
    goto addr_8048191_24;
    addr_80480f7_4:
    ebp2 = reinterpret_cast<signed char**>(0x80483ed);
    edi6 = reinterpret_cast<signed char*>(0x80483f5);
    goto addr_804812a_10;
}

void fun_80481da(uint32_t ecx) {
    signed char* edi2;
    signed char al3;
    signed char al4;

    do {
        __asm__("lodsb ");
        *edi2 = al3;
        ++edi2;
    } while (al4);
    return;
}

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
    void** eax22;
    signed char dh23;
    void* tmp8_24;
    uint1_t cf25;
    int32_t ebp26;
    int32_t ebp27;
    signed char bl28;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        if (!(reinterpret_cast<uint1_t>(!!(reinterpret_cast<int32_t>(ecx) - 1)) & reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax22) == 0))) {
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        }
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
    *reinterpret_cast<signed char*>(ebp26 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp27 - 0x77) + bl28);
}

struct s0 {
    int32_t f0;
    signed char f4;
    signed char f5;
};

int32_t g80487f9;

void fun_8048055() {
    struct s0** esp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t v4;
    int32_t edx5;
    signed char* esi6;
    signed char** ebx7;
    signed char cl8;

    esp1 = reinterpret_cast<struct s0**>(__zero_stack_offset());
    do {
        ++ebp2;
        if (!esp1[ebp2]) 
            break;
    } while ((esp1[ebp2])->f0 != 0x48544150 || (esp1[ebp2])->f4 != 61);
    goto addr_804806d_4;
    addr_804809e_5:
    __asm__("int 0x80");
    g80481e1 = 24;
    __asm__("int 0x80");
    g80481e5 = 47;
    __asm__("int 0x80");
    g80481e9 = 80;
    while (ebp3 = ebp2 - 1, !!ebp3) {
        g80487f9 = v4;
        fun_80480e3(0x80481ed);
        ebp2 = ebp3;
    }
    __asm__("int 0x80");
    addr_804806d_4:
    ebp2 = edx5;
    esi6 = &(esp1[ebp2])->f5;
    ebx7 = reinterpret_cast<signed char**>(0x80482ed);
    cl8 = 64;
    while (*esi6) {
        if (*esi6 != 58) {
            *ebx7 = esi6;
            ++ebx7;
            do {
                ++esi6;
                if (!*esi6) 
                    goto addr_804809e_5;
            } while (*esi6 != 58);
            *esi6 = 0;
            ++esi6;
            cl8 = reinterpret_cast<signed char>(cl8 - 1);
            if (!cl8) 
                break;
        } else {
            ++esi6;
        }
    }
    goto addr_804809e_5;
}
