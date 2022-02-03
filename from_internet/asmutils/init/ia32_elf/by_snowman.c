
unsigned char g8048208 = 0;

uint32_t g804821c;

struct s0 {
    signed char[1] pad1;
    int32_t f1;
};

int16_t g64;

unsigned char g9;

unsigned char g8;

void fun_80480b7() {
    int32_t eax1;
    int32_t ebp2;
    unsigned char* eax3;
    uint32_t eax4;
    int1_t zf5;
    int1_t sf6;
    unsigned char* edx7;
    struct s0* ecx8;
    int32_t ebp9;
    unsigned char tmp8_10;
    int1_t cf11;
    unsigned char tmp8_12;
    unsigned char tmp8_13;
    unsigned char tmp8_14;
    unsigned char tmp8_15;
    unsigned char tmp8_16;
    uint1_t cf17;
    uint1_t zf18;
    int1_t sf19;

    eax1 = ebp2;
    if (*reinterpret_cast<unsigned char*>(&eax1) > 9) {
        *reinterpret_cast<unsigned char*>(&eax1) = 9;
    }
    g8048208 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) + 48);
    __asm__("int 0x80");
    if (0) {
        addr_80481ba_4:
        eax3 = reinterpret_cast<unsigned char*>(-1);
    } else {
        g804821c = 5;
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        eax4 = g804821c;
        if (eax4 > 2) {
            __asm__("int 0x80");
        }
        eax3 = reinterpret_cast<unsigned char*>(2);
        __asm__("int 0x80");
        zf5 = 0;
        sf6 = 0;
        do {
            if (sf6) 
                goto addr_80481ba_4;
            if (!zf5) 
                break;
            edx7 = reinterpret_cast<unsigned char*>(0x80481ec);
            ecx8 = reinterpret_cast<struct s0*>(0x80481e8);
            __asm__("int 0x80");
            if (!1) {
                __asm__("int 0x80");
                edx7 = reinterpret_cast<unsigned char*>(0);
                ecx8 = reinterpret_cast<struct s0*>(0);
                __asm__("int 0x80");
            }
            eax3 = reinterpret_cast<unsigned char*>(1);
            __asm__("int 0x80");
            __asm__("arpl [ecx+0x6e], sp");
            __asm__("daa ");
            if (1) 
                goto addr_80481f2_14;
            *reinterpret_cast<int16_t*>(&ebp9) = reinterpret_cast<int16_t>(g64 * 0x2f20);
            __asm__("das ");
            if (!__intrinsic()) 
                goto addr_8048246_16;
            tmp8_10 = reinterpret_cast<unsigned char>(*edx7 + *reinterpret_cast<signed char*>(&ecx8));
            cf11 = tmp8_10 < *edx7;
            *edx7 = tmp8_10;
            __asm__("das ");
            if (!*edx7) 
                goto addr_8048247_18;
            __asm__("das ");
            if (cf11) 
                goto addr_804824a_20;
            ecx8->f1 = ecx8->f1;
            zf5 = ecx8->f1 == 0;
            sf6 = ecx8->f1 < 0;
        } while (reinterpret_cast<uint1_t>(!!(reinterpret_cast<int32_t>(ecx8) - 1)) & reinterpret_cast<uint1_t>(!zf5));
        goto addr_80481f2_14;
    }
    *reinterpret_cast<unsigned char**>(ebp9 * 4 + 0x8048208) = eax3;
    return;
    addr_80481f2_14:
    tmp8_12 = reinterpret_cast<unsigned char>(g9 + 9);
    g9 = tmp8_12;
    tmp8_13 = reinterpret_cast<unsigned char>(g9 + 9);
    g9 = tmp8_13;
    tmp8_14 = reinterpret_cast<unsigned char>(g8 + 8);
    g8 = tmp8_14;
    tmp8_15 = reinterpret_cast<unsigned char>(g8 + 8);
    g8 = tmp8_15;
    tmp8_16 = reinterpret_cast<unsigned char>(g8 + 8);
    cf17 = reinterpret_cast<uint1_t>(tmp8_16 < g8);
    g8 = tmp8_16;
    zf18 = reinterpret_cast<uint1_t>(g8 == 0);
    sf19 = reinterpret_cast<signed char>(g8) < reinterpret_cast<signed char>(0);
    __asm__("das ");
    if (!(cf17 | zf18)) {
        if (zf18) {
        }
    }
    addr_8048246_16:
    addr_8048247_18:
    addr_804824a_20:
}

struct s1 {
    signed char[2] pad2;
    signed char f2;
};

struct s2 {
    signed char[2] pad2;
    signed char f2;
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
    signed char dh23;
    unsigned char* edx24;
    unsigned char* edx25;
    unsigned char* edx26;
    unsigned char* edi27;
    signed char* edi28;
    void* tmp8_29;
    uint1_t cf30;
    struct s1* edx31;
    struct s2* edx32;
    uint32_t ebp33;
    uint32_t ebp34;

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
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8) | *edx24);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *edx25 = reinterpret_cast<unsigned char>(*edx26 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *edi27 = reinterpret_cast<unsigned char>(*edi28 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_29;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf30);
    edx31->f2 = reinterpret_cast<signed char>(edx32->f2 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    __asm__("int 0x80");
    if (__return_address()) {
        __asm__("int 0x80");
        ebp33 = 0;
        do {
            ++ebp33;
            fun_80480b7();
        } while (ebp33 < 4);
        while (1) {
            addr_804808b_6:
            __asm__("int 0x80");
            if (0) 
                continue;
            ebp34 = 0;
            do {
                ++ebp34;
                if (ebp34 > 4) 
                    goto addr_804808b_6;
            } while (*reinterpret_cast<int32_t*>(ebp34 * 4 + 0x8048208) != 0x72);
            fun_80480b7();
        }
    } else {
        __asm__("int 0x80");
        goto 0x80481c7;
    }
}
