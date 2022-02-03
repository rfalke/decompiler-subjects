
struct s0 {
    signed char[32] pad32;
    int32_t f20;
    signed char[12] pad48;
    uint16_t f30;
};

struct s0* fun_8048260(signed char* ecx) {
    __asm__("pushad ");
    __asm__("int 0x80");
    __asm__("popad ");
    return 4;
}

signed char* g80483b3;

struct s0* fun_804822f(signed char* ecx) {
    signed char* esi2;
    signed char* edi3;
    int32_t ecx4;
    signed char dl5;
    signed char* edi6;
    signed char dl7;
    struct s0* eax8;

    __asm__("pushad ");
    esi2 = g80483b3;
    edi3 = esi2;
    ecx4 = -1;
    do {
        if (!ecx4) 
            break;
        --ecx4;
        ++edi3;
        ++esi2;
    } while (*edi3);
    if (dl5) {
        edi6 = edi3 - 1;
        *edi6 = dl7;
        edi3 = edi6 + 1;
        ++esi2;
    }
    __asm__("int 0x80");
    *(edi3 - 1) = 0;
    eax8 = fun_8048260(esi2);
    __asm__("popad ");
    return eax8;
}

struct s1 {
    signed char[7] pad7;
    unsigned char f7;
};

void fun_8048211(uint32_t ecx) {
    unsigned char* edi2;
    struct s1* edi3;
    int32_t edx4;
    unsigned char al5;

    edi2 = &edi3->f7;
    edx4 = 8;
    do {
        al5 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) & 15) + 48);
        if (reinterpret_cast<signed char>(al5) > reinterpret_cast<signed char>(57)) {
            al5 = reinterpret_cast<unsigned char>(al5 + 39);
        }
        *edi2 = al5;
        --edi2;
        ecx = ecx >> 4;
        --edx4;
    } while (edx4);
    return;
}

struct s2 {
    signed char[4] pad4;
    int32_t f4;
    int32_t f8;
    signed char[8] pad20;
    int32_t f14;
};

int32_t g80483d7;

int32_t g80483cf;

int32_t g80483d3;

void fun_804831c(uint32_t ecx) {
    struct s2* edi2;
    struct s2* tmp32_3;
    int32_t tmp32_4;
    int32_t tmp32_5;
    int32_t tmp32_6;

    while (reinterpret_cast<int32_t>(ecx - 1) >= reinterpret_cast<int32_t>(0)) {
        edi2 = tmp32_3;
        if (!edi2->f14) 
            continue;
        if (edi2->f4 == 8) {
            tmp32_4 = g80483d7 + edi2->f14;
            g80483d7 = tmp32_4;
        } else {
            if (edi2->f8 == 6) {
                tmp32_5 = g80483cf + edi2->f14;
                g80483cf = tmp32_5;
            } else {
                if (edi2->f8 == 3) {
                    tmp32_6 = g80483d3 + edi2->f14;
                    g80483d3 = tmp32_6;
                }
            }
        }
    }
    return;
}

struct s3 {
    signed char[7] pad7;
    signed char f7;
};

void fun_804837f(uint32_t ecx) {
    int32_t ecx2;
    int32_t eax3;
    int32_t eax4;
    int32_t edx5;
    void* edi6;
    struct s3* edi7;
    signed char* edi8;
    void* edi9;
    int32_t ecx10;
    int1_t zf11;

    ecx2 = 7;
    if (eax3) {
        do {
            if (!eax4) 
                break;
            edx5 = eax4 % 10;
            eax4 = eax4 / 10;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi6) + ecx2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&edx5) + 48);
            --ecx2;
        } while (ecx2);
    } else {
        edi7->f7 = 48;
        ecx2 = 6;
    }
    edi8 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi9) + ecx2);
    ecx10 = ecx2 + 1;
    zf11 = ecx10 == 0;
    do {
        if (!ecx10) 
            break;
        --ecx10;
        *edi8 = 32;
        --edi8;
    } while (!zf11);
    return;
}

struct s4 {
    signed char[7] pad7;
    unsigned char f7;
};

void fun_8048359(uint32_t ecx) {
    unsigned char* edi2;
    struct s4* edi3;
    int32_t edx4;
    unsigned char al5;
    int1_t zf6;
    int32_t ecx7;

    edi2 = &edi3->f7;
    edx4 = 7;
    do {
        al5 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) & 15) + 48);
        if (reinterpret_cast<signed char>(al5) > reinterpret_cast<signed char>(57)) {
            al5 = reinterpret_cast<unsigned char>(al5 + 39);
        }
        *edi2 = al5;
        --edi2;
        ecx = ecx >> 4;
        zf6 = ecx == 0;
    } while (!ecx && (--edx4, zf6 = edx4 == 0, !zf6));
    ecx7 = edx4;
    do {
        if (!ecx7) 
            break;
        --ecx7;
        *edi2 = 32;
        --edi2;
    } while (!zf6);
    return;
}

struct s5 {
    signed char f0;
    signed char[3] pad4;
    signed char f4;
};

struct s6 {
    signed char[114] pad114;
    signed char f72;
};

struct s7 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s8 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s9 {
    signed char[115] pad115;
    unsigned char f73;
};

int32_t g80483bf;

signed char* g80483af;

int32_t g80483c3;

int32_t g80483b7;

struct s10 {
    signed char[32] pad32;
    void* f20;
};

struct s10* g80483bb;

struct s11 {
    signed char[4] pad4;
    signed char f4;
    signed char[11] pad16;
    void* f10;
    uint32_t f14;
    int32_t f18;
};

struct s11* g80483c7;

struct s12 {
    void* f0;
    uint32_t f4;
};

void fun_8048000(signed char* ecx, signed char* a2) {
    int1_t less_or_equal3;
    int32_t eax4;
    int32_t* ebx5;
    int32_t* ebx6;
    int32_t eax7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    void** eax20;
    signed char al21;
    signed char* eax22;
    struct s5* eax23;
    void** eax24;
    void** edi25;
    signed char dh26;
    signed char* edi27;
    signed char* esi28;
    void* esi29;
    unsigned char* eax30;
    signed char bh31;
    unsigned char tmp8_32;
    uint1_t cf33;
    unsigned char tmp8_34;
    struct s6* ebp35;
    int1_t cf36;
    struct s7* ebp37;
    struct s8* ebp38;
    struct s9* edx39;
    signed char* ecx40;
    signed char* ebx41;
    int32_t ebp42;
    unsigned char dh43;
    signed char* v44;
    struct s0* eax45;
    int1_t cf46;
    uint32_t ecx47;
    struct s11* eax48;
    struct s11* v49;
    uint32_t v50;
    uint32_t ecx51;
    void* tmp32_52;
    struct s12* ebx53;
    struct s10* eax54;
    void* tmp32_55;
    void* edx56;
    uint32_t ecx57;
    void* edx58;
    signed char* edi59;
    int32_t v60;

    if (less_or_equal3) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax4);
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        eax23->f0 = reinterpret_cast<signed char>(eax23->f0 + reinterpret_cast<int32_t>(eax23));
        eax23->f0 = reinterpret_cast<signed char>(eax23->f0 + *reinterpret_cast<signed char*>(&eax23));
        eax24 = edi25;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<int32_t>(eax24)) + dh26);
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<int32_t>(eax24));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax24) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax24 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)));
        *reinterpret_cast<void**>(&eax24) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax24)) + 8);
        edi27 = &eax23->f4;
        esi28 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi29) + 1 + 4);
        eax30 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax24) + reinterpret_cast<unsigned char>(*eax24));
        *edi27 = reinterpret_cast<signed char>(*edi27 + bh31);
        *reinterpret_cast<signed char*>(&eax30) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&eax30)));
        *edi27 = reinterpret_cast<signed char>(*edi27 + *reinterpret_cast<signed char*>(&eax30));
        *eax30 = reinterpret_cast<unsigned char>(*eax30 + *reinterpret_cast<signed char*>(&eax30));
    }
    tmp8_32 = reinterpret_cast<unsigned char>(*eax30 + *reinterpret_cast<signed char*>(&eax30));
    cf33 = reinterpret_cast<uint1_t>(tmp8_32 < *eax30);
    *eax30 = tmp8_32;
    *eax30 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax30 + *reinterpret_cast<signed char*>(&eax30)) + cf33);
    *reinterpret_cast<unsigned char*>(ecx + 46) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx + 46) + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax30) + 1));
    __asm__("outsd ");
    if (*reinterpret_cast<unsigned char*>(ecx + 46) || (tmp8_34 = reinterpret_cast<unsigned char>(ebp35->f72 + *reinterpret_cast<signed char*>(&eax30)), cf36 = tmp8_34 < ebp37->f72, ebp38->f72 = tmp8_34, cf36)) {
        addr_80480c5_7:
        __asm__("int 0x80");
        ecx = a2;
        goto addr_80480ce_8;
    } else {
        if (cf36) {
            addr_8048078_10:
            edx39->f73 = 0;
            if (1) {
                addr_804809e_11:
                g80483bf = 0x8048165;
                if (*reinterpret_cast<int16_t*>(esi28 - 3) == 0x6d6e) {
                    addr_80480ce_8:
                    ecx40 = ecx - 1;
                    g80483af = ecx40;
                    if (!ecx40) {
                        ebx41 = "a.out";
                        goto addr_80480e0_13;
                    }
                } else {
                    g80483bf = 0x8048274;
                    a2 = ecx;
                    goto addr_80480c0_15;
                }
            } else {
                *eax30 = 0;
                *eax30 = 0;
                __asm__("arpl [gs:eax], sp");
                *eax30 = 0;
                *eax30 = 0;
                goto addr_804808e_17;
            }
        } else {
            __asm__("outsd ");
            if (__intrinsic()) {
                addr_80480c0_15:
                goto addr_80480c5_7;
            } else {
                __asm__("outsb ");
                ebp42 = *reinterpret_cast<int32_t*>(esi28 + 0x67) * 0x6c696620;
                *eax30 = 0;
                *eax30 = 0;
                *reinterpret_cast<unsigned char*>(ebp42 + 0x78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebp42 + 0x78) & dh43);
                if (!*reinterpret_cast<unsigned char*>(ebp42 + 0x78)) {
                    addr_804808e_17:
                    ecx = reinterpret_cast<signed char*>(__return_address());
                    esi28 = a2;
                    goto addr_8048099_20;
                } else {
                    *eax30 = 0;
                    *reinterpret_cast<unsigned char*>(ecx + 0x74) = 0;
                    __asm__("popad ");
                    *eax30 = 0;
                    *eax30 = 0;
                    goto addr_8048078_10;
                }
            }
        }
    }
    while (ebx41 = v44, !!ebx41) {
        addr_80480e0_13:
        g80483b3 = ebx41;
        __asm__("int 0x80");
        if (__intrinsic()) {
            ecx40 = reinterpret_cast<signed char*>(0x8048052);
            __asm__("int 0x80");
            fun_804822f(0x8048052);
            ++g80483c3;
        } else {
            g80483b7 = 5;
            __asm__("int 0x80");
            ecx40 = reinterpret_cast<signed char*>(19);
            __asm__("int 0x80");
            g80483bb = reinterpret_cast<struct s10*>(0xc0);
            g80483bf(19);
            __asm__("int 0x80");
        }
    }
    eax45 = reinterpret_cast<struct s0*>(1);
    __asm__("int 0x80");
    cf46 = *reinterpret_cast<unsigned char*>(&g80483af) < 2;
    if (!cf46) 
        goto addr_804816e_26;
    addr_804817a_27:
    ecx47 = eax45->f30;
    eax48 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(eax45) + eax45->f20 - 40);
    while (eax48 = reinterpret_cast<struct s11*>(reinterpret_cast<int32_t>(eax48) + 40), --ecx47, !!ecx47) {
        if (eax48->f4 != 2) 
            continue;
        v49 = eax48;
        v50 = ecx47;
        g80483c7 = eax48;
        ecx51 = (eax48->f14 >> 4) + 1;
        tmp32_52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax48->f10) + reinterpret_cast<int32_t>(g80483bb));
        ebx53 = reinterpret_cast<struct s12*>(reinterpret_cast<int32_t>(tmp32_52) - 16);
        while (--ecx51, !!ecx51) {
            ebx53 = ebx53 + 2;
            if (!ebx53->f0) 
                continue;
            __asm__("pushad ");
            eax54 = g80483bb;
            tmp32_55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax54) + reinterpret_cast<int32_t>(eax54->f20) + eax48->f18 * 40 + 16)) + reinterpret_cast<int32_t>(g80483bb));
            edx56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(tmp32_55) + reinterpret_cast<int32_t>(ebx53->f0));
            ecx57 = ebx53->f4;
            fun_8048211(ecx57);
            edx58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx56) + 8);
            edi59 = reinterpret_cast<signed char*>(0x80483db + reinterpret_cast<int32_t>(edx58) + 1);
            do {
                *edi59 = 32;
                ++edi59;
                __asm__("lodsb ");
                edx58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx58) + 1);
            } while (1);
            *edi59 = 10;
            ecx51 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edi59 + 1) - reinterpret_cast<int32_t>(edx58));
            ebx53 = reinterpret_cast<struct s12*>(1);
            eax48 = reinterpret_cast<struct s11*>(4);
            __asm__("int 0x80");
            __asm__("popad ");
        }
        ecx47 = v50;
        eax48 = v49;
    }
    goto v60;
    addr_804816e_26:
    fun_8048260(ecx40);
    eax45 = fun_804822f(ecx40);
    goto addr_804817a_27;
    do {
        addr_8048099_20:
        __asm__("lodsb ");
    } while (*reinterpret_cast<signed char*>(&eax30));
    goto addr_804809e_11;
}

struct s13 {
    signed char f0;
    signed char[47] pad48;
    uint16_t f30;
};

int32_t fun_8048273() {
    int32_t eax1;
    unsigned char al2;
    unsigned char bh3;
    struct s13* eax4;
    uint32_t ecx5;
    int32_t eax6;
    int32_t tmp32_7;
    uint32_t tmp32_8;
    signed char* edi9;

    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(al2 | bh3);
    eax4 = reinterpret_cast<struct s13*>(eax1 + 0x80483cf);
    eax4->f0 = reinterpret_cast<signed char>(eax4->f0 + *reinterpret_cast<signed char*>(&eax4));
    eax4->f0 = reinterpret_cast<signed char>(eax4->f0 + *reinterpret_cast<signed char*>(&eax4));
    g80483d3 = 0;
    g80483d7 = 0;
    ecx5 = eax4->f30;
    fun_804831c(ecx5);
    fun_804837f(ecx5);
    fun_804837f(ecx5);
    fun_804837f(ecx5);
    eax6 = g80483cf;
    tmp32_7 = eax6 + g80483d3;
    tmp32_8 = reinterpret_cast<uint32_t>(tmp32_7 + g80483d7);
    fun_804837f(ecx5);
    fun_8048359(tmp32_8);
    edi9 = reinterpret_cast<signed char*>(0x8048408);
    do {
        *edi9 = 32;
        ++edi9;
        __asm__("lodsb ");
    } while (1);
    *edi9 = 10;
    __asm__("int 0x80");
    return 4;
}
