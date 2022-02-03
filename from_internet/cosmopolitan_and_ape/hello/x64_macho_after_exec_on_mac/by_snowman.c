
struct s0 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
    uint64_t f8;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    unsigned char f4;
};

unsigned char g404000 = 0;

void fun_4026e7();

void fun_401636(struct s0* rdi, int64_t rsi);

void fun_4017ec();

void fun_4017be();

int64_t fun_402615();

int64_t g40600c = 0;

uint64_t g404688 = 0;

int32_t g406004 = 0;

int64_t g406018 = 0;

int32_t g406020 = 0;

struct s4 {
    signed char[16] pad16;
    uint32_t f10;
    uint32_t f14;
    signed char[8] pad32;
    int32_t f20;
};

int64_t fun_402115(struct s4* rdi);

uint32_t g404630 = 0;

struct s5 {
    signed char f0;
    signed char[3] pad4;
    int32_t f4;
    uint32_t f8;
    int32_t fc;
    uint32_t f10;
    uint32_t f14;
    int64_t f18;
    uint32_t f20;
    signed char[12] pad48;
    int64_t f30;
};

uint32_t fun_402083(struct s5* rdi);

int64_t g406030 = 0;

struct s5* g406038 = reinterpret_cast<struct s5*>(0);

void fun_401297() {
    int64_t v1;
    struct s0* rdi2;
    int64_t rsi3;
    struct s1* rdi4;
    struct s2* rdi5;
    struct s3* rdi6;
    int64_t rax7;
    int64_t v8;
    int1_t below_or_equal9;
    signed char ch10;
    signed char cl11;
    unsigned char v12;
    int64_t* r15_13;
    uint64_t rax14;
    uint64_t* rdi15;
    int32_t ecx16;
    uint64_t rdx17;
    uint64_t r8_18;
    uint64_t r8_19;
    uint64_t r8_20;
    int32_t edx21;
    int64_t rdx22;
    int1_t zf23;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rdi2) = 0x404000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi3) = 0x402e68;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
    while (1) {
        addr_4012bf_2:
        rdi2->f0 = __intrinsic();
        rdi4 = reinterpret_cast<struct s1*>(&rdi2->f4);
        rdi4->f0 = __intrinsic();
        rdi5 = reinterpret_cast<struct s2*>(&rdi4->f4);
        rdi5->f0 = __intrinsic();
        rdi6 = reinterpret_cast<struct s3*>(&rdi5->f4);
        rdi6->f0 = __intrinsic();
        rdi2 = reinterpret_cast<struct s0*>(&rdi6->f4);
        rsi3 = rsi3 + 4 + 4 + 4 + 4;
        while (rax7 = v8, !!*reinterpret_cast<int32_t*>(&rax7)) {
            below_or_equal9 = *reinterpret_cast<unsigned char*>(&rax7) <= g404000;
            if (below_or_equal9) 
                goto addr_4012bf_2;
            ++rdi2;
        }
        break;
    }
    ch10 = 17;
    do {
        __asm__("lodsb ");
        cl11 = 0;
        __asm__("lodsb ");
        do {
            rdi2->f0 = reinterpret_cast<unsigned char>(fun_4026e7);
            rdi2 = reinterpret_cast<struct s0*>(&rdi2->f8);
            rsi3 = rsi3 + 8;
            cl11 = reinterpret_cast<signed char>(cl11 - 1);
        } while (cl11);
        ch10 = reinterpret_cast<signed char>(ch10 - 1);
    } while (ch10);
    fun_401636(rdi2, rsi3 + 6);
    fun_4017ec();
    fun_4017be();
    fun_4017be();
    if (rdi2->f0 & 8) {
        v12 = reinterpret_cast<unsigned char>(8);
    } else {
        if (!(rdi2->f0 & 32)) {
            if (!(rdi2->f0 & 4)) {
                if (!*r15_13) {
                }
            }
        }
    }
    rdi2->f0 = v12;
    rax14 = reinterpret_cast<uint64_t>(fun_402615);
    rdi2->f8 = reinterpret_cast<uint64_t>(fun_402615);
    *reinterpret_cast<int32_t*>(&rdi15) = 0x404648;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
    while (reinterpret_cast<uint64_t>(rdi15) < 0x404690) {
        ecx16 = 0;
        *reinterpret_cast<int32_t*>(&rdx17) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
        do {
            __asm__("lodsb ");
            r8_18 = rax14;
            *reinterpret_cast<uint32_t*>(&r8_19) = *reinterpret_cast<uint32_t*>(&r8_18) & 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
            r8_20 = r8_19 << *reinterpret_cast<unsigned char*>(&ecx16);
            ecx16 = ecx16 + 7;
            rdx17 = rdx17 | r8_20;
        } while (*reinterpret_cast<signed char*>(&rax14) < reinterpret_cast<signed char>(0));
        if (*reinterpret_cast<unsigned char*>(&rax14) & 64) {
            rdx17 = rdx17 | 0xffffffffffffffff << *reinterpret_cast<unsigned char*>(&ecx16);
        }
        rax14 = rdx17;
        if (*rdi15) {
            rax14 = *rdi15;
        }
        *rdi15 = rax14;
        ++rdi15;
    }
    g40600c = 1;
    edx21 = *reinterpret_cast<int32_t*>(&g404688);
    g406004 = edx21;
    g406018 = 0x405000;
    g406020 = 0x1000;
    rdx22 = reinterpret_cast<int64_t>(fun_402115);
    zf23 = (*reinterpret_cast<unsigned char*>(&g404630) & 2) == 0;
    if (zf23) {
        rdx22 = reinterpret_cast<int64_t>(fun_402083);
    }
    g406030 = rdx22;
    g406038 = reinterpret_cast<struct s5*>(0x406000);
    goto v1;
}

int64_t g403050 = 0x2da6;

int64_t g4076a0 = 0;

struct s6 {
    struct s6* f0;
    signed char[4] pad8;
    struct s6* f8;
};

struct s6** g4076b0 = reinterpret_cast<struct s6**>(0);

int64_t g4076a8 = 0;

int32_t g4076c8 = 0;

int32_t g4076e0 = 0;

int32_t g4076f8 = 0;

int64_t g4076b8 = 0;

int64_t g4076d0 = 0;

int64_t g4076e8 = 0;

void fun_401636(struct s0* rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;

    rbp3 = g403050;
    g4076a0 = 3;
    g4076b0 = reinterpret_cast<struct s6**>(0x4076b8);
    g4076a8 = 16;
    g4076c8 = 1;
    g4076e0 = 1;
    g4076f8 = 1;
    rax4 = reinterpret_cast<int64_t>(rbp3());
    g4076b8 = rax4;
    rax5 = reinterpret_cast<int64_t>(rbp3());
    g4076d0 = rax5;
    rax6 = reinterpret_cast<int64_t>(rbp3());
    g4076e8 = rax6;
    return;
}

void fun_4017ec() {
    int64_t rcx1;
    signed char tmp8_2;
    signed char al3;
    signed char* rdi4;

    *reinterpret_cast<int32_t*>(&rcx1) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    while (tmp8_2 = *reinterpret_cast<signed char*>(&rcx1), *reinterpret_cast<signed char*>(&rcx1) = al3, al3 = tmp8_2, !rcx1) {
        do {
            *rdi4 = al3;
            ++rdi4;
            *reinterpret_cast<int32_t*>(&rcx1) = *reinterpret_cast<int32_t*>(&rcx1) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
        } while (*reinterpret_cast<int32_t*>(&rcx1));
    }
    return;
}

unsigned char g404035 = 0;

void fun_4017be() {
    unsigned char r8b1;
    int1_t zf2;
    int64_t* rdi3;
    int64_t rdx4;
    int64_t rsi5;
    int32_t ecx6;
    int64_t rax7;
    int1_t zf8;
    int64_t rdx9;

    r8b1 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf2)) << 1);
    do {
        __asm__("lodsb ");
        *rdi3 = rdx4;
        ++rdi3;
        rsi5 = rsi5 + 8;
        --ecx6;
    } while (ecx6);
    *reinterpret_cast<int32_t*>(&rax7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    zf8 = (g404035 & 2) == 0;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf8)) | r8b1);
    *reinterpret_cast<unsigned char*>(&rax7) = *reinterpret_cast<unsigned char*>(rsi5 + rax7);
    *rdi3 = rax7 + rdx9;
    __asm__("lodsq ");
    return;
}

int64_t fun_401e0a(signed char* rdi);

struct s7 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s8 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_4029a1(struct s7* rdi, struct s8* rsi);

int32_t fun_40141f(int64_t rdi, void* rsi, int64_t* rdx) {
    fun_401e0a(fun_4029a1);
    return 0;
}

unsigned char fun_40245f(int32_t edi, int32_t esi);

int32_t fun_401dd2(struct s6* rdi, int64_t rsi);

uint32_t g407838 = 0;

int32_t fun_401609();

uint32_t fun_40156c(int32_t edi) {
    uint32_t r13d2;
    uint32_t r13d3;
    unsigned char al4;
    struct s6** tmp64_5;
    struct s6* rdi6;
    int32_t eax7;
    uint1_t zf8;
    uint32_t ebx9;
    int32_t eax10;
    uint32_t v11;

    r13d2 = g404630;
    r13d3 = r13d2 & 4;
    if (r13d3) {
        r13d3 = 0;
        al4 = fun_40245f(edi, 1);
        if (!al4) {
            addr_4015f8_3:
            return r13d3;
        } else {
            tmp64_5 = g4076b0 + edi * 6;
            rdi6 = *tmp64_5;
            eax7 = fun_401dd2(rdi6, 1);
            zf8 = reinterpret_cast<uint1_t>(eax7 == 2);
        }
    } else {
        ebx9 = g407838;
        eax10 = fun_401609();
        if (!(eax10 + 1)) {
            g407838 = ebx9;
            goto addr_4015f8_3;
        } else {
            zf8 = reinterpret_cast<uint1_t>((v11 & 0xf000) == 0x2000);
        }
    }
    r13d3 = zf8;
    goto addr_4015f8_3;
}

struct s6* g4060a0 = reinterpret_cast<struct s6*>(0);

struct s9 {
    struct s6* f0;
    signed char[12] pad16;
    struct s6* f10;
    signed char[4] pad24;
    void* f18;
    uint64_t f20;
};

struct s6* fun_0(struct s6* rdi, ...);

int64_t fun_401836(struct s6* rdi, void* rsi, uint64_t rdx);

int64_t fun_40215b(struct s6* rdi, void* rsi, uint64_t rdx) {
    struct s6* r13_4;
    void* r12_5;
    struct s6* rbx6;
    int64_t rax7;
    struct s9* rbx8;
    int64_t rax9;
    struct s6* rax10;

    r13_4 = rdi;
    r12_5 = rsi;
    rbx6 = g4060a0;
    if (!rbx6) {
        rbx6 = reinterpret_cast<struct s6*>(0x4060a8);
        g4060a0 = reinterpret_cast<struct s6*>(0x4060a8);
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<struct s6**>(&rbx6->f0) == 0xffffffff)) {
        addr_4021c2_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(~reinterpret_cast<uint32_t>(*reinterpret_cast<struct s6**>(&rbx6->f0)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        *reinterpret_cast<struct s6**>(&rbx6->f0) = *reinterpret_cast<struct s6**>(&rbx6->f0);
        rbx8 = reinterpret_cast<struct s9*>(reinterpret_cast<uint32_t>(rbx6) + reinterpret_cast<uint64_t>(rax7 * 24));
        *reinterpret_cast<int32_t*>(&rax9) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        rbx8->f10 = r13_4;
        rbx8->f18 = r12_5;
        rbx8->f20 = rdx;
    } else {
        if (1 || (*reinterpret_cast<int32_t*>(&rsi) = 0x310, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0, *reinterpret_cast<int32_t*>(&rdi) = 1, *reinterpret_cast<int32_t*>(&rdi + 1) = 0, rax10 = fun_0(1, 1), rax10 == 0)) {
            rax9 = fun_401836(rdi, rsi, rdx);
        } else {
            rax10->f8 = rbx6;
            g4060a0 = rax10;
            rbx6 = rax10;
            goto addr_4021c2_4;
        }
    }
    return rax9;
}

int32_t fun_4025b0();

struct s10 {
    uint16_t f0;
    signed char[2] pad4;
    uint16_t f4;
    uint16_t f6;
    signed char[8] pad16;
    int32_t f10;
    int32_t f14;
    uint16_t f18;
    signed char[2] pad28;
    int32_t f1c;
    int32_t f20;
    signed char[4] pad40;
    int32_t f28;
    signed char[4] pad48;
    int32_t f30;
    signed char[4] pad56;
    int32_t f38;
    signed char[4] pad64;
    int32_t f40;
    signed char[4] pad72;
    int32_t f48;
    signed char[4] pad80;
    int32_t f50;
    signed char[4] pad88;
    int32_t f58;
    signed char[4] pad96;
    int32_t f60;
    signed char[4] pad104;
    int32_t f68;
    signed char[4] pad112;
    int32_t f70;
    signed char[4] pad120;
    int32_t f78;
    signed char[4] pad128;
    int32_t f80;
};

void fun_40168d(struct s10* rdi);

int32_t fun_401609() {
    int32_t eax1;
    struct s10* rsi2;

    eax1 = fun_4025b0();
    if (eax1 != -1) {
        fun_40168d(rsi2);
        eax1 = eax1;
    }
    return eax1;
}

int64_t g403040 = 0x2d88;

int32_t fun_401dd2(struct s6* rdi, int64_t rsi) {
    int32_t eax3;

    eax3 = reinterpret_cast<int32_t>(g403040());
    return eax3;
}

void fun_40168d(struct s10* rdi) {
    uint32_t eax2;
    int32_t r12_3;
    uint16_t r14d4;
    int32_t r13_5;
    int32_t r11_6;
    int32_t rbx7;
    int32_t r10_8;
    int32_t rsi9;
    int32_t r15_10;
    int32_t rcx11;
    int32_t rdx12;
    int32_t rax13;
    int32_t r9_14;
    int32_t r8_15;
    int32_t r14_16;
    uint16_t r13d17;
    int32_t r10_18;
    uint16_t r15_19;
    int32_t r12_20;
    int32_t r11_21;
    int32_t rbx22;

    if (!rdi) {
        return;
    }
    eax2 = g404630;
    if (!(*reinterpret_cast<unsigned char*>(&eax2) & 8)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax2) & 32)) {
            if (!(*reinterpret_cast<unsigned char*>(&eax2) & 16)) {
                addr_4017b2_6:
                return;
            } else {
                r12_3 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f1c));
                r14d4 = rdi->f0;
                r13_5 = rdi->f14;
                r11_6 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f60));
                rbx7 = rdi->f50;
                r10_8 = rdi->f58;
                rsi9 = rdi->f30;
                rdi->f0 = reinterpret_cast<uint16_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4)));
                r15_10 = rdi->f10;
                (&r15_10)[1] = 0;
                rcx11 = rdi->f38;
                rdx12 = rdi->f40;
                rax13 = rdi->f48;
                r9_14 = rdi->f20;
                r8_15 = rdi->f28;
                rdi->f18 = r14d4;
                rdi->f10 = r15_10;
                rdi->f1c = r13_5;
                rdi->f28 = r12_3;
            }
        } else {
            r11_6 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f80));
            rbx7 = rdi->f70;
            r10_8 = rdi->f78;
            r9_14 = rdi->f30;
            r8_15 = rdi->f38;
            rsi9 = rdi->f40;
            rcx11 = rdi->f48;
            rdx12 = rdi->f50;
            rax13 = rdi->f58;
            rdi->f18 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(rdi->f18));
        }
        rdi->f30 = rbx7;
        rdi->f38 = r11_6;
        rdi->f40 = r10_8;
    } else {
        *reinterpret_cast<uint32_t*>(&r14_16) = rdi->f6;
        (&r14_16)[1] = 0;
        r13d17 = reinterpret_cast<uint16_t>(static_cast<uint32_t>(rdi->f4));
        r10_18 = reinterpret_cast<int32_t>(static_cast<int64_t>(rdi->f70));
        r15_19 = reinterpret_cast<uint16_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0)));
        r12_20 = rdi->f10;
        r11_21 = rdi->f60;
        r8_15 = rdi->f28;
        rdi->f28 = reinterpret_cast<int32_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18)));
        rbx22 = rdi->f68;
        r9_14 = rdi->f20;
        rsi9 = rdi->f30;
        rcx11 = rdi->f38;
        rdx12 = rdi->f40;
        rax13 = rdi->f48;
        rdi->f0 = r15_19;
        rdi->f10 = r14_16;
        rdi->f18 = r13d17;
        rdi->f1c = r12_20;
        rdi->f30 = r11_21;
        rdi->f38 = r10_18;
        rdi->f40 = rbx22;
    }
    rdi->f48 = r9_14;
    rdi->f50 = r8_15;
    rdi->f58 = rsi9;
    rdi->f60 = rcx11;
    rdi->f68 = rdx12;
    rdi->f70 = rax13;
    goto addr_4017b2_6;
}

struct s11 {
    struct s11* f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_401aa3(struct s11* rdi);

void fun_401ace(struct s11* rdi, uint32_t* rsi);

int32_t fun_401afe(struct s11* rdi, void* rsi, struct s11* rdx, int64_t* rcx, uint64_t r8, void* r9) {
    struct s11* r11_7;
    struct s11* r9_8;
    void* r13_9;
    uint64_t rbx10;
    int64_t* v11;
    uint64_t v12;
    void* v13;
    void* v14;
    int32_t v15;
    int64_t rax16;
    uint32_t v17;
    void* rax18;
    int32_t r14d19;
    uint32_t* rsi20;
    uint32_t v21;
    uint64_t r12_22;
    int32_t v23;
    uint64_t r10_24;
    int32_t v25;
    uint64_t rax26;
    uint64_t r14_27;
    uint64_t r10_28;
    uint64_t r12_29;
    void* r11_30;
    void* rax31;
    uint64_t r8_32;

    r11_7 = rdx;
    r9_8 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 80);
    r13_9 = rsi;
    *reinterpret_cast<int32_t*>(&rbx10) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx10) + 4) = 0;
    v11 = rcx;
    v12 = r8;
    v13 = rsi;
    v14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi) + reinterpret_cast<uint16_t>(rdx));
    fun_401aa3(r9_8);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_401bb7_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_401bb7_5;
            fun_401aa3(r9_8);
        }
        break;
        addr_401bb7_5:
        ++rbx10;
        if (rbx10 < v12) {
            rax18 = v13;
            if (reinterpret_cast<uint64_t>(rax18) >= reinterpret_cast<uint64_t>(v14)) {
                *reinterpret_cast<int32_t*>(&rax18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            }
            *reinterpret_cast<void**>(v11 + rbx10 - 1) = rax18;
        }
        r14d19 = 0;
        while (*reinterpret_cast<uint32_t*>(&rsi20) = v21, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rsi20)) {
            if (!*reinterpret_cast<unsigned char*>(&r14d19) && *reinterpret_cast<uint32_t*>(&rsi20) <= 32) {
                if (!static_cast<int1_t>(0x100002600 >> reinterpret_cast<uint64_t>(rsi20))) 
                    goto addr_401cd6_15; else 
                    goto addr_401bf7_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_401aa3(r9_8);
                }
                *reinterpret_cast<int32_t*>(&r10_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = 0;
                while (v25 == 34) {
                    fun_401aa3(r9_8);
                    ++r10_24;
                }
                rax26 = r12_22;
                if (!r10_24) 
                    goto addr_401c3e_25;
            } else {
                addr_401cd6_15:
                fun_401ace(r9_8, rsi20);
                fun_401aa3(r9_8);
                continue;
            }
            while (rax26 > 1) {
                fun_401ace(r9_8, 92);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_401c93_29;
            fun_401ace(r9_8, 34);
            --r10_24;
            if (!r10_24) 
                continue;
            addr_401c93_29:
            *reinterpret_cast<int32_t*>(&r14_27) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = 0;
            r10_28 = r10_24 - reinterpret_cast<uint1_t>(r10_24 < static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d19) < 1)));
            r12_29 = r10_28 + 1;
            while (r12_29 >= r14_27) {
                r14_27 = r14_27 + 3;
                fun_401ace(r9_8, 34);
            }
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r10_28 % 3 == 0);
            continue;
            addr_401c3e_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_401ace(r9_8, 92);
            }
        }
        addr_401ceb_35:
        fun_401ace(r9_8, 0);
        continue;
        addr_401bf7_16:
        goto addr_401ceb_35;
    }
    fun_401ace(r9_8, 0);
    if (r11_7) {
        r11_30 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(r11_7) - 1);
        rax31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(v13) - reinterpret_cast<uint64_t>(r13_9));
        if (reinterpret_cast<uint64_t>(rax31) > reinterpret_cast<uint64_t>(r11_30)) {
            rax31 = r11_30;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r13_9) + reinterpret_cast<uint64_t>(rax31)) = 0;
    }
    if (v12) {
        r8_32 = v12 - 1;
        if (r8_32 > rbx10) {
            r8_32 = rbx10;
        }
        v11[r8_32] = 0;
    }
    return *reinterpret_cast<int32_t*>(&rbx10);
}

uint64_t fun_40263c(uint32_t edi, uint32_t* rsi, struct s11* rdx, signed char* rcx) {
    uint64_t rdi5;
    uint64_t rax6;
    int32_t ecx7;
    uint32_t edx8;

    *reinterpret_cast<uint32_t*>(&rdi5) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdi5) > 0x7f) {
        __asm__("bsr ecx, edi");
        ecx7 = *reinterpret_cast<int32_t*>(0x4029c3 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
        do {
            edx8 = *reinterpret_cast<uint32_t*>(&rdi5);
            *reinterpret_cast<uint32_t*>(&rdi5) = *reinterpret_cast<uint32_t*>(&rdi5) >> 6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&rax6) = reinterpret_cast<unsigned char>(0x80 | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx8) & 63));
            rax6 = rax6 << 8;
            *reinterpret_cast<signed char*>(&ecx7) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx7) - 1);
        } while (*reinterpret_cast<signed char*>(&ecx7));
        *reinterpret_cast<unsigned char*>(&rax6) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx7) + 1)));
    }
    return rax6 | rdi5;
}

uint32_t fun_40262d(struct s11* rdi, uint32_t* rsi, struct s11* rdx, signed char* rcx, uint64_t r8, ...);

void fun_401aa3(struct s11* rdi) {
    struct s11* rdi2;
    uint32_t eax3;
    signed char* rcx4;
    uint64_t r8_5;
    uint32_t eax6;
    void* rax7;

    rdi2 = *reinterpret_cast<struct s11**>(&rdi->f0);
    eax3 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s11**>(&rdi2->f0));
    if (*reinterpret_cast<uint16_t*>(&eax3) > 0xd7ff) {
        eax6 = fun_40262d(rdi2, &rdi->f18, rdi, rcx4, r8_5);
    } else {
        rdi->f18 = eax3;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    *reinterpret_cast<struct s11**>(&rdi->f0) = reinterpret_cast<struct s11*>(reinterpret_cast<uint16_t>(*reinterpret_cast<struct s11**>(&rdi->f0)) + (reinterpret_cast<int64_t>(rax7) + reinterpret_cast<int64_t>(rax7)));
    return;
}

void fun_401ace(struct s11* rdi, uint32_t* rsi) {
    struct s11* rdx3;
    signed char* r8_4;
    uint64_t rax5;
    signed char* rcx6;
    signed char* rcx7;

    rdx3 = rdi;
    r8_4 = rdx3->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rsi)));
    if (*reinterpret_cast<uint32_t*>(&rsi) > 0x7f) {
        rax5 = fun_40263c(*reinterpret_cast<uint32_t*>(&rsi), rsi, rdx3, rcx6);
    }
    do {
        rcx7 = rdx3->f8;
        if (reinterpret_cast<uint64_t>(r8_4) <= reinterpret_cast<uint64_t>(rcx7)) 
            break;
        rdx3->f8 = rcx7 + 1;
        *rcx7 = *reinterpret_cast<signed char*>(&rax5);
        rax5 = rax5 >> 8;
    } while (rax5);
    return;
}

uint32_t fun_401f6e(struct s5* rdi, uint32_t esi) {
    int64_t rax3;

    if (!1) {
    }
    *reinterpret_cast<uint32_t*>(&rax3) = rdi->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax3) = 0xffffffff;
    }
    rdi->f8 = *reinterpret_cast<uint32_t*>(&rax3);
    if (!1) {
        g407838 = 0xffffffff;
    }
    return 0xffffffff;
}

uint32_t fun_401fa1(struct s5* rdi) {
    uint32_t eax2;

    eax2 = 0;
    if (reinterpret_cast<int32_t>(rdi->f8) >= reinterpret_cast<int32_t>(0)) {
        eax2 = rdi->f8;
    }
    return eax2;
}

int32_t fun_401f97(struct s5* rdi) {
    int32_t eax2;

    eax2 = 0;
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(rdi->f8 == 0xffffffff);
    return eax2;
}

uint32_t fun_401f76(struct s5* rdi, uint32_t esi);

uint64_t g406040 = 0;

struct s5** g406050 = reinterpret_cast<struct s5**>(0);

uint32_t fun_401faf(struct s5* rdi) {
    uint32_t r12d2;
    uint64_t rax3;
    int1_t zf4;
    uint32_t eax5;
    uint32_t eax6;
    uint64_t rax7;
    uint64_t r13_8;
    struct s5** rax9;
    struct s5* rdi10;
    uint32_t eax11;

    if (rdi) {
        r12d2 = 0;
        if (rdi->fc == -1 || (*reinterpret_cast<int32_t*>(&rax3) = rdi->f4, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0, zf4 = (g404688 & rax3) == 0, zf4)) {
            addr_40204f_3:
            return r12d2;
        } else {
            r12d2 = rdi->f8;
            if (r12d2) {
                if (r12d2 == 0xffffffff) {
                    r12d2 = 0;
                    goto addr_40204f_3;
                } else {
                    eax5 = fun_401f76(rdi, r12d2);
                    r12d2 = eax5;
                    goto addr_40204f_3;
                }
            } else {
                while (rdi->f10 != rdi->f14) {
                    eax6 = fun_402083(rdi);
                    if (eax6 == 0xffffffff) 
                        goto addr_401fee_10;
                    rdi = rdi;
                    r12d2 = r12d2 + eax6;
                }
                goto addr_40204f_3;
            }
        }
    } else {
        rax7 = g406040;
        r12d2 = 0;
        r13_8 = rax7 - 1;
        while (r13_8 != 0xffffffffffffffff) {
            rax9 = g406050;
            rdi10 = rax9[r13_8];
            if (rdi10) {
                eax11 = fun_401faf(rdi10);
                if (eax11 == 0xffffffff) 
                    goto addr_401fee_10;
                r12d2 = r12d2 + eax11;
            }
            --r13_8;
        }
        goto addr_40204f_3;
    }
    addr_401fee_10:
    r12d2 = 0xffffffff;
    goto addr_40204f_3;
}

struct s6* fun_40247a(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx);

uint32_t fun_402150(struct s5* rdi);

uint32_t fun_402083(struct s5* rdi) {
    int64_t rsi2;
    uint32_t ebx3;
    uint32_t ebx4;
    int64_t rsi5;
    int32_t edi6;
    int64_t rdx7;
    int64_t rcx8;
    struct s6* rax9;
    int64_t rcx10;
    uint32_t eax11;

    *reinterpret_cast<uint32_t*>(&rsi2) = rdi->f10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
    ebx3 = rdi->f14;
    if (*reinterpret_cast<uint32_t*>(&rsi2) >= ebx3) {
        ebx3 = rdi->f20;
    }
    ebx4 = ebx3 - *reinterpret_cast<uint32_t*>(&rsi2);
    rsi5 = rsi2 + rdi->f18;
    edi6 = rdi->fc;
    *reinterpret_cast<uint32_t*>(&rdx7) = ebx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    rax9 = fun_40247a(edi6, rsi5, rdx7, rcx8);
    if (!reinterpret_cast<int1_t>(rax9 == 0xffffffffffffffff)) {
        *reinterpret_cast<uint32_t*>(&rcx10) = rdi->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
        rdi->f10 = *reinterpret_cast<int32_t*>(&rax9) + rdi->f10 & static_cast<uint32_t>(rcx10 - 1);
        eax11 = ebx4;
    } else {
        eax11 = fun_402150(rdi);
    }
    return eax11;
}

uint32_t fun_401f76(struct s5* rdi, uint32_t esi) {
    int64_t rax3;

    if (!esi) {
        esi = 0xffffffff;
    }
    *reinterpret_cast<uint32_t*>(&rax3) = rdi->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax3) = esi;
    }
    rdi->f8 = *reinterpret_cast<uint32_t*>(&rax3);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi == 0))) {
        g407838 = esi;
    }
    return 0xffffffff;
}

struct s12 {
    int64_t f0;
    int32_t f8;
};

struct s6* fun_401d0b(struct s6** rdi, struct s12* rsi, int64_t rdx, int64_t rcx);

struct s6* fun_401816(int64_t rdi, int64_t rsi);

struct s6* fun_4025c0(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t fun_401826();

struct s6* fun_40247a(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r12_5;
    unsigned char al6;
    int1_t zf7;
    unsigned char al8;
    unsigned char al9;
    int64_t rdi10;
    unsigned char al11;
    struct s6** tmp64_12;
    struct s6* rax13;
    struct s6* tmp64_14;
    int64_t rdi15;
    struct s6** tmp64_16;
    struct s6* rdi17;
    int32_t eax18;

    r12_5 = edi;
    if (*reinterpret_cast<int32_t*>(&r12_5) != -1) {
        al6 = fun_40245f(*reinterpret_cast<int32_t*>(&r12_5), 5);
        if (!al6) {
            zf7 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
            if (!zf7) {
                al8 = fun_40245f(*reinterpret_cast<int32_t*>(&r12_5), 2);
                if (!al8) {
                    al9 = fun_40245f(*reinterpret_cast<int32_t*>(&r12_5), 1);
                    if (al9 || (*reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<int32_t*>(&r12_5), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0, al11 = fun_40245f(*reinterpret_cast<int32_t*>(&rdi10), 4), !!al11)) {
                        tmp64_12 = g4076b0 + *reinterpret_cast<int32_t*>(&r12_5) * 6;
                        rax13 = fun_401d0b(tmp64_12, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48, 1, -1);
                    } else {
                        rax13 = fun_401816(rdi10, 4);
                    }
                } else {
                    tmp64_14 = reinterpret_cast<struct s6*>(g4076b0 + *reinterpret_cast<int32_t*>(&r12_5) * 6);
                    rax13 = fun_0(tmp64_14, tmp64_14);
                }
            } else {
                *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(&r12_5);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
                rax13 = fun_4025c0(rdi15, rsi, rdx);
            }
        } else {
            tmp64_16 = g4076b0 + r12_5 * 6;
            rdi17 = *tmp64_16;
            rax13 = fun_0(rdi17, rdi17);
        }
    } else {
        eax18 = fun_401826();
        rax13 = reinterpret_cast<struct s6*>(static_cast<int64_t>(eax18));
    }
    return rax13;
}

uint32_t fun_402150(struct s5* rdi) {
    uint32_t esi2;
    int64_t rax3;

    esi2 = g407838;
    if (!esi2) {
        esi2 = 0xffffffff;
    }
    *reinterpret_cast<uint32_t*>(&rax3) = rdi->f8;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) == 0)) {
        *reinterpret_cast<uint32_t*>(&rax3) = esi2;
    }
    rdi->f8 = *reinterpret_cast<uint32_t*>(&rax3);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi2) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi2 == 0))) {
        g407838 = esi2;
    }
    return 0xffffffff;
}

struct s6* fun_402750(struct s6* rdi) {
    uint64_t rcx2;
    uint64_t rdx3;
    uint64_t rdx4;

    *reinterpret_cast<int32_t*>(&rcx2) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    if (rdx3 < 32) {
        rcx2 = rdx4;
    }
    goto *reinterpret_cast<int64_t*>(rcx2 * 8 + 0x404420);
}

int64_t fun_40243f(int32_t edi, int32_t* rsi, int64_t rdx) {
    int64_t rax4;
    int64_t rcx5;

    *reinterpret_cast<int32_t*>(&rax4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&rdx) > *reinterpret_cast<int32_t*>(&rax4)) {
        *reinterpret_cast<int32_t*>(&rcx5) = static_cast<int32_t>(rdx + rax4) >> 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        if (rsi[*reinterpret_cast<int32_t*>(&rcx5) * 2] > edi) {
            *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(&rcx5);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rax4) = static_cast<int32_t>(rcx5 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        }
    }
    return static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax4));
}

uint32_t g404658 = 0;

int32_t fun_401826() {
    uint32_t eax1;

    eax1 = g404658;
    g407838 = eax1;
    return 0xff;
}

int64_t g404638 = 0;

struct s6* fun_4025c0(int64_t rdi, int64_t rsi, int64_t rdx) {
    goto g404638;
}

struct s13 {
    struct s6* f0;
    signed char[12] pad16;
    int32_t f10;
};

unsigned char fun_40245f(int32_t edi, int32_t esi) {
    int32_t eax3;
    struct s13* tmp64_4;

    eax3 = 0;
    if (edi) {
        tmp64_4 = reinterpret_cast<struct s13*>(g4076b0 + edi * 6);
        *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(tmp64_4->f10 == esi);
    }
    return *reinterpret_cast<unsigned char*>(&eax3);
}

struct s14 {
    int32_t f0;
    signed char[12] pad16;
    int64_t f10;
};

struct s14* fun_401dad(int64_t rdi, struct s14* rsi);

int64_t g403060 = 0x2dd2;

struct s6* fun_40297a(int64_t rdi, struct s14* rsi, int64_t rdx, struct s6* rcx, int64_t r8, void* r9);

int64_t g403020 = 0x2d2e;

struct s6* fun_401d0b(struct s6** rdi, struct s12* rsi, int64_t rdx, int64_t rcx) {
    void* rbp5;
    struct s6** r13_6;
    int64_t rdi7;
    struct s12* r12_8;
    int64_t rbx9;
    struct s14* rsi10;
    int64_t r8_11;
    int64_t rdx12;
    void* r9_13;
    struct s6* rcx14;
    int32_t eax15;
    struct s6* rax16;
    int32_t v17;
    int64_t rax18;
    struct s6* rcx19;
    int32_t v20;

    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    r13_6 = rdi;
    rdi7 = rcx;
    r12_8 = rsi;
    rbx9 = rdx;
    while (rbx9 && !r12_8->f8) {
        r12_8 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(r12_8) + 16);
        --rbx9;
    }
    rsi10 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbp5) - 64);
    fun_401dad(rdi7, rsi10);
    if (!rbx9) {
        *reinterpret_cast<int32_t*>(&r8_11) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx12) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&r8_11) = r12_8->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0;
        rdx12 = r12_8->f0;
    }
    r9_13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp5) - 68);
    rcx14 = *r13_6;
    eax15 = reinterpret_cast<int32_t>(g403060(rdi7, rsi10, rdx12, rcx14, r8_11, r9_13));
    if (!eax15) {
        rax16 = fun_40297a(rdi7, rsi10, rdx12, rcx14, r8_11, r9_13);
    } else {
        if (!v17) {
            *reinterpret_cast<int32_t*>(&rax18) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            while (rbx9 != rax18) {
                ++rax18;
            }
        }
        rcx19 = *r13_6;
        g403020(rdi7, rsi10, rdx12, rcx19, r8_11, r9_13);
        *reinterpret_cast<int32_t*>(&rax16) = v20;
        *reinterpret_cast<int32_t*>(&rax16 + 1) = 0;
    }
    return rax16;
}

uint32_t fun_40266f(struct s11* rdi, uint32_t* rsi, struct s11* rdx, signed char* rcx) {
    int64_t rax5;
    int64_t rdx6;
    int64_t rbx7;
    uint32_t edx8;
    uint32_t ecx9;
    uint16_t cx10;
    int64_t rax11;
    uint32_t ecx12;
    int64_t rdx13;

    *reinterpret_cast<uint32_t*>(&rax5) = 0;
    do {
        *reinterpret_cast<uint32_t*>(&rdx6) = *reinterpret_cast<uint32_t*>(&rax5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rbx7) = *reinterpret_cast<uint32_t*>(&rax5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint32_t*>(&rax5) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        edx8 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s11**>(reinterpret_cast<uint16_t>(rdi) + rdx6 * 2));
        ecx9 = edx8;
        cx10 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx9) & 0xfc00);
    } while (cx10 == 0xdc00);
    if (cx10 == 0xd800) {
        *reinterpret_cast<uint32_t*>(&rax11) = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s11**>(reinterpret_cast<uint16_t>(rdi) + rax5 * 2));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
        ecx12 = *reinterpret_cast<uint32_t*>(&rax11);
        if ((*reinterpret_cast<uint16_t*>(&ecx12) & 0xfc00) == 0xdc00) {
            *reinterpret_cast<uint32_t*>(&rdx13) = edx8 << 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            *rsi = static_cast<uint32_t>(rdx13 + rax11 - 0x35fdc00);
            *reinterpret_cast<uint32_t*>(&rax5) = static_cast<uint32_t>(rbx7 + 2);
        } else {
            *rsi = 0xfffd;
            *reinterpret_cast<uint32_t*>(&rax5) = 0xffffffff;
        }
    } else {
        *rsi = edx8;
    }
    return *reinterpret_cast<uint32_t*>(&rax5);
}

int64_t g403048 = 0x2d96;

int64_t fun_401deb() {
    int64_t rax1;

    rax1 = reinterpret_cast<int64_t>(g403048());
    return rax1;
}

uint64_t* fun_4010fb(uint64_t rdi, int64_t rsi, uint64_t* rdx, uint64_t* rcx) {
    uint64_t* r8_5;
    int32_t ecx6;
    uint64_t rax7;
    int64_t rax8;
    uint64_t* rdx9;
    uint64_t rax10;

    r8_5 = rcx;
    ecx6 = 39;
    while (*reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(&rsi) - 1, rax7 = rdi >> *reinterpret_cast<signed char*>(&ecx6), *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<uint32_t*>(&rax7) & 0x1ff, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0, *reinterpret_cast<int32_t*>(&rsi) != -1) {
        rdx9 = rdx + rax8;
        if (!*rdx9) {
            rax10 = *r8_5 - 0x1000;
            *r8_5 = rax10;
            *rdx9 = rax10 | 3;
        }
        ecx6 = ecx6 - 9;
        rdx = reinterpret_cast<uint64_t*>(*rdx9 & 0x3fffffffff000);
    }
    return rdx + rax8;
}

uint32_t fun_401eaa(signed char* rdi, struct s5* rsi);

uint32_t fun_401e45(int32_t edi, struct s5* rsi);

int64_t fun_401e0a(signed char* rdi) {
    struct s5* r12_2;
    uint32_t eax3;
    int64_t rbx4;
    uint32_t eax5;
    int64_t rax6;

    r12_2 = g406038;
    eax3 = fun_401eaa(rdi, r12_2);
    if (eax3 == 0xffffffff || (*reinterpret_cast<uint32_t*>(&rbx4) = eax3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx4) + 4) = 0, eax5 = fun_401e45(10, r12_2), eax5 + 1 == 0)) {
        *reinterpret_cast<uint32_t*>(&rax6) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rax6) = static_cast<uint32_t>(rbx4 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    }
    return rax6;
}

signed char fun_4023ce(struct s6* rdi);

struct s6* fun_402870(void* rdi);

int64_t fun_401856();

signed char fun_402286(struct s6** rdi, struct s6** rsi, uint64_t rdx, void* rcx) {
    struct s6* r15_5;
    uint64_t rbx6;
    struct s6* rdi7;
    struct s6* rdi8;
    signed char al9;
    struct s6* rdi10;
    void* rsi11;
    void* rax12;
    void* r8_13;
    struct s6* rcx14;
    uint64_t r14_15;
    struct s6* rax16;
    struct s6* rax17;
    int32_t eax18;

    *reinterpret_cast<int32_t*>(&r15_5) = 0;
    *reinterpret_cast<int32_t*>(&r15_5 + 1) = 0;
    rbx6 = rdx;
    rdi7 = *rdi;
    fun_4023ce(rdi7);
    rdi8 = *rdi;
    al9 = fun_4023ce(rdi8);
    if (al9) {
        r15_5 = *rdi;
    }
    rdi10 = *rsi;
    if (!*rdi) {
        *reinterpret_cast<int32_t*>(&rsi11) = 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = 0;
        rdx = 31 % rbx6;
        rax12 = reinterpret_cast<void*>(31 / rbx6);
        if (reinterpret_cast<uint64_t>(rax12) >= 4) {
            rsi11 = rax12;
        }
    } else {
        rsi11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdi10) >> 1) + reinterpret_cast<uint32_t>(rdi10));
    }
    if (!rdi10) {
        *reinterpret_cast<int32_t*>(&r8_13) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
    } else {
        r8_13 = reinterpret_cast<void*>(rbx6 * reinterpret_cast<uint32_t>(rdi10));
        if ((rbx6 | reinterpret_cast<uint32_t>(rdi10)) & 0xffffffffffff0000) {
            rdx = reinterpret_cast<uint64_t>(r8_13) % reinterpret_cast<uint32_t>(rdi10);
            if (rbx6 != reinterpret_cast<uint64_t>(r8_13) / reinterpret_cast<uint32_t>(rdi10)) 
                goto addr_4023b8_11;
        }
    }
    rcx14 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rsi11) + reinterpret_cast<uint64_t>(rcx) + 1);
    if (!rcx14) {
        *reinterpret_cast<int32_t*>(&r14_15) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = 0;
        goto addr_40234d_15;
    }
    r14_15 = rbx6 * reinterpret_cast<uint32_t>(rcx14);
    if (!((rbx6 | reinterpret_cast<uint32_t>(rcx14)) & 0xffffffffffff0000)) {
        addr_40234d_15:
        if (1 || (rdi10 = r15_5, rsi11 = reinterpret_cast<void*>(r14_15 + 31 & 0xffffffffffffffe0), rax16 = fun_0(rdi10), rax16 == 0)) {
            fun_401836(rdi10, rsi11, rdx);
        } else {
            if (!r15_5 && *rdi) {
                rax16 = fun_402750(rax16);
            }
            rax17 = fun_402870(reinterpret_cast<uint32_t>(rax16) + reinterpret_cast<uint64_t>(r8_13));
            *rsi = rcx14;
            *rdi = rax17;
            *reinterpret_cast<signed char*>(&eax18) = 1;
            goto addr_4023bf_21;
        }
    } else {
        rdx = r14_15 % reinterpret_cast<uint32_t>(rcx14);
        if (rbx6 != r14_15 / reinterpret_cast<uint32_t>(rcx14)) {
            addr_4023b8_11:
            fun_401856();
        } else {
            goto addr_40234d_15;
        }
    }
    eax18 = 0;
    addr_4023bf_21:
    return *reinterpret_cast<signed char*>(&eax18);
}

int64_t fun_4021f0(int64_t rdi);

void fun_402941(signed char dil);

uint32_t g404648 = 0;

void fun_4017fd(int32_t edi, void* rsi, int64_t* rdx) {
    int32_t edi4;
    uint32_t eax5;
    int64_t rax6;

    fun_4021f0(0);
    edi4 = edi;
    fun_402941(*reinterpret_cast<signed char*>(&edi4));
    eax5 = g404648;
    g407838 = eax5;
    goto rax6;
}

int32_t fun_4025b0() {
    goto g404638;
}

uint32_t fun_40262d(struct s11* rdi, uint32_t* rsi, struct s11* rdx, signed char* rcx, uint64_t r8, ...) {
    uint32_t eax6;

    eax6 = fun_40266f(rdi, rsi, rdx, rcx);
    return eax6;
}

struct s14* fun_401dad(int64_t rdi, struct s14* rsi) {
    int64_t rdx3;
    struct s14* r8_4;
    int32_t ecx5;
    struct s14* rdi6;

    rdx3 = rdi;
    r8_4 = rsi;
    if (rdi == -1) {
        *reinterpret_cast<int32_t*>(&r8_4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
    } else {
        ecx5 = 8;
        rdi6 = rsi;
        while (ecx5) {
            --ecx5;
            rdi6->f0 = 0;
            rdi6 = reinterpret_cast<struct s14*>(&rdi6->pad16);
            rsi = reinterpret_cast<struct s14*>(&rsi->pad16);
        }
        rsi->f10 = rdx3;
    }
    return r8_4;
}

uint32_t fun_401e45(int32_t edi, struct s5* rsi) {
    struct s5* r8_3;
    uint32_t eax4;
    int64_t rax5;
    uint32_t eax6;
    uint32_t edx7;

    r8_3 = rsi;
    if (edi == -1) {
        addr_401ea0_2:
        eax4 = fun_401f6e(r8_3, *reinterpret_cast<uint32_t*>(&rsi));
    } else {
        *reinterpret_cast<uint32_t*>(&rax5) = rsi->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        *reinterpret_cast<unsigned char*>(rsi->f18 + rax5) = *reinterpret_cast<unsigned char*>(&edi);
        *reinterpret_cast<uint32_t*>(&rsi) = rsi->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = 0;
        eax6 = rsi->f14 + 1 & static_cast<uint32_t>(reinterpret_cast<int64_t>(rsi) - 1);
        edx7 = r8_3->f10;
        r8_3->f14 = eax6;
        if (eax6 == edx7 || (r8_3->f0 == 2 || !(r8_3->f0 - 1) && *reinterpret_cast<unsigned char*>(&edi) == 10)) {
            if (r8_3->f30) {
                goto r8_3->f30;
            }
            if (eax6 == edx7) 
                goto addr_401ea0_2; else 
                goto addr_401e9a_7;
        } else {
            addr_401e9a_7:
            eax4 = *reinterpret_cast<unsigned char*>(&edi);
        }
    }
    return eax4;
}

int64_t g404650 = 0;

int64_t g404678 = 0;

uint32_t fun_401eaa(signed char* rdi, struct s5* rsi) {
    int64_t r14_3;
    signed char* r13_4;
    struct s5* rbx5;
    signed char dl6;
    int64_t rax7;
    int64_t rsi8;
    uint32_t eax9;
    uint32_t ecx10;
    int64_t rdx11;
    uint32_t eax12;
    uint32_t r12d13;
    uint32_t eax14;
    int1_t zf15;
    int32_t eax16;
    int64_t rax17;

    *reinterpret_cast<int32_t*>(&r14_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    r13_4 = rdi;
    rbx5 = rsi;
    while (dl6 = *r13_4, !!dl6) {
        *reinterpret_cast<uint32_t*>(&rax7) = rbx5->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        ++r13_4;
        *reinterpret_cast<signed char*>(rbx5->f18 + rax7) = dl6;
        *reinterpret_cast<uint32_t*>(&rsi8) = rbx5->f20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
        eax9 = rbx5->f14 + 1 & static_cast<uint32_t>(rsi8 - 1);
        ecx10 = rbx5->f10;
        rbx5->f14 = eax9;
        if (eax9 == ecx10) 
            goto addr_401f01_4;
        *reinterpret_cast<signed char*>(&rsi8) = rbx5->f0;
        if (*reinterpret_cast<signed char*>(&rsi8) == 2) 
            goto addr_401f01_4;
        *reinterpret_cast<signed char*>(&rsi8) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rsi8) - 1);
        if (*reinterpret_cast<signed char*>(&rsi8)) 
            goto addr_401f56_7;
        if (dl6 != 10) 
            goto addr_401f56_7;
        addr_401f01_4:
        rdx11 = rbx5->f30;
        if (!rdx11) {
            if (eax9 != ecx10) {
                addr_401f56_7:
                *reinterpret_cast<int32_t*>(&r14_3) = *reinterpret_cast<int32_t*>(&r14_3) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
                continue;
            } else {
                eax12 = fun_401f6e(rbx5, *reinterpret_cast<uint32_t*>(&rsi8));
            }
        } else {
            eax12 = reinterpret_cast<uint32_t>(rdx11(rbx5));
        }
        r12d13 = eax12;
        if (eax12 == 0xffffffff) {
            eax14 = fun_401fa1(rbx5);
            zf15 = static_cast<int64_t>(reinterpret_cast<int32_t>(eax14)) == g404650;
            if (!zf15) 
                goto addr_401f38_14;
        }
    }
    r12d13 = static_cast<uint32_t>(r14_3 + 1);
    addr_401f62_16:
    return r12d13;
    addr_401f38_14:
    eax16 = fun_401f97(rbx5);
    if (eax16) {
        rax17 = g404678;
        rbx5->f8 = *reinterpret_cast<uint32_t*>(&rax17);
        g407838 = *reinterpret_cast<uint32_t*>(&rax17);
        goto addr_401f62_16;
    }
}

struct s15 {
    struct s6* f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
};

int64_t fun_4021f0(int64_t rdi) {
    int64_t r12_2;
    int64_t v3;
    int64_t rdx4;
    struct s6* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s15* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s6* r13_11;
    int64_t rdi12;

    r12_2 = rdi;
    v3 = rdx4;
    while (rdi5 = g4060a0, !!rdi5) {
        while (1) {
            *reinterpret_cast<struct s6**>(&rax6) = *reinterpret_cast<struct s6**>(&rdi5->f0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
            do {
                if (!rax6) 
                    break;
                __asm__("bsf ecx, eax");
                edx7 = 1 << *reinterpret_cast<unsigned char*>(&rcx8);
                *reinterpret_cast<int32_t*>(&rcx8) = *reinterpret_cast<int32_t*>(&rcx8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx9) = reinterpret_cast<uint32_t>(~edx7);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
                rax6 = rax6 & rdx9;
            } while (r12_2 && *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rdi5 + reinterpret_cast<uint64_t>(rcx8) * 2) + 32) != r12_2 || (*reinterpret_cast<struct s6**>(&rdi5->f0) = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(*reinterpret_cast<struct s6**>(&rdi5->f0)) & *reinterpret_cast<uint32_t*>(&rdx9)), rcx8 = reinterpret_cast<struct s15*>(rdi5 + reinterpret_cast<uint64_t>(rcx8) * 2), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_2) 
                goto addr_402259_8;
            if (!r13_11) 
                goto addr_40227e_10;
            rdi5 = r13_11;
        }
        rdi12 = rcx8->f18;
        rdx10(rdi12);
        continue;
        addr_402259_8:
        if (r13_11 && !1) {
            fun_0(rdi5);
        }
        g4060a0 = r13_11;
    }
    addr_40227e_10:
    return v3;
}

uint32_t g404660 = 0;

int64_t fun_401836(struct s6* rdi, void* rsi, uint64_t rdx) {
    uint32_t eax4;

    eax4 = g404660;
    g407838 = eax4;
    return 0xff;
}

uint32_t g404670 = 0;

int64_t fun_401856() {
    uint32_t eax1;

    eax1 = g404670;
    g407838 = eax1;
    return 0xff;
}

int64_t g4063c0 = 0;

signed char fun_4023ce(struct s6* rdi) {
    int64_t rdx2;
    int64_t rbx3;
    int64_t rax4;
    uint32_t eax5;
    uint32_t eax6;

    if (reinterpret_cast<uint64_t>(rdi - 0x80000000000) <= 0xfffffffffff) {
        return 0;
    } else {
        rdx2 = g4063c0;
        rbx3 = reinterpret_cast<int32_t>(rdi) >> 16;
        rax4 = fun_40243f(*reinterpret_cast<int32_t*>(&rbx3), 0x4063c8, rdx2);
        eax5 = 0;
        if (rax4) {
            eax6 = 1;
            if (*reinterpret_cast<int32_t*>(0x4063c0 + rax4 * 8) != *reinterpret_cast<int32_t*>(&rbx3)) {
                eax6 = 0;
                *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(0x4063c0 + (rax4 - 1) * 8 + 12) == *reinterpret_cast<int32_t*>(&rbx3));
            }
            eax5 = eax6 & 1;
        }
        return *reinterpret_cast<signed char*>(&eax5);
    }
}

struct s6* fun_402870(void* rdi) {
    uint64_t rcx2;
    uint64_t rdx3;
    uint64_t rdx4;

    __asm__("movd xmm3, esi");
    *reinterpret_cast<int32_t*>(&rcx2) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    if (rdx3 < 32) {
        rcx2 = rdx4;
    }
    goto *reinterpret_cast<int64_t*>(0x404528 + rcx2 * 8);
}

struct s6* fun_401816(int64_t rdi, int64_t rsi) {
    uint32_t eax3;

    eax3 = g404648;
    g407838 = eax3;
    return 0xff;
}

uint32_t g404668 = 0;

struct s6* fun_401846() {
    uint32_t eax1;

    eax1 = g404668;
    g407838 = eax1;
    return 0xff;
}

uint32_t g40783c = 0;

int64_t g403018 = 0x2d20;

void fun_402941(signed char dil) {
    int1_t zf2;

    g40783c = g40783c | 4;
    zf2 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
    if (zf2) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x402972]");
        __asm__("hlt ");
    } else {
        while (1) {
            g403018();
        }
    }
}

struct s6* fun_40297a(int64_t rdi, struct s14* rsi, int64_t rdx, struct s6* rcx, int64_t r8, void* r9) {
    int1_t zf7;
    struct s6* rax8;
    int64_t rax9;

    zf7 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
    if (zf7) {
        rax8 = fun_401846();
        return rax8;
    } else {
        rax9 = fun_401deb();
        g407838 = *reinterpret_cast<uint32_t*>(&rax9);
        return 0xffffffffffffffff;
    }
}

struct s16 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

void fun_401000(struct s16* rdi, uint64_t* rsi, uint64_t* rdx) {
    uint64_t* rcx4;
    uint64_t* r15_5;
    uint64_t r14_6;
    struct s16* r13_7;
    uint64_t r12_8;
    struct s16* rbx9;
    struct s16* rax10;
    uint64_t r12_11;
    uint64_t rax12;
    uint64_t rdi13;
    uint64_t* rax14;
    uint64_t rdx15;

    rcx4 = rdx;
    r15_5 = rsi;
    *reinterpret_cast<int32_t*>(&r14_6) = 0x400000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_6) + 4) = 0;
    r13_7 = rdi;
    *reinterpret_cast<int32_t*>(&r12_8) = 0x100000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_8) + 4) = 0;
    rbx9 = rdi;
    while (rbx9->f8) {
        do {
            rax10 = rbx9;
            rbx9 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rbx9) + 24);
            if (!(rbx9->f10 - 1)) 
                break;
        } while (rbx9->f8);
        goto addr_401049_5;
        rbx9 = rax10;
        addr_40104e_7:
        if (rbx9->f0 >= r12_8) {
            r12_8 = rbx9->f0;
        }
        r12_11 = r12_8 + 0xfff;
        while (1) {
            r12_8 = r12_11 & 0xfffffffffffff000;
            while (r12_8 < (rbx9->f8 + rbx9->f0 & 0xfffffffffffff000)) {
                while (r13_7->f8 && (r13_7->f10 == 1 || r13_7->f0 + r13_7->f8 < r12_8)) {
                    r13_7 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(r13_7) + 24);
                }
                if (r13_7->f0 > r12_8) 
                    goto addr_4010b1_15;
                rax12 = r13_7->f0 + r13_7->f8;
                if (rax12 > r12_8) 
                    goto addr_4010a8_17;
                addr_4010b1_15:
                rdi13 = r14_6;
                r14_6 = r14_6 + 0x1000;
                rax14 = fun_4010fb(rdi13, 3, r15_5, rcx4);
                rdx15 = r12_8;
                rcx4 = rcx4;
                r12_8 = r12_8 + 0x1000;
                *rax14 = rdx15 | 3;
            }
            break;
            addr_4010a8_17:
            r12_11 = rax12 + 0xfff;
        }
        rbx9 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rbx9) + 24);
        continue;
        addr_401049_5:
        goto addr_40104e_7;
    }
    return;
}

void fun_40277e() {
    __asm__("outsd ");
}

void fun_402781() {
    int1_t less_or_equal1;
    int64_t v2;

    __asm__("rol ch, 0xfe");
    if (!less_or_equal1) {
        goto v2;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xeb77");
    }
}

void fun_40278f() {
    __asm__("outsd ");
}

void fun_402792() {
    int64_t rcx1;
    int1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x402759;
}

void fun_402795() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
        goto 0x4027e6;
    }
}

void fun_402798(signed char* rdi, signed char* rsi, uint64_t rdx, int64_t rcx) {
    int1_t zf5;
    uint64_t rcx6;
    uint64_t rdx7;
    uint64_t rcx8;
    uint64_t rcx9;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf5)) {
        if (rdx < 0x400) 
            goto addr_402771_4;
    } else {
        __asm__("in al, 0x57");
        __asm__("fucomi st0, st3");
        if (rdx < 0x400) {
            rcx6 = 16;
            do {
                rcx6 = rcx6 + 16;
                __asm__("movdqu xmm3, [rsi+rcx-0x20]");
                __asm__("movdqu [rdi+rcx-0x20], xmm3");
            } while (rdx > rcx6);
            __asm__("movdqu xmm3, [rsi+rdx-0x10]");
            __asm__("movdqu [rdi+rdx-0x10], xmm3");
            __asm__("xorps xmm3, xmm3");
            goto 0x4027e7;
        }
    }
    if (rdx > 0x400000) {
        __asm__("movdqu xmm3, [rsi]");
        __asm__("movdqu [rdi], xmm3");
        rdx7 = rdx - ((reinterpret_cast<uint64_t>(rdi + 16) & 0xfffffffffffffff0) - reinterpret_cast<int64_t>(rdi));
        rcx8 = 16;
        do {
            rcx8 = rcx8 + 16;
            __asm__("movdqu xmm3, [rsi+rcx-0x20]");
            __asm__("movntdq [rdi+rcx-0x20], xmm3");
        } while (rdx7 > rcx8);
        __asm__("sfence ");
        __asm__("movdqu xmm3, [rsi+rdx-0x10]");
        __asm__("movdqu [rdi+rdx-0x10], xmm3");
        __asm__("xorps xmm3, xmm3");
        goto 0x4027e7;
    } else {
        rcx9 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx9)) {
            *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
            *rdi = *rsi;
            ++rdi;
            ++rsi;
        }
        goto 0x4027e7;
    }
    addr_402771_4:
}

void fun_402898(int32_t* rdi) {
    int64_t rcx2;
    int64_t rcx3;
    int32_t ebx4;
    int32_t ebx5;
    void* rdx6;
    int64_t v7;
    int1_t sf8;

    rcx2 = rcx3 - 1;
    if (rcx2) {
        ebx4 = ebx5 * *reinterpret_cast<int32_t*>(&rcx2);
        *rdi = ebx4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx6) - 4) = ebx4;
        goto v7;
    } else {
        if (sf8) 
            goto " ";
    }
}

void fun_4028a7(int64_t rdi) {
    int1_t less_or_equal2;
    int64_t rdx3;
    int64_t rbx4;

    if (!less_or_equal2) {
        *reinterpret_cast<int64_t*>(rdi + rdx3 - 8) = rbx4;
        goto 0x4028ef;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xf177");
    }
}

void fun_4028b2() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
    }
}

struct s17 {
    signed char[106] pad106;
    signed char f6a;
};

struct s18 {
    signed char[106] pad106;
    signed char f6a;
};

void fun_4028b5() {
    int64_t rcx1;
    int1_t zf2;
    int64_t rax3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    signed char al7;
    struct s17* rbx8;
    struct s18* rbx9;
    signed char dh10;
    uint64_t rcx11;
    uint64_t rdx12;

    if (reinterpret_cast<uint1_t>(!!(rcx1 - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x40287c;
    __asm__("in al, 0x57");
    __asm__("fucomi st0, st3");
    __asm__("cli ");
    *reinterpret_cast<signed char*>(rax3 + rax4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax5 + rax6) + al7);
    rbx8->f6a = reinterpret_cast<signed char>(rbx9->f6a + dh10);
    __asm__("punpcklbw xmm3, xmm3");
    __asm__("punpcklwd xmm3, xmm3");
    __asm__("pshufd xmm3, xmm3, 0x0");
    *reinterpret_cast<int32_t*>(&rcx11) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    do {
        rcx11 = rcx11 + 16;
        __asm__("movdqu [rdi+rcx-0x20], xmm3");
    } while (rdx12 > rcx11);
    __asm__("movdqu [rdi+rdx-0x10], xmm3");
    __asm__("xorps xmm3, xmm3");
}

struct s19 {
    struct s19* f0;
    uint32_t f1;
    signed char[3] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[45] pad78;
    unsigned char f4e;
    signed char[4] pad83;
    unsigned char f53;
    signed char[13] pad97;
    unsigned char f61;
    signed char[2] pad100;
    int32_t f64;
    void* f65;
    unsigned char f66;
    int32_t f68;
    uint32_t f69;
    unsigned char f6d;
    unsigned char f6e;
    unsigned char f6f;
    int32_t f70;
    unsigned char f72;
    unsigned char f73;
    unsigned char f74;
    unsigned char f75;
    signed char[959524789] pad959524914;
    uint32_t f39313032;
};

struct s20 {
    void* f0;
    signed char[84] pad85;
    unsigned char f55;
    signed char[11] pad97;
    unsigned char f61;
    signed char[19] pad117;
    unsigned char f75;
};

struct s21 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s22 {
    signed char[1] pad1;
    uint32_t f1;
    signed char[27] pad32;
    int32_t f20;
    signed char[37] pad73;
    unsigned char f49;
    signed char[5] pad79;
    unsigned char f4f;
    signed char[21] pad101;
    int32_t f65;
    signed char[3] pad108;
    unsigned char f6c;
    signed char[2] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    uint32_t f72;
};

struct s23 {
    signed char[32] pad32;
    int32_t f20;
};

struct s24 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s25 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s26 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s27 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s28 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s29 {
    signed char[111] pad111;
    signed char f6f;
};

unsigned char g402e0e = 0;

unsigned char g402e36 = 0;

struct s30 {
    signed char[101] pad101;
    signed char f65;
};

unsigned char g402e56 = 0;

int32_t g21415287;

void fun_4029bc(struct s19* rdi, int32_t esi, int16_t dx, struct s19* rcx, unsigned char* r8) {
    struct s19* rdx3;
    void* rsp6;
    int1_t cf7;
    void* al8;
    void* eax9;
    void* eax10;
    void* eax11;
    void* eax12;
    struct s20* rax13;
    struct s21* rbx14;
    struct s22* rsi15;
    int1_t zf16;
    struct s19* rbp17;
    void* rsp18;
    struct s23* rbx19;
    int64_t* rsp20;
    void** rsp21;
    int64_t* rsp22;
    int64_t r11_23;
    int64_t* rsp24;
    int64_t rbx25;
    struct s19** rsp26;
    struct s20** rsp27;
    int64_t* rsp28;
    int64_t r10_29;
    void** rsp30;
    int64_t* rsp31;
    int64_t r13_32;
    int64_t* rsp33;
    int64_t r10_34;
    struct s19** rsp35;
    struct s20** rsp36;
    int64_t* rsp37;
    int64_t r11_38;
    struct s24* rbx39;
    struct s25* rbx40;
    struct s19* rsp41;
    struct s19* r12_42;
    uint1_t cf43;
    int1_t zf44;
    struct s27* rbx45;
    struct s28* rbx46;
    uint1_t zf47;
    struct s29* rbx48;
    unsigned char* r10_49;
    signed char* r10_50;
    uint1_t cf51;
    uint1_t zf52;
    int1_t zf53;
    struct s19* tmp32_54;
    uint32_t tmp32_55;
    uint1_t zf56;
    uint1_t below_or_equal57;
    signed char* rax58;
    signed char* rax59;
    signed char* rax60;
    struct s19* tmp32_61;
    void* tmp8_62;
    uint1_t cf63;
    struct s30* r15_64;
    uint32_t* rdi65;
    uint32_t* rsi66;
    unsigned char* rax67;
    uint32_t* rbx68;
    int32_t* rbx69;
    int32_t tmp32_70;
    void* rsp71;
    uint1_t cf72;
    uint1_t below_or_equal73;
    struct s19* rsp74;
    struct s19* rsp75;
    struct s19* r12_76;
    struct s19* rsp77;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    rsp6 = __zero_stack_offset();
    if (cf7) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s19**>(rcx) = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rcx)) + reinterpret_cast<signed char>(al8));
        __asm__("rol byte [rcx], 0xc0");
        eax9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax10) + reinterpret_cast<int32_t>(eax11));
        eax12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax9) + reinterpret_cast<int32_t>(eax9));
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax12) + 1) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12)) + *reinterpret_cast<signed char*>(&eax12));
        *reinterpret_cast<signed char*>(&eax12) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax12) - 8) - 8) - 8) - 8) - 8);
        *reinterpret_cast<struct s19**>(&rax13) = reinterpret_cast<struct s19*>(reinterpret_cast<int32_t>(eax12) + 0x5fc05fc + 0x5fc05fc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
        *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) | rbx14->f6f);
        if (1) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x74) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x74) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6e) = 0;
            goto addr_402a6e_5;
        }
        __asm__("outsd ");
        if (0) {
            addr_402a6e_5:
        } else {
            __asm__("insb ");
            *reinterpret_cast<struct s19**>(&rsi15) = reinterpret_cast<struct s19*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6e) * 0x706f430a);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
            zf16 = __undefined();
            if (!__undefined()) {
                if (!zf16) 
                    goto addr_402aee_9;
                if (__intrinsic()) 
                    goto addr_402aa4_11; else 
                    goto addr_402a84_12;
            } else {
                *reinterpret_cast<int32_t*>(&rsp6) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi) + 0x68) * 0x30322074;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp6) + 4) = 0;
                *reinterpret_cast<void**>(&rdx3 + 1) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3 + 1)) ^ reinterpret_cast<unsigned char>(rax13->f0));
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x75) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x75) & *reinterpret_cast<unsigned char*>(&rcx));
                if (1) {
                    addr_402a8c_14:
                    if (1) {
                        goto addr_402aaf_16;
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rbp17) = rsi15->f65 * 0x656c4120;
                    *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                    zf16 = __undefined();
                    if (__undefined()) {
                        goto addr_402a84_12;
                    } else {
                        __asm__("outsb ");
                        if (__intrinsic()) 
                            goto addr_402a86_20;
                    }
                }
            }
        }
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) & *reinterpret_cast<unsigned char*>(&rdx3));
    addr_402aa4_11:
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(&rsp18) = reinterpret_cast<uint32_t>(rbx19->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_402b14_23:
        *reinterpret_cast<int32_t*>(&rbp17) = rsi15->f20 * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
        rsp20 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp18) - 8);
        *rsp20 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_402aaf_16:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) = 0;
        rax13->f75 = 0;
    }
    addr_402b8b_25:
    rsp21 = reinterpret_cast<void**>(rsp20 - 1);
    *reinterpret_cast<void***>(rsp21) = rsp21;
    rsp22 = reinterpret_cast<int64_t*>(rsp21 - 1);
    *rsp22 = r11_23;
    rsp24 = rsp22 - 1;
    *rsp24 = rbx25;
    rsi15->f4f = reinterpret_cast<unsigned char>(rsi15->f4f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp26 = reinterpret_cast<struct s19**>(rsp24 - 1);
    *rsp26 = rdx3;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp27 = reinterpret_cast<struct s20**>(rsp26 - 8);
    *rsp27 = rax13;
    rsp28 = reinterpret_cast<int64_t*>(rsp27 - 1);
    *rsp28 = r10_29;
    rsp30 = reinterpret_cast<void**>(rsp28 - 1);
    *reinterpret_cast<void***>(rsp30) = rsp30;
    rsp31 = reinterpret_cast<int64_t*>(rsp30 - 1);
    *rsp31 = r13_32;
    rsp33 = rsp31 - 1;
    *rsp33 = r10_34;
    rax13->f55 = reinterpret_cast<unsigned char>(rax13->f55 & *reinterpret_cast<unsigned char*>(&rdx3));
    rsp35 = reinterpret_cast<struct s19**>(rsp33 - 1);
    *rsp35 = rdx3;
    rsp36 = reinterpret_cast<struct s20**>(rsp35 - 8);
    *rsp36 = rax13;
    rsp37 = reinterpret_cast<int64_t*>(rsp36 - 1);
    *rsp37 = r11_38;
    rbx39->f65 = reinterpret_cast<unsigned char>(rbx40->f65 & *reinterpret_cast<unsigned char*>(&rdx3));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp41 = reinterpret_cast<struct s19*>(rsp37 - 1);
    *reinterpret_cast<struct s19**>(rsp41) = rbp17;
    *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)));
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & *reinterpret_cast<unsigned char*>(&rdx3));
    }
    __asm__("outsb ");
    if (1) {
        if (!*reinterpret_cast<void**>(&rax13)) {
            __asm__("a32 outsb ");
            rax13->f61 = reinterpret_cast<unsigned char>(rax13->f61 & *reinterpret_cast<unsigned char*>(&rcx));
            __asm__("outsb ");
            __asm__("outsb ");
            __asm__("outsd ");
            if (rax13->f61) 
                goto addr_402d00_33;
        } else {
            rsi15->f6c = reinterpret_cast<unsigned char>(rsi15->f6c & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                rsp41 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp41) - 8);
                *reinterpret_cast<struct s19**>(rsp41) = r12_42;
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 99) & *reinterpret_cast<unsigned char*>(&rcx));
                cf43 = 0;
                zf44 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 99) == 0;
                __asm__("outsb ");
                if (1) 
                    goto addr_402d2f_37; else 
                    goto addr_402cca_38;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x6f) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                if (1) {
                    __asm__("insb ");
                }
            }
        }
    } else {
        addr_402c24_41:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax13) + 1) = 0xff;
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s26**>(&rdi))->f69) = 0;
        if (!*reinterpret_cast<unsigned char*>(&(*reinterpret_cast<struct s26**>(&rdi))->f69)) {
            goto addr_402c98_43;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x69) = 0;
            if (1) {
                addr_402c55_45:
                rbx45->f6f = reinterpret_cast<unsigned char>(rbx46->f6f & *reinterpret_cast<unsigned char*>(&rdx3));
                zf47 = reinterpret_cast<uint1_t>(rbx48->f6f == 0);
                goto addr_402c57_46;
            } else {
                if (0) {
                    addr_402ca9_48:
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 83) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 83) & *reinterpret_cast<unsigned char*>(&rdx3));
                    *r10_49 = reinterpret_cast<unsigned char>(*r10_50 + *reinterpret_cast<unsigned char*>(&rcx));
                    goto addr_402cb2_49;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_402c9c_51:
                        *reinterpret_cast<unsigned char*>(&rsi15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi15) | *r8);
                        rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rsi15)));
                        goto addr_402ca9_48;
                    } else {
                        __asm__("insd ");
                        goto addr_402c3d_53;
                    }
                }
            }
        }
    }
    addr_402d65_54:
    addr_402d00_33:
    if (0) {
        cf43 = 0;
        zf44 = (reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rcx)) & reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax13))) == 0;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
        cf51 = 0;
        zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) == 0);
        if (!0) {
        }
        __asm__("outsb ");
        if (zf52) 
            goto addr_402de0_59; else 
            goto addr_402d77_60;
    }
    addr_402d2f_37:
    __asm__("insb ");
    if (!zf44) {
        addr_402da7_61:
        *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)));
        zf53 = *reinterpret_cast<void**>(&rax13) == 0;
        if (zf53) {
            addr_402dff_62:
            rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
        } else {
            if (!zf53) {
            }
        }
    } else {
        rsp41 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp41) - 8);
        *reinterpret_cast<struct s19**>(rsp41) = reinterpret_cast<struct s19*>(0x656c6946);
        if (!zf44) {
            __asm__("outsd ");
            if (0) 
                goto addr_402da5_67; else 
                goto addr_402da5_67;
        } else {
            addr_402d3c_68:
            if (cf43) {
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                goto addr_402db5_70;
            } else {
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                tmp32_54 = rcx;
                rcx = *reinterpret_cast<struct s19**>(&rax13);
                *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                *reinterpret_cast<struct s19**>(&rax13) = tmp32_54;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
                tmp32_55 = rsi15->f72 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax13));
                cf43 = reinterpret_cast<uint1_t>(tmp32_55 < rsi15->f72);
                rsi15->f72 = tmp32_55;
                zf56 = reinterpret_cast<uint1_t>(rsi15->f72 == 0);
                below_or_equal57 = reinterpret_cast<uint1_t>(cf43 | zf56);
                __asm__("outsb ");
                goto addr_402d47_72;
            }
        }
    }
    g402e0e = reinterpret_cast<unsigned char>(g402e0e & *reinterpret_cast<unsigned char*>(&rcx + 1));
    rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s19**>(&rax13) = *reinterpret_cast<struct s19**>(&rax13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    *reinterpret_cast<struct s19**>(&rax58) = *reinterpret_cast<struct s19**>(&rax13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax58) + 4) = 0;
    *rax58 = reinterpret_cast<signed char>(*rax58 + *reinterpret_cast<signed char*>(&rax58));
    *reinterpret_cast<struct s19**>(&rax59) = *reinterpret_cast<struct s19**>(&rax58);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax59) + 4) = 0;
    *rax59 = reinterpret_cast<signed char>(*rax59 + *reinterpret_cast<signed char*>(&rax59));
    __asm__("outsb ");
    *reinterpret_cast<struct s19**>(&rax60) = *reinterpret_cast<struct s19**>(&rax59);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax60) + 4) = 0;
    *rax60 = reinterpret_cast<signed char>(*rax60 + *reinterpret_cast<signed char*>(&rax60));
    g402e36 = *reinterpret_cast<unsigned char*>(&rcx + 1);
    *rax60 = reinterpret_cast<signed char>(*rax60 + *reinterpret_cast<signed char*>(&rax60));
    tmp32_61 = *reinterpret_cast<struct s19**>(&rsi15);
    *reinterpret_cast<struct s19**>(&rsi15) = *reinterpret_cast<struct s19**>(&rax60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
    *reinterpret_cast<struct s19**>(&rax13) = tmp32_61;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    goto addr_402e3e_78;
    addr_402da5_67:
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax13) + 1) = reinterpret_cast<unsigned char>(0xff + *reinterpret_cast<unsigned char*>(&rdx3));
    goto addr_402da7_61;
    addr_402d47_72:
    goto addr_402d49_79;
    addr_402de0_59:
    rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    goto addr_402de8_80;
    addr_402d77_60:
    if (0) {
        addr_402de8_80:
        rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax13) + 1) = 41;
        tmp8_62 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
        cf63 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_62) < reinterpret_cast<unsigned char>(rax13->f0));
        rax13->f0 = tmp8_62;
        rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3 + 1)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(rax13->f0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx3 + 1)) + cf63))));
        rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
        rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
        goto addr_402df3_81;
    } else {
        __asm__("outsb ");
        __asm__("insd ");
        __asm__("outsb ");
        if (zf52) {
            addr_402dd2_83:
            goto addr_402dd4_84;
        } else {
            if (zf52) {
                addr_402df3_81:
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                goto addr_402dff_62;
            } else {
                cf51 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax13)) < reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rdx3)));
                *reinterpret_cast<struct s19**>(&rax13) = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax13)) - reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rdx3)));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
                zf52 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s19**>(&rax13) == 0);
                if (zf52) {
                    addr_402dd4_84:
                    rsp41 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp41) - 8);
                    *reinterpret_cast<struct s19**>(rsp41) = rdi;
                    if (cf51) {
                        addr_402e40_87:
                    } else {
                        if (zf52) {
                            addr_402e3e_78:
                            rax13->f0 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax13->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                            goto addr_402e40_87;
                        } else {
                            goto addr_402de0_59;
                        }
                    }
                } else {
                    if (!(*reinterpret_cast<signed char*>(&r8) + r15_64->f65)) 
                        goto addr_402de8_80; else 
                        goto addr_402d9c_92;
                }
            }
        }
    }
    rdi65 = reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rdi) + 1);
    rsi66 = &rsi15->f1;
    *reinterpret_cast<struct s19**>(&rax67) = *reinterpret_cast<struct s19**>(&rax13);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax67) + 4) = 0;
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *reinterpret_cast<void**>(&rdx3 + 1) = reinterpret_cast<void*>(45);
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    g402e56 = reinterpret_cast<unsigned char>(g402e56 >> *reinterpret_cast<unsigned char*>(&rcx));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + *reinterpret_cast<signed char*>(&rax67));
    *rax67 = reinterpret_cast<unsigned char>(*rax67 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax67)));
    *rbx68 = *rbx69 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax67));
    *rsi66 = *rsi66 + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax67));
    *reinterpret_cast<struct s19**>(rcx) = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rcx)) + reinterpret_cast<unsigned char>(rcx));
    *rdi65 = *rdi65 + reinterpret_cast<unsigned char>(rcx);
    *reinterpret_cast<struct s19**>(rdx3) = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rdx3)) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx3)));
    tmp32_70 = g21415287 + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx3));
    g21415287 = tmp32_70;
    addr_402d9c_92:
    addr_402cca_38:
    cf43 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rdx3)) < reinterpret_cast<unsigned char>(rcx));
    below_or_equal57 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rdx3)) <= reinterpret_cast<unsigned char>(rcx));
    *reinterpret_cast<struct s19**>(rdx3) = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rdx3)) - reinterpret_cast<unsigned char>(rcx));
    zf56 = reinterpret_cast<uint1_t>(*reinterpret_cast<struct s19**>(rdx3) == 0);
    __asm__("outsd ");
    if (__intrinsic()) {
        addr_402d49_79:
        if (below_or_equal57) {
            addr_402db5_70:
            __asm__("xlatb ");
        } else {
            if (cf43) {
            }
            __asm__("outsb ");
            __asm__("insd ");
            __asm__("outsb ");
            if (zf56) 
                goto addr_402da7_61; else 
                goto addr_402d54_99;
        }
    } else {
        if (cf43) {
            goto addr_402d3c_68;
        } else {
            rsp41 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s19**>(rsp41) = reinterpret_cast<struct s19*>(0x30322074);
            goto addr_402cd3_103;
        }
    }
    addr_402d54_99:
    if (zf56) {
        *reinterpret_cast<uint32_t*>(&rsp41) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 0x73) * 0x71f0000;
        *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
        cf51 = __intrinsic();
        zf52 = __undefined();
        goto addr_402dd2_83;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) + reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rax13)));
        if (!*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) 
            goto addr_402da5_67;
    }
    __asm__("outsd ");
    __asm__("insd ");
    __asm__("insd ");
    goto addr_402d65_54;
    addr_402cd3_103:
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp17) + 0x39313032) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp17) + 0x39313032) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(&rsi15));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 97) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 97) & *reinterpret_cast<unsigned char*>(&rcx));
    cf43 = 0;
    zf56 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 97) == 0);
    below_or_equal57 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf56));
    if (!0) {
        __asm__("outsd ");
        rax13->f61 = reinterpret_cast<unsigned char>(rax13->f61 & *reinterpret_cast<unsigned char*>(&rdx3));
        __asm__("insb ");
    }
    addr_402c98_43:
    __asm__("outsd ");
    __asm__("outsb ");
    *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) - 32);
    goto addr_402c9c_51;
    addr_402c57_46:
    if (!zf47) {
    }
    addr_402cb2_49:
    __asm__("insb ");
    addr_402c3d_53:
    *reinterpret_cast<int32_t*>(&rsp71) = rsi15->f20 * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp71) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x72) = 0;
    *reinterpret_cast<struct s19**>(&rsi15) = reinterpret_cast<struct s19*>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 32) * 0x74206f74);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = 0;
    *reinterpret_cast<struct s19**>(reinterpret_cast<int64_t>(rsp71) - 8) = reinterpret_cast<struct s19*>(0x72462065);
    goto addr_402c55_45;
    addr_402a84_12:
    if (zf16) {
        addr_402aee_9:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 99) & *reinterpret_cast<unsigned char*>(&rcx));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x6d) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf72 = 0;
            goto addr_402b65_115;
        } else {
            *reinterpret_cast<unsigned char*>(&rcx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s19**>(rdx3)));
            cf72 = 0;
            zf47 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx) == 0);
            below_or_equal73 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf47));
            rsp74 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rsp6) - 8);
            *reinterpret_cast<struct s19**>(rsp74) = rsp74;
            rsp41 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp74) - 8);
            *reinterpret_cast<struct s19**>(rsp41) = reinterpret_cast<struct s19*>(0x70207369);
            if (0) {
                goto addr_402b71_118;
            }
        }
    } else {
        addr_402a86_20:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 0x72) = 0;
        __asm__("insd ");
        goto addr_402a8c_14;
    }
    addr_402b01_119:
    if (0) {
        addr_402b65_115:
        if (0) 
            goto addr_402bd4_120;
    } else {
        __asm__("insd ");
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 0x73) & *reinterpret_cast<unsigned char*>(&rcx + 1));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x73)) {
            addr_402b80_122:
            rsp75 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s19**>(rsp75) = r12_76;
            rcx = *reinterpret_cast<struct s19**>(rsp75);
            rsp20 = reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rsp75) + 8);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x72) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x72) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsi15->f49 = reinterpret_cast<unsigned char>(rsi15->f49 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
            goto addr_402b8b_25;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp18) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx3) + 0x75) * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp18) + 4) = 0;
            goto addr_402b14_23;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsp41) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp17) + 100) * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
    cf72 = __intrinsic();
    zf47 = __undefined();
    below_or_equal73 = reinterpret_cast<uint1_t>(cf72 | zf47);
    if (cf72) {
        if (cf72) {
            addr_402bf4_126:
            *reinterpret_cast<uint32_t*>(&rsp41) = *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rbp17) + 0x69);
            *reinterpret_cast<int32_t*>(&rsp41 + 4) = 0;
            if (below_or_equal73) {
                *reinterpret_cast<void**>(&rax13) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)) | rsi15->f6f);
                if (*reinterpret_cast<void**>(&rax13)) 
                    goto addr_402cd3_103;
            } else {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + 32) = 0;
                *reinterpret_cast<int32_t*>(&rbp17) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi) + 0x70);
                *reinterpret_cast<int32_t*>(&rbp17 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_402c24_41;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                    *reinterpret_cast<struct s19**>(reinterpret_cast<unsigned char>(rsp41) - 8) = rbp17;
                    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
                    __asm__("outsb ");
                    if (0) 
                        goto addr_402c75_133; else 
                        goto addr_402c14_134;
                }
            }
        } else {
            addr_402bd4_120:
            __asm__("insd ");
            __asm__("outsd ");
            if (!cf72) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rbp17) + 0x74) = 0;
            }
        }
    } else {
        addr_402b71_118:
        __asm__("outsb ");
        if (zf47) {
            if (!below_or_equal73) {
                *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx3) + 0x65) = reinterpret_cast<void*>(0);
                below_or_equal73 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx3) + 0x65) == 0)));
                goto addr_402bf4_126;
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x66) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 0x66) & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp77 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp41) - 8);
            *reinterpret_cast<struct s19**>(rsp77) = rdx3;
            rsp41 = reinterpret_cast<struct s19*>(reinterpret_cast<unsigned char>(rsp77) - 8);
            *reinterpret_cast<struct s19**>(rsp41) = rsp41;
            goto addr_402b80_122;
        }
    }
    addr_402c75_133:
    addr_402c14_134:
    __asm__("insb ");
    rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & *reinterpret_cast<unsigned char*>(&rdx3));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbp17) * 2) + 0x65) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdi) + 78) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    rsp41 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rsp6) - 8);
    *reinterpret_cast<struct s19**>(rsp41) = rbp17;
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi) + 0x65)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax13)));
    cf72 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_402a9f_142;
    goto addr_402b01_119;
    addr_402a9f_142:
    __asm__("insb ");
    rax13->f75 = reinterpret_cast<unsigned char>(rax13->f75 & *reinterpret_cast<unsigned char*>(&rdx3));
}

struct s31 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s32 {
    signed char[111] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
};

struct s33 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s34 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s35 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s36 {
    signed char[111] pad111;
    signed char f6f;
};

struct s37 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s38 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_402a29(struct s31* rdi, struct s32* rsi, int16_t dx, struct s34* rcx) {
    struct s33* rdx3;
    int1_t cf5;
    int1_t cf6;
    int1_t zf7;
    int1_t sf8;
    unsigned char ah9;
    struct s35* rbx10;
    int1_t zf11;
    struct s36* rbx12;
    void* rsp13;
    int1_t zf14;
    void** rax15;
    void** rax16;
    unsigned char ah17;
    struct s37* rbp18;
    struct s38* rbp19;
    unsigned char ah20;
    void* rax21;
    int64_t rbp22;

    *reinterpret_cast<int16_t*>(&rdx3) = dx;
    if (cf5) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf6) {
        goto addr_402a50_4;
    }
    if (!zf7) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf8) 
        goto addr_402a35_7;
    addr_402a41_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi->f72 = reinterpret_cast<unsigned char>(rsi->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_402ace_12;
    } else {
        addr_402a50_4:
    }
    rdi->f41 = reinterpret_cast<unsigned char>(rdi->f41 & *reinterpret_cast<unsigned char*>(&rdx3));
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf14 = *reinterpret_cast<void**>(&rsp13) == *rax15;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp13)) <= reinterpret_cast<uint32_t>(*rax16)) 
        goto addr_402b55_15;
    addr_402b55_15:
    if (zf14) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf14) 
        goto addr_402b5a_18;
    rsi->f6f = reinterpret_cast<unsigned char>(rsi->f6f & ah17);
    addr_402b5a_18:
    rbp18->f76 = reinterpret_cast<unsigned char>(rbp19->f76 & ah20);
    addr_402ace_12:
    addr_402a35_7:
    *reinterpret_cast<unsigned char*>(&rdx3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx3) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax21) + rbp22 * 2 + 0x69));
    if (1) {
        rdx3->f65 = 0;
        if (__undefined()) 
            goto addr_402ace_12; else 
            goto "???";
    } else {
        if (0) 
            goto " as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        __asm__("outsd ");
        if (0) 
            goto "ublic License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
            goto addr_402a41_9;
    }
}

struct s39 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s40 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s41 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s42 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_402a51() {
    void* rsp1;
    int1_t cf2;
    int1_t sf3;
    int1_t zf4;
    void** rax5;
    void** rax6;
    struct s39* rsi7;
    struct s40* rsi8;
    unsigned char al9;
    struct s41* rbx10;
    struct s42* rbx11;
    unsigned char dl12;

    rsp1 = __zero_stack_offset();
    if (cf2) {
        if (!sf3) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf4) 
            goto addr_402ac2_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp1)) < reinterpret_cast<int32_t>(*rax5)) {
            if (*reinterpret_cast<void**>(&rsp1) != *rax6) {
            }
        }
    }
    addr_402ac2_4:
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & al9);
    rbx10->f6f = reinterpret_cast<unsigned char>(rbx11->f6f & dl12);
}

void fun_402a71() {
    int1_t cf1;

    __asm__("outsd ");
    if (cf1) 
        goto " GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insd ");
    __asm__("outsd ");
}

void fun_402ab6() {
    __asm__("insb ");
}

struct s43 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s44 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s45 {
    signed char[111] pad111;
    signed char f6f;
};

struct s46 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s47 {
    signed char[78] pad78;
    unsigned char f4e;
};

void fun_402acf() {
    int1_t cf1;
    struct s43* rsi2;
    struct s44* rsi3;
    unsigned char al4;
    struct s45* rsi5;
    struct s46* rcx6;
    struct s47* rcx7;
    unsigned char al8;

    if (!cf1) {
        rsi2->f6f = reinterpret_cast<unsigned char>(rsi3->f6f & al4);
        if (rsi5->f6f) {
            rcx6->f4e = reinterpret_cast<unsigned char>(rcx7->f4e & al8);
        }
    }
}

struct s48 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_402ad8(struct s48* rdi) {
    void* rsp2;
    int1_t zf3;
    void** rax4;
    void** rax5;
    int64_t rbp6;
    void* rax7;
    void* rax8;
    unsigned char dh9;

    rsp2 = __zero_stack_offset();
    if (!zf3) {
        __asm__("outsd ");
        __asm__("outsb ");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp2)) <= reinterpret_cast<uint32_t>(*rax4)) 
            goto "ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp2)) < reinterpret_cast<uint32_t>(*rax5)) 
            goto "thout even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        *reinterpret_cast<int32_t*>(&rbp6) = rdi->f6e * 0x6f203220;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax7) + rbp6 * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax8) + rbp6 * 2 + 0x65) & dh9);
    }
}

void fun_402b24() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s49 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s50 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s51 {
    signed char[115] pad115;
    signed char f73;
};

void fun_402b2f() {
    struct s49* rbp1;
    struct s50* rbp2;
    unsigned char dh3;
    struct s51* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_402b3a(int64_t rdi) {
    int1_t zf2;

    if (!zf2) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_402bc4() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s52 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s53 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_402bdd() {
    struct s52* rax1;
    struct s53* rax2;
    unsigned char ch3;

    if (!__undefined()) 
        goto "he GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!__intrinsic()) 
        goto "e Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (!__undefined()) 
        goto "Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    rax1->f61 = reinterpret_cast<unsigned char>(rax2->f61 & ch3);
}

void fun_402c19() {
    __asm__("insb ");
}

void fun_402c5e() {
    int1_t cf1;

    if (cf1) 
        goto "cense)\nCopyright 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com"; else 
        goto "???";
}

void fun_402c67() {
    int1_t zf1;

    if (zf1) 
        goto "ght 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com";
    __asm__("outsd ");
    __asm__("outsb ");
    __asm__("outsb ");
}

struct s54 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s55 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_402c79() {
    struct s54* rsi1;
    struct s55* rsi2;
    unsigned char al3;

    __asm__("outsb ");
    if (__undefined()) 
        goto "sign Hannover, Germany\ninfo@paland.com";
    if (__undefined()) 
        goto "land Printf (MIT License)\nCopyright 2014-2019 Marco Paland\nPALANDesign Hannover, Germany\ninfo@paland.com";
    rsi1->f69 = reinterpret_cast<unsigned char>(rsi2->f69 & al3);
}

struct s56 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s57 {
    signed char[114] pad114;
    unsigned char f72;
};

void fun_402cb4() {
    struct s56* rax1;
    struct s57* rax2;
    unsigned char dl3;

    __asm__("outsb ");
    rax1->f72 = reinterpret_cast<unsigned char>(rax2->f72 & dl3);
}

void fun_402cea() {
    __asm__("outsb ");
    if (1) 
        goto "etCommandLineW"; else 
        goto "???";
}

void fun_402d08(int64_t rdi, int64_t rsi) {
    int1_t sf3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    __asm__("outsb ");
    if (!sf3) {
        *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    }
}

void fun_402d14() {
    __asm__("outsb ");
}

void fun_402d21() {
    int1_t cf1;
    int32_t eax2;
    uint32_t eax3;

    cf1 = reinterpret_cast<uint32_t>(eax2 + 0x74697845) < eax3;
    if (cf1) 
        goto "GetLastError";
    if (!cf1) 
        goto 0x402d2e; else 
        goto "???";
}

void fun_402d66() {
    __asm__("outsb ");
    if (__undefined()) 
        goto "etDefaultDllDirectories"; else 
        goto "???";
}

void fun_402d9d() {
    int1_t cf1;
    int1_t cf2;

    if (!cf1) 
        goto 0x402e13;
    if (cf2) 
        goto 0x402e14; else 
        goto "???";
}

void fun_402db0() {
    __asm__("outsb ");
    __asm__("insb ");
}

void fun_402dbf() {
    int1_t zf1;
    int1_t zf2;

    if (!zf1) 
        goto 0x402e2d;
    if (zf2) 
        goto 0x402e07;
    __asm__("insb ");
    __asm__("insb ");
}

void fun_402e7b() {
    int32_t* rbx1;
    int32_t* rbx2;
    int32_t ebx3;

    *rbx1 = *rbx2 + ebx3;
}

void fun_402e83() {
}

void fun_402e8a() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    uint32_t* rax10;
    uint32_t* rax11;
    uint32_t eax12;
    int64_t rcx13;
    int64_t rcx14;
    int32_t eax15;
    int64_t rcx16;
    int64_t rcx17;
    int32_t edx18;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = *rax11 | eax12;
    *reinterpret_cast<int32_t*>(rcx13 + 0x120104) = *reinterpret_cast<int32_t*>(rcx14 + 0x120104) + eax15;
    *reinterpret_cast<int32_t*>(rcx16 + 0x1c0a100f) = *reinterpret_cast<int32_t*>(rcx17 + 0x1c0a100f) + edx18;
}

void fun_402e9f() {
    unsigned char* rsi1;
    signed char* rsi2;
    signed char al3;
    uint1_t cf4;

    *rsi1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi2 + al3) + cf4);
}

void fun_402ea5() {
    unsigned char* rsi1;
    signed char* rsi2;
    signed char al3;
    uint1_t cf4;
    int32_t* rax5;
    signed char al6;

    *rsi1 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*rsi2 + al3) + cf4);
    *reinterpret_cast<signed char*>(&rax5) = reinterpret_cast<signed char>(al6 + 16);
    *rax5 = *rax5 - 0x5f7d0000;
}

struct s58 {
    unsigned char f0;
    signed char[1711345791] pad1711345792;
    int32_t f66011080;
};

struct s59 {
    signed char[46] pad46;
    signed char f2e;
};

struct s60 {
    signed char[46] pad46;
    signed char f2e;
};

void fun_402eb3() {
    void* rsp1;
    struct s58* rax2;
    signed char dl3;
    struct s59* rsi4;
    struct s60* rsi5;

    rsp1 = __zero_stack_offset();
    *reinterpret_cast<void**>(&rax2) = *reinterpret_cast<void**>(&rsp1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (1) {
        goto addr_402f2f_3;
    } else {
        if (1) {
            addr_402f2f_3:
        } else {
            if (!1) {
            }
        }
        *reinterpret_cast<void**>(&rax2) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax2)) | 0xce);
        *reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1) = reinterpret_cast<void*>(reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1)) + dl3);
        rax2->f0 = reinterpret_cast<unsigned char>(rax2->f0 + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax2) + 0x66011080) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax2) + 0x66011080) - 0x7be0f0d2;
        rax2->f0 = reinterpret_cast<unsigned char>(rax2->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax2)));
        rax2->f0 = reinterpret_cast<unsigned char>(rax2->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax2)));
        rsi4->f2e = reinterpret_cast<signed char>(rsi5->f2e + reinterpret_cast<signed char>(*reinterpret_cast<void**>(reinterpret_cast<int64_t>(&rax2) + 1)));
    }
}

void fun_402ec8(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    signed char ah6;
    int64_t rax7;
    int16_t ax8;

    *reinterpret_cast<signed char*>(rbp4 - 96) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp5 - 96) + ah6);
    *reinterpret_cast<uint32_t*>(&rax7) = reinterpret_cast<uint32_t>(static_cast<int32_t>(ax8));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    *reinterpret_cast<signed char*>(rax7 + 0xc160409) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax7 + 0xc160409) + *reinterpret_cast<signed char*>(&rdx));
}

void fun_402f06() {
    signed char* rax1;
    signed char ah2;
    signed char dl3;
    uint32_t* rcx4;
    int32_t* rcx5;
    int64_t rsi6;
    int64_t rdx7;
    int64_t rsi8;
    int64_t rdx9;
    unsigned char al10;
    int32_t* rcx11;
    int32_t* rcx12;
    int32_t ecx13;
    uint32_t* rcx14;
    int32_t* rcx15;

    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax1) + 1) = reinterpret_cast<signed char>(ah2 + dl3);
    *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax1) + 1));
    *rcx4 = *rcx5 + *reinterpret_cast<uint32_t*>(&rax1);
    *reinterpret_cast<uint32_t*>(rsi6 + rdx7) = *reinterpret_cast<uint32_t*>(rsi8 + rdx9) | *reinterpret_cast<uint32_t*>(&rax1);
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al10 | 38);
    __asm__("retf ");
    *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax1) + 1));
    __asm__("out 0x1, eax");
    *rcx11 = *rcx12 + ecx13;
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax1) + 22) | 0xce);
    *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rax1) + 1));
    *rcx14 = *rcx15 + *reinterpret_cast<uint32_t*>(&rax1);
}

void fun_402f23() {
}

void fun_402f25(int64_t rdi, signed char* rsi, signed char dl, signed char cl) {
    signed char bh5;

    *rsi = reinterpret_cast<signed char>(*rsi + cl);
    *reinterpret_cast<int32_t*>(rdi - 19) = *reinterpret_cast<int32_t*>(rdi - 19) + *reinterpret_cast<int32_t*>(&rdi);
    *reinterpret_cast<signed char*>(rdi - 0x80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rdi - 0x80) + reinterpret_cast<signed char>(bh5 + dl));
}

void fun_40114f(uint64_t rdi) {
    uint64_t* rax2;

    rax2 = fun_4010fb(rdi, 3, 0x6f000, 0x3220);
    *rax2 = *rax2 & 0xfffffffffffffffe;
    __asm__("invlpg [rbx]");
    return;
}

int64_t fun_401214() {
    return 0;
}

void fun_401240() {
    return;
}

int64_t fun_402615() {
    int64_t rax1;
    uint32_t eax2;
    uint32_t eax3;
    int1_t cf4;

    *reinterpret_cast<uint32_t*>(&rax1) = eax2 >> 16 & 0xfff | eax3 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    cf4 = *reinterpret_cast<uint16_t*>(&rax1) < 0xfff;
    if (!cf4) {
        *reinterpret_cast<uint32_t*>(&rax1) = g404668;
    } else {
        __asm__("syscall ");
        if (!cf4) {
            return rax1;
        }
    }
    g407838 = *reinterpret_cast<uint32_t*>(&rax1);
    return 0xff;
}

void fun_4026e7() {
    return;
}

void fun_4027d5(int64_t* rdi, int64_t* rsi, void* rdx) {
    int64_t rbx4;

    rbx4 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsi) + reinterpret_cast<int64_t>(rdx) - 8);
    *rdi = *rsi;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx) - 8) = rbx4;
}

void fun_40286d(int64_t rdi) {
}

void fun_40288a(signed char* rdi, int32_t esi, uint64_t rdx) {
    int64_t rsi2;
    int32_t eax4;
    uint64_t rcx5;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    if (rdx >= 0x400) {
        eax4 = *reinterpret_cast<int32_t*>(&rsi2);
        rcx5 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx5)) {
            *reinterpret_cast<int32_t*>(&rcx5) = *reinterpret_cast<int32_t*>(&rcx5) - 1;
            *rdi = *reinterpret_cast<signed char*>(&eax4);
            ++rdi;
        }
        goto 0x4028ef;
    }
}

void fun_4028f2(uint64_t* rdi, unsigned char sil) {
    *rdi = static_cast<uint64_t>(sil) * 0x101010101010101;
}

struct s61 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s62 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s63 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_40117b(struct s61* rdi) {
    struct s61* r9_2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s62* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s62* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s62* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s63* rax18;

    r9_2 = rdi;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_2) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s62*>(&r9_2->f18);
    if (1 < r10d3) {
        do {
            rbx7 = rdx6->f0;
            r13_8 = rdx6->f8;
            r8_9 = rdx6;
            r12d10 = rdx6->f10;
            r14d11 = rdx6->f14;
            *reinterpret_cast<uint32_t*>(&rax12) = r11d5;
            do {
                ecx13 = *reinterpret_cast<uint32_t*>(&rax12);
                *reinterpret_cast<uint32_t*>(&rax12) = *reinterpret_cast<uint32_t*>(&rax12) - 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
                if (rbx7 == (r8_9 - 1)->f0) 
                    break;
                rsi14 = &(r8_9 - 1)->f0;
                rdi15 = r8_9;
                --r8_9;
                zf16 = *reinterpret_cast<uint32_t*>(&rax12) == 0;
                ecx17 = 6;
                while (ecx17) {
                    --ecx17;
                    rdi15->f0 = *rsi14;
                    rdi15 = reinterpret_cast<struct s62*>(&rdi15->pad8);
                    ++rsi14;
                }
            } while (!zf16);
            goto addr_4011e5_12;
            *reinterpret_cast<uint32_t*>(&rax12) = ecx13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            continue;
            addr_4011e5_12:
            ++r11d5;
            ++rdx6;
            rax18 = reinterpret_cast<struct s63*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_2));
            rax18->f0 = rbx7;
            rax18->f8 = r13_8;
            rax18->f10 = r12d10;
            rax18->f14 = r14d11;
        } while (r11d5 < r10d3);
        return;
    } else {
        return;
    }
}

void fun_401217() {
    __asm__("cli ");
    __asm__("hlt ");
}

void fun_401245() {
    int64_t v1;
    int64_t r12_2;
    void* r13_3;
    int64_t* r14_4;
    int64_t* rdi5;
    int64_t rcx6;
    int64_t rcx7;
    int64_t* rdi8;
    int64_t* rax9;
    int32_t eax10;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<unsigned char*>(&g404630) = 8;
    r12_2 = *reinterpret_cast<int32_t*>(&v1);
    r13_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    r14_4 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r12_2 * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi5) = reinterpret_cast<int32_t>(" -");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx6) = 11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    while (rcx6) {
        --rcx6;
        *rdi5 = reinterpret_cast<int64_t>(fun_401214);
        ++rdi5;
    }
    *reinterpret_cast<uint32_t*>(&rcx7) = 0xffffffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    rdi8 = r14_4;
    do {
        if (!rcx7) 
            break;
        --rcx7;
        ++rdi8;
    } while (*rdi8);
    fun_401297();
    g40783c = g40783c | 1;
    *reinterpret_cast<int32_t*>(&rax9) = 0x403008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (0x403010 != rax9) {
        *rax9();
        ++rax9;
    }
    eax10 = fun_40141f(r12_2, r13_3, r14_4);
    fun_4017fd(eax10, r13_3, r14_4);
}

uint64_t g406048 = 0;

int64_t fun_401433() {
    struct s5* r12_1;
    int1_t zf2;
    int32_t edi3;
    uint32_t eax4;
    int1_t zf5;
    struct s5* r13_6;
    uint64_t r12_7;
    struct s5** rax8;
    uint64_t rbx9;
    struct s5** rdx10;
    uint64_t r14_11;
    int1_t cf12;
    signed char al13;
    struct s5** rax14;
    int64_t rax15;

    r12_1 = g406038;
    zf2 = (*reinterpret_cast<unsigned char*>(&g404630) & 4) == 0;
    if (!zf2 || (edi3 = r12_1->fc, eax4 = fun_40156c(edi3), !!eax4)) {
        r12_1->f0 = 1;
    }
    zf5 = g406050 == 0;
    r13_6 = r12_1;
    if (zf5) {
        g406050 = reinterpret_cast<struct s5**>(0x406058);
        g406048 = 8;
        fun_40215b(fun_401faf, 0, 0);
    }
    r12_7 = g406040;
    rax8 = g406050;
    rbx9 = r12_7 - 1;
    do {
        if (rbx9 == 0xffffffffffffffff) 
            break;
        rdx10 = rax8 + rbx9;
        --rbx9;
    } while (*reinterpret_cast<int64_t*>(rax8 + rbx9 + 1));
    goto addr_4014cf_9;
    r14_11 = r12_7 + 1;
    cf12 = r14_11 < g406048;
    if (cf12 || (al13 = fun_402286(0x406050, 0x406048, 8, 1), !!al13)) {
        rax14 = g406050;
        rbx9 = r12_7;
        rax14[r12_7] = r13_6;
        g406040 = r14_11;
    }
    *reinterpret_cast<int32_t*>(&rax15) = *reinterpret_cast<int32_t*>(&rbx9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    addr_40151b_13:
    return rax15;
    addr_4014cf_9:
    *rdx10 = r13_6;
    *reinterpret_cast<int32_t*>(&rax15) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    goto addr_40151b_13;
}

void fun_40205a(struct s5* rdi) {
    uint64_t rax2;
    uint64_t rax3;
    struct s5** rcx4;
    struct s5** rcx5;

    rax2 = g406040;
    rax3 = rax2 - 1;
    do {
        if (rax3 == 0xffffffffffffffff) 
            break;
        rcx4 = g406050;
        rcx5 = rcx4 + rax3;
        --rax3;
    } while (*rcx5 != rdi);
    goto addr_40207d_4;
    return;
    addr_40207d_4:
    *rcx5 = reinterpret_cast<struct s5*>(0);
    return;
}

struct s64 {
    signed char[16] pad16;
    uint32_t f10;
    uint32_t f14;
    int64_t f18;
    int32_t f20;
};

int64_t fun_4020d8(struct s64* rdi) {
    int32_t r8d2;
    int64_t rcx3;
    uint32_t eax4;
    int64_t rsi5;
    int64_t rax6;

    r8d2 = 0;
    while (*reinterpret_cast<uint32_t*>(&rcx3) = rdi->f14, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0, *reinterpret_cast<uint32_t*>(&rcx3) != rdi->f10) {
        __asm__("in al, dx");
        if (*reinterpret_cast<unsigned char*>(&eax4) & 1) {
            __asm__("in al, dx");
            ++r8d2;
            *reinterpret_cast<unsigned char*>(rdi->f18 + rcx3) = *reinterpret_cast<unsigned char*>(&eax4);
            *reinterpret_cast<int32_t*>(&rsi5) = rdi->f20;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
            eax4 = rdi->f14 + 1 & static_cast<uint32_t>(rsi5 - 1);
            rdi->f14 = eax4;
        } else {
            __asm__("pause ");
        }
    }
    *reinterpret_cast<int32_t*>(&rax6) = r8d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

void fun_4025d0() {
    uint64_t rax1;
    int16_t ax2;

    *reinterpret_cast<int32_t*>(&rax1) = ax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax1) < 0) 
        goto 0x4025f2;
    __asm__("syscall ");
    if (rax1 < 0xfffffffffffff001) {
        return;
    }
}

int64_t fun_4026d0(int64_t rdi) {
    int32_t ecx2;
    int64_t rax3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rcx6;

    ecx2 = static_cast<int32_t>(rdi - 7);
    if (*reinterpret_cast<unsigned char*>(&ecx2) > 85) {
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<unsigned char*>(&rdi);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rax3) > 0x7f || !(*reinterpret_cast<unsigned char*>(0x404320 + rax3) & 16)) {
            *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<uint32_t*>(&rax3) & 0xffffffc0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rdi5) = (*reinterpret_cast<uint32_t*>(&rdi) & 7) << 24 | (*reinterpret_cast<uint32_t*>(&rdi) & 56) << 13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rax3) = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdi5 + rax4 * 4) + 0x3030305c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
        return rax3;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx6) = *reinterpret_cast<unsigned char*>(&ecx2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        goto *reinterpret_cast<int64_t*>(rcx6 * 8 + 0x404070);
    }
}

void fun_4026ea() {
    return;
}

void fun_402740(int64_t rdi) {
}

struct s65 {
    signed char f0;
    signed char f1;
    signed char f2;
};

struct s66 {
    signed char f0;
    signed char f1;
    signed char f2;
};

void fun_4027f8(struct s65* rdi, struct s66* rsi) {
    rdi->f2 = rsi->f2;
    rdi->f1 = rsi->f1;
    rdi->f0 = rsi->f0;
    goto 0x4027e7;
}

void fun_4027e9(int32_t* rdi, int32_t* rsi, void* rdx) {
    int32_t ebx4;

    ebx4 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi) + reinterpret_cast<int64_t>(rdx) - 4);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx) - 4) = ebx4;
}

struct s67 {
    signed char f0;
    signed char f1;
    signed char f2;
};

void fun_402922(struct s67* rdi, signed char sil) {
    rdi->f2 = sil;
    rdi->f1 = sil;
    rdi->f0 = sil;
    goto 0x4028ef;
}

void fun_40290e() {
}

int64_t fun_401e02() {
    return 0x407838;
}

void fun_4029a1(struct s7* rdi, struct s8* rsi) {
    unsigned char dh3;
    signed char ch4;

    rdi->f6f = reinterpret_cast<unsigned char>(rdi->f6f & dh3);
    if (!0) {
        rsi->f6f = reinterpret_cast<signed char>(rsi->f6f + ch4);
        __asm__("insb ");
        __asm__("insb ");
        if (0) 
            goto "Roberts Tunney\n\nThis program is free software; you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        __asm__("insb ");
    }
}

void fun_401223() {
    goto 0x401222;
}

void fun_40124e(int64_t rdi) {
    int1_t zf2;

    zf2 = rdi == 0;
    if (!zf2) {
    }
    if (zf2) 
        goto 0x40125e;
    *reinterpret_cast<unsigned char*>(&g404630) = 32;
}

int64_t fun_402115(struct s4* rdi) {
    int32_t r8d2;
    uint32_t eax3;
    int64_t rax4;

    r8d2 = 0;
    while (rdi->f14 != rdi->f10) {
        __asm__("in al, dx");
        if (*reinterpret_cast<unsigned char*>(&eax3) & 32) {
            __asm__("out dx, al");
            ++r8d2;
            eax3 = reinterpret_cast<uint32_t>(rdi->f20 - 1);
            rdi->f10 = rdi->f10 + 1 & eax3;
        } else {
            __asm__("pause ");
        }
    }
    *reinterpret_cast<int32_t*>(&rax4) = r8d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

int64_t g403058 = 0x2db6;

int64_t g403030 = 0x2d5c;

int64_t g403038 = 0x2d6e;

int64_t g403028 = 0x2d42;

void fun_401867() {
    void* rbp1;
    int32_t eax2;
    void* r9_3;
    struct s11* rax4;
    struct s11* rax5;
    struct s11* rdi6;
    struct s11* rdx7;
    struct s11* r13_8;
    void* rax9;
    signed char* rcx10;
    void* v11;
    uint32_t eax12;
    uint32_t* rsi13;
    uint32_t eax14;
    uint32_t v15;
    void* rax16;
    signed char* rcx17;
    signed char* r10_18;
    uint32_t* rsi19;
    uint64_t r8_20;
    struct s11* rdx21;
    signed char* r11_22;
    signed char* rax23;
    uint32_t r9d24;
    uint64_t rax25;
    uint32_t eax26;
    uint32_t eax27;
    void* rax28;
    void* rax29;
    void* rcx30;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax2 = reinterpret_cast<int32_t>(g403058());
    if (!eax2) {
        g403050();
        r9_3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp1) - 0x8030);
        g403060();
        g403018();
    }
    g404630 = 4;
    rax4 = reinterpret_cast<struct s11*>(g403030());
    rax5 = reinterpret_cast<struct s11*>(g403038());
    rdi6 = rax4;
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(&rdx7 + 2) = 0;
    r13_8 = rax5;
    fun_401afe(rdi6, reinterpret_cast<int64_t>(rbp1) - 0xc02f, 0x3fff, reinterpret_cast<int64_t>(rbp1) - 0xd030, 0x200, r9_3);
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (rcx10 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(v11) + reinterpret_cast<int64_t>(rax9)), *reinterpret_cast<signed char*>(&rdx7) = *rcx10, !!*reinterpret_cast<signed char*>(&rdx7)) {
        if (*reinterpret_cast<signed char*>(&rdx7) == 92) {
            *rcx10 = 47;
        }
        rax9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax9) + 1);
    }
    eax12 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s11**>(&r13_8->f0));
    if (*reinterpret_cast<uint16_t*>(&eax12) > 0xd7ff) {
        rsi13 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) - 0xe044);
        rdi6 = r13_8;
        eax14 = fun_40262d(rdi6, rsi13, rdx7, rcx10, 0x200, rdi6, rsi13, rdx7, rcx10, 0x200);
    } else {
        v15 = eax12;
        eax14 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax16) = eax14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    rcx17 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) - 0x8030);
    r10_18 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) - 50);
    rsi19 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp1) - 0xe044);
    *reinterpret_cast<int32_t*>(&r8_20) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = 0;
    rdx21 = reinterpret_cast<struct s11*>(reinterpret_cast<uint16_t>(r13_8) + (reinterpret_cast<int64_t>(rax16) + reinterpret_cast<int64_t>(rax16)));
    r11_22 = rcx17;
    while (v15) {
        ++r8_20;
        if (r8_20 <= 0x1ff) {
            rax23 = reinterpret_cast<signed char*>(0);
            if (reinterpret_cast<uint64_t>(rcx17) < reinterpret_cast<uint64_t>(r10_18)) {
                rax23 = rcx17;
            }
            *reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rbp1) + r8_20 * 8 - 0xe038) = rax23;
        }
        do {
            r9d24 = v15;
            rax25 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r9d24)));
            if (r9d24 > 0x7f) {
                *reinterpret_cast<uint32_t*>(&rdi6) = r9d24;
                *reinterpret_cast<int32_t*>(&rdi6 + 2) = 0;
                rax25 = fun_40263c(*reinterpret_cast<uint32_t*>(&rdi6), rsi19, rdx21, rcx17);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx17) >= reinterpret_cast<uint64_t>(r10_18)) 
                    break;
                ++rcx17;
                rax25 = rax25 >> 8;
            } while (rax25);
            eax26 = reinterpret_cast<uint16_t>(*reinterpret_cast<struct s11**>(&rdx21->f0));
            if (*reinterpret_cast<uint16_t*>(&eax26) > 0xd7ff) {
                rdi6 = rdx21;
                eax27 = fun_40262d(rdi6, rsi19, rdx21, rcx17, r8_20);
            } else {
                v15 = eax26;
                eax27 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax28) = eax27;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
            rdx21 = reinterpret_cast<struct s11*>(reinterpret_cast<uint16_t>(rdx21) + (reinterpret_cast<int64_t>(rax28) + reinterpret_cast<int64_t>(rax28)));
        } while (r9d24);
        rax29 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx17) - reinterpret_cast<uint64_t>(r11_22));
        if (reinterpret_cast<uint64_t>(rax29) > 0x7ffd) {
            rax29 = reinterpret_cast<void*>(0x7ffd);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) + reinterpret_cast<uint64_t>(rax29) - 0x8030) = 0;
    }
    if (reinterpret_cast<uint64_t>(rcx17) < reinterpret_cast<uint64_t>(r10_18)) {
        ++rcx17;
    }
    rcx30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx17) - reinterpret_cast<uint64_t>(r11_22));
    if (reinterpret_cast<uint64_t>(rcx30) > 0x7ffe) {
        rcx30 = reinterpret_cast<void*>(0x7ffe);
    }
    if (r8_20 > 0x1ff) {
        r8_20 = 0x1ff;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) + reinterpret_cast<uint64_t>(rcx30) - 0x8030) = 0;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp1) + r8_20 * 8 - 0xe030) = 0;
    g403028(rdi6, rsi19);
    goto 0x401524;
}

void fun_4025fa() {
    goto 0x402607;
}

void fun_4026ed() {
    return;
}

void fun_402970() {
    goto 0x40296f;
}

void fun_401225() {
    int64_t rcx1;

    rcx1 = 8;
    while (*reinterpret_cast<int32_t*>(&rcx1)) {
        *reinterpret_cast<int32_t*>(&rcx1) = *reinterpret_cast<int32_t*>(&rcx1) - 1;
    }
    while (1) {
        __asm__("cli ");
        __asm__("lidt [rsi-0x8]");
        __asm__("ud2 ");
    }
}

void fun_402600() {
}

int64_t fun_4026f0() {
    int64_t rax1;
    uint32_t eax2;

    *reinterpret_cast<uint32_t*>(&rax1) = eax2 | 0xa5c6e00;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    return rax1;
}

void fun_402972() {
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

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
}

void fun_4026f6() {
    return;
}

void fun_4026f9() {
    return;
}

void fun_4026fc() {
    return;
}

void fun_4026ff() {
    return;
}

void fun_402702() {
    return;
}

void fun_402705() {
    return;
}

void fun_402708() {
    return;
}
