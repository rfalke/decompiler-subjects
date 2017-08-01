
struct s0 {
    signed char[88] pad88;
    int32_t f88;
};

void fun_0(struct s0* a1, int32_t a2, int32_t a3, struct s0* a4, uint32_t a5, int32_t a6);

void fun_1e(struct s0* a1, int32_t a2, int32_t a3, struct s0* a4, uint32_t a5, int32_t a6);

void fun_410000(signed char* ecx) {
    unsigned char* edx2;
    unsigned char* edx3;
    unsigned char al4;
    signed char al5;
    signed char dl6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    int32_t* eax13;
    int32_t* eax14;
    int32_t eax15;
    signed char* edx16;
    signed char* edx17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char al26;
    signed char* ebx27;
    signed char* ebx28;
    uint32_t v29;
    uint32_t ebp30;
    uint32_t ebx31;
    signed char* eax32;
    struct s0* ebx33;
    void* ebx34;
    int32_t v35;
    int32_t v36;

    *edx2 = reinterpret_cast<unsigned char>(*edx3 ^ al4);
    *ecx = reinterpret_cast<signed char>(*ecx + al5);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) + dl6);
    __asm__("insd ");
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = *eax14 + eax15;
    *edx16 = reinterpret_cast<signed char>(*edx17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    __asm__("fidivr dword [edi+0x321003f]");
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *reinterpret_cast<signed char*>(&eax25) = reinterpret_cast<signed char>(static_cast<int32_t>(al26));
    *eax25 = reinterpret_cast<signed char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
    *eax25 = reinterpret_cast<signed char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
    *eax25 = reinterpret_cast<signed char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
    *ebx27 = reinterpret_cast<signed char>(*ebx28 + *reinterpret_cast<signed char*>(&eax25));
    *eax25 = reinterpret_cast<signed char>(*eax25 + *reinterpret_cast<signed char*>(&eax25));
    *eax25 = reinterpret_cast<signed char>(*eax25 + reinterpret_cast<int32_t>(eax25));
    if (!(ecx - 1)) {
        v29 = ebp30 ^ ebx31;
        *reinterpret_cast<signed char*>(&eax32) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax25) + *eax25);
        *eax32 = reinterpret_cast<signed char>(*eax32 + *reinterpret_cast<signed char*>(&eax32));
        *eax32 = reinterpret_cast<signed char>(*eax32 + *reinterpret_cast<signed char*>(&eax32));
        *eax32 = reinterpret_cast<signed char>(*eax32 + *reinterpret_cast<signed char*>(&eax32));
        *eax32 = reinterpret_cast<signed char>(*eax32 + reinterpret_cast<int32_t>(eax32));
        *eax32 = reinterpret_cast<signed char>(*eax32 + *reinterpret_cast<signed char*>(&eax32));
        *eax32 = reinterpret_cast<signed char>(*eax32 + *reinterpret_cast<signed char*>(&eax32));
        *eax32 = reinterpret_cast<signed char>(*eax32 + *reinterpret_cast<signed char*>(&eax32));
        ebx33 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx34) + 1 - 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx33) + 1) = 0x68;
        v35 = reinterpret_cast<int32_t>(ebx33) + 100;
        fun_0(ebx33, v35, 56, ebx33, v29, __return_address());
        fun_1e(ebx33, v35, 56, ebx33, v29, __return_address());
        v36 = ebx33->f88;
        goto v36;
    }
}

uint32_t* fun_955e11d8();

uint32_t* gc77cdef7;

uint32_t g77db46f8;

signed char g83d87e10;

uint32_t* g4791d5fd;

uint32_t* ga80fddbd;

void fun_4100d0() {
    uint32_t ebx1;
    int32_t edx2;
    int32_t edx3;
    uint48_t v4;
    unsigned char tmp8_5;
    uint32_t eax6;
    uint32_t** edi7;
    uint32_t* eax8;
    int1_t zf9;
    int1_t sf10;
    int32_t edx11;
    int32_t edx12;
    int32_t edx13;
    uint32_t v14;
    int32_t ecx15;
    uint32_t eax16;
    signed char* edx17;
    signed char dl18;
    int32_t edx19;
    uint16_t es20;
    int32_t esi21;
    uint32_t* eax22;

    ebx1 = 0x1203e3b1;
    do {
        *reinterpret_cast<uint32_t*>(edx2 - 48) = *reinterpret_cast<uint32_t*>(edx3 - 48) & 0xa80fddbd;
        do {
            *reinterpret_cast<int32_t*>(&v4) = 0xab;
            __asm__("in eax, dx");
            tmp8_5 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax6) + 20)));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) + *reinterpret_cast<unsigned char*>(edi7 - 0x1bf97f60)) + reinterpret_cast<uint1_t>(tmp8_5 < reinterpret_cast<unsigned char>(5 + reinterpret_cast<uint1_t>(tmp8_5 < *reinterpret_cast<unsigned char*>(&eax6)))));
            eax8 = fun_955e11d8();
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx1) + 1) >= reinterpret_cast<signed char>(0)) 
                goto addr_410155_4;
            while (1) {
                *eax8 = *eax8 & ebx1;
                zf9 = *eax8 == 0;
                sf10 = __intrinsic();
                ebx1 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v4) + 2);
                gc77cdef7 = eax8;
                __asm__("wait ");
                edi7 = reinterpret_cast<uint32_t**>(0xa3cfb56b);
                do {
                    if (sf10) 
                        break;
                    __asm__("int 0x51");
                } while (!zf9);
                break;
            }
            eax6 = reinterpret_cast<uint32_t>(eax8) & 0xbe7e873a;
            *reinterpret_cast<unsigned char*>(edx11 - 0x3c548dd) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(edx12 - 0x3c548dd) - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(edx13 - 0x3c548dd) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1))))));
            __asm__("a16 aaa ");
        } while (__intrinsic());
        eax6 = v14 - 0x2d5cdc7f;
        edi7 = reinterpret_cast<uint32_t**>(0xa80fddbd);
    } while (v14 > 0x2d5cdc7f);
    goto addr_410127_12;
    addr_410155_4:
    __asm__("aad 0xe8");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx15) + 1) = -90;
    goto addr_41015c_13;
    addr_410127_12:
    eax16 = g77db46f8;
    __asm__("insd ");
    eax8 = reinterpret_cast<uint32_t*>(eax16 | 0x2a61eba4);
    *edx17 = dl18;
    __asm__("outsb ");
    *reinterpret_cast<uint32_t*>(edx19 - 85) = es20;
    if (esi21 + 1) {
        addr_41015c_13:
        eax22 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax8) | 0x6d2816e3);
    } else {
        __asm__("insb ");
        g83d87e10 = *reinterpret_cast<signed char*>(&eax8);
        g4791d5fd = eax8;
        __asm__("out dx, eax");
        ga80fddbd = eax8;
        edi7 = reinterpret_cast<uint32_t**>(0xa80fddc1);
        goto addr_410155_4;
    }
    *edi7 = eax22;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi7 + 1) - 63) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax22) + 1);
    __asm__("rcr ch, 0x6c");
    if (!(ecx15 - 1)) {
        __asm__("out dx, al");
        __asm__("out 0xa0, al");
    }
}

void fun_41016f() {
}

void fun_41017a(int32_t ecx) {
    int16_t* edx2;
    signed char dh3;
    int1_t zf4;
    int32_t* edi5;
    int32_t eax6;
    uint32_t eax7;
    int32_t eax8;
    uint32_t eax9;
    uint1_t cf10;
    signed char* edi11;
    int16_t fpu_status_word12;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1) = reinterpret_cast<signed char>(~dh3);
    if (reinterpret_cast<uint1_t>(!!(ecx - 1)) & reinterpret_cast<uint1_t>(!zf4)) {
        *edi5 = eax6;
        __asm__("in eax, dx");
    }
    eax7 = eax8 - (0x7df2f81c + reinterpret_cast<uint1_t>(eax9 < 0x7df2f81c + cf10));
    __asm__("salc ");
    if (*edi11 <= *reinterpret_cast<signed char*>(&eax7)) 
        goto 0x410168;
    __asm__("in eax, 0x57");
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1) >= *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx2) + 1)) 
        goto addr_410191_11;
    __asm__("aas ");
    __asm__("outsd ");
    addr_410191_11:
    __asm__("outsb ");
    __asm__("insd ");
    *edx2 = fpu_status_word12;
    __asm__("hlt ");
}

void fun_4101bc() {
    __asm__("aam 0x87");
}

struct s1 {
    signed char f0;
    signed char f1;
};

struct s2 {
    signed char[4] pad4;
    signed char f4;
};

struct s3 {
    signed char f0;
    signed char f1;
};

struct s4 {
    signed char[4] pad4;
    signed char f4;
};

int32_t g6b1e19dc;

void fun_4101c7(int32_t ecx) {
    int1_t sf2;
    int1_t sf3;
    unsigned char al4;
    uint1_t less5;
    unsigned char al6;
    int32_t* edi7;
    int32_t* esi8;
    struct s1* edi9;
    struct s2* edi10;
    struct s3* esi11;
    struct s4* esi12;
    signed char* edi13;
    uint16_t cs14;
    int32_t ebx15;

    if (sf2) 
        goto 0x4101ba;
    sf3 = reinterpret_cast<signed char>(al4 & 26) < reinterpret_cast<signed char>(0);
    less5 = reinterpret_cast<uint1_t>(sf3);
    if (!less5) {
        __asm__("insd ");
    }
    if (less5 | reinterpret_cast<uint1_t>((al6 & 26) == 0)) {
    }
    __asm__("salc ");
    if (sf3) 
        goto 0x41015f;
    __asm__("in al, 0x49");
    *edi7 = *esi8;
    edi9 = reinterpret_cast<struct s1*>(&edi10->f4);
    esi11 = reinterpret_cast<struct s3*>(&esi12->f4);
    edi9->f0 = esi11->f0;
    edi13 = &edi9->f1;
    *reinterpret_cast<uint32_t*>(edi13 - 94) = cs14;
    __asm__("les ebp, [esi+0xe05496cb]");
    *edi13 = esi11->f1;
    g6b1e19dc = ebx15;
    if (!ecx) 
        goto addr_4101f8_18;
    addr_4101f8_18:
}

struct s5 {
    unsigned char f0;
    signed char[917516] pad917517;
    signed char f917517;
};

void fun_410049(unsigned char* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    struct s5* eax11;
    signed char al12;
    unsigned char* eax13;
    signed char dl14;
    unsigned char* eax15;
    signed char* esi16;
    uint32_t esi17;
    int32_t edx18;
    int32_t edx19;
    signed char bh20;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(al12 + *eax13);
    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 + *reinterpret_cast<unsigned char*>(&eax11));
    *ecx = reinterpret_cast<unsigned char>(*ecx + *reinterpret_cast<unsigned char*>(&eax11));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax11) + reinterpret_cast<int32_t>(eax11) + 0x780001) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax11) + reinterpret_cast<int32_t>(eax11) + 0x780001) + dl14);
    eax11->f0 = reinterpret_cast<unsigned char>(eax11->f0 + reinterpret_cast<int32_t>(eax11));
    *reinterpret_cast<int16_t*>(&eax15) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax11) * eax11->f917517);
    *eax15 = reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<unsigned char*>(&eax15));
    esi16 = reinterpret_cast<signed char*>(esi17 ^ *eax15);
    *eax15 = reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<unsigned char*>(&eax15));
    edx18 = edx19 + 1;
    *eax15 = reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<unsigned char*>(&eax15));
    *ecx = reinterpret_cast<unsigned char>(*ecx + *reinterpret_cast<unsigned char*>(&eax15));
    *eax15 = reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<unsigned char*>(&eax15));
    *reinterpret_cast<unsigned char*>(&eax15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax15) + *eax15);
    *ecx = reinterpret_cast<unsigned char>(*ecx + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx18) + 1));
    *eax15 = reinterpret_cast<unsigned char>(*eax15 + *reinterpret_cast<unsigned char*>(&eax15));
    *esi16 = reinterpret_cast<signed char>(*esi16 + bh20);
}

signed char fun_2f1b5dc1(int32_t a1);

void fun_410196(int32_t ecx) {
    __asm__("les esi, [eax]");
    if (ecx) 
        goto 0x410124;
    if (0) 
        goto 0x4101e6;
    fun_2f1b5dc1(__return_address());
}

struct s6 {
    signed char f0;
    signed char[969641219] pad969641220;
    signed char f969641220;
};

struct s7 {
    signed char[1] pad1;
    signed char f1;
};

void fun_4100ab(void* ecx) {
    struct s6* eax2;
    struct s7* eax3;
    signed char bh4;
    unsigned char* ecx5;
    int16_t* esp6;
    void* ebp7;
    int16_t es8;
    uint16_t ss9;
    int32_t edi10;

    __asm__("insd ");
    eax2 = reinterpret_cast<struct s6*>(&eax3->f1);
    *reinterpret_cast<signed char*>(eax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax2) - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax2) + 0x39cb8d04) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax2) + 0x39cb8d04) - bh4);
    ecx5 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx) - 1);
    if (ecx5) 
        goto 0x41009a;
    esp6 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(ebp7) + 4 - 2);
    *esp6 = es8;
    *ecx5 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(ss9));
    *reinterpret_cast<int32_t*>(esp6 - 2) = edi10;
    *ecx5 = 0xff;
}
