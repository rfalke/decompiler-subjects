
int16_t fun_80480e4();

void fun_80480d8(int32_t ecx) {
    int16_t ax2;
    unsigned char al3;
    unsigned char* edi4;

    __asm__("rol eax, 0x8");
    __asm__("aam 0x10");
    ax2 = fun_80480e4();
    al3 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ax2) + 1);
    if (al3 > 9) {
        al3 = reinterpret_cast<unsigned char>(al3 + 7);
    }
    *edi4 = reinterpret_cast<unsigned char>(al3 + 48);
    goto ecx;
}

int16_t fun_80480e4() {
    int16_t ax1;
    signed char al2;
    unsigned char al3;
    unsigned char ah4;
    unsigned char* edi5;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax1) + 1) = al2;
    al3 = ah4;
    if (al3 > 9) {
        al3 = reinterpret_cast<unsigned char>(al3 + 7);
    }
    *reinterpret_cast<unsigned char*>(&ax1) = reinterpret_cast<unsigned char>(al3 + 48);
    *edi5 = *reinterpret_cast<unsigned char*>(&ax1);
    return ax1;
}

struct s0 {
    void* f0;
    signed char[90] pad91;
    signed char f5b;
};

struct s1 {
    signed char f0;
    signed char f1;
};

int32_t fun_80480da();

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
    signed char dh24;
    void* tmp8_25;
    uint1_t cf26;
    signed char bl27;
    struct s1* edi28;
    struct s1* esi29;
    int32_t ecx30;
    int32_t ebp31;
    int32_t eax32;
    signed char* esi33;
    int32_t v34;

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
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(eax22)) + dh24);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf26 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_25) < reinterpret_cast<unsigned char>(eax22->f0));
    eax22->f0 = tmp8_25;
    eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf26);
    eax22->f5b = reinterpret_cast<signed char>(eax22->f5b + bl27);
    if (reinterpret_cast<int32_t>(eax22) - 1) 
        goto addr_8048053_4;
    while (1) {
        do {
            edi28 = reinterpret_cast<struct s1*>(0x80480f0);
            esi29 = reinterpret_cast<struct s1*>(0x80480f0);
            ecx30 = 51;
            while (ecx30) {
                --ecx30;
                edi28->f0 = 32;
                edi28 = reinterpret_cast<struct s1*>(&edi28->f1);
                esi29 = reinterpret_cast<struct s1*>(&esi29->f1);
            }
            __asm__("int 0x80");
            if (__intrinsic()) 
                goto addr_80480d0_10;
            if (0) 
                break;
            __asm__("pushad ");
            __asm__("cdq ");
            ebp31 = 3;
            fun_80480d8(fun_80480d8);
            fun_80480da();
            *reinterpret_cast<signed char*>(&eax32) = 58;
            esi29->f0 = 58;
            esi33 = &edi28->f1;
            do {
                __asm__("lodsb ");
                if (*reinterpret_cast<signed char*>(&eax32) == 0x7f || *reinterpret_cast<signed char*>(&eax32) < 32) {
                    *(esi33 - 1) = 46;
                }
                eax32 = fun_80480da();
                --ebp31;
            } while (ebp31);
            *esi33 = 10;
            __asm__("popad ");
            __asm__("int 0x80");
        } while (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(__intrinsic()))));
        __asm__("int 0x80");
        addr_8048053_4:
        if (!v34) 
            goto addr_80480d3_20;
        __asm__("int 0x80");
        if (__intrinsic()) 
            break;
    }
    addr_80480d0_10:
    addr_80480d3_20:
    __asm__("int 0x80");
}
