
int32_t fun_8048120() {
    int32_t eax1;
    int32_t ebx2;
    unsigned char* esi3;

    __asm__("pushad ");
    eax1 = 0;
    ebx2 = 0;
    while (*esi3) {
        *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(*esi3 & 0xcf);
        eax1 = eax1 * 10 + ebx2;
        ++esi3;
    }
    __asm__("popad ");
    return eax1;
}

int32_t fun_804813c() {
    int32_t ecx1;
    signed char* edi2;
    signed char* esi3;

    __asm__("pushad ");
    ecx1 = 0;
    *reinterpret_cast<signed char*>(&ecx1) = -56;
    edi2 = esi3;
    do {
        if (!ecx1) 
            break;
        --ecx1;
        ++edi2;
    } while (*edi2);
    __asm__("popad ");
    return 0xc8 - ecx1 - 1;
}

struct s0 {
    int32_t f0;
    signed char f1;
    signed char[283935712] pad283935717;
    signed char f10ec83e5;
};

signed char g8048161;

void fun_8048000(struct s0* ecx) {
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
    signed char* edi26;
    int32_t ecx27;
    signed char* esi28;
    int32_t eax29;
    signed char* edi30;
    signed char* edi31;
    void* ebp32;

    if (less_or_equal2) {
        *reinterpret_cast<int32_t*>(ecx) = *reinterpret_cast<int32_t*>(ecx) + eax3;
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
        __asm__("popad ");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 1) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax22) + 1));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf25);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x10ec83e5) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) + 0x10ec83e5) + *reinterpret_cast<signed char*>(&ecx));
    __asm__("int 0x80");
    __asm__("int 0x80");
    if (!0) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        g8048161 = 10;
        __asm__("int 0x80");
        __asm__("int 0x80");
        edi26 = reinterpret_cast<signed char*>(0x8048161);
        ecx27 = 19;
        while (1) {
            do {
                if (!ecx27) 
                    break;
                --ecx27;
                ++edi26;
            } while (*edi26 != 58);
            do {
                if (!ecx27) 
                    break;
                --ecx27;
                ++edi26;
            } while (*edi26 != 58);
            esi28 = edi26;
            do {
                if (!ecx27) 
                    break;
                --ecx27;
                ++edi26;
                ++esi28;
            } while (*edi26 != 58);
            --edi26;
            *edi26 = 0;
            eax29 = fun_8048120();
            if (eax29 == 24) 
                break;
            do {
                if (!ecx27) 
                    break;
                --ecx27;
                ++edi26;
            } while (*edi26 != 10);
        }
        edi30 = esi28;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            --edi30;
        } while (*edi30 != 10);
        edi31 = edi30 + 1 + 1;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            ++edi31;
        } while (*edi31 != 58);
        *reinterpret_cast<int16_t*>(edi31 - 1) = 10;
        fun_804813c();
        __asm__("int 0x80");
    }
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp32) - 4) = 1;
    __asm__("int 0x80");
}

void fun_8048155() {
    int1_t zf1;
    int1_t of2;
    int1_t cf3;
    int1_t below_or_equal4;

    __asm__("das ");
    if (!zf1) {
        __asm__("das ");
        if (!of2) {
            if (cf3) {
                if (!below_or_equal4) {
                }
            }
        }
    }
}
