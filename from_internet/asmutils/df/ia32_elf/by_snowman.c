
void fun_80484b9(int32_t ecx) {
    signed char* edi2;
    void* edi3;

    edi2 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi3) - 1);
    do {
        ++edi2;
    } while (*edi2);
    return;
}

int32_t fun_8048484(int32_t a1);

int32_t g804851b;

void fun_8048491(uint32_t ecx) {
    int32_t v2;
    int32_t esi3;
    int32_t eax4;
    int32_t eax5;
    int32_t v6;
    signed char* edi7;

    v2 = reinterpret_cast<int32_t>(__return_address());
    __asm__("pushad ");
    esi3 = 0;
    do {
        eax4 = fun_8048484(v2);
        ++esi3;
    } while (eax4);
    g804851b = esi3;
    do {
        eax5 = v6;
        *edi7 = *reinterpret_cast<signed char*>(&eax5);
        ++edi7;
        esi3 = esi3 + 1 - 1;
    } while (esi3);
    __asm__("popad ");
    return;
}

int32_t fun_80484c9(int32_t ecx) {
    int32_t v2;
    int32_t eax3;
    signed char* edi4;

    v2 = eax3;
    while (ecx) {
        --ecx;
        *edi4 = 32;
        ++edi4;
    }
    return v2;
}

int32_t fun_8048484(int32_t a1) {
    unsigned char dl2;
    int32_t eax3;
    int32_t eax4;

    if (dl2 < 10) {
        return eax3;
    } else {
        return eax4;
    }
}

struct s0 {
    unsigned char f0;
    signed char[97] pad98;
    unsigned char f62;
    signed char[9] pad108;
    unsigned char f6c;
    signed char[1] pad110;
    unsigned char f6e;
    signed char[7] pad118;
    unsigned char f76;
};

struct s1 {
    int16_t f0;
    int32_t f2;
    signed char[96] pad102;
    int32_t f66;
    unsigned char f69;
    signed char[4] pad111;
    unsigned char f6f;
};

struct s2 {
    signed char[1] pad1;
    int16_t f1;
};

struct s3 {
    void* f0;
    signed char[458752] pad458753;
    unsigned char f70001;
};

struct s4 {
    signed char[114] pad114;
    unsigned char f72;
    unsigned char f73;
    signed char[4] pad120;
    unsigned char f78;
};

struct s5 {
    signed char f0;
    signed char f1;
};

struct s6 {
    unsigned char* f0;
    struct s1* f4;
};

struct s7 {
    int32_t f0;
    struct s5* f4;
};

struct s8 {
    struct s5* f0;
    void* f4;
};

int32_t g80484dd;

int32_t g80484e5;

struct s9 {
    int32_t f0;
    struct s5* f4;
};

int16_t g8048511;

signed char g804853b;

struct s10 {
    unsigned char f0;
    signed char[100] pad101;
    unsigned char f65;
};

unsigned char g2c0804e2;

struct s11 {
    unsigned char f0;
    signed char[103] pad104;
    unsigned char f68;
    signed char[5] pad110;
    unsigned char f6e;
};

int32_t g636f6c62;

uint32_t g6c65682d;

unsigned char g2c0804d0;

unsigned char g2c0804c7;

int32_t g2c0804e9;

void fun_8048000(struct s0* ecx) {
    struct s1** esp2;
    uint40_t v3;
    int1_t less_or_equal4;
    struct s1* esi5;
    struct s2* esi6;
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
    struct s3* eax26;
    signed char dh27;
    unsigned char* eax28;
    signed char dl29;
    unsigned char tmp8_30;
    signed char* edi31;
    uint1_t cf32;
    unsigned char* edi33;
    unsigned char* edi34;
    uint1_t zf35;
    signed char* edi36;
    int1_t sf37;
    signed char* edi38;
    int1_t of39;
    uint1_t below_or_equal40;
    unsigned char dh41;
    struct s4* ebp42;
    struct s5* esi43;
    int32_t edx44;
    struct s6* esp45;
    void* ecx46;
    unsigned char* eax47;
    signed char* edi48;
    signed char* esi49;
    unsigned char* ecx50;
    signed char* edi51;
    struct s6* esp52;
    struct s6* esp53;
    signed char** esp54;
    int32_t* esp55;
    int32_t* esp56;
    int32_t* esp57;
    int32_t* esp58;
    int32_t* esp59;
    int32_t* esp60;
    int32_t* esp61;
    int32_t ecx62;
    signed char cl63;
    int32_t* esp64;
    int32_t* esp65;
    int32_t* esp66;
    int32_t* esp67;
    int32_t* esp68;
    int32_t* esp69;
    int32_t ecx70;
    int32_t* esp71;
    int32_t* esp72;
    int32_t* esp73;
    int32_t* esp74;
    int32_t* esp75;
    int32_t* esp76;
    int32_t* esp77;
    int32_t ecx78;
    int32_t* esp79;
    int32_t* esp80;
    int32_t* esp81;
    int32_t* esp82;
    struct s7* esp83;
    struct s8* esp84;
    int32_t eax85;
    int32_t eax86;
    int32_t* esp87;
    uint32_t edx88;
    int32_t ecx89;
    uint32_t ecx90;
    struct s9* esp91;
    signed char* tmp32_92;
    int32_t* esp93;
    int32_t ecx94;
    struct s9* esp95;
    int32_t* esp96;
    struct s9* esp97;
    int32_t* esp98;
    struct s9* esp99;
    int32_t* esp100;
    struct s9* esp101;
    int32_t* esp102;
    struct s9* esp103;
    int32_t* esp104;
    struct s9* esp105;
    struct s5* edi106;
    struct s6* esp107;
    struct s6* esp108;
    struct s10* edx109;
    unsigned char dh110;
    struct s11* edi111;
    int1_t zf112;
    struct s6* esp113;
    struct s6* esp114;
    struct s6* esp115;
    struct s6* esp116;
    struct s6* esp117;
    void** esp118;
    uint64_t v119;
    void* edi120;
    unsigned char dl121;
    unsigned char dh122;
    void* esp123;
    unsigned char dh124;
    int1_t cf125;
    unsigned char dh126;

    esp2 = reinterpret_cast<struct s1**>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v3) + 1) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal4) {
        esi5 = reinterpret_cast<struct s1*>(&esi6->f1);
        ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 + eax7);
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(*eax23));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<uint32_t>(eax26));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) + dh27);
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<uint32_t>(eax26));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
        __asm__("aad 0x4");
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        ecx = *reinterpret_cast<struct s0**>(&v3);
        esp2 = reinterpret_cast<struct s1**>(reinterpret_cast<uint32_t>(esp2) - 1 + 4);
        eax28 = &eax26->f70001;
        *eax28 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<unsigned char*>(&eax28));
    }
    *eax28 = reinterpret_cast<unsigned char>(*eax28 + dl29);
    *eax28 = reinterpret_cast<unsigned char>(*eax28 + *reinterpret_cast<unsigned char*>(&eax28));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<uint32_t>(eax28)) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) + reinterpret_cast<uint32_t>(eax28)) + *reinterpret_cast<unsigned char*>(&eax28));
    tmp8_30 = reinterpret_cast<unsigned char>(*edi31 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    cf32 = reinterpret_cast<uint1_t>(tmp8_30 < *edi33);
    *edi34 = tmp8_30;
    zf35 = reinterpret_cast<uint1_t>(*edi36 == 0);
    sf37 = *edi38 < 0;
    of39 = __intrinsic();
    below_or_equal40 = reinterpret_cast<uint1_t>(cf32 | zf35);
    if (!zf35) {
        __asm__("das ");
        __asm__("insd ");
        if (zf35) {
            goto addr_80480bc_7;
        }
        --esp2;
        if (!cf32) 
            goto addr_80480be_9; else 
            goto addr_804805d_10;
    }
    addr_80480b8_11:
    if (!cf32) {
        addr_80480e8_12:
        if (of39) {
            addr_8048157_13:
            ecx->f0 = reinterpret_cast<unsigned char>(ecx->f0 & dh41);
            goto addr_8048158_14;
        } else {
            __asm__("popad ");
            if (!sf37) {
                addr_804810e_16:
                if (of39) {
                    addr_8048186_17:
                    if (cf32) {
                        goto addr_80481fd_19;
                    }
                } else {
                    if (zf35) {
                        addr_8048133_21:
                        if (!cf32) {
                            addr_80481a4_22:
                            zf35 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(ebp42) + 1 == 0);
                            if (cf32) {
                                addr_8048219_23:
                                __asm__("int 0x80");
                                if (reinterpret_cast<int32_t>(eax28) >= reinterpret_cast<int32_t>(0)) {
                                    esi43 = reinterpret_cast<struct s5*>(0x8048559);
                                    edx44 = 0;
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx44) + 1) = 64;
                                    esp45 = reinterpret_cast<struct s6*>(esp2 - 1);
                                    esp45->f0 = reinterpret_cast<unsigned char*>(3);
                                    esp2 = &esp45->f4;
                                    __asm__("int 0x80");
                                    ecx46 = reinterpret_cast<void*>(3);
                                    if (1) {
                                        do {
                                            *reinterpret_cast<signed char*>(&eax47) = 32;
                                            edi48 = reinterpret_cast<signed char*>(0x804851c);
                                            do {
                                                if (!ecx46) 
                                                    goto addr_804847f_27;
                                                ecx46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx46) - 1);
                                                *edi48 = esi43->f0;
                                                ++edi48;
                                                esi43 = reinterpret_cast<struct s5*>(&esi43->f1);
                                            } while (32 != esi43->f0);
                                            *edi48 = 0;
                                            esi49 = &esi43->f1;
                                            ecx50 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ecx46) - 1);
                                            edi51 = reinterpret_cast<signed char*>(0x804853a);
                                            do {
                                                if (!ecx50) {
                                                    esp52 = reinterpret_cast<struct s6*>(esp2 - 1);
                                                    esp52->f0 = reinterpret_cast<unsigned char*>(1);
                                                    eax47 = reinterpret_cast<unsigned char*>(1);
                                                    esp2 = &esp52->f4;
                                                    __asm__("int 0x80");
                                                }
                                                --ecx50;
                                                *edi51 = *esi49;
                                                ++edi51;
                                                ++esi49;
                                            } while (*reinterpret_cast<signed char*>(&eax47) != *esi49);
                                            *edi51 = 0;
                                            esp53 = reinterpret_cast<struct s6*>(esp2 - 1);
                                            esp53->f0 = ecx50;
                                            esp54 = reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(esp53) - 4);
                                            *esp54 = esi49;
                                            esp55 = reinterpret_cast<int32_t*>(esp54 - 1);
                                            *esp55 = 99;
                                            __asm__("int 0x80");
                                            esp56 = esp55 + 1 - 1;
                                            *esp56 = 0x80482ad;
                                            fun_80484b9(0x80484d5);
                                            esp57 = esp56 + 1 - 1;
                                            *esp57 = edx44;
                                            esp58 = esp57 - 1;
                                            *esp58 = 1;
                                            esp59 = esp58 + 1 - 1;
                                            *esp59 = 4;
                                            __asm__("int 0x80");
                                            esp60 = esp59 + 1 - 1;
                                            *esp60 = 0x80482d5;
                                            fun_8048491(0x804851c);
                                            esp61 = esp60 + 1 + 1 - 1;
                                            *esp61 = 30;
                                            ecx62 = 30;
                                            cl63 = reinterpret_cast<signed char>(30 - *reinterpret_cast<signed char*>(&g804851b));
                                            *reinterpret_cast<signed char*>(&ecx62) = reinterpret_cast<signed char>(static_cast<int32_t>(cl63));
                                            esp64 = esp61 + 1 - 1;
                                            *esp64 = 0x80482eb;
                                            fun_80484c9(ecx62);
                                            esp65 = esp64 + 1 - 1;
                                            *esp65 = 1;
                                            esp66 = esp65 + 1 - 1;
                                            *esp66 = 4;
                                            __asm__("int 0x80");
                                            esp67 = esp66 + 1 - 1;
                                            *esp67 = 1;
                                            esp68 = esp67 + 1 - 1;
                                            *esp68 = 4;
                                            __asm__("int 0x80");
                                            esp69 = esp68 + 1 - 1;
                                            *esp69 = 0x8048330;
                                            fun_8048491(0x8048511);
                                            ecx70 = 10;
                                            *reinterpret_cast<signed char*>(&ecx70) = reinterpret_cast<signed char>(10 - *reinterpret_cast<signed char*>(&g804851b));
                                            esp71 = esp69 + 1 - 1;
                                            *esp71 = 0x8048345;
                                            fun_80484c9(ecx70);
                                            esp72 = esp71 + 1 - 1;
                                            *esp72 = 1;
                                            esp73 = esp72 + 1 - 1;
                                            *esp73 = 4;
                                            __asm__("int 0x80");
                                            esp74 = esp73 + 1 - 1;
                                            *esp74 = 1;
                                            esp75 = esp74 + 1 - 1;
                                            *esp75 = 4;
                                            __asm__("int 0x80");
                                            esp76 = esp75 + 1 - 1;
                                            *esp76 = 0x8048384;
                                            fun_8048491(0x8048511);
                                            esp77 = esp76 + 1 - 1;
                                            *esp77 = 10;
                                            ecx78 = 10;
                                            *reinterpret_cast<signed char*>(&ecx78) = reinterpret_cast<signed char>(10 - *reinterpret_cast<signed char*>(&g804851b));
                                            esp79 = esp77 + 1 - 1;
                                            *esp79 = 0x8048397;
                                            fun_80484c9(ecx78);
                                            esp80 = esp79 + 1 - 1;
                                            *esp80 = 1;
                                            esp81 = esp80 + 1 - 1;
                                            *esp81 = 4;
                                            __asm__("int 0x80");
                                            esp82 = esp81 + 1 - 1;
                                            *esp82 = 1;
                                            esp83 = reinterpret_cast<struct s7*>(esp82 + 1 - 1);
                                            esp83->f0 = 4;
                                            esp84 = reinterpret_cast<struct s8*>(&esp83->f4);
                                            __asm__("int 0x80");
                                            eax85 = g80484dd;
                                            if (eax85) {
                                                eax86 = eax85 - g80484e5;
                                                esp87 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp84) - 4);
                                                *esp87 = 100;
                                                edx88 = eax86 * 100 % reinterpret_cast<uint32_t>(g80484dd);
                                                ecx89 = g80484dd;
                                                ecx90 = reinterpret_cast<uint32_t>(ecx89 >> 1);
                                                if (edx88 >= ecx90) {
                                                }
                                                esp91 = reinterpret_cast<struct s9*>(esp87 + 1 - 1);
                                                esp91->f0 = 0x8048402;
                                                fun_8048491(ecx90);
                                                esp84 = reinterpret_cast<struct s8*>(&esp91->f4);
                                                tmp32_92 = reinterpret_cast<signed char*>(0x8048511 + g804851b);
                                                *tmp32_92 = 37;
                                            } else {
                                                g804851b = 1;
                                                g8048511 = 0x202d;
                                            }
                                            esp93 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp84) - 4);
                                            *esp93 = 4;
                                            ecx94 = 4;
                                            *reinterpret_cast<signed char*>(&ecx94) = reinterpret_cast<signed char>(4 - *reinterpret_cast<signed char*>(&g804851b));
                                            esp95 = reinterpret_cast<struct s9*>(esp93 + 1 - 1);
                                            esp95->f0 = 0x804841e;
                                            fun_80484c9(ecx94);
                                            esp96 = reinterpret_cast<int32_t*>(&esp95->f4 - 1);
                                            *esp96 = 1;
                                            esp97 = reinterpret_cast<struct s9*>(esp96 + 1 - 1);
                                            esp97->f0 = 4;
                                            __asm__("int 0x80");
                                            esp98 = reinterpret_cast<int32_t*>(&esp97->f4 - 1);
                                            *esp98 = 1;
                                            esp99 = reinterpret_cast<struct s9*>(esp98 + 1 - 1);
                                            esp99->f0 = 4;
                                            __asm__("int 0x80");
                                            esp100 = reinterpret_cast<int32_t*>(&esp99->f4 - 1);
                                            *esp100 = 1;
                                            esp101 = reinterpret_cast<struct s9*>(esp100 + 1 - 1);
                                            esp101->f0 = 1;
                                            esp102 = reinterpret_cast<int32_t*>(&esp101->f4 - 1);
                                            *esp102 = 4;
                                            __asm__("int 0x80");
                                            esp103 = reinterpret_cast<struct s9*>(esp102 + 1 - 1);
                                            esp103->f0 = 0x804845e;
                                            fun_80484b9(0x804851c);
                                            g804853b = 10;
                                            edx44 = 2;
                                            esp104 = reinterpret_cast<int32_t*>(&esp103->f4 - 1);
                                            *esp104 = 1;
                                            esp105 = reinterpret_cast<struct s9*>(esp104 + 1 - 1);
                                            esp105->f0 = 4;
                                            __asm__("int 0x80");
                                            edi106 = reinterpret_cast<struct s5*>(0x804855c);
                                            ecx46 = reinterpret_cast<void*>(0);
                                            esp2 = reinterpret_cast<struct s1**>(&esp105->f4 + 1 + 1);
                                            do {
                                                if (!ecx46) 
                                                    break;
                                                ecx46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx46) - 1);
                                                edi106 = reinterpret_cast<struct s5*>(&edi106->f1);
                                            } while (edi106->f0 != 10);
                                            esi43 = edi106;
                                        } while (ecx46);
                                        goto addr_804847f_27;
                                    } else {
                                        esp107 = reinterpret_cast<struct s6*>(esp2 - 1);
                                        esp107->f0 = reinterpret_cast<unsigned char*>(23);
                                        esp2 = &esp107->f4;
                                    }
                                } else {
                                    esp108 = reinterpret_cast<struct s6*>(esp2 - 1);
                                    esp108->f0 = reinterpret_cast<unsigned char*>(30);
                                    esp2 = &esp108->f4;
                                }
                            } else {
                                __asm__("outsd ");
                                if (cf32) {
                                    addr_80481e4_52:
                                    goto addr_80481e6_53;
                                } else {
                                    edx109->f65 = reinterpret_cast<unsigned char>(edx109->f65 & dh110);
                                    goto addr_80481ad_55;
                                }
                            }
                        } else {
                            if (!zf35) {
                                addr_80481ad_55:
                                __asm__("popad ");
                                goto addr_80481b5_57;
                            } else {
                                goto addr_8048140_59;
                            }
                        }
                    } else {
                        addr_8048113_60:
                        if (below_or_equal40) {
                            addr_804817a_61:
                            goto addr_804817b_62;
                        } else {
                            addr_8048115_63:
                            if (cf32) {
                                if (cf32) {
                                    addr_80481c6_65:
                                    if (!zf35) {
                                        addr_80481fd_19:
                                        goto addr_8048201_66;
                                    } else {
                                        if (esi5->f2 != 0x706c6568) {
                                            addr_80481e1_68:
                                            zf35 = reinterpret_cast<uint1_t>(esi5->f2 == 0x73726576);
                                            goto addr_80481e4_52;
                                        }
                                    }
                                } else {
                                    g2c0804e2 = reinterpret_cast<unsigned char>(g2c0804e2 & *reinterpret_cast<unsigned char*>(&eax28));
                                    goto addr_804818d_71;
                                }
                            } else {
                                ebp42 = reinterpret_cast<struct s4*>(edi111->f6e * 0x666e6920);
                                zf35 = __undefined();
                                __asm__("outsd ");
                                if (__intrinsic()) {
                                    addr_804818e_73:
                                    __asm__("outsb ");
                                    esi5->f6f = reinterpret_cast<unsigned char>(esi5->f6f & 0xff);
                                    if (!esi5->f6f) {
                                        addr_80481b5_57:
                                        __asm__("insb ");
                                        esi5 = *esp2;
                                        ++esp2;
                                        if (!esi5) 
                                            goto addr_80481fd_19; else 
                                            goto addr_80481c2_74;
                                    } else {
                                        __asm__("outsd ");
                                        if (0) 
                                            goto addr_80481fd_19;
                                        __asm__("outsb ");
                                        edi111->f0 = reinterpret_cast<unsigned char>(edi111->f0 & 0xff);
                                        cf32 = 0;
                                        zf112 = edi111->f0 == 0;
                                        if (zf112) 
                                            goto addr_8048201_66; else 
                                            goto addr_804819e_77;
                                    }
                                } else {
                                    addr_8048121_78:
                                    __asm__("popad ");
                                    if (zf35) {
                                        addr_804818d_71:
                                        goto addr_804818e_73;
                                    } else {
                                        __asm__("outsd ");
                                        __asm__("outsb ");
                                        ecx->f6e = 0;
                                        ebp42->f78 = 0;
                                        esi5 = reinterpret_cast<struct s1*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx109) + reinterpret_cast<uint32_t>(ecx) + 100) * 0x61282066);
                                        cf32 = __intrinsic();
                                        zf35 = __undefined();
                                        goto addr_8048133_21;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                addr_80480ee_80:
                if (zf35) {
                    addr_8048158_14:
                    ebp42 = reinterpret_cast<struct s4*>(g636f6c62 * 0x6b);
                    if (!__intrinsic()) {
                        addr_8048182_81:
                        *reinterpret_cast<unsigned char*>(&eax28) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax28) | ebp42->f72);
                        cf32 = 0;
                        zf35 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax28) == 0);
                        goto addr_8048186_17;
                    } else {
                        *eax28 = 0;
                        *eax28 = 0;
                        ebp42->f73 = reinterpret_cast<unsigned char>(ebp42->f73 & *reinterpret_cast<unsigned char*>(&edx109));
                        ecx->f76 = reinterpret_cast<unsigned char>(ecx->f76 & *reinterpret_cast<unsigned char*>(&eax28));
                        __asm__("popad ");
                        ebp42 = reinterpret_cast<struct s4*>(ecx->f62 * 0x5520656c);
                        if (!__intrinsic()) {
                            goto addr_80481e1_68;
                        } else {
                            eax28 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax28) & 0x756f4d20);
                            zf35 = reinterpret_cast<uint1_t>(eax28 == 0);
                            goto addr_804817a_61;
                        }
                    }
                } else {
                    addr_80480f0_85:
                    goto addr_80480f2_86;
                }
            }
        }
    } else {
        addr_80480bc_7:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
        goto addr_80480be_9;
    }
    addr_8048477_87:
    esp113 = reinterpret_cast<struct s6*>(esp2 - 1);
    esp113->f0 = reinterpret_cast<unsigned char*>(2);
    esp114 = reinterpret_cast<struct s6*>(&esp113->f4 - 1);
    esp114->f0 = reinterpret_cast<unsigned char*>(4);
    esp2 = &esp114->f4;
    __asm__("int 0x80");
    goto addr_804847f_27;
    addr_8048201_66:
    goto addr_8048203_88;
    addr_80481c2_74:
    zf35 = reinterpret_cast<uint1_t>(esi5->f0 == 0x2d2d);
    goto addr_80481c6_65;
    addr_804819e_77:
    __asm__("das ");
    __asm__("insd ");
    if (zf112) {
        addr_8048203_88:
        esp115 = reinterpret_cast<struct s6*>(esp2 - 1);
        esp115->f0 = reinterpret_cast<unsigned char*>(1);
        esp116 = reinterpret_cast<struct s6*>(&esp115->f4 - 1);
        esp116->f0 = reinterpret_cast<unsigned char*>(4);
        __asm__("int 0x80");
        esp117 = reinterpret_cast<struct s6*>(&esp116->f4 - 1);
        esp117->f0 = reinterpret_cast<unsigned char*>(5);
        eax28 = reinterpret_cast<unsigned char*>(5);
        esp2 = &esp117->f4;
        goto addr_8048219_23;
    } else {
        goto addr_80481a4_22;
    }
    addr_80480be_9:
    ecx->f6c = 0;
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi5) + 0x69) = 0;
    cf32 = 0;
    zf35 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi5) + 0x69) == 0);
    of39 = 0;
    below_or_equal40 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf35));
    __asm__("insb ");
    if (1) {
        addr_8048143_90:
        esi5 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(esi5) + 1);
    } else {
        if (1) {
            addr_8048140_59:
            ecx = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx) ^ edx109->f0);
            goto addr_8048143_90;
        } else {
            __asm__("insd ");
            if (1) 
                goto addr_80480f0_85;
            __asm__("popa ");
            if (zf35) 
                goto addr_80480d9_94;
        }
    }
    __asm__("insd ");
    *eax28 = 0;
    *eax28 = 0;
    *eax28 = 0;
    *eax28 = 0;
    *eax28 = 0;
    goto addr_8048157_13;
    addr_80480d9_94:
    if (zf35) {
        addr_8048109_96:
        goto addr_804810e_16;
    } else {
        *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | edx109->f0);
        g6c65682d = g6c65682d | reinterpret_cast<uint32_t>(ebp42);
        zf35 = reinterpret_cast<uint1_t>(g6c65682d == 0);
        if (0) 
            goto addr_80480ee_80;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(ebp42) * 2 + 0x73) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(ebp42) * 2 + 0x73) | reinterpret_cast<uint32_t>(esp2);
        cf32 = 0;
        zf35 = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(ebp42) * 2 + 0x73) == 0);
        sf37 = __intrinsic();
        of39 = 0;
        below_or_equal40 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf35));
        goto addr_80480e8_12;
    }
    addr_804805d_10:
    g2c0804d0 = reinterpret_cast<unsigned char>(g2c0804d0 & 0x81);
    esp118 = reinterpret_cast<void**>(esp2 - 1 - 1);
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v119) + 4) = esp118;
    edi111 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(edi120) - 1);
    esi5 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(esi5) - 1);
    *reinterpret_cast<int32_t*>(&v119) = 0x2c080481;
    g2c0804c7 = reinterpret_cast<unsigned char>(g2c0804c7 & 0x81);
    ecx = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ecx) - 1 - 1);
    ebp42 = *reinterpret_cast<struct s4**>(reinterpret_cast<int32_t>(&v119) + 3);
    esp2 = reinterpret_cast<struct s1**>(reinterpret_cast<uint32_t>(esp118 - 1 + 1) - 1 + 4);
    *reinterpret_cast<unsigned char*>(&edx109) = reinterpret_cast<unsigned char>(dl121 | *reinterpret_cast<unsigned char*>(&g2c0804e9));
    __asm__("outsd ");
    if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx109) == 0)))) {
        addr_80480a0_99:
        edi111->f6e = 0;
        edi111->f68 = reinterpret_cast<unsigned char>(edi111->f68 & dh122);
        esp123 = reinterpret_cast<void*>(g2c0804e9 * 0x63616520);
        esp2 = reinterpret_cast<struct s1**>(reinterpret_cast<int32_t>(esp123) - 4);
        *esp2 = reinterpret_cast<struct s1*>(0x4c494620);
        ebp42 = reinterpret_cast<struct s4*>(reinterpret_cast<uint32_t>(ebp42) + 1);
        edx109->f65 = reinterpret_cast<unsigned char>(edx109->f65 & dh124);
        cf32 = 0;
        zf35 = reinterpret_cast<uint1_t>(edx109->f65 == 0);
        sf37 = __intrinsic();
        of39 = 0;
        below_or_equal40 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf35));
        if (1) 
            goto addr_8048121_78; else 
            goto addr_80480b8_11;
    } else {
        ebp42 = reinterpret_cast<struct s4*>(esi5->f66 * 0x616d726f);
        if (__undefined()) {
            addr_80480f2_86:
            ecx->f6e = 0;
            ebp42->f78 = 0;
            esi5 = reinterpret_cast<struct s1*>(*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edx109) + reinterpret_cast<uint32_t>(ecx) + 9) * 0x65762d2d);
            cf125 = __intrinsic();
            zf35 = __undefined();
            goto addr_8048105_101;
        } else {
            __asm__("outsd ");
            __asm__("outsb ");
            ecx->f62 = 0;
            cf125 = 0;
            zf35 = reinterpret_cast<uint1_t>(ecx->f62 == 0);
            __asm__("outsd ");
            if (!zf35) {
                addr_8048105_101:
                if (cf125) {
                    addr_804817b_62:
                    __asm__("outsb ");
                    if (zf35) {
                        addr_80481e6_53:
                        if (!zf35) {
                            addr_804847f_27:
                            *reinterpret_cast<unsigned char**>(esp2 - 1) = reinterpret_cast<unsigned char*>(1);
                            __asm__("int 0x80");
                        } else {
                            goto addr_8048477_87;
                        }
                    } else {
                        edi111->f6e = reinterpret_cast<unsigned char>(edi111->f6e & 0xff);
                        goto addr_8048182_81;
                    }
                } else {
                    ebp42 = reinterpret_cast<struct s4*>(edi111->f6e * 0x74756f09);
                    cf32 = __intrinsic();
                    of39 = __intrinsic();
                    zf35 = __undefined();
                    below_or_equal40 = reinterpret_cast<uint1_t>(cf32 | zf35);
                    goto addr_8048109_96;
                }
            } else {
                (eax28 + reinterpret_cast<uint32_t>(ebp42) * 2)[0x65] = reinterpret_cast<unsigned char>((eax28 + reinterpret_cast<uint32_t>(ebp42) * 2)[0x65] & dh126);
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi5) + 0x69) = 0;
                cf32 = 0;
                zf35 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi5) + 0x69) == 0);
                below_or_equal40 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf35));
                __asm__("insb ");
                if (1) 
                    goto addr_8048115_63;
                if (!1) 
                    goto addr_804809e_108;
            }
        }
    }
    goto addr_8048113_60;
    addr_804809e_108:
    __asm__("insd ");
    goto addr_80480a0_99;
}

void fun_8048497() {
    __asm__("pushad ");
}
