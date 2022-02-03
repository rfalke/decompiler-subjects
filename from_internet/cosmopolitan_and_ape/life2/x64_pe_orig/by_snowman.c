
uint32_t g437fb4;

uint32_t g4362b8;

void fun_4046c1();

struct s0 {
    uint64_t f0;
    int64_t f8;
    int32_t f10;
};

uint64_t* fun_401158(uint64_t* rcx, uint64_t* rdx);

void* fun_401000() {
    int1_t zf1;
    uint64_t* rcx2;
    struct s0* r13_3;
    uint64_t r12_4;
    struct s0* rbx5;
    struct s0* rax6;
    uint64_t r12_7;
    uint64_t rax8;
    uint64_t* rax9;
    uint64_t rdx10;

    g437fb4 = g437fb4 | 2;
    zf1 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("syscall ");
        __asm__("syscall ");
    }
    fun_4046c1();
    rcx2 = reinterpret_cast<uint64_t*>(0);
    r13_3 = reinterpret_cast<struct s0*>(0x86);
    *reinterpret_cast<int32_t*>(&r12_4) = 0x100000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = 0;
    rbx5 = reinterpret_cast<struct s0*>(0x86);
    while (rbx5->f8) {
        do {
            rax6 = rbx5;
            rbx5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx5) + 24);
            if (!(rbx5->f10 - 1)) 
                break;
        } while (rbx5->f8);
        goto addr_4010a6_7;
        rbx5 = rax6;
        addr_4010ab_9:
        if (rbx5->f0 >= r12_4) {
            r12_4 = rbx5->f0;
        }
        r12_7 = r12_4 + 0xfff;
        while (1) {
            r12_4 = r12_7 & 0xfffffffffffff000;
            while (r12_4 < (rbx5->f8 + rbx5->f0 & 0xfffffffffffff000)) {
                while (r13_3->f8 && (r13_3->f10 == 1 || r13_3->f0 + r13_3->f8 < r12_4)) {
                    r13_3 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r13_3) + 24);
                }
                if (r13_3->f0 > r12_4) 
                    goto addr_40110e_17;
                rax8 = r13_3->f0 + r13_3->f8;
                if (rax8 > r12_4) 
                    goto addr_401105_19;
                addr_40110e_17:
                rax9 = fun_401158(rcx2, 6);
                rdx10 = r12_4;
                rcx2 = rcx2;
                r12_4 = r12_4 + 0x1000;
                *rax9 = rdx10 | 3;
            }
            break;
            addr_401105_19:
            r12_7 = rax8 + 0xfff;
        }
        rbx5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx5) + 24);
        continue;
        addr_4010a6_7:
        goto addr_4010ab_9;
    }
    goto 0xdf;
}

uint64_t g436000;

struct s1 {
    int32_t f0;
    int32_t f4;
    int64_t f8;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

unsigned char g436008;

struct s5 {
    int64_t f0;
    int64_t f8;
};

int64_t fun_4014ba(int64_t rcx, int64_t rdx);

struct s6 {
    int64_t f0;
    int64_t f8;
};

struct s7 {
    int64_t f0;
    int64_t f8;
};

int64_t fun_40462e();

struct s8 {
    int64_t f0;
    int64_t f8;
};

void fun_40150f(int64_t rcx, uint64_t rdx);

void fun_40457c();

struct s9 {
    int64_t f0;
    unsigned char f8;
};

int64_t fun_404690(int64_t rcx, uint32_t edx);

struct s10 {
    unsigned char f0;
    signed char[7] pad8;
    uint64_t f8;
};

struct s11 {
    uint64_t f0;
    int64_t f8;
};

int64_t fun_404355(int64_t rcx);

struct s12 {
    int64_t f0;
    int64_t f8;
};

int64_t GetSystemInfo = 0x4bf4;

struct s13 {
    struct s13* f0;
    signed char[4] pad8;
    struct s13* f8;
    signed char[4] pad16;
    struct s13* f10;
    signed char[4] pad24;
    struct s13* f18;
};

void fun_403817(struct s13* rcx);

struct s14 {
    int64_t f0;
    int64_t f8;
};

void fun_401466(int64_t rcx, uint64_t rdx);

struct s13* fun_403312(struct s13* rcx, uint64_t rdx);

struct s15 {
    struct s13* f0;
    signed char[4] pad8;
    struct s13* f8;
    signed char[4] pad16;
    struct s15* f10;
    uint32_t f18;
};

struct s15* fun_403c02(struct s13* rcx, uint64_t rdx, int64_t r8);

void fun_4012f0() {
    int32_t eax1;
    int32_t edx2;
    struct s1* rdi3;
    struct s2* rdi4;
    struct s3* rdi5;
    int64_t rcx6;
    struct s4* rdi7;
    int64_t rdx8;
    int64_t rax9;
    int64_t v10;
    int1_t below_or_equal11;
    int32_t r15_12;
    struct s5* rdi13;
    struct s6* rdi14;
    struct s7* rdi15;
    struct s8* rdi16;
    uint64_t rdx17;
    int64_t* r13_18;
    struct s9* rdi19;
    struct s10* rdi20;
    unsigned char v21;
    int64_t* r15_22;
    struct s11* rdi23;
    uint64_t rax24;
    struct s12* v25;
    uint64_t* rdi26;
    int32_t ecx27;
    uint64_t r8_28;
    uint64_t r8_29;
    uint64_t r8_30;
    struct s14* rdi31;
    int64_t v32;

    __asm__("rdtsc ");
    *reinterpret_cast<int32_t*>(&g436000) = eax1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&g436000) + 4) = edx2;
    rdi3 = reinterpret_cast<struct s1*>(0x436008);
    while (1) {
        addr_40131d_8:
        rdi3->f0 = __intrinsic();
        rdi4 = reinterpret_cast<struct s2*>(&rdi3->f4);
        rdi4->f0 = __intrinsic();
        rdi5 = reinterpret_cast<struct s3*>(&rdi4->f4);
        *reinterpret_cast<int32_t*>(&rcx6) = __intrinsic();
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        rdi5->f0 = __intrinsic();
        rdi7 = reinterpret_cast<struct s4*>(&rdi5->f4);
        *reinterpret_cast<int32_t*>(&rdx8) = __intrinsic();
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
        rdi7->f0 = __intrinsic();
        rdi3 = reinterpret_cast<struct s1*>(&rdi7->f4);
        while (rax9 = v10, !!*reinterpret_cast<int32_t*>(&rax9)) {
            below_or_equal11 = *reinterpret_cast<unsigned char*>(&rax9) <= g436008;
            if (below_or_equal11) 
                goto addr_40131d_8;
            ++rdi3;
        }
        break;
    }
    rdi3->f0 = r15_12;
    rdi13 = reinterpret_cast<struct s5*>(&rdi3->f8);
    fun_4014ba(rcx6, rdx8);
    rdi13->f0 = -1;
    rdi14 = reinterpret_cast<struct s6*>(&rdi13->f8);
    rdi14->f0 = -1;
    rdi15 = reinterpret_cast<struct s7*>(&rdi14->f8);
    rdi15->f0 = reinterpret_cast<int64_t>(fun_40462e);
    rdi16 = reinterpret_cast<struct s8*>(&rdi15->f8);
    fun_40150f(32, 0x404434);
    *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fun_40457c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
    fun_40150f(32, fun_40457c);
    rdi16->f0 = *r13_18;
    rdi19 = reinterpret_cast<struct s9*>(&rdi16->f8);
    rdi19->f0 = reinterpret_cast<int64_t>(fun_404690);
    rdi20 = reinterpret_cast<struct s10*>(&rdi19->f8);
    if (rdi20->f0 & 8) {
        v21 = reinterpret_cast<unsigned char>(8);
    } else {
        if (!(rdi20->f0 & 32)) {
            if (!(rdi20->f0 & 4)) {
                if (!*r15_22) {
                }
            }
        }
    }
    rdi20->f0 = v21;
    rdi23 = reinterpret_cast<struct s11*>(&rdi20->f8);
    rax24 = reinterpret_cast<uint64_t>(fun_404355);
    rdi23->f0 = reinterpret_cast<uint64_t>(fun_404355);
    v25 = reinterpret_cast<struct s12*>(&rdi23->f8);
    *reinterpret_cast<int32_t*>(&rdi26) = 0x4362e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = 0;
    while (reinterpret_cast<uint64_t>(rdi26) < 0x4363d8) {
        ecx27 = 0;
        *reinterpret_cast<int32_t*>(&rdx17) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
        do {
            __asm__("lodsb ");
            r8_28 = rax24;
            *reinterpret_cast<uint32_t*>(&r8_29) = *reinterpret_cast<uint32_t*>(&r8_28) & 0x7f;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_29) + 4) = 0;
            r8_30 = r8_29 << *reinterpret_cast<unsigned char*>(&ecx27);
            ecx27 = ecx27 + 7;
            rdx17 = rdx17 | r8_30;
        } while (*reinterpret_cast<signed char*>(&rax24) < reinterpret_cast<signed char>(0));
        if (*reinterpret_cast<unsigned char*>(&rax24) & 64) {
            rdx17 = rdx17 | 0xffffffffffffffff << *reinterpret_cast<unsigned char*>(&ecx27);
        }
        rax24 = rdx17;
        if (*rdi26) {
            rax24 = *rdi26;
        }
        *rdi26 = rax24;
        ++rdi26;
    }
    GetSystemInfo(0x437f80, rdx17);
    v25->f0 = reinterpret_cast<int64_t>(fun_403817);
    rdi31 = reinterpret_cast<struct s14*>(&v25->f8);
    fun_401466(0x437f80, rdx17);
    rdi31->f0 = reinterpret_cast<int64_t>(fun_403312);
    rdi31->f8 = reinterpret_cast<int64_t>(fun_403c02);
    goto v32;
}

int64_t GetStdHandle = 0x4be4;

int64_t g437de0;

int64_t g437df0;

int64_t g437de8;

int32_t g437e08;

int32_t g437e20;

int32_t g437e38;

int64_t g437df8;

int64_t g437e10;

int64_t g437e28;

int64_t fun_4014ba(int64_t rcx, int64_t rdx) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;

    rbp3 = GetStdHandle;
    g437de0 = 3;
    g437df0 = 0x437df8;
    g437de8 = 16;
    g437e08 = 1;
    g437e20 = 1;
    g437e38 = 1;
    rax4 = reinterpret_cast<int64_t>(rbp3(0xf6));
    g437df8 = rax4;
    rax5 = reinterpret_cast<int64_t>(rbp3(0xf5));
    g437e10 = rax5;
    rax6 = reinterpret_cast<int64_t>(rbp3(0xf4));
    g437e28 = rax6;
    return rax6;
}

unsigned char g43603d;

void fun_40150f(int64_t rcx, uint64_t rdx) {
    unsigned char r8b3;
    int1_t zf4;
    uint64_t* rdi5;
    void* rsi6;
    int64_t rax7;
    int1_t zf8;

    r8b3 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf4)) << 1);
    do {
        __asm__("lodsb ");
        *rdi5 = rdx;
        ++rdi5;
        rsi6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi6) + 8);
        *reinterpret_cast<int32_t*>(&rcx) = *reinterpret_cast<int32_t*>(&rcx) - 1;
    } while (*reinterpret_cast<int32_t*>(&rcx));
    *reinterpret_cast<int32_t*>(&rax7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    zf8 = (g43603d & 2) == 0;
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf8)) | r8b3);
    *reinterpret_cast<unsigned char*>(&rax7) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi6) + rax7);
    *rdi5 = rax7 + rdx;
    __asm__("lodsq ");
    return;
}

void fun_403cbb();

void fun_401466(int64_t rcx, uint64_t rdx) {
    fun_403cbb();
    return;
}

int32_t fun_401460() {
    return 42;
}

int64_t fun_4041e6();

uint32_t g436340;

uint32_t g437fb0;

void fun_40153d() {
    uint32_t eax1;
    int64_t rax2;

    fun_4041e6();
    fun_4046c1();
    eax1 = g436340;
    g437fb0 = eax1;
    goto rax2;
}

struct s16 {
    uint16_t f0;
    signed char[6] pad8;
    signed char* f8;
    signed char* f10;
    uint32_t f18;
};

void fun_4017b1(signed char* rcx);

void fun_4017dc(signed char* rcx);

int32_t fun_40180c(signed char* rcx, struct s16* rdx, uint64_t r8, void* r9) {
    struct s16* r11_5;
    uint64_t r10_6;
    int64_t r13_7;
    int64_t rsi8;
    uint64_t rbx9;
    signed char* v10;
    uint64_t v11;
    uint64_t rsi12;
    uint64_t v13;
    int64_t rsi14;
    int32_t v15;
    int64_t rax16;
    uint32_t v17;
    uint64_t rax18;
    int32_t r14d19;
    int64_t rsi20;
    uint32_t v21;
    uint64_t r12_22;
    int32_t v23;
    uint64_t r9_24;
    int32_t v25;
    uint64_t rax26;
    uint64_t r14_27;
    uint64_t r9_28;
    uint64_t r12_29;
    uint64_t r11_30;
    uint64_t rax31;
    uint64_t r10_32;

    r11_5 = rdx;
    r10_6 = r8;
    r13_7 = rsi8;
    *reinterpret_cast<int32_t*>(&rbx9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx9) + 4) = 0;
    v10 = rcx;
    v11 = rsi12;
    v13 = reinterpret_cast<uint64_t>(rsi14 + reinterpret_cast<int64_t>(rdx));
    fun_4017b1(rcx);
    while (v15) {
        while (*reinterpret_cast<uint32_t*>(&rax16) = v17, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rax16)) {
            if (*reinterpret_cast<uint32_t*>(&rax16) > 32) 
                goto addr_4018bd_5;
            if (!static_cast<int1_t>(0x100002600 >> rax16)) 
                goto addr_4018bd_5;
            fun_4017b1(rcx);
        }
        break;
        addr_4018bd_5:
        ++rbx9;
        if (rbx9 < r10_6) {
            rax18 = v11;
            if (rax18 >= v13) {
                *reinterpret_cast<int32_t*>(&rax18) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
            }
            *reinterpret_cast<uint64_t*>(v10 + rbx9 * 8 - 8) = rax18;
        }
        r14d19 = 0;
        while (*reinterpret_cast<uint32_t*>(&rsi20) = v21, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0, !!*reinterpret_cast<uint32_t*>(&rsi20)) {
            if (!*reinterpret_cast<unsigned char*>(&r14d19) && *reinterpret_cast<uint32_t*>(&rsi20) <= 32) {
                if (!static_cast<int1_t>(0x100002600 >> rsi20)) 
                    goto addr_4019e1_15; else 
                    goto addr_4018fc_16;
            }
            if (*reinterpret_cast<uint32_t*>(&rsi20) == 34 || *reinterpret_cast<uint32_t*>(&rsi20) == 92) {
                *reinterpret_cast<int32_t*>(&r12_22) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = 0;
                while (v23 == 92) {
                    ++r12_22;
                    fun_4017b1(rcx);
                }
                *reinterpret_cast<int32_t*>(&r9_24) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = 0;
                while (v25 == 34) {
                    fun_4017b1(rcx);
                    ++r9_24;
                }
                rax26 = r12_22;
                if (!r9_24) 
                    goto addr_401945_25;
            } else {
                addr_4019e1_15:
                fun_4017dc(rcx);
                fun_4017b1(rcx);
                continue;
            }
            while (rax26 > 1) {
                fun_4017dc(rcx);
                rax26 = rax26 - 2;
            }
            if (!(*reinterpret_cast<unsigned char*>(&r12_22) & 1)) 
                goto addr_40199d_29;
            fun_4017dc(rcx);
            --r9_24;
            if (!r9_24) 
                continue;
            addr_40199d_29:
            *reinterpret_cast<int32_t*>(&r14_27) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = 0;
            r9_28 = r9_24 - reinterpret_cast<uint1_t>(r9_24 < static_cast<uint64_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r14d19) < 1)));
            r12_29 = r9_28 + 1;
            while (r12_29 >= r14_27) {
                r14_27 = r14_27 + 3;
                fun_4017dc(rcx);
            }
            *reinterpret_cast<int32_t*>(&rcx) = 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&r14d19) = reinterpret_cast<uint1_t>(r9_28 % 3 == 0);
            continue;
            addr_401945_25:
            while (--r12_22, r12_22 != 0xffffffffffffffff) {
                fun_4017dc(rcx);
            }
        }
        addr_4019f8_35:
        fun_4017dc(rcx);
        continue;
        addr_4018fc_16:
        goto addr_4019f8_35;
    }
    fun_4017dc(rcx);
    if (r11_5) {
        r11_30 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_5) - 1);
        rax31 = v11 - r13_7;
        if (rax31 > r11_30) {
            rax31 = r11_30;
        }
        *reinterpret_cast<signed char*>(r13_7 + rax31) = 0;
    }
    if (r10_6) {
        r10_32 = r10_6 - 1;
        if (r10_32 > rbx9) {
            r10_32 = rbx9;
        }
        v10[r10_32 * 8] = reinterpret_cast<signed char>(0);
    }
    return *reinterpret_cast<int32_t*>(&rbx9);
}

uint64_t fun_40437c(signed char* rcx, struct s16* rdx) {
    uint64_t rdi3;
    uint32_t edi4;
    uint64_t rax5;
    int32_t ecx6;
    uint32_t edx7;

    *reinterpret_cast<uint32_t*>(&rdi3) = edi4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdi3) > 0x7f) {
        __asm__("bsr ecx, edi");
        ecx6 = *reinterpret_cast<int32_t*>(0x4047e7 + reinterpret_cast<uint64_t>(rcx) * 2 - 14);
        do {
            edx7 = *reinterpret_cast<uint32_t*>(&rdi3);
            *reinterpret_cast<uint32_t*>(&rdi3) = *reinterpret_cast<uint32_t*>(&rdi3) >> 6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
            *reinterpret_cast<unsigned char*>(&rax5) = reinterpret_cast<unsigned char>(0x80 | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) & 63));
            rax5 = rax5 << 8;
            *reinterpret_cast<signed char*>(&ecx6) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx6) - 1);
        } while (*reinterpret_cast<signed char*>(&ecx6));
        *reinterpret_cast<unsigned char*>(&rax5) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx6) + 1)));
    }
    return rax5 | rdi3;
}

uint32_t fun_40436d(signed char* rcx, struct s16* rdx, uint64_t r8, ...);

void fun_4017b1(signed char* rcx) {
    uint32_t eax2;
    uint16_t** rdi3;
    struct s16* rdi4;
    uint64_t r8_5;
    uint32_t eax6;
    int64_t rax7;

    eax2 = **rdi3;
    if (*reinterpret_cast<uint16_t*>(&eax2) > 0xd7ff) {
        eax6 = fun_40436d(rcx, rdi4, r8_5);
    } else {
        rdi4->f18 = eax2;
        eax6 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax7) = eax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rdi4->f0 = reinterpret_cast<uint16_t>(rdi4->f0 + (rax7 + rax7));
    return;
}

void fun_4017dc(signed char* rcx) {
    struct s16* rdx2;
    struct s16* rdi3;
    signed char* r8_4;
    uint64_t rax5;
    int32_t esi6;
    uint32_t esi7;
    signed char* rcx8;

    rdx2 = rdi3;
    r8_4 = rdx2->f10;
    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi6));
    if (esi7 > 0x7f) {
        rax5 = fun_40437c(rcx, rdx2);
    }
    do {
        rcx8 = rdx2->f8;
        if (reinterpret_cast<uint64_t>(r8_4) <= reinterpret_cast<uint64_t>(rcx8)) 
            break;
        rdx2->f8 = rcx8 + 1;
        *rcx8 = *reinterpret_cast<signed char*>(&rax5);
        rax5 = rax5 >> 8;
    } while (rax5);
    return;
}

struct s17 {
    struct s13* f0;
    uint32_t f4;
    int64_t f8;
    signed char[16] pad32;
    struct s13* f20;
    signed char[20] pad56;
    int64_t f38;
    signed char[792] pad856;
    uint64_t f358;
    signed char[40] pad904;
    int64_t f388;
};

struct s19 {
    void* f0;
    void* f8;
    int64_t f10;
    uint32_t f18;
};

struct s18 {
    signed char[904] pad904;
    struct s19* f388;
};

uint32_t fun_403d56(struct s13* rcx, struct s13* rdx);

void* fun_401b19(struct s13* rcx, struct s13* rdx) {
    void* r14_3;
    struct s17* r12_4;
    struct s17* rdi5;
    struct s18* rdi6;
    uint32_t r13d7;
    uint32_t r13d8;
    void* rdx9;
    void* rdx10;
    int64_t rbx11;
    void* rbx12;
    struct s13* rbx13;
    struct s13* rdx14;
    int64_t rdx15;
    void* r15_16;
    struct s13* rcx17;
    struct s13* rdx18;
    int64_t r8_19;
    struct s13* rax20;
    struct s13* rsi21;
    uint32_t eax22;
    uint64_t rdx23;
    struct s13* eax24;
    uint32_t edx25;
    uint32_t ecx26;
    int64_t rax27;
    uint64_t rcx28;
    int64_t rcx29;
    uint32_t edx30;
    struct s13* ecx31;
    uint32_t esi32;
    int64_t rsi33;
    struct s13* rdx34;
    struct s13* rdx35;
    struct s13* r9_36;
    struct s13* rdx37;
    uint32_t ecx38;
    uint64_t rcx39;
    uint64_t rax40;
    uint64_t rax41;
    struct s13* rax42;

    *reinterpret_cast<int32_t*>(&r14_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
    r12_4 = rdi5;
    if (!rdi6->f388 || ((r13d7 = rdi6->f388->f18, (*reinterpret_cast<unsigned char*>(&r13d7) & 1) == 0) || (r13d8 = r13d7 & 8, !!r13d8))) {
        addr_401dbb_2:
        r12_4->f38 = 0x80;
        return r14_3;
    } else {
        rdx9 = rdi6->f388->f0;
        *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rdx9) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx10)) {
            rbx11 = -(reinterpret_cast<int64_t>(rdi6->f388->f0) + 16);
            *reinterpret_cast<uint32_t*>(&rbx12) = *reinterpret_cast<uint32_t*>(&rbx11) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx12) + 4) = 0;
            rdx10 = rbx12;
        }
        rbx13 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rdi6->f388->f0) + reinterpret_cast<uint64_t>(rdx10));
        *reinterpret_cast<int32_t*>(&r14_3) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
        rdx14 = rbx13->f8;
        *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<uint32_t*>(&rdx14) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
        if (rdx15 - 1) 
            goto addr_401dbb_2;
    }
    r14_3 = rdi6->f388->f8;
    r15_16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx13->f8) & 0xfffffffffffffff8);
    rcx17 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx13) + reinterpret_cast<uint64_t>(r15_16));
    rdx18 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rdi6->f388->f0) + reinterpret_cast<uint64_t>(r14_3) + 0xffffffffffffffb0);
    if (reinterpret_cast<uint32_t>(rcx17) < reinterpret_cast<uint32_t>(rdx18)) {
        addr_401db8_7:
        *reinterpret_cast<int32_t*>(&r14_3) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = 0;
        goto addr_401dbb_2;
    } else {
        r8_19 = rdi6->f388->f10;
        if (r12_4->f20 == rbx13) {
            r12_4->f20 = reinterpret_cast<struct s13*>(0);
            r12_4->f8 = 0;
            goto addr_401c96_10;
        }
        rax20 = rbx13->f18;
        rsi21 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 48);
        if (rax20 != rbx13) 
            goto addr_401bd3_12;
    }
    rax20 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax20) + 40);
    rcx17 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx13) + 40);
    if (rax20) {
        addr_401bfb_14:
        rdx18 = rax20;
    } else {
        rax20 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 32);
        if (!rax20) {
            addr_401c25_16:
            if (!rsi21) {
                addr_401c96_10:
                eax22 = fun_403d56(rcx17, rdx18);
                if (eax22) {
                    rdx23 = reinterpret_cast<uint64_t>(r15_16) >> 8;
                    eax24 = *reinterpret_cast<struct s13**>(&rdx23);
                    if (*reinterpret_cast<struct s13**>(&rdx23) && (eax24 = reinterpret_cast<struct s13*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdx23)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx25 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdx23)) ^ 31;
                        ecx26 = 38 - edx25;
                        *reinterpret_cast<void**>(&rax27) = reinterpret_cast<void*>(31 - edx25);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = 0;
                        rcx28 = reinterpret_cast<uint64_t>(r15_16) >> *reinterpret_cast<signed char*>(&ecx26);
                        *reinterpret_cast<uint32_t*>(&rcx29) = *reinterpret_cast<uint32_t*>(&rcx28) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = 0;
                        eax24 = reinterpret_cast<struct s13*>(static_cast<uint32_t>(rcx29 + rax27 * 2));
                    }
                    edx30 = r12_4->f4;
                    ecx31 = eax24;
                    esi32 = 1 << *reinterpret_cast<unsigned char*>(&ecx31);
                    *reinterpret_cast<struct s13**>(&(rbx13 + 2)->f0) = eax24;
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 40) = reinterpret_cast<struct s13*>(0);
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 32) = reinterpret_cast<struct s13*>(0);
                    *reinterpret_cast<struct s13**>(&rsi33) = eax24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
                    if (edx30 & esi32) 
                        goto addr_401d3d_20; else 
                        goto addr_401d20_21;
                } else {
                    r12_4->f358 = r12_4->f358 - reinterpret_cast<uint64_t>(r14_3);
                    r12_4->f388 = r8_19;
                    goto addr_401dbb_2;
                }
            } else {
                rdx34 = *reinterpret_cast<struct s13**>(&(rbx13 + 2)->f0);
                *reinterpret_cast<int32_t*>(&rdx34 + 1) = 0;
                rcx17 = rdx34;
                rdx18 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(r12_4) + reinterpret_cast<uint32_t>(rdx34) * 8);
                if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx18) + 0x258) != rbx13) {
                    if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi21) + 32) != rbx13) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi21) + 40) = rax20;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi21) + 32) = rax20;
                    }
                    if (rax20) 
                        goto addr_401c49_28;
                    goto addr_401c96_10;
                } else {
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx18) + 0x258) = rax20;
                    if (!rax20) {
                        __asm__("rol eax, cl");
                        r12_4->f4 = r12_4->f4 & 0xfffffffe;
                        goto addr_401c96_10;
                    } else {
                        addr_401c49_28:
                        rdx35 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax20) + 48) = rsi21;
                        if (rdx35) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax20) + 32) = rdx35;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx35) + 48) = rax20;
                            goto addr_401c85_33;
                        }
                    }
                }
            }
        } else {
            rcx17 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx13) + 32);
            goto addr_401bfb_14;
        }
    }
    addr_401bfe_35:
    r9_36 = rcx17;
    rax20 = rdx18;
    rcx17 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx18) + 40);
    rdx18 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx18) + 40);
    if (rdx18) 
        goto addr_401bfe_35;
    rdx18 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax20) + 32);
    rcx17 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax20) + 32);
    if (rdx18) 
        goto addr_401bfe_35;
    *reinterpret_cast<struct s13**>(&r9_36->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_401c25_16;
    addr_401d3d_20:
    rdx37 = *reinterpret_cast<struct s13**>(reinterpret_cast<int64_t>(r12_4) + rsi33 * 8 + 0x258);
    if (eax24 != 31) {
        r13d8 = 57 - (reinterpret_cast<uint32_t>(eax24) >> 1);
    }
    ecx38 = r13d8;
    rcx39 = reinterpret_cast<uint64_t>(r15_16) << *reinterpret_cast<unsigned char*>(&ecx38);
    while ((reinterpret_cast<uint32_t>(rdx37->f8) & 0xfffffffffffffff8) != r15_16) {
        rax40 = rcx39;
        rcx39 = rcx39 + rcx39;
        rax41 = (rax40 >> 63) + 4;
        if (!*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx37) + rax41 * 8)) 
            goto addr_401d8a_42;
        rdx37 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx37) + rax41 * 8);
    }
    rax42 = rdx37->f10;
    rax42->f18 = rbx13;
    rdx37->f10 = rbx13;
    rbx13->f10 = rax42;
    rbx13->f18 = rdx37;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 48) = reinterpret_cast<struct s13*>(0);
    goto addr_401db8_7;
    addr_401d8a_42:
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx37) + rax41 * 8) = rbx13;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 48) = rdx37;
    addr_401d92_45:
    rbx13->f18 = rbx13;
    rbx13->f10 = rbx13;
    goto addr_401db8_7;
    addr_401d20_21:
    r12_4->f4 = edx30 | esi32;
    *reinterpret_cast<struct s13**>(reinterpret_cast<int64_t>(r12_4) + rsi33 * 8 + 0x258) = rbx13;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 48) = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(r12_4) + rsi33 * 8 + 0x258);
    goto addr_401d92_45;
    addr_401c85_33:
    rdx18 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx13) + 40);
    if (rdx18) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax20) + 40) = rdx18;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx18) + 48) = rax20;
        goto addr_401c96_10;
    }
    addr_401bd3_12:
    rdx18 = rbx13->f10;
    rdx18->f18 = rax20;
    rax20->f10 = rdx18;
    goto addr_401c25_16;
}

struct s13* fun_401566();

struct s13* fun_404008() {
    struct s13* rax1;

    rax1 = fun_401566();
    return rax1;
}

uint32_t fun_40400e(struct s13* rcx);

uint32_t fun_403d56(struct s13* rcx, struct s13* rdx) {
    uint32_t eax3;

    eax3 = fun_40400e(rcx);
    return eax3;
}

struct s20 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s21 {
    signed char[40] pad40;
    struct s20* f28;
};

struct s22 {
    signed char[16] pad16;
    uint64_t f10;
};

int64_t g4367c0;

struct s23 {
    signed char[48] pad48;
    int64_t f30;
};

void fun_401ad2() {
    int64_t rax1;
    int64_t rsi2;
    int64_t rax3;
    int64_t rax4;
    int64_t rsi5;
    struct s20* rcx6;
    int64_t rsi7;
    uint64_t r8_8;
    int64_t rdx9;
    struct s21* rdi10;
    struct s22* rdi11;
    int64_t rax12;
    int64_t rsi13;
    int64_t rdx14;
    struct s23* rdi15;

    rax1 = rsi2;
    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax1) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax3)) {
        rax4 = -(rsi5 + 16);
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax4) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    rcx6 = reinterpret_cast<struct s20*>(rsi7 + rax3);
    r8_8 = reinterpret_cast<uint64_t>(rdx9 - rax3);
    rdi10->f28 = rcx6;
    rdi11->f10 = r8_8;
    rcx6->f8 = r8_8 | 1;
    rax12 = g4367c0;
    *reinterpret_cast<int64_t*>(rsi13 + rdx14 + 8) = 80;
    rdi15->f30 = rax12;
    return;
}

struct s13* fun_403d6a();

struct s13* fun_403d42() {
    struct s13* rax1;

    rax1 = fun_403d6a();
    return rax1;
}

uint32_t g4363e4;

uint32_t g4363e0;

struct s13* g4363e8;

struct s13* g4363f0;

void* g4367b0;

int32_t g436750;

struct s13* g4367b8;

uint64_t g436748;

uint64_t g436738;

uint64_t g436740;

struct s13* g436408;

struct s13* g4363f8;

struct s13* g436400;

struct s24 {
    struct s13* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s13* g436758;

struct s13* g436760;

uint32_t g436770;

struct s25 {
    struct s13* f0;
    signed char[4] pad8;
    void* f8;
    struct s25* f10;
};

struct s15* g436768;

struct s13* fun_401556();

uint64_t g4367a0;

int64_t g436418;

uint64_t g436420;

struct s26 {
    signed char[16] pad16;
    struct s26* f10;
    struct s26* f18;
};

struct s27 {
    struct s27* f0;
    uint64_t f8;
    struct s27* f10;
    struct s27* f18;
    int64_t f20;
    int64_t f28;
    struct s27* f30;
    uint32_t f38;
};

struct s28 {
    struct s13* f0;
    signed char[4] pad8;
    uint64_t f8;
};

struct s15* fun_40238e(struct s13* rcx, void* rdx) {
    uint64_t rdi3;
    uint64_t rdi4;
    struct s13* rbx5;
    uint32_t edi6;
    int64_t rdi7;
    uint64_t rax8;
    void* r9_9;
    uint32_t esi10;
    uint32_t eax11;
    uint32_t ecx12;
    int64_t rsi13;
    uint64_t rdx14;
    int64_t rdx15;
    int64_t rax16;
    struct s13* rdx17;
    struct s13* rax18;
    uint64_t rdi19;
    int64_t rdi20;
    uint32_t esi21;
    uint64_t rcx22;
    uint32_t eax23;
    uint32_t ecx24;
    uint32_t eax25;
    int64_t rax26;
    void* rcx27;
    struct s13* rcx28;
    struct s13* rdx29;
    struct s13* rdx30;
    struct s13* rax31;
    void* rcx32;
    uint64_t rdx33;
    int1_t zf34;
    int1_t cf35;
    uint64_t rsi36;
    struct s13* r12_37;
    uint64_t rdi38;
    uint64_t rax39;
    struct s13* r12_40;
    uint64_t rdx41;
    uint64_t rcx42;
    uint64_t rax43;
    struct s15* rax44;
    struct s13* rax45;
    struct s13* r9_46;
    uint64_t rax47;
    uint64_t rax48;
    int1_t below_or_equal49;
    struct s13* r10_50;
    struct s13* rdx51;
    uint64_t tmp64_52;
    int1_t below_or_equal53;
    struct s13* rdx54;
    struct s13* rcx55;
    struct s24* rsi56;
    struct s13* rdx57;
    struct s13* rdx58;
    struct s13* rsi59;
    void* r10_60;
    struct s13* rcx61;
    struct s13* r8_62;
    struct s13* rax63;
    struct s13* rdx64;
    uint32_t ecx65;
    int1_t cf66;
    struct s25* rcx67;
    uint32_t esi68;
    uint32_t r11d69;
    struct s13* r13_70;
    void* rax71;
    void* rdx72;
    void* rdx73;
    int64_t rax74;
    void* rax75;
    struct s13* r11_76;
    struct s15* rax77;
    struct s15* rdi78;
    struct s13** rsi79;
    int32_t ecx80;
    struct s13* rax81;
    struct s13* rdx82;
    struct s13* rsi83;
    uint64_t rcx84;
    uint64_t rdx85;
    struct s13* eax86;
    uint32_t edx87;
    uint32_t ecx88;
    int64_t rax89;
    uint64_t rcx90;
    int64_t rcx91;
    uint32_t edx92;
    struct s13* ecx93;
    uint32_t edi94;
    int64_t rdi95;
    uint32_t edx96;
    int64_t rax97;
    uint32_t esi98;
    struct s13* rax99;
    struct s13* rdx100;
    struct s13* rcx101;
    uint32_t ecx102;
    struct s13* rdx103;
    uint64_t rcx104;
    uint64_t rax105;
    uint64_t rax106;
    struct s13* rax107;
    struct s13* rcx108;
    void* rcx109;
    int64_t rcx110;
    struct s13* rdx111;
    struct s13* rax112;
    void* r8_113;
    int1_t zf114;
    struct s13* rcx115;
    int64_t rcx116;
    uint64_t rcx117;
    uint64_t rsi118;
    struct s13* edx119;
    uint32_t esi120;
    uint32_t ecx121;
    int64_t rdx122;
    uint64_t rcx123;
    int64_t rcx124;
    uint32_t esi125;
    struct s13* ecx126;
    uint32_t edi127;
    int64_t rdi128;
    uint32_t esi129;
    int64_t rdx130;
    uint32_t edi131;
    struct s13* rdx132;
    struct s13* rcx133;
    struct s13* rsi134;
    void* rbx135;
    struct s13* rdi136;
    struct s13* rdi137;
    struct s13* tmp64_138;
    struct s13* rsi139;
    uint32_t ecx140;
    uint64_t rcx141;
    uint64_t rdx142;
    uint64_t rdx143;
    struct s13* rdx144;
    struct s13* r10_145;
    struct s13* rcx146;
    int64_t r10_147;
    struct s13* rcx148;
    struct s13* r12_149;
    struct s13* rcx150;
    struct s13* rcx151;
    struct s13* tmp64_152;
    struct s13* rax153;
    uint64_t rax154;
    struct s26* rax155;
    struct s13* rcx156;
    struct s13* r11_157;
    struct s27* r8_158;
    uint64_t rcx159;
    uint64_t rsi160;
    uint32_t edx161;
    uint32_t esi162;
    uint32_t ecx163;
    int64_t rdx164;
    uint64_t rcx165;
    int64_t rcx166;
    uint32_t esi167;
    uint32_t ecx168;
    uint32_t edi169;
    int64_t rdi170;
    uint32_t esi171;
    int64_t rdx172;
    uint32_t edi173;
    struct s27* rdx174;
    struct s27* rcx175;
    int64_t r8_176;
    struct s13* rcx177;
    uint32_t ecx178;
    struct s27* rsi179;
    uint64_t rcx180;
    uint64_t rdx181;
    uint64_t rdx182;
    struct s27* rdx183;
    struct s13* rcx184;
    uint32_t ecx185;
    struct s13* r11_186;
    struct s13* r10_187;
    uint64_t rcx188;
    void* rdx189;
    struct s13* r9_190;
    uint32_t edi191;
    int64_t rax192;
    struct s13* rcx193;
    struct s13* r8_194;
    struct s13* rdx195;
    struct s13* rcx196;
    struct s13* rdx197;
    struct s13* r10_198;
    void* r12_199;
    int64_t rdi200;
    uint32_t r8d201;
    int64_t rcx202;
    int64_t rax203;
    void* rdi204;
    struct s13* r10_205;
    void* r8_206;
    struct s13* r11_207;
    struct s28* rdx208;
    struct s13* rsi209;
    struct s13* rbx210;
    uint32_t r10d211;
    uint64_t rcx212;
    struct s13* rdx213;
    int64_t r8_214;
    uint32_t r11d215;
    struct s13* r8_216;
    struct s13* rcx217;
    struct s13* rbx218;
    struct s13* r11_219;
    struct s13* rcx220;
    struct s13* r10_221;
    struct s13* rdx222;
    uint64_t rcx223;
    int64_t rdi224;
    uint32_t r9d225;
    struct s13* rdi226;
    struct s13* rcx227;
    int64_t r11_228;
    struct s13* rcx229;
    struct s13* r13_230;
    struct s13* rcx231;
    struct s13* rcx232;
    int64_t rcx233;
    int64_t rax234;
    void* r9_235;
    struct s13* rdi236;
    void* rdx237;
    struct s13* r8_238;
    struct s13* rbx239;

    if (rdi3 > 0xe0) {
        if (rdi4 > 0xffffffffffffff7f) {
            rbx5 = reinterpret_cast<struct s13*>(0xffffffffffffffff);
            goto addr_402abb_4;
        }
        edi6 = g4363e4;
        rbx5 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rdi7 + 31) & 0xfffffffffffffff0);
        if (!edi6) 
            goto addr_402abb_4;
        rax8 = reinterpret_cast<uint32_t>(rbx5) >> 8;
        r9_9 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(rbx5));
        esi10 = *reinterpret_cast<uint32_t*>(&rax8);
        if (*reinterpret_cast<uint32_t*>(&rax8) && (esi10 = 31, *reinterpret_cast<uint32_t*>(&rax8) <= 0xffff)) {
            __asm__("bsr eax, eax");
            eax11 = *reinterpret_cast<uint32_t*>(&rax8) ^ 31;
            ecx12 = 38 - eax11;
            *reinterpret_cast<uint32_t*>(&rsi13) = 31 - eax11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
            rdx14 = reinterpret_cast<uint32_t>(rbx5) >> *reinterpret_cast<signed char*>(&ecx12);
            *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<uint32_t*>(&rdx14) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
            esi10 = static_cast<uint32_t>(rdx15 + rsi13 * 2);
        }
        *reinterpret_cast<uint32_t*>(&rax16) = esi10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx17) = 0;
        *reinterpret_cast<int32_t*>(&rdx17 + 1) = 0;
        rax18 = *reinterpret_cast<struct s13**>(rax16 * 8 + 0x436638);
        if (rax18) 
            goto addr_402770_9;
    } else {
        *reinterpret_cast<int32_t*>(&rbx5) = 32;
        *reinterpret_cast<int32_t*>(&rbx5 + 1) = 0;
        if (rdi19 > 14) {
            rbx5 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rdi20 + 31) & 0xfffffffffffffff0);
        }
        esi21 = g4363e0;
        rcx22 = reinterpret_cast<uint32_t>(rbx5) >> 3;
        eax23 = esi21 >> *reinterpret_cast<unsigned char*>(&rcx22);
        if (!(*reinterpret_cast<unsigned char*>(&eax23) & 3)) 
            goto addr_40241e_13; else 
            goto addr_4023cd_14;
    }
    addr_4027e4_15:
    if (!(reinterpret_cast<uint32_t>(rdx17) | reinterpret_cast<uint32_t>(rax18))) {
        ecx24 = esi10;
        eax25 = 0xfffffffe << *reinterpret_cast<unsigned char*>(&ecx24) & edi6;
        if (!eax25) 
            goto addr_402abb_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax26) = -eax25 & eax25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
        rdx17 = *reinterpret_cast<struct s13**>(rax26 * 8 + 0x436638);
        *reinterpret_cast<int32_t*>(&rax18) = 0;
        *reinterpret_cast<int32_t*>(&rax18 + 1) = 0;
    }
    while (rdx17) {
        rcx27 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rdx17->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rcx27) < reinterpret_cast<uint64_t>(r9_9)) {
            r9_9 = rcx27;
            rax18 = rdx17;
        }
        rcx28 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx17) + 32);
        if (!rcx28) {
            rcx28 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx17) + 40);
        }
        rdx17 = rcx28;
    }
    rdx29 = g4363e8;
    if (!rax18 || reinterpret_cast<uint64_t>(r9_9) >= reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx29) - reinterpret_cast<uint32_t>(rbx5))) {
        addr_402abb_4:
        rdx30 = g4363e8;
        if (reinterpret_cast<uint32_t>(rdx30) < reinterpret_cast<uint32_t>(rbx5)) {
            rax31 = g4363f0;
            if (reinterpret_cast<uint32_t>(rax31) <= reinterpret_cast<uint32_t>(rbx5)) {
                rcx32 = g4367b0;
                rdx33 = -reinterpret_cast<uint64_t>(rcx32);
                zf34 = (*reinterpret_cast<unsigned char*>(&g436750) & 1) == 0;
                if (zf34 || ((cf35 = reinterpret_cast<uint32_t>(rbx5) < reinterpret_cast<uint32_t>(g4367b8), cf35) || (!rax31 || ((rsi36 = g436748, r12_37 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx32) + 62 & rdx33), !!rsi36) && ((rdi38 = g436738, rax39 = rdi38 + reinterpret_cast<uint32_t>(r12_37), rdi38 >= rax39) || rsi36 < rax39) || reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_37))))) {
                    r12_40 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(rcx32) + 95 & rdx33);
                    if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(r12_40) || (rdx41 = g436748, !!rdx41) && ((rcx42 = g436738, rax43 = reinterpret_cast<uint32_t>(r12_40) + rcx42, rcx42 >= rax43) || rdx41 < rax43)) {
                        addr_403308_28:
                        *reinterpret_cast<int32_t*>(&rax44) = 0;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax44) + 4) = 0;
                    } else {
                        rax45 = fun_403d42();
                        r9_46 = rax45;
                        rax47 = g436738;
                        rax48 = rax47 + reinterpret_cast<uint32_t>(r12_40);
                        below_or_equal49 = rax48 <= g436740;
                        g436738 = rax48;
                        if (!below_or_equal49) {
                            g436740 = rax48;
                        }
                        r10_50 = g436408;
                        if (r10_50) 
                            goto addr_402ce9_32; else 
                            goto addr_402c7b_33;
                    }
                } else {
                    rax18 = fun_403d42();
                    *reinterpret_cast<struct s13**>(&rax18->f0) = reinterpret_cast<struct s13*>(0);
                    rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffe0);
                    rdx51 = g4363f8;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(r12_37) + 0xffffffffffffffe8) = 11;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(r12_37) + 0xfffffffffffffff0) = 0;
                    if (!rdx51 || reinterpret_cast<uint32_t>(rax18) < reinterpret_cast<uint32_t>(rdx51)) {
                        g4363f8 = rax18;
                    }
                    tmp64_52 = reinterpret_cast<uint32_t>(r12_37) + g436738;
                    below_or_equal53 = tmp64_52 <= g436740;
                    g436738 = tmp64_52;
                    if (!below_or_equal53) {
                        g436740 = tmp64_52;
                        goto addr_4032fd_38;
                    }
                }
            } else {
                rdx54 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax31) - reinterpret_cast<uint32_t>(rbx5));
                goto addr_4032d4_40;
            }
        } else {
            rax18 = g436400;
            rcx55 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx30) - reinterpret_cast<uint32_t>(rbx5));
            rsi56 = reinterpret_cast<struct s24*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rdx30));
            if (reinterpret_cast<uint32_t>(rcx55) <= reinterpret_cast<uint32_t>(31)) {
                g4363e8 = reinterpret_cast<struct s13*>(0);
                g436400 = reinterpret_cast<struct s13*>(0);
                rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx30) | 3);
                rsi56->f8 = rsi56->f8 | 1;
                goto addr_4032fd_38;
            } else {
                rdx57 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
                g4363e8 = rcx55;
                g436400 = rdx57;
                rdx57->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx55) | 1);
                rsi56->f0 = rcx55;
                goto addr_4032f5_44;
            }
        }
    } else {
        rdx58 = rax18->f18;
        rsi59 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 48);
        r10_60 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint64_t>(r9_9));
        if (rdx58 != rax18) {
            rcx61 = rax18->f10;
            rcx61->f18 = rdx58;
            rdx58->f10 = rcx61;
            goto addr_4028be_47;
        }
        rdx58 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 40);
        r8_62 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax18) + 40);
        if (rdx58) 
            goto addr_402894_49; else 
            goto addr_402887_50;
    }
    addr_40330a_51:
    return rax44;
    addr_402ce9_32:
    rax63 = g436758;
    rdx64 = g436760;
    if (!reinterpret_cast<int1_t>(r9_46 == reinterpret_cast<uint32_t>(rax63) + reinterpret_cast<uint32_t>(rdx64)) || ((ecx65 = g436770, !!(*reinterpret_cast<unsigned char*>(&ecx65) & 8)) || (!(*reinterpret_cast<unsigned char*>(&ecx65) & 1) || (reinterpret_cast<uint32_t>(r10_50) < reinterpret_cast<uint32_t>(rax63) || reinterpret_cast<uint32_t>(r9_46) <= reinterpret_cast<uint32_t>(r10_50))))) {
        cf66 = reinterpret_cast<uint32_t>(r9_46) < reinterpret_cast<uint32_t>(g4363f8);
        if (cf66) {
            g4363f8 = r9_46;
        }
        *reinterpret_cast<int32_t*>(&rcx67) = 0x436758;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx67) + 4) = 0;
        if (!reinterpret_cast<int1_t>(rax63 == reinterpret_cast<uint32_t>(r9_46) + reinterpret_cast<uint32_t>(r12_40))) 
            goto addr_4030ae_55;
        esi68 = g436770;
        r11d69 = esi68 & 8;
        if (r11d69) 
            goto addr_4030ae_55;
        if (*reinterpret_cast<unsigned char*>(&esi68) & 1) 
            goto addr_402d7f_58;
    } else {
        g436760 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx64) + reinterpret_cast<uint32_t>(r12_40));
        goto addr_402d31_60;
    }
    do {
        addr_4030ae_55:
        r13_70 = rcx67->f0;
        if (reinterpret_cast<uint32_t>(r10_50) < reinterpret_cast<uint32_t>(r13_70)) 
            continue;
        r13_70 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rcx67->f8));
        if (reinterpret_cast<uint32_t>(r10_50) < reinterpret_cast<uint32_t>(r13_70)) 
            break;
        rcx67 = rcx67->f10;
    } while (rcx67);
    goto addr_4030c8_63;
    addr_4030d2_64:
    rax71 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r13_70) + 0xffffffffffffffb1);
    rdx72 = rax71;
    *reinterpret_cast<uint32_t*>(&rdx73) = *reinterpret_cast<uint32_t*>(&rdx72) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx73) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rdx73)) {
        rax74 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(rax71));
        *reinterpret_cast<uint32_t*>(&rax75) = *reinterpret_cast<uint32_t*>(&rax74) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax75) + 4) = 0;
        rdx73 = rax75;
    }
    r11_76 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r13_70) + reinterpret_cast<uint64_t>(rdx73) + 0xffffffffffffffa1);
    if (reinterpret_cast<uint32_t>(r11_76) < reinterpret_cast<uint32_t>(reinterpret_cast<uint32_t>(r10_50) + 32)) {
        r11_76 = r10_50;
    }
    fun_401ad2();
    rax77 = reinterpret_cast<struct s15*>(&r11_76->f10);
    r11_76->f8 = reinterpret_cast<struct s13*>(51);
    rdi78 = reinterpret_cast<struct s15*>(&r11_76->f10);
    *reinterpret_cast<int32_t*>(&rsi79) = 0x436758;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi79) + 4) = 0;
    ecx80 = 8;
    while (ecx80) {
        --ecx80;
        rdi78->f0 = *rsi79;
        rdi78 = reinterpret_cast<struct s15*>(&rdi78->pad8);
        ++rsi79;
    }
    g436768 = rax77;
    rax81 = r11_76 + 2;
    g436758 = r9_46;
    g436760 = r12_40;
    g436770 = 1;
    do {
        *reinterpret_cast<struct s13**>(&rax81->f0) = reinterpret_cast<struct s13*>(11);
        rax81 = reinterpret_cast<struct s13*>(&rax81->f8);
    } while (reinterpret_cast<uint32_t>(r13_70) > reinterpret_cast<uint32_t>(rax81));
    if (r10_50 == r11_76) {
        addr_4032c5_74:
        rdx82 = g4363f0;
        if (reinterpret_cast<uint32_t>(rbx5) >= reinterpret_cast<uint32_t>(rdx82)) {
            fun_401556();
            goto addr_403308_28;
        } else {
            rdx54 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx82) - reinterpret_cast<uint32_t>(rbx5));
        }
    } else {
        r11_76->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r11_76->f8) & 0xfffffffffffffffe);
        rsi83 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r11_76) - reinterpret_cast<uint32_t>(r10_50));
        rcx84 = reinterpret_cast<uint32_t>(rsi83) >> 3;
        r10_50->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi83) | 1);
        *reinterpret_cast<struct s13**>(&r11_76->f0) = rsi83;
        if (reinterpret_cast<uint32_t>(rsi83) > reinterpret_cast<uint32_t>(0xff)) {
            rdx85 = reinterpret_cast<uint32_t>(rsi83) >> 8;
            eax86 = *reinterpret_cast<struct s13**>(&rdx85);
            if (*reinterpret_cast<struct s13**>(&rdx85) && (eax86 = reinterpret_cast<struct s13*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdx85)) <= 0xffff)) {
                __asm__("bsr edx, edx");
                edx87 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdx85)) ^ 31;
                ecx88 = 38 - edx87;
                *reinterpret_cast<void**>(&rax89) = reinterpret_cast<void*>(31 - edx87);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax89) + 4) = 0;
                rcx90 = reinterpret_cast<uint32_t>(rsi83) >> *reinterpret_cast<signed char*>(&ecx88);
                *reinterpret_cast<uint32_t*>(&rcx91) = *reinterpret_cast<uint32_t*>(&rcx90) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx91) + 4) = 0;
                eax86 = reinterpret_cast<struct s13*>(static_cast<uint32_t>(rcx91 + rax89 * 2));
            }
            edx92 = g4363e4;
            ecx93 = eax86;
            edi94 = 1 << *reinterpret_cast<unsigned char*>(&ecx93);
            *reinterpret_cast<struct s13**>(&(r10_50 + 2)->f0) = eax86;
            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_50) + 40) = reinterpret_cast<struct s13*>(0);
            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_50) + 32) = reinterpret_cast<struct s13*>(0);
            *reinterpret_cast<struct s13**>(&rdi95) = eax86;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi95) + 4) = 0;
            if (edx92 & edi94) 
                goto addr_40324d_81; else 
                goto addr_40322f_82;
        } else {
            edx96 = g4363e0;
            *reinterpret_cast<int32_t*>(&rax97) = static_cast<int32_t>(rcx84 + rcx84);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax97) + 4) = 0;
            esi98 = 1 << *reinterpret_cast<unsigned char*>(&rcx84);
            rax99 = reinterpret_cast<struct s13*>(rax97 * 8 + 0x436428);
            if (edx96 & esi98) {
                rdx100 = rax99->f10;
            } else {
                g4363e0 = edx96 | esi98;
                rdx100 = rax99;
            }
            rax99->f10 = r10_50;
            rdx100->f18 = r10_50;
            r10_50->f10 = rdx100;
            r10_50->f18 = rax99;
            goto addr_4032c5_74;
        }
    }
    addr_4032d4_40:
    rax18 = g436408;
    g4363f0 = rdx54;
    rcx101 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
    g436408 = rcx101;
    rcx101->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx54) | 1);
    addr_4032f5_44:
    rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    addr_4032fd_38:
    rax44 = reinterpret_cast<struct s15*>(&rax18->f10);
    goto addr_40330a_51;
    addr_40324d_81:
    ecx102 = 0;
    rdx103 = *reinterpret_cast<struct s13**>(rdi95 * 8 + 0x436638);
    if (eax86 != 31) {
        ecx102 = 57 - (reinterpret_cast<uint32_t>(eax86) >> 1);
    }
    rcx104 = reinterpret_cast<uint32_t>(rsi83) << *reinterpret_cast<unsigned char*>(&ecx102);
    while (rsi83 != (reinterpret_cast<uint32_t>(rdx103->f8) & 0xfffffffffffffff8)) {
        rax105 = rcx104;
        rcx104 = rcx104 + rcx104;
        rax106 = (rax105 >> 63) + 4;
        if (!*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx103) + rax106 * 8)) 
            goto addr_403297_91;
        rdx103 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx103) + rax106 * 8);
    }
    rax107 = rdx103->f10;
    rax107->f18 = r10_50;
    rdx103->f10 = r10_50;
    r10_50->f10 = rax107;
    r10_50->f18 = rdx103;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_50) + 48) = reinterpret_cast<struct s13*>(0);
    goto addr_4032c5_74;
    addr_403297_91:
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx103) + rax106 * 8) = r10_50;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_50) + 48) = rdx103;
    addr_40329f_94:
    r10_50->f18 = r10_50;
    r10_50->f10 = r10_50;
    goto addr_4032c5_74;
    addr_40322f_82:
    *reinterpret_cast<struct s13**>(rdi95 * 8 + 0x436638) = r10_50;
    g4363e4 = edx92 | edi94;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_50) + 48) = reinterpret_cast<struct s13*>(rdi95 * 8 + 0x436638);
    goto addr_40329f_94;
    addr_4030c8_63:
    __asm__("ud2 ");
    goto addr_4030d2_64;
    addr_402d7f_58:
    rcx108 = rax63;
    g436758 = r9_46;
    *reinterpret_cast<uint32_t*>(&rcx109) = *reinterpret_cast<uint32_t*>(&rcx108) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx109) + 4) = 0;
    g436760 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx64) + reinterpret_cast<uint32_t>(r12_40));
    if (*reinterpret_cast<uint32_t*>(&rcx109)) {
        rcx110 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rax63->f10));
        *reinterpret_cast<uint32_t*>(&rcx109) = *reinterpret_cast<uint32_t*>(&rcx110) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx109) + 4) = 0;
    }
    rdx111 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax63) + reinterpret_cast<uint64_t>(rcx109));
    rax112 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r9_46) + reinterpret_cast<uint32_t>(rbx5));
    r8_113 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx111) - reinterpret_cast<uint32_t>(r9_46)) - reinterpret_cast<uint32_t>(rbx5));
    r9_46->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) | 3);
    if (r10_50 == rdx111) 
        goto addr_402dc3_97;
    zf114 = rdx111 == g436400;
    if (!zf114) {
        rcx115 = rdx111->f8;
        *reinterpret_cast<uint32_t*>(&rcx116) = *reinterpret_cast<uint32_t*>(&rcx115) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx116) + 4) = 0;
        if (rcx116 - 1) {
            addr_402f44_100:
            rdx111->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx111->f8) & 0xfffffffffffffffe);
            rcx117 = reinterpret_cast<uint64_t>(r8_113) >> 3;
            rax112->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r8_113) | 1);
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rax112) + reinterpret_cast<uint64_t>(r8_113)) = r8_113;
            if (reinterpret_cast<uint64_t>(r8_113) > 0xff) {
                rsi118 = reinterpret_cast<uint64_t>(r8_113) >> 8;
                edx119 = *reinterpret_cast<struct s13**>(&rsi118);
                if (*reinterpret_cast<struct s13**>(&rsi118) && (edx119 = reinterpret_cast<struct s13*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rsi118)) <= 0xffff)) {
                    __asm__("bsr esi, esi");
                    esi120 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rsi118)) ^ 31;
                    ecx121 = 38 - esi120;
                    *reinterpret_cast<void**>(&rdx122) = reinterpret_cast<void*>(31 - esi120);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx122) + 4) = 0;
                    rcx123 = reinterpret_cast<uint64_t>(r8_113) >> *reinterpret_cast<signed char*>(&ecx121);
                    *reinterpret_cast<uint32_t*>(&rcx124) = *reinterpret_cast<uint32_t*>(&rcx123) & 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx124) + 4) = 0;
                    edx119 = reinterpret_cast<struct s13*>(static_cast<uint32_t>(rcx124 + rdx122 * 2));
                }
                esi125 = g4363e4;
                ecx126 = edx119;
                edi127 = 1 << *reinterpret_cast<unsigned char*>(&ecx126);
                *reinterpret_cast<struct s13**>(&(rax112 + 2)->f0) = edx119;
                *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax112) + 40) = reinterpret_cast<struct s13*>(0);
                *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax112) + 32) = reinterpret_cast<struct s13*>(0);
                *reinterpret_cast<struct s13**>(&rdi128) = edx119;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi128) + 4) = 0;
                if (!(esi125 & edi127)) 
                    goto addr_40300c_104;
            } else {
                esi129 = g4363e0;
                *reinterpret_cast<int32_t*>(&rdx130) = static_cast<int32_t>(rcx117 + rcx117);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx130) + 4) = 0;
                edi131 = 1 << *reinterpret_cast<unsigned char*>(&rcx117);
                rdx132 = reinterpret_cast<struct s13*>(rdx130 * 8 + 0x436428);
                if (esi129 & edi131) {
                    rcx133 = rdx132->f10;
                } else {
                    rcx133 = rdx132;
                    g4363e0 = esi129 | edi131;
                }
                rdx132->f10 = rax112;
                rcx133->f18 = rax112;
                rax112->f10 = rcx133;
                rax112->f18 = rdx132;
                goto addr_4030a5_109;
            }
        } else {
            rsi134 = rdx111->f18;
            rbx135 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx111->f8) & 0xfffffffffffffff8);
            if (reinterpret_cast<uint32_t>(rdx111->f8) <= reinterpret_cast<uint32_t>(0xff)) {
                rdi136 = rdx111->f10;
                if (rdi136 != rsi134) {
                    rdi136->f18 = rsi134;
                    rsi134->f10 = rdi136;
                    goto addr_402f3e_113;
                } else {
                    __asm__("rol esi, cl");
                    g4363e0 = g4363e0 & 0xfffffffe;
                    goto addr_402f3e_113;
                }
            }
            rdi137 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx111) + 48);
            if (rdx111 == rsi134) 
                goto addr_402e84_116; else 
                goto addr_402e76_117;
        }
    } else {
        tmp64_138 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r8_113) + reinterpret_cast<uint32_t>(g4363e8));
        g436400 = rax112;
        g4363e8 = tmp64_138;
        rax112->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(tmp64_138) | 1);
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax112) + reinterpret_cast<uint32_t>(tmp64_138)) = tmp64_138;
        goto addr_4030a5_109;
    }
    rsi139 = *reinterpret_cast<struct s13**>(rdi128 * 8 + 0x436638);
    if (edx119 != 31) {
        r11d69 = 57 - (reinterpret_cast<uint32_t>(edx119) >> 1);
    }
    ecx140 = r11d69;
    rcx141 = reinterpret_cast<uint64_t>(r8_113) << *reinterpret_cast<unsigned char*>(&ecx140);
    while (r8_113 != (reinterpret_cast<uint32_t>(rsi139->f8) & 0xfffffffffffffff8)) {
        rdx142 = rcx141;
        rcx141 = rcx141 + rcx141;
        rdx143 = (rdx142 >> 63) + 4;
        if (!*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi139) + rdx143 * 8)) 
            goto addr_403077_124;
        rsi139 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi139) + rdx143 * 8);
    }
    rdx144 = rsi139->f10;
    rdx144->f18 = rax112;
    rsi139->f10 = rax112;
    rax112->f10 = rdx144;
    rax112->f18 = rsi139;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax112) + 48) = reinterpret_cast<struct s13*>(0);
    addr_4030a5_109:
    rax44 = reinterpret_cast<struct s15*>(&r9_46->f10);
    goto addr_40330a_51;
    addr_403077_124:
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi139) + rdx143 * 8) = rax112;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax112) + 48) = rsi139;
    addr_40307f_127:
    rax112->f18 = rax112;
    rax112->f10 = rax112;
    goto addr_4030a5_109;
    addr_40300c_104:
    *reinterpret_cast<struct s13**>(rdi128 * 8 + 0x436638) = rax112;
    g4363e4 = esi125 | edi127;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax112) + 48) = reinterpret_cast<struct s13*>(rdi128 * 8 + 0x436638);
    goto addr_40307f_127;
    addr_402e84_116:
    rsi134 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx111) + 40);
    r10_145 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx111) + 40);
    if (rsi134) {
        addr_402e9e_128:
        rcx146 = rsi134;
    } else {
        rsi134 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx111) + 32);
        if (!rsi134) {
            addr_402ec9_130:
            if (!rdi137) {
                addr_402f3e_113:
                rdx111 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx111) + reinterpret_cast<uint64_t>(rbx135));
                r8_113 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r8_113) + reinterpret_cast<uint64_t>(rbx135));
                goto addr_402f44_100;
            } else {
                *reinterpret_cast<struct s13**>(&r10_147) = *reinterpret_cast<struct s13**>(&(rdx111 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_147) + 4) = 0;
                if (rdx111 != *reinterpret_cast<struct s13**>(r10_147 * 8 + 0x436638)) {
                    if (rdx111 != *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi137) + 32)) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi137) + 40) = rsi134;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi137) + 32) = rsi134;
                    }
                    if (rsi134) 
                        goto addr_402ef0_136;
                    goto addr_402f3e_113;
                } else {
                    *reinterpret_cast<struct s13**>((r10_147 + 74) * 8 + 0x4363e8) = rsi134;
                    if (!rsi134) {
                        __asm__("rol esi, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_402f3e_113;
                    } else {
                        addr_402ef0_136:
                        rcx148 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx111) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi134) + 48) = rdi137;
                        if (rcx148) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi134) + 32) = rcx148;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx148) + 48) = rsi134;
                            goto addr_402f2d_141;
                        }
                    }
                }
            }
        } else {
            r10_145 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx111) + 32);
            goto addr_402e9e_128;
        }
    }
    addr_402ea1_143:
    r12_149 = r10_145;
    rsi134 = rcx146;
    r10_145 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx146) + 40);
    rcx146 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx146) + 40);
    if (rcx146) 
        goto addr_402ea1_143;
    rcx146 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi134) + 32);
    r10_145 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi134) + 32);
    if (rcx146) 
        goto addr_402ea1_143;
    *reinterpret_cast<struct s13**>(&r12_149->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_402ec9_130;
    addr_402f2d_141:
    rcx150 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx111) + 40);
    if (rcx150) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi134) + 40) = rcx150;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx150) + 48) = rsi134;
        goto addr_402f3e_113;
    }
    addr_402e76_117:
    rcx151 = rdx111->f10;
    rcx151->f18 = rsi134;
    rsi134->f10 = rcx151;
    goto addr_402ec9_130;
    addr_402dc3_97:
    tmp64_152 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r8_113) + reinterpret_cast<uint32_t>(g4363f0));
    g436408 = rax112;
    g4363f0 = tmp64_152;
    rax112->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(tmp64_152) | 1);
    goto addr_4030a5_109;
    addr_402d31_60:
    fun_401ad2();
    goto addr_4032c5_74;
    addr_402c7b_33:
    rax153 = g4363f8;
    if (!rax153 || reinterpret_cast<uint32_t>(r9_46) < reinterpret_cast<uint32_t>(rax153)) {
        g4363f8 = r9_46;
    }
    rax154 = g4367a0;
    g436758 = r9_46;
    g436760 = r12_40;
    g436770 = 1;
    g436418 = 0x80;
    g436420 = rax154;
    *reinterpret_cast<int32_t*>(&rax155) = 0x436428;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax155) + 4) = 0;
    do {
        rax155->f18 = rax155;
        rax155->f10 = rax155;
        rax155 = reinterpret_cast<struct s26*>(&rax155->f10);
    } while (!reinterpret_cast<int1_t>(0x436628 == rax155));
    goto addr_402d31_60;
    addr_402894_49:
    rcx156 = rdx58;
    addr_402897_151:
    r11_157 = r8_62;
    rdx58 = rcx156;
    r8_62 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx156) + 40);
    rcx156 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx156) + 40);
    if (rcx156) 
        goto addr_402897_151;
    rcx156 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx58) + 32);
    r8_62 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx58) + 32);
    if (rcx156) 
        goto addr_402897_151;
    *reinterpret_cast<struct s13**>(&r11_157->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_4028be_47;
    addr_402887_50:
    rdx58 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 32);
    if (!rdx58) {
        addr_4028be_47:
        if (!rsi59) {
            addr_40292d_154:
            if (reinterpret_cast<uint64_t>(r9_9) > 31) {
                r8_158 = reinterpret_cast<struct s27*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
                rcx159 = reinterpret_cast<uint64_t>(r9_9) >> 3;
                rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                r8_158->f8 = reinterpret_cast<uint64_t>(r9_9) | 1;
                *reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r8_158) + reinterpret_cast<uint64_t>(r9_9)) = r9_9;
                if (reinterpret_cast<uint64_t>(r9_9) > 0xff) {
                    rsi160 = reinterpret_cast<uint64_t>(r9_9) >> 8;
                    edx161 = *reinterpret_cast<uint32_t*>(&rsi160);
                    if (*reinterpret_cast<uint32_t*>(&rsi160) && (edx161 = 31, *reinterpret_cast<uint32_t*>(&rsi160) <= 0xffff)) {
                        __asm__("bsr esi, esi");
                        esi162 = *reinterpret_cast<uint32_t*>(&rsi160) ^ 31;
                        ecx163 = 38 - esi162;
                        *reinterpret_cast<uint32_t*>(&rdx164) = 31 - esi162;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx164) + 4) = 0;
                        rcx165 = reinterpret_cast<uint64_t>(r9_9) >> *reinterpret_cast<signed char*>(&ecx163);
                        *reinterpret_cast<uint32_t*>(&rcx166) = *reinterpret_cast<uint32_t*>(&rcx165) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx166) + 4) = 0;
                        edx161 = static_cast<uint32_t>(rcx166 + rdx164 * 2);
                    }
                    esi167 = g4363e4;
                    ecx168 = edx161;
                    edi169 = 1 << *reinterpret_cast<unsigned char*>(&ecx168);
                    r8_158->f38 = edx161;
                    r8_158->f28 = 0;
                    r8_158->f20 = 0;
                    *reinterpret_cast<uint32_t*>(&rdi170) = edx161;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi170) + 4) = 0;
                    if (!(esi167 & edi169)) 
                        goto addr_402a19_159;
                } else {
                    esi171 = g4363e0;
                    *reinterpret_cast<int32_t*>(&rdx172) = static_cast<int32_t>(rcx159 + rcx159);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx172) + 4) = 0;
                    edi173 = 1 << *reinterpret_cast<unsigned char*>(&rcx159);
                    rdx174 = reinterpret_cast<struct s27*>(rdx172 * 8 + 0x436428);
                    if (esi171 & edi173) {
                        rcx175 = rdx174->f10;
                    } else {
                        rcx175 = rdx174;
                        g4363e0 = esi171 | edi173;
                    }
                    rdx174->f10 = r8_158;
                    rcx175->f18 = r8_158;
                    r8_158->f10 = rcx175;
                    r8_158->f18 = rdx174;
                    goto addr_4032fd_38;
                }
            } else {
                rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r10_60) | 3);
                *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r10_60) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r10_60) + 8) | 1;
                goto addr_4032fd_38;
            }
        } else {
            *reinterpret_cast<struct s13**>(&r8_176) = *reinterpret_cast<struct s13**>(&(rax18 + 2)->f0);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_176) + 4) = 0;
            if (*reinterpret_cast<struct s13**>(r8_176 * 8 + 0x436638) != rax18) {
                if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi59) + 32) != rax18) {
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi59) + 40) = rdx58;
                } else {
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi59) + 32) = rdx58;
                }
                if (rdx58) 
                    goto addr_4028e2_170;
                goto addr_40292d_154;
            } else {
                *reinterpret_cast<struct s13**>((r8_176 + 74) * 8 + 0x4363e8) = rdx58;
                if (!rdx58) {
                    __asm__("btr edi, r8d");
                    g4363e4 = edi6;
                    goto addr_40292d_154;
                } else {
                    addr_4028e2_170:
                    rcx177 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 32);
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx58) + 48) = rsi59;
                    if (rcx177) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx58) + 32) = rcx177;
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx177) + 48) = rdx58;
                        goto addr_40291c_175;
                    }
                }
            }
        }
    } else {
        r8_62 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax18) + 32);
        goto addr_402894_49;
    }
    ecx178 = 0;
    rsi179 = *reinterpret_cast<struct s27**>(rdi170 * 8 + 0x436638);
    if (edx161 != 31) {
        ecx178 = 57 - (edx161 >> 1);
    }
    rcx180 = reinterpret_cast<uint64_t>(r9_9) << *reinterpret_cast<unsigned char*>(&ecx178);
    while (r9_9 != (rsi179->f8 & 0xfffffffffffffff8)) {
        rdx181 = rcx180;
        rcx180 = rcx180 + rcx180;
        rdx182 = (rdx181 >> 63) + 4;
        if (!*reinterpret_cast<struct s27**>(reinterpret_cast<uint64_t>(rsi179) + rdx182 * 8)) 
            goto addr_402a81_182;
        rsi179 = *reinterpret_cast<struct s27**>(reinterpret_cast<uint64_t>(rsi179) + rdx182 * 8);
    }
    rdx183 = rsi179->f10;
    rdx183->f18 = r8_158;
    rsi179->f10 = r8_158;
    r8_158->f10 = rdx183;
    r8_158->f18 = rsi179;
    r8_158->f30 = reinterpret_cast<struct s27*>(0);
    goto addr_4032fd_38;
    addr_402a81_182:
    *reinterpret_cast<struct s27**>(reinterpret_cast<uint64_t>(rsi179) + rdx182 * 8) = r8_158;
    r8_158->f30 = rsi179;
    addr_402a89_185:
    r8_158->f18 = r8_158;
    r8_158->f10 = r8_158;
    goto addr_4032fd_38;
    addr_402a19_159:
    *reinterpret_cast<struct s27**>(rdi170 * 8 + 0x436638) = r8_158;
    g4363e4 = esi167 | edi169;
    r8_158->f30 = reinterpret_cast<struct s27*>(rdi170 * 8 + 0x436638);
    goto addr_402a89_185;
    addr_40291c_175:
    rcx184 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 40);
    if (rcx184) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx58) + 40) = rcx184;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx184) + 48) = rdx58;
        goto addr_40292d_154;
    }
    addr_402770_9:
    ecx185 = 0;
    if (esi10 != 31) {
        ecx185 = 57 - (esi10 >> 1);
    }
    *reinterpret_cast<int32_t*>(&r11_186) = 0;
    *reinterpret_cast<int32_t*>(&r11_186 + 1) = 0;
    *reinterpret_cast<int32_t*>(&r10_187) = 0;
    *reinterpret_cast<int32_t*>(&r10_187 + 1) = 0;
    rcx188 = reinterpret_cast<uint32_t>(rbx5) << *reinterpret_cast<unsigned char*>(&ecx185);
    while (1) {
        rdx189 = reinterpret_cast<void*>((reinterpret_cast<uint32_t>(rax18->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint64_t>(rdx189) < reinterpret_cast<uint64_t>(r9_9)) {
            if (!rdx189) 
                goto addr_4027d9_191;
            r9_9 = rdx189;
            r10_187 = rax18;
        }
        rdx17 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 40);
        rax18 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + ((rcx188 >> 63) + 4) * 8);
        if (!rdx17 || rdx17 == rax18) {
            rdx17 = r11_186;
        }
        if (!rax18) 
            break;
        rcx188 = rcx188 + rcx188;
        r11_186 = rdx17;
    }
    rax18 = r10_187;
    goto addr_4027e4_15;
    addr_4027d9_191:
    rdx17 = rax18;
    *reinterpret_cast<int32_t*>(&r9_9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = 0;
    goto addr_4027e4_15;
    addr_40241e_13:
    r9_190 = g4363e8;
    if (reinterpret_cast<uint32_t>(r9_190) >= reinterpret_cast<uint32_t>(rbx5)) 
        goto addr_402abb_4;
    if (!eax23) {
        edi191 = g4363e4;
        if (!edi191) 
            goto addr_402abb_4;
        __asm__("bsf eax, eax");
        *reinterpret_cast<uint32_t*>(&rax192) = -edi191 & edi191;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax192) + 4) = 0;
        rcx193 = *reinterpret_cast<struct s13**>(rax192 * 8 + 0x436638);
        rax18 = rcx193;
        r8_194 = reinterpret_cast<struct s13*>((reinterpret_cast<uint32_t>(rcx193->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
        while ((rdx195 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx193) + 32), !!rdx195) || (rdx195 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx193) + 40), !!rdx195)) {
            rcx196 = reinterpret_cast<struct s13*>((reinterpret_cast<uint32_t>(rdx195->f8) & 0xfffffffffffffff8) - reinterpret_cast<uint32_t>(rbx5));
            if (reinterpret_cast<uint32_t>(rcx196) < reinterpret_cast<uint32_t>(r8_194)) {
                r8_194 = rcx196;
                rax18 = rdx195;
            }
            rcx193 = rdx195;
        }
        rdx197 = rax18->f18;
        r10_198 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 48);
        r12_199 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(r8_194));
        if (rdx197 != rax18) 
            goto addr_4025a8_206;
    } else {
        *reinterpret_cast<int32_t*>(&rdi200) = 1 << *reinterpret_cast<unsigned char*>(&rcx22);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi200) + 4) = 0;
        r8d201 = static_cast<uint32_t>(rdi200 + rdi200);
        *reinterpret_cast<int32_t*>(&rcx202) = reinterpret_cast<int32_t>(-(eax23 << *reinterpret_cast<unsigned char*>(&rcx22) & (-r8d201 | r8d201)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx202) + 4) = 0;
        __asm__("bsf ecx, eax");
        *reinterpret_cast<int32_t*>(&rax203) = static_cast<int32_t>(rcx202 + rcx202);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax203) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdi204) = static_cast<int32_t>(rcx202 * 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi204) + 4) = 0;
        r10_205 = reinterpret_cast<struct s13*>(rax203 * 8 + 0x436428);
        r8_206 = rdi204;
        rax18 = r10_205->f10;
        r11_207 = rax18->f10;
        if (r10_205 != r11_207) {
            r11_207->f18 = r10_205;
            r10_205->f10 = r11_207;
        } else {
            g4363e0 = esi21 & reinterpret_cast<uint32_t>(~(1 << *reinterpret_cast<unsigned char*>(&rcx202)));
        }
        rdx208 = reinterpret_cast<struct s28*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(rdi204));
        rsi209 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rdi204) - reinterpret_cast<uint32_t>(rbx5));
        if (reinterpret_cast<uint32_t>(rsi209) > reinterpret_cast<uint32_t>(31)) {
            rbx210 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) + reinterpret_cast<uint32_t>(rax18));
            rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) | 3);
            rbx210->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi209) | 1);
            rdx208->f0 = rsi209;
            if (r9_190) {
                r10d211 = g4363e0;
                rcx212 = reinterpret_cast<uint32_t>(r9_190) >> 3;
                rdx213 = g436400;
                *reinterpret_cast<int32_t*>(&r8_214) = static_cast<int32_t>(rcx212 + rcx212);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_214) + 4) = 0;
                r11d215 = 1 << *reinterpret_cast<unsigned char*>(&rcx212);
                r8_216 = reinterpret_cast<struct s13*>(r8_214 * 8 + 0x436428);
                if (r10d211 & r11d215) {
                    rcx217 = r8_216->f10;
                } else {
                    rcx217 = r8_216;
                    g4363e0 = r10d211 | r11d215;
                }
                r8_216->f10 = rdx213;
                rcx217->f18 = rdx213;
                rdx213->f10 = rcx217;
                rdx213->f18 = r8_216;
            }
            g4363e8 = rsi209;
            g436400 = rbx210;
            goto addr_4032fd_38;
        } else {
            *reinterpret_cast<uint32_t*>(&rbx218) = *reinterpret_cast<uint32_t*>(&r8_206) | 3;
            *reinterpret_cast<int32_t*>(&rbx218 + 1) = 0;
            rax18->f8 = rbx218;
            rdx208->f8 = rdx208->f8 | 1;
            goto addr_4032fd_38;
        }
    }
    rdx197 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 40);
    r11_219 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax18) + 40);
    if (rdx197) {
        addr_4025d0_219:
        rcx220 = rdx197;
    } else {
        rdx197 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 32);
        if (!rdx197) {
            addr_4025fb_221:
            if (!r10_198) {
                addr_40266a_222:
                if (reinterpret_cast<uint32_t>(r8_194) > reinterpret_cast<uint32_t>(31)) {
                    r10_221 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint32_t>(rbx5));
                    rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx5) | 3);
                    r10_221->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r8_194) | 1);
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_221) + reinterpret_cast<uint32_t>(r8_194)) = r8_194;
                    if (r9_190) {
                        rdx222 = g436400;
                        rcx223 = reinterpret_cast<uint32_t>(r9_190) >> 3;
                        *reinterpret_cast<int32_t*>(&rdi224) = static_cast<int32_t>(rcx223 + rcx223);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi224) + 4) = 0;
                        r9d225 = 1 << *reinterpret_cast<unsigned char*>(&rcx223);
                        rdi226 = reinterpret_cast<struct s13*>(rdi224 * 8 + 0x436428);
                        if (esi21 & r9d225) {
                            rcx227 = rdi226->f10;
                        } else {
                            rcx227 = rdi226;
                            g4363e0 = esi21 | r9d225;
                        }
                        rdi226->f10 = rdx222;
                        rcx227->f18 = rdx222;
                        rdx222->f10 = rcx227;
                        rdx222->f18 = rdi226;
                    }
                    g4363e8 = r8_194;
                    g436400 = r10_221;
                    goto addr_4032fd_38;
                } else {
                    rax18->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r12_199) | 3);
                    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r12_199) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r12_199) + 8) | 1;
                    goto addr_4032fd_38;
                }
            } else {
                *reinterpret_cast<struct s13**>(&r11_228) = *reinterpret_cast<struct s13**>(&(rax18 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_228) + 4) = 0;
                if (*reinterpret_cast<struct s13**>(r11_228 * 8 + 0x436638) != rax18) {
                    if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_198) + 32) != rax18) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_198) + 40) = rdx197;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_198) + 32) = rdx197;
                    }
                    if (rdx197) 
                        goto addr_40261f_235;
                    goto addr_40266a_222;
                } else {
                    *reinterpret_cast<struct s13**>((r11_228 + 74) * 8 + 0x4363e8) = rdx197;
                    if (!rdx197) {
                        __asm__("btr edi, r11d");
                        g4363e4 = edi191;
                        goto addr_40266a_222;
                    } else {
                        addr_40261f_235:
                        rcx229 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx197) + 48) = r10_198;
                        if (rcx229) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx197) + 32) = rcx229;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx229) + 48) = rdx197;
                            goto addr_402659_240;
                        }
                    }
                }
            }
        } else {
            r11_219 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax18) + 32);
            goto addr_4025d0_219;
        }
    }
    addr_4025d3_242:
    r13_230 = r11_219;
    rdx197 = rcx220;
    r11_219 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx220) + 40);
    rcx220 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx220) + 40);
    if (rcx220) 
        goto addr_4025d3_242;
    rcx220 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx197) + 32);
    r11_219 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx197) + 32);
    if (rcx220) 
        goto addr_4025d3_242;
    *reinterpret_cast<struct s13**>(&r13_230->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_4025fb_221;
    addr_402659_240:
    rcx231 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax18) + 40);
    if (rcx231) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx197) + 40) = rcx231;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx231) + 48) = rdx197;
        goto addr_40266a_222;
    }
    addr_4025a8_206:
    rcx232 = rax18->f10;
    rcx232->f18 = rdx197;
    rdx197->f10 = rcx232;
    goto addr_4025fb_221;
    addr_4023cd_14:
    *reinterpret_cast<uint32_t*>(&rcx233) = *reinterpret_cast<int32_t*>(&rcx22) + (~eax23 & 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx233) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rax234) = static_cast<int32_t>(rcx233 + rcx233);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax234) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_235) = static_cast<int32_t>(rcx233 * 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_235) + 4) = 0;
    rdi236 = reinterpret_cast<struct s13*>(rax234 * 8 + 0x436428);
    rdx237 = r9_235;
    rax18 = rdi236->f10;
    r8_238 = rax18->f10;
    if (rdi236 != r8_238) {
        r8_238->f18 = rdi236;
        rdi236->f10 = r8_238;
    } else {
        __asm__("btr esi, ecx");
        g4363e0 = esi21;
    }
    *reinterpret_cast<uint32_t*>(&rbx239) = *reinterpret_cast<uint32_t*>(&rdx237) | 3;
    *reinterpret_cast<int32_t*>(&rbx239 + 1) = 0;
    rax18->f8 = rbx239;
    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r9_235) + 8) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uint32_t>(rax18) + reinterpret_cast<uint64_t>(r9_235) + 8) | 1;
    goto addr_4032fd_38;
}

void fun_404562(struct s13* rcx, uint64_t rdx) {
    uint64_t rcx3;

    __asm__("movd xmm3, esi");
    *reinterpret_cast<int32_t*>(&rcx3) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    if (rdx < 32) {
        rcx3 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(0x4361a0 + rcx3 * 8);
}

struct s13* fun_401556() {
    uint32_t eax1;

    eax1 = g436340;
    g437fb0 = eax1;
    return 0xff;
}

struct s13* g436410;

struct s13* fun_403312(struct s13* rcx, uint64_t rdx) {
    int64_t rdi3;
    struct s13* rax4;
    struct s13* rdi5;
    void* rdi6;
    struct s13* v7;
    struct s13* rsi8;
    struct s13* rcx9;
    struct s13* rdi10;
    struct s13* rax11;
    struct s13* rsi12;
    uint64_t rbx13;
    uint32_t eax14;
    int1_t zf15;
    struct s13* rcx16;
    int64_t rcx17;
    struct s13* rdx18;
    struct s13* rdx19;
    struct s13* r8_20;
    struct s13* r8_21;
    struct s13* rcx22;
    struct s13* r9_23;
    struct s13* rcx24;
    struct s13* r8_25;
    int1_t zf26;
    struct s13* r10_27;
    struct s13* tmp64_28;
    void* r8_29;
    struct s13* rdx30;
    struct s13* tmp64_31;
    int1_t below_or_equal32;
    struct s13* rcx33;
    struct s13* rax34;
    struct s13* rdx35;
    struct s13* r13_36;
    struct s13* rdi37;
    struct s13* rcx38;
    struct s13* r10_39;
    uint64_t rcx40;
    uint32_t edx41;
    int64_t rax42;
    uint32_t esi43;
    struct s13* rax44;
    struct s13* rdx45;
    uint64_t rsi46;
    struct s13* edx47;
    uint32_t esi48;
    uint32_t ecx49;
    int64_t rdx50;
    uint64_t rcx51;
    int64_t rcx52;
    uint32_t esi53;
    struct s13* ecx54;
    uint32_t r8d55;
    int64_t r8_56;
    uint32_t ecx57;
    struct s13* rsi58;
    uint64_t rcx59;
    uint64_t rdx60;
    uint64_t rdx61;
    struct s13* rax62;
    int1_t zf63;
    struct s13* r14_64;
    struct s15* rax65;
    uint32_t r13d66;
    uint32_t r13d67;
    struct s13* rdx68;
    void* rdx69;
    int64_t rbx70;
    void* rbx71;
    struct s13* rbx72;
    struct s13* rdx73;
    int64_t rdx74;
    void* r15_75;
    struct s13* rcx76;
    struct s13* rdx77;
    int1_t zf78;
    struct s15* r8_79;
    struct s13* rax80;
    struct s13* rsi81;
    uint32_t eax82;
    uint64_t rdx83;
    struct s13* eax84;
    uint32_t edx85;
    uint32_t ecx86;
    int64_t rax87;
    uint64_t rcx88;
    int64_t rcx89;
    uint32_t edx90;
    struct s13* ecx91;
    uint32_t esi92;
    int64_t rsi93;
    struct s13* rdx94;
    struct s13* rdx95;
    struct s13* r9_96;
    struct s13* rdx97;
    uint32_t ecx98;
    uint64_t rcx99;
    uint64_t rax100;
    uint64_t rax101;
    struct s13* rax102;
    struct s13* r8_103;
    struct s13* rcx104;
    struct s13* r9_105;
    struct s13* rcx106;
    int64_t r9_107;
    struct s13* rcx108;
    struct s13* r11_109;
    struct s13* rcx110;
    struct s13* rsi111;
    struct s13* eax112;
    void* r10_113;
    uint64_t rax114;
    struct s13* rbx115;
    struct s13* rax116;
    uint32_t eax117;
    struct s13* rdx118;
    void* rax119;
    void* rbx120;
    struct s13* rax121;
    int1_t below_or_equal122;
    struct s13* rax123;
    struct s13* rcx124;

    if (!rdi3) {
        return rax4;
    }
    rdi5 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rdi6) + 0xfffffffffffffff0);
    v7 = rsi8;
    rcx9 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff8);
    rax11 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx9) & 0xfffffffffffffff8);
    rsi12 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rax11));
    if (*reinterpret_cast<unsigned char*>(&rcx9) & 1) 
        goto addr_4034c1_4;
    rdi5 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi5) - reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)));
    *reinterpret_cast<unsigned char*>(&rcx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx9) & 3);
    if (!*reinterpret_cast<unsigned char*>(&rcx9)) {
        rbx13 = reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)) + 32;
        eax14 = fun_403d56(rcx9, rdi10);
        if (!eax14) {
            g436738 = g436738 - rbx13;
            goto addr_403812_8;
        }
    }
    rax11 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)));
    zf15 = g436400 == rdi5;
    if (!zf15) 
        goto addr_40337d_10;
    rcx16 = rsi12->f8;
    *reinterpret_cast<uint32_t*>(&rcx17) = *reinterpret_cast<uint32_t*>(&rcx16) & 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = 0;
    if (rcx17 == 3) {
        rdx18 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi12->f8) & 0xfffffffffffffffe);
        g4363e8 = rax11;
        rsi12->f8 = rdx18;
        rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax11) | 1);
        *reinterpret_cast<struct s13**>(&rsi12->f0) = rax11;
        goto addr_403812_8;
    }
    addr_40337d_10:
    rdx19 = rdi5->f18;
    if (reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(rdi10) + 0xfffffffffffffff0)) <= 0xff) {
        r8_20 = rdi5->f10;
        if (r8_20 != rdx19) {
            r8_20->f18 = rdx19;
            rdx19->f10 = r8_20;
            goto addr_4034c1_4;
        } else {
            __asm__("rol edx, cl");
            g4363e0 = g4363e0 & 0xfffffffe;
            goto addr_4034c1_4;
        }
    }
    r8_21 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48);
    if (rdi5 != rdx19) {
        rcx22 = rdi5->f10;
        rcx22->f18 = rdx19;
        rdx19->f10 = rcx22;
        goto addr_403414_18;
    }
    rdx19 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    r9_23 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rdx19) {
        addr_4033ea_20:
        rcx24 = rdx19;
    } else {
        rdx19 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 32);
        if (!rdx19) {
            addr_403414_18:
            if (!r8_21) {
                addr_4034c1_4:
                r8_25 = rsi12->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_25) & 2) {
                    rsi12->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r8_25) & 0xfffffffffffffffe);
                    rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax11) | 1);
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rax11)) = rax11;
                    goto addr_4036ae_23;
                } else {
                    zf26 = g436408 == rsi12;
                    r10_27 = g436400;
                    if (!zf26) {
                        if (rsi12 == r10_27) {
                            tmp64_28 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint32_t>(g4363e8));
                            g436400 = rdi5;
                            g4363e8 = tmp64_28;
                            rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(tmp64_28) | 1);
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(tmp64_28)) = tmp64_28;
                            goto addr_403812_8;
                        }
                        r8_29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_25) & 0xfffffffffffffff8);
                        rdx30 = rsi12->f18;
                        rax11 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint64_t>(r8_29));
                        if (reinterpret_cast<uint64_t>(r8_29) > 0xf8) 
                            goto addr_4035a7_28; else 
                            goto addr_40357f_29;
                    } else {
                        tmp64_31 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax11) + reinterpret_cast<uint32_t>(g4363f0));
                        g436408 = rdi5;
                        g4363f0 = tmp64_31;
                        rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(tmp64_31) | 1);
                        if (rdi5 == r10_27) {
                            g436400 = reinterpret_cast<struct s13*>(0);
                            g4363e8 = reinterpret_cast<struct s13*>(0);
                        }
                        below_or_equal32 = reinterpret_cast<uint32_t>(tmp64_31) <= reinterpret_cast<uint32_t>(g436410);
                        if (below_or_equal32) 
                            goto addr_403812_8;
                        rcx33 = v7;
                        if (!1) 
                            goto addr_401dea_35;
                        rax34 = g436408;
                        if (!rax34) 
                            goto addr_401dea_35;
                        rdx35 = g4363f0;
                        if (reinterpret_cast<uint32_t>(rdx35) <= reinterpret_cast<uint32_t>(80)) 
                            goto addr_401e0a_38;
                        rcx33 = reinterpret_cast<struct s13*>(0x436758);
                        r13_36 = reinterpret_cast<struct s13*>(0x436758);
                        do {
                            rdi37 = *reinterpret_cast<struct s13**>(&r13_36->f0);
                            if (reinterpret_cast<uint32_t>(rax34) < reinterpret_cast<uint32_t>(rdi37)) 
                                continue;
                            r9_23 = r13_36->f8;
                            r8_25 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi37) + reinterpret_cast<uint32_t>(r9_23));
                            if (reinterpret_cast<uint32_t>(rax34) < reinterpret_cast<uint32_t>(r8_25)) 
                                goto addr_401e43_42;
                            r13_36 = r13_36->f10;
                        } while (r13_36);
                        goto addr_401e3a_44;
                    }
                }
            } else {
                r9_23 = *reinterpret_cast<struct s13**>(&(rdi5 + 2)->f0);
                *reinterpret_cast<int32_t*>(&r9_23 + 1) = 0;
                if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r9_23) * 8 + 0x436638) != rdi5) {
                    if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_21) + 32) != rdi5) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_21) + 40) = rdx19;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_21) + 32) = rdx19;
                    }
                    if (rdx19) 
                        goto addr_40343f_50;
                    goto addr_4034c1_4;
                } else {
                    *reinterpret_cast<struct s13**>((reinterpret_cast<uint32_t>(r9_23) + 74) * 8 + 0x4363e8) = rdx19;
                    if (!rdx19) {
                        __asm__("rol edx, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_4034c1_4;
                    } else {
                        addr_40343f_50:
                        rcx38 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx19) + 48) = r8_21;
                        if (rcx38) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx19) + 32) = rcx38;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx38) + 48) = rdx19;
                            goto addr_40347c_55;
                        }
                    }
                }
            }
        } else {
            r9_23 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi5) + 32);
            goto addr_4033ea_20;
        }
    }
    addr_4033ed_57:
    r10_39 = r9_23;
    rdx19 = rcx24;
    r9_23 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx24) + 40);
    rcx24 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx24) + 40);
    if (rcx24) 
        goto addr_4033ed_57;
    rcx24 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx19) + 32);
    r9_23 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx19) + 32);
    if (rcx24) 
        goto addr_4033ed_57;
    *reinterpret_cast<struct s13**>(&r10_39->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_403414_18;
    addr_4036ae_23:
    rcx40 = reinterpret_cast<uint32_t>(rax11) >> 3;
    if (reinterpret_cast<uint32_t>(rax11) <= reinterpret_cast<uint32_t>(0xff)) {
        edx41 = g4363e0;
        *reinterpret_cast<int32_t*>(&rax42) = static_cast<int32_t>(rcx40 + rcx40);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax42) + 4) = 0;
        esi43 = 1 << *reinterpret_cast<unsigned char*>(&rcx40);
        rax44 = reinterpret_cast<struct s13*>(rax42 * 8 + 0x436428);
        if (edx41 & esi43) {
            rdx45 = rax44->f10;
        } else {
            g4363e0 = edx41 | esi43;
            rdx45 = rax44;
        }
        rax44->f10 = rdi5;
        rdx45->f18 = rdi5;
        rdi5->f10 = rdx45;
        rdi5->f18 = rax44;
        goto addr_403812_8;
    }
    rsi46 = reinterpret_cast<uint32_t>(rax11) >> 8;
    edx47 = *reinterpret_cast<struct s13**>(&rsi46);
    if (*reinterpret_cast<struct s13**>(&rsi46) && (edx47 = reinterpret_cast<struct s13*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rsi46)) <= 0xffff)) {
        __asm__("bsr esi, esi");
        esi48 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rsi46)) ^ 31;
        ecx49 = 38 - esi48;
        *reinterpret_cast<void**>(&rdx50) = reinterpret_cast<void*>(31 - esi48);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = 0;
        rcx51 = reinterpret_cast<uint32_t>(rax11) >> *reinterpret_cast<signed char*>(&ecx49);
        *reinterpret_cast<uint32_t*>(&rcx52) = *reinterpret_cast<uint32_t*>(&rcx51) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = 0;
        edx47 = reinterpret_cast<struct s13*>(static_cast<uint32_t>(rcx52 + rdx50 * 2));
    }
    esi53 = g4363e4;
    ecx54 = edx47;
    r8d55 = 1 << *reinterpret_cast<unsigned char*>(&ecx54);
    *reinterpret_cast<struct s13**>(&(rdi5 + 2)->f0) = edx47;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 40) = reinterpret_cast<struct s13*>(0);
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 32) = reinterpret_cast<struct s13*>(0);
    *reinterpret_cast<struct s13**>(&r8_56) = edx47;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_56) + 4) = 0;
    if (!(esi53 & r8d55)) 
        goto addr_403766_67;
    ecx57 = 0;
    rsi58 = *reinterpret_cast<struct s13**>(r8_56 * 8 + 0x436638);
    if (edx47 != 31) {
        ecx57 = 57 - (reinterpret_cast<uint32_t>(edx47) >> 1);
    }
    rcx59 = reinterpret_cast<uint32_t>(rax11) << *reinterpret_cast<unsigned char*>(&ecx57);
    while ((reinterpret_cast<uint32_t>(rsi58->f8) & 0xfffffffffffffff8) != rax11) {
        rdx60 = rcx59;
        rcx59 = rcx59 + rcx59;
        rdx61 = (rdx60 >> 63) + 4;
        if (!*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi58) + rdx61 * 8)) 
            goto addr_4037ce_73;
        rsi58 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi58) + rdx61 * 8);
    }
    rax62 = rsi58->f10;
    rax62->f18 = rdi5;
    rsi58->f10 = rdi5;
    rdi5->f10 = rax62;
    rdi5->f18 = rsi58;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s13*>(0);
    addr_4037fc_76:
    --g436418;
    zf63 = g436418 == 0;
    if (!zf63) {
        addr_403812_8:
        return v7;
    } else {
        *reinterpret_cast<int32_t*>(&r14_64) = 0;
        *reinterpret_cast<int32_t*>(&r14_64 + 1) = 0;
        rax65 = g436768;
        if (!rax65) 
            goto addr_401dbb_79;
        r13d66 = rax65->f18;
        if (!(*reinterpret_cast<unsigned char*>(&r13d66) & 1)) 
            goto addr_401dbb_79;
        r13d67 = r13d66 & 8;
        if (r13d67) 
            goto addr_401dbb_79;
        rdx68 = rax65->f0;
        *reinterpret_cast<uint32_t*>(&rdx69) = *reinterpret_cast<uint32_t*>(&rdx68) & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx69)) {
            rbx70 = reinterpret_cast<int64_t>(-reinterpret_cast<uint64_t>(&rax65->f0->f10));
            *reinterpret_cast<uint32_t*>(&rbx71) = *reinterpret_cast<uint32_t*>(&rbx70) & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx71) + 4) = 0;
            rdx69 = rbx71;
        }
        rbx72 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax65->f0) + reinterpret_cast<uint64_t>(rdx69));
        *reinterpret_cast<int32_t*>(&r14_64) = 0;
        *reinterpret_cast<int32_t*>(&r14_64 + 1) = 0;
        rdx73 = rbx72->f8;
        *reinterpret_cast<uint32_t*>(&rdx74) = *reinterpret_cast<uint32_t*>(&rdx73) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx74) + 4) = 0;
        if (rdx74 - 1) {
            addr_401dbb_79:
            g436418 = 0x80;
            return r14_64;
        } else {
            r14_64 = rax65->f8;
            r15_75 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx72->f8) & 0xfffffffffffffff8);
            rcx76 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx72) + reinterpret_cast<uint64_t>(r15_75));
            rdx77 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax65->f0) + reinterpret_cast<uint32_t>(r14_64) + 0xffffffffffffffb0);
            if (reinterpret_cast<uint32_t>(rcx76) < reinterpret_cast<uint32_t>(rdx77)) {
                addr_401db8_86:
                *reinterpret_cast<int32_t*>(&r14_64) = 0;
                *reinterpret_cast<int32_t*>(&r14_64 + 1) = 0;
                goto addr_401dbb_79;
            } else {
                zf78 = g436400 == rbx72;
                r8_79 = rax65->f10;
                if (zf78) {
                    g436400 = reinterpret_cast<struct s13*>(0);
                    g4363e8 = reinterpret_cast<struct s13*>(0);
                    goto addr_401c96_89;
                }
                rax80 = rbx72->f18;
                rsi81 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 48);
                if (rax80 != rbx72) 
                    goto addr_401bd3_91;
            }
        }
    }
    rax80 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax80) + 40);
    rcx76 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rax80) {
        addr_401bfb_93:
        rdx77 = rax80;
    } else {
        rax80 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 32);
        if (!rax80) {
            addr_401c25_95:
            if (!rsi81) {
                addr_401c96_89:
                eax82 = fun_403d56(rcx76, rdx77);
                if (eax82) {
                    rdx83 = reinterpret_cast<uint64_t>(r15_75) >> 8;
                    eax84 = *reinterpret_cast<struct s13**>(&rdx83);
                    if (*reinterpret_cast<struct s13**>(&rdx83) && (eax84 = reinterpret_cast<struct s13*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdx83)) <= 0xffff)) {
                        __asm__("bsr edx, edx");
                        edx85 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdx83)) ^ 31;
                        ecx86 = 38 - edx85;
                        *reinterpret_cast<void**>(&rax87) = reinterpret_cast<void*>(31 - edx85);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = 0;
                        rcx88 = reinterpret_cast<uint64_t>(r15_75) >> *reinterpret_cast<signed char*>(&ecx86);
                        *reinterpret_cast<uint32_t*>(&rcx89) = *reinterpret_cast<uint32_t*>(&rcx88) & 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx89) + 4) = 0;
                        eax84 = reinterpret_cast<struct s13*>(static_cast<uint32_t>(rcx89 + rax87 * 2));
                    }
                    edx90 = g4363e4;
                    ecx91 = eax84;
                    esi92 = 1 << *reinterpret_cast<unsigned char*>(&ecx91);
                    *reinterpret_cast<struct s13**>(&(rbx72 + 2)->f0) = eax84;
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 40) = reinterpret_cast<struct s13*>(0);
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 32) = reinterpret_cast<struct s13*>(0);
                    *reinterpret_cast<struct s13**>(&rsi93) = eax84;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi93) + 4) = 0;
                    if (edx90 & esi92) 
                        goto addr_401d3d_99; else 
                        goto addr_401d20_100;
                } else {
                    g436738 = g436738 - reinterpret_cast<uint32_t>(r14_64);
                    g436768 = r8_79;
                    goto addr_401dbb_79;
                }
            } else {
                rdx94 = *reinterpret_cast<struct s13**>(&(rbx72 + 2)->f0);
                *reinterpret_cast<int32_t*>(&rdx94 + 1) = 0;
                rcx76 = rdx94;
                rdx77 = reinterpret_cast<struct s13*>(0x4363e0 + reinterpret_cast<uint32_t>(rdx94) * 8);
                if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx77) + 0x258) != rbx72) {
                    if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi81) + 32) != rbx72) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi81) + 40) = rax80;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi81) + 32) = rax80;
                    }
                    if (rax80) 
                        goto addr_401c49_107;
                    goto addr_401c96_89;
                } else {
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx77) + 0x258) = rax80;
                    if (!rax80) {
                        __asm__("rol eax, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_401c96_89;
                    } else {
                        addr_401c49_107:
                        rdx95 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax80) + 48) = rsi81;
                        if (rdx95) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax80) + 32) = rdx95;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx95) + 48) = rax80;
                            goto addr_401c85_112;
                        }
                    }
                }
            }
        } else {
            rcx76 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rbx72) + 32);
            goto addr_401bfb_93;
        }
    }
    addr_401bfe_114:
    r9_96 = rcx76;
    rax80 = rdx77;
    rcx76 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx77) + 40);
    rdx77 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx77) + 40);
    if (rdx77) 
        goto addr_401bfe_114;
    rdx77 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax80) + 32);
    rcx76 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax80) + 32);
    if (rdx77) 
        goto addr_401bfe_114;
    *reinterpret_cast<struct s13**>(&r9_96->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_401c25_95;
    addr_401d3d_99:
    rdx97 = *reinterpret_cast<struct s13**>(0x4363e0 + rsi93 * 8 + 0x258);
    if (eax84 != 31) {
        r13d67 = 57 - (reinterpret_cast<uint32_t>(eax84) >> 1);
    }
    ecx98 = r13d67;
    rcx99 = reinterpret_cast<uint64_t>(r15_75) << *reinterpret_cast<unsigned char*>(&ecx98);
    while ((reinterpret_cast<uint32_t>(rdx97->f8) & 0xfffffffffffffff8) != r15_75) {
        rax100 = rcx99;
        rcx99 = rcx99 + rcx99;
        rax101 = (rax100 >> 63) + 4;
        if (!*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8)) 
            goto addr_401d8a_121;
        rdx97 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8);
    }
    rax102 = rdx97->f10;
    rax102->f18 = rbx72;
    rdx97->f10 = rbx72;
    rbx72->f10 = rax102;
    rbx72->f18 = rdx97;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 48) = reinterpret_cast<struct s13*>(0);
    goto addr_401db8_86;
    addr_401d8a_121:
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx97) + rax101 * 8) = rbx72;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 48) = rdx97;
    addr_401d92_124:
    rbx72->f18 = rbx72;
    rbx72->f10 = rbx72;
    goto addr_401db8_86;
    addr_401d20_100:
    g4363e4 = edx90 | esi92;
    *reinterpret_cast<struct s13**>(0x4363e0 + rsi93 * 8 + 0x258) = rbx72;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 48) = reinterpret_cast<struct s13*>(0x4363e0 + rsi93 * 8 + 0x258);
    goto addr_401d92_124;
    addr_401c85_112:
    rdx77 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rbx72) + 40);
    if (rdx77) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax80) + 40) = rdx77;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx77) + 48) = rax80;
        goto addr_401c96_89;
    }
    addr_401bd3_91:
    rdx77 = rbx72->f10;
    rdx77->f18 = rax80;
    rax80->f10 = rdx77;
    goto addr_401c25_95;
    addr_4037ce_73:
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi58) + rdx61 * 8) = rdi5;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48) = rsi58;
    addr_4037d6_126:
    rdi5->f18 = rdi5;
    rdi5->f10 = rdi5;
    goto addr_4037fc_76;
    addr_403766_67:
    *reinterpret_cast<struct s13**>(r8_56 * 8 + 0x436638) = rdi5;
    g4363e4 = esi53 | r8d55;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s13*>(r8_56 * 8 + 0x436638);
    goto addr_4037d6_126;
    addr_4035a7_28:
    r8_103 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi12) + 48);
    if (rsi12 != rdx30) {
        rcx104 = rsi12->f10;
        rcx104->f18 = rdx30;
        rdx30->f10 = rcx104;
        goto addr_403602_128;
    }
    rdx30 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi12) + 40);
    r9_105 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi12) + 40);
    if (rdx30) {
        addr_4035d8_130:
        rcx106 = rdx30;
    } else {
        rdx30 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi12) + 32);
        if (!rdx30) {
            addr_403602_128:
            if (!r8_103) {
                addr_403677_132:
                rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax11) | 1);
                *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rax11)) = rax11;
                if (rdi5 == r10_27) {
                    g4363e8 = rax11;
                    goto addr_403812_8;
                }
            } else {
                *reinterpret_cast<struct s13**>(&r9_107) = *reinterpret_cast<struct s13**>(&(rsi12 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_107) + 4) = 0;
                if (*reinterpret_cast<struct s13**>(r9_107 * 8 + 0x436638) != rsi12) {
                    if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_103) + 32) != rsi12) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_103) + 40) = rdx30;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_103) + 32) = rdx30;
                    }
                    if (rdx30) 
                        goto addr_403629_139;
                    goto addr_403677_132;
                } else {
                    *reinterpret_cast<struct s13**>((r9_107 + 74) * 8 + 0x4363e8) = rdx30;
                    if (!rdx30) {
                        __asm__("rol edx, cl");
                        g4363e4 = g4363e4 & 0xfffffffe;
                        goto addr_403677_132;
                    } else {
                        addr_403629_139:
                        rcx108 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi12) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx30) + 48) = r8_103;
                        if (rcx108) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx30) + 32) = rcx108;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx108) + 48) = rdx30;
                            goto addr_403666_144;
                        }
                    }
                }
            }
        } else {
            r9_105 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi12) + 32);
            goto addr_4035d8_130;
        }
    }
    addr_4035db_146:
    r11_109 = r9_105;
    rdx30 = rcx106;
    r9_105 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx106) + 40);
    rcx106 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx106) + 40);
    if (rcx106) 
        goto addr_4035db_146;
    rcx106 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx30) + 32);
    r9_105 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx30) + 32);
    if (rcx106) 
        goto addr_4035db_146;
    *reinterpret_cast<struct s13**>(&r11_109->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_403602_128;
    addr_403666_144:
    rcx110 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi12) + 40);
    if (rcx110) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx30) + 40) = rcx110;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx110) + 48) = rdx30;
        goto addr_403677_132;
    }
    addr_40357f_29:
    rsi111 = rsi12->f10;
    if (rsi111 != rdx30) {
        rsi111->f18 = rdx30;
        rdx30->f10 = rsi111;
        goto addr_403677_132;
    } else {
        __asm__("rol edx, cl");
        g4363e0 = g4363e0 & 0xfffffffe;
        goto addr_403677_132;
    }
    addr_401e43_42:
    eax112 = r13_36->f18;
    if (*reinterpret_cast<unsigned char*>(&eax112) & 8) 
        goto addr_401e0a_38;
    if (!(*reinterpret_cast<unsigned char*>(&eax112) & 1)) 
        goto addr_401e0a_38;
    r10_113 = g4367b0;
    rax114 = reinterpret_cast<uint32_t>(rdx35) + reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff - reinterpret_cast<uint32_t>(80);
    rdx35 = reinterpret_cast<struct s13*>(rax114 % reinterpret_cast<uint64_t>(r10_113));
    rbx115 = reinterpret_cast<struct s13*>((rax114 / reinterpret_cast<uint64_t>(r10_113) + 0xffffffffffffffff) * reinterpret_cast<uint64_t>(r10_113));
    if (reinterpret_cast<uint32_t>(rbx115) > reinterpret_cast<uint32_t>(r9_23)) 
        goto addr_401e0a_38;
    do {
        if (reinterpret_cast<uint32_t>(rdi37) > reinterpret_cast<uint32_t>(rcx33)) 
            continue;
        if (reinterpret_cast<uint32_t>(r8_25) > reinterpret_cast<uint32_t>(rcx33)) 
            goto addr_401e0a_38;
        rcx33 = rcx33->f10;
    } while (rcx33);
    *reinterpret_cast<int32_t*>(&rcx33) = 0;
    *reinterpret_cast<int32_t*>(&rcx33 + 1) = 0;
    rdx35 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r9_23) - reinterpret_cast<uint32_t>(rbx115));
    rax116 = fun_404008();
    if (reinterpret_cast<uint32_t>(rax116) + 1 || (eax117 = fun_403d56(0, rdx35), !eax117)) {
        if (rbx115) {
            r13_36->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r13_36->f8) - reinterpret_cast<uint32_t>(rbx115));
            rdx118 = g4363f0;
            g436738 = g436738 - reinterpret_cast<uint32_t>(rbx115);
            rdx35 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx118) - reinterpret_cast<uint32_t>(rbx115));
            fun_401ad2();
        }
    } else {
        addr_401e0a_38:
        *reinterpret_cast<int32_t*>(&rbx115) = 0;
        *reinterpret_cast<int32_t*>(&rbx115 + 1) = 0;
    }
    rax119 = fun_401b19(rcx33, rdx35);
    rbx120 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rbx115) + reinterpret_cast<uint64_t>(rax119));
    if (!rbx120) {
        rax121 = g436410;
        below_or_equal122 = reinterpret_cast<uint32_t>(g4363f0) <= reinterpret_cast<uint32_t>(rax121);
        if (below_or_equal122) {
            addr_401dea_35:
            *reinterpret_cast<int32_t*>(&rbx120) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx120) + 4) = 0;
        } else {
            g436410 = reinterpret_cast<struct s13*>(0xffffffffffffffff);
        }
    }
    *reinterpret_cast<int32_t*>(&rax123) = 0;
    *reinterpret_cast<int32_t*>(&rax123 + 1) = 0;
    *reinterpret_cast<unsigned char*>(&rax123) = reinterpret_cast<uint1_t>(!!rbx120);
    return rax123;
    addr_401e3a_44:
    __asm__("ud2 ");
    goto addr_401e43_42;
    addr_40347c_55:
    rcx124 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rcx124) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx19) + 40) = rcx124;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx124) + 48) = rdx19;
        goto addr_4034c1_4;
    }
}

struct s29 {
    void* f0;
    void* f8;
    struct s13* f10;
};

struct s30 {
    uint32_t f0;
    uint32_t f4;
    void* f8;
    void* f10;
    struct s13* f18;
    signed char[4] pad32;
    struct s13* f20;
    signed char[4] pad40;
    struct s13* f28;
    signed char[812] pad856;
    uint64_t f358;
    uint64_t f360;
};

struct s31 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s32 {
    void* f0;
    uint64_t f8;
};

struct s33 {
    signed char[8] pad8;
    uint64_t f8;
};

struct s34 {
    uint32_t f0;
    signed char[596] pad600;
    struct s13* f258;
};

void fun_401f12(struct s13* rcx, struct s13* rdx);

struct s29* fun_403873(struct s13* rcx, void* rdx, int64_t r8) {
    struct s29* r13_4;
    struct s29* rsi5;
    struct s30* r12_6;
    struct s30* rdi7;
    void* rdi8;
    uint64_t rsi9;
    struct s31* rsi10;
    void* rdx11;
    void* rax12;
    void* r14_13;
    void* rbx14;
    struct s13* rax15;
    void* rdx16;
    int1_t cf17;
    uint64_t rbx18;
    int1_t below_or_equal19;
    struct s13* r9_20;
    struct s13* r10_21;
    void* r10_22;
    void* r8_23;
    struct s13* rax24;
    struct s13* r11_25;
    struct s13* rdx26;
    struct s13* r10_27;
    void* rcx28;
    uint64_t rsi29;
    struct s32* rax30;
    void* r8_31;
    struct s13* rcx32;
    void* rdx33;
    uint64_t rsi34;
    void* r9_35;
    struct s13* rax36;
    struct s13* rdx37;
    uint64_t rsi38;
    struct s13* rdx39;
    uint64_t rsi40;
    struct s33* rax41;
    struct s13* rdx42;
    struct s34* rdx43;
    struct s13* rdx44;
    struct s13* rbx45;
    struct s13* rdx46;
    struct s13* rdx47;

    r13_4 = rsi5;
    r12_6 = rdi7;
    rdi8 = rdx;
    rsi9 = rsi10->f8;
    rdx11 = reinterpret_cast<void*>(rsi9 & 0xfffffffffffffff8);
    if (!(*reinterpret_cast<unsigned char*>(&rsi9) & 3)) {
        if (reinterpret_cast<uint64_t>(rdi8) <= 0xff) 
            goto addr_4038a9_3;
        rax12 = g4367b0;
        if (reinterpret_cast<uint64_t>(rdx11) < reinterpret_cast<uint64_t>(rdi8) + 8) 
            goto addr_4038d4_5;
        if (reinterpret_cast<uint64_t>(rdx11) - reinterpret_cast<uint64_t>(rdi8) <= reinterpret_cast<uint64_t>(rax12) + reinterpret_cast<uint64_t>(rax12)) 
            goto addr_403bf3_7;
        addr_4038d4_5:
        r14_13 = r13_4->f0;
        rbx14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax12) + reinterpret_cast<uint64_t>(rdi8) + 62 & -reinterpret_cast<uint64_t>(rax12));
        rax15 = fun_404008();
        if (rax15 == 0xffffffffffffffff) 
            goto addr_4038a9_3;
        r13_4 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(rax15) + reinterpret_cast<uint64_t>(r14_13));
        rdx16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx14) - reinterpret_cast<uint64_t>(r14_13));
        cf17 = reinterpret_cast<uint32_t>(rax15) < reinterpret_cast<uint32_t>(r12_6->f18);
        r13_4->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx16) - 32);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdx16) - 24) = 11;
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdx16) - 16) = 0;
        if (cf17) {
            r12_6->f18 = rax15;
        }
        rbx18 = reinterpret_cast<uint64_t>(rbx14) + r12_6->f358 - (reinterpret_cast<uint64_t>(rdx11) + reinterpret_cast<uint64_t>(r14_13) + 32);
        below_or_equal19 = rbx18 <= r12_6->f360;
        r12_6->f358 = rbx18;
        if (!below_or_equal19) {
            r12_6->f360 = rbx18;
            goto addr_403bf3_7;
        }
    }
    r9_20 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdx11));
    if (reinterpret_cast<uint64_t>(rdx11) < reinterpret_cast<uint64_t>(rdi8)) {
        if (r12_6->f28 != r9_20) {
            if (r12_6->f20 != r9_20) {
                r10_21 = r9_20->f8;
                if (*reinterpret_cast<unsigned char*>(&r10_21) & 2 || (r10_22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r10_21) & 0xfffffffffffffff8), r8_23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx11) + reinterpret_cast<uint64_t>(r10_22)), reinterpret_cast<uint64_t>(r8_23) < reinterpret_cast<uint64_t>(rdi8))) {
                    addr_4038a9_3:
                    *reinterpret_cast<int32_t*>(&r13_4) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = 0;
                    goto addr_403bf3_7;
                } else {
                    rax24 = r9_20->f18;
                    r11_25 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r8_23) - reinterpret_cast<uint64_t>(rdi8));
                    rcx = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r10_22) >> 3);
                    if (reinterpret_cast<uint64_t>(r10_22) <= 0xf8) {
                        rdx26 = r9_20->f10;
                        if (rdx26 != rax24) {
                            rdx26->f18 = rax24;
                            rax24->f10 = rdx26;
                            goto addr_403ba5_19;
                        } else {
                            __asm__("rol eax, cl");
                            r12_6->f0 = r12_6->f0 & 0xfffffffe;
                            goto addr_403ba5_19;
                        }
                    }
                    r10_27 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r9_20) + 48);
                    if (r9_20 != rax24) 
                        goto addr_403ae1_22;
                }
            } else {
                rcx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_6->f8) + reinterpret_cast<uint64_t>(rdx11));
                if (reinterpret_cast<uint64_t>(rcx28) < reinterpret_cast<uint64_t>(rdi8)) 
                    goto addr_4038a9_3;
                *reinterpret_cast<uint32_t*>(&rsi29) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = 0;
                rax30 = reinterpret_cast<struct s32*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rcx28));
                r8_31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx28) - reinterpret_cast<uint64_t>(rdi8));
                if (reinterpret_cast<uint64_t>(r8_31) <= 31) {
                    r13_4->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx28) | rsi29 | 2);
                    rax30->f8 = rax30->f8 | 1;
                    r12_6->f8 = reinterpret_cast<void*>(0);
                    r12_6->f20 = reinterpret_cast<struct s13*>(0);
                    goto addr_403bf3_7;
                } else {
                    rcx32 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8));
                    r13_4->f8 = reinterpret_cast<void*>(rsi29 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    rcx32->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r8_31) | 1);
                    rax30->f0 = r8_31;
                    rax30->f8 = rax30->f8 & 0xfffffffffffffffe;
                    r12_6->f8 = r8_31;
                    r12_6->f20 = rcx32;
                    goto addr_403bf3_7;
                }
            }
        } else {
            rdx33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx11) + reinterpret_cast<uint64_t>(r12_6->f10));
            if (reinterpret_cast<uint64_t>(rdx33) <= reinterpret_cast<uint64_t>(rdi8)) 
                goto addr_4038a9_3;
            *reinterpret_cast<uint32_t*>(&rsi34) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = 0;
            r9_35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdx33) - reinterpret_cast<uint64_t>(rdi8));
            rax36 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8));
            r13_4->f8 = reinterpret_cast<void*>(rsi34 | reinterpret_cast<uint64_t>(rdi8) | 2);
            rax36->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r9_35) | 1);
            r12_6->f28 = rax36;
            r12_6->f10 = r9_35;
            goto addr_403bf3_7;
        }
    } else {
        rdx37 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rdx11) - reinterpret_cast<uint64_t>(rdi8));
        if (reinterpret_cast<uint32_t>(rdx37) <= reinterpret_cast<uint32_t>(31)) {
            addr_403bf3_7:
            return r13_4;
        } else {
            *reinterpret_cast<uint32_t*>(&rsi38) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = 0;
            r13_4->f8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rdi8) | rsi38 | 2);
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8) + 8) = reinterpret_cast<uint32_t>(rdx37) | 3;
            r9_20->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r9_20->f8) | 1);
            goto addr_403beb_31;
        }
    }
    rax24 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r9_20) + 40);
    rcx = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r9_20) + 40);
    if (rax24) {
        addr_403b09_33:
        rdx39 = rax24;
    } else {
        rax24 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r9_20) + 32);
        if (!rax24) {
            addr_403b33_35:
            if (!r10_27) {
                addr_403ba5_19:
                *reinterpret_cast<uint32_t*>(&rsi40) = *reinterpret_cast<uint32_t*>(&rsi9) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = 0;
                rax41 = reinterpret_cast<struct s33*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(r8_23));
                if (reinterpret_cast<uint32_t>(r11_25) > reinterpret_cast<uint32_t>(31)) {
                    r13_4->f8 = reinterpret_cast<void*>(rsi40 | reinterpret_cast<uint64_t>(rdi8) | 2);
                    *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(r13_4) + reinterpret_cast<uint64_t>(rdi8) + 8) = reinterpret_cast<uint32_t>(r11_25) | 3;
                    rax41->f8 = rax41->f8 | 1;
                    rdx37 = r11_25;
                    goto addr_403beb_31;
                } else {
                    r13_4->f8 = reinterpret_cast<void*>(rsi40 | reinterpret_cast<uint64_t>(r8_23) | 2);
                    rax41->f8 = rax41->f8 | 1;
                    goto addr_403bf3_7;
                }
            } else {
                rdx42 = *reinterpret_cast<struct s13**>(&(r9_20 + 2)->f0);
                *reinterpret_cast<int32_t*>(&rdx42 + 1) = 0;
                rcx = rdx42;
                rdx43 = reinterpret_cast<struct s34*>(reinterpret_cast<int64_t>(r12_6) + reinterpret_cast<uint32_t>(rdx42) * 8);
                if (rdx43->f258 != r9_20) {
                    if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_27) + 32) != r9_20) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_27) + 40) = rax24;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r10_27) + 32) = rax24;
                    }
                    if (rax24) 
                        goto addr_403b58_43;
                    goto addr_403ba5_19;
                } else {
                    rdx43->f258 = rax24;
                    if (!rax24) {
                        __asm__("rol eax, cl");
                        r12_6->f4 = r12_6->f4 & 0xfffffffe;
                        goto addr_403ba5_19;
                    } else {
                        addr_403b58_43:
                        rdx44 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r9_20) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax24) + 48) = r10_27;
                        if (rdx44) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax24) + 32) = rdx44;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx44) + 48) = rax24;
                            goto addr_403b94_48;
                        }
                    }
                }
            }
        } else {
            rcx = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r9_20) + 32);
            goto addr_403b09_33;
        }
    }
    addr_403b0c_50:
    rbx45 = rcx;
    rax24 = rdx39;
    rcx = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx39) + 40);
    rdx39 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx39) + 40);
    if (rdx39) 
        goto addr_403b0c_50;
    rdx39 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax24) + 32);
    rcx = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax24) + 32);
    if (rdx39) 
        goto addr_403b0c_50;
    *reinterpret_cast<struct s13**>(&rbx45->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_403b33_35;
    addr_403beb_31:
    fun_401f12(rcx, rdx37);
    goto addr_403bf3_7;
    addr_403b94_48:
    rdx46 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r9_20) + 40);
    if (rdx46) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax24) + 40) = rdx46;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdx46) + 48) = rax24;
        goto addr_403ba5_19;
    }
    addr_403ae1_22:
    rdx47 = r9_20->f10;
    rdx47->f18 = rax24;
    rax24->f10 = rdx47;
    goto addr_403b33_35;
}

void fun_404420(struct s13* rcx, uint64_t rdx) {
    uint64_t rcx3;

    *reinterpret_cast<int32_t*>(&rcx3) = 32;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    if (rdx < 32) {
        rcx3 = rdx;
    }
    goto *reinterpret_cast<int64_t*>(rcx3 * 8 + 0x436098);
}

struct s13* fun_4042f0();

struct s13* fun_40429b(struct s13* rcx, int64_t rdx, int64_t r8, int64_t r9) {
    struct s13* rax5;

    rax5 = fun_4042f0();
    return rax5;
}

int64_t CreateFileMappingNumaW = 0x4ae6;

struct s13* fun_401a32(struct s13* rcx, int64_t rdx, int64_t r8, int64_t r9, int64_t a5, uint64_t a6) {
    int64_t rax7;
    int64_t rdi8;
    int64_t rsi9;
    struct s13* rax10;

    rax7 = CreateFileMappingNumaW;
    rax10 = reinterpret_cast<struct s13*>(rax7(rdi8, rsi9, rdx, rcx));
    return rax10;
}

struct s13* fun_4042a8(struct s13* rcx, int64_t rdx, uint64_t r8) {
    struct s13* rax4;
    int32_t esi5;
    uint32_t edi6;
    int32_t esi7;
    uint32_t esi8;
    int64_t rdi9;
    uint32_t edi10;

    *reinterpret_cast<uint32_t*>(&rax4) = reinterpret_cast<uint32_t>(esi5 >> 1) & 1 | edi6 & 2 | reinterpret_cast<uint32_t>(esi7 >> 2) & 0x20000000 | esi8 << 5 & 0x80000000 | static_cast<uint32_t>(rdi9 * 4) & 4 | edi10 << 3 & 32;
    *reinterpret_cast<int32_t*>(&rax4 + 1) = 0;
    return rax4;
}

int64_t MapViewOfFileExNuma = 0x4c04;

struct s13* fun_401a5e(struct s13* rcx, int64_t rdx, uint64_t r8, int64_t r9, int64_t a5, struct s13* a6) {
    int64_t rax7;
    int64_t rdi8;
    int64_t rsi9;
    struct s13* rax10;

    rax7 = MapViewOfFileExNuma;
    rax10 = reinterpret_cast<struct s13*>(rax7(rdi8, rsi9, rdx, rcx));
    return rax10;
}

int64_t CloseHandle = 0x4ad8;

int32_t fun_401a19(struct s13* rcx, ...) {
    int64_t rdi2;
    int32_t eax3;

    eax3 = reinterpret_cast<int32_t>(CloseHandle(rdi2));
    return eax3;
}

struct s13* fun_40427b(struct s13* rcx, struct s13* rdx, ...) {
    uint64_t rax3;
    int64_t rcx4;
    int32_t* rsi5;
    int32_t edi6;

    *reinterpret_cast<int32_t*>(&rax3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    while (*reinterpret_cast<int32_t*>(&rdx) > *reinterpret_cast<int32_t*>(&rax3)) {
        *reinterpret_cast<int32_t*>(&rcx4) = static_cast<int32_t>(reinterpret_cast<uint32_t>(rdx) + rax3) >> 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
        if (rsi5[*reinterpret_cast<int32_t*>(&rcx4) * 2] > edi6) {
            *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(&rcx4);
            *reinterpret_cast<int32_t*>(&rdx + 1) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rax3) = static_cast<int32_t>(rcx4 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        }
    }
    return static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax3));
}

struct s13* fun_404542(uint64_t rcx, uint64_t rdx) {
    uint1_t df3;
    uint64_t rcx4;
    uint64_t rdi5;
    uint64_t rsi6;
    signed char* rdi7;
    int64_t rdi8;
    signed char* rsi9;
    int64_t rsi10;
    uint64_t tmp64_11;
    struct s13* rax12;

    df3 = 0;
    rcx4 = rdx;
    if (rdi5 >= rsi6) {
        rdi7 = reinterpret_cast<signed char*>(rdi8 + rcx4 - 1);
        rsi9 = reinterpret_cast<signed char*>(rsi10 + rcx4 - 1);
        df3 = 1;
    }
    tmp64_11 = 1 - 2 * static_cast<uint64_t>(df3);
    while (*reinterpret_cast<int32_t*>(&rcx4)) {
        *reinterpret_cast<int32_t*>(&rcx4) = *reinterpret_cast<int32_t*>(&rcx4) - 1;
        *rdi7 = *rsi9;
        rdi7 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdi7) + tmp64_11);
        rsi9 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rsi9) + tmp64_11);
    }
    return rax12;
}

int64_t g4362c0;

uint32_t fun_404300() {
    goto g4362c0;
}

int64_t g4362d0;

void fun_401acc() {
    goto g4362d0;
}

uint32_t fun_4043af(signed char* rcx, struct s16* rdx) {
    int64_t rax3;
    int64_t rdx4;
    int64_t rbx5;
    uint32_t edx6;
    uint16_t* rdi7;
    uint32_t ecx8;
    uint16_t cx9;
    int64_t rax10;
    uint16_t* rdi11;
    uint32_t ecx12;
    int64_t rdx13;
    int32_t* rsi14;
    int32_t* rsi15;
    uint32_t* rsi16;

    *reinterpret_cast<uint32_t*>(&rax3) = 0;
    do {
        *reinterpret_cast<uint32_t*>(&rdx4) = *reinterpret_cast<uint32_t*>(&rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rbx5) = *reinterpret_cast<uint32_t*>(&rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax3) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        edx6 = rdi7[rdx4];
        ecx8 = edx6;
        cx9 = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx8) & 0xfc00);
    } while (cx9 == 0xdc00);
    if (cx9 == 0xd800) {
        *reinterpret_cast<uint32_t*>(&rax10) = rdi11[rax3];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        ecx12 = *reinterpret_cast<uint32_t*>(&rax10);
        if ((*reinterpret_cast<uint16_t*>(&ecx12) & 0xfc00) == 0xdc00) {
            *reinterpret_cast<uint32_t*>(&rdx13) = edx6 << 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            *rsi14 = static_cast<int32_t>(rdx13 + rax10 - 0x35fdc00);
            *reinterpret_cast<uint32_t*>(&rax3) = static_cast<uint32_t>(rbx5 + 2);
        } else {
            *rsi15 = 0xfffd;
            *reinterpret_cast<uint32_t*>(&rax3) = 0xffffffff;
        }
    } else {
        *rsi16 = edx6;
    }
    return *reinterpret_cast<uint32_t*>(&rax3);
}

int64_t GetLastError = 0x4bd4;

int64_t fun_401a48() {
    int64_t rax1;

    rax1 = reinterpret_cast<int64_t>(GetLastError());
    return rax1;
}

int64_t ExitProcess = 0x4b20;

void fun_4046c1() {
    int1_t zf1;
    int64_t rcx2;
    unsigned char dil3;

    g437fb4 = g437fb4 | 4;
    zf1 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
    if (zf1) {
        __asm__("syscall ");
        __asm__("cli ");
        __asm__("lidt [0x4046f2]");
        __asm__("hlt ");
    } else {
        *reinterpret_cast<uint32_t*>(&rcx2) = dil3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
        while (1) {
            ExitProcess(rcx2);
        }
    }
}

uint64_t* fun_401158(uint64_t* rcx, uint64_t* rdx) {
    uint64_t* r8_3;
    int32_t ecx4;
    int32_t esi5;
    uint64_t rax6;
    uint64_t rdi7;
    int64_t rax8;
    uint64_t* rdx9;
    uint64_t rax10;

    r8_3 = rcx;
    ecx4 = 39;
    while (--esi5, rax6 = rdi7 >> *reinterpret_cast<signed char*>(&ecx4), *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<uint32_t*>(&rax6) & 0x1ff, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0, esi5 != -1) {
        rdx9 = rdx + rax8;
        if (!*rdx9) {
            rax10 = *r8_3 - 0x1000;
            *r8_3 = rax10;
            *rdx9 = rax10 | 3;
        }
        ecx4 = ecx4 - 9;
        rdx = reinterpret_cast<uint64_t*>(*rdx9 & 0x3fffffffff000);
    }
    return rdx + rax8;
}

uint32_t g437fa8;

int64_t g4367a8;

int32_t g4367c8;

void fun_403cbb() {
    int1_t zf1;
    int1_t cf2;
    uint32_t eax3;
    void* rax4;
    uint64_t rax5;

    zf1 = g4367a0 == 0;
    if (zf1) {
        cf2 = g437fa8 < 0x10000;
        eax3 = 0x10000;
        if (!cf2) {
            eax3 = g437fa8;
        }
        *reinterpret_cast<uint32_t*>(&rax4) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        if (reinterpret_cast<uint64_t>(rax4) + 0xffffffffffffffff & reinterpret_cast<uint64_t>(rax4)) {
            rax4 = fun_401000();
        }
        g4367b0 = rax4;
        rax5 = g436000;
        g4367a8 = 0x1000;
        g4367b8 = reinterpret_cast<struct s13*>(0x40000);
        g4367c0 = 0xa00000;
        g4367c8 = 5;
        g436750 = 5;
        g4367a0 = rax5 & 0xfffffffffffffff8 | 8;
    }
    return;
}

struct s35 {
    uint32_t f0;
    signed char[4] pad8;
    struct s35* f8;
};

struct s35* g4367e0;

struct s36 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
};

int64_t fun_4041e6() {
    int64_t r12_1;
    int64_t rdi2;
    int64_t v3;
    int64_t rdx4;
    struct s35* rdi5;
    uint64_t rax6;
    int32_t edx7;
    struct s36* rcx8;
    uint64_t rdx9;
    int64_t rdx10;
    struct s35* r13_11;

    r12_1 = rdi2;
    v3 = rdx4;
    while (rdi5 = g4367e0, !!rdi5) {
        while (1) {
            *reinterpret_cast<uint32_t*>(&rax6) = rdi5->f0;
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
            } while (r12_1 && *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi5) + reinterpret_cast<int64_t>(rcx8) * 24 + 32) != r12_1 || (rdi5->f0 = rdi5->f0 & *reinterpret_cast<uint32_t*>(&rdx9), rcx8 = reinterpret_cast<struct s36*>(reinterpret_cast<int64_t>(rcx8) * 24 + reinterpret_cast<int64_t>(rdi5)), rdx10 = rcx8->f10, rdx10 == 0));
            break;
            r13_11 = rdi5->f8;
            if (!r12_1) 
                goto addr_40424c_7;
            if (!r13_11) 
                goto addr_404273_9;
            rdi5 = r13_11;
        }
        rdx10();
        continue;
        addr_40424c_7:
        if (r13_11 && !0) {
            fun_401acc();
        }
        g4367e0 = r13_11;
    }
    addr_404273_9:
    return v3;
}

uint32_t fun_40436d(signed char* rcx, struct s16* rdx, uint64_t r8, ...) {
    uint32_t eax4;

    eax4 = fun_4043af(rcx, rdx);
    return eax4;
}

struct s37 {
    uint32_t f0;
    uint32_t f4;
    struct s13* f8;
    signed char[4] pad16;
    void* f10;
    signed char[8] pad32;
    struct s13* f20;
    signed char[4] pad40;
    struct s13* f28;
    signed char[812] pad856;
    uint64_t f358;
};

struct s38 {
    uint32_t f0;
    signed char[596] pad600;
    struct s13* f258;
};

struct s39 {
    uint32_t f0;
    signed char[596] pad600;
    struct s13* f258;
};

void fun_401f12(struct s13* rcx, struct s13* rdx) {
    struct s37* rbx3;
    struct s37* rdi4;
    struct s13* rdi5;
    struct s13* rsi6;
    struct s13* rax7;
    struct s13* rsi8;
    void* rsi9;
    struct s13* rcx10;
    int64_t rcx11;
    struct s13* r8_12;
    struct s13* rax13;
    struct s13* rax14;
    struct s13* r8_15;
    struct s13* r8_16;
    uint64_t r12_17;
    uint32_t eax18;
    struct s13* r10_19;
    void* r8_20;
    struct s13* rax21;
    struct s13* rsi22;
    struct s13* r8_23;
    struct s13* rdx24;
    void* rdx25;
    struct s13* r9_26;
    struct s13* rcx27;
    uint64_t rcx28;
    uint64_t rsi29;
    struct s13* eax30;
    uint32_t esi31;
    uint32_t ecx32;
    int64_t rax33;
    uint64_t rcx34;
    int64_t rcx35;
    uint32_t esi36;
    struct s13* ecx37;
    uint32_t r8d38;
    int64_t r8_39;
    int64_t rax40;
    uint32_t esi41;
    struct s13* rax42;
    struct s13* rdx43;
    int64_t r9_44;
    struct s38* r9_45;
    struct s13* rcx46;
    struct s13* r11_47;
    uint32_t ecx48;
    struct s13* rsi49;
    uint64_t rcx50;
    uint64_t rax51;
    uint64_t rax52;
    struct s13* rax53;
    struct s13* rcx54;
    struct s13* rcx55;
    struct s13* r9_56;
    struct s13* rcx57;
    struct s13* r10_58;
    int64_t r9_59;
    struct s39* r9_60;
    struct s13* rcx61;
    struct s13* rcx62;
    struct s13* rcx63;

    rbx3 = rdi4;
    rdi5 = rsi6;
    rax7 = rdi5->f8;
    rsi8 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rsi9) + reinterpret_cast<uint32_t>(rdx));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 1) 
        goto addr_40209e_2;
    rdi5 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi5) - reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdi5->f0)));
    if (*reinterpret_cast<unsigned char*>(&rax7) & 3) {
        rdx = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdi5->f0)));
        if (rbx3->f20 == rdi5) {
            rcx10 = rsi8->f8;
            *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint32_t*>(&rcx10) & 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            if (rcx11 != 3) {
                addr_40209e_2:
                r8_12 = rsi8->f8;
                if (*reinterpret_cast<unsigned char*>(&r8_12) & 2) {
                    rsi8->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r8_12) & 0xfffffffffffffffe);
                    rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx) | 1);
                    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                    goto addr_40224b_7;
                }
            } else {
                rax13 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi8->f8) & 0xfffffffffffffffe);
                rbx3->f8 = rdx;
                rsi8->f8 = rax13;
                rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s13**>(&rsi8->f0) = rdx;
                goto addr_402389_9;
            }
        } else {
            rax14 = rdi5->f18;
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdi5->f0)) <= reinterpret_cast<uint32_t>(0xff)) {
                r8_15 = rdi5->f10;
                if (r8_15 != rax14) {
                    r8_15->f18 = rax14;
                    rax14->f10 = r8_15;
                    goto addr_40209e_2;
                } else {
                    __asm__("rol eax, cl");
                    rbx3->f0 = rbx3->f0 & 0xfffffffe;
                    goto addr_40209e_2;
                }
            }
            r8_16 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48);
            if (rdi5 == rax14) 
                goto addr_401fb5_15; else 
                goto addr_401fa7_16;
        }
    } else {
        r12_17 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rdi5->f0)) + reinterpret_cast<uint32_t>(rdx) + 32;
        eax18 = fun_403d56(rcx, rdx);
        if (!eax18) {
            rbx3->f358 = rbx3->f358 - r12_17;
            goto addr_402389_9;
        }
    }
    r10_19 = rbx3->f20;
    if (rbx3->f28 != rsi8) {
        if (rsi8 != r10_19) {
            r8_20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8_12) & 0xfffffffffffffff8);
            rax21 = rsi8->f18;
            rdx = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(r8_20));
            if (reinterpret_cast<uint64_t>(r8_20) <= 0xf8) {
                rsi22 = rsi8->f10;
                if (rsi22 != rax21) {
                    rsi22->f18 = rax21;
                    rax21->f10 = rsi22;
                    goto addr_402217_24;
                } else {
                    __asm__("rol eax, cl");
                    rbx3->f0 = rbx3->f0 & 0xfffffffe;
                    goto addr_402217_24;
                }
            }
            r8_23 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi8) + 48);
            if (rsi8 != rax21) 
                goto addr_402155_27;
        } else {
            rdx24 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint32_t>(rbx3->f8));
            rbx3->f20 = rdi5;
            rbx3->f8 = rdx24;
            rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx24) | 1);
            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rdx24)) = rdx24;
            goto addr_402389_9;
        }
    } else {
        rdx25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rdx) + reinterpret_cast<uint64_t>(rbx3->f10));
        rbx3->f28 = rdi5;
        rbx3->f10 = rdx25;
        rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rdx25) | 1);
        if (rdi5 == r10_19) {
            rbx3->f20 = reinterpret_cast<struct s13*>(0);
            rbx3->f8 = reinterpret_cast<struct s13*>(0);
            goto addr_402389_9;
        }
    }
    rax21 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    r9_26 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rax21) {
        addr_40217d_32:
        rcx27 = rax21;
    } else {
        rax21 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi8) + 32);
        if (!rax21) {
            addr_4021a7_34:
            if (!r8_23) {
                addr_402217_24:
                rdi5->f8 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdx) | 1);
                *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + reinterpret_cast<uint32_t>(rdx)) = rdx;
                if (rdi5 != r10_19) {
                    addr_40224b_7:
                    rcx28 = reinterpret_cast<uint32_t>(rdx) >> 3;
                    if (reinterpret_cast<uint32_t>(rdx) > reinterpret_cast<uint32_t>(0xff)) {
                        rsi29 = reinterpret_cast<uint32_t>(rdx) >> 8;
                        eax30 = *reinterpret_cast<struct s13**>(&rsi29);
                        if (*reinterpret_cast<struct s13**>(&rsi29) && (eax30 = reinterpret_cast<struct s13*>(31), reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rsi29)) <= 0xffff)) {
                            __asm__("bsr esi, esi");
                            esi31 = reinterpret_cast<uint32_t>(*reinterpret_cast<struct s13**>(&rsi29)) ^ 31;
                            ecx32 = 38 - esi31;
                            *reinterpret_cast<void**>(&rax33) = reinterpret_cast<void*>(31 - esi31);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = 0;
                            rcx34 = reinterpret_cast<uint32_t>(rdx) >> *reinterpret_cast<signed char*>(&ecx32);
                            *reinterpret_cast<uint32_t*>(&rcx35) = *reinterpret_cast<uint32_t*>(&rcx34) & 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = 0;
                            eax30 = reinterpret_cast<struct s13*>(static_cast<uint32_t>(rcx35 + rax33 * 2));
                        }
                        esi36 = rbx3->f4;
                        ecx37 = eax30;
                        r8d38 = 1 << *reinterpret_cast<unsigned char*>(&ecx37);
                        *reinterpret_cast<struct s13**>(&(rdi5 + 2)->f0) = eax30;
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 40) = reinterpret_cast<struct s13*>(0);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 32) = reinterpret_cast<struct s13*>(0);
                        *reinterpret_cast<struct s13**>(&r8_39) = eax30;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_39) + 4) = 0;
                        if (esi36 & r8d38) 
                            goto addr_402311_38; else 
                            goto addr_4022f6_39;
                    } else {
                        *reinterpret_cast<int32_t*>(&rax40) = static_cast<int32_t>(rcx28 + rcx28);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = 0;
                        esi41 = 1 << *reinterpret_cast<unsigned char*>(&rcx28);
                        rax42 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rbx3) + rax40 * 8 + 72);
                        if (rbx3->f0 & esi41) {
                            rdx43 = rax42->f10;
                        } else {
                            rbx3->f0 = rbx3->f0 | esi41;
                            rdx43 = rax42;
                        }
                        rax42->f10 = rdi5;
                        rdx43->f18 = rdi5;
                        rdi5->f10 = rdx43;
                        rdi5->f18 = rax42;
                        goto addr_402389_9;
                    }
                } else {
                    rbx3->f8 = rdx;
                    goto addr_402389_9;
                }
            } else {
                *reinterpret_cast<struct s13**>(&r9_44) = *reinterpret_cast<struct s13**>(&(rsi8 + 2)->f0);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_44) + 4) = 0;
                r9_45 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(rbx3) + r9_44 * 8);
                if (r9_45->f258 != rsi8) {
                    if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_23) + 32) != rsi8) {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_23) + 40) = rax21;
                    } else {
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_23) + 32) = rax21;
                    }
                    if (rax21) 
                        goto addr_4021cc_50;
                    goto addr_402217_24;
                } else {
                    r9_45->f258 = rax21;
                    if (!rax21) {
                        __asm__("rol eax, cl");
                        rbx3->f4 = rbx3->f4 & 0xfffffffe;
                        goto addr_402217_24;
                    } else {
                        addr_4021cc_50:
                        rcx46 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi8) + 32);
                        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax21) + 48) = r8_23;
                        if (rcx46) {
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax21) + 32) = rcx46;
                            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx46) + 48) = rax21;
                            goto addr_402206_55;
                        }
                    }
                }
            }
        } else {
            r9_26 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rsi8) + 32);
            goto addr_40217d_32;
        }
    }
    addr_402180_57:
    r11_47 = r9_26;
    rax21 = rcx27;
    r9_26 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx27) + 40);
    rcx27 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx27) + 40);
    if (rcx27) 
        goto addr_402180_57;
    rcx27 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax21) + 32);
    r9_26 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax21) + 32);
    if (rcx27) 
        goto addr_402180_57;
    *reinterpret_cast<struct s13**>(&r11_47->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_4021a7_34;
    addr_402311_38:
    ecx48 = 0;
    rsi49 = *reinterpret_cast<struct s13**>(reinterpret_cast<int64_t>(rbx3) + r8_39 * 8 + 0x258);
    if (eax30 != 31) {
        ecx48 = 57 - (reinterpret_cast<uint32_t>(eax30) >> 1);
    }
    rcx50 = reinterpret_cast<uint32_t>(rdx) << *reinterpret_cast<unsigned char*>(&ecx48);
    while ((reinterpret_cast<uint32_t>(rsi49->f8) & 0xfffffffffffffff8) != rdx) {
        rax51 = rcx50;
        rcx50 = rcx50 + rcx50;
        rax52 = (rax51 >> 63) + 4;
        if (!*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi49) + rax52 * 8)) 
            goto addr_40235b_64;
        rsi49 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi49) + rax52 * 8);
    }
    rax53 = rsi49->f10;
    rax53->f18 = rdi5;
    rsi49->f10 = rdi5;
    rdi5->f10 = rax53;
    rdi5->f18 = rsi49;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s13*>(0);
    addr_402389_9:
    return;
    addr_40235b_64:
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi49) + rax52 * 8) = rdi5;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48) = rsi49;
    addr_402363_67:
    rdi5->f18 = rdi5;
    rdi5->f10 = rdi5;
    goto addr_402389_9;
    addr_4022f6_39:
    rbx3->f4 = esi36 | r8d38;
    *reinterpret_cast<struct s13**>(reinterpret_cast<int64_t>(rbx3) + r8_39 * 8 + 0x258) = rdi5;
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 48) = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rbx3) + r8_39 * 8 + 0x258);
    goto addr_402363_67;
    addr_402206_55:
    rcx54 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rsi8) + 40);
    if (rcx54) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax21) + 40) = rcx54;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx54) + 48) = rax21;
        goto addr_402217_24;
    }
    addr_402155_27:
    rcx55 = rsi8->f10;
    rcx55->f18 = rax21;
    rax21->f10 = rcx55;
    goto addr_4021a7_34;
    addr_401fb5_15:
    rax14 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    r9_56 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rax14) {
        addr_401fcf_69:
        rcx57 = rax14;
    } else {
        rax14 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 32);
        if (!rax14) {
            addr_401ff9_71:
            if (!r8_16) 
                goto addr_40209e_2; else 
                goto addr_402002_72;
        } else {
            r9_56 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rdi5) + 32);
            goto addr_401fcf_69;
        }
    }
    addr_401fd2_74:
    r10_58 = r9_56;
    rax14 = rcx57;
    r9_56 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rcx57) + 40);
    rcx57 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx57) + 40);
    if (rcx57) 
        goto addr_401fd2_74;
    rcx57 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax14) + 32);
    r9_56 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax14) + 32);
    if (rcx57) 
        goto addr_401fd2_74;
    *reinterpret_cast<struct s13**>(&r10_58->f0) = reinterpret_cast<struct s13*>(0);
    goto addr_401ff9_71;
    addr_402002_72:
    *reinterpret_cast<struct s13**>(&r9_59) = *reinterpret_cast<struct s13**>(&(rdi5 + 2)->f0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_59) + 4) = 0;
    r9_60 = reinterpret_cast<struct s39*>(reinterpret_cast<int64_t>(rbx3) + r9_59 * 8);
    if (r9_60->f258 != rdi5) {
        if (*reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_16) + 32) != rdi5) {
            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_16) + 40) = rax14;
        } else {
            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(r8_16) + 32) = rax14;
        }
        if (!rax14) 
            goto addr_40205a_81;
    } else {
        r9_60->f258 = rax14;
        if (!rax14) {
            __asm__("rol eax, cl");
            rbx3->f4 = rbx3->f4 & 0xfffffffe;
            goto addr_40209e_2;
        }
    }
    rcx61 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 32);
    *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax14) + 48) = r8_16;
    if (rcx61) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax14) + 32) = rcx61;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx61) + 48) = rax14;
    }
    rcx62 = *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rdi5) + 40);
    if (rcx62) {
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax14) + 40) = rcx62;
        *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rcx62) + 48) = rax14;
        goto addr_40209e_2;
    }
    addr_40205a_81:
    goto addr_40209e_2;
    addr_401fa7_16:
    rcx63 = rdi5->f10;
    rcx63->f18 = rax14;
    rax14->f10 = rcx63;
    goto addr_401ff9_71;
}

uint32_t g436348;

struct s13* fun_401566() {
    uint32_t eax1;

    eax1 = g436348;
    g437fb0 = eax1;
    return 0xff;
}

struct s13* g436b00;

int32_t fun_401a74();

uint32_t fun_40400e(struct s13* rcx) {
    int64_t rdi2;
    int64_t rsi3;
    uint32_t r13d4;
    int64_t rdi5;
    int64_t rdi6;
    struct s13* rdx7;
    int32_t r12d8;
    struct s13* rax9;
    struct s13* r14_10;
    struct s13* rbx11;
    int1_t zf12;
    int32_t eax13;
    int32_t eax14;
    uint32_t eax15;
    struct s13* rdx16;
    uint64_t rcx17;
    struct s13* rdx18;
    void* tmp64_19;

    if (reinterpret_cast<uint64_t>(rdi2 - 1) > 0xfffffffffffffffd || !rsi3) {
        r13d4 = 0;
    } else {
        rdi5 = rdi6 >> 16;
        rdx7 = g436b00;
        r12d8 = *reinterpret_cast<int32_t*>(&rdi5);
        r13d4 = 0;
        rax9 = fun_40427b(rcx, rdx7);
        r14_10 = rax9;
        while (rax9 && (rbx11 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax9) + 0xffffffffffffffff), r12d8 <= *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rbx11) * 8 + 0x436b0c))) {
            zf12 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
            if (!zf12) {
                eax13 = fun_401a74();
                if (!eax13) {
                    r13d4 = 0xffffffff;
                }
                eax14 = fun_401a19(rcx);
                if (!eax14) {
                    r13d4 = 0xffffffff;
                }
            } else {
                eax15 = fun_404300();
                r13d4 = r13d4 | eax15;
            }
            rax9 = rbx11;
        }
        if (reinterpret_cast<uint32_t>(rax9) < reinterpret_cast<uint32_t>(r14_10)) 
            goto addr_4040cd_13;
    }
    addr_404142_14:
    return r13d4;
    addr_4040cd_13:
    rdx16 = g436b00;
    if (reinterpret_cast<uint32_t>(rdx16) > reinterpret_cast<uint32_t>(r14_10)) {
        rcx17 = (reinterpret_cast<uint32_t>(rax9) + 1) * 8;
        fun_404542(rcx17, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx16) - reinterpret_cast<uint32_t>(r14_10)) << 3);
        rdx18 = g436b00;
        rax9 = fun_404542(rcx17, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx18) - reinterpret_cast<uint32_t>(r14_10)) << 3);
    }
    tmp64_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(rax9) + reinterpret_cast<uint32_t>(g436b00));
    g436b00 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(tmp64_19) - reinterpret_cast<uint32_t>(r14_10));
    goto addr_404142_14;
}

uint64_t g436360;

uint32_t g436368;

uint32_t fun_4046fa();

struct s13* fun_404786(struct s13* rcx, int64_t rdx, uint64_t r8, int64_t r9);

struct s13* fun_403d6a() {
    uint64_t rcx1;
    uint32_t ecx2;
    int64_t r15_3;
    uint32_t r13d4;
    uint64_t rbx5;
    uint64_t rdi6;
    uint32_t r14d7;
    struct s13* r14_8;
    struct s13* rdx9;
    struct s13* rcx10;
    uint32_t r13d11;
    struct s13* rax12;
    struct s13* r12_13;
    struct s13* rax14;
    int32_t r10d15;
    uint64_t r8_16;
    int64_t rsi17;
    int64_t rdi18;
    uint64_t rsi19;
    uint64_t r14_20;
    uint32_t eax21;
    int64_t r8_22;
    int64_t rdx23;
    int64_t r9_24;
    struct s13* rcx25;
    struct s13* rax26;
    uint64_t r8_27;
    struct s13* rax28;
    struct s13* rax29;
    struct s13* rax30;
    struct s13* rdx31;
    uint64_t r13_32;
    struct s13* rax33;
    struct s13* rdx34;
    uint64_t rcx35;
    struct s13* rax36;
    struct s13* rdx37;

    rcx1 = g436360;
    ecx2 = *reinterpret_cast<uint32_t*>(&rcx1) | g436368;
    r15_3 = 0;
    r13d4 = ecx2 | 2;
    rbx5 = rdi6;
    r14d7 = g4362b8;
    *reinterpret_cast<uint32_t*>(&r14_8) = r14d7 & 4;
    if (!*reinterpret_cast<uint32_t*>(&r14_8) || !0) {
        rbx5 = rbx5 + 0xffff;
        *reinterpret_cast<int16_t*>(&rbx5) = 0;
    }
    rdx9 = g436b00;
    *reinterpret_cast<uint32_t*>(&rcx10) = r13d4 & 16;
    *reinterpret_cast<int32_t*>(&rcx10 + 1) = 0;
    if (*reinterpret_cast<uint32_t*>(&rcx10)) {
        addr_403e4a_5:
        if (!reinterpret_cast<int1_t>(rdx9 == 0x12c)) {
            if (!*reinterpret_cast<uint32_t*>(&rcx10)) {
                fun_40427b(r15_3 >> 16, rdx9);
            } else {
                fun_403d56(rcx10, rdx9);
            }
            r13d11 = r13d4 | 16;
            if (!*reinterpret_cast<uint32_t*>(&r14_8)) 
                goto addr_403e9a_10;
        } else {
            rax12 = fun_401556();
            r12_13 = rax12;
            goto addr_403ff6_12;
        }
    } else {
        if (rax14 = rdx9, r15_3 = 0x200000000000, rdx9 == 0) {
            addr_403e46_14:
            *reinterpret_cast<int16_t*>(&r15_3) = 0;
            goto addr_403e4a_5;
        } else {
            r10d15 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rdx9) * 8 + 0x436b04);
            r8_16 = rbx5 >> 16;
            do {
                rax14 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(rax14) - 1);
                *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax14) * 8 + 0x436b0c);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = 0;
                rdi18 = rsi17 + 1;
                if (rdi18 + r8_16 > 0x30000000) 
                    continue;
                if (*reinterpret_cast<int32_t*>(&rsi17) > 0x1ffffffe) 
                    goto addr_403e2b_18;
            } while (rax14);
            goto addr_403e39_20;
        }
    }
    *reinterpret_cast<uint32_t*>(&rsi19) = r13d11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
    r14_20 = rbx5 >> 32;
    eax21 = fun_4046fa();
    *reinterpret_cast<int32_t*>(&r8_22) = *reinterpret_cast<int32_t*>(&rbx5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rdx23) = eax21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
    if (!1) {
    }
    *reinterpret_cast<int32_t*>(&r9_24) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx25) = *reinterpret_cast<uint32_t*>(&r14_20);
    *reinterpret_cast<int32_t*>(&rcx25 + 1) = 0;
    rax26 = fun_401a32(rcx25, rdx23, r8_22, 0, 0xff, rsi19);
    r14_8 = rax26;
    r8_27 = rsi19;
    if (rax26) 
        goto addr_403f09_24;
    addr_403f44_25:
    rax28 = fun_404786(rcx25, rdx23, r8_27, r9_24);
    addr_403f49_26:
    r12_13 = rax28;
    r14_8 = reinterpret_cast<struct s13*>(0xffffffffffffffff);
    goto addr_403f50_27;
    addr_403f09_24:
    rax29 = fun_4042a8(rcx25, rdx23, r8_27);
    r9_24 = r15_3;
    r8_27 = rbx5;
    rax30 = fun_401a5e(0, 0, r8_27, r9_24, 0xff, rax29);
    rdx23 = 0xff;
    r12_13 = rax30;
    rcx25 = rax29;
    if (rax30) {
        addr_403f50_27:
        if (r12_13 != 0xffffffffffffffff) {
            rdx31 = g436b00;
            r13_32 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(r12_13) >> 16);
            rax33 = fun_40427b(rcx25, rdx31, rcx25, rdx31);
            rdx34 = g436b00;
            if (reinterpret_cast<uint32_t>(rdx34) > reinterpret_cast<uint32_t>(rax33)) {
                rcx35 = (reinterpret_cast<uint32_t>(rax33) + 2) * 8;
                rax36 = fun_404542(rcx35, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx34) - reinterpret_cast<uint32_t>(rax33)) << 3);
                rdx37 = g436b00;
                rax33 = fun_404542(rcx35, reinterpret_cast<uint64_t>(reinterpret_cast<uint32_t>(rdx37) - reinterpret_cast<uint32_t>(rax36)) << 3);
            }
            g436b00 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(g436b00) + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax33) * 8 + 0x436b08) = *reinterpret_cast<int32_t*>(&r13_32);
            *reinterpret_cast<struct s13**>(reinterpret_cast<uint32_t>(rax33) * 8 + 0x437468) = r14_8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(rax33) * 8 + 0x436b0c) = static_cast<int32_t>((rbx5 + 0xffff >> 16) + r13_32 - 1);
        }
    } else {
        fun_401a19(rcx25, rcx25);
        goto addr_403f44_25;
    }
    addr_403ff6_12:
    return r12_13;
    addr_403e9a_10:
    *reinterpret_cast<uint32_t*>(&rcx25) = r13d11;
    *reinterpret_cast<int32_t*>(&rcx25 + 1) = 0;
    rax28 = fun_40429b(rcx25, 3, -1, 0);
    goto addr_403f49_26;
    addr_403e2b_18:
    r15_3 = rdi18 << 16;
    goto addr_403e46_14;
    addr_403e39_20:
    r15_3 = static_cast<int64_t>(r10d15 + 1) << 16;
    goto addr_403e46_14;
}

struct s13* fun_4042f0() {
    goto g4362c0;
}

uint32_t fun_4046fa() {
    uint32_t eax1;
    uint32_t esi2;
    uint32_t edi3;
    uint32_t edi4;
    uint32_t edx5;
    uint32_t edi6;
    unsigned char dil7;
    uint32_t edi8;
    uint64_t rcx9;
    int64_t rdx10;
    int32_t esi11;
    uint64_t rsi12;
    uint32_t edi13;

    eax1 = esi2;
    if ((edi3 & 7) != 7) {
        if ((edi4 & 3) != 3) {
            edx5 = 32;
            if ((edi6 & 5) != 5 && (edx5 = 16, !(dil7 & 4))) {
                edx5 = (edi8 & 1) + 1;
            }
        } else {
            edx5 = 4;
            if (!(*reinterpret_cast<unsigned char*>(&eax1) & 1)) {
                rcx9 = g436360;
                *reinterpret_cast<uint32_t*>(&rdx10) = reinterpret_cast<uint1_t>(rcx9 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(esi11)) & rcx9));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
                edx5 = static_cast<uint32_t>(rdx10 * 4 + 4);
            }
        }
    } else {
        edx5 = 64;
        if (!(*reinterpret_cast<unsigned char*>(&eax1) & 1)) {
            rsi12 = g436360;
            if (rsi12 != (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(eax1))) & rsi12)) {
                edx5 = 0x80;
            }
        }
    }
    return (eax1 | edi13) & 0xdd000000 | edx5;
}

struct s13* fun_404786(struct s13* rcx, int64_t rdx, uint64_t r8, int64_t r9) {
    int1_t zf5;
    struct s13* rax6;
    int64_t rax7;

    zf5 = (*reinterpret_cast<unsigned char*>(&g4362b8) & 4) == 0;
    if (zf5) {
        rax6 = fun_401566();
        return rax6;
    } else {
        rax7 = fun_401a48();
        g437fb0 = *reinterpret_cast<uint32_t*>(&rax7);
        return 0xffffffffffffffff;
    }
}

int64_t UnmapViewOfFile = 0x4c36;

int32_t fun_401a74() {
    int64_t rdi1;
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(UnmapViewOfFile(rdi1));
    return eax2;
}

void fun_40444e() {
    __asm__("outsd ");
}

void fun_404451() {
    int1_t less_or_equal1;
    int64_t rdi2;
    int64_t rdx3;
    int64_t rbx4;
    int64_t v5;

    __asm__("rol ch, 0xfe");
    if (!less_or_equal1) {
        *reinterpret_cast<int64_t*>(rdi2 + rdx3 - 8) = rbx4;
        goto v5;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xeb77");
    }
}

void fun_40445f() {
    __asm__("outsd ");
}

void fun_404462(int64_t rcx) {
    int1_t zf2;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf2)) 
        goto 0x404429;
}

void fun_404465() {
    int1_t less_or_equal1;
    int64_t rdi2;
    int64_t rdx3;
    int32_t ebx4;

    if (!less_or_equal1) {
        *reinterpret_cast<int32_t*>(rdi2 + rdx3 - 4) = ebx4;
        goto 0x4044b7;
    }
}

void fun_404468(int64_t rcx, uint64_t rdx) {
    int1_t zf3;
    uint64_t rcx4;
    uint64_t rdx5;
    int64_t rdi6;
    int64_t rdi7;
    uint64_t rcx8;
    uint64_t rcx9;
    signed char* rdi10;
    signed char* rsi11;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf3)) {
        if (rdx < 0x400) 
            goto addr_404441_4;
    } else {
        __asm__("in eax, 0xef");
        __asm__("fucomi st0, st3");
        if (rdx < 0x400) {
            rcx4 = 16;
            do {
                rcx4 = rcx4 + 16;
                __asm__("movdqu xmm3, [rsi+rcx-0x20]");
                __asm__("movdqu [rdi+rcx-0x20], xmm3");
            } while (rdx > rcx4);
            __asm__("movdqu xmm3, [rsi+rdx-0x10]");
            __asm__("movdqu [rdi+rdx-0x10], xmm3");
            __asm__("pxor xmm3, xmm3");
            goto 0x4044b8;
        }
    }
    if (rdx > 0x400000) {
        __asm__("movdqu xmm3, [rsi]");
        __asm__("movdqu [rdi], xmm3");
        rdx5 = rdx - ((reinterpret_cast<uint64_t>(rdi6 + 16) & 0xfffffffffffffff0) - rdi7);
        rcx8 = 16;
        do {
            rcx8 = rcx8 + 16;
            __asm__("movdqu xmm3, [rsi+rcx-0x20]");
            __asm__("movntdq [rdi+rcx-0x20], xmm3");
        } while (rdx5 > rcx8);
        __asm__("sfence ");
        __asm__("movdqu xmm3, [rsi+rdx-0x10]");
        __asm__("movdqu [rdi+rdx-0x10], xmm3");
        __asm__("pxor xmm3, xmm3");
        goto 0x4044b8;
    } else {
        rcx9 = rdx;
        while (*reinterpret_cast<int32_t*>(&rcx9)) {
            *reinterpret_cast<int32_t*>(&rcx9) = *reinterpret_cast<int32_t*>(&rcx9) - 1;
            *rdi10 = *rsi11;
            ++rdi10;
            ++rsi11;
        }
        goto 0x4044b8;
    }
    addr_404441_4:
}

void fun_40458a(int64_t rcx, int64_t rdx) {
    int64_t rcx3;
    int32_t ebx4;
    int32_t ebx5;
    int32_t* rdi6;
    int64_t rdi7;
    int64_t v8;
    int1_t sf9;

    rcx3 = rcx - 1;
    if (rcx3) {
        ebx4 = ebx5 * *reinterpret_cast<int32_t*>(&rcx3);
        *rdi6 = ebx4;
        *reinterpret_cast<int32_t*>(rdi7 + rdx - 4) = ebx4;
        goto v8;
    } else {
        if (sf9) 
            goto " ";
    }
}

void fun_404599() {
    int1_t less_or_equal1;
    int64_t rdi2;
    int64_t rdx3;
    int64_t rbx4;

    if (!less_or_equal1) {
        *reinterpret_cast<int64_t*>(rdi2 + rdx3 - 8) = rbx4;
        goto 0x4045e1;
    } else {
        __asm__("xadd [rax+0x39], cl");
        __asm__("retf 0xf177");
    }
}

void fun_4045a4() {
    int1_t less_or_equal1;

    if (!less_or_equal1) {
    }
}

struct s40 {
    signed char[106] pad106;
    signed char f6a;
};

struct s41 {
    signed char[106] pad106;
    signed char f6a;
};

void fun_4045a7(int64_t rcx, uint64_t rdx) {
    int1_t zf3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    signed char al8;
    struct s40* rbx9;
    struct s41* rbx10;
    uint64_t rcx11;

    if (reinterpret_cast<uint1_t>(!!(rcx - 1)) & reinterpret_cast<uint1_t>(!zf3)) 
        goto 0x40456e;
    __asm__("in al, 0x57");
    __asm__("fucomi st0, st3");
    __asm__("cli ");
    *reinterpret_cast<signed char*>(rax4 + rax5) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax6 + rax7) + al8);
    rbx9->f6a = reinterpret_cast<signed char>(rbx10->f6a + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1));
    __asm__("punpcklbw xmm3, xmm3");
    __asm__("punpcklwd xmm3, xmm3");
    __asm__("pshufd xmm3, xmm3, 0x0");
    *reinterpret_cast<int32_t*>(&rcx11) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    do {
        rcx11 = rcx11 + 16;
        __asm__("movdqu [rdi+rcx-0x20], xmm3");
    } while (rdx > rcx11);
    __asm__("movdqu [rdi+rdx-0x10], xmm3");
    __asm__("xorps xmm3, xmm3");
}

struct s42 {
    struct s42* f0;
    signed char[7] pad8;
    int64_t f8;
    signed char[16] pad32;
    unsigned char f20;
    signed char[50] pad83;
    unsigned char f53;
    int32_t f54;
    unsigned char f55;
    signed char[8] pad97;
    uint32_t f61;
    int32_t f64;
    unsigned char f65;
    unsigned char f69;
    signed char[2] pad109;
    unsigned char f6d;
    unsigned char f6e;
    unsigned char f6f;
    signed char[2] pad114;
    unsigned char f72;
    unsigned char f73;
    unsigned char f74;
    unsigned char f75;
    signed char[1] pad119;
    int32_t f77;
};

struct s43 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s44 {
    unsigned char f0;
    signed char[31] pad32;
    int32_t f20;
    signed char[37] pad73;
    unsigned char f49;
    signed char[1] pad75;
    unsigned char f4b;
    signed char[3] pad79;
    unsigned char f4f;
    signed char[21] pad101;
    int32_t f65;
    int32_t f67;
    unsigned char f6c;
    signed char[1] pad111;
    unsigned char f6f;
    signed char[2] pad114;
    uint32_t f72;
    signed char[1701986954] pad1701987072;
    signed char f65724300;
};

struct s45 {
    signed char[104] pad104;
    int32_t f68;
};

struct s46 {
    signed char[32] pad32;
    int32_t f20;
};

struct s47 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s48 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s49 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s50 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s51 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s52 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s53 {
    signed char[105] pad105;
    signed char f69;
};

struct s54 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s55 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s56 {
    signed char[111] pad111;
    signed char f6f;
};

struct s57 {
    signed char[101] pad101;
    uint32_t f65;
};

struct s58 {
    signed char[101] pad101;
    int32_t f65;
};

struct s59 {
    signed char[101] pad101;
    int32_t f65;
};

struct s60 {
    signed char[101] pad101;
    void* f65;
};

struct s61 {
    signed char[101] pad101;
    signed char f65;
};

struct s62 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s63 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s64 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s65 {
    signed char[112] pad112;
    int32_t f70;
};

struct s66 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s67 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s68 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s69 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s70 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s71 {
    signed char[102] pad102;
    unsigned char f66;
};

struct s72 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s73 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s74 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s75 {
    signed char[101] pad101;
    unsigned char f65;
};

void fun_4047e0(struct s42* rcx, int16_t dx, void** r8) {
    struct s42* rdx2;
    void* rsp4;
    int1_t cf5;
    void* al6;
    int32_t eax7;
    int32_t eax8;
    int32_t eax9;
    int32_t eax10;
    struct s42* rax11;
    struct s43* rbx12;
    struct s44* rsi13;
    int1_t zf14;
    struct s45* rdi15;
    struct s42* rbp16;
    void* rsp17;
    struct s46* rbx18;
    int64_t* rsp19;
    void** rsp20;
    int64_t* rsp21;
    int64_t r11_22;
    int64_t* rsp23;
    int64_t rbx24;
    struct s42** rsp25;
    struct s42** rsp26;
    int64_t* rsp27;
    int64_t r10_28;
    void** rsp29;
    int64_t* rsp30;
    int64_t r13_31;
    int64_t* rsp32;
    int64_t r10_33;
    struct s42** rsp34;
    struct s42** rsp35;
    int64_t* rsp36;
    int64_t r11_37;
    struct s47* rbx38;
    struct s48* rbx39;
    struct s49* rdi40;
    struct s50* rdi41;
    struct s42* rsp42;
    struct s51* rdi43;
    int1_t zf44;
    signed char* rdi45;
    signed char* rdi46;
    signed char bh47;
    uint32_t tmp32_48;
    int1_t cf49;
    uint1_t zf50;
    signed char bh51;
    int1_t sf52;
    struct s52* edi53;
    struct s53* edi54;
    struct s54* rbx55;
    struct s55* rbx56;
    uint1_t cf57;
    struct s56* rbx58;
    uint1_t below_or_equal59;
    void* tmp8_60;
    uint1_t cf61;
    uint1_t below_or_equal62;
    uint32_t tmp32_63;
    uint32_t tmp32_64;
    struct s57* rdi65;
    struct s58* rdi66;
    struct s59* rdi67;
    unsigned char* rbx68;
    signed char* rbx69;
    unsigned char* rbx70;
    unsigned char* rbx71;
    signed char* rdi72;
    signed char* rdi73;
    signed char bl74;
    struct s60* rdi75;
    struct s61* r15_76;
    void* rsp77;
    unsigned char* rbx78;
    struct s42* tmp8_79;
    void* rsp80;
    struct s62* rdi81;
    struct s42* rsp82;
    struct s42* rsp83;
    struct s42* r12_84;
    struct s63* rdi85;
    struct s64* rdi86;
    struct s65* rdi87;
    struct s66* rdi88;
    struct s67* rdi89;
    struct s68* rdi90;
    struct s69* rdi91;
    struct s70* rdi92;
    struct s71* rdi93;
    struct s42* rsp94;
    struct s72* rdi95;
    struct s73* rdi96;
    struct s74* rdi97;
    struct s75* rdi98;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    rsp4 = __zero_stack_offset();
    if (cf5) {
        __asm__("insb ");
        __asm__("insb ");
        *reinterpret_cast<struct s42**>(&rcx->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rcx->f0)) + reinterpret_cast<unsigned char>(al6));
        __asm__("rol byte [rcx], 0xc0");
        eax7 = eax8 + eax9;
        eax10 = eax7 + eax7;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&eax10) + 1) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10)) + *reinterpret_cast<signed char*>(&eax10));
        *reinterpret_cast<signed char*>(&eax10) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax10) - 8) - 8) - 8) - 8) - 8);
        *reinterpret_cast<uint32_t*>(&rax11) = eax10 + 0x5fc05fc + 0x5fc05fc;
        *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
        rax11 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rax11) | rbx12->f6f);
        if (1) {
            rcx->f74 = reinterpret_cast<unsigned char>(rcx->f74 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rcx->f6e = 0;
            goto addr_404892_5;
        }
        __asm__("outsd ");
        if (0) {
            addr_404892_5:
        } else {
            __asm__("insb ");
            *reinterpret_cast<uint32_t*>(&rsi13) = rcx->f6e * 0x706f430a;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
            zf14 = __undefined();
            if (!__undefined()) {
                if (!zf14) 
                    goto addr_404912_9;
                if (__intrinsic()) 
                    goto addr_4048c8_11; else 
                    goto addr_4048a8_12;
            } else {
                *reinterpret_cast<int32_t*>(&rsp4) = rdi15->f68 * 0x30322074;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp4) + 4) = 0;
                *reinterpret_cast<unsigned char*>(&rdx2 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2 + 1) ^ reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)));
                rdx2->f75 = reinterpret_cast<unsigned char>(rdx2->f75 & *reinterpret_cast<unsigned char*>(&rcx));
                if (1) {
                    addr_4048b0_14:
                    if (1) {
                        goto addr_4048d3_16;
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rbp16) = rsi13->f65 * 0x656c4120;
                    *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                    zf14 = __undefined();
                    if (__undefined()) {
                        goto addr_4048a8_12;
                    } else {
                        __asm__("outsb ");
                        if (__intrinsic()) 
                            goto addr_4048aa_20;
                    }
                }
            }
        }
    }
    rdx2->f6f = reinterpret_cast<unsigned char>(rdx2->f6f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
    addr_4048c8_11:
    __asm__("insb ");
    *reinterpret_cast<uint32_t*>(&rsp17) = reinterpret_cast<uint32_t>(rbx18->f20 * 0x6563694c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
    __asm__("outsb ");
    if (!__intrinsic()) {
        addr_404938_23:
        *reinterpret_cast<int32_t*>(&rbp16) = rsi13->f20 * 0x20656874;
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        rsp19 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp17) - 8);
        *rsp19 = 0x2065706f;
        if (!__undefined()) {
        }
    } else {
        addr_4048d3_16:
        rcx->f73 = 0;
        rax11->f75 = 0;
    }
    addr_4049af_25:
    rsp20 = reinterpret_cast<void**>(rsp19 - 1);
    *reinterpret_cast<void***>(rsp20) = rsp20;
    rsp21 = reinterpret_cast<int64_t*>(rsp20 - 1);
    *rsp21 = r11_22;
    rsp23 = rsp21 - 1;
    *rsp23 = rbx24;
    rsi13->f4f = reinterpret_cast<unsigned char>(rsi13->f4f & reinterpret_cast<unsigned char>(rax11));
    rsp25 = reinterpret_cast<struct s42**>(rsp23 - 1);
    *rsp25 = rdx2;
    rcx->f20 = reinterpret_cast<unsigned char>(rcx->f20 & reinterpret_cast<unsigned char>(rax11));
    rsp26 = rsp25 - 8;
    *rsp26 = rax11;
    rsp27 = reinterpret_cast<int64_t*>(rsp26 - 8);
    *rsp27 = r10_28;
    rsp29 = reinterpret_cast<void**>(rsp27 - 1);
    *reinterpret_cast<void***>(rsp29) = rsp29;
    rsp30 = reinterpret_cast<int64_t*>(rsp29 - 1);
    *rsp30 = r13_31;
    rsp32 = rsp30 - 1;
    *rsp32 = r10_33;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 85) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + 85) & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
    rsp34 = reinterpret_cast<struct s42**>(rsp32 - 1);
    *rsp34 = rdx2;
    rsp35 = rsp34 - 8;
    *rsp35 = rax11;
    rsp36 = reinterpret_cast<int64_t*>(rsp35 - 8);
    *rsp36 = r11_37;
    rbx38->f65 = reinterpret_cast<unsigned char>(rbx39->f65 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
    rdi40->f4e = reinterpret_cast<unsigned char>(rdi41->f4e & reinterpret_cast<unsigned char>(rax11));
    rsp42 = reinterpret_cast<struct s42*>(rsp36 - 1);
    *reinterpret_cast<struct s42**>(&rsp42->f0) = rbp16;
    rax11 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rax11) | rdi43->f65);
    zf44 = rax11 == 0;
    __asm__("outsb ");
    if (!0) {
        __asm__("insb ");
        rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
    }
    __asm__("outsb ");
    if (1) {
        if (zf44) {
            __asm__("outsd ");
            __asm__("outsb ");
            if (zf44) {
                addr_404b8f_32:
                __asm__("insd ");
            } else {
                __asm__("outsd ");
                __asm__("insb ");
                *rdi45 = reinterpret_cast<signed char>(*rdi46 + bh47);
                tmp32_48 = *reinterpret_cast<uint32_t*>(&rax11) + 0x74697845;
                cf49 = tmp32_48 < *reinterpret_cast<uint32_t*>(&rax11);
                *reinterpret_cast<uint32_t*>(&rax11) = tmp32_48;
                *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
                zf50 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax11) == 0);
                rsp42 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rsp42) - 8);
                *reinterpret_cast<struct s42**>(&rsp42->f0) = rax11;
                if (cf49) {
                    if (zf50) {
                        addr_404c03_35:
                        goto addr_404c05_36;
                    } else {
                        __asm__("outsd ");
                        __asm__("outsb ");
                        if (*reinterpret_cast<int32_t*>(&rax11) < reinterpret_cast<int32_t>(0)) {
                        }
                    }
                } else {
                    *reinterpret_cast<unsigned char*>(&rsp42) = rbp16->f73;
                    *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
                    if (!cf49) 
                        goto addr_404b2e_40; else 
                        goto addr_404b2e_40;
                }
            }
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi13) + 0x6c) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsi13) + 0x6c) & reinterpret_cast<unsigned char>(rax11));
            __asm__("outsd ");
            __asm__("outsd ");
            if (0) {
                *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi13) + 0x65724300) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsi13) + 0x65724300) + bh51);
            }
            rdx2->f6f = reinterpret_cast<unsigned char>(rdx2->f6f & reinterpret_cast<unsigned char>(rax11));
            zf50 = reinterpret_cast<uint1_t>(rdx2->f6f == 0);
            sf52 = __intrinsic();
            if (1) 
                goto addr_404b30_45; else 
                goto addr_404abc_46;
        }
    } else {
        addr_404a48_47:
        *reinterpret_cast<void**>(&rax11 + 1) = reinterpret_cast<void*>(0xff);
        __asm__("outsd ");
        __asm__("outsb ");
        *reinterpret_cast<unsigned char*>(&edi53->f69) = 0;
        if (!*reinterpret_cast<signed char*>(&edi54->f69)) {
            goto addr_404abc_46;
        } else {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x69) = 0;
            if (1) {
                addr_404a79_50:
                rbx55->f6f = reinterpret_cast<unsigned char>(rbx56->f6f & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
                cf57 = 0;
                zf50 = reinterpret_cast<uint1_t>(rbx58->f6f == 0);
                sf52 = __intrinsic();
                below_or_equal59 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf50));
                goto addr_404a7b_51;
            } else {
                if (0) {
                    addr_404acd_53:
                    rbp16->f53 = reinterpret_cast<unsigned char>(rbp16->f53 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
                    tmp8_60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax11));
                    cf61 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp8_60) < reinterpret_cast<unsigned char>(*r8));
                    *r8 = tmp8_60;
                    zf50 = reinterpret_cast<uint1_t>(*r8 == 0);
                    sf52 = reinterpret_cast<signed char>(*r8) < reinterpret_cast<signed char>(0);
                    below_or_equal62 = reinterpret_cast<uint1_t>(cf61 | zf50);
                    goto addr_404ad6_54;
                } else {
                    __asm__("outsd ");
                    if (0) {
                        addr_404ac0_56:
                        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi13) | reinterpret_cast<unsigned char>(*r8));
                        *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) ^ *reinterpret_cast<uint32_t*>(&rsi13));
                        *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<uint32_t*>(&rax11) - 0x31303331;
                        *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
                        goto addr_404acd_53;
                    } else {
                        __asm__("insd ");
                        goto addr_404a61_58;
                    }
                }
            }
        }
    }
    addr_404be7_59:
    goto addr_404be8_60;
    addr_404b2e_40:
    zf50 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rcx->f0)) & *reinterpret_cast<uint32_t*>(&rax11)) == 0);
    sf52 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rcx->f0)) & *reinterpret_cast<uint32_t*>(&rax11)) < reinterpret_cast<int32_t>(0);
    addr_404b30_45:
    __asm__("insb ");
    if (!zf50) {
        addr_404ba7_61:
        if (zf50) {
            goto addr_404bf3_63;
        } else {
            goto addr_404bb3_65;
        }
    } else {
        rsp42 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rsp42) - 8);
        *reinterpret_cast<struct s42**>(&rsp42->f0) = reinterpret_cast<struct s42*>(0x656c6946);
        if (!zf50) {
            *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
        } else {
            if (0) {
                addr_404bb3_65:
                __asm__("insd ");
                goto addr_404bb5_69;
            } else {
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                tmp32_63 = *reinterpret_cast<uint32_t*>(&rcx);
                *reinterpret_cast<uint32_t*>(&rcx) = *reinterpret_cast<uint32_t*>(&rax11);
                *reinterpret_cast<uint32_t*>(&rax11) = tmp32_63;
                *reinterpret_cast<int32_t*>(&rax11 + 4) = 0;
                tmp32_64 = rsi13->f72 + *reinterpret_cast<uint32_t*>(&rax11);
                cf61 = reinterpret_cast<uint1_t>(tmp32_64 < rsi13->f72);
                rsi13->f72 = tmp32_64;
                zf50 = reinterpret_cast<uint1_t>(rsi13->f72 == 0);
                sf52 = reinterpret_cast<int32_t>(rsi13->f72) < reinterpret_cast<int32_t>(0);
                below_or_equal62 = reinterpret_cast<uint1_t>(cf61 | zf50);
                goto addr_404b44_71;
            }
        }
    }
    rax11 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rax11) & 2);
    zf50 = reinterpret_cast<uint1_t>(rax11 == 0);
    sf52 = __intrinsic();
    goto addr_404ba7_61;
    addr_404b44_71:
    __asm__("outsb ");
    if (below_or_equal62) {
        addr_404bb5_69:
    } else {
        if (cf61) 
            goto addr_404bbd_74;
        __asm__("outsb ");
        __asm__("insd ");
        __asm__("outsb ");
        if (zf50) 
            goto addr_404ba7_61;
    }
    if (zf50) {
        if (zf50) {
            addr_404c12_78:
            if (sf52) {
                addr_404c64_79:
                rsp42 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rsp42) - 8);
                *reinterpret_cast<struct s42**>(&rsp42->f0) = rax11;
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
            } else {
                if (zf50) {
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(&rbp16) = rbp16->f54 * 0x657079;
            *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
            goto addr_404bd2_83;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rbp16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi13) + 0x67) * 0xbd005773;
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        rdi65->f65 = rdi66->f65 + *reinterpret_cast<uint32_t*>(&rax11);
        if (rdi67->f65) {
            __asm__("outsd ");
            __asm__("insd ");
            __asm__("insd ");
        }
    }
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    goto addr_404c6f_87;
    addr_404c85_88:
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *rbx68 = reinterpret_cast<unsigned char>(*rbx69 + *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    rsi13->f0 = reinterpret_cast<unsigned char>(rsi13->f0 + *reinterpret_cast<unsigned char*>(&rcx));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *rbx70 = reinterpret_cast<unsigned char>(*rbx71 & *reinterpret_cast<unsigned char*>(&rcx));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    rsi13->f0 = reinterpret_cast<unsigned char>(rsi13->f0 + *reinterpret_cast<unsigned char*>(&rcx + 1));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax11));
    goto addr_404cb4_91;
    addr_404bd2_83:
    goto addr_404bd4_92;
    addr_404abc_46:
    __asm__("outsd ");
    __asm__("outsb ");
    rax11 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rax11) - 32);
    goto addr_404ac0_56;
    addr_404a7b_51:
    if (!zf50) {
    }
    addr_404af8_95:
    if (zf50) {
    }
    if (!zf50) 
        goto addr_404b74_100;
    __asm__("outsb ");
    if (!sf52) {
        addr_404c05_36:
        *reinterpret_cast<uint32_t*>(&rcx) = *reinterpret_cast<uint32_t*>(&rcx) + rbp16->f61;
        if (__intrinsic()) {
            addr_404c60_102:
            __asm__("fadd dword [rdi+0x0]");
            goto addr_404c63_103;
        } else {
            *reinterpret_cast<unsigned char*>(&rsp42) = reinterpret_cast<unsigned char>(rbp16->f77 * 0x6946664f);
            *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
            sf52 = __undefined();
            zf50 = __undefined();
            __asm__("insb ");
            goto addr_404c12_78;
        }
    } else {
        addr_404bbd_74:
    }
    addr_404b74_100:
    __asm__("outsb ");
    if (below_or_equal59) {
        __asm__("outsd ");
    } else {
        if (cf57) {
            addr_404be8_60:
            if (zf50) {
                __asm__("insb ");
                *rdi72 = reinterpret_cast<signed char>(*rdi73 + bl74);
            } else {
                if (!zf50) {
                }
            }
        } else {
            __asm__("outsb ");
            __asm__("insd ");
            __asm__("outsb ");
            if (zf50) 
                goto addr_404bd2_83; else 
                goto addr_404b7f_113;
        }
    }
    *reinterpret_cast<void**>(&rax11 + 1) = reinterpret_cast<void*>(0xff + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
    rax11 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rdi75->f65));
    zf50 = reinterpret_cast<uint1_t>(rax11 == 0);
    goto addr_404be7_59;
    addr_404c50_115:
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    goto addr_404c60_102;
    addr_404b7f_113:
    if (zf50) {
        addr_404bf3_63:
        __asm__("in eax, 0x2");
        if (zf50) {
            if (zf50) {
                addr_404cb4_91:
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
            } else {
                goto addr_404c50_115;
            }
        } else {
            if (!sf52) {
                addr_404c6f_87:
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                __asm__("fmul dword [rdx+0x0]");
                *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
                goto addr_404c85_88;
            } else {
                if (zf50) {
                    addr_404c63_103:
                    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
                    goto addr_404c64_79;
                } else {
                    __asm__("insd ");
                    __asm__("outsb ");
                    __asm__("outsw ");
                    goto addr_404c03_35;
                }
            }
        }
    } else {
        *reinterpret_cast<int32_t*>(&rbp16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi13) + 0x67) * 0x5773;
        *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
        if (!(*reinterpret_cast<uint32_t*>(&rax11) & reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rdx2->f0)))) {
            addr_404bd4_92:
            if (!(*reinterpret_cast<signed char*>(&r8) + r15_76->f65)) {
                __asm__("insb ");
                __asm__("insb ");
                *reinterpret_cast<uint32_t*>(&rsp77) = rbp16->f73 * 0x69f0000;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp77) + 4) = 0;
                *reinterpret_cast<struct s42**>(reinterpret_cast<int64_t>(rsp77) - 8) = rbp16;
                __asm__("outsb ");
                __asm__("insd ");
            }
        } else {
            goto addr_404b8f_32;
        }
    }
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    __asm__("outsb ");
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *rbx78 = *reinterpret_cast<unsigned char*>(&rcx);
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    rsi13->f4b = reinterpret_cast<unsigned char>(rsi13->f4b + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rax11 + 1)));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *r8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r8) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    *reinterpret_cast<struct s42**>(&rax11->f0) = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rax11->f0)) + reinterpret_cast<unsigned char>(rax11));
    addr_404ad6_54:
    tmp8_79 = *reinterpret_cast<struct s42**>(&rax11->f0);
    *reinterpret_cast<struct s42**>(&rax11->f0) = rax11;
    rax11 = tmp8_79;
    __asm__("insb ");
    __asm__("outsd ");
    if (cf61) {
    }
    addr_404a61_58:
    *reinterpret_cast<int32_t*>(&rsp80) = rsi13->f20 * 0x2c746f6e;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp80) + 4) = 0;
    rdi81->f72 = 0;
    *reinterpret_cast<uint32_t*>(&rsi13) = rbp16->f20 * 0x74206f74;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = 0;
    rsp42 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp80) - 8);
    *reinterpret_cast<struct s42**>(&rsp42->f0) = reinterpret_cast<struct s42*>(0x72462065);
    goto addr_404a79_50;
    addr_4048a8_12:
    if (zf14) {
        addr_404912_9:
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 99) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 99) & *reinterpret_cast<unsigned char*>(&rcx));
        __asm__("outsb ");
        if (1) {
            __asm__("outsb ");
            *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
            rcx->f6d = reinterpret_cast<unsigned char>(rcx->f6d & *reinterpret_cast<unsigned char*>(&rcx + 1));
            cf57 = 0;
            goto addr_404989_132;
        } else {
            *reinterpret_cast<unsigned char*>(&rcx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rcx) | reinterpret_cast<unsigned char>(*reinterpret_cast<struct s42**>(&rdx2->f0)));
            cf57 = 0;
            zf50 = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rcx) == 0);
            sf52 = __intrinsic();
            below_or_equal59 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf50));
            rsp82 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8);
            *reinterpret_cast<struct s42**>(&rsp82->f0) = rsp82;
            rsp42 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rsp82) - 8);
            *reinterpret_cast<struct s42**>(&rsp42->f0) = reinterpret_cast<struct s42*>(0x70207369);
            if (0) {
                goto addr_404995_135;
            }
        }
    } else {
        addr_4048aa_20:
        rbp16->f72 = 0;
        __asm__("insd ");
        goto addr_4048b0_14;
    }
    addr_404925_136:
    if (0) {
        addr_404989_132:
        if (0) 
            goto addr_4049f8_137;
    } else {
        __asm__("insd ");
        rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(&rcx + 1));
        *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x73) = 0;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x73)) {
            addr_4049a4_139:
            rsp83 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s42**>(&rsp83->f0) = r12_84;
            rcx = *reinterpret_cast<struct s42**>(&rsp83->f0);
            rsp19 = &rsp83->f8;
            rdi85->f72 = reinterpret_cast<unsigned char>(rdi86->f72 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsi13->f49 = reinterpret_cast<unsigned char>(rsi13->f49 & reinterpret_cast<unsigned char>(rax11));
            goto addr_4049af_25;
        } else {
            *reinterpret_cast<uint32_t*>(&rsp17) = rdx2->f75 * 0x20646574;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsp17) + 4) = 0;
            goto addr_404938_23;
        }
    }
    *reinterpret_cast<unsigned char*>(&rsp42) = reinterpret_cast<unsigned char>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp16) + 100) * 0x72617720);
    *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
    cf57 = __intrinsic();
    sf52 = __undefined();
    zf50 = __undefined();
    below_or_equal59 = reinterpret_cast<uint1_t>(cf57 | zf50);
    if (cf57) {
        if (cf57) {
            addr_404a18_143:
            *reinterpret_cast<unsigned char*>(&rsp42) = rbp16->f65;
            *reinterpret_cast<int32_t*>(&rsp42 + 4) = 0;
            if (below_or_equal59) {
                rax11 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rax11) | rsi13->f6f);
                cf57 = 0;
                zf50 = reinterpret_cast<uint1_t>(rax11 == 0);
                sf52 = __intrinsic();
                below_or_equal59 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf50));
                if (zf50) 
                    goto addr_404a89_146;
            } else {
                rcx->f20 = 0;
                *reinterpret_cast<int32_t*>(&rbp16) = rdi87->f70;
                *reinterpret_cast<int32_t*>(&rbp16 + 4) = 0;
                if (!__intrinsic()) {
                    goto addr_404a48_47;
                } else {
                    __asm__("outsd ");
                    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
                    rdi88->f4e = reinterpret_cast<unsigned char>(rdi89->f4e & reinterpret_cast<unsigned char>(rax11));
                    *reinterpret_cast<struct s42**>(reinterpret_cast<unsigned char>(rsp42) - 8) = rbp16;
                    rdi90->f65 = reinterpret_cast<unsigned char>(rdi91->f65 & reinterpret_cast<unsigned char>(rax11));
                    __asm__("outsb ");
                    if (0) 
                        goto addr_404a99_151; else 
                        goto addr_404a38_152;
                }
            }
        } else {
            addr_4049f8_137:
            __asm__("insd ");
            __asm__("outsd ");
            if (!cf57) {
                rbp16->f74 = 0;
            }
        }
    } else {
        addr_404995_135:
        __asm__("outsb ");
        if (zf50) {
            if (!below_or_equal59) {
                *reinterpret_cast<unsigned char*>(&rdx2->f64) = 0;
                below_or_equal59 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rdx2->f64) == 0)));
                goto addr_404a18_143;
            }
        } else {
            rdi92->f66 = reinterpret_cast<unsigned char>(rdi93->f66 & *reinterpret_cast<unsigned char*>(&rcx + 1));
            rsp94 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rsp42) - 8);
            *reinterpret_cast<struct s42**>(&rsp94->f0) = rdx2;
            rsp42 = reinterpret_cast<struct s42*>(reinterpret_cast<unsigned char>(rsp94) - 8);
            *reinterpret_cast<struct s42**>(&rsp42->f0) = rsp42;
            goto addr_4049a4_139;
        }
    }
    __asm__("outsb ");
    goto addr_404af8_95;
    addr_404a89_146:
    addr_404a99_151:
    addr_404a38_152:
    __asm__("insb ");
    rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
    __asm__("outsd ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<unsigned char>(rbp16) * 2 + 0x65) = 0;
    rdi95->f4e = reinterpret_cast<unsigned char>(rdi96->f4e & reinterpret_cast<unsigned char>(rax11));
    rsp42 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8);
    *reinterpret_cast<struct s42**>(&rsp42->f0) = rbp16;
    rdi97->f65 = reinterpret_cast<unsigned char>(rdi98->f65 & reinterpret_cast<unsigned char>(rax11));
    cf57 = 0;
    __asm__("outsb ");
    if (!0) 
        goto addr_4048c3_160;
    goto addr_404925_136;
    addr_4048c3_160:
    __asm__("insb ");
    rax11->f75 = reinterpret_cast<unsigned char>(rax11->f75 & reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&rdx2)));
}

struct s76 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s77 {
    signed char[101] pad101;
    unsigned char f65;
};

struct s78 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s79 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s80 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s81 {
    signed char[111] pad111;
    signed char f6f;
};

struct s82 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s83 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s84 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s85 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s86 {
    signed char[118] pad118;
    unsigned char f76;
};

struct s87 {
    signed char[118] pad118;
    unsigned char f76;
};

void fun_40484d(struct s76* rcx, int16_t dx) {
    struct s77* rdx2;
    int1_t cf3;
    int1_t cf4;
    int1_t zf5;
    int1_t sf6;
    struct s78* rsi7;
    struct s79* rsi8;
    unsigned char ah9;
    struct s80* rbx10;
    int1_t zf11;
    struct s81* rbx12;
    struct s82* rdi13;
    struct s83* rdi14;
    void* rsp15;
    int1_t zf16;
    void** rax17;
    void** rax18;
    struct s84* rsi19;
    struct s85* rsi20;
    unsigned char ah21;
    struct s86* rbp22;
    struct s87* rbp23;
    unsigned char ah24;
    void* rax25;
    int64_t rbp26;

    *reinterpret_cast<int16_t*>(&rdx2) = dx;
    if (cf3) 
        goto " Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    if (!cf4) {
        goto addr_404874_4;
    }
    if (!zf5) 
        goto "l Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsb ");
    if (sf6) 
        goto addr_404859_7;
    addr_404865_9:
    __asm__("insd ");
    rcx->f73 = reinterpret_cast<unsigned char>(rcx->f73 & *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx) + 1));
    rsi7->f72 = reinterpret_cast<unsigned char>(rsi8->f72 & ah9);
    rbx10->f6f = 0;
    zf11 = rbx12->f6f == 0;
    if (zf11) {
        if (!zf11) 
            goto addr_4048f2_12;
    } else {
        addr_404874_4:
    }
    rdi13->f41 = reinterpret_cast<unsigned char>(rdi14->f41 & *reinterpret_cast<unsigned char*>(&rdx2));
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 - 8 - 8 + 8);
    zf16 = *reinterpret_cast<void**>(&rsp15) == *rax17;
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp15)) <= reinterpret_cast<uint32_t>(*rax18)) 
        goto addr_404979_15;
    addr_404979_15:
    if (zf16) 
        goto "l Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("outsd ");
    if (zf16) 
        goto addr_40497e_18;
    rsi19->f6f = reinterpret_cast<unsigned char>(rsi20->f6f & ah21);
    addr_40497e_18:
    rbp22->f76 = reinterpret_cast<unsigned char>(rbp23->f76 & ah24);
    addr_4048f2_12:
    addr_404859_7:
    *reinterpret_cast<unsigned char*>(&rdx2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rdx2) | *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax25) + rbp26 * 2 + 0x69));
    if (1) {
        rdx2->f65 = 0;
        if (__undefined()) 
            goto addr_4048f2_12; else 
            goto "???";
    } else {
        if (0) 
            goto " as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        __asm__("outsd ");
        if (0) 
            goto "ublic License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
            goto addr_404865_9;
    }
}

struct s88 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s89 {
    signed char[114] pad114;
    unsigned char f72;
};

struct s90 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s91 {
    signed char[111] pad111;
    unsigned char f6f;
};

void fun_404875(int64_t rcx, unsigned char dl) {
    void* rsp3;
    int1_t cf4;
    int1_t sf5;
    int1_t zf6;
    void** rax7;
    void** rax8;
    struct s88* rsi9;
    struct s89* rsi10;
    unsigned char al11;
    struct s90* rbx12;
    struct s91* rbx13;

    rsp3 = __zero_stack_offset();
    if (cf4) {
        if (!sf5) 
            goto "oftware Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (!zf6) 
            goto addr_4048e6_4;
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rsp3)) < reinterpret_cast<int32_t>(*rax7)) {
            if (*reinterpret_cast<void**>(&rsp3) != *rax8) {
            }
        }
    }
    addr_4048e6_4:
    rsi9->f72 = reinterpret_cast<unsigned char>(rsi10->f72 & al11);
    rbx12->f6f = reinterpret_cast<unsigned char>(rbx13->f6f & dl);
}

void fun_404895() {
    int1_t cf1;

    __asm__("outsd ");
    if (cf1) 
        goto " GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insd ");
    __asm__("outsd ");
}

void fun_4048da() {
    __asm__("insb ");
}

struct s92 {
    signed char[78] pad78;
    unsigned char f4e;
};

struct s93 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s94 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s95 {
    signed char[111] pad111;
    signed char f6f;
};

void fun_4048f3(struct s92* rcx) {
    int1_t cf2;
    struct s93* rsi3;
    struct s94* rsi4;
    unsigned char al5;
    struct s95* rsi6;
    unsigned char al7;

    if (!cf2) {
        rsi3->f6f = reinterpret_cast<unsigned char>(rsi4->f6f & al5);
        if (rsi6->f6f) {
            rcx->f4e = reinterpret_cast<unsigned char>(rcx->f4e & al7);
        }
    }
}

struct s96 {
    signed char[110] pad110;
    int32_t f6e;
};

void fun_4048fc() {
    void* rsp1;
    int1_t zf2;
    void** rax3;
    void** rax4;
    int64_t rbp5;
    struct s96* rdi6;
    void* rax7;
    void* rax8;
    unsigned char dh9;

    rsp1 = __zero_stack_offset();
    if (!zf2) {
        __asm__("outsd ");
        __asm__("outsb ");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp1)) <= reinterpret_cast<uint32_t>(*rax3)) 
            goto "ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rsp1)) < reinterpret_cast<uint32_t>(*rax4)) 
            goto "thout even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
        *reinterpret_cast<int32_t*>(&rbp5) = rdi6->f6e * 0x6f203220;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = 0;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax7) + rbp5 * 2 + 0x65) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax8) + rbp5 * 2 + 0x65) & dh9);
    }
}

void fun_404948() {
    int1_t zf1;

    if (zf1) 
        goto "NY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

struct s97 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s98 {
    signed char[115] pad115;
    unsigned char f73;
};

struct s99 {
    signed char[115] pad115;
    signed char f73;
};

void fun_404953() {
    struct s97* rbp1;
    struct s98* rbp2;
    unsigned char dh3;
    struct s99* rbp4;

    rbp1->f73 = reinterpret_cast<unsigned char>(rbp2->f73 & dh3);
    if (rbp4->f73) 
        goto " PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA"; else 
        goto "???";
}

void fun_40495e() {
    int1_t zf1;

    if (!zf1) 
        goto " the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
}

void fun_4049e8() {
    __asm__("insb ");
    __asm__("outsb ");
    if (__intrinsic()) 
        goto "???";
}

struct s100 {
    signed char[97] pad97;
    unsigned char f61;
};

struct s101 {
    signed char[97] pad97;
    unsigned char f61;
};

void fun_404a01() {
    struct s100* rax1;
    struct s101* rax2;
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

void fun_404a3d() {
    __asm__("insb ");
}

void fun_404a82() {
    int1_t cf1;

    if (cf1) 
        goto "reateFileMappingNumaW"; else 
        goto "???";
}

void fun_404a8b() {
    int1_t zf1;

    if (!zf1) {
        __asm__("outsd ");
        __asm__("outsb ");
        __asm__("outsb ");
    }
}

struct s102 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s103 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_404a9d(int64_t rcx) {
    struct s102* rsi2;
    struct s103* rsi3;
    unsigned char al4;

    __asm__("outsb ");
    if (__undefined()) 
        goto "Control";
    if (__undefined()) 
        goto 0x404ad6;
    rsi2->f69 = reinterpret_cast<unsigned char>(rsi3->f69 & al4);
}

void fun_404ae1() {
    __asm__("outsb ");
    __asm__("insb ");
}

void fun_404aec() {
    int1_t zf1;

    if (zf1) {
    }
}

void fun_404afd() {
    unsigned char tmp8_1;
    signed char* rax2;
    signed char al3;
    int1_t cf4;
    unsigned char* rax5;
    unsigned char* rax6;

    tmp8_1 = reinterpret_cast<unsigned char>(*rax2 + al3);
    cf4 = tmp8_1 < *rax5;
    *rax6 = tmp8_1;
    __asm__("rol byte [rax], 0x43");
    if (cf4) 
        goto "neW";
}

void fun_404b06() {
    int1_t zf1;

    if (zf1) 
        goto 0x404b6d;
    if (__intrinsic() | __undefined()) 
        goto "tStringsW";
    __asm__("outsd ");
}

void fun_404b66() {
    __asm__("outsb ");
}

void fun_404ba0() {
    __asm__("outsb ");
    __asm__("insb ");
}

void fun_404bb6() {
    int1_t zf1;

    if (!zf1) {
        __asm__("outsd ");
    }
}

void fun_404bbe() {
    int1_t sf1;
    signed char* rbx2;
    signed char* rbx3;
    signed char ch4;

    __asm__("outsb ");
    __asm__("insb ");
    *rbx2 = reinterpret_cast<signed char>(*rbx3 + ch4);
}

void fun_404bdb() {
    int1_t cf1;
    int1_t cf2;

    if (!cf1) 
        goto "le";
    if (cf2) 
        goto "e"; else 
        goto "???";
}

void fun_404bee() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    __asm__("outsb ");
    __asm__("insb ");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

void fun_404c19() {
}

void fun_404c23() {
    int1_t zf1;
    int1_t zf2;

    if (!zf1) 
        goto "K";
    if (zf2) 
        goto 0x404c6b; else 
        goto "???";
}

void fun_404c3c() {
    int1_t of1;

    if (of1) 
        goto 0x404c94; else 
        goto "???";
}

void fun_404c4a() {
    int1_t cf1;

    if (cf1) 
        goto 0x404cb6; else 
        goto "???";
}

void fun_404ce1() {
    signed char* r8_1;
    signed char* r8_2;
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

    *r8_1 = reinterpret_cast<signed char>(*r8_2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    __asm__("in al, 0x4b");
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
    __asm__("hlt ");
}

void fun_404d40(uint32_t ecx, int64_t rdx) {
    int64_t rbp3;
    int64_t rbp4;
    signed char ah5;
    int64_t rax6;
    int16_t ax7;
    uint32_t* rsi8;
    uint32_t* rsi9;

    *reinterpret_cast<signed char*>(rbp3 - 96) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp4 - 96) + ah5);
    *reinterpret_cast<uint32_t*>(&rax6) = reinterpret_cast<uint32_t>(static_cast<int32_t>(ax7));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    *reinterpret_cast<signed char*>(rax6 + 0x7e77f9c) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax6 + 0x7e77f9c) + *reinterpret_cast<signed char*>(&rdx));
    *rsi8 = *rsi9 | ecx;
}

struct s104 {
    signed char f0;
    signed char[2140930311] pad2140930312;
    signed char f7f9c0108;
};

void fun_404d80(signed char* rcx, signed char* rdx) {
    int64_t rax3;
    int32_t eax4;
    unsigned char* rsi5;
    unsigned char* rsi6;
    struct s104* rax7;

    *reinterpret_cast<int32_t*>(&rax3) = eax4 + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    rsi5[reinterpret_cast<int64_t>(rcx) * 8] = reinterpret_cast<unsigned char>(rsi6[reinterpret_cast<int64_t>(rcx) * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *rcx = reinterpret_cast<signed char>(*rcx + *reinterpret_cast<signed char*>(&rax3));
    *reinterpret_cast<uint32_t*>(&rax7) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax3) + *reinterpret_cast<int32_t*>(rax3 + 0x14010020)) & 0x800302d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    *reinterpret_cast<signed char*>(&rax7) = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&rax7)));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax7) + reinterpret_cast<int64_t>(rax7) * 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax7) + reinterpret_cast<int64_t>(rax7) * 4) + 16);
    *rdx = reinterpret_cast<signed char>(*rdx + *reinterpret_cast<signed char*>(&rax7));
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax7) + 0x7f9c0108) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax7) + 0x7f9c0108) + *reinterpret_cast<signed char*>(&rax7));
}

void fun_404da5(uint32_t ecx) {
    uint32_t* rsi2;
    uint32_t* rsi3;

    *rsi2 = *rsi3 | ecx;
}

void fun_404dbb(signed char* rcx) {
    signed char* rax2;
    int32_t eax3;
    int64_t rax4;

    *reinterpret_cast<int32_t*>(&rax2) = eax3 + *reinterpret_cast<int32_t*>(rax4 + 0xc02080);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    *rcx = reinterpret_cast<signed char>(static_cast<int32_t>(*rcx));
    *reinterpret_cast<signed char*>(&rax2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax2) + *rax2);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) - 100);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx) + reinterpret_cast<int64_t>(rax2)) == 0))) {
    }
}

void fun_404dcd(uint32_t ecx) {
    uint32_t* rsi2;
    uint32_t* rsi3;

    *rsi2 = *rsi3 | ecx;
}

struct s105 {
    unsigned char f0;
    signed char[75498623] pad75498624;
    int32_t f4800480;
};

void fun_404dd0(signed char* rcx) {
    int64_t rax2;
    int32_t eax3;
    unsigned char* rsi4;
    unsigned char* rsi5;
    struct s105* rax6;
    signed char dh7;
    uint32_t tmp32_8;
    uint1_t cf9;
    uint1_t less_or_equal10;

    *reinterpret_cast<int32_t*>(&rax2) = eax3 + 0x23f1815;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    rsi4[reinterpret_cast<int64_t>(rcx) * 8] = reinterpret_cast<unsigned char>(rsi5[reinterpret_cast<int64_t>(rcx) * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *rcx = reinterpret_cast<signed char>(*rcx + *reinterpret_cast<signed char*>(&rax2));
    *reinterpret_cast<uint32_t*>(&rax6) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax2) + *reinterpret_cast<int32_t*>(rax2 + 0x14010020));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    do {
        __asm__("cli ");
        rax6->f0 = reinterpret_cast<unsigned char>(rax6->f0 + dh7);
        tmp32_8 = *reinterpret_cast<uint32_t*>(&rax6) + rax6->f4800480;
        cf9 = reinterpret_cast<uint1_t>(tmp32_8 < *reinterpret_cast<uint32_t*>(&rax6));
        *reinterpret_cast<uint32_t*>(&rax6) = tmp32_8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
        rax6->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(rax6->f0)) + cf9);
        *reinterpret_cast<unsigned char*>(&rax6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax6) + rax6->f0);
        rax6->f0 = reinterpret_cast<unsigned char>(rax6->f0 | 1);
        less_or_equal10 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(__intrinsic()) | reinterpret_cast<uint1_t>(rax6->f0 == 0));
    } while (!less_or_equal10);
}

void fun_404df6(int16_t cx) {
    int64_t rbx2;
    int64_t rbx3;

    __asm__("out 0x3, eax");
    __asm__("xlatb ");
    *reinterpret_cast<unsigned char*>(rbx2 - 0x30fd2ffe) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rbx3 - 0x30fd2ffe) | *reinterpret_cast<unsigned char*>(&cx));
}

struct s106 {
    signed char[127] pad127;
    signed char f7f;
};

struct s107 {
    signed char[127] pad127;
    signed char f7f;
};

struct s108 {
    signed char[127] pad127;
    signed char f7f;
};

struct s109 {
    signed char[127] pad127;
    signed char f7f;
};

void fun_404e02() {
    signed char* rdx1;
    signed char* rdx2;
    signed char al3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t eax6;
    signed char* rax7;
    signed char* rax8;
    signed char ah9;
    struct s106* rdi10;
    struct s107* rdi11;
    signed char bh12;
    struct s108* rdi13;
    struct s109* rdi14;
    int64_t rax15;
    int64_t rax16;
    int64_t rax17;
    int64_t rax18;
    signed char al19;
    unsigned char* rax20;
    unsigned char* rax21;
    int64_t rax22;
    int64_t rax23;
    signed char* rax24;
    int64_t rax25;
    signed char* rax26;
    int64_t rax27;
    int64_t rax28;
    int64_t rax29;

    *rdx1 = reinterpret_cast<signed char>(*rdx2 + al3);
    __asm__("rol dword [rcx], 0xe");
    *rax4 = *rax5 + eax6;
    *rax7 = reinterpret_cast<signed char>(*rax8 + ah9);
    rdi10->f7f = reinterpret_cast<signed char>(rdi11->f7f + bh12);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(rdi13->f7f < 0 != __intrinsic()) | reinterpret_cast<uint1_t>(rdi14->f7f == 0))) {
        *reinterpret_cast<signed char*>(rax15 - 0x7ff37f80) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax16 - 0x7ff37f80) - 0x80);
        *reinterpret_cast<signed char*>(rax17 - 0x7f7f7fff) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax18 - 0x7f7f7fff) + al19);
        *rax20 = reinterpret_cast<unsigned char>(*rax21 | 0x80);
        *reinterpret_cast<signed char*>(rax22 - 0x7f7ff380) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax23 - 0x7f7ff380) + 16);
        rax24[rax25 * 4] = reinterpret_cast<signed char>(rax26[rax27 * 4] - 0x80);
        *reinterpret_cast<signed char*>(rax28 + 0x7e77e04) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax29 + 0x7e77e04) + 9);
    }
}

struct s110 {
    unsigned char f0;
    signed char[75499647] pad75499648;
    unsigned char f4800880;
};

void fun_404e36(signed char* rcx) {
    int64_t rax2;
    int32_t eax3;
    unsigned char* rsi4;
    unsigned char* rsi5;
    uint32_t tmp32_6;
    struct s110* rax7;
    unsigned char tmp8_8;
    uint1_t cf9;
    unsigned char tmp8_10;
    uint1_t cf11;

    *reinterpret_cast<uint32_t*>(&rax2) = reinterpret_cast<uint32_t>(eax3 + 0x23f1815);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    rsi4[reinterpret_cast<int64_t>(rcx) * 8] = reinterpret_cast<unsigned char>(rsi5[reinterpret_cast<int64_t>(rcx) * 8] | *reinterpret_cast<unsigned char*>(&rcx));
    *rcx = reinterpret_cast<signed char>(*rcx + *reinterpret_cast<signed char*>(&rax2));
    tmp32_6 = *reinterpret_cast<uint32_t*>(&rax2) + *reinterpret_cast<int32_t*>(rax2 - 0x7f7effe0);
    *reinterpret_cast<uint32_t*>(&rax7) = tmp32_6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rax7->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax7->f0 - 0x6c) + reinterpret_cast<uint1_t>(tmp32_6 < *reinterpret_cast<uint32_t*>(&rax2)));
    tmp8_8 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax7) - 0x7f7f5af0) + 16);
    cf9 = reinterpret_cast<uint1_t>(tmp8_8 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax7) - 0x7f7f5af0));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax7) - 0x7f7f5af0) = tmp8_8;
    *reinterpret_cast<unsigned char*>(&rax7) = 0x80;
    rax7->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax7->f0 + 3) + cf9);
    tmp8_10 = reinterpret_cast<unsigned char>(rax7->f4800880 - 0x80);
    cf11 = reinterpret_cast<uint1_t>(tmp8_10 < rax7->f4800880);
    rax7->f4800880 = tmp8_10;
    rax7->f0 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rax7->f0 + 0x80) + cf11);
    *reinterpret_cast<unsigned char*>(&rax7) = reinterpret_cast<unsigned char>(0x80 + rax7->f0);
    rax7->f0 = reinterpret_cast<unsigned char>(rax7->f0 | 1);
}

void fun_4011ac() {
    uint64_t* rax1;

    rax1 = fun_401158(0x3220, 0x6f000);
    *rax1 = *rax1 & 0xfffffffffffffffe;
    __asm__("invlpg [rbx]");
    return;
}

int64_t fun_40126d() {
    return 0;
}

void fun_401299() {
    return;
}

int64_t fun_404355(int64_t rcx) {
    int64_t rax2;
    uint32_t eax3;
    uint32_t eax4;
    int1_t cf5;

    *reinterpret_cast<uint32_t*>(&rax2) = eax3 >> 16 & 0xfff | eax4 >> 28 << 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    cf5 = *reinterpret_cast<uint16_t*>(&rax2) < 0xfff;
    if (!cf5) {
        *reinterpret_cast<uint32_t*>(&rax2) = g436348;
    } else {
        __asm__("syscall ");
        if (!cf5) {
            return rax2;
        }
    }
    g437fb0 = *reinterpret_cast<uint32_t*>(&rax2);
    return 0xff;
}

void fun_4044a6() {
    int64_t* rdi1;
    int64_t* rsi2;

    *rdi1 = *rsi2;
}

void fun_40453f() {
}

void fun_40455f() {
}

void fun_40457c() {
    uint64_t rdx1;
    int32_t eax2;
    int32_t esi3;
    int64_t rcx4;
    int64_t rdx5;
    signed char* rdi6;

    if (rdx1 >= 0x400) {
        eax2 = esi3;
        rcx4 = rdx5;
        while (*reinterpret_cast<int32_t*>(&rcx4)) {
            *reinterpret_cast<int32_t*>(&rcx4) = *reinterpret_cast<int32_t*>(&rcx4) - 1;
            *rdi6 = *reinterpret_cast<signed char*>(&eax2);
            ++rdi6;
        }
        goto 0x4045e1;
    }
}

void fun_4045e4() {
    uint64_t* rdi1;
    unsigned char sil2;

    *rdi1 = static_cast<uint64_t>(sil2) * 0x101010101010101;
}

int64_t fun_40462e() {
    int64_t rdi1;
    int64_t rsi2;
    int64_t rdx3;
    int64_t rax4;
    uint64_t r8_5;
    uint64_t rdx6;
    int64_t rcx7;
    int64_t rax8;
    int64_t rdx9;
    int64_t rdi10;
    int64_t rsi11;

    if (rdi1 == rsi2 || !rdx3) {
        addr_40468d_2:
        *reinterpret_cast<uint32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        r8_5 = (rdx6 >> 4) + 1;
        rcx7 = -16;
        do {
            rcx7 = rcx7 + 16;
            --r8_5;
            if (!r8_5) 
                goto addr_404673_5;
            __asm__("movdqu xmm0, [rdi+rcx]");
            __asm__("movdqu xmm1, [rsi+rcx]");
            __asm__("pcmpeqb xmm0, xmm1");
            __asm__("pmovmskb eax, xmm0");
            *reinterpret_cast<int32_t*>(&rax8) = *reinterpret_cast<int32_t*>(&rax8) - 0xffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        } while (!*reinterpret_cast<int32_t*>(&rax8));
        goto addr_40466d_7;
    }
    addr_40468f_8:
    return rax4;
    do {
        addr_404673_5:
        if (rdx9 == rcx7) 
            goto addr_40468d_2;
        ++rcx7;
        *reinterpret_cast<uint32_t*>(&rax4) = *reinterpret_cast<unsigned char*>(rdi10 + rcx7 - 1) - *reinterpret_cast<unsigned char*>(rsi11 + rcx7 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } while (!*reinterpret_cast<uint32_t*>(&rax4));
    goto addr_40468f_8;
    addr_40466d_7:
    __asm__("bsf eax, eax");
    rcx7 = rcx7 + rax8;
    goto addr_404673_5;
}

void fun_404cf1(unsigned char cl, unsigned char* rdx, signed char* r8) {
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    signed char* rax8;
    signed char* rax9;
    signed char al10;
    unsigned char* rax11;
    signed char al12;
    unsigned char tmp8_13;
    uint1_t cf14;
    int64_t rcx15;
    unsigned char tmp8_16;
    int64_t rsi17;
    int64_t rsi18;
    int64_t rax19;
    unsigned char* rsi20;
    unsigned char* rsi21;

    *r8 = reinterpret_cast<signed char>(*r8 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    *rax8 = reinterpret_cast<signed char>(*rax9 + al10);
    *reinterpret_cast<signed char*>(&rax11) = reinterpret_cast<signed char>(al12 + 76);
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    tmp8_13 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    cf14 = reinterpret_cast<uint1_t>(tmp8_13 < *rax11);
    *rax11 = tmp8_13;
    *reinterpret_cast<unsigned char*>(&rcx15) = reinterpret_cast<unsigned char>(cl - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<int64_t>(rax11)) + reinterpret_cast<uint1_t>(cl < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax11) + reinterpret_cast<int64_t>(rax11)) + cf14))));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&r8));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&r8));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    *rax11 = reinterpret_cast<unsigned char>(*rax11 + *reinterpret_cast<signed char*>(&rax11));
    tmp8_16 = *reinterpret_cast<unsigned char*>(rsi17 + 0x72727272);
    *reinterpret_cast<signed char*>(rsi18 + 0x72727272) = *reinterpret_cast<signed char*>(&rax11);
    *reinterpret_cast<unsigned char*>(&rax19) = tmp8_16;
    if (0) {
        *reinterpret_cast<int32_t*>(&rax19) = *reinterpret_cast<int32_t*>(&rax19) + 0x2241815;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0;
    } else {
        if (!0) {
        }
    }
    *rsi20 = reinterpret_cast<unsigned char>(*rsi21 | *reinterpret_cast<unsigned char*>(&rcx15));
    *rdx = reinterpret_cast<unsigned char>(*rdx + *reinterpret_cast<unsigned char*>(&rax19));
    *reinterpret_cast<unsigned char*>(rax19 + 0x1e70480) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax19 + 0x1e70480) & *reinterpret_cast<unsigned char*>(&rax19));
}

struct s111 {
    int32_t f0;
    signed char[20] pad24;
    int32_t f18;
};

struct s112 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

struct s113 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int32_t f10;
    int32_t f14;
};

void fun_4011d4() {
    struct s111* r9_1;
    struct s111* rdi2;
    uint32_t r10d3;
    int64_t rax4;
    uint32_t r11d5;
    struct s112* rdx6;
    int32_t rbx7;
    int64_t r13_8;
    struct s112* r8_9;
    int32_t r12d10;
    int32_t r14d11;
    int64_t rax12;
    uint32_t ecx13;
    int32_t* rsi14;
    struct s112* rdi15;
    int1_t zf16;
    int32_t ecx17;
    struct s113* rax18;

    r9_1 = rdi2;
    r10d3 = 0;
    while (*reinterpret_cast<uint32_t*>(&rax4) = r10d3, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, !!*reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_1) + rax4 * 24 + 8)) {
        ++r10d3;
    }
    r11d5 = 1;
    rdx6 = reinterpret_cast<struct s112*>(&r9_1->f18);
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
                    rdi15 = reinterpret_cast<struct s112*>(&rdi15->pad8);
                    ++rsi14;
                }
            } while (!zf16);
            goto addr_40123e_12;
            *reinterpret_cast<uint32_t*>(&rax12) = ecx13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            continue;
            addr_40123e_12:
            ++r11d5;
            ++rdx6;
            rax18 = reinterpret_cast<struct s113*>(rax12 * 24 + reinterpret_cast<int64_t>(r9_1));
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

void fun_401270() {
    __asm__("cli ");
    __asm__("hlt ");
}

void fun_40129e() {
    int64_t v1;
    int64_t* r14_2;
    int64_t* rdi3;
    int64_t rcx4;
    int64_t rcx5;
    int64_t* rdi6;
    int64_t* rax7;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<unsigned char*>(&g4362b8) = 8;
    r14_2 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + *reinterpret_cast<int32_t*>(&v1) * 8 + 24);
    *reinterpret_cast<int32_t*>(&rdi3) = 0x405010;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rcx4) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
    while (rcx4) {
        --rcx4;
        *rdi3 = reinterpret_cast<int64_t>(fun_40126d);
        ++rdi3;
    }
    *reinterpret_cast<uint32_t*>(&rcx5) = 0xffffffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    rdi6 = r14_2;
    do {
        if (!rcx5) 
            break;
        --rcx5;
        ++rdi6;
    } while (*rdi6);
    fun_4012f0();
    g437fb4 = g437fb4 | 1;
    *reinterpret_cast<int32_t*>(&rax7) = 0x405008;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    while (0x405008 != rax7) {
        *rax7();
        ++rax7;
    }
    fun_401460();
    fun_40153d();
}

struct s15* fun_403c02(struct s13* rcx, uint64_t rdx, int64_t r8) {
    int64_t rdi4;
    uint64_t rsi5;
    int64_t rsi6;
    void* rdx7;
    uint64_t rsi8;
    int64_t rsi9;
    struct s29* rax10;
    struct s15* rax11;
    uint64_t rdx12;
    int64_t rdi13;
    uint64_t rdx14;
    uint64_t rsi15;

    if (!rdi4) {
        goto fun_40238e;
    }
    if (rsi5 <= 0xffffffffffffff7f) {
        if (rsi6) {
            *reinterpret_cast<int32_t*>(&rdx7) = 32;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
            if (rsi8 > 14) {
                rdx7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi9 + 31) & 0xfffffffffffffff0);
            }
            rax10 = fun_403873(1, rdx7, r8);
            if (!rax10) {
                rax11 = fun_40238e(1, rdx7);
                if (rax11) {
                    rdx12 = *reinterpret_cast<uint64_t*>(rdi13 - 8);
                    rdx14 = (rdx12 & 0xfffffffffffffff8) - 16;
                    if (rdx14 > rsi15) {
                        rdx14 = rsi15;
                    }
                    fun_404420(1, rdx14);
                    fun_403312(1, rdx14);
                    rax11 = rax11;
                }
            } else {
                rax11 = reinterpret_cast<struct s15*>(&rax10->f10);
            }
        } else {
            fun_403312(rcx, rdx);
            goto addr_403c43_14;
        }
    } else {
        fun_401556();
        goto addr_403c43_14;
    }
    addr_403cb3_16:
    return rax11;
    addr_403c43_14:
    *reinterpret_cast<int32_t*>(&rax11) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
    goto addr_403cb3_16;
}

struct s114 {
    uint32_t f0;
    signed char[12] pad16;
    int64_t f10;
    int64_t f18;
    int64_t f20;
};

struct s35* fun_401ac6();

struct s13* fun_404151() {
    struct s35* rbx1;
    int64_t rax2;
    struct s114* rbx3;
    struct s13* rax4;
    int64_t rdi5;
    int64_t rsi6;
    int64_t rdx7;
    struct s35* rax8;

    rbx1 = g4367e0;
    if (!rbx1) {
        g4367e0 = reinterpret_cast<struct s35*>(0x4367e8);
        *reinterpret_cast<int32_t*>(&rbx1) = 0x4367e8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx1) + 4) = 0;
    }
    if (rbx1->f0 != 0xffffffff) {
        addr_4041b8_4:
        __asm__("bsr eax, eax");
        __asm__("bts edx, eax");
        *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(~rbx1->f0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        rbx1->f0 = rbx1->f0;
        rbx3 = reinterpret_cast<struct s114*>(reinterpret_cast<int64_t>(rbx1) + rax2 * 24);
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(&rax4 + 1) = 0;
        rbx3->f10 = rdi5;
        rbx3->f18 = rsi6;
        rbx3->f20 = rdx7;
    } else {
        if (rax8 = fun_401ac6(), rax8 == 0) {
            rax4 = fun_401556();
        } else {
            rax8->f8 = rbx1;
            g4367e0 = rax8;
            rbx1 = rax8;
            goto addr_4041b8_4;
        }
    }
    return rax4;
}

void fun_404310(int64_t rcx) {
    uint64_t rax2;
    int16_t ax3;

    *reinterpret_cast<int32_t*>(&rax2) = ax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax2) < 0) 
        goto 0x404332;
    __asm__("syscall ");
    if (rax2 < 0xfffffffffffff001) {
        return;
    }
}

void fun_404410() {
}

struct s115 {
    signed char[2] pad2;
    signed char f2;
};

struct s116 {
    signed char[2] pad2;
    signed char f2;
};

struct s117 {
    signed char[1] pad1;
    signed char f1;
};

struct s118 {
    signed char[1] pad1;
    signed char f1;
};

void fun_4044c9() {
    struct s115* rdi1;
    struct s116* rsi2;
    struct s117* rdi3;
    struct s118* rsi4;
    signed char* rdi5;
    signed char* rsi6;

    rdi1->f2 = rsi2->f2;
    rdi3->f1 = rsi4->f1;
    *rdi5 = *rsi6;
    goto 0x4044b8;
}

void fun_4044ba() {
    int32_t* rdi1;
    int32_t* rsi2;

    *rdi1 = *rsi2;
}

struct s119 {
    signed char[2] pad2;
    signed char f2;
};

struct s120 {
    signed char[1] pad1;
    signed char f1;
};

void fun_404614() {
    struct s119* rdi1;
    signed char sil2;
    struct s120* rdi3;
    signed char sil4;
    signed char* rdi5;
    signed char sil6;

    rdi1->f2 = sil2;
    rdi3->f1 = sil4;
    *rdi5 = sil6;
    goto 0x4045e1;
}

void fun_404600() {
}

int64_t fun_404690(int64_t rcx, uint32_t edx) {
    int64_t rax3;
    uint32_t ebx4;
    int64_t rcx5;
    int64_t rsi6;
    int64_t rdi7;
    int64_t rdi8;
    int64_t rsi9;

    *reinterpret_cast<uint32_t*>(&rax3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    ebx4 = 0;
    *reinterpret_cast<uint32_t*>(&rcx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    if (edx && rsi6 != rdi7) {
        while (*reinterpret_cast<uint32_t*>(&rcx5) < edx && ((*reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<unsigned char*>(rdi8 + rcx5), ebx4 = *reinterpret_cast<unsigned char*>(rsi9 + rcx5), !!*reinterpret_cast<signed char*>(&rax3)) && *reinterpret_cast<signed char*>(&rax3) == *reinterpret_cast<signed char*>(&ebx4))) {
            *reinterpret_cast<uint32_t*>(&rcx5) = *reinterpret_cast<uint32_t*>(&rcx5) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        }
        *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax3) - ebx4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    }
    return rax3;
}

void fun_4046f0() {
    goto 0x4046ef;
}

void fun_4047b1() {
    unsigned char* rax1;
    unsigned char al2;
    unsigned char* rax3;
    unsigned char tmp8_4;
    int1_t cf5;

    __asm__("outsb ");
    __asm__("outsd ");
    __asm__("insb ");
    __asm__("insb ");
    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 | *rax3);
    *rax1 = reinterpret_cast<unsigned char>(*rax1 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rax1) + reinterpret_cast<uint1_t>(*rax1 < reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&rax1))))));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<int32_t*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    tmp8_4 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
    cf5 = tmp8_4 < *rax1;
    *rax1 = tmp8_4;
    if (cf5) 
        goto "Roberts Tunney\n\nThis program is free software; you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation; version 2 of the License.\n\nThis program is distributed in the hope that it will be useful, but\nWITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU\nGeneral Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program; if not, write to the Free Software\nFoundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA\n02110-1301 USA";
    __asm__("insb ");
}

void fun_40127c() {
    goto 0x40127b;
}

void fun_4012a7() {
    int1_t zf1;
    int64_t rdi2;

    zf1 = rdi2 == 0;
    if (!zf1) {
    }
    if (zf1) 
        goto 0x4012b7;
    *reinterpret_cast<unsigned char*>(&g4362b8) = 32;
}

int64_t SetDefaultDllDirectories = 0x4c1a;

int64_t WriteFile = 0x4c48;

int64_t GetCommandLineW = 0x4b5c;

int64_t GetEnvironmentStringsW = 0x4b6e;

int64_t FreeEnvironmentStringsW = 0x4b42;

void fun_401577() {
    int64_t rcx1;
    void* rbp2;
    int32_t eax3;
    int64_t rax4;
    void* r9_5;
    uint16_t* rax6;
    struct s16* rdx7;
    uint16_t* r13_8;
    void* rax9;
    signed char* rcx10;
    void* v11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t v14;
    int64_t rax15;
    signed char* rcx16;
    signed char* r10_17;
    uint64_t r8_18;
    struct s16* rdx19;
    signed char* r11_20;
    signed char* rax21;
    uint32_t r9d22;
    uint64_t rax23;
    uint32_t eax24;
    uint32_t eax25;
    int64_t rax26;
    void* rax27;
    void* rcx28;

    *reinterpret_cast<int32_t*>(&rcx1) = 0x800;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    rbp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    eax3 = reinterpret_cast<int32_t>(SetDefaultDllDirectories(0x800));
    if (!eax3) {
        rax4 = reinterpret_cast<int64_t>(GetStdHandle(-12));
        r9_5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp2) - 0x8030);
        WriteFile(rax4, fun_4047b1, 6, r9_5);
        *reinterpret_cast<int32_t*>(&rcx1) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
        ExitProcess(1, 0x4015bf, 6, r9_5);
    }
    g4362b8 = 4;
    GetCommandLineW(rcx1, 0x4015bf, 6, r9_5);
    rax6 = reinterpret_cast<uint16_t*>(GetEnvironmentStringsW(rcx1, 0x4015bf, 6, r9_5));
    *reinterpret_cast<int32_t*>(&rdx7) = 0x3fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    r13_8 = rax6;
    fun_40180c(reinterpret_cast<int64_t>(rbp2) - 0xd030, 0x3fff, 0x200, r9_5);
    *reinterpret_cast<int32_t*>(&rax9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    while (rcx10 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(v11) + reinterpret_cast<int64_t>(rax9)), *reinterpret_cast<signed char*>(&rdx7) = *rcx10, !!*reinterpret_cast<signed char*>(&rdx7)) {
        if (*reinterpret_cast<signed char*>(&rdx7) == 92) {
            *rcx10 = 47;
        }
        rax9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax9) + 1);
    }
    eax12 = *r13_8;
    if (*reinterpret_cast<uint16_t*>(&eax12) > 0xd7ff) {
        eax13 = fun_40436d(rcx10, rdx7, 0x200, rcx10, rdx7, 0x200);
    } else {
        v14 = eax12;
        eax13 = 1;
    }
    *reinterpret_cast<uint32_t*>(&rax15) = eax13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    rcx16 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) - 0x8030);
    r10_17 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) - 50);
    *reinterpret_cast<int32_t*>(&r8_18) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = 0;
    rdx19 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(r13_8) + (rax15 + rax15));
    r11_20 = rcx16;
    while (v14) {
        ++r8_18;
        if (r8_18 <= 0x1ff) {
            rax21 = reinterpret_cast<signed char*>(0);
            if (reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(r10_17)) {
                rax21 = rcx16;
            }
            *reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rbp2) + r8_18 * 8 - 0xe038) = rax21;
        }
        do {
            r9d22 = v14;
            rax23 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r9d22)));
            if (r9d22 > 0x7f) {
                rax23 = fun_40437c(rcx16, rdx19);
            }
            do {
                if (reinterpret_cast<uint64_t>(rcx16) >= reinterpret_cast<uint64_t>(r10_17)) 
                    break;
                ++rcx16;
                rax23 = rax23 >> 8;
            } while (rax23);
            eax24 = rdx19->f0;
            if (*reinterpret_cast<uint16_t*>(&eax24) > 0xd7ff) {
                eax25 = fun_40436d(rcx16, rdx19, r8_18);
            } else {
                v14 = eax24;
                eax25 = 1;
            }
            *reinterpret_cast<uint32_t*>(&rax26) = eax25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
            rdx19 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rdx19) + (rax26 + rax26));
        } while (r9d22);
        rax27 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx16) - reinterpret_cast<uint64_t>(r11_20));
        if (reinterpret_cast<uint64_t>(rax27) > 0x7ffd) {
            rax27 = reinterpret_cast<void*>(0x7ffd);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) + reinterpret_cast<uint64_t>(rax27) - 0x8030) = 0;
    }
    if (reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(r10_17)) {
        ++rcx16;
    }
    rcx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx16) - reinterpret_cast<uint64_t>(r11_20));
    if (reinterpret_cast<uint64_t>(rcx28) > 0x7ffe) {
        rcx28 = reinterpret_cast<void*>(0x7ffe);
    }
    if (r8_18 > 0x1ff) {
        r8_18 = 0x1ff;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp2) + reinterpret_cast<uint64_t>(rcx28) - 0x8030) = 0;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp2) + r8_18 * 8 - 0xe030) = 0;
    FreeEnvironmentStringsW(r13_8);
    goto 0x401472;
}

void fun_403817(struct s13* rcx) {
    uint64_t rbx2;
    int64_t rdi3;
    int64_t rdi4;
    int64_t rsi5;
    uint64_t rdi6;
    uint64_t rsi7;
    void* rdx8;
    int64_t rdi9;
    uint64_t rsi10;
    int64_t rdi11;
    struct s15* rax12;

    *reinterpret_cast<int32_t*>(&rbx2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
    if (rdi3 && ((rbx2 = reinterpret_cast<uint64_t>(rdi4 * rsi5), !!((rdi6 | rsi7) & 0xffffffffffff0000)) && (rdx8 = reinterpret_cast<void*>(rbx2 % rdi9), rsi10 != rbx2 / rdi11))) {
        rbx2 = 0xffffffffffffffff;
    }
    rax12 = fun_40238e(rcx, rdx8);
    if (rax12 && *reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rax12) + 0xfffffffffffffff8) & 3) {
        fun_404562(rcx, rbx2);
    }
    return;
}

int64_t fun_401abe() {
    return 0x437fb0;
}

void fun_401a8d() {
}

void fun_40433a() {
    goto 0x404347;
}

void fun_4046f2() {
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

void fun_40127e() {
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

int64_t g4362c8;

struct s35* fun_401ac6() {
    goto g4362c8;
}

void fun_404340() {
}
