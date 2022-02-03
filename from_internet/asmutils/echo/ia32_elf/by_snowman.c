
struct s0 {
    int32_t f0;
    signed char[94] pad98;
    unsigned char f62;
};

unsigned char g0;

unsigned char g804816a;

void fun_8048000(struct s0* ecx) {
    uint40_t v2;
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
    unsigned char* eax25;
    unsigned char tmp8_26;
    unsigned char tmp8_27;
    uint1_t cf28;
    unsigned char tmp8_29;
    unsigned char tmp8_30;
    uint1_t cf31;
    unsigned char* ebx32;
    unsigned char* ebx33;
    unsigned char bl34;
    int32_t ebx35;
    unsigned char* edi36;
    int32_t ebp37;
    int1_t zf38;
    unsigned char dh39;
    unsigned char dl40;
    int32_t v41;
    int32_t ebx42;
    unsigned char dl43;
    int1_t zf44;
    unsigned char* v45;
    int32_t ecx46;
    unsigned char* edi47;
    unsigned char* v48;
    int32_t edx49;
    unsigned char dh50;
    int32_t v51;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 1) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal3) {
        ecx->f0 = ecx->f0 + eax4;
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
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&v2)) + 4 - 4) = 1;
        *eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax23)));
        eax25 = reinterpret_cast<unsigned char*>(0);
        tmp8_26 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(g0));
        g0 = tmp8_26;
    }
    tmp8_27 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(g0));
    cf28 = reinterpret_cast<uint1_t>(tmp8_27 < g0);
    g0 = tmp8_27;
    tmp8_29 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(g0)) + cf28);
    g0 = tmp8_29;
    tmp8_30 = reinterpret_cast<unsigned char>(ecx->f62 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax25) + 1));
    cf31 = reinterpret_cast<uint1_t>(tmp8_30 < ecx->f62);
    ecx->f62 = tmp8_30;
    __asm__("o16 outsb ");
    if (cf31) 
        goto addr_80480c7_4;
    if (!(cf31 | reinterpret_cast<uint1_t>(ecx->f62 == 0))) {
        *ebx32 = reinterpret_cast<unsigned char>(*ebx33 | bl34);
        eax25 = reinterpret_cast<unsigned char*>(0x6bbf0b0b);
    }
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) + 0x4b5bfd89;
    if (!*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<int32_t>(ecx))) 
        goto addr_804806f_8;
    goto addr_8048068_10;
    while (1) {
        addr_80480c2_11:
        while (1) {
            addr_80480cb_12:
            if (!ebx35) {
                while (1) {
                    addr_804806f_8:
                    --edi36;
                    if (reinterpret_cast<int32_t>(edi36) - ebp37) {
                        --edi36;
                    }
                    zf38 = (g804816a & 1) == 0;
                    if (zf38) {
                        *edi36 = 10;
                        ++edi36;
                    }
                    __asm__("int 0x80");
                    ebx35 = 0;
                    eax25 = reinterpret_cast<unsigned char*>(1);
                    __asm__("int 0x80");
                    do {
                        __asm__("lodsb ");
                        if (1) 
                            goto addr_80480cb_12;
                        dh39 = 0;
                        while (*reinterpret_cast<unsigned char*>(&eax25)) {
                            dl40 = 1;
                            if (0) 
                                goto addr_80480c6_24;
                            dl40 = 2;
                            if (0) 
                                goto addr_80480c6_24;
                            dl40 = 4;
                            if (!0) 
                                goto addr_80480c2_11;
                            addr_80480c6_24:
                            dh39 = reinterpret_cast<unsigned char>(dh39 | dl40);
                            addr_80480c7_4:
                        }
                        if (!dh39) 
                            goto addr_80480cb_12;
                        g804816a = reinterpret_cast<unsigned char>(g804816a | dh39);
                        addr_8048068_10:
                        ebx35 = v41;
                    } while (ebx35);
                }
            } else {
                do {
                    addr_80480d1_29:
                    __asm__("lodsb ");
                    ebx42 = 0;
                    dl43 = g804816a;
                    if (dl43 & 4 || (!(dl43 & 2) || (*reinterpret_cast<unsigned char*>(&eax25) != 92 || *reinterpret_cast<unsigned char*>(&eax25) == 92))) {
                        addr_8048145_30:
                    } else {
                        zf44 = *reinterpret_cast<unsigned char*>(&eax25) == 99;
                        if (zf44) {
                            g804816a = reinterpret_cast<unsigned char>(g804816a | 1);
                            goto addr_80480d1_29;
                        }
                        v45 = edi36;
                        ecx46 = 8;
                        edi47 = reinterpret_cast<unsigned char*>(0x804804c);
                        do {
                            if (!ecx46) 
                                break;
                            --ecx46;
                            zf44 = *edi47 == *reinterpret_cast<unsigned char*>(&eax25);
                            ++edi47;
                        } while (!zf44);
                        if (!zf44) 
                            goto addr_8048117_37; else 
                            goto addr_804810b_38;
                    }
                    *edi36 = *reinterpret_cast<unsigned char*>(&eax25);
                    ++edi36;
                    continue;
                    addr_8048117_37:
                    edi36 = v45;
                    v48 = eax25;
                    edx49 = 0;
                    *reinterpret_cast<int16_t*>(&ecx46) = 0x800;
                    while (*reinterpret_cast<unsigned char*>(&eax25) >= 48 && *reinterpret_cast<unsigned char*>(&eax25) <= 55) {
                        dh50 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) - 48);
                        *reinterpret_cast<int16_t*>(&eax25) = reinterpret_cast<int16_t>(*reinterpret_cast<signed char*>(&edx49) * *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx46) + 1));
                        *reinterpret_cast<unsigned char*>(&edx49) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) + dh50);
                        if (*reinterpret_cast<signed char*>(&ecx46) == 2) 
                            goto addr_8048138_43;
                        __asm__("lodsb ");
                        ++ecx46;
                    }
                    addr_8048156_45:
                    eax25 = v48;
                    if (!*reinterpret_cast<signed char*>(&ecx46)) {
                        *edi36 = 92;
                        ++edi36;
                        eax25 = eax25;
                        goto addr_8048145_30;
                    } else {
                        if (*reinterpret_cast<signed char*>(&ecx46) != -1) {
                        }
                        *reinterpret_cast<unsigned char*>(&eax25) = *reinterpret_cast<unsigned char*>(&edx49);
                        if (!*reinterpret_cast<unsigned char*>(&eax25)) {
                            ebx42 = 1;
                            goto addr_8048145_30;
                        }
                    }
                    addr_8048138_43:
                    *reinterpret_cast<signed char*>(&ecx46) = -1;
                    goto addr_8048156_45;
                    addr_804810b_38:
                    *reinterpret_cast<unsigned char*>(&eax25) = *reinterpret_cast<unsigned char*>(8 - (ecx46 + 1) + 0x8048054);
                    edi36 = v45;
                    goto addr_8048145_30;
                } while (*reinterpret_cast<unsigned char*>(&eax25) || ebx42);
                *reinterpret_cast<unsigned char*>(&eax25) = 32;
                *edi36 = 32;
                ++edi36;
                ebx35 = v51;
            }
        }
    }
}
