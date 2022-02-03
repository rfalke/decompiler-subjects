
uint32_t fun_8048374(int32_t ecx) {
    signed char* esi2;
    signed char* ebx3;
    uint32_t ebx4;
    uint32_t eax5;

    esi2 = ebx3;
    ebx4 = 0;
    eax5 = 0;
    while (++esi2, *reinterpret_cast<signed char*>(&ebx4) = reinterpret_cast<signed char>(*esi2 - 48), *reinterpret_cast<signed char*>(&ebx4) >= 0) {
        eax5 = eax5 * 10 + ebx4;
    }
    return eax5;
}

void fun_804838b(int16_t* ecx) {
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
        *edi6 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) + 48);
        ++edi6;
        --ecx2;
    } while (ecx2);
    return;
}

struct s0 {
    signed char f0;
    signed char[134514704] pad134514705;
    signed char f8048811;
};

signed char g7000010;

uint32_t g804880d;

int16_t g804882d;

int16_t g8048831;

uint32_t g8048815;

uint32_t g8048811;

uint32_t g804881d;

int16_t g8048833;

uint32_t g8048819;

signed char* g8048821;

signed char* g8048825;

int16_t* g8048805;

int16_t g80487f5;

struct s1 {
    signed char f0;
    signed char f1;
};

uint32_t g8048829;

int16_t g8048835;

struct s2 {
    unsigned char f0;
    int32_t f1;
};

struct s3 {
    int16_t f0;
    int32_t f2;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    signed char f4;
};

struct s6 {
    signed char f0;
    signed char f1;
};

struct s7 {
    signed char f0;
    int16_t f1;
};

unsigned char* g8048809;

int16_t g8048837;

int16_t g804883f;

int16_t g804883d;

int32_t g8048839;

int16_t g804882f;

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
    struct s0* edx23;
    void** eax24;
    void** edx25;
    unsigned char* eax26;
    signed char tmp8_27;
    unsigned char tmp8_28;
    uint1_t cf29;
    signed char bh30;
    uint32_t eax31;
    uint32_t eax32;
    uint32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t ebx37;
    signed char* tmp32_38;
    signed char* eax39;
    int16_t* ecx40;
    signed char* edi41;
    uint32_t ebx42;
    signed char* ebx43;
    uint32_t eax44;
    struct s1* edi45;
    signed char* edi46;
    uint32_t ebx47;
    int32_t eax48;
    int16_t tmp16_49;
    int16_t tmp16_50;
    uint32_t eax51;
    signed char* edi52;
    uint32_t eax53;
    uint32_t eax54;
    uint32_t edx55;
    uint32_t ebx56;
    int32_t* ebx57;
    struct s2* edi58;
    int32_t* edi59;
    uint32_t edx60;
    uint32_t tmp32_61;
    signed char* ecx62;
    struct s3* edi63;
    struct s4* edi64;
    struct s5* edi65;
    struct s6* edi66;
    struct s7* edi67;
    uint32_t eax68;
    uint32_t esi69;
    uint32_t esi70;
    int16_t* ebx71;
    int16_t* v72;
    int32_t v73;
    int32_t ecx74;
    uint32_t eax75;
    int16_t* v76;
    int32_t v77;
    uint32_t eax78;
    uint32_t eax79;
    uint32_t eax80;
    uint32_t eax81;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        eax22->f0 = reinterpret_cast<signed char>(eax22->f0 + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<signed char>(eax22->f0 + *reinterpret_cast<signed char*>(&eax22));
        edx23 = eax22;
        eax24 = edx25;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx23) + 1));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        eax26 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<unsigned char>(*eax24));
        tmp8_27 = reinterpret_cast<signed char>(g7000010 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        g7000010 = tmp8_27;
        *eax26 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    }
    tmp8_28 = reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26));
    cf29 = reinterpret_cast<uint1_t>(tmp8_28 < *eax26);
    *eax26 = tmp8_28;
    *eax26 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax26 + *reinterpret_cast<signed char*>(&eax26)) + cf29);
    edx23->f8048811 = reinterpret_cast<signed char>(edx23->f8048811 + bh30);
    goto addr_804804c_4;
    addr_8048136_5:
    eax31 = eax32 + 31 & 0xffe0;
    g804880d = eax31;
    g804882d = *reinterpret_cast<int16_t*>(&eax31);
    eax33 = (eax31 + 0x2000) / 0x2000;
    g8048831 = *reinterpret_cast<int16_t*>(&eax33);
    g8048815 = eax33 << 10;
    eax34 = g8048811;
    eax35 = eax34 - (eax31 >> 5) - 1 - 1;
    *reinterpret_cast<int16_t*>(&eax35) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&eax35) - g8048831);
    eax36 = (eax35 * 0x1fff + 1) / 0x2001;
    ebx37 = eax35 - eax36;
    g804881d = eax36;
    g8048833 = *reinterpret_cast<int16_t*>(&ebx37);
    g8048819 = ebx37 << 10;
    g8048821 = reinterpret_cast<signed char*>(0x8048c2d);
    tmp32_38 = reinterpret_cast<signed char*>(0x8048c2d + g8048815);
    eax39 = tmp32_38;
    g8048825 = eax39;
    ecx40 = g8048805;
    do {
        __asm__("lodsb ");
    } while (*reinterpret_cast<signed char*>(&eax39));
    __asm__("int 0x80");
    g80487f5 = 0x203a;
    fun_804838b(ecx40);
    __asm__("int 0x80");
    __asm__("int 0x80");
    fun_804838b(0x80483b5);
    __asm__("int 0x80");
    __asm__("int 0x80");
    edi41 = g8048821;
    *edi41 = 3;
    ebx42 = g8048815;
    ebx43 = reinterpret_cast<signed char*>(ebx42 + reinterpret_cast<uint32_t>(edi41));
    eax44 = g804880d;
    edi45 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(edi41) + (eax44 >> 3));
    edi45->f0 = -2;
    edi46 = &edi45->f1;
    do {
        *edi46 = -1;
        ++edi46;
    } while (reinterpret_cast<uint32_t>(edi46) < reinterpret_cast<uint32_t>(ebx43));
    ebx47 = g804880d;
    eax48 = 2;
    tmp16_49 = reinterpret_cast<int16_t>(2 + g8048831);
    tmp16_50 = reinterpret_cast<int16_t>(tmp16_49 + g8048833);
    *reinterpret_cast<int16_t*>(&eax48) = tmp16_50;
    eax51 = eax48 + (ebx47 >> 5);
    g8048829 = eax51;
    g8048835 = *reinterpret_cast<int16_t*>(&eax51);
    edi52 = g8048825;
    *edi52 = 3;
    eax53 = g804881d;
    eax54 = eax53 + 1;
    edx55 = eax54 % 8;
    ebx56 = g8048819;
    ebx57 = reinterpret_cast<int32_t*>(ebx56 + reinterpret_cast<uint32_t>(edi52));
    edi58 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(edi52) + eax54 / 8);
    edi58->f0 = reinterpret_cast<unsigned char>(edi58->f0 | reinterpret_cast<unsigned char>(~reinterpret_cast<signed char>(reinterpret_cast<signed char>(1 << *reinterpret_cast<unsigned char*>(&edx55)) - 1)));
    edi59 = &edi58->f1;
    do {
        *edi59 = -1;
        ++edi59;
    } while (reinterpret_cast<int32_t>(edi59) <= reinterpret_cast<int32_t>(ebx57));
    __asm__("int 0x80");
    if (__intrinsic() || (__intrinsic() || (edx60 = g8048815, tmp32_61 = edx60 + g8048819, ecx62 = g8048821, __intrinsic()))) {
        addr_804835a_24:
        __asm__("int 0x80");
        __asm__("int 0x80");
    } else {
        *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ecx62) + tmp32_61) = 0x41ed;
        edi63 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(ecx62) + tmp32_61 + 2);
        __asm__("int 0x80");
        edi63->f0 = 24;
        edi64 = reinterpret_cast<struct s4*>(&edi63->f2);
        edi64->f0 = 64;
        edi65 = reinterpret_cast<struct s5*>(&edi64->f4);
        __asm__("int 0x80");
        edi65->f0 = 13;
        edi66 = reinterpret_cast<struct s6*>(&edi65->f4);
        __asm__("int 0x80");
        edi66->f0 = 47;
        edi67 = reinterpret_cast<struct s7*>(&edi66->f1);
        edi67->f0 = 2;
        eax68 = g8048829;
        edi67->f1 = *reinterpret_cast<int16_t*>(&eax68);
        esi69 = g804880d;
        esi70 = esi69 >> 5;
        do {
            __asm__("int 0x80");
            if (__intrinsic()) 
                goto addr_804835a_24;
            --esi70;
        } while (esi70);
    }
    __asm__("int 0x80");
    __asm__("int 0x80");
    goto addr_804835a_24;
    do {
        addr_804808a_50:
        __asm__("int 0x80");
        ebx71 = v72;
        if (!ebx71) 
            goto addr_804808a_50;
        if (*ebx71 != 0x692d) 
            goto addr_80480b4_52;
        if (!v73) 
            goto addr_804808a_50;
        eax75 = fun_8048374(ecx74);
        g804880d = eax75;
        ebx71 = v76;
        if (!ebx71) 
            goto addr_804808a_50;
        addr_80480b4_52:
        ecx74 = 2;
        __asm__("int 0x80");
        if (__intrinsic()) 
            goto addr_804808a_50;
        g8048809 = reinterpret_cast<unsigned char*>(5);
        g8048805 = ebx71;
        if (!v77) {
            addr_804804c_4:
            ecx74 = 0x1260;
            __asm__("int 0x80");
            eax78 = g8048811;
            eax79 = eax78 << 9;
            if (!eax79) {
                ecx74 = 0;
                eax79 = 19;
                __asm__("int 0x80");
            }
            if (reinterpret_cast<int32_t>(eax79) < reinterpret_cast<int32_t>(0x1800)) 
                goto addr_804808a_50;
            ecx74 = 0;
            __asm__("int 0x80");
            eax80 = eax79 >> 10;
        } else {
            eax80 = fun_8048374(2);
        }
    } while (reinterpret_cast<int32_t>(eax80) < reinterpret_cast<int32_t>(6));
    g8048811 = eax80;
    __asm__("int 0x80");
    g8048837 = 0x400;
    g804883f = 1;
    g804883d = 0x138f;
    g8048839 = 0x10081c00;
    eax32 = g804880d;
    if (!eax32) {
        eax81 = g8048811;
        g804882f = *reinterpret_cast<int16_t*>(&eax81);
        eax32 = eax81 / 3;
        goto addr_8048136_5;
    }
}

struct s8 {
    signed char[105] pad105;
    int32_t f69;
};

void fun_80483a1(signed char* ecx) {
    int1_t cf2;
    int1_t zf3;
    int32_t ebp4;
    struct s8* esi5;
    unsigned char* eax6;
    unsigned char* eax7;
    unsigned char ah8;
    uint1_t cf9;
    signed char* eax10;
    signed char* esi11;
    int32_t* eax12;
    int32_t* eax13;
    int32_t eax14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    signed char* eax24;
    signed char* eax25;
    signed char al26;
    signed char* eax27;
    signed char* eax28;
    signed char al29;
    signed char* eax30;
    signed char* eax31;
    signed char al32;
    signed char* eax33;
    signed char* eax34;
    signed char al35;
    signed char* eax36;
    signed char* eax37;
    signed char al38;
    signed char* eax39;
    signed char* eax40;
    signed char al41;
    signed char* eax42;
    signed char* eax43;
    signed char al44;
    signed char* eax45;
    signed char* eax46;
    signed char al47;
    signed char* eax48;
    signed char* eax49;
    signed char al50;
    signed char* eax51;
    signed char* eax52;
    signed char al53;
    signed char* eax54;
    signed char* eax55;
    signed char al56;
    signed char al57;

    __asm__("popad ");
    if (cf2) {
        if (zf3) {
            __asm__("insd ");
            ebp4 = esi5->f69 * 0x69200a78;
            __asm__("outsb ");
            __asm__("outsd ");
            if (__intrinsic()) {
                *eax6 = reinterpret_cast<unsigned char>(*eax7 & ah8);
                cf9 = 0;
                if (!__intrinsic()) {
                    __asm__("outsb ");
                    if (!1) {
                        if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*eax10 == 0)))) {
                            esi11 = reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp4 + 32) * 0x6f727265);
                            cf9 = __intrinsic();
                        }
                    }
                    if (!cf9) {
                        *eax12 = *eax13 + eax14;
                        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
                        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
                        *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
                        *eax24 = reinterpret_cast<signed char>(*eax25 + al26);
                    }
                    *eax27 = reinterpret_cast<signed char>(*eax28 + al29);
                    *eax30 = reinterpret_cast<signed char>(*eax31 + al32);
                    *eax33 = reinterpret_cast<signed char>(*eax34 + al35);
                    *eax36 = reinterpret_cast<signed char>(*eax37 + al38);
                    *eax39 = reinterpret_cast<signed char>(*eax40 + al41);
                    *eax42 = reinterpret_cast<signed char>(*eax43 + al44);
                    *eax45 = reinterpret_cast<signed char>(*eax46 + al47);
                }
            }
            *eax48 = reinterpret_cast<signed char>(*eax49 + al50);
            *eax51 = reinterpret_cast<signed char>(*eax52 + al53);
            *eax54 = reinterpret_cast<signed char>(*eax55 + al56);
            *ecx = reinterpret_cast<signed char>(*ecx + al57);
            *esi11 = reinterpret_cast<signed char>(*esi11 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
        }
    }
}
