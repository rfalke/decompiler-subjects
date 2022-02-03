
int32_t fun_804805c() {
    int32_t eax1;
    int32_t edx2;

    eax1 = 0;
    edx2 = 0;
    do {
        __asm__("lodsb ");
    } while (1);
    while (*reinterpret_cast<signed char*>(&eax1) > 47 && (*reinterpret_cast<signed char*>(&eax1) <= 58 && ((*reinterpret_cast<signed char*>(&eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax1) - 48), edx2 = edx2 + eax1, *reinterpret_cast<signed char*>(&eax1) > 47) && *reinterpret_cast<signed char*>(&eax1) <= 58))) {
        edx2 = edx2 * 10;
    }
    return edx2;
}

struct s0 {
    void* f0;
    signed char[2885635] pad2885636;
    signed char f2c0804;
};

struct s1 {
    signed char[2] pad2;
    signed char f2;
};

struct s2 {
    signed char[2] pad2;
    signed char f2;
};

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
    unsigned char* edi24;
    signed char* edi25;
    void* tmp8_26;
    uint1_t cf27;
    struct s1* edx28;
    struct s2* edx29;

    if (less_or_equal2) {
        *ecx = *ecx + eax3;
        *ebx4 = *ebx5 + eax6;
        *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
        *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
        *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
        *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
        *reinterpret_cast<signed char*>(&eax19) = reinterpret_cast<signed char>(al20 + *eax21);
        eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax19) + reinterpret_cast<int32_t>(*eax19));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f2c0804 = reinterpret_cast<signed char>(static_cast<int32_t>(eax22->f2c0804));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax22) + reinterpret_cast<int32_t>(eax22)) + dh23);
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<int32_t>(eax22));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22) - 0x7ffff7fc) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + 8);
        __asm__("wait ");
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + reinterpret_cast<unsigned char>(eax22->f0));
        *reinterpret_cast<void**>(&eax22) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)) + reinterpret_cast<unsigned char>(eax22->f0));
        *edi24 = reinterpret_cast<unsigned char>(*edi25 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
        eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    }
    tmp8_26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22)));
    cf27 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_26) < reinterpret_cast<unsigned char>(eax22->f0));
    eax22->f0 = tmp8_26;
    eax22->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax22->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax22))) + cf27);
    edx28->f2 = reinterpret_cast<signed char>(edx29->f2 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    __asm__("int 0x80");
    __asm__("int 0x80");
}

struct s3 {
    signed char f0;
    signed char f1;
};

unsigned char g1;

signed char g42;

unsigned char g670001;

signed char g41;

int32_t g80482af;

uint32_t g80482a3;

void fun_8048082(int32_t a1, struct s3* a2, signed char* a3, signed char* a4) {
    signed char* ebp5;
    struct s3* edi6;
    signed char* edx7;
    int32_t ebx8;
    unsigned char* eax9;
    unsigned char tmp8_10;
    signed char tmp8_11;
    unsigned char tmp8_12;
    unsigned char tmp8_13;
    unsigned char tmp8_14;
    unsigned char tmp8_15;
    unsigned char tmp8_16;
    uint1_t cf17;
    unsigned char tmp8_18;
    signed char tmp8_19;
    unsigned char tmp8_20;
    unsigned char tmp8_21;
    signed char bl22;
    int1_t zf23;
    uint32_t ebx24;
    uint32_t eax25;
    int32_t ecx26;
    signed char* esi27;
    struct s3* v28;
    int32_t ecx29;
    struct s3* edi30;
    signed char al31;
    int16_t ax32;
    int16_t ax33;
    int16_t ax34;
    int32_t eax35;
    int32_t eax36;
    int16_t ax37;
    int16_t ax38;
    int16_t ax39;
    int32_t eax40;
    int32_t eax41;

    if (__return_address() == 1) 
        goto addr_8048264_2;
    ebp5 = reinterpret_cast<signed char*>(0);
    edi6 = a2;
    if (edi6->f0 == 45) {
        edx7 = a3;
        if (!edx7) 
            goto addr_8048264_2;
        if (edi6->f1 != 0x7a) 
            goto addr_8048187_6;
    } else {
        if (edi6->f0 == 33) 
            goto 0x8048054;
        if (!a3) 
            goto 0x804804c;
        if (*a3 == 61) 
            goto addr_804823e_10; else 
            goto addr_80480ac_11;
    }
    addr_8048230_12:
    ebp5 = ebp5;
    if (!ebp5) {
        addr_804825d_13:
        __asm__("int 0x80");
        goto addr_8048264_2;
    } else {
        goto addr_8048264_2;
    }
    addr_8048187_6:
    if (edi6->f1 == 0x6e) {
        ebp5 = reinterpret_cast<signed char*>(1);
        goto addr_8048230_12;
    } else {
        if (edi6->f1 == 0x74) {
            fun_804805c();
            edx7 = reinterpret_cast<signed char*>(0x80482db);
            __asm__("int 0x80");
            if (!__intrinsic()) {
                goto addr_804825d_13;
            }
        }
        __asm__("int 0x80");
        if (__intrinsic()) {
            addr_8048264_2:
            ebx8 = 1;
            eax9 = reinterpret_cast<unsigned char*>(1);
            __asm__("int 0x80");
            *edx7 = reinterpret_cast<signed char>(*edx7 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax9) + 1));
            __asm__("pushad ");
            tmp8_10 = reinterpret_cast<unsigned char>(g1 + 1);
            g1 = tmp8_10;
            __asm__("arpl [eax], ax");
            g1 = reinterpret_cast<unsigned char>(g1 & 1);
            tmp8_11 = reinterpret_cast<signed char>(g42 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax9) + 1));
            g42 = tmp8_11;
            tmp8_12 = reinterpret_cast<unsigned char>(g1 + 1);
            g1 = tmp8_12;
            tmp8_13 = reinterpret_cast<unsigned char>(g1 + 1);
            g1 = tmp8_13;
            tmp8_14 = reinterpret_cast<unsigned char>(g1 + 1);
            g1 = tmp8_14;
            tmp8_15 = reinterpret_cast<unsigned char>(g670001 + 1);
            g670001 = tmp8_15;
            tmp8_16 = reinterpret_cast<unsigned char>(g1 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx7) + 1));
            cf17 = reinterpret_cast<uint1_t>(tmp8_16 < g1);
            g1 = tmp8_16;
            tmp8_18 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(g1 + 1) + cf17);
            g1 = tmp8_18;
            *ebp5 = reinterpret_cast<signed char>(*ebp5 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx7) + 1));
            g1 = reinterpret_cast<unsigned char>(g1 | 1);
            tmp8_19 = reinterpret_cast<signed char>(g41 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx8) + 1));
            g41 = tmp8_19;
            tmp8_20 = reinterpret_cast<unsigned char>(g1 + 1);
            g1 = tmp8_20;
            tmp8_21 = reinterpret_cast<unsigned char>(g1 + 1);
            g1 = tmp8_21;
        } else {
            bl22 = edi6->f1;
            if (bl22 == 0x73) {
                zf23 = g80482af == 0;
                if (zf23) 
                    goto addr_804825d_13;
                goto addr_8048264_2;
            } else {
                if (bl22 != 0x72) {
                    if (bl22 != 0x77) {
                        do {
                            __asm__("lodsb ");
                            if (0x6b == bl22) 
                                goto addr_80481d1_29;
                        } while (1);
                        goto addr_80481cc_31;
                    }
                }
            }
        }
    }
    __asm__("int 0x80");
    if (!__intrinsic()) {
        goto addr_804825d_13;
    }
    addr_80481d1_29:
    __asm__("lodsd ");
    ebx24 = g80482a3;
    if (0x6b == (ebx24 & 0x6b)) 
        goto addr_804825d_13;
    goto addr_8048264_2;
    addr_80481cc_31:
    goto 0x804804c;
    addr_804823e_10:
    eax25 = 0;
    ecx26 = -1;
    esi27 = a4;
    v28 = edi6;
    do {
        if (!ecx26) 
            break;
        --ecx26;
        edi6 = reinterpret_cast<struct s3*>(&edi6->f1);
        ++esi27;
    } while (edi6->f0);
    ecx29 = ~ecx26;
    edi30 = v28;
    do {
        if (!ecx29) 
            break;
        --ecx29;
        edi30 = reinterpret_cast<struct s3*>(&edi30->f1);
        ++esi27;
    } while (*esi27 == edi30->f0);
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi30) - 1) && !*(esi27 - 1)) {
        eax25 = 1;
    }
    if (!(eax25 ^ reinterpret_cast<uint32_t>(ebp5))) 
        goto addr_8048264_2; else 
        goto addr_804825d_13;
    addr_80480ac_11:
    if (*a3 == 0x3d21) 
        goto addr_804823b_43;
    __asm__("lodsb ");
    if (al31 != 45) 
        goto 0x8048054;
    __asm__("lodsw ");
    if (*a3) 
        goto 0x804804c;
    if (ax32 == 0x7165) 
        goto addr_804823e_10;
    if (ax33 == 0x656e) {
        addr_804823b_43:
        ebp5 = reinterpret_cast<signed char*>(1);
        goto addr_804823e_10;
    } else {
        if (ax34 == 0x7467) {
            addr_804810d_49:
            edx7 = reinterpret_cast<signed char*>(0);
            eax35 = fun_804805c();
            eax36 = fun_804805c();
            if (ebp5 == 2) {
                if (eax36 >= eax35) 
                    goto addr_804825d_13;
                goto addr_8048264_2;
            } else {
                if (eax36 > eax35) 
                    goto addr_804825d_13;
                goto addr_8048264_2;
            }
        } else {
            if (ax37 == 0x6567) {
                ebp5 = reinterpret_cast<signed char*>(2);
                goto addr_804810d_49;
            } else {
                if (ax38 != 0x746c) {
                    if (ax39 == 0x656c) {
                        ebp5 = reinterpret_cast<signed char*>(2);
                    } else {
                        goto 0x804804c;
                    }
                }
                edx7 = reinterpret_cast<signed char*>(0);
                eax40 = fun_804805c();
                eax41 = fun_804805c();
                if (ebp5 != 2) 
                    goto addr_8048158_61;
            }
        }
    }
    if (eax41 <= eax40) 
        goto addr_804825d_13;
    goto addr_8048264_2;
    addr_8048158_61:
    if (eax41 < eax40) 
        goto addr_804825d_13;
    goto addr_8048264_2;
}
