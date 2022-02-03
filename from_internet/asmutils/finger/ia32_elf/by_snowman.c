
struct s0 {
    signed char f0;
    signed char[110] pad111;
    unsigned char f6f;
};

struct s0* g8048666;

signed char fun_8048538();

void fun_8048560(signed char* a1);

signed char* fun_804851a() {
    struct s0* esi1;
    signed char* edi2;

    esi1 = g8048666;
    fun_8048538();
    if (esi1) {
        fun_8048560(edi2);
    }
    return edi2;
}

struct s1 {
    signed char[1] pad1;
    signed char f1;
};

struct s2 {
    signed char[2] pad2;
    signed char f2;
};

int32_t fun_80484fe(int32_t ecx) {
    int32_t edx2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    signed char* edi6;
    struct s1* edi7;
    struct s2* edi8;
    int32_t edx9;

    edx2 = eax3 % 10;
    eax4 = eax5 / 10;
    *edi6 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) + 48);
    edi7->f1 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx2) + 48);
    edi8->f2 = 58;
    return edx9;
}

signed char fun_8048538() {
    signed char al1;
    signed char* edi2;
    int32_t edx3;
    int32_t ecx4;
    signed char* esi5;
    signed char* v6;
    signed char al7;
    signed char al8;
    signed char al9;
    signed char al10;

    while (1) {
        __asm__("lodsb ");
        if (al1 == *edi2) {
            edx3 = ecx4;
            --esi5;
            v6 = edi2;
            do {
                if (!ecx4) 
                    break;
                --ecx4;
                ++edi2;
                ++esi5;
            } while (*esi5 == *edi2);
            edi2 = v6;
            if (ecx4) 
                goto addr_804855b_6;
            if (*esi5 == 58) 
                break;
            addr_804855b_6:
            ecx4 = edx3;
        }
        do {
            __asm__("lodsb ");
            if (al7 == 10) 
                break;
        } while (al8);
        goto addr_8048546_10;
    }
    return al9;
    addr_8048546_10:
    return al10;
}

void fun_8048364(int32_t ecx) {
    int32_t eax2;

    while (1) {
        *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) - 0x74) | 60);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2 + 73) = 0;
    }
}

struct s3 {
    signed char[100] pad100;
    unsigned char f64;
    signed char[15] pad116;
    unsigned char f74;
};

int32_t g8048656;

unsigned char g68;

unsigned char g1;

struct s4 {
    signed char[110] pad110;
    unsigned char f6e;
};

struct s5 {
    signed char[32] pad32;
    int32_t f20;
};

struct s6 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s7 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_8048560(signed char* a1) {
    void* esp2;
    struct s3* ecx3;
    signed char al4;
    signed char al5;
    int1_t zf6;
    unsigned char* eax7;
    int1_t cf8;
    int1_t sf9;
    unsigned char dl10;
    int1_t zf11;
    unsigned char dl12;
    int32_t edi13;
    int32_t edi14;
    int32_t ebp15;
    unsigned char dl16;
    int1_t zf17;
    void* edi18;
    int32_t ebp19;
    void* edi20;
    int32_t ebp21;
    int32_t ebp22;
    struct s5* esi23;
    struct s6* esi24;
    struct s7* esi25;
    uint1_t zf26;
    signed char* edi27;
    signed char al28;
    signed char al29;
    signed char al30;

    esp2 = __zero_stack_offset();
    ecx3 = reinterpret_cast<struct s3*>(4);
    do {
        __asm__("lodsb ");
        if (!al4) 
            break;
    } while (al5 != 58 || (ecx3 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(ecx3) - 1), !!ecx3));
    goto addr_8048571_4;
    zf6 = g8048656 == 0;
    if (!zf6) {
        ecx3 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
        __asm__("int 0x80");
    }
    eax7 = reinterpret_cast<unsigned char*>(1);
    __asm__("int 0x80");
    __asm__("das ");
    if (1) {
        addr_8048609_8:
        cf8 = __intrinsic();
        sf9 = __undefined();
        if (!sf9) {
            if (!sf9) {
                if (!cf8) {
                }
            }
        } else {
            g68 = reinterpret_cast<unsigned char>(g68 & dl10);
            __asm__("insb ");
            goto addr_804861a_14;
        }
    } else {
        if (0) {
            addr_80485d9_16:
            g1 = 0;
            g1 = 0;
            g1 = 0;
            zf11 = g1 == 0;
            if (zf11) {
            }
        } else {
            if (0) {
                addr_8048621_19:
                goto addr_8048622_20;
            } else {
                __asm__("outsb ");
                __asm__("das ");
                if (0) {
                    addr_8048624_22:
                    eax7 = reinterpret_cast<unsigned char*>(0);
                    __asm__("outsd ");
                    __asm__("insd ");
                    g68 = reinterpret_cast<unsigned char>(g68 & dl12);
                    __asm__("outsd ");
                    __asm__("outsb ");
                    goto addr_804862f_23;
                } else {
                    __asm__("insd ");
                    __asm__("das ");
                    if (1) {
                        addr_804861a_14:
                        goto addr_804861b_26;
                    } else {
                        __asm__("das ");
                        if (0) {
                            addr_804861b_26:
                            __asm__("insb ");
                            edi13 = edi14 - 1;
                            goto addr_8048621_19;
                        } else {
                            if (1) {
                                addr_804862f_23:
                                __asm__("outsd ");
                                *reinterpret_cast<unsigned char*>(reinterpret_cast<int16_t>(&(*reinterpret_cast<struct s4**>(&edi13))->pad110) + 0x6e) = 0;
                                ecx3->f74 = 0;
                                (eax7 + ebp15 * 2)[0x69] = reinterpret_cast<unsigned char>((eax7 + ebp15 * 2)[0x69] & dl16);
                                cf8 = 0;
                                zf17 = *reinterpret_cast<signed char*>(eax7 + ebp15 * 2 + 0x69) == 0;
                                sf9 = __intrinsic();
                                if (1) {
                                }
                            } else {
                                if (0) {
                                    addr_8048622_20:
                                    goto addr_8048624_22;
                                } else {
                                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi18) + ebp19 * 2 + 0x67) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi20) + ebp21 * 2 + 0x67) + *reinterpret_cast<unsigned char*>(&ecx3));
                                    ebp22 = esi23->f20 * 0x20202020;
                                    esi24->f61 = reinterpret_cast<unsigned char>(esi25->f61 & *reinterpret_cast<unsigned char*>(&ecx3));
                                    __asm__("insd ");
                                    g1 = 0;
                                    g1 = 0;
                                    g1 = 0;
                                    g1 = 0;
                                    g1 = 0;
                                    g1 = 0;
                                    goto addr_80485d9_16;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    addr_80486bc_32:
    g1 = 0;
    g1 = 0;
    g1 = 0;
    g1 = 0;
    ecx3->f64 = reinterpret_cast<unsigned char>(ecx3->f64 & *reinterpret_cast<unsigned char*>(&ecx3));
    __asm__("insb ");
    g1 = 0;
    g1 = 0;
    zf26 = reinterpret_cast<uint1_t>(g1 == 0);
    __asm__("das ");
    __asm__("outsd ");
    ebp15 = *reinterpret_cast<int32_t*>(*reinterpret_cast<int16_t*>(&ebp22) + 58) * 0x6d614e20;
    goto addr_8048609_8;
    if (!zf17) {
    }
    if (0) {
    }
    __asm__("outsd ");
    if (1) 
        goto addr_80486bc_32;
    if (zf17) {
    }
    addr_8048571_4:
    edi27 = a1;
    while (al28 != 58 && al29 != 44) {
        *edi27 = al30;
        ++edi27;
    }
    return;
}

int32_t g804865e;

int32_t g8048662;

struct s8 {
    int32_t f0;
    int32_t f4;
};

void fun_804804c() {
    int32_t* esp1;
    void* ebp2;
    int32_t* esp3;
    int32_t* esp4;
    int32_t* esp5;
    int32_t* esp6;
    int32_t* esp7;
    struct s8* esp8;

    esp1 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp2) + 4 - 4);
    *esp1 = 5;
    __asm__("int 0x80");
    g804865e = *esp1;
    esp3 = esp1 + 1 - 1;
    *esp3 = 12;
    __asm__("int 0x80");
    esp4 = esp3 + 1 - 1;
    *esp4 = 5;
    __asm__("int 0x80");
    g8048662 = *esp4;
    esp5 = esp4 + 1 - 1;
    *esp5 = 0x6c;
    __asm__("int 0x80");
    esp6 = esp5 + 1 - 1;
    *esp6 = 2;
    esp7 = esp6 + 1 - 1;
    *esp7 = 1;
    __asm__("int 0x80");
    g8048666 = reinterpret_cast<struct s0*>(0xc0);
    esp8 = reinterpret_cast<struct s8*>(esp7 + 1 - 1);
    esp8->f0 = 13;
    __asm__("int 0x80");
    goto esp8->f4;
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
    void* tmp8_24;
    uint1_t cf25;

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
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & 0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x88);
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + 0x88);
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(0x90);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x90);
        if (__intrinsic()) {
            addr_804804a_3:
            *ecx = reinterpret_cast<signed char>(*ecx + dh23);
        } else {
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x90);
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x90);
        }
    }
    tmp8_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + 0x90);
    cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_24) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_24;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + 0x90) + cf25);
    goto addr_804804a_3;
}

void fun_804820e() {
    goto 0x8048584;
}

struct s9 {
    signed char f0;
    signed char f1;
};

unsigned char g70;

int32_t g80486aa;

struct s10 {
    signed char f0;
    signed char[2] pad3;
    int32_t f3;
    int32_t f4;
    int16_t f6;
    signed char f7;
    signed char f8;
};

int32_t g804865a;

int32_t g804868a;

struct s11 {
    signed char f0;
    signed char f1;
    signed char[2] pad4;
    int32_t f4;
};

void fun_80480b0(signed char* a1, struct s0* a2) {
    int32_t ecx3;
    struct s0* esi4;
    signed char* edi5;
    void* esp6;
    int32_t ecx7;
    struct s0* edi8;
    struct s0* v9;
    int32_t ecx10;
    struct s0* v11;
    int32_t eax12;
    int1_t zf13;
    int1_t zf14;
    struct s9* edi15;
    int32_t ecx16;
    signed char* esi17;
    int32_t ecx18;
    int1_t zf19;
    int1_t zf20;
    signed char* edi21;
    int32_t ecx22;
    signed char* esi23;
    int32_t ecx24;
    int32_t ecx25;
    signed char* esi26;
    int32_t ecx27;
    int1_t zf28;
    signed char* esi29;
    struct s0* edi30;
    int1_t zf31;
    signed char* edi32;
    int32_t ecx33;
    signed char* esi34;
    int1_t zf35;
    struct s10* edi36;
    int32_t ecx37;
    int32_t v38;
    int32_t ecx39;
    int1_t zf40;
    int32_t ecx41;
    int32_t eax42;
    int32_t eax43;
    struct s11* edi44;
    int32_t eax45;
    int32_t* edi46;
    signed char* edi47;
    int32_t ecx48;

    fun_804804c();
    ecx3 = reinterpret_cast<int32_t>(__return_address()) - 1;
    if (ecx3) {
        addr_804837a_2:
        esi4 = g8048666;
    } else {
        edi5 = a1;
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 + 4 + 4);
        ecx7 = ecx3 - 1;
        do {
            if (!ecx7) 
                break;
            --ecx7;
            ++edi5;
            esi4 = reinterpret_cast<struct s0*>(&esi4->pad111);
        } while (*edi5);
        if (*(edi5 - 2) == 100) 
            goto addr_804824d_7; else 
            goto addr_80480cd_8;
    }
    addr_804837c_9:
    edi8 = a2;
    v9 = edi8;
    ecx10 = -1;
    do {
        if (!ecx10) 
            break;
        --ecx10;
        edi8 = reinterpret_cast<struct s0*>(&edi8->pad111);
        esi4 = reinterpret_cast<struct s0*>(&esi4->pad111);
    } while (edi8->f0);
    v11 = v9;
    *reinterpret_cast<signed char*>(&eax12) = fun_8048538();
    zf13 = esi4 == 0;
    if (zf13) {
        __asm__("int 0x80");
        zf14 = g8048656 == 0;
        if (!zf14) {
            __asm__("int 0x80");
        }
        __asm__("int 0x80");
    } else {
        edi15 = reinterpret_cast<struct s9*>(0x804882a);
        ecx16 = 7;
        esi17 = "Login: Name: Directory: Shell: Office: Home Phone: Logged in at This user doesnt exist\n";
        do {
            if (!ecx16) 
                break;
            --ecx16;
            edi15->f0 = *esi17;
            edi15 = reinterpret_cast<struct s9*>(&edi15->f1);
            ++esi17;
        } while (!zf13);
        ecx18 = 33;
        a2 = v11;
        goto addr_80483b6_20;
    }
    addr_804824d_7:
    __asm__("int 0x80");
    __asm__("int 0x80");
    g8048656 = 0x66;
    edi15 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(esp6) - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 + 12 - 4 - 4 - 4);
    __asm__("int 0x80");
    if (__intrinsic()) {
        ecx18 = 0x8048346;
        __asm__("int 0x80");
        eax12 = 1;
        __asm__("int 0x80");
        __asm__("outsd ");
        if (1) {
            addr_80483b6_20:
            __asm__("lodsb ");
        } else {
            esi4->f6f = 0;
            if (!esi4->f6f) 
                goto 0x8048370;
            g70 = 0;
            zf19 = g70 == 0;
            __asm__("arpl [ebx+0x65], bp");
            if (zf19) 
                goto addr_804837c_9; else 
                goto addr_804835c_24;
        }
    } else {
        __asm__("int 0x80");
        __asm__("int 0x80");
        addr_80482ba_26:
        __asm__("int 0x80");
        if (__intrinsic()) 
            goto addr_80482ba_26;
        __asm__("int 0x80");
        if (1) 
            goto addr_80482ba_26;
        __asm__("int 0x80");
        __asm__("int 0x80");
        do {
            __asm__("lodsb ");
        } while (1);
        __asm__("int 0x80");
        goto addr_804837a_2;
    }
    do {
        --ecx18;
        edi15->f0 = *reinterpret_cast<signed char*>(&eax12);
        edi15 = reinterpret_cast<struct s9*>(&edi15->f1);
        __asm__("lodsb ");
        zf19 = *reinterpret_cast<signed char*>(&eax12) == 0;
    } while (!zf19);
    do {
        if (!ecx18) 
            break;
        --ecx18;
        edi15->f0 = 32;
        edi15 = reinterpret_cast<struct s9*>(&edi15->f1);
    } while (!zf19);
    ecx18 = 6;
    esi4 = reinterpret_cast<struct s0*>("Name: Directory: Shell: Office: Home Phone: Logged in at This user doesnt exist\n");
    goto addr_80483cd_39;
    addr_804835c_24:
    if (zf19) {
        addr_80483cd_39:
    } else {
        g70 = 0;
        if (!0) {
        }
    }
    do {
        if (!ecx18) 
            break;
        --ecx18;
        edi15->f0 = esi4->f0;
        edi15 = reinterpret_cast<struct s9*>(&edi15->f1);
        esi4 = reinterpret_cast<struct s0*>(&esi4->pad111);
    } while (!zf19);
    ecx18 = 4;
    addr_80483dc_46:
    __asm__("lodsb ");
    if (1) 
        goto addr_80483dc_46;
    --ecx18;
    zf20 = ecx18 == 0;
    if (!zf20) 
        goto addr_80483dc_46;
    fun_8048364(ecx18);
    edi15->f1 = 10;
    __asm__("int 0x80");
    edi21 = reinterpret_cast<signed char*>(0x804882a);
    ecx22 = 11;
    esi23 = "Directory: Shell: Office: Home Phone: Logged in at This user doesnt exist\n";
    do {
        if (!ecx22) 
            break;
        --ecx22;
        *edi21 = *esi23;
        ++edi21;
        ++esi23;
    } while (!zf20);
    ecx24 = 29;
    do {
        __asm__("lodsb ");
    } while (1);
    fun_8048364(29);
    do {
        if (!ecx24) 
            break;
        --ecx24;
        *edi21 = 32;
        ++edi21;
    } while (1);
    ecx25 = 7;
    esi26 = "Shell: Office: Home Phone: Logged in at This user doesnt exist\n";
    do {
        if (!ecx25) 
            break;
        --ecx25;
        *edi21 = *esi26;
        ++edi21;
        ++esi26;
    } while (1);
    do {
        __asm__("lodsb ");
    } while (1);
    fun_8048364(33);
    *edi21 = 10;
    __asm__("int 0x80");
    while (1) {
        ecx27 = 0x80486aa;
        __asm__("int 0x80");
        if (0) 
            goto 0x8048584;
        zf28 = g80486aa == 7;
        if (!zf28) 
            continue;
        esi29 = reinterpret_cast<signed char*>(0x80486d6);
        edi30 = a2;
        a2 = edi30;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            edi30 = reinterpret_cast<struct s0*>(&edi30->pad111);
            ++esi29;
        } while (*esi29 == edi30->f0);
        zf31 = *esi29 == 0;
        if (!zf31) 
            continue;
        edi32 = reinterpret_cast<signed char*>(0x804882a);
        ecx33 = 13;
        esi34 = "Logged in at This user doesnt exist\n";
        do {
            if (!ecx33) 
                break;
            --ecx33;
            *edi32 = *esi34;
            ++edi32;
            ++esi34;
        } while (!zf31);
        __asm__("lodsb ");
        do {
            *edi32 = 3;
            ++edi32;
            __asm__("lodsb ");
        } while (1);
        *edi32 = 10;
        __asm__("int 0x80");
    }
    addr_80480cd_8:
    __asm__("int 0x80");
    while (1) {
        __asm__("int 0x80");
        if (0) 
            goto 0x8048584;
        zf35 = g80486aa == 7;
        if (!zf35) 
            continue;
        edi36 = reinterpret_cast<struct s10*>(0x804882a);
        ecx37 = 11;
        __asm__("lodsb ");
        do {
            edi36->f0 = 3;
            edi36 = reinterpret_cast<struct s10*>(&edi36->pad3);
            --ecx37;
            __asm__("lodsb ");
        } while (1);
        v38 = ecx37;
        do {
            if (!ecx37) 
                break;
            --ecx37;
            edi36->f0 = 32;
            edi36 = reinterpret_cast<struct s10*>(&edi36->pad3);
        } while (1);
        fun_804851a();
        ecx39 = -(-v38 + 11 - 22);
        zf40 = ecx39 == 0;
        do {
            if (!ecx39) 
                break;
            --ecx39;
            edi36->f0 = 32;
            edi36 = reinterpret_cast<struct s10*>(&edi36->pad3);
        } while (!zf40);
        ecx41 = 8;
        __asm__("lodsb ");
        do {
            edi36->f0 = 32;
            edi36 = reinterpret_cast<struct s10*>(&edi36->pad3);
            --ecx41;
            __asm__("lodsb ");
        } while (1);
        do {
            if (!ecx41) 
                break;
            --ecx41;
            edi36->f0 = 32;
            edi36 = reinterpret_cast<struct s10*>(&edi36->pad3);
        } while (1);
        __asm__("int 0x80");
        if (!__intrinsic()) {
            eax42 = g804865a;
            eax43 = eax42 - g804868a;
            if (eax43 <= 60) {
                edi36->f0 = reinterpret_cast<signed char>(0x20202020);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi36) + 4) = 0x20202020;
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(edi36) + 6) = 0x2020;
                *reinterpret_cast<signed char*>(&edi36->f4) = 45;
                edi44 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(edi36) + 8);
            } else {
                if (!(eax43 / 0x15180)) {
                    eax45 = eax43 % 0x15180;
                    edi36->f0 = reinterpret_cast<signed char>(0x20202020);
                } else {
                    eax45 = fun_80484fe(0x804866a);
                }
                edi46 = &edi36->f3;
                if (!(eax45 / 0xe10)) {
                    *edi46 = 0x20202020;
                } else {
                    fun_80484fe(0x804866a);
                }
                eax43 = fun_80484fe(0x804866a);
                edi44 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(edi46) + 3 + 2);
            }
            __asm__("lodsb ");
            if (*reinterpret_cast<signed char*>(&eax43)) {
                edi44->f0 = reinterpret_cast<signed char>(0x20202020);
                edi44->f4 = 0x20202020;
                edi44 = reinterpret_cast<struct s11*>(&edi44->f4);
                do {
                    edi44->f0 = *reinterpret_cast<signed char*>(&eax43);
                    edi44 = reinterpret_cast<struct s11*>(&edi44->f1);
                    __asm__("lodsb ");
                } while (*reinterpret_cast<signed char*>(&eax43));
            }
            edi44->f0 = 10;
            edi44->f1 = 0;
        }
        edi47 = reinterpret_cast<signed char*>(0x804882a);
        ecx48 = 80;
        do {
            if (!ecx48) 
                break;
            --ecx48;
            ++edi47;
        } while (*edi47);
        __asm__("int 0x80");
    }
}

int32_t fun_804822f() {
    __asm__("int 0x80");
    __asm__("int 0x80");
    return 0x72;
}

void fun_8048379() {
    return;
}
