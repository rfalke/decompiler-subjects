
void fun_804804c(unsigned char cl) {
    int32_t eax2;
    int32_t ebx3;
    int32_t eax4;
    int32_t ebx5;
    int32_t eax6;
    int32_t eax7;
    signed char* esi8;
    signed char* esi9;
    unsigned char* esi10;
    unsigned char* esi11;

    *reinterpret_cast<signed char*>(eax2 + ebx3 + 74) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax4 + ebx5 + 74) << cl);
    fun_804804c(cl);
    eax6 = eax7;
    *esi8 = reinterpret_cast<signed char>(*esi9 + *reinterpret_cast<signed char*>(&eax6));
    *esi10 = reinterpret_cast<unsigned char>(*esi11 & 3);
    fun_804804c(cl);
    __asm__("popad ");
    return;
}

struct s0 {
    void* f0;
    signed char[8] pad9;
    signed char f9;
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
    int32_t* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    struct s0* eax23;
    signed char dh24;
    struct s0* tmp32_25;
    uint1_t cf26;
    struct s0* eax27;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax19) + *eax19);
        *eax22 = reinterpret_cast<signed char>(*eax22 + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<signed char>(*eax22 + *reinterpret_cast<signed char*>(&eax22));
        eax23 = reinterpret_cast<struct s0*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(ecx)) + 44);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax23) + reinterpret_cast<uint32_t>(eax23)) + dh24);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<uint32_t>(eax23));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax23) + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax23) + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8) + 1);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 1);
        eax23->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax23->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        tmp32_25 = reinterpret_cast<struct s0*>(&eax23->f0);
        cf26 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_25) < reinterpret_cast<uint32_t>(eax23));
        eax27 = tmp32_25;
    }
    eax27->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax27->f0) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax27))) + cf26);
    eax27->f9 = reinterpret_cast<signed char>(eax27->f9 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax27) + 1));
}

void fun_8048098() {
    signed char* edi1;
    int32_t ecx2;

    __asm__("int 0x80");
    if (!__intrinsic()) {
        __asm__("int 0x80");
        if (!__intrinsic()) {
            edi1 = reinterpret_cast<signed char*>(0xc0);
            ecx2 = 0x4b000;
            while (ecx2) {
                --ecx2;
                *edi1 = 0;
                ++edi1;
            }
            fun_804804c(*reinterpret_cast<unsigned char*>(&ecx2));
            __asm__("int 0x80");
        }
        __asm__("int 0x80");
    }
    __asm__("int 0x80");
    __asm__("das ");
    if (0) {
    }
}

void fun_8048069() {
    signed char al1;
    int32_t eax2;
    signed char al3;
    signed char al4;
    int32_t eax5;
    int32_t* esi6;
    int32_t edi7;
    int32_t* esi8;
    int32_t ecx9;

    __asm__("lodsd ");
    if (!al1) {
        eax2 = 0xfffffd80;
    } else {
        if (al3 == 2) {
            *reinterpret_cast<int16_t*>(&eax2) = 0x280;
        } else {
            if (al4 != 1) {
                eax2 = 0xff;
            }
        }
    }
    eax5 = eax2 + *esi6;
    *reinterpret_cast<signed char*>(edi7 + eax5) = 14;
    *esi8 = eax5;
    ecx9 = 0;
    *reinterpret_cast<int16_t*>(&ecx9) = -1;
    while (1) {
        --ecx9;
        if (!ecx9) 
            goto "???";
    }
}
