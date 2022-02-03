
int32_t fun_804813d(signed char* ecx) {
    while (0) {
        __asm__("int 0x80");
    }
    return 0x66;
}

int32_t fun_8048157() {
    int32_t v1;
    int32_t eax2;
    int32_t eax3;
    int1_t cf4;

    v1 = eax2;
    eax3 = 0;
    while (cf4 = *reinterpret_cast<unsigned char*>(&eax3) < 48, *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - 48), !cf4) {
    }
    return v1;
}

struct s0 {
    void* f0;
    signed char[117440516] pad117440517;
    signed char f7000005;
};

int32_t g804816c;

void fun_8048000(signed char* ecx, int32_t a2, int16_t* a3, int32_t a4, int32_t a5, int32_t a6) {
    void* esp7;
    int1_t less_or_equal8;
    int32_t eax9;
    int32_t* ebx10;
    int32_t* ebx11;
    int32_t eax12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    void** eax25;
    signed char al26;
    signed char* eax27;
    struct s0* eax28;
    signed char dh29;
    void* tmp8_30;
    uint1_t cf31;
    signed char dh32;
    signed char* ebx33;
    int32_t ecx34;
    signed char dh35;
    signed char dl36;
    signed char dl37;
    signed char dh38;
    signed char dl39;

    esp7 = __zero_stack_offset();
    if (less_or_equal8) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax9);
        *ebx10 = *ebx11 + eax12;
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
        *reinterpret_cast<signed char*>(&eax25) = reinterpret_cast<signed char>(al26 + *eax27);
        eax28 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(*eax25));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<int32_t>(eax28));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax28)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax28) + reinterpret_cast<int32_t>(eax28)) + dh29);
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<int32_t>(eax28));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax28) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax28) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
        *reinterpret_cast<void**>(&eax28) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)) + 8);
        __asm__("insb ");
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<int32_t>(eax28));
        eax28->f7000005 = reinterpret_cast<signed char>(eax28->f7000005 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax28) + 1));
        eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
    }
    tmp8_30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28)));
    cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_30) < reinterpret_cast<unsigned char>(eax28->f0));
    eax28->f0 = tmp8_30;
    eax28->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax28))) + cf31);
    *ecx = reinterpret_cast<signed char>(*ecx + dh32);
    __asm__("in eax, dx");
    if (!a3) {
        while (1) {
            addr_8048113_4:
            __asm__("int 0x80");
            if (0) 
                goto 0x8048138;
            if (0) 
                goto 0x8048138;
            __asm__("int 0x80");
        }
    } else {
        g804816c = 2;
        if (*a3 != 0x6c2d) {
            addr_80480d4_8:
            fun_804813d(ecx);
            ebx33 = reinterpret_cast<signed char*>(0x8048170);
            ecx34 = 4;
        } else {
            fun_804813d(ecx);
            fun_8048157();
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g804816c) + 2) = dh35;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g804816c) + 3) = dl36;
            __asm__("int 0x80");
            if (0) 
                goto 0x8048138;
            __asm__("int 0x80");
            ecx = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp7) - 4 + 4 + 4 + 4 + 4 - 4 + 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 4 - 4 - 4 + 4 - 4 + 4 + 8 - 4 - 4 - 4);
            __asm__("int 0x80");
            if (!a5) 
                goto addr_8048113_4; else 
                goto addr_80480d4_8;
        }
    }
    do {
        fun_8048157();
        *ebx33 = dl37;
        ++ebx33;
        --ecx34;
    } while (ecx34);
    fun_8048157();
    *(ebx33 - 6) = dh38;
    *(ebx33 - 5) = dl39;
    __asm__("int 0x80");
    if (0) 
        goto 0x8048138; else 
        goto addr_8048113_4;
}
