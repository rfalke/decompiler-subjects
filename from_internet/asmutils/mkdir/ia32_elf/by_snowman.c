
struct s0 {
    void* f0;
    signed char[71] pad72;
    signed char f48;
};

struct s0* fun_80480ee(struct s0* ecx) {
    struct s0* v2;
    struct s0* eax3;
    signed char ah4;
    signed char al5;
    signed char al6;
    signed char al7;

    v2 = eax3;
    ah4 = al5;
    do {
        __asm__("lodsb ");
        if (!al6) 
            break;
    } while (al7 != ah4);
    goto addr_80480fb_4;
    addr_80480fc_5:
    return v2;
    addr_80480fb_4:
    goto addr_80480fc_5;
}

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
    signed char dh23;
    struct s0* tmp32_24;
    uint1_t cf25;
    struct s0* eax26;
    signed char bl27;
    unsigned char* edx28;
    signed char* edi29;
    signed char* v30;
    signed char* v31;
    signed char* esi32;
    signed char* v33;
    struct s0* ecx34;
    int32_t ebp35;
    signed char* esi36;
    signed char* v37;
    unsigned char* esi38;
    unsigned char* v39;
    void** ecx40;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<uint32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<uint32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax22) + reinterpret_cast<uint32_t>(eax22)) + dh23);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<uint32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax22) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax22) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + 1);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + 1);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        tmp32_24 = reinterpret_cast<struct s0*>(&eax22->f0);
        cf25 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_24) < reinterpret_cast<uint32_t>(eax22));
        eax26 = tmp32_24;
    }
    eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf25);
    eax26->f48 = reinterpret_cast<signed char>(eax26->f48 + bl27);
    if (eax26->f48) 
        goto addr_8048057_4; else 
        goto addr_8048050_5;
    while (1) {
        addr_80480cc_6:
        __asm__("int 0x80");
        if (edx28) {
            do {
                edi29 = v30;
                while (1) {
                    addr_80480a8_8:
                    if (!v31) {
                        while (1) {
                            addr_8048050_5:
                            eax26 = reinterpret_cast<struct s0*>(1);
                            __asm__("int 0x80");
                            addr_8048057_4:
                            esi32 = v33;
                            do {
                                __asm__("lodsb ");
                            } while (*reinterpret_cast<void**>(&eax26));
                            edi29 = esi32;
                            ecx34 = reinterpret_cast<struct s0*>(0x1ed);
                            ebp35 = 0;
                            while (1) {
                                esi36 = v37;
                                v31 = esi36;
                                if (*esi36 != 0x702d) {
                                    if (*esi36 != 0x6d2d) 
                                        goto addr_80480a8_8;
                                    esi38 = v39;
                                    if (!esi38) 
                                        break;
                                    edx28 = esi38;
                                    ecx40 = reinterpret_cast<void**>(0);
                                    eax26 = reinterpret_cast<struct s0*>(0);
                                    while ((*reinterpret_cast<unsigned char*>(&ecx40) = reinterpret_cast<unsigned char>(*esi38 - 48), *esi38 >= 48) && *reinterpret_cast<unsigned char*>(&ecx40) <= 7) {
                                        *reinterpret_cast<int16_t*>(&eax26) = reinterpret_cast<int16_t>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(&eax26)) * 8);
                                        eax26 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<int32_t>(ecx40));
                                        ++esi38;
                                    }
                                    if (edx28 == esi38) 
                                        break;
                                    if (!eax26) 
                                        break;
                                    ecx34 = eax26;
                                } else {
                                    ++ebp35;
                                }
                            }
                        }
                    } else {
                        if (*reinterpret_cast<int16_t*>(edi29 - 6) != 0x6d72) 
                            break;
                        __asm__("int 0x80");
                    }
                }
                v30 = edi29;
                *reinterpret_cast<signed char*>(&edx28) = 1;
                if (!ebp35) 
                    goto addr_80480cc_6;
                esi36 = v31;
                addr_80480d9_25:
                edx28 = reinterpret_cast<unsigned char*>(0);
                fun_80480ee(ecx34);
            } while (!0 && (edx28 = reinterpret_cast<unsigned char*>(1), esi36 == esi36));
            edi29 = esi36;
            *edi29 = 0;
        } else {
            *edi29 = 47;
            ++esi36;
            goto addr_80480d9_25;
        }
    }
}
