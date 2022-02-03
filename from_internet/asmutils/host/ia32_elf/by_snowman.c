
struct s0 {
    int32_t f0;
    signed char[2] pad6;
    int16_t f6;
};

void* fun_804835a(struct s0* ecx) {
    void* eax2;
    signed char* esi3;
    int32_t esi4;
    int32_t esi5;

    eax2 = reinterpret_cast<void*>(5);
    __asm__("int 0x80");
    if (0) {
        addr_80483b8_2:
        return eax2;
    } else {
        __asm__("int 0x80");
        eax2 = reinterpret_cast<void*>(6);
        __asm__("int 0x80");
        esi3 = reinterpret_cast<signed char*>(0x804861c);
        do {
            __asm__("lodsb ");
            if (0) 
                goto addr_80483b8_2;
        } while (1 || (*esi3 != 0x73656d61 || ((esi3 = esi3 + 4, *esi3 != 0x65767265) || (esi3 = esi3 + 4, *esi3 != 0x72))));
    }
    esi4 = reinterpret_cast<int32_t>(esi3 + 1);
    do {
        __asm__("lodsb ");
    } while (1);
    esi5 = esi4 - 1;
    do {
        __asm__("lodsb ");
    } while (0);
    *reinterpret_cast<signed char*>(esi5 - 1) = 0;
    return 6;
}

int32_t fun_804832d();

void* fun_804830a(struct s0* ecx) {
    __asm__("ror eax, 0x10");
    fun_804832d();
    __asm__("int 0x80");
    return 4;
}

struct s1 {
    signed char f0;
    int16_t f1;
};

struct s2 {
    int16_t f0;
    int16_t f2;
};

int16_t g80483f6;

int16_t g80483f8;

int16_t g80483fc;

int16_t g80483fa;

void fun_80482ab(struct s0* ecx) {
    struct s1* v2;
    struct s1* edi3;
    int32_t ecx4;
    signed char al5;
    signed char al6;
    signed char al7;
    struct s2* edi8;
    int32_t eax9;
    int16_t ax10;
    int16_t* edi11;
    int32_t edx12;
    int16_t dx13;

    __asm__("pushad ");
    v2 = reinterpret_cast<struct s1*>(0x8048404);
    edi3 = reinterpret_cast<struct s1*>(0x8048405);
    while (1) {
        ecx4 = 0;
        while (al5) {
            if (al6 == 46) 
                goto addr_80482c8_5;
            ++ecx4;
            edi3->f0 = al7;
            edi3 = reinterpret_cast<struct s1*>(&edi3->f1);
        }
        break;
        addr_80482c8_5:
        v2->f0 = *reinterpret_cast<signed char*>(&ecx4);
        v2 = edi3;
        edi3 = reinterpret_cast<struct s1*>(&edi3->f1);
    }
    edi3->f0 = 0;
    edi8 = reinterpret_cast<struct s2*>(&edi3->f1);
    eax9 = 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax10) + 1) = 1;
    *reinterpret_cast<signed char*>(&ax10) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax9) + 1);
    edi8->f0 = ax10;
    edi11 = &edi8->f2;
    *edi11 = ax10;
    v2->f0 = *reinterpret_cast<signed char*>(&ecx4);
    edx12 = reinterpret_cast<int32_t>(edi11 + 1 - 0x40241fc);
    *reinterpret_cast<signed char*>(&dx13) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx12) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&dx13) + 1) = *reinterpret_cast<signed char*>(&edx12);
    g80483f6 = dx13;
    g80483f8 = 0x4d52;
    g80483fc = 0x100;
    g80483fa = 1;
    __asm__("popad ");
    return;
}

int32_t fun_8048348() {
    int32_t eax1;
    uint16_t ax2;
    signed char al3;
    signed char* edi4;

    do {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = 0;
        ax2 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&eax1) / 10);
        al3 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax2) + 1) + 48);
        *edi4 = al3;
        ++edi4;
        *reinterpret_cast<signed char*>(&eax1) = *reinterpret_cast<signed char*>(&ax2);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = al3;
    } while (*reinterpret_cast<signed char*>(&eax1));
    return eax1;
}

void fun_8048289(struct s0* ecx) {
    int32_t eax2;
    int32_t edx3;
    int32_t ecx4;
    int32_t ebx5;
    int32_t esi6;
    int32_t edi7;

    eax2 = 0;
    edx3 = 0;
    ecx4 = 0;
    do {
        ebx5 = 0;
        while (++edx3, *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(esi6 + edx3) - 48), *reinterpret_cast<unsigned char*>(esi6 + edx3) >= 48) {
            ebx5 = ebx5 * 10 + eax2;
        }
        *reinterpret_cast<signed char*>(edi7 + ecx4 + 4) = *reinterpret_cast<signed char*>(&ebx5);
        ++ecx4;
    } while (ecx4 != 4);
    return;
}

struct s3 {
    signed char f0;
    signed char f1;
};

int32_t fun_804832d() {
    signed char* edi1;
    struct s3* edi2;
    void* edi3;

    *edi1 = 10;
    edi2 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(edi3) - 1);
    do {
        fun_8048348();
        edi2->f0 = 46;
        edi2 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(edi2) - 1);
    } while (0);
    edi2->f1 = 32;
    return 0;
}

struct s4 {
    signed char[115] pad115;
    signed char f73;
};

struct s5 {
    signed char[115] pad115;
    signed char f73;
};

unsigned char g736d2074;

struct s6 {
    signed char[32] pad32;
    unsigned char f20;
};

struct s7 {
    signed char[32] pad32;
    unsigned char f20;
};

unsigned char g207473d3;

unsigned char* g80483d4;

unsigned char* g80483cc;

unsigned char* g80483d0;

int32_t g804860c;

void* g8048604;

int16_t g8048608;

uint16_t g804860a;

struct s8 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s9 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s10 {
    signed char[101] pad101;
    signed char f65;
};

unsigned char g207473d4;

unsigned char g207473ba;

void fun_8048000(struct s0* ecx) {
    void* esp2;
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
    signed char bl26;
    unsigned char tmp8_27;
    uint1_t cf28;
    struct s4* ebp29;
    struct s5* ebp30;
    signed char dl31;
    unsigned char* ebx32;
    struct s6* ebp33;
    struct s7* ebp34;
    unsigned char** esp35;
    int1_t zf36;
    unsigned char* v37;
    void* eax38;
    unsigned char* v39;
    uint1_t cf40;
    uint1_t below_or_equal41;
    unsigned char* v42;
    unsigned char* v43;
    unsigned char* esi44;
    struct s0* esp45;
    void* ebp46;
    struct s0* esp47;
    struct s0* esp48;
    struct s0* esp49;
    int1_t zf50;
    int1_t zf51;
    struct s0* esi52;
    int16_t ax53;
    int16_t* esi54;
    int16_t ax55;
    struct s8* edx56;
    struct s9* edx57;
    unsigned char dh58;
    uint1_t zf59;
    struct s10* edx60;
    void* edi61;
    int32_t ebp62;
    void* edi63;
    int32_t ebp64;
    unsigned char dh65;
    unsigned char dh66;

    esp2 = __zero_stack_offset();
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
        __asm__("lahf ");
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
        eax25 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<unsigned char>(*eax23));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<int32_t>(ecx)) + bl26);
        *eax25 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<unsigned char*>(&eax25));
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 1 + 2);
        *eax25 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<unsigned char*>(&eax25));
    }
    tmp8_27 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<unsigned char*>(&eax25));
    cf28 = reinterpret_cast<uint1_t>(tmp8_27 < *eax25);
    *eax25 = tmp8_27;
    *eax25 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<unsigned char*>(&eax25)) + cf28);
    ebp29->f73 = reinterpret_cast<signed char>(ebp30->f73 + dl31);
    __asm__("popad ");
    ebx32 = reinterpret_cast<unsigned char*>(0x2074736f);
    g736d2074 = 0;
    ebp33->f20 = reinterpret_cast<unsigned char>(ebp34->f20 & 0x6f);
    esp35 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4);
    __asm__("popad ");
    __asm__("insd ");
    g207473d3 = reinterpret_cast<unsigned char>(g207473d3 & 0x6f);
    zf36 = g207473d3 == 0;
    __asm__("outsb ");
    if (1) {
        while (1) {
            esp35 = esp35 - 1 + 1;
            __asm__("int 0x80");
            ebx32 = reinterpret_cast<unsigned char*>(0);
            addr_80480d6_5:
            addr_80480d7_6:
            esp35 = esp35 - 1 + 1;
            __asm__("int 0x80");
            addr_80480dc_7:
            g80483d4 = reinterpret_cast<unsigned char*>(0xea60);
            eax25 = v37;
            esp35 = esp35 + 1 + 1;
            zf36 = *eax25 == 45;
            addr_80480ea_8:
            if (zf36) {
                if (reinterpret_cast<uint32_t>(ebx32) <= 2) {
                    addr_80480a3_10:
                    ecx = reinterpret_cast<struct s0*>(0x804804c);
                    esp35 = esp35 - 1 + 1 - 1 + 1 - 1 + 1;
                    __asm__("int 0x80");
                    eax38 = reinterpret_cast<void*>(0);
                    goto addr_80480b5_11;
                } else {
                    esp35 = esp35 + 1 - 1;
                    v39 = ebx32 - 2;
                    ebx32 = reinterpret_cast<unsigned char*>(0);
                    eax25 = reinterpret_cast<unsigned char*>(0);
                    while (cf40 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax25) < 48), *reinterpret_cast<unsigned char*>(&eax25) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax25) - 48), !cf40) {
                        below_or_equal41 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax25) <= 9);
                        addr_80480fe_15:
                        if (!below_or_equal41) 
                            break;
                        ebx32 = eax25 + reinterpret_cast<uint32_t>(ebx32) * 10;
                    }
                    g80483d4 = ebx32;
                    ebx32 = v39;
                    ++esp35;
                    addr_804810f_18:
                    eax25 = v42;
                    ++esp35;
                }
            }
            g80483cc = eax25;
            if (ebx32 - 1) {
                g80483d0 = v43;
                ++esp35;
            }
            esi44 = g80483d0;
            if (!esi44 && (eax38 = fun_804835a(ecx), esp35 = esp35 - 1 + 1, !esi44)) {
                goto addr_80480b5_11;
            }
            fun_80482ab(ecx);
            fun_8048289(ecx);
            g804860c = 2;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&g804860c) + 3) = 53;
            esp45 = reinterpret_cast<struct s0*>(esp35 - 1 + 1 - 1 + 1 - 1 - 1 - 1);
            ecx = esp45;
            eax38 = reinterpret_cast<void*>(0x66);
            __asm__("int 0x80");
            esp35 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp45) - 4 + 4 - 4 + 4 + 12);
            do {
                if (0) 
                    goto addr_80480b5_11;
                ebp46 = eax38;
                esp47 = reinterpret_cast<struct s0*>(esp35 - 1 - 1 - 1 - 1 - 1 - 1);
                ecx = esp47;
                __asm__("int 0x80");
                eax38 = reinterpret_cast<void*>(16);
                esp35 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp47) - 4 + 4 - 4 + 4 + 20 + 4);
            } while ((esp48 = reinterpret_cast<struct s0*>(esp35 - 1 - 1 - 1), ecx = esp48, eax38 = reinterpret_cast<void*>(0x66), esp35 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp48) - 4 + 4 - 4 + 4 + 12), 0) || (esp49 = reinterpret_cast<struct s0*>(esp35 - 1 - 1 - 1 - 1 - 1 - 1), ecx = esp49, eax38 = reinterpret_cast<void*>(1), esp35 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp49) - 4 + 4 - 4 + 4 + 20 + 4), 0));
            ecx = reinterpret_cast<struct s0*>(0x5421);
            __asm__("int 0x80");
            eax38 = reinterpret_cast<void*>(1);
            esp35 = esp35 - 1 - 1 + 1 + 1;
            if (0) {
                addr_80480b5_11:
                if (!eax38) {
                    addr_80480ce_27:
                    continue;
                } else {
                    zf50 = reinterpret_cast<int1_t>(eax38 == 0xffffff91);
                    addr_80480bc_29:
                    if (!zf50) 
                        goto addr_80480ce_27;
                }
            } else {
                __asm__("int 0x80");
                g8048604 = ebp46;
                g8048608 = 3;
                ecx = reinterpret_cast<struct s0*>(1);
                esp35 = esp35 - 1 + 1 - 1 + 1;
                eax38 = reinterpret_cast<void*>(0);
                *reinterpret_cast<signed char*>(&eax38) = -88;
                __asm__("int 0x80");
                zf51 = (g804860a & 3) == 0;
                if (!zf51) {
                    esi52 = reinterpret_cast<struct s0*>(0x80483f6);
                    ecx = reinterpret_cast<struct s0*>(0x80483f6);
                    eax38 = reinterpret_cast<void*>(3);
                    esp35 = esp35 - 1 + 1;
                    __asm__("int 0x80");
                    if (0) {
                        addr_8048284_32:
                        goto addr_80480b5_11;
                    } else {
                        ax53 = g80483fc;
                        *reinterpret_cast<signed char*>(&eax38) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax53) + 1);
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax38) + 1) = *reinterpret_cast<signed char*>(&ax53);
                        if (!0) {
                            do {
                                __asm__("lodsb ");
                            } while (*reinterpret_cast<signed char*>(&eax38));
                            esi52 = reinterpret_cast<struct s0*>(0x8048408);
                        }
                        while (1) {
                            __asm__("lodsb ");
                            if (*reinterpret_cast<signed char*>(&eax38)) 
                                continue;
                            do {
                                __asm__("lodsb ");
                            } while (!*reinterpret_cast<signed char*>(&eax38));
                            if (*reinterpret_cast<signed char*>(&eax38) == 1) 
                                goto addr_8048275_40;
                            if (*reinterpret_cast<signed char*>(&eax38) != 5) 
                                goto addr_8048284_32;
                            esi54 = &esi52->f6;
                            eax38 = reinterpret_cast<void*>(0);
                            ax55 = *esi54;
                            *reinterpret_cast<signed char*>(&eax38) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ax55) + 1);
                            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax38) + 1) = *reinterpret_cast<signed char*>(&ax55);
                            esi52 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi54) + reinterpret_cast<int32_t>(eax38) + 1 + 1);
                        }
                    }
                } else {
                    goto addr_80480b5_11;
                }
            }
            ecx = reinterpret_cast<struct s0*>(0x804807b);
            esp35 = esp35 - 1 + 1 - 1 + 1 - 1 + 1;
            __asm__("int 0x80");
            goto addr_80480ce_27;
            addr_8048275_40:
            __asm__("lodsb ");
            if (*reinterpret_cast<signed char*>(&eax38) == 4) {
                eax38 = fun_804830a(0x80483f6);
                esp35 = esp35 - 1 + 1;
                goto addr_8048284_32;
            }
        }
    } else {
        if (1) 
            goto addr_80480d7_6;
        if (0) 
            goto addr_80480ea_8;
        if (0) 
            goto addr_80480d6_5;
        __asm__("outsb ");
        __asm__("arpl [gs:ecx+ebp*2+0x6f], si");
        __asm__("outsb ");
        edx56->f65 = reinterpret_cast<unsigned char>(edx57->f65 & dh58);
        zf59 = reinterpret_cast<uint1_t>(edx60->f65 == 0);
        below_or_equal41 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf59));
        if (!zf59) 
            goto addr_80480fe_15;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi61) + ebp62 * 2 + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi63) + ebp64 * 2 + 32) & dh65);
        esp35 = reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(esp35) + 1 - 4);
        g207473d4 = reinterpret_cast<unsigned char>(g207473d4 & dh66);
        zf50 = g207473d4 == 0;
        if (0) 
            goto addr_804810f_18;
        if (0) 
            goto addr_80480bc_29;
        *reinterpret_cast<unsigned char*>(&ebx32) = reinterpret_cast<unsigned char>(0x6f | g207473ba);
        if (1) 
            goto addr_80480dc_7; else 
            goto addr_80480a3_10;
    }
}

void fun_80483bb() {
    int1_t zf1;
    int1_t cf2;
    int1_t cf3;
    int1_t below_or_equal4;

    __asm__("das ");
    if (!zf1) {
        __asm__("das ");
        if (!cf2) {
            if (cf3) {
                __asm__("insb ");
                if (!below_or_equal4) {
                    __asm__("arpl [edi+0x6e], bp");
                }
            }
        }
    }
}
