
void frame_dummy();

void __do_global_ctors_aux();

void _init(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

int32_t atexit = 0x8048796;

void atexit(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto atexit;
}

void fun_8049205(int32_t* a1);

struct s1 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t* f12;
    signed char[4] pad20;
    struct s1* f20;
};

struct s0 {
    signed char[1524] pad1524;
    struct s1* f1524;
};

void abort();

void free(int32_t* a1, int32_t* a2);

void __deregister_frame_info(int32_t a1) {
    int32_t* v2;
    int32_t* ebp3;
    int32_t* ebx4;
    struct s0* ebx5;
    int32_t eax6;
    struct s1** ecx7;
    struct s1* edx8;
    int32_t* v9;

    v2 = ebp3;
    fun_8049205(ebx4);
    ebx5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx4) + 0x128b);
    eax6 = a1;
    ecx7 = &ebx5->f1524;
    if (!ebx5->f1524) {
        addr_8049245_3:
        abort();
    } else {
        do {
            edx8 = *ecx7;
            if (edx8->f8 == eax6) 
                goto addr_8049227_6;
            ecx7 = &edx8->f20;
        } while (edx8->f20);
        goto addr_8049245_3;
    }
    addr_804924c_8:
    return;
    addr_8049227_6:
    *ecx7 = edx8->f20;
    if (edx8->f0) {
        v9 = edx8->f12;
        free(v9, v2);
        goto addr_804924c_8;
    }
}

struct s2 {
    int32_t f0;
    int32_t f4;
    uint32_t f8;
    uint32_t f12;
};

void fde_insert(struct s2** a1, int32_t a2, struct s2* a3) {
    int32_t edx4;
    struct s2** ecx5;
    struct s2* edi6;
    struct s2* esi7;

    edx4 = a2;
    a1[edx4] = a3;
    if (edx4) {
        ecx5 = a1 + edx4;
        do {
            edi6 = *ecx5;
            esi7 = *(a1 + edx4 - 1);
            if (reinterpret_cast<int32_t>(edi6->f8 - esi7->f8) >= reinterpret_cast<int32_t>(0)) 
                break;
            *ecx5 = esi7;
            *(a1 + edx4 - 1) = edi6;
            --ecx5;
            --edx4;
        } while (edx4);
    }
    return;
}

struct s3 {
    signed char[4] pad4;
    int32_t f4;
};

uint32_t count_fdes(struct s2* a1) {
    struct s2* edx2;
    uint32_t ecx3;
    struct s3* eax4;

    edx2 = a1;
    ecx3 = 0;
    if (edx2->f0) {
        do {
            if (edx2->f4 && edx2->f8) {
                ++ecx3;
            }
            eax4 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(edx2) + edx2->f0);
            edx2 = reinterpret_cast<struct s2*>(&eax4->f4);
        } while (eax4->f4);
    }
    return ecx3;
}

void fun_8048aba();

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

void add_fdes(struct s2* a1, struct s2** a2, int32_t* a3, uint32_t* a4, uint32_t* a5) {
    struct s2* esi6;
    int32_t edi7;
    uint32_t v8;
    uint32_t v9;
    int32_t v10;
    uint32_t eax11;
    uint32_t eax12;
    struct s4* eax13;

    fun_8048aba();
    esi6 = a1;
    edi7 = *a3;
    v8 = *a4;
    v9 = *a5;
    if (esi6->f0) {
        do {
            if (esi6->f4 && esi6->f8) {
                v10 = edi7;
                ++edi7;
                fde_insert(a2, v10, esi6);
                eax11 = esi6->f8;
                if (v8 > eax11) {
                    v8 = eax11;
                }
                eax12 = eax11 + esi6->f12;
                if (v9 < eax12) {
                    v9 = eax12;
                }
            }
            eax13 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(esi6) + esi6->f0);
            esi6 = reinterpret_cast<struct s2*>(&eax13->f4);
        } while (eax13->f4);
    }
    *a3 = edi7;
    *a4 = v8;
    *a5 = v9;
    return;
}

struct s5 {
    uint32_t f0;
    uint32_t f4;
    struct s2* f8;
    struct s2** f12;
    uint32_t f16;
    struct s5* f20;
};

void fun_8048b4a(int32_t a1);

struct s2** malloc(uint32_t* a1, int32_t a2);

void frame_init(struct s5* a1) {
    void* ebp2;
    int32_t v3;
    int32_t esi4;
    int32_t ebx5;
    struct s2* v6;
    uint32_t eax7;
    uint32_t v8;
    struct s2** esi9;
    struct s2* v10;
    uint32_t eax11;
    struct s2** eax12;
    struct s2** edi13;
    struct s2* v14;
    struct s2** esi15;
    uint32_t* v16;
    struct s2* v17;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = esi4;
    fun_8048b4a(ebx5);
    if (!a1->f12) {
        v6 = a1->f8;
        eax7 = count_fdes(v6);
        v8 = eax7;
    } else {
        esi9 = a1->f12;
        v8 = 0;
        if (*esi9) {
            do {
                v10 = *esi9;
                eax11 = count_fdes(v10);
                v8 = v8 + eax11;
                ++esi9;
            } while (*esi9);
        }
    }
    a1->f16 = v8;
    eax12 = malloc(v8 << 2, v3);
    edi13 = eax12;
    if (!a1->f12) {
        v14 = a1->f8;
        add_fdes(v14, edi13, reinterpret_cast<int32_t>(ebp2) - 12, reinterpret_cast<int32_t>(ebp2) - 8, reinterpret_cast<int32_t>(ebp2) - 4);
    } else {
        esi15 = a1->f12;
        if (*esi15) {
            v16 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebp2) - 4);
            do {
                v17 = *esi15;
                add_fdes(v17, edi13, reinterpret_cast<int32_t>(ebp2) - 12, reinterpret_cast<int32_t>(ebp2) - 8, v16);
                ++esi15;
            } while (*esi15);
        }
    }
    a1->f12 = edi13;
    a1->f0 = 0xffffffff;
    a1->f4 = 0;
    return;
}

unsigned char* decode_uleb128(unsigned char* a1, unsigned char* a2, unsigned char* a3, unsigned char* a4, unsigned char* a5) {
    unsigned char edi6;
    unsigned char esi7;
    uint32_t edx8;
    unsigned char ecx9;

    edi6 = reinterpret_cast<unsigned char>(0);
    esi7 = reinterpret_cast<unsigned char>(0);
    while (edx8 = *a1, ++a1, ecx9 = esi7, edi6 = reinterpret_cast<unsigned char>(edi6 | (edx8 & 0x7f) << ecx9), *reinterpret_cast<signed char*>(&edx8) < 0) {
        esi7 = reinterpret_cast<unsigned char>(esi7 + 7);
    }
    *a2 = edi6;
    return a1;
}

int32_t free = 0x80487e6;

void free(int32_t* a1, int32_t* a2) {
    goto free;
}

int32_t abort = 0x80487f6;

void abort() {
    goto abort;
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

struct s7 {
    signed char* f0;
    unsigned char f4;
    signed char[3] pad8;
    unsigned char f8;
    signed char[3] pad12;
    uint32_t f12;
    uint32_t f16;
};

void fun_8048cd6(unsigned char* a1, unsigned char* a2, unsigned char* a3);

struct s8 {
    signed char[9] pad9;
    signed char f9;
};

struct s9 {
    signed char[1] pad1;
    unsigned char f1;
    signed char[3] pad5;
    unsigned char f5;
};

unsigned char* decode_sleb128(unsigned char* a1, uint32_t* a2, unsigned char* a3, unsigned char* a4);

unsigned char* extract_cie_info(struct s6* a1, struct s7* a2) {
    void* ebp3;
    unsigned char* v4;
    unsigned char* edi5;
    unsigned char* v6;
    unsigned char* esi7;
    unsigned char* ebx8;
    void* ebx9;
    struct s8* edx10;
    signed char* esi11;
    signed char* v12;
    int32_t ecx13;
    signed char* edi14;
    int1_t zf15;
    signed char* eax16;
    signed char* v17;
    signed char* edx18;
    signed char* edi19;
    int32_t ecx20;
    signed char* edi21;
    int32_t ecx22;
    int1_t zf23;
    struct s9* eax24;
    struct s9* v25;
    unsigned char* edx26;
    signed char* esi27;
    signed char* edi28;
    int32_t ecx29;
    int1_t zf30;
    unsigned char* v31;
    unsigned char* eax32;
    unsigned char* eax33;
    unsigned char* edx34;
    unsigned char* v35;
    unsigned char* eax36;
    void* v37;
    unsigned char* eax38;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = edi5;
    v6 = esi7;
    fun_8048cd6(ebx8, v6, v4);
    ebx9 = reinterpret_cast<void*>(ebx8 + 0x17ba);
    edx10 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(a1) - (a1->f4 - 4));
    esi11 = &edx10->f9;
    v12 = esi11;
    a2->f0 = esi11;
    ecx13 = 1;
    edi14 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx9) - 0x1006);
    zf15 = 1;
    while (ecx13) {
        --ecx13;
        zf15 = *esi11 == *edi14;
        *edi14 = *esi11;
        ++edi14;
        ++esi11;
    }
    if (zf15) {
        addr_8048d34_6:
        eax16 = a2->f0;
        v17 = eax16;
        edx18 = eax16;
        edi19 = edx18;
        ecx20 = -1;
    } else {
        esi11 = v12;
        edi21 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx9) - 0x1005);
        ecx22 = 3;
        zf23 = 1;
        while (ecx22) {
            --ecx22;
            zf23 = *esi11 == *edi21;
            *edi21 = *esi11;
            ++edi21;
            ++esi11;
        }
        if (zf23) 
            goto addr_8048d34_6;
        if (edx10->f9 == 0x7a) 
            goto addr_8048d34_6; else 
            goto addr_8048d2a_12;
    }
    do {
        if (!ecx20) 
            break;
        --ecx20;
        ++edi19;
    } while (*edi19);
    eax24 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(edx18) + ~ecx20 - 1);
    v25 = eax24;
    edx26 = &eax24->f1;
    esi27 = v17;
    edi28 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx9) - 0x1005);
    ecx29 = 3;
    zf30 = 1;
    while (ecx29) {
        --ecx29;
        zf30 = *esi27 == *edi28;
        *edi28 = *esi27;
        ++edi28;
        ++esi27;
    }
    if (!zf30) {
        a2->f4 = reinterpret_cast<unsigned char>(0);
    } else {
        a2->f4 = eax24->f1;
        edx26 = &v25->f5;
    }
    eax32 = decode_uleb128(edx26, &a2->f8, v6, v4, v31);
    eax33 = decode_sleb128(eax32, &a2->f12, edx26, &a2->f8);
    a2->f16 = *eax33;
    edx34 = eax33 + 1;
    if (*a2->f0 == 0x7a) {
        eax36 = decode_uleb128(edx34, reinterpret_cast<int32_t>(ebp3) - 4, v6, v4, v35);
        edx34 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax36) + reinterpret_cast<int32_t>(v37));
    }
    eax38 = edx34;
    addr_8048dd7_24:
    return eax38;
    addr_8048d2a_12:
    eax38 = reinterpret_cast<unsigned char*>(0);
    goto addr_8048dd7_24;
}

int32_t memset = 0x8048806;

void memset(int32_t a1, int32_t a2, int32_t a3) {
    goto memset;
}

struct s10 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

void fun_8048dee(unsigned char* a1, unsigned char* a2, unsigned char* a3);

unsigned char* execute_cfa_insn(unsigned char* a1, void* a2, struct s10* a3, uint32_t* a4) {
    unsigned char* ebx5;
    unsigned char* esi6;
    unsigned char* edi7;
    void* ebx8;
    uint32_t eax9;
    unsigned char* v10;
    unsigned char* esi11;
    unsigned char* v12;
    uint32_t v13;
    unsigned char* eax14;
    int32_t v15;
    int32_t v16;

    fun_8048dee(ebx5, esi6, edi7);
    ebx8 = reinterpret_cast<void*>(ebx5 + 0x16a2);
    eax9 = *a1;
    v10 = a1 + 1;
    esi11 = reinterpret_cast<unsigned char*>(eax9 & 64);
    v12 = esi11;
    if (!esi11) {
        if (*reinterpret_cast<signed char*>(&eax9) >= reinterpret_cast<signed char>(0)) {
            if (!(*reinterpret_cast<unsigned char*>(&eax9) & 0xc0)) {
                if (eax9 > 46) {
                    abort();
                } else {
                    goto reinterpret_cast<uint32_t>(ebx8) - *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx8) + eax9 * 4 - 0x15f0);
                }
            } else {
                *reinterpret_cast<signed char*>((eax9 & 63) + reinterpret_cast<int32_t>(a2) + 92) = *reinterpret_cast<signed char*>(&v12);
            }
        } else {
            v13 = eax9 & 63;
            eax14 = decode_uleb128(v10, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, esi6, edi7, v12);
            v10 = eax14;
            v15 = v16 * a3->f12;
            *reinterpret_cast<signed char*>(v13 + reinterpret_cast<int32_t>(a2) + 92) = 1;
            *reinterpret_cast<int32_t*>(v13 * 4 + reinterpret_cast<int32_t>(a2) + 16) = v15;
        }
    } else {
        *a4 = *a4 + (eax9 & 63) * a3->f8;
    }
    return v10;
}

void fun_80488e1();

struct s11 {
    signed char[1500] pad1500;
    int32_t f1500;
};

struct s12 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    struct s12* f20;
};

void __register_frame_info(int32_t a1, struct s12* a2);

void frame_dummy() {
    struct s11* ebx1;
    int32_t ebx2;

    fun_80488e1();
    ebx1 = reinterpret_cast<struct s11*>(ebx2 + 0x1baf);
    __register_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc, &ebx1->f1500);
    return;
}

void fun_80493ca();

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t ebx2;
    int32_t* esi3;
    int32_t eax4;

    fun_80493ca();
    eax1 = ebx2 + 0x10c6 + 0xd0;
    esi3 = reinterpret_cast<int32_t*>(eax1 - 4);
    if (*reinterpret_cast<int32_t*>(eax1 - 4) != -1) {
        do {
            eax4 = *esi3;
            eax4();
            --esi3;
        } while (*esi3 != -1);
    }
    return;
}

void fun_8048889();

struct s13 {
    signed char[200] pad200;
    int32_t* f200;
};

void __do_global_dtors_aux() {
    struct s13* ebx1;
    int32_t ebx2;
    int32_t* eax3;
    int32_t eax4;

    fun_8048889();
    ebx1 = reinterpret_cast<struct s13*>(ebx2 + 0x1c07);
    while (eax3 = ebx1->f200, !!*eax3) {
        ebx1->f200 = eax3 + 1;
        eax4 = *eax3;
        eax4();
    }
    __deregister_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc);
    return;
}

int32_t __fpstart = 0x80487a6;

void __fpstart(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    goto __fpstart;
}

struct s14 {
    signed char[8] pad8;
    int32_t f8;
};

void printf(int32_t a1, int32_t a2);

struct s15 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t main(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    struct s14* ebp8;
    int32_t v9;
    struct s15* ebp10;

    __asm__("in al, dx");
    switch (ebp8->f8 - 2) {
    default:
        v9 = reinterpret_cast<int32_t>("Other!\n");
        break;
    case 0:
        v9 = reinterpret_cast<int32_t>("Two!\n");
        break;
    case 1:
        v9 = reinterpret_cast<int32_t>("Three!\n");
        break;
    case 2:
        v9 = reinterpret_cast<int32_t>("Four!\n");
        break;
    case 3:
        v9 = reinterpret_cast<int32_t>("Five!\n");
        break;
    case 4:
        v9 = reinterpret_cast<int32_t>("Six!\n");
        break;
    case 5:
        v9 = reinterpret_cast<int32_t>("Seven!\n");
    }
    printf(v9, __return_address());
    goto ebp10->f4;
}

int32_t exit = 0x80487b6;

void exit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto exit;
}

struct s17 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t* f12;
    signed char[4] pad20;
    struct s17* f20;
};

struct s16 {
    signed char[1524] pad1524;
    struct s17* f1524;
};

struct s18 {
    signed char[8] pad8;
    int32_t f8;
};

struct s19 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049205(int32_t* a1) {
    struct s16* ebx2;
    int32_t eax3;
    struct s18* ebp4;
    struct s17** ecx5;
    struct s17* edx6;
    struct s19* ebp7;
    int32_t* v8;

    ebx2 = reinterpret_cast<struct s16*>(reinterpret_cast<int32_t>(__return_address()) + 0x128b);
    eax3 = ebp4->f8;
    ecx5 = &ebx2->f1524;
    if (!ebx2->f1524) {
        addr_8049245_2:
        abort();
    } else {
        do {
            edx6 = *ecx5;
            if (edx6->f8 == eax3) 
                goto addr_8049227_5;
            ecx5 = &edx6->f20;
        } while (edx6->f20);
        goto addr_8049245_2;
    }
    addr_804924c_7:
    goto ebp7->f4;
    addr_8049227_5:
    *ecx5 = edx6->f20;
    if (edx6->f0) {
        v8 = edx6->f12;
        free(v8, a1);
        goto addr_804924c_7;
    }
}

struct s20 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80488c9(int32_t a1, int32_t a2, int32_t a3) {
    struct s20* ebp4;

    goto ebp4->f4;
}

int32_t malloc = 0x80487d6;

struct s2** malloc(uint32_t* a1, int32_t a2) {
    goto malloc;
}

struct s21 {
    signed char[8] pad8;
    struct s2* f8;
};

struct s22 {
    signed char[16] pad16;
    int32_t* f16;
};

struct s23 {
    signed char[20] pad20;
    int32_t* f20;
};

struct s24 {
    signed char[24] pad24;
    int32_t* f24;
};

struct s25 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s26 {
    signed char[4] pad4;
    int32_t f4;
};

struct s27 {
    signed char[16] pad16;
    int32_t* f16;
};

struct s28 {
    signed char[20] pad20;
    int32_t* f20;
};

struct s29 {
    signed char[24] pad24;
    int32_t* f24;
};

struct s30 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048aba() {
    struct s2* esi1;
    struct s21* ebp2;
    int32_t edi3;
    struct s22* ebp4;
    int32_t ebp5;
    struct s23* ebp6;
    int32_t ebp7;
    struct s24* ebp8;
    int32_t v9;
    struct s2** v10;
    struct s25* ebp11;
    uint32_t eax12;
    int32_t ebp13;
    int32_t ebp14;
    uint32_t eax15;
    int32_t ebp16;
    int32_t ebp17;
    struct s26* eax18;
    struct s27* ebp19;
    struct s28* ebp20;
    int32_t ebp21;
    struct s29* ebp22;
    int32_t ebp23;
    struct s30* ebp24;

    esi1 = ebp2->f8;
    edi3 = *ebp4->f16;
    *reinterpret_cast<int32_t*>(ebp5 - 4) = *ebp6->f20;
    *reinterpret_cast<int32_t*>(ebp7 - 8) = *ebp8->f24;
    if (esi1->f0) {
        do {
            if (esi1->f4 && esi1->f8) {
                v9 = edi3;
                ++edi3;
                v10 = ebp11->f12;
                fde_insert(v10, v9, esi1);
                eax12 = esi1->f8;
                if (*reinterpret_cast<uint32_t*>(ebp13 - 4) > eax12) {
                    *reinterpret_cast<uint32_t*>(ebp14 - 4) = eax12;
                }
                eax15 = eax12 + esi1->f12;
                if (*reinterpret_cast<uint32_t*>(ebp16 - 8) < eax15) {
                    *reinterpret_cast<uint32_t*>(ebp17 - 8) = eax15;
                }
            }
            eax18 = reinterpret_cast<struct s26*>(reinterpret_cast<int32_t>(esi1) + esi1->f0);
            esi1 = reinterpret_cast<struct s2*>(&eax18->f4);
        } while (eax18->f4);
    }
    *ebp19->f16 = edi3;
    *ebp20->f20 = *reinterpret_cast<int32_t*>(ebp21 - 4);
    *ebp22->f24 = *reinterpret_cast<int32_t*>(ebp23 - 8);
    goto ebp24->f4;
}

struct s32 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s31 {
    signed char[8] pad8;
    struct s32* f8;
};

struct s34 {
    signed char[8] pad8;
    struct s2* f8;
};

struct s33 {
    signed char[8] pad8;
    struct s34* f8;
};

struct s36 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s35 {
    signed char[8] pad8;
    struct s36* f8;
};

struct s38 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s37 {
    signed char[8] pad8;
    struct s38* f8;
};

struct s40 {
    signed char[8] pad8;
    struct s2* f8;
};

struct s39 {
    signed char[8] pad8;
    struct s40* f8;
};

struct s41 {
    int32_t f0;
    int32_t f4;
    signed char[4] pad12;
    struct s2** f12;
};

struct s42 {
    signed char[8] pad8;
    struct s41* f8;
};

struct s43 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048b4a(int32_t a1) {
    struct s31* ebp2;
    struct s2* v3;
    struct s33* ebp4;
    uint32_t eax5;
    int32_t ebp6;
    struct s2** esi7;
    int32_t ebp8;
    struct s2* v9;
    uint32_t eax10;
    int32_t ebp11;
    int32_t ebp12;
    uint32_t eax13;
    int32_t ebp14;
    struct s35* ebp15;
    struct s2** eax16;
    struct s2** edi17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    struct s37* ebp21;
    struct s2* v22;
    struct s39* ebp23;
    void* ebp24;
    void* ebp25;
    void* ebp26;
    struct s2** esi27;
    int32_t ebp28;
    int32_t ebp29;
    uint32_t* v30;
    int32_t ebp31;
    struct s2* v32;
    void* ebp33;
    void* ebp34;
    struct s41* edx35;
    struct s42* ebp36;
    int32_t ebp37;
    int32_t ebp38;
    struct s43* ebp39;

    if (!ebp2->f8->f12) {
        v3 = ebp4->f8->f8;
        eax5 = count_fdes(v3);
        *reinterpret_cast<uint32_t*>(ebp6 - 12) = eax5;
    } else {
        esi7 = ebp2->f8->f12;
        *reinterpret_cast<int32_t*>(ebp8 - 12) = 0;
        if (*esi7) {
            do {
                v9 = *esi7;
                eax10 = count_fdes(v9);
                *reinterpret_cast<uint32_t*>(ebp11 - 12) = *reinterpret_cast<int32_t*>(ebp12 - 12) + eax10;
                ++esi7;
            } while (*esi7);
        }
    }
    eax13 = *reinterpret_cast<uint32_t*>(ebp14 - 12);
    ebp15->f8->f16 = eax13;
    eax16 = malloc(eax13 << 2, a1);
    edi17 = eax16;
    *reinterpret_cast<int32_t*>(ebp18 - 8) = -1;
    *reinterpret_cast<int32_t*>(ebp19 - 4) = 0;
    *reinterpret_cast<int32_t*>(ebp20 - 12) = 0;
    if (!ebp21->f8->f12) {
        v22 = ebp23->f8->f8;
        add_fdes(v22, edi17, reinterpret_cast<int32_t>(ebp24) - 12, reinterpret_cast<int32_t>(ebp25) - 8, reinterpret_cast<int32_t>(ebp26) - 4);
    } else {
        esi27 = ebp21->f8->f12;
        if (*esi27) {
            *reinterpret_cast<int32_t*>(ebp28 - 16) = ebp29 - 4;
            do {
                v30 = *reinterpret_cast<uint32_t**>(ebp31 - 16);
                v32 = *esi27;
                add_fdes(v32, edi17, reinterpret_cast<int32_t>(ebp33) - 12, reinterpret_cast<int32_t>(ebp34) - 8, v30);
                ++esi27;
            } while (*esi27);
        }
    }
    edx35 = ebp36->f8;
    edx35->f12 = edi17;
    edx35->f0 = *reinterpret_cast<int32_t*>(ebp37 - 8);
    edx35->f4 = *reinterpret_cast<int32_t*>(ebp38 - 4);
    goto ebp39->f4;
}

unsigned char* decode_sleb128(unsigned char* a1, uint32_t* a2, unsigned char* a3, unsigned char* a4) {
    unsigned char* edi5;
    uint32_t v6;
    uint32_t ecx7;
    uint32_t esi8;
    uint32_t edx9;

    edi5 = a1;
    v6 = 0;
    ecx7 = 0;
    do {
        esi8 = *edi5;
        ++edi5;
        v6 = v6 | (esi8 & 0x7f) << *reinterpret_cast<unsigned char*>(&ecx7);
        ecx7 = ecx7 + 7;
        edx9 = esi8;
    } while (*reinterpret_cast<signed char*>(&edx9) < 0);
    if (ecx7 <= 31 && esi8 & 64) {
        v6 = v6 | 0xffffffff << *reinterpret_cast<unsigned char*>(&ecx7);
    }
    *a2 = v6;
    return edi5;
}

struct s44 {
    signed char[9] pad9;
    signed char f9;
};

struct s46 {
    signed char[4] pad4;
    int32_t f4;
};

struct s45 {
    signed char[8] pad8;
    struct s46* f8;
};

struct s47 {
    signed char[12] pad12;
    signed char** f12;
};

struct s48 {
    signed char[12] pad12;
    signed char** f12;
};

struct s49 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s51 {
    signed char[4] pad4;
    int32_t f4;
};

struct s50 {
    signed char[12] pad12;
    struct s51* f12;
};

struct s53 {
    signed char[4] pad4;
    unsigned char f4;
};

struct s52 {
    signed char[12] pad12;
    struct s53* f12;
};

struct s54 {
    signed char[5] pad5;
    unsigned char f5;
};

struct s56 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s55 {
    signed char[12] pad12;
    struct s56* f12;
};

struct s58 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s57 {
    signed char[12] pad12;
    struct s58* f12;
};

struct s59 {
    signed char* f0;
    signed char[12] pad16;
    uint32_t f16;
};

struct s60 {
    signed char[12] pad12;
    struct s59* f12;
};

struct s61 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048cd6(unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    int32_t ebx4;
    struct s44* edx5;
    struct s45* ebp6;
    signed char* esi7;
    int32_t ebp8;
    struct s47* ebp9;
    int32_t ebp10;
    signed char* eax11;
    int32_t ebp12;
    int32_t ecx13;
    signed char* edi14;
    int1_t zf15;
    signed char* eax16;
    struct s48* ebp17;
    int32_t ebp18;
    signed char* edx19;
    signed char* edi20;
    int32_t ecx21;
    int32_t ebp22;
    signed char* edi23;
    int32_t ecx24;
    int1_t zf25;
    void* ecx26;
    int32_t ebp27;
    struct s49* eax28;
    int32_t ebp29;
    unsigned char* edx30;
    signed char* esi31;
    int32_t ebp32;
    int32_t ebp33;
    signed char* edi34;
    int32_t ebp35;
    int32_t ecx36;
    int1_t zf37;
    struct s50* ebp38;
    struct s52* ebp39;
    int32_t ebp40;
    unsigned char* v41;
    struct s55* ebp42;
    unsigned char* eax43;
    uint32_t* v44;
    struct s57* ebp45;
    unsigned char* eax46;
    struct s59* esi47;
    struct s60* ebp48;
    void* ebp49;
    struct s61* ebp50;

    ebx4 = reinterpret_cast<int32_t>(__return_address()) + 0x17ba;
    edx5 = reinterpret_cast<struct s44*>(reinterpret_cast<int32_t>(ebp6->f8) - (ebp6->f8->f4 - 4));
    esi7 = &edx5->f9;
    *reinterpret_cast<signed char**>(ebp8 - 12) = esi7;
    *ebp9->f12 = esi7;
    *reinterpret_cast<signed char**>(ebp10 - 8) = esi7;
    eax11 = reinterpret_cast<signed char*>(ebx4 - 0x1006);
    *reinterpret_cast<signed char**>(ebp12 - 16) = eax11;
    ecx13 = 1;
    edi14 = eax11;
    zf15 = 1;
    while (ecx13) {
        --ecx13;
        zf15 = *esi7 == *edi14;
        *edi14 = *esi7;
        ++edi14;
        ++esi7;
    }
    if (zf15) {
        addr_8048d34_5:
        eax16 = *ebp17->f12;
        *reinterpret_cast<signed char**>(ebp18 - 16) = eax16;
        edx19 = eax16;
        edi20 = edx19;
        ecx21 = -1;
    } else {
        esi7 = *reinterpret_cast<signed char**>(ebp22 - 12);
        edi23 = reinterpret_cast<signed char*>(ebx4 - 0x1005);
        ecx24 = 3;
        zf25 = 1;
        while (ecx24) {
            --ecx24;
            zf25 = *esi7 == *edi23;
            *edi23 = *esi7;
            ++edi23;
            ++esi7;
        }
        if (zf25) 
            goto addr_8048d34_5;
        if (edx5->f9 == 0x7a) 
            goto addr_8048d34_5; else 
            goto addr_8048d2a_11;
    }
    do {
        if (!ecx21) 
            break;
        --ecx21;
        ++edi20;
    } while (*edi20);
    ecx26 = reinterpret_cast<void*>(~ecx21);
    *reinterpret_cast<void**>(ebp27 - 8) = ecx26;
    eax28 = reinterpret_cast<struct s49*>(reinterpret_cast<int32_t>(edx19) + reinterpret_cast<int32_t>(ecx26) - 1);
    *reinterpret_cast<struct s49**>(ebp29 - 12) = eax28;
    edx30 = &eax28->f1;
    esi31 = *reinterpret_cast<signed char**>(ebp32 - 16);
    *reinterpret_cast<signed char**>(ebp33 - 8) = esi31;
    edi34 = reinterpret_cast<signed char*>(ebx4 - 0x1005);
    *reinterpret_cast<signed char**>(ebp35 - 16) = edi34;
    ecx36 = 3;
    zf37 = 1;
    while (ecx36) {
        --ecx36;
        zf37 = *esi31 == *edi34;
        *edi34 = *esi31;
        ++edi34;
        ++esi31;
    }
    if (!zf37) {
        ebp38->f12->f4 = 0;
    } else {
        ebp39->f12->f4 = eax28->f1;
        edx30 = &(*reinterpret_cast<struct s54**>(ebp40 - 12))->f5;
    }
    v41 = &ebp42->f12->f8;
    eax43 = decode_uleb128(edx30, v41, a1, a2, a3);
    v44 = &ebp45->f12->f12;
    eax46 = decode_sleb128(eax43, v44, edx30, v41);
    esi47 = ebp48->f12;
    esi47->f16 = *eax46;
    if (*esi47->f0 == 0x7a) {
        decode_uleb128(eax46 + 1, reinterpret_cast<int32_t>(ebp49) - 4, a1, a2, a3);
    }
    addr_8048dd7_23:
    goto ebp50->f4;
    addr_8048d2a_11:
    goto addr_8048dd7_23;
}

struct s62 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

struct s63 {
    signed char[16] pad16;
    struct s62* f16;
};

struct s64 {
    signed char[20] pad20;
    uint32_t* f20;
};

struct s65 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s66 {
    signed char[8] pad8;
    int32_t f8;
};

struct s67 {
    signed char[12] pad12;
    void* f12;
};

struct s68 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s69 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s70 {
    signed char[12] pad12;
    void* f12;
};

struct s71 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048dee(unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    int32_t ebx4;
    struct s62* edi5;
    struct s63* ebp6;
    uint32_t* edx7;
    struct s64* ebp8;
    uint32_t eax9;
    struct s65* ebp10;
    struct s66* ebp11;
    uint32_t esi12;
    int32_t ebp13;
    uint32_t eax14;
    int32_t ebp15;
    struct s67* ebp16;
    int32_t ebp17;
    int32_t ebp18;
    unsigned char* v19;
    struct s68* ebp20;
    void* ebp21;
    unsigned char* eax22;
    struct s69* ebp23;
    int32_t ebp24;
    int32_t ebp25;
    void* ecx26;
    struct s70* ebp27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    struct s71* ebp31;

    ebx4 = reinterpret_cast<int32_t>(__return_address()) + 0x16a2;
    edi5 = ebp6->f16;
    edx7 = ebp8->f20;
    eax9 = *ebp10->f8;
    ebp11->f8 = reinterpret_cast<int32_t>(ebp10->f8 + 1);
    esi12 = eax9 & 64;
    *reinterpret_cast<uint32_t*>(ebp13 - 16) = esi12;
    if (!esi12) {
        if (*reinterpret_cast<signed char*>(&eax9) >= reinterpret_cast<signed char>(0)) {
            if (!(*reinterpret_cast<unsigned char*>(&eax9) & 0xc0)) {
                if (eax9 > 46) {
                    abort();
                } else {
                    goto ebx4 - *reinterpret_cast<int32_t*>(ebx4 + eax9 * 4 - 0x15f0);
                }
            } else {
                eax14 = eax9 & 63;
                *reinterpret_cast<uint32_t*>(ebp15 - 8) = eax14;
                *reinterpret_cast<signed char*>(eax14 + reinterpret_cast<int32_t>(ebp16->f12) + 92) = *reinterpret_cast<signed char*>(ebp17 - 16);
            }
        } else {
            *reinterpret_cast<uint32_t*>(ebp18 - 8) = eax9 & 63;
            v19 = ebp20->f8;
            eax22 = decode_uleb128(v19, reinterpret_cast<int32_t>(ebp21) - 4, a1, a2, a3);
            ebp23->f8 = eax22;
            *reinterpret_cast<int32_t*>(ebp24 - 4) = *reinterpret_cast<int32_t*>(ebp25 - 4) * edi5->f12;
            ecx26 = ebp27->f12;
            *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp28 - 8) + reinterpret_cast<int32_t>(ecx26) + 92) = 1;
            *reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebp29 - 8) * 4 + reinterpret_cast<int32_t>(ecx26) + 16) = *reinterpret_cast<int32_t*>(ebp30 - 4);
        }
    } else {
        *edx7 = *edx7 + (eax9 & 63) * edi5->f8;
    }
    goto ebp31->f4;
}

struct s72 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80493fd(int32_t a1, int32_t a2, int32_t a3) {
    struct s72* ebp4;

    goto ebp4->f4;
}

struct s73 {
    signed char[1500] pad1500;
    int32_t f1500;
};

struct s74 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80488e1() {
    struct s73* ebx1;
    struct s74* ebp2;

    ebx1 = reinterpret_cast<struct s73*>(reinterpret_cast<int32_t>(__return_address()) + 0x1baf);
    __register_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc, &ebx1->f1500);
    goto ebp2->f4;
}

struct s75 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80493ca() {
    int32_t eax1;
    int32_t* esi2;
    int32_t eax3;
    struct s75* ebp4;

    eax1 = reinterpret_cast<int32_t>(__return_address()) + 0x10c6 + 0xd0;
    esi2 = reinterpret_cast<int32_t*>(eax1 - 4);
    if (*reinterpret_cast<int32_t*>(eax1 - 4) != -1) {
        do {
            eax3 = *esi2;
            eax3();
            --esi2;
        } while (*esi2 != -1);
    }
    goto ebp4->f4;
}

struct s76 {
    signed char[200] pad200;
    int32_t* f200;
};

struct s77 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048889() {
    struct s76* ebx1;
    int32_t* eax2;
    int32_t eax3;
    struct s77* ebp4;

    ebx1 = reinterpret_cast<struct s76*>(reinterpret_cast<int32_t>(__return_address()) + 0x1c07);
    while (eax2 = ebx1->f200, !!*eax2) {
        ebx1->f200 = eax2 + 1;
        eax3 = *eax2;
        eax3();
    }
    __deregister_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc);
    goto ebp4->f4;
}

int32_t printf = 0x80487c6;

void printf(int32_t a1, int32_t a2) {
    goto printf;
}

struct s78 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s79 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s80 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s81 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s82 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048c36() {
    struct s5* esi1;
    struct s78* ebp2;
    uint32_t edi3;
    uint32_t ecx4;
    int32_t ebp5;
    struct s2** esi6;
    uint32_t edx7;
    int32_t ebp8;
    struct s2* ecx9;
    int32_t ebp10;
    struct s79* ebp11;
    struct s80* ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    struct s82* ebp16;

    esi1 = *reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(__return_address()) + 0x185a + 0x5f4);
    if (!esi1) 
        goto addr_8048cbb_2;
    do {
        if (!esi1->f0) {
            frame_init(esi1);
        }
    } while ((esi1->f0 > ebp2->f8 || esi1->f4 <= ebp2->f8) && (esi1 = esi1->f20, !!esi1));
    if (!esi1) 
        goto addr_8048c6d_8;
    edi3 = 0;
    ecx4 = esi1->f16;
    *reinterpret_cast<uint32_t*>(ebp5 - 4) = ecx4;
    if (0 >= ecx4) {
        addr_8048cbb_2:
    } else {
        esi6 = esi1->f12;
        do {
            edx7 = *reinterpret_cast<int32_t*>(ebp8 - 4) + edi3 >> 1;
            ecx9 = esi6[edx7];
            *reinterpret_cast<struct s2**>(ebp10 - 8) = ecx9;
            if (ebp11->f8 >= ecx9->f8) {
                if (ebp12->f8 <= ecx9->f8 + (*reinterpret_cast<struct s81**>(ebp13 - 8))->f12) 
                    goto addr_8048c70_13;
                edi3 = edx7 + 1;
            } else {
                *reinterpret_cast<uint32_t*>(ebp14 - 4) = edx7;
            }
        } while (*reinterpret_cast<uint32_t*>(ebp15 - 4) > edi3);
        goto addr_8048cbb_2;
    }
    addr_8048cbd_17:
    goto ebp16->f4;
    addr_8048c70_13:
    goto addr_8048cbd_17;
    addr_8048c6d_8:
    goto addr_8048cbb_2;
}

struct s84 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    struct s84* f20;
};

struct s83 {
    signed char[1524] pad1524;
    struct s84* f1524;
};

struct s85 {
    signed char[12] pad12;
    struct s84* f12;
};

struct s86 {
    signed char[8] pad8;
    int32_t f8;
};

struct s87 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049179() {
    struct s83* ebx1;
    struct s84* edx2;
    struct s85* ebp3;
    struct s86* ebp4;
    struct s87* ebp5;

    ebx1 = reinterpret_cast<struct s83*>(reinterpret_cast<int32_t>(__return_address()) + 0x1317);
    edx2 = ebp3->f12;
    edx2->f8 = ebp4->f8;
    edx2->f4 = 0;
    edx2->f0 = 0;
    edx2->f12 = 0;
    edx2->f16 = 0;
    edx2->f20 = ebx1->f1524;
    ebx1->f1524 = edx2;
    goto ebp5->f4;
}

struct s88 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s2* find_fde(uint32_t a1);

struct s89 {
    signed char[4] pad4;
    int32_t f4;
};

struct s90 {
    signed char[16] pad16;
    unsigned char f16;
};

struct s91 {
    signed char[8] pad8;
    int32_t f8;
};

struct s92 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s93 {
    signed char[12] pad12;
    int32_t* f12;
};

struct s94 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049265(unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    uint32_t v4;
    struct s88* ebp5;
    struct s2* eax6;
    int32_t ebp7;
    struct s7* ecx8;
    void* ebp9;
    int32_t ebp10;
    struct s6* v11;
    int32_t ebp12;
    unsigned char* eax13;
    unsigned char* esi14;
    int32_t ecx15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t eax18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    void** eax23;
    int32_t ebp24;
    unsigned char* edi25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t ebp28;
    int32_t ebp29;
    struct s10* v30;
    int32_t ebp31;
    void* v32;
    int32_t ebp33;
    unsigned char* eax34;
    unsigned char* esi35;
    int32_t ebp36;
    int32_t ebp37;
    void* ebp38;
    unsigned char* eax39;
    int32_t ebp40;
    unsigned char* edi41;
    int32_t ebp42;
    int32_t ebp43;
    int32_t ebp44;
    int32_t ebp45;
    int32_t ebp46;
    int32_t ebp47;
    struct s92* ebp48;
    uint32_t* v49;
    int32_t ebp50;
    int32_t ebp51;
    int32_t ebp52;
    unsigned char* eax53;
    int32_t* edi54;
    struct s93* ebp55;
    int32_t* esi56;
    int32_t ebp57;
    int32_t ecx58;
    struct s94* ebp59;

    v4 = ebp5->f8;
    eax6 = find_fde(v4);
    *reinterpret_cast<struct s2**>(ebp7 - 0x94) = eax6;
    if (eax6 && (ecx8 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(ebp9) - 20), *reinterpret_cast<struct s7**>(ebp10 - 0x98) = ecx8, v11 = *reinterpret_cast<struct s6**>(ebp12 - 0x94), eax13 = extract_cie_info(v11, ecx8), esi14 = eax13, !!esi14)) {
        ecx15 = ebp16 - 0x88;
        *reinterpret_cast<int32_t*>(ebp17 - 0x9c) = ecx15;
        memset(ecx15, 0, 0x74);
        eax18 = *reinterpret_cast<int32_t*>(ebp19 - 4);
        *reinterpret_cast<int16_t*>(ebp20 - 46) = *reinterpret_cast<int16_t*>(&eax18);
        *reinterpret_cast<int32_t*>(ebp21 - 0x84) = *reinterpret_cast<int32_t*>(ebp22 - 16);
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<struct s89**>(ebp24 - 0x94)) - ((*reinterpret_cast<struct s89**>(ebp24 - 0x94))->f4 - 4));
        edi25 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(*eax23) + 4);
        if (reinterpret_cast<uint32_t>(esi14) < reinterpret_cast<uint32_t>(edi25)) {
            *reinterpret_cast<int32_t*>(ebp26 - 0xa0) = *reinterpret_cast<int32_t*>(ebp27 - 0x98);
            *reinterpret_cast<int32_t*>(ebp28 - 0xa4) = *reinterpret_cast<int32_t*>(ebp29 - 0x9c);
            do {
                v30 = *reinterpret_cast<struct s10**>(ebp31 - 0xa0);
                v32 = *reinterpret_cast<void**>(ebp33 - 0xa4);
                eax34 = execute_cfa_insn(esi14, v32, v30, 0);
                esi14 = eax34;
            } while (reinterpret_cast<uint32_t>(esi14) < reinterpret_cast<uint32_t>(edi25));
        }
        esi35 = &(*reinterpret_cast<struct s90**>(ebp36 - 0x94))->f16;
        if (**reinterpret_cast<signed char**>(ebp37 - 20) == 0x7a) {
            eax39 = decode_uleb128(esi35, reinterpret_cast<int32_t>(ebp38) - 0x8c, a1, a2, a3);
            esi35 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax39) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp40 - 0x8c)));
        }
        edi41 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(ebp42 - 0x94)) + reinterpret_cast<int32_t>(**reinterpret_cast<void***>(ebp42 - 0x94)) + 4);
        *reinterpret_cast<int32_t*>(ebp43 - 0x90) = (*reinterpret_cast<struct s91**>(ebp44 - 0x94))->f8;
        if (reinterpret_cast<uint32_t>(esi35) < reinterpret_cast<uint32_t>(edi41)) {
            *reinterpret_cast<int32_t*>(ebp45 - 0xa8) = ebp46 - 0x90;
            do {
                if (*reinterpret_cast<uint32_t*>(ebp47 - 0x90) > ebp48->f8) 
                    break;
                v49 = *reinterpret_cast<uint32_t**>(ebp50 - 0xa8);
                eax53 = execute_cfa_insn(esi35, ebp51 - 0x88, ebp52 - 20, v49);
                esi35 = eax53;
            } while (reinterpret_cast<uint32_t>(esi35) < reinterpret_cast<uint32_t>(edi41));
        }
        edi54 = ebp55->f12;
        esi56 = reinterpret_cast<int32_t*>(ebp57 - 0x88);
        ecx58 = 28;
        while (ecx58) {
            --ecx58;
            *edi54 = *esi56;
            ++edi54;
            ++esi56;
        }
    }
    goto ebp59->f4;
}

struct s95 {
    signed char[1524] pad1524;
    struct s12* f1524;
};

void __register_frame_info(int32_t a1, struct s12* a2) {
    struct s95* ebx3;
    int32_t ebx4;

    fun_8049179();
    ebx3 = reinterpret_cast<struct s95*>(ebx4 + 0x1317);
    a2->f8 = a1;
    a2->f4 = 0;
    a2->f0 = 0;
    a2->f12 = 0;
    a2->f16 = 0;
    a2->f20 = ebx3->f1524;
    ebx3->f1524 = a2;
    return;
}

struct s2* find_fde(uint32_t a1) {
    struct s5* esi2;
    struct s5* ebx3;
    uint32_t edi4;
    uint32_t ecx5;
    uint32_t v6;
    struct s2* eax7;
    struct s2** esi8;
    uint32_t edx9;
    struct s2* ecx10;

    fun_8048c36();
    esi2 = *reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(ebx3) + 0x185a + 0x5f4);
    if (!esi2) 
        goto addr_8048cbb_3;
    do {
        if (!esi2->f0) {
            frame_init(esi2);
        }
    } while ((esi2->f0 > a1 || esi2->f4 <= a1) && (esi2 = esi2->f20, !!esi2));
    if (!esi2) 
        goto addr_8048c6d_9;
    edi4 = 0;
    ecx5 = esi2->f16;
    v6 = ecx5;
    if (0 >= ecx5) {
        addr_8048cbb_3:
        eax7 = reinterpret_cast<struct s2*>(0);
    } else {
        esi8 = esi2->f12;
        do {
            edx9 = v6 + edi4 >> 1;
            ecx10 = esi8[edx9];
            if (a1 >= ecx10->f8) {
                if (a1 <= ecx10->f8 + ecx10->f12) 
                    goto addr_8048c70_14;
                edi4 = edx9 + 1;
            } else {
                v6 = edx9;
            }
        } while (v6 > edi4);
        goto addr_8048cbb_3;
    }
    addr_8048cbd_18:
    return eax7;
    addr_8048c70_14:
    eax7 = ecx10;
    goto addr_8048cbd_18;
    addr_8048c6d_9:
    goto addr_8048cbb_3;
}

struct s96 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048909(int32_t a1, int32_t a2, int32_t a3) {
    struct s96* ebp4;

    goto ebp4->f4;
}

struct s98 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    struct s98* f20;
};

struct s97 {
    signed char[1524] pad1524;
    struct s98* f1524;
};

struct s99 {
    signed char[8] pad8;
    int32_t f8;
};

struct s100 {
    signed char[12] pad12;
    struct s98* f12;
};

struct s101 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80491c1(int32_t a1, int32_t a2, int32_t a3) {
    struct s97* ebx4;
    int32_t eax5;
    struct s99* ebp6;
    struct s98* edx7;
    struct s100* ebp8;
    struct s101* ebp9;

    ebx4 = reinterpret_cast<struct s97*>(reinterpret_cast<int32_t>(__return_address()) + 0x12cf);
    eax5 = ebp6->f8;
    edx7 = ebp8->f12;
    edx7->f8 = eax5;
    edx7->f12 = eax5;
    edx7->f4 = 0;
    edx7->f0 = 0;
    edx7->f16 = 0;
    edx7->f20 = ebx4->f1524;
    ebx4->f1524 = edx7;
    goto ebp9->f4;
}

void _fini() {
    __do_global_dtors_aux();
    return;
}

int32_t _cleanup = 0x8048786;

void fun_804877c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    goto _cleanup;
}

void fini_dummy() {
    int32_t ebx1;
    int32_t ebp2;

    fun_80488c9(ebx1, ebp2, __return_address());
}

void fun_8048934(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;

    *reinterpret_cast<int32_t*>(eax2 + ecx) = eax3;
    *reinterpret_cast<int32_t*>(eax4 + ecx) = eax5;
    *reinterpret_cast<int32_t*>(eax6 + ecx) = eax7;
    *reinterpret_cast<int32_t*>(eax8 + ecx) = eax9;
    __asm__("insb ");
    *reinterpret_cast<int32_t*>(eax10 + ecx) = eax11;
    if (!(reinterpret_cast<int32_t>(__zero_stack_offset()) - 1)) 
        goto 0x80488d3;
}

unsigned char g150c0000;

struct s102 {
    unsigned char f0;
    signed char[872415250] pad872415251;
    unsigned char f872415251;
};

struct s103 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048ea0(signed char cl) {
    unsigned char* eax2;
    signed char al3;
    unsigned char* eax4;
    unsigned char dl5;
    unsigned char al6;
    unsigned char tmp8_7;
    signed char ah8;
    unsigned char* eax9;
    void* edx10;
    void* edx11;
    signed char dl12;
    struct s102* eax13;
    unsigned char tmp8_14;
    signed char ah15;
    uint1_t cf16;
    unsigned char* eax17;
    unsigned char tmp8_18;
    uint1_t cf19;
    unsigned char al20;
    unsigned char tmp8_21;
    signed char ah22;
    int32_t* eax23;
    int32_t ebx24;
    int32_t edx25;
    int32_t ebx26;
    int32_t edx27;
    signed char dh28;
    unsigned char tmp8_29;
    uint1_t cf30;
    uint32_t eax31;
    int32_t ebx32;
    int32_t ebx33;
    uint32_t* edx34;
    struct s103* ebp35;
    int32_t esi36;

    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(al3 - 19);
    *eax2 = reinterpret_cast<unsigned char>(*eax2 + *reinterpret_cast<unsigned char*>(&eax2));
    *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax2) ^ 21);
    *eax4 = reinterpret_cast<unsigned char>(*eax4 + *reinterpret_cast<unsigned char*>(&eax4));
    g150c0000 = reinterpret_cast<unsigned char>(g150c0000 & dl5);
    *eax4 = reinterpret_cast<unsigned char>(*eax4 + *reinterpret_cast<unsigned char*>(&eax4));
    al6 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax4)))));
    tmp8_7 = reinterpret_cast<unsigned char>(al6 + ah8);
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(tmp8_7)) + reinterpret_cast<uint1_t>(tmp8_7 < al6));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(edx10) + 0x132c0000) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(edx11) + 0x132c0000) + dl12);
    *eax9 = reinterpret_cast<unsigned char>(*eax9 + *reinterpret_cast<unsigned char*>(&eax9));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9) - 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    if (*reinterpret_cast<unsigned char*>(eax13)) {
        *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
        __asm__("rcl byte [ebx], 0x0");
        tmp8_14 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax13) + 0x34000013) + ah15);
        cf16 = reinterpret_cast<uint1_t>(tmp8_14 < *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax13) + 0x34000013));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax13) + 0x34000013) = tmp8_14;
        *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax13))) + cf16);
        tmp8_18 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
        cf19 = reinterpret_cast<uint1_t>(tmp8_18 < *eax17);
        *eax17 = tmp8_18;
        al20 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax17))) + cf19);
        tmp8_21 = reinterpret_cast<unsigned char>(al20 + ah22);
        *reinterpret_cast<unsigned char*>(&eax23) = tmp8_21;
        eax13 = reinterpret_cast<struct s102*>(reinterpret_cast<int32_t>(eax23) + *eax23 + reinterpret_cast<uint1_t>(tmp8_21 < al20));
    }
    *reinterpret_cast<signed char*>(ebx24 + edx25) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx26 + edx27) + dh28);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) ^ 19);
    *reinterpret_cast<unsigned char*>(eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    tmp8_29 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax13) + *reinterpret_cast<unsigned char*>(&eax13));
    cf30 = reinterpret_cast<uint1_t>(tmp8_29 < *reinterpret_cast<unsigned char*>(eax13));
    *reinterpret_cast<unsigned char*>(eax13) = tmp8_29;
    eax31 = reinterpret_cast<uint32_t>(eax13) + *reinterpret_cast<unsigned char*>(eax13) + cf30;
    *reinterpret_cast<signed char*>(ebx32 + 0x68b0875) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx33 + 0x68b0875) + cl);
    *edx34 = eax31;
    ebp35->f8 = esi36 + 4;
    goto 0x8049164;
}

struct s104 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s105 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048f70() {
    unsigned char* ecx1;
    struct s104* ebp2;
    uint32_t* edx3;
    int32_t* edx4;
    struct s105* ebp5;

    ecx1 = ebp2->f8;
    *edx3 = *edx4 + *ecx1;
    ebp5->f8 = reinterpret_cast<int32_t>(ecx1 + 1);
    goto 0x8049164;
}

struct s107 {
    int32_t f0;
    signed char[108] pad112;
    int32_t* f112;
};

struct s106 {
    signed char[12] pad12;
    struct s107* f12;
};

void fun_80490f0() {
    int32_t* v1;
    int32_t* edx2;
    struct s106* ebp3;
    struct s107* edi4;
    int32_t* esi5;
    int32_t ecx6;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    edx2 = ebp3->f12->f112;
    edi4 = ebp3->f12;
    esi5 = edx2;
    ecx6 = 29;
    while (ecx6) {
        --ecx6;
        edi4->f0 = *esi5;
        edi4 = reinterpret_cast<struct s107*>(&edi4->pad112);
        ++esi5;
    }
    free(edx2, v1);
    goto 0x8049164;
}

struct s108 {
    signed char[12] pad12;
    void* f12;
};

void fun_804910c() {
    int32_t ebp1;
    void* ecx2;
    struct s108* ebp3;
    int32_t ebp4;
    int32_t eax5;
    int32_t ebp6;
    uint32_t esi7;
    int32_t ebp8;

    *reinterpret_cast<int32_t*>(ebp1 - 8) = 16;
    do {
        ecx2 = ebp3->f12;
        *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp4 - 8) + reinterpret_cast<int32_t>(ecx2) + 92) = 1;
        eax5 = *reinterpret_cast<int32_t*>(ebp6 - 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx2) + eax5 * 4 + 16) = eax5 * 4 - 64;
        esi7 = reinterpret_cast<uint32_t>(eax5 + 1);
        *reinterpret_cast<uint32_t*>(ebp8 - 8) = esi7;
    } while (esi7 <= 31);
    goto 0x8049164;
}

struct s109 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s110 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s112 {
    signed char[12] pad12;
    int32_t f12;
};

struct s111 {
    signed char[12] pad12;
    struct s112* f12;
};

void fun_8049140(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s109* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s110* ebp7;
    struct s111* ebp8;
    int32_t ebp9;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 4, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    ebp8->f12->f12 = *reinterpret_cast<int32_t*>(ebp9 - 4);
    goto 0x8049164;
}

void init_dummy() {
    int32_t ebx1;
    int32_t ebp2;

    fun_80493fd(ebx1, ebp2, __return_address());
}

int32_t g804a498 = 0;

void fun_8048786() {
    goto g804a498;
}

void fun_8048796() {
    goto 0x8048770;
}

void _mcount() {
    return;
}

struct s113 {
    signed char[8] pad8;
    uint16_t* f8;
};

struct s114 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048f84() {
    uint16_t* esi1;
    struct s113* ebp2;
    uint32_t* edx3;
    int32_t* edx4;
    struct s114* ebp5;

    esi1 = ebp2->f8;
    *edx3 = *edx4 + *esi1;
    ebp5->f8 = reinterpret_cast<int32_t>(esi1 + 1);
    goto 0x8049164;
}

void fun_80487e6() {
    goto 0x8048770;
}

void __frame_state_for() {
    unsigned char* ebx1;
    unsigned char* esi2;
    unsigned char* edi3;

    fun_8049265(ebx1, esi2, edi3);
}

void fun_80487f6() {
    goto 0x8048770;
}

void fun_80493be() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_8048806() {
    goto 0x8048770;
}

void fun_80487a6() {
    goto 0x8048770;
}

void fun_80487b6() {
    goto 0x8048770;
}

void fun_804898a() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_80487d6() {
    goto 0x8048770;
}

struct s115 {
    signed char[8] pad8;
    int32_t* f8;
};

struct s116 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048f98() {
    int32_t* ecx1;
    struct s115* ebp2;
    int32_t* edx3;
    int32_t* edx4;
    struct s116* ebp5;

    ecx1 = ebp2->f8;
    *edx3 = *edx4 + *ecx1;
    ebp5->f8 = reinterpret_cast<int32_t>(ecx1 + 1);
    goto 0x8049164;
}

int32_t _environ = 0;

void fun_70(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);

void _start() {
    void* ebp1;
    int32_t edx2;
    int32_t edx3;
    void* v4;
    int32_t eax5;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    if (!0) {
        atexit(0x8048780, edx2, 0, 0);
    }
    if (!0) {
        atexit(edx2, 0, 0, __return_address());
    }
    atexit(_fini, edx2, 0, 0);
    edx3 = reinterpret_cast<int32_t>(ebp1) + reinterpret_cast<int32_t>(__return_address()) * 4 + 16;
    _environ = edx3;
    v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp1) + 12);
    _init(__return_address(), v4, edx3, _fini, edx2, 0, 0);
    __fpstart(__return_address(), v4, edx3, _fini, edx2, 0, 0);
    eax5 = main(__return_address(), v4, edx3, _fini, edx2, 0, 0);
    exit(eax5, _fini, edx2, 0, 0);
    fun_70(0, eax5, _fini, edx2, 0, 0);
    __asm__("hlt ");
}

void init_dummy() {
    int32_t ebx1;
    int32_t ebp2;

    fun_8048909(ebx1, ebp2, __return_address());
}

void fun_80487c6() {
    goto 0x8048770;
}

void __register_frame_info_table() {
    int32_t ebx1;
    int32_t ebp2;

    fun_80491c1(ebx1, ebp2, __return_address());
}

struct s117 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s118 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s119 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s120 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s121 {
    signed char[12] pad12;
    int32_t f12;
};

struct s122 {
    signed char[12] pad12;
    void* f12;
};

void fun_8048fb0(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    void* ebp4;
    unsigned char* v5;
    struct s117* ebp6;
    unsigned char* eax7;
    struct s118* ebp8;
    unsigned char* v9;
    struct s119* ebp10;
    void* ebp11;
    unsigned char* eax12;
    struct s120* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    struct s121* edi16;
    void* esi17;
    struct s122* ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;

    v3 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp4) - 8);
    v5 = ebp6->f8;
    eax7 = decode_uleb128(v5, v3, __return_address(), a1, a2);
    ebp8->f8 = eax7;
    v9 = ebp10->f8;
    eax12 = decode_uleb128(v9, reinterpret_cast<int32_t>(ebp11) - 4, v5, v3, __return_address());
    ebp13->f8 = eax12;
    *reinterpret_cast<int32_t*>(ebp14 - 4) = *reinterpret_cast<int32_t*>(ebp15 - 4) * edi16->f12;
    esi17 = ebp18->f12;
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp19 - 8) + reinterpret_cast<int32_t>(esi17) + 92) = 1;
    *reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebp20 - 8) * 4 + reinterpret_cast<int32_t>(esi17) + 16) = *reinterpret_cast<int32_t*>(ebp21 - 4);
    goto 0x8049164;
}

struct s123 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s124 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s125 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_8048ffc(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s123* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s124* ebp7;
    int32_t ebp8;
    struct s125* ebp9;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 8, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp8 - 8) + ebp9->f12 + 92) = 0;
    goto 0x8049164;
}

void fun_8048915() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    int32_t ebp4;
    int32_t ebp5;
    signed char dl6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *reinterpret_cast<signed char*>(ebp4 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp5 - 0x75) + dl6);
}

struct s126 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s127 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s128 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s129 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s130 {
    signed char[12] pad12;
    void* f12;
};

void fun_804901c(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    void* ebp4;
    unsigned char* v5;
    struct s126* ebp6;
    unsigned char* eax7;
    struct s127* ebp8;
    unsigned char* v9;
    struct s128* ebp10;
    void* ebp11;
    unsigned char* eax12;
    struct s129* ebp13;
    void* ecx14;
    struct s130* ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;

    v3 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp4) - 8);
    v5 = ebp6->f8;
    eax7 = decode_uleb128(v5, v3, __return_address(), a1, a2);
    ebp8->f8 = eax7;
    v9 = ebp10->f8;
    eax12 = decode_uleb128(v9, reinterpret_cast<int32_t>(ebp11) - 12, v5, v3, __return_address());
    ebp13->f8 = eax12;
    ecx14 = ebp15->f12;
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp16 - 8) + reinterpret_cast<int32_t>(ecx14) + 92) = 2;
    *reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebp17 - 8) * 4 + reinterpret_cast<int32_t>(ecx14) + 16) = *reinterpret_cast<int32_t*>(ebp18 - 12);
    goto 0x8049164;
}

struct s131 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s132 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s133 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s134 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s135 {
    signed char[8] pad8;
    int32_t f8;
    signed char[76] pad88;
    int16_t f88;
};

struct s136 {
    signed char[12] pad12;
    struct s135* f12;
};

void fun_804905c(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    void* ebp4;
    unsigned char* v5;
    struct s131* ebp6;
    unsigned char* eax7;
    struct s132* ebp8;
    unsigned char* v9;
    struct s133* ebp10;
    void* ebp11;
    unsigned char* eax12;
    struct s134* ebp13;
    int32_t eax14;
    int32_t ebp15;
    struct s135* ecx16;
    struct s136* ebp17;
    int32_t ebp18;

    v3 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp4) - 8);
    v5 = ebp6->f8;
    eax7 = decode_uleb128(v5, v3, __return_address(), a1, a2);
    ebp8->f8 = eax7;
    v9 = ebp10->f8;
    eax12 = decode_uleb128(v9, reinterpret_cast<int32_t>(ebp11) - 4, v5, v3, __return_address());
    ebp13->f8 = eax12;
    eax14 = *reinterpret_cast<int32_t*>(ebp15 - 8);
    ecx16 = ebp17->f12;
    ecx16->f88 = *reinterpret_cast<int16_t*>(&eax14);
    ecx16->f8 = *reinterpret_cast<int32_t*>(ebp18 - 4);
    goto 0x8049164;
}

struct s137 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s138 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s140 {
    signed char[88] pad88;
    int16_t f88;
};

struct s139 {
    signed char[12] pad12;
    struct s140* f12;
};

void fun_8049090(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s137* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s138* ebp7;
    int32_t eax8;
    int32_t ebp9;
    struct s139* ebp10;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 8, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    eax8 = *reinterpret_cast<int32_t*>(ebp9 - 8);
    ebp10->f12->f88 = *reinterpret_cast<int16_t*>(&eax8);
    goto 0x8049164;
}

struct s141 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s142 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s144 {
    signed char[8] pad8;
    int32_t f8;
};

struct s143 {
    signed char[12] pad12;
    struct s144* f12;
};

void fun_80490b0(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s141* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s142* ebp7;
    struct s143* ebp8;
    int32_t ebp9;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 4, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    ebp8->f12->f8 = *reinterpret_cast<int32_t*>(ebp9 - 4);
    goto 0x8049164;
}

struct s145 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s147 {
    signed char[112] pad112;
    struct s2** f112;
};

struct s146 {
    signed char[12] pad12;
    struct s147* f12;
};

void fun_80490d0() {
    struct s2** eax1;
    struct s2** edx2;
    struct s2** edi3;
    struct s2** esi4;
    struct s145* ebp5;
    int32_t ecx6;
    struct s146* ebp7;

    eax1 = malloc(0x74, __return_address());
    edx2 = eax1;
    edi3 = edx2;
    esi4 = ebp5->f12;
    ecx6 = 29;
    while (ecx6) {
        --ecx6;
        *edi3 = *esi4;
        ++edi3;
        ++esi4;
    }
    ebp7->f12->f112 = edx2;
    goto 0x8049164;
}
