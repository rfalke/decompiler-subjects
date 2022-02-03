
int32_t fun_804804c(signed char* ecx, int32_t a2) {
    signed char al3;
    int32_t eax4;
    int32_t edx5;

    *ecx = 0;
    do {
        __asm__("lodsb ");
    } while (al3 <= 33);
    while (*reinterpret_cast<signed char*>(&eax4) > 47 && (*reinterpret_cast<signed char*>(&eax4) <= 58 && ((*reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax4) - 48), edx5 = edx5 + eax4, *reinterpret_cast<signed char*>(&eax4) > 47) && *reinterpret_cast<signed char*>(&eax4) <= 58))) {
        edx5 = edx5 * 10;
    }
    return edx5;
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
    unsigned char* eax23;
    signed char* edi24;
    signed char* edi25;
    unsigned char tmp8_26;
    uint1_t cf27;
    signed char dh28;

    if (less_or_equal2) {
        *ecx = reinterpret_cast<signed char>(*ecx + eax3);
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
        *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        if (!__intrinsic()) {
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<uint32_t>(eax22));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *eax22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
            *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
            __asm__("fild word [eax+eax]");
            eax23 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax22) | reinterpret_cast<unsigned char>(*eax22));
            *edi24 = reinterpret_cast<signed char>(*edi25 + *reinterpret_cast<signed char*>(&eax23));
            *eax23 = reinterpret_cast<unsigned char>(*eax23 + *reinterpret_cast<signed char*>(&eax23));
        }
    }
    tmp8_26 = reinterpret_cast<unsigned char>(*eax23 + *reinterpret_cast<signed char*>(&eax23));
    cf27 = reinterpret_cast<uint1_t>(tmp8_26 < *eax23);
    *eax23 = tmp8_26;
    *eax23 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax23 + *reinterpret_cast<signed char*>(&eax23)) + cf27);
    *ecx = reinterpret_cast<signed char>(*ecx + dh28);
}

int32_t g80484e7;

int32_t fun_80480c7(signed char* ecx);

int32_t g80484eb;

int32_t g80484f7;

struct s0 {
    signed char[8] pad8;
    signed char f8;
};

int32_t g80484f3;

int32_t g80484ef;

struct s1 {
    unsigned char f0;
    signed char[68] pad69;
    uint32_t f45;
    signed char[6] pad79;
    uint32_t f4f;
    signed char[1] pad84;
    signed char f54;
    signed char[20] pad105;
    unsigned char f69;
};

struct s1* g80484df;

void fun_8048367();

struct s2 {
    int32_t f0;
    signed char f1;
};

void fun_804833f();

void fun_80480ae(signed char* a1) {
    signed char* v2;
    int32_t* edi3;
    signed char* edi4;
    int32_t ecx5;
    int32_t eax6;
    struct s0* ebp7;
    signed char* edi8;
    signed char* esi9;
    int32_t ecx10;
    signed char* edi11;
    signed char* edi12;
    int32_t eax13;
    int32_t ecx14;
    int32_t ebp15;
    int32_t v16;
    struct s2* edi17;

    v2 = reinterpret_cast<signed char*>(__return_address());
    g80484e7 = reinterpret_cast<int32_t>(fun_80480c7);
    g80484eb = 0x80483bf;
    __asm__("int 0x80");
    if (!__intrinsic() && (g80484f7 = 5, !!*edi3)) {
        while (1) {
            edi4 = reinterpret_cast<signed char*>(0x80484fb);
            ecx5 = 0x600;
            do {
                if (!ecx5) 
                    break;
                --ecx5;
                *edi4 = 0;
                ++edi4;
            } while (0);
            *reinterpret_cast<signed char*>(&eax6) = 0x8d;
            __asm__("int 0x80");
            if (0) 
                break;
            ebp7 = reinterpret_cast<struct s0*>(0x80484fb);
            while (ebp7->f8) {
                *reinterpret_cast<int16_t*>(&ebp7) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&ebp7) + ebp7->f8);
                edi8 = reinterpret_cast<signed char*>(0x8048afb);
                __asm__("lodsb ");
                if (*reinterpret_cast<signed char*>(&eax6) <= 48) 
                    continue;
                if (*reinterpret_cast<signed char*>(&eax6) > 57) 
                    continue;
                do {
                    *edi8 = *reinterpret_cast<signed char*>(&eax6);
                    ++edi8;
                    __asm__("lodsb ");
                } while (*reinterpret_cast<signed char*>(&eax6));
                do {
                    __asm__("lodsb ");
                    *edi8 = *reinterpret_cast<signed char*>(&eax6);
                    ++edi8;
                } while (*reinterpret_cast<signed char*>(&eax6));
                eax6 = 5;
                __asm__("int 0x80");
                if (__intrinsic()) 
                    continue;
                g80484f3 = 5;
                eax6 = 3;
                __asm__("int 0x80");
                esi9 = reinterpret_cast<signed char*>(0x8048afb);
                do {
                    __asm__("lodsb ");
                } while (1);
                ecx10 = -1;
                edi11 = v2;
                do {
                    if (!ecx10) 
                        break;
                    --ecx10;
                    ++edi11;
                    ++esi9;
                } while (*esi9 == *edi11);
                __asm__("lodsb ");
                if (1) 
                    continue;
                *reinterpret_cast<signed char*>(&eax6) = reinterpret_cast<signed char>(g80484e7());
            }
        }
        goto g80484eb;
    }
    __asm__("int 0x80");
    edi12 = a1;
    g80484ef = 15;
    eax13 = 0;
    ecx14 = -1;
    do {
        if (!ecx14) 
            break;
        --ecx14;
        ++edi12;
    } while (*edi12);
    if (*reinterpret_cast<int32_t*>(edi12 - 5) != 0x666f6469) 
        goto addr_804809a_33;
    *reinterpret_cast<signed char*>(&g80484df) = 1;
    ebp15 = reinterpret_cast<int32_t>(fun_8048367);
    addr_8048259_35:
    while (v16) {
        __asm__("lodsb ");
        if (1) 
            goto addr_8048330_37;
        __asm__("lodsb ");
        if (0) 
            goto addr_8048330_37;
        if (*reinterpret_cast<signed char*>(&eax13) <= 57) 
            goto addr_804832e_40;
        if (0) 
            continue;
        if (0) {
            addr_804831a_43:
            goto addr_804831b_44;
        } else {
            if (0) {
                addr_804831b_44:
            } else {
                if (0) 
                    goto addr_804832e_40;
                if (!0) 
                    goto addr_80482a2_48;
            }
        }
        goto addr_804831d_50;
        addr_80482a2_48:
        if (0) {
            addr_804831d_50:
            goto addr_804831e_51;
        } else {
            if (0) {
                addr_804831e_51:
            } else {
                if (0) 
                    continue;
                if (!0) 
                    goto addr_80482ba_55;
            }
        }
        goto addr_8048320_57;
        addr_80482ba_55:
        if (0) {
            addr_8048320_57:
            goto addr_8048321_58;
        } else {
            if (0) {
                addr_8048321_58:
                __asm__("bts [0x80484e3], ecx");
            } else {
                edi17 = reinterpret_cast<struct s2*>(v16 - 1);
                do {
                    __asm__("lodsd ");
                    if (!eax13) 
                        break;
                } while (eax13 != edi17->f0);
                goto addr_80482d4_63;
                __asm__("int 0x80");
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi17) + 1) = 10;
                __asm__("int 0x80");
                eax13 = 1;
                __asm__("int 0x80");
                goto addr_804831a_43;
            }
        }
    }
    addr_8048333_65:
    goto ebp15;
    addr_8048330_37:
    goto addr_8048333_65;
    addr_804832e_40:
    goto addr_8048330_37;
    addr_80482d4_63:
    __asm__("lodsb ");
    *reinterpret_cast<signed char*>(&g80484ef) = *reinterpret_cast<signed char*>(&eax13);
    goto addr_8048333_65;
    addr_804809a_33:
    if (*(edi12 - 2) == 53) {
        ebp15 = reinterpret_cast<int32_t>(fun_804833f);
        goto addr_8048259_35;
    } else {
        ebp15 = reinterpret_cast<int32_t>(fun_80480ae);
        goto addr_8048259_35;
    }
}

void fun_80482dd(signed char* ecx) {
    int32_t eax2;

    eax2 = fun_804804c(ecx, __return_address());
    g80484ef = eax2;
    goto 0x8048333;
}

int32_t fun_8048380();

void fun_8048367() {
    g80484e7 = reinterpret_cast<int32_t>(fun_8048380);
    g80484eb = 0x80483af;
    goto 0x8048183;
}

void fun_804833f() {
    __asm__("int 0x80");
    __asm__("int 0x80");
}

uint32_t g80484e3;

signed char g8048afb;

int32_t fun_80480c7(signed char* ecx) {
    uint32_t edi2;
    int32_t eax3;
    int32_t ecx4;
    signed char* edi5;
    uint32_t esi6;
    int1_t zf7;

    edi2 = g80484e3;
    fun_804804c(ecx, __return_address());
    if (static_cast<int1_t>(edi2 >> 8)) {
    }
    if (!static_cast<int1_t>(edi2 >> 7)) {
        addr_804813f_4:
        eax3 = 37;
        __asm__("int 0x80");
        if (0) {
            if (static_cast<int1_t>(edi2 >> 5)) {
                eax3 = 4;
                __asm__("int 0x80");
            }
        } else {
            if (!static_cast<int1_t>(edi2 >> 6)) {
                __asm__("int 0x80");
                return 4;
            }
        }
    } else {
        __asm__("int 0x80");
        ecx4 = -1;
        edi5 = reinterpret_cast<signed char*>(0x8048afb);
        esi6 = edi2;
        do {
            if (!ecx4) 
                break;
            --ecx4;
            ++edi5;
            ++esi6;
        } while (*edi5 != 32);
        edi2 = esi6;
        __asm__("int 0x80");
        __asm__("int 0x80");
        eax3 = 3;
        __asm__("int 0x80");
        zf7 = g8048afb == 0x79;
        if (zf7) 
            goto addr_804813f_4;
    }
    return eax3;
}

struct s3 {
    unsigned char f0;
    signed char[111] pad112;
    unsigned char f70;
};

struct s4 {
    unsigned char f0;
    unsigned char f1;
};

struct s5 {
    unsigned char f0;
    signed char[72] pad73;
    uint32_t f49;
};

unsigned char g1;

struct s6 {
    signed char[76] pad76;
    void* f4c;
};

unsigned char g804844f = 73;

struct s7 {
    unsigned char f0;
    signed char[66] pad67;
    signed char f43;
    signed char[2] pad70;
    unsigned char f46;
};

struct s8 {
    signed char[79] pad79;
    unsigned char f4f;
};

struct s9 {
    unsigned char f0;
    signed char[86] pad87;
    uint32_t f57;
};

signed char g804845e = 76;

unsigned char g804842f = 10;

int32_t fun_8048380() {
    struct s3* edi1;
    int32_t ecx2;
    struct s4* esi3;
    int1_t cf4;
    unsigned char* edx5;
    unsigned char* ecx6;
    struct s1* ebx7;
    struct s5* eax8;
    uint1_t cf9;
    uint1_t cf10;
    int1_t zf11;
    int1_t sf12;
    unsigned char tmp8_13;
    uint1_t cf14;
    unsigned char tmp8_15;
    uint1_t cf16;
    unsigned char tmp8_17;
    struct s6* ecx18;
    struct s7* eax19;
    struct s7* tmp32_20;
    struct s7* eax21;
    struct s8* ecx22;
    uint1_t cf23;
    uint1_t cf24;
    unsigned char tmp8_25;
    uint1_t cf26;
    int32_t ebx27;
    unsigned char* esi28;
    unsigned char tmp8_29;
    uint1_t cf30;
    uint1_t cf31;
    struct s9* eax32;
    unsigned char tmp8_33;
    uint1_t cf34;
    uint32_t tmp32_35;
    unsigned char tmp8_36;
    unsigned char tmp8_37;

    edi1 = reinterpret_cast<struct s3*>(0x8048afb);
    ecx2 = -1;
    do {
        if (!ecx2) 
            break;
        --ecx2;
        edi1 = reinterpret_cast<struct s3*>(&edi1->pad112);
        esi3 = reinterpret_cast<struct s4*>(&esi3->f1);
    } while (edi1->f0 != 32);
    __asm__("int 0x80");
    *reinterpret_cast<signed char*>(&g80484df) = 0;
    cf4 = static_cast<int1_t>(g80484e3 >> 3);
    if (!cf4) {
        return 4;
    }
    edx5 = reinterpret_cast<unsigned char*>(1);
    ecx6 = reinterpret_cast<unsigned char*>("\nHUP");
    __asm__("int 0x80");
    ebx7 = g80484df;
    eax8 = reinterpret_cast<struct s5*>(1);
    __asm__("int 0x80");
    __asm__("das ");
    if (__undefined()) {
        addr_804843f_7:
        ecx6[reinterpret_cast<uint32_t>(eax8) * 2] = reinterpret_cast<unsigned char>(ecx6[reinterpret_cast<uint32_t>(eax8) * 2] + *reinterpret_cast<unsigned char*>(&eax8));
        edx5 = reinterpret_cast<unsigned char*>(2);
        goto addr_8048447_8;
    } else {
        __asm__("outsd ");
        __asm__("arpl [eax], ax");
        __asm__("das ");
        if (!cf4) {
            addr_8048447_8:
            esi3 = reinterpret_cast<struct s4*>(&esi3->f1);
            goto addr_804844b_10;
        } else {
            __asm__("popad ");
            __asm__("outsb ");
            __asm__("outsb ");
            edi1->f70 = 0;
            if (!edi1->f70) {
                addr_804844b_10:
                eax8->f0 = reinterpret_cast<unsigned char>(eax8->f0 + *reinterpret_cast<unsigned char*>(&ecx6));
                ebx7 = reinterpret_cast<struct s1*>(reinterpret_cast<int32_t>(ebx7) - 1);
                --ecx6;
                ebx7->f45 = ebx7->f45 | reinterpret_cast<uint32_t>(edx5);
                edi1 = reinterpret_cast<struct s3*>(&edi1->pad112);
                edx5 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx5) | eax8->f49);
                eax8 = reinterpret_cast<struct s5*>(0x4d524c41);
                __asm__("andnps xmm2, [ebx+0x52]");
                *edx5 = reinterpret_cast<unsigned char>(*edx5 ^ reinterpret_cast<uint32_t>(ecx6));
                *reinterpret_cast<unsigned char*>(&ecx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx6) ^ *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx7) + 0x9aa49882));
                cf9 = 0;
                goto addr_8048471_13;
            } else {
                __asm__("outsd ");
                __asm__("outsb ");
                cf10 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1) < g1);
                zf11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax8) + 1) == g1;
                sf12 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax8) + 1) < reinterpret_cast<signed char>(g1);
                __asm__("popad ");
                __asm__("insb ");
                __asm__("insb ");
                if (!sf12) {
                    addr_804840d_15:
                    __asm__("arpl [ebp+0x73], sp");
                    if (!cf10) {
                        addr_804847a_16:
                        tmp8_13 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx5) + ebx7->f54) + cf10);
                        cf14 = reinterpret_cast<uint1_t>(tmp8_13 < *reinterpret_cast<unsigned char*>(&edx5));
                        *reinterpret_cast<unsigned char*>(&edx5) = tmp8_13;
                        edi1 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(edi1) - 1);
                        cf10 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(edx5) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx7) + reinterpret_cast<uint32_t>(edx5) * 2 + 84)) + cf14 < reinterpret_cast<uint32_t>(edx5));
                        goto addr_8048482_17;
                    } else {
                        if (!zf11) {
                            addr_8048482_17:
                            tmp8_15 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) + 84) + cf10);
                            cf16 = reinterpret_cast<uint1_t>(tmp8_15 < *reinterpret_cast<unsigned char*>(&eax8));
                            *reinterpret_cast<unsigned char*>(&eax8) = tmp8_15;
                            --ecx6;
                            esi3 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi3) - 1);
                            eax8 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax8) + 0x554f5454 + cf16);
                            tmp8_17 = reinterpret_cast<unsigned char>(edi1->f0 + *reinterpret_cast<unsigned char*>(&eax8));
                            cf9 = reinterpret_cast<uint1_t>(tmp8_17 < edi1->f0);
                            edi1->f0 = tmp8_17;
                            goto addr_8048496_19;
                        } else {
                            __asm__("insb ");
                            if (!sf12) {
                                addr_8048439_21:
                                ecx18 = reinterpret_cast<struct s6*>(ecx6 - 1);
                                ecx6 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx18) + reinterpret_cast<uint32_t>(ecx18->f4c));
                                goto addr_804843f_7;
                            } else {
                                g804844f = 0;
                                cf9 = 0;
                                if (0) {
                                    addr_8048496_19:
                                    eax19 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(eax8) - (0x464f5250 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax8) < 0x464f5250 + cf9)));
                                    tmp32_20 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(eax19) + 0x475255);
                                    eax21 = tmp32_20;
                                    ecx22 = reinterpret_cast<struct s8*>(ecx6 + 1);
                                    cf23 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ebx7) < reinterpret_cast<unsigned char>(eax21->f43 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_20) < reinterpret_cast<uint32_t>(eax19))));
                                    *reinterpret_cast<unsigned char*>(&ebx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx7) - reinterpret_cast<unsigned char>(eax21->f43 + cf23));
                                    cf24 = reinterpret_cast<uint1_t>(eax21->f46 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx7) + cf23));
                                    eax21->f46 = reinterpret_cast<unsigned char>(eax21->f46 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx7) + cf24));
                                    ecx22->f4f = reinterpret_cast<unsigned char>(ecx22->f4f - (reinterpret_cast<uint32_t>(ecx22) + reinterpret_cast<uint1_t>(ecx22->f4f < reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(ecx22) + cf24))));
                                    tmp8_25 = reinterpret_cast<unsigned char>(esi3->f0 + *reinterpret_cast<signed char*>(&eax21));
                                    cf26 = reinterpret_cast<uint1_t>(tmp8_25 < esi3->f0);
                                    esi3->f0 = tmp8_25;
                                    ebx27 = reinterpret_cast<int32_t>(ebx7) - 1;
                                    esi28 = &esi3->f1;
                                    ecx22->f4f = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx22->f4f + *reinterpret_cast<signed char*>(&ecx22)) + cf26);
                                    tmp8_29 = reinterpret_cast<unsigned char>(eax21->f0 + *reinterpret_cast<signed char*>(&eax21));
                                    cf30 = reinterpret_cast<uint1_t>(tmp8_29 < eax21->f0);
                                    eax21->f0 = tmp8_29;
                                    cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax21) < 0x444c43 + cf30);
                                    eax32 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(eax21) - (0x444c43 + cf31));
                                    eax32->f57 = eax32->f57 + reinterpret_cast<int32_t>(ebx7) + cf31;
                                    tmp8_33 = reinterpret_cast<unsigned char>(*esi28 + *reinterpret_cast<signed char*>(&ebx27));
                                    cf34 = reinterpret_cast<uint1_t>(tmp8_33 < *esi28);
                                    *esi28 = tmp8_33;
                                    *reinterpret_cast<unsigned char*>(&eax32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) - reinterpret_cast<unsigned char>(85 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax32) < reinterpret_cast<unsigned char>(85 + cf34))));
                                    eax32->f0 = reinterpret_cast<unsigned char>(eax32->f0 + *reinterpret_cast<unsigned char*>(&eax32));
                                    eax32->f0 = reinterpret_cast<unsigned char>(eax32->f0 + *reinterpret_cast<unsigned char*>(&eax32));
                                } else {
                                    __asm__("outsd ");
                                    goto addr_8048425_24;
                                }
                            }
                        }
                    }
                } else {
                    ebx7->f69 = reinterpret_cast<unsigned char>(ebx7->f69 & 47);
                    __asm__("insb ");
                    __asm__("insb ");
                    cf9 = __intrinsic();
                    if (__intrinsic()) {
                        addr_8048471_13:
                        eax8 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(eax8) - 1);
                        tmp32_35 = ebx7->f4f + reinterpret_cast<uint32_t>(eax8) + cf9;
                        cf10 = reinterpret_cast<uint1_t>(tmp32_35 < ebx7->f4f);
                        ebx7->f4f = tmp32_35;
                        esi3 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi3) - 1);
                        goto addr_804847a_16;
                    } else {
                        __asm__("outsd ");
                        __asm__("arpl [ebp+0x73], sp");
                        if (!cf9) {
                            addr_8048425_24:
                            __asm__("arpl [ebp+0x73], sp");
                            if (cf9) {
                                g804845e = reinterpret_cast<signed char>(g804845e - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx7) + 1));
                                __asm__("outsb ");
                                g1 = reinterpret_cast<unsigned char>(g1 - reinterpret_cast<uint32_t>("\nHUP"));
                                eax8 = reinterpret_cast<struct s5*>(0);
                                tmp8_36 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(g804842f));
                                g804842f = tmp8_36;
                            }
                        } else {
                            __asm__("popa ");
                            cf10 = __intrinsic();
                            sf12 = __undefined();
                            zf11 = __undefined();
                            goto addr_804840d_15;
                        }
                    }
                }
            }
        }
    }
    ecx6 = reinterpret_cast<unsigned char*>(")\nHUP");
    esi3 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi3) - 1);
    tmp8_37 = reinterpret_cast<unsigned char>(g1 + *reinterpret_cast<unsigned char*>(&eax8));
    g1 = tmp8_37;
    goto addr_8048439_21;
}
