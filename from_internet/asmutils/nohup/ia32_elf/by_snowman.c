
int32_t fun_8048054(int32_t ecx) {
    int32_t eax2;

    eax2 = 54;
    __asm__("int 0x80");
    if (!__intrinsic()) {
        __asm__("int 0x80");
        eax2 = 41;
        __asm__("int 0x80");
    }
    return eax2;
}

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

struct s1 {
    signed char[1] pad1;
    signed char f1;
};

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
    void* tmp8_23;
    uint1_t cf24;
    unsigned char* edi25;
    signed char* edi26;
    void* tmp8_27;
    uint1_t cf28;
    struct s0* edx29;
    struct s1* edx30;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<uint32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        if (reinterpret_cast<signed char>(*eax22) < reinterpret_cast<signed char>(0) == __intrinsic()) {
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
            *reinterpret_cast<unsigned char*>(eax22 + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            tmp8_23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
            cf24 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<void**>(&eax22) = tmp8_23;
            if (reinterpret_cast<uint1_t>(cf24 | reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(&eax22) == 0))) {
                *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            }
            __asm__("lahf ");
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
            *edi25 = reinterpret_cast<unsigned char>(*edi26 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        }
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_27;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf28);
    edx29->f1 = reinterpret_cast<signed char>(edx30->f1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    __asm__("int 0x80");
}

int32_t g804819b;

struct s2 {
    signed char f0;
    signed char f1;
};

void fun_804807c() {
    void* esp1;
    signed char** ebp2;
    void* esp3;
    signed char** esp4;
    int32_t ecx5;
    int32_t eax6;
    int32_t ecx7;
    signed char* edi8;
    int32_t edx9;
    int32_t ecx10;
    signed char* edi11;
    signed char* v12;
    int32_t ecx13;
    struct s2* edi14;
    void* esp15;
    signed char* edi16;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    ebp2 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(esp1) + reinterpret_cast<int32_t>(__return_address()) * 4 + 4);
    if (!(reinterpret_cast<int32_t>(__return_address()) - 1)) 
        goto 0x804804c;
    __asm__("int 0x80");
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    __asm__("int 0x80");
    if (__intrinsic()) {
        addr_80480ae_4:
        __asm__("lodsd ");
        if (1) 
            goto addr_80480ae_4;
        __asm__("lodsb ");
        if (1) 
            goto addr_80480ae_4;
        __asm__("int 0x80");
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4 - 4 + 4);
        __asm__("int 0x80");
        if (__intrinsic()) 
            goto 0x804804c;
    }
    g804819b = 5;
    fun_8048054(0x442);
    fun_8048054(0x442);
    esp4 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(esp3) - 4 + 4 - 4 + 4 - 4 + 4);
    __asm__("int 0x80");
    ecx5 = 0;
    do {
        if (!ebp2[ecx5]) 
            goto 0x804804c;
        __asm__("lodsd ");
        ++ecx5;
    } while (1 || 1);
    eax6 = 0;
    ecx7 = -1;
    edi8 = ebp2[ecx5];
    do {
        if (!ecx7) 
            break;
        --ecx7;
        ++edi8;
    } while (*edi8);
    edx9 = ecx7;
    ecx10 = -1;
    edi11 = v12;
    do {
        if (!ecx10) 
            break;
        --ecx10;
        ++edi11;
    } while (*edi11);
    ecx13 = ecx10 + edx9;
    while (1) {
        edi14 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esp4) + ecx13);
        do {
            __asm__("lodsb ");
            if (0) 
                break;
            edi14->f0 = *reinterpret_cast<signed char*>(&eax6);
            edi14 = reinterpret_cast<struct s2*>(&edi14->f1);
        } while (*reinterpret_cast<signed char*>(&eax6));
        esp15 = reinterpret_cast<void*>(esp4 - 1);
        edi14->f0 = 47;
        edi16 = &edi14->f1;
        do {
            __asm__("lodsb ");
            *edi16 = 47;
            ++edi16;
        } while (1);
        eax6 = 11;
        esp4 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(esp15) + 4 - 4 + 4);
        __asm__("int 0x80");
        ecx13 = ecx13;
    }
}

void fun_8048167() {
    __asm__("int 0x80");
    __asm__("outsb ");
    __asm__("outsd ");
    if (0) {
    }
}
