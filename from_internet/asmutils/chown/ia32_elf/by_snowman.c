
signed char fun_8048129() {
    int32_t v1;
    int32_t eax2;
    int32_t eax3;

    v1 = eax2;
    do {
        __asm__("lodsb ");
    } while (0);
    eax3 = v1;
    return *reinterpret_cast<signed char*>(&eax3);
}

int32_t g804813d;

void fun_804804c() {
    g804813d = -1;
    return;
}

int32_t fun_8048115() {
    int32_t eax1;
    int32_t ebx2;

    eax1 = 0;
    ebx2 = 0;
    while (*reinterpret_cast<signed char*>(&eax1)) {
        *reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax1) - 48);
        ebx2 = ebx2 * 10 + eax1;
    }
    return ebx2;
}

struct s0 {
    void* f0;
    signed char[458751] pad458752;
    signed char f70000;
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
    struct s0* eax22;
    signed char dh23;
    signed char* eax24;
    signed char dl25;

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
        eax24 = &eax22->f70000;
        *eax24 = reinterpret_cast<signed char>(*eax24 + *reinterpret_cast<signed char*>(&eax24));
    }
    *eax24 = reinterpret_cast<signed char>(*eax24 + dl25);
    *eax24 = reinterpret_cast<signed char>(*eax24 + *reinterpret_cast<signed char*>(&eax24));
}

int32_t g8048139;

int32_t g804853d;

int32_t g8048141;

void fun_8048057(int32_t a1, int32_t a2) {
    signed char al3;
    int32_t esi4;
    void* edx5;
    void* edx6;
    void* edx7;
    void* ecx8;
    int32_t v9;
    int32_t eax10;
    int32_t eax11;
    int1_t zf12;
    int32_t v13;

    g8048139 = -1;
    if (!(reinterpret_cast<int32_t>(__return_address()) - 1) || ((al3 = fun_8048129(), al3 <= 47) || (al3 >= 58 || (esi4 = a2 - 1, edx5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx6) - 1), *reinterpret_cast<signed char*>(esi4 + reinterpret_cast<int32_t>(edx5)) == 46)))) {
        addr_804810e_2:
        __asm__("int 0x80");
    } else {
        edx7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx5) + 1);
        ecx8 = reinterpret_cast<void*>(0);
        v9 = esi4;
        do {
            __asm__("lodsb ");
            ecx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx8) + 1);
            if (reinterpret_cast<int32_t>(ecx8) > reinterpret_cast<int32_t>(edx7)) 
                break;
        } while (al3 != 46);
        goto addr_804809f_6;
    }
    addr_80480a9_7:
    g804813d = esi4;
    *reinterpret_cast<signed char*>(v9 + (reinterpret_cast<int32_t>(ecx8) - 1)) = 0;
    g8048139 = v9;
    eax10 = fun_8048115();
    g804813d = eax10;
    eax11 = fun_8048115();
    g8048139 = eax11;
    zf12 = g804853d == 1;
    if (!zf12) {
        fun_804804c();
    }
    while (v13) {
        g8048141 = v13;
        __asm__("int 0x80");
    }
    goto addr_804810e_2;
    addr_804809f_6:
    g804853d = 1;
    goto addr_80480a9_7;
}
