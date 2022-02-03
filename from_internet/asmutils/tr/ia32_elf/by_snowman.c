
int32_t fun_804823d();

int32_t fun_804823a();

struct s0 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

int16_t* fun_8048172() {
    int32_t eax1;
    int32_t ecx2;
    unsigned char* edi3;
    unsigned char dl4;
    unsigned char* ebp5;
    unsigned char dh6;
    int1_t cf7;
    struct s0* edi8;
    int32_t ecx9;
    int32_t edx10;
    void* eax11;
    signed char* esi12;
    signed char bl13;
    signed char bh14;
    signed char tmp8_15;

    eax1 = 0;
    ecx2 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1) + 1);
    *reinterpret_cast<signed char*>(&ecx2) = 1;
    edi3 = reinterpret_cast<unsigned char*>(0x8048550);
    while ((dl4 = *ebp5, ++edi3, ++ebp5, ++eax1, --ecx2, !!ecx2) && dl4) {
        if (dl4 != 92) {
            *edi3 = dl4;
            continue;
        }
        ++ebp5;
        if (!dl4) 
            break;
        if (dl4 != 0x6e) 
            goto addr_804819f_7;
        dh6 = 10;
        addr_80481ee_9:
        *edi3 = dh6;
        continue;
        addr_804819f_7:
        if (dl4 == 0x72) {
            dh6 = 13;
            goto addr_80481ee_9;
        } else {
            if (dl4 == 0x74) {
                dh6 = 9;
                goto addr_80481ee_9;
            } else {
                if (dl4 == 98) {
                    dh6 = 8;
                    goto addr_80481ee_9;
                } else {
                    cf7 = dl4 < 97;
                    if (dl4 == 97) {
                        dh6 = 7;
                        goto addr_80481ee_9;
                    } else {
                        eax1 = fun_804823d();
                        if (cf7) {
                            dh6 = dl4;
                            goto addr_80481ee_9;
                        } else {
                            dh6 = dl4;
                            eax1 = fun_804823a();
                            if (!cf7 && (++ebp5, dh6 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(dh6 << 3) | dl4), eax1 = fun_804823a(), !0)) {
                                ++ebp5;
                                dh6 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(dh6 << 3) | dl4);
                                goto addr_80481ee_9;
                            }
                        }
                    }
                }
            }
        }
    }
    edi8 = reinterpret_cast<struct s0*>(0x8048551);
    ecx9 = eax1;
    edx10 = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx10) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx10) + 1) + 1);
    eax11 = reinterpret_cast<void*>(0);
    do {
        *reinterpret_cast<signed char*>(&edx10) = edi8->f0;
        edi8 = reinterpret_cast<struct s0*>(&edi8->f1);
        if (*reinterpret_cast<signed char*>(&edx10) != 91 || (edi8->f1 != 45 || edi8->f3 != 93)) {
            *esi12 = *reinterpret_cast<signed char*>(&edx10);
            --edx10;
            if (!edx10) 
                break;
            eax11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax11) + 1);
            ++esi12;
        } else {
            bl13 = edi8->f0;
            bh14 = edi8->f2;
            ++edi8;
            if (bl13 > bh14) {
                tmp8_15 = bh14;
                bh14 = bl13;
                bl13 = tmp8_15;
            }
            do {
                *esi12 = bl13;
                eax11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax11) + 1);
                ++esi12;
                --edx10;
                if (!edx10) 
                    goto addr_8048238_28;
                bl13 = reinterpret_cast<signed char>(bl13 + 1);
            } while (bl13 <= bh14);
        }
        --ecx9;
    } while (ecx9);
    addr_8048238_28:
    return reinterpret_cast<int32_t>(eax11) - 1;
}

int32_t fun_804823d() {
    signed char dl1;
    signed char dl2;
    int32_t eax3;
    int32_t eax4;

    if (dl1 < 48 || dl2 > 55) {
        return eax3;
    } else {
        return eax4;
    }
}

int32_t fun_804823a() {
    signed char* ebp1;
    int32_t eax2;
    int32_t eax3;

    if (*ebp1 < 48 || *ebp1 > 55) {
        return eax2;
    } else {
        return eax3;
    }
}

struct s1 {
    signed char[6] pad6;
    signed char f6;
    signed char[86] pad93;
    signed char f5d;
};

signed char g804824d;

signed char g804824e;

signed char g8048250;

signed char g804824f;

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
    void** eax22;
    signed char dh23;
    struct s1* ebp24;
    void* ebp25;
    signed char dl26;
    void* tmp8_27;
    uint1_t cf28;
    signed char bl29;
    int32_t eax30;
    int16_t* v31;
    int32_t ebx32;
    int16_t* eax33;
    int32_t v34;
    int16_t* eax35;
    int16_t* eax36;
    signed char* esi37;
    int32_t ebx38;
    int1_t zf39;
    signed char* esi40;
    signed char* edi41;
    int32_t ebx42;
    int32_t ebx43;
    int1_t zf44;
    signed char al45;
    int1_t zf46;
    int1_t zf47;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<int32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        ebp24 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebp25) - 1);
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + reinterpret_cast<unsigned char>(*eax22));
        ebp24->f6 = reinterpret_cast<signed char>(ebp24->f6 + dl26);
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(*eax22));
    *eax22 = tmp8_27;
    *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf28);
    ebp24->f5d = reinterpret_cast<signed char>(ebp24->f5d + bl29);
    eax30 = 0;
    while (v31 && v31) {
        if (*v31 == 0x732d) {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax30) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax30) + 1) + 1);
        } else {
            if (*v31 != 0x642d) 
                goto addr_8048075_8;
            *reinterpret_cast<signed char*>(&eax30) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax30) + 1);
        }
    }
    addr_80480b0_10:
    addr_804816d_11:
    __asm__("int 0x80");
    addr_8048075_8:
    ebx32 = 0;
    g804824d = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax30) + 1);
    g804824e = *reinterpret_cast<signed char*>(&eax30);
    if (!*reinterpret_cast<signed char*>(&eax30)) {
        do {
            *reinterpret_cast<signed char*>(ebx32 + 0x8048251) = *reinterpret_cast<signed char*>(&ebx32);
            *reinterpret_cast<signed char*>(&ebx32) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx32) + 1);
        } while (*reinterpret_cast<signed char*>(&ebx32));
        eax33 = fun_8048172();
        if (!v34) 
            goto addr_80480b0_10;
        eax35 = fun_8048172();
        if (eax33 != eax35) 
            goto addr_80480b0_10;
    } else {
        do {
            *reinterpret_cast<signed char*>(ebx32 + 0x8048251) = *reinterpret_cast<signed char*>(&eax30);
            *reinterpret_cast<signed char*>(&ebx32) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx32) + 1);
        } while (*reinterpret_cast<signed char*>(&ebx32));
        eax36 = fun_8048172();
        esi37 = reinterpret_cast<signed char*>(0x8048351);
        ebx38 = 0;
        zf39 = eax36 == 0;
        while (!zf39) {
            *reinterpret_cast<signed char*>(&ebx38) = *esi37;
            *reinterpret_cast<signed char*>(ebx38 + 0x8048251) = 0;
            ++esi37;
            eax36 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(eax36) - 1);
            zf39 = eax36 == 0;
        }
        goto addr_8048101_19;
    }
    if (eax35) {
        esi40 = reinterpret_cast<signed char*>(0x8048351);
        edi41 = reinterpret_cast<signed char*>(0x8048451);
        ebx42 = 0;
        do {
            *reinterpret_cast<signed char*>(&ebx42) = *esi40;
            ++esi40;
            ++edi41;
            *reinterpret_cast<signed char*>(ebx42 + 0x8048251) = *edi41;
            eax35 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(eax35) - 1);
        } while (eax35);
    }
    addr_8048101_19:
    while (!0) {
        ebx43 = 0;
        zf44 = g804824e == 0;
        if (!zf44) {
            *reinterpret_cast<signed char*>(&ebx43) = g8048250;
            if (!*reinterpret_cast<signed char*>(ebx43 + 0x8048251)) 
                continue;
            al45 = *reinterpret_cast<signed char*>(&ebx43);
        } else {
            *reinterpret_cast<signed char*>(&ebx43) = g8048250;
            al45 = *reinterpret_cast<signed char*>(ebx43 + 0x8048251);
        }
        zf46 = g804824d == 0;
        if (zf46) 
            goto addr_8048155_29;
        zf47 = al45 == g804824f;
        if (zf47) 
            continue;
        addr_8048155_29:
        g804824f = al45;
        __asm__("int 0x80");
    }
    goto addr_804816d_11;
}
