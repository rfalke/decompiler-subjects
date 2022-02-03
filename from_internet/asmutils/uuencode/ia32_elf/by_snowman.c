
void fun_8048340(int32_t* ecx) {
    uint32_t ebx2;
    uint32_t eax3;
    unsigned char al4;
    unsigned char al5;
    uint32_t ebx6;
    uint32_t* edi7;

    ebx2 = (eax3 & 0x1c0) << 10;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx2) + 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al4 & 56) >> 3);
    *reinterpret_cast<unsigned char*>(&ebx2) = reinterpret_cast<unsigned char>(al5 & 7);
    ebx6 = ebx2 << 8 | 0x30303000;
    *edi7 = ebx6 >> 24 | ebx6 >> 8 & 0xff00 | ebx6 << 8 & 0xff0000;
    return;
}

signed char fun_8048368(int32_t* ecx);

void fun_8048374(int32_t* ecx) {
    signed char al2;
    signed char* edi3;
    int32_t edi4;
    int32_t edx5;

    __asm__("pushad ");
    al2 = fun_8048368(ecx);
    edi3 = reinterpret_cast<signed char*>(edi4 + edx5);
    do {
        __asm__("lodsb ");
        *edi3 = al2;
        ++edi3;
    } while (al2);
    __asm__("popad ");
    return;
}

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

int32_t g8048558;

uint32_t fun_804831c(uint32_t ecx) {
    uint32_t eax2;
    signed char* edi3;
    int32_t ebx4;
    uint32_t edx5;
    signed char al6;
    signed char dl7;
    struct s0* edi8;

    *reinterpret_cast<signed char*>(&eax2) = 10;
    *edi3 = 10;
    if (ebx4 != "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/Usage: uuencode [-m] [infile] header\nuuencode: unable to open ") {
        if (edx5 < 45) {
            al6 = dl7;
        } else {
            al6 = 45;
        }
        *reinterpret_cast<signed char*>(&eax2) = reinterpret_cast<signed char>(al6 + 32);
        edi8->f1 = *reinterpret_cast<signed char*>(&eax2);
    }
    g8048558 = 0;
    return eax2;
}

void fun_8048388(int32_t* ecx) {
    signed char* edi2;
    signed char al3;
    signed char al4;

    do {
        __asm__("lodsb ");
        *edi2 = al3;
        ++edi2;
    } while (al4);
    return;
}

signed char fun_8048368(int32_t* ecx) {
    signed char* edx2;
    void* esi3;
    signed char al4;

    edx2 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi3) - 1);
    do {
        ++edx2;
    } while (*edx2);
    return al4;
}

struct s1 {
    void* f0;
    signed char[1640235007] pad1640235008;
    unsigned char f61c40000;
};

struct s2 {
    signed char[4] pad4;
    signed char f4;
};

struct s3 {
    int16_t f0;
    signed char f1;
    signed char[1] pad4;
    int32_t f4;
    signed char f8;
};

struct s4 {
    signed char[5] pad5;
    int16_t f5;
};

int32_t g804854c;

void fun_804843b();

struct s5 {
    signed char f0;
    signed char[2] pad3;
    int16_t f3;
    signed char f4;
};

int32_t g804855c;

int32_t g8048548;

int16_t g804d1c4;

signed char g804d9c4;

uint32_t g8048550;

uint32_t g8048554;

struct s6 {
    unsigned char f0;
    signed char f1;
};

uint48_t g804a560;

struct s7 {
    signed char f0;
    signed char f1;
};

struct s8 {
    signed char f0;
    unsigned char f1;
    unsigned char f2;
};

struct s9 {
    unsigned char f0;
    unsigned char f1;
};

void fun_8048000(int32_t* ecx, int32_t a2, int16_t* a3, int32_t a4, int32_t a5) {
    int1_t less_or_equal6;
    int32_t eax7;
    int32_t* ebx8;
    int32_t* ebx9;
    int32_t eax10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    void** eax23;
    signed char al24;
    signed char* eax25;
    struct s1* eax26;
    signed char dh27;
    unsigned char* eax28;
    unsigned char tmp8_29;
    uint1_t cf30;
    int32_t edi31;
    int32_t edi32;
    signed char bh33;
    int32_t* edi34;
    struct s2* edi35;
    struct s3* edi36;
    struct s4* edi37;
    uint32_t eax38;
    struct s5* edi39;
    uint32_t ecx40;
    uint32_t eax41;
    uint32_t ebx42;
    uint32_t edx43;
    uint32_t ebx44;
    struct s6* edi45;
    uint32_t edx46;
    int32_t ebx47;
    int1_t less48;
    uint32_t eax49;
    uint32_t eax50;
    struct s7* edi51;
    uint32_t eax52;
    struct s8* edi53;
    uint32_t eax54;
    uint16_t ax55;
    struct s9* edi56;
    int32_t tmp32_57;
    int1_t less58;
    uint32_t eax59;
    struct s7* edi60;
    struct s8* edi61;
    signed char ax62;
    uint32_t ecx63;
    struct s7* edi64;
    uint32_t eax65;
    struct s8* edi66;
    uint32_t eax67;
    struct s9* edi68;
    unsigned char al69;
    int1_t zf70;

    if (less_or_equal6) {
        *ecx = *ecx + eax7;
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(*eax23));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<int32_t>(eax26));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(eax26)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax26) + reinterpret_cast<int32_t>(eax26)) + dh27);
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<int32_t>(eax26));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax26) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax26) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        eax28 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax26) + 0x61c40000);
        *eax28 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
        *eax28 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
    }
    tmp8_29 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28));
    cf30 = reinterpret_cast<uint1_t>(tmp8_29 < *eax28);
    *eax28 = tmp8_29;
    *eax28 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<signed char*>(&eax28)) + cf30);
    *reinterpret_cast<signed char*>(edi31 + 0x804d9c4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi32 + 0x804d9c4) + bh33);
    *edi34 = 0x69676562;
    edi35->f4 = 0x6e;
    edi36 = reinterpret_cast<struct s3*>(&edi37->f5);
    if (reinterpret_cast<int32_t>(__return_address()) < 2) 
        goto addr_8048393_4;
    eax38 = reinterpret_cast<int32_t>(__return_address()) - 1;
    if (*a3 != 0x6d2d) {
        g804854c = reinterpret_cast<int32_t>(fun_804843b);
        edi36->f0 = 32;
        edi39 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(edi36) + 1);
    } else {
        g804854c = reinterpret_cast<int32_t>("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/Usage: uuencode [-m] [infile] header\nuuencode: unable to open ");
        edi36->f0 = reinterpret_cast<int16_t>(0x7361622d);
        edi36->f4 = 0x20343665;
        edi39 = reinterpret_cast<struct s5*>(&edi36->f8);
        edi39->f0 = 0;
        --eax38;
    }
    if (eax38 > 2) 
        goto addr_8048393_4;
    if (eax38 < 2) {
        if (eax38 != 1) {
            addr_8048393_4:
            __asm__("int 0x80");
        } else {
            edi39->f0 = reinterpret_cast<signed char>(0x20343436);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi39) + 4) = 0;
            fun_8048374(ecx);
            g804855c = 0;
            goto addr_804811f_12;
        }
    } else {
        __asm__("int 0x80");
        if (1) {
            g8048548 = -0x6a;
            fun_8048388(0x804d184);
            fun_8048374(0x804d184);
            fun_8048368(0x804d184);
            __asm__("int 0x80");
        } else {
            fun_8048340(0x804d184);
            edi39->f3 = 32;
            fun_8048374(0x804d184);
            ecx = reinterpret_cast<int32_t*>(0);
            __asm__("int 0x80");
            if (0) {
                g8048548 = -5;
                fun_8048388(0);
                fun_8048374(0);
                fun_8048368(0);
                g804d1c4 = 10;
                __asm__("int 0x80");
            } else {
                g804855c = 5;
                goto addr_804811f_12;
            }
        }
    }
    addr_8048306_18:
    __asm__("int 0x80");
    __asm__("int 0x80");
    addr_804811f_12:
    fun_8048368(ecx);
    g804d9c4 = 10;
    ecx40 = 0x804d9c4;
    eax41 = 4;
    __asm__("int 0x80");
    while (1) {
        g8048550 = 0x1ffe;
        do {
            ebx42 = 0x1ffe;
            edx43 = g8048550;
            if (!edx43) 
                break;
            ecx40 = 0x8048560 + (0x1ffe - edx43);
            eax41 = 3;
            __asm__("int 0x80");
            g8048554 = 3;
            if (0) 
                goto addr_804841d_22;
            ebx44 = g8048550;
            ebx42 = ebx44 - 3;
            g8048550 = ebx42;
        } while (static_cast<int1_t>(!!ebx42));
        edi45 = reinterpret_cast<struct s6*>(0x804a560);
        edx46 = 0x1ffe - ebx42;
        if (!edx46) {
            addr_8048294_25:
            if (edi45 == 0x804a560) 
                goto addr_80482c0_26;
            edi45->f0 = 10;
            ecx40 = 0x804a560;
            __asm__("int 0x80");
            eax41 = g8048554;
            if (eax41) 
                continue; else 
                goto addr_80482c0_26;
        } else {
            g8048558 = 0;
            ebx47 = g804854c;
            if (ebx47 != "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/Usage: uuencode [-m] [infile] header\nuuencode: unable to open ") {
                eax41 = edx46;
                if (eax41 >= 45) {
                    *reinterpret_cast<unsigned char*>(&eax41) = 45;
                }
                *reinterpret_cast<unsigned char*>(&eax41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax41) + 32);
                *reinterpret_cast<unsigned char*>(&g804a560) = *reinterpret_cast<unsigned char*>(&eax41);
                edi45 = reinterpret_cast<struct s6*>(0x804a561);
            }
            while (edx46 > 2) {
                less48 = g8048558 < 45;
                if (!less48) {
                    eax41 = fun_804831c(ecx40);
                }
                __asm__("lodsd ");
                eax49 = (eax41 >> 24 | eax41 >> 8 & 0xff00 | eax41 << 8 & 0xff0000 | eax41 << 24) >> 8;
                ecx40 = eax49;
                eax50 = (eax49 & 0xfc0000) >> 18;
                __asm__("xlatb ");
                edi45->f0 = *reinterpret_cast<unsigned char*>(&eax50);
                edi51 = reinterpret_cast<struct s7*>(&edi45->f1);
                eax52 = (ecx40 & 0x3f000) >> 12;
                __asm__("xlatb ");
                edi51->f0 = *reinterpret_cast<signed char*>(&eax52);
                edi53 = reinterpret_cast<struct s8*>(&edi51->f1);
                eax54 = ecx40;
                ax55 = reinterpret_cast<uint16_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax54) & 0xfc0) >> 6);
                __asm__("xlatb ");
                edi53->f0 = *reinterpret_cast<signed char*>(&ax55);
                edi56 = reinterpret_cast<struct s9*>(&edi53->f1);
                eax41 = ecx40;
                *reinterpret_cast<unsigned char*>(&eax41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax41) & 63);
                __asm__("xlatb ");
                edi56->f0 = *reinterpret_cast<unsigned char*>(&eax41);
                edi45 = reinterpret_cast<struct s6*>(&edi56->f1);
                edx46 = edx46 - 3;
                tmp32_57 = g8048558 + 3;
                g8048558 = tmp32_57;
            }
            if (!edx46) 
                goto addr_8048294_25;
        }
        less58 = g8048558 < 45;
        if (!less58) {
            fun_804831c(ecx40);
        }
        eax59 = 0;
        if (edx46 != 1) 
            goto addr_8048231_54;
        __asm__("lodsb ");
        __asm__("xlatb ");
        edi45->f0 = 0;
        edi60 = reinterpret_cast<struct s7*>(&edi45->f1);
        __asm__("xlatb ");
        edi60->f0 = 0;
        edi61 = reinterpret_cast<struct s8*>(&edi60->f1);
        if (reinterpret_cast<int1_t>(ebx47 == "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/Usage: uuencode [-m] [infile] header\nuuencode: unable to open ")) 
            goto addr_8048289_62;
        ax62 = 0;
        __asm__("xlatb ");
        addr_8048290_64:
        (&ax62)[1] = ax62;
        edi61->f0 = ax62;
        edi45 = reinterpret_cast<struct s6*>(&edi61->f2);
        goto addr_8048294_25;
        addr_8048289_62:
        ax62 = 61;
        goto addr_8048290_64;
        addr_8048231_54:
        __asm__("lodsw ");
        *reinterpret_cast<signed char*>(&eax59) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax59) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax59) + 1) = 0;
        ecx63 = eax59 << 2;
        __asm__("xlatb ");
        edi45->f0 = 0;
        edi64 = reinterpret_cast<struct s7*>(&edi45->f1);
        eax65 = (ecx63 & 0xfc0) >> 6;
        __asm__("xlatb ");
        edi64->f0 = *reinterpret_cast<signed char*>(&eax65);
        edi66 = reinterpret_cast<struct s8*>(&edi64->f1);
        eax67 = ecx63 & 63;
        __asm__("xlatb ");
        edi66->f0 = *reinterpret_cast<signed char*>(&eax67);
        edi68 = reinterpret_cast<struct s9*>(&edi66->f1);
        if (reinterpret_cast<int1_t>(ebx47 == "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/Usage: uuencode [-m] [infile] header\nuuencode: unable to open ")) 
            goto addr_804825f_76;
        al69 = 0;
        __asm__("xlatb ");
        addr_8048266_78:
        edi68->f0 = al69;
        edi45 = reinterpret_cast<struct s6*>(&edi68->f1);
        goto addr_8048294_25;
        addr_804825f_76:
        al69 = 61;
        goto addr_8048266_78;
    }
    addr_804841d_22:
    g8048548 = reinterpret_cast<int32_t>(-3);
    __asm__("int 0x80");
    goto addr_8048306_18;
    addr_80482c0_26:
    zf70 = reinterpret_cast<int1_t>(g804854c == fun_804843b);
    if (!zf70) {
        *reinterpret_cast<int16_t*>(&g804a560) = reinterpret_cast<int16_t>(0x3d3d3d3d);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g804a560) + 4) = 10;
        __asm__("int 0x80");
        goto addr_8048306_18;
    } else {
        *reinterpret_cast<int16_t*>(&g804a560) = 0xa60;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&g804a560) + 2) = 0xa646e65;
        __asm__("int 0x80");
        goto addr_8048306_18;
    }
}

uint32_t g29282726;

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    void* f4;
};

struct s14 {
    signed char[4] pad4;
    void* f4;
};

struct s13 {
    void* f0;
    struct s14* f4;
};

struct s15 {
    void* f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    void* f4;
};

struct s17 {
    signed char[45] pad45;
    unsigned char f2d;
    signed char[59] pad105;
    unsigned char f69;
    signed char[11] pad117;
    unsigned char f75;
};

struct s18 {
    unsigned char f0;
    signed char[111] pad112;
    unsigned char f70;
};

struct s20 {
    signed char[32] pad32;
    unsigned char f20;
};

struct s19 {
    struct s18* f0;
    struct s20* f4;
};

struct s21 {
    struct s20* f0;
    uint32_t* f4;
};

void fun_804843b() {
    uint32_t* edx1;
    uint32_t* edx2;
    void* esp3;
    unsigned char* ecx4;
    signed char ch5;
    signed char* ebx6;
    unsigned char dh7;
    int32_t edx8;
    unsigned char dh9;
    unsigned char* ebx10;
    int32_t eax11;
    signed char al12;
    int32_t* esp13;
    int32_t* esp14;
    int32_t* esp15;
    int32_t* esp16;
    int32_t ebx17;
    void** esp18;
    int32_t* esp19;
    int32_t ebp20;
    int32_t* esp21;
    int32_t esi22;
    struct s10* esp23;
    int32_t edi24;
    struct s11* esp25;
    struct s12* esp26;
    struct s13* esp27;
    struct s15* esp28;
    struct s16* esp29;
    void** esp30;
    int32_t ecx31;
    int32_t edx32;
    struct s17* ebx33;
    void* ebp34;
    uint32_t esi35;
    struct s18* edi36;
    int32_t* esp37;
    int32_t* esp38;
    int32_t* esp39;
    struct s17** esp40;
    void** esp41;
    void** esp42;
    uint32_t* esp43;
    struct s19* esp44;
    struct s18* eax45;
    struct s21* esp46;
    struct s20* ecx47;
    uint32_t** esp48;
    uint32_t* edx49;
    int32_t* esp50;
    unsigned char ebp51;
    uint1_t cf52;
    uint1_t zf53;
    uint32_t esi54;
    unsigned char* esp55;

    __asm__("pushad ");
    *edx1 = *edx2 & reinterpret_cast<uint32_t>(__zero_stack_offset());
    esp3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(__zero_stack_offset()) & g29282726);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx4) + 1) = reinterpret_cast<signed char>(ch5 - *ebx6);
    __asm__("das ");
    *ecx4 = reinterpret_cast<unsigned char>(*ecx4 ^ dh7);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx8) + 1) = reinterpret_cast<unsigned char>(dh9 ^ *ebx10);
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al12 - 45) ^ 53);
    __asm__("aaa ");
    __asm__("aas ");
    esp13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp3) + 1 - 1 - 4);
    *esp13 = eax11 + 1 - 1;
    esp14 = esp13 - 1;
    *esp14 = reinterpret_cast<int32_t>(ecx4 + 1 - 1);
    esp15 = esp14 - 1;
    *esp15 = edx8 + 1 - 1;
    esp16 = esp15 - 1;
    *esp16 = ebx17 + 1 - 1;
    esp18 = reinterpret_cast<void**>(esp16 - 1);
    *reinterpret_cast<void***>(esp18) = esp18;
    esp19 = reinterpret_cast<int32_t*>(esp18 - 1);
    *esp19 = ebp20 + 1 - 1;
    esp21 = esp19 - 1;
    *esp21 = esi22 + 1 - 1;
    esp23 = reinterpret_cast<struct s10*>(esp21 - 1);
    esp23->f0 = edi24 + 1 - 1;
    esp25 = reinterpret_cast<struct s11*>(&esp23->f4);
    esp26 = reinterpret_cast<struct s12*>(&esp25->f4);
    esp27 = reinterpret_cast<struct s13*>(&esp26->f4);
    esp28 = reinterpret_cast<struct s15*>(&esp27->f4->f4);
    esp29 = reinterpret_cast<struct s16*>(&esp28->f4);
    esp30 = &esp29->f4;
    ecx31 = esp25->f0 + 1 - 1;
    edx32 = esp26->f0 + 1 - 1;
    ebx33 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(esp27->f0) + 1 - 1);
    ebp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28->f0) + 1 - 1);
    esi35 = reinterpret_cast<uint32_t>(esp29->f0 + 1 - 1);
    edi36 = reinterpret_cast<struct s18*>(reinterpret_cast<int32_t>(*esp30) + 1 - 1);
    esp37 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp30 + 1) + 1 - 1 - 4);
    *esp37 = esp23->f0 - 1;
    esp38 = esp37 - 1;
    *esp38 = ecx31;
    esp39 = esp38 - 1;
    *esp39 = edx32;
    esp40 = reinterpret_cast<struct s17**>(esp39 - 1);
    *esp40 = ebx33;
    esp41 = reinterpret_cast<void**>(esp40 - 1);
    *reinterpret_cast<void***>(esp41) = esp41;
    esp42 = esp41 - 1;
    *esp42 = ebp34;
    esp43 = reinterpret_cast<uint32_t*>(esp42 - 1);
    *esp43 = esi35;
    esp44 = reinterpret_cast<struct s19*>(esp43 - 1);
    esp44->f0 = edi36;
    eax45 = esp44->f0;
    esp46 = reinterpret_cast<struct s21*>(&esp44->f4);
    ecx47 = esp46->f0;
    esp48 = &esp46->f4;
    edx49 = *esp48;
    __asm__("popad ");
    esp50 = reinterpret_cast<int32_t*>(esp48 + 1 - 1);
    *esp50 = 0x6a69;
    ebp51 = reinterpret_cast<unsigned char>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp34) + reinterpret_cast<int32_t>(ebp34) * 2 + 0x6e) * 0x6f);
    cf52 = __intrinsic();
    zf53 = __undefined();
    if (__intrinsic()) {
        addr_8048517_2:
        __asm__("outsb ");
        goto addr_804851b_3;
    } else {
        if (cf52) {
            addr_804851b_3:
            __asm__("arpl [edi+0x64], bp");
            *reinterpret_cast<unsigned char*>(ebp51 + 0x6e) = 0;
            cf52 = 0;
            zf53 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(ebp51 + 0x6e) == 0);
            goto addr_804851f_5;
        } else {
            if (zf53) {
                addr_804851f_5:
            } else {
                if (cf52 | zf53) {
                    addr_8048523_8:
                    __asm__("outsb ");
                    if (zf53) {
                    }
                } else {
                    if (__undefined()) {
                        goto addr_8048528_12;
                    } else {
                        if (__undefined()) 
                            goto addr_80484e0_14;
                        *edx49 = *edx49 ^ esi35;
                        esi54 = esi35 ^ *reinterpret_cast<uint32_t*>(esi35 + 0x39383736);
                        cf52 = reinterpret_cast<uint1_t>(ebp51 < edi36->f0);
                        ebp51 = reinterpret_cast<unsigned char>(ebp51 - edi36->f0);
                        zf53 = reinterpret_cast<uint1_t>(ebp51 == 0);
                        esp55 = reinterpret_cast<unsigned char*>(esp50 - 1);
                        *esp55 = ebp51;
                        if (!cf52) 
                            goto addr_804851f_5; else 
                            goto addr_80484be_16;
                    }
                }
            }
        }
    }
    addr_8048520_17:
    __asm__("arpl [edi+0x75], bp");
    goto addr_8048523_8;
    addr_8048528_12:
    if (!cf52) {
        ecx47->f20 = 0;
        if (!0) {
            __asm__("popad ");
            *reinterpret_cast<unsigned char*>(ebp51 + 0x72) = 0;
            if (!0) {
                if (0) {
                }
            }
        }
    }
    addr_80484be_16:
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax45) + 1) != *reinterpret_cast<unsigned char*>(*reinterpret_cast<int16_t*>(&ebx33) + *reinterpret_cast<int16_t*>(&esi54))) {
        *reinterpret_cast<unsigned char*>(ebp51 + 0x78) = 0;
        if (!reinterpret_cast<uint1_t>(__intrinsic() | __undefined())) {
        }
    } else {
        __asm__("outsb ");
        __asm__("arpl [edi+0x64], bp");
        ebx33->f2d = reinterpret_cast<unsigned char>(ebx33->f2d & *reinterpret_cast<unsigned char*>(&ebx33));
        __asm__("insd ");
        ebp51 = *esp55;
        ebx33->f69 = reinterpret_cast<unsigned char>(ebx33->f69 & *reinterpret_cast<unsigned char*>(&ebx33));
        __asm__("outsb ");
        *reinterpret_cast<int16_t*>(&ebp51) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(ebp51 + 93) * 0x6820);
        zf53 = __undefined();
        __asm__("popad ");
        if (__intrinsic()) {
            addr_80484ea_29:
            if (!zf53) {
            }
        } else {
            addr_80484e0_14:
            if (zf53) {
                __asm__("outsb ");
                __asm__("arpl [edi+0x64], bp");
                zf53 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax45) + 1) == eax45->f0);
                goto addr_80484ea_29;
            }
        }
        __asm__("popad ");
        if (zf53) {
        }
        edi36->f70 = 0;
        __asm__("outsb ");
        eax45->f0 = reinterpret_cast<unsigned char>(eax45->f0 & *reinterpret_cast<unsigned char*>(&eax45));
        __asm__("outsb ");
        __asm__("outsd ");
        ebx33->f75 = 0;
        __asm__("arpl [eax+0x20], bp");
        *reinterpret_cast<int16_t*>(&ebp51) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(ebp51 + 32) * 0x726f);
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx47) + ebp51 * 2 + 0x72) = 0;
        cf52 = 0;
        zf53 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx47) + ebp51 * 2 + 0x72) == 0);
        __asm__("arpl [gs:edi+ebp*2+0x72], si");
        if (!__intrinsic()) 
            goto addr_8048520_17;
    }
    *reinterpret_cast<unsigned char*>(ebp51 + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp51 + 0x75) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx49) + 1));
    goto addr_8048517_2;
}
