
struct s0 {
    signed char[1] pad1;
    signed char f1;
};

void fun_804805f() {
    int32_t eax1;
    int32_t eax2;
    signed char* edi3;
    int32_t eax4;
    int32_t eax5;
    struct s0* edi6;

    eax1 = eax2 / 10;
    *edi3 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax1) + 48);
    eax4 = eax5 % 10 + 48;
    edi6->f1 = *reinterpret_cast<signed char*>(&eax4);
    return;
}

void fun_804804c(signed char cl, uint32_t a2);

void fun_804806e(signed char cl) {
    uint32_t eax2;
    signed char* edi3;

    fun_804804c(cl, (eax2 >> 5) + 10);
    *edi3 = 46;
    fun_804805f();
    return;
}

struct s1 {
    signed char[10] pad10;
    unsigned char fa;
};

struct s2 {
    signed char[10] pad10;
    unsigned char fa;
};

struct s3 {
    signed char[1] pad1;
    signed char f1;
};

void fun_804804c(signed char cl, uint32_t a2) {
    struct s1* edx3;
    struct s2* edx4;
    int32_t eax5;
    int32_t eax6;
    signed char* edi7;
    signed char* edi8;
    struct s3* edi9;
    int32_t eax10;
    int32_t eax11;

    edx3->fa = reinterpret_cast<unsigned char>(edx4->fa >> cl);
    eax5 = eax6 / reinterpret_cast<int32_t>(__return_address());
    if (eax5) {
        *edi7 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax5) + 48);
        edi8 = &edi9->f1;
    }
    eax10 = eax11 % reinterpret_cast<int32_t>(__return_address()) + 48;
    *edi8 = *reinterpret_cast<signed char*>(&eax10);
    goto a2;
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
    void** edx23;
    void** eax24;
    void** edx25;
    void* tmp8_26;
    unsigned char* edi27;
    signed char* edi28;
    void* tmp8_29;
    uint1_t cf30;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<signed char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<signed char>(*eax22) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax22)));
        edx23 = eax22;
        eax24 = edx25;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx23) + 1));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(tmp8_26) - reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*edx23) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*edx23) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)))))));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        __asm__("outsb ");
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + reinterpret_cast<unsigned char>(*eax24));
        *edi27 = reinterpret_cast<unsigned char>(*edi28 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    }
    tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
    cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(*eax24));
    *eax24 = tmp8_29;
    *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))) + cf30);
    *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx23) + 1));
}

signed char g804821a;

signed char g804821b;

int16_t g804821c;

int32_t g804821e;

int16_t g8048222;

struct s4 {
    signed char f0;
    int16_t f1;
};

signed char g8048224;

int32_t g8048228;

struct s5 {
    int16_t f0;
    int16_t f2;
};

struct s6 {
    int16_t f0;
    int16_t f2;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    signed char[1] pad21;
    int16_t f15;
};

int32_t g804826a;

struct s7 {
    int16_t f0;
    signed char f2;
};

void fun_8048092() {
    int32_t ebp1;
    int32_t eax2;
    int16_t ax3;
    struct s4* edi4;
    int32_t eax5;
    uint32_t* esp6;
    uint32_t v7;
    struct s5* edi8;
    struct s6* edi9;
    int32_t* ecx10;
    int32_t* esp11;
    int32_t v12;
    uint32_t v13;
    struct s6* tmp32_14;
    uint1_t cf15;
    uint1_t zf16;
    struct s7* edi17;

    __asm__("int 0x80");
    g804821a = 32;
    ebp1 = 0;
    eax2 = reinterpret_cast<int32_t>(__return_address()) % 0x1e13380 % 0x15180;
    if (eax2 / 0xe10 > 12) {
        ebp1 = 1;
    }
    fun_804804c(0, eax2 % 0xe10);
    g804821b = 58;
    fun_804805f();
    ax3 = 0x6d61;
    if (ebp1) {
        ax3 = 0x6d70;
    }
    g804821c = ax3;
    g804821e = 0x70752020;
    g8048222 = 0x2020;
    edi4 = reinterpret_cast<struct s4*>(0x8048224);
    __asm__("int 0x80");
    eax5 = reinterpret_cast<int32_t>(__return_address()) % 0x1e13380;
    esp6 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    v7 = reinterpret_cast<uint32_t>(eax5 % 0x15180);
    if (eax5 / 0x15180) {
        fun_804804c(0, v7);
        esp6 = esp6 - 1 + 1;
        g8048224 = reinterpret_cast<signed char>(0x79616420);
        g8048228 = 0x20202c73;
        edi4 = reinterpret_cast<struct s4*>(0x804822c);
    }
    fun_804804c(0, reinterpret_cast<int32_t>(v7) % 0xe10);
    edi4->f0 = 58;
    edi8 = reinterpret_cast<struct s5*>(&edi4->f1);
    fun_804805f();
    edi8->f0 = 0x202c;
    edi9 = reinterpret_cast<struct s6*>(&edi8->f2);
    ecx10 = reinterpret_cast<int32_t*>(0);
    __asm__("int 0x80");
    if (!__intrinsic()) {
        g804826a = 5;
        esp11 = reinterpret_cast<int32_t*>(esp6 + 1 - 1 - 1 + 1 + 1 - 1 + 1 - 1 + 1 - 1 + 1 - 96);
        do {
            ecx10 = esp11;
            esp11 = esp11 - 1 + 1;
            __asm__("int 0x80");
            if (v12 == 7) {
            }
        } while (1);
    }
    fun_804804c(*reinterpret_cast<signed char*>(&ecx10), v13);
    edi9->f0 = reinterpret_cast<int16_t>(0x65737520);
    edi9->f4 = 0x202c7372;
    edi9->f8 = 0x64616f6c;
    edi9->fc = 0x65766120;
    edi9->f10 = 0x65676172;
    edi9->f15 = 0x203a;
    tmp32_14 = edi9 + 1;
    cf15 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_14) < reinterpret_cast<uint32_t>(edi9));
    zf16 = reinterpret_cast<uint1_t>(tmp32_14 == 0);
    fun_804806e(*reinterpret_cast<signed char*>(&ecx10));
    tmp32_14->f0 = 0x202c;
    edi17 = reinterpret_cast<struct s7*>(&tmp32_14->f2);
    fun_804806e(*reinterpret_cast<signed char*>(&ecx10));
    edi17->f0 = 0x202c;
    fun_804806e(*reinterpret_cast<signed char*>(&ecx10));
    edi17->f2 = 10;
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("das ");
    if (!(cf15 | zf16)) {
        if (!cf15) {
            if (!cf15) {
                __asm__("outsb ");
                __asm__("das ");
                if (!zf16) {
                }
                __asm__("insd ");
            }
        }
    }
}
