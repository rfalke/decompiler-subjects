
struct s0 {
    void* f0;
    signed char[109] pad110;
    unsigned char f6e;
    signed char[4] pad115;
    unsigned char f73;
};

void fun_80487a5();

void fun_80487fc(uint32_t ecx);

uint32_t fun_8048826();

int32_t g8055041;

int32_t g8055019;

int32_t g8055045;

int32_t g805501d;

int32_t g8055049;

int32_t g8055021;

uint32_t g8055029;

uint32_t g805504d;

uint32_t g805502d;

uint32_t g8055051;

int32_t g8055055;

int32_t g8055035;

int32_t g8055059;

int32_t g8055039;

int32_t g805505d;

int32_t g805503d;

void fun_80482b7(struct s0* a1) {
    void* ecx2;
    struct s0* edi3;
    uint32_t ecx4;
    uint32_t ecx5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t eax8;

    __asm__("pushad ");
    ecx2 = reinterpret_cast<void*>(0);
    edi3 = a1;
    do {
        ecx2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx2) + 1);
    } while (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edi3) + reinterpret_cast<uint32_t>(ecx2)) >= 1);
    ecx4 = reinterpret_cast<uint32_t>(ecx2) - 1;
    fun_80487a5();
    ecx5 = ecx4 >> 1;
    fun_80487fc(ecx5);
    fun_8048826();
    fun_80487a5();
    if (ecx4 & 1) {
        ++ecx5;
    }
    fun_80487fc(ecx5);
    eax6 = fun_8048826();
    g8055041 = g8055019;
    g8055045 = g805501d;
    g8055049 = g8055021;
    __asm__("lodsd ");
    eax7 = eax6 ^ g8055029;
    g805504d = eax7;
    __asm__("lodsd ");
    eax8 = eax7 ^ g805502d;
    g8055051 = eax8;
    g8055055 = g8055035;
    g8055059 = g8055039;
    g805505d = g805503d;
    __asm__("popad ");
    return;
}

uint32_t g8050f3c;

int32_t fun_8048329(uint32_t* a1, uint32_t a2) {
    uint32_t ecx3;
    uint32_t ecx4;
    uint32_t* esi5;
    uint32_t edx6;
    uint32_t edx7;
    uint32_t ecx8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    uint32_t eax13;
    uint32_t eax14;
    uint32_t eax15;

    g8050f3c = 0xb7e15163;
    ecx3 = 1;
    do {
        *reinterpret_cast<uint32_t*>(0x8050f3c + ecx3 * 4) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(0x8050f3c + ecx3 * 4 - 4) - 0x61c88647);
        ++ecx3;
    } while (ecx3 < 44);
    ecx4 = 0;
    esi5 = a1;
    edx6 = a2 >> 5;
    do {
        *reinterpret_cast<uint32_t*>(0x8050f3c + ecx4 * 4) = esi5[ecx4];
        ++ecx4;
    } while (ecx4 < edx6);
    edx7 = edx6 - 1;
    ecx8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do {
        eax13 = *reinterpret_cast<uint32_t*>(0x8050f3c + v11 * 4) + v9 + v10;
        __asm__("rol eax, 0x3");
        v9 = eax13;
        __asm__("rol eax, cl");
        v10 = *reinterpret_cast<uint32_t*>(0x8050ff0 + v12 * 4) + (v10 + eax13);
        *reinterpret_cast<uint32_t*>(0x8050f3c + v11 * 4) = v9;
        *reinterpret_cast<uint32_t*>(0x8050ff0 + v12 * 4) = v10;
        eax14 = v11 + 1;
        if (eax14 == 43) {
            eax14 = 0;
        }
        v11 = eax14;
        eax15 = v12 + 1;
        if (eax15 == edx7) {
            eax15 = 0;
        }
        v12 = eax15;
        ++ecx8;
    } while (ecx8 < 0x84);
    return 0x8050f3c;
}

struct s1 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
};

struct s2 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
};

int32_t g8050f40;

struct s3 {
    int32_t f0;
    int32_t f4;
};

int32_t g8050fe4;

int32_t g8050fe8;

uint32_t fun_80483de(void* ecx, struct s1* a2, struct s2* a3) {
    struct s2* v4;
    uint32_t eax5;
    uint32_t tmp32_6;
    uint32_t ebx7;
    uint32_t ecx8;
    uint32_t tmp32_9;
    uint32_t edx10;
    struct s3* ebp11;
    uint32_t v12;
    uint32_t ecx13;
    uint32_t tmp32_14;
    uint32_t tmp32_15;

    __asm__("pushad ");
    v4 = a3;
    eax5 = a2->f0;
    tmp32_6 = a2->f4 + g8050f3c;
    ebx7 = tmp32_6;
    ecx8 = a2->f8;
    tmp32_9 = a2->fc + g8050f40;
    edx10 = tmp32_9;
    ebp11 = reinterpret_cast<struct s3*>(0x8050f44);
    do {
        __asm__("rol esi, 0x5");
        __asm__("rol edi, 0x5");
        __asm__("rol eax, cl");
        v12 = (eax5 ^ (ebx7 + ebx7 + 1) * ebx7) + ebp11->f0;
        __asm__("rol eax, cl");
        ecx13 = (ecx8 ^ (edx10 + edx10 + 1) * edx10) + ebp11->f4;
        eax5 = ebx7;
        ebx7 = ecx13;
        ecx8 = edx10;
        edx10 = v12;
        ++ebp11;
    } while (!reinterpret_cast<int1_t>(ebp11 == 0x8050fe4));
    tmp32_14 = eax5 + g8050fe4;
    v4->f0 = tmp32_14;
    v4->f4 = ebx7;
    tmp32_15 = ecx8 + g8050fe8;
    v4->f8 = tmp32_15;
    v4->fc = edx10;
    __asm__("popad ");
    return tmp32_14;
}

int32_t g80488a0;

int32_t g80488a4;

int32_t g80488a8;

int32_t g80488ac;

int32_t g80488b0;

uint32_t g80488b4;

uint32_t g80488b8;

struct s4 {
    uint32_t f0;
    int32_t f4;
    int16_t f8;
};

struct s5 {
    uint32_t f0;
    int32_t f4;
};

void fun_80484e2(void* ecx);

void fun_80487a5() {
    struct s4* edi1;
    int32_t ecx2;
    struct s5* esi3;
    int32_t ecx4;
    int32_t v5;
    uint32_t ebx6;
    int32_t edx7;
    int32_t ecx8;

    __asm__("pushad ");
    g80488a0 = 0x67452301;
    g80488a4 = 0xefcdab89;
    g80488a8 = 0x98badcfe;
    g80488ac = 0x10325476;
    g80488b0 = 0xc3d2e1f0;
    g80488b4 = 0;
    g80488b8 = 0;
    edi1 = reinterpret_cast<struct s4*>(0x80488bc);
    ecx2 = 16;
    while (ecx2) {
        --ecx2;
        edi1->f0 = 0;
        edi1 = reinterpret_cast<struct s4*>(&edi1->f4);
    }
    esi3 = reinterpret_cast<struct s5*>(fun_80484e2);
    ecx4 = 10;
    do {
        v5 = ecx4;
        ebx6 = esi3->f0;
        edx7 = esi3->f4;
        ++esi3;
        ecx8 = 16;
        do {
            __asm__("lodsw ");
            edi1->f0 = ebx6;
            edi1->f4 = edx7;
            edi1->f8 = 0;
            ++edi1;
            --ecx8;
        } while (ecx8);
        ecx4 = v5 - 1;
    } while (ecx4);
    __asm__("popad ");
    return;
}

uint32_t fun_80486af();

void fun_80487fc(uint32_t ecx) {
    uint32_t edx2;
    uint32_t ecx3;
    uint32_t eax4;
    uint32_t eax5;

    __asm__("pushad ");
    edx2 = ecx;
    ecx3 = ecx >> 6;
    if (ecx3) {
        do {
            fun_80486af();
            --ecx3;
        } while (ecx3);
    }
    eax4 = g80488b4;
    eax5 = eax4 + edx2;
    if (reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(eax4)) {
        ++g80488b8;
    }
    g80488b4 = eax5;
    __asm__("popad ");
    return;
}

uint32_t g80488f4;

uint32_t g80488f8;

uint32_t fun_8048826() {
    int32_t* v1;
    int32_t* edi2;
    uint32_t eax3;
    uint32_t v4;
    uint32_t edx5;
    signed char* esi6;
    uint32_t ecx7;
    signed char* edi8;
    uint32_t edx9;
    uint32_t ecx10;
    uint32_t* edi11;
    int32_t ecx12;
    uint32_t eax13;
    uint32_t eax14;
    int32_t* edi15;
    int32_t ecx16;
    int32_t* esi17;

    __asm__("pushad ");
    v1 = edi2;
    eax3 = g80488b4;
    v4 = eax3;
    edx5 = eax3;
    esi6 = reinterpret_cast<signed char*>(0x8048f3c + (eax3 & 0x1fc0));
    ecx7 = eax3 & 63;
    edi8 = reinterpret_cast<signed char*>(0x80488bc);
    while (ecx7) {
        --ecx7;
        *edi8 = *esi6;
        ++edi8;
        ++esi6;
    }
    edx9 = edx5 >> 2 & 15;
    ecx10 = (edx5 & 3) * 8 + 7;
    edi11 = reinterpret_cast<uint32_t*>(0x80488bc);
    *reinterpret_cast<uint32_t*>(0x80488bc + edx9 * 4) = *reinterpret_cast<uint32_t*>(0x80488bc + edx9 * 4) ^ 1 << *reinterpret_cast<unsigned char*>(&ecx10);
    if (reinterpret_cast<int32_t>(edx5 & 63) > reinterpret_cast<int32_t>(55)) {
        fun_80486af();
        ecx12 = 16;
        while (ecx12) {
            --ecx12;
            *edi11 = 0;
            ++edi11;
        }
    }
    g80488f4 = v4 << 3;
    eax13 = g80488b8;
    g80488f8 = eax13 >> 29;
    eax14 = fun_80486af();
    edi15 = v1;
    ecx16 = 5;
    esi17 = reinterpret_cast<int32_t*>(0x80488a0);
    while (ecx16) {
        --ecx16;
        *edi15 = *esi17;
        ++edi15;
        ++esi17;
    }
    __asm__("popad ");
    return eax14;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

uint32_t fun_8048460(struct s1* a1, struct s2* a2) {
    struct s2* v3;
    uint32_t edx4;
    uint32_t ecx5;
    uint32_t ebx6;
    uint32_t eax7;
    struct s6* ebp8;
    uint32_t v9;
    uint32_t ecx10;
    uint32_t v11;

    __asm__("pushad ");
    v3 = a2;
    edx4 = a1->fc;
    ecx5 = a1->f8 - g8050fe8;
    ebx6 = a1->f4;
    eax7 = a1->f0 - g8050fe4;
    ebp8 = reinterpret_cast<struct s6*>(0x8050fdc);
    do {
        v9 = edx4;
        edx4 = ecx5;
        ecx10 = ebx6;
        ebx6 = eax7;
        __asm__("rol esi, 0x5");
        __asm__("rol edi, 0x5");
        __asm__("ror eax, cl");
        v11 = ecx10 - ebp8->f4 ^ (edx4 + edx4 + 1) * edx4;
        __asm__("ror eax, cl");
        eax7 = v9 - ebp8->f0 ^ (ebx6 + ebx6 + 1) * ebx6;
        ecx5 = v11;
        --ebp8;
    } while (!reinterpret_cast<int1_t>(ebp8 == 0x8050f3c));
    v3->fc = edx4 - ebp8->f4;
    v3->f8 = ecx5;
    v3->f4 = ebx6 - ebp8->f0;
    v3->f0 = eax7;
    __asm__("popad ");
    return eax7;
}

struct s7 {
    signed char[72] pad72;
    int32_t f48;
};

uint32_t fun_80486af() {
    int32_t v1;
    int32_t ecx2;
    int32_t ecx3;
    struct s7* esi4;
    int32_t* esi5;
    int32_t ecx6;
    int32_t v7;
    int32_t ecx8;
    int32_t v9;
    int32_t eax10;
    int32_t v11;
    int32_t eax12;
    int32_t v13;
    int32_t eax14;
    int32_t v15;
    int32_t eax16;
    int32_t v17;
    int32_t eax18;
    int32_t tmp32_19;
    int32_t tmp32_20;
    int32_t tmp32_21;
    int32_t v22;
    int32_t tmp32_23;
    int32_t v24;
    int32_t tmp32_25;
    int32_t v26;
    int32_t v27;

    v1 = reinterpret_cast<int32_t>(__return_address());
    __asm__("pushad ");
    ecx2 = 5;
    while (ecx2) {
        --ecx2;
    }
    ecx3 = 5;
    esi4 = reinterpret_cast<struct s7*>(0x80488a0);
    while (ecx3) {
        --ecx3;
        esi4 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(esi4) + 4);
    }
    esi5 = &esi4->f48;
    ecx6 = 2;
    do {
        v7 = ecx6;
        ecx8 = 16;
        do {
            eax10 = reinterpret_cast<int32_t>(*esi5(v9));
            __asm__("rol dword [ebp-0x20], 0xa");
            eax12 = reinterpret_cast<int32_t>(*esi5(v11));
            __asm__("rol dword [ebp-0x24], 0xa");
            eax14 = reinterpret_cast<int32_t>(*esi5(eax10 + v13));
            __asm__("rol dword [ebp-0x28], 0xa");
            eax16 = reinterpret_cast<int32_t>(*esi5(eax12 + v15));
            __asm__("rol dword [ebp-0x18], 0xa");
            eax18 = reinterpret_cast<int32_t>(*esi5(eax14 + v17));
            __asm__("rol dword [ebp-0x1c], 0xa");
            --ecx8;
        } while (ecx8);
        ecx6 = v7 - 1;
    } while (ecx6);
    tmp32_19 = eax14 + v17 + 0x8048744 + g80488a4;
    tmp32_20 = eax12 + v15 + 16 + g80488a8;
    g80488a4 = tmp32_20;
    tmp32_21 = eax10 + v13 + v22 + g80488ac;
    g80488a8 = tmp32_21;
    tmp32_23 = eax18 + (eax10 + v13) + v24 + g80488b0;
    g80488ac = tmp32_23;
    tmp32_25 = eax16 + v26 + v27 + g80488a0;
    g80488b0 = tmp32_25;
    g80488a0 = tmp32_19;
    __asm__("popad ");
    goto v1;
}

struct s8 {
    signed char[73] pad73;
    unsigned char f49;
    signed char[27] pad101;
    int32_t f65;
};

void* g61000008;

struct s9 {
    signed char[111] pad111;
    signed char f6f;
};

struct s10 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s11 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s12 {
    signed char[105] pad105;
    int32_t f69;
    signed char[1] pad110;
    unsigned char f6e;
};

struct s13 {
    signed char f0;
    signed char[115] pad116;
    unsigned char f74;
};

struct s14 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s15 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s16 {
    signed char[69] pad69;
    unsigned char f45;
};

struct s17 {
    signed char[69] pad69;
    unsigned char f45;
};

void* g63282074;

unsigned char g636e6520;

unsigned char g63656420;

struct s18 {
    signed char[102] pad102;
    unsigned char f66;
};

void* g8055014;

void* g8055015;

void* g8053014;

struct s0* g8051014;

void fun_8048000(struct s0* ecx) {
    void* esp2;
    uint64_t v3;
    int1_t less_or_equal4;
    struct s8* esi5;
    void* esi6;
    void* eax7;
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
    struct s0* eax26;
    signed char dh27;
    unsigned char* edi28;
    signed char* edi29;
    void* tmp8_30;
    uint1_t cf31;
    unsigned char tmp8_32;
    struct s9* ebx33;
    int1_t cf34;
    struct s10* ebx35;
    struct s11* ebx36;
    struct s12* ebp37;
    unsigned char dh38;
    int32_t ebp39;
    struct s13* ebx40;
    unsigned char dh41;
    uint32_t edi42;
    struct s14* ebx43;
    struct s15* ebx44;
    int1_t cf45;
    int32_t edx46;
    unsigned char dl47;
    int16_t bx48;
    int16_t di49;
    unsigned char tmp8_50;
    uint1_t cf51;
    signed char dh52;
    void* dh53;
    struct s16* ebx54;
    struct s17* ebx55;
    int1_t zf56;
    void* ebx57;
    int1_t sf58;
    int1_t zf59;
    void* eax60;
    uint32_t eax61;
    void* tmp32_62;
    void* eax63;
    struct s0* edi64;
    void* ecx65;
    struct s1* esi66;
    struct s2* edi67;
    int1_t zf68;
    void* tmp32_69;
    void** v70;
    struct s0* v71;

    esp2 = __zero_stack_offset();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v3) + 4) = reinterpret_cast<int32_t>(__return_address());
    if (less_or_equal4) {
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 1);
        esi5 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(esi6) + 1);
        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) + reinterpret_cast<int32_t>(eax7));
        *ebx8 = *ebx9 + eax10;
        *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
        *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
        *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
        *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
        *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *eax25);
        eax26 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<uint32_t>(*eax23));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<uint32_t>(eax26));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        __asm__("sti ");
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(ecx)) + 44);
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax26) + reinterpret_cast<uint32_t>(eax26)) + dh27);
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<uint32_t>(eax26));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) + 0x80000804) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax26) + 0x80000804) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        *reinterpret_cast<void**>(&eax26) = g61000008;
        __asm__("rol byte [eax], 1");
        *edi28 = reinterpret_cast<unsigned char>(*edi29 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
        eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    }
    tmp8_30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    cf31 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_30) < reinterpret_cast<unsigned char>(eax26->f0));
    eax26->f0 = tmp8_30;
    eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax26->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26))) + cf31);
    tmp8_32 = reinterpret_cast<unsigned char>(ebx33->f6f + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
    cf34 = tmp8_32 < ebx35->f6f;
    ebx36->f6f = tmp8_32;
    if (__intrinsic()) {
        addr_80480c9_4:
        ebp37->f6e = reinterpret_cast<unsigned char>(ebp37->f6e & dh38);
        __asm__("insb ");
        ebp39 = ebp37->f69 * 0x20646574;
        __asm__("insb ");
        __asm__("outsb ");
        goto addr_80480db_5;
    } else {
        if (cf34) {
            addr_80480bb_7:
            __asm__("arpl [ecx+0x69], bp");
            ebx40->f74 = reinterpret_cast<unsigned char>(ebx40->f74 & dh41);
            if (0) 
                goto addr_804812e_8;
        } else {
            *reinterpret_cast<struct s0**>(&v3) = reinterpret_cast<struct s0*>(0x63282074);
            eax26->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26->f0) - (reinterpret_cast<int32_t>(esp2) - 4));
            ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) ^ edi42);
            eax26 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax26) - 0x30303032);
            ebx43->f65 = reinterpret_cast<unsigned char>(ebx44->f65 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
            __asm__("arpl [ebx+0x68], sp");
            ebp39 = esi5->f65 * 0x7453206c;
            if (__intrinsic()) {
                addr_80480db_5:
                *reinterpret_cast<unsigned char*>(ebp39 + 0x72) = 0;
                cf45 = 0;
                if (0) 
                    goto addr_8048152_10; else 
                    goto addr_80480e3_11;
            } else {
                __asm__("popad ");
                __asm__("outsb ");
                *reinterpret_cast<unsigned char*>(&edx46) = reinterpret_cast<unsigned char>(dl47 | *reinterpret_cast<unsigned char*>(ebp39 + 0x73));
                __asm__("popad ");
                cf45 = *reinterpret_cast<unsigned char*>(&ecx) < *reinterpret_cast<unsigned char*>(bx48 + di49);
                if (cf45) {
                    goto addr_80480e3_11;
                } else {
                    __asm__("arpl [ss:edx+0x79], si");
                    if (__intrinsic()) {
                        addr_80480f9_15:
                        __asm__("insd ");
                        tmp8_50 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi5) - 0x7d) + *reinterpret_cast<signed char*>(&ebx40));
                        cf51 = reinterpret_cast<uint1_t>(tmp8_50 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi5) - 0x7d));
                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi5) - 0x7d) = tmp8_50;
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx40) + reinterpret_cast<int32_t>(esi5) * 2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx40) + reinterpret_cast<int32_t>(esi5) * 2) + 1);
                        ecx->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx->f0) - reinterpret_cast<unsigned char>(dh52 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx->f0) < reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(dh53) + cf51))));
                        goto addr_8048101_16;
                    } else {
                        *reinterpret_cast<unsigned char*>(ebp39 + 0x7c) = 0;
                        ebx54->f45 = reinterpret_cast<unsigned char>(ebx55->f45 & *reinterpret_cast<unsigned char*>(&ecx));
                        ecx = reinterpret_cast<struct s0*>(0x63282074);
                        esi5->f49 = reinterpret_cast<unsigned char>(esi5->f49 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&eax26)));
                        *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(0x74 | reinterpret_cast<unsigned char>(g63282074));
                        g636e6520 = 0;
                        if (0) 
                            goto addr_8048119_18;
                        if (0) 
                            goto addr_8048116_20;
                        *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | reinterpret_cast<unsigned char>(ecx->f0));
                        g63656420 = 0;
                        zf56 = g63656420 == 0;
                        if (0) 
                            goto addr_8048126_22;
                        if (0) 
                            goto addr_8048123_24;
                        ebx40 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(ebx57) - 1);
                        ebp37 = reinterpret_cast<struct s12*>(ebp39 + 1 + 1);
                        ecx = *reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(&v3) + 3);
                        ecx->f73 = 0;
                        ecx->f6e = 0;
                        ecx->f73 = 0;
                        goto addr_80480bb_7;
                    }
                }
            }
        }
    }
    __asm__("outsb ");
    *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s18**>(&ebx40))->f66) = 0;
    goto addr_80480c9_4;
    addr_80480e3_11:
    if (cf45) 
        goto addr_8048105_27;
    __asm__("outsd ");
    __asm__("arpl [ebx+0x75], sp");
    if (cf45) 
        goto addr_8048150_29;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0xff;
    zf56 = 0;
    sf58 = __intrinsic();
    if (0) 
        goto addr_8048123_24;
    if (0) 
        goto addr_8048157_32;
    __asm__("outsb ");
    __asm__("outsd ");
    goto addr_80480f9_15;
    while (1) {
        addr_80481ff_34:
        zf59 = reinterpret_cast<int1_t>(g8055014 == 0x65);
        if (zf59) {
            eax60 = reinterpret_cast<void*>(eax61 & 15);
            if (eax60) {
                tmp32_62 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(g8055015) + reinterpret_cast<uint32_t>(eax60));
                g8055015 = tmp32_62;
                __asm__("int 0x80");
                __asm__("int 0x80");
                __asm__("int 0x80");
                __asm__("int 0x80");
                fun_80483de(reinterpret_cast<uint32_t>(eax60) + 0x8051014, 0x8051014, 0x8053014);
                __asm__("int 0x80");
            }
            eax63 = g8055015;
            g8053014 = eax63;
            edx46 = 4;
            ecx = reinterpret_cast<struct s0*>(0x8053014);
            __asm__("int 0x80");
        } else {
            edi64 = g8051014;
            ecx = edi64;
            __asm__("int 0x80");
        }
        __asm__("int 0x80");
        while (1) {
            if (!0) {
                ecx = reinterpret_cast<struct s0*>(2);
                addr_8048150_29:
                eax26 = reinterpret_cast<struct s0*>(5);
                __asm__("int 0x80");
                addr_8048152_10:
                sf58 = reinterpret_cast<int32_t>(eax26) < reinterpret_cast<int32_t>(0);
                addr_8048157_32:
                if (sf58) 
                    continue;
                g8055015 = reinterpret_cast<void*>(0);
                while (edx46 = 0, *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx46) + 1) = 32, eax61 = 3, 1) {
                    if (!0) {
                        __asm__("pushad ");
                        ecx65 = reinterpret_cast<void*>(0);
                        if (!1) {
                            esi66 = reinterpret_cast<struct s1*>(0x8051014);
                            edi67 = reinterpret_cast<struct s2*>(0x8053014);
                            do {
                                zf68 = reinterpret_cast<int1_t>(g8055014 == 100);
                                if (zf68) {
                                    fun_8048460(esi66, edi67);
                                } else {
                                    fun_80483de(ecx65, esi66, edi67);
                                }
                                ++esi66;
                                ++edi67;
                                ecx65 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx65) - 1);
                            } while (ecx65);
                            tmp32_69 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(g8055015)));
                            g8055015 = tmp32_69;
                            __asm__("pushad ");
                            __asm__("int 0x80");
                            edx46 = 0;
                            eax61 = 4;
                            __asm__("int 0x80");
                            __asm__("popad ");
                        }
                        __asm__("popad ");
                    }
                    if (!0) 
                        goto addr_80481ff_34;
                }
                edx46 = 19;
                ecx = reinterpret_cast<struct s0*>("An error occured..\n/dev/random");
                __asm__("int 0x80");
            }
            while (1) {
                addr_8048116_20:
                __asm__("int 0x80");
                addr_8048119_18:
                *reinterpret_cast<void**>(&eax26) = *v70;
                g8055014 = *reinterpret_cast<void**>(&eax26);
                zf56 = reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax26) == 100);
                addr_8048123_24:
                if (zf56) 
                    break;
                addr_8048126_22:
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(&eax26) == 0x65)) 
                    break;
                addr_8048101_16:
                *reinterpret_cast<signed char*>(edx46 - 0x7fb34670) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx46 - 0x7fb34670) << *reinterpret_cast<unsigned char*>(&ecx));
                addr_8048105_27:
                __asm__("int 0x80");
            }
            fun_80482b7(v71);
            addr_804812e_8:
            fun_8048329(0x8055041, 0x100);
        }
    }
}

struct s19 {
    signed char f0;
    signed char[117835780] pad117835781;
    uint32_t f7060805;
};

uint32_t g86940c08;

uint32_t g36ed9eb;

unsigned char ge020f01;

signed char g50e0c0a;

signed char ge080550;

struct s20 {
    uint32_t f0;
    signed char[168363268] pad168363272;
    unsigned char fa090508;
};

struct s21 {
    void* f0;
    void* f2;
};

struct s22 {
    signed char[34147334] pad34147334;
    unsigned char f2090c06;
};

struct s23 {
    void* f0;
    void* f2;
};

uint32_t g86940b02;

void fun_80484e2(void* ecx) {
    uint48_t v2;
    int1_t cf3;
    struct s19* eax4;
    signed char al5;
    signed char* ebx6;
    signed char* ebx7;
    int32_t* esi8;
    int32_t* esi9;
    signed char* edi10;
    uint32_t* ecx11;
    uint32_t* eax12;
    void* ecx13;
    uint32_t eax14;
    uint32_t eax15;
    unsigned char bh16;
    signed char al17;
    unsigned char* edx18;
    uint32_t eax19;
    uint32_t* esi20;
    uint32_t* edi21;
    uint32_t* edi22;
    void* ecx23;
    void** edi24;
    uint32_t ecx25;
    uint32_t* esi26;
    uint32_t eax27;
    uint32_t ecx28;
    unsigned char* eax29;
    uint32_t* esi30;
    uint32_t* esi31;
    void* es32;
    void* v33;
    void* eax34;
    uint32_t* ecx35;
    unsigned char tmp8_36;
    unsigned char* edi37;
    unsigned char* esi38;
    signed char* esi39;
    unsigned char* edi40;
    unsigned char* edi41;
    void* eax42;
    unsigned char tmp8_43;
    unsigned char* esi44;
    void* esi45;
    void* eax46;
    unsigned char tmp8_47;
    void* ebx48;
    void* ebx49;
    unsigned char* edi50;
    unsigned char* edi51;
    uint32_t* eax52;
    uint32_t* edi53;
    uint32_t* edi54;
    uint32_t* ecx55;
    uint32_t eax56;
    unsigned char* eax57;
    unsigned char* eax58;
    void* v59;
    int16_t cs60;
    struct s20* ecx61;
    struct s21* esp62;
    uint32_t* ebx63;
    uint32_t* ebx64;
    struct s22* eax65;
    void* ecx66;
    struct s23* esp67;
    void** esp68;
    uint32_t* edi69;
    uint32_t* edi70;
    uint32_t tmp32_71;
    void* eax72;
    uint32_t* edi73;
    void** esp74;
    void** esp75;
    uint32_t ecx76;
    unsigned char* eax77;
    unsigned char* tmp32_78;
    uint32_t eax79;
    unsigned char* edi80;
    signed char* edi81;

    *reinterpret_cast<int32_t*>(&v2) = reinterpret_cast<int32_t>(__return_address());
    if (cf3) 
        goto 0x804846a;
    *reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(al5 + 8);
    eax4->f0 = reinterpret_cast<signed char>(eax4->f0 + *reinterpret_cast<signed char*>(&eax4));
    eax4->f0 = reinterpret_cast<signed char>(eax4->f0 + *reinterpret_cast<signed char*>(&eax4));
    *ebx6 = reinterpret_cast<signed char>(*ebx7 + *reinterpret_cast<signed char*>(&ecx));
    *esi8 = *esi9 + reinterpret_cast<int32_t>(ecx);
    *reinterpret_cast<signed char*>(&ecx) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx) + *edi10);
    ecx11 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + reinterpret_cast<int32_t>(eax4))));
    eax12 = &eax4->f7060805;
    *eax12 = *eax12 | reinterpret_cast<uint32_t>(ecx11);
    ecx13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx11) | *ecx11);
    eax14 = reinterpret_cast<uint32_t>(eax12) | 0xf0b0e0a;
    *reinterpret_cast<unsigned char*>(&eax14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax14) | 6);
    eax15 = eax14 | 0xf090e07;
    *reinterpret_cast<unsigned char*>(eax15 - 0x7a) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax15 - 0x7a) | bh16);
    al17 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax15) + 8);
    __asm__("cdq ");
    if (al17 >= 0) 
        goto 0x8048493;
    edx18 = *reinterpret_cast<unsigned char**>(reinterpret_cast<int32_t>(&v2) + 2);
    *reinterpret_cast<signed char*>(&eax15) = reinterpret_cast<signed char>(al17 + 6);
    eax19 = eax15 | 0xa0d0108 | *esi20;
    *edi21 = *edi22 | reinterpret_cast<uint32_t>(ecx13);
    ecx23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx13) + reinterpret_cast<int32_t>(*edi24));
    *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax19) | 7);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx23) + reinterpret_cast<uint32_t>(ecx23)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx23) + reinterpret_cast<uint32_t>(ecx23)) + *reinterpret_cast<signed char*>(&ecx23));
    __asm__("syscall ");
    *edx18 = reinterpret_cast<unsigned char>(*edx18 | eax19);
    ecx25 = reinterpret_cast<uint32_t>(ecx23) | *esi26 | g86940c08;
    eax27 = g36ed9eb;
    ecx28 = ecx25 | *edx18;
    eax29 = reinterpret_cast<unsigned char*>(eax27 | 0x704060e);
    *esi30 = *esi31 | ecx28;
    __asm__("wbinvd ");
    ge020f01 = reinterpret_cast<unsigned char>(ge020f01 | *reinterpret_cast<unsigned char*>(&ecx28));
    es32 = v33;
    *eax29 = reinterpret_cast<unsigned char>(*eax29 | *reinterpret_cast<unsigned char*>(&eax29));
    eax34 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax29) | 0x50d0606);
    ecx35 = reinterpret_cast<uint32_t*>(ecx28 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax34) - 0x7dfaf3f9));
    tmp8_36 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax34) + reinterpret_cast<uint32_t>(ecx35));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax34) + reinterpret_cast<uint32_t>(ecx35)) = *reinterpret_cast<unsigned char*>(&eax34);
    __asm__("fdivr qword [ebx+ebx+0x90b018f]");
    *reinterpret_cast<unsigned char*>(&ecx35) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx35) | *edi37);
    *esi38 = reinterpret_cast<unsigned char>(*esi39 + *reinterpret_cast<unsigned char*>(&ecx35));
    *edi40 = reinterpret_cast<unsigned char>(*edi41 | *reinterpret_cast<unsigned char*>(&ecx35));
    *reinterpret_cast<unsigned char*>(&eax34) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp8_36 | 11) | 9) + 8);
    eax42 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(eax34) | 0x70e0309) + 0x80e060f + 0x2050606);
    *reinterpret_cast<unsigned char*>(&eax42) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax42) | 0x8c);
    tmp8_43 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax42) + reinterpret_cast<uint32_t>(ecx35));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax42) + reinterpret_cast<uint32_t>(ecx35)) = *reinterpret_cast<unsigned char*>(&eax42);
    *reinterpret_cast<unsigned char*>(&eax42) = tmp8_43;
    esi44 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi45) - 1);
    eax46 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax42) + 0x70b0905);
    *reinterpret_cast<unsigned char*>(&eax46) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax46) | 8);
    tmp8_47 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx35) + g50e0c0a);
    *reinterpret_cast<unsigned char*>(&ecx35) = tmp8_47;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebx48) + reinterpret_cast<uint32_t>(eax46)) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx49) + reinterpret_cast<uint32_t>(eax46)) + reinterpret_cast<uint32_t>(ecx35);
    *edi50 = reinterpret_cast<unsigned char>(*edi51 | *reinterpret_cast<unsigned char*>(&ecx35));
    eax52 = reinterpret_cast<uint32_t*>((reinterpret_cast<uint32_t>(eax46) | 0xb0b0e08) - 0x7973f9f3);
    *reinterpret_cast<signed char*>(&eax52) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax52) + 8);
    __asm__("out 0x8b, al");
    ge080550 = *reinterpret_cast<signed char*>(&eax52);
    *edi53 = *edi54 | reinterpret_cast<uint32_t>(eax52);
    *eax52 = *eax52 | reinterpret_cast<uint32_t>(eax52);
    ecx55 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx35) | *ecx35);
    eax56 = reinterpret_cast<uint32_t>(eax52) | 0xf0b0f02;
    *reinterpret_cast<signed char*>(&eax56) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax56) + 5);
    eax57 = reinterpret_cast<unsigned char*>(eax56 | 0xf070607);
    *eax57 = reinterpret_cast<unsigned char>(*eax57 | *reinterpret_cast<unsigned char*>(&ecx55));
    eax58 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax57) | *ecx55);
    *reinterpret_cast<int16_t*>(&v59 + 1) = cs60;
    *reinterpret_cast<unsigned char*>(&ecx55) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx55) | *esi44);
    ecx61 = reinterpret_cast<struct s20*>(reinterpret_cast<uint32_t>(ecx55) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 2 + 4 + 2 + 2 + 2 + 2 + 2 - 2 - 4 - 2 - 2 - 2 + reinterpret_cast<uint32_t>(ecx55))));
    v59 = es32;
    do {
        *reinterpret_cast<signed char*>(esi44 - 0x2edbf7fc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi44 - 0x2edbf7fc) + 77);
        esp62 = reinterpret_cast<struct s21*>(reinterpret_cast<int16_t>(v59) + 4 - 2);
        esp62->f0 = es32;
        *ebx63 = *ebx64 | reinterpret_cast<uint32_t>(ecx61);
        eax65 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(eax58) | 0x7070f03);
        ecx61->fa090508 = reinterpret_cast<unsigned char>(ecx61->fa090508 + *reinterpret_cast<unsigned char*>(&ecx61));
        ecx66 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx61) | *esi44);
        esp67 = reinterpret_cast<struct s23*>(&esp62->f2);
        __asm__("sysret ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp67) + reinterpret_cast<uint32_t>(ecx66)) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp67) + reinterpret_cast<uint32_t>(ecx66)) | *reinterpret_cast<unsigned char*>(&ecx66));
        es32 = esp67->f0;
        esp68 = &esp67->f2;
        *edi69 = *edi70 | reinterpret_cast<uint32_t>(ecx66);
        tmp32_71 = g86940b02 + reinterpret_cast<uint32_t>(ecx66);
        g86940b02 = tmp32_71;
        *reinterpret_cast<signed char*>(&eax65) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax65) + 6) + 8);
        if (__intrinsic()) 
            break;
        __asm__("wbinvd ");
        eax72 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax65) + 0x30f0107 | *edi73);
        *esi44 = reinterpret_cast<unsigned char>(*esi44 | *reinterpret_cast<unsigned char*>(&ecx66));
        esp74 = esp68 - 1;
        *esp74 = es32;
        esp75 = esp74 - 1;
        *esp75 = es32;
        esp68 = esp75 - 1;
        *esp68 = es32;
        *esi44 = reinterpret_cast<unsigned char>(*esi44 | reinterpret_cast<uint32_t>(ecx66));
        ecx76 = reinterpret_cast<uint32_t>(ecx66) | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax72) + reinterpret_cast<uint32_t>(ecx66));
        eax65 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(eax72) | 0xe02050c | 0x4867805);
        *reinterpret_cast<unsigned char*>(&ecx76) = 0xff;
        if (0) 
            goto addr_8048696_6;
        if (!__intrinsic()) {
            __asm__("clts ");
            eax65 = reinterpret_cast<struct s22*>(reinterpret_cast<uint32_t>(eax65) + 0xb010804);
            ecx76 = ecx76 + *esi44;
        }
        ecx61 = reinterpret_cast<struct s20*>(ecx76 | *esi44);
        __asm__("clts ");
        *esi44 = reinterpret_cast<unsigned char>(*esi44 + *reinterpret_cast<unsigned char*>(&ecx61));
        eax77 = &eax65->f2090c06;
        ecx61->f0 = ecx61->f0 | reinterpret_cast<uint32_t>(ecx61);
        *reinterpret_cast<unsigned char*>(&eax77) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax77) | 13) | 7);
        tmp32_78 = eax77 + 0x80e0f0a;
        eax58 = tmp32_78;
    } while (reinterpret_cast<uint32_t>(tmp32_78) < reinterpret_cast<uint32_t>(eax77));
    goto addr_804864c_10;
    addr_804866f_11:
    addr_804869d_12:
    __asm__("rol eax, cl");
    goto *esp68;
    addr_8048696_6:
    goto addr_804869d_12;
    addr_804864c_10:
    *reinterpret_cast<unsigned char*>(&eax58) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax58) + 8);
    *eax58 = reinterpret_cast<unsigned char>(*eax58 + *reinterpret_cast<unsigned char*>(&eax58));
    *eax58 = reinterpret_cast<unsigned char>(*eax58 + *reinterpret_cast<unsigned char*>(&eax58));
    *reinterpret_cast<unsigned char*>(&eax58) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax58) | 8);
    __asm__("syscall ");
    *reinterpret_cast<unsigned char*>(&ecx61) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx61) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp68) + reinterpret_cast<uint32_t>(eax58)));
    ecx61->f0 = ecx61->f0 | reinterpret_cast<uint32_t>(eax58);
    *reinterpret_cast<unsigned char*>(&eax58) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax58) | 5);
    eax79 = reinterpret_cast<uint32_t>(eax58 + 0x6070e08);
    --esp68;
    *esp68 = es32;
    *edx18 = reinterpret_cast<unsigned char>(*edx18 | *reinterpret_cast<unsigned char*>(&eax79));
    *edi80 = reinterpret_cast<unsigned char>(*edi81 + *reinterpret_cast<unsigned char*>(&ecx61));
    goto addr_804866f_11;
}

void fun_8048678(int32_t ecx) {
    goto 0x804869a;
}

void fun_8048682(int32_t ecx) {
    goto 0x804869a;
}

void fun_804868c(int32_t ecx) {
    goto 0x804869a;
}

void fun_8048694(int32_t ecx) {
}
