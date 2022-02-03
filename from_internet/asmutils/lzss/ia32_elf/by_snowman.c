
signed char fun_8048104(uint32_t ecx) {
    int32_t ebx2;
    int32_t edi3;
    int32_t eax4;
    int32_t ecx5;
    int32_t edi6;
    int32_t eax7;
    int32_t edi8;
    int32_t edi9;
    int32_t edi10;
    int32_t eax11;
    int32_t edi12;
    int32_t eax13;
    signed char al14;

    ebx2 = *reinterpret_cast<int32_t*>(edi3 + eax4 * 4 + 0x48014);
    if (ebx2 != 0x8000) {
        ecx5 = *reinterpret_cast<int32_t*>(edi6 + eax7 * 4 + 0x8010);
        *reinterpret_cast<int32_t*>(edi8 + ebx2 * 4 + 0x8010) = ecx5;
        *reinterpret_cast<int32_t*>(edi9 + ecx5 * 4 + 0x48014) = ebx2;
        *reinterpret_cast<int32_t*>(edi10 + eax11 * 4 + 0x8010) = 0x8000;
        *reinterpret_cast<int32_t*>(edi12 + eax13 * 4 + 0x48014) = 0x8000;
    }
    return al14;
}

int32_t fun_804813e(uint32_t ecx) {
    uint32_t ebx2;
    int32_t edi3;
    int32_t eax4;
    uint32_t ebx5;
    int32_t ecx6;
    int32_t edi7;
    int32_t edi8;
    int32_t eax9;
    int32_t edi10;
    int32_t eax11;
    int32_t edi12;
    int32_t eax13;
    int32_t edi14;
    int32_t eax15;
    int32_t eax16;

    *reinterpret_cast<int16_t*>(&ebx2) = *reinterpret_cast<int16_t*>(edi3 + eax4);
    ebx5 = ebx2 & 0x7fff;
    ecx6 = *reinterpret_cast<int32_t*>(edi7 + ebx5 * 4 + 0x28014);
    *reinterpret_cast<int32_t*>(edi8 + ebx5 * 4 + 0x28014) = eax9;
    *reinterpret_cast<uint32_t*>(edi10 + eax11 * 4 + 0x48014) = ebx5 + 0x8001;
    *reinterpret_cast<int32_t*>(edi12 + eax13 * 4 + 0x8010) = ecx6;
    if (ecx6 != 0x8000) {
        *reinterpret_cast<int32_t*>(edi14 + ecx6 * 4 + 0x48014) = eax15;
    }
    return eax16;
}

signed char fun_8048180(uint32_t ecx) {
    int32_t edi2;
    int32_t edi3;
    uint32_t ebx4;
    int32_t edi5;
    int32_t eax6;
    uint32_t ecx7;
    int32_t edi8;
    uint32_t edx9;
    int32_t v10;
    int32_t eax11;
    uint32_t esi12;
    int32_t edi13;
    int32_t ebx14;
    int32_t edi15;
    int32_t edi16;
    int32_t edi17;
    int32_t edi18;
    int32_t edi19;

    *reinterpret_cast<int32_t*>(edi2 + 0x68018) = 0;
    *reinterpret_cast<int32_t*>(edi3 + 0x6801c) = 0;
    *reinterpret_cast<int16_t*>(&ebx4) = *reinterpret_cast<int16_t*>(edi5 + eax6);
    ecx7 = *reinterpret_cast<uint32_t*>(edi8 + (ebx4 & 0x7fff) * 4 + 0x28014);
    edx9 = 0;
    while (ecx7 != 0x8000) {
        edx9 = 0;
        v10 = eax11;
        esi12 = edi13 + ecx7;
        ebx14 = edi15 + eax11;
        do {
            if (*reinterpret_cast<signed char*>(esi12 + edx9) != *reinterpret_cast<signed char*>(ebx14 + edx9)) 
                break;
            ++edx9;
        } while (edx9 <= 16);
        eax11 = v10;
        if (edx9 > *reinterpret_cast<uint32_t*>(edi16 + 0x6801c)) {
            *reinterpret_cast<uint32_t*>(edi17 + 0x6801c) = edx9;
            *reinterpret_cast<uint32_t*>(edi18 + 0x68018) = eax11 - ecx7 & 0x7fff;
            eax11 = eax11;
        }
        if (edx9 == 16) 
            goto addr_80481f7_9;
        ecx7 = *reinterpret_cast<uint32_t*>(edi19 + ecx7 * 4 + 0x8010);
    }
    if (edx9 != 16) {
        addr_80481fe_12:
        return *reinterpret_cast<signed char*>(&eax11);
    } else {
        addr_80481f7_9:
        *reinterpret_cast<signed char*>(&eax11) = fun_8048104(ecx7);
        goto addr_80481fe_12;
    }
}

signed char fun_80483bf() {
    int32_t eax1;
    int32_t eax2;

    __asm__("int 0x80");
    if (!0 && !0) {
    }
    eax1 = eax2;
    return *reinterpret_cast<signed char*>(&eax1);
}

struct s0 {
    uint32_t f0;
    signed char[16380] pad16384;
    uint32_t f4000;
    int32_t f4004;
    uint32_t f4008;
};

void fun_804832b(uint32_t ecx) {
    uint32_t eax2;
    uint32_t eax3;
    struct s0* edi4;
    void* edi5;
    int32_t ecx6;
    uint32_t eax7;
    uint32_t ecx8;
    uint32_t ecx9;

    eax2 = eax3 & 1;
    edi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(edi5) - 0x400c);
    ecx6 = edi4->f4004;
    if (!ecx6) {
        eax7 = eax2 | edi4->f4008;
        ecx8 = edi4->f4000;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(edi4) + ecx8 * 4) = eax7 >> 24 | eax7 >> 8 & 0xff00 | eax7 << 8 & 0xff0000 | eax7 << 24;
        ecx9 = ecx8 + 1 & 0xfff;
        if (!ecx9) {
            __asm__("pushad ");
            ecx9 = 0x804c3f3;
            __asm__("int 0x80");
            __asm__("popad ");
        }
        edi4->f4000 = ecx9;
        edi4->f4004 = 31;
        edi4->f4008 = 0;
        return;
    } else {
        edi4->f4008 = edi4->f4008 | eax2 << *reinterpret_cast<unsigned char*>(&ecx6);
        edi4->f4004 = edi4->f4004 - 1;
        return;
    }
}

void fun_8048312(uint32_t ecx) {
    uint32_t ecx2;

    ecx2 = ecx - 1 & 31;
    do {
        fun_804832b(ecx2);
        --ecx2;
    } while (reinterpret_cast<int32_t>(ecx2) >= reinterpret_cast<int32_t>(0));
    return;
}

void fun_80480df() {
    int32_t ecx1;
    int32_t edi2;
    int32_t edi3;
    int32_t edi4;
    int32_t* edi5;
    int32_t ecx6;

    __asm__("pushad ");
    ecx1 = 0x2004;
    *reinterpret_cast<int32_t*>(edi2 - 8) = 31;
    *reinterpret_cast<int32_t*>(edi3 - 4) = 0;
    *reinterpret_cast<int32_t*>(edi4 - 12) = 0;
    while (ecx1) {
        --ecx1;
        *edi5 = 0;
        ++edi5;
    }
    ecx6 = 0x18002;
    while (ecx6) {
        --ecx6;
        *edi5 = 0x8000;
        ++edi5;
    }
    __asm__("popad ");
    return;
}

int32_t fun_80483a0(signed char cl) {
    int32_t edi2;
    int32_t edi3;
    int32_t edi4;

    *reinterpret_cast<int32_t*>(edi2 - 0x400c + *reinterpret_cast<int32_t*>(edi3 - 12) * 4) = *reinterpret_cast<int32_t*>(edi4 - 4);
    __asm__("int 0x80");
    return 4;
}

struct s1 {
    int32_t f0;
    signed char[106] pad110;
    unsigned char f6e;
};

struct s2 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s3 {
    void* f0;
    signed char[458758] pad458759;
    unsigned char f70007;
};

int32_t g80483ef;

int32_t fun_8048203();

struct s4 {
    signed char[97] pad97;
    unsigned char f61;
};

unsigned char* g80483eb;

struct s5 {
    signed char[10] pad10;
    int16_t fa;
};

void fun_8048000(struct s1* ecx, signed char* a2, int32_t a3) {
    int1_t less_or_equal4;
    struct s2* esi5;
    void* esi6;
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
    void* tmp8_27;
    uint1_t cf28;
    unsigned char* eax29;
    signed char dl30;
    unsigned char tmp8_31;
    int1_t cf32;
    int1_t zf33;
    int16_t bx34;
    int16_t bx35;
    signed char* ebp36;
    int16_t bx37;
    signed char* edi38;
    struct s4* ebx39;
    unsigned char* ebp40;
    struct s5* ebp41;

    if (less_or_equal4) {
        esi5 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(esi6) + 1);
        ecx->f0 = ecx->f0 + eax7;
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(*eax23));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<uint32_t>(eax26));
        tmp8_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_27) < reinterpret_cast<unsigned char>(eax26->f0));
        eax26->f0 = tmp8_27;
        if (reinterpret_cast<uint1_t>(cf28 | reinterpret_cast<uint1_t>(eax26->f0 == 0))) {
            *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<uint32_t>(eax26));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            *reinterpret_cast<void**>(&eax26) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)) + 8);
            eax29 = &eax26->f70007;
            *eax29 = reinterpret_cast<unsigned char>(*eax29 + *reinterpret_cast<unsigned char*>(&eax29));
        }
    }
    *eax29 = reinterpret_cast<unsigned char>(*eax29 + dl30);
    tmp8_31 = reinterpret_cast<unsigned char>(*eax29 + *reinterpret_cast<unsigned char*>(&eax29));
    cf32 = tmp8_31 < *eax29;
    *eax29 = tmp8_31;
    if (!cf32) {
        addr_80480b0_7:
        __asm__("int 0x80");
    } else {
        zf33 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax29) + 1) == *reinterpret_cast<unsigned char*>(bx34 + *reinterpret_cast<int16_t*>(&esi5));
        __asm__("insb ");
        if (__intrinsic()) {
            addr_80480c9_9:
            if (zf33) 
                goto addr_80480d6_10; else 
                goto addr_80480cc_11;
        } else {
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax29) + 1) >= *reinterpret_cast<unsigned char*>(bx35 + *reinterpret_cast<int16_t*>(&esi5))) {
                addr_8048078_13:
                *reinterpret_cast<signed char*>(&g80483ef) = 1;
                eax29 = reinterpret_cast<unsigned char*>(ebp36 - 1 - 1);
                if (reinterpret_cast<int32_t>(eax29) < reinterpret_cast<int32_t>(0)) 
                    goto addr_80480aa_14; else 
                    goto addr_8048086_15;
            } else {
                if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax29) + 1) < *reinterpret_cast<signed char*>(bx37 + *reinterpret_cast<int16_t*>(&esi5))) {
                    addr_80480bf_17:
                    eax29 = reinterpret_cast<unsigned char*>(fun_8048203);
                    zf33 = *edi38 == 0x65;
                    goto addr_80480c9_9;
                } else {
                    esi5->f69 = 0;
                    __asm__("insb ");
                    *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax29) | ebx39->f61);
                    __asm__("outsb ");
                    __asm__("daa ");
                    if (!*reinterpret_cast<unsigned char*>(&eax29)) {
                        addr_8048087_19:
                        if (reinterpret_cast<int32_t>(eax29 - 1) < reinterpret_cast<int32_t>(0)) 
                            goto addr_80480bc_20; else 
                            goto addr_804808a_21;
                    } else {
                        __asm__("outsd ");
                        if (0) {
                            addr_80480cf_23:
                            if (*edi38 != 100) {
                                addr_80480aa_14:
                                goto addr_80480b0_7;
                            } else {
                                addr_80480d6_10:
                                eax29();
                            }
                        } else {
                            __asm__("outsb ");
                            ecx->f6e = 0;
                            if (0) 
                                goto 0x80480e5;
                            if (!ecx->f6e) 
                                goto addr_8048092_26; else 
                                goto addr_8048072_27;
                        }
                    }
                }
            }
        }
    }
    addr_80480d8_28:
    __asm__("int 0x80");
    addr_80480cc_11:
    eax29 = reinterpret_cast<unsigned char*>(fun_8048312);
    goto addr_80480cf_23;
    addr_8048086_15:
    edi38 = a2;
    goto addr_8048087_19;
    addr_804808a_21:
    eax29 = reinterpret_cast<unsigned char*>(5);
    __asm__("int 0x80");
    addr_8048092_26:
    ebp40 = eax29;
    if (reinterpret_cast<int32_t>(eax29) >= reinterpret_cast<int32_t>(0)) {
        addr_80480bc_20:
        g80483eb = ebp40;
        goto addr_80480bf_17;
    } else {
        __asm__("int 0x80");
        goto addr_80480d8_28;
    }
    addr_8048072_27:
    *reinterpret_cast<int16_t*>(&ebp40) = reinterpret_cast<int16_t>(ebp41->fa * 0xed31);
    goto addr_8048078_13;
}

void fun_804803e() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

struct s6 {
    signed char[134546431] pad134546431;
    signed char f80503ff;
};

struct s6* g80b841b;

struct s7 {
    signed char[134546431] pad134546431;
    signed char f80503ff;
};

int32_t fun_8048203() {
    struct s6* edx1;
    void* ebx2;
    signed char al3;
    uint32_t ecx4;
    int1_t less5;
    uint32_t v6;
    int1_t less7;
    struct s6* eax8;
    signed char al9;
    struct s7* ebx10;
    int32_t eax11;
    int32_t eax12;

    __asm__("pushad ");
    fun_80480df();
    edx1 = reinterpret_cast<struct s6*>(0);
    ebx2 = reinterpret_cast<void*>(0);
    al3 = fun_80483bf();
    while (reinterpret_cast<int32_t>(edx1) < 16 && (ecx4 || (al3 = fun_80483bf(), !!ecx4))) {
        __asm__("lodsb ");
        --ecx4;
        edx1->f80503ff = al3;
        (&edx1->f80503ff)[0x8000] = al3;
        edx1 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(edx1) + 1);
    }
    while (edx1) {
        fun_8048180(ecx4);
        less5 = reinterpret_cast<int32_t>(edx1) < reinterpret_cast<int32_t>(g80b841b);
        if (less5) {
            g80b841b = edx1;
        }
        v6 = ecx4;
        less7 = reinterpret_cast<int32_t>(g80b841b) < 3;
        if (!less7) {
            fun_804832b(ecx4);
            *reinterpret_cast<signed char*>(&ecx4) = 15;
            fun_8048312(ecx4);
            *reinterpret_cast<signed char*>(&ecx4) = 4;
            fun_8048312(ecx4);
        } else {
            fun_804832b(ecx4);
            g80b841b = reinterpret_cast<struct s6*>(1);
            *reinterpret_cast<signed char*>(&ecx4) = 8;
            fun_8048312(ecx4);
        }
        ecx4 = v6;
        while (eax8 = g80b841b, !!eax8) {
            g80b841b = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(eax8) - 1);
            al9 = fun_8048104(ecx4);
            edx1 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(edx1) - 1);
            if (ecx4 || (al9 = fun_80483bf(), !!ecx4)) {
                __asm__("lodsb ");
                ebx10 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ebx2) + 16);
                if (reinterpret_cast<int32_t>(ebx10) >= reinterpret_cast<int32_t>(0x8000)) {
                    ebx10->f80503ff = al9;
                }
                *reinterpret_cast<signed char*>(0x80503ff + (reinterpret_cast<uint32_t>(ebx10) & 0x7fff)) = al9;
                edx1 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(edx1) + 1);
                --ecx4;
            }
            eax11 = fun_804813e(ecx4);
            ebx2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax11 + 1) & 0x7fff);
        }
    }
    fun_804832b(ecx4);
    *reinterpret_cast<signed char*>(&ecx4) = 15;
    fun_8048312(ecx4);
    eax12 = fun_80483a0(15);
    __asm__("popad ");
    return eax12;
}
