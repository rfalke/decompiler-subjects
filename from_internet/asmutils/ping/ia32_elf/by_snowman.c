
void fun_804811e(int32_t a1, int32_t a2) {
    int32_t eax3;
    int32_t edx4;
    int32_t ecx5;
    int32_t ebx6;
    int32_t esi7;
    int32_t edi8;

    eax3 = 0;
    edx4 = 0;
    ecx5 = 0;
    do {
        ebx6 = 0;
        while (++edx4, *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi7 + edx4) - 48), *reinterpret_cast<unsigned char*>(esi7 + edx4) >= 48) {
            ebx6 = ebx6 * 10 + eax3;
        }
        *reinterpret_cast<signed char*>(edi8 + ecx5 + 4) = *reinterpret_cast<signed char*>(&ebx6);
        ++ecx5;
    } while (ecx5 != 4);
    return;
}

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

struct s1 {
    void* f0;
    unsigned char f1;
};

int32_t g804814a;

signed char g8048140;

signed char g804816e;

void fun_8048000(int32_t* ecx) {
    int1_t less_or_equal2;
    struct s0* esi3;
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
    struct s1* eax24;
    signed char dh25;
    unsigned char* eax26;
    unsigned char tmp8_27;
    uint1_t cf28;
    uint32_t* edx29;
    uint32_t* edx30;
    int32_t v31;
    int1_t zf32;

    if (less_or_equal2) {
        esi3 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi4) + 1);
        *ecx = *ecx + eax5;
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
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
        *reinterpret_cast<unsigned char*>(&(eax24 - 0x3ffffbfe)->f0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(eax24 - 0x3ffffbfe)->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        eax26 = &eax24->f1;
        *eax26 = reinterpret_cast<unsigned char>(*eax26 + reinterpret_cast<int32_t>(eax26));
        esi3->f1 = reinterpret_cast<signed char>(esi3->f1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
        *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    }
    tmp8_27 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    cf28 = reinterpret_cast<uint1_t>(tmp8_27 < *eax26);
    *eax26 = tmp8_27;
    *eax26 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26)) + cf28);
    *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&ecx));
    *eax26 = reinterpret_cast<unsigned char>(*eax26 + 1);
    *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax26) + 1));
    *edx29 = *edx30 & reinterpret_cast<uint32_t>(ecx);
    if (!(v31 - 1) || (fun_804811e(0x8048054, 11), g804814a = 2, 0)) {
        addr_8048117_4:
        __asm__("int 0x80");
    } else {
        g8048140 = 5;
        do {
            __asm__("bts [0x8048148], ebp");
            __asm__("int 0x80");
            if (0) 
                goto addr_8048117_4;
            __asm__("int 0x80");
            zf32 = g804816e == 0;
        } while (!zf32);
    }
    __asm__("int 0x80");
    goto addr_8048117_4;
}
