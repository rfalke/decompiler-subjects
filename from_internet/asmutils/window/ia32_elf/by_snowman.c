
struct s0 {
    void* f0;
    signed char[109] pad110;
    unsigned char f6e;
};

int32_t g8048347;

signed char fun_80482f0(struct s0* ecx);

struct s1 {
    int16_t f0;
    signed char f1;
    int16_t f2;
};

struct s2 {
    signed char[513] pad513;
    void* f201;
};

struct s3 {
    signed char f0;
    int16_t f1;
};

struct s4 {
    signed char[1] pad1;
    signed char f1;
};

struct s0* fun_80482c6();

uint16_t g804833f;

struct s0* g8048343;

uint32_t g805bbdb;

uint32_t g805bbd3;

uint32_t g805bbcf;

signed char g805bbe5;

signed char g805bbe6;

struct s0* fun_80481fe() {
    int32_t ecx1;
    struct s1* edi2;
    struct s2* ecx3;
    struct s2* v4;
    int16_t* edi5;
    int32_t ecx6;
    signed char* edi7;
    struct s3* edi8;
    int32_t ecx9;
    signed char* edi10;
    signed char* edi11;
    struct s4* edi12;
    signed char al13;
    int32_t ecx14;
    signed char* edi15;
    struct s0* eax16;
    struct s0* eax17;

    __asm__("pushad ");
    __asm__("int 0x80");
    g8048347 = 5;
    if (0) {
        __asm__("int 0x80");
        __asm__("int 0x80");
        fun_80482f0(0x201);
        ecx1 = 64;
        while (*reinterpret_cast<int16_t*>(&ecx1)) {
            *reinterpret_cast<int16_t*>(&ecx1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx1) - 1);
            edi2->f0 = 0x1db;
            edi2 = reinterpret_cast<struct s1*>(&edi2->f1);
        }
        ecx3 = reinterpret_cast<struct s2*>(10);
        do {
            v4 = ecx3;
            fun_80482f0(&ecx3->f201);
            edi2->f0 = 0xdd;
            edi5 = reinterpret_cast<int16_t*>(&edi2->f1);
            ecx6 = 62;
            while (*reinterpret_cast<int16_t*>(&ecx6)) {
                *reinterpret_cast<int16_t*>(&ecx6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx6) - 1);
                *edi5 = 32;
                ++edi5;
            }
            *edi5 = 0xde;
            edi7 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi5 + 1) + 1);
            *edi7 = 3;
            edi8 = reinterpret_cast<struct s3*>(edi7 + 1 + 1);
            edi8->f0 = 3;
            edi2 = reinterpret_cast<struct s1*>(&edi8->f1);
            ecx3 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(v4) - 1);
        } while (ecx3);
        fun_80482f0(0x20c);
        ecx9 = 64;
        while (*reinterpret_cast<int16_t*>(&ecx9)) {
            *reinterpret_cast<int16_t*>(&ecx9) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx9) - 1);
            edi2->f0 = 0x1db;
            edi2 = reinterpret_cast<struct s1*>(&edi2->f1);
        }
        edi10 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi2) + 1);
        *edi10 = 3;
        edi11 = edi10 + 1 + 1;
        *edi11 = 3;
        edi12 = reinterpret_cast<struct s4*>(edi11 + 1);
        al13 = fun_80482f0(0x40d);
        ecx14 = 64;
        do {
            edi15 = &edi12->f1;
            *edi15 = al13;
            edi12 = reinterpret_cast<struct s4*>(edi15 + 1);
            --ecx14;
        } while (ecx14);
        fun_80482c6();
        fun_80482c6();
        eax16 = fun_80482c6();
        return eax16;
    } else {
        __asm__("int 0x80");
        eax17 = reinterpret_cast<struct s0*>(static_cast<uint32_t>(g804833f));
        *reinterpret_cast<int16_t*>(&eax17) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&eax17) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax17) + 1));
        g8048343 = eax17;
        __asm__("int 0x80");
        __asm__("int 0x80");
        __asm__("int 0x80");
        g805bbdb = g805bbdb & 0xfffffff4;
        g805bbd3 = g805bbd3 | 5;
        g805bbcf = g805bbcf & 0xfffffacf;
        g805bbe5 = 0;
        g805bbe6 = 1;
        __asm__("int 0x80");
        __asm__("popad ");
        return 54;
    }
}

struct s5 {
    int16_t f0;
    signed char f1;
    int16_t f2;
};

struct s6 {
    signed char[513] pad513;
    void* f201;
};

struct s7 {
    signed char f0;
    int16_t f1;
};

struct s8 {
    signed char[1] pad1;
    signed char f1;
};

struct s0* fun_8048160() {
    int32_t ecx1;
    struct s5* edi2;
    struct s6* ecx3;
    struct s6* v4;
    int16_t* edi5;
    int32_t ecx6;
    signed char* edi7;
    struct s7* edi8;
    int32_t ecx9;
    signed char* edi10;
    signed char* edi11;
    struct s8* edi12;
    signed char al13;
    int32_t ecx14;
    signed char* edi15;
    struct s0* eax16;

    fun_80482f0(0x201);
    ecx1 = 64;
    while (*reinterpret_cast<int16_t*>(&ecx1)) {
        *reinterpret_cast<int16_t*>(&ecx1) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx1) - 1);
        edi2->f0 = 0x1db;
        edi2 = reinterpret_cast<struct s5*>(&edi2->f1);
    }
    ecx3 = reinterpret_cast<struct s6*>(10);
    do {
        v4 = ecx3;
        fun_80482f0(&ecx3->f201);
        edi2->f0 = 0xdd;
        edi5 = reinterpret_cast<int16_t*>(&edi2->f1);
        ecx6 = 62;
        while (*reinterpret_cast<int16_t*>(&ecx6)) {
            *reinterpret_cast<int16_t*>(&ecx6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx6) - 1);
            *edi5 = 32;
            ++edi5;
        }
        *edi5 = 0xde;
        edi7 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi5 + 1) + 1);
        *edi7 = 3;
        edi8 = reinterpret_cast<struct s7*>(edi7 + 1 + 1);
        edi8->f0 = 3;
        edi2 = reinterpret_cast<struct s5*>(&edi8->f1);
        ecx3 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(v4) - 1);
    } while (ecx3);
    fun_80482f0(0x20c);
    ecx9 = 64;
    while (*reinterpret_cast<int16_t*>(&ecx9)) {
        *reinterpret_cast<int16_t*>(&ecx9) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx9) - 1);
        edi2->f0 = 0x1db;
        edi2 = reinterpret_cast<struct s5*>(&edi2->f1);
    }
    edi10 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi2) + 1);
    *edi10 = 3;
    edi11 = edi10 + 1 + 1;
    *edi11 = 3;
    edi12 = reinterpret_cast<struct s8*>(edi11 + 1);
    al13 = fun_80482f0(0x40d);
    ecx14 = 64;
    do {
        edi15 = &edi12->f1;
        *edi15 = al13;
        edi12 = reinterpret_cast<struct s8*>(edi15 + 1);
        --ecx14;
    } while (ecx14);
    fun_80482c6();
    fun_80482c6();
    eax16 = fun_80482c6();
    return eax16;
}

signed char fun_8048326(struct s0* ecx);

int32_t fun_8048318(struct s0* ecx) {
    __asm__("pushad ");
    fun_8048326(ecx);
    __asm__("int 0x80");
    __asm__("popad ");
    return 0xb5;
}

int32_t fun_80482a7(struct s0* ecx) {
    __asm__("pushad ");
    __asm__("int 0x80");
    __asm__("int 0x80");
    __asm__("popad ");
    return 6;
}

signed char fun_80482f0(struct s0* ecx) {
    int32_t eax2;
    int32_t eax3;

    eax2 = eax3;
    return *reinterpret_cast<signed char*>(&eax2);
}

struct s0* fun_80482c6() {
    struct s0* eax1;
    int16_t* edi2;

    __asm__("pushad ");
    eax1 = reinterpret_cast<struct s0*>(0);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = 7;
    while (!1) {
        if (0) {
            __asm__("lodsb ");
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = 0;
        } else {
            if (1) {
                *edi2 = *reinterpret_cast<int16_t*>(&eax1);
                ++edi2;
            } else {
                __asm__("lodsw ");
                fun_80482f0(eax1);
                eax1 = eax1;
            }
        }
    }
    __asm__("popad ");
    return eax1;
}

signed char fun_8048326(struct s0* ecx) {
    signed char al2;

    al2 = fun_80482f0(ecx);
    return al2;
}

int32_t fun_804830a(struct s0* ecx) {
    __asm__("pushad ");
    fun_8048326(ecx);
    __asm__("int 0x80");
    __asm__("popad ");
    return 0xb4;
}

struct s9 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s10 {
    unsigned char f0;
    signed char[68] pad69;
    uint32_t f45;
    signed char[28] pad101;
    unsigned char f65;
};

struct s11 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s12 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s13 {
    signed char[105] pad105;
    signed char f69;
};

struct s14 {
    signed char[2] pad2;
    unsigned char f2;
};

struct s15 {
    signed char[2] pad2;
    unsigned char f2;
};

struct s16 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s17 {
    signed char[116] pad116;
    unsigned char f74;
};

struct s18 {
    signed char[116] pad116;
    signed char f74;
};

signed char g804834b;

struct s19 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s20 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s21 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s22 {
    signed char[101] pad101;
    unsigned char f65;
};

void fun_8048000(struct s0* ecx) {
    int1_t less_or_equal2;
    struct s9* esi3;
    void* esi4;
    void* eax5;
    int32_t* ebx6;
    int32_t* ebx7;
    int32_t eax8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    void** eax21;
    signed char al22;
    signed char* eax23;
    void** eax24;
    struct s10* eax25;
    signed char* edi26;
    signed char* edi27;
    signed char dl28;
    unsigned char* edi29;
    signed char* edi30;
    unsigned char tmp8_31;
    uint1_t cf32;
    unsigned char* edx33;
    signed char* edx34;
    struct s11* edi35;
    struct s12* edi36;
    unsigned char dh37;
    uint1_t zf38;
    struct s13* edi39;
    uint1_t below_or_equal40;
    struct s0* edx41;
    int16_t* edi42;
    struct s14* ebp43;
    struct s15* ebp44;
    unsigned char bl45;
    struct s16* ebx46;
    struct s17* ebx47;
    unsigned char dh48;
    struct s18* ebx49;
    uint32_t tmp32_50;
    int1_t cf51;
    int1_t zf52;
    unsigned char* edx53;
    signed char* edx54;
    signed char al55;
    struct s19* ebx56;
    struct s20* ebx57;
    struct s21* ebx58;
    struct s22* ebx59;
    unsigned char* edx60;
    signed char* edx61;
    uint32_t tmp32_62;
    int32_t* ebx63;
    int32_t ebx64;
    int1_t cf65;
    uint32_t* ebx66;
    uint32_t* ebx67;

    if (less_or_equal2) {
        esi3 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(esi4) + 1);
        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<int32_t>(eax5));
        *ebx6 = *ebx7 + eax8;
        *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
        *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
        *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
        *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
        *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(al22 + *eax23);
        eax24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax21) + reinterpret_cast<int32_t>(*eax21));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        __asm__("fld qword [eax+0x2c0804]");
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24))));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        __asm__("aas ");
        eax25 = reinterpret_cast<struct s10*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<unsigned char>(*eax24));
        *edi26 = reinterpret_cast<signed char>(*edi27 + dl28);
        *edi29 = reinterpret_cast<unsigned char>(*edi30 + *reinterpret_cast<unsigned char*>(&eax25));
        eax25->f0 = reinterpret_cast<unsigned char>(eax25->f0 + *reinterpret_cast<unsigned char*>(&eax25));
    }
    tmp8_31 = reinterpret_cast<unsigned char>(eax25->f0 + *reinterpret_cast<unsigned char*>(&eax25));
    cf32 = reinterpret_cast<uint1_t>(tmp8_31 < eax25->f0);
    eax25->f0 = tmp8_31;
    eax25->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax25->f0 + *reinterpret_cast<unsigned char*>(&eax25)) + cf32);
    *edx33 = reinterpret_cast<unsigned char>(*edx34 + *reinterpret_cast<unsigned char*>(&eax25));
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(eax25)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx) + reinterpret_cast<uint32_t>(eax25)) + reinterpret_cast<uint32_t>(ecx);
    edi35->f69 = reinterpret_cast<unsigned char>(edi36->f69 & dh37);
    zf38 = reinterpret_cast<uint1_t>(edi39->f69 == 0);
    below_or_equal40 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf38));
    __asm__("outsb ");
    __asm__("outsd ");
    if (!below_or_equal40) {
        addr_8048081_4:
        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) & *reinterpret_cast<unsigned char*>(&eax25));
        if (1) {
            addr_80480ee_5:
            goto addr_80480f1_6;
        } else {
            __asm__("insd ");
            goto addr_804808d_8;
        }
    } else {
        if (!below_or_equal40) {
            addr_80480cc_10:
            goto addr_80480cd_11;
        } else {
            if (zf38) {
                addr_80480cd_11:
                if (0) {
                    addr_80480f1_6:
                    fun_804830a(ecx);
                    *reinterpret_cast<int16_t*>(&eax25) = 0x1bb0;
                    ecx = edx41;
                    goto addr_80480fc_13;
                } else {
                    eax25->f0 = reinterpret_cast<unsigned char>(eax25->f0 & *reinterpret_cast<unsigned char*>(&eax25));
                    fun_80481fe();
                    edx41 = g8048343;
                    ecx = reinterpret_cast<struct s0*>(0);
                    goto addr_80480eb_15;
                }
            } else {
                eax25->f65 = 0;
                __asm__("popad ");
                if (0) {
                    addr_804808d_8:
                    ecx->f6e = reinterpret_cast<unsigned char>(ecx->f6e & *reinterpret_cast<unsigned char*>(&ecx));
                    if (1) {
                        addr_80480fc_13:
                        edi42 = reinterpret_cast<int16_t*>(0x804834f);
                    } else {
                        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<uint32_t>(ecx));
                        ebp43->f2 = reinterpret_cast<unsigned char>(ebp44->f2 & bl45);
                        goto addr_8048098_18;
                    }
                } else {
                    __asm__("popad ");
                    __asm__("outsb ");
                    ebx46->f74 = reinterpret_cast<unsigned char>(ebx47->f74 & dh48);
                    __asm__("popad ");
                    if (!ebx49->f74) {
                        addr_80480eb_15:
                        goto addr_80480ee_5;
                    } else {
                        if (1) {
                            addr_8048098_18:
                            eax25 = reinterpret_cast<struct s10*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<unsigned char>(ecx->f0));
                            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
                            __asm__("arpl [ebx+0x20], bp");
                            tmp32_50 = eax25->f45 + reinterpret_cast<int32_t>(esi3);
                            cf51 = tmp32_50 < eax25->f45;
                            eax25->f45 = tmp32_50;
                            zf52 = eax25->f45 == 0;
                            __asm__("outsb ");
                            if (zf52) {
                                addr_804810e_21:
                                fun_8048318(0);
                                goto addr_804811c_22;
                            } else {
                                if (!cf51) {
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) = 0xff;
                                    zf52 = 0;
                                }
                                if (zf52) 
                                    goto addr_804811e_26; else 
                                    goto addr_80480af_27;
                            }
                        } else {
                            *edx53 = reinterpret_cast<unsigned char>(*edx54 + *reinterpret_cast<unsigned char*>(&eax25));
                            eax25 = reinterpret_cast<struct s10*>(reinterpret_cast<uint32_t>(eax25) + 0x5b090118);
                            goto addr_8048081_4;
                        }
                    }
                }
            }
        }
    }
    while (*reinterpret_cast<int16_t*>(&ecx)) {
        *reinterpret_cast<int16_t*>(&ecx) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ecx) - 1);
        *edi42 = *reinterpret_cast<int16_t*>(&eax25);
        ++edi42;
    }
    fun_8048160();
    goto addr_804810e_21;
    addr_804811e_26:
    do {
        addr_804811f_32:
        addr_8048122_33:
        __asm__("int 0x80");
        if (0) 
            goto addr_804811f_32;
        addr_8048132_34:
        al55 = g804834b;
    } while (al55 != 27 && al55 != 13);
    fun_8048318(0);
    fun_80482a7(0);
    addr_80480af_27:
    ebx56->f72 = reinterpret_cast<unsigned char>(ebx57->f72 & 0xff);
    __asm__("popad ");
    if (1) {
        addr_804811d_36:
        goto addr_804811e_26;
    } else {
        ebx58->f65 = reinterpret_cast<unsigned char>(ebx59->f65 & 0xff);
        if (!__intrinsic()) {
            addr_804811c_22:
            goto addr_804811d_36;
        } else {
            __asm__("outsd ");
            __asm__("popad ");
            if (0) 
                goto addr_8048122_33;
            *edx60 = reinterpret_cast<unsigned char>(*edx61 + *reinterpret_cast<unsigned char*>(&eax25));
            *reinterpret_cast<unsigned char*>(&eax25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) | 4);
            tmp32_62 = reinterpret_cast<uint32_t>(*ebx63 + ebx64);
            cf65 = tmp32_62 < *ebx66;
            *ebx67 = tmp32_62;
            if (cf65) 
                goto addr_80480c8_40;
        }
    }
    goto addr_8048132_34;
    addr_80480c8_40:
    __asm__("a16 outsb ");
    esi3->f6f = reinterpret_cast<unsigned char>(esi3->f6f & 0xff);
    goto addr_80480cc_10;
}

void fun_80481e8(int16_t cx) {
    int32_t ebx2;
    unsigned char* edi3;
    uint1_t below_or_equal4;
    signed char* edi5;
    signed char* edx6;
    signed char* edx7;

    __asm__("popad ");
    __asm__("outsb ");
    __asm__("daa ");
    if (!(ebx2 + 1)) 
        goto 0x804820e;
    __asm__("outsd ");
    if (__intrinsic()) 
        goto 0x8048256;
    __asm__("outsb ");
    *edi3 = 0;
    below_or_equal4 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*edi5 == 0)));
    if (below_or_equal4) 
        goto 0x8048227;
    if (below_or_equal4) 
        goto 0x804825d;
    if (1) 
        goto 0x804825d;
    *edx6 = reinterpret_cast<signed char>(*edx7 + *reinterpret_cast<signed char*>(&cx));
}
