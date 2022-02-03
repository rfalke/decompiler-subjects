
signed char g8049d18;

void fun_8048d11(int32_t ecx);

signed char* g8049d23;

signed char g8049d1a;

signed char g804984f;

signed char g8049850;

uint16_t g804985b;

void fun_8048d79(unsigned char* ecx);

int16_t g804985d;

int32_t g804985f;

void fun_8048d00(int32_t ecx);

int32_t fun_8048cc6(int32_t ecx);

int32_t fun_8048ce3(int32_t ecx);

int32_t fun_80487fb(int32_t ecx) {
    int32_t ebp2;
    signed char* esi3;
    signed char al4;
    signed char* esi5;
    signed char al6;
    signed char* esi7;
    uint16_t ax8;
    int32_t ebp9;
    int16_t ax10;
    int32_t ebp11;
    int32_t eax12;
    signed char* esi13;
    signed char* esi14;
    signed char* esi15;
    signed char* esi16;
    signed char* esi17;
    signed char* esi18;
    signed char* esi19;
    signed char* esi20;
    signed char* esi21;
    signed char* esi22;
    signed char* esi23;
    signed char* esi24;
    signed char* esi25;
    signed char* esi26;

    __asm__("pushad ");
    __asm__("int 0x80");
    __asm__("int 0x80");
    ebp2 = 0;
    do {
        if (*reinterpret_cast<unsigned char*>(ebp2 + 0x804984b) <= 9) {
            g8049d18 = 48;
        }
        __asm__("pushad ");
        fun_8048d11(16);
        g8049d23 = esi3;
        __asm__("popad ");
        g8049d1a = 32;
        __asm__("int 0x80");
        ++ebp2;
    } while (ebp2 != 16);
    __asm__("int 0x80");
    __asm__("int 0x80");
    al4 = g804984f;
    if (al4 != 1) {
        if (al4 != 2) {
            __asm__("pushad ");
            fun_8048d11(16);
            g8049d23 = esi5;
            __asm__("popad ");
        }
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    al6 = g8049850;
    if (al6 != 1) {
        if (al6 != 2) {
            __asm__("pushad ");
            fun_8048d11(16);
            g8049d23 = esi7;
            __asm__("popad ");
        }
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    ax8 = g804985b;
    ebp9 = 0;
    do {
        if (ax8 == *reinterpret_cast<uint16_t*>(ebp9 + reinterpret_cast<int32_t>(fun_8048d79))) 
            break;
        ebp9 = ebp9 + 33;
    } while (ebp9 != 0xe7);
    goto addr_804895c_18;
    addr_80489ac_20:
    __asm__("int 0x80");
    __asm__("int 0x80");
    ax10 = g804985d;
    ebp11 = 0;
    do {
        if (ax10 == *reinterpret_cast<int16_t*>(ebp11 + 0x8048e60)) 
            break;
        ebp11 = ebp11 + 32;
    } while (ebp11 != 0x240);
    goto addr_80489ec_23;
    addr_8048a0d_25:
    __asm__("int 0x80");
    __asm__("int 0x80");
    eax12 = g804985f;
    if (eax12) {
        if (eax12 != 1) {
            __asm__("pushad ");
            fun_8048d11(16);
            g8049d23 = esi13;
            __asm__("popad ");
        }
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("pushad ");
    fun_8048d11(16);
    g8049d23 = esi14;
    __asm__("popad ");
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_8048d00("  Start of program headers:            Start of section headers:            Flags:                             0x  Size of this header:                 Size of program headers:             Number of program headers:           Size of section headers:             Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi15;
    __asm__("popad ");
    fun_8048cc6(10);
    __asm__("int 0x80");
    fun_8048d00("  Start of section headers:            Flags:                             0x  Size of this header:                 Size of program headers:             Number of program headers:           Size of section headers:             Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi16;
    __asm__("popad ");
    fun_8048cc6(10);
    __asm__("int 0x80");
    fun_8048d00("  Flags:                             0x  Size of this header:                 Size of program headers:             Number of program headers:           Size of section headers:             Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(16);
    g8049d23 = esi17;
    __asm__("popad ");
    *reinterpret_cast<unsigned char*>(&g8049d23) = 10;
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_8048d00("  Size of this header:                 Size of program headers:             Number of program headers:           Size of section headers:             Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi18;
    __asm__("popad ");
    fun_8048ce3(10);
    __asm__("int 0x80");
    fun_8048d00("  Size of program headers:             Number of program headers:           Size of section headers:             Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi19;
    __asm__("popad ");
    fun_8048ce3(10);
    __asm__("int 0x80");
    fun_8048d00("  Number of program headers:           Size of section headers:             Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi20;
    __asm__("popad ");
    *reinterpret_cast<unsigned char*>(&g8049d23) = 10;
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_8048d00("  Size of section headers:             Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi21;
    __asm__("popad ");
    fun_8048ce3(10);
    __asm__("int 0x80");
    fun_8048d00("  Number of section headers:           Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi22;
    __asm__("popad ");
    *reinterpret_cast<unsigned char*>(&g8049d23) = 10;
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_8048d00("  Section header string table index: \n");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi23;
    __asm__("popad ");
    *reinterpret_cast<unsigned char*>(&g8049d23) = 10;
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
    addr_80489ec_23:
    __asm__("pushad ");
    fun_8048d11(16);
    g8049d23 = esi24;
    __asm__("popad ");
    goto addr_8048a0d_25;
    addr_804895c_18:
    if (ax8 < 0xff00 || ax8 > 0xffff) {
        __asm__("pushad ");
        fun_8048d11(16);
        g8049d23 = esi25;
        __asm__("popad ");
        goto addr_80489ac_20;
    } else {
        __asm__("pushad ");
        fun_8048d11(16);
        g8049d23 = esi26;
        __asm__("popad ");
        goto addr_80489ac_20;
    }
}

int16_t g804987b;

int32_t fun_8048689(int32_t ecx);

int32_t fun_8048580(int32_t ecx) {
    int16_t ax2;
    signed char* esi3;
    signed char* esi4;
    int32_t ecx5;
    int32_t eax6;
    int1_t zf7;

    ax2 = g804987b;
    if (ax2) {
        __asm__("pushad ");
        fun_8048d11(10);
        g8049d23 = esi3;
        __asm__("popad ");
        __asm__("pushad ");
        fun_8048d11(16);
        g8049d23 = esi4;
        __asm__("popad ");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        ecx5 = 0;
        do {
            __asm__("int 0x80");
            eax6 = fun_8048689(ecx5);
            ++ecx5;
            zf7 = *reinterpret_cast<int16_t*>(&ecx5) == g804987b;
        } while (!zf7);
        return eax6;
    } else {
        __asm__("int 0x80");
        return 4;
    }
}

int16_t g8049877;

int32_t fun_8048445();

int32_t fun_804838d(int32_t ecx) {
    int16_t ax2;
    signed char* esi3;
    signed char* esi4;
    int32_t ecx5;
    int32_t eax6;
    int1_t zf7;

    ax2 = g8049877;
    if (ax2) {
        __asm__("pushad ");
        fun_8048d11(10);
        g8049d23 = esi3;
        __asm__("popad ");
        __asm__("pushad ");
        fun_8048d11(16);
        g8049d23 = esi4;
        __asm__("popad ");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        ecx5 = 0;
        do {
            __asm__("int 0x80");
            eax6 = fun_8048445();
            ++ecx5;
            zf7 = *reinterpret_cast<int16_t*>(&ecx5) == g8049877;
        } while (!zf7);
        return eax6;
    } else {
        __asm__("int 0x80");
        return 4;
    }
}

int32_t g80498a7;

int16_t g80498d8;

void fun_8048d34();

int16_t g80498e1;

int16_t g80498ec;

int16_t g80498f7;

int16_t g80498ff;

uint32_t g80498bf;

signed char g8049907;

signed char g8049908;

signed char g8049909;

int16_t g804990b;

signed char g8049917;

int32_t fun_8048445() {
    signed char* edi1;
    int32_t ecx2;
    signed char* esi3;
    int32_t ebp4;
    int32_t eax5;
    int32_t ecx6;
    signed char* edi7;
    uint32_t eax8;

    __asm__("pushad ");
    edi1 = reinterpret_cast<signed char*>(0x80498c7);
    ecx2 = 80;
    while (ecx2) {
        --ecx2;
        *edi1 = 32;
        ++edi1;
        ++esi3;
    }
    ebp4 = 0;
    eax5 = g80498a7;
    do {
        if (eax5 == *reinterpret_cast<int32_t*>(ebp4 + 0x8049557)) 
            break;
        ebp4 = ebp4 + 19;
    } while (ebp4 != 0xbe);
    goto addr_8048486_7;
    esi3 = reinterpret_cast<signed char*>(0x804955b + ebp4);
    ecx6 = 15;
    edi7 = reinterpret_cast<signed char*>(0x80498c9);
    while (ecx6) {
        --ecx6;
        *edi7 = *esi3;
        ++edi7;
        ++esi3;
    }
    addr_8048486_7:
    g80498d8 = 0x7830;
    fun_8048d34();
    g80498e1 = 0x7830;
    fun_8048d34();
    g80498ec = 0x7830;
    fun_8048d34();
    g80498f7 = 0x7830;
    fun_8048d34();
    g80498ff = 0x7830;
    fun_8048d34();
    eax8 = g80498bf;
    if (eax8 & 4) {
        g8049907 = 82;
    }
    if (eax8 & 2) {
        g8049908 = 87;
    }
    if (eax8 & 1) {
        g8049909 = 88;
    }
    g804990b = 0x7830;
    __asm__("pushad ");
    fun_8048d11(16);
    g8049d23 = esi3;
    __asm__("popad ");
    g8049917 = 10;
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

void fun_8048d34() {
    signed char* esi1;
    int1_t cf2;
    int32_t ecx3;
    int32_t ebx4;
    signed char* edi5;
    signed char* esi6;

    __asm__("pushad ");
    __asm__("pushad ");
    fun_8048d11(16);
    g8049d23 = esi1;
    __asm__("popad ");
    cf2 = *reinterpret_cast<unsigned char*>(&g8049d23) < 8;
    if (cf2) {
        ecx3 = ebx4 - reinterpret_cast<int32_t>(g8049d23);
        if (ecx3) {
            __asm__("pushad ");
            do {
                *edi5 = 48;
                ++edi5;
                ++esi6;
                --ecx3;
            } while (ecx3);
            __asm__("popad ");
        }
        __asm__("pushad ");
        fun_8048d11(16);
        g8049d23 = esi6;
        __asm__("popad ");
    }
    __asm__("popad ");
    return;
}

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

uint48_t g804987d;

int32_t g8049883;

int32_t g80498a3;

signed char g8049779 = 32;

uint32_t g8049887;

signed char g804977c = 32;

signed char g804977d = 32;

signed char g804977e = 32;

int32_t g8049897;

int32_t g804989b;

int32_t fun_8048689(int32_t ecx) {
    signed char* esi2;
    signed char* edi3;
    int32_t ecx4;
    struct s0* tmp32_5;
    struct s0* eax6;
    struct s0* esi7;
    signed char* edi8;
    signed char* esi9;
    int32_t ebp10;
    int32_t eax11;
    int32_t ecx12;
    signed char* edi13;
    int32_t eax14;
    uint32_t eax15;
    int32_t eax16;
    int32_t eax17;

    __asm__("pushad ");
    if (*reinterpret_cast<unsigned char*>(&ecx) <= 9) {
    }
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi2;
    __asm__("popad ");
    edi3 = "                                                                          \n  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align       \n\nThere are    section headers, starting at offset 0x     \nThere are    program headers, starting at offset      ";
    ecx4 = 74;
    while (ecx4) {
        --ecx4;
        *edi3 = 32;
        ++edi3;
    }
    tmp32_5 = reinterpret_cast<struct s0*>(0x8049918 + *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&g804987d) + 2));
    eax6 = tmp32_5;
    esi7 = eax6;
    edi8 = "                                                                         \n  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align       \n\nThere are    section headers, starting at offset 0x     \nThere are    program headers, starting at offset      ";
    do {
        __asm__("lodsb ");
        *edi8 = *reinterpret_cast<signed char*>(&eax6);
        ++edi8;
        esi7 = reinterpret_cast<struct s0*>(&esi7->f1);
    } while (*reinterpret_cast<signed char*>(&eax6));
    *(edi8 - 1) = 32;
    esi9 = &esi7->f1;
    ebp10 = 0;
    eax11 = g8049883;
    do {
        if (eax11 == *reinterpret_cast<int32_t*>(ebp10 + 0x80493b3)) 
            break;
        ebp10 = ebp10 + 21;
    } while (ebp10 != 0x1a4);
    goto addr_8048705_17;
    esi9 = reinterpret_cast<signed char*>(0x80493b7 + ebp10);
    ecx12 = 17;
    edi13 = "                                                       \n  Type           Offset   VirtAddr   PhysAddr   FileSiz MemSiz  Flg Align       \n\nThere are    section headers, starting at offset 0x     \nThere are    program headers, starting at offset      ";
    while (ecx12) {
        --ecx12;
        *edi13 = *esi9;
        ++edi13;
        ++esi9;
    }
    addr_8048705_17:
    fun_8048d34();
    fun_8048d34();
    fun_8048d34();
    eax14 = g80498a3;
    if (*reinterpret_cast<unsigned char*>(&eax14) <= 15) {
        g8049779 = 48;
    }
    __asm__("pushad ");
    fun_8048d11(16);
    g8049d23 = esi9;
    __asm__("popad ");
    eax15 = g8049887;
    if (eax15 & 1) {
        g804977c = 87;
    }
    if (eax15 & 2) {
        g804977d = 65;
    }
    if (eax15 & 4) {
        g804977e = 88;
    }
    eax16 = g8049897;
    if (*reinterpret_cast<unsigned char*>(&eax16) <= 9) {
    }
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi9;
    __asm__("popad ");
    eax17 = g804989b;
    if (*reinterpret_cast<unsigned char*>(&eax17) <= 15) {
    }
    __asm__("pushad ");
    fun_8048d11(16);
    g8049d23 = esi9;
    __asm__("popad ");
    __asm__("pushad ");
    fun_8048d11(10);
    g8049d23 = esi9;
    __asm__("popad ");
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

void fun_8048d11(int32_t ecx) {
    int32_t ebx2;
    uint32_t edx3;
    uint32_t eax4;
    int32_t eax5;
    int32_t v6;
    signed char* edi7;

    ebx2 = 0;
    do {
        edx3 = eax4 % ecx;
        eax4 = eax4 / ecx;
        if (*reinterpret_cast<unsigned char*>(&edx3) < 10) {
        }
        ++ebx2;
    } while (eax4);
    do {
        eax5 = v6;
        *edi7 = *reinterpret_cast<signed char*>(&eax5);
        ++edi7;
        --ebx2;
    } while (ebx2);
    return;
}

void fun_8048d00(int32_t ecx) {
    signed char* edi2;
    int32_t ecx3;

    __asm__("pushad ");
    edi2 = reinterpret_cast<signed char*>(0x8049d18);
    ecx3 = 11;
    while (ecx3) {
        --ecx3;
        *edi2 = 0;
        ++edi2;
    }
    __asm__("popad ");
    return;
}

int32_t fun_8048cc6(int32_t ecx) {
    __asm__("int 0x80");
    __asm__("int 0x80");
    return 4;
}

int32_t fun_8048ce3(int32_t ecx) {
    __asm__("int 0x80");
    __asm__("int 0x80");
    return 4;
}

struct s1 {
    int32_t f0;
    signed char[42] pad46;
    int32_t f2e;
    signed char[48] pad98;
    unsigned char f62;
    signed char[11] pad110;
    unsigned char f6e;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
};

struct s2 {
    unsigned char f0;
    signed char[31] pad32;
    int32_t f20;
    signed char[12] pad48;
    unsigned char f30;
    signed char[52] pad101;
    unsigned char f65;
    signed char[1] pad103;
    int32_t f67;
    unsigned char f69;
    signed char[3] pad111;
    unsigned char f6f;
};

struct s3 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s4 {
    void* f0;
    signed char f1;
    signed char[74] pad76;
    unsigned char f4c;
    signed char[24] pad101;
    unsigned char f65;
    signed char[6] pad108;
    unsigned char f6c;
    signed char[5] pad114;
    unsigned char f72;
};

struct s5 {
    signed char[101] pad101;
    unsigned char f65;
    signed char[10] pad112;
    int32_t f70;
    unsigned char f74;
    unsigned char f75;
    signed char[458634] pad458752;
    unsigned char f70000;
};

struct s6 {
    struct s4* f0;
    struct s4* f4;
};

unsigned char g203d2053;

struct s7 {
    unsigned char f0;
    signed char[100] pad101;
    unsigned char f65;
    signed char[15] pad117;
    unsigned char f75;
};

unsigned char g20746920;

struct s8 {
    int32_t f0;
    signed char* f4;
};

struct s9 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s10 {
    signed char[104] pad104;
    unsigned char f68;
};

signed char g8049617 = 0;

signed char g8049616 = 0;

signed char g8049615 = 0;

int32_t g8049618 = 0x20783001;

struct s11 {
    int32_t f0;
    signed char* f4;
};

int32_t g804984b;

struct s12 {
    int32_t f0;
    signed char* f4;
};

struct s13 {
    struct s4* f0;
    struct s4* f4;
};

struct s14 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_8048000(struct s1* ecx) {
    void* esp2;
    int1_t less_or_equal3;
    struct s2* esi4;
    struct s3* esi5;
    int32_t eax6;
    int32_t* ebx7;
    int32_t* ebx8;
    int32_t eax9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    void** eax22;
    signed char al23;
    signed char* eax24;
    struct s4* eax25;
    int32_t edx26;
    int32_t edx27;
    signed char dh28;
    void* tmp8_29;
    uint1_t cf30;
    struct s5* ebx31;
    void* ebx32;
    void* dl33;
    void* tmp8_34;
    int1_t cf35;
    struct s6* esp36;
    int16_t di37;
    int1_t cf38;
    int1_t sf39;
    int1_t zf40;
    int1_t cf41;
    unsigned char dh42;
    unsigned char* edi43;
    int32_t ebp44;
    uint1_t below_or_equal45;
    struct s4* ebp46;
    struct s7* edx47;
    struct s8* esp48;
    struct s9* di49;
    struct s4* ebp50;
    unsigned char dl51;
    struct s10* edi52;
    unsigned char* edi53;
    unsigned char dh54;
    unsigned char dh55;
    int1_t zf56;
    struct s8* esp57;
    struct s11* esp58;
    signed char** esp59;
    int1_t zf60;
    struct s11* esp61;
    struct s11* esp62;
    struct s11* esp63;
    signed char** esp64;
    signed char* ecx65;
    void* esp66;
    int32_t* esp67;
    int32_t* esp68;
    struct s12* esp69;
    signed char** esp70;
    int1_t zf71;
    struct s11* esp72;
    int1_t zf73;
    struct s11* esp74;
    int1_t zf75;
    struct s11* esp76;
    struct s11* esp77;
    signed char** esp78;
    struct s11* esp79;
    int32_t* esp80;
    int32_t* esp81;
    struct s12* esp82;
    struct s11* esp83;
    unsigned char dh84;
    struct s13* esp85;
    struct s8* esp86;
    int1_t zf87;
    int1_t cf88;
    unsigned char* edi89;
    int16_t di90;
    unsigned char dh91;
    int1_t zf92;
    struct s14* edi93;
    unsigned char dh94;
    unsigned char dh95;

    esp2 = __zero_stack_offset();
    if (less_or_equal3) {
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 1);
        esi4 = reinterpret_cast<struct s2*>(&esi5->f1);
        ecx->f0 = ecx->f0 + eax6;
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<uint32_t>(*eax22));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<uint32_t>(eax25));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<int32_t*>(edx26 + 0x2c0804) = *reinterpret_cast<int32_t*>(edx27 + 0x2c0804);
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25)) + dh28);
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<uint32_t>(eax25));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        tmp8_29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_29) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = tmp8_29;
        ebx31 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(ebx32) - 1);
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax25->f0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + cf30))));
        ebx31->f70000 = reinterpret_cast<unsigned char>(ebx31->f70000 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1)));
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<signed char>(dl33));
    tmp8_34 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    cf35 = reinterpret_cast<unsigned char>(tmp8_34) < reinterpret_cast<unsigned char>(eax25->f0);
    eax25->f0 = tmp8_34;
    esp36 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esp2) - 4);
    if (!cf35) {
        addr_80480b0_4:
        eax25->f0 = reinterpret_cast<void*>(0);
        eax25->f0 = reinterpret_cast<void*>(0);
        goto addr_80480b4_5;
    } else {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebx31) + di37) + 0x73) = 0;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1)) < reinterpret_cast<unsigned char>(eax25->f0)) {
            addr_80480bd_7:
            g203d2053 = 0;
            esp36 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esp36) + 1);
            esi4 = reinterpret_cast<struct s2*>(ebx31->f70 * 0x2079616c);
            cf38 = __intrinsic();
            sf39 = __undefined();
            zf40 = __undefined();
            if (zf40) {
                addr_8048136_8:
                __asm__("outsb ");
                __asm__("outsw ");
                if (cf38) {
                    addr_80481a8_9:
                    __asm__("insb ");
                    cf41 = reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1)) < reinterpret_cast<unsigned char>(eax25->f0);
                    goto addr_80481ae_10;
                } else {
                    __asm__("popad ");
                    if (zf40) {
                        addr_80481a7_12:
                        __asm__("popad ");
                        goto addr_80481a8_9;
                    } else {
                        __asm__("outsd ");
                        __asm__("outsb ");
                        if (!cf38) 
                            goto addr_8048162_14;
                        __asm__("popad ");
                        if (!zf40) 
                            goto addr_8048148_16;
                    }
                }
            } else {
                ebx31->f65 = reinterpret_cast<unsigned char>(ebx31->f65 & dh42);
                __asm__("arpl [ecx+ebp*2+0x6f], si");
                goto addr_80480d6_18;
            }
        } else {
            __asm__("popad ");
            __asm__("insb ");
            edi43[ebp44 * 2] = 0;
            if (0) {
                addr_80480d6_18:
                __asm__("outsb ");
                eax25->f65 = 0;
                below_or_equal45 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(eax25->f65 == 0)));
                __asm__("popad ");
                if (0) {
                    addr_8048152_20:
                    __asm__("outsd ");
                    if (below_or_equal45) {
                        addr_80481ba_21:
                        __asm__("outsb ");
                        ebp46->f4c = reinterpret_cast<unsigned char>(ebp46->f4c & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
                        esi4 = reinterpret_cast<struct s2*>(&esi4->pad32);
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi4) + 0x69) = 0;
                        goto addr_80481c2_22;
                    } else {
                        *reinterpret_cast<unsigned char*>(&ebx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx31) | ecx->f6f);
                        if (*reinterpret_cast<unsigned char*>(&ebx31)) {
                            addr_804817a_24:
                            eax25->f6c = reinterpret_cast<unsigned char>(eax25->f6c & *reinterpret_cast<unsigned char*>(&edx47));
                            zf40 = eax25->f6c == 0;
                            __asm__("popad ");
                            if (1) {
                                goto addr_80481e7_26;
                            }
                        } else {
                            __asm__("popad ");
                            if (0) {
                                addr_80481c2_22:
                                __asm__("insb ");
                                g20746920 = 0;
                                goto addr_80481c7_28;
                            } else {
                                ebx31->f75 = 0;
                                cf38 = 0;
                                zf40 = ebx31->f75 == 0;
                                sf39 = __intrinsic();
                                if (0) {
                                    addr_80481c7_28:
                                    esp48 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esp36) - 4);
                                    esp48->f0 = 0x74207361;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp48) - 4) = 0x72772065;
                                    goto addr_80481d1_30;
                                } else {
                                    addr_8048162_14:
                                    __asm__("outsb ");
                                    if (zf40) {
                                        addr_80481d1_30:
                                        __asm__("outsd ");
                                        __asm__("outsb ");
                                        *reinterpret_cast<unsigned char*>(&di49->f61) = 0;
                                        goto addr_80481d9_31;
                                    } else {
                                        if (!sf39) {
                                            goto addr_8048188_34;
                                        }
                                        if (!zf40) 
                                            goto addr_80481dc_36; else 
                                            goto addr_8048169_37;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    addr_80480df_38:
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1) = reinterpret_cast<void*>(0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    goto addr_80480ec_39;
                }
            } else {
                __asm__("insd ");
                ebp46 = ebp50;
                esp36 = reinterpret_cast<struct s6*>(&esp36->f4);
                *reinterpret_cast<unsigned char*>(&edx47) = reinterpret_cast<unsigned char>(dl51 | edi52->f68);
                if (0) {
                    goto addr_80480df_38;
                }
                edi53[reinterpret_cast<uint32_t>(ebp46) * 2] = 0;
                if (0) 
                    goto addr_80480f2_43; else 
                    goto addr_804807e_44;
            }
        }
    }
    addr_8048169_37:
    ebp46 = reinterpret_cast<struct s4*>(esi4->f67 * 0x61657220);
    goto addr_804816c_46;
    addr_8048148_16:
    __asm__("popad ");
    __asm__("insb ");
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ebp46) * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ebp46) * 2 + 0x65) & dh54);
    ecx->f62 = 0;
    below_or_equal45 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(ecx->f62 == 0)));
    goto addr_8048152_20;
    edx47->f65 = reinterpret_cast<unsigned char>(edx47->f65 & dh55);
    if (0) {
        addr_80481f5_48:
        esi4 = reinterpret_cast<struct s2*>(&esi4->pad32);
        eax25->f65 = reinterpret_cast<unsigned char>(eax25->f65 & *reinterpret_cast<unsigned char*>(&ecx));
        __asm__("popad ");
        goto addr_80481fc_49;
    } else {
        if (0) {
            addr_80481fc_49:
            if (0) {
                addr_804823a_51:
                ebx31->f65 = reinterpret_cast<unsigned char>(ebx31->f65 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx47) + 1));
                cf41 = 0;
                zf56 = ebx31->f65 == 0;
                __asm__("arpl [ecx+ebp*2+0x6f], si");
                __asm__("outsb ");
                if (1) {
                    addr_8048267_52:
                    if (cf41) {
                        addr_80482cb_53:
                        if (zf56) {
                            g8049617 = reinterpret_cast<signed char>(g8049617 + 1);
                            g8049616 = reinterpret_cast<signed char>(g8049616 + 1);
                            g8049615 = reinterpret_cast<signed char>(g8049615 + 1);
                        }
                    } else {
                        __asm__("insd ");
                        eax25->f65 = 0;
                        __asm__("popad ");
                        if (0) {
                            addr_80482e6_56:
                            esp57 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esp36) - 4);
                            esp57->f0 = 5;
                            __asm__("int 0x80");
                            g8049618 = 5;
                            esp58 = reinterpret_cast<struct s11*>(&esp57->f4 - 1);
                            esp58->f0 = 3;
                            esp59 = &esp58->f4;
                            __asm__("int 0x80");
                            zf60 = g804984b == 0x464c457f;
                            if (zf60) {
                                while (1) {
                                    esp61 = reinterpret_cast<struct s11*>(esp59 - 1);
                                    esp61->f0 = 10;
                                    esp62 = reinterpret_cast<struct s11*>(&esp61->f4 - 1);
                                    esp62->f0 = 1;
                                    esp63 = reinterpret_cast<struct s11*>(&esp62->f4 - 1);
                                    esp63->f0 = 4;
                                    esp64 = &esp63->f4;
                                    __asm__("int 0x80");
                                    ecx65 = *esp64;
                                    esp66 = reinterpret_cast<void*>(esp64 + 1);
                                    do {
                                        ++ecx65;
                                    } while (*ecx65);
                                    esp67 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp66) - 4);
                                    *esp67 = 4;
                                    __asm__("int 0x80");
                                    esp68 = esp67 + 1 - 1;
                                    *esp68 = 1;
                                    esp69 = reinterpret_cast<struct s12*>(esp68 + 1 - 1);
                                    esp69->f0 = 4;
                                    esp70 = &esp69->f4;
                                    __asm__("int 0x80");
                                    zf71 = g8049615 == 0;
                                    if (!zf71) {
                                        esp72 = reinterpret_cast<struct s11*>(esp70 - 1);
                                        esp72->f0 = 0x8048364;
                                        fun_80487fb(0x80481f4);
                                        esp70 = &esp72->f4;
                                    }
                                    zf73 = g8049616 == 0;
                                    if (!zf73) {
                                        esp74 = reinterpret_cast<struct s11*>(esp70 - 1);
                                        esp74->f0 = 0x8048372;
                                        fun_8048580(0x80481f4);
                                        esp70 = &esp74->f4;
                                    }
                                    zf75 = g8049617 == 0;
                                    if (!zf75) {
                                        esp76 = reinterpret_cast<struct s11*>(esp70 - 1);
                                        esp76->f0 = 0x8048380;
                                        fun_804838d(0x80481f4);
                                        esp70 = &esp76->f4;
                                    }
                                    esp77 = reinterpret_cast<struct s11*>(esp70 - 1);
                                    esp77->f0 = 6;
                                    esp78 = &esp77->f4;
                                    __asm__("int 0x80");
                                    addr_8048320_66:
                                    esp79 = reinterpret_cast<struct s11*>(esp78 - 1);
                                    esp79->f0 = 1;
                                    esp59 = &esp79->f4;
                                    __asm__("int 0x80");
                                }
                            } else {
                                esp80 = reinterpret_cast<int32_t*>(esp59 + 1 - 1);
                                *esp80 = 6;
                                __asm__("int 0x80");
                                esp81 = esp80 + 1 - 1;
                                *esp81 = 79;
                                esp82 = reinterpret_cast<struct s12*>(esp81 + 1 - 1);
                                esp82->f0 = 1;
                                esp83 = reinterpret_cast<struct s11*>(&esp82->f4 - 1);
                                esp83->f0 = 4;
                                esp78 = &esp83->f4;
                                __asm__("int 0x80");
                                goto addr_8048320_66;
                            }
                        } else {
                            ecx->f6e = 0;
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ebp46) * 2 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(ebp46) * 2 + 0x69) & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx47) + 1));
                            if (1) {
                                addr_804829c_69:
                                goto addr_804829d_70;
                            } else {
                                goto addr_804827d_72;
                            }
                        }
                    }
                } else {
                    ebp46 = reinterpret_cast<struct s4*>(esi4->f20 * 0x73696874);
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi4) + 0x69) = 0;
                    goto addr_8048251_74;
                }
            } else {
                addr_8048200_75:
                *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | edx47->f0);
                *reinterpret_cast<unsigned char*>(&edx47) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx47) | ebx31->f65);
                goto addr_8048204_76;
            }
        } else {
            addr_8048188_34:
            edx47->f75 = 0;
            cf41 = 0;
            if (1) {
                addr_80481ae_10:
                ebp46 = reinterpret_cast<struct s4*>(&ebp46->f1);
                zf56 = ebp46 == 0;
                if (cf41) {
                    goto addr_8048225_78;
                }
            } else {
                if (!edx47->f75) {
                    goto addr_8048200_75;
                }
                esi4->f65 = reinterpret_cast<unsigned char>(esi4->f65 & dh84);
                eax25 = reinterpret_cast<struct s4*>(&eax25->f1);
                __asm__("popad ");
                if (1) 
                    goto addr_8048208_82; else 
                    goto addr_804819b_83;
            }
        }
    }
    esp36 = reinterpret_cast<struct s6*>(&esp36->f4 - 1);
    esp36->f0 = esp36->f0;
    goto addr_80482e6_56;
    addr_804829d_70:
    esp85 = reinterpret_cast<struct s13*>(&esp36->f4);
    eax25 = esp85->f0;
    esp36 = reinterpret_cast<struct s6*>(&esp85->f4);
    if (!reinterpret_cast<int1_t>(eax25->f0 == 45)) {
        addr_8048289_85:
        esp86 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esp36) - 4);
        esp86->f0 = 4;
        esp78 = &esp86->f4;
        __asm__("int 0x80");
        goto addr_8048320_66;
    } else {
        zf87 = eax25->f1 == 72;
        goto addr_80482a6_87;
    }
    addr_804827d_72:
    esp36 = reinterpret_cast<struct s6*>(&esp36->f4);
    cf88 = reinterpret_cast<uint32_t>(esp36->f0) < 3;
    goto addr_8048285_88;
    __asm__("outsd ");
    if (cf41) {
        addr_80481ee_90:
        if (cf41) {
            addr_8048264_91:
            __asm__("outsd ");
            goto addr_8048267_52;
        } else {
            esp36 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esp36) + 2 + 2);
            *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) | *edi89) | ebp46->f4c);
            goto addr_80481f5_48;
        }
    } else {
        esi4->f6f = reinterpret_cast<unsigned char>(esi4->f6f & *reinterpret_cast<unsigned char*>(&ecx));
        if (!esi4->f6f) {
            addr_80481d9_31:
            esp36 = reinterpret_cast<struct s6*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp46) + di90) + 32) * 0x65747962);
            cf38 = __intrinsic();
            zf40 = __undefined();
        } else {
            __asm__("popad ");
            goto addr_80481ba_21;
        }
    }
    addr_80481dc_36:
    if (!cf38) {
        addr_8048204_76:
        __asm__("arpl [ecx+ebp*2+0x6f], si");
        goto addr_8048207_95;
    } else {
        __asm__("popad ");
        if (zf40) {
            addr_8048207_95:
        } else {
            addr_80481e7_26:
            if (zf40) {
                addr_8048251_74:
                __asm__("insb ");
                *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | edx47->f0);
                if (0) {
                    goto addr_80482c2_98;
                } else {
                    ecx->f72 = 0;
                    goto addr_804825f_100;
                }
            } else {
                ebx31->f74 = reinterpret_cast<unsigned char>(ebx31->f74 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx47) + 1));
                cf41 = 0;
                zf56 = ebx31->f74 == 0;
                __asm__("popad ");
                goto addr_80481ee_90;
            }
        }
    }
    addr_8048208_82:
    __asm__("outsb ");
    eax25->f65 = reinterpret_cast<unsigned char>(eax25->f65 & *reinterpret_cast<unsigned char*>(&ecx));
    cf88 = 0;
    __asm__("popad ");
    if (0) {
        addr_8048285_88:
        if (!cf88) 
            goto addr_804829d_70; else 
            goto addr_8048289_85;
    } else {
        *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | edx47->f0);
        esp36 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esp36) - 4);
        esp36->f0 = eax25;
        if (0) {
            goto addr_8048289_85;
        }
        if (0) 
            goto addr_804827d_72;
    }
    __asm__("insd ");
    eax25->f65 = reinterpret_cast<unsigned char>(eax25->f65 & *reinterpret_cast<unsigned char*>(&ecx));
    __asm__("popad ");
    if (0) {
        addr_804825f_100:
        esi4->f6f = 0;
        eax25->f72 = reinterpret_cast<unsigned char>(eax25->f72 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx47) + 1));
        cf41 = 0;
        zf56 = eax25->f72 == 0;
        goto addr_8048264_91;
    } else {
        addr_8048225_78:
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) | ecx->f6e);
        zf87 = *reinterpret_cast<void**>(&eax25) == 0;
        __asm__("popad ");
        __asm__("insb ");
        if (!__intrinsic()) {
            addr_80482a6_87:
            if (zf87) {
                g8049615 = reinterpret_cast<signed char>(g8049615 + 1);
            }
        } else {
            ebp46 = reinterpret_cast<struct s4*>(esi4->f67 * 0x68540a20);
            if (__intrinsic()) {
                goto addr_804829c_69;
            } else {
                ecx->f72 = 0;
                esi4->f6f = 0;
                goto addr_804823a_51;
            }
        }
    }
    if (eax25->f1 == 83) {
        g8049616 = reinterpret_cast<signed char>(g8049616 + 1);
    }
    if (eax25->f1 != 80) {
        addr_80482c8_113:
        zf56 = eax25->f1 == 65;
        goto addr_80482cb_53;
    } else {
        addr_80482c2_98:
        g8049617 = reinterpret_cast<signed char>(g8049617 + 1);
        goto addr_80482c8_113;
    }
    addr_804819b_83:
    __asm__("popad ");
    __asm__("outsb ");
    esp36 = reinterpret_cast<struct s6*>(ecx->f2e * 0xa6d6f63);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx47) + 1) = reinterpret_cast<unsigned char>(dh91 | edx47->f65);
    goto addr_80481a7_12;
    addr_80480f2_43:
    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
    eax25 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(eax25) - 0x203d2050);
    esp36 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esp36) + 1);
    esi4 = reinterpret_cast<struct s2*>(ebx31->f70 * 0x2079616c);
    zf92 = __undefined();
    goto addr_8048100_114;
    addr_804807e_44:
    ebp46 = reinterpret_cast<struct s4*>(edi93->f6e * 0x61203e73);
    if (__intrinsic()) {
        addr_80480ec_39:
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
        eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
        goto addr_80480f2_43;
    } else {
        eax25 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(eax25) - 0x203d2048);
        esp36 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esp36) + 1);
        esi4 = reinterpret_cast<struct s2*>(ebx31->f70 * 0x2079616c);
        zf92 = __undefined();
        if (zf92) {
            addr_8048100_114:
            if (zf92) {
                addr_804816c_46:
                goto addr_804816d_116;
            } else {
                eax25->f72 = reinterpret_cast<unsigned char>(eax25->f72 & dh94);
                __asm__("outsd ");
                if (0) {
                    addr_804816d_116:
                    __asm__("insb ");
                    esi4->f30 = reinterpret_cast<unsigned char>(esi4->f30 & dh95);
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) ^ esi4->f0);
                    goto addr_804817a_24;
                } else {
                    __asm__("insd ");
                    eax25->f65 = 0;
                    __asm__("popad ");
                    if (0) 
                        goto addr_8048188_34;
                    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&eax25) + 1) = reinterpret_cast<void*>(0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    eax25->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25->f0) & 0xff);
                    cf38 = reinterpret_cast<uint32_t>(eax25) < 0x203d2041;
                    eax25 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(eax25) - 0x203d2041);
                    zf40 = eax25 == 0;
                    sf39 = reinterpret_cast<int32_t>(eax25) < reinterpret_cast<int32_t>(0);
                    esp36 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(esp36) - 4 - 4);
                    goto addr_8048136_8;
                }
            }
        } else {
            ebp46->f4c = reinterpret_cast<unsigned char>(ebp46->f4c & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&esi4->pad32) + 0x69) = 0;
            __asm__("insb ");
            eax25->f65 = 0;
            __asm__("popad ");
            if (0) {
                addr_80480b4_5:
                eax25->f0 = reinterpret_cast<void*>(0);
                eax25->f0 = reinterpret_cast<void*>(0);
                eax25->f0 = reinterpret_cast<void*>(0);
                eax25->f0 = reinterpret_cast<void*>(0);
                eax25->f0 = reinterpret_cast<void*>(0);
                goto addr_80480bd_7;
            } else {
                eax25->f0 = reinterpret_cast<void*>(0);
                eax25->f0 = reinterpret_cast<void*>(0);
                eax25->f0 = reinterpret_cast<void*>(0);
                goto addr_80480b0_4;
            }
        }
    }
}

struct s15 {
    signed char[83] pad83;
    signed char f53;
};

struct s16 {
    unsigned char f0;
    signed char[82] pad83;
    signed char f53;
};

struct s17 {
    void* f0;
    signed char[83] pad84;
    signed char f54;
};

struct s18 {
    unsigned char f0;
    signed char[83] pad84;
    signed char f54;
};

struct s19 {
    unsigned char f0;
    signed char[79] pad80;
    signed char f50;
};

struct s20 {
    signed char[72] pad72;
    unsigned char f48;
};

void fun_80494c7(int32_t ecx) {
    int1_t less_or_equal2;
    int32_t* eax3;
    void* eax4;
    struct s15* eax5;
    signed char dh6;
    struct s16* eax7;
    int32_t edx8;
    int32_t edx9;
    struct s17* eax10;
    unsigned char* ebx11;
    void* ebx12;
    unsigned char* esi13;
    void* esi14;
    struct s18* eax15;
    int32_t edx16;
    struct s19* eax17;
    unsigned char* eax18;
    void* eax19;
    struct s20* ebx20;
    void* ebx21;
    unsigned char tmp8_22;
    uint1_t cf23;

    if (!less_or_equal2) {
        eax3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax4) - 1);
        eax5 = reinterpret_cast<struct s15*>(reinterpret_cast<int32_t>(eax3) + *eax3);
        eax5->f53 = reinterpret_cast<signed char>(eax5->f53 + dh6);
        eax7 = reinterpret_cast<struct s16*>(reinterpret_cast<int32_t>(eax5) - 1);
        edx8 = edx9 + 1;
        eax7->f0 = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax7) + reinterpret_cast<int32_t>(eax7)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax7) + reinterpret_cast<int32_t>(eax7)) & *reinterpret_cast<unsigned char*>(&eax7));
        eax7->f53 = reinterpret_cast<signed char>(eax7->f53 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx8) + 1));
        eax10 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(eax7) - 1);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)));
        eax10->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)));
        eax10->f54 = reinterpret_cast<signed char>(eax10->f54 + *reinterpret_cast<signed char*>(&edx8));
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f0) + reinterpret_cast<int32_t>(eax10));
        eax10->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)));
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        *reinterpret_cast<void**>(&eax10) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)) + reinterpret_cast<unsigned char>(eax10->f0));
        eax10->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)));
        ebx11 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx12) + 1 + 1 + 1 + 1);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        *ebx11 = reinterpret_cast<unsigned char>(*ebx11 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)));
        eax10->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)));
        eax10->f54 = reinterpret_cast<signed char>(eax10->f54 + *reinterpret_cast<signed char*>(&edx8));
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        *reinterpret_cast<void**>(&eax10) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10))));
        eax10->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax10)));
        esi13 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi14) - 1 + 1 - 1 - 1 - 1 - 1);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax10->f0 = reinterpret_cast<void*>(0);
        eax15 = reinterpret_cast<struct s18*>(reinterpret_cast<int32_t>(eax10) + 0x50000000 - 1);
        edx16 = edx8 + 1;
        eax15->f0 = 0;
        eax15->f0 = 0;
        eax15->f0 = 0;
        *esi13 = reinterpret_cast<unsigned char>(*esi13 & *reinterpret_cast<unsigned char*>(&eax15));
        eax15->f0 = reinterpret_cast<unsigned char>(eax15->f0 + *reinterpret_cast<unsigned char*>(&eax15));
        eax15->f54 = reinterpret_cast<signed char>(eax15->f54 + *reinterpret_cast<signed char*>(&edx16));
        eax17 = reinterpret_cast<struct s19*>(reinterpret_cast<int32_t>(eax15) - 1);
        eax17->f0 = 0;
        eax17->f0 = 0;
        eax17->f0 = 0;
        eax17->f0 = 0;
        eax17->f0 = reinterpret_cast<unsigned char>(eax17->f0 + *reinterpret_cast<signed char*>(&eax17));
        eax17->f50 = reinterpret_cast<signed char>(eax17->f50 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx16) + 1));
        eax17->f0 = 0;
        eax17->f0 = 0;
        eax17->f0 = 0;
    } else {
        eax18 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax19) - 1 - 1);
        ebx20 = reinterpret_cast<struct s20*>(reinterpret_cast<int32_t>(ebx21) + 1);
        *eax18 = 0;
        *eax18 = 0;
        *eax18 = 0;
        *eax18 = reinterpret_cast<unsigned char>(*eax18 & *reinterpret_cast<unsigned char*>(&eax18));
        tmp8_22 = reinterpret_cast<unsigned char>(*eax18 + *reinterpret_cast<unsigned char*>(&eax18));
        cf23 = reinterpret_cast<uint1_t>(tmp8_22 < *eax18);
        *eax18 = tmp8_22;
        ebx20->f48 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ebx20->f48 + 84) + cf23);
        *eax18 = 0;
        *eax18 = 0;
        *eax18 = 0;
    }
}

struct s21 {
    signed char[72] pad72;
    int32_t f48;
};

struct s22 {
    unsigned char f0;
    signed char[82] pad83;
    signed char f53;
};

void fun_80494f1(int32_t ecx) {
    struct s21* ebx2;
    void* eax3;
    unsigned char* eax4;
    struct s22* eax5;
    signed char dh6;

    eax3 = reinterpret_cast<void*>(ebx2->f48(__return_address()));
    eax4 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax3) - 1);
    *eax4 = 0;
    *eax4 = 0;
    *eax4 = 0;
    *eax4 = reinterpret_cast<unsigned char>(*eax4 & *reinterpret_cast<unsigned char*>(&eax4));
    *eax4 = reinterpret_cast<unsigned char>(*eax4 + *reinterpret_cast<unsigned char*>(&eax4));
    if (__intrinsic()) 
        goto 0x804955b;
    eax5 = reinterpret_cast<struct s22*>(eax4 - 1);
    eax5->f0 = 0;
    eax5->f0 = 0;
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax5) + eax5->f0);
    eax5->f53 = reinterpret_cast<signed char>(eax5->f53 + dh6);
}

struct s23 {
    unsigned char f0;
    signed char[107] pad108;
    unsigned char f6c;
    signed char[1] pad110;
    unsigned char f6e;
    signed char[3] pad114;
    unsigned char f72;
};

struct s24 {
    struct s24* f0;
    signed char[28] pad32;
    unsigned char f20;
    signed char[8] pad41;
    int32_t f29;
    signed char[33] pad78;
    unsigned char f4e;
    signed char[18] pad97;
    unsigned char f61;
    signed char[3] pad101;
    unsigned char f65;
    signed char[1] pad103;
    int32_t f67;
    signed char[1] pad108;
    unsigned char f6c;
    signed char[1] pad110;
    signed char f6e;
    int32_t f6f;
};

struct s25 {
    signed char[98] pad98;
    unsigned char f62;
    signed char[3] pad102;
    unsigned char f66;
    signed char[7] pad110;
    int32_t f6e;
    unsigned char f72;
};

struct s26 {
    unsigned char f0;
    signed char[100] pad101;
    int32_t f65;
};

struct s27 {
    unsigned char f0;
    signed char[31] pad32;
    unsigned char f20;
    signed char[47] pad80;
    signed char f50;
    signed char[19] pad100;
    int32_t f64;
    unsigned char f65;
    int32_t f66;
    unsigned char f68;
    signed char[4] pad114;
    unsigned char f72;
};

struct s28 {
    signed char[107] pad107;
    unsigned char f6b;
};

struct s29 {
    signed char[1] pad1;
    struct s24* f1;
};

struct s30 {
    signed char[110] pad110;
    signed char f6e;
};

void fun_80495f2(struct s23* ecx) {
    struct s24* esp2;
    int1_t less_or_equal3;
    struct s24* ebp4;
    struct s24* esi5;
    struct s25* edi6;
    uint1_t zf7;
    struct s24* esp8;
    struct s24* ebx9;
    struct s26* edx10;
    struct s27* eax11;
    void* eax12;
    struct s29* ebx13;
    signed char dh14;
    struct s30* ebp15;
    void* ebp16;
    void* esi17;
    signed char dl18;
    int1_t cf19;
    unsigned char dl20;
    signed char dl21;
    signed char dl22;
    struct s24* esp23;
    int1_t cf24;
    int1_t zf25;
    unsigned char dl26;
    int1_t cf27;
    signed char dl28;
    struct s24* esp29;
    int32_t ebp30;
    unsigned char dh31;
    signed char dl32;
    int1_t cf33;

    esp2 = reinterpret_cast<struct s24*>(__zero_stack_offset());
    if (!less_or_equal3) {
        addr_8049644_2:
        ebp4 = reinterpret_cast<struct s24*>(esi5->f6f * 0x77);
        __asm__("outsb ");
        edi6->f72 = 0;
        ecx->f6e = 0;
        zf7 = reinterpret_cast<uint1_t>(ecx->f6e == 0);
        if (zf7) {
            addr_80496b4_3:
            __asm__("arpl [eax+0x69], bp");
            if (zf7) {
                addr_8049720_4:
                esp8 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp2) - 4);
                esp8->f0 = ebx9;
                edi6 = reinterpret_cast<struct s25*>(edx10->f65 * 0x45202020);
                esp2 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp8) - 4);
                esp2->f0 = ebx9;
                esi5->f6c = reinterpret_cast<unsigned char>(esi5->f6c & *reinterpret_cast<unsigned char*>(&eax11));
                *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s28**>(&esi5))->f6b) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s28**>(&esi5))->f6b) & *reinterpret_cast<unsigned char*>(&ecx));
                ecx->f6e = reinterpret_cast<unsigned char>(ecx->f6e & *reinterpret_cast<unsigned char*>(&ecx));
                ecx->f6c = reinterpret_cast<unsigned char>(ecx->f6c & *reinterpret_cast<unsigned char*>(&eax11));
                goto addr_8049736_5;
            } else {
                __asm__("arpl [ebp+esi*2+0x72], si");
                edx10->f0 = reinterpret_cast<unsigned char>(edx10->f0 - reinterpret_cast<int32_t>(ecx));
                eax11->f20 = reinterpret_cast<unsigned char>(eax11->f20 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx9) + 1));
                eax11->f0 = 0;
                goto addr_80496c7_7;
            }
        } else {
            __asm__("insb ");
            esp2 = reinterpret_cast<struct s24*>(eax11->f64 * 0x20617461);
            __asm__("outsb ");
            __asm__("arpl [edi+0x64], bp");
            goto addr_8049661_9;
        }
    } else {
        eax11 = reinterpret_cast<struct s27*>(reinterpret_cast<int32_t>(eax12) - 1);
        ebx9 = reinterpret_cast<struct s24*>(&ebx13->f1);
        eax11->f0 = 0;
        eax11->f0 = 0;
        eax11->f0 = 0;
        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 + *reinterpret_cast<unsigned char*>(&eax11));
        eax11->f50 = reinterpret_cast<signed char>(eax11->f50 + dh14);
        esp2 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4);
        ebp15 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(ebp16) - 1 + 1);
        ecx = reinterpret_cast<struct s23*>(reinterpret_cast<int32_t>(ecx) - 1 - 1 - 1);
        esi5 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esi17) - 1 + 1);
        edi6 = reinterpret_cast<struct s25*>(reinterpret_cast<int32_t>(ebx9) + 1 - 1);
        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 + *reinterpret_cast<unsigned char*>(&eax11));
        ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + *reinterpret_cast<unsigned char*>(&eax11));
        eax11->f20 = reinterpret_cast<unsigned char>(eax11->f20 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx9) + 1));
        eax11->f0 = 0;
        ebp15->f6e = reinterpret_cast<signed char>(ebp15->f6e - dl18);
        ebp4 = reinterpret_cast<struct s24*>(esi5->f6f * 0x77);
        __asm__("outsb ");
        edi6->f72 = 0;
        ecx->f6e = 0;
        if (!ecx->f6e) {
            addr_804968f_11:
            cf19 = eax11->f72 < dl20;
            eax11->f72 = reinterpret_cast<unsigned char>(eax11->f72 - dl21);
            __asm__("outsd ");
            __asm__("arpl [ebp+0x73], sp");
            if (!cf19) {
                addr_8049707_12:
                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                goto addr_804970c_13;
            } else {
                if (cf19) {
                    addr_80496c7_7:
                    eax11->f0 = 0;
                    ebp4->f6e = reinterpret_cast<signed char>(ebp4->f6e - dl22);
                    __asm__("outsb ");
                    esi5->f65 = reinterpret_cast<unsigned char>(esi5->f65 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx10) + 1));
                    if (0) {
                        addr_8049749_15:
                        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                        goto addr_804974b_16;
                    } else {
                        ebp4 = reinterpret_cast<struct s24*>(edi6->f6e * 0x78300a29);
                        eax11->f0 = 0;
                        eax11->f0 = 0;
                        eax11->f0 = 0;
                        eax11->f0 = 0;
                        eax11->f0 = 0;
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) = 0xff;
                        ebx9->f4e = reinterpret_cast<unsigned char>(ebx9->f4e & *reinterpret_cast<unsigned char*>(&ebx9));
                        if (0) {
                            addr_804974b_16:
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            goto addr_8049774_18;
                        } else {
                            esi5->f61 = reinterpret_cast<unsigned char>(esi5->f61 & *reinterpret_cast<unsigned char*>(&ecx));
                            __asm__("insd ");
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            esp2 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp2) - 4);
                            esp2->f0 = esp2;
                            if (!__intrinsic()) {
                                addr_8049774_18:
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                edx10->f0 = reinterpret_cast<unsigned char>(edx10->f0 & *reinterpret_cast<unsigned char*>(&ecx));
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                esp23 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp2) - 4);
                                esp23->f0 = esp23;
                                if (!__intrinsic()) {
                                    cf24 = __intrinsic();
                                    zf25 = __undefined();
                                    goto addr_8049805_21;
                                } else {
                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                    edi6->f66 = reinterpret_cast<unsigned char>(edi6->f66 & *reinterpret_cast<unsigned char*>(&ecx));
                                    cf24 = 0;
                                    zf25 = edi6->f66 == 0;
                                    if (1) {
                                        addr_8049805_21:
                                        __asm__("outsd ");
                                        if (!cf24) {
                                            addr_8049870_23:
                                        } else {
                                            if (zf25) {
                                                addr_804982d_25:
                                                if (cf24) {
                                                }
                                            } else {
                                                eax11->f20 = reinterpret_cast<unsigned char>(eax11->f20 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx9) + 1));
                                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                if (!0) {
                                                    ecx->f72 = reinterpret_cast<unsigned char>(ecx->f72 & 0xff);
                                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                    if (!0) {
                                                        __asm__("outsd ");
                                                        if (0) {
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (zf25) {
                                            addr_80497c2_34:
                                            __asm__("insd ");
                                            *reinterpret_cast<struct s24**>(reinterpret_cast<int32_t>(esp23) - 4) = ebx9;
                                            ecx->f6c = reinterpret_cast<unsigned char>(ecx->f6c & *reinterpret_cast<unsigned char*>(&eax11));
                                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                            goto addr_80497d8_35;
                                        } else {
                                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                            esp23 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp23) - 4);
                                            esp23->f0 = esi5;
                                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                            eax11->f65 = reinterpret_cast<unsigned char>(eax11->f65 & dl26);
                                            if (!__intrinsic()) {
                                                goto addr_8049828_38;
                                            } else {
                                                ecx = reinterpret_cast<struct s23*>(&ecx->pad108);
                                                if (0) {
                                                    addr_80497d8_35:
                                                    edx10->f0 = reinterpret_cast<unsigned char>(edx10->f0 & *reinterpret_cast<unsigned char*>(&ecx));
                                                    if (0) {
                                                        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                    } else {
                                                        ecx->f72 = reinterpret_cast<unsigned char>(ecx->f72 & 0xff);
                                                        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                        if (1) {
                                                        }
                                                        __asm__("arpl [ecx+ebp*2+0x6f], si");
                                                        __asm__("outsb ");
                                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax11) + 0x65) = 0;
                                                        __asm__("popad ");
                                                        if (0) {
                                                        }
                                                        cf27 = *reinterpret_cast<unsigned char*>(&eax11) < 32;
                                                        *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) - 32);
                                                        if (!cf27) 
                                                            goto addr_8049870_23;
                                                        __asm__("popad ");
                                                        if (cf27) {
                                                        }
                                                    }
                                                } else {
                                                    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                                    goto addr_80497c2_34;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                                goto addr_8049707_12;
                            }
                        }
                    }
                } else {
                    if (!cf19) {
                        addr_804970c_13:
                        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                        eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                        ecx = reinterpret_cast<struct s23*>(&ecx->pad108);
                        if (0) {
                            addr_8049736_5:
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) = 0xff;
                            ebx9->f20 = reinterpret_cast<unsigned char>(ebx9->f20 & *reinterpret_cast<unsigned char*>(&ebx9));
                            ebp4->f20 = reinterpret_cast<unsigned char>(ebp4->f20 & *reinterpret_cast<unsigned char*>(&ebx9));
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            goto addr_8049749_15;
                        } else {
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 & 0xff);
                            goto addr_8049720_4;
                        }
                    } else {
                        __asm__("arpl [gs:ecx+0x66], bp");
                        esp2 = reinterpret_cast<struct s24*>(ebx9->f29 * 0x2078300a);
                        eax11->f0 = 0;
                        eax11->f0 = 0;
                        ebp4->f6e = reinterpret_cast<signed char>(ebp4->f6e - dl28);
                        ebp4 = reinterpret_cast<struct s24*>(esi5->f6f * 0x77);
                        __asm__("outsb ");
                        ecx->f72 = 0;
                        zf7 = reinterpret_cast<uint1_t>(ecx->f72 == 0);
                        goto addr_80496b4_3;
                    }
                }
            }
        } else {
            __asm__("insb ");
            esp2 = reinterpret_cast<struct s24*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax11) + 0x66) * 0x20656c69);
            __asm__("arpl [ecx+0x73], bp");
            if (!__intrinsic()) {
                addr_8049666_54:
                eax11->f0 = 0;
                eax11->f0 = 0;
                eax11->f0 = 0;
                esp29 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp2) - 4);
                esp29->f0 = ebp4;
                __asm__("outsb ");
                ebp30 = esi5->f6f * 0x77;
                __asm__("outsb ");
                edi6->f62 = 0;
                esp2 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esp29) - 4);
                esp2->f0 = reinterpret_cast<struct s24*>(0x65);
                __asm__("arpl [eax+0x66], si");
                ebp4 = reinterpret_cast<struct s24*>(*reinterpret_cast<int32_t*>(ebp30 + 32) * 0x65707974);
                edx10->f0 = reinterpret_cast<unsigned char>(edx10->f0 - reinterpret_cast<int32_t>(ecx));
                eax11->f20 = reinterpret_cast<unsigned char>(eax11->f20 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx9) + 1));
                eax11->f0 = 0;
                eax11->f0 = 0;
                goto addr_804968f_11;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx10) + 1) = reinterpret_cast<unsigned char>(dh31 | eax11->f0);
                if (__intrinsic()) {
                    addr_8049661_9:
                    ebp4 = reinterpret_cast<struct s24*>(esi5->f67 * 0x78300a29);
                    goto addr_8049666_54;
                } else {
                    eax11->f0 = 0;
                    ebp4->f6e = reinterpret_cast<signed char>(ebp4->f6e - dl32);
                    goto addr_8049644_2;
                }
            }
        }
    }
    cf33 = *reinterpret_cast<unsigned char*>(&eax11) < 32;
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) - 32);
    if (!cf33) {
        addr_80498a9_58:
    } else {
        __asm__("popad ");
        if (cf33) {
        }
        __asm__("outsd ");
        if (!__intrinsic()) 
            goto addr_80498a9_58;
    }
    if (__undefined()) {
    }
    addr_8049828_38:
    __asm__("insd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax11) + 0x65) = 0;
    cf24 = 0;
    __asm__("popad ");
    goto addr_804982d_25;
}

struct s31 {
    unsigned char f0;
    signed char[104] pad105;
    unsigned char f69;
};

struct s32 {
    signed char[41] pad41;
    int16_t f29;
};

struct s33 {
    signed char[1] pad1;
    void** f1;
};

struct s34 {
    signed char[1] pad1;
    void** f1;
};

struct s35 {
    void** f0;
    void** f1;
};

struct s36 {
    signed char[110] pad110;
    unsigned char f6e;
};

unsigned char g53000000;

struct s37 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_8048d79(unsigned char* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    void** esp5;
    void* esp6;
    void* edi7;
    unsigned char* eax8;
    struct s31* esi9;
    void* esi10;
    unsigned char ah11;
    unsigned char dh12;
    int32_t* eax13;
    int32_t* eax14;
    unsigned char* eax15;
    unsigned char* eax16;
    unsigned char ah17;
    unsigned char* eax18;
    unsigned char* eax19;
    unsigned char ah20;
    unsigned char* eax21;
    unsigned char* eax22;
    unsigned char ah23;
    unsigned char* edx24;
    unsigned char* edx25;
    int32_t* eax26;
    int32_t* eax27;
    int32_t eax28;
    struct s32* ebp29;
    void* ebp30;
    unsigned char* eax31;
    unsigned char* eax32;
    unsigned char* eax33;
    unsigned char ah34;
    unsigned char* edx35;
    unsigned char* edx36;
    void** eax37;
    void** edx38;
    void** esp39;
    void** ebx40;
    struct s33* ebx41;
    void** ebp42;
    unsigned char* edx43;
    unsigned char* edx44;
    unsigned char* edx45;
    struct s34* ebp46;
    void** esp47;
    void** edx48;
    void** esp49;
    void** esp50;
    void** ebx51;
    void** esp52;
    void** esp53;
    void** esp54;
    void** edi55;
    void*** esp56;
    int32_t* esp57;
    int32_t edx58;
    unsigned char* edi59;
    void** edi60;
    uint32_t* edx61;
    void** esp62;
    unsigned char dl63;
    unsigned char dh64;
    unsigned char dh65;
    unsigned char* ecx66;
    void** esp67;
    int1_t cf68;
    void** esp69;
    void** esp70;
    void** ebp71;
    void** esp72;
    unsigned char dl73;
    void** esp74;
    void** esp75;
    void** edi76;
    void** esp77;
    void** esp78;
    unsigned char* ecx79;
    void** esp80;
    void** esp81;
    void** esp82;
    void** esp83;
    void** esp84;
    void** esp85;
    unsigned char** esp86;
    unsigned char* es87;
    void*** esp88;
    void*** esp89;
    struct s35* esp90;
    void** edi91;
    void** esp92;
    void** esp93;
    unsigned char* ecx94;
    void** esp95;
    void** ebx96;
    void** esi97;
    void** esp98;
    void** esp99;
    void** esp100;
    uint1_t cf101;
    uint1_t zf102;
    void** esp103;
    void** esp104;
    int1_t zf105;
    int1_t cf106;
    uint32_t esi107;
    void** esp108;
    void** esp109;
    void** esp110;
    int1_t zf111;
    void** esp112;
    uint1_t zf113;
    int1_t zf114;
    void** esp115;
    void** esp116;
    void** eax117;
    void** esp118;
    void** esp119;
    void** esp120;
    void** ebx121;
    void** esp122;
    void** esp123;
    void** esp124;
    void** esp125;
    uint1_t below_or_equal126;
    void** esp127;
    void** esp128;
    void** esp129;
    void** esp130;
    void** esp131;
    void** esp132;
    void** esp133;
    void** esp134;
    void** esp135;
    void** esp136;
    void** esp137;
    void** esp138;
    void** esp139;
    void** eax140;
    void** esp141;
    void** esp142;
    void** ecx143;
    void** ebx144;
    void** esp145;
    void** esp146;
    void** esp147;
    void** edx148;
    void** ecx149;
    void** esp150;
    void*** esp151;
    void** esp152;
    void*** esp153;
    void*** esp154;
    void** esp155;
    void*** esp156;
    void** eax157;
    signed char* eax158;
    void*** esp159;
    unsigned char* eax160;
    void** esp161;
    void*** esp162;
    unsigned char* eax163;
    void** esp164;
    unsigned char** esp165;
    void** esp166;
    void** esp167;
    void** esp168;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    esp5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esp6 = reinterpret_cast<void*>(esp5 + 1);
    edi7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 1);
    *eax8 = 0;
    esi9 = reinterpret_cast<struct s31*>(reinterpret_cast<int32_t>(esi10) - 1 - 1 - 1);
    __asm__("outsd ");
    esi9->f69 = reinterpret_cast<unsigned char>(esi9->f69 & ah11);
    __asm__("insb ");
    (ecx + reinterpret_cast<int32_t>(edi7) * 2)[0x70] = reinterpret_cast<unsigned char>((ecx + reinterpret_cast<int32_t>(edi7) * 2)[0x70] & dh12);
    *eax13 = *eax14 - reinterpret_cast<int32_t>(esp6);
    *eax15 = reinterpret_cast<unsigned char>(*eax16 & ah17);
    *eax18 = reinterpret_cast<unsigned char>(*eax19 & ah20);
    *eax21 = reinterpret_cast<unsigned char>(*eax22 & ah23);
    *edx24 = reinterpret_cast<unsigned char>(*edx25 & *reinterpret_cast<unsigned char*>(&ecx));
    *eax26 = *eax27 + eax28;
    ebp29 = reinterpret_cast<struct s32*>(reinterpret_cast<int32_t>(ebp30) + 1 + 1 + 1 + 1);
    *eax31 = 0;
    __asm__("insb ");
    __asm__("outsd ");
    __asm__("arpl [ecx+0x74], sp");
    __asm__("popad ");
    *reinterpret_cast<int16_t*>(&ebp29) = reinterpret_cast<int16_t>(ebp29->f29 * 0x2020);
    *eax32 = reinterpret_cast<unsigned char>(*eax33 & ah34);
    *edx35 = reinterpret_cast<unsigned char>(*edx36 & *reinterpret_cast<unsigned char*>(&ecx));
    eax37 = edx38;
    esp39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp6) - 4 + 4 - 4 - 1 - 4 - 4 + 4 + 4);
    ebx40 = reinterpret_cast<void**>(&ebx41->f1);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    ebp42 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp29) + 1 + 1 + 1 + 1);
    if (reinterpret_cast<signed char>(ebp42) < reinterpret_cast<signed char>(0)) 
        goto addr_8048e2e_2;
    __asm__("arpl [ebp+0x74], si");
    __asm__("popad ");
    *reinterpret_cast<int16_t*>(&ebp42) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(ebp42 + 41) * 0x2020);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *edx43 = reinterpret_cast<unsigned char>(*edx44 & *reinterpret_cast<unsigned char*>(&ecx));
    eax37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax37) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)));
    ecx = edx45;
    esi9 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(esi9) - 1);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    __asm__("arpl [eax+0x66], si");
    *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37))));
    ebp46 = reinterpret_cast<struct s34*>(*reinterpret_cast<int16_t*>(ebp42 + 1 + 41) * 0xa202020 + 1);
    esp47 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp39 - 4) + 4 + 1 + 4 - 4 - 4 - 4 - 4 + 4 - 4);
    ebp42 = reinterpret_cast<void**>(&ebp46->f1);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    ebx40 = ebx40 + 1 + 1;
    __asm__("outsd ");
    if (0) {
        addr_8048e71_4:
        __asm__("outsb ");
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp47));
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | *ecx);
        *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
        goto addr_8048e83_5;
    } else {
        esi9->f69 = 0;
        __asm__("insb ");
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp47));
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)));
        *reinterpret_cast<int32_t*>(ebp42 + 84) = *reinterpret_cast<int32_t*>(ebp42 + 84) + 1;
        ++ebx40;
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        esp39 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp47 + 4) - 1 - 4 - 4 - 4);
        if (0) {
            addr_8048e9d_7:
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
            *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
            goto addr_8048ea2_8;
        } else {
            addr_8048e2e_2:
            __asm__("arpl [ebp+0x73], sp");
            if (1) {
                addr_8048ea2_8:
                esp49 = esp39 + 4 - 4;
                *reinterpret_cast<void***>(esp49) = ebx40;
                esp39 = esp49 - 4;
                *reinterpret_cast<void***>(esp39) = eax37;
                goto addr_8048ea7_9;
            } else {
                if (0) {
                    addr_8048e62_11:
                    esp47 = esp39 + 4;
                    ebp42 = ebp42 - 1 + 1;
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    esi9 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(esi9) - 1 - 1 - 1);
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(ebp42 + 97) = 0;
                    __asm__("arpl [eax+0x69], bp");
                    goto addr_8048e71_4;
                } else {
                    if (1) {
                        addr_8048ea7_9:
                        esp50 = esp39 - 4;
                        *reinterpret_cast<void***>(esp50) = edx48;
                        ebx51 = ebx40 + 1;
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        esp52 = esp50 - 4;
                        *reinterpret_cast<void***>(esp52) = ebx51;
                        esp53 = esp52 - 4;
                        *reinterpret_cast<void***>(esp53) = eax37;
                        ecx = ecx + 1 + 1;
                        esp47 = esp53 - 4;
                        *reinterpret_cast<void***>(esp47) = edx48;
                        ebx40 = ebx51 + 1;
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp47));
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        goto addr_8048ebe_13;
                    } else {
                        __asm__("arpl [gs:ecx+0x66], bp");
                        esp54 = reinterpret_cast<void**>(*reinterpret_cast<int16_t*>(ebx40 + 41) * 0x45ffff0a - 4);
                        *reinterpret_cast<void***>(esp54) = esp54;
                        edi55 = *reinterpret_cast<void***>(esp54);
                        --eax37;
                        --ecx;
                        esp56 = reinterpret_cast<void***>(esp54 + 1 - 1);
                        *esp56 = eax37;
                        esp57 = reinterpret_cast<int32_t*>(esp56 - 4);
                        *esp57 = edx58;
                        edi59 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi55) - 1);
                        ++ebx40;
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        esp47 = reinterpret_cast<void**>(esp57 - 1);
                        *reinterpret_cast<void***>(esp47) = eax37;
                        if (0) {
                            addr_8048ebe_13:
                            *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx40)));
                            *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                            goto addr_8048ec3_15;
                        } else {
                            __asm__("arpl [ebp+0x73], sp");
                            if (1) {
                                addr_8048ec3_15:
                                esp47 = esp47 + 4;
                                edi59 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esp47)) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                goto addr_8048ec8_17;
                            } else {
                                if (0) {
                                    addr_8048e83_5:
                                    edi60 = *reinterpret_cast<void***>(esp47);
                                    --ebp42;
                                    esi9 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(esi9) ^ *edx61);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    ++ecx;
                                    esp62 = esp47 + 4 - 4;
                                    *reinterpret_cast<void***>(esp62) = esp62;
                                    esp39 = esp62 - 4;
                                    *reinterpret_cast<void***>(esp39) = esp39;
                                    *reinterpret_cast<unsigned char*>(edi60 + 69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi60 + 69) & dl63);
                                    *reinterpret_cast<void***>(ebx40) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx40)) & dh64);
                                    *reinterpret_cast<unsigned char*>(&edx48 + 1) = reinterpret_cast<unsigned char>(dh65 ^ *ecx);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp39));
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    goto addr_8048e9d_7;
                                } else {
                                    if (1) {
                                        addr_8048ec8_17:
                                        ecx66 = ecx - 1;
                                        __asm__("outsb ");
                                        if (ecx66) {
                                            __asm__("insb ");
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<void***>(ebx40) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx40)) ^ *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp47));
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax37) + reinterpret_cast<unsigned char>(eax37)));
                                            ebp42 = ebp42 + 1 - 1;
                                            esp67 = esp47 + 4;
                                            cf68 = *reinterpret_cast<unsigned char*>(ebp42 + 0x6f) < *reinterpret_cast<unsigned char*>(&ecx66);
                                            *reinterpret_cast<unsigned char*>(ebp42 + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 0x6f) - *reinterpret_cast<unsigned char*>(&ecx66));
                                            if (!*reinterpret_cast<unsigned char*>(ebp42 + 0x6f)) {
                                                addr_8048f5d_21:
                                                *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) & *reinterpret_cast<unsigned char*>(&ecx66));
                                                goto addr_8048f5f_22;
                                            } else {
                                                if (cf68) {
                                                    addr_8048f5f_22:
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                                    esp69 = esp67 + 4 - 4;
                                                    *reinterpret_cast<void***>(esp69) = eax37;
                                                    esp70 = esp69 - 4;
                                                    *reinterpret_cast<void***>(esp70) = ebx40;
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    ebp71 = ebp42 + 1 - 1 - 1 - 1;
                                                    ecx66 = ecx66 - 1 - 1;
                                                    esp72 = esp70 - 4;
                                                    *reinterpret_cast<void***>(esp72) = eax37;
                                                    esp67 = esp72 - 4;
                                                    *reinterpret_cast<void***>(esp67) = ebx40;
                                                    *reinterpret_cast<unsigned char*>(edx48 + 51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx48 + 51) & dl73);
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                                    *ecx66 = reinterpret_cast<unsigned char>(*ecx66 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx66) + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    goto addr_8048f7d_24;
                                                } else {
                                                    __asm__("insb ");
                                                    __asm__("popad ");
                                                    esi9->f0 = reinterpret_cast<unsigned char>(esi9->f0 & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp67));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) & *reinterpret_cast<unsigned char*>(&ecx66));
                                                    eax37 = eax37 + 0x5f4d4500;
                                                    --ebx40;
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    ebp71 = ebp42 - 1;
                                                    __asm__("outsd ");
                                                    if (!ebp71) {
                                                        addr_8048f7d_24:
                                                        *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) & *reinterpret_cast<unsigned char*>(&ecx66));
                                                        goto addr_8048f7f_26;
                                                    } else {
                                                        if (0) {
                                                            addr_8048f7f_26:
                                                            *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)));
                                                            esp74 = esp67 + 4 - 4;
                                                            *reinterpret_cast<void***>(esp74) = eax37;
                                                            esp75 = esp74 - 4;
                                                            *reinterpret_cast<void***>(esp75) = ebx40;
                                                            edi76 = *reinterpret_cast<void***>(esp75);
                                                            esp77 = esp75 + 4 - 4;
                                                            *reinterpret_cast<void***>(esp77) = edx48;
                                                            esp78 = esp77 - 4;
                                                            *reinterpret_cast<void***>(esp78) = ebx40;
                                                            *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) ^ 95);
                                                            ++edx48;
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                            ebp42 = ebp71 + 1 - 1 - 1 + 1 - 1;
                                                            ecx79 = ecx66 - 1 - 1;
                                                            esp80 = esp78 - 4;
                                                            *reinterpret_cast<void***>(esp80) = eax37;
                                                            esp81 = esp80 - 4;
                                                            *reinterpret_cast<void***>(esp81) = ebx40;
                                                            *reinterpret_cast<unsigned char*>(edx48 + 52) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx48 + 52) & *reinterpret_cast<unsigned char*>(&edx48));
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                                            *ecx79 = reinterpret_cast<unsigned char>(*ecx79 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx79) + 1));
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                            *reinterpret_cast<unsigned char*>(&ecx79) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx79) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi76)));
                                                            *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                                            esp82 = esp81 + 4 - 4;
                                                            *reinterpret_cast<void***>(esp82) = eax37;
                                                            esp83 = esp82 - 4;
                                                            *reinterpret_cast<void***>(esp83) = edx48;
                                                            esp84 = esp83 - 4;
                                                            *reinterpret_cast<void***>(esp84) = ebx40;
                                                            ++ebx40;
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                            --eax37;
                                                            esp85 = esp84 - 4;
                                                            *reinterpret_cast<void***>(esp85) = eax37;
                                                            esp67 = esp85 - 4;
                                                            *reinterpret_cast<void***>(esp67) = eax37;
                                                            ecx66 = ecx79 + 1 - 1 + 1;
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp67));
                                                            goto addr_8048fb3_28;
                                                        } else {
                                                            __asm__("insb ");
                                                            __asm__("popad ");
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp67));
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                            *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) & *reinterpret_cast<unsigned char*>(&ecx66));
                                                            esp86 = reinterpret_cast<unsigned char**>(esp67 - 2);
                                                            *esp86 = es87;
                                                            *reinterpret_cast<unsigned char*>(ebp71 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp71 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                                            edi59 = *esp86;
                                                            *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) ^ 56);
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                            --ecx66;
                                                            esp88 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp86 + 2) + 1 - 4);
                                                            *esp88 = ebx40;
                                                            esp89 = esp88 - 4;
                                                            *esp89 = ebp71;
                                                            esp90 = reinterpret_cast<struct s35*>(esp89 - 4);
                                                            esp90->f0 = ebx40;
                                                            ebp42 = ebp71 + 1;
                                                            esp47 = reinterpret_cast<void**>(&esp90->f1);
                                                            *ecx66 = reinterpret_cast<unsigned char>(*ecx66 & reinterpret_cast<unsigned char>(ebp42));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        __asm__("arpl [gs:ecx+0x66], bp");
                                        esp39 = reinterpret_cast<void**>(*reinterpret_cast<int16_t*>(ebx40 + 41) * 0x4500000a);
                                        goto addr_8048e62_11;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | *edi59);
    *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
    esp67 = esp47 + 4;
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&eax37 + 1));
    ecx66[0x6e] = reinterpret_cast<unsigned char>(ecx66[0x6e] - *reinterpret_cast<unsigned char*>(&ecx66));
    if (!ecx66[0x6e]) {
        addr_8048fb3_28:
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(&edx48) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx48) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
        *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
        edi91 = *reinterpret_cast<void***>(esp67);
        esp92 = esp67 + 4 - 4;
        *reinterpret_cast<void***>(esp92) = ebx40;
        esp93 = esp92 - 4;
        *reinterpret_cast<void***>(esp93) = eax37;
        ecx94 = ecx66 + 1;
        esp95 = esp93 - 4;
        *reinterpret_cast<void***>(esp95) = edx48;
        ebx96 = ebx40 + 1;
        esi97 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi9) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
        esp98 = esp95 - 4;
        *reinterpret_cast<void***>(esp98) = eax37;
        esp99 = esp98 - 1 - 4;
        *reinterpret_cast<void***>(esp99) = ebp42;
        esp100 = esp99 - 4;
        *reinterpret_cast<void***>(esp100) = ebx96;
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        cf101 = 0;
        zf102 = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax37) == 0);
        esp103 = esp100 - 4;
        *reinterpret_cast<void***>(esp103) = ebx96;
        if (!zf102) {
            addr_8049043_32:
            esp103 = esp103 + 4;
            ecx94 = ecx94 - 1 + 1;
            goto addr_8049047_33;
        } else {
            if (1) {
                addr_8048ff7_35:
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx94) + 1) = 0xff;
                *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                edi91 = *reinterpret_cast<void***>(esp103);
                esp104 = esp103 + 4 - 4;
                *reinterpret_cast<void***>(esp104) = ebx96;
                --eax37;
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                zf105 = *reinterpret_cast<void***>(eax37) == 0;
                esp103 = esp104 - 4;
                *reinterpret_cast<void***>(esp103) = ebx96;
                if (!zf105) {
                    addr_804907c_36:
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<unsigned char*>(&edx48) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx48) | *reinterpret_cast<unsigned char*>(eax37 + 0x5f4d45a3));
                    esp103 = esp103 - 4;
                    *reinterpret_cast<void***>(esp103) = ebx96;
                    edi91 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi91) ^ *ecx94);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    cf106 = ecx94[0x6e] < 0xff;
                    ecx94[0x6e] = reinterpret_cast<unsigned char>(ecx94[0x6e] - 0xff);
                    if (!ecx94[0x6e]) {
                        addr_80490f4_37:
                        esi107 = reinterpret_cast<unsigned char>(esi97) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48));
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                        esi97 = reinterpret_cast<void**>(esi107 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
                        goto addr_80490fa_38;
                    } else {
                        if (cf106) {
                            addr_80490fa_38:
                            eax37 = eax37 - 0x20746962;
                            goto addr_80490fd_40;
                        } else {
                            __asm__("insd ");
                            *reinterpret_cast<unsigned char*>(esi97 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi97 + 97) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                            __asm__("insb ");
                            if (*reinterpret_cast<unsigned char*>(esi97 + 97)) {
                                addr_80490fd_40:
                                __asm__("outsd ");
                                __asm__("arpl [ecx+ebp+0xa], si");
                                ++ebp42;
                                ++esi97;
                                ++ebx96;
                                ++ecx94;
                                esp108 = esp103 - 1 - 1 - 4;
                                *reinterpret_cast<void***>(esp108) = ebx96;
                                esp109 = esp108 - 4;
                                *reinterpret_cast<void***>(esp109) = ebx96;
                                *reinterpret_cast<void***>(esi97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi97)) - *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) ^ 32) ^ 45);
                                *reinterpret_cast<unsigned char*>(edi91 + 98) = 0;
                                esp110 = esp109 - 4;
                                *reinterpret_cast<void***>(esp110) = reinterpret_cast<void**>(0x65);
                                __asm__("arpl [ecx+ebp+0xa], si");
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                esp103 = esp110 + 1;
                                zf111 = esp103 == 0;
                                __asm__("popad ");
                                if (zf111) {
                                    addr_8049189_42:
                                    if (zf111) {
                                        addr_80491b7_43:
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                        *reinterpret_cast<unsigned char*>(ebp42 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 97) & *reinterpret_cast<unsigned char*>(&ecx94));
                                        __asm__("arpl [eax+0x69], bp");
                                        __asm__("outsb ");
                                        goto addr_80491c7_44;
                                    } else {
                                        *reinterpret_cast<unsigned char*>(edx48 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx48 + 0x69) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                        goto addr_804918d_46;
                                    }
                                } else {
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                    goto addr_8049141_48;
                                }
                            } else {
                                *ecx94 = reinterpret_cast<unsigned char>(*ecx94 & reinterpret_cast<unsigned char>(ebp42));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) & *reinterpret_cast<unsigned char*>(&ecx94));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                if (1) {
                                    addr_80490c8_50:
                                    *reinterpret_cast<unsigned char*>(ebx96 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 0x6c) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                    __asm__("popad ");
                                    if (1) {
                                        addr_8049141_48:
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<unsigned char*>(ebp42 + 76) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 76) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                        ++esi97;
                                        esp103 = esp103 + 1 - 4;
                                        *reinterpret_cast<void***>(esp103) = esp103;
                                        ecx94 = ecx94 + 1 + 1;
                                        *reinterpret_cast<unsigned char*>(&ecx94) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx94) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ebx96 + reinterpret_cast<unsigned char>(edx48) * 2) + 66));
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                        *reinterpret_cast<unsigned char*>(&eax37 + 1) = reinterpret_cast<unsigned char>(0xff ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)));
                                        __asm__("arpl [edi+0x6d], bp");
                                        if (0) {
                                            addr_80491c7_44:
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                            goto addr_80491d3_51;
                                        } else {
                                            __asm__("insd ");
                                            __asm__("outsb ");
                                            if (!*reinterpret_cast<unsigned char*>(&eax37 + 1)) {
                                                addr_804918d_46:
                                                *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s36**>(&edi91))->f6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s36**>(&edi91))->f6e) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                esp103 = reinterpret_cast<void**>(ecx94[0x6e] * 0x20200a29 - 4);
                                                *reinterpret_cast<void***>(esp103) = esp103;
                                                if (!__undefined()) {
                                                    addr_804920d_53:
                                                    esp112 = esp103 - 4;
                                                    *reinterpret_cast<void***>(esp112) = edx48;
                                                    ++ebp42;
                                                    --esi97;
                                                    esp103 = esp112 - 4;
                                                    *reinterpret_cast<void***>(esp103) = esp103;
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    ++ebx96;
                                                    zf113 = reinterpret_cast<uint1_t>(ebx96 == 0);
                                                    if (!zf113) {
                                                        addr_8049288_54:
                                                        *reinterpret_cast<unsigned char*>(ebx96 + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 0x74) & *reinterpret_cast<unsigned char*>(&edx48));
                                                        __asm__("popad ");
                                                        if (0) 
                                                            goto addr_8049303_55;
                                                    } else {
                                                        if (0) {
                                                            addr_804927d_57:
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                            goto addr_8049282_58;
                                                        } else {
                                                            __asm__("outsb ");
                                                            if (zf113) {
                                                                addr_804923b_60:
                                                                __asm__("outsb ");
                                                                *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) - reinterpret_cast<uint32_t>(ecx94));
                                                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                ++ebp42;
                                                                zf114 = ebp42 == 0;
                                                                __asm__("outsb ");
                                                                if (zf114) 
                                                                    goto addr_80492b6_61; else 
                                                                    goto addr_8049244_62;
                                                            } else {
                                                                if (zf113) {
                                                                    addr_8049282_58:
                                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                    goto addr_8049288_54;
                                                                } else {
                                                                    if (static_cast<int1_t>(esp103 = esp103 + 4, edi91 = *reinterpret_cast<void***>(esp103) - 1, esi97 = esi97 - 1 - 1, ebp42 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(edi91 + 0x6e) * 0x56450a29 + 1), *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0), --ecx94, static_cast<uint32_t>(reinterpret_cast<uint1_t>(ecx94 == 0)))) {
                                                                        addr_8049292_65:
                                                                        *reinterpret_cast<unsigned char*>(ebx96 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 0x65) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                                                        __asm__("arpl [ecx+ebp*2+0x6f], si");
                                                                        __asm__("outsb ");
                                                                        *reinterpret_cast<unsigned char*>(eax37 + 0x65) = 0;
                                                                        __asm__("popad ");
                                                                        if (0) {
                                                                            addr_8049315_66:
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            --esi97;
                                                                            if (esi97) {
                                                                                addr_8049390_67:
                                                                                __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                                                                                goto addr_8049391_68;
                                                                            } else {
                                                                                goto addr_8049324_70;
                                                                            }
                                                                        } else {
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                            *reinterpret_cast<unsigned char*>(esi97 + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi97 + 0x6c) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                                                            __asm__("popad ");
                                                                            if (1) {
                                                                                addr_80492ef_72:
                                                                                goto addr_80492f0_73;
                                                                            } else {
                                                                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                                                goto addr_80492b6_61;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        __asm__("insb ");
                                                                        esp103 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(eax37 + 0x76) * 0x69737265);
                                                                        __asm__("outsd ");
                                                                        goto addr_804923b_60;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    goto addr_80491b7_43;
                                                }
                                            } else {
                                                (ecx94 + reinterpret_cast<unsigned char>(ebp42) * 2)[0x74] = 0;
                                                if (!*reinterpret_cast<signed char*>(ecx94 + reinterpret_cast<unsigned char>(ebp42) * 2 + 0x74)) {
                                                    addr_80491d3_51:
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    esp103 = esp103 - 4;
                                                    *reinterpret_cast<void***>(esp103) = esi97;
                                                    if (0) {
                                                        addr_804925b_78:
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        zf114 = *reinterpret_cast<void***>(eax37) == 0;
                                                        esp103 = esp103 - 4;
                                                        *reinterpret_cast<void***>(esp103) = ebx96;
                                                        goto addr_8049266_79;
                                                    } else {
                                                        ebp42 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(edi91 + 0x6e) * 0x2020203a);
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        goto addr_80491f1_81;
                                                    }
                                                } else {
                                                    *reinterpret_cast<unsigned char*>(ebp42 + 0x6e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 0x6e) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                    ++esi97;
                                                    esp103 = reinterpret_cast<void**>(ecx94[0x6e] * 0x4c450a29 + 1 - 4);
                                                    *reinterpret_cast<void***>(esp103) = esp103;
                                                    ecx94 = ecx94 + 1 + 1;
                                                    *reinterpret_cast<unsigned char*>(&ecx94) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx94) ^ *reinterpret_cast<unsigned char*>(ebp42 + 83));
                                                    ++edx48;
                                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                                    *reinterpret_cast<unsigned char*>(&eax37 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax37 + 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)));
                                                    zf111 = *reinterpret_cast<unsigned char*>(&eax37 + 1) == 0;
                                                    __asm__("arpl [edi+0x6d], bp");
                                                    if (0) {
                                                        addr_80491f1_81:
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                                        ++ebp42;
                                                        esp115 = esp103 - 4;
                                                        *reinterpret_cast<void***>(esp115) = esi97;
                                                        edi91 = *reinterpret_cast<void***>(esp115);
                                                        ++ebx96;
                                                        esp116 = esp115 + 4 - 4;
                                                        *reinterpret_cast<void***>(esp116) = ebp42;
                                                        esp103 = esp116 - 4;
                                                        *reinterpret_cast<void***>(esp103) = edx48;
                                                        goto addr_804920d_53;
                                                    } else {
                                                        __asm__("insd ");
                                                        __asm__("outsb ");
                                                        goto addr_8049189_42;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                        goto addr_80490de_85;
                                    }
                                } else {
                                    ebp42 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(esi97 + 0x74) * 0x6966206f);
                                    __asm__("insb ");
                                    *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) - reinterpret_cast<uint32_t>(ecx94));
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                    cf101 = 0;
                                    goto addr_80490b8_87;
                                }
                            }
                        }
                    }
                } else {
                    if (0) {
                        addr_8049057_89:
                        eax117 = eax37 - 0x20293436;
                        *reinterpret_cast<void***>(eax117) = reinterpret_cast<void**>(0);
                        *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) & *reinterpret_cast<unsigned char*>(&ecx94));
                        edi91 = *reinterpret_cast<void***>(esp103);
                        esp103 = esp103 + 4 - 1 - 4;
                        *reinterpret_cast<void***>(esp103) = eax117;
                        eax37 = eax117 - 1;
                        ecx94 = ecx94 + 1 + 1;
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                        ebp42 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(esi97 + 0x74) * 0x6d697265);
                        *reinterpret_cast<unsigned char*>(esi97 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi97 + 97) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                        __asm__("insb ");
                        if (*reinterpret_cast<unsigned char*>(esi97 + 97)) {
                            addr_80490de_85:
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                            goto addr_80490e4_90;
                        } else {
                            *ecx94 = reinterpret_cast<unsigned char>(*ecx94 & reinterpret_cast<unsigned char>(ebp42));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                            goto addr_804907c_36;
                        }
                    } else {
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp103));
                        goto addr_8049011_93;
                    }
                }
            } else {
                if (zf102) {
                    addr_8049011_93:
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx94) + 1) = 0xff;
                    *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                    esp118 = esp103 + 4 - 4;
                    *reinterpret_cast<void***>(esp118) = ebx96;
                    esp119 = esp118 - 4;
                    *reinterpret_cast<void***>(esp119) = eax37;
                    esp120 = esp119 - 4;
                    *reinterpret_cast<void***>(esp120) = edx48;
                    ebx121 = ebx96 + 1;
                    esp122 = esp120 - 4;
                    *reinterpret_cast<void***>(esp122) = esi97;
                    *reinterpret_cast<unsigned char*>(ebx121 + 80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx121 + 80) - *reinterpret_cast<unsigned char*>(&edx48));
                    ecx94 = ecx94 + 1 + 1;
                    esp103 = esp122 - 4;
                    *reinterpret_cast<void***>(esp103) = edx48;
                    ebx96 = ebx121 + 1;
                    *reinterpret_cast<unsigned char*>(esi97 + 57) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi97 + 57) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                    *reinterpret_cast<void***>(esi97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi97)) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                    *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) ^ 45);
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp103));
                    *reinterpret_cast<unsigned char*>(&edx48 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx48 + 1) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)));
                    goto addr_8049040_95;
                } else {
                    if (0) {
                        addr_8049047_33:
                        edi91 = *reinterpret_cast<void***>(esp103);
                        esp103 = esp103 + 4;
                        *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) ^ 32);
                        cf101 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(eax37 + 80) < *reinterpret_cast<unsigned char*>(&ecx94));
                        *reinterpret_cast<unsigned char*>(eax37 + 80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax37 + 80) - *reinterpret_cast<unsigned char*>(&ecx94));
                        __asm__("das ");
                        --ecx94;
                        zf102 = reinterpret_cast<uint1_t>(ecx94 == 0);
                        goto addr_8049050_97;
                    } else {
                        if (!zf102) {
                            addr_8049050_97:
                            __asm__("outsb ");
                            if (zf102) {
                                addr_80490b8_87:
                                if (!cf101) {
                                    addr_80490e4_90:
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & 0xff);
                                    ++ebp42;
                                    ++esi97;
                                    ++ebx96;
                                    ++ecx94;
                                    esp123 = esp103 - 1 - 1 - 4;
                                    *reinterpret_cast<void***>(esp123) = ebx96;
                                    esp103 = esp123 - 4;
                                    *reinterpret_cast<void***>(esp103) = ebx96;
                                    goto addr_80490f4_37;
                                } else {
                                    *reinterpret_cast<unsigned char*>(&eax37 + 1) = 0xff;
                                    *reinterpret_cast<unsigned char*>(ebp42 + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 97) & *reinterpret_cast<unsigned char*>(&ecx94));
                                    esp103 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp42) + reinterpret_cast<int16_t>(*reinterpret_cast<struct s36**>(&edi91))) + 58) * 0x20202020);
                                    goto addr_80490c8_50;
                                }
                            } else {
                                addr_8049053_100:
                                __asm__("insb ");
                                ecx94[65] = reinterpret_cast<unsigned char>(ecx94[65] & *reinterpret_cast<unsigned char*>(&ecx94));
                                goto addr_8049057_89;
                            }
                        } else {
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp103));
                            *reinterpret_cast<unsigned char*>(&edx48) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx48) | *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax37) + reinterpret_cast<unsigned char>(eax37)));
                            ebp42 = ebp42 + 1 - 1;
                            esp124 = esp103 + 4 - 4;
                            *reinterpret_cast<void***>(esp124) = eax37;
                            esp125 = esp124 - 4;
                            *reinterpret_cast<void***>(esp125) = eax37;
                            ++ebx96;
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                            below_or_equal126 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax37) == 0)));
                            esp103 = esp125 - 4;
                            *reinterpret_cast<void***>(esp103) = eax37;
                            __asm__("outsd ");
                            if (!below_or_equal126) 
                                goto addr_8049053_100;
                            if (0) 
                                goto addr_8049040_95; else 
                                goto addr_8048ff0_103;
                        }
                    }
                }
            }
        }
    } else {
        __asm__("insb ");
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) ^ *reinterpret_cast<unsigned char*>(&ebx40 + 1));
        *ecx66 = reinterpret_cast<unsigned char>(*ecx66 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx66) + 1));
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
        goto addr_8048f5d_21;
    }
    *reinterpret_cast<unsigned char*>(edi91 + 0x66) = 0;
    goto addr_8049292_65;
    addr_8049244_62:
    if (reinterpret_cast<signed char>(ebp42) >= reinterpret_cast<signed char>(0)) {
        addr_8049266_79:
        if (zf114) {
            addr_80492c9_106:
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
            if (__intrinsic()) {
                addr_80492f5_107:
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                *reinterpret_cast<unsigned char*>(ebx96 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 0x69) & *reinterpret_cast<unsigned char*>(&edx48));
                if (__intrinsic()) {
                    addr_8049364_108:
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    goto addr_804936a_109;
                } else {
                    *reinterpret_cast<unsigned char*>(edi91 + 0x66) = 0;
                    *reinterpret_cast<unsigned char*>(eax37 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax37 + 0x72) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                    goto addr_8049303_55;
                }
            } else {
                addr_80492d5_111:
                *reinterpret_cast<unsigned char*>(ebx96 + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 0x69) & *reinterpret_cast<unsigned char*>(&edx48));
                if (__intrinsic()) {
                    addr_804933f_112:
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    esp103 = esp103 - 4;
                    *reinterpret_cast<void***>(esp103) = ebx96;
                    edi91 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(edx48 + 0x65) * 0x20666f20);
                    if (!__intrinsic()) {
                        addr_80493b4_113:
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                        *reinterpret_cast<unsigned char*>(ebx96 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 72) + *reinterpret_cast<unsigned char*>(&edx48));
                        esp127 = esp103 - 4;
                        *reinterpret_cast<void***>(esp127) = esp127;
                        --esi97;
                        esp128 = esp127 + 4 - 4;
                        *reinterpret_cast<void***>(esp128) = ebp42;
                        esp103 = esp128 - 1;
                        goto addr_80493be_114;
                    } else {
                        __asm__("arpl [ecx+ebp*2+0x6f], si");
                        __asm__("outsb ");
                        *reinterpret_cast<unsigned char*>(eax37 + 0x65) = 0;
                        __asm__("popad ");
                        if (0) {
                            addr_80493cf_116:
                            esp129 = esp103 + 4 - 4;
                            *reinterpret_cast<void***>(esp129) = eax37;
                            esp130 = esp129 - 4;
                            *reinterpret_cast<void***>(esp130) = edx48;
                            ++edx48;
                            esp131 = esp130 - 4;
                            *reinterpret_cast<void***>(esp131) = esp131;
                            esp103 = esp131 - 4;
                            *reinterpret_cast<void***>(esp103) = ebx96;
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            goto addr_80493da_117;
                        } else {
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            goto addr_8049364_108;
                        }
                    }
                } else {
                    *reinterpret_cast<unsigned char*>(edi91 + 0x66) = 0;
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax37 + reinterpret_cast<unsigned char>(ebp42) * 2) + 0x69) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax37 + reinterpret_cast<unsigned char>(ebp42) * 2) + 0x69) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                    goto addr_80492de_120;
                }
            }
        } else {
            if (0) {
                addr_80492de_120:
                if (1) {
                    addr_8049303_55:
                    __asm__("outsd ");
                    if (0) {
                        addr_804936a_109:
                        --esi97;
                        if (esi97) {
                            addr_80493da_117:
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(edx48) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx48)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                            *reinterpret_cast<unsigned char*>(ebx96 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 72) + *reinterpret_cast<unsigned char*>(&edx48));
                            esp132 = esp103 - 4;
                            *reinterpret_cast<void***>(esp132) = esp132;
                            esp133 = esp132 + 4 - 4;
                            *reinterpret_cast<void***>(esp133) = ebx96;
                            esp103 = esp133 + 4 - 4;
                            *reinterpret_cast<void***>(esp103) = esp103;
                            ++edx48;
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(ebx96) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx96)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                            *reinterpret_cast<unsigned char*>(ebx96 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 72) + *reinterpret_cast<unsigned char*>(&edx48));
                            goto addr_80493f6_122;
                        } else {
                            *reinterpret_cast<unsigned char*>(edi91 + 0x66) = 0;
                            *reinterpret_cast<unsigned char*>(ebx96 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 0x65) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                            __asm__("arpl [ecx+ebp*2+0x6f], si");
                            __asm__("outsb ");
                            *reinterpret_cast<unsigned char*>(eax37 + 0x65) = 0;
                            __asm__("popad ");
                            if (0) {
                                addr_80493f6_122:
                                esp134 = esp103 - 4;
                                *reinterpret_cast<void***>(esp134) = esp134;
                                esp135 = esp134 + 4 - 4;
                                *reinterpret_cast<void***>(esp135) = ebx96;
                                esp136 = esp135 - 4;
                                *reinterpret_cast<void***>(esp136) = esp136;
                                esp137 = esp136 - 4;
                                *reinterpret_cast<void***>(esp137) = edx48;
                                esp103 = esp137 - 4;
                                *reinterpret_cast<void***>(esp103) = esp103;
                                ++edx48;
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax37) + reinterpret_cast<unsigned char>(eax37)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax37) + reinterpret_cast<unsigned char>(eax37)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                goto addr_804940b_124;
                            } else {
                                goto addr_8049385_126;
                            }
                        }
                    } else {
                        __asm__("insd ");
                        *reinterpret_cast<unsigned char*>(eax37 + 0x65) = 0;
                        __asm__("popad ");
                        if (0) {
                            addr_8049385_126:
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            esp103 = esp103 - 4;
                            *reinterpret_cast<void***>(esp103) = ebx96;
                            goto addr_8049390_67;
                        } else {
                            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                            goto addr_8049315_66;
                        }
                    }
                } else {
                    esp103 = esp103 - 4;
                    *reinterpret_cast<void***>(esp103) = reinterpret_cast<void**>(0x65646165);
                    if (0) {
                        addr_8049324_70:
                        *reinterpret_cast<unsigned char*>(edi91 + 0x66) = 0;
                        *reinterpret_cast<unsigned char*>(eax37 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax37 + 0x72) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                        __asm__("outsd ");
                        if (0) {
                            addr_8049391_68:
                            __asm__("outsb ");
                            *reinterpret_cast<unsigned char*>(eax37 + 0x65) = 0;
                            __asm__("popad ");
                            if (0) {
                                addr_80493be_114:
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *ecx94 = reinterpret_cast<unsigned char>(*ecx94 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                *reinterpret_cast<unsigned char*>(ebx96 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 72) + *reinterpret_cast<unsigned char*>(&edx48));
                                esp103 = esp103 - 1 - 4;
                                *reinterpret_cast<void***>(esp103) = esp103;
                                goto addr_80493cf_116;
                            } else {
                                if (1) {
                                    addr_8049414_131:
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                    g53000000 = reinterpret_cast<unsigned char>(g53000000 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
                                    esp138 = esp103 - 4;
                                    *reinterpret_cast<void***>(esp138) = esp138;
                                    esp139 = esp138 + 4 - 4;
                                    *reinterpret_cast<void***>(esp139) = ebx96;
                                    eax140 = eax37 - 1 - 1 - 1;
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(esi97) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi97)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax140)));
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax140)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax140)));
                                    *reinterpret_cast<unsigned char*>(ebx96 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx96 + 72) + *reinterpret_cast<unsigned char*>(&edx48));
                                    esp141 = esp139 - 4;
                                    *reinterpret_cast<void***>(esp141) = esp141;
                                    esp142 = esp141 + 4 + 1;
                                    ecx143 = *reinterpret_cast<void***>(esp142) + 1 - 1;
                                    ebx144 = ebx96 + 1;
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax140)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax140)));
                                    *reinterpret_cast<unsigned char*>(ebx144 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx144 + 72) + *reinterpret_cast<unsigned char*>(&edx48));
                                    esp145 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp142 + 4 + 2) - 4);
                                    *reinterpret_cast<void***>(esp145) = esp145;
                                    esp146 = esp145 + 1 - 1;
                                    *reinterpret_cast<void***>(esp146) = esp146;
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax140)) & *reinterpret_cast<unsigned char*>(&ecx143));
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax140)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax140)));
                                    *reinterpret_cast<unsigned char*>(ebx144 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx144 + 72) + *reinterpret_cast<unsigned char*>(&edx48));
                                    esp147 = esp146 - 1;
                                    *reinterpret_cast<void***>(esp147) = esp147;
                                    edx148 = edx48 + 1;
                                    ecx149 = ecx143 - 1;
                                    esp150 = esp147 + 1 - 1;
                                    *reinterpret_cast<void***>(esp150) = esp150;
                                    esp151 = reinterpret_cast<void***>(esp150 - 1);
                                    *esp151 = ebx144;
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(ecx149) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx149)) & *reinterpret_cast<unsigned char*>(&ecx149));
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax140)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax140)));
                                    *reinterpret_cast<unsigned char*>(ebx144 + 72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx144 + 72) + *reinterpret_cast<signed char*>(&edx148));
                                    esp152 = reinterpret_cast<void**>(esp151 - 4);
                                    *reinterpret_cast<void***>(esp152) = esp152;
                                    esp153 = reinterpret_cast<void***>(esp152 + 1 - 1);
                                    *esp153 = edx148;
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void**>(&eax140) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax140)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax140)));
                                    *reinterpret_cast<void***>(eax140) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax140)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax140)));
                                    esp154 = esp153 - 1 - 4;
                                    *esp154 = ebx144;
                                    esp155 = reinterpret_cast<void**>(esp154 - 4);
                                    *reinterpret_cast<void***>(esp155) = esp155;
                                    esp156 = reinterpret_cast<void***>(esp155 + 1 - 1);
                                    *esp156 = ebx144;
                                    eax157 = eax140 - 1 - 1;
                                    *reinterpret_cast<void***>(eax157) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax157) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax157) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(eax157) = reinterpret_cast<void**>(0);
                                    eax158 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax157) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax157)));
                                    *eax158 = reinterpret_cast<signed char>(*eax158 + *reinterpret_cast<signed char*>(&eax158));
                                    esp159 = esp156 - 1 - 4;
                                    *esp159 = ebx144;
                                    eax160 = reinterpret_cast<unsigned char*>(eax158 - 1);
                                    esp161 = reinterpret_cast<void**>(esp159 - 4);
                                    *reinterpret_cast<void***>(esp161) = esp161;
                                    esp162 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp161 + 1) + 1 + 4 - 4);
                                    *esp162 = ebx144;
                                    *eax160 = 0;
                                    *eax160 = 0;
                                    *eax160 = 0;
                                    *eax160 = reinterpret_cast<unsigned char>(*eax160 & *reinterpret_cast<unsigned char*>(&eax160));
                                    *eax160 = reinterpret_cast<unsigned char>(*eax160 + *reinterpret_cast<unsigned char*>(&eax160));
                                    if (!__intrinsic()) {
                                        eax163 = eax160 - 1;
                                        esp164 = reinterpret_cast<void**>(esp162 + 4 - 4);
                                        *reinterpret_cast<void***>(esp164) = esp164;
                                        esp165 = reinterpret_cast<unsigned char**>(reinterpret_cast<uint32_t>(esp164 + 1) - 1 - 4);
                                        *esp165 = eax163;
                                        *reinterpret_cast<void***>(esp165 - 1) = edx148 + 1;
                                        *eax163 = 0;
                                        *eax163 = 0;
                                        *eax163 = 0;
                                    }
                                } else {
                                    if (0) {
                                        addr_804940b_124:
                                        esp166 = esp103 - 4;
                                        *reinterpret_cast<void***>(esp166) = ebx96;
                                        --eax37;
                                        esp167 = esp166 - 4;
                                        *reinterpret_cast<void***>(esp167) = esp167;
                                        esp168 = esp167 + 4 - 4;
                                        *reinterpret_cast<void***>(esp168) = edx48;
                                        esp103 = esp168 - 1;
                                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
                                        goto addr_8049414_131;
                                    } else {
                                        __asm__("outsb ");
                                        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s37**>(&esi97))->f61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s37**>(&esi97))->f61) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                                        ebp42 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(esi97 + 100) * 0x203a7865);
                                        goto addr_80493ac_136;
                                    }
                                }
                            }
                        } else {
                            __asm__("insd ");
                            *reinterpret_cast<unsigned char*>(eax37 + 0x65) = 0;
                            __asm__("popad ");
                            if (0) {
                                addr_80493ac_136:
                                *reinterpret_cast<void**>(&eax37) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)));
                                goto addr_80493b4_113;
                            } else {
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                                goto addr_804933f_112;
                            }
                        }
                    } else {
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                        *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                        goto addr_80492ef_72;
                    }
                }
            } else {
                *reinterpret_cast<unsigned char*>(edi91 + 0x66) = 0;
                *reinterpret_cast<unsigned char*>(eax37 + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax37 + 0x72) & *reinterpret_cast<unsigned char*>(&edx48 + 1));
                __asm__("outsd ");
                if (0) 
                    goto addr_80492d5_111;
                __asm__("insd ");
                *reinterpret_cast<unsigned char*>(eax37 + 0x65) = 0;
                __asm__("popad ");
                if (!0) 
                    goto addr_804927d_57;
            }
        }
    } else {
        if (__intrinsic()) {
            addr_80492b7_143:
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
            goto addr_80492c6_144;
        } else {
            ebp42 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(esi97 + 0x74) * 0x64646120);
            if (__intrinsic()) {
                addr_80492b6_61:
                goto addr_80492b7_143;
            } else {
                if (!__intrinsic()) {
                    addr_80492c6_144:
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    goto addr_80492c9_106;
                } else {
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
                    goto addr_804925b_78;
                }
            }
        }
    }
    addr_80492f0_73:
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) & *reinterpret_cast<unsigned char*>(&eax37 + 1));
    goto addr_80492f5_107;
    addr_8049040_95:
    *reinterpret_cast<unsigned char*>(ebp42 + 77) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 77) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax37)));
    goto addr_8049043_32;
    addr_8048ff0_103:
    ++ebx96;
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax37)) - reinterpret_cast<unsigned char>(esp103));
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax37) = reinterpret_cast<void**>(0);
    goto addr_8048ff7_35;
}
