
void frame_dummy();

void __do_global_ctors_aux();

void _init(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    frame_dummy();
    __do_global_ctors_aux();
    return;
}

int32_t atexit = 0x80487fe;

void atexit(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto atexit;
}

void fun_804925d(int32_t* a1);

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
    fun_804925d(ebx4);
    ebx5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(ebx4) + 0x1273);
    eax6 = a1;
    ecx7 = &ebx5->f1524;
    if (!ebx5->f1524) {
        addr_804929d_3:
        abort();
    } else {
        do {
            edx8 = *ecx7;
            if (edx8->f8 == eax6) 
                goto addr_804927f_6;
            ecx7 = &edx8->f20;
        } while (edx8->f20);
        goto addr_804929d_3;
    }
    addr_80492a4_8:
    return;
    addr_804927f_6:
    *ecx7 = edx8->f20;
    if (edx8->f0) {
        v9 = edx8->f12;
        free(v9, v2);
        goto addr_80492a4_8;
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

void fun_8048b12();

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

    fun_8048b12();
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

void fun_8048ba2(int32_t a1);

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
    fun_8048ba2(ebx5);
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

int32_t free = 0x804884e;

void free(int32_t* a1, int32_t* a2) {
    goto free;
}

int32_t abort = 0x804885e;

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

void fun_8048d2e(unsigned char* a1, unsigned char* a2, unsigned char* a3);

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
    fun_8048d2e(ebx8, v6, v4);
    ebx9 = reinterpret_cast<void*>(ebx8 + 0x17a2);
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
        addr_8048d8c_6:
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
            goto addr_8048d8c_6;
        if (edx10->f9 == 0x7a) 
            goto addr_8048d8c_6; else 
            goto addr_8048d82_12;
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
    addr_8048e2f_24:
    return eax38;
    addr_8048d82_12:
    eax38 = reinterpret_cast<unsigned char*>(0);
    goto addr_8048e2f_24;
}

int32_t memset = 0x804886e;

void memset(int32_t a1, int32_t a2, int32_t a3) {
    goto memset;
}

struct s10 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

void fun_8048e46(unsigned char* a1, unsigned char* a2, unsigned char* a3);

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

    fun_8048e46(ebx5, esi6, edi7);
    ebx8 = reinterpret_cast<void*>(ebx5 + 0x168a);
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
                    goto reinterpret_cast<uint32_t>(ebx8) - *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx8) + eax9 * 4 - 0x15d8);
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

void fun_8048949();

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

    fun_8048949();
    ebx1 = reinterpret_cast<struct s11*>(ebx2 + 0x1b87);
    __register_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc, &ebx1->f1500);
    return;
}

void fun_8049422();

void __do_global_ctors_aux() {
    int32_t eax1;
    int32_t ebx2;
    int32_t* esi3;
    int32_t eax4;

    fun_8049422();
    eax1 = ebx2 + 0x10ae + 0xd0;
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

void fun_80488f1();

struct s13 {
    signed char[200] pad200;
    int32_t* f200;
};

void __do_global_dtors_aux() {
    struct s13* ebx1;
    int32_t ebx2;
    int32_t* eax3;
    int32_t eax4;

    fun_80488f1();
    ebx1 = reinterpret_cast<struct s13*>(ebx2 + 0x1bdf);
    while (eax3 = ebx1->f200, !!*eax3) {
        ebx1->f200 = eax3 + 1;
        eax4 = *eax3;
        eax4();
    }
    __deregister_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc);
    return;
}

int32_t __fpstart = 0x804880e;

void __fpstart(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    goto __fpstart;
}

int32_t add15(int32_t a1);

int32_t add10(int32_t a1, int32_t a2);

int32_t add5(int32_t a1, int32_t a2, int32_t a3);

void printarg(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

int32_t main(int32_t a1, void* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;

    eax8 = add15(25);
    eax9 = add10(eax8, 25);
    eax10 = add5(eax9, eax8, 25);
    printarg(eax10, eax9, eax8, 25);
    return 0;
}

int32_t exit = 0x804881e;

void exit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    goto exit;
}

struct s15 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t* f12;
    signed char[4] pad20;
    struct s15* f20;
};

struct s14 {
    signed char[1524] pad1524;
    struct s15* f1524;
};

struct s16 {
    signed char[8] pad8;
    int32_t f8;
};

struct s17 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_804925d(int32_t* a1) {
    struct s14* ebx2;
    int32_t eax3;
    struct s16* ebp4;
    struct s15** ecx5;
    struct s15* edx6;
    struct s17* ebp7;
    int32_t* v8;

    ebx2 = reinterpret_cast<struct s14*>(reinterpret_cast<int32_t>(__return_address()) + 0x1273);
    eax3 = ebp4->f8;
    ecx5 = &ebx2->f1524;
    if (!ebx2->f1524) {
        addr_804929d_2:
        abort();
    } else {
        do {
            edx6 = *ecx5;
            if (edx6->f8 == eax3) 
                goto addr_804927f_5;
            ecx5 = &edx6->f20;
        } while (edx6->f20);
        goto addr_804929d_2;
    }
    addr_80492a4_7:
    goto ebp7->f4;
    addr_804927f_5:
    *ecx5 = edx6->f20;
    if (edx6->f0) {
        v8 = edx6->f12;
        free(v8, a1);
        goto addr_80492a4_7;
    }
}

struct s18 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048931(int32_t a1, int32_t a2, int32_t a3) {
    struct s18* ebp4;

    goto ebp4->f4;
}

int32_t malloc = 0x804883e;

struct s2** malloc(uint32_t* a1, int32_t a2) {
    goto malloc;
}

struct s19 {
    signed char[8] pad8;
    struct s2* f8;
};

struct s20 {
    signed char[16] pad16;
    int32_t* f16;
};

struct s21 {
    signed char[20] pad20;
    int32_t* f20;
};

struct s22 {
    signed char[24] pad24;
    int32_t* f24;
};

struct s23 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s24 {
    signed char[4] pad4;
    int32_t f4;
};

struct s25 {
    signed char[16] pad16;
    int32_t* f16;
};

struct s26 {
    signed char[20] pad20;
    int32_t* f20;
};

struct s27 {
    signed char[24] pad24;
    int32_t* f24;
};

struct s28 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048b12() {
    struct s2* esi1;
    struct s19* ebp2;
    int32_t edi3;
    struct s20* ebp4;
    int32_t ebp5;
    struct s21* ebp6;
    int32_t ebp7;
    struct s22* ebp8;
    int32_t v9;
    struct s2** v10;
    struct s23* ebp11;
    uint32_t eax12;
    int32_t ebp13;
    int32_t ebp14;
    uint32_t eax15;
    int32_t ebp16;
    int32_t ebp17;
    struct s24* eax18;
    struct s25* ebp19;
    struct s26* ebp20;
    int32_t ebp21;
    struct s27* ebp22;
    int32_t ebp23;
    struct s28* ebp24;

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
            eax18 = reinterpret_cast<struct s24*>(reinterpret_cast<int32_t>(esi1) + esi1->f0);
            esi1 = reinterpret_cast<struct s2*>(&eax18->f4);
        } while (eax18->f4);
    }
    *ebp19->f16 = edi3;
    *ebp20->f20 = *reinterpret_cast<int32_t*>(ebp21 - 4);
    *ebp22->f24 = *reinterpret_cast<int32_t*>(ebp23 - 8);
    goto ebp24->f4;
}

struct s30 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s29 {
    signed char[8] pad8;
    struct s30* f8;
};

struct s32 {
    signed char[8] pad8;
    struct s2* f8;
};

struct s31 {
    signed char[8] pad8;
    struct s32* f8;
};

struct s34 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s33 {
    signed char[8] pad8;
    struct s34* f8;
};

struct s36 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s35 {
    signed char[8] pad8;
    struct s36* f8;
};

struct s38 {
    signed char[8] pad8;
    struct s2* f8;
};

struct s37 {
    signed char[8] pad8;
    struct s38* f8;
};

struct s39 {
    int32_t f0;
    int32_t f4;
    signed char[4] pad12;
    struct s2** f12;
};

struct s40 {
    signed char[8] pad8;
    struct s39* f8;
};

struct s41 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048ba2(int32_t a1) {
    struct s29* ebp2;
    struct s2* v3;
    struct s31* ebp4;
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
    struct s33* ebp15;
    struct s2** eax16;
    struct s2** edi17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    struct s35* ebp21;
    struct s2* v22;
    struct s37* ebp23;
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
    struct s39* edx35;
    struct s40* ebp36;
    int32_t ebp37;
    int32_t ebp38;
    struct s41* ebp39;

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

struct s42 {
    signed char[9] pad9;
    signed char f9;
};

struct s44 {
    signed char[4] pad4;
    int32_t f4;
};

struct s43 {
    signed char[8] pad8;
    struct s44* f8;
};

struct s45 {
    signed char[12] pad12;
    signed char** f12;
};

struct s46 {
    signed char[12] pad12;
    signed char** f12;
};

struct s47 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s49 {
    signed char[4] pad4;
    int32_t f4;
};

struct s48 {
    signed char[12] pad12;
    struct s49* f12;
};

struct s51 {
    signed char[4] pad4;
    unsigned char f4;
};

struct s50 {
    signed char[12] pad12;
    struct s51* f12;
};

struct s52 {
    signed char[5] pad5;
    unsigned char f5;
};

struct s54 {
    signed char[8] pad8;
    unsigned char f8;
};

struct s53 {
    signed char[12] pad12;
    struct s54* f12;
};

struct s56 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s55 {
    signed char[12] pad12;
    struct s56* f12;
};

struct s57 {
    signed char* f0;
    signed char[12] pad16;
    uint32_t f16;
};

struct s58 {
    signed char[12] pad12;
    struct s57* f12;
};

struct s59 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048d2e(unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    int32_t ebx4;
    struct s42* edx5;
    struct s43* ebp6;
    signed char* esi7;
    int32_t ebp8;
    struct s45* ebp9;
    int32_t ebp10;
    signed char* eax11;
    int32_t ebp12;
    int32_t ecx13;
    signed char* edi14;
    int1_t zf15;
    signed char* eax16;
    struct s46* ebp17;
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
    struct s47* eax28;
    int32_t ebp29;
    unsigned char* edx30;
    signed char* esi31;
    int32_t ebp32;
    int32_t ebp33;
    signed char* edi34;
    int32_t ebp35;
    int32_t ecx36;
    int1_t zf37;
    struct s48* ebp38;
    struct s50* ebp39;
    int32_t ebp40;
    unsigned char* v41;
    struct s53* ebp42;
    unsigned char* eax43;
    uint32_t* v44;
    struct s55* ebp45;
    unsigned char* eax46;
    struct s57* esi47;
    struct s58* ebp48;
    void* ebp49;
    struct s59* ebp50;

    ebx4 = reinterpret_cast<int32_t>(__return_address()) + 0x17a2;
    edx5 = reinterpret_cast<struct s42*>(reinterpret_cast<int32_t>(ebp6->f8) - (ebp6->f8->f4 - 4));
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
        addr_8048d8c_5:
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
            goto addr_8048d8c_5;
        if (edx5->f9 == 0x7a) 
            goto addr_8048d8c_5; else 
            goto addr_8048d82_11;
    }
    do {
        if (!ecx21) 
            break;
        --ecx21;
        ++edi20;
    } while (*edi20);
    ecx26 = reinterpret_cast<void*>(~ecx21);
    *reinterpret_cast<void**>(ebp27 - 8) = ecx26;
    eax28 = reinterpret_cast<struct s47*>(reinterpret_cast<int32_t>(edx19) + reinterpret_cast<int32_t>(ecx26) - 1);
    *reinterpret_cast<struct s47**>(ebp29 - 12) = eax28;
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
        edx30 = &(*reinterpret_cast<struct s52**>(ebp40 - 12))->f5;
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
    addr_8048e2f_23:
    goto ebp50->f4;
    addr_8048d82_11:
    goto addr_8048e2f_23;
}

struct s60 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
};

struct s61 {
    signed char[16] pad16;
    struct s60* f16;
};

struct s62 {
    signed char[20] pad20;
    uint32_t* f20;
};

struct s63 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s64 {
    signed char[8] pad8;
    int32_t f8;
};

struct s65 {
    signed char[12] pad12;
    void* f12;
};

struct s66 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s67 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s68 {
    signed char[12] pad12;
    void* f12;
};

struct s69 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048e46(unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    int32_t ebx4;
    struct s60* edi5;
    struct s61* ebp6;
    uint32_t* edx7;
    struct s62* ebp8;
    uint32_t eax9;
    struct s63* ebp10;
    struct s64* ebp11;
    uint32_t esi12;
    int32_t ebp13;
    uint32_t eax14;
    int32_t ebp15;
    struct s65* ebp16;
    int32_t ebp17;
    int32_t ebp18;
    unsigned char* v19;
    struct s66* ebp20;
    void* ebp21;
    unsigned char* eax22;
    struct s67* ebp23;
    int32_t ebp24;
    int32_t ebp25;
    void* ecx26;
    struct s68* ebp27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    struct s69* ebp31;

    ebx4 = reinterpret_cast<int32_t>(__return_address()) + 0x168a;
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
                    goto ebx4 - *reinterpret_cast<int32_t*>(ebx4 + eax9 * 4 - 0x15d8);
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

struct s70 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049455(int32_t a1, int32_t a2, int32_t a3) {
    struct s70* ebp4;

    goto ebp4->f4;
}

struct s71 {
    signed char[1500] pad1500;
    int32_t f1500;
};

struct s72 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048949() {
    struct s71* ebx1;
    struct s72* ebp2;

    ebx1 = reinterpret_cast<struct s71*>(reinterpret_cast<int32_t>(__return_address()) + 0x1b87);
    __register_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc, &ebx1->f1500);
    goto ebp2->f4;
}

struct s73 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049422() {
    int32_t eax1;
    int32_t* esi2;
    int32_t eax3;
    struct s73* ebp4;

    eax1 = reinterpret_cast<int32_t>(__return_address()) + 0x10ae + 0xd0;
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

struct s74 {
    signed char[200] pad200;
    int32_t* f200;
};

struct s75 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80488f1() {
    struct s74* ebx1;
    int32_t* eax2;
    int32_t eax3;
    struct s75* ebp4;

    ebx1 = reinterpret_cast<struct s74*>(reinterpret_cast<int32_t>(__return_address()) + 0x1bdf);
    while (eax2 = ebx1->f200, !!*eax2) {
        ebx1->f200 = eax2 + 1;
        eax3 = *eax2;
        eax3();
    }
    __deregister_frame_info(reinterpret_cast<int32_t>(ebx1) + 0xdc);
    goto ebp4->f4;
}

int32_t add15(int32_t a1) {
    return a1 + 15;
}

int32_t add10(int32_t a1, int32_t a2) {
    return a1 + 10;
}

struct s76 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t add5(int32_t a1, int32_t a2, int32_t a3) {
    struct s76* ebp4;

    __asm__("in al, dx");
    goto ebp4->f4;
}

void printf(int32_t a1, int32_t a2);

void printarg(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    printf("Fifty five is %d\n", a1);
    return;
}

struct s77 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s78 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s79 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s80 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s81 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048c8e() {
    struct s5* esi1;
    struct s77* ebp2;
    uint32_t edi3;
    uint32_t ecx4;
    int32_t ebp5;
    struct s2** esi6;
    uint32_t edx7;
    int32_t ebp8;
    struct s2* ecx9;
    int32_t ebp10;
    struct s78* ebp11;
    struct s79* ebp12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t ebp15;
    struct s81* ebp16;

    esi1 = *reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(__return_address()) + 0x1842 + 0x5f4);
    if (!esi1) 
        goto addr_8048d13_2;
    do {
        if (!esi1->f0) {
            frame_init(esi1);
        }
    } while ((esi1->f0 > ebp2->f8 || esi1->f4 <= ebp2->f8) && (esi1 = esi1->f20, !!esi1));
    if (!esi1) 
        goto addr_8048cc5_8;
    edi3 = 0;
    ecx4 = esi1->f16;
    *reinterpret_cast<uint32_t*>(ebp5 - 4) = ecx4;
    if (0 >= ecx4) {
        addr_8048d13_2:
    } else {
        esi6 = esi1->f12;
        do {
            edx7 = *reinterpret_cast<int32_t*>(ebp8 - 4) + edi3 >> 1;
            ecx9 = esi6[edx7];
            *reinterpret_cast<struct s2**>(ebp10 - 8) = ecx9;
            if (ebp11->f8 >= ecx9->f8) {
                if (ebp12->f8 <= ecx9->f8 + (*reinterpret_cast<struct s80**>(ebp13 - 8))->f12) 
                    goto addr_8048cc8_13;
                edi3 = edx7 + 1;
            } else {
                *reinterpret_cast<uint32_t*>(ebp14 - 4) = edx7;
            }
        } while (*reinterpret_cast<uint32_t*>(ebp15 - 4) > edi3);
        goto addr_8048d13_2;
    }
    addr_8048d15_17:
    goto ebp16->f4;
    addr_8048cc8_13:
    goto addr_8048d15_17;
    addr_8048cc5_8:
    goto addr_8048d13_2;
}

struct s83 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    struct s83* f20;
};

struct s82 {
    signed char[1524] pad1524;
    struct s83* f1524;
};

struct s84 {
    signed char[12] pad12;
    struct s83* f12;
};

struct s85 {
    signed char[8] pad8;
    int32_t f8;
};

struct s86 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80491d1() {
    struct s82* ebx1;
    struct s83* edx2;
    struct s84* ebp3;
    struct s85* ebp4;
    struct s86* ebp5;

    ebx1 = reinterpret_cast<struct s82*>(reinterpret_cast<int32_t>(__return_address()) + 0x12ff);
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

struct s87 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s2* find_fde(uint32_t a1);

struct s88 {
    signed char[4] pad4;
    int32_t f4;
};

struct s89 {
    signed char[16] pad16;
    unsigned char f16;
};

struct s90 {
    signed char[8] pad8;
    int32_t f8;
};

struct s91 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s92 {
    signed char[12] pad12;
    int32_t* f12;
};

struct s93 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_80492bd(unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    uint32_t v4;
    struct s87* ebp5;
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
    struct s91* ebp48;
    uint32_t* v49;
    int32_t ebp50;
    int32_t ebp51;
    int32_t ebp52;
    unsigned char* eax53;
    int32_t* edi54;
    struct s92* ebp55;
    int32_t* esi56;
    int32_t ebp57;
    int32_t ecx58;
    struct s93* ebp59;

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
        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<struct s88**>(ebp24 - 0x94)) - ((*reinterpret_cast<struct s88**>(ebp24 - 0x94))->f4 - 4));
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
        esi35 = &(*reinterpret_cast<struct s89**>(ebp36 - 0x94))->f16;
        if (**reinterpret_cast<signed char**>(ebp37 - 20) == 0x7a) {
            eax39 = decode_uleb128(esi35, reinterpret_cast<int32_t>(ebp38) - 0x8c, a1, a2, a3);
            esi35 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax39) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp40 - 0x8c)));
        }
        edi41 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(ebp42 - 0x94)) + reinterpret_cast<int32_t>(**reinterpret_cast<void***>(ebp42 - 0x94)) + 4);
        *reinterpret_cast<int32_t*>(ebp43 - 0x90) = (*reinterpret_cast<struct s90**>(ebp44 - 0x94))->f8;
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

struct s94 {
    signed char[1524] pad1524;
    struct s12* f1524;
};

void __register_frame_info(int32_t a1, struct s12* a2) {
    struct s94* ebx3;
    int32_t ebx4;

    fun_80491d1();
    ebx3 = reinterpret_cast<struct s94*>(ebx4 + 0x12ff);
    a2->f8 = a1;
    a2->f4 = 0;
    a2->f0 = 0;
    a2->f12 = 0;
    a2->f16 = 0;
    a2->f20 = ebx3->f1524;
    ebx3->f1524 = a2;
    return;
}

int32_t printf = 0x804882e;

void printf(int32_t a1, int32_t a2) {
    goto printf;
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

    fun_8048c8e();
    esi2 = *reinterpret_cast<struct s5**>(reinterpret_cast<int32_t>(ebx3) + 0x1842 + 0x5f4);
    if (!esi2) 
        goto addr_8048d13_3;
    do {
        if (!esi2->f0) {
            frame_init(esi2);
        }
    } while ((esi2->f0 > a1 || esi2->f4 <= a1) && (esi2 = esi2->f20, !!esi2));
    if (!esi2) 
        goto addr_8048cc5_9;
    edi4 = 0;
    ecx5 = esi2->f16;
    v6 = ecx5;
    if (0 >= ecx5) {
        addr_8048d13_3:
        eax7 = reinterpret_cast<struct s2*>(0);
    } else {
        esi8 = esi2->f12;
        do {
            edx9 = v6 + edi4 >> 1;
            ecx10 = esi8[edx9];
            if (a1 >= ecx10->f8) {
                if (a1 <= ecx10->f8 + ecx10->f12) 
                    goto addr_8048cc8_14;
                edi4 = edx9 + 1;
            } else {
                v6 = edx9;
            }
        } while (v6 > edi4);
        goto addr_8048d13_3;
    }
    addr_8048d15_18:
    return eax7;
    addr_8048cc8_14:
    eax7 = ecx10;
    goto addr_8048d15_18;
    addr_8048cc5_9:
    goto addr_8048d13_3;
}

struct s95 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8048971(int32_t a1, int32_t a2, int32_t a3) {
    struct s95* ebp4;

    goto ebp4->f4;
}

struct s97 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    struct s97* f20;
};

struct s96 {
    signed char[1524] pad1524;
    struct s97* f1524;
};

struct s98 {
    signed char[8] pad8;
    int32_t f8;
};

struct s99 {
    signed char[12] pad12;
    struct s97* f12;
};

struct s100 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_8049219(int32_t a1, int32_t a2, int32_t a3) {
    struct s96* ebx4;
    int32_t eax5;
    struct s98* ebp6;
    struct s97* edx7;
    struct s99* ebp8;
    struct s100* ebp9;

    ebx4 = reinterpret_cast<struct s96*>(reinterpret_cast<int32_t>(__return_address()) + 0x12b7);
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

int32_t _cleanup = 0x80487ee;

void fun_80487e4() {
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

    fun_8048931(ebx1, ebp2, __return_address());
}

struct s101 {
    signed char[4] pad4;
    struct s101* f4;
};

unsigned char g14f40000;

int32_t* fun_d0048f44();

struct s102 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048ef8(int32_t ecx) {
    struct s101** esp2;
    unsigned char* eax3;
    signed char al4;
    uint1_t cf5;
    unsigned char tmp8_6;
    uint1_t cf7;
    unsigned char* eax8;
    unsigned char dl9;
    int32_t ecx10;
    int32_t edx11;
    int32_t edx12;
    signed char bl13;
    unsigned char tmp8_14;
    uint1_t cf15;
    int32_t* eax16;
    unsigned char* eax17;
    int32_t ebx18;
    int32_t edx19;
    int32_t ebx20;
    int32_t edx21;
    signed char bl22;
    unsigned char tmp8_23;
    uint1_t cf24;
    unsigned char tmp8_25;
    uint1_t cf26;
    unsigned char tmp8_27;
    uint1_t cf28;
    unsigned char tmp8_29;
    uint1_t cf30;
    unsigned char tmp8_31;
    uint1_t cf32;
    unsigned char tmp8_33;
    uint1_t cf34;
    unsigned char tmp8_35;
    uint1_t cf36;
    unsigned char tmp8_37;
    uint1_t cf38;
    unsigned char tmp8_39;
    uint1_t cf40;
    unsigned char tmp8_41;
    uint1_t cf42;
    unsigned char tmp8_43;
    uint1_t cf44;
    unsigned char tmp8_45;
    uint1_t cf46;
    unsigned char tmp8_47;
    uint1_t cf48;
    unsigned char tmp8_49;
    uint1_t cf50;
    unsigned char tmp8_51;
    uint1_t cf52;
    unsigned char tmp8_53;
    uint1_t cf54;
    unsigned char tmp8_55;
    uint1_t cf56;
    unsigned char tmp8_57;
    uint1_t cf58;
    unsigned char tmp8_59;
    uint1_t cf60;
    unsigned char tmp8_61;
    uint1_t cf62;
    unsigned char tmp8_63;
    uint1_t cf64;
    unsigned char tmp8_65;
    uint1_t cf66;
    unsigned char tmp8_67;
    uint1_t cf68;
    unsigned char tmp8_69;
    uint1_t cf70;
    unsigned char tmp8_71;
    uint1_t cf72;
    unsigned char tmp8_73;
    uint1_t cf74;
    unsigned char tmp8_75;
    uint1_t cf76;
    unsigned char tmp8_77;
    uint1_t cf78;
    unsigned char tmp8_79;
    uint1_t cf80;
    unsigned char tmp8_81;
    uint1_t cf82;
    unsigned char* eax83;
    unsigned char tmp8_84;
    signed char bh85;
    uint1_t cf86;
    uint32_t eax87;
    int32_t ebx88;
    int32_t ebx89;
    uint32_t* edx90;
    struct s102* ebp91;
    int32_t esi92;
    unsigned char tmp8_93;
    uint1_t cf94;
    unsigned char* eax95;
    unsigned char tmp8_96;
    uint1_t cf97;
    unsigned char* eax98;
    unsigned char tmp8_99;
    uint1_t cf100;
    unsigned char tmp8_101;
    uint1_t cf102;

    esp2 = reinterpret_cast<struct s101**>(__zero_stack_offset());
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(al4 + 19) + cf5);
    tmp8_6 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&eax3));
    cf7 = reinterpret_cast<uint1_t>(tmp8_6 < *eax3);
    *eax3 = tmp8_6;
    *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) - reinterpret_cast<unsigned char>(21 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax3) < reinterpret_cast<unsigned char>(21 + cf7))));
    *eax8 = reinterpret_cast<unsigned char>(*eax8 + *reinterpret_cast<unsigned char*>(&eax8));
    g14f40000 = reinterpret_cast<unsigned char>(g14f40000 | dl9);
    *eax8 = reinterpret_cast<unsigned char>(*eax8 + *reinterpret_cast<unsigned char*>(&eax8));
    ecx10 = ecx - 1;
    if (!(reinterpret_cast<uint1_t>(!!ecx10) & reinterpret_cast<uint1_t>(!!*eax8))) {
        *eax8 = reinterpret_cast<unsigned char>(*eax8 + *reinterpret_cast<unsigned char*>(&eax8));
        __asm__("enter 0x14, 0x0");
        if (reinterpret_cast<signed char>(*eax8) < reinterpret_cast<signed char>(0) != __intrinsic()) {
            addr_8048f26_3:
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) + edx11) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) + edx12) + bl13);
            tmp8_14 = reinterpret_cast<unsigned char>(*eax8 + *reinterpret_cast<unsigned char*>(&eax8));
            cf15 = reinterpret_cast<uint1_t>(tmp8_14 < *eax8);
            *eax8 = tmp8_14;
            *reinterpret_cast<int32_t*>(esp2 - 1) = 0x8048f31;
            eax16 = fun_d0048f44();
            eax17 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax16) + *eax16 + cf15);
            *reinterpret_cast<signed char*>(ebx18 + edx19) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx20 + edx21) + bl22);
            tmp8_23 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf24 = reinterpret_cast<uint1_t>(tmp8_23 < *eax17);
            *eax17 = tmp8_23;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf24))));
            tmp8_25 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf26 = reinterpret_cast<uint1_t>(tmp8_25 < *eax17);
            *eax17 = tmp8_25;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf26))));
            tmp8_27 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf28 = reinterpret_cast<uint1_t>(tmp8_27 < *eax17);
            *eax17 = tmp8_27;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf28))));
            tmp8_29 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf30 = reinterpret_cast<uint1_t>(tmp8_29 < *eax17);
            *eax17 = tmp8_29;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf30))));
            tmp8_31 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf32 = reinterpret_cast<uint1_t>(tmp8_31 < *eax17);
            *eax17 = tmp8_31;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf32))));
            tmp8_33 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf34 = reinterpret_cast<uint1_t>(tmp8_33 < *eax17);
            *eax17 = tmp8_33;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf34))));
            tmp8_35 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf36 = reinterpret_cast<uint1_t>(tmp8_35 < *eax17);
            *eax17 = tmp8_35;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf36))));
            tmp8_37 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf38 = reinterpret_cast<uint1_t>(tmp8_37 < *eax17);
            *eax17 = tmp8_37;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf38))));
            tmp8_39 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf40 = reinterpret_cast<uint1_t>(tmp8_39 < *eax17);
            *eax17 = tmp8_39;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf40))));
            tmp8_41 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf42 = reinterpret_cast<uint1_t>(tmp8_41 < *eax17);
            *eax17 = tmp8_41;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf42))));
            tmp8_43 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf44 = reinterpret_cast<uint1_t>(tmp8_43 < *eax17);
            *eax17 = tmp8_43;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf44))));
            tmp8_45 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf46 = reinterpret_cast<uint1_t>(tmp8_45 < *eax17);
            *eax17 = tmp8_45;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf46))));
            tmp8_47 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf48 = reinterpret_cast<uint1_t>(tmp8_47 < *eax17);
            *eax17 = tmp8_47;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf48))));
            tmp8_49 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf50 = reinterpret_cast<uint1_t>(tmp8_49 < *eax17);
            *eax17 = tmp8_49;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf50))));
            tmp8_51 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf52 = reinterpret_cast<uint1_t>(tmp8_51 < *eax17);
            *eax17 = tmp8_51;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf52))));
            tmp8_53 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf54 = reinterpret_cast<uint1_t>(tmp8_53 < *eax17);
            *eax17 = tmp8_53;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf54))));
            tmp8_55 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf56 = reinterpret_cast<uint1_t>(tmp8_55 < *eax17);
            *eax17 = tmp8_55;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf56))));
            tmp8_57 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf58 = reinterpret_cast<uint1_t>(tmp8_57 < *eax17);
            *eax17 = tmp8_57;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf58))));
            tmp8_59 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf60 = reinterpret_cast<uint1_t>(tmp8_59 < *eax17);
            *eax17 = tmp8_59;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf60))));
            tmp8_61 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf62 = reinterpret_cast<uint1_t>(tmp8_61 < *eax17);
            *eax17 = tmp8_61;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf62))));
            tmp8_63 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf64 = reinterpret_cast<uint1_t>(tmp8_63 < *eax17);
            *eax17 = tmp8_63;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf64))));
            tmp8_65 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf66 = reinterpret_cast<uint1_t>(tmp8_65 < *eax17);
            *eax17 = tmp8_65;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf66))));
            tmp8_67 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf68 = reinterpret_cast<uint1_t>(tmp8_67 < *eax17);
            *eax17 = tmp8_67;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf68))));
            tmp8_69 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf70 = reinterpret_cast<uint1_t>(tmp8_69 < *eax17);
            *eax17 = tmp8_69;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf70))));
            tmp8_71 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf72 = reinterpret_cast<uint1_t>(tmp8_71 < *eax17);
            *eax17 = tmp8_71;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf72))));
            tmp8_73 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf74 = reinterpret_cast<uint1_t>(tmp8_73 < *eax17);
            *eax17 = tmp8_73;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf74))));
            tmp8_75 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf76 = reinterpret_cast<uint1_t>(tmp8_75 < *eax17);
            *eax17 = tmp8_75;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf76))));
            tmp8_77 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf78 = reinterpret_cast<uint1_t>(tmp8_77 < *eax17);
            *eax17 = tmp8_77;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf78))));
            tmp8_79 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf80 = reinterpret_cast<uint1_t>(tmp8_79 < *eax17);
            *eax17 = tmp8_79;
            *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) - reinterpret_cast<unsigned char>(19 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax17) < reinterpret_cast<unsigned char>(19 + cf80))));
            tmp8_81 = reinterpret_cast<unsigned char>(*eax17 + *reinterpret_cast<unsigned char*>(&eax17));
            cf82 = reinterpret_cast<uint1_t>(tmp8_81 < *eax17);
            *eax17 = tmp8_81;
            __asm__("insb ");
            eax83 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax17) + *eax17 + cf82);
            tmp8_84 = reinterpret_cast<unsigned char>(*eax83 + bh85);
            cf86 = reinterpret_cast<uint1_t>(tmp8_84 < *eax83);
            *eax83 = tmp8_84;
            eax87 = reinterpret_cast<uint32_t>(eax83) + *eax83 + cf86;
            *reinterpret_cast<signed char*>(ebx88 + 0x68b0875) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx89 + 0x68b0875) + *reinterpret_cast<signed char*>(&ecx10));
            *edx90 = eax87;
            ebp91->f8 = esi92 + 4;
            goto 0x80491bc;
        } else {
            tmp8_93 = reinterpret_cast<unsigned char>(*eax8 + *reinterpret_cast<unsigned char*>(&eax8));
            cf94 = reinterpret_cast<uint1_t>(tmp8_93 < *eax8);
            *eax8 = tmp8_93;
            *reinterpret_cast<unsigned char*>(&eax95) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) + 19) + cf94);
            tmp8_96 = reinterpret_cast<unsigned char>(*eax95 + *reinterpret_cast<unsigned char*>(&eax95));
            cf97 = reinterpret_cast<uint1_t>(tmp8_96 < *eax95);
            *eax95 = tmp8_96;
            *reinterpret_cast<unsigned char*>(&eax98) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax95) + 19) + cf97);
            tmp8_99 = reinterpret_cast<unsigned char>(*eax98 + *reinterpret_cast<unsigned char*>(&eax98));
            cf100 = reinterpret_cast<uint1_t>(tmp8_99 < *eax98);
            *eax98 = tmp8_99;
            esp2 = reinterpret_cast<struct s101**>(reinterpret_cast<int32_t>(__return_address()) + 4);
            *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax98))) + cf100);
        }
    }
    tmp8_101 = reinterpret_cast<unsigned char>(*(eax8 - 0x77ffffed) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx10) + 1));
    cf102 = reinterpret_cast<uint1_t>(tmp8_101 < *(eax8 - 0x77ffffed));
    *(eax8 - 0x77ffffed) = tmp8_101;
    eax8 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax8) + *eax8 + cf102);
    goto addr_8048f26_3;
}

struct s104 {
    int32_t f0;
    signed char[108] pad112;
    int32_t* f112;
};

struct s103 {
    signed char[12] pad12;
    struct s104* f12;
};

void fun_8049148() {
    int32_t* v1;
    int32_t* edx2;
    struct s103* ebp3;
    struct s104* edi4;
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
        edi4 = reinterpret_cast<struct s104*>(&edi4->pad112);
        ++esi5;
    }
    free(edx2, v1);
    goto 0x80491bc;
}

struct s105 {
    signed char[12] pad12;
    void* f12;
};

void fun_8049164() {
    int32_t ebp1;
    void* ecx2;
    struct s105* ebp3;
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
    goto 0x80491bc;
}

struct s106 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s107 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s109 {
    signed char[12] pad12;
    int32_t f12;
};

struct s108 {
    signed char[12] pad12;
    struct s109* f12;
};

void fun_8049198(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s106* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s107* ebp7;
    struct s108* ebp8;
    int32_t ebp9;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 4, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    ebp8->f12->f12 = *reinterpret_cast<int32_t*>(ebp9 - 4);
    goto 0x80491bc;
}

void init_dummy() {
    int32_t ebx1;
    int32_t ebp2;

    fun_8049455(ebx1, ebp2, __return_address());
}

int32_t g804a4d8 = 0;

void fun_80487ee() {
    goto g804a4d8;
}

void fun_80487fe() {
    goto 0x80487d8;
}

void _mcount() {
    return;
}

struct s110 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s111 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048fc8() {
    unsigned char* ecx1;
    struct s110* ebp2;
    uint32_t* edx3;
    int32_t* edx4;
    struct s111* ebp5;

    ecx1 = ebp2->f8;
    *edx3 = *edx4 + *ecx1;
    ebp5->f8 = reinterpret_cast<int32_t>(ecx1 + 1);
    goto 0x80491bc;
}

void fun_804884e() {
    goto 0x80487d8;
}

void __frame_state_for() {
    unsigned char* ebx1;
    unsigned char* esi2;
    unsigned char* edi3;

    fun_80492bd(ebx1, esi2, edi3);
}

void fun_804885e() {
    goto 0x80487d8;
}

void fun_8049416() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_804886e() {
    goto 0x80487d8;
}

void fun_804880e() {
    goto 0x80487d8;
}

void fun_804881e() {
    goto 0x80487d8;
}

void fun_804883e() {
    goto 0x80487d8;
}

struct s112 {
    signed char[8] pad8;
    uint16_t* f8;
};

struct s113 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048fdc() {
    uint16_t* esi1;
    struct s112* ebp2;
    uint32_t* edx3;
    int32_t* edx4;
    struct s113* ebp5;

    esi1 = ebp2->f8;
    *edx3 = *edx4 + *esi1;
    ebp5->f8 = reinterpret_cast<int32_t>(esi1 + 1);
    goto 0x80491bc;
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
        atexit(0x80487e8, edx2, 0, 0);
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

    fun_8048971(ebx1, ebp2, __return_address());
}

void __register_frame_info_table() {
    int32_t ebx1;
    int32_t ebp2;

    fun_8049219(ebx1, ebp2, __return_address());
}

struct s114 {
    signed char[8] pad8;
    int32_t* f8;
};

struct s115 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_8048ff0() {
    int32_t* ecx1;
    struct s114* ebp2;
    int32_t* edx3;
    int32_t* edx4;
    struct s115* ebp5;

    ecx1 = ebp2->f8;
    *edx3 = *edx4 + *ecx1;
    ebp5->f8 = reinterpret_cast<int32_t>(ecx1 + 1);
    goto 0x80491bc;
}

void fun_804882e() {
    goto 0x80487d8;
}

struct s116 {
    signed char[8] pad8;
    unsigned char* f8;
};

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
    signed char[12] pad12;
    int32_t f12;
};

struct s121 {
    signed char[12] pad12;
    void* f12;
};

void fun_8049008(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    void* ebp4;
    unsigned char* v5;
    struct s116* ebp6;
    unsigned char* eax7;
    struct s117* ebp8;
    unsigned char* v9;
    struct s118* ebp10;
    void* ebp11;
    unsigned char* eax12;
    struct s119* ebp13;
    int32_t ebp14;
    int32_t ebp15;
    struct s120* edi16;
    void* esi17;
    struct s121* ebp18;
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
    goto 0x80491bc;
}

void fun_804897d() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    int32_t ebp4;
    int32_t ebp5;
    signed char dl6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *reinterpret_cast<signed char*>(ebp4 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp5 - 0x75) + dl6);
}

struct s122 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s123 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s124 {
    signed char[12] pad12;
    int32_t f12;
};

void fun_8049054(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s122* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s123* ebp7;
    int32_t ebp8;
    struct s124* ebp9;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 8, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    *reinterpret_cast<signed char*>(*reinterpret_cast<int32_t*>(ebp8 - 8) + ebp9->f12 + 92) = 0;
    goto 0x80491bc;
}

struct s125 {
    signed char[8] pad8;
    unsigned char* f8;
};

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
    signed char[12] pad12;
    void* f12;
};

void fun_8049074(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    void* ebp4;
    unsigned char* v5;
    struct s125* ebp6;
    unsigned char* eax7;
    struct s126* ebp8;
    unsigned char* v9;
    struct s127* ebp10;
    void* ebp11;
    unsigned char* eax12;
    struct s128* ebp13;
    void* ecx14;
    struct s129* ebp15;
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
    goto 0x80491bc;
}

struct s130 {
    signed char[8] pad8;
    unsigned char* f8;
};

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
    int32_t f8;
    signed char[76] pad88;
    int16_t f88;
};

struct s135 {
    signed char[12] pad12;
    struct s134* f12;
};

void fun_80490b4(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    void* ebp4;
    unsigned char* v5;
    struct s130* ebp6;
    unsigned char* eax7;
    struct s131* ebp8;
    unsigned char* v9;
    struct s132* ebp10;
    void* ebp11;
    unsigned char* eax12;
    struct s133* ebp13;
    int32_t eax14;
    int32_t ebp15;
    struct s134* ecx16;
    struct s135* ebp17;
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
    goto 0x80491bc;
}

struct s136 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s137 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s139 {
    signed char[88] pad88;
    int16_t f88;
};

struct s138 {
    signed char[12] pad12;
    struct s139* f12;
};

void fun_80490e8(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s136* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s137* ebp7;
    int32_t eax8;
    int32_t ebp9;
    struct s138* ebp10;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 8, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    eax8 = *reinterpret_cast<int32_t*>(ebp9 - 8);
    ebp10->f12->f88 = *reinterpret_cast<int16_t*>(&eax8);
    goto 0x80491bc;
}

struct s140 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s141 {
    signed char[8] pad8;
    unsigned char* f8;
};

struct s143 {
    signed char[8] pad8;
    int32_t f8;
};

struct s142 {
    signed char[12] pad12;
    struct s143* f12;
};

void fun_8049108(unsigned char* a1, unsigned char* a2) {
    unsigned char* v3;
    struct s140* ebp4;
    void* ebp5;
    unsigned char* eax6;
    struct s141* ebp7;
    struct s142* ebp8;
    int32_t ebp9;

    v3 = ebp4->f8;
    eax6 = decode_uleb128(v3, reinterpret_cast<int32_t>(ebp5) - 4, __return_address(), a1, a2);
    ebp7->f8 = eax6;
    ebp8->f12->f8 = *reinterpret_cast<int32_t*>(ebp9 - 4);
    goto 0x80491bc;
}

struct s144 {
    signed char[12] pad12;
    struct s2** f12;
};

struct s146 {
    signed char[112] pad112;
    struct s2** f112;
};

struct s145 {
    signed char[12] pad12;
    struct s146* f12;
};

void fun_8049128() {
    struct s2** eax1;
    struct s2** edx2;
    struct s2** edi3;
    struct s2** esi4;
    struct s144* ebp5;
    int32_t ecx6;
    struct s145* ebp7;

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
    goto 0x80491bc;
}
