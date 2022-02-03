
void* fun_804824a(int32_t* ecx, int32_t a2) {
    int32_t esi3;
    void* ecx4;
    signed char al5;
    void* eax6;

    if (esi3) {
        ecx4 = reinterpret_cast<void*>(0);
        while (al5) {
            ecx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx4) + 1);
        }
        __asm__("int 0x80");
        eax6 = ecx4;
    }
    return eax6;
}

int32_t g80a82ca;

void fun_8048214(int32_t ecx);

void* fun_80480f1(int32_t a1) {
    int32_t v2;
    int32_t esi3;
    int32_t ecx4;
    int32_t v5;
    int32_t* ecx6;
    void* eax7;
    void* eax8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;

    v2 = esi3;
    __asm__("pushad ");
    __asm__("int 0x80");
    if (1) {
        ecx4 = g80a82ca;
        while (1) {
            v5 = ecx4;
            fun_8048214(16);
            ecx6 = reinterpret_cast<int32_t*>(0x80682ca);
            __asm__("int 0x80");
            fun_804824a(0x80682ca, v5);
            eax7 = fun_804824a(0x80682ca, v5);
            if (v2) {
                ecx6 = reinterpret_cast<int32_t*>(32 - reinterpret_cast<uint32_t>(eax7));
                if (32 > reinterpret_cast<uint32_t>(eax7)) {
                    do {
                        fun_804824a(ecx6, v5);
                        ecx6 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx6) - 1);
                    } while (ecx6);
                }
                fun_804824a(ecx6, v5);
                fun_804824a(ecx6, v5);
                fun_804824a(ecx6, v5);
                fun_804824a(ecx6, v5);
            }
            eax8 = fun_804824a(ecx6, v5);
            ecx4 = v5 - 1;
            if (!ecx4) 
                break;
        }
    } else {
        fun_8048214(16);
        __asm__("int 0x80");
        fun_804824a(0x80682ca, v9);
        fun_804824a(0x80682ca, v10);
        fun_804824a(0x80682ca, v11);
        eax8 = fun_804824a(0x80682ca, v12);
    }
    __asm__("popad ");
    return eax8;
}

void fun_804822c(int32_t ecx);

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

void fun_8048214(int32_t ecx) {
    signed char* edi2;
    signed char* edi3;
    struct s0* edi4;
    int32_t edx5;
    int32_t edi6;

    fun_804822c(ecx);
    *edi2 = 9;
    edi3 = &edi4->f1;
    if (*reinterpret_cast<signed char*>(&ecx) == 16 && (edx5 = edi6 - reinterpret_cast<int32_t>(edi3), *reinterpret_cast<unsigned char*>(&edx5) > 0xf9)) {
        *edi3 = 9;
    }
    return;
}

void fun_804822c(int32_t ecx) {
    uint32_t edx2;
    int32_t eax3;
    int32_t eax4;
    signed char dl5;
    signed char* edi6;

    edx2 = eax3 % reinterpret_cast<uint32_t>(ecx);
    if (eax4 / reinterpret_cast<uint32_t>(ecx)) {
        fun_804822c(ecx);
        edx2 = edx2;
    }
    dl5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx2) + 48);
    if (dl5 > 57) {
        dl5 = reinterpret_cast<signed char>(dl5 + 39);
    }
    *edi6 = dl5;
    return;
}

struct s1 {
    signed char[1] pad1;
    void* f1;
};

struct s2 {
    signed char[12] pad12;
    int16_t* fc;
};

int32_t g80a82ce;

struct s3 {
    signed char[4] pad4;
    signed char f4;
};

struct s4 {
    signed char[12] pad12;
    int16_t* fc;
};

struct s5 {
    signed char[4] pad4;
    signed char f4;
};

void fun_8048000(int32_t* ecx) {
    int32_t v2;
    int1_t less_or_equal3;
    void** esi4;
    struct s1* esi5;
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
    void** eax25;
    signed char dh26;
    int32_t edx27;
    signed char dl28;
    signed char dl29;
    unsigned char* edi30;
    signed char* edi31;
    void* tmp8_32;
    uint1_t cf33;
    int32_t ebp34;
    int32_t ebp35;
    int1_t zf36;
    int32_t ebp37;
    int32_t ebp38;
    signed char bh39;
    struct s2* ebp40;
    int32_t ecx41;
    void* eax42;
    struct s3* ebp43;
    struct s4* ebp44;
    struct s5* ebp45;

    v2 = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal3) {
        esi4 = &esi5->f1;
        *ecx = *ecx + eax6;
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<uint32_t>(ecx)) + 44);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax25) + reinterpret_cast<int32_t>(eax25)) + dh26);
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<int32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        __asm__("retf 0x2");
        *reinterpret_cast<signed char*>(&edx27) = reinterpret_cast<signed char>(dl28 + dl29);
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8) + reinterpret_cast<signed char>(*esi4));
        *edi30 = reinterpret_cast<unsigned char>(*edi31 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    }
    tmp8_32 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
    cf33 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_32) < reinterpret_cast<unsigned char>(*eax25));
    *eax25 = tmp8_32;
    *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))) + cf33);
    *reinterpret_cast<signed char*>(ebp34 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp35 - 0x77) + *reinterpret_cast<signed char*>(&edx27));
    zf36 = *reinterpret_cast<signed char*>(ebp37 - 0x77) == 0;
    __asm__("in eax, 0x80");
    if (*reinterpret_cast<signed char*>(ebp38 - 0x77) < 0 != __intrinsic()) {
        zf36 = bh39 + *reinterpret_cast<signed char*>(edx27 + reinterpret_cast<uint32_t>(ecx) * 2 - 0x75) == 0;
    }
    if (!zf36) {
        addr_8048064_6:
        fun_804824a(ecx, v2);
    } else {
        if (!reinterpret_cast<int1_t>(*esi4 == 0x562d)) {
            if (*esi4 != 0x682d) {
                fun_804824a(ecx, v2);
            }
            if (*ebp40->fc != 0x6f2d) 
                goto addr_804809f_11; else 
                goto addr_8048086_12;
        } else {
            goto addr_8048064_6;
        }
    }
    addr_80480e8_14:
    goto addr_80480ea_15;
    addr_804809f_11:
    __asm__("int 0x80");
    if (0) {
        addr_80480ea_15:
        __asm__("int 0x80");
    } else {
        ecx41 = g80a82ce;
        do {
            eax42 = fun_80480f1(v2);
            do {
                __asm__("lodsb ");
            } while (*reinterpret_cast<signed char*>(&eax42));
            --ecx41;
        } while (ecx41);
        if (ebp43->f4 < 2) 
            goto addr_80480ea_15;
    }
    if (*ebp44->fc == 0x612d) {
        fun_80480f1(v2);
        goto addr_80480e8_14;
    }
    addr_8048086_12:
    if (ebp45->f4 >= 3) {
        fun_80480f1(v2);
        goto addr_80480e8_14;
    } else {
        fun_80480f1(v2);
        goto addr_80480e8_14;
    }
}

struct s6 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s7 {
    signed char[115] pad115;
    signed char f73;
};

struct s8 {
    signed char[101] pad101;
    int16_t f65;
};

struct s9 {
    signed char[121] pad121;
    unsigned char f79;
};

struct s10 {
    signed char[121] pad121;
    unsigned char f79;
};

void fun_804826b(uint32_t ecx) {
    int1_t cf2;
    struct s6* ebx3;
    unsigned char* eax4;
    unsigned char* eax5;
    unsigned char ah6;
    struct s7* ebx7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char ah10;
    unsigned char* eax11;
    unsigned char* eax12;
    unsigned char ah13;
    unsigned char* eax14;
    unsigned char* eax15;
    unsigned char ah16;
    unsigned char* eax17;
    unsigned char* eax18;
    unsigned char ah19;
    unsigned char* eax20;
    unsigned char* eax21;
    unsigned char ah22;
    unsigned char* eax23;
    unsigned char* eax24;
    unsigned char ah25;
    unsigned char* eax26;
    unsigned char* eax27;
    unsigned char ah28;
    unsigned char* eax29;
    unsigned char* eax30;
    unsigned char ah31;
    int32_t ebp32;
    struct s8* esi33;
    unsigned char tmp8_34;
    signed char ah35;
    int1_t cf36;
    unsigned char* esi37;
    unsigned char* esi38;
    uint32_t* edx39;
    uint32_t* edx40;
    unsigned char tmp8_41;
    signed char al42;
    int1_t cf43;
    unsigned char* eax44;
    unsigned char* eax45;
    unsigned char ah46;
    struct s9* ebx47;
    struct s10* ebx48;
    unsigned char dl49;
    unsigned char* eax50;
    unsigned char* eax51;
    unsigned char ah52;
    unsigned char* eax53;
    unsigned char* eax54;
    unsigned char ah55;
    unsigned char* eax56;
    unsigned char* eax57;
    unsigned char ah58;
    unsigned char* eax59;
    unsigned char* eax60;
    unsigned char ah61;
    unsigned char* eax62;
    unsigned char* eax63;
    unsigned char ah64;
    unsigned char* eax65;
    unsigned char al66;
    unsigned char* eax67;
    unsigned char ah68;
    signed char* ebx69;
    signed char* ebx70;
    signed char bl71;

    if (cf2 || (ebx3->f73 = 0, !__intrinsic())) {
    }
    if (1) {
        addr_804829a_4:
        *eax4 = reinterpret_cast<unsigned char>(*eax5 & ah6);
        goto addr_804829c_5;
    } else {
        if (!ebx7->f73) {
            addr_804829c_5:
            *eax8 = reinterpret_cast<unsigned char>(*eax9 & ah10);
            *eax11 = reinterpret_cast<unsigned char>(*eax12 & ah13);
            *eax14 = reinterpret_cast<unsigned char>(*eax15 & ah16);
            *eax17 = reinterpret_cast<unsigned char>(*eax18 & ah19);
            *eax20 = reinterpret_cast<unsigned char>(*eax21 & ah22);
            *eax23 = reinterpret_cast<unsigned char>(*eax24 & ah25);
            *eax26 = reinterpret_cast<unsigned char>(*eax27 & ah28);
            *eax29 = reinterpret_cast<unsigned char>(*eax30 & ah31);
            *reinterpret_cast<int16_t*>(&ebp32) = reinterpret_cast<int16_t>(esi33->f65 * 0x2064);
            tmp8_34 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp32 + 0x72) + ah35);
            cf36 = tmp8_34 < *reinterpret_cast<unsigned char*>(ebp32 + 0x72);
            *reinterpret_cast<unsigned char*>(ebp32 + 0x72) = tmp8_34;
            if (cf36) {
            }
        } else {
            *esi37 = reinterpret_cast<unsigned char>(*esi38 ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
            *edx39 = *edx40 ^ ecx;
            tmp8_41 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 100) + al42);
            cf43 = tmp8_41 < *reinterpret_cast<unsigned char*>(ecx + 100);
            *reinterpret_cast<unsigned char*>(ecx + 100) = tmp8_41;
            if (!cf43) {
                if (cf43) {
                    *eax44 = reinterpret_cast<unsigned char>(*eax45 & ah46);
                    ebx47->f79 = reinterpret_cast<unsigned char>(ebx48->f79 & dl49);
                    __asm__("insd ");
                    *eax50 = reinterpret_cast<unsigned char>(*eax51 & ah52);
                    *eax53 = reinterpret_cast<unsigned char>(*eax54 & ah55);
                    *eax56 = reinterpret_cast<unsigned char>(*eax57 & ah58);
                    *eax59 = reinterpret_cast<unsigned char>(*eax60 & ah61);
                    *eax62 = reinterpret_cast<unsigned char>(*eax63 & ah64);
                    goto addr_804829a_4;
                }
            }
        }
    }
    *reinterpret_cast<unsigned char*>(&eax65) = reinterpret_cast<unsigned char>(al66 | *eax67);
    *eax65 = reinterpret_cast<unsigned char>(*eax65 & *reinterpret_cast<unsigned char*>(&eax65));
    *eax65 = reinterpret_cast<unsigned char>(*eax65 & ah68);
    *ebx69 = reinterpret_cast<signed char>(*ebx70 + bl71);
}
