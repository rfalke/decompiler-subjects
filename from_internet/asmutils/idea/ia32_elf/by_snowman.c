
void fun_804809c() {
    uint16_t* v1;
    uint16_t* edi2;
    int32_t ecx3;
    uint16_t* edi4;
    uint16_t* esi5;
    uint16_t* esi6;
    uint32_t ecx7;
    uint32_t ebx8;
    uint32_t ecx9;
    uint32_t eax10;

    __asm__("pushad ");
    v1 = edi2;
    ecx3 = 8;
    while (*reinterpret_cast<int16_t*>(&ecx3)) {
        *reinterpret_cast<int16_t*>(&ecx3) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx3) - 1);
        *edi4 = *esi5;
        ++edi4;
        ++esi5;
    }
    esi6 = v1;
    ecx7 = ecx3 + 1;
    ebx8 = 0;
    do {
        ecx9 = ecx7 & 7;
        *edi4 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(esi6[ebx8 + ecx9] << 9) | reinterpret_cast<uint16_t>(esi6[ebx8 + (ecx9 + 1 & 7)] >> 7));
        ++edi4;
        ++esi6;
        eax10 = ecx7 & 7;
        *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax10) < 1);
        ebx8 = ebx8 + (eax10 << 3);
        ++ecx7;
    } while (reinterpret_cast<int32_t>(ecx7) <= reinterpret_cast<int32_t>(44));
    __asm__("popad ");
    return;
}

int16_t fun_8048077(int32_t ecx);

struct s0 {
    int16_t f0;
    int16_t f2;
};

struct s1 {
    signed char[2] pad2;
    int16_t f2;
};

struct s2 {
    signed char[98] pad98;
    int16_t f62;
};

struct s3 {
    int16_t f0;
    int16_t f2;
};

struct s4 {
    signed char[100] pad100;
    int16_t f64;
};

struct s5 {
    int16_t f0;
    int32_t f2;
};

struct s6 {
    int32_t f0;
    int16_t f4;
};

struct s7 {
    signed char[8] pad8;
    int32_t f8;
};

struct s8 {
    int16_t f0;
    int16_t f2;
};

struct s9 {
    int16_t f0;
    int16_t f2;
};

struct s10 {
    int16_t f0;
    int16_t f2;
};

struct s11 {
    int16_t f0;
    int32_t f2;
};

void fun_80480e3(int32_t ecx) {
    int16_t ax2;
    int16_t* edi3;
    struct s0* edi4;
    struct s1* edi5;
    struct s2* esi6;
    void* esi7;
    struct s3* edi8;
    struct s4* esi9;
    struct s5* edi10;
    int16_t ax11;
    struct s6* edi12;
    struct s7* esi13;
    int32_t ecx14;
    struct s8* edi15;
    int16_t ax16;
    struct s9* edi17;
    void* esi18;
    struct s10* edi19;
    void* esi20;
    struct s11* edi21;
    int16_t ax22;
    struct s8* edi23;
    int16_t ax24;
    struct s9* edi25;
    int16_t ax26;
    struct s10* edi27;
    int16_t ax28;

    __asm__("pushad ");
    ax2 = fun_8048077(ecx);
    *edi3 = ax2;
    edi4 = reinterpret_cast<struct s0*>(&edi5->f2);
    esi6 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi7) + 2);
    edi4->f0 = -esi6->f62;
    edi8 = reinterpret_cast<struct s3*>(&edi4->f2);
    esi9 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi6) + 2);
    edi8->f0 = -esi9->f64;
    edi10 = reinterpret_cast<struct s5*>(&edi8->f2);
    ax11 = fun_8048077(ecx);
    edi10->f0 = ax11;
    edi12 = reinterpret_cast<struct s6*>(&edi10->f2);
    esi13 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(esi9) + 2 + 2);
    ecx14 = 42;
    do {
        edi12->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi13) + ecx14 * 2 + 8);
        edi15 = reinterpret_cast<struct s8*>(&edi12->f4);
        ax16 = fun_8048077(ecx14);
        edi15->f0 = ax16;
        edi17 = reinterpret_cast<struct s9*>(&edi15->f2);
        esi18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi13) + 4 + 2);
        edi17->f0 = -*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esi18) + ecx14 * 2 + 4);
        edi19 = reinterpret_cast<struct s10*>(&edi17->f2);
        esi20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi18) + 2);
        edi19->f0 = -*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esi20) + ecx14 * 2 + 2);
        edi21 = reinterpret_cast<struct s11*>(&edi19->f2);
        ax22 = fun_8048077(ecx14);
        edi21->f0 = ax22;
        edi12 = reinterpret_cast<struct s6*>(&edi21->f2);
        esi13 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(esi20) + 2 + 2);
        ecx14 = ecx14 - 6;
    } while (ecx14);
    edi12->f0 = esi13->f8;
    edi23 = reinterpret_cast<struct s8*>(&edi12->f4);
    __asm__("lodsw ");
    ax24 = fun_8048077(ecx14);
    edi23->f0 = ax24;
    edi25 = reinterpret_cast<struct s9*>(&edi23->f2);
    __asm__("lodsw ");
    ax26 = -ax24;
    edi25->f0 = ax26;
    edi27 = reinterpret_cast<struct s10*>(&edi25->f2);
    __asm__("lodsw ");
    edi27->f0 = -ax26;
    __asm__("lodsw ");
    ax28 = fun_8048077(ecx14);
    edi27->f2 = ax28;
    __asm__("popad ");
    return;
}

int16_t fun_8048077(int32_t ecx) {
    uint32_t eax2;
    uint32_t eax3;
    uint32_t ecx4;
    uint32_t edx5;

    eax2 = eax3 & 0xffff;
    if (eax2) {
        ecx4 = 0;
        *reinterpret_cast<int16_t*>(&ecx4) = -1;
        do {
            edx5 = eax2 * ecx4 % 0x10001;
            eax2 = eax2;
            if (!(edx5 - 1)) 
                break;
            --ecx4;
        } while (ecx4);
        eax2 = ecx4;
    }
    return *reinterpret_cast<int16_t*>(&eax2);
}

struct s12 {
    int16_t f0;
    uint16_t f2;
    uint16_t f4;
    int16_t f6;
};

struct s13 {
    signed char[2] pad2;
    uint16_t f2;
};

struct s14 {
    signed char[4] pad4;
    uint16_t f4;
};

int32_t fun_804804c();

void fun_804816c() {
    struct s12* v1;
    struct s12* edi2;
    uint16_t cx3;
    uint16_t* edi4;
    uint16_t dx5;
    struct s13* edi6;
    uint16_t bp7;
    struct s14* edi8;
    int32_t eax9;
    int32_t eax10;
    uint16_t dx11;
    uint16_t bp12;
    int32_t eax13;
    int32_t eax14;
    int32_t ebx15;
    int32_t eax16;
    int32_t eax17;

    __asm__("pushad ");
    v1 = edi2;
    cx3 = *edi4;
    dx5 = edi6->f2;
    bp7 = edi8->f4;
    eax9 = 8;
    do {
        __asm__("lodsw ");
        eax10 = fun_804804c();
        __asm__("lodsw ");
        dx11 = reinterpret_cast<uint16_t>(dx5 + cx3);
        __asm__("lodsw ");
        bp12 = reinterpret_cast<uint16_t>(bp7 + cx3);
        __asm__("lodsw ");
        fun_804804c();
        __asm__("lodsw ");
        eax13 = fun_804804c();
        __asm__("lodsw ");
        eax14 = fun_804804c();
        ebx15 = eax13;
        cx3 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax10) ^ *reinterpret_cast<uint16_t*>(&eax14));
        dx5 = reinterpret_cast<uint16_t>(bp12 ^ *reinterpret_cast<uint16_t*>(&eax14));
        bp7 = reinterpret_cast<uint16_t>(dx11 ^ reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&ebx15) + *reinterpret_cast<uint16_t*>(&eax14)));
        --eax9;
    } while (eax9);
    __asm__("lodsw ");
    eax16 = fun_804804c();
    __asm__("lodsw ");
    __asm__("lodsw ");
    __asm__("lodsw ");
    eax17 = fun_804804c();
    v1->f0 = *reinterpret_cast<int16_t*>(&eax16);
    v1->f2 = reinterpret_cast<uint16_t>(bp7 + cx3);
    v1->f4 = reinterpret_cast<uint16_t>(dx5 + cx3);
    v1->f6 = *reinterpret_cast<int16_t*>(&eax17);
    __asm__("popad ");
    return;
}

int32_t fun_804804c() {
    int32_t esi1;
    int32_t ebx2;

    *reinterpret_cast<signed char*>(esi1 + ebx2 + 0x66) = 0;
}

struct s15 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s15* fun_804820a() {
    void* esp1;
    int32_t eax2;
    void* esp3;
    int32_t edx4;
    void* esp5;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    while (1) {
        eax2 = 7;
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 + 4);
        do {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp3) + eax2) = 42;
            --eax2;
        } while (eax2 >= 0);
        edx4 = 8;
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4);
        do {
            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 + 4);
            __asm__("int 0x80");
            edx4 = edx4 - 3;
            if (__intrinsic()) 
                goto addr_804824b_6;
        } while (1);
        if (edx4 == 8) 
            break;
        fun_804816c();
        __asm__("int 0x80");
        esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 4);
    }
    addr_804824b_6:
    return 3;
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
    signed char dh23;
    void* dl24;
    unsigned char* eax25;
    signed char* edi26;
    signed char* edi27;
    unsigned char tmp8_28;
    uint1_t cf29;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax3);
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
        __asm__("out dx, eax");
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + reinterpret_cast<unsigned char>(*eax22)) + reinterpret_cast<signed char>(dl24));
        eax25 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<unsigned char>(*eax22));
        *edi26 = reinterpret_cast<signed char>(*edi27 + *reinterpret_cast<signed char*>(&eax25));
        *eax25 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
    }
    tmp8_28 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
    cf29 = reinterpret_cast<uint1_t>(tmp8_28 < *eax25);
    *eax25 = tmp8_28;
    *eax25 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<signed char*>(&eax25)) + cf29);
    *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(&ecx));
}

uint32_t fun_8048053() {
    int1_t zf1;
    uint32_t eax2;
    int16_t ax3;
    int32_t edx4;
    int32_t edx5;
    int16_t ax6;
    int16_t bx7;
    uint32_t edx8;
    uint32_t eax9;

    if (zf1) {
        *reinterpret_cast<int16_t*>(&eax2) = reinterpret_cast<int16_t>(-ax3 + 1);
        return eax2;
    } else {
        edx4 = 0;
        *reinterpret_cast<int16_t*>(&edx4) = __intrinsic();
        edx5 = edx4 << 16;
        *reinterpret_cast<int16_t*>(&edx5) = reinterpret_cast<int16_t>(ax6 * bx7);
        edx8 = edx5 % reinterpret_cast<uint32_t>(0x10001);
        eax9 = edx5 / reinterpret_cast<uint32_t>(0x10001);
        *reinterpret_cast<int16_t*>(&eax9) = *reinterpret_cast<int16_t*>(&edx8);
        return eax9;
    }
}

void fun_804806e() {
}

signed char g80483cf;

void fun_804824e(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    struct s15* eax6;
    signed char* edi7;
    int32_t ecx8;
    int1_t zf9;
    struct s15* v10;

    eax5 = a1;
    if (!a2 || (*reinterpret_cast<signed char*>(&eax5) != 0x65 && *reinterpret_cast<signed char*>(&eax5) != 100 || (g80483cf = *reinterpret_cast<signed char*>(&eax5), a3 == 0))) {
        eax6 = reinterpret_cast<struct s15*>(4);
        __asm__("int 0x80");
    } else {
        edi7 = reinterpret_cast<signed char*>(0x80482ef);
        ecx8 = 16;
        do {
            __asm__("lodsb ");
            if (!*reinterpret_cast<signed char*>(&eax5)) 
                break;
            *edi7 = *reinterpret_cast<signed char*>(&eax5);
            ++edi7;
            --ecx8;
        } while (ecx8);
        fun_804809c();
        zf9 = g80483cf == 0x65;
        if (zf9) 
            goto addr_8048299_10; else 
            goto addr_804828d_11;
    }
    addr_80482cf_12:
    __asm__("int 0x80");
    eax6->f65 = 0;
    if (!__intrinsic()) {
    }
    addr_8048299_10:
    if (!a4) 
        goto addr_804829f_15;
    do {
        eax6 = fun_804820a();
        if (__intrinsic()) 
            break;
        addr_804829f_15:
        eax6 = v10;
    } while (eax6 && (eax6 = reinterpret_cast<struct s15*>(5), !__intrinsic()));
    goto addr_80482cf_12;
    goto addr_80482cf_12;
    addr_804828d_11:
    fun_80480e3(ecx8);
    goto addr_8048299_10;
}
