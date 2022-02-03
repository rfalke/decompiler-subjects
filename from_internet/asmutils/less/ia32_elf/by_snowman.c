
signed char** g8048451;

uint16_t g80483fd;

int32_t g8048455;

int32_t fun_80482d0(int32_t ecx) {
    signed char** ebp2;
    void* ecx3;
    uint32_t edx4;
    signed char** edi5;
    int1_t less6;

    __asm__("pushad ");
    ebp2 = g8048451;
    ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - reinterpret_cast<signed char>(0x804a45d));
    edx4 = 0;
    edi5 = ebp2;
    do {
        __asm__("lodsb ");
        if (0) {
            addr_80482fb_3:
            ebp2 = ebp2 + 4;
            if (reinterpret_cast<int32_t>(edi5) <= reinterpret_cast<int32_t>(ebp2)) {
                edi5 = edi5 + 0x400;
                __asm__("int 0x80");
            }
        } else {
            if (!1) {
                edx4 = edx4 | 7;
            }
            ++edx4;
            less6 = *reinterpret_cast<int16_t*>(&edx4) < *reinterpret_cast<int16_t*>(&g80483fd + 1);
            if (less6) 
                continue; else 
                goto addr_80482fb_3;
        }
        *ebp2 = reinterpret_cast<signed char*>(0x804a45d);
        ++g8048455;
        edx4 = 0;
        ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx3) - 1);
    } while (ecx3);
    __asm__("popad ");
    return 45;
}

uint32_t g8048459;

struct s0 {
    signed char* f0;
    signed char[3] pad4;
    void* f4;
};

int32_t fun_80480a4(signed char* ecx);

int32_t fun_804831e(int32_t ecx) {
    signed char** ebp2;
    uint32_t edx3;
    int32_t eax4;
    uint32_t eax5;
    uint32_t ecx6;
    struct s0* ebp7;
    uint32_t ebx8;
    signed char* ecx9;
    void* v10;
    int32_t eax11;

    ebp2 = g8048451;
    edx3 = g8048459;
    eax4 = g8048455;
    eax5 = eax4 - edx3;
    ecx6 = eax5;
    ebp7 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebp2) + (edx3 << 2));
    ebx8 = g80483fd;
    if (reinterpret_cast<int32_t>(eax5) > reinterpret_cast<int32_t>(ebx8)) {
        ecx6 = ebx8;
    }
    do {
        ecx9 = ebp7->f0;
        v10 = ebp7->f4;
        eax11 = 4;
        __asm__("int 0x80");
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v10) - 1) != 10) {
            eax11 = fun_80480a4(ecx9);
        }
        ebp7 = reinterpret_cast<struct s0*>(&ebp7->f4);
        --ecx6;
    } while (ecx6);
    return eax11;
}

struct s1 {
    signed char[106] pad106;
    int32_t f6a;
};

struct s2 {
    signed char[106] pad106;
    int32_t f6a;
};

int32_t fun_80480a4(signed char* ecx) {
    int32_t edx2;
    int32_t edx3;
    int32_t ebx4;
    struct s1* ebx5;
    struct s2* ebx6;
    int32_t ebx7;
    int32_t* eax8;

    *reinterpret_cast<int32_t*>(edx2 - 71) = *reinterpret_cast<int32_t*>(edx3 - 71) + ebx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<signed char>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<signed char>(ecx)) + 0x6a;
    ebx5->f6a = ebx6->f6a + ebx7;
    __asm__("int 0x80");
    goto *eax8;
}

void fun_804836c(int32_t ecx) {
    int32_t ecx2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t v6;
    signed char* edi7;
    int32_t v8;

    ecx2 = 0;
    if (eax3) {
        while (eax4) {
            eax4 = eax4 / 10;
            ++ecx2;
        }
    } else {
        ecx2 = 1;
    }
    do {
        eax5 = v6;
        *edi7 = *reinterpret_cast<signed char*>(&eax5);
        ++edi7;
        --ecx2;
    } while (ecx2);
    goto v8;
}

int32_t fun_8048289(int32_t ecx) {
    signed char** ebp2;
    signed char** esi3;
    signed char** edi4;
    int32_t ecx5;

    __asm__("pushad ");
    ebp2 = reinterpret_cast<signed char**>(0x804a45d);
    do {
        __asm__("int 0x80");
        if (0) 
            break;
        __asm__("int 0x80");
        esi3 = reinterpret_cast<signed char**>(0x804845d);
        edi4 = ebp2;
        ecx5 = 3;
        while (ecx5) {
            --ecx5;
            *edi4 = *esi3;
            ++edi4;
            ++esi3;
        }
        ebp2 = edi4;
    } while (0);
    g8048451 = ebp2;
    *ebp2 = reinterpret_cast<signed char*>(0x804a45d);
    __asm__("popad ");
    return 3;
}

struct s3 {
    signed char[54] pad54;
    struct s3* f36;
};

uint32_t g1b0804b3;

int32_t g80483a9;

uint32_t g8048435;

signed char g80483ad;

int32_t g804844d;

struct s4 {
    int32_t f0;
    int32_t f4;
};

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
    void* tmp8_23;
    uint1_t cf24;
    unsigned char* edx25;
    int32_t ebp26;
    int32_t ebp27;
    struct s3* v28;
    int1_t less_or_equal29;
    unsigned char* edi30;
    unsigned char* edi31;
    int32_t v32;
    int32_t eax33;
    struct s4* ebx34;
    uint32_t ecx35;
    int32_t edx36;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        __asm__("rol dword [eax+0x2c0804], cl");
        goto addr_804801c_3;
    }
    while (tmp8_23 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax22))), cf24 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_23) < reinterpret_cast<unsigned char>(*eax22)), *eax22 = tmp8_23, *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax22))) + cf24), *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1)), *eax22 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax22))), *reinterpret_cast<void**>(&ecx + 1) = reinterpret_cast<void*>(0x80), *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(8), *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 8), *reinterpret_cast<signed char*>(ebp26 + 0x1b080480) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp27 + 0x1b080480) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1)), ++ecx, *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<signed char>(*reinterpret_cast<void**>(&ecx + 1))), *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) + 27), ++edx25, *edx25 = reinterpret_cast<unsigned char>(*edx25 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1)), *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) + 10), *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 8), *edx25 = reinterpret_cast<unsigned char>(*edx25 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx25) + 1)), *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) + 32), *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 8), *reinterpret_cast<unsigned char*>(eax22 - 0x7e) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7e) + 8), *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(16), reinterpret_cast<int32_t>(v28) > reinterpret_cast<int32_t>(&v28->f36->pad54)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) + 27);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax22) ^ 0x482687e);
        *edx25 = 0xff;
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x6e);
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(16);
        if (!__intrinsic()) {
            addr_804801c_3:
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        } else {
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(24);
            less_or_equal29 = reinterpret_cast<int32_t>(0x1b080482) <= reinterpret_cast<int32_t>(g1b0804b3);
            if (!less_or_equal29) 
                goto addr_80480a1_7;
        }
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(0);
        *edi30 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*edi31));
        *eax22 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*eax22)));
    }
    __asm__("int 0x80");
    fun_80480a4(ecx);
    do {
        __asm__("int 0x80");
        if (v32 - 1 && (g80483a9 = 5, !1)) {
            __asm__("int 0x80");
        }
        __asm__("int 0x80");
    } while (1);
    __asm__("int 0x80");
    g80483fd = reinterpret_cast<uint16_t>(g80483fd - 1);
    if (!0) {
        g80483fd = reinterpret_cast<uint16_t>(0x500018);
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    g8048435 = g8048435 & 0xfffffff4;
    __asm__("int 0x80");
    fun_8048289(0x5402);
    fun_80482d0(0x5402);
    while (1) {
        __asm__("int 0x80");
        fun_804831e(0x8048395);
        __asm__("int 0x80");
        fun_804836c(0x804839e);
        g80483ad = 47;
        fun_804836c(0x804839e);
        __asm__("int 0x80");
        __asm__("int 0x80");
        while (1) {
            addr_80481d5_17:
            g804844d = 0;
            __asm__("int 0x80");
            eax33 = g804844d;
            ebx34 = reinterpret_cast<struct s4*>("q");
            while (eax33 != ebx34->f0) {
                ++ebx34;
                if (ebx34 == fun_80480a4) 
                    goto addr_80481d5_17;
            }
            break;
        }
        ecx35 = g8048459;
        edx36 = g8048455;
        ebx34->f4();
        g8048459 = ecx35;
        g8048455 = edx36;
    }
    addr_80480a1_7:
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<signed char>(ecx)) + 0x6a);
}

void fun_80480b5() {
}

int32_t fun_8048232(int32_t ecx) {
    int32_t edx2;
    int32_t ebp3;
    int32_t eax4;
    int32_t edx5;
    int32_t ebp6;

    if (edx2 < ebp3 || (eax4 = edx5 - ebp6, ecx == eax4)) {
        __asm__("pushad ");
        __asm__("int 0x80");
        __asm__("popad ");
        return 4;
    } else {
        return eax4;
    }
}

void fun_8048240(int32_t ecx) {
    int32_t edx2;
    int32_t ebp3;
    int32_t edx4;
    int32_t ebp5;
    int32_t ebp6;

    if (edx2 < ebp3) 
        goto 0x8048252;
    if (edx4 - ebp5 > ecx + ebp6) {
        return;
    }
}

void fun_8048285() {
    goto 0x8048252;
}

struct s5 {
    signed char[27] pad27;
    unsigned char f1b;
};

struct s6 {
    signed char[7] pad7;
    uint32_t f7;
};

struct s7 {
    signed char[7] pad7;
    uint32_t f7;
};

void fun_8048394(unsigned char cl, int32_t a2, int32_t a3, int32_t a4) {
    uint32_t ecx5;
    struct s5* edx6;
    struct s6* eax7;
    struct s7* eax8;

    *reinterpret_cast<unsigned char*>(&ecx5) = reinterpret_cast<unsigned char>(cl ^ edx6->f1b);
    eax7->f7 = eax8->f7 ^ ecx5;
    __asm__("insd ");
    __asm__("aaa ");
    __asm__("insd ");
}

void fun_8048228(int32_t ecx) {
    int32_t edx2;
    int32_t ebp3;

    if (!ecx) 
        goto 0x8048252;
    if (edx2 < ebp3) 
        goto 0x8048252;
    return;
}

void fun_8048268(int32_t ecx) {
    int32_t edx2;
    int32_t ebp3;
    int32_t ebp4;

    if (edx2 < ebp3) 
        goto 0x8048252;
    if (ecx - ebp4 >= 0) {
        return;
    } else {
        goto 0x8048252;
    }
}

void fun_8048279() {
    int32_t edx1;
    int32_t ebp2;

    if (edx1 < ebp2) 
        goto 0x8048252;
    goto 0x8048252;
}
