
signed char g8048914;

signed char g8048912;

signed char g8048913;

signed char g8048918;

signed char g804891b;

signed char g8048919;

signed char g804891a;

signed char g8048910;

int32_t fun_8048364(uint32_t ecx) {
    int32_t v2;
    int32_t eax3;
    int32_t ecx4;
    signed char* ebx5;
    void* ebx6;
    int32_t eax7;

    v2 = eax3;
    ecx4 = 6;
    ebx5 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx6) - 1);
    do {
        ++ebx5;
        if (!*ebx5) 
            break;
        if (*ebx5 == 97) {
            g8048914 = reinterpret_cast<signed char>(g8048914 + 1);
            g8048912 = 10;
            g8048913 = reinterpret_cast<signed char>(g8048913 + 1);
        }
        if (*ebx5 == 0x6c && !eax7) {
            g8048912 = 10;
            g8048913 = 0;
        }
        if (*ebx5 == 0x74) {
            g8048918 = reinterpret_cast<signed char>(g8048918 + 1);
            g804891b = reinterpret_cast<signed char>(g804891b + 1);
        }
        if (*ebx5 == 0x75) {
            g8048919 = reinterpret_cast<signed char>(g8048919 + 1);
            g804891b = reinterpret_cast<signed char>(g804891b + 1);
        }
        if (*ebx5 == 0x77) {
            g804891a = reinterpret_cast<signed char>(g804891a + 1);
            g804891b = reinterpret_cast<signed char>(g804891b + 1);
        }
        if (*ebx5 == 0x70) {
            g8048910 = reinterpret_cast<signed char>(g8048910 + 1);
        }
        --ecx4;
    } while (ecx4);
    return v2;
}

int32_t fun_804845b(int32_t ecx) {
    int1_t zf2;
    int1_t zf3;

    __asm__("int 0x80");
    zf2 = g8048914 == 0;
    if (zf2) {
        zf3 = g8048913 == 0;
        if (zf3) {
            __asm__("int 0x80");
        } else {
            __asm__("int 0x80");
        }
    } else {
        __asm__("int 0x80");
    }
    return 4;
}

int32_t fun_8048553();

int32_t fun_80484b0(int32_t ecx) {
    int1_t zf2;
    int32_t ecx3;
    signed char* esi4;
    signed char* edi5;
    int32_t eax6;
    int1_t zf7;
    int32_t ecx8;
    signed char* esi9;
    signed char* edi10;
    int1_t zf11;
    int32_t ecx12;
    signed char* esi13;
    signed char* edi14;

    zf2 = g8048918 == 0;
    if (!zf2) {
        ecx3 = 6;
        esi4 = reinterpret_cast<signed char*>(0x8048085);
        edi5 = reinterpret_cast<signed char*>(0x8049aca);
        while (ecx3) {
            --ecx3;
            *edi5 = *esi4;
            ++edi5;
            ++esi4;
        }
        eax6 = fun_8048553();
    }
    zf7 = g8048919 == 0;
    if (!zf7) {
        ecx8 = 6;
        esi9 = reinterpret_cast<signed char*>(0x804808b);
        edi10 = reinterpret_cast<signed char*>(0x8049aca);
        while (ecx8) {
            --ecx8;
            *edi10 = *esi9;
            ++edi10;
            ++esi9;
        }
        eax6 = fun_8048553();
    }
    zf11 = g804891a == 0;
    if (!zf11) {
        ecx12 = 6;
        esi13 = reinterpret_cast<signed char*>(0x8048091);
        edi14 = reinterpret_cast<signed char*>(0x8049aca);
        while (ecx12) {
            --ecx12;
            *edi14 = *esi13;
            ++edi14;
            ++esi13;
        }
        eax6 = fun_8048553();
    }
    return eax6;
}

int32_t fun_8048568();

int32_t fun_8048553() {
    int32_t eax1;

    __asm__("pushad ");
    eax1 = 5;
    __asm__("int 0x80");
    if (!0) {
        eax1 = fun_8048568();
    }
    __asm__("popad ");
    return eax1;
}

signed char g8048915;

signed char g8048917;

signed char g8048916;

void fun_80483e9() {
    int32_t* ebx1;
    int32_t* ebx2;

    if (*ebx1 == 0x78696e75) {
        g8048915 = reinterpret_cast<signed char>(g8048915 + 1);
        g8048917 = reinterpret_cast<signed char>(g8048917 + 1);
    }
    if (*ebx2 == 0x74656e69) {
        g8048916 = reinterpret_cast<signed char>(g8048916 + 1);
        g8048917 = reinterpret_cast<signed char>(g8048917 + 1);
    }
    return;
}

int32_t g804991c;

int32_t fun_80485b8(int32_t ecx);

int32_t fun_8048568() {
    int32_t ecx1;
    signed char* edi2;
    int1_t zf3;
    int1_t zf4;

    while (1) {
        __asm__("pushad ");
        ecx1 = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = 1;
        edi2 = reinterpret_cast<signed char*>(0x804991c);
        while (ecx1) {
            --ecx1;
            *edi2 = 32;
            ++edi2;
        }
        __asm__("popad ");
        while (!0) {
            __asm__("lodsb ");
            if (0) 
                goto addr_8048596_7;
        }
        break;
        addr_8048596_7:
        zf3 = g804991c == 0x6c732020;
        if (zf3) 
            continue;
        zf4 = g804991c == 0x206d754e;
        if (zf4) 
            continue;
        edi2(0x804991c);
        fun_80485b8(0x804991c);
    }
    return 3;
}

uint40_t g8049b5d;

int32_t g8049b0d;

signed char g8049b62;

uint32_t g8049b63;

int32_t fun_80485b8(int32_t ecx) {
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    int1_t zf6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    uint32_t ebx10;

    __asm__("pushad ");
    zf2 = *reinterpret_cast<signed char*>(&g8049b5d) == 10;
    if (zf2) 
        goto addr_80485f3_2;
    zf3 = g8049b0d == 0x78696e75;
    if (!zf3) {
        zf4 = *reinterpret_cast<signed char*>(&g8049b5d) == 0;
        if (!zf4) {
            addr_80485fe_5:
            zf5 = g8048913 == 0;
            if (zf5) 
                goto addr_8048637_6;
        } else {
            addr_80485f3_2:
            zf6 = g8048912 == 0;
            if (zf6) {
                goto addr_8048637_6;
            }
        }
        zf7 = g8049b62 == 0;
        if (!zf7) {
            zf8 = g8049b62 == 1;
            if (!zf8) {
                addr_8048637_6:
                __asm__("popad ");
                return 4;
            }
        }
        __asm__("int 0x80");
        goto addr_8048637_6;
    } else {
        zf9 = *reinterpret_cast<signed char*>(&g8049b5d) == 1;
        if (!zf9) 
            goto addr_80485fe_5;
        ebx10 = g8049b63;
        if (!(ebx10 & 0x10000)) 
            goto addr_80485fe_5;
        goto addr_80485f3_2;
    }
}

uint32_t fun_80488c4(uint32_t ecx);

int32_t fun_80488ec(uint32_t ecx);

int32_t fun_80488a8(uint32_t ecx) {
    int32_t edx2;
    int32_t eax3;

    fun_80488c4(ecx);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&g8049b5d) + 1) = edx2;
    fun_80488ec(ecx);
    return eax3;
}

int32_t fun_804886c(uint32_t ecx);

int32_t fun_8048842(uint32_t ecx);

int32_t fun_8048884(uint32_t ecx) {
    int32_t eax2;

    fun_804886c(ecx);
    fun_8048842(ecx);
    return eax2;
}

int32_t fun_80487f8(uint32_t ecx) {
    int32_t ecx2;
    int32_t ebx3;
    int32_t edx4;

    __asm__("lodsw ");
    ecx2 = 2;
    while (1) {
        if (0) {
            if (0) {
                ebx3 = -87;
            } else {
                ebx3 = -55;
            }
        } else {
            ebx3 = -48;
        }
        --ecx2;
        if (!ecx2) 
            break;
        edx4 = ebx3 << 4;
    }
    return edx4 + ebx3;
}

int32_t fun_8048895(uint32_t ecx) {
    int32_t eax2;

    fun_80488c4(ecx);
    fun_8048842(ecx);
    return eax2;
}

uint32_t fun_80488c4(uint32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;

    eax2 = fun_80487f8(ecx);
    eax3 = fun_80487f8(ecx);
    eax4 = fun_80487f8(ecx);
    eax5 = fun_80487f8(ecx);
    return (eax2 << 24) + (eax3 << 16) + (eax4 << 8) + eax5;
}

int32_t fun_804886c(uint32_t ecx) {
    int32_t eax2;
    int32_t eax3;

    eax2 = fun_80487f8(ecx);
    eax3 = fun_80487f8(ecx);
    return (eax2 << 8) + eax3;
}

void fun_8048412() {
    int1_t zf1;
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;

    zf1 = g804891b == 0;
    if (zf1) {
        g8048918 = reinterpret_cast<signed char>(g8048918 + 1);
        g8048919 = reinterpret_cast<signed char>(g8048919 + 1);
        g804891a = reinterpret_cast<signed char>(g804891a + 1);
    }
    zf2 = g8048914 == 0;
    if (zf2 && (zf3 = g8048912 == 0, zf3)) {
        g8048913 = reinterpret_cast<signed char>(g8048913 + 1);
    }
    zf4 = g8048917 == 0;
    if (zf4) {
        g8048915 = reinterpret_cast<signed char>(g8048915 + 1);
        g8048916 = reinterpret_cast<signed char>(g8048916 + 1);
    }
    return;
}

int32_t fun_80488ec(uint32_t ecx) {
    int32_t v2;
    int32_t eax3;
    uint32_t ecx4;
    signed char* edi5;

    v2 = eax3;
    ecx4 = 4;
    while (fun_8048842(ecx4), --ecx4, !!ecx4) {
        *edi5 = 46;
        ++edi5;
    }
    return v2;
}

int32_t fun_8048842(uint32_t ecx) {
    int32_t eax2;
    uint32_t edx3;
    int32_t eax4;
    int32_t edx5;
    uint32_t eax6;
    signed char* edi7;
    int32_t eax8;

    if (eax2) {
        edx3 = eax4 % reinterpret_cast<uint32_t>(10);
        fun_8048842(ecx);
        goto addr_8048861_3;
    }
    if (!edx5) {
        addr_8048861_3:
        eax6 = edx3 + 48;
    } else {
        goto addr_8048867_6;
    }
    *edi7 = *reinterpret_cast<signed char*>(&eax6);
    addr_8048867_6:
    return eax8;
}

struct s0 {
    unsigned char f0;
    signed char[44] pad45;
    unsigned char f2d;
    signed char[54] pad100;
    unsigned char f64;
    signed char[9] pad110;
    unsigned char f6e;
};

struct s1 {
    struct s1* f0;
    signed char[31] pad32;
    int32_t f20;
    signed char[61] pad97;
    unsigned char f61;
};

struct s2 {
    signed char[32] pad32;
    int32_t f20;
    signed char[46] pad82;
    unsigned char f52;
    signed char[18] pad101;
    int32_t f65;
    signed char[6] pad111;
    unsigned char f6f;
};

struct s3 {
    struct s3* f0;
    signed char[106] pad110;
    int32_t f6e;
};

struct s4 {
    struct s4* f0;
    signed char[72] pad76;
    unsigned char f4c;
    signed char[12] pad89;
    unsigned char f59;
    signed char[26] pad116;
    unsigned char f74;
};

struct s5 {
    signed char[79] pad79;
    unsigned char f4f;
};

struct s6 {
    signed char[67] pad67;
    unsigned char f43;
};

struct s7 {
    signed char[84] pad84;
    unsigned char f54;
};

struct s9 {
    signed char f0;
    signed char f1;
};

struct s8 {
    struct s8* f0;
    struct s9* f4;
};

struct s10 {
    int32_t f0;
    struct s9* f4;
};

struct s11 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s12 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s13 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s14 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s15 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s16 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s17 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s18 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s19 {
    signed char[116] pad116;
    signed char f74;
};

void fun_8048000(struct s0* ecx) {
    struct s1* esp2;
    int1_t less_or_equal3;
    struct s2* esi4;
    void* esi5;
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
    void* tmp8_26;
    uint1_t cf27;
    void* tmp8_28;
    uint1_t cf29;
    struct s1* eax30;
    int16_t bx31;
    int16_t bx32;
    unsigned char* edi33;
    signed char* edi34;
    struct s1* tmp8_35;
    uint1_t cf36;
    unsigned char tmp8_37;
    signed char* edi38;
    uint1_t cf39;
    unsigned char* edi40;
    unsigned char* edi41;
    uint1_t zf42;
    signed char* edi43;
    int1_t sf44;
    signed char* edi45;
    uint1_t below_or_equal46;
    struct s3* edi47;
    int32_t ebp48;
    int32_t ebp49;
    int1_t zf50;
    unsigned char dl51;
    struct s4* esp52;
    struct s4* ebx53;
    struct s4** esp54;
    struct s4** esp55;
    void** esp56;
    struct s4** esp57;
    void** esp58;
    void** edi59;
    void* ebx60;
    void** esp61;
    void** esp62;
    struct s5* ebx63;
    struct s5** esp64;
    struct s2* esi65;
    struct s5** esp66;
    void** esp67;
    void** esp68;
    void* ecx69;
    void** esp70;
    void** esp71;
    struct s6* ecx72;
    void* edi73;
    struct s7* ebx74;
    int32_t edx75;
    int32_t* esp76;
    int32_t* esp77;
    uint32_t ecx78;
    void** esp79;
    int32_t* esp80;
    struct s7** esp81;
    uint32_t* esp82;
    struct s1** esp83;
    uint32_t ecx84;
    struct s8* esp85;
    struct s9** esp86;
    struct s10* esp87;
    struct s10* esp88;
    unsigned char dl89;
    struct s1** esp90;
    void** esp91;
    struct s3* esp92;
    struct s3** esp93;
    int1_t zf94;
    struct s11* ebp95;
    struct s12* ebp96;
    unsigned char dl97;
    struct s4* esp98;
    int32_t edx99;
    struct s4** esp100;
    struct s4** esp101;
    unsigned char* edx102;
    unsigned char* edx103;
    int1_t zf104;
    signed char* edx105;
    struct s4* esp106;
    struct s4* ecx107;
    void* esi108;
    int32_t* esp109;
    void** esp110;
    void** esp111;
    struct s13* edx112;
    struct s14* edx113;
    unsigned char dl114;
    int16_t bx115;
    uint32_t* edx116;
    int32_t* edx117;
    struct s15* ebx118;
    struct s16* ebx119;
    unsigned char dh120;
    struct s10* esp121;
    struct s9** esp122;
    int1_t zf123;
    struct s10* esp124;
    struct s10* esp125;
    struct s10* esp126;
    struct s10* esp127;
    int1_t zf128;
    struct s10* esp129;
    struct s10* esp130;
    struct s10* esp131;
    int1_t zf132;
    int32_t ecx133;
    signed char* esi134;
    signed char* edi135;
    struct s10* esp136;
    uint32_t* edx137;
    int32_t* edx138;
    struct s17* ebx139;
    struct s18* ebx140;
    unsigned char dl141;
    struct s19* ebx142;

    esp2 = reinterpret_cast<struct s1*>(__zero_stack_offset());
    if (less_or_equal3) {
        esp2 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp2) - 1);
        esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi5) + 1);
        ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + eax6);
        *ebx7 = *ebx8 + eax9;
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
        *reinterpret_cast<signed char*>(&eax22) = reinterpret_cast<signed char>(al23 + *eax24);
        eax25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(*eax22));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax25) + 1) = 0x82;
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25))));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<uint32_t>(eax25));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *eax25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax25 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)) + 8);
        cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        *reinterpret_cast<void**>(&eax25) = tmp8_26;
        ecx->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx->f0 + *reinterpret_cast<unsigned char*>(&ecx)) + cf27);
        tmp8_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax25) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax25)));
        cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_28) < reinterpret_cast<unsigned char>(*eax25));
        *eax25 = tmp8_28;
        eax30 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(eax25) - (*reinterpret_cast<int32_t*>(bx31 + *reinterpret_cast<int16_t*>(&esi4)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax25) < reinterpret_cast<int32_t>(*reinterpret_cast<void**>(bx32 + *reinterpret_cast<int16_t*>(&esi4))) + cf29)));
        *edi33 = reinterpret_cast<unsigned char>(*edi34 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
    }
    tmp8_35 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
    cf36 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_35) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)));
    *reinterpret_cast<struct s1**>(&eax30->f0) = tmp8_35;
    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30))) + cf36);
    tmp8_37 = reinterpret_cast<unsigned char>(*edi38 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    cf39 = reinterpret_cast<uint1_t>(tmp8_37 < *edi40);
    *edi41 = tmp8_37;
    zf42 = reinterpret_cast<uint1_t>(*edi43 == 0);
    sf44 = *edi45 < 0;
    below_or_equal46 = reinterpret_cast<uint1_t>(cf39 | zf42);
    if (__intrinsic()) {
        addr_80480c1_4:
        ecx = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx) - 1);
        eax30 = reinterpret_cast<struct s1*>(__return_address());
        esp2 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp2) + 4);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi47) + ebp48 * 2 + 0x6d) = 0;
        __asm__("popad ");
        ebp49 = esi4->f20 * 0x6b636f73;
        zf42 = __undefined();
        goto addr_80480ca_5;
    } else {
        __asm__("outsd ");
        __asm__("arpl [edi], bp");
        __asm__("outsb ");
        if (zf42) {
            addr_8048085_7:
            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
            cf39 = 0;
            if (*reinterpret_cast<struct s1**>(&eax30->f0)) {
                addr_80480f1_8:
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                zf50 = *reinterpret_cast<struct s1**>(&eax30->f0) == 0;
                if (1) {
                    addr_804815a_9:
                    if (zf50) {
                        addr_804817c_10:
                        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                        goto addr_804817e_11;
                    } else {
                        esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) + 1);
                        __asm__("insb ");
                        __asm__("popad ");
                        if (1) {
                            addr_8048182_13:
                            esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) - 1);
                            __asm__("outsd ");
                            eax30->f61 = reinterpret_cast<unsigned char>(eax30->f61 & dl51);
                            if (!eax30->f61) {
                                addr_80481f4_14:
                                esp52 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                esp52->f0 = ebx53;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                ebx53->f4c = reinterpret_cast<unsigned char>(ebx53->f4c & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                                esp54 = reinterpret_cast<struct s4**>(reinterpret_cast<uint32_t>(esp52) - 4);
                                *esp54 = ebx53;
                                esp55 = esp54 + 1 - 1;
                                *esp55 = *esp54;
                                esp56 = reinterpret_cast<void**>(esp55 - 1);
                                *reinterpret_cast<void***>(esp56) = esp56;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp57 = reinterpret_cast<struct s4**>(reinterpret_cast<uint32_t>(esp56) - 1 - 4);
                                *esp57 = ebx53;
                                esp58 = reinterpret_cast<void**>(esp57 - 1);
                                *reinterpret_cast<void***>(esp58) = esp58;
                                edi59 = *reinterpret_cast<void***>(esp58);
                                ebx60 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx53) + 1 - 1);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp61 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp58 + 1) - 1 - 4);
                                *esp61 = ebx60;
                                esp62 = esp61 - 1;
                                *reinterpret_cast<void***>(esp62) = esp62;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                ebx63 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(ebx60) + 1);
                                esp64 = reinterpret_cast<struct s5**>(reinterpret_cast<uint32_t>(esp62) - 1 - 4);
                                *esp64 = ebx63;
                                esi65 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) - 1 - 1);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esi65->f52 = reinterpret_cast<unsigned char>(esi65->f52 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp66 = reinterpret_cast<struct s5**>(reinterpret_cast<uint32_t>(esp64) - 1 - 4);
                                *esp66 = ebx63;
                                esp67 = reinterpret_cast<void**>(esp66 - 1);
                                *reinterpret_cast<void***>(esp67) = esp67;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                ebx63->f4f = reinterpret_cast<unsigned char>(ebx63->f4f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                                esp68 = esp67 - 1;
                                *reinterpret_cast<void***>(esp68) = esp68;
                                ecx69 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(&ecx->pad45) - 1 + 1 + 1 - 1 - 1 - 1 - 1 - 1);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp70 = esp68 - 1;
                                *reinterpret_cast<void***>(esp70) = esp70;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx69) + reinterpret_cast<uint32_t>(ecx69) * 2 + 83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx69) + reinterpret_cast<uint32_t>(ecx69) * 2 + 83) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                                esp71 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp70) + 1 - 4);
                                *reinterpret_cast<void***>(esp71) = esp71;
                                ecx72 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(ecx69) - 1);
                                edi73 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi59) - 1 + 1 + 1 + 1 - 1 - 1 + 1);
                                ecx72->f43 = reinterpret_cast<unsigned char>(ecx72->f43 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                                ebx74 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ebx63) + 1 + 1 + 1 + 1 + 1 + 1);
                                ebx74->f54 = reinterpret_cast<unsigned char>(ebx74->f54 & *reinterpret_cast<unsigned char*>(&edx75));
                                esp76 = reinterpret_cast<int32_t*>(esp71 - 1);
                                *esp76 = edx75;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi73) + reinterpret_cast<unsigned char>(eax30) * 2 + 82) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi73) + reinterpret_cast<unsigned char>(eax30) * 2 + 82) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp77 = esp76 - 1;
                                *esp77 = edx75;
                                ecx78 = reinterpret_cast<uint32_t>(ecx72) + 1 + 1 + 1;
                                esp79 = reinterpret_cast<void**>(esp77 - 1);
                                *esp79 = edi73;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp80 = reinterpret_cast<int32_t*>(esp79 - 1);
                                *esp80 = edx75;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp81 = reinterpret_cast<struct s7**>(reinterpret_cast<uint32_t>(esp80) + 1 - 4);
                                *esp81 = ebx74;
                                esp82 = reinterpret_cast<uint32_t*>(esp81 - 1);
                                *esp82 = ecx78;
                                esp83 = reinterpret_cast<struct s1**>(esp82 - 1);
                                *esp83 = eax30;
                                ecx84 = ecx78 + 1;
                                esp85 = reinterpret_cast<struct s8*>(esp83 - 4);
                                esp85->f0 = esp85;
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                esp86 = &esp85->f4;
                                if (reinterpret_cast<uint32_t>(esp85->f0) - 1) {
                                    ++esp86;
                                    while (++esp86, !!*esp86) {
                                        if ((*esp86)->f0 != 45) 
                                            continue;
                                        if ((*esp86)->f1 == 45) {
                                            esp87 = reinterpret_cast<struct s10*>(esp86 - 1);
                                            esp87->f0 = 0x80482d6;
                                            fun_80483e9();
                                            esp86 = &esp87->f4;
                                        } else {
                                            esp88 = reinterpret_cast<struct s10*>(esp86 - 1);
                                            esp88->f0 = 0x80482ce;
                                            fun_8048364(ecx84);
                                            esp86 = &esp88->f4;
                                        }
                                    }
                                }
                            } else {
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                goto addr_8048192_22;
                            }
                        } else {
                            addr_8048162_23:
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            goto addr_8048164_24;
                        }
                    }
                } else {
                    addr_80480f5_25:
                    if (0) {
                        addr_804816d_26:
                        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                        ebx53->f74 = reinterpret_cast<unsigned char>(ebx53->f74 & dl89);
                        __asm__("popad ");
                        if (!ebx53->f74) {
                            addr_80481dd_27:
                            esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) - 1);
                            esp90 = reinterpret_cast<struct s1**>(reinterpret_cast<unsigned char>(esp2) + 4 - 4);
                            *esp90 = *reinterpret_cast<struct s1**>(&esp2->f0);
                            esp91 = reinterpret_cast<void**>(esp90 - 4);
                            *reinterpret_cast<void***>(esp91) = esp91;
                            *reinterpret_cast<unsigned char*>(&eax30 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax30 + 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)));
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            esp92 = reinterpret_cast<struct s3*>(esp91 - 1);
                            esp92->f0 = esp92;
                            esp93 = reinterpret_cast<struct s3**>(&esp92->pad110 - 1);
                            *esp93 = esp92->f0;
                            ecx = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(&ecx->pad45) - 1 - 1 + 1 - 1);
                            esp2 = reinterpret_cast<struct s1*>(esp93 - 1);
                            *reinterpret_cast<struct s1**>(&esp2->f0) = esp2;
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            ebx53->f4c = reinterpret_cast<unsigned char>(ebx53->f4c & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                            goto addr_80481f4_14;
                        } else {
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            goto addr_804817c_10;
                        }
                    } else {
                        addr_80480fa_29:
                        ecx->f6e = 0;
                        *reinterpret_cast<unsigned char*>(ebp49 + 0x73) = 0;
                        zf94 = *reinterpret_cast<unsigned char*>(ebp49 + 0x73) == 0;
                        if (zf94) {
                            addr_8048164_24:
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            esp2 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp2) - 4);
                            *reinterpret_cast<struct s1**>(&esp2->f0) = esp2;
                            if (!__intrinsic()) {
                                addr_80481db_30:
                                esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) + 1);
                                ecx = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx) - 1);
                                goto addr_80481dd_27;
                            } else {
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                goto addr_804816d_26;
                            }
                        } else {
                            goto addr_8048107_33;
                        }
                    }
                }
            } else {
                if (0) {
                    addr_80480af_35:
                    __asm__("outsb ");
                    __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
                    goto addr_80480b5_36;
                } else {
                    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                    cf39 = 0;
                    below_or_equal46 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<struct s1**>(&eax30->f0) == 0)));
                    if (0) {
                        goto addr_80480f5_25;
                    }
                }
            }
        } else {
            if (zf42) {
                addr_80480bb_40:
                ebp95->f4e = reinterpret_cast<unsigned char>(ebp96->f4e & dl97);
                goto addr_80480c1_4;
            } else {
                __asm__("das ");
                if (__intrinsic()) {
                    addr_80480cf_43:
                    if (zf42) {
                        addr_8048145_44:
                        if (zf42) {
                            addr_80481ac_45:
                            esp98 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp2) - 4);
                            esp98->f0 = esp98;
                            edx75 = edx99 + 1;
                            esp100 = reinterpret_cast<struct s4**>(reinterpret_cast<uint32_t>(esp98) - 1 - 4);
                            *esp100 = ebx53;
                            eax30 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(eax30) - 1);
                            ebx53->f59 = reinterpret_cast<unsigned char>(ebx53->f59 & *reinterpret_cast<unsigned char*>(&edx75));
                            esp101 = reinterpret_cast<struct s4**>(reinterpret_cast<uint32_t>(esp100) + 1 + 4 - 4);
                            *esp101 = ebx53;
                            esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi4) - 1 - 1);
                            esp2 = reinterpret_cast<struct s1*>(esp101 - 1);
                            *reinterpret_cast<struct s1**>(&esp2->f0) = esp2;
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            goto addr_80481c1_46;
                        } else {
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            *edx102 = reinterpret_cast<unsigned char>(*edx103 & *reinterpret_cast<unsigned char*>(&ecx));
                            zf104 = *edx105 == 0;
                            esp2 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp2) - 4);
                            *reinterpret_cast<struct s1**>(&esp2->f0) = eax30;
                            if (0) {
                                addr_80481c1_46:
                                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                goto addr_80481c3_48;
                            } else {
                                if (zf104) {
                                    addr_80481c3_48:
                                    esp106 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(esp2) - 4);
                                    esp106->f0 = ebx53;
                                    ecx107 = esp106->f0;
                                    esi108 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi4) - 1);
                                    esp109 = reinterpret_cast<int32_t*>(&esp106->pad76 + 1 - 1);
                                    *esp109 = edx75;
                                    ebx53 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(ebx53) + 1);
                                    esp110 = reinterpret_cast<void**>(esp109 - 1);
                                    *esp110 = esi108;
                                    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                    esi4 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi108) + 1 - 1);
                                    esp111 = esp110 + 1 - 1;
                                    *esp111 = *esp110;
                                    ecx = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx107) - 1 + 1 - 1);
                                    esp2 = reinterpret_cast<struct s1*>(esp111 - 1);
                                    *reinterpret_cast<struct s1**>(&esp2->f0) = esp2;
                                    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) ^ reinterpret_cast<unsigned char>(esp2));
                                    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                    goto addr_80481db_30;
                                } else {
                                    addr_8048154_50:
                                    edx112->f65 = reinterpret_cast<unsigned char>(edx113->f65 & dl114);
                                    *reinterpret_cast<int16_t*>(&ebx53) = reinterpret_cast<int16_t>(bx115 + 1);
                                    zf50 = *reinterpret_cast<int16_t*>(&ebx53) == 0;
                                    __asm__("outsb ");
                                    goto addr_804815a_9;
                                }
                            }
                        }
                    } else {
                        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                        cf39 = 0;
                        sf44 = __intrinsic();
                        __asm__("outsd ");
                        goto addr_80480d5_52;
                    }
                } else {
                    __asm__("outsd ");
                    __asm__("arpl [edi], bp");
                    __asm__("outsb ");
                    if (zf42) {
                        if (!below_or_equal46) {
                            addr_80480b5_36:
                            __asm__("outsb ");
                            if (!cf39) 
                                goto addr_80480fa_29; else 
                                goto addr_80480b9_55;
                        } else {
                            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                            zf94 = *reinterpret_cast<struct s1**>(&eax30->f0) == 0;
                            if (!zf94) {
                                addr_8048107_33:
                                esp2 = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(esp2) - 4 - 4);
                                if (0) {
                                    addr_804817e_11:
                                    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                    goto addr_8048180_57;
                                } else {
                                    if (zf94) {
                                        addr_8048180_57:
                                        ecx->f2d = reinterpret_cast<unsigned char>(ecx->f2d & *reinterpret_cast<unsigned char*>(&ecx));
                                        goto addr_8048182_13;
                                    } else {
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi47) + ebp49 * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi47) + ebp49 * 2 + 99) & *reinterpret_cast<unsigned char*>(&ecx));
                                        goto addr_8048115_60;
                                    }
                                }
                            } else {
                                edi47 = reinterpret_cast<struct s3*>(eax30->f20 * 0x74634120);
                                esi4 = reinterpret_cast<struct s2*>(esi4->f65 * 0x746e4920);
                                cf39 = __intrinsic();
                                zf42 = __undefined();
                                goto addr_80480a1_62;
                            }
                        }
                    } else {
                        if (!zf42) {
                            addr_80480ca_5:
                            goto addr_80480cd_64;
                        } else {
                            __asm__("das ");
                            if (__intrinsic()) {
                                addr_80480dd_67:
                                if (cf39) {
                                    addr_8048153_68:
                                    goto addr_8048154_50;
                                } else {
                                    *edx116 = *edx117 - reinterpret_cast<uint32_t>(ecx);
                                    *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                                    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<struct s1**>(&eax30->f0) == 0)))) {
                                        addr_8048115_60:
                                        __asm__("popad ");
                                        __asm__("insb ");
                                        ecx->f64 = reinterpret_cast<unsigned char>(ecx->f64 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                                        cf39 = 0;
                                        goto addr_8048118_70;
                                    } else {
                                        __asm__("outsd ");
                                        ebx118->f65 = reinterpret_cast<unsigned char>(ebx119->f65 & dh120);
                                        cf39 = 0;
                                        if (0) 
                                            goto addr_8048162_23; else 
                                            goto addr_80480ec_72;
                                    }
                                }
                            } else {
                                __asm__("outsd ");
                                __asm__("arpl [edi], bp");
                                __asm__("outsb ");
                                if (zf42) {
                                    addr_80480a1_62:
                                    if (cf39) {
                                        addr_8048118_70:
                                        if (cf39) 
                                            goto addr_8048182_13; else 
                                            goto addr_804811d_74;
                                    } else {
                                        if (zf42) {
                                            addr_80480cd_64:
                                            goto addr_80480cf_43;
                                        } else {
                                            __asm__("arpl [edi+0x6e], bp");
                                            goto addr_80480af_35;
                                        }
                                    }
                                } else {
                                    if (cf39) {
                                        addr_80480d5_52:
                                        __asm__("outsb ");
                                        __asm__("insb ");
                                        if (!sf44) {
                                            goto addr_80480fa_29;
                                        }
                                    } else {
                                        __asm__("das ");
                                        if (__intrinsic()) {
                                            goto addr_80480ec_72;
                                        } else {
                                            __asm__("outsd ");
                                            __asm__("arpl [edi], bp");
                                            __asm__("outsb ");
                                            if (zf42) 
                                                goto addr_80480af_35;
                                            if (!zf42) 
                                                goto addr_80480f0_84; else 
                                                goto addr_8048082_85;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    esp121 = reinterpret_cast<struct s10*>(esp86 - 1);
    esp121->f0 = 0x80482dd;
    fun_8048412();
    esp122 = &esp121->f4;
    zf123 = g8048916 == 0;
    if (!zf123) {
        esp124 = reinterpret_cast<struct s10*>(esp122 - 1);
        esp124->f0 = 0x80482f5;
        fun_804845b(0x804809d);
        esp125 = reinterpret_cast<struct s10*>(&esp124->f4 - 1);
        esp125->f0 = 1;
        esp126 = reinterpret_cast<struct s10*>(&esp125->f4 - 1);
        esp126->f0 = 4;
        __asm__("int 0x80");
        esp127 = reinterpret_cast<struct s10*>(&esp126->f4 - 1);
        esp127->f0 = 0x804830c;
        fun_80484b0(0x804810c);
        esp122 = &esp127->f4;
    }
    zf128 = g8048915 == 0;
    if (!zf128 && (esp129 = reinterpret_cast<struct s10*>(esp122 - 1), esp129->f0 = 0x8048324, fun_804845b(0x80480b8), esp130 = reinterpret_cast<struct s10*>(&esp129->f4 - 1), esp130->f0 = 1, esp131 = reinterpret_cast<struct s10*>(&esp130->f4 - 1), esp131->f0 = 4, esp122 = &esp131->f4, zf132 = g8048915 == 0, !zf132)) {
        ecx133 = 6;
        esi134 = reinterpret_cast<signed char*>(0x8048097);
        edi135 = reinterpret_cast<signed char*>(0x8049b0d);
        while (ecx133) {
            --ecx133;
            *edi135 = *esi134;
            ++edi135;
            ++esi134;
        }
        esp136 = reinterpret_cast<struct s10*>(esp122 - 1);
        esp136->f0 = 0x804835f;
        fun_8048553();
        esp122 = &esp136->f4;
    }
    *reinterpret_cast<int32_t*>(esp122 - 1) = 1;
    __asm__("int 0x80");
    addr_80480b9_55:
    __asm__("arpl [ecx+ebp*2+0x76], si");
    goto addr_80480bb_40;
    addr_80480ec_72:
    if (cf39) 
        goto addr_8048162_23;
    *edx137 = *edx138 - reinterpret_cast<uint32_t>(ecx);
    addr_80480f0_84:
    goto addr_80480f1_8;
    addr_804811d_74:
    if (!cf39) {
        addr_8048192_22:
        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
        goto addr_8048193_95;
    } else {
        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
        *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
        esi4->f6f = reinterpret_cast<unsigned char>(esi4->f6f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
        if (0) {
            addr_8048193_95:
            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
            *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
            goto addr_804819c_97;
        } else {
            esp2 = reinterpret_cast<struct s1*>(edi47->f6e * 0x64644120);
            if (__intrinsic()) {
                addr_804819c_97:
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                *reinterpret_cast<unsigned char*>(&eax30 + 1) = 0xff;
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) & 0xff);
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) & 0xff);
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) & 0xff);
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) & 0xff);
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) & 0xff);
                *reinterpret_cast<unsigned char*>(ebp49 + 83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp49 + 83) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax30)));
                goto addr_80481ac_45;
            } else {
                if (!__intrinsic()) 
                    goto addr_80481ac_45;
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                *reinterpret_cast<struct s1**>(&eax30->f0) = reinterpret_cast<struct s1*>(0);
                goto addr_8048140_101;
            }
        }
    }
    if (!cf39) {
        addr_8048140_101:
        ebx139->f74 = reinterpret_cast<unsigned char>(ebx140->f74 & dl141);
        zf42 = reinterpret_cast<uint1_t>(ebx142->f74 == 0);
        __asm__("popad ");
        goto addr_8048145_44;
    } else {
        if (cf39) 
            goto addr_8048153_68; else 
            goto addr_80480dd_67;
    }
    addr_8048082_85:
    edi47 = reinterpret_cast<struct s3*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s1**>(&eax30->f0)) * 0x20706374);
    goto addr_8048085_7;
}

int32_t fun_804852c() {
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("int 0x80");
    return 4;
}

int16_t g8049b1a;

void fun_80486cd() {
    uint32_t ecx1;
    signed char* edi2;
    uint32_t eax3;
    uint32_t ebx4;
    signed char* edi5;
    signed char* esi6;
    int32_t ecx7;
    int32_t ecx8;
    uint32_t ecx9;
    int32_t eax10;
    int32_t ecx11;
    signed char* esi12;
    signed char* edi13;
    uint32_t ecx14;
    int32_t eax15;
    int32_t ecx16;
    signed char* esi17;
    uint32_t ebx18;
    signed char* esi19;
    signed char* edi20;
    int32_t ecx21;
    signed char* edi22;
    int32_t ecx23;
    signed char* edi24;
    int32_t ecx25;

    __asm__("pushad ");
    g8049b62 = 1;
    ecx1 = 73;
    edi2 = reinterpret_cast<signed char*>(0x8049b13);
    while (ecx1) {
        --ecx1;
        *edi2 = 32;
        ++edi2;
    }
    *edi2 = 10;
    fun_8048895(ecx1);
    eax3 = fun_80488c4(ecx1);
    g8049b63 = eax3;
    ebx4 = eax3;
    g8049b1a = 0x205b;
    edi5 = reinterpret_cast<signed char*>(0x8049b1c);
    if (ebx4 & 0x10000) {
        esi6 = reinterpret_cast<signed char*>(0x8048275);
        ecx7 = 4;
        while (ecx7) {
            --ecx7;
            *edi5 = *esi6;
            ++edi5;
            ++esi6;
        }
    }
    if (ebx4 & 0x20000) {
        esi6 = reinterpret_cast<signed char*>(0x8048279);
        ecx8 = 2;
        while (ecx8) {
            --ecx8;
            *edi5 = *esi6;
            ++edi5;
            ++esi6;
        }
    }
    ecx9 = 0x40000;
    if (ebx4 & 0x40000) {
        esi6 = reinterpret_cast<signed char*>(0x804827b);
        ecx9 = 2;
        while (ecx9) {
            --ecx9;
            *edi5 = *esi6;
            ++edi5;
            ++esi6;
        }
    }
    *edi5 = 93;
    eax10 = fun_804886c(ecx9);
    ecx11 = eax10;
    esi12 = reinterpret_cast<signed char*>(0x8048272);
    do {
        esi12 = esi12 + 11;
        --ecx11;
    } while (ecx11);
    edi13 = reinterpret_cast<signed char*>(0x8049b26);
    ecx14 = 11;
    while (ecx14) {
        --ecx14;
        *edi13 = *esi12;
        ++edi13;
        ++esi12;
    }
    eax15 = fun_80487f8(ecx14);
    *reinterpret_cast<int32_t*>(&g8049b5d) = eax15;
    if (eax15 != 1) {
        ecx16 = eax15;
        esi17 = reinterpret_cast<signed char*>(0x8048221);
        do {
            esi17 = esi17 + 14;
            --ecx16;
        } while (ecx16);
    } else {
        ebx18 = g8049b63;
        if (!(ebx18 & 0x10000)) {
            addr_80487d6_37:
            esi19 = reinterpret_cast<signed char*>(0x8049937);
            edi20 = reinterpret_cast<signed char*>(0x8049b40);
            ecx21 = 5;
            goto label_38;
        } else {
            esi17 = reinterpret_cast<signed char*>(0x804823d);
        }
    }
    edi22 = reinterpret_cast<signed char*>(0x8049b31);
    ecx23 = 14;
    while (ecx23) {
        --ecx23;
        *edi22 = *esi17;
        ++edi22;
        ++esi17;
    }
    goto addr_80487d6_37;
    label_38:
    while (ecx21) {
        --ecx21;
        *edi20 = *esi19;
        ++edi20;
        ++esi19;
    }
    edi24 = reinterpret_cast<signed char*>(0x8049b46);
    ecx25 = 22;
    do {
        __asm__("lodsb ");
        if (*reinterpret_cast<signed char*>(&eax15) == 10) 
            break;
        *edi24 = *reinterpret_cast<signed char*>(&eax15);
        ++edi24;
        --ecx25;
    } while (ecx25);
    __asm__("popad ");
    return;
}

signed char g8049ad0;

signed char g8049ae8;

int32_t g8049aca;

void fun_8048639() {
    uint32_t ecx1;
    signed char* edi2;
    int32_t eax3;
    int32_t ecx4;
    signed char* esi5;
    int1_t zf6;
    signed char* edi7;
    int32_t ecx8;

    __asm__("pushad ");
    g8049b62 = 0;
    ecx1 = 60;
    edi2 = reinterpret_cast<signed char*>(0x8049ad0);
    while (ecx1) {
        --ecx1;
        *edi2 = 32;
        ++edi2;
    }
    *edi2 = 10;
    fun_80488a8(ecx1);
    g8049ad0 = 58;
    fun_8048884(ecx1);
    fun_80488a8(ecx1);
    g8049ae8 = 58;
    fun_8048884(ecx1);
    eax3 = fun_80487f8(ecx1);
    *reinterpret_cast<int32_t*>(&g8049b5d) = eax3;
    ecx4 = eax3;
    esi5 = reinterpret_cast<signed char*>(0x804819f);
    if (ecx4 != 7 || (zf6 = g8049aca == 0x20706475, !zf6)) {
        do {
            esi5 = esi5 + 12;
            --ecx4;
        } while (ecx4);
    } else {
        *reinterpret_cast<int32_t*>(&g8049b5d) = 0;
    }
    edi7 = reinterpret_cast<signed char*>(0x8049b00);
    ecx8 = 12;
    while (ecx8) {
        --ecx8;
        *edi7 = *esi5;
        ++edi7;
        ++esi5;
    }
    __asm__("popad ");
    return;
}
