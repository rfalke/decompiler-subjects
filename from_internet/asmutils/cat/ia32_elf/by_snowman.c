
int32_t g804c2ac;

int32_t fun_80481e2(int32_t* ecx) {
    int1_t sf2;

    while (--g804c2ac, sf2 = g804c2ac < 0, sf2) {
        __asm__("int 0x80");
        if (!1) 
            goto addr_8048200_3;
        g804c2ac = 3;
    }
    __asm__("lodsb ");
    return 3;
    addr_8048200_3:
    return 2;
}

unsigned char g804c2b9;

int32_t g804c2b0;

uint32_t g804c2b4;

unsigned char g804c2ba;

unsigned char g804c2bb;

void fun_8048202(int32_t* ecx) {
    unsigned char ah2;
    int1_t zf3;
    int32_t edi4;
    unsigned char* edi5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t edi8;
    uint32_t ebx9;
    int32_t eax10;
    unsigned char tmp8_11;
    int32_t v12;

    if (!(ah2 & 16) || (zf3 = (g804c2b9 & 0xff) == 0, !zf3)) {
        addr_804826c_2:
        edi4 = g804c2b0;
        edi5 = reinterpret_cast<unsigned char*>(edi4 + 0x804a2ac);
    } else {
        g804c2b9 = reinterpret_cast<unsigned char>(g804c2b9 + 1);
        eax6 = g804c2b4;
        eax7 = eax6 + 1;
        g804c2b4 = eax7;
        edi8 = 0;
        do {
            eax7 = eax7 / 10;
            ++edi8;
        } while (eax7);
        ebx9 = 6 - edi8;
        if (6 <= edi8) 
            goto addr_804824e_6; else 
            goto addr_8048242_7;
    }
    *edi5 = *reinterpret_cast<unsigned char*>(&eax10);
    ++g804c2b0;
    tmp8_11 = g804c2ba;
    g804c2ba = *reinterpret_cast<unsigned char*>(&eax10);
    g804c2bb = tmp8_11;
    if (reinterpret_cast<uint32_t>(edi5 + 1) >= 0x804c2ac) {
        __asm__("int 0x80");
        g804c2b0 = 0;
    }
    return;
    do {
        addr_804824e_6:
        fun_8048202(ecx);
        --edi8;
    } while (edi8);
    fun_8048202(ecx);
    fun_8048202(ecx);
    eax10 = v12;
    g804c2ba = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax10) + 1);
    goto addr_804826c_2;
    do {
        addr_8048242_7:
        fun_8048202(ecx);
        --ebx9;
    } while (ebx9);
    goto addr_804824e_6;
}

unsigned char g804c2b8;

void fun_8048000(int32_t* ecx, int32_t a2) {
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
    void** eax23;
    signed char dh24;
    int32_t edx25;
    int32_t edx26;
    signed char bh27;
    void* dl28;
    signed char* v29;
    signed char* v30;
    int1_t zf31;
    int1_t sf32;
    int32_t edx33;
    int32_t eax34;
    int1_t zf35;
    int1_t zf36;
    unsigned char bl37;
    int1_t zf38;
    int32_t eax39;

    if (less_or_equal3) {
        *ecx = *ecx + eax4;
        *ebx5 = *ebx6 + eax7;
        *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *reinterpret_cast<signed char*>(&eax20) = reinterpret_cast<signed char>(al21 + *eax22);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax20) + reinterpret_cast<int32_t>(*eax20));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(ecx)) + 44);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(eax23)) + dh24);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<int32_t>(eax23));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + 8);
        __asm__("lodsb ");
        *reinterpret_cast<void**>(&eax23) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)) + reinterpret_cast<unsigned char>(*eax23));
        *reinterpret_cast<signed char*>(edx25 + reinterpret_cast<int32_t>(eax23) * 2 + 0x70000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx26 + reinterpret_cast<int32_t>(eax23) * 2 + 0x70000) + bh27);
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    }
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<signed char>(dl28));
    *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
    if (!(reinterpret_cast<int32_t>(__return_address()) - 1)) 
        goto addr_80480e6_4;
    while (v29) {
        __asm__("lodsb ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 45)) 
            goto addr_80480c3_7;
        if (!*v29) 
            goto addr_80480c3_7;
        do {
            __asm__("lodsb ");
            if (!*reinterpret_cast<void**>(&eax23)) 
                break;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 65)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 7);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 98)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 48);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 0x65)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 6);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 69)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 2);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 0x6e)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 16);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 0x73)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 8);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 0x74)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 5);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 84)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 1);
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 0x76)) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1) | 4);
            }
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax23) == 45));
        goto addr_80480b2_29;
    }
    g804c2b8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1);
    goto addr_80480e6_4;
    addr_80480c3_7:
    g804c2b8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1);
    while (1) {
        addr_80480ca_31:
        while (v30) {
            if (*v30 == 45 || (ecx = reinterpret_cast<int32_t*>(0), 1)) {
                while (1) {
                    addr_80480e6_4:
                    zf31 = (g804c2b8 & 0xff) == 0;
                    sf32 = reinterpret_cast<signed char>(g804c2b8 & 0xff) < reinterpret_cast<signed char>(0);
                    if (!zf31) 
                        goto addr_804812f_33;
                    ecx = reinterpret_cast<int32_t*>(0x80482ac);
                    __asm__("int 0x80");
                    if (0) 
                        break;
                    if (0) 
                        goto addr_80480ca_31;
                    __asm__("int 0x80");
                }
            }
        }
        edx33 = g804c2b0;
        sf32 = __intrinsic();
        if (edx33) {
            ecx = reinterpret_cast<int32_t*>(0x804a2ac);
            __asm__("int 0x80");
        }
        __asm__("int 0x80");
        addr_804812f_33:
        while (eax34 = fun_80481e2(ecx), !sf32) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) = g804c2b8;
            if (*reinterpret_cast<unsigned char*>(&eax34) == 10) {
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 8) || ((zf35 = g804c2ba == 10, !zf35) || (zf36 = g804c2bb == 10, sf32 = reinterpret_cast<signed char>(g804c2bb) < reinterpret_cast<signed char>(10), !zf36))) {
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 2) {
                        bl37 = g804c2ba;
                        fun_8048202(ecx);
                        g804c2ba = bl37;
                        *reinterpret_cast<unsigned char*>(&eax34) = 10;
                    }
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 32 && (zf38 = g804c2ba == *reinterpret_cast<unsigned char*>(&eax34), zf38)) {
                        g804c2b9 = reinterpret_cast<unsigned char>(g804c2b9 + 1);
                    }
                    fun_8048202(ecx);
                    g804c2b9 = reinterpret_cast<unsigned char>(g804c2b9 - 1);
                    sf32 = reinterpret_cast<signed char>(g804c2b9) < reinterpret_cast<signed char>(0);
                    continue;
                } else {
                    continue;
                }
            }
            if (*reinterpret_cast<unsigned char*>(&eax34) == 9) {
                sf32 = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 1) < reinterpret_cast<signed char>(0);
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 1)) {
                    addr_804816c_52:
                    fun_8048202(ecx);
                } else {
                    addr_8048178_53:
                    fun_8048202(ecx);
                    eax39 = eax34;
                    sf32 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax39) + 64) < 0;
                    goto addr_804816c_52;
                }
            } else {
                sf32 = reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 4) < reinterpret_cast<signed char>(0);
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 4)) 
                    goto addr_804816c_52;
                if (*reinterpret_cast<unsigned char*>(&eax34) >= 0x80) {
                    fun_8048202(ecx);
                    fun_8048202(ecx);
                    eax34 = eax34;
                    *reinterpret_cast<unsigned char*>(&eax34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax34) & 0x7f);
                }
                sf32 = *reinterpret_cast<signed char*>(&eax34) < reinterpret_cast<signed char>(32);
                if (*reinterpret_cast<unsigned char*>(&eax34) < 32) 
                    goto addr_8048178_53; else 
                    goto addr_804816c_52;
            }
        }
    }
    addr_80480b2_29:
    g804c2b8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax23) + 1);
    goto addr_80480ca_31;
}
