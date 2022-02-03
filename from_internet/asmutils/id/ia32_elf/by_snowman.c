
void fun_8048108(int32_t* ecx) {
    int32_t ecx2;
    uint32_t eax3;
    int32_t eax4;
    int32_t v5;
    signed char* edi6;

    ecx2 = 0;
    do {
        eax3 = eax3 / 10;
        ++ecx2;
    } while (eax3);
    do {
        eax4 = v5;
        *edi6 = *reinterpret_cast<signed char*>(&eax4);
        ++edi6;
        --ecx2;
    } while (ecx2);
    return;
}

signed char g80481a7;

int32_t fun_80480d4(int32_t* ecx) {
    int32_t eax2;

    __asm__("pushad ");
    if (eax2 >= 0) {
        fun_8048108(ecx);
        g80481a7 = 9;
        __asm__("int 0x80");
        __asm__("int 0x80");
    }
    __asm__("popad ");
    return 4;
}

void fun_8048120();

int32_t fun_8048083() {
    int32_t ebp1;
    int32_t* ecx2;

    __asm__("int 0x80");
    ebp1 = 80;
    ecx2 = reinterpret_cast<int32_t*>(fun_8048120);
    __asm__("int 0x80");
    if (!0) {
        do {
            fun_8048108(ecx2);
            --ebp1;
            if (ebp1) {
                g80481a7 = 44;
            }
            ecx2 = reinterpret_cast<int32_t*>(0x80481a7);
            __asm__("int 0x80");
        } while (ebp1);
    }
    return 4;
}

struct s0 {
    signed char[24] pad24;
    signed char f18;
};

struct s1 {
    signed char[24] pad24;
    signed char f18;
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
    int32_t edi24;
    int32_t edi25;
    signed char dh26;
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
        __asm__("daa ");
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *reinterpret_cast<signed char*>(edi24 + 0x7000001) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi25 + 0x7000001) + dh26);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_27;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf28);
    edx29->f18 = reinterpret_cast<signed char>(edx30->f18 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    __asm__("int 0x80");
    fun_80480d4(ecx);
    __asm__("int 0x80");
    fun_80480d4(ecx);
    fun_8048083();
    __asm__("int 0x80");
    __asm__("int 0x80");
}

void fun_8048120() {
    int1_t cf1;
    int1_t zf2;
    int1_t cf3;

    if (!cf1) {
        if (zf2) {
            if (!cf3) {
            }
        }
    }
}
