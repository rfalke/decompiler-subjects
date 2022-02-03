
int32_t fun_804804c(signed char* ecx) {
    signed char al2;
    int32_t eax3;
    int32_t edx4;

    *ecx = 0;
    do {
        __asm__("lodsb ");
    } while (al2 <= 33);
    while (*reinterpret_cast<signed char*>(&eax3) > 47 && (*reinterpret_cast<signed char*>(&eax3) <= 58 && ((*reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax3) - 48), edx4 = edx4 + eax3, *reinterpret_cast<signed char*>(&eax3) > 47) && *reinterpret_cast<signed char*>(&eax3) <= 58))) {
        edx4 = edx4 * 10;
    }
    return edx4;
}

void fun_8048000(unsigned char* ecx) {
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
    int1_t cf24;
    void** tmp32_25;
    uint1_t cf26;
    void** eax27;
    signed char dh28;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<unsigned char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        tmp8_23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        cf24 = reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(*eax22);
        *eax22 = tmp8_23;
        if (!cf24) {
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8)));
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
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
            *ecx = reinterpret_cast<unsigned char>(*ecx & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *ecx = reinterpret_cast<unsigned char>(*ecx & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            tmp32_25 = eax22;
            cf26 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_25) < reinterpret_cast<uint32_t>(eax22));
            eax27 = tmp32_25;
        }
    }
    *eax27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax27) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax27))) + cf26);
    *ecx = reinterpret_cast<unsigned char>(*ecx + dh28);
}

struct s0 {
    signed char f0;
    signed char f1;
};

void fun_8048104() {
    signed char** esp1;
    int32_t ecx2;
    signed char** ebp3;
    int32_t eax4;
    int32_t ecx5;
    signed char* edi6;
    int32_t edx7;
    int32_t ecx8;
    signed char* edi9;
    int32_t ecx10;
    struct s0* edi11;
    void* esp12;
    signed char* edi13;

    esp1 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4);
    __asm__("int 0x80");
    while (1) {
        __asm__("int 0x80");
        esp1 = esp1 - 1 + 1 - 1 + 1 - 1 - 1 + 1;
        __asm__("int 0x80");
        ecx2 = 0;
        do {
            if (!ebp3[ecx2]) 
                break;
            __asm__("lodsd ");
            ++ecx2;
        } while (1 || 1);
        break;
    }
    eax4 = 0;
    ecx5 = -1;
    edi6 = ebp3[ecx2];
    do {
        if (!ecx5) 
            break;
        --ecx5;
        ++edi6;
    } while (*edi6);
    edx7 = ecx5;
    ecx8 = -1;
    edi9 = reinterpret_cast<signed char*>(1);
    do {
        if (!ecx8) 
            break;
        --ecx8;
        ++edi9;
    } while (*edi9);
    ecx10 = ecx8 + edx7;
    while (1) {
        edi11 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp1) + ecx10);
        do {
            __asm__("lodsb ");
            if (0) 
                break;
            edi11->f0 = *reinterpret_cast<signed char*>(&eax4);
            edi11 = reinterpret_cast<struct s0*>(&edi11->f1);
        } while (*reinterpret_cast<signed char*>(&eax4));
        esp12 = reinterpret_cast<void*>(esp1 - 1);
        edi11->f0 = 47;
        edi13 = &edi11->f1;
        do {
            __asm__("lodsb ");
            *edi13 = 47;
            ++edi13;
        } while (1);
        eax4 = 11;
        esp1 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(esp12) + 4 - 4 + 4);
        __asm__("int 0x80");
        ecx10 = ecx10;
    }
}

void fun_8048072(int32_t a1, int32_t a2, int32_t a3) {
    signed char al4;
    signed char al5;

    if (__return_address() == 1) 
        goto 0x804810b;
    __asm__("lodsb ");
    if (al4 != 45) 
        goto 0x8048113;
    __asm__("lodsb ");
    if (al5 == 0x6e) {
    }
    fun_804804c(__return_address());
}
