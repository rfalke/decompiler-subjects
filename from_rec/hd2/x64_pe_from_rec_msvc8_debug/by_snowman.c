
struct s1 {
    signed char[8] pad8;
    int32_t f8;
};

struct s2 {
    uint32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s0 {
    signed char f0;
    signed char[3] pad4;
    struct s0* f4;
    int64_t f8;
    struct s0* f12;
    struct s1* f16;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    signed char[8] pad56;
    struct s2* f56;
};

uint64_t g140009000 = 0x2b992ddfa232;

int64_t sprintf = 0xb678;

void fun_140001776(void* rcx, int64_t rdx, int64_t r8);

int32_t fun_140001770(void* rcx, int64_t rdx, int64_t r8);

void fun_14000176a(uint64_t rcx, int64_t rdx, int64_t r8);

int64_t printf = 0xb650;

struct s0* fun_1400017c0(void* rcx, struct s0* rdx, int64_t r8, int64_t r9);

struct s0* fun_1400017a0(uint64_t rcx, struct s0* rdx, ...);

struct s0* fun_14000100a(void* rcx, uint32_t edx, uint32_t r8d, int64_t r9) {
    uint32_t v5;
    uint32_t v6;
    void* v7;
    void* rsp8;
    int64_t rcx9;
    uint64_t rax10;
    uint64_t v11;
    int64_t r8_12;
    int64_t rdx13;
    void* rsp14;
    uint32_t v15;
    uint32_t ecx16;
    int32_t v17;
    int32_t eax18;
    void* rsp19;
    void* rsp20;
    int32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t eax24;
    void* rsp25;
    void* rsp26;
    uint64_t rcx27;
    struct s0* rax28;

    v5 = r8d;
    v6 = edx;
    v7 = rcx;
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0xb0);
    rcx9 = 44;
    while (*reinterpret_cast<int32_t*>(&rcx9)) {
        *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
    }
    rax10 = g140009000;
    v11 = rax10 ^ reinterpret_cast<uint64_t>(rsp8);
    *reinterpret_cast<uint32_t*>(&r8_12) = v6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = 0;
    rdx13 = reinterpret_cast<int64_t>("%08lX:");
    sprintf(reinterpret_cast<uint64_t>(rsp8) + 48, "%08lX:", r8_12);
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8);
    if (reinterpret_cast<int32_t>(v5) > reinterpret_cast<int32_t>(16)) {
        v5 = 16;
    }
    v15 = 0;
    while (reinterpret_cast<int32_t>(v15) < reinterpret_cast<int32_t>(v5)) {
        *reinterpret_cast<uint32_t*>(&r8_12) = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(v7) + v15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = 0;
        rdx13 = reinterpret_cast<int64_t>(" %02lX");
        sprintf(reinterpret_cast<uint64_t>(rsp14) + static_cast<int64_t>(reinterpret_cast<int32_t>(v15 * 3)) + 57, " %02lX", r8_12);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) - 8 + 8);
        ++v15;
    }
    while (1) {
        ecx16 = v15;
        ++v15;
        if (reinterpret_cast<int32_t>(ecx16) >= reinterpret_cast<int32_t>(16)) {
            v17 = 0;
        } else {
            v17 = 1;
        }
        if (!v17) 
            break;
        rdx13 = reinterpret_cast<int64_t>("   ");
        fun_140001776(reinterpret_cast<uint64_t>(rsp14) + 48, "   ", r8_12);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) - 8 + 8);
    }
    eax18 = fun_140001770(reinterpret_cast<uint64_t>(rsp14) + 48, rdx13, r8_12);
    rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp14) - 8 + 8);
    fun_14000176a(reinterpret_cast<uint64_t>(rsp19) + static_cast<int64_t>(eax18) + 48, "  |", r8_12);
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp19) - 8 + 8);
    v21 = eax18 + 3;
    v22 = 0;
    while (reinterpret_cast<int32_t>(v22) < reinterpret_cast<int32_t>(v5)) {
        if (reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(v7) + reinterpret_cast<int32_t>(v22)))) < reinterpret_cast<int32_t>(32) || reinterpret_cast<int32_t>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(v7) + reinterpret_cast<int32_t>(v22)))) > reinterpret_cast<int32_t>(0x7e)) {
            v23 = 46;
        } else {
            v23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(v7) + v22);
        }
        eax24 = *reinterpret_cast<unsigned char*>(&v23);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp20) + static_cast<int64_t>(reinterpret_cast<int32_t>(v21 + v22)) + 48) = *reinterpret_cast<signed char*>(&eax24);
        ++v22;
    }
    while (reinterpret_cast<int32_t>(v22) < reinterpret_cast<int32_t>(16)) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp20) + static_cast<int64_t>(reinterpret_cast<int32_t>(v21 + v22)) + 48) = 32;
        ++v22;
    }
    fun_14000176a(reinterpret_cast<uint64_t>(rsp20) + static_cast<int64_t>(v21) + 48 + static_cast<int64_t>(reinterpret_cast<int32_t>(v22)), "|", r8_12);
    rsp25 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp20) - 8 + 8);
    printf("%s\n", reinterpret_cast<uint64_t>(rsp25) + 48, r8_12);
    rsp26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp25) - 8 + 8);
    fun_1400017c0(rsp26, 0x140006800, r8_12, r9);
    rcx27 = v11 ^ reinterpret_cast<uint64_t>(rsp26) - 8 + 8;
    rax28 = fun_1400017a0(rcx27, 0x140006800, rcx27, 0x140006800);
    return rax28;
}

int64_t strcat = 0xb66e;

void fun_140001776(void* rcx, int64_t rdx, int64_t r8) {
    goto strcat;
}

int64_t _stat64i32 = 0xb6a6;

int32_t fun_140001430(int64_t rcx, void* rdx) {
    void* v3;
    int64_t v4;
    int64_t rcx5;
    int32_t eax6;

    v3 = rdx;
    v4 = rcx;
    rcx5 = 8;
    while (*reinterpret_cast<int32_t*>(&rcx5)) {
        *reinterpret_cast<int32_t*>(&rcx5) = *reinterpret_cast<int32_t*>(&rcx5) - 1;
    }
    eax6 = reinterpret_cast<int32_t>(_stat64i32(v4, v3));
    return eax6;
}

int64_t fopen = 0xb694;

int64_t fread = 0xb68c;

int64_t perror = 0xb69c;

int64_t fclose = 0xb682;

int32_t fun_14000100f(int64_t rcx) {
    int64_t v2;
    void* rsp3;
    int64_t rcx4;
    uint64_t rax5;
    uint64_t v6;
    void* rdx7;
    int32_t eax8;
    void* rsp9;
    int64_t rdx10;
    int64_t rax11;
    void* rsp12;
    int64_t v13;
    uint32_t v14;
    uint32_t v15;
    int64_t r9_16;
    int64_t r8_17;
    uint32_t eax18;
    void* rsp19;
    uint64_t rcx20;
    struct s0* rax21;

    v2 = rcx;
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0xb0);
    rcx4 = 44;
    while (*reinterpret_cast<int32_t*>(&rcx4)) {
        *reinterpret_cast<int32_t*>(&rcx4) = *reinterpret_cast<int32_t*>(&rcx4) - 1;
    }
    rax5 = g140009000;
    v6 = rax5 ^ reinterpret_cast<uint64_t>(rsp3);
    rdx7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) + 88);
    eax8 = fun_140001430(v2, rdx7);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) - 8 + 8);
    if (!eax8) {
        rdx10 = reinterpret_cast<int64_t>("rb");
        rax11 = reinterpret_cast<int64_t>(fopen(v2, "rb"));
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
        v13 = rax11;
        if (v13) {
            v14 = 0;
            while (v14 < v15) {
                r9_16 = v13;
                *reinterpret_cast<uint32_t*>(&r8_17) = 16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx10) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
                eax18 = reinterpret_cast<uint32_t>(fread(reinterpret_cast<uint64_t>(rsp12) + 40, 1, 16, r9_16));
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8);
                if (!eax18) 
                    goto addr_1400013be_10;
                *reinterpret_cast<uint32_t*>(&r8_17) = eax18;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx10) = v14;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
                fun_14000100a(reinterpret_cast<uint64_t>(rsp12) + 40, *reinterpret_cast<uint32_t*>(&rdx10), *reinterpret_cast<uint32_t*>(&r8_17), r9_16);
                rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8);
                v14 = v14 + eax18;
            }
        } else {
            perror(v2, "rb");
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8);
            goto addr_1400013f8_13;
        }
    } else {
        perror(v2, rdx7);
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
        goto addr_1400013f8_13;
    }
    addr_1400013eb_15:
    fclose(v13, rdx10, r8_17, r9_16);
    rsp19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8);
    addr_1400013f8_13:
    fun_1400017c0(rsp19, 0x1400068a0, r8_17, r9_16);
    rcx20 = v6 ^ reinterpret_cast<uint64_t>(rsp19) - 8 + 8;
    rax21 = fun_1400017a0(rcx20, 0x1400068a0, rcx20, 0x1400068a0);
    return *reinterpret_cast<int32_t*>(&rax21);
    addr_1400013be_10:
    goto addr_1400013eb_15;
}

int32_t g140009018 = 1;

struct s0* fun_1400020b0(void* rcx, int32_t edx, int32_t r8d, void* r9);

struct s3 {
    signed char[5368736952] pad5368736952;
    unsigned char f5368736952;
};

struct s4 {
    signed char[5368736984] pad5368736984;
    unsigned char f5368736984;
};

struct s0* fun_140002360(void* rcx, struct s0* rdx) {
    void* rsp3;
    uint64_t rax4;
    uint64_t v5;
    int32_t r10d6;
    void* r11_7;
    uint64_t rcx8;
    struct s0* rax9;
    int1_t zf10;
    void* r9_11;
    uint64_t rcx12;
    struct s0* rdi13;
    struct s3* rcx14;
    uint32_t eax15;
    uint64_t rcx16;
    signed char* rdi17;
    signed char v18;
    void* rcx19;
    uint32_t eax20;
    uint64_t rcx21;
    signed char* rdi22;
    signed char v23;
    struct s4* rcx24;
    uint32_t eax25;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x438);
    rax4 = g140009000;
    v5 = rax4 ^ reinterpret_cast<uint64_t>(rsp3);
    r10d6 = g140009018;
    r11_7 = rcx;
    if (r10d6 == -1) {
        addr_140002451_2:
        rcx8 = v5 ^ reinterpret_cast<uint64_t>(rsp3);
        rax9 = fun_1400017a0(rcx8, rdx, rcx8, rdx);
        return rax9;
    } else {
        zf10 = rdx->f0 == 0;
        if (zf10) {
            addr_140002431_4:
            r9_11 = reinterpret_cast<void*>("Stack corrupted near unknown variable");
        } else {
            rcx12 = 0xffffffffffffffff;
            rdi13 = rdx;
            do {
                if (!*reinterpret_cast<int32_t*>(&rcx12)) 
                    break;
                *reinterpret_cast<int32_t*>(&rcx12) = *reinterpret_cast<int32_t*>(&rcx12) - 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
                rdi13 = reinterpret_cast<struct s0*>(&rdi13->pad4);
            } while (rdi13->f0);
            if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(~rcx12) + 44) > 0x400) 
                goto addr_140002431_4; else 
                goto addr_1400023b9_9;
        }
    }
    addr_140002438_10:
    *reinterpret_cast<int32_t*>(&rdx) = r10d6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
    fun_1400020b0(r11_7, *reinterpret_cast<int32_t*>(&rdx), 2, r9_11);
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) - 8 + 8);
    goto addr_140002451_2;
    addr_1400023b9_9:
    r9_11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) + 32);
    *reinterpret_cast<int32_t*>(&rcx14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = 0;
    do {
        eax15 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx14) + reinterpret_cast<int64_t>("Stack around the variable '"));
        rcx14 = reinterpret_cast<struct s3*>(reinterpret_cast<uint64_t>(rcx14) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp3) + reinterpret_cast<uint64_t>(rcx14) + 31) = *reinterpret_cast<signed char*>(&eax15);
    } while (*reinterpret_cast<signed char*>(&eax15));
    rcx16 = 0xffffffffffffffff;
    rdi17 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp3) + 32);
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx16)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx16) = *reinterpret_cast<int32_t*>(&rcx16) - 1;
        ++rdi17;
    } while (v18);
    *reinterpret_cast<int32_t*>(&rcx19) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
    do {
        eax20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rdx) + reinterpret_cast<uint64_t>(rcx19));
        rcx19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx19) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi17) + reinterpret_cast<uint64_t>(rcx19) - 2) = *reinterpret_cast<signed char*>(&eax20);
    } while (*reinterpret_cast<signed char*>(&eax20));
    rcx21 = 0xffffffffffffffff;
    rdi22 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp3) + 32);
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx21)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(&rcx21) - 1;
        ++rdi22;
    } while (v23);
    *reinterpret_cast<int32_t*>(&rcx24) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    do {
        eax25 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>("' was corrupted.") + reinterpret_cast<int64_t>(rcx24));
        rcx24 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rcx24) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi22) + reinterpret_cast<int64_t>(rcx24) - 2) = *reinterpret_cast<signed char*>(&eax25);
    } while (*reinterpret_cast<signed char*>(&eax25));
    goto addr_140002438_10;
}

int32_t g140009020 = 1;

int64_t LoadLibraryA = 0xb972;

int64_t GetProcAddress = 0xb960;

int64_t g1400096f0;

void fun_140002610(signed char* rcx, void* rdx, void* r8, void* r9);

int64_t lstrlenA = 0xb954;

struct s0* fun_140002470(void* rcx, struct s0* rdx, int32_t r8d) {
    void* rsp4;
    uint64_t rax5;
    uint64_t v6;
    int32_t edi7;
    int64_t rax8;
    void* rsp9;
    int64_t rax10;
    void* rsp11;
    void* rdx12;
    void* r8_13;
    void* r9_14;
    void* rsp15;
    int32_t eax16;
    void* rsp17;
    void* rsp18;
    uint64_t rcx19;
    struct s0* rax20;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 0x1c8);
    rax5 = g140009000;
    v6 = rax5 ^ reinterpret_cast<uint64_t>(rsp4);
    edi7 = g140009020;
    if (edi7 != -1) {
        rax8 = reinterpret_cast<int64_t>(LoadLibraryA("user32.dll"));
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8);
        if (!rax8 || ((rax10 = reinterpret_cast<int64_t>(GetProcAddress(rax8, "wsprintfA")), rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8), g1400096f0 = rax10, rdx == 0) || !rax10)) {
            *reinterpret_cast<int32_t*>(&rdx) = edi7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
            fun_1400020b0(rcx, *reinterpret_cast<int32_t*>(&rdx), 4, "Stack area around _alloca memory reserved by this function is corrupted\n");
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
        } else {
            rax10(reinterpret_cast<uint64_t>(rsp9) + 0xa0, "%s%s%p%s%I64d%s%d%s", "Stack area around _alloca memory reserved by this function is corrupted", "\nAddress: 0x");
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
            rdx12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) + 0x68);
            r8_13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx) + 32);
            r9_14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(*reinterpret_cast<struct s0**>(&rdx->f8)) - 36);
            fun_140002610(reinterpret_cast<uint64_t>(rsp11) + 80, rdx12, r8_13, r9_14);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8);
            eax16 = reinterpret_cast<int32_t>(lstrlenA(reinterpret_cast<uint64_t>(rsp15) + 0xa0, rdx12, r8_13));
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp15) - 8 + 8);
            g1400096f0(reinterpret_cast<uint64_t>(rsp17) + static_cast<int64_t>(eax16) + 0xa0, "%s%s%s%s", reinterpret_cast<uint64_t>(rsp17) + 80, "> ");
            rsp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp17) - 8 + 8);
            *reinterpret_cast<int32_t*>(&rdx) = edi7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
            fun_1400020b0(rcx, *reinterpret_cast<int32_t*>(&rdx), 4, reinterpret_cast<uint64_t>(rsp18) + 0xa0);
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp18) - 8 + 8);
        }
    }
    rcx19 = v6 ^ reinterpret_cast<uint64_t>(rsp4);
    rax20 = fun_1400017a0(rcx19, rdx, rcx19, rdx);
    return rax20;
}

int64_t _CRT_RTC_INITW = 0xb6c2;

int64_t fun_140002878() {
    goto _CRT_RTC_INITW;
}

int64_t g140009700;

int64_t g1400096f8;

int64_t fun_140002840(int64_t rcx) {
    int64_t rax2;

    rax2 = g140009700;
    g1400096f8 = 0;
    g140009700 = rcx;
    return rax2;
}

int64_t _amsg_exit = 0xb738;

void fun_140002ad0(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    goto _amsg_exit;
}

int64_t _initterm_e = 0xb7d4;

int32_t fun_140002dd8(int64_t rcx, int64_t rdx) {
    goto _initterm_e;
}

int64_t _initterm = 0xb7c8;

void fun_140002dd2(int64_t rcx, int64_t rdx) {
    goto _initterm;
}

struct s5 {
    uint16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

int32_t fun_140002c10(struct s5* rcx);

struct s6 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    signed char[20] pad36;
    uint32_t f36;
};

struct s7 {
    signed char[60] pad60;
    int32_t f60;
};

struct s6* fun_140002c90(struct s7* rcx, uint64_t rdx);

int32_t fun_140002d40(int64_t rcx, int64_t rdx, int64_t r8) {
    int32_t eax4;
    struct s6* rax5;
    int32_t v6;
    int32_t eax7;

    eax4 = fun_140002c10(0x140000000);
    if (eax4) {
        rax5 = fun_140002c90(0x140000000, rcx - 0x140000000);
        if (rax5) {
            if (rax5->f36 & 0x80000000) {
                v6 = 0;
            } else {
                v6 = 1;
            }
            eax7 = v6;
        } else {
            eax7 = 0;
        }
    } else {
        eax7 = 0;
    }
    return eax7;
}

int64_t RtlVirtualUnwind = 0xb8c6;

void fun_140003460() {
    goto RtlVirtualUnwind;
}

int64_t __crt_debugger_hook = 0xb7e2;

void fun_140002dde(int64_t rcx, void* rdx, int64_t r8, int64_t r9) {
    goto __crt_debugger_hook;
}

int64_t RaiseException = 0xb908;

int32_t fun_140002000(int32_t ecx) {
    RaiseException(0x406d1388);
    return 0;
}

int64_t fun_140002870();

int64_t fun_140002860(void* rcx);

int64_t MultiByteToWideChar = 0xb93e;

int32_t fun_140002310(int32_t ecx, int32_t edx, void* r8, void* r9);

int64_t IsDebuggerPresent = 0xb8b2;

int64_t DebugBreak = 0xb91a;

int64_t fun_140002df0(uint64_t rcx, int16_t* rdx, int32_t r8d, uint32_t* r9, uint16_t a5, uint32_t a6);

int64_t WideCharToMultiByte = 0xb928;

struct s0* fun_1400020b0(void* rcx, int32_t edx, int32_t r8d, void* r9) {
    void* rsp5;
    uint64_t rax6;
    int64_t rbp7;
    int64_t r12_8;
    int64_t rax9;
    void* rsp10;
    int64_t rax11;
    void* r9_12;
    void* r8_13;
    struct s0* rdx14;
    uint32_t eax15;
    void* rsp16;
    int32_t eax17;
    void* rsi18;
    int64_t rcx19;
    int32_t eax20;
    void* rsp21;
    int32_t eax22;
    uint64_t rcx23;
    struct s0* rax24;
    int32_t eax25;
    uint16_t v26;
    uint32_t v27;
    void* rsp28;
    int32_t eax29;
    void* rsp30;
    struct s0* rbx31;
    int32_t eax32;
    void* rsp33;
    int32_t v34;
    int32_t eax35;
    int1_t zf36;
    int32_t v37;
    int32_t eax38;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xeb0);
    rax6 = g140009000;
    rbp7 = r8d;
    r12_8 = 0;
    rax9 = fun_140002870();
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    if (!rax9) {
        rax11 = fun_140002860(rcx);
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
        r12_8 = rax11;
    }
    *reinterpret_cast<uint32_t*>(&r9_12) = 0xffffffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_12) + 4) = 0;
    r8_13 = r9;
    *reinterpret_cast<int32_t*>(&rdx14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
    eax15 = reinterpret_cast<uint32_t>(MultiByteToWideChar(0xfde9));
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp10) - 8 + 8);
    if (eax15 >= 0x200 || (*reinterpret_cast<uint32_t*>(&r9_12) = 0xffffffff, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_12) + 4) = 0, r8_13 = r9, *reinterpret_cast<int32_t*>(&rdx14) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0, eax17 = reinterpret_cast<int32_t>(MultiByteToWideChar(0xfde9)), rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8), eax17 == 0)) {
        rsi18 = reinterpret_cast<void*>("R");
    } else {
        rsi18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) + 0xa90);
    }
    *reinterpret_cast<int32_t*>(&rcx19) = 0x1002;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
    eax20 = fun_140002000(0x1002);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
    if (!eax20) {
        *reinterpret_cast<signed char*>(&eax22) = 1;
    } else {
        r9_12 = rsi18;
        r8_13 = rcx;
        *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(0x140006ca0 + rbp7 * 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx19) = *reinterpret_cast<int32_t*>(&rbp7);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
        eax22 = fun_140002310(*reinterpret_cast<int32_t*>(&rcx19), *reinterpret_cast<int32_t*>(&rdx14), r8_13, r9_12);
        rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp21) - 8 + 8);
        if (eax22) {
            addr_1400022e3_9:
            rcx23 = rax6 ^ reinterpret_cast<uint64_t>(rsp5) ^ reinterpret_cast<uint64_t>(rsp21);
            rax24 = fun_1400017a0(rcx23, rdx14, rcx23, rdx14);
            return rax24;
        }
    }
    if (!r12_8 && !rax9 || *reinterpret_cast<signed char*>(&eax22) && (eax25 = reinterpret_cast<int32_t>(IsDebuggerPresent(rcx19, rdx14, r8_13, r9_12)), rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp21) - 8 + 8), !!eax25)) {
        addr_1400022dd_12:
        DebugBreak(rcx19, rdx14, r8_13, r9_12);
        rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp21) - 8 + 8);
        goto addr_1400022e3_9;
    } else {
        fun_140002df0(reinterpret_cast<uint64_t>(rcx) - 5, reinterpret_cast<uint64_t>(rsp21) + 0x260, 0x104, reinterpret_cast<uint64_t>(rsp21) + 64, v26, v27);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp21) - 8 + 8);
        if (!rax9) {
            eax29 = reinterpret_cast<int32_t>(WideCharToMultiByte(0xfde9));
            rsp30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8);
            rbx31 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp30) + 0x470);
            if (!eax29) {
                rbx31 = reinterpret_cast<struct s0*>(0x140006d68);
            }
            eax32 = reinterpret_cast<int32_t>(WideCharToMultiByte(0xfde9));
            rsp33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp30) - 8 + 8);
            *reinterpret_cast<int32_t*>(&r8_13) = v34;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
            r9_12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp33) + 0x780);
            rdx14 = rbx31;
            *reinterpret_cast<int32_t*>(&rcx19) = edx;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
            if (!eax32) {
                r9_12 = reinterpret_cast<void*>("Unknown Module Name");
            }
            eax35 = reinterpret_cast<int32_t>(r12_8(rcx19, rdx14, r8_13, r9_12));
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp33) - 8 + 8);
            zf36 = eax35 == 1;
        } else {
            *reinterpret_cast<int32_t*>(&r8_13) = v37;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
            r9_12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) + 80);
            rdx14 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp28) + 0x260);
            *reinterpret_cast<int32_t*>(&rcx19) = edx;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = 0;
            eax38 = reinterpret_cast<int32_t>(rax9(rcx19, rdx14, r8_13, r9_12));
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp28) - 8 + 8);
            zf36 = eax38 == 1;
        }
        if (!zf36) 
            goto addr_1400022e3_9; else 
            goto addr_1400022dd_12;
    }
}

int64_t fun_140002860(void* rcx) {
    int64_t rax2;

    rax2 = g1400096f8;
    return rax2;
}

int32_t fun_140002310(int32_t ecx, int32_t edx, void* r8, void* r9) {
    RaiseException(0x406d1388);
    return 0;
}

int64_t VirtualQuery = 0xba32;

int64_t GetModuleFileNameW = 0xba1c;

struct s8 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

struct s9 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

signed char g140009720;

struct s0* g140009718;

struct s0* fun_1400031d0();

struct s10 {
    signed char[56] pad56;
    int64_t f56;
};

struct s11 {
    signed char[80] pad80;
    int64_t f80;
};

struct s12 {
    signed char[64] pad64;
    int64_t f64;
};

struct s13 {
    signed char[112] pad112;
    int64_t f112;
};

struct s14 {
    signed char[208] pad208;
    int64_t f208;
};

struct s15 {
    signed char[128] pad128;
    int64_t f128;
};

struct s16 {
    int64_t f0;
    signed char[8] pad16;
    int64_t f16;
    int64_t f24;
};

struct s16* g0;

int64_t GetProcessHeap = 0xba0a;

int64_t HeapFree = 0xb9f2;

int64_t HeapAlloc = 0xb9fe;

struct s17 {
    uint32_t f0;
    signed char[4] pad8;
    uint32_t f8;
};

struct s18 {
    signed char[224] pad224;
    int64_t f224;
};

int64_t fun_140002df0(uint64_t rcx, int16_t* rdx, int32_t r8d, uint32_t* r9, uint16_t a5, uint32_t a6) {
    struct s0* rbp7;
    uint64_t rsi8;
    uint32_t* r13_9;
    int64_t rax10;
    int64_t r8_11;
    int32_t v12;
    int64_t v13;
    int64_t v14;
    int32_t eax15;
    struct s8* r9_16;
    struct s8* v17;
    int64_t rax18;
    struct s9* rcx19;
    uint32_t r8d20;
    int64_t rax21;
    uint32_t esi22;
    uint32_t ebx23;
    void* rdx24;
    uint32_t edi25;
    int64_t rax26;
    int64_t rcx27;
    uint32_t ebx28;
    int1_t zf29;
    struct s0* rax30;
    int1_t zf31;
    int64_t rax32;
    int64_t v33;
    int32_t eax34;
    int64_t rax35;
    int64_t* rax36;
    int64_t** v37;
    int32_t eax38;
    struct s10* rax39;
    struct s10** v40;
    int32_t eax41;
    struct s11* rdx42;
    struct s11** v43;
    struct s12* rax44;
    struct s12** v45;
    int32_t eax46;
    struct s13* rdx47;
    struct s13** v48;
    struct s14* rax49;
    struct s14** v50;
    signed char al51;
    struct s15* rdx52;
    struct s15** v53;
    struct s16* rax54;
    int32_t eax55;
    int64_t rax56;
    struct s16* rax57;
    signed char al58;
    uint32_t v59;
    int32_t v60;
    struct s16* rax61;
    int32_t eax62;
    uint64_t rax63;
    int64_t rax64;
    struct s17* rax65;
    struct s17* rsi66;
    struct s16* rax67;
    struct s16* r10_68;
    signed char al69;
    uint32_t edi70;
    int32_t v71;
    uint32_t edx72;
    int64_t rcx73;
    uint32_t* rax74;
    int64_t rax75;
    uint32_t eax76;
    struct s18* rax77;
    struct s18** v78;
    signed char al79;

    *reinterpret_cast<uint32_t*>(&rbp7) = 0;
    rsi8 = rcx - 1;
    *r9 = 0;
    *rdx = 0;
    r13_9 = r9;
    rax10 = reinterpret_cast<int64_t>(VirtualQuery(rsi8, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 0xc8 + 0x78, 48));
    if (!rax10 || ((*reinterpret_cast<int32_t*>(&r8_11) = v12, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0, eax15 = reinterpret_cast<int32_t>(GetModuleFileNameW(v13, v14, r8_11)), eax15 == 0) || ((r9_16 = v17, r9_16->f0 != 0x5a4d) || ((rax18 = r9_16->f60, reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax18) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax18) == 0)) || (rcx19 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(r9_16) + rax18), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_16) + rax18) != 0x4550))))) {
        return 0;
    }
    r8d20 = rcx19->f6;
    *reinterpret_cast<uint32_t*>(&rax21) = rcx19->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = 0;
    esi22 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rsi8) - *reinterpret_cast<int32_t*>(&r9_16));
    ebx23 = 0;
    rdx24 = reinterpret_cast<void*>(rax21 + reinterpret_cast<int64_t>(rcx19) + 24);
    edi25 = 0;
    if (r8d20) {
        do {
            *reinterpret_cast<uint32_t*>(&rax26) = ebx23;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
            rcx27 = rax26 + rax26 * 4;
            if (esi22 < *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdx24) + rcx27 * 8 + 12)) 
                continue;
            edi25 = esi22 - *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdx24) + rcx27 * 8 + 12);
            if (esi22 < *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdx24) + rcx27 * 8 + 8)) 
                break;
            ++ebx23;
        } while (ebx23 < r8d20);
    }
    if (ebx23 == r8d20) 
        goto addr_140002f52_8;
    ebx28 = ebx23 + 1;
    zf29 = g140009720 == 0;
    if (!zf29) {
        rax30 = g140009718;
    } else {
        zf31 = g140009718 == 0;
        if (!zf31) 
            goto addr_140002f52_8;
        rax30 = fun_1400031d0();
        g140009718 = rax30;
        if (!rax30) 
            goto addr_140002f52_8;
        g140009720 = 1;
    }
    rax32 = reinterpret_cast<int64_t>(GetProcAddress(rax30, "PDBOpenValidate5"));
    if (!rax32 || (eax34 = reinterpret_cast<int32_t>(rax32(v33)), !eax34)) {
        addr_140002f52_8:
        *reinterpret_cast<uint32_t*>(&rax35) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = 0;
    } else {
        rax36 = *v37;
        eax38 = reinterpret_cast<int32_t>(*rax36());
        if (eax38 != 0x131a5b5 || (rax39 = *v40, eax41 = reinterpret_cast<int32_t>(rax39->f56()), eax41 == 0)) {
            addr_140003198_16:
            rdx42 = *v43;
            rdx42->f80();
            *reinterpret_cast<uint32_t*>(&rax35) = *reinterpret_cast<uint32_t*>(&rbp7);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = 0;
        } else {
            rax44 = *v45;
            eax46 = reinterpret_cast<int32_t>(rax44->f64());
            if (!eax46) {
                addr_14000318d_18:
                rdx47 = *v48;
                rdx47->f112();
                goto addr_140003198_16;
            } else {
                rax49 = *v50;
                al51 = reinterpret_cast<signed char>(rax49->f208());
                if (!al51 || 1) {
                    addr_14000317f_20:
                    rdx52 = *v53;
                    rdx52->f128();
                    goto addr_14000318d_18;
                } else {
                    rax54 = g0;
                    eax55 = reinterpret_cast<int32_t>(rax54->f16());
                    if (!eax55) {
                        addr_140003161_22:
                        rax56 = reinterpret_cast<int64_t>(GetProcessHeap());
                        HeapFree(rax56);
                        goto addr_140003175_23;
                    } else {
                        do {
                            rax57 = g0;
                            al58 = reinterpret_cast<signed char>(rax57->f24());
                            if (!al58) 
                                goto addr_140003175_23;
                            if (static_cast<uint32_t>(a5) != ebx28) 
                                continue;
                            if (v59 > edi25) 
                                continue;
                            if (edi25 < v59 + v60) 
                                goto addr_140003076_29;
                            rax61 = g0;
                            eax62 = reinterpret_cast<int32_t>(rax61->f16());
                        } while (eax62);
                        goto addr_140003071_31;
                    }
                }
            }
        }
    }
    return rax35;
    addr_140003076_29:
    *reinterpret_cast<uint32_t*>(&rax63) = a6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax63) + 4) = 0;
    if (!*reinterpret_cast<uint32_t*>(&rax63) || (rax63 >= 0x1fffffffffffffff || (rax64 = reinterpret_cast<int64_t>(GetProcessHeap()), rax65 = reinterpret_cast<struct s17*>(HeapAlloc(rax64)), rsi66 = rax65, rax65 == 0))) {
        addr_140003175_23:
        rax67 = g0;
        rax67->f0();
        goto addr_14000317f_20;
    } else {
        r10_68 = g0;
        al69 = reinterpret_cast<signed char>(r10_68->f24());
        if (al69 && (edi70 = edi25 - v71, edi70 >= rsi66->f0)) {
            edx72 = a6;
            *reinterpret_cast<uint32_t*>(&rcx73) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx73) + 4) = 0;
            if (edx72 > 1) {
                rax74 = &rsi66->f8;
                do {
                    if (edi70 < *rax74) 
                        break;
                    *reinterpret_cast<uint32_t*>(&rcx73) = *reinterpret_cast<uint32_t*>(&rcx73) + 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx73) + 4) = 0;
                    rax74 = rax74 + 2;
                } while (*reinterpret_cast<uint32_t*>(&rcx73) < edx72);
            }
            *reinterpret_cast<int32_t*>(&rax75) = static_cast<int32_t>(rcx73 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax75) + 4) = 0;
            eax76 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsi66) + rax75 * 8 + 4);
            *r13_9 = eax76 & 0xffffff;
            rax77 = *v78;
            al79 = reinterpret_cast<signed char>(rax77->f224());
            if (al79) {
                *reinterpret_cast<uint32_t*>(&rbp7) = 1;
                goto addr_140003161_22;
            }
        }
    }
    addr_140003071_31:
    goto addr_140003161_22;
}

void fun_140002610(signed char* rcx, void* rdx, void* r8, void* r9) {
    void* rbp5;
    void* rdi6;
    void* r15_7;
    signed char* r14_8;
    void* r12_9;
    signed char* rsi10;
    void* r13_11;
    uint32_t ebx12;
    int64_t r8_13;

    *reinterpret_cast<int32_t*>(&rbp5) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    r15_7 = rdx;
    r14_8 = rcx;
    if (reinterpret_cast<uint64_t>(r9) < 16) {
        rbp5 = r9;
    }
    if (rbp5) {
        r12_9 = rdx;
        rsi10 = rcx;
        r13_11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r8) - reinterpret_cast<uint64_t>(rcx));
        rdi6 = rbp5;
        do {
            ebx12 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r13_11) + reinterpret_cast<uint64_t>(rsi10));
            *reinterpret_cast<uint32_t*>(&r8_13) = ebx12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
            g1400096f0(r12_9, "%.2X ", r8_13);
            *rsi10 = *reinterpret_cast<signed char*>(&ebx12);
            ++rsi10;
            r12_9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_9) + 3);
            rbp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp5) - 1);
        } while (rbp5);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi6) + reinterpret_cast<uint64_t>(r14_8)) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi6) + (reinterpret_cast<uint64_t>(r15_7) + reinterpret_cast<uint64_t>(rdi6) * 2)) = 0;
    return;
}

/*
 * ?terminate@@YAXXZ
 * void __cdecl terminate(void)
 */
int64_t terminate_YAXXZ = 0xb7f8;

void fun_14000341e() {
    goto terminate_YAXXZ;
}

int32_t g140009724;

int64_t g140009038 = 0x1400070d8;

int64_t FreeLibrary = 0xba42;

struct s0* fun_1400031d0() {
    void* rsp1;
    uint64_t rax2;
    uint64_t v3;
    int1_t zf4;
    struct s0* rdx5;
    struct s0* rax6;
    int64_t rcx7;
    int64_t rax8;
    void* rsp9;
    int64_t rax10;
    struct s0* rdx11;
    int64_t rax12;
    int64_t rax13;
    int64_t rax14;
    int32_t eax15;
    void* rsp16;
    int64_t rdi17;
    int64_t v18;
    int32_t eax19;
    void* rsp20;
    int64_t rcx21;
    int32_t v22;
    int64_t v23;
    int32_t eax24;
    int64_t v25;
    int32_t v26;
    void* rax27;
    void* rax28;
    int64_t r8_29;
    uint32_t eax30;
    void* rcx31;
    uint64_t rcx32;
    struct s0* rax33;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x168);
    rax2 = g140009000;
    v3 = rax2 ^ reinterpret_cast<uint64_t>(rsp1);
    zf4 = g140009724 == 0;
    if (!zf4) {
        rax6 = fun_1400017a0(v3 ^ reinterpret_cast<uint64_t>(rsp1), rdx5);
        return rax6;
    }
    rcx7 = g140009038;
    g140009724 = 1;
    rax8 = reinterpret_cast<int64_t>(LoadLibraryA(rcx7));
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp1) - 8 + 8);
    if (!rax8) {
        rax10 = reinterpret_cast<int64_t>(LoadLibraryA("ADVAPI32.DLL"));
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
        if (rax10) {
            rdx11 = reinterpret_cast<struct s0*>(0x140007170);
            rax12 = reinterpret_cast<int64_t>(GetProcAddress(rax10, 0x140007170));
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
            if (rax12) {
                rdx11 = reinterpret_cast<struct s0*>(0x140007158);
                rax13 = reinterpret_cast<int64_t>(GetProcAddress(rax10, 0x140007158));
                rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
                if (rax13) {
                    rdx11 = reinterpret_cast<struct s0*>(0x140007148);
                    rax14 = reinterpret_cast<int64_t>(GetProcAddress(rax10, 0x140007148));
                    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
                    if (!rax14) {
                        addr_1400032e5_8:
                    } else {
                        rdx11 = reinterpret_cast<struct s0*>(0x140007118);
                        eax15 = reinterpret_cast<int32_t>(rax12(0xffffffff80000002, 0x140007118));
                        rsp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
                        if (!eax15) {
                            rdx11 = reinterpret_cast<struct s0*>(0x140007100);
                            *reinterpret_cast<int32_t*>(&rdi17) = 0;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = 0;
                            eax19 = reinterpret_cast<int32_t>(rax13(v18, 0x140007100));
                            rsp20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
                            if (eax19 || ((*reinterpret_cast<int32_t*>(&rcx21) = v22, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = 0, reinterpret_cast<uint32_t>(0x7fffffff - *reinterpret_cast<int32_t*>(&rcx21)) < 13) || static_cast<uint32_t>(rcx21 + 13) >= 0x104)) {
                                FreeLibrary(rax10, 0x140007100);
                                rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp20) - 8 + 8);
                                goto addr_1400033dc_12;
                            } else {
                                rdx11 = reinterpret_cast<struct s0*>(0x140007100);
                                eax24 = reinterpret_cast<int32_t>(rax13(v23, 0x140007100));
                                rax14(v25, 0x140007100);
                                FreeLibrary(rax10, 0x140007100);
                                rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp20) - 8 + 8 - 8 + 8 - 8 + 8);
                                if (eax24) {
                                    addr_1400033dc_12:
                                } else {
                                    *reinterpret_cast<int32_t*>(&rdx11) = v26;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
                                    *reinterpret_cast<int32_t*>(&rax27) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rdx11) + 0xfffffffffffffffe);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = 0;
                                    if (*reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp9) + reinterpret_cast<int64_t>(rax27) + 64) == 92) {
                                        *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(&rdx11) - 1;
                                    } else {
                                        *reinterpret_cast<int32_t*>(&rax28) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rdx11) + 0xffffffffffffffff);
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
                                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp9) + reinterpret_cast<int64_t>(rax28) + 64) = 92;
                                    }
                                    r8_29 = g140009038;
                                    do {
                                        eax30 = *reinterpret_cast<unsigned char*>(rdi17 + r8_29);
                                        *reinterpret_cast<int32_t*>(&rcx31) = *reinterpret_cast<int32_t*>(&rdx11);
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = 0;
                                        ++rdi17;
                                        *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(&rdx11) + 1;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
                                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp9) + reinterpret_cast<int64_t>(rcx31) + 64) = *reinterpret_cast<signed char*>(&eax30);
                                    } while (rdi17 <= 11);
                                    LoadLibraryA(reinterpret_cast<uint64_t>(rsp9) + 64);
                                    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
                                }
                            }
                        } else {
                            FreeLibrary(rax10, 0x140007118);
                            rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp16) - 8 + 8);
                            goto addr_1400032e5_8;
                        }
                    }
                }
            }
        }
    }
    rcx32 = v3 ^ reinterpret_cast<uint64_t>(rsp9);
    rax33 = fun_1400017a0(rcx32, rdx11, rcx32, rdx11);
    return rax33;
}

int64_t RtlCaptureContext = 0xb8f4;

int64_t g140009318;

int64_t fun_140003466(int64_t rcx, void* rdx);

void* g1400092b8;

int64_t g140009190 = 0;

uint64_t g1400092a0;

int32_t g140009180 = 0;

int32_t g140009184 = 0;

int32_t g140009218;

int64_t SetUnhandledExceptionFilter = 0xb894;

int64_t UnhandledExceptionFilter = 0xb878;

int64_t GetCurrentProcess = 0xb864;

int64_t TerminateProcess = 0xb850;

struct s0* fun_1400017a0(uint64_t rcx, struct s0* rdx, ...) {
    int1_t zf3;
    struct s0* rax4;
    void* rsp5;
    int64_t r11_6;
    int64_t r8_7;
    void* rdx8;
    int64_t rcx9;
    int64_t rax10;
    int64_t r9_11;
    void* v12;
    int64_t rax13;
    int32_t eax14;
    int64_t rcx15;
    int1_t zf16;
    int64_t rax17;
    struct s0* rax18;

    zf3 = rcx == g140009000;
    if (zf3) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return rax4;
        }
    }
    RtlCaptureContext(0x140009220);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x88 - 8 + 8);
    r11_6 = g140009318;
    *reinterpret_cast<int32_t*>(&r8_7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = 0;
    rdx8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 96);
    rcx9 = r11_6;
    rax10 = fun_140003466(rcx9, rdx8);
    if (!rax10) {
        g140009318 = reinterpret_cast<int64_t>(__return_address());
        g1400092b8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 + 0x88 + 8);
    } else {
        r9_11 = rax10;
        r8_7 = r11_6;
        rdx8 = v12;
        *reinterpret_cast<int32_t*>(&rcx9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        fun_140003460();
    }
    rax13 = g140009318;
    g140009190 = rax13;
    g1400092a0 = rcx;
    g140009180 = 0xc0000409;
    g140009184 = 1;
    eax14 = reinterpret_cast<int32_t>(IsDebuggerPresent(rcx9, rdx8, r8_7, r9_11));
    g140009218 = eax14;
    fun_140002dde(1, rdx8, r8_7, r9_11);
    SetUnhandledExceptionFilter();
    rcx15 = 0x1400069b0;
    UnhandledExceptionFilter(0x1400069b0, rdx8, r8_7, r9_11);
    zf16 = g140009218 == 0;
    if (zf16) {
        *reinterpret_cast<int32_t*>(&rcx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
        fun_140002dde(1, rdx8, r8_7, r9_11);
    }
    rax17 = reinterpret_cast<int64_t>(GetCurrentProcess(rcx15, rdx8, r8_7, r9_11));
    rax18 = reinterpret_cast<struct s0*>(TerminateProcess(rax17, 0xc0000409, r8_7, r9_11));
    return rax18;
}

int64_t strlen = 0xb664;

int32_t fun_140001770(void* rcx, int64_t rdx, int64_t r8) {
    goto strlen;
}

int64_t strcpy = 0xb65a;

void fun_14000176a(uint64_t rcx, int64_t rdx, int64_t r8) {
    goto strcpy;
}

struct s0* fun_1400017c0(void* rcx, struct s0* rdx, int64_t r8, int64_t r9) {
    void* v5;
    int64_t rdi6;
    struct s0* rsi7;
    void* rbp8;
    int64_t rbx9;
    void* rcx10;
    struct s0* rax11;
    struct s0* rdx12;

    v5 = __return_address();
    *reinterpret_cast<signed char*>(&rdi6) = reinterpret_cast<signed char>(0);
    rsi7 = rdx;
    rbp8 = rcx;
    if (rdx->f0 > reinterpret_cast<signed char>(0)) {
        rbx9 = 0;
        do {
            rcx10 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(*reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi7) + 8) + rbx9)));
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx10) + reinterpret_cast<uint64_t>(rbp8) - 4) != 0xcccccccc || (rax11 = reinterpret_cast<struct s0*>(*reinterpret_cast<int32_t*>(*reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi7) + 8) + rbx9 + 4) + reinterpret_cast<uint64_t>(rcx10)), *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax11) + reinterpret_cast<uint64_t>(rbp8)) != 0xcccccccc)) {
                rdx12 = *reinterpret_cast<struct s0**>(*reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsi7) + 8) + rbx9 + 8);
                rax11 = fun_140002360(v5, rdx12);
            }
            *reinterpret_cast<signed char*>(&rdi6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rdi6) + 1);
            rbx9 = rbx9 + 16;
        } while (*reinterpret_cast<signed char*>(&rdi6) < rsi7->f0);
    }
    return rax11;
}

int64_t GetSystemTimeAsFileTime = 0xb9d8;

int64_t GetCurrentProcessId = 0xb9c2;

int64_t GetCurrentThreadId = 0xb9ac;

int64_t GetTickCount = 0xb99c;

int64_t QueryPerformanceCounter = 0xb982;

int64_t g140009008 = 0xffffd466d2205dcd;

void fun_140002ae0() {
    void* rsp1;
    int1_t zf2;
    void* rcx3;
    int32_t eax4;
    uint64_t rcx5;
    int32_t eax6;
    uint64_t rcx7;
    int32_t eax8;
    uint64_t rcx9;
    uint64_t v10;
    uint64_t v11;
    uint64_t rax12;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 72);
    zf2 = g140009000 == 0x2b992ddfa232;
    if (zf2) {
        rcx3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) + 32);
        GetSystemTimeAsFileTime(rcx3);
        eax4 = reinterpret_cast<int32_t>(GetCurrentProcessId(rcx3));
        *reinterpret_cast<int32_t*>(&rcx5) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = reinterpret_cast<int32_t>(GetCurrentThreadId());
        *reinterpret_cast<int32_t*>(&rcx7) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        eax8 = reinterpret_cast<int32_t>(GetTickCount());
        *reinterpret_cast<int32_t*>(&rcx9) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        QueryPerformanceCounter(reinterpret_cast<int64_t>(rsp1) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 48);
        v10 = (rcx5 ^ rcx7 ^ rcx9 ^ v11) & 0xffffffffffff;
        if (v10 == 0x2b992ddfa232) {
            v10 = 0x2b992ddfa233;
        }
        g140009000 = v10;
        g140009008 = reinterpret_cast<int64_t>(~v10);
    } else {
        rax12 = g140009000;
        g140009008 = reinterpret_cast<int64_t>(~rax12);
    }
    return;
}

struct s19 {
    signed char[8] pad8;
    int64_t f8;
};

struct s19* fun_140001d70();

int64_t g140009738;

int64_t Sleep = 0xb848;

int32_t g140009728;

int32_t g14000917c = 0;

int64_t _CrtDbgReportW = 0xb7b6;

int64_t g140009760;

int64_t _CrtSetCheckCount = 0xb7a2;

int64_t* __initenv = reinterpret_cast<int64_t*>(0xb796);

int64_t g140009160 = 0;

int64_t* g140009168 = reinterpret_cast<int64_t*>(0);

int32_t g140009158 = 0;

int32_t fun_140001005(int32_t ecx, int64_t* rdx, int64_t r8);

int32_t g140009178 = 0;

int32_t g14000915c = 0;

int64_t exit = 0xb78e;

int64_t _cexit = 0xb784;

int64_t fun_140001b70() {
    struct s19* rax1;
    int64_t v2;
    int32_t v3;
    int64_t rdx4;
    int1_t zf5;
    int64_t tmp64_6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int64_t rax10;
    int64_t r8_11;
    int64_t r9_12;
    int32_t eax13;
    int32_t eax14;
    int64_t r8_15;
    int32_t eax16;
    int1_t zf17;
    int32_t eax18;
    int64_t* r11_19;
    int64_t rax20;
    int64_t r8_21;
    int64_t* rdx22;
    int64_t rcx23;
    int32_t eax24;
    int1_t zf25;
    int1_t zf26;

    rax1 = fun_140001d70();
    v2 = rax1->f8;
    v3 = 0;
    while (1) {
        rdx4 = v2;
        zf5 = g140009738 == rdx4;
        if (zf5) {
            tmp64_6 = g140009738;
            g140009738 = rdx4;
            rdx4 = tmp64_6;
        }
        if (1) 
            break;
        if (!v2) 
            goto addr_140001bbf_6;
        Sleep(0x3e8, rdx4);
    }
    addr_140001bd6_8:
    eax7 = g140009728;
    if (eax7 != 1) {
        eax8 = g140009728;
        if (eax8) {
            g14000917c = 1;
        } else {
            g140009728 = 1;
            rdx4 = 0x140006660;
            eax9 = fun_140002dd8(0x140006330, 0x140006660);
            if (eax9) {
                *reinterpret_cast<int32_t*>(&rax10) = 0xff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
                goto addr_140001d67_14;
            }
        }
    } else {
        fun_140002ad0(31, rdx4, r8_11, r9_12);
    }
    eax13 = g140009728;
    if (eax13 == 1) {
        rdx4 = 0x140006220;
        fun_140002dd2(0x140006000, 0x140006220);
        g140009728 = 2;
    }
    eax14 = g140009728;
    if (eax14 != 2 && (*reinterpret_cast<int32_t*>(&r8_15) = 0x1f4, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = 0, rdx4 = reinterpret_cast<int64_t>("f"), eax16 = reinterpret_cast<int32_t>(_CrtDbgReportW(2, "f", 0x1f4)), eax16 == 1)) {
    }
    if (!v3) {
        g140009738 = 0;
    }
    zf17 = g140009760 == 0;
    if (!zf17 && (eax18 = fun_140002d40(0x140009760, rdx4, 0x1f4), !!eax18)) {
        *reinterpret_cast<int32_t*>(&r8_15) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx4) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
        g140009760();
    }
    _CrtSetCheckCount(1, rdx4, r8_15);
    r11_19 = __initenv;
    rax20 = g140009160;
    *r11_19 = rax20;
    r8_21 = g140009160;
    rdx22 = g140009168;
    *reinterpret_cast<int32_t*>(&rcx23) = g140009158;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = 0;
    eax24 = fun_140001005(*reinterpret_cast<int32_t*>(&rcx23), rdx22, r8_21);
    g140009178 = eax24;
    zf25 = g14000915c == 0;
    if (zf25) {
        *reinterpret_cast<int32_t*>(&rcx23) = g140009178;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = 0;
        exit(rcx23, rdx22, r8_21);
    }
    zf26 = g14000917c == 0;
    if (zf26) {
        _cexit(rcx23, rdx22, r8_21);
    }
    *reinterpret_cast<int32_t*>(&rax10) = g140009178;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    addr_140001d67_14:
    return rax10;
    addr_140001bbf_6:
    v3 = 1;
    goto addr_140001bd6_8;
}

int32_t fun_140001005(int32_t ecx, int64_t* rdx, int64_t r8) {
    int64_t* v4;
    int32_t v5;
    int64_t rcx6;
    int32_t v7;
    int32_t v8;
    int64_t rcx9;
    int32_t eax10;

    v4 = rdx;
    v5 = ecx;
    rcx6 = 12;
    while (*reinterpret_cast<int32_t*>(&rcx6)) {
        *reinterpret_cast<int32_t*>(&rcx6) = *reinterpret_cast<int32_t*>(&rcx6) - 1;
    }
    v7 = 0;
    v8 = 1;
    while (v8 < v5) {
        rcx9 = v4[v8];
        eax10 = fun_14000100f(rcx9);
        v7 = v7 + eax10;
        ++v8;
    }
    return v7;
}

struct s20 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f24;
};

int32_t fun_140002c10(struct s5* rcx) {
    struct s20* v2;
    int32_t eax3;

    if (static_cast<uint32_t>(rcx->f0) == 0x5a4d) {
        v2 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rcx) + rcx->f60);
        if (v2->f0 == 0x4550) {
            if (static_cast<uint32_t>(v2->f24) == 0x20b) {
                eax3 = 1;
            } else {
                eax3 = 0;
            }
        } else {
            eax3 = 0;
        }
    } else {
        eax3 = 0;
    }
    return eax3;
}

int64_t RtlLookupFunctionEntry = 0xb8da;

int64_t fun_140003466(int64_t rcx, void* rdx) {
    goto RtlLookupFunctionEntry;
}

int64_t fun_140002870() {
    int64_t rax1;

    rax1 = g140009700;
    return rax1;
}

int64_t _unlock = 0xb80c;

void fun_140003424(int64_t rcx, void* rdx, void* r8) {
    goto _unlock;
}

int64_t _lock = 0xb824;

void fun_140003430(int64_t rcx) {
    goto _lock;
}

int64_t __dllonexit = 0xb816;

int64_t fun_14000342a(int64_t rcx, void* rdx, void* r8) {
    goto __dllonexit;
}

struct s21 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s6* fun_140002c90(struct s7* rcx, uint64_t rdx) {
    uint64_t v3;
    struct s21* v4;
    uint32_t v5;
    int64_t rcx6;
    struct s6* v7;
    uint64_t rax8;
    uint64_t rax9;
    struct s6* rax10;

    v3 = rdx;
    v4 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rcx) + rcx->f60);
    v5 = 0;
    *reinterpret_cast<uint32_t*>(&rcx6) = v4->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    v7 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(v4) + rcx6 + 24);
    while (v5 < static_cast<uint32_t>(v4->f6)) {
        *reinterpret_cast<int32_t*>(&rax8) = v7->f12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        if (v3 < rax8) 
            goto addr_140002d29_4;
        *reinterpret_cast<int32_t*>(&rax9) = v7->f12 + v7->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        if (v3 < rax9) 
            goto addr_140002d22_6;
        addr_140002d29_4:
        ++v5;
        ++v7;
    }
    *reinterpret_cast<int32_t*>(&rax10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    addr_140002d2d_9:
    return rax10;
    addr_140002d22_6:
    rax10 = v7;
    goto addr_140002d2d_9;
}

struct s22 {
    signed char[3] pad3;
    unsigned char f3;
};

struct s0* fun_140001670(void* rcx, struct s0* rdx, struct s2* r8) {
    struct s0* v4;
    uint32_t v5;
    void* v6;
    uint64_t v7;
    int64_t rax8;
    struct s22* v9;
    void* v10;
    uint32_t eax11;
    uint32_t eax12;
    struct s0* rax13;

    v4 = rdx;
    v5 = r8->f0 & 0xfffffff8;
    v6 = rcx;
    if (r8->f0 >> 2 & 1) {
        rdx = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rcx) + static_cast<int64_t>(r8->f4));
        v6 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx) & reinterpret_cast<uint64_t>(static_cast<int64_t>(-r8->f8)));
    }
    v7 = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(v6) + reinterpret_cast<int32_t>(v5));
    *reinterpret_cast<int32_t*>(&rax8) = (*reinterpret_cast<struct s1**>(reinterpret_cast<uint64_t>(v4) + 16))->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    v9 = reinterpret_cast<struct s22*>(rax8 + *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(v4) + 8));
    v10 = rcx;
    eax11 = v9->f3;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) & 15)) {
        eax12 = v9->f3;
        v10 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(v10) + static_cast<int64_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax12) >> 4) & 15) * 16)));
    }
    rax13 = fun_1400017a0(v7 ^ reinterpret_cast<uint64_t>(v10), rdx);
    return rax13;
}

int64_t fun_1400029d0(int64_t rcx);

int64_t fun_140002a90(int64_t rcx) {
    int64_t rax2;
    int32_t v3;
    int64_t rax4;

    rax2 = fun_1400029d0(rcx);
    if (rax2) {
        v3 = 0;
    } else {
        v3 = -1;
    }
    *reinterpret_cast<int32_t*>(&rax4) = v3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

struct s19* g30;

struct s19* fun_140001d70() {
    struct s19* rax1;

    rax1 = g30;
    return rax1;
}

int64_t _XcptFilter = 0xb76e;

void fun_140002be4(int64_t rcx, int32_t** rdx) {
    goto _XcptFilter;
}

int64_t g140009758;

int64_t _decode_pointer = 0xb836;

int64_t g140009740;

int64_t _encode_pointer = 0xb714;

int64_t _onexit = 0xb82c;

int64_t fun_1400029d0(int64_t rcx) {
    int64_t rcx2;
    int64_t rax3;
    int64_t rcx4;
    int64_t rax5;
    int64_t rcx6;
    int64_t rax7;
    int64_t rax8;
    void* rsp9;
    void* r8_10;
    void* rdx11;
    int64_t rax12;
    int64_t rax13;
    int64_t rax14;
    int64_t rax15;

    rcx2 = g140009758;
    rax3 = reinterpret_cast<int64_t>(_decode_pointer(rcx2));
    if (rax3 != -1) {
        fun_140003430(8);
        rcx4 = g140009758;
        rax5 = reinterpret_cast<int64_t>(_decode_pointer(rcx4));
        rcx6 = g140009740;
        rax7 = reinterpret_cast<int64_t>(_decode_pointer(rcx6));
        rax8 = reinterpret_cast<int64_t>(_encode_pointer(rcx));
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 72 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        r8_10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) + 48);
        rdx11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) + 32);
        rax12 = fun_14000342a(rax8, rdx11, r8_10);
        rax13 = reinterpret_cast<int64_t>(_encode_pointer(rax5, rdx11, r8_10));
        g140009758 = rax13;
        rax14 = reinterpret_cast<int64_t>(_encode_pointer(rax7, rdx11, r8_10));
        g140009740 = rax14;
        fun_140003424(8, rdx11, r8_10);
        rax15 = rax12;
    } else {
        rax15 = reinterpret_cast<int64_t>(_onexit(rcx));
    }
    return rax15;
}

/* (image base) */
uint16_t image_base_;

int32_t g14000003c;

int32_t fun_140001d80() {
    uint32_t eax1;
    int64_t rcx2;
    uint32_t v3;
    int32_t v4;
    int32_t eax5;
    int32_t v6;

    eax1 = image_base_;
    if (eax1 == 0x5a4d) {
        rcx2 = g14000003c;
        if (*reinterpret_cast<int32_t*>(0x140000000 + rcx2) == 0x4550) {
            v3 = *reinterpret_cast<uint16_t*>(0x140000000 + rcx2 + 24);
            if (v3 == 0x10b) {
                if (*reinterpret_cast<uint32_t*>(0x140000000 + rcx2 + 24 + 92) > 14) {
                    if (!*reinterpret_cast<int32_t*>(0x140000000 + rcx2 + 24 + 0xd0)) {
                        v4 = 0;
                    } else {
                        v4 = 1;
                    }
                    eax5 = v4;
                } else {
                    eax5 = 0;
                }
            } else {
                if (v3 == 0x20b) {
                    if (*reinterpret_cast<uint32_t*>(0x140000000 + rcx2 + 24 + 0x6c) > 14) {
                        if (!*reinterpret_cast<int32_t*>(0x140000000 + rcx2 + 24 + 0xe0)) {
                            v6 = 0;
                        } else {
                            v6 = 1;
                        }
                        eax5 = v6;
                    } else {
                        eax5 = 0;
                    }
                } else {
                    eax5 = 0;
                }
            }
        } else {
            eax5 = 0;
        }
    } else {
        eax5 = 0;
    }
    return eax5;
}

void fun_140002950() {
    int64_t* rbx1;
    int64_t rax2;

    rbx1 = reinterpret_cast<int64_t*>(0x1400075c0);
    if (!0) {
        do {
            rax2 = *rbx1;
            if (rax2) {
                rax2();
            }
            ++rbx1;
        } while (reinterpret_cast<uint64_t>(rbx1) < 0x1400077d8);
    }
    return;
}

int64_t fun_140002940() {
    return 0;
}

struct s23 {
    signed char f0;
    signed char[3] pad4;
    struct s23* f4;
    int64_t f12;
};

void fun_140001850(struct s23* rcx, int64_t rdx, struct s23** r8) {
    struct s23* r9_4;
    struct s23* rdi5;
    int64_t rcx6;

    r9_4 = rcx;
    if (rcx && (rdx && r8)) {
        rdi5 = rcx;
        rcx6 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx6)) {
            *reinterpret_cast<int32_t*>(&rcx6) = *reinterpret_cast<int32_t*>(&rcx6) - 1;
            rdi5->f0 = -52;
            rdi5 = reinterpret_cast<struct s23*>(&rdi5->pad4);
        }
        r9_4->f4 = *r8;
        r9_4->f12 = rdx;
        *r8 = r9_4;
    }
    return;
}

signed char g140009150 = 0;

int64_t fun_1400019b0() {
    int1_t zf1;
    int64_t rax2;
    int64_t rax3;

    zf1 = g140009150 == 0;
    if (zf1) {
        g140009150 = 1;
        rax2 = fun_140002878();
        rax3 = fun_140002840(rax2);
    }
    return rax3;
}

int64_t fun_1400019f0() {
    int64_t rax1;

    rax1 = fun_140002878();
    return rax1;
}

int64_t fun_140001b50() {
    int64_t rax1;

    fun_140002ae0();
    rax1 = fun_140001b70();
    return rax1;
}

int64_t fun_140001fd0() {
    int32_t eax1;
    int32_t eax2;

    eax1 = reinterpret_cast<int32_t>(IsDebuggerPresent());
    if (!eax1 || (eax2 = fun_140002000(0x1004), eax2 == 0)) {
        return 0;
    } else {
        return 1;
    }
}

void fun_140002990() {
    int64_t* rbx1;
    int64_t rax2;

    rbx1 = reinterpret_cast<int64_t*>(0x1400078f0);
    if (!0) {
        do {
            rax2 = *rbx1;
            if (rax2) {
                rax2();
            }
            ++rbx1;
        } while (reinterpret_cast<uint64_t>(rbx1) < 0x140007b08);
    }
    return;
}

void fun_14000177c() {
    goto sprintf;
}

int64_t fun_140001630(int64_t rcx, void* rdx, int64_t r8, struct s0* r9) {
    struct s2* r8_5;

    r8_5 = r9->f56;
    fun_140001670(rdx, r9, r8_5);
    return 1;
}

void fun_140001764() {
    goto printf;
}

struct s24 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s0* fun_140001890(int64_t rcx, struct s24* rdx, struct s0* r8) {
    void* v4;
    int64_t rdi5;
    int64_t r13_6;
    struct s0* rbx7;
    struct s24* r12_8;
    int1_t less_or_equal9;
    int32_t ebp10;
    int64_t rsi11;
    int64_t rcx12;
    struct s0* rdx13;
    struct s0* rax14;

    v4 = __return_address();
    *reinterpret_cast<int32_t*>(&rdi5) = 0;
    r13_6 = rcx;
    rbx7 = r8;
    r12_8 = rdx;
    if (rdx) {
        less_or_equal9 = rdx->f0 <= 0;
        ebp10 = 0;
        if (!less_or_equal9) {
            rsi11 = 0;
            do {
                rcx12 = *reinterpret_cast<int32_t*>(rsi11 + r12_8->f8);
                if (*reinterpret_cast<int32_t*>(rcx12 + r13_6 - 4) != 0xcccccccc || *reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(rsi11 + r12_8->f8 + 4) + rcx12 + r13_6) != 0xcccccccc) {
                    rdx13 = *reinterpret_cast<struct s0**>(rsi11 + r12_8->f8 + 8);
                    fun_140002360(v4, rdx13);
                }
                ++ebp10;
                rsi11 = rsi11 + 16;
            } while (ebp10 < r12_8->f0);
        }
    }
    rax14 = rbx7;
    if (rbx7) {
        do {
            rax14 = rax14->f4;
            *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(&rdi5) + 1;
        } while (rax14);
    }
    if (rbx7) {
        do {
            if (rbx7->f0 != 0xcccccccc || (*reinterpret_cast<int32_t*>(&rbx7->f12) != 0xcccccccc || (*reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx7) + 24) != 0xcccccccc || *reinterpret_cast<int32_t*>(&rbx7->f16) != 0xcccccccc))) {
                fun_140002470(v4, rbx7, *reinterpret_cast<int32_t*>(&rdi5));
            }
            rax14 = *reinterpret_cast<struct s0**>(&rbx7->f8);
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax14) + reinterpret_cast<uint64_t>(rbx7) + 0xfffffffffffffffc) != 0xcccccccc) {
                rax14 = fun_140002470(v4, rbx7, *reinterpret_cast<int32_t*>(&rdi5));
            }
            rbx7 = rbx7->f4;
            *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(&rdi5) - 1;
        } while (rbx7);
    }
    return rax14;
}

struct s25 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f24;
    signed char[4] pad32;
    int32_t f32;
};

int64_t fun_140002880(struct s25** rcx) {
    int64_t rax2;

    if ((*rcx)->f0 != 0xe06d7363 || ((*rcx)->f24 != 4 || (*rcx)->f32 != 0x19930520 && ((*rcx)->f32 != 0x19930521 && ((*rcx)->f32 != 0x19930522 && (*rcx)->f32 != 0x1994000)))) {
        *reinterpret_cast<int32_t*>(&rax2) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    } else {
        fun_14000341e();
        *reinterpret_cast<int32_t*>(&rax2) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    }
    return rax2;
}

void fun_140001a14() {
    goto fclose;
}

int32_t g140009714;

int32_t g140009174 = 0;

int32_t g140009710;

int64_t __getmainargs = 0xb746;

int32_t g140009170 = 0;

void fun_140001ae0() {
    int32_t r11d1;
    int64_t r9_2;
    int32_t eax3;
    int1_t less4;

    fun_140002a90(fun_140002990);
    r11d1 = g140009714;
    g140009174 = r11d1;
    *reinterpret_cast<int32_t*>(&r9_2) = g140009710;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_2) + 4) = 0;
    eax3 = reinterpret_cast<int32_t>(__getmainargs(0x140009158, 0x140009168, 0x140009160, r9_2));
    g140009170 = eax3;
    less4 = g140009170 < 0;
    if (less4) {
        fun_140002ad0(8, 0x140009168, 0x140009160, r9_2);
    }
    return;
}

void fun_140002ad6() {
    goto __getmainargs;
}

int64_t _exit = 0xb77c;

void fun_140001d2e() {
    int32_t eax1;
    int1_t zf2;
    int64_t rcx3;
    int1_t zf4;

    g140009178 = eax1;
    zf2 = g14000915c == 0;
    if (zf2) {
        *reinterpret_cast<int32_t*>(&rcx3) = g140009178;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
        _exit(rcx3);
    }
    zf4 = g14000917c == 0;
    if (!zf4) 
        goto 0x140001d61;
    _cexit(rcx3);
}

int32_t g14000901c = 1;

struct s26 {
    signed char[5368737008] pad5368737008;
    unsigned char f5368737008;
};

struct s27 {
    signed char[5368737024] pad5368737024;
    unsigned char f5368737024;
};

struct s0* fun_1400026c0(signed char* rcx) {
    void* v2;
    void* rsp3;
    uint64_t rax4;
    uint64_t v5;
    int32_t r10d6;
    signed char* r8_7;
    uint64_t rcx8;
    struct s0* rdx9;
    struct s0* rax10;
    void* r9_11;
    uint64_t rcx12;
    signed char* rdi13;
    struct s26* rcx14;
    uint32_t eax15;
    uint64_t rcx16;
    signed char* rdi17;
    signed char v18;
    void* rdx19;
    uint32_t eax20;
    uint64_t rcx21;
    signed char* rdi22;
    signed char v23;
    struct s27* rcx24;
    uint32_t eax25;

    v2 = __return_address();
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x438);
    rax4 = g140009000;
    v5 = rax4 ^ reinterpret_cast<uint64_t>(rsp3);
    r10d6 = g14000901c;
    r8_7 = rcx;
    if (r10d6 == -1) {
        addr_1400027b6_2:
        rcx8 = v5 ^ reinterpret_cast<uint64_t>(rsp3);
        rax10 = fun_1400017a0(rcx8, rdx9, rcx8, rdx9);
        return rax10;
    } else {
        if (!rcx) {
            addr_140002791_4:
            r9_11 = reinterpret_cast<void*>("A variable is being used without being initialized.");
        } else {
            rcx12 = 0xffffffffffffffff;
            rdi13 = r8_7;
            do {
                if (!*reinterpret_cast<int32_t*>(&rcx12)) 
                    break;
                *reinterpret_cast<int32_t*>(&rcx12) = *reinterpret_cast<int32_t*>(&rcx12) - 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
                ++rdi13;
            } while (*rdi13);
            if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(~rcx12) + 57) > 0x400) 
                goto addr_140002791_4; else 
                goto addr_140002719_9;
        }
    }
    addr_140002798_10:
    *reinterpret_cast<int32_t*>(&rdx9) = r10d6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    fun_1400020b0(v2, *reinterpret_cast<int32_t*>(&rdx9), 3, r9_11);
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) - 8 + 8);
    goto addr_1400027b6_2;
    addr_140002719_9:
    r9_11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) + 32);
    *reinterpret_cast<int32_t*>(&rcx14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = 0;
    do {
        eax15 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx14) + reinterpret_cast<int64_t>("The variable '"));
        rcx14 = reinterpret_cast<struct s26*>(reinterpret_cast<uint64_t>(rcx14) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp3) + reinterpret_cast<uint64_t>(rcx14) + 31) = *reinterpret_cast<signed char*>(&eax15);
    } while (*reinterpret_cast<signed char*>(&eax15));
    rcx16 = 0xffffffffffffffff;
    rdi17 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp3) + 32);
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx16)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx16) = *reinterpret_cast<int32_t*>(&rcx16) - 1;
        ++rdi17;
    } while (v18);
    *reinterpret_cast<int32_t*>(&rdx19) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    do {
        eax20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(r8_7) + reinterpret_cast<int64_t>(rdx19));
        rdx19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdx19) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi17) + reinterpret_cast<int64_t>(rdx19) - 2) = *reinterpret_cast<signed char*>(&eax20);
    } while (*reinterpret_cast<signed char*>(&eax20));
    rcx21 = 0xffffffffffffffff;
    rdi22 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsp3) + 32);
    do {
        if (!*reinterpret_cast<int32_t*>(&rcx21)) 
            break;
        *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(&rcx21) - 1;
        ++rdi22;
    } while (v23);
    *reinterpret_cast<int32_t*>(&rcx24) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = 0;
    do {
        eax25 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>("' is being used without being initialized.") + reinterpret_cast<int64_t>(rcx24));
        rcx24 = reinterpret_cast<struct s27*>(reinterpret_cast<int64_t>(rcx24) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi22) + reinterpret_cast<int64_t>(rcx24) - 2) = *reinterpret_cast<signed char*>(&eax25);
    } while (*reinterpret_cast<signed char*>(&eax25));
    goto addr_140002798_10;
}

int64_t fun_1400027d0() {
    return 5;
}

int64_t fun_140002800(uint32_t ecx, int32_t edx) {
    int64_t rcx3;
    int64_t rax4;

    if (ecx > 4) {
        return 0xffffffff;
    } else {
        rcx3 = reinterpret_cast<int32_t>(ecx);
        *reinterpret_cast<int32_t*>(&rax4) = *reinterpret_cast<int32_t*>(0x140009010 + rcx3 * 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        *reinterpret_cast<int32_t*>(0x140009010 + rcx3 * 4) = edx;
        return rax4;
    }
}

int64_t fun_140002820(int64_t rcx) {
    int64_t rax2;

    rax2 = g1400096f8;
    g140009700 = 0;
    g1400096f8 = rcx;
    return rax2;
}

int64_t fun_140002900() {
    SetUnhandledExceptionFilter(fun_140002880);
    return 0;
}

void fun_140002ac4() {
    goto _encode_pointer;
}

int64_t __C_specific_handler = 0xb756;

void fun_140002bde() {
    goto __C_specific_handler;
}

void fun_140002dcc() {
    goto _CrtDbgReportW;
}

void fun_140002dc2() {
    goto 0x140002dc6;
}

void fun_140005d3f() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    signed char* rax16;
    signed char* rax17;
    signed char al18;
    signed char* rax19;
    signed char* rax20;
    signed char al21;
    signed char* rax22;
    signed char* rax23;
    signed char al24;
    signed char* rax25;
    signed char* rax26;
    signed char al27;
    signed char* rax28;
    signed char* rax29;
    signed char al30;
    signed char* rax31;
    signed char* rax32;
    signed char al33;
    signed char* rax34;
    signed char* rax35;
    signed char al36;
    signed char* rax37;
    signed char* rax38;
    signed char al39;
    signed char* rax40;
    signed char* rax41;
    signed char al42;
    signed char* rax43;
    signed char* rax44;
    signed char al45;
    signed char* rax46;
    signed char* rax47;
    signed char al48;
    signed char* rax49;
    signed char* rax50;
    signed char al51;
    signed char* rax52;
    signed char* rax53;
    signed char al54;
    signed char* rax55;
    signed char* rax56;
    signed char al57;
    signed char* rax58;
    signed char* rax59;
    signed char al60;
    signed char* rax61;
    signed char* rax62;
    signed char al63;
    signed char* rax64;
    signed char* rax65;
    signed char al66;
    signed char* rax67;
    signed char* rax68;
    signed char al69;
    signed char* rax70;
    signed char* rax71;
    signed char al72;
    signed char* rax73;
    signed char* rax74;
    signed char al75;
    signed char* rax76;
    signed char* rax77;
    signed char al78;
    signed char* rax79;
    signed char* rax80;
    signed char al81;
    signed char* rax82;
    signed char* rax83;
    signed char al84;
    signed char* rax85;
    signed char* rax86;
    signed char al87;
    signed char* rax88;
    signed char* rax89;
    signed char al90;
    signed char* rax91;
    signed char* rax92;
    signed char al93;
    signed char* rax94;
    signed char* rax95;
    signed char al96;
    signed char* rax97;
    signed char* rax98;
    signed char al99;
    signed char* rax100;
    signed char* rax101;
    signed char al102;
    signed char* rax103;
    signed char* rax104;
    signed char al105;
    signed char* rax106;
    signed char* rax107;
    signed char al108;
    signed char* rax109;
    signed char* rax110;
    signed char al111;
    signed char* rax112;
    signed char* rax113;
    signed char al114;
    signed char* rax115;
    signed char* rax116;
    signed char al117;
    signed char* rax118;
    signed char* rax119;
    signed char al120;
    signed char* rax121;
    signed char* rax122;
    signed char al123;
    signed char* rax124;
    signed char* rax125;
    signed char al126;
    signed char* rax127;
    signed char* rax128;
    signed char al129;
    signed char* rax130;
    signed char* rax131;
    signed char al132;
    signed char* rax133;
    signed char* rax134;
    signed char al135;
    signed char* rax136;
    signed char* rax137;
    signed char al138;
    signed char* rax139;
    signed char* rax140;
    signed char al141;
    signed char* rax142;
    signed char* rax143;
    signed char al144;
    signed char* rax145;
    signed char* rax146;
    signed char al147;
    signed char* rax148;
    signed char* rax149;
    signed char al150;
    signed char* rax151;
    signed char* rax152;
    signed char al153;
    signed char* rax154;
    signed char* rax155;
    signed char al156;
    signed char* rax157;
    signed char* rax158;
    signed char al159;
    signed char* rax160;
    signed char* rax161;
    signed char al162;
    signed char* rax163;
    signed char* rax164;
    signed char al165;
    signed char* rax166;
    signed char* rax167;
    signed char al168;
    signed char* rax169;
    signed char* rax170;
    signed char al171;
    signed char* rax172;
    signed char* rax173;
    signed char al174;
    signed char* rax175;
    signed char* rax176;
    signed char al177;
    signed char* rax178;
    signed char* rax179;
    signed char al180;
    signed char* rax181;
    signed char* rax182;
    signed char al183;
    signed char* rax184;
    signed char* rax185;
    signed char al186;
    signed char* rax187;
    signed char* rax188;
    signed char al189;
    signed char* rax190;
    signed char* rax191;
    signed char al192;
    signed char* rax193;
    signed char* rax194;
    signed char al195;
    signed char* rax196;
    signed char* rax197;
    signed char al198;
    signed char* rax199;
    signed char* rax200;
    signed char al201;
    signed char* rax202;
    signed char* rax203;
    signed char al204;
    signed char* rax205;
    signed char* rax206;
    signed char al207;
    signed char* rax208;
    signed char* rax209;
    signed char al210;
    signed char* rax211;
    signed char* rax212;
    signed char al213;
    signed char* rax214;
    signed char* rax215;
    signed char al216;
    signed char* rax217;
    signed char* rax218;
    signed char al219;
    signed char* rax220;
    signed char* rax221;
    signed char al222;
    signed char* rax223;
    signed char* rax224;
    signed char al225;
    signed char* rax226;
    signed char* rax227;
    signed char al228;
    signed char* rax229;
    signed char* rax230;
    signed char al231;
    signed char* rax232;
    signed char* rax233;
    signed char al234;
    signed char* rax235;
    signed char* rax236;
    signed char al237;
    signed char* rax238;
    signed char* rax239;
    signed char al240;
    signed char* rax241;
    signed char* rax242;
    signed char al243;
    signed char* rax244;
    signed char* rax245;
    signed char al246;
    signed char* rax247;
    signed char* rax248;
    signed char al249;
    signed char* rax250;
    signed char* rax251;
    signed char al252;
    signed char* rax253;
    signed char* rax254;
    signed char al255;
    signed char* rax256;
    signed char* rax257;
    signed char al258;
    signed char* rax259;
    signed char* rax260;
    signed char al261;
    signed char* rax262;
    signed char* rax263;
    signed char al264;
    signed char* rax265;
    signed char* rax266;
    signed char al267;
    signed char* rax268;
    signed char* rax269;
    signed char al270;
    signed char* rax271;
    signed char* rax272;
    signed char al273;
    signed char* rax274;
    signed char* rax275;
    signed char al276;
    signed char* rax277;
    signed char* rax278;
    signed char al279;
    signed char* rax280;
    signed char* rax281;
    signed char al282;
    signed char* rax283;
    signed char* rax284;
    signed char al285;
    signed char* rax286;
    signed char* rax287;
    signed char al288;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
    *rax19 = reinterpret_cast<signed char>(*rax20 + al21);
    *rax22 = reinterpret_cast<signed char>(*rax23 + al24);
    *rax25 = reinterpret_cast<signed char>(*rax26 + al27);
    *rax28 = reinterpret_cast<signed char>(*rax29 + al30);
    *rax31 = reinterpret_cast<signed char>(*rax32 + al33);
    *rax34 = reinterpret_cast<signed char>(*rax35 + al36);
    *rax37 = reinterpret_cast<signed char>(*rax38 + al39);
    *rax40 = reinterpret_cast<signed char>(*rax41 + al42);
    *rax43 = reinterpret_cast<signed char>(*rax44 + al45);
    *rax46 = reinterpret_cast<signed char>(*rax47 + al48);
    *rax49 = reinterpret_cast<signed char>(*rax50 + al51);
    *rax52 = reinterpret_cast<signed char>(*rax53 + al54);
    *rax55 = reinterpret_cast<signed char>(*rax56 + al57);
    *rax58 = reinterpret_cast<signed char>(*rax59 + al60);
    *rax61 = reinterpret_cast<signed char>(*rax62 + al63);
    *rax64 = reinterpret_cast<signed char>(*rax65 + al66);
    *rax67 = reinterpret_cast<signed char>(*rax68 + al69);
    *rax70 = reinterpret_cast<signed char>(*rax71 + al72);
    *rax73 = reinterpret_cast<signed char>(*rax74 + al75);
    *rax76 = reinterpret_cast<signed char>(*rax77 + al78);
    *rax79 = reinterpret_cast<signed char>(*rax80 + al81);
    *rax82 = reinterpret_cast<signed char>(*rax83 + al84);
    *rax85 = reinterpret_cast<signed char>(*rax86 + al87);
    *rax88 = reinterpret_cast<signed char>(*rax89 + al90);
    *rax91 = reinterpret_cast<signed char>(*rax92 + al93);
    *rax94 = reinterpret_cast<signed char>(*rax95 + al96);
    *rax97 = reinterpret_cast<signed char>(*rax98 + al99);
    *rax100 = reinterpret_cast<signed char>(*rax101 + al102);
    *rax103 = reinterpret_cast<signed char>(*rax104 + al105);
    *rax106 = reinterpret_cast<signed char>(*rax107 + al108);
    *rax109 = reinterpret_cast<signed char>(*rax110 + al111);
    *rax112 = reinterpret_cast<signed char>(*rax113 + al114);
    *rax115 = reinterpret_cast<signed char>(*rax116 + al117);
    *rax118 = reinterpret_cast<signed char>(*rax119 + al120);
    *rax121 = reinterpret_cast<signed char>(*rax122 + al123);
    *rax124 = reinterpret_cast<signed char>(*rax125 + al126);
    *rax127 = reinterpret_cast<signed char>(*rax128 + al129);
    *rax130 = reinterpret_cast<signed char>(*rax131 + al132);
    *rax133 = reinterpret_cast<signed char>(*rax134 + al135);
    *rax136 = reinterpret_cast<signed char>(*rax137 + al138);
    *rax139 = reinterpret_cast<signed char>(*rax140 + al141);
    *rax142 = reinterpret_cast<signed char>(*rax143 + al144);
    *rax145 = reinterpret_cast<signed char>(*rax146 + al147);
    *rax148 = reinterpret_cast<signed char>(*rax149 + al150);
    *rax151 = reinterpret_cast<signed char>(*rax152 + al153);
    *rax154 = reinterpret_cast<signed char>(*rax155 + al156);
    *rax157 = reinterpret_cast<signed char>(*rax158 + al159);
    *rax160 = reinterpret_cast<signed char>(*rax161 + al162);
    *rax163 = reinterpret_cast<signed char>(*rax164 + al165);
    *rax166 = reinterpret_cast<signed char>(*rax167 + al168);
    *rax169 = reinterpret_cast<signed char>(*rax170 + al171);
    *rax172 = reinterpret_cast<signed char>(*rax173 + al174);
    *rax175 = reinterpret_cast<signed char>(*rax176 + al177);
    *rax178 = reinterpret_cast<signed char>(*rax179 + al180);
    *rax181 = reinterpret_cast<signed char>(*rax182 + al183);
    *rax184 = reinterpret_cast<signed char>(*rax185 + al186);
    *rax187 = reinterpret_cast<signed char>(*rax188 + al189);
    *rax190 = reinterpret_cast<signed char>(*rax191 + al192);
    *rax193 = reinterpret_cast<signed char>(*rax194 + al195);
    *rax196 = reinterpret_cast<signed char>(*rax197 + al198);
    *rax199 = reinterpret_cast<signed char>(*rax200 + al201);
    *rax202 = reinterpret_cast<signed char>(*rax203 + al204);
    *rax205 = reinterpret_cast<signed char>(*rax206 + al207);
    *rax208 = reinterpret_cast<signed char>(*rax209 + al210);
    *rax211 = reinterpret_cast<signed char>(*rax212 + al213);
    *rax214 = reinterpret_cast<signed char>(*rax215 + al216);
    *rax217 = reinterpret_cast<signed char>(*rax218 + al219);
    *rax220 = reinterpret_cast<signed char>(*rax221 + al222);
    *rax223 = reinterpret_cast<signed char>(*rax224 + al225);
    *rax226 = reinterpret_cast<signed char>(*rax227 + al228);
    *rax229 = reinterpret_cast<signed char>(*rax230 + al231);
    *rax232 = reinterpret_cast<signed char>(*rax233 + al234);
    *rax235 = reinterpret_cast<signed char>(*rax236 + al237);
    *rax238 = reinterpret_cast<signed char>(*rax239 + al240);
    *rax241 = reinterpret_cast<signed char>(*rax242 + al243);
    *rax244 = reinterpret_cast<signed char>(*rax245 + al246);
    *rax247 = reinterpret_cast<signed char>(*rax248 + al249);
    *rax250 = reinterpret_cast<signed char>(*rax251 + al252);
    *rax253 = reinterpret_cast<signed char>(*rax254 + al255);
    *rax256 = reinterpret_cast<signed char>(*rax257 + al258);
    *rax259 = reinterpret_cast<signed char>(*rax260 + al261);
    *rax262 = reinterpret_cast<signed char>(*rax263 + al264);
    *rax265 = reinterpret_cast<signed char>(*rax266 + al267);
    *rax268 = reinterpret_cast<signed char>(*rax269 + al270);
    *rax271 = reinterpret_cast<signed char>(*rax272 + al273);
    *rax274 = reinterpret_cast<signed char>(*rax275 + al276);
    *rax277 = reinterpret_cast<signed char>(*rax278 + al279);
    *rax280 = reinterpret_cast<signed char>(*rax281 + al282);
    *rax283 = reinterpret_cast<signed char>(*rax284 + al285);
    *rax286 = reinterpret_cast<signed char>(*rax287 + al288);
}

void fun_140001a1a() {
    goto fread;
}

void fun_14000346c() {
    goto RtlCaptureContext;
}

struct s0* fun_140002050(void* rcx, uint32_t edx) {
    struct s0* rax3;

    if (edx > 4) {
        rax3 = fun_1400020b0(rcx, 1, 5, "Unknown Runtime Check Error\n\r");
    } else {
        rax3 = reinterpret_cast<struct s0*>(static_cast<int64_t>(reinterpret_cast<int32_t>(edx)));
        if (*reinterpret_cast<int32_t*>(0x140000000 + reinterpret_cast<uint64_t>(rax3) * 4 + 0x9010) != -1) {
            goto fun_1400020b0;
        }
    }
    return rax3;
}

int64_t fun_1400027e0(uint32_t ecx) {
    if (ecx > 4) {
        return 0;
    } else {
        return *reinterpret_cast<int64_t*>(0x140007098 + reinterpret_cast<int32_t>(ecx) * 8);
    }
}

int64_t _configthreadlocale = 0xb6d4;

void fun_140002918() {
    goto _configthreadlocale;
}

void fun_140003436() {
    goto _decode_pointer;
}

int64_t __set_app_type = 0xb726;

void fun_140002aca() {
    goto __set_app_type;
}

void fun_140001a20() {
    goto fopen;
}

void fun_140003472() {
    goto RaiseException;
}

int64_t __setusermatherr = 0xb6ea;

void fun_14000291e() {
    goto __setusermatherr;
}

void fun_14000343c() {
    goto Sleep;
}

void fun_140002bea() {
    goto _exit;
}

void fun_140001a26() {
    goto perror;
}

void fun_140003478() {
    goto DebugBreak;
}

int64_t fun_140002930(int64_t rcx) {
    return 0;
}

void fun_140003442() {
    goto TerminateProcess;
}

void fun_140002bf0() {
    goto _cexit;
}

void fun_140001a2c() {
    goto _stat64i32;
}

void fun_14000347e() {
    goto WideCharToMultiByte;
}

void fun_140003448() {
    goto GetCurrentProcess;
}

void fun_140002bf6() {
    goto exit;
}

int32_t* _fmode = reinterpret_cast<int32_t*>(0xb70a);

int32_t g14000970c;

int32_t* _commode = reinterpret_cast<int32_t*>(0xb6fe);

int32_t g140009708;

int32_t g140009028 = 1;

int32_t g140009024 = -2;

int64_t fun_140001a40() {
    int32_t eax1;
    int64_t rax2;
    int64_t rax3;
    int32_t* rcx4;
    int32_t eax5;
    int32_t* rcx6;
    int32_t eax7;
    int1_t zf8;
    int1_t zf9;

    eax1 = fun_140001d80();
    g14000915c = eax1;
    __set_app_type(1);
    rax2 = reinterpret_cast<int64_t>(_encode_pointer(-1));
    g140009740 = rax2;
    rax3 = g140009740;
    g140009758 = rax3;
    rcx4 = _fmode;
    eax5 = g14000970c;
    *rcx4 = eax5;
    rcx6 = _commode;
    eax7 = g140009708;
    *rcx6 = eax7;
    fun_140002950();
    fun_140002940();
    zf8 = g140009028 == 0;
    if (zf8) {
        __setusermatherr(fun_140002930);
    }
    zf9 = g140009024 == -1;
    if (zf9) {
        _configthreadlocale(0xffffffff);
    }
    return 0;
}

void fun_140003484() {
    goto MultiByteToWideChar;
}

void fun_14000344e() {
    goto UnhandledExceptionFilter;
}

void fun_140002bfc() {
    goto _CrtSetCheckCount;
}

void fun_14000348a() {
    goto lstrlenA;
}

void fun_140003454() {
    goto SetUnhandledExceptionFilter;
}

void fun_140003490() {
    goto GetProcAddress;
}

void fun_14000345a() {
    goto IsDebuggerPresent;
}

void fun_140003496() {
    goto LoadLibraryA;
}

void fun_14000349c() {
    goto QueryPerformanceCounter;
}

void fun_1400034a2() {
    goto GetTickCount;
}

void fun_1400034a8() {
    goto GetCurrentThreadId;
}

void fun_1400034ae() {
    goto GetCurrentProcessId;
}

void fun_1400034b4() {
    goto GetSystemTimeAsFileTime;
}

void fun_1400034ba() {
    goto HeapFree;
}

void fun_1400034c0() {
    goto HeapAlloc;
}

void fun_1400034c6() {
    goto GetProcessHeap;
}

void fun_1400034cc() {
    goto GetModuleFileNameW;
}

void fun_1400034d2() {
    goto VirtualQuery;
}

void fun_1400034d8() {
    goto FreeLibrary;
}

struct s28 {
    signed char[72] pad72;
    int32_t f72;
    signed char[4] pad80;
    int32_t** f80;
};

void fun_140004c90(int32_t** rcx, struct s28* rdx) {
    int32_t** rdx3;
    int64_t rcx4;

    rdx->f80 = rcx;
    rdx->f72 = **rdx->f80;
    rdx3 = rdx->f80;
    *reinterpret_cast<int32_t*>(&rcx4) = rdx->f72;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    fun_140002be4(rcx4, rdx3);
    return;
}

void fun_140004cc0() {
    void* rdx1;
    void* r8_2;

    fun_140003424(8, rdx1, r8_2);
    return;
}

struct s29 {
    signed char[56] pad56;
    int32_t** f56;
    int32_t f64;
    signed char[4] pad72;
    int32_t f72;
};

int64_t fun_140004ce0(int32_t** rcx, struct s29* rdx) {
    int64_t rax3;

    rdx->f56 = rcx;
    rdx->f64 = **rdx->f56;
    if (rdx->f64 != 0xc0000005) {
        rdx->f72 = 0;
    } else {
        rdx->f72 = 1;
    }
    *reinterpret_cast<int32_t*>(&rax3) = rdx->f72;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    return rax3;
}
